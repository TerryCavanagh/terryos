#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_lime__backend_native_NativeApplication
#include <lime/_backend/native/NativeApplication.h>
#endif
#ifndef INCLUDED_lime_app_Application
#include <lime/app/Application.h>
#endif
#ifndef INCLUDED_lime_app_Event_Int_Void
#include <lime/app/Event_Int_Void.h>
#endif
#ifndef INCLUDED_lime_app_Event_Void_Void
#include <lime/app/Event_Void_Void.h>
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
#ifndef INCLUDED_lime_graphics_Renderer
#include <lime/graphics/Renderer.h>
#endif
#ifndef INCLUDED_lime_ui_Window
#include <lime/ui/Window.h>
#endif
namespace lime{
namespace app{

Void Application_obj::__construct()
{
HX_STACK_FRAME("lime.app.Application","new",0x9354427c,"lime.app.Application.new","lime/app/Application.hx",23,0x8bc55476)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(36)
	this->onUpdate = ::lime::app::Event_Int_Void_obj::__new();
	HX_STACK_LINE(49)
	super::__construct();
	HX_STACK_LINE(51)
	::lime::app::Application tmp = ::lime::app::Application_obj::current;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(51)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(51)
	if ((tmp1)){
		HX_STACK_LINE(53)
		::lime::app::Application_obj::current = hx::ObjectPtr<OBJ_>(this);
	}
	HX_STACK_LINE(57)
	this->modules = Array_obj< ::lime::app::IModule >::__new();
	HX_STACK_LINE(58)
	::haxe::ds::IntMap tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(58)
	{
		HX_STACK_LINE(58)
		::haxe::ds::IntMap tmp3 = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(58)
		::haxe::ds::IntMap tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(58)
		tmp2 = tmp4;
	}
	HX_STACK_LINE(58)
	this->windowByID = tmp2;
	HX_STACK_LINE(60)
	::lime::_backend::native::NativeApplication tmp3 = ::lime::_backend::native::NativeApplication_obj::__new(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(60)
	this->backend = tmp3;
	HX_STACK_LINE(62)
	this->registerModule(hx::ObjectPtr<OBJ_>(this));
}
;
	return null();
}

//Application_obj::~Application_obj() { }

Dynamic Application_obj::__CreateEmpty() { return  new Application_obj; }
hx::ObjectPtr< Application_obj > Application_obj::__new()
{  hx::ObjectPtr< Application_obj > _result_ = new Application_obj();
	_result_->__construct();
	return _result_;}

Dynamic Application_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Application_obj > _result_ = new Application_obj();
	_result_->__construct();
	return _result_;}

Void Application_obj::addModule( ::lime::app::IModule module){
{
		HX_STACK_FRAME("lime.app.Application","addModule",0x673258c9,"lime.app.Application.addModule","lime/app/Application.hx",71,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_ARG(module,"module")
		HX_STACK_LINE(73)
		module->registerModule(hx::ObjectPtr<OBJ_>(this));
		HX_STACK_LINE(74)
		::lime::app::IModule tmp = module;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(74)
		this->modules->push(tmp);
		HX_STACK_LINE(76)
		int tmp1 = this->__renderers->length;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(76)
		bool tmp2 = (tmp1 > (int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(76)
		if ((tmp2)){
			HX_STACK_LINE(78)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(78)
			Array< ::Dynamic > _g1 = this->__renderers;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(78)
			while((true)){
				HX_STACK_LINE(78)
				bool tmp3 = (_g < _g1->length);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(78)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(78)
				if ((tmp4)){
					HX_STACK_LINE(78)
					break;
				}
				HX_STACK_LINE(78)
				::lime::graphics::Renderer tmp5 = _g1->__get(_g).StaticCast< ::lime::graphics::Renderer >();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(78)
				::lime::graphics::Renderer renderer = tmp5;		HX_STACK_VAR(renderer,"renderer");
				HX_STACK_LINE(78)
				++(_g);
				HX_STACK_LINE(80)
				::lime::graphics::Renderer tmp6 = renderer;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(80)
				module->addRenderer(tmp6);
			}
		}
		HX_STACK_LINE(86)
		int tmp3 = this->__windows->length;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(86)
		bool tmp4 = (tmp3 > (int)0);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(86)
		if ((tmp4)){
			HX_STACK_LINE(88)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(88)
			Array< ::Dynamic > _g1 = this->__windows;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(88)
			while((true)){
				HX_STACK_LINE(88)
				bool tmp5 = (_g < _g1->length);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(88)
				bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(88)
				if ((tmp6)){
					HX_STACK_LINE(88)
					break;
				}
				HX_STACK_LINE(88)
				::lime::ui::Window tmp7 = _g1->__get(_g).StaticCast< ::lime::ui::Window >();		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(88)
				::lime::ui::Window window = tmp7;		HX_STACK_VAR(window,"window");
				HX_STACK_LINE(88)
				++(_g);
				HX_STACK_LINE(90)
				::lime::ui::Window tmp8 = window;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(90)
				module->addWindow(tmp8);
			}
		}
		HX_STACK_LINE(96)
		::lime::app::Preloader tmp5 = this->__preloader;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(96)
		module->setPreloader(tmp5);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Application_obj,addModule,(void))

Void Application_obj::addRenderer( ::lime::graphics::Renderer renderer){
{
		HX_STACK_FRAME("lime.app.Application","addRenderer",0x0a61eaa0,"lime.app.Application.addRenderer","lime/app/Application.hx",106,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderer,"renderer")
		HX_STACK_LINE(108)
		::lime::graphics::Renderer tmp = renderer;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(108)
		this->super::addRenderer(tmp);
		HX_STACK_LINE(110)
		{
			HX_STACK_LINE(110)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(110)
			Array< ::lime::app::IModule > _g1 = this->modules;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(110)
			while((true)){
				HX_STACK_LINE(110)
				bool tmp1 = (_g < _g1->length);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(110)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(110)
				if ((tmp2)){
					HX_STACK_LINE(110)
					break;
				}
				HX_STACK_LINE(110)
				::lime::app::IModule tmp3 = _g1->__get(_g);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(110)
				::lime::app::IModule module = tmp3;		HX_STACK_VAR(module,"module");
				HX_STACK_LINE(110)
				++(_g);
				HX_STACK_LINE(112)
				::lime::graphics::Renderer tmp4 = renderer;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(112)
				module->addRenderer(tmp4);
			}
		}
	}
return null();
}


Void Application_obj::create( Dynamic config){
{
		HX_STACK_FRAME("lime.app.Application","create",0x35e42e60,"lime.app.Application.create","lime/app/Application.hx",125,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_ARG(config,"config")
		HX_STACK_LINE(127)
		this->config = config;
		HX_STACK_LINE(129)
		::lime::_backend::native::NativeApplication tmp = this->backend;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(129)
		Dynamic tmp1 = config;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(129)
		tmp->create(tmp1);
		HX_STACK_LINE(131)
		bool tmp2 = (config != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(131)
		if ((tmp2)){
			HX_STACK_LINE(133)
			Dynamic tmp3 = config;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(133)
			bool tmp4 = ::Reflect_obj::hasField(tmp3,HX_HCSTRING("fps","\xe9","\xc7","\x4d","\x00"));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(133)
			if ((tmp4)){
				HX_STACK_LINE(135)
				Float value = config->__Field(HX_HCSTRING("fps","\xe9","\xc7","\x4d","\x00"), hx::paccDynamic );		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(135)
				::lime::_backend::native::NativeApplication tmp5 = this->backend;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(135)
				Float tmp6 = value;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(135)
				tmp5->setFrameRate(tmp6);
			}
			HX_STACK_LINE(139)
			Dynamic tmp5 = config;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(139)
			bool tmp6 = ::Reflect_obj::hasField(tmp5,HX_HCSTRING("windows","\x83","\xde","\x74","\xe8"));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(139)
			if ((tmp6)){
				HX_STACK_LINE(141)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(141)
				cpp::ArrayBase _g1 = config->__Field(HX_HCSTRING("windows","\x83","\xde","\x74","\xe8"), hx::paccDynamic );		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(141)
				while((true)){
					HX_STACK_LINE(141)
					bool tmp7 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(141)
					bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(141)
					if ((tmp8)){
						HX_STACK_LINE(141)
						break;
					}
					HX_STACK_LINE(141)
					Dynamic tmp9 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(141)
					Dynamic windowConfig = tmp9;		HX_STACK_VAR(windowConfig,"windowConfig");
					HX_STACK_LINE(141)
					++(_g);
					HX_STACK_LINE(143)
					::lime::ui::Window tmp10 = ::lime::ui::Window_obj::__new(windowConfig);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(143)
					::lime::ui::Window window = tmp10;		HX_STACK_VAR(window,"window");
					HX_STACK_LINE(144)
					::lime::ui::Window tmp11 = window;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(144)
					this->createWindow(tmp11);
				}
			}
			HX_STACK_LINE(154)
			::lime::app::Preloader tmp7 = this->__preloader;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(154)
			bool tmp8 = (tmp7 == null());		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(154)
			bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(154)
			bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(154)
			if ((tmp9)){
				HX_STACK_LINE(154)
				::lime::app::Preloader tmp11 = this->__preloader;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(154)
				::lime::app::Preloader tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(154)
				tmp10 = tmp12->complete;
			}
			else{
				HX_STACK_LINE(154)
				tmp10 = true;
			}
			HX_STACK_LINE(154)
			if ((tmp10)){
				HX_STACK_LINE(156)
				::lime::app::Preloader tmp11 = this->__preloader;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(156)
				this->setPreloader(tmp11);
				HX_STACK_LINE(158)
				{
					HX_STACK_LINE(158)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(158)
					Array< ::lime::app::IModule > _g1 = this->modules;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(158)
					while((true)){
						HX_STACK_LINE(158)
						bool tmp12 = (_g < _g1->length);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(158)
						bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(158)
						if ((tmp13)){
							HX_STACK_LINE(158)
							break;
						}
						HX_STACK_LINE(158)
						::lime::app::IModule tmp14 = _g1->__get(_g);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(158)
						::lime::app::IModule module = tmp14;		HX_STACK_VAR(module,"module");
						HX_STACK_LINE(158)
						++(_g);
						HX_STACK_LINE(160)
						::lime::app::Preloader tmp15 = this->__preloader;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(160)
						this->setPreloader(tmp15);
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Application_obj,create,(void))

Void Application_obj::createWindow( ::lime::ui::Window window){
{
		HX_STACK_FRAME("lime.app.Application","createWindow",0xb3683e70,"lime.app.Application.createWindow","lime/app/Application.hx",176,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
		HX_STACK_LINE(178)
		::lime::ui::Window tmp = window;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(178)
		this->super::addWindow(tmp);
		HX_STACK_LINE(180)
		{
			HX_STACK_LINE(180)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(180)
			Array< ::lime::app::IModule > _g1 = this->modules;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(180)
			while((true)){
				HX_STACK_LINE(180)
				bool tmp1 = (_g < _g1->length);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(180)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(180)
				if ((tmp2)){
					HX_STACK_LINE(180)
					break;
				}
				HX_STACK_LINE(180)
				::lime::app::IModule tmp3 = _g1->__get(_g);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(180)
				::lime::app::IModule module = tmp3;		HX_STACK_VAR(module,"module");
				HX_STACK_LINE(180)
				++(_g);
				HX_STACK_LINE(182)
				::lime::ui::Window tmp4 = window;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(182)
				module->addWindow(tmp4);
			}
		}
		HX_STACK_LINE(186)
		bool tmp1 = (window->renderer == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(186)
		if ((tmp1)){
			HX_STACK_LINE(188)
			::lime::graphics::Renderer tmp2 = ::lime::graphics::Renderer_obj::__new(window);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(188)
			::lime::graphics::Renderer renderer = tmp2;		HX_STACK_VAR(renderer,"renderer");
			HX_STACK_LINE(189)
			::lime::graphics::Renderer tmp3 = renderer;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(189)
			this->addRenderer(tmp3);
		}
		HX_STACK_LINE(193)
		window->create(hx::ObjectPtr<OBJ_>(this));
		HX_STACK_LINE(195)
		::haxe::ds::IntMap tmp2 = this->windowByID;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(195)
		int tmp3 = window->id;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(195)
		::lime::ui::Window tmp4 = window;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(195)
		tmp2->set(tmp3,tmp4);
		HX_STACK_LINE(197)
		window->onCreate->dispatch();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Application_obj,createWindow,(void))

int Application_obj::exec( ){
	HX_STACK_FRAME("lime.app.Application","exec",0x508159f5,"lime.app.Application.exec","lime/app/Application.hx",208,0x8bc55476)
	HX_STACK_THIS(this)
	HX_STACK_LINE(210)
	::lime::app::Application_obj::current = hx::ObjectPtr<OBJ_>(this);
	HX_STACK_LINE(212)
	::lime::_backend::native::NativeApplication tmp = this->backend;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(212)
	int tmp1 = tmp->exec();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(212)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Application_obj,exec,return )

Void Application_obj::onModuleExit( int code){
{
		HX_STACK_FRAME("lime.app.Application","onModuleExit",0x4a2a2a4d,"lime.app.Application.onModuleExit","lime/app/Application.hx",217,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_ARG(code,"code")
		HX_STACK_LINE(219)
		::lime::_backend::native::NativeApplication tmp = this->backend;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(219)
		tmp->exit();
	}
return null();
}


Void Application_obj::onWindowClose( ::lime::ui::Window window){
{
		HX_STACK_FRAME("lime.app.Application","onWindowClose",0x133677e5,"lime.app.Application.onWindowClose","lime/app/Application.hx",224,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
		HX_STACK_LINE(226)
		::lime::ui::Window tmp = window;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(226)
		this->removeWindow(tmp);
	}
return null();
}


Void Application_obj::removeModule( ::lime::app::IModule module){
{
		HX_STACK_FRAME("lime.app.Application","removeModule",0x6e873a74,"lime.app.Application.removeModule","lime/app/Application.hx",235,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_ARG(module,"module")
		HX_STACK_LINE(237)
		bool tmp = (module != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(237)
		if ((tmp)){
			HX_STACK_LINE(239)
			module->unregisterModule(hx::ObjectPtr<OBJ_>(this));
			HX_STACK_LINE(240)
			::lime::app::IModule tmp1 = module;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(240)
			this->modules->remove(tmp1);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Application_obj,removeModule,(void))

Void Application_obj::removeWindow( ::lime::ui::Window window){
{
		HX_STACK_FRAME("lime.app.Application","removeWindow",0x004099b8,"lime.app.Application.removeWindow","lime/app/Application.hx",247,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
		HX_STACK_LINE(249)
		bool tmp = (window != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(249)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(249)
		if ((tmp)){
			HX_STACK_LINE(249)
			::haxe::ds::IntMap tmp2 = this->windowByID;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(249)
			::haxe::ds::IntMap tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(249)
			int tmp4 = window->id;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(249)
			int tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(249)
			tmp1 = tmp3->exists(tmp5);
		}
		else{
			HX_STACK_LINE(249)
			tmp1 = false;
		}
		HX_STACK_LINE(249)
		if ((tmp1)){
			HX_STACK_LINE(251)
			::lime::ui::Window tmp2 = window;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(251)
			this->__windows->remove(tmp2);
			HX_STACK_LINE(252)
			::haxe::ds::IntMap tmp3 = this->windowByID;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(252)
			int tmp4 = window->id;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(252)
			tmp3->remove(tmp4);
			HX_STACK_LINE(253)
			window->close();
			HX_STACK_LINE(255)
			::lime::ui::Window tmp5 = this->__windows->__get((int)0).StaticCast< ::lime::ui::Window >();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(255)
			::lime::ui::Window tmp6 = window;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(255)
			bool tmp7 = (tmp5 == tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(255)
			if ((tmp7)){
				HX_STACK_LINE(257)
				this->window = null();
			}
		}
	}
return null();
}


Void Application_obj::setPreloader( ::lime::app::Preloader preloader){
{
		HX_STACK_FRAME("lime.app.Application","setPreloader",0xe5520ed8,"lime.app.Application.setPreloader","lime/app/Application.hx",266,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_ARG(preloader,"preloader")
		HX_STACK_LINE(268)
		::lime::app::Preloader tmp = preloader;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(268)
		this->super::setPreloader(tmp);
		HX_STACK_LINE(270)
		{
			HX_STACK_LINE(270)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(270)
			Array< ::lime::app::IModule > _g1 = this->modules;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(270)
			while((true)){
				HX_STACK_LINE(270)
				bool tmp1 = (_g < _g1->length);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(270)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(270)
				if ((tmp2)){
					HX_STACK_LINE(270)
					break;
				}
				HX_STACK_LINE(270)
				::lime::app::IModule tmp3 = _g1->__get(_g);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(270)
				::lime::app::IModule module = tmp3;		HX_STACK_VAR(module,"module");
				HX_STACK_LINE(270)
				++(_g);
				HX_STACK_LINE(272)
				::lime::app::Preloader tmp4 = preloader;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(272)
				module->setPreloader(tmp4);
			}
		}
	}
return null();
}


Float Application_obj::get_frameRate( ){
	HX_STACK_FRAME("lime.app.Application","get_frameRate",0x719f92a0,"lime.app.Application.get_frameRate","lime/app/Application.hx",286,0x8bc55476)
	HX_STACK_THIS(this)
	HX_STACK_LINE(288)
	::lime::_backend::native::NativeApplication tmp = this->backend;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(288)
	Float tmp1 = tmp->getFrameRate();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(288)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Application_obj,get_frameRate,return )

Float Application_obj::set_frameRate( Float value){
	HX_STACK_FRAME("lime.app.Application","set_frameRate",0xb6a574ac,"lime.app.Application.set_frameRate","lime/app/Application.hx",293,0x8bc55476)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(295)
	::lime::_backend::native::NativeApplication tmp = this->backend;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(295)
	Float tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(295)
	Float tmp2 = tmp->setFrameRate(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(295)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Application_obj,set_frameRate,return )

::lime::app::Preloader Application_obj::get_preloader( ){
	HX_STACK_FRAME("lime.app.Application","get_preloader",0xbaf66569,"lime.app.Application.get_preloader","lime/app/Application.hx",300,0x8bc55476)
	HX_STACK_THIS(this)
	HX_STACK_LINE(302)
	::lime::app::Preloader tmp = this->__preloader;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(302)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Application_obj,get_preloader,return )

::lime::graphics::Renderer Application_obj::get_renderer( ){
	HX_STACK_FRAME("lime.app.Application","get_renderer",0xa67be3b0,"lime.app.Application.get_renderer","lime/app/Application.hx",307,0x8bc55476)
	HX_STACK_THIS(this)
	HX_STACK_LINE(309)
	::lime::graphics::Renderer tmp = this->__renderers->__get((int)0).StaticCast< ::lime::graphics::Renderer >();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(309)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Application_obj,get_renderer,return )

Array< ::Dynamic > Application_obj::get_renderers( ){
	HX_STACK_FRAME("lime.app.Application","get_renderers",0x05eb56c3,"lime.app.Application.get_renderers","lime/app/Application.hx",316,0x8bc55476)
	HX_STACK_THIS(this)
	HX_STACK_LINE(316)
	return this->__renderers;
}


HX_DEFINE_DYNAMIC_FUNC0(Application_obj,get_renderers,return )

::lime::ui::Window Application_obj::get_window( ){
	HX_STACK_FRAME("lime.app.Application","get_window",0xc86a4d1d,"lime.app.Application.get_window","lime/app/Application.hx",321,0x8bc55476)
	HX_STACK_THIS(this)
	HX_STACK_LINE(323)
	::lime::ui::Window tmp = this->__windows->__get((int)0).StaticCast< ::lime::ui::Window >();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(323)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Application_obj,get_window,return )

Array< ::Dynamic > Application_obj::get_windows( ){
	HX_STACK_FRAME("lime.app.Application","get_windows",0x94992cb6,"lime.app.Application.get_windows","lime/app/Application.hx",330,0x8bc55476)
	HX_STACK_THIS(this)
	HX_STACK_LINE(330)
	return this->__windows;
}


HX_DEFINE_DYNAMIC_FUNC0(Application_obj,get_windows,return )

::lime::app::Application Application_obj::current;


Application_obj::Application_obj()
{
}

void Application_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Application);
	HX_MARK_MEMBER_NAME(config,"config");
	HX_MARK_MEMBER_NAME(modules,"modules");
	HX_MARK_MEMBER_NAME(preloader,"preloader");
	HX_MARK_MEMBER_NAME(onUpdate,"onUpdate");
	HX_MARK_MEMBER_NAME(renderer,"renderer");
	HX_MARK_MEMBER_NAME(renderers,"renderers");
	HX_MARK_MEMBER_NAME(window,"window");
	HX_MARK_MEMBER_NAME(windows,"windows");
	HX_MARK_MEMBER_NAME(backend,"backend");
	HX_MARK_MEMBER_NAME(windowByID,"windowByID");
	::lime::app::Module_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Application_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(config,"config");
	HX_VISIT_MEMBER_NAME(modules,"modules");
	HX_VISIT_MEMBER_NAME(preloader,"preloader");
	HX_VISIT_MEMBER_NAME(onUpdate,"onUpdate");
	HX_VISIT_MEMBER_NAME(renderer,"renderer");
	HX_VISIT_MEMBER_NAME(renderers,"renderers");
	HX_VISIT_MEMBER_NAME(window,"window");
	HX_VISIT_MEMBER_NAME(windows,"windows");
	HX_VISIT_MEMBER_NAME(backend,"backend");
	HX_VISIT_MEMBER_NAME(windowByID,"windowByID");
	::lime::app::Module_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Application_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"exec") ) { return exec_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"config") ) { return config; }
		if (HX_FIELD_EQ(inName,"window") ) { return inCallProp == hx::paccAlways ? get_window() : window; }
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"modules") ) { return modules; }
		if (HX_FIELD_EQ(inName,"windows") ) { return inCallProp == hx::paccAlways ? get_windows() : windows; }
		if (HX_FIELD_EQ(inName,"backend") ) { return backend; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"onUpdate") ) { return onUpdate; }
		if (HX_FIELD_EQ(inName,"renderer") ) { return inCallProp == hx::paccAlways ? get_renderer() : renderer; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"frameRate") ) { if (inCallProp == hx::paccAlways) return get_frameRate(); }
		if (HX_FIELD_EQ(inName,"preloader") ) { return inCallProp == hx::paccAlways ? get_preloader() : preloader; }
		if (HX_FIELD_EQ(inName,"renderers") ) { return inCallProp == hx::paccAlways ? get_renderers() : renderers; }
		if (HX_FIELD_EQ(inName,"addModule") ) { return addModule_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"windowByID") ) { return windowByID; }
		if (HX_FIELD_EQ(inName,"get_window") ) { return get_window_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"addRenderer") ) { return addRenderer_dyn(); }
		if (HX_FIELD_EQ(inName,"get_windows") ) { return get_windows_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"createWindow") ) { return createWindow_dyn(); }
		if (HX_FIELD_EQ(inName,"onModuleExit") ) { return onModuleExit_dyn(); }
		if (HX_FIELD_EQ(inName,"removeModule") ) { return removeModule_dyn(); }
		if (HX_FIELD_EQ(inName,"removeWindow") ) { return removeWindow_dyn(); }
		if (HX_FIELD_EQ(inName,"setPreloader") ) { return setPreloader_dyn(); }
		if (HX_FIELD_EQ(inName,"get_renderer") ) { return get_renderer_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"onWindowClose") ) { return onWindowClose_dyn(); }
		if (HX_FIELD_EQ(inName,"get_frameRate") ) { return get_frameRate_dyn(); }
		if (HX_FIELD_EQ(inName,"set_frameRate") ) { return set_frameRate_dyn(); }
		if (HX_FIELD_EQ(inName,"get_preloader") ) { return get_preloader_dyn(); }
		if (HX_FIELD_EQ(inName,"get_renderers") ) { return get_renderers_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool Application_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"current") ) { outValue = current; return true;  }
	}
	return false;
}

Dynamic Application_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"config") ) { config=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"window") ) { window=inValue.Cast< ::lime::ui::Window >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"modules") ) { modules=inValue.Cast< Array< ::lime::app::IModule > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"windows") ) { windows=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"backend") ) { backend=inValue.Cast< ::lime::_backend::native::NativeApplication >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"onUpdate") ) { onUpdate=inValue.Cast< ::lime::app::Event_Int_Void >(); return inValue; }
		if (HX_FIELD_EQ(inName,"renderer") ) { renderer=inValue.Cast< ::lime::graphics::Renderer >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"frameRate") ) { if (inCallProp == hx::paccAlways) return set_frameRate(inValue); }
		if (HX_FIELD_EQ(inName,"preloader") ) { preloader=inValue.Cast< ::lime::app::Preloader >(); return inValue; }
		if (HX_FIELD_EQ(inName,"renderers") ) { renderers=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"windowByID") ) { windowByID=inValue.Cast< ::haxe::ds::IntMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Application_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"current") ) { current=ioValue.Cast< ::lime::app::Application >(); return true; }
	}
	return false;
}

void Application_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("config","\xc2","\x56","\xd2","\xc7"));
	outFields->push(HX_HCSTRING("frameRate","\xad","\x11","\x25","\x39"));
	outFields->push(HX_HCSTRING("modules","\x47","\xe2","\xfa","\xf7"));
	outFields->push(HX_HCSTRING("preloader","\x76","\xe4","\x7b","\x82"));
	outFields->push(HX_HCSTRING("onUpdate","\x88","\x7c","\xb2","\x66"));
	outFields->push(HX_HCSTRING("renderer","\x43","\xc5","\xdb","\xb2"));
	outFields->push(HX_HCSTRING("renderers","\xd0","\xd5","\x70","\xcd"));
	outFields->push(HX_HCSTRING("window","\xf0","\x93","\x8c","\x52"));
	outFields->push(HX_HCSTRING("windows","\x83","\xde","\x74","\xe8"));
	outFields->push(HX_HCSTRING("backend","\x14","\xbc","\x87","\xfb"));
	outFields->push(HX_HCSTRING("windowByID","\x82","\x71","\xf9","\xcb"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Application_obj,config),HX_HCSTRING("config","\xc2","\x56","\xd2","\xc7")},
	{hx::fsObject /*Array< ::lime::app::IModule >*/ ,(int)offsetof(Application_obj,modules),HX_HCSTRING("modules","\x47","\xe2","\xfa","\xf7")},
	{hx::fsObject /*::lime::app::Preloader*/ ,(int)offsetof(Application_obj,preloader),HX_HCSTRING("preloader","\x76","\xe4","\x7b","\x82")},
	{hx::fsObject /*::lime::app::Event_Int_Void*/ ,(int)offsetof(Application_obj,onUpdate),HX_HCSTRING("onUpdate","\x88","\x7c","\xb2","\x66")},
	{hx::fsObject /*::lime::graphics::Renderer*/ ,(int)offsetof(Application_obj,renderer),HX_HCSTRING("renderer","\x43","\xc5","\xdb","\xb2")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Application_obj,renderers),HX_HCSTRING("renderers","\xd0","\xd5","\x70","\xcd")},
	{hx::fsObject /*::lime::ui::Window*/ ,(int)offsetof(Application_obj,window),HX_HCSTRING("window","\xf0","\x93","\x8c","\x52")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Application_obj,windows),HX_HCSTRING("windows","\x83","\xde","\x74","\xe8")},
	{hx::fsObject /*::lime::_backend::native::NativeApplication*/ ,(int)offsetof(Application_obj,backend),HX_HCSTRING("backend","\x14","\xbc","\x87","\xfb")},
	{hx::fsObject /*::haxe::ds::IntMap*/ ,(int)offsetof(Application_obj,windowByID),HX_HCSTRING("windowByID","\x82","\x71","\xf9","\xcb")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::lime::app::Application*/ ,(void *) &Application_obj::current,HX_HCSTRING("current","\x39","\x9c","\xe3","\xcb")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("config","\xc2","\x56","\xd2","\xc7"),
	HX_HCSTRING("modules","\x47","\xe2","\xfa","\xf7"),
	HX_HCSTRING("preloader","\x76","\xe4","\x7b","\x82"),
	HX_HCSTRING("onUpdate","\x88","\x7c","\xb2","\x66"),
	HX_HCSTRING("renderer","\x43","\xc5","\xdb","\xb2"),
	HX_HCSTRING("renderers","\xd0","\xd5","\x70","\xcd"),
	HX_HCSTRING("window","\xf0","\x93","\x8c","\x52"),
	HX_HCSTRING("windows","\x83","\xde","\x74","\xe8"),
	HX_HCSTRING("backend","\x14","\xbc","\x87","\xfb"),
	HX_HCSTRING("windowByID","\x82","\x71","\xf9","\xcb"),
	HX_HCSTRING("addModule","\xad","\x69","\xf7","\x78"),
	HX_HCSTRING("addRenderer","\x84","\xfc","\x37","\xe4"),
	HX_HCSTRING("create","\xfc","\x66","\x0f","\x7c"),
	HX_HCSTRING("createWindow","\x0c","\xd4","\xe1","\x74"),
	HX_HCSTRING("exec","\x91","\xf3","\x1d","\x43"),
	HX_HCSTRING("onModuleExit","\xe9","\xbf","\xa3","\x0b"),
	HX_HCSTRING("onWindowClose","\xc9","\xca","\x1f","\x9c"),
	HX_HCSTRING("removeModule","\x10","\xd0","\x00","\x30"),
	HX_HCSTRING("removeWindow","\x54","\x2f","\xba","\xc1"),
	HX_HCSTRING("setPreloader","\x74","\xa4","\xcb","\xa6"),
	HX_HCSTRING("get_frameRate","\x84","\xe5","\x88","\xfa"),
	HX_HCSTRING("set_frameRate","\x90","\xc7","\x8e","\x3f"),
	HX_HCSTRING("get_preloader","\x4d","\xb8","\xdf","\x43"),
	HX_HCSTRING("get_renderer","\x4c","\x79","\xf5","\x67"),
	HX_HCSTRING("get_renderers","\xa7","\xa9","\xd4","\x8e"),
	HX_HCSTRING("get_window","\xb9","\x03","\x14","\x43"),
	HX_HCSTRING("get_windows","\x9a","\x3e","\x6f","\x6e"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Application_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Application_obj::current,"current");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Application_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Application_obj::current,"current");
};

#endif

hx::Class Application_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("current","\x39","\x9c","\xe3","\xcb"),
	::String(null()) };

void Application_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.app.Application","\x8a","\x94","\x72","\x90");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Application_obj::__GetStatic;
	__mClass->mSetStaticField = &Application_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Application_obj >;
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
