#include <hxcpp.h>

#ifndef INCLUDED_openfl_display3D__Context3DStencilAction_Context3DStencilAction_Impl_
#include <openfl/display3D/_Context3DStencilAction/Context3DStencilAction_Impl_.h>
#endif
namespace openfl{
namespace display3D{
namespace _Context3DStencilAction{

Void Context3DStencilAction_Impl__obj::__construct()
{
	return null();
}

//Context3DStencilAction_Impl__obj::~Context3DStencilAction_Impl__obj() { }

Dynamic Context3DStencilAction_Impl__obj::__CreateEmpty() { return  new Context3DStencilAction_Impl__obj; }
hx::ObjectPtr< Context3DStencilAction_Impl__obj > Context3DStencilAction_Impl__obj::__new()
{  hx::ObjectPtr< Context3DStencilAction_Impl__obj > _result_ = new Context3DStencilAction_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic Context3DStencilAction_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Context3DStencilAction_Impl__obj > _result_ = new Context3DStencilAction_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic Context3DStencilAction_Impl__obj::DECREMENT_SATURATE;

Dynamic Context3DStencilAction_Impl__obj::DECREMENT_WRAP;

Dynamic Context3DStencilAction_Impl__obj::INCREMENT_SATURATE;

Dynamic Context3DStencilAction_Impl__obj::INCREMENT_WRAP;

Dynamic Context3DStencilAction_Impl__obj::INVERT;

Dynamic Context3DStencilAction_Impl__obj::KEEP;

Dynamic Context3DStencilAction_Impl__obj::SET;

Dynamic Context3DStencilAction_Impl__obj::ZERO;

Dynamic Context3DStencilAction_Impl__obj::fromString( ::String value){
	HX_STACK_FRAME("openfl.display3D._Context3DStencilAction.Context3DStencilAction_Impl_","fromString",0x85a5c581,"openfl.display3D._Context3DStencilAction.Context3DStencilAction_Impl_.fromString","openfl/display3D/Context3DStencilAction.hx",16,0x92be5171)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(18)
	::String tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(18)
	Dynamic tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(18)
	::String _switch_1 = (tmp);
	if (  ( _switch_1==HX_HCSTRING("decrementSaturate","\x22","\xcd","\x3b","\xf4"))){
		HX_STACK_LINE(20)
		tmp1 = ((Dynamic)((int)0));
	}
	else if (  ( _switch_1==HX_HCSTRING("decrementWrap","\x7d","\x61","\x2a","\xa2"))){
		HX_STACK_LINE(21)
		tmp1 = ((Dynamic)((int)1));
	}
	else if (  ( _switch_1==HX_HCSTRING("incrementSaturate","\x3e","\x59","\xb0","\x83"))){
		HX_STACK_LINE(22)
		tmp1 = ((Dynamic)((int)2));
	}
	else if (  ( _switch_1==HX_HCSTRING("incrementWrap","\x99","\xaf","\xa7","\x4e"))){
		HX_STACK_LINE(23)
		tmp1 = ((Dynamic)((int)3));
	}
	else if (  ( _switch_1==HX_HCSTRING("invert","\x16","\xe7","\xd8","\x9f"))){
		HX_STACK_LINE(24)
		tmp1 = ((Dynamic)((int)4));
	}
	else if (  ( _switch_1==HX_HCSTRING("keep","\x85","\xd0","\x06","\x47"))){
		HX_STACK_LINE(25)
		tmp1 = ((Dynamic)((int)5));
	}
	else if (  ( _switch_1==HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"))){
		HX_STACK_LINE(26)
		tmp1 = ((Dynamic)((int)6));
	}
	else if (  ( _switch_1==HX_HCSTRING("zero","\x28","\x0f","\xf1","\x50"))){
		HX_STACK_LINE(27)
		tmp1 = ((Dynamic)((int)7));
	}
	else  {
		HX_STACK_LINE(28)
		tmp1 = null();
	}
;
;
	HX_STACK_LINE(18)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Context3DStencilAction_Impl__obj,fromString,return )

::String Context3DStencilAction_Impl__obj::toString( int value){
	HX_STACK_FRAME("openfl.display3D._Context3DStencilAction.Context3DStencilAction_Impl_","toString",0x776f12d2,"openfl.display3D._Context3DStencilAction.Context3DStencilAction_Impl_.toString","openfl/display3D/Context3DStencilAction.hx",34,0x92be5171)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(36)
	int tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(36)
	::String tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(36)
	switch( (int)(tmp)){
		case (int)0: {
			HX_STACK_LINE(38)
			tmp1 = HX_HCSTRING("decrementSaturate","\x22","\xcd","\x3b","\xf4");
		}
		;break;
		case (int)1: {
			HX_STACK_LINE(39)
			tmp1 = HX_HCSTRING("decrementWrap","\x7d","\x61","\x2a","\xa2");
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(40)
			tmp1 = HX_HCSTRING("incrementSaturate","\x3e","\x59","\xb0","\x83");
		}
		;break;
		case (int)3: {
			HX_STACK_LINE(41)
			tmp1 = HX_HCSTRING("incrementWrap","\x99","\xaf","\xa7","\x4e");
		}
		;break;
		case (int)4: {
			HX_STACK_LINE(42)
			tmp1 = HX_HCSTRING("invert","\x16","\xe7","\xd8","\x9f");
		}
		;break;
		case (int)5: {
			HX_STACK_LINE(43)
			tmp1 = HX_HCSTRING("keep","\x85","\xd0","\x06","\x47");
		}
		;break;
		case (int)6: {
			HX_STACK_LINE(44)
			tmp1 = HX_HCSTRING("set","\xa2","\x9b","\x57","\x00");
		}
		;break;
		case (int)7: {
			HX_STACK_LINE(45)
			tmp1 = HX_HCSTRING("zero","\x28","\x0f","\xf1","\x50");
		}
		;break;
		default: {
			HX_STACK_LINE(46)
			tmp1 = null();
		}
	}
	HX_STACK_LINE(36)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Context3DStencilAction_Impl__obj,toString,return )


Context3DStencilAction_Impl__obj::Context3DStencilAction_Impl__obj()
{
}

bool Context3DStencilAction_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
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
	{hx::fsObject /*Dynamic*/ ,(void *) &Context3DStencilAction_Impl__obj::DECREMENT_SATURATE,HX_HCSTRING("DECREMENT_SATURATE","\xfb","\x9a","\x33","\xb0")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Context3DStencilAction_Impl__obj::DECREMENT_WRAP,HX_HCSTRING("DECREMENT_WRAP","\xd6","\x46","\xe1","\xde")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Context3DStencilAction_Impl__obj::INCREMENT_SATURATE,HX_HCSTRING("INCREMENT_SATURATE","\x5f","\xa7","\xb9","\xa6")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Context3DStencilAction_Impl__obj::INCREMENT_WRAP,HX_HCSTRING("INCREMENT_WRAP","\x3a","\x51","\x08","\x20")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Context3DStencilAction_Impl__obj::INVERT,HX_HCSTRING("INVERT","\x16","\x93","\x5b","\x52")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Context3DStencilAction_Impl__obj::KEEP,HX_HCSTRING("KEEP","\x85","\x98","\xc7","\x31")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Context3DStencilAction_Impl__obj::SET,HX_HCSTRING("SET","\x82","\x37","\x3f","\x00")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Context3DStencilAction_Impl__obj::ZERO,HX_HCSTRING("ZERO","\x28","\xd7","\xb1","\x3b")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Context3DStencilAction_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Context3DStencilAction_Impl__obj::DECREMENT_SATURATE,"DECREMENT_SATURATE");
	HX_MARK_MEMBER_NAME(Context3DStencilAction_Impl__obj::DECREMENT_WRAP,"DECREMENT_WRAP");
	HX_MARK_MEMBER_NAME(Context3DStencilAction_Impl__obj::INCREMENT_SATURATE,"INCREMENT_SATURATE");
	HX_MARK_MEMBER_NAME(Context3DStencilAction_Impl__obj::INCREMENT_WRAP,"INCREMENT_WRAP");
	HX_MARK_MEMBER_NAME(Context3DStencilAction_Impl__obj::INVERT,"INVERT");
	HX_MARK_MEMBER_NAME(Context3DStencilAction_Impl__obj::KEEP,"KEEP");
	HX_MARK_MEMBER_NAME(Context3DStencilAction_Impl__obj::SET,"SET");
	HX_MARK_MEMBER_NAME(Context3DStencilAction_Impl__obj::ZERO,"ZERO");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Context3DStencilAction_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Context3DStencilAction_Impl__obj::DECREMENT_SATURATE,"DECREMENT_SATURATE");
	HX_VISIT_MEMBER_NAME(Context3DStencilAction_Impl__obj::DECREMENT_WRAP,"DECREMENT_WRAP");
	HX_VISIT_MEMBER_NAME(Context3DStencilAction_Impl__obj::INCREMENT_SATURATE,"INCREMENT_SATURATE");
	HX_VISIT_MEMBER_NAME(Context3DStencilAction_Impl__obj::INCREMENT_WRAP,"INCREMENT_WRAP");
	HX_VISIT_MEMBER_NAME(Context3DStencilAction_Impl__obj::INVERT,"INVERT");
	HX_VISIT_MEMBER_NAME(Context3DStencilAction_Impl__obj::KEEP,"KEEP");
	HX_VISIT_MEMBER_NAME(Context3DStencilAction_Impl__obj::SET,"SET");
	HX_VISIT_MEMBER_NAME(Context3DStencilAction_Impl__obj::ZERO,"ZERO");
};

#endif

hx::Class Context3DStencilAction_Impl__obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("DECREMENT_SATURATE","\xfb","\x9a","\x33","\xb0"),
	HX_HCSTRING("DECREMENT_WRAP","\xd6","\x46","\xe1","\xde"),
	HX_HCSTRING("INCREMENT_SATURATE","\x5f","\xa7","\xb9","\xa6"),
	HX_HCSTRING("INCREMENT_WRAP","\x3a","\x51","\x08","\x20"),
	HX_HCSTRING("INVERT","\x16","\x93","\x5b","\x52"),
	HX_HCSTRING("KEEP","\x85","\x98","\xc7","\x31"),
	HX_HCSTRING("SET","\x82","\x37","\x3f","\x00"),
	HX_HCSTRING("ZERO","\x28","\xd7","\xb1","\x3b"),
	HX_HCSTRING("fromString","\xdb","\x2d","\x74","\x54"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null()) };

void Context3DStencilAction_Impl__obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.display3D._Context3DStencilAction.Context3DStencilAction_Impl_","\x08","\xfb","\xbc","\xf6");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Context3DStencilAction_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Context3DStencilAction_Impl__obj >;
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

void Context3DStencilAction_Impl__obj::__boot()
{
	DECREMENT_SATURATE= ((Dynamic)((int)0));
	DECREMENT_WRAP= ((Dynamic)((int)1));
	INCREMENT_SATURATE= ((Dynamic)((int)2));
	INCREMENT_WRAP= ((Dynamic)((int)3));
	INVERT= ((Dynamic)((int)4));
	KEEP= ((Dynamic)((int)5));
	SET= ((Dynamic)((int)6));
	ZERO= ((Dynamic)((int)7));
}

} // end namespace openfl
} // end namespace display3D
} // end namespace _Context3DStencilAction
