#include <hxcpp.h>

#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_filters_BitmapFilter
#include <openfl/filters/BitmapFilter.h>
#endif
#ifndef INCLUDED_openfl_geom_Point
#include <openfl/geom/Point.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
namespace openfl{
namespace filters{

Void BitmapFilter_obj::__construct()
{
HX_STACK_FRAME("openfl.filters.BitmapFilter","new",0x22686a4a,"openfl.filters.BitmapFilter.new","openfl/filters/BitmapFilter.hx",12,0x1697f5a4)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//BitmapFilter_obj::~BitmapFilter_obj() { }

Dynamic BitmapFilter_obj::__CreateEmpty() { return  new BitmapFilter_obj; }
hx::ObjectPtr< BitmapFilter_obj > BitmapFilter_obj::__new()
{  hx::ObjectPtr< BitmapFilter_obj > _result_ = new BitmapFilter_obj();
	_result_->__construct();
	return _result_;}

Dynamic BitmapFilter_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< BitmapFilter_obj > _result_ = new BitmapFilter_obj();
	_result_->__construct();
	return _result_;}

::openfl::filters::BitmapFilter BitmapFilter_obj::clone( ){
	HX_STACK_FRAME("openfl.filters.BitmapFilter","clone",0x8c417bc7,"openfl.filters.BitmapFilter.clone","openfl/filters/BitmapFilter.hx",19,0x1697f5a4)
	HX_STACK_THIS(this)
	HX_STACK_LINE(21)
	::openfl::filters::BitmapFilter tmp = ::openfl::filters::BitmapFilter_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(21)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(BitmapFilter_obj,clone,return )

Void BitmapFilter_obj::__applyFilter( ::openfl::display::BitmapData sourceBitmapData,::openfl::display::BitmapData destBitmapData,::openfl::geom::Rectangle sourceRect,::openfl::geom::Point destPoint){
{
		HX_STACK_FRAME("openfl.filters.BitmapFilter","__applyFilter",0xc6240310,"openfl.filters.BitmapFilter.__applyFilter","openfl/filters/BitmapFilter.hx",26,0x1697f5a4)
		HX_STACK_THIS(this)
		HX_STACK_ARG(sourceBitmapData,"sourceBitmapData")
		HX_STACK_ARG(destBitmapData,"destBitmapData")
		HX_STACK_ARG(sourceRect,"sourceRect")
		HX_STACK_ARG(destPoint,"destPoint")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(BitmapFilter_obj,__applyFilter,(void))


BitmapFilter_obj::BitmapFilter_obj()
{
}

Dynamic BitmapFilter_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__applyFilter") ) { return __applyFilter_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	HX_HCSTRING("__applyFilter","\xa6","\x20","\xa8","\x09"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BitmapFilter_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BitmapFilter_obj::__mClass,"__mClass");
};

#endif

hx::Class BitmapFilter_obj::__mClass;

void BitmapFilter_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.filters.BitmapFilter","\x58","\x3d","\x87","\x17");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< BitmapFilter_obj >;
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
} // end namespace filters
