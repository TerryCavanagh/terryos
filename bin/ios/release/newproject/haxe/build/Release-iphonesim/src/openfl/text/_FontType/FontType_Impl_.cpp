#include <hxcpp.h>

#ifndef INCLUDED_openfl_text__FontType_FontType_Impl_
#include <openfl/text/_FontType/FontType_Impl_.h>
#endif
namespace openfl{
namespace text{
namespace _FontType{

Void FontType_Impl__obj::__construct()
{
	return null();
}

//FontType_Impl__obj::~FontType_Impl__obj() { }

Dynamic FontType_Impl__obj::__CreateEmpty() { return  new FontType_Impl__obj; }
hx::ObjectPtr< FontType_Impl__obj > FontType_Impl__obj::__new()
{  hx::ObjectPtr< FontType_Impl__obj > _result_ = new FontType_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic FontType_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FontType_Impl__obj > _result_ = new FontType_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic FontType_Impl__obj::DEVICE;

Dynamic FontType_Impl__obj::EMBEDDED;

Dynamic FontType_Impl__obj::EMBEDDED_CFF;

Dynamic FontType_Impl__obj::fromString( ::String value){
	HX_STACK_FRAME("openfl.text._FontType.FontType_Impl_","fromString",0x1af62497,"openfl.text._FontType.FontType_Impl_.fromString","openfl/text/FontType.hx",10,0xc9ae6f12)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(12)
	::String tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(12)
	Dynamic tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(12)
	::String _switch_1 = (tmp);
	if (  ( _switch_1==HX_HCSTRING("device","\x96","\xdc","\x77","\x71"))){
		HX_STACK_LINE(14)
		tmp1 = ((Dynamic)((int)0));
	}
	else if (  ( _switch_1==HX_HCSTRING("embedded","\x8a","\x19","\x62","\xde"))){
		HX_STACK_LINE(15)
		tmp1 = ((Dynamic)((int)1));
	}
	else if (  ( _switch_1==HX_HCSTRING("embeddedCFF","\xf9","\x0c","\x9e","\xac"))){
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


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FontType_Impl__obj,fromString,return )

::String FontType_Impl__obj::toString( int value){
	HX_STACK_FRAME("openfl.text._FontType.FontType_Impl_","toString",0xa3a06068,"openfl.text._FontType.FontType_Impl_.toString","openfl/text/FontType.hx",23,0xc9ae6f12)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(25)
	int tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(25)
	::String tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(25)
	switch( (int)(tmp)){
		case (int)0: {
			HX_STACK_LINE(27)
			tmp1 = HX_HCSTRING("device","\x96","\xdc","\x77","\x71");
		}
		;break;
		case (int)1: {
			HX_STACK_LINE(28)
			tmp1 = HX_HCSTRING("embedded","\x8a","\x19","\x62","\xde");
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(29)
			tmp1 = HX_HCSTRING("embeddedCFF","\xf9","\x0c","\x9e","\xac");
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


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FontType_Impl__obj,toString,return )


FontType_Impl__obj::FontType_Impl__obj()
{
}

bool FontType_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
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
	{hx::fsObject /*Dynamic*/ ,(void *) &FontType_Impl__obj::DEVICE,HX_HCSTRING("DEVICE","\x96","\x88","\xfa","\x23")},
	{hx::fsObject /*Dynamic*/ ,(void *) &FontType_Impl__obj::EMBEDDED,HX_HCSTRING("EMBEDDED","\x8a","\xa9","\xe7","\x37")},
	{hx::fsObject /*Dynamic*/ ,(void *) &FontType_Impl__obj::EMBEDDED_CFF,HX_HCSTRING("EMBEDDED_CFF","\xce","\x8f","\xba","\x23")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FontType_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FontType_Impl__obj::DEVICE,"DEVICE");
	HX_MARK_MEMBER_NAME(FontType_Impl__obj::EMBEDDED,"EMBEDDED");
	HX_MARK_MEMBER_NAME(FontType_Impl__obj::EMBEDDED_CFF,"EMBEDDED_CFF");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FontType_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FontType_Impl__obj::DEVICE,"DEVICE");
	HX_VISIT_MEMBER_NAME(FontType_Impl__obj::EMBEDDED,"EMBEDDED");
	HX_VISIT_MEMBER_NAME(FontType_Impl__obj::EMBEDDED_CFF,"EMBEDDED_CFF");
};

#endif

hx::Class FontType_Impl__obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("DEVICE","\x96","\x88","\xfa","\x23"),
	HX_HCSTRING("EMBEDDED","\x8a","\xa9","\xe7","\x37"),
	HX_HCSTRING("EMBEDDED_CFF","\xce","\x8f","\xba","\x23"),
	HX_HCSTRING("fromString","\xdb","\x2d","\x74","\x54"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null()) };

void FontType_Impl__obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.text._FontType.FontType_Impl_","\x32","\xb8","\x83","\xe8");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FontType_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< FontType_Impl__obj >;
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

void FontType_Impl__obj::__boot()
{
	DEVICE= ((Dynamic)((int)0));
	EMBEDDED= ((Dynamic)((int)1));
	EMBEDDED_CFF= ((Dynamic)((int)2));
}

} // end namespace openfl
} // end namespace text
} // end namespace _FontType
