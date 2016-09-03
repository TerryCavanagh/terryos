#include <hxcpp.h>

#ifndef INCLUDED_hscript_CType
#include <hscript/CType.h>
#endif
namespace hscript{

::hscript::CType  CType_obj::CTAnon(cpp::ArrayBase fields)
	{ return hx::CreateEnum< CType_obj >(HX_HCSTRING("CTAnon","\x9d","\x9e","\xdc","\x52"),2,hx::DynamicArray(0,1).Add(fields)); }

::hscript::CType  CType_obj::CTFun(Array< ::Dynamic > args,::hscript::CType ret)
	{ return hx::CreateEnum< CType_obj >(HX_HCSTRING("CTFun","\x0e","\x4e","\x94","\xcb"),1,hx::DynamicArray(0,2).Add(args).Add(ret)); }

::hscript::CType  CType_obj::CTParent(::hscript::CType t)
	{ return hx::CreateEnum< CType_obj >(HX_HCSTRING("CTParent","\xbb","\x4e","\x51","\xbf"),3,hx::DynamicArray(0,1).Add(t)); }

::hscript::CType  CType_obj::CTPath(Array< ::String > path,Array< ::Dynamic > params)
	{ return hx::CreateEnum< CType_obj >(HX_HCSTRING("CTPath","\xf6","\xf8","\xbc","\x5c"),0,hx::DynamicArray(0,2).Add(path).Add(params)); }

HX_DEFINE_CREATE_ENUM(CType_obj)

int CType_obj::__FindIndex(::String inName)
{
	if (inName==HX_HCSTRING("CTAnon","\x9d","\x9e","\xdc","\x52")) return 2;
	if (inName==HX_HCSTRING("CTFun","\x0e","\x4e","\x94","\xcb")) return 1;
	if (inName==HX_HCSTRING("CTParent","\xbb","\x4e","\x51","\xbf")) return 3;
	if (inName==HX_HCSTRING("CTPath","\xf6","\xf8","\xbc","\x5c")) return 0;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC1(CType_obj,CTAnon,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC2(CType_obj,CTFun,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(CType_obj,CTParent,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC2(CType_obj,CTPath,return)

int CType_obj::__FindArgCount(::String inName)
{
	if (inName==HX_HCSTRING("CTAnon","\x9d","\x9e","\xdc","\x52")) return 1;
	if (inName==HX_HCSTRING("CTFun","\x0e","\x4e","\x94","\xcb")) return 2;
	if (inName==HX_HCSTRING("CTParent","\xbb","\x4e","\x51","\xbf")) return 1;
	if (inName==HX_HCSTRING("CTPath","\xf6","\xf8","\xbc","\x5c")) return 2;
	return super::__FindArgCount(inName);
}

Dynamic CType_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_HCSTRING("CTAnon","\x9d","\x9e","\xdc","\x52")) return CTAnon_dyn();
	if (inName==HX_HCSTRING("CTFun","\x0e","\x4e","\x94","\xcb")) return CTFun_dyn();
	if (inName==HX_HCSTRING("CTParent","\xbb","\x4e","\x51","\xbf")) return CTParent_dyn();
	if (inName==HX_HCSTRING("CTPath","\xf6","\xf8","\xbc","\x5c")) return CTPath_dyn();
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_HCSTRING("CTPath","\xf6","\xf8","\xbc","\x5c"),
	HX_HCSTRING("CTFun","\x0e","\x4e","\x94","\xcb"),
	HX_HCSTRING("CTAnon","\x9d","\x9e","\xdc","\x52"),
	HX_HCSTRING("CTParent","\xbb","\x4e","\x51","\xbf"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CType_obj::__mClass,"__mClass");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
hx::Class CType_obj::__mClass;

Dynamic __Create_CType_obj() { return new CType_obj; }

void CType_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_HCSTRING("hscript.CType","\x62","\x7a","\x53","\xe9"), hx::TCanCast< CType_obj >,sStaticFields,sMemberFields,
	&__Create_CType_obj, &__Create,
	&super::__SGetClass(), &CreateCType_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void CType_obj::__boot()
{
}


} // end namespace hscript
