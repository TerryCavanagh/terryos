#include <hxcpp.h>

#ifndef INCLUDED_openfl_display3D__Context3DBufferUsage_Context3DBufferUsage_Impl_
#include <openfl/display3D/_Context3DBufferUsage/Context3DBufferUsage_Impl_.h>
#endif
namespace openfl{
namespace display3D{
namespace _Context3DBufferUsage{

Void Context3DBufferUsage_Impl__obj::__construct()
{
	return null();
}

//Context3DBufferUsage_Impl__obj::~Context3DBufferUsage_Impl__obj() { }

Dynamic Context3DBufferUsage_Impl__obj::__CreateEmpty() { return  new Context3DBufferUsage_Impl__obj; }
hx::ObjectPtr< Context3DBufferUsage_Impl__obj > Context3DBufferUsage_Impl__obj::__new()
{  hx::ObjectPtr< Context3DBufferUsage_Impl__obj > _result_ = new Context3DBufferUsage_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic Context3DBufferUsage_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Context3DBufferUsage_Impl__obj > _result_ = new Context3DBufferUsage_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic Context3DBufferUsage_Impl__obj::DYNAMIC_DRAW;

Dynamic Context3DBufferUsage_Impl__obj::STATIC_DRAW;

Dynamic Context3DBufferUsage_Impl__obj::fromString( ::String value){
	HX_STACK_FRAME("openfl.display3D._Context3DBufferUsage.Context3DBufferUsage_Impl_","fromString",0xbc8bc5e1,"openfl.display3D._Context3DBufferUsage.Context3DBufferUsage_Impl_.fromString","openfl/display3D/Context3DBufferUsage.hx",10,0x57541062)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(12)
	::String tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(12)
	Dynamic tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(12)
	::String _switch_1 = (tmp);
	if (  ( _switch_1==HX_HCSTRING("dynamicDraw","\x23","\x23","\xfe","\x67"))){
		HX_STACK_LINE(14)
		tmp1 = ((Dynamic)((int)0));
	}
	else if (  ( _switch_1==HX_HCSTRING("staticDraw","\xd2","\x23","\x1c","\xa4"))){
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


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Context3DBufferUsage_Impl__obj,fromString,return )

::String Context3DBufferUsage_Impl__obj::toString( int value){
	HX_STACK_FRAME("openfl.display3D._Context3DBufferUsage.Context3DBufferUsage_Impl_","toString",0xe8f23b32,"openfl.display3D._Context3DBufferUsage.Context3DBufferUsage_Impl_.toString","openfl/display3D/Context3DBufferUsage.hx",22,0x57541062)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(24)
	int tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(24)
	::String tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(24)
	switch( (int)(tmp)){
		case (int)0: {
			HX_STACK_LINE(26)
			tmp1 = HX_HCSTRING("dynamicDraw","\x23","\x23","\xfe","\x67");
		}
		;break;
		case (int)1: {
			HX_STACK_LINE(27)
			tmp1 = HX_HCSTRING("staticDraw","\xd2","\x23","\x1c","\xa4");
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


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Context3DBufferUsage_Impl__obj,toString,return )


Context3DBufferUsage_Impl__obj::Context3DBufferUsage_Impl__obj()
{
}

bool Context3DBufferUsage_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
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
	{hx::fsObject /*Dynamic*/ ,(void *) &Context3DBufferUsage_Impl__obj::DYNAMIC_DRAW,HX_HCSTRING("DYNAMIC_DRAW","\x24","\x04","\x1f","\x24")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Context3DBufferUsage_Impl__obj::STATIC_DRAW,HX_HCSTRING("STATIC_DRAW","\x75","\x50","\x2f","\xba")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Context3DBufferUsage_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Context3DBufferUsage_Impl__obj::DYNAMIC_DRAW,"DYNAMIC_DRAW");
	HX_MARK_MEMBER_NAME(Context3DBufferUsage_Impl__obj::STATIC_DRAW,"STATIC_DRAW");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Context3DBufferUsage_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Context3DBufferUsage_Impl__obj::DYNAMIC_DRAW,"DYNAMIC_DRAW");
	HX_VISIT_MEMBER_NAME(Context3DBufferUsage_Impl__obj::STATIC_DRAW,"STATIC_DRAW");
};

#endif

hx::Class Context3DBufferUsage_Impl__obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("DYNAMIC_DRAW","\x24","\x04","\x1f","\x24"),
	HX_HCSTRING("STATIC_DRAW","\x75","\x50","\x2f","\xba"),
	HX_HCSTRING("fromString","\xdb","\x2d","\x74","\x54"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null()) };

void Context3DBufferUsage_Impl__obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.display3D._Context3DBufferUsage.Context3DBufferUsage_Impl_","\xa8","\x5e","\xc0","\xc7");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Context3DBufferUsage_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Context3DBufferUsage_Impl__obj >;
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

void Context3DBufferUsage_Impl__obj::__boot()
{
	DYNAMIC_DRAW= ((Dynamic)((int)0));
	STATIC_DRAW= ((Dynamic)((int)1));
}

} // end namespace openfl
} // end namespace display3D
} // end namespace _Context3DBufferUsage
