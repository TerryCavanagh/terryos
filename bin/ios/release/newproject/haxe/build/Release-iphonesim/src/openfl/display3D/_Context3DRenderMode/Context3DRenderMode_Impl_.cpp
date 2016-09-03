#include <hxcpp.h>

#ifndef INCLUDED_openfl_display3D__Context3DRenderMode_Context3DRenderMode_Impl_
#include <openfl/display3D/_Context3DRenderMode/Context3DRenderMode_Impl_.h>
#endif
namespace openfl{
namespace display3D{
namespace _Context3DRenderMode{

Void Context3DRenderMode_Impl__obj::__construct()
{
	return null();
}

//Context3DRenderMode_Impl__obj::~Context3DRenderMode_Impl__obj() { }

Dynamic Context3DRenderMode_Impl__obj::__CreateEmpty() { return  new Context3DRenderMode_Impl__obj; }
hx::ObjectPtr< Context3DRenderMode_Impl__obj > Context3DRenderMode_Impl__obj::__new()
{  hx::ObjectPtr< Context3DRenderMode_Impl__obj > _result_ = new Context3DRenderMode_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic Context3DRenderMode_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Context3DRenderMode_Impl__obj > _result_ = new Context3DRenderMode_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic Context3DRenderMode_Impl__obj::AUTO;

Dynamic Context3DRenderMode_Impl__obj::SOFTWARE;

Dynamic Context3DRenderMode_Impl__obj::fromString( ::String value){
	HX_STACK_FRAME("openfl.display3D._Context3DRenderMode.Context3DRenderMode_Impl_","fromString",0x77bca1ab,"openfl.display3D._Context3DRenderMode.Context3DRenderMode_Impl_.fromString","openfl/display3D/Context3DRenderMode.hx",10,0xec19e320)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(12)
	::String tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(12)
	Dynamic tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(12)
	::String _switch_1 = (tmp);
	if (  ( _switch_1==HX_HCSTRING("auto","\x6f","\xdf","\x76","\x40"))){
		HX_STACK_LINE(14)
		tmp1 = ((Dynamic)((int)0));
	}
	else if (  ( _switch_1==HX_HCSTRING("software","\x27","\x3c","\x4c","\x9b"))){
		HX_STACK_LINE(15)
		tmp1 = ((Dynamic)((int)1));
	}
	else  {
		HX_STACK_LINE(16)
		tmp1 = null();
	}
;
;
	HX_STACK_LINE(12)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Context3DRenderMode_Impl__obj,fromString,return )

::String Context3DRenderMode_Impl__obj::toString( int value){
	HX_STACK_FRAME("openfl.display3D._Context3DRenderMode.Context3DRenderMode_Impl_","toString",0xace3b07c,"openfl.display3D._Context3DRenderMode.Context3DRenderMode_Impl_.toString","openfl/display3D/Context3DRenderMode.hx",22,0xec19e320)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(24)
	int tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(24)
	::String tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(24)
	switch( (int)(tmp)){
		case (int)0: {
			HX_STACK_LINE(26)
			tmp1 = HX_HCSTRING("auto","\x6f","\xdf","\x76","\x40");
		}
		;break;
		case (int)1: {
			HX_STACK_LINE(27)
			tmp1 = HX_HCSTRING("software","\x27","\x3c","\x4c","\x9b");
		}
		;break;
		default: {
			HX_STACK_LINE(28)
			tmp1 = null();
		}
	}
	HX_STACK_LINE(24)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Context3DRenderMode_Impl__obj,toString,return )


Context3DRenderMode_Impl__obj::Context3DRenderMode_Impl__obj()
{
}

bool Context3DRenderMode_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
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
	{hx::fsObject /*Dynamic*/ ,(void *) &Context3DRenderMode_Impl__obj::AUTO,HX_HCSTRING("AUTO","\x6f","\xa7","\x37","\x2b")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Context3DRenderMode_Impl__obj::SOFTWARE,HX_HCSTRING("SOFTWARE","\x27","\xcc","\xd1","\xf4")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Context3DRenderMode_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Context3DRenderMode_Impl__obj::AUTO,"AUTO");
	HX_MARK_MEMBER_NAME(Context3DRenderMode_Impl__obj::SOFTWARE,"SOFTWARE");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Context3DRenderMode_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Context3DRenderMode_Impl__obj::AUTO,"AUTO");
	HX_VISIT_MEMBER_NAME(Context3DRenderMode_Impl__obj::SOFTWARE,"SOFTWARE");
};

#endif

hx::Class Context3DRenderMode_Impl__obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("AUTO","\x6f","\xa7","\x37","\x2b"),
	HX_HCSTRING("SOFTWARE","\x27","\xcc","\xd1","\xf4"),
	HX_HCSTRING("fromString","\xdb","\x2d","\x74","\x54"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null()) };

void Context3DRenderMode_Impl__obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.display3D._Context3DRenderMode.Context3DRenderMode_Impl_","\x9e","\xba","\xba","\xd4");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Context3DRenderMode_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Context3DRenderMode_Impl__obj >;
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

void Context3DRenderMode_Impl__obj::__boot()
{
	AUTO= ((Dynamic)((int)0));
	SOFTWARE= ((Dynamic)((int)1));
}

} // end namespace openfl
} // end namespace display3D
} // end namespace _Context3DRenderMode
