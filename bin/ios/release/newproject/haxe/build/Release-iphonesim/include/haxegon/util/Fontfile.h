#ifndef INCLUDED_haxegon_util_Fontfile
#define INCLUDED_haxegon_util_Fontfile

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Xml)
HX_DECLARE_CLASS2(haxegon,bitmapFont,BitmapFont)
HX_DECLARE_CLASS2(haxegon,util,Fontfile)
HX_DECLARE_CLASS2(lime,text,Font)
HX_DECLARE_CLASS2(openfl,display,BitmapData)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,text,Font)
namespace haxegon{
namespace util{


class HXCPP_CLASS_ATTRIBUTES  Fontfile_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Fontfile_obj OBJ_;
		Fontfile_obj();
		Void __construct(::String _file);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="haxegon.util.Fontfile")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Fontfile_obj > __new(::String _file);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Fontfile_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Fontfile","\xeb","\x7b","\x12","\xb5"); }

		::String _typename;
		::haxegon::bitmapFont::BitmapFont bitmapfont;
		::Xml fontxml;
		::openfl::display::BitmapData fontimage;
		::openfl::text::Font font;
		::String filename;
		::String type;
};

} // end namespace haxegon
} // end namespace util

#endif /* INCLUDED_haxegon_util_Fontfile */ 
