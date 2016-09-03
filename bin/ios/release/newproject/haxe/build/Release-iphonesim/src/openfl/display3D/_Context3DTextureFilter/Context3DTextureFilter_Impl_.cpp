#include <hxcpp.h>

#ifndef INCLUDED_openfl_display3D__Context3DTextureFilter_Context3DTextureFilter_Impl_
#include <openfl/display3D/_Context3DTextureFilter/Context3DTextureFilter_Impl_.h>
#endif
namespace openfl{
namespace display3D{
namespace _Context3DTextureFilter{

Void Context3DTextureFilter_Impl__obj::__construct()
{
	return null();
}

//Context3DTextureFilter_Impl__obj::~Context3DTextureFilter_Impl__obj() { }

Dynamic Context3DTextureFilter_Impl__obj::__CreateEmpty() { return  new Context3DTextureFilter_Impl__obj; }
hx::ObjectPtr< Context3DTextureFilter_Impl__obj > Context3DTextureFilter_Impl__obj::__new()
{  hx::ObjectPtr< Context3DTextureFilter_Impl__obj > _result_ = new Context3DTextureFilter_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic Context3DTextureFilter_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Context3DTextureFilter_Impl__obj > _result_ = new Context3DTextureFilter_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic Context3DTextureFilter_Impl__obj::ANISOTROPIC16X;

Dynamic Context3DTextureFilter_Impl__obj::ANISOTROPIC2X;

Dynamic Context3DTextureFilter_Impl__obj::ANISOTROPIC4X;

Dynamic Context3DTextureFilter_Impl__obj::ANISOTROPIC8X;

Dynamic Context3DTextureFilter_Impl__obj::LINEAR;

Dynamic Context3DTextureFilter_Impl__obj::NEAREST;

Dynamic Context3DTextureFilter_Impl__obj::fromString( ::String value){
	HX_STACK_FRAME("openfl.display3D._Context3DTextureFilter.Context3DTextureFilter_Impl_","fromString",0x784e3d61,"openfl.display3D._Context3DTextureFilter.Context3DTextureFilter_Impl_.fromString","openfl/display3D/Context3DTextureFilter.hx",14,0x69987bf0)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(16)
	::String tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(16)
	Dynamic tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(16)
	::String _switch_1 = (tmp);
	if (  ( _switch_1==HX_HCSTRING("anisotropic16x","\x62","\x56","\x64","\x8c"))){
		HX_STACK_LINE(18)
		tmp1 = ((Dynamic)((int)0));
	}
	else if (  ( _switch_1==HX_HCSTRING("anisotropic2x","\x77","\x56","\x26","\xf5"))){
		HX_STACK_LINE(19)
		tmp1 = ((Dynamic)((int)1));
	}
	else if (  ( _switch_1==HX_HCSTRING("anisotropic4x","\x35","\x58","\x26","\xf5"))){
		HX_STACK_LINE(20)
		tmp1 = ((Dynamic)((int)2));
	}
	else if (  ( _switch_1==HX_HCSTRING("anisotropic8x","\xb1","\x5b","\x26","\xf5"))){
		HX_STACK_LINE(21)
		tmp1 = ((Dynamic)((int)3));
	}
	else if (  ( _switch_1==HX_HCSTRING("linear","\xe5","\x51","\xa0","\xec"))){
		HX_STACK_LINE(22)
		tmp1 = ((Dynamic)((int)4));
	}
	else if (  ( _switch_1==HX_HCSTRING("nearest","\x5e","\x18","\xca","\x65"))){
		HX_STACK_LINE(23)
		tmp1 = ((Dynamic)((int)5));
	}
	else  {
		HX_STACK_LINE(24)
		tmp1 = null();
	}
;
;
	HX_STACK_LINE(16)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Context3DTextureFilter_Impl__obj,fromString,return )

::String Context3DTextureFilter_Impl__obj::toString( int value){
	HX_STACK_FRAME("openfl.display3D._Context3DTextureFilter.Context3DTextureFilter_Impl_","toString",0x747fd2b2,"openfl.display3D._Context3DTextureFilter.Context3DTextureFilter_Impl_.toString","openfl/display3D/Context3DTextureFilter.hx",30,0x69987bf0)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(32)
	int tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(32)
	::String tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(32)
	switch( (int)(tmp)){
		case (int)0: {
			HX_STACK_LINE(34)
			tmp1 = HX_HCSTRING("anisotropic16x","\x62","\x56","\x64","\x8c");
		}
		;break;
		case (int)1: {
			HX_STACK_LINE(35)
			tmp1 = HX_HCSTRING("anisotropic2x","\x77","\x56","\x26","\xf5");
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(36)
			tmp1 = HX_HCSTRING("anisotropic4x","\x35","\x58","\x26","\xf5");
		}
		;break;
		case (int)3: {
			HX_STACK_LINE(37)
			tmp1 = HX_HCSTRING("anisotropic8x","\xb1","\x5b","\x26","\xf5");
		}
		;break;
		case (int)4: {
			HX_STACK_LINE(38)
			tmp1 = HX_HCSTRING("linear","\xe5","\x51","\xa0","\xec");
		}
		;break;
		case (int)5: {
			HX_STACK_LINE(39)
			tmp1 = HX_HCSTRING("nearest","\x5e","\x18","\xca","\x65");
		}
		;break;
		default: {
			HX_STACK_LINE(40)
			tmp1 = null();
		}
	}
	HX_STACK_LINE(32)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Context3DTextureFilter_Impl__obj,toString,return )


Context3DTextureFilter_Impl__obj::Context3DTextureFilter_Impl__obj()
{
}

bool Context3DTextureFilter_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
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
	{hx::fsObject /*Dynamic*/ ,(void *) &Context3DTextureFilter_Impl__obj::ANISOTROPIC16X,HX_HCSTRING("ANISOTROPIC16X","\x62","\xf6","\x10","\x1d")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Context3DTextureFilter_Impl__obj::ANISOTROPIC2X,HX_HCSTRING("ANISOTROPIC2X","\x37","\x1a","\x65","\xdb")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Context3DTextureFilter_Impl__obj::ANISOTROPIC4X,HX_HCSTRING("ANISOTROPIC4X","\xf5","\x1b","\x65","\xdb")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Context3DTextureFilter_Impl__obj::ANISOTROPIC8X,HX_HCSTRING("ANISOTROPIC8X","\x71","\x1f","\x65","\xdb")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Context3DTextureFilter_Impl__obj::LINEAR,HX_HCSTRING("LINEAR","\xe5","\xfd","\x22","\x9f")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Context3DTextureFilter_Impl__obj::NEAREST,HX_HCSTRING("NEAREST","\x3e","\xec","\x9d","\xe5")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Context3DTextureFilter_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Context3DTextureFilter_Impl__obj::ANISOTROPIC16X,"ANISOTROPIC16X");
	HX_MARK_MEMBER_NAME(Context3DTextureFilter_Impl__obj::ANISOTROPIC2X,"ANISOTROPIC2X");
	HX_MARK_MEMBER_NAME(Context3DTextureFilter_Impl__obj::ANISOTROPIC4X,"ANISOTROPIC4X");
	HX_MARK_MEMBER_NAME(Context3DTextureFilter_Impl__obj::ANISOTROPIC8X,"ANISOTROPIC8X");
	HX_MARK_MEMBER_NAME(Context3DTextureFilter_Impl__obj::LINEAR,"LINEAR");
	HX_MARK_MEMBER_NAME(Context3DTextureFilter_Impl__obj::NEAREST,"NEAREST");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Context3DTextureFilter_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Context3DTextureFilter_Impl__obj::ANISOTROPIC16X,"ANISOTROPIC16X");
	HX_VISIT_MEMBER_NAME(Context3DTextureFilter_Impl__obj::ANISOTROPIC2X,"ANISOTROPIC2X");
	HX_VISIT_MEMBER_NAME(Context3DTextureFilter_Impl__obj::ANISOTROPIC4X,"ANISOTROPIC4X");
	HX_VISIT_MEMBER_NAME(Context3DTextureFilter_Impl__obj::ANISOTROPIC8X,"ANISOTROPIC8X");
	HX_VISIT_MEMBER_NAME(Context3DTextureFilter_Impl__obj::LINEAR,"LINEAR");
	HX_VISIT_MEMBER_NAME(Context3DTextureFilter_Impl__obj::NEAREST,"NEAREST");
};

#endif

hx::Class Context3DTextureFilter_Impl__obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("ANISOTROPIC16X","\x62","\xf6","\x10","\x1d"),
	HX_HCSTRING("ANISOTROPIC2X","\x37","\x1a","\x65","\xdb"),
	HX_HCSTRING("ANISOTROPIC4X","\xf5","\x1b","\x65","\xdb"),
	HX_HCSTRING("ANISOTROPIC8X","\x71","\x1f","\x65","\xdb"),
	HX_HCSTRING("LINEAR","\xe5","\xfd","\x22","\x9f"),
	HX_HCSTRING("NEAREST","\x3e","\xec","\x9d","\xe5"),
	HX_HCSTRING("fromString","\xdb","\x2d","\x74","\x54"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null()) };

void Context3DTextureFilter_Impl__obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.display3D._Context3DTextureFilter.Context3DTextureFilter_Impl_","\x28","\xb7","\x43","\x12");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Context3DTextureFilter_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Context3DTextureFilter_Impl__obj >;
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

void Context3DTextureFilter_Impl__obj::__boot()
{
	ANISOTROPIC16X= ((Dynamic)((int)0));
	ANISOTROPIC2X= ((Dynamic)((int)1));
	ANISOTROPIC4X= ((Dynamic)((int)2));
	ANISOTROPIC8X= ((Dynamic)((int)3));
	LINEAR= ((Dynamic)((int)4));
	NEAREST= ((Dynamic)((int)5));
}

} // end namespace openfl
} // end namespace display3D
} // end namespace _Context3DTextureFilter
