#include <hxcpp.h>

#ifndef INCLUDED_openfl_display__LineScaleMode_LineScaleMode_Impl_
#include <openfl/display/_LineScaleMode/LineScaleMode_Impl_.h>
#endif
namespace openfl{
namespace display{
namespace _LineScaleMode{

Void LineScaleMode_Impl__obj::__construct()
{
	return null();
}

//LineScaleMode_Impl__obj::~LineScaleMode_Impl__obj() { }

Dynamic LineScaleMode_Impl__obj::__CreateEmpty() { return  new LineScaleMode_Impl__obj; }
hx::ObjectPtr< LineScaleMode_Impl__obj > LineScaleMode_Impl__obj::__new()
{  hx::ObjectPtr< LineScaleMode_Impl__obj > _result_ = new LineScaleMode_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic LineScaleMode_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< LineScaleMode_Impl__obj > _result_ = new LineScaleMode_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic LineScaleMode_Impl__obj::HORIZONTAL;

Dynamic LineScaleMode_Impl__obj::NONE;

Dynamic LineScaleMode_Impl__obj::NORMAL;

Dynamic LineScaleMode_Impl__obj::VERTICAL;

Dynamic LineScaleMode_Impl__obj::fromString( ::String value){
	HX_STACK_FRAME("openfl.display._LineScaleMode.LineScaleMode_Impl_","fromString",0x5d04613a,"openfl.display._LineScaleMode.LineScaleMode_Impl_.fromString","openfl/display/LineScaleMode.hx",11,0x274c8551)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(13)
	::String tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(13)
	Dynamic tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(13)
	::String _switch_1 = (tmp);
	if (  ( _switch_1==HX_HCSTRING("horizontal","\xe4","\xfc","\xc3","\x15"))){
		HX_STACK_LINE(15)
		tmp1 = ((Dynamic)((int)0));
	}
	else if (  ( _switch_1==HX_HCSTRING("none","\xb8","\x12","\x0a","\x49"))){
		HX_STACK_LINE(16)
		tmp1 = ((Dynamic)((int)1));
	}
	else if (  ( _switch_1==HX_HCSTRING("normal","\x27","\x72","\x69","\x30"))){
		HX_STACK_LINE(17)
		tmp1 = ((Dynamic)((int)2));
	}
	else if (  ( _switch_1==HX_HCSTRING("vertical","\x76","\xbc","\x15","\x6a"))){
		HX_STACK_LINE(18)
		tmp1 = ((Dynamic)((int)3));
	}
	else  {
		HX_STACK_LINE(19)
		tmp1 = null();
	}
;
;
	HX_STACK_LINE(13)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(LineScaleMode_Impl__obj,fromString,return )

::String LineScaleMode_Impl__obj::toString( int value){
	HX_STACK_FRAME("openfl.display._LineScaleMode.LineScaleMode_Impl_","toString",0x67991e4b,"openfl.display._LineScaleMode.LineScaleMode_Impl_.toString","openfl/display/LineScaleMode.hx",25,0x274c8551)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(27)
	int tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(27)
	::String tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(27)
	switch( (int)(tmp)){
		case (int)0: {
			HX_STACK_LINE(29)
			tmp1 = HX_HCSTRING("horizontal","\xe4","\xfc","\xc3","\x15");
		}
		;break;
		case (int)1: {
			HX_STACK_LINE(30)
			tmp1 = HX_HCSTRING("none","\xb8","\x12","\x0a","\x49");
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(31)
			tmp1 = HX_HCSTRING("normal","\x27","\x72","\x69","\x30");
		}
		;break;
		case (int)3: {
			HX_STACK_LINE(32)
			tmp1 = HX_HCSTRING("vertical","\x76","\xbc","\x15","\x6a");
		}
		;break;
		default: {
			HX_STACK_LINE(33)
			tmp1 = null();
		}
	}
	HX_STACK_LINE(27)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(LineScaleMode_Impl__obj,toString,return )


LineScaleMode_Impl__obj::LineScaleMode_Impl__obj()
{
}

bool LineScaleMode_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
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
	{hx::fsObject /*Dynamic*/ ,(void *) &LineScaleMode_Impl__obj::HORIZONTAL,HX_HCSTRING("HORIZONTAL","\xe4","\x70","\xcd","\x07")},
	{hx::fsObject /*Dynamic*/ ,(void *) &LineScaleMode_Impl__obj::NONE,HX_HCSTRING("NONE","\xb8","\xda","\xca","\x33")},
	{hx::fsObject /*Dynamic*/ ,(void *) &LineScaleMode_Impl__obj::NORMAL,HX_HCSTRING("NORMAL","\x27","\x1e","\xec","\xe2")},
	{hx::fsObject /*Dynamic*/ ,(void *) &LineScaleMode_Impl__obj::VERTICAL,HX_HCSTRING("VERTICAL","\x76","\x4c","\x9b","\xc3")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(LineScaleMode_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(LineScaleMode_Impl__obj::HORIZONTAL,"HORIZONTAL");
	HX_MARK_MEMBER_NAME(LineScaleMode_Impl__obj::NONE,"NONE");
	HX_MARK_MEMBER_NAME(LineScaleMode_Impl__obj::NORMAL,"NORMAL");
	HX_MARK_MEMBER_NAME(LineScaleMode_Impl__obj::VERTICAL,"VERTICAL");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(LineScaleMode_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(LineScaleMode_Impl__obj::HORIZONTAL,"HORIZONTAL");
	HX_VISIT_MEMBER_NAME(LineScaleMode_Impl__obj::NONE,"NONE");
	HX_VISIT_MEMBER_NAME(LineScaleMode_Impl__obj::NORMAL,"NORMAL");
	HX_VISIT_MEMBER_NAME(LineScaleMode_Impl__obj::VERTICAL,"VERTICAL");
};

#endif

hx::Class LineScaleMode_Impl__obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("HORIZONTAL","\xe4","\x70","\xcd","\x07"),
	HX_HCSTRING("NONE","\xb8","\xda","\xca","\x33"),
	HX_HCSTRING("NORMAL","\x27","\x1e","\xec","\xe2"),
	HX_HCSTRING("VERTICAL","\x76","\x4c","\x9b","\xc3"),
	HX_HCSTRING("fromString","\xdb","\x2d","\x74","\x54"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null()) };

void LineScaleMode_Impl__obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.display._LineScaleMode.LineScaleMode_Impl_","\xaf","\x42","\x46","\x85");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &LineScaleMode_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< LineScaleMode_Impl__obj >;
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

void LineScaleMode_Impl__obj::__boot()
{
	HORIZONTAL= ((Dynamic)((int)0));
	NONE= ((Dynamic)((int)1));
	NORMAL= ((Dynamic)((int)2));
	VERTICAL= ((Dynamic)((int)3));
}

} // end namespace openfl
} // end namespace display
} // end namespace _LineScaleMode
