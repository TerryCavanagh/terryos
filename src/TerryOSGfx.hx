import haxegon.*;

class TerryOSGfx {
	public static var colours:Array<Int> = [
	  //0x22223b, 0x4a4e69, 0x9a8c98, 0xc9ada7, 0xf2e9e4
	  //0x05668d, 0x028090, 0x00a896, 0x02c39a, 0xf0f3bd
		0x253237, 0x5c6b73, 0x9db4c0, 0xc2dfe3, 0xe0fbfc
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