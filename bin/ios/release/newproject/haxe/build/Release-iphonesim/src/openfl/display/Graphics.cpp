#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_lime_graphics_cairo_Cairo
#include <lime/graphics/cairo/Cairo.h>
#endif
#ifndef INCLUDED_openfl_Lib
#include <openfl/Lib.h>
#endif
#ifndef INCLUDED_openfl__Vector_FloatVector
#include <openfl/_Vector/FloatVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_IVector
#include <openfl/_Vector/IVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_IntVector
#include <openfl/_Vector/IntVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_ObjectVector
#include <openfl/_Vector/ObjectVector.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_DrawCommandBuffer
#include <openfl/_internal/renderer/DrawCommandBuffer.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_DrawCommandReader
#include <openfl/_internal/renderer/DrawCommandReader.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_DrawCommandType
#include <openfl/_internal/renderer/DrawCommandType.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_cairo_CairoGraphics
#include <openfl/_internal/renderer/cairo/CairoGraphics.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_Graphics
#include <openfl/display/Graphics.h>
#endif
#ifndef INCLUDED_openfl_display_GraphicsBitmapFill
#include <openfl/display/GraphicsBitmapFill.h>
#endif
#ifndef INCLUDED_openfl_display_GraphicsEndFill
#include <openfl/display/GraphicsEndFill.h>
#endif
#ifndef INCLUDED_openfl_display_GraphicsGradientFill
#include <openfl/display/GraphicsGradientFill.h>
#endif
#ifndef INCLUDED_openfl_display_GraphicsPath
#include <openfl/display/GraphicsPath.h>
#endif
#ifndef INCLUDED_openfl_display_GraphicsSolidFill
#include <openfl/display/GraphicsSolidFill.h>
#endif
#ifndef INCLUDED_openfl_display_GraphicsStroke
#include <openfl/display/GraphicsStroke.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_IGraphicsData
#include <openfl/display/IGraphicsData.h>
#endif
#ifndef INCLUDED_openfl_display_IGraphicsFill
#include <openfl/display/IGraphicsFill.h>
#endif
#ifndef INCLUDED_openfl_display_IGraphicsPath
#include <openfl/display/IGraphicsPath.h>
#endif
#ifndef INCLUDED_openfl_display_IGraphicsStroke
#include <openfl/display/IGraphicsStroke.h>
#endif
#ifndef INCLUDED_openfl_errors_ArgumentError
#include <openfl/errors/ArgumentError.h>
#endif
#ifndef INCLUDED_openfl_errors_Error
#include <openfl/errors/Error.h>
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
namespace display{

Void Graphics_obj::__construct(::openfl::display::DisplayObject owner)
{
HX_STACK_FRAME("openfl.display.Graphics","new",0x7fd846a7,"openfl.display.Graphics.new","openfl/display/Graphics.hx",35,0x8d299ce7)
HX_STACK_THIS(this)
HX_STACK_ARG(owner,"owner")
{
	HX_STACK_LINE(40)
	this->__dirty = true;
	HX_STACK_LINE(65)
	this->__owner = owner;
	HX_STACK_LINE(67)
	::openfl::_internal::renderer::DrawCommandBuffer tmp = ::openfl::_internal::renderer::DrawCommandBuffer_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(67)
	this->__commands = tmp;
	HX_STACK_LINE(68)
	this->__strokePadding = (int)0;
	HX_STACK_LINE(69)
	this->__positionX = (int)0;
	HX_STACK_LINE(70)
	this->__positionY = (int)0;
	HX_STACK_LINE(71)
	::openfl::geom::Matrix tmp1 = ::openfl::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(71)
	this->__renderTransform = tmp1;
	HX_STACK_LINE(72)
	::openfl::geom::Matrix tmp2 = ::openfl::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(72)
	this->__worldTransform = tmp2;
	HX_STACK_LINE(73)
	this->__width = (int)0;
	HX_STACK_LINE(74)
	this->__height = (int)0;
}
;
	return null();
}

//Graphics_obj::~Graphics_obj() { }

Dynamic Graphics_obj::__CreateEmpty() { return  new Graphics_obj; }
hx::ObjectPtr< Graphics_obj > Graphics_obj::__new(::openfl::display::DisplayObject owner)
{  hx::ObjectPtr< Graphics_obj > _result_ = new Graphics_obj();
	_result_->__construct(owner);
	return _result_;}

Dynamic Graphics_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Graphics_obj > _result_ = new Graphics_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void Graphics_obj::beginBitmapFill( ::openfl::display::BitmapData bitmap,::openfl::geom::Matrix matrix,hx::Null< bool >  __o_repeat,hx::Null< bool >  __o_smooth){
bool repeat = __o_repeat.Default(true);
bool smooth = __o_smooth.Default(false);
	HX_STACK_FRAME("openfl.display.Graphics","beginBitmapFill",0x31c80e62,"openfl.display.Graphics.beginBitmapFill","openfl/display/Graphics.hx",83,0x8d299ce7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(bitmap,"bitmap")
	HX_STACK_ARG(matrix,"matrix")
	HX_STACK_ARG(repeat,"repeat")
	HX_STACK_ARG(smooth,"smooth")
{
		HX_STACK_LINE(85)
		::openfl::_internal::renderer::DrawCommandBuffer tmp = this->__commands;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(85)
		::openfl::display::BitmapData tmp1 = bitmap;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(85)
		bool tmp2 = (matrix != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(85)
		::openfl::geom::Matrix tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(85)
		if ((tmp2)){
			HX_STACK_LINE(85)
			tmp3 = matrix->clone();
		}
		else{
			HX_STACK_LINE(85)
			tmp3 = null();
		}
		HX_STACK_LINE(85)
		bool tmp4 = repeat;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(85)
		bool tmp5 = smooth;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(85)
		tmp->beginBitmapFill(tmp1,tmp3,tmp4,tmp5);
		HX_STACK_LINE(87)
		this->__visible = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Graphics_obj,beginBitmapFill,(void))

Void Graphics_obj::beginFill( hx::Null< int >  __o_color,hx::Null< Float >  __o_alpha){
int color = __o_color.Default(0);
Float alpha = __o_alpha.Default(1);
	HX_STACK_FRAME("openfl.display.Graphics","beginFill",0xf44a92d3,"openfl.display.Graphics.beginFill","openfl/display/Graphics.hx",92,0x8d299ce7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(color,"color")
	HX_STACK_ARG(alpha,"alpha")
{
		HX_STACK_LINE(94)
		::openfl::_internal::renderer::DrawCommandBuffer tmp = this->__commands;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(94)
		int tmp1 = (int(color) & int((int)16777215));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(94)
		Float tmp2 = alpha;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(94)
		tmp->beginFill(tmp1,tmp2);
		HX_STACK_LINE(96)
		bool tmp3 = (alpha > (int)0);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(96)
		if ((tmp3)){
			HX_STACK_LINE(96)
			this->__visible = true;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Graphics_obj,beginFill,(void))

Void Graphics_obj::beginGradientFill( Dynamic type,Array< int > colors,Array< Float > alphas,Array< int > ratios,::openfl::geom::Matrix matrix,Dynamic __o_spreadMethod,Dynamic __o_interpolationMethod,hx::Null< Float >  __o_focalPointRatio){
Dynamic spreadMethod = __o_spreadMethod.Default(0);
Dynamic interpolationMethod = __o_interpolationMethod.Default(1);
Float focalPointRatio = __o_focalPointRatio.Default(0);
	HX_STACK_FRAME("openfl.display.Graphics","beginGradientFill",0x99f380e3,"openfl.display.Graphics.beginGradientFill","openfl/display/Graphics.hx",101,0x8d299ce7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(type,"type")
	HX_STACK_ARG(colors,"colors")
	HX_STACK_ARG(alphas,"alphas")
	HX_STACK_ARG(ratios,"ratios")
	HX_STACK_ARG(matrix,"matrix")
	HX_STACK_ARG(spreadMethod,"spreadMethod")
	HX_STACK_ARG(interpolationMethod,"interpolationMethod")
	HX_STACK_ARG(focalPointRatio,"focalPointRatio")
{
		HX_STACK_LINE(103)
		::openfl::_internal::renderer::DrawCommandBuffer tmp = this->__commands;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(103)
		Dynamic tmp1 = type;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(103)
		::openfl::geom::Matrix tmp2 = matrix;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(103)
		Dynamic tmp3 = spreadMethod;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(103)
		Dynamic tmp4 = interpolationMethod;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(103)
		Float tmp5 = focalPointRatio;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(103)
		tmp->beginGradientFill(tmp1,colors,alphas,ratios,tmp2,tmp3,tmp4,tmp5);
		HX_STACK_LINE(105)
		{
			HX_STACK_LINE(105)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(105)
			while((true)){
				HX_STACK_LINE(105)
				bool tmp6 = (_g < alphas->length);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(105)
				bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(105)
				if ((tmp7)){
					HX_STACK_LINE(105)
					break;
				}
				HX_STACK_LINE(105)
				Float tmp8 = alphas->__get(_g);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(105)
				Float alpha = tmp8;		HX_STACK_VAR(alpha,"alpha");
				HX_STACK_LINE(105)
				++(_g);
				HX_STACK_LINE(107)
				bool tmp9 = (alpha > (int)0);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(107)
				if ((tmp9)){
					HX_STACK_LINE(109)
					this->__visible = true;
					HX_STACK_LINE(110)
					break;
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC8(Graphics_obj,beginGradientFill,(void))

Void Graphics_obj::clear( ){
{
		HX_STACK_FRAME("openfl.display.Graphics","clear",0x0a9f4794,"openfl.display.Graphics.clear","openfl/display/Graphics.hx",119,0x8d299ce7)
		HX_STACK_THIS(this)
		HX_STACK_LINE(121)
		::openfl::_internal::renderer::DrawCommandBuffer tmp = this->__commands;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(121)
		tmp->clear();
		HX_STACK_LINE(122)
		this->__strokePadding = (int)0;
		HX_STACK_LINE(124)
		::openfl::geom::Rectangle tmp1 = this->__bounds;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(124)
		bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(124)
		if ((tmp2)){
			HX_STACK_LINE(126)
			this->set___dirty(true);
			HX_STACK_LINE(127)
			this->__transformDirty = true;
			HX_STACK_LINE(128)
			this->__bounds = null();
		}
		HX_STACK_LINE(132)
		this->__visible = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Graphics_obj,clear,(void))

Void Graphics_obj::copyFrom( ::openfl::display::Graphics sourceGraphics){
{
		HX_STACK_FRAME("openfl.display.Graphics","copyFrom",0x0a477418,"openfl.display.Graphics.copyFrom","openfl/display/Graphics.hx",141,0x8d299ce7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(sourceGraphics,"sourceGraphics")
		HX_STACK_LINE(143)
		bool tmp = (sourceGraphics->__bounds != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(143)
		::openfl::geom::Rectangle tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(143)
		if ((tmp)){
			HX_STACK_LINE(143)
			tmp1 = sourceGraphics->__bounds->clone();
		}
		else{
			HX_STACK_LINE(143)
			tmp1 = null();
		}
		HX_STACK_LINE(143)
		this->__bounds = tmp1;
		HX_STACK_LINE(144)
		::openfl::_internal::renderer::DrawCommandBuffer tmp2 = sourceGraphics->__commands->copy();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(144)
		this->__commands = tmp2;
		HX_STACK_LINE(145)
		this->set___dirty(true);
		HX_STACK_LINE(146)
		this->__strokePadding = sourceGraphics->__strokePadding;
		HX_STACK_LINE(147)
		this->__positionX = sourceGraphics->__positionX;
		HX_STACK_LINE(148)
		this->__positionY = sourceGraphics->__positionY;
		HX_STACK_LINE(149)
		this->__transformDirty = true;
		HX_STACK_LINE(150)
		this->__visible = sourceGraphics->__visible;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Graphics_obj,copyFrom,(void))

Void Graphics_obj::cubicCurveTo( Float controlX1,Float controlY1,Float controlX2,Float controlY2,Float anchorX,Float anchorY){
{
		HX_STACK_FRAME("openfl.display.Graphics","cubicCurveTo",0x467410b9,"openfl.display.Graphics.cubicCurveTo","openfl/display/Graphics.hx",155,0x8d299ce7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(controlX1,"controlX1")
		HX_STACK_ARG(controlY1,"controlY1")
		HX_STACK_ARG(controlX2,"controlX2")
		HX_STACK_ARG(controlY2,"controlY2")
		HX_STACK_ARG(anchorX,"anchorX")
		HX_STACK_ARG(anchorY,"anchorY")
		HX_STACK_LINE(157)
		Float tmp = this->__positionX;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(157)
		Float tmp1 = this->__strokePadding;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(157)
		Float tmp2 = (tmp - tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(157)
		Float tmp3 = this->__positionY;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(157)
		Float tmp4 = this->__strokePadding;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(157)
		Float tmp5 = (tmp3 - tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(157)
		this->__inflateBounds(tmp2,tmp5);
		HX_STACK_LINE(158)
		Float tmp6 = this->__positionX;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(158)
		Float tmp7 = this->__strokePadding;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(158)
		Float tmp8 = (tmp6 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(158)
		Float tmp9 = this->__positionY;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(158)
		Float tmp10 = this->__strokePadding;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(158)
		Float tmp11 = (tmp9 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(158)
		this->__inflateBounds(tmp8,tmp11);
		HX_STACK_LINE(160)
		Float ix1;		HX_STACK_VAR(ix1,"ix1");
		HX_STACK_LINE(160)
		Float iy1;		HX_STACK_VAR(iy1,"iy1");
		HX_STACK_LINE(160)
		Float ix2;		HX_STACK_VAR(ix2,"ix2");
		HX_STACK_LINE(160)
		Float iy2;		HX_STACK_VAR(iy2,"iy2");
		HX_STACK_LINE(162)
		ix1 = anchorX;
		HX_STACK_LINE(163)
		ix2 = anchorX;
		HX_STACK_LINE(165)
		bool tmp12 = (controlX1 < anchorX);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(165)
		bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(165)
		bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(165)
		if ((tmp13)){
			HX_STACK_LINE(165)
			Float tmp15 = controlX1;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(165)
			Float tmp16 = this->__positionX;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(165)
			Float tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(165)
			Float tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(165)
			tmp14 = (tmp15 > tmp18);
		}
		else{
			HX_STACK_LINE(165)
			tmp14 = false;
		}
		HX_STACK_LINE(165)
		bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(165)
		bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(165)
		bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(165)
		if ((tmp16)){
			HX_STACK_LINE(165)
			bool tmp18 = (controlX1 > anchorX);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(165)
			bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(165)
			bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(165)
			bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(165)
			bool tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(165)
			if ((tmp22)){
				HX_STACK_LINE(165)
				Float tmp23 = controlX1;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(165)
				Float tmp24 = this->__positionX;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(165)
				Float tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(165)
				Float tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(165)
				Float tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(165)
				tmp17 = (tmp23 < tmp27);
			}
			else{
				HX_STACK_LINE(165)
				tmp17 = false;
			}
		}
		else{
			HX_STACK_LINE(165)
			tmp17 = true;
		}
		HX_STACK_LINE(165)
		bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(165)
		if ((tmp17)){
			HX_STACK_LINE(165)
			bool tmp19 = (controlX2 < anchorX);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(165)
			bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(165)
			bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(165)
			bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(165)
			bool tmp23 = tmp21;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(165)
			if ((tmp23)){
				HX_STACK_LINE(165)
				Float tmp24 = controlX2;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(165)
				Float tmp25 = this->__positionX;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(165)
				Float tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(165)
				Float tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(165)
				Float tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(165)
				bool tmp29 = (tmp24 > tmp28);		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(165)
				tmp22 = tmp29;
			}
			else{
				HX_STACK_LINE(165)
				tmp22 = false;
			}
			HX_STACK_LINE(165)
			bool tmp24 = tmp22;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(165)
			bool tmp25 = !(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(165)
			bool tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(165)
			bool tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(165)
			if ((tmp27)){
				HX_STACK_LINE(165)
				bool tmp28 = (controlX2 > anchorX);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(165)
				bool tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(165)
				bool tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(165)
				bool tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(165)
				bool tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(165)
				if ((tmp32)){
					HX_STACK_LINE(165)
					Float tmp33 = controlX2;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(165)
					Float tmp34 = this->__positionX;		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(165)
					Float tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(165)
					Float tmp36 = tmp35;		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(165)
					Float tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(165)
					tmp18 = (tmp33 < tmp37);
				}
				else{
					HX_STACK_LINE(165)
					tmp18 = false;
				}
			}
			else{
				HX_STACK_LINE(165)
				tmp18 = true;
			}
		}
		else{
			HX_STACK_LINE(165)
			tmp18 = false;
		}
		HX_STACK_LINE(165)
		bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(165)
		if ((tmp19)){
			HX_STACK_LINE(167)
			Float tmp20 = this->__positionX;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(167)
			Float tmp21 = ((int)2 * tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(167)
			Float tmp22 = ((int)4 * controlX1);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(167)
			Float tmp23 = (tmp21 - tmp22);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(167)
			Float tmp24 = ((int)2 * controlX2);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(167)
			Float tmp25 = (tmp23 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(167)
			Float u = tmp25;		HX_STACK_VAR(u,"u");
			HX_STACK_LINE(168)
			Float tmp26 = controlX1;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(168)
			Float tmp27 = this->__positionX;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(168)
			Float tmp28 = (tmp26 - tmp27);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(168)
			Float v = tmp28;		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(169)
			Float tmp29 = this->__positionX;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(169)
			Float tmp30 = -(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(169)
			Float tmp31 = ((int)3 * controlX1);		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(169)
			Float tmp32 = (tmp30 + tmp31);		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(169)
			Float tmp33 = anchorX;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(169)
			Float tmp34 = (tmp32 + tmp33);		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(169)
			Float tmp35 = ((int)3 * controlX2);		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(169)
			Float tmp36 = (tmp34 - tmp35);		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(169)
			Float w = tmp36;		HX_STACK_VAR(w,"w");
			HX_STACK_LINE(171)
			Float tmp37 = u;		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(171)
			Float tmp38 = -(tmp37);		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(171)
			Float tmp39 = (u * u);		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(171)
			Float tmp40 = ((int)4 * v);		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(171)
			Float tmp41 = w;		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(171)
			Float tmp42 = (tmp40 * tmp41);		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(171)
			Float tmp43 = (tmp39 - tmp42);		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(171)
			Float tmp44 = ::Math_obj::sqrt(tmp43);		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(171)
			Float tmp45 = (tmp38 + tmp44);		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(171)
			Float tmp46 = ((int)2 * w);		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(171)
			Float tmp47 = (Float(tmp45) / Float(tmp46));		HX_STACK_VAR(tmp47,"tmp47");
			HX_STACK_LINE(171)
			Float t1 = tmp47;		HX_STACK_VAR(t1,"t1");
			HX_STACK_LINE(172)
			Float tmp48 = u;		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(172)
			Float tmp49 = -(tmp48);		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(172)
			Float tmp50 = (u * u);		HX_STACK_VAR(tmp50,"tmp50");
			HX_STACK_LINE(172)
			Float tmp51 = ((int)4 * v);		HX_STACK_VAR(tmp51,"tmp51");
			HX_STACK_LINE(172)
			Float tmp52 = w;		HX_STACK_VAR(tmp52,"tmp52");
			HX_STACK_LINE(172)
			Float tmp53 = (tmp51 * tmp52);		HX_STACK_VAR(tmp53,"tmp53");
			HX_STACK_LINE(172)
			Float tmp54 = (tmp50 - tmp53);		HX_STACK_VAR(tmp54,"tmp54");
			HX_STACK_LINE(172)
			Float tmp55 = ::Math_obj::sqrt(tmp54);		HX_STACK_VAR(tmp55,"tmp55");
			HX_STACK_LINE(172)
			Float tmp56 = (tmp49 - tmp55);		HX_STACK_VAR(tmp56,"tmp56");
			HX_STACK_LINE(172)
			Float tmp57 = ((int)2 * w);		HX_STACK_VAR(tmp57,"tmp57");
			HX_STACK_LINE(172)
			Float tmp58 = (Float(tmp56) / Float(tmp57));		HX_STACK_VAR(tmp58,"tmp58");
			HX_STACK_LINE(172)
			Float t2 = tmp58;		HX_STACK_VAR(t2,"t2");
			HX_STACK_LINE(174)
			bool tmp59 = (t1 > (int)0);		HX_STACK_VAR(tmp59,"tmp59");
			HX_STACK_LINE(174)
			bool tmp60;		HX_STACK_VAR(tmp60,"tmp60");
			HX_STACK_LINE(174)
			if ((tmp59)){
				HX_STACK_LINE(174)
				tmp60 = (t1 < (int)1);
			}
			else{
				HX_STACK_LINE(174)
				tmp60 = false;
			}
			HX_STACK_LINE(174)
			if ((tmp60)){
				HX_STACK_LINE(176)
				Float tmp61 = t1;		HX_STACK_VAR(tmp61,"tmp61");
				HX_STACK_LINE(176)
				Float tmp62 = this->__positionX;		HX_STACK_VAR(tmp62,"tmp62");
				HX_STACK_LINE(176)
				Float tmp63 = controlX1;		HX_STACK_VAR(tmp63,"tmp63");
				HX_STACK_LINE(176)
				Float tmp64 = controlX2;		HX_STACK_VAR(tmp64,"tmp64");
				HX_STACK_LINE(176)
				Float tmp65 = anchorX;		HX_STACK_VAR(tmp65,"tmp65");
				HX_STACK_LINE(176)
				Float tmp66 = this->__calculateBezierCubicPoint(tmp61,tmp62,tmp63,tmp64,tmp65);		HX_STACK_VAR(tmp66,"tmp66");
				HX_STACK_LINE(176)
				ix1 = tmp66;
			}
			HX_STACK_LINE(180)
			bool tmp61 = (t2 > (int)0);		HX_STACK_VAR(tmp61,"tmp61");
			HX_STACK_LINE(180)
			bool tmp62;		HX_STACK_VAR(tmp62,"tmp62");
			HX_STACK_LINE(180)
			if ((tmp61)){
				HX_STACK_LINE(180)
				tmp62 = (t2 < (int)1);
			}
			else{
				HX_STACK_LINE(180)
				tmp62 = false;
			}
			HX_STACK_LINE(180)
			if ((tmp62)){
				HX_STACK_LINE(182)
				Float tmp63 = t2;		HX_STACK_VAR(tmp63,"tmp63");
				HX_STACK_LINE(182)
				Float tmp64 = this->__positionX;		HX_STACK_VAR(tmp64,"tmp64");
				HX_STACK_LINE(182)
				Float tmp65 = controlX1;		HX_STACK_VAR(tmp65,"tmp65");
				HX_STACK_LINE(182)
				Float tmp66 = controlX2;		HX_STACK_VAR(tmp66,"tmp66");
				HX_STACK_LINE(182)
				Float tmp67 = anchorX;		HX_STACK_VAR(tmp67,"tmp67");
				HX_STACK_LINE(182)
				Float tmp68 = this->__calculateBezierCubicPoint(tmp63,tmp64,tmp65,tmp66,tmp67);		HX_STACK_VAR(tmp68,"tmp68");
				HX_STACK_LINE(182)
				ix2 = tmp68;
			}
		}
		HX_STACK_LINE(188)
		iy1 = anchorY;
		HX_STACK_LINE(189)
		iy2 = anchorY;
		HX_STACK_LINE(191)
		bool tmp20 = (controlY1 < anchorY);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(191)
		bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(191)
		bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(191)
		if ((tmp21)){
			HX_STACK_LINE(191)
			Float tmp23 = controlY1;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(191)
			Float tmp24 = this->__positionX;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(191)
			Float tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(191)
			Float tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(191)
			tmp22 = (tmp23 > tmp26);
		}
		else{
			HX_STACK_LINE(191)
			tmp22 = false;
		}
		HX_STACK_LINE(191)
		bool tmp23 = !(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(191)
		bool tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(191)
		bool tmp25;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(191)
		if ((tmp24)){
			HX_STACK_LINE(191)
			bool tmp26 = (controlY1 > anchorY);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(191)
			bool tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(191)
			bool tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(191)
			bool tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(191)
			bool tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(191)
			if ((tmp30)){
				HX_STACK_LINE(191)
				Float tmp31 = controlY1;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(191)
				Float tmp32 = this->__positionX;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(191)
				Float tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(191)
				Float tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(191)
				Float tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(191)
				tmp25 = (tmp31 < tmp35);
			}
			else{
				HX_STACK_LINE(191)
				tmp25 = false;
			}
		}
		else{
			HX_STACK_LINE(191)
			tmp25 = true;
		}
		HX_STACK_LINE(191)
		bool tmp26;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(191)
		if ((tmp25)){
			HX_STACK_LINE(191)
			bool tmp27 = (controlY2 < anchorY);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(191)
			bool tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(191)
			bool tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(191)
			bool tmp30;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(191)
			bool tmp31 = tmp29;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(191)
			if ((tmp31)){
				HX_STACK_LINE(191)
				Float tmp32 = controlY2;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(191)
				Float tmp33 = this->__positionX;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(191)
				Float tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(191)
				Float tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(191)
				Float tmp36 = tmp35;		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(191)
				bool tmp37 = (tmp32 > tmp36);		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(191)
				tmp30 = tmp37;
			}
			else{
				HX_STACK_LINE(191)
				tmp30 = false;
			}
			HX_STACK_LINE(191)
			bool tmp32 = tmp30;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(191)
			bool tmp33 = !(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(191)
			bool tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(191)
			bool tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(191)
			if ((tmp35)){
				HX_STACK_LINE(191)
				bool tmp36 = (controlY2 > anchorY);		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(191)
				bool tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(191)
				bool tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(191)
				bool tmp39 = tmp38;		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(191)
				bool tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(191)
				if ((tmp40)){
					HX_STACK_LINE(191)
					Float tmp41 = controlY2;		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(191)
					Float tmp42 = this->__positionX;		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(191)
					Float tmp43 = tmp42;		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(191)
					Float tmp44 = tmp43;		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(191)
					Float tmp45 = tmp44;		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(191)
					tmp26 = (tmp41 < tmp45);
				}
				else{
					HX_STACK_LINE(191)
					tmp26 = false;
				}
			}
			else{
				HX_STACK_LINE(191)
				tmp26 = true;
			}
		}
		else{
			HX_STACK_LINE(191)
			tmp26 = false;
		}
		HX_STACK_LINE(191)
		bool tmp27 = !(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(191)
		if ((tmp27)){
			HX_STACK_LINE(193)
			Float tmp28 = this->__positionX;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(193)
			Float tmp29 = ((int)2 * tmp28);		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(193)
			Float tmp30 = ((int)4 * controlY1);		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(193)
			Float tmp31 = (tmp29 - tmp30);		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(193)
			Float tmp32 = ((int)2 * controlY2);		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(193)
			Float tmp33 = (tmp31 + tmp32);		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(193)
			Float u = tmp33;		HX_STACK_VAR(u,"u");
			HX_STACK_LINE(194)
			Float tmp34 = controlY1;		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(194)
			Float tmp35 = this->__positionX;		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(194)
			Float tmp36 = (tmp34 - tmp35);		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(194)
			Float v = tmp36;		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(195)
			Float tmp37 = this->__positionX;		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(195)
			Float tmp38 = -(tmp37);		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(195)
			Float tmp39 = ((int)3 * controlY1);		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(195)
			Float tmp40 = (tmp38 + tmp39);		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(195)
			Float tmp41 = anchorY;		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(195)
			Float tmp42 = (tmp40 + tmp41);		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(195)
			Float tmp43 = ((int)3 * controlY2);		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(195)
			Float tmp44 = (tmp42 - tmp43);		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(195)
			Float w = tmp44;		HX_STACK_VAR(w,"w");
			HX_STACK_LINE(197)
			Float tmp45 = u;		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(197)
			Float tmp46 = -(tmp45);		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(197)
			Float tmp47 = (u * u);		HX_STACK_VAR(tmp47,"tmp47");
			HX_STACK_LINE(197)
			Float tmp48 = ((int)4 * v);		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(197)
			Float tmp49 = w;		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(197)
			Float tmp50 = (tmp48 * tmp49);		HX_STACK_VAR(tmp50,"tmp50");
			HX_STACK_LINE(197)
			Float tmp51 = (tmp47 - tmp50);		HX_STACK_VAR(tmp51,"tmp51");
			HX_STACK_LINE(197)
			Float tmp52 = ::Math_obj::sqrt(tmp51);		HX_STACK_VAR(tmp52,"tmp52");
			HX_STACK_LINE(197)
			Float tmp53 = (tmp46 + tmp52);		HX_STACK_VAR(tmp53,"tmp53");
			HX_STACK_LINE(197)
			Float tmp54 = ((int)2 * w);		HX_STACK_VAR(tmp54,"tmp54");
			HX_STACK_LINE(197)
			Float tmp55 = (Float(tmp53) / Float(tmp54));		HX_STACK_VAR(tmp55,"tmp55");
			HX_STACK_LINE(197)
			Float t1 = tmp55;		HX_STACK_VAR(t1,"t1");
			HX_STACK_LINE(198)
			Float tmp56 = u;		HX_STACK_VAR(tmp56,"tmp56");
			HX_STACK_LINE(198)
			Float tmp57 = -(tmp56);		HX_STACK_VAR(tmp57,"tmp57");
			HX_STACK_LINE(198)
			Float tmp58 = (u * u);		HX_STACK_VAR(tmp58,"tmp58");
			HX_STACK_LINE(198)
			Float tmp59 = ((int)4 * v);		HX_STACK_VAR(tmp59,"tmp59");
			HX_STACK_LINE(198)
			Float tmp60 = w;		HX_STACK_VAR(tmp60,"tmp60");
			HX_STACK_LINE(198)
			Float tmp61 = (tmp59 * tmp60);		HX_STACK_VAR(tmp61,"tmp61");
			HX_STACK_LINE(198)
			Float tmp62 = (tmp58 - tmp61);		HX_STACK_VAR(tmp62,"tmp62");
			HX_STACK_LINE(198)
			Float tmp63 = ::Math_obj::sqrt(tmp62);		HX_STACK_VAR(tmp63,"tmp63");
			HX_STACK_LINE(198)
			Float tmp64 = (tmp57 - tmp63);		HX_STACK_VAR(tmp64,"tmp64");
			HX_STACK_LINE(198)
			Float tmp65 = ((int)2 * w);		HX_STACK_VAR(tmp65,"tmp65");
			HX_STACK_LINE(198)
			Float tmp66 = (Float(tmp64) / Float(tmp65));		HX_STACK_VAR(tmp66,"tmp66");
			HX_STACK_LINE(198)
			Float t2 = tmp66;		HX_STACK_VAR(t2,"t2");
			HX_STACK_LINE(200)
			bool tmp67 = (t1 > (int)0);		HX_STACK_VAR(tmp67,"tmp67");
			HX_STACK_LINE(200)
			bool tmp68;		HX_STACK_VAR(tmp68,"tmp68");
			HX_STACK_LINE(200)
			if ((tmp67)){
				HX_STACK_LINE(200)
				tmp68 = (t1 < (int)1);
			}
			else{
				HX_STACK_LINE(200)
				tmp68 = false;
			}
			HX_STACK_LINE(200)
			if ((tmp68)){
				HX_STACK_LINE(202)
				Float tmp69 = t1;		HX_STACK_VAR(tmp69,"tmp69");
				HX_STACK_LINE(202)
				Float tmp70 = this->__positionX;		HX_STACK_VAR(tmp70,"tmp70");
				HX_STACK_LINE(202)
				Float tmp71 = controlY1;		HX_STACK_VAR(tmp71,"tmp71");
				HX_STACK_LINE(202)
				Float tmp72 = controlY2;		HX_STACK_VAR(tmp72,"tmp72");
				HX_STACK_LINE(202)
				Float tmp73 = anchorY;		HX_STACK_VAR(tmp73,"tmp73");
				HX_STACK_LINE(202)
				Float tmp74 = this->__calculateBezierCubicPoint(tmp69,tmp70,tmp71,tmp72,tmp73);		HX_STACK_VAR(tmp74,"tmp74");
				HX_STACK_LINE(202)
				iy1 = tmp74;
			}
			HX_STACK_LINE(206)
			bool tmp69 = (t2 > (int)0);		HX_STACK_VAR(tmp69,"tmp69");
			HX_STACK_LINE(206)
			bool tmp70;		HX_STACK_VAR(tmp70,"tmp70");
			HX_STACK_LINE(206)
			if ((tmp69)){
				HX_STACK_LINE(206)
				tmp70 = (t2 < (int)1);
			}
			else{
				HX_STACK_LINE(206)
				tmp70 = false;
			}
			HX_STACK_LINE(206)
			if ((tmp70)){
				HX_STACK_LINE(208)
				Float tmp71 = t2;		HX_STACK_VAR(tmp71,"tmp71");
				HX_STACK_LINE(208)
				Float tmp72 = this->__positionX;		HX_STACK_VAR(tmp72,"tmp72");
				HX_STACK_LINE(208)
				Float tmp73 = controlY1;		HX_STACK_VAR(tmp73,"tmp73");
				HX_STACK_LINE(208)
				Float tmp74 = controlY2;		HX_STACK_VAR(tmp74,"tmp74");
				HX_STACK_LINE(208)
				Float tmp75 = anchorY;		HX_STACK_VAR(tmp75,"tmp75");
				HX_STACK_LINE(208)
				Float tmp76 = this->__calculateBezierCubicPoint(tmp71,tmp72,tmp73,tmp74,tmp75);		HX_STACK_VAR(tmp76,"tmp76");
				HX_STACK_LINE(208)
				iy2 = tmp76;
			}
		}
		HX_STACK_LINE(214)
		Float tmp28 = ix1;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(214)
		Float tmp29 = this->__strokePadding;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(214)
		Float tmp30 = (tmp28 - tmp29);		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(214)
		Float tmp31 = iy1;		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(214)
		Float tmp32 = this->__strokePadding;		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(214)
		Float tmp33 = (tmp31 - tmp32);		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(214)
		this->__inflateBounds(tmp30,tmp33);
		HX_STACK_LINE(215)
		Float tmp34 = ix1;		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(215)
		Float tmp35 = this->__strokePadding;		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(215)
		Float tmp36 = (tmp34 + tmp35);		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(215)
		Float tmp37 = iy1;		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(215)
		Float tmp38 = this->__strokePadding;		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(215)
		Float tmp39 = (tmp37 + tmp38);		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(215)
		this->__inflateBounds(tmp36,tmp39);
		HX_STACK_LINE(216)
		Float tmp40 = ix2;		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(216)
		Float tmp41 = this->__strokePadding;		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(216)
		Float tmp42 = (tmp40 - tmp41);		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(216)
		Float tmp43 = iy2;		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(216)
		Float tmp44 = this->__strokePadding;		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(216)
		Float tmp45 = (tmp43 - tmp44);		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(216)
		this->__inflateBounds(tmp42,tmp45);
		HX_STACK_LINE(217)
		Float tmp46 = ix2;		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(217)
		Float tmp47 = this->__strokePadding;		HX_STACK_VAR(tmp47,"tmp47");
		HX_STACK_LINE(217)
		Float tmp48 = (tmp46 + tmp47);		HX_STACK_VAR(tmp48,"tmp48");
		HX_STACK_LINE(217)
		Float tmp49 = iy2;		HX_STACK_VAR(tmp49,"tmp49");
		HX_STACK_LINE(217)
		Float tmp50 = this->__strokePadding;		HX_STACK_VAR(tmp50,"tmp50");
		HX_STACK_LINE(217)
		Float tmp51 = (tmp49 + tmp50);		HX_STACK_VAR(tmp51,"tmp51");
		HX_STACK_LINE(217)
		this->__inflateBounds(tmp48,tmp51);
		HX_STACK_LINE(219)
		this->__positionX = anchorX;
		HX_STACK_LINE(220)
		this->__positionY = anchorY;
		HX_STACK_LINE(222)
		::openfl::_internal::renderer::DrawCommandBuffer tmp52 = this->__commands;		HX_STACK_VAR(tmp52,"tmp52");
		HX_STACK_LINE(222)
		Float tmp53 = controlX1;		HX_STACK_VAR(tmp53,"tmp53");
		HX_STACK_LINE(222)
		Float tmp54 = controlY1;		HX_STACK_VAR(tmp54,"tmp54");
		HX_STACK_LINE(222)
		Float tmp55 = controlX2;		HX_STACK_VAR(tmp55,"tmp55");
		HX_STACK_LINE(222)
		Float tmp56 = controlY2;		HX_STACK_VAR(tmp56,"tmp56");
		HX_STACK_LINE(222)
		Float tmp57 = anchorX;		HX_STACK_VAR(tmp57,"tmp57");
		HX_STACK_LINE(222)
		Float tmp58 = anchorY;		HX_STACK_VAR(tmp58,"tmp58");
		HX_STACK_LINE(222)
		tmp52->cubicCurveTo(tmp53,tmp54,tmp55,tmp56,tmp57,tmp58);
		HX_STACK_LINE(224)
		this->set___dirty(true);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(Graphics_obj,cubicCurveTo,(void))

Void Graphics_obj::curveTo( Float controlX,Float controlY,Float anchorX,Float anchorY){
{
		HX_STACK_FRAME("openfl.display.Graphics","curveTo",0x89f305d1,"openfl.display.Graphics.curveTo","openfl/display/Graphics.hx",229,0x8d299ce7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(controlX,"controlX")
		HX_STACK_ARG(controlY,"controlY")
		HX_STACK_ARG(anchorX,"anchorX")
		HX_STACK_ARG(anchorY,"anchorY")
		HX_STACK_LINE(231)
		Float tmp = this->__positionX;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(231)
		Float tmp1 = this->__strokePadding;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(231)
		Float tmp2 = (tmp - tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(231)
		Float tmp3 = this->__positionY;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(231)
		Float tmp4 = this->__strokePadding;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(231)
		Float tmp5 = (tmp3 - tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(231)
		this->__inflateBounds(tmp2,tmp5);
		HX_STACK_LINE(232)
		Float tmp6 = this->__positionX;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(232)
		Float tmp7 = this->__strokePadding;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(232)
		Float tmp8 = (tmp6 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(232)
		Float tmp9 = this->__positionY;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(232)
		Float tmp10 = this->__strokePadding;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(232)
		Float tmp11 = (tmp9 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(232)
		this->__inflateBounds(tmp8,tmp11);
		HX_STACK_LINE(234)
		Float ix;		HX_STACK_VAR(ix,"ix");
		HX_STACK_LINE(234)
		Float iy;		HX_STACK_VAR(iy,"iy");
		HX_STACK_LINE(236)
		bool tmp12 = (controlX < anchorX);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(236)
		bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(236)
		bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(236)
		if ((tmp13)){
			HX_STACK_LINE(236)
			Float tmp15 = controlX;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(236)
			Float tmp16 = this->__positionX;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(236)
			Float tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(236)
			Float tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(236)
			tmp14 = (tmp15 > tmp18);
		}
		else{
			HX_STACK_LINE(236)
			tmp14 = false;
		}
		HX_STACK_LINE(236)
		bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(236)
		bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(236)
		if ((tmp15)){
			HX_STACK_LINE(236)
			bool tmp17 = (controlX > anchorX);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(236)
			bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(236)
			bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(236)
			if ((tmp19)){
				HX_STACK_LINE(236)
				Float tmp20 = controlX;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(236)
				Float tmp21 = this->__positionX;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(236)
				Float tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(236)
				Float tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(236)
				tmp16 = (tmp20 < tmp23);
			}
			else{
				HX_STACK_LINE(236)
				tmp16 = false;
			}
		}
		else{
			HX_STACK_LINE(236)
			tmp16 = true;
		}
		HX_STACK_LINE(236)
		if ((tmp16)){
			HX_STACK_LINE(238)
			ix = anchorX;
		}
		else{
			HX_STACK_LINE(242)
			Float tmp17 = this->__positionX;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(242)
			Float tmp18 = controlX;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(242)
			Float tmp19 = (tmp17 - tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(242)
			Float tmp20 = this->__positionX;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(242)
			Float tmp21 = ((int)2 * controlX);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(242)
			Float tmp22 = (tmp20 - tmp21);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(242)
			Float tmp23 = anchorX;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(242)
			Float tmp24 = (tmp22 + tmp23);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(242)
			Float tmp25 = (Float(tmp19) / Float(tmp24));		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(242)
			Float tx = tmp25;		HX_STACK_VAR(tx,"tx");
			HX_STACK_LINE(243)
			Float tmp26 = tx;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(243)
			Float tmp27 = this->__positionX;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(243)
			Float tmp28 = controlX;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(243)
			Float tmp29 = anchorX;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(243)
			Float tmp30 = this->__calculateBezierQuadPoint(tmp26,tmp27,tmp28,tmp29);		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(243)
			ix = tmp30;
		}
		HX_STACK_LINE(247)
		bool tmp17 = (controlY < anchorY);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(247)
		bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(247)
		bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(247)
		if ((tmp18)){
			HX_STACK_LINE(247)
			Float tmp20 = controlY;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(247)
			Float tmp21 = this->__positionY;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(247)
			Float tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(247)
			Float tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(247)
			tmp19 = (tmp20 > tmp23);
		}
		else{
			HX_STACK_LINE(247)
			tmp19 = false;
		}
		HX_STACK_LINE(247)
		bool tmp20 = !(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(247)
		bool tmp21;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(247)
		if ((tmp20)){
			HX_STACK_LINE(247)
			bool tmp22 = (controlY > anchorY);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(247)
			bool tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(247)
			bool tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(247)
			if ((tmp24)){
				HX_STACK_LINE(247)
				Float tmp25 = controlY;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(247)
				Float tmp26 = this->__positionY;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(247)
				Float tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(247)
				Float tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(247)
				tmp21 = (tmp25 < tmp28);
			}
			else{
				HX_STACK_LINE(247)
				tmp21 = false;
			}
		}
		else{
			HX_STACK_LINE(247)
			tmp21 = true;
		}
		HX_STACK_LINE(247)
		if ((tmp21)){
			HX_STACK_LINE(249)
			iy = anchorY;
		}
		else{
			HX_STACK_LINE(253)
			Float tmp22 = this->__positionY;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(253)
			Float tmp23 = controlY;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(253)
			Float tmp24 = (tmp22 - tmp23);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(253)
			Float tmp25 = this->__positionY;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(253)
			Float tmp26 = ((int)2 * controlY);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(253)
			Float tmp27 = (tmp25 - tmp26);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(253)
			Float tmp28 = anchorY;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(253)
			Float tmp29 = (tmp27 + tmp28);		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(253)
			Float tmp30 = (Float(tmp24) / Float(tmp29));		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(253)
			Float ty = tmp30;		HX_STACK_VAR(ty,"ty");
			HX_STACK_LINE(254)
			Float tmp31 = ty;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(254)
			Float tmp32 = this->__positionY;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(254)
			Float tmp33 = controlY;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(254)
			Float tmp34 = anchorY;		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(254)
			Float tmp35 = this->__calculateBezierQuadPoint(tmp31,tmp32,tmp33,tmp34);		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(254)
			iy = tmp35;
		}
		HX_STACK_LINE(258)
		Float tmp22 = ix;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(258)
		Float tmp23 = this->__strokePadding;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(258)
		Float tmp24 = (tmp22 - tmp23);		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(258)
		Float tmp25 = iy;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(258)
		Float tmp26 = this->__strokePadding;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(258)
		Float tmp27 = (tmp25 - tmp26);		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(258)
		this->__inflateBounds(tmp24,tmp27);
		HX_STACK_LINE(259)
		Float tmp28 = ix;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(259)
		Float tmp29 = this->__strokePadding;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(259)
		Float tmp30 = (tmp28 + tmp29);		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(259)
		Float tmp31 = iy;		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(259)
		Float tmp32 = this->__strokePadding;		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(259)
		Float tmp33 = (tmp31 + tmp32);		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(259)
		this->__inflateBounds(tmp30,tmp33);
		HX_STACK_LINE(261)
		this->__positionX = anchorX;
		HX_STACK_LINE(262)
		this->__positionY = anchorY;
		HX_STACK_LINE(264)
		::openfl::_internal::renderer::DrawCommandBuffer tmp34 = this->__commands;		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(264)
		Float tmp35 = controlX;		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(264)
		Float tmp36 = controlY;		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(264)
		Float tmp37 = anchorX;		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(264)
		Float tmp38 = anchorY;		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(264)
		tmp34->curveTo(tmp35,tmp36,tmp37,tmp38);
		HX_STACK_LINE(266)
		this->set___dirty(true);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Graphics_obj,curveTo,(void))

Void Graphics_obj::drawCircle( Float x,Float y,Float radius){
{
		HX_STACK_FRAME("openfl.display.Graphics","drawCircle",0xee64ddcd,"openfl.display.Graphics.drawCircle","openfl/display/Graphics.hx",271,0x8d299ce7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(radius,"radius")
		HX_STACK_LINE(273)
		bool tmp = (radius <= (int)0);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(273)
		if ((tmp)){
			HX_STACK_LINE(273)
			return null();
		}
		HX_STACK_LINE(275)
		Float tmp1 = (x - radius);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(275)
		Float tmp2 = this->__strokePadding;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(275)
		Float tmp3 = (tmp1 - tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(275)
		Float tmp4 = (y - radius);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(275)
		Float tmp5 = this->__strokePadding;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(275)
		Float tmp6 = (tmp4 - tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(275)
		this->__inflateBounds(tmp3,tmp6);
		HX_STACK_LINE(276)
		Float tmp7 = (x + radius);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(276)
		Float tmp8 = this->__strokePadding;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(276)
		Float tmp9 = (tmp7 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(276)
		Float tmp10 = (y + radius);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(276)
		Float tmp11 = this->__strokePadding;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(276)
		Float tmp12 = (tmp10 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(276)
		this->__inflateBounds(tmp9,tmp12);
		HX_STACK_LINE(278)
		::openfl::_internal::renderer::DrawCommandBuffer tmp13 = this->__commands;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(278)
		Float tmp14 = x;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(278)
		Float tmp15 = y;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(278)
		Float tmp16 = radius;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(278)
		tmp13->drawCircle(tmp14,tmp15,tmp16);
		HX_STACK_LINE(280)
		this->set___dirty(true);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Graphics_obj,drawCircle,(void))

Void Graphics_obj::drawEllipse( Float x,Float y,Float width,Float height){
{
		HX_STACK_FRAME("openfl.display.Graphics","drawEllipse",0xbfad1a81,"openfl.display.Graphics.drawEllipse","openfl/display/Graphics.hx",285,0x8d299ce7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_LINE(287)
		bool tmp = (width <= (int)0);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(287)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(287)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(287)
		if ((tmp1)){
			HX_STACK_LINE(287)
			tmp2 = (height <= (int)0);
		}
		else{
			HX_STACK_LINE(287)
			tmp2 = true;
		}
		HX_STACK_LINE(287)
		if ((tmp2)){
			HX_STACK_LINE(287)
			return null();
		}
		HX_STACK_LINE(289)
		Float tmp3 = x;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(289)
		Float tmp4 = this->__strokePadding;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(289)
		Float tmp5 = (tmp3 - tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(289)
		Float tmp6 = y;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(289)
		Float tmp7 = this->__strokePadding;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(289)
		Float tmp8 = (tmp6 - tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(289)
		this->__inflateBounds(tmp5,tmp8);
		HX_STACK_LINE(290)
		Float tmp9 = (x + width);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(290)
		Float tmp10 = this->__strokePadding;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(290)
		Float tmp11 = (tmp9 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(290)
		Float tmp12 = (y + height);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(290)
		Float tmp13 = this->__strokePadding;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(290)
		Float tmp14 = (tmp12 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(290)
		this->__inflateBounds(tmp11,tmp14);
		HX_STACK_LINE(292)
		::openfl::_internal::renderer::DrawCommandBuffer tmp15 = this->__commands;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(292)
		Float tmp16 = x;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(292)
		Float tmp17 = y;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(292)
		Float tmp18 = width;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(292)
		Float tmp19 = height;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(292)
		tmp15->drawEllipse(tmp16,tmp17,tmp18,tmp19);
		HX_STACK_LINE(294)
		this->set___dirty(true);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Graphics_obj,drawEllipse,(void))

Void Graphics_obj::drawGraphicsData( ::openfl::_Vector::ObjectVector graphicsData){
{
		HX_STACK_FRAME("openfl.display.Graphics","drawGraphicsData",0x60ea9412,"openfl.display.Graphics.drawGraphicsData","openfl/display/Graphics.hx",299,0x8d299ce7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(graphicsData,"graphicsData")
		HX_STACK_LINE(301)
		::openfl::display::GraphicsSolidFill fill;		HX_STACK_VAR(fill,"fill");
		HX_STACK_LINE(302)
		::openfl::display::GraphicsBitmapFill bitmapFill;		HX_STACK_VAR(bitmapFill,"bitmapFill");
		HX_STACK_LINE(303)
		::openfl::display::GraphicsGradientFill gradientFill;		HX_STACK_VAR(gradientFill,"gradientFill");
		HX_STACK_LINE(304)
		::openfl::display::GraphicsStroke stroke;		HX_STACK_VAR(stroke,"stroke");
		HX_STACK_LINE(305)
		::openfl::display::GraphicsPath path;		HX_STACK_VAR(path,"path");
		HX_STACK_LINE(307)
		{
			HX_STACK_LINE(307)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(307)
			while((true)){
				HX_STACK_LINE(307)
				int tmp = _g;		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(307)
				int tmp1 = graphicsData->get_length();		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(307)
				bool tmp2 = (tmp < tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(307)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(307)
				if ((tmp3)){
					HX_STACK_LINE(307)
					break;
				}
				HX_STACK_LINE(307)
				int tmp4 = _g;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(307)
				::openfl::display::IGraphicsData tmp5 = graphicsData->get(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(307)
				::openfl::display::IGraphicsData graphics = tmp5;		HX_STACK_VAR(graphics,"graphics");
				HX_STACK_LINE(307)
				++(_g);
				HX_STACK_LINE(309)
				::openfl::display::IGraphicsData tmp6 = graphics;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(309)
				bool tmp7 = ::Std_obj::is(tmp6,hx::ClassOf< ::openfl::display::GraphicsSolidFill >());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(309)
				if ((tmp7)){
					HX_STACK_LINE(311)
					fill = ((::openfl::display::GraphicsSolidFill)(graphics));
					HX_STACK_LINE(312)
					int tmp8 = fill->color;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(312)
					Float tmp9 = fill->alpha;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(312)
					this->beginFill(tmp8,tmp9);
				}
				else{
					HX_STACK_LINE(314)
					::openfl::display::IGraphicsData tmp8 = graphics;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(314)
					bool tmp9 = ::Std_obj::is(tmp8,hx::ClassOf< ::openfl::display::GraphicsBitmapFill >());		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(314)
					if ((tmp9)){
						HX_STACK_LINE(316)
						bitmapFill = ((::openfl::display::GraphicsBitmapFill)(graphics));
						HX_STACK_LINE(317)
						::openfl::display::BitmapData tmp10 = bitmapFill->bitmapData;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(317)
						::openfl::geom::Matrix tmp11 = bitmapFill->matrix;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(317)
						bool tmp12 = bitmapFill->repeat;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(317)
						bool tmp13 = bitmapFill->smooth;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(317)
						this->beginBitmapFill(tmp10,tmp11,tmp12,tmp13);
					}
					else{
						HX_STACK_LINE(319)
						::openfl::display::IGraphicsData tmp10 = graphics;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(319)
						bool tmp11 = ::Std_obj::is(tmp10,hx::ClassOf< ::openfl::display::GraphicsGradientFill >());		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(319)
						if ((tmp11)){
							HX_STACK_LINE(321)
							gradientFill = ((::openfl::display::GraphicsGradientFill)(graphics));
							HX_STACK_LINE(322)
							Dynamic tmp12 = gradientFill->type;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(322)
							::openfl::geom::Matrix tmp13 = gradientFill->matrix;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(322)
							Dynamic tmp14 = gradientFill->spreadMethod;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(322)
							Dynamic tmp15 = gradientFill->interpolationMethod;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(322)
							Float tmp16 = gradientFill->focalPointRatio;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(322)
							this->beginGradientFill(tmp12,gradientFill->colors,gradientFill->alphas,gradientFill->ratios,tmp13,tmp14,tmp15,tmp16);
						}
						else{
							HX_STACK_LINE(324)
							::openfl::display::IGraphicsData tmp12 = graphics;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(324)
							bool tmp13 = ::Std_obj::is(tmp12,hx::ClassOf< ::openfl::display::GraphicsStroke >());		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(324)
							if ((tmp13)){
								HX_STACK_LINE(326)
								stroke = ((::openfl::display::GraphicsStroke)(graphics));
								HX_STACK_LINE(328)
								::openfl::display::IGraphicsFill tmp14 = stroke->fill;		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(328)
								bool tmp15 = ::Std_obj::is(tmp14,hx::ClassOf< ::openfl::display::GraphicsSolidFill >());		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(328)
								if ((tmp15)){
									HX_STACK_LINE(330)
									fill = ((::openfl::display::GraphicsSolidFill)(stroke->fill));
									HX_STACK_LINE(331)
									Float tmp16 = stroke->thickness;		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(331)
									int tmp17 = fill->color;		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(331)
									Float tmp18 = fill->alpha;		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(331)
									bool tmp19 = stroke->pixelHinting;		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(331)
									Dynamic tmp20 = stroke->scaleMode;		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(331)
									Dynamic tmp21 = stroke->caps;		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(331)
									Dynamic tmp22 = stroke->joints;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(331)
									Float tmp23 = stroke->miterLimit;		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(331)
									this->lineStyle(tmp16,tmp17,tmp18,tmp19,tmp20,tmp21,tmp22,tmp23);
								}
								else{
									HX_STACK_LINE(335)
									Float tmp16 = stroke->thickness;		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(335)
									bool tmp17 = stroke->pixelHinting;		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(335)
									Dynamic tmp18 = stroke->scaleMode;		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(335)
									Dynamic tmp19 = stroke->caps;		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(335)
									Dynamic tmp20 = stroke->joints;		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(335)
									Float tmp21 = stroke->miterLimit;		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(335)
									this->lineStyle(tmp16,(int)0,(int)1,tmp17,tmp18,tmp19,tmp20,tmp21);
									HX_STACK_LINE(337)
									::openfl::display::IGraphicsFill tmp22 = stroke->fill;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(337)
									bool tmp23 = ::Std_obj::is(tmp22,hx::ClassOf< ::openfl::display::GraphicsBitmapFill >());		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(337)
									if ((tmp23)){
										HX_STACK_LINE(339)
										bitmapFill = ((::openfl::display::GraphicsBitmapFill)(stroke->fill));
										HX_STACK_LINE(340)
										::openfl::display::BitmapData tmp24 = bitmapFill->bitmapData;		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(340)
										::openfl::geom::Matrix tmp25 = bitmapFill->matrix;		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(340)
										bool tmp26 = bitmapFill->repeat;		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(340)
										bool tmp27 = bitmapFill->smooth;		HX_STACK_VAR(tmp27,"tmp27");
										HX_STACK_LINE(340)
										this->lineBitmapStyle(tmp24,tmp25,tmp26,tmp27);
									}
									else{
										HX_STACK_LINE(342)
										::openfl::display::IGraphicsFill tmp24 = stroke->fill;		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(342)
										bool tmp25 = ::Std_obj::is(tmp24,hx::ClassOf< ::openfl::display::GraphicsGradientFill >());		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(342)
										if ((tmp25)){
											HX_STACK_LINE(344)
											gradientFill = ((::openfl::display::GraphicsGradientFill)(stroke->fill));
											HX_STACK_LINE(345)
											Dynamic tmp26 = gradientFill->type;		HX_STACK_VAR(tmp26,"tmp26");
											HX_STACK_LINE(345)
											::openfl::geom::Matrix tmp27 = gradientFill->matrix;		HX_STACK_VAR(tmp27,"tmp27");
											HX_STACK_LINE(345)
											Dynamic tmp28 = gradientFill->spreadMethod;		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(345)
											Dynamic tmp29 = gradientFill->interpolationMethod;		HX_STACK_VAR(tmp29,"tmp29");
											HX_STACK_LINE(345)
											Float tmp30 = gradientFill->focalPointRatio;		HX_STACK_VAR(tmp30,"tmp30");
											HX_STACK_LINE(345)
											this->lineGradientStyle(tmp26,gradientFill->colors,gradientFill->alphas,gradientFill->ratios,tmp27,tmp28,tmp29,tmp30);
										}
									}
								}
							}
							else{
								HX_STACK_LINE(351)
								::openfl::display::IGraphicsData tmp14 = graphics;		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(351)
								bool tmp15 = ::Std_obj::is(tmp14,hx::ClassOf< ::openfl::display::GraphicsPath >());		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(351)
								if ((tmp15)){
									HX_STACK_LINE(353)
									path = ((::openfl::display::GraphicsPath)(graphics));
									HX_STACK_LINE(354)
									::openfl::_Vector::IntVector tmp16 = path->commands;		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(354)
									::openfl::_Vector::FloatVector tmp17 = path->data;		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(354)
									Dynamic tmp18 = path->winding;		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(354)
									this->drawPath(tmp16,tmp17,tmp18);
								}
								else{
									HX_STACK_LINE(356)
									::openfl::display::IGraphicsData tmp16 = graphics;		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(356)
									bool tmp17 = ::Std_obj::is(tmp16,hx::ClassOf< ::openfl::display::GraphicsEndFill >());		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(356)
									if ((tmp17)){
										HX_STACK_LINE(358)
										this->endFill();
									}
								}
							}
						}
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Graphics_obj,drawGraphicsData,(void))

Void Graphics_obj::drawPath( ::openfl::_Vector::IntVector commands,::openfl::_Vector::FloatVector data,Dynamic __o_winding){
Dynamic winding = __o_winding.Default(0);
	HX_STACK_FRAME("openfl.display.Graphics","drawPath",0xa0a1f822,"openfl.display.Graphics.drawPath","openfl/display/Graphics.hx",367,0x8d299ce7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(commands,"commands")
	HX_STACK_ARG(data,"data")
	HX_STACK_ARG(winding,"winding")
{
		HX_STACK_LINE(369)
		int dataIndex = (int)0;		HX_STACK_VAR(dataIndex,"dataIndex");
		HX_STACK_LINE(371)
		{
			HX_STACK_LINE(371)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(371)
			while((true)){
				HX_STACK_LINE(371)
				int tmp = _g;		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(371)
				int tmp1 = commands->get_length();		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(371)
				bool tmp2 = (tmp < tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(371)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(371)
				if ((tmp3)){
					HX_STACK_LINE(371)
					break;
				}
				HX_STACK_LINE(371)
				int tmp4 = _g;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(371)
				int tmp5 = commands->get(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(371)
				int command = tmp5;		HX_STACK_VAR(command,"command");
				HX_STACK_LINE(371)
				++(_g);
				HX_STACK_LINE(373)
				int tmp6 = command;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(373)
				int _switch_1 = (tmp6);
				if (  ( _switch_1==(int)1)){
					HX_STACK_LINE(377)
					int tmp7 = dataIndex;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(377)
					Float tmp8 = data->get(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(377)
					Float tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(377)
					int tmp10 = (dataIndex + (int)1);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(377)
					Float tmp11 = data->get(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(377)
					Float tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(377)
					this->moveTo(tmp9,tmp12);
					HX_STACK_LINE(378)
					hx::AddEq(dataIndex,(int)2);
				}
				else if (  ( _switch_1==(int)2)){
					HX_STACK_LINE(382)
					int tmp7 = dataIndex;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(382)
					Float tmp8 = data->get(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(382)
					Float tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(382)
					int tmp10 = (dataIndex + (int)1);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(382)
					Float tmp11 = data->get(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(382)
					Float tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(382)
					this->lineTo(tmp9,tmp12);
					HX_STACK_LINE(383)
					hx::AddEq(dataIndex,(int)2);
				}
				else if (  ( _switch_1==(int)4)){
					HX_STACK_LINE(387)
					int tmp7 = (dataIndex + (int)2);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(387)
					Float tmp8 = data->get(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(387)
					Float tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(387)
					int tmp10 = (dataIndex + (int)3);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(387)
					Float tmp11 = data->get(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(387)
					Float tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(387)
					this->moveTo(tmp9,tmp12);
					HX_STACK_LINE(387)
					break;
					HX_STACK_LINE(388)
					hx::AddEq(dataIndex,(int)4);
				}
				else if (  ( _switch_1==(int)5)){
					HX_STACK_LINE(392)
					int tmp7 = (dataIndex + (int)2);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(392)
					Float tmp8 = data->get(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(392)
					Float tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(392)
					int tmp10 = (dataIndex + (int)3);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(392)
					Float tmp11 = data->get(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(392)
					Float tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(392)
					this->lineTo(tmp9,tmp12);
					HX_STACK_LINE(392)
					break;
					HX_STACK_LINE(393)
					hx::AddEq(dataIndex,(int)4);
				}
				else if (  ( _switch_1==(int)3)){
					HX_STACK_LINE(397)
					int tmp7 = dataIndex;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(397)
					Float tmp8 = data->get(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(397)
					Float tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(397)
					int tmp10 = (dataIndex + (int)1);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(397)
					Float tmp11 = data->get(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(397)
					Float tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(397)
					int tmp13 = (dataIndex + (int)2);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(397)
					Float tmp14 = data->get(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(397)
					Float tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(397)
					int tmp16 = (dataIndex + (int)3);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(397)
					Float tmp17 = data->get(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(397)
					Float tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(397)
					this->curveTo(tmp9,tmp12,tmp15,tmp18);
					HX_STACK_LINE(398)
					hx::AddEq(dataIndex,(int)4);
				}
				else if (  ( _switch_1==(int)6)){
					HX_STACK_LINE(402)
					int tmp7 = dataIndex;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(402)
					Float tmp8 = data->get(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(402)
					Float tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(402)
					int tmp10 = (dataIndex + (int)1);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(402)
					Float tmp11 = data->get(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(402)
					Float tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(402)
					int tmp13 = (dataIndex + (int)2);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(402)
					Float tmp14 = data->get(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(402)
					Float tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(402)
					int tmp16 = (dataIndex + (int)3);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(402)
					Float tmp17 = data->get(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(402)
					Float tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(402)
					int tmp19 = (dataIndex + (int)4);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(402)
					Float tmp20 = data->get(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(402)
					Float tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(402)
					int tmp22 = (dataIndex + (int)5);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(402)
					Float tmp23 = data->get(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(402)
					Float tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(402)
					this->cubicCurveTo(tmp9,tmp12,tmp15,tmp18,tmp21,tmp24);
					HX_STACK_LINE(403)
					hx::AddEq(dataIndex,(int)6);
				}
				else  {
				}
;
;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Graphics_obj,drawPath,(void))

Void Graphics_obj::drawRect( Float x,Float y,Float width,Float height){
{
		HX_STACK_FRAME("openfl.display.Graphics","drawRect",0xa1f75fa1,"openfl.display.Graphics.drawRect","openfl/display/Graphics.hx",414,0x8d299ce7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_LINE(416)
		bool tmp = (width <= (int)0);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(416)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(416)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(416)
		if ((tmp1)){
			HX_STACK_LINE(416)
			tmp2 = (height <= (int)0);
		}
		else{
			HX_STACK_LINE(416)
			tmp2 = true;
		}
		HX_STACK_LINE(416)
		if ((tmp2)){
			HX_STACK_LINE(416)
			return null();
		}
		HX_STACK_LINE(418)
		Float tmp3 = x;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(418)
		Float tmp4 = this->__strokePadding;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(418)
		Float tmp5 = (tmp3 - tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(418)
		Float tmp6 = y;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(418)
		Float tmp7 = this->__strokePadding;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(418)
		Float tmp8 = (tmp6 - tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(418)
		this->__inflateBounds(tmp5,tmp8);
		HX_STACK_LINE(419)
		Float tmp9 = (x + width);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(419)
		Float tmp10 = this->__strokePadding;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(419)
		Float tmp11 = (tmp9 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(419)
		Float tmp12 = (y + height);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(419)
		Float tmp13 = this->__strokePadding;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(419)
		Float tmp14 = (tmp12 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(419)
		this->__inflateBounds(tmp11,tmp14);
		HX_STACK_LINE(421)
		::openfl::_internal::renderer::DrawCommandBuffer tmp15 = this->__commands;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(421)
		Float tmp16 = x;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(421)
		Float tmp17 = y;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(421)
		Float tmp18 = width;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(421)
		Float tmp19 = height;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(421)
		tmp15->drawRect(tmp16,tmp17,tmp18,tmp19);
		HX_STACK_LINE(423)
		this->set___dirty(true);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Graphics_obj,drawRect,(void))

Void Graphics_obj::drawRoundRect( Float x,Float y,Float width,Float height,Float ellipseWidth,Dynamic ellipseHeight){
{
		HX_STACK_FRAME("openfl.display.Graphics","drawRoundRect",0xb24e78f5,"openfl.display.Graphics.drawRoundRect","openfl/display/Graphics.hx",428,0x8d299ce7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_ARG(ellipseWidth,"ellipseWidth")
		HX_STACK_ARG(ellipseHeight,"ellipseHeight")
		HX_STACK_LINE(430)
		bool tmp = (width <= (int)0);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(430)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(430)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(430)
		if ((tmp1)){
			HX_STACK_LINE(430)
			tmp2 = (height <= (int)0);
		}
		else{
			HX_STACK_LINE(430)
			tmp2 = true;
		}
		HX_STACK_LINE(430)
		if ((tmp2)){
			HX_STACK_LINE(430)
			return null();
		}
		HX_STACK_LINE(432)
		Float tmp3 = x;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(432)
		Float tmp4 = this->__strokePadding;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(432)
		Float tmp5 = (tmp3 - tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(432)
		Float tmp6 = y;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(432)
		Float tmp7 = this->__strokePadding;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(432)
		Float tmp8 = (tmp6 - tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(432)
		this->__inflateBounds(tmp5,tmp8);
		HX_STACK_LINE(433)
		Float tmp9 = (x + width);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(433)
		Float tmp10 = this->__strokePadding;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(433)
		Float tmp11 = (tmp9 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(433)
		Float tmp12 = (y + height);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(433)
		Float tmp13 = this->__strokePadding;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(433)
		Float tmp14 = (tmp12 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(433)
		this->__inflateBounds(tmp11,tmp14);
		HX_STACK_LINE(435)
		::openfl::_internal::renderer::DrawCommandBuffer tmp15 = this->__commands;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(435)
		Float tmp16 = x;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(435)
		Float tmp17 = y;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(435)
		Float tmp18 = width;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(435)
		Float tmp19 = height;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(435)
		Float tmp20 = ellipseWidth;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(435)
		Dynamic tmp21 = ellipseHeight;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(435)
		tmp15->drawRoundRect(tmp16,tmp17,tmp18,tmp19,tmp20,tmp21);
		HX_STACK_LINE(437)
		this->set___dirty(true);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(Graphics_obj,drawRoundRect,(void))

Void Graphics_obj::drawRoundRectComplex( Float x,Float y,Float width,Float height,Float topLeftRadius,Float topRightRadius,Float bottomLeftRadius,Float bottomRightRadius){
{
		HX_STACK_FRAME("openfl.display.Graphics","drawRoundRectComplex",0x06fa4dbb,"openfl.display.Graphics.drawRoundRectComplex","openfl/display/Graphics.hx",444,0x8d299ce7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_ARG(topLeftRadius,"topLeftRadius")
		HX_STACK_ARG(topRightRadius,"topRightRadius")
		HX_STACK_ARG(bottomLeftRadius,"bottomLeftRadius")
		HX_STACK_ARG(bottomRightRadius,"bottomRightRadius")
		HX_STACK_LINE(444)
		::openfl::Lib_obj::notImplemented(HX_HCSTRING("Graphics.drawRoundRectComplex","\x45","\xc0","\x68","\x95"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC8(Graphics_obj,drawRoundRectComplex,(void))

Void Graphics_obj::drawTriangles( ::openfl::_Vector::FloatVector vertices,::openfl::_Vector::IntVector indices,::openfl::_Vector::FloatVector uvtData,Dynamic __o_culling){
Dynamic culling = __o_culling.Default(1);
	HX_STACK_FRAME("openfl.display.Graphics","drawTriangles",0xae0bf90e,"openfl.display.Graphics.drawTriangles","openfl/display/Graphics.hx",449,0x8d299ce7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(vertices,"vertices")
	HX_STACK_ARG(indices,"indices")
	HX_STACK_ARG(uvtData,"uvtData")
	HX_STACK_ARG(culling,"culling")
{
		HX_STACK_LINE(451)
		int tmp = vertices->get_length();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(451)
		Float tmp1 = (Float(tmp) / Float((int)2));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(451)
		int tmp2 = ::Std_obj::_int(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(451)
		int vlen = tmp2;		HX_STACK_VAR(vlen,"vlen");
		HX_STACK_LINE(453)
		bool tmp3 = (culling == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(453)
		if ((tmp3)){
			HX_STACK_LINE(455)
			culling = ((Dynamic)((int)1));
		}
		HX_STACK_LINE(459)
		bool tmp4 = (indices == null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(459)
		if ((tmp4)){
			HX_STACK_LINE(461)
			int tmp5 = hx::Mod(vlen,(int)3);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(461)
			bool tmp6 = (tmp5 != (int)0);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(461)
			if ((tmp6)){
				HX_STACK_LINE(463)
				::openfl::errors::ArgumentError tmp7 = ::openfl::errors::ArgumentError_obj::__new(HX_HCSTRING("Not enough vertices to close a triangle.","\xfe","\xc6","\x58","\x0d"));		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(463)
				HX_STACK_DO_THROW(tmp7);
			}
			HX_STACK_LINE(467)
			::openfl::_Vector::IntVector tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(467)
			{
				HX_STACK_LINE(467)
				int length = null();		HX_STACK_VAR(length,"length");
				HX_STACK_LINE(467)
				bool fixed = null();		HX_STACK_VAR(fixed,"fixed");
				HX_STACK_LINE(467)
				::openfl::_Vector::IntVector tmp8 = ::openfl::_Vector::IntVector_obj::__new(length,fixed,null());		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(467)
				::openfl::_Vector::IntVector tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(467)
				tmp7 = tmp9;
			}
			HX_STACK_LINE(467)
			indices = tmp7;
			HX_STACK_LINE(469)
			{
				HX_STACK_LINE(469)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(469)
				while((true)){
					HX_STACK_LINE(469)
					bool tmp8 = (_g < vlen);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(469)
					bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(469)
					if ((tmp9)){
						HX_STACK_LINE(469)
						break;
					}
					HX_STACK_LINE(469)
					int tmp10 = (_g)++;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(469)
					int i = tmp10;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(471)
					int tmp11 = i;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(471)
					indices->push(tmp11);
				}
			}
		}
		HX_STACK_LINE(477)
		this->__inflateBounds((int)0,(int)0);
		HX_STACK_LINE(479)
		Float tmp5 = ::Math_obj::NEGATIVE_INFINITY;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(479)
		Float tmpx = tmp5;		HX_STACK_VAR(tmpx,"tmpx");
		HX_STACK_LINE(480)
		Float tmp6 = ::Math_obj::NEGATIVE_INFINITY;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(480)
		Float tmpy = tmp6;		HX_STACK_VAR(tmpy,"tmpy");
		HX_STACK_LINE(481)
		Float tmp7 = ::Math_obj::NEGATIVE_INFINITY;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(481)
		Float maxX = tmp7;		HX_STACK_VAR(maxX,"maxX");
		HX_STACK_LINE(482)
		Float tmp8 = ::Math_obj::NEGATIVE_INFINITY;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(482)
		Float maxY = tmp8;		HX_STACK_VAR(maxY,"maxY");
		HX_STACK_LINE(484)
		{
			HX_STACK_LINE(484)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(484)
			while((true)){
				HX_STACK_LINE(484)
				bool tmp9 = (_g < vlen);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(484)
				bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(484)
				if ((tmp10)){
					HX_STACK_LINE(484)
					break;
				}
				HX_STACK_LINE(484)
				int tmp11 = (_g)++;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(484)
				int i = tmp11;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(486)
				int tmp12 = (i * (int)2);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(486)
				Float tmp13 = vertices->get(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(486)
				tmpx = tmp13;
				HX_STACK_LINE(487)
				int tmp14 = (i * (int)2);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(487)
				int tmp15 = (tmp14 + (int)1);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(487)
				Float tmp16 = vertices->get(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(487)
				tmpy = tmp16;
				HX_STACK_LINE(488)
				bool tmp17 = (maxX < tmpx);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(488)
				if ((tmp17)){
					HX_STACK_LINE(488)
					maxX = tmpx;
				}
				HX_STACK_LINE(489)
				bool tmp18 = (maxY < tmpy);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(489)
				if ((tmp18)){
					HX_STACK_LINE(489)
					maxY = tmpy;
				}
			}
		}
		HX_STACK_LINE(493)
		Float tmp9 = maxX;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(493)
		Float tmp10 = maxY;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(493)
		this->__inflateBounds(tmp9,tmp10);
		HX_STACK_LINE(494)
		::openfl::_internal::renderer::DrawCommandBuffer tmp11 = this->__commands;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(494)
		::openfl::_Vector::FloatVector tmp12 = vertices;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(494)
		::openfl::_Vector::IntVector tmp13 = indices;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(494)
		::openfl::_Vector::FloatVector tmp14 = uvtData;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(494)
		Dynamic tmp15 = culling;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(494)
		tmp11->drawTriangles(tmp12,tmp13,tmp14,tmp15);
		HX_STACK_LINE(496)
		this->set___dirty(true);
		HX_STACK_LINE(497)
		this->__visible = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Graphics_obj,drawTriangles,(void))

Void Graphics_obj::endFill( ){
{
		HX_STACK_FRAME("openfl.display.Graphics","endFill",0xe14b2dc5,"openfl.display.Graphics.endFill","openfl/display/Graphics.hx",502,0x8d299ce7)
		HX_STACK_THIS(this)
		HX_STACK_LINE(504)
		::openfl::_internal::renderer::DrawCommandBuffer tmp = this->__commands;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(504)
		tmp->endFill();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Graphics_obj,endFill,(void))

Void Graphics_obj::lineBitmapStyle( ::openfl::display::BitmapData bitmap,::openfl::geom::Matrix matrix,hx::Null< bool >  __o_repeat,hx::Null< bool >  __o_smooth){
bool repeat = __o_repeat.Default(true);
bool smooth = __o_smooth.Default(false);
	HX_STACK_FRAME("openfl.display.Graphics","lineBitmapStyle",0x0ce183f5,"openfl.display.Graphics.lineBitmapStyle","openfl/display/Graphics.hx",509,0x8d299ce7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(bitmap,"bitmap")
	HX_STACK_ARG(matrix,"matrix")
	HX_STACK_ARG(repeat,"repeat")
	HX_STACK_ARG(smooth,"smooth")
{
		HX_STACK_LINE(511)
		::openfl::_internal::renderer::DrawCommandBuffer tmp = this->__commands;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(511)
		::openfl::display::BitmapData tmp1 = bitmap;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(511)
		bool tmp2 = (matrix != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(511)
		::openfl::geom::Matrix tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(511)
		if ((tmp2)){
			HX_STACK_LINE(511)
			tmp3 = matrix->clone();
		}
		else{
			HX_STACK_LINE(511)
			tmp3 = null();
		}
		HX_STACK_LINE(511)
		bool tmp4 = repeat;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(511)
		bool tmp5 = smooth;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(511)
		tmp->lineBitmapStyle(tmp1,tmp3,tmp4,tmp5);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Graphics_obj,lineBitmapStyle,(void))

Void Graphics_obj::lineGradientStyle( Dynamic type,Array< int > colors,Array< Float > alphas,Array< int > ratios,::openfl::geom::Matrix matrix,Dynamic __o_spreadMethod,Dynamic __o_interpolationMethod,hx::Null< Float >  __o_focalPointRatio){
Dynamic spreadMethod = __o_spreadMethod.Default(0);
Dynamic interpolationMethod = __o_interpolationMethod.Default(1);
Float focalPointRatio = __o_focalPointRatio.Default(0);
	HX_STACK_FRAME("openfl.display.Graphics","lineGradientStyle",0x2de26914,"openfl.display.Graphics.lineGradientStyle","openfl/display/Graphics.hx",516,0x8d299ce7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(type,"type")
	HX_STACK_ARG(colors,"colors")
	HX_STACK_ARG(alphas,"alphas")
	HX_STACK_ARG(ratios,"ratios")
	HX_STACK_ARG(matrix,"matrix")
	HX_STACK_ARG(spreadMethod,"spreadMethod")
	HX_STACK_ARG(interpolationMethod,"interpolationMethod")
	HX_STACK_ARG(focalPointRatio,"focalPointRatio")
{
		HX_STACK_LINE(518)
		::openfl::_internal::renderer::DrawCommandBuffer tmp = this->__commands;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(518)
		Dynamic tmp1 = type;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(518)
		::openfl::geom::Matrix tmp2 = matrix;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(518)
		Dynamic tmp3 = spreadMethod;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(518)
		Dynamic tmp4 = interpolationMethod;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(518)
		Float tmp5 = focalPointRatio;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(518)
		tmp->lineGradientStyle(tmp1,colors,alphas,ratios,tmp2,tmp3,tmp4,tmp5);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC8(Graphics_obj,lineGradientStyle,(void))

Void Graphics_obj::lineStyle( Dynamic thickness,hx::Null< int >  __o_color,hx::Null< Float >  __o_alpha,hx::Null< bool >  __o_pixelHinting,Dynamic __o_scaleMode,Dynamic caps,Dynamic joints,hx::Null< Float >  __o_miterLimit){
int color = __o_color.Default(0);
Float alpha = __o_alpha.Default(1);
bool pixelHinting = __o_pixelHinting.Default(false);
Dynamic scaleMode = __o_scaleMode.Default(2);
Float miterLimit = __o_miterLimit.Default(3);
	HX_STACK_FRAME("openfl.display.Graphics","lineStyle",0x32cd8e24,"openfl.display.Graphics.lineStyle","openfl/display/Graphics.hx",523,0x8d299ce7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(thickness,"thickness")
	HX_STACK_ARG(color,"color")
	HX_STACK_ARG(alpha,"alpha")
	HX_STACK_ARG(pixelHinting,"pixelHinting")
	HX_STACK_ARG(scaleMode,"scaleMode")
	HX_STACK_ARG(caps,"caps")
	HX_STACK_ARG(joints,"joints")
	HX_STACK_ARG(miterLimit,"miterLimit")
{
		HX_STACK_LINE(525)
		bool tmp = (thickness != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(525)
		if ((tmp)){
			HX_STACK_LINE(527)
			bool tmp1 = (joints == ((Dynamic)((int)1)));		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(527)
			if ((tmp1)){
				HX_STACK_LINE(529)
				Dynamic tmp2 = thickness;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(529)
				Float tmp3 = this->__strokePadding;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(529)
				bool tmp4 = (tmp2 > tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(529)
				if ((tmp4)){
					HX_STACK_LINE(529)
					this->__strokePadding = thickness;
				}
			}
			else{
				HX_STACK_LINE(533)
				Float tmp2 = (Float(thickness) / Float((int)2));		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(533)
				Float tmp3 = this->__strokePadding;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(533)
				bool tmp4 = (tmp2 > tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(533)
				if ((tmp4)){
					HX_STACK_LINE(533)
					Float tmp5 = (Float(thickness) / Float((int)2));		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(533)
					this->__strokePadding = tmp5;
				}
			}
		}
		HX_STACK_LINE(539)
		::openfl::_internal::renderer::DrawCommandBuffer tmp1 = this->__commands;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(539)
		Dynamic tmp2 = thickness;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(539)
		int tmp3 = color;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(539)
		Float tmp4 = alpha;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(539)
		bool tmp5 = pixelHinting;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(539)
		Dynamic tmp6 = scaleMode;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(539)
		Dynamic tmp7 = caps;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(539)
		Dynamic tmp8 = joints;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(539)
		Float tmp9 = miterLimit;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(539)
		tmp1->lineStyle(tmp2,tmp3,tmp4,tmp5,tmp6,tmp7,tmp8,tmp9);
		HX_STACK_LINE(541)
		bool tmp10 = (thickness != null());		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(541)
		if ((tmp10)){
			HX_STACK_LINE(541)
			this->__visible = true;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC8(Graphics_obj,lineStyle,(void))

Void Graphics_obj::lineTo( Float x,Float y){
{
		HX_STACK_FRAME("openfl.display.Graphics","lineTo",0x25b7b6a8,"openfl.display.Graphics.lineTo","openfl/display/Graphics.hx",546,0x8d299ce7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(548)
		Float tmp = x;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(548)
		bool tmp1 = ::Math_obj::isFinite(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(548)
		bool tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(548)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(548)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(548)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(548)
		if ((tmp4)){
			HX_STACK_LINE(548)
			Float tmp6 = y;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(548)
			Float tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(548)
			bool tmp8 = ::Math_obj::isFinite(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(548)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(548)
			bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(548)
			tmp5 = !(tmp10);
		}
		else{
			HX_STACK_LINE(548)
			tmp5 = true;
		}
		HX_STACK_LINE(548)
		if ((tmp5)){
			HX_STACK_LINE(550)
			return null();
		}
		HX_STACK_LINE(556)
		Float tmp6 = this->__positionX;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(556)
		Float tmp7 = this->__strokePadding;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(556)
		Float tmp8 = (tmp6 - tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(556)
		Float tmp9 = this->__positionY;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(556)
		Float tmp10 = this->__strokePadding;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(556)
		Float tmp11 = (tmp9 - tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(556)
		this->__inflateBounds(tmp8,tmp11);
		HX_STACK_LINE(557)
		Float tmp12 = this->__positionX;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(557)
		Float tmp13 = this->__strokePadding;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(557)
		Float tmp14 = (tmp12 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(557)
		Float tmp15 = this->__positionY;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(557)
		Float tmp16 = this->__strokePadding;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(557)
		Float tmp17 = (tmp15 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(557)
		this->__inflateBounds(tmp14,tmp17);
		HX_STACK_LINE(559)
		this->__positionX = x;
		HX_STACK_LINE(560)
		this->__positionY = y;
		HX_STACK_LINE(562)
		Float tmp18 = this->__positionX;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(562)
		Float tmp19 = this->__strokePadding;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(562)
		Float tmp20 = (tmp18 - tmp19);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(562)
		Float tmp21 = this->__positionY;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(562)
		Float tmp22 = this->__strokePadding;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(562)
		Float tmp23 = (tmp21 - tmp22);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(562)
		this->__inflateBounds(tmp20,tmp23);
		HX_STACK_LINE(563)
		Float tmp24 = this->__positionX;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(563)
		Float tmp25 = this->__strokePadding;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(563)
		Float tmp26 = (tmp25 * (int)2);		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(563)
		Float tmp27 = (tmp24 + tmp26);		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(563)
		Float tmp28 = this->__positionY;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(563)
		Float tmp29 = this->__strokePadding;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(563)
		Float tmp30 = (tmp28 + tmp29);		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(563)
		this->__inflateBounds(tmp27,tmp30);
		HX_STACK_LINE(565)
		::openfl::_internal::renderer::DrawCommandBuffer tmp31 = this->__commands;		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(565)
		Float tmp32 = x;		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(565)
		Float tmp33 = y;		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(565)
		tmp31->lineTo(tmp32,tmp33);
		HX_STACK_LINE(567)
		this->set___dirty(true);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Graphics_obj,lineTo,(void))

Void Graphics_obj::moveTo( Float x,Float y){
{
		HX_STACK_FRAME("openfl.display.Graphics","moveTo",0x05c44305,"openfl.display.Graphics.moveTo","openfl/display/Graphics.hx",572,0x8d299ce7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(574)
		this->__positionX = x;
		HX_STACK_LINE(575)
		this->__positionY = y;
		HX_STACK_LINE(577)
		::openfl::_internal::renderer::DrawCommandBuffer tmp = this->__commands;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(577)
		Float tmp1 = x;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(577)
		Float tmp2 = y;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(577)
		tmp->moveTo(tmp1,tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Graphics_obj,moveTo,(void))

::openfl::_Vector::ObjectVector Graphics_obj::readGraphicsData( hx::Null< bool >  __o_recurse){
bool recurse = __o_recurse.Default(true);
	HX_STACK_FRAME("openfl.display.Graphics","readGraphicsData",0x877c6664,"openfl.display.Graphics.readGraphicsData","openfl/display/Graphics.hx",582,0x8d299ce7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(recurse,"recurse")
{
		HX_STACK_LINE(584)
		::openfl::_Vector::ObjectVector tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(584)
		{
			HX_STACK_LINE(584)
			int length = null();		HX_STACK_VAR(length,"length");
			HX_STACK_LINE(584)
			bool fixed = null();		HX_STACK_VAR(fixed,"fixed");
			HX_STACK_LINE(584)
			::openfl::_Vector::ObjectVector tmp1 = ::openfl::_Vector::ObjectVector_obj::__new(length,fixed,null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(584)
			::openfl::_Vector::ObjectVector tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(584)
			tmp = tmp2;
		}
		HX_STACK_LINE(584)
		::openfl::_Vector::ObjectVector graphicsData = tmp;		HX_STACK_VAR(graphicsData,"graphicsData");
		HX_STACK_LINE(585)
		::openfl::display::DisplayObject tmp1 = this->__owner;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(585)
		::openfl::_Vector::ObjectVector tmp2 = graphicsData;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(585)
		bool tmp3 = recurse;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(585)
		tmp1->__readGraphicsData(tmp2,tmp3);
		HX_STACK_LINE(586)
		::openfl::_Vector::ObjectVector tmp4 = graphicsData;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(586)
		return tmp4;
	}
}


HX_DEFINE_DYNAMIC_FUNC1(Graphics_obj,readGraphicsData,return )

Float Graphics_obj::__calculateBezierCubicPoint( Float t,Float p1,Float p2,Float p3,Float p4){
	HX_STACK_FRAME("openfl.display.Graphics","__calculateBezierCubicPoint",0xb6679552,"openfl.display.Graphics.__calculateBezierCubicPoint","openfl/display/Graphics.hx",591,0x8d299ce7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(t,"t")
	HX_STACK_ARG(p1,"p1")
	HX_STACK_ARG(p2,"p2")
	HX_STACK_ARG(p3,"p3")
	HX_STACK_ARG(p4,"p4")
	HX_STACK_LINE(593)
	Float tmp = ((int)1 - t);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(593)
	Float iT = tmp;		HX_STACK_VAR(iT,"iT");
	HX_STACK_LINE(594)
	Float tmp1 = p1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(594)
	Float tmp2 = (iT * iT);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(594)
	Float tmp3 = iT;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(594)
	Float tmp4 = (tmp2 * tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(594)
	Float tmp5 = (tmp1 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(594)
	Float tmp6 = ((int)3 * p2);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(594)
	Float tmp7 = t;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(594)
	Float tmp8 = (tmp6 * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(594)
	Float tmp9 = (iT * iT);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(594)
	Float tmp10 = (tmp8 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(594)
	Float tmp11 = (tmp5 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(594)
	Float tmp12 = ((int)3 * p3);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(594)
	Float tmp13 = iT;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(594)
	Float tmp14 = (tmp12 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(594)
	Float tmp15 = (t * t);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(594)
	Float tmp16 = (tmp14 * tmp15);		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(594)
	Float tmp17 = (tmp11 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(594)
	Float tmp18 = p4;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(594)
	Float tmp19 = (t * t);		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(594)
	Float tmp20 = t;		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(594)
	Float tmp21 = (tmp19 * tmp20);		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(594)
	Float tmp22 = (tmp18 * tmp21);		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(594)
	Float tmp23 = (tmp17 + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(594)
	return tmp23;
}


HX_DEFINE_DYNAMIC_FUNC5(Graphics_obj,__calculateBezierCubicPoint,return )

Float Graphics_obj::__calculateBezierQuadPoint( Float t,Float p1,Float p2,Float p3){
	HX_STACK_FRAME("openfl.display.Graphics","__calculateBezierQuadPoint",0x2414b8dd,"openfl.display.Graphics.__calculateBezierQuadPoint","openfl/display/Graphics.hx",599,0x8d299ce7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(t,"t")
	HX_STACK_ARG(p1,"p1")
	HX_STACK_ARG(p2,"p2")
	HX_STACK_ARG(p3,"p3")
	HX_STACK_LINE(601)
	Float tmp = ((int)1 - t);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(601)
	Float iT = tmp;		HX_STACK_VAR(iT,"iT");
	HX_STACK_LINE(602)
	Float tmp1 = (iT * iT);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(602)
	Float tmp2 = p1;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(602)
	Float tmp3 = (tmp1 * tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(602)
	Float tmp4 = ((int)2 * iT);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(602)
	Float tmp5 = t;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(602)
	Float tmp6 = (tmp4 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(602)
	Float tmp7 = p2;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(602)
	Float tmp8 = (tmp6 * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(602)
	Float tmp9 = (tmp3 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(602)
	Float tmp10 = (t * t);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(602)
	Float tmp11 = p3;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(602)
	Float tmp12 = (tmp10 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(602)
	Float tmp13 = (tmp9 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(602)
	return tmp13;
}


HX_DEFINE_DYNAMIC_FUNC4(Graphics_obj,__calculateBezierQuadPoint,return )

Void Graphics_obj::__cleanup( ){
{
		HX_STACK_FRAME("openfl.display.Graphics","__cleanup",0x9445428b,"openfl.display.Graphics.__cleanup","openfl/display/Graphics.hx",607,0x8d299ce7)
		HX_STACK_THIS(this)
		HX_STACK_LINE(609)
		::openfl::geom::Rectangle tmp = this->__bounds;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(609)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(609)
		if ((tmp1)){
			HX_STACK_LINE(611)
			this->set___dirty(true);
			HX_STACK_LINE(612)
			this->__transformDirty = true;
		}
		HX_STACK_LINE(616)
		this->__bitmap = null();
		HX_STACK_LINE(622)
		this->__cairo = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Graphics_obj,__cleanup,(void))

Void Graphics_obj::__getBounds( ::openfl::geom::Rectangle rect,::openfl::geom::Matrix matrix){
{
		HX_STACK_FRAME("openfl.display.Graphics","__getBounds",0x7b7eedd2,"openfl.display.Graphics.__getBounds","openfl/display/Graphics.hx",628,0x8d299ce7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(rect,"rect")
		HX_STACK_ARG(matrix,"matrix")
		HX_STACK_LINE(630)
		::openfl::geom::Rectangle tmp = this->__bounds;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(630)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(630)
		if ((tmp1)){
			HX_STACK_LINE(630)
			return null();
		}
		HX_STACK_LINE(632)
		::openfl::geom::Rectangle tmp2 = ::openfl::geom::Rectangle_obj::__temp;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(632)
		::openfl::geom::Rectangle bounds = tmp2;		HX_STACK_VAR(bounds,"bounds");
		HX_STACK_LINE(633)
		::openfl::geom::Rectangle tmp3 = this->__bounds;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(633)
		::openfl::geom::Rectangle tmp4 = bounds;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(633)
		::openfl::geom::Matrix tmp5 = matrix;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(633)
		tmp3->__transform(tmp4,tmp5);
		HX_STACK_LINE(634)
		Float tmp6 = bounds->x;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(634)
		Float tmp7 = bounds->y;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(634)
		Float tmp8 = bounds->width;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(634)
		Float tmp9 = bounds->height;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(634)
		rect->__expand(tmp6,tmp7,tmp8,tmp9);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Graphics_obj,__getBounds,(void))

bool Graphics_obj::__hitTest( Float x,Float y,bool shapeFlag,::openfl::geom::Matrix matrix){
	HX_STACK_FRAME("openfl.display.Graphics","__hitTest",0xcb8296ac,"openfl.display.Graphics.__hitTest","openfl/display/Graphics.hx",639,0x8d299ce7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(shapeFlag,"shapeFlag")
	HX_STACK_ARG(matrix,"matrix")
	HX_STACK_LINE(641)
	::openfl::geom::Rectangle tmp = this->__bounds;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(641)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(641)
	if ((tmp1)){
		HX_STACK_LINE(641)
		return false;
	}
	HX_STACK_LINE(643)
	Float tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(643)
	{
		HX_STACK_LINE(643)
		Float tmp3 = (matrix->a * matrix->d);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(643)
		Float tmp4 = (matrix->b * matrix->c);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(643)
		Float tmp5 = (tmp3 - tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(643)
		Float norm = tmp5;		HX_STACK_VAR(norm,"norm");
		HX_STACK_LINE(643)
		bool tmp6 = (norm == (int)0);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(643)
		if ((tmp6)){
			HX_STACK_LINE(643)
			Float tmp7 = matrix->tx;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(643)
			tmp2 = -(tmp7);
		}
		else{
			HX_STACK_LINE(643)
			Float tmp7 = (Float(((Float)1.0)) / Float(norm));		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(643)
			Float tmp8 = matrix->c;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(643)
			Float tmp9 = (matrix->ty - y);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(643)
			Float tmp10 = (tmp8 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(643)
			Float tmp11 = matrix->d;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(643)
			Float tmp12 = (x - matrix->tx);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(643)
			Float tmp13 = (tmp11 * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(643)
			Float tmp14 = (tmp10 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(643)
			tmp2 = (tmp7 * tmp14);
		}
	}
	HX_STACK_LINE(643)
	Float px = tmp2;		HX_STACK_VAR(px,"px");
	HX_STACK_LINE(644)
	Float tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(644)
	{
		HX_STACK_LINE(644)
		Float tmp4 = (matrix->a * matrix->d);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(644)
		Float tmp5 = (matrix->b * matrix->c);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(644)
		Float tmp6 = (tmp4 - tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(644)
		Float norm = tmp6;		HX_STACK_VAR(norm,"norm");
		HX_STACK_LINE(644)
		bool tmp7 = (norm == (int)0);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(644)
		if ((tmp7)){
			HX_STACK_LINE(644)
			Float tmp8 = matrix->ty;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(644)
			tmp3 = -(tmp8);
		}
		else{
			HX_STACK_LINE(644)
			Float tmp8 = (Float(((Float)1.0)) / Float(norm));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(644)
			Float tmp9 = matrix->a;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(644)
			Float tmp10 = (y - matrix->ty);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(644)
			Float tmp11 = (tmp9 * tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(644)
			Float tmp12 = matrix->b;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(644)
			Float tmp13 = (matrix->tx - x);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(644)
			Float tmp14 = (tmp12 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(644)
			Float tmp15 = (tmp11 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(644)
			tmp3 = (tmp8 * tmp15);
		}
	}
	HX_STACK_LINE(644)
	Float py = tmp3;		HX_STACK_VAR(py,"py");
	HX_STACK_LINE(646)
	Float tmp4 = px;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(646)
	::openfl::geom::Rectangle tmp5 = this->__bounds;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(646)
	Float tmp6 = tmp5->x;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(646)
	bool tmp7 = (tmp4 > tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(646)
	bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(646)
	bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(646)
	if ((tmp8)){
		HX_STACK_LINE(646)
		Float tmp10 = py;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(646)
		::openfl::geom::Rectangle tmp11 = this->__bounds;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(646)
		::openfl::geom::Rectangle tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(646)
		::openfl::geom::Rectangle tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(646)
		Float tmp14 = tmp13->y;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(646)
		tmp9 = (tmp10 > tmp14);
	}
	else{
		HX_STACK_LINE(646)
		tmp9 = false;
	}
	HX_STACK_LINE(646)
	bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(646)
	if ((tmp9)){
		HX_STACK_LINE(646)
		::openfl::geom::Rectangle tmp11 = this->__bounds;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(646)
		::openfl::geom::Rectangle tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(646)
		Float tmp13 = px;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(646)
		Float tmp14 = py;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(646)
		Float tmp15 = tmp13;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(646)
		Float tmp16 = tmp14;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(646)
		tmp10 = tmp12->contains(tmp15,tmp16);
	}
	else{
		HX_STACK_LINE(646)
		tmp10 = false;
	}
	HX_STACK_LINE(646)
	if ((tmp10)){
		HX_STACK_LINE(648)
		bool tmp11 = shapeFlag;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(648)
		if ((tmp11)){
			HX_STACK_LINE(653)
			Float tmp12 = px;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(653)
			Float tmp13 = py;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(653)
			bool tmp14 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::hitTest(hx::ObjectPtr<OBJ_>(this),tmp12,tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(653)
			return tmp14;
		}
		HX_STACK_LINE(658)
		return true;
	}
	HX_STACK_LINE(662)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC4(Graphics_obj,__hitTest,return )

Void Graphics_obj::__inflateBounds( Float x,Float y){
{
		HX_STACK_FRAME("openfl.display.Graphics","__inflateBounds",0x7eaeb403,"openfl.display.Graphics.__inflateBounds","openfl/display/Graphics.hx",667,0x8d299ce7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(669)
		::openfl::geom::Rectangle tmp = this->__bounds;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(669)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(669)
		if ((tmp1)){
			HX_STACK_LINE(671)
			::openfl::geom::Rectangle tmp2 = ::openfl::geom::Rectangle_obj::__new(x,y,(int)0,(int)0);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(671)
			this->__bounds = tmp2;
			HX_STACK_LINE(672)
			this->__transformDirty = true;
			HX_STACK_LINE(673)
			return null();
		}
		HX_STACK_LINE(677)
		Float tmp2 = x;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(677)
		::openfl::geom::Rectangle tmp3 = this->__bounds;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(677)
		Float tmp4 = tmp3->x;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(677)
		bool tmp5 = (tmp2 < tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(677)
		if ((tmp5)){
			HX_STACK_LINE(679)
			::openfl::geom::Rectangle tmp6 = this->__bounds;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(679)
			Float tmp7 = tmp6->x;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(679)
			Float tmp8 = x;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(679)
			Float tmp9 = (tmp7 - tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(679)
			::openfl::geom::Rectangle tmp10 = this->__bounds;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(679)
			hx::AddEq(tmp10->width,tmp9);
			HX_STACK_LINE(680)
			::openfl::geom::Rectangle tmp11 = this->__bounds;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(680)
			tmp11->x = x;
			HX_STACK_LINE(681)
			this->__transformDirty = true;
		}
		HX_STACK_LINE(685)
		Float tmp6 = y;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(685)
		::openfl::geom::Rectangle tmp7 = this->__bounds;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(685)
		Float tmp8 = tmp7->y;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(685)
		bool tmp9 = (tmp6 < tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(685)
		if ((tmp9)){
			HX_STACK_LINE(687)
			::openfl::geom::Rectangle tmp10 = this->__bounds;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(687)
			Float tmp11 = tmp10->y;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(687)
			Float tmp12 = y;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(687)
			Float tmp13 = (tmp11 - tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(687)
			::openfl::geom::Rectangle tmp14 = this->__bounds;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(687)
			hx::AddEq(tmp14->height,tmp13);
			HX_STACK_LINE(688)
			::openfl::geom::Rectangle tmp15 = this->__bounds;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(688)
			tmp15->y = y;
			HX_STACK_LINE(689)
			this->__transformDirty = true;
		}
		HX_STACK_LINE(693)
		Float tmp10 = x;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(693)
		::openfl::geom::Rectangle tmp11 = this->__bounds;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(693)
		Float tmp12 = tmp11->x;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(693)
		::openfl::geom::Rectangle tmp13 = this->__bounds;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(693)
		Float tmp14 = tmp13->width;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(693)
		Float tmp15 = (tmp12 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(693)
		bool tmp16 = (tmp10 > tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(693)
		if ((tmp16)){
			HX_STACK_LINE(695)
			Float tmp17 = x;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(695)
			::openfl::geom::Rectangle tmp18 = this->__bounds;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(695)
			Float tmp19 = tmp18->x;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(695)
			Float tmp20 = (tmp17 - tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(695)
			::openfl::geom::Rectangle tmp21 = this->__bounds;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(695)
			tmp21->width = tmp20;
		}
		HX_STACK_LINE(699)
		Float tmp17 = y;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(699)
		::openfl::geom::Rectangle tmp18 = this->__bounds;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(699)
		Float tmp19 = tmp18->y;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(699)
		::openfl::geom::Rectangle tmp20 = this->__bounds;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(699)
		Float tmp21 = tmp20->height;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(699)
		Float tmp22 = (tmp19 + tmp21);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(699)
		bool tmp23 = (tmp17 > tmp22);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(699)
		if ((tmp23)){
			HX_STACK_LINE(701)
			Float tmp24 = y;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(701)
			::openfl::geom::Rectangle tmp25 = this->__bounds;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(701)
			Float tmp26 = tmp25->y;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(701)
			Float tmp27 = (tmp24 - tmp26);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(701)
			::openfl::geom::Rectangle tmp28 = this->__bounds;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(701)
			tmp28->height = tmp27;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Graphics_obj,__inflateBounds,(void))

Void Graphics_obj::__readGraphicsData( ::openfl::_Vector::ObjectVector graphicsData){
{
		HX_STACK_FRAME("openfl.display.Graphics","__readGraphicsData",0xf8dcc1c4,"openfl.display.Graphics.__readGraphicsData","openfl/display/Graphics.hx",708,0x8d299ce7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(graphicsData,"graphicsData")
		HX_STACK_LINE(710)
		::openfl::_internal::renderer::DrawCommandBuffer tmp = this->__commands;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(710)
		::openfl::_internal::renderer::DrawCommandReader tmp1 = ::openfl::_internal::renderer::DrawCommandReader_obj::__new(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(710)
		::openfl::_internal::renderer::DrawCommandReader data = tmp1;		HX_STACK_VAR(data,"data");
		HX_STACK_LINE(711)
		::openfl::display::GraphicsPath path;		HX_STACK_VAR(path,"path");
		HX_STACK_LINE(713)
		{
			HX_STACK_LINE(713)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(713)
			::openfl::_internal::renderer::DrawCommandBuffer tmp2 = this->__commands;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(713)
			Array< ::Dynamic > _g1 = tmp2->types;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(713)
			while((true)){
				HX_STACK_LINE(713)
				bool tmp3 = (_g < _g1->length);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(713)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(713)
				if ((tmp4)){
					HX_STACK_LINE(713)
					break;
				}
				HX_STACK_LINE(713)
				::openfl::_internal::renderer::DrawCommandType tmp5 = _g1->__get(_g).StaticCast< ::openfl::_internal::renderer::DrawCommandType >();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(713)
				::openfl::_internal::renderer::DrawCommandType type = tmp5;		HX_STACK_VAR(type,"type");
				HX_STACK_LINE(713)
				++(_g);
				HX_STACK_LINE(715)
				switch( (int)(type->__Index())){
					case (int)3: {
						HX_STACK_LINE(719)
						::openfl::_internal::renderer::DrawCommandReader tmp6;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(719)
						{
							HX_STACK_LINE(719)
							{
								HX_STACK_LINE(719)
								::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
								HX_STACK_LINE(719)
								switch( (int)(_g2->__Index())){
									case (int)0: {
										HX_STACK_LINE(719)
										hx::AddEq(data->oPos,(int)2);
										HX_STACK_LINE(719)
										hx::AddEq(data->bPos,(int)2);
									}
									;break;
									case (int)1: {
										HX_STACK_LINE(719)
										hx::AddEq(data->iPos,(int)1);
										HX_STACK_LINE(719)
										hx::AddEq(data->fPos,(int)1);
									}
									;break;
									case (int)2: {
										HX_STACK_LINE(719)
										hx::AddEq(data->oPos,(int)4);
										HX_STACK_LINE(719)
										hx::AddEq(data->iiPos,(int)2);
										HX_STACK_LINE(719)
										hx::AddEq(data->ffPos,(int)1);
										HX_STACK_LINE(719)
										hx::AddEq(data->fPos,(int)1);
									}
									;break;
									case (int)3: {
										HX_STACK_LINE(719)
										hx::AddEq(data->fPos,(int)6);
									}
									;break;
									case (int)4: {
										HX_STACK_LINE(719)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)5: {
										HX_STACK_LINE(719)
										hx::AddEq(data->fPos,(int)3);
									}
									;break;
									case (int)6: {
										HX_STACK_LINE(719)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)7: {
										HX_STACK_LINE(719)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)8: {
										HX_STACK_LINE(719)
										hx::AddEq(data->fPos,(int)5);
										HX_STACK_LINE(719)
										hx::AddEq(data->oPos,(int)1);
									}
									;break;
									case (int)10: {
										HX_STACK_LINE(719)
										hx::AddEq(data->oPos,(int)4);
									}
									;break;
									case (int)11: {
										HX_STACK_LINE(719)
										Dynamic();
									}
									;break;
									case (int)12: {
										HX_STACK_LINE(719)
										hx::AddEq(data->oPos,(int)2);
										HX_STACK_LINE(719)
										hx::AddEq(data->bPos,(int)2);
									}
									;break;
									case (int)13: {
										HX_STACK_LINE(719)
										hx::AddEq(data->oPos,(int)4);
										HX_STACK_LINE(719)
										hx::AddEq(data->iiPos,(int)2);
										HX_STACK_LINE(719)
										hx::AddEq(data->ffPos,(int)1);
										HX_STACK_LINE(719)
										hx::AddEq(data->fPos,(int)1);
									}
									;break;
									case (int)14: {
										HX_STACK_LINE(719)
										hx::AddEq(data->oPos,(int)4);
										HX_STACK_LINE(719)
										hx::AddEq(data->iPos,(int)1);
										HX_STACK_LINE(719)
										hx::AddEq(data->fPos,(int)2);
										HX_STACK_LINE(719)
										hx::AddEq(data->bPos,(int)1);
									}
									;break;
									case (int)15: {
										HX_STACK_LINE(719)
										hx::AddEq(data->fPos,(int)2);
									}
									;break;
									case (int)16: {
										HX_STACK_LINE(719)
										hx::AddEq(data->fPos,(int)2);
									}
									;break;
									case (int)17: {
										HX_STACK_LINE(719)
										hx::AddEq(data->oPos,(int)1);
									}
									;break;
									default: {
										HX_STACK_LINE(719)
										Dynamic();
									}
								}
							}
							HX_STACK_LINE(719)
							data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::CUBIC_CURVE_TO;
							HX_STACK_LINE(719)
							tmp6 = data;
						}
						HX_STACK_LINE(719)
						::openfl::_internal::renderer::DrawCommandReader c = tmp6;		HX_STACK_VAR(c,"c");
					}
					;break;
					case (int)4: {
						HX_STACK_LINE(725)
						::openfl::_internal::renderer::DrawCommandReader tmp6;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(725)
						{
							HX_STACK_LINE(725)
							{
								HX_STACK_LINE(725)
								::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
								HX_STACK_LINE(725)
								switch( (int)(_g2->__Index())){
									case (int)0: {
										HX_STACK_LINE(725)
										hx::AddEq(data->oPos,(int)2);
										HX_STACK_LINE(725)
										hx::AddEq(data->bPos,(int)2);
									}
									;break;
									case (int)1: {
										HX_STACK_LINE(725)
										hx::AddEq(data->iPos,(int)1);
										HX_STACK_LINE(725)
										hx::AddEq(data->fPos,(int)1);
									}
									;break;
									case (int)2: {
										HX_STACK_LINE(725)
										hx::AddEq(data->oPos,(int)4);
										HX_STACK_LINE(725)
										hx::AddEq(data->iiPos,(int)2);
										HX_STACK_LINE(725)
										hx::AddEq(data->ffPos,(int)1);
										HX_STACK_LINE(725)
										hx::AddEq(data->fPos,(int)1);
									}
									;break;
									case (int)3: {
										HX_STACK_LINE(725)
										hx::AddEq(data->fPos,(int)6);
									}
									;break;
									case (int)4: {
										HX_STACK_LINE(725)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)5: {
										HX_STACK_LINE(725)
										hx::AddEq(data->fPos,(int)3);
									}
									;break;
									case (int)6: {
										HX_STACK_LINE(725)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)7: {
										HX_STACK_LINE(725)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)8: {
										HX_STACK_LINE(725)
										hx::AddEq(data->fPos,(int)5);
										HX_STACK_LINE(725)
										hx::AddEq(data->oPos,(int)1);
									}
									;break;
									case (int)10: {
										HX_STACK_LINE(725)
										hx::AddEq(data->oPos,(int)4);
									}
									;break;
									case (int)11: {
										HX_STACK_LINE(725)
										Dynamic();
									}
									;break;
									case (int)12: {
										HX_STACK_LINE(725)
										hx::AddEq(data->oPos,(int)2);
										HX_STACK_LINE(725)
										hx::AddEq(data->bPos,(int)2);
									}
									;break;
									case (int)13: {
										HX_STACK_LINE(725)
										hx::AddEq(data->oPos,(int)4);
										HX_STACK_LINE(725)
										hx::AddEq(data->iiPos,(int)2);
										HX_STACK_LINE(725)
										hx::AddEq(data->ffPos,(int)1);
										HX_STACK_LINE(725)
										hx::AddEq(data->fPos,(int)1);
									}
									;break;
									case (int)14: {
										HX_STACK_LINE(725)
										hx::AddEq(data->oPos,(int)4);
										HX_STACK_LINE(725)
										hx::AddEq(data->iPos,(int)1);
										HX_STACK_LINE(725)
										hx::AddEq(data->fPos,(int)2);
										HX_STACK_LINE(725)
										hx::AddEq(data->bPos,(int)1);
									}
									;break;
									case (int)15: {
										HX_STACK_LINE(725)
										hx::AddEq(data->fPos,(int)2);
									}
									;break;
									case (int)16: {
										HX_STACK_LINE(725)
										hx::AddEq(data->fPos,(int)2);
									}
									;break;
									case (int)17: {
										HX_STACK_LINE(725)
										hx::AddEq(data->oPos,(int)1);
									}
									;break;
									default: {
										HX_STACK_LINE(725)
										Dynamic();
									}
								}
							}
							HX_STACK_LINE(725)
							data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::CURVE_TO;
							HX_STACK_LINE(725)
							tmp6 = data;
						}
						HX_STACK_LINE(725)
						::openfl::_internal::renderer::DrawCommandReader c = tmp6;		HX_STACK_VAR(c,"c");
						HX_STACK_LINE(726)
						::openfl::display::GraphicsPath tmp7 = ::openfl::display::GraphicsPath_obj::__new(null(),null(),null());		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(726)
						path = tmp7;
						HX_STACK_LINE(727)
						::openfl::_internal::renderer::DrawCommandBuffer tmp8 = c->buffer;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(727)
						int tmp9 = c->fPos;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(727)
						int tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(727)
						Float tmp11 = tmp8->f->__get(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(727)
						::openfl::_internal::renderer::DrawCommandBuffer tmp12 = c->buffer;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(727)
						int tmp13 = c->fPos;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(727)
						int tmp14 = (tmp13 + (int)1);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(727)
						Float tmp15 = tmp12->f->__get(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(727)
						::openfl::_internal::renderer::DrawCommandBuffer tmp16 = c->buffer;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(727)
						int tmp17 = c->fPos;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(727)
						int tmp18 = (tmp17 + (int)2);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(727)
						Float tmp19 = tmp16->f->__get(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(727)
						::openfl::_internal::renderer::DrawCommandBuffer tmp20 = c->buffer;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(727)
						int tmp21 = c->fPos;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(727)
						int tmp22 = (tmp21 + (int)3);		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(727)
						Float tmp23 = tmp20->f->__get(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(727)
						path->curveTo(tmp11,tmp15,tmp19,tmp23);
						HX_STACK_LINE(728)
						::openfl::display::GraphicsPath tmp24 = path;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(728)
						graphicsData->push(tmp24);
					}
					;break;
					case (int)15: {
						HX_STACK_LINE(732)
						::openfl::_internal::renderer::DrawCommandReader tmp6;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(732)
						{
							HX_STACK_LINE(732)
							{
								HX_STACK_LINE(732)
								::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
								HX_STACK_LINE(732)
								switch( (int)(_g2->__Index())){
									case (int)0: {
										HX_STACK_LINE(732)
										hx::AddEq(data->oPos,(int)2);
										HX_STACK_LINE(732)
										hx::AddEq(data->bPos,(int)2);
									}
									;break;
									case (int)1: {
										HX_STACK_LINE(732)
										hx::AddEq(data->iPos,(int)1);
										HX_STACK_LINE(732)
										hx::AddEq(data->fPos,(int)1);
									}
									;break;
									case (int)2: {
										HX_STACK_LINE(732)
										hx::AddEq(data->oPos,(int)4);
										HX_STACK_LINE(732)
										hx::AddEq(data->iiPos,(int)2);
										HX_STACK_LINE(732)
										hx::AddEq(data->ffPos,(int)1);
										HX_STACK_LINE(732)
										hx::AddEq(data->fPos,(int)1);
									}
									;break;
									case (int)3: {
										HX_STACK_LINE(732)
										hx::AddEq(data->fPos,(int)6);
									}
									;break;
									case (int)4: {
										HX_STACK_LINE(732)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)5: {
										HX_STACK_LINE(732)
										hx::AddEq(data->fPos,(int)3);
									}
									;break;
									case (int)6: {
										HX_STACK_LINE(732)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)7: {
										HX_STACK_LINE(732)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)8: {
										HX_STACK_LINE(732)
										hx::AddEq(data->fPos,(int)5);
										HX_STACK_LINE(732)
										hx::AddEq(data->oPos,(int)1);
									}
									;break;
									case (int)10: {
										HX_STACK_LINE(732)
										hx::AddEq(data->oPos,(int)4);
									}
									;break;
									case (int)11: {
										HX_STACK_LINE(732)
										Dynamic();
									}
									;break;
									case (int)12: {
										HX_STACK_LINE(732)
										hx::AddEq(data->oPos,(int)2);
										HX_STACK_LINE(732)
										hx::AddEq(data->bPos,(int)2);
									}
									;break;
									case (int)13: {
										HX_STACK_LINE(732)
										hx::AddEq(data->oPos,(int)4);
										HX_STACK_LINE(732)
										hx::AddEq(data->iiPos,(int)2);
										HX_STACK_LINE(732)
										hx::AddEq(data->ffPos,(int)1);
										HX_STACK_LINE(732)
										hx::AddEq(data->fPos,(int)1);
									}
									;break;
									case (int)14: {
										HX_STACK_LINE(732)
										hx::AddEq(data->oPos,(int)4);
										HX_STACK_LINE(732)
										hx::AddEq(data->iPos,(int)1);
										HX_STACK_LINE(732)
										hx::AddEq(data->fPos,(int)2);
										HX_STACK_LINE(732)
										hx::AddEq(data->bPos,(int)1);
									}
									;break;
									case (int)15: {
										HX_STACK_LINE(732)
										hx::AddEq(data->fPos,(int)2);
									}
									;break;
									case (int)16: {
										HX_STACK_LINE(732)
										hx::AddEq(data->fPos,(int)2);
									}
									;break;
									case (int)17: {
										HX_STACK_LINE(732)
										hx::AddEq(data->oPos,(int)1);
									}
									;break;
									default: {
										HX_STACK_LINE(732)
										Dynamic();
									}
								}
							}
							HX_STACK_LINE(732)
							data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::LINE_TO;
							HX_STACK_LINE(732)
							tmp6 = data;
						}
						HX_STACK_LINE(732)
						::openfl::_internal::renderer::DrawCommandReader c = tmp6;		HX_STACK_VAR(c,"c");
						HX_STACK_LINE(733)
						::openfl::display::GraphicsPath tmp7 = ::openfl::display::GraphicsPath_obj::__new(null(),null(),null());		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(733)
						path = tmp7;
						HX_STACK_LINE(734)
						::openfl::_internal::renderer::DrawCommandBuffer tmp8 = c->buffer;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(734)
						int tmp9 = c->fPos;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(734)
						int tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(734)
						Float tmp11 = tmp8->f->__get(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(734)
						::openfl::_internal::renderer::DrawCommandBuffer tmp12 = c->buffer;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(734)
						int tmp13 = c->fPos;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(734)
						int tmp14 = (tmp13 + (int)1);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(734)
						Float tmp15 = tmp12->f->__get(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(734)
						path->lineTo(tmp11,tmp15);
						HX_STACK_LINE(735)
						::openfl::display::GraphicsPath tmp16 = path;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(735)
						graphicsData->push(tmp16);
					}
					;break;
					case (int)16: {
						HX_STACK_LINE(739)
						::openfl::_internal::renderer::DrawCommandReader tmp6;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(739)
						{
							HX_STACK_LINE(739)
							{
								HX_STACK_LINE(739)
								::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
								HX_STACK_LINE(739)
								switch( (int)(_g2->__Index())){
									case (int)0: {
										HX_STACK_LINE(739)
										hx::AddEq(data->oPos,(int)2);
										HX_STACK_LINE(739)
										hx::AddEq(data->bPos,(int)2);
									}
									;break;
									case (int)1: {
										HX_STACK_LINE(739)
										hx::AddEq(data->iPos,(int)1);
										HX_STACK_LINE(739)
										hx::AddEq(data->fPos,(int)1);
									}
									;break;
									case (int)2: {
										HX_STACK_LINE(739)
										hx::AddEq(data->oPos,(int)4);
										HX_STACK_LINE(739)
										hx::AddEq(data->iiPos,(int)2);
										HX_STACK_LINE(739)
										hx::AddEq(data->ffPos,(int)1);
										HX_STACK_LINE(739)
										hx::AddEq(data->fPos,(int)1);
									}
									;break;
									case (int)3: {
										HX_STACK_LINE(739)
										hx::AddEq(data->fPos,(int)6);
									}
									;break;
									case (int)4: {
										HX_STACK_LINE(739)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)5: {
										HX_STACK_LINE(739)
										hx::AddEq(data->fPos,(int)3);
									}
									;break;
									case (int)6: {
										HX_STACK_LINE(739)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)7: {
										HX_STACK_LINE(739)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)8: {
										HX_STACK_LINE(739)
										hx::AddEq(data->fPos,(int)5);
										HX_STACK_LINE(739)
										hx::AddEq(data->oPos,(int)1);
									}
									;break;
									case (int)10: {
										HX_STACK_LINE(739)
										hx::AddEq(data->oPos,(int)4);
									}
									;break;
									case (int)11: {
										HX_STACK_LINE(739)
										Dynamic();
									}
									;break;
									case (int)12: {
										HX_STACK_LINE(739)
										hx::AddEq(data->oPos,(int)2);
										HX_STACK_LINE(739)
										hx::AddEq(data->bPos,(int)2);
									}
									;break;
									case (int)13: {
										HX_STACK_LINE(739)
										hx::AddEq(data->oPos,(int)4);
										HX_STACK_LINE(739)
										hx::AddEq(data->iiPos,(int)2);
										HX_STACK_LINE(739)
										hx::AddEq(data->ffPos,(int)1);
										HX_STACK_LINE(739)
										hx::AddEq(data->fPos,(int)1);
									}
									;break;
									case (int)14: {
										HX_STACK_LINE(739)
										hx::AddEq(data->oPos,(int)4);
										HX_STACK_LINE(739)
										hx::AddEq(data->iPos,(int)1);
										HX_STACK_LINE(739)
										hx::AddEq(data->fPos,(int)2);
										HX_STACK_LINE(739)
										hx::AddEq(data->bPos,(int)1);
									}
									;break;
									case (int)15: {
										HX_STACK_LINE(739)
										hx::AddEq(data->fPos,(int)2);
									}
									;break;
									case (int)16: {
										HX_STACK_LINE(739)
										hx::AddEq(data->fPos,(int)2);
									}
									;break;
									case (int)17: {
										HX_STACK_LINE(739)
										hx::AddEq(data->oPos,(int)1);
									}
									;break;
									default: {
										HX_STACK_LINE(739)
										Dynamic();
									}
								}
							}
							HX_STACK_LINE(739)
							data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::MOVE_TO;
							HX_STACK_LINE(739)
							tmp6 = data;
						}
						HX_STACK_LINE(739)
						::openfl::_internal::renderer::DrawCommandReader c = tmp6;		HX_STACK_VAR(c,"c");
						HX_STACK_LINE(740)
						::openfl::display::GraphicsPath tmp7 = ::openfl::display::GraphicsPath_obj::__new(null(),null(),null());		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(740)
						path = tmp7;
						HX_STACK_LINE(741)
						::openfl::_internal::renderer::DrawCommandBuffer tmp8 = c->buffer;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(741)
						int tmp9 = c->fPos;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(741)
						int tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(741)
						Float tmp11 = tmp8->f->__get(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(741)
						::openfl::_internal::renderer::DrawCommandBuffer tmp12 = c->buffer;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(741)
						int tmp13 = c->fPos;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(741)
						int tmp14 = (tmp13 + (int)1);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(741)
						Float tmp15 = tmp12->f->__get(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(741)
						path->moveTo(tmp11,tmp15);
						HX_STACK_LINE(742)
						::openfl::display::GraphicsPath tmp16 = path;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(742)
						graphicsData->push(tmp16);
					}
					;break;
					case (int)13: {
						HX_STACK_LINE(746)
						::openfl::_internal::renderer::DrawCommandReader tmp6;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(746)
						{
							HX_STACK_LINE(746)
							{
								HX_STACK_LINE(746)
								::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
								HX_STACK_LINE(746)
								switch( (int)(_g2->__Index())){
									case (int)0: {
										HX_STACK_LINE(746)
										hx::AddEq(data->oPos,(int)2);
										HX_STACK_LINE(746)
										hx::AddEq(data->bPos,(int)2);
									}
									;break;
									case (int)1: {
										HX_STACK_LINE(746)
										hx::AddEq(data->iPos,(int)1);
										HX_STACK_LINE(746)
										hx::AddEq(data->fPos,(int)1);
									}
									;break;
									case (int)2: {
										HX_STACK_LINE(746)
										hx::AddEq(data->oPos,(int)4);
										HX_STACK_LINE(746)
										hx::AddEq(data->iiPos,(int)2);
										HX_STACK_LINE(746)
										hx::AddEq(data->ffPos,(int)1);
										HX_STACK_LINE(746)
										hx::AddEq(data->fPos,(int)1);
									}
									;break;
									case (int)3: {
										HX_STACK_LINE(746)
										hx::AddEq(data->fPos,(int)6);
									}
									;break;
									case (int)4: {
										HX_STACK_LINE(746)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)5: {
										HX_STACK_LINE(746)
										hx::AddEq(data->fPos,(int)3);
									}
									;break;
									case (int)6: {
										HX_STACK_LINE(746)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)7: {
										HX_STACK_LINE(746)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)8: {
										HX_STACK_LINE(746)
										hx::AddEq(data->fPos,(int)5);
										HX_STACK_LINE(746)
										hx::AddEq(data->oPos,(int)1);
									}
									;break;
									case (int)10: {
										HX_STACK_LINE(746)
										hx::AddEq(data->oPos,(int)4);
									}
									;break;
									case (int)11: {
										HX_STACK_LINE(746)
										Dynamic();
									}
									;break;
									case (int)12: {
										HX_STACK_LINE(746)
										hx::AddEq(data->oPos,(int)2);
										HX_STACK_LINE(746)
										hx::AddEq(data->bPos,(int)2);
									}
									;break;
									case (int)13: {
										HX_STACK_LINE(746)
										hx::AddEq(data->oPos,(int)4);
										HX_STACK_LINE(746)
										hx::AddEq(data->iiPos,(int)2);
										HX_STACK_LINE(746)
										hx::AddEq(data->ffPos,(int)1);
										HX_STACK_LINE(746)
										hx::AddEq(data->fPos,(int)1);
									}
									;break;
									case (int)14: {
										HX_STACK_LINE(746)
										hx::AddEq(data->oPos,(int)4);
										HX_STACK_LINE(746)
										hx::AddEq(data->iPos,(int)1);
										HX_STACK_LINE(746)
										hx::AddEq(data->fPos,(int)2);
										HX_STACK_LINE(746)
										hx::AddEq(data->bPos,(int)1);
									}
									;break;
									case (int)15: {
										HX_STACK_LINE(746)
										hx::AddEq(data->fPos,(int)2);
									}
									;break;
									case (int)16: {
										HX_STACK_LINE(746)
										hx::AddEq(data->fPos,(int)2);
									}
									;break;
									case (int)17: {
										HX_STACK_LINE(746)
										hx::AddEq(data->oPos,(int)1);
									}
									;break;
									default: {
										HX_STACK_LINE(746)
										Dynamic();
									}
								}
							}
							HX_STACK_LINE(746)
							data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::LINE_GRADIENT_STYLE;
							HX_STACK_LINE(746)
							tmp6 = data;
						}
						HX_STACK_LINE(746)
						::openfl::_internal::renderer::DrawCommandReader c = tmp6;		HX_STACK_VAR(c,"c");
					}
					;break;
					case (int)12: {
						HX_STACK_LINE(752)
						::openfl::_internal::renderer::DrawCommandReader tmp6;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(752)
						{
							HX_STACK_LINE(752)
							{
								HX_STACK_LINE(752)
								::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
								HX_STACK_LINE(752)
								switch( (int)(_g2->__Index())){
									case (int)0: {
										HX_STACK_LINE(752)
										hx::AddEq(data->oPos,(int)2);
										HX_STACK_LINE(752)
										hx::AddEq(data->bPos,(int)2);
									}
									;break;
									case (int)1: {
										HX_STACK_LINE(752)
										hx::AddEq(data->iPos,(int)1);
										HX_STACK_LINE(752)
										hx::AddEq(data->fPos,(int)1);
									}
									;break;
									case (int)2: {
										HX_STACK_LINE(752)
										hx::AddEq(data->oPos,(int)4);
										HX_STACK_LINE(752)
										hx::AddEq(data->iiPos,(int)2);
										HX_STACK_LINE(752)
										hx::AddEq(data->ffPos,(int)1);
										HX_STACK_LINE(752)
										hx::AddEq(data->fPos,(int)1);
									}
									;break;
									case (int)3: {
										HX_STACK_LINE(752)
										hx::AddEq(data->fPos,(int)6);
									}
									;break;
									case (int)4: {
										HX_STACK_LINE(752)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)5: {
										HX_STACK_LINE(752)
										hx::AddEq(data->fPos,(int)3);
									}
									;break;
									case (int)6: {
										HX_STACK_LINE(752)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)7: {
										HX_STACK_LINE(752)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)8: {
										HX_STACK_LINE(752)
										hx::AddEq(data->fPos,(int)5);
										HX_STACK_LINE(752)
										hx::AddEq(data->oPos,(int)1);
									}
									;break;
									case (int)10: {
										HX_STACK_LINE(752)
										hx::AddEq(data->oPos,(int)4);
									}
									;break;
									case (int)11: {
										HX_STACK_LINE(752)
										Dynamic();
									}
									;break;
									case (int)12: {
										HX_STACK_LINE(752)
										hx::AddEq(data->oPos,(int)2);
										HX_STACK_LINE(752)
										hx::AddEq(data->bPos,(int)2);
									}
									;break;
									case (int)13: {
										HX_STACK_LINE(752)
										hx::AddEq(data->oPos,(int)4);
										HX_STACK_LINE(752)
										hx::AddEq(data->iiPos,(int)2);
										HX_STACK_LINE(752)
										hx::AddEq(data->ffPos,(int)1);
										HX_STACK_LINE(752)
										hx::AddEq(data->fPos,(int)1);
									}
									;break;
									case (int)14: {
										HX_STACK_LINE(752)
										hx::AddEq(data->oPos,(int)4);
										HX_STACK_LINE(752)
										hx::AddEq(data->iPos,(int)1);
										HX_STACK_LINE(752)
										hx::AddEq(data->fPos,(int)2);
										HX_STACK_LINE(752)
										hx::AddEq(data->bPos,(int)1);
									}
									;break;
									case (int)15: {
										HX_STACK_LINE(752)
										hx::AddEq(data->fPos,(int)2);
									}
									;break;
									case (int)16: {
										HX_STACK_LINE(752)
										hx::AddEq(data->fPos,(int)2);
									}
									;break;
									case (int)17: {
										HX_STACK_LINE(752)
										hx::AddEq(data->oPos,(int)1);
									}
									;break;
									default: {
										HX_STACK_LINE(752)
										Dynamic();
									}
								}
							}
							HX_STACK_LINE(752)
							data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::LINE_BITMAP_STYLE;
							HX_STACK_LINE(752)
							tmp6 = data;
						}
						HX_STACK_LINE(752)
						::openfl::_internal::renderer::DrawCommandReader c = tmp6;		HX_STACK_VAR(c,"c");
					}
					;break;
					case (int)14: {
						HX_STACK_LINE(758)
						::openfl::_internal::renderer::DrawCommandReader tmp6;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(758)
						{
							HX_STACK_LINE(758)
							{
								HX_STACK_LINE(758)
								::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
								HX_STACK_LINE(758)
								switch( (int)(_g2->__Index())){
									case (int)0: {
										HX_STACK_LINE(758)
										hx::AddEq(data->oPos,(int)2);
										HX_STACK_LINE(758)
										hx::AddEq(data->bPos,(int)2);
									}
									;break;
									case (int)1: {
										HX_STACK_LINE(758)
										hx::AddEq(data->iPos,(int)1);
										HX_STACK_LINE(758)
										hx::AddEq(data->fPos,(int)1);
									}
									;break;
									case (int)2: {
										HX_STACK_LINE(758)
										hx::AddEq(data->oPos,(int)4);
										HX_STACK_LINE(758)
										hx::AddEq(data->iiPos,(int)2);
										HX_STACK_LINE(758)
										hx::AddEq(data->ffPos,(int)1);
										HX_STACK_LINE(758)
										hx::AddEq(data->fPos,(int)1);
									}
									;break;
									case (int)3: {
										HX_STACK_LINE(758)
										hx::AddEq(data->fPos,(int)6);
									}
									;break;
									case (int)4: {
										HX_STACK_LINE(758)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)5: {
										HX_STACK_LINE(758)
										hx::AddEq(data->fPos,(int)3);
									}
									;break;
									case (int)6: {
										HX_STACK_LINE(758)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)7: {
										HX_STACK_LINE(758)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)8: {
										HX_STACK_LINE(758)
										hx::AddEq(data->fPos,(int)5);
										HX_STACK_LINE(758)
										hx::AddEq(data->oPos,(int)1);
									}
									;break;
									case (int)10: {
										HX_STACK_LINE(758)
										hx::AddEq(data->oPos,(int)4);
									}
									;break;
									case (int)11: {
										HX_STACK_LINE(758)
										Dynamic();
									}
									;break;
									case (int)12: {
										HX_STACK_LINE(758)
										hx::AddEq(data->oPos,(int)2);
										HX_STACK_LINE(758)
										hx::AddEq(data->bPos,(int)2);
									}
									;break;
									case (int)13: {
										HX_STACK_LINE(758)
										hx::AddEq(data->oPos,(int)4);
										HX_STACK_LINE(758)
										hx::AddEq(data->iiPos,(int)2);
										HX_STACK_LINE(758)
										hx::AddEq(data->ffPos,(int)1);
										HX_STACK_LINE(758)
										hx::AddEq(data->fPos,(int)1);
									}
									;break;
									case (int)14: {
										HX_STACK_LINE(758)
										hx::AddEq(data->oPos,(int)4);
										HX_STACK_LINE(758)
										hx::AddEq(data->iPos,(int)1);
										HX_STACK_LINE(758)
										hx::AddEq(data->fPos,(int)2);
										HX_STACK_LINE(758)
										hx::AddEq(data->bPos,(int)1);
									}
									;break;
									case (int)15: {
										HX_STACK_LINE(758)
										hx::AddEq(data->fPos,(int)2);
									}
									;break;
									case (int)16: {
										HX_STACK_LINE(758)
										hx::AddEq(data->fPos,(int)2);
									}
									;break;
									case (int)17: {
										HX_STACK_LINE(758)
										hx::AddEq(data->oPos,(int)1);
									}
									;break;
									default: {
										HX_STACK_LINE(758)
										Dynamic();
									}
								}
							}
							HX_STACK_LINE(758)
							data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::LINE_STYLE;
							HX_STACK_LINE(758)
							tmp6 = data;
						}
						HX_STACK_LINE(758)
						::openfl::_internal::renderer::DrawCommandReader c = tmp6;		HX_STACK_VAR(c,"c");
						HX_STACK_LINE(759)
						{
							HX_STACK_LINE(759)
							::openfl::_internal::renderer::DrawCommandBuffer tmp7 = c->buffer;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(759)
							int tmp8 = c->oPos;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(759)
							Dynamic tmp9 = tmp7->o->__GetItem(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(759)
							Dynamic tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(759)
							::openfl::_internal::renderer::DrawCommandBuffer tmp11 = c->buffer;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(759)
							int tmp12 = c->bPos;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(759)
							bool tmp13 = tmp11->b->__get(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(759)
							bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(759)
							::openfl::_internal::renderer::DrawCommandBuffer tmp15 = c->buffer;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(759)
							int tmp16 = c->oPos;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(759)
							int tmp17 = (tmp16 + (int)1);		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(759)
							Dynamic tmp18 = tmp15->o->__GetItem(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(759)
							Dynamic tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(759)
							::openfl::_internal::renderer::DrawCommandBuffer tmp20 = c->buffer;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(759)
							int tmp21 = c->oPos;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(759)
							int tmp22 = (tmp21 + (int)2);		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(759)
							Dynamic tmp23 = tmp20->o->__GetItem(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(759)
							Dynamic tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(759)
							::openfl::_internal::renderer::DrawCommandBuffer tmp25 = c->buffer;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(759)
							int tmp26 = c->oPos;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(759)
							int tmp27 = (tmp26 + (int)3);		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(759)
							Dynamic tmp28 = tmp25->o->__GetItem(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(759)
							Dynamic tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(759)
							::openfl::_internal::renderer::DrawCommandBuffer tmp30 = c->buffer;		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(759)
							int tmp31 = c->fPos;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(759)
							int tmp32 = (tmp31 + (int)1);		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(759)
							Float tmp33 = tmp30->f->__get(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(759)
							Float tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(759)
							::openfl::display::GraphicsStroke tmp35 = ::openfl::display::GraphicsStroke_obj::__new(tmp10,tmp14,tmp19,tmp24,tmp29,tmp34,null());		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(759)
							::openfl::display::IGraphicsData x = tmp35;		HX_STACK_VAR(x,"x");
							HX_STACK_LINE(759)
							::openfl::display::IGraphicsData tmp36 = x;		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(759)
							graphicsData->push(tmp36);
						}
					}
					;break;
					case (int)11: {
						HX_STACK_LINE(763)
						{
							HX_STACK_LINE(763)
							{
								HX_STACK_LINE(763)
								::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
								HX_STACK_LINE(763)
								switch( (int)(_g2->__Index())){
									case (int)0: {
										HX_STACK_LINE(763)
										hx::AddEq(data->oPos,(int)2);
										HX_STACK_LINE(763)
										hx::AddEq(data->bPos,(int)2);
									}
									;break;
									case (int)1: {
										HX_STACK_LINE(763)
										hx::AddEq(data->iPos,(int)1);
										HX_STACK_LINE(763)
										hx::AddEq(data->fPos,(int)1);
									}
									;break;
									case (int)2: {
										HX_STACK_LINE(763)
										hx::AddEq(data->oPos,(int)4);
										HX_STACK_LINE(763)
										hx::AddEq(data->iiPos,(int)2);
										HX_STACK_LINE(763)
										hx::AddEq(data->ffPos,(int)1);
										HX_STACK_LINE(763)
										hx::AddEq(data->fPos,(int)1);
									}
									;break;
									case (int)3: {
										HX_STACK_LINE(763)
										hx::AddEq(data->fPos,(int)6);
									}
									;break;
									case (int)4: {
										HX_STACK_LINE(763)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)5: {
										HX_STACK_LINE(763)
										hx::AddEq(data->fPos,(int)3);
									}
									;break;
									case (int)6: {
										HX_STACK_LINE(763)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)7: {
										HX_STACK_LINE(763)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)8: {
										HX_STACK_LINE(763)
										hx::AddEq(data->fPos,(int)5);
										HX_STACK_LINE(763)
										hx::AddEq(data->oPos,(int)1);
									}
									;break;
									case (int)10: {
										HX_STACK_LINE(763)
										hx::AddEq(data->oPos,(int)4);
									}
									;break;
									case (int)11: {
										HX_STACK_LINE(763)
										Dynamic();
									}
									;break;
									case (int)12: {
										HX_STACK_LINE(763)
										hx::AddEq(data->oPos,(int)2);
										HX_STACK_LINE(763)
										hx::AddEq(data->bPos,(int)2);
									}
									;break;
									case (int)13: {
										HX_STACK_LINE(763)
										hx::AddEq(data->oPos,(int)4);
										HX_STACK_LINE(763)
										hx::AddEq(data->iiPos,(int)2);
										HX_STACK_LINE(763)
										hx::AddEq(data->ffPos,(int)1);
										HX_STACK_LINE(763)
										hx::AddEq(data->fPos,(int)1);
									}
									;break;
									case (int)14: {
										HX_STACK_LINE(763)
										hx::AddEq(data->oPos,(int)4);
										HX_STACK_LINE(763)
										hx::AddEq(data->iPos,(int)1);
										HX_STACK_LINE(763)
										hx::AddEq(data->fPos,(int)2);
										HX_STACK_LINE(763)
										hx::AddEq(data->bPos,(int)1);
									}
									;break;
									case (int)15: {
										HX_STACK_LINE(763)
										hx::AddEq(data->fPos,(int)2);
									}
									;break;
									case (int)16: {
										HX_STACK_LINE(763)
										hx::AddEq(data->fPos,(int)2);
									}
									;break;
									case (int)17: {
										HX_STACK_LINE(763)
										hx::AddEq(data->oPos,(int)1);
									}
									;break;
									default: {
										HX_STACK_LINE(763)
										Dynamic();
									}
								}
							}
							HX_STACK_LINE(763)
							data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::END_FILL;
							HX_STACK_LINE(763)
							data;
						}
						HX_STACK_LINE(764)
						{
							HX_STACK_LINE(764)
							::openfl::display::GraphicsEndFill tmp6 = ::openfl::display::GraphicsEndFill_obj::__new();		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(764)
							::openfl::display::IGraphicsData x = tmp6;		HX_STACK_VAR(x,"x");
							HX_STACK_LINE(764)
							::openfl::display::IGraphicsData tmp7 = x;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(764)
							graphicsData->push(tmp7);
						}
					}
					;break;
					case (int)0: {
						HX_STACK_LINE(768)
						::openfl::_internal::renderer::DrawCommandReader tmp6;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(768)
						{
							HX_STACK_LINE(768)
							{
								HX_STACK_LINE(768)
								::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
								HX_STACK_LINE(768)
								switch( (int)(_g2->__Index())){
									case (int)0: {
										HX_STACK_LINE(768)
										hx::AddEq(data->oPos,(int)2);
										HX_STACK_LINE(768)
										hx::AddEq(data->bPos,(int)2);
									}
									;break;
									case (int)1: {
										HX_STACK_LINE(768)
										hx::AddEq(data->iPos,(int)1);
										HX_STACK_LINE(768)
										hx::AddEq(data->fPos,(int)1);
									}
									;break;
									case (int)2: {
										HX_STACK_LINE(768)
										hx::AddEq(data->oPos,(int)4);
										HX_STACK_LINE(768)
										hx::AddEq(data->iiPos,(int)2);
										HX_STACK_LINE(768)
										hx::AddEq(data->ffPos,(int)1);
										HX_STACK_LINE(768)
										hx::AddEq(data->fPos,(int)1);
									}
									;break;
									case (int)3: {
										HX_STACK_LINE(768)
										hx::AddEq(data->fPos,(int)6);
									}
									;break;
									case (int)4: {
										HX_STACK_LINE(768)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)5: {
										HX_STACK_LINE(768)
										hx::AddEq(data->fPos,(int)3);
									}
									;break;
									case (int)6: {
										HX_STACK_LINE(768)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)7: {
										HX_STACK_LINE(768)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)8: {
										HX_STACK_LINE(768)
										hx::AddEq(data->fPos,(int)5);
										HX_STACK_LINE(768)
										hx::AddEq(data->oPos,(int)1);
									}
									;break;
									case (int)10: {
										HX_STACK_LINE(768)
										hx::AddEq(data->oPos,(int)4);
									}
									;break;
									case (int)11: {
										HX_STACK_LINE(768)
										Dynamic();
									}
									;break;
									case (int)12: {
										HX_STACK_LINE(768)
										hx::AddEq(data->oPos,(int)2);
										HX_STACK_LINE(768)
										hx::AddEq(data->bPos,(int)2);
									}
									;break;
									case (int)13: {
										HX_STACK_LINE(768)
										hx::AddEq(data->oPos,(int)4);
										HX_STACK_LINE(768)
										hx::AddEq(data->iiPos,(int)2);
										HX_STACK_LINE(768)
										hx::AddEq(data->ffPos,(int)1);
										HX_STACK_LINE(768)
										hx::AddEq(data->fPos,(int)1);
									}
									;break;
									case (int)14: {
										HX_STACK_LINE(768)
										hx::AddEq(data->oPos,(int)4);
										HX_STACK_LINE(768)
										hx::AddEq(data->iPos,(int)1);
										HX_STACK_LINE(768)
										hx::AddEq(data->fPos,(int)2);
										HX_STACK_LINE(768)
										hx::AddEq(data->bPos,(int)1);
									}
									;break;
									case (int)15: {
										HX_STACK_LINE(768)
										hx::AddEq(data->fPos,(int)2);
									}
									;break;
									case (int)16: {
										HX_STACK_LINE(768)
										hx::AddEq(data->fPos,(int)2);
									}
									;break;
									case (int)17: {
										HX_STACK_LINE(768)
										hx::AddEq(data->oPos,(int)1);
									}
									;break;
									default: {
										HX_STACK_LINE(768)
										Dynamic();
									}
								}
							}
							HX_STACK_LINE(768)
							data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::BEGIN_BITMAP_FILL;
							HX_STACK_LINE(768)
							tmp6 = data;
						}
						HX_STACK_LINE(768)
						::openfl::_internal::renderer::DrawCommandReader c = tmp6;		HX_STACK_VAR(c,"c");
						HX_STACK_LINE(769)
						{
							HX_STACK_LINE(769)
							::openfl::_internal::renderer::DrawCommandBuffer tmp7 = c->buffer;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(769)
							int tmp8 = c->oPos;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(769)
							Dynamic tmp9 = tmp7->o->__GetItem(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(769)
							::openfl::display::BitmapData tmp10 = ((::openfl::display::BitmapData)(tmp9));		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(769)
							::openfl::_internal::renderer::DrawCommandBuffer tmp11 = c->buffer;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(769)
							int tmp12 = c->oPos;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(769)
							int tmp13 = (tmp12 + (int)1);		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(769)
							Dynamic tmp14 = tmp11->o->__GetItem(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(769)
							::openfl::geom::Matrix tmp15 = ((::openfl::geom::Matrix)(tmp14));		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(769)
							::openfl::_internal::renderer::DrawCommandBuffer tmp16 = c->buffer;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(769)
							int tmp17 = c->bPos;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(769)
							bool tmp18 = tmp16->b->__get(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(769)
							::openfl::_internal::renderer::DrawCommandBuffer tmp19 = c->buffer;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(769)
							int tmp20 = c->bPos;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(769)
							int tmp21 = (tmp20 + (int)1);		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(769)
							bool tmp22 = tmp19->b->__get(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(769)
							::openfl::display::GraphicsBitmapFill tmp23 = ::openfl::display::GraphicsBitmapFill_obj::__new(tmp10,tmp15,tmp18,tmp22);		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(769)
							::openfl::display::IGraphicsData x = tmp23;		HX_STACK_VAR(x,"x");
							HX_STACK_LINE(769)
							::openfl::display::IGraphicsData tmp24 = x;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(769)
							graphicsData->push(tmp24);
						}
					}
					;break;
					case (int)1: {
						HX_STACK_LINE(773)
						::openfl::_internal::renderer::DrawCommandReader tmp6;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(773)
						{
							HX_STACK_LINE(773)
							{
								HX_STACK_LINE(773)
								::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
								HX_STACK_LINE(773)
								switch( (int)(_g2->__Index())){
									case (int)0: {
										HX_STACK_LINE(773)
										hx::AddEq(data->oPos,(int)2);
										HX_STACK_LINE(773)
										hx::AddEq(data->bPos,(int)2);
									}
									;break;
									case (int)1: {
										HX_STACK_LINE(773)
										hx::AddEq(data->iPos,(int)1);
										HX_STACK_LINE(773)
										hx::AddEq(data->fPos,(int)1);
									}
									;break;
									case (int)2: {
										HX_STACK_LINE(773)
										hx::AddEq(data->oPos,(int)4);
										HX_STACK_LINE(773)
										hx::AddEq(data->iiPos,(int)2);
										HX_STACK_LINE(773)
										hx::AddEq(data->ffPos,(int)1);
										HX_STACK_LINE(773)
										hx::AddEq(data->fPos,(int)1);
									}
									;break;
									case (int)3: {
										HX_STACK_LINE(773)
										hx::AddEq(data->fPos,(int)6);
									}
									;break;
									case (int)4: {
										HX_STACK_LINE(773)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)5: {
										HX_STACK_LINE(773)
										hx::AddEq(data->fPos,(int)3);
									}
									;break;
									case (int)6: {
										HX_STACK_LINE(773)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)7: {
										HX_STACK_LINE(773)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)8: {
										HX_STACK_LINE(773)
										hx::AddEq(data->fPos,(int)5);
										HX_STACK_LINE(773)
										hx::AddEq(data->oPos,(int)1);
									}
									;break;
									case (int)10: {
										HX_STACK_LINE(773)
										hx::AddEq(data->oPos,(int)4);
									}
									;break;
									case (int)11: {
										HX_STACK_LINE(773)
										Dynamic();
									}
									;break;
									case (int)12: {
										HX_STACK_LINE(773)
										hx::AddEq(data->oPos,(int)2);
										HX_STACK_LINE(773)
										hx::AddEq(data->bPos,(int)2);
									}
									;break;
									case (int)13: {
										HX_STACK_LINE(773)
										hx::AddEq(data->oPos,(int)4);
										HX_STACK_LINE(773)
										hx::AddEq(data->iiPos,(int)2);
										HX_STACK_LINE(773)
										hx::AddEq(data->ffPos,(int)1);
										HX_STACK_LINE(773)
										hx::AddEq(data->fPos,(int)1);
									}
									;break;
									case (int)14: {
										HX_STACK_LINE(773)
										hx::AddEq(data->oPos,(int)4);
										HX_STACK_LINE(773)
										hx::AddEq(data->iPos,(int)1);
										HX_STACK_LINE(773)
										hx::AddEq(data->fPos,(int)2);
										HX_STACK_LINE(773)
										hx::AddEq(data->bPos,(int)1);
									}
									;break;
									case (int)15: {
										HX_STACK_LINE(773)
										hx::AddEq(data->fPos,(int)2);
									}
									;break;
									case (int)16: {
										HX_STACK_LINE(773)
										hx::AddEq(data->fPos,(int)2);
									}
									;break;
									case (int)17: {
										HX_STACK_LINE(773)
										hx::AddEq(data->oPos,(int)1);
									}
									;break;
									default: {
										HX_STACK_LINE(773)
										Dynamic();
									}
								}
							}
							HX_STACK_LINE(773)
							data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::BEGIN_FILL;
							HX_STACK_LINE(773)
							tmp6 = data;
						}
						HX_STACK_LINE(773)
						::openfl::_internal::renderer::DrawCommandReader c = tmp6;		HX_STACK_VAR(c,"c");
						HX_STACK_LINE(774)
						{
							HX_STACK_LINE(774)
							::openfl::_internal::renderer::DrawCommandBuffer tmp7 = c->buffer;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(774)
							int tmp8 = c->iPos;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(774)
							int tmp9 = tmp7->i->__get(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(774)
							::openfl::display::GraphicsSolidFill tmp10 = ::openfl::display::GraphicsSolidFill_obj::__new(tmp9,(int)1);		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(774)
							::openfl::display::IGraphicsData x = tmp10;		HX_STACK_VAR(x,"x");
							HX_STACK_LINE(774)
							::openfl::display::IGraphicsData tmp11 = x;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(774)
							graphicsData->push(tmp11);
						}
					}
					;break;
					case (int)2: {
						HX_STACK_LINE(778)
						::openfl::_internal::renderer::DrawCommandReader tmp6;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(778)
						{
							HX_STACK_LINE(778)
							{
								HX_STACK_LINE(778)
								::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
								HX_STACK_LINE(778)
								switch( (int)(_g2->__Index())){
									case (int)0: {
										HX_STACK_LINE(778)
										hx::AddEq(data->oPos,(int)2);
										HX_STACK_LINE(778)
										hx::AddEq(data->bPos,(int)2);
									}
									;break;
									case (int)1: {
										HX_STACK_LINE(778)
										hx::AddEq(data->iPos,(int)1);
										HX_STACK_LINE(778)
										hx::AddEq(data->fPos,(int)1);
									}
									;break;
									case (int)2: {
										HX_STACK_LINE(778)
										hx::AddEq(data->oPos,(int)4);
										HX_STACK_LINE(778)
										hx::AddEq(data->iiPos,(int)2);
										HX_STACK_LINE(778)
										hx::AddEq(data->ffPos,(int)1);
										HX_STACK_LINE(778)
										hx::AddEq(data->fPos,(int)1);
									}
									;break;
									case (int)3: {
										HX_STACK_LINE(778)
										hx::AddEq(data->fPos,(int)6);
									}
									;break;
									case (int)4: {
										HX_STACK_LINE(778)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)5: {
										HX_STACK_LINE(778)
										hx::AddEq(data->fPos,(int)3);
									}
									;break;
									case (int)6: {
										HX_STACK_LINE(778)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)7: {
										HX_STACK_LINE(778)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)8: {
										HX_STACK_LINE(778)
										hx::AddEq(data->fPos,(int)5);
										HX_STACK_LINE(778)
										hx::AddEq(data->oPos,(int)1);
									}
									;break;
									case (int)10: {
										HX_STACK_LINE(778)
										hx::AddEq(data->oPos,(int)4);
									}
									;break;
									case (int)11: {
										HX_STACK_LINE(778)
										Dynamic();
									}
									;break;
									case (int)12: {
										HX_STACK_LINE(778)
										hx::AddEq(data->oPos,(int)2);
										HX_STACK_LINE(778)
										hx::AddEq(data->bPos,(int)2);
									}
									;break;
									case (int)13: {
										HX_STACK_LINE(778)
										hx::AddEq(data->oPos,(int)4);
										HX_STACK_LINE(778)
										hx::AddEq(data->iiPos,(int)2);
										HX_STACK_LINE(778)
										hx::AddEq(data->ffPos,(int)1);
										HX_STACK_LINE(778)
										hx::AddEq(data->fPos,(int)1);
									}
									;break;
									case (int)14: {
										HX_STACK_LINE(778)
										hx::AddEq(data->oPos,(int)4);
										HX_STACK_LINE(778)
										hx::AddEq(data->iPos,(int)1);
										HX_STACK_LINE(778)
										hx::AddEq(data->fPos,(int)2);
										HX_STACK_LINE(778)
										hx::AddEq(data->bPos,(int)1);
									}
									;break;
									case (int)15: {
										HX_STACK_LINE(778)
										hx::AddEq(data->fPos,(int)2);
									}
									;break;
									case (int)16: {
										HX_STACK_LINE(778)
										hx::AddEq(data->fPos,(int)2);
									}
									;break;
									case (int)17: {
										HX_STACK_LINE(778)
										hx::AddEq(data->oPos,(int)1);
									}
									;break;
									default: {
										HX_STACK_LINE(778)
										Dynamic();
									}
								}
							}
							HX_STACK_LINE(778)
							data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::BEGIN_GRADIENT_FILL;
							HX_STACK_LINE(778)
							tmp6 = data;
						}
						HX_STACK_LINE(778)
						::openfl::_internal::renderer::DrawCommandReader c = tmp6;		HX_STACK_VAR(c,"c");
						HX_STACK_LINE(779)
						{
							HX_STACK_LINE(779)
							::openfl::_internal::renderer::DrawCommandBuffer tmp7 = c->buffer;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(779)
							int tmp8 = c->oPos;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(779)
							Dynamic tmp9 = tmp7->o->__GetItem(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(779)
							Dynamic tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(779)
							::openfl::_internal::renderer::DrawCommandBuffer tmp11 = c->buffer;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(779)
							int tmp12 = c->iiPos;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(779)
							::openfl::_internal::renderer::DrawCommandBuffer tmp13 = c->buffer;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(779)
							int tmp14 = c->ffPos;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(779)
							::openfl::_internal::renderer::DrawCommandBuffer tmp15 = c->buffer;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(779)
							int tmp16 = c->iiPos;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(779)
							int tmp17 = (tmp16 + (int)1);		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(779)
							::openfl::_internal::renderer::DrawCommandBuffer tmp18 = c->buffer;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(779)
							int tmp19 = c->oPos;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(779)
							int tmp20 = (tmp19 + (int)1);		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(779)
							Dynamic tmp21 = tmp18->o->__GetItem(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(779)
							::openfl::geom::Matrix tmp22 = ((::openfl::geom::Matrix)(tmp21));		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(779)
							::openfl::_internal::renderer::DrawCommandBuffer tmp23 = c->buffer;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(779)
							int tmp24 = c->oPos;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(779)
							int tmp25 = (tmp24 + (int)2);		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(779)
							Dynamic tmp26 = tmp23->o->__GetItem(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(779)
							Dynamic tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(779)
							::openfl::_internal::renderer::DrawCommandBuffer tmp28 = c->buffer;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(779)
							int tmp29 = c->oPos;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(779)
							int tmp30 = (tmp29 + (int)3);		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(779)
							Dynamic tmp31 = tmp28->o->__GetItem(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(779)
							Dynamic tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(779)
							::openfl::_internal::renderer::DrawCommandBuffer tmp33 = c->buffer;		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(779)
							int tmp34 = c->fPos;		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(779)
							Float tmp35 = tmp33->f->__get(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(779)
							Float tmp36 = tmp35;		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(779)
							::openfl::display::GraphicsGradientFill tmp37 = ::openfl::display::GraphicsGradientFill_obj::__new(tmp10,tmp11->ii->__get(tmp12).StaticCast< Array< int > >(),tmp13->ff->__get(tmp14).StaticCast< Array< Float > >(),tmp15->ii->__get(tmp17).StaticCast< Array< int > >(),tmp22,tmp27,tmp32,tmp36);		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(779)
							::openfl::display::IGraphicsData x = tmp37;		HX_STACK_VAR(x,"x");
							HX_STACK_LINE(779)
							::openfl::display::IGraphicsData tmp38 = x;		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(779)
							graphicsData->push(tmp38);
						}
					}
					;break;
					case (int)5: {
						HX_STACK_LINE(783)
						::openfl::_internal::renderer::DrawCommandReader tmp6;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(783)
						{
							HX_STACK_LINE(783)
							{
								HX_STACK_LINE(783)
								::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
								HX_STACK_LINE(783)
								switch( (int)(_g2->__Index())){
									case (int)0: {
										HX_STACK_LINE(783)
										hx::AddEq(data->oPos,(int)2);
										HX_STACK_LINE(783)
										hx::AddEq(data->bPos,(int)2);
									}
									;break;
									case (int)1: {
										HX_STACK_LINE(783)
										hx::AddEq(data->iPos,(int)1);
										HX_STACK_LINE(783)
										hx::AddEq(data->fPos,(int)1);
									}
									;break;
									case (int)2: {
										HX_STACK_LINE(783)
										hx::AddEq(data->oPos,(int)4);
										HX_STACK_LINE(783)
										hx::AddEq(data->iiPos,(int)2);
										HX_STACK_LINE(783)
										hx::AddEq(data->ffPos,(int)1);
										HX_STACK_LINE(783)
										hx::AddEq(data->fPos,(int)1);
									}
									;break;
									case (int)3: {
										HX_STACK_LINE(783)
										hx::AddEq(data->fPos,(int)6);
									}
									;break;
									case (int)4: {
										HX_STACK_LINE(783)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)5: {
										HX_STACK_LINE(783)
										hx::AddEq(data->fPos,(int)3);
									}
									;break;
									case (int)6: {
										HX_STACK_LINE(783)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)7: {
										HX_STACK_LINE(783)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)8: {
										HX_STACK_LINE(783)
										hx::AddEq(data->fPos,(int)5);
										HX_STACK_LINE(783)
										hx::AddEq(data->oPos,(int)1);
									}
									;break;
									case (int)10: {
										HX_STACK_LINE(783)
										hx::AddEq(data->oPos,(int)4);
									}
									;break;
									case (int)11: {
										HX_STACK_LINE(783)
										Dynamic();
									}
									;break;
									case (int)12: {
										HX_STACK_LINE(783)
										hx::AddEq(data->oPos,(int)2);
										HX_STACK_LINE(783)
										hx::AddEq(data->bPos,(int)2);
									}
									;break;
									case (int)13: {
										HX_STACK_LINE(783)
										hx::AddEq(data->oPos,(int)4);
										HX_STACK_LINE(783)
										hx::AddEq(data->iiPos,(int)2);
										HX_STACK_LINE(783)
										hx::AddEq(data->ffPos,(int)1);
										HX_STACK_LINE(783)
										hx::AddEq(data->fPos,(int)1);
									}
									;break;
									case (int)14: {
										HX_STACK_LINE(783)
										hx::AddEq(data->oPos,(int)4);
										HX_STACK_LINE(783)
										hx::AddEq(data->iPos,(int)1);
										HX_STACK_LINE(783)
										hx::AddEq(data->fPos,(int)2);
										HX_STACK_LINE(783)
										hx::AddEq(data->bPos,(int)1);
									}
									;break;
									case (int)15: {
										HX_STACK_LINE(783)
										hx::AddEq(data->fPos,(int)2);
									}
									;break;
									case (int)16: {
										HX_STACK_LINE(783)
										hx::AddEq(data->fPos,(int)2);
									}
									;break;
									case (int)17: {
										HX_STACK_LINE(783)
										hx::AddEq(data->oPos,(int)1);
									}
									;break;
									default: {
										HX_STACK_LINE(783)
										Dynamic();
									}
								}
							}
							HX_STACK_LINE(783)
							data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::DRAW_CIRCLE;
							HX_STACK_LINE(783)
							tmp6 = data;
						}
						HX_STACK_LINE(783)
						::openfl::_internal::renderer::DrawCommandReader c = tmp6;		HX_STACK_VAR(c,"c");
					}
					;break;
					case (int)6: {
						HX_STACK_LINE(789)
						::openfl::_internal::renderer::DrawCommandReader tmp6;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(789)
						{
							HX_STACK_LINE(789)
							{
								HX_STACK_LINE(789)
								::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
								HX_STACK_LINE(789)
								switch( (int)(_g2->__Index())){
									case (int)0: {
										HX_STACK_LINE(789)
										hx::AddEq(data->oPos,(int)2);
										HX_STACK_LINE(789)
										hx::AddEq(data->bPos,(int)2);
									}
									;break;
									case (int)1: {
										HX_STACK_LINE(789)
										hx::AddEq(data->iPos,(int)1);
										HX_STACK_LINE(789)
										hx::AddEq(data->fPos,(int)1);
									}
									;break;
									case (int)2: {
										HX_STACK_LINE(789)
										hx::AddEq(data->oPos,(int)4);
										HX_STACK_LINE(789)
										hx::AddEq(data->iiPos,(int)2);
										HX_STACK_LINE(789)
										hx::AddEq(data->ffPos,(int)1);
										HX_STACK_LINE(789)
										hx::AddEq(data->fPos,(int)1);
									}
									;break;
									case (int)3: {
										HX_STACK_LINE(789)
										hx::AddEq(data->fPos,(int)6);
									}
									;break;
									case (int)4: {
										HX_STACK_LINE(789)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)5: {
										HX_STACK_LINE(789)
										hx::AddEq(data->fPos,(int)3);
									}
									;break;
									case (int)6: {
										HX_STACK_LINE(789)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)7: {
										HX_STACK_LINE(789)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)8: {
										HX_STACK_LINE(789)
										hx::AddEq(data->fPos,(int)5);
										HX_STACK_LINE(789)
										hx::AddEq(data->oPos,(int)1);
									}
									;break;
									case (int)10: {
										HX_STACK_LINE(789)
										hx::AddEq(data->oPos,(int)4);
									}
									;break;
									case (int)11: {
										HX_STACK_LINE(789)
										Dynamic();
									}
									;break;
									case (int)12: {
										HX_STACK_LINE(789)
										hx::AddEq(data->oPos,(int)2);
										HX_STACK_LINE(789)
										hx::AddEq(data->bPos,(int)2);
									}
									;break;
									case (int)13: {
										HX_STACK_LINE(789)
										hx::AddEq(data->oPos,(int)4);
										HX_STACK_LINE(789)
										hx::AddEq(data->iiPos,(int)2);
										HX_STACK_LINE(789)
										hx::AddEq(data->ffPos,(int)1);
										HX_STACK_LINE(789)
										hx::AddEq(data->fPos,(int)1);
									}
									;break;
									case (int)14: {
										HX_STACK_LINE(789)
										hx::AddEq(data->oPos,(int)4);
										HX_STACK_LINE(789)
										hx::AddEq(data->iPos,(int)1);
										HX_STACK_LINE(789)
										hx::AddEq(data->fPos,(int)2);
										HX_STACK_LINE(789)
										hx::AddEq(data->bPos,(int)1);
									}
									;break;
									case (int)15: {
										HX_STACK_LINE(789)
										hx::AddEq(data->fPos,(int)2);
									}
									;break;
									case (int)16: {
										HX_STACK_LINE(789)
										hx::AddEq(data->fPos,(int)2);
									}
									;break;
									case (int)17: {
										HX_STACK_LINE(789)
										hx::AddEq(data->oPos,(int)1);
									}
									;break;
									default: {
										HX_STACK_LINE(789)
										Dynamic();
									}
								}
							}
							HX_STACK_LINE(789)
							data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::DRAW_ELLIPSE;
							HX_STACK_LINE(789)
							tmp6 = data;
						}
						HX_STACK_LINE(789)
						::openfl::_internal::renderer::DrawCommandReader c = tmp6;		HX_STACK_VAR(c,"c");
					}
					;break;
					case (int)7: {
						HX_STACK_LINE(795)
						::openfl::_internal::renderer::DrawCommandReader tmp6;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(795)
						{
							HX_STACK_LINE(795)
							{
								HX_STACK_LINE(795)
								::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
								HX_STACK_LINE(795)
								switch( (int)(_g2->__Index())){
									case (int)0: {
										HX_STACK_LINE(795)
										hx::AddEq(data->oPos,(int)2);
										HX_STACK_LINE(795)
										hx::AddEq(data->bPos,(int)2);
									}
									;break;
									case (int)1: {
										HX_STACK_LINE(795)
										hx::AddEq(data->iPos,(int)1);
										HX_STACK_LINE(795)
										hx::AddEq(data->fPos,(int)1);
									}
									;break;
									case (int)2: {
										HX_STACK_LINE(795)
										hx::AddEq(data->oPos,(int)4);
										HX_STACK_LINE(795)
										hx::AddEq(data->iiPos,(int)2);
										HX_STACK_LINE(795)
										hx::AddEq(data->ffPos,(int)1);
										HX_STACK_LINE(795)
										hx::AddEq(data->fPos,(int)1);
									}
									;break;
									case (int)3: {
										HX_STACK_LINE(795)
										hx::AddEq(data->fPos,(int)6);
									}
									;break;
									case (int)4: {
										HX_STACK_LINE(795)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)5: {
										HX_STACK_LINE(795)
										hx::AddEq(data->fPos,(int)3);
									}
									;break;
									case (int)6: {
										HX_STACK_LINE(795)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)7: {
										HX_STACK_LINE(795)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)8: {
										HX_STACK_LINE(795)
										hx::AddEq(data->fPos,(int)5);
										HX_STACK_LINE(795)
										hx::AddEq(data->oPos,(int)1);
									}
									;break;
									case (int)10: {
										HX_STACK_LINE(795)
										hx::AddEq(data->oPos,(int)4);
									}
									;break;
									case (int)11: {
										HX_STACK_LINE(795)
										Dynamic();
									}
									;break;
									case (int)12: {
										HX_STACK_LINE(795)
										hx::AddEq(data->oPos,(int)2);
										HX_STACK_LINE(795)
										hx::AddEq(data->bPos,(int)2);
									}
									;break;
									case (int)13: {
										HX_STACK_LINE(795)
										hx::AddEq(data->oPos,(int)4);
										HX_STACK_LINE(795)
										hx::AddEq(data->iiPos,(int)2);
										HX_STACK_LINE(795)
										hx::AddEq(data->ffPos,(int)1);
										HX_STACK_LINE(795)
										hx::AddEq(data->fPos,(int)1);
									}
									;break;
									case (int)14: {
										HX_STACK_LINE(795)
										hx::AddEq(data->oPos,(int)4);
										HX_STACK_LINE(795)
										hx::AddEq(data->iPos,(int)1);
										HX_STACK_LINE(795)
										hx::AddEq(data->fPos,(int)2);
										HX_STACK_LINE(795)
										hx::AddEq(data->bPos,(int)1);
									}
									;break;
									case (int)15: {
										HX_STACK_LINE(795)
										hx::AddEq(data->fPos,(int)2);
									}
									;break;
									case (int)16: {
										HX_STACK_LINE(795)
										hx::AddEq(data->fPos,(int)2);
									}
									;break;
									case (int)17: {
										HX_STACK_LINE(795)
										hx::AddEq(data->oPos,(int)1);
									}
									;break;
									default: {
										HX_STACK_LINE(795)
										Dynamic();
									}
								}
							}
							HX_STACK_LINE(795)
							data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::DRAW_ELLIPSE;
							HX_STACK_LINE(795)
							tmp6 = data;
						}
						HX_STACK_LINE(795)
						::openfl::_internal::renderer::DrawCommandReader c = tmp6;		HX_STACK_VAR(c,"c");
					}
					;break;
					case (int)8: {
						HX_STACK_LINE(801)
						::openfl::_internal::renderer::DrawCommandReader tmp6;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(801)
						{
							HX_STACK_LINE(801)
							{
								HX_STACK_LINE(801)
								::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
								HX_STACK_LINE(801)
								switch( (int)(_g2->__Index())){
									case (int)0: {
										HX_STACK_LINE(801)
										hx::AddEq(data->oPos,(int)2);
										HX_STACK_LINE(801)
										hx::AddEq(data->bPos,(int)2);
									}
									;break;
									case (int)1: {
										HX_STACK_LINE(801)
										hx::AddEq(data->iPos,(int)1);
										HX_STACK_LINE(801)
										hx::AddEq(data->fPos,(int)1);
									}
									;break;
									case (int)2: {
										HX_STACK_LINE(801)
										hx::AddEq(data->oPos,(int)4);
										HX_STACK_LINE(801)
										hx::AddEq(data->iiPos,(int)2);
										HX_STACK_LINE(801)
										hx::AddEq(data->ffPos,(int)1);
										HX_STACK_LINE(801)
										hx::AddEq(data->fPos,(int)1);
									}
									;break;
									case (int)3: {
										HX_STACK_LINE(801)
										hx::AddEq(data->fPos,(int)6);
									}
									;break;
									case (int)4: {
										HX_STACK_LINE(801)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)5: {
										HX_STACK_LINE(801)
										hx::AddEq(data->fPos,(int)3);
									}
									;break;
									case (int)6: {
										HX_STACK_LINE(801)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)7: {
										HX_STACK_LINE(801)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)8: {
										HX_STACK_LINE(801)
										hx::AddEq(data->fPos,(int)5);
										HX_STACK_LINE(801)
										hx::AddEq(data->oPos,(int)1);
									}
									;break;
									case (int)10: {
										HX_STACK_LINE(801)
										hx::AddEq(data->oPos,(int)4);
									}
									;break;
									case (int)11: {
										HX_STACK_LINE(801)
										Dynamic();
									}
									;break;
									case (int)12: {
										HX_STACK_LINE(801)
										hx::AddEq(data->oPos,(int)2);
										HX_STACK_LINE(801)
										hx::AddEq(data->bPos,(int)2);
									}
									;break;
									case (int)13: {
										HX_STACK_LINE(801)
										hx::AddEq(data->oPos,(int)4);
										HX_STACK_LINE(801)
										hx::AddEq(data->iiPos,(int)2);
										HX_STACK_LINE(801)
										hx::AddEq(data->ffPos,(int)1);
										HX_STACK_LINE(801)
										hx::AddEq(data->fPos,(int)1);
									}
									;break;
									case (int)14: {
										HX_STACK_LINE(801)
										hx::AddEq(data->oPos,(int)4);
										HX_STACK_LINE(801)
										hx::AddEq(data->iPos,(int)1);
										HX_STACK_LINE(801)
										hx::AddEq(data->fPos,(int)2);
										HX_STACK_LINE(801)
										hx::AddEq(data->bPos,(int)1);
									}
									;break;
									case (int)15: {
										HX_STACK_LINE(801)
										hx::AddEq(data->fPos,(int)2);
									}
									;break;
									case (int)16: {
										HX_STACK_LINE(801)
										hx::AddEq(data->fPos,(int)2);
									}
									;break;
									case (int)17: {
										HX_STACK_LINE(801)
										hx::AddEq(data->oPos,(int)1);
									}
									;break;
									default: {
										HX_STACK_LINE(801)
										Dynamic();
									}
								}
							}
							HX_STACK_LINE(801)
							data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::DRAW_ELLIPSE;
							HX_STACK_LINE(801)
							tmp6 = data;
						}
						HX_STACK_LINE(801)
						::openfl::_internal::renderer::DrawCommandReader c = tmp6;		HX_STACK_VAR(c,"c");
					}
					;break;
					default: {
						HX_STACK_LINE(807)
						{
							HX_STACK_LINE(807)
							::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(807)
							switch( (int)(_g2->__Index())){
								case (int)0: {
									HX_STACK_LINE(807)
									hx::AddEq(data->oPos,(int)2);
									HX_STACK_LINE(807)
									hx::AddEq(data->bPos,(int)2);
								}
								;break;
								case (int)1: {
									HX_STACK_LINE(807)
									hx::AddEq(data->iPos,(int)1);
									HX_STACK_LINE(807)
									hx::AddEq(data->fPos,(int)1);
								}
								;break;
								case (int)2: {
									HX_STACK_LINE(807)
									hx::AddEq(data->oPos,(int)4);
									HX_STACK_LINE(807)
									hx::AddEq(data->iiPos,(int)2);
									HX_STACK_LINE(807)
									hx::AddEq(data->ffPos,(int)1);
									HX_STACK_LINE(807)
									hx::AddEq(data->fPos,(int)1);
								}
								;break;
								case (int)3: {
									HX_STACK_LINE(807)
									hx::AddEq(data->fPos,(int)6);
								}
								;break;
								case (int)4: {
									HX_STACK_LINE(807)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)5: {
									HX_STACK_LINE(807)
									hx::AddEq(data->fPos,(int)3);
								}
								;break;
								case (int)6: {
									HX_STACK_LINE(807)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)7: {
									HX_STACK_LINE(807)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)8: {
									HX_STACK_LINE(807)
									hx::AddEq(data->fPos,(int)5);
									HX_STACK_LINE(807)
									hx::AddEq(data->oPos,(int)1);
								}
								;break;
								case (int)10: {
									HX_STACK_LINE(807)
									hx::AddEq(data->oPos,(int)4);
								}
								;break;
								case (int)11: {
									HX_STACK_LINE(807)
									Dynamic();
								}
								;break;
								case (int)12: {
									HX_STACK_LINE(807)
									hx::AddEq(data->oPos,(int)2);
									HX_STACK_LINE(807)
									hx::AddEq(data->bPos,(int)2);
								}
								;break;
								case (int)13: {
									HX_STACK_LINE(807)
									hx::AddEq(data->oPos,(int)4);
									HX_STACK_LINE(807)
									hx::AddEq(data->iiPos,(int)2);
									HX_STACK_LINE(807)
									hx::AddEq(data->ffPos,(int)1);
									HX_STACK_LINE(807)
									hx::AddEq(data->fPos,(int)1);
								}
								;break;
								case (int)14: {
									HX_STACK_LINE(807)
									hx::AddEq(data->oPos,(int)4);
									HX_STACK_LINE(807)
									hx::AddEq(data->iPos,(int)1);
									HX_STACK_LINE(807)
									hx::AddEq(data->fPos,(int)2);
									HX_STACK_LINE(807)
									hx::AddEq(data->bPos,(int)1);
								}
								;break;
								case (int)15: {
									HX_STACK_LINE(807)
									hx::AddEq(data->fPos,(int)2);
								}
								;break;
								case (int)16: {
									HX_STACK_LINE(807)
									hx::AddEq(data->fPos,(int)2);
								}
								;break;
								case (int)17: {
									HX_STACK_LINE(807)
									hx::AddEq(data->oPos,(int)1);
								}
								;break;
								default: {
									HX_STACK_LINE(807)
									Dynamic();
								}
							}
						}
						HX_STACK_LINE(807)
						data->prev = type;
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Graphics_obj,__readGraphicsData,(void))

Void Graphics_obj::__update( ){
{
		HX_STACK_FRAME("openfl.display.Graphics","__update",0x711b5982,"openfl.display.Graphics.__update","openfl/display/Graphics.hx",816,0x8d299ce7)
		HX_STACK_THIS(this)
		HX_STACK_LINE(818)
		::openfl::geom::Rectangle tmp = this->__bounds;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(818)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(818)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(818)
		bool tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(818)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(818)
		if ((tmp3)){
			HX_STACK_LINE(818)
			::openfl::geom::Rectangle tmp5 = this->__bounds;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(818)
			::openfl::geom::Rectangle tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(818)
			::openfl::geom::Rectangle tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(818)
			Float tmp8 = tmp7->width;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(818)
			tmp4 = (tmp8 <= (int)0);
		}
		else{
			HX_STACK_LINE(818)
			tmp4 = true;
		}
		HX_STACK_LINE(818)
		bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(818)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(818)
		if ((tmp5)){
			HX_STACK_LINE(818)
			::openfl::geom::Rectangle tmp7 = this->__bounds;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(818)
			::openfl::geom::Rectangle tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(818)
			Float tmp9 = tmp8->height;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(818)
			tmp6 = (tmp9 <= (int)0);
		}
		else{
			HX_STACK_LINE(818)
			tmp6 = true;
		}
		HX_STACK_LINE(818)
		if ((tmp6)){
			HX_STACK_LINE(818)
			return null();
		}
		HX_STACK_LINE(820)
		::openfl::display::DisplayObject tmp7 = this->__owner;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(820)
		::openfl::geom::Matrix tmp8 = tmp7->__getRenderTransform();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(820)
		::openfl::geom::Matrix parentTransform = tmp8;		HX_STACK_VAR(parentTransform,"parentTransform");
		HX_STACK_LINE(821)
		Float scaleX;		HX_STACK_VAR(scaleX,"scaleX");
		HX_STACK_LINE(821)
		Float scaleY;		HX_STACK_VAR(scaleY,"scaleY");
		HX_STACK_LINE(823)
		bool tmp9 = (parentTransform->b == (int)0);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(823)
		if ((tmp9)){
			HX_STACK_LINE(825)
			scaleX = parentTransform->a;
		}
		else{
			HX_STACK_LINE(829)
			Float tmp10 = (parentTransform->a * parentTransform->a);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(829)
			Float tmp11 = (parentTransform->b * parentTransform->b);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(829)
			Float tmp12 = (tmp10 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(829)
			Float tmp13 = ::Math_obj::sqrt(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(829)
			scaleX = tmp13;
		}
		HX_STACK_LINE(833)
		bool tmp10 = (parentTransform->c == (int)0);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(833)
		if ((tmp10)){
			HX_STACK_LINE(835)
			scaleY = parentTransform->d;
		}
		else{
			HX_STACK_LINE(839)
			Float tmp11 = (parentTransform->c * parentTransform->c);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(839)
			Float tmp12 = (parentTransform->d * parentTransform->d);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(839)
			Float tmp13 = (tmp11 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(839)
			Float tmp14 = ::Math_obj::sqrt(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(839)
			scaleY = tmp14;
		}
		HX_STACK_LINE(848)
		::openfl::geom::Rectangle tmp11 = this->__bounds;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(848)
		Float tmp12 = tmp11->width;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(848)
		Float tmp13 = scaleX;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(848)
		Float tmp14 = (tmp12 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(848)
		Float width = tmp14;		HX_STACK_VAR(width,"width");
		HX_STACK_LINE(849)
		::openfl::geom::Rectangle tmp15 = this->__bounds;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(849)
		Float tmp16 = tmp15->height;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(849)
		Float tmp17 = scaleY;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(849)
		Float tmp18 = (tmp16 * tmp17);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(849)
		Float height = tmp18;		HX_STACK_VAR(height,"height");
		HX_STACK_LINE(851)
		Float tmp19 = width;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(851)
		int tmp20 = this->__width;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(851)
		Float tmp21 = (tmp19 - tmp20);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(851)
		Float tmp22 = ::Math_obj::abs(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(851)
		bool tmp23 = (tmp22 > (int)2);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(851)
		bool tmp24 = !(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(851)
		bool tmp25;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(851)
		if ((tmp24)){
			HX_STACK_LINE(851)
			Float tmp26 = height;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(851)
			int tmp27 = this->__height;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(851)
			int tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(851)
			Float tmp29 = (tmp26 - tmp28);		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(851)
			Float tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(851)
			Float tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(851)
			Float tmp32 = ::Math_obj::abs(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(851)
			Float tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(851)
			tmp25 = (tmp33 > (int)2);
		}
		else{
			HX_STACK_LINE(851)
			tmp25 = true;
		}
		HX_STACK_LINE(851)
		if ((tmp25)){
			HX_STACK_LINE(853)
			this->set___dirty(true);
			HX_STACK_LINE(854)
			Float tmp26 = width;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(854)
			int tmp27 = ::Math_obj::floor(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(854)
			this->__width = tmp27;
			HX_STACK_LINE(855)
			Float tmp28 = height;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(855)
			int tmp29 = ::Math_obj::floor(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(855)
			this->__height = tmp29;
			HX_STACK_LINE(857)
			Float tmp30 = width;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(857)
			::openfl::geom::Rectangle tmp31 = this->__bounds;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(857)
			Float tmp32 = tmp31->width;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(857)
			Float tmp33 = (Float(tmp30) / Float(tmp32));		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(857)
			::openfl::geom::Matrix tmp34 = this->__renderTransform;		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(857)
			tmp34->a = tmp33;
			HX_STACK_LINE(858)
			Float tmp35 = height;		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(858)
			::openfl::geom::Rectangle tmp36 = this->__bounds;		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(858)
			Float tmp37 = tmp36->height;		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(858)
			Float tmp38 = (Float(tmp35) / Float(tmp37));		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(858)
			::openfl::geom::Matrix tmp39 = this->__renderTransform;		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(858)
			tmp39->d = tmp38;
		}
		HX_STACK_LINE(862)
		int tmp26 = this->__width;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(862)
		bool tmp27 = (tmp26 <= (int)0);		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(862)
		bool tmp28 = !(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(862)
		bool tmp29;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(862)
		if ((tmp28)){
			HX_STACK_LINE(862)
			int tmp30 = this->__height;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(862)
			int tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(862)
			tmp29 = (tmp31 <= (int)0);
		}
		else{
			HX_STACK_LINE(862)
			tmp29 = true;
		}
		HX_STACK_LINE(862)
		if ((tmp29)){
			HX_STACK_LINE(862)
			return null();
		}
		HX_STACK_LINE(864)
		::openfl::geom::Matrix tmp30 = this->__renderTransform;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(864)
		Float tmp31 = tmp30->a;		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(864)
		Float tmp32 = (Float((int)1) / Float(tmp31));		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(864)
		::openfl::geom::Matrix tmp33 = this->__worldTransform;		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(864)
		tmp33->a = tmp32;
		HX_STACK_LINE(865)
		::openfl::geom::Matrix tmp34 = this->__worldTransform;		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(865)
		tmp34->b = (int)0;
		HX_STACK_LINE(866)
		::openfl::geom::Matrix tmp35 = this->__worldTransform;		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(866)
		tmp35->c = (int)0;
		HX_STACK_LINE(867)
		::openfl::geom::Matrix tmp36 = this->__renderTransform;		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(867)
		Float tmp37 = tmp36->d;		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(867)
		Float tmp38 = (Float((int)1) / Float(tmp37));		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(867)
		::openfl::geom::Matrix tmp39 = this->__worldTransform;		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(867)
		tmp39->d = tmp38;
		HX_STACK_LINE(868)
		::openfl::geom::Rectangle tmp40 = this->__bounds;		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(868)
		::openfl::geom::Matrix tmp41 = this->__worldTransform;		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(868)
		tmp41->tx = tmp40->x;
		HX_STACK_LINE(869)
		::openfl::geom::Rectangle tmp42 = this->__bounds;		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(869)
		::openfl::geom::Matrix tmp43 = this->__worldTransform;		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(869)
		tmp43->ty = tmp42->y;
		HX_STACK_LINE(870)
		::openfl::geom::Matrix tmp44 = this->__worldTransform;		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(870)
		::openfl::display::DisplayObject tmp45 = this->__owner;		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(870)
		::openfl::geom::Matrix tmp46 = tmp45->__worldTransform;		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(870)
		tmp44->concat(tmp46);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Graphics_obj,__update,(void))

bool Graphics_obj::set___dirty( bool value){
	HX_STACK_FRAME("openfl.display.Graphics","set___dirty",0x3f74a55c,"openfl.display.Graphics.set___dirty","openfl/display/Graphics.hx",882,0x8d299ce7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(884)
	bool tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(884)
	bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(884)
	if ((tmp)){
		HX_STACK_LINE(884)
		::openfl::display::DisplayObject tmp2 = this->__owner;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(884)
		::openfl::display::DisplayObject tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(884)
		tmp1 = (tmp3 != null());
	}
	else{
		HX_STACK_LINE(884)
		tmp1 = false;
	}
	HX_STACK_LINE(884)
	if ((tmp1)){
		HX_STACK_LINE(886)
		::openfl::display::DisplayObject tmp2 = this->__owner;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(886)
		::openfl::display::DisplayObject _this = tmp2;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(886)
		bool tmp3 = _this->__renderDirty;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(886)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(886)
		if ((tmp4)){
			HX_STACK_LINE(886)
			_this->__renderDirty = true;
			HX_STACK_LINE(886)
			(::openfl::display::DisplayObject_obj::__worldRenderDirty)++;
		}
	}
	HX_STACK_LINE(890)
	bool tmp2 = this->__dirty = value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(890)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Graphics_obj,set___dirty,return )


Graphics_obj::Graphics_obj()
{
}

void Graphics_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Graphics);
	HX_MARK_MEMBER_NAME(__bounds,"__bounds");
	HX_MARK_MEMBER_NAME(__commands,"__commands");
	HX_MARK_MEMBER_NAME(__dirty,"__dirty");
	HX_MARK_MEMBER_NAME(__height,"__height");
	HX_MARK_MEMBER_NAME(__positionX,"__positionX");
	HX_MARK_MEMBER_NAME(__positionY,"__positionY");
	HX_MARK_MEMBER_NAME(__renderTransform,"__renderTransform");
	HX_MARK_MEMBER_NAME(__strokePadding,"__strokePadding");
	HX_MARK_MEMBER_NAME(__transformDirty,"__transformDirty");
	HX_MARK_MEMBER_NAME(__visible,"__visible");
	HX_MARK_MEMBER_NAME(__owner,"__owner");
	HX_MARK_MEMBER_NAME(__width,"__width");
	HX_MARK_MEMBER_NAME(__worldTransform,"__worldTransform");
	HX_MARK_MEMBER_NAME(__cairo,"__cairo");
	HX_MARK_MEMBER_NAME(__bitmap,"__bitmap");
	HX_MARK_END_CLASS();
}

void Graphics_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(__bounds,"__bounds");
	HX_VISIT_MEMBER_NAME(__commands,"__commands");
	HX_VISIT_MEMBER_NAME(__dirty,"__dirty");
	HX_VISIT_MEMBER_NAME(__height,"__height");
	HX_VISIT_MEMBER_NAME(__positionX,"__positionX");
	HX_VISIT_MEMBER_NAME(__positionY,"__positionY");
	HX_VISIT_MEMBER_NAME(__renderTransform,"__renderTransform");
	HX_VISIT_MEMBER_NAME(__strokePadding,"__strokePadding");
	HX_VISIT_MEMBER_NAME(__transformDirty,"__transformDirty");
	HX_VISIT_MEMBER_NAME(__visible,"__visible");
	HX_VISIT_MEMBER_NAME(__owner,"__owner");
	HX_VISIT_MEMBER_NAME(__width,"__width");
	HX_VISIT_MEMBER_NAME(__worldTransform,"__worldTransform");
	HX_VISIT_MEMBER_NAME(__cairo,"__cairo");
	HX_VISIT_MEMBER_NAME(__bitmap,"__bitmap");
}

Dynamic Graphics_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"lineTo") ) { return lineTo_dyn(); }
		if (HX_FIELD_EQ(inName,"moveTo") ) { return moveTo_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"__dirty") ) { return __dirty; }
		if (HX_FIELD_EQ(inName,"__owner") ) { return __owner; }
		if (HX_FIELD_EQ(inName,"__width") ) { return __width; }
		if (HX_FIELD_EQ(inName,"__cairo") ) { return __cairo; }
		if (HX_FIELD_EQ(inName,"curveTo") ) { return curveTo_dyn(); }
		if (HX_FIELD_EQ(inName,"endFill") ) { return endFill_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__bounds") ) { return __bounds; }
		if (HX_FIELD_EQ(inName,"__height") ) { return __height; }
		if (HX_FIELD_EQ(inName,"__bitmap") ) { return __bitmap; }
		if (HX_FIELD_EQ(inName,"copyFrom") ) { return copyFrom_dyn(); }
		if (HX_FIELD_EQ(inName,"drawPath") ) { return drawPath_dyn(); }
		if (HX_FIELD_EQ(inName,"drawRect") ) { return drawRect_dyn(); }
		if (HX_FIELD_EQ(inName,"__update") ) { return __update_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"__visible") ) { return __visible; }
		if (HX_FIELD_EQ(inName,"beginFill") ) { return beginFill_dyn(); }
		if (HX_FIELD_EQ(inName,"lineStyle") ) { return lineStyle_dyn(); }
		if (HX_FIELD_EQ(inName,"__cleanup") ) { return __cleanup_dyn(); }
		if (HX_FIELD_EQ(inName,"__hitTest") ) { return __hitTest_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"__commands") ) { return __commands; }
		if (HX_FIELD_EQ(inName,"drawCircle") ) { return drawCircle_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"__positionX") ) { return __positionX; }
		if (HX_FIELD_EQ(inName,"__positionY") ) { return __positionY; }
		if (HX_FIELD_EQ(inName,"drawEllipse") ) { return drawEllipse_dyn(); }
		if (HX_FIELD_EQ(inName,"__getBounds") ) { return __getBounds_dyn(); }
		if (HX_FIELD_EQ(inName,"set___dirty") ) { return set___dirty_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"cubicCurveTo") ) { return cubicCurveTo_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"drawRoundRect") ) { return drawRoundRect_dyn(); }
		if (HX_FIELD_EQ(inName,"drawTriangles") ) { return drawTriangles_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__strokePadding") ) { return __strokePadding; }
		if (HX_FIELD_EQ(inName,"beginBitmapFill") ) { return beginBitmapFill_dyn(); }
		if (HX_FIELD_EQ(inName,"lineBitmapStyle") ) { return lineBitmapStyle_dyn(); }
		if (HX_FIELD_EQ(inName,"__inflateBounds") ) { return __inflateBounds_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__transformDirty") ) { return __transformDirty; }
		if (HX_FIELD_EQ(inName,"__worldTransform") ) { return __worldTransform; }
		if (HX_FIELD_EQ(inName,"drawGraphicsData") ) { return drawGraphicsData_dyn(); }
		if (HX_FIELD_EQ(inName,"readGraphicsData") ) { return readGraphicsData_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__renderTransform") ) { return __renderTransform; }
		if (HX_FIELD_EQ(inName,"beginGradientFill") ) { return beginGradientFill_dyn(); }
		if (HX_FIELD_EQ(inName,"lineGradientStyle") ) { return lineGradientStyle_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"__readGraphicsData") ) { return __readGraphicsData_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"drawRoundRectComplex") ) { return drawRoundRectComplex_dyn(); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"__calculateBezierQuadPoint") ) { return __calculateBezierQuadPoint_dyn(); }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"__calculateBezierCubicPoint") ) { return __calculateBezierCubicPoint_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Graphics_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"__dirty") ) { if (inCallProp == hx::paccAlways) return set___dirty(inValue);__dirty=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__owner") ) { __owner=inValue.Cast< ::openfl::display::DisplayObject >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__width") ) { __width=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__cairo") ) { __cairo=inValue.Cast< ::lime::graphics::cairo::Cairo >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__bounds") ) { __bounds=inValue.Cast< ::openfl::geom::Rectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__height") ) { __height=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__bitmap") ) { __bitmap=inValue.Cast< ::openfl::display::BitmapData >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"__visible") ) { __visible=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"__commands") ) { __commands=inValue.Cast< ::openfl::_internal::renderer::DrawCommandBuffer >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"__positionX") ) { __positionX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__positionY") ) { __positionY=inValue.Cast< Float >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__strokePadding") ) { __strokePadding=inValue.Cast< Float >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__transformDirty") ) { __transformDirty=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__worldTransform") ) { __worldTransform=inValue.Cast< ::openfl::geom::Matrix >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__renderTransform") ) { __renderTransform=inValue.Cast< ::openfl::geom::Matrix >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Graphics_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("__bounds","\x95","\xf1","\x4c","\x0e"));
	outFields->push(HX_HCSTRING("__commands","\xe8","\x23","\x8e","\x61"));
	outFields->push(HX_HCSTRING("__dirty","\xf2","\xa8","\x2e","\x44"));
	outFields->push(HX_HCSTRING("__height","\x07","\x73","\x7b","\xaa"));
	outFields->push(HX_HCSTRING("__positionX","\x6f","\x3c","\x7e","\xfe"));
	outFields->push(HX_HCSTRING("__positionY","\x70","\x3c","\x7e","\xfe"));
	outFields->push(HX_HCSTRING("__renderTransform","\x16","\xb8","\x95","\xb1"));
	outFields->push(HX_HCSTRING("__strokePadding","\xd9","\x6d","\xda","\xc4"));
	outFields->push(HX_HCSTRING("__transformDirty","\x26","\xf6","\x91","\x84"));
	outFields->push(HX_HCSTRING("__visible","\x52","\xc9","\x72","\x24"));
	outFields->push(HX_HCSTRING("__owner","\x13","\xf1","\xd4","\xa2"));
	outFields->push(HX_HCSTRING("__width","\xe6","\x0e","\xc1","\x34"));
	outFields->push(HX_HCSTRING("__worldTransform","\xda","\xa7","\xd8","\x9a"));
	outFields->push(HX_HCSTRING("__cairo","\x68","\x89","\x77","\xab"));
	outFields->push(HX_HCSTRING("__bitmap","\x0f","\x7b","\x3b","\x99"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::geom::Rectangle*/ ,(int)offsetof(Graphics_obj,__bounds),HX_HCSTRING("__bounds","\x95","\xf1","\x4c","\x0e")},
	{hx::fsObject /*::openfl::_internal::renderer::DrawCommandBuffer*/ ,(int)offsetof(Graphics_obj,__commands),HX_HCSTRING("__commands","\xe8","\x23","\x8e","\x61")},
	{hx::fsBool,(int)offsetof(Graphics_obj,__dirty),HX_HCSTRING("__dirty","\xf2","\xa8","\x2e","\x44")},
	{hx::fsInt,(int)offsetof(Graphics_obj,__height),HX_HCSTRING("__height","\x07","\x73","\x7b","\xaa")},
	{hx::fsFloat,(int)offsetof(Graphics_obj,__positionX),HX_HCSTRING("__positionX","\x6f","\x3c","\x7e","\xfe")},
	{hx::fsFloat,(int)offsetof(Graphics_obj,__positionY),HX_HCSTRING("__positionY","\x70","\x3c","\x7e","\xfe")},
	{hx::fsObject /*::openfl::geom::Matrix*/ ,(int)offsetof(Graphics_obj,__renderTransform),HX_HCSTRING("__renderTransform","\x16","\xb8","\x95","\xb1")},
	{hx::fsFloat,(int)offsetof(Graphics_obj,__strokePadding),HX_HCSTRING("__strokePadding","\xd9","\x6d","\xda","\xc4")},
	{hx::fsBool,(int)offsetof(Graphics_obj,__transformDirty),HX_HCSTRING("__transformDirty","\x26","\xf6","\x91","\x84")},
	{hx::fsBool,(int)offsetof(Graphics_obj,__visible),HX_HCSTRING("__visible","\x52","\xc9","\x72","\x24")},
	{hx::fsObject /*::openfl::display::DisplayObject*/ ,(int)offsetof(Graphics_obj,__owner),HX_HCSTRING("__owner","\x13","\xf1","\xd4","\xa2")},
	{hx::fsInt,(int)offsetof(Graphics_obj,__width),HX_HCSTRING("__width","\xe6","\x0e","\xc1","\x34")},
	{hx::fsObject /*::openfl::geom::Matrix*/ ,(int)offsetof(Graphics_obj,__worldTransform),HX_HCSTRING("__worldTransform","\xda","\xa7","\xd8","\x9a")},
	{hx::fsObject /*::lime::graphics::cairo::Cairo*/ ,(int)offsetof(Graphics_obj,__cairo),HX_HCSTRING("__cairo","\x68","\x89","\x77","\xab")},
	{hx::fsObject /*::openfl::display::BitmapData*/ ,(int)offsetof(Graphics_obj,__bitmap),HX_HCSTRING("__bitmap","\x0f","\x7b","\x3b","\x99")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("__bounds","\x95","\xf1","\x4c","\x0e"),
	HX_HCSTRING("__commands","\xe8","\x23","\x8e","\x61"),
	HX_HCSTRING("__dirty","\xf2","\xa8","\x2e","\x44"),
	HX_HCSTRING("__height","\x07","\x73","\x7b","\xaa"),
	HX_HCSTRING("__positionX","\x6f","\x3c","\x7e","\xfe"),
	HX_HCSTRING("__positionY","\x70","\x3c","\x7e","\xfe"),
	HX_HCSTRING("__renderTransform","\x16","\xb8","\x95","\xb1"),
	HX_HCSTRING("__strokePadding","\xd9","\x6d","\xda","\xc4"),
	HX_HCSTRING("__transformDirty","\x26","\xf6","\x91","\x84"),
	HX_HCSTRING("__visible","\x52","\xc9","\x72","\x24"),
	HX_HCSTRING("__owner","\x13","\xf1","\xd4","\xa2"),
	HX_HCSTRING("__width","\xe6","\x0e","\xc1","\x34"),
	HX_HCSTRING("__worldTransform","\xda","\xa7","\xd8","\x9a"),
	HX_HCSTRING("__cairo","\x68","\x89","\x77","\xab"),
	HX_HCSTRING("__bitmap","\x0f","\x7b","\x3b","\x99"),
	HX_HCSTRING("beginBitmapFill","\x9b","\xc9","\x07","\x6a"),
	HX_HCSTRING("beginFill","\x4c","\xad","\x95","\x8c"),
	HX_HCSTRING("beginGradientFill","\x5c","\x3c","\x03","\x2e"),
	HX_HCSTRING("clear","\x8d","\x71","\x5b","\x48"),
	HX_HCSTRING("copyFrom","\xbf","\x0b","\x61","\xc8"),
	HX_HCSTRING("cubicCurveTo","\xe0","\x07","\x90","\x2e"),
	HX_HCSTRING("curveTo","\x0a","\x60","\x88","\xce"),
	HX_HCSTRING("drawCircle","\x34","\xed","\xd0","\x97"),
	HX_HCSTRING("drawEllipse","\x3a","\x85","\xce","\x54"),
	HX_HCSTRING("drawGraphicsData","\xb9","\xaa","\x6e","\x60"),
	HX_HCSTRING("drawPath","\xc9","\x8f","\xbb","\x5e"),
	HX_HCSTRING("drawRect","\x48","\xf7","\x10","\x60"),
	HX_HCSTRING("drawRoundRect","\xee","\xc3","\xaa","\xe2"),
	HX_HCSTRING("drawRoundRectComplex","\xe2","\x43","\x2c","\x11"),
	HX_HCSTRING("drawTriangles","\x07","\x44","\x68","\xde"),
	HX_HCSTRING("endFill","\xfe","\x87","\xe0","\x25"),
	HX_HCSTRING("lineBitmapStyle","\x2e","\x3f","\x21","\x45"),
	HX_HCSTRING("lineGradientStyle","\x8d","\x24","\xf2","\xc1"),
	HX_HCSTRING("lineStyle","\x9d","\xa8","\x18","\xcb"),
	HX_HCSTRING("lineTo","\x8f","\x46","\xa0","\xec"),
	HX_HCSTRING("moveTo","\xec","\xd2","\xac","\xcc"),
	HX_HCSTRING("readGraphicsData","\x0b","\x7d","\x00","\x87"),
	HX_HCSTRING("__calculateBezierCubicPoint","\x0b","\xc2","\xaf","\xf4"),
	HX_HCSTRING("__calculateBezierQuadPoint","\x44","\x46","\xe8","\x5e"),
	HX_HCSTRING("__cleanup","\x04","\x5d","\x90","\x2c"),
	HX_HCSTRING("__getBounds","\x8b","\x58","\xa0","\x10"),
	HX_HCSTRING("__hitTest","\x25","\xb1","\xcd","\x63"),
	HX_HCSTRING("__inflateBounds","\x3c","\x6f","\xee","\xb6"),
	HX_HCSTRING("__readGraphicsData","\x2b","\x10","\x91","\xf2"),
	HX_HCSTRING("__update","\x29","\xf1","\x34","\x2f"),
	HX_HCSTRING("set___dirty","\x15","\x10","\x96","\xd4"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Graphics_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Graphics_obj::__mClass,"__mClass");
};

#endif

hx::Class Graphics_obj::__mClass;

void Graphics_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.display.Graphics","\x35","\x67","\x20","\x87");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Graphics_obj >;
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
