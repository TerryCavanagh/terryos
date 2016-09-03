import haxegon.*;

class TerryOSText {	
	public static function display(x:Float, y:Float, txt:Dynamic, colour:Int) {
		colour = TerryOSGfx.fixcol(colour);
		
    Text.display(x, y, txt, colour);
	}
}	