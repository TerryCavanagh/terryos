import haxegon.*;

class Main {
	var installedapps:Array<Appclass> = [];
	var gridwidth:Int = 4;
	var onhomescreen:Bool;
	
	function new() {
		Script.init();
		
		onhomescreen = true;
		//System apps get added first
		var a:Appclass = new Appclass("Update", "system_update");
		a.icon = ""; a.filehash = "";	a.contents = "";
		installedapps.push(a);
		
		a = new Appclass("TestApp", "terry");
		a.icon = ""; a.filehash = "";	a.contents = "";
		installedapps.push(a);
		/*
		networkstate = "loaddir";
		Network.loaddir("https://api.github.com/repositories/67296170/contents/appstore");
		*/
	}
	
	function inboxw(x:Float, y:Float, xp:Float, yp:Float, w:Float, h:Float):Bool {
		if (x >= xp && x < xp + w) {
			if (y >= yp && y < yp + h) {
				return true;
			}
		}
		return false;
	}
	
	var fademode:String = "";
	var fadeaction:String = "";
	var fadevalue:Int = 0;
	var apptoopen:Appclass = null;
	
	function openapp(a:Appclass) {
	  apptoopen = a;
		fadeaction = "openapp";
		fadeout();
	}
	
	function startapp(a:Appclass) {
		onhomescreen = false;
		if (a.filename == "system_update") {
			onhomescreen = true;
		}else {
		  Script.runapp(a.filename);
		}
		fadein();
	}
	
	function fadeout() {
	  fademode = "fadeout";
		fadevalue = 0;
	}
	
	function fadein() {
	  fademode = "fadein";
		fadevalue = 10;
	}
	
	var networkstate:String;
	var webcontents:String;
	function update() {
		/*
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
		if (onhomescreen) {
			drawhomescreen();
		}else {
			Script.update();
		}
		
		updatefade();
	}
	
	function updatefade() {
		if (fademode != "") {
		  if (fademode == "fadeout") {
			  fadevalue += 2;
				if (fadevalue >= 14) {
					fadevalue = 14;
				  fademode = "faded";
				}
				Gfx.fillbox(0, 0, Gfx.screenwidth, (Gfx.screenheightmid * fadevalue) / 10, TerryOSGfx.colours[0]);
				Gfx.fillbox(0, Gfx.screenheight - (Gfx.screenheightmid * fadevalue) / 10, Gfx.screenwidth, (Gfx.screenheightmid * fadevalue) / 10, TerryOSGfx.colours[0]);
			}
			if (fademode == "fadein") {
			  fadevalue -= 2;
				if (fadevalue <= 0) {
					fadevalue = 0;
				  fademode = "";	
				}
				Gfx.fillbox(0, 0, Gfx.screenwidth, (Gfx.screenheightmid * fadevalue) / 10, TerryOSGfx.colours[0]);
				Gfx.fillbox(0, Gfx.screenheight - (Gfx.screenheightmid * fadevalue) / 10, Gfx.screenwidth, (Gfx.screenheightmid * fadevalue) / 10, TerryOSGfx.colours[0]);
			}
			if (fademode == "faded") {
				Gfx.clearscreen(TerryOSGfx.colours[0]);
				if (fadeaction != "") {
					if (fadeaction == "openapp") {
						startapp(apptoopen);	
					}
					fadeaction = "";	
				}
			}
		}	
	}
	
	function drawhomescreen() {
		Gfx.clearscreen(TerryOSGfx.colours[0]);
		for (j in 0 ... Gfx.screenheight) {
			for (i in 0 ... Gfx.screenwidth) {
				if(j % 8 == 1 && i % 8 == 1){
					Gfx.fillbox(i, j, 2, 2, TerryOSGfx.colours[1]);	
				}
			}
		}
		
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
					
					if (Mouse.hasclicked && fademode == "") {
						if (inboxw(Mouse.gettouchx(), Mouse.gettouchy(), x - 2, y - 2, 34, 44)) {
						  //You've selected this app
							openapp(installedapps[homei]);
							Mouse.hasclicked = false;
						}
					}
				}
				homei++;
			}
		}
	}
}