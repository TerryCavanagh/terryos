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
#ifndef INCLUDED_lime_graphics_cairo__CairoImageSurface_CairoImageSurface_Impl_
#include <lime/graphics/cairo/_CairoImageSurface/CairoImageSurface_Impl_.h>
#endif
#ifndef INCLUDED_lime_graphics_cairo__CairoPattern_CairoPattern_Impl_
#include <lime/graphics/cairo/_CairoPattern/CairoPattern_Impl_.h>
#endif
#ifndef INCLUDED_lime_math_Matrix3
#include <lime/math/Matrix3.h>
#endif
#ifndef INCLUDED_lime_math_Vector2
#include <lime/math/Vector2.h>
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
#ifndef INCLUDED_openfl__internal_renderer_DrawCommandBuffer
#include <openfl/_internal/renderer/DrawCommandBuffer.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_DrawCommandReader
#include <openfl/_internal/renderer/DrawCommandReader.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_DrawCommandType
#include <openfl/_internal/renderer/DrawCommandType.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_RenderSession
#include <openfl/_internal/renderer/RenderSession.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_cairo_CairoGraphics
#include <openfl/_internal/renderer/cairo/CairoGraphics.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_Graphics
#include <openfl/display/Graphics.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl_geom_Point
#include <openfl/geom/Point.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
namespace openfl{
namespace _internal{
namespace renderer{
namespace cairo{

Void CairoGraphics_obj::__construct()
{
	return null();
}

//CairoGraphics_obj::~CairoGraphics_obj() { }

Dynamic CairoGraphics_obj::__CreateEmpty() { return  new CairoGraphics_obj; }
hx::ObjectPtr< CairoGraphics_obj > CairoGraphics_obj::__new()
{  hx::ObjectPtr< CairoGraphics_obj > _result_ = new CairoGraphics_obj();
	_result_->__construct();
	return _result_;}

Dynamic CairoGraphics_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CairoGraphics_obj > _result_ = new CairoGraphics_obj();
	_result_->__construct();
	return _result_;}

Float CairoGraphics_obj::SIN45;

Float CairoGraphics_obj::TAN22;

::openfl::display::BitmapData CairoGraphics_obj::bitmapFill;

bool CairoGraphics_obj::bitmapRepeat;

::openfl::geom::Rectangle CairoGraphics_obj::bounds;

::lime::graphics::cairo::Cairo CairoGraphics_obj::cairo;

::openfl::_internal::renderer::DrawCommandBuffer CairoGraphics_obj::fillCommands;

Dynamic CairoGraphics_obj::fillPattern;

::openfl::geom::Matrix CairoGraphics_obj::fillPatternMatrix;

::openfl::display::Graphics CairoGraphics_obj::graphics;

bool CairoGraphics_obj::hasFill;

bool CairoGraphics_obj::hasStroke;

bool CairoGraphics_obj::hitTesting;

::openfl::geom::Matrix CairoGraphics_obj::inversePendingMatrix;

::openfl::geom::Matrix CairoGraphics_obj::pendingMatrix;

::openfl::_internal::renderer::DrawCommandBuffer CairoGraphics_obj::strokeCommands;

Dynamic CairoGraphics_obj::strokePattern;

Void CairoGraphics_obj::closePath( hx::Null< bool >  __o_strokeBefore){
bool strokeBefore = __o_strokeBefore.Default(false);
	HX_STACK_FRAME("openfl._internal.renderer.cairo.CairoGraphics","closePath",0x6dffa481,"openfl._internal.renderer.cairo.CairoGraphics.closePath","openfl/_internal/renderer/cairo/CairoGraphics.hx",57,0x744ae94c)
	HX_STACK_ARG(strokeBefore,"strokeBefore")
{
		HX_STACK_LINE(59)
		Dynamic tmp = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokePattern;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(59)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(59)
		if ((tmp1)){
			HX_STACK_LINE(61)
			return null();
		}
		HX_STACK_LINE(65)
		bool tmp2 = strokeBefore;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(65)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(65)
		if ((tmp3)){
			HX_STACK_LINE(67)
			::lime::graphics::cairo::Cairo tmp4 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(67)
			tmp4->closePath();
		}
		HX_STACK_LINE(71)
		::lime::graphics::cairo::Cairo tmp4 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(71)
		Dynamic tmp5 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokePattern;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(71)
		tmp4->set_source(tmp5);
		HX_STACK_LINE(72)
		bool tmp6 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::hitTesting;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(72)
		bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(72)
		if ((tmp7)){
			HX_STACK_LINE(72)
			::lime::graphics::cairo::Cairo tmp8 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(72)
			tmp8->strokePreserve();
		}
		HX_STACK_LINE(74)
		bool tmp8 = strokeBefore;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(74)
		if ((tmp8)){
			HX_STACK_LINE(76)
			::lime::graphics::cairo::Cairo tmp9 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(76)
			tmp9->closePath();
		}
		HX_STACK_LINE(80)
		::lime::graphics::cairo::Cairo tmp9 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(80)
		tmp9->newPath();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CairoGraphics_obj,closePath,(void))

Dynamic CairoGraphics_obj::createGradientPattern( Dynamic type,cpp::ArrayBase colors,cpp::ArrayBase alphas,cpp::ArrayBase ratios,::openfl::geom::Matrix matrix,Dynamic spreadMethod,Dynamic interpolationMethod,Float focalPointRatio){
	HX_STACK_FRAME("openfl._internal.renderer.cairo.CairoGraphics","createGradientPattern",0x9888a3a8,"openfl._internal.renderer.cairo.CairoGraphics.createGradientPattern","openfl/_internal/renderer/cairo/CairoGraphics.hx",85,0x744ae94c)
	HX_STACK_ARG(type,"type")
	HX_STACK_ARG(colors,"colors")
	HX_STACK_ARG(alphas,"alphas")
	HX_STACK_ARG(ratios,"ratios")
	HX_STACK_ARG(matrix,"matrix")
	HX_STACK_ARG(spreadMethod,"spreadMethod")
	HX_STACK_ARG(interpolationMethod,"interpolationMethod")
	HX_STACK_ARG(focalPointRatio,"focalPointRatio")
	HX_STACK_LINE(87)
	Dynamic pattern = null();		HX_STACK_VAR(pattern,"pattern");
	HX_STACK_LINE(89)
	Dynamic tmp = type;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(89)
	switch( (int)(tmp)){
		case (int)1: {
			HX_STACK_LINE(93)
			bool tmp1 = (matrix == null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(93)
			if ((tmp1)){
				HX_STACK_LINE(93)
				::openfl::geom::Matrix tmp2 = ::openfl::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(93)
				matrix = tmp2;
			}
			HX_STACK_LINE(95)
			::openfl::geom::Point tmp2 = ::openfl::geom::Point_obj::__new(((Float)1638.4),(int)0);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(95)
			::openfl::geom::Point tmp3 = matrix->transformPoint(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(95)
			::openfl::geom::Point point = tmp3;		HX_STACK_VAR(point,"point");
			HX_STACK_LINE(97)
			Float tmp4 = matrix->tx;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(97)
			::openfl::display::Graphics tmp5 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::graphics;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(97)
			Float tmp6 = tmp5->__bounds->x;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(97)
			Float tmp7 = (tmp4 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(97)
			Float x = tmp7;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(98)
			Float tmp8 = matrix->ty;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(98)
			::openfl::display::Graphics tmp9 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::graphics;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(98)
			Float tmp10 = tmp9->__bounds->y;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(98)
			Float tmp11 = (tmp8 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(98)
			Float y = tmp11;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(100)
			Float tmp12 = x;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(100)
			Float tmp13 = y;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(100)
			Float tmp14 = x;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(100)
			Float tmp15 = y;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(100)
			Float tmp16 = (point->x - matrix->tx);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(100)
			Float tmp17 = (Float(tmp16) / Float((int)2));		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(100)
			Dynamic tmp18 = ::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::createRadial(tmp12,tmp13,(int)0,tmp14,tmp15,tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(100)
			pattern = tmp18;
		}
		;break;
		case (int)0: {
			HX_STACK_LINE(104)
			bool tmp1 = (matrix == null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(104)
			if ((tmp1)){
				HX_STACK_LINE(104)
				::openfl::geom::Matrix tmp2 = ::openfl::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(104)
				matrix = tmp2;
			}
			HX_STACK_LINE(106)
			::openfl::geom::Point tmp2 = ::openfl::geom::Point_obj::__new(((Float)-819.2),(int)0);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(106)
			::openfl::geom::Point tmp3 = matrix->transformPoint(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(106)
			::openfl::geom::Point point1 = tmp3;		HX_STACK_VAR(point1,"point1");
			HX_STACK_LINE(107)
			::openfl::geom::Point tmp4 = ::openfl::geom::Point_obj::__new(((Float)819.2),(int)0);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(107)
			::openfl::geom::Point tmp5 = matrix->transformPoint(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(107)
			::openfl::geom::Point point2 = tmp5;		HX_STACK_VAR(point2,"point2");
			HX_STACK_LINE(109)
			::openfl::display::Graphics tmp6 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::graphics;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(109)
			Float tmp7 = tmp6->__bounds->x;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(109)
			hx::AddEq(point1->x,tmp7);
			HX_STACK_LINE(110)
			::openfl::display::Graphics tmp8 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::graphics;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(110)
			Float tmp9 = tmp8->__bounds->x;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(110)
			hx::AddEq(point2->x,tmp9);
			HX_STACK_LINE(111)
			::openfl::display::Graphics tmp10 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::graphics;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(111)
			Float tmp11 = tmp10->__bounds->y;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(111)
			hx::AddEq(point1->y,tmp11);
			HX_STACK_LINE(112)
			::openfl::display::Graphics tmp12 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::graphics;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(112)
			Float tmp13 = tmp12->__bounds->y;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(112)
			hx::AddEq(point2->y,tmp13);
			HX_STACK_LINE(114)
			Float tmp14 = point1->x;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(114)
			Float tmp15 = point1->y;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(114)
			Float tmp16 = point2->x;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(114)
			Float tmp17 = point2->y;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(114)
			Dynamic tmp18 = ::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::createLinear(tmp14,tmp15,tmp16,tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(114)
			pattern = tmp18;
		}
		;break;
	}
	HX_STACK_LINE(118)
	{
		HX_STACK_LINE(118)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(118)
		int _g = colors->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(118)
		while((true)){
			HX_STACK_LINE(118)
			bool tmp1 = (_g1 < _g);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(118)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(118)
			if ((tmp2)){
				HX_STACK_LINE(118)
				break;
			}
			HX_STACK_LINE(118)
			int tmp3 = (_g1)++;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(118)
			int i = tmp3;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(120)
			Dynamic tmp4 = colors->__GetItem(i);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(120)
			int rgb = tmp4;		HX_STACK_VAR(rgb,"rgb");
			HX_STACK_LINE(121)
			Dynamic tmp5 = alphas->__GetItem(i);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(121)
			Float alpha = tmp5;		HX_STACK_VAR(alpha,"alpha");
			HX_STACK_LINE(122)
			int tmp6 = (int(rgb) & int((int)16711680));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(122)
			int tmp7 = hx::UShr(tmp6,(int)16);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(122)
			Float tmp8 = (Float(tmp7) / Float((int)255));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(122)
			Float r = tmp8;		HX_STACK_VAR(r,"r");
			HX_STACK_LINE(123)
			int tmp9 = (int(rgb) & int((int)65280));		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(123)
			int tmp10 = hx::UShr(tmp9,(int)8);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(123)
			Float tmp11 = (Float(tmp10) / Float((int)255));		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(123)
			Float g = tmp11;		HX_STACK_VAR(g,"g");
			HX_STACK_LINE(124)
			int tmp12 = (int(rgb) & int((int)255));		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(124)
			Float tmp13 = (Float(tmp12) / Float((int)255));		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(124)
			Float b = tmp13;		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(126)
			Dynamic tmp14 = ratios->__GetItem(i);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(126)
			Float tmp15 = (Float(tmp14) / Float((int)255));		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(126)
			Float ratio = tmp15;		HX_STACK_VAR(ratio,"ratio");
			HX_STACK_LINE(127)
			bool tmp16 = (ratio < (int)0);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(127)
			if ((tmp16)){
				HX_STACK_LINE(127)
				ratio = (int)0;
			}
			HX_STACK_LINE(128)
			bool tmp17 = (ratio > (int)1);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(128)
			if ((tmp17)){
				HX_STACK_LINE(128)
				ratio = (int)1;
			}
			HX_STACK_LINE(130)
			Dynamic tmp18 = pattern;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(130)
			Float tmp19 = ratio;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(130)
			Float tmp20 = r;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(130)
			Float tmp21 = g;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(130)
			Float tmp22 = b;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(130)
			Float tmp23 = alpha;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(130)
			::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::addColorStopRGBA(tmp18,tmp19,tmp20,tmp21,tmp22,tmp23);
		}
	}
	HX_STACK_LINE(134)
	Dynamic tmp1 = pattern;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(134)
	::lime::math::Matrix3 tmp2 = ::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::get_matrix(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(134)
	::lime::math::Matrix3 mat = tmp2;		HX_STACK_VAR(mat,"mat");
	HX_STACK_LINE(136)
	::openfl::geom::Rectangle tmp3 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::bounds;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(136)
	mat->tx = tmp3->x;
	HX_STACK_LINE(137)
	::openfl::geom::Rectangle tmp4 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::bounds;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(137)
	mat->ty = tmp4->y;
	HX_STACK_LINE(139)
	Dynamic tmp5 = pattern;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(139)
	::lime::math::Matrix3 tmp6 = mat;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(139)
	::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::set_matrix(tmp5,tmp6);
	HX_STACK_LINE(141)
	Dynamic tmp7 = pattern;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(141)
	return tmp7;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC8(CairoGraphics_obj,createGradientPattern,return )

Dynamic CairoGraphics_obj::createImagePattern( ::openfl::display::BitmapData bitmapFill,::openfl::geom::Matrix matrix,bool bitmapRepeat){
	HX_STACK_FRAME("openfl._internal.renderer.cairo.CairoGraphics","createImagePattern",0x42487dcd,"openfl._internal.renderer.cairo.CairoGraphics.createImagePattern","openfl/_internal/renderer/cairo/CairoGraphics.hx",146,0x744ae94c)
	HX_STACK_ARG(bitmapFill,"bitmapFill")
	HX_STACK_ARG(matrix,"matrix")
	HX_STACK_ARG(bitmapRepeat,"bitmapRepeat")
	HX_STACK_LINE(148)
	Dynamic tmp = bitmapFill->getSurface();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(148)
	Dynamic tmp1 = ::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::createForSurface(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(148)
	Dynamic pattern = tmp1;		HX_STACK_VAR(pattern,"pattern");
	HX_STACK_LINE(150)
	bool tmp2 = bitmapRepeat;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(150)
	if ((tmp2)){
		HX_STACK_LINE(152)
		Dynamic tmp3 = pattern;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(152)
		::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::set_extend(tmp3,(int)1);
	}
	HX_STACK_LINE(156)
	::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillPatternMatrix = matrix;
	HX_STACK_LINE(158)
	Dynamic tmp3 = pattern;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(158)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(CairoGraphics_obj,createImagePattern,return )

Void CairoGraphics_obj::drawRoundRect( Float x,Float y,Float width,Float height,Float ellipseWidth,Dynamic ellipseHeight){
{
		HX_STACK_FRAME("openfl._internal.renderer.cairo.CairoGraphics","drawRoundRect",0xa42fd4f2,"openfl._internal.renderer.cairo.CairoGraphics.drawRoundRect","openfl/_internal/renderer/cairo/CairoGraphics.hx",163,0x744ae94c)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_ARG(ellipseWidth,"ellipseWidth")
		HX_STACK_ARG(ellipseHeight,"ellipseHeight")
		HX_STACK_LINE(165)
		bool tmp = (ellipseHeight == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(165)
		if ((tmp)){
			HX_STACK_LINE(165)
			ellipseHeight = ellipseWidth;
		}
		HX_STACK_LINE(167)
		hx::MultEq(ellipseWidth,((Float)0.5));
		HX_STACK_LINE(168)
		hx::MultEq(ellipseHeight,((Float)0.5));
		HX_STACK_LINE(170)
		Float tmp1 = ellipseWidth;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(170)
		Float tmp2 = (Float(width) / Float((int)2));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(170)
		bool tmp3 = (tmp1 > tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(170)
		if ((tmp3)){
			HX_STACK_LINE(170)
			Float tmp4 = (Float(width) / Float((int)2));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(170)
			ellipseWidth = tmp4;
		}
		HX_STACK_LINE(171)
		Dynamic tmp4 = ellipseHeight;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(171)
		Float tmp5 = (Float(height) / Float((int)2));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(171)
		bool tmp6 = (tmp4 > tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(171)
		if ((tmp6)){
			HX_STACK_LINE(171)
			Float tmp7 = (Float(height) / Float((int)2));		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(171)
			ellipseHeight = tmp7;
		}
		HX_STACK_LINE(173)
		Float tmp7 = (x + width);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(173)
		Float xe = tmp7;		HX_STACK_VAR(xe,"xe");
		HX_STACK_LINE(174)
		Float tmp8 = (y + height);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(174)
		Float ye = tmp8;		HX_STACK_VAR(ye,"ye");
		HX_STACK_LINE(175)
		Float tmp9 = ellipseWidth;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(175)
		Float tmp10 = -(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(175)
		Float tmp11 = ellipseWidth;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(175)
		Float tmp12 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::SIN45;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(175)
		Float tmp13 = (tmp11 * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(175)
		Float tmp14 = (tmp10 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(175)
		Float cx1 = tmp14;		HX_STACK_VAR(cx1,"cx1");
		HX_STACK_LINE(176)
		Float tmp15 = ellipseWidth;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(176)
		Float tmp16 = -(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(176)
		Float tmp17 = ellipseWidth;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(176)
		Float tmp18 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::TAN22;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(176)
		Float tmp19 = (tmp17 * tmp18);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(176)
		Float tmp20 = (tmp16 + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(176)
		Float cx2 = tmp20;		HX_STACK_VAR(cx2,"cx2");
		HX_STACK_LINE(177)
		Dynamic tmp21 = ellipseHeight;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(177)
		Float tmp22 = -(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(177)
		Dynamic tmp23 = ellipseHeight;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(177)
		Float tmp24 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::SIN45;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(177)
		Float tmp25 = (tmp23 * tmp24);		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(177)
		Float tmp26 = (tmp22 + tmp25);		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(177)
		Float cy1 = tmp26;		HX_STACK_VAR(cy1,"cy1");
		HX_STACK_LINE(178)
		Dynamic tmp27 = ellipseHeight;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(178)
		Float tmp28 = -(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(178)
		Dynamic tmp29 = ellipseHeight;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(178)
		Float tmp30 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::TAN22;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(178)
		Float tmp31 = (tmp29 * tmp30);		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(178)
		Float tmp32 = (tmp28 + tmp31);		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(178)
		Float cy2 = tmp32;		HX_STACK_VAR(cy2,"cy2");
		HX_STACK_LINE(180)
		::lime::graphics::cairo::Cairo tmp33 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(180)
		Float tmp34 = xe;		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(180)
		Float tmp35 = (ye - ellipseHeight);		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(180)
		tmp33->moveTo(tmp34,tmp35);
		HX_STACK_LINE(181)
		Float tmp36 = xe;		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(181)
		Float tmp37 = (ye + cy2);		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(181)
		Float tmp38 = (xe + cx1);		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(181)
		Float tmp39 = (ye + cy1);		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(181)
		::openfl::_internal::renderer::cairo::CairoGraphics_obj::quadraticCurveTo(tmp36,tmp37,tmp38,tmp39);
		HX_STACK_LINE(182)
		Float tmp40 = (xe + cx2);		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(182)
		Float tmp41 = ye;		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(182)
		Float tmp42 = (xe - ellipseWidth);		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(182)
		Float tmp43 = ye;		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(182)
		::openfl::_internal::renderer::cairo::CairoGraphics_obj::quadraticCurveTo(tmp40,tmp41,tmp42,tmp43);
		HX_STACK_LINE(183)
		::lime::graphics::cairo::Cairo tmp44 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(183)
		Float tmp45 = (x + ellipseWidth);		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(183)
		Float tmp46 = ye;		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(183)
		tmp44->lineTo(tmp45,tmp46);
		HX_STACK_LINE(184)
		Float tmp47 = (x - cx2);		HX_STACK_VAR(tmp47,"tmp47");
		HX_STACK_LINE(184)
		Float tmp48 = ye;		HX_STACK_VAR(tmp48,"tmp48");
		HX_STACK_LINE(184)
		Float tmp49 = (x - cx1);		HX_STACK_VAR(tmp49,"tmp49");
		HX_STACK_LINE(184)
		Float tmp50 = (ye + cy1);		HX_STACK_VAR(tmp50,"tmp50");
		HX_STACK_LINE(184)
		::openfl::_internal::renderer::cairo::CairoGraphics_obj::quadraticCurveTo(tmp47,tmp48,tmp49,tmp50);
		HX_STACK_LINE(185)
		Float tmp51 = x;		HX_STACK_VAR(tmp51,"tmp51");
		HX_STACK_LINE(185)
		Float tmp52 = (ye + cy2);		HX_STACK_VAR(tmp52,"tmp52");
		HX_STACK_LINE(185)
		Float tmp53 = x;		HX_STACK_VAR(tmp53,"tmp53");
		HX_STACK_LINE(185)
		Float tmp54 = (ye - ellipseHeight);		HX_STACK_VAR(tmp54,"tmp54");
		HX_STACK_LINE(185)
		::openfl::_internal::renderer::cairo::CairoGraphics_obj::quadraticCurveTo(tmp51,tmp52,tmp53,tmp54);
		HX_STACK_LINE(186)
		::lime::graphics::cairo::Cairo tmp55 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp55,"tmp55");
		HX_STACK_LINE(186)
		Float tmp56 = x;		HX_STACK_VAR(tmp56,"tmp56");
		HX_STACK_LINE(186)
		Float tmp57 = (y + ellipseHeight);		HX_STACK_VAR(tmp57,"tmp57");
		HX_STACK_LINE(186)
		tmp55->lineTo(tmp56,tmp57);
		HX_STACK_LINE(187)
		Float tmp58 = x;		HX_STACK_VAR(tmp58,"tmp58");
		HX_STACK_LINE(187)
		Float tmp59 = (y - cy2);		HX_STACK_VAR(tmp59,"tmp59");
		HX_STACK_LINE(187)
		Float tmp60 = (x - cx1);		HX_STACK_VAR(tmp60,"tmp60");
		HX_STACK_LINE(187)
		Float tmp61 = (y - cy1);		HX_STACK_VAR(tmp61,"tmp61");
		HX_STACK_LINE(187)
		::openfl::_internal::renderer::cairo::CairoGraphics_obj::quadraticCurveTo(tmp58,tmp59,tmp60,tmp61);
		HX_STACK_LINE(188)
		Float tmp62 = (x - cx2);		HX_STACK_VAR(tmp62,"tmp62");
		HX_STACK_LINE(188)
		Float tmp63 = y;		HX_STACK_VAR(tmp63,"tmp63");
		HX_STACK_LINE(188)
		Float tmp64 = (x + ellipseWidth);		HX_STACK_VAR(tmp64,"tmp64");
		HX_STACK_LINE(188)
		Float tmp65 = y;		HX_STACK_VAR(tmp65,"tmp65");
		HX_STACK_LINE(188)
		::openfl::_internal::renderer::cairo::CairoGraphics_obj::quadraticCurveTo(tmp62,tmp63,tmp64,tmp65);
		HX_STACK_LINE(189)
		::lime::graphics::cairo::Cairo tmp66 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp66,"tmp66");
		HX_STACK_LINE(189)
		Float tmp67 = (xe - ellipseWidth);		HX_STACK_VAR(tmp67,"tmp67");
		HX_STACK_LINE(189)
		Float tmp68 = y;		HX_STACK_VAR(tmp68,"tmp68");
		HX_STACK_LINE(189)
		tmp66->lineTo(tmp67,tmp68);
		HX_STACK_LINE(190)
		Float tmp69 = (xe + cx2);		HX_STACK_VAR(tmp69,"tmp69");
		HX_STACK_LINE(190)
		Float tmp70 = y;		HX_STACK_VAR(tmp70,"tmp70");
		HX_STACK_LINE(190)
		Float tmp71 = (xe + cx1);		HX_STACK_VAR(tmp71,"tmp71");
		HX_STACK_LINE(190)
		Float tmp72 = (y - cy1);		HX_STACK_VAR(tmp72,"tmp72");
		HX_STACK_LINE(190)
		::openfl::_internal::renderer::cairo::CairoGraphics_obj::quadraticCurveTo(tmp69,tmp70,tmp71,tmp72);
		HX_STACK_LINE(191)
		Float tmp73 = xe;		HX_STACK_VAR(tmp73,"tmp73");
		HX_STACK_LINE(191)
		Float tmp74 = (y - cy2);		HX_STACK_VAR(tmp74,"tmp74");
		HX_STACK_LINE(191)
		Float tmp75 = xe;		HX_STACK_VAR(tmp75,"tmp75");
		HX_STACK_LINE(191)
		Float tmp76 = (y + ellipseHeight);		HX_STACK_VAR(tmp76,"tmp76");
		HX_STACK_LINE(191)
		::openfl::_internal::renderer::cairo::CairoGraphics_obj::quadraticCurveTo(tmp73,tmp74,tmp75,tmp76);
		HX_STACK_LINE(192)
		::lime::graphics::cairo::Cairo tmp77 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp77,"tmp77");
		HX_STACK_LINE(192)
		Float tmp78 = xe;		HX_STACK_VAR(tmp78,"tmp78");
		HX_STACK_LINE(192)
		Float tmp79 = (ye - ellipseHeight);		HX_STACK_VAR(tmp79,"tmp79");
		HX_STACK_LINE(192)
		tmp77->lineTo(tmp78,tmp79);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(CairoGraphics_obj,drawRoundRect,(void))

Void CairoGraphics_obj::endFill( ){
{
		HX_STACK_FRAME("openfl._internal.renderer.cairo.CairoGraphics","endFill",0x21233e02,"openfl._internal.renderer.cairo.CairoGraphics.endFill","openfl/_internal/renderer/cairo/CairoGraphics.hx",197,0x744ae94c)
		HX_STACK_LINE(199)
		::lime::graphics::cairo::Cairo tmp = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(199)
		tmp->newPath();
		HX_STACK_LINE(200)
		::openfl::_internal::renderer::DrawCommandBuffer tmp1 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillCommands;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(200)
		::openfl::_internal::renderer::cairo::CairoGraphics_obj::playCommands(tmp1,false);
		HX_STACK_LINE(201)
		::openfl::_internal::renderer::DrawCommandBuffer tmp2 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillCommands;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(201)
		tmp2->clear();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(CairoGraphics_obj,endFill,(void))

Void CairoGraphics_obj::endStroke( ){
{
		HX_STACK_FRAME("openfl._internal.renderer.cairo.CairoGraphics","endStroke",0xaaf640f7,"openfl._internal.renderer.cairo.CairoGraphics.endStroke","openfl/_internal/renderer/cairo/CairoGraphics.hx",206,0x744ae94c)
		HX_STACK_LINE(208)
		::lime::graphics::cairo::Cairo tmp = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(208)
		tmp->newPath();
		HX_STACK_LINE(209)
		::openfl::_internal::renderer::DrawCommandBuffer tmp1 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokeCommands;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(209)
		::openfl::_internal::renderer::cairo::CairoGraphics_obj::playCommands(tmp1,true);
		HX_STACK_LINE(210)
		::lime::graphics::cairo::Cairo tmp2 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(210)
		tmp2->closePath();
		HX_STACK_LINE(211)
		::openfl::_internal::renderer::DrawCommandBuffer tmp3 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokeCommands;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(211)
		tmp3->clear();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(CairoGraphics_obj,endStroke,(void))

bool CairoGraphics_obj::hitTest( ::openfl::display::Graphics graphics,Float x,Float y){
	HX_STACK_FRAME("openfl._internal.renderer.cairo.CairoGraphics","hitTest",0xddc21649,"openfl._internal.renderer.cairo.CairoGraphics.hitTest","openfl/_internal/renderer/cairo/CairoGraphics.hx",216,0x744ae94c)
	HX_STACK_ARG(graphics,"graphics")
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_LINE(219)
	::openfl::_internal::renderer::cairo::CairoGraphics_obj::graphics = graphics;
	HX_STACK_LINE(220)
	::openfl::_internal::renderer::cairo::CairoGraphics_obj::bounds = graphics->__bounds;
	HX_STACK_LINE(222)
	int tmp = graphics->__commands->get_length();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(222)
	bool tmp1 = (tmp == (int)0);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(222)
	bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(222)
	bool tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(222)
	bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(222)
	if ((tmp3)){
		HX_STACK_LINE(222)
		::openfl::geom::Rectangle tmp5 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::bounds;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(222)
		::openfl::geom::Rectangle tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(222)
		::openfl::geom::Rectangle tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(222)
		tmp4 = (tmp7 == null());
	}
	else{
		HX_STACK_LINE(222)
		tmp4 = true;
	}
	HX_STACK_LINE(222)
	bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(222)
	bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(222)
	bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(222)
	if ((tmp6)){
		HX_STACK_LINE(222)
		::openfl::geom::Rectangle tmp8 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::bounds;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(222)
		::openfl::geom::Rectangle tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(222)
		::openfl::geom::Rectangle tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(222)
		Float tmp11 = tmp10->width;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(222)
		tmp7 = (tmp11 == (int)0);
	}
	else{
		HX_STACK_LINE(222)
		tmp7 = true;
	}
	HX_STACK_LINE(222)
	bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(222)
	bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(222)
	bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(222)
	if ((tmp9)){
		HX_STACK_LINE(222)
		::openfl::geom::Rectangle tmp11 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::bounds;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(222)
		::openfl::geom::Rectangle tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(222)
		::openfl::geom::Rectangle tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(222)
		Float tmp14 = tmp13->height;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(222)
		tmp10 = (tmp14 == (int)0);
	}
	else{
		HX_STACK_LINE(222)
		tmp10 = true;
	}
	HX_STACK_LINE(222)
	bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(222)
	bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(222)
	if ((tmp11)){
		HX_STACK_LINE(222)
		::openfl::geom::Rectangle tmp13 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::bounds;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(222)
		::openfl::geom::Rectangle tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(222)
		Float tmp15 = x;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(222)
		Float tmp16 = y;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(222)
		Float tmp17 = tmp15;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(222)
		Float tmp18 = tmp16;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(222)
		bool tmp19 = tmp14->contains(tmp17,tmp18);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(222)
		bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(222)
		bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(222)
		tmp12 = !(tmp21);
	}
	else{
		HX_STACK_LINE(222)
		tmp12 = true;
	}
	HX_STACK_LINE(222)
	if ((tmp12)){
		HX_STACK_LINE(224)
		return false;
	}
	else{
		HX_STACK_LINE(228)
		::openfl::_internal::renderer::cairo::CairoGraphics_obj::hitTesting = true;
		HX_STACK_LINE(230)
		::openfl::geom::Rectangle tmp13 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::bounds;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(230)
		hx::SubEq(x,tmp13->x);
		HX_STACK_LINE(231)
		::openfl::geom::Rectangle tmp14 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::bounds;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(231)
		hx::SubEq(y,tmp14->y);
		HX_STACK_LINE(233)
		bool tmp15 = (graphics->__cairo == null());		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(233)
		if ((tmp15)){
			HX_STACK_LINE(235)
			::openfl::geom::Rectangle tmp16 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::bounds;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(235)
			Float tmp17 = tmp16->width;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(235)
			int tmp18 = ::Math_obj::floor(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(235)
			::openfl::geom::Rectangle tmp19 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::bounds;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(235)
			Float tmp20 = tmp19->height;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(235)
			int tmp21 = ::Math_obj::floor(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(235)
			::openfl::display::BitmapData tmp22 = ::openfl::display::BitmapData_obj::__new(tmp18,tmp21,true,(int)0);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(235)
			::openfl::display::BitmapData bitmap = tmp22;		HX_STACK_VAR(bitmap,"bitmap");
			HX_STACK_LINE(236)
			Dynamic tmp23 = bitmap->getSurface();		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(236)
			Dynamic surface = tmp23;		HX_STACK_VAR(surface,"surface");
			HX_STACK_LINE(237)
			::lime::graphics::cairo::Cairo tmp24 = ::lime::graphics::cairo::Cairo_obj::__new(surface);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(237)
			graphics->__cairo = tmp24;
		}
		HX_STACK_LINE(242)
		::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo = graphics->__cairo;
		HX_STACK_LINE(244)
		::openfl::_internal::renderer::DrawCommandBuffer tmp16 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillCommands;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(244)
		tmp16->clear();
		HX_STACK_LINE(245)
		::openfl::_internal::renderer::DrawCommandBuffer tmp17 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokeCommands;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(245)
		tmp17->clear();
		HX_STACK_LINE(247)
		::openfl::_internal::renderer::cairo::CairoGraphics_obj::hasFill = false;
		HX_STACK_LINE(248)
		::openfl::_internal::renderer::cairo::CairoGraphics_obj::hasStroke = false;
		HX_STACK_LINE(250)
		::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillPattern = null();
		HX_STACK_LINE(251)
		::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokePattern = null();
		HX_STACK_LINE(253)
		::lime::graphics::cairo::Cairo tmp18 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(253)
		tmp18->newPath();
		HX_STACK_LINE(255)
		::openfl::_internal::renderer::DrawCommandReader tmp19 = ::openfl::_internal::renderer::DrawCommandReader_obj::__new(graphics->__commands);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(255)
		::openfl::_internal::renderer::DrawCommandReader data = tmp19;		HX_STACK_VAR(data,"data");
		HX_STACK_LINE(257)
		{
			HX_STACK_LINE(257)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(257)
			Array< ::Dynamic > _g1 = graphics->__commands->types;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(257)
			while((true)){
				HX_STACK_LINE(257)
				bool tmp20 = (_g < _g1->length);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(257)
				bool tmp21 = !(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(257)
				if ((tmp21)){
					HX_STACK_LINE(257)
					break;
				}
				HX_STACK_LINE(257)
				::openfl::_internal::renderer::DrawCommandType tmp22 = _g1->__get(_g).StaticCast< ::openfl::_internal::renderer::DrawCommandType >();		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(257)
				::openfl::_internal::renderer::DrawCommandType type = tmp22;		HX_STACK_VAR(type,"type");
				HX_STACK_LINE(257)
				++(_g);
				HX_STACK_LINE(259)
				switch( (int)(type->__Index())){
					case (int)3: {
						HX_STACK_LINE(263)
						::openfl::_internal::renderer::DrawCommandReader tmp23;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(263)
						{
							HX_STACK_LINE(263)
							{
								HX_STACK_LINE(263)
								::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
								HX_STACK_LINE(263)
								switch( (int)(_g2->__Index())){
									case (int)0: {
										HX_STACK_LINE(263)
										hx::AddEq(data->oPos,(int)2);
										HX_STACK_LINE(263)
										hx::AddEq(data->bPos,(int)2);
									}
									;break;
									case (int)1: {
										HX_STACK_LINE(263)
										hx::AddEq(data->iPos,(int)1);
										HX_STACK_LINE(263)
										hx::AddEq(data->fPos,(int)1);
									}
									;break;
									case (int)2: {
										HX_STACK_LINE(263)
										hx::AddEq(data->oPos,(int)4);
										HX_STACK_LINE(263)
										hx::AddEq(data->iiPos,(int)2);
										HX_STACK_LINE(263)
										hx::AddEq(data->ffPos,(int)1);
										HX_STACK_LINE(263)
										hx::AddEq(data->fPos,(int)1);
									}
									;break;
									case (int)3: {
										HX_STACK_LINE(263)
										hx::AddEq(data->fPos,(int)6);
									}
									;break;
									case (int)4: {
										HX_STACK_LINE(263)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)5: {
										HX_STACK_LINE(263)
										hx::AddEq(data->fPos,(int)3);
									}
									;break;
									case (int)6: {
										HX_STACK_LINE(263)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)7: {
										HX_STACK_LINE(263)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)8: {
										HX_STACK_LINE(263)
										hx::AddEq(data->fPos,(int)5);
										HX_STACK_LINE(263)
										hx::AddEq(data->oPos,(int)1);
									}
									;break;
									case (int)10: {
										HX_STACK_LINE(263)
										hx::AddEq(data->oPos,(int)4);
									}
									;break;
									case (int)11: {
										HX_STACK_LINE(263)
										Dynamic();
									}
									;break;
									case (int)12: {
										HX_STACK_LINE(263)
										hx::AddEq(data->oPos,(int)2);
										HX_STACK_LINE(263)
										hx::AddEq(data->bPos,(int)2);
									}
									;break;
									case (int)13: {
										HX_STACK_LINE(263)
										hx::AddEq(data->oPos,(int)4);
										HX_STACK_LINE(263)
										hx::AddEq(data->iiPos,(int)2);
										HX_STACK_LINE(263)
										hx::AddEq(data->ffPos,(int)1);
										HX_STACK_LINE(263)
										hx::AddEq(data->fPos,(int)1);
									}
									;break;
									case (int)14: {
										HX_STACK_LINE(263)
										hx::AddEq(data->oPos,(int)4);
										HX_STACK_LINE(263)
										hx::AddEq(data->iPos,(int)1);
										HX_STACK_LINE(263)
										hx::AddEq(data->fPos,(int)2);
										HX_STACK_LINE(263)
										hx::AddEq(data->bPos,(int)1);
									}
									;break;
									case (int)15: {
										HX_STACK_LINE(263)
										hx::AddEq(data->fPos,(int)2);
									}
									;break;
									case (int)16: {
										HX_STACK_LINE(263)
										hx::AddEq(data->fPos,(int)2);
									}
									;break;
									case (int)17: {
										HX_STACK_LINE(263)
										hx::AddEq(data->oPos,(int)1);
									}
									;break;
									default: {
										HX_STACK_LINE(263)
										Dynamic();
									}
								}
							}
							HX_STACK_LINE(263)
							data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::CUBIC_CURVE_TO;
							HX_STACK_LINE(263)
							tmp23 = data;
						}
						HX_STACK_LINE(263)
						::openfl::_internal::renderer::DrawCommandReader c = tmp23;		HX_STACK_VAR(c,"c");
						HX_STACK_LINE(264)
						::openfl::_internal::renderer::DrawCommandBuffer tmp24 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillCommands;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(264)
						::openfl::_internal::renderer::DrawCommandBuffer tmp25 = c->buffer;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(264)
						int tmp26 = c->fPos;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(264)
						int tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(264)
						Float tmp28 = tmp25->f->__get(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(264)
						::openfl::_internal::renderer::DrawCommandBuffer tmp29 = c->buffer;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(264)
						int tmp30 = c->fPos;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(264)
						int tmp31 = (tmp30 + (int)1);		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(264)
						Float tmp32 = tmp29->f->__get(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(264)
						::openfl::_internal::renderer::DrawCommandBuffer tmp33 = c->buffer;		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(264)
						int tmp34 = c->fPos;		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(264)
						int tmp35 = (tmp34 + (int)2);		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(264)
						Float tmp36 = tmp33->f->__get(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(264)
						::openfl::_internal::renderer::DrawCommandBuffer tmp37 = c->buffer;		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(264)
						int tmp38 = c->fPos;		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(264)
						int tmp39 = (tmp38 + (int)3);		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(264)
						Float tmp40 = tmp37->f->__get(tmp39);		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(264)
						::openfl::_internal::renderer::DrawCommandBuffer tmp41 = c->buffer;		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(264)
						int tmp42 = c->fPos;		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(264)
						int tmp43 = (tmp42 + (int)4);		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(264)
						Float tmp44 = tmp41->f->__get(tmp43);		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(264)
						::openfl::_internal::renderer::DrawCommandBuffer tmp45 = c->buffer;		HX_STACK_VAR(tmp45,"tmp45");
						HX_STACK_LINE(264)
						int tmp46 = c->fPos;		HX_STACK_VAR(tmp46,"tmp46");
						HX_STACK_LINE(264)
						int tmp47 = (tmp46 + (int)5);		HX_STACK_VAR(tmp47,"tmp47");
						HX_STACK_LINE(264)
						Float tmp48 = tmp45->f->__get(tmp47);		HX_STACK_VAR(tmp48,"tmp48");
						HX_STACK_LINE(264)
						tmp24->cubicCurveTo(tmp28,tmp32,tmp36,tmp40,tmp44,tmp48);
						HX_STACK_LINE(265)
						::openfl::_internal::renderer::DrawCommandBuffer tmp49 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokeCommands;		HX_STACK_VAR(tmp49,"tmp49");
						HX_STACK_LINE(265)
						::openfl::_internal::renderer::DrawCommandBuffer tmp50 = c->buffer;		HX_STACK_VAR(tmp50,"tmp50");
						HX_STACK_LINE(265)
						int tmp51 = c->fPos;		HX_STACK_VAR(tmp51,"tmp51");
						HX_STACK_LINE(265)
						int tmp52 = tmp51;		HX_STACK_VAR(tmp52,"tmp52");
						HX_STACK_LINE(265)
						Float tmp53 = tmp50->f->__get(tmp52);		HX_STACK_VAR(tmp53,"tmp53");
						HX_STACK_LINE(265)
						::openfl::_internal::renderer::DrawCommandBuffer tmp54 = c->buffer;		HX_STACK_VAR(tmp54,"tmp54");
						HX_STACK_LINE(265)
						int tmp55 = c->fPos;		HX_STACK_VAR(tmp55,"tmp55");
						HX_STACK_LINE(265)
						int tmp56 = (tmp55 + (int)1);		HX_STACK_VAR(tmp56,"tmp56");
						HX_STACK_LINE(265)
						Float tmp57 = tmp54->f->__get(tmp56);		HX_STACK_VAR(tmp57,"tmp57");
						HX_STACK_LINE(265)
						::openfl::_internal::renderer::DrawCommandBuffer tmp58 = c->buffer;		HX_STACK_VAR(tmp58,"tmp58");
						HX_STACK_LINE(265)
						int tmp59 = c->fPos;		HX_STACK_VAR(tmp59,"tmp59");
						HX_STACK_LINE(265)
						int tmp60 = (tmp59 + (int)2);		HX_STACK_VAR(tmp60,"tmp60");
						HX_STACK_LINE(265)
						Float tmp61 = tmp58->f->__get(tmp60);		HX_STACK_VAR(tmp61,"tmp61");
						HX_STACK_LINE(265)
						::openfl::_internal::renderer::DrawCommandBuffer tmp62 = c->buffer;		HX_STACK_VAR(tmp62,"tmp62");
						HX_STACK_LINE(265)
						int tmp63 = c->fPos;		HX_STACK_VAR(tmp63,"tmp63");
						HX_STACK_LINE(265)
						int tmp64 = (tmp63 + (int)3);		HX_STACK_VAR(tmp64,"tmp64");
						HX_STACK_LINE(265)
						Float tmp65 = tmp62->f->__get(tmp64);		HX_STACK_VAR(tmp65,"tmp65");
						HX_STACK_LINE(265)
						::openfl::_internal::renderer::DrawCommandBuffer tmp66 = c->buffer;		HX_STACK_VAR(tmp66,"tmp66");
						HX_STACK_LINE(265)
						int tmp67 = c->fPos;		HX_STACK_VAR(tmp67,"tmp67");
						HX_STACK_LINE(265)
						int tmp68 = (tmp67 + (int)4);		HX_STACK_VAR(tmp68,"tmp68");
						HX_STACK_LINE(265)
						Float tmp69 = tmp66->f->__get(tmp68);		HX_STACK_VAR(tmp69,"tmp69");
						HX_STACK_LINE(265)
						::openfl::_internal::renderer::DrawCommandBuffer tmp70 = c->buffer;		HX_STACK_VAR(tmp70,"tmp70");
						HX_STACK_LINE(265)
						int tmp71 = c->fPos;		HX_STACK_VAR(tmp71,"tmp71");
						HX_STACK_LINE(265)
						int tmp72 = (tmp71 + (int)5);		HX_STACK_VAR(tmp72,"tmp72");
						HX_STACK_LINE(265)
						Float tmp73 = tmp70->f->__get(tmp72);		HX_STACK_VAR(tmp73,"tmp73");
						HX_STACK_LINE(265)
						tmp49->cubicCurveTo(tmp53,tmp57,tmp61,tmp65,tmp69,tmp73);
					}
					;break;
					case (int)4: {
						HX_STACK_LINE(269)
						::openfl::_internal::renderer::DrawCommandReader tmp23;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(269)
						{
							HX_STACK_LINE(269)
							{
								HX_STACK_LINE(269)
								::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
								HX_STACK_LINE(269)
								switch( (int)(_g2->__Index())){
									case (int)0: {
										HX_STACK_LINE(269)
										hx::AddEq(data->oPos,(int)2);
										HX_STACK_LINE(269)
										hx::AddEq(data->bPos,(int)2);
									}
									;break;
									case (int)1: {
										HX_STACK_LINE(269)
										hx::AddEq(data->iPos,(int)1);
										HX_STACK_LINE(269)
										hx::AddEq(data->fPos,(int)1);
									}
									;break;
									case (int)2: {
										HX_STACK_LINE(269)
										hx::AddEq(data->oPos,(int)4);
										HX_STACK_LINE(269)
										hx::AddEq(data->iiPos,(int)2);
										HX_STACK_LINE(269)
										hx::AddEq(data->ffPos,(int)1);
										HX_STACK_LINE(269)
										hx::AddEq(data->fPos,(int)1);
									}
									;break;
									case (int)3: {
										HX_STACK_LINE(269)
										hx::AddEq(data->fPos,(int)6);
									}
									;break;
									case (int)4: {
										HX_STACK_LINE(269)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)5: {
										HX_STACK_LINE(269)
										hx::AddEq(data->fPos,(int)3);
									}
									;break;
									case (int)6: {
										HX_STACK_LINE(269)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)7: {
										HX_STACK_LINE(269)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)8: {
										HX_STACK_LINE(269)
										hx::AddEq(data->fPos,(int)5);
										HX_STACK_LINE(269)
										hx::AddEq(data->oPos,(int)1);
									}
									;break;
									case (int)10: {
										HX_STACK_LINE(269)
										hx::AddEq(data->oPos,(int)4);
									}
									;break;
									case (int)11: {
										HX_STACK_LINE(269)
										Dynamic();
									}
									;break;
									case (int)12: {
										HX_STACK_LINE(269)
										hx::AddEq(data->oPos,(int)2);
										HX_STACK_LINE(269)
										hx::AddEq(data->bPos,(int)2);
									}
									;break;
									case (int)13: {
										HX_STACK_LINE(269)
										hx::AddEq(data->oPos,(int)4);
										HX_STACK_LINE(269)
										hx::AddEq(data->iiPos,(int)2);
										HX_STACK_LINE(269)
										hx::AddEq(data->ffPos,(int)1);
										HX_STACK_LINE(269)
										hx::AddEq(data->fPos,(int)1);
									}
									;break;
									case (int)14: {
										HX_STACK_LINE(269)
										hx::AddEq(data->oPos,(int)4);
										HX_STACK_LINE(269)
										hx::AddEq(data->iPos,(int)1);
										HX_STACK_LINE(269)
										hx::AddEq(data->fPos,(int)2);
										HX_STACK_LINE(269)
										hx::AddEq(data->bPos,(int)1);
									}
									;break;
									case (int)15: {
										HX_STACK_LINE(269)
										hx::AddEq(data->fPos,(int)2);
									}
									;break;
									case (int)16: {
										HX_STACK_LINE(269)
										hx::AddEq(data->fPos,(int)2);
									}
									;break;
									case (int)17: {
										HX_STACK_LINE(269)
										hx::AddEq(data->oPos,(int)1);
									}
									;break;
									default: {
										HX_STACK_LINE(269)
										Dynamic();
									}
								}
							}
							HX_STACK_LINE(269)
							data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::CURVE_TO;
							HX_STACK_LINE(269)
							tmp23 = data;
						}
						HX_STACK_LINE(269)
						::openfl::_internal::renderer::DrawCommandReader c = tmp23;		HX_STACK_VAR(c,"c");
						HX_STACK_LINE(270)
						::openfl::_internal::renderer::DrawCommandBuffer tmp24 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillCommands;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(270)
						::openfl::_internal::renderer::DrawCommandBuffer tmp25 = c->buffer;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(270)
						int tmp26 = c->fPos;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(270)
						int tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(270)
						Float tmp28 = tmp25->f->__get(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(270)
						::openfl::_internal::renderer::DrawCommandBuffer tmp29 = c->buffer;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(270)
						int tmp30 = c->fPos;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(270)
						int tmp31 = (tmp30 + (int)1);		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(270)
						Float tmp32 = tmp29->f->__get(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(270)
						::openfl::_internal::renderer::DrawCommandBuffer tmp33 = c->buffer;		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(270)
						int tmp34 = c->fPos;		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(270)
						int tmp35 = (tmp34 + (int)2);		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(270)
						Float tmp36 = tmp33->f->__get(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(270)
						::openfl::_internal::renderer::DrawCommandBuffer tmp37 = c->buffer;		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(270)
						int tmp38 = c->fPos;		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(270)
						int tmp39 = (tmp38 + (int)3);		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(270)
						Float tmp40 = tmp37->f->__get(tmp39);		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(270)
						tmp24->curveTo(tmp28,tmp32,tmp36,tmp40);
						HX_STACK_LINE(271)
						::openfl::_internal::renderer::DrawCommandBuffer tmp41 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokeCommands;		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(271)
						::openfl::_internal::renderer::DrawCommandBuffer tmp42 = c->buffer;		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(271)
						int tmp43 = c->fPos;		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(271)
						int tmp44 = tmp43;		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(271)
						Float tmp45 = tmp42->f->__get(tmp44);		HX_STACK_VAR(tmp45,"tmp45");
						HX_STACK_LINE(271)
						::openfl::_internal::renderer::DrawCommandBuffer tmp46 = c->buffer;		HX_STACK_VAR(tmp46,"tmp46");
						HX_STACK_LINE(271)
						int tmp47 = c->fPos;		HX_STACK_VAR(tmp47,"tmp47");
						HX_STACK_LINE(271)
						int tmp48 = (tmp47 + (int)1);		HX_STACK_VAR(tmp48,"tmp48");
						HX_STACK_LINE(271)
						Float tmp49 = tmp46->f->__get(tmp48);		HX_STACK_VAR(tmp49,"tmp49");
						HX_STACK_LINE(271)
						::openfl::_internal::renderer::DrawCommandBuffer tmp50 = c->buffer;		HX_STACK_VAR(tmp50,"tmp50");
						HX_STACK_LINE(271)
						int tmp51 = c->fPos;		HX_STACK_VAR(tmp51,"tmp51");
						HX_STACK_LINE(271)
						int tmp52 = (tmp51 + (int)2);		HX_STACK_VAR(tmp52,"tmp52");
						HX_STACK_LINE(271)
						Float tmp53 = tmp50->f->__get(tmp52);		HX_STACK_VAR(tmp53,"tmp53");
						HX_STACK_LINE(271)
						::openfl::_internal::renderer::DrawCommandBuffer tmp54 = c->buffer;		HX_STACK_VAR(tmp54,"tmp54");
						HX_STACK_LINE(271)
						int tmp55 = c->fPos;		HX_STACK_VAR(tmp55,"tmp55");
						HX_STACK_LINE(271)
						int tmp56 = (tmp55 + (int)3);		HX_STACK_VAR(tmp56,"tmp56");
						HX_STACK_LINE(271)
						Float tmp57 = tmp54->f->__get(tmp56);		HX_STACK_VAR(tmp57,"tmp57");
						HX_STACK_LINE(271)
						tmp41->curveTo(tmp45,tmp49,tmp53,tmp57);
					}
					;break;
					case (int)15: {
						HX_STACK_LINE(275)
						::openfl::_internal::renderer::DrawCommandReader tmp23;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(275)
						{
							HX_STACK_LINE(275)
							{
								HX_STACK_LINE(275)
								::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
								HX_STACK_LINE(275)
								switch( (int)(_g2->__Index())){
									case (int)0: {
										HX_STACK_LINE(275)
										hx::AddEq(data->oPos,(int)2);
										HX_STACK_LINE(275)
										hx::AddEq(data->bPos,(int)2);
									}
									;break;
									case (int)1: {
										HX_STACK_LINE(275)
										hx::AddEq(data->iPos,(int)1);
										HX_STACK_LINE(275)
										hx::AddEq(data->fPos,(int)1);
									}
									;break;
									case (int)2: {
										HX_STACK_LINE(275)
										hx::AddEq(data->oPos,(int)4);
										HX_STACK_LINE(275)
										hx::AddEq(data->iiPos,(int)2);
										HX_STACK_LINE(275)
										hx::AddEq(data->ffPos,(int)1);
										HX_STACK_LINE(275)
										hx::AddEq(data->fPos,(int)1);
									}
									;break;
									case (int)3: {
										HX_STACK_LINE(275)
										hx::AddEq(data->fPos,(int)6);
									}
									;break;
									case (int)4: {
										HX_STACK_LINE(275)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)5: {
										HX_STACK_LINE(275)
										hx::AddEq(data->fPos,(int)3);
									}
									;break;
									case (int)6: {
										HX_STACK_LINE(275)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)7: {
										HX_STACK_LINE(275)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)8: {
										HX_STACK_LINE(275)
										hx::AddEq(data->fPos,(int)5);
										HX_STACK_LINE(275)
										hx::AddEq(data->oPos,(int)1);
									}
									;break;
									case (int)10: {
										HX_STACK_LINE(275)
										hx::AddEq(data->oPos,(int)4);
									}
									;break;
									case (int)11: {
										HX_STACK_LINE(275)
										Dynamic();
									}
									;break;
									case (int)12: {
										HX_STACK_LINE(275)
										hx::AddEq(data->oPos,(int)2);
										HX_STACK_LINE(275)
										hx::AddEq(data->bPos,(int)2);
									}
									;break;
									case (int)13: {
										HX_STACK_LINE(275)
										hx::AddEq(data->oPos,(int)4);
										HX_STACK_LINE(275)
										hx::AddEq(data->iiPos,(int)2);
										HX_STACK_LINE(275)
										hx::AddEq(data->ffPos,(int)1);
										HX_STACK_LINE(275)
										hx::AddEq(data->fPos,(int)1);
									}
									;break;
									case (int)14: {
										HX_STACK_LINE(275)
										hx::AddEq(data->oPos,(int)4);
										HX_STACK_LINE(275)
										hx::AddEq(data->iPos,(int)1);
										HX_STACK_LINE(275)
										hx::AddEq(data->fPos,(int)2);
										HX_STACK_LINE(275)
										hx::AddEq(data->bPos,(int)1);
									}
									;break;
									case (int)15: {
										HX_STACK_LINE(275)
										hx::AddEq(data->fPos,(int)2);
									}
									;break;
									case (int)16: {
										HX_STACK_LINE(275)
										hx::AddEq(data->fPos,(int)2);
									}
									;break;
									case (int)17: {
										HX_STACK_LINE(275)
										hx::AddEq(data->oPos,(int)1);
									}
									;break;
									default: {
										HX_STACK_LINE(275)
										Dynamic();
									}
								}
							}
							HX_STACK_LINE(275)
							data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::LINE_TO;
							HX_STACK_LINE(275)
							tmp23 = data;
						}
						HX_STACK_LINE(275)
						::openfl::_internal::renderer::DrawCommandReader c = tmp23;		HX_STACK_VAR(c,"c");
						HX_STACK_LINE(276)
						::openfl::_internal::renderer::DrawCommandBuffer tmp24 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillCommands;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(276)
						::openfl::_internal::renderer::DrawCommandBuffer tmp25 = c->buffer;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(276)
						int tmp26 = c->fPos;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(276)
						int tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(276)
						Float tmp28 = tmp25->f->__get(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(276)
						::openfl::_internal::renderer::DrawCommandBuffer tmp29 = c->buffer;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(276)
						int tmp30 = c->fPos;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(276)
						int tmp31 = (tmp30 + (int)1);		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(276)
						Float tmp32 = tmp29->f->__get(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(276)
						tmp24->lineTo(tmp28,tmp32);
						HX_STACK_LINE(277)
						::openfl::_internal::renderer::DrawCommandBuffer tmp33 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokeCommands;		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(277)
						::openfl::_internal::renderer::DrawCommandBuffer tmp34 = c->buffer;		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(277)
						int tmp35 = c->fPos;		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(277)
						int tmp36 = tmp35;		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(277)
						Float tmp37 = tmp34->f->__get(tmp36);		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(277)
						::openfl::_internal::renderer::DrawCommandBuffer tmp38 = c->buffer;		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(277)
						int tmp39 = c->fPos;		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(277)
						int tmp40 = (tmp39 + (int)1);		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(277)
						Float tmp41 = tmp38->f->__get(tmp40);		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(277)
						tmp33->lineTo(tmp37,tmp41);
					}
					;break;
					case (int)16: {
						HX_STACK_LINE(281)
						::openfl::_internal::renderer::DrawCommandReader tmp23;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(281)
						{
							HX_STACK_LINE(281)
							{
								HX_STACK_LINE(281)
								::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
								HX_STACK_LINE(281)
								switch( (int)(_g2->__Index())){
									case (int)0: {
										HX_STACK_LINE(281)
										hx::AddEq(data->oPos,(int)2);
										HX_STACK_LINE(281)
										hx::AddEq(data->bPos,(int)2);
									}
									;break;
									case (int)1: {
										HX_STACK_LINE(281)
										hx::AddEq(data->iPos,(int)1);
										HX_STACK_LINE(281)
										hx::AddEq(data->fPos,(int)1);
									}
									;break;
									case (int)2: {
										HX_STACK_LINE(281)
										hx::AddEq(data->oPos,(int)4);
										HX_STACK_LINE(281)
										hx::AddEq(data->iiPos,(int)2);
										HX_STACK_LINE(281)
										hx::AddEq(data->ffPos,(int)1);
										HX_STACK_LINE(281)
										hx::AddEq(data->fPos,(int)1);
									}
									;break;
									case (int)3: {
										HX_STACK_LINE(281)
										hx::AddEq(data->fPos,(int)6);
									}
									;break;
									case (int)4: {
										HX_STACK_LINE(281)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)5: {
										HX_STACK_LINE(281)
										hx::AddEq(data->fPos,(int)3);
									}
									;break;
									case (int)6: {
										HX_STACK_LINE(281)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)7: {
										HX_STACK_LINE(281)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)8: {
										HX_STACK_LINE(281)
										hx::AddEq(data->fPos,(int)5);
										HX_STACK_LINE(281)
										hx::AddEq(data->oPos,(int)1);
									}
									;break;
									case (int)10: {
										HX_STACK_LINE(281)
										hx::AddEq(data->oPos,(int)4);
									}
									;break;
									case (int)11: {
										HX_STACK_LINE(281)
										Dynamic();
									}
									;break;
									case (int)12: {
										HX_STACK_LINE(281)
										hx::AddEq(data->oPos,(int)2);
										HX_STACK_LINE(281)
										hx::AddEq(data->bPos,(int)2);
									}
									;break;
									case (int)13: {
										HX_STACK_LINE(281)
										hx::AddEq(data->oPos,(int)4);
										HX_STACK_LINE(281)
										hx::AddEq(data->iiPos,(int)2);
										HX_STACK_LINE(281)
										hx::AddEq(data->ffPos,(int)1);
										HX_STACK_LINE(281)
										hx::AddEq(data->fPos,(int)1);
									}
									;break;
									case (int)14: {
										HX_STACK_LINE(281)
										hx::AddEq(data->oPos,(int)4);
										HX_STACK_LINE(281)
										hx::AddEq(data->iPos,(int)1);
										HX_STACK_LINE(281)
										hx::AddEq(data->fPos,(int)2);
										HX_STACK_LINE(281)
										hx::AddEq(data->bPos,(int)1);
									}
									;break;
									case (int)15: {
										HX_STACK_LINE(281)
										hx::AddEq(data->fPos,(int)2);
									}
									;break;
									case (int)16: {
										HX_STACK_LINE(281)
										hx::AddEq(data->fPos,(int)2);
									}
									;break;
									case (int)17: {
										HX_STACK_LINE(281)
										hx::AddEq(data->oPos,(int)1);
									}
									;break;
									default: {
										HX_STACK_LINE(281)
										Dynamic();
									}
								}
							}
							HX_STACK_LINE(281)
							data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::MOVE_TO;
							HX_STACK_LINE(281)
							tmp23 = data;
						}
						HX_STACK_LINE(281)
						::openfl::_internal::renderer::DrawCommandReader c = tmp23;		HX_STACK_VAR(c,"c");
						HX_STACK_LINE(282)
						::openfl::_internal::renderer::DrawCommandBuffer tmp24 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillCommands;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(282)
						::openfl::_internal::renderer::DrawCommandBuffer tmp25 = c->buffer;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(282)
						int tmp26 = c->fPos;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(282)
						int tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(282)
						Float tmp28 = tmp25->f->__get(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(282)
						::openfl::_internal::renderer::DrawCommandBuffer tmp29 = c->buffer;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(282)
						int tmp30 = c->fPos;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(282)
						int tmp31 = (tmp30 + (int)1);		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(282)
						Float tmp32 = tmp29->f->__get(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(282)
						tmp24->moveTo(tmp28,tmp32);
						HX_STACK_LINE(283)
						::openfl::_internal::renderer::DrawCommandBuffer tmp33 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokeCommands;		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(283)
						::openfl::_internal::renderer::DrawCommandBuffer tmp34 = c->buffer;		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(283)
						int tmp35 = c->fPos;		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(283)
						int tmp36 = tmp35;		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(283)
						Float tmp37 = tmp34->f->__get(tmp36);		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(283)
						::openfl::_internal::renderer::DrawCommandBuffer tmp38 = c->buffer;		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(283)
						int tmp39 = c->fPos;		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(283)
						int tmp40 = (tmp39 + (int)1);		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(283)
						Float tmp41 = tmp38->f->__get(tmp40);		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(283)
						tmp33->moveTo(tmp37,tmp41);
					}
					;break;
					case (int)14: {
						HX_STACK_LINE(287)
						::openfl::_internal::renderer::DrawCommandReader tmp23;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(287)
						{
							HX_STACK_LINE(287)
							{
								HX_STACK_LINE(287)
								::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
								HX_STACK_LINE(287)
								switch( (int)(_g2->__Index())){
									case (int)0: {
										HX_STACK_LINE(287)
										hx::AddEq(data->oPos,(int)2);
										HX_STACK_LINE(287)
										hx::AddEq(data->bPos,(int)2);
									}
									;break;
									case (int)1: {
										HX_STACK_LINE(287)
										hx::AddEq(data->iPos,(int)1);
										HX_STACK_LINE(287)
										hx::AddEq(data->fPos,(int)1);
									}
									;break;
									case (int)2: {
										HX_STACK_LINE(287)
										hx::AddEq(data->oPos,(int)4);
										HX_STACK_LINE(287)
										hx::AddEq(data->iiPos,(int)2);
										HX_STACK_LINE(287)
										hx::AddEq(data->ffPos,(int)1);
										HX_STACK_LINE(287)
										hx::AddEq(data->fPos,(int)1);
									}
									;break;
									case (int)3: {
										HX_STACK_LINE(287)
										hx::AddEq(data->fPos,(int)6);
									}
									;break;
									case (int)4: {
										HX_STACK_LINE(287)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)5: {
										HX_STACK_LINE(287)
										hx::AddEq(data->fPos,(int)3);
									}
									;break;
									case (int)6: {
										HX_STACK_LINE(287)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)7: {
										HX_STACK_LINE(287)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)8: {
										HX_STACK_LINE(287)
										hx::AddEq(data->fPos,(int)5);
										HX_STACK_LINE(287)
										hx::AddEq(data->oPos,(int)1);
									}
									;break;
									case (int)10: {
										HX_STACK_LINE(287)
										hx::AddEq(data->oPos,(int)4);
									}
									;break;
									case (int)11: {
										HX_STACK_LINE(287)
										Dynamic();
									}
									;break;
									case (int)12: {
										HX_STACK_LINE(287)
										hx::AddEq(data->oPos,(int)2);
										HX_STACK_LINE(287)
										hx::AddEq(data->bPos,(int)2);
									}
									;break;
									case (int)13: {
										HX_STACK_LINE(287)
										hx::AddEq(data->oPos,(int)4);
										HX_STACK_LINE(287)
										hx::AddEq(data->iiPos,(int)2);
										HX_STACK_LINE(287)
										hx::AddEq(data->ffPos,(int)1);
										HX_STACK_LINE(287)
										hx::AddEq(data->fPos,(int)1);
									}
									;break;
									case (int)14: {
										HX_STACK_LINE(287)
										hx::AddEq(data->oPos,(int)4);
										HX_STACK_LINE(287)
										hx::AddEq(data->iPos,(int)1);
										HX_STACK_LINE(287)
										hx::AddEq(data->fPos,(int)2);
										HX_STACK_LINE(287)
										hx::AddEq(data->bPos,(int)1);
									}
									;break;
									case (int)15: {
										HX_STACK_LINE(287)
										hx::AddEq(data->fPos,(int)2);
									}
									;break;
									case (int)16: {
										HX_STACK_LINE(287)
										hx::AddEq(data->fPos,(int)2);
									}
									;break;
									case (int)17: {
										HX_STACK_LINE(287)
										hx::AddEq(data->oPos,(int)1);
									}
									;break;
									default: {
										HX_STACK_LINE(287)
										Dynamic();
									}
								}
							}
							HX_STACK_LINE(287)
							data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::LINE_STYLE;
							HX_STACK_LINE(287)
							tmp23 = data;
						}
						HX_STACK_LINE(287)
						::openfl::_internal::renderer::DrawCommandReader c = tmp23;		HX_STACK_VAR(c,"c");
						HX_STACK_LINE(288)
						::openfl::_internal::renderer::DrawCommandBuffer tmp24 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokeCommands;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(288)
						::openfl::_internal::renderer::DrawCommandBuffer tmp25 = c->buffer;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(288)
						int tmp26 = c->oPos;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(288)
						int tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(288)
						Dynamic tmp28 = tmp25->o->__GetItem(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(288)
						Dynamic tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(288)
						::openfl::_internal::renderer::DrawCommandBuffer tmp30 = c->buffer;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(288)
						int tmp31 = c->iPos;		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(288)
						int tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(288)
						int tmp33 = tmp30->i->__get(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(288)
						int tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(288)
						::openfl::_internal::renderer::DrawCommandBuffer tmp35 = c->buffer;		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(288)
						int tmp36 = c->bPos;		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(288)
						int tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(288)
						bool tmp38 = tmp35->b->__get(tmp37);		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(288)
						bool tmp39 = tmp38;		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(288)
						::openfl::_internal::renderer::DrawCommandBuffer tmp40 = c->buffer;		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(288)
						int tmp41 = c->oPos;		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(288)
						int tmp42 = (tmp41 + (int)1);		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(288)
						Dynamic tmp43 = tmp40->o->__GetItem(tmp42);		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(288)
						Dynamic tmp44 = tmp43;		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(288)
						::openfl::_internal::renderer::DrawCommandBuffer tmp45 = c->buffer;		HX_STACK_VAR(tmp45,"tmp45");
						HX_STACK_LINE(288)
						int tmp46 = c->oPos;		HX_STACK_VAR(tmp46,"tmp46");
						HX_STACK_LINE(288)
						int tmp47 = (tmp46 + (int)2);		HX_STACK_VAR(tmp47,"tmp47");
						HX_STACK_LINE(288)
						Dynamic tmp48 = tmp45->o->__GetItem(tmp47);		HX_STACK_VAR(tmp48,"tmp48");
						HX_STACK_LINE(288)
						Dynamic tmp49 = tmp48;		HX_STACK_VAR(tmp49,"tmp49");
						HX_STACK_LINE(288)
						::openfl::_internal::renderer::DrawCommandBuffer tmp50 = c->buffer;		HX_STACK_VAR(tmp50,"tmp50");
						HX_STACK_LINE(288)
						int tmp51 = c->oPos;		HX_STACK_VAR(tmp51,"tmp51");
						HX_STACK_LINE(288)
						int tmp52 = (tmp51 + (int)3);		HX_STACK_VAR(tmp52,"tmp52");
						HX_STACK_LINE(288)
						Dynamic tmp53 = tmp50->o->__GetItem(tmp52);		HX_STACK_VAR(tmp53,"tmp53");
						HX_STACK_LINE(288)
						Dynamic tmp54 = tmp53;		HX_STACK_VAR(tmp54,"tmp54");
						HX_STACK_LINE(288)
						::openfl::_internal::renderer::DrawCommandBuffer tmp55 = c->buffer;		HX_STACK_VAR(tmp55,"tmp55");
						HX_STACK_LINE(288)
						int tmp56 = c->fPos;		HX_STACK_VAR(tmp56,"tmp56");
						HX_STACK_LINE(288)
						int tmp57 = (tmp56 + (int)1);		HX_STACK_VAR(tmp57,"tmp57");
						HX_STACK_LINE(288)
						Float tmp58 = tmp55->f->__get(tmp57);		HX_STACK_VAR(tmp58,"tmp58");
						HX_STACK_LINE(288)
						Float tmp59 = tmp58;		HX_STACK_VAR(tmp59,"tmp59");
						HX_STACK_LINE(288)
						tmp24->lineStyle(tmp29,tmp34,(int)1,tmp39,tmp44,tmp49,tmp54,tmp59);
					}
					;break;
					case (int)13: {
						HX_STACK_LINE(292)
						::openfl::_internal::renderer::DrawCommandReader tmp23;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(292)
						{
							HX_STACK_LINE(292)
							{
								HX_STACK_LINE(292)
								::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
								HX_STACK_LINE(292)
								switch( (int)(_g2->__Index())){
									case (int)0: {
										HX_STACK_LINE(292)
										hx::AddEq(data->oPos,(int)2);
										HX_STACK_LINE(292)
										hx::AddEq(data->bPos,(int)2);
									}
									;break;
									case (int)1: {
										HX_STACK_LINE(292)
										hx::AddEq(data->iPos,(int)1);
										HX_STACK_LINE(292)
										hx::AddEq(data->fPos,(int)1);
									}
									;break;
									case (int)2: {
										HX_STACK_LINE(292)
										hx::AddEq(data->oPos,(int)4);
										HX_STACK_LINE(292)
										hx::AddEq(data->iiPos,(int)2);
										HX_STACK_LINE(292)
										hx::AddEq(data->ffPos,(int)1);
										HX_STACK_LINE(292)
										hx::AddEq(data->fPos,(int)1);
									}
									;break;
									case (int)3: {
										HX_STACK_LINE(292)
										hx::AddEq(data->fPos,(int)6);
									}
									;break;
									case (int)4: {
										HX_STACK_LINE(292)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)5: {
										HX_STACK_LINE(292)
										hx::AddEq(data->fPos,(int)3);
									}
									;break;
									case (int)6: {
										HX_STACK_LINE(292)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)7: {
										HX_STACK_LINE(292)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)8: {
										HX_STACK_LINE(292)
										hx::AddEq(data->fPos,(int)5);
										HX_STACK_LINE(292)
										hx::AddEq(data->oPos,(int)1);
									}
									;break;
									case (int)10: {
										HX_STACK_LINE(292)
										hx::AddEq(data->oPos,(int)4);
									}
									;break;
									case (int)11: {
										HX_STACK_LINE(292)
										Dynamic();
									}
									;break;
									case (int)12: {
										HX_STACK_LINE(292)
										hx::AddEq(data->oPos,(int)2);
										HX_STACK_LINE(292)
										hx::AddEq(data->bPos,(int)2);
									}
									;break;
									case (int)13: {
										HX_STACK_LINE(292)
										hx::AddEq(data->oPos,(int)4);
										HX_STACK_LINE(292)
										hx::AddEq(data->iiPos,(int)2);
										HX_STACK_LINE(292)
										hx::AddEq(data->ffPos,(int)1);
										HX_STACK_LINE(292)
										hx::AddEq(data->fPos,(int)1);
									}
									;break;
									case (int)14: {
										HX_STACK_LINE(292)
										hx::AddEq(data->oPos,(int)4);
										HX_STACK_LINE(292)
										hx::AddEq(data->iPos,(int)1);
										HX_STACK_LINE(292)
										hx::AddEq(data->fPos,(int)2);
										HX_STACK_LINE(292)
										hx::AddEq(data->bPos,(int)1);
									}
									;break;
									case (int)15: {
										HX_STACK_LINE(292)
										hx::AddEq(data->fPos,(int)2);
									}
									;break;
									case (int)16: {
										HX_STACK_LINE(292)
										hx::AddEq(data->fPos,(int)2);
									}
									;break;
									case (int)17: {
										HX_STACK_LINE(292)
										hx::AddEq(data->oPos,(int)1);
									}
									;break;
									default: {
										HX_STACK_LINE(292)
										Dynamic();
									}
								}
							}
							HX_STACK_LINE(292)
							data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::LINE_GRADIENT_STYLE;
							HX_STACK_LINE(292)
							tmp23 = data;
						}
						HX_STACK_LINE(292)
						::openfl::_internal::renderer::DrawCommandReader c = tmp23;		HX_STACK_VAR(c,"c");
						HX_STACK_LINE(293)
						::openfl::_internal::renderer::DrawCommandBuffer tmp24 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokeCommands;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(293)
						::openfl::_internal::renderer::DrawCommandBuffer tmp25 = c->buffer;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(293)
						int tmp26 = c->oPos;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(293)
						int tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(293)
						Dynamic tmp28 = tmp25->o->__GetItem(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(293)
						Dynamic tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(293)
						::openfl::_internal::renderer::DrawCommandBuffer tmp30 = c->buffer;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(293)
						int tmp31 = c->iiPos;		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(293)
						int tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(293)
						::openfl::_internal::renderer::DrawCommandBuffer tmp33 = c->buffer;		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(293)
						int tmp34 = c->ffPos;		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(293)
						int tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(293)
						::openfl::_internal::renderer::DrawCommandBuffer tmp36 = c->buffer;		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(293)
						int tmp37 = c->iiPos;		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(293)
						int tmp38 = (tmp37 + (int)1);		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(293)
						::openfl::_internal::renderer::DrawCommandBuffer tmp39 = c->buffer;		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(293)
						int tmp40 = c->oPos;		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(293)
						int tmp41 = (tmp40 + (int)1);		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(293)
						Dynamic tmp42 = tmp39->o->__GetItem(tmp41);		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(293)
						::openfl::geom::Matrix tmp43 = ((::openfl::geom::Matrix)(tmp42));		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(293)
						::openfl::_internal::renderer::DrawCommandBuffer tmp44 = c->buffer;		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(293)
						int tmp45 = c->oPos;		HX_STACK_VAR(tmp45,"tmp45");
						HX_STACK_LINE(293)
						int tmp46 = (tmp45 + (int)2);		HX_STACK_VAR(tmp46,"tmp46");
						HX_STACK_LINE(293)
						Dynamic tmp47 = tmp44->o->__GetItem(tmp46);		HX_STACK_VAR(tmp47,"tmp47");
						HX_STACK_LINE(293)
						Dynamic tmp48 = tmp47;		HX_STACK_VAR(tmp48,"tmp48");
						HX_STACK_LINE(293)
						::openfl::_internal::renderer::DrawCommandBuffer tmp49 = c->buffer;		HX_STACK_VAR(tmp49,"tmp49");
						HX_STACK_LINE(293)
						int tmp50 = c->oPos;		HX_STACK_VAR(tmp50,"tmp50");
						HX_STACK_LINE(293)
						int tmp51 = (tmp50 + (int)3);		HX_STACK_VAR(tmp51,"tmp51");
						HX_STACK_LINE(293)
						Dynamic tmp52 = tmp49->o->__GetItem(tmp51);		HX_STACK_VAR(tmp52,"tmp52");
						HX_STACK_LINE(293)
						Dynamic tmp53 = tmp52;		HX_STACK_VAR(tmp53,"tmp53");
						HX_STACK_LINE(293)
						::openfl::_internal::renderer::DrawCommandBuffer tmp54 = c->buffer;		HX_STACK_VAR(tmp54,"tmp54");
						HX_STACK_LINE(293)
						int tmp55 = c->fPos;		HX_STACK_VAR(tmp55,"tmp55");
						HX_STACK_LINE(293)
						int tmp56 = tmp55;		HX_STACK_VAR(tmp56,"tmp56");
						HX_STACK_LINE(293)
						Float tmp57 = tmp54->f->__get(tmp56);		HX_STACK_VAR(tmp57,"tmp57");
						HX_STACK_LINE(293)
						Float tmp58 = tmp57;		HX_STACK_VAR(tmp58,"tmp58");
						HX_STACK_LINE(293)
						tmp24->lineGradientStyle(tmp29,tmp30->ii->__get(tmp32).StaticCast< Array< int > >(),tmp33->ff->__get(tmp35).StaticCast< Array< Float > >(),tmp36->ii->__get(tmp38).StaticCast< Array< int > >(),tmp43,tmp48,tmp53,tmp58);
					}
					;break;
					case (int)12: {
						HX_STACK_LINE(297)
						::openfl::_internal::renderer::DrawCommandReader tmp23;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(297)
						{
							HX_STACK_LINE(297)
							{
								HX_STACK_LINE(297)
								::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
								HX_STACK_LINE(297)
								switch( (int)(_g2->__Index())){
									case (int)0: {
										HX_STACK_LINE(297)
										hx::AddEq(data->oPos,(int)2);
										HX_STACK_LINE(297)
										hx::AddEq(data->bPos,(int)2);
									}
									;break;
									case (int)1: {
										HX_STACK_LINE(297)
										hx::AddEq(data->iPos,(int)1);
										HX_STACK_LINE(297)
										hx::AddEq(data->fPos,(int)1);
									}
									;break;
									case (int)2: {
										HX_STACK_LINE(297)
										hx::AddEq(data->oPos,(int)4);
										HX_STACK_LINE(297)
										hx::AddEq(data->iiPos,(int)2);
										HX_STACK_LINE(297)
										hx::AddEq(data->ffPos,(int)1);
										HX_STACK_LINE(297)
										hx::AddEq(data->fPos,(int)1);
									}
									;break;
									case (int)3: {
										HX_STACK_LINE(297)
										hx::AddEq(data->fPos,(int)6);
									}
									;break;
									case (int)4: {
										HX_STACK_LINE(297)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)5: {
										HX_STACK_LINE(297)
										hx::AddEq(data->fPos,(int)3);
									}
									;break;
									case (int)6: {
										HX_STACK_LINE(297)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)7: {
										HX_STACK_LINE(297)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)8: {
										HX_STACK_LINE(297)
										hx::AddEq(data->fPos,(int)5);
										HX_STACK_LINE(297)
										hx::AddEq(data->oPos,(int)1);
									}
									;break;
									case (int)10: {
										HX_STACK_LINE(297)
										hx::AddEq(data->oPos,(int)4);
									}
									;break;
									case (int)11: {
										HX_STACK_LINE(297)
										Dynamic();
									}
									;break;
									case (int)12: {
										HX_STACK_LINE(297)
										hx::AddEq(data->oPos,(int)2);
										HX_STACK_LINE(297)
										hx::AddEq(data->bPos,(int)2);
									}
									;break;
									case (int)13: {
										HX_STACK_LINE(297)
										hx::AddEq(data->oPos,(int)4);
										HX_STACK_LINE(297)
										hx::AddEq(data->iiPos,(int)2);
										HX_STACK_LINE(297)
										hx::AddEq(data->ffPos,(int)1);
										HX_STACK_LINE(297)
										hx::AddEq(data->fPos,(int)1);
									}
									;break;
									case (int)14: {
										HX_STACK_LINE(297)
										hx::AddEq(data->oPos,(int)4);
										HX_STACK_LINE(297)
										hx::AddEq(data->iPos,(int)1);
										HX_STACK_LINE(297)
										hx::AddEq(data->fPos,(int)2);
										HX_STACK_LINE(297)
										hx::AddEq(data->bPos,(int)1);
									}
									;break;
									case (int)15: {
										HX_STACK_LINE(297)
										hx::AddEq(data->fPos,(int)2);
									}
									;break;
									case (int)16: {
										HX_STACK_LINE(297)
										hx::AddEq(data->fPos,(int)2);
									}
									;break;
									case (int)17: {
										HX_STACK_LINE(297)
										hx::AddEq(data->oPos,(int)1);
									}
									;break;
									default: {
										HX_STACK_LINE(297)
										Dynamic();
									}
								}
							}
							HX_STACK_LINE(297)
							data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::LINE_BITMAP_STYLE;
							HX_STACK_LINE(297)
							tmp23 = data;
						}
						HX_STACK_LINE(297)
						::openfl::_internal::renderer::DrawCommandReader c = tmp23;		HX_STACK_VAR(c,"c");
						HX_STACK_LINE(298)
						::openfl::_internal::renderer::DrawCommandBuffer tmp24 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokeCommands;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(298)
						::openfl::_internal::renderer::DrawCommandBuffer tmp25 = c->buffer;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(298)
						int tmp26 = c->oPos;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(298)
						int tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(298)
						Dynamic tmp28 = tmp25->o->__GetItem(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(298)
						::openfl::display::BitmapData tmp29 = ((::openfl::display::BitmapData)(tmp28));		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(298)
						::openfl::_internal::renderer::DrawCommandBuffer tmp30 = c->buffer;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(298)
						int tmp31 = c->oPos;		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(298)
						int tmp32 = (tmp31 + (int)1);		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(298)
						Dynamic tmp33 = tmp30->o->__GetItem(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(298)
						::openfl::geom::Matrix tmp34 = ((::openfl::geom::Matrix)(tmp33));		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(298)
						::openfl::_internal::renderer::DrawCommandBuffer tmp35 = c->buffer;		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(298)
						int tmp36 = c->bPos;		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(298)
						int tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(298)
						bool tmp38 = tmp35->b->__get(tmp37);		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(298)
						bool tmp39 = tmp38;		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(298)
						::openfl::_internal::renderer::DrawCommandBuffer tmp40 = c->buffer;		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(298)
						int tmp41 = c->bPos;		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(298)
						int tmp42 = (tmp41 + (int)1);		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(298)
						bool tmp43 = tmp40->b->__get(tmp42);		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(298)
						bool tmp44 = tmp43;		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(298)
						tmp24->lineBitmapStyle(tmp29,tmp34,tmp39,tmp44);
					}
					;break;
					case (int)11: {
						HX_STACK_LINE(302)
						{
							HX_STACK_LINE(302)
							{
								HX_STACK_LINE(302)
								::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
								HX_STACK_LINE(302)
								switch( (int)(_g2->__Index())){
									case (int)0: {
										HX_STACK_LINE(302)
										hx::AddEq(data->oPos,(int)2);
										HX_STACK_LINE(302)
										hx::AddEq(data->bPos,(int)2);
									}
									;break;
									case (int)1: {
										HX_STACK_LINE(302)
										hx::AddEq(data->iPos,(int)1);
										HX_STACK_LINE(302)
										hx::AddEq(data->fPos,(int)1);
									}
									;break;
									case (int)2: {
										HX_STACK_LINE(302)
										hx::AddEq(data->oPos,(int)4);
										HX_STACK_LINE(302)
										hx::AddEq(data->iiPos,(int)2);
										HX_STACK_LINE(302)
										hx::AddEq(data->ffPos,(int)1);
										HX_STACK_LINE(302)
										hx::AddEq(data->fPos,(int)1);
									}
									;break;
									case (int)3: {
										HX_STACK_LINE(302)
										hx::AddEq(data->fPos,(int)6);
									}
									;break;
									case (int)4: {
										HX_STACK_LINE(302)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)5: {
										HX_STACK_LINE(302)
										hx::AddEq(data->fPos,(int)3);
									}
									;break;
									case (int)6: {
										HX_STACK_LINE(302)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)7: {
										HX_STACK_LINE(302)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)8: {
										HX_STACK_LINE(302)
										hx::AddEq(data->fPos,(int)5);
										HX_STACK_LINE(302)
										hx::AddEq(data->oPos,(int)1);
									}
									;break;
									case (int)10: {
										HX_STACK_LINE(302)
										hx::AddEq(data->oPos,(int)4);
									}
									;break;
									case (int)11: {
										HX_STACK_LINE(302)
										Dynamic();
									}
									;break;
									case (int)12: {
										HX_STACK_LINE(302)
										hx::AddEq(data->oPos,(int)2);
										HX_STACK_LINE(302)
										hx::AddEq(data->bPos,(int)2);
									}
									;break;
									case (int)13: {
										HX_STACK_LINE(302)
										hx::AddEq(data->oPos,(int)4);
										HX_STACK_LINE(302)
										hx::AddEq(data->iiPos,(int)2);
										HX_STACK_LINE(302)
										hx::AddEq(data->ffPos,(int)1);
										HX_STACK_LINE(302)
										hx::AddEq(data->fPos,(int)1);
									}
									;break;
									case (int)14: {
										HX_STACK_LINE(302)
										hx::AddEq(data->oPos,(int)4);
										HX_STACK_LINE(302)
										hx::AddEq(data->iPos,(int)1);
										HX_STACK_LINE(302)
										hx::AddEq(data->fPos,(int)2);
										HX_STACK_LINE(302)
										hx::AddEq(data->bPos,(int)1);
									}
									;break;
									case (int)15: {
										HX_STACK_LINE(302)
										hx::AddEq(data->fPos,(int)2);
									}
									;break;
									case (int)16: {
										HX_STACK_LINE(302)
										hx::AddEq(data->fPos,(int)2);
									}
									;break;
									case (int)17: {
										HX_STACK_LINE(302)
										hx::AddEq(data->oPos,(int)1);
									}
									;break;
									default: {
										HX_STACK_LINE(302)
										Dynamic();
									}
								}
							}
							HX_STACK_LINE(302)
							data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::END_FILL;
							HX_STACK_LINE(302)
							data;
						}
						HX_STACK_LINE(303)
						::openfl::_internal::renderer::cairo::CairoGraphics_obj::endFill();
						HX_STACK_LINE(304)
						::openfl::_internal::renderer::cairo::CairoGraphics_obj::endStroke();
						HX_STACK_LINE(306)
						bool tmp23 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::hasFill;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(306)
						bool tmp24;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(306)
						if ((tmp23)){
							HX_STACK_LINE(306)
							::lime::graphics::cairo::Cairo tmp25 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(306)
							::lime::graphics::cairo::Cairo tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(306)
							Float tmp27 = x;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(306)
							Float tmp28 = y;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(306)
							Float tmp29 = tmp27;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(306)
							Float tmp30 = tmp28;		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(306)
							tmp24 = tmp26->inFill(tmp29,tmp30);
						}
						else{
							HX_STACK_LINE(306)
							tmp24 = false;
						}
						HX_STACK_LINE(306)
						if ((tmp24)){
							HX_STACK_LINE(308)
							data->destroy();
							HX_STACK_LINE(309)
							return true;
						}
						HX_STACK_LINE(313)
						bool tmp25 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::hasStroke;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(313)
						bool tmp26;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(313)
						if ((tmp25)){
							HX_STACK_LINE(313)
							::lime::graphics::cairo::Cairo tmp27 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(313)
							::lime::graphics::cairo::Cairo tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(313)
							Float tmp29 = x;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(313)
							Float tmp30 = y;		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(313)
							Float tmp31 = tmp29;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(313)
							Float tmp32 = tmp30;		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(313)
							tmp26 = tmp28->inStroke(tmp31,tmp32);
						}
						else{
							HX_STACK_LINE(313)
							tmp26 = false;
						}
						HX_STACK_LINE(313)
						if ((tmp26)){
							HX_STACK_LINE(315)
							data->destroy();
							HX_STACK_LINE(316)
							return true;
						}
						HX_STACK_LINE(320)
						::openfl::_internal::renderer::cairo::CairoGraphics_obj::hasFill = false;
						HX_STACK_LINE(321)
						::openfl::_internal::renderer::cairo::CairoGraphics_obj::bitmapFill = null();
					}
					;break;
					case (int)0: case (int)1: case (int)2: {
						HX_STACK_LINE(325)
						::openfl::_internal::renderer::cairo::CairoGraphics_obj::endFill();
						HX_STACK_LINE(326)
						::openfl::_internal::renderer::cairo::CairoGraphics_obj::endStroke();
						HX_STACK_LINE(328)
						bool tmp23 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::hasFill;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(328)
						bool tmp24;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(328)
						if ((tmp23)){
							HX_STACK_LINE(328)
							::lime::graphics::cairo::Cairo tmp25 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(328)
							::lime::graphics::cairo::Cairo tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(328)
							Float tmp27 = x;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(328)
							Float tmp28 = y;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(328)
							Float tmp29 = tmp27;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(328)
							Float tmp30 = tmp28;		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(328)
							tmp24 = tmp26->inFill(tmp29,tmp30);
						}
						else{
							HX_STACK_LINE(328)
							tmp24 = false;
						}
						HX_STACK_LINE(328)
						if ((tmp24)){
							HX_STACK_LINE(330)
							data->destroy();
							HX_STACK_LINE(331)
							return true;
						}
						HX_STACK_LINE(335)
						bool tmp25 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::hasStroke;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(335)
						bool tmp26;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(335)
						if ((tmp25)){
							HX_STACK_LINE(335)
							::lime::graphics::cairo::Cairo tmp27 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(335)
							::lime::graphics::cairo::Cairo tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(335)
							Float tmp29 = x;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(335)
							Float tmp30 = y;		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(335)
							Float tmp31 = tmp29;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(335)
							Float tmp32 = tmp30;		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(335)
							tmp26 = tmp28->inStroke(tmp31,tmp32);
						}
						else{
							HX_STACK_LINE(335)
							tmp26 = false;
						}
						HX_STACK_LINE(335)
						if ((tmp26)){
							HX_STACK_LINE(337)
							data->destroy();
							HX_STACK_LINE(338)
							return true;
						}
						HX_STACK_LINE(342)
						bool tmp27 = (type == ::openfl::_internal::renderer::DrawCommandType_obj::BEGIN_BITMAP_FILL);		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(342)
						if ((tmp27)){
							HX_STACK_LINE(344)
							::openfl::_internal::renderer::DrawCommandReader tmp28;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(344)
							{
								HX_STACK_LINE(344)
								{
									HX_STACK_LINE(344)
									::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
									HX_STACK_LINE(344)
									switch( (int)(_g2->__Index())){
										case (int)0: {
											HX_STACK_LINE(344)
											hx::AddEq(data->oPos,(int)2);
											HX_STACK_LINE(344)
											hx::AddEq(data->bPos,(int)2);
										}
										;break;
										case (int)1: {
											HX_STACK_LINE(344)
											hx::AddEq(data->iPos,(int)1);
											HX_STACK_LINE(344)
											hx::AddEq(data->fPos,(int)1);
										}
										;break;
										case (int)2: {
											HX_STACK_LINE(344)
											hx::AddEq(data->oPos,(int)4);
											HX_STACK_LINE(344)
											hx::AddEq(data->iiPos,(int)2);
											HX_STACK_LINE(344)
											hx::AddEq(data->ffPos,(int)1);
											HX_STACK_LINE(344)
											hx::AddEq(data->fPos,(int)1);
										}
										;break;
										case (int)3: {
											HX_STACK_LINE(344)
											hx::AddEq(data->fPos,(int)6);
										}
										;break;
										case (int)4: {
											HX_STACK_LINE(344)
											hx::AddEq(data->fPos,(int)4);
										}
										;break;
										case (int)5: {
											HX_STACK_LINE(344)
											hx::AddEq(data->fPos,(int)3);
										}
										;break;
										case (int)6: {
											HX_STACK_LINE(344)
											hx::AddEq(data->fPos,(int)4);
										}
										;break;
										case (int)7: {
											HX_STACK_LINE(344)
											hx::AddEq(data->fPos,(int)4);
										}
										;break;
										case (int)8: {
											HX_STACK_LINE(344)
											hx::AddEq(data->fPos,(int)5);
											HX_STACK_LINE(344)
											hx::AddEq(data->oPos,(int)1);
										}
										;break;
										case (int)10: {
											HX_STACK_LINE(344)
											hx::AddEq(data->oPos,(int)4);
										}
										;break;
										case (int)11: {
											HX_STACK_LINE(344)
											Dynamic();
										}
										;break;
										case (int)12: {
											HX_STACK_LINE(344)
											hx::AddEq(data->oPos,(int)2);
											HX_STACK_LINE(344)
											hx::AddEq(data->bPos,(int)2);
										}
										;break;
										case (int)13: {
											HX_STACK_LINE(344)
											hx::AddEq(data->oPos,(int)4);
											HX_STACK_LINE(344)
											hx::AddEq(data->iiPos,(int)2);
											HX_STACK_LINE(344)
											hx::AddEq(data->ffPos,(int)1);
											HX_STACK_LINE(344)
											hx::AddEq(data->fPos,(int)1);
										}
										;break;
										case (int)14: {
											HX_STACK_LINE(344)
											hx::AddEq(data->oPos,(int)4);
											HX_STACK_LINE(344)
											hx::AddEq(data->iPos,(int)1);
											HX_STACK_LINE(344)
											hx::AddEq(data->fPos,(int)2);
											HX_STACK_LINE(344)
											hx::AddEq(data->bPos,(int)1);
										}
										;break;
										case (int)15: {
											HX_STACK_LINE(344)
											hx::AddEq(data->fPos,(int)2);
										}
										;break;
										case (int)16: {
											HX_STACK_LINE(344)
											hx::AddEq(data->fPos,(int)2);
										}
										;break;
										case (int)17: {
											HX_STACK_LINE(344)
											hx::AddEq(data->oPos,(int)1);
										}
										;break;
										default: {
											HX_STACK_LINE(344)
											Dynamic();
										}
									}
								}
								HX_STACK_LINE(344)
								data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::BEGIN_BITMAP_FILL;
								HX_STACK_LINE(344)
								tmp28 = data;
							}
							HX_STACK_LINE(344)
							::openfl::_internal::renderer::DrawCommandReader c = tmp28;		HX_STACK_VAR(c,"c");
							HX_STACK_LINE(345)
							::openfl::_internal::renderer::DrawCommandBuffer tmp29 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillCommands;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(345)
							::openfl::_internal::renderer::DrawCommandBuffer tmp30 = c->buffer;		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(345)
							int tmp31 = c->oPos;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(345)
							int tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(345)
							Dynamic tmp33 = tmp30->o->__GetItem(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(345)
							::openfl::display::BitmapData tmp34 = ((::openfl::display::BitmapData)(tmp33));		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(345)
							::openfl::_internal::renderer::DrawCommandBuffer tmp35 = c->buffer;		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(345)
							int tmp36 = c->oPos;		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(345)
							int tmp37 = (tmp36 + (int)1);		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(345)
							Dynamic tmp38 = tmp35->o->__GetItem(tmp37);		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(345)
							::openfl::geom::Matrix tmp39 = ((::openfl::geom::Matrix)(tmp38));		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(345)
							::openfl::_internal::renderer::DrawCommandBuffer tmp40 = c->buffer;		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(345)
							int tmp41 = c->bPos;		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(345)
							int tmp42 = tmp41;		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(345)
							bool tmp43 = tmp40->b->__get(tmp42);		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(345)
							::openfl::_internal::renderer::DrawCommandBuffer tmp44 = c->buffer;		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(345)
							int tmp45 = c->bPos;		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(345)
							int tmp46 = (tmp45 + (int)1);		HX_STACK_VAR(tmp46,"tmp46");
							HX_STACK_LINE(345)
							bool tmp47 = tmp44->b->__get(tmp46);		HX_STACK_VAR(tmp47,"tmp47");
							HX_STACK_LINE(345)
							tmp29->beginBitmapFill(tmp34,tmp39,tmp43,tmp47);
							HX_STACK_LINE(346)
							::openfl::_internal::renderer::DrawCommandBuffer tmp48 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokeCommands;		HX_STACK_VAR(tmp48,"tmp48");
							HX_STACK_LINE(346)
							::openfl::_internal::renderer::DrawCommandBuffer tmp49 = c->buffer;		HX_STACK_VAR(tmp49,"tmp49");
							HX_STACK_LINE(346)
							int tmp50 = c->oPos;		HX_STACK_VAR(tmp50,"tmp50");
							HX_STACK_LINE(346)
							int tmp51 = tmp50;		HX_STACK_VAR(tmp51,"tmp51");
							HX_STACK_LINE(346)
							Dynamic tmp52 = tmp49->o->__GetItem(tmp51);		HX_STACK_VAR(tmp52,"tmp52");
							HX_STACK_LINE(346)
							::openfl::display::BitmapData tmp53 = ((::openfl::display::BitmapData)(tmp52));		HX_STACK_VAR(tmp53,"tmp53");
							HX_STACK_LINE(346)
							::openfl::_internal::renderer::DrawCommandBuffer tmp54 = c->buffer;		HX_STACK_VAR(tmp54,"tmp54");
							HX_STACK_LINE(346)
							int tmp55 = c->oPos;		HX_STACK_VAR(tmp55,"tmp55");
							HX_STACK_LINE(346)
							int tmp56 = (tmp55 + (int)1);		HX_STACK_VAR(tmp56,"tmp56");
							HX_STACK_LINE(346)
							Dynamic tmp57 = tmp54->o->__GetItem(tmp56);		HX_STACK_VAR(tmp57,"tmp57");
							HX_STACK_LINE(346)
							::openfl::geom::Matrix tmp58 = ((::openfl::geom::Matrix)(tmp57));		HX_STACK_VAR(tmp58,"tmp58");
							HX_STACK_LINE(346)
							::openfl::_internal::renderer::DrawCommandBuffer tmp59 = c->buffer;		HX_STACK_VAR(tmp59,"tmp59");
							HX_STACK_LINE(346)
							int tmp60 = c->bPos;		HX_STACK_VAR(tmp60,"tmp60");
							HX_STACK_LINE(346)
							int tmp61 = tmp60;		HX_STACK_VAR(tmp61,"tmp61");
							HX_STACK_LINE(346)
							bool tmp62 = tmp59->b->__get(tmp61);		HX_STACK_VAR(tmp62,"tmp62");
							HX_STACK_LINE(346)
							::openfl::_internal::renderer::DrawCommandBuffer tmp63 = c->buffer;		HX_STACK_VAR(tmp63,"tmp63");
							HX_STACK_LINE(346)
							int tmp64 = c->bPos;		HX_STACK_VAR(tmp64,"tmp64");
							HX_STACK_LINE(346)
							int tmp65 = (tmp64 + (int)1);		HX_STACK_VAR(tmp65,"tmp65");
							HX_STACK_LINE(346)
							bool tmp66 = tmp63->b->__get(tmp65);		HX_STACK_VAR(tmp66,"tmp66");
							HX_STACK_LINE(346)
							tmp48->beginBitmapFill(tmp53,tmp58,tmp62,tmp66);
						}
						else{
							HX_STACK_LINE(348)
							bool tmp28 = (type == ::openfl::_internal::renderer::DrawCommandType_obj::BEGIN_GRADIENT_FILL);		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(348)
							if ((tmp28)){
								HX_STACK_LINE(350)
								::openfl::_internal::renderer::DrawCommandReader tmp29;		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(350)
								{
									HX_STACK_LINE(350)
									{
										HX_STACK_LINE(350)
										::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
										HX_STACK_LINE(350)
										switch( (int)(_g2->__Index())){
											case (int)0: {
												HX_STACK_LINE(350)
												hx::AddEq(data->oPos,(int)2);
												HX_STACK_LINE(350)
												hx::AddEq(data->bPos,(int)2);
											}
											;break;
											case (int)1: {
												HX_STACK_LINE(350)
												hx::AddEq(data->iPos,(int)1);
												HX_STACK_LINE(350)
												hx::AddEq(data->fPos,(int)1);
											}
											;break;
											case (int)2: {
												HX_STACK_LINE(350)
												hx::AddEq(data->oPos,(int)4);
												HX_STACK_LINE(350)
												hx::AddEq(data->iiPos,(int)2);
												HX_STACK_LINE(350)
												hx::AddEq(data->ffPos,(int)1);
												HX_STACK_LINE(350)
												hx::AddEq(data->fPos,(int)1);
											}
											;break;
											case (int)3: {
												HX_STACK_LINE(350)
												hx::AddEq(data->fPos,(int)6);
											}
											;break;
											case (int)4: {
												HX_STACK_LINE(350)
												hx::AddEq(data->fPos,(int)4);
											}
											;break;
											case (int)5: {
												HX_STACK_LINE(350)
												hx::AddEq(data->fPos,(int)3);
											}
											;break;
											case (int)6: {
												HX_STACK_LINE(350)
												hx::AddEq(data->fPos,(int)4);
											}
											;break;
											case (int)7: {
												HX_STACK_LINE(350)
												hx::AddEq(data->fPos,(int)4);
											}
											;break;
											case (int)8: {
												HX_STACK_LINE(350)
												hx::AddEq(data->fPos,(int)5);
												HX_STACK_LINE(350)
												hx::AddEq(data->oPos,(int)1);
											}
											;break;
											case (int)10: {
												HX_STACK_LINE(350)
												hx::AddEq(data->oPos,(int)4);
											}
											;break;
											case (int)11: {
												HX_STACK_LINE(350)
												Dynamic();
											}
											;break;
											case (int)12: {
												HX_STACK_LINE(350)
												hx::AddEq(data->oPos,(int)2);
												HX_STACK_LINE(350)
												hx::AddEq(data->bPos,(int)2);
											}
											;break;
											case (int)13: {
												HX_STACK_LINE(350)
												hx::AddEq(data->oPos,(int)4);
												HX_STACK_LINE(350)
												hx::AddEq(data->iiPos,(int)2);
												HX_STACK_LINE(350)
												hx::AddEq(data->ffPos,(int)1);
												HX_STACK_LINE(350)
												hx::AddEq(data->fPos,(int)1);
											}
											;break;
											case (int)14: {
												HX_STACK_LINE(350)
												hx::AddEq(data->oPos,(int)4);
												HX_STACK_LINE(350)
												hx::AddEq(data->iPos,(int)1);
												HX_STACK_LINE(350)
												hx::AddEq(data->fPos,(int)2);
												HX_STACK_LINE(350)
												hx::AddEq(data->bPos,(int)1);
											}
											;break;
											case (int)15: {
												HX_STACK_LINE(350)
												hx::AddEq(data->fPos,(int)2);
											}
											;break;
											case (int)16: {
												HX_STACK_LINE(350)
												hx::AddEq(data->fPos,(int)2);
											}
											;break;
											case (int)17: {
												HX_STACK_LINE(350)
												hx::AddEq(data->oPos,(int)1);
											}
											;break;
											default: {
												HX_STACK_LINE(350)
												Dynamic();
											}
										}
									}
									HX_STACK_LINE(350)
									data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::BEGIN_GRADIENT_FILL;
									HX_STACK_LINE(350)
									tmp29 = data;
								}
								HX_STACK_LINE(350)
								::openfl::_internal::renderer::DrawCommandReader c = tmp29;		HX_STACK_VAR(c,"c");
								HX_STACK_LINE(351)
								::openfl::_internal::renderer::DrawCommandBuffer tmp30 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillCommands;		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(351)
								::openfl::_internal::renderer::DrawCommandBuffer tmp31 = c->buffer;		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(351)
								int tmp32 = c->oPos;		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(351)
								int tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(351)
								Dynamic tmp34 = tmp31->o->__GetItem(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(351)
								Dynamic tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(351)
								::openfl::_internal::renderer::DrawCommandBuffer tmp36 = c->buffer;		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(351)
								int tmp37 = c->iiPos;		HX_STACK_VAR(tmp37,"tmp37");
								HX_STACK_LINE(351)
								int tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
								HX_STACK_LINE(351)
								::openfl::_internal::renderer::DrawCommandBuffer tmp39 = c->buffer;		HX_STACK_VAR(tmp39,"tmp39");
								HX_STACK_LINE(351)
								int tmp40 = c->ffPos;		HX_STACK_VAR(tmp40,"tmp40");
								HX_STACK_LINE(351)
								int tmp41 = tmp40;		HX_STACK_VAR(tmp41,"tmp41");
								HX_STACK_LINE(351)
								::openfl::_internal::renderer::DrawCommandBuffer tmp42 = c->buffer;		HX_STACK_VAR(tmp42,"tmp42");
								HX_STACK_LINE(351)
								int tmp43 = c->iiPos;		HX_STACK_VAR(tmp43,"tmp43");
								HX_STACK_LINE(351)
								int tmp44 = (tmp43 + (int)1);		HX_STACK_VAR(tmp44,"tmp44");
								HX_STACK_LINE(351)
								::openfl::_internal::renderer::DrawCommandBuffer tmp45 = c->buffer;		HX_STACK_VAR(tmp45,"tmp45");
								HX_STACK_LINE(351)
								int tmp46 = c->oPos;		HX_STACK_VAR(tmp46,"tmp46");
								HX_STACK_LINE(351)
								int tmp47 = (tmp46 + (int)1);		HX_STACK_VAR(tmp47,"tmp47");
								HX_STACK_LINE(351)
								Dynamic tmp48 = tmp45->o->__GetItem(tmp47);		HX_STACK_VAR(tmp48,"tmp48");
								HX_STACK_LINE(351)
								::openfl::geom::Matrix tmp49 = ((::openfl::geom::Matrix)(tmp48));		HX_STACK_VAR(tmp49,"tmp49");
								HX_STACK_LINE(351)
								::openfl::_internal::renderer::DrawCommandBuffer tmp50 = c->buffer;		HX_STACK_VAR(tmp50,"tmp50");
								HX_STACK_LINE(351)
								int tmp51 = c->oPos;		HX_STACK_VAR(tmp51,"tmp51");
								HX_STACK_LINE(351)
								int tmp52 = (tmp51 + (int)2);		HX_STACK_VAR(tmp52,"tmp52");
								HX_STACK_LINE(351)
								Dynamic tmp53 = tmp50->o->__GetItem(tmp52);		HX_STACK_VAR(tmp53,"tmp53");
								HX_STACK_LINE(351)
								Dynamic tmp54 = tmp53;		HX_STACK_VAR(tmp54,"tmp54");
								HX_STACK_LINE(351)
								::openfl::_internal::renderer::DrawCommandBuffer tmp55 = c->buffer;		HX_STACK_VAR(tmp55,"tmp55");
								HX_STACK_LINE(351)
								int tmp56 = c->oPos;		HX_STACK_VAR(tmp56,"tmp56");
								HX_STACK_LINE(351)
								int tmp57 = (tmp56 + (int)3);		HX_STACK_VAR(tmp57,"tmp57");
								HX_STACK_LINE(351)
								Dynamic tmp58 = tmp55->o->__GetItem(tmp57);		HX_STACK_VAR(tmp58,"tmp58");
								HX_STACK_LINE(351)
								Dynamic tmp59 = tmp58;		HX_STACK_VAR(tmp59,"tmp59");
								HX_STACK_LINE(351)
								::openfl::_internal::renderer::DrawCommandBuffer tmp60 = c->buffer;		HX_STACK_VAR(tmp60,"tmp60");
								HX_STACK_LINE(351)
								int tmp61 = c->fPos;		HX_STACK_VAR(tmp61,"tmp61");
								HX_STACK_LINE(351)
								int tmp62 = tmp61;		HX_STACK_VAR(tmp62,"tmp62");
								HX_STACK_LINE(351)
								Float tmp63 = tmp60->f->__get(tmp62);		HX_STACK_VAR(tmp63,"tmp63");
								HX_STACK_LINE(351)
								Float tmp64 = tmp63;		HX_STACK_VAR(tmp64,"tmp64");
								HX_STACK_LINE(351)
								tmp30->beginGradientFill(tmp35,tmp36->ii->__get(tmp38).StaticCast< Array< int > >(),tmp39->ff->__get(tmp41).StaticCast< Array< Float > >(),tmp42->ii->__get(tmp44).StaticCast< Array< int > >(),tmp49,tmp54,tmp59,tmp64);
								HX_STACK_LINE(352)
								::openfl::_internal::renderer::DrawCommandBuffer tmp65 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokeCommands;		HX_STACK_VAR(tmp65,"tmp65");
								HX_STACK_LINE(352)
								::openfl::_internal::renderer::DrawCommandBuffer tmp66 = c->buffer;		HX_STACK_VAR(tmp66,"tmp66");
								HX_STACK_LINE(352)
								int tmp67 = c->oPos;		HX_STACK_VAR(tmp67,"tmp67");
								HX_STACK_LINE(352)
								int tmp68 = tmp67;		HX_STACK_VAR(tmp68,"tmp68");
								HX_STACK_LINE(352)
								Dynamic tmp69 = tmp66->o->__GetItem(tmp68);		HX_STACK_VAR(tmp69,"tmp69");
								HX_STACK_LINE(352)
								Dynamic tmp70 = tmp69;		HX_STACK_VAR(tmp70,"tmp70");
								HX_STACK_LINE(352)
								::openfl::_internal::renderer::DrawCommandBuffer tmp71 = c->buffer;		HX_STACK_VAR(tmp71,"tmp71");
								HX_STACK_LINE(352)
								int tmp72 = c->iiPos;		HX_STACK_VAR(tmp72,"tmp72");
								HX_STACK_LINE(352)
								int tmp73 = tmp72;		HX_STACK_VAR(tmp73,"tmp73");
								HX_STACK_LINE(352)
								::openfl::_internal::renderer::DrawCommandBuffer tmp74 = c->buffer;		HX_STACK_VAR(tmp74,"tmp74");
								HX_STACK_LINE(352)
								int tmp75 = c->ffPos;		HX_STACK_VAR(tmp75,"tmp75");
								HX_STACK_LINE(352)
								int tmp76 = tmp75;		HX_STACK_VAR(tmp76,"tmp76");
								HX_STACK_LINE(352)
								::openfl::_internal::renderer::DrawCommandBuffer tmp77 = c->buffer;		HX_STACK_VAR(tmp77,"tmp77");
								HX_STACK_LINE(352)
								int tmp78 = c->iiPos;		HX_STACK_VAR(tmp78,"tmp78");
								HX_STACK_LINE(352)
								int tmp79 = (tmp78 + (int)1);		HX_STACK_VAR(tmp79,"tmp79");
								HX_STACK_LINE(352)
								::openfl::_internal::renderer::DrawCommandBuffer tmp80 = c->buffer;		HX_STACK_VAR(tmp80,"tmp80");
								HX_STACK_LINE(352)
								int tmp81 = c->oPos;		HX_STACK_VAR(tmp81,"tmp81");
								HX_STACK_LINE(352)
								int tmp82 = (tmp81 + (int)1);		HX_STACK_VAR(tmp82,"tmp82");
								HX_STACK_LINE(352)
								Dynamic tmp83 = tmp80->o->__GetItem(tmp82);		HX_STACK_VAR(tmp83,"tmp83");
								HX_STACK_LINE(352)
								::openfl::geom::Matrix tmp84 = ((::openfl::geom::Matrix)(tmp83));		HX_STACK_VAR(tmp84,"tmp84");
								HX_STACK_LINE(352)
								::openfl::_internal::renderer::DrawCommandBuffer tmp85 = c->buffer;		HX_STACK_VAR(tmp85,"tmp85");
								HX_STACK_LINE(352)
								int tmp86 = c->oPos;		HX_STACK_VAR(tmp86,"tmp86");
								HX_STACK_LINE(352)
								int tmp87 = (tmp86 + (int)2);		HX_STACK_VAR(tmp87,"tmp87");
								HX_STACK_LINE(352)
								Dynamic tmp88 = tmp85->o->__GetItem(tmp87);		HX_STACK_VAR(tmp88,"tmp88");
								HX_STACK_LINE(352)
								Dynamic tmp89 = tmp88;		HX_STACK_VAR(tmp89,"tmp89");
								HX_STACK_LINE(352)
								::openfl::_internal::renderer::DrawCommandBuffer tmp90 = c->buffer;		HX_STACK_VAR(tmp90,"tmp90");
								HX_STACK_LINE(352)
								int tmp91 = c->oPos;		HX_STACK_VAR(tmp91,"tmp91");
								HX_STACK_LINE(352)
								int tmp92 = (tmp91 + (int)3);		HX_STACK_VAR(tmp92,"tmp92");
								HX_STACK_LINE(352)
								Dynamic tmp93 = tmp90->o->__GetItem(tmp92);		HX_STACK_VAR(tmp93,"tmp93");
								HX_STACK_LINE(352)
								Dynamic tmp94 = tmp93;		HX_STACK_VAR(tmp94,"tmp94");
								HX_STACK_LINE(352)
								::openfl::_internal::renderer::DrawCommandBuffer tmp95 = c->buffer;		HX_STACK_VAR(tmp95,"tmp95");
								HX_STACK_LINE(352)
								int tmp96 = c->fPos;		HX_STACK_VAR(tmp96,"tmp96");
								HX_STACK_LINE(352)
								int tmp97 = tmp96;		HX_STACK_VAR(tmp97,"tmp97");
								HX_STACK_LINE(352)
								Float tmp98 = tmp95->f->__get(tmp97);		HX_STACK_VAR(tmp98,"tmp98");
								HX_STACK_LINE(352)
								Float tmp99 = tmp98;		HX_STACK_VAR(tmp99,"tmp99");
								HX_STACK_LINE(352)
								tmp65->beginGradientFill(tmp70,tmp71->ii->__get(tmp73).StaticCast< Array< int > >(),tmp74->ff->__get(tmp76).StaticCast< Array< Float > >(),tmp77->ii->__get(tmp79).StaticCast< Array< int > >(),tmp84,tmp89,tmp94,tmp99);
							}
							else{
								HX_STACK_LINE(356)
								::openfl::_internal::renderer::DrawCommandReader tmp29;		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(356)
								{
									HX_STACK_LINE(356)
									{
										HX_STACK_LINE(356)
										::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
										HX_STACK_LINE(356)
										switch( (int)(_g2->__Index())){
											case (int)0: {
												HX_STACK_LINE(356)
												hx::AddEq(data->oPos,(int)2);
												HX_STACK_LINE(356)
												hx::AddEq(data->bPos,(int)2);
											}
											;break;
											case (int)1: {
												HX_STACK_LINE(356)
												hx::AddEq(data->iPos,(int)1);
												HX_STACK_LINE(356)
												hx::AddEq(data->fPos,(int)1);
											}
											;break;
											case (int)2: {
												HX_STACK_LINE(356)
												hx::AddEq(data->oPos,(int)4);
												HX_STACK_LINE(356)
												hx::AddEq(data->iiPos,(int)2);
												HX_STACK_LINE(356)
												hx::AddEq(data->ffPos,(int)1);
												HX_STACK_LINE(356)
												hx::AddEq(data->fPos,(int)1);
											}
											;break;
											case (int)3: {
												HX_STACK_LINE(356)
												hx::AddEq(data->fPos,(int)6);
											}
											;break;
											case (int)4: {
												HX_STACK_LINE(356)
												hx::AddEq(data->fPos,(int)4);
											}
											;break;
											case (int)5: {
												HX_STACK_LINE(356)
												hx::AddEq(data->fPos,(int)3);
											}
											;break;
											case (int)6: {
												HX_STACK_LINE(356)
												hx::AddEq(data->fPos,(int)4);
											}
											;break;
											case (int)7: {
												HX_STACK_LINE(356)
												hx::AddEq(data->fPos,(int)4);
											}
											;break;
											case (int)8: {
												HX_STACK_LINE(356)
												hx::AddEq(data->fPos,(int)5);
												HX_STACK_LINE(356)
												hx::AddEq(data->oPos,(int)1);
											}
											;break;
											case (int)10: {
												HX_STACK_LINE(356)
												hx::AddEq(data->oPos,(int)4);
											}
											;break;
											case (int)11: {
												HX_STACK_LINE(356)
												Dynamic();
											}
											;break;
											case (int)12: {
												HX_STACK_LINE(356)
												hx::AddEq(data->oPos,(int)2);
												HX_STACK_LINE(356)
												hx::AddEq(data->bPos,(int)2);
											}
											;break;
											case (int)13: {
												HX_STACK_LINE(356)
												hx::AddEq(data->oPos,(int)4);
												HX_STACK_LINE(356)
												hx::AddEq(data->iiPos,(int)2);
												HX_STACK_LINE(356)
												hx::AddEq(data->ffPos,(int)1);
												HX_STACK_LINE(356)
												hx::AddEq(data->fPos,(int)1);
											}
											;break;
											case (int)14: {
												HX_STACK_LINE(356)
												hx::AddEq(data->oPos,(int)4);
												HX_STACK_LINE(356)
												hx::AddEq(data->iPos,(int)1);
												HX_STACK_LINE(356)
												hx::AddEq(data->fPos,(int)2);
												HX_STACK_LINE(356)
												hx::AddEq(data->bPos,(int)1);
											}
											;break;
											case (int)15: {
												HX_STACK_LINE(356)
												hx::AddEq(data->fPos,(int)2);
											}
											;break;
											case (int)16: {
												HX_STACK_LINE(356)
												hx::AddEq(data->fPos,(int)2);
											}
											;break;
											case (int)17: {
												HX_STACK_LINE(356)
												hx::AddEq(data->oPos,(int)1);
											}
											;break;
											default: {
												HX_STACK_LINE(356)
												Dynamic();
											}
										}
									}
									HX_STACK_LINE(356)
									data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::BEGIN_FILL;
									HX_STACK_LINE(356)
									tmp29 = data;
								}
								HX_STACK_LINE(356)
								::openfl::_internal::renderer::DrawCommandReader c = tmp29;		HX_STACK_VAR(c,"c");
								HX_STACK_LINE(357)
								::openfl::_internal::renderer::DrawCommandBuffer tmp30 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillCommands;		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(357)
								::openfl::_internal::renderer::DrawCommandBuffer tmp31 = c->buffer;		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(357)
								int tmp32 = c->iPos;		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(357)
								int tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(357)
								int tmp34 = tmp31->i->__get(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(357)
								tmp30->beginFill(tmp34,(int)1);
								HX_STACK_LINE(358)
								::openfl::_internal::renderer::DrawCommandBuffer tmp35 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokeCommands;		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(358)
								::openfl::_internal::renderer::DrawCommandBuffer tmp36 = c->buffer;		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(358)
								int tmp37 = c->iPos;		HX_STACK_VAR(tmp37,"tmp37");
								HX_STACK_LINE(358)
								int tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
								HX_STACK_LINE(358)
								int tmp39 = tmp36->i->__get(tmp38);		HX_STACK_VAR(tmp39,"tmp39");
								HX_STACK_LINE(358)
								tmp35->beginFill(tmp39,(int)1);
							}
						}
					}
					;break;
					case (int)5: {
						HX_STACK_LINE(364)
						::openfl::_internal::renderer::DrawCommandReader tmp23;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(364)
						{
							HX_STACK_LINE(364)
							{
								HX_STACK_LINE(364)
								::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
								HX_STACK_LINE(364)
								switch( (int)(_g2->__Index())){
									case (int)0: {
										HX_STACK_LINE(364)
										hx::AddEq(data->oPos,(int)2);
										HX_STACK_LINE(364)
										hx::AddEq(data->bPos,(int)2);
									}
									;break;
									case (int)1: {
										HX_STACK_LINE(364)
										hx::AddEq(data->iPos,(int)1);
										HX_STACK_LINE(364)
										hx::AddEq(data->fPos,(int)1);
									}
									;break;
									case (int)2: {
										HX_STACK_LINE(364)
										hx::AddEq(data->oPos,(int)4);
										HX_STACK_LINE(364)
										hx::AddEq(data->iiPos,(int)2);
										HX_STACK_LINE(364)
										hx::AddEq(data->ffPos,(int)1);
										HX_STACK_LINE(364)
										hx::AddEq(data->fPos,(int)1);
									}
									;break;
									case (int)3: {
										HX_STACK_LINE(364)
										hx::AddEq(data->fPos,(int)6);
									}
									;break;
									case (int)4: {
										HX_STACK_LINE(364)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)5: {
										HX_STACK_LINE(364)
										hx::AddEq(data->fPos,(int)3);
									}
									;break;
									case (int)6: {
										HX_STACK_LINE(364)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)7: {
										HX_STACK_LINE(364)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)8: {
										HX_STACK_LINE(364)
										hx::AddEq(data->fPos,(int)5);
										HX_STACK_LINE(364)
										hx::AddEq(data->oPos,(int)1);
									}
									;break;
									case (int)10: {
										HX_STACK_LINE(364)
										hx::AddEq(data->oPos,(int)4);
									}
									;break;
									case (int)11: {
										HX_STACK_LINE(364)
										Dynamic();
									}
									;break;
									case (int)12: {
										HX_STACK_LINE(364)
										hx::AddEq(data->oPos,(int)2);
										HX_STACK_LINE(364)
										hx::AddEq(data->bPos,(int)2);
									}
									;break;
									case (int)13: {
										HX_STACK_LINE(364)
										hx::AddEq(data->oPos,(int)4);
										HX_STACK_LINE(364)
										hx::AddEq(data->iiPos,(int)2);
										HX_STACK_LINE(364)
										hx::AddEq(data->ffPos,(int)1);
										HX_STACK_LINE(364)
										hx::AddEq(data->fPos,(int)1);
									}
									;break;
									case (int)14: {
										HX_STACK_LINE(364)
										hx::AddEq(data->oPos,(int)4);
										HX_STACK_LINE(364)
										hx::AddEq(data->iPos,(int)1);
										HX_STACK_LINE(364)
										hx::AddEq(data->fPos,(int)2);
										HX_STACK_LINE(364)
										hx::AddEq(data->bPos,(int)1);
									}
									;break;
									case (int)15: {
										HX_STACK_LINE(364)
										hx::AddEq(data->fPos,(int)2);
									}
									;break;
									case (int)16: {
										HX_STACK_LINE(364)
										hx::AddEq(data->fPos,(int)2);
									}
									;break;
									case (int)17: {
										HX_STACK_LINE(364)
										hx::AddEq(data->oPos,(int)1);
									}
									;break;
									default: {
										HX_STACK_LINE(364)
										Dynamic();
									}
								}
							}
							HX_STACK_LINE(364)
							data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::DRAW_CIRCLE;
							HX_STACK_LINE(364)
							tmp23 = data;
						}
						HX_STACK_LINE(364)
						::openfl::_internal::renderer::DrawCommandReader c = tmp23;		HX_STACK_VAR(c,"c");
						HX_STACK_LINE(365)
						::openfl::_internal::renderer::DrawCommandBuffer tmp24 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillCommands;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(365)
						::openfl::_internal::renderer::DrawCommandBuffer tmp25 = c->buffer;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(365)
						int tmp26 = c->fPos;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(365)
						int tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(365)
						Float tmp28 = tmp25->f->__get(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(365)
						::openfl::_internal::renderer::DrawCommandBuffer tmp29 = c->buffer;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(365)
						int tmp30 = c->fPos;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(365)
						int tmp31 = (tmp30 + (int)1);		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(365)
						Float tmp32 = tmp29->f->__get(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(365)
						::openfl::_internal::renderer::DrawCommandBuffer tmp33 = c->buffer;		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(365)
						int tmp34 = c->fPos;		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(365)
						int tmp35 = (tmp34 + (int)2);		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(365)
						Float tmp36 = tmp33->f->__get(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(365)
						tmp24->drawCircle(tmp28,tmp32,tmp36);
						HX_STACK_LINE(366)
						::openfl::_internal::renderer::DrawCommandBuffer tmp37 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokeCommands;		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(366)
						::openfl::_internal::renderer::DrawCommandBuffer tmp38 = c->buffer;		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(366)
						int tmp39 = c->fPos;		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(366)
						int tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(366)
						Float tmp41 = tmp38->f->__get(tmp40);		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(366)
						::openfl::_internal::renderer::DrawCommandBuffer tmp42 = c->buffer;		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(366)
						int tmp43 = c->fPos;		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(366)
						int tmp44 = (tmp43 + (int)1);		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(366)
						Float tmp45 = tmp42->f->__get(tmp44);		HX_STACK_VAR(tmp45,"tmp45");
						HX_STACK_LINE(366)
						::openfl::_internal::renderer::DrawCommandBuffer tmp46 = c->buffer;		HX_STACK_VAR(tmp46,"tmp46");
						HX_STACK_LINE(366)
						int tmp47 = c->fPos;		HX_STACK_VAR(tmp47,"tmp47");
						HX_STACK_LINE(366)
						int tmp48 = (tmp47 + (int)2);		HX_STACK_VAR(tmp48,"tmp48");
						HX_STACK_LINE(366)
						Float tmp49 = tmp46->f->__get(tmp48);		HX_STACK_VAR(tmp49,"tmp49");
						HX_STACK_LINE(366)
						tmp37->drawCircle(tmp41,tmp45,tmp49);
					}
					;break;
					case (int)6: {
						HX_STACK_LINE(370)
						::openfl::_internal::renderer::DrawCommandReader tmp23;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(370)
						{
							HX_STACK_LINE(370)
							{
								HX_STACK_LINE(370)
								::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
								HX_STACK_LINE(370)
								switch( (int)(_g2->__Index())){
									case (int)0: {
										HX_STACK_LINE(370)
										hx::AddEq(data->oPos,(int)2);
										HX_STACK_LINE(370)
										hx::AddEq(data->bPos,(int)2);
									}
									;break;
									case (int)1: {
										HX_STACK_LINE(370)
										hx::AddEq(data->iPos,(int)1);
										HX_STACK_LINE(370)
										hx::AddEq(data->fPos,(int)1);
									}
									;break;
									case (int)2: {
										HX_STACK_LINE(370)
										hx::AddEq(data->oPos,(int)4);
										HX_STACK_LINE(370)
										hx::AddEq(data->iiPos,(int)2);
										HX_STACK_LINE(370)
										hx::AddEq(data->ffPos,(int)1);
										HX_STACK_LINE(370)
										hx::AddEq(data->fPos,(int)1);
									}
									;break;
									case (int)3: {
										HX_STACK_LINE(370)
										hx::AddEq(data->fPos,(int)6);
									}
									;break;
									case (int)4: {
										HX_STACK_LINE(370)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)5: {
										HX_STACK_LINE(370)
										hx::AddEq(data->fPos,(int)3);
									}
									;break;
									case (int)6: {
										HX_STACK_LINE(370)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)7: {
										HX_STACK_LINE(370)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)8: {
										HX_STACK_LINE(370)
										hx::AddEq(data->fPos,(int)5);
										HX_STACK_LINE(370)
										hx::AddEq(data->oPos,(int)1);
									}
									;break;
									case (int)10: {
										HX_STACK_LINE(370)
										hx::AddEq(data->oPos,(int)4);
									}
									;break;
									case (int)11: {
										HX_STACK_LINE(370)
										Dynamic();
									}
									;break;
									case (int)12: {
										HX_STACK_LINE(370)
										hx::AddEq(data->oPos,(int)2);
										HX_STACK_LINE(370)
										hx::AddEq(data->bPos,(int)2);
									}
									;break;
									case (int)13: {
										HX_STACK_LINE(370)
										hx::AddEq(data->oPos,(int)4);
										HX_STACK_LINE(370)
										hx::AddEq(data->iiPos,(int)2);
										HX_STACK_LINE(370)
										hx::AddEq(data->ffPos,(int)1);
										HX_STACK_LINE(370)
										hx::AddEq(data->fPos,(int)1);
									}
									;break;
									case (int)14: {
										HX_STACK_LINE(370)
										hx::AddEq(data->oPos,(int)4);
										HX_STACK_LINE(370)
										hx::AddEq(data->iPos,(int)1);
										HX_STACK_LINE(370)
										hx::AddEq(data->fPos,(int)2);
										HX_STACK_LINE(370)
										hx::AddEq(data->bPos,(int)1);
									}
									;break;
									case (int)15: {
										HX_STACK_LINE(370)
										hx::AddEq(data->fPos,(int)2);
									}
									;break;
									case (int)16: {
										HX_STACK_LINE(370)
										hx::AddEq(data->fPos,(int)2);
									}
									;break;
									case (int)17: {
										HX_STACK_LINE(370)
										hx::AddEq(data->oPos,(int)1);
									}
									;break;
									default: {
										HX_STACK_LINE(370)
										Dynamic();
									}
								}
							}
							HX_STACK_LINE(370)
							data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::DRAW_ELLIPSE;
							HX_STACK_LINE(370)
							tmp23 = data;
						}
						HX_STACK_LINE(370)
						::openfl::_internal::renderer::DrawCommandReader c = tmp23;		HX_STACK_VAR(c,"c");
						HX_STACK_LINE(371)
						::openfl::_internal::renderer::DrawCommandBuffer tmp24 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillCommands;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(371)
						::openfl::_internal::renderer::DrawCommandBuffer tmp25 = c->buffer;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(371)
						int tmp26 = c->fPos;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(371)
						int tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(371)
						Float tmp28 = tmp25->f->__get(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(371)
						::openfl::_internal::renderer::DrawCommandBuffer tmp29 = c->buffer;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(371)
						int tmp30 = c->fPos;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(371)
						int tmp31 = (tmp30 + (int)1);		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(371)
						Float tmp32 = tmp29->f->__get(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(371)
						::openfl::_internal::renderer::DrawCommandBuffer tmp33 = c->buffer;		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(371)
						int tmp34 = c->fPos;		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(371)
						int tmp35 = (tmp34 + (int)2);		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(371)
						Float tmp36 = tmp33->f->__get(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(371)
						::openfl::_internal::renderer::DrawCommandBuffer tmp37 = c->buffer;		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(371)
						int tmp38 = c->fPos;		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(371)
						int tmp39 = (tmp38 + (int)3);		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(371)
						Float tmp40 = tmp37->f->__get(tmp39);		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(371)
						tmp24->drawEllipse(tmp28,tmp32,tmp36,tmp40);
						HX_STACK_LINE(372)
						::openfl::_internal::renderer::DrawCommandBuffer tmp41 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokeCommands;		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(372)
						::openfl::_internal::renderer::DrawCommandBuffer tmp42 = c->buffer;		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(372)
						int tmp43 = c->fPos;		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(372)
						int tmp44 = tmp43;		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(372)
						Float tmp45 = tmp42->f->__get(tmp44);		HX_STACK_VAR(tmp45,"tmp45");
						HX_STACK_LINE(372)
						::openfl::_internal::renderer::DrawCommandBuffer tmp46 = c->buffer;		HX_STACK_VAR(tmp46,"tmp46");
						HX_STACK_LINE(372)
						int tmp47 = c->fPos;		HX_STACK_VAR(tmp47,"tmp47");
						HX_STACK_LINE(372)
						int tmp48 = (tmp47 + (int)1);		HX_STACK_VAR(tmp48,"tmp48");
						HX_STACK_LINE(372)
						Float tmp49 = tmp46->f->__get(tmp48);		HX_STACK_VAR(tmp49,"tmp49");
						HX_STACK_LINE(372)
						::openfl::_internal::renderer::DrawCommandBuffer tmp50 = c->buffer;		HX_STACK_VAR(tmp50,"tmp50");
						HX_STACK_LINE(372)
						int tmp51 = c->fPos;		HX_STACK_VAR(tmp51,"tmp51");
						HX_STACK_LINE(372)
						int tmp52 = (tmp51 + (int)2);		HX_STACK_VAR(tmp52,"tmp52");
						HX_STACK_LINE(372)
						Float tmp53 = tmp50->f->__get(tmp52);		HX_STACK_VAR(tmp53,"tmp53");
						HX_STACK_LINE(372)
						::openfl::_internal::renderer::DrawCommandBuffer tmp54 = c->buffer;		HX_STACK_VAR(tmp54,"tmp54");
						HX_STACK_LINE(372)
						int tmp55 = c->fPos;		HX_STACK_VAR(tmp55,"tmp55");
						HX_STACK_LINE(372)
						int tmp56 = (tmp55 + (int)3);		HX_STACK_VAR(tmp56,"tmp56");
						HX_STACK_LINE(372)
						Float tmp57 = tmp54->f->__get(tmp56);		HX_STACK_VAR(tmp57,"tmp57");
						HX_STACK_LINE(372)
						tmp41->drawEllipse(tmp45,tmp49,tmp53,tmp57);
					}
					;break;
					case (int)7: {
						HX_STACK_LINE(376)
						::openfl::_internal::renderer::DrawCommandReader tmp23;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(376)
						{
							HX_STACK_LINE(376)
							{
								HX_STACK_LINE(376)
								::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
								HX_STACK_LINE(376)
								switch( (int)(_g2->__Index())){
									case (int)0: {
										HX_STACK_LINE(376)
										hx::AddEq(data->oPos,(int)2);
										HX_STACK_LINE(376)
										hx::AddEq(data->bPos,(int)2);
									}
									;break;
									case (int)1: {
										HX_STACK_LINE(376)
										hx::AddEq(data->iPos,(int)1);
										HX_STACK_LINE(376)
										hx::AddEq(data->fPos,(int)1);
									}
									;break;
									case (int)2: {
										HX_STACK_LINE(376)
										hx::AddEq(data->oPos,(int)4);
										HX_STACK_LINE(376)
										hx::AddEq(data->iiPos,(int)2);
										HX_STACK_LINE(376)
										hx::AddEq(data->ffPos,(int)1);
										HX_STACK_LINE(376)
										hx::AddEq(data->fPos,(int)1);
									}
									;break;
									case (int)3: {
										HX_STACK_LINE(376)
										hx::AddEq(data->fPos,(int)6);
									}
									;break;
									case (int)4: {
										HX_STACK_LINE(376)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)5: {
										HX_STACK_LINE(376)
										hx::AddEq(data->fPos,(int)3);
									}
									;break;
									case (int)6: {
										HX_STACK_LINE(376)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)7: {
										HX_STACK_LINE(376)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)8: {
										HX_STACK_LINE(376)
										hx::AddEq(data->fPos,(int)5);
										HX_STACK_LINE(376)
										hx::AddEq(data->oPos,(int)1);
									}
									;break;
									case (int)10: {
										HX_STACK_LINE(376)
										hx::AddEq(data->oPos,(int)4);
									}
									;break;
									case (int)11: {
										HX_STACK_LINE(376)
										Dynamic();
									}
									;break;
									case (int)12: {
										HX_STACK_LINE(376)
										hx::AddEq(data->oPos,(int)2);
										HX_STACK_LINE(376)
										hx::AddEq(data->bPos,(int)2);
									}
									;break;
									case (int)13: {
										HX_STACK_LINE(376)
										hx::AddEq(data->oPos,(int)4);
										HX_STACK_LINE(376)
										hx::AddEq(data->iiPos,(int)2);
										HX_STACK_LINE(376)
										hx::AddEq(data->ffPos,(int)1);
										HX_STACK_LINE(376)
										hx::AddEq(data->fPos,(int)1);
									}
									;break;
									case (int)14: {
										HX_STACK_LINE(376)
										hx::AddEq(data->oPos,(int)4);
										HX_STACK_LINE(376)
										hx::AddEq(data->iPos,(int)1);
										HX_STACK_LINE(376)
										hx::AddEq(data->fPos,(int)2);
										HX_STACK_LINE(376)
										hx::AddEq(data->bPos,(int)1);
									}
									;break;
									case (int)15: {
										HX_STACK_LINE(376)
										hx::AddEq(data->fPos,(int)2);
									}
									;break;
									case (int)16: {
										HX_STACK_LINE(376)
										hx::AddEq(data->fPos,(int)2);
									}
									;break;
									case (int)17: {
										HX_STACK_LINE(376)
										hx::AddEq(data->oPos,(int)1);
									}
									;break;
									default: {
										HX_STACK_LINE(376)
										Dynamic();
									}
								}
							}
							HX_STACK_LINE(376)
							data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::DRAW_RECT;
							HX_STACK_LINE(376)
							tmp23 = data;
						}
						HX_STACK_LINE(376)
						::openfl::_internal::renderer::DrawCommandReader c = tmp23;		HX_STACK_VAR(c,"c");
						HX_STACK_LINE(377)
						::openfl::_internal::renderer::DrawCommandBuffer tmp24 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillCommands;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(377)
						::openfl::_internal::renderer::DrawCommandBuffer tmp25 = c->buffer;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(377)
						int tmp26 = c->fPos;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(377)
						int tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(377)
						Float tmp28 = tmp25->f->__get(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(377)
						::openfl::_internal::renderer::DrawCommandBuffer tmp29 = c->buffer;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(377)
						int tmp30 = c->fPos;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(377)
						int tmp31 = (tmp30 + (int)1);		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(377)
						Float tmp32 = tmp29->f->__get(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(377)
						::openfl::_internal::renderer::DrawCommandBuffer tmp33 = c->buffer;		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(377)
						int tmp34 = c->fPos;		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(377)
						int tmp35 = (tmp34 + (int)2);		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(377)
						Float tmp36 = tmp33->f->__get(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(377)
						::openfl::_internal::renderer::DrawCommandBuffer tmp37 = c->buffer;		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(377)
						int tmp38 = c->fPos;		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(377)
						int tmp39 = (tmp38 + (int)3);		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(377)
						Float tmp40 = tmp37->f->__get(tmp39);		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(377)
						tmp24->drawRect(tmp28,tmp32,tmp36,tmp40);
						HX_STACK_LINE(378)
						::openfl::_internal::renderer::DrawCommandBuffer tmp41 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokeCommands;		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(378)
						::openfl::_internal::renderer::DrawCommandBuffer tmp42 = c->buffer;		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(378)
						int tmp43 = c->fPos;		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(378)
						int tmp44 = tmp43;		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(378)
						Float tmp45 = tmp42->f->__get(tmp44);		HX_STACK_VAR(tmp45,"tmp45");
						HX_STACK_LINE(378)
						::openfl::_internal::renderer::DrawCommandBuffer tmp46 = c->buffer;		HX_STACK_VAR(tmp46,"tmp46");
						HX_STACK_LINE(378)
						int tmp47 = c->fPos;		HX_STACK_VAR(tmp47,"tmp47");
						HX_STACK_LINE(378)
						int tmp48 = (tmp47 + (int)1);		HX_STACK_VAR(tmp48,"tmp48");
						HX_STACK_LINE(378)
						Float tmp49 = tmp46->f->__get(tmp48);		HX_STACK_VAR(tmp49,"tmp49");
						HX_STACK_LINE(378)
						::openfl::_internal::renderer::DrawCommandBuffer tmp50 = c->buffer;		HX_STACK_VAR(tmp50,"tmp50");
						HX_STACK_LINE(378)
						int tmp51 = c->fPos;		HX_STACK_VAR(tmp51,"tmp51");
						HX_STACK_LINE(378)
						int tmp52 = (tmp51 + (int)2);		HX_STACK_VAR(tmp52,"tmp52");
						HX_STACK_LINE(378)
						Float tmp53 = tmp50->f->__get(tmp52);		HX_STACK_VAR(tmp53,"tmp53");
						HX_STACK_LINE(378)
						::openfl::_internal::renderer::DrawCommandBuffer tmp54 = c->buffer;		HX_STACK_VAR(tmp54,"tmp54");
						HX_STACK_LINE(378)
						int tmp55 = c->fPos;		HX_STACK_VAR(tmp55,"tmp55");
						HX_STACK_LINE(378)
						int tmp56 = (tmp55 + (int)3);		HX_STACK_VAR(tmp56,"tmp56");
						HX_STACK_LINE(378)
						Float tmp57 = tmp54->f->__get(tmp56);		HX_STACK_VAR(tmp57,"tmp57");
						HX_STACK_LINE(378)
						tmp41->drawRect(tmp45,tmp49,tmp53,tmp57);
					}
					;break;
					case (int)8: {
						HX_STACK_LINE(382)
						::openfl::_internal::renderer::DrawCommandReader tmp23;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(382)
						{
							HX_STACK_LINE(382)
							{
								HX_STACK_LINE(382)
								::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
								HX_STACK_LINE(382)
								switch( (int)(_g2->__Index())){
									case (int)0: {
										HX_STACK_LINE(382)
										hx::AddEq(data->oPos,(int)2);
										HX_STACK_LINE(382)
										hx::AddEq(data->bPos,(int)2);
									}
									;break;
									case (int)1: {
										HX_STACK_LINE(382)
										hx::AddEq(data->iPos,(int)1);
										HX_STACK_LINE(382)
										hx::AddEq(data->fPos,(int)1);
									}
									;break;
									case (int)2: {
										HX_STACK_LINE(382)
										hx::AddEq(data->oPos,(int)4);
										HX_STACK_LINE(382)
										hx::AddEq(data->iiPos,(int)2);
										HX_STACK_LINE(382)
										hx::AddEq(data->ffPos,(int)1);
										HX_STACK_LINE(382)
										hx::AddEq(data->fPos,(int)1);
									}
									;break;
									case (int)3: {
										HX_STACK_LINE(382)
										hx::AddEq(data->fPos,(int)6);
									}
									;break;
									case (int)4: {
										HX_STACK_LINE(382)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)5: {
										HX_STACK_LINE(382)
										hx::AddEq(data->fPos,(int)3);
									}
									;break;
									case (int)6: {
										HX_STACK_LINE(382)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)7: {
										HX_STACK_LINE(382)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)8: {
										HX_STACK_LINE(382)
										hx::AddEq(data->fPos,(int)5);
										HX_STACK_LINE(382)
										hx::AddEq(data->oPos,(int)1);
									}
									;break;
									case (int)10: {
										HX_STACK_LINE(382)
										hx::AddEq(data->oPos,(int)4);
									}
									;break;
									case (int)11: {
										HX_STACK_LINE(382)
										Dynamic();
									}
									;break;
									case (int)12: {
										HX_STACK_LINE(382)
										hx::AddEq(data->oPos,(int)2);
										HX_STACK_LINE(382)
										hx::AddEq(data->bPos,(int)2);
									}
									;break;
									case (int)13: {
										HX_STACK_LINE(382)
										hx::AddEq(data->oPos,(int)4);
										HX_STACK_LINE(382)
										hx::AddEq(data->iiPos,(int)2);
										HX_STACK_LINE(382)
										hx::AddEq(data->ffPos,(int)1);
										HX_STACK_LINE(382)
										hx::AddEq(data->fPos,(int)1);
									}
									;break;
									case (int)14: {
										HX_STACK_LINE(382)
										hx::AddEq(data->oPos,(int)4);
										HX_STACK_LINE(382)
										hx::AddEq(data->iPos,(int)1);
										HX_STACK_LINE(382)
										hx::AddEq(data->fPos,(int)2);
										HX_STACK_LINE(382)
										hx::AddEq(data->bPos,(int)1);
									}
									;break;
									case (int)15: {
										HX_STACK_LINE(382)
										hx::AddEq(data->fPos,(int)2);
									}
									;break;
									case (int)16: {
										HX_STACK_LINE(382)
										hx::AddEq(data->fPos,(int)2);
									}
									;break;
									case (int)17: {
										HX_STACK_LINE(382)
										hx::AddEq(data->oPos,(int)1);
									}
									;break;
									default: {
										HX_STACK_LINE(382)
										Dynamic();
									}
								}
							}
							HX_STACK_LINE(382)
							data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::DRAW_ROUND_RECT;
							HX_STACK_LINE(382)
							tmp23 = data;
						}
						HX_STACK_LINE(382)
						::openfl::_internal::renderer::DrawCommandReader c = tmp23;		HX_STACK_VAR(c,"c");
						HX_STACK_LINE(383)
						::openfl::_internal::renderer::DrawCommandBuffer tmp24 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillCommands;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(383)
						::openfl::_internal::renderer::DrawCommandBuffer tmp25 = c->buffer;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(383)
						int tmp26 = c->fPos;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(383)
						int tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(383)
						Float tmp28 = tmp25->f->__get(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(383)
						::openfl::_internal::renderer::DrawCommandBuffer tmp29 = c->buffer;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(383)
						int tmp30 = c->fPos;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(383)
						int tmp31 = (tmp30 + (int)1);		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(383)
						Float tmp32 = tmp29->f->__get(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(383)
						::openfl::_internal::renderer::DrawCommandBuffer tmp33 = c->buffer;		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(383)
						int tmp34 = c->fPos;		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(383)
						int tmp35 = (tmp34 + (int)2);		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(383)
						Float tmp36 = tmp33->f->__get(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(383)
						::openfl::_internal::renderer::DrawCommandBuffer tmp37 = c->buffer;		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(383)
						int tmp38 = c->fPos;		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(383)
						int tmp39 = (tmp38 + (int)3);		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(383)
						Float tmp40 = tmp37->f->__get(tmp39);		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(383)
						::openfl::_internal::renderer::DrawCommandBuffer tmp41 = c->buffer;		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(383)
						int tmp42 = c->fPos;		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(383)
						int tmp43 = (tmp42 + (int)4);		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(383)
						Float tmp44 = tmp41->f->__get(tmp43);		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(383)
						::openfl::_internal::renderer::DrawCommandBuffer tmp45 = c->buffer;		HX_STACK_VAR(tmp45,"tmp45");
						HX_STACK_LINE(383)
						int tmp46 = c->oPos;		HX_STACK_VAR(tmp46,"tmp46");
						HX_STACK_LINE(383)
						int tmp47 = tmp46;		HX_STACK_VAR(tmp47,"tmp47");
						HX_STACK_LINE(383)
						Dynamic tmp48 = tmp45->o->__GetItem(tmp47);		HX_STACK_VAR(tmp48,"tmp48");
						HX_STACK_LINE(383)
						Dynamic tmp49 = tmp48;		HX_STACK_VAR(tmp49,"tmp49");
						HX_STACK_LINE(383)
						tmp24->drawRoundRect(tmp28,tmp32,tmp36,tmp40,tmp44,tmp49);
						HX_STACK_LINE(384)
						::openfl::_internal::renderer::DrawCommandBuffer tmp50 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokeCommands;		HX_STACK_VAR(tmp50,"tmp50");
						HX_STACK_LINE(384)
						::openfl::_internal::renderer::DrawCommandBuffer tmp51 = c->buffer;		HX_STACK_VAR(tmp51,"tmp51");
						HX_STACK_LINE(384)
						int tmp52 = c->fPos;		HX_STACK_VAR(tmp52,"tmp52");
						HX_STACK_LINE(384)
						int tmp53 = tmp52;		HX_STACK_VAR(tmp53,"tmp53");
						HX_STACK_LINE(384)
						Float tmp54 = tmp51->f->__get(tmp53);		HX_STACK_VAR(tmp54,"tmp54");
						HX_STACK_LINE(384)
						::openfl::_internal::renderer::DrawCommandBuffer tmp55 = c->buffer;		HX_STACK_VAR(tmp55,"tmp55");
						HX_STACK_LINE(384)
						int tmp56 = c->fPos;		HX_STACK_VAR(tmp56,"tmp56");
						HX_STACK_LINE(384)
						int tmp57 = (tmp56 + (int)1);		HX_STACK_VAR(tmp57,"tmp57");
						HX_STACK_LINE(384)
						Float tmp58 = tmp55->f->__get(tmp57);		HX_STACK_VAR(tmp58,"tmp58");
						HX_STACK_LINE(384)
						::openfl::_internal::renderer::DrawCommandBuffer tmp59 = c->buffer;		HX_STACK_VAR(tmp59,"tmp59");
						HX_STACK_LINE(384)
						int tmp60 = c->fPos;		HX_STACK_VAR(tmp60,"tmp60");
						HX_STACK_LINE(384)
						int tmp61 = (tmp60 + (int)2);		HX_STACK_VAR(tmp61,"tmp61");
						HX_STACK_LINE(384)
						Float tmp62 = tmp59->f->__get(tmp61);		HX_STACK_VAR(tmp62,"tmp62");
						HX_STACK_LINE(384)
						::openfl::_internal::renderer::DrawCommandBuffer tmp63 = c->buffer;		HX_STACK_VAR(tmp63,"tmp63");
						HX_STACK_LINE(384)
						int tmp64 = c->fPos;		HX_STACK_VAR(tmp64,"tmp64");
						HX_STACK_LINE(384)
						int tmp65 = (tmp64 + (int)3);		HX_STACK_VAR(tmp65,"tmp65");
						HX_STACK_LINE(384)
						Float tmp66 = tmp63->f->__get(tmp65);		HX_STACK_VAR(tmp66,"tmp66");
						HX_STACK_LINE(384)
						::openfl::_internal::renderer::DrawCommandBuffer tmp67 = c->buffer;		HX_STACK_VAR(tmp67,"tmp67");
						HX_STACK_LINE(384)
						int tmp68 = c->fPos;		HX_STACK_VAR(tmp68,"tmp68");
						HX_STACK_LINE(384)
						int tmp69 = (tmp68 + (int)4);		HX_STACK_VAR(tmp69,"tmp69");
						HX_STACK_LINE(384)
						Float tmp70 = tmp67->f->__get(tmp69);		HX_STACK_VAR(tmp70,"tmp70");
						HX_STACK_LINE(384)
						::openfl::_internal::renderer::DrawCommandBuffer tmp71 = c->buffer;		HX_STACK_VAR(tmp71,"tmp71");
						HX_STACK_LINE(384)
						int tmp72 = c->oPos;		HX_STACK_VAR(tmp72,"tmp72");
						HX_STACK_LINE(384)
						int tmp73 = tmp72;		HX_STACK_VAR(tmp73,"tmp73");
						HX_STACK_LINE(384)
						Dynamic tmp74 = tmp71->o->__GetItem(tmp73);		HX_STACK_VAR(tmp74,"tmp74");
						HX_STACK_LINE(384)
						Dynamic tmp75 = tmp74;		HX_STACK_VAR(tmp75,"tmp75");
						HX_STACK_LINE(384)
						tmp50->drawRoundRect(tmp54,tmp58,tmp62,tmp66,tmp70,tmp75);
					}
					;break;
					default: {
						HX_STACK_LINE(388)
						{
							HX_STACK_LINE(388)
							::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(388)
							switch( (int)(_g2->__Index())){
								case (int)0: {
									HX_STACK_LINE(388)
									hx::AddEq(data->oPos,(int)2);
									HX_STACK_LINE(388)
									hx::AddEq(data->bPos,(int)2);
								}
								;break;
								case (int)1: {
									HX_STACK_LINE(388)
									hx::AddEq(data->iPos,(int)1);
									HX_STACK_LINE(388)
									hx::AddEq(data->fPos,(int)1);
								}
								;break;
								case (int)2: {
									HX_STACK_LINE(388)
									hx::AddEq(data->oPos,(int)4);
									HX_STACK_LINE(388)
									hx::AddEq(data->iiPos,(int)2);
									HX_STACK_LINE(388)
									hx::AddEq(data->ffPos,(int)1);
									HX_STACK_LINE(388)
									hx::AddEq(data->fPos,(int)1);
								}
								;break;
								case (int)3: {
									HX_STACK_LINE(388)
									hx::AddEq(data->fPos,(int)6);
								}
								;break;
								case (int)4: {
									HX_STACK_LINE(388)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)5: {
									HX_STACK_LINE(388)
									hx::AddEq(data->fPos,(int)3);
								}
								;break;
								case (int)6: {
									HX_STACK_LINE(388)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)7: {
									HX_STACK_LINE(388)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)8: {
									HX_STACK_LINE(388)
									hx::AddEq(data->fPos,(int)5);
									HX_STACK_LINE(388)
									hx::AddEq(data->oPos,(int)1);
								}
								;break;
								case (int)10: {
									HX_STACK_LINE(388)
									hx::AddEq(data->oPos,(int)4);
								}
								;break;
								case (int)11: {
									HX_STACK_LINE(388)
									Dynamic();
								}
								;break;
								case (int)12: {
									HX_STACK_LINE(388)
									hx::AddEq(data->oPos,(int)2);
									HX_STACK_LINE(388)
									hx::AddEq(data->bPos,(int)2);
								}
								;break;
								case (int)13: {
									HX_STACK_LINE(388)
									hx::AddEq(data->oPos,(int)4);
									HX_STACK_LINE(388)
									hx::AddEq(data->iiPos,(int)2);
									HX_STACK_LINE(388)
									hx::AddEq(data->ffPos,(int)1);
									HX_STACK_LINE(388)
									hx::AddEq(data->fPos,(int)1);
								}
								;break;
								case (int)14: {
									HX_STACK_LINE(388)
									hx::AddEq(data->oPos,(int)4);
									HX_STACK_LINE(388)
									hx::AddEq(data->iPos,(int)1);
									HX_STACK_LINE(388)
									hx::AddEq(data->fPos,(int)2);
									HX_STACK_LINE(388)
									hx::AddEq(data->bPos,(int)1);
								}
								;break;
								case (int)15: {
									HX_STACK_LINE(388)
									hx::AddEq(data->fPos,(int)2);
								}
								;break;
								case (int)16: {
									HX_STACK_LINE(388)
									hx::AddEq(data->fPos,(int)2);
								}
								;break;
								case (int)17: {
									HX_STACK_LINE(388)
									hx::AddEq(data->oPos,(int)1);
								}
								;break;
								default: {
									HX_STACK_LINE(388)
									Dynamic();
								}
							}
						}
						HX_STACK_LINE(388)
						data->prev = type;
					}
				}
			}
		}
		HX_STACK_LINE(394)
		::openfl::_internal::renderer::DrawCommandBuffer tmp20 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillCommands;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(394)
		int tmp21 = tmp20->get_length();		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(394)
		bool tmp22 = (tmp21 > (int)0);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(394)
		if ((tmp22)){
			HX_STACK_LINE(396)
			::openfl::_internal::renderer::cairo::CairoGraphics_obj::endFill();
		}
		HX_STACK_LINE(400)
		::openfl::_internal::renderer::DrawCommandBuffer tmp23 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokeCommands;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(400)
		int tmp24 = tmp23->get_length();		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(400)
		bool tmp25 = (tmp24 > (int)0);		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(400)
		if ((tmp25)){
			HX_STACK_LINE(402)
			::openfl::_internal::renderer::cairo::CairoGraphics_obj::endStroke();
		}
		HX_STACK_LINE(406)
		data->destroy();
		HX_STACK_LINE(408)
		bool tmp26 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::hasFill;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(408)
		bool tmp27;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(408)
		if ((tmp26)){
			HX_STACK_LINE(408)
			::lime::graphics::cairo::Cairo tmp28 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(408)
			::lime::graphics::cairo::Cairo tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(408)
			Float tmp30 = x;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(408)
			Float tmp31 = y;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(408)
			Float tmp32 = tmp30;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(408)
			Float tmp33 = tmp31;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(408)
			tmp27 = tmp29->inFill(tmp32,tmp33);
		}
		else{
			HX_STACK_LINE(408)
			tmp27 = false;
		}
		HX_STACK_LINE(408)
		if ((tmp27)){
			HX_STACK_LINE(410)
			return true;
		}
		HX_STACK_LINE(414)
		bool tmp28 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::hasStroke;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(414)
		bool tmp29;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(414)
		if ((tmp28)){
			HX_STACK_LINE(414)
			::lime::graphics::cairo::Cairo tmp30 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(414)
			::lime::graphics::cairo::Cairo tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(414)
			Float tmp32 = x;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(414)
			Float tmp33 = y;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(414)
			Float tmp34 = tmp32;		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(414)
			Float tmp35 = tmp33;		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(414)
			tmp29 = tmp31->inStroke(tmp34,tmp35);
		}
		else{
			HX_STACK_LINE(414)
			tmp29 = false;
		}
		HX_STACK_LINE(414)
		if ((tmp29)){
			HX_STACK_LINE(416)
			return true;
		}
	}
	HX_STACK_LINE(423)
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(CairoGraphics_obj,hitTest,return )

bool CairoGraphics_obj::isCCW( Float x1,Float y1,Float x2,Float y2,Float x3,Float y3){
	HX_STACK_FRAME("openfl._internal.renderer.cairo.CairoGraphics","isCCW",0x5353f111,"openfl._internal.renderer.cairo.CairoGraphics.isCCW","openfl/_internal/renderer/cairo/CairoGraphics.hx",428,0x744ae94c)
	HX_STACK_ARG(x1,"x1")
	HX_STACK_ARG(y1,"y1")
	HX_STACK_ARG(x2,"x2")
	HX_STACK_ARG(y2,"y2")
	HX_STACK_ARG(x3,"x3")
	HX_STACK_ARG(y3,"y3")
	HX_STACK_LINE(430)
	Float tmp = (x2 - x1);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(430)
	Float tmp1 = (y3 - y1);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(430)
	Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(430)
	Float tmp3 = (y2 - y1);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(430)
	Float tmp4 = (x3 - x1);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(430)
	Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(430)
	Float tmp6 = (tmp2 - tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(430)
	bool tmp7 = (tmp6 < (int)0);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(430)
	return tmp7;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(CairoGraphics_obj,isCCW,return )

Dynamic CairoGraphics_obj::normalizeUVT( ::openfl::_Vector::FloatVector uvt,hx::Null< bool >  __o_skipT){
bool skipT = __o_skipT.Default(false);
	HX_STACK_FRAME("openfl._internal.renderer.cairo.CairoGraphics","normalizeUVT",0xc9c604e2,"openfl._internal.renderer.cairo.CairoGraphics.normalizeUVT","openfl/_internal/renderer/cairo/CairoGraphics.hx",435,0x744ae94c)
	HX_STACK_ARG(uvt,"uvt")
	HX_STACK_ARG(skipT,"skipT")
{
		HX_STACK_LINE(437)
		Float tmp = ::Math_obj::NEGATIVE_INFINITY;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(437)
		Float max = tmp;		HX_STACK_VAR(max,"max");
		HX_STACK_LINE(438)
		Float tmp1 = ::Math_obj::NEGATIVE_INFINITY;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(438)
		Float tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(439)
		int tmp3 = uvt->get_length();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(439)
		int len = tmp3;		HX_STACK_VAR(len,"len");
		HX_STACK_LINE(441)
		{
			HX_STACK_LINE(441)
			int _g1 = (int)1;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(441)
			int tmp4 = (len + (int)1);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(441)
			int _g = tmp4;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(441)
			while((true)){
				HX_STACK_LINE(441)
				bool tmp5 = (_g1 < _g);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(441)
				bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(441)
				if ((tmp6)){
					HX_STACK_LINE(441)
					break;
				}
				HX_STACK_LINE(441)
				int tmp7 = (_g1)++;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(441)
				int t = tmp7;		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(443)
				bool tmp8 = skipT;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(443)
				bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(443)
				if ((tmp8)){
					HX_STACK_LINE(443)
					int tmp10 = hx::Mod(t,(int)3);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(443)
					int tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(443)
					tmp9 = (tmp11 == (int)0);
				}
				else{
					HX_STACK_LINE(443)
					tmp9 = false;
				}
				HX_STACK_LINE(443)
				if ((tmp9)){
					HX_STACK_LINE(445)
					continue;
				}
				HX_STACK_LINE(449)
				int tmp10 = (t - (int)1);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(449)
				Float tmp11 = uvt->get(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(449)
				tmp2 = tmp11;
				HX_STACK_LINE(451)
				bool tmp12 = (max < tmp2);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(451)
				if ((tmp12)){
					HX_STACK_LINE(453)
					max = tmp2;
				}
			}
		}
		HX_STACK_LINE(459)
		::openfl::_Vector::FloatVector tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(459)
		{
			HX_STACK_LINE(459)
			int length = null();		HX_STACK_VAR(length,"length");
			HX_STACK_LINE(459)
			bool fixed = null();		HX_STACK_VAR(fixed,"fixed");
			HX_STACK_LINE(459)
			::openfl::_Vector::FloatVector tmp5 = ::openfl::_Vector::FloatVector_obj::__new(length,fixed,null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(459)
			::openfl::_Vector::FloatVector tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(459)
			tmp4 = tmp6;
		}
		HX_STACK_LINE(459)
		::openfl::_Vector::FloatVector result = tmp4;		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(461)
		{
			HX_STACK_LINE(461)
			int _g1 = (int)1;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(461)
			int tmp5 = (len + (int)1);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(461)
			int _g = tmp5;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(461)
			while((true)){
				HX_STACK_LINE(461)
				bool tmp6 = (_g1 < _g);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(461)
				bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(461)
				if ((tmp7)){
					HX_STACK_LINE(461)
					break;
				}
				HX_STACK_LINE(461)
				int tmp8 = (_g1)++;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(461)
				int t = tmp8;		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(463)
				bool tmp9 = skipT;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(463)
				bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(463)
				if ((tmp9)){
					HX_STACK_LINE(463)
					int tmp11 = hx::Mod(t,(int)3);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(463)
					int tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(463)
					tmp10 = (tmp12 == (int)0);
				}
				else{
					HX_STACK_LINE(463)
					tmp10 = false;
				}
				HX_STACK_LINE(463)
				if ((tmp10)){
					HX_STACK_LINE(465)
					continue;
				}
				HX_STACK_LINE(469)
				{
					HX_STACK_LINE(469)
					int tmp11 = (t - (int)1);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(469)
					Float tmp12 = uvt->get(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(469)
					Float tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(469)
					Float tmp14 = max;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(469)
					Float tmp15 = (Float(tmp13) / Float(tmp14));		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(469)
					Float x = tmp15;		HX_STACK_VAR(x,"x");
					HX_STACK_LINE(469)
					Float tmp16 = x;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(469)
					result->push(tmp16);
				}
			}
		}
		struct _Function_1_1{
			inline static Dynamic Block( ::openfl::_Vector::FloatVector &result,Float &max){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/_internal/renderer/cairo/CairoGraphics.hx",473,0x744ae94c)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("max","\xa4","\x0a","\x53","\x00") , max,false);
					__result->Add(HX_HCSTRING("uvt","\xf3","\x2e","\x59","\x00") , result,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(473)
		Dynamic tmp5 = _Function_1_1::Block(result,max);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(473)
		return tmp5;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CairoGraphics_obj,normalizeUVT,return )

Void CairoGraphics_obj::playCommands( ::openfl::_internal::renderer::DrawCommandBuffer commands,hx::Null< bool >  __o_stroke){
bool stroke = __o_stroke.Default(false);
	HX_STACK_FRAME("openfl._internal.renderer.cairo.CairoGraphics","playCommands",0xcc85aa58,"openfl._internal.renderer.cairo.CairoGraphics.playCommands","openfl/_internal/renderer/cairo/CairoGraphics.hx",478,0x744ae94c)
	HX_STACK_ARG(commands,"commands")
	HX_STACK_ARG(stroke,"stroke")
{
		HX_STACK_LINE(480)
		int tmp = commands->get_length();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(480)
		bool tmp1 = (tmp == (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(480)
		if ((tmp1)){
			HX_STACK_LINE(480)
			return null();
		}
		HX_STACK_LINE(482)
		::openfl::display::Graphics tmp2 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::graphics;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(482)
		::openfl::_internal::renderer::cairo::CairoGraphics_obj::bounds = tmp2->__bounds;
		HX_STACK_LINE(484)
		::openfl::geom::Rectangle tmp3 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::bounds;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(484)
		Float offsetX = tmp3->x;		HX_STACK_VAR(offsetX,"offsetX");
		HX_STACK_LINE(485)
		::openfl::geom::Rectangle tmp4 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::bounds;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(485)
		Float offsetY = tmp4->y;		HX_STACK_VAR(offsetY,"offsetY");
		HX_STACK_LINE(487)
		Float positionX = ((Float)0.0);		HX_STACK_VAR(positionX,"positionX");
		HX_STACK_LINE(488)
		Float positionY = ((Float)0.0);		HX_STACK_VAR(positionY,"positionY");
		HX_STACK_LINE(490)
		bool closeGap = false;		HX_STACK_VAR(closeGap,"closeGap");
		HX_STACK_LINE(491)
		Float startX = ((Float)0.0);		HX_STACK_VAR(startX,"startX");
		HX_STACK_LINE(492)
		Float startY = ((Float)0.0);		HX_STACK_VAR(startY,"startY");
		HX_STACK_LINE(494)
		::lime::graphics::cairo::Cairo tmp5 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(494)
		tmp5->set_fillRule((int)1);
		HX_STACK_LINE(495)
		::lime::graphics::cairo::Cairo tmp6 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(495)
		tmp6->set_antialias((int)3);
		HX_STACK_LINE(497)
		bool hasPath = false;		HX_STACK_VAR(hasPath,"hasPath");
		HX_STACK_LINE(499)
		::openfl::_internal::renderer::DrawCommandReader tmp7 = ::openfl::_internal::renderer::DrawCommandReader_obj::__new(commands);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(499)
		::openfl::_internal::renderer::DrawCommandReader data = tmp7;		HX_STACK_VAR(data,"data");
		HX_STACK_LINE(501)
		{
			HX_STACK_LINE(501)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(501)
			Array< ::Dynamic > _g1 = commands->types;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(501)
			while((true)){
				HX_STACK_LINE(501)
				bool tmp8 = (_g < _g1->length);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(501)
				bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(501)
				if ((tmp9)){
					HX_STACK_LINE(501)
					break;
				}
				HX_STACK_LINE(501)
				::openfl::_internal::renderer::DrawCommandType tmp10 = _g1->__get(_g).StaticCast< ::openfl::_internal::renderer::DrawCommandType >();		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(501)
				::openfl::_internal::renderer::DrawCommandType type = tmp10;		HX_STACK_VAR(type,"type");
				HX_STACK_LINE(501)
				++(_g);
				HX_STACK_LINE(503)
				int _switch_1 = (type->__Index());
				if (  ( _switch_1==(int)3)){
					HX_STACK_LINE(507)
					::openfl::_internal::renderer::DrawCommandReader tmp11;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(507)
					{
						HX_STACK_LINE(507)
						{
							HX_STACK_LINE(507)
							::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(507)
							switch( (int)(_g2->__Index())){
								case (int)0: {
									HX_STACK_LINE(507)
									hx::AddEq(data->oPos,(int)2);
									HX_STACK_LINE(507)
									hx::AddEq(data->bPos,(int)2);
								}
								;break;
								case (int)1: {
									HX_STACK_LINE(507)
									hx::AddEq(data->iPos,(int)1);
									HX_STACK_LINE(507)
									hx::AddEq(data->fPos,(int)1);
								}
								;break;
								case (int)2: {
									HX_STACK_LINE(507)
									hx::AddEq(data->oPos,(int)4);
									HX_STACK_LINE(507)
									hx::AddEq(data->iiPos,(int)2);
									HX_STACK_LINE(507)
									hx::AddEq(data->ffPos,(int)1);
									HX_STACK_LINE(507)
									hx::AddEq(data->fPos,(int)1);
								}
								;break;
								case (int)3: {
									HX_STACK_LINE(507)
									hx::AddEq(data->fPos,(int)6);
								}
								;break;
								case (int)4: {
									HX_STACK_LINE(507)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)5: {
									HX_STACK_LINE(507)
									hx::AddEq(data->fPos,(int)3);
								}
								;break;
								case (int)6: {
									HX_STACK_LINE(507)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)7: {
									HX_STACK_LINE(507)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)8: {
									HX_STACK_LINE(507)
									hx::AddEq(data->fPos,(int)5);
									HX_STACK_LINE(507)
									hx::AddEq(data->oPos,(int)1);
								}
								;break;
								case (int)10: {
									HX_STACK_LINE(507)
									hx::AddEq(data->oPos,(int)4);
								}
								;break;
								case (int)11: {
									HX_STACK_LINE(507)
									Dynamic();
								}
								;break;
								case (int)12: {
									HX_STACK_LINE(507)
									hx::AddEq(data->oPos,(int)2);
									HX_STACK_LINE(507)
									hx::AddEq(data->bPos,(int)2);
								}
								;break;
								case (int)13: {
									HX_STACK_LINE(507)
									hx::AddEq(data->oPos,(int)4);
									HX_STACK_LINE(507)
									hx::AddEq(data->iiPos,(int)2);
									HX_STACK_LINE(507)
									hx::AddEq(data->ffPos,(int)1);
									HX_STACK_LINE(507)
									hx::AddEq(data->fPos,(int)1);
								}
								;break;
								case (int)14: {
									HX_STACK_LINE(507)
									hx::AddEq(data->oPos,(int)4);
									HX_STACK_LINE(507)
									hx::AddEq(data->iPos,(int)1);
									HX_STACK_LINE(507)
									hx::AddEq(data->fPos,(int)2);
									HX_STACK_LINE(507)
									hx::AddEq(data->bPos,(int)1);
								}
								;break;
								case (int)15: {
									HX_STACK_LINE(507)
									hx::AddEq(data->fPos,(int)2);
								}
								;break;
								case (int)16: {
									HX_STACK_LINE(507)
									hx::AddEq(data->fPos,(int)2);
								}
								;break;
								case (int)17: {
									HX_STACK_LINE(507)
									hx::AddEq(data->oPos,(int)1);
								}
								;break;
								default: {
									HX_STACK_LINE(507)
									Dynamic();
								}
							}
						}
						HX_STACK_LINE(507)
						data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::CUBIC_CURVE_TO;
						HX_STACK_LINE(507)
						tmp11 = data;
					}
					HX_STACK_LINE(507)
					::openfl::_internal::renderer::DrawCommandReader c = tmp11;		HX_STACK_VAR(c,"c");
					HX_STACK_LINE(508)
					hasPath = true;
					HX_STACK_LINE(509)
					::lime::graphics::cairo::Cairo tmp12 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(509)
					::openfl::_internal::renderer::DrawCommandBuffer tmp13 = c->buffer;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(509)
					int tmp14 = c->fPos;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(509)
					int tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(509)
					Float tmp16 = tmp13->f->__get(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(509)
					Float tmp17 = offsetX;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(509)
					Float tmp18 = (tmp16 - tmp17);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(509)
					::openfl::_internal::renderer::DrawCommandBuffer tmp19 = c->buffer;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(509)
					int tmp20 = c->fPos;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(509)
					int tmp21 = (tmp20 + (int)1);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(509)
					Float tmp22 = tmp19->f->__get(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(509)
					Float tmp23 = offsetY;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(509)
					Float tmp24 = (tmp22 - tmp23);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(509)
					::openfl::_internal::renderer::DrawCommandBuffer tmp25 = c->buffer;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(509)
					int tmp26 = c->fPos;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(509)
					int tmp27 = (tmp26 + (int)2);		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(509)
					Float tmp28 = tmp25->f->__get(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(509)
					Float tmp29 = offsetX;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(509)
					Float tmp30 = (tmp28 - tmp29);		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(509)
					::openfl::_internal::renderer::DrawCommandBuffer tmp31 = c->buffer;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(509)
					int tmp32 = c->fPos;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(509)
					int tmp33 = (tmp32 + (int)3);		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(509)
					Float tmp34 = tmp31->f->__get(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(509)
					Float tmp35 = offsetY;		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(509)
					Float tmp36 = (tmp34 - tmp35);		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(509)
					::openfl::_internal::renderer::DrawCommandBuffer tmp37 = c->buffer;		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(509)
					int tmp38 = c->fPos;		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(509)
					int tmp39 = (tmp38 + (int)4);		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(509)
					Float tmp40 = tmp37->f->__get(tmp39);		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(509)
					Float tmp41 = offsetX;		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(509)
					Float tmp42 = (tmp40 - tmp41);		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(509)
					::openfl::_internal::renderer::DrawCommandBuffer tmp43 = c->buffer;		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(509)
					int tmp44 = c->fPos;		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(509)
					int tmp45 = (tmp44 + (int)5);		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(509)
					Float tmp46 = tmp43->f->__get(tmp45);		HX_STACK_VAR(tmp46,"tmp46");
					HX_STACK_LINE(509)
					Float tmp47 = offsetY;		HX_STACK_VAR(tmp47,"tmp47");
					HX_STACK_LINE(509)
					Float tmp48 = (tmp46 - tmp47);		HX_STACK_VAR(tmp48,"tmp48");
					HX_STACK_LINE(509)
					tmp12->curveTo(tmp18,tmp24,tmp30,tmp36,tmp42,tmp48);
				}
				else if (  ( _switch_1==(int)4)){
					HX_STACK_LINE(513)
					::openfl::_internal::renderer::DrawCommandReader tmp11;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(513)
					{
						HX_STACK_LINE(513)
						{
							HX_STACK_LINE(513)
							::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(513)
							switch( (int)(_g2->__Index())){
								case (int)0: {
									HX_STACK_LINE(513)
									hx::AddEq(data->oPos,(int)2);
									HX_STACK_LINE(513)
									hx::AddEq(data->bPos,(int)2);
								}
								;break;
								case (int)1: {
									HX_STACK_LINE(513)
									hx::AddEq(data->iPos,(int)1);
									HX_STACK_LINE(513)
									hx::AddEq(data->fPos,(int)1);
								}
								;break;
								case (int)2: {
									HX_STACK_LINE(513)
									hx::AddEq(data->oPos,(int)4);
									HX_STACK_LINE(513)
									hx::AddEq(data->iiPos,(int)2);
									HX_STACK_LINE(513)
									hx::AddEq(data->ffPos,(int)1);
									HX_STACK_LINE(513)
									hx::AddEq(data->fPos,(int)1);
								}
								;break;
								case (int)3: {
									HX_STACK_LINE(513)
									hx::AddEq(data->fPos,(int)6);
								}
								;break;
								case (int)4: {
									HX_STACK_LINE(513)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)5: {
									HX_STACK_LINE(513)
									hx::AddEq(data->fPos,(int)3);
								}
								;break;
								case (int)6: {
									HX_STACK_LINE(513)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)7: {
									HX_STACK_LINE(513)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)8: {
									HX_STACK_LINE(513)
									hx::AddEq(data->fPos,(int)5);
									HX_STACK_LINE(513)
									hx::AddEq(data->oPos,(int)1);
								}
								;break;
								case (int)10: {
									HX_STACK_LINE(513)
									hx::AddEq(data->oPos,(int)4);
								}
								;break;
								case (int)11: {
									HX_STACK_LINE(513)
									Dynamic();
								}
								;break;
								case (int)12: {
									HX_STACK_LINE(513)
									hx::AddEq(data->oPos,(int)2);
									HX_STACK_LINE(513)
									hx::AddEq(data->bPos,(int)2);
								}
								;break;
								case (int)13: {
									HX_STACK_LINE(513)
									hx::AddEq(data->oPos,(int)4);
									HX_STACK_LINE(513)
									hx::AddEq(data->iiPos,(int)2);
									HX_STACK_LINE(513)
									hx::AddEq(data->ffPos,(int)1);
									HX_STACK_LINE(513)
									hx::AddEq(data->fPos,(int)1);
								}
								;break;
								case (int)14: {
									HX_STACK_LINE(513)
									hx::AddEq(data->oPos,(int)4);
									HX_STACK_LINE(513)
									hx::AddEq(data->iPos,(int)1);
									HX_STACK_LINE(513)
									hx::AddEq(data->fPos,(int)2);
									HX_STACK_LINE(513)
									hx::AddEq(data->bPos,(int)1);
								}
								;break;
								case (int)15: {
									HX_STACK_LINE(513)
									hx::AddEq(data->fPos,(int)2);
								}
								;break;
								case (int)16: {
									HX_STACK_LINE(513)
									hx::AddEq(data->fPos,(int)2);
								}
								;break;
								case (int)17: {
									HX_STACK_LINE(513)
									hx::AddEq(data->oPos,(int)1);
								}
								;break;
								default: {
									HX_STACK_LINE(513)
									Dynamic();
								}
							}
						}
						HX_STACK_LINE(513)
						data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::CURVE_TO;
						HX_STACK_LINE(513)
						tmp11 = data;
					}
					HX_STACK_LINE(513)
					::openfl::_internal::renderer::DrawCommandReader c = tmp11;		HX_STACK_VAR(c,"c");
					HX_STACK_LINE(514)
					hasPath = true;
					HX_STACK_LINE(515)
					::openfl::_internal::renderer::DrawCommandBuffer tmp12 = c->buffer;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(515)
					int tmp13 = c->fPos;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(515)
					int tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(515)
					Float tmp15 = tmp12->f->__get(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(515)
					Float tmp16 = offsetX;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(515)
					Float tmp17 = (tmp15 - tmp16);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(515)
					::openfl::_internal::renderer::DrawCommandBuffer tmp18 = c->buffer;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(515)
					int tmp19 = c->fPos;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(515)
					int tmp20 = (tmp19 + (int)1);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(515)
					Float tmp21 = tmp18->f->__get(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(515)
					Float tmp22 = offsetY;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(515)
					Float tmp23 = (tmp21 - tmp22);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(515)
					::openfl::_internal::renderer::DrawCommandBuffer tmp24 = c->buffer;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(515)
					int tmp25 = c->fPos;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(515)
					int tmp26 = (tmp25 + (int)2);		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(515)
					Float tmp27 = tmp24->f->__get(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(515)
					Float tmp28 = offsetX;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(515)
					Float tmp29 = (tmp27 - tmp28);		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(515)
					::openfl::_internal::renderer::DrawCommandBuffer tmp30 = c->buffer;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(515)
					int tmp31 = c->fPos;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(515)
					int tmp32 = (tmp31 + (int)3);		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(515)
					Float tmp33 = tmp30->f->__get(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(515)
					Float tmp34 = offsetY;		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(515)
					Float tmp35 = (tmp33 - tmp34);		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(515)
					::openfl::_internal::renderer::cairo::CairoGraphics_obj::quadraticCurveTo(tmp17,tmp23,tmp29,tmp35);
				}
				else if (  ( _switch_1==(int)5)){
					HX_STACK_LINE(519)
					::openfl::_internal::renderer::DrawCommandReader tmp11;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(519)
					{
						HX_STACK_LINE(519)
						{
							HX_STACK_LINE(519)
							::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(519)
							switch( (int)(_g2->__Index())){
								case (int)0: {
									HX_STACK_LINE(519)
									hx::AddEq(data->oPos,(int)2);
									HX_STACK_LINE(519)
									hx::AddEq(data->bPos,(int)2);
								}
								;break;
								case (int)1: {
									HX_STACK_LINE(519)
									hx::AddEq(data->iPos,(int)1);
									HX_STACK_LINE(519)
									hx::AddEq(data->fPos,(int)1);
								}
								;break;
								case (int)2: {
									HX_STACK_LINE(519)
									hx::AddEq(data->oPos,(int)4);
									HX_STACK_LINE(519)
									hx::AddEq(data->iiPos,(int)2);
									HX_STACK_LINE(519)
									hx::AddEq(data->ffPos,(int)1);
									HX_STACK_LINE(519)
									hx::AddEq(data->fPos,(int)1);
								}
								;break;
								case (int)3: {
									HX_STACK_LINE(519)
									hx::AddEq(data->fPos,(int)6);
								}
								;break;
								case (int)4: {
									HX_STACK_LINE(519)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)5: {
									HX_STACK_LINE(519)
									hx::AddEq(data->fPos,(int)3);
								}
								;break;
								case (int)6: {
									HX_STACK_LINE(519)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)7: {
									HX_STACK_LINE(519)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)8: {
									HX_STACK_LINE(519)
									hx::AddEq(data->fPos,(int)5);
									HX_STACK_LINE(519)
									hx::AddEq(data->oPos,(int)1);
								}
								;break;
								case (int)10: {
									HX_STACK_LINE(519)
									hx::AddEq(data->oPos,(int)4);
								}
								;break;
								case (int)11: {
									HX_STACK_LINE(519)
									Dynamic();
								}
								;break;
								case (int)12: {
									HX_STACK_LINE(519)
									hx::AddEq(data->oPos,(int)2);
									HX_STACK_LINE(519)
									hx::AddEq(data->bPos,(int)2);
								}
								;break;
								case (int)13: {
									HX_STACK_LINE(519)
									hx::AddEq(data->oPos,(int)4);
									HX_STACK_LINE(519)
									hx::AddEq(data->iiPos,(int)2);
									HX_STACK_LINE(519)
									hx::AddEq(data->ffPos,(int)1);
									HX_STACK_LINE(519)
									hx::AddEq(data->fPos,(int)1);
								}
								;break;
								case (int)14: {
									HX_STACK_LINE(519)
									hx::AddEq(data->oPos,(int)4);
									HX_STACK_LINE(519)
									hx::AddEq(data->iPos,(int)1);
									HX_STACK_LINE(519)
									hx::AddEq(data->fPos,(int)2);
									HX_STACK_LINE(519)
									hx::AddEq(data->bPos,(int)1);
								}
								;break;
								case (int)15: {
									HX_STACK_LINE(519)
									hx::AddEq(data->fPos,(int)2);
								}
								;break;
								case (int)16: {
									HX_STACK_LINE(519)
									hx::AddEq(data->fPos,(int)2);
								}
								;break;
								case (int)17: {
									HX_STACK_LINE(519)
									hx::AddEq(data->oPos,(int)1);
								}
								;break;
								default: {
									HX_STACK_LINE(519)
									Dynamic();
								}
							}
						}
						HX_STACK_LINE(519)
						data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::DRAW_CIRCLE;
						HX_STACK_LINE(519)
						tmp11 = data;
					}
					HX_STACK_LINE(519)
					::openfl::_internal::renderer::DrawCommandReader c = tmp11;		HX_STACK_VAR(c,"c");
					HX_STACK_LINE(520)
					hasPath = true;
					HX_STACK_LINE(521)
					::lime::graphics::cairo::Cairo tmp12 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(521)
					::openfl::_internal::renderer::DrawCommandBuffer tmp13 = c->buffer;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(521)
					int tmp14 = c->fPos;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(521)
					int tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(521)
					Float tmp16 = tmp13->f->__get(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(521)
					Float tmp17 = offsetX;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(521)
					Float tmp18 = (tmp16 - tmp17);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(521)
					::openfl::_internal::renderer::DrawCommandBuffer tmp19 = c->buffer;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(521)
					int tmp20 = c->fPos;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(521)
					int tmp21 = (tmp20 + (int)2);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(521)
					Float tmp22 = tmp19->f->__get(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(521)
					Float tmp23 = (tmp18 + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(521)
					::openfl::_internal::renderer::DrawCommandBuffer tmp24 = c->buffer;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(521)
					int tmp25 = c->fPos;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(521)
					int tmp26 = (tmp25 + (int)1);		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(521)
					Float tmp27 = tmp24->f->__get(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(521)
					Float tmp28 = offsetY;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(521)
					Float tmp29 = (tmp27 - tmp28);		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(521)
					tmp12->moveTo(tmp23,tmp29);
					HX_STACK_LINE(522)
					::lime::graphics::cairo::Cairo tmp30 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(522)
					::openfl::_internal::renderer::DrawCommandBuffer tmp31 = c->buffer;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(522)
					int tmp32 = c->fPos;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(522)
					int tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(522)
					Float tmp34 = tmp31->f->__get(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(522)
					Float tmp35 = offsetX;		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(522)
					Float tmp36 = (tmp34 - tmp35);		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(522)
					::openfl::_internal::renderer::DrawCommandBuffer tmp37 = c->buffer;		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(522)
					int tmp38 = c->fPos;		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(522)
					int tmp39 = (tmp38 + (int)1);		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(522)
					Float tmp40 = tmp37->f->__get(tmp39);		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(522)
					Float tmp41 = offsetY;		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(522)
					Float tmp42 = (tmp40 - tmp41);		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(522)
					::openfl::_internal::renderer::DrawCommandBuffer tmp43 = c->buffer;		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(522)
					int tmp44 = c->fPos;		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(522)
					int tmp45 = (tmp44 + (int)2);		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(522)
					Float tmp46 = tmp43->f->__get(tmp45);		HX_STACK_VAR(tmp46,"tmp46");
					HX_STACK_LINE(522)
					Float tmp47 = ::Math_obj::PI;		HX_STACK_VAR(tmp47,"tmp47");
					HX_STACK_LINE(522)
					Float tmp48 = (tmp47 * (int)2);		HX_STACK_VAR(tmp48,"tmp48");
					HX_STACK_LINE(522)
					tmp30->arc(tmp36,tmp42,tmp46,(int)0,tmp48);
				}
				else if (  ( _switch_1==(int)7)){
					HX_STACK_LINE(526)
					::openfl::_internal::renderer::DrawCommandReader tmp11;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(526)
					{
						HX_STACK_LINE(526)
						{
							HX_STACK_LINE(526)
							::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(526)
							switch( (int)(_g2->__Index())){
								case (int)0: {
									HX_STACK_LINE(526)
									hx::AddEq(data->oPos,(int)2);
									HX_STACK_LINE(526)
									hx::AddEq(data->bPos,(int)2);
								}
								;break;
								case (int)1: {
									HX_STACK_LINE(526)
									hx::AddEq(data->iPos,(int)1);
									HX_STACK_LINE(526)
									hx::AddEq(data->fPos,(int)1);
								}
								;break;
								case (int)2: {
									HX_STACK_LINE(526)
									hx::AddEq(data->oPos,(int)4);
									HX_STACK_LINE(526)
									hx::AddEq(data->iiPos,(int)2);
									HX_STACK_LINE(526)
									hx::AddEq(data->ffPos,(int)1);
									HX_STACK_LINE(526)
									hx::AddEq(data->fPos,(int)1);
								}
								;break;
								case (int)3: {
									HX_STACK_LINE(526)
									hx::AddEq(data->fPos,(int)6);
								}
								;break;
								case (int)4: {
									HX_STACK_LINE(526)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)5: {
									HX_STACK_LINE(526)
									hx::AddEq(data->fPos,(int)3);
								}
								;break;
								case (int)6: {
									HX_STACK_LINE(526)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)7: {
									HX_STACK_LINE(526)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)8: {
									HX_STACK_LINE(526)
									hx::AddEq(data->fPos,(int)5);
									HX_STACK_LINE(526)
									hx::AddEq(data->oPos,(int)1);
								}
								;break;
								case (int)10: {
									HX_STACK_LINE(526)
									hx::AddEq(data->oPos,(int)4);
								}
								;break;
								case (int)11: {
									HX_STACK_LINE(526)
									Dynamic();
								}
								;break;
								case (int)12: {
									HX_STACK_LINE(526)
									hx::AddEq(data->oPos,(int)2);
									HX_STACK_LINE(526)
									hx::AddEq(data->bPos,(int)2);
								}
								;break;
								case (int)13: {
									HX_STACK_LINE(526)
									hx::AddEq(data->oPos,(int)4);
									HX_STACK_LINE(526)
									hx::AddEq(data->iiPos,(int)2);
									HX_STACK_LINE(526)
									hx::AddEq(data->ffPos,(int)1);
									HX_STACK_LINE(526)
									hx::AddEq(data->fPos,(int)1);
								}
								;break;
								case (int)14: {
									HX_STACK_LINE(526)
									hx::AddEq(data->oPos,(int)4);
									HX_STACK_LINE(526)
									hx::AddEq(data->iPos,(int)1);
									HX_STACK_LINE(526)
									hx::AddEq(data->fPos,(int)2);
									HX_STACK_LINE(526)
									hx::AddEq(data->bPos,(int)1);
								}
								;break;
								case (int)15: {
									HX_STACK_LINE(526)
									hx::AddEq(data->fPos,(int)2);
								}
								;break;
								case (int)16: {
									HX_STACK_LINE(526)
									hx::AddEq(data->fPos,(int)2);
								}
								;break;
								case (int)17: {
									HX_STACK_LINE(526)
									hx::AddEq(data->oPos,(int)1);
								}
								;break;
								default: {
									HX_STACK_LINE(526)
									Dynamic();
								}
							}
						}
						HX_STACK_LINE(526)
						data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::DRAW_RECT;
						HX_STACK_LINE(526)
						tmp11 = data;
					}
					HX_STACK_LINE(526)
					::openfl::_internal::renderer::DrawCommandReader c = tmp11;		HX_STACK_VAR(c,"c");
					HX_STACK_LINE(527)
					hasPath = true;
					HX_STACK_LINE(528)
					::lime::graphics::cairo::Cairo tmp12 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(528)
					::openfl::_internal::renderer::DrawCommandBuffer tmp13 = c->buffer;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(528)
					int tmp14 = c->fPos;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(528)
					int tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(528)
					Float tmp16 = tmp13->f->__get(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(528)
					Float tmp17 = offsetX;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(528)
					Float tmp18 = (tmp16 - tmp17);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(528)
					::openfl::_internal::renderer::DrawCommandBuffer tmp19 = c->buffer;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(528)
					int tmp20 = c->fPos;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(528)
					int tmp21 = (tmp20 + (int)1);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(528)
					Float tmp22 = tmp19->f->__get(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(528)
					Float tmp23 = offsetY;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(528)
					Float tmp24 = (tmp22 - tmp23);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(528)
					::openfl::_internal::renderer::DrawCommandBuffer tmp25 = c->buffer;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(528)
					int tmp26 = c->fPos;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(528)
					int tmp27 = (tmp26 + (int)2);		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(528)
					Float tmp28 = tmp25->f->__get(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(528)
					::openfl::_internal::renderer::DrawCommandBuffer tmp29 = c->buffer;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(528)
					int tmp30 = c->fPos;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(528)
					int tmp31 = (tmp30 + (int)3);		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(528)
					Float tmp32 = tmp29->f->__get(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(528)
					tmp12->rectangle(tmp18,tmp24,tmp28,tmp32);
				}
				else if (  ( _switch_1==(int)6)){
					HX_STACK_LINE(532)
					::openfl::_internal::renderer::DrawCommandReader tmp11;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(532)
					{
						HX_STACK_LINE(532)
						{
							HX_STACK_LINE(532)
							::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(532)
							switch( (int)(_g2->__Index())){
								case (int)0: {
									HX_STACK_LINE(532)
									hx::AddEq(data->oPos,(int)2);
									HX_STACK_LINE(532)
									hx::AddEq(data->bPos,(int)2);
								}
								;break;
								case (int)1: {
									HX_STACK_LINE(532)
									hx::AddEq(data->iPos,(int)1);
									HX_STACK_LINE(532)
									hx::AddEq(data->fPos,(int)1);
								}
								;break;
								case (int)2: {
									HX_STACK_LINE(532)
									hx::AddEq(data->oPos,(int)4);
									HX_STACK_LINE(532)
									hx::AddEq(data->iiPos,(int)2);
									HX_STACK_LINE(532)
									hx::AddEq(data->ffPos,(int)1);
									HX_STACK_LINE(532)
									hx::AddEq(data->fPos,(int)1);
								}
								;break;
								case (int)3: {
									HX_STACK_LINE(532)
									hx::AddEq(data->fPos,(int)6);
								}
								;break;
								case (int)4: {
									HX_STACK_LINE(532)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)5: {
									HX_STACK_LINE(532)
									hx::AddEq(data->fPos,(int)3);
								}
								;break;
								case (int)6: {
									HX_STACK_LINE(532)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)7: {
									HX_STACK_LINE(532)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)8: {
									HX_STACK_LINE(532)
									hx::AddEq(data->fPos,(int)5);
									HX_STACK_LINE(532)
									hx::AddEq(data->oPos,(int)1);
								}
								;break;
								case (int)10: {
									HX_STACK_LINE(532)
									hx::AddEq(data->oPos,(int)4);
								}
								;break;
								case (int)11: {
									HX_STACK_LINE(532)
									Dynamic();
								}
								;break;
								case (int)12: {
									HX_STACK_LINE(532)
									hx::AddEq(data->oPos,(int)2);
									HX_STACK_LINE(532)
									hx::AddEq(data->bPos,(int)2);
								}
								;break;
								case (int)13: {
									HX_STACK_LINE(532)
									hx::AddEq(data->oPos,(int)4);
									HX_STACK_LINE(532)
									hx::AddEq(data->iiPos,(int)2);
									HX_STACK_LINE(532)
									hx::AddEq(data->ffPos,(int)1);
									HX_STACK_LINE(532)
									hx::AddEq(data->fPos,(int)1);
								}
								;break;
								case (int)14: {
									HX_STACK_LINE(532)
									hx::AddEq(data->oPos,(int)4);
									HX_STACK_LINE(532)
									hx::AddEq(data->iPos,(int)1);
									HX_STACK_LINE(532)
									hx::AddEq(data->fPos,(int)2);
									HX_STACK_LINE(532)
									hx::AddEq(data->bPos,(int)1);
								}
								;break;
								case (int)15: {
									HX_STACK_LINE(532)
									hx::AddEq(data->fPos,(int)2);
								}
								;break;
								case (int)16: {
									HX_STACK_LINE(532)
									hx::AddEq(data->fPos,(int)2);
								}
								;break;
								case (int)17: {
									HX_STACK_LINE(532)
									hx::AddEq(data->oPos,(int)1);
								}
								;break;
								default: {
									HX_STACK_LINE(532)
									Dynamic();
								}
							}
						}
						HX_STACK_LINE(532)
						data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::DRAW_ELLIPSE;
						HX_STACK_LINE(532)
						tmp11 = data;
					}
					HX_STACK_LINE(532)
					::openfl::_internal::renderer::DrawCommandReader c = tmp11;		HX_STACK_VAR(c,"c");
					HX_STACK_LINE(533)
					hasPath = true;
					HX_STACK_LINE(535)
					::openfl::_internal::renderer::DrawCommandBuffer tmp12 = c->buffer;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(535)
					int tmp13 = c->fPos;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(535)
					int tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(535)
					Float tmp15 = tmp12->f->__get(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(535)
					Float x = tmp15;		HX_STACK_VAR(x,"x");
					HX_STACK_LINE(536)
					::openfl::_internal::renderer::DrawCommandBuffer tmp16 = c->buffer;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(536)
					int tmp17 = c->fPos;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(536)
					int tmp18 = (tmp17 + (int)1);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(536)
					Float tmp19 = tmp16->f->__get(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(536)
					Float y = tmp19;		HX_STACK_VAR(y,"y");
					HX_STACK_LINE(537)
					::openfl::_internal::renderer::DrawCommandBuffer tmp20 = c->buffer;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(537)
					int tmp21 = c->fPos;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(537)
					int tmp22 = (tmp21 + (int)2);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(537)
					Float tmp23 = tmp20->f->__get(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(537)
					Float width = tmp23;		HX_STACK_VAR(width,"width");
					HX_STACK_LINE(538)
					::openfl::_internal::renderer::DrawCommandBuffer tmp24 = c->buffer;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(538)
					int tmp25 = c->fPos;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(538)
					int tmp26 = (tmp25 + (int)3);		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(538)
					Float tmp27 = tmp24->f->__get(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(538)
					Float height = tmp27;		HX_STACK_VAR(height,"height");
					HX_STACK_LINE(540)
					hx::SubEq(x,offsetX);
					HX_STACK_LINE(541)
					hx::SubEq(y,offsetY);
					HX_STACK_LINE(543)
					Float kappa = ((Float).5522848);		HX_STACK_VAR(kappa,"kappa");
					HX_STACK_LINE(544)
					Float tmp28 = (Float(width) / Float((int)2));		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(544)
					Float tmp29 = kappa;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(544)
					Float tmp30 = (tmp28 * tmp29);		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(544)
					Float ox = tmp30;		HX_STACK_VAR(ox,"ox");
					HX_STACK_LINE(545)
					Float tmp31 = (Float(height) / Float((int)2));		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(545)
					Float tmp32 = kappa;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(545)
					Float tmp33 = (tmp31 * tmp32);		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(545)
					Float oy = tmp33;		HX_STACK_VAR(oy,"oy");
					HX_STACK_LINE(546)
					Float tmp34 = (x + width);		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(546)
					Float xe = tmp34;		HX_STACK_VAR(xe,"xe");
					HX_STACK_LINE(547)
					Float tmp35 = (y + height);		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(547)
					Float ye = tmp35;		HX_STACK_VAR(ye,"ye");
					HX_STACK_LINE(548)
					Float tmp36 = x;		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(548)
					Float tmp37 = (Float(width) / Float((int)2));		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(548)
					Float tmp38 = (tmp36 + tmp37);		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(548)
					Float xm = tmp38;		HX_STACK_VAR(xm,"xm");
					HX_STACK_LINE(549)
					Float tmp39 = y;		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(549)
					Float tmp40 = (Float(height) / Float((int)2));		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(549)
					Float tmp41 = (tmp39 + tmp40);		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(549)
					Float ym = tmp41;		HX_STACK_VAR(ym,"ym");
					HX_STACK_LINE(551)
					::lime::graphics::cairo::Cairo tmp42 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(551)
					Float tmp43 = x;		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(551)
					Float tmp44 = ym;		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(551)
					tmp42->moveTo(tmp43,tmp44);
					HX_STACK_LINE(552)
					::lime::graphics::cairo::Cairo tmp45 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(552)
					Float tmp46 = x;		HX_STACK_VAR(tmp46,"tmp46");
					HX_STACK_LINE(552)
					Float tmp47 = (ym - oy);		HX_STACK_VAR(tmp47,"tmp47");
					HX_STACK_LINE(552)
					Float tmp48 = (xm - ox);		HX_STACK_VAR(tmp48,"tmp48");
					HX_STACK_LINE(552)
					Float tmp49 = y;		HX_STACK_VAR(tmp49,"tmp49");
					HX_STACK_LINE(552)
					Float tmp50 = xm;		HX_STACK_VAR(tmp50,"tmp50");
					HX_STACK_LINE(552)
					Float tmp51 = y;		HX_STACK_VAR(tmp51,"tmp51");
					HX_STACK_LINE(552)
					tmp45->curveTo(tmp46,tmp47,tmp48,tmp49,tmp50,tmp51);
					HX_STACK_LINE(553)
					::lime::graphics::cairo::Cairo tmp52 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp52,"tmp52");
					HX_STACK_LINE(553)
					Float tmp53 = (xm + ox);		HX_STACK_VAR(tmp53,"tmp53");
					HX_STACK_LINE(553)
					Float tmp54 = y;		HX_STACK_VAR(tmp54,"tmp54");
					HX_STACK_LINE(553)
					Float tmp55 = xe;		HX_STACK_VAR(tmp55,"tmp55");
					HX_STACK_LINE(553)
					Float tmp56 = (ym - oy);		HX_STACK_VAR(tmp56,"tmp56");
					HX_STACK_LINE(553)
					Float tmp57 = xe;		HX_STACK_VAR(tmp57,"tmp57");
					HX_STACK_LINE(553)
					Float tmp58 = ym;		HX_STACK_VAR(tmp58,"tmp58");
					HX_STACK_LINE(553)
					tmp52->curveTo(tmp53,tmp54,tmp55,tmp56,tmp57,tmp58);
					HX_STACK_LINE(554)
					::lime::graphics::cairo::Cairo tmp59 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp59,"tmp59");
					HX_STACK_LINE(554)
					Float tmp60 = xe;		HX_STACK_VAR(tmp60,"tmp60");
					HX_STACK_LINE(554)
					Float tmp61 = (ym + oy);		HX_STACK_VAR(tmp61,"tmp61");
					HX_STACK_LINE(554)
					Float tmp62 = (xm + ox);		HX_STACK_VAR(tmp62,"tmp62");
					HX_STACK_LINE(554)
					Float tmp63 = ye;		HX_STACK_VAR(tmp63,"tmp63");
					HX_STACK_LINE(554)
					Float tmp64 = xm;		HX_STACK_VAR(tmp64,"tmp64");
					HX_STACK_LINE(554)
					Float tmp65 = ye;		HX_STACK_VAR(tmp65,"tmp65");
					HX_STACK_LINE(554)
					tmp59->curveTo(tmp60,tmp61,tmp62,tmp63,tmp64,tmp65);
					HX_STACK_LINE(555)
					::lime::graphics::cairo::Cairo tmp66 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp66,"tmp66");
					HX_STACK_LINE(555)
					Float tmp67 = (xm - ox);		HX_STACK_VAR(tmp67,"tmp67");
					HX_STACK_LINE(555)
					Float tmp68 = ye;		HX_STACK_VAR(tmp68,"tmp68");
					HX_STACK_LINE(555)
					Float tmp69 = x;		HX_STACK_VAR(tmp69,"tmp69");
					HX_STACK_LINE(555)
					Float tmp70 = (ym + oy);		HX_STACK_VAR(tmp70,"tmp70");
					HX_STACK_LINE(555)
					Float tmp71 = x;		HX_STACK_VAR(tmp71,"tmp71");
					HX_STACK_LINE(555)
					Float tmp72 = ym;		HX_STACK_VAR(tmp72,"tmp72");
					HX_STACK_LINE(555)
					tmp66->curveTo(tmp67,tmp68,tmp69,tmp70,tmp71,tmp72);
				}
				else if (  ( _switch_1==(int)8)){
					HX_STACK_LINE(559)
					::openfl::_internal::renderer::DrawCommandReader tmp11;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(559)
					{
						HX_STACK_LINE(559)
						{
							HX_STACK_LINE(559)
							::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(559)
							switch( (int)(_g2->__Index())){
								case (int)0: {
									HX_STACK_LINE(559)
									hx::AddEq(data->oPos,(int)2);
									HX_STACK_LINE(559)
									hx::AddEq(data->bPos,(int)2);
								}
								;break;
								case (int)1: {
									HX_STACK_LINE(559)
									hx::AddEq(data->iPos,(int)1);
									HX_STACK_LINE(559)
									hx::AddEq(data->fPos,(int)1);
								}
								;break;
								case (int)2: {
									HX_STACK_LINE(559)
									hx::AddEq(data->oPos,(int)4);
									HX_STACK_LINE(559)
									hx::AddEq(data->iiPos,(int)2);
									HX_STACK_LINE(559)
									hx::AddEq(data->ffPos,(int)1);
									HX_STACK_LINE(559)
									hx::AddEq(data->fPos,(int)1);
								}
								;break;
								case (int)3: {
									HX_STACK_LINE(559)
									hx::AddEq(data->fPos,(int)6);
								}
								;break;
								case (int)4: {
									HX_STACK_LINE(559)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)5: {
									HX_STACK_LINE(559)
									hx::AddEq(data->fPos,(int)3);
								}
								;break;
								case (int)6: {
									HX_STACK_LINE(559)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)7: {
									HX_STACK_LINE(559)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)8: {
									HX_STACK_LINE(559)
									hx::AddEq(data->fPos,(int)5);
									HX_STACK_LINE(559)
									hx::AddEq(data->oPos,(int)1);
								}
								;break;
								case (int)10: {
									HX_STACK_LINE(559)
									hx::AddEq(data->oPos,(int)4);
								}
								;break;
								case (int)11: {
									HX_STACK_LINE(559)
									Dynamic();
								}
								;break;
								case (int)12: {
									HX_STACK_LINE(559)
									hx::AddEq(data->oPos,(int)2);
									HX_STACK_LINE(559)
									hx::AddEq(data->bPos,(int)2);
								}
								;break;
								case (int)13: {
									HX_STACK_LINE(559)
									hx::AddEq(data->oPos,(int)4);
									HX_STACK_LINE(559)
									hx::AddEq(data->iiPos,(int)2);
									HX_STACK_LINE(559)
									hx::AddEq(data->ffPos,(int)1);
									HX_STACK_LINE(559)
									hx::AddEq(data->fPos,(int)1);
								}
								;break;
								case (int)14: {
									HX_STACK_LINE(559)
									hx::AddEq(data->oPos,(int)4);
									HX_STACK_LINE(559)
									hx::AddEq(data->iPos,(int)1);
									HX_STACK_LINE(559)
									hx::AddEq(data->fPos,(int)2);
									HX_STACK_LINE(559)
									hx::AddEq(data->bPos,(int)1);
								}
								;break;
								case (int)15: {
									HX_STACK_LINE(559)
									hx::AddEq(data->fPos,(int)2);
								}
								;break;
								case (int)16: {
									HX_STACK_LINE(559)
									hx::AddEq(data->fPos,(int)2);
								}
								;break;
								case (int)17: {
									HX_STACK_LINE(559)
									hx::AddEq(data->oPos,(int)1);
								}
								;break;
								default: {
									HX_STACK_LINE(559)
									Dynamic();
								}
							}
						}
						HX_STACK_LINE(559)
						data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::DRAW_ROUND_RECT;
						HX_STACK_LINE(559)
						tmp11 = data;
					}
					HX_STACK_LINE(559)
					::openfl::_internal::renderer::DrawCommandReader c = tmp11;		HX_STACK_VAR(c,"c");
					HX_STACK_LINE(560)
					hasPath = true;
					HX_STACK_LINE(561)
					::openfl::_internal::renderer::DrawCommandBuffer tmp12 = c->buffer;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(561)
					int tmp13 = c->fPos;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(561)
					int tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(561)
					Float tmp15 = tmp12->f->__get(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(561)
					Float tmp16 = offsetX;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(561)
					Float tmp17 = (tmp15 - tmp16);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(561)
					::openfl::_internal::renderer::DrawCommandBuffer tmp18 = c->buffer;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(561)
					int tmp19 = c->fPos;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(561)
					int tmp20 = (tmp19 + (int)1);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(561)
					Float tmp21 = tmp18->f->__get(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(561)
					Float tmp22 = offsetY;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(561)
					Float tmp23 = (tmp21 - tmp22);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(561)
					::openfl::_internal::renderer::DrawCommandBuffer tmp24 = c->buffer;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(561)
					int tmp25 = c->fPos;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(561)
					int tmp26 = (tmp25 + (int)2);		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(561)
					Float tmp27 = tmp24->f->__get(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(561)
					::openfl::_internal::renderer::DrawCommandBuffer tmp28 = c->buffer;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(561)
					int tmp29 = c->fPos;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(561)
					int tmp30 = (tmp29 + (int)3);		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(561)
					Float tmp31 = tmp28->f->__get(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(561)
					::openfl::_internal::renderer::DrawCommandBuffer tmp32 = c->buffer;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(561)
					int tmp33 = c->fPos;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(561)
					int tmp34 = (tmp33 + (int)4);		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(561)
					Float tmp35 = tmp32->f->__get(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(561)
					::openfl::_internal::renderer::DrawCommandBuffer tmp36 = c->buffer;		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(561)
					int tmp37 = c->oPos;		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(561)
					int tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(561)
					Dynamic tmp39 = tmp36->o->__GetItem(tmp38);		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(561)
					Dynamic tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(561)
					::openfl::_internal::renderer::cairo::CairoGraphics_obj::drawRoundRect(tmp17,tmp23,tmp27,tmp31,tmp35,tmp40);
				}
				else if (  ( _switch_1==(int)15)){
					HX_STACK_LINE(565)
					::openfl::_internal::renderer::DrawCommandReader tmp11;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(565)
					{
						HX_STACK_LINE(565)
						{
							HX_STACK_LINE(565)
							::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(565)
							switch( (int)(_g2->__Index())){
								case (int)0: {
									HX_STACK_LINE(565)
									hx::AddEq(data->oPos,(int)2);
									HX_STACK_LINE(565)
									hx::AddEq(data->bPos,(int)2);
								}
								;break;
								case (int)1: {
									HX_STACK_LINE(565)
									hx::AddEq(data->iPos,(int)1);
									HX_STACK_LINE(565)
									hx::AddEq(data->fPos,(int)1);
								}
								;break;
								case (int)2: {
									HX_STACK_LINE(565)
									hx::AddEq(data->oPos,(int)4);
									HX_STACK_LINE(565)
									hx::AddEq(data->iiPos,(int)2);
									HX_STACK_LINE(565)
									hx::AddEq(data->ffPos,(int)1);
									HX_STACK_LINE(565)
									hx::AddEq(data->fPos,(int)1);
								}
								;break;
								case (int)3: {
									HX_STACK_LINE(565)
									hx::AddEq(data->fPos,(int)6);
								}
								;break;
								case (int)4: {
									HX_STACK_LINE(565)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)5: {
									HX_STACK_LINE(565)
									hx::AddEq(data->fPos,(int)3);
								}
								;break;
								case (int)6: {
									HX_STACK_LINE(565)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)7: {
									HX_STACK_LINE(565)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)8: {
									HX_STACK_LINE(565)
									hx::AddEq(data->fPos,(int)5);
									HX_STACK_LINE(565)
									hx::AddEq(data->oPos,(int)1);
								}
								;break;
								case (int)10: {
									HX_STACK_LINE(565)
									hx::AddEq(data->oPos,(int)4);
								}
								;break;
								case (int)11: {
									HX_STACK_LINE(565)
									Dynamic();
								}
								;break;
								case (int)12: {
									HX_STACK_LINE(565)
									hx::AddEq(data->oPos,(int)2);
									HX_STACK_LINE(565)
									hx::AddEq(data->bPos,(int)2);
								}
								;break;
								case (int)13: {
									HX_STACK_LINE(565)
									hx::AddEq(data->oPos,(int)4);
									HX_STACK_LINE(565)
									hx::AddEq(data->iiPos,(int)2);
									HX_STACK_LINE(565)
									hx::AddEq(data->ffPos,(int)1);
									HX_STACK_LINE(565)
									hx::AddEq(data->fPos,(int)1);
								}
								;break;
								case (int)14: {
									HX_STACK_LINE(565)
									hx::AddEq(data->oPos,(int)4);
									HX_STACK_LINE(565)
									hx::AddEq(data->iPos,(int)1);
									HX_STACK_LINE(565)
									hx::AddEq(data->fPos,(int)2);
									HX_STACK_LINE(565)
									hx::AddEq(data->bPos,(int)1);
								}
								;break;
								case (int)15: {
									HX_STACK_LINE(565)
									hx::AddEq(data->fPos,(int)2);
								}
								;break;
								case (int)16: {
									HX_STACK_LINE(565)
									hx::AddEq(data->fPos,(int)2);
								}
								;break;
								case (int)17: {
									HX_STACK_LINE(565)
									hx::AddEq(data->oPos,(int)1);
								}
								;break;
								default: {
									HX_STACK_LINE(565)
									Dynamic();
								}
							}
						}
						HX_STACK_LINE(565)
						data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::LINE_TO;
						HX_STACK_LINE(565)
						tmp11 = data;
					}
					HX_STACK_LINE(565)
					::openfl::_internal::renderer::DrawCommandReader c = tmp11;		HX_STACK_VAR(c,"c");
					HX_STACK_LINE(566)
					hasPath = true;
					HX_STACK_LINE(567)
					::lime::graphics::cairo::Cairo tmp12 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(567)
					::openfl::_internal::renderer::DrawCommandBuffer tmp13 = c->buffer;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(567)
					int tmp14 = c->fPos;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(567)
					int tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(567)
					Float tmp16 = tmp13->f->__get(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(567)
					Float tmp17 = offsetX;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(567)
					Float tmp18 = (tmp16 - tmp17);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(567)
					::openfl::_internal::renderer::DrawCommandBuffer tmp19 = c->buffer;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(567)
					int tmp20 = c->fPos;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(567)
					int tmp21 = (tmp20 + (int)1);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(567)
					Float tmp22 = tmp19->f->__get(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(567)
					Float tmp23 = offsetY;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(567)
					Float tmp24 = (tmp22 - tmp23);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(567)
					tmp12->lineTo(tmp18,tmp24);
					HX_STACK_LINE(569)
					::openfl::_internal::renderer::DrawCommandBuffer tmp25 = c->buffer;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(569)
					int tmp26 = c->fPos;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(569)
					int tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(569)
					Float tmp28 = tmp25->f->__get(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(569)
					positionX = tmp28;
					HX_STACK_LINE(570)
					::openfl::_internal::renderer::DrawCommandBuffer tmp29 = c->buffer;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(570)
					int tmp30 = c->fPos;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(570)
					int tmp31 = (tmp30 + (int)1);		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(570)
					Float tmp32 = tmp29->f->__get(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(570)
					positionY = tmp32;
				}
				else if (  ( _switch_1==(int)16)){
					HX_STACK_LINE(574)
					::openfl::_internal::renderer::DrawCommandReader tmp11;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(574)
					{
						HX_STACK_LINE(574)
						{
							HX_STACK_LINE(574)
							::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(574)
							switch( (int)(_g2->__Index())){
								case (int)0: {
									HX_STACK_LINE(574)
									hx::AddEq(data->oPos,(int)2);
									HX_STACK_LINE(574)
									hx::AddEq(data->bPos,(int)2);
								}
								;break;
								case (int)1: {
									HX_STACK_LINE(574)
									hx::AddEq(data->iPos,(int)1);
									HX_STACK_LINE(574)
									hx::AddEq(data->fPos,(int)1);
								}
								;break;
								case (int)2: {
									HX_STACK_LINE(574)
									hx::AddEq(data->oPos,(int)4);
									HX_STACK_LINE(574)
									hx::AddEq(data->iiPos,(int)2);
									HX_STACK_LINE(574)
									hx::AddEq(data->ffPos,(int)1);
									HX_STACK_LINE(574)
									hx::AddEq(data->fPos,(int)1);
								}
								;break;
								case (int)3: {
									HX_STACK_LINE(574)
									hx::AddEq(data->fPos,(int)6);
								}
								;break;
								case (int)4: {
									HX_STACK_LINE(574)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)5: {
									HX_STACK_LINE(574)
									hx::AddEq(data->fPos,(int)3);
								}
								;break;
								case (int)6: {
									HX_STACK_LINE(574)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)7: {
									HX_STACK_LINE(574)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)8: {
									HX_STACK_LINE(574)
									hx::AddEq(data->fPos,(int)5);
									HX_STACK_LINE(574)
									hx::AddEq(data->oPos,(int)1);
								}
								;break;
								case (int)10: {
									HX_STACK_LINE(574)
									hx::AddEq(data->oPos,(int)4);
								}
								;break;
								case (int)11: {
									HX_STACK_LINE(574)
									Dynamic();
								}
								;break;
								case (int)12: {
									HX_STACK_LINE(574)
									hx::AddEq(data->oPos,(int)2);
									HX_STACK_LINE(574)
									hx::AddEq(data->bPos,(int)2);
								}
								;break;
								case (int)13: {
									HX_STACK_LINE(574)
									hx::AddEq(data->oPos,(int)4);
									HX_STACK_LINE(574)
									hx::AddEq(data->iiPos,(int)2);
									HX_STACK_LINE(574)
									hx::AddEq(data->ffPos,(int)1);
									HX_STACK_LINE(574)
									hx::AddEq(data->fPos,(int)1);
								}
								;break;
								case (int)14: {
									HX_STACK_LINE(574)
									hx::AddEq(data->oPos,(int)4);
									HX_STACK_LINE(574)
									hx::AddEq(data->iPos,(int)1);
									HX_STACK_LINE(574)
									hx::AddEq(data->fPos,(int)2);
									HX_STACK_LINE(574)
									hx::AddEq(data->bPos,(int)1);
								}
								;break;
								case (int)15: {
									HX_STACK_LINE(574)
									hx::AddEq(data->fPos,(int)2);
								}
								;break;
								case (int)16: {
									HX_STACK_LINE(574)
									hx::AddEq(data->fPos,(int)2);
								}
								;break;
								case (int)17: {
									HX_STACK_LINE(574)
									hx::AddEq(data->oPos,(int)1);
								}
								;break;
								default: {
									HX_STACK_LINE(574)
									Dynamic();
								}
							}
						}
						HX_STACK_LINE(574)
						data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::MOVE_TO;
						HX_STACK_LINE(574)
						tmp11 = data;
					}
					HX_STACK_LINE(574)
					::openfl::_internal::renderer::DrawCommandReader c = tmp11;		HX_STACK_VAR(c,"c");
					HX_STACK_LINE(575)
					::lime::graphics::cairo::Cairo tmp12 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(575)
					::openfl::_internal::renderer::DrawCommandBuffer tmp13 = c->buffer;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(575)
					int tmp14 = c->fPos;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(575)
					int tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(575)
					Float tmp16 = tmp13->f->__get(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(575)
					Float tmp17 = offsetX;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(575)
					Float tmp18 = (tmp16 - tmp17);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(575)
					::openfl::_internal::renderer::DrawCommandBuffer tmp19 = c->buffer;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(575)
					int tmp20 = c->fPos;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(575)
					int tmp21 = (tmp20 + (int)1);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(575)
					Float tmp22 = tmp19->f->__get(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(575)
					Float tmp23 = offsetY;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(575)
					Float tmp24 = (tmp22 - tmp23);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(575)
					tmp12->moveTo(tmp18,tmp24);
					HX_STACK_LINE(577)
					::openfl::_internal::renderer::DrawCommandBuffer tmp25 = c->buffer;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(577)
					int tmp26 = c->fPos;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(577)
					int tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(577)
					Float tmp28 = tmp25->f->__get(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(577)
					positionX = tmp28;
					HX_STACK_LINE(578)
					::openfl::_internal::renderer::DrawCommandBuffer tmp29 = c->buffer;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(578)
					int tmp30 = c->fPos;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(578)
					int tmp31 = (tmp30 + (int)1);		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(578)
					Float tmp32 = tmp29->f->__get(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(578)
					positionY = tmp32;
					HX_STACK_LINE(580)
					closeGap = true;
					HX_STACK_LINE(581)
					::openfl::_internal::renderer::DrawCommandBuffer tmp33 = c->buffer;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(581)
					int tmp34 = c->fPos;		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(581)
					int tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(581)
					Float tmp36 = tmp33->f->__get(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(581)
					startX = tmp36;
					HX_STACK_LINE(582)
					::openfl::_internal::renderer::DrawCommandBuffer tmp37 = c->buffer;		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(582)
					int tmp38 = c->fPos;		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(582)
					int tmp39 = (tmp38 + (int)1);		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(582)
					Float tmp40 = tmp37->f->__get(tmp39);		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(582)
					startY = tmp40;
				}
				else if (  ( _switch_1==(int)14)){
					HX_STACK_LINE(586)
					::openfl::_internal::renderer::DrawCommandReader tmp11;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(586)
					{
						HX_STACK_LINE(586)
						{
							HX_STACK_LINE(586)
							::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(586)
							switch( (int)(_g2->__Index())){
								case (int)0: {
									HX_STACK_LINE(586)
									hx::AddEq(data->oPos,(int)2);
									HX_STACK_LINE(586)
									hx::AddEq(data->bPos,(int)2);
								}
								;break;
								case (int)1: {
									HX_STACK_LINE(586)
									hx::AddEq(data->iPos,(int)1);
									HX_STACK_LINE(586)
									hx::AddEq(data->fPos,(int)1);
								}
								;break;
								case (int)2: {
									HX_STACK_LINE(586)
									hx::AddEq(data->oPos,(int)4);
									HX_STACK_LINE(586)
									hx::AddEq(data->iiPos,(int)2);
									HX_STACK_LINE(586)
									hx::AddEq(data->ffPos,(int)1);
									HX_STACK_LINE(586)
									hx::AddEq(data->fPos,(int)1);
								}
								;break;
								case (int)3: {
									HX_STACK_LINE(586)
									hx::AddEq(data->fPos,(int)6);
								}
								;break;
								case (int)4: {
									HX_STACK_LINE(586)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)5: {
									HX_STACK_LINE(586)
									hx::AddEq(data->fPos,(int)3);
								}
								;break;
								case (int)6: {
									HX_STACK_LINE(586)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)7: {
									HX_STACK_LINE(586)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)8: {
									HX_STACK_LINE(586)
									hx::AddEq(data->fPos,(int)5);
									HX_STACK_LINE(586)
									hx::AddEq(data->oPos,(int)1);
								}
								;break;
								case (int)10: {
									HX_STACK_LINE(586)
									hx::AddEq(data->oPos,(int)4);
								}
								;break;
								case (int)11: {
									HX_STACK_LINE(586)
									Dynamic();
								}
								;break;
								case (int)12: {
									HX_STACK_LINE(586)
									hx::AddEq(data->oPos,(int)2);
									HX_STACK_LINE(586)
									hx::AddEq(data->bPos,(int)2);
								}
								;break;
								case (int)13: {
									HX_STACK_LINE(586)
									hx::AddEq(data->oPos,(int)4);
									HX_STACK_LINE(586)
									hx::AddEq(data->iiPos,(int)2);
									HX_STACK_LINE(586)
									hx::AddEq(data->ffPos,(int)1);
									HX_STACK_LINE(586)
									hx::AddEq(data->fPos,(int)1);
								}
								;break;
								case (int)14: {
									HX_STACK_LINE(586)
									hx::AddEq(data->oPos,(int)4);
									HX_STACK_LINE(586)
									hx::AddEq(data->iPos,(int)1);
									HX_STACK_LINE(586)
									hx::AddEq(data->fPos,(int)2);
									HX_STACK_LINE(586)
									hx::AddEq(data->bPos,(int)1);
								}
								;break;
								case (int)15: {
									HX_STACK_LINE(586)
									hx::AddEq(data->fPos,(int)2);
								}
								;break;
								case (int)16: {
									HX_STACK_LINE(586)
									hx::AddEq(data->fPos,(int)2);
								}
								;break;
								case (int)17: {
									HX_STACK_LINE(586)
									hx::AddEq(data->oPos,(int)1);
								}
								;break;
								default: {
									HX_STACK_LINE(586)
									Dynamic();
								}
							}
						}
						HX_STACK_LINE(586)
						data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::LINE_STYLE;
						HX_STACK_LINE(586)
						tmp11 = data;
					}
					HX_STACK_LINE(586)
					::openfl::_internal::renderer::DrawCommandReader c = tmp11;		HX_STACK_VAR(c,"c");
					HX_STACK_LINE(587)
					bool tmp12 = stroke;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(587)
					if ((tmp12)){
						HX_STACK_LINE(589)
						bool tmp13 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::hasStroke;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(589)
						::openfl::_internal::renderer::cairo::CairoGraphics_obj::closePath(tmp13);
					}
					HX_STACK_LINE(593)
					::lime::graphics::cairo::Cairo tmp13 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(593)
					Float tmp14 = (positionX - offsetX);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(593)
					Float tmp15 = (positionY - offsetY);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(593)
					tmp13->moveTo(tmp14,tmp15);
					HX_STACK_LINE(595)
					::openfl::_internal::renderer::DrawCommandBuffer tmp16 = c->buffer;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(595)
					int tmp17 = c->oPos;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(595)
					int tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(595)
					Dynamic tmp19 = tmp16->o->__GetItem(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(595)
					Dynamic tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(595)
					bool tmp21 = (tmp20 == null());		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(595)
					if ((tmp21)){
						HX_STACK_LINE(597)
						::openfl::_internal::renderer::cairo::CairoGraphics_obj::hasStroke = false;
					}
					else{
						HX_STACK_LINE(601)
						::openfl::_internal::renderer::cairo::CairoGraphics_obj::hasStroke = true;
						HX_STACK_LINE(603)
						::lime::graphics::cairo::Cairo tmp22 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(603)
						::openfl::_internal::renderer::DrawCommandBuffer tmp23 = c->buffer;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(603)
						int tmp24 = c->oPos;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(603)
						int tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(603)
						Dynamic tmp26 = tmp23->o->__GetItem(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(603)
						Dynamic tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(603)
						bool tmp28 = (tmp27 > (int)0);		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(603)
						Float tmp29;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(603)
						if ((tmp28)){
							HX_STACK_LINE(603)
							::openfl::_internal::renderer::DrawCommandBuffer tmp30 = c->buffer;		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(603)
							int tmp31 = c->oPos;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(603)
							int tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(603)
							Dynamic tmp33 = tmp30->o->__GetItem(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(603)
							tmp29 = tmp33;
						}
						else{
							HX_STACK_LINE(603)
							tmp29 = (int)1;
						}
						HX_STACK_LINE(603)
						tmp22->set_lineWidth(tmp29);
						HX_STACK_LINE(605)
						::openfl::_internal::renderer::DrawCommandBuffer tmp30 = c->buffer;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(605)
						int tmp31 = c->oPos;		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(605)
						int tmp32 = (tmp31 + (int)3);		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(605)
						Dynamic tmp33 = tmp30->o->__GetItem(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(605)
						Dynamic tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(605)
						bool tmp35 = (tmp34 == null());		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(605)
						if ((tmp35)){
							HX_STACK_LINE(607)
							::lime::graphics::cairo::Cairo tmp36 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(607)
							tmp36->set_lineJoin((int)1);
						}
						else{
							HX_STACK_LINE(611)
							::lime::graphics::cairo::Cairo tmp36 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(611)
							int tmp37;		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(611)
							{
								HX_STACK_LINE(611)
								::openfl::_internal::renderer::DrawCommandBuffer tmp38 = c->buffer;		HX_STACK_VAR(tmp38,"tmp38");
								HX_STACK_LINE(611)
								int tmp39 = c->oPos;		HX_STACK_VAR(tmp39,"tmp39");
								HX_STACK_LINE(611)
								int tmp40 = (tmp39 + (int)3);		HX_STACK_VAR(tmp40,"tmp40");
								HX_STACK_LINE(611)
								Dynamic tmp41 = tmp38->o->__GetItem(tmp40);		HX_STACK_VAR(tmp41,"tmp41");
								HX_STACK_LINE(611)
								Dynamic _g2 = tmp41;		HX_STACK_VAR(_g2,"_g2");
								HX_STACK_LINE(611)
								Dynamic tmp42 = _g2;		HX_STACK_VAR(tmp42,"tmp42");
								HX_STACK_LINE(611)
								switch( (int)(tmp42)){
									case (int)1: {
										HX_STACK_LINE(613)
										tmp37 = (int)0;
									}
									;break;
									case (int)0: {
										HX_STACK_LINE(614)
										tmp37 = (int)2;
									}
									;break;
									default: {
										HX_STACK_LINE(615)
										tmp37 = (int)1;
									}
								}
							}
							HX_STACK_LINE(611)
							tmp36->set_lineJoin(tmp37);
						}
						HX_STACK_LINE(621)
						::openfl::_internal::renderer::DrawCommandBuffer tmp36 = c->buffer;		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(621)
						int tmp37 = c->oPos;		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(621)
						int tmp38 = (tmp37 + (int)2);		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(621)
						Dynamic tmp39 = tmp36->o->__GetItem(tmp38);		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(621)
						Dynamic tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(621)
						bool tmp41 = (tmp40 == null());		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(621)
						if ((tmp41)){
							HX_STACK_LINE(623)
							::lime::graphics::cairo::Cairo tmp42 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(623)
							tmp42->set_lineCap((int)1);
						}
						else{
							HX_STACK_LINE(627)
							::lime::graphics::cairo::Cairo tmp42 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(627)
							int tmp43;		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(627)
							{
								HX_STACK_LINE(627)
								::openfl::_internal::renderer::DrawCommandBuffer tmp44 = c->buffer;		HX_STACK_VAR(tmp44,"tmp44");
								HX_STACK_LINE(627)
								int tmp45 = c->oPos;		HX_STACK_VAR(tmp45,"tmp45");
								HX_STACK_LINE(627)
								int tmp46 = (tmp45 + (int)2);		HX_STACK_VAR(tmp46,"tmp46");
								HX_STACK_LINE(627)
								Dynamic tmp47 = tmp44->o->__GetItem(tmp46);		HX_STACK_VAR(tmp47,"tmp47");
								HX_STACK_LINE(627)
								Dynamic _g2 = tmp47;		HX_STACK_VAR(_g2,"_g2");
								HX_STACK_LINE(627)
								Dynamic tmp48 = _g2;		HX_STACK_VAR(tmp48,"tmp48");
								HX_STACK_LINE(627)
								switch( (int)(tmp48)){
									case (int)0: {
										HX_STACK_LINE(629)
										tmp43 = (int)0;
									}
									;break;
									case (int)2: {
										HX_STACK_LINE(630)
										tmp43 = (int)2;
									}
									;break;
									default: {
										HX_STACK_LINE(631)
										tmp43 = (int)1;
									}
								}
							}
							HX_STACK_LINE(627)
							tmp42->set_lineCap(tmp43);
						}
						HX_STACK_LINE(637)
						::lime::graphics::cairo::Cairo tmp42 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(637)
						::openfl::_internal::renderer::DrawCommandBuffer tmp43 = c->buffer;		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(637)
						int tmp44 = c->fPos;		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(637)
						int tmp45 = (tmp44 + (int)1);		HX_STACK_VAR(tmp45,"tmp45");
						HX_STACK_LINE(637)
						Float tmp46 = tmp43->f->__get(tmp45);		HX_STACK_VAR(tmp46,"tmp46");
						HX_STACK_LINE(637)
						Float tmp47 = tmp46;		HX_STACK_VAR(tmp47,"tmp47");
						HX_STACK_LINE(637)
						tmp42->set_miterLimit(tmp47);
						HX_STACK_LINE(639)
						::openfl::_internal::renderer::DrawCommandBuffer tmp48 = c->buffer;		HX_STACK_VAR(tmp48,"tmp48");
						HX_STACK_LINE(639)
						int tmp49 = c->iPos;		HX_STACK_VAR(tmp49,"tmp49");
						HX_STACK_LINE(639)
						int tmp50 = tmp49;		HX_STACK_VAR(tmp50,"tmp50");
						HX_STACK_LINE(639)
						int tmp51 = tmp48->i->__get(tmp50);		HX_STACK_VAR(tmp51,"tmp51");
						HX_STACK_LINE(639)
						int tmp52 = tmp51;		HX_STACK_VAR(tmp52,"tmp52");
						HX_STACK_LINE(639)
						int tmp53 = (int(tmp52) & int((int)16711680));		HX_STACK_VAR(tmp53,"tmp53");
						HX_STACK_LINE(639)
						int tmp54 = hx::UShr(tmp53,(int)16);		HX_STACK_VAR(tmp54,"tmp54");
						HX_STACK_LINE(639)
						Float tmp55 = (Float(tmp54) / Float((int)255));		HX_STACK_VAR(tmp55,"tmp55");
						HX_STACK_LINE(639)
						Float r = tmp55;		HX_STACK_VAR(r,"r");
						HX_STACK_LINE(640)
						::openfl::_internal::renderer::DrawCommandBuffer tmp56 = c->buffer;		HX_STACK_VAR(tmp56,"tmp56");
						HX_STACK_LINE(640)
						int tmp57 = c->iPos;		HX_STACK_VAR(tmp57,"tmp57");
						HX_STACK_LINE(640)
						int tmp58 = tmp57;		HX_STACK_VAR(tmp58,"tmp58");
						HX_STACK_LINE(640)
						int tmp59 = tmp56->i->__get(tmp58);		HX_STACK_VAR(tmp59,"tmp59");
						HX_STACK_LINE(640)
						int tmp60 = tmp59;		HX_STACK_VAR(tmp60,"tmp60");
						HX_STACK_LINE(640)
						int tmp61 = (int(tmp60) & int((int)65280));		HX_STACK_VAR(tmp61,"tmp61");
						HX_STACK_LINE(640)
						int tmp62 = hx::UShr(tmp61,(int)8);		HX_STACK_VAR(tmp62,"tmp62");
						HX_STACK_LINE(640)
						Float tmp63 = (Float(tmp62) / Float((int)255));		HX_STACK_VAR(tmp63,"tmp63");
						HX_STACK_LINE(640)
						Float g = tmp63;		HX_STACK_VAR(g,"g");
						HX_STACK_LINE(641)
						::openfl::_internal::renderer::DrawCommandBuffer tmp64 = c->buffer;		HX_STACK_VAR(tmp64,"tmp64");
						HX_STACK_LINE(641)
						int tmp65 = c->iPos;		HX_STACK_VAR(tmp65,"tmp65");
						HX_STACK_LINE(641)
						int tmp66 = tmp65;		HX_STACK_VAR(tmp66,"tmp66");
						HX_STACK_LINE(641)
						int tmp67 = tmp64->i->__get(tmp66);		HX_STACK_VAR(tmp67,"tmp67");
						HX_STACK_LINE(641)
						int tmp68 = tmp67;		HX_STACK_VAR(tmp68,"tmp68");
						HX_STACK_LINE(641)
						int tmp69 = (int(tmp68) & int((int)255));		HX_STACK_VAR(tmp69,"tmp69");
						HX_STACK_LINE(641)
						Float tmp70 = (Float(tmp69) / Float((int)255));		HX_STACK_VAR(tmp70,"tmp70");
						HX_STACK_LINE(641)
						Float b = tmp70;		HX_STACK_VAR(b,"b");
						HX_STACK_LINE(643)
						::openfl::_internal::renderer::DrawCommandBuffer tmp71 = c->buffer;		HX_STACK_VAR(tmp71,"tmp71");
						HX_STACK_LINE(643)
						int tmp72 = c->fPos;		HX_STACK_VAR(tmp72,"tmp72");
						HX_STACK_LINE(643)
						int tmp73 = tmp72;		HX_STACK_VAR(tmp73,"tmp73");
						HX_STACK_LINE(643)
						Float tmp74 = tmp71->f->__get(tmp73);		HX_STACK_VAR(tmp74,"tmp74");
						HX_STACK_LINE(643)
						Float tmp75 = tmp74;		HX_STACK_VAR(tmp75,"tmp75");
						HX_STACK_LINE(643)
						bool tmp76 = (tmp75 == (int)1);		HX_STACK_VAR(tmp76,"tmp76");
						HX_STACK_LINE(643)
						if ((tmp76)){
							HX_STACK_LINE(645)
							Float tmp77 = r;		HX_STACK_VAR(tmp77,"tmp77");
							HX_STACK_LINE(645)
							Float tmp78 = g;		HX_STACK_VAR(tmp78,"tmp78");
							HX_STACK_LINE(645)
							Float tmp79 = b;		HX_STACK_VAR(tmp79,"tmp79");
							HX_STACK_LINE(645)
							Dynamic tmp80 = ::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::createRGB(tmp77,tmp78,tmp79);		HX_STACK_VAR(tmp80,"tmp80");
							HX_STACK_LINE(645)
							::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokePattern = tmp80;
						}
						else{
							HX_STACK_LINE(649)
							Float tmp77 = r;		HX_STACK_VAR(tmp77,"tmp77");
							HX_STACK_LINE(649)
							Float tmp78 = g;		HX_STACK_VAR(tmp78,"tmp78");
							HX_STACK_LINE(649)
							Float tmp79 = b;		HX_STACK_VAR(tmp79,"tmp79");
							HX_STACK_LINE(649)
							::openfl::_internal::renderer::DrawCommandBuffer tmp80 = c->buffer;		HX_STACK_VAR(tmp80,"tmp80");
							HX_STACK_LINE(649)
							int tmp81 = c->fPos;		HX_STACK_VAR(tmp81,"tmp81");
							HX_STACK_LINE(649)
							int tmp82 = tmp81;		HX_STACK_VAR(tmp82,"tmp82");
							HX_STACK_LINE(649)
							Float tmp83 = tmp80->f->__get(tmp82);		HX_STACK_VAR(tmp83,"tmp83");
							HX_STACK_LINE(649)
							Float tmp84 = tmp83;		HX_STACK_VAR(tmp84,"tmp84");
							HX_STACK_LINE(649)
							Dynamic tmp85 = ::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::createRGBA(tmp77,tmp78,tmp79,tmp84);		HX_STACK_VAR(tmp85,"tmp85");
							HX_STACK_LINE(649)
							::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokePattern = tmp85;
						}
					}
				}
				else if (  ( _switch_1==(int)13)){
					HX_STACK_LINE(657)
					::openfl::_internal::renderer::DrawCommandReader tmp11;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(657)
					{
						HX_STACK_LINE(657)
						{
							HX_STACK_LINE(657)
							::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(657)
							switch( (int)(_g2->__Index())){
								case (int)0: {
									HX_STACK_LINE(657)
									hx::AddEq(data->oPos,(int)2);
									HX_STACK_LINE(657)
									hx::AddEq(data->bPos,(int)2);
								}
								;break;
								case (int)1: {
									HX_STACK_LINE(657)
									hx::AddEq(data->iPos,(int)1);
									HX_STACK_LINE(657)
									hx::AddEq(data->fPos,(int)1);
								}
								;break;
								case (int)2: {
									HX_STACK_LINE(657)
									hx::AddEq(data->oPos,(int)4);
									HX_STACK_LINE(657)
									hx::AddEq(data->iiPos,(int)2);
									HX_STACK_LINE(657)
									hx::AddEq(data->ffPos,(int)1);
									HX_STACK_LINE(657)
									hx::AddEq(data->fPos,(int)1);
								}
								;break;
								case (int)3: {
									HX_STACK_LINE(657)
									hx::AddEq(data->fPos,(int)6);
								}
								;break;
								case (int)4: {
									HX_STACK_LINE(657)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)5: {
									HX_STACK_LINE(657)
									hx::AddEq(data->fPos,(int)3);
								}
								;break;
								case (int)6: {
									HX_STACK_LINE(657)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)7: {
									HX_STACK_LINE(657)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)8: {
									HX_STACK_LINE(657)
									hx::AddEq(data->fPos,(int)5);
									HX_STACK_LINE(657)
									hx::AddEq(data->oPos,(int)1);
								}
								;break;
								case (int)10: {
									HX_STACK_LINE(657)
									hx::AddEq(data->oPos,(int)4);
								}
								;break;
								case (int)11: {
									HX_STACK_LINE(657)
									Dynamic();
								}
								;break;
								case (int)12: {
									HX_STACK_LINE(657)
									hx::AddEq(data->oPos,(int)2);
									HX_STACK_LINE(657)
									hx::AddEq(data->bPos,(int)2);
								}
								;break;
								case (int)13: {
									HX_STACK_LINE(657)
									hx::AddEq(data->oPos,(int)4);
									HX_STACK_LINE(657)
									hx::AddEq(data->iiPos,(int)2);
									HX_STACK_LINE(657)
									hx::AddEq(data->ffPos,(int)1);
									HX_STACK_LINE(657)
									hx::AddEq(data->fPos,(int)1);
								}
								;break;
								case (int)14: {
									HX_STACK_LINE(657)
									hx::AddEq(data->oPos,(int)4);
									HX_STACK_LINE(657)
									hx::AddEq(data->iPos,(int)1);
									HX_STACK_LINE(657)
									hx::AddEq(data->fPos,(int)2);
									HX_STACK_LINE(657)
									hx::AddEq(data->bPos,(int)1);
								}
								;break;
								case (int)15: {
									HX_STACK_LINE(657)
									hx::AddEq(data->fPos,(int)2);
								}
								;break;
								case (int)16: {
									HX_STACK_LINE(657)
									hx::AddEq(data->fPos,(int)2);
								}
								;break;
								case (int)17: {
									HX_STACK_LINE(657)
									hx::AddEq(data->oPos,(int)1);
								}
								;break;
								default: {
									HX_STACK_LINE(657)
									Dynamic();
								}
							}
						}
						HX_STACK_LINE(657)
						data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::LINE_GRADIENT_STYLE;
						HX_STACK_LINE(657)
						tmp11 = data;
					}
					HX_STACK_LINE(657)
					::openfl::_internal::renderer::DrawCommandReader c = tmp11;		HX_STACK_VAR(c,"c");
					HX_STACK_LINE(658)
					bool tmp12 = stroke;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(658)
					bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(658)
					if ((tmp12)){
						HX_STACK_LINE(658)
						tmp13 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::hasStroke;
					}
					else{
						HX_STACK_LINE(658)
						tmp13 = false;
					}
					HX_STACK_LINE(658)
					if ((tmp13)){
						HX_STACK_LINE(660)
						::openfl::_internal::renderer::cairo::CairoGraphics_obj::closePath(null());
					}
					HX_STACK_LINE(664)
					::lime::graphics::cairo::Cairo tmp14 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(664)
					Float tmp15 = (positionX - offsetX);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(664)
					Float tmp16 = (positionY - offsetY);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(664)
					tmp14->moveTo(tmp15,tmp16);
					HX_STACK_LINE(665)
					::openfl::_internal::renderer::DrawCommandBuffer tmp17 = c->buffer;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(665)
					int tmp18 = c->oPos;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(665)
					int tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(665)
					Dynamic tmp20 = tmp17->o->__GetItem(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(665)
					Dynamic tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(665)
					::openfl::_internal::renderer::DrawCommandBuffer tmp22 = c->buffer;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(665)
					int tmp23 = c->iiPos;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(665)
					int tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(665)
					::openfl::_internal::renderer::DrawCommandBuffer tmp25 = c->buffer;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(665)
					int tmp26 = c->ffPos;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(665)
					int tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(665)
					::openfl::_internal::renderer::DrawCommandBuffer tmp28 = c->buffer;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(665)
					int tmp29 = c->iiPos;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(665)
					int tmp30 = (tmp29 + (int)1);		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(665)
					::openfl::_internal::renderer::DrawCommandBuffer tmp31 = c->buffer;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(665)
					int tmp32 = c->oPos;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(665)
					int tmp33 = (tmp32 + (int)1);		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(665)
					Dynamic tmp34 = tmp31->o->__GetItem(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(665)
					::openfl::geom::Matrix tmp35 = ((::openfl::geom::Matrix)(tmp34));		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(665)
					::openfl::_internal::renderer::DrawCommandBuffer tmp36 = c->buffer;		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(665)
					int tmp37 = c->oPos;		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(665)
					int tmp38 = (tmp37 + (int)2);		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(665)
					Dynamic tmp39 = tmp36->o->__GetItem(tmp38);		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(665)
					Dynamic tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(665)
					::openfl::_internal::renderer::DrawCommandBuffer tmp41 = c->buffer;		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(665)
					int tmp42 = c->oPos;		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(665)
					int tmp43 = (tmp42 + (int)3);		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(665)
					Dynamic tmp44 = tmp41->o->__GetItem(tmp43);		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(665)
					Dynamic tmp45 = tmp44;		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(665)
					::openfl::_internal::renderer::DrawCommandBuffer tmp46 = c->buffer;		HX_STACK_VAR(tmp46,"tmp46");
					HX_STACK_LINE(665)
					int tmp47 = c->fPos;		HX_STACK_VAR(tmp47,"tmp47");
					HX_STACK_LINE(665)
					int tmp48 = tmp47;		HX_STACK_VAR(tmp48,"tmp48");
					HX_STACK_LINE(665)
					Float tmp49 = tmp46->f->__get(tmp48);		HX_STACK_VAR(tmp49,"tmp49");
					HX_STACK_LINE(665)
					Float tmp50 = tmp49;		HX_STACK_VAR(tmp50,"tmp50");
					HX_STACK_LINE(665)
					Dynamic tmp51 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::createGradientPattern(tmp21,tmp22->ii->__get(tmp24).StaticCast< Array< int > >(),tmp25->ff->__get(tmp27).StaticCast< Array< Float > >(),tmp28->ii->__get(tmp30).StaticCast< Array< int > >(),tmp35,tmp40,tmp45,tmp50);		HX_STACK_VAR(tmp51,"tmp51");
					HX_STACK_LINE(665)
					::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokePattern = tmp51;
					HX_STACK_LINE(667)
					::openfl::_internal::renderer::cairo::CairoGraphics_obj::hasStroke = true;
				}
				else if (  ( _switch_1==(int)12)){
					HX_STACK_LINE(671)
					::openfl::_internal::renderer::DrawCommandReader tmp11;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(671)
					{
						HX_STACK_LINE(671)
						{
							HX_STACK_LINE(671)
							::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(671)
							switch( (int)(_g2->__Index())){
								case (int)0: {
									HX_STACK_LINE(671)
									hx::AddEq(data->oPos,(int)2);
									HX_STACK_LINE(671)
									hx::AddEq(data->bPos,(int)2);
								}
								;break;
								case (int)1: {
									HX_STACK_LINE(671)
									hx::AddEq(data->iPos,(int)1);
									HX_STACK_LINE(671)
									hx::AddEq(data->fPos,(int)1);
								}
								;break;
								case (int)2: {
									HX_STACK_LINE(671)
									hx::AddEq(data->oPos,(int)4);
									HX_STACK_LINE(671)
									hx::AddEq(data->iiPos,(int)2);
									HX_STACK_LINE(671)
									hx::AddEq(data->ffPos,(int)1);
									HX_STACK_LINE(671)
									hx::AddEq(data->fPos,(int)1);
								}
								;break;
								case (int)3: {
									HX_STACK_LINE(671)
									hx::AddEq(data->fPos,(int)6);
								}
								;break;
								case (int)4: {
									HX_STACK_LINE(671)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)5: {
									HX_STACK_LINE(671)
									hx::AddEq(data->fPos,(int)3);
								}
								;break;
								case (int)6: {
									HX_STACK_LINE(671)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)7: {
									HX_STACK_LINE(671)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)8: {
									HX_STACK_LINE(671)
									hx::AddEq(data->fPos,(int)5);
									HX_STACK_LINE(671)
									hx::AddEq(data->oPos,(int)1);
								}
								;break;
								case (int)10: {
									HX_STACK_LINE(671)
									hx::AddEq(data->oPos,(int)4);
								}
								;break;
								case (int)11: {
									HX_STACK_LINE(671)
									Dynamic();
								}
								;break;
								case (int)12: {
									HX_STACK_LINE(671)
									hx::AddEq(data->oPos,(int)2);
									HX_STACK_LINE(671)
									hx::AddEq(data->bPos,(int)2);
								}
								;break;
								case (int)13: {
									HX_STACK_LINE(671)
									hx::AddEq(data->oPos,(int)4);
									HX_STACK_LINE(671)
									hx::AddEq(data->iiPos,(int)2);
									HX_STACK_LINE(671)
									hx::AddEq(data->ffPos,(int)1);
									HX_STACK_LINE(671)
									hx::AddEq(data->fPos,(int)1);
								}
								;break;
								case (int)14: {
									HX_STACK_LINE(671)
									hx::AddEq(data->oPos,(int)4);
									HX_STACK_LINE(671)
									hx::AddEq(data->iPos,(int)1);
									HX_STACK_LINE(671)
									hx::AddEq(data->fPos,(int)2);
									HX_STACK_LINE(671)
									hx::AddEq(data->bPos,(int)1);
								}
								;break;
								case (int)15: {
									HX_STACK_LINE(671)
									hx::AddEq(data->fPos,(int)2);
								}
								;break;
								case (int)16: {
									HX_STACK_LINE(671)
									hx::AddEq(data->fPos,(int)2);
								}
								;break;
								case (int)17: {
									HX_STACK_LINE(671)
									hx::AddEq(data->oPos,(int)1);
								}
								;break;
								default: {
									HX_STACK_LINE(671)
									Dynamic();
								}
							}
						}
						HX_STACK_LINE(671)
						data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::LINE_BITMAP_STYLE;
						HX_STACK_LINE(671)
						tmp11 = data;
					}
					HX_STACK_LINE(671)
					::openfl::_internal::renderer::DrawCommandReader c = tmp11;		HX_STACK_VAR(c,"c");
					HX_STACK_LINE(672)
					bool tmp12 = stroke;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(672)
					bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(672)
					if ((tmp12)){
						HX_STACK_LINE(672)
						tmp13 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::hasStroke;
					}
					else{
						HX_STACK_LINE(672)
						tmp13 = false;
					}
					HX_STACK_LINE(672)
					if ((tmp13)){
						HX_STACK_LINE(674)
						::openfl::_internal::renderer::cairo::CairoGraphics_obj::closePath(null());
					}
					HX_STACK_LINE(678)
					::lime::graphics::cairo::Cairo tmp14 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(678)
					Float tmp15 = (positionX - offsetX);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(678)
					Float tmp16 = (positionY - offsetY);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(678)
					tmp14->moveTo(tmp15,tmp16);
					HX_STACK_LINE(679)
					::openfl::_internal::renderer::DrawCommandBuffer tmp17 = c->buffer;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(679)
					int tmp18 = c->oPos;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(679)
					int tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(679)
					Dynamic tmp20 = tmp17->o->__GetItem(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(679)
					::openfl::display::BitmapData tmp21 = ((::openfl::display::BitmapData)(tmp20));		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(679)
					::openfl::_internal::renderer::DrawCommandBuffer tmp22 = c->buffer;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(679)
					int tmp23 = c->oPos;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(679)
					int tmp24 = (tmp23 + (int)1);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(679)
					Dynamic tmp25 = tmp22->o->__GetItem(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(679)
					::openfl::geom::Matrix tmp26 = ((::openfl::geom::Matrix)(tmp25));		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(679)
					::openfl::_internal::renderer::DrawCommandBuffer tmp27 = c->buffer;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(679)
					int tmp28 = c->bPos;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(679)
					int tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(679)
					bool tmp30 = tmp27->b->__get(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(679)
					bool tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(679)
					Dynamic tmp32 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::createImagePattern(tmp21,tmp26,tmp31);		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(679)
					::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokePattern = tmp32;
					HX_STACK_LINE(681)
					::openfl::_internal::renderer::cairo::CairoGraphics_obj::hasStroke = true;
				}
				else if (  ( _switch_1==(int)0)){
					HX_STACK_LINE(685)
					::openfl::_internal::renderer::DrawCommandReader tmp11;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(685)
					{
						HX_STACK_LINE(685)
						{
							HX_STACK_LINE(685)
							::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(685)
							switch( (int)(_g2->__Index())){
								case (int)0: {
									HX_STACK_LINE(685)
									hx::AddEq(data->oPos,(int)2);
									HX_STACK_LINE(685)
									hx::AddEq(data->bPos,(int)2);
								}
								;break;
								case (int)1: {
									HX_STACK_LINE(685)
									hx::AddEq(data->iPos,(int)1);
									HX_STACK_LINE(685)
									hx::AddEq(data->fPos,(int)1);
								}
								;break;
								case (int)2: {
									HX_STACK_LINE(685)
									hx::AddEq(data->oPos,(int)4);
									HX_STACK_LINE(685)
									hx::AddEq(data->iiPos,(int)2);
									HX_STACK_LINE(685)
									hx::AddEq(data->ffPos,(int)1);
									HX_STACK_LINE(685)
									hx::AddEq(data->fPos,(int)1);
								}
								;break;
								case (int)3: {
									HX_STACK_LINE(685)
									hx::AddEq(data->fPos,(int)6);
								}
								;break;
								case (int)4: {
									HX_STACK_LINE(685)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)5: {
									HX_STACK_LINE(685)
									hx::AddEq(data->fPos,(int)3);
								}
								;break;
								case (int)6: {
									HX_STACK_LINE(685)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)7: {
									HX_STACK_LINE(685)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)8: {
									HX_STACK_LINE(685)
									hx::AddEq(data->fPos,(int)5);
									HX_STACK_LINE(685)
									hx::AddEq(data->oPos,(int)1);
								}
								;break;
								case (int)10: {
									HX_STACK_LINE(685)
									hx::AddEq(data->oPos,(int)4);
								}
								;break;
								case (int)11: {
									HX_STACK_LINE(685)
									Dynamic();
								}
								;break;
								case (int)12: {
									HX_STACK_LINE(685)
									hx::AddEq(data->oPos,(int)2);
									HX_STACK_LINE(685)
									hx::AddEq(data->bPos,(int)2);
								}
								;break;
								case (int)13: {
									HX_STACK_LINE(685)
									hx::AddEq(data->oPos,(int)4);
									HX_STACK_LINE(685)
									hx::AddEq(data->iiPos,(int)2);
									HX_STACK_LINE(685)
									hx::AddEq(data->ffPos,(int)1);
									HX_STACK_LINE(685)
									hx::AddEq(data->fPos,(int)1);
								}
								;break;
								case (int)14: {
									HX_STACK_LINE(685)
									hx::AddEq(data->oPos,(int)4);
									HX_STACK_LINE(685)
									hx::AddEq(data->iPos,(int)1);
									HX_STACK_LINE(685)
									hx::AddEq(data->fPos,(int)2);
									HX_STACK_LINE(685)
									hx::AddEq(data->bPos,(int)1);
								}
								;break;
								case (int)15: {
									HX_STACK_LINE(685)
									hx::AddEq(data->fPos,(int)2);
								}
								;break;
								case (int)16: {
									HX_STACK_LINE(685)
									hx::AddEq(data->fPos,(int)2);
								}
								;break;
								case (int)17: {
									HX_STACK_LINE(685)
									hx::AddEq(data->oPos,(int)1);
								}
								;break;
								default: {
									HX_STACK_LINE(685)
									Dynamic();
								}
							}
						}
						HX_STACK_LINE(685)
						data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::BEGIN_BITMAP_FILL;
						HX_STACK_LINE(685)
						tmp11 = data;
					}
					HX_STACK_LINE(685)
					::openfl::_internal::renderer::DrawCommandReader c = tmp11;		HX_STACK_VAR(c,"c");
					HX_STACK_LINE(686)
					::openfl::_internal::renderer::DrawCommandBuffer tmp12 = c->buffer;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(686)
					int tmp13 = c->oPos;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(686)
					int tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(686)
					Dynamic tmp15 = tmp12->o->__GetItem(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(686)
					::openfl::display::BitmapData tmp16 = ((::openfl::display::BitmapData)(tmp15));		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(686)
					::openfl::_internal::renderer::DrawCommandBuffer tmp17 = c->buffer;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(686)
					int tmp18 = c->oPos;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(686)
					int tmp19 = (tmp18 + (int)1);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(686)
					Dynamic tmp20 = tmp17->o->__GetItem(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(686)
					::openfl::geom::Matrix tmp21 = ((::openfl::geom::Matrix)(tmp20));		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(686)
					::openfl::_internal::renderer::DrawCommandBuffer tmp22 = c->buffer;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(686)
					int tmp23 = c->bPos;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(686)
					int tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(686)
					bool tmp25 = tmp22->b->__get(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(686)
					Dynamic tmp26 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::createImagePattern(tmp16,tmp21,tmp25);		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(686)
					::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillPattern = tmp26;
					HX_STACK_LINE(688)
					::openfl::_internal::renderer::DrawCommandBuffer tmp27 = c->buffer;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(688)
					int tmp28 = c->oPos;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(688)
					int tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(688)
					Dynamic tmp30 = tmp27->o->__GetItem(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(688)
					::openfl::_internal::renderer::cairo::CairoGraphics_obj::bitmapFill = ((::openfl::display::BitmapData)(tmp30));
					HX_STACK_LINE(689)
					::openfl::_internal::renderer::DrawCommandBuffer tmp31 = c->buffer;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(689)
					int tmp32 = c->bPos;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(689)
					int tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(689)
					bool tmp34 = tmp31->b->__get(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(689)
					::openfl::_internal::renderer::cairo::CairoGraphics_obj::bitmapRepeat = tmp34;
					HX_STACK_LINE(691)
					::openfl::_internal::renderer::cairo::CairoGraphics_obj::hasFill = true;
				}
				else if (  ( _switch_1==(int)1)){
					HX_STACK_LINE(695)
					::openfl::_internal::renderer::DrawCommandReader tmp11;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(695)
					{
						HX_STACK_LINE(695)
						{
							HX_STACK_LINE(695)
							::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(695)
							switch( (int)(_g2->__Index())){
								case (int)0: {
									HX_STACK_LINE(695)
									hx::AddEq(data->oPos,(int)2);
									HX_STACK_LINE(695)
									hx::AddEq(data->bPos,(int)2);
								}
								;break;
								case (int)1: {
									HX_STACK_LINE(695)
									hx::AddEq(data->iPos,(int)1);
									HX_STACK_LINE(695)
									hx::AddEq(data->fPos,(int)1);
								}
								;break;
								case (int)2: {
									HX_STACK_LINE(695)
									hx::AddEq(data->oPos,(int)4);
									HX_STACK_LINE(695)
									hx::AddEq(data->iiPos,(int)2);
									HX_STACK_LINE(695)
									hx::AddEq(data->ffPos,(int)1);
									HX_STACK_LINE(695)
									hx::AddEq(data->fPos,(int)1);
								}
								;break;
								case (int)3: {
									HX_STACK_LINE(695)
									hx::AddEq(data->fPos,(int)6);
								}
								;break;
								case (int)4: {
									HX_STACK_LINE(695)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)5: {
									HX_STACK_LINE(695)
									hx::AddEq(data->fPos,(int)3);
								}
								;break;
								case (int)6: {
									HX_STACK_LINE(695)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)7: {
									HX_STACK_LINE(695)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)8: {
									HX_STACK_LINE(695)
									hx::AddEq(data->fPos,(int)5);
									HX_STACK_LINE(695)
									hx::AddEq(data->oPos,(int)1);
								}
								;break;
								case (int)10: {
									HX_STACK_LINE(695)
									hx::AddEq(data->oPos,(int)4);
								}
								;break;
								case (int)11: {
									HX_STACK_LINE(695)
									Dynamic();
								}
								;break;
								case (int)12: {
									HX_STACK_LINE(695)
									hx::AddEq(data->oPos,(int)2);
									HX_STACK_LINE(695)
									hx::AddEq(data->bPos,(int)2);
								}
								;break;
								case (int)13: {
									HX_STACK_LINE(695)
									hx::AddEq(data->oPos,(int)4);
									HX_STACK_LINE(695)
									hx::AddEq(data->iiPos,(int)2);
									HX_STACK_LINE(695)
									hx::AddEq(data->ffPos,(int)1);
									HX_STACK_LINE(695)
									hx::AddEq(data->fPos,(int)1);
								}
								;break;
								case (int)14: {
									HX_STACK_LINE(695)
									hx::AddEq(data->oPos,(int)4);
									HX_STACK_LINE(695)
									hx::AddEq(data->iPos,(int)1);
									HX_STACK_LINE(695)
									hx::AddEq(data->fPos,(int)2);
									HX_STACK_LINE(695)
									hx::AddEq(data->bPos,(int)1);
								}
								;break;
								case (int)15: {
									HX_STACK_LINE(695)
									hx::AddEq(data->fPos,(int)2);
								}
								;break;
								case (int)16: {
									HX_STACK_LINE(695)
									hx::AddEq(data->fPos,(int)2);
								}
								;break;
								case (int)17: {
									HX_STACK_LINE(695)
									hx::AddEq(data->oPos,(int)1);
								}
								;break;
								default: {
									HX_STACK_LINE(695)
									Dynamic();
								}
							}
						}
						HX_STACK_LINE(695)
						data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::BEGIN_FILL;
						HX_STACK_LINE(695)
						tmp11 = data;
					}
					HX_STACK_LINE(695)
					::openfl::_internal::renderer::DrawCommandReader c = tmp11;		HX_STACK_VAR(c,"c");
					HX_STACK_LINE(696)
					::openfl::_internal::renderer::DrawCommandBuffer tmp12 = c->buffer;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(696)
					int tmp13 = c->fPos;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(696)
					int tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(696)
					Float tmp15 = tmp12->f->__get(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(696)
					bool tmp16 = (tmp15 < ((Float)0.005));		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(696)
					if ((tmp16)){
						HX_STACK_LINE(698)
						::openfl::_internal::renderer::cairo::CairoGraphics_obj::hasFill = false;
					}
					else{
						HX_STACK_LINE(702)
						Dynamic tmp17 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillPattern;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(702)
						bool tmp18 = (tmp17 != null());		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(702)
						if ((tmp18)){
							HX_STACK_LINE(704)
							::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillPatternMatrix = null();
						}
						HX_STACK_LINE(708)
						::openfl::_internal::renderer::DrawCommandBuffer tmp19 = c->buffer;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(708)
						int tmp20 = c->iPos;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(708)
						int tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(708)
						int tmp22 = tmp19->i->__get(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(708)
						int tmp23 = (int(tmp22) & int((int)16711680));		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(708)
						int tmp24 = hx::UShr(tmp23,(int)16);		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(708)
						Float tmp25 = (Float(tmp24) / Float((int)255));		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(708)
						::openfl::_internal::renderer::DrawCommandBuffer tmp26 = c->buffer;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(708)
						int tmp27 = c->iPos;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(708)
						int tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(708)
						int tmp29 = tmp26->i->__get(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(708)
						int tmp30 = (int(tmp29) & int((int)65280));		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(708)
						int tmp31 = hx::UShr(tmp30,(int)8);		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(708)
						Float tmp32 = (Float(tmp31) / Float((int)255));		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(708)
						::openfl::_internal::renderer::DrawCommandBuffer tmp33 = c->buffer;		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(708)
						int tmp34 = c->iPos;		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(708)
						int tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(708)
						int tmp36 = tmp33->i->__get(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(708)
						int tmp37 = (int(tmp36) & int((int)255));		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(708)
						Float tmp38 = (Float(tmp37) / Float((int)255));		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(708)
						::openfl::_internal::renderer::DrawCommandBuffer tmp39 = c->buffer;		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(708)
						int tmp40 = c->fPos;		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(708)
						int tmp41 = tmp40;		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(708)
						Float tmp42 = tmp39->f->__get(tmp41);		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(708)
						Dynamic tmp43 = ::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::createRGBA(tmp25,tmp32,tmp38,tmp42);		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(708)
						::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillPattern = tmp43;
						HX_STACK_LINE(709)
						::openfl::_internal::renderer::cairo::CairoGraphics_obj::hasFill = true;
					}
					HX_STACK_LINE(713)
					::openfl::_internal::renderer::cairo::CairoGraphics_obj::bitmapFill = null();
				}
				else if (  ( _switch_1==(int)2)){
					HX_STACK_LINE(717)
					::openfl::_internal::renderer::DrawCommandReader tmp11;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(717)
					{
						HX_STACK_LINE(717)
						{
							HX_STACK_LINE(717)
							::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(717)
							switch( (int)(_g2->__Index())){
								case (int)0: {
									HX_STACK_LINE(717)
									hx::AddEq(data->oPos,(int)2);
									HX_STACK_LINE(717)
									hx::AddEq(data->bPos,(int)2);
								}
								;break;
								case (int)1: {
									HX_STACK_LINE(717)
									hx::AddEq(data->iPos,(int)1);
									HX_STACK_LINE(717)
									hx::AddEq(data->fPos,(int)1);
								}
								;break;
								case (int)2: {
									HX_STACK_LINE(717)
									hx::AddEq(data->oPos,(int)4);
									HX_STACK_LINE(717)
									hx::AddEq(data->iiPos,(int)2);
									HX_STACK_LINE(717)
									hx::AddEq(data->ffPos,(int)1);
									HX_STACK_LINE(717)
									hx::AddEq(data->fPos,(int)1);
								}
								;break;
								case (int)3: {
									HX_STACK_LINE(717)
									hx::AddEq(data->fPos,(int)6);
								}
								;break;
								case (int)4: {
									HX_STACK_LINE(717)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)5: {
									HX_STACK_LINE(717)
									hx::AddEq(data->fPos,(int)3);
								}
								;break;
								case (int)6: {
									HX_STACK_LINE(717)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)7: {
									HX_STACK_LINE(717)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)8: {
									HX_STACK_LINE(717)
									hx::AddEq(data->fPos,(int)5);
									HX_STACK_LINE(717)
									hx::AddEq(data->oPos,(int)1);
								}
								;break;
								case (int)10: {
									HX_STACK_LINE(717)
									hx::AddEq(data->oPos,(int)4);
								}
								;break;
								case (int)11: {
									HX_STACK_LINE(717)
									Dynamic();
								}
								;break;
								case (int)12: {
									HX_STACK_LINE(717)
									hx::AddEq(data->oPos,(int)2);
									HX_STACK_LINE(717)
									hx::AddEq(data->bPos,(int)2);
								}
								;break;
								case (int)13: {
									HX_STACK_LINE(717)
									hx::AddEq(data->oPos,(int)4);
									HX_STACK_LINE(717)
									hx::AddEq(data->iiPos,(int)2);
									HX_STACK_LINE(717)
									hx::AddEq(data->ffPos,(int)1);
									HX_STACK_LINE(717)
									hx::AddEq(data->fPos,(int)1);
								}
								;break;
								case (int)14: {
									HX_STACK_LINE(717)
									hx::AddEq(data->oPos,(int)4);
									HX_STACK_LINE(717)
									hx::AddEq(data->iPos,(int)1);
									HX_STACK_LINE(717)
									hx::AddEq(data->fPos,(int)2);
									HX_STACK_LINE(717)
									hx::AddEq(data->bPos,(int)1);
								}
								;break;
								case (int)15: {
									HX_STACK_LINE(717)
									hx::AddEq(data->fPos,(int)2);
								}
								;break;
								case (int)16: {
									HX_STACK_LINE(717)
									hx::AddEq(data->fPos,(int)2);
								}
								;break;
								case (int)17: {
									HX_STACK_LINE(717)
									hx::AddEq(data->oPos,(int)1);
								}
								;break;
								default: {
									HX_STACK_LINE(717)
									Dynamic();
								}
							}
						}
						HX_STACK_LINE(717)
						data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::BEGIN_GRADIENT_FILL;
						HX_STACK_LINE(717)
						tmp11 = data;
					}
					HX_STACK_LINE(717)
					::openfl::_internal::renderer::DrawCommandReader c = tmp11;		HX_STACK_VAR(c,"c");
					HX_STACK_LINE(718)
					Dynamic tmp12 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillPattern;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(718)
					bool tmp13 = (tmp12 != null());		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(718)
					if ((tmp13)){
						HX_STACK_LINE(720)
						::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillPatternMatrix = null();
					}
					HX_STACK_LINE(724)
					::openfl::_internal::renderer::DrawCommandBuffer tmp14 = c->buffer;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(724)
					int tmp15 = c->oPos;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(724)
					int tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(724)
					Dynamic tmp17 = tmp14->o->__GetItem(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(724)
					Dynamic tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(724)
					::openfl::_internal::renderer::DrawCommandBuffer tmp19 = c->buffer;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(724)
					int tmp20 = c->iiPos;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(724)
					int tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(724)
					::openfl::_internal::renderer::DrawCommandBuffer tmp22 = c->buffer;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(724)
					int tmp23 = c->ffPos;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(724)
					int tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(724)
					::openfl::_internal::renderer::DrawCommandBuffer tmp25 = c->buffer;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(724)
					int tmp26 = c->iiPos;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(724)
					int tmp27 = (tmp26 + (int)1);		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(724)
					::openfl::_internal::renderer::DrawCommandBuffer tmp28 = c->buffer;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(724)
					int tmp29 = c->oPos;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(724)
					int tmp30 = (tmp29 + (int)1);		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(724)
					Dynamic tmp31 = tmp28->o->__GetItem(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(724)
					::openfl::geom::Matrix tmp32 = ((::openfl::geom::Matrix)(tmp31));		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(724)
					::openfl::_internal::renderer::DrawCommandBuffer tmp33 = c->buffer;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(724)
					int tmp34 = c->oPos;		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(724)
					int tmp35 = (tmp34 + (int)2);		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(724)
					Dynamic tmp36 = tmp33->o->__GetItem(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(724)
					Dynamic tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(724)
					::openfl::_internal::renderer::DrawCommandBuffer tmp38 = c->buffer;		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(724)
					int tmp39 = c->oPos;		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(724)
					int tmp40 = (tmp39 + (int)3);		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(724)
					Dynamic tmp41 = tmp38->o->__GetItem(tmp40);		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(724)
					Dynamic tmp42 = tmp41;		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(724)
					::openfl::_internal::renderer::DrawCommandBuffer tmp43 = c->buffer;		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(724)
					int tmp44 = c->fPos;		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(724)
					int tmp45 = tmp44;		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(724)
					Float tmp46 = tmp43->f->__get(tmp45);		HX_STACK_VAR(tmp46,"tmp46");
					HX_STACK_LINE(724)
					Float tmp47 = tmp46;		HX_STACK_VAR(tmp47,"tmp47");
					HX_STACK_LINE(724)
					Dynamic tmp48 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::createGradientPattern(tmp18,tmp19->ii->__get(tmp21).StaticCast< Array< int > >(),tmp22->ff->__get(tmp24).StaticCast< Array< Float > >(),tmp25->ii->__get(tmp27).StaticCast< Array< int > >(),tmp32,tmp37,tmp42,tmp47);		HX_STACK_VAR(tmp48,"tmp48");
					HX_STACK_LINE(724)
					::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillPattern = tmp48;
					HX_STACK_LINE(726)
					::openfl::_internal::renderer::cairo::CairoGraphics_obj::hasFill = true;
					HX_STACK_LINE(727)
					::openfl::_internal::renderer::cairo::CairoGraphics_obj::bitmapFill = null();
				}
				else if (  ( _switch_1==(int)10)){
					HX_STACK_LINE(731)
					::openfl::_internal::renderer::DrawCommandReader tmp11;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(731)
					{
						HX_STACK_LINE(731)
						{
							HX_STACK_LINE(731)
							::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(731)
							switch( (int)(_g2->__Index())){
								case (int)0: {
									HX_STACK_LINE(731)
									hx::AddEq(data->oPos,(int)2);
									HX_STACK_LINE(731)
									hx::AddEq(data->bPos,(int)2);
								}
								;break;
								case (int)1: {
									HX_STACK_LINE(731)
									hx::AddEq(data->iPos,(int)1);
									HX_STACK_LINE(731)
									hx::AddEq(data->fPos,(int)1);
								}
								;break;
								case (int)2: {
									HX_STACK_LINE(731)
									hx::AddEq(data->oPos,(int)4);
									HX_STACK_LINE(731)
									hx::AddEq(data->iiPos,(int)2);
									HX_STACK_LINE(731)
									hx::AddEq(data->ffPos,(int)1);
									HX_STACK_LINE(731)
									hx::AddEq(data->fPos,(int)1);
								}
								;break;
								case (int)3: {
									HX_STACK_LINE(731)
									hx::AddEq(data->fPos,(int)6);
								}
								;break;
								case (int)4: {
									HX_STACK_LINE(731)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)5: {
									HX_STACK_LINE(731)
									hx::AddEq(data->fPos,(int)3);
								}
								;break;
								case (int)6: {
									HX_STACK_LINE(731)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)7: {
									HX_STACK_LINE(731)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)8: {
									HX_STACK_LINE(731)
									hx::AddEq(data->fPos,(int)5);
									HX_STACK_LINE(731)
									hx::AddEq(data->oPos,(int)1);
								}
								;break;
								case (int)10: {
									HX_STACK_LINE(731)
									hx::AddEq(data->oPos,(int)4);
								}
								;break;
								case (int)11: {
									HX_STACK_LINE(731)
									Dynamic();
								}
								;break;
								case (int)12: {
									HX_STACK_LINE(731)
									hx::AddEq(data->oPos,(int)2);
									HX_STACK_LINE(731)
									hx::AddEq(data->bPos,(int)2);
								}
								;break;
								case (int)13: {
									HX_STACK_LINE(731)
									hx::AddEq(data->oPos,(int)4);
									HX_STACK_LINE(731)
									hx::AddEq(data->iiPos,(int)2);
									HX_STACK_LINE(731)
									hx::AddEq(data->ffPos,(int)1);
									HX_STACK_LINE(731)
									hx::AddEq(data->fPos,(int)1);
								}
								;break;
								case (int)14: {
									HX_STACK_LINE(731)
									hx::AddEq(data->oPos,(int)4);
									HX_STACK_LINE(731)
									hx::AddEq(data->iPos,(int)1);
									HX_STACK_LINE(731)
									hx::AddEq(data->fPos,(int)2);
									HX_STACK_LINE(731)
									hx::AddEq(data->bPos,(int)1);
								}
								;break;
								case (int)15: {
									HX_STACK_LINE(731)
									hx::AddEq(data->fPos,(int)2);
								}
								;break;
								case (int)16: {
									HX_STACK_LINE(731)
									hx::AddEq(data->fPos,(int)2);
								}
								;break;
								case (int)17: {
									HX_STACK_LINE(731)
									hx::AddEq(data->oPos,(int)1);
								}
								;break;
								default: {
									HX_STACK_LINE(731)
									Dynamic();
								}
							}
						}
						HX_STACK_LINE(731)
						data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::DRAW_TRIANGLES;
						HX_STACK_LINE(731)
						tmp11 = data;
					}
					HX_STACK_LINE(731)
					::openfl::_internal::renderer::DrawCommandReader c = tmp11;		HX_STACK_VAR(c,"c");
					HX_STACK_LINE(732)
					::openfl::_internal::renderer::DrawCommandBuffer tmp12 = c->buffer;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(732)
					int tmp13 = c->oPos;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(732)
					int tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(732)
					Dynamic tmp15 = tmp12->o->__GetItem(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(732)
					::openfl::_Vector::FloatVector v = ((::openfl::_Vector::FloatVector)(tmp15));		HX_STACK_VAR(v,"v");
					HX_STACK_LINE(733)
					::openfl::_internal::renderer::DrawCommandBuffer tmp16 = c->buffer;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(733)
					int tmp17 = c->oPos;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(733)
					int tmp18 = (tmp17 + (int)1);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(733)
					Dynamic tmp19 = tmp16->o->__GetItem(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(733)
					::openfl::_Vector::IntVector ind = ((::openfl::_Vector::IntVector)(tmp19));		HX_STACK_VAR(ind,"ind");
					HX_STACK_LINE(734)
					::openfl::_internal::renderer::DrawCommandBuffer tmp20 = c->buffer;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(734)
					int tmp21 = c->oPos;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(734)
					int tmp22 = (tmp21 + (int)2);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(734)
					Dynamic tmp23 = tmp20->o->__GetItem(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(734)
					::openfl::_Vector::FloatVector uvt = ((::openfl::_Vector::FloatVector)(tmp23));		HX_STACK_VAR(uvt,"uvt");
					HX_STACK_LINE(735)
					::openfl::display::BitmapData tmp24 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::bitmapFill;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(735)
					bool tmp25 = (tmp24 == null());		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(735)
					bool colorFill = tmp25;		HX_STACK_VAR(colorFill,"colorFill");
					HX_STACK_LINE(737)
					bool tmp26 = colorFill;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(737)
					bool tmp27;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(737)
					if ((tmp26)){
						HX_STACK_LINE(737)
						tmp27 = (uvt != null());
					}
					else{
						HX_STACK_LINE(737)
						tmp27 = false;
					}
					HX_STACK_LINE(737)
					if ((tmp27)){
						HX_STACK_LINE(739)
						break;
					}
					HX_STACK_LINE(743)
					int width = (int)0;		HX_STACK_VAR(width,"width");
					HX_STACK_LINE(744)
					int height = (int)0;		HX_STACK_VAR(height,"height");
					HX_STACK_LINE(746)
					bool tmp28 = colorFill;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(746)
					bool tmp29 = !(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(746)
					if ((tmp29)){
						HX_STACK_LINE(750)
						bool tmp30 = (uvt == null());		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(750)
						if ((tmp30)){
							HX_STACK_LINE(752)
							::openfl::_Vector::FloatVector tmp31;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(752)
							{
								HX_STACK_LINE(752)
								int length = null();		HX_STACK_VAR(length,"length");
								HX_STACK_LINE(752)
								bool fixed = null();		HX_STACK_VAR(fixed,"fixed");
								HX_STACK_LINE(752)
								::openfl::_Vector::FloatVector tmp32 = ::openfl::_Vector::FloatVector_obj::__new(length,fixed,null());		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(752)
								::openfl::_Vector::FloatVector tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(752)
								tmp31 = tmp33;
							}
							HX_STACK_LINE(752)
							uvt = tmp31;
							HX_STACK_LINE(754)
							{
								HX_STACK_LINE(754)
								int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
								HX_STACK_LINE(754)
								int tmp32 = v->get_length();		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(754)
								Float tmp33 = (Float(tmp32) / Float((int)2));		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(754)
								int tmp34 = ::Std_obj::_int(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(754)
								int _g2 = tmp34;		HX_STACK_VAR(_g2,"_g2");
								HX_STACK_LINE(754)
								while((true)){
									HX_STACK_LINE(754)
									bool tmp35 = (_g3 < _g2);		HX_STACK_VAR(tmp35,"tmp35");
									HX_STACK_LINE(754)
									bool tmp36 = !(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
									HX_STACK_LINE(754)
									if ((tmp36)){
										HX_STACK_LINE(754)
										break;
									}
									HX_STACK_LINE(754)
									int tmp37 = (_g3)++;		HX_STACK_VAR(tmp37,"tmp37");
									HX_STACK_LINE(754)
									int i = tmp37;		HX_STACK_VAR(i,"i");
									HX_STACK_LINE(756)
									{
										HX_STACK_LINE(756)
										int tmp38 = (i * (int)2);		HX_STACK_VAR(tmp38,"tmp38");
										HX_STACK_LINE(756)
										Float tmp39 = v->get(tmp38);		HX_STACK_VAR(tmp39,"tmp39");
										HX_STACK_LINE(756)
										Float tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
										HX_STACK_LINE(756)
										::openfl::display::BitmapData tmp41 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::bitmapFill;		HX_STACK_VAR(tmp41,"tmp41");
										HX_STACK_LINE(756)
										int tmp42 = tmp41->width;		HX_STACK_VAR(tmp42,"tmp42");
										HX_STACK_LINE(756)
										Float tmp43 = (Float(tmp40) / Float(tmp42));		HX_STACK_VAR(tmp43,"tmp43");
										HX_STACK_LINE(756)
										Float x = tmp43;		HX_STACK_VAR(x,"x");
										HX_STACK_LINE(756)
										Float tmp44 = x;		HX_STACK_VAR(tmp44,"tmp44");
										HX_STACK_LINE(756)
										uvt->push(tmp44);
									}
									HX_STACK_LINE(757)
									{
										HX_STACK_LINE(757)
										int tmp38 = (i * (int)2);		HX_STACK_VAR(tmp38,"tmp38");
										HX_STACK_LINE(757)
										int tmp39 = (tmp38 + (int)1);		HX_STACK_VAR(tmp39,"tmp39");
										HX_STACK_LINE(757)
										Float tmp40 = v->get(tmp39);		HX_STACK_VAR(tmp40,"tmp40");
										HX_STACK_LINE(757)
										Float tmp41 = tmp40;		HX_STACK_VAR(tmp41,"tmp41");
										HX_STACK_LINE(757)
										::openfl::display::BitmapData tmp42 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::bitmapFill;		HX_STACK_VAR(tmp42,"tmp42");
										HX_STACK_LINE(757)
										int tmp43 = tmp42->height;		HX_STACK_VAR(tmp43,"tmp43");
										HX_STACK_LINE(757)
										Float tmp44 = (Float(tmp41) / Float(tmp43));		HX_STACK_VAR(tmp44,"tmp44");
										HX_STACK_LINE(757)
										Float x = tmp44;		HX_STACK_VAR(x,"x");
										HX_STACK_LINE(757)
										Float tmp45 = x;		HX_STACK_VAR(tmp45,"tmp45");
										HX_STACK_LINE(757)
										uvt->push(tmp45);
									}
								}
							}
						}
						HX_STACK_LINE(763)
						::openfl::_internal::renderer::DrawCommandBuffer tmp31 = c->buffer;		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(763)
						int tmp32 = c->oPos;		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(763)
						int tmp33 = (tmp32 + (int)2);		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(763)
						Dynamic tmp34 = tmp31->o->__GetItem(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(763)
						int tmp35 = ((::openfl::_Vector::FloatVector)(tmp34))->get_length();		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(763)
						int tmp36 = v->get_length();		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(763)
						bool tmp37 = (tmp35 != tmp36);		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(763)
						bool skipT = tmp37;		HX_STACK_VAR(skipT,"skipT");
						HX_STACK_LINE(764)
						::openfl::_Vector::FloatVector tmp38 = uvt;		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(764)
						bool tmp39 = skipT;		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(764)
						Dynamic tmp40 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::normalizeUVT(tmp38,tmp39);		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(764)
						Dynamic normalizedUVT = tmp40;		HX_STACK_VAR(normalizedUVT,"normalizedUVT");
						HX_STACK_LINE(765)
						Float maxUVT = normalizedUVT->__Field(HX_HCSTRING("max","\xa4","\x0a","\x53","\x00"), hx::paccDynamic );		HX_STACK_VAR(maxUVT,"maxUVT");
						HX_STACK_LINE(766)
						uvt = normalizedUVT->__Field(HX_HCSTRING("uvt","\xf3","\x2e","\x59","\x00"), hx::paccDynamic );
						HX_STACK_LINE(768)
						bool tmp41 = (maxUVT > (int)1);		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(768)
						if ((tmp41)){
							HX_STACK_LINE(769)
							::openfl::geom::Rectangle tmp42 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::bounds;		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(769)
							Float tmp43 = tmp42->width;		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(769)
							int tmp44 = ::Std_obj::_int(tmp43);		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(769)
							width = tmp44;
							HX_STACK_LINE(770)
							::openfl::geom::Rectangle tmp45 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::bounds;		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(770)
							Float tmp46 = tmp45->height;		HX_STACK_VAR(tmp46,"tmp46");
							HX_STACK_LINE(770)
							int tmp47 = ::Std_obj::_int(tmp46);		HX_STACK_VAR(tmp47,"tmp47");
							HX_STACK_LINE(770)
							height = tmp47;
						}
						else{
							HX_STACK_LINE(775)
							::openfl::display::BitmapData tmp42 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::bitmapFill;		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(775)
							width = tmp42->width;
							HX_STACK_LINE(776)
							::openfl::display::BitmapData tmp43 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::bitmapFill;		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(776)
							height = tmp43->height;
						}
					}
					HX_STACK_LINE(782)
					int i = (int)0;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(783)
					int tmp30 = ind->get_length();		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(783)
					int l = tmp30;		HX_STACK_VAR(l,"l");
					HX_STACK_LINE(785)
					int a_;		HX_STACK_VAR(a_,"a_");
					HX_STACK_LINE(785)
					int b_;		HX_STACK_VAR(b_,"b_");
					HX_STACK_LINE(785)
					int c_;		HX_STACK_VAR(c_,"c_");
					HX_STACK_LINE(786)
					int iax;		HX_STACK_VAR(iax,"iax");
					HX_STACK_LINE(786)
					int iay;		HX_STACK_VAR(iay,"iay");
					HX_STACK_LINE(786)
					int ibx;		HX_STACK_VAR(ibx,"ibx");
					HX_STACK_LINE(786)
					int iby;		HX_STACK_VAR(iby,"iby");
					HX_STACK_LINE(786)
					int icx;		HX_STACK_VAR(icx,"icx");
					HX_STACK_LINE(786)
					int icy;		HX_STACK_VAR(icy,"icy");
					HX_STACK_LINE(787)
					Float x1;		HX_STACK_VAR(x1,"x1");
					HX_STACK_LINE(787)
					Float y1;		HX_STACK_VAR(y1,"y1");
					HX_STACK_LINE(787)
					Float x2;		HX_STACK_VAR(x2,"x2");
					HX_STACK_LINE(787)
					Float y2;		HX_STACK_VAR(y2,"y2");
					HX_STACK_LINE(787)
					Float x3;		HX_STACK_VAR(x3,"x3");
					HX_STACK_LINE(787)
					Float y3;		HX_STACK_VAR(y3,"y3");
					HX_STACK_LINE(788)
					Float uvx1;		HX_STACK_VAR(uvx1,"uvx1");
					HX_STACK_LINE(788)
					Float uvy1;		HX_STACK_VAR(uvy1,"uvy1");
					HX_STACK_LINE(788)
					Float uvx2;		HX_STACK_VAR(uvx2,"uvx2");
					HX_STACK_LINE(788)
					Float uvy2;		HX_STACK_VAR(uvy2,"uvy2");
					HX_STACK_LINE(788)
					Float uvx3;		HX_STACK_VAR(uvx3,"uvx3");
					HX_STACK_LINE(788)
					Float uvy3;		HX_STACK_VAR(uvy3,"uvy3");
					HX_STACK_LINE(789)
					Float denom;		HX_STACK_VAR(denom,"denom");
					HX_STACK_LINE(790)
					Float t1;		HX_STACK_VAR(t1,"t1");
					HX_STACK_LINE(790)
					Float t2;		HX_STACK_VAR(t2,"t2");
					HX_STACK_LINE(790)
					Float t3;		HX_STACK_VAR(t3,"t3");
					HX_STACK_LINE(790)
					Float t4;		HX_STACK_VAR(t4,"t4");
					HX_STACK_LINE(791)
					Float dx;		HX_STACK_VAR(dx,"dx");
					HX_STACK_LINE(791)
					Float dy;		HX_STACK_VAR(dy,"dy");
					HX_STACK_LINE(793)
					::lime::graphics::cairo::Cairo tmp31 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(793)
					tmp31->set_antialias((int)1);
					HX_STACK_LINE(795)
					while((true)){
						HX_STACK_LINE(795)
						bool tmp32 = (i < l);		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(795)
						bool tmp33 = !(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(795)
						if ((tmp33)){
							HX_STACK_LINE(795)
							break;
						}
						HX_STACK_LINE(797)
						a_ = i;
						HX_STACK_LINE(798)
						int tmp34 = (i + (int)1);		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(798)
						b_ = tmp34;
						HX_STACK_LINE(799)
						int tmp35 = (i + (int)2);		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(799)
						c_ = tmp35;
						HX_STACK_LINE(801)
						int tmp36 = a_;		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(801)
						int tmp37 = ind->get(tmp36);		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(801)
						int tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(801)
						int tmp39 = (tmp38 * (int)2);		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(801)
						iax = tmp39;
						HX_STACK_LINE(802)
						int tmp40 = a_;		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(802)
						int tmp41 = ind->get(tmp40);		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(802)
						int tmp42 = tmp41;		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(802)
						int tmp43 = (tmp42 * (int)2);		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(802)
						int tmp44 = (tmp43 + (int)1);		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(802)
						iay = tmp44;
						HX_STACK_LINE(803)
						int tmp45 = b_;		HX_STACK_VAR(tmp45,"tmp45");
						HX_STACK_LINE(803)
						int tmp46 = ind->get(tmp45);		HX_STACK_VAR(tmp46,"tmp46");
						HX_STACK_LINE(803)
						int tmp47 = tmp46;		HX_STACK_VAR(tmp47,"tmp47");
						HX_STACK_LINE(803)
						int tmp48 = (tmp47 * (int)2);		HX_STACK_VAR(tmp48,"tmp48");
						HX_STACK_LINE(803)
						ibx = tmp48;
						HX_STACK_LINE(804)
						int tmp49 = b_;		HX_STACK_VAR(tmp49,"tmp49");
						HX_STACK_LINE(804)
						int tmp50 = ind->get(tmp49);		HX_STACK_VAR(tmp50,"tmp50");
						HX_STACK_LINE(804)
						int tmp51 = tmp50;		HX_STACK_VAR(tmp51,"tmp51");
						HX_STACK_LINE(804)
						int tmp52 = (tmp51 * (int)2);		HX_STACK_VAR(tmp52,"tmp52");
						HX_STACK_LINE(804)
						int tmp53 = (tmp52 + (int)1);		HX_STACK_VAR(tmp53,"tmp53");
						HX_STACK_LINE(804)
						iby = tmp53;
						HX_STACK_LINE(805)
						int tmp54 = c_;		HX_STACK_VAR(tmp54,"tmp54");
						HX_STACK_LINE(805)
						int tmp55 = ind->get(tmp54);		HX_STACK_VAR(tmp55,"tmp55");
						HX_STACK_LINE(805)
						int tmp56 = tmp55;		HX_STACK_VAR(tmp56,"tmp56");
						HX_STACK_LINE(805)
						int tmp57 = (tmp56 * (int)2);		HX_STACK_VAR(tmp57,"tmp57");
						HX_STACK_LINE(805)
						icx = tmp57;
						HX_STACK_LINE(806)
						int tmp58 = c_;		HX_STACK_VAR(tmp58,"tmp58");
						HX_STACK_LINE(806)
						int tmp59 = ind->get(tmp58);		HX_STACK_VAR(tmp59,"tmp59");
						HX_STACK_LINE(806)
						int tmp60 = tmp59;		HX_STACK_VAR(tmp60,"tmp60");
						HX_STACK_LINE(806)
						int tmp61 = (tmp60 * (int)2);		HX_STACK_VAR(tmp61,"tmp61");
						HX_STACK_LINE(806)
						int tmp62 = (tmp61 + (int)1);		HX_STACK_VAR(tmp62,"tmp62");
						HX_STACK_LINE(806)
						icy = tmp62;
						HX_STACK_LINE(808)
						int tmp63 = iax;		HX_STACK_VAR(tmp63,"tmp63");
						HX_STACK_LINE(808)
						Float tmp64 = v->get(tmp63);		HX_STACK_VAR(tmp64,"tmp64");
						HX_STACK_LINE(808)
						x1 = tmp64;
						HX_STACK_LINE(809)
						int tmp65 = iay;		HX_STACK_VAR(tmp65,"tmp65");
						HX_STACK_LINE(809)
						Float tmp66 = v->get(tmp65);		HX_STACK_VAR(tmp66,"tmp66");
						HX_STACK_LINE(809)
						y1 = tmp66;
						HX_STACK_LINE(810)
						int tmp67 = ibx;		HX_STACK_VAR(tmp67,"tmp67");
						HX_STACK_LINE(810)
						Float tmp68 = v->get(tmp67);		HX_STACK_VAR(tmp68,"tmp68");
						HX_STACK_LINE(810)
						x2 = tmp68;
						HX_STACK_LINE(811)
						int tmp69 = iby;		HX_STACK_VAR(tmp69,"tmp69");
						HX_STACK_LINE(811)
						Float tmp70 = v->get(tmp69);		HX_STACK_VAR(tmp70,"tmp70");
						HX_STACK_LINE(811)
						y2 = tmp70;
						HX_STACK_LINE(812)
						int tmp71 = icx;		HX_STACK_VAR(tmp71,"tmp71");
						HX_STACK_LINE(812)
						Float tmp72 = v->get(tmp71);		HX_STACK_VAR(tmp72,"tmp72");
						HX_STACK_LINE(812)
						x3 = tmp72;
						HX_STACK_LINE(813)
						int tmp73 = icy;		HX_STACK_VAR(tmp73,"tmp73");
						HX_STACK_LINE(813)
						Float tmp74 = v->get(tmp73);		HX_STACK_VAR(tmp74,"tmp74");
						HX_STACK_LINE(813)
						y3 = tmp74;
						HX_STACK_LINE(815)
						{
							HX_STACK_LINE(815)
							::openfl::_internal::renderer::DrawCommandBuffer tmp75 = c->buffer;		HX_STACK_VAR(tmp75,"tmp75");
							HX_STACK_LINE(815)
							int tmp76 = c->oPos;		HX_STACK_VAR(tmp76,"tmp76");
							HX_STACK_LINE(815)
							int tmp77 = (tmp76 + (int)3);		HX_STACK_VAR(tmp77,"tmp77");
							HX_STACK_LINE(815)
							Dynamic tmp78 = tmp75->o->__GetItem(tmp77);		HX_STACK_VAR(tmp78,"tmp78");
							HX_STACK_LINE(815)
							Dynamic _g2 = tmp78;		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(815)
							Dynamic tmp79 = _g2;		HX_STACK_VAR(tmp79,"tmp79");
							HX_STACK_LINE(815)
							switch( (int)(tmp79)){
								case (int)2: {
									HX_STACK_LINE(819)
									Float tmp80 = (x2 - x1);		HX_STACK_VAR(tmp80,"tmp80");
									HX_STACK_LINE(819)
									Float tmp81 = (y3 - y1);		HX_STACK_VAR(tmp81,"tmp81");
									HX_STACK_LINE(819)
									Float tmp82 = (tmp80 * tmp81);		HX_STACK_VAR(tmp82,"tmp82");
									HX_STACK_LINE(819)
									Float tmp83 = (y2 - y1);		HX_STACK_VAR(tmp83,"tmp83");
									HX_STACK_LINE(819)
									Float tmp84 = (x3 - x1);		HX_STACK_VAR(tmp84,"tmp84");
									HX_STACK_LINE(819)
									Float tmp85 = (tmp83 * tmp84);		HX_STACK_VAR(tmp85,"tmp85");
									HX_STACK_LINE(819)
									Float tmp86 = (tmp82 - tmp85);		HX_STACK_VAR(tmp86,"tmp86");
									HX_STACK_LINE(819)
									bool tmp87 = (tmp86 < (int)0);		HX_STACK_VAR(tmp87,"tmp87");
									HX_STACK_LINE(819)
									bool tmp88 = !(tmp87);		HX_STACK_VAR(tmp88,"tmp88");
									HX_STACK_LINE(819)
									if ((tmp88)){
										HX_STACK_LINE(821)
										hx::AddEq(i,(int)3);
										HX_STACK_LINE(822)
										continue;
									}
								}
								;break;
								case (int)0: {
									HX_STACK_LINE(828)
									Float tmp80 = (x2 - x1);		HX_STACK_VAR(tmp80,"tmp80");
									HX_STACK_LINE(828)
									Float tmp81 = (y3 - y1);		HX_STACK_VAR(tmp81,"tmp81");
									HX_STACK_LINE(828)
									Float tmp82 = (tmp80 * tmp81);		HX_STACK_VAR(tmp82,"tmp82");
									HX_STACK_LINE(828)
									Float tmp83 = (y2 - y1);		HX_STACK_VAR(tmp83,"tmp83");
									HX_STACK_LINE(828)
									Float tmp84 = (x3 - x1);		HX_STACK_VAR(tmp84,"tmp84");
									HX_STACK_LINE(828)
									Float tmp85 = (tmp83 * tmp84);		HX_STACK_VAR(tmp85,"tmp85");
									HX_STACK_LINE(828)
									Float tmp86 = (tmp82 - tmp85);		HX_STACK_VAR(tmp86,"tmp86");
									HX_STACK_LINE(828)
									bool tmp87 = (tmp86 < (int)0);		HX_STACK_VAR(tmp87,"tmp87");
									HX_STACK_LINE(828)
									if ((tmp87)){
										HX_STACK_LINE(830)
										hx::AddEq(i,(int)3);
										HX_STACK_LINE(831)
										continue;
									}
								}
								;break;
								default: {
								}
							}
						}
						HX_STACK_LINE(839)
						bool tmp75 = colorFill;		HX_STACK_VAR(tmp75,"tmp75");
						HX_STACK_LINE(839)
						if ((tmp75)){
							HX_STACK_LINE(841)
							::lime::graphics::cairo::Cairo tmp76 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp76,"tmp76");
							HX_STACK_LINE(841)
							tmp76->newPath();
							HX_STACK_LINE(842)
							::lime::graphics::cairo::Cairo tmp77 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp77,"tmp77");
							HX_STACK_LINE(842)
							Float tmp78 = x1;		HX_STACK_VAR(tmp78,"tmp78");
							HX_STACK_LINE(842)
							Float tmp79 = y1;		HX_STACK_VAR(tmp79,"tmp79");
							HX_STACK_LINE(842)
							tmp77->moveTo(tmp78,tmp79);
							HX_STACK_LINE(843)
							::lime::graphics::cairo::Cairo tmp80 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp80,"tmp80");
							HX_STACK_LINE(843)
							Float tmp81 = x2;		HX_STACK_VAR(tmp81,"tmp81");
							HX_STACK_LINE(843)
							Float tmp82 = y2;		HX_STACK_VAR(tmp82,"tmp82");
							HX_STACK_LINE(843)
							tmp80->lineTo(tmp81,tmp82);
							HX_STACK_LINE(844)
							::lime::graphics::cairo::Cairo tmp83 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp83,"tmp83");
							HX_STACK_LINE(844)
							Float tmp84 = x3;		HX_STACK_VAR(tmp84,"tmp84");
							HX_STACK_LINE(844)
							Float tmp85 = y3;		HX_STACK_VAR(tmp85,"tmp85");
							HX_STACK_LINE(844)
							tmp83->lineTo(tmp84,tmp85);
							HX_STACK_LINE(845)
							::lime::graphics::cairo::Cairo tmp86 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp86,"tmp86");
							HX_STACK_LINE(845)
							tmp86->closePath();
							HX_STACK_LINE(846)
							bool tmp87 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::hitTesting;		HX_STACK_VAR(tmp87,"tmp87");
							HX_STACK_LINE(846)
							bool tmp88 = !(tmp87);		HX_STACK_VAR(tmp88,"tmp88");
							HX_STACK_LINE(846)
							if ((tmp88)){
								HX_STACK_LINE(846)
								::lime::graphics::cairo::Cairo tmp89 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp89,"tmp89");
								HX_STACK_LINE(846)
								tmp89->fillPreserve();
							}
							HX_STACK_LINE(847)
							hx::AddEq(i,(int)3);
							HX_STACK_LINE(848)
							continue;
						}
						HX_STACK_LINE(852)
						::lime::graphics::cairo::Cairo tmp76 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp76,"tmp76");
						HX_STACK_LINE(852)
						::openfl::display::Graphics tmp77 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::graphics;		HX_STACK_VAR(tmp77,"tmp77");
						HX_STACK_LINE(852)
						::lime::math::Matrix3 tmp78 = tmp77->__renderTransform->__toMatrix3();		HX_STACK_VAR(tmp78,"tmp78");
						HX_STACK_LINE(852)
						tmp76->set_matrix(tmp78);
						HX_STACK_LINE(856)
						::lime::graphics::cairo::Cairo tmp79 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp79,"tmp79");
						HX_STACK_LINE(856)
						tmp79->newPath();
						HX_STACK_LINE(857)
						::lime::graphics::cairo::Cairo tmp80 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp80,"tmp80");
						HX_STACK_LINE(857)
						Float tmp81 = x1;		HX_STACK_VAR(tmp81,"tmp81");
						HX_STACK_LINE(857)
						Float tmp82 = y1;		HX_STACK_VAR(tmp82,"tmp82");
						HX_STACK_LINE(857)
						tmp80->moveTo(tmp81,tmp82);
						HX_STACK_LINE(858)
						::lime::graphics::cairo::Cairo tmp83 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp83,"tmp83");
						HX_STACK_LINE(858)
						Float tmp84 = x2;		HX_STACK_VAR(tmp84,"tmp84");
						HX_STACK_LINE(858)
						Float tmp85 = y2;		HX_STACK_VAR(tmp85,"tmp85");
						HX_STACK_LINE(858)
						tmp83->lineTo(tmp84,tmp85);
						HX_STACK_LINE(859)
						::lime::graphics::cairo::Cairo tmp86 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp86,"tmp86");
						HX_STACK_LINE(859)
						Float tmp87 = x3;		HX_STACK_VAR(tmp87,"tmp87");
						HX_STACK_LINE(859)
						Float tmp88 = y3;		HX_STACK_VAR(tmp88,"tmp88");
						HX_STACK_LINE(859)
						tmp86->lineTo(tmp87,tmp88);
						HX_STACK_LINE(860)
						::lime::graphics::cairo::Cairo tmp89 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp89,"tmp89");
						HX_STACK_LINE(860)
						tmp89->closePath();
						HX_STACK_LINE(863)
						int tmp90 = iax;		HX_STACK_VAR(tmp90,"tmp90");
						HX_STACK_LINE(863)
						Float tmp91 = uvt->get(tmp90);		HX_STACK_VAR(tmp91,"tmp91");
						HX_STACK_LINE(863)
						Float tmp92 = tmp91;		HX_STACK_VAR(tmp92,"tmp92");
						HX_STACK_LINE(863)
						int tmp93 = width;		HX_STACK_VAR(tmp93,"tmp93");
						HX_STACK_LINE(863)
						Float tmp94 = (tmp92 * tmp93);		HX_STACK_VAR(tmp94,"tmp94");
						HX_STACK_LINE(863)
						uvx1 = tmp94;
						HX_STACK_LINE(864)
						int tmp95 = ibx;		HX_STACK_VAR(tmp95,"tmp95");
						HX_STACK_LINE(864)
						Float tmp96 = uvt->get(tmp95);		HX_STACK_VAR(tmp96,"tmp96");
						HX_STACK_LINE(864)
						Float tmp97 = tmp96;		HX_STACK_VAR(tmp97,"tmp97");
						HX_STACK_LINE(864)
						int tmp98 = width;		HX_STACK_VAR(tmp98,"tmp98");
						HX_STACK_LINE(864)
						Float tmp99 = (tmp97 * tmp98);		HX_STACK_VAR(tmp99,"tmp99");
						HX_STACK_LINE(864)
						uvx2 = tmp99;
						HX_STACK_LINE(865)
						int tmp100 = icx;		HX_STACK_VAR(tmp100,"tmp100");
						HX_STACK_LINE(865)
						Float tmp101 = uvt->get(tmp100);		HX_STACK_VAR(tmp101,"tmp101");
						HX_STACK_LINE(865)
						Float tmp102 = tmp101;		HX_STACK_VAR(tmp102,"tmp102");
						HX_STACK_LINE(865)
						int tmp103 = width;		HX_STACK_VAR(tmp103,"tmp103");
						HX_STACK_LINE(865)
						Float tmp104 = (tmp102 * tmp103);		HX_STACK_VAR(tmp104,"tmp104");
						HX_STACK_LINE(865)
						uvx3 = tmp104;
						HX_STACK_LINE(866)
						int tmp105 = iay;		HX_STACK_VAR(tmp105,"tmp105");
						HX_STACK_LINE(866)
						Float tmp106 = uvt->get(tmp105);		HX_STACK_VAR(tmp106,"tmp106");
						HX_STACK_LINE(866)
						Float tmp107 = tmp106;		HX_STACK_VAR(tmp107,"tmp107");
						HX_STACK_LINE(866)
						int tmp108 = height;		HX_STACK_VAR(tmp108,"tmp108");
						HX_STACK_LINE(866)
						Float tmp109 = (tmp107 * tmp108);		HX_STACK_VAR(tmp109,"tmp109");
						HX_STACK_LINE(866)
						uvy1 = tmp109;
						HX_STACK_LINE(867)
						int tmp110 = iby;		HX_STACK_VAR(tmp110,"tmp110");
						HX_STACK_LINE(867)
						Float tmp111 = uvt->get(tmp110);		HX_STACK_VAR(tmp111,"tmp111");
						HX_STACK_LINE(867)
						Float tmp112 = tmp111;		HX_STACK_VAR(tmp112,"tmp112");
						HX_STACK_LINE(867)
						int tmp113 = height;		HX_STACK_VAR(tmp113,"tmp113");
						HX_STACK_LINE(867)
						Float tmp114 = (tmp112 * tmp113);		HX_STACK_VAR(tmp114,"tmp114");
						HX_STACK_LINE(867)
						uvy2 = tmp114;
						HX_STACK_LINE(868)
						int tmp115 = icy;		HX_STACK_VAR(tmp115,"tmp115");
						HX_STACK_LINE(868)
						Float tmp116 = uvt->get(tmp115);		HX_STACK_VAR(tmp116,"tmp116");
						HX_STACK_LINE(868)
						Float tmp117 = tmp116;		HX_STACK_VAR(tmp117,"tmp117");
						HX_STACK_LINE(868)
						int tmp118 = height;		HX_STACK_VAR(tmp118,"tmp118");
						HX_STACK_LINE(868)
						Float tmp119 = (tmp117 * tmp118);		HX_STACK_VAR(tmp119,"tmp119");
						HX_STACK_LINE(868)
						uvy3 = tmp119;
						HX_STACK_LINE(870)
						Float tmp120 = uvx1;		HX_STACK_VAR(tmp120,"tmp120");
						HX_STACK_LINE(870)
						Float tmp121 = (uvy3 - uvy2);		HX_STACK_VAR(tmp121,"tmp121");
						HX_STACK_LINE(870)
						Float tmp122 = (tmp120 * tmp121);		HX_STACK_VAR(tmp122,"tmp122");
						HX_STACK_LINE(870)
						Float tmp123 = (uvx2 * uvy3);		HX_STACK_VAR(tmp123,"tmp123");
						HX_STACK_LINE(870)
						Float tmp124 = (tmp122 - tmp123);		HX_STACK_VAR(tmp124,"tmp124");
						HX_STACK_LINE(870)
						Float tmp125 = (uvx3 * uvy2);		HX_STACK_VAR(tmp125,"tmp125");
						HX_STACK_LINE(870)
						Float tmp126 = (tmp124 + tmp125);		HX_STACK_VAR(tmp126,"tmp126");
						HX_STACK_LINE(870)
						Float tmp127 = (uvx2 - uvx3);		HX_STACK_VAR(tmp127,"tmp127");
						HX_STACK_LINE(870)
						Float tmp128 = uvy1;		HX_STACK_VAR(tmp128,"tmp128");
						HX_STACK_LINE(870)
						Float tmp129 = (tmp127 * tmp128);		HX_STACK_VAR(tmp129,"tmp129");
						HX_STACK_LINE(870)
						Float tmp130 = (tmp126 + tmp129);		HX_STACK_VAR(tmp130,"tmp130");
						HX_STACK_LINE(870)
						denom = tmp130;
						HX_STACK_LINE(872)
						bool tmp131 = (denom == (int)0);		HX_STACK_VAR(tmp131,"tmp131");
						HX_STACK_LINE(872)
						if ((tmp131)){
							HX_STACK_LINE(874)
							hx::AddEq(i,(int)3);
							HX_STACK_LINE(875)
							continue;
						}
						HX_STACK_LINE(879)
						Float tmp132 = uvy1;		HX_STACK_VAR(tmp132,"tmp132");
						HX_STACK_LINE(879)
						Float tmp133 = (x3 - x2);		HX_STACK_VAR(tmp133,"tmp133");
						HX_STACK_LINE(879)
						Float tmp134 = (tmp132 * tmp133);		HX_STACK_VAR(tmp134,"tmp134");
						HX_STACK_LINE(879)
						Float tmp135 = (uvy2 * x3);		HX_STACK_VAR(tmp135,"tmp135");
						HX_STACK_LINE(879)
						Float tmp136 = (tmp134 - tmp135);		HX_STACK_VAR(tmp136,"tmp136");
						HX_STACK_LINE(879)
						Float tmp137 = (uvy3 * x2);		HX_STACK_VAR(tmp137,"tmp137");
						HX_STACK_LINE(879)
						Float tmp138 = (tmp136 + tmp137);		HX_STACK_VAR(tmp138,"tmp138");
						HX_STACK_LINE(879)
						Float tmp139 = (uvy2 - uvy3);		HX_STACK_VAR(tmp139,"tmp139");
						HX_STACK_LINE(879)
						Float tmp140 = x1;		HX_STACK_VAR(tmp140,"tmp140");
						HX_STACK_LINE(879)
						Float tmp141 = (tmp139 * tmp140);		HX_STACK_VAR(tmp141,"tmp141");
						HX_STACK_LINE(879)
						Float tmp142 = (tmp138 + tmp141);		HX_STACK_VAR(tmp142,"tmp142");
						HX_STACK_LINE(879)
						Float tmp143 = -(tmp142);		HX_STACK_VAR(tmp143,"tmp143");
						HX_STACK_LINE(879)
						Float tmp144 = denom;		HX_STACK_VAR(tmp144,"tmp144");
						HX_STACK_LINE(879)
						Float tmp145 = (Float(tmp143) / Float(tmp144));		HX_STACK_VAR(tmp145,"tmp145");
						HX_STACK_LINE(879)
						t1 = tmp145;
						HX_STACK_LINE(880)
						Float tmp146 = (uvy2 * y3);		HX_STACK_VAR(tmp146,"tmp146");
						HX_STACK_LINE(880)
						Float tmp147 = uvy1;		HX_STACK_VAR(tmp147,"tmp147");
						HX_STACK_LINE(880)
						Float tmp148 = (y2 - y3);		HX_STACK_VAR(tmp148,"tmp148");
						HX_STACK_LINE(880)
						Float tmp149 = (tmp147 * tmp148);		HX_STACK_VAR(tmp149,"tmp149");
						HX_STACK_LINE(880)
						Float tmp150 = (tmp146 + tmp149);		HX_STACK_VAR(tmp150,"tmp150");
						HX_STACK_LINE(880)
						Float tmp151 = (uvy3 * y2);		HX_STACK_VAR(tmp151,"tmp151");
						HX_STACK_LINE(880)
						Float tmp152 = (tmp150 - tmp151);		HX_STACK_VAR(tmp152,"tmp152");
						HX_STACK_LINE(880)
						Float tmp153 = (uvy3 - uvy2);		HX_STACK_VAR(tmp153,"tmp153");
						HX_STACK_LINE(880)
						Float tmp154 = y1;		HX_STACK_VAR(tmp154,"tmp154");
						HX_STACK_LINE(880)
						Float tmp155 = (tmp153 * tmp154);		HX_STACK_VAR(tmp155,"tmp155");
						HX_STACK_LINE(880)
						Float tmp156 = (tmp152 + tmp155);		HX_STACK_VAR(tmp156,"tmp156");
						HX_STACK_LINE(880)
						Float tmp157 = denom;		HX_STACK_VAR(tmp157,"tmp157");
						HX_STACK_LINE(880)
						Float tmp158 = (Float(tmp156) / Float(tmp157));		HX_STACK_VAR(tmp158,"tmp158");
						HX_STACK_LINE(880)
						t2 = tmp158;
						HX_STACK_LINE(881)
						Float tmp159 = uvx1;		HX_STACK_VAR(tmp159,"tmp159");
						HX_STACK_LINE(881)
						Float tmp160 = (x3 - x2);		HX_STACK_VAR(tmp160,"tmp160");
						HX_STACK_LINE(881)
						Float tmp161 = (tmp159 * tmp160);		HX_STACK_VAR(tmp161,"tmp161");
						HX_STACK_LINE(881)
						Float tmp162 = (uvx2 * x3);		HX_STACK_VAR(tmp162,"tmp162");
						HX_STACK_LINE(881)
						Float tmp163 = (tmp161 - tmp162);		HX_STACK_VAR(tmp163,"tmp163");
						HX_STACK_LINE(881)
						Float tmp164 = (uvx3 * x2);		HX_STACK_VAR(tmp164,"tmp164");
						HX_STACK_LINE(881)
						Float tmp165 = (tmp163 + tmp164);		HX_STACK_VAR(tmp165,"tmp165");
						HX_STACK_LINE(881)
						Float tmp166 = (uvx2 - uvx3);		HX_STACK_VAR(tmp166,"tmp166");
						HX_STACK_LINE(881)
						Float tmp167 = x1;		HX_STACK_VAR(tmp167,"tmp167");
						HX_STACK_LINE(881)
						Float tmp168 = (tmp166 * tmp167);		HX_STACK_VAR(tmp168,"tmp168");
						HX_STACK_LINE(881)
						Float tmp169 = (tmp165 + tmp168);		HX_STACK_VAR(tmp169,"tmp169");
						HX_STACK_LINE(881)
						Float tmp170 = denom;		HX_STACK_VAR(tmp170,"tmp170");
						HX_STACK_LINE(881)
						Float tmp171 = (Float(tmp169) / Float(tmp170));		HX_STACK_VAR(tmp171,"tmp171");
						HX_STACK_LINE(881)
						t3 = tmp171;
						HX_STACK_LINE(882)
						Float tmp172 = (uvx2 * y3);		HX_STACK_VAR(tmp172,"tmp172");
						HX_STACK_LINE(882)
						Float tmp173 = uvx1;		HX_STACK_VAR(tmp173,"tmp173");
						HX_STACK_LINE(882)
						Float tmp174 = (y2 - y3);		HX_STACK_VAR(tmp174,"tmp174");
						HX_STACK_LINE(882)
						Float tmp175 = (tmp173 * tmp174);		HX_STACK_VAR(tmp175,"tmp175");
						HX_STACK_LINE(882)
						Float tmp176 = (tmp172 + tmp175);		HX_STACK_VAR(tmp176,"tmp176");
						HX_STACK_LINE(882)
						Float tmp177 = (uvx3 * y2);		HX_STACK_VAR(tmp177,"tmp177");
						HX_STACK_LINE(882)
						Float tmp178 = (tmp176 - tmp177);		HX_STACK_VAR(tmp178,"tmp178");
						HX_STACK_LINE(882)
						Float tmp179 = (uvx3 - uvx2);		HX_STACK_VAR(tmp179,"tmp179");
						HX_STACK_LINE(882)
						Float tmp180 = y1;		HX_STACK_VAR(tmp180,"tmp180");
						HX_STACK_LINE(882)
						Float tmp181 = (tmp179 * tmp180);		HX_STACK_VAR(tmp181,"tmp181");
						HX_STACK_LINE(882)
						Float tmp182 = (tmp178 + tmp181);		HX_STACK_VAR(tmp182,"tmp182");
						HX_STACK_LINE(882)
						Float tmp183 = -(tmp182);		HX_STACK_VAR(tmp183,"tmp183");
						HX_STACK_LINE(882)
						Float tmp184 = denom;		HX_STACK_VAR(tmp184,"tmp184");
						HX_STACK_LINE(882)
						Float tmp185 = (Float(tmp183) / Float(tmp184));		HX_STACK_VAR(tmp185,"tmp185");
						HX_STACK_LINE(882)
						t4 = tmp185;
						HX_STACK_LINE(883)
						Float tmp186 = uvx1;		HX_STACK_VAR(tmp186,"tmp186");
						HX_STACK_LINE(883)
						Float tmp187 = (uvy3 * x2);		HX_STACK_VAR(tmp187,"tmp187");
						HX_STACK_LINE(883)
						Float tmp188 = (uvy2 * x3);		HX_STACK_VAR(tmp188,"tmp188");
						HX_STACK_LINE(883)
						Float tmp189 = (tmp187 - tmp188);		HX_STACK_VAR(tmp189,"tmp189");
						HX_STACK_LINE(883)
						Float tmp190 = (tmp186 * tmp189);		HX_STACK_VAR(tmp190,"tmp190");
						HX_STACK_LINE(883)
						Float tmp191 = uvy1;		HX_STACK_VAR(tmp191,"tmp191");
						HX_STACK_LINE(883)
						Float tmp192 = (uvx2 * x3);		HX_STACK_VAR(tmp192,"tmp192");
						HX_STACK_LINE(883)
						Float tmp193 = (uvx3 * x2);		HX_STACK_VAR(tmp193,"tmp193");
						HX_STACK_LINE(883)
						Float tmp194 = (tmp192 - tmp193);		HX_STACK_VAR(tmp194,"tmp194");
						HX_STACK_LINE(883)
						Float tmp195 = (tmp191 * tmp194);		HX_STACK_VAR(tmp195,"tmp195");
						HX_STACK_LINE(883)
						Float tmp196 = (tmp190 + tmp195);		HX_STACK_VAR(tmp196,"tmp196");
						HX_STACK_LINE(883)
						Float tmp197 = (uvx3 * uvy2);		HX_STACK_VAR(tmp197,"tmp197");
						HX_STACK_LINE(883)
						Float tmp198 = (uvx2 * uvy3);		HX_STACK_VAR(tmp198,"tmp198");
						HX_STACK_LINE(883)
						Float tmp199 = (tmp197 - tmp198);		HX_STACK_VAR(tmp199,"tmp199");
						HX_STACK_LINE(883)
						Float tmp200 = x1;		HX_STACK_VAR(tmp200,"tmp200");
						HX_STACK_LINE(883)
						Float tmp201 = (tmp199 * tmp200);		HX_STACK_VAR(tmp201,"tmp201");
						HX_STACK_LINE(883)
						Float tmp202 = (tmp196 + tmp201);		HX_STACK_VAR(tmp202,"tmp202");
						HX_STACK_LINE(883)
						Float tmp203 = denom;		HX_STACK_VAR(tmp203,"tmp203");
						HX_STACK_LINE(883)
						Float tmp204 = (Float(tmp202) / Float(tmp203));		HX_STACK_VAR(tmp204,"tmp204");
						HX_STACK_LINE(883)
						dx = tmp204;
						HX_STACK_LINE(884)
						Float tmp205 = uvx1;		HX_STACK_VAR(tmp205,"tmp205");
						HX_STACK_LINE(884)
						Float tmp206 = (uvy3 * y2);		HX_STACK_VAR(tmp206,"tmp206");
						HX_STACK_LINE(884)
						Float tmp207 = (uvy2 * y3);		HX_STACK_VAR(tmp207,"tmp207");
						HX_STACK_LINE(884)
						Float tmp208 = (tmp206 - tmp207);		HX_STACK_VAR(tmp208,"tmp208");
						HX_STACK_LINE(884)
						Float tmp209 = (tmp205 * tmp208);		HX_STACK_VAR(tmp209,"tmp209");
						HX_STACK_LINE(884)
						Float tmp210 = uvy1;		HX_STACK_VAR(tmp210,"tmp210");
						HX_STACK_LINE(884)
						Float tmp211 = (uvx2 * y3);		HX_STACK_VAR(tmp211,"tmp211");
						HX_STACK_LINE(884)
						Float tmp212 = (uvx3 * y2);		HX_STACK_VAR(tmp212,"tmp212");
						HX_STACK_LINE(884)
						Float tmp213 = (tmp211 - tmp212);		HX_STACK_VAR(tmp213,"tmp213");
						HX_STACK_LINE(884)
						Float tmp214 = (tmp210 * tmp213);		HX_STACK_VAR(tmp214,"tmp214");
						HX_STACK_LINE(884)
						Float tmp215 = (tmp209 + tmp214);		HX_STACK_VAR(tmp215,"tmp215");
						HX_STACK_LINE(884)
						Float tmp216 = (uvx3 * uvy2);		HX_STACK_VAR(tmp216,"tmp216");
						HX_STACK_LINE(884)
						Float tmp217 = (uvx2 * uvy3);		HX_STACK_VAR(tmp217,"tmp217");
						HX_STACK_LINE(884)
						Float tmp218 = (tmp216 - tmp217);		HX_STACK_VAR(tmp218,"tmp218");
						HX_STACK_LINE(884)
						Float tmp219 = y1;		HX_STACK_VAR(tmp219,"tmp219");
						HX_STACK_LINE(884)
						Float tmp220 = (tmp218 * tmp219);		HX_STACK_VAR(tmp220,"tmp220");
						HX_STACK_LINE(884)
						Float tmp221 = (tmp215 + tmp220);		HX_STACK_VAR(tmp221,"tmp221");
						HX_STACK_LINE(884)
						Float tmp222 = denom;		HX_STACK_VAR(tmp222,"tmp222");
						HX_STACK_LINE(884)
						Float tmp223 = (Float(tmp221) / Float(tmp222));		HX_STACK_VAR(tmp223,"tmp223");
						HX_STACK_LINE(884)
						dy = tmp223;
						HX_STACK_LINE(886)
						::lime::math::Matrix3 tmp224 = ::lime::math::Matrix3_obj::__new(t1,t2,t3,t4,dx,dy);		HX_STACK_VAR(tmp224,"tmp224");
						HX_STACK_LINE(886)
						::lime::math::Matrix3 matrix = tmp224;		HX_STACK_VAR(matrix,"matrix");
						HX_STACK_LINE(887)
						::lime::graphics::cairo::Cairo tmp225 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp225,"tmp225");
						HX_STACK_LINE(887)
						::lime::math::Matrix3 tmp226 = matrix;		HX_STACK_VAR(tmp226,"tmp226");
						HX_STACK_LINE(887)
						tmp225->set_matrix(tmp226);
						HX_STACK_LINE(888)
						::lime::graphics::cairo::Cairo tmp227 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp227,"tmp227");
						HX_STACK_LINE(888)
						Dynamic tmp228 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillPattern;		HX_STACK_VAR(tmp228,"tmp228");
						HX_STACK_LINE(888)
						tmp227->set_source(tmp228);
						HX_STACK_LINE(889)
						bool tmp229 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::hitTesting;		HX_STACK_VAR(tmp229,"tmp229");
						HX_STACK_LINE(889)
						bool tmp230 = !(tmp229);		HX_STACK_VAR(tmp230,"tmp230");
						HX_STACK_LINE(889)
						if ((tmp230)){
							HX_STACK_LINE(889)
							::lime::graphics::cairo::Cairo tmp231 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp231,"tmp231");
							HX_STACK_LINE(889)
							tmp231->fill();
						}
						HX_STACK_LINE(891)
						hx::AddEq(i,(int)3);
					}
				}
				else  {
					HX_STACK_LINE(897)
					{
						HX_STACK_LINE(897)
						::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(897)
						switch( (int)(_g2->__Index())){
							case (int)0: {
								HX_STACK_LINE(897)
								hx::AddEq(data->oPos,(int)2);
								HX_STACK_LINE(897)
								hx::AddEq(data->bPos,(int)2);
							}
							;break;
							case (int)1: {
								HX_STACK_LINE(897)
								hx::AddEq(data->iPos,(int)1);
								HX_STACK_LINE(897)
								hx::AddEq(data->fPos,(int)1);
							}
							;break;
							case (int)2: {
								HX_STACK_LINE(897)
								hx::AddEq(data->oPos,(int)4);
								HX_STACK_LINE(897)
								hx::AddEq(data->iiPos,(int)2);
								HX_STACK_LINE(897)
								hx::AddEq(data->ffPos,(int)1);
								HX_STACK_LINE(897)
								hx::AddEq(data->fPos,(int)1);
							}
							;break;
							case (int)3: {
								HX_STACK_LINE(897)
								hx::AddEq(data->fPos,(int)6);
							}
							;break;
							case (int)4: {
								HX_STACK_LINE(897)
								hx::AddEq(data->fPos,(int)4);
							}
							;break;
							case (int)5: {
								HX_STACK_LINE(897)
								hx::AddEq(data->fPos,(int)3);
							}
							;break;
							case (int)6: {
								HX_STACK_LINE(897)
								hx::AddEq(data->fPos,(int)4);
							}
							;break;
							case (int)7: {
								HX_STACK_LINE(897)
								hx::AddEq(data->fPos,(int)4);
							}
							;break;
							case (int)8: {
								HX_STACK_LINE(897)
								hx::AddEq(data->fPos,(int)5);
								HX_STACK_LINE(897)
								hx::AddEq(data->oPos,(int)1);
							}
							;break;
							case (int)10: {
								HX_STACK_LINE(897)
								hx::AddEq(data->oPos,(int)4);
							}
							;break;
							case (int)11: {
								HX_STACK_LINE(897)
								Dynamic();
							}
							;break;
							case (int)12: {
								HX_STACK_LINE(897)
								hx::AddEq(data->oPos,(int)2);
								HX_STACK_LINE(897)
								hx::AddEq(data->bPos,(int)2);
							}
							;break;
							case (int)13: {
								HX_STACK_LINE(897)
								hx::AddEq(data->oPos,(int)4);
								HX_STACK_LINE(897)
								hx::AddEq(data->iiPos,(int)2);
								HX_STACK_LINE(897)
								hx::AddEq(data->ffPos,(int)1);
								HX_STACK_LINE(897)
								hx::AddEq(data->fPos,(int)1);
							}
							;break;
							case (int)14: {
								HX_STACK_LINE(897)
								hx::AddEq(data->oPos,(int)4);
								HX_STACK_LINE(897)
								hx::AddEq(data->iPos,(int)1);
								HX_STACK_LINE(897)
								hx::AddEq(data->fPos,(int)2);
								HX_STACK_LINE(897)
								hx::AddEq(data->bPos,(int)1);
							}
							;break;
							case (int)15: {
								HX_STACK_LINE(897)
								hx::AddEq(data->fPos,(int)2);
							}
							;break;
							case (int)16: {
								HX_STACK_LINE(897)
								hx::AddEq(data->fPos,(int)2);
							}
							;break;
							case (int)17: {
								HX_STACK_LINE(897)
								hx::AddEq(data->oPos,(int)1);
							}
							;break;
							default: {
								HX_STACK_LINE(897)
								Dynamic();
							}
						}
					}
					HX_STACK_LINE(897)
					data->prev = type;
				}
;
;
			}
		}
		HX_STACK_LINE(903)
		data->destroy();
		HX_STACK_LINE(905)
		bool tmp8 = hasPath;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(905)
		if ((tmp8)){
			HX_STACK_LINE(907)
			bool tmp9 = stroke;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(907)
			bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(907)
			if ((tmp9)){
				HX_STACK_LINE(907)
				tmp10 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::hasStroke;
			}
			else{
				HX_STACK_LINE(907)
				tmp10 = false;
			}
			HX_STACK_LINE(907)
			if ((tmp10)){
				HX_STACK_LINE(909)
				bool tmp11 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::hasFill;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(909)
				bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(909)
				if ((tmp11)){
					HX_STACK_LINE(909)
					tmp12 = closeGap;
				}
				else{
					HX_STACK_LINE(909)
					tmp12 = false;
				}
				HX_STACK_LINE(909)
				if ((tmp12)){
					HX_STACK_LINE(911)
					::lime::graphics::cairo::Cairo tmp13 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(911)
					Float tmp14 = (startX - offsetX);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(911)
					Float tmp15 = (startY - offsetY);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(911)
					tmp13->lineTo(tmp14,tmp15);
				}
				else{
					HX_STACK_LINE(913)
					bool tmp13 = closeGap;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(913)
					bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(913)
					bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(913)
					if ((tmp14)){
						HX_STACK_LINE(913)
						tmp15 = (positionX == startX);
					}
					else{
						HX_STACK_LINE(913)
						tmp15 = false;
					}
					HX_STACK_LINE(913)
					bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(913)
					if ((tmp15)){
						HX_STACK_LINE(913)
						tmp16 = (positionY == startY);
					}
					else{
						HX_STACK_LINE(913)
						tmp16 = false;
					}
					HX_STACK_LINE(913)
					if ((tmp16)){
						HX_STACK_LINE(915)
						::openfl::_internal::renderer::cairo::CairoGraphics_obj::closePath(true);
					}
				}
				HX_STACK_LINE(919)
				::lime::graphics::cairo::Cairo tmp13 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(919)
				Dynamic tmp14 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokePattern;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(919)
				tmp13->set_source(tmp14);
				HX_STACK_LINE(920)
				bool tmp15 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::hitTesting;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(920)
				bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(920)
				if ((tmp16)){
					HX_STACK_LINE(920)
					::lime::graphics::cairo::Cairo tmp17 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(920)
					tmp17->strokePreserve();
				}
			}
			HX_STACK_LINE(924)
			bool tmp11 = stroke;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(924)
			bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(924)
			bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(924)
			bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(924)
			if ((tmp13)){
				HX_STACK_LINE(924)
				tmp14 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::hasFill;
			}
			else{
				HX_STACK_LINE(924)
				tmp14 = false;
			}
			HX_STACK_LINE(924)
			if ((tmp14)){
				HX_STACK_LINE(926)
				::lime::graphics::cairo::Cairo tmp15 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(926)
				::openfl::geom::Rectangle tmp16 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::bounds;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(926)
				Float tmp17 = tmp16->x;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(926)
				Float tmp18 = -(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(926)
				::openfl::geom::Rectangle tmp19 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::bounds;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(926)
				Float tmp20 = tmp19->y;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(926)
				Float tmp21 = -(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(926)
				tmp15->translate(tmp18,tmp21);
				HX_STACK_LINE(928)
				::openfl::geom::Matrix tmp22 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillPatternMatrix;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(928)
				bool tmp23 = (tmp22 != null());		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(928)
				if ((tmp23)){
					HX_STACK_LINE(930)
					::openfl::geom::Matrix tmp24 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillPatternMatrix;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(930)
					::openfl::geom::Matrix tmp25 = tmp24->clone();		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(930)
					::openfl::geom::Matrix matrix = tmp25;		HX_STACK_VAR(matrix,"matrix");
					HX_STACK_LINE(931)
					matrix->invert();
					HX_STACK_LINE(933)
					::openfl::geom::Matrix tmp26 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::pendingMatrix;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(933)
					bool tmp27 = (tmp26 != null());		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(933)
					if ((tmp27)){
						HX_STACK_LINE(935)
						::openfl::geom::Matrix tmp28 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::pendingMatrix;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(935)
						matrix->concat(tmp28);
					}
					HX_STACK_LINE(939)
					Dynamic tmp28 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillPattern;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(939)
					::lime::math::Matrix3 tmp29 = matrix->__toMatrix3();		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(939)
					::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::set_matrix(tmp28,tmp29);
				}
				HX_STACK_LINE(943)
				::lime::graphics::cairo::Cairo tmp24 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(943)
				Dynamic tmp25 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillPattern;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(943)
				tmp24->set_source(tmp25);
				HX_STACK_LINE(945)
				::openfl::geom::Matrix tmp26 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::pendingMatrix;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(945)
				bool tmp27 = (tmp26 != null());		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(945)
				if ((tmp27)){
					HX_STACK_LINE(947)
					::lime::graphics::cairo::Cairo tmp28 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(947)
					::openfl::geom::Matrix tmp29 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::pendingMatrix;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(947)
					::lime::math::Matrix3 tmp30 = tmp29->__toMatrix3();		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(947)
					tmp28->transform(tmp30);
					HX_STACK_LINE(948)
					bool tmp31 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::hitTesting;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(948)
					bool tmp32 = !(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(948)
					if ((tmp32)){
						HX_STACK_LINE(948)
						::lime::graphics::cairo::Cairo tmp33 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(948)
						tmp33->fillPreserve();
					}
					HX_STACK_LINE(949)
					::lime::graphics::cairo::Cairo tmp33 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(949)
					::openfl::geom::Matrix tmp34 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::inversePendingMatrix;		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(949)
					::lime::math::Matrix3 tmp35 = tmp34->__toMatrix3();		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(949)
					tmp33->transform(tmp35);
				}
				else{
					HX_STACK_LINE(953)
					bool tmp28 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::hitTesting;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(953)
					bool tmp29 = !(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(953)
					if ((tmp29)){
						HX_STACK_LINE(953)
						::lime::graphics::cairo::Cairo tmp30 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(953)
						tmp30->fillPreserve();
					}
				}
				HX_STACK_LINE(957)
				::lime::graphics::cairo::Cairo tmp28 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(957)
				::openfl::geom::Rectangle tmp29 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::bounds;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(957)
				Float tmp30 = tmp29->x;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(957)
				::openfl::geom::Rectangle tmp31 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::bounds;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(957)
				Float tmp32 = tmp31->y;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(957)
				tmp28->translate(tmp30,tmp32);
				HX_STACK_LINE(958)
				::lime::graphics::cairo::Cairo tmp33 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(958)
				tmp33->closePath();
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CairoGraphics_obj,playCommands,(void))

Void CairoGraphics_obj::quadraticCurveTo( Float cx,Float cy,Float x,Float y){
{
		HX_STACK_FRAME("openfl._internal.renderer.cairo.CairoGraphics","quadraticCurveTo",0x01a3b18e,"openfl._internal.renderer.cairo.CairoGraphics.quadraticCurveTo","openfl/_internal/renderer/cairo/CairoGraphics.hx",966,0x744ae94c)
		HX_STACK_ARG(cx,"cx")
		HX_STACK_ARG(cy,"cy")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(968)
		::lime::math::Vector2 current = null();		HX_STACK_VAR(current,"current");
		HX_STACK_LINE(970)
		::lime::graphics::cairo::Cairo tmp = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(970)
		bool tmp1 = tmp->get_hasCurrentPoint();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(970)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(970)
		if ((tmp2)){
			HX_STACK_LINE(972)
			::lime::graphics::cairo::Cairo tmp3 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(972)
			Float tmp4 = cx;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(972)
			Float tmp5 = cy;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(972)
			tmp3->moveTo(tmp4,tmp5);
			HX_STACK_LINE(973)
			::lime::math::Vector2 tmp6 = ::lime::math::Vector2_obj::__new(cx,cy);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(973)
			current = tmp6;
		}
		else{
			HX_STACK_LINE(977)
			::lime::graphics::cairo::Cairo tmp3 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(977)
			::lime::math::Vector2 tmp4 = tmp3->get_currentPoint();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(977)
			current = tmp4;
		}
		HX_STACK_LINE(981)
		Float tmp3 = current->x;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(981)
		Float tmp4 = ((Float)0.66666666666666663);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(981)
		Float tmp5 = (cx - current->x);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(981)
		Float tmp6 = (tmp4 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(981)
		Float tmp7 = (tmp3 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(981)
		Float cx1 = tmp7;		HX_STACK_VAR(cx1,"cx1");
		HX_STACK_LINE(982)
		Float tmp8 = current->y;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(982)
		Float tmp9 = ((Float)0.66666666666666663);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(982)
		Float tmp10 = (cy - current->y);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(982)
		Float tmp11 = (tmp9 * tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(982)
		Float tmp12 = (tmp8 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(982)
		Float cy1 = tmp12;		HX_STACK_VAR(cy1,"cy1");
		HX_STACK_LINE(983)
		Float tmp13 = x;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(983)
		Float tmp14 = ((Float)0.66666666666666663);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(983)
		Float tmp15 = (cx - x);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(983)
		Float tmp16 = (tmp14 * tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(983)
		Float tmp17 = (tmp13 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(983)
		Float cx2 = tmp17;		HX_STACK_VAR(cx2,"cx2");
		HX_STACK_LINE(984)
		Float tmp18 = y;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(984)
		Float tmp19 = ((Float)0.66666666666666663);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(984)
		Float tmp20 = (cy - y);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(984)
		Float tmp21 = (tmp19 * tmp20);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(984)
		Float tmp22 = (tmp18 + tmp21);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(984)
		Float cy2 = tmp22;		HX_STACK_VAR(cy2,"cy2");
		HX_STACK_LINE(986)
		::lime::graphics::cairo::Cairo tmp23 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(986)
		Float tmp24 = cx1;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(986)
		Float tmp25 = cy1;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(986)
		Float tmp26 = cx2;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(986)
		Float tmp27 = cy2;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(986)
		Float tmp28 = x;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(986)
		Float tmp29 = y;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(986)
		tmp23->curveTo(tmp24,tmp25,tmp26,tmp27,tmp28,tmp29);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(CairoGraphics_obj,quadraticCurveTo,(void))

Void CairoGraphics_obj::render( ::openfl::display::Graphics graphics,::openfl::_internal::renderer::RenderSession renderSession,::openfl::geom::Matrix parentTransform){
{
		HX_STACK_FRAME("openfl._internal.renderer.cairo.CairoGraphics","render",0x3c3e61d2,"openfl._internal.renderer.cairo.CairoGraphics.render","openfl/_internal/renderer/cairo/CairoGraphics.hx",991,0x744ae94c)
		HX_STACK_ARG(graphics,"graphics")
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_ARG(parentTransform,"parentTransform")
		HX_STACK_LINE(995)
		::openfl::_internal::renderer::cairo::CairoGraphics_obj::graphics = graphics;
		HX_STACK_LINE(996)
		graphics->__update();
		HX_STACK_LINE(998)
		bool tmp = graphics->__dirty;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(998)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(998)
		if ((tmp1)){
			HX_STACK_LINE(998)
			return null();
		}
		HX_STACK_LINE(1000)
		::openfl::_internal::renderer::cairo::CairoGraphics_obj::bounds = graphics->__bounds;
		HX_STACK_LINE(1002)
		int width = graphics->__width;		HX_STACK_VAR(width,"width");
		HX_STACK_LINE(1003)
		int height = graphics->__height;		HX_STACK_VAR(height,"height");
		HX_STACK_LINE(1005)
		bool tmp2 = graphics->__visible;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1005)
		bool tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1005)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1005)
		bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1005)
		bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1005)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1005)
		if ((tmp6)){
			HX_STACK_LINE(1005)
			int tmp8 = graphics->__commands->get_length();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1005)
			int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1005)
			int tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1005)
			tmp7 = (tmp10 == (int)0);
		}
		else{
			HX_STACK_LINE(1005)
			tmp7 = true;
		}
		HX_STACK_LINE(1005)
		bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1005)
		bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1005)
		bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1005)
		if ((tmp9)){
			HX_STACK_LINE(1005)
			::openfl::geom::Rectangle tmp11 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::bounds;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(1005)
			::openfl::geom::Rectangle tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1005)
			::openfl::geom::Rectangle tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(1005)
			tmp10 = (tmp13 == null());
		}
		else{
			HX_STACK_LINE(1005)
			tmp10 = true;
		}
		HX_STACK_LINE(1005)
		bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(1005)
		bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(1005)
		bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(1005)
		if ((tmp12)){
			HX_STACK_LINE(1005)
			tmp13 = (width < (int)1);
		}
		else{
			HX_STACK_LINE(1005)
			tmp13 = true;
		}
		HX_STACK_LINE(1005)
		bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(1005)
		bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(1005)
		if ((tmp14)){
			HX_STACK_LINE(1005)
			tmp15 = (height < (int)1);
		}
		else{
			HX_STACK_LINE(1005)
			tmp15 = true;
		}
		HX_STACK_LINE(1005)
		if ((tmp15)){
			HX_STACK_LINE(1007)
			graphics->__cairo = null();
			HX_STACK_LINE(1008)
			graphics->__bitmap = null();
		}
		else{
			HX_STACK_LINE(1012)
			::openfl::_internal::renderer::cairo::CairoGraphics_obj::hitTesting = false;
			HX_STACK_LINE(1014)
			bool tmp16 = (graphics->__cairo != null());		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(1014)
			if ((tmp16)){
				HX_STACK_LINE(1016)
				Dynamic tmp17 = graphics->__cairo->get_target();		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(1016)
				Dynamic surface = tmp17;		HX_STACK_VAR(surface,"surface");
				HX_STACK_LINE(1018)
				int tmp18 = width;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(1018)
				Dynamic tmp19 = surface;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(1018)
				int tmp20 = ::lime::graphics::cairo::_CairoImageSurface::CairoImageSurface_Impl__obj::get_width(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(1018)
				bool tmp21 = (tmp18 != tmp20);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(1018)
				bool tmp22 = !(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(1018)
				bool tmp23;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(1018)
				if ((tmp22)){
					HX_STACK_LINE(1018)
					int tmp24 = height;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(1018)
					Dynamic tmp25 = surface;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(1018)
					Dynamic tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(1018)
					int tmp27 = ::lime::graphics::cairo::_CairoImageSurface::CairoImageSurface_Impl__obj::get_height(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(1018)
					int tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(1018)
					tmp23 = (tmp24 != tmp28);
				}
				else{
					HX_STACK_LINE(1018)
					tmp23 = true;
				}
				HX_STACK_LINE(1018)
				if ((tmp23)){
					HX_STACK_LINE(1020)
					graphics->__cairo = null();
				}
			}
			HX_STACK_LINE(1026)
			bool tmp17 = (graphics->__cairo == null());		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(1026)
			bool tmp18 = !(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(1026)
			bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(1026)
			if ((tmp18)){
				HX_STACK_LINE(1026)
				tmp19 = (graphics->__bitmap == null());
			}
			else{
				HX_STACK_LINE(1026)
				tmp19 = true;
			}
			HX_STACK_LINE(1026)
			if ((tmp19)){
				HX_STACK_LINE(1028)
				::openfl::display::BitmapData tmp20 = ::openfl::display::BitmapData_obj::__new(width,height,true,(int)0);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(1028)
				::openfl::display::BitmapData bitmap = tmp20;		HX_STACK_VAR(bitmap,"bitmap");
				HX_STACK_LINE(1029)
				Dynamic tmp21 = bitmap->getSurface();		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(1029)
				Dynamic surface = tmp21;		HX_STACK_VAR(surface,"surface");
				HX_STACK_LINE(1030)
				::lime::graphics::cairo::Cairo tmp22 = ::lime::graphics::cairo::Cairo_obj::__new(surface);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(1030)
				graphics->__cairo = tmp22;
				HX_STACK_LINE(1031)
				graphics->__bitmap = bitmap;
			}
			HX_STACK_LINE(1035)
			::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo = graphics->__cairo;
			HX_STACK_LINE(1036)
			::lime::graphics::cairo::Cairo tmp20 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(1036)
			::lime::math::Matrix3 tmp21 = graphics->__renderTransform->__toMatrix3();		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(1036)
			tmp20->set_matrix(tmp21);
			HX_STACK_LINE(1038)
			::lime::graphics::cairo::Cairo tmp22 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(1038)
			tmp22->set_operator((int)0);
			HX_STACK_LINE(1039)
			::lime::graphics::cairo::Cairo tmp23 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(1039)
			tmp23->paint();
			HX_STACK_LINE(1040)
			::lime::graphics::cairo::Cairo tmp24 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(1040)
			tmp24->set_operator((int)2);
			HX_STACK_LINE(1042)
			::openfl::_internal::renderer::DrawCommandBuffer tmp25 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillCommands;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(1042)
			tmp25->clear();
			HX_STACK_LINE(1043)
			::openfl::_internal::renderer::DrawCommandBuffer tmp26 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokeCommands;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(1043)
			tmp26->clear();
			HX_STACK_LINE(1045)
			::openfl::_internal::renderer::cairo::CairoGraphics_obj::hasFill = false;
			HX_STACK_LINE(1046)
			::openfl::_internal::renderer::cairo::CairoGraphics_obj::hasStroke = false;
			HX_STACK_LINE(1048)
			::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillPattern = null();
			HX_STACK_LINE(1049)
			::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokePattern = null();
			HX_STACK_LINE(1051)
			::openfl::_internal::renderer::DrawCommandReader tmp27 = ::openfl::_internal::renderer::DrawCommandReader_obj::__new(graphics->__commands);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(1051)
			::openfl::_internal::renderer::DrawCommandReader data = tmp27;		HX_STACK_VAR(data,"data");
			HX_STACK_LINE(1053)
			{
				HX_STACK_LINE(1053)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(1053)
				Array< ::Dynamic > _g1 = graphics->__commands->types;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(1053)
				while((true)){
					HX_STACK_LINE(1053)
					bool tmp28 = (_g < _g1->length);		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(1053)
					bool tmp29 = !(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(1053)
					if ((tmp29)){
						HX_STACK_LINE(1053)
						break;
					}
					HX_STACK_LINE(1053)
					::openfl::_internal::renderer::DrawCommandType tmp30 = _g1->__get(_g).StaticCast< ::openfl::_internal::renderer::DrawCommandType >();		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(1053)
					::openfl::_internal::renderer::DrawCommandType type = tmp30;		HX_STACK_VAR(type,"type");
					HX_STACK_LINE(1053)
					++(_g);
					HX_STACK_LINE(1055)
					switch( (int)(type->__Index())){
						case (int)3: {
							HX_STACK_LINE(1059)
							::openfl::_internal::renderer::DrawCommandReader tmp31;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(1059)
							{
								HX_STACK_LINE(1059)
								{
									HX_STACK_LINE(1059)
									::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
									HX_STACK_LINE(1059)
									switch( (int)(_g2->__Index())){
										case (int)0: {
											HX_STACK_LINE(1059)
											hx::AddEq(data->oPos,(int)2);
											HX_STACK_LINE(1059)
											hx::AddEq(data->bPos,(int)2);
										}
										;break;
										case (int)1: {
											HX_STACK_LINE(1059)
											hx::AddEq(data->iPos,(int)1);
											HX_STACK_LINE(1059)
											hx::AddEq(data->fPos,(int)1);
										}
										;break;
										case (int)2: {
											HX_STACK_LINE(1059)
											hx::AddEq(data->oPos,(int)4);
											HX_STACK_LINE(1059)
											hx::AddEq(data->iiPos,(int)2);
											HX_STACK_LINE(1059)
											hx::AddEq(data->ffPos,(int)1);
											HX_STACK_LINE(1059)
											hx::AddEq(data->fPos,(int)1);
										}
										;break;
										case (int)3: {
											HX_STACK_LINE(1059)
											hx::AddEq(data->fPos,(int)6);
										}
										;break;
										case (int)4: {
											HX_STACK_LINE(1059)
											hx::AddEq(data->fPos,(int)4);
										}
										;break;
										case (int)5: {
											HX_STACK_LINE(1059)
											hx::AddEq(data->fPos,(int)3);
										}
										;break;
										case (int)6: {
											HX_STACK_LINE(1059)
											hx::AddEq(data->fPos,(int)4);
										}
										;break;
										case (int)7: {
											HX_STACK_LINE(1059)
											hx::AddEq(data->fPos,(int)4);
										}
										;break;
										case (int)8: {
											HX_STACK_LINE(1059)
											hx::AddEq(data->fPos,(int)5);
											HX_STACK_LINE(1059)
											hx::AddEq(data->oPos,(int)1);
										}
										;break;
										case (int)10: {
											HX_STACK_LINE(1059)
											hx::AddEq(data->oPos,(int)4);
										}
										;break;
										case (int)11: {
											HX_STACK_LINE(1059)
											Dynamic();
										}
										;break;
										case (int)12: {
											HX_STACK_LINE(1059)
											hx::AddEq(data->oPos,(int)2);
											HX_STACK_LINE(1059)
											hx::AddEq(data->bPos,(int)2);
										}
										;break;
										case (int)13: {
											HX_STACK_LINE(1059)
											hx::AddEq(data->oPos,(int)4);
											HX_STACK_LINE(1059)
											hx::AddEq(data->iiPos,(int)2);
											HX_STACK_LINE(1059)
											hx::AddEq(data->ffPos,(int)1);
											HX_STACK_LINE(1059)
											hx::AddEq(data->fPos,(int)1);
										}
										;break;
										case (int)14: {
											HX_STACK_LINE(1059)
											hx::AddEq(data->oPos,(int)4);
											HX_STACK_LINE(1059)
											hx::AddEq(data->iPos,(int)1);
											HX_STACK_LINE(1059)
											hx::AddEq(data->fPos,(int)2);
											HX_STACK_LINE(1059)
											hx::AddEq(data->bPos,(int)1);
										}
										;break;
										case (int)15: {
											HX_STACK_LINE(1059)
											hx::AddEq(data->fPos,(int)2);
										}
										;break;
										case (int)16: {
											HX_STACK_LINE(1059)
											hx::AddEq(data->fPos,(int)2);
										}
										;break;
										case (int)17: {
											HX_STACK_LINE(1059)
											hx::AddEq(data->oPos,(int)1);
										}
										;break;
										default: {
											HX_STACK_LINE(1059)
											Dynamic();
										}
									}
								}
								HX_STACK_LINE(1059)
								data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::CUBIC_CURVE_TO;
								HX_STACK_LINE(1059)
								tmp31 = data;
							}
							HX_STACK_LINE(1059)
							::openfl::_internal::renderer::DrawCommandReader c = tmp31;		HX_STACK_VAR(c,"c");
							HX_STACK_LINE(1060)
							::openfl::_internal::renderer::DrawCommandBuffer tmp32 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillCommands;		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(1060)
							::openfl::_internal::renderer::DrawCommandBuffer tmp33 = c->buffer;		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(1060)
							int tmp34 = c->fPos;		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(1060)
							int tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(1060)
							Float tmp36 = tmp33->f->__get(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(1060)
							::openfl::_internal::renderer::DrawCommandBuffer tmp37 = c->buffer;		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(1060)
							int tmp38 = c->fPos;		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(1060)
							int tmp39 = (tmp38 + (int)1);		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(1060)
							Float tmp40 = tmp37->f->__get(tmp39);		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(1060)
							::openfl::_internal::renderer::DrawCommandBuffer tmp41 = c->buffer;		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(1060)
							int tmp42 = c->fPos;		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(1060)
							int tmp43 = (tmp42 + (int)2);		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(1060)
							Float tmp44 = tmp41->f->__get(tmp43);		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(1060)
							::openfl::_internal::renderer::DrawCommandBuffer tmp45 = c->buffer;		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(1060)
							int tmp46 = c->fPos;		HX_STACK_VAR(tmp46,"tmp46");
							HX_STACK_LINE(1060)
							int tmp47 = (tmp46 + (int)3);		HX_STACK_VAR(tmp47,"tmp47");
							HX_STACK_LINE(1060)
							Float tmp48 = tmp45->f->__get(tmp47);		HX_STACK_VAR(tmp48,"tmp48");
							HX_STACK_LINE(1060)
							::openfl::_internal::renderer::DrawCommandBuffer tmp49 = c->buffer;		HX_STACK_VAR(tmp49,"tmp49");
							HX_STACK_LINE(1060)
							int tmp50 = c->fPos;		HX_STACK_VAR(tmp50,"tmp50");
							HX_STACK_LINE(1060)
							int tmp51 = (tmp50 + (int)4);		HX_STACK_VAR(tmp51,"tmp51");
							HX_STACK_LINE(1060)
							Float tmp52 = tmp49->f->__get(tmp51);		HX_STACK_VAR(tmp52,"tmp52");
							HX_STACK_LINE(1060)
							::openfl::_internal::renderer::DrawCommandBuffer tmp53 = c->buffer;		HX_STACK_VAR(tmp53,"tmp53");
							HX_STACK_LINE(1060)
							int tmp54 = c->fPos;		HX_STACK_VAR(tmp54,"tmp54");
							HX_STACK_LINE(1060)
							int tmp55 = (tmp54 + (int)5);		HX_STACK_VAR(tmp55,"tmp55");
							HX_STACK_LINE(1060)
							Float tmp56 = tmp53->f->__get(tmp55);		HX_STACK_VAR(tmp56,"tmp56");
							HX_STACK_LINE(1060)
							tmp32->cubicCurveTo(tmp36,tmp40,tmp44,tmp48,tmp52,tmp56);
							HX_STACK_LINE(1061)
							::openfl::_internal::renderer::DrawCommandBuffer tmp57 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokeCommands;		HX_STACK_VAR(tmp57,"tmp57");
							HX_STACK_LINE(1061)
							::openfl::_internal::renderer::DrawCommandBuffer tmp58 = c->buffer;		HX_STACK_VAR(tmp58,"tmp58");
							HX_STACK_LINE(1061)
							int tmp59 = c->fPos;		HX_STACK_VAR(tmp59,"tmp59");
							HX_STACK_LINE(1061)
							int tmp60 = tmp59;		HX_STACK_VAR(tmp60,"tmp60");
							HX_STACK_LINE(1061)
							Float tmp61 = tmp58->f->__get(tmp60);		HX_STACK_VAR(tmp61,"tmp61");
							HX_STACK_LINE(1061)
							::openfl::_internal::renderer::DrawCommandBuffer tmp62 = c->buffer;		HX_STACK_VAR(tmp62,"tmp62");
							HX_STACK_LINE(1061)
							int tmp63 = c->fPos;		HX_STACK_VAR(tmp63,"tmp63");
							HX_STACK_LINE(1061)
							int tmp64 = (tmp63 + (int)1);		HX_STACK_VAR(tmp64,"tmp64");
							HX_STACK_LINE(1061)
							Float tmp65 = tmp62->f->__get(tmp64);		HX_STACK_VAR(tmp65,"tmp65");
							HX_STACK_LINE(1061)
							::openfl::_internal::renderer::DrawCommandBuffer tmp66 = c->buffer;		HX_STACK_VAR(tmp66,"tmp66");
							HX_STACK_LINE(1061)
							int tmp67 = c->fPos;		HX_STACK_VAR(tmp67,"tmp67");
							HX_STACK_LINE(1061)
							int tmp68 = (tmp67 + (int)2);		HX_STACK_VAR(tmp68,"tmp68");
							HX_STACK_LINE(1061)
							Float tmp69 = tmp66->f->__get(tmp68);		HX_STACK_VAR(tmp69,"tmp69");
							HX_STACK_LINE(1061)
							::openfl::_internal::renderer::DrawCommandBuffer tmp70 = c->buffer;		HX_STACK_VAR(tmp70,"tmp70");
							HX_STACK_LINE(1061)
							int tmp71 = c->fPos;		HX_STACK_VAR(tmp71,"tmp71");
							HX_STACK_LINE(1061)
							int tmp72 = (tmp71 + (int)3);		HX_STACK_VAR(tmp72,"tmp72");
							HX_STACK_LINE(1061)
							Float tmp73 = tmp70->f->__get(tmp72);		HX_STACK_VAR(tmp73,"tmp73");
							HX_STACK_LINE(1061)
							::openfl::_internal::renderer::DrawCommandBuffer tmp74 = c->buffer;		HX_STACK_VAR(tmp74,"tmp74");
							HX_STACK_LINE(1061)
							int tmp75 = c->fPos;		HX_STACK_VAR(tmp75,"tmp75");
							HX_STACK_LINE(1061)
							int tmp76 = (tmp75 + (int)4);		HX_STACK_VAR(tmp76,"tmp76");
							HX_STACK_LINE(1061)
							Float tmp77 = tmp74->f->__get(tmp76);		HX_STACK_VAR(tmp77,"tmp77");
							HX_STACK_LINE(1061)
							::openfl::_internal::renderer::DrawCommandBuffer tmp78 = c->buffer;		HX_STACK_VAR(tmp78,"tmp78");
							HX_STACK_LINE(1061)
							int tmp79 = c->fPos;		HX_STACK_VAR(tmp79,"tmp79");
							HX_STACK_LINE(1061)
							int tmp80 = (tmp79 + (int)5);		HX_STACK_VAR(tmp80,"tmp80");
							HX_STACK_LINE(1061)
							Float tmp81 = tmp78->f->__get(tmp80);		HX_STACK_VAR(tmp81,"tmp81");
							HX_STACK_LINE(1061)
							tmp57->cubicCurveTo(tmp61,tmp65,tmp69,tmp73,tmp77,tmp81);
						}
						;break;
						case (int)4: {
							HX_STACK_LINE(1065)
							::openfl::_internal::renderer::DrawCommandReader tmp31;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(1065)
							{
								HX_STACK_LINE(1065)
								{
									HX_STACK_LINE(1065)
									::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
									HX_STACK_LINE(1065)
									switch( (int)(_g2->__Index())){
										case (int)0: {
											HX_STACK_LINE(1065)
											hx::AddEq(data->oPos,(int)2);
											HX_STACK_LINE(1065)
											hx::AddEq(data->bPos,(int)2);
										}
										;break;
										case (int)1: {
											HX_STACK_LINE(1065)
											hx::AddEq(data->iPos,(int)1);
											HX_STACK_LINE(1065)
											hx::AddEq(data->fPos,(int)1);
										}
										;break;
										case (int)2: {
											HX_STACK_LINE(1065)
											hx::AddEq(data->oPos,(int)4);
											HX_STACK_LINE(1065)
											hx::AddEq(data->iiPos,(int)2);
											HX_STACK_LINE(1065)
											hx::AddEq(data->ffPos,(int)1);
											HX_STACK_LINE(1065)
											hx::AddEq(data->fPos,(int)1);
										}
										;break;
										case (int)3: {
											HX_STACK_LINE(1065)
											hx::AddEq(data->fPos,(int)6);
										}
										;break;
										case (int)4: {
											HX_STACK_LINE(1065)
											hx::AddEq(data->fPos,(int)4);
										}
										;break;
										case (int)5: {
											HX_STACK_LINE(1065)
											hx::AddEq(data->fPos,(int)3);
										}
										;break;
										case (int)6: {
											HX_STACK_LINE(1065)
											hx::AddEq(data->fPos,(int)4);
										}
										;break;
										case (int)7: {
											HX_STACK_LINE(1065)
											hx::AddEq(data->fPos,(int)4);
										}
										;break;
										case (int)8: {
											HX_STACK_LINE(1065)
											hx::AddEq(data->fPos,(int)5);
											HX_STACK_LINE(1065)
											hx::AddEq(data->oPos,(int)1);
										}
										;break;
										case (int)10: {
											HX_STACK_LINE(1065)
											hx::AddEq(data->oPos,(int)4);
										}
										;break;
										case (int)11: {
											HX_STACK_LINE(1065)
											Dynamic();
										}
										;break;
										case (int)12: {
											HX_STACK_LINE(1065)
											hx::AddEq(data->oPos,(int)2);
											HX_STACK_LINE(1065)
											hx::AddEq(data->bPos,(int)2);
										}
										;break;
										case (int)13: {
											HX_STACK_LINE(1065)
											hx::AddEq(data->oPos,(int)4);
											HX_STACK_LINE(1065)
											hx::AddEq(data->iiPos,(int)2);
											HX_STACK_LINE(1065)
											hx::AddEq(data->ffPos,(int)1);
											HX_STACK_LINE(1065)
											hx::AddEq(data->fPos,(int)1);
										}
										;break;
										case (int)14: {
											HX_STACK_LINE(1065)
											hx::AddEq(data->oPos,(int)4);
											HX_STACK_LINE(1065)
											hx::AddEq(data->iPos,(int)1);
											HX_STACK_LINE(1065)
											hx::AddEq(data->fPos,(int)2);
											HX_STACK_LINE(1065)
											hx::AddEq(data->bPos,(int)1);
										}
										;break;
										case (int)15: {
											HX_STACK_LINE(1065)
											hx::AddEq(data->fPos,(int)2);
										}
										;break;
										case (int)16: {
											HX_STACK_LINE(1065)
											hx::AddEq(data->fPos,(int)2);
										}
										;break;
										case (int)17: {
											HX_STACK_LINE(1065)
											hx::AddEq(data->oPos,(int)1);
										}
										;break;
										default: {
											HX_STACK_LINE(1065)
											Dynamic();
										}
									}
								}
								HX_STACK_LINE(1065)
								data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::CURVE_TO;
								HX_STACK_LINE(1065)
								tmp31 = data;
							}
							HX_STACK_LINE(1065)
							::openfl::_internal::renderer::DrawCommandReader c = tmp31;		HX_STACK_VAR(c,"c");
							HX_STACK_LINE(1066)
							::openfl::_internal::renderer::DrawCommandBuffer tmp32 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillCommands;		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(1066)
							::openfl::_internal::renderer::DrawCommandBuffer tmp33 = c->buffer;		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(1066)
							int tmp34 = c->fPos;		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(1066)
							int tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(1066)
							Float tmp36 = tmp33->f->__get(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(1066)
							::openfl::_internal::renderer::DrawCommandBuffer tmp37 = c->buffer;		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(1066)
							int tmp38 = c->fPos;		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(1066)
							int tmp39 = (tmp38 + (int)1);		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(1066)
							Float tmp40 = tmp37->f->__get(tmp39);		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(1066)
							::openfl::_internal::renderer::DrawCommandBuffer tmp41 = c->buffer;		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(1066)
							int tmp42 = c->fPos;		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(1066)
							int tmp43 = (tmp42 + (int)2);		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(1066)
							Float tmp44 = tmp41->f->__get(tmp43);		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(1066)
							::openfl::_internal::renderer::DrawCommandBuffer tmp45 = c->buffer;		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(1066)
							int tmp46 = c->fPos;		HX_STACK_VAR(tmp46,"tmp46");
							HX_STACK_LINE(1066)
							int tmp47 = (tmp46 + (int)3);		HX_STACK_VAR(tmp47,"tmp47");
							HX_STACK_LINE(1066)
							Float tmp48 = tmp45->f->__get(tmp47);		HX_STACK_VAR(tmp48,"tmp48");
							HX_STACK_LINE(1066)
							tmp32->curveTo(tmp36,tmp40,tmp44,tmp48);
							HX_STACK_LINE(1067)
							::openfl::_internal::renderer::DrawCommandBuffer tmp49 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokeCommands;		HX_STACK_VAR(tmp49,"tmp49");
							HX_STACK_LINE(1067)
							::openfl::_internal::renderer::DrawCommandBuffer tmp50 = c->buffer;		HX_STACK_VAR(tmp50,"tmp50");
							HX_STACK_LINE(1067)
							int tmp51 = c->fPos;		HX_STACK_VAR(tmp51,"tmp51");
							HX_STACK_LINE(1067)
							int tmp52 = tmp51;		HX_STACK_VAR(tmp52,"tmp52");
							HX_STACK_LINE(1067)
							Float tmp53 = tmp50->f->__get(tmp52);		HX_STACK_VAR(tmp53,"tmp53");
							HX_STACK_LINE(1067)
							::openfl::_internal::renderer::DrawCommandBuffer tmp54 = c->buffer;		HX_STACK_VAR(tmp54,"tmp54");
							HX_STACK_LINE(1067)
							int tmp55 = c->fPos;		HX_STACK_VAR(tmp55,"tmp55");
							HX_STACK_LINE(1067)
							int tmp56 = (tmp55 + (int)1);		HX_STACK_VAR(tmp56,"tmp56");
							HX_STACK_LINE(1067)
							Float tmp57 = tmp54->f->__get(tmp56);		HX_STACK_VAR(tmp57,"tmp57");
							HX_STACK_LINE(1067)
							::openfl::_internal::renderer::DrawCommandBuffer tmp58 = c->buffer;		HX_STACK_VAR(tmp58,"tmp58");
							HX_STACK_LINE(1067)
							int tmp59 = c->fPos;		HX_STACK_VAR(tmp59,"tmp59");
							HX_STACK_LINE(1067)
							int tmp60 = (tmp59 + (int)2);		HX_STACK_VAR(tmp60,"tmp60");
							HX_STACK_LINE(1067)
							Float tmp61 = tmp58->f->__get(tmp60);		HX_STACK_VAR(tmp61,"tmp61");
							HX_STACK_LINE(1067)
							::openfl::_internal::renderer::DrawCommandBuffer tmp62 = c->buffer;		HX_STACK_VAR(tmp62,"tmp62");
							HX_STACK_LINE(1067)
							int tmp63 = c->fPos;		HX_STACK_VAR(tmp63,"tmp63");
							HX_STACK_LINE(1067)
							int tmp64 = (tmp63 + (int)3);		HX_STACK_VAR(tmp64,"tmp64");
							HX_STACK_LINE(1067)
							Float tmp65 = tmp62->f->__get(tmp64);		HX_STACK_VAR(tmp65,"tmp65");
							HX_STACK_LINE(1067)
							tmp49->curveTo(tmp53,tmp57,tmp61,tmp65);
						}
						;break;
						case (int)15: {
							HX_STACK_LINE(1071)
							::openfl::_internal::renderer::DrawCommandReader tmp31;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(1071)
							{
								HX_STACK_LINE(1071)
								{
									HX_STACK_LINE(1071)
									::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
									HX_STACK_LINE(1071)
									switch( (int)(_g2->__Index())){
										case (int)0: {
											HX_STACK_LINE(1071)
											hx::AddEq(data->oPos,(int)2);
											HX_STACK_LINE(1071)
											hx::AddEq(data->bPos,(int)2);
										}
										;break;
										case (int)1: {
											HX_STACK_LINE(1071)
											hx::AddEq(data->iPos,(int)1);
											HX_STACK_LINE(1071)
											hx::AddEq(data->fPos,(int)1);
										}
										;break;
										case (int)2: {
											HX_STACK_LINE(1071)
											hx::AddEq(data->oPos,(int)4);
											HX_STACK_LINE(1071)
											hx::AddEq(data->iiPos,(int)2);
											HX_STACK_LINE(1071)
											hx::AddEq(data->ffPos,(int)1);
											HX_STACK_LINE(1071)
											hx::AddEq(data->fPos,(int)1);
										}
										;break;
										case (int)3: {
											HX_STACK_LINE(1071)
											hx::AddEq(data->fPos,(int)6);
										}
										;break;
										case (int)4: {
											HX_STACK_LINE(1071)
											hx::AddEq(data->fPos,(int)4);
										}
										;break;
										case (int)5: {
											HX_STACK_LINE(1071)
											hx::AddEq(data->fPos,(int)3);
										}
										;break;
										case (int)6: {
											HX_STACK_LINE(1071)
											hx::AddEq(data->fPos,(int)4);
										}
										;break;
										case (int)7: {
											HX_STACK_LINE(1071)
											hx::AddEq(data->fPos,(int)4);
										}
										;break;
										case (int)8: {
											HX_STACK_LINE(1071)
											hx::AddEq(data->fPos,(int)5);
											HX_STACK_LINE(1071)
											hx::AddEq(data->oPos,(int)1);
										}
										;break;
										case (int)10: {
											HX_STACK_LINE(1071)
											hx::AddEq(data->oPos,(int)4);
										}
										;break;
										case (int)11: {
											HX_STACK_LINE(1071)
											Dynamic();
										}
										;break;
										case (int)12: {
											HX_STACK_LINE(1071)
											hx::AddEq(data->oPos,(int)2);
											HX_STACK_LINE(1071)
											hx::AddEq(data->bPos,(int)2);
										}
										;break;
										case (int)13: {
											HX_STACK_LINE(1071)
											hx::AddEq(data->oPos,(int)4);
											HX_STACK_LINE(1071)
											hx::AddEq(data->iiPos,(int)2);
											HX_STACK_LINE(1071)
											hx::AddEq(data->ffPos,(int)1);
											HX_STACK_LINE(1071)
											hx::AddEq(data->fPos,(int)1);
										}
										;break;
										case (int)14: {
											HX_STACK_LINE(1071)
											hx::AddEq(data->oPos,(int)4);
											HX_STACK_LINE(1071)
											hx::AddEq(data->iPos,(int)1);
											HX_STACK_LINE(1071)
											hx::AddEq(data->fPos,(int)2);
											HX_STACK_LINE(1071)
											hx::AddEq(data->bPos,(int)1);
										}
										;break;
										case (int)15: {
											HX_STACK_LINE(1071)
											hx::AddEq(data->fPos,(int)2);
										}
										;break;
										case (int)16: {
											HX_STACK_LINE(1071)
											hx::AddEq(data->fPos,(int)2);
										}
										;break;
										case (int)17: {
											HX_STACK_LINE(1071)
											hx::AddEq(data->oPos,(int)1);
										}
										;break;
										default: {
											HX_STACK_LINE(1071)
											Dynamic();
										}
									}
								}
								HX_STACK_LINE(1071)
								data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::LINE_TO;
								HX_STACK_LINE(1071)
								tmp31 = data;
							}
							HX_STACK_LINE(1071)
							::openfl::_internal::renderer::DrawCommandReader c = tmp31;		HX_STACK_VAR(c,"c");
							HX_STACK_LINE(1072)
							::openfl::_internal::renderer::DrawCommandBuffer tmp32 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillCommands;		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(1072)
							::openfl::_internal::renderer::DrawCommandBuffer tmp33 = c->buffer;		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(1072)
							int tmp34 = c->fPos;		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(1072)
							int tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(1072)
							Float tmp36 = tmp33->f->__get(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(1072)
							::openfl::_internal::renderer::DrawCommandBuffer tmp37 = c->buffer;		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(1072)
							int tmp38 = c->fPos;		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(1072)
							int tmp39 = (tmp38 + (int)1);		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(1072)
							Float tmp40 = tmp37->f->__get(tmp39);		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(1072)
							tmp32->lineTo(tmp36,tmp40);
							HX_STACK_LINE(1073)
							::openfl::_internal::renderer::DrawCommandBuffer tmp41 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokeCommands;		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(1073)
							::openfl::_internal::renderer::DrawCommandBuffer tmp42 = c->buffer;		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(1073)
							int tmp43 = c->fPos;		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(1073)
							int tmp44 = tmp43;		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(1073)
							Float tmp45 = tmp42->f->__get(tmp44);		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(1073)
							::openfl::_internal::renderer::DrawCommandBuffer tmp46 = c->buffer;		HX_STACK_VAR(tmp46,"tmp46");
							HX_STACK_LINE(1073)
							int tmp47 = c->fPos;		HX_STACK_VAR(tmp47,"tmp47");
							HX_STACK_LINE(1073)
							int tmp48 = (tmp47 + (int)1);		HX_STACK_VAR(tmp48,"tmp48");
							HX_STACK_LINE(1073)
							Float tmp49 = tmp46->f->__get(tmp48);		HX_STACK_VAR(tmp49,"tmp49");
							HX_STACK_LINE(1073)
							tmp41->lineTo(tmp45,tmp49);
						}
						;break;
						case (int)16: {
							HX_STACK_LINE(1077)
							::openfl::_internal::renderer::DrawCommandReader tmp31;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(1077)
							{
								HX_STACK_LINE(1077)
								{
									HX_STACK_LINE(1077)
									::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
									HX_STACK_LINE(1077)
									switch( (int)(_g2->__Index())){
										case (int)0: {
											HX_STACK_LINE(1077)
											hx::AddEq(data->oPos,(int)2);
											HX_STACK_LINE(1077)
											hx::AddEq(data->bPos,(int)2);
										}
										;break;
										case (int)1: {
											HX_STACK_LINE(1077)
											hx::AddEq(data->iPos,(int)1);
											HX_STACK_LINE(1077)
											hx::AddEq(data->fPos,(int)1);
										}
										;break;
										case (int)2: {
											HX_STACK_LINE(1077)
											hx::AddEq(data->oPos,(int)4);
											HX_STACK_LINE(1077)
											hx::AddEq(data->iiPos,(int)2);
											HX_STACK_LINE(1077)
											hx::AddEq(data->ffPos,(int)1);
											HX_STACK_LINE(1077)
											hx::AddEq(data->fPos,(int)1);
										}
										;break;
										case (int)3: {
											HX_STACK_LINE(1077)
											hx::AddEq(data->fPos,(int)6);
										}
										;break;
										case (int)4: {
											HX_STACK_LINE(1077)
											hx::AddEq(data->fPos,(int)4);
										}
										;break;
										case (int)5: {
											HX_STACK_LINE(1077)
											hx::AddEq(data->fPos,(int)3);
										}
										;break;
										case (int)6: {
											HX_STACK_LINE(1077)
											hx::AddEq(data->fPos,(int)4);
										}
										;break;
										case (int)7: {
											HX_STACK_LINE(1077)
											hx::AddEq(data->fPos,(int)4);
										}
										;break;
										case (int)8: {
											HX_STACK_LINE(1077)
											hx::AddEq(data->fPos,(int)5);
											HX_STACK_LINE(1077)
											hx::AddEq(data->oPos,(int)1);
										}
										;break;
										case (int)10: {
											HX_STACK_LINE(1077)
											hx::AddEq(data->oPos,(int)4);
										}
										;break;
										case (int)11: {
											HX_STACK_LINE(1077)
											Dynamic();
										}
										;break;
										case (int)12: {
											HX_STACK_LINE(1077)
											hx::AddEq(data->oPos,(int)2);
											HX_STACK_LINE(1077)
											hx::AddEq(data->bPos,(int)2);
										}
										;break;
										case (int)13: {
											HX_STACK_LINE(1077)
											hx::AddEq(data->oPos,(int)4);
											HX_STACK_LINE(1077)
											hx::AddEq(data->iiPos,(int)2);
											HX_STACK_LINE(1077)
											hx::AddEq(data->ffPos,(int)1);
											HX_STACK_LINE(1077)
											hx::AddEq(data->fPos,(int)1);
										}
										;break;
										case (int)14: {
											HX_STACK_LINE(1077)
											hx::AddEq(data->oPos,(int)4);
											HX_STACK_LINE(1077)
											hx::AddEq(data->iPos,(int)1);
											HX_STACK_LINE(1077)
											hx::AddEq(data->fPos,(int)2);
											HX_STACK_LINE(1077)
											hx::AddEq(data->bPos,(int)1);
										}
										;break;
										case (int)15: {
											HX_STACK_LINE(1077)
											hx::AddEq(data->fPos,(int)2);
										}
										;break;
										case (int)16: {
											HX_STACK_LINE(1077)
											hx::AddEq(data->fPos,(int)2);
										}
										;break;
										case (int)17: {
											HX_STACK_LINE(1077)
											hx::AddEq(data->oPos,(int)1);
										}
										;break;
										default: {
											HX_STACK_LINE(1077)
											Dynamic();
										}
									}
								}
								HX_STACK_LINE(1077)
								data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::MOVE_TO;
								HX_STACK_LINE(1077)
								tmp31 = data;
							}
							HX_STACK_LINE(1077)
							::openfl::_internal::renderer::DrawCommandReader c = tmp31;		HX_STACK_VAR(c,"c");
							HX_STACK_LINE(1078)
							::openfl::_internal::renderer::DrawCommandBuffer tmp32 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillCommands;		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(1078)
							::openfl::_internal::renderer::DrawCommandBuffer tmp33 = c->buffer;		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(1078)
							int tmp34 = c->fPos;		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(1078)
							int tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(1078)
							Float tmp36 = tmp33->f->__get(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(1078)
							::openfl::_internal::renderer::DrawCommandBuffer tmp37 = c->buffer;		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(1078)
							int tmp38 = c->fPos;		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(1078)
							int tmp39 = (tmp38 + (int)1);		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(1078)
							Float tmp40 = tmp37->f->__get(tmp39);		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(1078)
							tmp32->moveTo(tmp36,tmp40);
							HX_STACK_LINE(1079)
							::openfl::_internal::renderer::DrawCommandBuffer tmp41 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokeCommands;		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(1079)
							::openfl::_internal::renderer::DrawCommandBuffer tmp42 = c->buffer;		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(1079)
							int tmp43 = c->fPos;		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(1079)
							int tmp44 = tmp43;		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(1079)
							Float tmp45 = tmp42->f->__get(tmp44);		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(1079)
							::openfl::_internal::renderer::DrawCommandBuffer tmp46 = c->buffer;		HX_STACK_VAR(tmp46,"tmp46");
							HX_STACK_LINE(1079)
							int tmp47 = c->fPos;		HX_STACK_VAR(tmp47,"tmp47");
							HX_STACK_LINE(1079)
							int tmp48 = (tmp47 + (int)1);		HX_STACK_VAR(tmp48,"tmp48");
							HX_STACK_LINE(1079)
							Float tmp49 = tmp46->f->__get(tmp48);		HX_STACK_VAR(tmp49,"tmp49");
							HX_STACK_LINE(1079)
							tmp41->moveTo(tmp45,tmp49);
						}
						;break;
						case (int)11: {
							HX_STACK_LINE(1083)
							{
								HX_STACK_LINE(1083)
								{
									HX_STACK_LINE(1083)
									::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
									HX_STACK_LINE(1083)
									switch( (int)(_g2->__Index())){
										case (int)0: {
											HX_STACK_LINE(1083)
											hx::AddEq(data->oPos,(int)2);
											HX_STACK_LINE(1083)
											hx::AddEq(data->bPos,(int)2);
										}
										;break;
										case (int)1: {
											HX_STACK_LINE(1083)
											hx::AddEq(data->iPos,(int)1);
											HX_STACK_LINE(1083)
											hx::AddEq(data->fPos,(int)1);
										}
										;break;
										case (int)2: {
											HX_STACK_LINE(1083)
											hx::AddEq(data->oPos,(int)4);
											HX_STACK_LINE(1083)
											hx::AddEq(data->iiPos,(int)2);
											HX_STACK_LINE(1083)
											hx::AddEq(data->ffPos,(int)1);
											HX_STACK_LINE(1083)
											hx::AddEq(data->fPos,(int)1);
										}
										;break;
										case (int)3: {
											HX_STACK_LINE(1083)
											hx::AddEq(data->fPos,(int)6);
										}
										;break;
										case (int)4: {
											HX_STACK_LINE(1083)
											hx::AddEq(data->fPos,(int)4);
										}
										;break;
										case (int)5: {
											HX_STACK_LINE(1083)
											hx::AddEq(data->fPos,(int)3);
										}
										;break;
										case (int)6: {
											HX_STACK_LINE(1083)
											hx::AddEq(data->fPos,(int)4);
										}
										;break;
										case (int)7: {
											HX_STACK_LINE(1083)
											hx::AddEq(data->fPos,(int)4);
										}
										;break;
										case (int)8: {
											HX_STACK_LINE(1083)
											hx::AddEq(data->fPos,(int)5);
											HX_STACK_LINE(1083)
											hx::AddEq(data->oPos,(int)1);
										}
										;break;
										case (int)10: {
											HX_STACK_LINE(1083)
											hx::AddEq(data->oPos,(int)4);
										}
										;break;
										case (int)11: {
											HX_STACK_LINE(1083)
											Dynamic();
										}
										;break;
										case (int)12: {
											HX_STACK_LINE(1083)
											hx::AddEq(data->oPos,(int)2);
											HX_STACK_LINE(1083)
											hx::AddEq(data->bPos,(int)2);
										}
										;break;
										case (int)13: {
											HX_STACK_LINE(1083)
											hx::AddEq(data->oPos,(int)4);
											HX_STACK_LINE(1083)
											hx::AddEq(data->iiPos,(int)2);
											HX_STACK_LINE(1083)
											hx::AddEq(data->ffPos,(int)1);
											HX_STACK_LINE(1083)
											hx::AddEq(data->fPos,(int)1);
										}
										;break;
										case (int)14: {
											HX_STACK_LINE(1083)
											hx::AddEq(data->oPos,(int)4);
											HX_STACK_LINE(1083)
											hx::AddEq(data->iPos,(int)1);
											HX_STACK_LINE(1083)
											hx::AddEq(data->fPos,(int)2);
											HX_STACK_LINE(1083)
											hx::AddEq(data->bPos,(int)1);
										}
										;break;
										case (int)15: {
											HX_STACK_LINE(1083)
											hx::AddEq(data->fPos,(int)2);
										}
										;break;
										case (int)16: {
											HX_STACK_LINE(1083)
											hx::AddEq(data->fPos,(int)2);
										}
										;break;
										case (int)17: {
											HX_STACK_LINE(1083)
											hx::AddEq(data->oPos,(int)1);
										}
										;break;
										default: {
											HX_STACK_LINE(1083)
											Dynamic();
										}
									}
								}
								HX_STACK_LINE(1083)
								data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::END_FILL;
								HX_STACK_LINE(1083)
								data;
							}
							HX_STACK_LINE(1084)
							::openfl::_internal::renderer::cairo::CairoGraphics_obj::endFill();
							HX_STACK_LINE(1085)
							::openfl::_internal::renderer::cairo::CairoGraphics_obj::endStroke();
							HX_STACK_LINE(1086)
							::openfl::_internal::renderer::cairo::CairoGraphics_obj::hasFill = false;
							HX_STACK_LINE(1087)
							::openfl::_internal::renderer::cairo::CairoGraphics_obj::bitmapFill = null();
						}
						;break;
						case (int)13: {
							HX_STACK_LINE(1091)
							::openfl::_internal::renderer::DrawCommandReader tmp31;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(1091)
							{
								HX_STACK_LINE(1091)
								{
									HX_STACK_LINE(1091)
									::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
									HX_STACK_LINE(1091)
									switch( (int)(_g2->__Index())){
										case (int)0: {
											HX_STACK_LINE(1091)
											hx::AddEq(data->oPos,(int)2);
											HX_STACK_LINE(1091)
											hx::AddEq(data->bPos,(int)2);
										}
										;break;
										case (int)1: {
											HX_STACK_LINE(1091)
											hx::AddEq(data->iPos,(int)1);
											HX_STACK_LINE(1091)
											hx::AddEq(data->fPos,(int)1);
										}
										;break;
										case (int)2: {
											HX_STACK_LINE(1091)
											hx::AddEq(data->oPos,(int)4);
											HX_STACK_LINE(1091)
											hx::AddEq(data->iiPos,(int)2);
											HX_STACK_LINE(1091)
											hx::AddEq(data->ffPos,(int)1);
											HX_STACK_LINE(1091)
											hx::AddEq(data->fPos,(int)1);
										}
										;break;
										case (int)3: {
											HX_STACK_LINE(1091)
											hx::AddEq(data->fPos,(int)6);
										}
										;break;
										case (int)4: {
											HX_STACK_LINE(1091)
											hx::AddEq(data->fPos,(int)4);
										}
										;break;
										case (int)5: {
											HX_STACK_LINE(1091)
											hx::AddEq(data->fPos,(int)3);
										}
										;break;
										case (int)6: {
											HX_STACK_LINE(1091)
											hx::AddEq(data->fPos,(int)4);
										}
										;break;
										case (int)7: {
											HX_STACK_LINE(1091)
											hx::AddEq(data->fPos,(int)4);
										}
										;break;
										case (int)8: {
											HX_STACK_LINE(1091)
											hx::AddEq(data->fPos,(int)5);
											HX_STACK_LINE(1091)
											hx::AddEq(data->oPos,(int)1);
										}
										;break;
										case (int)10: {
											HX_STACK_LINE(1091)
											hx::AddEq(data->oPos,(int)4);
										}
										;break;
										case (int)11: {
											HX_STACK_LINE(1091)
											Dynamic();
										}
										;break;
										case (int)12: {
											HX_STACK_LINE(1091)
											hx::AddEq(data->oPos,(int)2);
											HX_STACK_LINE(1091)
											hx::AddEq(data->bPos,(int)2);
										}
										;break;
										case (int)13: {
											HX_STACK_LINE(1091)
											hx::AddEq(data->oPos,(int)4);
											HX_STACK_LINE(1091)
											hx::AddEq(data->iiPos,(int)2);
											HX_STACK_LINE(1091)
											hx::AddEq(data->ffPos,(int)1);
											HX_STACK_LINE(1091)
											hx::AddEq(data->fPos,(int)1);
										}
										;break;
										case (int)14: {
											HX_STACK_LINE(1091)
											hx::AddEq(data->oPos,(int)4);
											HX_STACK_LINE(1091)
											hx::AddEq(data->iPos,(int)1);
											HX_STACK_LINE(1091)
											hx::AddEq(data->fPos,(int)2);
											HX_STACK_LINE(1091)
											hx::AddEq(data->bPos,(int)1);
										}
										;break;
										case (int)15: {
											HX_STACK_LINE(1091)
											hx::AddEq(data->fPos,(int)2);
										}
										;break;
										case (int)16: {
											HX_STACK_LINE(1091)
											hx::AddEq(data->fPos,(int)2);
										}
										;break;
										case (int)17: {
											HX_STACK_LINE(1091)
											hx::AddEq(data->oPos,(int)1);
										}
										;break;
										default: {
											HX_STACK_LINE(1091)
											Dynamic();
										}
									}
								}
								HX_STACK_LINE(1091)
								data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::LINE_GRADIENT_STYLE;
								HX_STACK_LINE(1091)
								tmp31 = data;
							}
							HX_STACK_LINE(1091)
							::openfl::_internal::renderer::DrawCommandReader c = tmp31;		HX_STACK_VAR(c,"c");
							HX_STACK_LINE(1092)
							::openfl::_internal::renderer::DrawCommandBuffer tmp32 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokeCommands;		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(1092)
							::openfl::_internal::renderer::DrawCommandBuffer tmp33 = c->buffer;		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(1092)
							int tmp34 = c->oPos;		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(1092)
							int tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(1092)
							Dynamic tmp36 = tmp33->o->__GetItem(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(1092)
							Dynamic tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(1092)
							::openfl::_internal::renderer::DrawCommandBuffer tmp38 = c->buffer;		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(1092)
							int tmp39 = c->iiPos;		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(1092)
							int tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(1092)
							::openfl::_internal::renderer::DrawCommandBuffer tmp41 = c->buffer;		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(1092)
							int tmp42 = c->ffPos;		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(1092)
							int tmp43 = tmp42;		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(1092)
							::openfl::_internal::renderer::DrawCommandBuffer tmp44 = c->buffer;		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(1092)
							int tmp45 = c->iiPos;		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(1092)
							int tmp46 = (tmp45 + (int)1);		HX_STACK_VAR(tmp46,"tmp46");
							HX_STACK_LINE(1092)
							::openfl::_internal::renderer::DrawCommandBuffer tmp47 = c->buffer;		HX_STACK_VAR(tmp47,"tmp47");
							HX_STACK_LINE(1092)
							int tmp48 = c->oPos;		HX_STACK_VAR(tmp48,"tmp48");
							HX_STACK_LINE(1092)
							int tmp49 = (tmp48 + (int)1);		HX_STACK_VAR(tmp49,"tmp49");
							HX_STACK_LINE(1092)
							Dynamic tmp50 = tmp47->o->__GetItem(tmp49);		HX_STACK_VAR(tmp50,"tmp50");
							HX_STACK_LINE(1092)
							::openfl::geom::Matrix tmp51 = ((::openfl::geom::Matrix)(tmp50));		HX_STACK_VAR(tmp51,"tmp51");
							HX_STACK_LINE(1092)
							::openfl::_internal::renderer::DrawCommandBuffer tmp52 = c->buffer;		HX_STACK_VAR(tmp52,"tmp52");
							HX_STACK_LINE(1092)
							int tmp53 = c->oPos;		HX_STACK_VAR(tmp53,"tmp53");
							HX_STACK_LINE(1092)
							int tmp54 = (tmp53 + (int)2);		HX_STACK_VAR(tmp54,"tmp54");
							HX_STACK_LINE(1092)
							Dynamic tmp55 = tmp52->o->__GetItem(tmp54);		HX_STACK_VAR(tmp55,"tmp55");
							HX_STACK_LINE(1092)
							Dynamic tmp56 = tmp55;		HX_STACK_VAR(tmp56,"tmp56");
							HX_STACK_LINE(1092)
							::openfl::_internal::renderer::DrawCommandBuffer tmp57 = c->buffer;		HX_STACK_VAR(tmp57,"tmp57");
							HX_STACK_LINE(1092)
							int tmp58 = c->oPos;		HX_STACK_VAR(tmp58,"tmp58");
							HX_STACK_LINE(1092)
							int tmp59 = (tmp58 + (int)3);		HX_STACK_VAR(tmp59,"tmp59");
							HX_STACK_LINE(1092)
							Dynamic tmp60 = tmp57->o->__GetItem(tmp59);		HX_STACK_VAR(tmp60,"tmp60");
							HX_STACK_LINE(1092)
							Dynamic tmp61 = tmp60;		HX_STACK_VAR(tmp61,"tmp61");
							HX_STACK_LINE(1092)
							::openfl::_internal::renderer::DrawCommandBuffer tmp62 = c->buffer;		HX_STACK_VAR(tmp62,"tmp62");
							HX_STACK_LINE(1092)
							int tmp63 = c->fPos;		HX_STACK_VAR(tmp63,"tmp63");
							HX_STACK_LINE(1092)
							int tmp64 = tmp63;		HX_STACK_VAR(tmp64,"tmp64");
							HX_STACK_LINE(1092)
							Float tmp65 = tmp62->f->__get(tmp64);		HX_STACK_VAR(tmp65,"tmp65");
							HX_STACK_LINE(1092)
							Float tmp66 = tmp65;		HX_STACK_VAR(tmp66,"tmp66");
							HX_STACK_LINE(1092)
							tmp32->lineGradientStyle(tmp37,tmp38->ii->__get(tmp40).StaticCast< Array< int > >(),tmp41->ff->__get(tmp43).StaticCast< Array< Float > >(),tmp44->ii->__get(tmp46).StaticCast< Array< int > >(),tmp51,tmp56,tmp61,tmp66);
						}
						;break;
						case (int)12: {
							HX_STACK_LINE(1096)
							::openfl::_internal::renderer::DrawCommandReader tmp31;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(1096)
							{
								HX_STACK_LINE(1096)
								{
									HX_STACK_LINE(1096)
									::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
									HX_STACK_LINE(1096)
									switch( (int)(_g2->__Index())){
										case (int)0: {
											HX_STACK_LINE(1096)
											hx::AddEq(data->oPos,(int)2);
											HX_STACK_LINE(1096)
											hx::AddEq(data->bPos,(int)2);
										}
										;break;
										case (int)1: {
											HX_STACK_LINE(1096)
											hx::AddEq(data->iPos,(int)1);
											HX_STACK_LINE(1096)
											hx::AddEq(data->fPos,(int)1);
										}
										;break;
										case (int)2: {
											HX_STACK_LINE(1096)
											hx::AddEq(data->oPos,(int)4);
											HX_STACK_LINE(1096)
											hx::AddEq(data->iiPos,(int)2);
											HX_STACK_LINE(1096)
											hx::AddEq(data->ffPos,(int)1);
											HX_STACK_LINE(1096)
											hx::AddEq(data->fPos,(int)1);
										}
										;break;
										case (int)3: {
											HX_STACK_LINE(1096)
											hx::AddEq(data->fPos,(int)6);
										}
										;break;
										case (int)4: {
											HX_STACK_LINE(1096)
											hx::AddEq(data->fPos,(int)4);
										}
										;break;
										case (int)5: {
											HX_STACK_LINE(1096)
											hx::AddEq(data->fPos,(int)3);
										}
										;break;
										case (int)6: {
											HX_STACK_LINE(1096)
											hx::AddEq(data->fPos,(int)4);
										}
										;break;
										case (int)7: {
											HX_STACK_LINE(1096)
											hx::AddEq(data->fPos,(int)4);
										}
										;break;
										case (int)8: {
											HX_STACK_LINE(1096)
											hx::AddEq(data->fPos,(int)5);
											HX_STACK_LINE(1096)
											hx::AddEq(data->oPos,(int)1);
										}
										;break;
										case (int)10: {
											HX_STACK_LINE(1096)
											hx::AddEq(data->oPos,(int)4);
										}
										;break;
										case (int)11: {
											HX_STACK_LINE(1096)
											Dynamic();
										}
										;break;
										case (int)12: {
											HX_STACK_LINE(1096)
											hx::AddEq(data->oPos,(int)2);
											HX_STACK_LINE(1096)
											hx::AddEq(data->bPos,(int)2);
										}
										;break;
										case (int)13: {
											HX_STACK_LINE(1096)
											hx::AddEq(data->oPos,(int)4);
											HX_STACK_LINE(1096)
											hx::AddEq(data->iiPos,(int)2);
											HX_STACK_LINE(1096)
											hx::AddEq(data->ffPos,(int)1);
											HX_STACK_LINE(1096)
											hx::AddEq(data->fPos,(int)1);
										}
										;break;
										case (int)14: {
											HX_STACK_LINE(1096)
											hx::AddEq(data->oPos,(int)4);
											HX_STACK_LINE(1096)
											hx::AddEq(data->iPos,(int)1);
											HX_STACK_LINE(1096)
											hx::AddEq(data->fPos,(int)2);
											HX_STACK_LINE(1096)
											hx::AddEq(data->bPos,(int)1);
										}
										;break;
										case (int)15: {
											HX_STACK_LINE(1096)
											hx::AddEq(data->fPos,(int)2);
										}
										;break;
										case (int)16: {
											HX_STACK_LINE(1096)
											hx::AddEq(data->fPos,(int)2);
										}
										;break;
										case (int)17: {
											HX_STACK_LINE(1096)
											hx::AddEq(data->oPos,(int)1);
										}
										;break;
										default: {
											HX_STACK_LINE(1096)
											Dynamic();
										}
									}
								}
								HX_STACK_LINE(1096)
								data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::LINE_BITMAP_STYLE;
								HX_STACK_LINE(1096)
								tmp31 = data;
							}
							HX_STACK_LINE(1096)
							::openfl::_internal::renderer::DrawCommandReader c = tmp31;		HX_STACK_VAR(c,"c");
							HX_STACK_LINE(1097)
							::openfl::_internal::renderer::DrawCommandBuffer tmp32 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokeCommands;		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(1097)
							::openfl::_internal::renderer::DrawCommandBuffer tmp33 = c->buffer;		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(1097)
							int tmp34 = c->oPos;		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(1097)
							int tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(1097)
							Dynamic tmp36 = tmp33->o->__GetItem(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(1097)
							::openfl::display::BitmapData tmp37 = ((::openfl::display::BitmapData)(tmp36));		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(1097)
							::openfl::_internal::renderer::DrawCommandBuffer tmp38 = c->buffer;		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(1097)
							int tmp39 = c->oPos;		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(1097)
							int tmp40 = (tmp39 + (int)1);		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(1097)
							Dynamic tmp41 = tmp38->o->__GetItem(tmp40);		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(1097)
							::openfl::geom::Matrix tmp42 = ((::openfl::geom::Matrix)(tmp41));		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(1097)
							::openfl::_internal::renderer::DrawCommandBuffer tmp43 = c->buffer;		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(1097)
							int tmp44 = c->bPos;		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(1097)
							int tmp45 = tmp44;		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(1097)
							bool tmp46 = tmp43->b->__get(tmp45);		HX_STACK_VAR(tmp46,"tmp46");
							HX_STACK_LINE(1097)
							bool tmp47 = tmp46;		HX_STACK_VAR(tmp47,"tmp47");
							HX_STACK_LINE(1097)
							::openfl::_internal::renderer::DrawCommandBuffer tmp48 = c->buffer;		HX_STACK_VAR(tmp48,"tmp48");
							HX_STACK_LINE(1097)
							int tmp49 = c->bPos;		HX_STACK_VAR(tmp49,"tmp49");
							HX_STACK_LINE(1097)
							int tmp50 = (tmp49 + (int)1);		HX_STACK_VAR(tmp50,"tmp50");
							HX_STACK_LINE(1097)
							bool tmp51 = tmp48->b->__get(tmp50);		HX_STACK_VAR(tmp51,"tmp51");
							HX_STACK_LINE(1097)
							bool tmp52 = tmp51;		HX_STACK_VAR(tmp52,"tmp52");
							HX_STACK_LINE(1097)
							tmp32->lineBitmapStyle(tmp37,tmp42,tmp47,tmp52);
						}
						;break;
						case (int)14: {
							HX_STACK_LINE(1101)
							::openfl::_internal::renderer::DrawCommandReader tmp31;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(1101)
							{
								HX_STACK_LINE(1101)
								{
									HX_STACK_LINE(1101)
									::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
									HX_STACK_LINE(1101)
									switch( (int)(_g2->__Index())){
										case (int)0: {
											HX_STACK_LINE(1101)
											hx::AddEq(data->oPos,(int)2);
											HX_STACK_LINE(1101)
											hx::AddEq(data->bPos,(int)2);
										}
										;break;
										case (int)1: {
											HX_STACK_LINE(1101)
											hx::AddEq(data->iPos,(int)1);
											HX_STACK_LINE(1101)
											hx::AddEq(data->fPos,(int)1);
										}
										;break;
										case (int)2: {
											HX_STACK_LINE(1101)
											hx::AddEq(data->oPos,(int)4);
											HX_STACK_LINE(1101)
											hx::AddEq(data->iiPos,(int)2);
											HX_STACK_LINE(1101)
											hx::AddEq(data->ffPos,(int)1);
											HX_STACK_LINE(1101)
											hx::AddEq(data->fPos,(int)1);
										}
										;break;
										case (int)3: {
											HX_STACK_LINE(1101)
											hx::AddEq(data->fPos,(int)6);
										}
										;break;
										case (int)4: {
											HX_STACK_LINE(1101)
											hx::AddEq(data->fPos,(int)4);
										}
										;break;
										case (int)5: {
											HX_STACK_LINE(1101)
											hx::AddEq(data->fPos,(int)3);
										}
										;break;
										case (int)6: {
											HX_STACK_LINE(1101)
											hx::AddEq(data->fPos,(int)4);
										}
										;break;
										case (int)7: {
											HX_STACK_LINE(1101)
											hx::AddEq(data->fPos,(int)4);
										}
										;break;
										case (int)8: {
											HX_STACK_LINE(1101)
											hx::AddEq(data->fPos,(int)5);
											HX_STACK_LINE(1101)
											hx::AddEq(data->oPos,(int)1);
										}
										;break;
										case (int)10: {
											HX_STACK_LINE(1101)
											hx::AddEq(data->oPos,(int)4);
										}
										;break;
										case (int)11: {
											HX_STACK_LINE(1101)
											Dynamic();
										}
										;break;
										case (int)12: {
											HX_STACK_LINE(1101)
											hx::AddEq(data->oPos,(int)2);
											HX_STACK_LINE(1101)
											hx::AddEq(data->bPos,(int)2);
										}
										;break;
										case (int)13: {
											HX_STACK_LINE(1101)
											hx::AddEq(data->oPos,(int)4);
											HX_STACK_LINE(1101)
											hx::AddEq(data->iiPos,(int)2);
											HX_STACK_LINE(1101)
											hx::AddEq(data->ffPos,(int)1);
											HX_STACK_LINE(1101)
											hx::AddEq(data->fPos,(int)1);
										}
										;break;
										case (int)14: {
											HX_STACK_LINE(1101)
											hx::AddEq(data->oPos,(int)4);
											HX_STACK_LINE(1101)
											hx::AddEq(data->iPos,(int)1);
											HX_STACK_LINE(1101)
											hx::AddEq(data->fPos,(int)2);
											HX_STACK_LINE(1101)
											hx::AddEq(data->bPos,(int)1);
										}
										;break;
										case (int)15: {
											HX_STACK_LINE(1101)
											hx::AddEq(data->fPos,(int)2);
										}
										;break;
										case (int)16: {
											HX_STACK_LINE(1101)
											hx::AddEq(data->fPos,(int)2);
										}
										;break;
										case (int)17: {
											HX_STACK_LINE(1101)
											hx::AddEq(data->oPos,(int)1);
										}
										;break;
										default: {
											HX_STACK_LINE(1101)
											Dynamic();
										}
									}
								}
								HX_STACK_LINE(1101)
								data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::LINE_STYLE;
								HX_STACK_LINE(1101)
								tmp31 = data;
							}
							HX_STACK_LINE(1101)
							::openfl::_internal::renderer::DrawCommandReader c = tmp31;		HX_STACK_VAR(c,"c");
							HX_STACK_LINE(1102)
							::openfl::_internal::renderer::DrawCommandBuffer tmp32 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokeCommands;		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(1102)
							::openfl::_internal::renderer::DrawCommandBuffer tmp33 = c->buffer;		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(1102)
							int tmp34 = c->oPos;		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(1102)
							int tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(1102)
							Dynamic tmp36 = tmp33->o->__GetItem(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(1102)
							Dynamic tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(1102)
							::openfl::_internal::renderer::DrawCommandBuffer tmp38 = c->buffer;		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(1102)
							int tmp39 = c->iPos;		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(1102)
							int tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(1102)
							int tmp41 = tmp38->i->__get(tmp40);		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(1102)
							int tmp42 = tmp41;		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(1102)
							::openfl::_internal::renderer::DrawCommandBuffer tmp43 = c->buffer;		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(1102)
							int tmp44 = c->fPos;		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(1102)
							int tmp45 = tmp44;		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(1102)
							Float tmp46 = tmp43->f->__get(tmp45);		HX_STACK_VAR(tmp46,"tmp46");
							HX_STACK_LINE(1102)
							Float tmp47 = tmp46;		HX_STACK_VAR(tmp47,"tmp47");
							HX_STACK_LINE(1102)
							::openfl::_internal::renderer::DrawCommandBuffer tmp48 = c->buffer;		HX_STACK_VAR(tmp48,"tmp48");
							HX_STACK_LINE(1102)
							int tmp49 = c->bPos;		HX_STACK_VAR(tmp49,"tmp49");
							HX_STACK_LINE(1102)
							int tmp50 = tmp49;		HX_STACK_VAR(tmp50,"tmp50");
							HX_STACK_LINE(1102)
							bool tmp51 = tmp48->b->__get(tmp50);		HX_STACK_VAR(tmp51,"tmp51");
							HX_STACK_LINE(1102)
							bool tmp52 = tmp51;		HX_STACK_VAR(tmp52,"tmp52");
							HX_STACK_LINE(1102)
							::openfl::_internal::renderer::DrawCommandBuffer tmp53 = c->buffer;		HX_STACK_VAR(tmp53,"tmp53");
							HX_STACK_LINE(1102)
							int tmp54 = c->oPos;		HX_STACK_VAR(tmp54,"tmp54");
							HX_STACK_LINE(1102)
							int tmp55 = (tmp54 + (int)1);		HX_STACK_VAR(tmp55,"tmp55");
							HX_STACK_LINE(1102)
							Dynamic tmp56 = tmp53->o->__GetItem(tmp55);		HX_STACK_VAR(tmp56,"tmp56");
							HX_STACK_LINE(1102)
							Dynamic tmp57 = tmp56;		HX_STACK_VAR(tmp57,"tmp57");
							HX_STACK_LINE(1102)
							::openfl::_internal::renderer::DrawCommandBuffer tmp58 = c->buffer;		HX_STACK_VAR(tmp58,"tmp58");
							HX_STACK_LINE(1102)
							int tmp59 = c->oPos;		HX_STACK_VAR(tmp59,"tmp59");
							HX_STACK_LINE(1102)
							int tmp60 = (tmp59 + (int)2);		HX_STACK_VAR(tmp60,"tmp60");
							HX_STACK_LINE(1102)
							Dynamic tmp61 = tmp58->o->__GetItem(tmp60);		HX_STACK_VAR(tmp61,"tmp61");
							HX_STACK_LINE(1102)
							Dynamic tmp62 = tmp61;		HX_STACK_VAR(tmp62,"tmp62");
							HX_STACK_LINE(1102)
							::openfl::_internal::renderer::DrawCommandBuffer tmp63 = c->buffer;		HX_STACK_VAR(tmp63,"tmp63");
							HX_STACK_LINE(1102)
							int tmp64 = c->oPos;		HX_STACK_VAR(tmp64,"tmp64");
							HX_STACK_LINE(1102)
							int tmp65 = (tmp64 + (int)3);		HX_STACK_VAR(tmp65,"tmp65");
							HX_STACK_LINE(1102)
							Dynamic tmp66 = tmp63->o->__GetItem(tmp65);		HX_STACK_VAR(tmp66,"tmp66");
							HX_STACK_LINE(1102)
							Dynamic tmp67 = tmp66;		HX_STACK_VAR(tmp67,"tmp67");
							HX_STACK_LINE(1102)
							::openfl::_internal::renderer::DrawCommandBuffer tmp68 = c->buffer;		HX_STACK_VAR(tmp68,"tmp68");
							HX_STACK_LINE(1102)
							int tmp69 = c->fPos;		HX_STACK_VAR(tmp69,"tmp69");
							HX_STACK_LINE(1102)
							int tmp70 = (tmp69 + (int)1);		HX_STACK_VAR(tmp70,"tmp70");
							HX_STACK_LINE(1102)
							Float tmp71 = tmp68->f->__get(tmp70);		HX_STACK_VAR(tmp71,"tmp71");
							HX_STACK_LINE(1102)
							Float tmp72 = tmp71;		HX_STACK_VAR(tmp72,"tmp72");
							HX_STACK_LINE(1102)
							tmp32->lineStyle(tmp37,tmp42,tmp47,tmp52,tmp57,tmp62,tmp67,tmp72);
						}
						;break;
						case (int)0: case (int)1: case (int)2: {
							HX_STACK_LINE(1106)
							::openfl::_internal::renderer::cairo::CairoGraphics_obj::endFill();
							HX_STACK_LINE(1107)
							::openfl::_internal::renderer::cairo::CairoGraphics_obj::endStroke();
							HX_STACK_LINE(1109)
							bool tmp31 = (type == ::openfl::_internal::renderer::DrawCommandType_obj::BEGIN_BITMAP_FILL);		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(1109)
							if ((tmp31)){
								HX_STACK_LINE(1111)
								::openfl::_internal::renderer::DrawCommandReader tmp32;		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(1111)
								{
									HX_STACK_LINE(1111)
									{
										HX_STACK_LINE(1111)
										::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
										HX_STACK_LINE(1111)
										switch( (int)(_g2->__Index())){
											case (int)0: {
												HX_STACK_LINE(1111)
												hx::AddEq(data->oPos,(int)2);
												HX_STACK_LINE(1111)
												hx::AddEq(data->bPos,(int)2);
											}
											;break;
											case (int)1: {
												HX_STACK_LINE(1111)
												hx::AddEq(data->iPos,(int)1);
												HX_STACK_LINE(1111)
												hx::AddEq(data->fPos,(int)1);
											}
											;break;
											case (int)2: {
												HX_STACK_LINE(1111)
												hx::AddEq(data->oPos,(int)4);
												HX_STACK_LINE(1111)
												hx::AddEq(data->iiPos,(int)2);
												HX_STACK_LINE(1111)
												hx::AddEq(data->ffPos,(int)1);
												HX_STACK_LINE(1111)
												hx::AddEq(data->fPos,(int)1);
											}
											;break;
											case (int)3: {
												HX_STACK_LINE(1111)
												hx::AddEq(data->fPos,(int)6);
											}
											;break;
											case (int)4: {
												HX_STACK_LINE(1111)
												hx::AddEq(data->fPos,(int)4);
											}
											;break;
											case (int)5: {
												HX_STACK_LINE(1111)
												hx::AddEq(data->fPos,(int)3);
											}
											;break;
											case (int)6: {
												HX_STACK_LINE(1111)
												hx::AddEq(data->fPos,(int)4);
											}
											;break;
											case (int)7: {
												HX_STACK_LINE(1111)
												hx::AddEq(data->fPos,(int)4);
											}
											;break;
											case (int)8: {
												HX_STACK_LINE(1111)
												hx::AddEq(data->fPos,(int)5);
												HX_STACK_LINE(1111)
												hx::AddEq(data->oPos,(int)1);
											}
											;break;
											case (int)10: {
												HX_STACK_LINE(1111)
												hx::AddEq(data->oPos,(int)4);
											}
											;break;
											case (int)11: {
												HX_STACK_LINE(1111)
												Dynamic();
											}
											;break;
											case (int)12: {
												HX_STACK_LINE(1111)
												hx::AddEq(data->oPos,(int)2);
												HX_STACK_LINE(1111)
												hx::AddEq(data->bPos,(int)2);
											}
											;break;
											case (int)13: {
												HX_STACK_LINE(1111)
												hx::AddEq(data->oPos,(int)4);
												HX_STACK_LINE(1111)
												hx::AddEq(data->iiPos,(int)2);
												HX_STACK_LINE(1111)
												hx::AddEq(data->ffPos,(int)1);
												HX_STACK_LINE(1111)
												hx::AddEq(data->fPos,(int)1);
											}
											;break;
											case (int)14: {
												HX_STACK_LINE(1111)
												hx::AddEq(data->oPos,(int)4);
												HX_STACK_LINE(1111)
												hx::AddEq(data->iPos,(int)1);
												HX_STACK_LINE(1111)
												hx::AddEq(data->fPos,(int)2);
												HX_STACK_LINE(1111)
												hx::AddEq(data->bPos,(int)1);
											}
											;break;
											case (int)15: {
												HX_STACK_LINE(1111)
												hx::AddEq(data->fPos,(int)2);
											}
											;break;
											case (int)16: {
												HX_STACK_LINE(1111)
												hx::AddEq(data->fPos,(int)2);
											}
											;break;
											case (int)17: {
												HX_STACK_LINE(1111)
												hx::AddEq(data->oPos,(int)1);
											}
											;break;
											default: {
												HX_STACK_LINE(1111)
												Dynamic();
											}
										}
									}
									HX_STACK_LINE(1111)
									data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::BEGIN_BITMAP_FILL;
									HX_STACK_LINE(1111)
									tmp32 = data;
								}
								HX_STACK_LINE(1111)
								::openfl::_internal::renderer::DrawCommandReader c = tmp32;		HX_STACK_VAR(c,"c");
								HX_STACK_LINE(1112)
								::openfl::_internal::renderer::DrawCommandBuffer tmp33 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillCommands;		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(1112)
								::openfl::_internal::renderer::DrawCommandBuffer tmp34 = c->buffer;		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(1112)
								int tmp35 = c->oPos;		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(1112)
								int tmp36 = tmp35;		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(1112)
								Dynamic tmp37 = tmp34->o->__GetItem(tmp36);		HX_STACK_VAR(tmp37,"tmp37");
								HX_STACK_LINE(1112)
								::openfl::display::BitmapData tmp38 = ((::openfl::display::BitmapData)(tmp37));		HX_STACK_VAR(tmp38,"tmp38");
								HX_STACK_LINE(1112)
								::openfl::_internal::renderer::DrawCommandBuffer tmp39 = c->buffer;		HX_STACK_VAR(tmp39,"tmp39");
								HX_STACK_LINE(1112)
								int tmp40 = c->oPos;		HX_STACK_VAR(tmp40,"tmp40");
								HX_STACK_LINE(1112)
								int tmp41 = (tmp40 + (int)1);		HX_STACK_VAR(tmp41,"tmp41");
								HX_STACK_LINE(1112)
								Dynamic tmp42 = tmp39->o->__GetItem(tmp41);		HX_STACK_VAR(tmp42,"tmp42");
								HX_STACK_LINE(1112)
								::openfl::geom::Matrix tmp43 = ((::openfl::geom::Matrix)(tmp42));		HX_STACK_VAR(tmp43,"tmp43");
								HX_STACK_LINE(1112)
								::openfl::_internal::renderer::DrawCommandBuffer tmp44 = c->buffer;		HX_STACK_VAR(tmp44,"tmp44");
								HX_STACK_LINE(1112)
								int tmp45 = c->bPos;		HX_STACK_VAR(tmp45,"tmp45");
								HX_STACK_LINE(1112)
								int tmp46 = tmp45;		HX_STACK_VAR(tmp46,"tmp46");
								HX_STACK_LINE(1112)
								bool tmp47 = tmp44->b->__get(tmp46);		HX_STACK_VAR(tmp47,"tmp47");
								HX_STACK_LINE(1112)
								::openfl::_internal::renderer::DrawCommandBuffer tmp48 = c->buffer;		HX_STACK_VAR(tmp48,"tmp48");
								HX_STACK_LINE(1112)
								int tmp49 = c->bPos;		HX_STACK_VAR(tmp49,"tmp49");
								HX_STACK_LINE(1112)
								int tmp50 = (tmp49 + (int)1);		HX_STACK_VAR(tmp50,"tmp50");
								HX_STACK_LINE(1112)
								bool tmp51 = tmp48->b->__get(tmp50);		HX_STACK_VAR(tmp51,"tmp51");
								HX_STACK_LINE(1112)
								tmp33->beginBitmapFill(tmp38,tmp43,tmp47,tmp51);
								HX_STACK_LINE(1113)
								::openfl::_internal::renderer::DrawCommandBuffer tmp52 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokeCommands;		HX_STACK_VAR(tmp52,"tmp52");
								HX_STACK_LINE(1113)
								::openfl::_internal::renderer::DrawCommandBuffer tmp53 = c->buffer;		HX_STACK_VAR(tmp53,"tmp53");
								HX_STACK_LINE(1113)
								int tmp54 = c->oPos;		HX_STACK_VAR(tmp54,"tmp54");
								HX_STACK_LINE(1113)
								int tmp55 = tmp54;		HX_STACK_VAR(tmp55,"tmp55");
								HX_STACK_LINE(1113)
								Dynamic tmp56 = tmp53->o->__GetItem(tmp55);		HX_STACK_VAR(tmp56,"tmp56");
								HX_STACK_LINE(1113)
								::openfl::display::BitmapData tmp57 = ((::openfl::display::BitmapData)(tmp56));		HX_STACK_VAR(tmp57,"tmp57");
								HX_STACK_LINE(1113)
								::openfl::_internal::renderer::DrawCommandBuffer tmp58 = c->buffer;		HX_STACK_VAR(tmp58,"tmp58");
								HX_STACK_LINE(1113)
								int tmp59 = c->oPos;		HX_STACK_VAR(tmp59,"tmp59");
								HX_STACK_LINE(1113)
								int tmp60 = (tmp59 + (int)1);		HX_STACK_VAR(tmp60,"tmp60");
								HX_STACK_LINE(1113)
								Dynamic tmp61 = tmp58->o->__GetItem(tmp60);		HX_STACK_VAR(tmp61,"tmp61");
								HX_STACK_LINE(1113)
								::openfl::geom::Matrix tmp62 = ((::openfl::geom::Matrix)(tmp61));		HX_STACK_VAR(tmp62,"tmp62");
								HX_STACK_LINE(1113)
								::openfl::_internal::renderer::DrawCommandBuffer tmp63 = c->buffer;		HX_STACK_VAR(tmp63,"tmp63");
								HX_STACK_LINE(1113)
								int tmp64 = c->bPos;		HX_STACK_VAR(tmp64,"tmp64");
								HX_STACK_LINE(1113)
								int tmp65 = tmp64;		HX_STACK_VAR(tmp65,"tmp65");
								HX_STACK_LINE(1113)
								bool tmp66 = tmp63->b->__get(tmp65);		HX_STACK_VAR(tmp66,"tmp66");
								HX_STACK_LINE(1113)
								::openfl::_internal::renderer::DrawCommandBuffer tmp67 = c->buffer;		HX_STACK_VAR(tmp67,"tmp67");
								HX_STACK_LINE(1113)
								int tmp68 = c->bPos;		HX_STACK_VAR(tmp68,"tmp68");
								HX_STACK_LINE(1113)
								int tmp69 = (tmp68 + (int)1);		HX_STACK_VAR(tmp69,"tmp69");
								HX_STACK_LINE(1113)
								bool tmp70 = tmp67->b->__get(tmp69);		HX_STACK_VAR(tmp70,"tmp70");
								HX_STACK_LINE(1113)
								tmp52->beginBitmapFill(tmp57,tmp62,tmp66,tmp70);
							}
							else{
								HX_STACK_LINE(1115)
								bool tmp32 = (type == ::openfl::_internal::renderer::DrawCommandType_obj::BEGIN_GRADIENT_FILL);		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(1115)
								if ((tmp32)){
									HX_STACK_LINE(1117)
									::openfl::_internal::renderer::DrawCommandReader tmp33;		HX_STACK_VAR(tmp33,"tmp33");
									HX_STACK_LINE(1117)
									{
										HX_STACK_LINE(1117)
										{
											HX_STACK_LINE(1117)
											::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
											HX_STACK_LINE(1117)
											switch( (int)(_g2->__Index())){
												case (int)0: {
													HX_STACK_LINE(1117)
													hx::AddEq(data->oPos,(int)2);
													HX_STACK_LINE(1117)
													hx::AddEq(data->bPos,(int)2);
												}
												;break;
												case (int)1: {
													HX_STACK_LINE(1117)
													hx::AddEq(data->iPos,(int)1);
													HX_STACK_LINE(1117)
													hx::AddEq(data->fPos,(int)1);
												}
												;break;
												case (int)2: {
													HX_STACK_LINE(1117)
													hx::AddEq(data->oPos,(int)4);
													HX_STACK_LINE(1117)
													hx::AddEq(data->iiPos,(int)2);
													HX_STACK_LINE(1117)
													hx::AddEq(data->ffPos,(int)1);
													HX_STACK_LINE(1117)
													hx::AddEq(data->fPos,(int)1);
												}
												;break;
												case (int)3: {
													HX_STACK_LINE(1117)
													hx::AddEq(data->fPos,(int)6);
												}
												;break;
												case (int)4: {
													HX_STACK_LINE(1117)
													hx::AddEq(data->fPos,(int)4);
												}
												;break;
												case (int)5: {
													HX_STACK_LINE(1117)
													hx::AddEq(data->fPos,(int)3);
												}
												;break;
												case (int)6: {
													HX_STACK_LINE(1117)
													hx::AddEq(data->fPos,(int)4);
												}
												;break;
												case (int)7: {
													HX_STACK_LINE(1117)
													hx::AddEq(data->fPos,(int)4);
												}
												;break;
												case (int)8: {
													HX_STACK_LINE(1117)
													hx::AddEq(data->fPos,(int)5);
													HX_STACK_LINE(1117)
													hx::AddEq(data->oPos,(int)1);
												}
												;break;
												case (int)10: {
													HX_STACK_LINE(1117)
													hx::AddEq(data->oPos,(int)4);
												}
												;break;
												case (int)11: {
													HX_STACK_LINE(1117)
													Dynamic();
												}
												;break;
												case (int)12: {
													HX_STACK_LINE(1117)
													hx::AddEq(data->oPos,(int)2);
													HX_STACK_LINE(1117)
													hx::AddEq(data->bPos,(int)2);
												}
												;break;
												case (int)13: {
													HX_STACK_LINE(1117)
													hx::AddEq(data->oPos,(int)4);
													HX_STACK_LINE(1117)
													hx::AddEq(data->iiPos,(int)2);
													HX_STACK_LINE(1117)
													hx::AddEq(data->ffPos,(int)1);
													HX_STACK_LINE(1117)
													hx::AddEq(data->fPos,(int)1);
												}
												;break;
												case (int)14: {
													HX_STACK_LINE(1117)
													hx::AddEq(data->oPos,(int)4);
													HX_STACK_LINE(1117)
													hx::AddEq(data->iPos,(int)1);
													HX_STACK_LINE(1117)
													hx::AddEq(data->fPos,(int)2);
													HX_STACK_LINE(1117)
													hx::AddEq(data->bPos,(int)1);
												}
												;break;
												case (int)15: {
													HX_STACK_LINE(1117)
													hx::AddEq(data->fPos,(int)2);
												}
												;break;
												case (int)16: {
													HX_STACK_LINE(1117)
													hx::AddEq(data->fPos,(int)2);
												}
												;break;
												case (int)17: {
													HX_STACK_LINE(1117)
													hx::AddEq(data->oPos,(int)1);
												}
												;break;
												default: {
													HX_STACK_LINE(1117)
													Dynamic();
												}
											}
										}
										HX_STACK_LINE(1117)
										data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::BEGIN_GRADIENT_FILL;
										HX_STACK_LINE(1117)
										tmp33 = data;
									}
									HX_STACK_LINE(1117)
									::openfl::_internal::renderer::DrawCommandReader c = tmp33;		HX_STACK_VAR(c,"c");
									HX_STACK_LINE(1118)
									::openfl::_internal::renderer::DrawCommandBuffer tmp34 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillCommands;		HX_STACK_VAR(tmp34,"tmp34");
									HX_STACK_LINE(1118)
									::openfl::_internal::renderer::DrawCommandBuffer tmp35 = c->buffer;		HX_STACK_VAR(tmp35,"tmp35");
									HX_STACK_LINE(1118)
									int tmp36 = c->oPos;		HX_STACK_VAR(tmp36,"tmp36");
									HX_STACK_LINE(1118)
									int tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
									HX_STACK_LINE(1118)
									Dynamic tmp38 = tmp35->o->__GetItem(tmp37);		HX_STACK_VAR(tmp38,"tmp38");
									HX_STACK_LINE(1118)
									Dynamic tmp39 = tmp38;		HX_STACK_VAR(tmp39,"tmp39");
									HX_STACK_LINE(1118)
									::openfl::_internal::renderer::DrawCommandBuffer tmp40 = c->buffer;		HX_STACK_VAR(tmp40,"tmp40");
									HX_STACK_LINE(1118)
									int tmp41 = c->iiPos;		HX_STACK_VAR(tmp41,"tmp41");
									HX_STACK_LINE(1118)
									int tmp42 = tmp41;		HX_STACK_VAR(tmp42,"tmp42");
									HX_STACK_LINE(1118)
									::openfl::_internal::renderer::DrawCommandBuffer tmp43 = c->buffer;		HX_STACK_VAR(tmp43,"tmp43");
									HX_STACK_LINE(1118)
									int tmp44 = c->ffPos;		HX_STACK_VAR(tmp44,"tmp44");
									HX_STACK_LINE(1118)
									int tmp45 = tmp44;		HX_STACK_VAR(tmp45,"tmp45");
									HX_STACK_LINE(1118)
									::openfl::_internal::renderer::DrawCommandBuffer tmp46 = c->buffer;		HX_STACK_VAR(tmp46,"tmp46");
									HX_STACK_LINE(1118)
									int tmp47 = c->iiPos;		HX_STACK_VAR(tmp47,"tmp47");
									HX_STACK_LINE(1118)
									int tmp48 = (tmp47 + (int)1);		HX_STACK_VAR(tmp48,"tmp48");
									HX_STACK_LINE(1118)
									::openfl::_internal::renderer::DrawCommandBuffer tmp49 = c->buffer;		HX_STACK_VAR(tmp49,"tmp49");
									HX_STACK_LINE(1118)
									int tmp50 = c->oPos;		HX_STACK_VAR(tmp50,"tmp50");
									HX_STACK_LINE(1118)
									int tmp51 = (tmp50 + (int)1);		HX_STACK_VAR(tmp51,"tmp51");
									HX_STACK_LINE(1118)
									Dynamic tmp52 = tmp49->o->__GetItem(tmp51);		HX_STACK_VAR(tmp52,"tmp52");
									HX_STACK_LINE(1118)
									::openfl::geom::Matrix tmp53 = ((::openfl::geom::Matrix)(tmp52));		HX_STACK_VAR(tmp53,"tmp53");
									HX_STACK_LINE(1118)
									::openfl::_internal::renderer::DrawCommandBuffer tmp54 = c->buffer;		HX_STACK_VAR(tmp54,"tmp54");
									HX_STACK_LINE(1118)
									int tmp55 = c->oPos;		HX_STACK_VAR(tmp55,"tmp55");
									HX_STACK_LINE(1118)
									int tmp56 = (tmp55 + (int)2);		HX_STACK_VAR(tmp56,"tmp56");
									HX_STACK_LINE(1118)
									Dynamic tmp57 = tmp54->o->__GetItem(tmp56);		HX_STACK_VAR(tmp57,"tmp57");
									HX_STACK_LINE(1118)
									Dynamic tmp58 = tmp57;		HX_STACK_VAR(tmp58,"tmp58");
									HX_STACK_LINE(1118)
									::openfl::_internal::renderer::DrawCommandBuffer tmp59 = c->buffer;		HX_STACK_VAR(tmp59,"tmp59");
									HX_STACK_LINE(1118)
									int tmp60 = c->oPos;		HX_STACK_VAR(tmp60,"tmp60");
									HX_STACK_LINE(1118)
									int tmp61 = (tmp60 + (int)3);		HX_STACK_VAR(tmp61,"tmp61");
									HX_STACK_LINE(1118)
									Dynamic tmp62 = tmp59->o->__GetItem(tmp61);		HX_STACK_VAR(tmp62,"tmp62");
									HX_STACK_LINE(1118)
									Dynamic tmp63 = tmp62;		HX_STACK_VAR(tmp63,"tmp63");
									HX_STACK_LINE(1118)
									::openfl::_internal::renderer::DrawCommandBuffer tmp64 = c->buffer;		HX_STACK_VAR(tmp64,"tmp64");
									HX_STACK_LINE(1118)
									int tmp65 = c->fPos;		HX_STACK_VAR(tmp65,"tmp65");
									HX_STACK_LINE(1118)
									int tmp66 = tmp65;		HX_STACK_VAR(tmp66,"tmp66");
									HX_STACK_LINE(1118)
									Float tmp67 = tmp64->f->__get(tmp66);		HX_STACK_VAR(tmp67,"tmp67");
									HX_STACK_LINE(1118)
									Float tmp68 = tmp67;		HX_STACK_VAR(tmp68,"tmp68");
									HX_STACK_LINE(1118)
									tmp34->beginGradientFill(tmp39,tmp40->ii->__get(tmp42).StaticCast< Array< int > >(),tmp43->ff->__get(tmp45).StaticCast< Array< Float > >(),tmp46->ii->__get(tmp48).StaticCast< Array< int > >(),tmp53,tmp58,tmp63,tmp68);
									HX_STACK_LINE(1119)
									::openfl::_internal::renderer::DrawCommandBuffer tmp69 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokeCommands;		HX_STACK_VAR(tmp69,"tmp69");
									HX_STACK_LINE(1119)
									::openfl::_internal::renderer::DrawCommandBuffer tmp70 = c->buffer;		HX_STACK_VAR(tmp70,"tmp70");
									HX_STACK_LINE(1119)
									int tmp71 = c->oPos;		HX_STACK_VAR(tmp71,"tmp71");
									HX_STACK_LINE(1119)
									int tmp72 = tmp71;		HX_STACK_VAR(tmp72,"tmp72");
									HX_STACK_LINE(1119)
									Dynamic tmp73 = tmp70->o->__GetItem(tmp72);		HX_STACK_VAR(tmp73,"tmp73");
									HX_STACK_LINE(1119)
									Dynamic tmp74 = tmp73;		HX_STACK_VAR(tmp74,"tmp74");
									HX_STACK_LINE(1119)
									::openfl::_internal::renderer::DrawCommandBuffer tmp75 = c->buffer;		HX_STACK_VAR(tmp75,"tmp75");
									HX_STACK_LINE(1119)
									int tmp76 = c->iiPos;		HX_STACK_VAR(tmp76,"tmp76");
									HX_STACK_LINE(1119)
									int tmp77 = tmp76;		HX_STACK_VAR(tmp77,"tmp77");
									HX_STACK_LINE(1119)
									::openfl::_internal::renderer::DrawCommandBuffer tmp78 = c->buffer;		HX_STACK_VAR(tmp78,"tmp78");
									HX_STACK_LINE(1119)
									int tmp79 = c->ffPos;		HX_STACK_VAR(tmp79,"tmp79");
									HX_STACK_LINE(1119)
									int tmp80 = tmp79;		HX_STACK_VAR(tmp80,"tmp80");
									HX_STACK_LINE(1119)
									::openfl::_internal::renderer::DrawCommandBuffer tmp81 = c->buffer;		HX_STACK_VAR(tmp81,"tmp81");
									HX_STACK_LINE(1119)
									int tmp82 = c->iiPos;		HX_STACK_VAR(tmp82,"tmp82");
									HX_STACK_LINE(1119)
									int tmp83 = (tmp82 + (int)1);		HX_STACK_VAR(tmp83,"tmp83");
									HX_STACK_LINE(1119)
									::openfl::_internal::renderer::DrawCommandBuffer tmp84 = c->buffer;		HX_STACK_VAR(tmp84,"tmp84");
									HX_STACK_LINE(1119)
									int tmp85 = c->oPos;		HX_STACK_VAR(tmp85,"tmp85");
									HX_STACK_LINE(1119)
									int tmp86 = (tmp85 + (int)1);		HX_STACK_VAR(tmp86,"tmp86");
									HX_STACK_LINE(1119)
									Dynamic tmp87 = tmp84->o->__GetItem(tmp86);		HX_STACK_VAR(tmp87,"tmp87");
									HX_STACK_LINE(1119)
									::openfl::geom::Matrix tmp88 = ((::openfl::geom::Matrix)(tmp87));		HX_STACK_VAR(tmp88,"tmp88");
									HX_STACK_LINE(1119)
									::openfl::_internal::renderer::DrawCommandBuffer tmp89 = c->buffer;		HX_STACK_VAR(tmp89,"tmp89");
									HX_STACK_LINE(1119)
									int tmp90 = c->oPos;		HX_STACK_VAR(tmp90,"tmp90");
									HX_STACK_LINE(1119)
									int tmp91 = (tmp90 + (int)2);		HX_STACK_VAR(tmp91,"tmp91");
									HX_STACK_LINE(1119)
									Dynamic tmp92 = tmp89->o->__GetItem(tmp91);		HX_STACK_VAR(tmp92,"tmp92");
									HX_STACK_LINE(1119)
									Dynamic tmp93 = tmp92;		HX_STACK_VAR(tmp93,"tmp93");
									HX_STACK_LINE(1119)
									::openfl::_internal::renderer::DrawCommandBuffer tmp94 = c->buffer;		HX_STACK_VAR(tmp94,"tmp94");
									HX_STACK_LINE(1119)
									int tmp95 = c->oPos;		HX_STACK_VAR(tmp95,"tmp95");
									HX_STACK_LINE(1119)
									int tmp96 = (tmp95 + (int)3);		HX_STACK_VAR(tmp96,"tmp96");
									HX_STACK_LINE(1119)
									Dynamic tmp97 = tmp94->o->__GetItem(tmp96);		HX_STACK_VAR(tmp97,"tmp97");
									HX_STACK_LINE(1119)
									Dynamic tmp98 = tmp97;		HX_STACK_VAR(tmp98,"tmp98");
									HX_STACK_LINE(1119)
									::openfl::_internal::renderer::DrawCommandBuffer tmp99 = c->buffer;		HX_STACK_VAR(tmp99,"tmp99");
									HX_STACK_LINE(1119)
									int tmp100 = c->fPos;		HX_STACK_VAR(tmp100,"tmp100");
									HX_STACK_LINE(1119)
									int tmp101 = tmp100;		HX_STACK_VAR(tmp101,"tmp101");
									HX_STACK_LINE(1119)
									Float tmp102 = tmp99->f->__get(tmp101);		HX_STACK_VAR(tmp102,"tmp102");
									HX_STACK_LINE(1119)
									Float tmp103 = tmp102;		HX_STACK_VAR(tmp103,"tmp103");
									HX_STACK_LINE(1119)
									tmp69->beginGradientFill(tmp74,tmp75->ii->__get(tmp77).StaticCast< Array< int > >(),tmp78->ff->__get(tmp80).StaticCast< Array< Float > >(),tmp81->ii->__get(tmp83).StaticCast< Array< int > >(),tmp88,tmp93,tmp98,tmp103);
								}
								else{
									HX_STACK_LINE(1123)
									::openfl::_internal::renderer::DrawCommandReader tmp33;		HX_STACK_VAR(tmp33,"tmp33");
									HX_STACK_LINE(1123)
									{
										HX_STACK_LINE(1123)
										{
											HX_STACK_LINE(1123)
											::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
											HX_STACK_LINE(1123)
											switch( (int)(_g2->__Index())){
												case (int)0: {
													HX_STACK_LINE(1123)
													hx::AddEq(data->oPos,(int)2);
													HX_STACK_LINE(1123)
													hx::AddEq(data->bPos,(int)2);
												}
												;break;
												case (int)1: {
													HX_STACK_LINE(1123)
													hx::AddEq(data->iPos,(int)1);
													HX_STACK_LINE(1123)
													hx::AddEq(data->fPos,(int)1);
												}
												;break;
												case (int)2: {
													HX_STACK_LINE(1123)
													hx::AddEq(data->oPos,(int)4);
													HX_STACK_LINE(1123)
													hx::AddEq(data->iiPos,(int)2);
													HX_STACK_LINE(1123)
													hx::AddEq(data->ffPos,(int)1);
													HX_STACK_LINE(1123)
													hx::AddEq(data->fPos,(int)1);
												}
												;break;
												case (int)3: {
													HX_STACK_LINE(1123)
													hx::AddEq(data->fPos,(int)6);
												}
												;break;
												case (int)4: {
													HX_STACK_LINE(1123)
													hx::AddEq(data->fPos,(int)4);
												}
												;break;
												case (int)5: {
													HX_STACK_LINE(1123)
													hx::AddEq(data->fPos,(int)3);
												}
												;break;
												case (int)6: {
													HX_STACK_LINE(1123)
													hx::AddEq(data->fPos,(int)4);
												}
												;break;
												case (int)7: {
													HX_STACK_LINE(1123)
													hx::AddEq(data->fPos,(int)4);
												}
												;break;
												case (int)8: {
													HX_STACK_LINE(1123)
													hx::AddEq(data->fPos,(int)5);
													HX_STACK_LINE(1123)
													hx::AddEq(data->oPos,(int)1);
												}
												;break;
												case (int)10: {
													HX_STACK_LINE(1123)
													hx::AddEq(data->oPos,(int)4);
												}
												;break;
												case (int)11: {
													HX_STACK_LINE(1123)
													Dynamic();
												}
												;break;
												case (int)12: {
													HX_STACK_LINE(1123)
													hx::AddEq(data->oPos,(int)2);
													HX_STACK_LINE(1123)
													hx::AddEq(data->bPos,(int)2);
												}
												;break;
												case (int)13: {
													HX_STACK_LINE(1123)
													hx::AddEq(data->oPos,(int)4);
													HX_STACK_LINE(1123)
													hx::AddEq(data->iiPos,(int)2);
													HX_STACK_LINE(1123)
													hx::AddEq(data->ffPos,(int)1);
													HX_STACK_LINE(1123)
													hx::AddEq(data->fPos,(int)1);
												}
												;break;
												case (int)14: {
													HX_STACK_LINE(1123)
													hx::AddEq(data->oPos,(int)4);
													HX_STACK_LINE(1123)
													hx::AddEq(data->iPos,(int)1);
													HX_STACK_LINE(1123)
													hx::AddEq(data->fPos,(int)2);
													HX_STACK_LINE(1123)
													hx::AddEq(data->bPos,(int)1);
												}
												;break;
												case (int)15: {
													HX_STACK_LINE(1123)
													hx::AddEq(data->fPos,(int)2);
												}
												;break;
												case (int)16: {
													HX_STACK_LINE(1123)
													hx::AddEq(data->fPos,(int)2);
												}
												;break;
												case (int)17: {
													HX_STACK_LINE(1123)
													hx::AddEq(data->oPos,(int)1);
												}
												;break;
												default: {
													HX_STACK_LINE(1123)
													Dynamic();
												}
											}
										}
										HX_STACK_LINE(1123)
										data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::BEGIN_FILL;
										HX_STACK_LINE(1123)
										tmp33 = data;
									}
									HX_STACK_LINE(1123)
									::openfl::_internal::renderer::DrawCommandReader c = tmp33;		HX_STACK_VAR(c,"c");
									HX_STACK_LINE(1124)
									::openfl::_internal::renderer::DrawCommandBuffer tmp34 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillCommands;		HX_STACK_VAR(tmp34,"tmp34");
									HX_STACK_LINE(1124)
									::openfl::_internal::renderer::DrawCommandBuffer tmp35 = c->buffer;		HX_STACK_VAR(tmp35,"tmp35");
									HX_STACK_LINE(1124)
									int tmp36 = c->iPos;		HX_STACK_VAR(tmp36,"tmp36");
									HX_STACK_LINE(1124)
									int tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
									HX_STACK_LINE(1124)
									int tmp38 = tmp35->i->__get(tmp37);		HX_STACK_VAR(tmp38,"tmp38");
									HX_STACK_LINE(1124)
									::openfl::_internal::renderer::DrawCommandBuffer tmp39 = c->buffer;		HX_STACK_VAR(tmp39,"tmp39");
									HX_STACK_LINE(1124)
									int tmp40 = c->fPos;		HX_STACK_VAR(tmp40,"tmp40");
									HX_STACK_LINE(1124)
									int tmp41 = tmp40;		HX_STACK_VAR(tmp41,"tmp41");
									HX_STACK_LINE(1124)
									Float tmp42 = tmp39->f->__get(tmp41);		HX_STACK_VAR(tmp42,"tmp42");
									HX_STACK_LINE(1124)
									tmp34->beginFill(tmp38,tmp42);
									HX_STACK_LINE(1125)
									::openfl::_internal::renderer::DrawCommandBuffer tmp43 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokeCommands;		HX_STACK_VAR(tmp43,"tmp43");
									HX_STACK_LINE(1125)
									::openfl::_internal::renderer::DrawCommandBuffer tmp44 = c->buffer;		HX_STACK_VAR(tmp44,"tmp44");
									HX_STACK_LINE(1125)
									int tmp45 = c->iPos;		HX_STACK_VAR(tmp45,"tmp45");
									HX_STACK_LINE(1125)
									int tmp46 = tmp45;		HX_STACK_VAR(tmp46,"tmp46");
									HX_STACK_LINE(1125)
									int tmp47 = tmp44->i->__get(tmp46);		HX_STACK_VAR(tmp47,"tmp47");
									HX_STACK_LINE(1125)
									::openfl::_internal::renderer::DrawCommandBuffer tmp48 = c->buffer;		HX_STACK_VAR(tmp48,"tmp48");
									HX_STACK_LINE(1125)
									int tmp49 = c->fPos;		HX_STACK_VAR(tmp49,"tmp49");
									HX_STACK_LINE(1125)
									int tmp50 = tmp49;		HX_STACK_VAR(tmp50,"tmp50");
									HX_STACK_LINE(1125)
									Float tmp51 = tmp48->f->__get(tmp50);		HX_STACK_VAR(tmp51,"tmp51");
									HX_STACK_LINE(1125)
									tmp43->beginFill(tmp47,tmp51);
								}
							}
						}
						;break;
						case (int)5: {
							HX_STACK_LINE(1131)
							::openfl::_internal::renderer::DrawCommandReader tmp31;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(1131)
							{
								HX_STACK_LINE(1131)
								{
									HX_STACK_LINE(1131)
									::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
									HX_STACK_LINE(1131)
									switch( (int)(_g2->__Index())){
										case (int)0: {
											HX_STACK_LINE(1131)
											hx::AddEq(data->oPos,(int)2);
											HX_STACK_LINE(1131)
											hx::AddEq(data->bPos,(int)2);
										}
										;break;
										case (int)1: {
											HX_STACK_LINE(1131)
											hx::AddEq(data->iPos,(int)1);
											HX_STACK_LINE(1131)
											hx::AddEq(data->fPos,(int)1);
										}
										;break;
										case (int)2: {
											HX_STACK_LINE(1131)
											hx::AddEq(data->oPos,(int)4);
											HX_STACK_LINE(1131)
											hx::AddEq(data->iiPos,(int)2);
											HX_STACK_LINE(1131)
											hx::AddEq(data->ffPos,(int)1);
											HX_STACK_LINE(1131)
											hx::AddEq(data->fPos,(int)1);
										}
										;break;
										case (int)3: {
											HX_STACK_LINE(1131)
											hx::AddEq(data->fPos,(int)6);
										}
										;break;
										case (int)4: {
											HX_STACK_LINE(1131)
											hx::AddEq(data->fPos,(int)4);
										}
										;break;
										case (int)5: {
											HX_STACK_LINE(1131)
											hx::AddEq(data->fPos,(int)3);
										}
										;break;
										case (int)6: {
											HX_STACK_LINE(1131)
											hx::AddEq(data->fPos,(int)4);
										}
										;break;
										case (int)7: {
											HX_STACK_LINE(1131)
											hx::AddEq(data->fPos,(int)4);
										}
										;break;
										case (int)8: {
											HX_STACK_LINE(1131)
											hx::AddEq(data->fPos,(int)5);
											HX_STACK_LINE(1131)
											hx::AddEq(data->oPos,(int)1);
										}
										;break;
										case (int)10: {
											HX_STACK_LINE(1131)
											hx::AddEq(data->oPos,(int)4);
										}
										;break;
										case (int)11: {
											HX_STACK_LINE(1131)
											Dynamic();
										}
										;break;
										case (int)12: {
											HX_STACK_LINE(1131)
											hx::AddEq(data->oPos,(int)2);
											HX_STACK_LINE(1131)
											hx::AddEq(data->bPos,(int)2);
										}
										;break;
										case (int)13: {
											HX_STACK_LINE(1131)
											hx::AddEq(data->oPos,(int)4);
											HX_STACK_LINE(1131)
											hx::AddEq(data->iiPos,(int)2);
											HX_STACK_LINE(1131)
											hx::AddEq(data->ffPos,(int)1);
											HX_STACK_LINE(1131)
											hx::AddEq(data->fPos,(int)1);
										}
										;break;
										case (int)14: {
											HX_STACK_LINE(1131)
											hx::AddEq(data->oPos,(int)4);
											HX_STACK_LINE(1131)
											hx::AddEq(data->iPos,(int)1);
											HX_STACK_LINE(1131)
											hx::AddEq(data->fPos,(int)2);
											HX_STACK_LINE(1131)
											hx::AddEq(data->bPos,(int)1);
										}
										;break;
										case (int)15: {
											HX_STACK_LINE(1131)
											hx::AddEq(data->fPos,(int)2);
										}
										;break;
										case (int)16: {
											HX_STACK_LINE(1131)
											hx::AddEq(data->fPos,(int)2);
										}
										;break;
										case (int)17: {
											HX_STACK_LINE(1131)
											hx::AddEq(data->oPos,(int)1);
										}
										;break;
										default: {
											HX_STACK_LINE(1131)
											Dynamic();
										}
									}
								}
								HX_STACK_LINE(1131)
								data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::DRAW_CIRCLE;
								HX_STACK_LINE(1131)
								tmp31 = data;
							}
							HX_STACK_LINE(1131)
							::openfl::_internal::renderer::DrawCommandReader c = tmp31;		HX_STACK_VAR(c,"c");
							HX_STACK_LINE(1132)
							::openfl::_internal::renderer::DrawCommandBuffer tmp32 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillCommands;		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(1132)
							::openfl::_internal::renderer::DrawCommandBuffer tmp33 = c->buffer;		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(1132)
							int tmp34 = c->fPos;		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(1132)
							int tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(1132)
							Float tmp36 = tmp33->f->__get(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(1132)
							::openfl::_internal::renderer::DrawCommandBuffer tmp37 = c->buffer;		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(1132)
							int tmp38 = c->fPos;		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(1132)
							int tmp39 = (tmp38 + (int)1);		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(1132)
							Float tmp40 = tmp37->f->__get(tmp39);		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(1132)
							::openfl::_internal::renderer::DrawCommandBuffer tmp41 = c->buffer;		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(1132)
							int tmp42 = c->fPos;		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(1132)
							int tmp43 = (tmp42 + (int)2);		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(1132)
							Float tmp44 = tmp41->f->__get(tmp43);		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(1132)
							tmp32->drawCircle(tmp36,tmp40,tmp44);
							HX_STACK_LINE(1133)
							::openfl::_internal::renderer::DrawCommandBuffer tmp45 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokeCommands;		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(1133)
							::openfl::_internal::renderer::DrawCommandBuffer tmp46 = c->buffer;		HX_STACK_VAR(tmp46,"tmp46");
							HX_STACK_LINE(1133)
							int tmp47 = c->fPos;		HX_STACK_VAR(tmp47,"tmp47");
							HX_STACK_LINE(1133)
							int tmp48 = tmp47;		HX_STACK_VAR(tmp48,"tmp48");
							HX_STACK_LINE(1133)
							Float tmp49 = tmp46->f->__get(tmp48);		HX_STACK_VAR(tmp49,"tmp49");
							HX_STACK_LINE(1133)
							::openfl::_internal::renderer::DrawCommandBuffer tmp50 = c->buffer;		HX_STACK_VAR(tmp50,"tmp50");
							HX_STACK_LINE(1133)
							int tmp51 = c->fPos;		HX_STACK_VAR(tmp51,"tmp51");
							HX_STACK_LINE(1133)
							int tmp52 = (tmp51 + (int)1);		HX_STACK_VAR(tmp52,"tmp52");
							HX_STACK_LINE(1133)
							Float tmp53 = tmp50->f->__get(tmp52);		HX_STACK_VAR(tmp53,"tmp53");
							HX_STACK_LINE(1133)
							::openfl::_internal::renderer::DrawCommandBuffer tmp54 = c->buffer;		HX_STACK_VAR(tmp54,"tmp54");
							HX_STACK_LINE(1133)
							int tmp55 = c->fPos;		HX_STACK_VAR(tmp55,"tmp55");
							HX_STACK_LINE(1133)
							int tmp56 = (tmp55 + (int)2);		HX_STACK_VAR(tmp56,"tmp56");
							HX_STACK_LINE(1133)
							Float tmp57 = tmp54->f->__get(tmp56);		HX_STACK_VAR(tmp57,"tmp57");
							HX_STACK_LINE(1133)
							tmp45->drawCircle(tmp49,tmp53,tmp57);
						}
						;break;
						case (int)6: {
							HX_STACK_LINE(1137)
							::openfl::_internal::renderer::DrawCommandReader tmp31;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(1137)
							{
								HX_STACK_LINE(1137)
								{
									HX_STACK_LINE(1137)
									::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
									HX_STACK_LINE(1137)
									switch( (int)(_g2->__Index())){
										case (int)0: {
											HX_STACK_LINE(1137)
											hx::AddEq(data->oPos,(int)2);
											HX_STACK_LINE(1137)
											hx::AddEq(data->bPos,(int)2);
										}
										;break;
										case (int)1: {
											HX_STACK_LINE(1137)
											hx::AddEq(data->iPos,(int)1);
											HX_STACK_LINE(1137)
											hx::AddEq(data->fPos,(int)1);
										}
										;break;
										case (int)2: {
											HX_STACK_LINE(1137)
											hx::AddEq(data->oPos,(int)4);
											HX_STACK_LINE(1137)
											hx::AddEq(data->iiPos,(int)2);
											HX_STACK_LINE(1137)
											hx::AddEq(data->ffPos,(int)1);
											HX_STACK_LINE(1137)
											hx::AddEq(data->fPos,(int)1);
										}
										;break;
										case (int)3: {
											HX_STACK_LINE(1137)
											hx::AddEq(data->fPos,(int)6);
										}
										;break;
										case (int)4: {
											HX_STACK_LINE(1137)
											hx::AddEq(data->fPos,(int)4);
										}
										;break;
										case (int)5: {
											HX_STACK_LINE(1137)
											hx::AddEq(data->fPos,(int)3);
										}
										;break;
										case (int)6: {
											HX_STACK_LINE(1137)
											hx::AddEq(data->fPos,(int)4);
										}
										;break;
										case (int)7: {
											HX_STACK_LINE(1137)
											hx::AddEq(data->fPos,(int)4);
										}
										;break;
										case (int)8: {
											HX_STACK_LINE(1137)
											hx::AddEq(data->fPos,(int)5);
											HX_STACK_LINE(1137)
											hx::AddEq(data->oPos,(int)1);
										}
										;break;
										case (int)10: {
											HX_STACK_LINE(1137)
											hx::AddEq(data->oPos,(int)4);
										}
										;break;
										case (int)11: {
											HX_STACK_LINE(1137)
											Dynamic();
										}
										;break;
										case (int)12: {
											HX_STACK_LINE(1137)
											hx::AddEq(data->oPos,(int)2);
											HX_STACK_LINE(1137)
											hx::AddEq(data->bPos,(int)2);
										}
										;break;
										case (int)13: {
											HX_STACK_LINE(1137)
											hx::AddEq(data->oPos,(int)4);
											HX_STACK_LINE(1137)
											hx::AddEq(data->iiPos,(int)2);
											HX_STACK_LINE(1137)
											hx::AddEq(data->ffPos,(int)1);
											HX_STACK_LINE(1137)
											hx::AddEq(data->fPos,(int)1);
										}
										;break;
										case (int)14: {
											HX_STACK_LINE(1137)
											hx::AddEq(data->oPos,(int)4);
											HX_STACK_LINE(1137)
											hx::AddEq(data->iPos,(int)1);
											HX_STACK_LINE(1137)
											hx::AddEq(data->fPos,(int)2);
											HX_STACK_LINE(1137)
											hx::AddEq(data->bPos,(int)1);
										}
										;break;
										case (int)15: {
											HX_STACK_LINE(1137)
											hx::AddEq(data->fPos,(int)2);
										}
										;break;
										case (int)16: {
											HX_STACK_LINE(1137)
											hx::AddEq(data->fPos,(int)2);
										}
										;break;
										case (int)17: {
											HX_STACK_LINE(1137)
											hx::AddEq(data->oPos,(int)1);
										}
										;break;
										default: {
											HX_STACK_LINE(1137)
											Dynamic();
										}
									}
								}
								HX_STACK_LINE(1137)
								data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::DRAW_ELLIPSE;
								HX_STACK_LINE(1137)
								tmp31 = data;
							}
							HX_STACK_LINE(1137)
							::openfl::_internal::renderer::DrawCommandReader c = tmp31;		HX_STACK_VAR(c,"c");
							HX_STACK_LINE(1138)
							::openfl::_internal::renderer::DrawCommandBuffer tmp32 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillCommands;		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(1138)
							::openfl::_internal::renderer::DrawCommandBuffer tmp33 = c->buffer;		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(1138)
							int tmp34 = c->fPos;		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(1138)
							int tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(1138)
							Float tmp36 = tmp33->f->__get(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(1138)
							::openfl::_internal::renderer::DrawCommandBuffer tmp37 = c->buffer;		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(1138)
							int tmp38 = c->fPos;		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(1138)
							int tmp39 = (tmp38 + (int)1);		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(1138)
							Float tmp40 = tmp37->f->__get(tmp39);		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(1138)
							::openfl::_internal::renderer::DrawCommandBuffer tmp41 = c->buffer;		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(1138)
							int tmp42 = c->fPos;		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(1138)
							int tmp43 = (tmp42 + (int)2);		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(1138)
							Float tmp44 = tmp41->f->__get(tmp43);		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(1138)
							::openfl::_internal::renderer::DrawCommandBuffer tmp45 = c->buffer;		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(1138)
							int tmp46 = c->fPos;		HX_STACK_VAR(tmp46,"tmp46");
							HX_STACK_LINE(1138)
							int tmp47 = (tmp46 + (int)3);		HX_STACK_VAR(tmp47,"tmp47");
							HX_STACK_LINE(1138)
							Float tmp48 = tmp45->f->__get(tmp47);		HX_STACK_VAR(tmp48,"tmp48");
							HX_STACK_LINE(1138)
							tmp32->drawEllipse(tmp36,tmp40,tmp44,tmp48);
							HX_STACK_LINE(1139)
							::openfl::_internal::renderer::DrawCommandBuffer tmp49 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokeCommands;		HX_STACK_VAR(tmp49,"tmp49");
							HX_STACK_LINE(1139)
							::openfl::_internal::renderer::DrawCommandBuffer tmp50 = c->buffer;		HX_STACK_VAR(tmp50,"tmp50");
							HX_STACK_LINE(1139)
							int tmp51 = c->fPos;		HX_STACK_VAR(tmp51,"tmp51");
							HX_STACK_LINE(1139)
							int tmp52 = tmp51;		HX_STACK_VAR(tmp52,"tmp52");
							HX_STACK_LINE(1139)
							Float tmp53 = tmp50->f->__get(tmp52);		HX_STACK_VAR(tmp53,"tmp53");
							HX_STACK_LINE(1139)
							::openfl::_internal::renderer::DrawCommandBuffer tmp54 = c->buffer;		HX_STACK_VAR(tmp54,"tmp54");
							HX_STACK_LINE(1139)
							int tmp55 = c->fPos;		HX_STACK_VAR(tmp55,"tmp55");
							HX_STACK_LINE(1139)
							int tmp56 = (tmp55 + (int)1);		HX_STACK_VAR(tmp56,"tmp56");
							HX_STACK_LINE(1139)
							Float tmp57 = tmp54->f->__get(tmp56);		HX_STACK_VAR(tmp57,"tmp57");
							HX_STACK_LINE(1139)
							::openfl::_internal::renderer::DrawCommandBuffer tmp58 = c->buffer;		HX_STACK_VAR(tmp58,"tmp58");
							HX_STACK_LINE(1139)
							int tmp59 = c->fPos;		HX_STACK_VAR(tmp59,"tmp59");
							HX_STACK_LINE(1139)
							int tmp60 = (tmp59 + (int)2);		HX_STACK_VAR(tmp60,"tmp60");
							HX_STACK_LINE(1139)
							Float tmp61 = tmp58->f->__get(tmp60);		HX_STACK_VAR(tmp61,"tmp61");
							HX_STACK_LINE(1139)
							::openfl::_internal::renderer::DrawCommandBuffer tmp62 = c->buffer;		HX_STACK_VAR(tmp62,"tmp62");
							HX_STACK_LINE(1139)
							int tmp63 = c->fPos;		HX_STACK_VAR(tmp63,"tmp63");
							HX_STACK_LINE(1139)
							int tmp64 = (tmp63 + (int)3);		HX_STACK_VAR(tmp64,"tmp64");
							HX_STACK_LINE(1139)
							Float tmp65 = tmp62->f->__get(tmp64);		HX_STACK_VAR(tmp65,"tmp65");
							HX_STACK_LINE(1139)
							tmp49->drawEllipse(tmp53,tmp57,tmp61,tmp65);
						}
						;break;
						case (int)7: {
							HX_STACK_LINE(1143)
							::openfl::_internal::renderer::DrawCommandReader tmp31;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(1143)
							{
								HX_STACK_LINE(1143)
								{
									HX_STACK_LINE(1143)
									::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
									HX_STACK_LINE(1143)
									switch( (int)(_g2->__Index())){
										case (int)0: {
											HX_STACK_LINE(1143)
											hx::AddEq(data->oPos,(int)2);
											HX_STACK_LINE(1143)
											hx::AddEq(data->bPos,(int)2);
										}
										;break;
										case (int)1: {
											HX_STACK_LINE(1143)
											hx::AddEq(data->iPos,(int)1);
											HX_STACK_LINE(1143)
											hx::AddEq(data->fPos,(int)1);
										}
										;break;
										case (int)2: {
											HX_STACK_LINE(1143)
											hx::AddEq(data->oPos,(int)4);
											HX_STACK_LINE(1143)
											hx::AddEq(data->iiPos,(int)2);
											HX_STACK_LINE(1143)
											hx::AddEq(data->ffPos,(int)1);
											HX_STACK_LINE(1143)
											hx::AddEq(data->fPos,(int)1);
										}
										;break;
										case (int)3: {
											HX_STACK_LINE(1143)
											hx::AddEq(data->fPos,(int)6);
										}
										;break;
										case (int)4: {
											HX_STACK_LINE(1143)
											hx::AddEq(data->fPos,(int)4);
										}
										;break;
										case (int)5: {
											HX_STACK_LINE(1143)
											hx::AddEq(data->fPos,(int)3);
										}
										;break;
										case (int)6: {
											HX_STACK_LINE(1143)
											hx::AddEq(data->fPos,(int)4);
										}
										;break;
										case (int)7: {
											HX_STACK_LINE(1143)
											hx::AddEq(data->fPos,(int)4);
										}
										;break;
										case (int)8: {
											HX_STACK_LINE(1143)
											hx::AddEq(data->fPos,(int)5);
											HX_STACK_LINE(1143)
											hx::AddEq(data->oPos,(int)1);
										}
										;break;
										case (int)10: {
											HX_STACK_LINE(1143)
											hx::AddEq(data->oPos,(int)4);
										}
										;break;
										case (int)11: {
											HX_STACK_LINE(1143)
											Dynamic();
										}
										;break;
										case (int)12: {
											HX_STACK_LINE(1143)
											hx::AddEq(data->oPos,(int)2);
											HX_STACK_LINE(1143)
											hx::AddEq(data->bPos,(int)2);
										}
										;break;
										case (int)13: {
											HX_STACK_LINE(1143)
											hx::AddEq(data->oPos,(int)4);
											HX_STACK_LINE(1143)
											hx::AddEq(data->iiPos,(int)2);
											HX_STACK_LINE(1143)
											hx::AddEq(data->ffPos,(int)1);
											HX_STACK_LINE(1143)
											hx::AddEq(data->fPos,(int)1);
										}
										;break;
										case (int)14: {
											HX_STACK_LINE(1143)
											hx::AddEq(data->oPos,(int)4);
											HX_STACK_LINE(1143)
											hx::AddEq(data->iPos,(int)1);
											HX_STACK_LINE(1143)
											hx::AddEq(data->fPos,(int)2);
											HX_STACK_LINE(1143)
											hx::AddEq(data->bPos,(int)1);
										}
										;break;
										case (int)15: {
											HX_STACK_LINE(1143)
											hx::AddEq(data->fPos,(int)2);
										}
										;break;
										case (int)16: {
											HX_STACK_LINE(1143)
											hx::AddEq(data->fPos,(int)2);
										}
										;break;
										case (int)17: {
											HX_STACK_LINE(1143)
											hx::AddEq(data->oPos,(int)1);
										}
										;break;
										default: {
											HX_STACK_LINE(1143)
											Dynamic();
										}
									}
								}
								HX_STACK_LINE(1143)
								data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::DRAW_RECT;
								HX_STACK_LINE(1143)
								tmp31 = data;
							}
							HX_STACK_LINE(1143)
							::openfl::_internal::renderer::DrawCommandReader c = tmp31;		HX_STACK_VAR(c,"c");
							HX_STACK_LINE(1144)
							::openfl::_internal::renderer::DrawCommandBuffer tmp32 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillCommands;		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(1144)
							::openfl::_internal::renderer::DrawCommandBuffer tmp33 = c->buffer;		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(1144)
							int tmp34 = c->fPos;		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(1144)
							int tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(1144)
							Float tmp36 = tmp33->f->__get(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(1144)
							::openfl::_internal::renderer::DrawCommandBuffer tmp37 = c->buffer;		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(1144)
							int tmp38 = c->fPos;		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(1144)
							int tmp39 = (tmp38 + (int)1);		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(1144)
							Float tmp40 = tmp37->f->__get(tmp39);		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(1144)
							::openfl::_internal::renderer::DrawCommandBuffer tmp41 = c->buffer;		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(1144)
							int tmp42 = c->fPos;		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(1144)
							int tmp43 = (tmp42 + (int)2);		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(1144)
							Float tmp44 = tmp41->f->__get(tmp43);		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(1144)
							::openfl::_internal::renderer::DrawCommandBuffer tmp45 = c->buffer;		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(1144)
							int tmp46 = c->fPos;		HX_STACK_VAR(tmp46,"tmp46");
							HX_STACK_LINE(1144)
							int tmp47 = (tmp46 + (int)3);		HX_STACK_VAR(tmp47,"tmp47");
							HX_STACK_LINE(1144)
							Float tmp48 = tmp45->f->__get(tmp47);		HX_STACK_VAR(tmp48,"tmp48");
							HX_STACK_LINE(1144)
							tmp32->drawRect(tmp36,tmp40,tmp44,tmp48);
							HX_STACK_LINE(1145)
							::openfl::_internal::renderer::DrawCommandBuffer tmp49 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokeCommands;		HX_STACK_VAR(tmp49,"tmp49");
							HX_STACK_LINE(1145)
							::openfl::_internal::renderer::DrawCommandBuffer tmp50 = c->buffer;		HX_STACK_VAR(tmp50,"tmp50");
							HX_STACK_LINE(1145)
							int tmp51 = c->fPos;		HX_STACK_VAR(tmp51,"tmp51");
							HX_STACK_LINE(1145)
							int tmp52 = tmp51;		HX_STACK_VAR(tmp52,"tmp52");
							HX_STACK_LINE(1145)
							Float tmp53 = tmp50->f->__get(tmp52);		HX_STACK_VAR(tmp53,"tmp53");
							HX_STACK_LINE(1145)
							::openfl::_internal::renderer::DrawCommandBuffer tmp54 = c->buffer;		HX_STACK_VAR(tmp54,"tmp54");
							HX_STACK_LINE(1145)
							int tmp55 = c->fPos;		HX_STACK_VAR(tmp55,"tmp55");
							HX_STACK_LINE(1145)
							int tmp56 = (tmp55 + (int)1);		HX_STACK_VAR(tmp56,"tmp56");
							HX_STACK_LINE(1145)
							Float tmp57 = tmp54->f->__get(tmp56);		HX_STACK_VAR(tmp57,"tmp57");
							HX_STACK_LINE(1145)
							::openfl::_internal::renderer::DrawCommandBuffer tmp58 = c->buffer;		HX_STACK_VAR(tmp58,"tmp58");
							HX_STACK_LINE(1145)
							int tmp59 = c->fPos;		HX_STACK_VAR(tmp59,"tmp59");
							HX_STACK_LINE(1145)
							int tmp60 = (tmp59 + (int)2);		HX_STACK_VAR(tmp60,"tmp60");
							HX_STACK_LINE(1145)
							Float tmp61 = tmp58->f->__get(tmp60);		HX_STACK_VAR(tmp61,"tmp61");
							HX_STACK_LINE(1145)
							::openfl::_internal::renderer::DrawCommandBuffer tmp62 = c->buffer;		HX_STACK_VAR(tmp62,"tmp62");
							HX_STACK_LINE(1145)
							int tmp63 = c->fPos;		HX_STACK_VAR(tmp63,"tmp63");
							HX_STACK_LINE(1145)
							int tmp64 = (tmp63 + (int)3);		HX_STACK_VAR(tmp64,"tmp64");
							HX_STACK_LINE(1145)
							Float tmp65 = tmp62->f->__get(tmp64);		HX_STACK_VAR(tmp65,"tmp65");
							HX_STACK_LINE(1145)
							tmp49->drawRect(tmp53,tmp57,tmp61,tmp65);
						}
						;break;
						case (int)8: {
							HX_STACK_LINE(1149)
							::openfl::_internal::renderer::DrawCommandReader tmp31;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(1149)
							{
								HX_STACK_LINE(1149)
								{
									HX_STACK_LINE(1149)
									::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
									HX_STACK_LINE(1149)
									switch( (int)(_g2->__Index())){
										case (int)0: {
											HX_STACK_LINE(1149)
											hx::AddEq(data->oPos,(int)2);
											HX_STACK_LINE(1149)
											hx::AddEq(data->bPos,(int)2);
										}
										;break;
										case (int)1: {
											HX_STACK_LINE(1149)
											hx::AddEq(data->iPos,(int)1);
											HX_STACK_LINE(1149)
											hx::AddEq(data->fPos,(int)1);
										}
										;break;
										case (int)2: {
											HX_STACK_LINE(1149)
											hx::AddEq(data->oPos,(int)4);
											HX_STACK_LINE(1149)
											hx::AddEq(data->iiPos,(int)2);
											HX_STACK_LINE(1149)
											hx::AddEq(data->ffPos,(int)1);
											HX_STACK_LINE(1149)
											hx::AddEq(data->fPos,(int)1);
										}
										;break;
										case (int)3: {
											HX_STACK_LINE(1149)
											hx::AddEq(data->fPos,(int)6);
										}
										;break;
										case (int)4: {
											HX_STACK_LINE(1149)
											hx::AddEq(data->fPos,(int)4);
										}
										;break;
										case (int)5: {
											HX_STACK_LINE(1149)
											hx::AddEq(data->fPos,(int)3);
										}
										;break;
										case (int)6: {
											HX_STACK_LINE(1149)
											hx::AddEq(data->fPos,(int)4);
										}
										;break;
										case (int)7: {
											HX_STACK_LINE(1149)
											hx::AddEq(data->fPos,(int)4);
										}
										;break;
										case (int)8: {
											HX_STACK_LINE(1149)
											hx::AddEq(data->fPos,(int)5);
											HX_STACK_LINE(1149)
											hx::AddEq(data->oPos,(int)1);
										}
										;break;
										case (int)10: {
											HX_STACK_LINE(1149)
											hx::AddEq(data->oPos,(int)4);
										}
										;break;
										case (int)11: {
											HX_STACK_LINE(1149)
											Dynamic();
										}
										;break;
										case (int)12: {
											HX_STACK_LINE(1149)
											hx::AddEq(data->oPos,(int)2);
											HX_STACK_LINE(1149)
											hx::AddEq(data->bPos,(int)2);
										}
										;break;
										case (int)13: {
											HX_STACK_LINE(1149)
											hx::AddEq(data->oPos,(int)4);
											HX_STACK_LINE(1149)
											hx::AddEq(data->iiPos,(int)2);
											HX_STACK_LINE(1149)
											hx::AddEq(data->ffPos,(int)1);
											HX_STACK_LINE(1149)
											hx::AddEq(data->fPos,(int)1);
										}
										;break;
										case (int)14: {
											HX_STACK_LINE(1149)
											hx::AddEq(data->oPos,(int)4);
											HX_STACK_LINE(1149)
											hx::AddEq(data->iPos,(int)1);
											HX_STACK_LINE(1149)
											hx::AddEq(data->fPos,(int)2);
											HX_STACK_LINE(1149)
											hx::AddEq(data->bPos,(int)1);
										}
										;break;
										case (int)15: {
											HX_STACK_LINE(1149)
											hx::AddEq(data->fPos,(int)2);
										}
										;break;
										case (int)16: {
											HX_STACK_LINE(1149)
											hx::AddEq(data->fPos,(int)2);
										}
										;break;
										case (int)17: {
											HX_STACK_LINE(1149)
											hx::AddEq(data->oPos,(int)1);
										}
										;break;
										default: {
											HX_STACK_LINE(1149)
											Dynamic();
										}
									}
								}
								HX_STACK_LINE(1149)
								data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::DRAW_ROUND_RECT;
								HX_STACK_LINE(1149)
								tmp31 = data;
							}
							HX_STACK_LINE(1149)
							::openfl::_internal::renderer::DrawCommandReader c = tmp31;		HX_STACK_VAR(c,"c");
							HX_STACK_LINE(1150)
							::openfl::_internal::renderer::DrawCommandBuffer tmp32 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillCommands;		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(1150)
							::openfl::_internal::renderer::DrawCommandBuffer tmp33 = c->buffer;		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(1150)
							int tmp34 = c->fPos;		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(1150)
							int tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(1150)
							Float tmp36 = tmp33->f->__get(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(1150)
							::openfl::_internal::renderer::DrawCommandBuffer tmp37 = c->buffer;		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(1150)
							int tmp38 = c->fPos;		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(1150)
							int tmp39 = (tmp38 + (int)1);		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(1150)
							Float tmp40 = tmp37->f->__get(tmp39);		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(1150)
							::openfl::_internal::renderer::DrawCommandBuffer tmp41 = c->buffer;		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(1150)
							int tmp42 = c->fPos;		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(1150)
							int tmp43 = (tmp42 + (int)2);		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(1150)
							Float tmp44 = tmp41->f->__get(tmp43);		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(1150)
							::openfl::_internal::renderer::DrawCommandBuffer tmp45 = c->buffer;		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(1150)
							int tmp46 = c->fPos;		HX_STACK_VAR(tmp46,"tmp46");
							HX_STACK_LINE(1150)
							int tmp47 = (tmp46 + (int)3);		HX_STACK_VAR(tmp47,"tmp47");
							HX_STACK_LINE(1150)
							Float tmp48 = tmp45->f->__get(tmp47);		HX_STACK_VAR(tmp48,"tmp48");
							HX_STACK_LINE(1150)
							::openfl::_internal::renderer::DrawCommandBuffer tmp49 = c->buffer;		HX_STACK_VAR(tmp49,"tmp49");
							HX_STACK_LINE(1150)
							int tmp50 = c->fPos;		HX_STACK_VAR(tmp50,"tmp50");
							HX_STACK_LINE(1150)
							int tmp51 = (tmp50 + (int)4);		HX_STACK_VAR(tmp51,"tmp51");
							HX_STACK_LINE(1150)
							Float tmp52 = tmp49->f->__get(tmp51);		HX_STACK_VAR(tmp52,"tmp52");
							HX_STACK_LINE(1150)
							::openfl::_internal::renderer::DrawCommandBuffer tmp53 = c->buffer;		HX_STACK_VAR(tmp53,"tmp53");
							HX_STACK_LINE(1150)
							int tmp54 = c->oPos;		HX_STACK_VAR(tmp54,"tmp54");
							HX_STACK_LINE(1150)
							int tmp55 = tmp54;		HX_STACK_VAR(tmp55,"tmp55");
							HX_STACK_LINE(1150)
							Dynamic tmp56 = tmp53->o->__GetItem(tmp55);		HX_STACK_VAR(tmp56,"tmp56");
							HX_STACK_LINE(1150)
							Dynamic tmp57 = tmp56;		HX_STACK_VAR(tmp57,"tmp57");
							HX_STACK_LINE(1150)
							tmp32->drawRoundRect(tmp36,tmp40,tmp44,tmp48,tmp52,tmp57);
							HX_STACK_LINE(1151)
							::openfl::_internal::renderer::DrawCommandBuffer tmp58 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokeCommands;		HX_STACK_VAR(tmp58,"tmp58");
							HX_STACK_LINE(1151)
							::openfl::_internal::renderer::DrawCommandBuffer tmp59 = c->buffer;		HX_STACK_VAR(tmp59,"tmp59");
							HX_STACK_LINE(1151)
							int tmp60 = c->fPos;		HX_STACK_VAR(tmp60,"tmp60");
							HX_STACK_LINE(1151)
							int tmp61 = tmp60;		HX_STACK_VAR(tmp61,"tmp61");
							HX_STACK_LINE(1151)
							Float tmp62 = tmp59->f->__get(tmp61);		HX_STACK_VAR(tmp62,"tmp62");
							HX_STACK_LINE(1151)
							::openfl::_internal::renderer::DrawCommandBuffer tmp63 = c->buffer;		HX_STACK_VAR(tmp63,"tmp63");
							HX_STACK_LINE(1151)
							int tmp64 = c->fPos;		HX_STACK_VAR(tmp64,"tmp64");
							HX_STACK_LINE(1151)
							int tmp65 = (tmp64 + (int)1);		HX_STACK_VAR(tmp65,"tmp65");
							HX_STACK_LINE(1151)
							Float tmp66 = tmp63->f->__get(tmp65);		HX_STACK_VAR(tmp66,"tmp66");
							HX_STACK_LINE(1151)
							::openfl::_internal::renderer::DrawCommandBuffer tmp67 = c->buffer;		HX_STACK_VAR(tmp67,"tmp67");
							HX_STACK_LINE(1151)
							int tmp68 = c->fPos;		HX_STACK_VAR(tmp68,"tmp68");
							HX_STACK_LINE(1151)
							int tmp69 = (tmp68 + (int)2);		HX_STACK_VAR(tmp69,"tmp69");
							HX_STACK_LINE(1151)
							Float tmp70 = tmp67->f->__get(tmp69);		HX_STACK_VAR(tmp70,"tmp70");
							HX_STACK_LINE(1151)
							::openfl::_internal::renderer::DrawCommandBuffer tmp71 = c->buffer;		HX_STACK_VAR(tmp71,"tmp71");
							HX_STACK_LINE(1151)
							int tmp72 = c->fPos;		HX_STACK_VAR(tmp72,"tmp72");
							HX_STACK_LINE(1151)
							int tmp73 = (tmp72 + (int)3);		HX_STACK_VAR(tmp73,"tmp73");
							HX_STACK_LINE(1151)
							Float tmp74 = tmp71->f->__get(tmp73);		HX_STACK_VAR(tmp74,"tmp74");
							HX_STACK_LINE(1151)
							::openfl::_internal::renderer::DrawCommandBuffer tmp75 = c->buffer;		HX_STACK_VAR(tmp75,"tmp75");
							HX_STACK_LINE(1151)
							int tmp76 = c->fPos;		HX_STACK_VAR(tmp76,"tmp76");
							HX_STACK_LINE(1151)
							int tmp77 = (tmp76 + (int)4);		HX_STACK_VAR(tmp77,"tmp77");
							HX_STACK_LINE(1151)
							Float tmp78 = tmp75->f->__get(tmp77);		HX_STACK_VAR(tmp78,"tmp78");
							HX_STACK_LINE(1151)
							::openfl::_internal::renderer::DrawCommandBuffer tmp79 = c->buffer;		HX_STACK_VAR(tmp79,"tmp79");
							HX_STACK_LINE(1151)
							int tmp80 = c->oPos;		HX_STACK_VAR(tmp80,"tmp80");
							HX_STACK_LINE(1151)
							int tmp81 = tmp80;		HX_STACK_VAR(tmp81,"tmp81");
							HX_STACK_LINE(1151)
							Dynamic tmp82 = tmp79->o->__GetItem(tmp81);		HX_STACK_VAR(tmp82,"tmp82");
							HX_STACK_LINE(1151)
							Dynamic tmp83 = tmp82;		HX_STACK_VAR(tmp83,"tmp83");
							HX_STACK_LINE(1151)
							tmp58->drawRoundRect(tmp62,tmp66,tmp70,tmp74,tmp78,tmp83);
						}
						;break;
						case (int)10: {
							HX_STACK_LINE(1155)
							::openfl::_internal::renderer::DrawCommandReader tmp31;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(1155)
							{
								HX_STACK_LINE(1155)
								{
									HX_STACK_LINE(1155)
									::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
									HX_STACK_LINE(1155)
									switch( (int)(_g2->__Index())){
										case (int)0: {
											HX_STACK_LINE(1155)
											hx::AddEq(data->oPos,(int)2);
											HX_STACK_LINE(1155)
											hx::AddEq(data->bPos,(int)2);
										}
										;break;
										case (int)1: {
											HX_STACK_LINE(1155)
											hx::AddEq(data->iPos,(int)1);
											HX_STACK_LINE(1155)
											hx::AddEq(data->fPos,(int)1);
										}
										;break;
										case (int)2: {
											HX_STACK_LINE(1155)
											hx::AddEq(data->oPos,(int)4);
											HX_STACK_LINE(1155)
											hx::AddEq(data->iiPos,(int)2);
											HX_STACK_LINE(1155)
											hx::AddEq(data->ffPos,(int)1);
											HX_STACK_LINE(1155)
											hx::AddEq(data->fPos,(int)1);
										}
										;break;
										case (int)3: {
											HX_STACK_LINE(1155)
											hx::AddEq(data->fPos,(int)6);
										}
										;break;
										case (int)4: {
											HX_STACK_LINE(1155)
											hx::AddEq(data->fPos,(int)4);
										}
										;break;
										case (int)5: {
											HX_STACK_LINE(1155)
											hx::AddEq(data->fPos,(int)3);
										}
										;break;
										case (int)6: {
											HX_STACK_LINE(1155)
											hx::AddEq(data->fPos,(int)4);
										}
										;break;
										case (int)7: {
											HX_STACK_LINE(1155)
											hx::AddEq(data->fPos,(int)4);
										}
										;break;
										case (int)8: {
											HX_STACK_LINE(1155)
											hx::AddEq(data->fPos,(int)5);
											HX_STACK_LINE(1155)
											hx::AddEq(data->oPos,(int)1);
										}
										;break;
										case (int)10: {
											HX_STACK_LINE(1155)
											hx::AddEq(data->oPos,(int)4);
										}
										;break;
										case (int)11: {
											HX_STACK_LINE(1155)
											Dynamic();
										}
										;break;
										case (int)12: {
											HX_STACK_LINE(1155)
											hx::AddEq(data->oPos,(int)2);
											HX_STACK_LINE(1155)
											hx::AddEq(data->bPos,(int)2);
										}
										;break;
										case (int)13: {
											HX_STACK_LINE(1155)
											hx::AddEq(data->oPos,(int)4);
											HX_STACK_LINE(1155)
											hx::AddEq(data->iiPos,(int)2);
											HX_STACK_LINE(1155)
											hx::AddEq(data->ffPos,(int)1);
											HX_STACK_LINE(1155)
											hx::AddEq(data->fPos,(int)1);
										}
										;break;
										case (int)14: {
											HX_STACK_LINE(1155)
											hx::AddEq(data->oPos,(int)4);
											HX_STACK_LINE(1155)
											hx::AddEq(data->iPos,(int)1);
											HX_STACK_LINE(1155)
											hx::AddEq(data->fPos,(int)2);
											HX_STACK_LINE(1155)
											hx::AddEq(data->bPos,(int)1);
										}
										;break;
										case (int)15: {
											HX_STACK_LINE(1155)
											hx::AddEq(data->fPos,(int)2);
										}
										;break;
										case (int)16: {
											HX_STACK_LINE(1155)
											hx::AddEq(data->fPos,(int)2);
										}
										;break;
										case (int)17: {
											HX_STACK_LINE(1155)
											hx::AddEq(data->oPos,(int)1);
										}
										;break;
										default: {
											HX_STACK_LINE(1155)
											Dynamic();
										}
									}
								}
								HX_STACK_LINE(1155)
								data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::DRAW_TRIANGLES;
								HX_STACK_LINE(1155)
								tmp31 = data;
							}
							HX_STACK_LINE(1155)
							::openfl::_internal::renderer::DrawCommandReader c = tmp31;		HX_STACK_VAR(c,"c");
							HX_STACK_LINE(1156)
							::openfl::_internal::renderer::DrawCommandBuffer tmp32 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillCommands;		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(1156)
							::openfl::_internal::renderer::DrawCommandBuffer tmp33 = c->buffer;		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(1156)
							int tmp34 = c->oPos;		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(1156)
							int tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(1156)
							Dynamic tmp36 = tmp33->o->__GetItem(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(1156)
							::openfl::_Vector::FloatVector tmp37 = ((::openfl::_Vector::FloatVector)(tmp36));		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(1156)
							::openfl::_internal::renderer::DrawCommandBuffer tmp38 = c->buffer;		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(1156)
							int tmp39 = c->oPos;		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(1156)
							int tmp40 = (tmp39 + (int)1);		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(1156)
							Dynamic tmp41 = tmp38->o->__GetItem(tmp40);		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(1156)
							::openfl::_Vector::IntVector tmp42 = ((::openfl::_Vector::IntVector)(tmp41));		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(1156)
							::openfl::_internal::renderer::DrawCommandBuffer tmp43 = c->buffer;		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(1156)
							int tmp44 = c->oPos;		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(1156)
							int tmp45 = (tmp44 + (int)2);		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(1156)
							Dynamic tmp46 = tmp43->o->__GetItem(tmp45);		HX_STACK_VAR(tmp46,"tmp46");
							HX_STACK_LINE(1156)
							::openfl::_Vector::FloatVector tmp47 = ((::openfl::_Vector::FloatVector)(tmp46));		HX_STACK_VAR(tmp47,"tmp47");
							HX_STACK_LINE(1156)
							::openfl::_internal::renderer::DrawCommandBuffer tmp48 = c->buffer;		HX_STACK_VAR(tmp48,"tmp48");
							HX_STACK_LINE(1156)
							int tmp49 = c->oPos;		HX_STACK_VAR(tmp49,"tmp49");
							HX_STACK_LINE(1156)
							int tmp50 = (tmp49 + (int)3);		HX_STACK_VAR(tmp50,"tmp50");
							HX_STACK_LINE(1156)
							Dynamic tmp51 = tmp48->o->__GetItem(tmp50);		HX_STACK_VAR(tmp51,"tmp51");
							HX_STACK_LINE(1156)
							Dynamic tmp52 = tmp51;		HX_STACK_VAR(tmp52,"tmp52");
							HX_STACK_LINE(1156)
							tmp32->drawTriangles(tmp37,tmp42,tmp47,tmp52);
						}
						;break;
						default: {
							HX_STACK_LINE(1160)
							{
								HX_STACK_LINE(1160)
								::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
								HX_STACK_LINE(1160)
								switch( (int)(_g2->__Index())){
									case (int)0: {
										HX_STACK_LINE(1160)
										hx::AddEq(data->oPos,(int)2);
										HX_STACK_LINE(1160)
										hx::AddEq(data->bPos,(int)2);
									}
									;break;
									case (int)1: {
										HX_STACK_LINE(1160)
										hx::AddEq(data->iPos,(int)1);
										HX_STACK_LINE(1160)
										hx::AddEq(data->fPos,(int)1);
									}
									;break;
									case (int)2: {
										HX_STACK_LINE(1160)
										hx::AddEq(data->oPos,(int)4);
										HX_STACK_LINE(1160)
										hx::AddEq(data->iiPos,(int)2);
										HX_STACK_LINE(1160)
										hx::AddEq(data->ffPos,(int)1);
										HX_STACK_LINE(1160)
										hx::AddEq(data->fPos,(int)1);
									}
									;break;
									case (int)3: {
										HX_STACK_LINE(1160)
										hx::AddEq(data->fPos,(int)6);
									}
									;break;
									case (int)4: {
										HX_STACK_LINE(1160)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)5: {
										HX_STACK_LINE(1160)
										hx::AddEq(data->fPos,(int)3);
									}
									;break;
									case (int)6: {
										HX_STACK_LINE(1160)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)7: {
										HX_STACK_LINE(1160)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)8: {
										HX_STACK_LINE(1160)
										hx::AddEq(data->fPos,(int)5);
										HX_STACK_LINE(1160)
										hx::AddEq(data->oPos,(int)1);
									}
									;break;
									case (int)10: {
										HX_STACK_LINE(1160)
										hx::AddEq(data->oPos,(int)4);
									}
									;break;
									case (int)11: {
										HX_STACK_LINE(1160)
										Dynamic();
									}
									;break;
									case (int)12: {
										HX_STACK_LINE(1160)
										hx::AddEq(data->oPos,(int)2);
										HX_STACK_LINE(1160)
										hx::AddEq(data->bPos,(int)2);
									}
									;break;
									case (int)13: {
										HX_STACK_LINE(1160)
										hx::AddEq(data->oPos,(int)4);
										HX_STACK_LINE(1160)
										hx::AddEq(data->iiPos,(int)2);
										HX_STACK_LINE(1160)
										hx::AddEq(data->ffPos,(int)1);
										HX_STACK_LINE(1160)
										hx::AddEq(data->fPos,(int)1);
									}
									;break;
									case (int)14: {
										HX_STACK_LINE(1160)
										hx::AddEq(data->oPos,(int)4);
										HX_STACK_LINE(1160)
										hx::AddEq(data->iPos,(int)1);
										HX_STACK_LINE(1160)
										hx::AddEq(data->fPos,(int)2);
										HX_STACK_LINE(1160)
										hx::AddEq(data->bPos,(int)1);
									}
									;break;
									case (int)15: {
										HX_STACK_LINE(1160)
										hx::AddEq(data->fPos,(int)2);
									}
									;break;
									case (int)16: {
										HX_STACK_LINE(1160)
										hx::AddEq(data->fPos,(int)2);
									}
									;break;
									case (int)17: {
										HX_STACK_LINE(1160)
										hx::AddEq(data->oPos,(int)1);
									}
									;break;
									default: {
										HX_STACK_LINE(1160)
										Dynamic();
									}
								}
							}
							HX_STACK_LINE(1160)
							data->prev = type;
						}
					}
				}
			}
			HX_STACK_LINE(1166)
			::openfl::_internal::renderer::DrawCommandBuffer tmp28 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillCommands;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(1166)
			int tmp29 = tmp28->get_length();		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(1166)
			bool tmp30 = (tmp29 > (int)0);		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(1166)
			if ((tmp30)){
				HX_STACK_LINE(1168)
				::openfl::_internal::renderer::cairo::CairoGraphics_obj::endFill();
			}
			HX_STACK_LINE(1172)
			::openfl::_internal::renderer::DrawCommandBuffer tmp31 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokeCommands;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(1172)
			int tmp32 = tmp31->get_length();		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(1172)
			bool tmp33 = (tmp32 > (int)0);		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(1172)
			if ((tmp33)){
				HX_STACK_LINE(1174)
				::openfl::_internal::renderer::cairo::CairoGraphics_obj::endStroke();
			}
			HX_STACK_LINE(1178)
			data->destroy();
			HX_STACK_LINE(1180)
			::lime::graphics::Image tmp34 = graphics->__bitmap->image;		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(1180)
			tmp34->dirty = true;
			HX_STACK_LINE(1181)
			::lime::graphics::Image tmp35 = graphics->__bitmap->image;		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(1181)
			(tmp35->version)++;
		}
		HX_STACK_LINE(1185)
		graphics->set___dirty(false);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(CairoGraphics_obj,render,(void))

Void CairoGraphics_obj::renderMask( ::openfl::display::Graphics graphics,::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl._internal.renderer.cairo.CairoGraphics","renderMask",0x2ed81fde,"openfl._internal.renderer.cairo.CairoGraphics.renderMask","openfl/_internal/renderer/cairo/CairoGraphics.hx",1192,0x744ae94c)
		HX_STACK_ARG(graphics,"graphics")
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_LINE(1194)
		int tmp = graphics->__commands->get_length();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1194)
		bool tmp1 = (tmp != (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1194)
		if ((tmp1)){
			HX_STACK_LINE(1196)
			::lime::graphics::cairo::Cairo cairo = renderSession->cairo;		HX_STACK_VAR(cairo,"cairo");
			HX_STACK_LINE(1198)
			Float positionX = ((Float)0.0);		HX_STACK_VAR(positionX,"positionX");
			HX_STACK_LINE(1199)
			Float positionY = ((Float)0.0);		HX_STACK_VAR(positionY,"positionY");
			HX_STACK_LINE(1201)
			int offsetX = (int)0;		HX_STACK_VAR(offsetX,"offsetX");
			HX_STACK_LINE(1202)
			int offsetY = (int)0;		HX_STACK_VAR(offsetY,"offsetY");
			HX_STACK_LINE(1204)
			::openfl::_internal::renderer::DrawCommandReader tmp2 = ::openfl::_internal::renderer::DrawCommandReader_obj::__new(graphics->__commands);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1204)
			::openfl::_internal::renderer::DrawCommandReader data = tmp2;		HX_STACK_VAR(data,"data");
			HX_STACK_LINE(1206)
			{
				HX_STACK_LINE(1206)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(1206)
				Array< ::Dynamic > _g1 = graphics->__commands->types;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(1206)
				while((true)){
					HX_STACK_LINE(1206)
					bool tmp3 = (_g < _g1->length);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(1206)
					bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(1206)
					if ((tmp4)){
						HX_STACK_LINE(1206)
						break;
					}
					HX_STACK_LINE(1206)
					::openfl::_internal::renderer::DrawCommandType tmp5 = _g1->__get(_g).StaticCast< ::openfl::_internal::renderer::DrawCommandType >();		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(1206)
					::openfl::_internal::renderer::DrawCommandType type = tmp5;		HX_STACK_VAR(type,"type");
					HX_STACK_LINE(1206)
					++(_g);
					HX_STACK_LINE(1208)
					switch( (int)(type->__Index())){
						case (int)3: {
							HX_STACK_LINE(1212)
							::openfl::_internal::renderer::DrawCommandReader tmp6;		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(1212)
							{
								HX_STACK_LINE(1212)
								{
									HX_STACK_LINE(1212)
									::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
									HX_STACK_LINE(1212)
									switch( (int)(_g2->__Index())){
										case (int)0: {
											HX_STACK_LINE(1212)
											hx::AddEq(data->oPos,(int)2);
											HX_STACK_LINE(1212)
											hx::AddEq(data->bPos,(int)2);
										}
										;break;
										case (int)1: {
											HX_STACK_LINE(1212)
											hx::AddEq(data->iPos,(int)1);
											HX_STACK_LINE(1212)
											hx::AddEq(data->fPos,(int)1);
										}
										;break;
										case (int)2: {
											HX_STACK_LINE(1212)
											hx::AddEq(data->oPos,(int)4);
											HX_STACK_LINE(1212)
											hx::AddEq(data->iiPos,(int)2);
											HX_STACK_LINE(1212)
											hx::AddEq(data->ffPos,(int)1);
											HX_STACK_LINE(1212)
											hx::AddEq(data->fPos,(int)1);
										}
										;break;
										case (int)3: {
											HX_STACK_LINE(1212)
											hx::AddEq(data->fPos,(int)6);
										}
										;break;
										case (int)4: {
											HX_STACK_LINE(1212)
											hx::AddEq(data->fPos,(int)4);
										}
										;break;
										case (int)5: {
											HX_STACK_LINE(1212)
											hx::AddEq(data->fPos,(int)3);
										}
										;break;
										case (int)6: {
											HX_STACK_LINE(1212)
											hx::AddEq(data->fPos,(int)4);
										}
										;break;
										case (int)7: {
											HX_STACK_LINE(1212)
											hx::AddEq(data->fPos,(int)4);
										}
										;break;
										case (int)8: {
											HX_STACK_LINE(1212)
											hx::AddEq(data->fPos,(int)5);
											HX_STACK_LINE(1212)
											hx::AddEq(data->oPos,(int)1);
										}
										;break;
										case (int)10: {
											HX_STACK_LINE(1212)
											hx::AddEq(data->oPos,(int)4);
										}
										;break;
										case (int)11: {
											HX_STACK_LINE(1212)
											Dynamic();
										}
										;break;
										case (int)12: {
											HX_STACK_LINE(1212)
											hx::AddEq(data->oPos,(int)2);
											HX_STACK_LINE(1212)
											hx::AddEq(data->bPos,(int)2);
										}
										;break;
										case (int)13: {
											HX_STACK_LINE(1212)
											hx::AddEq(data->oPos,(int)4);
											HX_STACK_LINE(1212)
											hx::AddEq(data->iiPos,(int)2);
											HX_STACK_LINE(1212)
											hx::AddEq(data->ffPos,(int)1);
											HX_STACK_LINE(1212)
											hx::AddEq(data->fPos,(int)1);
										}
										;break;
										case (int)14: {
											HX_STACK_LINE(1212)
											hx::AddEq(data->oPos,(int)4);
											HX_STACK_LINE(1212)
											hx::AddEq(data->iPos,(int)1);
											HX_STACK_LINE(1212)
											hx::AddEq(data->fPos,(int)2);
											HX_STACK_LINE(1212)
											hx::AddEq(data->bPos,(int)1);
										}
										;break;
										case (int)15: {
											HX_STACK_LINE(1212)
											hx::AddEq(data->fPos,(int)2);
										}
										;break;
										case (int)16: {
											HX_STACK_LINE(1212)
											hx::AddEq(data->fPos,(int)2);
										}
										;break;
										case (int)17: {
											HX_STACK_LINE(1212)
											hx::AddEq(data->oPos,(int)1);
										}
										;break;
										default: {
											HX_STACK_LINE(1212)
											Dynamic();
										}
									}
								}
								HX_STACK_LINE(1212)
								data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::CUBIC_CURVE_TO;
								HX_STACK_LINE(1212)
								tmp6 = data;
							}
							HX_STACK_LINE(1212)
							::openfl::_internal::renderer::DrawCommandReader c = tmp6;		HX_STACK_VAR(c,"c");
							HX_STACK_LINE(1213)
							::openfl::_internal::renderer::DrawCommandBuffer tmp7 = c->buffer;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(1213)
							int tmp8 = c->fPos;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(1213)
							int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(1213)
							Float tmp10 = tmp7->f->__get(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(1213)
							int tmp11 = offsetX;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(1213)
							Float tmp12 = (tmp10 - tmp11);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(1213)
							::openfl::_internal::renderer::DrawCommandBuffer tmp13 = c->buffer;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(1213)
							int tmp14 = c->fPos;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(1213)
							int tmp15 = (tmp14 + (int)1);		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(1213)
							Float tmp16 = tmp13->f->__get(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(1213)
							int tmp17 = offsetY;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(1213)
							Float tmp18 = (tmp16 - tmp17);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(1213)
							::openfl::_internal::renderer::DrawCommandBuffer tmp19 = c->buffer;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(1213)
							int tmp20 = c->fPos;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(1213)
							int tmp21 = (tmp20 + (int)2);		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(1213)
							Float tmp22 = tmp19->f->__get(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(1213)
							int tmp23 = offsetX;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(1213)
							Float tmp24 = (tmp22 - tmp23);		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(1213)
							::openfl::_internal::renderer::DrawCommandBuffer tmp25 = c->buffer;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(1213)
							int tmp26 = c->fPos;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(1213)
							int tmp27 = (tmp26 + (int)3);		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(1213)
							Float tmp28 = tmp25->f->__get(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(1213)
							int tmp29 = offsetY;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(1213)
							Float tmp30 = (tmp28 - tmp29);		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(1213)
							::openfl::_internal::renderer::DrawCommandBuffer tmp31 = c->buffer;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(1213)
							int tmp32 = c->fPos;		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(1213)
							int tmp33 = (tmp32 + (int)4);		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(1213)
							Float tmp34 = tmp31->f->__get(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(1213)
							int tmp35 = offsetX;		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(1213)
							Float tmp36 = (tmp34 - tmp35);		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(1213)
							::openfl::_internal::renderer::DrawCommandBuffer tmp37 = c->buffer;		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(1213)
							int tmp38 = c->fPos;		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(1213)
							int tmp39 = (tmp38 + (int)5);		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(1213)
							Float tmp40 = tmp37->f->__get(tmp39);		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(1213)
							int tmp41 = offsetY;		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(1213)
							Float tmp42 = (tmp40 - tmp41);		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(1213)
							cairo->curveTo(tmp12,tmp18,tmp24,tmp30,tmp36,tmp42);
							HX_STACK_LINE(1214)
							::openfl::_internal::renderer::DrawCommandBuffer tmp43 = c->buffer;		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(1214)
							int tmp44 = c->fPos;		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(1214)
							int tmp45 = (tmp44 + (int)4);		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(1214)
							Float tmp46 = tmp43->f->__get(tmp45);		HX_STACK_VAR(tmp46,"tmp46");
							HX_STACK_LINE(1214)
							positionX = tmp46;
							HX_STACK_LINE(1215)
							::openfl::_internal::renderer::DrawCommandBuffer tmp47 = c->buffer;		HX_STACK_VAR(tmp47,"tmp47");
							HX_STACK_LINE(1215)
							int tmp48 = c->fPos;		HX_STACK_VAR(tmp48,"tmp48");
							HX_STACK_LINE(1215)
							int tmp49 = (tmp48 + (int)4);		HX_STACK_VAR(tmp49,"tmp49");
							HX_STACK_LINE(1215)
							Float tmp50 = tmp47->f->__get(tmp49);		HX_STACK_VAR(tmp50,"tmp50");
							HX_STACK_LINE(1215)
							positionY = tmp50;
						}
						;break;
						case (int)4: {
							HX_STACK_LINE(1219)
							::openfl::_internal::renderer::DrawCommandReader tmp6;		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(1219)
							{
								HX_STACK_LINE(1219)
								{
									HX_STACK_LINE(1219)
									::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
									HX_STACK_LINE(1219)
									switch( (int)(_g2->__Index())){
										case (int)0: {
											HX_STACK_LINE(1219)
											hx::AddEq(data->oPos,(int)2);
											HX_STACK_LINE(1219)
											hx::AddEq(data->bPos,(int)2);
										}
										;break;
										case (int)1: {
											HX_STACK_LINE(1219)
											hx::AddEq(data->iPos,(int)1);
											HX_STACK_LINE(1219)
											hx::AddEq(data->fPos,(int)1);
										}
										;break;
										case (int)2: {
											HX_STACK_LINE(1219)
											hx::AddEq(data->oPos,(int)4);
											HX_STACK_LINE(1219)
											hx::AddEq(data->iiPos,(int)2);
											HX_STACK_LINE(1219)
											hx::AddEq(data->ffPos,(int)1);
											HX_STACK_LINE(1219)
											hx::AddEq(data->fPos,(int)1);
										}
										;break;
										case (int)3: {
											HX_STACK_LINE(1219)
											hx::AddEq(data->fPos,(int)6);
										}
										;break;
										case (int)4: {
											HX_STACK_LINE(1219)
											hx::AddEq(data->fPos,(int)4);
										}
										;break;
										case (int)5: {
											HX_STACK_LINE(1219)
											hx::AddEq(data->fPos,(int)3);
										}
										;break;
										case (int)6: {
											HX_STACK_LINE(1219)
											hx::AddEq(data->fPos,(int)4);
										}
										;break;
										case (int)7: {
											HX_STACK_LINE(1219)
											hx::AddEq(data->fPos,(int)4);
										}
										;break;
										case (int)8: {
											HX_STACK_LINE(1219)
											hx::AddEq(data->fPos,(int)5);
											HX_STACK_LINE(1219)
											hx::AddEq(data->oPos,(int)1);
										}
										;break;
										case (int)10: {
											HX_STACK_LINE(1219)
											hx::AddEq(data->oPos,(int)4);
										}
										;break;
										case (int)11: {
											HX_STACK_LINE(1219)
											Dynamic();
										}
										;break;
										case (int)12: {
											HX_STACK_LINE(1219)
											hx::AddEq(data->oPos,(int)2);
											HX_STACK_LINE(1219)
											hx::AddEq(data->bPos,(int)2);
										}
										;break;
										case (int)13: {
											HX_STACK_LINE(1219)
											hx::AddEq(data->oPos,(int)4);
											HX_STACK_LINE(1219)
											hx::AddEq(data->iiPos,(int)2);
											HX_STACK_LINE(1219)
											hx::AddEq(data->ffPos,(int)1);
											HX_STACK_LINE(1219)
											hx::AddEq(data->fPos,(int)1);
										}
										;break;
										case (int)14: {
											HX_STACK_LINE(1219)
											hx::AddEq(data->oPos,(int)4);
											HX_STACK_LINE(1219)
											hx::AddEq(data->iPos,(int)1);
											HX_STACK_LINE(1219)
											hx::AddEq(data->fPos,(int)2);
											HX_STACK_LINE(1219)
											hx::AddEq(data->bPos,(int)1);
										}
										;break;
										case (int)15: {
											HX_STACK_LINE(1219)
											hx::AddEq(data->fPos,(int)2);
										}
										;break;
										case (int)16: {
											HX_STACK_LINE(1219)
											hx::AddEq(data->fPos,(int)2);
										}
										;break;
										case (int)17: {
											HX_STACK_LINE(1219)
											hx::AddEq(data->oPos,(int)1);
										}
										;break;
										default: {
											HX_STACK_LINE(1219)
											Dynamic();
										}
									}
								}
								HX_STACK_LINE(1219)
								data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::CURVE_TO;
								HX_STACK_LINE(1219)
								tmp6 = data;
							}
							HX_STACK_LINE(1219)
							::openfl::_internal::renderer::DrawCommandReader c = tmp6;		HX_STACK_VAR(c,"c");
							HX_STACK_LINE(1220)
							::openfl::_internal::renderer::DrawCommandBuffer tmp7 = c->buffer;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(1220)
							int tmp8 = c->fPos;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(1220)
							int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(1220)
							Float tmp10 = tmp7->f->__get(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(1220)
							int tmp11 = offsetX;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(1220)
							Float tmp12 = (tmp10 - tmp11);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(1220)
							::openfl::_internal::renderer::DrawCommandBuffer tmp13 = c->buffer;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(1220)
							int tmp14 = c->fPos;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(1220)
							int tmp15 = (tmp14 + (int)1);		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(1220)
							Float tmp16 = tmp13->f->__get(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(1220)
							int tmp17 = offsetY;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(1220)
							Float tmp18 = (tmp16 - tmp17);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(1220)
							::openfl::_internal::renderer::DrawCommandBuffer tmp19 = c->buffer;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(1220)
							int tmp20 = c->fPos;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(1220)
							int tmp21 = (tmp20 + (int)2);		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(1220)
							Float tmp22 = tmp19->f->__get(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(1220)
							int tmp23 = offsetX;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(1220)
							Float tmp24 = (tmp22 - tmp23);		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(1220)
							::openfl::_internal::renderer::DrawCommandBuffer tmp25 = c->buffer;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(1220)
							int tmp26 = c->fPos;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(1220)
							int tmp27 = (tmp26 + (int)3);		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(1220)
							Float tmp28 = tmp25->f->__get(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(1220)
							int tmp29 = offsetY;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(1220)
							Float tmp30 = (tmp28 - tmp29);		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(1220)
							::openfl::_internal::renderer::cairo::CairoGraphics_obj::quadraticCurveTo(tmp12,tmp18,tmp24,tmp30);
							HX_STACK_LINE(1221)
							::openfl::_internal::renderer::DrawCommandBuffer tmp31 = c->buffer;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(1221)
							int tmp32 = c->fPos;		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(1221)
							int tmp33 = (tmp32 + (int)2);		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(1221)
							Float tmp34 = tmp31->f->__get(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(1221)
							positionX = tmp34;
							HX_STACK_LINE(1222)
							::openfl::_internal::renderer::DrawCommandBuffer tmp35 = c->buffer;		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(1222)
							int tmp36 = c->fPos;		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(1222)
							int tmp37 = (tmp36 + (int)3);		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(1222)
							Float tmp38 = tmp35->f->__get(tmp37);		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(1222)
							positionY = tmp38;
						}
						;break;
						case (int)5: {
							HX_STACK_LINE(1226)
							::openfl::_internal::renderer::DrawCommandReader tmp6;		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(1226)
							{
								HX_STACK_LINE(1226)
								{
									HX_STACK_LINE(1226)
									::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
									HX_STACK_LINE(1226)
									switch( (int)(_g2->__Index())){
										case (int)0: {
											HX_STACK_LINE(1226)
											hx::AddEq(data->oPos,(int)2);
											HX_STACK_LINE(1226)
											hx::AddEq(data->bPos,(int)2);
										}
										;break;
										case (int)1: {
											HX_STACK_LINE(1226)
											hx::AddEq(data->iPos,(int)1);
											HX_STACK_LINE(1226)
											hx::AddEq(data->fPos,(int)1);
										}
										;break;
										case (int)2: {
											HX_STACK_LINE(1226)
											hx::AddEq(data->oPos,(int)4);
											HX_STACK_LINE(1226)
											hx::AddEq(data->iiPos,(int)2);
											HX_STACK_LINE(1226)
											hx::AddEq(data->ffPos,(int)1);
											HX_STACK_LINE(1226)
											hx::AddEq(data->fPos,(int)1);
										}
										;break;
										case (int)3: {
											HX_STACK_LINE(1226)
											hx::AddEq(data->fPos,(int)6);
										}
										;break;
										case (int)4: {
											HX_STACK_LINE(1226)
											hx::AddEq(data->fPos,(int)4);
										}
										;break;
										case (int)5: {
											HX_STACK_LINE(1226)
											hx::AddEq(data->fPos,(int)3);
										}
										;break;
										case (int)6: {
											HX_STACK_LINE(1226)
											hx::AddEq(data->fPos,(int)4);
										}
										;break;
										case (int)7: {
											HX_STACK_LINE(1226)
											hx::AddEq(data->fPos,(int)4);
										}
										;break;
										case (int)8: {
											HX_STACK_LINE(1226)
											hx::AddEq(data->fPos,(int)5);
											HX_STACK_LINE(1226)
											hx::AddEq(data->oPos,(int)1);
										}
										;break;
										case (int)10: {
											HX_STACK_LINE(1226)
											hx::AddEq(data->oPos,(int)4);
										}
										;break;
										case (int)11: {
											HX_STACK_LINE(1226)
											Dynamic();
										}
										;break;
										case (int)12: {
											HX_STACK_LINE(1226)
											hx::AddEq(data->oPos,(int)2);
											HX_STACK_LINE(1226)
											hx::AddEq(data->bPos,(int)2);
										}
										;break;
										case (int)13: {
											HX_STACK_LINE(1226)
											hx::AddEq(data->oPos,(int)4);
											HX_STACK_LINE(1226)
											hx::AddEq(data->iiPos,(int)2);
											HX_STACK_LINE(1226)
											hx::AddEq(data->ffPos,(int)1);
											HX_STACK_LINE(1226)
											hx::AddEq(data->fPos,(int)1);
										}
										;break;
										case (int)14: {
											HX_STACK_LINE(1226)
											hx::AddEq(data->oPos,(int)4);
											HX_STACK_LINE(1226)
											hx::AddEq(data->iPos,(int)1);
											HX_STACK_LINE(1226)
											hx::AddEq(data->fPos,(int)2);
											HX_STACK_LINE(1226)
											hx::AddEq(data->bPos,(int)1);
										}
										;break;
										case (int)15: {
											HX_STACK_LINE(1226)
											hx::AddEq(data->fPos,(int)2);
										}
										;break;
										case (int)16: {
											HX_STACK_LINE(1226)
											hx::AddEq(data->fPos,(int)2);
										}
										;break;
										case (int)17: {
											HX_STACK_LINE(1226)
											hx::AddEq(data->oPos,(int)1);
										}
										;break;
										default: {
											HX_STACK_LINE(1226)
											Dynamic();
										}
									}
								}
								HX_STACK_LINE(1226)
								data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::DRAW_CIRCLE;
								HX_STACK_LINE(1226)
								tmp6 = data;
							}
							HX_STACK_LINE(1226)
							::openfl::_internal::renderer::DrawCommandReader c = tmp6;		HX_STACK_VAR(c,"c");
							HX_STACK_LINE(1227)
							::openfl::_internal::renderer::DrawCommandBuffer tmp7 = c->buffer;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(1227)
							int tmp8 = c->fPos;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(1227)
							int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(1227)
							Float tmp10 = tmp7->f->__get(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(1227)
							int tmp11 = offsetX;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(1227)
							Float tmp12 = (tmp10 - tmp11);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(1227)
							::openfl::_internal::renderer::DrawCommandBuffer tmp13 = c->buffer;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(1227)
							int tmp14 = c->fPos;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(1227)
							int tmp15 = (tmp14 + (int)1);		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(1227)
							Float tmp16 = tmp13->f->__get(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(1227)
							int tmp17 = offsetY;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(1227)
							Float tmp18 = (tmp16 - tmp17);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(1227)
							::openfl::_internal::renderer::DrawCommandBuffer tmp19 = c->buffer;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(1227)
							int tmp20 = c->fPos;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(1227)
							int tmp21 = (tmp20 + (int)2);		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(1227)
							Float tmp22 = tmp19->f->__get(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(1227)
							Float tmp23 = ::Math_obj::PI;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(1227)
							Float tmp24 = (tmp23 * (int)2);		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(1227)
							cairo->arc(tmp12,tmp18,tmp22,(int)0,tmp24);
						}
						;break;
						case (int)6: {
							HX_STACK_LINE(1231)
							::openfl::_internal::renderer::DrawCommandReader tmp6;		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(1231)
							{
								HX_STACK_LINE(1231)
								{
									HX_STACK_LINE(1231)
									::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
									HX_STACK_LINE(1231)
									switch( (int)(_g2->__Index())){
										case (int)0: {
											HX_STACK_LINE(1231)
											hx::AddEq(data->oPos,(int)2);
											HX_STACK_LINE(1231)
											hx::AddEq(data->bPos,(int)2);
										}
										;break;
										case (int)1: {
											HX_STACK_LINE(1231)
											hx::AddEq(data->iPos,(int)1);
											HX_STACK_LINE(1231)
											hx::AddEq(data->fPos,(int)1);
										}
										;break;
										case (int)2: {
											HX_STACK_LINE(1231)
											hx::AddEq(data->oPos,(int)4);
											HX_STACK_LINE(1231)
											hx::AddEq(data->iiPos,(int)2);
											HX_STACK_LINE(1231)
											hx::AddEq(data->ffPos,(int)1);
											HX_STACK_LINE(1231)
											hx::AddEq(data->fPos,(int)1);
										}
										;break;
										case (int)3: {
											HX_STACK_LINE(1231)
											hx::AddEq(data->fPos,(int)6);
										}
										;break;
										case (int)4: {
											HX_STACK_LINE(1231)
											hx::AddEq(data->fPos,(int)4);
										}
										;break;
										case (int)5: {
											HX_STACK_LINE(1231)
											hx::AddEq(data->fPos,(int)3);
										}
										;break;
										case (int)6: {
											HX_STACK_LINE(1231)
											hx::AddEq(data->fPos,(int)4);
										}
										;break;
										case (int)7: {
											HX_STACK_LINE(1231)
											hx::AddEq(data->fPos,(int)4);
										}
										;break;
										case (int)8: {
											HX_STACK_LINE(1231)
											hx::AddEq(data->fPos,(int)5);
											HX_STACK_LINE(1231)
											hx::AddEq(data->oPos,(int)1);
										}
										;break;
										case (int)10: {
											HX_STACK_LINE(1231)
											hx::AddEq(data->oPos,(int)4);
										}
										;break;
										case (int)11: {
											HX_STACK_LINE(1231)
											Dynamic();
										}
										;break;
										case (int)12: {
											HX_STACK_LINE(1231)
											hx::AddEq(data->oPos,(int)2);
											HX_STACK_LINE(1231)
											hx::AddEq(data->bPos,(int)2);
										}
										;break;
										case (int)13: {
											HX_STACK_LINE(1231)
											hx::AddEq(data->oPos,(int)4);
											HX_STACK_LINE(1231)
											hx::AddEq(data->iiPos,(int)2);
											HX_STACK_LINE(1231)
											hx::AddEq(data->ffPos,(int)1);
											HX_STACK_LINE(1231)
											hx::AddEq(data->fPos,(int)1);
										}
										;break;
										case (int)14: {
											HX_STACK_LINE(1231)
											hx::AddEq(data->oPos,(int)4);
											HX_STACK_LINE(1231)
											hx::AddEq(data->iPos,(int)1);
											HX_STACK_LINE(1231)
											hx::AddEq(data->fPos,(int)2);
											HX_STACK_LINE(1231)
											hx::AddEq(data->bPos,(int)1);
										}
										;break;
										case (int)15: {
											HX_STACK_LINE(1231)
											hx::AddEq(data->fPos,(int)2);
										}
										;break;
										case (int)16: {
											HX_STACK_LINE(1231)
											hx::AddEq(data->fPos,(int)2);
										}
										;break;
										case (int)17: {
											HX_STACK_LINE(1231)
											hx::AddEq(data->oPos,(int)1);
										}
										;break;
										default: {
											HX_STACK_LINE(1231)
											Dynamic();
										}
									}
								}
								HX_STACK_LINE(1231)
								data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::DRAW_ELLIPSE;
								HX_STACK_LINE(1231)
								tmp6 = data;
							}
							HX_STACK_LINE(1231)
							::openfl::_internal::renderer::DrawCommandReader c = tmp6;		HX_STACK_VAR(c,"c");
							HX_STACK_LINE(1233)
							::openfl::_internal::renderer::DrawCommandBuffer tmp7 = c->buffer;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(1233)
							int tmp8 = c->fPos;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(1233)
							int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(1233)
							Float tmp10 = tmp7->f->__get(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(1233)
							Float x = tmp10;		HX_STACK_VAR(x,"x");
							HX_STACK_LINE(1234)
							::openfl::_internal::renderer::DrawCommandBuffer tmp11 = c->buffer;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(1234)
							int tmp12 = c->fPos;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(1234)
							int tmp13 = (tmp12 + (int)1);		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(1234)
							Float tmp14 = tmp11->f->__get(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(1234)
							Float y = tmp14;		HX_STACK_VAR(y,"y");
							HX_STACK_LINE(1235)
							::openfl::_internal::renderer::DrawCommandBuffer tmp15 = c->buffer;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(1235)
							int tmp16 = c->fPos;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(1235)
							int tmp17 = (tmp16 + (int)2);		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(1235)
							Float tmp18 = tmp15->f->__get(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(1235)
							Float width = tmp18;		HX_STACK_VAR(width,"width");
							HX_STACK_LINE(1236)
							::openfl::_internal::renderer::DrawCommandBuffer tmp19 = c->buffer;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(1236)
							int tmp20 = c->fPos;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(1236)
							int tmp21 = (tmp20 + (int)3);		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(1236)
							Float tmp22 = tmp19->f->__get(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(1236)
							Float height = tmp22;		HX_STACK_VAR(height,"height");
							HX_STACK_LINE(1238)
							hx::SubEq(x,offsetX);
							HX_STACK_LINE(1239)
							hx::SubEq(y,offsetY);
							HX_STACK_LINE(1241)
							Float kappa = ((Float).5522848);		HX_STACK_VAR(kappa,"kappa");
							HX_STACK_LINE(1242)
							Float tmp23 = (Float(width) / Float((int)2));		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(1242)
							Float tmp24 = kappa;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(1242)
							Float tmp25 = (tmp23 * tmp24);		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(1242)
							Float ox = tmp25;		HX_STACK_VAR(ox,"ox");
							HX_STACK_LINE(1243)
							Float tmp26 = (Float(height) / Float((int)2));		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(1243)
							Float tmp27 = kappa;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(1243)
							Float tmp28 = (tmp26 * tmp27);		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(1243)
							Float oy = tmp28;		HX_STACK_VAR(oy,"oy");
							HX_STACK_LINE(1244)
							Float tmp29 = (x + width);		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(1244)
							Float xe = tmp29;		HX_STACK_VAR(xe,"xe");
							HX_STACK_LINE(1245)
							Float tmp30 = (y + height);		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(1245)
							Float ye = tmp30;		HX_STACK_VAR(ye,"ye");
							HX_STACK_LINE(1246)
							Float tmp31 = x;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(1246)
							Float tmp32 = (Float(width) / Float((int)2));		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(1246)
							Float tmp33 = (tmp31 + tmp32);		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(1246)
							Float xm = tmp33;		HX_STACK_VAR(xm,"xm");
							HX_STACK_LINE(1247)
							Float tmp34 = y;		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(1247)
							Float tmp35 = (Float(height) / Float((int)2));		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(1247)
							Float tmp36 = (tmp34 + tmp35);		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(1247)
							Float ym = tmp36;		HX_STACK_VAR(ym,"ym");
							HX_STACK_LINE(1251)
							Float tmp37 = x;		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(1251)
							Float tmp38 = ym;		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(1251)
							cairo->moveTo(tmp37,tmp38);
							HX_STACK_LINE(1252)
							Float tmp39 = x;		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(1252)
							Float tmp40 = (ym - oy);		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(1252)
							Float tmp41 = (xm - ox);		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(1252)
							Float tmp42 = y;		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(1252)
							Float tmp43 = xm;		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(1252)
							Float tmp44 = y;		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(1252)
							cairo->curveTo(tmp39,tmp40,tmp41,tmp42,tmp43,tmp44);
							HX_STACK_LINE(1253)
							Float tmp45 = (xm + ox);		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(1253)
							Float tmp46 = y;		HX_STACK_VAR(tmp46,"tmp46");
							HX_STACK_LINE(1253)
							Float tmp47 = xe;		HX_STACK_VAR(tmp47,"tmp47");
							HX_STACK_LINE(1253)
							Float tmp48 = (ym - oy);		HX_STACK_VAR(tmp48,"tmp48");
							HX_STACK_LINE(1253)
							Float tmp49 = xe;		HX_STACK_VAR(tmp49,"tmp49");
							HX_STACK_LINE(1253)
							Float tmp50 = ym;		HX_STACK_VAR(tmp50,"tmp50");
							HX_STACK_LINE(1253)
							cairo->curveTo(tmp45,tmp46,tmp47,tmp48,tmp49,tmp50);
							HX_STACK_LINE(1254)
							Float tmp51 = xe;		HX_STACK_VAR(tmp51,"tmp51");
							HX_STACK_LINE(1254)
							Float tmp52 = (ym + oy);		HX_STACK_VAR(tmp52,"tmp52");
							HX_STACK_LINE(1254)
							Float tmp53 = (xm + ox);		HX_STACK_VAR(tmp53,"tmp53");
							HX_STACK_LINE(1254)
							Float tmp54 = ye;		HX_STACK_VAR(tmp54,"tmp54");
							HX_STACK_LINE(1254)
							Float tmp55 = xm;		HX_STACK_VAR(tmp55,"tmp55");
							HX_STACK_LINE(1254)
							Float tmp56 = ye;		HX_STACK_VAR(tmp56,"tmp56");
							HX_STACK_LINE(1254)
							cairo->curveTo(tmp51,tmp52,tmp53,tmp54,tmp55,tmp56);
							HX_STACK_LINE(1255)
							Float tmp57 = (xm - ox);		HX_STACK_VAR(tmp57,"tmp57");
							HX_STACK_LINE(1255)
							Float tmp58 = ye;		HX_STACK_VAR(tmp58,"tmp58");
							HX_STACK_LINE(1255)
							Float tmp59 = x;		HX_STACK_VAR(tmp59,"tmp59");
							HX_STACK_LINE(1255)
							Float tmp60 = (ym + oy);		HX_STACK_VAR(tmp60,"tmp60");
							HX_STACK_LINE(1255)
							Float tmp61 = x;		HX_STACK_VAR(tmp61,"tmp61");
							HX_STACK_LINE(1255)
							Float tmp62 = ym;		HX_STACK_VAR(tmp62,"tmp62");
							HX_STACK_LINE(1255)
							cairo->curveTo(tmp57,tmp58,tmp59,tmp60,tmp61,tmp62);
						}
						;break;
						case (int)7: {
							HX_STACK_LINE(1260)
							::openfl::_internal::renderer::DrawCommandReader tmp6;		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(1260)
							{
								HX_STACK_LINE(1260)
								{
									HX_STACK_LINE(1260)
									::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
									HX_STACK_LINE(1260)
									switch( (int)(_g2->__Index())){
										case (int)0: {
											HX_STACK_LINE(1260)
											hx::AddEq(data->oPos,(int)2);
											HX_STACK_LINE(1260)
											hx::AddEq(data->bPos,(int)2);
										}
										;break;
										case (int)1: {
											HX_STACK_LINE(1260)
											hx::AddEq(data->iPos,(int)1);
											HX_STACK_LINE(1260)
											hx::AddEq(data->fPos,(int)1);
										}
										;break;
										case (int)2: {
											HX_STACK_LINE(1260)
											hx::AddEq(data->oPos,(int)4);
											HX_STACK_LINE(1260)
											hx::AddEq(data->iiPos,(int)2);
											HX_STACK_LINE(1260)
											hx::AddEq(data->ffPos,(int)1);
											HX_STACK_LINE(1260)
											hx::AddEq(data->fPos,(int)1);
										}
										;break;
										case (int)3: {
											HX_STACK_LINE(1260)
											hx::AddEq(data->fPos,(int)6);
										}
										;break;
										case (int)4: {
											HX_STACK_LINE(1260)
											hx::AddEq(data->fPos,(int)4);
										}
										;break;
										case (int)5: {
											HX_STACK_LINE(1260)
											hx::AddEq(data->fPos,(int)3);
										}
										;break;
										case (int)6: {
											HX_STACK_LINE(1260)
											hx::AddEq(data->fPos,(int)4);
										}
										;break;
										case (int)7: {
											HX_STACK_LINE(1260)
											hx::AddEq(data->fPos,(int)4);
										}
										;break;
										case (int)8: {
											HX_STACK_LINE(1260)
											hx::AddEq(data->fPos,(int)5);
											HX_STACK_LINE(1260)
											hx::AddEq(data->oPos,(int)1);
										}
										;break;
										case (int)10: {
											HX_STACK_LINE(1260)
											hx::AddEq(data->oPos,(int)4);
										}
										;break;
										case (int)11: {
											HX_STACK_LINE(1260)
											Dynamic();
										}
										;break;
										case (int)12: {
											HX_STACK_LINE(1260)
											hx::AddEq(data->oPos,(int)2);
											HX_STACK_LINE(1260)
											hx::AddEq(data->bPos,(int)2);
										}
										;break;
										case (int)13: {
											HX_STACK_LINE(1260)
											hx::AddEq(data->oPos,(int)4);
											HX_STACK_LINE(1260)
											hx::AddEq(data->iiPos,(int)2);
											HX_STACK_LINE(1260)
											hx::AddEq(data->ffPos,(int)1);
											HX_STACK_LINE(1260)
											hx::AddEq(data->fPos,(int)1);
										}
										;break;
										case (int)14: {
											HX_STACK_LINE(1260)
											hx::AddEq(data->oPos,(int)4);
											HX_STACK_LINE(1260)
											hx::AddEq(data->iPos,(int)1);
											HX_STACK_LINE(1260)
											hx::AddEq(data->fPos,(int)2);
											HX_STACK_LINE(1260)
											hx::AddEq(data->bPos,(int)1);
										}
										;break;
										case (int)15: {
											HX_STACK_LINE(1260)
											hx::AddEq(data->fPos,(int)2);
										}
										;break;
										case (int)16: {
											HX_STACK_LINE(1260)
											hx::AddEq(data->fPos,(int)2);
										}
										;break;
										case (int)17: {
											HX_STACK_LINE(1260)
											hx::AddEq(data->oPos,(int)1);
										}
										;break;
										default: {
											HX_STACK_LINE(1260)
											Dynamic();
										}
									}
								}
								HX_STACK_LINE(1260)
								data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::DRAW_RECT;
								HX_STACK_LINE(1260)
								tmp6 = data;
							}
							HX_STACK_LINE(1260)
							::openfl::_internal::renderer::DrawCommandReader c = tmp6;		HX_STACK_VAR(c,"c");
							HX_STACK_LINE(1261)
							::openfl::_internal::renderer::DrawCommandBuffer tmp7 = c->buffer;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(1261)
							int tmp8 = c->fPos;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(1261)
							int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(1261)
							Float tmp10 = tmp7->f->__get(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(1261)
							int tmp11 = offsetX;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(1261)
							Float tmp12 = (tmp10 - tmp11);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(1261)
							::openfl::_internal::renderer::DrawCommandBuffer tmp13 = c->buffer;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(1261)
							int tmp14 = c->fPos;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(1261)
							int tmp15 = (tmp14 + (int)1);		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(1261)
							Float tmp16 = tmp13->f->__get(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(1261)
							int tmp17 = offsetY;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(1261)
							Float tmp18 = (tmp16 - tmp17);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(1261)
							::openfl::_internal::renderer::DrawCommandBuffer tmp19 = c->buffer;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(1261)
							int tmp20 = c->fPos;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(1261)
							int tmp21 = (tmp20 + (int)2);		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(1261)
							Float tmp22 = tmp19->f->__get(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(1261)
							::openfl::_internal::renderer::DrawCommandBuffer tmp23 = c->buffer;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(1261)
							int tmp24 = c->fPos;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(1261)
							int tmp25 = (tmp24 + (int)3);		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(1261)
							Float tmp26 = tmp23->f->__get(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(1261)
							cairo->rectangle(tmp12,tmp18,tmp22,tmp26);
						}
						;break;
						case (int)8: {
							HX_STACK_LINE(1265)
							::openfl::_internal::renderer::DrawCommandReader tmp6;		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(1265)
							{
								HX_STACK_LINE(1265)
								{
									HX_STACK_LINE(1265)
									::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
									HX_STACK_LINE(1265)
									switch( (int)(_g2->__Index())){
										case (int)0: {
											HX_STACK_LINE(1265)
											hx::AddEq(data->oPos,(int)2);
											HX_STACK_LINE(1265)
											hx::AddEq(data->bPos,(int)2);
										}
										;break;
										case (int)1: {
											HX_STACK_LINE(1265)
											hx::AddEq(data->iPos,(int)1);
											HX_STACK_LINE(1265)
											hx::AddEq(data->fPos,(int)1);
										}
										;break;
										case (int)2: {
											HX_STACK_LINE(1265)
											hx::AddEq(data->oPos,(int)4);
											HX_STACK_LINE(1265)
											hx::AddEq(data->iiPos,(int)2);
											HX_STACK_LINE(1265)
											hx::AddEq(data->ffPos,(int)1);
											HX_STACK_LINE(1265)
											hx::AddEq(data->fPos,(int)1);
										}
										;break;
										case (int)3: {
											HX_STACK_LINE(1265)
											hx::AddEq(data->fPos,(int)6);
										}
										;break;
										case (int)4: {
											HX_STACK_LINE(1265)
											hx::AddEq(data->fPos,(int)4);
										}
										;break;
										case (int)5: {
											HX_STACK_LINE(1265)
											hx::AddEq(data->fPos,(int)3);
										}
										;break;
										case (int)6: {
											HX_STACK_LINE(1265)
											hx::AddEq(data->fPos,(int)4);
										}
										;break;
										case (int)7: {
											HX_STACK_LINE(1265)
											hx::AddEq(data->fPos,(int)4);
										}
										;break;
										case (int)8: {
											HX_STACK_LINE(1265)
											hx::AddEq(data->fPos,(int)5);
											HX_STACK_LINE(1265)
											hx::AddEq(data->oPos,(int)1);
										}
										;break;
										case (int)10: {
											HX_STACK_LINE(1265)
											hx::AddEq(data->oPos,(int)4);
										}
										;break;
										case (int)11: {
											HX_STACK_LINE(1265)
											Dynamic();
										}
										;break;
										case (int)12: {
											HX_STACK_LINE(1265)
											hx::AddEq(data->oPos,(int)2);
											HX_STACK_LINE(1265)
											hx::AddEq(data->bPos,(int)2);
										}
										;break;
										case (int)13: {
											HX_STACK_LINE(1265)
											hx::AddEq(data->oPos,(int)4);
											HX_STACK_LINE(1265)
											hx::AddEq(data->iiPos,(int)2);
											HX_STACK_LINE(1265)
											hx::AddEq(data->ffPos,(int)1);
											HX_STACK_LINE(1265)
											hx::AddEq(data->fPos,(int)1);
										}
										;break;
										case (int)14: {
											HX_STACK_LINE(1265)
											hx::AddEq(data->oPos,(int)4);
											HX_STACK_LINE(1265)
											hx::AddEq(data->iPos,(int)1);
											HX_STACK_LINE(1265)
											hx::AddEq(data->fPos,(int)2);
											HX_STACK_LINE(1265)
											hx::AddEq(data->bPos,(int)1);
										}
										;break;
										case (int)15: {
											HX_STACK_LINE(1265)
											hx::AddEq(data->fPos,(int)2);
										}
										;break;
										case (int)16: {
											HX_STACK_LINE(1265)
											hx::AddEq(data->fPos,(int)2);
										}
										;break;
										case (int)17: {
											HX_STACK_LINE(1265)
											hx::AddEq(data->oPos,(int)1);
										}
										;break;
										default: {
											HX_STACK_LINE(1265)
											Dynamic();
										}
									}
								}
								HX_STACK_LINE(1265)
								data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::DRAW_ROUND_RECT;
								HX_STACK_LINE(1265)
								tmp6 = data;
							}
							HX_STACK_LINE(1265)
							::openfl::_internal::renderer::DrawCommandReader c = tmp6;		HX_STACK_VAR(c,"c");
							HX_STACK_LINE(1266)
							::openfl::_internal::renderer::DrawCommandBuffer tmp7 = c->buffer;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(1266)
							int tmp8 = c->fPos;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(1266)
							int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(1266)
							Float tmp10 = tmp7->f->__get(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(1266)
							int tmp11 = offsetX;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(1266)
							Float tmp12 = (tmp10 - tmp11);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(1266)
							::openfl::_internal::renderer::DrawCommandBuffer tmp13 = c->buffer;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(1266)
							int tmp14 = c->fPos;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(1266)
							int tmp15 = (tmp14 + (int)1);		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(1266)
							Float tmp16 = tmp13->f->__get(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(1266)
							int tmp17 = offsetY;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(1266)
							Float tmp18 = (tmp16 - tmp17);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(1266)
							::openfl::_internal::renderer::DrawCommandBuffer tmp19 = c->buffer;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(1266)
							int tmp20 = c->fPos;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(1266)
							int tmp21 = (tmp20 + (int)2);		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(1266)
							Float tmp22 = tmp19->f->__get(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(1266)
							::openfl::_internal::renderer::DrawCommandBuffer tmp23 = c->buffer;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(1266)
							int tmp24 = c->fPos;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(1266)
							int tmp25 = (tmp24 + (int)3);		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(1266)
							Float tmp26 = tmp23->f->__get(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(1266)
							::openfl::_internal::renderer::DrawCommandBuffer tmp27 = c->buffer;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(1266)
							int tmp28 = c->fPos;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(1266)
							int tmp29 = (tmp28 + (int)4);		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(1266)
							Float tmp30 = tmp27->f->__get(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(1266)
							::openfl::_internal::renderer::DrawCommandBuffer tmp31 = c->buffer;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(1266)
							int tmp32 = c->oPos;		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(1266)
							int tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(1266)
							Dynamic tmp34 = tmp31->o->__GetItem(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(1266)
							Dynamic tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(1266)
							::openfl::_internal::renderer::cairo::CairoGraphics_obj::drawRoundRect(tmp12,tmp18,tmp22,tmp26,tmp30,tmp35);
						}
						;break;
						case (int)15: {
							HX_STACK_LINE(1270)
							::openfl::_internal::renderer::DrawCommandReader tmp6;		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(1270)
							{
								HX_STACK_LINE(1270)
								{
									HX_STACK_LINE(1270)
									::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
									HX_STACK_LINE(1270)
									switch( (int)(_g2->__Index())){
										case (int)0: {
											HX_STACK_LINE(1270)
											hx::AddEq(data->oPos,(int)2);
											HX_STACK_LINE(1270)
											hx::AddEq(data->bPos,(int)2);
										}
										;break;
										case (int)1: {
											HX_STACK_LINE(1270)
											hx::AddEq(data->iPos,(int)1);
											HX_STACK_LINE(1270)
											hx::AddEq(data->fPos,(int)1);
										}
										;break;
										case (int)2: {
											HX_STACK_LINE(1270)
											hx::AddEq(data->oPos,(int)4);
											HX_STACK_LINE(1270)
											hx::AddEq(data->iiPos,(int)2);
											HX_STACK_LINE(1270)
											hx::AddEq(data->ffPos,(int)1);
											HX_STACK_LINE(1270)
											hx::AddEq(data->fPos,(int)1);
										}
										;break;
										case (int)3: {
											HX_STACK_LINE(1270)
											hx::AddEq(data->fPos,(int)6);
										}
										;break;
										case (int)4: {
											HX_STACK_LINE(1270)
											hx::AddEq(data->fPos,(int)4);
										}
										;break;
										case (int)5: {
											HX_STACK_LINE(1270)
											hx::AddEq(data->fPos,(int)3);
										}
										;break;
										case (int)6: {
											HX_STACK_LINE(1270)
											hx::AddEq(data->fPos,(int)4);
										}
										;break;
										case (int)7: {
											HX_STACK_LINE(1270)
											hx::AddEq(data->fPos,(int)4);
										}
										;break;
										case (int)8: {
											HX_STACK_LINE(1270)
											hx::AddEq(data->fPos,(int)5);
											HX_STACK_LINE(1270)
											hx::AddEq(data->oPos,(int)1);
										}
										;break;
										case (int)10: {
											HX_STACK_LINE(1270)
											hx::AddEq(data->oPos,(int)4);
										}
										;break;
										case (int)11: {
											HX_STACK_LINE(1270)
											Dynamic();
										}
										;break;
										case (int)12: {
											HX_STACK_LINE(1270)
											hx::AddEq(data->oPos,(int)2);
											HX_STACK_LINE(1270)
											hx::AddEq(data->bPos,(int)2);
										}
										;break;
										case (int)13: {
											HX_STACK_LINE(1270)
											hx::AddEq(data->oPos,(int)4);
											HX_STACK_LINE(1270)
											hx::AddEq(data->iiPos,(int)2);
											HX_STACK_LINE(1270)
											hx::AddEq(data->ffPos,(int)1);
											HX_STACK_LINE(1270)
											hx::AddEq(data->fPos,(int)1);
										}
										;break;
										case (int)14: {
											HX_STACK_LINE(1270)
											hx::AddEq(data->oPos,(int)4);
											HX_STACK_LINE(1270)
											hx::AddEq(data->iPos,(int)1);
											HX_STACK_LINE(1270)
											hx::AddEq(data->fPos,(int)2);
											HX_STACK_LINE(1270)
											hx::AddEq(data->bPos,(int)1);
										}
										;break;
										case (int)15: {
											HX_STACK_LINE(1270)
											hx::AddEq(data->fPos,(int)2);
										}
										;break;
										case (int)16: {
											HX_STACK_LINE(1270)
											hx::AddEq(data->fPos,(int)2);
										}
										;break;
										case (int)17: {
											HX_STACK_LINE(1270)
											hx::AddEq(data->oPos,(int)1);
										}
										;break;
										default: {
											HX_STACK_LINE(1270)
											Dynamic();
										}
									}
								}
								HX_STACK_LINE(1270)
								data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::LINE_TO;
								HX_STACK_LINE(1270)
								tmp6 = data;
							}
							HX_STACK_LINE(1270)
							::openfl::_internal::renderer::DrawCommandReader c = tmp6;		HX_STACK_VAR(c,"c");
							HX_STACK_LINE(1271)
							::openfl::_internal::renderer::DrawCommandBuffer tmp7 = c->buffer;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(1271)
							int tmp8 = c->fPos;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(1271)
							int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(1271)
							Float tmp10 = tmp7->f->__get(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(1271)
							int tmp11 = offsetX;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(1271)
							Float tmp12 = (tmp10 - tmp11);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(1271)
							::openfl::_internal::renderer::DrawCommandBuffer tmp13 = c->buffer;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(1271)
							int tmp14 = c->fPos;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(1271)
							int tmp15 = (tmp14 + (int)1);		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(1271)
							Float tmp16 = tmp13->f->__get(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(1271)
							int tmp17 = offsetY;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(1271)
							Float tmp18 = (tmp16 - tmp17);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(1271)
							cairo->lineTo(tmp12,tmp18);
							HX_STACK_LINE(1272)
							::openfl::_internal::renderer::DrawCommandBuffer tmp19 = c->buffer;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(1272)
							int tmp20 = c->fPos;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(1272)
							int tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(1272)
							Float tmp22 = tmp19->f->__get(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(1272)
							positionX = tmp22;
							HX_STACK_LINE(1273)
							::openfl::_internal::renderer::DrawCommandBuffer tmp23 = c->buffer;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(1273)
							int tmp24 = c->fPos;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(1273)
							int tmp25 = (tmp24 + (int)1);		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(1273)
							Float tmp26 = tmp23->f->__get(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(1273)
							positionY = tmp26;
						}
						;break;
						case (int)16: {
							HX_STACK_LINE(1277)
							::openfl::_internal::renderer::DrawCommandReader tmp6;		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(1277)
							{
								HX_STACK_LINE(1277)
								{
									HX_STACK_LINE(1277)
									::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
									HX_STACK_LINE(1277)
									switch( (int)(_g2->__Index())){
										case (int)0: {
											HX_STACK_LINE(1277)
											hx::AddEq(data->oPos,(int)2);
											HX_STACK_LINE(1277)
											hx::AddEq(data->bPos,(int)2);
										}
										;break;
										case (int)1: {
											HX_STACK_LINE(1277)
											hx::AddEq(data->iPos,(int)1);
											HX_STACK_LINE(1277)
											hx::AddEq(data->fPos,(int)1);
										}
										;break;
										case (int)2: {
											HX_STACK_LINE(1277)
											hx::AddEq(data->oPos,(int)4);
											HX_STACK_LINE(1277)
											hx::AddEq(data->iiPos,(int)2);
											HX_STACK_LINE(1277)
											hx::AddEq(data->ffPos,(int)1);
											HX_STACK_LINE(1277)
											hx::AddEq(data->fPos,(int)1);
										}
										;break;
										case (int)3: {
											HX_STACK_LINE(1277)
											hx::AddEq(data->fPos,(int)6);
										}
										;break;
										case (int)4: {
											HX_STACK_LINE(1277)
											hx::AddEq(data->fPos,(int)4);
										}
										;break;
										case (int)5: {
											HX_STACK_LINE(1277)
											hx::AddEq(data->fPos,(int)3);
										}
										;break;
										case (int)6: {
											HX_STACK_LINE(1277)
											hx::AddEq(data->fPos,(int)4);
										}
										;break;
										case (int)7: {
											HX_STACK_LINE(1277)
											hx::AddEq(data->fPos,(int)4);
										}
										;break;
										case (int)8: {
											HX_STACK_LINE(1277)
											hx::AddEq(data->fPos,(int)5);
											HX_STACK_LINE(1277)
											hx::AddEq(data->oPos,(int)1);
										}
										;break;
										case (int)10: {
											HX_STACK_LINE(1277)
											hx::AddEq(data->oPos,(int)4);
										}
										;break;
										case (int)11: {
											HX_STACK_LINE(1277)
											Dynamic();
										}
										;break;
										case (int)12: {
											HX_STACK_LINE(1277)
											hx::AddEq(data->oPos,(int)2);
											HX_STACK_LINE(1277)
											hx::AddEq(data->bPos,(int)2);
										}
										;break;
										case (int)13: {
											HX_STACK_LINE(1277)
											hx::AddEq(data->oPos,(int)4);
											HX_STACK_LINE(1277)
											hx::AddEq(data->iiPos,(int)2);
											HX_STACK_LINE(1277)
											hx::AddEq(data->ffPos,(int)1);
											HX_STACK_LINE(1277)
											hx::AddEq(data->fPos,(int)1);
										}
										;break;
										case (int)14: {
											HX_STACK_LINE(1277)
											hx::AddEq(data->oPos,(int)4);
											HX_STACK_LINE(1277)
											hx::AddEq(data->iPos,(int)1);
											HX_STACK_LINE(1277)
											hx::AddEq(data->fPos,(int)2);
											HX_STACK_LINE(1277)
											hx::AddEq(data->bPos,(int)1);
										}
										;break;
										case (int)15: {
											HX_STACK_LINE(1277)
											hx::AddEq(data->fPos,(int)2);
										}
										;break;
										case (int)16: {
											HX_STACK_LINE(1277)
											hx::AddEq(data->fPos,(int)2);
										}
										;break;
										case (int)17: {
											HX_STACK_LINE(1277)
											hx::AddEq(data->oPos,(int)1);
										}
										;break;
										default: {
											HX_STACK_LINE(1277)
											Dynamic();
										}
									}
								}
								HX_STACK_LINE(1277)
								data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::MOVE_TO;
								HX_STACK_LINE(1277)
								tmp6 = data;
							}
							HX_STACK_LINE(1277)
							::openfl::_internal::renderer::DrawCommandReader c = tmp6;		HX_STACK_VAR(c,"c");
							HX_STACK_LINE(1278)
							::openfl::_internal::renderer::DrawCommandBuffer tmp7 = c->buffer;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(1278)
							int tmp8 = c->fPos;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(1278)
							int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(1278)
							Float tmp10 = tmp7->f->__get(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(1278)
							int tmp11 = offsetX;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(1278)
							Float tmp12 = (tmp10 - tmp11);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(1278)
							::openfl::_internal::renderer::DrawCommandBuffer tmp13 = c->buffer;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(1278)
							int tmp14 = c->fPos;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(1278)
							int tmp15 = (tmp14 + (int)1);		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(1278)
							Float tmp16 = tmp13->f->__get(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(1278)
							int tmp17 = offsetY;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(1278)
							Float tmp18 = (tmp16 - tmp17);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(1278)
							cairo->moveTo(tmp12,tmp18);
							HX_STACK_LINE(1279)
							::openfl::_internal::renderer::DrawCommandBuffer tmp19 = c->buffer;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(1279)
							int tmp20 = c->fPos;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(1279)
							int tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(1279)
							Float tmp22 = tmp19->f->__get(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(1279)
							positionX = tmp22;
							HX_STACK_LINE(1280)
							::openfl::_internal::renderer::DrawCommandBuffer tmp23 = c->buffer;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(1280)
							int tmp24 = c->fPos;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(1280)
							int tmp25 = (tmp24 + (int)1);		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(1280)
							Float tmp26 = tmp23->f->__get(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(1280)
							positionY = tmp26;
						}
						;break;
						default: {
							HX_STACK_LINE(1284)
							{
								HX_STACK_LINE(1284)
								::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
								HX_STACK_LINE(1284)
								switch( (int)(_g2->__Index())){
									case (int)0: {
										HX_STACK_LINE(1284)
										hx::AddEq(data->oPos,(int)2);
										HX_STACK_LINE(1284)
										hx::AddEq(data->bPos,(int)2);
									}
									;break;
									case (int)1: {
										HX_STACK_LINE(1284)
										hx::AddEq(data->iPos,(int)1);
										HX_STACK_LINE(1284)
										hx::AddEq(data->fPos,(int)1);
									}
									;break;
									case (int)2: {
										HX_STACK_LINE(1284)
										hx::AddEq(data->oPos,(int)4);
										HX_STACK_LINE(1284)
										hx::AddEq(data->iiPos,(int)2);
										HX_STACK_LINE(1284)
										hx::AddEq(data->ffPos,(int)1);
										HX_STACK_LINE(1284)
										hx::AddEq(data->fPos,(int)1);
									}
									;break;
									case (int)3: {
										HX_STACK_LINE(1284)
										hx::AddEq(data->fPos,(int)6);
									}
									;break;
									case (int)4: {
										HX_STACK_LINE(1284)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)5: {
										HX_STACK_LINE(1284)
										hx::AddEq(data->fPos,(int)3);
									}
									;break;
									case (int)6: {
										HX_STACK_LINE(1284)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)7: {
										HX_STACK_LINE(1284)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)8: {
										HX_STACK_LINE(1284)
										hx::AddEq(data->fPos,(int)5);
										HX_STACK_LINE(1284)
										hx::AddEq(data->oPos,(int)1);
									}
									;break;
									case (int)10: {
										HX_STACK_LINE(1284)
										hx::AddEq(data->oPos,(int)4);
									}
									;break;
									case (int)11: {
										HX_STACK_LINE(1284)
										Dynamic();
									}
									;break;
									case (int)12: {
										HX_STACK_LINE(1284)
										hx::AddEq(data->oPos,(int)2);
										HX_STACK_LINE(1284)
										hx::AddEq(data->bPos,(int)2);
									}
									;break;
									case (int)13: {
										HX_STACK_LINE(1284)
										hx::AddEq(data->oPos,(int)4);
										HX_STACK_LINE(1284)
										hx::AddEq(data->iiPos,(int)2);
										HX_STACK_LINE(1284)
										hx::AddEq(data->ffPos,(int)1);
										HX_STACK_LINE(1284)
										hx::AddEq(data->fPos,(int)1);
									}
									;break;
									case (int)14: {
										HX_STACK_LINE(1284)
										hx::AddEq(data->oPos,(int)4);
										HX_STACK_LINE(1284)
										hx::AddEq(data->iPos,(int)1);
										HX_STACK_LINE(1284)
										hx::AddEq(data->fPos,(int)2);
										HX_STACK_LINE(1284)
										hx::AddEq(data->bPos,(int)1);
									}
									;break;
									case (int)15: {
										HX_STACK_LINE(1284)
										hx::AddEq(data->fPos,(int)2);
									}
									;break;
									case (int)16: {
										HX_STACK_LINE(1284)
										hx::AddEq(data->fPos,(int)2);
									}
									;break;
									case (int)17: {
										HX_STACK_LINE(1284)
										hx::AddEq(data->oPos,(int)1);
									}
									;break;
									default: {
										HX_STACK_LINE(1284)
										Dynamic();
									}
								}
							}
							HX_STACK_LINE(1284)
							data->prev = type;
						}
					}
				}
			}
			HX_STACK_LINE(1290)
			data->destroy();
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CairoGraphics_obj,renderMask,(void))


CairoGraphics_obj::CairoGraphics_obj()
{
}

bool CairoGraphics_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"SIN45") ) { outValue = SIN45; return true;  }
		if (HX_FIELD_EQ(inName,"TAN22") ) { outValue = TAN22; return true;  }
		if (HX_FIELD_EQ(inName,"cairo") ) { outValue = cairo; return true;  }
		if (HX_FIELD_EQ(inName,"isCCW") ) { outValue = isCCW_dyn(); return true;  }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"bounds") ) { outValue = bounds; return true;  }
		if (HX_FIELD_EQ(inName,"render") ) { outValue = render_dyn(); return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"hasFill") ) { outValue = hasFill; return true;  }
		if (HX_FIELD_EQ(inName,"endFill") ) { outValue = endFill_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"hitTest") ) { outValue = hitTest_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"graphics") ) { outValue = graphics; return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"hasStroke") ) { outValue = hasStroke; return true;  }
		if (HX_FIELD_EQ(inName,"closePath") ) { outValue = closePath_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"endStroke") ) { outValue = endStroke_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bitmapFill") ) { outValue = bitmapFill; return true;  }
		if (HX_FIELD_EQ(inName,"hitTesting") ) { outValue = hitTesting; return true;  }
		if (HX_FIELD_EQ(inName,"renderMask") ) { outValue = renderMask_dyn(); return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"fillPattern") ) { outValue = fillPattern; return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"bitmapRepeat") ) { outValue = bitmapRepeat; return true;  }
		if (HX_FIELD_EQ(inName,"fillCommands") ) { outValue = fillCommands; return true;  }
		if (HX_FIELD_EQ(inName,"normalizeUVT") ) { outValue = normalizeUVT_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"playCommands") ) { outValue = playCommands_dyn(); return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"pendingMatrix") ) { outValue = pendingMatrix; return true;  }
		if (HX_FIELD_EQ(inName,"strokePattern") ) { outValue = strokePattern; return true;  }
		if (HX_FIELD_EQ(inName,"drawRoundRect") ) { outValue = drawRoundRect_dyn(); return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"strokeCommands") ) { outValue = strokeCommands; return true;  }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"quadraticCurveTo") ) { outValue = quadraticCurveTo_dyn(); return true;  }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"fillPatternMatrix") ) { outValue = fillPatternMatrix; return true;  }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"createImagePattern") ) { outValue = createImagePattern_dyn(); return true;  }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"inversePendingMatrix") ) { outValue = inversePendingMatrix; return true;  }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"createGradientPattern") ) { outValue = createGradientPattern_dyn(); return true;  }
	}
	return false;
}

bool CairoGraphics_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"SIN45") ) { SIN45=ioValue.Cast< Float >(); return true; }
		if (HX_FIELD_EQ(inName,"TAN22") ) { TAN22=ioValue.Cast< Float >(); return true; }
		if (HX_FIELD_EQ(inName,"cairo") ) { cairo=ioValue.Cast< ::lime::graphics::cairo::Cairo >(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"bounds") ) { bounds=ioValue.Cast< ::openfl::geom::Rectangle >(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"hasFill") ) { hasFill=ioValue.Cast< bool >(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"graphics") ) { graphics=ioValue.Cast< ::openfl::display::Graphics >(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"hasStroke") ) { hasStroke=ioValue.Cast< bool >(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bitmapFill") ) { bitmapFill=ioValue.Cast< ::openfl::display::BitmapData >(); return true; }
		if (HX_FIELD_EQ(inName,"hitTesting") ) { hitTesting=ioValue.Cast< bool >(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"fillPattern") ) { fillPattern=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"bitmapRepeat") ) { bitmapRepeat=ioValue.Cast< bool >(); return true; }
		if (HX_FIELD_EQ(inName,"fillCommands") ) { fillCommands=ioValue.Cast< ::openfl::_internal::renderer::DrawCommandBuffer >(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"pendingMatrix") ) { pendingMatrix=ioValue.Cast< ::openfl::geom::Matrix >(); return true; }
		if (HX_FIELD_EQ(inName,"strokePattern") ) { strokePattern=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"strokeCommands") ) { strokeCommands=ioValue.Cast< ::openfl::_internal::renderer::DrawCommandBuffer >(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"fillPatternMatrix") ) { fillPatternMatrix=ioValue.Cast< ::openfl::geom::Matrix >(); return true; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"inversePendingMatrix") ) { inversePendingMatrix=ioValue.Cast< ::openfl::geom::Matrix >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsFloat,(void *) &CairoGraphics_obj::SIN45,HX_HCSTRING("SIN45","\x79","\x16","\xbe","\xfa")},
	{hx::fsFloat,(void *) &CairoGraphics_obj::TAN22,HX_HCSTRING("TAN22","\x41","\xf4","\xda","\x88")},
	{hx::fsObject /*::openfl::display::BitmapData*/ ,(void *) &CairoGraphics_obj::bitmapFill,HX_HCSTRING("bitmapFill","\x12","\x2e","\x19","\x35")},
	{hx::fsBool,(void *) &CairoGraphics_obj::bitmapRepeat,HX_HCSTRING("bitmapRepeat","\xaa","\x38","\x9c","\x11")},
	{hx::fsObject /*::openfl::geom::Rectangle*/ ,(void *) &CairoGraphics_obj::bounds,HX_HCSTRING("bounds","\x75","\x86","\x1d","\x66")},
	{hx::fsObject /*::lime::graphics::cairo::Cairo*/ ,(void *) &CairoGraphics_obj::cairo,HX_HCSTRING("cairo","\x88","\x30","\x19","\x41")},
	{hx::fsObject /*::openfl::_internal::renderer::DrawCommandBuffer*/ ,(void *) &CairoGraphics_obj::fillCommands,HX_HCSTRING("fillCommands","\x6b","\xf6","\xc9","\xc2")},
	{hx::fsObject /*Dynamic*/ ,(void *) &CairoGraphics_obj::fillPattern,HX_HCSTRING("fillPattern","\x0d","\x86","\x12","\x35")},
	{hx::fsObject /*::openfl::geom::Matrix*/ ,(void *) &CairoGraphics_obj::fillPatternMatrix,HX_HCSTRING("fillPatternMatrix","\x2e","\xb8","\xae","\x97")},
	{hx::fsObject /*::openfl::display::Graphics*/ ,(void *) &CairoGraphics_obj::graphics,HX_HCSTRING("graphics","\xcb","\xf8","\x67","\x12")},
	{hx::fsBool,(void *) &CairoGraphics_obj::hasFill,HX_HCSTRING("hasFill","\xfd","\xee","\xff","\x12")},
	{hx::fsBool,(void *) &CairoGraphics_obj::hasStroke,HX_HCSTRING("hasStroke","\xb2","\x66","\x1d","\x52")},
	{hx::fsBool,(void *) &CairoGraphics_obj::hitTesting,HX_HCSTRING("hitTesting","\xbd","\x65","\x48","\x19")},
	{hx::fsObject /*::openfl::geom::Matrix*/ ,(void *) &CairoGraphics_obj::inversePendingMatrix,HX_HCSTRING("inversePendingMatrix","\x28","\x14","\x8c","\xbb")},
	{hx::fsObject /*::openfl::geom::Matrix*/ ,(void *) &CairoGraphics_obj::pendingMatrix,HX_HCSTRING("pendingMatrix","\xf8","\x9d","\x96","\xb5")},
	{hx::fsObject /*::openfl::_internal::renderer::DrawCommandBuffer*/ ,(void *) &CairoGraphics_obj::strokeCommands,HX_HCSTRING("strokeCommands","\xa0","\x98","\x2a","\x67")},
	{hx::fsObject /*Dynamic*/ ,(void *) &CairoGraphics_obj::strokePattern,HX_HCSTRING("strokePattern","\x78","\xe1","\x21","\x7e")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CairoGraphics_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(CairoGraphics_obj::SIN45,"SIN45");
	HX_MARK_MEMBER_NAME(CairoGraphics_obj::TAN22,"TAN22");
	HX_MARK_MEMBER_NAME(CairoGraphics_obj::bitmapFill,"bitmapFill");
	HX_MARK_MEMBER_NAME(CairoGraphics_obj::bitmapRepeat,"bitmapRepeat");
	HX_MARK_MEMBER_NAME(CairoGraphics_obj::bounds,"bounds");
	HX_MARK_MEMBER_NAME(CairoGraphics_obj::cairo,"cairo");
	HX_MARK_MEMBER_NAME(CairoGraphics_obj::fillCommands,"fillCommands");
	HX_MARK_MEMBER_NAME(CairoGraphics_obj::fillPattern,"fillPattern");
	HX_MARK_MEMBER_NAME(CairoGraphics_obj::fillPatternMatrix,"fillPatternMatrix");
	HX_MARK_MEMBER_NAME(CairoGraphics_obj::graphics,"graphics");
	HX_MARK_MEMBER_NAME(CairoGraphics_obj::hasFill,"hasFill");
	HX_MARK_MEMBER_NAME(CairoGraphics_obj::hasStroke,"hasStroke");
	HX_MARK_MEMBER_NAME(CairoGraphics_obj::hitTesting,"hitTesting");
	HX_MARK_MEMBER_NAME(CairoGraphics_obj::inversePendingMatrix,"inversePendingMatrix");
	HX_MARK_MEMBER_NAME(CairoGraphics_obj::pendingMatrix,"pendingMatrix");
	HX_MARK_MEMBER_NAME(CairoGraphics_obj::strokeCommands,"strokeCommands");
	HX_MARK_MEMBER_NAME(CairoGraphics_obj::strokePattern,"strokePattern");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CairoGraphics_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(CairoGraphics_obj::SIN45,"SIN45");
	HX_VISIT_MEMBER_NAME(CairoGraphics_obj::TAN22,"TAN22");
	HX_VISIT_MEMBER_NAME(CairoGraphics_obj::bitmapFill,"bitmapFill");
	HX_VISIT_MEMBER_NAME(CairoGraphics_obj::bitmapRepeat,"bitmapRepeat");
	HX_VISIT_MEMBER_NAME(CairoGraphics_obj::bounds,"bounds");
	HX_VISIT_MEMBER_NAME(CairoGraphics_obj::cairo,"cairo");
	HX_VISIT_MEMBER_NAME(CairoGraphics_obj::fillCommands,"fillCommands");
	HX_VISIT_MEMBER_NAME(CairoGraphics_obj::fillPattern,"fillPattern");
	HX_VISIT_MEMBER_NAME(CairoGraphics_obj::fillPatternMatrix,"fillPatternMatrix");
	HX_VISIT_MEMBER_NAME(CairoGraphics_obj::graphics,"graphics");
	HX_VISIT_MEMBER_NAME(CairoGraphics_obj::hasFill,"hasFill");
	HX_VISIT_MEMBER_NAME(CairoGraphics_obj::hasStroke,"hasStroke");
	HX_VISIT_MEMBER_NAME(CairoGraphics_obj::hitTesting,"hitTesting");
	HX_VISIT_MEMBER_NAME(CairoGraphics_obj::inversePendingMatrix,"inversePendingMatrix");
	HX_VISIT_MEMBER_NAME(CairoGraphics_obj::pendingMatrix,"pendingMatrix");
	HX_VISIT_MEMBER_NAME(CairoGraphics_obj::strokeCommands,"strokeCommands");
	HX_VISIT_MEMBER_NAME(CairoGraphics_obj::strokePattern,"strokePattern");
};

#endif

hx::Class CairoGraphics_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("SIN45","\x79","\x16","\xbe","\xfa"),
	HX_HCSTRING("TAN22","\x41","\xf4","\xda","\x88"),
	HX_HCSTRING("bitmapFill","\x12","\x2e","\x19","\x35"),
	HX_HCSTRING("bitmapRepeat","\xaa","\x38","\x9c","\x11"),
	HX_HCSTRING("bounds","\x75","\x86","\x1d","\x66"),
	HX_HCSTRING("cairo","\x88","\x30","\x19","\x41"),
	HX_HCSTRING("fillCommands","\x6b","\xf6","\xc9","\xc2"),
	HX_HCSTRING("fillPattern","\x0d","\x86","\x12","\x35"),
	HX_HCSTRING("fillPatternMatrix","\x2e","\xb8","\xae","\x97"),
	HX_HCSTRING("graphics","\xcb","\xf8","\x67","\x12"),
	HX_HCSTRING("hasFill","\xfd","\xee","\xff","\x12"),
	HX_HCSTRING("hasStroke","\xb2","\x66","\x1d","\x52"),
	HX_HCSTRING("hitTesting","\xbd","\x65","\x48","\x19"),
	HX_HCSTRING("inversePendingMatrix","\x28","\x14","\x8c","\xbb"),
	HX_HCSTRING("pendingMatrix","\xf8","\x9d","\x96","\xb5"),
	HX_HCSTRING("strokeCommands","\xa0","\x98","\x2a","\x67"),
	HX_HCSTRING("strokePattern","\x78","\xe1","\x21","\x7e"),
	HX_HCSTRING("closePath","\x7d","\x65","\x20","\x14"),
	HX_HCSTRING("createGradientPattern","\xa4","\xee","\x44","\xf6"),
	HX_HCSTRING("createImagePattern","\x51","\xbd","\x5d","\xfb"),
	HX_HCSTRING("drawRoundRect","\xee","\xc3","\xaa","\xe2"),
	HX_HCSTRING("endFill","\xfe","\x87","\xe0","\x25"),
	HX_HCSTRING("endStroke","\xf3","\x01","\x17","\x51"),
	HX_HCSTRING("hitTest","\x45","\x60","\x7f","\xe2"),
	HX_HCSTRING("isCCW","\x0d","\x84","\x49","\xc1"),
	HX_HCSTRING("normalizeUVT","\x66","\x09","\x2f","\x47"),
	HX_HCSTRING("playCommands","\xdc","\xae","\xee","\x49"),
	HX_HCSTRING("quadraticCurveTo","\x12","\x48","\xc3","\x82"),
	HX_HCSTRING("render","\x56","\x6b","\x29","\x05"),
	HX_HCSTRING("renderMask","\x62","\x3b","\x60","\xe5"),
	::String(null()) };

void CairoGraphics_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.renderer.cairo.CairoGraphics","\x72","\x72","\xef","\x3c");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &CairoGraphics_obj::__GetStatic;
	__mClass->mSetStaticField = &CairoGraphics_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< CairoGraphics_obj >;
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

void CairoGraphics_obj::__boot()
{
	SIN45= ((Float)0.70710678118654752440084436210485);
	TAN22= ((Float)0.4142135623730950488016887242097);
	fillCommands= ::openfl::_internal::renderer::DrawCommandBuffer_obj::__new();
	strokeCommands= ::openfl::_internal::renderer::DrawCommandBuffer_obj::__new();
}

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace cairo
