/* Basic structure for installed apps */
class Appclass {
	public function new(_name, _filename) {
		name = _name;
		filename = _filename;
		icon = "";
		filehash = "";
		contents = "";
	}
	
	public var name:String;
	public var filename:String;
	public var icon:String;
	public var filehash:String;
	public var contents:String;
}	