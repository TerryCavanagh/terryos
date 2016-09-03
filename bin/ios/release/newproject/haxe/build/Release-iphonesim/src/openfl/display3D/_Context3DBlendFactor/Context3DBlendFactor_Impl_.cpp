#include <hxcpp.h>

#ifndef INCLUDED_openfl_display3D__Context3DBlendFactor_Context3DBlendFactor_Impl_
#include <openfl/display3D/_Context3DBlendFactor/Context3DBlendFactor_Impl_.h>
#endif
namespace openfl{
namespace display3D{
namespace _Context3DBlendFactor{

Void Context3DBlendFactor_Impl__obj::__construct()
{
	return null();
}

//Context3DBlendFactor_Impl__obj::~Context3DBlendFactor_Impl__obj() { }

Dynamic Context3DBlendFactor_Impl__obj::__CreateEmpty() { return  new Context3DBlendFactor_Impl__obj; }
hx::ObjectPtr< Context3DBlendFactor_Impl__obj > Context3DBlendFactor_Impl__obj::__new()
{  hx::ObjectPtr< Context3DBlendFactor_Impl__obj > _result_ = new Context3DBlendFactor_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic Context3DBlendFactor_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Context3DBlendFactor_Impl__obj > _result_ = new Context3DBlendFactor_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic Context3DBlendFactor_Impl__obj::DESTINATION_ALPHA;

Dynamic Context3DBlendFactor_Impl__obj::DESTINATION_COLOR;

Dynamic Context3DBlendFactor_Impl__obj::ONE;

Dynamic Context3DBlendFactor_Impl__obj::ONE_MINUS_DESTINATION_ALPHA;

Dynamic Context3DBlendFactor_Impl__obj::ONE_MINUS_DESTINATION_COLOR;

Dynamic Context3DBlendFactor_Impl__obj::ONE_MINUS_SOURCE_ALPHA;

Dynamic Context3DBlendFactor_Impl__obj::ONE_MINUS_SOURCE_COLOR;

Dynamic Context3DBlendFactor_Impl__obj::SOURCE_ALPHA;

Dynamic Context3DBlendFactor_Impl__obj::SOURCE_COLOR;

Dynamic Context3DBlendFactor_Impl__obj::ZERO;

Dynamic Context3DBlendFactor_Impl__obj::fromString( ::String value){
	HX_STACK_FRAME("openfl.display3D._Context3DBlendFactor.Context3DBlendFactor_Impl_","fromString",0xfc4abc41,"openfl.display3D._Context3DBlendFactor.Context3DBlendFactor_Impl_.fromString","openfl/display3D/Context3DBlendFactor.hx",18,0xf89541c3)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(20)
	::String tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(20)
	Dynamic tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(20)
	::String _switch_1 = (tmp);
	if (  ( _switch_1==HX_HCSTRING("destinationAlpha","\xf0","\x89","\x61","\x9b"))){
		HX_STACK_LINE(22)
		tmp1 = ((Dynamic)((int)0));
	}
	else if (  ( _switch_1==HX_HCSTRING("destinationColor","\xf5","\x53","\x27","\xc4"))){
		HX_STACK_LINE(23)
		tmp1 = ((Dynamic)((int)1));
	}
	else if (  ( _switch_1==HX_HCSTRING("one","\x66","\x9a","\x54","\x00"))){
		HX_STACK_LINE(24)
		tmp1 = ((Dynamic)((int)2));
	}
	else if (  ( _switch_1==HX_HCSTRING("oneMinusDestinationAlpha","\x3a","\xbe","\x1e","\xc3"))){
		HX_STACK_LINE(25)
		tmp1 = ((Dynamic)((int)3));
	}
	else if (  ( _switch_1==HX_HCSTRING("oneMinusDestinationColor","\x3f","\x88","\xe4","\xeb"))){
		HX_STACK_LINE(26)
		tmp1 = ((Dynamic)((int)4));
	}
	else if (  ( _switch_1==HX_HCSTRING("oneMinusSourceAlpha","\x79","\x9c","\xbf","\x0b"))){
		HX_STACK_LINE(27)
		tmp1 = ((Dynamic)((int)5));
	}
	else if (  ( _switch_1==HX_HCSTRING("oneMinusSourceColor","\x7e","\x66","\x85","\x34"))){
		HX_STACK_LINE(28)
		tmp1 = ((Dynamic)((int)6));
	}
	else if (  ( _switch_1==HX_HCSTRING("sourceAlpha","\x83","\x6c","\x9c","\x50"))){
		HX_STACK_LINE(29)
		tmp1 = ((Dynamic)((int)7));
	}
	else if (  ( _switch_1==HX_HCSTRING("sourceColor","\x88","\x36","\x62","\x79"))){
		HX_STACK_LINE(30)
		tmp1 = ((Dynamic)((int)8));
	}
	else if (  ( _switch_1==HX_HCSTRING("zero","\x28","\x0f","\xf1","\x50"))){
		HX_STACK_LINE(31)
		tmp1 = ((Dynamic)((int)9));
	}
	else  {
		HX_STACK_LINE(32)
		tmp1 = null();
	}
;
;
	HX_STACK_LINE(20)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Context3DBlendFactor_Impl__obj,fromString,return )

::String Context3DBlendFactor_Impl__obj::toString( int value){
	HX_STACK_FRAME("openfl.display3D._Context3DBlendFactor.Context3DBlendFactor_Impl_","toString",0x4804d992,"openfl.display3D._Context3DBlendFactor.Context3DBlendFactor_Impl_.toString","openfl/display3D/Context3DBlendFactor.hx",38,0xf89541c3)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(40)
	int tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(40)
	::String tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(40)
	switch( (int)(tmp)){
		case (int)0: {
			HX_STACK_LINE(42)
			tmp1 = HX_HCSTRING("destinationAlpha","\xf0","\x89","\x61","\x9b");
		}
		;break;
		case (int)1: {
			HX_STACK_LINE(43)
			tmp1 = HX_HCSTRING("destinationColor","\xf5","\x53","\x27","\xc4");
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(44)
			tmp1 = HX_HCSTRING("one","\x66","\x9a","\x54","\x00");
		}
		;break;
		case (int)3: {
			HX_STACK_LINE(45)
			tmp1 = HX_HCSTRING("oneMinusDestinationAlpha","\x3a","\xbe","\x1e","\xc3");
		}
		;break;
		case (int)4: {
			HX_STACK_LINE(46)
			tmp1 = HX_HCSTRING("oneMinusDestinationColor","\x3f","\x88","\xe4","\xeb");
		}
		;break;
		case (int)5: {
			HX_STACK_LINE(47)
			tmp1 = HX_HCSTRING("oneMinusSourceAlpha","\x79","\x9c","\xbf","\x0b");
		}
		;break;
		case (int)6: {
			HX_STACK_LINE(48)
			tmp1 = HX_HCSTRING("oneMinusSourceColor","\x7e","\x66","\x85","\x34");
		}
		;break;
		case (int)7: {
			HX_STACK_LINE(49)
			tmp1 = HX_HCSTRING("sourceAlpha","\x83","\x6c","\x9c","\x50");
		}
		;break;
		case (int)8: {
			HX_STACK_LINE(50)
			tmp1 = HX_HCSTRING("sourceColor","\x88","\x36","\x62","\x79");
		}
		;break;
		case (int)9: {
			HX_STACK_LINE(51)
			tmp1 = HX_HCSTRING("zero","\x28","\x0f","\xf1","\x50");
		}
		;break;
		default: {
			HX_STACK_LINE(52)
			tmp1 = null();
		}
	}
	HX_STACK_LINE(40)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Context3DBlendFactor_Impl__obj,toString,return )


Context3DBlendFactor_Impl__obj::Context3DBlendFactor_Impl__obj()
{
}

bool Context3DBlendFactor_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
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
	{hx::fsObject /*Dynamic*/ ,(void *) &Context3DBlendFactor_Impl__obj::DESTINATION_ALPHA,HX_HCSTRING("DESTINATION_ALPHA","\x6d","\x43","\xb1","\x78")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Context3DBlendFactor_Impl__obj::DESTINATION_COLOR,HX_HCSTRING("DESTINATION_COLOR","\x72","\x0d","\x77","\xa1")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Context3DBlendFactor_Impl__obj::ONE,HX_HCSTRING("ONE","\x46","\x36","\x3c","\x00")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Context3DBlendFactor_Impl__obj::ONE_MINUS_DESTINATION_ALPHA,HX_HCSTRING("ONE_MINUS_DESTINATION_ALPHA","\x45","\x78","\x81","\xd7")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Context3DBlendFactor_Impl__obj::ONE_MINUS_DESTINATION_COLOR,HX_HCSTRING("ONE_MINUS_DESTINATION_COLOR","\x4a","\x42","\x47","\x00")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Context3DBlendFactor_Impl__obj::ONE_MINUS_SOURCE_ALPHA,HX_HCSTRING("ONE_MINUS_SOURCE_ALPHA","\xc2","\x13","\x76","\x00")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Context3DBlendFactor_Impl__obj::ONE_MINUS_SOURCE_COLOR,HX_HCSTRING("ONE_MINUS_SOURCE_COLOR","\xc7","\xdd","\x3b","\x29")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Context3DBlendFactor_Impl__obj::SOURCE_ALPHA,HX_HCSTRING("SOURCE_ALPHA","\x9a","\x19","\xaa","\x48")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Context3DBlendFactor_Impl__obj::SOURCE_COLOR,HX_HCSTRING("SOURCE_COLOR","\x9f","\xe3","\x6f","\x71")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Context3DBlendFactor_Impl__obj::ZERO,HX_HCSTRING("ZERO","\x28","\xd7","\xb1","\x3b")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Context3DBlendFactor_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Context3DBlendFactor_Impl__obj::DESTINATION_ALPHA,"DESTINATION_ALPHA");
	HX_MARK_MEMBER_NAME(Context3DBlendFactor_Impl__obj::DESTINATION_COLOR,"DESTINATION_COLOR");
	HX_MARK_MEMBER_NAME(Context3DBlendFactor_Impl__obj::ONE,"ONE");
	HX_MARK_MEMBER_NAME(Context3DBlendFactor_Impl__obj::ONE_MINUS_DESTINATION_ALPHA,"ONE_MINUS_DESTINATION_ALPHA");
	HX_MARK_MEMBER_NAME(Context3DBlendFactor_Impl__obj::ONE_MINUS_DESTINATION_COLOR,"ONE_MINUS_DESTINATION_COLOR");
	HX_MARK_MEMBER_NAME(Context3DBlendFactor_Impl__obj::ONE_MINUS_SOURCE_ALPHA,"ONE_MINUS_SOURCE_ALPHA");
	HX_MARK_MEMBER_NAME(Context3DBlendFactor_Impl__obj::ONE_MINUS_SOURCE_COLOR,"ONE_MINUS_SOURCE_COLOR");
	HX_MARK_MEMBER_NAME(Context3DBlendFactor_Impl__obj::SOURCE_ALPHA,"SOURCE_ALPHA");
	HX_MARK_MEMBER_NAME(Context3DBlendFactor_Impl__obj::SOURCE_COLOR,"SOURCE_COLOR");
	HX_MARK_MEMBER_NAME(Context3DBlendFactor_Impl__obj::ZERO,"ZERO");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Context3DBlendFactor_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Context3DBlendFactor_Impl__obj::DESTINATION_ALPHA,"DESTINATION_ALPHA");
	HX_VISIT_MEMBER_NAME(Context3DBlendFactor_Impl__obj::DESTINATION_COLOR,"DESTINATION_COLOR");
	HX_VISIT_MEMBER_NAME(Context3DBlendFactor_Impl__obj::ONE,"ONE");
	HX_VISIT_MEMBER_NAME(Context3DBlendFactor_Impl__obj::ONE_MINUS_DESTINATION_ALPHA,"ONE_MINUS_DESTINATION_ALPHA");
	HX_VISIT_MEMBER_NAME(Context3DBlendFactor_Impl__obj::ONE_MINUS_DESTINATION_COLOR,"ONE_MINUS_DESTINATION_COLOR");
	HX_VISIT_MEMBER_NAME(Context3DBlendFactor_Impl__obj::ONE_MINUS_SOURCE_ALPHA,"ONE_MINUS_SOURCE_ALPHA");
	HX_VISIT_MEMBER_NAME(Context3DBlendFactor_Impl__obj::ONE_MINUS_SOURCE_COLOR,"ONE_MINUS_SOURCE_COLOR");
	HX_VISIT_MEMBER_NAME(Context3DBlendFactor_Impl__obj::SOURCE_ALPHA,"SOURCE_ALPHA");
	HX_VISIT_MEMBER_NAME(Context3DBlendFactor_Impl__obj::SOURCE_COLOR,"SOURCE_COLOR");
	HX_VISIT_MEMBER_NAME(Context3DBlendFactor_Impl__obj::ZERO,"ZERO");
};

#endif

hx::Class Context3DBlendFactor_Impl__obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("DESTINATION_ALPHA","\x6d","\x43","\xb1","\x78"),
	HX_HCSTRING("DESTINATION_COLOR","\x72","\x0d","\x77","\xa1"),
	HX_HCSTRING("ONE","\x46","\x36","\x3c","\x00"),
	HX_HCSTRING("ONE_MINUS_DESTINATION_ALPHA","\x45","\x78","\x81","\xd7"),
	HX_HCSTRING("ONE_MINUS_DESTINATION_COLOR","\x4a","\x42","\x47","\x00"),
	HX_HCSTRING("ONE_MINUS_SOURCE_ALPHA","\xc2","\x13","\x76","\x00"),
	HX_HCSTRING("ONE_MINUS_SOURCE_COLOR","\xc7","\xdd","\x3b","\x29"),
	HX_HCSTRING("SOURCE_ALPHA","\x9a","\x19","\xaa","\x48"),
	HX_HCSTRING("SOURCE_COLOR","\x9f","\xe3","\x6f","\x71"),
	HX_HCSTRING("ZERO","\x28","\xd7","\xb1","\x3b"),
	HX_HCSTRING("fromString","\xdb","\x2d","\x74","\x54"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null()) };

void Context3DBlendFactor_Impl__obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.display3D._Context3DBlendFactor.Context3DBlendFactor_Impl_","\x48","\x0c","\xfb","\xb2");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Context3DBlendFactor_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Context3DBlendFactor_Impl__obj >;
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

void Context3DBlendFactor_Impl__obj::__boot()
{
	DESTINATION_ALPHA= ((Dynamic)((int)0));
	DESTINATION_COLOR= ((Dynamic)((int)1));
	ONE= ((Dynamic)((int)2));
	ONE_MINUS_DESTINATION_ALPHA= ((Dynamic)((int)3));
	ONE_MINUS_DESTINATION_COLOR= ((Dynamic)((int)4));
	ONE_MINUS_SOURCE_ALPHA= ((Dynamic)((int)5));
	ONE_MINUS_SOURCE_COLOR= ((Dynamic)((int)6));
	SOURCE_ALPHA= ((Dynamic)((int)7));
	SOURCE_COLOR= ((Dynamic)((int)8));
	ZERO= ((Dynamic)((int)9));
}

} // end namespace openfl
} // end namespace display3D
} // end namespace _Context3DBlendFactor
