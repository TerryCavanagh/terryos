import haxegon.*;

class TerryOSGfx {
	public static var colours:Array<Int> = [
	  0x110304, 0x450306, 0x8f2d2d, 0xf19599
  ];
	
	public static inline function fixcol(colour:Int):Int {
		if (colour < 0 || colour >= 4) return Col.TRANSPARENT;
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