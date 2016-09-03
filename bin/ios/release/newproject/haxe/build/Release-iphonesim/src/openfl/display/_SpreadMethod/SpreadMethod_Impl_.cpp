#include <hxcpp.h>

#ifndef INCLUDED_openfl_display__SpreadMethod_SpreadMethod_Impl_
#include <openfl/display/_SpreadMethod/SpreadMethod_Impl_.h>
#endif
namespace openfl{
namespace display{
namespace _SpreadMethod{

Void SpreadMethod_Impl__obj::__construct()
{
	return null();
}

//SpreadMethod_Impl__obj::~SpreadMethod_Impl__obj() { }

Dynamic SpreadMethod_Impl__obj::__CreateEmpty() { return  new SpreadMethod_Impl__obj; }
hx::ObjectPtr< SpreadMethod_Impl__obj > SpreadMethod_Impl__obj::__new()
{  hx::ObjectPtr< SpreadMethod_Impl__obj > _result_ = new SpreadMethod_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic SpreadMethod_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SpreadMethod_Impl__obj > _result_ = new SpreadMethod_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic SpreadMethod_Impl__obj::PAD;

Dynamic SpreadMethod_Impl__obj::REFLECT;

Dynamic SpreadMethod_Impl__obj::REPEAT;

Dynamic SpreadMethod_Impl__obj::fromString( ::String value){
	HX_STACK_FRAME("openfl.display._SpreadMethod.SpreadMethod_Impl_","fromString",0xf9dd3790,"openfl.display._SpreadMethod.SpreadMethod_Impl_.fromString","openfl/display/SpreadMethod.hx",10,0x882c619e)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(12)
	::String tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(12)
	Dynamic tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(12)
	::String _switch_1 = (tmp);
	if (  ( _switch_1==HX_HCSTRING("pad","\x53","\x51","\x55","\x00"))){
		HX_STACK_LINE(14)
		tmp1 = ((Dynamic)((int)0));
	}
	else if (  ( _switch_1==HX_HCSTRING("reflect","\x3d","\x84","\x29","\xe9"))){
		HX_STACK_LINE(15)
		tmp1 = ((Dynamic)((int)1));
	}
	else if (  ( _switch_1==HX_HCSTRING("repeat","\x5b","\x97","\x7c","\x06"))){
		HX_STACK_LINE(16)
		tmp1 = ((Dynamic)((int)2));
	}
	else  {
		HX_STACK_LINE(17)
		tmp1 = null();
	}
;
;
	HX_STACK_LINE(12)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(SpreadMethod_Impl__obj,fromString,return )

::String SpreadMethod_Impl__obj::toString( int value){
	HX_STACK_FRAME("openfl.display._SpreadMethod.SpreadMethod_Impl_","toString",0x8d8a9321,"openfl.display._SpreadMethod.SpreadMethod_Impl_.toString","openfl/display/SpreadMethod.hx",23,0x882c619e)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(25)
	int tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(25)
	::String tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(25)
	switch( (int)(tmp)){
		case (int)0: {
			HX_STACK_LINE(27)
			tmp1 = HX_HCSTRING("pad","\x53","\x51","\x55","\x00");
		}
		;break;
		case (int)1: {
			HX_STACK_LINE(28)
			tmp1 = HX_HCSTRING("reflect","\x3d","\x84","\x29","\xe9");
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(29)
			tmp1 = HX_HCSTRING("repeat","\x5b","\x97","\x7c","\x06");
		}
		;break;
		default: {
			HX_STACK_LINE(30)
			tmp1 = null();
		}
	}
	HX_STACK_LINE(25)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(SpreadMethod_Impl__obj,toString,return )


SpreadMethod_Impl__obj::SpreadMethod_Impl__obj()
{
}

bool SpreadMethod_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
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
	{hx::fsObject /*Dynamic*/ ,(void *) &SpreadMethod_Impl__obj::PAD,HX_HCSTRING("PAD","\x33","\xed","\x3c","\x00")},
	{hx::fsObject /*Dynamic*/ ,(void *) &SpreadMethod_Impl__obj::REFLECT,HX_HCSTRING("REFLECT","\x1d","\x58","\xfd","\x68")},
	{hx::fsObject /*Dynamic*/ ,(void *) &SpreadMethod_Impl__obj::REPEAT,HX_HCSTRING("REPEAT","\x5b","\x43","\xff","\xb8")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SpreadMethod_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(SpreadMethod_Impl__obj::PAD,"PAD");
	HX_MARK_MEMBER_NAME(SpreadMethod_Impl__obj::REFLECT,"REFLECT");
	HX_MARK_MEMBER_NAME(SpreadMethod_Impl__obj::REPEAT,"REPEAT");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SpreadMethod_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(SpreadMethod_Impl__obj::PAD,"PAD");
	HX_VISIT_MEMBER_NAME(SpreadMethod_Impl__obj::REFLECT,"REFLECT");
	HX_VISIT_MEMBER_NAME(SpreadMethod_Impl__obj::REPEAT,"REPEAT");
};

#endif

hx::Class SpreadMethod_Impl__obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("PAD","\x33","\xed","\x3c","\x00"),
	HX_HCSTRING("REFLECT","\x1d","\x58","\xfd","\x68"),
	HX_HCSTRING("REPEAT","\x5b","\x43","\xff","\xb8"),
	HX_HCSTRING("fromString","\xdb","\x2d","\x74","\x54"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null()) };

void SpreadMethod_Impl__obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.display._SpreadMethod.SpreadMethod_Impl_","\x99","\xc0","\xee","\x8a");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &SpreadMethod_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< SpreadMethod_Impl__obj >;
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

void SpreadMethod_Impl__obj::__boot()
{
	PAD= ((Dynamic)((int)0));
	REFLECT= ((Dynamic)((int)1));
	REPEAT= ((Dynamic)((int)2));
}

} // end namespace openfl
} // end namespace display
} // end namespace _SpreadMethod
