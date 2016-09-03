#ifndef INCLUDED_haxegon_util_Tileset
#define INCLUDED_haxegon_util_Tileset

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxegon,util,Tileset)
HX_DECLARE_CLASS2(openfl,display,BitmapData)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
namespace haxegon{
namespace util{


class HXCPP_CLASS_ATTRIBUTES  Tileset_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Tileset_obj OBJ_;
		Tileset_obj();
		Void __construct(::String n,int w,int h);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="haxegon.util.Tileset")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Tileset_obj > __new(::String n,int w,int h);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Tileset_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Tileset","\x14","\xa9","\xe4","\x12"); }

		Array< ::Dynamic > tiles;
		::String name;
		int width;
		int height;
		int animationspeed;
		int timethisframe;
		int currentframe;
		int startframe;
		int endframe;
};

} // end namespace haxegon
} // end namespace util

#endif /* INCLUDED_haxegon_util_Tileset */ 
