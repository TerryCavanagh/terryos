#ifndef INCLUDED_lime_graphics_cairo_CairoGlyph
#define INCLUDED_lime_graphics_cairo_CairoGlyph

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(lime,graphics,cairo,CairoGlyph)
namespace lime{
namespace graphics{
namespace cairo{


class HXCPP_CLASS_ATTRIBUTES  CairoGlyph_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef CairoGlyph_obj OBJ_;
		CairoGlyph_obj();
		Void __construct(int index,hx::Null< Float >  __o_x,hx::Null< Float >  __o_y);

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="lime.graphics.cairo.CairoGlyph")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< CairoGlyph_obj > __new(int index,hx::Null< Float >  __o_x,hx::Null< Float >  __o_y);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~CairoGlyph_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("CairoGlyph","\x24","\x54","\x05","\xc6"); }

		int index;
		Float x;
		Float y;
};

} // end namespace lime
} // end namespace graphics
} // end namespace cairo

#endif /* INCLUDED_lime_graphics_cairo_CairoGlyph */ 
