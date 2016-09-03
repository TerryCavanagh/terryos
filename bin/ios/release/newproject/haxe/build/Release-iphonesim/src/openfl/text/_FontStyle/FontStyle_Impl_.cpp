#include <hxcpp.h>

#ifndef INCLUDED_openfl_text__FontStyle_FontStyle_Impl_
#include <openfl/text/_FontStyle/FontStyle_Impl_.h>
#endif
namespace openfl{
namespace text{
namespace _FontStyle{

Void FontStyle_Impl__obj::__construct()
{
	return null();
}

//FontStyle_Impl__obj::~FontStyle_Impl__obj() { }

Dynamic FontStyle_Impl__obj::__CreateEmpty() { return  new FontStyle_Impl__obj; }
hx::ObjectPtr< FontStyle_Impl__obj > FontStyle_Impl__obj::__new()
{  hx::ObjectPtr< FontStyle_Impl__obj > _result_ = new FontStyle_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic FontStyle_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FontStyle_Impl__obj > _result_ = new FontStyle_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic FontStyle_Impl__obj::BOLD;

Dynamic FontStyle_Impl__obj::BOLD_ITALIC;

Dynamic FontStyle_Impl__obj::ITALIC;

Dynamic FontStyle_Impl__obj::REGULAR;

Dynamic FontStyle_Impl__obj::fromString( ::String value){
	HX_STACK_FRAME("openfl.text._FontStyle.FontStyle_Impl_","fromString",0x9783fd8f,"openfl.text._FontStyle.FontStyle_Impl_.fromString","openfl/text/FontStyle.hx",11,0x6b07f79f)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(13)
	::String tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(13)
	Dynamic tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(13)
	::String _switch_1 = (tmp);
	if (  ( _switch_1==HX_HCSTRING("bold","\x85","\x81","\x1b","\x41"))){
		HX_STACK_LINE(15)
		tmp1 = ((Dynamic)((int)0));
	}
	else if (  ( _switch_1==HX_HCSTRING("boldItalic","\x55","\x96","\xd1","\xad"))){
		HX_STACK_LINE(16)
		tmp1 = ((Dynamic)((int)1));
	}
	else if (  ( _switch_1==HX_HCSTRING("italic","\xf0","\x2e","\x64","\x06"))){
		HX_STACK_LINE(17)
		tmp1 = ((Dynamic)((int)2));
	}
	else if (  ( _switch_1==HX_HCSTRING("regular","\x5c","\x52","\x88","\x82"))){
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


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FontStyle_Impl__obj,fromString,return )

::String FontStyle_Impl__obj::toString( int value){
	HX_STACK_FRAME("openfl.text._FontStyle.FontStyle_Impl_","toString",0x0cd38b60,"openfl.text._FontStyle.FontStyle_Impl_.toString","openfl/text/FontStyle.hx",25,0x6b07f79f)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(27)
	int tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(27)
	::String tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(27)
	switch( (int)(tmp)){
		case (int)0: {
			HX_STACK_LINE(29)
			tmp1 = HX_HCSTRING("bold","\x85","\x81","\x1b","\x41");
		}
		;break;
		case (int)1: {
			HX_STACK_LINE(30)
			tmp1 = HX_HCSTRING("boldItalic","\x55","\x96","\xd1","\xad");
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(31)
			tmp1 = HX_HCSTRING("italic","\xf0","\x2e","\x64","\x06");
		}
		;break;
		case (int)3: {
			HX_STACK_LINE(32)
			tmp1 = HX_HCSTRING("regular","\x5c","\x52","\x88","\x82");
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


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FontStyle_Impl__obj,toString,return )


FontStyle_Impl__obj::FontStyle_Impl__obj()
{
}

bool FontStyle_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
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
	{hx::fsObject /*Dynamic*/ ,(void *) &FontStyle_Impl__obj::BOLD,HX_HCSTRING("BOLD","\x85","\x49","\xdc","\x2b")},
	{hx::fsObject /*Dynamic*/ ,(void *) &FontStyle_Impl__obj::BOLD_ITALIC,HX_HCSTRING("BOLD_ITALIC","\xaa","\x0d","\xc2","\x88")},
	{hx::fsObject /*Dynamic*/ ,(void *) &FontStyle_Impl__obj::ITALIC,HX_HCSTRING("ITALIC","\xf0","\xda","\xe6","\xb8")},
	{hx::fsObject /*Dynamic*/ ,(void *) &FontStyle_Impl__obj::REGULAR,HX_HCSTRING("REGULAR","\x3c","\x26","\x5c","\x02")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FontStyle_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FontStyle_Impl__obj::BOLD,"BOLD");
	HX_MARK_MEMBER_NAME(FontStyle_Impl__obj::BOLD_ITALIC,"BOLD_ITALIC");
	HX_MARK_MEMBER_NAME(FontStyle_Impl__obj::ITALIC,"ITALIC");
	HX_MARK_MEMBER_NAME(FontStyle_Impl__obj::REGULAR,"REGULAR");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FontStyle_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FontStyle_Impl__obj::BOLD,"BOLD");
	HX_VISIT_MEMBER_NAME(FontStyle_Impl__obj::BOLD_ITALIC,"BOLD_ITALIC");
	HX_VISIT_MEMBER_NAME(FontStyle_Impl__obj::ITALIC,"ITALIC");
	HX_VISIT_MEMBER_NAME(FontStyle_Impl__obj::REGULAR,"REGULAR");
};

#endif

hx::Class FontStyle_Impl__obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("BOLD","\x85","\x49","\xdc","\x2b"),
	HX_HCSTRING("BOLD_ITALIC","\xaa","\x0d","\xc2","\x88"),
	HX_HCSTRING("ITALIC","\xf0","\xda","\xe6","\xb8"),
	HX_HCSTRING("REGULAR","\x3c","\x26","\x5c","\x02"),
	HX_HCSTRING("fromString","\xdb","\x2d","\x74","\x54"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null()) };

void FontStyle_Impl__obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.text._FontStyle.FontStyle_Impl_","\x3a","\xcc","\x41","\x0b");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FontStyle_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< FontStyle_Impl__obj >;
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

void FontStyle_Impl__obj::__boot()
{
	BOLD= ((Dynamic)((int)0));
	BOLD_ITALIC= ((Dynamic)((int)1));
	ITALIC= ((Dynamic)((int)2));
	REGULAR= ((Dynamic)((int)3));
}

} // end namespace openfl
} // end namespace text
} // end namespace _FontStyle
