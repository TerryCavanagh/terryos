#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxegon_Col
#include <haxegon/Col.h>
#endif
#ifndef INCLUDED_haxegon_Debug
#include <haxegon/Debug.h>
#endif
#ifndef INCLUDED_haxegon_Gfx
#include <haxegon/Gfx.h>
#endif
#ifndef INCLUDED_haxegon_Text
#include <haxegon/Text.h>
#endif
#ifndef INCLUDED_haxegon_util_AnimationContainer
#include <haxegon/util/AnimationContainer.h>
#endif
#ifndef INCLUDED_haxegon_util_Tileset
#include <haxegon/util/Tileset.h>
#endif
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_openfl_Assets
#include <openfl/Assets.h>
#endif
#ifndef INCLUDED_openfl_Lib
#include <openfl/Lib.h>
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
#ifndef INCLUDED_openfl_display_MovieClip
#include <openfl/display/MovieClip.h>
#endif
#ifndef INCLUDED_openfl_display_Shape
#include <openfl/display/Shape.h>
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
#ifndef INCLUDED_openfl_geom_ColorTransform
#include <openfl/geom/ColorTransform.h>
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
#ifndef INCLUDED_openfl_system_Capabilities
#include <openfl/system/Capabilities.h>
#endif
namespace haxegon{

Void Gfx_obj::__construct()
{
	return null();
}

//Gfx_obj::~Gfx_obj() { }

Dynamic Gfx_obj::__CreateEmpty() { return  new Gfx_obj; }
hx::ObjectPtr< Gfx_obj > Gfx_obj::__new()
{  hx::ObjectPtr< Gfx_obj > _result_ = new Gfx_obj();
	_result_->__construct();
	return _result_;}

Dynamic Gfx_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Gfx_obj > _result_ = new Gfx_obj();
	_result_->__construct();
	return _result_;}

int Gfx_obj::LEFT;

int Gfx_obj::RIGHT;

int Gfx_obj::TOP;

int Gfx_obj::BOTTOM;

int Gfx_obj::CENTER;

int Gfx_obj::screenwidth;

int Gfx_obj::screenheight;

int Gfx_obj::screenwidthmid;

int Gfx_obj::screenheightmid;

bool Gfx_obj::clearscreeneachframe;

int Gfx_obj::screenscale;

int Gfx_obj::devicexres;

int Gfx_obj::deviceyres;

bool Gfx_obj::fullscreen;

::String Gfx_obj::currenttilesetname;

::openfl::display::BitmapData Gfx_obj::backbuffer;

::openfl::display::BitmapData Gfx_obj::drawto;

Void Gfx_obj::resizescreen( Float width,Float height,hx::Null< int >  __o_scale){
int scale = __o_scale.Default(1);
	HX_STACK_FRAME("haxegon.Gfx","resizescreen",0x567f03e3,"haxegon.Gfx.resizescreen","haxegon/Gfx.hx",43,0xa6405f94)
	HX_STACK_ARG(width,"width")
	HX_STACK_ARG(height,"height")
	HX_STACK_ARG(scale,"scale")
{
		HX_STACK_LINE(44)
		Float tmp = width;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(44)
		int tmp1 = ::Std_obj::_int(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(44)
		Float tmp2 = height;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(44)
		int tmp3 = ::Std_obj::_int(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(44)
		int tmp4 = scale;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(44)
		::haxegon::Gfx_obj::initgfx(tmp1,tmp3,tmp4);
		HX_STACK_LINE(50)
		::openfl::display::Stage tmp5 = ::haxegon::Gfx_obj::gfxstage;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(50)
		::haxegon::Text_obj::init(tmp5);
		HX_STACK_LINE(51)
		::haxegon::Gfx_obj::showfps = false;
		HX_STACK_LINE(52)
		::openfl::display::Stage tmp6 = ::haxegon::Gfx_obj::gfxstage;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(52)
		::openfl::display::Bitmap tmp7 = ::haxegon::Gfx_obj::screen;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(52)
		tmp6->addChild(tmp7);
		HX_STACK_LINE(54)
		::haxegon::Gfx_obj::updategraphicsmode();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Gfx_obj,resizescreen,(void))

Void Gfx_obj::setfullscreen( bool fs){
{
		HX_STACK_FRAME("haxegon.Gfx","setfullscreen",0xf842877a,"haxegon.Gfx.setfullscreen","haxegon/Gfx.hx",57,0xa6405f94)
		HX_STACK_ARG(fs,"fs")
		HX_STACK_LINE(58)
		::haxegon::Gfx_obj::fullscreen = fs;
		HX_STACK_LINE(59)
		::haxegon::Gfx_obj::updategraphicsmode();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Gfx_obj,setfullscreen,(void))

int Gfx_obj::getscreenx( Float _x){
	HX_STACK_FRAME("haxegon.Gfx","getscreenx",0x87a9aa79,"haxegon.Gfx.getscreenx","haxegon/Gfx.hx",62,0xa6405f94)
	HX_STACK_ARG(_x,"_x")
	HX_STACK_LINE(63)
	Float tmp = _x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(63)
	::openfl::display::Bitmap tmp1 = ::haxegon::Gfx_obj::screen;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(63)
	Float tmp2 = tmp1->get_x();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(63)
	Float tmp3 = (tmp - tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(63)
	int tmp4 = ::haxegon::Gfx_obj::screenwidth;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(63)
	Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(63)
	::openfl::display::Bitmap tmp6 = ::haxegon::Gfx_obj::screen;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(63)
	Float tmp7 = tmp6->get_width();		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(63)
	Float tmp8 = (Float(tmp5) / Float(tmp7));		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(63)
	int tmp9 = ::Math_obj::floor(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(63)
	return tmp9;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Gfx_obj,getscreenx,return )

int Gfx_obj::getscreeny( Float _y){
	HX_STACK_FRAME("haxegon.Gfx","getscreeny",0x87a9aa7a,"haxegon.Gfx.getscreeny","haxegon/Gfx.hx",66,0xa6405f94)
	HX_STACK_ARG(_y,"_y")
	HX_STACK_LINE(67)
	Float tmp = _y;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(67)
	::openfl::display::Bitmap tmp1 = ::haxegon::Gfx_obj::screen;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(67)
	Float tmp2 = tmp1->get_y();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(67)
	Float tmp3 = (tmp - tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(67)
	int tmp4 = ::haxegon::Gfx_obj::screenheight;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(67)
	Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(67)
	::openfl::display::Bitmap tmp6 = ::haxegon::Gfx_obj::screen;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(67)
	Float tmp7 = tmp6->get_height();		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(67)
	Float tmp8 = (Float(tmp5) / Float(tmp7));		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(67)
	int tmp9 = ::Math_obj::floor(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(67)
	return tmp9;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Gfx_obj,getscreeny,return )

bool Gfx_obj::showfps;

int Gfx_obj::render_fps;

int Gfx_obj::render_fps_max;

int Gfx_obj::update_fps;

int Gfx_obj::update_fps_max;

int Gfx_obj::fps( ){
	HX_STACK_FRAME("haxegon.Gfx","fps",0x98df44c6,"haxegon.Gfx.fps","haxegon/Gfx.hx",75,0xa6405f94)
	HX_STACK_LINE(76)
	int tmp = ::haxegon::Gfx_obj::render_fps_max;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(76)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Gfx_obj,fps,return )

int Gfx_obj::updatefps( ){
	HX_STACK_FRAME("haxegon.Gfx","updatefps",0xa9d0ee1d,"haxegon.Gfx.updatefps","haxegon/Gfx.hx",78,0xa6405f94)
	HX_STACK_LINE(79)
	int tmp = ::haxegon::Gfx_obj::update_fps_max;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(79)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Gfx_obj,updatefps,return )

Void Gfx_obj::reset( ){
{
		HX_STACK_FRAME("haxegon.Gfx","reset",0xe45877ec,"haxegon.Gfx.reset","haxegon/Gfx.hx",83,0xa6405f94)
		HX_STACK_LINE(84)
		::haxegon::Gfx_obj::transform = false;
		HX_STACK_LINE(85)
		::haxegon::Gfx_obj::imagerotate = (int)0;
		HX_STACK_LINE(86)
		::haxegon::Gfx_obj::imagerotatexpivot = (int)0;
		HX_STACK_LINE(86)
		::haxegon::Gfx_obj::imagerotateypivot = (int)0;
		HX_STACK_LINE(87)
		::haxegon::Gfx_obj::imagexscale = ((Float)1.0);
		HX_STACK_LINE(87)
		::haxegon::Gfx_obj::imageyscale = ((Float)1.0);
		HX_STACK_LINE(88)
		::haxegon::Gfx_obj::imagescalexpivot = (int)0;
		HX_STACK_LINE(88)
		::haxegon::Gfx_obj::imagescaleypivot = (int)0;
		HX_STACK_LINE(90)
		::haxegon::Gfx_obj::coltransform = false;
		HX_STACK_LINE(91)
		::haxegon::Gfx_obj::imagealphamult = ((Float)1.0);
		HX_STACK_LINE(91)
		::haxegon::Gfx_obj::imageredmult = ((Float)1.0);
		HX_STACK_LINE(91)
		::haxegon::Gfx_obj::imagegreenmult = ((Float)1.0);
		HX_STACK_LINE(91)
		::haxegon::Gfx_obj::imagebluemult = ((Float)1.0);
		HX_STACK_LINE(92)
		::haxegon::Gfx_obj::imageredadd = ((Float)0.0);
		HX_STACK_LINE(92)
		::haxegon::Gfx_obj::imagegreenadd = ((Float)0.0);
		HX_STACK_LINE(92)
		::haxegon::Gfx_obj::imageblueadd = ((Float)0.0);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Gfx_obj,reset,(void))

Void Gfx_obj::reset_ifclear( ){
{
		HX_STACK_FRAME("haxegon.Gfx","reset_ifclear",0x037c91fd,"haxegon.Gfx.reset_ifclear","haxegon/Gfx.hx",96,0xa6405f94)
		HX_STACK_LINE(97)
		Float tmp = ::haxegon::Gfx_obj::imagerotate;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(97)
		bool tmp1 = (tmp == (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(97)
		if ((tmp1)){
			HX_STACK_LINE(98)
			Float tmp2 = ::haxegon::Gfx_obj::imagexscale;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(98)
			bool tmp3 = (tmp2 == ((Float)1.0));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(98)
			if ((tmp3)){
				HX_STACK_LINE(99)
				Float tmp4 = ::haxegon::Gfx_obj::imageyscale;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(99)
				bool tmp5 = (tmp4 == ((Float)1.0));		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(99)
				if ((tmp5)){
					HX_STACK_LINE(100)
					::haxegon::Gfx_obj::transform = false;
				}
			}
		}
		HX_STACK_LINE(105)
		Float tmp2 = ::haxegon::Gfx_obj::imagealphamult;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(105)
		bool tmp3 = (tmp2 == ((Float)1.0));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(105)
		if ((tmp3)){
			HX_STACK_LINE(106)
			Float tmp4 = ::haxegon::Gfx_obj::imageredmult;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(106)
			bool tmp5 = (tmp4 == ((Float)1.0));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(106)
			bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(106)
			bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(106)
			if ((tmp6)){
				HX_STACK_LINE(106)
				Float tmp8 = ::haxegon::Gfx_obj::imagegreenmult;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(106)
				Float tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(106)
				Float tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(106)
				tmp7 = (tmp10 == ((Float)1.0));
			}
			else{
				HX_STACK_LINE(106)
				tmp7 = false;
			}
			HX_STACK_LINE(106)
			bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(106)
			bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(106)
			if ((tmp8)){
				HX_STACK_LINE(106)
				Float tmp10 = ::haxegon::Gfx_obj::imagebluemult;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(106)
				Float tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(106)
				Float tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(106)
				tmp9 = (tmp12 == ((Float)1.0));
			}
			else{
				HX_STACK_LINE(106)
				tmp9 = false;
			}
			HX_STACK_LINE(106)
			bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(106)
			bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(106)
			if ((tmp10)){
				HX_STACK_LINE(106)
				Float tmp12 = ::haxegon::Gfx_obj::imageredadd;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(106)
				Float tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(106)
				Float tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(106)
				tmp11 = (tmp14 == ((Float)0.0));
			}
			else{
				HX_STACK_LINE(106)
				tmp11 = false;
			}
			HX_STACK_LINE(106)
			bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(106)
			bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(106)
			if ((tmp12)){
				HX_STACK_LINE(106)
				Float tmp14 = ::haxegon::Gfx_obj::imagegreenadd;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(106)
				Float tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(106)
				Float tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(106)
				tmp13 = (tmp16 == ((Float)0.0));
			}
			else{
				HX_STACK_LINE(106)
				tmp13 = false;
			}
			HX_STACK_LINE(106)
			bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(106)
			if ((tmp13)){
				HX_STACK_LINE(106)
				Float tmp15 = ::haxegon::Gfx_obj::imageblueadd;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(106)
				Float tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(106)
				tmp14 = (tmp16 == ((Float)0.0));
			}
			else{
				HX_STACK_LINE(106)
				tmp14 = false;
			}
			HX_STACK_LINE(106)
			if ((tmp14)){
				HX_STACK_LINE(107)
				::haxegon::Gfx_obj::coltransform = false;
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Gfx_obj,reset_ifclear,(void))

Void Gfx_obj::rotation( Float angle,hx::Null< Float >  __o_xpivot,hx::Null< Float >  __o_ypivot){
Float xpivot = __o_xpivot.Default(-15000);
Float ypivot = __o_ypivot.Default(-15000);
	HX_STACK_FRAME("haxegon.Gfx","rotation",0x5ff1ff41,"haxegon.Gfx.rotation","haxegon/Gfx.hx",113,0xa6405f94)
	HX_STACK_ARG(angle,"angle")
	HX_STACK_ARG(xpivot,"xpivot")
	HX_STACK_ARG(ypivot,"ypivot")
{
		HX_STACK_LINE(114)
		::haxegon::Gfx_obj::imagerotate = angle;
		HX_STACK_LINE(115)
		::haxegon::Gfx_obj::imagerotatexpivot = xpivot;
		HX_STACK_LINE(116)
		::haxegon::Gfx_obj::imagerotateypivot = ypivot;
		HX_STACK_LINE(117)
		::haxegon::Gfx_obj::transform = true;
		HX_STACK_LINE(118)
		::haxegon::Gfx_obj::reset_ifclear();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Gfx_obj,rotation,(void))

Void Gfx_obj::scale( Float xscale,Float yscale,hx::Null< Float >  __o_xpivot,hx::Null< Float >  __o_ypivot){
Float xpivot = __o_xpivot.Default(-10000);
Float ypivot = __o_ypivot.Default(-10000);
	HX_STACK_FRAME("haxegon.Gfx","scale",0x765efca7,"haxegon.Gfx.scale","haxegon/Gfx.hx",123,0xa6405f94)
	HX_STACK_ARG(xscale,"xscale")
	HX_STACK_ARG(yscale,"yscale")
	HX_STACK_ARG(xpivot,"xpivot")
	HX_STACK_ARG(ypivot,"ypivot")
{
		HX_STACK_LINE(124)
		::haxegon::Gfx_obj::imagexscale = xscale;
		HX_STACK_LINE(125)
		::haxegon::Gfx_obj::imageyscale = yscale;
		HX_STACK_LINE(126)
		::haxegon::Gfx_obj::imagescalexpivot = xpivot;
		HX_STACK_LINE(127)
		::haxegon::Gfx_obj::imagescaleypivot = ypivot;
		HX_STACK_LINE(129)
		::haxegon::Gfx_obj::transform = true;
		HX_STACK_LINE(130)
		::haxegon::Gfx_obj::reset_ifclear();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Gfx_obj,scale,(void))

Void Gfx_obj::imagealpha( Float a){
{
		HX_STACK_FRAME("haxegon.Gfx","imagealpha",0x759986e6,"haxegon.Gfx.imagealpha","haxegon/Gfx.hx",134,0xa6405f94)
		HX_STACK_ARG(a,"a")
		HX_STACK_LINE(135)
		::haxegon::Gfx_obj::imagealphamult = a;
		HX_STACK_LINE(136)
		::haxegon::Gfx_obj::coltransform = true;
		HX_STACK_LINE(137)
		::haxegon::Gfx_obj::reset_ifclear();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Gfx_obj,imagealpha,(void))

Void Gfx_obj::imagecolor( hx::Null< int >  __o_c,hx::Null< int >  __o_add){
int c = __o_c.Default(16777215);
int add = __o_add.Default(0);
	HX_STACK_FRAME("haxegon.Gfx","imagecolor",0x9e5f50eb,"haxegon.Gfx.imagecolor","haxegon/Gfx.hx",141,0xa6405f94)
	HX_STACK_ARG(c,"c")
	HX_STACK_ARG(add,"add")
{
		HX_STACK_LINE(165)
		int tmp = (int(c) >> int((int)16));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(165)
		int tmp1 = (int(tmp) & int((int)255));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(165)
		Float tmp2 = (Float(tmp1) / Float((int)255));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(165)
		::haxegon::Gfx_obj::imageredmult = tmp2;
		HX_STACK_LINE(166)
		int tmp3 = (int(c) >> int((int)8));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(166)
		int tmp4 = (int(tmp3) & int((int)255));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(166)
		Float tmp5 = (Float(tmp4) / Float((int)255));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(166)
		::haxegon::Gfx_obj::imagegreenmult = tmp5;
		HX_STACK_LINE(167)
		int tmp6 = (int(c) & int((int)255));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(167)
		Float tmp7 = (Float(tmp6) / Float((int)255));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(167)
		::haxegon::Gfx_obj::imagebluemult = tmp7;
		HX_STACK_LINE(168)
		int tmp8 = (int(add) >> int((int)16));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(168)
		int tmp9 = (int(tmp8) & int((int)255));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(168)
		::haxegon::Gfx_obj::imageredadd = tmp9;
		HX_STACK_LINE(169)
		int tmp10 = (int(add) >> int((int)8));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(169)
		int tmp11 = (int(tmp10) & int((int)255));		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(169)
		::haxegon::Gfx_obj::imagegreenadd = tmp11;
		HX_STACK_LINE(170)
		int tmp12 = (int(add) & int((int)255));		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(170)
		::haxegon::Gfx_obj::imageblueadd = tmp12;
		HX_STACK_LINE(172)
		::haxegon::Gfx_obj::coltransform = true;
		HX_STACK_LINE(173)
		::haxegon::Gfx_obj::reset_ifclear();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Gfx_obj,imagecolor,(void))

Void Gfx_obj::changetileset( ::String tilesetname){
{
		HX_STACK_FRAME("haxegon.Gfx","changetileset",0x2cde10e1,"haxegon.Gfx.changetileset","haxegon/Gfx.hx",178,0xa6405f94)
		HX_STACK_ARG(tilesetname,"tilesetname")
		HX_STACK_LINE(179)
		::String tmp = ::haxegon::Gfx_obj::currenttilesetname;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(179)
		::String tmp1 = tilesetname;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(179)
		bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(179)
		if ((tmp2)){
			HX_STACK_LINE(180)
			::haxe::ds::StringMap tmp3 = ::haxegon::Gfx_obj::tilesetindex;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(180)
			::String tmp4 = tilesetname;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(180)
			bool tmp5 = tmp3->exists(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(180)
			if ((tmp5)){
				HX_STACK_LINE(181)
				::haxe::ds::StringMap tmp6 = ::haxegon::Gfx_obj::tilesetindex;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(181)
				::String tmp7 = tilesetname;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(181)
				Dynamic tmp8 = tmp6->get(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(181)
				::haxegon::Gfx_obj::currenttileset = tmp8;
				HX_STACK_LINE(182)
				::haxegon::Gfx_obj::currenttilesetname = tilesetname;
			}
			else{
				HX_STACK_LINE(184)
				::String tmp6 = (HX_HCSTRING("ERROR: Cannot change to tileset \"","\x52","\x68","\x39","\x26") + tilesetname);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(184)
				::String tmp7 = (tmp6 + HX_HCSTRING("\", no tileset with that name found.","\x0d","\xaf","\x8b","\x7a"));		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(184)
				HX_STACK_DO_THROW(tmp7);
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Gfx_obj,changetileset,(void))

int Gfx_obj::numberoftiles( ){
	HX_STACK_FRAME("haxegon.Gfx","numberoftiles",0x664f3082,"haxegon.Gfx.numberoftiles","haxegon/Gfx.hx",195,0xa6405f94)
	HX_STACK_LINE(196)
	int tmp = ::haxegon::Gfx_obj::currenttileset;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(196)
	::haxegon::util::Tileset tmp1 = ::haxegon::Gfx_obj::tiles->__get(tmp).StaticCast< ::haxegon::util::Tileset >();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(196)
	int tmp2 = tmp1->tiles->length;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(196)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Gfx_obj,numberoftiles,return )

Void Gfx_obj::loadtiles( ::String imagename,int width,int height,::String __o_altlabel){
::String altlabel = __o_altlabel.Default(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
	HX_STACK_FRAME("haxegon.Gfx","loadtiles",0xbf1cda3c,"haxegon.Gfx.loadtiles","haxegon/Gfx.hx",206,0xa6405f94)
	HX_STACK_ARG(imagename,"imagename")
	HX_STACK_ARG(width,"width")
	HX_STACK_ARG(height,"height")
	HX_STACK_ARG(altlabel,"altlabel")
{
		HX_STACK_LINE(207)
		::String tmp = (HX_HCSTRING("data/graphics/","\x9f","\x29","\xe6","\x6e") + imagename);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(207)
		::String tmp1 = (tmp + HX_HCSTRING(".png","\x3b","\x2d","\xbd","\x1e"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(207)
		::openfl::display::BitmapData tmp2 = ::openfl::Assets_obj::getBitmapData(tmp1,null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(207)
		::openfl::display::Bitmap tmp3 = ::openfl::display::Bitmap_obj::__new(tmp2,null(),null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(207)
		::haxegon::Gfx_obj::buffer = tmp3->bitmapData;
		HX_STACK_LINE(208)
		::openfl::display::BitmapData tmp4 = ::haxegon::Gfx_obj::buffer;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(208)
		bool tmp5 = (tmp4 == null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(208)
		if ((tmp5)){
			HX_STACK_LINE(209)
			::String tmp6 = (HX_HCSTRING("ERROR: In loadtiles, cannot find data/graphics/","\x8f","\x69","\x5c","\x66") + imagename);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(209)
			::String tmp7 = (tmp6 + HX_HCSTRING(".png.","\x93","\x66","\xca","\xc6"));		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(209)
			HX_STACK_DO_THROW(tmp7);
			HX_STACK_LINE(210)
			return null();
		}
		HX_STACK_LINE(212)
		bool tmp6 = (altlabel != HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(212)
		if ((tmp6)){
			HX_STACK_LINE(212)
			imagename = altlabel;
		}
		HX_STACK_LINE(214)
		::openfl::geom::Rectangle tmp7 = ::openfl::geom::Rectangle_obj::__new((int)0,(int)0,width,height);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(214)
		::openfl::geom::Rectangle tiles_rect = tmp7;		HX_STACK_VAR(tiles_rect,"tiles_rect");
		HX_STACK_LINE(215)
		::haxegon::util::Tileset tmp8 = ::haxegon::util::Tileset_obj::__new(imagename,width,height);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(215)
		::haxegon::Gfx_obj::tiles->push(tmp8);
		HX_STACK_LINE(216)
		::haxe::ds::StringMap tmp9 = ::haxegon::Gfx_obj::tilesetindex;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(216)
		::String tmp10 = imagename;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(216)
		int tmp11 = ::haxegon::Gfx_obj::tiles->length;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(216)
		int tmp12 = (tmp11 - (int)1);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(216)
		tmp9->set(tmp10,tmp12);
		HX_STACK_LINE(217)
		int tmp13 = ::haxegon::Gfx_obj::tiles->length;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(217)
		int tmp14 = (tmp13 - (int)1);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(217)
		::haxegon::Gfx_obj::currenttileset = tmp14;
		HX_STACK_LINE(219)
		int tilerows;		HX_STACK_VAR(tilerows,"tilerows");
		HX_STACK_LINE(220)
		int tilecolumns;		HX_STACK_VAR(tilecolumns,"tilecolumns");
		HX_STACK_LINE(221)
		::openfl::display::BitmapData tmp15 = ::haxegon::Gfx_obj::buffer;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(221)
		int tmp16 = tmp15->width;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(221)
		::openfl::display::BitmapData tmp17 = ::haxegon::Gfx_obj::buffer;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(221)
		int tmp18 = tmp17->width;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(221)
		int tmp19 = width;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(221)
		int tmp20 = hx::Mod(tmp18,tmp19);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(221)
		int tmp21 = (tmp16 - tmp20);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(221)
		int tmp22 = width;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(221)
		Float tmp23 = (Float(tmp21) / Float(tmp22));		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(221)
		int tmp24 = ::Std_obj::_int(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(221)
		tilecolumns = tmp24;
		HX_STACK_LINE(222)
		::openfl::display::BitmapData tmp25 = ::haxegon::Gfx_obj::buffer;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(222)
		int tmp26 = tmp25->height;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(222)
		::openfl::display::BitmapData tmp27 = ::haxegon::Gfx_obj::buffer;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(222)
		int tmp28 = tmp27->height;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(222)
		int tmp29 = height;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(222)
		int tmp30 = hx::Mod(tmp28,tmp29);		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(222)
		int tmp31 = (tmp26 - tmp30);		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(222)
		int tmp32 = height;		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(222)
		Float tmp33 = (Float(tmp31) / Float(tmp32));		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(222)
		int tmp34 = ::Std_obj::_int(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(222)
		tilerows = tmp34;
		HX_STACK_LINE(224)
		{
			HX_STACK_LINE(224)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(224)
			while((true)){
				HX_STACK_LINE(224)
				bool tmp35 = (_g < tilerows);		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(224)
				bool tmp36 = !(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(224)
				if ((tmp36)){
					HX_STACK_LINE(224)
					break;
				}
				HX_STACK_LINE(224)
				int tmp37 = (_g)++;		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(224)
				int j = tmp37;		HX_STACK_VAR(j,"j");
				HX_STACK_LINE(225)
				{
					HX_STACK_LINE(225)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(225)
					while((true)){
						HX_STACK_LINE(225)
						bool tmp38 = (_g1 < tilecolumns);		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(225)
						bool tmp39 = !(tmp38);		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(225)
						if ((tmp39)){
							HX_STACK_LINE(225)
							break;
						}
						HX_STACK_LINE(225)
						int tmp40 = (_g1)++;		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(225)
						int i = tmp40;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(226)
						::openfl::display::BitmapData tmp41 = ::openfl::display::BitmapData_obj::__new(width,height,true,(int)0);		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(226)
						::openfl::display::BitmapData t = tmp41;		HX_STACK_VAR(t,"t");
						HX_STACK_LINE(227)
						int tmp42 = (i * width);		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(227)
						int tmp43 = (j * height);		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(227)
						int tmp44 = width;		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(227)
						int tmp45 = height;		HX_STACK_VAR(tmp45,"tmp45");
						HX_STACK_LINE(227)
						::haxegon::Gfx_obj::settrect(tmp42,tmp43,tmp44,tmp45);
						HX_STACK_LINE(228)
						::openfl::display::BitmapData tmp46 = ::haxegon::Gfx_obj::buffer;		HX_STACK_VAR(tmp46,"tmp46");
						HX_STACK_LINE(228)
						::openfl::geom::Rectangle tmp47 = ::haxegon::Gfx_obj::trect;		HX_STACK_VAR(tmp47,"tmp47");
						HX_STACK_LINE(228)
						::openfl::geom::Point tmp48 = ::haxegon::Gfx_obj::tl;		HX_STACK_VAR(tmp48,"tmp48");
						HX_STACK_LINE(228)
						t->copyPixels(tmp46,tmp47,tmp48,null(),null(),null());
						HX_STACK_LINE(229)
						int tmp49 = ::haxegon::Gfx_obj::currenttileset;		HX_STACK_VAR(tmp49,"tmp49");
						HX_STACK_LINE(229)
						::haxegon::util::Tileset tmp50 = ::haxegon::Gfx_obj::tiles->__get(tmp49).StaticCast< ::haxegon::util::Tileset >();		HX_STACK_VAR(tmp50,"tmp50");
						HX_STACK_LINE(229)
						::openfl::display::BitmapData tmp51 = t;		HX_STACK_VAR(tmp51,"tmp51");
						HX_STACK_LINE(229)
						tmp50->tiles->push(tmp51);
					}
				}
			}
		}
		HX_STACK_LINE(233)
		::String tmp35 = imagename;		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(233)
		::haxegon::Gfx_obj::changetileset(tmp35);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Gfx_obj,loadtiles,(void))

Void Gfx_obj::addblanktiles( ::String imagename,int num){
{
		HX_STACK_FRAME("haxegon.Gfx","addblanktiles",0xc474662f,"haxegon.Gfx.addblanktiles","haxegon/Gfx.hx",237,0xa6405f94)
		HX_STACK_ARG(imagename,"imagename")
		HX_STACK_ARG(num,"num")
		HX_STACK_LINE(238)
		::haxe::ds::StringMap tmp = ::haxegon::Gfx_obj::tilesetindex;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(238)
		::String tmp1 = imagename;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(238)
		Dynamic tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(238)
		Dynamic tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(238)
		::haxegon::util::Tileset tmp4 = ::haxegon::Gfx_obj::tiles->__get(tmp3).StaticCast< ::haxegon::util::Tileset >();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(238)
		::openfl::display::BitmapData tmp5 = tmp4->tiles->__get((int)0).StaticCast< ::openfl::display::BitmapData >();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(238)
		int w = tmp5->width;		HX_STACK_VAR(w,"w");
		HX_STACK_LINE(239)
		::haxe::ds::StringMap tmp6 = ::haxegon::Gfx_obj::tilesetindex;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(239)
		::String tmp7 = imagename;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(239)
		Dynamic tmp8 = tmp6->get(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(239)
		Dynamic tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(239)
		::haxegon::util::Tileset tmp10 = ::haxegon::Gfx_obj::tiles->__get(tmp9).StaticCast< ::haxegon::util::Tileset >();		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(239)
		::openfl::display::BitmapData tmp11 = tmp10->tiles->__get((int)0).StaticCast< ::openfl::display::BitmapData >();		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(239)
		int h = tmp11->height;		HX_STACK_VAR(h,"h");
		HX_STACK_LINE(240)
		{
			HX_STACK_LINE(240)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(240)
			while((true)){
				HX_STACK_LINE(240)
				bool tmp12 = (_g < num);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(240)
				bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(240)
				if ((tmp13)){
					HX_STACK_LINE(240)
					break;
				}
				HX_STACK_LINE(240)
				int tmp14 = (_g)++;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(240)
				int i = tmp14;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(241)
				::haxe::ds::StringMap tmp15 = ::haxegon::Gfx_obj::tilesetindex;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(241)
				::String tmp16 = imagename;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(241)
				Dynamic tmp17 = tmp15->get(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(241)
				Dynamic tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(241)
				::haxegon::util::Tileset tmp19 = ::haxegon::Gfx_obj::tiles->__get(tmp18).StaticCast< ::haxegon::util::Tileset >();		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(241)
				::openfl::display::BitmapData tmp20 = ::openfl::display::BitmapData_obj::__new(w,h,true,(int)0);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(241)
				tmp19->tiles->push(tmp20);
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Gfx_obj,addblanktiles,(void))

Void Gfx_obj::createtiles( ::String imagename,Float width,Float height,int amount){
{
		HX_STACK_FRAME("haxegon.Gfx","createtiles",0xc157e6e6,"haxegon.Gfx.createtiles","haxegon/Gfx.hx",248,0xa6405f94)
		HX_STACK_ARG(imagename,"imagename")
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_ARG(amount,"amount")
		HX_STACK_LINE(249)
		::haxe::ds::StringMap tmp = ::haxegon::Gfx_obj::tilesetindex;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(249)
		::String tmp1 = imagename;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(249)
		Dynamic tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(249)
		Dynamic exindex = tmp2;		HX_STACK_VAR(exindex,"exindex");
		HX_STACK_LINE(250)
		bool tmp3 = (exindex == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(250)
		if ((tmp3)){
			HX_STACK_LINE(251)
			::String tmp4 = imagename;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(251)
			Float tmp5 = width;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(251)
			int tmp6 = ::Std_obj::_int(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(251)
			Float tmp7 = height;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(251)
			int tmp8 = ::Std_obj::_int(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(251)
			::haxegon::util::Tileset tmp9 = ::haxegon::util::Tileset_obj::__new(tmp4,tmp6,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(251)
			::haxegon::Gfx_obj::tiles->push(tmp9);
			HX_STACK_LINE(252)
			::haxe::ds::StringMap tmp10 = ::haxegon::Gfx_obj::tilesetindex;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(252)
			::String tmp11 = imagename;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(252)
			int tmp12 = ::haxegon::Gfx_obj::tiles->length;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(252)
			int tmp13 = (tmp12 - (int)1);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(252)
			tmp10->set(tmp11,tmp13);
			HX_STACK_LINE(253)
			int tmp14 = ::haxegon::Gfx_obj::tiles->length;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(253)
			int tmp15 = (tmp14 - (int)1);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(253)
			::haxegon::Gfx_obj::currenttileset = tmp15;
			HX_STACK_LINE(255)
			{
				HX_STACK_LINE(255)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(255)
				while((true)){
					HX_STACK_LINE(255)
					bool tmp16 = (_g < amount);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(255)
					bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(255)
					if ((tmp17)){
						HX_STACK_LINE(255)
						break;
					}
					HX_STACK_LINE(255)
					int tmp18 = (_g)++;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(255)
					int i = tmp18;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(256)
					Float tmp19 = width;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(256)
					int tmp20 = ::Std_obj::_int(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(256)
					Float tmp21 = height;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(256)
					int tmp22 = ::Std_obj::_int(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(256)
					::openfl::display::BitmapData tmp23 = ::openfl::display::BitmapData_obj::__new(tmp20,tmp22,true,(int)0);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(256)
					::openfl::display::BitmapData t = tmp23;		HX_STACK_VAR(t,"t");
					HX_STACK_LINE(257)
					int tmp24 = ::haxegon::Gfx_obj::currenttileset;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(257)
					::haxegon::util::Tileset tmp25 = ::haxegon::Gfx_obj::tiles->__get(tmp24).StaticCast< ::haxegon::util::Tileset >();		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(257)
					::openfl::display::BitmapData tmp26 = t;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(257)
					tmp25->tiles->push(tmp26);
				}
			}
			HX_STACK_LINE(260)
			::String tmp16 = imagename;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(260)
			::haxegon::Gfx_obj::changetileset(tmp16);
		}
		else{
			HX_STACK_LINE(262)
			::String tmp4 = imagename;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(262)
			::haxegon::Gfx_obj::changetileset(tmp4);
			HX_STACK_LINE(263)
			{
				HX_STACK_LINE(263)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(263)
				while((true)){
					HX_STACK_LINE(263)
					bool tmp5 = (_g < amount);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(263)
					bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(263)
					if ((tmp6)){
						HX_STACK_LINE(263)
						break;
					}
					HX_STACK_LINE(263)
					int tmp7 = (_g)++;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(263)
					int i = tmp7;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(264)
					int tmp8 = ::haxegon::Gfx_obj::currenttileset;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(264)
					::haxegon::util::Tileset tmp9 = ::haxegon::Gfx_obj::tiles->__get(tmp8).StaticCast< ::haxegon::util::Tileset >();		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(264)
					::openfl::display::BitmapData tmp10 = tmp9->tiles->__get(i).StaticCast< ::openfl::display::BitmapData >();		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(264)
					tmp10->dispose();
				}
			}
			HX_STACK_LINE(267)
			int tmp5 = ::haxegon::Gfx_obj::currenttileset;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(267)
			::String tmp6 = imagename;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(267)
			Float tmp7 = width;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(267)
			int tmp8 = ::Std_obj::_int(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(267)
			Float tmp9 = height;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(267)
			int tmp10 = ::Std_obj::_int(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(267)
			::haxegon::util::Tileset tmp11 = ::haxegon::util::Tileset_obj::__new(tmp6,tmp8,tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(267)
			::haxegon::Gfx_obj::tiles[tmp5] = tmp11;
			HX_STACK_LINE(269)
			{
				HX_STACK_LINE(269)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(269)
				while((true)){
					HX_STACK_LINE(269)
					bool tmp12 = (_g < amount);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(269)
					bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(269)
					if ((tmp13)){
						HX_STACK_LINE(269)
						break;
					}
					HX_STACK_LINE(269)
					int tmp14 = (_g)++;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(269)
					int i = tmp14;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(270)
					Float tmp15 = width;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(270)
					int tmp16 = ::Std_obj::_int(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(270)
					Float tmp17 = height;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(270)
					int tmp18 = ::Std_obj::_int(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(270)
					::openfl::display::BitmapData tmp19 = ::openfl::display::BitmapData_obj::__new(tmp16,tmp18,true,(int)0);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(270)
					::openfl::display::BitmapData t = tmp19;		HX_STACK_VAR(t,"t");
					HX_STACK_LINE(271)
					int tmp20 = ::haxegon::Gfx_obj::currenttileset;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(271)
					::haxegon::util::Tileset tmp21 = ::haxegon::Gfx_obj::tiles->__get(tmp20).StaticCast< ::haxegon::util::Tileset >();		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(271)
					::openfl::display::BitmapData tmp22 = t;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(271)
					tmp21->tiles->push(tmp22);
				}
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Gfx_obj,createtiles,(void))

int Gfx_obj::tilewidth( ){
	HX_STACK_FRAME("haxegon.Gfx","tilewidth",0xe96ea4b5,"haxegon.Gfx.tilewidth","haxegon/Gfx.hx",277,0xa6405f94)
	HX_STACK_LINE(278)
	int tmp = ::haxegon::Gfx_obj::currenttileset;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(278)
	::haxegon::util::Tileset tmp1 = ::haxegon::Gfx_obj::tiles->__get(tmp).StaticCast< ::haxegon::util::Tileset >();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(278)
	int tmp2 = tmp1->width;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(278)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Gfx_obj,tilewidth,return )

int Gfx_obj::tileheight( ){
	HX_STACK_FRAME("haxegon.Gfx","tileheight",0x0db0f258,"haxegon.Gfx.tileheight","haxegon/Gfx.hx",282,0xa6405f94)
	HX_STACK_LINE(283)
	int tmp = ::haxegon::Gfx_obj::currenttileset;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(283)
	::haxegon::util::Tileset tmp1 = ::haxegon::Gfx_obj::tiles->__get(tmp).StaticCast< ::haxegon::util::Tileset >();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(283)
	int tmp2 = tmp1->height;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(283)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Gfx_obj,tileheight,return )

Void Gfx_obj::loadimage( ::String imagename){
{
		HX_STACK_FRAME("haxegon.Gfx","loadimage",0x6c50fc12,"haxegon.Gfx.loadimage","haxegon/Gfx.hx",451,0xa6405f94)
		HX_STACK_ARG(imagename,"imagename")
		HX_STACK_LINE(452)
		::String tmp = (HX_HCSTRING("data/graphics/","\x9f","\x29","\xe6","\x6e") + imagename);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(452)
		::String tmp1 = (tmp + HX_HCSTRING(".png","\x3b","\x2d","\xbd","\x1e"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(452)
		::openfl::display::BitmapData tmp2 = ::openfl::Assets_obj::getBitmapData(tmp1,null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(452)
		::openfl::display::Bitmap tmp3 = ::openfl::display::Bitmap_obj::__new(tmp2,null(),null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(452)
		::haxegon::Gfx_obj::buffer = tmp3->bitmapData;
		HX_STACK_LINE(453)
		::openfl::display::BitmapData tmp4 = ::haxegon::Gfx_obj::buffer;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(453)
		bool tmp5 = (tmp4 == null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(453)
		if ((tmp5)){
			HX_STACK_LINE(454)
			::String tmp6 = (HX_HCSTRING("ERROR: In loadimage, cannot find data/graphics/","\x65","\x80","\xac","\xcb") + imagename);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(454)
			::String tmp7 = (tmp6 + HX_HCSTRING(".png.","\x93","\x66","\xca","\xc6"));		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(454)
			HX_STACK_DO_THROW(tmp7);
			HX_STACK_LINE(455)
			return null();
		}
		HX_STACK_LINE(458)
		::haxe::ds::StringMap tmp6 = ::haxegon::Gfx_obj::imageindex;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(458)
		::String tmp7 = imagename;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(458)
		int tmp8 = ::haxegon::Gfx_obj::images->length;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(458)
		tmp6->set(tmp7,tmp8);
		HX_STACK_LINE(460)
		::openfl::display::BitmapData tmp9 = ::haxegon::Gfx_obj::buffer;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(460)
		int tmp10 = tmp9->width;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(460)
		::openfl::display::BitmapData tmp11 = ::haxegon::Gfx_obj::buffer;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(460)
		int tmp12 = tmp11->height;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(460)
		::openfl::display::BitmapData tmp13 = ::openfl::display::BitmapData_obj::__new(tmp10,tmp12,true,(int)0);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(460)
		::openfl::display::BitmapData t = tmp13;		HX_STACK_VAR(t,"t");
		HX_STACK_LINE(461)
		::openfl::display::BitmapData tmp14 = ::haxegon::Gfx_obj::buffer;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(461)
		int tmp15 = tmp14->width;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(461)
		::openfl::display::BitmapData tmp16 = ::haxegon::Gfx_obj::buffer;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(461)
		int tmp17 = tmp16->height;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(461)
		::haxegon::Gfx_obj::settrect((int)0,(int)0,tmp15,tmp17);
		HX_STACK_LINE(462)
		::openfl::display::BitmapData tmp18 = ::haxegon::Gfx_obj::buffer;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(462)
		::openfl::geom::Rectangle tmp19 = ::haxegon::Gfx_obj::trect;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(462)
		::openfl::geom::Point tmp20 = ::haxegon::Gfx_obj::tl;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(462)
		t->copyPixels(tmp18,tmp19,tmp20,null(),null(),null());
		HX_STACK_LINE(463)
		::openfl::display::BitmapData tmp21 = t;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(463)
		::haxegon::Gfx_obj::images->push(tmp21);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Gfx_obj,loadimage,(void))

Void Gfx_obj::createimage( ::String imagename,Float width,Float height){
{
		HX_STACK_FRAME("haxegon.Gfx","createimage",0x6e8c08bc,"haxegon.Gfx.createimage","haxegon/Gfx.hx",468,0xa6405f94)
		HX_STACK_ARG(imagename,"imagename")
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_LINE(469)
		Float tmp = width;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(469)
		int tmp1 = ::Math_obj::floor(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(469)
		Float tmp2 = height;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(469)
		int tmp3 = ::Math_obj::floor(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(469)
		::openfl::display::BitmapData tmp4 = ::openfl::display::BitmapData_obj::__new(tmp1,tmp3,true,(int)0);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(469)
		::openfl::display::BitmapData t = tmp4;		HX_STACK_VAR(t,"t");
		HX_STACK_LINE(471)
		::haxe::ds::StringMap tmp5 = ::haxegon::Gfx_obj::imageindex;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(471)
		::String tmp6 = imagename;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(471)
		Dynamic tmp7 = tmp5->get(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(471)
		Dynamic exindex = tmp7;		HX_STACK_VAR(exindex,"exindex");
		HX_STACK_LINE(472)
		bool tmp8 = (exindex == null());		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(472)
		if ((tmp8)){
			HX_STACK_LINE(473)
			::haxe::ds::StringMap tmp9 = ::haxegon::Gfx_obj::imageindex;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(473)
			::String tmp10 = imagename;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(473)
			int tmp11 = ::haxegon::Gfx_obj::images->length;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(473)
			tmp9->set(tmp10,tmp11);
			HX_STACK_LINE(474)
			::openfl::display::BitmapData tmp12 = t;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(474)
			::haxegon::Gfx_obj::images->push(tmp12);
		}
		else{
			HX_STACK_LINE(476)
			::openfl::display::BitmapData tmp9 = ::haxegon::Gfx_obj::images->__get(exindex).StaticCast< ::openfl::display::BitmapData >();		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(476)
			tmp9->dispose();
			HX_STACK_LINE(477)
			::openfl::display::BitmapData tmp10 = t;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(477)
			::haxegon::Gfx_obj::images[exindex] = tmp10;
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Gfx_obj,createimage,(void))

Void Gfx_obj::resizeimage( ::String imagename,Float scale){
{
		HX_STACK_FRAME("haxegon.Gfx","resizeimage",0x841452c4,"haxegon.Gfx.resizeimage","haxegon/Gfx.hx",482,0xa6405f94)
		HX_STACK_ARG(imagename,"imagename")
		HX_STACK_ARG(scale,"scale")
		HX_STACK_LINE(483)
		::haxe::ds::StringMap tmp = ::haxegon::Gfx_obj::imageindex;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(483)
		::String tmp1 = imagename;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(483)
		Dynamic tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(483)
		int oldindex = tmp2;		HX_STACK_VAR(oldindex,"oldindex");
		HX_STACK_LINE(484)
		::openfl::display::BitmapData tmp3 = ::haxegon::Gfx_obj::images->__get(oldindex).StaticCast< ::openfl::display::BitmapData >();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(484)
		int tmp4 = tmp3->width;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(484)
		Float tmp5 = scale;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(484)
		Float tmp6 = (tmp4 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(484)
		int tmp7 = ::Std_obj::_int(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(484)
		::openfl::display::BitmapData tmp8 = ::haxegon::Gfx_obj::images->__get(oldindex).StaticCast< ::openfl::display::BitmapData >();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(484)
		int tmp9 = tmp8->height;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(484)
		Float tmp10 = scale;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(484)
		Float tmp11 = (tmp9 * tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(484)
		int tmp12 = ::Std_obj::_int(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(484)
		::openfl::display::BitmapData tmp13 = ::openfl::display::BitmapData_obj::__new(tmp7,tmp12,true,(int)0);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(484)
		::openfl::display::BitmapData newbitmap = tmp13;		HX_STACK_VAR(newbitmap,"newbitmap");
		HX_STACK_LINE(485)
		int pixelalpha;		HX_STACK_VAR(pixelalpha,"pixelalpha");
		HX_STACK_LINE(486)
		int pixel;		HX_STACK_VAR(pixel,"pixel");
		HX_STACK_LINE(488)
		::openfl::display::BitmapData tmp14 = ::haxegon::Gfx_obj::images->__get(oldindex).StaticCast< ::openfl::display::BitmapData >();		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(488)
		tmp14->lock();
		HX_STACK_LINE(489)
		newbitmap->lock();
		HX_STACK_LINE(491)
		{
			HX_STACK_LINE(491)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(491)
			::openfl::display::BitmapData tmp15 = ::haxegon::Gfx_obj::images->__get(oldindex).StaticCast< ::openfl::display::BitmapData >();		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(491)
			int _g = tmp15->height;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(491)
			while((true)){
				HX_STACK_LINE(491)
				bool tmp16 = (_g1 < _g);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(491)
				bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(491)
				if ((tmp17)){
					HX_STACK_LINE(491)
					break;
				}
				HX_STACK_LINE(491)
				int tmp18 = (_g1)++;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(491)
				int j = tmp18;		HX_STACK_VAR(j,"j");
				HX_STACK_LINE(492)
				{
					HX_STACK_LINE(492)
					int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(492)
					::openfl::display::BitmapData tmp19 = ::haxegon::Gfx_obj::images->__get(oldindex).StaticCast< ::openfl::display::BitmapData >();		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(492)
					int _g2 = tmp19->width;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(492)
					while((true)){
						HX_STACK_LINE(492)
						bool tmp20 = (_g3 < _g2);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(492)
						bool tmp21 = !(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(492)
						if ((tmp21)){
							HX_STACK_LINE(492)
							break;
						}
						HX_STACK_LINE(492)
						int tmp22 = (_g3)++;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(492)
						int i = tmp22;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(493)
						::openfl::display::BitmapData tmp23 = ::haxegon::Gfx_obj::images->__get(oldindex).StaticCast< ::openfl::display::BitmapData >();		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(493)
						int tmp24 = i;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(493)
						int tmp25 = j;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(493)
						int tmp26 = tmp23->getPixel(tmp24,tmp25);		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(493)
						pixel = tmp26;
						HX_STACK_LINE(494)
						::openfl::display::BitmapData tmp27 = ::haxegon::Gfx_obj::images->__get(oldindex).StaticCast< ::openfl::display::BitmapData >();		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(494)
						int tmp28 = i;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(494)
						int tmp29 = j;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(494)
						int tmp30 = tmp27->getPixel32(tmp28,tmp29);		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(494)
						int tmp31 = (int(tmp30) >> int((int)24));		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(494)
						int tmp32 = (int(tmp31) & int((int)255));		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(494)
						pixelalpha = tmp32;
						HX_STACK_LINE(495)
						Float tmp33 = (i * scale);		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(495)
						int tmp34 = ::Math_obj::ceil(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(495)
						Float tmp35 = (j * scale);		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(495)
						int tmp36 = ::Math_obj::ceil(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(495)
						Float tmp37 = scale;		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(495)
						int tmp38 = ::Math_obj::ceil(tmp37);		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(495)
						Float tmp39 = scale;		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(495)
						int tmp40 = ::Math_obj::ceil(tmp39);		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(495)
						::haxegon::Gfx_obj::settrect(tmp34,tmp36,tmp38,tmp40);
						HX_STACK_LINE(496)
						::openfl::geom::Rectangle tmp41 = ::haxegon::Gfx_obj::trect;		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(496)
						int tmp42 = (int(pixelalpha) << int((int)24));		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(496)
						int tmp43 = pixel;		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(496)
						int tmp44 = (tmp42 + tmp43);		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(496)
						newbitmap->fillRect(tmp41,tmp44);
					}
				}
			}
		}
		HX_STACK_LINE(500)
		::openfl::display::BitmapData tmp15 = ::haxegon::Gfx_obj::images->__get(oldindex).StaticCast< ::openfl::display::BitmapData >();		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(500)
		tmp15->unlock(null());
		HX_STACK_LINE(501)
		newbitmap->unlock(null());
		HX_STACK_LINE(503)
		::openfl::display::BitmapData tmp16 = ::haxegon::Gfx_obj::images->__get(oldindex).StaticCast< ::openfl::display::BitmapData >();		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(503)
		tmp16->dispose();
		HX_STACK_LINE(504)
		::openfl::display::BitmapData tmp17 = newbitmap;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(504)
		::haxegon::Gfx_obj::images[oldindex] = tmp17;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Gfx_obj,resizeimage,(void))

int Gfx_obj::imagewidth( ::String imagename){
	HX_STACK_FRAME("haxegon.Gfx","imagewidth",0x1e65958e,"haxegon.Gfx.imagewidth","haxegon/Gfx.hx",508,0xa6405f94)
	HX_STACK_ARG(imagename,"imagename")
	HX_STACK_LINE(509)
	::haxe::ds::StringMap tmp = ::haxegon::Gfx_obj::imageindex;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(509)
	::String tmp1 = imagename;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(509)
	bool tmp2 = tmp->exists(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(509)
	if ((tmp2)){
		HX_STACK_LINE(510)
		::haxe::ds::StringMap tmp3 = ::haxegon::Gfx_obj::imageindex;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(510)
		::String tmp4 = imagename;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(510)
		Dynamic tmp5 = tmp3->get(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(510)
		::haxegon::Gfx_obj::imagenum = tmp5;
	}
	else{
		HX_STACK_LINE(512)
		::String tmp3 = (HX_HCSTRING("ERROR: In imagewidth, cannot find image \"","\x87","\x07","\xda","\xa5") + imagename);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(512)
		::String tmp4 = (tmp3 + HX_HCSTRING("\".","\xcc","\x1d","\x00","\x00"));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(512)
		HX_STACK_DO_THROW(tmp4);
		HX_STACK_LINE(513)
		return (int)0;
	}
	HX_STACK_LINE(516)
	int tmp3 = ::haxegon::Gfx_obj::imagenum;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(516)
	::openfl::display::BitmapData tmp4 = ::haxegon::Gfx_obj::images->__get(tmp3).StaticCast< ::openfl::display::BitmapData >();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(516)
	int tmp5 = tmp4->width;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(516)
	return tmp5;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Gfx_obj,imagewidth,return )

int Gfx_obj::imageheight( ::String imagename){
	HX_STACK_FRAME("haxegon.Gfx","imageheight",0x30ccbf5f,"haxegon.Gfx.imageheight","haxegon/Gfx.hx",520,0xa6405f94)
	HX_STACK_ARG(imagename,"imagename")
	HX_STACK_LINE(521)
	::haxe::ds::StringMap tmp = ::haxegon::Gfx_obj::imageindex;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(521)
	::String tmp1 = imagename;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(521)
	bool tmp2 = tmp->exists(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(521)
	if ((tmp2)){
		HX_STACK_LINE(522)
		::haxe::ds::StringMap tmp3 = ::haxegon::Gfx_obj::imageindex;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(522)
		::String tmp4 = imagename;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(522)
		Dynamic tmp5 = tmp3->get(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(522)
		::haxegon::Gfx_obj::imagenum = tmp5;
	}
	else{
		HX_STACK_LINE(524)
		::String tmp3 = (HX_HCSTRING("ERROR: In imageheight, cannot find image \"","\xaa","\x7e","\x8a","\x7a") + imagename);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(524)
		::String tmp4 = (tmp3 + HX_HCSTRING("\".","\xcc","\x1d","\x00","\x00"));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(524)
		HX_STACK_DO_THROW(tmp4);
		HX_STACK_LINE(525)
		return (int)0;
	}
	HX_STACK_LINE(528)
	int tmp3 = ::haxegon::Gfx_obj::imagenum;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(528)
	::openfl::display::BitmapData tmp4 = ::haxegon::Gfx_obj::images->__get(tmp3).StaticCast< ::openfl::display::BitmapData >();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(528)
	int tmp5 = tmp4->height;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(528)
	return tmp5;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Gfx_obj,imageheight,return )

Void Gfx_obj::drawtoscreen( ){
{
		HX_STACK_FRAME("haxegon.Gfx","drawtoscreen",0x95f1beae,"haxegon.Gfx.drawtoscreen","haxegon/Gfx.hx",532,0xa6405f94)
		HX_STACK_LINE(533)
		::haxegon::Gfx_obj::drawingtoscreen = true;
		HX_STACK_LINE(534)
		::openfl::display::BitmapData tmp = ::haxegon::Gfx_obj::drawto;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(534)
		tmp->unlock(null());
		HX_STACK_LINE(535)
		::openfl::display::BitmapData tmp1 = ::haxegon::Gfx_obj::backbuffer;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(535)
		::haxegon::Gfx_obj::drawto = tmp1;
		HX_STACK_LINE(536)
		::openfl::display::BitmapData tmp2 = ::haxegon::Gfx_obj::drawto;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(536)
		tmp2->lock();
		HX_STACK_LINE(538)
		::openfl::display::BitmapData tmp3 = ::haxegon::Gfx_obj::drawto;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(538)
		::haxegon::Text_obj::drawto = tmp3;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Gfx_obj,drawtoscreen,(void))

Void Gfx_obj::drawtoimage( ::String imagename){
{
		HX_STACK_FRAME("haxegon.Gfx","drawtoimage",0x8d8c3a59,"haxegon.Gfx.drawtoimage","haxegon/Gfx.hx",542,0xa6405f94)
		HX_STACK_ARG(imagename,"imagename")
		HX_STACK_LINE(543)
		::haxegon::Gfx_obj::drawingtoscreen = false;
		HX_STACK_LINE(544)
		::haxe::ds::StringMap tmp = ::haxegon::Gfx_obj::imageindex;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(544)
		::String tmp1 = imagename;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(544)
		Dynamic tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(544)
		::haxegon::Gfx_obj::imagenum = tmp2;
		HX_STACK_LINE(546)
		::openfl::display::BitmapData tmp3 = ::haxegon::Gfx_obj::drawto;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(546)
		tmp3->unlock(null());
		HX_STACK_LINE(547)
		int tmp4 = ::haxegon::Gfx_obj::imagenum;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(547)
		::openfl::display::BitmapData tmp5 = ::haxegon::Gfx_obj::images->__get(tmp4).StaticCast< ::openfl::display::BitmapData >();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(547)
		::haxegon::Gfx_obj::drawto = tmp5;
		HX_STACK_LINE(548)
		::openfl::display::BitmapData tmp6 = ::haxegon::Gfx_obj::drawto;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(548)
		tmp6->lock();
		HX_STACK_LINE(550)
		::openfl::display::BitmapData tmp7 = ::haxegon::Gfx_obj::drawto;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(550)
		::haxegon::Text_obj::drawto = tmp7;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Gfx_obj,drawtoimage,(void))

Void Gfx_obj::drawtotile( int tilenumber){
{
		HX_STACK_FRAME("haxegon.Gfx","drawtotile",0x806e99f0,"haxegon.Gfx.drawtotile","haxegon/Gfx.hx",555,0xa6405f94)
		HX_STACK_ARG(tilenumber,"tilenumber")
		HX_STACK_LINE(556)
		::haxegon::Gfx_obj::drawingtoscreen = false;
		HX_STACK_LINE(557)
		::openfl::display::BitmapData tmp = ::haxegon::Gfx_obj::drawto;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(557)
		tmp->unlock(null());
		HX_STACK_LINE(558)
		int tmp1 = ::haxegon::Gfx_obj::currenttileset;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(558)
		::haxegon::util::Tileset tmp2 = ::haxegon::Gfx_obj::tiles->__get(tmp1).StaticCast< ::haxegon::util::Tileset >();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(558)
		::openfl::display::BitmapData tmp3 = tmp2->tiles->__get(tilenumber).StaticCast< ::openfl::display::BitmapData >();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(558)
		::haxegon::Gfx_obj::drawto = tmp3;
		HX_STACK_LINE(559)
		::openfl::display::BitmapData tmp4 = ::haxegon::Gfx_obj::drawto;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(559)
		tmp4->lock();
		HX_STACK_LINE(561)
		::openfl::display::BitmapData tmp5 = ::haxegon::Gfx_obj::drawto;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(561)
		::haxegon::Text_obj::drawto = tmp5;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Gfx_obj,drawtotile,(void))

Float Gfx_obj::t1;

Float Gfx_obj::t2;

Float Gfx_obj::t3;

Float Gfx_obj::imagealignx( Float x){
	HX_STACK_FRAME("haxegon.Gfx","imagealignx",0x6c1b4d8b,"haxegon.Gfx.imagealignx","haxegon/Gfx.hx",569,0xa6405f94)
	HX_STACK_ARG(x,"x")
	HX_STACK_LINE(570)
	bool tmp = (x <= (int)-5000);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(570)
	if ((tmp)){
		HX_STACK_LINE(571)
		Float tmp1 = x;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(571)
		int tmp2 = ::haxegon::Gfx_obj::CENTER;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(571)
		Float tmp3 = (tmp1 - tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(571)
		::haxegon::Gfx_obj::t1 = tmp3;
		HX_STACK_LINE(572)
		Float tmp4 = x;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(572)
		int tmp5 = ::haxegon::Gfx_obj::LEFT;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(572)
		Float tmp6 = (tmp4 - tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(572)
		::haxegon::Gfx_obj::t2 = tmp6;
		HX_STACK_LINE(573)
		Float tmp7 = x;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(573)
		int tmp8 = ::haxegon::Gfx_obj::RIGHT;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(573)
		Float tmp9 = (tmp7 - tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(573)
		::haxegon::Gfx_obj::t3 = tmp9;
		HX_STACK_LINE(574)
		Float tmp10 = ::haxegon::Gfx_obj::t1;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(574)
		bool tmp11 = (tmp10 == (int)0);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(574)
		bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(574)
		bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(574)
		if ((tmp12)){
			HX_STACK_LINE(574)
			Float tmp14 = ::haxegon::Gfx_obj::t1;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(574)
			Float tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(574)
			Float tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(574)
			Float tmp17 = ::Math_obj::abs(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(574)
			Float tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(574)
			Float tmp19 = ::haxegon::Gfx_obj::t2;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(574)
			Float tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(574)
			Float tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(574)
			Float tmp22 = ::Math_obj::abs(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(574)
			Float tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(574)
			bool tmp24 = (tmp18 < tmp23);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(574)
			bool tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(574)
			bool tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(574)
			if ((tmp26)){
				HX_STACK_LINE(574)
				Float tmp27 = ::haxegon::Gfx_obj::t1;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(574)
				Float tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(574)
				Float tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(574)
				Float tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(574)
				Float tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(574)
				Float tmp32 = ::Math_obj::abs(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(574)
				Float tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(574)
				Float tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(574)
				Float tmp35 = ::haxegon::Gfx_obj::t3;		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(574)
				Float tmp36 = tmp35;		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(574)
				Float tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(574)
				Float tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(574)
				Float tmp39 = tmp38;		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(574)
				Float tmp40 = ::Math_obj::abs(tmp39);		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(574)
				Float tmp41 = tmp40;		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(574)
				Float tmp42 = tmp41;		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(574)
				tmp13 = (tmp34 < tmp42);
			}
			else{
				HX_STACK_LINE(574)
				tmp13 = false;
			}
		}
		else{
			HX_STACK_LINE(574)
			tmp13 = true;
		}
		HX_STACK_LINE(574)
		if ((tmp13)){
			HX_STACK_LINE(575)
			Float tmp14 = ::haxegon::Gfx_obj::t1;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(575)
			int tmp15 = ::haxegon::Gfx_obj::screenwidthmid;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(575)
			Float tmp16 = (tmp14 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(575)
			int tmp17 = ::haxegon::Gfx_obj::imagenum;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(575)
			::openfl::display::BitmapData tmp18 = ::haxegon::Gfx_obj::images->__get(tmp17).StaticCast< ::openfl::display::BitmapData >();		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(575)
			int tmp19 = tmp18->width;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(575)
			Float tmp20 = (Float(tmp19) / Float((int)2));		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(575)
			int tmp21 = ::Std_obj::_int(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(575)
			Float tmp22 = (tmp16 - tmp21);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(575)
			return tmp22;
		}
		else{
			HX_STACK_LINE(576)
			Float tmp14 = ::haxegon::Gfx_obj::t2;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(576)
			bool tmp15 = (tmp14 == (int)0);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(576)
			bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(576)
			bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(576)
			if ((tmp16)){
				HX_STACK_LINE(576)
				Float tmp18 = ::haxegon::Gfx_obj::t2;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(576)
				Float tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(576)
				Float tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(576)
				Float tmp21 = ::Math_obj::abs(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(576)
				Float tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(576)
				Float tmp23 = ::haxegon::Gfx_obj::t1;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(576)
				Float tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(576)
				Float tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(576)
				Float tmp26 = ::Math_obj::abs(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(576)
				Float tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(576)
				bool tmp28 = (tmp22 < tmp27);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(576)
				bool tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(576)
				bool tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(576)
				if ((tmp30)){
					HX_STACK_LINE(576)
					Float tmp31 = ::haxegon::Gfx_obj::t2;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(576)
					Float tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(576)
					Float tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(576)
					Float tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(576)
					Float tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(576)
					Float tmp36 = ::Math_obj::abs(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(576)
					Float tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(576)
					Float tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(576)
					Float tmp39 = ::haxegon::Gfx_obj::t3;		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(576)
					Float tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(576)
					Float tmp41 = tmp40;		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(576)
					Float tmp42 = tmp41;		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(576)
					Float tmp43 = tmp42;		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(576)
					Float tmp44 = ::Math_obj::abs(tmp43);		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(576)
					Float tmp45 = tmp44;		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(576)
					Float tmp46 = tmp45;		HX_STACK_VAR(tmp46,"tmp46");
					HX_STACK_LINE(576)
					tmp17 = (tmp38 < tmp46);
				}
				else{
					HX_STACK_LINE(576)
					tmp17 = false;
				}
			}
			else{
				HX_STACK_LINE(576)
				tmp17 = true;
			}
			HX_STACK_LINE(576)
			if ((tmp17)){
				HX_STACK_LINE(577)
				Float tmp18 = ::haxegon::Gfx_obj::t2;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(577)
				return tmp18;
			}
			else{
				HX_STACK_LINE(579)
				Float tmp18 = ::haxegon::Gfx_obj::t3;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(579)
				int tmp19 = ::haxegon::Gfx_obj::imagenum;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(579)
				::openfl::display::BitmapData tmp20 = ::haxegon::Gfx_obj::images->__get(tmp19).StaticCast< ::openfl::display::BitmapData >();		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(579)
				int tmp21 = tmp20->width;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(579)
				Float tmp22 = (tmp18 + tmp21);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(579)
				return tmp22;
			}
		}
	}
	HX_STACK_LINE(583)
	Float tmp1 = x;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(583)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Gfx_obj,imagealignx,return )

Float Gfx_obj::imagealigny( Float y){
	HX_STACK_FRAME("haxegon.Gfx","imagealigny",0x6c1b4d8c,"haxegon.Gfx.imagealigny","haxegon/Gfx.hx",587,0xa6405f94)
	HX_STACK_ARG(y,"y")
	HX_STACK_LINE(588)
	bool tmp = (y <= (int)-5000);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(588)
	if ((tmp)){
		HX_STACK_LINE(589)
		Float tmp1 = y;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(589)
		int tmp2 = ::haxegon::Gfx_obj::CENTER;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(589)
		Float tmp3 = (tmp1 - tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(589)
		::haxegon::Gfx_obj::t1 = tmp3;
		HX_STACK_LINE(590)
		Float tmp4 = y;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(590)
		int tmp5 = ::haxegon::Gfx_obj::TOP;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(590)
		Float tmp6 = (tmp4 - tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(590)
		::haxegon::Gfx_obj::t2 = tmp6;
		HX_STACK_LINE(591)
		Float tmp7 = y;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(591)
		int tmp8 = ::haxegon::Gfx_obj::BOTTOM;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(591)
		Float tmp9 = (tmp7 - tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(591)
		::haxegon::Gfx_obj::t3 = tmp9;
		HX_STACK_LINE(592)
		Float tmp10 = ::haxegon::Gfx_obj::t1;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(592)
		bool tmp11 = (tmp10 == (int)0);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(592)
		bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(592)
		bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(592)
		if ((tmp12)){
			HX_STACK_LINE(592)
			Float tmp14 = ::haxegon::Gfx_obj::t1;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(592)
			Float tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(592)
			Float tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(592)
			Float tmp17 = ::Math_obj::abs(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(592)
			Float tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(592)
			Float tmp19 = ::haxegon::Gfx_obj::t2;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(592)
			Float tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(592)
			Float tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(592)
			Float tmp22 = ::Math_obj::abs(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(592)
			Float tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(592)
			bool tmp24 = (tmp18 < tmp23);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(592)
			bool tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(592)
			bool tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(592)
			if ((tmp26)){
				HX_STACK_LINE(592)
				Float tmp27 = ::haxegon::Gfx_obj::t1;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(592)
				Float tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(592)
				Float tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(592)
				Float tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(592)
				Float tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(592)
				Float tmp32 = ::Math_obj::abs(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(592)
				Float tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(592)
				Float tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(592)
				Float tmp35 = ::haxegon::Gfx_obj::t3;		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(592)
				Float tmp36 = tmp35;		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(592)
				Float tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(592)
				Float tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(592)
				Float tmp39 = tmp38;		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(592)
				Float tmp40 = ::Math_obj::abs(tmp39);		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(592)
				Float tmp41 = tmp40;		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(592)
				Float tmp42 = tmp41;		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(592)
				tmp13 = (tmp34 < tmp42);
			}
			else{
				HX_STACK_LINE(592)
				tmp13 = false;
			}
		}
		else{
			HX_STACK_LINE(592)
			tmp13 = true;
		}
		HX_STACK_LINE(592)
		if ((tmp13)){
			HX_STACK_LINE(593)
			Float tmp14 = ::haxegon::Gfx_obj::t1;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(593)
			int tmp15 = ::haxegon::Gfx_obj::screenheightmid;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(593)
			Float tmp16 = (tmp14 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(593)
			int tmp17 = ::haxegon::Gfx_obj::imagenum;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(593)
			::openfl::display::BitmapData tmp18 = ::haxegon::Gfx_obj::images->__get(tmp17).StaticCast< ::openfl::display::BitmapData >();		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(593)
			int tmp19 = tmp18->height;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(593)
			Float tmp20 = (Float(tmp19) / Float((int)2));		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(593)
			int tmp21 = ::Std_obj::_int(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(593)
			Float tmp22 = (tmp16 - tmp21);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(593)
			return tmp22;
		}
		else{
			HX_STACK_LINE(594)
			Float tmp14 = ::haxegon::Gfx_obj::t2;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(594)
			bool tmp15 = (tmp14 == (int)0);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(594)
			bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(594)
			bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(594)
			if ((tmp16)){
				HX_STACK_LINE(594)
				Float tmp18 = ::haxegon::Gfx_obj::t2;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(594)
				Float tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(594)
				Float tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(594)
				Float tmp21 = ::Math_obj::abs(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(594)
				Float tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(594)
				Float tmp23 = ::haxegon::Gfx_obj::t1;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(594)
				Float tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(594)
				Float tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(594)
				Float tmp26 = ::Math_obj::abs(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(594)
				Float tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(594)
				bool tmp28 = (tmp22 < tmp27);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(594)
				bool tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(594)
				bool tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(594)
				if ((tmp30)){
					HX_STACK_LINE(594)
					Float tmp31 = ::haxegon::Gfx_obj::t2;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(594)
					Float tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(594)
					Float tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(594)
					Float tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(594)
					Float tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(594)
					Float tmp36 = ::Math_obj::abs(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(594)
					Float tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(594)
					Float tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(594)
					Float tmp39 = ::haxegon::Gfx_obj::t3;		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(594)
					Float tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(594)
					Float tmp41 = tmp40;		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(594)
					Float tmp42 = tmp41;		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(594)
					Float tmp43 = tmp42;		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(594)
					Float tmp44 = ::Math_obj::abs(tmp43);		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(594)
					Float tmp45 = tmp44;		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(594)
					Float tmp46 = tmp45;		HX_STACK_VAR(tmp46,"tmp46");
					HX_STACK_LINE(594)
					tmp17 = (tmp38 < tmp46);
				}
				else{
					HX_STACK_LINE(594)
					tmp17 = false;
				}
			}
			else{
				HX_STACK_LINE(594)
				tmp17 = true;
			}
			HX_STACK_LINE(594)
			if ((tmp17)){
				HX_STACK_LINE(595)
				Float tmp18 = ::haxegon::Gfx_obj::t2;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(595)
				return tmp18;
			}
			else{
				HX_STACK_LINE(597)
				Float tmp18 = ::haxegon::Gfx_obj::t3;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(597)
				int tmp19 = ::haxegon::Gfx_obj::imagenum;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(597)
				::openfl::display::BitmapData tmp20 = ::haxegon::Gfx_obj::images->__get(tmp19).StaticCast< ::openfl::display::BitmapData >();		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(597)
				int tmp21 = tmp20->height;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(597)
				Float tmp22 = (tmp18 + tmp21);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(597)
				return tmp22;
			}
		}
	}
	HX_STACK_LINE(601)
	Float tmp1 = y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(601)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Gfx_obj,imagealigny,return )

Float Gfx_obj::imagealignonimagex( Float x){
	HX_STACK_FRAME("haxegon.Gfx","imagealignonimagex",0x32019e69,"haxegon.Gfx.imagealignonimagex","haxegon/Gfx.hx",605,0xa6405f94)
	HX_STACK_ARG(x,"x")
	HX_STACK_LINE(606)
	bool tmp = (x <= (int)-5000);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(606)
	if ((tmp)){
		HX_STACK_LINE(607)
		Float tmp1 = x;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(607)
		int tmp2 = ::haxegon::Gfx_obj::CENTER;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(607)
		Float tmp3 = (tmp1 - tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(607)
		::haxegon::Gfx_obj::t1 = tmp3;
		HX_STACK_LINE(608)
		Float tmp4 = x;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(608)
		int tmp5 = ::haxegon::Gfx_obj::LEFT;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(608)
		Float tmp6 = (tmp4 - tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(608)
		::haxegon::Gfx_obj::t2 = tmp6;
		HX_STACK_LINE(609)
		Float tmp7 = x;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(609)
		int tmp8 = ::haxegon::Gfx_obj::RIGHT;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(609)
		Float tmp9 = (tmp7 - tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(609)
		::haxegon::Gfx_obj::t3 = tmp9;
		HX_STACK_LINE(610)
		Float tmp10 = ::haxegon::Gfx_obj::t1;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(610)
		bool tmp11 = (tmp10 == (int)0);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(610)
		bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(610)
		bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(610)
		if ((tmp12)){
			HX_STACK_LINE(610)
			Float tmp14 = ::haxegon::Gfx_obj::t1;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(610)
			Float tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(610)
			Float tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(610)
			Float tmp17 = ::Math_obj::abs(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(610)
			Float tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(610)
			Float tmp19 = ::haxegon::Gfx_obj::t2;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(610)
			Float tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(610)
			Float tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(610)
			Float tmp22 = ::Math_obj::abs(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(610)
			Float tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(610)
			bool tmp24 = (tmp18 < tmp23);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(610)
			bool tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(610)
			bool tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(610)
			if ((tmp26)){
				HX_STACK_LINE(610)
				Float tmp27 = ::haxegon::Gfx_obj::t1;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(610)
				Float tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(610)
				Float tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(610)
				Float tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(610)
				Float tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(610)
				Float tmp32 = ::Math_obj::abs(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(610)
				Float tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(610)
				Float tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(610)
				Float tmp35 = ::haxegon::Gfx_obj::t3;		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(610)
				Float tmp36 = tmp35;		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(610)
				Float tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(610)
				Float tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(610)
				Float tmp39 = tmp38;		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(610)
				Float tmp40 = ::Math_obj::abs(tmp39);		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(610)
				Float tmp41 = tmp40;		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(610)
				Float tmp42 = tmp41;		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(610)
				tmp13 = (tmp34 < tmp42);
			}
			else{
				HX_STACK_LINE(610)
				tmp13 = false;
			}
		}
		else{
			HX_STACK_LINE(610)
			tmp13 = true;
		}
		HX_STACK_LINE(610)
		if ((tmp13)){
			HX_STACK_LINE(611)
			Float tmp14 = ::haxegon::Gfx_obj::t1;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(611)
			int tmp15 = ::haxegon::Gfx_obj::imagenum;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(611)
			::openfl::display::BitmapData tmp16 = ::haxegon::Gfx_obj::images->__get(tmp15).StaticCast< ::openfl::display::BitmapData >();		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(611)
			int tmp17 = tmp16->width;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(611)
			Float tmp18 = (Float(tmp17) / Float((int)2));		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(611)
			int tmp19 = ::Std_obj::_int(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(611)
			Float tmp20 = (tmp14 + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(611)
			return tmp20;
		}
		else{
			HX_STACK_LINE(612)
			Float tmp14 = ::haxegon::Gfx_obj::t2;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(612)
			bool tmp15 = (tmp14 == (int)0);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(612)
			bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(612)
			bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(612)
			if ((tmp16)){
				HX_STACK_LINE(612)
				Float tmp18 = ::haxegon::Gfx_obj::t2;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(612)
				Float tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(612)
				Float tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(612)
				Float tmp21 = ::Math_obj::abs(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(612)
				Float tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(612)
				Float tmp23 = ::haxegon::Gfx_obj::t1;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(612)
				Float tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(612)
				Float tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(612)
				Float tmp26 = ::Math_obj::abs(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(612)
				Float tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(612)
				bool tmp28 = (tmp22 < tmp27);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(612)
				bool tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(612)
				bool tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(612)
				if ((tmp30)){
					HX_STACK_LINE(612)
					Float tmp31 = ::haxegon::Gfx_obj::t2;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(612)
					Float tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(612)
					Float tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(612)
					Float tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(612)
					Float tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(612)
					Float tmp36 = ::Math_obj::abs(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(612)
					Float tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(612)
					Float tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(612)
					Float tmp39 = ::haxegon::Gfx_obj::t3;		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(612)
					Float tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(612)
					Float tmp41 = tmp40;		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(612)
					Float tmp42 = tmp41;		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(612)
					Float tmp43 = tmp42;		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(612)
					Float tmp44 = ::Math_obj::abs(tmp43);		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(612)
					Float tmp45 = tmp44;		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(612)
					Float tmp46 = tmp45;		HX_STACK_VAR(tmp46,"tmp46");
					HX_STACK_LINE(612)
					tmp17 = (tmp38 < tmp46);
				}
				else{
					HX_STACK_LINE(612)
					tmp17 = false;
				}
			}
			else{
				HX_STACK_LINE(612)
				tmp17 = true;
			}
			HX_STACK_LINE(612)
			if ((tmp17)){
				HX_STACK_LINE(613)
				Float tmp18 = ::haxegon::Gfx_obj::t2;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(613)
				return tmp18;
			}
			else{
				HX_STACK_LINE(615)
				Float tmp18 = ::haxegon::Gfx_obj::t3;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(615)
				int tmp19 = ::haxegon::Gfx_obj::imagenum;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(615)
				::openfl::display::BitmapData tmp20 = ::haxegon::Gfx_obj::images->__get(tmp19).StaticCast< ::openfl::display::BitmapData >();		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(615)
				int tmp21 = tmp20->width;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(615)
				Float tmp22 = (tmp18 + tmp21);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(615)
				return tmp22;
			}
		}
	}
	HX_STACK_LINE(619)
	Float tmp1 = x;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(619)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Gfx_obj,imagealignonimagex,return )

Float Gfx_obj::imagealignonimagey( Float y){
	HX_STACK_FRAME("haxegon.Gfx","imagealignonimagey",0x32019e6a,"haxegon.Gfx.imagealignonimagey","haxegon/Gfx.hx",623,0xa6405f94)
	HX_STACK_ARG(y,"y")
	HX_STACK_LINE(624)
	bool tmp = (y <= (int)-5000);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(624)
	if ((tmp)){
		HX_STACK_LINE(625)
		Float tmp1 = y;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(625)
		int tmp2 = ::haxegon::Gfx_obj::CENTER;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(625)
		Float tmp3 = (tmp1 - tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(625)
		::haxegon::Gfx_obj::t1 = tmp3;
		HX_STACK_LINE(626)
		Float tmp4 = y;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(626)
		int tmp5 = ::haxegon::Gfx_obj::TOP;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(626)
		Float tmp6 = (tmp4 - tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(626)
		::haxegon::Gfx_obj::t2 = tmp6;
		HX_STACK_LINE(627)
		Float tmp7 = y;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(627)
		int tmp8 = ::haxegon::Gfx_obj::BOTTOM;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(627)
		Float tmp9 = (tmp7 - tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(627)
		::haxegon::Gfx_obj::t3 = tmp9;
		HX_STACK_LINE(628)
		Float tmp10 = ::haxegon::Gfx_obj::t1;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(628)
		bool tmp11 = (tmp10 == (int)0);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(628)
		bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(628)
		bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(628)
		if ((tmp12)){
			HX_STACK_LINE(628)
			Float tmp14 = ::haxegon::Gfx_obj::t1;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(628)
			Float tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(628)
			Float tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(628)
			Float tmp17 = ::Math_obj::abs(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(628)
			Float tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(628)
			Float tmp19 = ::haxegon::Gfx_obj::t2;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(628)
			Float tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(628)
			Float tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(628)
			Float tmp22 = ::Math_obj::abs(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(628)
			Float tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(628)
			bool tmp24 = (tmp18 < tmp23);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(628)
			bool tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(628)
			bool tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(628)
			if ((tmp26)){
				HX_STACK_LINE(628)
				Float tmp27 = ::haxegon::Gfx_obj::t1;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(628)
				Float tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(628)
				Float tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(628)
				Float tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(628)
				Float tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(628)
				Float tmp32 = ::Math_obj::abs(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(628)
				Float tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(628)
				Float tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(628)
				Float tmp35 = ::haxegon::Gfx_obj::t3;		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(628)
				Float tmp36 = tmp35;		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(628)
				Float tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(628)
				Float tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(628)
				Float tmp39 = tmp38;		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(628)
				Float tmp40 = ::Math_obj::abs(tmp39);		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(628)
				Float tmp41 = tmp40;		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(628)
				Float tmp42 = tmp41;		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(628)
				tmp13 = (tmp34 < tmp42);
			}
			else{
				HX_STACK_LINE(628)
				tmp13 = false;
			}
		}
		else{
			HX_STACK_LINE(628)
			tmp13 = true;
		}
		HX_STACK_LINE(628)
		if ((tmp13)){
			HX_STACK_LINE(629)
			Float tmp14 = ::haxegon::Gfx_obj::t1;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(629)
			int tmp15 = ::haxegon::Gfx_obj::imagenum;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(629)
			::openfl::display::BitmapData tmp16 = ::haxegon::Gfx_obj::images->__get(tmp15).StaticCast< ::openfl::display::BitmapData >();		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(629)
			int tmp17 = tmp16->height;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(629)
			Float tmp18 = (Float(tmp17) / Float((int)2));		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(629)
			int tmp19 = ::Std_obj::_int(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(629)
			Float tmp20 = (tmp14 + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(629)
			return tmp20;
		}
		else{
			HX_STACK_LINE(630)
			Float tmp14 = ::haxegon::Gfx_obj::t2;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(630)
			bool tmp15 = (tmp14 == (int)0);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(630)
			bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(630)
			bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(630)
			if ((tmp16)){
				HX_STACK_LINE(630)
				Float tmp18 = ::haxegon::Gfx_obj::t2;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(630)
				Float tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(630)
				Float tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(630)
				Float tmp21 = ::Math_obj::abs(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(630)
				Float tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(630)
				Float tmp23 = ::haxegon::Gfx_obj::t1;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(630)
				Float tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(630)
				Float tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(630)
				Float tmp26 = ::Math_obj::abs(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(630)
				Float tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(630)
				bool tmp28 = (tmp22 < tmp27);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(630)
				bool tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(630)
				bool tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(630)
				if ((tmp30)){
					HX_STACK_LINE(630)
					Float tmp31 = ::haxegon::Gfx_obj::t2;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(630)
					Float tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(630)
					Float tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(630)
					Float tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(630)
					Float tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(630)
					Float tmp36 = ::Math_obj::abs(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(630)
					Float tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(630)
					Float tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(630)
					Float tmp39 = ::haxegon::Gfx_obj::t3;		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(630)
					Float tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(630)
					Float tmp41 = tmp40;		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(630)
					Float tmp42 = tmp41;		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(630)
					Float tmp43 = tmp42;		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(630)
					Float tmp44 = ::Math_obj::abs(tmp43);		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(630)
					Float tmp45 = tmp44;		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(630)
					Float tmp46 = tmp45;		HX_STACK_VAR(tmp46,"tmp46");
					HX_STACK_LINE(630)
					tmp17 = (tmp38 < tmp46);
				}
				else{
					HX_STACK_LINE(630)
					tmp17 = false;
				}
			}
			else{
				HX_STACK_LINE(630)
				tmp17 = true;
			}
			HX_STACK_LINE(630)
			if ((tmp17)){
				HX_STACK_LINE(631)
				Float tmp18 = ::haxegon::Gfx_obj::t2;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(631)
				return tmp18;
			}
			else{
				HX_STACK_LINE(633)
				Float tmp18 = ::haxegon::Gfx_obj::t3;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(633)
				int tmp19 = ::haxegon::Gfx_obj::imagenum;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(633)
				::openfl::display::BitmapData tmp20 = ::haxegon::Gfx_obj::images->__get(tmp19).StaticCast< ::openfl::display::BitmapData >();		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(633)
				int tmp21 = tmp20->height;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(633)
				Float tmp22 = (tmp18 + tmp21);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(633)
				return tmp22;
			}
		}
	}
	HX_STACK_LINE(637)
	Float tmp1 = y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(637)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Gfx_obj,imagealignonimagey,return )

Void Gfx_obj::drawimage( Float x,Float y,::String imagename){
{
		HX_STACK_FRAME("haxegon.Gfx","drawimage",0x1924e574,"haxegon.Gfx.drawimage","haxegon/Gfx.hx",644,0xa6405f94)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(imagename,"imagename")
		HX_STACK_LINE(645)
		bool tmp = ::haxegon::Gfx_obj::clearscreeneachframe;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(645)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(645)
		if ((tmp1)){
			HX_STACK_LINE(645)
			bool tmp2 = ::haxegon::Gfx_obj::skiprender;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(645)
			bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(645)
			if ((tmp2)){
				HX_STACK_LINE(645)
				tmp3 = ::haxegon::Gfx_obj::drawingtoscreen;
			}
			else{
				HX_STACK_LINE(645)
				tmp3 = false;
			}
			HX_STACK_LINE(645)
			if ((tmp3)){
				HX_STACK_LINE(645)
				return null();
			}
		}
		HX_STACK_LINE(646)
		::haxe::ds::StringMap tmp2 = ::haxegon::Gfx_obj::imageindex;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(646)
		::String tmp3 = imagename;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(646)
		bool tmp4 = tmp2->exists(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(646)
		bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(646)
		if ((tmp5)){
			HX_STACK_LINE(647)
			::String tmp6 = (HX_HCSTRING("ERROR: In drawimage, cannot find image \"","\xf5","\x83","\xb7","\xf8") + imagename);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(647)
			::String tmp7 = (tmp6 + HX_HCSTRING("\".","\xcc","\x1d","\x00","\x00"));		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(647)
			HX_STACK_DO_THROW(tmp7);
			HX_STACK_LINE(648)
			return null();
		}
		HX_STACK_LINE(650)
		::haxe::ds::StringMap tmp6 = ::haxegon::Gfx_obj::imageindex;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(650)
		::String tmp7 = imagename;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(650)
		Dynamic tmp8 = tmp6->get(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(650)
		::haxegon::Gfx_obj::imagenum = tmp8;
		HX_STACK_LINE(651)
		Float tmp9 = x;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(651)
		Float tmp10 = ::haxegon::Gfx_obj::imagealignx(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(651)
		x = tmp10;
		HX_STACK_LINE(651)
		Float tmp11 = y;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(651)
		Float tmp12 = ::haxegon::Gfx_obj::imagealigny(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(651)
		y = tmp12;
		HX_STACK_LINE(653)
		bool tmp13 = ::haxegon::Gfx_obj::transform;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(653)
		bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(653)
		bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(653)
		bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(653)
		if ((tmp15)){
			HX_STACK_LINE(653)
			bool tmp17 = ::haxegon::Gfx_obj::coltransform;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(653)
			bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(653)
			bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(653)
			tmp16 = !(tmp19);
		}
		else{
			HX_STACK_LINE(653)
			tmp16 = false;
		}
		HX_STACK_LINE(653)
		if ((tmp16)){
			HX_STACK_LINE(654)
			Float tmp17 = x;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(654)
			int tmp18 = ::Std_obj::_int(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(654)
			Float tmp19 = y;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(654)
			int tmp20 = ::Std_obj::_int(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(654)
			::haxegon::Gfx_obj::settpoint(tmp18,tmp20);
			HX_STACK_LINE(655)
			::openfl::display::BitmapData tmp21 = ::haxegon::Gfx_obj::drawto;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(655)
			int tmp22 = ::haxegon::Gfx_obj::imagenum;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(655)
			::openfl::display::BitmapData tmp23 = ::haxegon::Gfx_obj::images->__get(tmp22).StaticCast< ::openfl::display::BitmapData >();		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(655)
			int tmp24 = ::haxegon::Gfx_obj::imagenum;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(655)
			::openfl::display::BitmapData tmp25 = ::haxegon::Gfx_obj::images->__get(tmp24).StaticCast< ::openfl::display::BitmapData >();		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(655)
			::openfl::geom::Rectangle tmp26 = tmp25->rect;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(655)
			::openfl::geom::Point tmp27 = ::haxegon::Gfx_obj::tpoint;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(655)
			tmp21->copyPixels(tmp23,tmp26,tmp27,null(),null(),true);
		}
		else{
			HX_STACK_LINE(657)
			::haxegon::Gfx_obj::tempxalign = (int)0;
			HX_STACK_LINE(657)
			::haxegon::Gfx_obj::tempyalign = (int)0;
			HX_STACK_LINE(659)
			::openfl::geom::Matrix tmp17 = ::haxegon::Gfx_obj::shapematrix;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(659)
			tmp17->identity();
			HX_STACK_LINE(661)
			Float tmp18 = ::haxegon::Gfx_obj::imagexscale;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(661)
			bool tmp19 = (tmp18 != ((Float)1.0));		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(661)
			bool tmp20 = !(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(661)
			bool tmp21;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(661)
			if ((tmp20)){
				HX_STACK_LINE(661)
				Float tmp22 = ::haxegon::Gfx_obj::imageyscale;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(661)
				Float tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(661)
				tmp21 = (tmp23 != ((Float)1.0));
			}
			else{
				HX_STACK_LINE(661)
				tmp21 = true;
			}
			HX_STACK_LINE(661)
			if ((tmp21)){
				HX_STACK_LINE(662)
				Float tmp22 = ::haxegon::Gfx_obj::imagescalexpivot;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(662)
				bool tmp23 = (tmp22 != ((Float)0.0));		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(662)
				if ((tmp23)){
					HX_STACK_LINE(662)
					Float tmp24 = ::haxegon::Gfx_obj::imagescalexpivot;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(662)
					Float tmp25 = ::haxegon::Gfx_obj::imagealignonimagex(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(662)
					::haxegon::Gfx_obj::tempxalign = tmp25;
				}
				HX_STACK_LINE(663)
				Float tmp24 = ::haxegon::Gfx_obj::imagescaleypivot;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(663)
				bool tmp25 = (tmp24 != ((Float)0.0));		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(663)
				if ((tmp25)){
					HX_STACK_LINE(663)
					Float tmp26 = ::haxegon::Gfx_obj::imagescaleypivot;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(663)
					Float tmp27 = ::haxegon::Gfx_obj::imagealignonimagey(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(663)
					::haxegon::Gfx_obj::tempyalign = tmp27;
				}
				HX_STACK_LINE(664)
				::openfl::geom::Matrix tmp26 = ::haxegon::Gfx_obj::shapematrix;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(664)
				Float tmp27 = ::haxegon::Gfx_obj::tempxalign;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(664)
				Float tmp28 = -(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(664)
				Float tmp29 = ::haxegon::Gfx_obj::tempyalign;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(664)
				Float tmp30 = -(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(664)
				tmp26->translate(tmp28,tmp30);
				HX_STACK_LINE(665)
				::openfl::geom::Matrix tmp31 = ::haxegon::Gfx_obj::shapematrix;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(665)
				Float tmp32 = ::haxegon::Gfx_obj::imagexscale;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(665)
				Float tmp33 = ::haxegon::Gfx_obj::imageyscale;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(665)
				tmp31->scale(tmp32,tmp33);
				HX_STACK_LINE(666)
				::openfl::geom::Matrix tmp34 = ::haxegon::Gfx_obj::shapematrix;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(666)
				Float tmp35 = ::haxegon::Gfx_obj::tempxalign;		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(666)
				Float tmp36 = ::haxegon::Gfx_obj::tempyalign;		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(666)
				tmp34->translate(tmp35,tmp36);
			}
			HX_STACK_LINE(669)
			Float tmp22 = ::haxegon::Gfx_obj::imagerotate;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(669)
			bool tmp23 = (tmp22 != (int)0);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(669)
			if ((tmp23)){
				HX_STACK_LINE(670)
				Float tmp24 = ::haxegon::Gfx_obj::imagerotatexpivot;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(670)
				bool tmp25 = (tmp24 != ((Float)0.0));		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(670)
				if ((tmp25)){
					HX_STACK_LINE(670)
					Float tmp26 = ::haxegon::Gfx_obj::imagerotatexpivot;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(670)
					Float tmp27 = ::haxegon::Gfx_obj::imagealignonimagex(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(670)
					::haxegon::Gfx_obj::tempxalign = tmp27;
				}
				HX_STACK_LINE(671)
				Float tmp26 = ::haxegon::Gfx_obj::imagerotateypivot;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(671)
				bool tmp27 = (tmp26 != ((Float)0.0));		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(671)
				if ((tmp27)){
					HX_STACK_LINE(671)
					Float tmp28 = ::haxegon::Gfx_obj::imagerotateypivot;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(671)
					Float tmp29 = ::haxegon::Gfx_obj::imagealignonimagey(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(671)
					::haxegon::Gfx_obj::tempyalign = tmp29;
				}
				HX_STACK_LINE(672)
				::openfl::geom::Matrix tmp28 = ::haxegon::Gfx_obj::shapematrix;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(672)
				Float tmp29 = ::haxegon::Gfx_obj::tempxalign;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(672)
				Float tmp30 = -(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(672)
				Float tmp31 = ::haxegon::Gfx_obj::tempyalign;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(672)
				Float tmp32 = -(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(672)
				tmp28->translate(tmp30,tmp32);
				HX_STACK_LINE(673)
				::openfl::geom::Matrix tmp33 = ::haxegon::Gfx_obj::shapematrix;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(673)
				Float tmp34 = ::haxegon::Gfx_obj::imagerotate;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(673)
				Float tmp35 = (tmp34 * ((Float)3.1415));		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(673)
				Float tmp36 = (Float(tmp35) / Float((int)180));		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(673)
				tmp33->rotate(tmp36);
				HX_STACK_LINE(674)
				::openfl::geom::Matrix tmp37 = ::haxegon::Gfx_obj::shapematrix;		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(674)
				Float tmp38 = ::haxegon::Gfx_obj::tempxalign;		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(674)
				Float tmp39 = ::haxegon::Gfx_obj::tempyalign;		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(674)
				tmp37->translate(tmp38,tmp39);
			}
			HX_STACK_LINE(677)
			::openfl::geom::Matrix tmp24 = ::haxegon::Gfx_obj::shapematrix;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(677)
			Float tmp25 = x;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(677)
			Float tmp26 = y;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(677)
			tmp24->translate(tmp25,tmp26);
			HX_STACK_LINE(678)
			bool tmp27 = ::haxegon::Gfx_obj::coltransform;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(678)
			if ((tmp27)){
				HX_STACK_LINE(679)
				Float tmp28 = ::haxegon::Gfx_obj::imagealphamult;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(679)
				::openfl::geom::ColorTransform tmp29 = ::haxegon::Gfx_obj::alphact;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(679)
				tmp29->alphaMultiplier = tmp28;
				HX_STACK_LINE(680)
				Float tmp30 = ::haxegon::Gfx_obj::imageredmult;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(680)
				::openfl::geom::ColorTransform tmp31 = ::haxegon::Gfx_obj::alphact;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(680)
				tmp31->redMultiplier = tmp30;
				HX_STACK_LINE(681)
				Float tmp32 = ::haxegon::Gfx_obj::imagegreenmult;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(681)
				::openfl::geom::ColorTransform tmp33 = ::haxegon::Gfx_obj::alphact;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(681)
				tmp33->greenMultiplier = tmp32;
				HX_STACK_LINE(682)
				Float tmp34 = ::haxegon::Gfx_obj::imagebluemult;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(682)
				::openfl::geom::ColorTransform tmp35 = ::haxegon::Gfx_obj::alphact;		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(682)
				tmp35->blueMultiplier = tmp34;
				HX_STACK_LINE(683)
				Float tmp36 = ::haxegon::Gfx_obj::imageredadd;		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(683)
				::openfl::geom::ColorTransform tmp37 = ::haxegon::Gfx_obj::alphact;		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(683)
				tmp37->redOffset = tmp36;
				HX_STACK_LINE(684)
				Float tmp38 = ::haxegon::Gfx_obj::imagegreenadd;		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(684)
				::openfl::geom::ColorTransform tmp39 = ::haxegon::Gfx_obj::alphact;		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(684)
				tmp39->greenOffset = tmp38;
				HX_STACK_LINE(685)
				Float tmp40 = ::haxegon::Gfx_obj::imageblueadd;		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(685)
				::openfl::geom::ColorTransform tmp41 = ::haxegon::Gfx_obj::alphact;		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(685)
				tmp41->blueOffset = tmp40;
				HX_STACK_LINE(686)
				::openfl::display::BitmapData tmp42 = ::haxegon::Gfx_obj::drawto;		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(686)
				int tmp43 = ::haxegon::Gfx_obj::imagenum;		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(686)
				::openfl::display::BitmapData tmp44 = ::haxegon::Gfx_obj::images->__get(tmp43).StaticCast< ::openfl::display::BitmapData >();		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(686)
				::openfl::geom::Matrix tmp45 = ::haxegon::Gfx_obj::shapematrix;		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(686)
				::openfl::geom::ColorTransform tmp46 = ::haxegon::Gfx_obj::alphact;		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(686)
				tmp42->draw(tmp44,tmp45,tmp46,null(),null(),null());
			}
			else{
				HX_STACK_LINE(688)
				::openfl::display::BitmapData tmp28 = ::haxegon::Gfx_obj::drawto;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(688)
				int tmp29 = ::haxegon::Gfx_obj::imagenum;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(688)
				::openfl::display::BitmapData tmp30 = ::haxegon::Gfx_obj::images->__get(tmp29).StaticCast< ::openfl::display::BitmapData >();		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(688)
				::openfl::geom::Matrix tmp31 = ::haxegon::Gfx_obj::shapematrix;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(688)
				tmp28->draw(tmp30,tmp31,null(),null(),null(),null());
			}
			HX_STACK_LINE(690)
			::openfl::geom::Matrix tmp28 = ::haxegon::Gfx_obj::shapematrix;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(690)
			tmp28->identity();
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Gfx_obj,drawimage,(void))

Void Gfx_obj::grabtilefromscreen( int tilenumber,Float x,Float y){
{
		HX_STACK_FRAME("haxegon.Gfx","grabtilefromscreen",0xf0757d93,"haxegon.Gfx.grabtilefromscreen","haxegon/Gfx.hx",695,0xa6405f94)
		HX_STACK_ARG(tilenumber,"tilenumber")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(696)
		int tmp = ::haxegon::Gfx_obj::currenttileset;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(696)
		bool tmp1 = (tmp == (int)-1);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(696)
		if ((tmp1)){
			HX_STACK_LINE(697)
			HX_STACK_DO_THROW(HX_HCSTRING("ERROR: In grabtilefromscreen, there is no tileset currently set. Use Gfx.changetileset(\"tileset name\") to set the current tileset.","\x09","\x22","\x44","\x31"));
			HX_STACK_LINE(698)
			return null();
		}
		HX_STACK_LINE(701)
		Float tmp2 = x;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(701)
		Float tmp3 = y;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(701)
		int tmp4 = ::haxegon::Gfx_obj::tilewidth();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(701)
		int tmp5 = ::haxegon::Gfx_obj::tileheight();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(701)
		::haxegon::Gfx_obj::settrect(tmp2,tmp3,tmp4,tmp5);
		HX_STACK_LINE(702)
		int tmp6 = ::haxegon::Gfx_obj::currenttileset;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(702)
		::haxegon::util::Tileset tmp7 = ::haxegon::Gfx_obj::tiles->__get(tmp6).StaticCast< ::haxegon::util::Tileset >();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(702)
		::openfl::display::BitmapData tmp8 = tmp7->tiles->__get(tilenumber).StaticCast< ::openfl::display::BitmapData >();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(702)
		::openfl::display::BitmapData tmp9 = ::haxegon::Gfx_obj::backbuffer;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(702)
		::openfl::geom::Rectangle tmp10 = ::haxegon::Gfx_obj::trect;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(702)
		::openfl::geom::Point tmp11 = ::haxegon::Gfx_obj::tl;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(702)
		tmp8->copyPixels(tmp9,tmp10,tmp11,null(),null(),null());
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Gfx_obj,grabtilefromscreen,(void))

Void Gfx_obj::grabtilefromimage( int tilenumber,::String imagename,Float x,Float y){
{
		HX_STACK_FRAME("haxegon.Gfx","grabtilefromimage",0x9ce09f14,"haxegon.Gfx.grabtilefromimage","haxegon/Gfx.hx",705,0xa6405f94)
		HX_STACK_ARG(tilenumber,"tilenumber")
		HX_STACK_ARG(imagename,"imagename")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(706)
		::haxe::ds::StringMap tmp = ::haxegon::Gfx_obj::imageindex;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(706)
		::String tmp1 = imagename;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(706)
		bool tmp2 = tmp->exists(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(706)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(706)
		if ((tmp3)){
			HX_STACK_LINE(707)
			::String tmp4 = (HX_HCSTRING("ERROR: In grabtilefromimage, \"","\x84","\x27","\x26","\x25") + imagename);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(707)
			::String tmp5 = (tmp4 + HX_HCSTRING("\" does not exist.","\x0d","\x75","\xac","\x03"));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(707)
			HX_STACK_DO_THROW(tmp5);
			HX_STACK_LINE(708)
			return null();
		}
		HX_STACK_LINE(711)
		int tmp4 = ::haxegon::Gfx_obj::currenttileset;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(711)
		bool tmp5 = (tmp4 == (int)-1);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(711)
		if ((tmp5)){
			HX_STACK_LINE(712)
			HX_STACK_DO_THROW(HX_HCSTRING("ERROR: In grabtilefromimage, there is no tileset currently set. Use Gfx.changetileset(\"tileset name\") to set the current tileset.","\xb6","\x81","\x9d","\x15"));
			HX_STACK_LINE(713)
			return null();
		}
		HX_STACK_LINE(716)
		::haxe::ds::StringMap tmp6 = ::haxegon::Gfx_obj::imageindex;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(716)
		::String tmp7 = imagename;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(716)
		Dynamic tmp8 = tmp6->get(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(716)
		::haxegon::Gfx_obj::imagenum = tmp8;
		HX_STACK_LINE(718)
		Float tmp9 = x;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(718)
		Float tmp10 = y;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(718)
		int tmp11 = ::haxegon::Gfx_obj::tilewidth();		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(718)
		int tmp12 = ::haxegon::Gfx_obj::tileheight();		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(718)
		::haxegon::Gfx_obj::settrect(tmp9,tmp10,tmp11,tmp12);
		HX_STACK_LINE(719)
		int tmp13 = ::haxegon::Gfx_obj::currenttileset;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(719)
		::haxegon::util::Tileset tmp14 = ::haxegon::Gfx_obj::tiles->__get(tmp13).StaticCast< ::haxegon::util::Tileset >();		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(719)
		::openfl::display::BitmapData tmp15 = tmp14->tiles->__get(tilenumber).StaticCast< ::openfl::display::BitmapData >();		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(719)
		int tmp16 = ::haxegon::Gfx_obj::imagenum;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(719)
		::openfl::display::BitmapData tmp17 = ::haxegon::Gfx_obj::images->__get(tmp16).StaticCast< ::openfl::display::BitmapData >();		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(719)
		::openfl::geom::Rectangle tmp18 = ::haxegon::Gfx_obj::trect;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(719)
		::openfl::geom::Point tmp19 = ::haxegon::Gfx_obj::tl;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(719)
		tmp15->copyPixels(tmp17,tmp18,tmp19,null(),null(),null());
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Gfx_obj,grabtilefromimage,(void))

Void Gfx_obj::grabimagefromscreen( ::String imagename,Float x,Float y){
{
		HX_STACK_FRAME("haxegon.Gfx","grabimagefromscreen",0xd71e6802,"haxegon.Gfx.grabimagefromscreen","haxegon/Gfx.hx",723,0xa6405f94)
		HX_STACK_ARG(imagename,"imagename")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(724)
		::haxe::ds::StringMap tmp = ::haxegon::Gfx_obj::imageindex;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(724)
		::String tmp1 = imagename;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(724)
		bool tmp2 = tmp->exists(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(724)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(724)
		if ((tmp3)){
			HX_STACK_LINE(725)
			::String tmp4 = (HX_HCSTRING("ERROR: In grabimagefromscreen, \"","\xd6","\x35","\x64","\x28") + imagename);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(725)
			::String tmp5 = (tmp4 + HX_HCSTRING("\" does not exist. You need to create an image label first before using this function.","\xb2","\xcd","\xe3","\x50"));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(725)
			HX_STACK_DO_THROW(tmp5);
			HX_STACK_LINE(726)
			return null();
		}
		HX_STACK_LINE(728)
		::haxe::ds::StringMap tmp4 = ::haxegon::Gfx_obj::imageindex;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(728)
		::String tmp5 = imagename;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(728)
		Dynamic tmp6 = tmp4->get(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(728)
		::haxegon::Gfx_obj::imagenum = tmp6;
		HX_STACK_LINE(730)
		Float tmp7 = x;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(730)
		Float tmp8 = y;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(730)
		int tmp9 = ::haxegon::Gfx_obj::imagenum;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(730)
		::openfl::display::BitmapData tmp10 = ::haxegon::Gfx_obj::images->__get(tmp9).StaticCast< ::openfl::display::BitmapData >();		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(730)
		int tmp11 = tmp10->width;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(730)
		int tmp12 = ::haxegon::Gfx_obj::imagenum;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(730)
		::openfl::display::BitmapData tmp13 = ::haxegon::Gfx_obj::images->__get(tmp12).StaticCast< ::openfl::display::BitmapData >();		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(730)
		int tmp14 = tmp13->height;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(730)
		::haxegon::Gfx_obj::settrect(tmp7,tmp8,tmp11,tmp14);
		HX_STACK_LINE(731)
		int tmp15 = ::haxegon::Gfx_obj::imagenum;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(731)
		::openfl::display::BitmapData tmp16 = ::haxegon::Gfx_obj::images->__get(tmp15).StaticCast< ::openfl::display::BitmapData >();		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(731)
		::openfl::display::BitmapData tmp17 = ::haxegon::Gfx_obj::backbuffer;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(731)
		::openfl::geom::Rectangle tmp18 = ::haxegon::Gfx_obj::trect;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(731)
		::openfl::geom::Point tmp19 = ::haxegon::Gfx_obj::tl;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(731)
		tmp16->copyPixels(tmp17,tmp18,tmp19,null(),null(),null());
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Gfx_obj,grabimagefromscreen,(void))

Void Gfx_obj::grabimagefromimage( ::String imagename,::String imagetocopyfrom,Float x,Float y,hx::Null< Float >  __o_w,hx::Null< Float >  __o_h){
Float w = __o_w.Default(0);
Float h = __o_h.Default(0);
	HX_STACK_FRAME("haxegon.Gfx","grabimagefromimage",0x3ea11785,"haxegon.Gfx.grabimagefromimage","haxegon/Gfx.hx",734,0xa6405f94)
	HX_STACK_ARG(imagename,"imagename")
	HX_STACK_ARG(imagetocopyfrom,"imagetocopyfrom")
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(w,"w")
	HX_STACK_ARG(h,"h")
{
		HX_STACK_LINE(735)
		::haxe::ds::StringMap tmp = ::haxegon::Gfx_obj::imageindex;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(735)
		::String tmp1 = imagename;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(735)
		bool tmp2 = tmp->exists(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(735)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(735)
		if ((tmp3)){
			HX_STACK_LINE(736)
			::String tmp4 = (HX_HCSTRING("ERROR: In grabimagefromimage, \"","\x9f","\x12","\xe1","\xdf") + imagename);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(736)
			::String tmp5 = (tmp4 + HX_HCSTRING("\" does not exist. You need to create an image label first before using this function.","\xb2","\xcd","\xe3","\x50"));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(736)
			HX_STACK_DO_THROW(tmp5);
			HX_STACK_LINE(737)
			return null();
		}
		HX_STACK_LINE(740)
		::haxe::ds::StringMap tmp4 = ::haxegon::Gfx_obj::imageindex;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(740)
		::String tmp5 = imagename;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(740)
		Dynamic tmp6 = tmp4->get(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(740)
		::haxegon::Gfx_obj::imagenum = tmp6;
		HX_STACK_LINE(741)
		::haxe::ds::StringMap tmp7 = ::haxegon::Gfx_obj::imageindex;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(741)
		::String tmp8 = imagetocopyfrom;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(741)
		bool tmp9 = tmp7->exists(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(741)
		bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(741)
		if ((tmp10)){
			HX_STACK_LINE(742)
			::String tmp11 = (HX_HCSTRING("ERROR: No image called \"","\xf5","\x27","\x9b","\xde") + imagetocopyfrom);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(742)
			::String tmp12 = (tmp11 + HX_HCSTRING("\" found.","\xea","\xf7","\xec","\xca"));		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(742)
			Dynamic tmp13 = hx::SourceInfo(HX_HCSTRING("Gfx.hx","\x05","\xa7","\xaa","\x6d"),742,HX_HCSTRING("haxegon.Gfx","\xcb","\xea","\x14","\x3a"),HX_HCSTRING("grabimagefromimage","\xc2","\x93","\x93","\x43"));		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(742)
			::haxe::Log_obj::trace(tmp12,tmp13);
		}
		HX_STACK_LINE(744)
		::haxe::ds::StringMap tmp11 = ::haxegon::Gfx_obj::imageindex;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(744)
		::String tmp12 = imagetocopyfrom;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(744)
		Dynamic tmp13 = tmp11->get(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(744)
		int imagenumfrom = tmp13;		HX_STACK_VAR(imagenumfrom,"imagenumfrom");
		HX_STACK_LINE(746)
		bool tmp14 = (w == (int)0);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(746)
		bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(746)
		if ((tmp14)){
			HX_STACK_LINE(746)
			tmp15 = (h == (int)0);
		}
		else{
			HX_STACK_LINE(746)
			tmp15 = false;
		}
		HX_STACK_LINE(746)
		if ((tmp15)){
			HX_STACK_LINE(747)
			Float tmp16 = x;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(747)
			Float tmp17 = y;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(747)
			int tmp18 = ::haxegon::Gfx_obj::imagenum;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(747)
			::openfl::display::BitmapData tmp19 = ::haxegon::Gfx_obj::images->__get(tmp18).StaticCast< ::openfl::display::BitmapData >();		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(747)
			int tmp20 = tmp19->width;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(747)
			int tmp21 = ::haxegon::Gfx_obj::imagenum;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(747)
			::openfl::display::BitmapData tmp22 = ::haxegon::Gfx_obj::images->__get(tmp21).StaticCast< ::openfl::display::BitmapData >();		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(747)
			int tmp23 = tmp22->height;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(747)
			::haxegon::Gfx_obj::settrect(tmp16,tmp17,tmp20,tmp23);
		}
		else{
			HX_STACK_LINE(749)
			Float tmp16 = x;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(749)
			Float tmp17 = y;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(749)
			Float tmp18 = w;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(749)
			Float tmp19 = h;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(749)
			::haxegon::Gfx_obj::settrect(tmp16,tmp17,tmp18,tmp19);
		}
		HX_STACK_LINE(751)
		int tmp16 = ::haxegon::Gfx_obj::imagenum;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(751)
		::openfl::display::BitmapData tmp17 = ::haxegon::Gfx_obj::images->__get(tmp16).StaticCast< ::openfl::display::BitmapData >();		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(751)
		::openfl::display::BitmapData tmp18 = ::haxegon::Gfx_obj::images->__get(imagenumfrom).StaticCast< ::openfl::display::BitmapData >();		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(751)
		::openfl::geom::Rectangle tmp19 = ::haxegon::Gfx_obj::trect;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(751)
		::openfl::geom::Point tmp20 = ::haxegon::Gfx_obj::tl;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(751)
		tmp17->copyPixels(tmp18,tmp19,tmp20,null(),null(),null());
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(Gfx_obj,grabimagefromimage,(void))

Void Gfx_obj::copytile( int totilenumber,::String fromtileset,int fromtilenumber){
{
		HX_STACK_FRAME("haxegon.Gfx","copytile",0x3e2dc766,"haxegon.Gfx.copytile","haxegon/Gfx.hx",755,0xa6405f94)
		HX_STACK_ARG(totilenumber,"totilenumber")
		HX_STACK_ARG(fromtileset,"fromtileset")
		HX_STACK_ARG(fromtilenumber,"fromtilenumber")
		HX_STACK_LINE(756)
		::haxe::ds::StringMap tmp = ::haxegon::Gfx_obj::tilesetindex;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(756)
		::String tmp1 = fromtileset;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(756)
		bool tmp2 = tmp->exists(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(756)
		if ((tmp2)){
			HX_STACK_LINE(757)
			int tmp3 = ::haxegon::Gfx_obj::currenttileset;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(757)
			::haxegon::util::Tileset tmp4 = ::haxegon::Gfx_obj::tiles->__get(tmp3).StaticCast< ::haxegon::util::Tileset >();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(757)
			int tmp5 = tmp4->width;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(757)
			::haxe::ds::StringMap tmp6 = ::haxegon::Gfx_obj::tilesetindex;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(757)
			::String tmp7 = fromtileset;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(757)
			Dynamic tmp8 = tmp6->get(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(757)
			Dynamic tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(757)
			::haxegon::util::Tileset tmp10 = ::haxegon::Gfx_obj::tiles->__get(tmp9).StaticCast< ::haxegon::util::Tileset >();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(757)
			int tmp11 = tmp10->width;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(757)
			bool tmp12 = (tmp5 == tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(757)
			bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(757)
			if ((tmp12)){
				HX_STACK_LINE(757)
				int tmp14 = ::haxegon::Gfx_obj::currenttileset;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(757)
				int tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(757)
				::haxegon::util::Tileset tmp16 = ::haxegon::Gfx_obj::tiles->__get(tmp15).StaticCast< ::haxegon::util::Tileset >();		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(757)
				::haxegon::util::Tileset tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(757)
				int tmp18 = tmp17->height;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(757)
				::haxe::ds::StringMap tmp19 = ::haxegon::Gfx_obj::tilesetindex;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(757)
				::haxe::ds::StringMap tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(757)
				::String tmp21 = fromtileset;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(757)
				::String tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(757)
				Dynamic tmp23 = tmp20->get(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(757)
				Dynamic tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(757)
				Dynamic tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(757)
				::haxegon::util::Tileset tmp26 = ::haxegon::Gfx_obj::tiles->__get(tmp25).StaticCast< ::haxegon::util::Tileset >();		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(757)
				::haxegon::util::Tileset tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(757)
				int tmp28 = tmp27->height;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(757)
				tmp13 = (tmp18 == tmp28);
			}
			else{
				HX_STACK_LINE(757)
				tmp13 = false;
			}
			HX_STACK_LINE(757)
			if ((tmp13)){
				HX_STACK_LINE(758)
				int tmp14 = ::haxegon::Gfx_obj::currenttileset;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(758)
				::haxegon::util::Tileset tmp15 = ::haxegon::Gfx_obj::tiles->__get(tmp14).StaticCast< ::haxegon::util::Tileset >();		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(758)
				::openfl::display::BitmapData tmp16 = tmp15->tiles->__get(totilenumber).StaticCast< ::openfl::display::BitmapData >();		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(758)
				::haxe::ds::StringMap tmp17 = ::haxegon::Gfx_obj::tilesetindex;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(758)
				::String tmp18 = fromtileset;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(758)
				Dynamic tmp19 = tmp17->get(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(758)
				Dynamic tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(758)
				::haxegon::util::Tileset tmp21 = ::haxegon::Gfx_obj::tiles->__get(tmp20).StaticCast< ::haxegon::util::Tileset >();		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(758)
				::openfl::display::BitmapData tmp22 = tmp21->tiles->__get(fromtilenumber).StaticCast< ::openfl::display::BitmapData >();		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(758)
				::haxe::ds::StringMap tmp23 = ::haxegon::Gfx_obj::tilesetindex;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(758)
				::String tmp24 = fromtileset;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(758)
				Dynamic tmp25 = tmp23->get(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(758)
				Dynamic tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(758)
				::haxegon::util::Tileset tmp27 = ::haxegon::Gfx_obj::tiles->__get(tmp26).StaticCast< ::haxegon::util::Tileset >();		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(758)
				::openfl::display::BitmapData tmp28 = tmp27->tiles->__get(fromtilenumber).StaticCast< ::openfl::display::BitmapData >();		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(758)
				::openfl::geom::Rectangle tmp29 = tmp28->rect;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(758)
				::openfl::geom::Point tmp30 = ::haxegon::Gfx_obj::tl;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(758)
				tmp16->copyPixels(tmp22,tmp29,tmp30,null(),null(),null());
			}
			else{
				HX_STACK_LINE(760)
				::String tmp14 = ::haxegon::Gfx_obj::currenttilesetname;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(760)
				::String tmp15 = (HX_HCSTRING("ERROR: Tilesets ","\x53","\x90","\xb4","\xa9") + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(760)
				::String tmp16 = (tmp15 + HX_HCSTRING(" (","\x08","\x1c","\x00","\x00"));		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(760)
				int tmp17 = ::haxegon::Gfx_obj::tilewidth();		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(760)
				::String tmp18 = ::Std_obj::string(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(760)
				::String tmp19 = (tmp16 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(760)
				::String tmp20 = (tmp19 + HX_HCSTRING("x","\x78","\x00","\x00","\x00"));		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(760)
				int tmp21 = ::haxegon::Gfx_obj::tileheight();		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(760)
				::String tmp22 = ::Std_obj::string(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(760)
				::String tmp23 = (tmp20 + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(760)
				::String tmp24 = (tmp23 + HX_HCSTRING(") and ","\xc0","\xdc","\xe5","\x11"));		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(760)
				::String tmp25 = fromtileset;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(760)
				::String tmp26 = (tmp24 + tmp25);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(760)
				::String tmp27 = (tmp26 + HX_HCSTRING(" (","\x08","\x1c","\x00","\x00"));		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(760)
				::haxe::ds::StringMap tmp28 = ::haxegon::Gfx_obj::tilesetindex;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(760)
				::String tmp29 = fromtileset;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(760)
				Dynamic tmp30 = tmp28->get(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(760)
				Dynamic tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(760)
				::haxegon::util::Tileset tmp32 = ::haxegon::Gfx_obj::tiles->__get(tmp31).StaticCast< ::haxegon::util::Tileset >();		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(760)
				int tmp33 = tmp32->width;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(760)
				::String tmp34 = ::Std_obj::string(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(760)
				::String tmp35 = (tmp27 + tmp34);		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(760)
				::String tmp36 = (tmp35 + HX_HCSTRING("x","\x78","\x00","\x00","\x00"));		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(760)
				::haxe::ds::StringMap tmp37 = ::haxegon::Gfx_obj::tilesetindex;		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(760)
				::String tmp38 = fromtileset;		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(760)
				Dynamic tmp39 = tmp37->get(tmp38);		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(760)
				Dynamic tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(760)
				::haxegon::util::Tileset tmp41 = ::haxegon::Gfx_obj::tiles->__get(tmp40).StaticCast< ::haxegon::util::Tileset >();		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(760)
				int tmp42 = tmp41->height;		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(760)
				::String tmp43 = ::Std_obj::string(tmp42);		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(760)
				::String tmp44 = (tmp36 + tmp43);		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(760)
				::String tmp45 = (tmp44 + HX_HCSTRING(") are different sizes. Maybe try just drawing to the tile you want instead with Gfx.drawtotile()?","\xf2","\x8f","\x4a","\x62"));		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(760)
				Dynamic tmp46 = hx::SourceInfo(HX_HCSTRING("Gfx.hx","\x05","\xa7","\xaa","\x6d"),760,HX_HCSTRING("haxegon.Gfx","\xcb","\xea","\x14","\x3a"),HX_HCSTRING("copytile","\x63","\x05","\xc2","\xe6"));		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(760)
				::haxe::Log_obj::trace(tmp45,tmp46);
				HX_STACK_LINE(761)
				return null();
			}
		}
		else{
			HX_STACK_LINE(764)
			::String tmp3 = (HX_HCSTRING("ERROR: Tileset ","\xda","\xb6","\x8b","\xd0") + fromtileset);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(764)
			::String tmp4 = (tmp3 + HX_HCSTRING(" hasn't been loaded or created.","\x3d","\xf4","\xb3","\x81"));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(764)
			Dynamic tmp5 = hx::SourceInfo(HX_HCSTRING("Gfx.hx","\x05","\xa7","\xaa","\x6d"),764,HX_HCSTRING("haxegon.Gfx","\xcb","\xea","\x14","\x3a"),HX_HCSTRING("copytile","\x63","\x05","\xc2","\xe6"));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(764)
			::haxe::Log_obj::trace(tmp4,tmp5);
			HX_STACK_LINE(765)
			return null();
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Gfx_obj,copytile,(void))

Void Gfx_obj::drawtile( Float x,Float y,::String tilesetname,int t){
{
		HX_STACK_FRAME("haxegon.Gfx","drawtile",0xcdf90b35,"haxegon.Gfx.drawtile","haxegon/Gfx.hx",775,0xa6405f94)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(tilesetname,"tilesetname")
		HX_STACK_ARG(t,"t")
		HX_STACK_LINE(776)
		::String tmp = ::haxegon::Gfx_obj::currenttilesetname;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(776)
		::String tmp1 = tilesetname;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(776)
		bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(776)
		if ((tmp2)){
			HX_STACK_LINE(777)
			::String tmp3 = tilesetname;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(777)
			::haxegon::Gfx_obj::changetileset(tmp3);
		}
		HX_STACK_LINE(779)
		bool tmp3 = ::haxegon::Gfx_obj::clearscreeneachframe;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(779)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(779)
		if ((tmp4)){
			HX_STACK_LINE(779)
			bool tmp5 = ::haxegon::Gfx_obj::skiprender;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(779)
			bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(779)
			if ((tmp5)){
				HX_STACK_LINE(779)
				tmp6 = ::haxegon::Gfx_obj::drawingtoscreen;
			}
			else{
				HX_STACK_LINE(779)
				tmp6 = false;
			}
			HX_STACK_LINE(779)
			if ((tmp6)){
				HX_STACK_LINE(779)
				return null();
			}
		}
		HX_STACK_LINE(780)
		int tmp5 = ::haxegon::Gfx_obj::currenttileset;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(780)
		bool tmp6 = (tmp5 == (int)-1);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(780)
		if ((tmp6)){
			HX_STACK_LINE(781)
			HX_STACK_DO_THROW(HX_HCSTRING("ERROR: No tileset currently set. Use Gfx.changetileset(\"tileset name\") to set the current tileset.","\x24","\xf1","\xbb","\x17"));
			HX_STACK_LINE(782)
			return null();
		}
		HX_STACK_LINE(784)
		int tmp7 = t;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(784)
		int tmp8 = ::haxegon::Gfx_obj::numberoftiles();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(784)
		bool tmp9 = (tmp7 >= tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(784)
		if ((tmp9)){
			HX_STACK_LINE(785)
			int tmp10 = t;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(785)
			int tmp11 = ::haxegon::Gfx_obj::numberoftiles();		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(785)
			bool tmp12 = (tmp10 == tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(785)
			if ((tmp12)){
				HX_STACK_LINE(786)
				int tmp13 = t;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(786)
				::String tmp14 = ::Std_obj::string(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(786)
				::String tmp15 = (HX_HCSTRING("ERROR: Tried to draw tile number ","\x80","\xaf","\x70","\x80") + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(786)
				::String tmp16 = (tmp15 + HX_HCSTRING(", but there are only ","\xd9","\x88","\xbb","\xfa"));		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(786)
				int tmp17 = ::haxegon::Gfx_obj::numberoftiles();		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(786)
				::String tmp18 = ::Std_obj::string(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(786)
				::String tmp19 = (tmp16 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(786)
				::String tmp20 = (tmp19 + HX_HCSTRING(" tiles in tileset \"","\xd6","\xc5","\x31","\x7b"));		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(786)
				int tmp21 = ::haxegon::Gfx_obj::currenttileset;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(786)
				::haxegon::util::Tileset tmp22 = ::haxegon::Gfx_obj::tiles->__get(tmp21).StaticCast< ::haxegon::util::Tileset >();		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(786)
				::String tmp23 = tmp22->name;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(786)
				::String tmp24 = (tmp20 + tmp23);		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(786)
				::String tmp25 = (tmp24 + HX_HCSTRING("\". (Because this includes tile number 0, ","\x5e","\x3b","\xb7","\xde"));		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(786)
				int tmp26 = t;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(786)
				::String tmp27 = ::Std_obj::string(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(786)
				::String tmp28 = (tmp25 + tmp27);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(786)
				::String tmp29 = (tmp28 + HX_HCSTRING(" is not a valid tile.)","\x6f","\x3b","\x18","\x05"));		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(786)
				HX_STACK_DO_THROW(tmp29);
				HX_STACK_LINE(787)
				return null();
			}
			else{
				HX_STACK_LINE(789)
				int tmp13 = t;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(789)
				::String tmp14 = ::Std_obj::string(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(789)
				::String tmp15 = (HX_HCSTRING("ERROR: Tried to draw tile number ","\x80","\xaf","\x70","\x80") + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(789)
				::String tmp16 = (tmp15 + HX_HCSTRING(", but there are only ","\xd9","\x88","\xbb","\xfa"));		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(789)
				int tmp17 = ::haxegon::Gfx_obj::numberoftiles();		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(789)
				::String tmp18 = ::Std_obj::string(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(789)
				::String tmp19 = (tmp16 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(789)
				::String tmp20 = (tmp19 + HX_HCSTRING(" tiles in tileset \"","\xd6","\xc5","\x31","\x7b"));		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(789)
				int tmp21 = ::haxegon::Gfx_obj::currenttileset;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(789)
				::haxegon::util::Tileset tmp22 = ::haxegon::Gfx_obj::tiles->__get(tmp21).StaticCast< ::haxegon::util::Tileset >();		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(789)
				::String tmp23 = tmp22->name;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(789)
				::String tmp24 = (tmp20 + tmp23);		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(789)
				::String tmp25 = (tmp24 + HX_HCSTRING("\".","\xcc","\x1d","\x00","\x00"));		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(789)
				HX_STACK_DO_THROW(tmp25);
				HX_STACK_LINE(790)
				return null();
			}
		}
		HX_STACK_LINE(794)
		Float tmp10 = x;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(794)
		Float tmp11 = ::haxegon::Gfx_obj::tilealignx(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(794)
		x = tmp11;
		HX_STACK_LINE(794)
		Float tmp12 = y;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(794)
		Float tmp13 = ::haxegon::Gfx_obj::tilealigny(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(794)
		y = tmp13;
		HX_STACK_LINE(796)
		bool tmp14 = ::haxegon::Gfx_obj::transform;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(796)
		bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(796)
		bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(796)
		bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(796)
		if ((tmp16)){
			HX_STACK_LINE(796)
			bool tmp18 = ::haxegon::Gfx_obj::coltransform;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(796)
			bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(796)
			bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(796)
			tmp17 = !(tmp20);
		}
		else{
			HX_STACK_LINE(796)
			tmp17 = false;
		}
		HX_STACK_LINE(796)
		if ((tmp17)){
			HX_STACK_LINE(797)
			Float tmp18 = x;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(797)
			int tmp19 = ::Std_obj::_int(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(797)
			Float tmp20 = y;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(797)
			int tmp21 = ::Std_obj::_int(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(797)
			::haxegon::Gfx_obj::settpoint(tmp19,tmp21);
			HX_STACK_LINE(798)
			::openfl::display::BitmapData tmp22 = ::haxegon::Gfx_obj::drawto;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(798)
			int tmp23 = ::haxegon::Gfx_obj::currenttileset;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(798)
			::haxegon::util::Tileset tmp24 = ::haxegon::Gfx_obj::tiles->__get(tmp23).StaticCast< ::haxegon::util::Tileset >();		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(798)
			::openfl::display::BitmapData tmp25 = tmp24->tiles->__get(t).StaticCast< ::openfl::display::BitmapData >();		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(798)
			int tmp26 = ::haxegon::Gfx_obj::currenttileset;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(798)
			::haxegon::util::Tileset tmp27 = ::haxegon::Gfx_obj::tiles->__get(tmp26).StaticCast< ::haxegon::util::Tileset >();		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(798)
			::openfl::display::BitmapData tmp28 = tmp27->tiles->__get(t).StaticCast< ::openfl::display::BitmapData >();		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(798)
			::openfl::geom::Rectangle tmp29 = tmp28->rect;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(798)
			::openfl::geom::Point tmp30 = ::haxegon::Gfx_obj::tpoint;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(798)
			tmp22->copyPixels(tmp25,tmp29,tmp30,null(),null(),true);
		}
		else{
			HX_STACK_LINE(800)
			::haxegon::Gfx_obj::tempxalign = (int)0;
			HX_STACK_LINE(800)
			::haxegon::Gfx_obj::tempyalign = (int)0;
			HX_STACK_LINE(802)
			::openfl::geom::Matrix tmp18 = ::haxegon::Gfx_obj::shapematrix;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(802)
			tmp18->identity();
			HX_STACK_LINE(804)
			Float tmp19 = ::haxegon::Gfx_obj::imagexscale;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(804)
			bool tmp20 = (tmp19 != ((Float)1.0));		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(804)
			bool tmp21 = !(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(804)
			bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(804)
			if ((tmp21)){
				HX_STACK_LINE(804)
				Float tmp23 = ::haxegon::Gfx_obj::imageyscale;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(804)
				Float tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(804)
				tmp22 = (tmp24 != ((Float)1.0));
			}
			else{
				HX_STACK_LINE(804)
				tmp22 = true;
			}
			HX_STACK_LINE(804)
			if ((tmp22)){
				HX_STACK_LINE(805)
				Float tmp23 = ::haxegon::Gfx_obj::imagescalexpivot;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(805)
				bool tmp24 = (tmp23 != ((Float)0.0));		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(805)
				if ((tmp24)){
					HX_STACK_LINE(805)
					Float tmp25 = ::haxegon::Gfx_obj::imagescalexpivot;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(805)
					Float tmp26 = ::haxegon::Gfx_obj::tilealignontilex(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(805)
					::haxegon::Gfx_obj::tempxalign = tmp26;
				}
				HX_STACK_LINE(806)
				Float tmp25 = ::haxegon::Gfx_obj::imagescaleypivot;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(806)
				bool tmp26 = (tmp25 != ((Float)0.0));		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(806)
				if ((tmp26)){
					HX_STACK_LINE(806)
					Float tmp27 = ::haxegon::Gfx_obj::imagescaleypivot;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(806)
					Float tmp28 = ::haxegon::Gfx_obj::tilealignontiley(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(806)
					::haxegon::Gfx_obj::tempyalign = tmp28;
				}
				HX_STACK_LINE(807)
				::openfl::geom::Matrix tmp27 = ::haxegon::Gfx_obj::shapematrix;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(807)
				Float tmp28 = ::haxegon::Gfx_obj::tempxalign;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(807)
				Float tmp29 = -(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(807)
				Float tmp30 = ::haxegon::Gfx_obj::tempyalign;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(807)
				Float tmp31 = -(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(807)
				tmp27->translate(tmp29,tmp31);
				HX_STACK_LINE(808)
				::openfl::geom::Matrix tmp32 = ::haxegon::Gfx_obj::shapematrix;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(808)
				Float tmp33 = ::haxegon::Gfx_obj::imagexscale;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(808)
				Float tmp34 = ::haxegon::Gfx_obj::imageyscale;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(808)
				tmp32->scale(tmp33,tmp34);
				HX_STACK_LINE(809)
				::openfl::geom::Matrix tmp35 = ::haxegon::Gfx_obj::shapematrix;		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(809)
				Float tmp36 = ::haxegon::Gfx_obj::tempxalign;		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(809)
				Float tmp37 = ::haxegon::Gfx_obj::tempyalign;		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(809)
				tmp35->translate(tmp36,tmp37);
			}
			HX_STACK_LINE(812)
			Float tmp23 = ::haxegon::Gfx_obj::imagerotate;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(812)
			bool tmp24 = (tmp23 != (int)0);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(812)
			if ((tmp24)){
				HX_STACK_LINE(813)
				Float tmp25 = ::haxegon::Gfx_obj::imagerotatexpivot;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(813)
				bool tmp26 = (tmp25 != ((Float)0.0));		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(813)
				if ((tmp26)){
					HX_STACK_LINE(813)
					Float tmp27 = ::haxegon::Gfx_obj::imagerotatexpivot;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(813)
					Float tmp28 = ::haxegon::Gfx_obj::tilealignontilex(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(813)
					::haxegon::Gfx_obj::tempxalign = tmp28;
				}
				HX_STACK_LINE(814)
				Float tmp27 = ::haxegon::Gfx_obj::imagerotateypivot;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(814)
				bool tmp28 = (tmp27 != ((Float)0.0));		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(814)
				if ((tmp28)){
					HX_STACK_LINE(814)
					Float tmp29 = ::haxegon::Gfx_obj::imagerotateypivot;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(814)
					Float tmp30 = ::haxegon::Gfx_obj::tilealignontiley(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(814)
					::haxegon::Gfx_obj::tempyalign = tmp30;
				}
				HX_STACK_LINE(815)
				::openfl::geom::Matrix tmp29 = ::haxegon::Gfx_obj::shapematrix;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(815)
				Float tmp30 = ::haxegon::Gfx_obj::tempxalign;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(815)
				Float tmp31 = -(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(815)
				Float tmp32 = ::haxegon::Gfx_obj::tempyalign;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(815)
				Float tmp33 = -(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(815)
				tmp29->translate(tmp31,tmp33);
				HX_STACK_LINE(816)
				::openfl::geom::Matrix tmp34 = ::haxegon::Gfx_obj::shapematrix;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(816)
				Float tmp35 = ::haxegon::Gfx_obj::imagerotate;		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(816)
				Float tmp36 = (tmp35 * ((Float)3.1415));		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(816)
				Float tmp37 = (Float(tmp36) / Float((int)180));		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(816)
				tmp34->rotate(tmp37);
				HX_STACK_LINE(817)
				::openfl::geom::Matrix tmp38 = ::haxegon::Gfx_obj::shapematrix;		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(817)
				Float tmp39 = ::haxegon::Gfx_obj::tempxalign;		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(817)
				Float tmp40 = ::haxegon::Gfx_obj::tempyalign;		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(817)
				tmp38->translate(tmp39,tmp40);
			}
			HX_STACK_LINE(820)
			::openfl::geom::Matrix tmp25 = ::haxegon::Gfx_obj::shapematrix;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(820)
			Float tmp26 = x;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(820)
			Float tmp27 = y;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(820)
			tmp25->translate(tmp26,tmp27);
			HX_STACK_LINE(821)
			bool tmp28 = ::haxegon::Gfx_obj::coltransform;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(821)
			if ((tmp28)){
				HX_STACK_LINE(822)
				Float tmp29 = ::haxegon::Gfx_obj::imagealphamult;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(822)
				::openfl::geom::ColorTransform tmp30 = ::haxegon::Gfx_obj::alphact;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(822)
				tmp30->alphaMultiplier = tmp29;
				HX_STACK_LINE(823)
				Float tmp31 = ::haxegon::Gfx_obj::imageredmult;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(823)
				::openfl::geom::ColorTransform tmp32 = ::haxegon::Gfx_obj::alphact;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(823)
				tmp32->redMultiplier = tmp31;
				HX_STACK_LINE(824)
				Float tmp33 = ::haxegon::Gfx_obj::imagegreenmult;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(824)
				::openfl::geom::ColorTransform tmp34 = ::haxegon::Gfx_obj::alphact;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(824)
				tmp34->greenMultiplier = tmp33;
				HX_STACK_LINE(825)
				Float tmp35 = ::haxegon::Gfx_obj::imagebluemult;		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(825)
				::openfl::geom::ColorTransform tmp36 = ::haxegon::Gfx_obj::alphact;		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(825)
				tmp36->blueMultiplier = tmp35;
				HX_STACK_LINE(826)
				Float tmp37 = ::haxegon::Gfx_obj::imageredadd;		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(826)
				::openfl::geom::ColorTransform tmp38 = ::haxegon::Gfx_obj::alphact;		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(826)
				tmp38->redOffset = tmp37;
				HX_STACK_LINE(827)
				Float tmp39 = ::haxegon::Gfx_obj::imagegreenadd;		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(827)
				::openfl::geom::ColorTransform tmp40 = ::haxegon::Gfx_obj::alphact;		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(827)
				tmp40->greenOffset = tmp39;
				HX_STACK_LINE(828)
				Float tmp41 = ::haxegon::Gfx_obj::imageblueadd;		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(828)
				::openfl::geom::ColorTransform tmp42 = ::haxegon::Gfx_obj::alphact;		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(828)
				tmp42->blueOffset = tmp41;
				HX_STACK_LINE(829)
				::openfl::display::BitmapData tmp43 = ::haxegon::Gfx_obj::drawto;		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(829)
				int tmp44 = ::haxegon::Gfx_obj::currenttileset;		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(829)
				::haxegon::util::Tileset tmp45 = ::haxegon::Gfx_obj::tiles->__get(tmp44).StaticCast< ::haxegon::util::Tileset >();		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(829)
				::openfl::display::BitmapData tmp46 = tmp45->tiles->__get(t).StaticCast< ::openfl::display::BitmapData >();		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(829)
				::openfl::geom::Matrix tmp47 = ::haxegon::Gfx_obj::shapematrix;		HX_STACK_VAR(tmp47,"tmp47");
				HX_STACK_LINE(829)
				::openfl::geom::ColorTransform tmp48 = ::haxegon::Gfx_obj::alphact;		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(829)
				tmp43->draw(tmp46,tmp47,tmp48,null(),null(),null());
			}
			else{
				HX_STACK_LINE(831)
				::openfl::display::BitmapData tmp29 = ::haxegon::Gfx_obj::drawto;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(831)
				int tmp30 = ::haxegon::Gfx_obj::currenttileset;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(831)
				::haxegon::util::Tileset tmp31 = ::haxegon::Gfx_obj::tiles->__get(tmp30).StaticCast< ::haxegon::util::Tileset >();		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(831)
				::openfl::display::BitmapData tmp32 = tmp31->tiles->__get(t).StaticCast< ::openfl::display::BitmapData >();		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(831)
				::openfl::geom::Matrix tmp33 = ::haxegon::Gfx_obj::shapematrix;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(831)
				tmp29->draw(tmp32,tmp33,null(),null(),null(),null());
			}
			HX_STACK_LINE(833)
			::openfl::geom::Matrix tmp29 = ::haxegon::Gfx_obj::shapematrix;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(833)
			tmp29->identity();
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Gfx_obj,drawtile,(void))

int Gfx_obj::currentframe( ){
	HX_STACK_FRAME("haxegon.Gfx","currentframe",0x1a0a6cd7,"haxegon.Gfx.currentframe","haxegon/Gfx.hx",838,0xa6405f94)
	HX_STACK_LINE(839)
	int tmp = ::haxegon::Gfx_obj::currenttileset;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(839)
	::haxegon::util::Tileset tmp1 = ::haxegon::Gfx_obj::tiles->__get(tmp).StaticCast< ::haxegon::util::Tileset >();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(839)
	int tmp2 = tmp1->currentframe;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(839)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Gfx_obj,currentframe,return )

Void Gfx_obj::stopanimation( ::String animationname){
{
		HX_STACK_FRAME("haxegon.Gfx","stopanimation",0xc03701df,"haxegon.Gfx.stopanimation","haxegon/Gfx.hx",843,0xa6405f94)
		HX_STACK_ARG(animationname,"animationname")
		HX_STACK_LINE(844)
		::haxe::ds::StringMap tmp = ::haxegon::Gfx_obj::animationindex;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(844)
		::String tmp1 = animationname;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(844)
		Dynamic tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(844)
		::haxegon::Gfx_obj::animationnum = tmp2;
		HX_STACK_LINE(845)
		int tmp3 = ::haxegon::Gfx_obj::animationnum;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(845)
		::haxegon::util::AnimationContainer tmp4 = ::haxegon::Gfx_obj::animations->__get(tmp3).StaticCast< ::haxegon::util::AnimationContainer >();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(845)
		tmp4->reset();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Gfx_obj,stopanimation,(void))

Void Gfx_obj::defineanimation( ::String animationname,::String tileset,int startframe,int endframe,int delayperframe){
{
		HX_STACK_FRAME("haxegon.Gfx","defineanimation",0x6d1267c6,"haxegon.Gfx.defineanimation","haxegon/Gfx.hx",848,0xa6405f94)
		HX_STACK_ARG(animationname,"animationname")
		HX_STACK_ARG(tileset,"tileset")
		HX_STACK_ARG(startframe,"startframe")
		HX_STACK_ARG(endframe,"endframe")
		HX_STACK_ARG(delayperframe,"delayperframe")
		HX_STACK_LINE(849)
		bool tmp = (delayperframe < (int)1);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(849)
		if ((tmp)){
			HX_STACK_LINE(850)
			HX_STACK_DO_THROW(HX_HCSTRING("ERROR: Cannot have a delay per frame of less than 1.","\xa3","\xad","\xbc","\xa9"));
			HX_STACK_LINE(851)
			return null();
		}
		HX_STACK_LINE(853)
		::haxe::ds::StringMap tmp1 = ::haxegon::Gfx_obj::animationindex;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(853)
		::String tmp2 = animationname;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(853)
		int tmp3 = ::haxegon::Gfx_obj::animations->length;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(853)
		tmp1->set(tmp2,tmp3);
		HX_STACK_LINE(854)
		::haxegon::util::AnimationContainer tmp4 = ::haxegon::util::AnimationContainer_obj::__new(animationname,tileset,startframe,endframe,delayperframe);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(854)
		::haxegon::Gfx_obj::animations->push(tmp4);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(Gfx_obj,defineanimation,(void))

Void Gfx_obj::drawanimation( Float x,Float y,::String animationname){
{
		HX_STACK_FRAME("haxegon.Gfx","drawanimation",0x5c50359d,"haxegon.Gfx.drawanimation","haxegon/Gfx.hx",857,0xa6405f94)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(animationname,"animationname")
		HX_STACK_LINE(858)
		bool tmp = ::haxegon::Gfx_obj::clearscreeneachframe;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(858)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(858)
		if ((tmp1)){
			HX_STACK_LINE(858)
			bool tmp2 = ::haxegon::Gfx_obj::skiprender;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(858)
			bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(858)
			if ((tmp2)){
				HX_STACK_LINE(858)
				tmp3 = ::haxegon::Gfx_obj::drawingtoscreen;
			}
			else{
				HX_STACK_LINE(858)
				tmp3 = false;
			}
			HX_STACK_LINE(858)
			if ((tmp3)){
				HX_STACK_LINE(858)
				return null();
			}
		}
		HX_STACK_LINE(859)
		::String tmp2 = ::haxegon::Gfx_obj::currenttilesetname;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(859)
		::haxegon::Gfx_obj::oldtileset = tmp2;
		HX_STACK_LINE(860)
		::haxe::ds::StringMap tmp3 = ::haxegon::Gfx_obj::animationindex;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(860)
		::String tmp4 = animationname;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(860)
		bool tmp5 = tmp3->exists(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(860)
		bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(860)
		if ((tmp6)){
			HX_STACK_LINE(861)
			::String tmp7 = (HX_HCSTRING("ERROR: No animated named \"","\x8f","\x14","\xa8","\x83") + animationname);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(861)
			::String tmp8 = (tmp7 + HX_HCSTRING("\" is defined. Define one first using Gfx.defineanimation!","\x15","\x20","\x0b","\x58"));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(861)
			HX_STACK_DO_THROW(tmp8);
			HX_STACK_LINE(862)
			return null();
		}
		HX_STACK_LINE(864)
		::haxe::ds::StringMap tmp7 = ::haxegon::Gfx_obj::animationindex;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(864)
		::String tmp8 = animationname;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(864)
		Dynamic tmp9 = tmp7->get(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(864)
		::haxegon::Gfx_obj::animationnum = tmp9;
		HX_STACK_LINE(865)
		int tmp10 = ::haxegon::Gfx_obj::animationnum;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(865)
		::haxegon::util::AnimationContainer tmp11 = ::haxegon::Gfx_obj::animations->__get(tmp10).StaticCast< ::haxegon::util::AnimationContainer >();		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(865)
		::String tmp12 = tmp11->tileset;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(865)
		::haxegon::Gfx_obj::changetileset(tmp12);
		HX_STACK_LINE(867)
		int tmp13 = ::haxegon::Gfx_obj::animationnum;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(867)
		::haxegon::util::AnimationContainer tmp14 = ::haxegon::Gfx_obj::animations->__get(tmp13).StaticCast< ::haxegon::util::AnimationContainer >();		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(867)
		tmp14->update();
		HX_STACK_LINE(868)
		int tmp15 = ::haxegon::Gfx_obj::animationnum;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(868)
		::haxegon::util::AnimationContainer tmp16 = ::haxegon::Gfx_obj::animations->__get(tmp15).StaticCast< ::haxegon::util::AnimationContainer >();		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(868)
		::haxegon::Gfx_obj::tempframe = tmp16->currentframe;
		HX_STACK_LINE(876)
		::String tmp17 = ::haxegon::Gfx_obj::oldtileset;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(876)
		::haxegon::Gfx_obj::changetileset(tmp17);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Gfx_obj,drawanimation,(void))

Float Gfx_obj::tilealignx( Float x){
	HX_STACK_FRAME("haxegon.Gfx","tilealignx",0x48ff8084,"haxegon.Gfx.tilealignx","haxegon/Gfx.hx",879,0xa6405f94)
	HX_STACK_ARG(x,"x")
	HX_STACK_LINE(880)
	Float tmp = x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(880)
	int tmp1 = ::haxegon::Gfx_obj::CENTER;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(880)
	bool tmp2 = (tmp == tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(880)
	if ((tmp2)){
		HX_STACK_LINE(880)
		int tmp3 = ::haxegon::Gfx_obj::screenwidthmid;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(880)
		int tmp4 = ::haxegon::Gfx_obj::currenttileset;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(880)
		::haxegon::util::Tileset tmp5 = ::haxegon::Gfx_obj::tiles->__get(tmp4).StaticCast< ::haxegon::util::Tileset >();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(880)
		int tmp6 = tmp5->width;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(880)
		Float tmp7 = (Float(tmp6) / Float((int)2));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(880)
		int tmp8 = ::Std_obj::_int(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(880)
		int tmp9 = (tmp3 - tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(880)
		return tmp9;
	}
	HX_STACK_LINE(881)
	Float tmp3 = x;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(881)
	int tmp4 = ::haxegon::Gfx_obj::LEFT;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(881)
	bool tmp5 = (tmp3 == tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(881)
	bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(881)
	bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(881)
	if ((tmp6)){
		HX_STACK_LINE(881)
		Float tmp8 = x;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(881)
		int tmp9 = ::haxegon::Gfx_obj::TOP;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(881)
		int tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(881)
		tmp7 = (tmp8 == tmp10);
	}
	else{
		HX_STACK_LINE(881)
		tmp7 = true;
	}
	HX_STACK_LINE(881)
	if ((tmp7)){
		HX_STACK_LINE(881)
		return (int)0;
	}
	HX_STACK_LINE(882)
	Float tmp8 = x;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(882)
	int tmp9 = ::haxegon::Gfx_obj::RIGHT;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(882)
	bool tmp10 = (tmp8 == tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(882)
	bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(882)
	bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(882)
	if ((tmp11)){
		HX_STACK_LINE(882)
		Float tmp13 = x;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(882)
		int tmp14 = ::haxegon::Gfx_obj::BOTTOM;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(882)
		int tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(882)
		tmp12 = (tmp13 == tmp15);
	}
	else{
		HX_STACK_LINE(882)
		tmp12 = true;
	}
	HX_STACK_LINE(882)
	if ((tmp12)){
		HX_STACK_LINE(882)
		int tmp13 = ::haxegon::Gfx_obj::currenttileset;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(882)
		::haxegon::util::Tileset tmp14 = ::haxegon::Gfx_obj::tiles->__get(tmp13).StaticCast< ::haxegon::util::Tileset >();		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(882)
		int tmp15 = tmp14->width;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(882)
		return tmp15;
	}
	HX_STACK_LINE(883)
	Float tmp13 = x;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(883)
	return tmp13;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Gfx_obj,tilealignx,return )

Float Gfx_obj::tilealigny( Float y){
	HX_STACK_FRAME("haxegon.Gfx","tilealigny",0x48ff8085,"haxegon.Gfx.tilealigny","haxegon/Gfx.hx",886,0xa6405f94)
	HX_STACK_ARG(y,"y")
	HX_STACK_LINE(887)
	Float tmp = y;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(887)
	int tmp1 = ::haxegon::Gfx_obj::CENTER;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(887)
	bool tmp2 = (tmp == tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(887)
	if ((tmp2)){
		HX_STACK_LINE(887)
		int tmp3 = ::haxegon::Gfx_obj::screenheightmid;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(887)
		int tmp4 = ::haxegon::Gfx_obj::currenttileset;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(887)
		::haxegon::util::Tileset tmp5 = ::haxegon::Gfx_obj::tiles->__get(tmp4).StaticCast< ::haxegon::util::Tileset >();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(887)
		int tmp6 = tmp5->height;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(887)
		Float tmp7 = (Float(tmp6) / Float((int)2));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(887)
		int tmp8 = ::Std_obj::_int(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(887)
		int tmp9 = (tmp3 - tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(887)
		return tmp9;
	}
	HX_STACK_LINE(888)
	Float tmp3 = y;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(888)
	int tmp4 = ::haxegon::Gfx_obj::LEFT;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(888)
	bool tmp5 = (tmp3 == tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(888)
	bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(888)
	bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(888)
	if ((tmp6)){
		HX_STACK_LINE(888)
		Float tmp8 = y;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(888)
		int tmp9 = ::haxegon::Gfx_obj::TOP;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(888)
		int tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(888)
		tmp7 = (tmp8 == tmp10);
	}
	else{
		HX_STACK_LINE(888)
		tmp7 = true;
	}
	HX_STACK_LINE(888)
	if ((tmp7)){
		HX_STACK_LINE(888)
		return (int)0;
	}
	HX_STACK_LINE(889)
	Float tmp8 = y;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(889)
	int tmp9 = ::haxegon::Gfx_obj::RIGHT;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(889)
	bool tmp10 = (tmp8 == tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(889)
	bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(889)
	bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(889)
	if ((tmp11)){
		HX_STACK_LINE(889)
		Float tmp13 = y;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(889)
		int tmp14 = ::haxegon::Gfx_obj::BOTTOM;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(889)
		int tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(889)
		tmp12 = (tmp13 == tmp15);
	}
	else{
		HX_STACK_LINE(889)
		tmp12 = true;
	}
	HX_STACK_LINE(889)
	if ((tmp12)){
		HX_STACK_LINE(889)
		int tmp13 = ::haxegon::Gfx_obj::currenttileset;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(889)
		::haxegon::util::Tileset tmp14 = ::haxegon::Gfx_obj::tiles->__get(tmp13).StaticCast< ::haxegon::util::Tileset >();		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(889)
		int tmp15 = tmp14->height;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(889)
		return tmp15;
	}
	HX_STACK_LINE(890)
	Float tmp13 = y;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(890)
	return tmp13;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Gfx_obj,tilealigny,return )

Float Gfx_obj::tilealignontilex( Float x){
	HX_STACK_FRAME("haxegon.Gfx","tilealignontilex",0x53e63d17,"haxegon.Gfx.tilealignontilex","haxegon/Gfx.hx",893,0xa6405f94)
	HX_STACK_ARG(x,"x")
	HX_STACK_LINE(894)
	Float tmp = x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(894)
	int tmp1 = ::haxegon::Gfx_obj::CENTER;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(894)
	bool tmp2 = (tmp == tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(894)
	if ((tmp2)){
		HX_STACK_LINE(894)
		int tmp3 = ::haxegon::Gfx_obj::currenttileset;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(894)
		::haxegon::util::Tileset tmp4 = ::haxegon::Gfx_obj::tiles->__get(tmp3).StaticCast< ::haxegon::util::Tileset >();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(894)
		int tmp5 = tmp4->width;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(894)
		Float tmp6 = (Float(tmp5) / Float((int)2));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(894)
		int tmp7 = ::Std_obj::_int(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(894)
		return tmp7;
	}
	HX_STACK_LINE(895)
	Float tmp3 = x;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(895)
	int tmp4 = ::haxegon::Gfx_obj::LEFT;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(895)
	bool tmp5 = (tmp3 == tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(895)
	bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(895)
	bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(895)
	if ((tmp6)){
		HX_STACK_LINE(895)
		Float tmp8 = x;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(895)
		int tmp9 = ::haxegon::Gfx_obj::TOP;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(895)
		int tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(895)
		tmp7 = (tmp8 == tmp10);
	}
	else{
		HX_STACK_LINE(895)
		tmp7 = true;
	}
	HX_STACK_LINE(895)
	if ((tmp7)){
		HX_STACK_LINE(895)
		return (int)0;
	}
	HX_STACK_LINE(896)
	Float tmp8 = x;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(896)
	int tmp9 = ::haxegon::Gfx_obj::RIGHT;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(896)
	bool tmp10 = (tmp8 == tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(896)
	bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(896)
	bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(896)
	if ((tmp11)){
		HX_STACK_LINE(896)
		Float tmp13 = x;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(896)
		int tmp14 = ::haxegon::Gfx_obj::BOTTOM;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(896)
		int tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(896)
		tmp12 = (tmp13 == tmp15);
	}
	else{
		HX_STACK_LINE(896)
		tmp12 = true;
	}
	HX_STACK_LINE(896)
	if ((tmp12)){
		HX_STACK_LINE(896)
		int tmp13 = ::haxegon::Gfx_obj::currenttileset;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(896)
		::haxegon::util::Tileset tmp14 = ::haxegon::Gfx_obj::tiles->__get(tmp13).StaticCast< ::haxegon::util::Tileset >();		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(896)
		int tmp15 = tmp14->width;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(896)
		return tmp15;
	}
	HX_STACK_LINE(897)
	Float tmp13 = x;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(897)
	return tmp13;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Gfx_obj,tilealignontilex,return )

Float Gfx_obj::tilealignontiley( Float y){
	HX_STACK_FRAME("haxegon.Gfx","tilealignontiley",0x53e63d18,"haxegon.Gfx.tilealignontiley","haxegon/Gfx.hx",900,0xa6405f94)
	HX_STACK_ARG(y,"y")
	HX_STACK_LINE(901)
	Float tmp = y;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(901)
	int tmp1 = ::haxegon::Gfx_obj::CENTER;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(901)
	bool tmp2 = (tmp == tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(901)
	if ((tmp2)){
		HX_STACK_LINE(901)
		int tmp3 = ::haxegon::Gfx_obj::currenttileset;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(901)
		::haxegon::util::Tileset tmp4 = ::haxegon::Gfx_obj::tiles->__get(tmp3).StaticCast< ::haxegon::util::Tileset >();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(901)
		int tmp5 = tmp4->height;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(901)
		Float tmp6 = (Float(tmp5) / Float((int)2));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(901)
		int tmp7 = ::Std_obj::_int(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(901)
		return tmp7;
	}
	HX_STACK_LINE(902)
	Float tmp3 = y;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(902)
	int tmp4 = ::haxegon::Gfx_obj::LEFT;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(902)
	bool tmp5 = (tmp3 == tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(902)
	bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(902)
	bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(902)
	if ((tmp6)){
		HX_STACK_LINE(902)
		Float tmp8 = y;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(902)
		int tmp9 = ::haxegon::Gfx_obj::TOP;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(902)
		int tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(902)
		tmp7 = (tmp8 == tmp10);
	}
	else{
		HX_STACK_LINE(902)
		tmp7 = true;
	}
	HX_STACK_LINE(902)
	if ((tmp7)){
		HX_STACK_LINE(902)
		return (int)0;
	}
	HX_STACK_LINE(903)
	Float tmp8 = y;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(903)
	int tmp9 = ::haxegon::Gfx_obj::RIGHT;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(903)
	bool tmp10 = (tmp8 == tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(903)
	bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(903)
	bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(903)
	if ((tmp11)){
		HX_STACK_LINE(903)
		Float tmp13 = y;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(903)
		int tmp14 = ::haxegon::Gfx_obj::BOTTOM;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(903)
		int tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(903)
		tmp12 = (tmp13 == tmp15);
	}
	else{
		HX_STACK_LINE(903)
		tmp12 = true;
	}
	HX_STACK_LINE(903)
	if ((tmp12)){
		HX_STACK_LINE(903)
		int tmp13 = ::haxegon::Gfx_obj::currenttileset;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(903)
		::haxegon::util::Tileset tmp14 = ::haxegon::Gfx_obj::tiles->__get(tmp13).StaticCast< ::haxegon::util::Tileset >();		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(903)
		int tmp15 = tmp14->height;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(903)
		return tmp15;
	}
	HX_STACK_LINE(904)
	Float tmp13 = y;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(904)
	return tmp13;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Gfx_obj,tilealignontiley,return )

Void Gfx_obj::drawline( Float _x1,Float _y1,Float _x2,Float _y2,int col,hx::Null< Float >  __o_alpha){
Float alpha = __o_alpha.Default(((Float)1.0));
	HX_STACK_FRAME("haxegon.Gfx","drawline",0xc8af57fb,"haxegon.Gfx.drawline","haxegon/Gfx.hx",1016,0xa6405f94)
	HX_STACK_ARG(_x1,"_x1")
	HX_STACK_ARG(_y1,"_y1")
	HX_STACK_ARG(_x2,"_x2")
	HX_STACK_ARG(_y2,"_y2")
	HX_STACK_ARG(col,"col")
	HX_STACK_ARG(alpha,"alpha")
{
		HX_STACK_LINE(1017)
		bool tmp = ::haxegon::Gfx_obj::clearscreeneachframe;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1017)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1017)
		if ((tmp1)){
			HX_STACK_LINE(1017)
			bool tmp2 = ::haxegon::Gfx_obj::skiprender;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1017)
			bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1017)
			if ((tmp2)){
				HX_STACK_LINE(1017)
				tmp3 = ::haxegon::Gfx_obj::drawingtoscreen;
			}
			else{
				HX_STACK_LINE(1017)
				tmp3 = false;
			}
			HX_STACK_LINE(1017)
			if ((tmp3)){
				HX_STACK_LINE(1017)
				return null();
			}
		}
		HX_STACK_LINE(1036)
		::openfl::display::Shape tmp2 = ::haxegon::Gfx_obj::tempshape;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1036)
		::openfl::display::Graphics tmp3 = tmp2->get_graphics();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1036)
		tmp3->clear();
		HX_STACK_LINE(1037)
		::openfl::display::Shape tmp4 = ::haxegon::Gfx_obj::tempshape;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1037)
		::openfl::display::Graphics tmp5 = tmp4->get_graphics();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1037)
		Float tmp6 = ::haxegon::Gfx_obj::_linethickness;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1037)
		int tmp7 = col;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1037)
		Float tmp8 = alpha;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1037)
		tmp5->lineStyle(tmp6,tmp7,tmp8,null(),null(),null(),null(),null());
		HX_STACK_LINE(1038)
		::openfl::display::Shape tmp9 = ::haxegon::Gfx_obj::tempshape;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1038)
		::openfl::display::Graphics tmp10 = tmp9->get_graphics();		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1038)
		Float tmp11 = _x1;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(1038)
		Float tmp12 = _y1;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(1038)
		tmp10->moveTo(tmp11,tmp12);
		HX_STACK_LINE(1039)
		::openfl::display::Shape tmp13 = ::haxegon::Gfx_obj::tempshape;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(1039)
		::openfl::display::Graphics tmp14 = tmp13->get_graphics();		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(1039)
		Float tmp15 = _x2;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(1039)
		Float tmp16 = _y2;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(1039)
		tmp14->lineTo(tmp15,tmp16);
		HX_STACK_LINE(1040)
		::openfl::geom::Matrix tmp17 = ::haxegon::Gfx_obj::shapematrix;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(1040)
		tmp17->identity();
		HX_STACK_LINE(1041)
		::openfl::display::BitmapData tmp18 = ::haxegon::Gfx_obj::drawto;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(1041)
		::openfl::display::Shape tmp19 = ::haxegon::Gfx_obj::tempshape;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(1041)
		::openfl::geom::Matrix tmp20 = ::haxegon::Gfx_obj::shapematrix;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(1041)
		tmp18->draw(tmp19,tmp20,null(),null(),null(),null());
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(Gfx_obj,drawline,(void))

Void Gfx_obj::drawhexagon( Float x,Float y,Float radius,Float angle,int col,hx::Null< Float >  __o_alpha){
Float alpha = __o_alpha.Default(((Float)1.0));
	HX_STACK_FRAME("haxegon.Gfx","drawhexagon",0x3611c639,"haxegon.Gfx.drawhexagon","haxegon/Gfx.hx",1045,0xa6405f94)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(radius,"radius")
	HX_STACK_ARG(angle,"angle")
	HX_STACK_ARG(col,"col")
	HX_STACK_ARG(alpha,"alpha")
{
		HX_STACK_LINE(1047)
		bool tmp = ::haxegon::Gfx_obj::clearscreeneachframe;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1047)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1047)
		if ((tmp1)){
			HX_STACK_LINE(1047)
			bool tmp2 = ::haxegon::Gfx_obj::skiprender;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1047)
			bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1047)
			if ((tmp2)){
				HX_STACK_LINE(1047)
				tmp3 = ::haxegon::Gfx_obj::drawingtoscreen;
			}
			else{
				HX_STACK_LINE(1047)
				tmp3 = false;
			}
			HX_STACK_LINE(1047)
			if ((tmp3)){
				HX_STACK_LINE(1047)
				return null();
			}
		}
		HX_STACK_LINE(1061)
		::openfl::display::Shape tmp2 = ::haxegon::Gfx_obj::tempshape;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1061)
		::openfl::display::Graphics tmp3 = tmp2->get_graphics();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1061)
		tmp3->clear();
		HX_STACK_LINE(1062)
		::openfl::display::Shape tmp4 = ::haxegon::Gfx_obj::tempshape;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1062)
		::openfl::display::Graphics tmp5 = tmp4->get_graphics();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1062)
		Float tmp6 = ::haxegon::Gfx_obj::_linethickness;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1062)
		int tmp7 = col;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1062)
		Float tmp8 = alpha;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1062)
		tmp5->lineStyle(tmp6,tmp7,tmp8,null(),null(),null(),null(),null());
		HX_STACK_LINE(1064)
		Float tmp9 = ::Math_obj::PI;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1064)
		Float tmp10 = (tmp9 * (int)2);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1064)
		Float tmp11 = (Float(tmp10) / Float((int)6));		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(1064)
		::haxegon::Gfx_obj::temprotate = tmp11;
		HX_STACK_LINE(1066)
		Float tmp12 = angle;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(1066)
		Float tmp13 = ::Math_obj::cos(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(1066)
		Float tmp14 = radius;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(1066)
		Float tmp15 = (tmp13 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(1066)
		::haxegon::Gfx_obj::tx = tmp15;
		HX_STACK_LINE(1067)
		Float tmp16 = angle;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(1067)
		Float tmp17 = ::Math_obj::sin(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(1067)
		Float tmp18 = radius;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(1067)
		Float tmp19 = (tmp17 * tmp18);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(1067)
		::haxegon::Gfx_obj::ty = tmp19;
		HX_STACK_LINE(1069)
		::openfl::display::Shape tmp20 = ::haxegon::Gfx_obj::tempshape;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(1069)
		::openfl::display::Graphics tmp21 = tmp20->get_graphics();		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(1069)
		Float tmp22 = ::haxegon::Gfx_obj::tx;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(1069)
		Float tmp23 = ::haxegon::Gfx_obj::ty;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(1069)
		tmp21->moveTo(tmp22,tmp23);
		HX_STACK_LINE(1070)
		{
			HX_STACK_LINE(1070)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1070)
			while((true)){
				HX_STACK_LINE(1070)
				bool tmp24 = (_g < (int)7);		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(1070)
				bool tmp25 = !(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(1070)
				if ((tmp25)){
					HX_STACK_LINE(1070)
					break;
				}
				HX_STACK_LINE(1070)
				int tmp26 = (_g)++;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(1070)
				int i = tmp26;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(1071)
				Float tmp27 = angle;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(1071)
				Float tmp28 = ::haxegon::Gfx_obj::temprotate;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(1071)
				int tmp29 = i;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(1071)
				Float tmp30 = (tmp28 * tmp29);		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(1071)
				Float tmp31 = (tmp27 + tmp30);		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(1071)
				Float tmp32 = ::Math_obj::cos(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(1071)
				Float tmp33 = radius;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(1071)
				Float tmp34 = (tmp32 * tmp33);		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(1071)
				::haxegon::Gfx_obj::tx = tmp34;
				HX_STACK_LINE(1072)
				Float tmp35 = angle;		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(1072)
				Float tmp36 = ::haxegon::Gfx_obj::temprotate;		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(1072)
				int tmp37 = i;		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(1072)
				Float tmp38 = (tmp36 * tmp37);		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(1072)
				Float tmp39 = (tmp35 + tmp38);		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(1072)
				Float tmp40 = ::Math_obj::sin(tmp39);		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(1072)
				Float tmp41 = radius;		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(1072)
				Float tmp42 = (tmp40 * tmp41);		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(1072)
				::haxegon::Gfx_obj::ty = tmp42;
				HX_STACK_LINE(1074)
				::openfl::display::Shape tmp43 = ::haxegon::Gfx_obj::tempshape;		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(1074)
				::openfl::display::Graphics tmp44 = tmp43->get_graphics();		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(1074)
				Float tmp45 = ::haxegon::Gfx_obj::tx;		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(1074)
				Float tmp46 = ::haxegon::Gfx_obj::ty;		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(1074)
				tmp44->lineTo(tmp45,tmp46);
			}
		}
		HX_STACK_LINE(1077)
		::openfl::geom::Matrix tmp24 = ::haxegon::Gfx_obj::shapematrix;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(1077)
		tmp24->identity();
		HX_STACK_LINE(1078)
		::openfl::geom::Matrix tmp25 = ::haxegon::Gfx_obj::shapematrix;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(1078)
		Float tmp26 = x;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(1078)
		Float tmp27 = y;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(1078)
		tmp25->translate(tmp26,tmp27);
		HX_STACK_LINE(1079)
		::openfl::display::BitmapData tmp28 = ::haxegon::Gfx_obj::drawto;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(1079)
		::openfl::display::Shape tmp29 = ::haxegon::Gfx_obj::tempshape;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(1079)
		::openfl::geom::Matrix tmp30 = ::haxegon::Gfx_obj::shapematrix;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(1079)
		tmp28->draw(tmp29,tmp30,null(),null(),null(),null());
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(Gfx_obj,drawhexagon,(void))

Void Gfx_obj::fillhexagon( Float x,Float y,Float radius,Float angle,int col,hx::Null< Float >  __o_alpha){
Float alpha = __o_alpha.Default(((Float)1.0));
	HX_STACK_FRAME("haxegon.Gfx","fillhexagon",0x1065019a,"haxegon.Gfx.fillhexagon","haxegon/Gfx.hx",1083,0xa6405f94)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(radius,"radius")
	HX_STACK_ARG(angle,"angle")
	HX_STACK_ARG(col,"col")
	HX_STACK_ARG(alpha,"alpha")
{
		HX_STACK_LINE(1084)
		bool tmp = ::haxegon::Gfx_obj::clearscreeneachframe;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1084)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1084)
		if ((tmp1)){
			HX_STACK_LINE(1084)
			bool tmp2 = ::haxegon::Gfx_obj::skiprender;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1084)
			bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1084)
			if ((tmp2)){
				HX_STACK_LINE(1084)
				tmp3 = ::haxegon::Gfx_obj::drawingtoscreen;
			}
			else{
				HX_STACK_LINE(1084)
				tmp3 = false;
			}
			HX_STACK_LINE(1084)
			if ((tmp3)){
				HX_STACK_LINE(1084)
				return null();
			}
		}
		HX_STACK_LINE(1100)
		::openfl::display::Shape tmp2 = ::haxegon::Gfx_obj::tempshape;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1100)
		::openfl::display::Graphics tmp3 = tmp2->get_graphics();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1100)
		tmp3->clear();
		HX_STACK_LINE(1101)
		Float tmp4 = ::Math_obj::PI;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1101)
		Float tmp5 = (tmp4 * (int)2);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1101)
		Float tmp6 = (Float(tmp5) / Float((int)6));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1101)
		::haxegon::Gfx_obj::temprotate = tmp6;
		HX_STACK_LINE(1103)
		Float tmp7 = angle;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1103)
		Float tmp8 = ::Math_obj::cos(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1103)
		Float tmp9 = radius;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1103)
		Float tmp10 = (tmp8 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1103)
		::haxegon::Gfx_obj::tx = tmp10;
		HX_STACK_LINE(1104)
		Float tmp11 = angle;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(1104)
		Float tmp12 = ::Math_obj::sin(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(1104)
		Float tmp13 = radius;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(1104)
		Float tmp14 = (tmp12 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(1104)
		::haxegon::Gfx_obj::ty = tmp14;
		HX_STACK_LINE(1106)
		::openfl::display::Shape tmp15 = ::haxegon::Gfx_obj::tempshape;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(1106)
		::openfl::display::Graphics tmp16 = tmp15->get_graphics();		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(1106)
		Float tmp17 = ::haxegon::Gfx_obj::tx;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(1106)
		Float tmp18 = ::haxegon::Gfx_obj::ty;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(1106)
		tmp16->moveTo(tmp17,tmp18);
		HX_STACK_LINE(1107)
		::openfl::display::Shape tmp19 = ::haxegon::Gfx_obj::tempshape;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(1107)
		::openfl::display::Graphics tmp20 = tmp19->get_graphics();		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(1107)
		int tmp21 = col;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(1107)
		Float tmp22 = alpha;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(1107)
		tmp20->beginFill(tmp21,tmp22);
		HX_STACK_LINE(1108)
		{
			HX_STACK_LINE(1108)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1108)
			while((true)){
				HX_STACK_LINE(1108)
				bool tmp23 = (_g < (int)7);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(1108)
				bool tmp24 = !(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(1108)
				if ((tmp24)){
					HX_STACK_LINE(1108)
					break;
				}
				HX_STACK_LINE(1108)
				int tmp25 = (_g)++;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(1108)
				int i = tmp25;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(1109)
				Float tmp26 = angle;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(1109)
				Float tmp27 = ::haxegon::Gfx_obj::temprotate;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(1109)
				int tmp28 = i;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(1109)
				Float tmp29 = (tmp27 * tmp28);		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(1109)
				Float tmp30 = (tmp26 + tmp29);		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(1109)
				Float tmp31 = ::Math_obj::cos(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(1109)
				Float tmp32 = radius;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(1109)
				Float tmp33 = (tmp31 * tmp32);		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(1109)
				::haxegon::Gfx_obj::tx = tmp33;
				HX_STACK_LINE(1110)
				Float tmp34 = angle;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(1110)
				Float tmp35 = ::haxegon::Gfx_obj::temprotate;		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(1110)
				int tmp36 = i;		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(1110)
				Float tmp37 = (tmp35 * tmp36);		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(1110)
				Float tmp38 = (tmp34 + tmp37);		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(1110)
				Float tmp39 = ::Math_obj::sin(tmp38);		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(1110)
				Float tmp40 = radius;		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(1110)
				Float tmp41 = (tmp39 * tmp40);		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(1110)
				::haxegon::Gfx_obj::ty = tmp41;
				HX_STACK_LINE(1112)
				::openfl::display::Shape tmp42 = ::haxegon::Gfx_obj::tempshape;		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(1112)
				::openfl::display::Graphics tmp43 = tmp42->get_graphics();		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(1112)
				Float tmp44 = ::haxegon::Gfx_obj::tx;		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(1112)
				Float tmp45 = ::haxegon::Gfx_obj::ty;		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(1112)
				tmp43->lineTo(tmp44,tmp45);
			}
		}
		HX_STACK_LINE(1114)
		::openfl::display::Shape tmp23 = ::haxegon::Gfx_obj::tempshape;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(1114)
		::openfl::display::Graphics tmp24 = tmp23->get_graphics();		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(1114)
		tmp24->endFill();
		HX_STACK_LINE(1116)
		::openfl::geom::Matrix tmp25 = ::haxegon::Gfx_obj::shapematrix;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(1116)
		Float tmp26 = x;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(1116)
		Float tmp27 = y;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(1116)
		tmp25->translate(tmp26,tmp27);
		HX_STACK_LINE(1117)
		::openfl::display::BitmapData tmp28 = ::haxegon::Gfx_obj::drawto;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(1117)
		::openfl::display::Shape tmp29 = ::haxegon::Gfx_obj::tempshape;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(1117)
		::openfl::geom::Matrix tmp30 = ::haxegon::Gfx_obj::shapematrix;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(1117)
		tmp28->draw(tmp29,tmp30,null(),null(),null(),null());
		HX_STACK_LINE(1118)
		::openfl::geom::Matrix tmp31 = ::haxegon::Gfx_obj::shapematrix;		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(1118)
		Float tmp32 = x;		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(1118)
		Float tmp33 = -(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(1118)
		Float tmp34 = y;		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(1118)
		Float tmp35 = -(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(1118)
		tmp31->translate(tmp33,tmp35);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(Gfx_obj,fillhexagon,(void))

Void Gfx_obj::drawcircle( Float x,Float y,Float radius,int col,hx::Null< Float >  __o_alpha){
Float alpha = __o_alpha.Default(((Float)1.0));
	HX_STACK_FRAME("haxegon.Gfx","drawcircle",0x3e9f01d7,"haxegon.Gfx.drawcircle","haxegon/Gfx.hx",1122,0xa6405f94)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(radius,"radius")
	HX_STACK_ARG(col,"col")
	HX_STACK_ARG(alpha,"alpha")
{
		HX_STACK_LINE(1123)
		bool tmp = ::haxegon::Gfx_obj::clearscreeneachframe;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1123)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1123)
		if ((tmp1)){
			HX_STACK_LINE(1123)
			bool tmp2 = ::haxegon::Gfx_obj::skiprender;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1123)
			bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1123)
			if ((tmp2)){
				HX_STACK_LINE(1123)
				tmp3 = ::haxegon::Gfx_obj::drawingtoscreen;
			}
			else{
				HX_STACK_LINE(1123)
				tmp3 = false;
			}
			HX_STACK_LINE(1123)
			if ((tmp3)){
				HX_STACK_LINE(1123)
				return null();
			}
		}
		HX_STACK_LINE(1151)
		::openfl::display::Shape tmp2 = ::haxegon::Gfx_obj::tempshape;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1151)
		::openfl::display::Graphics tmp3 = tmp2->get_graphics();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1151)
		tmp3->clear();
		HX_STACK_LINE(1152)
		::openfl::display::Shape tmp4 = ::haxegon::Gfx_obj::tempshape;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1152)
		::openfl::display::Graphics tmp5 = tmp4->get_graphics();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1152)
		Float tmp6 = ::haxegon::Gfx_obj::_linethickness;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1152)
		int tmp7 = col;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1152)
		Float tmp8 = alpha;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1152)
		tmp5->lineStyle(tmp6,tmp7,tmp8,null(),null(),null(),null(),null());
		HX_STACK_LINE(1153)
		::openfl::display::Shape tmp9 = ::haxegon::Gfx_obj::tempshape;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1153)
		::openfl::display::Graphics tmp10 = tmp9->get_graphics();		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1153)
		Float tmp11 = radius;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(1153)
		tmp10->drawCircle((int)0,(int)0,tmp11);
		HX_STACK_LINE(1155)
		::openfl::geom::Matrix tmp12 = ::haxegon::Gfx_obj::shapematrix;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(1155)
		tmp12->identity();
		HX_STACK_LINE(1156)
		::openfl::geom::Matrix tmp13 = ::haxegon::Gfx_obj::shapematrix;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(1156)
		Float tmp14 = x;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(1156)
		Float tmp15 = y;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(1156)
		tmp13->translate(tmp14,tmp15);
		HX_STACK_LINE(1157)
		::openfl::display::BitmapData tmp16 = ::haxegon::Gfx_obj::drawto;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(1157)
		::openfl::display::Shape tmp17 = ::haxegon::Gfx_obj::tempshape;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(1157)
		::openfl::geom::Matrix tmp18 = ::haxegon::Gfx_obj::shapematrix;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(1157)
		tmp16->draw(tmp17,tmp18,null(),null(),null(),null());
		HX_STACK_LINE(1158)
		::openfl::geom::Matrix tmp19 = ::haxegon::Gfx_obj::shapematrix;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(1158)
		tmp19->identity();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(Gfx_obj,drawcircle,(void))

Void Gfx_obj::fillcircle( Float x,Float y,Float radius,int col,hx::Null< Float >  __o_alpha){
Float alpha = __o_alpha.Default(((Float)1.0));
	HX_STACK_FRAME("haxegon.Gfx","fillcircle",0x00760d96,"haxegon.Gfx.fillcircle","haxegon/Gfx.hx",1165,0xa6405f94)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(radius,"radius")
	HX_STACK_ARG(col,"col")
	HX_STACK_ARG(alpha,"alpha")
{
		HX_STACK_LINE(1166)
		bool tmp = ::haxegon::Gfx_obj::clearscreeneachframe;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1166)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1166)
		if ((tmp1)){
			HX_STACK_LINE(1166)
			bool tmp2 = ::haxegon::Gfx_obj::skiprender;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1166)
			bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1166)
			if ((tmp2)){
				HX_STACK_LINE(1166)
				tmp3 = ::haxegon::Gfx_obj::drawingtoscreen;
			}
			else{
				HX_STACK_LINE(1166)
				tmp3 = false;
			}
			HX_STACK_LINE(1166)
			if ((tmp3)){
				HX_STACK_LINE(1166)
				return null();
			}
		}
		HX_STACK_LINE(1206)
		::openfl::display::Shape tmp2 = ::haxegon::Gfx_obj::tempshape;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1206)
		::openfl::display::Graphics tmp3 = tmp2->get_graphics();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1206)
		tmp3->clear();
		HX_STACK_LINE(1207)
		::openfl::display::Shape tmp4 = ::haxegon::Gfx_obj::tempshape;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1207)
		::openfl::display::Graphics tmp5 = tmp4->get_graphics();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1207)
		int tmp6 = col;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1207)
		Float tmp7 = alpha;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1207)
		tmp5->beginFill(tmp6,tmp7);
		HX_STACK_LINE(1208)
		::openfl::display::Shape tmp8 = ::haxegon::Gfx_obj::tempshape;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1208)
		::openfl::display::Graphics tmp9 = tmp8->get_graphics();		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1208)
		Float tmp10 = radius;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1208)
		tmp9->drawCircle((int)0,(int)0,tmp10);
		HX_STACK_LINE(1209)
		::openfl::display::Shape tmp11 = ::haxegon::Gfx_obj::tempshape;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(1209)
		::openfl::display::Graphics tmp12 = tmp11->get_graphics();		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(1209)
		tmp12->endFill();
		HX_STACK_LINE(1211)
		::openfl::geom::Matrix tmp13 = ::haxegon::Gfx_obj::shapematrix;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(1211)
		tmp13->identity();
		HX_STACK_LINE(1212)
		::openfl::geom::Matrix tmp14 = ::haxegon::Gfx_obj::shapematrix;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(1212)
		Float tmp15 = x;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(1212)
		Float tmp16 = y;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(1212)
		tmp14->translate(tmp15,tmp16);
		HX_STACK_LINE(1213)
		::openfl::display::BitmapData tmp17 = ::haxegon::Gfx_obj::drawto;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(1213)
		::openfl::display::Shape tmp18 = ::haxegon::Gfx_obj::tempshape;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(1213)
		::openfl::geom::Matrix tmp19 = ::haxegon::Gfx_obj::shapematrix;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(1213)
		tmp17->drawWithQuality(tmp18,tmp19,null(),null(),null(),false,((Dynamic)((int)2)));
		HX_STACK_LINE(1214)
		::openfl::geom::Matrix tmp20 = ::haxegon::Gfx_obj::shapematrix;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(1214)
		tmp20->identity();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(Gfx_obj,fillcircle,(void))

Void Gfx_obj::drawtri( Float x1,Float y1,Float x2,Float y2,Float x3,Float y3,int col,hx::Null< Float >  __o_alpha){
Float alpha = __o_alpha.Default(((Float)1.0));
	HX_STACK_FRAME("haxegon.Gfx","drawtri",0xa07e4704,"haxegon.Gfx.drawtri","haxegon/Gfx.hx",1218,0xa6405f94)
	HX_STACK_ARG(x1,"x1")
	HX_STACK_ARG(y1,"y1")
	HX_STACK_ARG(x2,"x2")
	HX_STACK_ARG(y2,"y2")
	HX_STACK_ARG(x3,"x3")
	HX_STACK_ARG(y3,"y3")
	HX_STACK_ARG(col,"col")
	HX_STACK_ARG(alpha,"alpha")
{
		HX_STACK_LINE(1219)
		bool tmp = ::haxegon::Gfx_obj::clearscreeneachframe;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1219)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1219)
		if ((tmp1)){
			HX_STACK_LINE(1219)
			bool tmp2 = ::haxegon::Gfx_obj::skiprender;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1219)
			bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1219)
			if ((tmp2)){
				HX_STACK_LINE(1219)
				tmp3 = ::haxegon::Gfx_obj::drawingtoscreen;
			}
			else{
				HX_STACK_LINE(1219)
				tmp3 = false;
			}
			HX_STACK_LINE(1219)
			if ((tmp3)){
				HX_STACK_LINE(1219)
				return null();
			}
		}
		HX_STACK_LINE(1226)
		::openfl::display::Shape tmp2 = ::haxegon::Gfx_obj::tempshape;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1226)
		::openfl::display::Graphics tmp3 = tmp2->get_graphics();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1226)
		tmp3->clear();
		HX_STACK_LINE(1227)
		::openfl::display::Shape tmp4 = ::haxegon::Gfx_obj::tempshape;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1227)
		::openfl::display::Graphics tmp5 = tmp4->get_graphics();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1227)
		Float tmp6 = ::haxegon::Gfx_obj::_linethickness;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1227)
		int tmp7 = col;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1227)
		Float tmp8 = alpha;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1227)
		tmp5->lineStyle(tmp6,tmp7,tmp8,null(),null(),null(),null(),null());
		HX_STACK_LINE(1228)
		::openfl::display::Shape tmp9 = ::haxegon::Gfx_obj::tempshape;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1228)
		::openfl::display::Graphics tmp10 = tmp9->get_graphics();		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1228)
		tmp10->lineTo((int)0,(int)0);
		HX_STACK_LINE(1229)
		::openfl::display::Shape tmp11 = ::haxegon::Gfx_obj::tempshape;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(1229)
		::openfl::display::Graphics tmp12 = tmp11->get_graphics();		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(1229)
		Float tmp13 = (x2 - x1);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(1229)
		Float tmp14 = (y2 - y1);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(1229)
		tmp12->lineTo(tmp13,tmp14);
		HX_STACK_LINE(1230)
		::openfl::display::Shape tmp15 = ::haxegon::Gfx_obj::tempshape;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(1230)
		::openfl::display::Graphics tmp16 = tmp15->get_graphics();		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(1230)
		Float tmp17 = (x3 - x1);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(1230)
		Float tmp18 = (y3 - y1);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(1230)
		tmp16->lineTo(tmp17,tmp18);
		HX_STACK_LINE(1231)
		::openfl::display::Shape tmp19 = ::haxegon::Gfx_obj::tempshape;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(1231)
		::openfl::display::Graphics tmp20 = tmp19->get_graphics();		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(1231)
		tmp20->lineTo((int)0,(int)0);
		HX_STACK_LINE(1232)
		::openfl::display::Shape tmp21 = ::haxegon::Gfx_obj::tempshape;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(1232)
		::openfl::display::Graphics tmp22 = tmp21->get_graphics();		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(1232)
		tmp22->endFill();
		HX_STACK_LINE(1234)
		::openfl::geom::Matrix tmp23 = ::haxegon::Gfx_obj::shapematrix;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(1234)
		Float tmp24 = x1;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(1234)
		Float tmp25 = y1;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(1234)
		tmp23->translate(tmp24,tmp25);
		HX_STACK_LINE(1235)
		::openfl::display::BitmapData tmp26 = ::haxegon::Gfx_obj::drawto;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(1235)
		::openfl::display::Shape tmp27 = ::haxegon::Gfx_obj::tempshape;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(1235)
		::openfl::geom::Matrix tmp28 = ::haxegon::Gfx_obj::shapematrix;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(1235)
		tmp26->draw(tmp27,tmp28,null(),null(),null(),null());
		HX_STACK_LINE(1236)
		::openfl::geom::Matrix tmp29 = ::haxegon::Gfx_obj::shapematrix;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(1236)
		tmp29->identity();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC8(Gfx_obj,drawtri,(void))

Void Gfx_obj::filltri( Float x1,Float y1,Float x2,Float y2,Float x3,Float y3,int col,hx::Null< Float >  __o_alpha){
Float alpha = __o_alpha.Default(((Float)1.0));
	HX_STACK_FRAME("haxegon.Gfx","filltri",0xa895fde5,"haxegon.Gfx.filltri","haxegon/Gfx.hx",1259,0xa6405f94)
	HX_STACK_ARG(x1,"x1")
	HX_STACK_ARG(y1,"y1")
	HX_STACK_ARG(x2,"x2")
	HX_STACK_ARG(y2,"y2")
	HX_STACK_ARG(x3,"x3")
	HX_STACK_ARG(y3,"y3")
	HX_STACK_ARG(col,"col")
	HX_STACK_ARG(alpha,"alpha")
{
		HX_STACK_LINE(1260)
		bool tmp = ::haxegon::Gfx_obj::clearscreeneachframe;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1260)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1260)
		if ((tmp1)){
			HX_STACK_LINE(1260)
			bool tmp2 = ::haxegon::Gfx_obj::skiprender;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1260)
			bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1260)
			if ((tmp2)){
				HX_STACK_LINE(1260)
				tmp3 = ::haxegon::Gfx_obj::drawingtoscreen;
			}
			else{
				HX_STACK_LINE(1260)
				tmp3 = false;
			}
			HX_STACK_LINE(1260)
			if ((tmp3)){
				HX_STACK_LINE(1260)
				return null();
			}
		}
		HX_STACK_LINE(1321)
		::openfl::display::Shape tmp2 = ::haxegon::Gfx_obj::tempshape;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1321)
		::openfl::display::Graphics tmp3 = tmp2->get_graphics();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1321)
		tmp3->clear();
		HX_STACK_LINE(1322)
		::openfl::display::Shape tmp4 = ::haxegon::Gfx_obj::tempshape;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1322)
		::openfl::display::Graphics tmp5 = tmp4->get_graphics();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1322)
		int tmp6 = col;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1322)
		Float tmp7 = alpha;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1322)
		tmp5->beginFill(tmp6,tmp7);
		HX_STACK_LINE(1323)
		::openfl::display::Shape tmp8 = ::haxegon::Gfx_obj::tempshape;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1323)
		::openfl::display::Graphics tmp9 = tmp8->get_graphics();		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1323)
		tmp9->lineTo((int)0,(int)0);
		HX_STACK_LINE(1324)
		::openfl::display::Shape tmp10 = ::haxegon::Gfx_obj::tempshape;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1324)
		::openfl::display::Graphics tmp11 = tmp10->get_graphics();		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(1324)
		Float tmp12 = (x2 - x1);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(1324)
		Float tmp13 = (y2 - y1);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(1324)
		tmp11->lineTo(tmp12,tmp13);
		HX_STACK_LINE(1325)
		::openfl::display::Shape tmp14 = ::haxegon::Gfx_obj::tempshape;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(1325)
		::openfl::display::Graphics tmp15 = tmp14->get_graphics();		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(1325)
		Float tmp16 = (x3 - x1);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(1325)
		Float tmp17 = (y3 - y1);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(1325)
		tmp15->lineTo(tmp16,tmp17);
		HX_STACK_LINE(1326)
		::openfl::display::Shape tmp18 = ::haxegon::Gfx_obj::tempshape;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(1326)
		::openfl::display::Graphics tmp19 = tmp18->get_graphics();		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(1326)
		tmp19->lineTo((int)0,(int)0);
		HX_STACK_LINE(1327)
		::openfl::display::Shape tmp20 = ::haxegon::Gfx_obj::tempshape;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(1327)
		::openfl::display::Graphics tmp21 = tmp20->get_graphics();		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(1327)
		tmp21->endFill();
		HX_STACK_LINE(1329)
		::openfl::geom::Matrix tmp22 = ::haxegon::Gfx_obj::shapematrix;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(1329)
		tmp22->identity();
		HX_STACK_LINE(1330)
		::openfl::geom::Matrix tmp23 = ::haxegon::Gfx_obj::shapematrix;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(1330)
		Float tmp24 = x1;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(1330)
		Float tmp25 = y1;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(1330)
		tmp23->translate(tmp24,tmp25);
		HX_STACK_LINE(1331)
		::openfl::display::BitmapData tmp26 = ::haxegon::Gfx_obj::drawto;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(1331)
		::openfl::display::Shape tmp27 = ::haxegon::Gfx_obj::tempshape;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(1331)
		::openfl::geom::Matrix tmp28 = ::haxegon::Gfx_obj::shapematrix;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(1331)
		tmp26->draw(tmp27,tmp28,null(),null(),null(),null());
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC8(Gfx_obj,filltri,(void))

Void Gfx_obj::drawbox( Float x,Float y,Float width,Float height,int col,hx::Null< Float >  __o_alpha){
Float alpha = __o_alpha.Default(((Float)1.0));
	HX_STACK_FRAME("haxegon.Gfx","drawbox",0xa0709be4,"haxegon.Gfx.drawbox","haxegon/Gfx.hx",1335,0xa6405f94)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(width,"width")
	HX_STACK_ARG(height,"height")
	HX_STACK_ARG(col,"col")
	HX_STACK_ARG(alpha,"alpha")
{
		HX_STACK_LINE(1336)
		bool tmp = ::haxegon::Gfx_obj::clearscreeneachframe;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1336)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1336)
		if ((tmp1)){
			HX_STACK_LINE(1336)
			bool tmp2 = ::haxegon::Gfx_obj::skiprender;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1336)
			bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1336)
			if ((tmp2)){
				HX_STACK_LINE(1336)
				tmp3 = ::haxegon::Gfx_obj::drawingtoscreen;
			}
			else{
				HX_STACK_LINE(1336)
				tmp3 = false;
			}
			HX_STACK_LINE(1336)
			if ((tmp3)){
				HX_STACK_LINE(1336)
				return null();
			}
		}
		HX_STACK_LINE(1338)
		bool tmp2 = (width < (int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1338)
		if ((tmp2)){
			HX_STACK_LINE(1339)
			Float tmp3 = width;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1339)
			Float tmp4 = -(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1339)
			width = tmp4;
			HX_STACK_LINE(1340)
			Float tmp5 = (x - width);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1340)
			x = tmp5;
		}
		HX_STACK_LINE(1342)
		bool tmp3 = (height < (int)0);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1342)
		if ((tmp3)){
			HX_STACK_LINE(1343)
			Float tmp4 = height;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1343)
			Float tmp5 = -(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1343)
			height = tmp5;
			HX_STACK_LINE(1344)
			Float tmp6 = (y - height);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1344)
			y = tmp6;
		}
		HX_STACK_LINE(1352)
		Float tmp4 = ::haxegon::Gfx_obj::_linethickness;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1352)
		bool tmp5 = (tmp4 < (int)2);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1352)
		if ((tmp5)){
			HX_STACK_LINE(1353)
			Float tmp6 = x;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1353)
			Float tmp7 = y;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1353)
			Float tmp8 = width;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1353)
			int tmp9 = col;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1353)
			Float tmp10 = alpha;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1353)
			::haxegon::Gfx_obj::fillbox(tmp6,tmp7,tmp8,(int)1,tmp9,tmp10);
			HX_STACK_LINE(1354)
			Float tmp11 = x;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(1354)
			Float tmp12 = (y + height);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1354)
			Float tmp13 = (tmp12 - (int)1);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(1354)
			Float tmp14 = (width - (int)1);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(1354)
			int tmp15 = col;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(1354)
			Float tmp16 = alpha;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(1354)
			::haxegon::Gfx_obj::fillbox(tmp11,tmp13,tmp14,(int)1,tmp15,tmp16);
			HX_STACK_LINE(1355)
			Float tmp17 = x;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(1355)
			Float tmp18 = (y + (int)1);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(1355)
			Float tmp19 = (height - (int)1);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(1355)
			int tmp20 = col;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(1355)
			Float tmp21 = alpha;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(1355)
			::haxegon::Gfx_obj::fillbox(tmp17,tmp18,(int)1,tmp19,tmp20,tmp21);
			HX_STACK_LINE(1356)
			Float tmp22 = (x + width);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(1356)
			Float tmp23 = (tmp22 - (int)1);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(1356)
			Float tmp24 = (y + (int)1);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(1356)
			Float tmp25 = (height - (int)1);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(1356)
			int tmp26 = col;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(1356)
			Float tmp27 = alpha;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(1356)
			::haxegon::Gfx_obj::fillbox(tmp23,tmp24,(int)1,tmp25,tmp26,tmp27);
		}
		else{
			HX_STACK_LINE(1358)
			::openfl::display::Shape tmp6 = ::haxegon::Gfx_obj::tempshape;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1358)
			::openfl::display::Graphics tmp7 = tmp6->get_graphics();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1358)
			tmp7->clear();
			HX_STACK_LINE(1359)
			::openfl::display::Shape tmp8 = ::haxegon::Gfx_obj::tempshape;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1359)
			::openfl::display::Graphics tmp9 = tmp8->get_graphics();		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1359)
			Float tmp10 = ::haxegon::Gfx_obj::_linethickness;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1359)
			int tmp11 = col;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(1359)
			Float tmp12 = alpha;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1359)
			tmp9->lineStyle(tmp10,tmp11,tmp12,null(),null(),null(),null(),null());
			HX_STACK_LINE(1360)
			::openfl::display::Shape tmp13 = ::haxegon::Gfx_obj::tempshape;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(1360)
			::openfl::display::Graphics tmp14 = tmp13->get_graphics();		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(1360)
			Float tmp15 = width;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(1360)
			tmp14->lineTo(tmp15,(int)0);
			HX_STACK_LINE(1361)
			::openfl::display::Shape tmp16 = ::haxegon::Gfx_obj::tempshape;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(1361)
			::openfl::display::Graphics tmp17 = tmp16->get_graphics();		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(1361)
			Float tmp18 = width;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(1361)
			Float tmp19 = height;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(1361)
			tmp17->lineTo(tmp18,tmp19);
			HX_STACK_LINE(1362)
			::openfl::display::Shape tmp20 = ::haxegon::Gfx_obj::tempshape;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(1362)
			::openfl::display::Graphics tmp21 = tmp20->get_graphics();		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(1362)
			Float tmp22 = height;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(1362)
			tmp21->lineTo((int)0,tmp22);
			HX_STACK_LINE(1363)
			::openfl::display::Shape tmp23 = ::haxegon::Gfx_obj::tempshape;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(1363)
			::openfl::display::Graphics tmp24 = tmp23->get_graphics();		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(1363)
			tmp24->lineTo((int)0,(int)0);
			HX_STACK_LINE(1365)
			::openfl::geom::Matrix tmp25 = ::haxegon::Gfx_obj::shapematrix;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(1365)
			tmp25->identity();
			HX_STACK_LINE(1366)
			::openfl::geom::Matrix tmp26 = ::haxegon::Gfx_obj::shapematrix;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(1366)
			Float tmp27 = x;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(1366)
			Float tmp28 = y;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(1366)
			tmp26->translate(tmp27,tmp28);
			HX_STACK_LINE(1367)
			::openfl::display::BitmapData tmp29 = ::haxegon::Gfx_obj::drawto;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(1367)
			::openfl::display::Shape tmp30 = ::haxegon::Gfx_obj::tempshape;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(1367)
			::openfl::geom::Matrix tmp31 = ::haxegon::Gfx_obj::shapematrix;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(1367)
			tmp29->draw(tmp30,tmp31,null(),null(),null(),null());
			HX_STACK_LINE(1368)
			::openfl::geom::Matrix tmp32 = ::haxegon::Gfx_obj::shapematrix;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(1368)
			tmp32->identity();
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(Gfx_obj,drawbox,(void))

Float Gfx_obj::get_linethickness( ){
	HX_STACK_FRAME("haxegon.Gfx","get_linethickness",0x956eabf4,"haxegon.Gfx.get_linethickness","haxegon/Gfx.hx",1375,0xa6405f94)
	HX_STACK_LINE(1376)
	Float tmp = ::haxegon::Gfx_obj::_linethickness;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1376)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Gfx_obj,get_linethickness,return )

Float Gfx_obj::set_linethickness( Float size){
	HX_STACK_FRAME("haxegon.Gfx","set_linethickness",0xb8dc8400,"haxegon.Gfx.set_linethickness","haxegon/Gfx.hx",1379,0xa6405f94)
	HX_STACK_ARG(size,"size")
	HX_STACK_LINE(1380)
	::haxegon::Gfx_obj::_linethickness = size;
	HX_STACK_LINE(1381)
	Float tmp = ::haxegon::Gfx_obj::_linethickness;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1381)
	bool tmp1 = (tmp < (int)1);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1381)
	if ((tmp1)){
		HX_STACK_LINE(1381)
		::haxegon::Gfx_obj::_linethickness = (int)1;
	}
	HX_STACK_LINE(1382)
	Float tmp2 = ::haxegon::Gfx_obj::_linethickness;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1382)
	bool tmp3 = (tmp2 > (int)255);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1382)
	if ((tmp3)){
		HX_STACK_LINE(1382)
		::haxegon::Gfx_obj::_linethickness = (int)255;
	}
	HX_STACK_LINE(1383)
	Float tmp4 = ::haxegon::Gfx_obj::_linethickness;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1383)
	return tmp4;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Gfx_obj,set_linethickness,return )

Void Gfx_obj::clearscreen( hx::Null< int >  __o_col){
int col = __o_col.Default(0);
	HX_STACK_FRAME("haxegon.Gfx","clearscreen",0xc18af696,"haxegon.Gfx.clearscreen","haxegon/Gfx.hx",1386,0xa6405f94)
	HX_STACK_ARG(col,"col")
{
		HX_STACK_LINE(1387)
		bool tmp = ::haxegon::Gfx_obj::clearscreeneachframe;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1387)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1387)
		if ((tmp1)){
			HX_STACK_LINE(1387)
			bool tmp2 = ::haxegon::Gfx_obj::skiprender;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1387)
			bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1387)
			if ((tmp2)){
				HX_STACK_LINE(1387)
				tmp3 = ::haxegon::Gfx_obj::drawingtoscreen;
			}
			else{
				HX_STACK_LINE(1387)
				tmp3 = false;
			}
			HX_STACK_LINE(1387)
			if ((tmp3)){
				HX_STACK_LINE(1387)
				return null();
			}
		}
		HX_STACK_LINE(1388)
		::openfl::display::BitmapData tmp2 = ::haxegon::Gfx_obj::drawto;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1388)
		::openfl::display::BitmapData tmp3 = ::haxegon::Gfx_obj::drawto;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1388)
		::openfl::geom::Rectangle tmp4 = tmp3->rect;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1388)
		int tmp5 = (int)-16777216;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1388)
		int tmp6 = col;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1388)
		int tmp7 = (tmp5 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1388)
		tmp2->fillRect(tmp4,tmp7);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Gfx_obj,clearscreen,(void))

int Gfx_obj::getpixel( Float x,Float y){
	HX_STACK_FRAME("haxegon.Gfx","getpixel",0xe6b92833,"haxegon.Gfx.getpixel","haxegon/Gfx.hx",1391,0xa6405f94)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_LINE(1392)
	::openfl::display::BitmapData tmp = ::haxegon::Gfx_obj::drawto;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1392)
	Float tmp1 = x;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1392)
	int tmp2 = ::Std_obj::_int(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1392)
	Float tmp3 = y;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1392)
	int tmp4 = ::Std_obj::_int(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1392)
	int tmp5 = tmp->getPixel32(tmp2,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1392)
	int tmp6 = (int(tmp5) >> int((int)24));		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(1392)
	int tmp7 = (int(tmp6) & int((int)255));		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(1392)
	int pixelalpha = tmp7;		HX_STACK_VAR(pixelalpha,"pixelalpha");
	HX_STACK_LINE(1393)
	::openfl::display::BitmapData tmp8 = ::haxegon::Gfx_obj::drawto;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(1393)
	Float tmp9 = x;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(1393)
	int tmp10 = ::Std_obj::_int(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(1393)
	Float tmp11 = y;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(1393)
	int tmp12 = ::Std_obj::_int(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(1393)
	int tmp13 = tmp8->getPixel(tmp10,tmp12);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(1393)
	int pixel = tmp13;		HX_STACK_VAR(pixel,"pixel");
	HX_STACK_LINE(1395)
	bool tmp14 = (pixelalpha == (int)0);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(1395)
	if ((tmp14)){
		HX_STACK_LINE(1395)
		int tmp15 = ::haxegon::Col_obj::TRANSPARENT;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(1395)
		return tmp15;
	}
	HX_STACK_LINE(1396)
	int tmp15 = pixel;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(1396)
	return tmp15;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Gfx_obj,getpixel,return )

Void Gfx_obj::setpixel( Float x,Float y,int col,hx::Null< Float >  __o_alpha){
Float alpha = __o_alpha.Default(((Float)1.0));
	HX_STACK_FRAME("haxegon.Gfx","setpixel",0x951681a7,"haxegon.Gfx.setpixel","haxegon/Gfx.hx",1399,0xa6405f94)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(col,"col")
	HX_STACK_ARG(alpha,"alpha")
{
		HX_STACK_LINE(1400)
		bool tmp = ::haxegon::Gfx_obj::clearscreeneachframe;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1400)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1400)
		if ((tmp1)){
			HX_STACK_LINE(1400)
			bool tmp2 = ::haxegon::Gfx_obj::skiprender;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1400)
			bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1400)
			if ((tmp2)){
				HX_STACK_LINE(1400)
				tmp3 = ::haxegon::Gfx_obj::drawingtoscreen;
			}
			else{
				HX_STACK_LINE(1400)
				tmp3 = false;
			}
			HX_STACK_LINE(1400)
			if ((tmp3)){
				HX_STACK_LINE(1400)
				return null();
			}
		}
		HX_STACK_LINE(1430)
		::openfl::display::BitmapData tmp2 = ::haxegon::Gfx_obj::drawto;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1430)
		Float tmp3 = x;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1430)
		int tmp4 = ::Std_obj::_int(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1430)
		Float tmp5 = y;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1430)
		int tmp6 = ::Std_obj::_int(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1430)
		Float tmp7 = (alpha * (int)255);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1430)
		int tmp8 = ::Std_obj::_int(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1430)
		int tmp9 = (int(tmp8) << int((int)24));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1430)
		int tmp10 = col;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1430)
		int tmp11 = (tmp9 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(1430)
		tmp2->setPixel32(tmp4,tmp6,tmp11);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Gfx_obj,setpixel,(void))

Void Gfx_obj::fillbox( Float x,Float y,Float width,Float height,int col,hx::Null< Float >  __o_alpha){
Float alpha = __o_alpha.Default(((Float)1.0));
	HX_STACK_FRAME("haxegon.Gfx","fillbox",0xa88852c5,"haxegon.Gfx.fillbox","haxegon/Gfx.hx",1434,0xa6405f94)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(width,"width")
	HX_STACK_ARG(height,"height")
	HX_STACK_ARG(col,"col")
	HX_STACK_ARG(alpha,"alpha")
{
		HX_STACK_LINE(1435)
		bool tmp = ::haxegon::Gfx_obj::clearscreeneachframe;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1435)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1435)
		if ((tmp1)){
			HX_STACK_LINE(1435)
			bool tmp2 = ::haxegon::Gfx_obj::skiprender;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1435)
			bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1435)
			if ((tmp2)){
				HX_STACK_LINE(1435)
				tmp3 = ::haxegon::Gfx_obj::drawingtoscreen;
			}
			else{
				HX_STACK_LINE(1435)
				tmp3 = false;
			}
			HX_STACK_LINE(1435)
			if ((tmp3)){
				HX_STACK_LINE(1435)
				return null();
			}
		}
		HX_STACK_LINE(1462)
		::openfl::display::Shape tmp2 = ::haxegon::Gfx_obj::tempshape;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1462)
		::openfl::display::Graphics tmp3 = tmp2->get_graphics();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1462)
		tmp3->clear();
		HX_STACK_LINE(1463)
		::openfl::display::Shape tmp4 = ::haxegon::Gfx_obj::tempshape;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1463)
		::openfl::display::Graphics tmp5 = tmp4->get_graphics();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1463)
		int tmp6 = col;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1463)
		Float tmp7 = alpha;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1463)
		tmp5->beginFill(tmp6,tmp7);
		HX_STACK_LINE(1464)
		::openfl::display::Shape tmp8 = ::haxegon::Gfx_obj::tempshape;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1464)
		::openfl::display::Graphics tmp9 = tmp8->get_graphics();		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1464)
		Float tmp10 = width;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1464)
		tmp9->lineTo(tmp10,(int)0);
		HX_STACK_LINE(1465)
		::openfl::display::Shape tmp11 = ::haxegon::Gfx_obj::tempshape;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(1465)
		::openfl::display::Graphics tmp12 = tmp11->get_graphics();		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(1465)
		Float tmp13 = width;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(1465)
		Float tmp14 = height;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(1465)
		tmp12->lineTo(tmp13,tmp14);
		HX_STACK_LINE(1466)
		::openfl::display::Shape tmp15 = ::haxegon::Gfx_obj::tempshape;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(1466)
		::openfl::display::Graphics tmp16 = tmp15->get_graphics();		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(1466)
		Float tmp17 = height;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(1466)
		tmp16->lineTo((int)0,tmp17);
		HX_STACK_LINE(1467)
		::openfl::display::Shape tmp18 = ::haxegon::Gfx_obj::tempshape;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(1467)
		::openfl::display::Graphics tmp19 = tmp18->get_graphics();		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(1467)
		tmp19->lineTo((int)0,(int)0);
		HX_STACK_LINE(1468)
		::openfl::display::Shape tmp20 = ::haxegon::Gfx_obj::tempshape;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(1468)
		::openfl::display::Graphics tmp21 = tmp20->get_graphics();		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(1468)
		tmp21->endFill();
		HX_STACK_LINE(1470)
		::openfl::geom::Matrix tmp22 = ::haxegon::Gfx_obj::shapematrix;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(1470)
		tmp22->identity();
		HX_STACK_LINE(1471)
		::openfl::geom::Matrix tmp23 = ::haxegon::Gfx_obj::shapematrix;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(1471)
		Float tmp24 = x;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(1471)
		Float tmp25 = y;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(1471)
		tmp23->translate(tmp24,tmp25);
		HX_STACK_LINE(1472)
		::openfl::display::BitmapData tmp26 = ::haxegon::Gfx_obj::drawto;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(1472)
		::openfl::display::Shape tmp27 = ::haxegon::Gfx_obj::tempshape;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(1472)
		::openfl::geom::Matrix tmp28 = ::haxegon::Gfx_obj::shapematrix;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(1472)
		tmp26->draw(tmp27,tmp28,null(),null(),null(),null());
		HX_STACK_LINE(1473)
		::openfl::geom::Matrix tmp29 = ::haxegon::Gfx_obj::shapematrix;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(1473)
		tmp29->identity();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(Gfx_obj,fillbox,(void))

int Gfx_obj::getred( int c){
	HX_STACK_FRAME("haxegon.Gfx","getred",0x83d685be,"haxegon.Gfx.getred","haxegon/Gfx.hx",1477,0xa6405f94)
	HX_STACK_ARG(c,"c")
	HX_STACK_LINE(1478)
	int tmp = (int(c) >> int((int)16));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1478)
	int tmp1 = (int(tmp) & int((int)255));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1478)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Gfx_obj,getred,return )

int Gfx_obj::getgreen( int c){
	HX_STACK_FRAME("haxegon.Gfx","getgreen",0xbe027070,"haxegon.Gfx.getgreen","haxegon/Gfx.hx",1481,0xa6405f94)
	HX_STACK_ARG(c,"c")
	HX_STACK_LINE(1482)
	int tmp = (int(c) >> int((int)8));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1482)
	int tmp1 = (int(tmp) & int((int)255));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1482)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Gfx_obj,getgreen,return )

int Gfx_obj::getblue( int c){
	HX_STACK_FRAME("haxegon.Gfx","getblue",0xcd50758d,"haxegon.Gfx.getblue","haxegon/Gfx.hx",1485,0xa6405f94)
	HX_STACK_ARG(c,"c")
	HX_STACK_LINE(1486)
	int tmp = (int(c) & int((int)255));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1486)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Gfx_obj,getblue,return )

int Gfx_obj::gethue( int c){
	HX_STACK_FRAME("haxegon.Gfx","gethue",0x83cefd25,"haxegon.Gfx.gethue","haxegon/Gfx.hx",1490,0xa6405f94)
	HX_STACK_ARG(c,"c")
	HX_STACK_LINE(1491)
	int tmp = (int(c) >> int((int)16));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1491)
	int tmp1 = (int(tmp) & int((int)255));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1491)
	Float tmp2 = (Float(tmp1) / Float((int)255));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1491)
	Float r = tmp2;		HX_STACK_VAR(r,"r");
	HX_STACK_LINE(1492)
	int tmp3 = (int(c) >> int((int)8));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1492)
	int tmp4 = (int(tmp3) & int((int)255));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1492)
	Float tmp5 = (Float(tmp4) / Float((int)255));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1492)
	Float g = tmp5;		HX_STACK_VAR(g,"g");
	HX_STACK_LINE(1493)
	int tmp6 = (int(c) & int((int)255));		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(1493)
	Float tmp7 = (Float(tmp6) / Float((int)255));		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(1493)
	Float b = tmp7;		HX_STACK_VAR(b,"b");
	HX_STACK_LINE(1494)
	Float tmp8 = r;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(1494)
	Float tmp9 = g;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(1494)
	Float tmp10 = ::Math_obj::max(tmp8,tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(1494)
	Float tmp11 = b;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(1494)
	Float tmp12 = ::Math_obj::max(tmp10,tmp11);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(1494)
	Float max = tmp12;		HX_STACK_VAR(max,"max");
	HX_STACK_LINE(1495)
	Float tmp13 = r;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(1495)
	Float tmp14 = g;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(1495)
	Float tmp15 = ::Math_obj::min(tmp13,tmp14);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(1495)
	Float tmp16 = b;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(1495)
	Float tmp17 = ::Math_obj::min(tmp15,tmp16);		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(1495)
	Float min = tmp17;		HX_STACK_VAR(min,"min");
	HX_STACK_LINE(1497)
	Float tmp18 = (max + min);		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(1497)
	Float tmp19 = (Float(tmp18) / Float((int)2));		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(1497)
	Float h = tmp19;		HX_STACK_VAR(h,"h");
	HX_STACK_LINE(1499)
	bool tmp20 = (max != min);		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(1499)
	if ((tmp20)){
		HX_STACK_LINE(1500)
		Float tmp21 = (max - min);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(1500)
		Float d = tmp21;		HX_STACK_VAR(d,"d");
		HX_STACK_LINE(1501)
		bool tmp22 = (max == r);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(1501)
		if ((tmp22)){
			HX_STACK_LINE(1502)
			Float tmp23 = (g - b);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(1502)
			Float tmp24 = d;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(1502)
			Float tmp25 = (Float(tmp23) / Float(tmp24));		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(1502)
			bool tmp26 = (g < b);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(1502)
			int tmp27;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(1502)
			if ((tmp26)){
				HX_STACK_LINE(1502)
				tmp27 = (int)6;
			}
			else{
				HX_STACK_LINE(1502)
				tmp27 = (int)0;
			}
			HX_STACK_LINE(1502)
			Float tmp28 = (tmp25 + tmp27);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(1502)
			h = tmp28;
		}
		else{
			HX_STACK_LINE(1503)
			bool tmp23 = (max == g);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(1503)
			if ((tmp23)){
				HX_STACK_LINE(1504)
				Float tmp24 = (b - r);		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(1504)
				Float tmp25 = d;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(1504)
				Float tmp26 = (Float(tmp24) / Float(tmp25));		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(1504)
				Float tmp27 = (tmp26 + (int)2);		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(1504)
				h = tmp27;
			}
			else{
				HX_STACK_LINE(1505)
				bool tmp24 = (max == b);		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(1505)
				if ((tmp24)){
					HX_STACK_LINE(1506)
					Float tmp25 = (r - g);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(1506)
					Float tmp26 = d;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(1506)
					Float tmp27 = (Float(tmp25) / Float(tmp26));		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(1506)
					Float tmp28 = (tmp27 + (int)4);		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(1506)
					h = tmp28;
				}
			}
		}
		HX_STACK_LINE(1508)
		hx::DivEq(h,(int)6);
	}
	HX_STACK_LINE(1511)
	Float tmp21 = (h * (int)360);		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(1511)
	int tmp22 = ::Std_obj::_int(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(1511)
	return tmp22;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Gfx_obj,gethue,return )

Float Gfx_obj::getsaturation( int c){
	HX_STACK_FRAME("haxegon.Gfx","getsaturation",0xb02a3f05,"haxegon.Gfx.getsaturation","haxegon/Gfx.hx",1515,0xa6405f94)
	HX_STACK_ARG(c,"c")
	HX_STACK_LINE(1516)
	int tmp = (int(c) >> int((int)16));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1516)
	int tmp1 = (int(tmp) & int((int)255));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1516)
	Float tmp2 = (Float(tmp1) / Float((int)255));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1516)
	Float r = tmp2;		HX_STACK_VAR(r,"r");
	HX_STACK_LINE(1517)
	int tmp3 = (int(c) >> int((int)8));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1517)
	int tmp4 = (int(tmp3) & int((int)255));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1517)
	Float tmp5 = (Float(tmp4) / Float((int)255));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1517)
	Float g = tmp5;		HX_STACK_VAR(g,"g");
	HX_STACK_LINE(1518)
	int tmp6 = (int(c) & int((int)255));		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(1518)
	Float tmp7 = (Float(tmp6) / Float((int)255));		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(1518)
	Float b = tmp7;		HX_STACK_VAR(b,"b");
	HX_STACK_LINE(1519)
	Float tmp8 = r;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(1519)
	Float tmp9 = g;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(1519)
	Float tmp10 = ::Math_obj::max(tmp8,tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(1519)
	Float tmp11 = b;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(1519)
	Float tmp12 = ::Math_obj::max(tmp10,tmp11);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(1519)
	Float max = tmp12;		HX_STACK_VAR(max,"max");
	HX_STACK_LINE(1520)
	Float tmp13 = r;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(1520)
	Float tmp14 = g;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(1520)
	Float tmp15 = ::Math_obj::min(tmp13,tmp14);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(1520)
	Float tmp16 = b;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(1520)
	Float tmp17 = ::Math_obj::min(tmp15,tmp16);		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(1520)
	Float min = tmp17;		HX_STACK_VAR(min,"min");
	HX_STACK_LINE(1522)
	Float tmp18 = (max + min);		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(1522)
	Float tmp19 = (Float(tmp18) / Float((int)2));		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(1522)
	Float s = tmp19;		HX_STACK_VAR(s,"s");
	HX_STACK_LINE(1523)
	Float l = s;		HX_STACK_VAR(l,"l");
	HX_STACK_LINE(1525)
	bool tmp20 = (max == min);		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(1525)
	if ((tmp20)){
		HX_STACK_LINE(1526)
		s = (int)0;
	}
	else{
		HX_STACK_LINE(1528)
		Float tmp21 = (max - min);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(1528)
		Float d = tmp21;		HX_STACK_VAR(d,"d");
		HX_STACK_LINE(1529)
		bool tmp22 = (l > ((Float)0.5));		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(1529)
		Float tmp23;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(1529)
		if ((tmp22)){
			HX_STACK_LINE(1529)
			Float tmp24 = d;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(1529)
			Float tmp25 = ((int)2 - max);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(1529)
			Float tmp26 = min;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(1529)
			Float tmp27 = (tmp25 - tmp26);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(1529)
			tmp23 = (Float(tmp24) / Float(tmp27));
		}
		else{
			HX_STACK_LINE(1529)
			Float tmp24 = d;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(1529)
			Float tmp25 = (max + min);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(1529)
			tmp23 = (Float(tmp24) / Float(tmp25));
		}
		HX_STACK_LINE(1529)
		s = tmp23;
	}
	HX_STACK_LINE(1532)
	Float tmp21 = s;		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(1532)
	return tmp21;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Gfx_obj,getsaturation,return )

Float Gfx_obj::getlightness( int c){
	HX_STACK_FRAME("haxegon.Gfx","getlightness",0xa473709a,"haxegon.Gfx.getlightness","haxegon/Gfx.hx",1536,0xa6405f94)
	HX_STACK_ARG(c,"c")
	HX_STACK_LINE(1537)
	int tmp = (int(c) >> int((int)16));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1537)
	int tmp1 = (int(tmp) & int((int)255));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1537)
	Float tmp2 = (Float(tmp1) / Float((int)255));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1537)
	Float r = tmp2;		HX_STACK_VAR(r,"r");
	HX_STACK_LINE(1538)
	int tmp3 = (int(c) >> int((int)8));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1538)
	int tmp4 = (int(tmp3) & int((int)255));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1538)
	Float tmp5 = (Float(tmp4) / Float((int)255));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1538)
	Float g = tmp5;		HX_STACK_VAR(g,"g");
	HX_STACK_LINE(1539)
	int tmp6 = (int(c) & int((int)255));		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(1539)
	Float tmp7 = (Float(tmp6) / Float((int)255));		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(1539)
	Float b = tmp7;		HX_STACK_VAR(b,"b");
	HX_STACK_LINE(1540)
	Float tmp8 = r;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(1540)
	Float tmp9 = g;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(1540)
	Float tmp10 = ::Math_obj::max(tmp8,tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(1540)
	Float tmp11 = b;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(1540)
	Float tmp12 = ::Math_obj::max(tmp10,tmp11);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(1540)
	Float max = tmp12;		HX_STACK_VAR(max,"max");
	HX_STACK_LINE(1541)
	Float tmp13 = r;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(1541)
	Float tmp14 = g;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(1541)
	Float tmp15 = ::Math_obj::min(tmp13,tmp14);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(1541)
	Float tmp16 = b;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(1541)
	Float tmp17 = ::Math_obj::min(tmp15,tmp16);		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(1541)
	Float min = tmp17;		HX_STACK_VAR(min,"min");
	HX_STACK_LINE(1543)
	Float tmp18 = (max + min);		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(1543)
	Float tmp19 = (Float(tmp18) / Float((int)2));		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(1543)
	return tmp19;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Gfx_obj,getlightness,return )

int Gfx_obj::rgb( int red,int green,int blue){
	HX_STACK_FRAME("haxegon.Gfx","rgb",0x98e857ea,"haxegon.Gfx.rgb","haxegon/Gfx.hx",1546,0xa6405f94)
	HX_STACK_ARG(red,"red")
	HX_STACK_ARG(green,"green")
	HX_STACK_ARG(blue,"blue")
	HX_STACK_LINE(1547)
	int tmp = blue;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1547)
	int tmp1 = (int(green) << int((int)8));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1547)
	int tmp2 = (int(tmp) | int(tmp1));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1547)
	int tmp3 = (int(red) << int((int)16));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1547)
	int tmp4 = (int(tmp2) | int(tmp3));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1547)
	return tmp4;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Gfx_obj,rgb,return )

int Gfx_obj::hsl( Float hue,Float saturation,Float lightness){
	HX_STACK_FRAME("haxegon.Gfx","hsl",0x98e0cbde,"haxegon.Gfx.hsl","haxegon/Gfx.hx",1552,0xa6405f94)
	HX_STACK_ARG(hue,"hue")
	HX_STACK_ARG(saturation,"saturation")
	HX_STACK_ARG(lightness,"lightness")
	HX_STACK_LINE(1553)
	Float tmp = lightness;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1553)
	Float tmp1 = ((Float)0.5);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1553)
	bool tmp2 = (tmp < tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1553)
	Float tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1553)
	if ((tmp2)){
		HX_STACK_LINE(1554)
		Float tmp4 = lightness;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1554)
		Float tmp5 = ((int)1 + saturation);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1554)
		tmp3 = (tmp4 * tmp5);
	}
	else{
		HX_STACK_LINE(1556)
		Float tmp4 = (lightness + saturation);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1556)
		Float tmp5 = (lightness * saturation);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1556)
		tmp3 = (tmp4 - tmp5);
	}
	HX_STACK_LINE(1553)
	Float q = tmp3;		HX_STACK_VAR(q,"q");
	HX_STACK_LINE(1559)
	Float tmp4 = ((int)2 * lightness);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1559)
	Float tmp5 = q;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1559)
	Float tmp6 = (tmp4 - tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(1559)
	Float p = tmp6;		HX_STACK_VAR(p,"p");
	HX_STACK_LINE(1561)
	Float tmp7 = hx::Mod(hue,(int)360);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(1561)
	Float tmp8 = (Float(tmp7) / Float((int)360));		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(1561)
	Float hk = tmp8;		HX_STACK_VAR(hk,"hk");
	HX_STACK_LINE(1563)
	Float tmp9 = hk;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(1563)
	Float tmp10 = ((Float)0.333333333333333315);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(1563)
	Float tmp11 = (tmp9 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(1563)
	::haxegon::Gfx_obj::hslval[(int)0] = tmp11;
	HX_STACK_LINE(1564)
	Float tmp12 = hk;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(1564)
	::haxegon::Gfx_obj::hslval[(int)1] = tmp12;
	HX_STACK_LINE(1565)
	Float tmp13 = hk;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(1565)
	Float tmp14 = ((Float)0.333333333333333315);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(1565)
	Float tmp15 = (tmp13 - tmp14);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(1565)
	::haxegon::Gfx_obj::hslval[(int)2] = tmp15;
	HX_STACK_LINE(1566)
	{
		HX_STACK_LINE(1566)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1566)
		while((true)){
			HX_STACK_LINE(1566)
			bool tmp16 = (_g < (int)3);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(1566)
			bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(1566)
			if ((tmp17)){
				HX_STACK_LINE(1566)
				break;
			}
			HX_STACK_LINE(1566)
			int tmp18 = (_g)++;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(1566)
			int n = tmp18;		HX_STACK_VAR(n,"n");
			HX_STACK_LINE(1567)
			Float tmp19 = ::haxegon::Gfx_obj::hslval->__get(n);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(1567)
			bool tmp20 = (tmp19 < (int)0);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(1567)
			if ((tmp20)){
				HX_STACK_LINE(1567)
				hx::AddEq(::haxegon::Gfx_obj::hslval[n],(int)1);
			}
			HX_STACK_LINE(1568)
			Float tmp21 = ::haxegon::Gfx_obj::hslval->__get(n);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(1568)
			bool tmp22 = (tmp21 > (int)1);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(1568)
			if ((tmp22)){
				HX_STACK_LINE(1568)
				hx::SubEq(::haxegon::Gfx_obj::hslval[n],(int)1);
			}
			HX_STACK_LINE(1569)
			Float tmp23 = ::haxegon::Gfx_obj::hslval->__get(n);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(1569)
			Float tmp24 = ((Float)0.166666666666666657);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(1569)
			bool tmp25 = (tmp23 < tmp24);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(1569)
			Float tmp26;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(1569)
			if ((tmp25)){
				HX_STACK_LINE(1570)
				Float tmp27 = p;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(1570)
				Float tmp28 = (q - p);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(1570)
				Float tmp29 = (tmp28 * (int)6);		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(1570)
				Float tmp30 = ::haxegon::Gfx_obj::hslval->__get(n);		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(1570)
				Float tmp31 = (tmp29 * tmp30);		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(1570)
				tmp26 = (tmp27 + tmp31);
			}
			else{
				HX_STACK_LINE(1571)
				Float tmp27 = ::haxegon::Gfx_obj::hslval->__get(n);		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(1571)
				Float tmp28 = ((Float)0.5);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(1571)
				bool tmp29 = (tmp27 < tmp28);		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(1571)
				if ((tmp29)){
					HX_STACK_LINE(1572)
					tmp26 = q;
				}
				else{
					HX_STACK_LINE(1573)
					Float tmp30 = ::haxegon::Gfx_obj::hslval->__get(n);		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(1573)
					Float tmp31 = ((Float)0.66666666666666663);		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(1573)
					bool tmp32 = (tmp30 < tmp31);		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(1573)
					if ((tmp32)){
						HX_STACK_LINE(1574)
						Float tmp33 = p;		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(1574)
						Float tmp34 = (q - p);		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(1574)
						Float tmp35 = (tmp34 * (int)6);		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(1574)
						Float tmp36 = ((Float)0.66666666666666663);		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(1574)
						Float tmp37 = ::haxegon::Gfx_obj::hslval->__get(n);		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(1574)
						Float tmp38 = (tmp36 - tmp37);		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(1574)
						Float tmp39 = (tmp35 * tmp38);		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(1574)
						tmp26 = (tmp33 + tmp39);
					}
					else{
						HX_STACK_LINE(1576)
						tmp26 = p;
					}
				}
			}
			HX_STACK_LINE(1569)
			::haxegon::Gfx_obj::hslval[n] = tmp26;
		}
	}
	HX_STACK_LINE(1580)
	Float tmp16 = ::haxegon::Gfx_obj::hslval->__get((int)0);		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(1580)
	Float tmp17 = (tmp16 * (int)255);		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(1580)
	int tmp18 = ::Std_obj::_int(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(1580)
	Float tmp19 = ::haxegon::Gfx_obj::hslval->__get((int)1);		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(1580)
	Float tmp20 = (tmp19 * (int)255);		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(1580)
	int tmp21 = ::Std_obj::_int(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(1580)
	Float tmp22 = ::haxegon::Gfx_obj::hslval->__get((int)2);		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(1580)
	Float tmp23 = (tmp22 * (int)255);		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(1580)
	int tmp24 = ::Std_obj::_int(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(1580)
	int tmp25 = ::haxegon::Gfx_obj::rgb(tmp18,tmp21,tmp24);		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(1580)
	return tmp25;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Gfx_obj,hsl,return )

Void Gfx_obj::setzoom( int t){
{
		HX_STACK_FRAME("haxegon.Gfx","setzoom",0xd0316712,"haxegon.Gfx.setzoom","haxegon/Gfx.hx",1583,0xa6405f94)
		HX_STACK_ARG(t,"t")
		HX_STACK_LINE(1584)
		::openfl::display::Bitmap tmp = ::haxegon::Gfx_obj::screen;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1584)
		int tmp1 = ::haxegon::Gfx_obj::screenwidth;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1584)
		int tmp2 = t;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1584)
		int tmp3 = (tmp1 * tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1584)
		tmp->set_width(tmp3);
		HX_STACK_LINE(1585)
		::openfl::display::Bitmap tmp4 = ::haxegon::Gfx_obj::screen;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1585)
		int tmp5 = ::haxegon::Gfx_obj::screenheight;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1585)
		int tmp6 = t;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1585)
		int tmp7 = (tmp5 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1585)
		tmp4->set_height(tmp7);
		HX_STACK_LINE(1586)
		::openfl::display::Bitmap tmp8 = ::haxegon::Gfx_obj::screen;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1586)
		int tmp9 = ::haxegon::Gfx_obj::screenwidth;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1586)
		int tmp10 = ::haxegon::Gfx_obj::screenwidth;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1586)
		int tmp11 = t;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(1586)
		int tmp12 = (tmp10 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(1586)
		int tmp13 = (tmp9 - tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(1586)
		Float tmp14 = (Float(tmp13) / Float((int)2));		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(1586)
		tmp8->set_x(tmp14);
		HX_STACK_LINE(1587)
		::openfl::display::Bitmap tmp15 = ::haxegon::Gfx_obj::screen;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(1587)
		int tmp16 = ::haxegon::Gfx_obj::screenheight;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(1587)
		int tmp17 = ::haxegon::Gfx_obj::screenheight;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(1587)
		int tmp18 = t;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(1587)
		int tmp19 = (tmp17 * tmp18);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(1587)
		int tmp20 = (tmp16 - tmp19);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(1587)
		Float tmp21 = (Float(tmp20) / Float((int)2));		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(1587)
		tmp15->set_y(tmp21);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Gfx_obj,setzoom,(void))

Void Gfx_obj::updategraphicsmode( ){
{
		HX_STACK_FRAME("haxegon.Gfx","updategraphicsmode",0x078500fa,"haxegon.Gfx.updategraphicsmode","haxegon/Gfx.hx",1590,0xa6405f94)
		HX_STACK_LINE(1591)
		bool tmp = ::haxegon::Gfx_obj::fullscreen;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1591)
		if ((tmp)){
			HX_STACK_LINE(1592)
			::openfl::display::MovieClip tmp1 = ::openfl::Lib_obj::current;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1592)
			tmp1->stage->set_displayState(((Dynamic)((int)1)));
			HX_STACK_LINE(1593)
			::openfl::display::Stage tmp2 = ::haxegon::Gfx_obj::gfxstage;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1593)
			tmp2->scaleMode = ((Dynamic)((int)2));
			HX_STACK_LINE(1595)
			int tmp3 = ::haxegon::Gfx_obj::devicexres;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1595)
			Float tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1595)
			tmp4 = hx::TCast< ::Float >::cast(tmp3);
			HX_STACK_LINE(1595)
			int tmp5 = ::haxegon::Gfx_obj::screenwidth;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1595)
			Float tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1595)
			tmp6 = hx::TCast< ::Float >::cast(tmp5);
			HX_STACK_LINE(1595)
			Float tmp7 = (Float(tmp4) / Float(tmp6));		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1595)
			int tmp8 = ::Math_obj::floor(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1595)
			Float xScaleFresh = tmp8;		HX_STACK_VAR(xScaleFresh,"xScaleFresh");
			HX_STACK_LINE(1596)
			int tmp9 = ::haxegon::Gfx_obj::deviceyres;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1596)
			Float tmp10;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1596)
			tmp10 = hx::TCast< ::Float >::cast(tmp9);
			HX_STACK_LINE(1596)
			int tmp11 = ::haxegon::Gfx_obj::screenheight;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(1596)
			Float tmp12;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1596)
			tmp12 = hx::TCast< ::Float >::cast(tmp11);
			HX_STACK_LINE(1596)
			Float tmp13 = (Float(tmp10) / Float(tmp12));		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(1596)
			int tmp14 = ::Math_obj::floor(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(1596)
			Float yScaleFresh = tmp14;		HX_STACK_VAR(yScaleFresh,"yScaleFresh");
			HX_STACK_LINE(1597)
			int fullscreenscale = (int)1;		HX_STACK_VAR(fullscreenscale,"fullscreenscale");
			HX_STACK_LINE(1598)
			bool tmp15 = (xScaleFresh < yScaleFresh);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(1598)
			if ((tmp15)){
				HX_STACK_LINE(1599)
				Float tmp16 = xScaleFresh;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(1599)
				int tmp17 = ::Std_obj::_int(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(1599)
				fullscreenscale = tmp17;
			}
			else{
				HX_STACK_LINE(1601)
				Float tmp16 = yScaleFresh;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(1601)
				int tmp17 = ::Std_obj::_int(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(1601)
				fullscreenscale = tmp17;
			}
			HX_STACK_LINE(1603)
			::openfl::display::Bitmap tmp16 = ::haxegon::Gfx_obj::screen;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(1603)
			int tmp17 = ::haxegon::Gfx_obj::screenwidth;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(1603)
			int tmp18 = fullscreenscale;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(1603)
			int tmp19 = (tmp17 * tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(1603)
			tmp16->set_width(tmp19);
			HX_STACK_LINE(1604)
			::openfl::display::Bitmap tmp20 = ::haxegon::Gfx_obj::screen;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(1604)
			int tmp21 = ::haxegon::Gfx_obj::screenheight;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(1604)
			int tmp22 = fullscreenscale;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(1604)
			int tmp23 = (tmp21 * tmp22);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(1604)
			tmp20->set_height(tmp23);
			HX_STACK_LINE(1606)
			::openfl::display::Bitmap tmp24 = ::haxegon::Gfx_obj::screen;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(1606)
			int tmp25 = ::haxegon::Gfx_obj::devicexres;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(1606)
			Float tmp26;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(1606)
			tmp26 = hx::TCast< ::Float >::cast(tmp25);
			HX_STACK_LINE(1606)
			Float tmp27 = (Float(tmp26) / Float(((Float)2.0)));		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(1606)
			::openfl::display::Bitmap tmp28 = ::haxegon::Gfx_obj::screen;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(1606)
			Float tmp29 = tmp28->get_width();		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(1606)
			Float tmp30 = (Float(tmp29) / Float(((Float)2.0)));		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(1606)
			Float tmp31 = (tmp27 - tmp30);		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(1606)
			tmp24->set_x(tmp31);
			HX_STACK_LINE(1607)
			::openfl::display::Bitmap tmp32 = ::haxegon::Gfx_obj::screen;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(1607)
			int tmp33 = ::haxegon::Gfx_obj::deviceyres;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(1607)
			Float tmp34;		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(1607)
			tmp34 = hx::TCast< ::Float >::cast(tmp33);
			HX_STACK_LINE(1607)
			Float tmp35 = (Float(tmp34) / Float(((Float)2.0)));		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(1607)
			::openfl::display::Bitmap tmp36 = ::haxegon::Gfx_obj::screen;		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(1607)
			Float tmp37 = tmp36->get_height();		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(1607)
			Float tmp38 = (Float(tmp37) / Float(((Float)2.0)));		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(1607)
			Float tmp39 = (tmp35 - tmp38);		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(1607)
			tmp32->set_y(tmp39);
		}
		else{
			HX_STACK_LINE(1610)
			::openfl::display::MovieClip tmp1 = ::openfl::Lib_obj::current;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1610)
			tmp1->stage->set_displayState(((Dynamic)((int)2)));
			HX_STACK_LINE(1611)
			::openfl::display::Bitmap tmp2 = ::haxegon::Gfx_obj::screen;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1611)
			int tmp3 = ::haxegon::Gfx_obj::screenwidth;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1611)
			int tmp4 = ::haxegon::Gfx_obj::screenscale;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1611)
			int tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1611)
			tmp2->set_width(tmp5);
			HX_STACK_LINE(1612)
			::openfl::display::Bitmap tmp6 = ::haxegon::Gfx_obj::screen;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1612)
			int tmp7 = ::haxegon::Gfx_obj::screenheight;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1612)
			int tmp8 = ::haxegon::Gfx_obj::screenscale;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1612)
			int tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1612)
			tmp6->set_height(tmp9);
			HX_STACK_LINE(1613)
			::openfl::display::Bitmap tmp10 = ::haxegon::Gfx_obj::screen;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1613)
			tmp10->set_x(((Float)0.0));
			HX_STACK_LINE(1614)
			::openfl::display::Bitmap tmp11 = ::haxegon::Gfx_obj::screen;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(1614)
			tmp11->set_y(((Float)0.0));
			HX_STACK_LINE(1615)
			::openfl::display::Stage tmp12 = ::haxegon::Gfx_obj::gfxstage;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1615)
			tmp12->scaleMode = ((Dynamic)((int)3));
			HX_STACK_LINE(1620)
			::openfl::display::Stage tmp13 = ::haxegon::Gfx_obj::gfxstage;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(1620)
			tmp13->quality = ((Dynamic)((int)1));
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Gfx_obj,updategraphicsmode,(void))

Void Gfx_obj::init( ::openfl::display::Stage stage){
{
		HX_STACK_FRAME("haxegon.Gfx","init",0x2c76ff93,"haxegon.Gfx.init","haxegon/Gfx.hx",1626,0xa6405f94)
		HX_STACK_ARG(stage,"stage")
		HX_STACK_LINE(1627)
		bool tmp = ::haxegon::Gfx_obj::initrun;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1627)
		if ((tmp)){
			HX_STACK_LINE(1628)
			::haxegon::Gfx_obj::gfxstage = stage;
		}
		HX_STACK_LINE(1635)
		::haxegon::Gfx_obj::clearscreeneachframe = true;
		HX_STACK_LINE(1636)
		::haxegon::Gfx_obj::reset();
		HX_STACK_LINE(1637)
		::haxegon::Gfx_obj::set_linethickness((int)1);
		HX_STACK_LINE(1638)
		::openfl::display::BitmapData tmp1 = ::openfl::display::BitmapData_obj::__new((int)1,(int)1,true,(int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1638)
		::haxegon::Gfx_obj::transparentpixel = tmp1;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Gfx_obj,init,(void))

Void Gfx_obj::initgfx( int width,int height,int scale){
{
		HX_STACK_FRAME("haxegon.Gfx","initgfx",0x702b3fc6,"haxegon.Gfx.initgfx","haxegon/Gfx.hx",1689,0xa6405f94)
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_ARG(scale,"scale")
		HX_STACK_LINE(1691)
		::haxegon::Gfx_obj::screenwidth = width;
		HX_STACK_LINE(1691)
		::haxegon::Gfx_obj::screenheight = height;
		HX_STACK_LINE(1692)
		int tmp = ::haxegon::Gfx_obj::screenwidth;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1692)
		Float tmp1 = (Float(tmp) / Float((int)2));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1692)
		int tmp2 = ::Std_obj::_int(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1692)
		::haxegon::Gfx_obj::screenwidthmid = tmp2;
		HX_STACK_LINE(1692)
		int tmp3 = ::haxegon::Gfx_obj::screenheight;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1692)
		Float tmp4 = (Float(tmp3) / Float((int)2));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1692)
		int tmp5 = ::Std_obj::_int(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1692)
		::haxegon::Gfx_obj::screenheightmid = tmp5;
		HX_STACK_LINE(1694)
		Float tmp6 = ::openfl::_system::Capabilities_obj::get_screenResolutionX();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1694)
		int tmp7 = ::Std_obj::_int(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1694)
		::haxegon::Gfx_obj::devicexres = tmp7;
		HX_STACK_LINE(1695)
		Float tmp8 = ::openfl::_system::Capabilities_obj::get_screenResolutionY();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1695)
		int tmp9 = ::Std_obj::_int(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1695)
		::haxegon::Gfx_obj::deviceyres = tmp9;
		HX_STACK_LINE(1696)
		::haxegon::Gfx_obj::screenscale = scale;
		HX_STACK_LINE(1698)
		::openfl::geom::Rectangle tmp10 = ::openfl::geom::Rectangle_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1698)
		::haxegon::Gfx_obj::trect = tmp10;
		HX_STACK_LINE(1698)
		::openfl::geom::Point tmp11 = ::openfl::geom::Point_obj::__new(null(),null());		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(1698)
		::haxegon::Gfx_obj::tpoint = tmp11;
		HX_STACK_LINE(1699)
		::openfl::display::BitmapData tmp12 = ::openfl::display::BitmapData_obj::__new((int)1,(int)1,true,null());		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(1699)
		::haxegon::Gfx_obj::tbuffer = tmp12;
		HX_STACK_LINE(1700)
		::openfl::geom::ColorTransform tmp13 = ::openfl::geom::ColorTransform_obj::__new((int)0,(int)0,(int)0,(int)1,(int)255,(int)255,(int)255,(int)1);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(1700)
		::haxegon::Gfx_obj::ct = tmp13;
		HX_STACK_LINE(1701)
		::openfl::geom::ColorTransform tmp14 = ::openfl::geom::ColorTransform_obj::__new(null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(1701)
		::haxegon::Gfx_obj::alphact = tmp14;
		HX_STACK_LINE(1702)
		::haxegon::Gfx_obj::hslval->push(((Float)0.0));
		HX_STACK_LINE(1702)
		::haxegon::Gfx_obj::hslval->push(((Float)0.0));
		HX_STACK_LINE(1702)
		::haxegon::Gfx_obj::hslval->push(((Float)0.0));
		HX_STACK_LINE(1704)
		::openfl::display::BitmapData tmp15 = ::haxegon::Gfx_obj::backbuffer;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(1704)
		bool tmp16 = (tmp15 != null());		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(1704)
		if ((tmp16)){
			HX_STACK_LINE(1704)
			::openfl::display::BitmapData tmp17 = ::haxegon::Gfx_obj::backbuffer;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(1704)
			tmp17->dispose();
		}
		HX_STACK_LINE(1708)
		int tmp17 = ::haxegon::Gfx_obj::screenwidth;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(1708)
		int tmp18 = ::haxegon::Gfx_obj::screenheight;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(1708)
		::openfl::display::BitmapData tmp19 = ::openfl::display::BitmapData_obj::__new(tmp17,tmp18,false,(int)0);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(1708)
		::haxegon::Gfx_obj::backbuffer = tmp19;
		HX_STACK_LINE(1710)
		::openfl::display::BitmapData tmp20 = ::haxegon::Gfx_obj::backbuffer;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(1710)
		::haxegon::Gfx_obj::drawto = tmp20;
		HX_STACK_LINE(1711)
		::haxegon::Gfx_obj::drawingtoscreen = true;
		HX_STACK_LINE(1713)
		::openfl::display::BitmapData tmp21 = ::haxegon::Gfx_obj::backbuffer;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(1713)
		::openfl::display::Bitmap tmp22 = ::openfl::display::Bitmap_obj::__new(tmp21,null(),null());		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(1713)
		::haxegon::Gfx_obj::screen = tmp22;
		HX_STACK_LINE(1714)
		::openfl::display::Bitmap tmp23 = ::haxegon::Gfx_obj::screen;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(1714)
		tmp23->smoothing = false;
		HX_STACK_LINE(1715)
		::openfl::display::Bitmap tmp24 = ::haxegon::Gfx_obj::screen;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(1715)
		int tmp25 = ::haxegon::Gfx_obj::screenwidth;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(1715)
		int tmp26 = scale;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(1715)
		int tmp27 = (tmp25 * tmp26);		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(1715)
		tmp24->set_width(tmp27);
		HX_STACK_LINE(1716)
		::openfl::display::Bitmap tmp28 = ::haxegon::Gfx_obj::screen;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(1716)
		int tmp29 = ::haxegon::Gfx_obj::screenheight;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(1716)
		int tmp30 = scale;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(1716)
		int tmp31 = (tmp29 * tmp30);		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(1716)
		tmp28->set_height(tmp31);
		HX_STACK_LINE(1718)
		::haxegon::Gfx_obj::fullscreen = false;
		HX_STACK_LINE(1719)
		::haxegon::Debug_obj::showtest = false;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Gfx_obj,initgfx,(void))

Void Gfx_obj::settrect( Float x,Float y,Float w,Float h){
{
		HX_STACK_FRAME("haxegon.Gfx","settrect",0xe89552b9,"haxegon.Gfx.settrect","haxegon/Gfx.hx",1723,0xa6405f94)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(w,"w")
		HX_STACK_ARG(h,"h")
		HX_STACK_LINE(1724)
		::openfl::geom::Rectangle tmp = ::haxegon::Gfx_obj::trect;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1724)
		tmp->x = x;
		HX_STACK_LINE(1725)
		::openfl::geom::Rectangle tmp1 = ::haxegon::Gfx_obj::trect;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1725)
		tmp1->y = y;
		HX_STACK_LINE(1726)
		::openfl::geom::Rectangle tmp2 = ::haxegon::Gfx_obj::trect;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1726)
		tmp2->width = w;
		HX_STACK_LINE(1727)
		::openfl::geom::Rectangle tmp3 = ::haxegon::Gfx_obj::trect;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1727)
		tmp3->height = h;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Gfx_obj,settrect,(void))

Void Gfx_obj::settpoint( Float x,Float y){
{
		HX_STACK_FRAME("haxegon.Gfx","settpoint",0x79e6911b,"haxegon.Gfx.settpoint","haxegon/Gfx.hx",1731,0xa6405f94)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(1732)
		::openfl::geom::Point tmp = ::haxegon::Gfx_obj::tpoint;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1732)
		tmp->x = x;
		HX_STACK_LINE(1733)
		::openfl::geom::Point tmp1 = ::haxegon::Gfx_obj::tpoint;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1733)
		tmp1->y = y;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Gfx_obj,settpoint,(void))

Array< ::Dynamic > Gfx_obj::tiles;

::haxe::ds::StringMap Gfx_obj::tilesetindex;

int Gfx_obj::currenttileset;

Array< ::Dynamic > Gfx_obj::animations;

int Gfx_obj::animationnum;

::haxe::ds::StringMap Gfx_obj::animationindex;

Array< ::Dynamic > Gfx_obj::images;

int Gfx_obj::imagenum;

::openfl::geom::ColorTransform Gfx_obj::ct;

::openfl::geom::ColorTransform Gfx_obj::alphact;

::openfl::geom::Rectangle Gfx_obj::images_rect;

::openfl::geom::Point Gfx_obj::tl;

::openfl::geom::Rectangle Gfx_obj::trect;

::openfl::geom::Point Gfx_obj::tpoint;

::openfl::display::BitmapData Gfx_obj::tbuffer;

::haxe::ds::StringMap Gfx_obj::imageindex;

bool Gfx_obj::transform;

bool Gfx_obj::coltransform;

Float Gfx_obj::imagerotate;

Float Gfx_obj::imagerotatexpivot;

Float Gfx_obj::imagerotateypivot;

Float Gfx_obj::imagexscale;

Float Gfx_obj::imageyscale;

Float Gfx_obj::imagescalexpivot;

Float Gfx_obj::imagescaleypivot;

Float Gfx_obj::imagealphamult;

Float Gfx_obj::imageredmult;

Float Gfx_obj::imagegreenmult;

Float Gfx_obj::imagebluemult;

Float Gfx_obj::imageredadd;

Float Gfx_obj::imagegreenadd;

Float Gfx_obj::imageblueadd;

int Gfx_obj::tempframe;

Float Gfx_obj::tempxalign;

Float Gfx_obj::tempyalign;

Float Gfx_obj::temprotate;

bool Gfx_obj::changecolours;

::String Gfx_obj::oldtileset;

Float Gfx_obj::tx;

Float Gfx_obj::ty;

Float Gfx_obj::tx2;

Float Gfx_obj::ty2;

::openfl::display::BitmapData Gfx_obj::transparentpixel;

Float Gfx_obj::_linethickness;

::openfl::display::BitmapData Gfx_obj::buffer;

::openfl::display::BitmapData Gfx_obj::temptile;

::openfl::display::Bitmap Gfx_obj::screen;

::openfl::display::Shape Gfx_obj::tempshape;

::openfl::geom::Matrix Gfx_obj::shapematrix;

int Gfx_obj::alphamult;

::openfl::display::Stage Gfx_obj::gfxstage;

Array< Float > Gfx_obj::hslval;

bool Gfx_obj::initrun;

bool Gfx_obj::skiprender;

bool Gfx_obj::drawingtoscreen;


Gfx_obj::Gfx_obj()
{
}

bool Gfx_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"t1") ) { outValue = t1; return true;  }
		if (HX_FIELD_EQ(inName,"t2") ) { outValue = t2; return true;  }
		if (HX_FIELD_EQ(inName,"t3") ) { outValue = t3; return true;  }
		if (HX_FIELD_EQ(inName,"ct") ) { outValue = ct; return true;  }
		if (HX_FIELD_EQ(inName,"tl") ) { outValue = tl; return true;  }
		if (HX_FIELD_EQ(inName,"tx") ) { outValue = tx; return true;  }
		if (HX_FIELD_EQ(inName,"ty") ) { outValue = ty; return true;  }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"TOP") ) { outValue = TOP; return true;  }
		if (HX_FIELD_EQ(inName,"fps") ) { outValue = fps_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"rgb") ) { outValue = rgb_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"hsl") ) { outValue = hsl_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"tx2") ) { outValue = tx2; return true;  }
		if (HX_FIELD_EQ(inName,"ty2") ) { outValue = ty2; return true;  }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"LEFT") ) { outValue = LEFT; return true;  }
		if (HX_FIELD_EQ(inName,"init") ) { outValue = init_dyn(); return true;  }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"RIGHT") ) { outValue = RIGHT; return true;  }
		if (HX_FIELD_EQ(inName,"reset") ) { outValue = reset_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"scale") ) { outValue = scale_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"tiles") ) { outValue = tiles; return true;  }
		if (HX_FIELD_EQ(inName,"trect") ) { outValue = trect; return true;  }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"BOTTOM") ) { outValue = BOTTOM; return true;  }
		if (HX_FIELD_EQ(inName,"CENTER") ) { outValue = CENTER; return true;  }
		if (HX_FIELD_EQ(inName,"drawto") ) { outValue = drawto; return true;  }
		if (HX_FIELD_EQ(inName,"getred") ) { outValue = getred_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"gethue") ) { outValue = gethue_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"images") ) { outValue = images; return true;  }
		if (HX_FIELD_EQ(inName,"tpoint") ) { outValue = tpoint; return true;  }
		if (HX_FIELD_EQ(inName,"buffer") ) { outValue = buffer; return true;  }
		if (HX_FIELD_EQ(inName,"screen") ) { outValue = screen; return true;  }
		if (HX_FIELD_EQ(inName,"hslval") ) { outValue = hslval; return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"showfps") ) { outValue = showfps; return true;  }
		if (HX_FIELD_EQ(inName,"drawtri") ) { outValue = drawtri_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"filltri") ) { outValue = filltri_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"drawbox") ) { outValue = drawbox_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"fillbox") ) { outValue = fillbox_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getblue") ) { outValue = getblue_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"setzoom") ) { outValue = setzoom_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"initgfx") ) { outValue = initgfx_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"alphact") ) { outValue = alphact; return true;  }
		if (HX_FIELD_EQ(inName,"tbuffer") ) { outValue = tbuffer; return true;  }
		if (HX_FIELD_EQ(inName,"initrun") ) { outValue = initrun; return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"rotation") ) { outValue = rotation_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"copytile") ) { outValue = copytile_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"drawtile") ) { outValue = drawtile_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"drawline") ) { outValue = drawline_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getpixel") ) { outValue = getpixel_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"setpixel") ) { outValue = setpixel_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getgreen") ) { outValue = getgreen_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"settrect") ) { outValue = settrect_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"imagenum") ) { outValue = imagenum; return true;  }
		if (HX_FIELD_EQ(inName,"temptile") ) { outValue = temptile; return true;  }
		if (HX_FIELD_EQ(inName,"gfxstage") ) { outValue = gfxstage; return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"updatefps") ) { outValue = updatefps_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"loadtiles") ) { outValue = loadtiles_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"tilewidth") ) { outValue = tilewidth_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"loadimage") ) { outValue = loadimage_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"drawimage") ) { outValue = drawimage_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"settpoint") ) { outValue = settpoint_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"transform") ) { outValue = transform; return true;  }
		if (HX_FIELD_EQ(inName,"tempframe") ) { outValue = tempframe; return true;  }
		if (HX_FIELD_EQ(inName,"tempshape") ) { outValue = tempshape; return true;  }
		if (HX_FIELD_EQ(inName,"alphamult") ) { outValue = alphamult; return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"devicexres") ) { outValue = devicexres; return true;  }
		if (HX_FIELD_EQ(inName,"deviceyres") ) { outValue = deviceyres; return true;  }
		if (HX_FIELD_EQ(inName,"fullscreen") ) { outValue = fullscreen; return true;  }
		if (HX_FIELD_EQ(inName,"backbuffer") ) { outValue = backbuffer; return true;  }
		if (HX_FIELD_EQ(inName,"getscreenx") ) { outValue = getscreenx_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getscreeny") ) { outValue = getscreeny_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"render_fps") ) { outValue = render_fps; return true;  }
		if (HX_FIELD_EQ(inName,"update_fps") ) { outValue = update_fps; return true;  }
		if (HX_FIELD_EQ(inName,"imagealpha") ) { outValue = imagealpha_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"imagecolor") ) { outValue = imagecolor_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"tileheight") ) { outValue = tileheight_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"imagewidth") ) { outValue = imagewidth_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"drawtotile") ) { outValue = drawtotile_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"tilealignx") ) { outValue = tilealignx_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"tilealigny") ) { outValue = tilealigny_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"drawcircle") ) { outValue = drawcircle_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"fillcircle") ) { outValue = fillcircle_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"animations") ) { outValue = animations; return true;  }
		if (HX_FIELD_EQ(inName,"imageindex") ) { outValue = imageindex; return true;  }
		if (HX_FIELD_EQ(inName,"tempxalign") ) { outValue = tempxalign; return true;  }
		if (HX_FIELD_EQ(inName,"tempyalign") ) { outValue = tempyalign; return true;  }
		if (HX_FIELD_EQ(inName,"temprotate") ) { outValue = temprotate; return true;  }
		if (HX_FIELD_EQ(inName,"oldtileset") ) { outValue = oldtileset; return true;  }
		if (HX_FIELD_EQ(inName,"skiprender") ) { outValue = skiprender; return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"screenwidth") ) { outValue = screenwidth; return true;  }
		if (HX_FIELD_EQ(inName,"screenscale") ) { outValue = screenscale; return true;  }
		if (HX_FIELD_EQ(inName,"createtiles") ) { outValue = createtiles_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"createimage") ) { outValue = createimage_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"resizeimage") ) { outValue = resizeimage_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"imageheight") ) { outValue = imageheight_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"drawtoimage") ) { outValue = drawtoimage_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"imagealignx") ) { outValue = imagealignx_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"imagealigny") ) { outValue = imagealigny_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"drawhexagon") ) { outValue = drawhexagon_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"fillhexagon") ) { outValue = fillhexagon_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"clearscreen") ) { outValue = clearscreen_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"images_rect") ) { outValue = images_rect; return true;  }
		if (HX_FIELD_EQ(inName,"imagerotate") ) { outValue = imagerotate; return true;  }
		if (HX_FIELD_EQ(inName,"imagexscale") ) { outValue = imagexscale; return true;  }
		if (HX_FIELD_EQ(inName,"imageyscale") ) { outValue = imageyscale; return true;  }
		if (HX_FIELD_EQ(inName,"imageredadd") ) { outValue = imageredadd; return true;  }
		if (HX_FIELD_EQ(inName,"shapematrix") ) { outValue = shapematrix; return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"screenheight") ) { outValue = screenheight; return true;  }
		if (HX_FIELD_EQ(inName,"resizescreen") ) { outValue = resizescreen_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"drawtoscreen") ) { outValue = drawtoscreen_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"currentframe") ) { outValue = currentframe_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getlightness") ) { outValue = getlightness_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"tilesetindex") ) { outValue = tilesetindex; return true;  }
		if (HX_FIELD_EQ(inName,"animationnum") ) { outValue = animationnum; return true;  }
		if (HX_FIELD_EQ(inName,"coltransform") ) { outValue = coltransform; return true;  }
		if (HX_FIELD_EQ(inName,"imageredmult") ) { outValue = imageredmult; return true;  }
		if (HX_FIELD_EQ(inName,"imageblueadd") ) { outValue = imageblueadd; return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"setfullscreen") ) { outValue = setfullscreen_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"reset_ifclear") ) { outValue = reset_ifclear_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"changetileset") ) { outValue = changetileset_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"numberoftiles") ) { outValue = numberoftiles_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"addblanktiles") ) { outValue = addblanktiles_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"stopanimation") ) { outValue = stopanimation_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"drawanimation") ) { outValue = drawanimation_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"linethickness") ) { if (inCallProp == hx::paccAlways) { outValue = get_linethickness(); return true; } }
		if (HX_FIELD_EQ(inName,"getsaturation") ) { outValue = getsaturation_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"imagebluemult") ) { outValue = imagebluemult; return true;  }
		if (HX_FIELD_EQ(inName,"imagegreenadd") ) { outValue = imagegreenadd; return true;  }
		if (HX_FIELD_EQ(inName,"changecolours") ) { outValue = changecolours; return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"screenwidthmid") ) { outValue = screenwidthmid; return true;  }
		if (HX_FIELD_EQ(inName,"render_fps_max") ) { outValue = render_fps_max; return true;  }
		if (HX_FIELD_EQ(inName,"update_fps_max") ) { outValue = update_fps_max; return true;  }
		if (HX_FIELD_EQ(inName,"currenttileset") ) { outValue = currenttileset; return true;  }
		if (HX_FIELD_EQ(inName,"animationindex") ) { outValue = animationindex; return true;  }
		if (HX_FIELD_EQ(inName,"imagealphamult") ) { outValue = imagealphamult; return true;  }
		if (HX_FIELD_EQ(inName,"imagegreenmult") ) { outValue = imagegreenmult; return true;  }
		if (HX_FIELD_EQ(inName,"_linethickness") ) { outValue = _linethickness; return true;  }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"screenheightmid") ) { outValue = screenheightmid; return true;  }
		if (HX_FIELD_EQ(inName,"defineanimation") ) { outValue = defineanimation_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"drawingtoscreen") ) { outValue = drawingtoscreen; return true;  }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"tilealignontilex") ) { outValue = tilealignontilex_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"tilealignontiley") ) { outValue = tilealignontiley_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"imagescalexpivot") ) { outValue = imagescalexpivot; return true;  }
		if (HX_FIELD_EQ(inName,"imagescaleypivot") ) { outValue = imagescaleypivot; return true;  }
		if (HX_FIELD_EQ(inName,"transparentpixel") ) { outValue = transparentpixel; return true;  }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"grabtilefromimage") ) { outValue = grabtilefromimage_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_linethickness") ) { outValue = get_linethickness_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"set_linethickness") ) { outValue = set_linethickness_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"imagerotatexpivot") ) { outValue = imagerotatexpivot; return true;  }
		if (HX_FIELD_EQ(inName,"imagerotateypivot") ) { outValue = imagerotateypivot; return true;  }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"currenttilesetname") ) { outValue = currenttilesetname; return true;  }
		if (HX_FIELD_EQ(inName,"imagealignonimagex") ) { outValue = imagealignonimagex_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"imagealignonimagey") ) { outValue = imagealignonimagey_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"grabtilefromscreen") ) { outValue = grabtilefromscreen_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"grabimagefromimage") ) { outValue = grabimagefromimage_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"updategraphicsmode") ) { outValue = updategraphicsmode_dyn(); return true;  }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"grabimagefromscreen") ) { outValue = grabimagefromscreen_dyn(); return true;  }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"clearscreeneachframe") ) { outValue = clearscreeneachframe; return true;  }
	}
	return false;
}

bool Gfx_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"t1") ) { t1=ioValue.Cast< Float >(); return true; }
		if (HX_FIELD_EQ(inName,"t2") ) { t2=ioValue.Cast< Float >(); return true; }
		if (HX_FIELD_EQ(inName,"t3") ) { t3=ioValue.Cast< Float >(); return true; }
		if (HX_FIELD_EQ(inName,"ct") ) { ct=ioValue.Cast< ::openfl::geom::ColorTransform >(); return true; }
		if (HX_FIELD_EQ(inName,"tl") ) { tl=ioValue.Cast< ::openfl::geom::Point >(); return true; }
		if (HX_FIELD_EQ(inName,"tx") ) { tx=ioValue.Cast< Float >(); return true; }
		if (HX_FIELD_EQ(inName,"ty") ) { ty=ioValue.Cast< Float >(); return true; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"TOP") ) { TOP=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"tx2") ) { tx2=ioValue.Cast< Float >(); return true; }
		if (HX_FIELD_EQ(inName,"ty2") ) { ty2=ioValue.Cast< Float >(); return true; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"LEFT") ) { LEFT=ioValue.Cast< int >(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"RIGHT") ) { RIGHT=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"tiles") ) { tiles=ioValue.Cast< Array< ::Dynamic > >(); return true; }
		if (HX_FIELD_EQ(inName,"trect") ) { trect=ioValue.Cast< ::openfl::geom::Rectangle >(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"BOTTOM") ) { BOTTOM=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"CENTER") ) { CENTER=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"drawto") ) { drawto=ioValue.Cast< ::openfl::display::BitmapData >(); return true; }
		if (HX_FIELD_EQ(inName,"images") ) { images=ioValue.Cast< Array< ::Dynamic > >(); return true; }
		if (HX_FIELD_EQ(inName,"tpoint") ) { tpoint=ioValue.Cast< ::openfl::geom::Point >(); return true; }
		if (HX_FIELD_EQ(inName,"buffer") ) { buffer=ioValue.Cast< ::openfl::display::BitmapData >(); return true; }
		if (HX_FIELD_EQ(inName,"screen") ) { screen=ioValue.Cast< ::openfl::display::Bitmap >(); return true; }
		if (HX_FIELD_EQ(inName,"hslval") ) { hslval=ioValue.Cast< Array< Float > >(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"showfps") ) { showfps=ioValue.Cast< bool >(); return true; }
		if (HX_FIELD_EQ(inName,"alphact") ) { alphact=ioValue.Cast< ::openfl::geom::ColorTransform >(); return true; }
		if (HX_FIELD_EQ(inName,"tbuffer") ) { tbuffer=ioValue.Cast< ::openfl::display::BitmapData >(); return true; }
		if (HX_FIELD_EQ(inName,"initrun") ) { initrun=ioValue.Cast< bool >(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"imagenum") ) { imagenum=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"temptile") ) { temptile=ioValue.Cast< ::openfl::display::BitmapData >(); return true; }
		if (HX_FIELD_EQ(inName,"gfxstage") ) { gfxstage=ioValue.Cast< ::openfl::display::Stage >(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"transform") ) { transform=ioValue.Cast< bool >(); return true; }
		if (HX_FIELD_EQ(inName,"tempframe") ) { tempframe=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"tempshape") ) { tempshape=ioValue.Cast< ::openfl::display::Shape >(); return true; }
		if (HX_FIELD_EQ(inName,"alphamult") ) { alphamult=ioValue.Cast< int >(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"devicexres") ) { devicexres=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"deviceyres") ) { deviceyres=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"fullscreen") ) { fullscreen=ioValue.Cast< bool >(); return true; }
		if (HX_FIELD_EQ(inName,"backbuffer") ) { backbuffer=ioValue.Cast< ::openfl::display::BitmapData >(); return true; }
		if (HX_FIELD_EQ(inName,"render_fps") ) { render_fps=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"update_fps") ) { update_fps=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"animations") ) { animations=ioValue.Cast< Array< ::Dynamic > >(); return true; }
		if (HX_FIELD_EQ(inName,"imageindex") ) { imageindex=ioValue.Cast< ::haxe::ds::StringMap >(); return true; }
		if (HX_FIELD_EQ(inName,"tempxalign") ) { tempxalign=ioValue.Cast< Float >(); return true; }
		if (HX_FIELD_EQ(inName,"tempyalign") ) { tempyalign=ioValue.Cast< Float >(); return true; }
		if (HX_FIELD_EQ(inName,"temprotate") ) { temprotate=ioValue.Cast< Float >(); return true; }
		if (HX_FIELD_EQ(inName,"oldtileset") ) { oldtileset=ioValue.Cast< ::String >(); return true; }
		if (HX_FIELD_EQ(inName,"skiprender") ) { skiprender=ioValue.Cast< bool >(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"screenwidth") ) { screenwidth=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"screenscale") ) { screenscale=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"images_rect") ) { images_rect=ioValue.Cast< ::openfl::geom::Rectangle >(); return true; }
		if (HX_FIELD_EQ(inName,"imagerotate") ) { imagerotate=ioValue.Cast< Float >(); return true; }
		if (HX_FIELD_EQ(inName,"imagexscale") ) { imagexscale=ioValue.Cast< Float >(); return true; }
		if (HX_FIELD_EQ(inName,"imageyscale") ) { imageyscale=ioValue.Cast< Float >(); return true; }
		if (HX_FIELD_EQ(inName,"imageredadd") ) { imageredadd=ioValue.Cast< Float >(); return true; }
		if (HX_FIELD_EQ(inName,"shapematrix") ) { shapematrix=ioValue.Cast< ::openfl::geom::Matrix >(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"screenheight") ) { screenheight=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"tilesetindex") ) { tilesetindex=ioValue.Cast< ::haxe::ds::StringMap >(); return true; }
		if (HX_FIELD_EQ(inName,"animationnum") ) { animationnum=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"coltransform") ) { coltransform=ioValue.Cast< bool >(); return true; }
		if (HX_FIELD_EQ(inName,"imageredmult") ) { imageredmult=ioValue.Cast< Float >(); return true; }
		if (HX_FIELD_EQ(inName,"imageblueadd") ) { imageblueadd=ioValue.Cast< Float >(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"linethickness") ) { if (inCallProp == hx::paccAlways)  ioValue = set_linethickness(ioValue); }
		if (HX_FIELD_EQ(inName,"imagebluemult") ) { imagebluemult=ioValue.Cast< Float >(); return true; }
		if (HX_FIELD_EQ(inName,"imagegreenadd") ) { imagegreenadd=ioValue.Cast< Float >(); return true; }
		if (HX_FIELD_EQ(inName,"changecolours") ) { changecolours=ioValue.Cast< bool >(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"screenwidthmid") ) { screenwidthmid=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"render_fps_max") ) { render_fps_max=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"update_fps_max") ) { update_fps_max=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"currenttileset") ) { currenttileset=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"animationindex") ) { animationindex=ioValue.Cast< ::haxe::ds::StringMap >(); return true; }
		if (HX_FIELD_EQ(inName,"imagealphamult") ) { imagealphamult=ioValue.Cast< Float >(); return true; }
		if (HX_FIELD_EQ(inName,"imagegreenmult") ) { imagegreenmult=ioValue.Cast< Float >(); return true; }
		if (HX_FIELD_EQ(inName,"_linethickness") ) { _linethickness=ioValue.Cast< Float >(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"screenheightmid") ) { screenheightmid=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"drawingtoscreen") ) { drawingtoscreen=ioValue.Cast< bool >(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"imagescalexpivot") ) { imagescalexpivot=ioValue.Cast< Float >(); return true; }
		if (HX_FIELD_EQ(inName,"imagescaleypivot") ) { imagescaleypivot=ioValue.Cast< Float >(); return true; }
		if (HX_FIELD_EQ(inName,"transparentpixel") ) { transparentpixel=ioValue.Cast< ::openfl::display::BitmapData >(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"imagerotatexpivot") ) { imagerotatexpivot=ioValue.Cast< Float >(); return true; }
		if (HX_FIELD_EQ(inName,"imagerotateypivot") ) { imagerotateypivot=ioValue.Cast< Float >(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"currenttilesetname") ) { currenttilesetname=ioValue.Cast< ::String >(); return true; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"clearscreeneachframe") ) { clearscreeneachframe=ioValue.Cast< bool >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &Gfx_obj::LEFT,HX_HCSTRING("LEFT","\x07","\xd0","\x70","\x32")},
	{hx::fsInt,(void *) &Gfx_obj::RIGHT,HX_HCSTRING("RIGHT","\xbc","\x43","\x52","\x67")},
	{hx::fsInt,(void *) &Gfx_obj::TOP,HX_HCSTRING("TOP","\x75","\x02","\x40","\x00")},
	{hx::fsInt,(void *) &Gfx_obj::BOTTOM,HX_HCSTRING("BOTTOM","\xeb","\x92","\xfb","\x17")},
	{hx::fsInt,(void *) &Gfx_obj::CENTER,HX_HCSTRING("CENTER","\xd5","\xd1","\x5d","\xb8")},
	{hx::fsInt,(void *) &Gfx_obj::screenwidth,HX_HCSTRING("screenwidth","\x1a","\x93","\xba","\xee")},
	{hx::fsInt,(void *) &Gfx_obj::screenheight,HX_HCSTRING("screenheight","\x53","\x9c","\xd5","\xaa")},
	{hx::fsInt,(void *) &Gfx_obj::screenwidthmid,HX_HCSTRING("screenwidthmid","\xae","\xea","\x65","\xbd")},
	{hx::fsInt,(void *) &Gfx_obj::screenheightmid,HX_HCSTRING("screenheightmid","\x15","\xab","\xc3","\x5c")},
	{hx::fsBool,(void *) &Gfx_obj::clearscreeneachframe,HX_HCSTRING("clearscreeneachframe","\xb3","\xe2","\x89","\x91")},
	{hx::fsInt,(void *) &Gfx_obj::screenscale,HX_HCSTRING("screenscale","\x9e","\xab","\x26","\x9d")},
	{hx::fsInt,(void *) &Gfx_obj::devicexres,HX_HCSTRING("devicexres","\x7e","\x53","\x59","\xce")},
	{hx::fsInt,(void *) &Gfx_obj::deviceyres,HX_HCSTRING("deviceyres","\x1d","\x8a","\x02","\xcf")},
	{hx::fsBool,(void *) &Gfx_obj::fullscreen,HX_HCSTRING("fullscreen","\x3b","\x3a","\xb4","\xf9")},
	{hx::fsString,(void *) &Gfx_obj::currenttilesetname,HX_HCSTRING("currenttilesetname","\xe6","\xe9","\x26","\x89")},
	{hx::fsObject /*::openfl::display::BitmapData*/ ,(void *) &Gfx_obj::backbuffer,HX_HCSTRING("backbuffer","\x67","\x2e","\x8a","\xda")},
	{hx::fsObject /*::openfl::display::BitmapData*/ ,(void *) &Gfx_obj::drawto,HX_HCSTRING("drawto","\x7f","\x9a","\xd6","\xdf")},
	{hx::fsBool,(void *) &Gfx_obj::showfps,HX_HCSTRING("showfps","\x0c","\x6f","\xb2","\x7b")},
	{hx::fsInt,(void *) &Gfx_obj::render_fps,HX_HCSTRING("render_fps","\x40","\xdb","\x49","\xf1")},
	{hx::fsInt,(void *) &Gfx_obj::render_fps_max,HX_HCSTRING("render_fps_max","\xe5","\xca","\x96","\xa3")},
	{hx::fsInt,(void *) &Gfx_obj::update_fps,HX_HCSTRING("update_fps","\x73","\xcb","\xf4","\x0c")},
	{hx::fsInt,(void *) &Gfx_obj::update_fps_max,HX_HCSTRING("update_fps_max","\x98","\x50","\xe9","\x64")},
	{hx::fsFloat,(void *) &Gfx_obj::t1,HX_HCSTRING("t1","\x3d","\x65","\x00","\x00")},
	{hx::fsFloat,(void *) &Gfx_obj::t2,HX_HCSTRING("t2","\x3e","\x65","\x00","\x00")},
	{hx::fsFloat,(void *) &Gfx_obj::t3,HX_HCSTRING("t3","\x3f","\x65","\x00","\x00")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(void *) &Gfx_obj::tiles,HX_HCSTRING("tiles","\x85","\xfd","\x34","\x10")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(void *) &Gfx_obj::tilesetindex,HX_HCSTRING("tilesetindex","\x5e","\x3d","\xbc","\x37")},
	{hx::fsInt,(void *) &Gfx_obj::currenttileset,HX_HCSTRING("currenttileset","\x1b","\xce","\xd6","\x85")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(void *) &Gfx_obj::animations,HX_HCSTRING("animations","\xef","\x34","\x1c","\x83")},
	{hx::fsInt,(void *) &Gfx_obj::animationnum,HX_HCSTRING("animationnum","\xc2","\x29","\x43","\xaa")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(void *) &Gfx_obj::animationindex,HX_HCSTRING("animationindex","\x8e","\xbd","\x0a","\x3b")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(void *) &Gfx_obj::images,HX_HCSTRING("images","\xb8","\x50","\x92","\xfe")},
	{hx::fsInt,(void *) &Gfx_obj::imagenum,HX_HCSTRING("imagenum","\xcb","\x89","\x4e","\x84")},
	{hx::fsObject /*::openfl::geom::ColorTransform*/ ,(void *) &Gfx_obj::ct,HX_HCSTRING("ct","\xb1","\x56","\x00","\x00")},
	{hx::fsObject /*::openfl::geom::ColorTransform*/ ,(void *) &Gfx_obj::alphact,HX_HCSTRING("alphact","\x8f","\x11","\x16","\xb2")},
	{hx::fsObject /*::openfl::geom::Rectangle*/ ,(void *) &Gfx_obj::images_rect,HX_HCSTRING("images_rect","\x4b","\x7d","\x6e","\x0d")},
	{hx::fsObject /*::openfl::geom::Point*/ ,(void *) &Gfx_obj::tl,HX_HCSTRING("tl","\x78","\x65","\x00","\x00")},
	{hx::fsObject /*::openfl::geom::Rectangle*/ ,(void *) &Gfx_obj::trect,HX_HCSTRING("trect","\x98","\x97","\x22","\x16")},
	{hx::fsObject /*::openfl::geom::Point*/ ,(void *) &Gfx_obj::tpoint,HX_HCSTRING("tpoint","\x5c","\x8f","\xf5","\x27")},
	{hx::fsObject /*::openfl::display::BitmapData*/ ,(void *) &Gfx_obj::tbuffer,HX_HCSTRING("tbuffer","\x74","\x8c","\x4e","\xa8")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(void *) &Gfx_obj::imageindex,HX_HCSTRING("imageindex","\xd7","\xf1","\xb4","\x36")},
	{hx::fsBool,(void *) &Gfx_obj::transform,HX_HCSTRING("transform","\x6c","\x2d","\x93","\x45")},
	{hx::fsBool,(void *) &Gfx_obj::coltransform,HX_HCSTRING("coltransform","\x2c","\xa5","\x75","\xb2")},
	{hx::fsFloat,(void *) &Gfx_obj::imagerotate,HX_HCSTRING("imagerotate","\xf6","\xdb","\xcb","\xde")},
	{hx::fsFloat,(void *) &Gfx_obj::imagerotatexpivot,HX_HCSTRING("imagerotatexpivot","\xc0","\xcf","\xb7","\x18")},
	{hx::fsFloat,(void *) &Gfx_obj::imagerotateypivot,HX_HCSTRING("imagerotateypivot","\x1f","\x2c","\x13","\x7f")},
	{hx::fsFloat,(void *) &Gfx_obj::imagexscale,HX_HCSTRING("imagexscale","\xad","\xb0","\x4d","\x87")},
	{hx::fsFloat,(void *) &Gfx_obj::imageyscale,HX_HCSTRING("imageyscale","\x0c","\x0d","\xa9","\xed")},
	{hx::fsFloat,(void *) &Gfx_obj::imagescalexpivot,HX_HCSTRING("imagescalexpivot","\xd9","\x21","\x6e","\x5b")},
	{hx::fsFloat,(void *) &Gfx_obj::imagescaleypivot,HX_HCSTRING("imagescaleypivot","\x38","\x7e","\xc9","\xc1")},
	{hx::fsFloat,(void *) &Gfx_obj::imagealphamult,HX_HCSTRING("imagealphamult","\x93","\xb3","\xf9","\x23")},
	{hx::fsFloat,(void *) &Gfx_obj::imageredmult,HX_HCSTRING("imageredmult","\xc6","\x0f","\x89","\xe5")},
	{hx::fsFloat,(void *) &Gfx_obj::imagegreenmult,HX_HCSTRING("imagegreenmult","\x78","\x31","\x88","\xec")},
	{hx::fsFloat,(void *) &Gfx_obj::imagebluemult,HX_HCSTRING("imagebluemult","\xe5","\x71","\xed","\xad")},
	{hx::fsFloat,(void *) &Gfx_obj::imageredadd,HX_HCSTRING("imageredadd","\x0b","\x97","\x36","\x12")},
	{hx::fsFloat,(void *) &Gfx_obj::imagegreenadd,HX_HCSTRING("imagegreenadd","\x99","\xb1","\x4e","\x60")},
	{hx::fsFloat,(void *) &Gfx_obj::imageblueadd,HX_HCSTRING("imageblueadd","\xcc","\x1d","\x28","\xdd")},
	{hx::fsInt,(void *) &Gfx_obj::tempframe,HX_HCSTRING("tempframe","\x99","\x0c","\x6a","\xa9")},
	{hx::fsFloat,(void *) &Gfx_obj::tempxalign,HX_HCSTRING("tempxalign","\x61","\xed","\x3f","\x03")},
	{hx::fsFloat,(void *) &Gfx_obj::tempyalign,HX_HCSTRING("tempyalign","\xc0","\x49","\x9b","\x69")},
	{hx::fsFloat,(void *) &Gfx_obj::temprotate,HX_HCSTRING("temprotate","\x6f","\x90","\xfb","\xb1")},
	{hx::fsBool,(void *) &Gfx_obj::changecolours,HX_HCSTRING("changecolours","\x37","\xf7","\xeb","\x82")},
	{hx::fsString,(void *) &Gfx_obj::oldtileset,HX_HCSTRING("oldtileset","\x6d","\x5b","\x6a","\xfb")},
	{hx::fsFloat,(void *) &Gfx_obj::tx,HX_HCSTRING("tx","\x84","\x65","\x00","\x00")},
	{hx::fsFloat,(void *) &Gfx_obj::ty,HX_HCSTRING("ty","\x85","\x65","\x00","\x00")},
	{hx::fsFloat,(void *) &Gfx_obj::tx2,HX_HCSTRING("tx2","\x2e","\x6e","\x58","\x00")},
	{hx::fsFloat,(void *) &Gfx_obj::ty2,HX_HCSTRING("ty2","\x0d","\x6f","\x58","\x00")},
	{hx::fsObject /*::openfl::display::BitmapData*/ ,(void *) &Gfx_obj::transparentpixel,HX_HCSTRING("transparentpixel","\xf4","\x51","\x71","\x9f")},
	{hx::fsFloat,(void *) &Gfx_obj::_linethickness,HX_HCSTRING("_linethickness","\x41","\x2b","\x65","\x3a")},
	{hx::fsObject /*::openfl::display::BitmapData*/ ,(void *) &Gfx_obj::buffer,HX_HCSTRING("buffer","\x00","\xbd","\x94","\xd0")},
	{hx::fsObject /*::openfl::display::BitmapData*/ ,(void *) &Gfx_obj::temptile,HX_HCSTRING("temptile","\x42","\xa8","\x97","\xb1")},
	{hx::fsObject /*::openfl::display::Bitmap*/ ,(void *) &Gfx_obj::screen,HX_HCSTRING("screen","\x6c","\x3b","\x5d","\x47")},
	{hx::fsObject /*::openfl::display::Shape*/ ,(void *) &Gfx_obj::tempshape,HX_HCSTRING("tempshape","\x8d","\x77","\x03","\x1f")},
	{hx::fsObject /*::openfl::geom::Matrix*/ ,(void *) &Gfx_obj::shapematrix,HX_HCSTRING("shapematrix","\x22","\xa8","\x75","\x19")},
	{hx::fsInt,(void *) &Gfx_obj::alphamult,HX_HCSTRING("alphamult","\x4e","\x16","\x86","\xf7")},
	{hx::fsObject /*::openfl::display::Stage*/ ,(void *) &Gfx_obj::gfxstage,HX_HCSTRING("gfxstage","\xa5","\xf2","\xb7","\x13")},
	{hx::fsObject /*Array< Float >*/ ,(void *) &Gfx_obj::hslval,HX_HCSTRING("hslval","\x80","\x26","\xef","\x13")},
	{hx::fsBool,(void *) &Gfx_obj::initrun,HX_HCSTRING("initrun","\x3b","\xf6","\xa5","\xcb")},
	{hx::fsBool,(void *) &Gfx_obj::skiprender,HX_HCSTRING("skiprender","\x15","\xeb","\x98","\x38")},
	{hx::fsBool,(void *) &Gfx_obj::drawingtoscreen,HX_HCSTRING("drawingtoscreen","\x85","\x38","\xc7","\x75")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Gfx_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Gfx_obj::LEFT,"LEFT");
	HX_MARK_MEMBER_NAME(Gfx_obj::RIGHT,"RIGHT");
	HX_MARK_MEMBER_NAME(Gfx_obj::TOP,"TOP");
	HX_MARK_MEMBER_NAME(Gfx_obj::BOTTOM,"BOTTOM");
	HX_MARK_MEMBER_NAME(Gfx_obj::CENTER,"CENTER");
	HX_MARK_MEMBER_NAME(Gfx_obj::screenwidth,"screenwidth");
	HX_MARK_MEMBER_NAME(Gfx_obj::screenheight,"screenheight");
	HX_MARK_MEMBER_NAME(Gfx_obj::screenwidthmid,"screenwidthmid");
	HX_MARK_MEMBER_NAME(Gfx_obj::screenheightmid,"screenheightmid");
	HX_MARK_MEMBER_NAME(Gfx_obj::clearscreeneachframe,"clearscreeneachframe");
	HX_MARK_MEMBER_NAME(Gfx_obj::screenscale,"screenscale");
	HX_MARK_MEMBER_NAME(Gfx_obj::devicexres,"devicexres");
	HX_MARK_MEMBER_NAME(Gfx_obj::deviceyres,"deviceyres");
	HX_MARK_MEMBER_NAME(Gfx_obj::fullscreen,"fullscreen");
	HX_MARK_MEMBER_NAME(Gfx_obj::currenttilesetname,"currenttilesetname");
	HX_MARK_MEMBER_NAME(Gfx_obj::backbuffer,"backbuffer");
	HX_MARK_MEMBER_NAME(Gfx_obj::drawto,"drawto");
	HX_MARK_MEMBER_NAME(Gfx_obj::showfps,"showfps");
	HX_MARK_MEMBER_NAME(Gfx_obj::render_fps,"render_fps");
	HX_MARK_MEMBER_NAME(Gfx_obj::render_fps_max,"render_fps_max");
	HX_MARK_MEMBER_NAME(Gfx_obj::update_fps,"update_fps");
	HX_MARK_MEMBER_NAME(Gfx_obj::update_fps_max,"update_fps_max");
	HX_MARK_MEMBER_NAME(Gfx_obj::t1,"t1");
	HX_MARK_MEMBER_NAME(Gfx_obj::t2,"t2");
	HX_MARK_MEMBER_NAME(Gfx_obj::t3,"t3");
	HX_MARK_MEMBER_NAME(Gfx_obj::tiles,"tiles");
	HX_MARK_MEMBER_NAME(Gfx_obj::tilesetindex,"tilesetindex");
	HX_MARK_MEMBER_NAME(Gfx_obj::currenttileset,"currenttileset");
	HX_MARK_MEMBER_NAME(Gfx_obj::animations,"animations");
	HX_MARK_MEMBER_NAME(Gfx_obj::animationnum,"animationnum");
	HX_MARK_MEMBER_NAME(Gfx_obj::animationindex,"animationindex");
	HX_MARK_MEMBER_NAME(Gfx_obj::images,"images");
	HX_MARK_MEMBER_NAME(Gfx_obj::imagenum,"imagenum");
	HX_MARK_MEMBER_NAME(Gfx_obj::ct,"ct");
	HX_MARK_MEMBER_NAME(Gfx_obj::alphact,"alphact");
	HX_MARK_MEMBER_NAME(Gfx_obj::images_rect,"images_rect");
	HX_MARK_MEMBER_NAME(Gfx_obj::tl,"tl");
	HX_MARK_MEMBER_NAME(Gfx_obj::trect,"trect");
	HX_MARK_MEMBER_NAME(Gfx_obj::tpoint,"tpoint");
	HX_MARK_MEMBER_NAME(Gfx_obj::tbuffer,"tbuffer");
	HX_MARK_MEMBER_NAME(Gfx_obj::imageindex,"imageindex");
	HX_MARK_MEMBER_NAME(Gfx_obj::transform,"transform");
	HX_MARK_MEMBER_NAME(Gfx_obj::coltransform,"coltransform");
	HX_MARK_MEMBER_NAME(Gfx_obj::imagerotate,"imagerotate");
	HX_MARK_MEMBER_NAME(Gfx_obj::imagerotatexpivot,"imagerotatexpivot");
	HX_MARK_MEMBER_NAME(Gfx_obj::imagerotateypivot,"imagerotateypivot");
	HX_MARK_MEMBER_NAME(Gfx_obj::imagexscale,"imagexscale");
	HX_MARK_MEMBER_NAME(Gfx_obj::imageyscale,"imageyscale");
	HX_MARK_MEMBER_NAME(Gfx_obj::imagescalexpivot,"imagescalexpivot");
	HX_MARK_MEMBER_NAME(Gfx_obj::imagescaleypivot,"imagescaleypivot");
	HX_MARK_MEMBER_NAME(Gfx_obj::imagealphamult,"imagealphamult");
	HX_MARK_MEMBER_NAME(Gfx_obj::imageredmult,"imageredmult");
	HX_MARK_MEMBER_NAME(Gfx_obj::imagegreenmult,"imagegreenmult");
	HX_MARK_MEMBER_NAME(Gfx_obj::imagebluemult,"imagebluemult");
	HX_MARK_MEMBER_NAME(Gfx_obj::imageredadd,"imageredadd");
	HX_MARK_MEMBER_NAME(Gfx_obj::imagegreenadd,"imagegreenadd");
	HX_MARK_MEMBER_NAME(Gfx_obj::imageblueadd,"imageblueadd");
	HX_MARK_MEMBER_NAME(Gfx_obj::tempframe,"tempframe");
	HX_MARK_MEMBER_NAME(Gfx_obj::tempxalign,"tempxalign");
	HX_MARK_MEMBER_NAME(Gfx_obj::tempyalign,"tempyalign");
	HX_MARK_MEMBER_NAME(Gfx_obj::temprotate,"temprotate");
	HX_MARK_MEMBER_NAME(Gfx_obj::changecolours,"changecolours");
	HX_MARK_MEMBER_NAME(Gfx_obj::oldtileset,"oldtileset");
	HX_MARK_MEMBER_NAME(Gfx_obj::tx,"tx");
	HX_MARK_MEMBER_NAME(Gfx_obj::ty,"ty");
	HX_MARK_MEMBER_NAME(Gfx_obj::tx2,"tx2");
	HX_MARK_MEMBER_NAME(Gfx_obj::ty2,"ty2");
	HX_MARK_MEMBER_NAME(Gfx_obj::transparentpixel,"transparentpixel");
	HX_MARK_MEMBER_NAME(Gfx_obj::_linethickness,"_linethickness");
	HX_MARK_MEMBER_NAME(Gfx_obj::buffer,"buffer");
	HX_MARK_MEMBER_NAME(Gfx_obj::temptile,"temptile");
	HX_MARK_MEMBER_NAME(Gfx_obj::screen,"screen");
	HX_MARK_MEMBER_NAME(Gfx_obj::tempshape,"tempshape");
	HX_MARK_MEMBER_NAME(Gfx_obj::shapematrix,"shapematrix");
	HX_MARK_MEMBER_NAME(Gfx_obj::alphamult,"alphamult");
	HX_MARK_MEMBER_NAME(Gfx_obj::gfxstage,"gfxstage");
	HX_MARK_MEMBER_NAME(Gfx_obj::hslval,"hslval");
	HX_MARK_MEMBER_NAME(Gfx_obj::initrun,"initrun");
	HX_MARK_MEMBER_NAME(Gfx_obj::skiprender,"skiprender");
	HX_MARK_MEMBER_NAME(Gfx_obj::drawingtoscreen,"drawingtoscreen");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Gfx_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Gfx_obj::LEFT,"LEFT");
	HX_VISIT_MEMBER_NAME(Gfx_obj::RIGHT,"RIGHT");
	HX_VISIT_MEMBER_NAME(Gfx_obj::TOP,"TOP");
	HX_VISIT_MEMBER_NAME(Gfx_obj::BOTTOM,"BOTTOM");
	HX_VISIT_MEMBER_NAME(Gfx_obj::CENTER,"CENTER");
	HX_VISIT_MEMBER_NAME(Gfx_obj::screenwidth,"screenwidth");
	HX_VISIT_MEMBER_NAME(Gfx_obj::screenheight,"screenheight");
	HX_VISIT_MEMBER_NAME(Gfx_obj::screenwidthmid,"screenwidthmid");
	HX_VISIT_MEMBER_NAME(Gfx_obj::screenheightmid,"screenheightmid");
	HX_VISIT_MEMBER_NAME(Gfx_obj::clearscreeneachframe,"clearscreeneachframe");
	HX_VISIT_MEMBER_NAME(Gfx_obj::screenscale,"screenscale");
	HX_VISIT_MEMBER_NAME(Gfx_obj::devicexres,"devicexres");
	HX_VISIT_MEMBER_NAME(Gfx_obj::deviceyres,"deviceyres");
	HX_VISIT_MEMBER_NAME(Gfx_obj::fullscreen,"fullscreen");
	HX_VISIT_MEMBER_NAME(Gfx_obj::currenttilesetname,"currenttilesetname");
	HX_VISIT_MEMBER_NAME(Gfx_obj::backbuffer,"backbuffer");
	HX_VISIT_MEMBER_NAME(Gfx_obj::drawto,"drawto");
	HX_VISIT_MEMBER_NAME(Gfx_obj::showfps,"showfps");
	HX_VISIT_MEMBER_NAME(Gfx_obj::render_fps,"render_fps");
	HX_VISIT_MEMBER_NAME(Gfx_obj::render_fps_max,"render_fps_max");
	HX_VISIT_MEMBER_NAME(Gfx_obj::update_fps,"update_fps");
	HX_VISIT_MEMBER_NAME(Gfx_obj::update_fps_max,"update_fps_max");
	HX_VISIT_MEMBER_NAME(Gfx_obj::t1,"t1");
	HX_VISIT_MEMBER_NAME(Gfx_obj::t2,"t2");
	HX_VISIT_MEMBER_NAME(Gfx_obj::t3,"t3");
	HX_VISIT_MEMBER_NAME(Gfx_obj::tiles,"tiles");
	HX_VISIT_MEMBER_NAME(Gfx_obj::tilesetindex,"tilesetindex");
	HX_VISIT_MEMBER_NAME(Gfx_obj::currenttileset,"currenttileset");
	HX_VISIT_MEMBER_NAME(Gfx_obj::animations,"animations");
	HX_VISIT_MEMBER_NAME(Gfx_obj::animationnum,"animationnum");
	HX_VISIT_MEMBER_NAME(Gfx_obj::animationindex,"animationindex");
	HX_VISIT_MEMBER_NAME(Gfx_obj::images,"images");
	HX_VISIT_MEMBER_NAME(Gfx_obj::imagenum,"imagenum");
	HX_VISIT_MEMBER_NAME(Gfx_obj::ct,"ct");
	HX_VISIT_MEMBER_NAME(Gfx_obj::alphact,"alphact");
	HX_VISIT_MEMBER_NAME(Gfx_obj::images_rect,"images_rect");
	HX_VISIT_MEMBER_NAME(Gfx_obj::tl,"tl");
	HX_VISIT_MEMBER_NAME(Gfx_obj::trect,"trect");
	HX_VISIT_MEMBER_NAME(Gfx_obj::tpoint,"tpoint");
	HX_VISIT_MEMBER_NAME(Gfx_obj::tbuffer,"tbuffer");
	HX_VISIT_MEMBER_NAME(Gfx_obj::imageindex,"imageindex");
	HX_VISIT_MEMBER_NAME(Gfx_obj::transform,"transform");
	HX_VISIT_MEMBER_NAME(Gfx_obj::coltransform,"coltransform");
	HX_VISIT_MEMBER_NAME(Gfx_obj::imagerotate,"imagerotate");
	HX_VISIT_MEMBER_NAME(Gfx_obj::imagerotatexpivot,"imagerotatexpivot");
	HX_VISIT_MEMBER_NAME(Gfx_obj::imagerotateypivot,"imagerotateypivot");
	HX_VISIT_MEMBER_NAME(Gfx_obj::imagexscale,"imagexscale");
	HX_VISIT_MEMBER_NAME(Gfx_obj::imageyscale,"imageyscale");
	HX_VISIT_MEMBER_NAME(Gfx_obj::imagescalexpivot,"imagescalexpivot");
	HX_VISIT_MEMBER_NAME(Gfx_obj::imagescaleypivot,"imagescaleypivot");
	HX_VISIT_MEMBER_NAME(Gfx_obj::imagealphamult,"imagealphamult");
	HX_VISIT_MEMBER_NAME(Gfx_obj::imageredmult,"imageredmult");
	HX_VISIT_MEMBER_NAME(Gfx_obj::imagegreenmult,"imagegreenmult");
	HX_VISIT_MEMBER_NAME(Gfx_obj::imagebluemult,"imagebluemult");
	HX_VISIT_MEMBER_NAME(Gfx_obj::imageredadd,"imageredadd");
	HX_VISIT_MEMBER_NAME(Gfx_obj::imagegreenadd,"imagegreenadd");
	HX_VISIT_MEMBER_NAME(Gfx_obj::imageblueadd,"imageblueadd");
	HX_VISIT_MEMBER_NAME(Gfx_obj::tempframe,"tempframe");
	HX_VISIT_MEMBER_NAME(Gfx_obj::tempxalign,"tempxalign");
	HX_VISIT_MEMBER_NAME(Gfx_obj::tempyalign,"tempyalign");
	HX_VISIT_MEMBER_NAME(Gfx_obj::temprotate,"temprotate");
	HX_VISIT_MEMBER_NAME(Gfx_obj::changecolours,"changecolours");
	HX_VISIT_MEMBER_NAME(Gfx_obj::oldtileset,"oldtileset");
	HX_VISIT_MEMBER_NAME(Gfx_obj::tx,"tx");
	HX_VISIT_MEMBER_NAME(Gfx_obj::ty,"ty");
	HX_VISIT_MEMBER_NAME(Gfx_obj::tx2,"tx2");
	HX_VISIT_MEMBER_NAME(Gfx_obj::ty2,"ty2");
	HX_VISIT_MEMBER_NAME(Gfx_obj::transparentpixel,"transparentpixel");
	HX_VISIT_MEMBER_NAME(Gfx_obj::_linethickness,"_linethickness");
	HX_VISIT_MEMBER_NAME(Gfx_obj::buffer,"buffer");
	HX_VISIT_MEMBER_NAME(Gfx_obj::temptile,"temptile");
	HX_VISIT_MEMBER_NAME(Gfx_obj::screen,"screen");
	HX_VISIT_MEMBER_NAME(Gfx_obj::tempshape,"tempshape");
	HX_VISIT_MEMBER_NAME(Gfx_obj::shapematrix,"shapematrix");
	HX_VISIT_MEMBER_NAME(Gfx_obj::alphamult,"alphamult");
	HX_VISIT_MEMBER_NAME(Gfx_obj::gfxstage,"gfxstage");
	HX_VISIT_MEMBER_NAME(Gfx_obj::hslval,"hslval");
	HX_VISIT_MEMBER_NAME(Gfx_obj::initrun,"initrun");
	HX_VISIT_MEMBER_NAME(Gfx_obj::skiprender,"skiprender");
	HX_VISIT_MEMBER_NAME(Gfx_obj::drawingtoscreen,"drawingtoscreen");
};

#endif

hx::Class Gfx_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("LEFT","\x07","\xd0","\x70","\x32"),
	HX_HCSTRING("RIGHT","\xbc","\x43","\x52","\x67"),
	HX_HCSTRING("TOP","\x75","\x02","\x40","\x00"),
	HX_HCSTRING("BOTTOM","\xeb","\x92","\xfb","\x17"),
	HX_HCSTRING("CENTER","\xd5","\xd1","\x5d","\xb8"),
	HX_HCSTRING("screenwidth","\x1a","\x93","\xba","\xee"),
	HX_HCSTRING("screenheight","\x53","\x9c","\xd5","\xaa"),
	HX_HCSTRING("screenwidthmid","\xae","\xea","\x65","\xbd"),
	HX_HCSTRING("screenheightmid","\x15","\xab","\xc3","\x5c"),
	HX_HCSTRING("clearscreeneachframe","\xb3","\xe2","\x89","\x91"),
	HX_HCSTRING("screenscale","\x9e","\xab","\x26","\x9d"),
	HX_HCSTRING("devicexres","\x7e","\x53","\x59","\xce"),
	HX_HCSTRING("deviceyres","\x1d","\x8a","\x02","\xcf"),
	HX_HCSTRING("fullscreen","\x3b","\x3a","\xb4","\xf9"),
	HX_HCSTRING("currenttilesetname","\xe6","\xe9","\x26","\x89"),
	HX_HCSTRING("backbuffer","\x67","\x2e","\x8a","\xda"),
	HX_HCSTRING("drawto","\x7f","\x9a","\xd6","\xdf"),
	HX_HCSTRING("resizescreen","\x60","\x84","\xd6","\xf6"),
	HX_HCSTRING("setfullscreen","\x5d","\x74","\x7b","\xa4"),
	HX_HCSTRING("getscreenx","\xb6","\x21","\x47","\xac"),
	HX_HCSTRING("getscreeny","\xb7","\x21","\x47","\xac"),
	HX_HCSTRING("showfps","\x0c","\x6f","\xb2","\x7b"),
	HX_HCSTRING("render_fps","\x40","\xdb","\x49","\xf1"),
	HX_HCSTRING("render_fps_max","\xe5","\xca","\x96","\xa3"),
	HX_HCSTRING("update_fps","\x73","\xcb","\xf4","\x0c"),
	HX_HCSTRING("update_fps_max","\x98","\x50","\xe9","\x64"),
	HX_HCSTRING("fps","\xe9","\xc7","\x4d","\x00"),
	HX_HCSTRING("updatefps","\x80","\xed","\xf2","\x82"),
	HX_HCSTRING("reset","\xcf","\x49","\xc8","\xe6"),
	HX_HCSTRING("reset_ifclear","\xe0","\x7e","\xb5","\xaf"),
	HX_HCSTRING("rotation","\x3e","\x3d","\x86","\x08"),
	HX_HCSTRING("scale","\x8a","\xce","\xce","\x78"),
	HX_HCSTRING("imagealpha","\x23","\xfe","\x36","\x9a"),
	HX_HCSTRING("imagecolor","\x28","\xc8","\xfc","\xc2"),
	HX_HCSTRING("changetileset","\xc4","\xfd","\x16","\xd9"),
	HX_HCSTRING("numberoftiles","\x65","\x1d","\x88","\x12"),
	HX_HCSTRING("loadtiles","\x9f","\xd9","\x3e","\x98"),
	HX_HCSTRING("addblanktiles","\x12","\x53","\xad","\x70"),
	HX_HCSTRING("createtiles","\x09","\xc5","\x82","\xa6"),
	HX_HCSTRING("tilewidth","\x18","\xa4","\x90","\xc2"),
	HX_HCSTRING("tileheight","\x95","\x69","\x4e","\x32"),
	HX_HCSTRING("loadimage","\x75","\xfb","\x72","\x45"),
	HX_HCSTRING("createimage","\xdf","\xe6","\xb6","\x53"),
	HX_HCSTRING("resizeimage","\xe7","\x30","\x3f","\x69"),
	HX_HCSTRING("imagewidth","\xcb","\x0c","\x03","\x43"),
	HX_HCSTRING("imageheight","\x82","\x9d","\xf7","\x15"),
	HX_HCSTRING("drawtoscreen","\x2b","\x3f","\x49","\x36"),
	HX_HCSTRING("drawtoimage","\x7c","\x18","\xb7","\x72"),
	HX_HCSTRING("drawtotile","\x2d","\x11","\x0c","\xa5"),
	HX_HCSTRING("t1","\x3d","\x65","\x00","\x00"),
	HX_HCSTRING("t2","\x3e","\x65","\x00","\x00"),
	HX_HCSTRING("t3","\x3f","\x65","\x00","\x00"),
	HX_HCSTRING("imagealignx","\xae","\x2b","\x46","\x51"),
	HX_HCSTRING("imagealigny","\xaf","\x2b","\x46","\x51"),
	HX_HCSTRING("imagealignonimagex","\xa6","\x1a","\xf4","\x36"),
	HX_HCSTRING("imagealignonimagey","\xa7","\x1a","\xf4","\x36"),
	HX_HCSTRING("drawimage","\xd7","\xe4","\x46","\xf2"),
	HX_HCSTRING("grabtilefromscreen","\xd0","\xf9","\x67","\xf5"),
	HX_HCSTRING("grabtilefromimage","\x77","\x39","\xf5","\x09"),
	HX_HCSTRING("grabimagefromscreen","\x25","\xa1","\x58","\x26"),
	HX_HCSTRING("grabimagefromimage","\xc2","\x93","\x93","\x43"),
	HX_HCSTRING("copytile","\x63","\x05","\xc2","\xe6"),
	HX_HCSTRING("drawtile","\x32","\x49","\x8d","\x76"),
	HX_HCSTRING("currentframe","\x54","\xed","\x61","\xba"),
	HX_HCSTRING("stopanimation","\xc2","\xee","\x6f","\x6c"),
	HX_HCSTRING("defineanimation","\x69","\x93","\x0a","\x4b"),
	HX_HCSTRING("drawanimation","\x80","\x22","\x89","\x08"),
	HX_HCSTRING("tilealignx","\xc1","\xf7","\x9c","\x6d"),
	HX_HCSTRING("tilealigny","\xc2","\xf7","\x9c","\x6d"),
	HX_HCSTRING("tilealignontilex","\x14","\x40","\x14","\xaf"),
	HX_HCSTRING("tilealignontiley","\x15","\x40","\x14","\xaf"),
	HX_HCSTRING("drawline","\xf8","\x95","\x43","\x71"),
	HX_HCSTRING("drawhexagon","\x5c","\xa4","\x3c","\x1b"),
	HX_HCSTRING("fillhexagon","\xbd","\xdf","\x8f","\xf5"),
	HX_HCSTRING("drawcircle","\x14","\x79","\x3c","\x63"),
	HX_HCSTRING("fillcircle","\xd3","\x84","\x13","\x25"),
	HX_HCSTRING("drawtri","\xa7","\x97","\xf0","\xfb"),
	HX_HCSTRING("filltri","\x88","\x4e","\x08","\x04"),
	HX_HCSTRING("drawbox","\x87","\xec","\xe2","\xfb"),
	HX_HCSTRING("get_linethickness","\x57","\x46","\x83","\x02"),
	HX_HCSTRING("set_linethickness","\x63","\x1e","\xf1","\x25"),
	HX_HCSTRING("clearscreen","\xb9","\xd4","\xb5","\xa6"),
	HX_HCSTRING("getpixel","\x30","\x66","\x4d","\x8f"),
	HX_HCSTRING("setpixel","\xa4","\xbf","\xaa","\x3d"),
	HX_HCSTRING("fillbox","\x68","\xa3","\xfa","\x03"),
	HX_HCSTRING("getred","\x7b","\x5a","\x3e","\xa3"),
	HX_HCSTRING("getgreen","\x6d","\xae","\x96","\x66"),
	HX_HCSTRING("getblue","\x30","\xc6","\xc2","\x28"),
	HX_HCSTRING("gethue","\xe2","\xd1","\x36","\xa3"),
	HX_HCSTRING("getsaturation","\xe8","\x2b","\x63","\x5c"),
	HX_HCSTRING("getlightness","\x17","\xf1","\xca","\x44"),
	HX_HCSTRING("rgb","\x0d","\xdb","\x56","\x00"),
	HX_HCSTRING("hsl","\x01","\x4f","\x4f","\x00"),
	HX_HCSTRING("setzoom","\xb5","\xb7","\xa3","\x2b"),
	HX_HCSTRING("updategraphicsmode","\x37","\x7d","\x77","\x0c"),
	HX_HCSTRING("init","\x10","\x3b","\xbb","\x45"),
	HX_HCSTRING("initgfx","\x69","\x90","\x9d","\xcb"),
	HX_HCSTRING("settrect","\xb6","\x90","\x29","\x91"),
	HX_HCSTRING("settpoint","\x7e","\x90","\x08","\x53"),
	HX_HCSTRING("tiles","\x85","\xfd","\x34","\x10"),
	HX_HCSTRING("tilesetindex","\x5e","\x3d","\xbc","\x37"),
	HX_HCSTRING("currenttileset","\x1b","\xce","\xd6","\x85"),
	HX_HCSTRING("animations","\xef","\x34","\x1c","\x83"),
	HX_HCSTRING("animationnum","\xc2","\x29","\x43","\xaa"),
	HX_HCSTRING("animationindex","\x8e","\xbd","\x0a","\x3b"),
	HX_HCSTRING("images","\xb8","\x50","\x92","\xfe"),
	HX_HCSTRING("imagenum","\xcb","\x89","\x4e","\x84"),
	HX_HCSTRING("ct","\xb1","\x56","\x00","\x00"),
	HX_HCSTRING("alphact","\x8f","\x11","\x16","\xb2"),
	HX_HCSTRING("images_rect","\x4b","\x7d","\x6e","\x0d"),
	HX_HCSTRING("tl","\x78","\x65","\x00","\x00"),
	HX_HCSTRING("trect","\x98","\x97","\x22","\x16"),
	HX_HCSTRING("tpoint","\x5c","\x8f","\xf5","\x27"),
	HX_HCSTRING("tbuffer","\x74","\x8c","\x4e","\xa8"),
	HX_HCSTRING("imageindex","\xd7","\xf1","\xb4","\x36"),
	HX_HCSTRING("transform","\x6c","\x2d","\x93","\x45"),
	HX_HCSTRING("coltransform","\x2c","\xa5","\x75","\xb2"),
	HX_HCSTRING("imagerotate","\xf6","\xdb","\xcb","\xde"),
	HX_HCSTRING("imagerotatexpivot","\xc0","\xcf","\xb7","\x18"),
	HX_HCSTRING("imagerotateypivot","\x1f","\x2c","\x13","\x7f"),
	HX_HCSTRING("imagexscale","\xad","\xb0","\x4d","\x87"),
	HX_HCSTRING("imageyscale","\x0c","\x0d","\xa9","\xed"),
	HX_HCSTRING("imagescalexpivot","\xd9","\x21","\x6e","\x5b"),
	HX_HCSTRING("imagescaleypivot","\x38","\x7e","\xc9","\xc1"),
	HX_HCSTRING("imagealphamult","\x93","\xb3","\xf9","\x23"),
	HX_HCSTRING("imageredmult","\xc6","\x0f","\x89","\xe5"),
	HX_HCSTRING("imagegreenmult","\x78","\x31","\x88","\xec"),
	HX_HCSTRING("imagebluemult","\xe5","\x71","\xed","\xad"),
	HX_HCSTRING("imageredadd","\x0b","\x97","\x36","\x12"),
	HX_HCSTRING("imagegreenadd","\x99","\xb1","\x4e","\x60"),
	HX_HCSTRING("imageblueadd","\xcc","\x1d","\x28","\xdd"),
	HX_HCSTRING("tempframe","\x99","\x0c","\x6a","\xa9"),
	HX_HCSTRING("tempxalign","\x61","\xed","\x3f","\x03"),
	HX_HCSTRING("tempyalign","\xc0","\x49","\x9b","\x69"),
	HX_HCSTRING("temprotate","\x6f","\x90","\xfb","\xb1"),
	HX_HCSTRING("changecolours","\x37","\xf7","\xeb","\x82"),
	HX_HCSTRING("oldtileset","\x6d","\x5b","\x6a","\xfb"),
	HX_HCSTRING("tx","\x84","\x65","\x00","\x00"),
	HX_HCSTRING("ty","\x85","\x65","\x00","\x00"),
	HX_HCSTRING("tx2","\x2e","\x6e","\x58","\x00"),
	HX_HCSTRING("ty2","\x0d","\x6f","\x58","\x00"),
	HX_HCSTRING("transparentpixel","\xf4","\x51","\x71","\x9f"),
	HX_HCSTRING("_linethickness","\x41","\x2b","\x65","\x3a"),
	HX_HCSTRING("buffer","\x00","\xbd","\x94","\xd0"),
	HX_HCSTRING("temptile","\x42","\xa8","\x97","\xb1"),
	HX_HCSTRING("screen","\x6c","\x3b","\x5d","\x47"),
	HX_HCSTRING("tempshape","\x8d","\x77","\x03","\x1f"),
	HX_HCSTRING("shapematrix","\x22","\xa8","\x75","\x19"),
	HX_HCSTRING("alphamult","\x4e","\x16","\x86","\xf7"),
	HX_HCSTRING("gfxstage","\xa5","\xf2","\xb7","\x13"),
	HX_HCSTRING("hslval","\x80","\x26","\xef","\x13"),
	HX_HCSTRING("initrun","\x3b","\xf6","\xa5","\xcb"),
	HX_HCSTRING("skiprender","\x15","\xeb","\x98","\x38"),
	HX_HCSTRING("drawingtoscreen","\x85","\x38","\xc7","\x75"),
	::String(null()) };

void Gfx_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxegon.Gfx","\xcb","\xea","\x14","\x3a");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Gfx_obj::__GetStatic;
	__mClass->mSetStaticField = &Gfx_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Gfx_obj >;
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

void Gfx_obj::__boot()
{
	LEFT= (int)-10000;
	RIGHT= (int)-20000;
	TOP= (int)-10000;
	BOTTOM= (int)-20000;
	CENTER= (int)-15000;
	render_fps_max= (int)-1;
	update_fps_max= (int)-1;
	tiles= Array_obj< ::Dynamic >::__new();
struct _Function_0_1{
	inline static ::haxe::ds::StringMap Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxegon/Gfx.hx",1737,0xa6405f94)
		{
			HX_STACK_LINE(1737)
			::haxe::ds::StringMap tmp = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(1737)
			::haxe::ds::StringMap tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1737)
			return tmp1;
		}
		return null();
	}
};
	tilesetindex= _Function_0_1::Block();
	currenttileset= (int)-1;
	animations= Array_obj< ::Dynamic >::__new();
struct _Function_0_2{
	inline static ::haxe::ds::StringMap Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxegon/Gfx.hx",1742,0xa6405f94)
		{
			HX_STACK_LINE(1742)
			::haxe::ds::StringMap tmp = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(1742)
			::haxe::ds::StringMap tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1742)
			return tmp1;
		}
		return null();
	}
};
	animationindex= _Function_0_2::Block();
	images= Array_obj< ::Dynamic >::__new();
	tl= ::openfl::geom::Point_obj::__new((int)0,(int)0);
struct _Function_0_3{
	inline static ::haxe::ds::StringMap Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxegon/Gfx.hx",1753,0xa6405f94)
		{
			HX_STACK_LINE(1753)
			::haxe::ds::StringMap tmp = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(1753)
			::haxe::ds::StringMap tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1753)
			return tmp1;
		}
		return null();
	}
};
	imageindex= _Function_0_3::Block();
	tempshape= ::openfl::display::Shape_obj::__new();
	shapematrix= ::openfl::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());
	hslval= Array_obj< Float >::__new();
}

} // end namespace haxegon
