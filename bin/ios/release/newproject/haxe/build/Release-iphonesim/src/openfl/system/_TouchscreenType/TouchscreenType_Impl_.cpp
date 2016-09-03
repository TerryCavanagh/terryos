#include <hxcpp.h>

#ifndef INCLUDED_openfl_system__TouchscreenType_TouchscreenType_Impl_
#include <openfl/system/_TouchscreenType/TouchscreenType_Impl_.h>
#endif
namespace openfl{
namespace _system{
namespace _TouchscreenType{

Void TouchscreenType_Impl__obj::__construct()
{
	return null();
}

//TouchscreenType_Impl__obj::~TouchscreenType_Impl__obj() { }

Dynamic TouchscreenType_Impl__obj::__CreateEmpty() { return  new TouchscreenType_Impl__obj; }
hx::ObjectPtr< TouchscreenType_Impl__obj > TouchscreenType_Impl__obj::__new()
{  hx::ObjectPtr< TouchscreenType_Impl__obj > _result_ = new TouchscreenType_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic TouchscreenType_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TouchscreenType_Impl__obj > _result_ = new TouchscreenType_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic TouchscreenType_Impl__obj::FINGER;

Dynamic TouchscreenType_Impl__obj::NONE;

Dynamic TouchscreenType_Impl__obj::STYLUS;

Dynamic TouchscreenType_Impl__obj::fromString( ::String value){
	HX_STACK_FRAME("openfl.system._TouchscreenType.TouchscreenType_Impl_","fromString",0x82baf24b,"openfl.system._TouchscreenType.TouchscreenType_Impl_.fromString","openfl/system/TouchscreenType.hx",10,0x3b3b711a)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(12)
	::String tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(12)
	Dynamic tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(12)
	::String _switch_1 = (tmp);
	if (  ( _switch_1==HX_HCSTRING("finger","\xa9","\xaf","\x7d","\x86"))){
		HX_STACK_LINE(14)
		tmp1 = ((Dynamic)((int)0));
	}
	else if (  ( _switch_1==HX_HCSTRING("none","\xb8","\x12","\x0a","\x49"))){
		HX_STACK_LINE(15)
		tmp1 = ((Dynamic)((int)1));
	}
	else if (  ( _switch_1==HX_HCSTRING("stylus","\x12","\xf4","\xd2","\x15"))){
		HX_STACK_LINE(16)
		tmp1 = ((Dynamic)((int)2));
	}
	else  {
		HX_STACK_LINE(17)
		tmp1 = null();
	}
;
;
	HX_STACK_LINE(12)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(TouchscreenType_Impl__obj,fromString,return )

::String TouchscreenType_Impl__obj::toString( int value){
	HX_STACK_FRAME("openfl.system._TouchscreenType.TouchscreenType_Impl_","toString",0x94de991c,"openfl.system._TouchscreenType.TouchscreenType_Impl_.toString","openfl/system/TouchscreenType.hx",23,0x3b3b711a)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(25)
	int tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(25)
	::String tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(25)
	switch( (int)(tmp)){
		case (int)0: {
			HX_STACK_LINE(27)
			tmp1 = HX_HCSTRING("finger","\xa9","\xaf","\x7d","\x86");
		}
		;break;
		case (int)1: {
			HX_STACK_LINE(28)
			tmp1 = HX_HCSTRING("none","\xb8","\x12","\x0a","\x49");
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(29)
			tmp1 = HX_HCSTRING("stylus","\x12","\xf4","\xd2","\x15");
		}
		;break;
		default: {
			HX_STACK_LINE(30)
			tmp1 = null();
		}
	}
	HX_STACK_LINE(25)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(TouchscreenType_Impl__obj,toString,return )


TouchscreenType_Impl__obj::TouchscreenType_Impl__obj()
{
}

bool TouchscreenType_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
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
	{hx::fsObject /*Dynamic*/ ,(void *) &TouchscreenType_Impl__obj::FINGER,HX_HCSTRING("FINGER","\xa9","\x5b","\x00","\x39")},
	{hx::fsObject /*Dynamic*/ ,(void *) &TouchscreenType_Impl__obj::NONE,HX_HCSTRING("NONE","\xb8","\xda","\xca","\x33")},
	{hx::fsObject /*Dynamic*/ ,(void *) &TouchscreenType_Impl__obj::STYLUS,HX_HCSTRING("STYLUS","\x12","\xa0","\x55","\xc8")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TouchscreenType_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(TouchscreenType_Impl__obj::FINGER,"FINGER");
	HX_MARK_MEMBER_NAME(TouchscreenType_Impl__obj::NONE,"NONE");
	HX_MARK_MEMBER_NAME(TouchscreenType_Impl__obj::STYLUS,"STYLUS");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TouchscreenType_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(TouchscreenType_Impl__obj::FINGER,"FINGER");
	HX_VISIT_MEMBER_NAME(TouchscreenType_Impl__obj::NONE,"NONE");
	HX_VISIT_MEMBER_NAME(TouchscreenType_Impl__obj::STYLUS,"STYLUS");
};

#endif

hx::Class TouchscreenType_Impl__obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("FINGER","\xa9","\x5b","\x00","\x39"),
	HX_HCSTRING("NONE","\xb8","\xda","\xca","\x33"),
	HX_HCSTRING("STYLUS","\x12","\xa0","\x55","\xc8"),
	HX_HCSTRING("fromString","\xdb","\x2d","\x74","\x54"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null()) };

void TouchscreenType_Impl__obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.system._TouchscreenType.TouchscreenType_Impl_","\xfe","\x65","\x3f","\x76");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &TouchscreenType_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< TouchscreenType_Impl__obj >;
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

void TouchscreenType_Impl__obj::__boot()
{
	FINGER= ((Dynamic)((int)0));
	NONE= ((Dynamic)((int)1));
	STYLUS= ((Dynamic)((int)2));
}

} // end namespace openfl
} // end namespace system
} // end namespace _TouchscreenType
