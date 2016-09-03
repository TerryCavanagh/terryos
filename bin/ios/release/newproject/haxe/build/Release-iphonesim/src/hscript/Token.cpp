#include <hxcpp.h>

#ifndef INCLUDED_hscript_Const
#include <hscript/Const.h>
#endif
#ifndef INCLUDED_hscript_Token
#include <hscript/Token.h>
#endif
namespace hscript{

::hscript::Token Token_obj::TBkClose;

::hscript::Token Token_obj::TBkOpen;

::hscript::Token Token_obj::TBrClose;

::hscript::Token Token_obj::TBrOpen;

::hscript::Token Token_obj::TComma;

::hscript::Token  Token_obj::TConst(::hscript::Const c)
	{ return hx::CreateEnum< Token_obj >(HX_HCSTRING("TConst","\x6f","\xb8","\x85","\x73"),1,hx::DynamicArray(0,1).Add(c)); }

::hscript::Token Token_obj::TDot;

::hscript::Token Token_obj::TDoubleDot;

::hscript::Token Token_obj::TEof;

::hscript::Token  Token_obj::TId(::String s)
	{ return hx::CreateEnum< Token_obj >(HX_HCSTRING("TId","\x4f","\xfd","\x3f","\x00"),2,hx::DynamicArray(0,1).Add(s)); }

::hscript::Token  Token_obj::TOp(::String s)
	{ return hx::CreateEnum< Token_obj >(HX_HCSTRING("TOp","\x95","\x02","\x40","\x00"),3,hx::DynamicArray(0,1).Add(s)); }

::hscript::Token Token_obj::TPClose;

::hscript::Token Token_obj::TPOpen;

::hscript::Token Token_obj::TQuestion;

::hscript::Token Token_obj::TSemicolon;

HX_DEFINE_CREATE_ENUM(Token_obj)

int Token_obj::__FindIndex(::String inName)
{
	if (inName==HX_HCSTRING("TBkClose","\x3b","\x33","\xd6","\x20")) return 12;
	if (inName==HX_HCSTRING("TBkOpen","\xa7","\x09","\x06","\xd9")) return 11;
	if (inName==HX_HCSTRING("TBrClose","\xd4","\xb9","\x55","\xed")) return 7;
	if (inName==HX_HCSTRING("TBrOpen","\x2e","\x19","\xd4","\xe0")) return 6;
	if (inName==HX_HCSTRING("TComma","\xe1","\xf0","\x84","\x73")) return 9;
	if (inName==HX_HCSTRING("TConst","\x6f","\xb8","\x85","\x73")) return 1;
	if (inName==HX_HCSTRING("TDot","\x95","\xe6","\xb9","\x37")) return 8;
	if (inName==HX_HCSTRING("TDoubleDot","\x04","\x85","\xf4","\x8f")) return 14;
	if (inName==HX_HCSTRING("TEof","\xc8","\xa8","\xba","\x37")) return 0;
	if (inName==HX_HCSTRING("TId","\x4f","\xfd","\x3f","\x00")) return 2;
	if (inName==HX_HCSTRING("TOp","\x95","\x02","\x40","\x00")) return 3;
	if (inName==HX_HCSTRING("TPClose","\x9c","\x5c","\x28","\x7d")) return 5;
	if (inName==HX_HCSTRING("TPOpen","\x66","\xe7","\x95","\xda")) return 4;
	if (inName==HX_HCSTRING("TQuestion","\x9a","\xcb","\x98","\x37")) return 13;
	if (inName==HX_HCSTRING("TSemicolon","\x3d","\x4b","\x14","\x08")) return 10;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Token_obj,TConst,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Token_obj,TId,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Token_obj,TOp,return)

int Token_obj::__FindArgCount(::String inName)
{
	if (inName==HX_HCSTRING("TBkClose","\x3b","\x33","\xd6","\x20")) return 0;
	if (inName==HX_HCSTRING("TBkOpen","\xa7","\x09","\x06","\xd9")) return 0;
	if (inName==HX_HCSTRING("TBrClose","\xd4","\xb9","\x55","\xed")) return 0;
	if (inName==HX_HCSTRING("TBrOpen","\x2e","\x19","\xd4","\xe0")) return 0;
	if (inName==HX_HCSTRING("TComma","\xe1","\xf0","\x84","\x73")) return 0;
	if (inName==HX_HCSTRING("TConst","\x6f","\xb8","\x85","\x73")) return 1;
	if (inName==HX_HCSTRING("TDot","\x95","\xe6","\xb9","\x37")) return 0;
	if (inName==HX_HCSTRING("TDoubleDot","\x04","\x85","\xf4","\x8f")) return 0;
	if (inName==HX_HCSTRING("TEof","\xc8","\xa8","\xba","\x37")) return 0;
	if (inName==HX_HCSTRING("TId","\x4f","\xfd","\x3f","\x00")) return 1;
	if (inName==HX_HCSTRING("TOp","\x95","\x02","\x40","\x00")) return 1;
	if (inName==HX_HCSTRING("TPClose","\x9c","\x5c","\x28","\x7d")) return 0;
	if (inName==HX_HCSTRING("TPOpen","\x66","\xe7","\x95","\xda")) return 0;
	if (inName==HX_HCSTRING("TQuestion","\x9a","\xcb","\x98","\x37")) return 0;
	if (inName==HX_HCSTRING("TSemicolon","\x3d","\x4b","\x14","\x08")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic Token_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_HCSTRING("TBkClose","\x3b","\x33","\xd6","\x20")) return TBkClose;
	if (inName==HX_HCSTRING("TBkOpen","\xa7","\x09","\x06","\xd9")) return TBkOpen;
	if (inName==HX_HCSTRING("TBrClose","\xd4","\xb9","\x55","\xed")) return TBrClose;
	if (inName==HX_HCSTRING("TBrOpen","\x2e","\x19","\xd4","\xe0")) return TBrOpen;
	if (inName==HX_HCSTRING("TComma","\xe1","\xf0","\x84","\x73")) return TComma;
	if (inName==HX_HCSTRING("TConst","\x6f","\xb8","\x85","\x73")) return TConst_dyn();
	if (inName==HX_HCSTRING("TDot","\x95","\xe6","\xb9","\x37")) return TDot;
	if (inName==HX_HCSTRING("TDoubleDot","\x04","\x85","\xf4","\x8f")) return TDoubleDot;
	if (inName==HX_HCSTRING("TEof","\xc8","\xa8","\xba","\x37")) return TEof;
	if (inName==HX_HCSTRING("TId","\x4f","\xfd","\x3f","\x00")) return TId_dyn();
	if (inName==HX_HCSTRING("TOp","\x95","\x02","\x40","\x00")) return TOp_dyn();
	if (inName==HX_HCSTRING("TPClose","\x9c","\x5c","\x28","\x7d")) return TPClose;
	if (inName==HX_HCSTRING("TPOpen","\x66","\xe7","\x95","\xda")) return TPOpen;
	if (inName==HX_HCSTRING("TQuestion","\x9a","\xcb","\x98","\x37")) return TQuestion;
	if (inName==HX_HCSTRING("TSemicolon","\x3d","\x4b","\x14","\x08")) return TSemicolon;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_HCSTRING("TEof","\xc8","\xa8","\xba","\x37"),
	HX_HCSTRING("TConst","\x6f","\xb8","\x85","\x73"),
	HX_HCSTRING("TId","\x4f","\xfd","\x3f","\x00"),
	HX_HCSTRING("TOp","\x95","\x02","\x40","\x00"),
	HX_HCSTRING("TPOpen","\x66","\xe7","\x95","\xda"),
	HX_HCSTRING("TPClose","\x9c","\x5c","\x28","\x7d"),
	HX_HCSTRING("TBrOpen","\x2e","\x19","\xd4","\xe0"),
	HX_HCSTRING("TBrClose","\xd4","\xb9","\x55","\xed"),
	HX_HCSTRING("TDot","\x95","\xe6","\xb9","\x37"),
	HX_HCSTRING("TComma","\xe1","\xf0","\x84","\x73"),
	HX_HCSTRING("TSemicolon","\x3d","\x4b","\x14","\x08"),
	HX_HCSTRING("TBkOpen","\xa7","\x09","\x06","\xd9"),
	HX_HCSTRING("TBkClose","\x3b","\x33","\xd6","\x20"),
	HX_HCSTRING("TQuestion","\x9a","\xcb","\x98","\x37"),
	HX_HCSTRING("TDoubleDot","\x04","\x85","\xf4","\x8f"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Token_obj::TBkClose,"TBkClose");
	HX_MARK_MEMBER_NAME(Token_obj::TBkOpen,"TBkOpen");
	HX_MARK_MEMBER_NAME(Token_obj::TBrClose,"TBrClose");
	HX_MARK_MEMBER_NAME(Token_obj::TBrOpen,"TBrOpen");
	HX_MARK_MEMBER_NAME(Token_obj::TComma,"TComma");
	HX_MARK_MEMBER_NAME(Token_obj::TDot,"TDot");
	HX_MARK_MEMBER_NAME(Token_obj::TDoubleDot,"TDoubleDot");
	HX_MARK_MEMBER_NAME(Token_obj::TEof,"TEof");
	HX_MARK_MEMBER_NAME(Token_obj::TPClose,"TPClose");
	HX_MARK_MEMBER_NAME(Token_obj::TPOpen,"TPOpen");
	HX_MARK_MEMBER_NAME(Token_obj::TQuestion,"TQuestion");
	HX_MARK_MEMBER_NAME(Token_obj::TSemicolon,"TSemicolon");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Token_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Token_obj::TBkClose,"TBkClose");
	HX_VISIT_MEMBER_NAME(Token_obj::TBkOpen,"TBkOpen");
	HX_VISIT_MEMBER_NAME(Token_obj::TBrClose,"TBrClose");
	HX_VISIT_MEMBER_NAME(Token_obj::TBrOpen,"TBrOpen");
	HX_VISIT_MEMBER_NAME(Token_obj::TComma,"TComma");
	HX_VISIT_MEMBER_NAME(Token_obj::TDot,"TDot");
	HX_VISIT_MEMBER_NAME(Token_obj::TDoubleDot,"TDoubleDot");
	HX_VISIT_MEMBER_NAME(Token_obj::TEof,"TEof");
	HX_VISIT_MEMBER_NAME(Token_obj::TPClose,"TPClose");
	HX_VISIT_MEMBER_NAME(Token_obj::TPOpen,"TPOpen");
	HX_VISIT_MEMBER_NAME(Token_obj::TQuestion,"TQuestion");
	HX_VISIT_MEMBER_NAME(Token_obj::TSemicolon,"TSemicolon");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
hx::Class Token_obj::__mClass;

Dynamic __Create_Token_obj() { return new Token_obj; }

void Token_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_HCSTRING("hscript.Token","\x9e","\x70","\xf1","\xc4"), hx::TCanCast< Token_obj >,sStaticFields,sMemberFields,
	&__Create_Token_obj, &__Create,
	&super::__SGetClass(), &CreateToken_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void Token_obj::__boot()
{
hx::Static(TBkClose) = hx::CreateEnum< Token_obj >(HX_HCSTRING("TBkClose","\x3b","\x33","\xd6","\x20"),12);
hx::Static(TBkOpen) = hx::CreateEnum< Token_obj >(HX_HCSTRING("TBkOpen","\xa7","\x09","\x06","\xd9"),11);
hx::Static(TBrClose) = hx::CreateEnum< Token_obj >(HX_HCSTRING("TBrClose","\xd4","\xb9","\x55","\xed"),7);
hx::Static(TBrOpen) = hx::CreateEnum< Token_obj >(HX_HCSTRING("TBrOpen","\x2e","\x19","\xd4","\xe0"),6);
hx::Static(TComma) = hx::CreateEnum< Token_obj >(HX_HCSTRING("TComma","\xe1","\xf0","\x84","\x73"),9);
hx::Static(TDot) = hx::CreateEnum< Token_obj >(HX_HCSTRING("TDot","\x95","\xe6","\xb9","\x37"),8);
hx::Static(TDoubleDot) = hx::CreateEnum< Token_obj >(HX_HCSTRING("TDoubleDot","\x04","\x85","\xf4","\x8f"),14);
hx::Static(TEof) = hx::CreateEnum< Token_obj >(HX_HCSTRING("TEof","\xc8","\xa8","\xba","\x37"),0);
hx::Static(TPClose) = hx::CreateEnum< Token_obj >(HX_HCSTRING("TPClose","\x9c","\x5c","\x28","\x7d"),5);
hx::Static(TPOpen) = hx::CreateEnum< Token_obj >(HX_HCSTRING("TPOpen","\x66","\xe7","\x95","\xda"),4);
hx::Static(TQuestion) = hx::CreateEnum< Token_obj >(HX_HCSTRING("TQuestion","\x9a","\xcb","\x98","\x37"),13);
hx::Static(TSemicolon) = hx::CreateEnum< Token_obj >(HX_HCSTRING("TSemicolon","\x3d","\x4b","\x14","\x08"),10);
}


} // end namespace hscript
