#ifndef INCLUDED_haxegon_bitmapFont_TextBorderStyle
#define INCLUDED_haxegon_bitmapFont_TextBorderStyle

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxegon,bitmapFont,TextBorderStyle)
namespace haxegon{
namespace bitmapFont{


class TextBorderStyle_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef TextBorderStyle_obj OBJ_;

	public:
		TextBorderStyle_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_HCSTRING("haxegon.bitmapFont.TextBorderStyle","\x96","\x52","\xfd","\x0f"); }
		::String __ToString() const { return HX_HCSTRING("TextBorderStyle.","\x56","\xe4","\xa9","\x3a") + tag; }

		static ::haxegon::bitmapFont::TextBorderStyle NONE;
		static inline ::haxegon::bitmapFont::TextBorderStyle NONE_dyn() { return NONE; }
		static ::haxegon::bitmapFont::TextBorderStyle OUTLINE;
		static inline ::haxegon::bitmapFont::TextBorderStyle OUTLINE_dyn() { return OUTLINE; }
		static ::haxegon::bitmapFont::TextBorderStyle OUTLINE_FAST;
		static inline ::haxegon::bitmapFont::TextBorderStyle OUTLINE_FAST_dyn() { return OUTLINE_FAST; }
		static ::haxegon::bitmapFont::TextBorderStyle SHADOW;
		static inline ::haxegon::bitmapFont::TextBorderStyle SHADOW_dyn() { return SHADOW; }
};

} // end namespace haxegon
} // end namespace bitmapFont

#endif /* INCLUDED_haxegon_bitmapFont_TextBorderStyle */ 
