package haxegon;

import openfl.display.DisplayObject;
import openfl.events.MouseEvent;
import openfl.ui.Mouse;
import openfl.events.Event;
import openfl.net.*;
import openfl.Lib;

import openfl.events.TouchEvent;
import openfl.ui.Multitouch;
import openfl.ui.MultitouchInputMode;
	
class Mouse{		
	public static var touchx:Array<Int> = [];
	public static var touchy:Array<Int> = [];
	public static var touchid:Array<Int> = [];
	public static var temptouchid:Int = 0;
	
	public static var click:Bool = false;
	public static var clickheld:Bool = false;
	public static var hasclicked:Bool = false;
	public static var press:Bool = false;
	
	public static var x:Int;
	public static var y:Int;
	public static var oldx:Int;
	public static var oldy:Int;
	
	public static var mousewheel:Int = 0;
	public static var cursormoved:Bool;
	
	public static var mouseoffstage:Bool;
	public static var isdragging:Bool;
	
	public static function leftheld():Bool { return _current > 0; }
	public static function leftclick():Bool { return _current == 2; }
	public static function leftreleased():Bool { return _current == -1; }
	
	public static function rightheld():Bool { return _rightcurrent > 0; }
	public static function rightclick():Bool { return _rightcurrent == 2; }	
	public static function rightreleased():Bool { return _rightcurrent == -1; }
	
	public static function middleheld():Bool { return _middlecurrent > 0; }
	public static function middleclick():Bool { return _middlecurrent == 2; }	
	public static function middlereleased():Bool { return _middlecurrent == -1; }
	
	private static function init(stage:DisplayObject) {
		//Right mouse stuff
		#if !flash
		stage.addEventListener(MouseEvent.RIGHT_MOUSE_DOWN, handleRightMouseDown);
		stage.addEventListener(MouseEvent.RIGHT_MOUSE_UP, handleRightMouseUp );
		#end
		
		Multitouch.inputMode = MultitouchInputMode.TOUCH_POINT;
		
		stage.addEventListener(TouchEvent.TOUCH_BEGIN, touchbeginlistener);
		stage.addEventListener(TouchEvent.TOUCH_MOVE, touchmovelistener);
		stage.addEventListener(TouchEvent.TOUCH_END, touchendlistener);
		/*
		stage.addEventListener(MouseEvent.MOUSE_DOWN, handleMouseDown);
		stage.addEventListener(MouseEvent.MOUSE_UP, handleMouseUp);
		stage.addEventListener(MouseEvent.MIDDLE_MOUSE_DOWN, handleMiddleMouseDown);
		stage.addEventListener(MouseEvent.MIDDLE_MOUSE_UP, handleMiddleMouseUp);
		stage.addEventListener(MouseEvent.MOUSE_WHEEL, mousewheelHandler);
		stage.addEventListener(MouseEvent.MOUSE_MOVE, mouseOver);
		stage.addEventListener(Event.MOUSE_LEAVE, mouseLeave);
		stage.addEventListener(Event.DEACTIVATE, handleDeactivate);
		*/
		x = 0;
		y = 0;
		oldx = 0;
		oldy = 0;
		cursormoved = false;
		_rightcurrent = 0;
		_rightlast = 0;
		_middlecurrent = 0;
		_middlelast = 0;
		_current = 0;
		_last = 0;
	}
	
	public static function gettouchx():Int {
		if (touchx.length == 0) {
			return touchx[0];
		}else {
			return touchx[touchx.length - 1];
		}
	}
		
	public static function gettouchy():Int {
		if (touchy.length == 0) {
			return touchy[0];
		}else {
			return touchy[touchy.length - 1];
		}
	}
	
	public static function touchbeginlistener(e:TouchEvent){
		touchx.push(Std.int(e.stageX));
		touchy.push(Std.int(e.stageY));
		touchid.push(e.touchPointID);
		
		/*
		if (controlstick == -1) {
			//Consider this for the controlstick point
			if (touchx[touchPoints] < controlstick_xrange) {
				if (touchy[touchPoints] > controlstick_yrange) {
					controlstick = touchid[touchPoints];
					controlstick_x = touchx[touchPoints];
					controlstick_y = touchy[touchPoints];
					pushleft = false;
					pushright = false;
					firstmove = true;
				}
			}
		}*/
		
		press = true;
		click = true;
		clickheld = true;
		hasclicked = true;
	}
	
	public static function touchendlistener(e:TouchEvent) {
		//Identify the point that's been removed, and take it away from the array
		temptouchid = e.touchPointID;
		
		/*
		if (temptouchid == controlstick) {
			controlstick = -1;
			pushleft = false;
			pushright = false;
			firstmove = false;
			controlstick_x = -1;
			controlstick_y = -1;
		}*/
		
		for (i in 0 ... touchid.length) {
			if (touchid[i] == temptouchid) {
				for (j in i ... touchid.length) {
					touchx[j] = touchx[j + 1];
					touchy[j] = touchy[j + 1];
					touchid[j] = touchid[j + 1];
				}
				touchx.pop(); touchy.pop(); touchid.pop();
				break;
			}
		}
		
		if (touchid.length == 0){
			press = false;
			click = false;
			clickheld = false;
			hasclicked = false;
		}
	}
	
	public static function touchmovelistener(e:TouchEvent) { 
		//Identify the touch point that's moving, and update it's coordinates
		temptouchid = e.touchPointID;
		for (i in 0 ... touchid.length) {
			if (touchid[i] == temptouchid) {
				touchx[i] = Std.int(e.stageX);
				touchy[i] = Std.int(e.stageY);
				/*
				if (touchid[i] == controlstick) {
					if (firstmove) {
						if (touchx[i] < controlstick_x) {
							pushleft = true; pushright = false;
							firstmove = false;
							controlstick_x = touchx[i] + deadzone;
							controlstick_y = touchy[i];
						}else if (touchx[i] > controlstick_x) {
							pushleft = false; pushright = true;
							firstmove = false;
							controlstick_x = touchx[i] - deadzone;
							controlstick_y = touchy[i];
						}
					}else{
						if (touchx[i] < controlstick_x - deadzone) {
							pushleft = true; pushright = false;
							controlstick_x = touchx[i] + deadzone;
							controlstick_y = touchy[i];
						}else if (touchx[i] > controlstick_x + deadzone) {
							pushleft = false; pushright = true;
							controlstick_x = touchx[i] - deadzone;
							controlstick_y = touchy[i];
						}else if (touchx[i] >= controlstick_x - deadzone_inner &&
											touchx[i] <= controlstick_x + deadzone_inner) {
							pushleft = false; pushright = false;
						}
					}
				}
				*/
			}
		}			
	} 

	private static function unload(stage:DisplayObject) {
		//Right mouse stuff
		#if !flash
		stage.removeEventListener(MouseEvent.RIGHT_MOUSE_DOWN, handleRightMouseDown);
		stage.removeEventListener(MouseEvent.RIGHT_MOUSE_UP, handleRightMouseUp );
		#end
		
		stage.removeEventListener(MouseEvent.MOUSE_DOWN, handleMouseDown);
		stage.removeEventListener(MouseEvent.MOUSE_UP, handleMouseUp);
		stage.removeEventListener(MouseEvent.MIDDLE_MOUSE_DOWN, handleMiddleMouseDown);
		stage.removeEventListener(MouseEvent.MIDDLE_MOUSE_UP, handleMiddleMouseUp);
		stage.removeEventListener(MouseEvent.MOUSE_WHEEL, mousewheelHandler);
		stage.removeEventListener(MouseEvent.MOUSE_MOVE, mouseOver);
		stage.removeEventListener(Event.MOUSE_LEAVE, mouseLeave);
		stage.removeEventListener(Event.DEACTIVATE, handleDeactivate);
	}	
	
	private static function mouseLeave(e:Event) {
		mouseoffstage = true;
		_current = 0;
		_last = 0;
		isdragging = false;
		_rightcurrent = 0;
		_rightlast = 0;
		_middlecurrent = 0;
		_middlelast = 0;
	}
	
	private static function mouseOver(e:MouseEvent) {
		mouseoffstage = false;
	}
	
	private static function mousewheelHandler( e:MouseEvent ) {
		mousewheel = e.delta;
	}
	
	public static function visitsite(t:String) {
		gotosite = t;
	}
	
	public static function show() {
	  openfl.ui.Mouse.show();	
	}
	
	public static function hide() {
	  openfl.ui.Mouse.hide();	
	}
	
	public static function update(X:Int,Y:Int){
		x = X;
		y = Y;
		
		if (x == oldx && y == oldy) {
		  cursormoved = false;	
		}else {
		  oldx = x; oldy = y;
			cursormoved = true;
		}
		
		if((_last == -1) && (_current == -1))
			_current = 0;
		else if((_last == 2) && (_current == 2))
			_current = 1;
		_last = _current;
		
		if((_rightlast == -1) && (_rightcurrent == -1))
			_rightcurrent = 0;
		else if((_rightlast == 2) && (_rightcurrent == 2))
			_rightcurrent = 1;
		_rightlast = _rightcurrent;
		
		if((_middlelast == -1) && (_middlecurrent == -1))
			_middlecurrent = 0;
		else if((_middlelast == 2) && (_middlecurrent == 2))
			_middlecurrent = 1;
		_middlelast = _middlecurrent;
	}
	
	private static function reset(){
		_current = 0;
		_last = 0;
		_rightcurrent = 0;
		_rightlast = 0;
		_middlecurrent = 0;
		_middlelast = 0;
	}
	
		
	#if !flash
		private static function handleRightMouseDown(event:MouseEvent) {	if (_rightcurrent > 0) { _rightcurrent = 1; } else { _rightcurrent = 2; } }
		private static function handleRightMouseUp(event:MouseEvent) {	if (_rightcurrent > 0) { _rightcurrent = -1; } else { _rightcurrent = 0; }	}
  #end
	
	private static function handleMiddleMouseDown(event:MouseEvent) {	if (_middlecurrent > 0) { _middlecurrent = 1; } else { _middlecurrent = 2; } }
	private static function handleMiddleMouseUp(event:MouseEvent) {	if (_middlecurrent > 0) { _middlecurrent = -1; } else { _middlecurrent = 0; }	}
	
	private static function handleMouseDown(event:MouseEvent) {
		if (Input.pressed(Key.CONTROL)) {
			if(_rightcurrent > 0) _rightcurrent = 1;
			else _rightcurrent = 2;
		}else{
			if(_current > 0) _current = 1;
			else _current = 2;
			
			if (_current == 2) {
				if (gotosite != "") {
					var link:URLRequest = new URLRequest(gotosite);
					Lib.getURL(link);
					gotosite = "";
				}
			}
		}
	}
	
	private static function handleMouseUp(event:MouseEvent) {		
		if(_rightcurrent > 0) _rightcurrent = -1;
		else _rightcurrent = 0;
		
		if(_current > 0) _current = -1;
		else _current = 0;
	}
	
	private static function handleDeactivate(e:Event) {
		_current = 0;
		_rightcurrent = 0;
		_middlecurrent = 0;
	}
	
	private static var _current:Int;
	private static var _last:Int;
	
	private static var _middlecurrent:Int;
	private static var _middlelast:Int;
	private static var _rightcurrent:Int;
	private static var _rightlast:Int;
	private static var gotosite:String = "";
}