#include <hxcpp.h>

#ifndef INCLUDED_openfl_display__JointStyle_JointStyle_Impl_
#include <openfl/display/_JointStyle/JointStyle_Impl_.h>
#endif
namespace openfl{
namespace display{
namespace _JointStyle{

Void JointStyle_Impl__obj::__construct()
{
	return null();
}

//JointStyle_Impl__obj::~JointStyle_Impl__obj() { }

Dynamic JointStyle_Impl__obj::__CreateEmpty() { return  new JointStyle_Impl__obj; }
hx::ObjectPtr< JointStyle_Impl__obj > JointStyle_Impl__obj::__new()
{  hx::ObjectPtr< JointStyle_Impl__obj > _result_ = new JointStyle_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic JointStyle_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< JointStyle_Impl__obj > _result_ = new JointStyle_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic JointStyle_Impl__obj::BEVEL;

Dynamic JointStyle_Impl__obj::MITER;

Dynamic JointStyle_Impl__obj::ROUND;

Dynamic JointStyle_Impl__obj::fromString( ::String value){
	HX_STACK_FRAME("openfl.display._JointStyle.JointStyle_Impl_","fromString",0x7f19acb0,"openfl.display._JointStyle.JointStyle_Impl_.fromString","openfl/display/JointStyle.hx",10,0xc58a30ab)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(12)
	::String tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(12)
	Dynamic tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(12)
	::String _switch_1 = (tmp);
	if (  ( _switch_1==HX_HCSTRING("bevel","\x7a","\x48","\x61","\xb0"))){
		HX_STACK_LINE(14)
		tmp1 = ((Dynamic)((int)0));
	}
	else if (  ( _switch_1==HX_HCSTRING("miter","\x05","\x00","\x6d","\x08"))){
		HX_STACK_LINE(15)
		tmp1 = ((Dynamic)((int)1));
	}
	else if (  ( _switch_1==HX_HCSTRING("round","\x4e","\xf8","\x65","\xed"))){
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


STATIC_HX_DEFINE_DYNAMIC_FUNC1(JointStyle_Impl__obj,fromString,return )

::String JointStyle_Impl__obj::toString( int value){
	HX_STACK_FRAME("openfl.display._JointStyle.JointStyle_Impl_","toString",0xcf598041,"openfl.display._JointStyle.JointStyle_Impl_.toString","openfl/display/JointStyle.hx",23,0xc58a30ab)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(25)
	int tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(25)
	::String tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(25)
	switch( (int)(tmp)){
		case (int)0: {
			HX_STACK_LINE(27)
			tmp1 = HX_HCSTRING("bevel","\x7a","\x48","\x61","\xb0");
		}
		;break;
		case (int)1: {
			HX_STACK_LINE(28)
			tmp1 = HX_HCSTRING("miter","\x05","\x00","\x6d","\x08");
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(29)
			tmp1 = HX_HCSTRING("round","\x4e","\xf8","\x65","\xed");
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


STATIC_HX_DEFINE_DYNAMIC_FUNC1(JointStyle_Impl__obj,toString,return )


JointStyle_Impl__obj::JointStyle_Impl__obj()
{
}

bool JointStyle_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
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
	{hx::fsObject /*Dynamic*/ ,(void *) &JointStyle_Impl__obj::BEVEL,HX_HCSTRING("BEVEL","\x5a","\x80","\x4f","\x2e")},
	{hx::fsObject /*Dynamic*/ ,(void *) &JointStyle_Impl__obj::MITER,HX_HCSTRING("MITER","\xe5","\x37","\x5b","\x86")},
	{hx::fsObject /*Dynamic*/ ,(void *) &JointStyle_Impl__obj::ROUND,HX_HCSTRING("ROUND","\x2e","\x30","\x54","\x6b")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(JointStyle_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(JointStyle_Impl__obj::BEVEL,"BEVEL");
	HX_MARK_MEMBER_NAME(JointStyle_Impl__obj::MITER,"MITER");
	HX_MARK_MEMBER_NAME(JointStyle_Impl__obj::ROUND,"ROUND");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(JointStyle_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(JointStyle_Impl__obj::BEVEL,"BEVEL");
	HX_VISIT_MEMBER_NAME(JointStyle_Impl__obj::MITER,"MITER");
	HX_VISIT_MEMBER_NAME(JointStyle_Impl__obj::ROUND,"ROUND");
};

#endif

hx::Class JointStyle_Impl__obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("BEVEL","\x5a","\x80","\x4f","\x2e"),
	HX_HCSTRING("MITER","\xe5","\x37","\x5b","\x86"),
	HX_HCSTRING("ROUND","\x2e","\x30","\x54","\x6b"),
	HX_HCSTRING("fromString","\xdb","\x2d","\x74","\x54"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null()) };

void JointStyle_Impl__obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.display._JointStyle.JointStyle_Impl_","\x79","\xf7","\x31","\x1f");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &JointStyle_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< JointStyle_Impl__obj >;
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

void JointStyle_Impl__obj::__boot()
{
	BEVEL= ((Dynamic)((int)0));
	MITER= ((Dynamic)((int)1));
	ROUND= ((Dynamic)((int)2));
}

} // end namespace openfl
} // end namespace display
} // end namespace _JointStyle
