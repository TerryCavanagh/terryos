#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_BalancedTree
#include <haxe/ds/BalancedTree.h>
#endif
#ifndef INCLUDED_haxe_ds_EnumValueMap
#include <haxe/ds/EnumValueMap.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxegon_Input
#include <haxegon/Input.h>
#endif
#ifndef INCLUDED_haxegon_Key
#include <haxegon/Key.h>
#endif
#ifndef INCLUDED_haxegon_Keystate
#include <haxegon/Keystate.h>
#endif
#ifndef INCLUDED_haxegon_Text
#include <haxegon/Text.h>
#endif
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
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
#ifndef INCLUDED_openfl_events_KeyboardEvent
#include <openfl/events/KeyboardEvent.h>
#endif
#ifndef INCLUDED_openfl_events_TextEvent
#include <openfl/events/TextEvent.h>
#endif
namespace haxegon{

Void Input_obj::__construct()
{
	return null();
}

//Input_obj::~Input_obj() { }

Dynamic Input_obj::__CreateEmpty() { return  new Input_obj; }
hx::ObjectPtr< Input_obj > Input_obj::__new()
{  hx::ObjectPtr< Input_obj > _result_ = new Input_obj();
	_result_->__construct();
	return _result_;}

Dynamic Input_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Input_obj > _result_ = new Input_obj();
	_result_->__construct();
	return _result_;}

bool Input_obj::pressed( ::haxegon::Key k){
	HX_STACK_FRAME("haxegon.Input","pressed",0x24693610,"haxegon.Input.pressed","haxegon/Input.hx",26,0x74261763)
	HX_STACK_ARG(k,"k")
	HX_STACK_LINE(27)
	::haxe::ds::EnumValueMap tmp = ::haxegon::Input_obj::keymap;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(27)
	::haxegon::Key tmp1 = k;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(27)
	Dynamic tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(27)
	Dynamic tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(27)
	int tmp4 = ::haxegon::Input_obj::keyheld->__get(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(27)
	bool tmp5 = (tmp4 >= (int)0);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(27)
	return tmp5;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Input_obj,pressed,return )

bool Input_obj::justpressed( ::haxegon::Key k){
	HX_STACK_FRAME("haxegon.Input","justpressed",0x7a599864,"haxegon.Input.justpressed","haxegon/Input.hx",30,0x74261763)
	HX_STACK_ARG(k,"k")
	HX_STACK_LINE(31)
	::haxe::ds::EnumValueMap tmp = ::haxegon::Input_obj::keymap;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(31)
	::haxegon::Key tmp1 = k;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(31)
	Dynamic tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(31)
	Dynamic tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(31)
	::haxegon::Keystate tmp4 = ::haxegon::Input_obj::current->__get(tmp3).StaticCast< ::haxegon::Keystate >();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(31)
	bool tmp5 = (tmp4 == ::haxegon::Keystate_obj::justpressed);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(31)
	if ((tmp5)){
		HX_STACK_LINE(33)
		return true;
	}
	else{
		HX_STACK_LINE(35)
		return false;
	}
	HX_STACK_LINE(31)
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Input_obj,justpressed,return )

bool Input_obj::justreleased( ::haxegon::Key k){
	HX_STACK_FRAME("haxegon.Input","justreleased",0x9ae1ccbb,"haxegon.Input.justreleased","haxegon/Input.hx",39,0x74261763)
	HX_STACK_ARG(k,"k")
	HX_STACK_LINE(40)
	::haxe::ds::EnumValueMap tmp = ::haxegon::Input_obj::keymap;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(40)
	::haxegon::Key tmp1 = k;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(40)
	Dynamic tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(40)
	Dynamic tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(40)
	::haxegon::Keystate tmp4 = ::haxegon::Input_obj::current->__get(tmp3).StaticCast< ::haxegon::Keystate >();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(40)
	bool tmp5 = (tmp4 == ::haxegon::Keystate_obj::justreleased);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(40)
	if ((tmp5)){
		HX_STACK_LINE(41)
		::haxe::ds::EnumValueMap tmp6 = ::haxegon::Input_obj::keymap;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(41)
		::haxegon::Key tmp7 = k;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(41)
		Dynamic tmp8 = tmp6->get(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(41)
		Dynamic tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(41)
		::haxegon::Input_obj::current[tmp9] = ::haxegon::Keystate_obj::notpressed;
		HX_STACK_LINE(42)
		return true;
	}
	else{
		HX_STACK_LINE(44)
		return false;
	}
	HX_STACK_LINE(40)
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Input_obj,justreleased,return )

Void Input_obj::forcerelease( ::haxegon::Key k){
{
		HX_STACK_FRAME("haxegon.Input","forcerelease",0x3f48250e,"haxegon.Input.forcerelease","haxegon/Input.hx",48,0x74261763)
		HX_STACK_ARG(k,"k")
		HX_STACK_LINE(49)
		::haxe::ds::EnumValueMap tmp = ::haxegon::Input_obj::keymap;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(49)
		::haxegon::Key tmp1 = k;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(49)
		Dynamic tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(49)
		::haxegon::Input_obj::keycode = tmp2;
		HX_STACK_LINE(50)
		int tmp3 = ::haxegon::Input_obj::keycode;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(50)
		int tmp4 = ::haxegon::Input_obj::keyheld->__get(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(50)
		bool tmp5 = (tmp4 >= (int)0);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(50)
		if ((tmp5)){
			HX_STACK_LINE(51)
			int tmp6 = ::haxegon::Input_obj::keycode;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(51)
			::haxegon::Input_obj::current[tmp6] = ::haxegon::Keystate_obj::forcerelease;
			HX_STACK_LINE(52)
			int tmp7 = ::haxegon::Input_obj::keycode;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(52)
			::haxegon::Input_obj::last[tmp7] = ::haxegon::Keystate_obj::forcerelease;
			HX_STACK_LINE(53)
			int tmp8 = ::haxegon::Input_obj::keycode;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(53)
			::haxegon::Input_obj::keyheld[tmp8] = (int)-1;
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Input_obj,forcerelease,(void))

int Input_obj::pressheldtime( ::haxegon::Key k){
	HX_STACK_FRAME("haxegon.Input","pressheldtime",0xde53b5b3,"haxegon.Input.pressheldtime","haxegon/Input.hx",57,0x74261763)
	HX_STACK_ARG(k,"k")
	HX_STACK_LINE(58)
	::haxe::ds::EnumValueMap tmp = ::haxegon::Input_obj::keymap;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(58)
	::haxegon::Key tmp1 = k;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(58)
	Dynamic tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(58)
	::haxegon::Input_obj::keycode = tmp2;
	HX_STACK_LINE(59)
	int tmp3 = ::haxegon::Input_obj::keycode;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(59)
	int tmp4 = ::haxegon::Input_obj::keyheld->__get(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(59)
	return tmp4;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Input_obj,pressheldtime,return )

bool Input_obj::delaypressed( ::haxegon::Key k,int repeatframes,Dynamic __o_instantreps){
Dynamic instantreps = __o_instantreps.Default(-1);
	HX_STACK_FRAME("haxegon.Input","delaypressed",0xe461af51,"haxegon.Input.delaypressed","haxegon/Input.hx",67,0x74261763)
	HX_STACK_ARG(k,"k")
	HX_STACK_ARG(repeatframes,"repeatframes")
	HX_STACK_ARG(instantreps,"instantreps")
{
		HX_STACK_LINE(68)
		::haxe::ds::EnumValueMap tmp = ::haxegon::Input_obj::keymap;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(68)
		::haxegon::Key tmp1 = k;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(68)
		Dynamic tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(68)
		::haxegon::Input_obj::keycode = tmp2;
		HX_STACK_LINE(69)
		int tmp3 = ::haxegon::Input_obj::keycode;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(69)
		int tmp4 = ::haxegon::Input_obj::keyheld->__get(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(69)
		bool tmp5 = (tmp4 >= (int)1);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(69)
		if ((tmp5)){
			HX_STACK_LINE(70)
			int tmp6 = ::haxegon::Input_obj::keycode;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(70)
			int tmp7 = ::haxegon::Input_obj::keyheld->__get(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(70)
			bool tmp8 = (tmp7 == (int)1);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(70)
			if ((tmp8)){
				HX_STACK_LINE(71)
				return true;
			}
			else{
				HX_STACK_LINE(73)
				int tmp9 = ::haxegon::Input_obj::keycode;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(73)
				int tmp10 = ::haxegon::Input_obj::keyheld->__get(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(73)
				Float tmp11 = (((Float)2.35) * repeatframes);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(73)
				int tmp12 = ::Std_obj::_int(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(73)
				int tmp13 = (tmp10 - tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(73)
				int tmp14 = (tmp13 - (int)1);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(73)
				int repeatheld = tmp14;		HX_STACK_VAR(repeatheld,"repeatheld");
				HX_STACK_LINE(74)
				bool tmp15 = (repeatheld >= (int)0);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(74)
				bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(74)
				if ((tmp15)){
					HX_STACK_LINE(74)
					int tmp17 = hx::Mod(repeatheld,repeatframes);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(74)
					int tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(74)
					tmp16 = (tmp18 == (int)0);
				}
				else{
					HX_STACK_LINE(74)
					tmp16 = false;
				}
				HX_STACK_LINE(74)
				if ((tmp16)){
					HX_STACK_LINE(75)
					return true;
				}
				else{
					HX_STACK_LINE(76)
					bool tmp17 = (instantreps >= (int)1);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(76)
					bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(76)
					if ((tmp17)){
						HX_STACK_LINE(76)
						int tmp19 = repeatheld;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(76)
						int tmp20 = (instantreps * repeatframes);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(76)
						int tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(76)
						tmp18 = (tmp19 >= tmp21);
					}
					else{
						HX_STACK_LINE(76)
						tmp18 = false;
					}
					HX_STACK_LINE(76)
					if ((tmp18)){
						HX_STACK_LINE(77)
						return true;
					}
				}
			}
		}
		HX_STACK_LINE(81)
		return false;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Input_obj,delaypressed,return )

Void Input_obj::init( ::openfl::display::Stage stage){
{
		HX_STACK_FRAME("haxegon.Input","init",0xdb2886e2,"haxegon.Input.init","haxegon/Input.hx",84,0x74261763)
		HX_STACK_ARG(stage,"stage")
		HX_STACK_LINE(85)
		::haxegon::Input_obj::gamestage = stage;
		HX_STACK_LINE(86)
		Dynamic tmp = ::haxegon::Input_obj::handlekeydown_dyn();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(86)
		stage->addEventListener(HX_HCSTRING("keyDown","\xa1","\x69","\x47","\x9c"),tmp,null(),null(),null());
		HX_STACK_LINE(87)
		Dynamic tmp1 = ::haxegon::Input_obj::handlekeyup_dyn();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(87)
		stage->addEventListener(HX_HCSTRING("keyUp","\xda","\xb9","\xfe","\xde"),tmp1,null(),null(),null());
		HX_STACK_LINE(88)
		Dynamic tmp2 = ::haxegon::Input_obj::handletextinput_dyn();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(88)
		stage->addEventListener(HX_HCSTRING("textInput","\x1d","\x54","\x0b","\x57"),tmp2,null(),null(),null());
		HX_STACK_LINE(89)
		Dynamic tmp3 = ::haxegon::Input_obj::handledeactivate_dyn();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(89)
		stage->addEventListener(HX_HCSTRING("deactivate","\x34","\x5c","\x01","\x3c"),tmp3,null(),null(),null());
		HX_STACK_LINE(91)
		::haxegon::Input_obj::clipboardbuffer = Array_obj< ::String >::__new().Add(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
		HX_STACK_LINE(92)
		::haxegon::Input_obj::cut = false;
		HX_STACK_LINE(93)
		::haxegon::Input_obj::paste = false;
		HX_STACK_LINE(94)
		::haxegon::Input_obj::selectall = false;
		HX_STACK_LINE(95)
		::haxegon::Input_obj::undo = false;
		HX_STACK_LINE(96)
		::haxegon::Input_obj::redo = false;
		HX_STACK_LINE(105)
		::haxegon::Input_obj::resetKeys();
		HX_STACK_LINE(108)
		::haxe::ds::StringMap tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(108)
		{
			HX_STACK_LINE(108)
			::haxe::ds::StringMap tmp5 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(108)
			::haxe::ds::StringMap tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(108)
			tmp4 = tmp6;
		}
		HX_STACK_LINE(108)
		::haxegon::Input_obj::_nativeCorrection = tmp4;
		HX_STACK_LINE(110)
		::haxe::ds::StringMap tmp5 = ::haxegon::Input_obj::_nativeCorrection;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(110)
		tmp5->set(HX_HCSTRING("0_64","\x2d","\x83","\x02","\x20"),(int)45);
		HX_STACK_LINE(111)
		::haxe::ds::StringMap tmp6 = ::haxegon::Input_obj::_nativeCorrection;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(111)
		tmp6->set(HX_HCSTRING("0_65","\x2e","\x83","\x02","\x20"),(int)35);
		HX_STACK_LINE(112)
		::haxe::ds::StringMap tmp7 = ::haxegon::Input_obj::_nativeCorrection;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(112)
		tmp7->set(HX_HCSTRING("0_67","\x30","\x83","\x02","\x20"),(int)34);
		HX_STACK_LINE(113)
		::haxe::ds::StringMap tmp8 = ::haxegon::Input_obj::_nativeCorrection;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(113)
		tmp8->set(HX_HCSTRING("0_69","\x32","\x83","\x02","\x20"),(int)-1);
		HX_STACK_LINE(114)
		::haxe::ds::StringMap tmp9 = ::haxegon::Input_obj::_nativeCorrection;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(114)
		tmp9->set(HX_HCSTRING("0_73","\x0b","\x84","\x02","\x20"),(int)33);
		HX_STACK_LINE(115)
		::haxe::ds::StringMap tmp10 = ::haxegon::Input_obj::_nativeCorrection;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(115)
		tmp10->set(HX_HCSTRING("0_266","\x23","\x3d","\x2d","\xe2"),(int)46);
		HX_STACK_LINE(116)
		::haxe::ds::StringMap tmp11 = ::haxegon::Input_obj::_nativeCorrection;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(116)
		tmp11->set(HX_HCSTRING("123_222","\xa5","\xbc","\xd4","\x8f"),(int)219);
		HX_STACK_LINE(117)
		::haxe::ds::StringMap tmp12 = ::haxegon::Input_obj::_nativeCorrection;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(117)
		tmp12->set(HX_HCSTRING("125_187","\xa5","\x28","\xa1","\xb6"),(int)221);
		HX_STACK_LINE(118)
		::haxe::ds::StringMap tmp13 = ::haxegon::Input_obj::_nativeCorrection;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(118)
		tmp13->set(HX_HCSTRING("126_233","\x08","\x7b","\x08","\x4a"),(int)192);
		HX_STACK_LINE(120)
		::haxe::ds::StringMap tmp14 = ::haxegon::Input_obj::_nativeCorrection;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(120)
		tmp14->set(HX_HCSTRING("0_80","\xe7","\x84","\x02","\x20"),(int)112);
		HX_STACK_LINE(121)
		::haxe::ds::StringMap tmp15 = ::haxegon::Input_obj::_nativeCorrection;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(121)
		tmp15->set(HX_HCSTRING("0_81","\xe8","\x84","\x02","\x20"),(int)113);
		HX_STACK_LINE(122)
		::haxe::ds::StringMap tmp16 = ::haxegon::Input_obj::_nativeCorrection;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(122)
		tmp16->set(HX_HCSTRING("0_82","\xe9","\x84","\x02","\x20"),(int)114);
		HX_STACK_LINE(123)
		::haxe::ds::StringMap tmp17 = ::haxegon::Input_obj::_nativeCorrection;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(123)
		tmp17->set(HX_HCSTRING("0_83","\xea","\x84","\x02","\x20"),(int)115);
		HX_STACK_LINE(124)
		::haxe::ds::StringMap tmp18 = ::haxegon::Input_obj::_nativeCorrection;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(124)
		tmp18->set(HX_HCSTRING("0_84","\xeb","\x84","\x02","\x20"),(int)116);
		HX_STACK_LINE(125)
		::haxe::ds::StringMap tmp19 = ::haxegon::Input_obj::_nativeCorrection;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(125)
		tmp19->set(HX_HCSTRING("0_85","\xec","\x84","\x02","\x20"),(int)117);
		HX_STACK_LINE(126)
		::haxe::ds::StringMap tmp20 = ::haxegon::Input_obj::_nativeCorrection;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(126)
		tmp20->set(HX_HCSTRING("0_86","\xed","\x84","\x02","\x20"),(int)118);
		HX_STACK_LINE(127)
		::haxe::ds::StringMap tmp21 = ::haxegon::Input_obj::_nativeCorrection;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(127)
		tmp21->set(HX_HCSTRING("0_87","\xee","\x84","\x02","\x20"),(int)119);
		HX_STACK_LINE(128)
		::haxe::ds::StringMap tmp22 = ::haxegon::Input_obj::_nativeCorrection;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(128)
		tmp22->set(HX_HCSTRING("0_88","\xef","\x84","\x02","\x20"),(int)120);
		HX_STACK_LINE(129)
		::haxe::ds::StringMap tmp23 = ::haxegon::Input_obj::_nativeCorrection;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(129)
		tmp23->set(HX_HCSTRING("0_89","\xf0","\x84","\x02","\x20"),(int)121);
		HX_STACK_LINE(130)
		::haxe::ds::StringMap tmp24 = ::haxegon::Input_obj::_nativeCorrection;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(130)
		tmp24->set(HX_HCSTRING("0_90","\xc6","\x85","\x02","\x20"),(int)122);
		HX_STACK_LINE(132)
		::haxe::ds::StringMap tmp25 = ::haxegon::Input_obj::_nativeCorrection;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(132)
		tmp25->set(HX_HCSTRING("48_224","\xf9","\xa0","\xf0","\x47"),(int)48);
		HX_STACK_LINE(133)
		::haxe::ds::StringMap tmp26 = ::haxegon::Input_obj::_nativeCorrection;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(133)
		tmp26->set(HX_HCSTRING("49_38","\x5f","\x96","\xcb","\x16"),(int)49);
		HX_STACK_LINE(134)
		::haxe::ds::StringMap tmp27 = ::haxegon::Input_obj::_nativeCorrection;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(134)
		tmp27->set(HX_HCSTRING("50_233","\x2e","\x5a","\x17","\x13"),(int)50);
		HX_STACK_LINE(135)
		::haxe::ds::StringMap tmp28 = ::haxegon::Input_obj::_nativeCorrection;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(135)
		tmp28->set(HX_HCSTRING("51_34","\xe4","\x75","\xe8","\xa4"),(int)51);
		HX_STACK_LINE(136)
		::haxe::ds::StringMap tmp29 = ::haxegon::Input_obj::_nativeCorrection;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(136)
		tmp29->set(HX_HCSTRING("52_222","\x50","\x82","\xe4","\x39"),(int)52);
		HX_STACK_LINE(137)
		::haxe::ds::StringMap tmp30 = ::haxegon::Input_obj::_nativeCorrection;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(137)
		tmp30->set(HX_HCSTRING("53_40","\xfd","\xe3","\x3a","\xa6"),(int)53);
		HX_STACK_LINE(138)
		::haxe::ds::StringMap tmp31 = ::haxegon::Input_obj::_nativeCorrection;		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(138)
		tmp31->set(HX_HCSTRING("54_189","\x52","\xee","\xb0","\x60"),(int)54);
		HX_STACK_LINE(139)
		::haxe::ds::StringMap tmp32 = ::haxegon::Input_obj::_nativeCorrection;		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(139)
		tmp32->set(HX_HCSTRING("55_232","\xb2","\x40","\x18","\xf4"),(int)55);
		HX_STACK_LINE(140)
		::haxe::ds::StringMap tmp33 = ::haxegon::Input_obj::_nativeCorrection;		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(140)
		tmp33->set(HX_HCSTRING("56_95","\x3a","\x8c","\x36","\xa8"),(int)56);
		HX_STACK_LINE(141)
		::haxe::ds::StringMap tmp34 = ::haxegon::Input_obj::_nativeCorrection;		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(141)
		tmp34->set(HX_HCSTRING("57_231","\xb3","\x69","\xe5","\x1a"),(int)57);
		HX_STACK_LINE(143)
		::haxe::ds::StringMap tmp35 = ::haxegon::Input_obj::_nativeCorrection;		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(143)
		tmp35->set(HX_HCSTRING("48_64","\x59","\x62","\x22","\x16"),(int)96);
		HX_STACK_LINE(144)
		::haxe::ds::StringMap tmp36 = ::haxegon::Input_obj::_nativeCorrection;		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(144)
		tmp36->set(HX_HCSTRING("49_65","\xf9","\x98","\xcb","\x16"),(int)97);
		HX_STACK_LINE(145)
		::haxe::ds::StringMap tmp37 = ::haxegon::Input_obj::_nativeCorrection;		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(145)
		tmp37->set(HX_HCSTRING("50_66","\xe4","\x41","\x3f","\xa4"),(int)98);
		HX_STACK_LINE(146)
		::haxe::ds::StringMap tmp38 = ::haxegon::Input_obj::_nativeCorrection;		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(146)
		tmp38->set(HX_HCSTRING("51_67","\x84","\x78","\xe8","\xa4"),(int)99);
		HX_STACK_LINE(147)
		::haxe::ds::StringMap tmp39 = ::haxegon::Input_obj::_nativeCorrection;		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(147)
		tmp39->set(HX_HCSTRING("52_68","\x24","\xaf","\x91","\xa5"),(int)100);
		HX_STACK_LINE(148)
		::haxe::ds::StringMap tmp40 = ::haxegon::Input_obj::_nativeCorrection;		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(148)
		tmp40->set(HX_HCSTRING("53_69","\xc4","\xe5","\x3a","\xa6"),(int)101);
		HX_STACK_LINE(149)
		::haxe::ds::StringMap tmp41 = ::haxegon::Input_obj::_nativeCorrection;		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(149)
		tmp41->set(HX_HCSTRING("54_70","\x39","\x1d","\xe4","\xa6"),(int)102);
		HX_STACK_LINE(150)
		::haxe::ds::StringMap tmp42 = ::haxegon::Input_obj::_nativeCorrection;		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(150)
		tmp42->set(HX_HCSTRING("55_71","\xd9","\x53","\x8d","\xa7"),(int)103);
		HX_STACK_LINE(151)
		::haxe::ds::StringMap tmp43 = ::haxegon::Input_obj::_nativeCorrection;		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(151)
		tmp43->set(HX_HCSTRING("56_72","\x79","\x8a","\x36","\xa8"),(int)104);
		HX_STACK_LINE(152)
		::haxe::ds::StringMap tmp44 = ::haxegon::Input_obj::_nativeCorrection;		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(152)
		tmp44->set(HX_HCSTRING("57_73","\x19","\xc1","\xdf","\xa8"),(int)105);
		HX_STACK_LINE(154)
		::haxe::ds::StringMap tmp45 = ::haxegon::Input_obj::_nativeCorrection;		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(154)
		tmp45->set(HX_HCSTRING("43_75","\x1e","\x52","\xd4","\x12"),(int)107);
		HX_STACK_LINE(155)
		::haxe::ds::StringMap tmp46 = ::haxegon::Input_obj::_nativeCorrection;		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(155)
		tmp46->set(HX_HCSTRING("45_77","\x5e","\xbf","\x26","\x14"),(int)109);
		HX_STACK_LINE(156)
		::haxe::ds::StringMap tmp47 = ::haxegon::Input_obj::_nativeCorrection;		HX_STACK_VAR(tmp47,"tmp47");
		HX_STACK_LINE(156)
		tmp47->set(HX_HCSTRING("47_79","\x9e","\x2c","\x79","\x15"),(int)111);
		HX_STACK_LINE(157)
		::haxe::ds::StringMap tmp48 = ::haxegon::Input_obj::_nativeCorrection;		HX_STACK_VAR(tmp48,"tmp48");
		HX_STACK_LINE(157)
		tmp48->set(HX_HCSTRING("46_78","\xfe","\xf5","\xcf","\x14"),(int)110);
		HX_STACK_LINE(158)
		::haxe::ds::StringMap tmp49 = ::haxegon::Input_obj::_nativeCorrection;		HX_STACK_VAR(tmp49,"tmp49");
		HX_STACK_LINE(158)
		tmp49->set(HX_HCSTRING("42_74","\x7e","\x1b","\x2b","\x12"),(int)106);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Input_obj,init,(void))

Void Input_obj::unload( ::openfl::display::DisplayObject stage){
{
		HX_STACK_FRAME("haxegon.Input","unload",0x29c20551,"haxegon.Input.unload","haxegon/Input.hx",162,0x74261763)
		HX_STACK_ARG(stage,"stage")
		HX_STACK_LINE(163)
		Dynamic tmp = ::haxegon::Input_obj::handlekeydown_dyn();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(163)
		stage->removeEventListener(HX_HCSTRING("keyDown","\xa1","\x69","\x47","\x9c"),tmp,null());
		HX_STACK_LINE(164)
		Dynamic tmp1 = ::haxegon::Input_obj::handlekeyup_dyn();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(164)
		stage->removeEventListener(HX_HCSTRING("keyUp","\xda","\xb9","\xfe","\xde"),tmp1,null());
		HX_STACK_LINE(165)
		Dynamic tmp2 = ::haxegon::Input_obj::handletextinput_dyn();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(165)
		stage->removeEventListener(HX_HCSTRING("textInput","\x1d","\x54","\x0b","\x57"),tmp2,null());
		HX_STACK_LINE(166)
		Dynamic tmp3 = ::haxegon::Input_obj::handledeactivate_dyn();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(166)
		stage->removeEventListener(HX_HCSTRING("deactivate","\x34","\x5c","\x01","\x3c"),tmp3,null());
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Input_obj,unload,(void))

Void Input_obj::update( ){
{
		HX_STACK_FRAME("haxegon.Input","update",0x4b3aea5b,"haxegon.Input.update","haxegon/Input.hx",176,0x74261763)
		HX_STACK_LINE(177)
		int tmp = ::haxegon::Input_obj::lastcharcode;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(177)
		bool tmp1 = (tmp == (int)-1);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(177)
		if ((tmp1)){
			HX_STACK_LINE(178)
			int tmp2 = ::haxegon::Input_obj::charcode;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(178)
			::haxegon::Input_obj::lastcharcode = tmp2;
		}
		else{
			HX_STACK_LINE(180)
			int tmp2 = ::haxegon::Input_obj::charcode;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(180)
			int tmp3 = ::haxegon::Input_obj::lastcharcode;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(180)
			bool tmp4 = (tmp2 == tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(180)
			if ((tmp4)){
				HX_STACK_LINE(181)
				::haxegon::Input_obj::lastcharcode = (int)-1;
				HX_STACK_LINE(182)
				::haxegon::Input_obj::charcode = (int)-1;
			}
			else{
				HX_STACK_LINE(184)
				int tmp5 = ::haxegon::Input_obj::charcode;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(184)
				::haxegon::Input_obj::lastcharcode = tmp5;
			}
		}
		HX_STACK_LINE(188)
		{
			HX_STACK_LINE(188)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(188)
			int tmp2 = ::haxegon::Input_obj::numletters;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(188)
			int _g = tmp2;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(188)
			while((true)){
				HX_STACK_LINE(188)
				bool tmp3 = (_g1 < _g);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(188)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(188)
				if ((tmp4)){
					HX_STACK_LINE(188)
					break;
				}
				HX_STACK_LINE(188)
				int tmp5 = (_g1)++;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(188)
				int i = tmp5;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(189)
				::haxe::ds::IntMap tmp6 = ::haxegon::Input_obj::lookup;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(189)
				int tmp7 = i;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(189)
				bool tmp8 = tmp6->exists(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(189)
				if ((tmp8)){
					HX_STACK_LINE(190)
					::haxegon::Keystate tmp9 = ::haxegon::Input_obj::last->__get(i).StaticCast< ::haxegon::Keystate >();		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(190)
					bool tmp10 = (tmp9 == ::haxegon::Keystate_obj::justreleased);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(190)
					bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(190)
					if ((tmp10)){
						HX_STACK_LINE(190)
						::haxegon::Keystate tmp12 = ::haxegon::Input_obj::current->__get(i).StaticCast< ::haxegon::Keystate >();		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(190)
						::haxegon::Keystate tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(190)
						tmp11 = (tmp13 == ::haxegon::Keystate_obj::justreleased);
					}
					else{
						HX_STACK_LINE(190)
						tmp11 = false;
					}
					HX_STACK_LINE(190)
					if ((tmp11)){
						HX_STACK_LINE(190)
						::haxegon::Input_obj::current[i] = ::haxegon::Keystate_obj::notpressed;
					}
					else{
						HX_STACK_LINE(191)
						::haxegon::Keystate tmp12 = ::haxegon::Input_obj::last->__get(i).StaticCast< ::haxegon::Keystate >();		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(191)
						bool tmp13 = (tmp12 == ::haxegon::Keystate_obj::justpressed);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(191)
						bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(191)
						if ((tmp13)){
							HX_STACK_LINE(191)
							::haxegon::Keystate tmp15 = ::haxegon::Input_obj::current->__get(i).StaticCast< ::haxegon::Keystate >();		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(191)
							::haxegon::Keystate tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(191)
							tmp14 = (tmp16 == ::haxegon::Keystate_obj::justpressed);
						}
						else{
							HX_STACK_LINE(191)
							tmp14 = false;
						}
						HX_STACK_LINE(191)
						if ((tmp14)){
							HX_STACK_LINE(191)
							::haxegon::Input_obj::current[i] = ::haxegon::Keystate_obj::pressed;
						}
					}
					HX_STACK_LINE(192)
					::haxegon::Keystate tmp12 = ::haxegon::Input_obj::current->__get(i).StaticCast< ::haxegon::Keystate >();		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(192)
					::haxegon::Input_obj::last[i] = tmp12;
					HX_STACK_LINE(194)
					::haxegon::Keystate tmp13 = ::haxegon::Input_obj::current->__get(i).StaticCast< ::haxegon::Keystate >();		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(194)
					bool tmp14 = (tmp13 == ::haxegon::Keystate_obj::justpressed);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(194)
					bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(194)
					bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(194)
					if ((tmp15)){
						HX_STACK_LINE(194)
						::haxegon::Keystate tmp17 = ::haxegon::Input_obj::current->__get(i).StaticCast< ::haxegon::Keystate >();		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(194)
						::haxegon::Keystate tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(194)
						tmp16 = (tmp18 == ::haxegon::Keystate_obj::pressed);
					}
					else{
						HX_STACK_LINE(194)
						tmp16 = true;
					}
					HX_STACK_LINE(194)
					if ((tmp16)){
						HX_STACK_LINE(195)
						++(::haxegon::Input_obj::keyheld[i]);
					}
				}
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Input_obj,update,(void))

Void Input_obj::reset( ){
{
		HX_STACK_FRAME("haxegon.Input","reset",0x10fd55bd,"haxegon.Input.reset","haxegon/Input.hx",202,0x74261763)
		HX_STACK_LINE(202)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(202)
		int tmp = ::haxegon::Input_obj::numletters;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(202)
		int _g = tmp;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(202)
		while((true)){
			HX_STACK_LINE(202)
			bool tmp1 = (_g1 < _g);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(202)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(202)
			if ((tmp2)){
				HX_STACK_LINE(202)
				break;
			}
			HX_STACK_LINE(202)
			int tmp3 = (_g1)++;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(202)
			int i = tmp3;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(203)
			::haxe::ds::IntMap tmp4 = ::haxegon::Input_obj::lookup;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(203)
			int tmp5 = i;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(203)
			bool tmp6 = tmp4->exists(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(203)
			if ((tmp6)){
				HX_STACK_LINE(204)
				::haxegon::Input_obj::current[i] = ::haxegon::Keystate_obj::notpressed;
				HX_STACK_LINE(205)
				::haxegon::Input_obj::last[i] = ::haxegon::Keystate_obj::notpressed;
				HX_STACK_LINE(206)
				::haxegon::Input_obj::keyheld[i] = (int)-1;
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Input_obj,reset,(void))

bool Input_obj::iskeycodeheld( ::haxegon::Keystate k){
	HX_STACK_FRAME("haxegon.Input","iskeycodeheld",0x8510a145,"haxegon.Input.iskeycodeheld","haxegon/Input.hx",211,0x74261763)
	HX_STACK_ARG(k,"k")
	HX_STACK_LINE(212)
	bool tmp = (k == ::haxegon::Keystate_obj::justpressed);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(212)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(212)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(212)
	if ((tmp1)){
		HX_STACK_LINE(212)
		tmp2 = (k == ::haxegon::Keystate_obj::pressed);
	}
	else{
		HX_STACK_LINE(212)
		tmp2 = true;
	}
	HX_STACK_LINE(212)
	if ((tmp2)){
		HX_STACK_LINE(213)
		return true;
	}
	HX_STACK_LINE(215)
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Input_obj,iskeycodeheld,return )

Array< ::String > Input_obj::clipboardbuffer;

bool Input_obj::selectall;

bool Input_obj::cut;

bool Input_obj::paste;

bool Input_obj::undo;

bool Input_obj::redo;

Void Input_obj::handlecut( ::openfl::events::Event event){
{
		HX_STACK_FRAME("haxegon.Input","handlecut",0x04e255c8,"haxegon.Input.handlecut","haxegon/Input.hx",226,0x74261763)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(227)
		::openfl::events::Event tmp = event;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(227)
		::haxegon::Input_obj::handlecopy(tmp);
		HX_STACK_LINE(228)
		::haxegon::Input_obj::cut = true;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Input_obj,handlecut,(void))

Void Input_obj::handlecopy( ::openfl::events::Event event){
{
		HX_STACK_FRAME("haxegon.Input","handlecopy",0x412428af,"haxegon.Input.handlecopy","haxegon/Input.hx",231,0x74261763)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(232)
		::haxe::ds::EnumValueMap tmp = ::haxegon::Input_obj::keymap;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(232)
		Dynamic tmp1 = tmp->get(::haxegon::Key_obj::CONTROL);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(232)
		Dynamic tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(232)
		::haxegon::Input_obj::current[tmp2] = ::haxegon::Keystate_obj::notpressed;
		HX_STACK_LINE(233)
		::haxe::ds::EnumValueMap tmp3 = ::haxegon::Input_obj::keymap;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(233)
		Dynamic tmp4 = tmp3->get(::haxegon::Key_obj::CONTROL);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(233)
		Dynamic tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(233)
		::haxegon::Input_obj::keyheld[tmp5] = (int)-1;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Input_obj,handlecopy,(void))

Void Input_obj::handlepaste( ::openfl::events::Event event){
{
		HX_STACK_FRAME("haxegon.Input","handlepaste",0x31764119,"haxegon.Input.handlepaste","haxegon/Input.hx",241,0x74261763)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(242)
		::haxe::ds::EnumValueMap tmp = ::haxegon::Input_obj::keymap;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(242)
		Dynamic tmp1 = tmp->get(::haxegon::Key_obj::CONTROL);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(242)
		Dynamic tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(242)
		::haxegon::Input_obj::current[tmp2] = ::haxegon::Keystate_obj::notpressed;
		HX_STACK_LINE(243)
		::haxe::ds::EnumValueMap tmp3 = ::haxegon::Input_obj::keymap;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(243)
		Dynamic tmp4 = tmp3->get(::haxegon::Key_obj::CONTROL);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(243)
		Dynamic tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(243)
		::haxegon::Input_obj::keyheld[tmp5] = (int)-1;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Input_obj,handlepaste,(void))

Void Input_obj::handleselectall( ::openfl::events::Event event){
{
		HX_STACK_FRAME("haxegon.Input","handleselectall",0xf6862c6b,"haxegon.Input.handleselectall","haxegon/Input.hx",259,0x74261763)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(259)
		::haxegon::Input_obj::selectall = true;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Input_obj,handleselectall,(void))

Void Input_obj::handlekeydown( ::openfl::events::KeyboardEvent event){
{
		HX_STACK_FRAME("haxegon.Input","handlekeydown",0x5fb9a8c7,"haxegon.Input.handlekeydown","haxegon/Input.hx",262,0x74261763)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(292)
		::openfl::display::Stage tmp = ::haxegon::Input_obj::gamestage;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(292)
		::openfl::display::Stage tmp1 = ::haxegon::Input_obj::gamestage;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(292)
		tmp->set_focus(tmp1);
		HX_STACK_LINE(293)
		::haxegon::Input_obj::charcode = event->charCode;
		HX_STACK_LINE(294)
		::haxegon::Input_obj::keycode = event->keyCode;
		HX_STACK_LINE(298)
		::haxe::ds::StringMap tmp2 = ::haxegon::Input_obj::_nativeCorrection;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(298)
		::String tmp3 = (event->charCode + HX_HCSTRING("_","\x5f","\x00","\x00","\x00"));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(298)
		int tmp4 = event->keyCode;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(298)
		::String tmp5 = (tmp3 + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(298)
		Dynamic tmp6 = tmp2->get(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(298)
		Dynamic corrected = tmp6;		HX_STACK_VAR(corrected,"corrected");
		HX_STACK_LINE(299)
		bool tmp7 = (corrected != null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(299)
		if ((tmp7)){
			HX_STACK_LINE(300)
			::haxegon::Input_obj::keycode = corrected;
		}
		HX_STACK_LINE(305)
		::haxe::ds::EnumValueMap tmp8 = ::haxegon::Input_obj::keymap;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(305)
		Dynamic tmp9 = tmp8->get(::haxegon::Key_obj::CONTROL);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(305)
		Dynamic tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(305)
		::haxegon::Keystate tmp11 = ::haxegon::Input_obj::current->__get(tmp10).StaticCast< ::haxegon::Keystate >();		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(305)
		bool tmp12 = ::haxegon::Input_obj::iskeycodeheld(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(305)
		if ((tmp12)){
			HX_STACK_LINE(306)
			int tmp13 = ::haxegon::Input_obj::keycode;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(306)
			bool tmp14 = (tmp13 == (int)90);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(306)
			if ((tmp14)){
				HX_STACK_LINE(307)
				::haxegon::Input_obj::undo = true;
				HX_STACK_LINE(308)
				return null();
			}
			else{
				HX_STACK_LINE(309)
				int tmp15 = ::haxegon::Input_obj::keycode;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(309)
				bool tmp16 = (tmp15 == (int)89);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(309)
				if ((tmp16)){
					HX_STACK_LINE(310)
					::haxegon::Input_obj::redo = true;
					HX_STACK_LINE(311)
					return null();
				}
			}
		}
		HX_STACK_LINE(315)
		::haxe::ds::IntMap tmp13 = ::haxegon::Input_obj::lookup;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(315)
		int tmp14 = ::haxegon::Input_obj::keycode;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(315)
		int tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(315)
		bool tmp16 = tmp13->exists(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(315)
		bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(315)
		if ((tmp16)){
			HX_STACK_LINE(315)
			int tmp18 = ::haxegon::Input_obj::keycode;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(315)
			int tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(315)
			::haxegon::Keystate tmp20 = ::haxegon::Input_obj::current->__get(tmp19).StaticCast< ::haxegon::Keystate >();		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(315)
			::haxegon::Keystate tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(315)
			tmp17 = (tmp21 != ::haxegon::Keystate_obj::forcerelease);
		}
		else{
			HX_STACK_LINE(315)
			tmp17 = false;
		}
		HX_STACK_LINE(315)
		if ((tmp17)){
			HX_STACK_LINE(316)
			int tmp18 = ::haxegon::Input_obj::keycode;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(316)
			::haxegon::Keystate tmp19 = ::haxegon::Input_obj::current->__get(tmp18).StaticCast< ::haxegon::Keystate >();		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(316)
			bool tmp20 = ::haxegon::Input_obj::iskeycodeheld(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(316)
			if ((tmp20)){
				HX_STACK_LINE(317)
				int tmp21 = ::haxegon::Input_obj::keycode;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(317)
				::haxegon::Input_obj::current[tmp21] = ::haxegon::Keystate_obj::pressed;
			}
			else{
				HX_STACK_LINE(319)
				int tmp21 = ::haxegon::Input_obj::keycode;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(319)
				::haxegon::Input_obj::current[tmp21] = ::haxegon::Keystate_obj::justpressed;
				HX_STACK_LINE(320)
				int tmp22 = ::haxegon::Input_obj::keycode;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(320)
				::haxegon::Input_obj::keyheld[tmp22] = (int)0;
			}
		}
		HX_STACK_LINE(324)
		int tmp18 = ::haxegon::Input_obj::keycode;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(324)
		bool tmp19 = (tmp18 == (int)8);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(324)
		if ((tmp19)){
			HX_STACK_LINE(326)
			::String tmp20 = ::haxegon::Input_obj::keybuffer;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(326)
			int tmp21 = tmp20.length;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(326)
			bool tmp22 = (tmp21 > (int)0);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(326)
			if ((tmp22)){
				HX_STACK_LINE(327)
				::String tmp23 = ::haxegon::Input_obj::keybuffer;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(327)
				::String tmp24 = ::haxegon::Input_obj::keybuffer;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(327)
				int tmp25 = tmp24.length;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(327)
				int tmp26 = (tmp25 - (int)1);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(327)
				::String tmp27 = tmp23.substr((int)0,tmp26);		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(327)
				::haxegon::Input_obj::keybuffer = tmp27;
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Input_obj,handlekeydown,(void))

Void Input_obj::handletextinput( ::openfl::events::TextEvent event){
{
		HX_STACK_FRAME("haxegon.Input","handletextinput",0x2c4f2d03,"haxegon.Input.handletextinput","haxegon/Input.hx",335,0x74261763)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(337)
		int tmp = event->text.length;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(337)
		bool tmp1 = (tmp == (int)1);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(337)
		bool tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(337)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(337)
		if ((tmp2)){
			HX_STACK_LINE(337)
			Dynamic tmp4 = event->text.charCodeAt((int)0);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(337)
			Dynamic tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(337)
			Dynamic tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(337)
			tmp3 = (tmp6 >= (int)32);
		}
		else{
			HX_STACK_LINE(337)
			tmp3 = false;
		}
		HX_STACK_LINE(337)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(337)
		if ((tmp3)){
			HX_STACK_LINE(337)
			Dynamic tmp5 = event->text.charCodeAt((int)0);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(337)
			Dynamic tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(337)
			tmp4 = (tmp6 <= (int)126);
		}
		else{
			HX_STACK_LINE(337)
			tmp4 = false;
		}
		HX_STACK_LINE(337)
		if ((tmp4)){
			HX_STACK_LINE(338)
			::String tmp5 = ::haxegon::Input_obj::keybuffer;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(338)
			int tmp6 = tmp5.length;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(338)
			int tmp7 = ::haxegon::Text_obj::inputmaxlength;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(338)
			bool tmp8 = (tmp6 < tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(338)
			if ((tmp8)){
				HX_STACK_LINE(339)
				hx::AddEq(::haxegon::Input_obj::keybuffer,event->text);
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Input_obj,handletextinput,(void))

Void Input_obj::handledeactivate( ::openfl::events::Event e){
{
		HX_STACK_FRAME("haxegon.Input","handledeactivate",0x36afc0ae,"haxegon.Input.handledeactivate","haxegon/Input.hx",348,0x74261763)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(348)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(348)
		int tmp = ::haxegon::Input_obj::numletters;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(348)
		int _g = tmp;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(348)
		while((true)){
			HX_STACK_LINE(348)
			bool tmp1 = (_g1 < _g);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(348)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(348)
			if ((tmp2)){
				HX_STACK_LINE(348)
				break;
			}
			HX_STACK_LINE(348)
			int tmp3 = (_g1)++;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(348)
			int keycode = tmp3;		HX_STACK_VAR(keycode,"keycode");
			HX_STACK_LINE(349)
			::haxegon::Input_obj::current[keycode] = ::haxegon::Keystate_obj::notpressed;
			HX_STACK_LINE(350)
			::haxegon::Input_obj::keyheld[keycode] = (int)-1;
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Input_obj,handledeactivate,(void))

::String Input_obj::getchar( ){
	HX_STACK_FRAME("haxegon.Input","getchar",0x13eb45da,"haxegon.Input.getchar","haxegon/Input.hx",354,0x74261763)
	HX_STACK_LINE(355)
	int tmp = ::haxegon::Input_obj::lastcharcode;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(355)
	bool tmp1 = (tmp == (int)-1);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(355)
	if ((tmp1)){
		HX_STACK_LINE(355)
		return HX_HCSTRING("","\x00","\x00","\x00","\x00");
	}
	HX_STACK_LINE(356)
	int tmp2 = ::haxegon::Input_obj::lastcharcode;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(356)
	::String tmp3 = ::String::fromCharCode(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(356)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Input_obj,getchar,return )

Void Input_obj::handlekeyup( ::openfl::events::KeyboardEvent event){
{
		HX_STACK_FRAME("haxegon.Input","handlekeyup",0x531ec380,"haxegon.Input.handlekeyup","haxegon/Input.hx",359,0x74261763)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(360)
		::haxegon::Input_obj::keycode = event->keyCode;
		HX_STACK_LINE(364)
		::haxe::ds::StringMap tmp = ::haxegon::Input_obj::_nativeCorrection;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(364)
		::String tmp1 = (event->charCode + HX_HCSTRING("_","\x5f","\x00","\x00","\x00"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(364)
		int tmp2 = event->keyCode;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(364)
		::String tmp3 = (tmp1 + tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(364)
		Dynamic tmp4 = tmp->get(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(364)
		Dynamic corrected = tmp4;		HX_STACK_VAR(corrected,"corrected");
		HX_STACK_LINE(365)
		bool tmp5 = (corrected != null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(365)
		if ((tmp5)){
			HX_STACK_LINE(366)
			::haxegon::Input_obj::keycode = corrected;
		}
		HX_STACK_LINE(370)
		::haxe::ds::IntMap tmp6 = ::haxegon::Input_obj::lookup;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(370)
		int tmp7 = ::haxegon::Input_obj::keycode;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(370)
		bool tmp8 = tmp6->exists(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(370)
		if ((tmp8)){
			HX_STACK_LINE(371)
			int tmp9 = ::haxegon::Input_obj::keycode;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(371)
			::haxegon::Keystate tmp10 = ::haxegon::Input_obj::current->__get(tmp9).StaticCast< ::haxegon::Keystate >();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(371)
			bool tmp11 = ::haxegon::Input_obj::iskeycodeheld(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(371)
			if ((tmp11)){
				HX_STACK_LINE(372)
				int tmp12 = ::haxegon::Input_obj::keycode;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(372)
				::haxegon::Input_obj::current[tmp12] = ::haxegon::Keystate_obj::justreleased;
			}
			else{
				HX_STACK_LINE(374)
				int tmp12 = ::haxegon::Input_obj::keycode;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(374)
				::haxegon::Input_obj::current[tmp12] = ::haxegon::Keystate_obj::notpressed;
			}
			HX_STACK_LINE(376)
			int tmp12 = ::haxegon::Input_obj::keycode;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(376)
			::haxegon::Input_obj::keyheld[tmp12] = (int)-1;
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Input_obj,handlekeyup,(void))

Void Input_obj::addkey( ::haxegon::Key KeyName,int KeyCode){
{
		HX_STACK_FRAME("haxegon.Input","addkey",0x63504670,"haxegon.Input.addkey","haxegon/Input.hx",380,0x74261763)
		HX_STACK_ARG(KeyName,"KeyName")
		HX_STACK_ARG(KeyCode,"KeyCode")
		HX_STACK_LINE(381)
		::haxe::ds::EnumValueMap tmp = ::haxegon::Input_obj::keymap;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(381)
		::haxegon::Key tmp1 = KeyName;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(381)
		int tmp2 = KeyCode;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(381)
		tmp->set(tmp1,tmp2);
		HX_STACK_LINE(382)
		::haxe::ds::IntMap tmp3 = ::haxegon::Input_obj::lookup;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(382)
		int tmp4 = KeyCode;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(382)
		::haxegon::Key tmp5 = KeyName;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(382)
		tmp3->set(tmp4,tmp5);
		HX_STACK_LINE(383)
		::haxegon::Input_obj::current[KeyCode] = ::haxegon::Keystate_obj::notpressed;
		HX_STACK_LINE(384)
		::haxegon::Input_obj::last[KeyCode] = ::haxegon::Keystate_obj::notpressed;
		HX_STACK_LINE(385)
		::haxegon::Input_obj::keyheld[KeyCode] = (int)-1;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Input_obj,addkey,(void))

Void Input_obj::resetKeys( ){
{
		HX_STACK_FRAME("haxegon.Input","resetKeys",0xe7678651,"haxegon.Input.resetKeys","haxegon/Input.hx",388,0x74261763)
		HX_STACK_LINE(389)
		::haxe::ds::EnumValueMap tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(389)
		{
			HX_STACK_LINE(389)
			::haxe::ds::EnumValueMap tmp1 = ::haxe::ds::EnumValueMap_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(389)
			::haxe::ds::EnumValueMap tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(389)
			tmp = tmp2;
		}
		HX_STACK_LINE(389)
		::haxegon::Input_obj::keymap = tmp;
		HX_STACK_LINE(390)
		::haxe::ds::IntMap tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(390)
		{
			HX_STACK_LINE(390)
			::haxe::ds::IntMap tmp2 = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(390)
			::haxe::ds::IntMap tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(390)
			tmp1 = tmp3;
		}
		HX_STACK_LINE(390)
		::haxegon::Input_obj::lookup = tmp1;
		HX_STACK_LINE(391)
		::haxegon::Input_obj::current = Array_obj< ::Dynamic >::__new();
		HX_STACK_LINE(392)
		::haxegon::Input_obj::last = Array_obj< ::Dynamic >::__new();
		HX_STACK_LINE(393)
		::haxegon::Input_obj::keyheld = Array_obj< int >::__new();
		HX_STACK_LINE(395)
		::haxegon::Input_obj::lastcharcode = (int)-1;
		HX_STACK_LINE(398)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(399)
		{
			HX_STACK_LINE(399)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(399)
			int tmp2 = ::haxegon::Input_obj::numletters;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(399)
			int _g = tmp2;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(399)
			while((true)){
				HX_STACK_LINE(399)
				bool tmp3 = (_g1 < _g);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(399)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(399)
				if ((tmp4)){
					HX_STACK_LINE(399)
					break;
				}
				HX_STACK_LINE(399)
				int tmp5 = (_g1)++;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(399)
				int i1 = tmp5;		HX_STACK_VAR(i1,"i1");
				HX_STACK_LINE(400)
				::haxegon::Input_obj::current->push(::haxegon::Keystate_obj::notpressed);
				HX_STACK_LINE(401)
				::haxegon::Input_obj::last->push(::haxegon::Keystate_obj::notpressed);
				HX_STACK_LINE(402)
				::haxegon::Input_obj::keyheld->push((int)-1);
			}
		}
		HX_STACK_LINE(406)
		::haxegon::Input_obj::addkey(::haxegon::Key_obj::A,(int)65);
		HX_STACK_LINE(407)
		::haxegon::Input_obj::addkey(::haxegon::Key_obj::B,(int)66);
		HX_STACK_LINE(408)
		::haxegon::Input_obj::addkey(::haxegon::Key_obj::C,(int)67);
		HX_STACK_LINE(409)
		::haxegon::Input_obj::addkey(::haxegon::Key_obj::D,(int)68);
		HX_STACK_LINE(410)
		::haxegon::Input_obj::addkey(::haxegon::Key_obj::E,(int)69);
		HX_STACK_LINE(411)
		::haxegon::Input_obj::addkey(::haxegon::Key_obj::F,(int)70);
		HX_STACK_LINE(412)
		::haxegon::Input_obj::addkey(::haxegon::Key_obj::G,(int)71);
		HX_STACK_LINE(413)
		::haxegon::Input_obj::addkey(::haxegon::Key_obj::H,(int)72);
		HX_STACK_LINE(414)
		::haxegon::Input_obj::addkey(::haxegon::Key_obj::I,(int)73);
		HX_STACK_LINE(415)
		::haxegon::Input_obj::addkey(::haxegon::Key_obj::J,(int)74);
		HX_STACK_LINE(416)
		::haxegon::Input_obj::addkey(::haxegon::Key_obj::K,(int)75);
		HX_STACK_LINE(417)
		::haxegon::Input_obj::addkey(::haxegon::Key_obj::L,(int)76);
		HX_STACK_LINE(418)
		::haxegon::Input_obj::addkey(::haxegon::Key_obj::M,(int)77);
		HX_STACK_LINE(419)
		::haxegon::Input_obj::addkey(::haxegon::Key_obj::N,(int)78);
		HX_STACK_LINE(420)
		::haxegon::Input_obj::addkey(::haxegon::Key_obj::O,(int)79);
		HX_STACK_LINE(421)
		::haxegon::Input_obj::addkey(::haxegon::Key_obj::P,(int)80);
		HX_STACK_LINE(422)
		::haxegon::Input_obj::addkey(::haxegon::Key_obj::Q,(int)81);
		HX_STACK_LINE(423)
		::haxegon::Input_obj::addkey(::haxegon::Key_obj::R,(int)82);
		HX_STACK_LINE(424)
		::haxegon::Input_obj::addkey(::haxegon::Key_obj::S,(int)83);
		HX_STACK_LINE(425)
		::haxegon::Input_obj::addkey(::haxegon::Key_obj::T,(int)84);
		HX_STACK_LINE(426)
		::haxegon::Input_obj::addkey(::haxegon::Key_obj::U,(int)85);
		HX_STACK_LINE(427)
		::haxegon::Input_obj::addkey(::haxegon::Key_obj::V,(int)86);
		HX_STACK_LINE(428)
		::haxegon::Input_obj::addkey(::haxegon::Key_obj::W,(int)87);
		HX_STACK_LINE(429)
		::haxegon::Input_obj::addkey(::haxegon::Key_obj::X,(int)88);
		HX_STACK_LINE(430)
		::haxegon::Input_obj::addkey(::haxegon::Key_obj::Y,(int)89);
		HX_STACK_LINE(431)
		::haxegon::Input_obj::addkey(::haxegon::Key_obj::Z,(int)90);
		HX_STACK_LINE(434)
		::haxegon::Input_obj::addkey(::haxegon::Key_obj::ZERO,(int)48);
		HX_STACK_LINE(435)
		::haxegon::Input_obj::addkey(::haxegon::Key_obj::ONE,(int)49);
		HX_STACK_LINE(436)
		::haxegon::Input_obj::addkey(::haxegon::Key_obj::TWO,(int)50);
		HX_STACK_LINE(437)
		::haxegon::Input_obj::addkey(::haxegon::Key_obj::THREE,(int)51);
		HX_STACK_LINE(438)
		::haxegon::Input_obj::addkey(::haxegon::Key_obj::FOUR,(int)52);
		HX_STACK_LINE(439)
		::haxegon::Input_obj::addkey(::haxegon::Key_obj::FIVE,(int)53);
		HX_STACK_LINE(440)
		::haxegon::Input_obj::addkey(::haxegon::Key_obj::SIX,(int)54);
		HX_STACK_LINE(441)
		::haxegon::Input_obj::addkey(::haxegon::Key_obj::SEVEN,(int)55);
		HX_STACK_LINE(442)
		::haxegon::Input_obj::addkey(::haxegon::Key_obj::EIGHT,(int)56);
		HX_STACK_LINE(443)
		::haxegon::Input_obj::addkey(::haxegon::Key_obj::NINE,(int)57);
		HX_STACK_LINE(446)
		::haxegon::Input_obj::addkey(::haxegon::Key_obj::F1,(int)112);
		HX_STACK_LINE(447)
		::haxegon::Input_obj::addkey(::haxegon::Key_obj::F2,(int)113);
		HX_STACK_LINE(448)
		::haxegon::Input_obj::addkey(::haxegon::Key_obj::F3,(int)114);
		HX_STACK_LINE(449)
		::haxegon::Input_obj::addkey(::haxegon::Key_obj::F4,(int)115);
		HX_STACK_LINE(450)
		::haxegon::Input_obj::addkey(::haxegon::Key_obj::F5,(int)116);
		HX_STACK_LINE(451)
		::haxegon::Input_obj::addkey(::haxegon::Key_obj::F6,(int)117);
		HX_STACK_LINE(452)
		::haxegon::Input_obj::addkey(::haxegon::Key_obj::F7,(int)118);
		HX_STACK_LINE(453)
		::haxegon::Input_obj::addkey(::haxegon::Key_obj::F8,(int)119);
		HX_STACK_LINE(454)
		::haxegon::Input_obj::addkey(::haxegon::Key_obj::F9,(int)120);
		HX_STACK_LINE(455)
		::haxegon::Input_obj::addkey(::haxegon::Key_obj::F10,(int)121);
		HX_STACK_LINE(456)
		::haxegon::Input_obj::addkey(::haxegon::Key_obj::F11,(int)122);
		HX_STACK_LINE(457)
		::haxegon::Input_obj::addkey(::haxegon::Key_obj::F12,(int)123);
		HX_STACK_LINE(460)
		::haxegon::Input_obj::addkey(::haxegon::Key_obj::ESCAPE,(int)27);
		HX_STACK_LINE(461)
		::haxegon::Input_obj::addkey(::haxegon::Key_obj::MINUS,(int)189);
		HX_STACK_LINE(462)
		::haxegon::Input_obj::addkey(::haxegon::Key_obj::PLUS,(int)187);
		HX_STACK_LINE(463)
		::haxegon::Input_obj::addkey(::haxegon::Key_obj::DELETE,(int)46);
		HX_STACK_LINE(464)
		::haxegon::Input_obj::addkey(::haxegon::Key_obj::BACKSPACE,(int)8);
		HX_STACK_LINE(465)
		::haxegon::Input_obj::addkey(::haxegon::Key_obj::LBRACKET,(int)219);
		HX_STACK_LINE(466)
		::haxegon::Input_obj::addkey(::haxegon::Key_obj::RBRACKET,(int)221);
		HX_STACK_LINE(467)
		::haxegon::Input_obj::addkey(::haxegon::Key_obj::BACKSLASH,(int)220);
		HX_STACK_LINE(468)
		::haxegon::Input_obj::addkey(::haxegon::Key_obj::CAPSLOCK,(int)20);
		HX_STACK_LINE(469)
		::haxegon::Input_obj::addkey(::haxegon::Key_obj::SEMICOLON,(int)186);
		HX_STACK_LINE(470)
		::haxegon::Input_obj::addkey(::haxegon::Key_obj::QUOTE,(int)222);
		HX_STACK_LINE(471)
		::haxegon::Input_obj::addkey(::haxegon::Key_obj::ENTER,(int)13);
		HX_STACK_LINE(472)
		::haxegon::Input_obj::addkey(::haxegon::Key_obj::SHIFT,(int)16);
		HX_STACK_LINE(473)
		::haxegon::Input_obj::addkey(::haxegon::Key_obj::COMMA,(int)188);
		HX_STACK_LINE(474)
		::haxegon::Input_obj::addkey(::haxegon::Key_obj::PERIOD,(int)190);
		HX_STACK_LINE(475)
		::haxegon::Input_obj::addkey(::haxegon::Key_obj::SLASH,(int)191);
		HX_STACK_LINE(476)
		::haxegon::Input_obj::addkey(::haxegon::Key_obj::CONTROL,(int)17);
		HX_STACK_LINE(477)
		::haxegon::Input_obj::addkey(::haxegon::Key_obj::ALT,(int)18);
		HX_STACK_LINE(478)
		::haxegon::Input_obj::addkey(::haxegon::Key_obj::SPACE,(int)32);
		HX_STACK_LINE(479)
		::haxegon::Input_obj::addkey(::haxegon::Key_obj::UP,(int)38);
		HX_STACK_LINE(480)
		::haxegon::Input_obj::addkey(::haxegon::Key_obj::DOWN,(int)40);
		HX_STACK_LINE(481)
		::haxegon::Input_obj::addkey(::haxegon::Key_obj::LEFT,(int)37);
		HX_STACK_LINE(482)
		::haxegon::Input_obj::addkey(::haxegon::Key_obj::RIGHT,(int)39);
		HX_STACK_LINE(483)
		::haxegon::Input_obj::addkey(::haxegon::Key_obj::TAB,(int)9);
		HX_STACK_LINE(484)
		::haxegon::Input_obj::addkey(::haxegon::Key_obj::HOME,(int)36);
		HX_STACK_LINE(485)
		::haxegon::Input_obj::addkey(::haxegon::Key_obj::END,(int)35);
		HX_STACK_LINE(486)
		::haxegon::Input_obj::addkey(::haxegon::Key_obj::PAGEUP,(int)33);
		HX_STACK_LINE(487)
		::haxegon::Input_obj::addkey(::haxegon::Key_obj::PAGEDOWN,(int)34);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Input_obj,resetKeys,(void))

::String Input_obj::keyname( ::haxegon::Key k){
	HX_STACK_FRAME("haxegon.Input","keyname",0xa2821ad8,"haxegon.Input.keyname","haxegon/Input.hx",490,0x74261763)
	HX_STACK_ARG(k,"k")
	HX_STACK_LINE(491)
	switch( (int)(k->__Index())){
		case (int)0: {
			HX_STACK_LINE(492)
			return HX_HCSTRING("A","\x41","\x00","\x00","\x00");
		}
		;break;
		case (int)1: {
			HX_STACK_LINE(493)
			return HX_HCSTRING("B","\x42","\x00","\x00","\x00");
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(494)
			return HX_HCSTRING("C","\x43","\x00","\x00","\x00");
		}
		;break;
		case (int)3: {
			HX_STACK_LINE(495)
			return HX_HCSTRING("D","\x44","\x00","\x00","\x00");
		}
		;break;
		case (int)4: {
			HX_STACK_LINE(496)
			return HX_HCSTRING("E","\x45","\x00","\x00","\x00");
		}
		;break;
		case (int)5: {
			HX_STACK_LINE(497)
			return HX_HCSTRING("F","\x46","\x00","\x00","\x00");
		}
		;break;
		case (int)6: {
			HX_STACK_LINE(498)
			return HX_HCSTRING("G","\x47","\x00","\x00","\x00");
		}
		;break;
		case (int)7: {
			HX_STACK_LINE(499)
			return HX_HCSTRING("H","\x48","\x00","\x00","\x00");
		}
		;break;
		case (int)8: {
			HX_STACK_LINE(500)
			return HX_HCSTRING("I","\x49","\x00","\x00","\x00");
		}
		;break;
		case (int)9: {
			HX_STACK_LINE(501)
			return HX_HCSTRING("J","\x4a","\x00","\x00","\x00");
		}
		;break;
		case (int)10: {
			HX_STACK_LINE(502)
			return HX_HCSTRING("K","\x4b","\x00","\x00","\x00");
		}
		;break;
		case (int)11: {
			HX_STACK_LINE(503)
			return HX_HCSTRING("L","\x4c","\x00","\x00","\x00");
		}
		;break;
		case (int)12: {
			HX_STACK_LINE(504)
			return HX_HCSTRING("M","\x4d","\x00","\x00","\x00");
		}
		;break;
		case (int)13: {
			HX_STACK_LINE(505)
			return HX_HCSTRING("N","\x4e","\x00","\x00","\x00");
		}
		;break;
		case (int)14: {
			HX_STACK_LINE(506)
			return HX_HCSTRING("O","\x4f","\x00","\x00","\x00");
		}
		;break;
		case (int)15: {
			HX_STACK_LINE(507)
			return HX_HCSTRING("P","\x50","\x00","\x00","\x00");
		}
		;break;
		case (int)16: {
			HX_STACK_LINE(508)
			return HX_HCSTRING("Q","\x51","\x00","\x00","\x00");
		}
		;break;
		case (int)17: {
			HX_STACK_LINE(509)
			return HX_HCSTRING("R","\x52","\x00","\x00","\x00");
		}
		;break;
		case (int)18: {
			HX_STACK_LINE(510)
			return HX_HCSTRING("S","\x53","\x00","\x00","\x00");
		}
		;break;
		case (int)19: {
			HX_STACK_LINE(511)
			return HX_HCSTRING("T","\x54","\x00","\x00","\x00");
		}
		;break;
		case (int)20: {
			HX_STACK_LINE(512)
			return HX_HCSTRING("U","\x55","\x00","\x00","\x00");
		}
		;break;
		case (int)21: {
			HX_STACK_LINE(513)
			return HX_HCSTRING("V","\x56","\x00","\x00","\x00");
		}
		;break;
		case (int)22: {
			HX_STACK_LINE(514)
			return HX_HCSTRING("W","\x57","\x00","\x00","\x00");
		}
		;break;
		case (int)23: {
			HX_STACK_LINE(515)
			return HX_HCSTRING("X","\x58","\x00","\x00","\x00");
		}
		;break;
		case (int)24: {
			HX_STACK_LINE(516)
			return HX_HCSTRING("Y","\x59","\x00","\x00","\x00");
		}
		;break;
		case (int)25: {
			HX_STACK_LINE(517)
			return HX_HCSTRING("Z","\x5a","\x00","\x00","\x00");
		}
		;break;
		case (int)26: {
			HX_STACK_LINE(518)
			return HX_HCSTRING("0","\x30","\x00","\x00","\x00");
		}
		;break;
		case (int)27: {
			HX_STACK_LINE(519)
			return HX_HCSTRING("1","\x31","\x00","\x00","\x00");
		}
		;break;
		case (int)28: {
			HX_STACK_LINE(520)
			return HX_HCSTRING("2","\x32","\x00","\x00","\x00");
		}
		;break;
		case (int)29: {
			HX_STACK_LINE(521)
			return HX_HCSTRING("3","\x33","\x00","\x00","\x00");
		}
		;break;
		case (int)30: {
			HX_STACK_LINE(522)
			return HX_HCSTRING("4","\x34","\x00","\x00","\x00");
		}
		;break;
		case (int)31: {
			HX_STACK_LINE(523)
			return HX_HCSTRING("5","\x35","\x00","\x00","\x00");
		}
		;break;
		case (int)32: {
			HX_STACK_LINE(524)
			return HX_HCSTRING("6","\x36","\x00","\x00","\x00");
		}
		;break;
		case (int)33: {
			HX_STACK_LINE(525)
			return HX_HCSTRING("7","\x37","\x00","\x00","\x00");
		}
		;break;
		case (int)34: {
			HX_STACK_LINE(526)
			return HX_HCSTRING("8","\x38","\x00","\x00","\x00");
		}
		;break;
		case (int)35: {
			HX_STACK_LINE(527)
			return HX_HCSTRING("9","\x39","\x00","\x00","\x00");
		}
		;break;
		case (int)36: {
			HX_STACK_LINE(528)
			return HX_HCSTRING("F1","\x2b","\x3d","\x00","\x00");
		}
		;break;
		case (int)37: {
			HX_STACK_LINE(529)
			return HX_HCSTRING("F2","\x2c","\x3d","\x00","\x00");
		}
		;break;
		case (int)38: {
			HX_STACK_LINE(530)
			return HX_HCSTRING("F3","\x2d","\x3d","\x00","\x00");
		}
		;break;
		case (int)39: {
			HX_STACK_LINE(531)
			return HX_HCSTRING("F4","\x2e","\x3d","\x00","\x00");
		}
		;break;
		case (int)40: {
			HX_STACK_LINE(532)
			return HX_HCSTRING("F5","\x2f","\x3d","\x00","\x00");
		}
		;break;
		case (int)41: {
			HX_STACK_LINE(533)
			return HX_HCSTRING("F6","\x30","\x3d","\x00","\x00");
		}
		;break;
		case (int)42: {
			HX_STACK_LINE(534)
			return HX_HCSTRING("F7","\x31","\x3d","\x00","\x00");
		}
		;break;
		case (int)43: {
			HX_STACK_LINE(535)
			return HX_HCSTRING("F8","\x32","\x3d","\x00","\x00");
		}
		;break;
		case (int)44: {
			HX_STACK_LINE(536)
			return HX_HCSTRING("F9","\x33","\x3d","\x00","\x00");
		}
		;break;
		case (int)45: {
			HX_STACK_LINE(537)
			return HX_HCSTRING("F10","\xa5","\x48","\x35","\x00");
		}
		;break;
		case (int)46: {
			HX_STACK_LINE(538)
			return HX_HCSTRING("F11","\xa6","\x48","\x35","\x00");
		}
		;break;
		case (int)47: {
			HX_STACK_LINE(539)
			return HX_HCSTRING("F12","\xa7","\x48","\x35","\x00");
		}
		;break;
		case (int)48: {
			HX_STACK_LINE(540)
			return HX_HCSTRING("Esc","\x15","\xc0","\x34","\x00");
		}
		;break;
		case (int)49: {
			HX_STACK_LINE(541)
			return HX_HCSTRING("-","\x2d","\x00","\x00","\x00");
		}
		;break;
		case (int)50: {
			HX_STACK_LINE(542)
			return HX_HCSTRING("+","\x2b","\x00","\x00","\x00");
		}
		;break;
		case (int)51: {
			HX_STACK_LINE(543)
			return HX_HCSTRING("Del","\xab","\xf1","\x33","\x00");
		}
		;break;
		case (int)52: {
			HX_STACK_LINE(544)
			return HX_HCSTRING("Backspace","\x1f","\x65","\xbd","\x6c");
		}
		;break;
		case (int)53: {
			HX_STACK_LINE(545)
			return HX_HCSTRING("[","\x5b","\x00","\x00","\x00");
		}
		;break;
		case (int)54: {
			HX_STACK_LINE(546)
			return HX_HCSTRING("]","\x5d","\x00","\x00","\x00");
		}
		;break;
		case (int)55: {
			HX_STACK_LINE(547)
			return HX_HCSTRING("\\","\x5c","\x00","\x00","\x00");
		}
		;break;
		case (int)56: {
			HX_STACK_LINE(548)
			return HX_HCSTRING("Caps Lock","\x4a","\x84","\x1d","\xad");
		}
		;break;
		case (int)57: {
			HX_STACK_LINE(549)
			return HX_HCSTRING(";","\x3b","\x00","\x00","\x00");
		}
		;break;
		case (int)58: {
			HX_STACK_LINE(550)
			return HX_HCSTRING("'","\x27","\x00","\x00","\x00");
		}
		;break;
		case (int)59: {
			HX_STACK_LINE(551)
			return HX_HCSTRING("Enter","\xf8","\xdc","\xb3","\x03");
		}
		;break;
		case (int)60: {
			HX_STACK_LINE(552)
			return HX_HCSTRING("Shift","\x62","\x5c","\x50","\x0f");
		}
		;break;
		case (int)61: {
			HX_STACK_LINE(553)
			return HX_HCSTRING(",","\x2c","\x00","\x00","\x00");
		}
		;break;
		case (int)62: {
			HX_STACK_LINE(554)
			return HX_HCSTRING(".","\x2e","\x00","\x00","\x00");
		}
		;break;
		case (int)63: {
			HX_STACK_LINE(555)
			return HX_HCSTRING("/","\x2f","\x00","\x00","\x00");
		}
		;break;
		case (int)64: {
			HX_STACK_LINE(556)
			return HX_HCSTRING("Ctrl","\xcb","\xb4","\xa1","\x2c");
		}
		;break;
		case (int)65: {
			HX_STACK_LINE(557)
			return HX_HCSTRING("Alt","\x09","\xb1","\x31","\x00");
		}
		;break;
		case (int)66: {
			HX_STACK_LINE(558)
			return HX_HCSTRING("Space","\xa6","\xfc","\x93","\x14");
		}
		;break;
		case (int)67: {
			HX_STACK_LINE(559)
			return HX_HCSTRING("Up","\x7b","\x4a","\x00","\x00");
		}
		;break;
		case (int)68: {
			HX_STACK_LINE(560)
			return HX_HCSTRING("Down","\x82","\x24","\x47","\x2d");
		}
		;break;
		case (int)69: {
			HX_STACK_LINE(561)
			return HX_HCSTRING("Left","\x27","\x34","\x89","\x32");
		}
		;break;
		case (int)70: {
			HX_STACK_LINE(562)
			return HX_HCSTRING("Right","\xbc","\x7b","\x91","\x7c");
		}
		;break;
		case (int)71: {
			HX_STACK_LINE(563)
			return HX_HCSTRING("Tab","\x35","\x12","\x40","\x00");
		}
		;break;
		case (int)72: {
			HX_STACK_LINE(564)
			return HX_HCSTRING("Home","\x3f","\xf6","\xeb","\x2f");
		}
		;break;
		case (int)73: {
			HX_STACK_LINE(565)
			return HX_HCSTRING("End","\xbb","\xbb","\x34","\x00");
		}
		;break;
		case (int)74: {
			HX_STACK_LINE(566)
			return HX_HCSTRING("Page Up","\x8c","\xfb","\x73","\x58");
		}
		;break;
		case (int)75: {
			HX_STACK_LINE(567)
			return HX_HCSTRING("Page Down","\xd3","\xfb","\xd5","\x4e");
		}
		;break;
	}
	HX_STACK_LINE(569)
	return HX_HCSTRING("","\x00","\x00","\x00","\x00");
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Input_obj,keyname,return )

::haxe::ds::EnumValueMap Input_obj::keymap;

::haxe::ds::IntMap Input_obj::lookup;

Array< ::Dynamic > Input_obj::current;

Array< ::Dynamic > Input_obj::last;

Array< int > Input_obj::keyheld;

::haxe::ds::StringMap Input_obj::_nativeCorrection;

int Input_obj::numletters;

int Input_obj::keycode;

int Input_obj::charcode;

int Input_obj::lastcharcode;

::String Input_obj::keybuffer;

::openfl::display::Stage Input_obj::gamestage;


Input_obj::Input_obj()
{
}

bool Input_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"cut") ) { outValue = cut; return true;  }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { outValue = init_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"undo") ) { outValue = undo; return true;  }
		if (HX_FIELD_EQ(inName,"redo") ) { outValue = redo; return true;  }
		if (HX_FIELD_EQ(inName,"last") ) { outValue = last; return true;  }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"reset") ) { outValue = reset_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"paste") ) { outValue = paste; return true;  }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"unload") ) { outValue = unload_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"update") ) { outValue = update_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"addkey") ) { outValue = addkey_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"keymap") ) { outValue = keymap; return true;  }
		if (HX_FIELD_EQ(inName,"lookup") ) { outValue = lookup; return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"pressed") ) { outValue = pressed_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getchar") ) { outValue = getchar_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"keyname") ) { outValue = keyname_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"current") ) { outValue = current; return true;  }
		if (HX_FIELD_EQ(inName,"keyheld") ) { outValue = keyheld; return true;  }
		if (HX_FIELD_EQ(inName,"keycode") ) { outValue = keycode; return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"charcode") ) { outValue = charcode; return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"selectall") ) { outValue = selectall; return true;  }
		if (HX_FIELD_EQ(inName,"handlecut") ) { outValue = handlecut_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"resetKeys") ) { outValue = resetKeys_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"keybuffer") ) { outValue = keybuffer; return true;  }
		if (HX_FIELD_EQ(inName,"gamestage") ) { outValue = gamestage; return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"handlecopy") ) { outValue = handlecopy_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"numletters") ) { outValue = numletters; return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"justpressed") ) { outValue = justpressed_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"handlepaste") ) { outValue = handlepaste_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"handlekeyup") ) { outValue = handlekeyup_dyn(); return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"justreleased") ) { outValue = justreleased_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"forcerelease") ) { outValue = forcerelease_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"delaypressed") ) { outValue = delaypressed_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lastcharcode") ) { outValue = lastcharcode; return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"pressheldtime") ) { outValue = pressheldtime_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"iskeycodeheld") ) { outValue = iskeycodeheld_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"handlekeydown") ) { outValue = handlekeydown_dyn(); return true;  }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"clipboardbuffer") ) { outValue = clipboardbuffer; return true;  }
		if (HX_FIELD_EQ(inName,"handleselectall") ) { outValue = handleselectall_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"handletextinput") ) { outValue = handletextinput_dyn(); return true;  }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"handledeactivate") ) { outValue = handledeactivate_dyn(); return true;  }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_nativeCorrection") ) { outValue = _nativeCorrection; return true;  }
	}
	return false;
}

bool Input_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"cut") ) { cut=ioValue.Cast< bool >(); return true; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"undo") ) { undo=ioValue.Cast< bool >(); return true; }
		if (HX_FIELD_EQ(inName,"redo") ) { redo=ioValue.Cast< bool >(); return true; }
		if (HX_FIELD_EQ(inName,"last") ) { last=ioValue.Cast< Array< ::Dynamic > >(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"paste") ) { paste=ioValue.Cast< bool >(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"keymap") ) { keymap=ioValue.Cast< ::haxe::ds::EnumValueMap >(); return true; }
		if (HX_FIELD_EQ(inName,"lookup") ) { lookup=ioValue.Cast< ::haxe::ds::IntMap >(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"current") ) { current=ioValue.Cast< Array< ::Dynamic > >(); return true; }
		if (HX_FIELD_EQ(inName,"keyheld") ) { keyheld=ioValue.Cast< Array< int > >(); return true; }
		if (HX_FIELD_EQ(inName,"keycode") ) { keycode=ioValue.Cast< int >(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"charcode") ) { charcode=ioValue.Cast< int >(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"selectall") ) { selectall=ioValue.Cast< bool >(); return true; }
		if (HX_FIELD_EQ(inName,"keybuffer") ) { keybuffer=ioValue.Cast< ::String >(); return true; }
		if (HX_FIELD_EQ(inName,"gamestage") ) { gamestage=ioValue.Cast< ::openfl::display::Stage >(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"numletters") ) { numletters=ioValue.Cast< int >(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"lastcharcode") ) { lastcharcode=ioValue.Cast< int >(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"clipboardbuffer") ) { clipboardbuffer=ioValue.Cast< Array< ::String > >(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_nativeCorrection") ) { _nativeCorrection=ioValue.Cast< ::haxe::ds::StringMap >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*Array< ::String >*/ ,(void *) &Input_obj::clipboardbuffer,HX_HCSTRING("clipboardbuffer","\x56","\x27","\x77","\x48")},
	{hx::fsBool,(void *) &Input_obj::selectall,HX_HCSTRING("selectall","\xa5","\xe3","\x14","\x8e")},
	{hx::fsBool,(void *) &Input_obj::cut,HX_HCSTRING("cut","\x82","\x85","\x4b","\x00")},
	{hx::fsBool,(void *) &Input_obj::paste,HX_HCSTRING("paste","\x53","\x53","\x56","\xbd")},
	{hx::fsBool,(void *) &Input_obj::undo,HX_HCSTRING("undo","\x24","\xc6","\xa9","\x4d")},
	{hx::fsBool,(void *) &Input_obj::redo,HX_HCSTRING("redo","\xfe","\x4d","\xa7","\x4b")},
	{hx::fsObject /*::haxe::ds::EnumValueMap*/ ,(void *) &Input_obj::keymap,HX_HCSTRING("keymap","\x5d","\x0e","\xf6","\x3f")},
	{hx::fsObject /*::haxe::ds::IntMap*/ ,(void *) &Input_obj::lookup,HX_HCSTRING("lookup","\x7a","\xa2","\xb5","\x61")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(void *) &Input_obj::current,HX_HCSTRING("current","\x39","\x9c","\xe3","\xcb")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(void *) &Input_obj::last,HX_HCSTRING("last","\x56","\x0a","\xad","\x47")},
	{hx::fsObject /*Array< int >*/ ,(void *) &Input_obj::keyheld,HX_HCSTRING("keyheld","\xd4","\x77","\x0b","\xb4")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(void *) &Input_obj::_nativeCorrection,HX_HCSTRING("_nativeCorrection","\x74","\x82","\xe1","\x11")},
	{hx::fsInt,(void *) &Input_obj::numletters,HX_HCSTRING("numletters","\x47","\xb3","\x5d","\x67")},
	{hx::fsInt,(void *) &Input_obj::keycode,HX_HCSTRING("keycode","\x4c","\xf6","\xc4","\xb0")},
	{hx::fsInt,(void *) &Input_obj::charcode,HX_HCSTRING("charcode","\x03","\x33","\x4b","\xb1")},
	{hx::fsInt,(void *) &Input_obj::lastcharcode,HX_HCSTRING("lastcharcode","\x59","\x83","\x2b","\x39")},
	{hx::fsString,(void *) &Input_obj::keybuffer,HX_HCSTRING("keybuffer","\xdf","\xc7","\x07","\x34")},
	{hx::fsObject /*::openfl::display::Stage*/ ,(void *) &Input_obj::gamestage,HX_HCSTRING("gamestage","\x8c","\xe9","\xf8","\x25")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Input_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Input_obj::clipboardbuffer,"clipboardbuffer");
	HX_MARK_MEMBER_NAME(Input_obj::selectall,"selectall");
	HX_MARK_MEMBER_NAME(Input_obj::cut,"cut");
	HX_MARK_MEMBER_NAME(Input_obj::paste,"paste");
	HX_MARK_MEMBER_NAME(Input_obj::undo,"undo");
	HX_MARK_MEMBER_NAME(Input_obj::redo,"redo");
	HX_MARK_MEMBER_NAME(Input_obj::keymap,"keymap");
	HX_MARK_MEMBER_NAME(Input_obj::lookup,"lookup");
	HX_MARK_MEMBER_NAME(Input_obj::current,"current");
	HX_MARK_MEMBER_NAME(Input_obj::last,"last");
	HX_MARK_MEMBER_NAME(Input_obj::keyheld,"keyheld");
	HX_MARK_MEMBER_NAME(Input_obj::_nativeCorrection,"_nativeCorrection");
	HX_MARK_MEMBER_NAME(Input_obj::numletters,"numletters");
	HX_MARK_MEMBER_NAME(Input_obj::keycode,"keycode");
	HX_MARK_MEMBER_NAME(Input_obj::charcode,"charcode");
	HX_MARK_MEMBER_NAME(Input_obj::lastcharcode,"lastcharcode");
	HX_MARK_MEMBER_NAME(Input_obj::keybuffer,"keybuffer");
	HX_MARK_MEMBER_NAME(Input_obj::gamestage,"gamestage");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Input_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Input_obj::clipboardbuffer,"clipboardbuffer");
	HX_VISIT_MEMBER_NAME(Input_obj::selectall,"selectall");
	HX_VISIT_MEMBER_NAME(Input_obj::cut,"cut");
	HX_VISIT_MEMBER_NAME(Input_obj::paste,"paste");
	HX_VISIT_MEMBER_NAME(Input_obj::undo,"undo");
	HX_VISIT_MEMBER_NAME(Input_obj::redo,"redo");
	HX_VISIT_MEMBER_NAME(Input_obj::keymap,"keymap");
	HX_VISIT_MEMBER_NAME(Input_obj::lookup,"lookup");
	HX_VISIT_MEMBER_NAME(Input_obj::current,"current");
	HX_VISIT_MEMBER_NAME(Input_obj::last,"last");
	HX_VISIT_MEMBER_NAME(Input_obj::keyheld,"keyheld");
	HX_VISIT_MEMBER_NAME(Input_obj::_nativeCorrection,"_nativeCorrection");
	HX_VISIT_MEMBER_NAME(Input_obj::numletters,"numletters");
	HX_VISIT_MEMBER_NAME(Input_obj::keycode,"keycode");
	HX_VISIT_MEMBER_NAME(Input_obj::charcode,"charcode");
	HX_VISIT_MEMBER_NAME(Input_obj::lastcharcode,"lastcharcode");
	HX_VISIT_MEMBER_NAME(Input_obj::keybuffer,"keybuffer");
	HX_VISIT_MEMBER_NAME(Input_obj::gamestage,"gamestage");
};

#endif

hx::Class Input_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("pressed","\xa2","\xd2","\xe6","\x39"),
	HX_HCSTRING("justpressed","\xf6","\xe5","\x55","\x25"),
	HX_HCSTRING("justreleased","\xe9","\x5e","\xa9","\x8c"),
	HX_HCSTRING("forcerelease","\x3c","\xb7","\x0f","\x31"),
	HX_HCSTRING("pressheldtime","\xc5","\x0b","\x2c","\x7b"),
	HX_HCSTRING("delaypressed","\x7f","\x41","\x29","\xd6"),
	HX_HCSTRING("init","\x10","\x3b","\xbb","\x45"),
	HX_HCSTRING("unload","\xff","\xa0","\x8c","\x65"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("reset","\xcf","\x49","\xc8","\xe6"),
	HX_HCSTRING("iskeycodeheld","\x57","\xf7","\xe8","\x21"),
	HX_HCSTRING("clipboardbuffer","\x56","\x27","\x77","\x48"),
	HX_HCSTRING("selectall","\xa5","\xe3","\x14","\x8e"),
	HX_HCSTRING("cut","\x82","\x85","\x4b","\x00"),
	HX_HCSTRING("paste","\x53","\x53","\x56","\xbd"),
	HX_HCSTRING("undo","\x24","\xc6","\xa9","\x4d"),
	HX_HCSTRING("redo","\xfe","\x4d","\xa7","\x4b"),
	HX_HCSTRING("handlecut","\xda","\xba","\x6d","\xaa"),
	HX_HCSTRING("handlecopy","\x5d","\x33","\x91","\x75"),
	HX_HCSTRING("handlepaste","\xab","\x8e","\x72","\xdc"),
	HX_HCSTRING("handleselectall","\xfd","\xaa","\xad","\xba"),
	HX_HCSTRING("handlekeydown","\xd9","\xfe","\x91","\xfc"),
	HX_HCSTRING("handletextinput","\x95","\xab","\x76","\xf0"),
	HX_HCSTRING("handledeactivate","\xdc","\x01","\x17","\x15"),
	HX_HCSTRING("getchar","\x6c","\xe2","\x68","\x29"),
	HX_HCSTRING("handlekeyup","\x12","\x11","\x1b","\xfe"),
	HX_HCSTRING("addkey","\x1e","\xe2","\x1a","\x9f"),
	HX_HCSTRING("resetKeys","\x63","\xeb","\xf2","\x8c"),
	HX_HCSTRING("keyname","\x6a","\xb7","\xff","\xb7"),
	HX_HCSTRING("keymap","\x5d","\x0e","\xf6","\x3f"),
	HX_HCSTRING("lookup","\x7a","\xa2","\xb5","\x61"),
	HX_HCSTRING("current","\x39","\x9c","\xe3","\xcb"),
	HX_HCSTRING("last","\x56","\x0a","\xad","\x47"),
	HX_HCSTRING("keyheld","\xd4","\x77","\x0b","\xb4"),
	HX_HCSTRING("_nativeCorrection","\x74","\x82","\xe1","\x11"),
	HX_HCSTRING("numletters","\x47","\xb3","\x5d","\x67"),
	HX_HCSTRING("keycode","\x4c","\xf6","\xc4","\xb0"),
	HX_HCSTRING("charcode","\x03","\x33","\x4b","\xb1"),
	HX_HCSTRING("lastcharcode","\x59","\x83","\x2b","\x39"),
	HX_HCSTRING("keybuffer","\xdf","\xc7","\x07","\x34"),
	HX_HCSTRING("gamestage","\x8c","\xe9","\xf8","\x25"),
	::String(null()) };

void Input_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxegon.Input","\xdc","\xa5","\x4e","\xc5");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Input_obj::__GetStatic;
	__mClass->mSetStaticField = &Input_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Input_obj >;
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

void Input_obj::__boot()
{
	clipboardbuffer= Array_obj< ::String >::__new().Add(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
struct _Function_0_1{
	inline static ::haxe::ds::EnumValueMap Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxegon/Input.hx",572,0x74261763)
		{
			HX_STACK_LINE(572)
			::haxe::ds::EnumValueMap tmp = ::haxe::ds::EnumValueMap_obj::__new();		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(572)
			::haxe::ds::EnumValueMap tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(572)
			return tmp1;
		}
		return null();
	}
};
	keymap= _Function_0_1::Block();
struct _Function_0_2{
	inline static ::haxe::ds::IntMap Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxegon/Input.hx",573,0x74261763)
		{
			HX_STACK_LINE(573)
			::haxe::ds::IntMap tmp = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(573)
			::haxe::ds::IntMap tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(573)
			return tmp1;
		}
		return null();
	}
};
	lookup= _Function_0_2::Block();
	current= Array_obj< ::Dynamic >::__new();
	last= Array_obj< ::Dynamic >::__new();
	keyheld= Array_obj< int >::__new();
	numletters= (int)256;
	keybuffer= HX_HCSTRING("","\x00","\x00","\x00","\x00");
}

} // end namespace haxegon
