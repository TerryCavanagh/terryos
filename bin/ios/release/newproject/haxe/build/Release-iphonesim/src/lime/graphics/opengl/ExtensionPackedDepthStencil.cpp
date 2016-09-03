#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_opengl_ExtensionPackedDepthStencil
#include <lime/graphics/opengl/ExtensionPackedDepthStencil.h>
#endif
namespace lime{
namespace graphics{
namespace opengl{

Void ExtensionPackedDepthStencil_obj::__construct()
{
	return null();
}

//ExtensionPackedDepthStencil_obj::~ExtensionPackedDepthStencil_obj() { }

Dynamic ExtensionPackedDepthStencil_obj::__CreateEmpty() { return  new ExtensionPackedDepthStencil_obj; }
hx::ObjectPtr< ExtensionPackedDepthStencil_obj > ExtensionPackedDepthStencil_obj::__new()
{  hx::ObjectPtr< ExtensionPackedDepthStencil_obj > _result_ = new ExtensionPackedDepthStencil_obj();
	_result_->__construct();
	return _result_;}

Dynamic ExtensionPackedDepthStencil_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ExtensionPackedDepthStencil_obj > _result_ = new ExtensionPackedDepthStencil_obj();
	_result_->__construct();
	return _result_;}

int ExtensionPackedDepthStencil_obj::DEPTH24_STENCIL8_EXT;


ExtensionPackedDepthStencil_obj::ExtensionPackedDepthStencil_obj()
{
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &ExtensionPackedDepthStencil_obj::DEPTH24_STENCIL8_EXT,HX_HCSTRING("DEPTH24_STENCIL8_EXT","\xb8","\x9e","\xe0","\x3a")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ExtensionPackedDepthStencil_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ExtensionPackedDepthStencil_obj::DEPTH24_STENCIL8_EXT,"DEPTH24_STENCIL8_EXT");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ExtensionPackedDepthStencil_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ExtensionPackedDepthStencil_obj::DEPTH24_STENCIL8_EXT,"DEPTH24_STENCIL8_EXT");
};

#endif

hx::Class ExtensionPackedDepthStencil_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("DEPTH24_STENCIL8_EXT","\xb8","\x9e","\xe0","\x3a"),
	::String(null()) };

void ExtensionPackedDepthStencil_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.graphics.opengl.ExtensionPackedDepthStencil","\x7b","\x4e","\xae","\xda");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< ExtensionPackedDepthStencil_obj >;
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

void ExtensionPackedDepthStencil_obj::__boot()
{
	DEPTH24_STENCIL8_EXT= (int)35056;
}

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
