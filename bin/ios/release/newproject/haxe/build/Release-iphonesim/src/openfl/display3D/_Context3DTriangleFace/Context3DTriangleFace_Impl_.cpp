#include <hxcpp.h>

#ifndef INCLUDED_openfl_display3D__Context3DTriangleFace_Context3DTriangleFace_Impl_
#include <openfl/display3D/_Context3DTriangleFace/Context3DTriangleFace_Impl_.h>
#endif
namespace openfl{
namespace display3D{
namespace _Context3DTriangleFace{

Void Context3DTriangleFace_Impl__obj::__construct()
{
	return null();
}

//Context3DTriangleFace_Impl__obj::~Context3DTriangleFace_Impl__obj() { }

Dynamic Context3DTriangleFace_Impl__obj::__CreateEmpty() { return  new Context3DTriangleFace_Impl__obj; }
hx::ObjectPtr< Context3DTriangleFace_Impl__obj > Context3DTriangleFace_Impl__obj::__new()
{  hx::ObjectPtr< Context3DTriangleFace_Impl__obj > _result_ = new Context3DTriangleFace_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic Context3DTriangleFace_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Context3DTriangleFace_Impl__obj > _result_ = new Context3DTriangleFace_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic Context3DTriangleFace_Impl__obj::BACK;

Dynamic Context3DTriangleFace_Impl__obj::FRONT;

Dynamic Context3DTriangleFace_Impl__obj::FRONT_AND_BACK;

Dynamic Context3DTriangleFace_Impl__obj::NONE;

Dynamic Context3DTriangleFace_Impl__obj::fromString( ::String value){
	HX_STACK_FRAME("openfl.display3D._Context3DTriangleFace.Context3DTriangleFace_Impl_","fromString",0x04ef1c93,"openfl.display3D._Context3DTriangleFace.Context3DTriangleFace_Impl_.fromString","openfl/display3D/Context3DTriangleFace.hx",12,0x186e7db4)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(14)
	::String tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(14)
	Dynamic tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(14)
	::String _switch_1 = (tmp);
	if (  ( _switch_1==HX_HCSTRING("back","\x27","\xda","\x10","\x41"))){
		HX_STACK_LINE(16)
		tmp1 = ((Dynamic)((int)0));
	}
	else if (  ( _switch_1==HX_HCSTRING("front","\xa9","\x18","\x8e","\x06"))){
		HX_STACK_LINE(17)
		tmp1 = ((Dynamic)((int)1));
	}
	else if (  ( _switch_1==HX_HCSTRING("frontAndBack","\xf5","\x1e","\x63","\xce"))){
		HX_STACK_LINE(18)
		tmp1 = ((Dynamic)((int)2));
	}
	else if (  ( _switch_1==HX_HCSTRING("none","\xb8","\x12","\x0a","\x49"))){
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


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Context3DTriangleFace_Impl__obj,fromString,return )

::String Context3DTriangleFace_Impl__obj::toString( int value){
	HX_STACK_FRAME("openfl.display3D._Context3DTriangleFace.Context3DTriangleFace_Impl_","toString",0xd6ea2164,"openfl.display3D._Context3DTriangleFace.Context3DTriangleFace_Impl_.toString","openfl/display3D/Context3DTriangleFace.hx",26,0x186e7db4)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(28)
	int tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(28)
	::String tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(28)
	switch( (int)(tmp)){
		case (int)0: {
			HX_STACK_LINE(30)
			tmp1 = HX_HCSTRING("back","\x27","\xda","\x10","\x41");
		}
		;break;
		case (int)1: {
			HX_STACK_LINE(31)
			tmp1 = HX_HCSTRING("front","\xa9","\x18","\x8e","\x06");
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(32)
			tmp1 = HX_HCSTRING("frontAndBack","\xf5","\x1e","\x63","\xce");
		}
		;break;
		case (int)3: {
			HX_STACK_LINE(33)
			tmp1 = HX_HCSTRING("none","\xb8","\x12","\x0a","\x49");
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


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Context3DTriangleFace_Impl__obj,toString,return )


Context3DTriangleFace_Impl__obj::Context3DTriangleFace_Impl__obj()
{
}

bool Context3DTriangleFace_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
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
	{hx::fsObject /*Dynamic*/ ,(void *) &Context3DTriangleFace_Impl__obj::BACK,HX_HCSTRING("BACK","\x27","\xa2","\xd1","\x2b")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Context3DTriangleFace_Impl__obj::FRONT,HX_HCSTRING("FRONT","\x89","\x50","\x7c","\x84")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Context3DTriangleFace_Impl__obj::FRONT_AND_BACK,HX_HCSTRING("FRONT_AND_BACK","\xa5","\x3d","\x6a","\xc1")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Context3DTriangleFace_Impl__obj::NONE,HX_HCSTRING("NONE","\xb8","\xda","\xca","\x33")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Context3DTriangleFace_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Context3DTriangleFace_Impl__obj::BACK,"BACK");
	HX_MARK_MEMBER_NAME(Context3DTriangleFace_Impl__obj::FRONT,"FRONT");
	HX_MARK_MEMBER_NAME(Context3DTriangleFace_Impl__obj::FRONT_AND_BACK,"FRONT_AND_BACK");
	HX_MARK_MEMBER_NAME(Context3DTriangleFace_Impl__obj::NONE,"NONE");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Context3DTriangleFace_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Context3DTriangleFace_Impl__obj::BACK,"BACK");
	HX_VISIT_MEMBER_NAME(Context3DTriangleFace_Impl__obj::FRONT,"FRONT");
	HX_VISIT_MEMBER_NAME(Context3DTriangleFace_Impl__obj::FRONT_AND_BACK,"FRONT_AND_BACK");
	HX_VISIT_MEMBER_NAME(Context3DTriangleFace_Impl__obj::NONE,"NONE");
};

#endif

hx::Class Context3DTriangleFace_Impl__obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("BACK","\x27","\xa2","\xd1","\x2b"),
	HX_HCSTRING("FRONT","\x89","\x50","\x7c","\x84"),
	HX_HCSTRING("FRONT_AND_BACK","\xa5","\x3d","\x6a","\xc1"),
	HX_HCSTRING("NONE","\xb8","\xda","\xca","\x33"),
	HX_HCSTRING("fromString","\xdb","\x2d","\x74","\x54"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null()) };

void Context3DTriangleFace_Impl__obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.display3D._Context3DTriangleFace.Context3DTriangleFace_Impl_","\xb6","\x06","\xe6","\x8f");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Context3DTriangleFace_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Context3DTriangleFace_Impl__obj >;
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

void Context3DTriangleFace_Impl__obj::__boot()
{
	BACK= ((Dynamic)((int)0));
	FRONT= ((Dynamic)((int)1));
	FRONT_AND_BACK= ((Dynamic)((int)2));
	NONE= ((Dynamic)((int)3));
}

} // end namespace openfl
} // end namespace display3D
} // end namespace _Context3DTriangleFace
