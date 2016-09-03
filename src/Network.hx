import haxegon.*;

import openfl.net.*;
import openfl.events.*;

class Network{
	public static function loadurl(_url:String) {
	  responsestate	= NetworkResponse.dailing;
		
		var req:URLRequest = new URLRequest(_url);
		req.method = URLRequestMethod.GET;
		
		var loader:URLLoader = new URLLoader(req);
		loader.addEventListener(Event.COMPLETE, onComplete);
		
		/*
		var req:Http = new Http(_url);
		req.setHeader('User-Agent', "Mozilla/5.0 (Windows NT 10.0; WOW64; rv:48.0) Gecko/20100101 Firefox/48.0");
		req.setHeader('Connection', 'close');
		#if (neko||php||cpp||cs||java)
			req.cnxTimeout=10;
		#end
		req.onData = function (data)
      Debug.log('first 100 bytes: ' + data.substr(0, 100));
		req.onStatus = function (status) Debug.log('STATUS: $status');
   	req.onError = function (error)
      Debug.log('error: $error');
			
    req.request(false);
		*/
		/*
		var request = new HttpRequest({
		  url : _url,
		  callback : function(_response:HttpResponse):Void {
			  if (_response.isOK) {
					responsestate	= NetworkResponse.finished;
					response = _response.content;
					responseisbinary = _response.isBinary;
					//Debug.log('DONE ${response.status}');
				} else {
					responsestate	= NetworkResponse.failed;
					response = _response.error;
					//response = 'ERROR ${response.status} ${response.error}';
				}
			}  
		});
		
		request.send();
		*/
	}
	
	public static function onComplete(e:Event) {
		response = e.target.data;
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
	
	public static var responsestate:NetworkResponse;
	public static var response:String;
	public static var responseisbinary:Bool;
}