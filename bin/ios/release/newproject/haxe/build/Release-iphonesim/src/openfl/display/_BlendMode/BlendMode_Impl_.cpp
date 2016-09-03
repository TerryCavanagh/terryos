#include <hxcpp.h>

#ifndef INCLUDED_openfl_display__BlendMode_BlendMode_Impl_
#include <openfl/display/_BlendMode/BlendMode_Impl_.h>
#endif
namespace openfl{
namespace display{
namespace _BlendMode{

Void BlendMode_Impl__obj::__construct()
{
	return null();
}

//BlendMode_Impl__obj::~BlendMode_Impl__obj() { }

Dynamic BlendMode_Impl__obj::__CreateEmpty() { return  new BlendMode_Impl__obj; }
hx::ObjectPtr< BlendMode_Impl__obj > BlendMode_Impl__obj::__new()
{  hx::ObjectPtr< BlendMode_Impl__obj > _result_ = new BlendMode_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic BlendMode_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< BlendMode_Impl__obj > _result_ = new BlendMode_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic BlendMode_Impl__obj::ADD;

Dynamic BlendMode_Impl__obj::ALPHA;

Dynamic BlendMode_Impl__obj::DARKEN;

Dynamic BlendMode_Impl__obj::DIFFERENCE;

Dynamic BlendMode_Impl__obj::ERASE;

Dynamic BlendMode_Impl__obj::HARDLIGHT;

Dynamic BlendMode_Impl__obj::INVERT;

Dynamic BlendMode_Impl__obj::LAYER;

Dynamic BlendMode_Impl__obj::LIGHTEN;

Dynamic BlendMode_Impl__obj::MULTIPLY;

Dynamic BlendMode_Impl__obj::NORMAL;

Dynamic BlendMode_Impl__obj::OVERLAY;

Dynamic BlendMode_Impl__obj::SCREEN;

Dynamic BlendMode_Impl__obj::SHADER;

Dynamic BlendMode_Impl__obj::SUBTRACT;

Dynamic BlendMode_Impl__obj::fromString( ::String value){
	HX_STACK_FRAME("openfl.display._BlendMode.BlendMode_Impl_","fromString",0x5c7dc184,"openfl.display._BlendMode.BlendMode_Impl_.fromString","openfl/display/BlendMode.hx",22,0xe0e49a56)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(24)
	::String tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(24)
	Dynamic tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(24)
	::String _switch_1 = (tmp);
	if (  ( _switch_1==HX_HCSTRING("add","\x21","\xf2","\x49","\x00"))){
		HX_STACK_LINE(26)
		tmp1 = ((Dynamic)((int)0));
	}
	else if (  ( _switch_1==HX_HCSTRING("alpha","\x5e","\xa7","\x96","\x21"))){
		HX_STACK_LINE(27)
		tmp1 = ((Dynamic)((int)1));
	}
	else if (  ( _switch_1==HX_HCSTRING("darken","\x5f","\x36","\x3a","\x21"))){
		HX_STACK_LINE(28)
		tmp1 = ((Dynamic)((int)2));
	}
	else if (  ( _switch_1==HX_HCSTRING("difference","\xfd","\x9b","\x91","\x46"))){
		HX_STACK_LINE(29)
		tmp1 = ((Dynamic)((int)3));
	}
	else if (  ( _switch_1==HX_HCSTRING("erase","\xe6","\xe8","\x1c","\x73"))){
		HX_STACK_LINE(30)
		tmp1 = ((Dynamic)((int)4));
	}
	else if (  ( _switch_1==HX_HCSTRING("hardlight","\x0b","\x6e","\x6b","\x53"))){
		HX_STACK_LINE(31)
		tmp1 = ((Dynamic)((int)5));
	}
	else if (  ( _switch_1==HX_HCSTRING("invert","\x16","\xe7","\xd8","\x9f"))){
		HX_STACK_LINE(32)
		tmp1 = ((Dynamic)((int)6));
	}
	else if (  ( _switch_1==HX_HCSTRING("layer","\xd1","\x81","\xc0","\x6f"))){
		HX_STACK_LINE(33)
		tmp1 = ((Dynamic)((int)7));
	}
	else if (  ( _switch_1==HX_HCSTRING("lighten","\xbf","\x4a","\xe3","\x19"))){
		HX_STACK_LINE(34)
		tmp1 = ((Dynamic)((int)8));
	}
	else if (  ( _switch_1==HX_HCSTRING("multiply","\x24","\xe2","\x8c","\x9a"))){
		HX_STACK_LINE(35)
		tmp1 = ((Dynamic)((int)9));
	}
	else if (  ( _switch_1==HX_HCSTRING("normal","\x27","\x72","\x69","\x30"))){
		HX_STACK_LINE(36)
		tmp1 = ((Dynamic)((int)10));
	}
	else if (  ( _switch_1==HX_HCSTRING("overlay","\x90","\x43","\x10","\xa9"))){
		HX_STACK_LINE(37)
		tmp1 = ((Dynamic)((int)11));
	}
	else if (  ( _switch_1==HX_HCSTRING("screen","\x6c","\x3b","\x5d","\x47"))){
		HX_STACK_LINE(38)
		tmp1 = ((Dynamic)((int)12));
	}
	else if (  ( _switch_1==HX_HCSTRING("shader","\x25","\xbf","\x20","\x1d"))){
		HX_STACK_LINE(39)
		tmp1 = ((Dynamic)((int)13));
	}
	else if (  ( _switch_1==HX_HCSTRING("subtract","\x14","\x75","\x11","\xf8"))){
		HX_STACK_LINE(40)
		tmp1 = ((Dynamic)((int)14));
	}
	else  {
		HX_STACK_LINE(41)
		tmp1 = null();
	}
;
;
	HX_STACK_LINE(24)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(BlendMode_Impl__obj,fromString,return )

::String BlendMode_Impl__obj::toString( int value){
	HX_STACK_FRAME("openfl.display._BlendMode.BlendMode_Impl_","toString",0xf610f815,"openfl.display._BlendMode.BlendMode_Impl_.toString","openfl/display/BlendMode.hx",47,0xe0e49a56)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(49)
	int tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(49)
	::String tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(49)
	switch( (int)(tmp)){
		case (int)0: {
			HX_STACK_LINE(51)
			tmp1 = HX_HCSTRING("add","\x21","\xf2","\x49","\x00");
		}
		;break;
		case (int)1: {
			HX_STACK_LINE(52)
			tmp1 = HX_HCSTRING("alpha","\x5e","\xa7","\x96","\x21");
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(53)
			tmp1 = HX_HCSTRING("darken","\x5f","\x36","\x3a","\x21");
		}
		;break;
		case (int)3: {
			HX_STACK_LINE(54)
			tmp1 = HX_HCSTRING("difference","\xfd","\x9b","\x91","\x46");
		}
		;break;
		case (int)4: {
			HX_STACK_LINE(55)
			tmp1 = HX_HCSTRING("erase","\xe6","\xe8","\x1c","\x73");
		}
		;break;
		case (int)5: {
			HX_STACK_LINE(56)
			tmp1 = HX_HCSTRING("hardlight","\x0b","\x6e","\x6b","\x53");
		}
		;break;
		case (int)6: {
			HX_STACK_LINE(57)
			tmp1 = HX_HCSTRING("invert","\x16","\xe7","\xd8","\x9f");
		}
		;break;
		case (int)7: {
			HX_STACK_LINE(58)
			tmp1 = HX_HCSTRING("layer","\xd1","\x81","\xc0","\x6f");
		}
		;break;
		case (int)8: {
			HX_STACK_LINE(59)
			tmp1 = HX_HCSTRING("lighten","\xbf","\x4a","\xe3","\x19");
		}
		;break;
		case (int)9: {
			HX_STACK_LINE(60)
			tmp1 = HX_HCSTRING("multiply","\x24","\xe2","\x8c","\x9a");
		}
		;break;
		case (int)10: {
			HX_STACK_LINE(61)
			tmp1 = HX_HCSTRING("normal","\x27","\x72","\x69","\x30");
		}
		;break;
		case (int)11: {
			HX_STACK_LINE(62)
			tmp1 = HX_HCSTRING("overlay","\x90","\x43","\x10","\xa9");
		}
		;break;
		case (int)12: {
			HX_STACK_LINE(63)
			tmp1 = HX_HCSTRING("screen","\x6c","\x3b","\x5d","\x47");
		}
		;break;
		case (int)13: {
			HX_STACK_LINE(64)
			tmp1 = HX_HCSTRING("shader","\x25","\xbf","\x20","\x1d");
		}
		;break;
		case (int)14: {
			HX_STACK_LINE(65)
			tmp1 = HX_HCSTRING("subtract","\x14","\x75","\x11","\xf8");
		}
		;break;
		default: {
			HX_STACK_LINE(66)
			tmp1 = null();
		}
	}
	HX_STACK_LINE(49)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(BlendMode_Impl__obj,toString,return )


BlendMode_Impl__obj::BlendMode_Impl__obj()
{
}

bool BlendMode_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
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
	{hx::fsObject /*Dynamic*/ ,(void *) &BlendMode_Impl__obj::ADD,HX_HCSTRING("ADD","\x01","\x8e","\x31","\x00")},
	{hx::fsObject /*Dynamic*/ ,(void *) &BlendMode_Impl__obj::ALPHA,HX_HCSTRING("ALPHA","\x3e","\xdf","\x84","\x9f")},
	{hx::fsObject /*Dynamic*/ ,(void *) &BlendMode_Impl__obj::DARKEN,HX_HCSTRING("DARKEN","\x5f","\xe2","\xbc","\xd3")},
	{hx::fsObject /*Dynamic*/ ,(void *) &BlendMode_Impl__obj::DIFFERENCE,HX_HCSTRING("DIFFERENCE","\xfd","\x0f","\x9b","\x38")},
	{hx::fsObject /*Dynamic*/ ,(void *) &BlendMode_Impl__obj::ERASE,HX_HCSTRING("ERASE","\xc6","\x20","\x0b","\xf1")},
	{hx::fsObject /*Dynamic*/ ,(void *) &BlendMode_Impl__obj::HARDLIGHT,HX_HCSTRING("HARDLIGHT","\xeb","\xdd","\xc3","\x4e")},
	{hx::fsObject /*Dynamic*/ ,(void *) &BlendMode_Impl__obj::INVERT,HX_HCSTRING("INVERT","\x16","\x93","\x5b","\x52")},
	{hx::fsObject /*Dynamic*/ ,(void *) &BlendMode_Impl__obj::LAYER,HX_HCSTRING("LAYER","\xb1","\xb9","\xae","\xed")},
	{hx::fsObject /*Dynamic*/ ,(void *) &BlendMode_Impl__obj::LIGHTEN,HX_HCSTRING("LIGHTEN","\x9f","\x1e","\xb7","\x99")},
	{hx::fsObject /*Dynamic*/ ,(void *) &BlendMode_Impl__obj::MULTIPLY,HX_HCSTRING("MULTIPLY","\x24","\x72","\x12","\xf4")},
	{hx::fsObject /*Dynamic*/ ,(void *) &BlendMode_Impl__obj::NORMAL,HX_HCSTRING("NORMAL","\x27","\x1e","\xec","\xe2")},
	{hx::fsObject /*Dynamic*/ ,(void *) &BlendMode_Impl__obj::OVERLAY,HX_HCSTRING("OVERLAY","\x70","\x17","\xe4","\x28")},
	{hx::fsObject /*Dynamic*/ ,(void *) &BlendMode_Impl__obj::SCREEN,HX_HCSTRING("SCREEN","\x6c","\xe7","\xdf","\xf9")},
	{hx::fsObject /*Dynamic*/ ,(void *) &BlendMode_Impl__obj::SHADER,HX_HCSTRING("SHADER","\x25","\x6b","\xa3","\xcf")},
	{hx::fsObject /*Dynamic*/ ,(void *) &BlendMode_Impl__obj::SUBTRACT,HX_HCSTRING("SUBTRACT","\x14","\x05","\x97","\x51")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BlendMode_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(BlendMode_Impl__obj::ADD,"ADD");
	HX_MARK_MEMBER_NAME(BlendMode_Impl__obj::ALPHA,"ALPHA");
	HX_MARK_MEMBER_NAME(BlendMode_Impl__obj::DARKEN,"DARKEN");
	HX_MARK_MEMBER_NAME(BlendMode_Impl__obj::DIFFERENCE,"DIFFERENCE");
	HX_MARK_MEMBER_NAME(BlendMode_Impl__obj::ERASE,"ERASE");
	HX_MARK_MEMBER_NAME(BlendMode_Impl__obj::HARDLIGHT,"HARDLIGHT");
	HX_MARK_MEMBER_NAME(BlendMode_Impl__obj::INVERT,"INVERT");
	HX_MARK_MEMBER_NAME(BlendMode_Impl__obj::LAYER,"LAYER");
	HX_MARK_MEMBER_NAME(BlendMode_Impl__obj::LIGHTEN,"LIGHTEN");
	HX_MARK_MEMBER_NAME(BlendMode_Impl__obj::MULTIPLY,"MULTIPLY");
	HX_MARK_MEMBER_NAME(BlendMode_Impl__obj::NORMAL,"NORMAL");
	HX_MARK_MEMBER_NAME(BlendMode_Impl__obj::OVERLAY,"OVERLAY");
	HX_MARK_MEMBER_NAME(BlendMode_Impl__obj::SCREEN,"SCREEN");
	HX_MARK_MEMBER_NAME(BlendMode_Impl__obj::SHADER,"SHADER");
	HX_MARK_MEMBER_NAME(BlendMode_Impl__obj::SUBTRACT,"SUBTRACT");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BlendMode_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(BlendMode_Impl__obj::ADD,"ADD");
	HX_VISIT_MEMBER_NAME(BlendMode_Impl__obj::ALPHA,"ALPHA");
	HX_VISIT_MEMBER_NAME(BlendMode_Impl__obj::DARKEN,"DARKEN");
	HX_VISIT_MEMBER_NAME(BlendMode_Impl__obj::DIFFERENCE,"DIFFERENCE");
	HX_VISIT_MEMBER_NAME(BlendMode_Impl__obj::ERASE,"ERASE");
	HX_VISIT_MEMBER_NAME(BlendMode_Impl__obj::HARDLIGHT,"HARDLIGHT");
	HX_VISIT_MEMBER_NAME(BlendMode_Impl__obj::INVERT,"INVERT");
	HX_VISIT_MEMBER_NAME(BlendMode_Impl__obj::LAYER,"LAYER");
	HX_VISIT_MEMBER_NAME(BlendMode_Impl__obj::LIGHTEN,"LIGHTEN");
	HX_VISIT_MEMBER_NAME(BlendMode_Impl__obj::MULTIPLY,"MULTIPLY");
	HX_VISIT_MEMBER_NAME(BlendMode_Impl__obj::NORMAL,"NORMAL");
	HX_VISIT_MEMBER_NAME(BlendMode_Impl__obj::OVERLAY,"OVERLAY");
	HX_VISIT_MEMBER_NAME(BlendMode_Impl__obj::SCREEN,"SCREEN");
	HX_VISIT_MEMBER_NAME(BlendMode_Impl__obj::SHADER,"SHADER");
	HX_VISIT_MEMBER_NAME(BlendMode_Impl__obj::SUBTRACT,"SUBTRACT");
};

#endif

hx::Class BlendMode_Impl__obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("ADD","\x01","\x8e","\x31","\x00"),
	HX_HCSTRING("ALPHA","\x3e","\xdf","\x84","\x9f"),
	HX_HCSTRING("DARKEN","\x5f","\xe2","\xbc","\xd3"),
	HX_HCSTRING("DIFFERENCE","\xfd","\x0f","\x9b","\x38"),
	HX_HCSTRING("ERASE","\xc6","\x20","\x0b","\xf1"),
	HX_HCSTRING("HARDLIGHT","\xeb","\xdd","\xc3","\x4e"),
	HX_HCSTRING("INVERT","\x16","\x93","\x5b","\x52"),
	HX_HCSTRING("LAYER","\xb1","\xb9","\xae","\xed"),
	HX_HCSTRING("LIGHTEN","\x9f","\x1e","\xb7","\x99"),
	HX_HCSTRING("MULTIPLY","\x24","\x72","\x12","\xf4"),
	HX_HCSTRING("NORMAL","\x27","\x1e","\xec","\xe2"),
	HX_HCSTRING("OVERLAY","\x70","\x17","\xe4","\x28"),
	HX_HCSTRING("SCREEN","\x6c","\xe7","\xdf","\xf9"),
	HX_HCSTRING("SHADER","\x25","\x6b","\xa3","\xcf"),
	HX_HCSTRING("SUBTRACT","\x14","\x05","\x97","\x51"),
	HX_HCSTRING("fromString","\xdb","\x2d","\x74","\x54"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null()) };

void BlendMode_Impl__obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.display._BlendMode.BlendMode_Impl_","\x25","\xca","\x18","\x74");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &BlendMode_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< BlendMode_Impl__obj >;
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

void BlendMode_Impl__obj::__boot()
{
	ADD= ((Dynamic)((int)0));
	ALPHA= ((Dynamic)((int)1));
	DARKEN= ((Dynamic)((int)2));
	DIFFERENCE= ((Dynamic)((int)3));
	ERASE= ((Dynamic)((int)4));
	HARDLIGHT= ((Dynamic)((int)5));
	INVERT= ((Dynamic)((int)6));
	LAYER= ((Dynamic)((int)7));
	LIGHTEN= ((Dynamic)((int)8));
	MULTIPLY= ((Dynamic)((int)9));
	NORMAL= ((Dynamic)((int)10));
	OVERLAY= ((Dynamic)((int)11));
	SCREEN= ((Dynamic)((int)12));
	SHADER= ((Dynamic)((int)13));
	SUBTRACT= ((Dynamic)((int)14));
}

} // end namespace openfl
} // end namespace display
} // end namespace _BlendMode
