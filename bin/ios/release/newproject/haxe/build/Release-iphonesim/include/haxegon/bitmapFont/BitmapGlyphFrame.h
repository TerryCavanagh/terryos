#ifndef INCLUDED_haxegon_bitmapFont_BitmapGlyphFrame
#define INCLUDED_haxegon_bitmapFont_BitmapGlyphFrame

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxegon,bitmapFont,BitmapFont)
HX_DECLARE_CLASS2(haxegon,bitmapFont,BitmapGlyphFrame)
HX_DECLARE_CLASS2(openfl,display,BitmapData)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,geom,Rectangle)
namespace haxegon{
namespace bitmapFont{


class HXCPP_CLASS_ATTRIBUTES  BitmapGlyphFrame_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef BitmapGlyphFrame_obj OBJ_;
		BitmapGlyphFrame_obj();
		Void __construct(::haxegon::bitmapFont::BitmapFont parent);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="haxegon.bitmapFont.BitmapGlyphFrame")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< BitmapGlyphFrame_obj > __new(::haxegon::bitmapFont::BitmapFont parent);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~BitmapGlyphFrame_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("BitmapGlyphFrame","\xd0","\xab","\x7f","\x65"); }

		::haxegon::bitmapFont::BitmapFont parent;
		int charCode;
		int xoffset;
		int yoffset;
		int xadvance;
		::openfl::geom::Rectangle rect;
		::openfl::display::BitmapData bitmap;
		::openfl::display::BitmapData _bitmap;
		int tileID;
		virtual Void dispose( );
		Dynamic dispose_dyn();

		virtual ::openfl::display::BitmapData get_bitmap( );
		Dynamic get_bitmap_dyn();

};

} // end namespace haxegon
} // end namespace bitmapFont

#endif /* INCLUDED_haxegon_bitmapFont_BitmapGlyphFrame */ 
