#include <hxcpp.h>

#ifndef INCLUDED_haxegon_Core
#include <haxegon/Core.h>
#endif
#ifndef INCLUDED_haxegon_Load
#include <haxegon/Load.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
namespace haxegon{

Void Load_obj::__construct()
{
HX_STACK_FRAME("haxegon.Load","new",0x7f22d386,"haxegon.Load.new","haxegon/Load.hx",7,0x2082f0c9)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(7)
	super::__construct();
}
;
	return null();
}

//Load_obj::~Load_obj() { }

Dynamic Load_obj::__CreateEmpty() { return  new Load_obj; }
hx::ObjectPtr< Load_obj > Load_obj::__new()
{  hx::ObjectPtr< Load_obj > _result_ = new Load_obj();
	_result_->__construct();
	return _result_;}

Dynamic Load_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Load_obj > _result_ = new Load_obj();
	_result_->__construct();
	return _result_;}


Load_obj::Load_obj()
{
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Load_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Load_obj::__mClass,"__mClass");
};

#endif

hx::Class Load_obj::__mClass;

void Load_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxegon.Load","\x94","\x58","\x8d","\x9b");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Load_obj >;
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

} // end namespace haxegon
