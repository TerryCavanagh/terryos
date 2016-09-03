#ifndef INCLUDED_haxegon_Col
#define INCLUDED_haxegon_Col

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxegon,Col)
namespace haxegon{


class HXCPP_CLASS_ATTRIBUTES  Col_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Col_obj OBJ_;
		Col_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="haxegon.Col")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Col_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Col_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Col","\x20","\x38","\x33","\x00"); }

		static void __boot();
		static int BLACK;
		static int GREY;
		static int GRAY;
		static int WHITE;
		static int RED;
		static int PINK;
		static int DARKBROWN;
		static int BROWN;
		static int ORANGE;
		static int YELLOW;
		static int DARKGREEN;
		static int GREEN;
		static int LIGHTGREEN;
		static int NIGHTBLUE;
		static int DARKBLUE;
		static int BLUE;
		static int LIGHTBLUE;
		static int MAGENTA;
		static int TRANSPARENT;
};

} // end namespace haxegon

#endif /* INCLUDED_haxegon_Col */ 
