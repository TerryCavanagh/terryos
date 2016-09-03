#include <hxcpp.h>

#ifndef INCLUDED_haxegon_Input
#include <haxegon/Input.h>
#endif
#ifndef INCLUDED_haxegon_Key
#include <haxegon/Key.h>
#endif
#ifndef INCLUDED_haxegon_Mouse
#include <haxegon/Mouse.h>
#endif
#ifndef INCLUDED_openfl_Lib
#include <openfl/Lib.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
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
#ifndef INCLUDED_openfl_events_MouseEvent
#include <openfl/events/MouseEvent.h>
#endif
#ifndef INCLUDED_openfl_net_URLRequest
#include <openfl/net/URLRequest.h>
#endif
#ifndef INCLUDED_openfl_ui_Mouse
#include <openfl/ui/Mouse.h>
#endif
namespace haxegon{

Void Mouse_obj::__construct()
{
	return null();
}

//Mouse_obj::~Mouse_obj() { }

Dynamic Mouse_obj::__CreateEmpty() { return  new Mouse_obj; }
hx::ObjectPtr< Mouse_obj > Mouse_obj::__new()
{  hx::ObjectPtr< Mouse_obj > _result_ = new Mouse_obj();
	_result_->__construct();
	return _result_;}

Dynamic Mouse_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Mouse_obj > _result_ = new Mouse_obj();
	_result_->__construct();
	return _result_;}

int Mouse_obj::x;

int Mouse_obj::y;

int Mouse_obj::oldx;

int Mouse_obj::oldy;

int Mouse_obj::mousewheel;

bool Mouse_obj::cursormoved;

bool Mouse_obj::mouseoffstage;

bool Mouse_obj::isdragging;

bool Mouse_obj::leftheld( ){
	HX_STACK_FRAME("haxegon.Mouse","leftheld",0xfbdaf993,"haxegon.Mouse.leftheld","haxegon/Mouse.hx",22,0x5196c828)
	HX_STACK_LINE(22)
	int tmp = ::haxegon::Mouse_obj::_current;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(22)
	bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(22)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Mouse_obj,leftheld,return )

bool Mouse_obj::leftclick( ){
	HX_STACK_FRAME("haxegon.Mouse","leftclick",0x875cb7aa,"haxegon.Mouse.leftclick","haxegon/Mouse.hx",23,0x5196c828)
	HX_STACK_LINE(23)
	int tmp = ::haxegon::Mouse_obj::_current;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(23)
	bool tmp1 = (tmp == (int)2);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(23)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Mouse_obj,leftclick,return )

bool Mouse_obj::leftreleased( ){
	HX_STACK_FRAME("haxegon.Mouse","leftreleased",0x6b07169b,"haxegon.Mouse.leftreleased","haxegon/Mouse.hx",24,0x5196c828)
	HX_STACK_LINE(24)
	int tmp = ::haxegon::Mouse_obj::_current;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(24)
	bool tmp1 = (tmp == (int)-1);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(24)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Mouse_obj,leftreleased,return )

bool Mouse_obj::rightheld( ){
	HX_STACK_FRAME("haxegon.Mouse","rightheld",0x8244195a,"haxegon.Mouse.rightheld","haxegon/Mouse.hx",26,0x5196c828)
	HX_STACK_LINE(26)
	int tmp = ::haxegon::Mouse_obj::_rightcurrent;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(26)
	bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(26)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Mouse_obj,rightheld,return )

bool Mouse_obj::rightclick( ){
	HX_STACK_FRAME("haxegon.Mouse","rightclick",0x9cef6603,"haxegon.Mouse.rightclick","haxegon/Mouse.hx",27,0x5196c828)
	HX_STACK_LINE(27)
	int tmp = ::haxegon::Mouse_obj::_rightcurrent;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(27)
	bool tmp1 = (tmp == (int)2);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(27)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Mouse_obj,rightclick,return )

bool Mouse_obj::rightreleased( ){
	HX_STACK_FRAME("haxegon.Mouse","rightreleased",0xdaa925e2,"haxegon.Mouse.rightreleased","haxegon/Mouse.hx",28,0x5196c828)
	HX_STACK_LINE(28)
	int tmp = ::haxegon::Mouse_obj::_rightcurrent;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(28)
	bool tmp1 = (tmp == (int)-1);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(28)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Mouse_obj,rightreleased,return )

bool Mouse_obj::middleheld( ){
	HX_STACK_FRAME("haxegon.Mouse","middleheld",0x7ad847a1,"haxegon.Mouse.middleheld","haxegon/Mouse.hx",30,0x5196c828)
	HX_STACK_LINE(30)
	int tmp = ::haxegon::Mouse_obj::_middlecurrent;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(30)
	bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(30)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Mouse_obj,middleheld,return )

bool Mouse_obj::middleclick( ){
	HX_STACK_FRAME("haxegon.Mouse","middleclick",0x2603b5dc,"haxegon.Mouse.middleclick","haxegon/Mouse.hx",31,0x5196c828)
	HX_STACK_LINE(31)
	int tmp = ::haxegon::Mouse_obj::_middlecurrent;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(31)
	bool tmp1 = (tmp == (int)2);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(31)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Mouse_obj,middleclick,return )

bool Mouse_obj::middlereleased( ){
	HX_STACK_FRAME("haxegon.Mouse","middlereleased",0xfd5f83a9,"haxegon.Mouse.middlereleased","haxegon/Mouse.hx",32,0x5196c828)
	HX_STACK_LINE(32)
	int tmp = ::haxegon::Mouse_obj::_middlecurrent;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(32)
	bool tmp1 = (tmp == (int)-1);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(32)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Mouse_obj,middlereleased,return )

Void Mouse_obj::init( ::openfl::display::DisplayObject stage){
{
		HX_STACK_FRAME("haxegon.Mouse","init",0x7abab2e7,"haxegon.Mouse.init","haxegon/Mouse.hx",34,0x5196c828)
		HX_STACK_ARG(stage,"stage")
		HX_STACK_LINE(37)
		Dynamic tmp = ::haxegon::Mouse_obj::handleRightMouseDown_dyn();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(37)
		stage->addEventListener(HX_HCSTRING("rightMouseDown","\xab","\x29","\xd7","\xcd"),tmp,null(),null(),null());
		HX_STACK_LINE(38)
		Dynamic tmp1 = ::haxegon::Mouse_obj::handleRightMouseUp_dyn();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(38)
		stage->addEventListener(HX_HCSTRING("rightMouseUp","\x64","\x83","\x21","\xab"),tmp1,null(),null(),null());
		HX_STACK_LINE(41)
		Dynamic tmp2 = ::haxegon::Mouse_obj::handleMouseDown_dyn();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(41)
		stage->addEventListener(HX_HCSTRING("mouseDown","\x27","\xb1","\xc2","\xee"),tmp2,null(),null(),null());
		HX_STACK_LINE(42)
		Dynamic tmp3 = ::haxegon::Mouse_obj::handleMouseUp_dyn();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(42)
		stage->addEventListener(HX_HCSTRING("mouseUp","\xe0","\xf3","\x72","\xc0"),tmp3,null(),null(),null());
		HX_STACK_LINE(43)
		Dynamic tmp4 = ::haxegon::Mouse_obj::handleMiddleMouseDown_dyn();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(43)
		stage->addEventListener(HX_HCSTRING("middleMouseDown","\x12","\x2b","\xfe","\x01"),tmp4,null(),null(),null());
		HX_STACK_LINE(44)
		Dynamic tmp5 = ::haxegon::Mouse_obj::handleMiddleMouseUp_dyn();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(44)
		stage->addEventListener(HX_HCSTRING("middleMouseUp","\x0b","\x8d","\xf5","\x3a"),tmp5,null(),null(),null());
		HX_STACK_LINE(45)
		Dynamic tmp6 = ::haxegon::Mouse_obj::mousewheelHandler_dyn();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(45)
		stage->addEventListener(HX_HCSTRING("mouseWheel","\x36","\x28","\x87","\xe7"),tmp6,null(),null(),null());
		HX_STACK_LINE(46)
		Dynamic tmp7 = ::haxegon::Mouse_obj::mouseOver_dyn();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(46)
		stage->addEventListener(HX_HCSTRING("mouseMove","\xd6","\x9b","\xb5","\xf4"),tmp7,null(),null(),null());
		HX_STACK_LINE(47)
		Dynamic tmp8 = ::haxegon::Mouse_obj::mouseLeave_dyn();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(47)
		stage->addEventListener(HX_HCSTRING("mouseLeave","\x92","\x28","\x20","\x90"),tmp8,null(),null(),null());
		HX_STACK_LINE(48)
		Dynamic tmp9 = ::haxegon::Mouse_obj::handleDeactivate_dyn();		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(48)
		stage->addEventListener(HX_HCSTRING("deactivate","\x34","\x5c","\x01","\x3c"),tmp9,null(),null(),null());
		HX_STACK_LINE(49)
		::haxegon::Mouse_obj::x = (int)0;
		HX_STACK_LINE(50)
		::haxegon::Mouse_obj::y = (int)0;
		HX_STACK_LINE(51)
		::haxegon::Mouse_obj::oldx = (int)0;
		HX_STACK_LINE(52)
		::haxegon::Mouse_obj::oldy = (int)0;
		HX_STACK_LINE(53)
		::haxegon::Mouse_obj::cursormoved = false;
		HX_STACK_LINE(54)
		::haxegon::Mouse_obj::_rightcurrent = (int)0;
		HX_STACK_LINE(55)
		::haxegon::Mouse_obj::_rightlast = (int)0;
		HX_STACK_LINE(56)
		::haxegon::Mouse_obj::_middlecurrent = (int)0;
		HX_STACK_LINE(57)
		::haxegon::Mouse_obj::_middlelast = (int)0;
		HX_STACK_LINE(58)
		::haxegon::Mouse_obj::_current = (int)0;
		HX_STACK_LINE(59)
		::haxegon::Mouse_obj::_last = (int)0;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Mouse_obj,init,(void))

Void Mouse_obj::unload( ::openfl::display::DisplayObject stage){
{
		HX_STACK_FRAME("haxegon.Mouse","unload",0x733afc96,"haxegon.Mouse.unload","haxegon/Mouse.hx",62,0x5196c828)
		HX_STACK_ARG(stage,"stage")
		HX_STACK_LINE(65)
		Dynamic tmp = ::haxegon::Mouse_obj::handleRightMouseDown_dyn();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(65)
		stage->removeEventListener(HX_HCSTRING("rightMouseDown","\xab","\x29","\xd7","\xcd"),tmp,null());
		HX_STACK_LINE(66)
		Dynamic tmp1 = ::haxegon::Mouse_obj::handleRightMouseUp_dyn();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(66)
		stage->removeEventListener(HX_HCSTRING("rightMouseUp","\x64","\x83","\x21","\xab"),tmp1,null());
		HX_STACK_LINE(69)
		Dynamic tmp2 = ::haxegon::Mouse_obj::handleMouseDown_dyn();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(69)
		stage->removeEventListener(HX_HCSTRING("mouseDown","\x27","\xb1","\xc2","\xee"),tmp2,null());
		HX_STACK_LINE(70)
		Dynamic tmp3 = ::haxegon::Mouse_obj::handleMouseUp_dyn();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(70)
		stage->removeEventListener(HX_HCSTRING("mouseUp","\xe0","\xf3","\x72","\xc0"),tmp3,null());
		HX_STACK_LINE(71)
		Dynamic tmp4 = ::haxegon::Mouse_obj::handleMiddleMouseDown_dyn();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(71)
		stage->removeEventListener(HX_HCSTRING("middleMouseDown","\x12","\x2b","\xfe","\x01"),tmp4,null());
		HX_STACK_LINE(72)
		Dynamic tmp5 = ::haxegon::Mouse_obj::handleMiddleMouseUp_dyn();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(72)
		stage->removeEventListener(HX_HCSTRING("middleMouseUp","\x0b","\x8d","\xf5","\x3a"),tmp5,null());
		HX_STACK_LINE(73)
		Dynamic tmp6 = ::haxegon::Mouse_obj::mousewheelHandler_dyn();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(73)
		stage->removeEventListener(HX_HCSTRING("mouseWheel","\x36","\x28","\x87","\xe7"),tmp6,null());
		HX_STACK_LINE(74)
		Dynamic tmp7 = ::haxegon::Mouse_obj::mouseOver_dyn();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(74)
		stage->removeEventListener(HX_HCSTRING("mouseMove","\xd6","\x9b","\xb5","\xf4"),tmp7,null());
		HX_STACK_LINE(75)
		Dynamic tmp8 = ::haxegon::Mouse_obj::mouseLeave_dyn();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(75)
		stage->removeEventListener(HX_HCSTRING("mouseLeave","\x92","\x28","\x20","\x90"),tmp8,null());
		HX_STACK_LINE(76)
		Dynamic tmp9 = ::haxegon::Mouse_obj::handleDeactivate_dyn();		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(76)
		stage->removeEventListener(HX_HCSTRING("deactivate","\x34","\x5c","\x01","\x3c"),tmp9,null());
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Mouse_obj,unload,(void))

Void Mouse_obj::mouseLeave( ::openfl::events::Event e){
{
		HX_STACK_FRAME("haxegon.Mouse","mouseLeave",0x75199ba9,"haxegon.Mouse.mouseLeave","haxegon/Mouse.hx",79,0x5196c828)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(80)
		::haxegon::Mouse_obj::mouseoffstage = true;
		HX_STACK_LINE(81)
		::haxegon::Mouse_obj::_current = (int)0;
		HX_STACK_LINE(82)
		::haxegon::Mouse_obj::_last = (int)0;
		HX_STACK_LINE(83)
		::haxegon::Mouse_obj::isdragging = false;
		HX_STACK_LINE(84)
		::haxegon::Mouse_obj::_rightcurrent = (int)0;
		HX_STACK_LINE(85)
		::haxegon::Mouse_obj::_rightlast = (int)0;
		HX_STACK_LINE(86)
		::haxegon::Mouse_obj::_middlecurrent = (int)0;
		HX_STACK_LINE(87)
		::haxegon::Mouse_obj::_middlelast = (int)0;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Mouse_obj,mouseLeave,(void))

Void Mouse_obj::mouseOver( ::openfl::events::MouseEvent e){
{
		HX_STACK_FRAME("haxegon.Mouse","mouseOver",0xb35906e2,"haxegon.Mouse.mouseOver","haxegon/Mouse.hx",91,0x5196c828)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(91)
		::haxegon::Mouse_obj::mouseoffstage = false;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Mouse_obj,mouseOver,(void))

Void Mouse_obj::mousewheelHandler( ::openfl::events::MouseEvent e){
{
		HX_STACK_FRAME("haxegon.Mouse","mousewheelHandler",0xcdd9a3dd,"haxegon.Mouse.mousewheelHandler","haxegon/Mouse.hx",95,0x5196c828)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(95)
		::haxegon::Mouse_obj::mousewheel = e->delta;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Mouse_obj,mousewheelHandler,(void))

Void Mouse_obj::visitsite( ::String t){
{
		HX_STACK_FRAME("haxegon.Mouse","visitsite",0x2eaf139b,"haxegon.Mouse.visitsite","haxegon/Mouse.hx",99,0x5196c828)
		HX_STACK_ARG(t,"t")
		HX_STACK_LINE(99)
		::haxegon::Mouse_obj::gotosite = t;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Mouse_obj,visitsite,(void))

Void Mouse_obj::show( ){
{
		HX_STACK_FRAME("haxegon.Mouse","show",0x81524cd4,"haxegon.Mouse.show","haxegon/Mouse.hx",103,0x5196c828)
		HX_STACK_LINE(103)
		::openfl::ui::Mouse_obj::show();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Mouse_obj,show,(void))

Void Mouse_obj::hide( ){
{
		HX_STACK_FRAME("haxegon.Mouse","hide",0x7a0dac99,"haxegon.Mouse.hide","haxegon/Mouse.hx",107,0x5196c828)
		HX_STACK_LINE(107)
		::openfl::ui::Mouse_obj::hide();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Mouse_obj,hide,(void))

Void Mouse_obj::update( int X,int Y){
{
		HX_STACK_FRAME("haxegon.Mouse","update",0x94b3e1a0,"haxegon.Mouse.update","haxegon/Mouse.hx",110,0x5196c828)
		HX_STACK_ARG(X,"X")
		HX_STACK_ARG(Y,"Y")
		HX_STACK_LINE(111)
		::haxegon::Mouse_obj::x = X;
		HX_STACK_LINE(112)
		::haxegon::Mouse_obj::y = Y;
		HX_STACK_LINE(114)
		int tmp = ::haxegon::Mouse_obj::x;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(114)
		int tmp1 = ::haxegon::Mouse_obj::oldx;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(114)
		bool tmp2 = (tmp == tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(114)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(114)
		if ((tmp2)){
			HX_STACK_LINE(114)
			int tmp4 = ::haxegon::Mouse_obj::y;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(114)
			int tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(114)
			int tmp6 = ::haxegon::Mouse_obj::oldy;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(114)
			int tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(114)
			tmp3 = (tmp5 == tmp7);
		}
		else{
			HX_STACK_LINE(114)
			tmp3 = false;
		}
		HX_STACK_LINE(114)
		if ((tmp3)){
			HX_STACK_LINE(115)
			::haxegon::Mouse_obj::cursormoved = false;
		}
		else{
			HX_STACK_LINE(117)
			int tmp4 = ::haxegon::Mouse_obj::x;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(117)
			::haxegon::Mouse_obj::oldx = tmp4;
			HX_STACK_LINE(117)
			int tmp5 = ::haxegon::Mouse_obj::y;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(117)
			::haxegon::Mouse_obj::oldy = tmp5;
			HX_STACK_LINE(118)
			::haxegon::Mouse_obj::cursormoved = true;
		}
		HX_STACK_LINE(121)
		int tmp4 = ::haxegon::Mouse_obj::_last;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(121)
		bool tmp5 = (tmp4 == (int)-1);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(121)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(121)
		if ((tmp5)){
			HX_STACK_LINE(121)
			int tmp7 = ::haxegon::Mouse_obj::_current;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(121)
			int tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(121)
			tmp6 = (tmp8 == (int)-1);
		}
		else{
			HX_STACK_LINE(121)
			tmp6 = false;
		}
		HX_STACK_LINE(121)
		if ((tmp6)){
			HX_STACK_LINE(122)
			::haxegon::Mouse_obj::_current = (int)0;
		}
		else{
			HX_STACK_LINE(123)
			int tmp7 = ::haxegon::Mouse_obj::_last;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(123)
			bool tmp8 = (tmp7 == (int)2);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(123)
			bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(123)
			if ((tmp8)){
				HX_STACK_LINE(123)
				int tmp10 = ::haxegon::Mouse_obj::_current;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(123)
				int tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(123)
				tmp9 = (tmp11 == (int)2);
			}
			else{
				HX_STACK_LINE(123)
				tmp9 = false;
			}
			HX_STACK_LINE(123)
			if ((tmp9)){
				HX_STACK_LINE(124)
				::haxegon::Mouse_obj::_current = (int)1;
			}
		}
		HX_STACK_LINE(125)
		int tmp7 = ::haxegon::Mouse_obj::_current;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(125)
		::haxegon::Mouse_obj::_last = tmp7;
		HX_STACK_LINE(127)
		int tmp8 = ::haxegon::Mouse_obj::_rightlast;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(127)
		bool tmp9 = (tmp8 == (int)-1);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(127)
		bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(127)
		if ((tmp9)){
			HX_STACK_LINE(127)
			int tmp11 = ::haxegon::Mouse_obj::_rightcurrent;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(127)
			int tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(127)
			tmp10 = (tmp12 == (int)-1);
		}
		else{
			HX_STACK_LINE(127)
			tmp10 = false;
		}
		HX_STACK_LINE(127)
		if ((tmp10)){
			HX_STACK_LINE(128)
			::haxegon::Mouse_obj::_rightcurrent = (int)0;
		}
		else{
			HX_STACK_LINE(129)
			int tmp11 = ::haxegon::Mouse_obj::_rightlast;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(129)
			bool tmp12 = (tmp11 == (int)2);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(129)
			bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(129)
			if ((tmp12)){
				HX_STACK_LINE(129)
				int tmp14 = ::haxegon::Mouse_obj::_rightcurrent;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(129)
				int tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(129)
				tmp13 = (tmp15 == (int)2);
			}
			else{
				HX_STACK_LINE(129)
				tmp13 = false;
			}
			HX_STACK_LINE(129)
			if ((tmp13)){
				HX_STACK_LINE(130)
				::haxegon::Mouse_obj::_rightcurrent = (int)1;
			}
		}
		HX_STACK_LINE(131)
		int tmp11 = ::haxegon::Mouse_obj::_rightcurrent;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(131)
		::haxegon::Mouse_obj::_rightlast = tmp11;
		HX_STACK_LINE(133)
		int tmp12 = ::haxegon::Mouse_obj::_middlelast;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(133)
		bool tmp13 = (tmp12 == (int)-1);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(133)
		bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(133)
		if ((tmp13)){
			HX_STACK_LINE(133)
			int tmp15 = ::haxegon::Mouse_obj::_middlecurrent;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(133)
			int tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(133)
			tmp14 = (tmp16 == (int)-1);
		}
		else{
			HX_STACK_LINE(133)
			tmp14 = false;
		}
		HX_STACK_LINE(133)
		if ((tmp14)){
			HX_STACK_LINE(134)
			::haxegon::Mouse_obj::_middlecurrent = (int)0;
		}
		else{
			HX_STACK_LINE(135)
			int tmp15 = ::haxegon::Mouse_obj::_middlelast;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(135)
			bool tmp16 = (tmp15 == (int)2);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(135)
			bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(135)
			if ((tmp16)){
				HX_STACK_LINE(135)
				int tmp18 = ::haxegon::Mouse_obj::_middlecurrent;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(135)
				int tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(135)
				tmp17 = (tmp19 == (int)2);
			}
			else{
				HX_STACK_LINE(135)
				tmp17 = false;
			}
			HX_STACK_LINE(135)
			if ((tmp17)){
				HX_STACK_LINE(136)
				::haxegon::Mouse_obj::_middlecurrent = (int)1;
			}
		}
		HX_STACK_LINE(137)
		int tmp15 = ::haxegon::Mouse_obj::_middlecurrent;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(137)
		::haxegon::Mouse_obj::_middlelast = tmp15;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Mouse_obj,update,(void))

Void Mouse_obj::reset( ){
{
		HX_STACK_FRAME("haxegon.Mouse","reset",0x1151ae18,"haxegon.Mouse.reset","haxegon/Mouse.hx",140,0x5196c828)
		HX_STACK_LINE(141)
		::haxegon::Mouse_obj::_current = (int)0;
		HX_STACK_LINE(142)
		::haxegon::Mouse_obj::_last = (int)0;
		HX_STACK_LINE(143)
		::haxegon::Mouse_obj::_rightcurrent = (int)0;
		HX_STACK_LINE(144)
		::haxegon::Mouse_obj::_rightlast = (int)0;
		HX_STACK_LINE(145)
		::haxegon::Mouse_obj::_middlecurrent = (int)0;
		HX_STACK_LINE(146)
		::haxegon::Mouse_obj::_middlelast = (int)0;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Mouse_obj,reset,(void))

Void Mouse_obj::handleRightMouseDown( ::openfl::events::MouseEvent event){
{
		HX_STACK_FRAME("haxegon.Mouse","handleRightMouseDown",0x8d2d2d4a,"haxegon.Mouse.handleRightMouseDown","haxegon/Mouse.hx",151,0x5196c828)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(151)
		int tmp = ::haxegon::Mouse_obj::_rightcurrent;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(151)
		bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(151)
		if ((tmp1)){
			HX_STACK_LINE(151)
			::haxegon::Mouse_obj::_rightcurrent = (int)1;
		}
		else{
			HX_STACK_LINE(151)
			::haxegon::Mouse_obj::_rightcurrent = (int)2;
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Mouse_obj,handleRightMouseDown,(void))

Void Mouse_obj::handleRightMouseUp( ::openfl::events::MouseEvent event){
{
		HX_STACK_FRAME("haxegon.Mouse","handleRightMouseUp",0x65111143,"haxegon.Mouse.handleRightMouseUp","haxegon/Mouse.hx",152,0x5196c828)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(152)
		int tmp = ::haxegon::Mouse_obj::_rightcurrent;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(152)
		bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(152)
		if ((tmp1)){
			HX_STACK_LINE(152)
			::haxegon::Mouse_obj::_rightcurrent = (int)-1;
		}
		else{
			HX_STACK_LINE(152)
			::haxegon::Mouse_obj::_rightcurrent = (int)0;
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Mouse_obj,handleRightMouseUp,(void))

Void Mouse_obj::handleMiddleMouseDown( ::openfl::events::MouseEvent event){
{
		HX_STACK_FRAME("haxegon.Mouse","handleMiddleMouseDown",0xadeb5293,"haxegon.Mouse.handleMiddleMouseDown","haxegon/Mouse.hx",155,0x5196c828)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(155)
		int tmp = ::haxegon::Mouse_obj::_middlecurrent;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(155)
		bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(155)
		if ((tmp1)){
			HX_STACK_LINE(155)
			::haxegon::Mouse_obj::_middlecurrent = (int)1;
		}
		else{
			HX_STACK_LINE(155)
			::haxegon::Mouse_obj::_middlecurrent = (int)2;
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Mouse_obj,handleMiddleMouseDown,(void))

Void Mouse_obj::handleMiddleMouseUp( ::openfl::events::MouseEvent event){
{
		HX_STACK_FRAME("haxegon.Mouse","handleMiddleMouseUp",0x32a2224c,"haxegon.Mouse.handleMiddleMouseUp","haxegon/Mouse.hx",156,0x5196c828)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(156)
		int tmp = ::haxegon::Mouse_obj::_middlecurrent;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(156)
		bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(156)
		if ((tmp1)){
			HX_STACK_LINE(156)
			::haxegon::Mouse_obj::_middlecurrent = (int)-1;
		}
		else{
			HX_STACK_LINE(156)
			::haxegon::Mouse_obj::_middlecurrent = (int)0;
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Mouse_obj,handleMiddleMouseUp,(void))

Void Mouse_obj::handleMouseDown( ::openfl::events::MouseEvent event){
{
		HX_STACK_FRAME("haxegon.Mouse","handleMouseDown",0x6e4951e8,"haxegon.Mouse.handleMouseDown","haxegon/Mouse.hx",158,0x5196c828)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(159)
		bool tmp = ::haxegon::Input_obj::pressed(::haxegon::Key_obj::CONTROL);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(159)
		if ((tmp)){
			HX_STACK_LINE(160)
			int tmp1 = ::haxegon::Mouse_obj::_rightcurrent;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(160)
			bool tmp2 = (tmp1 > (int)0);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(160)
			if ((tmp2)){
				HX_STACK_LINE(160)
				::haxegon::Mouse_obj::_rightcurrent = (int)1;
			}
			else{
				HX_STACK_LINE(161)
				::haxegon::Mouse_obj::_rightcurrent = (int)2;
			}
		}
		else{
			HX_STACK_LINE(163)
			int tmp1 = ::haxegon::Mouse_obj::_current;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(163)
			bool tmp2 = (tmp1 > (int)0);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(163)
			if ((tmp2)){
				HX_STACK_LINE(163)
				::haxegon::Mouse_obj::_current = (int)1;
			}
			else{
				HX_STACK_LINE(164)
				::haxegon::Mouse_obj::_current = (int)2;
			}
			HX_STACK_LINE(166)
			int tmp3 = ::haxegon::Mouse_obj::_current;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(166)
			bool tmp4 = (tmp3 == (int)2);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(166)
			if ((tmp4)){
				HX_STACK_LINE(167)
				::String tmp5 = ::haxegon::Mouse_obj::gotosite;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(167)
				bool tmp6 = (tmp5 != HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(167)
				if ((tmp6)){
					HX_STACK_LINE(168)
					::String tmp7 = ::haxegon::Mouse_obj::gotosite;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(168)
					::openfl::net::URLRequest tmp8 = ::openfl::net::URLRequest_obj::__new(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(168)
					::openfl::net::URLRequest link = tmp8;		HX_STACK_VAR(link,"link");
					HX_STACK_LINE(169)
					::openfl::net::URLRequest tmp9 = link;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(169)
					::openfl::Lib_obj::getURL(tmp9,null());
					HX_STACK_LINE(170)
					::haxegon::Mouse_obj::gotosite = HX_HCSTRING("","\x00","\x00","\x00","\x00");
				}
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Mouse_obj,handleMouseDown,(void))

Void Mouse_obj::handleMouseUp( ::openfl::events::MouseEvent event){
{
		HX_STACK_FRAME("haxegon.Mouse","handleMouseUp",0xa84c3261,"haxegon.Mouse.handleMouseUp","haxegon/Mouse.hx",176,0x5196c828)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(177)
		int tmp = ::haxegon::Mouse_obj::_rightcurrent;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(177)
		bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(177)
		if ((tmp1)){
			HX_STACK_LINE(177)
			::haxegon::Mouse_obj::_rightcurrent = (int)-1;
		}
		else{
			HX_STACK_LINE(178)
			::haxegon::Mouse_obj::_rightcurrent = (int)0;
		}
		HX_STACK_LINE(180)
		int tmp2 = ::haxegon::Mouse_obj::_current;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(180)
		bool tmp3 = (tmp2 > (int)0);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(180)
		if ((tmp3)){
			HX_STACK_LINE(180)
			::haxegon::Mouse_obj::_current = (int)-1;
		}
		else{
			HX_STACK_LINE(181)
			::haxegon::Mouse_obj::_current = (int)0;
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Mouse_obj,handleMouseUp,(void))

Void Mouse_obj::handleDeactivate( ::openfl::events::Event e){
{
		HX_STACK_FRAME("haxegon.Mouse","handleDeactivate",0x52476453,"haxegon.Mouse.handleDeactivate","haxegon/Mouse.hx",184,0x5196c828)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(185)
		::haxegon::Mouse_obj::_current = (int)0;
		HX_STACK_LINE(186)
		::haxegon::Mouse_obj::_rightcurrent = (int)0;
		HX_STACK_LINE(187)
		::haxegon::Mouse_obj::_middlecurrent = (int)0;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Mouse_obj,handleDeactivate,(void))

int Mouse_obj::_current;

int Mouse_obj::_last;

int Mouse_obj::_middlecurrent;

int Mouse_obj::_middlelast;

int Mouse_obj::_rightcurrent;

int Mouse_obj::_rightlast;

::String Mouse_obj::gotosite;


Mouse_obj::Mouse_obj()
{
}

bool Mouse_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { outValue = x; return true;  }
		if (HX_FIELD_EQ(inName,"y") ) { outValue = y; return true;  }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"oldx") ) { outValue = oldx; return true;  }
		if (HX_FIELD_EQ(inName,"oldy") ) { outValue = oldy; return true;  }
		if (HX_FIELD_EQ(inName,"init") ) { outValue = init_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"show") ) { outValue = show_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"hide") ) { outValue = hide_dyn(); return true;  }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"reset") ) { outValue = reset_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"_last") ) { outValue = _last; return true;  }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"unload") ) { outValue = unload_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"update") ) { outValue = update_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"leftheld") ) { outValue = leftheld_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"_current") ) { outValue = _current; return true;  }
		if (HX_FIELD_EQ(inName,"gotosite") ) { outValue = gotosite; return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"leftclick") ) { outValue = leftclick_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"rightheld") ) { outValue = rightheld_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"mouseOver") ) { outValue = mouseOver_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"visitsite") ) { outValue = visitsite_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"mousewheel") ) { outValue = mousewheel; return true;  }
		if (HX_FIELD_EQ(inName,"isdragging") ) { outValue = isdragging; return true;  }
		if (HX_FIELD_EQ(inName,"rightclick") ) { outValue = rightclick_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"middleheld") ) { outValue = middleheld_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"mouseLeave") ) { outValue = mouseLeave_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"_rightlast") ) { outValue = _rightlast; return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"cursormoved") ) { outValue = cursormoved; return true;  }
		if (HX_FIELD_EQ(inName,"middleclick") ) { outValue = middleclick_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"_middlelast") ) { outValue = _middlelast; return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"leftreleased") ) { outValue = leftreleased_dyn(); return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"mouseoffstage") ) { outValue = mouseoffstage; return true;  }
		if (HX_FIELD_EQ(inName,"rightreleased") ) { outValue = rightreleased_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"handleMouseUp") ) { outValue = handleMouseUp_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"_rightcurrent") ) { outValue = _rightcurrent; return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"middlereleased") ) { outValue = middlereleased_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"_middlecurrent") ) { outValue = _middlecurrent; return true;  }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"handleMouseDown") ) { outValue = handleMouseDown_dyn(); return true;  }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"handleDeactivate") ) { outValue = handleDeactivate_dyn(); return true;  }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"mousewheelHandler") ) { outValue = mousewheelHandler_dyn(); return true;  }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"handleRightMouseUp") ) { outValue = handleRightMouseUp_dyn(); return true;  }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"handleMiddleMouseUp") ) { outValue = handleMiddleMouseUp_dyn(); return true;  }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"handleRightMouseDown") ) { outValue = handleRightMouseDown_dyn(); return true;  }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"handleMiddleMouseDown") ) { outValue = handleMiddleMouseDown_dyn(); return true;  }
	}
	return false;
}

bool Mouse_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"y") ) { y=ioValue.Cast< int >(); return true; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"oldx") ) { oldx=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"oldy") ) { oldy=ioValue.Cast< int >(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_last") ) { _last=ioValue.Cast< int >(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_current") ) { _current=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"gotosite") ) { gotosite=ioValue.Cast< ::String >(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"mousewheel") ) { mousewheel=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"isdragging") ) { isdragging=ioValue.Cast< bool >(); return true; }
		if (HX_FIELD_EQ(inName,"_rightlast") ) { _rightlast=ioValue.Cast< int >(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"cursormoved") ) { cursormoved=ioValue.Cast< bool >(); return true; }
		if (HX_FIELD_EQ(inName,"_middlelast") ) { _middlelast=ioValue.Cast< int >(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"mouseoffstage") ) { mouseoffstage=ioValue.Cast< bool >(); return true; }
		if (HX_FIELD_EQ(inName,"_rightcurrent") ) { _rightcurrent=ioValue.Cast< int >(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_middlecurrent") ) { _middlecurrent=ioValue.Cast< int >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &Mouse_obj::x,HX_HCSTRING("x","\x78","\x00","\x00","\x00")},
	{hx::fsInt,(void *) &Mouse_obj::y,HX_HCSTRING("y","\x79","\x00","\x00","\x00")},
	{hx::fsInt,(void *) &Mouse_obj::oldx,HX_HCSTRING("oldx","\xf1","\xf9","\xb0","\x49")},
	{hx::fsInt,(void *) &Mouse_obj::oldy,HX_HCSTRING("oldy","\xf2","\xf9","\xb0","\x49")},
	{hx::fsInt,(void *) &Mouse_obj::mousewheel,HX_HCSTRING("mousewheel","\x56","\xb8","\x59","\x54")},
	{hx::fsBool,(void *) &Mouse_obj::cursormoved,HX_HCSTRING("cursormoved","\x9d","\xb5","\x19","\x02")},
	{hx::fsBool,(void *) &Mouse_obj::mouseoffstage,HX_HCSTRING("mouseoffstage","\x14","\x48","\x2e","\x60")},
	{hx::fsBool,(void *) &Mouse_obj::isdragging,HX_HCSTRING("isdragging","\xb9","\x92","\x89","\xd8")},
	{hx::fsInt,(void *) &Mouse_obj::_current,HX_HCSTRING("_current","\xba","\xf5","\x9b","\x05")},
	{hx::fsInt,(void *) &Mouse_obj::_last,HX_HCSTRING("_last","\x35","\x26","\xbe","\xfa")},
	{hx::fsInt,(void *) &Mouse_obj::_middlecurrent,HX_HCSTRING("_middlecurrent","\xc5","\xfd","\x66","\xb7")},
	{hx::fsInt,(void *) &Mouse_obj::_middlelast,HX_HCSTRING("_middlelast","\x4a","\x79","\x0a","\x6b")},
	{hx::fsInt,(void *) &Mouse_obj::_rightcurrent,HX_HCSTRING("_rightcurrent","\xbc","\x96","\xaf","\xcb")},
	{hx::fsInt,(void *) &Mouse_obj::_rightlast,HX_HCSTRING("_rightlast","\xf3","\xaf","\x3c","\x23")},
	{hx::fsString,(void *) &Mouse_obj::gotosite,HX_HCSTRING("gotosite","\xaa","\x42","\x4e","\xa2")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Mouse_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Mouse_obj::x,"x");
	HX_MARK_MEMBER_NAME(Mouse_obj::y,"y");
	HX_MARK_MEMBER_NAME(Mouse_obj::oldx,"oldx");
	HX_MARK_MEMBER_NAME(Mouse_obj::oldy,"oldy");
	HX_MARK_MEMBER_NAME(Mouse_obj::mousewheel,"mousewheel");
	HX_MARK_MEMBER_NAME(Mouse_obj::cursormoved,"cursormoved");
	HX_MARK_MEMBER_NAME(Mouse_obj::mouseoffstage,"mouseoffstage");
	HX_MARK_MEMBER_NAME(Mouse_obj::isdragging,"isdragging");
	HX_MARK_MEMBER_NAME(Mouse_obj::_current,"_current");
	HX_MARK_MEMBER_NAME(Mouse_obj::_last,"_last");
	HX_MARK_MEMBER_NAME(Mouse_obj::_middlecurrent,"_middlecurrent");
	HX_MARK_MEMBER_NAME(Mouse_obj::_middlelast,"_middlelast");
	HX_MARK_MEMBER_NAME(Mouse_obj::_rightcurrent,"_rightcurrent");
	HX_MARK_MEMBER_NAME(Mouse_obj::_rightlast,"_rightlast");
	HX_MARK_MEMBER_NAME(Mouse_obj::gotosite,"gotosite");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Mouse_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Mouse_obj::x,"x");
	HX_VISIT_MEMBER_NAME(Mouse_obj::y,"y");
	HX_VISIT_MEMBER_NAME(Mouse_obj::oldx,"oldx");
	HX_VISIT_MEMBER_NAME(Mouse_obj::oldy,"oldy");
	HX_VISIT_MEMBER_NAME(Mouse_obj::mousewheel,"mousewheel");
	HX_VISIT_MEMBER_NAME(Mouse_obj::cursormoved,"cursormoved");
	HX_VISIT_MEMBER_NAME(Mouse_obj::mouseoffstage,"mouseoffstage");
	HX_VISIT_MEMBER_NAME(Mouse_obj::isdragging,"isdragging");
	HX_VISIT_MEMBER_NAME(Mouse_obj::_current,"_current");
	HX_VISIT_MEMBER_NAME(Mouse_obj::_last,"_last");
	HX_VISIT_MEMBER_NAME(Mouse_obj::_middlecurrent,"_middlecurrent");
	HX_VISIT_MEMBER_NAME(Mouse_obj::_middlelast,"_middlelast");
	HX_VISIT_MEMBER_NAME(Mouse_obj::_rightcurrent,"_rightcurrent");
	HX_VISIT_MEMBER_NAME(Mouse_obj::_rightlast,"_rightlast");
	HX_VISIT_MEMBER_NAME(Mouse_obj::gotosite,"gotosite");
};

#endif

hx::Class Mouse_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("x","\x78","\x00","\x00","\x00"),
	HX_HCSTRING("y","\x79","\x00","\x00","\x00"),
	HX_HCSTRING("oldx","\xf1","\xf9","\xb0","\x49"),
	HX_HCSTRING("oldy","\xf2","\xf9","\xb0","\x49"),
	HX_HCSTRING("mousewheel","\x56","\xb8","\x59","\x54"),
	HX_HCSTRING("cursormoved","\x9d","\xb5","\x19","\x02"),
	HX_HCSTRING("mouseoffstage","\x14","\x48","\x2e","\x60"),
	HX_HCSTRING("isdragging","\xb9","\x92","\x89","\xd8"),
	HX_HCSTRING("leftheld","\x3c","\x4a","\x2d","\x61"),
	HX_HCSTRING("leftclick","\xe1","\xfa","\x10","\xca"),
	HX_HCSTRING("leftreleased","\xc4","\x6f","\x79","\x3e"),
	HX_HCSTRING("rightheld","\x91","\x5c","\xf8","\xc4"),
	HX_HCSTRING("rightclick","\xec","\xf2","\xf5","\xb7"),
	HX_HCSTRING("rightreleased","\x99","\xd0","\x44","\x0b"),
	HX_HCSTRING("middleheld","\x8a","\xd4","\xde","\x95"),
	HX_HCSTRING("middleclick","\xd3","\x74","\xb8","\xb0"),
	HX_HCSTRING("middlereleased","\x12","\x39","\xf9","\x54"),
	HX_HCSTRING("init","\x10","\x3b","\xbb","\x45"),
	HX_HCSTRING("unload","\xff","\xa0","\x8c","\x65"),
	HX_HCSTRING("mouseLeave","\x92","\x28","\x20","\x90"),
	HX_HCSTRING("mouseOver","\x19","\x4a","\x0d","\xf6"),
	HX_HCSTRING("mousewheelHandler","\x14","\x76","\xe6","\x64"),
	HX_HCSTRING("visitsite","\xd2","\x56","\x63","\x71"),
	HX_HCSTRING("show","\xfd","\xd4","\x52","\x4c"),
	HX_HCSTRING("hide","\xc2","\x34","\x0e","\x45"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("reset","\xcf","\x49","\xc8","\xe6"),
	HX_HCSTRING("handleRightMouseDown","\x73","\x57","\xca","\xd8"),
	HX_HCSTRING("handleRightMouseUp","\x2c","\x2f","\x3c","\xf9"),
	HX_HCSTRING("handleMiddleMouseDown","\x4a","\x0c","\xd3","\x8b"),
	HX_HCSTRING("handleMiddleMouseUp","\x43","\x30","\x31","\x44"),
	HX_HCSTRING("handleMouseDown","\x5f","\x58","\x2e","\xbd"),
	HX_HCSTRING("handleMouseUp","\x18","\xdd","\xe7","\xd8"),
	HX_HCSTRING("handleDeactivate","\xfc","\x05","\xc8","\x0b"),
	HX_HCSTRING("_current","\xba","\xf5","\x9b","\x05"),
	HX_HCSTRING("_last","\x35","\x26","\xbe","\xfa"),
	HX_HCSTRING("_middlecurrent","\xc5","\xfd","\x66","\xb7"),
	HX_HCSTRING("_middlelast","\x4a","\x79","\x0a","\x6b"),
	HX_HCSTRING("_rightcurrent","\xbc","\x96","\xaf","\xcb"),
	HX_HCSTRING("_rightlast","\xf3","\xaf","\x3c","\x23"),
	HX_HCSTRING("gotosite","\xaa","\x42","\x4e","\xa2"),
	::String(null()) };

void Mouse_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxegon.Mouse","\xf7","\xf7","\x95","\x13");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Mouse_obj::__GetStatic;
	__mClass->mSetStaticField = &Mouse_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Mouse_obj >;
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

void Mouse_obj::__boot()
{
	mousewheel= (int)0;
	gotosite= HX_HCSTRING("","\x00","\x00","\x00","\x00");
}

} // end namespace haxegon
