#include <hxcpp.h>

#ifndef INCLUDED_openfl_display3D__Context3DMipFilter_Context3DMipFilter_Impl_
#include <openfl/display3D/_Context3DMipFilter/Context3DMipFilter_Impl_.h>
#endif
namespace openfl{
namespace display3D{
namespace _Context3DMipFilter{

Void Context3DMipFilter_Impl__obj::__construct()
{
	return null();
}

//Context3DMipFilter_Impl__obj::~Context3DMipFilter_Impl__obj() { }

Dynamic Context3DMipFilter_Impl__obj::__CreateEmpty() { return  new Context3DMipFilter_Impl__obj; }
hx::ObjectPtr< Context3DMipFilter_Impl__obj > Context3DMipFilter_Impl__obj::__new()
{  hx::ObjectPtr< Context3DMipFilter_Impl__obj > _result_ = new Context3DMipFilter_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic Context3DMipFilter_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Context3DMipFilter_Impl__obj > _result_ = new Context3DMipFilter_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic Context3DMipFilter_Impl__obj::MIPLINEAR;

Dynamic Context3DMipFilter_Impl__obj::MIPNEAREST;

Dynamic Context3DMipFilter_Impl__obj::MIPNONE;

Dynamic Context3DMipFilter_Impl__obj::fromString( ::String value){
	HX_STACK_FRAME("openfl.display3D._Context3DMipFilter.Context3DMipFilter_Impl_","fromString",0x2c85cd41,"openfl.display3D._Context3DMipFilter.Context3DMipFilter_Impl_.fromString","openfl/display3D/Context3DMipFilter.hx",11,0xd6fc0d97)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(13)
	::String tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(13)
	Dynamic tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(13)
	::String _switch_1 = (tmp);
	if (  ( _switch_1==HX_HCSTRING("miplinear","\x79","\xca","\x7e","\x64"))){
		HX_STACK_LINE(15)
		tmp1 = ((Dynamic)((int)0));
	}
	else if (  ( _switch_1==HX_HCSTRING("mipnearest","\x4a","\x21","\x95","\xd0"))){
		HX_STACK_LINE(16)
		tmp1 = ((Dynamic)((int)1));
	}
	else if (  ( _switch_1==HX_HCSTRING("mipnone","\x4c","\x7e","\x07","\x76"))){
		HX_STACK_LINE(17)
		tmp1 = ((Dynamic)((int)2));
	}
	else  {
		HX_STACK_LINE(18)
		tmp1 = null();
	}
;
;
	HX_STACK_LINE(13)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Context3DMipFilter_Impl__obj,fromString,return )

::String Context3DMipFilter_Impl__obj::toString( int value){
	HX_STACK_FRAME("openfl.display3D._Context3DMipFilter.Context3DMipFilter_Impl_","toString",0x68a9aa92,"openfl.display3D._Context3DMipFilter.Context3DMipFilter_Impl_.toString","openfl/display3D/Context3DMipFilter.hx",24,0xd6fc0d97)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(26)
	int tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(26)
	::String tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(26)
	switch( (int)(tmp)){
		case (int)0: {
			HX_STACK_LINE(28)
			tmp1 = HX_HCSTRING("miplinear","\x79","\xca","\x7e","\x64");
		}
		;break;
		case (int)1: {
			HX_STACK_LINE(29)
			tmp1 = HX_HCSTRING("mipnearest","\x4a","\x21","\x95","\xd0");
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(30)
			tmp1 = HX_HCSTRING("mipnone","\x4c","\x7e","\x07","\x76");
		}
		;break;
		default: {
			HX_STACK_LINE(31)
			tmp1 = null();
		}
	}
	HX_STACK_LINE(26)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Context3DMipFilter_Impl__obj,toString,return )


Context3DMipFilter_Impl__obj::Context3DMipFilter_Impl__obj()
{
}

bool Context3DMipFilter_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
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
	{hx::fsObject /*Dynamic*/ ,(void *) &Context3DMipFilter_Impl__obj::MIPLINEAR,HX_HCSTRING("MIPLINEAR","\x59","\x3a","\xd7","\x5f")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Context3DMipFilter_Impl__obj::MIPNEAREST,HX_HCSTRING("MIPNEAREST","\x4a","\x95","\x9e","\xc2")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Context3DMipFilter_Impl__obj::MIPNONE,HX_HCSTRING("MIPNONE","\x2c","\x52","\xdb","\xf5")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Context3DMipFilter_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Context3DMipFilter_Impl__obj::MIPLINEAR,"MIPLINEAR");
	HX_MARK_MEMBER_NAME(Context3DMipFilter_Impl__obj::MIPNEAREST,"MIPNEAREST");
	HX_MARK_MEMBER_NAME(Context3DMipFilter_Impl__obj::MIPNONE,"MIPNONE");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Context3DMipFilter_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Context3DMipFilter_Impl__obj::MIPLINEAR,"MIPLINEAR");
	HX_VISIT_MEMBER_NAME(Context3DMipFilter_Impl__obj::MIPNEAREST,"MIPNEAREST");
	HX_VISIT_MEMBER_NAME(Context3DMipFilter_Impl__obj::MIPNONE,"MIPNONE");
};

#endif

hx::Class Context3DMipFilter_Impl__obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("MIPLINEAR","\x59","\x3a","\xd7","\x5f"),
	HX_HCSTRING("MIPNEAREST","\x4a","\x95","\x9e","\xc2"),
	HX_HCSTRING("MIPNONE","\x2c","\x52","\xdb","\xf5"),
	HX_HCSTRING("fromString","\xdb","\x2d","\x74","\x54"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null()) };

void Context3DMipFilter_Impl__obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.display3D._Context3DMipFilter.Context3DMipFilter_Impl_","\x48","\x5b","\x34","\xde");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Context3DMipFilter_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Context3DMipFilter_Impl__obj >;
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

void Context3DMipFilter_Impl__obj::__boot()
{
	MIPLINEAR= ((Dynamic)((int)0));
	MIPNEAREST= ((Dynamic)((int)1));
	MIPNONE= ((Dynamic)((int)2));
}

} // end namespace openfl
} // end namespace display3D
} // end namespace _Context3DMipFilter
