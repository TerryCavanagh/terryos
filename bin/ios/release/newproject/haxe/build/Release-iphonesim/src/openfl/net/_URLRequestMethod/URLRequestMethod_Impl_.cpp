#include <hxcpp.h>

#ifndef INCLUDED_openfl_net__URLRequestMethod_URLRequestMethod_Impl_
#include <openfl/net/_URLRequestMethod/URLRequestMethod_Impl_.h>
#endif
namespace openfl{
namespace net{
namespace _URLRequestMethod{

Void URLRequestMethod_Impl__obj::__construct()
{
	return null();
}

//URLRequestMethod_Impl__obj::~URLRequestMethod_Impl__obj() { }

Dynamic URLRequestMethod_Impl__obj::__CreateEmpty() { return  new URLRequestMethod_Impl__obj; }
hx::ObjectPtr< URLRequestMethod_Impl__obj > URLRequestMethod_Impl__obj::__new()
{  hx::ObjectPtr< URLRequestMethod_Impl__obj > _result_ = new URLRequestMethod_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic URLRequestMethod_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< URLRequestMethod_Impl__obj > _result_ = new URLRequestMethod_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic URLRequestMethod_Impl__obj::DELETE;

Dynamic URLRequestMethod_Impl__obj::GET;

Dynamic URLRequestMethod_Impl__obj::HEAD;

Dynamic URLRequestMethod_Impl__obj::OPTIONS;

Dynamic URLRequestMethod_Impl__obj::POST;

Dynamic URLRequestMethod_Impl__obj::PUT;

Dynamic URLRequestMethod_Impl__obj::fromString( ::String value){
	HX_STACK_FRAME("openfl.net._URLRequestMethod.URLRequestMethod_Impl_","fromString",0x0fd716cb,"openfl.net._URLRequestMethod.URLRequestMethod_Impl_.fromString","openfl/net/URLRequestMethod.hx",13,0x7ba99dec)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(15)
	::String tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(15)
	Dynamic tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(15)
	::String _switch_1 = (tmp);
	if (  ( _switch_1==HX_HCSTRING("DELETE","\x2b","\x6c","\x5b","\x1d"))){
		HX_STACK_LINE(17)
		tmp1 = ((Dynamic)((int)0));
	}
	else if (  ( _switch_1==HX_HCSTRING("GET","\x76","\x1c","\x36","\x00"))){
		HX_STACK_LINE(18)
		tmp1 = ((Dynamic)((int)1));
	}
	else if (  ( _switch_1==HX_HCSTRING("HEAD","\x20","\xf1","\xcb","\x2f"))){
		HX_STACK_LINE(19)
		tmp1 = ((Dynamic)((int)2));
	}
	else if (  ( _switch_1==HX_HCSTRING("OPTIONS","\x3e","\x07","\xd2","\x5f"))){
		HX_STACK_LINE(20)
		tmp1 = ((Dynamic)((int)3));
	}
	else if (  ( _switch_1==HX_HCSTRING("POST","\x60","\x4c","\x1d","\x35"))){
		HX_STACK_LINE(21)
		tmp1 = ((Dynamic)((int)4));
	}
	else if (  ( _switch_1==HX_HCSTRING("PUT","\xaf","\xfe","\x3c","\x00"))){
		HX_STACK_LINE(22)
		tmp1 = ((Dynamic)((int)5));
	}
	else  {
		HX_STACK_LINE(23)
		tmp1 = null();
	}
;
;
	HX_STACK_LINE(15)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(URLRequestMethod_Impl__obj,fromString,return )

::String URLRequestMethod_Impl__obj::toString( int value){
	HX_STACK_FRAME("openfl.net._URLRequestMethod.URLRequestMethod_Impl_","toString",0xee109d9c,"openfl.net._URLRequestMethod.URLRequestMethod_Impl_.toString","openfl/net/URLRequestMethod.hx",29,0x7ba99dec)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(31)
	int tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(31)
	::String tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(31)
	switch( (int)(tmp)){
		case (int)0: {
			HX_STACK_LINE(33)
			tmp1 = HX_HCSTRING("DELETE","\x2b","\x6c","\x5b","\x1d");
		}
		;break;
		case (int)1: {
			HX_STACK_LINE(34)
			tmp1 = HX_HCSTRING("GET","\x76","\x1c","\x36","\x00");
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(35)
			tmp1 = HX_HCSTRING("HEAD","\x20","\xf1","\xcb","\x2f");
		}
		;break;
		case (int)3: {
			HX_STACK_LINE(36)
			tmp1 = HX_HCSTRING("OPTIONS","\x3e","\x07","\xd2","\x5f");
		}
		;break;
		case (int)4: {
			HX_STACK_LINE(37)
			tmp1 = HX_HCSTRING("POST","\x60","\x4c","\x1d","\x35");
		}
		;break;
		case (int)5: {
			HX_STACK_LINE(38)
			tmp1 = HX_HCSTRING("PUT","\xaf","\xfe","\x3c","\x00");
		}
		;break;
		default: {
			HX_STACK_LINE(39)
			tmp1 = null();
		}
	}
	HX_STACK_LINE(31)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(URLRequestMethod_Impl__obj,toString,return )


URLRequestMethod_Impl__obj::URLRequestMethod_Impl__obj()
{
}

bool URLRequestMethod_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { outValue = toString_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"fromString") ) { outValue = fromString_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(void *) &URLRequestMethod_Impl__obj::DELETE,HX_HCSTRING("DELETE","\x2b","\x6c","\x5b","\x1d")},
	{hx::fsObject /*Dynamic*/ ,(void *) &URLRequestMethod_Impl__obj::GET,HX_HCSTRING("GET","\x76","\x1c","\x36","\x00")},
	{hx::fsObject /*Dynamic*/ ,(void *) &URLRequestMethod_Impl__obj::HEAD,HX_HCSTRING("HEAD","\x20","\xf1","\xcb","\x2f")},
	{hx::fsObject /*Dynamic*/ ,(void *) &URLRequestMethod_Impl__obj::OPTIONS,HX_HCSTRING("OPTIONS","\x3e","\x07","\xd2","\x5f")},
	{hx::fsObject /*Dynamic*/ ,(void *) &URLRequestMethod_Impl__obj::POST,HX_HCSTRING("POST","\x60","\x4c","\x1d","\x35")},
	{hx::fsObject /*Dynamic*/ ,(void *) &URLRequestMethod_Impl__obj::PUT,HX_HCSTRING("PUT","\xaf","\xfe","\x3c","\x00")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(URLRequestMethod_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(URLRequestMethod_Impl__obj::DELETE,"DELETE");
	HX_MARK_MEMBER_NAME(URLRequestMethod_Impl__obj::GET,"GET");
	HX_MARK_MEMBER_NAME(URLRequestMethod_Impl__obj::HEAD,"HEAD");
	HX_MARK_MEMBER_NAME(URLRequestMethod_Impl__obj::OPTIONS,"OPTIONS");
	HX_MARK_MEMBER_NAME(URLRequestMethod_Impl__obj::POST,"POST");
	HX_MARK_MEMBER_NAME(URLRequestMethod_Impl__obj::PUT,"PUT");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(URLRequestMethod_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(URLRequestMethod_Impl__obj::DELETE,"DELETE");
	HX_VISIT_MEMBER_NAME(URLRequestMethod_Impl__obj::GET,"GET");
	HX_VISIT_MEMBER_NAME(URLRequestMethod_Impl__obj::HEAD,"HEAD");
	HX_VISIT_MEMBER_NAME(URLRequestMethod_Impl__obj::OPTIONS,"OPTIONS");
	HX_VISIT_MEMBER_NAME(URLRequestMethod_Impl__obj::POST,"POST");
	HX_VISIT_MEMBER_NAME(URLRequestMethod_Impl__obj::PUT,"PUT");
};

#endif

hx::Class URLRequestMethod_Impl__obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("DELETE","\x2b","\x6c","\x5b","\x1d"),
	HX_HCSTRING("GET","\x76","\x1c","\x36","\x00"),
	HX_HCSTRING("HEAD","\x20","\xf1","\xcb","\x2f"),
	HX_HCSTRING("OPTIONS","\x3e","\x07","\xd2","\x5f"),
	HX_HCSTRING("POST","\x60","\x4c","\x1d","\x35"),
	HX_HCSTRING("PUT","\xaf","\xfe","\x3c","\x00"),
	HX_HCSTRING("fromString","\xdb","\x2d","\x74","\x54"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null()) };

void URLRequestMethod_Impl__obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.net._URLRequestMethod.URLRequestMethod_Impl_","\x7e","\xf1","\x5f","\xcd");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &URLRequestMethod_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< URLRequestMethod_Impl__obj >;
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

void URLRequestMethod_Impl__obj::__boot()
{
	DELETE= ((Dynamic)((int)0));
	GET= ((Dynamic)((int)1));
	HEAD= ((Dynamic)((int)2));
	OPTIONS= ((Dynamic)((int)3));
	POST= ((Dynamic)((int)4));
	PUT= ((Dynamic)((int)5));
}

} // end namespace openfl
} // end namespace net
} // end namespace _URLRequestMethod
