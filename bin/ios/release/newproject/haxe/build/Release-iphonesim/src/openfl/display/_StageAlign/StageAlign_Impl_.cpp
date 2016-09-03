#include <hxcpp.h>

#ifndef INCLUDED_openfl_display__StageAlign_StageAlign_Impl_
#include <openfl/display/_StageAlign/StageAlign_Impl_.h>
#endif
namespace openfl{
namespace display{
namespace _StageAlign{

Void StageAlign_Impl__obj::__construct()
{
	return null();
}

//StageAlign_Impl__obj::~StageAlign_Impl__obj() { }

Dynamic StageAlign_Impl__obj::__CreateEmpty() { return  new StageAlign_Impl__obj; }
hx::ObjectPtr< StageAlign_Impl__obj > StageAlign_Impl__obj::__new()
{  hx::ObjectPtr< StageAlign_Impl__obj > _result_ = new StageAlign_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic StageAlign_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< StageAlign_Impl__obj > _result_ = new StageAlign_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic StageAlign_Impl__obj::BOTTOM;

Dynamic StageAlign_Impl__obj::BOTTOM_LEFT;

Dynamic StageAlign_Impl__obj::BOTTOM_RIGHT;

Dynamic StageAlign_Impl__obj::LEFT;

Dynamic StageAlign_Impl__obj::RIGHT;

Dynamic StageAlign_Impl__obj::TOP;

Dynamic StageAlign_Impl__obj::TOP_LEFT;

Dynamic StageAlign_Impl__obj::TOP_RIGHT;

Dynamic StageAlign_Impl__obj::fromString( ::String value){
	HX_STACK_FRAME("openfl.display._StageAlign.StageAlign_Impl_","fromString",0x4e30c8b0,"openfl.display._StageAlign.StageAlign_Impl_.fromString","openfl/display/StageAlign.hx",15,0x49ee790b)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(17)
	::String tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(17)
	Dynamic tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(17)
	::String _switch_1 = (tmp);
	if (  ( _switch_1==HX_HCSTRING("bottom","\xeb","\xe6","\x78","\x65"))){
		HX_STACK_LINE(19)
		tmp1 = ((Dynamic)((int)0));
	}
	else if (  ( _switch_1==HX_HCSTRING("bottomLeft","\x92","\x6c","\x97","\x2c"))){
		HX_STACK_LINE(20)
		tmp1 = ((Dynamic)((int)1));
	}
	else if (  ( _switch_1==HX_HCSTRING("bottomRight","\xf1","\xa0","\xf4","\x4e"))){
		HX_STACK_LINE(21)
		tmp1 = ((Dynamic)((int)2));
	}
	else if (  ( _switch_1==HX_HCSTRING("left","\x07","\x08","\xb0","\x47"))){
		HX_STACK_LINE(22)
		tmp1 = ((Dynamic)((int)3));
	}
	else if (  ( _switch_1==HX_HCSTRING("right","\xdc","\x0b","\x64","\xe9"))){
		HX_STACK_LINE(23)
		tmp1 = ((Dynamic)((int)4));
	}
	else if (  ( _switch_1==HX_HCSTRING("top","\x95","\x66","\x58","\x00"))){
		HX_STACK_LINE(24)
		tmp1 = ((Dynamic)((int)5));
	}
	else if (  ( _switch_1==HX_HCSTRING("topLeft","\x3c","\x09","\xc1","\xe8"))){
		HX_STACK_LINE(25)
		tmp1 = ((Dynamic)((int)6));
	}
	else if (  ( _switch_1==HX_HCSTRING("topRight","\x07","\x19","\x34","\x37"))){
		HX_STACK_LINE(26)
		tmp1 = ((Dynamic)((int)7));
	}
	else  {
		HX_STACK_LINE(27)
		tmp1 = null();
	}
;
;
	HX_STACK_LINE(17)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(StageAlign_Impl__obj,fromString,return )

::String StageAlign_Impl__obj::toString( int value){
	HX_STACK_FRAME("openfl.display._StageAlign.StageAlign_Impl_","toString",0xe3319c41,"openfl.display._StageAlign.StageAlign_Impl_.toString","openfl/display/StageAlign.hx",33,0x49ee790b)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(35)
	int tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(35)
	::String tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(35)
	switch( (int)(tmp)){
		case (int)0: {
			HX_STACK_LINE(37)
			tmp1 = HX_HCSTRING("bottom","\xeb","\xe6","\x78","\x65");
		}
		;break;
		case (int)1: {
			HX_STACK_LINE(38)
			tmp1 = HX_HCSTRING("bottomLeft","\x92","\x6c","\x97","\x2c");
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(39)
			tmp1 = HX_HCSTRING("bottomRight","\xf1","\xa0","\xf4","\x4e");
		}
		;break;
		case (int)3: {
			HX_STACK_LINE(40)
			tmp1 = HX_HCSTRING("left","\x07","\x08","\xb0","\x47");
		}
		;break;
		case (int)4: {
			HX_STACK_LINE(41)
			tmp1 = HX_HCSTRING("right","\xdc","\x0b","\x64","\xe9");
		}
		;break;
		case (int)5: {
			HX_STACK_LINE(42)
			tmp1 = HX_HCSTRING("top","\x95","\x66","\x58","\x00");
		}
		;break;
		case (int)6: {
			HX_STACK_LINE(43)
			tmp1 = HX_HCSTRING("topLeft","\x3c","\x09","\xc1","\xe8");
		}
		;break;
		case (int)7: {
			HX_STACK_LINE(44)
			tmp1 = HX_HCSTRING("topRight","\x07","\x19","\x34","\x37");
		}
		;break;
		default: {
			HX_STACK_LINE(45)
			tmp1 = null();
		}
	}
	HX_STACK_LINE(35)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(StageAlign_Impl__obj,toString,return )


StageAlign_Impl__obj::StageAlign_Impl__obj()
{
}

bool StageAlign_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
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
	{hx::fsObject /*Dynamic*/ ,(void *) &StageAlign_Impl__obj::BOTTOM,HX_HCSTRING("BOTTOM","\xeb","\x92","\xfb","\x17")},
	{hx::fsObject /*Dynamic*/ ,(void *) &StageAlign_Impl__obj::BOTTOM_LEFT,HX_HCSTRING("BOTTOM_LEFT","\x1b","\xe5","\x32","\x10")},
	{hx::fsObject /*Dynamic*/ ,(void *) &StageAlign_Impl__obj::BOTTOM_RIGHT,HX_HCSTRING("BOTTOM_RIGHT","\x28","\xa0","\x62","\x93")},
	{hx::fsObject /*Dynamic*/ ,(void *) &StageAlign_Impl__obj::LEFT,HX_HCSTRING("LEFT","\x07","\xd0","\x70","\x32")},
	{hx::fsObject /*Dynamic*/ ,(void *) &StageAlign_Impl__obj::RIGHT,HX_HCSTRING("RIGHT","\xbc","\x43","\x52","\x67")},
	{hx::fsObject /*Dynamic*/ ,(void *) &StageAlign_Impl__obj::TOP,HX_HCSTRING("TOP","\x75","\x02","\x40","\x00")},
	{hx::fsObject /*Dynamic*/ ,(void *) &StageAlign_Impl__obj::TOP_LEFT,HX_HCSTRING("TOP_LEFT","\x51","\xe1","\xbb","\x7b")},
	{hx::fsObject /*Dynamic*/ ,(void *) &StageAlign_Impl__obj::TOP_RIGHT,HX_HCSTRING("TOP_RIGHT","\x32","\x53","\xb6","\x3f")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(StageAlign_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(StageAlign_Impl__obj::BOTTOM,"BOTTOM");
	HX_MARK_MEMBER_NAME(StageAlign_Impl__obj::BOTTOM_LEFT,"BOTTOM_LEFT");
	HX_MARK_MEMBER_NAME(StageAlign_Impl__obj::BOTTOM_RIGHT,"BOTTOM_RIGHT");
	HX_MARK_MEMBER_NAME(StageAlign_Impl__obj::LEFT,"LEFT");
	HX_MARK_MEMBER_NAME(StageAlign_Impl__obj::RIGHT,"RIGHT");
	HX_MARK_MEMBER_NAME(StageAlign_Impl__obj::TOP,"TOP");
	HX_MARK_MEMBER_NAME(StageAlign_Impl__obj::TOP_LEFT,"TOP_LEFT");
	HX_MARK_MEMBER_NAME(StageAlign_Impl__obj::TOP_RIGHT,"TOP_RIGHT");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(StageAlign_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(StageAlign_Impl__obj::BOTTOM,"BOTTOM");
	HX_VISIT_MEMBER_NAME(StageAlign_Impl__obj::BOTTOM_LEFT,"BOTTOM_LEFT");
	HX_VISIT_MEMBER_NAME(StageAlign_Impl__obj::BOTTOM_RIGHT,"BOTTOM_RIGHT");
	HX_VISIT_MEMBER_NAME(StageAlign_Impl__obj::LEFT,"LEFT");
	HX_VISIT_MEMBER_NAME(StageAlign_Impl__obj::RIGHT,"RIGHT");
	HX_VISIT_MEMBER_NAME(StageAlign_Impl__obj::TOP,"TOP");
	HX_VISIT_MEMBER_NAME(StageAlign_Impl__obj::TOP_LEFT,"TOP_LEFT");
	HX_VISIT_MEMBER_NAME(StageAlign_Impl__obj::TOP_RIGHT,"TOP_RIGHT");
};

#endif

hx::Class StageAlign_Impl__obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("BOTTOM","\xeb","\x92","\xfb","\x17"),
	HX_HCSTRING("BOTTOM_LEFT","\x1b","\xe5","\x32","\x10"),
	HX_HCSTRING("BOTTOM_RIGHT","\x28","\xa0","\x62","\x93"),
	HX_HCSTRING("LEFT","\x07","\xd0","\x70","\x32"),
	HX_HCSTRING("RIGHT","\xbc","\x43","\x52","\x67"),
	HX_HCSTRING("TOP","\x75","\x02","\x40","\x00"),
	HX_HCSTRING("TOP_LEFT","\x51","\xe1","\xbb","\x7b"),
	HX_HCSTRING("TOP_RIGHT","\x32","\x53","\xb6","\x3f"),
	HX_HCSTRING("fromString","\xdb","\x2d","\x74","\x54"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null()) };

void StageAlign_Impl__obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.display._StageAlign.StageAlign_Impl_","\x79","\x5b","\xcd","\xd6");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &StageAlign_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< StageAlign_Impl__obj >;
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

void StageAlign_Impl__obj::__boot()
{
	BOTTOM= ((Dynamic)((int)0));
	BOTTOM_LEFT= ((Dynamic)((int)1));
	BOTTOM_RIGHT= ((Dynamic)((int)2));
	LEFT= ((Dynamic)((int)3));
	RIGHT= ((Dynamic)((int)4));
	TOP= ((Dynamic)((int)5));
	TOP_LEFT= ((Dynamic)((int)6));
	TOP_RIGHT= ((Dynamic)((int)7));
}

} // end namespace openfl
} // end namespace display
} // end namespace _StageAlign
