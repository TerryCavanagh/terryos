#include <hxcpp.h>

#ifndef INCLUDED_haxegon_bitmapFont_TextBorderStyle
#include <haxegon/bitmapFont/TextBorderStyle.h>
#endif
namespace haxegon{
namespace bitmapFont{

::haxegon::bitmapFont::TextBorderStyle TextBorderStyle_obj::NONE;

::haxegon::bitmapFont::TextBorderStyle TextBorderStyle_obj::OUTLINE;

::haxegon::bitmapFont::TextBorderStyle TextBorderStyle_obj::OUTLINE_FAST;

::haxegon::bitmapFont::TextBorderStyle TextBorderStyle_obj::SHADOW;

HX_DEFINE_CREATE_ENUM(TextBorderStyle_obj)

int TextBorderStyle_obj::__FindIndex(::String inName)
{
	if (inName==HX_HCSTRING("NONE","\xb8","\xda","\xca","\x33")) return 0;
	if (inName==HX_HCSTRING("OUTLINE","\x62","\xeb","\x91","\x61")) return 2;
	if (inName==HX_HCSTRING("OUTLINE_FAST","\xd9","\x37","\x1b","\x3f")) return 3;
	if (inName==HX_HCSTRING("SHADOW","\xe0","\x73","\xa3","\xcf")) return 1;
	return super::__FindIndex(inName);
}

int TextBorderStyle_obj::__FindArgCount(::String inName)
{
	if (inName==HX_HCSTRING("NONE","\xb8","\xda","\xca","\x33")) return 0;
	if (inName==HX_HCSTRING("OUTLINE","\x62","\xeb","\x91","\x61")) return 0;
	if (inName==HX_HCSTRING("OUTLINE_FAST","\xd9","\x37","\x1b","\x3f")) return 0;
	if (inName==HX_HCSTRING("SHADOW","\xe0","\x73","\xa3","\xcf")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic TextBorderStyle_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_HCSTRING("NONE","\xb8","\xda","\xca","\x33")) return NONE;
	if (inName==HX_HCSTRING("OUTLINE","\x62","\xeb","\x91","\x61")) return OUTLINE;
	if (inName==HX_HCSTRING("OUTLINE_FAST","\xd9","\x37","\x1b","\x3f")) return OUTLINE_FAST;
	if (inName==HX_HCSTRING("SHADOW","\xe0","\x73","\xa3","\xcf")) return SHADOW;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_HCSTRING("NONE","\xb8","\xda","\xca","\x33"),
	HX_HCSTRING("SHADOW","\xe0","\x73","\xa3","\xcf"),
	HX_HCSTRING("OUTLINE","\x62","\xeb","\x91","\x61"),
	HX_HCSTRING("OUTLINE_FAST","\xd9","\x37","\x1b","\x3f"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TextBorderStyle_obj::NONE,"NONE");
	HX_MARK_MEMBER_NAME(TextBorderStyle_obj::OUTLINE,"OUTLINE");
	HX_MARK_MEMBER_NAME(TextBorderStyle_obj::OUTLINE_FAST,"OUTLINE_FAST");
	HX_MARK_MEMBER_NAME(TextBorderStyle_obj::SHADOW,"SHADOW");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TextBorderStyle_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(TextBorderStyle_obj::NONE,"NONE");
	HX_VISIT_MEMBER_NAME(TextBorderStyle_obj::OUTLINE,"OUTLINE");
	HX_VISIT_MEMBER_NAME(TextBorderStyle_obj::OUTLINE_FAST,"OUTLINE_FAST");
	HX_VISIT_MEMBER_NAME(TextBorderStyle_obj::SHADOW,"SHADOW");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
hx::Class TextBorderStyle_obj::__mClass;

Dynamic __Create_TextBorderStyle_obj() { return new TextBorderStyle_obj; }

void TextBorderStyle_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_HCSTRING("haxegon.bitmapFont.TextBorderStyle","\x96","\x52","\xfd","\x0f"), hx::TCanCast< TextBorderStyle_obj >,sStaticFields,sMemberFields,
	&__Create_TextBorderStyle_obj, &__Create,
	&super::__SGetClass(), &CreateTextBorderStyle_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void TextBorderStyle_obj::__boot()
{
hx::Static(NONE) = hx::CreateEnum< TextBorderStyle_obj >(HX_HCSTRING("NONE","\xb8","\xda","\xca","\x33"),0);
hx::Static(OUTLINE) = hx::CreateEnum< TextBorderStyle_obj >(HX_HCSTRING("OUTLINE","\x62","\xeb","\x91","\x61"),2);
hx::Static(OUTLINE_FAST) = hx::CreateEnum< TextBorderStyle_obj >(HX_HCSTRING("OUTLINE_FAST","\xd9","\x37","\x1b","\x3f"),3);
hx::Static(SHADOW) = hx::CreateEnum< TextBorderStyle_obj >(HX_HCSTRING("SHADOW","\xe0","\x73","\xa3","\xcf"),1);
}


} // end namespace haxegon
} // end namespace bitmapFont
