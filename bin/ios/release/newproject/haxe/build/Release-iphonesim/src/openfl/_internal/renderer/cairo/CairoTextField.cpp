#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_lime_graphics_Image
#include <lime/graphics/Image.h>
#endif
#ifndef INCLUDED_lime_graphics_cairo_Cairo
#include <lime/graphics/cairo/Cairo.h>
#endif
#ifndef INCLUDED_lime_graphics_cairo__CairoFTFontFace_CairoFTFontFace_Impl_
#include <lime/graphics/cairo/_CairoFTFontFace/CairoFTFontFace_Impl_.h>
#endif
#ifndef INCLUDED_lime_graphics_cairo__CairoFontOptions_CairoFontOptions_Impl_
#include <lime/graphics/cairo/_CairoFontOptions/CairoFontOptions_Impl_.h>
#endif
#ifndef INCLUDED_lime_graphics_cairo__CairoImageSurface_CairoImageSurface_Impl_
#include <lime/graphics/cairo/_CairoImageSurface/CairoImageSurface_Impl_.h>
#endif
#ifndef INCLUDED_lime_math_Matrix3
#include <lime/math/Matrix3.h>
#endif
#ifndef INCLUDED_lime_text_Font
#include <lime/text/Font.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_RenderSession
#include <openfl/_internal/renderer/RenderSession.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_cairo_CairoTextField
#include <openfl/_internal/renderer/cairo/CairoTextField.h>
#endif
#ifndef INCLUDED_openfl__internal_text_TextEngine
#include <openfl/_internal/text/TextEngine.h>
#endif
#ifndef INCLUDED_openfl__internal_text_TextLayoutGroup
#include <openfl/_internal/text/TextLayoutGroup.h>
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
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
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
#ifndef INCLUDED_openfl_text_Font
#include <openfl/text/Font.h>
#endif
#ifndef INCLUDED_openfl_text_TextField
#include <openfl/text/TextField.h>
#endif
#ifndef INCLUDED_openfl_text_TextFormat
#include <openfl/text/TextFormat.h>
#endif
namespace openfl{
namespace _internal{
namespace renderer{
namespace cairo{

Void CairoTextField_obj::__construct()
{
	return null();
}

//CairoTextField_obj::~CairoTextField_obj() { }

Dynamic CairoTextField_obj::__CreateEmpty() { return  new CairoTextField_obj; }
hx::ObjectPtr< CairoTextField_obj > CairoTextField_obj::__new()
{  hx::ObjectPtr< CairoTextField_obj > _result_ = new CairoTextField_obj();
	_result_->__construct();
	return _result_;}

Dynamic CairoTextField_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CairoTextField_obj > _result_ = new CairoTextField_obj();
	_result_->__construct();
	return _result_;}

Void CairoTextField_obj::render( ::openfl::text::TextField textField,::openfl::_internal::renderer::RenderSession renderSession,::openfl::geom::Matrix transform){
{
		HX_STACK_FRAME("openfl._internal.renderer.cairo.CairoTextField","render",0xabb9797e,"openfl._internal.renderer.cairo.CairoTextField.render","openfl/_internal/renderer/cairo/CairoTextField.hx",29,0xfadfb778)
		HX_STACK_ARG(textField,"textField")
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_ARG(transform,"transform")
		HX_STACK_LINE(33)
		::openfl::_internal::text::TextEngine textEngine = textField->__textEngine;		HX_STACK_VAR(textEngine,"textEngine");
		HX_STACK_LINE(34)
		::openfl::geom::Rectangle bounds = textEngine->bounds;		HX_STACK_VAR(bounds,"bounds");
		HX_STACK_LINE(35)
		::openfl::display::Graphics graphics = textField->__graphics;		HX_STACK_VAR(graphics,"graphics");
		HX_STACK_LINE(36)
		::lime::graphics::cairo::Cairo cairo = graphics->__cairo;		HX_STACK_VAR(cairo,"cairo");
		HX_STACK_LINE(38)
		bool tmp = textField->__dirty;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(38)
		if ((tmp)){
			HX_STACK_LINE(40)
			textField->__updateLayout();
			HX_STACK_LINE(42)
			bool tmp1 = (graphics->__bounds == null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(42)
			if ((tmp1)){
				HX_STACK_LINE(44)
				::openfl::geom::Rectangle tmp2 = ::openfl::geom::Rectangle_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(44)
				graphics->__bounds = tmp2;
			}
			HX_STACK_LINE(48)
			::openfl::geom::Rectangle tmp2 = bounds;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(48)
			graphics->__bounds->copyFrom(tmp2);
		}
		HX_STACK_LINE(52)
		graphics->__update();
		HX_STACK_LINE(54)
		int width = graphics->__width;		HX_STACK_VAR(width,"width");
		HX_STACK_LINE(55)
		int height = graphics->__height;		HX_STACK_VAR(height,"height");
		HX_STACK_LINE(57)
		bool tmp1 = (cairo != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(57)
		if ((tmp1)){
			HX_STACK_LINE(59)
			Dynamic tmp2 = cairo->get_target();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(59)
			Dynamic surface = tmp2;		HX_STACK_VAR(surface,"surface");
			HX_STACK_LINE(61)
			int tmp3 = width;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(61)
			Dynamic tmp4 = surface;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(61)
			int tmp5 = ::lime::graphics::cairo::_CairoImageSurface::CairoImageSurface_Impl__obj::get_width(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(61)
			bool tmp6 = (tmp3 != tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(61)
			bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(61)
			bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(61)
			if ((tmp7)){
				HX_STACK_LINE(61)
				int tmp9 = height;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(61)
				Dynamic tmp10 = surface;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(61)
				Dynamic tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(61)
				int tmp12 = ::lime::graphics::cairo::_CairoImageSurface::CairoImageSurface_Impl__obj::get_height(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(61)
				int tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(61)
				tmp8 = (tmp9 != tmp13);
			}
			else{
				HX_STACK_LINE(61)
				tmp8 = true;
			}
			HX_STACK_LINE(61)
			if ((tmp8)){
				HX_STACK_LINE(63)
				graphics->__cairo = null();
				HX_STACK_LINE(64)
				graphics->__visible = false;
				HX_STACK_LINE(65)
				cairo = null();
			}
		}
		HX_STACK_LINE(71)
		bool tmp2 = (width <= (int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(71)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(71)
		bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(71)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(71)
		if ((tmp4)){
			HX_STACK_LINE(71)
			tmp5 = (height <= (int)0);
		}
		else{
			HX_STACK_LINE(71)
			tmp5 = true;
		}
		HX_STACK_LINE(71)
		bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(71)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(71)
		if ((tmp6)){
			HX_STACK_LINE(71)
			bool tmp8 = textField->__dirty;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(71)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(71)
			bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(71)
			bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(71)
			bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(71)
			bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(71)
			if ((tmp13)){
				HX_STACK_LINE(71)
				bool tmp14 = graphics->__dirty;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(71)
				bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(71)
				bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(71)
				tmp7 = !(tmp16);
			}
			else{
				HX_STACK_LINE(71)
				tmp7 = false;
			}
		}
		else{
			HX_STACK_LINE(71)
			tmp7 = true;
		}
		HX_STACK_LINE(71)
		if ((tmp7)){
			HX_STACK_LINE(73)
			textField->__dirty = false;
			HX_STACK_LINE(74)
			return null();
		}
		HX_STACK_LINE(78)
		bool tmp8 = (cairo == null());		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(78)
		if ((tmp8)){
			HX_STACK_LINE(80)
			::openfl::display::BitmapData tmp9 = ::openfl::display::BitmapData_obj::__new(width,height,true,(int)0);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(80)
			::openfl::display::BitmapData bitmap = tmp9;		HX_STACK_VAR(bitmap,"bitmap");
			HX_STACK_LINE(81)
			Dynamic tmp10 = bitmap->getSurface();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(81)
			Dynamic surface = tmp10;		HX_STACK_VAR(surface,"surface");
			HX_STACK_LINE(82)
			::lime::graphics::cairo::Cairo tmp11 = ::lime::graphics::cairo::Cairo_obj::__new(surface);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(82)
			graphics->__cairo = tmp11;
			HX_STACK_LINE(83)
			graphics->__visible = true;
			HX_STACK_LINE(85)
			graphics->__bitmap = bitmap;
			HX_STACK_LINE(87)
			cairo = graphics->__cairo;
			HX_STACK_LINE(89)
			Dynamic tmp12 = ::lime::graphics::cairo::_CairoFontOptions::CairoFontOptions_Impl__obj::_new();		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(89)
			Dynamic options = tmp12;		HX_STACK_VAR(options,"options");
			HX_STACK_LINE(91)
			bool tmp13 = (textEngine->antiAliasType == ((Dynamic)((int)0)));		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(91)
			bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(91)
			if ((tmp13)){
				HX_STACK_LINE(91)
				tmp14 = (textEngine->sharpness == (int)400);
			}
			else{
				HX_STACK_LINE(91)
				tmp14 = false;
			}
			HX_STACK_LINE(91)
			if ((tmp14)){
				HX_STACK_LINE(93)
				Dynamic tmp15 = options;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(93)
				::lime::graphics::cairo::_CairoFontOptions::CairoFontOptions_Impl__obj::set_hintStyle(tmp15,(int)1);
				HX_STACK_LINE(94)
				Dynamic tmp16 = options;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(94)
				::lime::graphics::cairo::_CairoFontOptions::CairoFontOptions_Impl__obj::set_hintMetrics(tmp16,(int)1);
				HX_STACK_LINE(95)
				Dynamic tmp17 = options;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(95)
				::lime::graphics::cairo::_CairoFontOptions::CairoFontOptions_Impl__obj::set_antialias(tmp17,(int)1);
			}
			else{
				HX_STACK_LINE(99)
				Dynamic tmp15 = options;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(99)
				::lime::graphics::cairo::_CairoFontOptions::CairoFontOptions_Impl__obj::set_hintStyle(tmp15,(int)0);
				HX_STACK_LINE(100)
				Dynamic tmp16 = options;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(100)
				::lime::graphics::cairo::_CairoFontOptions::CairoFontOptions_Impl__obj::set_hintMetrics(tmp16,(int)1);
				HX_STACK_LINE(101)
				Dynamic tmp17 = options;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(101)
				::lime::graphics::cairo::_CairoFontOptions::CairoFontOptions_Impl__obj::set_antialias(tmp17,(int)5);
			}
			HX_STACK_LINE(105)
			Dynamic tmp15 = options;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(105)
			cairo->set_fontOptions(tmp15);
		}
		HX_STACK_LINE(109)
		bool tmp9 = renderSession->roundPixels;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(109)
		if ((tmp9)){
			HX_STACK_LINE(111)
			::lime::math::Matrix3 tmp10 = graphics->__renderTransform->__toMatrix3();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(111)
			::lime::math::Matrix3 matrix = tmp10;		HX_STACK_VAR(matrix,"matrix");
			HX_STACK_LINE(112)
			Float tmp11 = matrix->tx;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(112)
			int tmp12 = ::Math_obj::round(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(112)
			matrix->tx = tmp12;
			HX_STACK_LINE(113)
			Float tmp13 = matrix->ty;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(113)
			int tmp14 = ::Math_obj::round(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(113)
			matrix->ty = tmp14;
			HX_STACK_LINE(114)
			::lime::math::Matrix3 tmp15 = matrix;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(114)
			cairo->set_matrix(tmp15);
		}
		else{
			HX_STACK_LINE(118)
			::lime::math::Matrix3 tmp10 = graphics->__renderTransform->__toMatrix3();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(118)
			cairo->set_matrix(tmp10);
		}
		HX_STACK_LINE(122)
		bool tmp10 = textEngine->border;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(122)
		if ((tmp10)){
			HX_STACK_LINE(124)
			Float tmp11 = (bounds->width - (int)1);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(124)
			int tmp12 = ::Std_obj::_int(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(124)
			Float tmp13 = (bounds->height - (int)1);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(124)
			int tmp14 = ::Std_obj::_int(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(124)
			cairo->rectangle(((Float)0.5),((Float)0.5),tmp12,tmp14);
		}
		else{
			HX_STACK_LINE(128)
			Float tmp11 = bounds->width;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(128)
			Float tmp12 = bounds->height;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(128)
			cairo->rectangle((int)0,(int)0,tmp11,tmp12);
		}
		HX_STACK_LINE(132)
		bool tmp11 = textEngine->background;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(132)
		bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(132)
		if ((tmp12)){
			HX_STACK_LINE(134)
			cairo->set_operator((int)0);
			HX_STACK_LINE(135)
			cairo->paint();
			HX_STACK_LINE(136)
			cairo->set_operator((int)2);
		}
		else{
			HX_STACK_LINE(140)
			int color = textEngine->backgroundColor;		HX_STACK_VAR(color,"color");
			HX_STACK_LINE(141)
			int tmp13 = (int(color) & int((int)16711680));		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(141)
			int tmp14 = hx::UShr(tmp13,(int)16);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(141)
			Float tmp15 = (Float(tmp14) / Float((int)255));		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(141)
			Float r = tmp15;		HX_STACK_VAR(r,"r");
			HX_STACK_LINE(142)
			int tmp16 = (int(color) & int((int)65280));		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(142)
			int tmp17 = hx::UShr(tmp16,(int)8);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(142)
			Float tmp18 = (Float(tmp17) / Float((int)255));		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(142)
			Float g = tmp18;		HX_STACK_VAR(g,"g");
			HX_STACK_LINE(143)
			int tmp19 = (int(color) & int((int)255));		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(143)
			Float tmp20 = (Float(tmp19) / Float((int)255));		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(143)
			Float b = tmp20;		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(145)
			Float tmp21 = r;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(145)
			Float tmp22 = g;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(145)
			Float tmp23 = b;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(145)
			cairo->setSourceRGB(tmp21,tmp22,tmp23);
			HX_STACK_LINE(146)
			cairo->fillPreserve();
		}
		HX_STACK_LINE(150)
		bool tmp13 = textEngine->border;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(150)
		if ((tmp13)){
			HX_STACK_LINE(152)
			int color = textEngine->borderColor;		HX_STACK_VAR(color,"color");
			HX_STACK_LINE(153)
			int tmp14 = (int(color) & int((int)16711680));		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(153)
			int tmp15 = hx::UShr(tmp14,(int)16);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(153)
			Float tmp16 = (Float(tmp15) / Float((int)255));		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(153)
			Float r = tmp16;		HX_STACK_VAR(r,"r");
			HX_STACK_LINE(154)
			int tmp17 = (int(color) & int((int)65280));		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(154)
			int tmp18 = hx::UShr(tmp17,(int)8);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(154)
			Float tmp19 = (Float(tmp18) / Float((int)255));		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(154)
			Float g = tmp19;		HX_STACK_VAR(g,"g");
			HX_STACK_LINE(155)
			int tmp20 = (int(color) & int((int)255));		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(155)
			Float tmp21 = (Float(tmp20) / Float((int)255));		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(155)
			Float b = tmp21;		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(157)
			Float tmp22 = r;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(157)
			Float tmp23 = g;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(157)
			Float tmp24 = b;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(157)
			cairo->setSourceRGB(tmp22,tmp23,tmp24);
			HX_STACK_LINE(158)
			cairo->set_lineWidth((int)1);
			HX_STACK_LINE(159)
			cairo->stroke();
		}
		HX_STACK_LINE(163)
		bool tmp14 = (textEngine->text != null());		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(163)
		bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(163)
		if ((tmp14)){
			HX_STACK_LINE(163)
			tmp15 = (textEngine->text != HX_HCSTRING("","\x00","\x00","\x00","\x00"));
		}
		else{
			HX_STACK_LINE(163)
			tmp15 = false;
		}
		HX_STACK_LINE(163)
		if ((tmp15)){
			HX_STACK_LINE(165)
			Float tmp16 = bounds->width;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(165)
			bool tmp17 = textField->get_border();		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(165)
			int tmp18;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(165)
			if ((tmp17)){
				HX_STACK_LINE(165)
				tmp18 = (int)1;
			}
			else{
				HX_STACK_LINE(165)
				tmp18 = (int)0;
			}
			HX_STACK_LINE(165)
			Float tmp19 = (tmp16 - tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(165)
			Float tmp20 = bounds->height;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(165)
			bool tmp21 = textField->get_border();		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(165)
			int tmp22;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(165)
			if ((tmp21)){
				HX_STACK_LINE(165)
				tmp22 = (int)1;
			}
			else{
				HX_STACK_LINE(165)
				tmp22 = (int)0;
			}
			HX_STACK_LINE(165)
			Float tmp23 = (tmp20 - tmp22);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(165)
			cairo->rectangle((int)0,(int)0,tmp19,tmp23);
			HX_STACK_LINE(166)
			cairo->clip();
			HX_STACK_LINE(168)
			::String text = textEngine->text;		HX_STACK_VAR(text,"text");
			HX_STACK_LINE(185)
			int tmp24 = textField->get_scrollH();		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(185)
			int tmp25 = -(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(185)
			int scrollX = tmp25;		HX_STACK_VAR(scrollX,"scrollX");
			HX_STACK_LINE(186)
			Float scrollY = ((Float)0.0);		HX_STACK_VAR(scrollY,"scrollY");
			HX_STACK_LINE(188)
			{
				HX_STACK_LINE(188)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(188)
				int tmp26 = textField->get_scrollV();		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(188)
				int tmp27 = (tmp26 - (int)1);		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(188)
				int _g = tmp27;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(188)
				while((true)){
					HX_STACK_LINE(188)
					bool tmp28 = (_g1 < _g);		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(188)
					bool tmp29 = !(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(188)
					if ((tmp29)){
						HX_STACK_LINE(188)
						break;
					}
					HX_STACK_LINE(188)
					int tmp30 = (_g1)++;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(188)
					int i = tmp30;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(190)
					Float tmp31 = textEngine->lineHeights->__get(i);		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(190)
					hx::SubEq(scrollY,tmp31);
				}
			}
			HX_STACK_LINE(194)
			Dynamic color;		HX_STACK_VAR(color,"color");
			HX_STACK_LINE(194)
			Float r;		HX_STACK_VAR(r,"r");
			HX_STACK_LINE(194)
			Float g;		HX_STACK_VAR(g,"g");
			HX_STACK_LINE(194)
			Float b;		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(194)
			::openfl::text::Font font;		HX_STACK_VAR(font,"font");
			HX_STACK_LINE(194)
			int size;		HX_STACK_VAR(size,"size");
			HX_STACK_LINE(194)
			Float advance;		HX_STACK_VAR(advance,"advance");
			HX_STACK_LINE(196)
			{
				HX_STACK_LINE(196)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(196)
				Array< ::Dynamic > _g1 = textEngine->layoutGroups;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(196)
				while((true)){
					HX_STACK_LINE(196)
					bool tmp26 = (_g < _g1->length);		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(196)
					bool tmp27 = !(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(196)
					if ((tmp27)){
						HX_STACK_LINE(196)
						break;
					}
					HX_STACK_LINE(196)
					::openfl::_internal::text::TextLayoutGroup tmp28 = _g1->__get(_g).StaticCast< ::openfl::_internal::text::TextLayoutGroup >();		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(196)
					::openfl::_internal::text::TextLayoutGroup group = tmp28;		HX_STACK_VAR(group,"group");
					HX_STACK_LINE(196)
					++(_g);
					HX_STACK_LINE(198)
					int tmp29 = group->lineIndex;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(198)
					int tmp30 = textField->get_scrollV();		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(198)
					int tmp31 = (tmp30 - (int)1);		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(198)
					bool tmp32 = (tmp29 < tmp31);		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(198)
					if ((tmp32)){
						HX_STACK_LINE(198)
						continue;
					}
					HX_STACK_LINE(199)
					int tmp33 = group->lineIndex;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(199)
					int tmp34 = textField->get_scrollV();		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(199)
					int tmp35 = textEngine->bottomScrollV;		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(199)
					int tmp36 = (tmp34 + tmp35);		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(199)
					int tmp37 = (tmp36 - (int)2);		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(199)
					bool tmp38 = (tmp33 > tmp37);		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(199)
					if ((tmp38)){
						HX_STACK_LINE(199)
						break;
					}
					HX_STACK_LINE(201)
					Dynamic tmp39 = group->format->color;		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(201)
					color = tmp39;
					HX_STACK_LINE(202)
					int tmp40 = (int(color) & int((int)16711680));		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(202)
					int tmp41 = hx::UShr(tmp40,(int)16);		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(202)
					Float tmp42 = (Float(tmp41) / Float((int)255));		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(202)
					r = tmp42;
					HX_STACK_LINE(203)
					int tmp43 = (int(color) & int((int)65280));		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(203)
					int tmp44 = hx::UShr(tmp43,(int)8);		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(203)
					Float tmp45 = (Float(tmp44) / Float((int)255));		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(203)
					g = tmp45;
					HX_STACK_LINE(204)
					int tmp46 = (int(color) & int((int)255));		HX_STACK_VAR(tmp46,"tmp46");
					HX_STACK_LINE(204)
					Float tmp47 = (Float(tmp46) / Float((int)255));		HX_STACK_VAR(tmp47,"tmp47");
					HX_STACK_LINE(204)
					b = tmp47;
					HX_STACK_LINE(206)
					Float tmp48 = r;		HX_STACK_VAR(tmp48,"tmp48");
					HX_STACK_LINE(206)
					Float tmp49 = g;		HX_STACK_VAR(tmp49,"tmp49");
					HX_STACK_LINE(206)
					Float tmp50 = b;		HX_STACK_VAR(tmp50,"tmp50");
					HX_STACK_LINE(206)
					cairo->setSourceRGB(tmp48,tmp49,tmp50);
					HX_STACK_LINE(208)
					::openfl::text::TextFormat tmp51 = group->format;		HX_STACK_VAR(tmp51,"tmp51");
					HX_STACK_LINE(208)
					::openfl::text::Font tmp52 = ::openfl::_internal::text::TextEngine_obj::getFontInstance(tmp51);		HX_STACK_VAR(tmp52,"tmp52");
					HX_STACK_LINE(208)
					font = tmp52;
					HX_STACK_LINE(210)
					bool tmp53 = (font != null());		HX_STACK_VAR(tmp53,"tmp53");
					HX_STACK_LINE(210)
					bool tmp54;		HX_STACK_VAR(tmp54,"tmp54");
					HX_STACK_LINE(210)
					if ((tmp53)){
						HX_STACK_LINE(210)
						Dynamic tmp55 = group->format->size;		HX_STACK_VAR(tmp55,"tmp55");
						HX_STACK_LINE(210)
						Dynamic tmp56 = tmp55;		HX_STACK_VAR(tmp56,"tmp56");
						HX_STACK_LINE(210)
						tmp54 = (tmp56 != null());
					}
					else{
						HX_STACK_LINE(210)
						tmp54 = false;
					}
					HX_STACK_LINE(210)
					if ((tmp54)){
						HX_STACK_LINE(212)
						bool tmp55 = (textEngine->__cairoFont != null());		HX_STACK_VAR(tmp55,"tmp55");
						HX_STACK_LINE(212)
						if ((tmp55)){
							HX_STACK_LINE(214)
							bool tmp56 = (textEngine->__font != font);		HX_STACK_VAR(tmp56,"tmp56");
							HX_STACK_LINE(214)
							if ((tmp56)){
								HX_STACK_LINE(216)
								textEngine->__cairoFont = null();
							}
						}
						HX_STACK_LINE(222)
						bool tmp56 = (textEngine->__cairoFont == null());		HX_STACK_VAR(tmp56,"tmp56");
						HX_STACK_LINE(222)
						if ((tmp56)){
							HX_STACK_LINE(224)
							textEngine->__font = font;
							HX_STACK_LINE(225)
							::openfl::text::Font tmp57 = font;		HX_STACK_VAR(tmp57,"tmp57");
							HX_STACK_LINE(225)
							Dynamic tmp58 = ::lime::graphics::cairo::_CairoFTFontFace::CairoFTFontFace_Impl__obj::create(tmp57,(int)0);		HX_STACK_VAR(tmp58,"tmp58");
							HX_STACK_LINE(225)
							textEngine->__cairoFont = tmp58;
						}
						HX_STACK_LINE(229)
						Dynamic tmp57 = textEngine->__cairoFont;		HX_STACK_VAR(tmp57,"tmp57");
						HX_STACK_LINE(229)
						cairo->set_fontFace(tmp57);
						HX_STACK_LINE(231)
						Dynamic tmp58 = group->format->size;		HX_STACK_VAR(tmp58,"tmp58");
						HX_STACK_LINE(231)
						int tmp59 = ::Std_obj::_int(tmp58);		HX_STACK_VAR(tmp59,"tmp59");
						HX_STACK_LINE(231)
						size = tmp59;
						HX_STACK_LINE(232)
						int tmp60 = size;		HX_STACK_VAR(tmp60,"tmp60");
						HX_STACK_LINE(232)
						cairo->setFontSize(tmp60);
						HX_STACK_LINE(234)
						Float tmp61 = (group->offsetX + scrollX);		HX_STACK_VAR(tmp61,"tmp61");
						HX_STACK_LINE(234)
						Float tmp62 = (group->offsetY + group->ascent);		HX_STACK_VAR(tmp62,"tmp62");
						HX_STACK_LINE(234)
						Float tmp63 = scrollY;		HX_STACK_VAR(tmp63,"tmp63");
						HX_STACK_LINE(234)
						Float tmp64 = (tmp62 + tmp63);		HX_STACK_VAR(tmp64,"tmp64");
						HX_STACK_LINE(234)
						cairo->moveTo(tmp61,tmp64);
						HX_STACK_LINE(255)
						int tmp65 = group->startIndex;		HX_STACK_VAR(tmp65,"tmp65");
						HX_STACK_LINE(255)
						int tmp66 = group->endIndex;		HX_STACK_VAR(tmp66,"tmp66");
						HX_STACK_LINE(255)
						::String tmp67 = text.substring(tmp65,tmp66);		HX_STACK_VAR(tmp67,"tmp67");
						HX_STACK_LINE(255)
						cairo->showText(tmp67);
						HX_STACK_LINE(257)
						int tmp68 = textField->__caretIndex;		HX_STACK_VAR(tmp68,"tmp68");
						HX_STACK_LINE(257)
						int tmp69 = (int)-1;		HX_STACK_VAR(tmp69,"tmp69");
						HX_STACK_LINE(257)
						bool tmp70 = (tmp68 > tmp69);		HX_STACK_VAR(tmp70,"tmp70");
						HX_STACK_LINE(257)
						bool tmp71;		HX_STACK_VAR(tmp71,"tmp71");
						HX_STACK_LINE(257)
						if ((tmp70)){
							HX_STACK_LINE(257)
							tmp71 = textEngine->selectable;
						}
						else{
							HX_STACK_LINE(257)
							tmp71 = false;
						}
						HX_STACK_LINE(257)
						if ((tmp71)){
							HX_STACK_LINE(259)
							bool tmp72 = (textField->__selectionIndex == textField->__caretIndex);		HX_STACK_VAR(tmp72,"tmp72");
							HX_STACK_LINE(259)
							if ((tmp72)){
								HX_STACK_LINE(261)
								bool tmp73 = textField->__showCursor;		HX_STACK_VAR(tmp73,"tmp73");
								HX_STACK_LINE(261)
								bool tmp74 = tmp73;		HX_STACK_VAR(tmp74,"tmp74");
								HX_STACK_LINE(261)
								bool tmp75;		HX_STACK_VAR(tmp75,"tmp75");
								HX_STACK_LINE(261)
								if ((tmp74)){
									HX_STACK_LINE(261)
									tmp75 = (group->startIndex <= textField->__caretIndex);
								}
								else{
									HX_STACK_LINE(261)
									tmp75 = false;
								}
								HX_STACK_LINE(261)
								bool tmp76;		HX_STACK_VAR(tmp76,"tmp76");
								HX_STACK_LINE(261)
								if ((tmp75)){
									HX_STACK_LINE(261)
									tmp76 = (group->endIndex >= textField->__caretIndex);
								}
								else{
									HX_STACK_LINE(261)
									tmp76 = false;
								}
								HX_STACK_LINE(261)
								if ((tmp76)){
									HX_STACK_LINE(263)
									advance = ((Float)0.0);
									HX_STACK_LINE(265)
									{
										HX_STACK_LINE(265)
										int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
										HX_STACK_LINE(265)
										int tmp77 = (textField->__caretIndex - group->startIndex);		HX_STACK_VAR(tmp77,"tmp77");
										HX_STACK_LINE(265)
										int _g2 = tmp77;		HX_STACK_VAR(_g2,"_g2");
										HX_STACK_LINE(265)
										while((true)){
											HX_STACK_LINE(265)
											bool tmp78 = (_g3 < _g2);		HX_STACK_VAR(tmp78,"tmp78");
											HX_STACK_LINE(265)
											bool tmp79 = !(tmp78);		HX_STACK_VAR(tmp79,"tmp79");
											HX_STACK_LINE(265)
											if ((tmp79)){
												HX_STACK_LINE(265)
												break;
											}
											HX_STACK_LINE(265)
											int tmp80 = (_g3)++;		HX_STACK_VAR(tmp80,"tmp80");
											HX_STACK_LINE(265)
											int i = tmp80;		HX_STACK_VAR(i,"i");
											HX_STACK_LINE(267)
											int tmp81 = group->advances->length;		HX_STACK_VAR(tmp81,"tmp81");
											HX_STACK_LINE(267)
											int tmp82 = i;		HX_STACK_VAR(tmp82,"tmp82");
											HX_STACK_LINE(267)
											bool tmp83 = (tmp81 <= tmp82);		HX_STACK_VAR(tmp83,"tmp83");
											HX_STACK_LINE(267)
											if ((tmp83)){
												HX_STACK_LINE(267)
												break;
											}
											HX_STACK_LINE(268)
											Float tmp84 = group->advances->__get(i);		HX_STACK_VAR(tmp84,"tmp84");
											HX_STACK_LINE(268)
											hx::AddEq(advance,tmp84);
										}
									}
									HX_STACK_LINE(272)
									Float tmp77 = (group->offsetX + advance);		HX_STACK_VAR(tmp77,"tmp77");
									HX_STACK_LINE(272)
									int tmp78 = ::Math_obj::floor(tmp77);		HX_STACK_VAR(tmp78,"tmp78");
									HX_STACK_LINE(272)
									Float tmp79 = (tmp78 + ((Float)0.5));		HX_STACK_VAR(tmp79,"tmp79");
									HX_STACK_LINE(272)
									Float tmp80 = (group->offsetY + ((Float)0.5));		HX_STACK_VAR(tmp80,"tmp80");
									HX_STACK_LINE(272)
									cairo->moveTo(tmp79,tmp80);
									HX_STACK_LINE(273)
									cairo->set_lineWidth((int)1);
									HX_STACK_LINE(274)
									Float tmp81 = (group->offsetX + advance);		HX_STACK_VAR(tmp81,"tmp81");
									HX_STACK_LINE(274)
									int tmp82 = ::Math_obj::floor(tmp81);		HX_STACK_VAR(tmp82,"tmp82");
									HX_STACK_LINE(274)
									Float tmp83 = (tmp82 + ((Float)0.5));		HX_STACK_VAR(tmp83,"tmp83");
									HX_STACK_LINE(274)
									Float tmp84 = (group->offsetY + group->height);		HX_STACK_VAR(tmp84,"tmp84");
									HX_STACK_LINE(274)
									Float tmp85 = (tmp84 - (int)1);		HX_STACK_VAR(tmp85,"tmp85");
									HX_STACK_LINE(274)
									cairo->lineTo(tmp83,tmp85);
									HX_STACK_LINE(275)
									cairo->stroke();
								}
							}
							else{
								HX_STACK_LINE(279)
								bool tmp73 = (group->startIndex <= textField->__caretIndex);		HX_STACK_VAR(tmp73,"tmp73");
								HX_STACK_LINE(279)
								bool tmp74 = tmp73;		HX_STACK_VAR(tmp74,"tmp74");
								HX_STACK_LINE(279)
								bool tmp75;		HX_STACK_VAR(tmp75,"tmp75");
								HX_STACK_LINE(279)
								if ((tmp74)){
									HX_STACK_LINE(279)
									tmp75 = (group->endIndex >= textField->__caretIndex);
								}
								else{
									HX_STACK_LINE(279)
									tmp75 = false;
								}
								HX_STACK_LINE(279)
								bool tmp76 = !(tmp75);		HX_STACK_VAR(tmp76,"tmp76");
								HX_STACK_LINE(279)
								bool tmp77;		HX_STACK_VAR(tmp77,"tmp77");
								HX_STACK_LINE(279)
								if ((tmp76)){
									HX_STACK_LINE(279)
									bool tmp78 = (group->startIndex <= textField->__selectionIndex);		HX_STACK_VAR(tmp78,"tmp78");
									HX_STACK_LINE(279)
									bool tmp79 = tmp78;		HX_STACK_VAR(tmp79,"tmp79");
									HX_STACK_LINE(279)
									bool tmp80 = tmp79;		HX_STACK_VAR(tmp80,"tmp80");
									HX_STACK_LINE(279)
									if ((tmp80)){
										HX_STACK_LINE(279)
										tmp77 = (group->endIndex >= textField->__selectionIndex);
									}
									else{
										HX_STACK_LINE(279)
										tmp77 = false;
									}
								}
								else{
									HX_STACK_LINE(279)
									tmp77 = true;
								}
								HX_STACK_LINE(279)
								if ((tmp77)){
									HX_STACK_LINE(281)
									int tmp78 = textField->__selectionIndex;		HX_STACK_VAR(tmp78,"tmp78");
									HX_STACK_LINE(281)
									int tmp79 = textField->__caretIndex;		HX_STACK_VAR(tmp79,"tmp79");
									HX_STACK_LINE(281)
									Float tmp80 = ::Math_obj::min(tmp78,tmp79);		HX_STACK_VAR(tmp80,"tmp80");
									HX_STACK_LINE(281)
									int tmp81 = ::Std_obj::_int(tmp80);		HX_STACK_VAR(tmp81,"tmp81");
									HX_STACK_LINE(281)
									int selectionStart = tmp81;		HX_STACK_VAR(selectionStart,"selectionStart");
									HX_STACK_LINE(282)
									int tmp82 = textField->__selectionIndex;		HX_STACK_VAR(tmp82,"tmp82");
									HX_STACK_LINE(282)
									int tmp83 = textField->__caretIndex;		HX_STACK_VAR(tmp83,"tmp83");
									HX_STACK_LINE(282)
									Float tmp84 = ::Math_obj::max(tmp82,tmp83);		HX_STACK_VAR(tmp84,"tmp84");
									HX_STACK_LINE(282)
									int tmp85 = ::Std_obj::_int(tmp84);		HX_STACK_VAR(tmp85,"tmp85");
									HX_STACK_LINE(282)
									int selectionEnd = tmp85;		HX_STACK_VAR(selectionEnd,"selectionEnd");
									HX_STACK_LINE(284)
									bool tmp86 = (group->startIndex > selectionStart);		HX_STACK_VAR(tmp86,"tmp86");
									HX_STACK_LINE(284)
									if ((tmp86)){
										HX_STACK_LINE(286)
										selectionStart = group->startIndex;
									}
									HX_STACK_LINE(290)
									bool tmp87 = (group->endIndex < selectionEnd);		HX_STACK_VAR(tmp87,"tmp87");
									HX_STACK_LINE(290)
									if ((tmp87)){
										HX_STACK_LINE(292)
										selectionEnd = group->endIndex;
									}
									HX_STACK_LINE(296)
									::openfl::geom::Rectangle start;		HX_STACK_VAR(start,"start");
									HX_STACK_LINE(296)
									::openfl::geom::Rectangle end;		HX_STACK_VAR(end,"end");
									HX_STACK_LINE(298)
									int tmp88 = selectionStart;		HX_STACK_VAR(tmp88,"tmp88");
									HX_STACK_LINE(298)
									::openfl::geom::Rectangle tmp89 = textField->getCharBoundaries(tmp88);		HX_STACK_VAR(tmp89,"tmp89");
									HX_STACK_LINE(298)
									start = tmp89;
									HX_STACK_LINE(300)
									int tmp90 = selectionEnd;		HX_STACK_VAR(tmp90,"tmp90");
									HX_STACK_LINE(300)
									int tmp91 = textEngine->text.length;		HX_STACK_VAR(tmp91,"tmp91");
									HX_STACK_LINE(300)
									bool tmp92 = (tmp90 >= tmp91);		HX_STACK_VAR(tmp92,"tmp92");
									HX_STACK_LINE(300)
									if ((tmp92)){
										HX_STACK_LINE(302)
										int tmp93 = textEngine->text.length;		HX_STACK_VAR(tmp93,"tmp93");
										HX_STACK_LINE(302)
										int tmp94 = (tmp93 - (int)1);		HX_STACK_VAR(tmp94,"tmp94");
										HX_STACK_LINE(302)
										::openfl::geom::Rectangle tmp95 = textField->getCharBoundaries(tmp94);		HX_STACK_VAR(tmp95,"tmp95");
										HX_STACK_LINE(302)
										end = tmp95;
										HX_STACK_LINE(303)
										Float tmp96 = (end->width + (int)2);		HX_STACK_VAR(tmp96,"tmp96");
										HX_STACK_LINE(303)
										hx::AddEq(end->x,tmp96);
									}
									else{
										HX_STACK_LINE(307)
										int tmp93 = selectionEnd;		HX_STACK_VAR(tmp93,"tmp93");
										HX_STACK_LINE(307)
										::openfl::geom::Rectangle tmp94 = textField->getCharBoundaries(tmp93);		HX_STACK_VAR(tmp94,"tmp94");
										HX_STACK_LINE(307)
										end = tmp94;
									}
									HX_STACK_LINE(311)
									bool tmp93 = (start != null());		HX_STACK_VAR(tmp93,"tmp93");
									HX_STACK_LINE(311)
									bool tmp94;		HX_STACK_VAR(tmp94,"tmp94");
									HX_STACK_LINE(311)
									if ((tmp93)){
										HX_STACK_LINE(311)
										tmp94 = (end != null());
									}
									else{
										HX_STACK_LINE(311)
										tmp94 = false;
									}
									HX_STACK_LINE(311)
									if ((tmp94)){
										HX_STACK_LINE(313)
										cairo->setSourceRGB((int)0,(int)0,(int)0);
										HX_STACK_LINE(314)
										Float tmp95 = start->x;		HX_STACK_VAR(tmp95,"tmp95");
										HX_STACK_LINE(314)
										Float tmp96 = start->y;		HX_STACK_VAR(tmp96,"tmp96");
										HX_STACK_LINE(314)
										Float tmp97 = (end->x - start->x);		HX_STACK_VAR(tmp97,"tmp97");
										HX_STACK_LINE(314)
										Float tmp98 = group->height;		HX_STACK_VAR(tmp98,"tmp98");
										HX_STACK_LINE(314)
										cairo->rectangle(tmp95,tmp96,tmp97,tmp98);
										HX_STACK_LINE(315)
										cairo->fill();
										HX_STACK_LINE(316)
										cairo->setSourceRGB((int)1,(int)1,(int)1);
										HX_STACK_LINE(320)
										Float tmp99 = (scrollX + start->x);		HX_STACK_VAR(tmp99,"tmp99");
										HX_STACK_LINE(320)
										Float tmp100 = (group->offsetY + group->ascent);		HX_STACK_VAR(tmp100,"tmp100");
										HX_STACK_LINE(320)
										Float tmp101 = scrollY;		HX_STACK_VAR(tmp101,"tmp101");
										HX_STACK_LINE(320)
										Float tmp102 = (tmp100 + tmp101);		HX_STACK_VAR(tmp102,"tmp102");
										HX_STACK_LINE(320)
										cairo->moveTo(tmp99,tmp102);
										HX_STACK_LINE(321)
										int tmp103 = selectionStart;		HX_STACK_VAR(tmp103,"tmp103");
										HX_STACK_LINE(321)
										int tmp104 = selectionEnd;		HX_STACK_VAR(tmp104,"tmp104");
										HX_STACK_LINE(321)
										::String tmp105 = text.substring(tmp103,tmp104);		HX_STACK_VAR(tmp105,"tmp105");
										HX_STACK_LINE(321)
										cairo->showText(tmp105);
									}
								}
							}
						}
					}
				}
			}
		}
		HX_STACK_LINE(335)
		::lime::graphics::Image tmp16 = graphics->__bitmap->image;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(335)
		tmp16->dirty = true;
		HX_STACK_LINE(336)
		::lime::graphics::Image tmp17 = graphics->__bitmap->image;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(336)
		(tmp17->version)++;
		HX_STACK_LINE(337)
		textField->__dirty = false;
		HX_STACK_LINE(338)
		graphics->set___dirty(false);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(CairoTextField_obj,render,(void))


CairoTextField_obj::CairoTextField_obj()
{
}

bool CairoTextField_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
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
	HX_MARK_MEMBER_NAME(CairoTextField_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CairoTextField_obj::__mClass,"__mClass");
};

#endif

hx::Class CairoTextField_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("render","\x56","\x6b","\x29","\x05"),
	::String(null()) };

void CairoTextField_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.renderer.cairo.CairoTextField","\x46","\x1d","\x84","\xa5");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &CairoTextField_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< CairoTextField_obj >;
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
