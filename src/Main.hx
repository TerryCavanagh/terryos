import haxegon.*;

class Main {
	function new() {
		Script.init();
		
		Script.runapp("test");
		
		Network.loadurl("https://api.github.com/repositories/67296170/contents/appstore");
	}
	
	var webcontents:String;
	function update() {
		Script.update();
		
		if(Network.responseready()){
			webcontents = Network.getresponse();
		}
		
		if(webcontents != null){
			Text.wordwrap(Gfx.screenwidth);
			Text.display(0, 0, webcontents, Col.WHITE);
			Text.wordwrap();
		}
	}
}