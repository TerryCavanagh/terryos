#include <hxcpp.h>

#ifndef INCLUDED_openfl__internal_renderer_AbstractBlendModeManager
#include <openfl/_internal/renderer/AbstractBlendModeManager.h>
#endif
namespace openfl{
namespace _internal{
namespace renderer{

Void AbstractBlendModeManager_obj::__construct()
{
HX_STACK_FRAME("openfl._internal.renderer.AbstractBlendModeManager","new",0x10154be8,"openfl._internal.renderer.AbstractBlendModeManager.new","openfl/_internal/renderer/AbstractBlendModeManager.hx",8,0x14ce0069)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//AbstractBlendModeManager_obj::~AbstractBlendModeManager_obj() { }

Dynamic AbstractBlendModeManager_obj::__CreateEmpty() { return  new AbstractBlendModeManager_obj; }
hx::ObjectPtr< AbstractBlendModeManager_obj > AbstractBlendModeManager_obj::__new()
{  hx::ObjectPtr< AbstractBlendModeManager_obj > _result_ = new AbstractBlendModeManager_obj();
	_result_->__construct();
	return _result_;}

Dynamic AbstractBlendModeManager_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AbstractBlendModeManager_obj > _result_ = new AbstractBlendModeManager_obj();
	_result_->__construct();
	return _result_;}

Void AbstractBlendModeManager_obj::setBlendMode( Dynamic blendMode){
{
		HX_STACK_FRAME("openfl._internal.renderer.AbstractBlendModeManager","setBlendMode",0x8fce77ca,"openfl._internal.renderer.AbstractBlendModeManager.setBlendMode","openfl/_internal/renderer/AbstractBlendModeManager.hx",15,0x14ce0069)
		HX_STACK_THIS(this)
		HX_STACK_ARG(blendMode,"blendMode")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AbstractBlendModeManager_obj,setBlendMode,(void))


AbstractBlendModeManager_obj::AbstractBlendModeManager_obj()
{
}

Dynamic AbstractBlendModeManager_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"setBlendMode") ) { return setBlendMode_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("setBlendMode","\x52","\xa4","\x87","\x30"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AbstractBlendModeManager_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AbstractBlendModeManager_obj::__mClass,"__mClass");
};

#endif

hx::Class AbstractBlendModeManager_obj::__mClass;

void AbstractBlendModeManager_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.renderer.AbstractBlendModeManager","\xf6","\x77","\x3f","\x12");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< AbstractBlendModeManager_obj >;
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
} // end namespace renderer
