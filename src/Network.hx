import haxegon.*;

import openfl.net.*;
import openfl.events.*;
import haxe.Json;

class Network{
	public static function loaddir(_url:String) {
	  responsestate	= NetworkResponse.dailing;
		
		var req:URLRequest = new URLRequest(_url);
		req.method = URLRequestMethod.GET;
		
		var loader:URLLoader = new URLLoader(req);
		loader.addEventListener(Event.COMPLETE, onCompleteDirload);
	}
	
	public static function loadfile(_url:String) {
	  responsestate	= NetworkResponse.dailing;
		
		var req:URLRequest = new URLRequest(_url);
		req.method = URLRequestMethod.GET;
		
		var loader:URLLoader = new URLLoader(req);
		loader.addEventListener(Event.COMPLETE, onCompleteFileload);
	}
	
	public static function onCompleteFileload(e:Event) {
	  responsestate	= NetworkResponse.finished;
		var filecontents:String = e.target.data;
		
		response = filecontents;
	}
	
	public static function onCompleteDirload(e:Event) {
		jsonfile = Json.parse(e.target.data);
		
		filelist = [];
		fileurl = [];
		filesha = [];
		for (i in 0 ... jsonfile.length) {
		  filelist.push(jsonfile[i].name);
			fileurl.push(jsonfile[i].download_url);
			filesha.push(jsonfile[i].sha);
		}
		
		response = filelist.toString();
		//response = e.target.data;
		responsestate = NetworkResponse.finished;
	}
	
	public static function responseready():Bool {
	  if (responsestate == NetworkResponse.finished) {
			responsestate = NetworkResponse.ready;
		  return true;
		}
		return false;
	}
	
	public static function getresponse():String {
	  return response;
	}
	
	public static var responsestate:NetworkResponse = NetworkResponse.ready;
	public static var response:String;
	public static var responseisbinary:Bool;
	
	public static var jsonfile:Dynamic;
	public static var filelist:Array<String>;
	public static var fileurl:Array<String>;
	public static var filesha:Array<String>;
}