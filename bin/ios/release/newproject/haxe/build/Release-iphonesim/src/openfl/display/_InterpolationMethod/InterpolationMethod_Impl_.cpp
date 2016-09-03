#include <hxcpp.h>

#ifndef INCLUDED_openfl_display__InterpolationMethod_InterpolationMethod_Impl_
#include <openfl/display/_InterpolationMethod/InterpolationMethod_Impl_.h>
#endif
namespace openfl{
namespace display{
namespace _InterpolationMethod{

Void InterpolationMethod_Impl__obj::__construct()
{
	return null();
}

//InterpolationMethod_Impl__obj::~InterpolationMethod_Impl__obj() { }

Dynamic InterpolationMethod_Impl__obj::__CreateEmpty() { return  new InterpolationMethod_Impl__obj; }
hx::ObjectPtr< InterpolationMethod_Impl__obj > InterpolationMethod_Impl__obj::__new()
{  hx::ObjectPtr< InterpolationMethod_Impl__obj > _result_ = new InterpolationMethod_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic InterpolationMethod_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< InterpolationMethod_Impl__obj > _result_ = new InterpolationMethod_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic InterpolationMethod_Impl__obj::LINEAR_RGB;

Dynamic InterpolationMethod_Impl__obj::RGB;

Dynamic InterpolationMethod_Impl__obj::fromString( ::String value){
	HX_STACK_FRAME("openfl.display._InterpolationMethod.InterpolationMethod_Impl_","fromString",0x8e1d4c22,"openfl.display._InterpolationMethod.InterpolationMethod_Impl_.fromString","openfl/display/InterpolationMethod.hx",9,0x1fa1c725)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(11)
	::String tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(11)
	Dynamic tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(11)
	::String _switch_1 = (tmp);
	if (  ( _switch_1==HX_HCSTRING("linearRGB","\x28","\xa2","\x44","\xd9"))){
		HX_STACK_LINE(13)
		tmp1 = ((Dynamic)((int)0));
	}
	else if (  ( _switch_1==HX_HCSTRING("rgb","\x0d","\xdb","\x56","\x00"))){
		HX_STACK_LINE(14)
		tmp1 = ((Dynamic)((int)1));
	}
	else  {
		HX_STACK_LINE(15)
		tmp1 = null();
	}
;
;
	HX_STACK_LINE(11)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(InterpolationMethod_Impl__obj,fromString,return )

::String InterpolationMethod_Impl__obj::toString( int value){
	HX_STACK_FRAME("openfl.display._InterpolationMethod.InterpolationMethod_Impl_","toString",0x7209ff33,"openfl.display._InterpolationMethod.InterpolationMethod_Impl_.toString","openfl/display/InterpolationMethod.hx",21,0x1fa1c725)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(23)
	int tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(23)
	::String tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(23)
	switch( (int)(tmp)){
		case (int)0: {
			HX_STACK_LINE(25)
			tmp1 = HX_HCSTRING("linearRGB","\x28","\xa2","\x44","\xd9");
		}
		;break;
		case (int)1: {
			HX_STACK_LINE(26)
			tmp1 = HX_HCSTRING("rgb","\x0d","\xdb","\x56","\x00");
		}
		;break;
		default: {
			HX_STACK_LINE(27)
			tmp1 = null();
		}
	}
	HX_STACK_LINE(23)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(InterpolationMethod_Impl__obj,toString,return )


InterpolationMethod_Impl__obj::InterpolationMethod_Impl__obj()
{
}

bool InterpolationMethod_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
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
	{hx::fsObject /*Dynamic*/ ,(void *) &InterpolationMethod_Impl__obj::LINEAR_RGB,HX_HCSTRING("LINEAR_RGB","\x53","\x10","\xb2","\x52")},
	{hx::fsObject /*Dynamic*/ ,(void *) &InterpolationMethod_Impl__obj::RGB,HX_HCSTRING("RGB","\xed","\x76","\x3e","\x00")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(InterpolationMethod_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(InterpolationMethod_Impl__obj::LINEAR_RGB,"LINEAR_RGB");
	HX_MARK_MEMBER_NAME(InterpolationMethod_Impl__obj::RGB,"RGB");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(InterpolationMethod_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(InterpolationMethod_Impl__obj::LINEAR_RGB,"LINEAR_RGB");
	HX_VISIT_MEMBER_NAME(InterpolationMethod_Impl__obj::RGB,"RGB");
};

#endif

hx::Class InterpolationMethod_Impl__obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("LINEAR_RGB","\x53","\x10","\xb2","\x52"),
	HX_HCSTRING("RGB","\xed","\x76","\x3e","\x00"),
	HX_HCSTRING("fromString","\xdb","\x2d","\x74","\x54"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null()) };

void InterpolationMethod_Impl__obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.display._InterpolationMethod.InterpolationMethod_Impl_","\xc7","\x1e","\x15","\xd7");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &InterpolationMethod_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< InterpolationMethod_Impl__obj >;
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

void InterpolationMethod_Impl__obj::__boot()
{
	LINEAR_RGB= ((Dynamic)((int)0));
	RGB= ((Dynamic)((int)1));
}

} // end namespace openfl
} // end namespace display
} // end namespace _InterpolationMethod
