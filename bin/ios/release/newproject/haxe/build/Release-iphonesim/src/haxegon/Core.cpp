#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_Timer
#include <haxe/Timer.h>
#endif
#ifndef INCLUDED_haxegon_Core
#include <haxegon/Core.h>
#endif
#ifndef INCLUDED_haxegon_Debug
#include <haxegon/Debug.h>
#endif
#ifndef INCLUDED_haxegon_Gfx
#include <haxegon/Gfx.h>
#endif
#ifndef INCLUDED_haxegon_Input
#include <haxegon/Input.h>
#endif
#ifndef INCLUDED_haxegon_Mouse
#include <haxegon/Mouse.h>
#endif
#ifndef INCLUDED_haxegon_Music
#include <haxegon/Music.h>
#endif
#ifndef INCLUDED_haxegon_Random
#include <haxegon/Random.h>
#endif
#ifndef INCLUDED_haxegon_Scene
#include <haxegon/Scene.h>
#endif
#ifndef INCLUDED_haxegon_Text
#include <haxegon/Text.h>
#endif
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_openfl_Lib
#include <openfl/Lib.h>
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
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
namespace haxegon{

Void Core_obj::__construct()
{
HX_STACK_FRAME("haxegon.Core","new",0xdbd4873f,"haxegon.Core.new","haxegon/Core.hx",21,0x74bad730)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(220)
	this->TARGETFRAMERATE = (int)30;
	HX_STACK_LINE(23)
	super::__construct();
	HX_STACK_LINE(25)
	::haxegon::Gfx_obj::initrun = true;
	HX_STACK_LINE(29)
	this->init();
}
;
	return null();
}

//Core_obj::~Core_obj() { }

Dynamic Core_obj::__CreateEmpty() { return  new Core_obj; }
hx::ObjectPtr< Core_obj > Core_obj::__new()
{  hx::ObjectPtr< Core_obj > _result_ = new Core_obj();
	_result_->__construct();
	return _result_;}

Dynamic Core_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Core_obj > _result_ = new Core_obj();
	_result_->__construct();
	return _result_;}

Void Core_obj::init( ){
{
		HX_STACK_FRAME("haxegon.Core","init",0x7ada8751,"haxegon.Core.init","haxegon/Core.hx",32,0x74bad730)
		HX_STACK_THIS(this)
		HX_STACK_LINE(33)
		this->maxelapsed = ((Float)0.0333);
		HX_STACK_LINE(34)
		this->maxframeskip = (int)5;
		HX_STACK_LINE(35)
		this->tickrate = (int)20;
		HX_STACK_LINE(36)
		this->_delta = (int)0;
		HX_STACK_LINE(39)
		bool tmp = ::haxegon::Gfx_obj::initrun;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(39)
		if ((tmp)){
			HX_STACK_LINE(40)
			Dynamic tmp1 = this->addedtostage_dyn();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(40)
			this->addEventListener(HX_HCSTRING("addedToStage","\x63","\x22","\x55","\x0c"),tmp1,null(),null(),null());
			HX_STACK_LINE(41)
			::openfl::display::MovieClip tmp2 = ::openfl::Lib_obj::current;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(41)
			tmp2->addChild(hx::ObjectPtr<OBJ_>(this));
		}
		else{
			HX_STACK_LINE(43)
			this->loaded();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Core_obj,init,(void))

Void Core_obj::addedtostage( ::openfl::events::Event e){
{
		HX_STACK_FRAME("haxegon.Core","addedtostage",0xd26d7fe4,"haxegon.Core.addedtostage","haxegon/Core.hx",47,0x74bad730)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(48)
		Dynamic tmp = this->addedtostage_dyn();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(48)
		this->removeEventListener(HX_HCSTRING("addedToStage","\x63","\x22","\x55","\x0c"),tmp,null());
		HX_STACK_LINE(49)
		this->loaded();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Core_obj,addedtostage,(void))

Void Core_obj::loaded( ){
{
		HX_STACK_FRAME("haxegon.Core","loaded",0x8d2ae686,"haxegon.Core.loaded","haxegon/Core.hx",63,0x74bad730)
		HX_STACK_THIS(this)
		HX_STACK_LINE(65)
		Float tmp = ::Math_obj::random();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(65)
		Float tmp1 = (tmp * (int)233280);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(65)
		int tmp2 = ::Std_obj::_int(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(65)
		::haxegon::Random_obj::setseed(tmp2);
		HX_STACK_LINE(67)
		bool tmp3 = ::haxegon::Gfx_obj::initrun;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(67)
		if ((tmp3)){
			HX_STACK_LINE(68)
			::openfl::display::Stage tmp4 = this->stage;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(68)
			::haxegon::Input_obj::init(tmp4);
			HX_STACK_LINE(69)
			::openfl::display::Stage tmp5 = this->stage;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(69)
			::haxegon::Mouse_obj::init(tmp5);
		}
		HX_STACK_LINE(72)
		::openfl::display::Stage tmp4 = this->stage;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(72)
		::haxegon::Gfx_obj::init(tmp4);
		HX_STACK_LINE(76)
		::haxegon::Music_obj::init();
		HX_STACK_LINE(86)
		::haxegon::Gfx_obj::resizescreen((int)160,(int)284,(int)2);
		HX_STACK_LINE(87)
		::haxegon::Text_obj::setfont(HX_HCSTRING("volter","\xae","\x60","\x52","\x5f"),(int)1);
		HX_STACK_LINE(95)
		::haxegon::Scene_obj::init();
		HX_STACK_LINE(99)
		int tmp5 = this->TARGETFRAMERATE;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(99)
		Float tmp6 = (Float((int)1000) / Float(tmp5));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(99)
		this->_rate = tmp6;
		HX_STACK_LINE(101)
		Float tmp7 = this->_rate;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(101)
		int tmp8 = this->maxframeskip;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(101)
		Float tmp9 = (tmp8 + ((Float)0.98));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(101)
		Float tmp10 = (tmp7 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(101)
		this->_skip = tmp10;
		HX_STACK_LINE(102)
		int tmp11 = ::openfl::Lib_obj::getTimer();		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(102)
		Float tmp12 = this->_prev = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(102)
		this->_last = tmp12;
		HX_STACK_LINE(103)
		::haxe::Timer tmp13 = this->_timer;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(103)
		bool tmp14 = (tmp13 != null());		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(103)
		if ((tmp14)){
			HX_STACK_LINE(103)
			::haxe::Timer tmp15 = this->_timer;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(103)
			tmp15->stop();
		}
		HX_STACK_LINE(104)
		int tmp15 = this->tickrate;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(104)
		::haxe::Timer tmp16 = ::haxe::Timer_obj::__new(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(104)
		this->_timer = tmp16;
		HX_STACK_LINE(106)
		::openfl::display::Stage tmp17 = this->stage;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(106)
		Dynamic tmp18 = this->onenterframe_dyn();		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(106)
		tmp17->addEventListener(HX_HCSTRING("enterFrame","\xf5","\x03","\x50","\x02"),tmp18,null(),null(),null());
		HX_STACK_LINE(107)
		::haxegon::Gfx_obj::update_fps = (int)0;
		HX_STACK_LINE(108)
		::haxegon::Gfx_obj::render_fps = (int)0;
		HX_STACK_LINE(109)
		this->_framesthissecond_counter = (int)-1;
		HX_STACK_LINE(111)
		::haxegon::Gfx_obj::initrun = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Core_obj,loaded,(void))

Void Core_obj::onenterframe( ::openfl::events::Event FlashEvent){
{
		HX_STACK_FRAME("haxegon.Core","onenterframe",0x774c2735,"haxegon.Core.onenterframe","haxegon/Core.hx",115,0x74bad730)
		HX_STACK_THIS(this)
		HX_STACK_ARG(FlashEvent,"FlashEvent")
		HX_STACK_LINE(115)
		this->ontimer();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Core_obj,onenterframe,(void))

Void Core_obj::ontimer( ){
{
		HX_STACK_FRAME("haxegon.Core","ontimer",0x02b500a5,"haxegon.Core.ontimer","haxegon/Core.hx",118,0x74bad730)
		HX_STACK_THIS(this)
		HX_STACK_LINE(119)
		::haxegon::Gfx_obj::skiprender = false;
		HX_STACK_LINE(120)
		this->_skipedupdate = (int)0;
		HX_STACK_LINE(123)
		int tmp = ::openfl::Lib_obj::getTimer();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(123)
		this->_time = tmp;
		HX_STACK_LINE(124)
		Float tmp1 = this->_time;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(124)
		Float tmp2 = this->_last;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(124)
		Float tmp3 = (tmp1 - tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(124)
		hx::AddEq(this->_delta,tmp3);
		HX_STACK_LINE(125)
		Float tmp4 = this->_time;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(125)
		this->_last = tmp4;
		HX_STACK_LINE(127)
		Float tmp5 = this->_framesthissecond_counter;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(127)
		bool tmp6 = (tmp5 == (int)-1);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(127)
		if ((tmp6)){
			HX_STACK_LINE(128)
			Float tmp7 = this->_time;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(128)
			this->_framesthissecond_counter = tmp7;
		}
		HX_STACK_LINE(132)
		Float tmp7 = this->_delta;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(132)
		Float tmp8 = this->_rate;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(132)
		bool tmp9 = (tmp7 < tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(132)
		if ((tmp9)){
			HX_STACK_LINE(132)
			return null();
		}
		HX_STACK_LINE(136)
		Float tmp10 = this->_delta;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(136)
		Float tmp11 = this->_rate;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(136)
		Float tmp12 = (((Float)1.5) * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(136)
		bool tmp13 = (tmp10 > tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(136)
		if ((tmp13)){
			HX_STACK_LINE(137)
			hx::SubEq(this->_delta,((Float)0.01));
		}
		HX_STACK_LINE(141)
		Float tmp14 = this->_time;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(141)
		int tmp15 = ::Std_obj::_int(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(141)
		this->_gametime = tmp15;
		HX_STACK_LINE(144)
		Float tmp16 = this->_delta;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(144)
		Float tmp17 = this->_skip;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(144)
		bool tmp18 = (tmp16 > tmp17);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(144)
		if ((tmp18)){
			HX_STACK_LINE(144)
			Float tmp19 = this->_skip;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(144)
			this->_delta = tmp19;
		}
		HX_STACK_LINE(145)
		while((true)){
			HX_STACK_LINE(145)
			Float tmp19 = this->_delta;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(145)
			Float tmp20 = this->_rate;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(145)
			bool tmp21 = (tmp19 >= tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(145)
			bool tmp22 = !(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(145)
			if ((tmp22)){
				HX_STACK_LINE(145)
				break;
			}
			HX_STACK_LINE(148)
			Float tmp23 = this->_time;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(148)
			this->_updatetime = tmp23;
			HX_STACK_LINE(149)
			Float tmp24 = this->_rate;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(149)
			hx::SubEq(this->_delta,tmp24);
			HX_STACK_LINE(150)
			Float tmp25 = this->_time;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(150)
			this->_prev = tmp25;
			HX_STACK_LINE(153)
			bool tmp26 = ::haxegon::Gfx_obj::clearscreeneachframe;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(153)
			if ((tmp26)){
				HX_STACK_LINE(153)
				::haxegon::Gfx_obj::skiprender = true;
			}
			HX_STACK_LINE(154)
			(this->_skipedupdate)++;
			HX_STACK_LINE(155)
			int tmp27 = this->_skipedupdate;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(155)
			bool tmp28 = (tmp27 > (int)1);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(155)
			if ((tmp28)){
				HX_STACK_LINE(155)
				this->doupdate();
			}
			HX_STACK_LINE(158)
			int tmp29 = ::openfl::Lib_obj::getTimer();		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(158)
			this->_time = tmp29;
		}
		HX_STACK_LINE(162)
		Float tmp19 = this->_time;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(162)
		this->_rendertime = tmp19;
		HX_STACK_LINE(165)
		::haxegon::Gfx_obj::skiprender = false;
		HX_STACK_LINE(165)
		this->doupdate();
		HX_STACK_LINE(166)
		(::haxegon::Gfx_obj::render_fps)++;
		HX_STACK_LINE(168)
		Float tmp20 = this->_rendertime;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(168)
		Float tmp21 = this->_framesthissecond_counter;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(168)
		Float tmp22 = (tmp20 - tmp21);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(168)
		bool tmp23 = (tmp22 > (int)1000);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(168)
		if ((tmp23)){
			HX_STACK_LINE(170)
			int tmp24 = ::openfl::Lib_obj::getTimer();		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(170)
			this->_framesthissecond_counter = tmp24;
			HX_STACK_LINE(171)
			int tmp25 = ::haxegon::Gfx_obj::update_fps;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(171)
			::haxegon::Gfx_obj::update_fps_max = tmp25;
			HX_STACK_LINE(172)
			int tmp26 = ::haxegon::Gfx_obj::render_fps;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(172)
			::haxegon::Gfx_obj::render_fps_max = tmp26;
			HX_STACK_LINE(173)
			::haxegon::Gfx_obj::render_fps = (int)0;
			HX_STACK_LINE(174)
			::haxegon::Gfx_obj::update_fps = (int)0;
		}
		HX_STACK_LINE(178)
		int tmp24 = ::openfl::Lib_obj::getTimer();		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(178)
		this->_time = tmp24;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Core_obj,ontimer,(void))

Void Core_obj::doupdate( ){
{
		HX_STACK_FRAME("haxegon.Core","doupdate",0x78499895,"haxegon.Core.doupdate","haxegon/Core.hx",181,0x74bad730)
		HX_STACK_THIS(this)
		HX_STACK_LINE(182)
		(::haxegon::Gfx_obj::update_fps)++;
		HX_STACK_LINE(183)
		::openfl::display::MovieClip tmp = ::openfl::Lib_obj::current;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(183)
		Float tmp1 = tmp->get_mouseX();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(183)
		int tmp2 = ::haxegon::Gfx_obj::getscreenx(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(183)
		::openfl::display::MovieClip tmp3 = ::openfl::Lib_obj::current;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(183)
		Float tmp4 = tmp3->get_mouseY();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(183)
		int tmp5 = ::haxegon::Gfx_obj::getscreeny(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(183)
		::haxegon::Mouse_obj::update(tmp2,tmp5);
		HX_STACK_LINE(184)
		::openfl::display::MovieClip tmp6 = ::openfl::Lib_obj::current;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(184)
		Float tmp7 = tmp6->get_mouseX();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(184)
		int tmp8 = ::haxegon::Gfx_obj::screenscale;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(184)
		Float tmp9 = (Float(tmp7) / Float(tmp8));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(184)
		int tmp10 = ::Std_obj::_int(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(184)
		::openfl::display::MovieClip tmp11 = ::openfl::Lib_obj::current;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(184)
		Float tmp12 = tmp11->get_mouseY();		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(184)
		int tmp13 = ::haxegon::Gfx_obj::screenscale;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(184)
		Float tmp14 = (Float(tmp12) / Float(tmp13));		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(184)
		int tmp15 = ::Std_obj::_int(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(184)
		::haxegon::Mouse_obj::update(tmp10,tmp15);
		HX_STACK_LINE(185)
		::haxegon::Input_obj::update();
		HX_STACK_LINE(187)
		bool tmp16 = ::haxegon::Gfx_obj::skiprender;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(187)
		bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(187)
		if ((tmp17)){
			HX_STACK_LINE(188)
			::openfl::display::BitmapData tmp18 = ::haxegon::Gfx_obj::drawto;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(188)
			tmp18->lock();
			HX_STACK_LINE(189)
			bool tmp19 = ::haxegon::Gfx_obj::clearscreeneachframe;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(189)
			if ((tmp19)){
				HX_STACK_LINE(189)
				::haxegon::Gfx_obj::clearscreen(null());
			}
		}
		HX_STACK_LINE(194)
		::haxegon::Scene_obj::update();
		HX_STACK_LINE(196)
		bool tmp18 = ::haxegon::Gfx_obj::skiprender;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(196)
		bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(196)
		if ((tmp19)){
			HX_STACK_LINE(197)
			::haxegon::Text_obj::drawstringinput();
			HX_STACK_LINE(198)
			::haxegon::Debug_obj::showlog();
			HX_STACK_LINE(200)
			::openfl::display::BitmapData tmp20 = ::haxegon::Gfx_obj::drawto;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(200)
			tmp20->unlock(null());
		}
		HX_STACK_LINE(207)
		::haxegon::Mouse_obj::mousewheel = (int)0;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Core_obj,doupdate,(void))


Core_obj::Core_obj()
{
}

void Core_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Core);
	HX_MARK_MEMBER_NAME(maxelapsed,"maxelapsed");
	HX_MARK_MEMBER_NAME(maxframeskip,"maxframeskip");
	HX_MARK_MEMBER_NAME(tickrate,"tickrate");
	HX_MARK_MEMBER_NAME(TARGETFRAMERATE,"TARGETFRAMERATE");
	HX_MARK_MEMBER_NAME(_delta,"_delta");
	HX_MARK_MEMBER_NAME(_time,"_time");
	HX_MARK_MEMBER_NAME(_last,"_last");
	HX_MARK_MEMBER_NAME(_timer,"_timer");
	HX_MARK_MEMBER_NAME(_rate,"_rate");
	HX_MARK_MEMBER_NAME(_skip,"_skip");
	HX_MARK_MEMBER_NAME(_prev,"_prev");
	HX_MARK_MEMBER_NAME(_skipedupdate,"_skipedupdate");
	HX_MARK_MEMBER_NAME(_updatetime,"_updatetime");
	HX_MARK_MEMBER_NAME(_rendertime,"_rendertime");
	HX_MARK_MEMBER_NAME(_gametime,"_gametime");
	HX_MARK_MEMBER_NAME(_framesthissecond_counter,"_framesthissecond_counter");
	::openfl::display::Sprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Core_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(maxelapsed,"maxelapsed");
	HX_VISIT_MEMBER_NAME(maxframeskip,"maxframeskip");
	HX_VISIT_MEMBER_NAME(tickrate,"tickrate");
	HX_VISIT_MEMBER_NAME(TARGETFRAMERATE,"TARGETFRAMERATE");
	HX_VISIT_MEMBER_NAME(_delta,"_delta");
	HX_VISIT_MEMBER_NAME(_time,"_time");
	HX_VISIT_MEMBER_NAME(_last,"_last");
	HX_VISIT_MEMBER_NAME(_timer,"_timer");
	HX_VISIT_MEMBER_NAME(_rate,"_rate");
	HX_VISIT_MEMBER_NAME(_skip,"_skip");
	HX_VISIT_MEMBER_NAME(_prev,"_prev");
	HX_VISIT_MEMBER_NAME(_skipedupdate,"_skipedupdate");
	HX_VISIT_MEMBER_NAME(_updatetime,"_updatetime");
	HX_VISIT_MEMBER_NAME(_rendertime,"_rendertime");
	HX_VISIT_MEMBER_NAME(_gametime,"_gametime");
	HX_VISIT_MEMBER_NAME(_framesthissecond_counter,"_framesthissecond_counter");
	::openfl::display::Sprite_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Core_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_time") ) { return _time; }
		if (HX_FIELD_EQ(inName,"_last") ) { return _last; }
		if (HX_FIELD_EQ(inName,"_rate") ) { return _rate; }
		if (HX_FIELD_EQ(inName,"_skip") ) { return _skip; }
		if (HX_FIELD_EQ(inName,"_prev") ) { return _prev; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"loaded") ) { return loaded_dyn(); }
		if (HX_FIELD_EQ(inName,"_delta") ) { return _delta; }
		if (HX_FIELD_EQ(inName,"_timer") ) { return _timer; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"ontimer") ) { return ontimer_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"doupdate") ) { return doupdate_dyn(); }
		if (HX_FIELD_EQ(inName,"tickrate") ) { return tickrate; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_gametime") ) { return _gametime; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"maxelapsed") ) { return maxelapsed; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_updatetime") ) { return _updatetime; }
		if (HX_FIELD_EQ(inName,"_rendertime") ) { return _rendertime; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"addedtostage") ) { return addedtostage_dyn(); }
		if (HX_FIELD_EQ(inName,"onenterframe") ) { return onenterframe_dyn(); }
		if (HX_FIELD_EQ(inName,"maxframeskip") ) { return maxframeskip; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_skipedupdate") ) { return _skipedupdate; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"TARGETFRAMERATE") ) { return TARGETFRAMERATE; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"_framesthissecond_counter") ) { return _framesthissecond_counter; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Core_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_time") ) { _time=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_last") ) { _last=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_rate") ) { _rate=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_skip") ) { _skip=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_prev") ) { _prev=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_delta") ) { _delta=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_timer") ) { _timer=inValue.Cast< ::haxe::Timer >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"tickrate") ) { tickrate=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_gametime") ) { _gametime=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"maxelapsed") ) { maxelapsed=inValue.Cast< Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_updatetime") ) { _updatetime=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_rendertime") ) { _rendertime=inValue.Cast< Float >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"maxframeskip") ) { maxframeskip=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_skipedupdate") ) { _skipedupdate=inValue.Cast< int >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"TARGETFRAMERATE") ) { TARGETFRAMERATE=inValue.Cast< int >(); return inValue; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"_framesthissecond_counter") ) { _framesthissecond_counter=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Core_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("maxelapsed","\x18","\xea","\x93","\x57"));
	outFields->push(HX_HCSTRING("maxframeskip","\x08","\x2a","\xad","\x44"));
	outFields->push(HX_HCSTRING("tickrate","\xbd","\x88","\x02","\x76"));
	outFields->push(HX_HCSTRING("TARGETFRAMERATE","\xfc","\xc3","\x58","\x02"));
	outFields->push(HX_HCSTRING("_delta","\x39","\x2f","\x0e","\xd3"));
	outFields->push(HX_HCSTRING("_time","\xec","\xe7","\x0d","\x00"));
	outFields->push(HX_HCSTRING("_last","\x35","\x26","\xbe","\xfa"));
	outFields->push(HX_HCSTRING("_timer","\x06","\x07","\x1d","\x0c"));
	outFields->push(HX_HCSTRING("_rate","\xbf","\x6e","\xb5","\xfe"));
	outFields->push(HX_HCSTRING("_skip","\x5e","\x32","\x66","\xff"));
	outFields->push(HX_HCSTRING("_prev","\xd2","\xda","\x6f","\xfd"));
	outFields->push(HX_HCSTRING("_skipedupdate","\x06","\xb0","\xdb","\xc6"));
	outFields->push(HX_HCSTRING("_updatetime","\xb5","\x57","\x62","\xed"));
	outFields->push(HX_HCSTRING("_rendertime","\x82","\x67","\xb7","\xd1"));
	outFields->push(HX_HCSTRING("_gametime","\x5e","\x98","\xdf","\x15"));
	outFields->push(HX_HCSTRING("_framesthissecond_counter","\x54","\x11","\x8b","\x8e"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(Core_obj,maxelapsed),HX_HCSTRING("maxelapsed","\x18","\xea","\x93","\x57")},
	{hx::fsInt,(int)offsetof(Core_obj,maxframeskip),HX_HCSTRING("maxframeskip","\x08","\x2a","\xad","\x44")},
	{hx::fsInt,(int)offsetof(Core_obj,tickrate),HX_HCSTRING("tickrate","\xbd","\x88","\x02","\x76")},
	{hx::fsInt,(int)offsetof(Core_obj,TARGETFRAMERATE),HX_HCSTRING("TARGETFRAMERATE","\xfc","\xc3","\x58","\x02")},
	{hx::fsFloat,(int)offsetof(Core_obj,_delta),HX_HCSTRING("_delta","\x39","\x2f","\x0e","\xd3")},
	{hx::fsFloat,(int)offsetof(Core_obj,_time),HX_HCSTRING("_time","\xec","\xe7","\x0d","\x00")},
	{hx::fsFloat,(int)offsetof(Core_obj,_last),HX_HCSTRING("_last","\x35","\x26","\xbe","\xfa")},
	{hx::fsObject /*::haxe::Timer*/ ,(int)offsetof(Core_obj,_timer),HX_HCSTRING("_timer","\x06","\x07","\x1d","\x0c")},
	{hx::fsFloat,(int)offsetof(Core_obj,_rate),HX_HCSTRING("_rate","\xbf","\x6e","\xb5","\xfe")},
	{hx::fsFloat,(int)offsetof(Core_obj,_skip),HX_HCSTRING("_skip","\x5e","\x32","\x66","\xff")},
	{hx::fsFloat,(int)offsetof(Core_obj,_prev),HX_HCSTRING("_prev","\xd2","\xda","\x6f","\xfd")},
	{hx::fsInt,(int)offsetof(Core_obj,_skipedupdate),HX_HCSTRING("_skipedupdate","\x06","\xb0","\xdb","\xc6")},
	{hx::fsFloat,(int)offsetof(Core_obj,_updatetime),HX_HCSTRING("_updatetime","\xb5","\x57","\x62","\xed")},
	{hx::fsFloat,(int)offsetof(Core_obj,_rendertime),HX_HCSTRING("_rendertime","\x82","\x67","\xb7","\xd1")},
	{hx::fsFloat,(int)offsetof(Core_obj,_gametime),HX_HCSTRING("_gametime","\x5e","\x98","\xdf","\x15")},
	{hx::fsFloat,(int)offsetof(Core_obj,_framesthissecond_counter),HX_HCSTRING("_framesthissecond_counter","\x54","\x11","\x8b","\x8e")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("init","\x10","\x3b","\xbb","\x45"),
	HX_HCSTRING("addedtostage","\xa3","\x8a","\xd6","\xab"),
	HX_HCSTRING("loaded","\x05","\x48","\x6f","\x58"),
	HX_HCSTRING("onenterframe","\xf4","\x31","\xb5","\x50"),
	HX_HCSTRING("ontimer","\x46","\xee","\x45","\x13"),
	HX_HCSTRING("doupdate","\xd4","\x97","\x88","\xe6"),
	HX_HCSTRING("maxelapsed","\x18","\xea","\x93","\x57"),
	HX_HCSTRING("maxframeskip","\x08","\x2a","\xad","\x44"),
	HX_HCSTRING("tickrate","\xbd","\x88","\x02","\x76"),
	HX_HCSTRING("TARGETFRAMERATE","\xfc","\xc3","\x58","\x02"),
	HX_HCSTRING("_delta","\x39","\x2f","\x0e","\xd3"),
	HX_HCSTRING("_time","\xec","\xe7","\x0d","\x00"),
	HX_HCSTRING("_last","\x35","\x26","\xbe","\xfa"),
	HX_HCSTRING("_timer","\x06","\x07","\x1d","\x0c"),
	HX_HCSTRING("_rate","\xbf","\x6e","\xb5","\xfe"),
	HX_HCSTRING("_skip","\x5e","\x32","\x66","\xff"),
	HX_HCSTRING("_prev","\xd2","\xda","\x6f","\xfd"),
	HX_HCSTRING("_skipedupdate","\x06","\xb0","\xdb","\xc6"),
	HX_HCSTRING("_updatetime","\xb5","\x57","\x62","\xed"),
	HX_HCSTRING("_rendertime","\x82","\x67","\xb7","\xd1"),
	HX_HCSTRING("_gametime","\x5e","\x98","\xdf","\x15"),
	HX_HCSTRING("_framesthissecond_counter","\x54","\x11","\x8b","\x8e"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Core_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Core_obj::__mClass,"__mClass");
};

#endif

hx::Class Core_obj::__mClass;

void Core_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxegon.Core","\xcd","\x7b","\x9a","\x95");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Core_obj >;
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
