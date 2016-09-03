#include <hxcpp.h>

#ifndef INCLUDED_openfl_display3D__Context3DProfile_Context3DProfile_Impl_
#include <openfl/display3D/_Context3DProfile/Context3DProfile_Impl_.h>
#endif
namespace openfl{
namespace display3D{
namespace _Context3DProfile{

Void Context3DProfile_Impl__obj::__construct()
{
	return null();
}

//Context3DProfile_Impl__obj::~Context3DProfile_Impl__obj() { }

Dynamic Context3DProfile_Impl__obj::__CreateEmpty() { return  new Context3DProfile_Impl__obj; }
hx::ObjectPtr< Context3DProfile_Impl__obj > Context3DProfile_Impl__obj::__new()
{  hx::ObjectPtr< Context3DProfile_Impl__obj > _result_ = new Context3DProfile_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic Context3DProfile_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Context3DProfile_Impl__obj > _result_ = new Context3DProfile_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic Context3DProfile_Impl__obj::BASELINE;

Dynamic Context3DProfile_Impl__obj::BASELINE_CONSTRAINED;

Dynamic Context3DProfile_Impl__obj::BASELINE_EXTENDED;

Dynamic Context3DProfile_Impl__obj::STANDARD;

Dynamic Context3DProfile_Impl__obj::STANDARD_CONSTRAINED;

Dynamic Context3DProfile_Impl__obj::fromString( ::String value){
	HX_STACK_FRAME("openfl.display3D._Context3DProfile.Context3DProfile_Impl_","fromString",0xdbdb0761,"openfl.display3D._Context3DProfile.Context3DProfile_Impl_.fromString","openfl/display3D/Context3DProfile.hx",13,0x8638b9ba)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(15)
	::String tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(15)
	Dynamic tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(15)
	::String _switch_1 = (tmp);
	if (  ( _switch_1==HX_HCSTRING("baseline","\x85","\xdc","\x27","\x11"))){
		HX_STACK_LINE(17)
		tmp1 = ((Dynamic)((int)0));
	}
	else if (  ( _switch_1==HX_HCSTRING("baselineConstrained","\xd1","\x73","\xc8","\xe8"))){
		HX_STACK_LINE(18)
		tmp1 = ((Dynamic)((int)1));
	}
	else if (  ( _switch_1==HX_HCSTRING("baselineExtended","\x5e","\xfa","\x57","\xd8"))){
		HX_STACK_LINE(19)
		tmp1 = ((Dynamic)((int)2));
	}
	else if (  ( _switch_1==HX_HCSTRING("standard","\x3d","\x37","\x78","\xea"))){
		HX_STACK_LINE(20)
		tmp1 = ((Dynamic)((int)3));
	}
	else if (  ( _switch_1==HX_HCSTRING("standardConstrained","\x19","\x24","\x99","\x7f"))){
		HX_STACK_LINE(21)
		tmp1 = ((Dynamic)((int)4));
	}
	else  {
		HX_STACK_LINE(22)
		tmp1 = null();
	}
;
;
	HX_STACK_LINE(15)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Context3DProfile_Impl__obj,fromString,return )

::String Context3DProfile_Impl__obj::toString( int value){
	HX_STACK_FRAME("openfl.display3D._Context3DProfile.Context3DProfile_Impl_","toString",0xda661cb2,"openfl.display3D._Context3DProfile.Context3DProfile_Impl_.toString","openfl/display3D/Context3DProfile.hx",28,0x8638b9ba)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(30)
	int tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(30)
	::String tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(30)
	switch( (int)(tmp)){
		case (int)0: {
			HX_STACK_LINE(32)
			tmp1 = HX_HCSTRING("baseline","\x85","\xdc","\x27","\x11");
		}
		;break;
		case (int)1: {
			HX_STACK_LINE(33)
			tmp1 = HX_HCSTRING("baselineConstrained","\xd1","\x73","\xc8","\xe8");
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(34)
			tmp1 = HX_HCSTRING("baselineExtended","\x5e","\xfa","\x57","\xd8");
		}
		;break;
		case (int)3: {
			HX_STACK_LINE(35)
			tmp1 = HX_HCSTRING("standard","\x3d","\x37","\x78","\xea");
		}
		;break;
		case (int)4: {
			HX_STACK_LINE(36)
			tmp1 = HX_HCSTRING("standardConstrained","\x19","\x24","\x99","\x7f");
		}
		;break;
		default: {
			HX_STACK_LINE(37)
			tmp1 = null();
		}
	}
	HX_STACK_LINE(30)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Context3DProfile_Impl__obj,toString,return )


Context3DProfile_Impl__obj::Context3DProfile_Impl__obj()
{
}

bool Context3DProfile_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
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
	{hx::fsObject /*Dynamic*/ ,(void *) &Context3DProfile_Impl__obj::BASELINE,HX_HCSTRING("BASELINE","\x85","\x6c","\xad","\x6a")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Context3DProfile_Impl__obj::BASELINE_CONSTRAINED,HX_HCSTRING("BASELINE_CONSTRAINED","\x3c","\x9e","\x1a","\x00")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Context3DProfile_Impl__obj::BASELINE_EXTENDED,HX_HCSTRING("BASELINE_EXTENDED","\xf3","\xb6","\xe7","\x2a")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Context3DProfile_Impl__obj::STANDARD,HX_HCSTRING("STANDARD","\x3d","\xc7","\xfd","\x43")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Context3DProfile_Impl__obj::STANDARD_CONSTRAINED,HX_HCSTRING("STANDARD_CONSTRAINED","\xf4","\x2c","\xe4","\x5f")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Context3DProfile_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Context3DProfile_Impl__obj::BASELINE,"BASELINE");
	HX_MARK_MEMBER_NAME(Context3DProfile_Impl__obj::BASELINE_CONSTRAINED,"BASELINE_CONSTRAINED");
	HX_MARK_MEMBER_NAME(Context3DProfile_Impl__obj::BASELINE_EXTENDED,"BASELINE_EXTENDED");
	HX_MARK_MEMBER_NAME(Context3DProfile_Impl__obj::STANDARD,"STANDARD");
	HX_MARK_MEMBER_NAME(Context3DProfile_Impl__obj::STANDARD_CONSTRAINED,"STANDARD_CONSTRAINED");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Context3DProfile_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Context3DProfile_Impl__obj::BASELINE,"BASELINE");
	HX_VISIT_MEMBER_NAME(Context3DProfile_Impl__obj::BASELINE_CONSTRAINED,"BASELINE_CONSTRAINED");
	HX_VISIT_MEMBER_NAME(Context3DProfile_Impl__obj::BASELINE_EXTENDED,"BASELINE_EXTENDED");
	HX_VISIT_MEMBER_NAME(Context3DProfile_Impl__obj::STANDARD,"STANDARD");
	HX_VISIT_MEMBER_NAME(Context3DProfile_Impl__obj::STANDARD_CONSTRAINED,"STANDARD_CONSTRAINED");
};

#endif

hx::Class Context3DProfile_Impl__obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("BASELINE","\x85","\x6c","\xad","\x6a"),
	HX_HCSTRING("BASELINE_CONSTRAINED","\x3c","\x9e","\x1a","\x00"),
	HX_HCSTRING("BASELINE_EXTENDED","\xf3","\xb6","\xe7","\x2a"),
	HX_HCSTRING("STANDARD","\x3d","\xc7","\xfd","\x43"),
	HX_HCSTRING("STANDARD_CONSTRAINED","\xf4","\x2c","\xe4","\x5f"),
	HX_HCSTRING("fromString","\xdb","\x2d","\x74","\x54"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null()) };

void Context3DProfile_Impl__obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.display3D._Context3DProfile.Context3DProfile_Impl_","\x28","\xad","\x4e","\xea");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Context3DProfile_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Context3DProfile_Impl__obj >;
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

void Context3DProfile_Impl__obj::__boot()
{
	BASELINE= ((Dynamic)((int)0));
	BASELINE_CONSTRAINED= ((Dynamic)((int)1));
	BASELINE_EXTENDED= ((Dynamic)((int)2));
	STANDARD= ((Dynamic)((int)3));
	STANDARD_CONSTRAINED= ((Dynamic)((int)4));
}

} // end namespace openfl
} // end namespace display3D
} // end namespace _Context3DProfile
