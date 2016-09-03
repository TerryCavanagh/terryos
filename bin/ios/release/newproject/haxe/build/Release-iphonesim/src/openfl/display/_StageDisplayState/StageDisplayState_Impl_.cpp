#include <hxcpp.h>

#ifndef INCLUDED_openfl_display__StageDisplayState_StageDisplayState_Impl_
#include <openfl/display/_StageDisplayState/StageDisplayState_Impl_.h>
#endif
namespace openfl{
namespace display{
namespace _StageDisplayState{

Void StageDisplayState_Impl__obj::__construct()
{
	return null();
}

//StageDisplayState_Impl__obj::~StageDisplayState_Impl__obj() { }

Dynamic StageDisplayState_Impl__obj::__CreateEmpty() { return  new StageDisplayState_Impl__obj; }
hx::ObjectPtr< StageDisplayState_Impl__obj > StageDisplayState_Impl__obj::__new()
{  hx::ObjectPtr< StageDisplayState_Impl__obj > _result_ = new StageDisplayState_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic StageDisplayState_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< StageDisplayState_Impl__obj > _result_ = new StageDisplayState_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic StageDisplayState_Impl__obj::FULL_SCREEN;

Dynamic StageDisplayState_Impl__obj::FULL_SCREEN_INTERACTIVE;

Dynamic StageDisplayState_Impl__obj::NORMAL;

Dynamic StageDisplayState_Impl__obj::fromString( ::String value){
	HX_STACK_FRAME("openfl.display._StageDisplayState.StageDisplayState_Impl_","fromString",0xa44db312,"openfl.display._StageDisplayState.StageDisplayState_Impl_.fromString","openfl/display/StageDisplayState.hx",10,0x75a7a3fd)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(12)
	::String tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(12)
	Dynamic tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(12)
	::String _switch_1 = (tmp);
	if (  ( _switch_1==HX_HCSTRING("fullScreen","\x5b","\xae","\x48","\x2e"))){
		HX_STACK_LINE(14)
		tmp1 = ((Dynamic)((int)0));
	}
	else if (  ( _switch_1==HX_HCSTRING("fullScreenInteractive","\x47","\xdf","\xd1","\x02"))){
		HX_STACK_LINE(15)
		tmp1 = ((Dynamic)((int)1));
	}
	else if (  ( _switch_1==HX_HCSTRING("normal","\x27","\x72","\x69","\x30"))){
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


STATIC_HX_DEFINE_DYNAMIC_FUNC1(StageDisplayState_Impl__obj,fromString,return )

::String StageDisplayState_Impl__obj::toString( int value){
	HX_STACK_FRAME("openfl.display._StageDisplayState.StageDisplayState_Impl_","toString",0x6b7dca23,"openfl.display._StageDisplayState.StageDisplayState_Impl_.toString","openfl/display/StageDisplayState.hx",23,0x75a7a3fd)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(25)
	int tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(25)
	::String tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(25)
	switch( (int)(tmp)){
		case (int)0: {
			HX_STACK_LINE(27)
			tmp1 = HX_HCSTRING("fullScreen","\x5b","\xae","\x48","\x2e");
		}
		;break;
		case (int)1: {
			HX_STACK_LINE(28)
			tmp1 = HX_HCSTRING("fullScreenInteractive","\x47","\xdf","\xd1","\x02");
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(29)
			tmp1 = HX_HCSTRING("normal","\x27","\x72","\x69","\x30");
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


STATIC_HX_DEFINE_DYNAMIC_FUNC1(StageDisplayState_Impl__obj,toString,return )


StageDisplayState_Impl__obj::StageDisplayState_Impl__obj()
{
}

bool StageDisplayState_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
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
	{hx::fsObject /*Dynamic*/ ,(void *) &StageDisplayState_Impl__obj::FULL_SCREEN,HX_HCSTRING("FULL_SCREEN","\x5c","\x27","\x87","\x18")},
	{hx::fsObject /*Dynamic*/ ,(void *) &StageDisplayState_Impl__obj::FULL_SCREEN_INTERACTIVE,HX_HCSTRING("FULL_SCREEN_INTERACTIVE","\x1f","\xb9","\xf1","\x23")},
	{hx::fsObject /*Dynamic*/ ,(void *) &StageDisplayState_Impl__obj::NORMAL,HX_HCSTRING("NORMAL","\x27","\x1e","\xec","\xe2")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(StageDisplayState_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(StageDisplayState_Impl__obj::FULL_SCREEN,"FULL_SCREEN");
	HX_MARK_MEMBER_NAME(StageDisplayState_Impl__obj::FULL_SCREEN_INTERACTIVE,"FULL_SCREEN_INTERACTIVE");
	HX_MARK_MEMBER_NAME(StageDisplayState_Impl__obj::NORMAL,"NORMAL");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(StageDisplayState_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(StageDisplayState_Impl__obj::FULL_SCREEN,"FULL_SCREEN");
	HX_VISIT_MEMBER_NAME(StageDisplayState_Impl__obj::FULL_SCREEN_INTERACTIVE,"FULL_SCREEN_INTERACTIVE");
	HX_VISIT_MEMBER_NAME(StageDisplayState_Impl__obj::NORMAL,"NORMAL");
};

#endif

hx::Class StageDisplayState_Impl__obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("FULL_SCREEN","\x5c","\x27","\x87","\x18"),
	HX_HCSTRING("FULL_SCREEN_INTERACTIVE","\x1f","\xb9","\xf1","\x23"),
	HX_HCSTRING("NORMAL","\x27","\x1e","\xec","\xe2"),
	HX_HCSTRING("fromString","\xdb","\x2d","\x74","\x54"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null()) };

void StageDisplayState_Impl__obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.display._StageDisplayState.StageDisplayState_Impl_","\xd7","\x71","\x06","\xc1");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &StageDisplayState_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< StageDisplayState_Impl__obj >;
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

void StageDisplayState_Impl__obj::__boot()
{
	FULL_SCREEN= ((Dynamic)((int)0));
	FULL_SCREEN_INTERACTIVE= ((Dynamic)((int)1));
	NORMAL= ((Dynamic)((int)2));
}

} // end namespace openfl
} // end namespace display
} // end namespace _StageDisplayState
