import haxegon.*;

class Main {
	var installedapps:Array<Appclass> = [];
	var gridwidth:Int = 4;
	
	function new() {
		Script.init();
		
		//System apps get added first
		var a:Appclass = new Appclass("Update", "system");
		a.icon = ""; a.filehash = "";	a.contents = "";
		installedapps.push(a);
		
		a = new Appclass("TestApp", "terry");
		a.icon = ""; a.filehash = "";	a.contents = "";
		installedapps.push(a);
		/*
		Script.runapp("terry");
		
		networkstate = "loaddir";
		Network.loaddir("https://api.github.com/repositories/67296170/contents/appstore");
		*/
	}
	
	var networkstate:String;
	var webcontents:String;
	function update() {
		Gfx.clearscreen(TerryOSGfx.colours[0]);
		for (j in 0 ... Gfx.screenheight) {
			if(j % 4 == 0){
				Gfx.fillbox(0, j, Gfx.screenwidth, 1, TerryOSGfx.colours[1]);	
			}
		}
		/*
		Script.update();
		
		if (Network.responseready()) {
			if(networkstate == "loaddir"){
				Network.loadfile(Network.fileurl[0]);
				networkstate = "loadfile";
			}else if (networkstate == "loadfile") {
				webcontents = Network.getresponse();
				//Script.stop();
				Script.addscriptbystring("testing", webcontents);
				Script.runapp("testing");
				networkstate = "";
			}
		}
		*/
		
		//Draw home screen
		var homei:Int = 0;
		for (j in 0 ... 5) {
			for (i in 0 ... 3) {
				if (homei < installedapps.length) {
					//Draw app at i, j
					var x:Int = (i * (32 + 22)) + 10;
					var y:Int = (j * (32 + 24)) + 10;
					
					Gfx.fillbox(x, y, 32, 32, TerryOSGfx.colours[2]);
					Text.align(Text.CENTER);
					Text.display(x + 16, y + 34, installedapps[homei].name, TerryOSGfx.colours[2]);
					Text.align(Text.LEFT);
				}
				homei++;
			}
		}
		
		for (i in 0 ... Mouse.touchid.length) {
		  Text.display(0, i * 12, Mouse.touchid[i] + ": " + Mouse.touchx[i] + ", " + Mouse.touchy);	
		}
	}
}