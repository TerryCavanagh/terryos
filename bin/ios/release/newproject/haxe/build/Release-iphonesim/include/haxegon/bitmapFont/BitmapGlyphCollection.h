#ifndef INCLUDED_haxegon_bitmapFont_BitmapGlyphCollection
#define INCLUDED_haxegon_bitmapFont_BitmapGlyphCollection

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,IntMap)
HX_DECLARE_CLASS2(haxegon,bitmapFont,BitmapFont)
HX_DECLARE_CLASS2(haxegon,bitmapFont,BitmapGlyph)
HX_DECLARE_CLASS2(haxegon,bitmapFont,BitmapGlyphCollection)
namespace haxegon{
namespace bitmapFont{


class HXCPP_CLASS_ATTRIBUTES  BitmapGlyphCollection_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef BitmapGlyphCollection_obj OBJ_;
		BitmapGlyphCollection_obj();
		Void __construct(::haxegon::bitmapFont::BitmapFont font,Float scale,int color,hx::Null< bool >  __o_useColor,hx::Null< bool >  __o_smoothing);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="haxegon.bitmapFont.BitmapGlyphCollection")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< BitmapGlyphCollection_obj > __new(::haxegon::bitmapFont::BitmapFont font,Float scale,int color,hx::Null< bool >  __o_useColor,hx::Null< bool >  __o_smoothing);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~BitmapGlyphCollection_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("BitmapGlyphCollection","\xdb","\x8b","\x99","\x5e"); }

		Float minOffsetX;
		::haxe::ds::IntMap glyphMap;
		Array< ::Dynamic > glyphs;
		int color;
		Float scale;
		Float spaceWidth;
		::haxegon::bitmapFont::BitmapFont font;
		virtual Void prepareGlyphs( hx::Null< bool >  smoothing);
		Dynamic prepareGlyphs_dyn();

		virtual Void dispose( );
		Dynamic dispose_dyn();

};

} // end namespace haxegon
} // end namespace bitmapFont

#endif /* INCLUDED_haxegon_bitmapFont_BitmapGlyphCollection */ 
