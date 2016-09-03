#include <hxcpp.h>

#ifndef INCLUDED_haxe__Int64_Int64_Impl_
#include <haxe/_Int64/Int64_Impl_.h>
#endif
namespace haxe{
namespace _Int64{

Void Int64_Impl__obj::__construct()
{
	return null();
}

//Int64_Impl__obj::~Int64_Impl__obj() { }

Dynamic Int64_Impl__obj::__CreateEmpty() { return  new Int64_Impl__obj; }
hx::ObjectPtr< Int64_Impl__obj > Int64_Impl__obj::__new()
{  hx::ObjectPtr< Int64_Impl__obj > _result_ = new Int64_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic Int64_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Int64_Impl__obj > _result_ = new Int64_Impl__obj();
	_result_->__construct();
	return _result_;}

cpp::Int64Struct Int64_Impl__obj::ofInt( int x){
	HX_STACK_FRAME("haxe._Int64.Int64_Impl_","ofInt",0xa57c98ff,"haxe._Int64.Int64_Impl_.ofInt","/usr/local/lib/haxe/std/cpp/_std/haxe/Int64.hx",47,0x903f8a98)
	HX_STACK_ARG(x,"x")
	HX_STACK_LINE(47)
	return ((cpp::Int64)(x));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Int64_Impl__obj,ofInt,return )


Int64_Impl__obj::Int64_Impl__obj()
{
}

bool Int64_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"ofInt") ) { outValue = ofInt_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Int64_Impl__obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Int64_Impl__obj::__mClass,"__mClass");
};

#endif

hx::Class Int64_Impl__obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("ofInt","\x18","\xec","\x1d","\x2d"),
	::String(null()) };

void Int64_Impl__obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe._Int64.Int64_Impl_","\x15","\xd6","\x6c","\xa0");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Int64_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Int64_Impl__obj >;
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

} // end namespace haxe
} // end namespace _Int64
