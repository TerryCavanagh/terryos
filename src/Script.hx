import haxegon.*;
import hscript.*;

import openfl.Assets;

@:access(openfl.Assets.getLibrary)
class Script {
	public static function init() {
		runningscript = false;
		scriptdelay = 0;	
		returnvalue = null;
		stopping = false;
		savedprogram = [""];
		activescript = "";
		
		parser = new hscript.Parser();
		parser.allowTypes = false;
		interpreter = new InterpExtended();
		
		loadapps();
	}
	
	public static function loadapps() {
	  applist = new Map<String, String>();
		for (t in openfl.Assets.getLibrary("default").list(cast AssetType.TEXT)) {
			if (t.indexOf("data/apps/") != -1) {
				var filename:String = S.getroot(S.getlastbranch(t, "/"), ".");
				var filecontents:String = S.replacechar(Data.loadtext(S.getroot(t, ".").substr(10)).join("\n"), "\r");
				applist.set(filename, filecontents);
			}
		}
	}
	
	public static function loadscript(scriptname:String):Bool {
		activescript = applist.get(scriptname);
		returnvalue = null;
		interpreter = new InterpExtended();
		
		// Parse the script we're about to run!
		try{
			parsedscript = parser.parseString(activescript);
		}catch (e:Dynamic) {
			throw("Critical: error in cutscene script.");
			return false;
		}
		
		return beginparsedscript();
	}
	
	/* for testing only; save as a file and reload files when installing apps */
	public static function addscriptbystring(filename:String, scriptstring:String) {
		applist.set(filename, scriptstring);
	}
	
	private static function beginparsedscript():Bool {
		try {
			interpreter.execute(parsedscript);
		}catch (e:Dynamic) {
			throw("Critical error");
			return false;
		}
		
		return true;
	}
	
	public static function runapp(scriptname:String) {
		loadscript(scriptname);
		
		resetvariables();
		
		if (initfunction != null) {
			try {
				initfunction();
			}catch (e:Dynamic) {
				throw("Critical: error in cutscene script.");
				//Err.log(Err.PARSER_NEW, Err.process(e));
			}
		}
		
		stopping = false;
		runningscript = true;
	}
	
	public static function update() {
		if (runningscript) {
			try {
				updatefunction();
			}catch (e:Dynamic) {
				//Err.log(Err.RUNTIME_UPDATE, Err.process(e));
				throw("Critical error.");
			}
		}	
	}
	
	public static function resetvariables() {
		initfunction = interpreter.variables.get("new");
		updatefunction = interpreter.variables.get("update");
		
		//Library functions
		interpreter.variables.set("fillbox", TerryOSGfx.fillbox);
		interpreter.variables.set("fillcircle", TerryOSGfx.fillcircle);
		interpreter.variables.set("print", TerryOSText.display);
		interpreter.variables.set("screenwidth", Gfx.screenwidth);
		interpreter.variables.set("screenheight", Gfx.screenheight);
	}
	
	public static var runningscript:Bool;
	private static var scriptdelay:Int;
	private static var stopping:Bool;
	private static var savedprogram:Array<String>;
	private static var activescript:String;
	
	private static var applist:Map<String, String>;
	
	private static var parsedscript:Expr;
	private static var parser:Parser;
	private static var interpreter:Interp;
	public static var returnvalue:Dynamic;
	
	public static var initfunction:Dynamic;
	public static var updatefunction:Dynamic;
}	