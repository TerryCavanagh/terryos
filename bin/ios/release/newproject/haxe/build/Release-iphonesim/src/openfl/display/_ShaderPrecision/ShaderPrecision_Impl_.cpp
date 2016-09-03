#include <hxcpp.h>

#ifndef INCLUDED_openfl_display__ShaderPrecision_ShaderPrecision_Impl_
#include <openfl/display/_ShaderPrecision/ShaderPrecision_Impl_.h>
#endif
namespace openfl{
namespace display{
namespace _ShaderPrecision{

Void ShaderPrecision_Impl__obj::__construct()
{
	return null();
}

//ShaderPrecision_Impl__obj::~ShaderPrecision_Impl__obj() { }

Dynamic ShaderPrecision_Impl__obj::__CreateEmpty() { return  new ShaderPrecision_Impl__obj; }
hx::ObjectPtr< ShaderPrecision_Impl__obj > ShaderPrecision_Impl__obj::__new()
{  hx::ObjectPtr< ShaderPrecision_Impl__obj > _result_ = new ShaderPrecision_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic ShaderPrecision_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ShaderPrecision_Impl__obj > _result_ = new ShaderPrecision_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic ShaderPrecision_Impl__obj::FAST;

Dynamic ShaderPrecision_Impl__obj::FULL;

Dynamic ShaderPrecision_Impl__obj::fromString( ::String value){
	HX_STACK_FRAME("openfl.display._ShaderPrecision.ShaderPrecision_Impl_","fromString",0xa4b5053a,"openfl.display._ShaderPrecision.ShaderPrecision_Impl_.fromString","openfl/display/ShaderPrecision.hx",9,0xf4519f71)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(11)
	::String tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(11)
	Dynamic tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(11)
	::String _switch_1 = (tmp);
	if (  ( _switch_1==HX_HCSTRING("fast","\x9c","\xc2","\xb5","\x43"))){
		HX_STACK_LINE(13)
		tmp1 = ((Dynamic)((int)0));
	}
	else if (  ( _switch_1==HX_HCSTRING("full","\x8f","\xe9","\xc4","\x43"))){
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


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ShaderPrecision_Impl__obj,fromString,return )

::String ShaderPrecision_Impl__obj::toString( int value){
	HX_STACK_FRAME("openfl.display._ShaderPrecision.ShaderPrecision_Impl_","toString",0x9518c24b,"openfl.display._ShaderPrecision.ShaderPrecision_Impl_.toString","openfl/display/ShaderPrecision.hx",21,0xf4519f71)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(23)
	int tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(23)
	::String tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(23)
	switch( (int)(tmp)){
		case (int)1: {
			HX_STACK_LINE(25)
			tmp1 = HX_HCSTRING("full","\x8f","\xe9","\xc4","\x43");
		}
		;break;
		case (int)0: {
			HX_STACK_LINE(26)
			tmp1 = HX_HCSTRING("fast","\x9c","\xc2","\xb5","\x43");
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


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ShaderPrecision_Impl__obj,toString,return )


ShaderPrecision_Impl__obj::ShaderPrecision_Impl__obj()
{
}

bool ShaderPrecision_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
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
	{hx::fsObject /*Dynamic*/ ,(void *) &ShaderPrecision_Impl__obj::FAST,HX_HCSTRING("FAST","\x9c","\x8a","\x76","\x2e")},
	{hx::fsObject /*Dynamic*/ ,(void *) &ShaderPrecision_Impl__obj::FULL,HX_HCSTRING("FULL","\x8f","\xb1","\x85","\x2e")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ShaderPrecision_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ShaderPrecision_Impl__obj::FAST,"FAST");
	HX_MARK_MEMBER_NAME(ShaderPrecision_Impl__obj::FULL,"FULL");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ShaderPrecision_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ShaderPrecision_Impl__obj::FAST,"FAST");
	HX_VISIT_MEMBER_NAME(ShaderPrecision_Impl__obj::FULL,"FULL");
};

#endif

hx::Class ShaderPrecision_Impl__obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("FAST","\x9c","\x8a","\x76","\x2e"),
	HX_HCSTRING("FULL","\x8f","\xb1","\x85","\x2e"),
	HX_HCSTRING("fromString","\xdb","\x2d","\x74","\x54"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null()) };

void ShaderPrecision_Impl__obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.display._ShaderPrecision.ShaderPrecision_Impl_","\xaf","\x1e","\x4b","\x16");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ShaderPrecision_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< ShaderPrecision_Impl__obj >;
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

void ShaderPrecision_Impl__obj::__boot()
{
	FAST= ((Dynamic)((int)0));
	FULL= ((Dynamic)((int)1));
}

} // end namespace openfl
} // end namespace display
} // end namespace _ShaderPrecision
