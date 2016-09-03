#include <hxcpp.h>

#ifndef INCLUDED_openfl_display__StageScaleMode_StageScaleMode_Impl_
#include <openfl/display/_StageScaleMode/StageScaleMode_Impl_.h>
#endif
namespace openfl{
namespace display{
namespace _StageScaleMode{

Void StageScaleMode_Impl__obj::__construct()
{
	return null();
}

//StageScaleMode_Impl__obj::~StageScaleMode_Impl__obj() { }

Dynamic StageScaleMode_Impl__obj::__CreateEmpty() { return  new StageScaleMode_Impl__obj; }
hx::ObjectPtr< StageScaleMode_Impl__obj > StageScaleMode_Impl__obj::__new()
{  hx::ObjectPtr< StageScaleMode_Impl__obj > _result_ = new StageScaleMode_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic StageScaleMode_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< StageScaleMode_Impl__obj > _result_ = new StageScaleMode_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic StageScaleMode_Impl__obj::EXACT_FIT;

Dynamic StageScaleMode_Impl__obj::NO_BORDER;

Dynamic StageScaleMode_Impl__obj::NO_SCALE;

Dynamic StageScaleMode_Impl__obj::SHOW_ALL;

Dynamic StageScaleMode_Impl__obj::fromString( ::String value){
	HX_STACK_FRAME("openfl.display._StageScaleMode.StageScaleMode_Impl_","fromString",0xa7123530,"openfl.display._StageScaleMode.StageScaleMode_Impl_.fromString","openfl/display/StageScaleMode.hx",11,0x7043b2c3)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(13)
	::String tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(13)
	Dynamic tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(13)
	::String _switch_1 = (tmp);
	if (  ( _switch_1==HX_HCSTRING("exactFit","\x52","\x58","\x22","\x25"))){
		HX_STACK_LINE(15)
		tmp1 = ((Dynamic)((int)0));
	}
	else if (  ( _switch_1==HX_HCSTRING("noBorder","\x0d","\x48","\x2a","\x34"))){
		HX_STACK_LINE(16)
		tmp1 = ((Dynamic)((int)1));
	}
	else if (  ( _switch_1==HX_HCSTRING("noScale","\x89","\x52","\xd2","\x4b"))){
		HX_STACK_LINE(17)
		tmp1 = ((Dynamic)((int)2));
	}
	else if (  ( _switch_1==HX_HCSTRING("showAll","\x24","\x58","\x96","\x7b"))){
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


STATIC_HX_DEFINE_DYNAMIC_FUNC1(StageScaleMode_Impl__obj,fromString,return )

::String StageScaleMode_Impl__obj::toString( int value){
	HX_STACK_FRAME("openfl.display._StageScaleMode.StageScaleMode_Impl_","toString",0x32c6e8c1,"openfl.display._StageScaleMode.StageScaleMode_Impl_.toString","openfl/display/StageScaleMode.hx",25,0x7043b2c3)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(27)
	int tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(27)
	::String tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(27)
	switch( (int)(tmp)){
		case (int)0: {
			HX_STACK_LINE(29)
			tmp1 = HX_HCSTRING("exactFit","\x52","\x58","\x22","\x25");
		}
		;break;
		case (int)1: {
			HX_STACK_LINE(30)
			tmp1 = HX_HCSTRING("noBorder","\x0d","\x48","\x2a","\x34");
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(31)
			tmp1 = HX_HCSTRING("noScale","\x89","\x52","\xd2","\x4b");
		}
		;break;
		case (int)3: {
			HX_STACK_LINE(32)
			tmp1 = HX_HCSTRING("showAll","\x24","\x58","\x96","\x7b");
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


STATIC_HX_DEFINE_DYNAMIC_FUNC1(StageScaleMode_Impl__obj,toString,return )


StageScaleMode_Impl__obj::StageScaleMode_Impl__obj()
{
}

bool StageScaleMode_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
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
	{hx::fsObject /*Dynamic*/ ,(void *) &StageScaleMode_Impl__obj::EXACT_FIT,HX_HCSTRING("EXACT_FIT","\xd1","\x38","\xee","\x79")},
	{hx::fsObject /*Dynamic*/ ,(void *) &StageScaleMode_Impl__obj::NO_BORDER,HX_HCSTRING("NO_BORDER","\x6a","\x40","\x33","\x71")},
	{hx::fsObject /*Dynamic*/ ,(void *) &StageScaleMode_Impl__obj::NO_SCALE,HX_HCSTRING("NO_SCALE","\xac","\xb8","\x22","\x35")},
	{hx::fsObject /*Dynamic*/ ,(void *) &StageScaleMode_Impl__obj::SHOW_ALL,HX_HCSTRING("SHOW_ALL","\x7f","\x39","\x6f","\x2a")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(StageScaleMode_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(StageScaleMode_Impl__obj::EXACT_FIT,"EXACT_FIT");
	HX_MARK_MEMBER_NAME(StageScaleMode_Impl__obj::NO_BORDER,"NO_BORDER");
	HX_MARK_MEMBER_NAME(StageScaleMode_Impl__obj::NO_SCALE,"NO_SCALE");
	HX_MARK_MEMBER_NAME(StageScaleMode_Impl__obj::SHOW_ALL,"SHOW_ALL");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(StageScaleMode_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(StageScaleMode_Impl__obj::EXACT_FIT,"EXACT_FIT");
	HX_VISIT_MEMBER_NAME(StageScaleMode_Impl__obj::NO_BORDER,"NO_BORDER");
	HX_VISIT_MEMBER_NAME(StageScaleMode_Impl__obj::NO_SCALE,"NO_SCALE");
	HX_VISIT_MEMBER_NAME(StageScaleMode_Impl__obj::SHOW_ALL,"SHOW_ALL");
};

#endif

hx::Class StageScaleMode_Impl__obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("EXACT_FIT","\xd1","\x38","\xee","\x79"),
	HX_HCSTRING("NO_BORDER","\x6a","\x40","\x33","\x71"),
	HX_HCSTRING("NO_SCALE","\xac","\xb8","\x22","\x35"),
	HX_HCSTRING("SHOW_ALL","\x7f","\x39","\x6f","\x2a"),
	HX_HCSTRING("fromString","\xdb","\x2d","\x74","\x54"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null()) };

void StageScaleMode_Impl__obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.display._StageScaleMode.StageScaleMode_Impl_","\xf9","\x9e","\x13","\xb1");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &StageScaleMode_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< StageScaleMode_Impl__obj >;
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

void StageScaleMode_Impl__obj::__boot()
{
	EXACT_FIT= ((Dynamic)((int)0));
	NO_BORDER= ((Dynamic)((int)1));
	NO_SCALE= ((Dynamic)((int)2));
	SHOW_ALL= ((Dynamic)((int)3));
}

} // end namespace openfl
} // end namespace display
} // end namespace _StageScaleMode
