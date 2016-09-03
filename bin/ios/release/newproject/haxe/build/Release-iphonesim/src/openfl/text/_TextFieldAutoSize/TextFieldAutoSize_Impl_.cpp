#include <hxcpp.h>

#ifndef INCLUDED_openfl_text__TextFieldAutoSize_TextFieldAutoSize_Impl_
#include <openfl/text/_TextFieldAutoSize/TextFieldAutoSize_Impl_.h>
#endif
namespace openfl{
namespace text{
namespace _TextFieldAutoSize{

Void TextFieldAutoSize_Impl__obj::__construct()
{
	return null();
}

//TextFieldAutoSize_Impl__obj::~TextFieldAutoSize_Impl__obj() { }

Dynamic TextFieldAutoSize_Impl__obj::__CreateEmpty() { return  new TextFieldAutoSize_Impl__obj; }
hx::ObjectPtr< TextFieldAutoSize_Impl__obj > TextFieldAutoSize_Impl__obj::__new()
{  hx::ObjectPtr< TextFieldAutoSize_Impl__obj > _result_ = new TextFieldAutoSize_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic TextFieldAutoSize_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TextFieldAutoSize_Impl__obj > _result_ = new TextFieldAutoSize_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic TextFieldAutoSize_Impl__obj::CENTER;

Dynamic TextFieldAutoSize_Impl__obj::LEFT;

Dynamic TextFieldAutoSize_Impl__obj::NONE;

Dynamic TextFieldAutoSize_Impl__obj::RIGHT;

Dynamic TextFieldAutoSize_Impl__obj::fromString( ::String value){
	HX_STACK_FRAME("openfl.text._TextFieldAutoSize.TextFieldAutoSize_Impl_","fromString",0xeb62d059,"openfl.text._TextFieldAutoSize.TextFieldAutoSize_Impl_.fromString","openfl/text/TextFieldAutoSize.hx",11,0x2bbbb0a4)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(13)
	::String tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(13)
	Dynamic tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(13)
	::String _switch_1 = (tmp);
	if (  ( _switch_1==HX_HCSTRING("center","\xd5","\x25","\xdb","\x05"))){
		HX_STACK_LINE(15)
		tmp1 = ((Dynamic)((int)0));
	}
	else if (  ( _switch_1==HX_HCSTRING("left","\x07","\x08","\xb0","\x47"))){
		HX_STACK_LINE(16)
		tmp1 = ((Dynamic)((int)1));
	}
	else if (  ( _switch_1==HX_HCSTRING("none","\xb8","\x12","\x0a","\x49"))){
		HX_STACK_LINE(17)
		tmp1 = ((Dynamic)((int)2));
	}
	else if (  ( _switch_1==HX_HCSTRING("right","\xdc","\x0b","\x64","\xe9"))){
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


STATIC_HX_DEFINE_DYNAMIC_FUNC1(TextFieldAutoSize_Impl__obj,fromString,return )

::String TextFieldAutoSize_Impl__obj::toString( int value){
	HX_STACK_FRAME("openfl.text._TextFieldAutoSize.TextFieldAutoSize_Impl_","toString",0x3f3737aa,"openfl.text._TextFieldAutoSize.TextFieldAutoSize_Impl_.toString","openfl/text/TextFieldAutoSize.hx",25,0x2bbbb0a4)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(27)
	int tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(27)
	::String tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(27)
	switch( (int)(tmp)){
		case (int)0: {
			HX_STACK_LINE(29)
			tmp1 = HX_HCSTRING("center","\xd5","\x25","\xdb","\x05");
		}
		;break;
		case (int)1: {
			HX_STACK_LINE(30)
			tmp1 = HX_HCSTRING("left","\x07","\x08","\xb0","\x47");
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(31)
			tmp1 = HX_HCSTRING("none","\xb8","\x12","\x0a","\x49");
		}
		;break;
		case (int)3: {
			HX_STACK_LINE(32)
			tmp1 = HX_HCSTRING("right","\xdc","\x0b","\x64","\xe9");
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


STATIC_HX_DEFINE_DYNAMIC_FUNC1(TextFieldAutoSize_Impl__obj,toString,return )


TextFieldAutoSize_Impl__obj::TextFieldAutoSize_Impl__obj()
{
}

bool TextFieldAutoSize_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
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
	{hx::fsObject /*Dynamic*/ ,(void *) &TextFieldAutoSize_Impl__obj::CENTER,HX_HCSTRING("CENTER","\xd5","\xd1","\x5d","\xb8")},
	{hx::fsObject /*Dynamic*/ ,(void *) &TextFieldAutoSize_Impl__obj::LEFT,HX_HCSTRING("LEFT","\x07","\xd0","\x70","\x32")},
	{hx::fsObject /*Dynamic*/ ,(void *) &TextFieldAutoSize_Impl__obj::NONE,HX_HCSTRING("NONE","\xb8","\xda","\xca","\x33")},
	{hx::fsObject /*Dynamic*/ ,(void *) &TextFieldAutoSize_Impl__obj::RIGHT,HX_HCSTRING("RIGHT","\xbc","\x43","\x52","\x67")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TextFieldAutoSize_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(TextFieldAutoSize_Impl__obj::CENTER,"CENTER");
	HX_MARK_MEMBER_NAME(TextFieldAutoSize_Impl__obj::LEFT,"LEFT");
	HX_MARK_MEMBER_NAME(TextFieldAutoSize_Impl__obj::NONE,"NONE");
	HX_MARK_MEMBER_NAME(TextFieldAutoSize_Impl__obj::RIGHT,"RIGHT");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TextFieldAutoSize_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(TextFieldAutoSize_Impl__obj::CENTER,"CENTER");
	HX_VISIT_MEMBER_NAME(TextFieldAutoSize_Impl__obj::LEFT,"LEFT");
	HX_VISIT_MEMBER_NAME(TextFieldAutoSize_Impl__obj::NONE,"NONE");
	HX_VISIT_MEMBER_NAME(TextFieldAutoSize_Impl__obj::RIGHT,"RIGHT");
};

#endif

hx::Class TextFieldAutoSize_Impl__obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("CENTER","\xd5","\xd1","\x5d","\xb8"),
	HX_HCSTRING("LEFT","\x07","\xd0","\x70","\x32"),
	HX_HCSTRING("NONE","\xb8","\xda","\xca","\x33"),
	HX_HCSTRING("RIGHT","\xbc","\x43","\x52","\x67"),
	HX_HCSTRING("fromString","\xdb","\x2d","\x74","\x54"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null()) };

void TextFieldAutoSize_Impl__obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.text._TextFieldAutoSize.TextFieldAutoSize_Impl_","\x30","\xd1","\xec","\xbc");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &TextFieldAutoSize_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< TextFieldAutoSize_Impl__obj >;
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

void TextFieldAutoSize_Impl__obj::__boot()
{
	CENTER= ((Dynamic)((int)0));
	LEFT= ((Dynamic)((int)1));
	NONE= ((Dynamic)((int)2));
	RIGHT= ((Dynamic)((int)3));
}

} // end namespace openfl
} // end namespace text
} // end namespace _TextFieldAutoSize
