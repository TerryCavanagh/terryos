#include <hxcpp.h>

#ifndef INCLUDED_hscript__Interp_Stop
#include <hscript/_Interp/Stop.h>
#endif
namespace hscript{
namespace _Interp{

::hscript::_Interp::Stop Stop_obj::SBreak;

::hscript::_Interp::Stop Stop_obj::SContinue;

::hscript::_Interp::Stop  Stop_obj::SReturn(Dynamic v)
	{ return hx::CreateEnum< Stop_obj >(HX_HCSTRING("SReturn","\x63","\x99","\x37","\xb9"),2,hx::DynamicArray(0,1).Add(v)); }

HX_DEFINE_CREATE_ENUM(Stop_obj)

int Stop_obj::__FindIndex(::String inName)
{
	if (inName==HX_HCSTRING("SBreak","\x6c","\x87","\xb8","\x7b")) return 0;
	if (inName==HX_HCSTRING("SContinue","\xda","\xa7","\xbf","\x6f")) return 1;
	if (inName==HX_HCSTRING("SReturn","\x63","\x99","\x37","\xb9")) return 2;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Stop_obj,SReturn,return)

int Stop_obj::__FindArgCount(::String inName)
{
	if (inName==HX_HCSTRING("SBreak","\x6c","\x87","\xb8","\x7b")) return 0;
	if (inName==HX_HCSTRING("SContinue","\xda","\xa7","\xbf","\x6f")) return 0;
	if (inName==HX_HCSTRING("SReturn","\x63","\x99","\x37","\xb9")) return 1;
	return super::__FindArgCount(inName);
}

Dynamic Stop_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_HCSTRING("SBreak","\x6c","\x87","\xb8","\x7b")) return SBreak;
	if (inName==HX_HCSTRING("SContinue","\xda","\xa7","\xbf","\x6f")) return SContinue;
	if (inName==HX_HCSTRING("SReturn","\x63","\x99","\x37","\xb9")) return SReturn_dyn();
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_HCSTRING("SBreak","\x6c","\x87","\xb8","\x7b"),
	HX_HCSTRING("SContinue","\xda","\xa7","\xbf","\x6f"),
	HX_HCSTRING("SReturn","\x63","\x99","\x37","\xb9"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Stop_obj::SBreak,"SBreak");
	HX_MARK_MEMBER_NAME(Stop_obj::SContinue,"SContinue");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Stop_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Stop_obj::SBreak,"SBreak");
	HX_VISIT_MEMBER_NAME(Stop_obj::SContinue,"SContinue");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
hx::Class Stop_obj::__mClass;

Dynamic __Create_Stop_obj() { return new Stop_obj; }

void Stop_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_HCSTRING("hscript._Interp.Stop","\xb8","\x6b","\xde","\xd6"), hx::TCanCast< Stop_obj >,sStaticFields,sMemberFields,
	&__Create_Stop_obj, &__Create,
	&super::__SGetClass(), &CreateStop_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void Stop_obj::__boot()
{
hx::Static(SBreak) = hx::CreateEnum< Stop_obj >(HX_HCSTRING("SBreak","\x6c","\x87","\xb8","\x7b"),0);
hx::Static(SContinue) = hx::CreateEnum< Stop_obj >(HX_HCSTRING("SContinue","\xda","\xa7","\xbf","\x6f"),1);
}


} // end namespace hscript
} // end namespace _Interp
