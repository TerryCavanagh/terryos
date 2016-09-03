#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_lime_graphics_GLRenderContext
#include <lime/graphics/GLRenderContext.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GL
#include <lime/graphics/opengl/GL.h>
#endif
#ifndef INCLUDED_openfl_Lib
#include <openfl/Lib.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_AbstractMaskManager
#include <openfl/_internal/renderer/AbstractMaskManager.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_AbstractRenderer
#include <openfl/_internal/renderer/AbstractRenderer.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_RenderSession
#include <openfl/_internal/renderer/RenderSession.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_GLMaskManager
#include <openfl/_internal/renderer/opengl/GLMaskManager.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_GLRenderer
#include <openfl/_internal/renderer/opengl/GLRenderer.h>
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
#ifndef INCLUDED_openfl_display_MovieClip
#include <openfl/display/MovieClip.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_display_Stage
#include <openfl/display/Stage.h>
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
namespace opengl{

Void GLMaskManager_obj::__construct(::openfl::_internal::renderer::RenderSession renderSession)
{
HX_STACK_FRAME("openfl._internal.renderer.opengl.GLMaskManager","new",0xce241a4a,"openfl._internal.renderer.opengl.GLMaskManager.new","openfl/_internal/renderer/opengl/GLMaskManager.hx",28,0x0550a1c8)
HX_STACK_THIS(this)
HX_STACK_ARG(renderSession,"renderSession")
{
	HX_STACK_LINE(30)
	::openfl::_internal::renderer::RenderSession tmp = renderSession;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(30)
	super::__construct(tmp);
	HX_STACK_LINE(32)
	this->gl = renderSession->gl;
	HX_STACK_LINE(34)
	this->clipRects = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(35)
	this->numClipRects = (int)0;
}
;
	return null();
}

//GLMaskManager_obj::~GLMaskManager_obj() { }

Dynamic GLMaskManager_obj::__CreateEmpty() { return  new GLMaskManager_obj; }
hx::ObjectPtr< GLMaskManager_obj > GLMaskManager_obj::__new(::openfl::_internal::renderer::RenderSession renderSession)
{  hx::ObjectPtr< GLMaskManager_obj > _result_ = new GLMaskManager_obj();
	_result_->__construct(renderSession);
	return _result_;}

Dynamic GLMaskManager_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< GLMaskManager_obj > _result_ = new GLMaskManager_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void GLMaskManager_obj::pushMask( ::openfl::display::DisplayObject mask){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.GLMaskManager","pushMask",0xd450f9bc,"openfl._internal.renderer.opengl.GLMaskManager.pushMask","openfl/_internal/renderer/opengl/GLMaskManager.hx",40,0x0550a1c8)
		HX_STACK_THIS(this)
		HX_STACK_ARG(mask,"mask")
		HX_STACK_LINE(44)
		::openfl::display::DisplayObject tmp = mask;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(44)
		::openfl::geom::Rectangle tmp1 = mask->getBounds(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(44)
		::openfl::geom::Matrix tmp2 = mask->__getRenderTransform();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(44)
		this->pushRect(tmp1,tmp2);
	}
return null();
}


Void GLMaskManager_obj::pushObject( ::openfl::display::DisplayObject object,hx::Null< bool >  __o_handleScrollRect){
bool handleScrollRect = __o_handleScrollRect.Default(true);
	HX_STACK_FRAME("openfl._internal.renderer.opengl.GLMaskManager","pushObject",0x9ff60b8f,"openfl._internal.renderer.opengl.GLMaskManager.pushObject","openfl/_internal/renderer/opengl/GLMaskManager.hx",49,0x0550a1c8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(object,"object")
	HX_STACK_ARG(handleScrollRect,"handleScrollRect")
{
		HX_STACK_LINE(51)
		bool tmp = handleScrollRect;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(51)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(51)
		if ((tmp)){
			HX_STACK_LINE(51)
			::openfl::geom::Rectangle tmp2 = object->get_scrollRect();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(51)
			::openfl::geom::Rectangle tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(51)
			tmp1 = (tmp3 != null());
		}
		else{
			HX_STACK_LINE(51)
			tmp1 = false;
		}
		HX_STACK_LINE(51)
		if ((tmp1)){
			HX_STACK_LINE(53)
			::openfl::geom::Rectangle tmp2 = object->get_scrollRect();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(53)
			::openfl::geom::Matrix tmp3 = object->__renderTransform;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(53)
			this->pushRect(tmp2,tmp3);
		}
		HX_STACK_LINE(57)
		bool tmp2 = (object->__mask != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(57)
		if ((tmp2)){
			HX_STACK_LINE(59)
			::openfl::display::DisplayObject tmp3 = object->__mask;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(59)
			this->pushMask(tmp3);
		}
	}
return null();
}


Void GLMaskManager_obj::pushRect( ::openfl::geom::Rectangle rect,::openfl::geom::Matrix transform){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.GLMaskManager","pushRect",0xd7a205f4,"openfl._internal.renderer.opengl.GLMaskManager.pushRect","openfl/_internal/renderer/opengl/GLMaskManager.hx",66,0x0550a1c8)
		HX_STACK_THIS(this)
		HX_STACK_ARG(rect,"rect")
		HX_STACK_ARG(transform,"transform")
		HX_STACK_LINE(70)
		::openfl::display::MovieClip tmp = ::openfl::Lib_obj::current;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(70)
		::openfl::display::Stage stage = tmp->stage;		HX_STACK_VAR(stage,"stage");
		HX_STACK_LINE(72)
		int tmp1 = this->numClipRects;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(72)
		int tmp2 = this->clipRects->length;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(72)
		bool tmp3 = (tmp1 == tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(72)
		if ((tmp3)){
			HX_STACK_LINE(74)
			int tmp4 = this->numClipRects;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(74)
			::openfl::geom::Rectangle tmp5 = ::openfl::geom::Rectangle_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(74)
			this->clipRects[tmp4] = tmp5;
		}
		HX_STACK_LINE(78)
		int tmp4 = this->numClipRects;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(78)
		::openfl::geom::Rectangle tmp5 = this->clipRects->__get(tmp4).StaticCast< ::openfl::geom::Rectangle >();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(78)
		::openfl::geom::Rectangle clipRect = tmp5;		HX_STACK_VAR(clipRect,"clipRect");
		HX_STACK_LINE(79)
		::openfl::geom::Rectangle tmp6 = clipRect;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(79)
		::openfl::geom::Matrix tmp7 = transform;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(79)
		rect->__transform(tmp6,tmp7);
		HX_STACK_LINE(81)
		int tmp8 = this->numClipRects;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(81)
		bool tmp9 = (tmp8 > (int)0);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(81)
		if ((tmp9)){
			HX_STACK_LINE(83)
			int tmp10 = this->numClipRects;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(83)
			int tmp11 = (tmp10 - (int)1);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(83)
			::openfl::geom::Rectangle tmp12 = this->clipRects->__get(tmp11).StaticCast< ::openfl::geom::Rectangle >();		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(83)
			::openfl::geom::Rectangle parentClipRect = tmp12;		HX_STACK_VAR(parentClipRect,"parentClipRect");
			HX_STACK_LINE(84)
			Float tmp13 = parentClipRect->x;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(84)
			Float tmp14 = parentClipRect->y;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(84)
			Float tmp15 = parentClipRect->width;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(84)
			Float tmp16 = parentClipRect->height;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(84)
			clipRect->__contract(tmp13,tmp14,tmp15,tmp16);
		}
		HX_STACK_LINE(88)
		bool tmp10 = (clipRect->height < (int)0);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(88)
		if ((tmp10)){
			HX_STACK_LINE(90)
			clipRect->height = (int)0;
		}
		HX_STACK_LINE(94)
		bool tmp11 = (clipRect->width < (int)0);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(94)
		if ((tmp11)){
			HX_STACK_LINE(96)
			clipRect->width = (int)0;
		}
		HX_STACK_LINE(100)
		::openfl::_internal::renderer::RenderSession tmp12 = this->renderSession;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(100)
		::openfl::_internal::renderer::opengl::GLRenderer renderer = ((::openfl::_internal::renderer::opengl::GLRenderer)(tmp12->renderer));		HX_STACK_VAR(renderer,"renderer");
		HX_STACK_LINE(102)
		::lime::graphics::opengl::GL_obj::cffi_lime_gl_enable.call(this->gl->SCISSOR_TEST);
		HX_STACK_LINE(103)
		{
			HX_STACK_LINE(103)
			Float tmp13 = clipRect->x;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(103)
			int tmp14 = ::Math_obj::floor(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(103)
			int x = tmp14;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(103)
			Float tmp15 = (renderer->windowHeight - clipRect->y);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(103)
			Float tmp16 = clipRect->height;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(103)
			Float tmp17 = (tmp15 - tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(103)
			int tmp18 = ::Math_obj::floor(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(103)
			int y = tmp18;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(103)
			Float tmp19 = clipRect->width;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(103)
			int tmp20 = ::Math_obj::ceil(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(103)
			int width = tmp20;		HX_STACK_VAR(width,"width");
			HX_STACK_LINE(103)
			Float tmp21 = clipRect->height;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(103)
			int tmp22 = ::Math_obj::ceil(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(103)
			int height = tmp22;		HX_STACK_VAR(height,"height");
			HX_STACK_LINE(103)
			::lime::graphics::opengl::GL_obj::cffi_lime_gl_scissor.call(x,y,width,height);
		}
		HX_STACK_LINE(105)
		(this->numClipRects)++;
	}
return null();
}


Void GLMaskManager_obj::popMask( ){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.GLMaskManager","popMask",0x34fdee07,"openfl._internal.renderer.opengl.GLMaskManager.popMask","openfl/_internal/renderer/opengl/GLMaskManager.hx",112,0x0550a1c8)
		HX_STACK_THIS(this)
		HX_STACK_LINE(112)
		this->popRect();
	}
return null();
}


Void GLMaskManager_obj::popObject( ::openfl::display::DisplayObject object,hx::Null< bool >  __o_handleScrollRect){
bool handleScrollRect = __o_handleScrollRect.Default(true);
	HX_STACK_FRAME("openfl._internal.renderer.opengl.GLMaskManager","popObject",0x3d00e89a,"openfl._internal.renderer.opengl.GLMaskManager.popObject","openfl/_internal/renderer/opengl/GLMaskManager.hx",117,0x0550a1c8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(object,"object")
	HX_STACK_ARG(handleScrollRect,"handleScrollRect")
{
		HX_STACK_LINE(119)
		bool tmp = (object->__mask != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(119)
		if ((tmp)){
			HX_STACK_LINE(121)
			this->popMask();
		}
		HX_STACK_LINE(125)
		bool tmp1 = handleScrollRect;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(125)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(125)
		if ((tmp1)){
			HX_STACK_LINE(125)
			::openfl::geom::Rectangle tmp3 = object->get_scrollRect();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(125)
			::openfl::geom::Rectangle tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(125)
			tmp2 = (tmp4 != null());
		}
		else{
			HX_STACK_LINE(125)
			tmp2 = false;
		}
		HX_STACK_LINE(125)
		if ((tmp2)){
			HX_STACK_LINE(127)
			this->popRect();
		}
	}
return null();
}


Void GLMaskManager_obj::popRect( ){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.GLMaskManager","popRect",0x384efa3f,"openfl._internal.renderer.opengl.GLMaskManager.popRect","openfl/_internal/renderer/opengl/GLMaskManager.hx",134,0x0550a1c8)
		HX_STACK_THIS(this)
		HX_STACK_LINE(136)
		int tmp = this->numClipRects;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(136)
		bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(136)
		if ((tmp1)){
			HX_STACK_LINE(138)
			int tmp2 = this->numClipRects;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(138)
			int tmp3 = (tmp2 - (int)1);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(138)
			::openfl::geom::Rectangle tmp4 = this->clipRects->__get(tmp3).StaticCast< ::openfl::geom::Rectangle >();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(138)
			::openfl::geom::Rectangle clipRect = tmp4;		HX_STACK_VAR(clipRect,"clipRect");
			HX_STACK_LINE(139)
			::openfl::_internal::renderer::RenderSession tmp5 = this->renderSession;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(139)
			::openfl::_internal::renderer::opengl::GLRenderer renderer = ((::openfl::_internal::renderer::opengl::GLRenderer)(tmp5->renderer));		HX_STACK_VAR(renderer,"renderer");
			HX_STACK_LINE(141)
			::lime::graphics::opengl::GL_obj::cffi_lime_gl_enable.call(this->gl->SCISSOR_TEST);
			HX_STACK_LINE(142)
			{
				HX_STACK_LINE(142)
				Float tmp6 = clipRect->x;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(142)
				int tmp7 = ::Math_obj::floor(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(142)
				int x = tmp7;		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(142)
				Float tmp8 = (renderer->windowHeight - clipRect->y);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(142)
				Float tmp9 = clipRect->height;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(142)
				Float tmp10 = (tmp8 - tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(142)
				int tmp11 = ::Math_obj::floor(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(142)
				int y = tmp11;		HX_STACK_VAR(y,"y");
				HX_STACK_LINE(142)
				Float tmp12 = clipRect->width;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(142)
				int tmp13 = ::Math_obj::ceil(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(142)
				int width = tmp13;		HX_STACK_VAR(width,"width");
				HX_STACK_LINE(142)
				Float tmp14 = clipRect->height;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(142)
				int tmp15 = ::Math_obj::ceil(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(142)
				int height = tmp15;		HX_STACK_VAR(height,"height");
				HX_STACK_LINE(142)
				::lime::graphics::opengl::GL_obj::cffi_lime_gl_scissor.call(x,y,width,height);
			}
			HX_STACK_LINE(144)
			(this->numClipRects)--;
		}
		HX_STACK_LINE(148)
		int tmp2 = this->numClipRects;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(148)
		bool tmp3 = (tmp2 == (int)0);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(148)
		if ((tmp3)){
			HX_STACK_LINE(150)
			::lime::graphics::opengl::GL_obj::cffi_lime_gl_disable.call(this->gl->SCISSOR_TEST);
		}
	}
return null();
}



GLMaskManager_obj::GLMaskManager_obj()
{
}

void GLMaskManager_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GLMaskManager);
	HX_MARK_MEMBER_NAME(clipRects,"clipRects");
	HX_MARK_MEMBER_NAME(gl,"gl");
	HX_MARK_MEMBER_NAME(numClipRects,"numClipRects");
	::openfl::_internal::renderer::AbstractMaskManager_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void GLMaskManager_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(clipRects,"clipRects");
	HX_VISIT_MEMBER_NAME(gl,"gl");
	HX_VISIT_MEMBER_NAME(numClipRects,"numClipRects");
	::openfl::_internal::renderer::AbstractMaskManager_obj::__Visit(HX_VISIT_ARG);
}

Dynamic GLMaskManager_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"gl") ) { return gl; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"popMask") ) { return popMask_dyn(); }
		if (HX_FIELD_EQ(inName,"popRect") ) { return popRect_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"pushMask") ) { return pushMask_dyn(); }
		if (HX_FIELD_EQ(inName,"pushRect") ) { return pushRect_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"clipRects") ) { return clipRects; }
		if (HX_FIELD_EQ(inName,"popObject") ) { return popObject_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"pushObject") ) { return pushObject_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"numClipRects") ) { return numClipRects; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic GLMaskManager_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"gl") ) { gl=inValue.Cast< ::lime::graphics::GLRenderContext >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"clipRects") ) { clipRects=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"numClipRects") ) { numClipRects=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void GLMaskManager_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("clipRects","\xdf","\x81","\xd3","\x04"));
	outFields->push(HX_HCSTRING("gl","\x25","\x5a","\x00","\x00"));
	outFields->push(HX_HCSTRING("numClipRects","\xb9","\x8a","\x43","\xac"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(GLMaskManager_obj,clipRects),HX_HCSTRING("clipRects","\xdf","\x81","\xd3","\x04")},
	{hx::fsObject /*::lime::graphics::GLRenderContext*/ ,(int)offsetof(GLMaskManager_obj,gl),HX_HCSTRING("gl","\x25","\x5a","\x00","\x00")},
	{hx::fsInt,(int)offsetof(GLMaskManager_obj,numClipRects),HX_HCSTRING("numClipRects","\xb9","\x8a","\x43","\xac")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("clipRects","\xdf","\x81","\xd3","\x04"),
	HX_HCSTRING("gl","\x25","\x5a","\x00","\x00"),
	HX_HCSTRING("numClipRects","\xb9","\x8a","\x43","\xac"),
	HX_HCSTRING("pushMask","\xe6","\x73","\x47","\x17"),
	HX_HCSTRING("pushObject","\x39","\xe4","\x1e","\x69"),
	HX_HCSTRING("pushRect","\x1e","\x80","\x98","\x1a"),
	HX_HCSTRING("popMask","\x1d","\x67","\x11","\x43"),
	HX_HCSTRING("popObject","\x30","\x53","\xb5","\x91"),
	HX_HCSTRING("popRect","\x55","\x73","\x62","\x46"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GLMaskManager_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GLMaskManager_obj::__mClass,"__mClass");
};

#endif

hx::Class GLMaskManager_obj::__mClass;

void GLMaskManager_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.renderer.opengl.GLMaskManager","\x58","\xed","\xaa","\xef");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< GLMaskManager_obj >;
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
} // end namespace opengl
