import haxegon.*;

class Main {
	function new() {
		Script.init();
		
		Script.runapp("terry");
		
		networkstate = "loaddir";
		Network.loaddir("https://api.github.com/repositories/67296170/contents/appstore");
	}
	
	var networkstate:String;
	var webcontents:String;
	function update() {
		Script.update();
		
		if (Network.responseready()) {
			if(networkstate == "loaddir"){
				Network.loadfile(Network.fileurl[0]);
				networkstate = "loadfile";
			}else if (networkstate == "loadfile") {
				webcontents = Network.getresponse();
				networkstate = "";
			}
		}
		
		if(webcontents != null){
			Text.wordwrap(Gfx.screenwidth);
			Text.display(0, 0, webcontents, Col.WHITE);
			Text.wordwrap();
		}
	}
}