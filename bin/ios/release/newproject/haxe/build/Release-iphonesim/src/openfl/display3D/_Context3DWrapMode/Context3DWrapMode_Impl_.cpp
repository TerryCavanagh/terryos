#include <hxcpp.h>

#ifndef INCLUDED_openfl_display3D__Context3DWrapMode_Context3DWrapMode_Impl_
#include <openfl/display3D/_Context3DWrapMode/Context3DWrapMode_Impl_.h>
#endif
namespace openfl{
namespace display3D{
namespace _Context3DWrapMode{

Void Context3DWrapMode_Impl__obj::__construct()
{
	return null();
}

//Context3DWrapMode_Impl__obj::~Context3DWrapMode_Impl__obj() { }

Dynamic Context3DWrapMode_Impl__obj::__CreateEmpty() { return  new Context3DWrapMode_Impl__obj; }
hx::ObjectPtr< Context3DWrapMode_Impl__obj > Context3DWrapMode_Impl__obj::__new()
{  hx::ObjectPtr< Context3DWrapMode_Impl__obj > _result_ = new Context3DWrapMode_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic Context3DWrapMode_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Context3DWrapMode_Impl__obj > _result_ = new Context3DWrapMode_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic Context3DWrapMode_Impl__obj::CLAMP;

Dynamic Context3DWrapMode_Impl__obj::CLAMP_U_REPEAT_V;

Dynamic Context3DWrapMode_Impl__obj::REPEAT;

Dynamic Context3DWrapMode_Impl__obj::REPEAT_U_CLAMP_V;

Dynamic Context3DWrapMode_Impl__obj::fromString( ::String value){
	HX_STACK_FRAME("openfl.display3D._Context3DWrapMode.Context3DWrapMode_Impl_","fromString",0xa28ec483,"openfl.display3D._Context3DWrapMode.Context3DWrapMode_Impl_.fromString","openfl/display3D/Context3DWrapMode.hx",12,0x5bc49e6c)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(14)
	::String tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(14)
	Dynamic tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(14)
	::String _switch_1 = (tmp);
	if (  ( _switch_1==HX_HCSTRING("clamp","\xfb","\x72","\x58","\x48"))){
		HX_STACK_LINE(16)
		tmp1 = ((Dynamic)((int)0));
	}
	else if (  ( _switch_1==HX_HCSTRING("clamp_u_repeat_y","\xa3","\x8d","\xa7","\x28"))){
		HX_STACK_LINE(17)
		tmp1 = ((Dynamic)((int)1));
	}
	else if (  ( _switch_1==HX_HCSTRING("repeat","\x5b","\x97","\x7c","\x06"))){
		HX_STACK_LINE(18)
		tmp1 = ((Dynamic)((int)2));
	}
	else if (  ( _switch_1==HX_HCSTRING("repeat_u_clamp_y","\xc7","\x04","\x17","\xdd"))){
		HX_STACK_LINE(19)
		tmp1 = ((Dynamic)((int)3));
	}
	else  {
		HX_STACK_LINE(20)
		tmp1 = null();
	}
;
;
	HX_STACK_LINE(14)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Context3DWrapMode_Impl__obj,fromString,return )

::String Context3DWrapMode_Impl__obj::toString( int value){
	HX_STACK_FRAME("openfl.display3D._Context3DWrapMode.Context3DWrapMode_Impl_","toString",0x61caed54,"openfl.display3D._Context3DWrapMode.Context3DWrapMode_Impl_.toString","openfl/display3D/Context3DWrapMode.hx",26,0x5bc49e6c)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(28)
	int tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(28)
	::String tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(28)
	switch( (int)(tmp)){
		case (int)0: {
			HX_STACK_LINE(30)
			tmp1 = HX_HCSTRING("clamp","\xfb","\x72","\x58","\x48");
		}
		;break;
		case (int)1: {
			HX_STACK_LINE(31)
			tmp1 = HX_HCSTRING("clamp_u_repeat_y","\xa3","\x8d","\xa7","\x28");
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(32)
			tmp1 = HX_HCSTRING("repeat","\x5b","\x97","\x7c","\x06");
		}
		;break;
		case (int)3: {
			HX_STACK_LINE(33)
			tmp1 = HX_HCSTRING("repeat_u_clamp_y","\xc7","\x04","\x17","\xdd");
		}
		;break;
		default: {
			HX_STACK_LINE(34)
			tmp1 = null();
		}
	}
	HX_STACK_LINE(28)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Context3DWrapMode_Impl__obj,toString,return )


Context3DWrapMode_Impl__obj::Context3DWrapMode_Impl__obj()
{
}

bool Context3DWrapMode_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
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
	{hx::fsObject /*Dynamic*/ ,(void *) &Context3DWrapMode_Impl__obj::CLAMP,HX_HCSTRING("CLAMP","\xdb","\xaa","\x46","\xc6")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Context3DWrapMode_Impl__obj::CLAMP_U_REPEAT_V,HX_HCSTRING("CLAMP_U_REPEAT_V","\xc0","\x51","\xbd","\xad")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Context3DWrapMode_Impl__obj::REPEAT,HX_HCSTRING("REPEAT","\x5b","\x43","\xff","\xb8")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Context3DWrapMode_Impl__obj::REPEAT_U_CLAMP_V,HX_HCSTRING("REPEAT_U_CLAMP_V","\x64","\x80","\xcf","\x17")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Context3DWrapMode_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Context3DWrapMode_Impl__obj::CLAMP,"CLAMP");
	HX_MARK_MEMBER_NAME(Context3DWrapMode_Impl__obj::CLAMP_U_REPEAT_V,"CLAMP_U_REPEAT_V");
	HX_MARK_MEMBER_NAME(Context3DWrapMode_Impl__obj::REPEAT,"REPEAT");
	HX_MARK_MEMBER_NAME(Context3DWrapMode_Impl__obj::REPEAT_U_CLAMP_V,"REPEAT_U_CLAMP_V");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Context3DWrapMode_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Context3DWrapMode_Impl__obj::CLAMP,"CLAMP");
	HX_VISIT_MEMBER_NAME(Context3DWrapMode_Impl__obj::CLAMP_U_REPEAT_V,"CLAMP_U_REPEAT_V");
	HX_VISIT_MEMBER_NAME(Context3DWrapMode_Impl__obj::REPEAT,"REPEAT");
	HX_VISIT_MEMBER_NAME(Context3DWrapMode_Impl__obj::REPEAT_U_CLAMP_V,"REPEAT_U_CLAMP_V");
};

#endif

hx::Class Context3DWrapMode_Impl__obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("CLAMP","\xdb","\xaa","\x46","\xc6"),
	HX_HCSTRING("CLAMP_U_REPEAT_V","\xc0","\x51","\xbd","\xad"),
	HX_HCSTRING("REPEAT","\x5b","\x43","\xff","\xb8"),
	HX_HCSTRING("REPEAT_U_CLAMP_V","\x64","\x80","\xcf","\x17"),
	HX_HCSTRING("fromString","\xdb","\x2d","\x74","\x54"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null()) };

void Context3DWrapMode_Impl__obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.display3D._Context3DWrapMode.Context3DWrapMode_Impl_","\xc6","\x78","\x0e","\x2e");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Context3DWrapMode_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Context3DWrapMode_Impl__obj >;
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

void Context3DWrapMode_Impl__obj::__boot()
{
	CLAMP= ((Dynamic)((int)0));
	CLAMP_U_REPEAT_V= ((Dynamic)((int)1));
	REPEAT= ((Dynamic)((int)2));
	REPEAT_U_CLAMP_V= ((Dynamic)((int)3));
}

} // end namespace openfl
} // end namespace display3D
} // end namespace _Context3DWrapMode
