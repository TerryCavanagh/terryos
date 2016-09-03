#ifndef INCLUDED_haxegon_bitmapFont_BitmapGlyph
#define INCLUDED_haxegon_bitmapFont_BitmapGlyph

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxegon,bitmapFont,BitmapGlyph)
HX_DECLARE_CLASS2(openfl,display,BitmapData)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,geom,Rectangle)
namespace haxegon{
namespace bitmapFont{


class HXCPP_CLASS_ATTRIBUTES  BitmapGlyph_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef BitmapGlyph_obj OBJ_;
		BitmapGlyph_obj();
		Void __construct(int charCode,::openfl::display::BitmapData bmd,hx::Null< int >  __o_offsetX,hx::Null< int >  __o_offsetY,hx::Null< int >  __o_xAdvance);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="haxegon.bitmapFont.BitmapGlyph")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< BitmapGlyph_obj > __new(int charCode,::openfl::display::BitmapData bmd,hx::Null< int >  __o_offsetX,hx::Null< int >  __o_offsetY,hx::Null< int >  __o_xAdvance);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~BitmapGlyph_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("BitmapGlyph","\x1d","\xd3","\x8d","\xba"); }

		int charCode;
		::openfl::display::BitmapData bitmap;
		int offsetX;
		int offsetY;
		int xAdvance;
		::openfl::geom::Rectangle rect;
		virtual Void dispose( );
		Dynamic dispose_dyn();

};

} // end namespace haxegon
} // end namespace bitmapFont

#endif /* INCLUDED_haxegon_bitmapFont_BitmapGlyph */ 
