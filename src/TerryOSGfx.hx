import haxegon.*;

class TerryOSGfx {
	public static var colours:Array<Int> = [
	  Col.BLACK, 
		Col.GREY,
		Col.WHITE, 
		Col.RED, 
		Col.PINK, 
		Col.DARKBROWN, 
		Col.BROWN, 
		Col.ORANGE,
		Col.YELLOW,
		Col.DARKGREEN,
		Col.GREEN,
		Col.LIGHTGREEN,
		Col.NIGHTBLUE, 
		Col.DARKBLUE,
		Col.BLUE,
		Col.LIGHTBLUE
  ];
	
	public static inline function fixcol(colour:Int):Int {
		if (colour < 0 || colour >=16) return Col.TRANSPARENT;
		return colours[colour];
	}
	
	public static function fillbox(x:Float, y:Float, width:Float, height:Float, colour:Int) {
		colour = fixcol(colour);
		
		Gfx.fillbox(x, y, width, height, colour);
	}
	
	public static function fillcircle(x:Float, y:Float, radius:Float, colour:Int) {
		colour = fixcol(colour);
		
		Gfx.fillcircle(x, y, radius, colour);
	}
}	