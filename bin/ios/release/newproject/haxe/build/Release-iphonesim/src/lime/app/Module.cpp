#include <hxcpp.h>

#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_lime_app_Application
#include <lime/app/Application.h>
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
#ifndef INCLUDED_lime_app_Event_lime_ui_Gamepad_Void
#include <lime/app/Event_lime_ui_Gamepad_Void.h>
#endif
#ifndef INCLUDED_lime_app_Event_lime_ui_Joystick_Void
#include <lime/app/Event_lime_ui_Joystick_Void.h>
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
#ifndef INCLUDED_lime_app_Preloader
#include <lime/app/Preloader.h>
#endif
#ifndef INCLUDED_lime_graphics_RenderContext
#include <lime/graphics/RenderContext.h>
#endif
#ifndef INCLUDED_lime_graphics_Renderer
#include <lime/graphics/Renderer.h>
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
namespace app{

Void Module_obj::__construct()
{
HX_STACK_FRAME("lime.app.Module","new",0x17f937a4,"lime.app.Module.new","lime/app/Module.hx",17,0x653a538a)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(23)
	this->onExit = ::lime::app::Event_Int_Void_obj::__new();
	HX_STACK_LINE(33)
	this->__renderers = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(34)
	this->__windows = Array_obj< ::Dynamic >::__new();
}
;
	return null();
}

//Module_obj::~Module_obj() { }

Dynamic Module_obj::__CreateEmpty() { return  new Module_obj; }
hx::ObjectPtr< Module_obj > Module_obj::__new()
{  hx::ObjectPtr< Module_obj > _result_ = new Module_obj();
	_result_->__construct();
	return _result_;}

Dynamic Module_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Module_obj > _result_ = new Module_obj();
	_result_->__construct();
	return _result_;}

hx::Object *Module_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::lime::app::IModule_obj)) return operator ::lime::app::IModule_obj *();
	return super::__ToInterface(inType);
}

Module_obj::operator ::lime::app::IModule_obj *()
	{ return new ::lime::app::IModule_delegate_< Module_obj >(this); }
Void Module_obj::addRenderer( ::lime::graphics::Renderer renderer){
{
		HX_STACK_FRAME("lime.app.Module","addRenderer",0xd23c47c8,"lime.app.Module.addRenderer","lime/app/Module.hx",39,0x653a538a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderer,"renderer")
		HX_STACK_LINE(41)
		Dynamic tmp = this->render_dyn();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(41)
		::lime::graphics::Renderer tmp1 = renderer;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(41)
		Dynamic tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(41)
		{
			HX_STACK_LINE(41)
			Dynamic f = tmp;		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(41)
			::lime::graphics::Renderer a1 = tmp1;		HX_STACK_VAR(a1,"a1");

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::lime::graphics::Renderer,a1,Dynamic,f)
			int __ArgCount() const { return 0; }
			Void run(){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","lime/app/Module.hx",41,0x653a538a)
				{
					HX_STACK_LINE(41)
					::lime::graphics::Renderer tmp3 = a1;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(41)
					f(tmp3).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC0((void))

			HX_STACK_LINE(41)
			tmp2 =  Dynamic(new _Function_2_1(a1,f));
		}
		HX_STACK_LINE(41)
		renderer->onRender->add(tmp2,null(),null());
		HX_STACK_LINE(42)
		Dynamic tmp3 = this->onRenderContextLost_dyn();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(42)
		::lime::graphics::Renderer tmp4 = renderer;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(42)
		Dynamic tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(42)
		{
			HX_STACK_LINE(42)
			Dynamic f = tmp3;		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(42)
			::lime::graphics::Renderer a1 = tmp4;		HX_STACK_VAR(a1,"a1");

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::lime::graphics::Renderer,a1,Dynamic,f)
			int __ArgCount() const { return 0; }
			Void run(){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","lime/app/Module.hx",42,0x653a538a)
				{
					HX_STACK_LINE(42)
					::lime::graphics::Renderer tmp6 = a1;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(42)
					f(tmp6).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC0((void))

			HX_STACK_LINE(42)
			tmp5 =  Dynamic(new _Function_2_1(a1,f));
		}
		HX_STACK_LINE(42)
		renderer->onContextLost->add(tmp5,null(),null());
		HX_STACK_LINE(43)
		Dynamic tmp6 = this->onRenderContextRestored_dyn();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(43)
		::lime::graphics::Renderer tmp7 = renderer;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(43)
		Dynamic tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(43)
		{
			HX_STACK_LINE(43)
			Dynamic f = tmp6;		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(43)
			::lime::graphics::Renderer a1 = tmp7;		HX_STACK_VAR(a1,"a1");

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::lime::graphics::Renderer,a1,Dynamic,f)
			int __ArgCount() const { return 1; }
			Void run(::lime::graphics::RenderContext a2){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","lime/app/Module.hx",43,0x653a538a)
				HX_STACK_ARG(a2,"a2")
				{
					HX_STACK_LINE(43)
					::lime::graphics::Renderer tmp9 = a1;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(43)
					::lime::graphics::RenderContext tmp10 = a2;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(43)
					f(tmp9,tmp10).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			HX_STACK_LINE(43)
			tmp8 =  Dynamic(new _Function_2_1(a1,f));
		}
		HX_STACK_LINE(43)
		renderer->onContextRestored->add(tmp8,null(),null());
		HX_STACK_LINE(45)
		::lime::graphics::Renderer tmp9 = renderer;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(45)
		this->__renderers->push(tmp9);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Module_obj,addRenderer,(void))

Void Module_obj::addWindow( ::lime::ui::Window window){
{
		HX_STACK_FRAME("lime.app.Module","addWindow",0x1a90fb35,"lime.app.Module.addWindow","lime/app/Module.hx",50,0x653a538a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
		HX_STACK_LINE(52)
		Dynamic tmp = this->onWindowActivate_dyn();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(52)
		::lime::ui::Window tmp1 = window;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(52)
		Dynamic tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(52)
		{
			HX_STACK_LINE(52)
			Dynamic f = tmp;		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(52)
			::lime::ui::Window a1 = tmp1;		HX_STACK_VAR(a1,"a1");

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::lime::ui::Window,a1,Dynamic,f)
			int __ArgCount() const { return 0; }
			Void run(){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","lime/app/Module.hx",52,0x653a538a)
				{
					HX_STACK_LINE(52)
					::lime::ui::Window tmp3 = a1;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(52)
					f(tmp3).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC0((void))

			HX_STACK_LINE(52)
			tmp2 =  Dynamic(new _Function_2_1(a1,f));
		}
		HX_STACK_LINE(52)
		window->onActivate->add(tmp2,null(),null());
		HX_STACK_LINE(53)
		Dynamic tmp3 = this->__onWindowClose_dyn();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(53)
		::lime::ui::Window tmp4 = window;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(53)
		Dynamic tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(53)
		{
			HX_STACK_LINE(53)
			Dynamic f = tmp3;		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(53)
			::lime::ui::Window a1 = tmp4;		HX_STACK_VAR(a1,"a1");

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::lime::ui::Window,a1,Dynamic,f)
			int __ArgCount() const { return 0; }
			Void run(){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","lime/app/Module.hx",53,0x653a538a)
				{
					HX_STACK_LINE(53)
					::lime::ui::Window tmp6 = a1;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(53)
					f(tmp6).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC0((void))

			HX_STACK_LINE(53)
			tmp5 =  Dynamic(new _Function_2_1(a1,f));
		}
		HX_STACK_LINE(53)
		window->onClose->add(tmp5,null(),null());
		HX_STACK_LINE(54)
		Dynamic tmp6 = this->onWindowCreate_dyn();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(54)
		::lime::ui::Window tmp7 = window;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(54)
		Dynamic tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(54)
		{
			HX_STACK_LINE(54)
			Dynamic f = tmp6;		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(54)
			::lime::ui::Window a1 = tmp7;		HX_STACK_VAR(a1,"a1");

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::lime::ui::Window,a1,Dynamic,f)
			int __ArgCount() const { return 0; }
			Void run(){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","lime/app/Module.hx",54,0x653a538a)
				{
					HX_STACK_LINE(54)
					::lime::ui::Window tmp9 = a1;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(54)
					f(tmp9).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC0((void))

			HX_STACK_LINE(54)
			tmp8 =  Dynamic(new _Function_2_1(a1,f));
		}
		HX_STACK_LINE(54)
		window->onCreate->add(tmp8,null(),null());
		HX_STACK_LINE(55)
		Dynamic tmp9 = this->onWindowDeactivate_dyn();		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(55)
		::lime::ui::Window tmp10 = window;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(55)
		Dynamic tmp11;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(55)
		{
			HX_STACK_LINE(55)
			Dynamic f = tmp9;		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(55)
			::lime::ui::Window a1 = tmp10;		HX_STACK_VAR(a1,"a1");

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::lime::ui::Window,a1,Dynamic,f)
			int __ArgCount() const { return 0; }
			Void run(){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","lime/app/Module.hx",55,0x653a538a)
				{
					HX_STACK_LINE(55)
					::lime::ui::Window tmp12 = a1;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(55)
					f(tmp12).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC0((void))

			HX_STACK_LINE(55)
			tmp11 =  Dynamic(new _Function_2_1(a1,f));
		}
		HX_STACK_LINE(55)
		window->onDeactivate->add(tmp11,null(),null());
		HX_STACK_LINE(56)
		Dynamic tmp12 = this->onWindowDropFile_dyn();		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(56)
		::lime::ui::Window tmp13 = window;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(56)
		Dynamic tmp14;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(56)
		{
			HX_STACK_LINE(56)
			Dynamic f = tmp12;		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(56)
			::lime::ui::Window a1 = tmp13;		HX_STACK_VAR(a1,"a1");

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::lime::ui::Window,a1,Dynamic,f)
			int __ArgCount() const { return 1; }
			Void run(::String a2){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","lime/app/Module.hx",56,0x653a538a)
				HX_STACK_ARG(a2,"a2")
				{
					HX_STACK_LINE(56)
					::lime::ui::Window tmp15 = a1;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(56)
					::String tmp16 = a2;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(56)
					f(tmp15,tmp16).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			HX_STACK_LINE(56)
			tmp14 =  Dynamic(new _Function_2_1(a1,f));
		}
		HX_STACK_LINE(56)
		window->onDropFile->add(tmp14,null(),null());
		HX_STACK_LINE(57)
		Dynamic tmp15 = this->onWindowEnter_dyn();		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(57)
		::lime::ui::Window tmp16 = window;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(57)
		Dynamic tmp17;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(57)
		{
			HX_STACK_LINE(57)
			Dynamic f = tmp15;		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(57)
			::lime::ui::Window a1 = tmp16;		HX_STACK_VAR(a1,"a1");

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::lime::ui::Window,a1,Dynamic,f)
			int __ArgCount() const { return 0; }
			Void run(){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","lime/app/Module.hx",57,0x653a538a)
				{
					HX_STACK_LINE(57)
					::lime::ui::Window tmp18 = a1;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(57)
					f(tmp18).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC0((void))

			HX_STACK_LINE(57)
			tmp17 =  Dynamic(new _Function_2_1(a1,f));
		}
		HX_STACK_LINE(57)
		window->onEnter->add(tmp17,null(),null());
		HX_STACK_LINE(58)
		Dynamic tmp18 = this->onWindowFocusIn_dyn();		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(58)
		::lime::ui::Window tmp19 = window;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(58)
		Dynamic tmp20;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(58)
		{
			HX_STACK_LINE(58)
			Dynamic f = tmp18;		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(58)
			::lime::ui::Window a1 = tmp19;		HX_STACK_VAR(a1,"a1");

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::lime::ui::Window,a1,Dynamic,f)
			int __ArgCount() const { return 0; }
			Void run(){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","lime/app/Module.hx",58,0x653a538a)
				{
					HX_STACK_LINE(58)
					::lime::ui::Window tmp21 = a1;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(58)
					f(tmp21).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC0((void))

			HX_STACK_LINE(58)
			tmp20 =  Dynamic(new _Function_2_1(a1,f));
		}
		HX_STACK_LINE(58)
		window->onFocusIn->add(tmp20,null(),null());
		HX_STACK_LINE(59)
		Dynamic tmp21 = this->onWindowFocusOut_dyn();		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(59)
		::lime::ui::Window tmp22 = window;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(59)
		Dynamic tmp23;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(59)
		{
			HX_STACK_LINE(59)
			Dynamic f = tmp21;		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(59)
			::lime::ui::Window a1 = tmp22;		HX_STACK_VAR(a1,"a1");

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::lime::ui::Window,a1,Dynamic,f)
			int __ArgCount() const { return 0; }
			Void run(){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","lime/app/Module.hx",59,0x653a538a)
				{
					HX_STACK_LINE(59)
					::lime::ui::Window tmp24 = a1;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(59)
					f(tmp24).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC0((void))

			HX_STACK_LINE(59)
			tmp23 =  Dynamic(new _Function_2_1(a1,f));
		}
		HX_STACK_LINE(59)
		window->onFocusOut->add(tmp23,null(),null());
		HX_STACK_LINE(60)
		Dynamic tmp24 = this->onWindowFullscreen_dyn();		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(60)
		::lime::ui::Window tmp25 = window;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(60)
		Dynamic tmp26;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(60)
		{
			HX_STACK_LINE(60)
			Dynamic f = tmp24;		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(60)
			::lime::ui::Window a1 = tmp25;		HX_STACK_VAR(a1,"a1");

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::lime::ui::Window,a1,Dynamic,f)
			int __ArgCount() const { return 0; }
			Void run(){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","lime/app/Module.hx",60,0x653a538a)
				{
					HX_STACK_LINE(60)
					::lime::ui::Window tmp27 = a1;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(60)
					f(tmp27).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC0((void))

			HX_STACK_LINE(60)
			tmp26 =  Dynamic(new _Function_2_1(a1,f));
		}
		HX_STACK_LINE(60)
		window->onFullscreen->add(tmp26,null(),null());
		HX_STACK_LINE(61)
		Dynamic tmp27 = this->onKeyDown_dyn();		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(61)
		::lime::ui::Window tmp28 = window;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(61)
		Dynamic tmp29;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(61)
		{
			HX_STACK_LINE(61)
			Dynamic f = tmp27;		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(61)
			::lime::ui::Window a1 = tmp28;		HX_STACK_VAR(a1,"a1");

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::lime::ui::Window,a1,Dynamic,f)
			int __ArgCount() const { return 2; }
			Void run(int a2,int a3){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","lime/app/Module.hx",61,0x653a538a)
				HX_STACK_ARG(a2,"a2")
				HX_STACK_ARG(a3,"a3")
				{
					HX_STACK_LINE(61)
					::lime::ui::Window tmp30 = a1;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(61)
					int tmp31 = a2;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(61)
					int tmp32 = a3;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(61)
					f(tmp30,tmp31,tmp32).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC2((void))

			HX_STACK_LINE(61)
			tmp29 =  Dynamic(new _Function_2_1(a1,f));
		}
		HX_STACK_LINE(61)
		window->onKeyDown->add(tmp29,null(),null());
		HX_STACK_LINE(62)
		Dynamic tmp30 = this->onKeyUp_dyn();		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(62)
		::lime::ui::Window tmp31 = window;		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(62)
		Dynamic tmp32;		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(62)
		{
			HX_STACK_LINE(62)
			Dynamic f = tmp30;		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(62)
			::lime::ui::Window a1 = tmp31;		HX_STACK_VAR(a1,"a1");

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::lime::ui::Window,a1,Dynamic,f)
			int __ArgCount() const { return 2; }
			Void run(int a2,int a3){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","lime/app/Module.hx",62,0x653a538a)
				HX_STACK_ARG(a2,"a2")
				HX_STACK_ARG(a3,"a3")
				{
					HX_STACK_LINE(62)
					::lime::ui::Window tmp33 = a1;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(62)
					int tmp34 = a2;		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(62)
					int tmp35 = a3;		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(62)
					f(tmp33,tmp34,tmp35).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC2((void))

			HX_STACK_LINE(62)
			tmp32 =  Dynamic(new _Function_2_1(a1,f));
		}
		HX_STACK_LINE(62)
		window->onKeyUp->add(tmp32,null(),null());
		HX_STACK_LINE(63)
		Dynamic tmp33 = this->onWindowLeave_dyn();		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(63)
		::lime::ui::Window tmp34 = window;		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(63)
		Dynamic tmp35;		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(63)
		{
			HX_STACK_LINE(63)
			Dynamic f = tmp33;		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(63)
			::lime::ui::Window a1 = tmp34;		HX_STACK_VAR(a1,"a1");

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::lime::ui::Window,a1,Dynamic,f)
			int __ArgCount() const { return 0; }
			Void run(){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","lime/app/Module.hx",63,0x653a538a)
				{
					HX_STACK_LINE(63)
					::lime::ui::Window tmp36 = a1;		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(63)
					f(tmp36).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC0((void))

			HX_STACK_LINE(63)
			tmp35 =  Dynamic(new _Function_2_1(a1,f));
		}
		HX_STACK_LINE(63)
		window->onLeave->add(tmp35,null(),null());
		HX_STACK_LINE(64)
		Dynamic tmp36 = this->onWindowMinimize_dyn();		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(64)
		::lime::ui::Window tmp37 = window;		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(64)
		Dynamic tmp38;		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(64)
		{
			HX_STACK_LINE(64)
			Dynamic f = tmp36;		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(64)
			::lime::ui::Window a1 = tmp37;		HX_STACK_VAR(a1,"a1");

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::lime::ui::Window,a1,Dynamic,f)
			int __ArgCount() const { return 0; }
			Void run(){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","lime/app/Module.hx",64,0x653a538a)
				{
					HX_STACK_LINE(64)
					::lime::ui::Window tmp39 = a1;		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(64)
					f(tmp39).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC0((void))

			HX_STACK_LINE(64)
			tmp38 =  Dynamic(new _Function_2_1(a1,f));
		}
		HX_STACK_LINE(64)
		window->onMinimize->add(tmp38,null(),null());
		HX_STACK_LINE(65)
		Dynamic tmp39 = this->onMouseDown_dyn();		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(65)
		::lime::ui::Window tmp40 = window;		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(65)
		Dynamic tmp41;		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(65)
		{
			HX_STACK_LINE(65)
			Dynamic f = tmp39;		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(65)
			::lime::ui::Window a1 = tmp40;		HX_STACK_VAR(a1,"a1");

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::lime::ui::Window,a1,Dynamic,f)
			int __ArgCount() const { return 3; }
			Void run(Float x,Float y,int a2){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","lime/app/Module.hx",65,0x653a538a)
				HX_STACK_ARG(x,"x")
				HX_STACK_ARG(y,"y")
				HX_STACK_ARG(a2,"a2")
				{
					HX_STACK_LINE(65)
					::lime::ui::Window tmp42 = a1;		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(65)
					Float tmp43 = x;		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(65)
					Float tmp44 = y;		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(65)
					int tmp45 = a2;		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(65)
					f(tmp42,tmp43,tmp44,tmp45).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC3((void))

			HX_STACK_LINE(65)
			tmp41 =  Dynamic(new _Function_2_1(a1,f));
		}
		HX_STACK_LINE(65)
		window->onMouseDown->add(tmp41,null(),null());
		HX_STACK_LINE(66)
		Dynamic tmp42 = this->onMouseMove_dyn();		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(66)
		::lime::ui::Window tmp43 = window;		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(66)
		Dynamic tmp44;		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(66)
		{
			HX_STACK_LINE(66)
			Dynamic f = tmp42;		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(66)
			::lime::ui::Window a1 = tmp43;		HX_STACK_VAR(a1,"a1");

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::lime::ui::Window,a1,Dynamic,f)
			int __ArgCount() const { return 2; }
			Void run(Float x,Float y){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","lime/app/Module.hx",66,0x653a538a)
				HX_STACK_ARG(x,"x")
				HX_STACK_ARG(y,"y")
				{
					HX_STACK_LINE(66)
					::lime::ui::Window tmp45 = a1;		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(66)
					Float tmp46 = x;		HX_STACK_VAR(tmp46,"tmp46");
					HX_STACK_LINE(66)
					Float tmp47 = y;		HX_STACK_VAR(tmp47,"tmp47");
					HX_STACK_LINE(66)
					f(tmp45,tmp46,tmp47).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC2((void))

			HX_STACK_LINE(66)
			tmp44 =  Dynamic(new _Function_2_1(a1,f));
		}
		HX_STACK_LINE(66)
		window->onMouseMove->add(tmp44,null(),null());
		HX_STACK_LINE(67)
		Dynamic tmp45 = this->onMouseMoveRelative_dyn();		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(67)
		::lime::ui::Window tmp46 = window;		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(67)
		Dynamic tmp47;		HX_STACK_VAR(tmp47,"tmp47");
		HX_STACK_LINE(67)
		{
			HX_STACK_LINE(67)
			Dynamic f = tmp45;		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(67)
			::lime::ui::Window a1 = tmp46;		HX_STACK_VAR(a1,"a1");

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::lime::ui::Window,a1,Dynamic,f)
			int __ArgCount() const { return 2; }
			Void run(Float x,Float y){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","lime/app/Module.hx",67,0x653a538a)
				HX_STACK_ARG(x,"x")
				HX_STACK_ARG(y,"y")
				{
					HX_STACK_LINE(67)
					::lime::ui::Window tmp48 = a1;		HX_STACK_VAR(tmp48,"tmp48");
					HX_STACK_LINE(67)
					Float tmp49 = x;		HX_STACK_VAR(tmp49,"tmp49");
					HX_STACK_LINE(67)
					Float tmp50 = y;		HX_STACK_VAR(tmp50,"tmp50");
					HX_STACK_LINE(67)
					f(tmp48,tmp49,tmp50).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC2((void))

			HX_STACK_LINE(67)
			tmp47 =  Dynamic(new _Function_2_1(a1,f));
		}
		HX_STACK_LINE(67)
		window->onMouseMoveRelative->add(tmp47,null(),null());
		HX_STACK_LINE(68)
		Dynamic tmp48 = this->onMouseUp_dyn();		HX_STACK_VAR(tmp48,"tmp48");
		HX_STACK_LINE(68)
		::lime::ui::Window tmp49 = window;		HX_STACK_VAR(tmp49,"tmp49");
		HX_STACK_LINE(68)
		Dynamic tmp50;		HX_STACK_VAR(tmp50,"tmp50");
		HX_STACK_LINE(68)
		{
			HX_STACK_LINE(68)
			Dynamic f = tmp48;		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(68)
			::lime::ui::Window a1 = tmp49;		HX_STACK_VAR(a1,"a1");

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::lime::ui::Window,a1,Dynamic,f)
			int __ArgCount() const { return 3; }
			Void run(Float x,Float y,int a2){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","lime/app/Module.hx",68,0x653a538a)
				HX_STACK_ARG(x,"x")
				HX_STACK_ARG(y,"y")
				HX_STACK_ARG(a2,"a2")
				{
					HX_STACK_LINE(68)
					::lime::ui::Window tmp51 = a1;		HX_STACK_VAR(tmp51,"tmp51");
					HX_STACK_LINE(68)
					Float tmp52 = x;		HX_STACK_VAR(tmp52,"tmp52");
					HX_STACK_LINE(68)
					Float tmp53 = y;		HX_STACK_VAR(tmp53,"tmp53");
					HX_STACK_LINE(68)
					int tmp54 = a2;		HX_STACK_VAR(tmp54,"tmp54");
					HX_STACK_LINE(68)
					f(tmp51,tmp52,tmp53,tmp54).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC3((void))

			HX_STACK_LINE(68)
			tmp50 =  Dynamic(new _Function_2_1(a1,f));
		}
		HX_STACK_LINE(68)
		window->onMouseUp->add(tmp50,null(),null());
		HX_STACK_LINE(69)
		Dynamic tmp51 = this->onMouseWheel_dyn();		HX_STACK_VAR(tmp51,"tmp51");
		HX_STACK_LINE(69)
		::lime::ui::Window tmp52 = window;		HX_STACK_VAR(tmp52,"tmp52");
		HX_STACK_LINE(69)
		Dynamic tmp53;		HX_STACK_VAR(tmp53,"tmp53");
		HX_STACK_LINE(69)
		{
			HX_STACK_LINE(69)
			Dynamic f = tmp51;		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(69)
			::lime::ui::Window a1 = tmp52;		HX_STACK_VAR(a1,"a1");

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::lime::ui::Window,a1,Dynamic,f)
			int __ArgCount() const { return 2; }
			Void run(Float a2,Float a3){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","lime/app/Module.hx",69,0x653a538a)
				HX_STACK_ARG(a2,"a2")
				HX_STACK_ARG(a3,"a3")
				{
					HX_STACK_LINE(69)
					::lime::ui::Window tmp54 = a1;		HX_STACK_VAR(tmp54,"tmp54");
					HX_STACK_LINE(69)
					Float tmp55 = a2;		HX_STACK_VAR(tmp55,"tmp55");
					HX_STACK_LINE(69)
					Float tmp56 = a3;		HX_STACK_VAR(tmp56,"tmp56");
					HX_STACK_LINE(69)
					f(tmp54,tmp55,tmp56).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC2((void))

			HX_STACK_LINE(69)
			tmp53 =  Dynamic(new _Function_2_1(a1,f));
		}
		HX_STACK_LINE(69)
		window->onMouseWheel->add(tmp53,null(),null());
		HX_STACK_LINE(70)
		Dynamic tmp54 = this->onWindowMove_dyn();		HX_STACK_VAR(tmp54,"tmp54");
		HX_STACK_LINE(70)
		::lime::ui::Window tmp55 = window;		HX_STACK_VAR(tmp55,"tmp55");
		HX_STACK_LINE(70)
		Dynamic tmp56;		HX_STACK_VAR(tmp56,"tmp56");
		HX_STACK_LINE(70)
		{
			HX_STACK_LINE(70)
			Dynamic f = tmp54;		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(70)
			::lime::ui::Window a1 = tmp55;		HX_STACK_VAR(a1,"a1");

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::lime::ui::Window,a1,Dynamic,f)
			int __ArgCount() const { return 2; }
			Void run(Float x,Float y){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","lime/app/Module.hx",70,0x653a538a)
				HX_STACK_ARG(x,"x")
				HX_STACK_ARG(y,"y")
				{
					HX_STACK_LINE(70)
					::lime::ui::Window tmp57 = a1;		HX_STACK_VAR(tmp57,"tmp57");
					HX_STACK_LINE(70)
					Float tmp58 = x;		HX_STACK_VAR(tmp58,"tmp58");
					HX_STACK_LINE(70)
					Float tmp59 = y;		HX_STACK_VAR(tmp59,"tmp59");
					HX_STACK_LINE(70)
					f(tmp57,tmp58,tmp59).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC2((void))

			HX_STACK_LINE(70)
			tmp56 =  Dynamic(new _Function_2_1(a1,f));
		}
		HX_STACK_LINE(70)
		window->onMove->add(tmp56,null(),null());
		HX_STACK_LINE(71)
		Dynamic tmp57 = this->onWindowResize_dyn();		HX_STACK_VAR(tmp57,"tmp57");
		HX_STACK_LINE(71)
		::lime::ui::Window tmp58 = window;		HX_STACK_VAR(tmp58,"tmp58");
		HX_STACK_LINE(71)
		Dynamic tmp59;		HX_STACK_VAR(tmp59,"tmp59");
		HX_STACK_LINE(71)
		{
			HX_STACK_LINE(71)
			Dynamic f = tmp57;		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(71)
			::lime::ui::Window a1 = tmp58;		HX_STACK_VAR(a1,"a1");

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::lime::ui::Window,a1,Dynamic,f)
			int __ArgCount() const { return 2; }
			Void run(int a2,int a3){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","lime/app/Module.hx",71,0x653a538a)
				HX_STACK_ARG(a2,"a2")
				HX_STACK_ARG(a3,"a3")
				{
					HX_STACK_LINE(71)
					::lime::ui::Window tmp60 = a1;		HX_STACK_VAR(tmp60,"tmp60");
					HX_STACK_LINE(71)
					int tmp61 = a2;		HX_STACK_VAR(tmp61,"tmp61");
					HX_STACK_LINE(71)
					int tmp62 = a3;		HX_STACK_VAR(tmp62,"tmp62");
					HX_STACK_LINE(71)
					f(tmp60,tmp61,tmp62).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC2((void))

			HX_STACK_LINE(71)
			tmp59 =  Dynamic(new _Function_2_1(a1,f));
		}
		HX_STACK_LINE(71)
		window->onResize->add(tmp59,null(),null());
		HX_STACK_LINE(72)
		Dynamic tmp60 = this->onWindowRestore_dyn();		HX_STACK_VAR(tmp60,"tmp60");
		HX_STACK_LINE(72)
		::lime::ui::Window tmp61 = window;		HX_STACK_VAR(tmp61,"tmp61");
		HX_STACK_LINE(72)
		Dynamic tmp62;		HX_STACK_VAR(tmp62,"tmp62");
		HX_STACK_LINE(72)
		{
			HX_STACK_LINE(72)
			Dynamic f = tmp60;		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(72)
			::lime::ui::Window a1 = tmp61;		HX_STACK_VAR(a1,"a1");

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::lime::ui::Window,a1,Dynamic,f)
			int __ArgCount() const { return 0; }
			Void run(){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","lime/app/Module.hx",72,0x653a538a)
				{
					HX_STACK_LINE(72)
					::lime::ui::Window tmp63 = a1;		HX_STACK_VAR(tmp63,"tmp63");
					HX_STACK_LINE(72)
					f(tmp63).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC0((void))

			HX_STACK_LINE(72)
			tmp62 =  Dynamic(new _Function_2_1(a1,f));
		}
		HX_STACK_LINE(72)
		window->onRestore->add(tmp62,null(),null());
		HX_STACK_LINE(73)
		Dynamic tmp63 = this->onTextEdit_dyn();		HX_STACK_VAR(tmp63,"tmp63");
		HX_STACK_LINE(73)
		::lime::ui::Window tmp64 = window;		HX_STACK_VAR(tmp64,"tmp64");
		HX_STACK_LINE(73)
		Dynamic tmp65;		HX_STACK_VAR(tmp65,"tmp65");
		HX_STACK_LINE(73)
		{
			HX_STACK_LINE(73)
			Dynamic f = tmp63;		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(73)
			::lime::ui::Window a1 = tmp64;		HX_STACK_VAR(a1,"a1");

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::lime::ui::Window,a1,Dynamic,f)
			int __ArgCount() const { return 3; }
			Void run(::String a2,int a3,int a4){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","lime/app/Module.hx",73,0x653a538a)
				HX_STACK_ARG(a2,"a2")
				HX_STACK_ARG(a3,"a3")
				HX_STACK_ARG(a4,"a4")
				{
					HX_STACK_LINE(73)
					::lime::ui::Window tmp66 = a1;		HX_STACK_VAR(tmp66,"tmp66");
					HX_STACK_LINE(73)
					::String tmp67 = a2;		HX_STACK_VAR(tmp67,"tmp67");
					HX_STACK_LINE(73)
					int tmp68 = a3;		HX_STACK_VAR(tmp68,"tmp68");
					HX_STACK_LINE(73)
					int tmp69 = a4;		HX_STACK_VAR(tmp69,"tmp69");
					HX_STACK_LINE(73)
					f(tmp66,tmp67,tmp68,tmp69).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC3((void))

			HX_STACK_LINE(73)
			tmp65 =  Dynamic(new _Function_2_1(a1,f));
		}
		HX_STACK_LINE(73)
		window->onTextEdit->add(tmp65,null(),null());
		HX_STACK_LINE(74)
		Dynamic tmp66 = this->onTextInput_dyn();		HX_STACK_VAR(tmp66,"tmp66");
		HX_STACK_LINE(74)
		::lime::ui::Window tmp67 = window;		HX_STACK_VAR(tmp67,"tmp67");
		HX_STACK_LINE(74)
		Dynamic tmp68;		HX_STACK_VAR(tmp68,"tmp68");
		HX_STACK_LINE(74)
		{
			HX_STACK_LINE(74)
			Dynamic f = tmp66;		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(74)
			::lime::ui::Window a1 = tmp67;		HX_STACK_VAR(a1,"a1");

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::lime::ui::Window,a1,Dynamic,f)
			int __ArgCount() const { return 1; }
			Void run(::String a2){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","lime/app/Module.hx",74,0x653a538a)
				HX_STACK_ARG(a2,"a2")
				{
					HX_STACK_LINE(74)
					::lime::ui::Window tmp69 = a1;		HX_STACK_VAR(tmp69,"tmp69");
					HX_STACK_LINE(74)
					::String tmp70 = a2;		HX_STACK_VAR(tmp70,"tmp70");
					HX_STACK_LINE(74)
					f(tmp69,tmp70).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			HX_STACK_LINE(74)
			tmp68 =  Dynamic(new _Function_2_1(a1,f));
		}
		HX_STACK_LINE(74)
		window->onTextInput->add(tmp68,null(),null());
		HX_STACK_LINE(76)
		bool tmp69 = (window->id > (int)-1);		HX_STACK_VAR(tmp69,"tmp69");
		HX_STACK_LINE(76)
		if ((tmp69)){
			HX_STACK_LINE(78)
			::lime::ui::Window tmp70 = window;		HX_STACK_VAR(tmp70,"tmp70");
			HX_STACK_LINE(78)
			this->onWindowCreate(tmp70);
		}
		HX_STACK_LINE(82)
		::lime::ui::Window tmp70 = window;		HX_STACK_VAR(tmp70,"tmp70");
		HX_STACK_LINE(82)
		this->__windows->push(tmp70);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Module_obj,addWindow,(void))

Void Module_obj::registerModule( ::lime::app::Application application){
{
		HX_STACK_FRAME("lime.app.Module","registerModule",0xf383d2ab,"lime.app.Module.registerModule","lime/app/Module.hx",87,0x653a538a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(application,"application")
		HX_STACK_LINE(89)
		this->__application = application;
		HX_STACK_LINE(91)
		Dynamic tmp = this->onModuleExit_dyn();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(91)
		application->onExit->add(tmp,false,(int)0);
		HX_STACK_LINE(92)
		Dynamic tmp1 = this->update_dyn();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(92)
		application->onUpdate->add(tmp1,null(),null());
		HX_STACK_LINE(94)
		::haxe::ds::IntMap tmp2 = ::lime::ui::Gamepad_obj::devices;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(94)
		Dynamic tmp3 = tmp2->iterator();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(94)
		for(::cpp::FastIterator_obj< ::lime::ui::Gamepad > *__it = ::cpp::CreateFastIterator< ::lime::ui::Gamepad >(tmp3);  __it->hasNext(); ){
			::lime::ui::Gamepad gamepad = __it->next();
			{
				HX_STACK_LINE(96)
				::lime::ui::Gamepad tmp4 = gamepad;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(96)
				this->__onGamepadConnect(tmp4);
			}
;
		}
		HX_STACK_LINE(100)
		::lime::app::Event_lime_ui_Gamepad_Void tmp4 = ::lime::ui::Gamepad_obj::onConnect;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(100)
		Dynamic tmp5 = this->__onGamepadConnect_dyn();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(100)
		tmp4->add(tmp5,null(),null());
		HX_STACK_LINE(102)
		::haxe::ds::IntMap tmp6 = ::lime::ui::Joystick_obj::devices;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(102)
		Dynamic tmp7 = tmp6->iterator();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(102)
		for(::cpp::FastIterator_obj< ::lime::ui::Joystick > *__it = ::cpp::CreateFastIterator< ::lime::ui::Joystick >(tmp7);  __it->hasNext(); ){
			::lime::ui::Joystick joystick = __it->next();
			{
				HX_STACK_LINE(104)
				::lime::ui::Joystick tmp8 = joystick;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(104)
				this->__onJoystickConnect(tmp8);
			}
;
		}
		HX_STACK_LINE(108)
		::lime::app::Event_lime_ui_Joystick_Void tmp8 = ::lime::ui::Joystick_obj::onConnect;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(108)
		Dynamic tmp9 = this->__onJoystickConnect_dyn();		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(108)
		tmp8->add(tmp9,null(),null());
		HX_STACK_LINE(110)
		::lime::app::Event_lime_ui_Touch_Void tmp10 = ::lime::ui::Touch_obj::onStart;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(110)
		Dynamic tmp11 = this->onTouchStart_dyn();		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(110)
		tmp10->add(tmp11,null(),null());
		HX_STACK_LINE(111)
		::lime::app::Event_lime_ui_Touch_Void tmp12 = ::lime::ui::Touch_obj::onMove;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(111)
		Dynamic tmp13 = this->onTouchMove_dyn();		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(111)
		tmp12->add(tmp13,null(),null());
		HX_STACK_LINE(112)
		::lime::app::Event_lime_ui_Touch_Void tmp14 = ::lime::ui::Touch_obj::onEnd;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(112)
		Dynamic tmp15 = this->onTouchEnd_dyn();		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(112)
		tmp14->add(tmp15,null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Module_obj,registerModule,(void))

Void Module_obj::removeRenderer( ::lime::graphics::Renderer renderer){
{
		HX_STACK_FRAME("lime.app.Module","removeRenderer",0xe9a118e3,"lime.app.Module.removeRenderer","lime/app/Module.hx",117,0x653a538a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderer,"renderer")
		HX_STACK_LINE(119)
		bool tmp = (renderer != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(119)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(119)
		if ((tmp)){
			HX_STACK_LINE(119)
			::lime::graphics::Renderer tmp2 = renderer;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(119)
			::lime::graphics::Renderer tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(119)
			int tmp4 = this->__renderers->indexOf(tmp3,null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(119)
			int tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(119)
			tmp1 = (tmp5 > (int)-1);
		}
		else{
			HX_STACK_LINE(119)
			tmp1 = false;
		}
		HX_STACK_LINE(119)
		if ((tmp1)){
			HX_STACK_LINE(121)
			::lime::graphics::Renderer tmp2 = renderer;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(121)
			this->__renderers->remove(tmp2);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Module_obj,removeRenderer,(void))

Void Module_obj::removeWindow( ::lime::ui::Window window){
{
		HX_STACK_FRAME("lime.app.Module","removeWindow",0x1777bf90,"lime.app.Module.removeWindow","lime/app/Module.hx",128,0x653a538a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Module_obj,removeWindow,(void))

Void Module_obj::setPreloader( ::lime::app::Preloader preloader){
{
		HX_STACK_FRAME("lime.app.Module","setPreloader",0xfc8934b0,"lime.app.Module.setPreloader","lime/app/Module.hx",135,0x653a538a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(preloader,"preloader")
		HX_STACK_LINE(137)
		::lime::app::Preloader tmp = this->__preloader;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(137)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(137)
		if ((tmp1)){
			HX_STACK_LINE(139)
			::lime::app::Preloader tmp2 = this->__preloader;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(139)
			Dynamic tmp3 = this->onPreloadProgress_dyn();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(139)
			tmp2->onProgress->remove(tmp3);
			HX_STACK_LINE(140)
			::lime::app::Preloader tmp4 = this->__preloader;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(140)
			Dynamic tmp5 = this->onPreloadComplete_dyn();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(140)
			tmp4->onComplete->remove(tmp5);
		}
		HX_STACK_LINE(144)
		this->__preloader = preloader;
		HX_STACK_LINE(146)
		bool tmp2 = (preloader == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(146)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(146)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(146)
		if ((tmp3)){
			HX_STACK_LINE(146)
			tmp4 = preloader->complete;
		}
		else{
			HX_STACK_LINE(146)
			tmp4 = true;
		}
		HX_STACK_LINE(146)
		if ((tmp4)){
			HX_STACK_LINE(148)
			this->onPreloadComplete();
		}
		else{
			HX_STACK_LINE(152)
			Dynamic tmp5 = this->onPreloadProgress_dyn();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(152)
			preloader->onProgress->add(tmp5,null(),null());
			HX_STACK_LINE(153)
			Dynamic tmp6 = this->onPreloadComplete_dyn();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(153)
			preloader->onComplete->add(tmp6,null(),null());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Module_obj,setPreloader,(void))

Void Module_obj::unregisterModule( ::lime::app::Application application){
{
		HX_STACK_FRAME("lime.app.Module","unregisterModule",0x4c0689c4,"lime.app.Module.unregisterModule","lime/app/Module.hx",160,0x653a538a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(application,"application")
		HX_STACK_LINE(162)
		::lime::app::Application tmp = this->__application;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(162)
		Dynamic tmp1 = this->onModuleExit_dyn();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(162)
		tmp->onExit->remove(tmp1);
		HX_STACK_LINE(163)
		::lime::app::Application tmp2 = this->__application;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(163)
		Dynamic tmp3 = this->update_dyn();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(163)
		tmp2->onUpdate->remove(tmp3);
		HX_STACK_LINE(165)
		::lime::app::Event_lime_ui_Gamepad_Void tmp4 = ::lime::ui::Gamepad_obj::onConnect;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(165)
		Dynamic tmp5 = this->__onGamepadConnect_dyn();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(165)
		tmp4->remove(tmp5);
		HX_STACK_LINE(166)
		::lime::app::Event_lime_ui_Joystick_Void tmp6 = ::lime::ui::Joystick_obj::onConnect;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(166)
		Dynamic tmp7 = this->__onJoystickConnect_dyn();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(166)
		tmp6->remove(tmp7);
		HX_STACK_LINE(167)
		::lime::app::Event_lime_ui_Touch_Void tmp8 = ::lime::ui::Touch_obj::onStart;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(167)
		Dynamic tmp9 = this->onTouchStart_dyn();		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(167)
		tmp8->remove(tmp9);
		HX_STACK_LINE(168)
		::lime::app::Event_lime_ui_Touch_Void tmp10 = ::lime::ui::Touch_obj::onMove;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(168)
		Dynamic tmp11 = this->onTouchMove_dyn();		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(168)
		tmp10->remove(tmp11);
		HX_STACK_LINE(169)
		::lime::app::Event_lime_ui_Touch_Void tmp12 = ::lime::ui::Touch_obj::onEnd;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(169)
		Dynamic tmp13 = this->onTouchEnd_dyn();		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(169)
		tmp12->remove(tmp13);
		HX_STACK_LINE(171)
		this->onModuleExit((int)0);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Module_obj,unregisterModule,(void))

Void Module_obj::onGamepadAxisMove( ::lime::ui::Gamepad gamepad,int axis,Float value){
{
		HX_STACK_FRAME("lime.app.Module","onGamepadAxisMove",0x43570df8,"lime.app.Module.onGamepadAxisMove","lime/app/Module.hx",182,0x653a538a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(gamepad,"gamepad")
		HX_STACK_ARG(axis,"axis")
		HX_STACK_ARG(value,"value")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Module_obj,onGamepadAxisMove,(void))

Void Module_obj::onGamepadButtonDown( ::lime::ui::Gamepad gamepad,int button){
{
		HX_STACK_FRAME("lime.app.Module","onGamepadButtonDown",0xdb9e1a9a,"lime.app.Module.onGamepadButtonDown","lime/app/Module.hx",190,0x653a538a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(gamepad,"gamepad")
		HX_STACK_ARG(button,"button")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Module_obj,onGamepadButtonDown,(void))

Void Module_obj::onGamepadButtonUp( ::lime::ui::Gamepad gamepad,int button){
{
		HX_STACK_FRAME("lime.app.Module","onGamepadButtonUp",0x0f950a93,"lime.app.Module.onGamepadButtonUp","lime/app/Module.hx",198,0x653a538a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(gamepad,"gamepad")
		HX_STACK_ARG(button,"button")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Module_obj,onGamepadButtonUp,(void))

Void Module_obj::onGamepadConnect( ::lime::ui::Gamepad gamepad){
{
		HX_STACK_FRAME("lime.app.Module","onGamepadConnect",0xa4a7b504,"lime.app.Module.onGamepadConnect","lime/app/Module.hx",205,0x653a538a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(gamepad,"gamepad")
		HX_STACK_LINE(207)
		Dynamic tmp = hx::SourceInfo(HX_HCSTRING("Module.hx","\x72","\x21","\xcc","\xb7"),207,HX_HCSTRING("lime.app.Module","\xb2","\xd5","\xdb","\x18"),HX_HCSTRING("onGamepadConnect","\xc8","\x56","\xd7","\xec"));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(207)
		::haxe::Log_obj::trace(HX_HCSTRING("onGamepadConnect (module)","\x2d","\x67","\xc5","\xc4"),tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Module_obj,onGamepadConnect,(void))

Void Module_obj::onGamepadDisconnect( ::lime::ui::Gamepad gamepad){
{
		HX_STACK_FRAME("lime.app.Module","onGamepadDisconnect",0x987e1782,"lime.app.Module.onGamepadDisconnect","lime/app/Module.hx",216,0x653a538a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(gamepad,"gamepad")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Module_obj,onGamepadDisconnect,(void))

Void Module_obj::onJoystickAxisMove( ::lime::ui::Joystick joystick,int axis,Float value){
{
		HX_STACK_FRAME("lime.app.Module","onJoystickAxisMove",0xef2659a9,"lime.app.Module.onJoystickAxisMove","lime/app/Module.hx",225,0x653a538a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(joystick,"joystick")
		HX_STACK_ARG(axis,"axis")
		HX_STACK_ARG(value,"value")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Module_obj,onJoystickAxisMove,(void))

Void Module_obj::onJoystickButtonDown( ::lime::ui::Joystick joystick,int button){
{
		HX_STACK_FRAME("lime.app.Module","onJoystickButtonDown",0x929c748b,"lime.app.Module.onJoystickButtonDown","lime/app/Module.hx",233,0x653a538a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(joystick,"joystick")
		HX_STACK_ARG(button,"button")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Module_obj,onJoystickButtonDown,(void))

Void Module_obj::onJoystickButtonUp( ::lime::ui::Joystick joystick,int button){
{
		HX_STACK_FRAME("lime.app.Module","onJoystickButtonUp",0xbb645644,"lime.app.Module.onJoystickButtonUp","lime/app/Module.hx",241,0x653a538a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(joystick,"joystick")
		HX_STACK_ARG(button,"button")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Module_obj,onJoystickButtonUp,(void))

Void Module_obj::onJoystickConnect( ::lime::ui::Joystick joystick){
{
		HX_STACK_FRAME("lime.app.Module","onJoystickConnect",0x195f2a73,"lime.app.Module.onJoystickConnect","lime/app/Module.hx",248,0x653a538a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(joystick,"joystick")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Module_obj,onJoystickConnect,(void))

Void Module_obj::onJoystickDisconnect( ::lime::ui::Joystick joystick){
{
		HX_STACK_FRAME("lime.app.Module","onJoystickDisconnect",0x4f7c7173,"lime.app.Module.onJoystickDisconnect","lime/app/Module.hx",255,0x653a538a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(joystick,"joystick")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Module_obj,onJoystickDisconnect,(void))

Void Module_obj::onJoystickHatMove( ::lime::ui::Joystick joystick,int hat,int position){
{
		HX_STACK_FRAME("lime.app.Module","onJoystickHatMove",0xaeea8695,"lime.app.Module.onJoystickHatMove","lime/app/Module.hx",264,0x653a538a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(joystick,"joystick")
		HX_STACK_ARG(hat,"hat")
		HX_STACK_ARG(position,"position")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Module_obj,onJoystickHatMove,(void))

Void Module_obj::onJoystickTrackballMove( ::lime::ui::Joystick joystick,int trackball,Float value){
{
		HX_STACK_FRAME("lime.app.Module","onJoystickTrackballMove",0xea30e984,"lime.app.Module.onJoystickTrackballMove","lime/app/Module.hx",273,0x653a538a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(joystick,"joystick")
		HX_STACK_ARG(trackball,"trackball")
		HX_STACK_ARG(value,"value")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Module_obj,onJoystickTrackballMove,(void))

Void Module_obj::onKeyDown( ::lime::ui::Window window,int keyCode,int modifier){
{
		HX_STACK_FRAME("lime.app.Module","onKeyDown",0x83d25486,"lime.app.Module.onKeyDown","lime/app/Module.hx",282,0x653a538a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
		HX_STACK_ARG(keyCode,"keyCode")
		HX_STACK_ARG(modifier,"modifier")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Module_obj,onKeyDown,(void))

Void Module_obj::onKeyUp( ::lime::ui::Window window,int keyCode,int modifier){
{
		HX_STACK_FRAME("lime.app.Module","onKeyUp",0x3060b17f,"lime.app.Module.onKeyUp","lime/app/Module.hx",291,0x653a538a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
		HX_STACK_ARG(keyCode,"keyCode")
		HX_STACK_ARG(modifier,"modifier")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Module_obj,onKeyUp,(void))

Void Module_obj::onModuleExit( int code){
{
		HX_STACK_FRAME("lime.app.Module","onModuleExit",0x61615025,"lime.app.Module.onModuleExit","lime/app/Module.hx",297,0x653a538a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(code,"code")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Module_obj,onModuleExit,(void))

Void Module_obj::onMouseDown( ::lime::ui::Window window,Float x,Float y,int button){
{
		HX_STACK_FRAME("lime.app.Module","onMouseDown",0xff09df4c,"lime.app.Module.onMouseDown","lime/app/Module.hx",307,0x653a538a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(button,"button")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Module_obj,onMouseDown,(void))

Void Module_obj::onMouseMove( ::lime::ui::Window window,Float x,Float y){
{
		HX_STACK_FRAME("lime.app.Module","onMouseMove",0x04fcc9fb,"lime.app.Module.onMouseMove","lime/app/Module.hx",317,0x653a538a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Module_obj,onMouseMove,(void))

Void Module_obj::onMouseMoveRelative( ::lime::ui::Window window,Float x,Float y){
{
		HX_STACK_FRAME("lime.app.Module","onMouseMoveRelative",0xcea635e7,"lime.app.Module.onMouseMoveRelative","lime/app/Module.hx",327,0x653a538a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Module_obj,onMouseMoveRelative,(void))

Void Module_obj::onMouseUp( ::lime::ui::Window window,Float x,Float y,int button){
{
		HX_STACK_FRAME("lime.app.Module","onMouseUp",0xa7fddec5,"lime.app.Module.onMouseUp","lime/app/Module.hx",337,0x653a538a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(button,"button")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Module_obj,onMouseUp,(void))

Void Module_obj::onMouseWheel( ::lime::ui::Window window,Float deltaX,Float deltaY){
{
		HX_STACK_FRAME("lime.app.Module","onMouseWheel",0x15885a71,"lime.app.Module.onMouseWheel","lime/app/Module.hx",346,0x653a538a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
		HX_STACK_ARG(deltaX,"deltaX")
		HX_STACK_ARG(deltaY,"deltaY")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Module_obj,onMouseWheel,(void))

Void Module_obj::onPreloadComplete( ){
{
		HX_STACK_FRAME("lime.app.Module","onPreloadComplete",0x7adf4d87,"lime.app.Module.onPreloadComplete","lime/app/Module.hx",352,0x653a538a)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Module_obj,onPreloadComplete,(void))

Void Module_obj::onPreloadProgress( int loaded,int total){
{
		HX_STACK_FRAME("lime.app.Module","onPreloadProgress",0x8142447b,"lime.app.Module.onPreloadProgress","lime/app/Module.hx",360,0x653a538a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(loaded,"loaded")
		HX_STACK_ARG(total,"total")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Module_obj,onPreloadProgress,(void))

Void Module_obj::onRenderContextLost( ::lime::graphics::Renderer renderer){
{
		HX_STACK_FRAME("lime.app.Module","onRenderContextLost",0xd88ecae2,"lime.app.Module.onRenderContextLost","lime/app/Module.hx",367,0x653a538a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderer,"renderer")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Module_obj,onRenderContextLost,(void))

Void Module_obj::onRenderContextRestored( ::lime::graphics::Renderer renderer,::lime::graphics::RenderContext context){
{
		HX_STACK_FRAME("lime.app.Module","onRenderContextRestored",0x4a587554,"lime.app.Module.onRenderContextRestored","lime/app/Module.hx",375,0x653a538a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderer,"renderer")
		HX_STACK_ARG(context,"context")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Module_obj,onRenderContextRestored,(void))

Void Module_obj::onTextEdit( ::lime::ui::Window window,::String text,int start,int length){
{
		HX_STACK_FRAME("lime.app.Module","onTextEdit",0xf80cbad2,"lime.app.Module.onTextEdit","lime/app/Module.hx",385,0x653a538a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
		HX_STACK_ARG(text,"text")
		HX_STACK_ARG(start,"start")
		HX_STACK_ARG(length,"length")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Module_obj,onTextEdit,(void))

Void Module_obj::onTextInput( ::lime::ui::Window window,::String text){
{
		HX_STACK_FRAME("lime.app.Module","onTextInput",0x67528242,"lime.app.Module.onTextInput","lime/app/Module.hx",393,0x653a538a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
		HX_STACK_ARG(text,"text")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Module_obj,onTextInput,(void))

Void Module_obj::onTouchEnd( ::lime::ui::Touch touch){
{
		HX_STACK_FRAME("lime.app.Module","onTouchEnd",0xb20c62d7,"lime.app.Module.onTouchEnd","lime/app/Module.hx",400,0x653a538a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(touch,"touch")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Module_obj,onTouchEnd,(void))

Void Module_obj::onTouchMove( ::lime::ui::Touch touch){
{
		HX_STACK_FRAME("lime.app.Module","onTouchMove",0x1e14a095,"lime.app.Module.onTouchMove","lime/app/Module.hx",407,0x653a538a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(touch,"touch")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Module_obj,onTouchMove,(void))

Void Module_obj::onTouchStart( ::lime::ui::Touch touch){
{
		HX_STACK_FRAME("lime.app.Module","onTouchStart",0xab9d8a5e,"lime.app.Module.onTouchStart","lime/app/Module.hx",414,0x653a538a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(touch,"touch")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Module_obj,onTouchStart,(void))

Void Module_obj::onWindowActivate( ::lime::ui::Window window){
{
		HX_STACK_FRAME("lime.app.Module","onWindowActivate",0xa3ae477e,"lime.app.Module.onWindowActivate","lime/app/Module.hx",421,0x653a538a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Module_obj,onWindowActivate,(void))

Void Module_obj::onWindowClose( ::lime::ui::Window window){
{
		HX_STACK_FRAME("lime.app.Module","onWindowClose",0x4c406f0d,"lime.app.Module.onWindowClose","lime/app/Module.hx",428,0x653a538a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Module_obj,onWindowClose,(void))

Void Module_obj::onWindowCreate( ::lime::ui::Window window){
{
		HX_STACK_FRAME("lime.app.Module","onWindowCreate",0xd9de7a07,"lime.app.Module.onWindowCreate","lime/app/Module.hx",435,0x653a538a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Module_obj,onWindowCreate,(void))

Void Module_obj::onWindowDeactivate( ::lime::ui::Window window){
{
		HX_STACK_FRAME("lime.app.Module","onWindowDeactivate",0x1fbe50bf,"lime.app.Module.onWindowDeactivate","lime/app/Module.hx",442,0x653a538a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Module_obj,onWindowDeactivate,(void))

Void Module_obj::onWindowDropFile( ::lime::ui::Window window,::String file){
{
		HX_STACK_FRAME("lime.app.Module","onWindowDropFile",0xa758a216,"lime.app.Module.onWindowDropFile","lime/app/Module.hx",449,0x653a538a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
		HX_STACK_ARG(file,"file")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Module_obj,onWindowDropFile,(void))

Void Module_obj::onWindowEnter( ::lime::ui::Window window){
{
		HX_STACK_FRAME("lime.app.Module","onWindowEnter",0x7463c46d,"lime.app.Module.onWindowEnter","lime/app/Module.hx",456,0x653a538a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Module_obj,onWindowEnter,(void))

Void Module_obj::onWindowFocusIn( ::lime::ui::Window window){
{
		HX_STACK_FRAME("lime.app.Module","onWindowFocusIn",0xf8e4dc72,"lime.app.Module.onWindowFocusIn","lime/app/Module.hx",463,0x653a538a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Module_obj,onWindowFocusIn,(void))

Void Module_obj::onWindowFocusOut( ::lime::ui::Window window){
{
		HX_STACK_FRAME("lime.app.Module","onWindowFocusOut",0xcf609b61,"lime.app.Module.onWindowFocusOut","lime/app/Module.hx",470,0x653a538a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Module_obj,onWindowFocusOut,(void))

Void Module_obj::onWindowFullscreen( ::lime::ui::Window window){
{
		HX_STACK_FRAME("lime.app.Module","onWindowFullscreen",0xdd712ec6,"lime.app.Module.onWindowFullscreen","lime/app/Module.hx",477,0x653a538a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Module_obj,onWindowFullscreen,(void))

Void Module_obj::onWindowLeave( ::lime::ui::Window window){
{
		HX_STACK_FRAME("lime.app.Module","onWindowLeave",0x76308c4c,"lime.app.Module.onWindowLeave","lime/app/Module.hx",484,0x653a538a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Module_obj,onWindowLeave,(void))

Void Module_obj::onWindowMove( ::lime::ui::Window window,Float x,Float y){
{
		HX_STACK_FRAME("lime.app.Module","onWindowMove",0x01388d5c,"lime.app.Module.onWindowMove","lime/app/Module.hx",493,0x653a538a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Module_obj,onWindowMove,(void))

Void Module_obj::onWindowMinimize( ::lime::ui::Window window){
{
		HX_STACK_FRAME("lime.app.Module","onWindowMinimize",0xdf7b6ae9,"lime.app.Module.onWindowMinimize","lime/app/Module.hx",500,0x653a538a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Module_obj,onWindowMinimize,(void))

Void Module_obj::onWindowResize( ::lime::ui::Window window,int width,int height){
{
		HX_STACK_FRAME("lime.app.Module","onWindowResize",0x664a6cff,"lime.app.Module.onWindowResize","lime/app/Module.hx",509,0x653a538a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Module_obj,onWindowResize,(void))

Void Module_obj::onWindowRestore( ::lime::ui::Window window){
{
		HX_STACK_FRAME("lime.app.Module","onWindowRestore",0x2211fde3,"lime.app.Module.onWindowRestore","lime/app/Module.hx",516,0x653a538a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Module_obj,onWindowRestore,(void))

Void Module_obj::render( ::lime::graphics::Renderer renderer){
{
		HX_STACK_FRAME("lime.app.Module","render",0xc490e692,"lime.app.Module.render","lime/app/Module.hx",523,0x653a538a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderer,"renderer")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Module_obj,render,(void))

Void Module_obj::update( int deltaTime){
{
		HX_STACK_FRAME("lime.app.Module","update",0x466d0145,"lime.app.Module.update","lime/app/Module.hx",530,0x653a538a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(deltaTime,"deltaTime")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Module_obj,update,(void))

Void Module_obj::__onGamepadConnect( ::lime::ui::Gamepad gamepad){
{
		HX_STACK_FRAME("lime.app.Module","__onGamepadConnect",0xebb94f24,"lime.app.Module.__onGamepadConnect","lime/app/Module.hx",533,0x653a538a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(gamepad,"gamepad")
		HX_STACK_LINE(535)
		::lime::ui::Gamepad tmp = gamepad;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(535)
		this->onGamepadConnect(tmp);
		HX_STACK_LINE(537)
		Dynamic tmp1 = this->onGamepadAxisMove_dyn();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(537)
		::lime::ui::Gamepad tmp2 = gamepad;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(537)
		Dynamic tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(537)
		{
			HX_STACK_LINE(537)
			Dynamic f = tmp1;		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(537)
			::lime::ui::Gamepad a1 = tmp2;		HX_STACK_VAR(a1,"a1");

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::lime::ui::Gamepad,a1,Dynamic,f)
			int __ArgCount() const { return 2; }
			Void run(int a2,Float a3){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","lime/app/Module.hx",537,0x653a538a)
				HX_STACK_ARG(a2,"a2")
				HX_STACK_ARG(a3,"a3")
				{
					HX_STACK_LINE(537)
					::lime::ui::Gamepad tmp4 = a1;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(537)
					int tmp5 = a2;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(537)
					Float tmp6 = a3;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(537)
					f(tmp4,tmp5,tmp6).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC2((void))

			HX_STACK_LINE(537)
			tmp3 =  Dynamic(new _Function_2_1(a1,f));
		}
		HX_STACK_LINE(537)
		gamepad->onAxisMove->add(tmp3,null(),null());
		HX_STACK_LINE(538)
		Dynamic tmp4 = this->onGamepadButtonDown_dyn();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(538)
		::lime::ui::Gamepad tmp5 = gamepad;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(538)
		Dynamic tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(538)
		{
			HX_STACK_LINE(538)
			Dynamic f = tmp4;		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(538)
			::lime::ui::Gamepad a1 = tmp5;		HX_STACK_VAR(a1,"a1");

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::lime::ui::Gamepad,a1,Dynamic,f)
			int __ArgCount() const { return 1; }
			Void run(int a2){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","lime/app/Module.hx",538,0x653a538a)
				HX_STACK_ARG(a2,"a2")
				{
					HX_STACK_LINE(538)
					::lime::ui::Gamepad tmp7 = a1;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(538)
					int tmp8 = a2;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(538)
					f(tmp7,tmp8).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			HX_STACK_LINE(538)
			tmp6 =  Dynamic(new _Function_2_1(a1,f));
		}
		HX_STACK_LINE(538)
		gamepad->onButtonDown->add(tmp6,null(),null());
		HX_STACK_LINE(539)
		Dynamic tmp7 = this->onGamepadButtonUp_dyn();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(539)
		::lime::ui::Gamepad tmp8 = gamepad;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(539)
		Dynamic tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(539)
		{
			HX_STACK_LINE(539)
			Dynamic f = tmp7;		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(539)
			::lime::ui::Gamepad a1 = tmp8;		HX_STACK_VAR(a1,"a1");

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::lime::ui::Gamepad,a1,Dynamic,f)
			int __ArgCount() const { return 1; }
			Void run(int a2){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","lime/app/Module.hx",539,0x653a538a)
				HX_STACK_ARG(a2,"a2")
				{
					HX_STACK_LINE(539)
					::lime::ui::Gamepad tmp10 = a1;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(539)
					int tmp11 = a2;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(539)
					f(tmp10,tmp11).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			HX_STACK_LINE(539)
			tmp9 =  Dynamic(new _Function_2_1(a1,f));
		}
		HX_STACK_LINE(539)
		gamepad->onButtonUp->add(tmp9,null(),null());
		HX_STACK_LINE(540)
		Dynamic tmp10 = this->onGamepadDisconnect_dyn();		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(540)
		::lime::ui::Gamepad tmp11 = gamepad;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(540)
		Dynamic tmp12;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(540)
		{
			HX_STACK_LINE(540)
			Dynamic f = tmp10;		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(540)
			::lime::ui::Gamepad a1 = tmp11;		HX_STACK_VAR(a1,"a1");

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::lime::ui::Gamepad,a1,Dynamic,f)
			int __ArgCount() const { return 0; }
			Void run(){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","lime/app/Module.hx",540,0x653a538a)
				{
					HX_STACK_LINE(540)
					::lime::ui::Gamepad tmp13 = a1;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(540)
					f(tmp13).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC0((void))

			HX_STACK_LINE(540)
			tmp12 =  Dynamic(new _Function_2_1(a1,f));
		}
		HX_STACK_LINE(540)
		gamepad->onDisconnect->add(tmp12,null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Module_obj,__onGamepadConnect,(void))

Void Module_obj::__onJoystickConnect( ::lime::ui::Joystick joystick){
{
		HX_STACK_FRAME("lime.app.Module","__onJoystickConnect",0x01b46c53,"lime.app.Module.__onJoystickConnect","lime/app/Module.hx",545,0x653a538a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(joystick,"joystick")
		HX_STACK_LINE(547)
		::lime::ui::Joystick tmp = joystick;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(547)
		this->onJoystickConnect(tmp);
		HX_STACK_LINE(549)
		Dynamic tmp1 = this->onJoystickAxisMove_dyn();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(549)
		::lime::ui::Joystick tmp2 = joystick;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(549)
		Dynamic tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(549)
		{
			HX_STACK_LINE(549)
			Dynamic f = tmp1;		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(549)
			::lime::ui::Joystick a1 = tmp2;		HX_STACK_VAR(a1,"a1");

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::lime::ui::Joystick,a1,Dynamic,f)
			int __ArgCount() const { return 2; }
			Void run(int a2,Float a3){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","lime/app/Module.hx",549,0x653a538a)
				HX_STACK_ARG(a2,"a2")
				HX_STACK_ARG(a3,"a3")
				{
					HX_STACK_LINE(549)
					::lime::ui::Joystick tmp4 = a1;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(549)
					int tmp5 = a2;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(549)
					Float tmp6 = a3;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(549)
					f(tmp4,tmp5,tmp6).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC2((void))

			HX_STACK_LINE(549)
			tmp3 =  Dynamic(new _Function_2_1(a1,f));
		}
		HX_STACK_LINE(549)
		joystick->onAxisMove->add(tmp3,null(),null());
		HX_STACK_LINE(550)
		Dynamic tmp4 = this->onJoystickButtonDown_dyn();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(550)
		::lime::ui::Joystick tmp5 = joystick;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(550)
		Dynamic tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(550)
		{
			HX_STACK_LINE(550)
			Dynamic f = tmp4;		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(550)
			::lime::ui::Joystick a1 = tmp5;		HX_STACK_VAR(a1,"a1");

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::lime::ui::Joystick,a1,Dynamic,f)
			int __ArgCount() const { return 1; }
			Void run(int a2){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","lime/app/Module.hx",550,0x653a538a)
				HX_STACK_ARG(a2,"a2")
				{
					HX_STACK_LINE(550)
					::lime::ui::Joystick tmp7 = a1;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(550)
					int tmp8 = a2;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(550)
					f(tmp7,tmp8).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			HX_STACK_LINE(550)
			tmp6 =  Dynamic(new _Function_2_1(a1,f));
		}
		HX_STACK_LINE(550)
		joystick->onButtonDown->add(tmp6,null(),null());
		HX_STACK_LINE(551)
		Dynamic tmp7 = this->onJoystickButtonUp_dyn();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(551)
		::lime::ui::Joystick tmp8 = joystick;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(551)
		Dynamic tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(551)
		{
			HX_STACK_LINE(551)
			Dynamic f = tmp7;		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(551)
			::lime::ui::Joystick a1 = tmp8;		HX_STACK_VAR(a1,"a1");

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::lime::ui::Joystick,a1,Dynamic,f)
			int __ArgCount() const { return 1; }
			Void run(int a2){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","lime/app/Module.hx",551,0x653a538a)
				HX_STACK_ARG(a2,"a2")
				{
					HX_STACK_LINE(551)
					::lime::ui::Joystick tmp10 = a1;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(551)
					int tmp11 = a2;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(551)
					f(tmp10,tmp11).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			HX_STACK_LINE(551)
			tmp9 =  Dynamic(new _Function_2_1(a1,f));
		}
		HX_STACK_LINE(551)
		joystick->onButtonUp->add(tmp9,null(),null());
		HX_STACK_LINE(552)
		Dynamic tmp10 = this->onJoystickDisconnect_dyn();		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(552)
		::lime::ui::Joystick tmp11 = joystick;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(552)
		Dynamic tmp12;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(552)
		{
			HX_STACK_LINE(552)
			Dynamic f = tmp10;		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(552)
			::lime::ui::Joystick a1 = tmp11;		HX_STACK_VAR(a1,"a1");

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::lime::ui::Joystick,a1,Dynamic,f)
			int __ArgCount() const { return 0; }
			Void run(){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","lime/app/Module.hx",552,0x653a538a)
				{
					HX_STACK_LINE(552)
					::lime::ui::Joystick tmp13 = a1;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(552)
					f(tmp13).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC0((void))

			HX_STACK_LINE(552)
			tmp12 =  Dynamic(new _Function_2_1(a1,f));
		}
		HX_STACK_LINE(552)
		joystick->onDisconnect->add(tmp12,null(),null());
		HX_STACK_LINE(553)
		Dynamic tmp13 = this->onJoystickHatMove_dyn();		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(553)
		::lime::ui::Joystick tmp14 = joystick;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(553)
		Dynamic tmp15;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(553)
		{
			HX_STACK_LINE(553)
			Dynamic f = tmp13;		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(553)
			::lime::ui::Joystick a1 = tmp14;		HX_STACK_VAR(a1,"a1");

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::lime::ui::Joystick,a1,Dynamic,f)
			int __ArgCount() const { return 2; }
			Void run(int a2,int a3){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","lime/app/Module.hx",553,0x653a538a)
				HX_STACK_ARG(a2,"a2")
				HX_STACK_ARG(a3,"a3")
				{
					HX_STACK_LINE(553)
					::lime::ui::Joystick tmp16 = a1;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(553)
					int tmp17 = a2;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(553)
					int tmp18 = a3;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(553)
					f(tmp16,tmp17,tmp18).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC2((void))

			HX_STACK_LINE(553)
			tmp15 =  Dynamic(new _Function_2_1(a1,f));
		}
		HX_STACK_LINE(553)
		joystick->onHatMove->add(tmp15,null(),null());
		HX_STACK_LINE(554)
		Dynamic tmp16 = this->onJoystickTrackballMove_dyn();		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(554)
		::lime::ui::Joystick tmp17 = joystick;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(554)
		Dynamic tmp18;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(554)
		{
			HX_STACK_LINE(554)
			Dynamic f = tmp16;		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(554)
			::lime::ui::Joystick a1 = tmp17;		HX_STACK_VAR(a1,"a1");

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::lime::ui::Joystick,a1,Dynamic,f)
			int __ArgCount() const { return 2; }
			Void run(int a2,Float a3){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","lime/app/Module.hx",554,0x653a538a)
				HX_STACK_ARG(a2,"a2")
				HX_STACK_ARG(a3,"a3")
				{
					HX_STACK_LINE(554)
					::lime::ui::Joystick tmp19 = a1;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(554)
					int tmp20 = a2;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(554)
					Float tmp21 = a3;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(554)
					f(tmp19,tmp20,tmp21).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC2((void))

			HX_STACK_LINE(554)
			tmp18 =  Dynamic(new _Function_2_1(a1,f));
		}
		HX_STACK_LINE(554)
		joystick->onTrackballMove->add(tmp18,null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Module_obj,__onJoystickConnect,(void))

Void Module_obj::__onWindowClose( ::lime::ui::Window window){
{
		HX_STACK_FRAME("lime.app.Module","__onWindowClose",0x989740ed,"lime.app.Module.__onWindowClose","lime/app/Module.hx",559,0x653a538a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
		HX_STACK_LINE(561)
		::lime::ui::Window tmp = window;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(561)
		this->onWindowClose(tmp);
		HX_STACK_LINE(563)
		::lime::ui::Window tmp1 = window;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(563)
		this->__windows->remove(tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Module_obj,__onWindowClose,(void))


Module_obj::Module_obj()
{
}

void Module_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Module);
	HX_MARK_MEMBER_NAME(onExit,"onExit");
	HX_MARK_MEMBER_NAME(__application,"__application");
	HX_MARK_MEMBER_NAME(__preloader,"__preloader");
	HX_MARK_MEMBER_NAME(__renderers,"__renderers");
	HX_MARK_MEMBER_NAME(__windows,"__windows");
	HX_MARK_END_CLASS();
}

void Module_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(onExit,"onExit");
	HX_VISIT_MEMBER_NAME(__application,"__application");
	HX_VISIT_MEMBER_NAME(__preloader,"__preloader");
	HX_VISIT_MEMBER_NAME(__renderers,"__renderers");
	HX_VISIT_MEMBER_NAME(__windows,"__windows");
}

Dynamic Module_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"onExit") ) { return onExit; }
		if (HX_FIELD_EQ(inName,"render") ) { return render_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"onKeyUp") ) { return onKeyUp_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"__windows") ) { return __windows; }
		if (HX_FIELD_EQ(inName,"addWindow") ) { return addWindow_dyn(); }
		if (HX_FIELD_EQ(inName,"onKeyDown") ) { return onKeyDown_dyn(); }
		if (HX_FIELD_EQ(inName,"onMouseUp") ) { return onMouseUp_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"onTextEdit") ) { return onTextEdit_dyn(); }
		if (HX_FIELD_EQ(inName,"onTouchEnd") ) { return onTouchEnd_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"__preloader") ) { return __preloader; }
		if (HX_FIELD_EQ(inName,"__renderers") ) { return __renderers; }
		if (HX_FIELD_EQ(inName,"addRenderer") ) { return addRenderer_dyn(); }
		if (HX_FIELD_EQ(inName,"onMouseDown") ) { return onMouseDown_dyn(); }
		if (HX_FIELD_EQ(inName,"onMouseMove") ) { return onMouseMove_dyn(); }
		if (HX_FIELD_EQ(inName,"onTextInput") ) { return onTextInput_dyn(); }
		if (HX_FIELD_EQ(inName,"onTouchMove") ) { return onTouchMove_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"removeWindow") ) { return removeWindow_dyn(); }
		if (HX_FIELD_EQ(inName,"setPreloader") ) { return setPreloader_dyn(); }
		if (HX_FIELD_EQ(inName,"onModuleExit") ) { return onModuleExit_dyn(); }
		if (HX_FIELD_EQ(inName,"onMouseWheel") ) { return onMouseWheel_dyn(); }
		if (HX_FIELD_EQ(inName,"onTouchStart") ) { return onTouchStart_dyn(); }
		if (HX_FIELD_EQ(inName,"onWindowMove") ) { return onWindowMove_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__application") ) { return __application; }
		if (HX_FIELD_EQ(inName,"onWindowClose") ) { return onWindowClose_dyn(); }
		if (HX_FIELD_EQ(inName,"onWindowEnter") ) { return onWindowEnter_dyn(); }
		if (HX_FIELD_EQ(inName,"onWindowLeave") ) { return onWindowLeave_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"registerModule") ) { return registerModule_dyn(); }
		if (HX_FIELD_EQ(inName,"removeRenderer") ) { return removeRenderer_dyn(); }
		if (HX_FIELD_EQ(inName,"onWindowCreate") ) { return onWindowCreate_dyn(); }
		if (HX_FIELD_EQ(inName,"onWindowResize") ) { return onWindowResize_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"onWindowFocusIn") ) { return onWindowFocusIn_dyn(); }
		if (HX_FIELD_EQ(inName,"onWindowRestore") ) { return onWindowRestore_dyn(); }
		if (HX_FIELD_EQ(inName,"__onWindowClose") ) { return __onWindowClose_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"unregisterModule") ) { return unregisterModule_dyn(); }
		if (HX_FIELD_EQ(inName,"onGamepadConnect") ) { return onGamepadConnect_dyn(); }
		if (HX_FIELD_EQ(inName,"onWindowActivate") ) { return onWindowActivate_dyn(); }
		if (HX_FIELD_EQ(inName,"onWindowDropFile") ) { return onWindowDropFile_dyn(); }
		if (HX_FIELD_EQ(inName,"onWindowFocusOut") ) { return onWindowFocusOut_dyn(); }
		if (HX_FIELD_EQ(inName,"onWindowMinimize") ) { return onWindowMinimize_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"onGamepadAxisMove") ) { return onGamepadAxisMove_dyn(); }
		if (HX_FIELD_EQ(inName,"onGamepadButtonUp") ) { return onGamepadButtonUp_dyn(); }
		if (HX_FIELD_EQ(inName,"onJoystickConnect") ) { return onJoystickConnect_dyn(); }
		if (HX_FIELD_EQ(inName,"onJoystickHatMove") ) { return onJoystickHatMove_dyn(); }
		if (HX_FIELD_EQ(inName,"onPreloadComplete") ) { return onPreloadComplete_dyn(); }
		if (HX_FIELD_EQ(inName,"onPreloadProgress") ) { return onPreloadProgress_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"onJoystickAxisMove") ) { return onJoystickAxisMove_dyn(); }
		if (HX_FIELD_EQ(inName,"onJoystickButtonUp") ) { return onJoystickButtonUp_dyn(); }
		if (HX_FIELD_EQ(inName,"onWindowDeactivate") ) { return onWindowDeactivate_dyn(); }
		if (HX_FIELD_EQ(inName,"onWindowFullscreen") ) { return onWindowFullscreen_dyn(); }
		if (HX_FIELD_EQ(inName,"__onGamepadConnect") ) { return __onGamepadConnect_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"onGamepadButtonDown") ) { return onGamepadButtonDown_dyn(); }
		if (HX_FIELD_EQ(inName,"onGamepadDisconnect") ) { return onGamepadDisconnect_dyn(); }
		if (HX_FIELD_EQ(inName,"onMouseMoveRelative") ) { return onMouseMoveRelative_dyn(); }
		if (HX_FIELD_EQ(inName,"onRenderContextLost") ) { return onRenderContextLost_dyn(); }
		if (HX_FIELD_EQ(inName,"__onJoystickConnect") ) { return __onJoystickConnect_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"onJoystickButtonDown") ) { return onJoystickButtonDown_dyn(); }
		if (HX_FIELD_EQ(inName,"onJoystickDisconnect") ) { return onJoystickDisconnect_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"onJoystickTrackballMove") ) { return onJoystickTrackballMove_dyn(); }
		if (HX_FIELD_EQ(inName,"onRenderContextRestored") ) { return onRenderContextRestored_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Module_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"onExit") ) { onExit=inValue.Cast< ::lime::app::Event_Int_Void >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"__windows") ) { __windows=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"__preloader") ) { __preloader=inValue.Cast< ::lime::app::Preloader >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__renderers") ) { __renderers=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__application") ) { __application=inValue.Cast< ::lime::app::Application >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Module_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("onExit","\xdd","\xff","\xa7","\xe5"));
	outFields->push(HX_HCSTRING("__application","\x30","\xec","\xb6","\x72"));
	outFields->push(HX_HCSTRING("__preloader","\x56","\x2d","\xa8","\xb0"));
	outFields->push(HX_HCSTRING("__renderers","\xb0","\x1e","\x9d","\xfb"));
	outFields->push(HX_HCSTRING("__windows","\x63","\x2f","\xc3","\x69"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::lime::app::Event_Int_Void*/ ,(int)offsetof(Module_obj,onExit),HX_HCSTRING("onExit","\xdd","\xff","\xa7","\xe5")},
	{hx::fsObject /*::lime::app::Application*/ ,(int)offsetof(Module_obj,__application),HX_HCSTRING("__application","\x30","\xec","\xb6","\x72")},
	{hx::fsObject /*::lime::app::Preloader*/ ,(int)offsetof(Module_obj,__preloader),HX_HCSTRING("__preloader","\x56","\x2d","\xa8","\xb0")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Module_obj,__renderers),HX_HCSTRING("__renderers","\xb0","\x1e","\x9d","\xfb")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Module_obj,__windows),HX_HCSTRING("__windows","\x63","\x2f","\xc3","\x69")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("onExit","\xdd","\xff","\xa7","\xe5"),
	HX_HCSTRING("__application","\x30","\xec","\xb6","\x72"),
	HX_HCSTRING("__preloader","\x56","\x2d","\xa8","\xb0"),
	HX_HCSTRING("__renderers","\xb0","\x1e","\x9d","\xfb"),
	HX_HCSTRING("__windows","\x63","\x2f","\xc3","\x69"),
	HX_HCSTRING("addRenderer","\x84","\xfc","\x37","\xe4"),
	HX_HCSTRING("addWindow","\xf1","\xc8","\xb0","\x0a"),
	HX_HCSTRING("registerModule","\x6f","\xbb","\x14","\x87"),
	HX_HCSTRING("removeRenderer","\xa7","\x01","\x32","\x7d"),
	HX_HCSTRING("removeWindow","\x54","\x2f","\xba","\xc1"),
	HX_HCSTRING("setPreloader","\x74","\xa4","\xcb","\xa6"),
	HX_HCSTRING("unregisterModule","\x88","\x2b","\x36","\x94"),
	HX_HCSTRING("onGamepadAxisMove","\xb4","\xf7","\xd4","\x24"),
	HX_HCSTRING("onGamepadButtonDown","\x56","\xeb","\xb6","\x87"),
	HX_HCSTRING("onGamepadButtonUp","\x4f","\xf4","\x12","\xf1"),
	HX_HCSTRING("onGamepadConnect","\xc8","\x56","\xd7","\xec"),
	HX_HCSTRING("onGamepadDisconnect","\x3e","\xe8","\x96","\x44"),
	HX_HCSTRING("onJoystickAxisMove","\x6d","\xf4","\xd4","\x5b"),
	HX_HCSTRING("onJoystickButtonDown","\x4f","\x48","\x3a","\x7c"),
	HX_HCSTRING("onJoystickButtonUp","\x08","\xf1","\x12","\x28"),
	HX_HCSTRING("onJoystickConnect","\x2f","\x14","\xdd","\xfa"),
	HX_HCSTRING("onJoystickDisconnect","\x37","\x45","\x1a","\x39"),
	HX_HCSTRING("onJoystickHatMove","\x51","\x70","\x68","\x90"),
	HX_HCSTRING("onJoystickTrackballMove","\x40","\xc8","\x46","\x1a"),
	HX_HCSTRING("onKeyDown","\x42","\x22","\xf2","\x73"),
	HX_HCSTRING("onKeyUp","\x3b","\x58","\x3c","\x75"),
	HX_HCSTRING("onModuleExit","\xe9","\xbf","\xa3","\x0b"),
	HX_HCSTRING("onMouseDown","\x08","\x94","\x05","\x11"),
	HX_HCSTRING("onMouseMove","\xb7","\x7e","\xf8","\x16"),
	HX_HCSTRING("onMouseMoveRelative","\xa3","\x06","\xbf","\x7a"),
	HX_HCSTRING("onMouseUp","\x81","\xac","\x1d","\x98"),
	HX_HCSTRING("onMouseWheel","\x35","\xca","\xca","\xbf"),
	HX_HCSTRING("onPreloadComplete","\x43","\x37","\x5d","\x5c"),
	HX_HCSTRING("onPreloadProgress","\x37","\x2e","\xc0","\x62"),
	HX_HCSTRING("onRenderContextLost","\x9e","\x9b","\xa7","\x84"),
	HX_HCSTRING("onRenderContextRestored","\x10","\x54","\x6e","\x7a"),
	HX_HCSTRING("onTextEdit","\x96","\xf1","\xc0","\x23"),
	HX_HCSTRING("onTextInput","\xfe","\x36","\x4e","\x79"),
	HX_HCSTRING("onTouchEnd","\x9b","\x99","\xc0","\xdd"),
	HX_HCSTRING("onTouchMove","\x51","\x55","\x10","\x30"),
	HX_HCSTRING("onTouchStart","\x22","\xfa","\xdf","\x55"),
	HX_HCSTRING("onWindowActivate","\x42","\xe9","\xdd","\xeb"),
	HX_HCSTRING("onWindowClose","\xc9","\xca","\x1f","\x9c"),
	HX_HCSTRING("onWindowCreate","\xcb","\x62","\x6f","\x6d"),
	HX_HCSTRING("onWindowDeactivate","\x83","\xeb","\x6c","\x8c"),
	HX_HCSTRING("onWindowDropFile","\xda","\x43","\x88","\xef"),
	HX_HCSTRING("onWindowEnter","\x29","\x20","\x43","\xc4"),
	HX_HCSTRING("onWindowFocusIn","\x2e","\x9f","\x1f","\x84"),
	HX_HCSTRING("onWindowFocusOut","\x25","\x3d","\x90","\x17"),
	HX_HCSTRING("onWindowFullscreen","\x8a","\xc9","\x1f","\x4a"),
	HX_HCSTRING("onWindowLeave","\x08","\xe8","\x0f","\xc6"),
	HX_HCSTRING("onWindowMove","\x20","\xfd","\x7a","\xab"),
	HX_HCSTRING("onWindowMinimize","\xad","\x0c","\xab","\x27"),
	HX_HCSTRING("onWindowResize","\xc3","\x55","\xdb","\xf9"),
	HX_HCSTRING("onWindowRestore","\x9f","\xc0","\x4c","\xad"),
	HX_HCSTRING("render","\x56","\x6b","\x29","\x05"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("__onGamepadConnect","\xe8","\xe9","\x67","\x58"),
	HX_HCSTRING("__onJoystickConnect","\x0f","\x3d","\xcd","\xad"),
	HX_HCSTRING("__onWindowClose","\xa9","\x03","\xd2","\x23"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Module_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Module_obj::__mClass,"__mClass");
};

#endif

hx::Class Module_obj::__mClass;

void Module_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.app.Module","\xb2","\xd5","\xdb","\x18");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Module_obj >;
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

} // end namespace lime
} // end namespace app
