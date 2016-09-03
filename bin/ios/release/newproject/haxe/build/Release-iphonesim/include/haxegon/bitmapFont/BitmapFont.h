#ifndef INCLUDED_haxegon_bitmapFont_BitmapFont
#define INCLUDED_haxegon_bitmapFont_BitmapFont

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Xml)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,IntMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS2(haxegon,bitmapFont,BitmapFont)
HX_DECLARE_CLASS2(haxegon,bitmapFont,BitmapGlyphCollection)
HX_DECLARE_CLASS2(openfl,display,BitmapData)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,geom,ColorTransform)
HX_DECLARE_CLASS2(openfl,geom,Matrix)
HX_DECLARE_CLASS2(openfl,geom,Point)
HX_DECLARE_CLASS2(openfl,geom,Rectangle)
namespace haxegon{
namespace bitmapFont{


class HXCPP_CLASS_ATTRIBUTES  BitmapFont_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef BitmapFont_obj OBJ_;
		BitmapFont_obj();
		Void __construct(::String name,::openfl::display::BitmapData bitmap);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="haxegon.bitmapFont.BitmapFont")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< BitmapFont_obj > __new(::String name,::openfl::display::BitmapData bitmap);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~BitmapFont_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("BitmapFont","\x7e","\xc1","\xce","\x2b"); }

		static void __boot();
		static int spaceCode;
		static int tabCode;
		static int newLineCode;
		static ::String defaultFontKey;
		static ::String defaultFontData;
		static ::haxe::ds::StringMap fonts;
		static Void store( ::String fontKey,::haxegon::bitmapFont::BitmapFont font);
		static Dynamic store_dyn();

		static ::haxegon::bitmapFont::BitmapFont get( ::String fontKey);
		static Dynamic get_dyn();

		static Void remove( ::String fontKey);
		static Dynamic remove_dyn();

		static Void clearFonts( );
		static Dynamic clearFonts_dyn();

		static ::haxegon::bitmapFont::BitmapFont getDefaultFont( );
		static Dynamic getDefaultFont_dyn();

		static ::String DEFAULT_GLYPHS;
		static ::openfl::geom::Point POINT;
		static ::openfl::geom::Matrix MATRIX;
		static ::openfl::geom::ColorTransform COLOR_TRANSFORM;
		static ::haxegon::bitmapFont::BitmapFont fromAngelCode( ::openfl::display::BitmapData Source,::Xml Data);
		static Dynamic fromAngelCode_dyn();

		static ::haxegon::bitmapFont::BitmapFont fromXNA( ::String key,::openfl::display::BitmapData source,::String letters,hx::Null< int >  glyphBGColor);
		static Dynamic fromXNA_dyn();

		static ::openfl::display::BitmapData replaceColor( ::openfl::display::BitmapData bitmapData,int color,int newColor);
		static Dynamic replaceColor_dyn();

		static ::haxegon::bitmapFont::BitmapFont fromMonospace( ::String key,::openfl::display::BitmapData source,::String letters,::openfl::geom::Point charSize,::openfl::geom::Rectangle region,::openfl::geom::Point spacing);
		static Dynamic fromMonospace_dyn();

		int size;
		int lineHeight;
		bool bold;
		bool italic;
		::String fontName;
		int minOffsetX;
		int spaceWidth;
		::openfl::display::BitmapData bitmap;
		::haxe::ds::IntMap glyphs;
		virtual Void dispose( );
		Dynamic dispose_dyn();

		virtual Void addGlyphFrame( int charCode,::openfl::geom::Rectangle frame,hx::Null< int >  offsetX,hx::Null< int >  offsetY,hx::Null< int >  xAdvance);
		Dynamic addGlyphFrame_dyn();

		virtual ::haxegon::bitmapFont::BitmapGlyphCollection prepareGlyphs( Float scale,int color,hx::Null< bool >  useColor,hx::Null< bool >  smoothing);
		Dynamic prepareGlyphs_dyn();

};

} // end namespace haxegon
} // end namespace bitmapFont

#endif /* INCLUDED_haxegon_bitmapFont_BitmapFont */ 
