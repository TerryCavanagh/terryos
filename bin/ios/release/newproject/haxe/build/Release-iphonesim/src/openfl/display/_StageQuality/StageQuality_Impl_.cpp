#include <hxcpp.h>

#ifndef INCLUDED_openfl_display__StageQuality_StageQuality_Impl_
#include <openfl/display/_StageQuality/StageQuality_Impl_.h>
#endif
namespace openfl{
namespace display{
namespace _StageQuality{

Void StageQuality_Impl__obj::__construct()
{
	return null();
}

//StageQuality_Impl__obj::~StageQuality_Impl__obj() { }

Dynamic StageQuality_Impl__obj::__CreateEmpty() { return  new StageQuality_Impl__obj; }
hx::ObjectPtr< StageQuality_Impl__obj > StageQuality_Impl__obj::__new()
{  hx::ObjectPtr< StageQuality_Impl__obj > _result_ = new StageQuality_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic StageQuality_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< StageQuality_Impl__obj > _result_ = new StageQuality_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic StageQuality_Impl__obj::BEST;

Dynamic StageQuality_Impl__obj::HIGH;

Dynamic StageQuality_Impl__obj::LOW;

Dynamic StageQuality_Impl__obj::MEDIUM;

Dynamic StageQuality_Impl__obj::fromString( ::String value){
	HX_STACK_FRAME("openfl.display._StageQuality.StageQuality_Impl_","fromString",0xd5e08bb0,"openfl.display._StageQuality.StageQuality_Impl_.fromString","openfl/display/StageQuality.hx",11,0x4c0ba3d1)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(13)
	::String tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(13)
	Dynamic tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(13)
	::String _switch_1 = (tmp);
	if (  ( _switch_1==HX_HCSTRING("best","\x24","\xf1","\x13","\x41"))){
		HX_STACK_LINE(15)
		tmp1 = ((Dynamic)((int)0));
	}
	else if (  ( _switch_1==HX_HCSTRING("high","\x62","\x37","\x0e","\x45"))){
		HX_STACK_LINE(16)
		tmp1 = ((Dynamic)((int)1));
	}
	else if (  ( _switch_1==HX_HCSTRING("low","\x94","\x54","\x52","\x00"))){
		HX_STACK_LINE(17)
		tmp1 = ((Dynamic)((int)2));
	}
	else if (  ( _switch_1==HX_HCSTRING("medium","\x75","\x54","\xc8","\xfe"))){
		HX_STACK_LINE(18)
		tmp1 = ((Dynamic)((int)3));
	}
	else  {
		HX_STACK_LINE(19)
		tmp1 = null();
	}
;
;
	HX_STACK_LINE(13)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(StageQuality_Impl__obj,fromString,return )

::String StageQuality_Impl__obj::toString( int value){
	HX_STACK_FRAME("openfl.display._StageQuality.StageQuality_Impl_","toString",0x0c5a9f41,"openfl.display._StageQuality.StageQuality_Impl_.toString","openfl/display/StageQuality.hx",25,0x4c0ba3d1)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(27)
	int tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(27)
	::String tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(27)
	switch( (int)(tmp)){
		case (int)0: {
			HX_STACK_LINE(29)
			tmp1 = HX_HCSTRING("best","\x24","\xf1","\x13","\x41");
		}
		;break;
		case (int)1: {
			HX_STACK_LINE(30)
			tmp1 = HX_HCSTRING("high","\x62","\x37","\x0e","\x45");
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(31)
			tmp1 = HX_HCSTRING("low","\x94","\x54","\x52","\x00");
		}
		;break;
		case (int)3: {
			HX_STACK_LINE(32)
			tmp1 = HX_HCSTRING("medium","\x75","\x54","\xc8","\xfe");
		}
		;break;
		default: {
			HX_STACK_LINE(33)
			tmp1 = null();
		}
	}
	HX_STACK_LINE(27)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(StageQuality_Impl__obj,toString,return )


StageQuality_Impl__obj::StageQuality_Impl__obj()
{
}

bool StageQuality_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
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
	{hx::fsObject /*Dynamic*/ ,(void *) &StageQuality_Impl__obj::BEST,HX_HCSTRING("BEST","\x24","\xb9","\xd4","\x2b")},
	{hx::fsObject /*Dynamic*/ ,(void *) &StageQuality_Impl__obj::HIGH,HX_HCSTRING("HIGH","\x62","\xff","\xce","\x2f")},
	{hx::fsObject /*Dynamic*/ ,(void *) &StageQuality_Impl__obj::LOW,HX_HCSTRING("LOW","\x74","\xf0","\x39","\x00")},
	{hx::fsObject /*Dynamic*/ ,(void *) &StageQuality_Impl__obj::MEDIUM,HX_HCSTRING("MEDIUM","\x75","\x00","\x4b","\xb1")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(StageQuality_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(StageQuality_Impl__obj::BEST,"BEST");
	HX_MARK_MEMBER_NAME(StageQuality_Impl__obj::HIGH,"HIGH");
	HX_MARK_MEMBER_NAME(StageQuality_Impl__obj::LOW,"LOW");
	HX_MARK_MEMBER_NAME(StageQuality_Impl__obj::MEDIUM,"MEDIUM");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(StageQuality_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(StageQuality_Impl__obj::BEST,"BEST");
	HX_VISIT_MEMBER_NAME(StageQuality_Impl__obj::HIGH,"HIGH");
	HX_VISIT_MEMBER_NAME(StageQuality_Impl__obj::LOW,"LOW");
	HX_VISIT_MEMBER_NAME(StageQuality_Impl__obj::MEDIUM,"MEDIUM");
};

#endif

hx::Class StageQuality_Impl__obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("BEST","\x24","\xb9","\xd4","\x2b"),
	HX_HCSTRING("HIGH","\x62","\xff","\xce","\x2f"),
	HX_HCSTRING("LOW","\x74","\xf0","\x39","\x00"),
	HX_HCSTRING("MEDIUM","\x75","\x00","\x4b","\xb1"),
	HX_HCSTRING("fromString","\xdb","\x2d","\x74","\x54"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null()) };

void StageQuality_Impl__obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.display._StageQuality.StageQuality_Impl_","\x79","\xb8","\xd0","\xa2");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &StageQuality_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< StageQuality_Impl__obj >;
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

void StageQuality_Impl__obj::__boot()
{
	BEST= ((Dynamic)((int)0));
	HIGH= ((Dynamic)((int)1));
	LOW= ((Dynamic)((int)2));
	MEDIUM= ((Dynamic)((int)3));
}

} // end namespace openfl
} // end namespace display
} // end namespace _StageQuality
