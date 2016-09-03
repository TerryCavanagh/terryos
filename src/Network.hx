import haxegon.*;
import com.akifox.asynchttp.*;

class Network{
	public static function loadurl(_url:String) {
	  responsestate	= NetworkResponse.dailing;
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