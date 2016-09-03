#include <hxcpp.h>

#ifndef INCLUDED_openfl__internal_utils_NullUtils
#include <openfl/_internal/utils/NullUtils.h>
#endif
namespace openfl{
namespace _internal{
namespace utils{

Void NullUtils_obj::__construct()
{
	return null();
}

//NullUtils_obj::~NullUtils_obj() { }

Dynamic NullUtils_obj::__CreateEmpty() { return  new NullUtils_obj; }
hx::ObjectPtr< NullUtils_obj > NullUtils_obj::__new()
{  hx::ObjectPtr< NullUtils_obj > _result_ = new NullUtils_obj();
	_result_->__construct();
	return _result_;}

Dynamic NullUtils_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< NullUtils_obj > _result_ = new NullUtils_obj();
	_result_->__construct();
	return _result_;}


NullUtils_obj::NullUtils_obj()
{
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(NullUtils_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(NullUtils_obj::__mClass,"__mClass");
};

#endif

hx::Class NullUtils_obj::__mClass;

void NullUtils_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.utils.NullUtils","\x5d","\x2d","\xd9","\xf9");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< NullUtils_obj >;
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

} // end namespace openfl
} // end namespace _internal
} // end namespace utils
