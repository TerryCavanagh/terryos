#include <hxcpp.h>

#ifndef INCLUDED_openfl_display__TriangleCulling_TriangleCulling_Impl_
#include <openfl/display/_TriangleCulling/TriangleCulling_Impl_.h>
#endif
namespace openfl{
namespace display{
namespace _TriangleCulling{

Void TriangleCulling_Impl__obj::__construct()
{
	return null();
}

//TriangleCulling_Impl__obj::~TriangleCulling_Impl__obj() { }

Dynamic TriangleCulling_Impl__obj::__CreateEmpty() { return  new TriangleCulling_Impl__obj; }
hx::ObjectPtr< TriangleCulling_Impl__obj > TriangleCulling_Impl__obj::__new()
{  hx::ObjectPtr< TriangleCulling_Impl__obj > _result_ = new TriangleCulling_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic TriangleCulling_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TriangleCulling_Impl__obj > _result_ = new TriangleCulling_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic TriangleCulling_Impl__obj::NEGATIVE;

Dynamic TriangleCulling_Impl__obj::NONE;

Dynamic TriangleCulling_Impl__obj::POSITIVE;

Dynamic TriangleCulling_Impl__obj::fromString( ::String value){
	HX_STACK_FRAME("openfl.display._TriangleCulling.TriangleCulling_Impl_","fromString",0x878f171c,"openfl.display._TriangleCulling.TriangleCulling_Impl_.fromString","openfl/display/TriangleCulling.hx",10,0x58d0bba2)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(12)
	::String tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(12)
	Dynamic tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(12)
	::String _switch_1 = (tmp);
	if (  ( _switch_1==HX_HCSTRING("negative","\x75","\x26","\x42","\x51"))){
		HX_STACK_LINE(14)
		tmp1 = ((Dynamic)((int)0));
	}
	else if (  ( _switch_1==HX_HCSTRING("none","\xb8","\x12","\x0a","\x49"))){
		HX_STACK_LINE(15)
		tmp1 = ((Dynamic)((int)1));
	}
	else if (  ( _switch_1==HX_HCSTRING("positive","\xb9","\xa6","\xfa","\xca"))){
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


STATIC_HX_DEFINE_DYNAMIC_FUNC1(TriangleCulling_Impl__obj,fromString,return )

::String TriangleCulling_Impl__obj::toString( int value){
	HX_STACK_FRAME("openfl.display._TriangleCulling.TriangleCulling_Impl_","toString",0x9ce137ad,"openfl.display._TriangleCulling.TriangleCulling_Impl_.toString","openfl/display/TriangleCulling.hx",23,0x58d0bba2)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(25)
	int tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(25)
	::String tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(25)
	switch( (int)(tmp)){
		case (int)0: {
			HX_STACK_LINE(27)
			tmp1 = HX_HCSTRING("negative","\x75","\x26","\x42","\x51");
		}
		;break;
		case (int)1: {
			HX_STACK_LINE(28)
			tmp1 = HX_HCSTRING("none","\xb8","\x12","\x0a","\x49");
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(29)
			tmp1 = HX_HCSTRING("positive","\xb9","\xa6","\xfa","\xca");
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


STATIC_HX_DEFINE_DYNAMIC_FUNC1(TriangleCulling_Impl__obj,toString,return )


TriangleCulling_Impl__obj::TriangleCulling_Impl__obj()
{
}

bool TriangleCulling_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
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
	{hx::fsObject /*Dynamic*/ ,(void *) &TriangleCulling_Impl__obj::NEGATIVE,HX_HCSTRING("NEGATIVE","\x75","\xb6","\xc7","\xaa")},
	{hx::fsObject /*Dynamic*/ ,(void *) &TriangleCulling_Impl__obj::NONE,HX_HCSTRING("NONE","\xb8","\xda","\xca","\x33")},
	{hx::fsObject /*Dynamic*/ ,(void *) &TriangleCulling_Impl__obj::POSITIVE,HX_HCSTRING("POSITIVE","\xb9","\x36","\x80","\x24")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TriangleCulling_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(TriangleCulling_Impl__obj::NEGATIVE,"NEGATIVE");
	HX_MARK_MEMBER_NAME(TriangleCulling_Impl__obj::NONE,"NONE");
	HX_MARK_MEMBER_NAME(TriangleCulling_Impl__obj::POSITIVE,"POSITIVE");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TriangleCulling_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(TriangleCulling_Impl__obj::NEGATIVE,"NEGATIVE");
	HX_VISIT_MEMBER_NAME(TriangleCulling_Impl__obj::NONE,"NONE");
	HX_VISIT_MEMBER_NAME(TriangleCulling_Impl__obj::POSITIVE,"POSITIVE");
};

#endif

hx::Class TriangleCulling_Impl__obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("NEGATIVE","\x75","\xb6","\xc7","\xaa"),
	HX_HCSTRING("NONE","\xb8","\xda","\xca","\x33"),
	HX_HCSTRING("POSITIVE","\xb9","\x36","\x80","\x24"),
	HX_HCSTRING("fromString","\xdb","\x2d","\x74","\x54"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null()) };

void TriangleCulling_Impl__obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.display._TriangleCulling.TriangleCulling_Impl_","\x8d","\xdd","\xae","\x4f");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &TriangleCulling_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< TriangleCulling_Impl__obj >;
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

void TriangleCulling_Impl__obj::__boot()
{
	NEGATIVE= ((Dynamic)((int)0));
	NONE= ((Dynamic)((int)1));
	POSITIVE= ((Dynamic)((int)2));
}

} // end namespace openfl
} // end namespace display
} // end namespace _TriangleCulling
