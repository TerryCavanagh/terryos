#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_lime_graphics_cairo_Cairo
#include <lime/graphics/cairo/Cairo.h>
#endif
#ifndef INCLUDED_lime_graphics_cairo__CairoPattern_CairoPattern_Impl_
#include <lime/graphics/cairo/_CairoPattern/CairoPattern_Impl_.h>
#endif
#ifndef INCLUDED_lime_math_Matrix3
#include <lime/math/Matrix3.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_AbstractMaskManager
#include <openfl/_internal/renderer/AbstractMaskManager.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_RenderSession
#include <openfl/_internal/renderer/RenderSession.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_cairo_CairoBitmap
#include <openfl/_internal/renderer/cairo/CairoBitmap.h>
#endif
#ifndef INCLUDED_openfl_display_Bitmap
#include <openfl/display/Bitmap.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif
namespace openfl{
namespace _internal{
namespace renderer{
namespace cairo{

Void CairoBitmap_obj::__construct()
{
	return null();
}

//CairoBitmap_obj::~CairoBitmap_obj() { }

Dynamic CairoBitmap_obj::__CreateEmpty() { return  new CairoBitmap_obj; }
hx::ObjectPtr< CairoBitmap_obj > CairoBitmap_obj::__new()
{  hx::ObjectPtr< CairoBitmap_obj > _result_ = new CairoBitmap_obj();
	_result_->__construct();
	return _result_;}

Dynamic CairoBitmap_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CairoBitmap_obj > _result_ = new CairoBitmap_obj();
	_result_->__construct();
	return _result_;}

Void CairoBitmap_obj::render( ::openfl::display::Bitmap bitmap,::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl._internal.renderer.cairo.CairoBitmap","render",0xa19c46ee,"openfl._internal.renderer.cairo.CairoBitmap.render","openfl/_internal/renderer/cairo/CairoBitmap.hx",20,0x03302068)
		HX_STACK_ARG(bitmap,"bitmap")
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_LINE(22)
		bool tmp = bitmap->__renderable;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(22)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(22)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(22)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(22)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(22)
		if ((tmp3)){
			HX_STACK_LINE(22)
			tmp4 = (bitmap->__worldAlpha <= (int)0);
		}
		else{
			HX_STACK_LINE(22)
			tmp4 = true;
		}
		HX_STACK_LINE(22)
		if ((tmp4)){
			HX_STACK_LINE(22)
			return null();
		}
		HX_STACK_LINE(24)
		::lime::graphics::cairo::Cairo cairo = renderSession->cairo;		HX_STACK_VAR(cairo,"cairo");
		HX_STACK_LINE(26)
		bool tmp5 = (bitmap->bitmapData != null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(26)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(26)
		if ((tmp5)){
			HX_STACK_LINE(26)
			tmp6 = bitmap->bitmapData->__isValid;
		}
		else{
			HX_STACK_LINE(26)
			tmp6 = false;
		}
		HX_STACK_LINE(26)
		if ((tmp6)){
			HX_STACK_LINE(28)
			::openfl::display::Bitmap tmp7 = bitmap;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(28)
			renderSession->maskManager->pushObject(tmp7,null());
			HX_STACK_LINE(30)
			::openfl::geom::Matrix transform = bitmap->__worldTransform;		HX_STACK_VAR(transform,"transform");
			HX_STACK_LINE(32)
			bool tmp8 = renderSession->roundPixels;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(32)
			if ((tmp8)){
				HX_STACK_LINE(34)
				::lime::math::Matrix3 tmp9 = transform->__toMatrix3();		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(34)
				::lime::math::Matrix3 matrix = tmp9;		HX_STACK_VAR(matrix,"matrix");
				HX_STACK_LINE(35)
				Float tmp10 = matrix->tx;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(35)
				int tmp11 = ::Math_obj::round(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(35)
				matrix->tx = tmp11;
				HX_STACK_LINE(36)
				Float tmp12 = matrix->ty;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(36)
				int tmp13 = ::Math_obj::round(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(36)
				matrix->ty = tmp13;
				HX_STACK_LINE(37)
				::lime::math::Matrix3 tmp14 = matrix;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(37)
				cairo->set_matrix(tmp14);
			}
			else{
				HX_STACK_LINE(41)
				::lime::math::Matrix3 tmp9 = transform->__toMatrix3();		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(41)
				cairo->set_matrix(tmp9);
			}
			HX_STACK_LINE(45)
			Dynamic tmp9 = bitmap->bitmapData->getSurface();		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(45)
			Dynamic surface = tmp9;		HX_STACK_VAR(surface,"surface");
			HX_STACK_LINE(47)
			bool tmp10 = (surface != null());		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(47)
			if ((tmp10)){
				HX_STACK_LINE(49)
				Dynamic tmp11 = surface;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(49)
				Dynamic tmp12 = ::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::createForSurface(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(49)
				Dynamic pattern = tmp12;		HX_STACK_VAR(pattern,"pattern");
				HX_STACK_LINE(50)
				Dynamic tmp13 = pattern;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(50)
				bool tmp14 = bitmap->smoothing;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(50)
				int tmp15;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(50)
				if ((tmp14)){
					HX_STACK_LINE(50)
					tmp15 = (int)1;
				}
				else{
					HX_STACK_LINE(50)
					tmp15 = (int)3;
				}
				HX_STACK_LINE(50)
				::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::set_filter(tmp13,tmp15);
				HX_STACK_LINE(52)
				Dynamic tmp16 = pattern;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(52)
				cairo->set_source(tmp16);
				HX_STACK_LINE(54)
				bool tmp17 = (bitmap->__worldAlpha == (int)1);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(54)
				if ((tmp17)){
					HX_STACK_LINE(56)
					cairo->paint();
				}
				else{
					HX_STACK_LINE(60)
					Float tmp18 = bitmap->__worldAlpha;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(60)
					cairo->paintWithAlpha(tmp18);
				}
			}
			HX_STACK_LINE(66)
			::openfl::display::Bitmap tmp11 = bitmap;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(66)
			renderSession->maskManager->popObject(tmp11,null());
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CairoBitmap_obj,render,(void))


CairoBitmap_obj::CairoBitmap_obj()
{
}

bool CairoBitmap_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"render") ) { outValue = render_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CairoBitmap_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CairoBitmap_obj::__mClass,"__mClass");
};

#endif

hx::Class CairoBitmap_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("render","\x56","\x6b","\x29","\x05"),
	::String(null()) };

void CairoBitmap_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.renderer.cairo.CairoBitmap","\xd6","\x01","\xc6","\x83");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &CairoBitmap_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< CairoBitmap_obj >;
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
} // end namespace cairo
