#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_lime_graphics_cairo_Cairo
#include <lime/graphics/cairo/Cairo.h>
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
#ifndef INCLUDED_openfl__internal_renderer_cairo_CairoGraphics
#include <openfl/_internal/renderer/cairo/CairoGraphics.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_cairo_CairoShape
#include <openfl/_internal/renderer/cairo/CairoShape.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_Graphics
#include <openfl/display/Graphics.h>
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
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
namespace openfl{
namespace _internal{
namespace renderer{
namespace cairo{

Void CairoShape_obj::__construct()
{
	return null();
}

//CairoShape_obj::~CairoShape_obj() { }

Dynamic CairoShape_obj::__CreateEmpty() { return  new CairoShape_obj; }
hx::ObjectPtr< CairoShape_obj > CairoShape_obj::__new()
{  hx::ObjectPtr< CairoShape_obj > _result_ = new CairoShape_obj();
	_result_->__construct();
	return _result_;}

Dynamic CairoShape_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CairoShape_obj > _result_ = new CairoShape_obj();
	_result_->__construct();
	return _result_;}

Void CairoShape_obj::render( ::openfl::display::DisplayObject shape,::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl._internal.renderer.cairo.CairoShape","render",0x363dce2a,"openfl._internal.renderer.cairo.CairoShape.render","openfl/_internal/renderer/cairo/CairoShape.hx",16,0xfc9b2624)
		HX_STACK_ARG(shape,"shape")
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_LINE(19)
		bool tmp = shape->__renderable;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(19)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(19)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(19)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(19)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(19)
		if ((tmp3)){
			HX_STACK_LINE(19)
			tmp4 = (shape->__worldAlpha <= (int)0);
		}
		else{
			HX_STACK_LINE(19)
			tmp4 = true;
		}
		HX_STACK_LINE(19)
		if ((tmp4)){
			HX_STACK_LINE(19)
			return null();
		}
		HX_STACK_LINE(21)
		::openfl::display::Graphics graphics = shape->__graphics;		HX_STACK_VAR(graphics,"graphics");
		HX_STACK_LINE(23)
		bool tmp5 = (graphics != null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(23)
		if ((tmp5)){
			HX_STACK_LINE(25)
			::openfl::display::Graphics tmp6 = graphics;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(25)
			::openfl::_internal::renderer::RenderSession tmp7 = renderSession;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(25)
			::openfl::geom::Matrix tmp8 = shape->__worldTransform;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(25)
			::openfl::_internal::renderer::cairo::CairoGraphics_obj::render(tmp6,tmp7,tmp8);
			HX_STACK_LINE(27)
			::openfl::geom::Rectangle bounds = graphics->__bounds;		HX_STACK_VAR(bounds,"bounds");
			HX_STACK_LINE(29)
			bool tmp9 = (graphics->__cairo != null());		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(29)
			bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(29)
			bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(29)
			if ((tmp10)){
				HX_STACK_LINE(29)
				tmp11 = graphics->__visible;
			}
			else{
				HX_STACK_LINE(29)
				tmp11 = false;
			}
			HX_STACK_LINE(29)
			bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(29)
			bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(29)
			if ((tmp12)){
				HX_STACK_LINE(29)
				tmp13 = (bounds != null());
			}
			else{
				HX_STACK_LINE(29)
				tmp13 = false;
			}
			HX_STACK_LINE(29)
			bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(29)
			bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(29)
			if ((tmp14)){
				HX_STACK_LINE(29)
				tmp15 = (graphics->__width >= (int)1);
			}
			else{
				HX_STACK_LINE(29)
				tmp15 = false;
			}
			HX_STACK_LINE(29)
			bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(29)
			if ((tmp15)){
				HX_STACK_LINE(29)
				tmp16 = (graphics->__height >= (int)1);
			}
			else{
				HX_STACK_LINE(29)
				tmp16 = false;
			}
			HX_STACK_LINE(29)
			if ((tmp16)){
				HX_STACK_LINE(31)
				::openfl::display::DisplayObject tmp17 = shape;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(31)
				renderSession->maskManager->pushObject(tmp17,null());
				HX_STACK_LINE(33)
				::lime::graphics::cairo::Cairo cairo = renderSession->cairo;		HX_STACK_VAR(cairo,"cairo");
				HX_STACK_LINE(35)
				bool tmp18 = renderSession->roundPixels;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(35)
				if ((tmp18)){
					HX_STACK_LINE(37)
					::lime::math::Matrix3 tmp19 = graphics->__worldTransform->__toMatrix3();		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(37)
					::lime::math::Matrix3 matrix = tmp19;		HX_STACK_VAR(matrix,"matrix");
					HX_STACK_LINE(38)
					Float tmp20 = matrix->tx;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(38)
					int tmp21 = ::Math_obj::round(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(38)
					matrix->tx = tmp21;
					HX_STACK_LINE(39)
					Float tmp22 = matrix->ty;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(39)
					int tmp23 = ::Math_obj::round(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(39)
					matrix->ty = tmp23;
					HX_STACK_LINE(40)
					::lime::math::Matrix3 tmp24 = matrix;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(40)
					cairo->set_matrix(tmp24);
				}
				else{
					HX_STACK_LINE(44)
					::lime::math::Matrix3 tmp19 = graphics->__worldTransform->__toMatrix3();		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(44)
					cairo->set_matrix(tmp19);
				}
				HX_STACK_LINE(48)
				Dynamic tmp19 = graphics->__cairo->get_target();		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(48)
				cairo->setSourceSurface(tmp19,(int)0,(int)0);
				HX_STACK_LINE(49)
				Float tmp20 = shape->__worldAlpha;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(49)
				cairo->paintWithAlpha(tmp20);
				HX_STACK_LINE(51)
				::openfl::display::DisplayObject tmp21 = shape;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(51)
				renderSession->maskManager->popObject(tmp21,null());
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CairoShape_obj,render,(void))


CairoShape_obj::CairoShape_obj()
{
}

bool CairoShape_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
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
	HX_MARK_MEMBER_NAME(CairoShape_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CairoShape_obj::__mClass,"__mClass");
};

#endif

hx::Class CairoShape_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("render","\x56","\x6b","\x29","\x05"),
	::String(null()) };

void CairoShape_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.renderer.cairo.CairoShape","\x1a","\xeb","\xc9","\x00");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &CairoShape_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< CairoShape_obj >;
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
