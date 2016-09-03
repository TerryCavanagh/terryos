package haxegon;

import openfl.display.Stage;
import openfl.display.DisplayObject;
import openfl.events.Event;
import openfl.events.KeyboardEvent;
import openfl.events.TextEvent;
import openfl.ui.Keyboard;
import openfl.external.ExternalInterface;

#if flash
	import flash.desktop.Clipboard;
	import flash.desktop.ClipboardFormats;
#end

enum Keystate {
	justreleased;
	notpressed;
	pressed;
	justpressed;
	forcerelease;
}

@:access(haxegon.Text)
class Input {
	public static function pressed(k:Key):Bool {
		return keyheld[keymap.get(k)] >= 0;
	}
	
	public static function justpressed(k:Key):Bool { 
		if (current[keymap.get(k)] == Keystate.justpressed) {
			//current[keymap.get(k)] = Keystate.pressed;
			return true;
		}else {
			return false;
		}
	}
	
	public static function justreleased(k:Key):Bool { 
		if (current[keymap.get(k)] == Keystate.justreleased) {
			current[keymap.get(k)] = Keystate.notpressed;
			return true;
		}else {
			return false;
		}
	}
	
	public static function forcerelease(k:Key):Void {
		keycode = keymap.get(k);
		if (keyheld[keycode] >= 0) {
			current[keycode] = Keystate.forcerelease;
			last[keycode] = Keystate.forcerelease;
			keyheld[keycode] = -1;
		}
	}
	
	public static function pressheldtime(k:Key) : Int {
		keycode = keymap.get(k);
		return keyheld[keycode];
	}
	
	// delaypressed(): returns true at specific frame counts after the key's been pressed.
	// The first TRUE is on frame 1 (first frame after the key is pressed)
	// The second TRUE is on frame 2.35*repeatframes
	// The next is on frame 3.35*repeatframes...
	// and after (instantreps) repeats, it returns TRUE every frame
	public static function delaypressed(k:Key, repeatframes:Int, ?instantreps:Int=-1):Bool {
		keycode = keymap.get(k);
		if (keyheld[keycode] >= 1) {
			if (keyheld[keycode] == 1) {
				return true;
			} else {
				var repeatheld:Int = keyheld[keycode] - Std.int(2.35 * repeatframes) - 1;
				if (repeatheld >= 0 && (repeatheld % repeatframes) == 0) {
					return true;
				} else if (instantreps >= 1 && repeatheld >= instantreps * repeatframes) {
					return true;
				}
			}
		}
		return false;
	}
	
	private static function init(stage:Stage) {
		gamestage = stage;	
		stage.addEventListener(KeyboardEvent.KEY_DOWN, handlekeydown);
		stage.addEventListener(KeyboardEvent.KEY_UP, handlekeyup);
		stage.addEventListener(TextEvent.TEXT_INPUT, handletextinput);
		stage.addEventListener(Event.DEACTIVATE, handledeactivate);
		
		clipboardbuffer = [""];
		cut = false;
		paste = false;
		selectall = false;
		undo = false;
		redo = false;

		#if flash
			stage.addEventListener(Event.CUT, handlecut);
			stage.addEventListener(Event.COPY, handlecopy);
			stage.addEventListener(Event.PASTE, handlepaste);
			stage.addEventListener(Event.SELECT_ALL, handleselectall);
		#end
		
		resetKeys();
		
		#if !(flash || js)
			_nativeCorrection = new Map<String, Int>();
			
			_nativeCorrection.set("0_64", Keyboard.INSERT);
			_nativeCorrection.set("0_65", Keyboard.END);
			_nativeCorrection.set("0_67", Keyboard.PAGE_DOWN);
			_nativeCorrection.set("0_69", -1);
			_nativeCorrection.set("0_73", Keyboard.PAGE_UP);
			_nativeCorrection.set("0_266", Keyboard.DELETE);
			_nativeCorrection.set("123_222", Keyboard.LEFTBRACKET);
			_nativeCorrection.set("125_187", Keyboard.RIGHTBRACKET);
			_nativeCorrection.set("126_233", Keyboard.BACKQUOTE);
			
			_nativeCorrection.set("0_80", Keyboard.F1);
			_nativeCorrection.set("0_81", Keyboard.F2);
			_nativeCorrection.set("0_82", Keyboard.F3);
			_nativeCorrection.set("0_83", Keyboard.F4);
			_nativeCorrection.set("0_84", Keyboard.F5);
			_nativeCorrection.set("0_85", Keyboard.F6);
			_nativeCorrection.set("0_86", Keyboard.F7);
			_nativeCorrection.set("0_87", Keyboard.F8);
			_nativeCorrection.set("0_88", Keyboard.F9);
			_nativeCorrection.set("0_89", Keyboard.F10);
			_nativeCorrection.set("0_90", Keyboard.F11);
			
			_nativeCorrection.set("48_224", Keyboard.NUMBER_0);
			_nativeCorrection.set("49_38", Keyboard.NUMBER_1);
			_nativeCorrection.set("50_233", Keyboard.NUMBER_2);
			_nativeCorrection.set("51_34", Keyboard.NUMBER_3);
			_nativeCorrection.set("52_222", Keyboard.NUMBER_4);
			_nativeCorrection.set("53_40", Keyboard.NUMBER_5);
			_nativeCorrection.set("54_189", Keyboard.NUMBER_6);
			_nativeCorrection.set("55_232", Keyboard.NUMBER_7);
			_nativeCorrection.set("56_95", Keyboard.NUMBER_8);
			_nativeCorrection.set("57_231", Keyboard.NUMBER_9);
			
			_nativeCorrection.set("48_64", Keyboard.NUMPAD_0);
			_nativeCorrection.set("49_65", Keyboard.NUMPAD_1);
			_nativeCorrection.set("50_66", Keyboard.NUMPAD_2);
			_nativeCorrection.set("51_67", Keyboard.NUMPAD_3);
			_nativeCorrection.set("52_68", Keyboard.NUMPAD_4);
			_nativeCorrection.set("53_69", Keyboard.NUMPAD_5);
			_nativeCorrection.set("54_70", Keyboard.NUMPAD_6);
			_nativeCorrection.set("55_71", Keyboard.NUMPAD_7);
			_nativeCorrection.set("56_72", Keyboard.NUMPAD_8);
			_nativeCorrection.set("57_73", Keyboard.NUMPAD_9);
			
			_nativeCorrection.set("43_75", Keyboard.NUMPAD_ADD);
			_nativeCorrection.set("45_77", Keyboard.NUMPAD_SUBTRACT);
			_nativeCorrection.set("47_79", Keyboard.NUMPAD_DIVIDE);
			_nativeCorrection.set("46_78", Keyboard.NUMPAD_DECIMAL);
			_nativeCorrection.set("42_74", Keyboard.NUMPAD_MULTIPLY);
		#end		
	}
	
	private static function unload(stage:DisplayObject){
		stage.removeEventListener(KeyboardEvent.KEY_DOWN, handlekeydown);
		stage.removeEventListener(KeyboardEvent.KEY_UP, handlekeyup);
		stage.removeEventListener(TextEvent.TEXT_INPUT, handletextinput);
		stage.removeEventListener(Event.DEACTIVATE, handledeactivate);

		#if flash
			stage.removeEventListener(Event.CUT, handlecut);
			stage.removeEventListener(Event.COPY, handlecopy);
			stage.removeEventListener(Event.PASTE, handlepaste);
			stage.removeEventListener(Event.SELECT_ALL, handleselectall);
		#end
	}
	
	private static function update() {
		if (lastcharcode == -1) {
			lastcharcode = charcode;	
		}else {
		  if (charcode == lastcharcode) {
			  lastcharcode = -1;	
				charcode = -1;
			}else {
			  lastcharcode = charcode;
			}
		}
		
		for (i in 0 ... numletters) {
			if (lookup.exists(i)) {
				if ((last[i] == Keystate.justreleased) && (current[i] == Keystate.justreleased)) current[i] = Keystate.notpressed;
				else if ((last[i] == Keystate.justpressed) && (current[i] == Keystate.justpressed)) current[i] = Keystate.pressed;
				last[i] = current[i];
				
				if (current[i] == Keystate.justpressed || current[i] == Keystate.pressed) {
					++keyheld[i];
				}
			}
		}
	}
	
	private static function reset(){
		for (i in 0...numletters) {
			if (lookup.exists(i)) {
				current[i] = Keystate.notpressed;
				last[i] = Keystate.notpressed;
				keyheld[i] = -1;
			}
		}
	}
	
	private static function iskeycodeheld(k:Keystate):Bool {
		if (k == Keystate.justpressed || k == Keystate.pressed) {
			return true;
		}
		return false;
	}
	
	
	public static var clipboardbuffer:Array<String> = [""];
	public static var selectall:Bool;
	public static var cut:Bool;
	public static var paste:Bool;
	public static var undo:Bool;
	public static var redo:Bool;

	private static function handlecut(event:Event) {
		handlecopy(event);
		cut = true;
	}
	
	private static function handlecopy(event:Event) {
		current[keymap.get(Key.CONTROL)] = Keystate.notpressed;
		keyheld[keymap.get(Key.CONTROL)] = -1;
		
		#if flash
			Clipboard.generalClipboard.clear();
			Clipboard.generalClipboard.setData(ClipboardFormats.TEXT_FORMAT, clipboardbuffer.join("\n"), false);
		#end
	}
	
	private static function handlepaste(event:Event) {
		current[keymap.get(Key.CONTROL)] = Keystate.notpressed;
		keyheld[keymap.get(Key.CONTROL)] = -1;
		
		#if flash
			if (Clipboard.generalClipboard.hasFormat(ClipboardFormats.TEXT_FORMAT)) { 
				var t:String = Clipboard.generalClipboard.getData(ClipboardFormats.TEXT_FORMAT);
				clipboardbuffer = t.split("\n");
				for (i in 0 ... clipboardbuffer.length) {
				  clipboardbuffer[i] = S.replacechar(clipboardbuffer[i], "\t", "  ");
				  clipboardbuffer[i] = S.replacechar(clipboardbuffer[i], "\r", "");
				}
			}
			paste = true;
		#end
	}
	
	private static function handleselectall(event:Event) {
		selectall = true;
	}
	
	private static function handlekeydown(event:KeyboardEvent) {
		#if (js || html5)
		#if terryhasntupgraded
			if (ExternalInterface.call("bodyIsTargetted") == false) {
				return;
			}
		#else
			if (untyped __js__('document.activeElement.nodeName!="BODY"')){
				return;
			}
		#end
		
		charcode = event.charCode;
		
		if (charcode == 91 || charcode == 93 || charcode == 224 || charcode == 17) {	
			for(keycode in 0 ... numletters){				
				if (iskeycodeheld(current[keycode])) {
					current[keycode] = Keystate.justreleased;
				}else {
					current[keycode] = Keystate.notpressed;
				}
				keyheld[keycode] = -1;
			}
		}else {
			if (event.controlKey){
				return;
			}
		}
		#end
		
		gamestage.focus = gamestage;
		charcode = event.charCode;
		keycode = event.keyCode;
		
		#if !(flash || js)
			// Correct inconsistent native keycodes
			var corrected:Null<Int> = _nativeCorrection.get(event.charCode + "_" + event.keyCode);
			if (corrected != null) {
				keycode = corrected;
			}
		#end

		// Intercept special control chords
		if (iskeycodeheld(current[keymap.get(Key.CONTROL)])) {
			if (keycode == 90) {
				undo = true;
				return; // block Z input when doing CTRL+Z
			} else if (keycode == 89) {
				redo = true;
				return; // block Y input when doing CTRL+Y
			}
		}
		
		if (lookup.exists(keycode) && current[keycode] != Keystate.forcerelease) {
			if (iskeycodeheld(current[keycode])) {
				current[keycode] = Keystate.pressed;
			}else {
				current[keycode] = Keystate.justpressed;
				keyheld[keycode] = 0;
			}
		}
		
		if (keycode == 8) {
			//Backspace
			if (keybuffer.length > 0) {
				keybuffer = keybuffer.substr(0, keybuffer.length - 1);
			}				
			#if haxegonweb
			if (Text.inputsound > -1 && Text.input_show > 0) Webmusic.playsound(Text.inputsound, 1);
			#end
		}
	}

	private static function handletextinput(event:TextEvent) {
		// Ignore all text input that's not valid ANSI text
		if (event.text.length == 1 && event.text.charCodeAt(0) >= 32 && event.text.charCodeAt(0) <= 126) {
			if (keybuffer.length < Text.inputmaxlength) {
				keybuffer += event.text;
				#if haxegonweb
				if (Text.inputsound > -1 && Text.input_show > 0) Webmusic.playsound(Text.inputsound, 1);
				#end
			}		
		}
	}
	
	private static function handledeactivate(e:Event) {
		for(keycode in 0 ... numletters){				
			current[keycode] = Keystate.notpressed;
			keyheld[keycode] = -1;
		}
	}
	
	public static function getchar():String {
		if (lastcharcode == -1) return "";
		return String.fromCharCode(lastcharcode);
	}
	
	private static function handlekeyup(event:KeyboardEvent) {
		keycode = event.keyCode;
		
		#if !(flash || js)
			// Correct inconsistent native keycodes
			var corrected:Null<Int> = _nativeCorrection.get(event.charCode + "_" + event.keyCode);
			if (corrected != null) {
				keycode = corrected;
			}
		#end
		
		if (lookup.exists(keycode)) {
			if (iskeycodeheld(current[keycode])) {
				current[keycode] = Keystate.justreleased;
			}else {
				current[keycode] = Keystate.notpressed;
			}
			keyheld[keycode] = -1;
		}
	}
	
	private static function addkey(KeyName:Key, KeyCode:Int) {
		keymap.set(KeyName, KeyCode);
		lookup.set(KeyCode, KeyName);
		current[KeyCode] = Keystate.notpressed;
		last[KeyCode] = Keystate.notpressed;
		keyheld[KeyCode] = -1;
	}

	private static function resetKeys(){
		keymap = new Map<Key, Int>();
		lookup = new Map<Int, Key>();
		current = new Array<Keystate>();
		last = new Array<Keystate>();
		keyheld = new Array<Int>();
		
		lastcharcode = -1;
		
		//BASIC STORAGE & TRACKING			
		var i:Int = 0;
		for(i in 0...numletters){
			current.push(Keystate.notpressed);
			last.push(Keystate.notpressed);
			keyheld.push(-1);
		}
		
		//LETTERS
		addkey(Key.A, Keyboard.A);
		addkey(Key.B, Keyboard.B);
		addkey(Key.C, Keyboard.C);
		addkey(Key.D, Keyboard.D);
		addkey(Key.E, Keyboard.E);
		addkey(Key.F, Keyboard.F);
		addkey(Key.G, Keyboard.G);
		addkey(Key.H, Keyboard.H);
		addkey(Key.I, Keyboard.I);
		addkey(Key.J, Keyboard.J);
		addkey(Key.K, Keyboard.K);
		addkey(Key.L, Keyboard.L);
		addkey(Key.M, Keyboard.M);
		addkey(Key.N, Keyboard.N);
		addkey(Key.O, Keyboard.O);
		addkey(Key.P, Keyboard.P);
		addkey(Key.Q, Keyboard.Q);
		addkey(Key.R, Keyboard.R);
		addkey(Key.S, Keyboard.S);
		addkey(Key.T, Keyboard.T);
		addkey(Key.U, Keyboard.U);
		addkey(Key.V, Keyboard.V);
		addkey(Key.W, Keyboard.W);
		addkey(Key.X, Keyboard.X);
		addkey(Key.Y, Keyboard.Y);
		addkey(Key.Z, Keyboard.Z);
		
		//NUMBERS
		addkey(Key.ZERO,Keyboard.NUMBER_0);
		addkey(Key.ONE,Keyboard.NUMBER_1);
		addkey(Key.TWO,Keyboard.NUMBER_2);
		addkey(Key.THREE,Keyboard.NUMBER_3);
		addkey(Key.FOUR,Keyboard.NUMBER_4);
		addkey(Key.FIVE,Keyboard.NUMBER_5);
		addkey(Key.SIX,Keyboard.NUMBER_6);
		addkey(Key.SEVEN,Keyboard.NUMBER_7);
		addkey(Key.EIGHT,Keyboard.NUMBER_8);
		addkey(Key.NINE,Keyboard.NUMBER_9);
		
		//FUNCTION KEYS
		addkey(Key.F1,Keyboard.F1);
		addkey(Key.F2,Keyboard.F2);
		addkey(Key.F3,Keyboard.F3);
		addkey(Key.F4,Keyboard.F4);
		addkey(Key.F5,Keyboard.F5);
		addkey(Key.F6,Keyboard.F6);
		addkey(Key.F7,Keyboard.F7);
		addkey(Key.F8,Keyboard.F8);
		addkey(Key.F9,Keyboard.F9);
		addkey(Key.F10,Keyboard.F10);
		addkey(Key.F11,Keyboard.F11);
		addkey(Key.F12,Keyboard.F12);
		
		//SPECIAL KEYS + PUNCTUATION
		addkey(Key.ESCAPE,Keyboard.ESCAPE);
		addkey(Key.MINUS,Keyboard.MINUS);
		addkey(Key.PLUS,Keyboard.EQUAL);
		addkey(Key.DELETE,Keyboard.DELETE);
		addkey(Key.BACKSPACE,Keyboard.BACKSPACE);
		addkey(Key.LBRACKET,Keyboard.LEFTBRACKET);
		addkey(Key.RBRACKET,Keyboard.RIGHTBRACKET);
		addkey(Key.BACKSLASH,Keyboard.BACKSLASH);
		addkey(Key.CAPSLOCK,Keyboard.CAPS_LOCK);
		addkey(Key.SEMICOLON,Keyboard.SEMICOLON);
		addkey(Key.QUOTE,Keyboard.QUOTE);
		addkey(Key.ENTER,Keyboard.ENTER);
		addkey(Key.SHIFT,Keyboard.SHIFT);
		addkey(Key.COMMA,Keyboard.COMMA);
		addkey(Key.PERIOD,Keyboard.PERIOD);
		addkey(Key.SLASH,Keyboard.SLASH);
		addkey(Key.CONTROL,Keyboard.CONTROL);
		addkey(Key.ALT, 18);
		addkey(Key.SPACE,Keyboard.SPACE);
		addkey(Key.UP,Keyboard.UP);
		addkey(Key.DOWN,Keyboard.DOWN);
		addkey(Key.LEFT,Keyboard.LEFT);
		addkey(Key.RIGHT, Keyboard.RIGHT);
		addkey(Key.TAB, Keyboard.TAB);
		addkey(Key.HOME, Keyboard.HOME);
		addkey(Key.END, Keyboard.END);
		addkey(Key.PAGEUP, Keyboard.PAGE_UP);
		addkey(Key.PAGEDOWN, Keyboard.PAGE_DOWN);
	}
	
	public static function keyname(k:Key):String {
	  switch(k) {
			case Key.A: return "A";
			case Key.B: return "B";
			case Key.C: return "C";
			case Key.D: return "D";
			case Key.E: return "E";
			case Key.F: return "F";
			case Key.G: return "G";
			case Key.H: return "H";
			case Key.I: return "I";
			case Key.J: return "J";
			case Key.K: return "K";
			case Key.L: return "L";
			case Key.M: return "M";
			case Key.N: return "N";
			case Key.O: return "O";
			case Key.P: return "P";
			case Key.Q: return "Q";
			case Key.R: return "R";
			case Key.S: return "S";
			case Key.T: return "T";
			case Key.U: return "U";
			case Key.V: return "V";
			case Key.W: return "W";
			case Key.X: return "X";
			case Key.Y: return "Y";
			case Key.Z: return "Z";
			case Key.ZERO: return "0";
			case Key.ONE: return "1";
			case Key.TWO: return "2";
			case Key.THREE: return "3";
			case Key.FOUR: return "4";
			case Key.FIVE: return "5";
			case Key.SIX: return "6";
			case Key.SEVEN: return "7";
			case Key.EIGHT: return "8";
			case Key.NINE: return "9";
			case Key.F1: return "F1";
			case Key.F2: return "F2";
			case Key.F3: return "F3";
			case Key.F4: return "F4";
			case Key.F5: return "F5";
			case Key.F6: return "F6";
			case Key.F7: return "F7";
			case Key.F8: return "F8";
			case Key.F9: return "F9";
			case Key.F10: return "F10";
			case Key.F11: return "F11";
			case Key.F12: return "F12";
			case Key.ESCAPE: return "Esc";
			case Key.MINUS: return "-";
			case Key.PLUS: return "+";
			case Key.DELETE: return "Del";
			case Key.BACKSPACE: return "Backspace";
			case Key.LBRACKET: return "[";
			case Key.RBRACKET: return "]";
			case Key.BACKSLASH: return "\\";
			case Key.CAPSLOCK: return "Caps Lock";
			case Key.SEMICOLON: return ";";
			case Key.QUOTE: return "'";
			case Key.ENTER: return "Enter";
			case Key.SHIFT: return "Shift";
			case Key.COMMA: return ",";
			case Key.PERIOD: return ".";
			case Key.SLASH: return "/";
			case Key.CONTROL: return "Ctrl";
			case Key.ALT: return "Alt";
			case Key.SPACE: return "Space";
			case Key.UP: return "Up";
			case Key.DOWN: return "Down";
			case Key.LEFT: return "Left";
			case Key.RIGHT: return "Right";
			case Key.TAB: return "Tab";
			case Key.HOME: return "Home";
			case Key.END: return "End";
			case Key.PAGEUP: return "Page Up";
			case Key.PAGEDOWN: return "Page Down";
		}
		return "";
	}
	
	private static var keymap:Map<Key, Int> = new Map<Key, Int>();
	private static var lookup:Map<Int, Key> = new Map<Int, Key>();
	private static var current:Array<Keystate> = new Array<Keystate>();
	private static var last:Array<Keystate> = new Array<Keystate>();
	private static var keyheld:Array<Int> = new Array<Int>();

	/**
	 * Function and numpad keycodes on native targets are incorrect.
	 * Copied from HaxeFlixel, which inherited it from HaxePunk.
	 * @see https://github.com/openfl/openfl-native/issues/193
	 */
	#if !(flash || js)
	private static var _nativeCorrection:Map<String, Int>;
	#end
	
	private static var numletters:Int = 256;
	private static var keycode:Int;
	private static var charcode:Int;
	private static var lastcharcode:Int;
	
	private static var keybuffer:String = "";
	private static var gamestage:Stage;
}
