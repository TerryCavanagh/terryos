#include <hxcpp.h>

#ifndef INCLUDED_openfl_display3D__Context3DCompareMode_Context3DCompareMode_Impl_
#include <openfl/display3D/_Context3DCompareMode/Context3DCompareMode_Impl_.h>
#endif
namespace openfl{
namespace display3D{
namespace _Context3DCompareMode{

Void Context3DCompareMode_Impl__obj::__construct()
{
	return null();
}

//Context3DCompareMode_Impl__obj::~Context3DCompareMode_Impl__obj() { }

Dynamic Context3DCompareMode_Impl__obj::__CreateEmpty() { return  new Context3DCompareMode_Impl__obj; }
hx::ObjectPtr< Context3DCompareMode_Impl__obj > Context3DCompareMode_Impl__obj::__new()
{  hx::ObjectPtr< Context3DCompareMode_Impl__obj > _result_ = new Context3DCompareMode_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic Context3DCompareMode_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Context3DCompareMode_Impl__obj > _result_ = new Context3DCompareMode_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic Context3DCompareMode_Impl__obj::ALWAYS;

Dynamic Context3DCompareMode_Impl__obj::EQUAL;

Dynamic Context3DCompareMode_Impl__obj::GREATER;

Dynamic Context3DCompareMode_Impl__obj::GREATER_EQUAL;

Dynamic Context3DCompareMode_Impl__obj::LESS;

Dynamic Context3DCompareMode_Impl__obj::LESS_EQUAL;

Dynamic Context3DCompareMode_Impl__obj::NEVER;

Dynamic Context3DCompareMode_Impl__obj::NOT_EQUAL;

Dynamic Context3DCompareMode_Impl__obj::fromString( ::String value){
	HX_STACK_FRAME("openfl.display3D._Context3DCompareMode.Context3DCompareMode_Impl_","fromString",0x9ed2cd41,"openfl.display3D._Context3DCompareMode.Context3DCompareMode_Impl_.fromString","openfl/display3D/Context3DCompareMode.hx",16,0x9103941b)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(18)
	::String tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(18)
	Dynamic tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(18)
	::String _switch_1 = (tmp);
	if (  ( _switch_1==HX_HCSTRING("always","\xcf","\x0e","\xd7","\x46"))){
		HX_STACK_LINE(20)
		tmp1 = ((Dynamic)((int)0));
	}
	else if (  ( _switch_1==HX_HCSTRING("equal","\xb4","\xcf","\x82","\x72"))){
		HX_STACK_LINE(21)
		tmp1 = ((Dynamic)((int)1));
	}
	else if (  ( _switch_1==HX_HCSTRING("greater","\xfa","\x90","\xc0","\xb7"))){
		HX_STACK_LINE(22)
		tmp1 = ((Dynamic)((int)2));
	}
	else if (  ( _switch_1==HX_HCSTRING("greaterEqual","\x5a","\xe4","\x1d","\x8f"))){
		HX_STACK_LINE(23)
		tmp1 = ((Dynamic)((int)3));
	}
	else if (  ( _switch_1==HX_HCSTRING("less","\x59","\x13","\xb0","\x47"))){
		HX_STACK_LINE(24)
		tmp1 = ((Dynamic)((int)4));
	}
	else if (  ( _switch_1==HX_HCSTRING("lessEqual","\x9b","\x69","\x9e","\x3d"))){
		HX_STACK_LINE(25)
		tmp1 = ((Dynamic)((int)5));
	}
	else if (  ( _switch_1==HX_HCSTRING("never","\x8c","\x3e","\x30","\x99"))){
		HX_STACK_LINE(26)
		tmp1 = ((Dynamic)((int)6));
	}
	else if (  ( _switch_1==HX_HCSTRING("notEqual","\xa1","\xa1","\x91","\x02"))){
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


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Context3DCompareMode_Impl__obj,fromString,return )

::String Context3DCompareMode_Impl__obj::toString( int value){
	HX_STACK_FRAME("openfl.display3D._Context3DCompareMode.Context3DCompareMode_Impl_","toString",0xbdb6aa92,"openfl.display3D._Context3DCompareMode.Context3DCompareMode_Impl_.toString","openfl/display3D/Context3DCompareMode.hx",34,0x9103941b)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(36)
	int tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(36)
	::String tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(36)
	switch( (int)(tmp)){
		case (int)0: {
			HX_STACK_LINE(38)
			tmp1 = HX_HCSTRING("always","\xcf","\x0e","\xd7","\x46");
		}
		;break;
		case (int)1: {
			HX_STACK_LINE(39)
			tmp1 = HX_HCSTRING("equal","\xb4","\xcf","\x82","\x72");
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(40)
			tmp1 = HX_HCSTRING("greater","\xfa","\x90","\xc0","\xb7");
		}
		;break;
		case (int)3: {
			HX_STACK_LINE(41)
			tmp1 = HX_HCSTRING("greaterEqual","\x5a","\xe4","\x1d","\x8f");
		}
		;break;
		case (int)4: {
			HX_STACK_LINE(42)
			tmp1 = HX_HCSTRING("less","\x59","\x13","\xb0","\x47");
		}
		;break;
		case (int)5: {
			HX_STACK_LINE(43)
			tmp1 = HX_HCSTRING("lessEqual","\x9b","\x69","\x9e","\x3d");
		}
		;break;
		case (int)6: {
			HX_STACK_LINE(44)
			tmp1 = HX_HCSTRING("never","\x8c","\x3e","\x30","\x99");
		}
		;break;
		case (int)7: {
			HX_STACK_LINE(45)
			tmp1 = HX_HCSTRING("notEqual","\xa1","\xa1","\x91","\x02");
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


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Context3DCompareMode_Impl__obj,toString,return )


Context3DCompareMode_Impl__obj::Context3DCompareMode_Impl__obj()
{
}

bool Context3DCompareMode_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
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
	{hx::fsObject /*Dynamic*/ ,(void *) &Context3DCompareMode_Impl__obj::ALWAYS,HX_HCSTRING("ALWAYS","\xcf","\xba","\x59","\xf9")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Context3DCompareMode_Impl__obj::EQUAL,HX_HCSTRING("EQUAL","\x94","\x07","\x71","\xf0")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Context3DCompareMode_Impl__obj::GREATER,HX_HCSTRING("GREATER","\xda","\x64","\x94","\x37")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Context3DCompareMode_Impl__obj::GREATER_EQUAL,HX_HCSTRING("GREATER_EQUAL","\x2f","\xd3","\x96","\xd6")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Context3DCompareMode_Impl__obj::LESS,HX_HCSTRING("LESS","\x59","\xdb","\x70","\x32")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Context3DCompareMode_Impl__obj::LESS_EQUAL,HX_HCSTRING("LESS_EQUAL","\xee","\xb2","\x55","\xe4")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Context3DCompareMode_Impl__obj::NEVER,HX_HCSTRING("NEVER","\x6c","\x76","\x1e","\x17")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Context3DCompareMode_Impl__obj::NOT_EQUAL,HX_HCSTRING("NOT_EQUAL","\x08","\x7c","\x82","\x7d")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Context3DCompareMode_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Context3DCompareMode_Impl__obj::ALWAYS,"ALWAYS");
	HX_MARK_MEMBER_NAME(Context3DCompareMode_Impl__obj::EQUAL,"EQUAL");
	HX_MARK_MEMBER_NAME(Context3DCompareMode_Impl__obj::GREATER,"GREATER");
	HX_MARK_MEMBER_NAME(Context3DCompareMode_Impl__obj::GREATER_EQUAL,"GREATER_EQUAL");
	HX_MARK_MEMBER_NAME(Context3DCompareMode_Impl__obj::LESS,"LESS");
	HX_MARK_MEMBER_NAME(Context3DCompareMode_Impl__obj::LESS_EQUAL,"LESS_EQUAL");
	HX_MARK_MEMBER_NAME(Context3DCompareMode_Impl__obj::NEVER,"NEVER");
	HX_MARK_MEMBER_NAME(Context3DCompareMode_Impl__obj::NOT_EQUAL,"NOT_EQUAL");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Context3DCompareMode_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Context3DCompareMode_Impl__obj::ALWAYS,"ALWAYS");
	HX_VISIT_MEMBER_NAME(Context3DCompareMode_Impl__obj::EQUAL,"EQUAL");
	HX_VISIT_MEMBER_NAME(Context3DCompareMode_Impl__obj::GREATER,"GREATER");
	HX_VISIT_MEMBER_NAME(Context3DCompareMode_Impl__obj::GREATER_EQUAL,"GREATER_EQUAL");
	HX_VISIT_MEMBER_NAME(Context3DCompareMode_Impl__obj::LESS,"LESS");
	HX_VISIT_MEMBER_NAME(Context3DCompareMode_Impl__obj::LESS_EQUAL,"LESS_EQUAL");
	HX_VISIT_MEMBER_NAME(Context3DCompareMode_Impl__obj::NEVER,"NEVER");
	HX_VISIT_MEMBER_NAME(Context3DCompareMode_Impl__obj::NOT_EQUAL,"NOT_EQUAL");
};

#endif

hx::Class Context3DCompareMode_Impl__obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("ALWAYS","\xcf","\xba","\x59","\xf9"),
	HX_HCSTRING("EQUAL","\x94","\x07","\x71","\xf0"),
	HX_HCSTRING("GREATER","\xda","\x64","\x94","\x37"),
	HX_HCSTRING("GREATER_EQUAL","\x2f","\xd3","\x96","\xd6"),
	HX_HCSTRING("LESS","\x59","\xdb","\x70","\x32"),
	HX_HCSTRING("LESS_EQUAL","\xee","\xb2","\x55","\xe4"),
	HX_HCSTRING("NEVER","\x6c","\x76","\x1e","\x17"),
	HX_HCSTRING("NOT_EQUAL","\x08","\x7c","\x82","\x7d"),
	HX_HCSTRING("fromString","\xdb","\x2d","\x74","\x54"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null()) };

void Context3DCompareMode_Impl__obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.display3D._Context3DCompareMode.Context3DCompareMode_Impl_","\x48","\x5b","\xc7","\x5e");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Context3DCompareMode_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Context3DCompareMode_Impl__obj >;
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

void Context3DCompareMode_Impl__obj::__boot()
{
	ALWAYS= ((Dynamic)((int)0));
	EQUAL= ((Dynamic)((int)1));
	GREATER= ((Dynamic)((int)2));
	GREATER_EQUAL= ((Dynamic)((int)3));
	LESS= ((Dynamic)((int)4));
	LESS_EQUAL= ((Dynamic)((int)5));
	NEVER= ((Dynamic)((int)6));
	NOT_EQUAL= ((Dynamic)((int)7));
}

} // end namespace openfl
} // end namespace display3D
} // end namespace _Context3DCompareMode
