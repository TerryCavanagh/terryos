#include <hxcpp.h>

#ifndef INCLUDED_openfl_display__CapsStyle_CapsStyle_Impl_
#include <openfl/display/_CapsStyle/CapsStyle_Impl_.h>
#endif
namespace openfl{
namespace display{
namespace _CapsStyle{

Void CapsStyle_Impl__obj::__construct()
{
	return null();
}

//CapsStyle_Impl__obj::~CapsStyle_Impl__obj() { }

Dynamic CapsStyle_Impl__obj::__CreateEmpty() { return  new CapsStyle_Impl__obj; }
hx::ObjectPtr< CapsStyle_Impl__obj > CapsStyle_Impl__obj::__new()
{  hx::ObjectPtr< CapsStyle_Impl__obj > _result_ = new CapsStyle_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic CapsStyle_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CapsStyle_Impl__obj > _result_ = new CapsStyle_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic CapsStyle_Impl__obj::NONE;

Dynamic CapsStyle_Impl__obj::ROUND;

Dynamic CapsStyle_Impl__obj::SQUARE;

Dynamic CapsStyle_Impl__obj::fromString( ::String value){
	HX_STACK_FRAME("openfl.display._CapsStyle.CapsStyle_Impl_","fromString",0xfe761d8c,"openfl.display._CapsStyle.CapsStyle_Impl_.fromString","openfl/display/CapsStyle.hx",10,0x1f3162da)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(12)
	::String tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(12)
	Dynamic tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(12)
	::String _switch_1 = (tmp);
	if (  ( _switch_1==HX_HCSTRING("none","\xb8","\x12","\x0a","\x49"))){
		HX_STACK_LINE(14)
		tmp1 = ((Dynamic)((int)0));
	}
	else if (  ( _switch_1==HX_HCSTRING("round","\x4e","\xf8","\x65","\xed"))){
		HX_STACK_LINE(15)
		tmp1 = ((Dynamic)((int)1));
	}
	else if (  ( _switch_1==HX_HCSTRING("square","\x9d","\x00","\xf2","\x58"))){
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


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CapsStyle_Impl__obj,fromString,return )

::String CapsStyle_Impl__obj::toString( int value){
	HX_STACK_FRAME("openfl.display._CapsStyle.CapsStyle_Impl_","toString",0xedfcc21d,"openfl.display._CapsStyle.CapsStyle_Impl_.toString","openfl/display/CapsStyle.hx",23,0x1f3162da)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(25)
	int tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(25)
	::String tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(25)
	switch( (int)(tmp)){
		case (int)0: {
			HX_STACK_LINE(27)
			tmp1 = HX_HCSTRING("none","\xb8","\x12","\x0a","\x49");
		}
		;break;
		case (int)1: {
			HX_STACK_LINE(28)
			tmp1 = HX_HCSTRING("round","\x4e","\xf8","\x65","\xed");
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(29)
			tmp1 = HX_HCSTRING("square","\x9d","\x00","\xf2","\x58");
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


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CapsStyle_Impl__obj,toString,return )


CapsStyle_Impl__obj::CapsStyle_Impl__obj()
{
}

bool CapsStyle_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
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
	{hx::fsObject /*Dynamic*/ ,(void *) &CapsStyle_Impl__obj::NONE,HX_HCSTRING("NONE","\xb8","\xda","\xca","\x33")},
	{hx::fsObject /*Dynamic*/ ,(void *) &CapsStyle_Impl__obj::ROUND,HX_HCSTRING("ROUND","\x2e","\x30","\x54","\x6b")},
	{hx::fsObject /*Dynamic*/ ,(void *) &CapsStyle_Impl__obj::SQUARE,HX_HCSTRING("SQUARE","\x9d","\xac","\x74","\x0b")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CapsStyle_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(CapsStyle_Impl__obj::NONE,"NONE");
	HX_MARK_MEMBER_NAME(CapsStyle_Impl__obj::ROUND,"ROUND");
	HX_MARK_MEMBER_NAME(CapsStyle_Impl__obj::SQUARE,"SQUARE");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CapsStyle_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(CapsStyle_Impl__obj::NONE,"NONE");
	HX_VISIT_MEMBER_NAME(CapsStyle_Impl__obj::ROUND,"ROUND");
	HX_VISIT_MEMBER_NAME(CapsStyle_Impl__obj::SQUARE,"SQUARE");
};

#endif

hx::Class CapsStyle_Impl__obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("NONE","\xb8","\xda","\xca","\x33"),
	HX_HCSTRING("ROUND","\x2e","\x30","\x54","\x6b"),
	HX_HCSTRING("SQUARE","\x9d","\xac","\x74","\x0b"),
	HX_HCSTRING("fromString","\xdb","\x2d","\x74","\x54"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null()) };

void CapsStyle_Impl__obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.display._CapsStyle.CapsStyle_Impl_","\x1d","\x61","\xee","\x43");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &CapsStyle_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< CapsStyle_Impl__obj >;
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

void CapsStyle_Impl__obj::__boot()
{
	NONE= ((Dynamic)((int)0));
	ROUND= ((Dynamic)((int)1));
	SQUARE= ((Dynamic)((int)2));
}

} // end namespace openfl
} // end namespace display
} // end namespace _CapsStyle
