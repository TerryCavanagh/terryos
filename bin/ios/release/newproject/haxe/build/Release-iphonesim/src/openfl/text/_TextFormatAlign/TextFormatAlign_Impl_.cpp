#include <hxcpp.h>

#ifndef INCLUDED_openfl_text__TextFormatAlign_TextFormatAlign_Impl_
#include <openfl/text/_TextFormatAlign/TextFormatAlign_Impl_.h>
#endif
namespace openfl{
namespace text{
namespace _TextFormatAlign{

Void TextFormatAlign_Impl__obj::__construct()
{
	return null();
}

//TextFormatAlign_Impl__obj::~TextFormatAlign_Impl__obj() { }

Dynamic TextFormatAlign_Impl__obj::__CreateEmpty() { return  new TextFormatAlign_Impl__obj; }
hx::ObjectPtr< TextFormatAlign_Impl__obj > TextFormatAlign_Impl__obj::__new()
{  hx::ObjectPtr< TextFormatAlign_Impl__obj > _result_ = new TextFormatAlign_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic TextFormatAlign_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TextFormatAlign_Impl__obj > _result_ = new TextFormatAlign_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic TextFormatAlign_Impl__obj::CENTER;

Dynamic TextFormatAlign_Impl__obj::END;

Dynamic TextFormatAlign_Impl__obj::JUSTIFY;

Dynamic TextFormatAlign_Impl__obj::LEFT;

Dynamic TextFormatAlign_Impl__obj::RIGHT;

Dynamic TextFormatAlign_Impl__obj::START;

Dynamic TextFormatAlign_Impl__obj::fromString( ::String value){
	HX_STACK_FRAME("openfl.text._TextFormatAlign.TextFormatAlign_Impl_","fromString",0xac8d25d1,"openfl.text._TextFormatAlign.TextFormatAlign_Impl_.fromString","openfl/text/TextFormatAlign.hx",13,0xaa546dc0)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(15)
	::String tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(15)
	Dynamic tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(15)
	::String _switch_1 = (tmp);
	if (  ( _switch_1==HX_HCSTRING("center","\xd5","\x25","\xdb","\x05"))){
		HX_STACK_LINE(17)
		tmp1 = ((Dynamic)((int)0));
	}
	else if (  ( _switch_1==HX_HCSTRING("end","\xdb","\x03","\x4d","\x00"))){
		HX_STACK_LINE(18)
		tmp1 = ((Dynamic)((int)1));
	}
	else if (  ( _switch_1==HX_HCSTRING("justify","\x50","\xdf","\xb5","\x83"))){
		HX_STACK_LINE(19)
		tmp1 = ((Dynamic)((int)2));
	}
	else if (  ( _switch_1==HX_HCSTRING("left","\x07","\x08","\xb0","\x47"))){
		HX_STACK_LINE(20)
		tmp1 = ((Dynamic)((int)3));
	}
	else if (  ( _switch_1==HX_HCSTRING("right","\xdc","\x0b","\x64","\xe9"))){
		HX_STACK_LINE(21)
		tmp1 = ((Dynamic)((int)4));
	}
	else if (  ( _switch_1==HX_HCSTRING("start","\x62","\x74","\x0b","\x84"))){
		HX_STACK_LINE(22)
		tmp1 = ((Dynamic)((int)5));
	}
	else  {
		HX_STACK_LINE(23)
		tmp1 = null();
	}
;
;
	HX_STACK_LINE(15)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(TextFormatAlign_Impl__obj,fromString,return )

::String TextFormatAlign_Impl__obj::toString( int value){
	HX_STACK_FRAME("openfl.text._TextFormatAlign.TextFormatAlign_Impl_","toString",0xf3d6bf22,"openfl.text._TextFormatAlign.TextFormatAlign_Impl_.toString","openfl/text/TextFormatAlign.hx",29,0xaa546dc0)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(31)
	int tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(31)
	::String tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(31)
	switch( (int)(tmp)){
		case (int)0: {
			HX_STACK_LINE(33)
			tmp1 = HX_HCSTRING("center","\xd5","\x25","\xdb","\x05");
		}
		;break;
		case (int)1: {
			HX_STACK_LINE(34)
			tmp1 = HX_HCSTRING("end","\xdb","\x03","\x4d","\x00");
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(35)
			tmp1 = HX_HCSTRING("justify","\x50","\xdf","\xb5","\x83");
		}
		;break;
		case (int)3: {
			HX_STACK_LINE(36)
			tmp1 = HX_HCSTRING("left","\x07","\x08","\xb0","\x47");
		}
		;break;
		case (int)4: {
			HX_STACK_LINE(37)
			tmp1 = HX_HCSTRING("right","\xdc","\x0b","\x64","\xe9");
		}
		;break;
		case (int)5: {
			HX_STACK_LINE(38)
			tmp1 = HX_HCSTRING("start","\x62","\x74","\x0b","\x84");
		}
		;break;
		default: {
			HX_STACK_LINE(39)
			tmp1 = null();
		}
	}
	HX_STACK_LINE(31)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(TextFormatAlign_Impl__obj,toString,return )


TextFormatAlign_Impl__obj::TextFormatAlign_Impl__obj()
{
}

bool TextFormatAlign_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
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
	{hx::fsObject /*Dynamic*/ ,(void *) &TextFormatAlign_Impl__obj::CENTER,HX_HCSTRING("CENTER","\xd5","\xd1","\x5d","\xb8")},
	{hx::fsObject /*Dynamic*/ ,(void *) &TextFormatAlign_Impl__obj::END,HX_HCSTRING("END","\xbb","\x9f","\x34","\x00")},
	{hx::fsObject /*Dynamic*/ ,(void *) &TextFormatAlign_Impl__obj::JUSTIFY,HX_HCSTRING("JUSTIFY","\x30","\xb3","\x89","\x03")},
	{hx::fsObject /*Dynamic*/ ,(void *) &TextFormatAlign_Impl__obj::LEFT,HX_HCSTRING("LEFT","\x07","\xd0","\x70","\x32")},
	{hx::fsObject /*Dynamic*/ ,(void *) &TextFormatAlign_Impl__obj::RIGHT,HX_HCSTRING("RIGHT","\xbc","\x43","\x52","\x67")},
	{hx::fsObject /*Dynamic*/ ,(void *) &TextFormatAlign_Impl__obj::START,HX_HCSTRING("START","\x42","\xac","\xf9","\x01")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TextFormatAlign_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(TextFormatAlign_Impl__obj::CENTER,"CENTER");
	HX_MARK_MEMBER_NAME(TextFormatAlign_Impl__obj::END,"END");
	HX_MARK_MEMBER_NAME(TextFormatAlign_Impl__obj::JUSTIFY,"JUSTIFY");
	HX_MARK_MEMBER_NAME(TextFormatAlign_Impl__obj::LEFT,"LEFT");
	HX_MARK_MEMBER_NAME(TextFormatAlign_Impl__obj::RIGHT,"RIGHT");
	HX_MARK_MEMBER_NAME(TextFormatAlign_Impl__obj::START,"START");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TextFormatAlign_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(TextFormatAlign_Impl__obj::CENTER,"CENTER");
	HX_VISIT_MEMBER_NAME(TextFormatAlign_Impl__obj::END,"END");
	HX_VISIT_MEMBER_NAME(TextFormatAlign_Impl__obj::JUSTIFY,"JUSTIFY");
	HX_VISIT_MEMBER_NAME(TextFormatAlign_Impl__obj::LEFT,"LEFT");
	HX_VISIT_MEMBER_NAME(TextFormatAlign_Impl__obj::RIGHT,"RIGHT");
	HX_VISIT_MEMBER_NAME(TextFormatAlign_Impl__obj::START,"START");
};

#endif

hx::Class TextFormatAlign_Impl__obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("CENTER","\xd5","\xd1","\x5d","\xb8"),
	HX_HCSTRING("END","\xbb","\x9f","\x34","\x00"),
	HX_HCSTRING("JUSTIFY","\x30","\xb3","\x89","\x03"),
	HX_HCSTRING("LEFT","\x07","\xd0","\x70","\x32"),
	HX_HCSTRING("RIGHT","\xbc","\x43","\x52","\x67"),
	HX_HCSTRING("START","\x42","\xac","\xf9","\x01"),
	HX_HCSTRING("fromString","\xdb","\x2d","\x74","\x54"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null()) };

void TextFormatAlign_Impl__obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.text._TextFormatAlign.TextFormatAlign_Impl_","\xb8","\x18","\x3c","\xd5");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &TextFormatAlign_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< TextFormatAlign_Impl__obj >;
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

void TextFormatAlign_Impl__obj::__boot()
{
	CENTER= ((Dynamic)((int)0));
	END= ((Dynamic)((int)1));
	JUSTIFY= ((Dynamic)((int)2));
	LEFT= ((Dynamic)((int)3));
	RIGHT= ((Dynamic)((int)4));
	START= ((Dynamic)((int)5));
}

} // end namespace openfl
} // end namespace text
} // end namespace _TextFormatAlign
