#include <hxcpp.h>

#ifndef INCLUDED_hscript_Error
#include <hscript/Error.h>
#endif
#ifndef INCLUDED_hscript_ErrorDef
#include <hscript/ErrorDef.h>
#endif
namespace hscript{

Void Error_obj::__construct(::hscript::ErrorDef e,int pmin,int pmax)
{
HX_STACK_FRAME("hscript.Error","new",0x4a2914df,"hscript.Error.new","hscript/Expr.hx",86,0x44b487ad)
HX_STACK_THIS(this)
HX_STACK_ARG(e,"e")
HX_STACK_ARG(pmin,"pmin")
HX_STACK_ARG(pmax,"pmax")
{
	HX_STACK_LINE(87)
	this->e = e;
	HX_STACK_LINE(88)
	this->pmin = pmin;
	HX_STACK_LINE(89)
	this->pmax = pmax;
}
;
	return null();
}

//Error_obj::~Error_obj() { }

Dynamic Error_obj::__CreateEmpty() { return  new Error_obj; }
hx::ObjectPtr< Error_obj > Error_obj::__new(::hscript::ErrorDef e,int pmin,int pmax)
{  hx::ObjectPtr< Error_obj > _result_ = new Error_obj();
	_result_->__construct(e,pmin,pmax);
	return _result_;}

Dynamic Error_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Error_obj > _result_ = new Error_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _result_;}


Error_obj::Error_obj()
{
}

void Error_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Error);
	HX_MARK_MEMBER_NAME(e,"e");
	HX_MARK_MEMBER_NAME(pmin,"pmin");
	HX_MARK_MEMBER_NAME(pmax,"pmax");
	HX_MARK_END_CLASS();
}

void Error_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(e,"e");
	HX_VISIT_MEMBER_NAME(pmin,"pmin");
	HX_VISIT_MEMBER_NAME(pmax,"pmax");
}

Dynamic Error_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"e") ) { return e; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"pmin") ) { return pmin; }
		if (HX_FIELD_EQ(inName,"pmax") ) { return pmax; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Error_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"e") ) { e=inValue.Cast< ::hscript::ErrorDef >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"pmin") ) { pmin=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"pmax") ) { pmax=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Error_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("e","\x65","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("pmin","\x22","\xf7","\x5a","\x4a"));
	outFields->push(HX_HCSTRING("pmax","\x34","\xf0","\x5a","\x4a"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::hscript::ErrorDef*/ ,(int)offsetof(Error_obj,e),HX_HCSTRING("e","\x65","\x00","\x00","\x00")},
	{hx::fsInt,(int)offsetof(Error_obj,pmin),HX_HCSTRING("pmin","\x22","\xf7","\x5a","\x4a")},
	{hx::fsInt,(int)offsetof(Error_obj,pmax),HX_HCSTRING("pmax","\x34","\xf0","\x5a","\x4a")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("e","\x65","\x00","\x00","\x00"),
	HX_HCSTRING("pmin","\x22","\xf7","\x5a","\x4a"),
	HX_HCSTRING("pmax","\x34","\xf0","\x5a","\x4a"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Error_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Error_obj::__mClass,"__mClass");
};

#endif

hx::Class Error_obj::__mClass;

void Error_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("hscript.Error","\x6d","\xb9","\xef","\x23");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Error_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = sStaticStorageInfo;
#endif
	hx::RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hscript
