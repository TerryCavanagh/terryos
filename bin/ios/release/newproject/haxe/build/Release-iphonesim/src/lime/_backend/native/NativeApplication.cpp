#include <hxcpp.h>

#ifndef INCLUDED_List
#include <List.h>
#endif
#ifndef INCLUDED_cpp_Prime
#include <cpp/Prime.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_Timer
#include <haxe/Timer.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_lime__backend_native_NativeApplication
#include <lime/_backend/native/NativeApplication.h>
#endif
#ifndef INCLUDED_lime__backend_native_NativeRenderer
#include <lime/_backend/native/NativeRenderer.h>
#endif
#ifndef INCLUDED_lime__backend_native__NativeApplication_ApplicationEventInfo
#include <lime/_backend/native/_NativeApplication/ApplicationEventInfo.h>
#endif
#ifndef INCLUDED_lime__backend_native__NativeApplication_DropEventInfo
#include <lime/_backend/native/_NativeApplication/DropEventInfo.h>
#endif
#ifndef INCLUDED_lime__backend_native__NativeApplication_GamepadEventInfo
#include <lime/_backend/native/_NativeApplication/GamepadEventInfo.h>
#endif
#ifndef INCLUDED_lime__backend_native__NativeApplication_JoystickEventInfo
#include <lime/_backend/native/_NativeApplication/JoystickEventInfo.h>
#endif
#ifndef INCLUDED_lime__backend_native__NativeApplication_KeyEventInfo
#include <lime/_backend/native/_NativeApplication/KeyEventInfo.h>
#endif
#ifndef INCLUDED_lime__backend_native__NativeApplication_MouseEventInfo
#include <lime/_backend/native/_NativeApplication/MouseEventInfo.h>
#endif
#ifndef INCLUDED_lime__backend_native__NativeApplication_RenderEventInfo
#include <lime/_backend/native/_NativeApplication/RenderEventInfo.h>
#endif
#ifndef INCLUDED_lime__backend_native__NativeApplication_SensorEventInfo
#include <lime/_backend/native/_NativeApplication/SensorEventInfo.h>
#endif
#ifndef INCLUDED_lime__backend_native__NativeApplication_TextEventInfo
#include <lime/_backend/native/_NativeApplication/TextEventInfo.h>
#endif
#ifndef INCLUDED_lime__backend_native__NativeApplication_TouchEventInfo
#include <lime/_backend/native/_NativeApplication/TouchEventInfo.h>
#endif
#ifndef INCLUDED_lime__backend_native__NativeApplication_WindowEventInfo
#include <lime/_backend/native/_NativeApplication/WindowEventInfo.h>
#endif
#ifndef INCLUDED_lime_app_Application
#include <lime/app/Application.h>
#endif
#ifndef INCLUDED_lime_app_Event_Float_Float_Float_Void
#include <lime/app/Event_Float_Float_Float_Void.h>
#endif
#ifndef INCLUDED_lime_app_Event_Float_Float_Int_Void
#include <lime/app/Event_Float_Float_Int_Void.h>
#endif
#ifndef INCLUDED_lime_app_Event_Float_Float_Void
#include <lime/app/Event_Float_Float_Void.h>
#endif
#ifndef INCLUDED_lime_app_Event_Int_Float_Void
#include <lime/app/Event_Int_Float_Void.h>
#endif
#ifndef INCLUDED_lime_app_Event_Int_Int_Void
#include <lime/app/Event_Int_Int_Void.h>
#endif
#ifndef INCLUDED_lime_app_Event_Int_Void
#include <lime/app/Event_Int_Void.h>
#endif
#ifndef INCLUDED_lime_app_Event_Int_lime_ui_JoystickHatPosition_Void
#include <lime/app/Event_Int_lime_ui_JoystickHatPosition_Void.h>
#endif
#ifndef INCLUDED_lime_app_Event_String_Int_Int_Void
#include <lime/app/Event_String_Int_Int_Void.h>
#endif
#ifndef INCLUDED_lime_app_Event_String_Void
#include <lime/app/Event_String_Void.h>
#endif
#ifndef INCLUDED_lime_app_Event_Void_Void
#include <lime/app/Event_Void_Void.h>
#endif
#ifndef INCLUDED_lime_app_Event_lime_graphics_RenderContext_Void
#include <lime/app/Event_lime_graphics_RenderContext_Void.h>
#endif
#ifndef INCLUDED_lime_app_Event_lime_ui_GamepadAxis_Float_Void
#include <lime/app/Event_lime_ui_GamepadAxis_Float_Void.h>
#endif
#ifndef INCLUDED_lime_app_Event_lime_ui_GamepadButton_Void
#include <lime/app/Event_lime_ui_GamepadButton_Void.h>
#endif
#ifndef INCLUDED_lime_app_Event_lime_ui_KeyCode_lime_ui_KeyModifier_Void
#include <lime/app/Event_lime_ui_KeyCode_lime_ui_KeyModifier_Void.h>
#endif
#ifndef INCLUDED_lime_app_Event_lime_ui_Touch_Void
#include <lime/app/Event_lime_ui_Touch_Void.h>
#endif
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_lime_app_Module
#include <lime/app/Module.h>
#endif
#ifndef INCLUDED_lime_audio_AudioContext
#include <lime/audio/AudioContext.h>
#endif
#ifndef INCLUDED_lime_audio_AudioManager
#include <lime/audio/AudioManager.h>
#endif
#ifndef INCLUDED_lime_graphics_GLRenderContext
#include <lime/graphics/GLRenderContext.h>
#endif
#ifndef INCLUDED_lime_graphics_RenderContext
#include <lime/graphics/RenderContext.h>
#endif
#ifndef INCLUDED_lime_graphics_Renderer
#include <lime/graphics/Renderer.h>
#endif
#ifndef INCLUDED_lime_system_Sensor
#include <lime/system/Sensor.h>
#endif
#ifndef INCLUDED_lime_system_SensorType
#include <lime/system/SensorType.h>
#endif
#ifndef INCLUDED_lime_system_System
#include <lime/system/System.h>
#endif
#ifndef INCLUDED_lime_ui_Gamepad
#include <lime/ui/Gamepad.h>
#endif
#ifndef INCLUDED_lime_ui_Joystick
#include <lime/ui/Joystick.h>
#endif
#ifndef INCLUDED_lime_ui_Touch
#include <lime/ui/Touch.h>
#endif
#ifndef INCLUDED_lime_ui_Window
#include <lime/ui/Window.h>
#endif
namespace lime{
namespace _backend{
namespace native{

Void NativeApplication_obj::__construct(::lime::app::Application parent)
{
HX_STACK_FRAME("lime._backend.native.NativeApplication","new",0xf81a1e94,"lime._backend.native.NativeApplication.new","lime/_backend/native/NativeApplication.hx",40,0xb13849fd)
HX_STACK_THIS(this)
HX_STACK_ARG(parent,"parent")
{
	HX_STACK_LINE(55)
	this->windowEventInfo = ::lime::_backend::native::_NativeApplication::WindowEventInfo_obj::__new(null(),null(),null(),null(),null(),null());
	HX_STACK_LINE(54)
	this->unusedTouchesPool = ::List_obj::__new();
	HX_STACK_LINE(53)
	this->touchEventInfo = ::lime::_backend::native::_NativeApplication::TouchEventInfo_obj::__new(null(),null(),null(),null(),null(),null(),null(),null());
	HX_STACK_LINE(52)
	this->textEventInfo = ::lime::_backend::native::_NativeApplication::TextEventInfo_obj::__new(null(),null(),null(),null(),null());
	HX_STACK_LINE(51)
	this->sensorEventInfo = ::lime::_backend::native::_NativeApplication::SensorEventInfo_obj::__new(null(),null(),null(),null(),null());
	HX_STACK_LINE(50)
	this->renderEventInfo = ::lime::_backend::native::_NativeApplication::RenderEventInfo_obj::__new((int)0,null());
	HX_STACK_LINE(49)
	this->mouseEventInfo = ::lime::_backend::native::_NativeApplication::MouseEventInfo_obj::__new(null(),null(),null(),null(),null(),null(),null());
	HX_STACK_LINE(48)
	this->keyEventInfo = ::lime::_backend::native::_NativeApplication::KeyEventInfo_obj::__new(null(),null(),null(),null());
	HX_STACK_LINE(47)
	this->joystickEventInfo = ::lime::_backend::native::_NativeApplication::JoystickEventInfo_obj::__new(null(),null(),null(),null(),null(),null());
	HX_STACK_LINE(46)
	this->gamepadEventInfo = ::lime::_backend::native::_NativeApplication::GamepadEventInfo_obj::__new(null(),null(),null(),null(),null());
	HX_STACK_LINE(45)
	this->dropEventInfo = ::lime::_backend::native::_NativeApplication::DropEventInfo_obj::__new(null(),null());
	struct _Function_1_1{
		inline static ::haxe::ds::IntMap Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","lime/_backend/native/NativeApplication.hx",44,0xb13849fd)
			{
				HX_STACK_LINE(44)
				::haxe::ds::IntMap tmp = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(44)
				::haxe::ds::IntMap tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(44)
				return tmp1;
			}
			return null();
		}
	};
	HX_STACK_LINE(44)
	this->currentTouches = _Function_1_1::Block();
	HX_STACK_LINE(43)
	this->applicationEventInfo = ::lime::_backend::native::_NativeApplication::ApplicationEventInfo_obj::__new((int)0,null());
	HX_STACK_LINE(65)
	this->parent = parent;
	HX_STACK_LINE(66)
	this->frameRate = (int)60;
	HX_STACK_LINE(73)
	::lime::audio::AudioManager_obj::init(null());
	HX_STACK_LINE(76)
	::lime::_system::Sensor_obj::registerSensor(::lime::_system::SensorType_obj::ACCELEROMETER,(int)0);
}
;
	return null();
}

//NativeApplication_obj::~NativeApplication_obj() { }

Dynamic NativeApplication_obj::__CreateEmpty() { return  new NativeApplication_obj; }
hx::ObjectPtr< NativeApplication_obj > NativeApplication_obj::__new(::lime::app::Application parent)
{  hx::ObjectPtr< NativeApplication_obj > _result_ = new NativeApplication_obj();
	_result_->__construct(parent);
	return _result_;}

Dynamic NativeApplication_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< NativeApplication_obj > _result_ = new NativeApplication_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void NativeApplication_obj::create( Dynamic config){
{
		HX_STACK_FRAME("lime._backend.native.NativeApplication","create",0xd50cf148,"lime._backend.native.NativeApplication.create","lime/_backend/native/NativeApplication.hx",85,0xb13849fd)
		HX_STACK_THIS(this)
		HX_STACK_ARG(config,"config")
		struct _Function_1_1{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","lime/_backend/native/NativeApplication.hx",85,0xb13849fd)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(85)
		this->handle = ((Dynamic)(::lime::_backend::native::NativeApplication_obj::cffi_lime_application_create.call(hx::DynamicPtr(_Function_1_1::Block()))));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(NativeApplication_obj,create,(void))

int NativeApplication_obj::exec( ){
	HX_STACK_FRAME("lime._backend.native.NativeApplication","exec",0x18dc12dd,"lime._backend.native.NativeApplication.exec","lime/_backend/native/NativeApplication.hx",91,0xb13849fd)
	HX_STACK_THIS(this)
	HX_STACK_LINE(95)
	::lime::_backend::native::NativeApplication_obj::cffi_lime_application_event_manager_register.call(hx::DynamicPtr(this->handleApplicationEvent_dyn()),hx::DynamicPtr(this->applicationEventInfo));
	HX_STACK_LINE(96)
	::lime::_backend::native::NativeApplication_obj::cffi_lime_drop_event_manager_register.call(hx::DynamicPtr(this->handleDropEvent_dyn()),hx::DynamicPtr(this->dropEventInfo));
	HX_STACK_LINE(97)
	::lime::_backend::native::NativeApplication_obj::cffi_lime_gamepad_event_manager_register.call(hx::DynamicPtr(this->handleGamepadEvent_dyn()),hx::DynamicPtr(this->gamepadEventInfo));
	HX_STACK_LINE(98)
	::lime::_backend::native::NativeApplication_obj::cffi_lime_joystick_event_manager_register.call(hx::DynamicPtr(this->handleJoystickEvent_dyn()),hx::DynamicPtr(this->joystickEventInfo));
	HX_STACK_LINE(99)
	::lime::_backend::native::NativeApplication_obj::cffi_lime_key_event_manager_register.call(hx::DynamicPtr(this->handleKeyEvent_dyn()),hx::DynamicPtr(this->keyEventInfo));
	HX_STACK_LINE(100)
	::lime::_backend::native::NativeApplication_obj::cffi_lime_mouse_event_manager_register.call(hx::DynamicPtr(this->handleMouseEvent_dyn()),hx::DynamicPtr(this->mouseEventInfo));
	HX_STACK_LINE(101)
	::lime::_backend::native::NativeApplication_obj::cffi_lime_render_event_manager_register.call(hx::DynamicPtr(this->handleRenderEvent_dyn()),hx::DynamicPtr(this->renderEventInfo));
	HX_STACK_LINE(102)
	::lime::_backend::native::NativeApplication_obj::cffi_lime_text_event_manager_register.call(hx::DynamicPtr(this->handleTextEvent_dyn()),hx::DynamicPtr(this->textEventInfo));
	HX_STACK_LINE(103)
	::lime::_backend::native::NativeApplication_obj::cffi_lime_touch_event_manager_register.call(hx::DynamicPtr(this->handleTouchEvent_dyn()),hx::DynamicPtr(this->touchEventInfo));
	HX_STACK_LINE(104)
	::lime::_backend::native::NativeApplication_obj::cffi_lime_window_event_manager_register.call(hx::DynamicPtr(this->handleWindowEvent_dyn()),hx::DynamicPtr(this->windowEventInfo));
	HX_STACK_LINE(107)
	::lime::_backend::native::NativeApplication_obj::cffi_lime_sensor_event_manager_register.call(hx::DynamicPtr(this->handleSensorEvent_dyn()),hx::DynamicPtr(this->sensorEventInfo));
	HX_STACK_LINE(136)
	int result = ::lime::_backend::native::NativeApplication_obj::cffi_lime_application_exec.call(hx::DynamicPtr(this->handle));		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(137)
	::lime::app::Application tmp = this->parent;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(137)
	int tmp1 = result;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(137)
	tmp->onExit->dispatch(tmp1);
	HX_STACK_LINE(139)
	int tmp2 = result;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(139)
	return tmp2;
	HX_STACK_LINE(144)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(NativeApplication_obj,exec,return )

Void NativeApplication_obj::exit( ){
{
		HX_STACK_FRAME("lime._backend.native.NativeApplication","exit",0x18dc166a,"lime._backend.native.NativeApplication.exit","lime/_backend/native/NativeApplication.hx",149,0xb13849fd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(151)
		::lime::audio::AudioManager_obj::shutdown();
		HX_STACK_LINE(154)
		::lime::_backend::native::NativeApplication_obj::cffi_lime_application_quit.call(hx::DynamicPtr(this->handle));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(NativeApplication_obj,exit,(void))

Float NativeApplication_obj::getFrameRate( ){
	HX_STACK_FRAME("lime._backend.native.NativeApplication","getFrameRate",0xe79bf983,"lime._backend.native.NativeApplication.getFrameRate","lime/_backend/native/NativeApplication.hx",160,0xb13849fd)
	HX_STACK_THIS(this)
	HX_STACK_LINE(162)
	Float tmp = this->frameRate;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(162)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(NativeApplication_obj,getFrameRate,return )

Void NativeApplication_obj::handleApplicationEvent( ){
{
		HX_STACK_FRAME("lime._backend.native.NativeApplication","handleApplicationEvent",0x44389cbe,"lime._backend.native.NativeApplication.handleApplicationEvent","lime/_backend/native/NativeApplication.hx",169,0xb13849fd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(169)
		::lime::_backend::native::_NativeApplication::ApplicationEventInfo tmp = this->applicationEventInfo;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(169)
		int _g = tmp->type;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(169)
		int tmp1 = _g;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(169)
		switch( (int)(tmp1)){
			case (int)0: {
				HX_STACK_LINE(173)
				this->updateTimer();
				HX_STACK_LINE(174)
				::lime::app::Application tmp2 = this->parent;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(174)
				::lime::_backend::native::_NativeApplication::ApplicationEventInfo tmp3 = this->applicationEventInfo;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(174)
				int tmp4 = tmp3->deltaTime;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(174)
				tmp2->onUpdate->dispatch(tmp4);
			}
			;break;
			case (int)1: {
			}
			;break;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(NativeApplication_obj,handleApplicationEvent,(void))

Void NativeApplication_obj::handleDropEvent( ){
{
		HX_STACK_FRAME("lime._backend.native.NativeApplication","handleDropEvent",0xe00568d7,"lime._backend.native.NativeApplication.handleDropEvent","lime/_backend/native/NativeApplication.hx",187,0xb13849fd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(187)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(187)
		::lime::app::Application tmp = this->parent;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(187)
		Array< ::Dynamic > _g1 = tmp->__windows;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(187)
		while((true)){
			HX_STACK_LINE(187)
			bool tmp1 = (_g < _g1->length);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(187)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(187)
			if ((tmp2)){
				HX_STACK_LINE(187)
				break;
			}
			HX_STACK_LINE(187)
			::lime::ui::Window tmp3 = _g1->__get(_g).StaticCast< ::lime::ui::Window >();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(187)
			::lime::ui::Window window = tmp3;		HX_STACK_VAR(window,"window");
			HX_STACK_LINE(187)
			++(_g);
			HX_STACK_LINE(189)
			::lime::_backend::native::_NativeApplication::DropEventInfo tmp4 = this->dropEventInfo;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(189)
			::String tmp5 = tmp4->file;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(189)
			window->onDropFile->dispatch(tmp5);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(NativeApplication_obj,handleDropEvent,(void))

Void NativeApplication_obj::handleGamepadEvent( ){
{
		HX_STACK_FRAME("lime._backend.native.NativeApplication","handleGamepadEvent",0x54f9e7cd,"lime._backend.native.NativeApplication.handleGamepadEvent","lime/_backend/native/NativeApplication.hx",198,0xb13849fd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(198)
		::lime::_backend::native::_NativeApplication::GamepadEventInfo tmp = this->gamepadEventInfo;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(198)
		int _g = tmp->type;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(198)
		int tmp1 = _g;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(198)
		switch( (int)(tmp1)){
			case (int)0: {
				HX_STACK_LINE(202)
				::haxe::ds::IntMap tmp2 = ::lime::ui::Gamepad_obj::devices;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(202)
				::lime::_backend::native::_NativeApplication::GamepadEventInfo tmp3 = this->gamepadEventInfo;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(202)
				int tmp4 = tmp3->id;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(202)
				::lime::ui::Gamepad tmp5 = tmp2->get(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(202)
				::lime::ui::Gamepad gamepad = tmp5;		HX_STACK_VAR(gamepad,"gamepad");
				HX_STACK_LINE(203)
				bool tmp6 = (gamepad != null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(203)
				if ((tmp6)){
					HX_STACK_LINE(203)
					::lime::_backend::native::_NativeApplication::GamepadEventInfo tmp7 = this->gamepadEventInfo;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(203)
					int tmp8 = tmp7->axis;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(203)
					::lime::_backend::native::_NativeApplication::GamepadEventInfo tmp9 = this->gamepadEventInfo;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(203)
					Float tmp10 = tmp9->value;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(203)
					gamepad->onAxisMove->dispatch(tmp8,tmp10);
				}
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(207)
				::haxe::ds::IntMap tmp2 = ::lime::ui::Gamepad_obj::devices;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(207)
				::lime::_backend::native::_NativeApplication::GamepadEventInfo tmp3 = this->gamepadEventInfo;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(207)
				int tmp4 = tmp3->id;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(207)
				::lime::ui::Gamepad tmp5 = tmp2->get(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(207)
				::lime::ui::Gamepad gamepad = tmp5;		HX_STACK_VAR(gamepad,"gamepad");
				HX_STACK_LINE(208)
				bool tmp6 = (gamepad != null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(208)
				if ((tmp6)){
					HX_STACK_LINE(208)
					::lime::_backend::native::_NativeApplication::GamepadEventInfo tmp7 = this->gamepadEventInfo;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(208)
					int tmp8 = tmp7->button;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(208)
					gamepad->onButtonDown->dispatch(tmp8);
				}
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(212)
				::haxe::ds::IntMap tmp2 = ::lime::ui::Gamepad_obj::devices;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(212)
				::lime::_backend::native::_NativeApplication::GamepadEventInfo tmp3 = this->gamepadEventInfo;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(212)
				int tmp4 = tmp3->id;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(212)
				::lime::ui::Gamepad tmp5 = tmp2->get(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(212)
				::lime::ui::Gamepad gamepad = tmp5;		HX_STACK_VAR(gamepad,"gamepad");
				HX_STACK_LINE(213)
				bool tmp6 = (gamepad != null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(213)
				if ((tmp6)){
					HX_STACK_LINE(213)
					::lime::_backend::native::_NativeApplication::GamepadEventInfo tmp7 = this->gamepadEventInfo;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(213)
					int tmp8 = tmp7->button;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(213)
					gamepad->onButtonUp->dispatch(tmp8);
				}
			}
			;break;
			case (int)3: {
				HX_STACK_LINE(217)
				::lime::_backend::native::_NativeApplication::GamepadEventInfo tmp2 = this->gamepadEventInfo;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(217)
				int tmp3 = tmp2->id;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(217)
				::lime::ui::Gamepad_obj::__connect(tmp3);
			}
			;break;
			case (int)4: {
				HX_STACK_LINE(221)
				::lime::_backend::native::_NativeApplication::GamepadEventInfo tmp2 = this->gamepadEventInfo;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(221)
				int tmp3 = tmp2->id;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(221)
				::lime::ui::Gamepad_obj::__disconnect(tmp3);
			}
			;break;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(NativeApplication_obj,handleGamepadEvent,(void))

Void NativeApplication_obj::handleJoystickEvent( ){
{
		HX_STACK_FRAME("lime._backend.native.NativeApplication","handleJoystickEvent",0xefd0c72a,"lime._backend.native.NativeApplication.handleJoystickEvent","lime/_backend/native/NativeApplication.hx",230,0xb13849fd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(230)
		::lime::_backend::native::_NativeApplication::JoystickEventInfo tmp = this->joystickEventInfo;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(230)
		int _g = tmp->type;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(230)
		int tmp1 = _g;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(230)
		switch( (int)(tmp1)){
			case (int)0: {
				HX_STACK_LINE(234)
				::haxe::ds::IntMap tmp2 = ::lime::ui::Joystick_obj::devices;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(234)
				::lime::_backend::native::_NativeApplication::JoystickEventInfo tmp3 = this->joystickEventInfo;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(234)
				int tmp4 = tmp3->id;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(234)
				::lime::ui::Joystick tmp5 = tmp2->get(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(234)
				::lime::ui::Joystick joystick = tmp5;		HX_STACK_VAR(joystick,"joystick");
				HX_STACK_LINE(235)
				bool tmp6 = (joystick != null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(235)
				if ((tmp6)){
					HX_STACK_LINE(235)
					::lime::_backend::native::_NativeApplication::JoystickEventInfo tmp7 = this->joystickEventInfo;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(235)
					int tmp8 = tmp7->index;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(235)
					::lime::_backend::native::_NativeApplication::JoystickEventInfo tmp9 = this->joystickEventInfo;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(235)
					Float tmp10 = tmp9->value;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(235)
					joystick->onAxisMove->dispatch(tmp8,tmp10);
				}
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(239)
				::haxe::ds::IntMap tmp2 = ::lime::ui::Joystick_obj::devices;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(239)
				::lime::_backend::native::_NativeApplication::JoystickEventInfo tmp3 = this->joystickEventInfo;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(239)
				int tmp4 = tmp3->id;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(239)
				::lime::ui::Joystick tmp5 = tmp2->get(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(239)
				::lime::ui::Joystick joystick = tmp5;		HX_STACK_VAR(joystick,"joystick");
				HX_STACK_LINE(240)
				bool tmp6 = (joystick != null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(240)
				if ((tmp6)){
					HX_STACK_LINE(240)
					::lime::_backend::native::_NativeApplication::JoystickEventInfo tmp7 = this->joystickEventInfo;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(240)
					int tmp8 = tmp7->index;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(240)
					::lime::_backend::native::_NativeApplication::JoystickEventInfo tmp9 = this->joystickEventInfo;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(240)
					int tmp10 = tmp9->x;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(240)
					joystick->onHatMove->dispatch(tmp8,tmp10);
				}
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(244)
				::haxe::ds::IntMap tmp2 = ::lime::ui::Joystick_obj::devices;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(244)
				::lime::_backend::native::_NativeApplication::JoystickEventInfo tmp3 = this->joystickEventInfo;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(244)
				int tmp4 = tmp3->id;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(244)
				::lime::ui::Joystick tmp5 = tmp2->get(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(244)
				::lime::ui::Joystick joystick = tmp5;		HX_STACK_VAR(joystick,"joystick");
				HX_STACK_LINE(245)
				bool tmp6 = (joystick != null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(245)
				if ((tmp6)){
					HX_STACK_LINE(245)
					::lime::_backend::native::_NativeApplication::JoystickEventInfo tmp7 = this->joystickEventInfo;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(245)
					int tmp8 = tmp7->index;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(245)
					::lime::_backend::native::_NativeApplication::JoystickEventInfo tmp9 = this->joystickEventInfo;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(245)
					Float tmp10 = tmp9->value;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(245)
					joystick->onTrackballMove->dispatch(tmp8,tmp10);
				}
			}
			;break;
			case (int)3: {
				HX_STACK_LINE(249)
				::haxe::ds::IntMap tmp2 = ::lime::ui::Joystick_obj::devices;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(249)
				::lime::_backend::native::_NativeApplication::JoystickEventInfo tmp3 = this->joystickEventInfo;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(249)
				int tmp4 = tmp3->id;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(249)
				::lime::ui::Joystick tmp5 = tmp2->get(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(249)
				::lime::ui::Joystick joystick = tmp5;		HX_STACK_VAR(joystick,"joystick");
				HX_STACK_LINE(250)
				bool tmp6 = (joystick != null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(250)
				if ((tmp6)){
					HX_STACK_LINE(250)
					::lime::_backend::native::_NativeApplication::JoystickEventInfo tmp7 = this->joystickEventInfo;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(250)
					int tmp8 = tmp7->index;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(250)
					joystick->onButtonDown->dispatch(tmp8);
				}
			}
			;break;
			case (int)4: {
				HX_STACK_LINE(254)
				::haxe::ds::IntMap tmp2 = ::lime::ui::Joystick_obj::devices;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(254)
				::lime::_backend::native::_NativeApplication::JoystickEventInfo tmp3 = this->joystickEventInfo;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(254)
				int tmp4 = tmp3->id;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(254)
				::lime::ui::Joystick tmp5 = tmp2->get(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(254)
				::lime::ui::Joystick joystick = tmp5;		HX_STACK_VAR(joystick,"joystick");
				HX_STACK_LINE(255)
				bool tmp6 = (joystick != null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(255)
				if ((tmp6)){
					HX_STACK_LINE(255)
					::lime::_backend::native::_NativeApplication::JoystickEventInfo tmp7 = this->joystickEventInfo;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(255)
					int tmp8 = tmp7->index;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(255)
					joystick->onButtonUp->dispatch(tmp8);
				}
			}
			;break;
			case (int)5: {
				HX_STACK_LINE(259)
				::lime::_backend::native::_NativeApplication::JoystickEventInfo tmp2 = this->joystickEventInfo;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(259)
				int tmp3 = tmp2->id;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(259)
				::lime::ui::Joystick_obj::__connect(tmp3);
			}
			;break;
			case (int)6: {
				HX_STACK_LINE(263)
				::lime::_backend::native::_NativeApplication::JoystickEventInfo tmp2 = this->joystickEventInfo;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(263)
				int tmp3 = tmp2->id;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(263)
				::lime::ui::Joystick_obj::__disconnect(tmp3);
			}
			;break;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(NativeApplication_obj,handleJoystickEvent,(void))

Void NativeApplication_obj::handleKeyEvent( ){
{
		HX_STACK_FRAME("lime._backend.native.NativeApplication","handleKeyEvent",0xe8484c0f,"lime._backend.native.NativeApplication.handleKeyEvent","lime/_backend/native/NativeApplication.hx",270,0xb13849fd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(272)
		::lime::app::Application tmp = this->parent;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(272)
		::lime::_backend::native::_NativeApplication::KeyEventInfo tmp1 = this->keyEventInfo;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(272)
		int tmp2 = tmp1->windowID;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(272)
		::lime::ui::Window tmp3 = tmp->windowByID->get(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(272)
		::lime::ui::Window window = tmp3;		HX_STACK_VAR(window,"window");
		HX_STACK_LINE(274)
		bool tmp4 = (window != null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(274)
		if ((tmp4)){
			HX_STACK_LINE(276)
			::lime::_backend::native::_NativeApplication::KeyEventInfo tmp5 = this->keyEventInfo;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(276)
			int type = tmp5->type;		HX_STACK_VAR(type,"type");
			HX_STACK_LINE(277)
			::lime::_backend::native::_NativeApplication::KeyEventInfo tmp6 = this->keyEventInfo;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(277)
			int keyCode = tmp6->keyCode;		HX_STACK_VAR(keyCode,"keyCode");
			HX_STACK_LINE(278)
			::lime::_backend::native::_NativeApplication::KeyEventInfo tmp7 = this->keyEventInfo;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(278)
			int modifier = tmp7->modifier;		HX_STACK_VAR(modifier,"modifier");
			HX_STACK_LINE(280)
			int tmp8 = type;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(280)
			switch( (int)(tmp8)){
				case (int)0: {
					HX_STACK_LINE(284)
					int tmp9 = keyCode;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(284)
					int tmp10 = modifier;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(284)
					window->onKeyDown->dispatch(tmp9,tmp10);
				}
				;break;
				case (int)1: {
					HX_STACK_LINE(288)
					int tmp9 = keyCode;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(288)
					int tmp10 = modifier;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(288)
					window->onKeyUp->dispatch(tmp9,tmp10);
				}
				;break;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(NativeApplication_obj,handleKeyEvent,(void))

Void NativeApplication_obj::handleMouseEvent( ){
{
		HX_STACK_FRAME("lime._backend.native.NativeApplication","handleMouseEvent",0xe26e46c9,"lime._backend.native.NativeApplication.handleMouseEvent","lime/_backend/native/NativeApplication.hx",323,0xb13849fd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(325)
		::lime::app::Application tmp = this->parent;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(325)
		::lime::_backend::native::_NativeApplication::MouseEventInfo tmp1 = this->mouseEventInfo;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(325)
		int tmp2 = tmp1->windowID;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(325)
		::lime::ui::Window tmp3 = tmp->windowByID->get(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(325)
		::lime::ui::Window window = tmp3;		HX_STACK_VAR(window,"window");
		HX_STACK_LINE(327)
		bool tmp4 = (window != null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(327)
		if ((tmp4)){
			HX_STACK_LINE(329)
			::lime::_backend::native::_NativeApplication::MouseEventInfo tmp5 = this->mouseEventInfo;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(329)
			int _g = tmp5->type;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(329)
			int tmp6 = _g;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(329)
			switch( (int)(tmp6)){
				case (int)0: {
					HX_STACK_LINE(333)
					::lime::_backend::native::_NativeApplication::MouseEventInfo tmp7 = this->mouseEventInfo;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(333)
					Float tmp8 = tmp7->x;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(333)
					::lime::_backend::native::_NativeApplication::MouseEventInfo tmp9 = this->mouseEventInfo;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(333)
					Float tmp10 = tmp9->y;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(333)
					::lime::_backend::native::_NativeApplication::MouseEventInfo tmp11 = this->mouseEventInfo;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(333)
					int tmp12 = tmp11->button;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(333)
					window->onMouseDown->dispatch(tmp8,tmp10,tmp12);
				}
				;break;
				case (int)1: {
					HX_STACK_LINE(337)
					::lime::_backend::native::_NativeApplication::MouseEventInfo tmp7 = this->mouseEventInfo;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(337)
					Float tmp8 = tmp7->x;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(337)
					::lime::_backend::native::_NativeApplication::MouseEventInfo tmp9 = this->mouseEventInfo;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(337)
					Float tmp10 = tmp9->y;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(337)
					::lime::_backend::native::_NativeApplication::MouseEventInfo tmp11 = this->mouseEventInfo;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(337)
					int tmp12 = tmp11->button;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(337)
					window->onMouseUp->dispatch(tmp8,tmp10,tmp12);
				}
				;break;
				case (int)2: {
					HX_STACK_LINE(341)
					::lime::_backend::native::_NativeApplication::MouseEventInfo tmp7 = this->mouseEventInfo;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(341)
					Float tmp8 = tmp7->x;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(341)
					::lime::_backend::native::_NativeApplication::MouseEventInfo tmp9 = this->mouseEventInfo;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(341)
					Float tmp10 = tmp9->y;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(341)
					window->onMouseMove->dispatch(tmp8,tmp10);
					HX_STACK_LINE(342)
					::lime::_backend::native::_NativeApplication::MouseEventInfo tmp11 = this->mouseEventInfo;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(342)
					Float tmp12 = tmp11->movementX;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(342)
					::lime::_backend::native::_NativeApplication::MouseEventInfo tmp13 = this->mouseEventInfo;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(342)
					Float tmp14 = tmp13->movementY;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(342)
					window->onMouseMoveRelative->dispatch(tmp12,tmp14);
				}
				;break;
				case (int)3: {
					HX_STACK_LINE(346)
					::lime::_backend::native::_NativeApplication::MouseEventInfo tmp7 = this->mouseEventInfo;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(346)
					Float tmp8 = tmp7->x;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(346)
					::lime::_backend::native::_NativeApplication::MouseEventInfo tmp9 = this->mouseEventInfo;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(346)
					Float tmp10 = tmp9->y;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(346)
					window->onMouseWheel->dispatch(tmp8,tmp10);
				}
				;break;
				default: {
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(NativeApplication_obj,handleMouseEvent,(void))

Void NativeApplication_obj::handleRenderEvent( ){
{
		HX_STACK_FRAME("lime._backend.native.NativeApplication","handleRenderEvent",0xf3931b50,"lime._backend.native.NativeApplication.handleRenderEvent","lime/_backend/native/NativeApplication.hx",359,0xb13849fd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(359)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(359)
		::lime::app::Application tmp = this->parent;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(359)
		Array< ::Dynamic > _g1 = tmp->__renderers;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(359)
		while((true)){
			HX_STACK_LINE(359)
			bool tmp1 = (_g < _g1->length);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(359)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(359)
			if ((tmp2)){
				HX_STACK_LINE(359)
				break;
			}
			HX_STACK_LINE(359)
			::lime::graphics::Renderer tmp3 = _g1->__get(_g).StaticCast< ::lime::graphics::Renderer >();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(359)
			::lime::graphics::Renderer renderer = tmp3;		HX_STACK_VAR(renderer,"renderer");
			HX_STACK_LINE(359)
			++(_g);
			HX_STACK_LINE(361)
			bool tmp4 = (renderer == null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(361)
			if ((tmp4)){
				HX_STACK_LINE(361)
				continue;
			}
			HX_STACK_LINE(363)
			::lime::app::Application tmp5 = this->parent;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(363)
			tmp5->renderer = renderer;
			HX_STACK_LINE(365)
			{
				HX_STACK_LINE(365)
				::lime::_backend::native::_NativeApplication::RenderEventInfo tmp6 = this->renderEventInfo;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(365)
				int _g2 = tmp6->type;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(365)
				int tmp7 = _g2;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(365)
				switch( (int)(tmp7)){
					case (int)0: {
						HX_STACK_LINE(369)
						renderer->render();
						HX_STACK_LINE(370)
						renderer->onRender->dispatch();
						HX_STACK_LINE(371)
						renderer->flip();
					}
					;break;
					case (int)1: {
						HX_STACK_LINE(375)
						bool tmp8 = renderer->backend->useHardware;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(375)
						if ((tmp8)){
							HX_STACK_LINE(377)
							renderer->context = null();
							HX_STACK_LINE(378)
							renderer->onContextLost->dispatch();
						}
					}
					;break;
					case (int)2: {
						HX_STACK_LINE(384)
						bool tmp8 = renderer->backend->useHardware;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(384)
						if ((tmp8)){
							HX_STACK_LINE(389)
							::lime::graphics::GLRenderContext tmp9 = ::lime::graphics::GLRenderContext_obj::__new();		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(389)
							::lime::graphics::RenderContext tmp10 = ::lime::graphics::RenderContext_obj::OPENGL(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(389)
							renderer->context = tmp10;
							HX_STACK_LINE(392)
							::lime::graphics::RenderContext tmp11 = renderer->context;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(392)
							renderer->onContextRestored->dispatch(tmp11);
						}
					}
					;break;
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(NativeApplication_obj,handleRenderEvent,(void))

Void NativeApplication_obj::handleSensorEvent( ){
{
		HX_STACK_FRAME("lime._backend.native.NativeApplication","handleSensorEvent",0x6e3cd9ec,"lime._backend.native.NativeApplication.handleSensorEvent","lime/_backend/native/NativeApplication.hx",403,0xb13849fd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(405)
		::haxe::ds::IntMap tmp = ::lime::_system::Sensor_obj::sensorByID;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(405)
		::lime::_backend::native::_NativeApplication::SensorEventInfo tmp1 = this->sensorEventInfo;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(405)
		int tmp2 = tmp1->id;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(405)
		::lime::_system::Sensor tmp3 = tmp->get(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(405)
		::lime::_system::Sensor sensor = tmp3;		HX_STACK_VAR(sensor,"sensor");
		HX_STACK_LINE(407)
		bool tmp4 = (sensor != null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(407)
		if ((tmp4)){
			HX_STACK_LINE(409)
			::lime::_backend::native::_NativeApplication::SensorEventInfo tmp5 = this->sensorEventInfo;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(409)
			Float tmp6 = tmp5->x;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(409)
			::lime::_backend::native::_NativeApplication::SensorEventInfo tmp7 = this->sensorEventInfo;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(409)
			Float tmp8 = tmp7->y;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(409)
			::lime::_backend::native::_NativeApplication::SensorEventInfo tmp9 = this->sensorEventInfo;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(409)
			Float tmp10 = tmp9->z;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(409)
			sensor->__Field(HX_HCSTRING("onUpdate","\x88","\x7c","\xb2","\x66"), hx::paccDynamic )->__Field(HX_HCSTRING("dispatch","\xba","\xce","\x63","\x1e"), hx::paccDynamic )(tmp6,tmp8,tmp10);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(NativeApplication_obj,handleSensorEvent,(void))

Void NativeApplication_obj::handleTextEvent( ){
{
		HX_STACK_FRAME("lime._backend.native.NativeApplication","handleTextEvent",0x373acb99,"lime._backend.native.NativeApplication.handleTextEvent","lime/_backend/native/NativeApplication.hx",416,0xb13849fd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(418)
		::lime::app::Application tmp = this->parent;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(418)
		::lime::_backend::native::_NativeApplication::TextEventInfo tmp1 = this->textEventInfo;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(418)
		int tmp2 = tmp1->windowID;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(418)
		::lime::ui::Window tmp3 = tmp->windowByID->get(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(418)
		::lime::ui::Window window = tmp3;		HX_STACK_VAR(window,"window");
		HX_STACK_LINE(420)
		bool tmp4 = (window != null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(420)
		if ((tmp4)){
			HX_STACK_LINE(422)
			::lime::_backend::native::_NativeApplication::TextEventInfo tmp5 = this->textEventInfo;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(422)
			int _g = tmp5->type;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(422)
			int tmp6 = _g;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(422)
			switch( (int)(tmp6)){
				case (int)0: {
					HX_STACK_LINE(426)
					::lime::_backend::native::_NativeApplication::TextEventInfo tmp7 = this->textEventInfo;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(426)
					::String tmp8 = tmp7->text;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(426)
					window->onTextInput->dispatch(tmp8);
				}
				;break;
				case (int)1: {
					HX_STACK_LINE(430)
					::lime::_backend::native::_NativeApplication::TextEventInfo tmp7 = this->textEventInfo;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(430)
					::String tmp8 = tmp7->text;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(430)
					::lime::_backend::native::_NativeApplication::TextEventInfo tmp9 = this->textEventInfo;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(430)
					int tmp10 = tmp9->start;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(430)
					::lime::_backend::native::_NativeApplication::TextEventInfo tmp11 = this->textEventInfo;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(430)
					int tmp12 = tmp11->length;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(430)
					window->onTextEdit->dispatch(tmp8,tmp10,tmp12);
				}
				;break;
				default: {
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(NativeApplication_obj,handleTextEvent,(void))

Void NativeApplication_obj::handleTouchEvent( ){
{
		HX_STACK_FRAME("lime._backend.native.NativeApplication","handleTouchEvent",0xbe3236ef,"lime._backend.native.NativeApplication.handleTouchEvent","lime/_backend/native/NativeApplication.hx",443,0xb13849fd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(443)
		::lime::_backend::native::_NativeApplication::TouchEventInfo tmp = this->touchEventInfo;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(443)
		int _g = tmp->type;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(443)
		int tmp1 = _g;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(443)
		switch( (int)(tmp1)){
			case (int)0: {
				HX_STACK_LINE(447)
				::List tmp2 = this->unusedTouchesPool;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(447)
				::lime::ui::Touch tmp3 = tmp2->pop();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(447)
				::lime::ui::Touch touch = tmp3;		HX_STACK_VAR(touch,"touch");
				HX_STACK_LINE(449)
				bool tmp4 = (touch == null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(449)
				if ((tmp4)){
					HX_STACK_LINE(451)
					::lime::_backend::native::_NativeApplication::TouchEventInfo tmp5 = this->touchEventInfo;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(451)
					Float tmp6 = tmp5->x;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(451)
					::lime::_backend::native::_NativeApplication::TouchEventInfo tmp7 = this->touchEventInfo;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(451)
					Float tmp8 = tmp7->y;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(451)
					::lime::_backend::native::_NativeApplication::TouchEventInfo tmp9 = this->touchEventInfo;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(451)
					int tmp10 = tmp9->id;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(451)
					::lime::_backend::native::_NativeApplication::TouchEventInfo tmp11 = this->touchEventInfo;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(451)
					Float tmp12 = tmp11->dx;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(451)
					::lime::_backend::native::_NativeApplication::TouchEventInfo tmp13 = this->touchEventInfo;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(451)
					Float tmp14 = tmp13->dy;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(451)
					::lime::_backend::native::_NativeApplication::TouchEventInfo tmp15 = this->touchEventInfo;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(451)
					Float tmp16 = tmp15->pressure;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(451)
					::lime::_backend::native::_NativeApplication::TouchEventInfo tmp17 = this->touchEventInfo;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(451)
					int tmp18 = tmp17->device;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(451)
					::lime::ui::Touch tmp19 = ::lime::ui::Touch_obj::__new(tmp6,tmp8,tmp10,tmp12,tmp14,tmp16,tmp18);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(451)
					touch = tmp19;
				}
				else{
					HX_STACK_LINE(455)
					::lime::_backend::native::_NativeApplication::TouchEventInfo tmp5 = this->touchEventInfo;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(455)
					touch->x = tmp5->x;
					HX_STACK_LINE(456)
					::lime::_backend::native::_NativeApplication::TouchEventInfo tmp6 = this->touchEventInfo;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(456)
					touch->y = tmp6->y;
					HX_STACK_LINE(457)
					::lime::_backend::native::_NativeApplication::TouchEventInfo tmp7 = this->touchEventInfo;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(457)
					touch->id = tmp7->id;
					HX_STACK_LINE(458)
					::lime::_backend::native::_NativeApplication::TouchEventInfo tmp8 = this->touchEventInfo;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(458)
					touch->dx = tmp8->dx;
					HX_STACK_LINE(459)
					::lime::_backend::native::_NativeApplication::TouchEventInfo tmp9 = this->touchEventInfo;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(459)
					touch->dy = tmp9->dy;
					HX_STACK_LINE(460)
					::lime::_backend::native::_NativeApplication::TouchEventInfo tmp10 = this->touchEventInfo;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(460)
					touch->pressure = tmp10->pressure;
					HX_STACK_LINE(461)
					::lime::_backend::native::_NativeApplication::TouchEventInfo tmp11 = this->touchEventInfo;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(461)
					touch->device = tmp11->device;
				}
				HX_STACK_LINE(465)
				::haxe::ds::IntMap tmp5 = this->currentTouches;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(465)
				int tmp6 = touch->id;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(465)
				::lime::ui::Touch tmp7 = touch;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(465)
				tmp5->set(tmp6,tmp7);
				HX_STACK_LINE(467)
				::lime::app::Event_lime_ui_Touch_Void tmp8 = ::lime::ui::Touch_obj::onStart;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(467)
				::lime::ui::Touch tmp9 = touch;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(467)
				tmp8->dispatch(tmp9);
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(471)
				::haxe::ds::IntMap tmp2 = this->currentTouches;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(471)
				::lime::_backend::native::_NativeApplication::TouchEventInfo tmp3 = this->touchEventInfo;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(471)
				int tmp4 = tmp3->id;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(471)
				::lime::ui::Touch tmp5 = tmp2->get(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(471)
				::lime::ui::Touch touch = tmp5;		HX_STACK_VAR(touch,"touch");
				HX_STACK_LINE(473)
				bool tmp6 = (touch != null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(473)
				if ((tmp6)){
					HX_STACK_LINE(475)
					::lime::_backend::native::_NativeApplication::TouchEventInfo tmp7 = this->touchEventInfo;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(475)
					touch->x = tmp7->x;
					HX_STACK_LINE(476)
					::lime::_backend::native::_NativeApplication::TouchEventInfo tmp8 = this->touchEventInfo;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(476)
					touch->y = tmp8->y;
					HX_STACK_LINE(477)
					::lime::_backend::native::_NativeApplication::TouchEventInfo tmp9 = this->touchEventInfo;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(477)
					touch->dx = tmp9->dx;
					HX_STACK_LINE(478)
					::lime::_backend::native::_NativeApplication::TouchEventInfo tmp10 = this->touchEventInfo;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(478)
					touch->dy = tmp10->dy;
					HX_STACK_LINE(479)
					::lime::_backend::native::_NativeApplication::TouchEventInfo tmp11 = this->touchEventInfo;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(479)
					touch->pressure = tmp11->pressure;
					HX_STACK_LINE(481)
					::lime::app::Event_lime_ui_Touch_Void tmp12 = ::lime::ui::Touch_obj::onEnd;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(481)
					::lime::ui::Touch tmp13 = touch;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(481)
					tmp12->dispatch(tmp13);
					HX_STACK_LINE(483)
					::haxe::ds::IntMap tmp14 = this->currentTouches;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(483)
					::lime::_backend::native::_NativeApplication::TouchEventInfo tmp15 = this->touchEventInfo;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(483)
					int tmp16 = tmp15->id;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(483)
					tmp14->remove(tmp16);
					HX_STACK_LINE(484)
					::List tmp17 = this->unusedTouchesPool;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(484)
					::lime::ui::Touch tmp18 = touch;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(484)
					tmp17->add(tmp18);
				}
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(490)
				::haxe::ds::IntMap tmp2 = this->currentTouches;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(490)
				::lime::_backend::native::_NativeApplication::TouchEventInfo tmp3 = this->touchEventInfo;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(490)
				int tmp4 = tmp3->id;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(490)
				::lime::ui::Touch tmp5 = tmp2->get(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(490)
				::lime::ui::Touch touch = tmp5;		HX_STACK_VAR(touch,"touch");
				HX_STACK_LINE(492)
				bool tmp6 = (touch != null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(492)
				if ((tmp6)){
					HX_STACK_LINE(494)
					::lime::_backend::native::_NativeApplication::TouchEventInfo tmp7 = this->touchEventInfo;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(494)
					touch->x = tmp7->x;
					HX_STACK_LINE(495)
					::lime::_backend::native::_NativeApplication::TouchEventInfo tmp8 = this->touchEventInfo;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(495)
					touch->y = tmp8->y;
					HX_STACK_LINE(496)
					::lime::_backend::native::_NativeApplication::TouchEventInfo tmp9 = this->touchEventInfo;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(496)
					touch->dx = tmp9->dx;
					HX_STACK_LINE(497)
					::lime::_backend::native::_NativeApplication::TouchEventInfo tmp10 = this->touchEventInfo;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(497)
					touch->dy = tmp10->dy;
					HX_STACK_LINE(498)
					::lime::_backend::native::_NativeApplication::TouchEventInfo tmp11 = this->touchEventInfo;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(498)
					touch->pressure = tmp11->pressure;
					HX_STACK_LINE(500)
					::lime::app::Event_lime_ui_Touch_Void tmp12 = ::lime::ui::Touch_obj::onMove;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(500)
					::lime::ui::Touch tmp13 = touch;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(500)
					tmp12->dispatch(tmp13);
				}
			}
			;break;
			default: {
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(NativeApplication_obj,handleTouchEvent,(void))

Void NativeApplication_obj::handleWindowEvent( ){
{
		HX_STACK_FRAME("lime._backend.native.NativeApplication","handleWindowEvent",0x18b48476,"lime._backend.native.NativeApplication.handleWindowEvent","lime/_backend/native/NativeApplication.hx",511,0xb13849fd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(513)
		::lime::app::Application tmp = this->parent;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(513)
		::lime::_backend::native::_NativeApplication::WindowEventInfo tmp1 = this->windowEventInfo;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(513)
		int tmp2 = tmp1->windowID;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(513)
		::lime::ui::Window tmp3 = tmp->windowByID->get(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(513)
		::lime::ui::Window window = tmp3;		HX_STACK_VAR(window,"window");
		HX_STACK_LINE(515)
		bool tmp4 = (window != null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(515)
		if ((tmp4)){
			HX_STACK_LINE(517)
			::lime::_backend::native::_NativeApplication::WindowEventInfo tmp5 = this->windowEventInfo;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(517)
			int _g = tmp5->type;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(517)
			int tmp6 = _g;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(517)
			switch( (int)(tmp6)){
				case (int)0: {
					HX_STACK_LINE(521)
					window->onActivate->dispatch();
				}
				;break;
				case (int)1: {
					HX_STACK_LINE(525)
					window->close();
				}
				;break;
				case (int)2: {
					HX_STACK_LINE(529)
					window->onDeactivate->dispatch();
				}
				;break;
				case (int)3: {
					HX_STACK_LINE(533)
					window->onEnter->dispatch();
				}
				;break;
				case (int)4: {
					HX_STACK_LINE(537)
					window->onFocusIn->dispatch();
				}
				;break;
				case (int)5: {
					HX_STACK_LINE(541)
					window->onFocusOut->dispatch();
				}
				;break;
				case (int)6: {
					HX_STACK_LINE(545)
					window->onLeave->dispatch();
				}
				;break;
				case (int)7: {
					HX_STACK_LINE(549)
					window->__minimized = true;
					HX_STACK_LINE(550)
					window->onMinimize->dispatch();
				}
				;break;
				case (int)8: {
					HX_STACK_LINE(554)
					::lime::_backend::native::_NativeApplication::WindowEventInfo tmp7 = this->windowEventInfo;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(554)
					window->__x = tmp7->x;
					HX_STACK_LINE(555)
					::lime::_backend::native::_NativeApplication::WindowEventInfo tmp8 = this->windowEventInfo;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(555)
					window->__y = tmp8->y;
					HX_STACK_LINE(556)
					::lime::_backend::native::_NativeApplication::WindowEventInfo tmp9 = this->windowEventInfo;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(556)
					int tmp10 = tmp9->x;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(556)
					::lime::_backend::native::_NativeApplication::WindowEventInfo tmp11 = this->windowEventInfo;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(556)
					int tmp12 = tmp11->y;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(556)
					window->onMove->dispatch(tmp10,tmp12);
				}
				;break;
				case (int)9: {
					HX_STACK_LINE(560)
					::lime::_backend::native::_NativeApplication::WindowEventInfo tmp7 = this->windowEventInfo;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(560)
					window->__width = tmp7->width;
					HX_STACK_LINE(561)
					::lime::_backend::native::_NativeApplication::WindowEventInfo tmp8 = this->windowEventInfo;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(561)
					window->__height = tmp8->height;
					HX_STACK_LINE(562)
					::lime::_backend::native::_NativeApplication::WindowEventInfo tmp9 = this->windowEventInfo;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(562)
					int tmp10 = tmp9->width;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(562)
					::lime::_backend::native::_NativeApplication::WindowEventInfo tmp11 = this->windowEventInfo;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(562)
					int tmp12 = tmp11->height;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(562)
					window->onResize->dispatch(tmp10,tmp12);
				}
				;break;
				case (int)10: {
					HX_STACK_LINE(566)
					window->__fullscreen = false;
					HX_STACK_LINE(567)
					window->__minimized = false;
					HX_STACK_LINE(568)
					window->onRestore->dispatch();
				}
				;break;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(NativeApplication_obj,handleWindowEvent,(void))

Float NativeApplication_obj::setFrameRate( Float value){
	HX_STACK_FRAME("lime._backend.native.NativeApplication","setFrameRate",0xfc951cf7,"lime._backend.native.NativeApplication.setFrameRate","lime/_backend/native/NativeApplication.hx",577,0xb13849fd)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(580)
	::lime::_backend::native::NativeApplication_obj::cffi_lime_application_set_frame_rate.call(hx::DynamicPtr(this->handle),value);
	HX_STACK_LINE(582)
	Float tmp = this->frameRate = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(582)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(NativeApplication_obj,setFrameRate,return )

Void NativeApplication_obj::updateTimer( ){
{
		HX_STACK_FRAME("lime._backend.native.NativeApplication","updateTimer",0x8a9bcb30,"lime._backend.native.NativeApplication.updateTimer","lime/_backend/native/NativeApplication.hx",587,0xb13849fd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(589)
		int tmp = ::haxe::Timer_obj::sRunningTimers->length;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(589)
		bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(589)
		if ((tmp1)){
			HX_STACK_LINE(591)
			int tmp2 = ::lime::_system::System_obj::getTimer();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(591)
			int currentTime = tmp2;		HX_STACK_VAR(currentTime,"currentTime");
			HX_STACK_LINE(592)
			bool foundNull = false;		HX_STACK_VAR(foundNull,"foundNull");
			HX_STACK_LINE(593)
			::haxe::Timer timer;		HX_STACK_VAR(timer,"timer");
			HX_STACK_LINE(595)
			{
				HX_STACK_LINE(595)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(595)
				int tmp3 = ::haxe::Timer_obj::sRunningTimers->length;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(595)
				int _g = tmp3;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(595)
				while((true)){
					HX_STACK_LINE(595)
					bool tmp4 = (_g1 < _g);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(595)
					bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(595)
					if ((tmp5)){
						HX_STACK_LINE(595)
						break;
					}
					HX_STACK_LINE(595)
					int tmp6 = (_g1)++;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(595)
					int i = tmp6;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(597)
					::haxe::Timer tmp7 = ::haxe::Timer_obj::sRunningTimers->__get(i).StaticCast< ::haxe::Timer >();		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(597)
					timer = tmp7;
					HX_STACK_LINE(599)
					bool tmp8 = (timer != null());		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(599)
					if ((tmp8)){
						HX_STACK_LINE(601)
						bool tmp9 = (currentTime >= timer->mFireAt);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(601)
						if ((tmp9)){
							HX_STACK_LINE(603)
							hx::AddEq(timer->mFireAt,timer->mTime);
							HX_STACK_LINE(604)
							timer->run();
						}
					}
					else{
						HX_STACK_LINE(610)
						foundNull = true;
					}
				}
			}
			HX_STACK_LINE(616)
			bool tmp3 = foundNull;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(616)
			if ((tmp3)){

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_3_1)
				int __ArgCount() const { return 1; }
				bool run(::haxe::Timer val){
					HX_STACK_FRAME("*","_Function_3_1",0x520271b9,"*._Function_3_1","lime/_backend/native/NativeApplication.hx",618,0xb13849fd)
					HX_STACK_ARG(val,"val")
					{
						HX_STACK_LINE(618)
						bool tmp4 = (val != null());		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(618)
						return tmp4;
					}
					return null();
				}
				HX_END_LOCAL_FUNC1(return)

				HX_STACK_LINE(618)
				::haxe::Timer_obj::sRunningTimers = ::haxe::Timer_obj::sRunningTimers->filter( Dynamic(new _Function_3_1()));
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(NativeApplication_obj,updateTimer,(void))

Dynamic NativeApplication_obj::lime_application_create( Dynamic config){
	HX_STACK_FRAME("lime._backend.native.NativeApplication","lime_application_create",0xc9ec45a9,"lime._backend.native.NativeApplication.lime_application_create","lime/_backend/native/NativeApplication.hx",628,0xb13849fd)
	HX_STACK_ARG(config,"config")
	HX_STACK_LINE(628)
	return ::lime::_backend::native::NativeApplication_obj::cffi_lime_application_create.call(hx::DynamicPtr(config));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeApplication_obj,lime_application_create,return )

Void NativeApplication_obj::lime_application_event_manager_register( Dynamic callback,Dynamic eventObject){
{
		HX_STACK_FRAME("lime._backend.native.NativeApplication","lime_application_event_manager_register",0x68200767,"lime._backend.native.NativeApplication.lime_application_event_manager_register","lime/_backend/native/NativeApplication.hx",629,0xb13849fd)
		HX_STACK_ARG(callback,"callback")
		HX_STACK_ARG(eventObject,"eventObject")
		HX_STACK_LINE(629)
		::lime::_backend::native::NativeApplication_obj::cffi_lime_application_event_manager_register.call(hx::DynamicPtr(callback),hx::DynamicPtr(eventObject));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(NativeApplication_obj,lime_application_event_manager_register,(void))

int NativeApplication_obj::lime_application_exec( Dynamic handle){
	HX_STACK_FRAME("lime._backend.native.NativeApplication","lime_application_exec",0x469bdcfe,"lime._backend.native.NativeApplication.lime_application_exec","lime/_backend/native/NativeApplication.hx",630,0xb13849fd)
	HX_STACK_ARG(handle,"handle")
	HX_STACK_LINE(630)
	return ::lime::_backend::native::NativeApplication_obj::cffi_lime_application_exec.call(hx::DynamicPtr(handle));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeApplication_obj,lime_application_exec,return )

Void NativeApplication_obj::lime_application_init( Dynamic handle){
{
		HX_STACK_FRAME("lime._backend.native.NativeApplication","lime_application_init",0x4939247d,"lime._backend.native.NativeApplication.lime_application_init","lime/_backend/native/NativeApplication.hx",631,0xb13849fd)
		HX_STACK_ARG(handle,"handle")
		HX_STACK_LINE(631)
		::lime::_backend::native::NativeApplication_obj::cffi_lime_application_init.call(hx::DynamicPtr(handle));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeApplication_obj,lime_application_init,(void))

int NativeApplication_obj::lime_application_quit( Dynamic handle){
	HX_STACK_FRAME("lime._backend.native.NativeApplication","lime_application_quit",0x4e88293c,"lime._backend.native.NativeApplication.lime_application_quit","lime/_backend/native/NativeApplication.hx",632,0xb13849fd)
	HX_STACK_ARG(handle,"handle")
	HX_STACK_LINE(632)
	return ::lime::_backend::native::NativeApplication_obj::cffi_lime_application_quit.call(hx::DynamicPtr(handle));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeApplication_obj,lime_application_quit,return )

Void NativeApplication_obj::lime_application_set_frame_rate( Dynamic handle,Float value){
{
		HX_STACK_FRAME("lime._backend.native.NativeApplication","lime_application_set_frame_rate",0x54d277dc,"lime._backend.native.NativeApplication.lime_application_set_frame_rate","lime/_backend/native/NativeApplication.hx",633,0xb13849fd)
		HX_STACK_ARG(handle,"handle")
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(633)
		::lime::_backend::native::NativeApplication_obj::cffi_lime_application_set_frame_rate.call(hx::DynamicPtr(handle),value);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(NativeApplication_obj,lime_application_set_frame_rate,(void))

bool NativeApplication_obj::lime_application_update( Dynamic handle){
	HX_STACK_FRAME("lime._backend.native.NativeApplication","lime_application_update",0xd4e264b6,"lime._backend.native.NativeApplication.lime_application_update","lime/_backend/native/NativeApplication.hx",634,0xb13849fd)
	HX_STACK_ARG(handle,"handle")
	HX_STACK_LINE(634)
	return ::lime::_backend::native::NativeApplication_obj::cffi_lime_application_update.call(hx::DynamicPtr(handle));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeApplication_obj,lime_application_update,return )

Void NativeApplication_obj::lime_drop_event_manager_register( Dynamic callback,Dynamic eventObject){
{
		HX_STACK_FRAME("lime._backend.native.NativeApplication","lime_drop_event_manager_register",0x245381ec,"lime._backend.native.NativeApplication.lime_drop_event_manager_register","lime/_backend/native/NativeApplication.hx",635,0xb13849fd)
		HX_STACK_ARG(callback,"callback")
		HX_STACK_ARG(eventObject,"eventObject")
		HX_STACK_LINE(635)
		::lime::_backend::native::NativeApplication_obj::cffi_lime_drop_event_manager_register.call(hx::DynamicPtr(callback),hx::DynamicPtr(eventObject));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(NativeApplication_obj,lime_drop_event_manager_register,(void))

Void NativeApplication_obj::lime_gamepad_event_manager_register( Dynamic callback,Dynamic eventObject){
{
		HX_STACK_FRAME("lime._backend.native.NativeApplication","lime_gamepad_event_manager_register",0x8dba5536,"lime._backend.native.NativeApplication.lime_gamepad_event_manager_register","lime/_backend/native/NativeApplication.hx",636,0xb13849fd)
		HX_STACK_ARG(callback,"callback")
		HX_STACK_ARG(eventObject,"eventObject")
		HX_STACK_LINE(636)
		::lime::_backend::native::NativeApplication_obj::cffi_lime_gamepad_event_manager_register.call(hx::DynamicPtr(callback),hx::DynamicPtr(eventObject));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(NativeApplication_obj,lime_gamepad_event_manager_register,(void))

Void NativeApplication_obj::lime_joystick_event_manager_register( Dynamic callback,Dynamic eventObject){
{
		HX_STACK_FRAME("lime._backend.native.NativeApplication","lime_joystick_event_manager_register",0xdfabe3ff,"lime._backend.native.NativeApplication.lime_joystick_event_manager_register","lime/_backend/native/NativeApplication.hx",637,0xb13849fd)
		HX_STACK_ARG(callback,"callback")
		HX_STACK_ARG(eventObject,"eventObject")
		HX_STACK_LINE(637)
		::lime::_backend::native::NativeApplication_obj::cffi_lime_joystick_event_manager_register.call(hx::DynamicPtr(callback),hx::DynamicPtr(eventObject));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(NativeApplication_obj,lime_joystick_event_manager_register,(void))

Void NativeApplication_obj::lime_key_event_manager_register( Dynamic callback,Dynamic eventObject){
{
		HX_STACK_FRAME("lime._backend.native.NativeApplication","lime_key_event_manager_register",0x6e7184f8,"lime._backend.native.NativeApplication.lime_key_event_manager_register","lime/_backend/native/NativeApplication.hx",638,0xb13849fd)
		HX_STACK_ARG(callback,"callback")
		HX_STACK_ARG(eventObject,"eventObject")
		HX_STACK_LINE(638)
		::lime::_backend::native::NativeApplication_obj::cffi_lime_key_event_manager_register.call(hx::DynamicPtr(callback),hx::DynamicPtr(eventObject));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(NativeApplication_obj,lime_key_event_manager_register,(void))

Void NativeApplication_obj::lime_mouse_event_manager_register( Dynamic callback,Dynamic eventObject){
{
		HX_STACK_FRAME("lime._backend.native.NativeApplication","lime_mouse_event_manager_register",0x6e6b1cb2,"lime._backend.native.NativeApplication.lime_mouse_event_manager_register","lime/_backend/native/NativeApplication.hx",639,0xb13849fd)
		HX_STACK_ARG(callback,"callback")
		HX_STACK_ARG(eventObject,"eventObject")
		HX_STACK_LINE(639)
		::lime::_backend::native::NativeApplication_obj::cffi_lime_mouse_event_manager_register.call(hx::DynamicPtr(callback),hx::DynamicPtr(eventObject));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(NativeApplication_obj,lime_mouse_event_manager_register,(void))

Void NativeApplication_obj::lime_render_event_manager_register( Dynamic callback,Dynamic eventObject){
{
		HX_STACK_FRAME("lime._backend.native.NativeApplication","lime_render_event_manager_register",0xd5f19025,"lime._backend.native.NativeApplication.lime_render_event_manager_register","lime/_backend/native/NativeApplication.hx",640,0xb13849fd)
		HX_STACK_ARG(callback,"callback")
		HX_STACK_ARG(eventObject,"eventObject")
		HX_STACK_LINE(640)
		::lime::_backend::native::NativeApplication_obj::cffi_lime_render_event_manager_register.call(hx::DynamicPtr(callback),hx::DynamicPtr(eventObject));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(NativeApplication_obj,lime_render_event_manager_register,(void))

Void NativeApplication_obj::lime_sensor_event_manager_register( Dynamic callback,Dynamic eventObject){
{
		HX_STACK_FRAME("lime._backend.native.NativeApplication","lime_sensor_event_manager_register",0xf7db25c1,"lime._backend.native.NativeApplication.lime_sensor_event_manager_register","lime/_backend/native/NativeApplication.hx",641,0xb13849fd)
		HX_STACK_ARG(callback,"callback")
		HX_STACK_ARG(eventObject,"eventObject")
		HX_STACK_LINE(641)
		::lime::_backend::native::NativeApplication_obj::cffi_lime_sensor_event_manager_register.call(hx::DynamicPtr(callback),hx::DynamicPtr(eventObject));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(NativeApplication_obj,lime_sensor_event_manager_register,(void))

Void NativeApplication_obj::lime_text_event_manager_register( Dynamic callback,Dynamic eventObject){
{
		HX_STACK_FRAME("lime._backend.native.NativeApplication","lime_text_event_manager_register",0x4272bd2e,"lime._backend.native.NativeApplication.lime_text_event_manager_register","lime/_backend/native/NativeApplication.hx",642,0xb13849fd)
		HX_STACK_ARG(callback,"callback")
		HX_STACK_ARG(eventObject,"eventObject")
		HX_STACK_LINE(642)
		::lime::_backend::native::NativeApplication_obj::cffi_lime_text_event_manager_register.call(hx::DynamicPtr(callback),hx::DynamicPtr(eventObject));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(NativeApplication_obj,lime_text_event_manager_register,(void))

Void NativeApplication_obj::lime_touch_event_manager_register( Dynamic callback,Dynamic eventObject){
{
		HX_STACK_FRAME("lime._backend.native.NativeApplication","lime_touch_event_manager_register",0x79dc0e58,"lime._backend.native.NativeApplication.lime_touch_event_manager_register","lime/_backend/native/NativeApplication.hx",643,0xb13849fd)
		HX_STACK_ARG(callback,"callback")
		HX_STACK_ARG(eventObject,"eventObject")
		HX_STACK_LINE(643)
		::lime::_backend::native::NativeApplication_obj::cffi_lime_touch_event_manager_register.call(hx::DynamicPtr(callback),hx::DynamicPtr(eventObject));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(NativeApplication_obj,lime_touch_event_manager_register,(void))

Void NativeApplication_obj::lime_window_event_manager_register( Dynamic callback,Dynamic eventObject){
{
		HX_STACK_FRAME("lime._backend.native.NativeApplication","lime_window_event_manager_register",0xf4923acb,"lime._backend.native.NativeApplication.lime_window_event_manager_register","lime/_backend/native/NativeApplication.hx",644,0xb13849fd)
		HX_STACK_ARG(callback,"callback")
		HX_STACK_ARG(eventObject,"eventObject")
		HX_STACK_LINE(644)
		::lime::_backend::native::NativeApplication_obj::cffi_lime_window_event_manager_register.call(hx::DynamicPtr(callback),hx::DynamicPtr(eventObject));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(NativeApplication_obj,lime_window_event_manager_register,(void))

::cpp::Function< ::hx::Object * ( ::hx::Object * ) > NativeApplication_obj::cffi_lime_application_create;

::cpp::Function< void ( ::hx::Object * ,::hx::Object * ) > NativeApplication_obj::cffi_lime_application_event_manager_register;

::cpp::Function< int ( ::hx::Object * ) > NativeApplication_obj::cffi_lime_application_exec;

::cpp::Function< void ( ::hx::Object * ) > NativeApplication_obj::cffi_lime_application_init;

::cpp::Function< int ( ::hx::Object * ) > NativeApplication_obj::cffi_lime_application_quit;

::cpp::Function< void ( ::hx::Object * ,Float ) > NativeApplication_obj::cffi_lime_application_set_frame_rate;

::cpp::Function< bool ( ::hx::Object * ) > NativeApplication_obj::cffi_lime_application_update;

::cpp::Function< void ( ::hx::Object * ,::hx::Object * ) > NativeApplication_obj::cffi_lime_drop_event_manager_register;

::cpp::Function< void ( ::hx::Object * ,::hx::Object * ) > NativeApplication_obj::cffi_lime_gamepad_event_manager_register;

::cpp::Function< void ( ::hx::Object * ,::hx::Object * ) > NativeApplication_obj::cffi_lime_joystick_event_manager_register;

::cpp::Function< void ( ::hx::Object * ,::hx::Object * ) > NativeApplication_obj::cffi_lime_key_event_manager_register;

::cpp::Function< void ( ::hx::Object * ,::hx::Object * ) > NativeApplication_obj::cffi_lime_mouse_event_manager_register;

::cpp::Function< void ( ::hx::Object * ,::hx::Object * ) > NativeApplication_obj::cffi_lime_render_event_manager_register;

::cpp::Function< void ( ::hx::Object * ,::hx::Object * ) > NativeApplication_obj::cffi_lime_sensor_event_manager_register;

::cpp::Function< void ( ::hx::Object * ,::hx::Object * ) > NativeApplication_obj::cffi_lime_text_event_manager_register;

::cpp::Function< void ( ::hx::Object * ,::hx::Object * ) > NativeApplication_obj::cffi_lime_touch_event_manager_register;

::cpp::Function< void ( ::hx::Object * ,::hx::Object * ) > NativeApplication_obj::cffi_lime_window_event_manager_register;


NativeApplication_obj::NativeApplication_obj()
{
}

void NativeApplication_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(NativeApplication);
	HX_MARK_MEMBER_NAME(applicationEventInfo,"applicationEventInfo");
	HX_MARK_MEMBER_NAME(currentTouches,"currentTouches");
	HX_MARK_MEMBER_NAME(dropEventInfo,"dropEventInfo");
	HX_MARK_MEMBER_NAME(gamepadEventInfo,"gamepadEventInfo");
	HX_MARK_MEMBER_NAME(joystickEventInfo,"joystickEventInfo");
	HX_MARK_MEMBER_NAME(keyEventInfo,"keyEventInfo");
	HX_MARK_MEMBER_NAME(mouseEventInfo,"mouseEventInfo");
	HX_MARK_MEMBER_NAME(renderEventInfo,"renderEventInfo");
	HX_MARK_MEMBER_NAME(sensorEventInfo,"sensorEventInfo");
	HX_MARK_MEMBER_NAME(textEventInfo,"textEventInfo");
	HX_MARK_MEMBER_NAME(touchEventInfo,"touchEventInfo");
	HX_MARK_MEMBER_NAME(unusedTouchesPool,"unusedTouchesPool");
	HX_MARK_MEMBER_NAME(windowEventInfo,"windowEventInfo");
	HX_MARK_MEMBER_NAME(handle,"handle");
	HX_MARK_MEMBER_NAME(frameRate,"frameRate");
	HX_MARK_MEMBER_NAME(parent,"parent");
	HX_MARK_END_CLASS();
}

void NativeApplication_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(applicationEventInfo,"applicationEventInfo");
	HX_VISIT_MEMBER_NAME(currentTouches,"currentTouches");
	HX_VISIT_MEMBER_NAME(dropEventInfo,"dropEventInfo");
	HX_VISIT_MEMBER_NAME(gamepadEventInfo,"gamepadEventInfo");
	HX_VISIT_MEMBER_NAME(joystickEventInfo,"joystickEventInfo");
	HX_VISIT_MEMBER_NAME(keyEventInfo,"keyEventInfo");
	HX_VISIT_MEMBER_NAME(mouseEventInfo,"mouseEventInfo");
	HX_VISIT_MEMBER_NAME(renderEventInfo,"renderEventInfo");
	HX_VISIT_MEMBER_NAME(sensorEventInfo,"sensorEventInfo");
	HX_VISIT_MEMBER_NAME(textEventInfo,"textEventInfo");
	HX_VISIT_MEMBER_NAME(touchEventInfo,"touchEventInfo");
	HX_VISIT_MEMBER_NAME(unusedTouchesPool,"unusedTouchesPool");
	HX_VISIT_MEMBER_NAME(windowEventInfo,"windowEventInfo");
	HX_VISIT_MEMBER_NAME(handle,"handle");
	HX_VISIT_MEMBER_NAME(frameRate,"frameRate");
	HX_VISIT_MEMBER_NAME(parent,"parent");
}

Dynamic NativeApplication_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"exec") ) { return exec_dyn(); }
		if (HX_FIELD_EQ(inName,"exit") ) { return exit_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"handle") ) { return handle; }
		if (HX_FIELD_EQ(inName,"parent") ) { return parent; }
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"frameRate") ) { return frameRate; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"updateTimer") ) { return updateTimer_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"keyEventInfo") ) { return keyEventInfo; }
		if (HX_FIELD_EQ(inName,"getFrameRate") ) { return getFrameRate_dyn(); }
		if (HX_FIELD_EQ(inName,"setFrameRate") ) { return setFrameRate_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"dropEventInfo") ) { return dropEventInfo; }
		if (HX_FIELD_EQ(inName,"textEventInfo") ) { return textEventInfo; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"currentTouches") ) { return currentTouches; }
		if (HX_FIELD_EQ(inName,"mouseEventInfo") ) { return mouseEventInfo; }
		if (HX_FIELD_EQ(inName,"touchEventInfo") ) { return touchEventInfo; }
		if (HX_FIELD_EQ(inName,"handleKeyEvent") ) { return handleKeyEvent_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"renderEventInfo") ) { return renderEventInfo; }
		if (HX_FIELD_EQ(inName,"sensorEventInfo") ) { return sensorEventInfo; }
		if (HX_FIELD_EQ(inName,"windowEventInfo") ) { return windowEventInfo; }
		if (HX_FIELD_EQ(inName,"handleDropEvent") ) { return handleDropEvent_dyn(); }
		if (HX_FIELD_EQ(inName,"handleTextEvent") ) { return handleTextEvent_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"gamepadEventInfo") ) { return gamepadEventInfo; }
		if (HX_FIELD_EQ(inName,"handleMouseEvent") ) { return handleMouseEvent_dyn(); }
		if (HX_FIELD_EQ(inName,"handleTouchEvent") ) { return handleTouchEvent_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"joystickEventInfo") ) { return joystickEventInfo; }
		if (HX_FIELD_EQ(inName,"unusedTouchesPool") ) { return unusedTouchesPool; }
		if (HX_FIELD_EQ(inName,"handleRenderEvent") ) { return handleRenderEvent_dyn(); }
		if (HX_FIELD_EQ(inName,"handleSensorEvent") ) { return handleSensorEvent_dyn(); }
		if (HX_FIELD_EQ(inName,"handleWindowEvent") ) { return handleWindowEvent_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"handleGamepadEvent") ) { return handleGamepadEvent_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"handleJoystickEvent") ) { return handleJoystickEvent_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"applicationEventInfo") ) { return applicationEventInfo; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"handleApplicationEvent") ) { return handleApplicationEvent_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool NativeApplication_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 21:
		if (HX_FIELD_EQ(inName,"lime_application_exec") ) { outValue = lime_application_exec_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_application_init") ) { outValue = lime_application_init_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_application_quit") ) { outValue = lime_application_quit_dyn(); return true;  }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"lime_application_create") ) { outValue = lime_application_create_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_application_update") ) { outValue = lime_application_update_dyn(); return true;  }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"cffi_lime_application_exec") ) { outValue = cffi_lime_application_exec; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_application_init") ) { outValue = cffi_lime_application_init; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_application_quit") ) { outValue = cffi_lime_application_quit; return true;  }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"cffi_lime_application_create") ) { outValue = cffi_lime_application_create; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_application_update") ) { outValue = cffi_lime_application_update; return true;  }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"lime_application_set_frame_rate") ) { outValue = lime_application_set_frame_rate_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_key_event_manager_register") ) { outValue = lime_key_event_manager_register_dyn(); return true;  }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"lime_drop_event_manager_register") ) { outValue = lime_drop_event_manager_register_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_text_event_manager_register") ) { outValue = lime_text_event_manager_register_dyn(); return true;  }
		break;
	case 33:
		if (HX_FIELD_EQ(inName,"lime_mouse_event_manager_register") ) { outValue = lime_mouse_event_manager_register_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_touch_event_manager_register") ) { outValue = lime_touch_event_manager_register_dyn(); return true;  }
		break;
	case 34:
		if (HX_FIELD_EQ(inName,"lime_render_event_manager_register") ) { outValue = lime_render_event_manager_register_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_sensor_event_manager_register") ) { outValue = lime_sensor_event_manager_register_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_window_event_manager_register") ) { outValue = lime_window_event_manager_register_dyn(); return true;  }
		break;
	case 35:
		if (HX_FIELD_EQ(inName,"lime_gamepad_event_manager_register") ) { outValue = lime_gamepad_event_manager_register_dyn(); return true;  }
		break;
	case 36:
		if (HX_FIELD_EQ(inName,"lime_joystick_event_manager_register") ) { outValue = lime_joystick_event_manager_register_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_application_set_frame_rate") ) { outValue = cffi_lime_application_set_frame_rate; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_key_event_manager_register") ) { outValue = cffi_lime_key_event_manager_register; return true;  }
		break;
	case 37:
		if (HX_FIELD_EQ(inName,"cffi_lime_drop_event_manager_register") ) { outValue = cffi_lime_drop_event_manager_register; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_text_event_manager_register") ) { outValue = cffi_lime_text_event_manager_register; return true;  }
		break;
	case 38:
		if (HX_FIELD_EQ(inName,"cffi_lime_mouse_event_manager_register") ) { outValue = cffi_lime_mouse_event_manager_register; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_touch_event_manager_register") ) { outValue = cffi_lime_touch_event_manager_register; return true;  }
		break;
	case 39:
		if (HX_FIELD_EQ(inName,"lime_application_event_manager_register") ) { outValue = lime_application_event_manager_register_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_render_event_manager_register") ) { outValue = cffi_lime_render_event_manager_register; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_sensor_event_manager_register") ) { outValue = cffi_lime_sensor_event_manager_register; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_window_event_manager_register") ) { outValue = cffi_lime_window_event_manager_register; return true;  }
		break;
	case 40:
		if (HX_FIELD_EQ(inName,"cffi_lime_gamepad_event_manager_register") ) { outValue = cffi_lime_gamepad_event_manager_register; return true;  }
		break;
	case 41:
		if (HX_FIELD_EQ(inName,"cffi_lime_joystick_event_manager_register") ) { outValue = cffi_lime_joystick_event_manager_register; return true;  }
		break;
	case 44:
		if (HX_FIELD_EQ(inName,"cffi_lime_application_event_manager_register") ) { outValue = cffi_lime_application_event_manager_register; return true;  }
	}
	return false;
}

Dynamic NativeApplication_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"handle") ) { handle=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"parent") ) { parent=inValue.Cast< ::lime::app::Application >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"frameRate") ) { frameRate=inValue.Cast< Float >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"keyEventInfo") ) { keyEventInfo=inValue.Cast< ::lime::_backend::native::_NativeApplication::KeyEventInfo >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"dropEventInfo") ) { dropEventInfo=inValue.Cast< ::lime::_backend::native::_NativeApplication::DropEventInfo >(); return inValue; }
		if (HX_FIELD_EQ(inName,"textEventInfo") ) { textEventInfo=inValue.Cast< ::lime::_backend::native::_NativeApplication::TextEventInfo >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"currentTouches") ) { currentTouches=inValue.Cast< ::haxe::ds::IntMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mouseEventInfo") ) { mouseEventInfo=inValue.Cast< ::lime::_backend::native::_NativeApplication::MouseEventInfo >(); return inValue; }
		if (HX_FIELD_EQ(inName,"touchEventInfo") ) { touchEventInfo=inValue.Cast< ::lime::_backend::native::_NativeApplication::TouchEventInfo >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"renderEventInfo") ) { renderEventInfo=inValue.Cast< ::lime::_backend::native::_NativeApplication::RenderEventInfo >(); return inValue; }
		if (HX_FIELD_EQ(inName,"sensorEventInfo") ) { sensorEventInfo=inValue.Cast< ::lime::_backend::native::_NativeApplication::SensorEventInfo >(); return inValue; }
		if (HX_FIELD_EQ(inName,"windowEventInfo") ) { windowEventInfo=inValue.Cast< ::lime::_backend::native::_NativeApplication::WindowEventInfo >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"gamepadEventInfo") ) { gamepadEventInfo=inValue.Cast< ::lime::_backend::native::_NativeApplication::GamepadEventInfo >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"joystickEventInfo") ) { joystickEventInfo=inValue.Cast< ::lime::_backend::native::_NativeApplication::JoystickEventInfo >(); return inValue; }
		if (HX_FIELD_EQ(inName,"unusedTouchesPool") ) { unusedTouchesPool=inValue.Cast< ::List >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"applicationEventInfo") ) { applicationEventInfo=inValue.Cast< ::lime::_backend::native::_NativeApplication::ApplicationEventInfo >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool NativeApplication_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 26:
		if (HX_FIELD_EQ(inName,"cffi_lime_application_exec") ) { cffi_lime_application_exec=ioValue.Cast< ::cpp::Function< int ( ::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_application_init") ) { cffi_lime_application_init=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_application_quit") ) { cffi_lime_application_quit=ioValue.Cast< ::cpp::Function< int ( ::hx::Object * ) > >(); return true; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"cffi_lime_application_create") ) { cffi_lime_application_create=ioValue.Cast< ::cpp::Function< ::hx::Object * ( ::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_application_update") ) { cffi_lime_application_update=ioValue.Cast< ::cpp::Function< bool ( ::hx::Object * ) > >(); return true; }
		break;
	case 36:
		if (HX_FIELD_EQ(inName,"cffi_lime_application_set_frame_rate") ) { cffi_lime_application_set_frame_rate=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ,Float ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_key_event_manager_register") ) { cffi_lime_key_event_manager_register=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ,::hx::Object * ) > >(); return true; }
		break;
	case 37:
		if (HX_FIELD_EQ(inName,"cffi_lime_drop_event_manager_register") ) { cffi_lime_drop_event_manager_register=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ,::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_text_event_manager_register") ) { cffi_lime_text_event_manager_register=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ,::hx::Object * ) > >(); return true; }
		break;
	case 38:
		if (HX_FIELD_EQ(inName,"cffi_lime_mouse_event_manager_register") ) { cffi_lime_mouse_event_manager_register=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ,::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_touch_event_manager_register") ) { cffi_lime_touch_event_manager_register=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ,::hx::Object * ) > >(); return true; }
		break;
	case 39:
		if (HX_FIELD_EQ(inName,"cffi_lime_render_event_manager_register") ) { cffi_lime_render_event_manager_register=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ,::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_sensor_event_manager_register") ) { cffi_lime_sensor_event_manager_register=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ,::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_window_event_manager_register") ) { cffi_lime_window_event_manager_register=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ,::hx::Object * ) > >(); return true; }
		break;
	case 40:
		if (HX_FIELD_EQ(inName,"cffi_lime_gamepad_event_manager_register") ) { cffi_lime_gamepad_event_manager_register=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ,::hx::Object * ) > >(); return true; }
		break;
	case 41:
		if (HX_FIELD_EQ(inName,"cffi_lime_joystick_event_manager_register") ) { cffi_lime_joystick_event_manager_register=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ,::hx::Object * ) > >(); return true; }
		break;
	case 44:
		if (HX_FIELD_EQ(inName,"cffi_lime_application_event_manager_register") ) { cffi_lime_application_event_manager_register=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ,::hx::Object * ) > >(); return true; }
	}
	return false;
}

void NativeApplication_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("applicationEventInfo","\x38","\x8c","\xf4","\x09"));
	outFields->push(HX_HCSTRING("currentTouches","\xb4","\x92","\x8c","\xe6"));
	outFields->push(HX_HCSTRING("dropEventInfo","\x79","\xeb","\x0f","\x1e"));
	outFields->push(HX_HCSTRING("gamepadEventInfo","\xc7","\xa4","\x2e","\x4c"));
	outFields->push(HX_HCSTRING("joystickEventInfo","\x4c","\x49","\x1d","\xd4"));
	outFields->push(HX_HCSTRING("keyEventInfo","\x09","\xec","\x90","\xcc"));
	outFields->push(HX_HCSTRING("mouseEventInfo","\xc3","\x9e","\xa6","\x86"));
	outFields->push(HX_HCSTRING("renderEventInfo","\x72","\x9b","\x70","\xdd"));
	outFields->push(HX_HCSTRING("sensorEventInfo","\x0e","\xd8","\x53","\x55"));
	outFields->push(HX_HCSTRING("textEventInfo","\x3b","\xd7","\x5a","\xac"));
	outFields->push(HX_HCSTRING("touchEventInfo","\xe9","\x99","\x5c","\x0c"));
	outFields->push(HX_HCSTRING("unusedTouchesPool","\xf3","\xcf","\xdf","\x11"));
	outFields->push(HX_HCSTRING("windowEventInfo","\x98","\x8f","\x34","\x9b"));
	outFields->push(HX_HCSTRING("handle","\xa8","\x83","\xfd","\xb7"));
	outFields->push(HX_HCSTRING("frameRate","\xad","\x11","\x25","\x39"));
	outFields->push(HX_HCSTRING("parent","\x2a","\x05","\x7e","\xed"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::lime::_backend::native::_NativeApplication::ApplicationEventInfo*/ ,(int)offsetof(NativeApplication_obj,applicationEventInfo),HX_HCSTRING("applicationEventInfo","\x38","\x8c","\xf4","\x09")},
	{hx::fsObject /*::haxe::ds::IntMap*/ ,(int)offsetof(NativeApplication_obj,currentTouches),HX_HCSTRING("currentTouches","\xb4","\x92","\x8c","\xe6")},
	{hx::fsObject /*::lime::_backend::native::_NativeApplication::DropEventInfo*/ ,(int)offsetof(NativeApplication_obj,dropEventInfo),HX_HCSTRING("dropEventInfo","\x79","\xeb","\x0f","\x1e")},
	{hx::fsObject /*::lime::_backend::native::_NativeApplication::GamepadEventInfo*/ ,(int)offsetof(NativeApplication_obj,gamepadEventInfo),HX_HCSTRING("gamepadEventInfo","\xc7","\xa4","\x2e","\x4c")},
	{hx::fsObject /*::lime::_backend::native::_NativeApplication::JoystickEventInfo*/ ,(int)offsetof(NativeApplication_obj,joystickEventInfo),HX_HCSTRING("joystickEventInfo","\x4c","\x49","\x1d","\xd4")},
	{hx::fsObject /*::lime::_backend::native::_NativeApplication::KeyEventInfo*/ ,(int)offsetof(NativeApplication_obj,keyEventInfo),HX_HCSTRING("keyEventInfo","\x09","\xec","\x90","\xcc")},
	{hx::fsObject /*::lime::_backend::native::_NativeApplication::MouseEventInfo*/ ,(int)offsetof(NativeApplication_obj,mouseEventInfo),HX_HCSTRING("mouseEventInfo","\xc3","\x9e","\xa6","\x86")},
	{hx::fsObject /*::lime::_backend::native::_NativeApplication::RenderEventInfo*/ ,(int)offsetof(NativeApplication_obj,renderEventInfo),HX_HCSTRING("renderEventInfo","\x72","\x9b","\x70","\xdd")},
	{hx::fsObject /*::lime::_backend::native::_NativeApplication::SensorEventInfo*/ ,(int)offsetof(NativeApplication_obj,sensorEventInfo),HX_HCSTRING("sensorEventInfo","\x0e","\xd8","\x53","\x55")},
	{hx::fsObject /*::lime::_backend::native::_NativeApplication::TextEventInfo*/ ,(int)offsetof(NativeApplication_obj,textEventInfo),HX_HCSTRING("textEventInfo","\x3b","\xd7","\x5a","\xac")},
	{hx::fsObject /*::lime::_backend::native::_NativeApplication::TouchEventInfo*/ ,(int)offsetof(NativeApplication_obj,touchEventInfo),HX_HCSTRING("touchEventInfo","\xe9","\x99","\x5c","\x0c")},
	{hx::fsObject /*::List*/ ,(int)offsetof(NativeApplication_obj,unusedTouchesPool),HX_HCSTRING("unusedTouchesPool","\xf3","\xcf","\xdf","\x11")},
	{hx::fsObject /*::lime::_backend::native::_NativeApplication::WindowEventInfo*/ ,(int)offsetof(NativeApplication_obj,windowEventInfo),HX_HCSTRING("windowEventInfo","\x98","\x8f","\x34","\x9b")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(NativeApplication_obj,handle),HX_HCSTRING("handle","\xa8","\x83","\xfd","\xb7")},
	{hx::fsFloat,(int)offsetof(NativeApplication_obj,frameRate),HX_HCSTRING("frameRate","\xad","\x11","\x25","\x39")},
	{hx::fsObject /*::lime::app::Application*/ ,(int)offsetof(NativeApplication_obj,parent),HX_HCSTRING("parent","\x2a","\x05","\x7e","\xed")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::cpp::Function< ::hx::Object * ( ::hx::Object * ) >*/ ,(void *) &NativeApplication_obj::cffi_lime_application_create,HX_HCSTRING("cffi_lime_application_create","\x9c","\x71","\x49","\x96")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ,::hx::Object * ) >*/ ,(void *) &NativeApplication_obj::cffi_lime_application_event_manager_register,HX_HCSTRING("cffi_lime_application_event_manager_register","\x5a","\x89","\x33","\xc0")},
	{hx::fsObject /*::cpp::Function< int ( ::hx::Object * ) >*/ ,(void *) &NativeApplication_obj::cffi_lime_application_exec,HX_HCSTRING("cffi_lime_application_exec","\x31","\x16","\x12","\x9e")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ) >*/ ,(void *) &NativeApplication_obj::cffi_lime_application_init,HX_HCSTRING("cffi_lime_application_init","\xb0","\x5d","\xaf","\xa0")},
	{hx::fsObject /*::cpp::Function< int ( ::hx::Object * ) >*/ ,(void *) &NativeApplication_obj::cffi_lime_application_quit,HX_HCSTRING("cffi_lime_application_quit","\x6f","\x62","\xfe","\xa5")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ,Float ) >*/ ,(void *) &NativeApplication_obj::cffi_lime_application_set_frame_rate,HX_HCSTRING("cffi_lime_application_set_frame_rate","\xcf","\x4e","\xf9","\x0d")},
	{hx::fsObject /*::cpp::Function< bool ( ::hx::Object * ) >*/ ,(void *) &NativeApplication_obj::cffi_lime_application_update,HX_HCSTRING("cffi_lime_application_update","\xa9","\x90","\x3f","\xa1")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ,::hx::Object * ) >*/ ,(void *) &NativeApplication_obj::cffi_lime_drop_event_manager_register,HX_HCSTRING("cffi_lime_drop_event_manager_register","\x99","\xbf","\x28","\x6d")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ,::hx::Object * ) >*/ ,(void *) &NativeApplication_obj::cffi_lime_gamepad_event_manager_register,HX_HCSTRING("cffi_lime_gamepad_event_manager_register","\xa9","\x21","\x63","\x7c")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ,::hx::Object * ) >*/ ,(void *) &NativeApplication_obj::cffi_lime_joystick_event_manager_register,HX_HCSTRING("cffi_lime_joystick_event_manager_register","\x2c","\xfc","\xb5","\xc4")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ,::hx::Object * ) >*/ ,(void *) &NativeApplication_obj::cffi_lime_key_event_manager_register,HX_HCSTRING("cffi_lime_key_event_manager_register","\xeb","\x5b","\x98","\x27")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ,::hx::Object * ) >*/ ,(void *) &NativeApplication_obj::cffi_lime_mouse_event_manager_register,HX_HCSTRING("cffi_lime_mouse_event_manager_register","\x65","\xd6","\x2b","\xe0")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ,::hx::Object * ) >*/ ,(void *) &NativeApplication_obj::cffi_lime_render_event_manager_register,HX_HCSTRING("cffi_lime_render_event_manager_register","\x12","\x53","\xd3","\xec")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ,::hx::Object * ) >*/ ,(void *) &NativeApplication_obj::cffi_lime_sensor_event_manager_register,HX_HCSTRING("cffi_lime_sensor_event_manager_register","\xae","\xe8","\xbc","\x0e")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ,::hx::Object * ) >*/ ,(void *) &NativeApplication_obj::cffi_lime_text_event_manager_register,HX_HCSTRING("cffi_lime_text_event_manager_register","\xdb","\xfa","\x47","\x8b")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ,::hx::Object * ) >*/ ,(void *) &NativeApplication_obj::cffi_lime_touch_event_manager_register,HX_HCSTRING("cffi_lime_touch_event_manager_register","\x0b","\xc8","\x9c","\xeb")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ,::hx::Object * ) >*/ ,(void *) &NativeApplication_obj::cffi_lime_window_event_manager_register,HX_HCSTRING("cffi_lime_window_event_manager_register","\xb8","\xfd","\x73","\x0b")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("applicationEventInfo","\x38","\x8c","\xf4","\x09"),
	HX_HCSTRING("currentTouches","\xb4","\x92","\x8c","\xe6"),
	HX_HCSTRING("dropEventInfo","\x79","\xeb","\x0f","\x1e"),
	HX_HCSTRING("gamepadEventInfo","\xc7","\xa4","\x2e","\x4c"),
	HX_HCSTRING("joystickEventInfo","\x4c","\x49","\x1d","\xd4"),
	HX_HCSTRING("keyEventInfo","\x09","\xec","\x90","\xcc"),
	HX_HCSTRING("mouseEventInfo","\xc3","\x9e","\xa6","\x86"),
	HX_HCSTRING("renderEventInfo","\x72","\x9b","\x70","\xdd"),
	HX_HCSTRING("sensorEventInfo","\x0e","\xd8","\x53","\x55"),
	HX_HCSTRING("textEventInfo","\x3b","\xd7","\x5a","\xac"),
	HX_HCSTRING("touchEventInfo","\xe9","\x99","\x5c","\x0c"),
	HX_HCSTRING("unusedTouchesPool","\xf3","\xcf","\xdf","\x11"),
	HX_HCSTRING("windowEventInfo","\x98","\x8f","\x34","\x9b"),
	HX_HCSTRING("handle","\xa8","\x83","\xfd","\xb7"),
	HX_HCSTRING("frameRate","\xad","\x11","\x25","\x39"),
	HX_HCSTRING("parent","\x2a","\x05","\x7e","\xed"),
	HX_HCSTRING("create","\xfc","\x66","\x0f","\x7c"),
	HX_HCSTRING("exec","\x91","\xf3","\x1d","\x43"),
	HX_HCSTRING("exit","\x1e","\xf7","\x1d","\x43"),
	HX_HCSTRING("getFrameRate","\x37","\xae","\x7b","\x48"),
	HX_HCSTRING("handleApplicationEvent","\x72","\xba","\xa4","\x11"),
	HX_HCSTRING("handleDropEvent","\xa3","\x9c","\xe8","\x85"),
	HX_HCSTRING("handleGamepadEvent","\x81","\x1b","\xb0","\x7b"),
	HX_HCSTRING("handleJoystickEvent","\xf6","\xd0","\x87","\xa8"),
	HX_HCSTRING("handleKeyEvent","\xc3","\x95","\x05","\x08"),
	HX_HCSTRING("handleMouseEvent","\x7d","\x65","\x58","\x63"),
	HX_HCSTRING("handleRenderEvent","\x1c","\xda","\x83","\x3f"),
	HX_HCSTRING("handleSensorEvent","\xb8","\x98","\x2d","\xba"),
	HX_HCSTRING("handleTextEvent","\x65","\xff","\x1d","\xdd"),
	HX_HCSTRING("handleTouchEvent","\xa3","\x55","\x1c","\x3f"),
	HX_HCSTRING("handleWindowEvent","\x42","\x43","\xa5","\x64"),
	HX_HCSTRING("setFrameRate","\xab","\xd1","\x74","\x5d"),
	HX_HCSTRING("updateTimer","\xfc","\x28","\xce","\xf5"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(NativeApplication_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(NativeApplication_obj::cffi_lime_application_create,"cffi_lime_application_create");
	HX_MARK_MEMBER_NAME(NativeApplication_obj::cffi_lime_application_event_manager_register,"cffi_lime_application_event_manager_register");
	HX_MARK_MEMBER_NAME(NativeApplication_obj::cffi_lime_application_exec,"cffi_lime_application_exec");
	HX_MARK_MEMBER_NAME(NativeApplication_obj::cffi_lime_application_init,"cffi_lime_application_init");
	HX_MARK_MEMBER_NAME(NativeApplication_obj::cffi_lime_application_quit,"cffi_lime_application_quit");
	HX_MARK_MEMBER_NAME(NativeApplication_obj::cffi_lime_application_set_frame_rate,"cffi_lime_application_set_frame_rate");
	HX_MARK_MEMBER_NAME(NativeApplication_obj::cffi_lime_application_update,"cffi_lime_application_update");
	HX_MARK_MEMBER_NAME(NativeApplication_obj::cffi_lime_drop_event_manager_register,"cffi_lime_drop_event_manager_register");
	HX_MARK_MEMBER_NAME(NativeApplication_obj::cffi_lime_gamepad_event_manager_register,"cffi_lime_gamepad_event_manager_register");
	HX_MARK_MEMBER_NAME(NativeApplication_obj::cffi_lime_joystick_event_manager_register,"cffi_lime_joystick_event_manager_register");
	HX_MARK_MEMBER_NAME(NativeApplication_obj::cffi_lime_key_event_manager_register,"cffi_lime_key_event_manager_register");
	HX_MARK_MEMBER_NAME(NativeApplication_obj::cffi_lime_mouse_event_manager_register,"cffi_lime_mouse_event_manager_register");
	HX_MARK_MEMBER_NAME(NativeApplication_obj::cffi_lime_render_event_manager_register,"cffi_lime_render_event_manager_register");
	HX_MARK_MEMBER_NAME(NativeApplication_obj::cffi_lime_sensor_event_manager_register,"cffi_lime_sensor_event_manager_register");
	HX_MARK_MEMBER_NAME(NativeApplication_obj::cffi_lime_text_event_manager_register,"cffi_lime_text_event_manager_register");
	HX_MARK_MEMBER_NAME(NativeApplication_obj::cffi_lime_touch_event_manager_register,"cffi_lime_touch_event_manager_register");
	HX_MARK_MEMBER_NAME(NativeApplication_obj::cffi_lime_window_event_manager_register,"cffi_lime_window_event_manager_register");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(NativeApplication_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(NativeApplication_obj::cffi_lime_application_create,"cffi_lime_application_create");
	HX_VISIT_MEMBER_NAME(NativeApplication_obj::cffi_lime_application_event_manager_register,"cffi_lime_application_event_manager_register");
	HX_VISIT_MEMBER_NAME(NativeApplication_obj::cffi_lime_application_exec,"cffi_lime_application_exec");
	HX_VISIT_MEMBER_NAME(NativeApplication_obj::cffi_lime_application_init,"cffi_lime_application_init");
	HX_VISIT_MEMBER_NAME(NativeApplication_obj::cffi_lime_application_quit,"cffi_lime_application_quit");
	HX_VISIT_MEMBER_NAME(NativeApplication_obj::cffi_lime_application_set_frame_rate,"cffi_lime_application_set_frame_rate");
	HX_VISIT_MEMBER_NAME(NativeApplication_obj::cffi_lime_application_update,"cffi_lime_application_update");
	HX_VISIT_MEMBER_NAME(NativeApplication_obj::cffi_lime_drop_event_manager_register,"cffi_lime_drop_event_manager_register");
	HX_VISIT_MEMBER_NAME(NativeApplication_obj::cffi_lime_gamepad_event_manager_register,"cffi_lime_gamepad_event_manager_register");
	HX_VISIT_MEMBER_NAME(NativeApplication_obj::cffi_lime_joystick_event_manager_register,"cffi_lime_joystick_event_manager_register");
	HX_VISIT_MEMBER_NAME(NativeApplication_obj::cffi_lime_key_event_manager_register,"cffi_lime_key_event_manager_register");
	HX_VISIT_MEMBER_NAME(NativeApplication_obj::cffi_lime_mouse_event_manager_register,"cffi_lime_mouse_event_manager_register");
	HX_VISIT_MEMBER_NAME(NativeApplication_obj::cffi_lime_render_event_manager_register,"cffi_lime_render_event_manager_register");
	HX_VISIT_MEMBER_NAME(NativeApplication_obj::cffi_lime_sensor_event_manager_register,"cffi_lime_sensor_event_manager_register");
	HX_VISIT_MEMBER_NAME(NativeApplication_obj::cffi_lime_text_event_manager_register,"cffi_lime_text_event_manager_register");
	HX_VISIT_MEMBER_NAME(NativeApplication_obj::cffi_lime_touch_event_manager_register,"cffi_lime_touch_event_manager_register");
	HX_VISIT_MEMBER_NAME(NativeApplication_obj::cffi_lime_window_event_manager_register,"cffi_lime_window_event_manager_register");
};

#endif

hx::Class NativeApplication_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("lime_application_create","\x75","\x25","\x1a","\xbb"),
	HX_HCSTRING("lime_application_event_manager_register","\x33","\x3f","\x87","\x01"),
	HX_HCSTRING("lime_application_exec","\xca","\xf1","\x81","\xe2"),
	HX_HCSTRING("lime_application_init","\x49","\x39","\x1f","\xe5"),
	HX_HCSTRING("lime_application_quit","\x08","\x3e","\x6e","\xea"),
	HX_HCSTRING("lime_application_set_frame_rate","\xa8","\x03","\xd7","\x1d"),
	HX_HCSTRING("lime_application_update","\x82","\x44","\x10","\xc6"),
	HX_HCSTRING("lime_drop_event_manager_register","\xa0","\x48","\x49","\x3f"),
	HX_HCSTRING("lime_gamepad_event_manager_register","\x02","\xb7","\x1e","\x51"),
	HX_HCSTRING("lime_joystick_event_manager_register","\xb3","\x14","\x1d","\x14"),
	HX_HCSTRING("lime_key_event_manager_register","\xc4","\x10","\x76","\x37"),
	HX_HCSTRING("lime_mouse_event_manager_register","\x7e","\x33","\x83","\xea"),
	HX_HCSTRING("lime_render_event_manager_register","\xd9","\x6b","\xed","\xee"),
	HX_HCSTRING("lime_sensor_event_manager_register","\x75","\x01","\xd7","\x10"),
	HX_HCSTRING("lime_text_event_manager_register","\xe2","\x83","\x68","\x5d"),
	HX_HCSTRING("lime_touch_event_manager_register","\x24","\x25","\xf4","\xf5"),
	HX_HCSTRING("lime_window_event_manager_register","\x7f","\x16","\x8e","\x0d"),
	HX_HCSTRING("cffi_lime_application_create","\x9c","\x71","\x49","\x96"),
	HX_HCSTRING("cffi_lime_application_event_manager_register","\x5a","\x89","\x33","\xc0"),
	HX_HCSTRING("cffi_lime_application_exec","\x31","\x16","\x12","\x9e"),
	HX_HCSTRING("cffi_lime_application_init","\xb0","\x5d","\xaf","\xa0"),
	HX_HCSTRING("cffi_lime_application_quit","\x6f","\x62","\xfe","\xa5"),
	HX_HCSTRING("cffi_lime_application_set_frame_rate","\xcf","\x4e","\xf9","\x0d"),
	HX_HCSTRING("cffi_lime_application_update","\xa9","\x90","\x3f","\xa1"),
	HX_HCSTRING("cffi_lime_drop_event_manager_register","\x99","\xbf","\x28","\x6d"),
	HX_HCSTRING("cffi_lime_gamepad_event_manager_register","\xa9","\x21","\x63","\x7c"),
	HX_HCSTRING("cffi_lime_joystick_event_manager_register","\x2c","\xfc","\xb5","\xc4"),
	HX_HCSTRING("cffi_lime_key_event_manager_register","\xeb","\x5b","\x98","\x27"),
	HX_HCSTRING("cffi_lime_mouse_event_manager_register","\x65","\xd6","\x2b","\xe0"),
	HX_HCSTRING("cffi_lime_render_event_manager_register","\x12","\x53","\xd3","\xec"),
	HX_HCSTRING("cffi_lime_sensor_event_manager_register","\xae","\xe8","\xbc","\x0e"),
	HX_HCSTRING("cffi_lime_text_event_manager_register","\xdb","\xfa","\x47","\x8b"),
	HX_HCSTRING("cffi_lime_touch_event_manager_register","\x0b","\xc8","\x9c","\xeb"),
	HX_HCSTRING("cffi_lime_window_event_manager_register","\xb8","\xfd","\x73","\x0b"),
	::String(null()) };

void NativeApplication_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime._backend.native.NativeApplication","\xa2","\x84","\xe2","\x94");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &NativeApplication_obj::__GetStatic;
	__mClass->mSetStaticField = &NativeApplication_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< NativeApplication_obj >;
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

void NativeApplication_obj::__boot()
{
	cffi_lime_application_create= ::cpp::Function< ::hx::Object * ( ::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_application_create","\x75","\x25","\x1a","\xbb"),HX_HCSTRING("oo","\x20","\x61","\x00","\x00"),false));
	cffi_lime_application_event_manager_register= ::cpp::Function< void ( ::hx::Object * ,::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_application_event_manager_register","\x33","\x3f","\x87","\x01"),HX_HCSTRING("oov","\x56","\x9b","\x54","\x00"),false));
	cffi_lime_application_exec= ::cpp::Function< int ( ::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_application_exec","\xca","\xf1","\x81","\xe2"),HX_HCSTRING("oi","\x1a","\x61","\x00","\x00"),false));
	cffi_lime_application_init= ::cpp::Function< void ( ::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_application_init","\x49","\x39","\x1f","\xe5"),HX_HCSTRING("ov","\x27","\x61","\x00","\x00"),false));
	cffi_lime_application_quit= ::cpp::Function< int ( ::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_application_quit","\x08","\x3e","\x6e","\xea"),HX_HCSTRING("oi","\x1a","\x61","\x00","\x00"),false));
	cffi_lime_application_set_frame_rate= ::cpp::Function< void ( ::hx::Object * ,Float ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_application_set_frame_rate","\xa8","\x03","\xd7","\x1d"),HX_HCSTRING("odv","\xc1","\x91","\x54","\x00"),false));
	cffi_lime_application_update= ::cpp::Function< bool ( ::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_application_update","\x82","\x44","\x10","\xc6"),HX_HCSTRING("ob","\x13","\x61","\x00","\x00"),false));
	cffi_lime_drop_event_manager_register= ::cpp::Function< void ( ::hx::Object * ,::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_drop_event_manager_register","\xa0","\x48","\x49","\x3f"),HX_HCSTRING("oov","\x56","\x9b","\x54","\x00"),false));
	cffi_lime_gamepad_event_manager_register= ::cpp::Function< void ( ::hx::Object * ,::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_gamepad_event_manager_register","\x02","\xb7","\x1e","\x51"),HX_HCSTRING("oov","\x56","\x9b","\x54","\x00"),false));
	cffi_lime_joystick_event_manager_register= ::cpp::Function< void ( ::hx::Object * ,::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_joystick_event_manager_register","\xb3","\x14","\x1d","\x14"),HX_HCSTRING("oov","\x56","\x9b","\x54","\x00"),false));
	cffi_lime_key_event_manager_register= ::cpp::Function< void ( ::hx::Object * ,::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_key_event_manager_register","\xc4","\x10","\x76","\x37"),HX_HCSTRING("oov","\x56","\x9b","\x54","\x00"),false));
	cffi_lime_mouse_event_manager_register= ::cpp::Function< void ( ::hx::Object * ,::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_mouse_event_manager_register","\x7e","\x33","\x83","\xea"),HX_HCSTRING("oov","\x56","\x9b","\x54","\x00"),false));
	cffi_lime_render_event_manager_register= ::cpp::Function< void ( ::hx::Object * ,::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_render_event_manager_register","\xd9","\x6b","\xed","\xee"),HX_HCSTRING("oov","\x56","\x9b","\x54","\x00"),false));
	cffi_lime_sensor_event_manager_register= ::cpp::Function< void ( ::hx::Object * ,::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_sensor_event_manager_register","\x75","\x01","\xd7","\x10"),HX_HCSTRING("oov","\x56","\x9b","\x54","\x00"),false));
	cffi_lime_text_event_manager_register= ::cpp::Function< void ( ::hx::Object * ,::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_text_event_manager_register","\xe2","\x83","\x68","\x5d"),HX_HCSTRING("oov","\x56","\x9b","\x54","\x00"),false));
	cffi_lime_touch_event_manager_register= ::cpp::Function< void ( ::hx::Object * ,::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_touch_event_manager_register","\x24","\x25","\xf4","\xf5"),HX_HCSTRING("oov","\x56","\x9b","\x54","\x00"),false));
	cffi_lime_window_event_manager_register= ::cpp::Function< void ( ::hx::Object * ,::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_window_event_manager_register","\x7f","\x16","\x8e","\x0d"),HX_HCSTRING("oov","\x56","\x9b","\x54","\x00"),false));
}

} // end namespace lime
} // end namespace _backend
} // end namespace native
