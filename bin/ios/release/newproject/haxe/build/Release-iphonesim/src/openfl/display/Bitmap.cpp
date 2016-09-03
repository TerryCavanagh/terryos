#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_lime_graphics_CanvasRenderContext
#include <lime/graphics/CanvasRenderContext.h>
#endif
#ifndef INCLUDED_lime_graphics_GLRenderContext
#include <lime/graphics/GLRenderContext.h>
#endif
#ifndef INCLUDED_lime_graphics_cairo_Cairo
#include <lime/graphics/cairo/Cairo.h>
#endif
#ifndef INCLUDED_lime_graphics_cairo__CairoPattern_CairoPattern_Impl_
#include <lime/graphics/cairo/_CairoPattern/CairoPattern_Impl_.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GL
#include <lime/graphics/opengl/GL.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLBuffer
#include <lime/graphics/opengl/GLBuffer.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLObject
#include <lime/graphics/opengl/GLObject.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLTexture
#include <lime/graphics/opengl/GLTexture.h>
#endif
#ifndef INCLUDED_lime_math_Matrix3
#include <lime/math/Matrix3.h>
#endif
#ifndef INCLUDED_lime_utils_ArrayBufferView
#include <lime/utils/ArrayBufferView.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_AbstractBlendModeManager
#include <openfl/_internal/renderer/AbstractBlendModeManager.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_AbstractMaskManager
#include <openfl/_internal/renderer/AbstractMaskManager.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_AbstractRenderer
#include <openfl/_internal/renderer/AbstractRenderer.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_AbstractShaderManager
#include <openfl/_internal/renderer/AbstractShaderManager.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_DrawCommandBuffer
#include <openfl/_internal/renderer/DrawCommandBuffer.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_RenderSession
#include <openfl/_internal/renderer/RenderSession.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_GLRenderer
#include <openfl/_internal/renderer/opengl/GLRenderer.h>
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
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_Graphics
#include <openfl/display/Graphics.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_Shader
#include <openfl/display/Shader.h>
#endif
#ifndef INCLUDED_openfl_display_ShaderData
#include <openfl/display/ShaderData.h>
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
#ifndef INCLUDED_openfl_filters_BitmapFilter
#include <openfl/filters/BitmapFilter.h>
#endif
#ifndef INCLUDED_openfl_filters_ShaderFilter
#include <openfl/filters/ShaderFilter.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
namespace openfl{
namespace display{

Void Bitmap_obj::__construct(::openfl::display::BitmapData bitmapData,Dynamic pixelSnapping,hx::Null< bool >  __o_smoothing)
{
HX_STACK_FRAME("openfl.display.Bitmap","new",0x8bc0314b,"openfl.display.Bitmap.new","openfl/display/Bitmap.hx",35,0x461b2743)
HX_STACK_THIS(this)
HX_STACK_ARG(bitmapData,"bitmapData")
HX_STACK_ARG(pixelSnapping,"pixelSnapping")
HX_STACK_ARG(__o_smoothing,"smoothing")
bool smoothing = __o_smoothing.Default(false);
{
	HX_STACK_LINE(37)
	super::__construct();
	HX_STACK_LINE(39)
	::openfl::display::BitmapData tmp = bitmapData;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(39)
	this->set_bitmapData(tmp);
	HX_STACK_LINE(40)
	this->pixelSnapping = pixelSnapping;
	HX_STACK_LINE(41)
	this->smoothing = smoothing;
	HX_STACK_LINE(43)
	bool tmp1 = (pixelSnapping == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(43)
	if ((tmp1)){
		HX_STACK_LINE(45)
		this->pixelSnapping = ((Dynamic)((int)1));
	}
}
;
	return null();
}

//Bitmap_obj::~Bitmap_obj() { }

Dynamic Bitmap_obj::__CreateEmpty() { return  new Bitmap_obj; }
hx::ObjectPtr< Bitmap_obj > Bitmap_obj::__new(::openfl::display::BitmapData bitmapData,Dynamic pixelSnapping,hx::Null< bool >  __o_smoothing)
{  hx::ObjectPtr< Bitmap_obj > _result_ = new Bitmap_obj();
	_result_->__construct(bitmapData,pixelSnapping,__o_smoothing);
	return _result_;}

Dynamic Bitmap_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Bitmap_obj > _result_ = new Bitmap_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _result_;}

Void Bitmap_obj::__getBounds( ::openfl::geom::Rectangle rect,::openfl::geom::Matrix matrix){
{
		HX_STACK_FRAME("openfl.display.Bitmap","__getBounds",0x13081c76,"openfl.display.Bitmap.__getBounds","openfl/display/Bitmap.hx",52,0x461b2743)
		HX_STACK_THIS(this)
		HX_STACK_ARG(rect,"rect")
		HX_STACK_ARG(matrix,"matrix")
		HX_STACK_LINE(54)
		::openfl::display::BitmapData tmp = this->bitmapData;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(54)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(54)
		if ((tmp1)){
			HX_STACK_LINE(56)
			::openfl::geom::Rectangle tmp2 = ::openfl::geom::Rectangle_obj::__temp;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(56)
			::openfl::geom::Rectangle bounds = tmp2;		HX_STACK_VAR(bounds,"bounds");
			HX_STACK_LINE(57)
			::openfl::display::BitmapData tmp3 = this->bitmapData;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(57)
			int tmp4 = tmp3->width;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(57)
			::openfl::display::BitmapData tmp5 = this->bitmapData;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(57)
			int tmp6 = tmp5->height;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(57)
			bounds->setTo((int)0,(int)0,tmp4,tmp6);
			HX_STACK_LINE(58)
			::openfl::geom::Rectangle tmp7 = bounds;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(58)
			::openfl::geom::Matrix tmp8 = matrix;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(58)
			bounds->__transform(tmp7,tmp8);
			HX_STACK_LINE(60)
			Float tmp9 = bounds->x;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(60)
			Float tmp10 = bounds->y;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(60)
			Float tmp11 = bounds->width;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(60)
			Float tmp12 = bounds->height;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(60)
			rect->__expand(tmp9,tmp10,tmp11,tmp12);
		}
	}
return null();
}


bool Bitmap_obj::__hitTest( Float x,Float y,bool shapeFlag,Array< ::Dynamic > stack,bool interactiveOnly,::openfl::display::DisplayObject hitObject){
	HX_STACK_FRAME("openfl.display.Bitmap","__hitTest",0x80f61450,"openfl.display.Bitmap.__hitTest","openfl/display/Bitmap.hx",67,0x461b2743)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(shapeFlag,"shapeFlag")
	HX_STACK_ARG(stack,"stack")
	HX_STACK_ARG(interactiveOnly,"interactiveOnly")
	HX_STACK_ARG(hitObject,"hitObject")
	HX_STACK_LINE(69)
	bool tmp = hitObject->get_visible();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(69)
	bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(69)
	bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(69)
	bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(69)
	bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(69)
	bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(69)
	if ((tmp4)){
		HX_STACK_LINE(69)
		tmp5 = this->__isMask;
	}
	else{
		HX_STACK_LINE(69)
		tmp5 = true;
	}
	HX_STACK_LINE(69)
	bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(69)
	bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(69)
	if ((tmp6)){
		HX_STACK_LINE(69)
		::openfl::display::BitmapData tmp8 = this->bitmapData;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(69)
		::openfl::display::BitmapData tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(69)
		tmp7 = (tmp9 == null());
	}
	else{
		HX_STACK_LINE(69)
		tmp7 = true;
	}
	HX_STACK_LINE(69)
	if ((tmp7)){
		HX_STACK_LINE(69)
		return false;
	}
	HX_STACK_LINE(70)
	::openfl::display::DisplayObject tmp8 = this->get_mask();		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(70)
	bool tmp9 = (tmp8 != null());		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(70)
	bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(70)
	if ((tmp9)){
		HX_STACK_LINE(70)
		::openfl::display::DisplayObject tmp11 = this->get_mask();		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(70)
		::openfl::display::DisplayObject tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(70)
		Float tmp13 = x;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(70)
		Float tmp14 = y;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(70)
		Float tmp15 = tmp13;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(70)
		Float tmp16 = tmp14;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(70)
		bool tmp17 = tmp12->__hitTestMask(tmp15,tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(70)
		bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(70)
		bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(70)
		tmp10 = !(tmp19);
	}
	else{
		HX_STACK_LINE(70)
		tmp10 = false;
	}
	HX_STACK_LINE(70)
	if ((tmp10)){
		HX_STACK_LINE(70)
		return false;
	}
	HX_STACK_LINE(72)
	this->__getWorldTransform();
	HX_STACK_LINE(74)
	Float tmp11;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(74)
	{
		HX_STACK_LINE(74)
		::openfl::geom::Matrix tmp12 = this->__worldTransform;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(74)
		::openfl::geom::Matrix _this = tmp12;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(74)
		Float tmp13 = (_this->a * _this->d);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(74)
		Float tmp14 = (_this->b * _this->c);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(74)
		Float tmp15 = (tmp13 - tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(74)
		Float norm = tmp15;		HX_STACK_VAR(norm,"norm");
		HX_STACK_LINE(74)
		bool tmp16 = (norm == (int)0);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(74)
		if ((tmp16)){
			HX_STACK_LINE(74)
			Float tmp17 = _this->tx;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(74)
			tmp11 = -(tmp17);
		}
		else{
			HX_STACK_LINE(74)
			Float tmp17 = (Float(((Float)1.0)) / Float(norm));		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(74)
			Float tmp18 = _this->c;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(74)
			Float tmp19 = (_this->ty - y);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(74)
			Float tmp20 = (tmp18 * tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(74)
			Float tmp21 = _this->d;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(74)
			Float tmp22 = (x - _this->tx);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(74)
			Float tmp23 = (tmp21 * tmp22);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(74)
			Float tmp24 = (tmp20 + tmp23);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(74)
			tmp11 = (tmp17 * tmp24);
		}
	}
	HX_STACK_LINE(74)
	Float px = tmp11;		HX_STACK_VAR(px,"px");
	HX_STACK_LINE(75)
	Float tmp12;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(75)
	{
		HX_STACK_LINE(75)
		::openfl::geom::Matrix tmp13 = this->__worldTransform;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(75)
		::openfl::geom::Matrix _this = tmp13;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(75)
		Float tmp14 = (_this->a * _this->d);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(75)
		Float tmp15 = (_this->b * _this->c);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(75)
		Float tmp16 = (tmp14 - tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(75)
		Float norm = tmp16;		HX_STACK_VAR(norm,"norm");
		HX_STACK_LINE(75)
		bool tmp17 = (norm == (int)0);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(75)
		if ((tmp17)){
			HX_STACK_LINE(75)
			Float tmp18 = _this->ty;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(75)
			tmp12 = -(tmp18);
		}
		else{
			HX_STACK_LINE(75)
			Float tmp18 = (Float(((Float)1.0)) / Float(norm));		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(75)
			Float tmp19 = _this->a;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(75)
			Float tmp20 = (y - _this->ty);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(75)
			Float tmp21 = (tmp19 * tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(75)
			Float tmp22 = _this->b;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(75)
			Float tmp23 = (_this->tx - x);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(75)
			Float tmp24 = (tmp22 * tmp23);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(75)
			Float tmp25 = (tmp21 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(75)
			tmp12 = (tmp18 * tmp25);
		}
	}
	HX_STACK_LINE(75)
	Float py = tmp12;		HX_STACK_VAR(py,"py");
	HX_STACK_LINE(77)
	bool tmp13 = (px > (int)0);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(77)
	bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(77)
	bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(77)
	if ((tmp14)){
		HX_STACK_LINE(77)
		tmp15 = (py > (int)0);
	}
	else{
		HX_STACK_LINE(77)
		tmp15 = false;
	}
	HX_STACK_LINE(77)
	bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(77)
	bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(77)
	if ((tmp16)){
		HX_STACK_LINE(77)
		Float tmp18 = px;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(77)
		::openfl::display::BitmapData tmp19 = this->bitmapData;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(77)
		::openfl::display::BitmapData tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(77)
		::openfl::display::BitmapData tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(77)
		int tmp22 = tmp21->width;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(77)
		tmp17 = (tmp18 <= tmp22);
	}
	else{
		HX_STACK_LINE(77)
		tmp17 = false;
	}
	HX_STACK_LINE(77)
	bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(77)
	if ((tmp17)){
		HX_STACK_LINE(77)
		Float tmp19 = py;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(77)
		::openfl::display::BitmapData tmp20 = this->bitmapData;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(77)
		::openfl::display::BitmapData tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(77)
		int tmp22 = tmp21->height;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(77)
		tmp18 = (tmp19 <= tmp22);
	}
	else{
		HX_STACK_LINE(77)
		tmp18 = false;
	}
	HX_STACK_LINE(77)
	if ((tmp18)){
		HX_STACK_LINE(79)
		bool tmp19 = (stack != null());		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(79)
		bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(79)
		if ((tmp19)){
			HX_STACK_LINE(79)
			bool tmp21 = interactiveOnly;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(79)
			bool tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(79)
			tmp20 = !(tmp22);
		}
		else{
			HX_STACK_LINE(79)
			tmp20 = false;
		}
		HX_STACK_LINE(79)
		if ((tmp20)){
			HX_STACK_LINE(81)
			::openfl::display::DisplayObject tmp21 = hitObject;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(81)
			stack->push(tmp21);
		}
		HX_STACK_LINE(85)
		return true;
	}
	HX_STACK_LINE(89)
	return false;
}


bool Bitmap_obj::__hitTestMask( Float x,Float y){
	HX_STACK_FRAME("openfl.display.Bitmap","__hitTestMask",0x7acde95c,"openfl.display.Bitmap.__hitTestMask","openfl/display/Bitmap.hx",94,0x461b2743)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_LINE(96)
	::openfl::display::BitmapData tmp = this->bitmapData;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(96)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(96)
	if ((tmp1)){
		HX_STACK_LINE(96)
		return false;
	}
	HX_STACK_LINE(98)
	this->__getWorldTransform();
	HX_STACK_LINE(100)
	Float tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(100)
	{
		HX_STACK_LINE(100)
		::openfl::geom::Matrix tmp3 = this->__worldTransform;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(100)
		::openfl::geom::Matrix _this = tmp3;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(100)
		Float tmp4 = (_this->a * _this->d);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(100)
		Float tmp5 = (_this->b * _this->c);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(100)
		Float tmp6 = (tmp4 - tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(100)
		Float norm = tmp6;		HX_STACK_VAR(norm,"norm");
		HX_STACK_LINE(100)
		bool tmp7 = (norm == (int)0);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(100)
		if ((tmp7)){
			HX_STACK_LINE(100)
			Float tmp8 = _this->tx;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(100)
			tmp2 = -(tmp8);
		}
		else{
			HX_STACK_LINE(100)
			Float tmp8 = (Float(((Float)1.0)) / Float(norm));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(100)
			Float tmp9 = _this->c;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(100)
			Float tmp10 = (_this->ty - y);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(100)
			Float tmp11 = (tmp9 * tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(100)
			Float tmp12 = _this->d;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(100)
			Float tmp13 = (x - _this->tx);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(100)
			Float tmp14 = (tmp12 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(100)
			Float tmp15 = (tmp11 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(100)
			tmp2 = (tmp8 * tmp15);
		}
	}
	HX_STACK_LINE(100)
	Float px = tmp2;		HX_STACK_VAR(px,"px");
	HX_STACK_LINE(101)
	Float tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(101)
	{
		HX_STACK_LINE(101)
		::openfl::geom::Matrix tmp4 = this->__worldTransform;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(101)
		::openfl::geom::Matrix _this = tmp4;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(101)
		Float tmp5 = (_this->a * _this->d);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(101)
		Float tmp6 = (_this->b * _this->c);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(101)
		Float tmp7 = (tmp5 - tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(101)
		Float norm = tmp7;		HX_STACK_VAR(norm,"norm");
		HX_STACK_LINE(101)
		bool tmp8 = (norm == (int)0);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(101)
		if ((tmp8)){
			HX_STACK_LINE(101)
			Float tmp9 = _this->ty;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(101)
			tmp3 = -(tmp9);
		}
		else{
			HX_STACK_LINE(101)
			Float tmp9 = (Float(((Float)1.0)) / Float(norm));		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(101)
			Float tmp10 = _this->a;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(101)
			Float tmp11 = (y - _this->ty);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(101)
			Float tmp12 = (tmp10 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(101)
			Float tmp13 = _this->b;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(101)
			Float tmp14 = (_this->tx - x);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(101)
			Float tmp15 = (tmp13 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(101)
			Float tmp16 = (tmp12 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(101)
			tmp3 = (tmp9 * tmp16);
		}
	}
	HX_STACK_LINE(101)
	Float py = tmp3;		HX_STACK_VAR(py,"py");
	HX_STACK_LINE(103)
	bool tmp4 = (px > (int)0);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(103)
	bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(103)
	bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(103)
	if ((tmp5)){
		HX_STACK_LINE(103)
		tmp6 = (py > (int)0);
	}
	else{
		HX_STACK_LINE(103)
		tmp6 = false;
	}
	HX_STACK_LINE(103)
	bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(103)
	bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(103)
	if ((tmp7)){
		HX_STACK_LINE(103)
		Float tmp9 = px;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(103)
		::openfl::display::BitmapData tmp10 = this->bitmapData;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(103)
		::openfl::display::BitmapData tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(103)
		::openfl::display::BitmapData tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(103)
		int tmp13 = tmp12->width;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(103)
		tmp8 = (tmp9 <= tmp13);
	}
	else{
		HX_STACK_LINE(103)
		tmp8 = false;
	}
	HX_STACK_LINE(103)
	bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(103)
	if ((tmp8)){
		HX_STACK_LINE(103)
		Float tmp10 = py;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(103)
		::openfl::display::BitmapData tmp11 = this->bitmapData;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(103)
		::openfl::display::BitmapData tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(103)
		int tmp13 = tmp12->height;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(103)
		tmp9 = (tmp10 <= tmp13);
	}
	else{
		HX_STACK_LINE(103)
		tmp9 = false;
	}
	HX_STACK_LINE(103)
	if ((tmp9)){
		HX_STACK_LINE(105)
		return true;
	}
	HX_STACK_LINE(109)
	return false;
}


Void Bitmap_obj::__renderCairo( ::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl.display.Bitmap","__renderCairo",0x941372dd,"openfl.display.Bitmap.__renderCairo","openfl/display/Bitmap.hx",116,0x461b2743)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_LINE(116)
		bool tmp = this->__renderable;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(116)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(116)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(116)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(116)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(116)
		if ((tmp3)){
			HX_STACK_LINE(116)
			Float tmp5 = this->__worldAlpha;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(116)
			Float tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(116)
			tmp4 = (tmp6 <= (int)0);
		}
		else{
			HX_STACK_LINE(116)
			tmp4 = true;
		}
		HX_STACK_LINE(116)
		if ((tmp4)){
			HX_STACK_LINE(116)
			Dynamic();
		}
		else{
			HX_STACK_LINE(116)
			::lime::graphics::cairo::Cairo cairo = renderSession->cairo;		HX_STACK_VAR(cairo,"cairo");
			HX_STACK_LINE(116)
			::openfl::display::BitmapData tmp5 = this->bitmapData;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(116)
			bool tmp6 = (tmp5 != null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(116)
			bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(116)
			if ((tmp6)){
				HX_STACK_LINE(116)
				::openfl::display::BitmapData tmp8 = this->bitmapData;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(116)
				::openfl::display::BitmapData tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(116)
				tmp7 = tmp9->__isValid;
			}
			else{
				HX_STACK_LINE(116)
				tmp7 = false;
			}
			HX_STACK_LINE(116)
			if ((tmp7)){
				HX_STACK_LINE(116)
				renderSession->maskManager->pushObject(hx::ObjectPtr<OBJ_>(this),null());
				HX_STACK_LINE(116)
				::openfl::geom::Matrix tmp8 = this->__worldTransform;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(116)
				::openfl::geom::Matrix transform = tmp8;		HX_STACK_VAR(transform,"transform");
				HX_STACK_LINE(116)
				bool tmp9 = renderSession->roundPixels;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(116)
				if ((tmp9)){
					HX_STACK_LINE(116)
					::lime::math::Matrix3 tmp10 = transform->__toMatrix3();		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(116)
					::lime::math::Matrix3 matrix = tmp10;		HX_STACK_VAR(matrix,"matrix");
					HX_STACK_LINE(116)
					Float tmp11 = matrix->tx;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(116)
					int tmp12 = ::Math_obj::round(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(116)
					matrix->tx = tmp12;
					HX_STACK_LINE(116)
					Float tmp13 = matrix->ty;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(116)
					int tmp14 = ::Math_obj::round(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(116)
					matrix->ty = tmp14;
					HX_STACK_LINE(116)
					::lime::math::Matrix3 tmp15 = matrix;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(116)
					cairo->set_matrix(tmp15);
				}
				else{
					HX_STACK_LINE(116)
					::lime::math::Matrix3 tmp10 = transform->__toMatrix3();		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(116)
					cairo->set_matrix(tmp10);
				}
				HX_STACK_LINE(116)
				::openfl::display::BitmapData tmp10 = this->bitmapData;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(116)
				Dynamic tmp11 = tmp10->getSurface();		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(116)
				Dynamic surface = tmp11;		HX_STACK_VAR(surface,"surface");
				HX_STACK_LINE(116)
				bool tmp12 = (surface != null());		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(116)
				if ((tmp12)){
					HX_STACK_LINE(116)
					Dynamic tmp13 = surface;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(116)
					Dynamic tmp14 = ::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::createForSurface(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(116)
					Dynamic pattern = tmp14;		HX_STACK_VAR(pattern,"pattern");
					HX_STACK_LINE(116)
					Dynamic tmp15 = pattern;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(116)
					bool tmp16 = this->smoothing;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(116)
					int tmp17;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(116)
					if ((tmp16)){
						HX_STACK_LINE(116)
						tmp17 = (int)1;
					}
					else{
						HX_STACK_LINE(116)
						tmp17 = (int)3;
					}
					HX_STACK_LINE(116)
					::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::set_filter(tmp15,tmp17);
					HX_STACK_LINE(116)
					Dynamic tmp18 = pattern;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(116)
					cairo->set_source(tmp18);
					HX_STACK_LINE(116)
					Float tmp19 = this->__worldAlpha;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(116)
					bool tmp20 = (tmp19 == (int)1);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(116)
					if ((tmp20)){
						HX_STACK_LINE(116)
						cairo->paint();
					}
					else{
						HX_STACK_LINE(116)
						Float tmp21 = this->__worldAlpha;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(116)
						cairo->paintWithAlpha(tmp21);
					}
				}
				HX_STACK_LINE(116)
				renderSession->maskManager->popObject(hx::ObjectPtr<OBJ_>(this),null());
			}
		}
	}
return null();
}


Void Bitmap_obj::__renderCairoMask( ::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl.display.Bitmap","__renderCairoMask",0xba721269,"openfl.display.Bitmap.__renderCairoMask","openfl/display/Bitmap.hx",121,0x461b2743)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_LINE(123)
		Float tmp = this->get_width();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(123)
		Float tmp1 = this->get_height();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(123)
		renderSession->cairo->rectangle((int)0,(int)0,tmp,tmp1);
	}
return null();
}


Void Bitmap_obj::__renderCanvas( ::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl.display.Bitmap","__renderCanvas",0x00421ce3,"openfl.display.Bitmap.__renderCanvas","openfl/display/Bitmap.hx",130,0x461b2743)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_LINE(130)
		Dynamic();
	}
return null();
}


Void Bitmap_obj::__renderCanvasMask( ::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl.display.Bitmap","__renderCanvasMask",0x68a5376f,"openfl.display.Bitmap.__renderCanvasMask","openfl/display/Bitmap.hx",135,0x461b2743)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_LINE(137)
		Float tmp = this->get_width();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(137)
		Float tmp1 = this->get_height();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(137)
		renderSession->context->rect((int)0,(int)0,tmp,tmp1);
	}
return null();
}


Void Bitmap_obj::__renderDOM( ::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl.display.Bitmap","__renderDOM",0xfdebb997,"openfl.display.Bitmap.__renderDOM","openfl/display/Bitmap.hx",144,0x461b2743)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_LINE(144)
		Dynamic();
	}
return null();
}


Void Bitmap_obj::__renderGL( ::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl.display.Bitmap","__renderGL",0xbc428090,"openfl.display.Bitmap.__renderGL","openfl/display/Bitmap.hx",151,0x461b2743)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_LINE(151)
		bool tmp = this->__renderable;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(151)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(151)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(151)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(151)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(151)
		if ((tmp3)){
			HX_STACK_LINE(151)
			Float tmp5 = this->__worldAlpha;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(151)
			Float tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(151)
			tmp4 = (tmp6 <= (int)0);
		}
		else{
			HX_STACK_LINE(151)
			tmp4 = true;
		}
		HX_STACK_LINE(151)
		if ((tmp4)){
			HX_STACK_LINE(151)
			Dynamic();
		}
		else{
			HX_STACK_LINE(151)
			::lime::graphics::GLRenderContext gl = renderSession->gl;		HX_STACK_VAR(gl,"gl");
			HX_STACK_LINE(151)
			::openfl::display::BitmapData tmp5 = this->bitmapData;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(151)
			bool tmp6 = (tmp5 != null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(151)
			bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(151)
			if ((tmp6)){
				HX_STACK_LINE(151)
				::openfl::display::BitmapData tmp8 = this->bitmapData;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(151)
				::openfl::display::BitmapData tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(151)
				tmp7 = tmp9->__isValid;
			}
			else{
				HX_STACK_LINE(151)
				tmp7 = false;
			}
			HX_STACK_LINE(151)
			if ((tmp7)){
				HX_STACK_LINE(151)
				::openfl::display::Shader shader;		HX_STACK_VAR(shader,"shader");
				HX_STACK_LINE(151)
				bool tmp8 = (this->__filters != null());		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(151)
				bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(151)
				if ((tmp8)){
					HX_STACK_LINE(151)
					::openfl::filters::BitmapFilter tmp10 = this->__filters->__get((int)0).StaticCast< ::openfl::filters::BitmapFilter >();		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(151)
					::openfl::filters::BitmapFilter tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(151)
					::openfl::filters::BitmapFilter tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(151)
					tmp9 = ::Std_obj::is(tmp12,hx::ClassOf< ::openfl::filters::ShaderFilter >());
				}
				else{
					HX_STACK_LINE(151)
					tmp9 = false;
				}
				HX_STACK_LINE(151)
				if ((tmp9)){
					HX_STACK_LINE(151)
					::openfl::filters::BitmapFilter tmp10 = this->__filters->__get((int)0).StaticCast< ::openfl::filters::BitmapFilter >();		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(151)
					::openfl::filters::ShaderFilter tmp11;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(151)
					tmp11 = hx::TCast< ::openfl::filters::ShaderFilter >::cast(tmp10);
					HX_STACK_LINE(151)
					shader = tmp11->shader;
				}
				else{
					HX_STACK_LINE(151)
					::openfl::display::Shader tmp10 = renderSession->shaderManager->defaultShader;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(151)
					shader = tmp10;
				}
				HX_STACK_LINE(151)
				Dynamic tmp10 = this->get_blendMode();		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(151)
				renderSession->blendModeManager->setBlendMode(tmp10);
				HX_STACK_LINE(151)
				::openfl::display::Shader tmp11 = shader;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(151)
				renderSession->shaderManager->setShader(tmp11);
				HX_STACK_LINE(151)
				renderSession->maskManager->pushObject(hx::ObjectPtr<OBJ_>(this),null());
				HX_STACK_LINE(151)
				::openfl::_internal::renderer::opengl::GLRenderer renderer = ((::openfl::_internal::renderer::opengl::GLRenderer)(renderSession->renderer));		HX_STACK_VAR(renderer,"renderer");
				HX_STACK_LINE(151)
				{
					HX_STACK_LINE(151)
					int index = shader->data->__Field(HX_HCSTRING("aAlpha","\x3d","\x17","\x62","\x7d"), hx::paccDynamic )->__Field(HX_HCSTRING("index","\x12","\x9b","\x14","\xbe"), hx::paccDynamic );		HX_STACK_VAR(index,"index");
					HX_STACK_LINE(151)
					::lime::graphics::opengl::GL_obj::cffi_lime_gl_enable_vertex_attrib_array.call(index);
				}
				HX_STACK_LINE(151)
				{
					HX_STACK_LINE(151)
					int location = shader->data->__Field(HX_HCSTRING("uMatrix","\x96","\xf0","\xab","\xf1"), hx::paccDynamic )->__Field(HX_HCSTRING("index","\x12","\x9b","\x14","\xbe"), hx::paccDynamic );		HX_STACK_VAR(location,"location");
					HX_STACK_LINE(151)
					::openfl::geom::Matrix tmp12 = this->__worldTransform;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(151)
					::lime::utils::ArrayBufferView tmp13 = renderer->getMatrix(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(151)
					::lime::utils::ArrayBufferView v = tmp13;		HX_STACK_VAR(v,"v");
					HX_STACK_LINE(151)
					::lime::graphics::opengl::GL_obj::cffi_lime_gl_uniform_matrix.call(location,false,hx::DynamicPtr(v->buffer),(int)4);
				}
				HX_STACK_LINE(151)
				{
					HX_STACK_LINE(151)
					::openfl::display::BitmapData tmp12 = this->bitmapData;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(151)
					::lime::graphics::GLRenderContext tmp13 = gl;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(151)
					::lime::graphics::opengl::GLTexture tmp14 = tmp12->getTexture(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(151)
					::lime::graphics::opengl::GLTexture texture = tmp14;		HX_STACK_VAR(texture,"texture");
					HX_STACK_LINE(151)
					::lime::graphics::opengl::GL_obj::cffi_lime_gl_bind_texture.call(gl->TEXTURE_2D,hx::DynamicPtr((  (((texture == null()))) ? Dynamic(null()) : Dynamic(texture->id) )));
				}
				HX_STACK_LINE(151)
				bool tmp12 = this->smoothing;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(151)
				bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(151)
				bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(151)
				if ((tmp13)){
					HX_STACK_LINE(151)
					::openfl::display::Stage tmp15 = this->stage;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(151)
					::openfl::display::Stage tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(151)
					bool tmp17 = (tmp16 != null());		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(151)
					bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(151)
					bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(151)
					if ((tmp19)){
						HX_STACK_LINE(151)
						::openfl::display::Stage tmp20 = this->stage;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(151)
						::openfl::display::Stage tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(151)
						::openfl::display::Stage tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(151)
						Float tmp23 = tmp22->__displayMatrix->a;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(151)
						Float tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(151)
						Float tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(151)
						bool tmp26 = (tmp25 != (int)1);		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(151)
						bool tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(151)
						bool tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(151)
						bool tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(151)
						bool tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(151)
						bool tmp31 = !(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(151)
						bool tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(151)
						bool tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(151)
						bool tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(151)
						bool tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(151)
						if ((tmp35)){
							HX_STACK_LINE(151)
							::openfl::display::Stage tmp36 = this->stage;		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(151)
							::openfl::display::Stage tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(151)
							::openfl::display::Stage tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(151)
							::openfl::display::Stage tmp39 = tmp38;		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(151)
							Float tmp40 = tmp39->__displayMatrix->d;		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(151)
							Float tmp41 = tmp40;		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(151)
							Float tmp42 = tmp41;		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(151)
							Float tmp43 = tmp42;		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(151)
							tmp14 = (tmp43 != (int)1);
						}
						else{
							HX_STACK_LINE(151)
							tmp14 = true;
						}
					}
					else{
						HX_STACK_LINE(151)
						tmp14 = false;
					}
				}
				else{
					HX_STACK_LINE(151)
					tmp14 = true;
				}
				HX_STACK_LINE(151)
				if ((tmp14)){
					HX_STACK_LINE(151)
					::lime::graphics::opengl::GL_obj::cffi_lime_gl_tex_parameteri.call(gl->TEXTURE_2D,gl->TEXTURE_MAG_FILTER,gl->LINEAR);
					HX_STACK_LINE(151)
					::lime::graphics::opengl::GL_obj::cffi_lime_gl_tex_parameteri.call(gl->TEXTURE_2D,gl->TEXTURE_MIN_FILTER,gl->LINEAR);
				}
				else{
					HX_STACK_LINE(151)
					::lime::graphics::opengl::GL_obj::cffi_lime_gl_tex_parameteri.call(gl->TEXTURE_2D,gl->TEXTURE_MAG_FILTER,gl->NEAREST);
					HX_STACK_LINE(151)
					::lime::graphics::opengl::GL_obj::cffi_lime_gl_tex_parameteri.call(gl->TEXTURE_2D,gl->TEXTURE_MIN_FILTER,gl->NEAREST);
				}
				HX_STACK_LINE(151)
				{
					HX_STACK_LINE(151)
					::openfl::display::BitmapData tmp15 = this->bitmapData;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(151)
					::lime::graphics::GLRenderContext tmp16 = gl;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(151)
					Float tmp17 = this->__worldAlpha;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(151)
					::lime::graphics::opengl::GLBuffer tmp18 = tmp15->getBuffer(tmp16,tmp17);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(151)
					::lime::graphics::opengl::GLBuffer buffer = tmp18;		HX_STACK_VAR(buffer,"buffer");
					HX_STACK_LINE(151)
					::lime::graphics::opengl::GL_obj::cffi_lime_gl_bind_buffer.call(gl->ARRAY_BUFFER,hx::DynamicPtr((  (((buffer == null()))) ? Dynamic(null()) : Dynamic(buffer->id) )));
				}
				HX_STACK_LINE(151)
				{
					HX_STACK_LINE(151)
					int indx = shader->data->__Field(HX_HCSTRING("aPosition","\x2a","\x26","\x25","\x92"), hx::paccDynamic )->__Field(HX_HCSTRING("index","\x12","\x9b","\x14","\xbe"), hx::paccDynamic );		HX_STACK_VAR(indx,"indx");
					HX_STACK_LINE(151)
					::lime::graphics::opengl::GL_obj::cffi_lime_gl_vertex_attrib_pointer.call(indx,(int)3,gl->FLOAT,false,(int)24,(int)0);
				}
				HX_STACK_LINE(151)
				{
					HX_STACK_LINE(151)
					int indx = shader->data->__Field(HX_HCSTRING("aTexCoord","\xcf","\x8c","\x5d","\xf2"), hx::paccDynamic )->__Field(HX_HCSTRING("index","\x12","\x9b","\x14","\xbe"), hx::paccDynamic );		HX_STACK_VAR(indx,"indx");
					HX_STACK_LINE(151)
					::lime::graphics::opengl::GL_obj::cffi_lime_gl_vertex_attrib_pointer.call(indx,(int)2,gl->FLOAT,false,(int)24,(int)12);
				}
				HX_STACK_LINE(151)
				{
					HX_STACK_LINE(151)
					int indx = shader->data->__Field(HX_HCSTRING("aAlpha","\x3d","\x17","\x62","\x7d"), hx::paccDynamic )->__Field(HX_HCSTRING("index","\x12","\x9b","\x14","\xbe"), hx::paccDynamic );		HX_STACK_VAR(indx,"indx");
					HX_STACK_LINE(151)
					::lime::graphics::opengl::GL_obj::cffi_lime_gl_vertex_attrib_pointer.call(indx,(int)1,gl->FLOAT,false,(int)24,(int)20);
				}
				HX_STACK_LINE(151)
				::lime::graphics::opengl::GL_obj::cffi_lime_gl_draw_arrays.call(gl->TRIANGLE_STRIP,(int)0,(int)4);
				HX_STACK_LINE(151)
				renderSession->maskManager->popObject(hx::ObjectPtr<OBJ_>(this),null());
			}
		}
	}
return null();
}


Void Bitmap_obj::__updateMask( ::openfl::display::Graphics maskGraphics){
{
		HX_STACK_FRAME("openfl.display.Bitmap","__updateMask",0x5202506a,"openfl.display.Bitmap.__updateMask","openfl/display/Bitmap.hx",156,0x461b2743)
		HX_STACK_THIS(this)
		HX_STACK_ARG(maskGraphics,"maskGraphics")
		HX_STACK_LINE(158)
		::openfl::display::BitmapData tmp = this->bitmapData;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(158)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(158)
		if ((tmp1)){
			HX_STACK_LINE(160)
			return null();
		}
		HX_STACK_LINE(164)
		::openfl::geom::Matrix tmp2 = this->__worldTransform;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(164)
		maskGraphics->__commands->overrideMatrix(tmp2);
		HX_STACK_LINE(165)
		maskGraphics->beginFill((int)0,null());
		HX_STACK_LINE(166)
		::openfl::display::BitmapData tmp3 = this->bitmapData;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(166)
		int tmp4 = tmp3->width;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(166)
		::openfl::display::BitmapData tmp5 = this->bitmapData;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(166)
		int tmp6 = tmp5->height;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(166)
		maskGraphics->drawRect((int)0,(int)0,tmp4,tmp6);
		HX_STACK_LINE(168)
		bool tmp7 = (maskGraphics->__bounds == null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(168)
		if ((tmp7)){
			HX_STACK_LINE(170)
			::openfl::geom::Rectangle tmp8 = ::openfl::geom::Rectangle_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(170)
			maskGraphics->__bounds = tmp8;
		}
		HX_STACK_LINE(174)
		::openfl::geom::Rectangle tmp8 = maskGraphics->__bounds;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(174)
		::openfl::geom::Matrix tmp9 = ::openfl::geom::Matrix_obj::__identity;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(174)
		this->__getBounds(tmp8,tmp9);
		HX_STACK_LINE(176)
		::openfl::display::Graphics tmp10 = maskGraphics;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(176)
		this->super::__updateMask(tmp10);
	}
return null();
}


::openfl::display::BitmapData Bitmap_obj::set_bitmapData( ::openfl::display::BitmapData value){
	HX_STACK_FRAME("openfl.display.Bitmap","set_bitmapData",0x81bf676b,"openfl.display.Bitmap.set_bitmapData","openfl/display/Bitmap.hx",187,0x461b2743)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(189)
	this->bitmapData = value;
	HX_STACK_LINE(191)
	bool tmp = (this->__filters != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(191)
	bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(191)
	if ((tmp)){
		HX_STACK_LINE(191)
		int tmp2 = this->__filters->length;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(191)
		int tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(191)
		tmp1 = (tmp3 > (int)0);
	}
	else{
		HX_STACK_LINE(191)
		tmp1 = false;
	}
	HX_STACK_LINE(191)
	if ((tmp1)){
	}
	HX_STACK_LINE(197)
	::openfl::display::BitmapData tmp2 = this->bitmapData;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(197)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Bitmap_obj,set_bitmapData,return )

Float Bitmap_obj::get_height( ){
	HX_STACK_FRAME("openfl.display.Bitmap","get_height",0x5901da25,"openfl.display.Bitmap.get_height","openfl/display/Bitmap.hx",202,0x461b2743)
	HX_STACK_THIS(this)
	HX_STACK_LINE(204)
	::openfl::display::BitmapData tmp = this->bitmapData;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(204)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(204)
	if ((tmp1)){
		HX_STACK_LINE(206)
		::openfl::display::BitmapData tmp2 = this->bitmapData;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(206)
		int tmp3 = tmp2->height;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(206)
		Float tmp4 = this->get_scaleY();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(206)
		Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(206)
		return tmp5;
	}
	HX_STACK_LINE(210)
	return (int)0;
}


Float Bitmap_obj::set_height( Float value){
	HX_STACK_FRAME("openfl.display.Bitmap","set_height",0x5c7f7899,"openfl.display.Bitmap.set_height","openfl/display/Bitmap.hx",215,0x461b2743)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(217)
	::openfl::display::BitmapData tmp = this->bitmapData;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(217)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(217)
	if ((tmp1)){
		HX_STACK_LINE(219)
		Float tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(219)
		::openfl::display::BitmapData tmp3 = this->bitmapData;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(219)
		int tmp4 = tmp3->height;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(219)
		bool tmp5 = (tmp2 != tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(219)
		if ((tmp5)){
			HX_STACK_LINE(221)
			Float tmp6 = value;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(221)
			::openfl::display::BitmapData tmp7 = this->bitmapData;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(221)
			int tmp8 = tmp7->height;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(221)
			Float tmp9 = (Float(tmp6) / Float(tmp8));		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(221)
			this->set_scaleY(tmp9);
		}
		HX_STACK_LINE(225)
		Float tmp6 = value;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(225)
		return tmp6;
	}
	HX_STACK_LINE(229)
	return (int)0;
}


Float Bitmap_obj::get_width( ){
	HX_STACK_FRAME("openfl.display.Bitmap","get_width",0x2b347588,"openfl.display.Bitmap.get_width","openfl/display/Bitmap.hx",234,0x461b2743)
	HX_STACK_THIS(this)
	HX_STACK_LINE(236)
	::openfl::display::BitmapData tmp = this->bitmapData;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(236)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(236)
	if ((tmp1)){
		HX_STACK_LINE(238)
		::openfl::display::BitmapData tmp2 = this->bitmapData;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(238)
		int tmp3 = tmp2->width;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(238)
		Float tmp4 = this->get_scaleX();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(238)
		Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(238)
		return tmp5;
	}
	HX_STACK_LINE(242)
	return (int)0;
}


Float Bitmap_obj::set_width( Float value){
	HX_STACK_FRAME("openfl.display.Bitmap","set_width",0x0e856194,"openfl.display.Bitmap.set_width","openfl/display/Bitmap.hx",247,0x461b2743)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(249)
	::openfl::display::BitmapData tmp = this->bitmapData;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(249)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(249)
	if ((tmp1)){
		HX_STACK_LINE(251)
		Float tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(251)
		::openfl::display::BitmapData tmp3 = this->bitmapData;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(251)
		int tmp4 = tmp3->width;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(251)
		bool tmp5 = (tmp2 != tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(251)
		if ((tmp5)){
			HX_STACK_LINE(253)
			Float tmp6 = value;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(253)
			::openfl::display::BitmapData tmp7 = this->bitmapData;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(253)
			int tmp8 = tmp7->width;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(253)
			Float tmp9 = (Float(tmp6) / Float(tmp8));		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(253)
			this->set_scaleX(tmp9);
		}
		HX_STACK_LINE(257)
		Float tmp6 = value;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(257)
		return tmp6;
	}
	HX_STACK_LINE(261)
	return (int)0;
}



Bitmap_obj::Bitmap_obj()
{
}

void Bitmap_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Bitmap);
	HX_MARK_MEMBER_NAME(bitmapData,"bitmapData");
	HX_MARK_MEMBER_NAME(pixelSnapping,"pixelSnapping");
	HX_MARK_MEMBER_NAME(smoothing,"smoothing");
	::openfl::display::DisplayObject_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Bitmap_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(bitmapData,"bitmapData");
	HX_VISIT_MEMBER_NAME(pixelSnapping,"pixelSnapping");
	HX_VISIT_MEMBER_NAME(smoothing,"smoothing");
	::openfl::display::DisplayObject_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Bitmap_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"smoothing") ) { return smoothing; }
		if (HX_FIELD_EQ(inName,"__hitTest") ) { return __hitTest_dyn(); }
		if (HX_FIELD_EQ(inName,"get_width") ) { return get_width_dyn(); }
		if (HX_FIELD_EQ(inName,"set_width") ) { return set_width_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bitmapData") ) { return bitmapData; }
		if (HX_FIELD_EQ(inName,"__renderGL") ) { return __renderGL_dyn(); }
		if (HX_FIELD_EQ(inName,"get_height") ) { return get_height_dyn(); }
		if (HX_FIELD_EQ(inName,"set_height") ) { return set_height_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"__getBounds") ) { return __getBounds_dyn(); }
		if (HX_FIELD_EQ(inName,"__renderDOM") ) { return __renderDOM_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__updateMask") ) { return __updateMask_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"pixelSnapping") ) { return pixelSnapping; }
		if (HX_FIELD_EQ(inName,"__hitTestMask") ) { return __hitTestMask_dyn(); }
		if (HX_FIELD_EQ(inName,"__renderCairo") ) { return __renderCairo_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__renderCanvas") ) { return __renderCanvas_dyn(); }
		if (HX_FIELD_EQ(inName,"set_bitmapData") ) { return set_bitmapData_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__renderCairoMask") ) { return __renderCairoMask_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"__renderCanvasMask") ) { return __renderCanvasMask_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Bitmap_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"smoothing") ) { smoothing=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bitmapData") ) { if (inCallProp == hx::paccAlways) return set_bitmapData(inValue);bitmapData=inValue.Cast< ::openfl::display::BitmapData >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"pixelSnapping") ) { pixelSnapping=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Bitmap_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("bitmapData","\xb9","\xb5","\xc0","\x33"));
	outFields->push(HX_HCSTRING("pixelSnapping","\x62","\xae","\xa1","\xb8"));
	outFields->push(HX_HCSTRING("smoothing","\x74","\xd5","\xe1","\x95"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::display::BitmapData*/ ,(int)offsetof(Bitmap_obj,bitmapData),HX_HCSTRING("bitmapData","\xb9","\xb5","\xc0","\x33")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Bitmap_obj,pixelSnapping),HX_HCSTRING("pixelSnapping","\x62","\xae","\xa1","\xb8")},
	{hx::fsBool,(int)offsetof(Bitmap_obj,smoothing),HX_HCSTRING("smoothing","\x74","\xd5","\xe1","\x95")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("bitmapData","\xb9","\xb5","\xc0","\x33"),
	HX_HCSTRING("pixelSnapping","\x62","\xae","\xa1","\xb8"),
	HX_HCSTRING("smoothing","\x74","\xd5","\xe1","\x95"),
	HX_HCSTRING("__getBounds","\x8b","\x58","\xa0","\x10"),
	HX_HCSTRING("__hitTest","\x25","\xb1","\xcd","\x63"),
	HX_HCSTRING("__hitTestMask","\xb1","\x14","\xfd","\x3b"),
	HX_HCSTRING("__renderCairo","\x32","\x9e","\x42","\x55"),
	HX_HCSTRING("__renderCairoMask","\x3e","\x0c","\x22","\x6b"),
	HX_HCSTRING("__renderCanvas","\xee","\xdb","\x58","\x48"),
	HX_HCSTRING("__renderCanvasMask","\xfa","\xd7","\xef","\x51"),
	HX_HCSTRING("__renderDOM","\xac","\xf5","\x83","\xfb"),
	HX_HCSTRING("__renderGL","\x1b","\x1e","\x14","\x56"),
	HX_HCSTRING("__updateMask","\xb5","\xa6","\x9e","\x39"),
	HX_HCSTRING("set_bitmapData","\x76","\x26","\xd6","\xc9"),
	HX_HCSTRING("get_height","\xb0","\x77","\xd3","\xf2"),
	HX_HCSTRING("set_height","\x24","\x16","\x51","\xf6"),
	HX_HCSTRING("get_width","\x5d","\x12","\x0c","\x0e"),
	HX_HCSTRING("set_width","\x69","\xfe","\x5c","\xf1"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Bitmap_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Bitmap_obj::__mClass,"__mClass");
};

#endif

hx::Class Bitmap_obj::__mClass;

void Bitmap_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.display.Bitmap","\xd9","\x2f","\x4d","\x7b");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Bitmap_obj >;
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
} // end namespace display
