#include <hxcpp.h>

#ifndef INCLUDED_openfl_display__PixelSnapping_PixelSnapping_Impl_
#include <openfl/display/_PixelSnapping/PixelSnapping_Impl_.h>
#endif
namespace openfl{
namespace display{
namespace _PixelSnapping{

Void PixelSnapping_Impl__obj::__construct()
{
	return null();
}

//PixelSnapping_Impl__obj::~PixelSnapping_Impl__obj() { }

Dynamic PixelSnapping_Impl__obj::__CreateEmpty() { return  new PixelSnapping_Impl__obj; }
hx::ObjectPtr< PixelSnapping_Impl__obj > PixelSnapping_Impl__obj::__new()
{  hx::ObjectPtr< PixelSnapping_Impl__obj > _result_ = new PixelSnapping_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic PixelSnapping_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< PixelSnapping_Impl__obj > _result_ = new PixelSnapping_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic PixelSnapping_Impl__obj::ALWAYS;

Dynamic PixelSnapping_Impl__obj::AUTO;

Dynamic PixelSnapping_Impl__obj::NEVER;

Dynamic PixelSnapping_Impl__obj::fromString( ::String value){
	HX_STACK_FRAME("openfl.display._PixelSnapping.PixelSnapping_Impl_","fromString",0xc7730368,"openfl.display._PixelSnapping.PixelSnapping_Impl_.fromString","openfl/display/PixelSnapping.hx",10,0x71d03308)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(12)
	::String tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(12)
	Dynamic tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(12)
	::String _switch_1 = (tmp);
	if (  ( _switch_1==HX_HCSTRING("always","\xcf","\x0e","\xd7","\x46"))){
		HX_STACK_LINE(14)
		tmp1 = ((Dynamic)((int)0));
	}
	else if (  ( _switch_1==HX_HCSTRING("auto","\x6f","\xdf","\x76","\x40"))){
		HX_STACK_LINE(15)
		tmp1 = ((Dynamic)((int)1));
	}
	else if (  ( _switch_1==HX_HCSTRING("never","\x8c","\x3e","\x30","\x99"))){
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


STATIC_HX_DEFINE_DYNAMIC_FUNC1(PixelSnapping_Impl__obj,fromString,return )

::String PixelSnapping_Impl__obj::toString( int value){
	HX_STACK_FRAME("openfl.display._PixelSnapping.PixelSnapping_Impl_","toString",0xd1c938f9,"openfl.display._PixelSnapping.PixelSnapping_Impl_.toString","openfl/display/PixelSnapping.hx",23,0x71d03308)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(25)
	int tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(25)
	::String tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(25)
	switch( (int)(tmp)){
		case (int)0: {
			HX_STACK_LINE(27)
			tmp1 = HX_HCSTRING("always","\xcf","\x0e","\xd7","\x46");
		}
		;break;
		case (int)1: {
			HX_STACK_LINE(28)
			tmp1 = HX_HCSTRING("auto","\x6f","\xdf","\x76","\x40");
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(29)
			tmp1 = HX_HCSTRING("never","\x8c","\x3e","\x30","\x99");
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


STATIC_HX_DEFINE_DYNAMIC_FUNC1(PixelSnapping_Impl__obj,toString,return )


PixelSnapping_Impl__obj::PixelSnapping_Impl__obj()
{
}

bool PixelSnapping_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
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
	{hx::fsObject /*Dynamic*/ ,(void *) &PixelSnapping_Impl__obj::ALWAYS,HX_HCSTRING("ALWAYS","\xcf","\xba","\x59","\xf9")},
	{hx::fsObject /*Dynamic*/ ,(void *) &PixelSnapping_Impl__obj::AUTO,HX_HCSTRING("AUTO","\x6f","\xa7","\x37","\x2b")},
	{hx::fsObject /*Dynamic*/ ,(void *) &PixelSnapping_Impl__obj::NEVER,HX_HCSTRING("NEVER","\x6c","\x76","\x1e","\x17")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PixelSnapping_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(PixelSnapping_Impl__obj::ALWAYS,"ALWAYS");
	HX_MARK_MEMBER_NAME(PixelSnapping_Impl__obj::AUTO,"AUTO");
	HX_MARK_MEMBER_NAME(PixelSnapping_Impl__obj::NEVER,"NEVER");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PixelSnapping_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(PixelSnapping_Impl__obj::ALWAYS,"ALWAYS");
	HX_VISIT_MEMBER_NAME(PixelSnapping_Impl__obj::AUTO,"AUTO");
	HX_VISIT_MEMBER_NAME(PixelSnapping_Impl__obj::NEVER,"NEVER");
};

#endif

hx::Class PixelSnapping_Impl__obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("ALWAYS","\xcf","\xba","\x59","\xf9"),
	HX_HCSTRING("AUTO","\x6f","\xa7","\x37","\x2b"),
	HX_HCSTRING("NEVER","\x6c","\x76","\x1e","\x17"),
	HX_HCSTRING("fromString","\xdb","\x2d","\x74","\x54"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null()) };

void PixelSnapping_Impl__obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.display._PixelSnapping.PixelSnapping_Impl_","\xc1","\x35","\x7c","\xa1");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &PixelSnapping_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< PixelSnapping_Impl__obj >;
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

void PixelSnapping_Impl__obj::__boot()
{
	ALWAYS= ((Dynamic)((int)0));
	AUTO= ((Dynamic)((int)1));
	NEVER= ((Dynamic)((int)2));
}

} // end namespace openfl
} // end namespace display
} // end namespace _PixelSnapping
