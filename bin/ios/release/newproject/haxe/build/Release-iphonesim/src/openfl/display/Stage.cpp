#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_lime__backend_native_NativeApplication
#include <lime/_backend/native/NativeApplication.h>
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
#ifndef INCLUDED_lime_app_Event_Int_Int_Void
#include <lime/app/Event_Int_Int_Void.h>
#endif
#ifndef INCLUDED_lime_app_Event_Int_Void
#include <lime/app/Event_Int_Void.h>
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
#ifndef INCLUDED_lime_graphics_CanvasRenderContext
#include <lime/graphics/CanvasRenderContext.h>
#endif
#ifndef INCLUDED_lime_graphics_ConsoleRenderContext
#include <lime/graphics/ConsoleRenderContext.h>
#endif
#ifndef INCLUDED_lime_graphics_DOMRenderContext
#include <lime/graphics/DOMRenderContext.h>
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
#ifndef INCLUDED_lime_graphics_RendererType
#include <lime/graphics/RendererType.h>
#endif
#ifndef INCLUDED_lime_graphics_cairo_Cairo
#include <lime/graphics/cairo/Cairo.h>
#endif
#ifndef INCLUDED_lime_ui_Gamepad
#include <lime/ui/Gamepad.h>
#endif
#ifndef INCLUDED_lime_ui_Joystick
#include <lime/ui/Joystick.h>
#endif
#ifndef INCLUDED_lime_ui_Mouse
#include <lime/ui/Mouse.h>
#endif
#ifndef INCLUDED_lime_ui_MouseCursor
#include <lime/ui/MouseCursor.h>
#endif
#ifndef INCLUDED_lime_ui_Touch
#include <lime/ui/Touch.h>
#endif
#ifndef INCLUDED_lime_ui_Window
#include <lime/ui/Window.h>
#endif
#ifndef INCLUDED_lime_ui__KeyModifier_KeyModifier_Impl_
#include <lime/ui/_KeyModifier/KeyModifier_Impl_.h>
#endif
#ifndef INCLUDED_openfl_Lib
#include <openfl/Lib.h>
#endif
#ifndef INCLUDED_openfl__Vector_IVector
#include <openfl/_Vector/IVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_ObjectVector
#include <openfl/_Vector/ObjectVector.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_AbstractRenderer
#include <openfl/_internal/renderer/AbstractRenderer.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_RenderSession
#include <openfl/_internal/renderer/RenderSession.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_cairo_CairoRenderer
#include <openfl/_internal/renderer/cairo/CairoRenderer.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_canvas_CanvasRenderer
#include <openfl/_internal/renderer/canvas/CanvasRenderer.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_console_ConsoleRenderer
#include <openfl/_internal/renderer/console/ConsoleRenderer.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_dom_DOMRenderer
#include <openfl/_internal/renderer/dom/DOMRenderer.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_GLRenderer
#include <openfl/_internal/renderer/opengl/GLRenderer.h>
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
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_display_Stage
#include <openfl/display/Stage.h>
#endif
#ifndef INCLUDED_openfl_display_Stage3D
#include <openfl/display/Stage3D.h>
#endif
#ifndef INCLUDED_openfl_events_ActivityEvent
#include <openfl/events/ActivityEvent.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_FocusEvent
#include <openfl/events/FocusEvent.h>
#endif
#ifndef INCLUDED_openfl_events_FullScreenEvent
#include <openfl/events/FullScreenEvent.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_KeyboardEvent
#include <openfl/events/KeyboardEvent.h>
#endif
#ifndef INCLUDED_openfl_events_MouseEvent
#include <openfl/events/MouseEvent.h>
#endif
#ifndef INCLUDED_openfl_events_TextEvent
#include <openfl/events/TextEvent.h>
#endif
#ifndef INCLUDED_openfl_events_TouchEvent
#include <openfl/events/TouchEvent.h>
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
#ifndef INCLUDED_openfl_ui_GameInput
#include <openfl/ui/GameInput.h>
#endif
#ifndef INCLUDED_openfl_ui_Keyboard
#include <openfl/ui/Keyboard.h>
#endif
#ifndef INCLUDED_openfl_ui_Mouse
#include <openfl/ui/Mouse.h>
#endif
namespace openfl{
namespace display{

Void Stage_obj::__construct(::lime::ui::Window window,Dynamic color)
{
HX_STACK_FRAME("openfl.display.Stage","new",0x908e7106,"openfl.display.Stage.new","openfl/display/Stage.hx",127,0xadca4c2c)
HX_STACK_THIS(this)
HX_STACK_ARG(window,"window")
HX_STACK_ARG(color,"color")
{
	HX_STACK_LINE(133)
	super::__construct();
	HX_STACK_LINE(135)
	this->application = window->application;
	HX_STACK_LINE(136)
	this->window = window;
	HX_STACK_LINE(138)
	bool tmp = (color == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(138)
	if ((tmp)){
		HX_STACK_LINE(140)
		this->__transparent = true;
		HX_STACK_LINE(141)
		this->set_color((int)0);
	}
	else{
		HX_STACK_LINE(145)
		Dynamic tmp1 = color;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(145)
		this->set_color(tmp1);
	}
	HX_STACK_LINE(149)
	this->set_name(null());
	HX_STACK_LINE(151)
	this->__deltaTime = (int)0;
	HX_STACK_LINE(152)
	this->__displayState = ((Dynamic)((int)2));
	HX_STACK_LINE(153)
	this->__mouseX = (int)0;
	HX_STACK_LINE(154)
	this->__mouseY = (int)0;
	HX_STACK_LINE(155)
	this->__lastClickTime = (int)0;
	HX_STACK_LINE(156)
	this->__logicalWidth = (int)0;
	HX_STACK_LINE(157)
	this->__logicalHeight = (int)0;
	HX_STACK_LINE(158)
	::openfl::geom::Matrix tmp1 = ::openfl::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(158)
	this->__displayMatrix = tmp1;
	HX_STACK_LINE(160)
	::openfl::_Vector::ObjectVector tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(160)
	{
		HX_STACK_LINE(160)
		int length = null();		HX_STACK_VAR(length,"length");
		HX_STACK_LINE(160)
		bool fixed = null();		HX_STACK_VAR(fixed,"fixed");
		HX_STACK_LINE(160)
		::openfl::_Vector::ObjectVector tmp3 = ::openfl::_Vector::ObjectVector_obj::__new(length,fixed,null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(160)
		::openfl::_Vector::ObjectVector tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(160)
		tmp2 = tmp4;
	}
	HX_STACK_LINE(160)
	this->stage3Ds = tmp2;
	HX_STACK_LINE(161)
	{
		HX_STACK_LINE(161)
		::openfl::display::Stage3D tmp3 = ::openfl::display::Stage3D_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(161)
		::openfl::display::Stage3D x = tmp3;		HX_STACK_VAR(x,"x");
		HX_STACK_LINE(161)
		::openfl::_Vector::ObjectVector tmp4 = this->stage3Ds;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(161)
		::openfl::display::Stage3D tmp5 = x;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(161)
		tmp4->push(tmp5);
	}
	HX_STACK_LINE(163)
	this->__resize();
	HX_STACK_LINE(165)
	this->stage = hx::ObjectPtr<OBJ_>(this);
	HX_STACK_LINE(167)
	this->align = ((Dynamic)((int)6));
	HX_STACK_LINE(172)
	this->allowsFullScreen = true;
	HX_STACK_LINE(173)
	this->allowsFullScreenInteractive = true;
	HX_STACK_LINE(175)
	this->quality = ((Dynamic)((int)1));
	HX_STACK_LINE(176)
	this->scaleMode = ((Dynamic)((int)2));
	HX_STACK_LINE(177)
	this->stageFocusRect = true;
	HX_STACK_LINE(185)
	this->__clearBeforeRender = true;
	HX_STACK_LINE(186)
	this->__stack = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(187)
	this->__mouseOutStack = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(189)
	::openfl::display::MovieClip tmp3 = ::openfl::Lib_obj::current;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(189)
	::openfl::display::Stage tmp4 = tmp3->stage;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(189)
	bool tmp5 = (tmp4 == null());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(189)
	if ((tmp5)){
		HX_STACK_LINE(191)
		::openfl::display::Stage tmp6 = this->stage;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(191)
		::openfl::display::MovieClip tmp7 = ::openfl::Lib_obj::current;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(191)
		tmp6->addChild(tmp7);
	}
}
;
	return null();
}

//Stage_obj::~Stage_obj() { }

Dynamic Stage_obj::__CreateEmpty() { return  new Stage_obj; }
hx::ObjectPtr< Stage_obj > Stage_obj::__new(::lime::ui::Window window,Dynamic color)
{  hx::ObjectPtr< Stage_obj > _result_ = new Stage_obj();
	_result_->__construct(window,color);
	return _result_;}

Dynamic Stage_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Stage_obj > _result_ = new Stage_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

hx::Object *Stage_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::lime::app::IModule_obj)) return operator ::lime::app::IModule_obj *();
	return super::__ToInterface(inType);
}

Stage_obj::operator ::lime::app::IModule_obj *()
	{ return new ::lime::app::IModule_delegate_< Stage_obj >(this); }
Void Stage_obj::addRenderer( ::lime::graphics::Renderer renderer){
{
		HX_STACK_FRAME("openfl.display.Stage","addRenderer",0xe89cb32a,"openfl.display.Stage.addRenderer","openfl/display/Stage.hx",198,0xadca4c2c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderer,"renderer")
		HX_STACK_LINE(200)
		Dynamic tmp = this->render_dyn();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(200)
		::lime::graphics::Renderer tmp1 = renderer;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(200)
		Dynamic tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(200)
		{
			HX_STACK_LINE(200)
			Dynamic f = tmp;		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(200)
			::lime::graphics::Renderer a1 = tmp1;		HX_STACK_VAR(a1,"a1");

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::lime::graphics::Renderer,a1,Dynamic,f)
			int __ArgCount() const { return 0; }
			Void run(){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","openfl/display/Stage.hx",200,0xadca4c2c)
				{
					HX_STACK_LINE(200)
					::lime::graphics::Renderer tmp3 = a1;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(200)
					f(tmp3).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC0((void))

			HX_STACK_LINE(200)
			tmp2 =  Dynamic(new _Function_2_1(a1,f));
		}
		HX_STACK_LINE(200)
		renderer->onRender->add(tmp2,null(),null());
		HX_STACK_LINE(201)
		Dynamic tmp3 = this->onRenderContextLost_dyn();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(201)
		::lime::graphics::Renderer tmp4 = renderer;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(201)
		Dynamic tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(201)
		{
			HX_STACK_LINE(201)
			Dynamic f = tmp3;		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(201)
			::lime::graphics::Renderer a1 = tmp4;		HX_STACK_VAR(a1,"a1");

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::lime::graphics::Renderer,a1,Dynamic,f)
			int __ArgCount() const { return 0; }
			Void run(){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","openfl/display/Stage.hx",201,0xadca4c2c)
				{
					HX_STACK_LINE(201)
					::lime::graphics::Renderer tmp6 = a1;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(201)
					f(tmp6).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC0((void))

			HX_STACK_LINE(201)
			tmp5 =  Dynamic(new _Function_2_1(a1,f));
		}
		HX_STACK_LINE(201)
		renderer->onContextLost->add(tmp5,null(),null());
		HX_STACK_LINE(202)
		Dynamic tmp6 = this->onRenderContextRestored_dyn();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(202)
		::lime::graphics::Renderer tmp7 = renderer;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(202)
		Dynamic tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(202)
		{
			HX_STACK_LINE(202)
			Dynamic f = tmp6;		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(202)
			::lime::graphics::Renderer a1 = tmp7;		HX_STACK_VAR(a1,"a1");

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::lime::graphics::Renderer,a1,Dynamic,f)
			int __ArgCount() const { return 1; }
			Void run(::lime::graphics::RenderContext a2){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","openfl/display/Stage.hx",202,0xadca4c2c)
				HX_STACK_ARG(a2,"a2")
				{
					HX_STACK_LINE(202)
					::lime::graphics::Renderer tmp9 = a1;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(202)
					::lime::graphics::RenderContext tmp10 = a2;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(202)
					f(tmp9,tmp10).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			HX_STACK_LINE(202)
			tmp8 =  Dynamic(new _Function_2_1(a1,f));
		}
		HX_STACK_LINE(202)
		renderer->onContextRestored->add(tmp8,null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,addRenderer,(void))

Void Stage_obj::addWindow( ::lime::ui::Window window){
{
		HX_STACK_FRAME("openfl.display.Stage","addWindow",0xe38e6a17,"openfl.display.Stage.addWindow","openfl/display/Stage.hx",207,0xadca4c2c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
		HX_STACK_LINE(209)
		::lime::ui::Window tmp = this->window;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(209)
		::lime::ui::Window tmp1 = window;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(209)
		bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(209)
		if ((tmp2)){
			HX_STACK_LINE(209)
			return null();
		}
		HX_STACK_LINE(211)
		Dynamic tmp3 = this->onWindowActivate_dyn();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(211)
		::lime::ui::Window tmp4 = window;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(211)
		Dynamic tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(211)
		{
			HX_STACK_LINE(211)
			Dynamic f = tmp3;		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(211)
			::lime::ui::Window a1 = tmp4;		HX_STACK_VAR(a1,"a1");

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::lime::ui::Window,a1,Dynamic,f)
			int __ArgCount() const { return 0; }
			Void run(){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","openfl/display/Stage.hx",211,0xadca4c2c)
				{
					HX_STACK_LINE(211)
					::lime::ui::Window tmp6 = a1;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(211)
					f(tmp6).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC0((void))

			HX_STACK_LINE(211)
			tmp5 =  Dynamic(new _Function_2_1(a1,f));
		}
		HX_STACK_LINE(211)
		window->onActivate->add(tmp5,null(),null());
		HX_STACK_LINE(212)
		Dynamic tmp6 = this->onWindowClose_dyn();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(212)
		::lime::ui::Window tmp7 = window;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(212)
		Dynamic tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(212)
		{
			HX_STACK_LINE(212)
			Dynamic f = tmp6;		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(212)
			::lime::ui::Window a1 = tmp7;		HX_STACK_VAR(a1,"a1");

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::lime::ui::Window,a1,Dynamic,f)
			int __ArgCount() const { return 0; }
			Void run(){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","openfl/display/Stage.hx",212,0xadca4c2c)
				{
					HX_STACK_LINE(212)
					::lime::ui::Window tmp9 = a1;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(212)
					f(tmp9).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC0((void))

			HX_STACK_LINE(212)
			tmp8 =  Dynamic(new _Function_2_1(a1,f));
		}
		HX_STACK_LINE(212)
		window->onClose->add(tmp8,null(),null());
		HX_STACK_LINE(213)
		Dynamic tmp9 = this->onWindowCreate_dyn();		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(213)
		::lime::ui::Window tmp10 = window;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(213)
		Dynamic tmp11;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(213)
		{
			HX_STACK_LINE(213)
			Dynamic f = tmp9;		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(213)
			::lime::ui::Window a1 = tmp10;		HX_STACK_VAR(a1,"a1");

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::lime::ui::Window,a1,Dynamic,f)
			int __ArgCount() const { return 0; }
			Void run(){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","openfl/display/Stage.hx",213,0xadca4c2c)
				{
					HX_STACK_LINE(213)
					::lime::ui::Window tmp12 = a1;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(213)
					f(tmp12).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC0((void))

			HX_STACK_LINE(213)
			tmp11 =  Dynamic(new _Function_2_1(a1,f));
		}
		HX_STACK_LINE(213)
		window->onCreate->add(tmp11,null(),null());
		HX_STACK_LINE(214)
		Dynamic tmp12 = this->onWindowDeactivate_dyn();		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(214)
		::lime::ui::Window tmp13 = window;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(214)
		Dynamic tmp14;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(214)
		{
			HX_STACK_LINE(214)
			Dynamic f = tmp12;		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(214)
			::lime::ui::Window a1 = tmp13;		HX_STACK_VAR(a1,"a1");

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::lime::ui::Window,a1,Dynamic,f)
			int __ArgCount() const { return 0; }
			Void run(){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","openfl/display/Stage.hx",214,0xadca4c2c)
				{
					HX_STACK_LINE(214)
					::lime::ui::Window tmp15 = a1;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(214)
					f(tmp15).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC0((void))

			HX_STACK_LINE(214)
			tmp14 =  Dynamic(new _Function_2_1(a1,f));
		}
		HX_STACK_LINE(214)
		window->onDeactivate->add(tmp14,null(),null());
		HX_STACK_LINE(215)
		Dynamic tmp15 = this->onWindowDropFile_dyn();		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(215)
		::lime::ui::Window tmp16 = window;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(215)
		Dynamic tmp17;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(215)
		{
			HX_STACK_LINE(215)
			Dynamic f = tmp15;		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(215)
			::lime::ui::Window a1 = tmp16;		HX_STACK_VAR(a1,"a1");

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::lime::ui::Window,a1,Dynamic,f)
			int __ArgCount() const { return 1; }
			Void run(::String a2){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","openfl/display/Stage.hx",215,0xadca4c2c)
				HX_STACK_ARG(a2,"a2")
				{
					HX_STACK_LINE(215)
					::lime::ui::Window tmp18 = a1;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(215)
					::String tmp19 = a2;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(215)
					f(tmp18,tmp19).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			HX_STACK_LINE(215)
			tmp17 =  Dynamic(new _Function_2_1(a1,f));
		}
		HX_STACK_LINE(215)
		window->onDropFile->add(tmp17,null(),null());
		HX_STACK_LINE(216)
		Dynamic tmp18 = this->onWindowEnter_dyn();		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(216)
		::lime::ui::Window tmp19 = window;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(216)
		Dynamic tmp20;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(216)
		{
			HX_STACK_LINE(216)
			Dynamic f = tmp18;		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(216)
			::lime::ui::Window a1 = tmp19;		HX_STACK_VAR(a1,"a1");

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::lime::ui::Window,a1,Dynamic,f)
			int __ArgCount() const { return 0; }
			Void run(){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","openfl/display/Stage.hx",216,0xadca4c2c)
				{
					HX_STACK_LINE(216)
					::lime::ui::Window tmp21 = a1;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(216)
					f(tmp21).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC0((void))

			HX_STACK_LINE(216)
			tmp20 =  Dynamic(new _Function_2_1(a1,f));
		}
		HX_STACK_LINE(216)
		window->onEnter->add(tmp20,null(),null());
		HX_STACK_LINE(217)
		Dynamic tmp21 = this->onWindowFocusIn_dyn();		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(217)
		::lime::ui::Window tmp22 = window;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(217)
		Dynamic tmp23;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(217)
		{
			HX_STACK_LINE(217)
			Dynamic f = tmp21;		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(217)
			::lime::ui::Window a1 = tmp22;		HX_STACK_VAR(a1,"a1");

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::lime::ui::Window,a1,Dynamic,f)
			int __ArgCount() const { return 0; }
			Void run(){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","openfl/display/Stage.hx",217,0xadca4c2c)
				{
					HX_STACK_LINE(217)
					::lime::ui::Window tmp24 = a1;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(217)
					f(tmp24).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC0((void))

			HX_STACK_LINE(217)
			tmp23 =  Dynamic(new _Function_2_1(a1,f));
		}
		HX_STACK_LINE(217)
		window->onFocusIn->add(tmp23,null(),null());
		HX_STACK_LINE(218)
		Dynamic tmp24 = this->onWindowFocusOut_dyn();		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(218)
		::lime::ui::Window tmp25 = window;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(218)
		Dynamic tmp26;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(218)
		{
			HX_STACK_LINE(218)
			Dynamic f = tmp24;		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(218)
			::lime::ui::Window a1 = tmp25;		HX_STACK_VAR(a1,"a1");

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::lime::ui::Window,a1,Dynamic,f)
			int __ArgCount() const { return 0; }
			Void run(){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","openfl/display/Stage.hx",218,0xadca4c2c)
				{
					HX_STACK_LINE(218)
					::lime::ui::Window tmp27 = a1;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(218)
					f(tmp27).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC0((void))

			HX_STACK_LINE(218)
			tmp26 =  Dynamic(new _Function_2_1(a1,f));
		}
		HX_STACK_LINE(218)
		window->onFocusOut->add(tmp26,null(),null());
		HX_STACK_LINE(219)
		Dynamic tmp27 = this->onWindowFullscreen_dyn();		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(219)
		::lime::ui::Window tmp28 = window;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(219)
		Dynamic tmp29;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(219)
		{
			HX_STACK_LINE(219)
			Dynamic f = tmp27;		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(219)
			::lime::ui::Window a1 = tmp28;		HX_STACK_VAR(a1,"a1");

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::lime::ui::Window,a1,Dynamic,f)
			int __ArgCount() const { return 0; }
			Void run(){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","openfl/display/Stage.hx",219,0xadca4c2c)
				{
					HX_STACK_LINE(219)
					::lime::ui::Window tmp30 = a1;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(219)
					f(tmp30).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC0((void))

			HX_STACK_LINE(219)
			tmp29 =  Dynamic(new _Function_2_1(a1,f));
		}
		HX_STACK_LINE(219)
		window->onFullscreen->add(tmp29,null(),null());
		HX_STACK_LINE(220)
		Dynamic tmp30 = this->onKeyDown_dyn();		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(220)
		::lime::ui::Window tmp31 = window;		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(220)
		Dynamic tmp32;		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(220)
		{
			HX_STACK_LINE(220)
			Dynamic f = tmp30;		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(220)
			::lime::ui::Window a1 = tmp31;		HX_STACK_VAR(a1,"a1");

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::lime::ui::Window,a1,Dynamic,f)
			int __ArgCount() const { return 2; }
			Void run(int a2,int a3){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","openfl/display/Stage.hx",220,0xadca4c2c)
				HX_STACK_ARG(a2,"a2")
				HX_STACK_ARG(a3,"a3")
				{
					HX_STACK_LINE(220)
					::lime::ui::Window tmp33 = a1;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(220)
					int tmp34 = a2;		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(220)
					int tmp35 = a3;		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(220)
					f(tmp33,tmp34,tmp35).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC2((void))

			HX_STACK_LINE(220)
			tmp32 =  Dynamic(new _Function_2_1(a1,f));
		}
		HX_STACK_LINE(220)
		window->onKeyDown->add(tmp32,null(),null());
		HX_STACK_LINE(221)
		Dynamic tmp33 = this->onKeyUp_dyn();		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(221)
		::lime::ui::Window tmp34 = window;		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(221)
		Dynamic tmp35;		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(221)
		{
			HX_STACK_LINE(221)
			Dynamic f = tmp33;		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(221)
			::lime::ui::Window a1 = tmp34;		HX_STACK_VAR(a1,"a1");

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::lime::ui::Window,a1,Dynamic,f)
			int __ArgCount() const { return 2; }
			Void run(int a2,int a3){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","openfl/display/Stage.hx",221,0xadca4c2c)
				HX_STACK_ARG(a2,"a2")
				HX_STACK_ARG(a3,"a3")
				{
					HX_STACK_LINE(221)
					::lime::ui::Window tmp36 = a1;		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(221)
					int tmp37 = a2;		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(221)
					int tmp38 = a3;		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(221)
					f(tmp36,tmp37,tmp38).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC2((void))

			HX_STACK_LINE(221)
			tmp35 =  Dynamic(new _Function_2_1(a1,f));
		}
		HX_STACK_LINE(221)
		window->onKeyUp->add(tmp35,null(),null());
		HX_STACK_LINE(222)
		Dynamic tmp36 = this->onWindowLeave_dyn();		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(222)
		::lime::ui::Window tmp37 = window;		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(222)
		Dynamic tmp38;		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(222)
		{
			HX_STACK_LINE(222)
			Dynamic f = tmp36;		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(222)
			::lime::ui::Window a1 = tmp37;		HX_STACK_VAR(a1,"a1");

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::lime::ui::Window,a1,Dynamic,f)
			int __ArgCount() const { return 0; }
			Void run(){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","openfl/display/Stage.hx",222,0xadca4c2c)
				{
					HX_STACK_LINE(222)
					::lime::ui::Window tmp39 = a1;		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(222)
					f(tmp39).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC0((void))

			HX_STACK_LINE(222)
			tmp38 =  Dynamic(new _Function_2_1(a1,f));
		}
		HX_STACK_LINE(222)
		window->onLeave->add(tmp38,null(),null());
		HX_STACK_LINE(223)
		Dynamic tmp39 = this->onWindowMinimize_dyn();		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(223)
		::lime::ui::Window tmp40 = window;		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(223)
		Dynamic tmp41;		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(223)
		{
			HX_STACK_LINE(223)
			Dynamic f = tmp39;		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(223)
			::lime::ui::Window a1 = tmp40;		HX_STACK_VAR(a1,"a1");

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::lime::ui::Window,a1,Dynamic,f)
			int __ArgCount() const { return 0; }
			Void run(){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","openfl/display/Stage.hx",223,0xadca4c2c)
				{
					HX_STACK_LINE(223)
					::lime::ui::Window tmp42 = a1;		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(223)
					f(tmp42).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC0((void))

			HX_STACK_LINE(223)
			tmp41 =  Dynamic(new _Function_2_1(a1,f));
		}
		HX_STACK_LINE(223)
		window->onMinimize->add(tmp41,null(),null());
		HX_STACK_LINE(224)
		Dynamic tmp42 = this->onMouseDown_dyn();		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(224)
		::lime::ui::Window tmp43 = window;		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(224)
		Dynamic tmp44;		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(224)
		{
			HX_STACK_LINE(224)
			Dynamic f = tmp42;		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(224)
			::lime::ui::Window a1 = tmp43;		HX_STACK_VAR(a1,"a1");

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::lime::ui::Window,a1,Dynamic,f)
			int __ArgCount() const { return 3; }
			Void run(Float x,Float y,int a2){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","openfl/display/Stage.hx",224,0xadca4c2c)
				HX_STACK_ARG(x,"x")
				HX_STACK_ARG(y,"y")
				HX_STACK_ARG(a2,"a2")
				{
					HX_STACK_LINE(224)
					::lime::ui::Window tmp45 = a1;		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(224)
					Float tmp46 = x;		HX_STACK_VAR(tmp46,"tmp46");
					HX_STACK_LINE(224)
					Float tmp47 = y;		HX_STACK_VAR(tmp47,"tmp47");
					HX_STACK_LINE(224)
					int tmp48 = a2;		HX_STACK_VAR(tmp48,"tmp48");
					HX_STACK_LINE(224)
					f(tmp45,tmp46,tmp47,tmp48).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC3((void))

			HX_STACK_LINE(224)
			tmp44 =  Dynamic(new _Function_2_1(a1,f));
		}
		HX_STACK_LINE(224)
		window->onMouseDown->add(tmp44,null(),null());
		HX_STACK_LINE(225)
		Dynamic tmp45 = this->onMouseMove_dyn();		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(225)
		::lime::ui::Window tmp46 = window;		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(225)
		Dynamic tmp47;		HX_STACK_VAR(tmp47,"tmp47");
		HX_STACK_LINE(225)
		{
			HX_STACK_LINE(225)
			Dynamic f = tmp45;		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(225)
			::lime::ui::Window a1 = tmp46;		HX_STACK_VAR(a1,"a1");

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::lime::ui::Window,a1,Dynamic,f)
			int __ArgCount() const { return 2; }
			Void run(Float x,Float y){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","openfl/display/Stage.hx",225,0xadca4c2c)
				HX_STACK_ARG(x,"x")
				HX_STACK_ARG(y,"y")
				{
					HX_STACK_LINE(225)
					::lime::ui::Window tmp48 = a1;		HX_STACK_VAR(tmp48,"tmp48");
					HX_STACK_LINE(225)
					Float tmp49 = x;		HX_STACK_VAR(tmp49,"tmp49");
					HX_STACK_LINE(225)
					Float tmp50 = y;		HX_STACK_VAR(tmp50,"tmp50");
					HX_STACK_LINE(225)
					f(tmp48,tmp49,tmp50).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC2((void))

			HX_STACK_LINE(225)
			tmp47 =  Dynamic(new _Function_2_1(a1,f));
		}
		HX_STACK_LINE(225)
		window->onMouseMove->add(tmp47,null(),null());
		HX_STACK_LINE(226)
		Dynamic tmp48 = this->onMouseMoveRelative_dyn();		HX_STACK_VAR(tmp48,"tmp48");
		HX_STACK_LINE(226)
		::lime::ui::Window tmp49 = window;		HX_STACK_VAR(tmp49,"tmp49");
		HX_STACK_LINE(226)
		Dynamic tmp50;		HX_STACK_VAR(tmp50,"tmp50");
		HX_STACK_LINE(226)
		{
			HX_STACK_LINE(226)
			Dynamic f = tmp48;		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(226)
			::lime::ui::Window a1 = tmp49;		HX_STACK_VAR(a1,"a1");

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::lime::ui::Window,a1,Dynamic,f)
			int __ArgCount() const { return 2; }
			Void run(Float x,Float y){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","openfl/display/Stage.hx",226,0xadca4c2c)
				HX_STACK_ARG(x,"x")
				HX_STACK_ARG(y,"y")
				{
					HX_STACK_LINE(226)
					::lime::ui::Window tmp51 = a1;		HX_STACK_VAR(tmp51,"tmp51");
					HX_STACK_LINE(226)
					Float tmp52 = x;		HX_STACK_VAR(tmp52,"tmp52");
					HX_STACK_LINE(226)
					Float tmp53 = y;		HX_STACK_VAR(tmp53,"tmp53");
					HX_STACK_LINE(226)
					f(tmp51,tmp52,tmp53).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC2((void))

			HX_STACK_LINE(226)
			tmp50 =  Dynamic(new _Function_2_1(a1,f));
		}
		HX_STACK_LINE(226)
		window->onMouseMoveRelative->add(tmp50,null(),null());
		HX_STACK_LINE(227)
		Dynamic tmp51 = this->onMouseUp_dyn();		HX_STACK_VAR(tmp51,"tmp51");
		HX_STACK_LINE(227)
		::lime::ui::Window tmp52 = window;		HX_STACK_VAR(tmp52,"tmp52");
		HX_STACK_LINE(227)
		Dynamic tmp53;		HX_STACK_VAR(tmp53,"tmp53");
		HX_STACK_LINE(227)
		{
			HX_STACK_LINE(227)
			Dynamic f = tmp51;		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(227)
			::lime::ui::Window a1 = tmp52;		HX_STACK_VAR(a1,"a1");

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::lime::ui::Window,a1,Dynamic,f)
			int __ArgCount() const { return 3; }
			Void run(Float x,Float y,int a2){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","openfl/display/Stage.hx",227,0xadca4c2c)
				HX_STACK_ARG(x,"x")
				HX_STACK_ARG(y,"y")
				HX_STACK_ARG(a2,"a2")
				{
					HX_STACK_LINE(227)
					::lime::ui::Window tmp54 = a1;		HX_STACK_VAR(tmp54,"tmp54");
					HX_STACK_LINE(227)
					Float tmp55 = x;		HX_STACK_VAR(tmp55,"tmp55");
					HX_STACK_LINE(227)
					Float tmp56 = y;		HX_STACK_VAR(tmp56,"tmp56");
					HX_STACK_LINE(227)
					int tmp57 = a2;		HX_STACK_VAR(tmp57,"tmp57");
					HX_STACK_LINE(227)
					f(tmp54,tmp55,tmp56,tmp57).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC3((void))

			HX_STACK_LINE(227)
			tmp53 =  Dynamic(new _Function_2_1(a1,f));
		}
		HX_STACK_LINE(227)
		window->onMouseUp->add(tmp53,null(),null());
		HX_STACK_LINE(228)
		Dynamic tmp54 = this->onMouseWheel_dyn();		HX_STACK_VAR(tmp54,"tmp54");
		HX_STACK_LINE(228)
		::lime::ui::Window tmp55 = window;		HX_STACK_VAR(tmp55,"tmp55");
		HX_STACK_LINE(228)
		Dynamic tmp56;		HX_STACK_VAR(tmp56,"tmp56");
		HX_STACK_LINE(228)
		{
			HX_STACK_LINE(228)
			Dynamic f = tmp54;		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(228)
			::lime::ui::Window a1 = tmp55;		HX_STACK_VAR(a1,"a1");

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::lime::ui::Window,a1,Dynamic,f)
			int __ArgCount() const { return 2; }
			Void run(Float a2,Float a3){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","openfl/display/Stage.hx",228,0xadca4c2c)
				HX_STACK_ARG(a2,"a2")
				HX_STACK_ARG(a3,"a3")
				{
					HX_STACK_LINE(228)
					::lime::ui::Window tmp57 = a1;		HX_STACK_VAR(tmp57,"tmp57");
					HX_STACK_LINE(228)
					Float tmp58 = a2;		HX_STACK_VAR(tmp58,"tmp58");
					HX_STACK_LINE(228)
					Float tmp59 = a3;		HX_STACK_VAR(tmp59,"tmp59");
					HX_STACK_LINE(228)
					f(tmp57,tmp58,tmp59).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC2((void))

			HX_STACK_LINE(228)
			tmp56 =  Dynamic(new _Function_2_1(a1,f));
		}
		HX_STACK_LINE(228)
		window->onMouseWheel->add(tmp56,null(),null());
		HX_STACK_LINE(229)
		Dynamic tmp57 = this->onWindowMove_dyn();		HX_STACK_VAR(tmp57,"tmp57");
		HX_STACK_LINE(229)
		::lime::ui::Window tmp58 = window;		HX_STACK_VAR(tmp58,"tmp58");
		HX_STACK_LINE(229)
		Dynamic tmp59;		HX_STACK_VAR(tmp59,"tmp59");
		HX_STACK_LINE(229)
		{
			HX_STACK_LINE(229)
			Dynamic f = tmp57;		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(229)
			::lime::ui::Window a1 = tmp58;		HX_STACK_VAR(a1,"a1");

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::lime::ui::Window,a1,Dynamic,f)
			int __ArgCount() const { return 2; }
			Void run(Float x,Float y){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","openfl/display/Stage.hx",229,0xadca4c2c)
				HX_STACK_ARG(x,"x")
				HX_STACK_ARG(y,"y")
				{
					HX_STACK_LINE(229)
					::lime::ui::Window tmp60 = a1;		HX_STACK_VAR(tmp60,"tmp60");
					HX_STACK_LINE(229)
					Float tmp61 = x;		HX_STACK_VAR(tmp61,"tmp61");
					HX_STACK_LINE(229)
					Float tmp62 = y;		HX_STACK_VAR(tmp62,"tmp62");
					HX_STACK_LINE(229)
					f(tmp60,tmp61,tmp62).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC2((void))

			HX_STACK_LINE(229)
			tmp59 =  Dynamic(new _Function_2_1(a1,f));
		}
		HX_STACK_LINE(229)
		window->onMove->add(tmp59,null(),null());
		HX_STACK_LINE(230)
		Dynamic tmp60 = this->onWindowResize_dyn();		HX_STACK_VAR(tmp60,"tmp60");
		HX_STACK_LINE(230)
		::lime::ui::Window tmp61 = window;		HX_STACK_VAR(tmp61,"tmp61");
		HX_STACK_LINE(230)
		Dynamic tmp62;		HX_STACK_VAR(tmp62,"tmp62");
		HX_STACK_LINE(230)
		{
			HX_STACK_LINE(230)
			Dynamic f = tmp60;		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(230)
			::lime::ui::Window a1 = tmp61;		HX_STACK_VAR(a1,"a1");

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::lime::ui::Window,a1,Dynamic,f)
			int __ArgCount() const { return 2; }
			Void run(int a2,int a3){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","openfl/display/Stage.hx",230,0xadca4c2c)
				HX_STACK_ARG(a2,"a2")
				HX_STACK_ARG(a3,"a3")
				{
					HX_STACK_LINE(230)
					::lime::ui::Window tmp63 = a1;		HX_STACK_VAR(tmp63,"tmp63");
					HX_STACK_LINE(230)
					int tmp64 = a2;		HX_STACK_VAR(tmp64,"tmp64");
					HX_STACK_LINE(230)
					int tmp65 = a3;		HX_STACK_VAR(tmp65,"tmp65");
					HX_STACK_LINE(230)
					f(tmp63,tmp64,tmp65).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC2((void))

			HX_STACK_LINE(230)
			tmp62 =  Dynamic(new _Function_2_1(a1,f));
		}
		HX_STACK_LINE(230)
		window->onResize->add(tmp62,null(),null());
		HX_STACK_LINE(231)
		Dynamic tmp63 = this->onWindowRestore_dyn();		HX_STACK_VAR(tmp63,"tmp63");
		HX_STACK_LINE(231)
		::lime::ui::Window tmp64 = window;		HX_STACK_VAR(tmp64,"tmp64");
		HX_STACK_LINE(231)
		Dynamic tmp65;		HX_STACK_VAR(tmp65,"tmp65");
		HX_STACK_LINE(231)
		{
			HX_STACK_LINE(231)
			Dynamic f = tmp63;		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(231)
			::lime::ui::Window a1 = tmp64;		HX_STACK_VAR(a1,"a1");

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::lime::ui::Window,a1,Dynamic,f)
			int __ArgCount() const { return 0; }
			Void run(){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","openfl/display/Stage.hx",231,0xadca4c2c)
				{
					HX_STACK_LINE(231)
					::lime::ui::Window tmp66 = a1;		HX_STACK_VAR(tmp66,"tmp66");
					HX_STACK_LINE(231)
					f(tmp66).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC0((void))

			HX_STACK_LINE(231)
			tmp65 =  Dynamic(new _Function_2_1(a1,f));
		}
		HX_STACK_LINE(231)
		window->onRestore->add(tmp65,null(),null());
		HX_STACK_LINE(232)
		Dynamic tmp66 = this->onTextEdit_dyn();		HX_STACK_VAR(tmp66,"tmp66");
		HX_STACK_LINE(232)
		::lime::ui::Window tmp67 = window;		HX_STACK_VAR(tmp67,"tmp67");
		HX_STACK_LINE(232)
		Dynamic tmp68;		HX_STACK_VAR(tmp68,"tmp68");
		HX_STACK_LINE(232)
		{
			HX_STACK_LINE(232)
			Dynamic f = tmp66;		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(232)
			::lime::ui::Window a1 = tmp67;		HX_STACK_VAR(a1,"a1");

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::lime::ui::Window,a1,Dynamic,f)
			int __ArgCount() const { return 3; }
			Void run(::String a2,int a3,int a4){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","openfl/display/Stage.hx",232,0xadca4c2c)
				HX_STACK_ARG(a2,"a2")
				HX_STACK_ARG(a3,"a3")
				HX_STACK_ARG(a4,"a4")
				{
					HX_STACK_LINE(232)
					::lime::ui::Window tmp69 = a1;		HX_STACK_VAR(tmp69,"tmp69");
					HX_STACK_LINE(232)
					::String tmp70 = a2;		HX_STACK_VAR(tmp70,"tmp70");
					HX_STACK_LINE(232)
					int tmp71 = a3;		HX_STACK_VAR(tmp71,"tmp71");
					HX_STACK_LINE(232)
					int tmp72 = a4;		HX_STACK_VAR(tmp72,"tmp72");
					HX_STACK_LINE(232)
					f(tmp69,tmp70,tmp71,tmp72).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC3((void))

			HX_STACK_LINE(232)
			tmp68 =  Dynamic(new _Function_2_1(a1,f));
		}
		HX_STACK_LINE(232)
		window->onTextEdit->add(tmp68,null(),null());
		HX_STACK_LINE(233)
		Dynamic tmp69 = this->onTextInput_dyn();		HX_STACK_VAR(tmp69,"tmp69");
		HX_STACK_LINE(233)
		::lime::ui::Window tmp70 = window;		HX_STACK_VAR(tmp70,"tmp70");
		HX_STACK_LINE(233)
		Dynamic tmp71;		HX_STACK_VAR(tmp71,"tmp71");
		HX_STACK_LINE(233)
		{
			HX_STACK_LINE(233)
			Dynamic f = tmp69;		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(233)
			::lime::ui::Window a1 = tmp70;		HX_STACK_VAR(a1,"a1");

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::lime::ui::Window,a1,Dynamic,f)
			int __ArgCount() const { return 1; }
			Void run(::String a2){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","openfl/display/Stage.hx",233,0xadca4c2c)
				HX_STACK_ARG(a2,"a2")
				{
					HX_STACK_LINE(233)
					::lime::ui::Window tmp72 = a1;		HX_STACK_VAR(tmp72,"tmp72");
					HX_STACK_LINE(233)
					::String tmp73 = a2;		HX_STACK_VAR(tmp73,"tmp73");
					HX_STACK_LINE(233)
					f(tmp72,tmp73).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			HX_STACK_LINE(233)
			tmp71 =  Dynamic(new _Function_2_1(a1,f));
		}
		HX_STACK_LINE(233)
		window->onTextInput->add(tmp71,null(),null());
		HX_STACK_LINE(235)
		bool tmp72 = (window->id > (int)-1);		HX_STACK_VAR(tmp72,"tmp72");
		HX_STACK_LINE(235)
		if ((tmp72)){
			HX_STACK_LINE(237)
			::lime::ui::Window tmp73 = window;		HX_STACK_VAR(tmp73,"tmp73");
			HX_STACK_LINE(237)
			this->onWindowCreate(tmp73);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,addWindow,(void))

Void Stage_obj::registerModule( ::lime::app::Application application){
{
		HX_STACK_FRAME("openfl.display.Stage","registerModule",0x13bf3089,"openfl.display.Stage.registerModule","openfl/display/Stage.hx",244,0xadca4c2c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(application,"application")
		HX_STACK_LINE(246)
		Dynamic tmp = this->onModuleExit_dyn();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(246)
		application->onExit->add(tmp,false,(int)0);
		HX_STACK_LINE(247)
		Dynamic tmp1 = this->update_dyn();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(247)
		application->onUpdate->add(tmp1,null(),null());
		HX_STACK_LINE(249)
		::haxe::ds::IntMap tmp2 = ::lime::ui::Gamepad_obj::devices;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(249)
		Dynamic tmp3 = tmp2->iterator();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(249)
		for(::cpp::FastIterator_obj< ::lime::ui::Gamepad > *__it = ::cpp::CreateFastIterator< ::lime::ui::Gamepad >(tmp3);  __it->hasNext(); ){
			::lime::ui::Gamepad gamepad = __it->next();
			{
				HX_STACK_LINE(251)
				::lime::ui::Gamepad tmp4 = gamepad;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(251)
				this->__onGamepadConnect(tmp4);
			}
;
		}
		HX_STACK_LINE(255)
		::lime::app::Event_lime_ui_Gamepad_Void tmp4 = ::lime::ui::Gamepad_obj::onConnect;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(255)
		Dynamic tmp5 = this->__onGamepadConnect_dyn();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(255)
		tmp4->add(tmp5,null(),null());
		HX_STACK_LINE(256)
		::lime::app::Event_lime_ui_Touch_Void tmp6 = ::lime::ui::Touch_obj::onStart;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(256)
		Dynamic tmp7 = this->onTouchStart_dyn();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(256)
		tmp6->add(tmp7,null(),null());
		HX_STACK_LINE(257)
		::lime::app::Event_lime_ui_Touch_Void tmp8 = ::lime::ui::Touch_obj::onMove;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(257)
		Dynamic tmp9 = this->onTouchMove_dyn();		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(257)
		tmp8->add(tmp9,null(),null());
		HX_STACK_LINE(258)
		::lime::app::Event_lime_ui_Touch_Void tmp10 = ::lime::ui::Touch_obj::onEnd;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(258)
		Dynamic tmp11 = this->onTouchEnd_dyn();		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(258)
		tmp10->add(tmp11,null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,registerModule,(void))

Void Stage_obj::removeRenderer( ::lime::graphics::Renderer renderer){
{
		HX_STACK_FRAME("openfl.display.Stage","removeRenderer",0x09dc76c1,"openfl.display.Stage.removeRenderer","openfl/display/Stage.hx",263,0xadca4c2c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderer,"renderer")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,removeRenderer,(void))

Void Stage_obj::removeWindow( ::lime::ui::Window window){
{
		HX_STACK_FRAME("openfl.display.Stage","removeWindow",0x957549ee,"openfl.display.Stage.removeWindow","openfl/display/Stage.hx",264,0xadca4c2c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,removeWindow,(void))

Void Stage_obj::setPreloader( ::lime::app::Preloader preloader){
{
		HX_STACK_FRAME("openfl.display.Stage","setPreloader",0x7a86bf0e,"openfl.display.Stage.setPreloader","openfl/display/Stage.hx",265,0xadca4c2c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(preloader,"preloader")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,setPreloader,(void))

Void Stage_obj::unregisterModule( ::lime::app::Application application){
{
		HX_STACK_FRAME("openfl.display.Stage","unregisterModule",0x783b9b22,"openfl.display.Stage.unregisterModule","openfl/display/Stage.hx",268,0xadca4c2c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(application,"application")
		HX_STACK_LINE(270)
		Dynamic tmp = this->onModuleExit_dyn();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(270)
		application->onExit->remove(tmp);
		HX_STACK_LINE(271)
		Dynamic tmp1 = this->update_dyn();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(271)
		application->onUpdate->remove(tmp1);
		HX_STACK_LINE(273)
		::lime::app::Event_lime_ui_Gamepad_Void tmp2 = ::lime::ui::Gamepad_obj::onConnect;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(273)
		Dynamic tmp3 = this->__onGamepadConnect_dyn();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(273)
		tmp2->remove(tmp3);
		HX_STACK_LINE(274)
		::lime::app::Event_lime_ui_Touch_Void tmp4 = ::lime::ui::Touch_obj::onStart;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(274)
		Dynamic tmp5 = this->onTouchStart_dyn();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(274)
		tmp4->remove(tmp5);
		HX_STACK_LINE(275)
		::lime::app::Event_lime_ui_Touch_Void tmp6 = ::lime::ui::Touch_obj::onMove;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(275)
		Dynamic tmp7 = this->onTouchMove_dyn();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(275)
		tmp6->remove(tmp7);
		HX_STACK_LINE(276)
		::lime::app::Event_lime_ui_Touch_Void tmp8 = ::lime::ui::Touch_obj::onEnd;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(276)
		Dynamic tmp9 = this->onTouchEnd_dyn();		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(276)
		tmp8->remove(tmp9);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,unregisterModule,(void))

::openfl::geom::Point Stage_obj::globalToLocal( ::openfl::geom::Point pos){
	HX_STACK_FRAME("openfl.display.Stage","globalToLocal",0xdbaa7af3,"openfl.display.Stage.globalToLocal","openfl/display/Stage.hx",281,0xadca4c2c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pos,"pos")
	HX_STACK_LINE(283)
	::openfl::geom::Point tmp = pos->clone();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(283)
	return tmp;
}


Void Stage_obj::invalidate( ){
{
		HX_STACK_FRAME("openfl.display.Stage","invalidate",0x70397995,"openfl.display.Stage.invalidate","openfl/display/Stage.hx",290,0xadca4c2c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(290)
		this->__invalidated = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Stage_obj,invalidate,(void))

::openfl::geom::Point Stage_obj::localToGlobal( ::openfl::geom::Point pos){
	HX_STACK_FRAME("openfl.display.Stage","localToGlobal",0xb7e76def,"openfl.display.Stage.localToGlobal","openfl/display/Stage.hx",295,0xadca4c2c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pos,"pos")
	HX_STACK_LINE(297)
	::openfl::geom::Point tmp = pos->clone();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(297)
	return tmp;
}


Void Stage_obj::onGamepadAxisMove( ::lime::ui::Gamepad gamepad,int axis,Float value){
{
		HX_STACK_FRAME("openfl.display.Stage","onGamepadAxisMove",0xc5912eda,"openfl.display.Stage.onGamepadAxisMove","openfl/display/Stage.hx",302,0xadca4c2c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(gamepad,"gamepad")
		HX_STACK_ARG(axis,"axis")
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(304)
		::lime::ui::Gamepad tmp = gamepad;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(304)
		int tmp1 = axis;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(304)
		Float tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(304)
		::openfl::ui::GameInput_obj::__onGamepadAxisMove(tmp,tmp1,tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Stage_obj,onGamepadAxisMove,(void))

Void Stage_obj::onGamepadButtonDown( ::lime::ui::Gamepad gamepad,int button){
{
		HX_STACK_FRAME("openfl.display.Stage","onGamepadButtonDown",0xf94bb7fc,"openfl.display.Stage.onGamepadButtonDown","openfl/display/Stage.hx",309,0xadca4c2c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(gamepad,"gamepad")
		HX_STACK_ARG(button,"button")
		HX_STACK_LINE(311)
		::lime::ui::Gamepad tmp = gamepad;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(311)
		int tmp1 = button;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(311)
		::openfl::ui::GameInput_obj::__onGamepadButtonDown(tmp,tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Stage_obj,onGamepadButtonDown,(void))

Void Stage_obj::onGamepadButtonUp( ::lime::ui::Gamepad gamepad,int button){
{
		HX_STACK_FRAME("openfl.display.Stage","onGamepadButtonUp",0x91cf2b75,"openfl.display.Stage.onGamepadButtonUp","openfl/display/Stage.hx",316,0xadca4c2c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(gamepad,"gamepad")
		HX_STACK_ARG(button,"button")
		HX_STACK_LINE(318)
		::lime::ui::Gamepad tmp = gamepad;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(318)
		int tmp1 = button;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(318)
		::openfl::ui::GameInput_obj::__onGamepadButtonUp(tmp,tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Stage_obj,onGamepadButtonUp,(void))

Void Stage_obj::onGamepadConnect( ::lime::ui::Gamepad gamepad){
{
		HX_STACK_FRAME("openfl.display.Stage","onGamepadConnect",0xd0dcc662,"openfl.display.Stage.onGamepadConnect","openfl/display/Stage.hx",323,0xadca4c2c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(gamepad,"gamepad")
		HX_STACK_LINE(325)
		::lime::ui::Gamepad tmp = gamepad;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(325)
		::openfl::ui::GameInput_obj::__onGamepadConnect(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,onGamepadConnect,(void))

Void Stage_obj::onGamepadDisconnect( ::lime::ui::Gamepad gamepad){
{
		HX_STACK_FRAME("openfl.display.Stage","onGamepadDisconnect",0xb62bb4e4,"openfl.display.Stage.onGamepadDisconnect","openfl/display/Stage.hx",330,0xadca4c2c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(gamepad,"gamepad")
		HX_STACK_LINE(332)
		::lime::ui::Gamepad tmp = gamepad;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(332)
		::openfl::ui::GameInput_obj::__onGamepadDisconnect(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,onGamepadDisconnect,(void))

Void Stage_obj::onJoystickAxisMove( ::lime::ui::Joystick joystick,int axis,Float value){
{
		HX_STACK_FRAME("openfl.display.Stage","onJoystickAxisMove",0x5fc8fe87,"openfl.display.Stage.onJoystickAxisMove","openfl/display/Stage.hx",337,0xadca4c2c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(joystick,"joystick")
		HX_STACK_ARG(axis,"axis")
		HX_STACK_ARG(value,"value")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Stage_obj,onJoystickAxisMove,(void))

Void Stage_obj::onJoystickButtonDown( ::lime::ui::Joystick joystick,int button){
{
		HX_STACK_FRAME("openfl.display.Stage","onJoystickButtonDown",0x6cd88ce9,"openfl.display.Stage.onJoystickButtonDown","openfl/display/Stage.hx",344,0xadca4c2c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(joystick,"joystick")
		HX_STACK_ARG(button,"button")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Stage_obj,onJoystickButtonDown,(void))

Void Stage_obj::onJoystickButtonUp( ::lime::ui::Joystick joystick,int button){
{
		HX_STACK_FRAME("openfl.display.Stage","onJoystickButtonUp",0x2c06fb22,"openfl.display.Stage.onJoystickButtonUp","openfl/display/Stage.hx",351,0xadca4c2c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(joystick,"joystick")
		HX_STACK_ARG(button,"button")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Stage_obj,onJoystickButtonUp,(void))

Void Stage_obj::onJoystickConnect( ::lime::ui::Joystick joystick){
{
		HX_STACK_FRAME("openfl.display.Stage","onJoystickConnect",0x9b994b55,"openfl.display.Stage.onJoystickConnect","openfl/display/Stage.hx",358,0xadca4c2c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(joystick,"joystick")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,onJoystickConnect,(void))

Void Stage_obj::onJoystickDisconnect( ::lime::ui::Joystick joystick){
{
		HX_STACK_FRAME("openfl.display.Stage","onJoystickDisconnect",0x29b889d1,"openfl.display.Stage.onJoystickDisconnect","openfl/display/Stage.hx",365,0xadca4c2c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(joystick,"joystick")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,onJoystickDisconnect,(void))

Void Stage_obj::onJoystickHatMove( ::lime::ui::Joystick joystick,int hat,int position){
{
		HX_STACK_FRAME("openfl.display.Stage","onJoystickHatMove",0x3124a777,"openfl.display.Stage.onJoystickHatMove","openfl/display/Stage.hx",372,0xadca4c2c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(joystick,"joystick")
		HX_STACK_ARG(hat,"hat")
		HX_STACK_ARG(position,"position")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Stage_obj,onJoystickHatMove,(void))

Void Stage_obj::onJoystickTrackballMove( ::lime::ui::Joystick joystick,int trackball,Float value){
{
		HX_STACK_FRAME("openfl.display.Stage","onJoystickTrackballMove",0x38b5dfe6,"openfl.display.Stage.onJoystickTrackballMove","openfl/display/Stage.hx",379,0xadca4c2c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(joystick,"joystick")
		HX_STACK_ARG(trackball,"trackball")
		HX_STACK_ARG(value,"value")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Stage_obj,onJoystickTrackballMove,(void))

Void Stage_obj::onKeyDown( ::lime::ui::Window window,int keyCode,int modifier){
{
		HX_STACK_FRAME("openfl.display.Stage","onKeyDown",0x4ccfc368,"openfl.display.Stage.onKeyDown","openfl/display/Stage.hx",386,0xadca4c2c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
		HX_STACK_ARG(keyCode,"keyCode")
		HX_STACK_ARG(modifier,"modifier")
		HX_STACK_LINE(388)
		::lime::ui::Window tmp = this->window;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(388)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(388)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(388)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(388)
		if ((tmp2)){
			HX_STACK_LINE(388)
			::lime::ui::Window tmp4 = this->window;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(388)
			::lime::ui::Window tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(388)
			::lime::ui::Window tmp6 = window;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(388)
			tmp3 = (tmp5 != tmp6);
		}
		else{
			HX_STACK_LINE(388)
			tmp3 = true;
		}
		HX_STACK_LINE(388)
		if ((tmp3)){
			HX_STACK_LINE(388)
			return null();
		}
		HX_STACK_LINE(390)
		int tmp4 = keyCode;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(390)
		int tmp5 = modifier;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(390)
		this->__onKey(HX_HCSTRING("keyDown","\xa1","\x69","\x47","\x9c"),tmp4,tmp5);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Stage_obj,onKeyDown,(void))

Void Stage_obj::onKeyUp( ::lime::ui::Window window,int keyCode,int modifier){
{
		HX_STACK_FRAME("openfl.display.Stage","onKeyUp",0x5bcb43e1,"openfl.display.Stage.onKeyUp","openfl/display/Stage.hx",395,0xadca4c2c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
		HX_STACK_ARG(keyCode,"keyCode")
		HX_STACK_ARG(modifier,"modifier")
		HX_STACK_LINE(397)
		::lime::ui::Window tmp = this->window;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(397)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(397)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(397)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(397)
		if ((tmp2)){
			HX_STACK_LINE(397)
			::lime::ui::Window tmp4 = this->window;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(397)
			::lime::ui::Window tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(397)
			::lime::ui::Window tmp6 = window;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(397)
			tmp3 = (tmp5 != tmp6);
		}
		else{
			HX_STACK_LINE(397)
			tmp3 = true;
		}
		HX_STACK_LINE(397)
		if ((tmp3)){
			HX_STACK_LINE(397)
			return null();
		}
		HX_STACK_LINE(399)
		int tmp4 = keyCode;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(399)
		int tmp5 = modifier;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(399)
		this->__onKey(HX_HCSTRING("keyUp","\xda","\xb9","\xfe","\xde"),tmp4,tmp5);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Stage_obj,onKeyUp,(void))

Void Stage_obj::onModuleExit( int code){
{
		HX_STACK_FRAME("openfl.display.Stage","onModuleExit",0xdf5eda83,"openfl.display.Stage.onModuleExit","openfl/display/Stage.hx",404,0xadca4c2c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(code,"code")
		HX_STACK_LINE(406)
		::lime::ui::Window tmp = this->window;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(406)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(406)
		if ((tmp1)){
			HX_STACK_LINE(408)
			::openfl::events::Event tmp2 = ::openfl::events::Event_obj::__new(HX_HCSTRING("deactivate","\x34","\x5c","\x01","\x3c"),null(),null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(408)
			this->__broadcastEvent(tmp2);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,onModuleExit,(void))

Void Stage_obj::onMouseDown( ::lime::ui::Window window,Float x,Float y,int button){
{
		HX_STACK_FRAME("openfl.display.Stage","onMouseDown",0x156a4aae,"openfl.display.Stage.onMouseDown","openfl/display/Stage.hx",415,0xadca4c2c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(button,"button")
		HX_STACK_LINE(417)
		::lime::ui::Window tmp = this->window;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(417)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(417)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(417)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(417)
		if ((tmp2)){
			HX_STACK_LINE(417)
			::lime::ui::Window tmp4 = this->window;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(417)
			::lime::ui::Window tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(417)
			::lime::ui::Window tmp6 = window;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(417)
			tmp3 = (tmp5 != tmp6);
		}
		else{
			HX_STACK_LINE(417)
			tmp3 = true;
		}
		HX_STACK_LINE(417)
		if ((tmp3)){
			HX_STACK_LINE(417)
			return null();
		}
		HX_STACK_LINE(419)
		int tmp4 = button;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(419)
		::String tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(419)
		switch( (int)(tmp4)){
			case (int)1: {
				HX_STACK_LINE(421)
				tmp5 = HX_HCSTRING("middleMouseDown","\x12","\x2b","\xfe","\x01");
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(422)
				tmp5 = HX_HCSTRING("rightMouseDown","\xab","\x29","\xd7","\xcd");
			}
			;break;
			default: {
				HX_STACK_LINE(423)
				tmp5 = HX_HCSTRING("mouseDown","\x27","\xb1","\xc2","\xee");
			}
		}
		HX_STACK_LINE(419)
		::String type = tmp5;		HX_STACK_VAR(type,"type");
		HX_STACK_LINE(427)
		::String tmp6 = type;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(427)
		Float tmp7 = (x * window->__scale);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(427)
		int tmp8 = ::Std_obj::_int(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(427)
		Float tmp9 = (y * window->__scale);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(427)
		int tmp10 = ::Std_obj::_int(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(427)
		int tmp11 = button;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(427)
		this->__onMouse(tmp6,tmp8,tmp10,tmp11);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Stage_obj,onMouseDown,(void))

Void Stage_obj::onMouseMove( ::lime::ui::Window window,Float x,Float y){
{
		HX_STACK_FRAME("openfl.display.Stage","onMouseMove",0x1b5d355d,"openfl.display.Stage.onMouseMove","openfl/display/Stage.hx",432,0xadca4c2c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(434)
		::lime::ui::Window tmp = this->window;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(434)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(434)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(434)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(434)
		if ((tmp2)){
			HX_STACK_LINE(434)
			::lime::ui::Window tmp4 = this->window;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(434)
			::lime::ui::Window tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(434)
			::lime::ui::Window tmp6 = window;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(434)
			tmp3 = (tmp5 != tmp6);
		}
		else{
			HX_STACK_LINE(434)
			tmp3 = true;
		}
		HX_STACK_LINE(434)
		if ((tmp3)){
			HX_STACK_LINE(434)
			return null();
		}
		HX_STACK_LINE(436)
		Float tmp4 = (x * window->__scale);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(436)
		int tmp5 = ::Std_obj::_int(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(436)
		Float tmp6 = (y * window->__scale);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(436)
		int tmp7 = ::Std_obj::_int(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(436)
		this->__onMouse(HX_HCSTRING("mouseMove","\xd6","\x9b","\xb5","\xf4"),tmp5,tmp7,(int)0);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Stage_obj,onMouseMove,(void))

Void Stage_obj::onMouseMoveRelative( ::lime::ui::Window window,Float x,Float y){
{
		HX_STACK_FRAME("openfl.display.Stage","onMouseMoveRelative",0xec53d349,"openfl.display.Stage.onMouseMoveRelative","openfl/display/Stage.hx",441,0xadca4c2c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Stage_obj,onMouseMoveRelative,(void))

Void Stage_obj::onMouseUp( ::lime::ui::Window window,Float x,Float y,int button){
{
		HX_STACK_FRAME("openfl.display.Stage","onMouseUp",0x70fb4da7,"openfl.display.Stage.onMouseUp","openfl/display/Stage.hx",448,0xadca4c2c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(button,"button")
		HX_STACK_LINE(450)
		::lime::ui::Window tmp = this->window;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(450)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(450)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(450)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(450)
		if ((tmp2)){
			HX_STACK_LINE(450)
			::lime::ui::Window tmp4 = this->window;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(450)
			::lime::ui::Window tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(450)
			::lime::ui::Window tmp6 = window;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(450)
			tmp3 = (tmp5 != tmp6);
		}
		else{
			HX_STACK_LINE(450)
			tmp3 = true;
		}
		HX_STACK_LINE(450)
		if ((tmp3)){
			HX_STACK_LINE(450)
			return null();
		}
		HX_STACK_LINE(452)
		int tmp4 = button;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(452)
		::String tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(452)
		switch( (int)(tmp4)){
			case (int)1: {
				HX_STACK_LINE(454)
				tmp5 = HX_HCSTRING("middleMouseUp","\x0b","\x8d","\xf5","\x3a");
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(455)
				tmp5 = HX_HCSTRING("rightMouseUp","\x64","\x83","\x21","\xab");
			}
			;break;
			default: {
				HX_STACK_LINE(456)
				tmp5 = HX_HCSTRING("mouseUp","\xe0","\xf3","\x72","\xc0");
			}
		}
		HX_STACK_LINE(452)
		::String type = tmp5;		HX_STACK_VAR(type,"type");
		HX_STACK_LINE(460)
		::String tmp6 = type;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(460)
		Float tmp7 = (x * window->__scale);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(460)
		int tmp8 = ::Std_obj::_int(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(460)
		Float tmp9 = (y * window->__scale);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(460)
		int tmp10 = ::Std_obj::_int(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(460)
		int tmp11 = button;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(460)
		this->__onMouse(tmp6,tmp8,tmp10,tmp11);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Stage_obj,onMouseUp,(void))

Void Stage_obj::onMouseWheel( ::lime::ui::Window window,Float deltaX,Float deltaY){
{
		HX_STACK_FRAME("openfl.display.Stage","onMouseWheel",0x9385e4cf,"openfl.display.Stage.onMouseWheel","openfl/display/Stage.hx",465,0xadca4c2c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
		HX_STACK_ARG(deltaX,"deltaX")
		HX_STACK_ARG(deltaY,"deltaY")
		HX_STACK_LINE(467)
		::lime::ui::Window tmp = this->window;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(467)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(467)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(467)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(467)
		if ((tmp2)){
			HX_STACK_LINE(467)
			::lime::ui::Window tmp4 = this->window;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(467)
			::lime::ui::Window tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(467)
			::lime::ui::Window tmp6 = window;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(467)
			tmp3 = (tmp5 != tmp6);
		}
		else{
			HX_STACK_LINE(467)
			tmp3 = true;
		}
		HX_STACK_LINE(467)
		if ((tmp3)){
			HX_STACK_LINE(467)
			return null();
		}
		HX_STACK_LINE(469)
		Float tmp4 = (deltaX * window->__scale);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(469)
		int tmp5 = ::Std_obj::_int(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(469)
		Float tmp6 = (deltaY * window->__scale);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(469)
		int tmp7 = ::Std_obj::_int(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(469)
		this->__onMouseWheel(tmp5,tmp7);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Stage_obj,onMouseWheel,(void))

Void Stage_obj::onPreloadComplete( ){
{
		HX_STACK_FRAME("openfl.display.Stage","onPreloadComplete",0xfd196e69,"openfl.display.Stage.onPreloadComplete","openfl/display/Stage.hx",474,0xadca4c2c)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Stage_obj,onPreloadComplete,(void))

Void Stage_obj::onPreloadProgress( int loaded,int total){
{
		HX_STACK_FRAME("openfl.display.Stage","onPreloadProgress",0x037c655d,"openfl.display.Stage.onPreloadProgress","openfl/display/Stage.hx",481,0xadca4c2c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(loaded,"loaded")
		HX_STACK_ARG(total,"total")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Stage_obj,onPreloadProgress,(void))

Void Stage_obj::onRenderContextLost( ::lime::graphics::Renderer renderer){
{
		HX_STACK_FRAME("openfl.display.Stage","onRenderContextLost",0xf63c6844,"openfl.display.Stage.onRenderContextLost","openfl/display/Stage.hx",488,0xadca4c2c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderer,"renderer")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,onRenderContextLost,(void))

Void Stage_obj::onRenderContextRestored( ::lime::graphics::Renderer renderer,::lime::graphics::RenderContext context){
{
		HX_STACK_FRAME("openfl.display.Stage","onRenderContextRestored",0x98dd6bb6,"openfl.display.Stage.onRenderContextRestored","openfl/display/Stage.hx",495,0xadca4c2c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderer,"renderer")
		HX_STACK_ARG(context,"context")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Stage_obj,onRenderContextRestored,(void))

Void Stage_obj::onTextEdit( ::lime::ui::Window window,::String text,int start,int length){
{
		HX_STACK_FRAME("openfl.display.Stage","onTextEdit",0x0cd051b0,"openfl.display.Stage.onTextEdit","openfl/display/Stage.hx",502,0xadca4c2c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
		HX_STACK_ARG(text,"text")
		HX_STACK_ARG(start,"start")
		HX_STACK_ARG(length,"length")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Stage_obj,onTextEdit,(void))

Void Stage_obj::onTextInput( ::lime::ui::Window window,::String text){
{
		HX_STACK_FRAME("openfl.display.Stage","onTextInput",0x7db2eda4,"openfl.display.Stage.onTextInput","openfl/display/Stage.hx",509,0xadca4c2c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
		HX_STACK_ARG(text,"text")
		HX_STACK_LINE(511)
		::lime::ui::Window tmp = this->window;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(511)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(511)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(511)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(511)
		if ((tmp2)){
			HX_STACK_LINE(511)
			::lime::ui::Window tmp4 = this->window;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(511)
			::lime::ui::Window tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(511)
			::lime::ui::Window tmp6 = window;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(511)
			tmp3 = (tmp5 != tmp6);
		}
		else{
			HX_STACK_LINE(511)
			tmp3 = true;
		}
		HX_STACK_LINE(511)
		if ((tmp3)){
			HX_STACK_LINE(511)
			return null();
		}
		HX_STACK_LINE(513)
		Array< ::Dynamic > stack = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(stack,"stack");
		HX_STACK_LINE(515)
		::openfl::display::InteractiveObject tmp4 = this->__focus;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(515)
		bool tmp5 = (tmp4 == null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(515)
		if ((tmp5)){
			HX_STACK_LINE(517)
			this->__getInteractive(stack);
		}
		else{
			HX_STACK_LINE(521)
			::openfl::display::InteractiveObject tmp6 = this->__focus;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(521)
			tmp6->__getInteractive(stack);
		}
		HX_STACK_LINE(525)
		::openfl::events::TextEvent tmp6 = ::openfl::events::TextEvent_obj::__new(HX_HCSTRING("textInput","\x1d","\x54","\x0b","\x57"),true,false,text);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(525)
		::openfl::events::TextEvent event = tmp6;		HX_STACK_VAR(event,"event");
		HX_STACK_LINE(526)
		bool tmp7 = (stack->length > (int)0);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(526)
		if ((tmp7)){
			HX_STACK_LINE(528)
			stack->reverse();
			HX_STACK_LINE(529)
			::openfl::events::TextEvent tmp8 = event;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(529)
			this->__fireEvent(tmp8,stack);
		}
		else{
			HX_STACK_LINE(533)
			::openfl::events::TextEvent tmp8 = event;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(533)
			this->__dispatchEvent(tmp8);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Stage_obj,onTextInput,(void))

Void Stage_obj::onTouchMove( ::lime::ui::Touch touch){
{
		HX_STACK_FRAME("openfl.display.Stage","onTouchMove",0x34750bf7,"openfl.display.Stage.onTouchMove","openfl/display/Stage.hx",540,0xadca4c2c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(touch,"touch")
		HX_STACK_LINE(542)
		::lime::ui::Touch tmp = touch;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(542)
		this->__onTouch(HX_HCSTRING("touchMove","\x70","\x72","\xcd","\x0d"),tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,onTouchMove,(void))

Void Stage_obj::onTouchEnd( ::lime::ui::Touch touch){
{
		HX_STACK_FRAME("openfl.display.Stage","onTouchEnd",0xc6cff9b5,"openfl.display.Stage.onTouchEnd","openfl/display/Stage.hx",547,0xadca4c2c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(touch,"touch")
		HX_STACK_LINE(549)
		::lime::ui::Touch tmp = touch;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(549)
		this->__onTouch(HX_HCSTRING("touchEnd","\x5c","\xc5","\x09","\x00"),tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,onTouchEnd,(void))

Void Stage_obj::onTouchStart( ::lime::ui::Touch touch){
{
		HX_STACK_FRAME("openfl.display.Stage","onTouchStart",0x299b14bc,"openfl.display.Stage.onTouchStart","openfl/display/Stage.hx",554,0xadca4c2c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(touch,"touch")
		HX_STACK_LINE(556)
		::lime::ui::Touch tmp = touch;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(556)
		this->__onTouch(HX_HCSTRING("touchBegin","\xea","\xcd","\xe6","\xa9"),tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,onTouchStart,(void))

Void Stage_obj::onWindowActivate( ::lime::ui::Window window){
{
		HX_STACK_FRAME("openfl.display.Stage","onWindowActivate",0xcfe358dc,"openfl.display.Stage.onWindowActivate","openfl/display/Stage.hx",561,0xadca4c2c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
		HX_STACK_LINE(563)
		::lime::ui::Window tmp = this->window;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(563)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(563)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(563)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(563)
		if ((tmp2)){
			HX_STACK_LINE(563)
			::lime::ui::Window tmp4 = this->window;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(563)
			::lime::ui::Window tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(563)
			::lime::ui::Window tmp6 = window;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(563)
			tmp3 = (tmp5 != tmp6);
		}
		else{
			HX_STACK_LINE(563)
			tmp3 = true;
		}
		HX_STACK_LINE(563)
		if ((tmp3)){
			HX_STACK_LINE(563)
			return null();
		}
		HX_STACK_LINE(565)
		::openfl::events::Event tmp4 = ::openfl::events::Event_obj::__new(HX_HCSTRING("activate","\xb3","\x1b","\xac","\xe5"),null(),null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(565)
		this->__broadcastEvent(tmp4);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,onWindowActivate,(void))

Void Stage_obj::onWindowClose( ::lime::ui::Window window){
{
		HX_STACK_FRAME("openfl.display.Stage","onWindowClose",0x0c1bf6ef,"openfl.display.Stage.onWindowClose","openfl/display/Stage.hx",570,0xadca4c2c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
		HX_STACK_LINE(572)
		::lime::ui::Window tmp = this->window;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(572)
		::lime::ui::Window tmp1 = window;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(572)
		bool tmp2 = (tmp == tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(572)
		if ((tmp2)){
			HX_STACK_LINE(574)
			this->window = null();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,onWindowClose,(void))

Void Stage_obj::onWindowCreate( ::lime::ui::Window window){
{
		HX_STACK_FRAME("openfl.display.Stage","onWindowCreate",0xfa19d7e5,"openfl.display.Stage.onWindowCreate","openfl/display/Stage.hx",581,0xadca4c2c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
		HX_STACK_LINE(583)
		::lime::ui::Window tmp = this->window;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(583)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(583)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(583)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(583)
		if ((tmp2)){
			HX_STACK_LINE(583)
			::lime::ui::Window tmp4 = this->window;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(583)
			::lime::ui::Window tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(583)
			::lime::ui::Window tmp6 = window;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(583)
			tmp3 = (tmp5 != tmp6);
		}
		else{
			HX_STACK_LINE(583)
			tmp3 = true;
		}
		HX_STACK_LINE(583)
		if ((tmp3)){
			HX_STACK_LINE(583)
			return null();
		}
		HX_STACK_LINE(585)
		bool tmp4 = (window->renderer != null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(585)
		if ((tmp4)){
			HX_STACK_LINE(587)
			{
				HX_STACK_LINE(587)
				::lime::graphics::RenderContext tmp5 = window->renderer->context;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(587)
				::lime::graphics::RenderContext _g = tmp5;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(587)
				switch( (int)(_g->__Index())){
					case (int)0: {
						HX_STACK_LINE(587)
						::lime::graphics::GLRenderContext tmp6 = (::lime::graphics::RenderContext(_g))->__Param(0);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(587)
						::lime::graphics::GLRenderContext gl = tmp6;		HX_STACK_VAR(gl,"gl");
						HX_STACK_LINE(589)
						{
							HX_STACK_LINE(592)
							int tmp7 = this->stageWidth;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(592)
							int tmp8 = this->stageHeight;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(592)
							::lime::graphics::GLRenderContext tmp9 = gl;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(592)
							::openfl::_internal::renderer::opengl::GLRenderer tmp10 = ::openfl::_internal::renderer::opengl::GLRenderer_obj::__new(tmp7,tmp8,tmp9);		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(592)
							this->__renderer = tmp10;
						}
					}
					;break;
					case (int)1: {
						HX_STACK_LINE(587)
						::lime::graphics::CanvasRenderContext tmp6 = (::lime::graphics::RenderContext(_g))->__Param(0);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(587)
						::lime::graphics::CanvasRenderContext context = tmp6;		HX_STACK_VAR(context,"context");
						HX_STACK_LINE(595)
						{
							HX_STACK_LINE(597)
							int tmp7 = this->stageWidth;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(597)
							int tmp8 = this->stageHeight;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(597)
							::lime::graphics::CanvasRenderContext tmp9 = context;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(597)
							::openfl::_internal::renderer::canvas::CanvasRenderer tmp10 = ::openfl::_internal::renderer::canvas::CanvasRenderer_obj::__new(tmp7,tmp8,tmp9);		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(597)
							this->__renderer = tmp10;
						}
					}
					;break;
					case (int)2: {
						HX_STACK_LINE(587)
						::lime::graphics::DOMRenderContext tmp6 = (::lime::graphics::RenderContext(_g))->__Param(0);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(587)
						::lime::graphics::DOMRenderContext element = tmp6;		HX_STACK_VAR(element,"element");
						HX_STACK_LINE(599)
						{
							HX_STACK_LINE(601)
							int tmp7 = this->stageWidth;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(601)
							int tmp8 = this->stageHeight;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(601)
							::lime::graphics::DOMRenderContext tmp9 = element;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(601)
							::openfl::_internal::renderer::dom::DOMRenderer tmp10 = ::openfl::_internal::renderer::dom::DOMRenderer_obj::__new(tmp7,tmp8,tmp9);		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(601)
							this->__renderer = tmp10;
						}
					}
					;break;
					case (int)4: {
						HX_STACK_LINE(587)
						::lime::graphics::cairo::Cairo tmp6 = (::lime::graphics::RenderContext(_g))->__Param(0);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(587)
						::lime::graphics::cairo::Cairo cairo = tmp6;		HX_STACK_VAR(cairo,"cairo");
						HX_STACK_LINE(603)
						{
							HX_STACK_LINE(606)
							int tmp7 = this->stageWidth;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(606)
							int tmp8 = this->stageHeight;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(606)
							::lime::graphics::cairo::Cairo tmp9 = cairo;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(606)
							::openfl::_internal::renderer::cairo::CairoRenderer tmp10 = ::openfl::_internal::renderer::cairo::CairoRenderer_obj::__new(tmp7,tmp8,tmp9);		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(606)
							this->__renderer = tmp10;
						}
					}
					;break;
					case (int)5: {
						HX_STACK_LINE(587)
						::lime::graphics::ConsoleRenderContext tmp6 = (::lime::graphics::RenderContext(_g))->__Param(0);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(587)
						::lime::graphics::ConsoleRenderContext ctx = tmp6;		HX_STACK_VAR(ctx,"ctx");
						HX_STACK_LINE(609)
						{
							HX_STACK_LINE(612)
							int tmp7 = this->stageWidth;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(612)
							int tmp8 = this->stageHeight;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(612)
							::lime::graphics::ConsoleRenderContext tmp9 = ctx;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(612)
							::openfl::_internal::renderer::console::ConsoleRenderer tmp10 = ::openfl::_internal::renderer::console::ConsoleRenderer_obj::__new(tmp7,tmp8,tmp9);		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(612)
							this->__renderer = tmp10;
						}
					}
					;break;
					default: {
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,onWindowCreate,(void))

Void Stage_obj::onWindowDeactivate( ::lime::ui::Window window){
{
		HX_STACK_FRAME("openfl.display.Stage","onWindowDeactivate",0x9060f59d,"openfl.display.Stage.onWindowDeactivate","openfl/display/Stage.hx",624,0xadca4c2c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
		HX_STACK_LINE(626)
		::lime::ui::Window tmp = this->window;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(626)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(626)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(626)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(626)
		if ((tmp2)){
			HX_STACK_LINE(626)
			::lime::ui::Window tmp4 = this->window;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(626)
			::lime::ui::Window tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(626)
			::lime::ui::Window tmp6 = window;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(626)
			tmp3 = (tmp5 != tmp6);
		}
		else{
			HX_STACK_LINE(626)
			tmp3 = true;
		}
		HX_STACK_LINE(626)
		if ((tmp3)){
			HX_STACK_LINE(626)
			return null();
		}
		HX_STACK_LINE(628)
		::openfl::events::Event tmp4 = ::openfl::events::Event_obj::__new(HX_HCSTRING("deactivate","\x34","\x5c","\x01","\x3c"),null(),null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(628)
		this->__broadcastEvent(tmp4);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,onWindowDeactivate,(void))

Void Stage_obj::onWindowDropFile( ::lime::ui::Window window,::String file){
{
		HX_STACK_FRAME("openfl.display.Stage","onWindowDropFile",0xd38db374,"openfl.display.Stage.onWindowDropFile","openfl/display/Stage.hx",633,0xadca4c2c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
		HX_STACK_ARG(file,"file")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Stage_obj,onWindowDropFile,(void))

Void Stage_obj::onWindowEnter( ::lime::ui::Window window){
{
		HX_STACK_FRAME("openfl.display.Stage","onWindowEnter",0x343f4c4f,"openfl.display.Stage.onWindowEnter","openfl/display/Stage.hx",640,0xadca4c2c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,onWindowEnter,(void))

Void Stage_obj::onWindowFocusIn( ::lime::ui::Window window){
{
		HX_STACK_FRAME("openfl.display.Stage","onWindowFocusIn",0x0c9ba0d4,"openfl.display.Stage.onWindowFocusIn","openfl/display/Stage.hx",647,0xadca4c2c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
		HX_STACK_LINE(649)
		::lime::ui::Window tmp = this->window;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(649)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(649)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(649)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(649)
		if ((tmp2)){
			HX_STACK_LINE(649)
			::lime::ui::Window tmp4 = this->window;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(649)
			::lime::ui::Window tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(649)
			::lime::ui::Window tmp6 = window;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(649)
			tmp3 = (tmp5 != tmp6);
		}
		else{
			HX_STACK_LINE(649)
			tmp3 = true;
		}
		HX_STACK_LINE(649)
		if ((tmp3)){
			HX_STACK_LINE(649)
			return null();
		}
		HX_STACK_LINE(651)
		::openfl::display::InteractiveObject tmp4 = this->__cacheFocus;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(651)
		this->set_focus(tmp4);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,onWindowFocusIn,(void))

Void Stage_obj::onWindowFocusOut( ::lime::ui::Window window){
{
		HX_STACK_FRAME("openfl.display.Stage","onWindowFocusOut",0xfb95acbf,"openfl.display.Stage.onWindowFocusOut","openfl/display/Stage.hx",656,0xadca4c2c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
		HX_STACK_LINE(658)
		::lime::ui::Window tmp = this->window;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(658)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(658)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(658)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(658)
		if ((tmp2)){
			HX_STACK_LINE(658)
			::lime::ui::Window tmp4 = this->window;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(658)
			::lime::ui::Window tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(658)
			::lime::ui::Window tmp6 = window;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(658)
			tmp3 = (tmp5 != tmp6);
		}
		else{
			HX_STACK_LINE(658)
			tmp3 = true;
		}
		HX_STACK_LINE(658)
		if ((tmp3)){
			HX_STACK_LINE(658)
			return null();
		}
		HX_STACK_LINE(660)
		::openfl::display::InteractiveObject tmp4 = this->get_focus();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(660)
		this->__cacheFocus = tmp4;
		HX_STACK_LINE(661)
		this->set_focus(null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,onWindowFocusOut,(void))

Void Stage_obj::onWindowFullscreen( ::lime::ui::Window window){
{
		HX_STACK_FRAME("openfl.display.Stage","onWindowFullscreen",0x4e13d3a4,"openfl.display.Stage.onWindowFullscreen","openfl/display/Stage.hx",666,0xadca4c2c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
		HX_STACK_LINE(668)
		::lime::ui::Window tmp = this->window;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(668)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(668)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(668)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(668)
		if ((tmp2)){
			HX_STACK_LINE(668)
			::lime::ui::Window tmp4 = this->window;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(668)
			::lime::ui::Window tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(668)
			::lime::ui::Window tmp6 = window;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(668)
			tmp3 = (tmp5 != tmp6);
		}
		else{
			HX_STACK_LINE(668)
			tmp3 = true;
		}
		HX_STACK_LINE(668)
		if ((tmp3)){
			HX_STACK_LINE(668)
			return null();
		}
		HX_STACK_LINE(670)
		Dynamic tmp4 = this->__displayState;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(670)
		bool tmp5 = (tmp4 == ((Dynamic)((int)2)));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(670)
		if ((tmp5)){
			HX_STACK_LINE(672)
			this->__displayState = ((Dynamic)((int)1));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,onWindowFullscreen,(void))

Void Stage_obj::onWindowLeave( ::lime::ui::Window window){
{
		HX_STACK_FRAME("openfl.display.Stage","onWindowLeave",0x360c142e,"openfl.display.Stage.onWindowLeave","openfl/display/Stage.hx",679,0xadca4c2c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
		HX_STACK_LINE(681)
		::lime::ui::Window tmp = this->window;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(681)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(681)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(681)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(681)
		if ((tmp2)){
			HX_STACK_LINE(681)
			::lime::ui::Window tmp4 = this->window;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(681)
			::lime::ui::Window tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(681)
			::lime::ui::Window tmp6 = window;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(681)
			tmp3 = (tmp5 != tmp6);
		}
		else{
			HX_STACK_LINE(681)
			tmp3 = true;
		}
		HX_STACK_LINE(681)
		if ((tmp3)){
			HX_STACK_LINE(681)
			return null();
		}
		HX_STACK_LINE(683)
		::openfl::events::Event tmp4 = ::openfl::events::Event_obj::__new(HX_HCSTRING("mouseLeave","\x92","\x28","\x20","\x90"),null(),null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(683)
		this->__dispatchEvent(tmp4);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,onWindowLeave,(void))

Void Stage_obj::onWindowMinimize( ::lime::ui::Window window){
{
		HX_STACK_FRAME("openfl.display.Stage","onWindowMinimize",0x0bb07c47,"openfl.display.Stage.onWindowMinimize","openfl/display/Stage.hx",688,0xadca4c2c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,onWindowMinimize,(void))

Void Stage_obj::onWindowMove( ::lime::ui::Window window,Float x,Float y){
{
		HX_STACK_FRAME("openfl.display.Stage","onWindowMove",0x7f3617ba,"openfl.display.Stage.onWindowMove","openfl/display/Stage.hx",695,0xadca4c2c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Stage_obj,onWindowMove,(void))

Void Stage_obj::onWindowResize( ::lime::ui::Window window,int width,int height){
{
		HX_STACK_FRAME("openfl.display.Stage","onWindowResize",0x8685cadd,"openfl.display.Stage.onWindowResize","openfl/display/Stage.hx",702,0xadca4c2c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_LINE(704)
		::lime::ui::Window tmp = this->window;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(704)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(704)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(704)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(704)
		if ((tmp2)){
			HX_STACK_LINE(704)
			::lime::ui::Window tmp4 = this->window;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(704)
			::lime::ui::Window tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(704)
			::lime::ui::Window tmp6 = window;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(704)
			tmp3 = (tmp5 != tmp6);
		}
		else{
			HX_STACK_LINE(704)
			tmp3 = true;
		}
		HX_STACK_LINE(704)
		if ((tmp3)){
			HX_STACK_LINE(704)
			return null();
		}
		HX_STACK_LINE(706)
		Dynamic tmp4 = this->__displayState;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(706)
		bool tmp5 = (tmp4 != ((Dynamic)((int)2)));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(706)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(706)
		if ((tmp5)){
			HX_STACK_LINE(706)
			bool tmp7 = window->__fullscreen;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(706)
			bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(706)
			tmp6 = !(tmp8);
		}
		else{
			HX_STACK_LINE(706)
			tmp6 = false;
		}
		HX_STACK_LINE(706)
		if ((tmp6)){
			HX_STACK_LINE(708)
			this->__displayState = ((Dynamic)((int)2));
		}
		HX_STACK_LINE(712)
		this->__resize();
		HX_STACK_LINE(714)
		::openfl::events::Event tmp7 = ::openfl::events::Event_obj::__new(HX_HCSTRING("resize","\xf4","\x59","\x7b","\x08"),null(),null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(714)
		this->__dispatchEvent(tmp7);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Stage_obj,onWindowResize,(void))

Void Stage_obj::onWindowRestore( ::lime::ui::Window window){
{
		HX_STACK_FRAME("openfl.display.Stage","onWindowRestore",0x35c8c245,"openfl.display.Stage.onWindowRestore","openfl/display/Stage.hx",719,0xadca4c2c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,onWindowRestore,(void))

Void Stage_obj::render( ::lime::graphics::Renderer renderer){
{
		HX_STACK_FRAME("openfl.display.Stage","render",0x050c3670,"openfl.display.Stage.render","openfl/display/Stage.hx",726,0xadca4c2c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderer,"renderer")
		HX_STACK_LINE(728)
		bool tmp = (renderer->window == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(728)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(728)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(728)
		if ((tmp1)){
			HX_STACK_LINE(728)
			::lime::ui::Window tmp3 = renderer->window;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(728)
			::lime::ui::Window tmp4 = this->window;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(728)
			::lime::ui::Window tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(728)
			tmp2 = (tmp3 != tmp5);
		}
		else{
			HX_STACK_LINE(728)
			tmp2 = true;
		}
		HX_STACK_LINE(728)
		if ((tmp2)){
			HX_STACK_LINE(728)
			return null();
		}
		HX_STACK_LINE(732)
		::lime::app::Application tmp3 = this->application;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(732)
		bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(732)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(732)
		if ((tmp4)){
			HX_STACK_LINE(732)
			::lime::app::Application tmp6 = this->application;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(732)
			::lime::app::Application tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(732)
			int tmp8 = tmp7->__windows->length;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(732)
			int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(732)
			tmp5 = (tmp9 > (int)0);
		}
		else{
			HX_STACK_LINE(732)
			tmp5 = false;
		}
		HX_STACK_LINE(732)
		if ((tmp5)){
			HX_STACK_LINE(734)
			{
				HX_STACK_LINE(734)
				bool tmp6 = this->__transformDirty;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(734)
				bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(734)
				if ((tmp7)){
					HX_STACK_LINE(734)
					this->__transformDirty = true;
					HX_STACK_LINE(734)
					(::openfl::display::DisplayObject_obj::__worldTransformDirty)++;
				}
			}
			HX_STACK_LINE(735)
			{
				HX_STACK_LINE(735)
				bool tmp6 = this->__renderDirty;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(735)
				bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(735)
				if ((tmp7)){
					HX_STACK_LINE(735)
					this->__renderDirty = true;
					HX_STACK_LINE(735)
					(::openfl::display::DisplayObject_obj::__worldRenderDirty)++;
				}
			}
		}
		HX_STACK_LINE(739)
		bool tmp6 = this->__rendering;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(739)
		if ((tmp6)){
			HX_STACK_LINE(739)
			return null();
		}
		HX_STACK_LINE(740)
		this->__rendering = true;
		HX_STACK_LINE(746)
		::openfl::_internal::renderer::AbstractRenderer tmp7 = this->__renderer;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(746)
		bool tmp8 = (tmp7 != null());		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(746)
		if ((tmp8)){
			HX_STACK_LINE(748)
			::openfl::_internal::renderer::AbstractRenderer tmp9 = this->__renderer;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(748)
			tmp9->init(hx::ObjectPtr<OBJ_>(this));
		}
		HX_STACK_LINE(752)
		::openfl::events::Event tmp9 = ::openfl::events::Event_obj::__new(HX_HCSTRING("enterFrame","\xf5","\x03","\x50","\x02"),null(),null());		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(752)
		this->__broadcastEvent(tmp9);
		HX_STACK_LINE(753)
		::openfl::events::Event tmp10 = ::openfl::events::Event_obj::__new(HX_HCSTRING("exitFrame","\x2f","\x64","\x48","\x12"),null(),null());		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(753)
		this->__broadcastEvent(tmp10);
		HX_STACK_LINE(755)
		bool tmp11 = this->__invalidated;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(755)
		if ((tmp11)){
			HX_STACK_LINE(757)
			this->__invalidated = false;
			HX_STACK_LINE(758)
			::openfl::events::Event tmp12 = ::openfl::events::Event_obj::__new(HX_HCSTRING("render","\x56","\x6b","\x29","\x05"),null(),null());		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(758)
			this->__broadcastEvent(tmp12);
		}
		HX_STACK_LINE(767)
		this->__renderable = true;
		HX_STACK_LINE(769)
		int tmp12 = this->__deltaTime;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(769)
		this->__enterFrame(tmp12);
		HX_STACK_LINE(770)
		this->__deltaTime = (int)0;
		HX_STACK_LINE(771)
		this->__update(false,true,null());
		HX_STACK_LINE(773)
		::openfl::_internal::renderer::AbstractRenderer tmp13 = this->__renderer;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(773)
		bool tmp14 = (tmp13 != null());		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(773)
		if ((tmp14)){
			HX_STACK_LINE(775)
			bool tmp15 = (renderer->type == ::lime::graphics::RendererType_obj::CAIRO);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(775)
			if ((tmp15)){
				HX_STACK_LINE(777)
				{
					HX_STACK_LINE(777)
					::lime::graphics::RenderContext _g = renderer->context;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(777)
					switch( (int)(_g->__Index())){
						case (int)4: {
							HX_STACK_LINE(777)
							::lime::graphics::cairo::Cairo tmp16 = (::lime::graphics::RenderContext(_g))->__Param(0);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(777)
							::lime::graphics::cairo::Cairo cairo = tmp16;		HX_STACK_VAR(cairo,"cairo");
							HX_STACK_LINE(779)
							{
								HX_STACK_LINE(781)
								::openfl::_internal::renderer::AbstractRenderer tmp17 = this->__renderer;		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(781)
								::openfl::_internal::renderer::cairo::CairoRenderer tmp18;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(781)
								tmp18 = hx::TCast< ::openfl::_internal::renderer::cairo::CairoRenderer >::cast(tmp17);
								HX_STACK_LINE(781)
								tmp18->cairo = cairo;
								HX_STACK_LINE(782)
								::openfl::_internal::renderer::AbstractRenderer tmp19 = this->__renderer;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(782)
								tmp19->renderSession->cairo = cairo;
							}
						}
						;break;
						default: {
						}
					}
				}
			}
			HX_STACK_LINE(790)
			::openfl::_internal::renderer::AbstractRenderer tmp16 = this->__renderer;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(790)
			tmp16->render(hx::ObjectPtr<OBJ_>(this));
		}
		HX_STACK_LINE(799)
		this->__rendering = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,render,(void))

Void Stage_obj::update( int deltaTime){
{
		HX_STACK_FRAME("openfl.display.Stage","update",0x86e85123,"openfl.display.Stage.update","openfl/display/Stage.hx",806,0xadca4c2c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(deltaTime,"deltaTime")
		HX_STACK_LINE(806)
		this->__deltaTime = deltaTime;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,update,(void))

Void Stage_obj::__broadcastEvent( ::openfl::events::Event event){
{
		HX_STACK_FRAME("openfl.display.Stage","__broadcastEvent",0x79aa0c13,"openfl.display.Stage.__broadcastEvent","openfl/display/Stage.hx",811,0xadca4c2c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(813)
		::haxe::ds::StringMap tmp = ::openfl::display::DisplayObject_obj::__broadcastEvents;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(813)
		::String tmp1 = event->type;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(813)
		bool tmp2 = tmp->exists(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(813)
		if ((tmp2)){
			HX_STACK_LINE(815)
			::haxe::ds::StringMap tmp3 = ::openfl::display::DisplayObject_obj::__broadcastEvents;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(815)
			::String tmp4 = event->type;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(815)
			Array< ::Dynamic > dispatchers = ((Array< ::Dynamic >)(tmp3->get(tmp4)));		HX_STACK_VAR(dispatchers,"dispatchers");
			HX_STACK_LINE(817)
			{
				HX_STACK_LINE(817)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(817)
				while((true)){
					HX_STACK_LINE(817)
					bool tmp5 = (_g < dispatchers->length);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(817)
					bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(817)
					if ((tmp6)){
						HX_STACK_LINE(817)
						break;
					}
					HX_STACK_LINE(817)
					::openfl::display::DisplayObject tmp7 = dispatchers->__get(_g).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(817)
					::openfl::display::DisplayObject dispatcher = tmp7;		HX_STACK_VAR(dispatcher,"dispatcher");
					HX_STACK_LINE(817)
					++(_g);
					HX_STACK_LINE(819)
					::openfl::events::Event tmp8 = event;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(819)
					dispatcher->__dispatch(tmp8);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,__broadcastEvent,(void))

Void Stage_obj::__drag( ::openfl::geom::Point mouse){
{
		HX_STACK_FRAME("openfl.display.Stage","__drag",0xf14b5a2e,"openfl.display.Stage.__drag","openfl/display/Stage.hx",828,0xadca4c2c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(mouse,"mouse")
		HX_STACK_LINE(830)
		::openfl::display::Sprite tmp = this->__dragObject;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(830)
		::openfl::display::DisplayObjectContainer parent = tmp->parent;		HX_STACK_VAR(parent,"parent");
		HX_STACK_LINE(831)
		bool tmp1 = (parent != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(831)
		if ((tmp1)){
			HX_STACK_LINE(833)
			::openfl::geom::Point tmp2 = mouse;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(833)
			::openfl::geom::Point tmp3 = parent->globalToLocal(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(833)
			mouse = tmp3;
		}
		HX_STACK_LINE(837)
		Float tmp2 = mouse->x;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(837)
		Float tmp3 = this->__dragOffsetX;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(837)
		Float tmp4 = (tmp2 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(837)
		Float x = tmp4;		HX_STACK_VAR(x,"x");
		HX_STACK_LINE(838)
		Float tmp5 = mouse->y;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(838)
		Float tmp6 = this->__dragOffsetY;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(838)
		Float tmp7 = (tmp5 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(838)
		Float y = tmp7;		HX_STACK_VAR(y,"y");
		HX_STACK_LINE(840)
		::openfl::geom::Rectangle tmp8 = this->__dragBounds;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(840)
		bool tmp9 = (tmp8 != null());		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(840)
		if ((tmp9)){
			HX_STACK_LINE(842)
			Float tmp10 = x;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(842)
			::openfl::geom::Rectangle tmp11 = this->__dragBounds;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(842)
			Float tmp12 = tmp11->x;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(842)
			bool tmp13 = (tmp10 < tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(842)
			if ((tmp13)){
				HX_STACK_LINE(844)
				::openfl::geom::Rectangle tmp14 = this->__dragBounds;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(844)
				x = tmp14->x;
			}
			else{
				HX_STACK_LINE(846)
				Float tmp14 = x;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(846)
				::openfl::geom::Rectangle tmp15 = this->__dragBounds;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(846)
				Float tmp16 = tmp15->get_right();		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(846)
				bool tmp17 = (tmp14 > tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(846)
				if ((tmp17)){
					HX_STACK_LINE(848)
					::openfl::geom::Rectangle tmp18 = this->__dragBounds;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(848)
					Float tmp19 = tmp18->get_right();		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(848)
					x = tmp19;
				}
			}
			HX_STACK_LINE(852)
			Float tmp14 = y;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(852)
			::openfl::geom::Rectangle tmp15 = this->__dragBounds;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(852)
			Float tmp16 = tmp15->y;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(852)
			bool tmp17 = (tmp14 < tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(852)
			if ((tmp17)){
				HX_STACK_LINE(854)
				::openfl::geom::Rectangle tmp18 = this->__dragBounds;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(854)
				y = tmp18->y;
			}
			else{
				HX_STACK_LINE(856)
				Float tmp18 = y;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(856)
				::openfl::geom::Rectangle tmp19 = this->__dragBounds;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(856)
				Float tmp20 = tmp19->get_bottom();		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(856)
				bool tmp21 = (tmp18 > tmp20);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(856)
				if ((tmp21)){
					HX_STACK_LINE(858)
					::openfl::geom::Rectangle tmp22 = this->__dragBounds;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(858)
					Float tmp23 = tmp22->get_bottom();		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(858)
					y = tmp23;
				}
			}
		}
		HX_STACK_LINE(864)
		::openfl::display::Sprite tmp10 = this->__dragObject;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(864)
		Float tmp11 = x;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(864)
		tmp10->set_x(tmp11);
		HX_STACK_LINE(865)
		::openfl::display::Sprite tmp12 = this->__dragObject;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(865)
		Float tmp13 = y;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(865)
		tmp12->set_y(tmp13);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,__drag,(void))

Void Stage_obj::__fireEvent( ::openfl::events::Event event,Array< ::Dynamic > stack){
{
		HX_STACK_FRAME("openfl.display.Stage","__fireEvent",0xa3fe300a,"openfl.display.Stage.__fireEvent","openfl/display/Stage.hx",870,0xadca4c2c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_ARG(stack,"stack")
		HX_STACK_LINE(872)
		int length = stack->length;		HX_STACK_VAR(length,"length");
		HX_STACK_LINE(874)
		bool tmp = (length == (int)0);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(874)
		if ((tmp)){
			HX_STACK_LINE(876)
			event->eventPhase = (int)2;
			HX_STACK_LINE(877)
			event->target->__Field(HX_HCSTRING("__dispatch","\xda","\x41","\x9c","\xc1"), hx::paccDynamic )(event);
		}
		else{
			HX_STACK_LINE(881)
			event->eventPhase = (int)1;
			HX_STACK_LINE(882)
			int tmp1 = (stack->length - (int)1);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(882)
			::openfl::display::DisplayObject tmp2 = stack->__get(tmp1).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(882)
			event->target = tmp2;
			HX_STACK_LINE(884)
			{
				HX_STACK_LINE(884)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(884)
				int tmp3 = (length - (int)1);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(884)
				int _g = tmp3;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(884)
				while((true)){
					HX_STACK_LINE(884)
					bool tmp4 = (_g1 < _g);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(884)
					bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(884)
					if ((tmp5)){
						HX_STACK_LINE(884)
						break;
					}
					HX_STACK_LINE(884)
					int tmp6 = (_g1)++;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(884)
					int i = tmp6;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(886)
					::openfl::display::DisplayObject tmp7 = stack->__get(i).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(886)
					::openfl::events::Event tmp8 = event;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(886)
					tmp7->__dispatch(tmp8);
					HX_STACK_LINE(888)
					bool tmp9 = event->__isCanceled;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(888)
					if ((tmp9)){
						HX_STACK_LINE(890)
						return null();
					}
				}
			}
			HX_STACK_LINE(896)
			event->eventPhase = (int)2;
			HX_STACK_LINE(897)
			event->target->__Field(HX_HCSTRING("__dispatch","\xda","\x41","\x9c","\xc1"), hx::paccDynamic )(event);
			HX_STACK_LINE(899)
			bool tmp3 = event->__isCanceled;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(899)
			if ((tmp3)){
				HX_STACK_LINE(901)
				return null();
			}
			HX_STACK_LINE(905)
			bool tmp4 = event->bubbles;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(905)
			if ((tmp4)){
				HX_STACK_LINE(907)
				event->eventPhase = (int)3;
				HX_STACK_LINE(908)
				int tmp5 = (length - (int)2);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(908)
				int i = tmp5;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(910)
				while((true)){
					HX_STACK_LINE(910)
					bool tmp6 = (i >= (int)0);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(910)
					bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(910)
					if ((tmp7)){
						HX_STACK_LINE(910)
						break;
					}
					HX_STACK_LINE(912)
					::openfl::display::DisplayObject tmp8 = stack->__get(i).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(912)
					::openfl::events::Event tmp9 = event;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(912)
					tmp8->__dispatch(tmp9);
					HX_STACK_LINE(914)
					bool tmp10 = event->__isCanceled;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(914)
					if ((tmp10)){
						HX_STACK_LINE(916)
						return null();
					}
					HX_STACK_LINE(920)
					(i)--;
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Stage_obj,__fireEvent,(void))

bool Stage_obj::__getInteractive( Array< ::Dynamic > stack){
	HX_STACK_FRAME("openfl.display.Stage","__getInteractive",0xdc3c8ba6,"openfl.display.Stage.__getInteractive","openfl/display/Stage.hx",931,0xadca4c2c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(stack,"stack")
	HX_STACK_LINE(933)
	bool tmp = (stack != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(933)
	if ((tmp)){
		HX_STACK_LINE(935)
		stack->push(hx::ObjectPtr<OBJ_>(this));
	}
	HX_STACK_LINE(939)
	return true;
}


Void Stage_obj::__onKey( ::String type,int keyCode,int modifier){
{
		HX_STACK_FRAME("openfl.display.Stage","__onKey",0x83566246,"openfl.display.Stage.__onKey","openfl/display/Stage.hx",944,0xadca4c2c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(type,"type")
		HX_STACK_ARG(keyCode,"keyCode")
		HX_STACK_ARG(modifier,"modifier")
		HX_STACK_LINE(946)
		int tmp = modifier;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(946)
		bool tmp1 = ::lime::ui::_KeyModifier::KeyModifier_Impl__obj::get_altKey(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(946)
		::openfl::events::MouseEvent_obj::__altKey = tmp1;
		HX_STACK_LINE(947)
		int tmp2 = modifier;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(947)
		bool tmp3 = ::lime::ui::_KeyModifier::KeyModifier_Impl__obj::get_metaKey(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(947)
		::openfl::events::MouseEvent_obj::__commandKey = tmp3;
		HX_STACK_LINE(948)
		int tmp4 = modifier;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(948)
		bool tmp5 = ::lime::ui::_KeyModifier::KeyModifier_Impl__obj::get_ctrlKey(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(948)
		::openfl::events::MouseEvent_obj::__ctrlKey = tmp5;
		HX_STACK_LINE(949)
		int tmp6 = modifier;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(949)
		bool tmp7 = ::lime::ui::_KeyModifier::KeyModifier_Impl__obj::get_shiftKey(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(949)
		::openfl::events::MouseEvent_obj::__shiftKey = tmp7;
		HX_STACK_LINE(951)
		Array< ::Dynamic > stack = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(stack,"stack");
		HX_STACK_LINE(953)
		::openfl::display::InteractiveObject tmp8 = this->__focus;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(953)
		bool tmp9 = (tmp8 == null());		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(953)
		if ((tmp9)){
			HX_STACK_LINE(955)
			this->__getInteractive(stack);
		}
		else{
			HX_STACK_LINE(959)
			::openfl::display::InteractiveObject tmp10 = this->__focus;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(959)
			tmp10->__getInteractive(stack);
		}
		HX_STACK_LINE(963)
		bool tmp10 = (stack->length > (int)0);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(963)
		if ((tmp10)){
			HX_STACK_LINE(965)
			int tmp11 = keyCode;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(965)
			int tmp12;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(965)
			switch( (int)(tmp11)){
				case (int)1073742048: case (int)1073742049: case (int)1073742050: case (int)1073742051: {
					HX_STACK_LINE(965)
					tmp12 = (int)1;
				}
				;break;
				case (int)1073742052: case (int)1073742053: case (int)1073742054: case (int)1073742055: {
					HX_STACK_LINE(965)
					tmp12 = (int)2;
				}
				;break;
				case (int)1073741908: case (int)1073741909: case (int)1073741910: case (int)1073741911: case (int)1073741912: case (int)1073741913: case (int)1073741914: case (int)1073741915: case (int)1073741916: case (int)1073741917: case (int)1073741918: case (int)1073741919: case (int)1073741920: case (int)1073741921: case (int)1073741922: case (int)1073741923: case (int)1073742044: {
					HX_STACK_LINE(965)
					tmp12 = (int)3;
				}
				;break;
				default: {
					HX_STACK_LINE(965)
					tmp12 = (int)0;
				}
			}
			HX_STACK_LINE(965)
			int keyLocation = tmp12;		HX_STACK_VAR(keyLocation,"keyLocation");
			HX_STACK_LINE(966)
			int tmp13 = keyCode;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(966)
			int tmp14;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(966)
			switch( (int)(tmp13)){
				case (int)8: {
					HX_STACK_LINE(966)
					tmp14 = (int)8;
				}
				;break;
				case (int)9: {
					HX_STACK_LINE(966)
					tmp14 = (int)9;
				}
				;break;
				case (int)13: {
					HX_STACK_LINE(966)
					tmp14 = (int)13;
				}
				;break;
				case (int)27: {
					HX_STACK_LINE(966)
					tmp14 = (int)27;
				}
				;break;
				case (int)32: {
					HX_STACK_LINE(966)
					tmp14 = (int)32;
				}
				;break;
				case (int)33: {
					HX_STACK_LINE(966)
					tmp14 = (int)49;
				}
				;break;
				case (int)34: {
					HX_STACK_LINE(966)
					tmp14 = (int)222;
				}
				;break;
				case (int)35: {
					HX_STACK_LINE(966)
					tmp14 = (int)51;
				}
				;break;
				case (int)36: {
					HX_STACK_LINE(966)
					tmp14 = (int)52;
				}
				;break;
				case (int)37: {
					HX_STACK_LINE(966)
					tmp14 = (int)53;
				}
				;break;
				case (int)38: {
					HX_STACK_LINE(966)
					tmp14 = (int)55;
				}
				;break;
				case (int)39: {
					HX_STACK_LINE(966)
					tmp14 = (int)222;
				}
				;break;
				case (int)40: {
					HX_STACK_LINE(966)
					tmp14 = (int)57;
				}
				;break;
				case (int)41: {
					HX_STACK_LINE(966)
					tmp14 = (int)48;
				}
				;break;
				case (int)42: {
					HX_STACK_LINE(966)
					tmp14 = (int)56;
				}
				;break;
				case (int)44: {
					HX_STACK_LINE(966)
					tmp14 = (int)188;
				}
				;break;
				case (int)45: {
					HX_STACK_LINE(966)
					tmp14 = (int)189;
				}
				;break;
				case (int)46: {
					HX_STACK_LINE(966)
					tmp14 = (int)190;
				}
				;break;
				case (int)47: {
					HX_STACK_LINE(966)
					tmp14 = (int)191;
				}
				;break;
				case (int)48: {
					HX_STACK_LINE(966)
					tmp14 = (int)48;
				}
				;break;
				case (int)49: {
					HX_STACK_LINE(966)
					tmp14 = (int)49;
				}
				;break;
				case (int)50: {
					HX_STACK_LINE(966)
					tmp14 = (int)50;
				}
				;break;
				case (int)51: {
					HX_STACK_LINE(966)
					tmp14 = (int)51;
				}
				;break;
				case (int)52: {
					HX_STACK_LINE(966)
					tmp14 = (int)52;
				}
				;break;
				case (int)53: {
					HX_STACK_LINE(966)
					tmp14 = (int)53;
				}
				;break;
				case (int)54: {
					HX_STACK_LINE(966)
					tmp14 = (int)54;
				}
				;break;
				case (int)55: {
					HX_STACK_LINE(966)
					tmp14 = (int)55;
				}
				;break;
				case (int)56: {
					HX_STACK_LINE(966)
					tmp14 = (int)56;
				}
				;break;
				case (int)57: {
					HX_STACK_LINE(966)
					tmp14 = (int)57;
				}
				;break;
				case (int)58: {
					HX_STACK_LINE(966)
					tmp14 = (int)186;
				}
				;break;
				case (int)59: {
					HX_STACK_LINE(966)
					tmp14 = (int)186;
				}
				;break;
				case (int)60: {
					HX_STACK_LINE(966)
					tmp14 = (int)60;
				}
				;break;
				case (int)61: {
					HX_STACK_LINE(966)
					tmp14 = (int)187;
				}
				;break;
				case (int)62: {
					HX_STACK_LINE(966)
					tmp14 = (int)190;
				}
				;break;
				case (int)63: {
					HX_STACK_LINE(966)
					tmp14 = (int)191;
				}
				;break;
				case (int)64: {
					HX_STACK_LINE(966)
					tmp14 = (int)50;
				}
				;break;
				case (int)91: {
					HX_STACK_LINE(966)
					tmp14 = (int)219;
				}
				;break;
				case (int)92: {
					HX_STACK_LINE(966)
					tmp14 = (int)220;
				}
				;break;
				case (int)93: {
					HX_STACK_LINE(966)
					tmp14 = (int)221;
				}
				;break;
				case (int)94: {
					HX_STACK_LINE(966)
					tmp14 = (int)54;
				}
				;break;
				case (int)95: {
					HX_STACK_LINE(966)
					tmp14 = (int)189;
				}
				;break;
				case (int)96: {
					HX_STACK_LINE(966)
					tmp14 = (int)192;
				}
				;break;
				case (int)97: {
					HX_STACK_LINE(966)
					tmp14 = (int)65;
				}
				;break;
				case (int)98: {
					HX_STACK_LINE(966)
					tmp14 = (int)66;
				}
				;break;
				case (int)99: {
					HX_STACK_LINE(966)
					tmp14 = (int)67;
				}
				;break;
				case (int)100: {
					HX_STACK_LINE(966)
					tmp14 = (int)68;
				}
				;break;
				case (int)101: {
					HX_STACK_LINE(966)
					tmp14 = (int)69;
				}
				;break;
				case (int)102: {
					HX_STACK_LINE(966)
					tmp14 = (int)70;
				}
				;break;
				case (int)103: {
					HX_STACK_LINE(966)
					tmp14 = (int)71;
				}
				;break;
				case (int)104: {
					HX_STACK_LINE(966)
					tmp14 = (int)72;
				}
				;break;
				case (int)105: {
					HX_STACK_LINE(966)
					tmp14 = (int)73;
				}
				;break;
				case (int)106: {
					HX_STACK_LINE(966)
					tmp14 = (int)74;
				}
				;break;
				case (int)107: {
					HX_STACK_LINE(966)
					tmp14 = (int)75;
				}
				;break;
				case (int)108: {
					HX_STACK_LINE(966)
					tmp14 = (int)76;
				}
				;break;
				case (int)109: {
					HX_STACK_LINE(966)
					tmp14 = (int)77;
				}
				;break;
				case (int)110: {
					HX_STACK_LINE(966)
					tmp14 = (int)78;
				}
				;break;
				case (int)111: {
					HX_STACK_LINE(966)
					tmp14 = (int)79;
				}
				;break;
				case (int)112: {
					HX_STACK_LINE(966)
					tmp14 = (int)80;
				}
				;break;
				case (int)113: {
					HX_STACK_LINE(966)
					tmp14 = (int)81;
				}
				;break;
				case (int)114: {
					HX_STACK_LINE(966)
					tmp14 = (int)82;
				}
				;break;
				case (int)115: {
					HX_STACK_LINE(966)
					tmp14 = (int)83;
				}
				;break;
				case (int)116: {
					HX_STACK_LINE(966)
					tmp14 = (int)84;
				}
				;break;
				case (int)117: {
					HX_STACK_LINE(966)
					tmp14 = (int)85;
				}
				;break;
				case (int)118: {
					HX_STACK_LINE(966)
					tmp14 = (int)86;
				}
				;break;
				case (int)119: {
					HX_STACK_LINE(966)
					tmp14 = (int)87;
				}
				;break;
				case (int)120: {
					HX_STACK_LINE(966)
					tmp14 = (int)88;
				}
				;break;
				case (int)121: {
					HX_STACK_LINE(966)
					tmp14 = (int)89;
				}
				;break;
				case (int)122: {
					HX_STACK_LINE(966)
					tmp14 = (int)90;
				}
				;break;
				case (int)127: {
					HX_STACK_LINE(966)
					tmp14 = (int)46;
				}
				;break;
				case (int)1073741881: {
					HX_STACK_LINE(966)
					tmp14 = (int)20;
				}
				;break;
				case (int)1073741882: {
					HX_STACK_LINE(966)
					tmp14 = (int)112;
				}
				;break;
				case (int)1073741883: {
					HX_STACK_LINE(966)
					tmp14 = (int)113;
				}
				;break;
				case (int)1073741884: {
					HX_STACK_LINE(966)
					tmp14 = (int)114;
				}
				;break;
				case (int)1073741885: {
					HX_STACK_LINE(966)
					tmp14 = (int)115;
				}
				;break;
				case (int)1073741886: {
					HX_STACK_LINE(966)
					tmp14 = (int)116;
				}
				;break;
				case (int)1073741887: {
					HX_STACK_LINE(966)
					tmp14 = (int)117;
				}
				;break;
				case (int)1073741888: {
					HX_STACK_LINE(966)
					tmp14 = (int)118;
				}
				;break;
				case (int)1073741889: {
					HX_STACK_LINE(966)
					tmp14 = (int)119;
				}
				;break;
				case (int)1073741890: {
					HX_STACK_LINE(966)
					tmp14 = (int)120;
				}
				;break;
				case (int)1073741891: {
					HX_STACK_LINE(966)
					tmp14 = (int)121;
				}
				;break;
				case (int)1073741892: {
					HX_STACK_LINE(966)
					tmp14 = (int)122;
				}
				;break;
				case (int)1073741893: {
					HX_STACK_LINE(966)
					tmp14 = (int)123;
				}
				;break;
				case (int)1073741894: {
					HX_STACK_LINE(966)
					tmp14 = (int)301;
				}
				;break;
				case (int)1073741895: {
					HX_STACK_LINE(966)
					tmp14 = (int)145;
				}
				;break;
				case (int)1073741896: {
					HX_STACK_LINE(966)
					tmp14 = (int)19;
				}
				;break;
				case (int)1073741897: {
					HX_STACK_LINE(966)
					tmp14 = (int)45;
				}
				;break;
				case (int)1073741898: {
					HX_STACK_LINE(966)
					tmp14 = (int)36;
				}
				;break;
				case (int)1073741899: {
					HX_STACK_LINE(966)
					tmp14 = (int)33;
				}
				;break;
				case (int)1073741901: {
					HX_STACK_LINE(966)
					tmp14 = (int)35;
				}
				;break;
				case (int)1073741902: {
					HX_STACK_LINE(966)
					tmp14 = (int)34;
				}
				;break;
				case (int)1073741903: {
					HX_STACK_LINE(966)
					tmp14 = (int)39;
				}
				;break;
				case (int)1073741904: {
					HX_STACK_LINE(966)
					tmp14 = (int)37;
				}
				;break;
				case (int)1073741905: {
					HX_STACK_LINE(966)
					tmp14 = (int)40;
				}
				;break;
				case (int)1073741906: {
					HX_STACK_LINE(966)
					tmp14 = (int)38;
				}
				;break;
				case (int)1073741907: {
					HX_STACK_LINE(966)
					tmp14 = (int)144;
				}
				;break;
				case (int)1073741908: {
					HX_STACK_LINE(966)
					tmp14 = (int)111;
				}
				;break;
				case (int)1073741909: {
					HX_STACK_LINE(966)
					tmp14 = (int)106;
				}
				;break;
				case (int)1073741910: {
					HX_STACK_LINE(966)
					tmp14 = (int)109;
				}
				;break;
				case (int)1073741911: {
					HX_STACK_LINE(966)
					tmp14 = (int)107;
				}
				;break;
				case (int)1073741912: {
					HX_STACK_LINE(966)
					tmp14 = (int)108;
				}
				;break;
				case (int)1073741913: {
					HX_STACK_LINE(966)
					tmp14 = (int)97;
				}
				;break;
				case (int)1073741914: {
					HX_STACK_LINE(966)
					tmp14 = (int)98;
				}
				;break;
				case (int)1073741915: {
					HX_STACK_LINE(966)
					tmp14 = (int)99;
				}
				;break;
				case (int)1073741916: {
					HX_STACK_LINE(966)
					tmp14 = (int)100;
				}
				;break;
				case (int)1073741917: {
					HX_STACK_LINE(966)
					tmp14 = (int)101;
				}
				;break;
				case (int)1073741918: {
					HX_STACK_LINE(966)
					tmp14 = (int)102;
				}
				;break;
				case (int)1073741919: {
					HX_STACK_LINE(966)
					tmp14 = (int)103;
				}
				;break;
				case (int)1073741920: {
					HX_STACK_LINE(966)
					tmp14 = (int)104;
				}
				;break;
				case (int)1073741921: {
					HX_STACK_LINE(966)
					tmp14 = (int)105;
				}
				;break;
				case (int)1073741922: {
					HX_STACK_LINE(966)
					tmp14 = (int)96;
				}
				;break;
				case (int)1073741923: {
					HX_STACK_LINE(966)
					tmp14 = (int)110;
				}
				;break;
				case (int)1073741925: {
					HX_STACK_LINE(966)
					tmp14 = (int)302;
				}
				;break;
				case (int)1073741928: {
					HX_STACK_LINE(966)
					tmp14 = (int)124;
				}
				;break;
				case (int)1073741929: {
					HX_STACK_LINE(966)
					tmp14 = (int)125;
				}
				;break;
				case (int)1073741930: {
					HX_STACK_LINE(966)
					tmp14 = (int)126;
				}
				;break;
				case (int)1073741982: {
					HX_STACK_LINE(966)
					tmp14 = (int)13;
				}
				;break;
				case (int)1073742044: {
					HX_STACK_LINE(966)
					tmp14 = (int)110;
				}
				;break;
				case (int)1073742048: {
					HX_STACK_LINE(966)
					tmp14 = (int)17;
				}
				;break;
				case (int)1073742049: {
					HX_STACK_LINE(966)
					tmp14 = (int)16;
				}
				;break;
				case (int)1073742050: {
					HX_STACK_LINE(966)
					tmp14 = (int)18;
				}
				;break;
				case (int)1073742051: {
					HX_STACK_LINE(966)
					tmp14 = (int)15;
				}
				;break;
				case (int)1073742052: {
					HX_STACK_LINE(966)
					tmp14 = (int)17;
				}
				;break;
				case (int)1073742053: {
					HX_STACK_LINE(966)
					tmp14 = (int)16;
				}
				;break;
				case (int)1073742054: {
					HX_STACK_LINE(966)
					tmp14 = (int)18;
				}
				;break;
				case (int)1073742055: {
					HX_STACK_LINE(966)
					tmp14 = (int)15;
				}
				;break;
				default: {
					HX_STACK_LINE(966)
					tmp14 = keyCode;
				}
			}
			HX_STACK_LINE(966)
			int keyCode1 = tmp14;		HX_STACK_VAR(keyCode1,"keyCode1");
			HX_STACK_LINE(967)
			int tmp15 = keyCode1;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(967)
			int tmp16 = modifier;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(967)
			bool tmp17 = ::lime::ui::_KeyModifier::KeyModifier_Impl__obj::get_shiftKey(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(967)
			int tmp18 = ::openfl::ui::Keyboard_obj::__getCharCode(tmp15,tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(967)
			int charCode = tmp18;		HX_STACK_VAR(charCode,"charCode");
			HX_STACK_LINE(969)
			::String tmp19 = type;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(969)
			int tmp20 = charCode;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(969)
			int tmp21 = keyCode1;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(969)
			int tmp22 = keyLocation;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(969)
			bool tmp23 = this->__macKeyboard;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(969)
			bool tmp24;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(969)
			if ((tmp23)){
				HX_STACK_LINE(969)
				int tmp25 = modifier;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(969)
				int tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(969)
				bool tmp27 = ::lime::ui::_KeyModifier::KeyModifier_Impl__obj::get_ctrlKey(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(969)
				bool tmp28 = !(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(969)
				if ((tmp28)){
					HX_STACK_LINE(969)
					int tmp29 = modifier;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(969)
					int tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(969)
					tmp24 = ::lime::ui::_KeyModifier::KeyModifier_Impl__obj::get_metaKey(tmp30);
				}
				else{
					HX_STACK_LINE(969)
					tmp24 = true;
				}
			}
			else{
				HX_STACK_LINE(969)
				int tmp25 = modifier;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(969)
				tmp24 = ::lime::ui::_KeyModifier::KeyModifier_Impl__obj::get_ctrlKey(tmp25);
			}
			HX_STACK_LINE(969)
			int tmp25 = modifier;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(969)
			bool tmp26 = ::lime::ui::_KeyModifier::KeyModifier_Impl__obj::get_altKey(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(969)
			int tmp27 = modifier;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(969)
			bool tmp28 = ::lime::ui::_KeyModifier::KeyModifier_Impl__obj::get_shiftKey(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(969)
			int tmp29 = modifier;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(969)
			bool tmp30 = ::lime::ui::_KeyModifier::KeyModifier_Impl__obj::get_ctrlKey(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(969)
			int tmp31 = modifier;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(969)
			bool tmp32 = ::lime::ui::_KeyModifier::KeyModifier_Impl__obj::get_metaKey(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(969)
			::openfl::events::KeyboardEvent tmp33 = ::openfl::events::KeyboardEvent_obj::__new(tmp19,true,false,tmp20,tmp21,tmp22,tmp24,tmp26,tmp28,tmp30,tmp32);		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(969)
			::openfl::events::KeyboardEvent event = tmp33;		HX_STACK_VAR(event,"event");
			HX_STACK_LINE(971)
			stack->reverse();
			HX_STACK_LINE(972)
			::openfl::events::KeyboardEvent tmp34 = event;		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(972)
			this->__fireEvent(tmp34,stack);
			HX_STACK_LINE(974)
			bool tmp35 = event->__isCanceled;		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(974)
			if ((tmp35)){
				HX_STACK_LINE(976)
				bool tmp36 = (type == HX_HCSTRING("keyDown","\xa1","\x69","\x47","\x9c"));		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(976)
				if ((tmp36)){
					HX_STACK_LINE(978)
					::lime::ui::Window tmp37 = this->window;		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(978)
					tmp37->onKeyDown->cancel();
				}
				else{
					HX_STACK_LINE(982)
					::lime::ui::Window tmp37 = this->window;		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(982)
					tmp37->onKeyUp->cancel();
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Stage_obj,__onKey,(void))

Void Stage_obj::__onGamepadConnect( ::lime::ui::Gamepad gamepad){
{
		HX_STACK_FRAME("openfl.display.Stage","__onGamepadConnect",0x5c5bf402,"openfl.display.Stage.__onGamepadConnect","openfl/display/Stage.hx",993,0xadca4c2c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(gamepad,"gamepad")
		HX_STACK_LINE(995)
		::lime::ui::Gamepad tmp = gamepad;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(995)
		this->onGamepadConnect(tmp);
		HX_STACK_LINE(997)
		Dynamic tmp1 = this->onGamepadAxisMove_dyn();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(997)
		::lime::ui::Gamepad tmp2 = gamepad;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(997)
		Dynamic tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(997)
		{
			HX_STACK_LINE(997)
			Dynamic f = tmp1;		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(997)
			::lime::ui::Gamepad a1 = tmp2;		HX_STACK_VAR(a1,"a1");

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::lime::ui::Gamepad,a1,Dynamic,f)
			int __ArgCount() const { return 2; }
			Void run(int a2,Float a3){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","openfl/display/Stage.hx",997,0xadca4c2c)
				HX_STACK_ARG(a2,"a2")
				HX_STACK_ARG(a3,"a3")
				{
					HX_STACK_LINE(997)
					::lime::ui::Gamepad tmp4 = a1;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(997)
					int tmp5 = a2;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(997)
					Float tmp6 = a3;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(997)
					f(tmp4,tmp5,tmp6).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC2((void))

			HX_STACK_LINE(997)
			tmp3 =  Dynamic(new _Function_2_1(a1,f));
		}
		HX_STACK_LINE(997)
		gamepad->onAxisMove->add(tmp3,null(),null());
		HX_STACK_LINE(998)
		Dynamic tmp4 = this->onGamepadButtonDown_dyn();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(998)
		::lime::ui::Gamepad tmp5 = gamepad;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(998)
		Dynamic tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(998)
		{
			HX_STACK_LINE(998)
			Dynamic f = tmp4;		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(998)
			::lime::ui::Gamepad a1 = tmp5;		HX_STACK_VAR(a1,"a1");

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::lime::ui::Gamepad,a1,Dynamic,f)
			int __ArgCount() const { return 1; }
			Void run(int a2){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","openfl/display/Stage.hx",998,0xadca4c2c)
				HX_STACK_ARG(a2,"a2")
				{
					HX_STACK_LINE(998)
					::lime::ui::Gamepad tmp7 = a1;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(998)
					int tmp8 = a2;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(998)
					f(tmp7,tmp8).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			HX_STACK_LINE(998)
			tmp6 =  Dynamic(new _Function_2_1(a1,f));
		}
		HX_STACK_LINE(998)
		gamepad->onButtonDown->add(tmp6,null(),null());
		HX_STACK_LINE(999)
		Dynamic tmp7 = this->onGamepadButtonUp_dyn();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(999)
		::lime::ui::Gamepad tmp8 = gamepad;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(999)
		Dynamic tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(999)
		{
			HX_STACK_LINE(999)
			Dynamic f = tmp7;		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(999)
			::lime::ui::Gamepad a1 = tmp8;		HX_STACK_VAR(a1,"a1");

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::lime::ui::Gamepad,a1,Dynamic,f)
			int __ArgCount() const { return 1; }
			Void run(int a2){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","openfl/display/Stage.hx",999,0xadca4c2c)
				HX_STACK_ARG(a2,"a2")
				{
					HX_STACK_LINE(999)
					::lime::ui::Gamepad tmp10 = a1;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(999)
					int tmp11 = a2;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(999)
					f(tmp10,tmp11).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			HX_STACK_LINE(999)
			tmp9 =  Dynamic(new _Function_2_1(a1,f));
		}
		HX_STACK_LINE(999)
		gamepad->onButtonUp->add(tmp9,null(),null());
		HX_STACK_LINE(1000)
		Dynamic tmp10 = this->onGamepadDisconnect_dyn();		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1000)
		::lime::ui::Gamepad tmp11 = gamepad;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(1000)
		Dynamic tmp12;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(1000)
		{
			HX_STACK_LINE(1000)
			Dynamic f = tmp10;		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(1000)
			::lime::ui::Gamepad a1 = tmp11;		HX_STACK_VAR(a1,"a1");

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::lime::ui::Gamepad,a1,Dynamic,f)
			int __ArgCount() const { return 0; }
			Void run(){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","openfl/display/Stage.hx",1000,0xadca4c2c)
				{
					HX_STACK_LINE(1000)
					::lime::ui::Gamepad tmp13 = a1;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(1000)
					f(tmp13).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC0((void))

			HX_STACK_LINE(1000)
			tmp12 =  Dynamic(new _Function_2_1(a1,f));
		}
		HX_STACK_LINE(1000)
		gamepad->onDisconnect->add(tmp12,null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,__onGamepadConnect,(void))

Void Stage_obj::__onMouse( ::String type,Float x,Float y,int button){
{
		HX_STACK_FRAME("openfl.display.Stage","__onMouse",0xfccea68c,"openfl.display.Stage.__onMouse","openfl/display/Stage.hx",1005,0xadca4c2c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(type,"type")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(button,"button")
		HX_STACK_LINE(1007)
		bool tmp = (button > (int)2);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1007)
		if ((tmp)){
			HX_STACK_LINE(1007)
			return null();
		}
		HX_STACK_LINE(1009)
		::openfl::geom::Point tmp1 = ::openfl::geom::Point_obj::__new(x,y);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1009)
		::openfl::geom::Point targetPoint = tmp1;		HX_STACK_VAR(targetPoint,"targetPoint");
		HX_STACK_LINE(1010)
		{
			HX_STACK_LINE(1010)
			::openfl::geom::Matrix tmp2 = this->__displayMatrix;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1010)
			::openfl::geom::Matrix _this = tmp2;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(1010)
			Float tmp3 = (_this->a * _this->d);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1010)
			Float tmp4 = (_this->b * _this->c);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1010)
			Float tmp5 = (tmp3 - tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1010)
			Float norm = tmp5;		HX_STACK_VAR(norm,"norm");
			HX_STACK_LINE(1010)
			bool tmp6 = (norm == (int)0);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1010)
			if ((tmp6)){
				HX_STACK_LINE(1010)
				Float tmp7 = _this->tx;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1010)
				Float tmp8 = -(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1010)
				targetPoint->x = tmp8;
				HX_STACK_LINE(1010)
				Float tmp9 = _this->ty;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1010)
				Float tmp10 = -(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(1010)
				targetPoint->y = tmp10;
			}
			else{
				HX_STACK_LINE(1010)
				Float tmp7 = (Float(((Float)1.0)) / Float(norm));		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1010)
				Float tmp8 = _this->c;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1010)
				Float tmp9 = (_this->ty - targetPoint->y);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1010)
				Float tmp10 = (tmp8 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(1010)
				Float tmp11 = _this->d;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(1010)
				Float tmp12 = (targetPoint->x - _this->tx);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(1010)
				Float tmp13 = (tmp11 * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(1010)
				Float tmp14 = (tmp10 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(1010)
				Float tmp15 = (tmp7 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(1010)
				Float px = tmp15;		HX_STACK_VAR(px,"px");
				HX_STACK_LINE(1010)
				Float tmp16 = (Float(((Float)1.0)) / Float(norm));		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(1010)
				Float tmp17 = _this->a;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(1010)
				Float tmp18 = (targetPoint->y - _this->ty);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(1010)
				Float tmp19 = (tmp17 * tmp18);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(1010)
				Float tmp20 = _this->b;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(1010)
				Float tmp21 = (_this->tx - targetPoint->x);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(1010)
				Float tmp22 = (tmp20 * tmp21);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(1010)
				Float tmp23 = (tmp19 + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(1010)
				Float tmp24 = (tmp16 * tmp23);		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(1010)
				targetPoint->y = tmp24;
				HX_STACK_LINE(1010)
				targetPoint->x = px;
			}
		}
		HX_STACK_LINE(1012)
		this->__mouseX = targetPoint->x;
		HX_STACK_LINE(1013)
		this->__mouseY = targetPoint->y;
		HX_STACK_LINE(1015)
		Array< ::Dynamic > stack = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(stack,"stack");
		HX_STACK_LINE(1016)
		::openfl::display::InteractiveObject target = null();		HX_STACK_VAR(target,"target");
		HX_STACK_LINE(1018)
		Float tmp2 = this->__mouseX;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1018)
		Float tmp3 = this->__mouseY;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1018)
		bool tmp4 = this->__hitTest(tmp2,tmp3,true,stack,true,hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1018)
		if ((tmp4)){
			HX_STACK_LINE(1020)
			int tmp5 = (stack->length - (int)1);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1020)
			::openfl::display::DisplayObject tmp6 = stack->__get(tmp5).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1020)
			target = ((::openfl::display::InteractiveObject)(tmp6));
		}
		else{
			HX_STACK_LINE(1024)
			target = hx::ObjectPtr<OBJ_>(this);
			HX_STACK_LINE(1025)
			stack = Array_obj< ::Dynamic >::__new().Add(hx::ObjectPtr<OBJ_>(this));
		}
		HX_STACK_LINE(1029)
		bool tmp5 = (target == null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1029)
		if ((tmp5)){
			HX_STACK_LINE(1029)
			target = hx::ObjectPtr<OBJ_>(this);
		}
		HX_STACK_LINE(1031)
		::String clickType = null();		HX_STACK_VAR(clickType,"clickType");
		HX_STACK_LINE(1033)
		::String tmp6 = type;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1033)
		::String _switch_1 = (tmp6);
		if (  ( _switch_1==HX_HCSTRING("mouseDown","\x27","\xb1","\xc2","\xee"))){
			HX_STACK_LINE(1037)
			bool tmp7 = target->get_tabEnabled();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1037)
			if ((tmp7)){
				HX_STACK_LINE(1039)
				::openfl::display::InteractiveObject tmp8 = target;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1039)
				this->set_focus(tmp8);
			}
			else{
				HX_STACK_LINE(1043)
				this->set_focus(null());
			}
			HX_STACK_LINE(1047)
			this->__mouseDownLeft = target;
		}
		else if (  ( _switch_1==HX_HCSTRING("middleMouseDown","\x12","\x2b","\xfe","\x01"))){
			HX_STACK_LINE(1051)
			this->__mouseDownMiddle = target;
		}
		else if (  ( _switch_1==HX_HCSTRING("rightMouseDown","\xab","\x29","\xd7","\xcd"))){
			HX_STACK_LINE(1055)
			this->__mouseDownRight = target;
		}
		else if (  ( _switch_1==HX_HCSTRING("mouseUp","\xe0","\xf3","\x72","\xc0"))){
			HX_STACK_LINE(1059)
			::openfl::display::InteractiveObject tmp7 = this->__mouseDownLeft;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1059)
			::openfl::display::InteractiveObject tmp8 = target;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1059)
			bool tmp9 = (tmp7 == tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1059)
			if ((tmp9)){
				HX_STACK_LINE(1061)
				clickType = HX_HCSTRING("click","\x48","\x7c","\x5e","\x48");
			}
			HX_STACK_LINE(1066)
			this->__mouseDownLeft = null();
		}
		else if (  ( _switch_1==HX_HCSTRING("middleMouseUp","\x0b","\x8d","\xf5","\x3a"))){
			HX_STACK_LINE(1070)
			::openfl::display::InteractiveObject tmp7 = this->__mouseDownMiddle;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1070)
			::openfl::display::InteractiveObject tmp8 = target;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1070)
			bool tmp9 = (tmp7 == tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1070)
			if ((tmp9)){
				HX_STACK_LINE(1072)
				clickType = HX_HCSTRING("middleClick","\xb3","\xe4","\xe5","\x43");
			}
			HX_STACK_LINE(1077)
			this->__mouseDownMiddle = null();
		}
		else if (  ( _switch_1==HX_HCSTRING("rightMouseUp","\x64","\x83","\x21","\xab"))){
			HX_STACK_LINE(1081)
			::openfl::display::InteractiveObject tmp7 = this->__mouseDownRight;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1081)
			::openfl::display::InteractiveObject tmp8 = target;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1081)
			bool tmp9 = (tmp7 == tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1081)
			if ((tmp9)){
				HX_STACK_LINE(1083)
				clickType = HX_HCSTRING("rightClick","\xcc","\x62","\x23","\x4b");
			}
			HX_STACK_LINE(1087)
			this->__mouseDownRight = null();
		}
		else  {
		}
;
;
		HX_STACK_LINE(1093)
		::String tmp7 = type;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1093)
		int tmp8 = button;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1093)
		Float tmp9 = this->__mouseX;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1093)
		Float tmp10 = this->__mouseY;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1093)
		bool tmp11 = (target == hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(1093)
		::openfl::geom::Point tmp12;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(1093)
		if ((tmp11)){
			HX_STACK_LINE(1093)
			tmp12 = targetPoint;
		}
		else{
			HX_STACK_LINE(1093)
			::openfl::geom::Point tmp13 = targetPoint;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(1093)
			tmp12 = target->globalToLocal(tmp13);
		}
		HX_STACK_LINE(1093)
		::openfl::display::InteractiveObject tmp13 = target;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(1093)
		::openfl::events::MouseEvent tmp14 = ::openfl::events::MouseEvent_obj::__create(tmp7,tmp8,tmp9,tmp10,tmp12,tmp13,null());		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(1093)
		this->__fireEvent(tmp14,stack);
		HX_STACK_LINE(1095)
		bool tmp15 = (clickType != null());		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(1095)
		if ((tmp15)){
			HX_STACK_LINE(1097)
			::String tmp16 = clickType;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(1097)
			int tmp17 = button;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(1097)
			Float tmp18 = this->__mouseX;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(1097)
			Float tmp19 = this->__mouseY;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(1097)
			bool tmp20 = (target == hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(1097)
			::openfl::geom::Point tmp21;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(1097)
			if ((tmp20)){
				HX_STACK_LINE(1097)
				tmp21 = targetPoint;
			}
			else{
				HX_STACK_LINE(1097)
				::openfl::geom::Point tmp22 = targetPoint;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(1097)
				tmp21 = target->globalToLocal(tmp22);
			}
			HX_STACK_LINE(1097)
			::openfl::display::InteractiveObject tmp22 = target;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(1097)
			::openfl::events::MouseEvent tmp23 = ::openfl::events::MouseEvent_obj::__create(tmp16,tmp17,tmp18,tmp19,tmp21,tmp22,null());		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(1097)
			this->__fireEvent(tmp23,stack);
			HX_STACK_LINE(1099)
			bool tmp24 = (type == HX_HCSTRING("mouseUp","\xe0","\xf3","\x72","\xc0"));		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(1099)
			bool tmp25;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(1099)
			if ((tmp24)){
				HX_STACK_LINE(1099)
				::openfl::display::InteractiveObject tmp26;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(1099)
				tmp26 = hx::TCast< ::openfl::display::InteractiveObject >::cast(target);
				HX_STACK_LINE(1099)
				::openfl::display::InteractiveObject tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(1099)
				tmp25 = tmp27->doubleClickEnabled;
			}
			else{
				HX_STACK_LINE(1099)
				tmp25 = false;
			}
			HX_STACK_LINE(1099)
			if ((tmp25)){
				HX_STACK_LINE(1101)
				int tmp26 = ::openfl::Lib_obj::getTimer();		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(1101)
				int currentTime = tmp26;		HX_STACK_VAR(currentTime,"currentTime");
				HX_STACK_LINE(1102)
				int tmp27 = currentTime;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(1102)
				int tmp28 = this->__lastClickTime;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(1102)
				int tmp29 = (tmp27 - tmp28);		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(1102)
				bool tmp30 = (tmp29 < (int)500);		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(1102)
				if ((tmp30)){
					HX_STACK_LINE(1104)
					int tmp31 = button;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(1104)
					Float tmp32 = this->__mouseX;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(1104)
					Float tmp33 = this->__mouseY;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(1104)
					bool tmp34 = (target == hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(1104)
					::openfl::geom::Point tmp35;		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(1104)
					if ((tmp34)){
						HX_STACK_LINE(1104)
						tmp35 = targetPoint;
					}
					else{
						HX_STACK_LINE(1104)
						::openfl::geom::Point tmp36 = targetPoint;		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(1104)
						tmp35 = target->globalToLocal(tmp36);
					}
					HX_STACK_LINE(1104)
					::openfl::display::InteractiveObject tmp36 = target;		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(1104)
					::openfl::events::MouseEvent tmp37 = ::openfl::events::MouseEvent_obj::__create(HX_HCSTRING("doubleClick","\x77","\x03","\x76","\xcd"),tmp31,tmp32,tmp33,tmp35,tmp36,null());		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(1104)
					this->__fireEvent(tmp37,stack);
					HX_STACK_LINE(1105)
					this->__lastClickTime = (int)0;
				}
				else{
					HX_STACK_LINE(1109)
					this->__lastClickTime = currentTime;
				}
			}
		}
		HX_STACK_LINE(1117)
		::String tmp16 = ::openfl::ui::Mouse_obj::__cursor;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(1117)
		bool tmp17 = (tmp16 == HX_HCSTRING("auto","\x6f","\xdf","\x76","\x40"));		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(1117)
		if ((tmp17)){
			HX_STACK_LINE(1119)
			::lime::ui::MouseCursor cursor = null();		HX_STACK_VAR(cursor,"cursor");
			HX_STACK_LINE(1121)
			::openfl::display::InteractiveObject tmp18 = this->__mouseDownLeft;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(1121)
			bool tmp19 = (tmp18 != null());		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(1121)
			if ((tmp19)){
				HX_STACK_LINE(1123)
				::openfl::display::InteractiveObject tmp20 = this->__mouseDownLeft;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(1123)
				::lime::ui::MouseCursor tmp21 = tmp20->__getCursor();		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(1123)
				cursor = tmp21;
			}
			else{
				HX_STACK_LINE(1127)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(1127)
				while((true)){
					HX_STACK_LINE(1127)
					bool tmp20 = (_g < stack->length);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(1127)
					bool tmp21 = !(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(1127)
					if ((tmp21)){
						HX_STACK_LINE(1127)
						break;
					}
					HX_STACK_LINE(1127)
					::openfl::display::DisplayObject tmp22 = stack->__get(_g).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(1127)
					::openfl::display::DisplayObject target1 = tmp22;		HX_STACK_VAR(target1,"target1");
					HX_STACK_LINE(1127)
					++(_g);
					HX_STACK_LINE(1129)
					::lime::ui::MouseCursor tmp23 = target1->__getCursor();		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(1129)
					cursor = tmp23;
					HX_STACK_LINE(1131)
					bool tmp24 = (cursor != null());		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(1131)
					if ((tmp24)){
						HX_STACK_LINE(1133)
						::lime::ui::MouseCursor tmp25 = cursor;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(1133)
						::lime::ui::Mouse_obj::set_cursor(tmp25);
						HX_STACK_LINE(1134)
						break;
					}
				}
			}
			HX_STACK_LINE(1142)
			bool tmp20 = (cursor == null());		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(1142)
			if ((tmp20)){
				HX_STACK_LINE(1144)
				::lime::ui::Mouse_obj::set_cursor(::lime::ui::MouseCursor_obj::ARROW);
			}
		}
		HX_STACK_LINE(1150)
		::openfl::events::MouseEvent event;		HX_STACK_VAR(event,"event");
		HX_STACK_LINE(1150)
		::openfl::geom::Point localPoint;		HX_STACK_VAR(localPoint,"localPoint");
		HX_STACK_LINE(1152)
		{
			HX_STACK_LINE(1152)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1152)
			Array< ::Dynamic > _g1 = this->__mouseOutStack;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(1152)
			while((true)){
				HX_STACK_LINE(1152)
				bool tmp18 = (_g < _g1->length);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(1152)
				bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(1152)
				if ((tmp19)){
					HX_STACK_LINE(1152)
					break;
				}
				HX_STACK_LINE(1152)
				::openfl::display::DisplayObject tmp20 = _g1->__get(_g).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(1152)
				::openfl::display::DisplayObject target1 = tmp20;		HX_STACK_VAR(target1,"target1");
				HX_STACK_LINE(1152)
				++(_g);
				HX_STACK_LINE(1154)
				::openfl::display::DisplayObject tmp21 = target1;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(1154)
				int tmp22 = stack->indexOf(tmp21,null());		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(1154)
				bool tmp23 = (tmp22 == (int)-1);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(1154)
				if ((tmp23)){
					HX_STACK_LINE(1156)
					::openfl::display::DisplayObject tmp24 = target1;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(1156)
					this->__mouseOutStack->remove(tmp24);
					HX_STACK_LINE(1158)
					::openfl::geom::Point tmp25 = targetPoint;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(1158)
					::openfl::geom::Point tmp26 = target1->globalToLocal(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(1158)
					localPoint = tmp26;
					HX_STACK_LINE(1159)
					int tmp27 = button;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(1159)
					Float tmp28 = this->__mouseX;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(1159)
					Float tmp29 = this->__mouseY;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(1159)
					::openfl::geom::Point tmp30 = localPoint;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(1159)
					::openfl::display::InteractiveObject tmp31 = ((::openfl::display::InteractiveObject)(target1));		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(1159)
					::openfl::events::MouseEvent tmp32 = ::openfl::events::MouseEvent_obj::__create(HX_HCSTRING("mouseOut","\x69","\xe7","\x1d","\xa4"),tmp27,tmp28,tmp29,tmp30,tmp31,null());		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(1159)
					event = tmp32;
					HX_STACK_LINE(1160)
					event->bubbles = false;
					HX_STACK_LINE(1161)
					::openfl::events::MouseEvent tmp33 = event;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(1161)
					target1->__dispatchEvent(tmp33);
				}
			}
		}
		HX_STACK_LINE(1167)
		{
			HX_STACK_LINE(1167)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1167)
			while((true)){
				HX_STACK_LINE(1167)
				bool tmp18 = (_g < stack->length);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(1167)
				bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(1167)
				if ((tmp19)){
					HX_STACK_LINE(1167)
					break;
				}
				HX_STACK_LINE(1167)
				::openfl::display::DisplayObject tmp20 = stack->__get(_g).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(1167)
				::openfl::display::DisplayObject target1 = tmp20;		HX_STACK_VAR(target1,"target1");
				HX_STACK_LINE(1167)
				++(_g);
				HX_STACK_LINE(1169)
				::openfl::display::DisplayObject tmp21 = target1;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(1169)
				int tmp22 = this->__mouseOutStack->indexOf(tmp21,null());		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(1169)
				bool tmp23 = (tmp22 == (int)-1);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(1169)
				if ((tmp23)){
					HX_STACK_LINE(1171)
					bool tmp24 = target1->hasEventListener(HX_HCSTRING("mouseOver","\x19","\x4a","\x0d","\xf6"));		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(1171)
					if ((tmp24)){
						HX_STACK_LINE(1173)
						::openfl::geom::Point tmp25 = targetPoint;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(1173)
						::openfl::geom::Point tmp26 = target1->globalToLocal(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(1173)
						localPoint = tmp26;
						HX_STACK_LINE(1174)
						int tmp27 = button;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(1174)
						Float tmp28 = this->__mouseX;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(1174)
						Float tmp29 = this->__mouseY;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(1174)
						::openfl::geom::Point tmp30 = localPoint;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(1174)
						::openfl::display::InteractiveObject tmp31 = ((::openfl::display::InteractiveObject)(target1));		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(1174)
						::openfl::events::MouseEvent tmp32 = ::openfl::events::MouseEvent_obj::__create(HX_HCSTRING("mouseOver","\x19","\x4a","\x0d","\xf6"),tmp27,tmp28,tmp29,tmp30,tmp31,null());		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(1174)
						event = tmp32;
						HX_STACK_LINE(1175)
						event->bubbles = false;
						HX_STACK_LINE(1176)
						::openfl::events::MouseEvent tmp33 = event;		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(1176)
						target1->__dispatchEvent(tmp33);
					}
					HX_STACK_LINE(1180)
					bool tmp25 = target1->hasEventListener(HX_HCSTRING("mouseOut","\x69","\xe7","\x1d","\xa4"));		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(1180)
					if ((tmp25)){
						HX_STACK_LINE(1182)
						::openfl::display::DisplayObject tmp26 = target1;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(1182)
						this->__mouseOutStack->push(tmp26);
					}
				}
			}
		}
		HX_STACK_LINE(1190)
		::openfl::display::Sprite tmp18 = this->__dragObject;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(1190)
		bool tmp19 = (tmp18 != null());		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(1190)
		if ((tmp19)){
			HX_STACK_LINE(1192)
			::openfl::geom::Point tmp20 = targetPoint;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(1192)
			this->__drag(tmp20);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Stage_obj,__onMouse,(void))

Void Stage_obj::__onMouseWheel( Float deltaX,Float deltaY){
{
		HX_STACK_FRAME("openfl.display.Stage","__onMouseWheel",0x6d35c26f,"openfl.display.Stage.__onMouseWheel","openfl/display/Stage.hx",1199,0xadca4c2c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(deltaX,"deltaX")
		HX_STACK_ARG(deltaY,"deltaY")
		HX_STACK_LINE(1201)
		Float tmp = this->__mouseX;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1201)
		Float x = tmp;		HX_STACK_VAR(x,"x");
		HX_STACK_LINE(1202)
		Float tmp1 = this->__mouseY;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1202)
		Float y = tmp1;		HX_STACK_VAR(y,"y");
		HX_STACK_LINE(1204)
		Array< ::Dynamic > stack = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(stack,"stack");
		HX_STACK_LINE(1206)
		Float tmp2 = x;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1206)
		Float tmp3 = y;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1206)
		bool tmp4 = this->__hitTest(tmp2,tmp3,false,stack,true,hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1206)
		bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1206)
		if ((tmp5)){
			HX_STACK_LINE(1208)
			stack = Array_obj< ::Dynamic >::__new().Add(hx::ObjectPtr<OBJ_>(this));
		}
		HX_STACK_LINE(1212)
		int tmp6 = (stack->length - (int)1);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1212)
		::openfl::display::DisplayObject tmp7 = stack->__get(tmp6).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1212)
		::openfl::display::InteractiveObject target = ((::openfl::display::InteractiveObject)(tmp7));		HX_STACK_VAR(target,"target");
		HX_STACK_LINE(1213)
		::openfl::geom::Point tmp8 = ::openfl::geom::Point_obj::__new(x,y);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1213)
		::openfl::geom::Point targetPoint = tmp8;		HX_STACK_VAR(targetPoint,"targetPoint");
		HX_STACK_LINE(1214)
		{
			HX_STACK_LINE(1214)
			::openfl::geom::Matrix tmp9 = this->__displayMatrix;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1214)
			::openfl::geom::Matrix _this = tmp9;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(1214)
			Float tmp10 = (_this->a * _this->d);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1214)
			Float tmp11 = (_this->b * _this->c);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(1214)
			Float tmp12 = (tmp10 - tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1214)
			Float norm = tmp12;		HX_STACK_VAR(norm,"norm");
			HX_STACK_LINE(1214)
			bool tmp13 = (norm == (int)0);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(1214)
			if ((tmp13)){
				HX_STACK_LINE(1214)
				Float tmp14 = _this->tx;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(1214)
				Float tmp15 = -(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(1214)
				targetPoint->x = tmp15;
				HX_STACK_LINE(1214)
				Float tmp16 = _this->ty;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(1214)
				Float tmp17 = -(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(1214)
				targetPoint->y = tmp17;
			}
			else{
				HX_STACK_LINE(1214)
				Float tmp14 = (Float(((Float)1.0)) / Float(norm));		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(1214)
				Float tmp15 = _this->c;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(1214)
				Float tmp16 = (_this->ty - targetPoint->y);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(1214)
				Float tmp17 = (tmp15 * tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(1214)
				Float tmp18 = _this->d;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(1214)
				Float tmp19 = (targetPoint->x - _this->tx);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(1214)
				Float tmp20 = (tmp18 * tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(1214)
				Float tmp21 = (tmp17 + tmp20);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(1214)
				Float tmp22 = (tmp14 * tmp21);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(1214)
				Float px = tmp22;		HX_STACK_VAR(px,"px");
				HX_STACK_LINE(1214)
				Float tmp23 = (Float(((Float)1.0)) / Float(norm));		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(1214)
				Float tmp24 = _this->a;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(1214)
				Float tmp25 = (targetPoint->y - _this->ty);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(1214)
				Float tmp26 = (tmp24 * tmp25);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(1214)
				Float tmp27 = _this->b;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(1214)
				Float tmp28 = (_this->tx - targetPoint->x);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(1214)
				Float tmp29 = (tmp27 * tmp28);		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(1214)
				Float tmp30 = (tmp26 + tmp29);		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(1214)
				Float tmp31 = (tmp23 * tmp30);		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(1214)
				targetPoint->y = tmp31;
				HX_STACK_LINE(1214)
				targetPoint->x = px;
			}
		}
		HX_STACK_LINE(1215)
		Float tmp9 = deltaY;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1215)
		int tmp10 = ::Std_obj::_int(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1215)
		int delta = tmp10;		HX_STACK_VAR(delta,"delta");
		HX_STACK_LINE(1217)
		Float tmp11 = this->__mouseX;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(1217)
		Float tmp12 = this->__mouseY;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(1217)
		bool tmp13 = (target == hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(1217)
		::openfl::geom::Point tmp14;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(1217)
		if ((tmp13)){
			HX_STACK_LINE(1217)
			tmp14 = targetPoint;
		}
		else{
			HX_STACK_LINE(1217)
			::openfl::geom::Point tmp15 = targetPoint;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(1217)
			tmp14 = target->globalToLocal(tmp15);
		}
		HX_STACK_LINE(1217)
		::openfl::display::InteractiveObject tmp15 = target;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(1217)
		int tmp16 = delta;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(1217)
		::openfl::events::MouseEvent tmp17 = ::openfl::events::MouseEvent_obj::__create(HX_HCSTRING("mouseWheel","\x36","\x28","\x87","\xe7"),(int)0,tmp11,tmp12,tmp14,tmp15,tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(1217)
		this->__fireEvent(tmp17,stack);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Stage_obj,__onMouseWheel,(void))

Void Stage_obj::__onTouch( ::String type,::lime::ui::Touch touch){
{
		HX_STACK_FRAME("openfl.display.Stage","__onTouch",0x049ca826,"openfl.display.Stage.__onTouch","openfl/display/Stage.hx",1222,0xadca4c2c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(type,"type")
		HX_STACK_ARG(touch,"touch")
		HX_STACK_LINE(1224)
		Float tmp = touch->x;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1224)
		::lime::ui::Window tmp1 = this->window;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1224)
		int tmp2 = tmp1->__width;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1224)
		Float tmp3 = (tmp * tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1224)
		Float tmp4 = touch->y;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1224)
		::lime::ui::Window tmp5 = this->window;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1224)
		int tmp6 = tmp5->__height;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1224)
		Float tmp7 = (tmp4 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1224)
		::openfl::geom::Point tmp8 = ::openfl::geom::Point_obj::__new(tmp3,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1224)
		::openfl::geom::Point point = tmp8;		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(1225)
		{
			HX_STACK_LINE(1225)
			::openfl::geom::Matrix tmp9 = this->__displayMatrix;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1225)
			::openfl::geom::Matrix _this = tmp9;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(1225)
			Float tmp10 = (_this->a * _this->d);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1225)
			Float tmp11 = (_this->b * _this->c);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(1225)
			Float tmp12 = (tmp10 - tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1225)
			Float norm = tmp12;		HX_STACK_VAR(norm,"norm");
			HX_STACK_LINE(1225)
			bool tmp13 = (norm == (int)0);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(1225)
			if ((tmp13)){
				HX_STACK_LINE(1225)
				Float tmp14 = _this->tx;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(1225)
				Float tmp15 = -(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(1225)
				point->x = tmp15;
				HX_STACK_LINE(1225)
				Float tmp16 = _this->ty;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(1225)
				Float tmp17 = -(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(1225)
				point->y = tmp17;
			}
			else{
				HX_STACK_LINE(1225)
				Float tmp14 = (Float(((Float)1.0)) / Float(norm));		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(1225)
				Float tmp15 = _this->c;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(1225)
				Float tmp16 = (_this->ty - point->y);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(1225)
				Float tmp17 = (tmp15 * tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(1225)
				Float tmp18 = _this->d;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(1225)
				Float tmp19 = (point->x - _this->tx);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(1225)
				Float tmp20 = (tmp18 * tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(1225)
				Float tmp21 = (tmp17 + tmp20);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(1225)
				Float tmp22 = (tmp14 * tmp21);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(1225)
				Float px = tmp22;		HX_STACK_VAR(px,"px");
				HX_STACK_LINE(1225)
				Float tmp23 = (Float(((Float)1.0)) / Float(norm));		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(1225)
				Float tmp24 = _this->a;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(1225)
				Float tmp25 = (point->y - _this->ty);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(1225)
				Float tmp26 = (tmp24 * tmp25);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(1225)
				Float tmp27 = _this->b;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(1225)
				Float tmp28 = (_this->tx - point->x);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(1225)
				Float tmp29 = (tmp27 * tmp28);		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(1225)
				Float tmp30 = (tmp26 + tmp29);		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(1225)
				Float tmp31 = (tmp23 * tmp30);		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(1225)
				point->y = tmp31;
				HX_STACK_LINE(1225)
				point->x = px;
			}
		}
		HX_STACK_LINE(1227)
		this->__mouseX = point->x;
		HX_STACK_LINE(1228)
		this->__mouseY = point->y;
		HX_STACK_LINE(1230)
		Array< ::Dynamic > __stack = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(__stack,"__stack");
		HX_STACK_LINE(1232)
		Float tmp9 = this->__mouseX;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1232)
		Float tmp10 = this->__mouseY;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1232)
		bool tmp11 = this->__hitTest(tmp9,tmp10,false,__stack,true,hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(1232)
		if ((tmp11)){
			HX_STACK_LINE(1234)
			int tmp12 = (__stack->length - (int)1);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1234)
			::openfl::display::DisplayObject tmp13 = __stack->__get(tmp12).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(1234)
			::openfl::display::DisplayObject target = tmp13;		HX_STACK_VAR(target,"target");
			HX_STACK_LINE(1235)
			bool tmp14 = (target == null());		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(1235)
			if ((tmp14)){
				HX_STACK_LINE(1235)
				target = hx::ObjectPtr<OBJ_>(this);
			}
			HX_STACK_LINE(1236)
			::openfl::geom::Point tmp15 = point;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(1236)
			::openfl::geom::Point tmp16 = target->globalToLocal(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(1236)
			::openfl::geom::Point localPoint = tmp16;		HX_STACK_VAR(localPoint,"localPoint");
			HX_STACK_LINE(1238)
			::String tmp17 = type;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(1238)
			Float tmp18 = this->__mouseX;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(1238)
			Float tmp19 = this->__mouseY;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(1238)
			::openfl::geom::Point tmp20 = localPoint;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(1238)
			::openfl::display::InteractiveObject tmp21 = ((::openfl::display::InteractiveObject)(target));		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(1238)
			::openfl::events::TouchEvent tmp22 = ::openfl::events::TouchEvent_obj::__create(tmp17,null(),tmp18,tmp19,tmp20,tmp21);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(1238)
			::openfl::events::TouchEvent touchEvent = tmp22;		HX_STACK_VAR(touchEvent,"touchEvent");
			HX_STACK_LINE(1239)
			touchEvent->touchPointID = touch->id;
			HX_STACK_LINE(1240)
			touchEvent->isPrimaryTouchPoint = true;
			HX_STACK_LINE(1242)
			::openfl::events::TouchEvent tmp23 = touchEvent;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(1242)
			this->__fireEvent(tmp23,__stack);
		}
		else{
			HX_STACK_LINE(1246)
			::String tmp12 = type;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1246)
			Float tmp13 = this->__mouseX;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(1246)
			Float tmp14 = this->__mouseY;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(1246)
			::openfl::geom::Point tmp15 = point;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(1246)
			::openfl::events::TouchEvent tmp16 = ::openfl::events::TouchEvent_obj::__create(tmp12,null(),tmp13,tmp14,tmp15,hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(1246)
			::openfl::events::TouchEvent touchEvent = tmp16;		HX_STACK_VAR(touchEvent,"touchEvent");
			HX_STACK_LINE(1247)
			touchEvent->touchPointID = touch->id;
			HX_STACK_LINE(1248)
			touchEvent->isPrimaryTouchPoint = true;
			HX_STACK_LINE(1250)
			::openfl::events::TouchEvent tmp17 = touchEvent;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(1250)
			::openfl::display::Stage tmp18 = this->stage;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(1250)
			this->__fireEvent(tmp17,Array_obj< ::Dynamic >::__new().Add(tmp18));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Stage_obj,__onTouch,(void))

Void Stage_obj::__renderDOM( ::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl.display.Stage","__renderDOM",0xffe8ac52,"openfl.display.Stage.__renderDOM","openfl/display/Stage.hx",1257,0xadca4c2c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_LINE(1259)
		{
			HX_STACK_LINE(1259)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1259)
			::openfl::_Vector::ObjectVector tmp = this->stage3Ds;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(1259)
			::openfl::_Vector::ObjectVector _g1 = tmp;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(1259)
			while((true)){
				HX_STACK_LINE(1259)
				int tmp1 = _g;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(1259)
				int tmp2 = _g1->get_length();		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(1259)
				bool tmp3 = (tmp1 < tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(1259)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(1259)
				if ((tmp4)){
					HX_STACK_LINE(1259)
					break;
				}
				HX_STACK_LINE(1259)
				int tmp5 = _g;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1259)
				::openfl::display::Stage3D tmp6 = _g1->get(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1259)
				::openfl::display::Stage3D stage3D = tmp6;		HX_STACK_VAR(stage3D,"stage3D");
				HX_STACK_LINE(1259)
				++(_g);
				HX_STACK_LINE(1261)
				::openfl::_internal::renderer::RenderSession tmp7 = renderSession;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1261)
				stage3D->__renderDOM(hx::ObjectPtr<OBJ_>(this),tmp7);
			}
		}
		HX_STACK_LINE(1265)
		::openfl::_internal::renderer::RenderSession tmp = renderSession;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1265)
		this->super::__renderDOM(tmp);
	}
return null();
}


Void Stage_obj::__renderGL( ::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl.display.Stage","__renderGL",0x3f237e35,"openfl.display.Stage.__renderGL","openfl/display/Stage.hx",1270,0xadca4c2c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_LINE(1272)
		{
			HX_STACK_LINE(1272)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1272)
			::openfl::_Vector::ObjectVector tmp = this->stage3Ds;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(1272)
			::openfl::_Vector::ObjectVector _g1 = tmp;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(1272)
			while((true)){
				HX_STACK_LINE(1272)
				int tmp1 = _g;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(1272)
				int tmp2 = _g1->get_length();		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(1272)
				bool tmp3 = (tmp1 < tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(1272)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(1272)
				if ((tmp4)){
					HX_STACK_LINE(1272)
					break;
				}
				HX_STACK_LINE(1272)
				int tmp5 = _g;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1272)
				::openfl::display::Stage3D tmp6 = _g1->get(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1272)
				::openfl::display::Stage3D stage3D = tmp6;		HX_STACK_VAR(stage3D,"stage3D");
				HX_STACK_LINE(1272)
				++(_g);
				HX_STACK_LINE(1274)
				::openfl::_internal::renderer::RenderSession tmp7 = renderSession;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1274)
				stage3D->__renderGL(hx::ObjectPtr<OBJ_>(this),tmp7);
			}
		}
		HX_STACK_LINE(1278)
		::openfl::_internal::renderer::RenderSession tmp = renderSession;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1278)
		this->super::__renderGL(tmp);
	}
return null();
}


Void Stage_obj::__resize( ){
{
		HX_STACK_FRAME("openfl.display.Stage","__resize",0x872a0aae,"openfl.display.Stage.__resize","openfl/display/Stage.hx",1283,0xadca4c2c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(1285)
		::lime::ui::Window tmp = this->window;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1285)
		int tmp1 = tmp->__width;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1285)
		::lime::ui::Window tmp2 = this->window;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1285)
		Float tmp3 = tmp2->__scale;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1285)
		Float tmp4 = (tmp1 * tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1285)
		int tmp5 = ::Std_obj::_int(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1285)
		int windowWidth = tmp5;		HX_STACK_VAR(windowWidth,"windowWidth");
		HX_STACK_LINE(1286)
		::lime::ui::Window tmp6 = this->window;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1286)
		int tmp7 = tmp6->__height;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1286)
		::lime::ui::Window tmp8 = this->window;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1286)
		Float tmp9 = tmp8->__scale;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1286)
		Float tmp10 = (tmp7 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1286)
		int tmp11 = ::Std_obj::_int(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(1286)
		int windowHeight = tmp11;		HX_STACK_VAR(windowHeight,"windowHeight");
		HX_STACK_LINE(1288)
		::openfl::geom::Matrix tmp12 = this->__displayMatrix;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(1288)
		tmp12->identity();
		HX_STACK_LINE(1290)
		int tmp13 = this->__logicalWidth;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(1290)
		bool tmp14 = (tmp13 == (int)0);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(1290)
		bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(1290)
		if ((tmp14)){
			HX_STACK_LINE(1290)
			int tmp16 = this->__logicalHeight;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(1290)
			int tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(1290)
			tmp15 = (tmp17 == (int)0);
		}
		else{
			HX_STACK_LINE(1290)
			tmp15 = false;
		}
		HX_STACK_LINE(1290)
		if ((tmp15)){
			HX_STACK_LINE(1292)
			this->stageWidth = windowWidth;
			HX_STACK_LINE(1293)
			this->stageHeight = windowHeight;
		}
		else{
			HX_STACK_LINE(1297)
			int tmp16 = this->__logicalWidth;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(1297)
			this->stageWidth = tmp16;
			HX_STACK_LINE(1298)
			int tmp17 = this->__logicalHeight;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(1298)
			this->stageHeight = tmp17;
			HX_STACK_LINE(1300)
			int tmp18 = windowWidth;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(1300)
			int tmp19 = this->stageWidth;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(1300)
			Float tmp20 = (Float(tmp18) / Float(tmp19));		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(1300)
			Float scaleX = tmp20;		HX_STACK_VAR(scaleX,"scaleX");
			HX_STACK_LINE(1301)
			int tmp21 = windowHeight;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(1301)
			int tmp22 = this->stageHeight;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(1301)
			Float tmp23 = (Float(tmp21) / Float(tmp22));		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(1301)
			Float scaleY = tmp23;		HX_STACK_VAR(scaleY,"scaleY");
			HX_STACK_LINE(1302)
			Float tmp24 = scaleX;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(1302)
			Float tmp25 = scaleY;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(1302)
			Float tmp26 = ::Math_obj::min(tmp24,tmp25);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(1302)
			Float targetScale = tmp26;		HX_STACK_VAR(targetScale,"targetScale");
			HX_STACK_LINE(1304)
			int tmp27 = windowWidth;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(1304)
			int tmp28 = this->stageWidth;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(1304)
			Float tmp29 = targetScale;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(1304)
			Float tmp30 = (tmp28 * tmp29);		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(1304)
			Float tmp31 = (tmp27 - tmp30);		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(1304)
			Float tmp32 = (Float(tmp31) / Float((int)2));		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(1304)
			int tmp33 = ::Math_obj::round(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(1304)
			int offsetX = tmp33;		HX_STACK_VAR(offsetX,"offsetX");
			HX_STACK_LINE(1305)
			int tmp34 = windowHeight;		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(1305)
			int tmp35 = this->stageHeight;		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(1305)
			Float tmp36 = targetScale;		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(1305)
			Float tmp37 = (tmp35 * tmp36);		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(1305)
			Float tmp38 = (tmp34 - tmp37);		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(1305)
			Float tmp39 = (Float(tmp38) / Float((int)2));		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(1305)
			int tmp40 = ::Math_obj::round(tmp39);		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(1305)
			int offsetY = tmp40;		HX_STACK_VAR(offsetY,"offsetY");
			HX_STACK_LINE(1307)
			::openfl::geom::Matrix tmp41 = this->__displayMatrix;		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(1307)
			Float tmp42 = targetScale;		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(1307)
			Float tmp43 = targetScale;		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(1307)
			tmp41->scale(tmp42,tmp43);
			HX_STACK_LINE(1308)
			::openfl::geom::Matrix tmp44 = this->__displayMatrix;		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(1308)
			int tmp45 = offsetX;		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(1308)
			int tmp46 = offsetY;		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(1308)
			tmp44->translate(tmp45,tmp46);
		}
		HX_STACK_LINE(1312)
		{
			HX_STACK_LINE(1312)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1312)
			::openfl::_Vector::ObjectVector tmp16 = this->stage3Ds;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(1312)
			::openfl::_Vector::ObjectVector _g1 = tmp16;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(1312)
			while((true)){
				HX_STACK_LINE(1312)
				int tmp17 = _g;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(1312)
				int tmp18 = _g1->get_length();		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(1312)
				bool tmp19 = (tmp17 < tmp18);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(1312)
				bool tmp20 = !(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(1312)
				if ((tmp20)){
					HX_STACK_LINE(1312)
					break;
				}
				HX_STACK_LINE(1312)
				int tmp21 = _g;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(1312)
				::openfl::display::Stage3D tmp22 = _g1->get(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(1312)
				::openfl::display::Stage3D stage3D = tmp22;		HX_STACK_VAR(stage3D,"stage3D");
				HX_STACK_LINE(1312)
				++(_g);
				HX_STACK_LINE(1314)
				int tmp23 = this->stageWidth;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(1314)
				int tmp24 = this->stageHeight;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(1314)
				stage3D->__resize(tmp23,tmp24);
			}
		}
		HX_STACK_LINE(1318)
		::openfl::_internal::renderer::AbstractRenderer tmp16 = this->__renderer;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(1318)
		bool tmp17 = (tmp16 != null());		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(1318)
		if ((tmp17)){
			HX_STACK_LINE(1320)
			::openfl::_internal::renderer::AbstractRenderer tmp18 = this->__renderer;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(1320)
			int tmp19 = this->stageWidth;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(1320)
			int tmp20 = this->stageHeight;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(1320)
			tmp18->resize(tmp19,tmp20);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Stage_obj,__resize,(void))

Void Stage_obj::__setLogicalSize( int width,int height){
{
		HX_STACK_FRAME("openfl.display.Stage","__setLogicalSize",0x16d2dd62,"openfl.display.Stage.__setLogicalSize","openfl/display/Stage.hx",1327,0xadca4c2c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_LINE(1329)
		this->__logicalWidth = width;
		HX_STACK_LINE(1330)
		this->__logicalHeight = height;
		HX_STACK_LINE(1332)
		this->__resize();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Stage_obj,__setLogicalSize,(void))

Void Stage_obj::__startDrag( ::openfl::display::Sprite sprite,bool lockCenter,::openfl::geom::Rectangle bounds){
{
		HX_STACK_FRAME("openfl.display.Stage","__startDrag",0x2df4a4fc,"openfl.display.Stage.__startDrag","openfl/display/Stage.hx",1337,0xadca4c2c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(sprite,"sprite")
		HX_STACK_ARG(lockCenter,"lockCenter")
		HX_STACK_ARG(bounds,"bounds")
		HX_STACK_LINE(1339)
		bool tmp = (bounds == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1339)
		::openfl::geom::Rectangle tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1339)
		if ((tmp)){
			HX_STACK_LINE(1339)
			tmp1 = null();
		}
		else{
			HX_STACK_LINE(1339)
			tmp1 = bounds->clone();
		}
		HX_STACK_LINE(1339)
		this->__dragBounds = tmp1;
		HX_STACK_LINE(1340)
		this->__dragObject = sprite;
		HX_STACK_LINE(1342)
		::openfl::display::Sprite tmp2 = this->__dragObject;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1342)
		bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1342)
		if ((tmp3)){
			HX_STACK_LINE(1344)
			bool tmp4 = lockCenter;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1344)
			if ((tmp4)){
				HX_STACK_LINE(1346)
				::openfl::display::Sprite tmp5 = this->__dragObject;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1346)
				Float tmp6 = tmp5->get_width();		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1346)
				Float tmp7 = -(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1346)
				Float tmp8 = (Float(tmp7) / Float((int)2));		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1346)
				this->__dragOffsetX = tmp8;
				HX_STACK_LINE(1347)
				::openfl::display::Sprite tmp9 = this->__dragObject;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1347)
				Float tmp10 = tmp9->get_height();		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(1347)
				Float tmp11 = -(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(1347)
				Float tmp12 = (Float(tmp11) / Float((int)2));		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(1347)
				this->__dragOffsetY = tmp12;
			}
			else{
				HX_STACK_LINE(1351)
				Float tmp5 = this->get_mouseX();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1351)
				Float tmp6 = this->get_mouseY();		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1351)
				::openfl::geom::Point tmp7 = ::openfl::geom::Point_obj::__new(tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1351)
				::openfl::geom::Point mouse = tmp7;		HX_STACK_VAR(mouse,"mouse");
				HX_STACK_LINE(1352)
				::openfl::display::Sprite tmp8 = this->__dragObject;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1352)
				::openfl::display::DisplayObjectContainer parent = tmp8->parent;		HX_STACK_VAR(parent,"parent");
				HX_STACK_LINE(1354)
				bool tmp9 = (parent != null());		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1354)
				if ((tmp9)){
					HX_STACK_LINE(1356)
					::openfl::geom::Point tmp10 = mouse;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(1356)
					::openfl::geom::Point tmp11 = parent->globalToLocal(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(1356)
					mouse = tmp11;
				}
				HX_STACK_LINE(1360)
				::openfl::display::Sprite tmp10 = this->__dragObject;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(1360)
				Float tmp11 = tmp10->get_x();		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(1360)
				Float tmp12 = mouse->x;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(1360)
				Float tmp13 = (tmp11 - tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(1360)
				this->__dragOffsetX = tmp13;
				HX_STACK_LINE(1361)
				::openfl::display::Sprite tmp14 = this->__dragObject;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(1361)
				Float tmp15 = tmp14->get_y();		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(1361)
				Float tmp16 = mouse->y;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(1361)
				Float tmp17 = (tmp15 - tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(1361)
				this->__dragOffsetY = tmp17;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Stage_obj,__startDrag,(void))

Void Stage_obj::__stopDrag( ::openfl::display::Sprite sprite){
{
		HX_STACK_FRAME("openfl.display.Stage","__stopDrag",0x21724450,"openfl.display.Stage.__stopDrag","openfl/display/Stage.hx",1370,0xadca4c2c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(sprite,"sprite")
		HX_STACK_LINE(1372)
		this->__dragBounds = null();
		HX_STACK_LINE(1373)
		this->__dragObject = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,__stopDrag,(void))

Void Stage_obj::__update( bool transformOnly,bool updateChildren,::openfl::display::Graphics maskGrahpics){
{
		HX_STACK_FRAME("openfl.display.Stage","__update",0x05b436c3,"openfl.display.Stage.__update","openfl/display/Stage.hx",1378,0xadca4c2c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(transformOnly,"transformOnly")
		HX_STACK_ARG(updateChildren,"updateChildren")
		HX_STACK_ARG(maskGrahpics,"maskGrahpics")
		HX_STACK_LINE(1380)
		bool tmp = transformOnly;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1380)
		if ((tmp)){
			HX_STACK_LINE(1382)
			int tmp1 = ::openfl::display::DisplayObject_obj::__worldTransformDirty;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1382)
			bool tmp2 = (tmp1 > (int)0);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1382)
			if ((tmp2)){
				HX_STACK_LINE(1384)
				bool tmp3 = updateChildren;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(1384)
				::openfl::display::Graphics tmp4 = maskGrahpics;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(1384)
				this->super::__update(true,tmp3,tmp4);
				HX_STACK_LINE(1386)
				bool tmp5 = updateChildren;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1386)
				if ((tmp5)){
					HX_STACK_LINE(1388)
					::openfl::display::DisplayObject_obj::__worldTransformDirty = (int)0;
					HX_STACK_LINE(1389)
					this->__dirty = true;
				}
			}
		}
		else{
			HX_STACK_LINE(1397)
			int tmp1 = ::openfl::display::DisplayObject_obj::__worldTransformDirty;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1397)
			bool tmp2 = (tmp1 > (int)0);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1397)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1397)
			bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1397)
			bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1397)
			if ((tmp4)){
				HX_STACK_LINE(1397)
				tmp5 = this->__dirty;
			}
			else{
				HX_STACK_LINE(1397)
				tmp5 = true;
			}
			HX_STACK_LINE(1397)
			bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1397)
			bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1397)
			if ((tmp6)){
				HX_STACK_LINE(1397)
				int tmp8 = ::openfl::display::DisplayObject_obj::__worldRenderDirty;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1397)
				int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1397)
				tmp7 = (tmp9 > (int)0);
			}
			else{
				HX_STACK_LINE(1397)
				tmp7 = true;
			}
			HX_STACK_LINE(1397)
			if ((tmp7)){
				HX_STACK_LINE(1399)
				bool tmp8 = updateChildren;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1399)
				::openfl::display::Graphics tmp9 = maskGrahpics;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1399)
				this->super::__update(false,tmp8,tmp9);
				HX_STACK_LINE(1401)
				bool tmp10 = updateChildren;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(1401)
				if ((tmp10)){
					HX_STACK_LINE(1407)
					::openfl::display::DisplayObject_obj::__worldTransformDirty = (int)0;
					HX_STACK_LINE(1408)
					::openfl::display::DisplayObject_obj::__worldRenderDirty = (int)0;
					HX_STACK_LINE(1409)
					this->__dirty = false;
				}
			}
		}
	}
return null();
}


int Stage_obj::get_color( ){
	HX_STACK_FRAME("openfl.display.Stage","get_color",0x66e36ee0,"openfl.display.Stage.get_color","openfl/display/Stage.hx",1440,0xadca4c2c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1442)
	int tmp = this->__color;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1442)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Stage_obj,get_color,return )

int Stage_obj::set_color( int value){
	HX_STACK_FRAME("openfl.display.Stage","set_color",0x4a345aec,"openfl.display.Stage.set_color","openfl/display/Stage.hx",1447,0xadca4c2c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1449)
	int tmp = (int(value) & int((int)16711680));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1449)
	int tmp1 = hx::UShr(tmp,(int)16);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1449)
	int r = tmp1;		HX_STACK_VAR(r,"r");
	HX_STACK_LINE(1450)
	int tmp2 = (int(value) & int((int)65280));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1450)
	int tmp3 = hx::UShr(tmp2,(int)8);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1450)
	int g = tmp3;		HX_STACK_VAR(g,"g");
	HX_STACK_LINE(1451)
	int tmp4 = (int(value) & int((int)255));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1451)
	int b = tmp4;		HX_STACK_VAR(b,"b");
	HX_STACK_LINE(1453)
	Float tmp5 = (Float(r) / Float((int)255));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1453)
	Float tmp6 = (Float(g) / Float((int)255));		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(1453)
	Float tmp7 = (Float(b) / Float((int)255));		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(1453)
	this->__colorSplit = Array_obj< Float >::__new().Add(tmp5).Add(tmp6).Add(tmp7);
	HX_STACK_LINE(1454)
	int tmp8 = value;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(1454)
	::String tmp9 = ::StringTools_obj::hex(tmp8,(int)6);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(1454)
	::String tmp10 = (HX_HCSTRING("#","\x23","\x00","\x00","\x00") + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(1454)
	this->__colorString = tmp10;
	HX_STACK_LINE(1456)
	int tmp11 = this->__color = value;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(1456)
	return tmp11;
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,set_color,return )

Dynamic Stage_obj::get_displayState( ){
	HX_STACK_FRAME("openfl.display.Stage","get_displayState",0x7908a892,"openfl.display.Stage.get_displayState","openfl/display/Stage.hx",1461,0xadca4c2c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1463)
	Dynamic tmp = this->__displayState;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1463)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Stage_obj,get_displayState,return )

Dynamic Stage_obj::set_displayState( Dynamic value){
	HX_STACK_FRAME("openfl.display.Stage","set_displayState",0xcf4a9606,"openfl.display.Stage.set_displayState","openfl/display/Stage.hx",1468,0xadca4c2c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1470)
	::lime::ui::Window tmp = this->window;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1470)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1470)
	if ((tmp1)){
		HX_STACK_LINE(1472)
		Dynamic tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1472)
		switch( (int)(tmp2)){
			case (int)2: {
				HX_STACK_LINE(1476)
				::lime::ui::Window tmp3 = this->window;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(1476)
				bool tmp4 = tmp3->__fullscreen;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(1476)
				if ((tmp4)){
					HX_STACK_LINE(1479)
					::lime::ui::Window tmp5 = this->window;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(1479)
					tmp5->set_fullscreen(false);
					HX_STACK_LINE(1481)
					this->__resize();
					HX_STACK_LINE(1483)
					::openfl::events::Event tmp6 = ::openfl::events::Event_obj::__new(HX_HCSTRING("fullScreen","\x5b","\xae","\x48","\x2e"),null(),null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(1483)
					this->dispatchEvent(tmp6);
					HX_STACK_LINE(1484)
					::openfl::events::FullScreenEvent tmp7 = ::openfl::events::FullScreenEvent_obj::__new(HX_HCSTRING("fullScreen","\x5b","\xae","\x48","\x2e"),false,false,false,true);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(1484)
					this->dispatchEvent(tmp7);
				}
			}
			;break;
			default: {
				HX_STACK_LINE(1490)
				::lime::ui::Window tmp3 = this->window;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(1490)
				bool tmp4 = tmp3->__fullscreen;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(1490)
				bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1490)
				if ((tmp5)){
					HX_STACK_LINE(1493)
					::lime::ui::Window tmp6 = this->window;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(1493)
					tmp6->set_fullscreen(true);
					HX_STACK_LINE(1495)
					this->__resize();
					HX_STACK_LINE(1497)
					::openfl::events::Event tmp7 = ::openfl::events::Event_obj::__new(HX_HCSTRING("fullScreen","\x5b","\xae","\x48","\x2e"),null(),null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(1497)
					this->dispatchEvent(tmp7);
					HX_STACK_LINE(1498)
					::openfl::events::FullScreenEvent tmp8 = ::openfl::events::FullScreenEvent_obj::__new(HX_HCSTRING("fullScreen","\x5b","\xae","\x48","\x2e"),false,false,true,true);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(1498)
					this->dispatchEvent(tmp8);
				}
			}
		}
	}
	HX_STACK_LINE(1506)
	Dynamic tmp2 = this->__displayState = value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1506)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,set_displayState,return )

::openfl::display::InteractiveObject Stage_obj::get_focus( ){
	HX_STACK_FRAME("openfl.display.Stage","get_focus",0x21105d55,"openfl.display.Stage.get_focus","openfl/display/Stage.hx",1511,0xadca4c2c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1513)
	::openfl::display::InteractiveObject tmp = this->__focus;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1513)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Stage_obj,get_focus,return )

::openfl::display::InteractiveObject Stage_obj::set_focus( ::openfl::display::InteractiveObject value){
	HX_STACK_FRAME("openfl.display.Stage","set_focus",0x04614961,"openfl.display.Stage.set_focus","openfl/display/Stage.hx",1518,0xadca4c2c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1520)
	::openfl::display::InteractiveObject tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1520)
	::openfl::display::InteractiveObject tmp1 = this->__focus;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1520)
	bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1520)
	if ((tmp2)){
		HX_STACK_LINE(1522)
		::openfl::display::InteractiveObject tmp3 = this->__focus;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1522)
		::openfl::display::InteractiveObject oldFocus = tmp3;		HX_STACK_VAR(oldFocus,"oldFocus");
		HX_STACK_LINE(1523)
		this->__focus = value;
		HX_STACK_LINE(1525)
		bool tmp4 = (oldFocus != null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1525)
		if ((tmp4)){
			HX_STACK_LINE(1527)
			::openfl::display::InteractiveObject tmp5 = this->__focus;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1527)
			::openfl::events::FocusEvent tmp6 = ::openfl::events::FocusEvent_obj::__new(HX_HCSTRING("focusOut","\x96","\x6f","\x5e","\x11"),true,false,tmp5,false,(int)0);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1527)
			::openfl::events::FocusEvent event = tmp6;		HX_STACK_VAR(event,"event");
			HX_STACK_LINE(1528)
			this->__stack = Array_obj< ::Dynamic >::__new();
			HX_STACK_LINE(1529)
			oldFocus->__getInteractive(this->__stack);
			HX_STACK_LINE(1530)
			this->__stack->reverse();
			HX_STACK_LINE(1531)
			::openfl::events::FocusEvent tmp7 = event;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1531)
			this->__fireEvent(tmp7,this->__stack);
		}
		HX_STACK_LINE(1535)
		::openfl::display::InteractiveObject tmp5 = this->__focus;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1535)
		bool tmp6 = (tmp5 != null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1535)
		if ((tmp6)){
			HX_STACK_LINE(1537)
			::openfl::events::FocusEvent tmp7 = ::openfl::events::FocusEvent_obj::__new(HX_HCSTRING("focusIn","\xdd","\x45","\x83","\x41"),true,false,oldFocus,false,(int)0);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1537)
			::openfl::events::FocusEvent event = tmp7;		HX_STACK_VAR(event,"event");
			HX_STACK_LINE(1538)
			this->__stack = Array_obj< ::Dynamic >::__new();
			HX_STACK_LINE(1539)
			value->__getInteractive(this->__stack);
			HX_STACK_LINE(1540)
			this->__stack->reverse();
			HX_STACK_LINE(1541)
			::openfl::events::FocusEvent tmp8 = event;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1541)
			this->__fireEvent(tmp8,this->__stack);
		}
	}
	HX_STACK_LINE(1547)
	::openfl::display::InteractiveObject tmp3 = this->__focus;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1547)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,set_focus,return )

Float Stage_obj::get_frameRate( ){
	HX_STACK_FRAME("openfl.display.Stage","get_frameRate",0x6a8511aa,"openfl.display.Stage.get_frameRate","openfl/display/Stage.hx",1552,0xadca4c2c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1554)
	::lime::app::Application tmp = this->application;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1554)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1554)
	if ((tmp1)){
		HX_STACK_LINE(1556)
		::lime::app::Application tmp2 = this->application;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1556)
		Float tmp3 = tmp2->backend->getFrameRate();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1556)
		return tmp3;
	}
	HX_STACK_LINE(1560)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(Stage_obj,get_frameRate,return )

Float Stage_obj::set_frameRate( Float value){
	HX_STACK_FRAME("openfl.display.Stage","set_frameRate",0xaf8af3b6,"openfl.display.Stage.set_frameRate","openfl/display/Stage.hx",1565,0xadca4c2c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1567)
	::lime::app::Application tmp = this->application;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1567)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1567)
	if ((tmp1)){
		HX_STACK_LINE(1569)
		::lime::app::Application tmp2 = this->application;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1569)
		Float tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1569)
		Float tmp4 = tmp2->backend->setFrameRate(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1569)
		return tmp4;
	}
	HX_STACK_LINE(1573)
	Float tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1573)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,set_frameRate,return )

Float Stage_obj::get_mouseX( ){
	HX_STACK_FRAME("openfl.display.Stage","get_mouseX",0xa5a51a76,"openfl.display.Stage.get_mouseX","openfl/display/Stage.hx",1578,0xadca4c2c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1580)
	Float tmp = this->__mouseX;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1580)
	return tmp;
}


Float Stage_obj::get_mouseY( ){
	HX_STACK_FRAME("openfl.display.Stage","get_mouseY",0xa5a51a77,"openfl.display.Stage.get_mouseY","openfl/display/Stage.hx",1585,0xadca4c2c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1587)
	Float tmp = this->__mouseY;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1587)
	return tmp;
}



Stage_obj::Stage_obj()
{
}

void Stage_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Stage);
	HX_MARK_MEMBER_NAME(align,"align");
	HX_MARK_MEMBER_NAME(allowsFullScreen,"allowsFullScreen");
	HX_MARK_MEMBER_NAME(allowsFullScreenInteractive,"allowsFullScreenInteractive");
	HX_MARK_MEMBER_NAME(application,"application");
	HX_MARK_MEMBER_NAME(quality,"quality");
	HX_MARK_MEMBER_NAME(scaleMode,"scaleMode");
	HX_MARK_MEMBER_NAME(stage3Ds,"stage3Ds");
	HX_MARK_MEMBER_NAME(stageFocusRect,"stageFocusRect");
	HX_MARK_MEMBER_NAME(stageHeight,"stageHeight");
	HX_MARK_MEMBER_NAME(stageWidth,"stageWidth");
	HX_MARK_MEMBER_NAME(window,"window");
	HX_MARK_MEMBER_NAME(__cacheFocus,"__cacheFocus");
	HX_MARK_MEMBER_NAME(__clearBeforeRender,"__clearBeforeRender");
	HX_MARK_MEMBER_NAME(__color,"__color");
	HX_MARK_MEMBER_NAME(__colorSplit,"__colorSplit");
	HX_MARK_MEMBER_NAME(__colorString,"__colorString");
	HX_MARK_MEMBER_NAME(__deltaTime,"__deltaTime");
	HX_MARK_MEMBER_NAME(__dirty,"__dirty");
	HX_MARK_MEMBER_NAME(__displayMatrix,"__displayMatrix");
	HX_MARK_MEMBER_NAME(__displayState,"__displayState");
	HX_MARK_MEMBER_NAME(__dragBounds,"__dragBounds");
	HX_MARK_MEMBER_NAME(__dragObject,"__dragObject");
	HX_MARK_MEMBER_NAME(__dragOffsetX,"__dragOffsetX");
	HX_MARK_MEMBER_NAME(__dragOffsetY,"__dragOffsetY");
	HX_MARK_MEMBER_NAME(__focus,"__focus");
	HX_MARK_MEMBER_NAME(__fullscreen,"__fullscreen");
	HX_MARK_MEMBER_NAME(__invalidated,"__invalidated");
	HX_MARK_MEMBER_NAME(__lastClickTime,"__lastClickTime");
	HX_MARK_MEMBER_NAME(__logicalWidth,"__logicalWidth");
	HX_MARK_MEMBER_NAME(__logicalHeight,"__logicalHeight");
	HX_MARK_MEMBER_NAME(__macKeyboard,"__macKeyboard");
	HX_MARK_MEMBER_NAME(__mouseDownLeft,"__mouseDownLeft");
	HX_MARK_MEMBER_NAME(__mouseDownMiddle,"__mouseDownMiddle");
	HX_MARK_MEMBER_NAME(__mouseDownRight,"__mouseDownRight");
	HX_MARK_MEMBER_NAME(__mouseOutStack,"__mouseOutStack");
	HX_MARK_MEMBER_NAME(__mouseX,"__mouseX");
	HX_MARK_MEMBER_NAME(__mouseY,"__mouseY");
	HX_MARK_MEMBER_NAME(__renderer,"__renderer");
	HX_MARK_MEMBER_NAME(__rendering,"__rendering");
	HX_MARK_MEMBER_NAME(__stack,"__stack");
	HX_MARK_MEMBER_NAME(__transparent,"__transparent");
	HX_MARK_MEMBER_NAME(__wasDirty,"__wasDirty");
	::openfl::display::DisplayObjectContainer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Stage_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(align,"align");
	HX_VISIT_MEMBER_NAME(allowsFullScreen,"allowsFullScreen");
	HX_VISIT_MEMBER_NAME(allowsFullScreenInteractive,"allowsFullScreenInteractive");
	HX_VISIT_MEMBER_NAME(application,"application");
	HX_VISIT_MEMBER_NAME(quality,"quality");
	HX_VISIT_MEMBER_NAME(scaleMode,"scaleMode");
	HX_VISIT_MEMBER_NAME(stage3Ds,"stage3Ds");
	HX_VISIT_MEMBER_NAME(stageFocusRect,"stageFocusRect");
	HX_VISIT_MEMBER_NAME(stageHeight,"stageHeight");
	HX_VISIT_MEMBER_NAME(stageWidth,"stageWidth");
	HX_VISIT_MEMBER_NAME(window,"window");
	HX_VISIT_MEMBER_NAME(__cacheFocus,"__cacheFocus");
	HX_VISIT_MEMBER_NAME(__clearBeforeRender,"__clearBeforeRender");
	HX_VISIT_MEMBER_NAME(__color,"__color");
	HX_VISIT_MEMBER_NAME(__colorSplit,"__colorSplit");
	HX_VISIT_MEMBER_NAME(__colorString,"__colorString");
	HX_VISIT_MEMBER_NAME(__deltaTime,"__deltaTime");
	HX_VISIT_MEMBER_NAME(__dirty,"__dirty");
	HX_VISIT_MEMBER_NAME(__displayMatrix,"__displayMatrix");
	HX_VISIT_MEMBER_NAME(__displayState,"__displayState");
	HX_VISIT_MEMBER_NAME(__dragBounds,"__dragBounds");
	HX_VISIT_MEMBER_NAME(__dragObject,"__dragObject");
	HX_VISIT_MEMBER_NAME(__dragOffsetX,"__dragOffsetX");
	HX_VISIT_MEMBER_NAME(__dragOffsetY,"__dragOffsetY");
	HX_VISIT_MEMBER_NAME(__focus,"__focus");
	HX_VISIT_MEMBER_NAME(__fullscreen,"__fullscreen");
	HX_VISIT_MEMBER_NAME(__invalidated,"__invalidated");
	HX_VISIT_MEMBER_NAME(__lastClickTime,"__lastClickTime");
	HX_VISIT_MEMBER_NAME(__logicalWidth,"__logicalWidth");
	HX_VISIT_MEMBER_NAME(__logicalHeight,"__logicalHeight");
	HX_VISIT_MEMBER_NAME(__macKeyboard,"__macKeyboard");
	HX_VISIT_MEMBER_NAME(__mouseDownLeft,"__mouseDownLeft");
	HX_VISIT_MEMBER_NAME(__mouseDownMiddle,"__mouseDownMiddle");
	HX_VISIT_MEMBER_NAME(__mouseDownRight,"__mouseDownRight");
	HX_VISIT_MEMBER_NAME(__mouseOutStack,"__mouseOutStack");
	HX_VISIT_MEMBER_NAME(__mouseX,"__mouseX");
	HX_VISIT_MEMBER_NAME(__mouseY,"__mouseY");
	HX_VISIT_MEMBER_NAME(__renderer,"__renderer");
	HX_VISIT_MEMBER_NAME(__rendering,"__rendering");
	HX_VISIT_MEMBER_NAME(__stack,"__stack");
	HX_VISIT_MEMBER_NAME(__transparent,"__transparent");
	HX_VISIT_MEMBER_NAME(__wasDirty,"__wasDirty");
	::openfl::display::DisplayObjectContainer_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Stage_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"align") ) { return align; }
		if (HX_FIELD_EQ(inName,"color") ) { if (inCallProp == hx::paccAlways) return get_color(); }
		if (HX_FIELD_EQ(inName,"focus") ) { if (inCallProp == hx::paccAlways) return get_focus(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"window") ) { return window; }
		if (HX_FIELD_EQ(inName,"render") ) { return render_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"__drag") ) { return __drag_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"quality") ) { return quality; }
		if (HX_FIELD_EQ(inName,"__color") ) { return __color; }
		if (HX_FIELD_EQ(inName,"__dirty") ) { return __dirty; }
		if (HX_FIELD_EQ(inName,"__focus") ) { return __focus; }
		if (HX_FIELD_EQ(inName,"__stack") ) { return __stack; }
		if (HX_FIELD_EQ(inName,"onKeyUp") ) { return onKeyUp_dyn(); }
		if (HX_FIELD_EQ(inName,"__onKey") ) { return __onKey_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"stage3Ds") ) { return stage3Ds; }
		if (HX_FIELD_EQ(inName,"__mouseX") ) { return __mouseX; }
		if (HX_FIELD_EQ(inName,"__mouseY") ) { return __mouseY; }
		if (HX_FIELD_EQ(inName,"__resize") ) { return __resize_dyn(); }
		if (HX_FIELD_EQ(inName,"__update") ) { return __update_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"frameRate") ) { if (inCallProp == hx::paccAlways) return get_frameRate(); }
		if (HX_FIELD_EQ(inName,"scaleMode") ) { return scaleMode; }
		if (HX_FIELD_EQ(inName,"addWindow") ) { return addWindow_dyn(); }
		if (HX_FIELD_EQ(inName,"onKeyDown") ) { return onKeyDown_dyn(); }
		if (HX_FIELD_EQ(inName,"onMouseUp") ) { return onMouseUp_dyn(); }
		if (HX_FIELD_EQ(inName,"__onMouse") ) { return __onMouse_dyn(); }
		if (HX_FIELD_EQ(inName,"__onTouch") ) { return __onTouch_dyn(); }
		if (HX_FIELD_EQ(inName,"get_color") ) { return get_color_dyn(); }
		if (HX_FIELD_EQ(inName,"set_color") ) { return set_color_dyn(); }
		if (HX_FIELD_EQ(inName,"get_focus") ) { return get_focus_dyn(); }
		if (HX_FIELD_EQ(inName,"set_focus") ) { return set_focus_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"stageWidth") ) { return stageWidth; }
		if (HX_FIELD_EQ(inName,"__renderer") ) { return __renderer; }
		if (HX_FIELD_EQ(inName,"__wasDirty") ) { return __wasDirty; }
		if (HX_FIELD_EQ(inName,"invalidate") ) { return invalidate_dyn(); }
		if (HX_FIELD_EQ(inName,"onTextEdit") ) { return onTextEdit_dyn(); }
		if (HX_FIELD_EQ(inName,"onTouchEnd") ) { return onTouchEnd_dyn(); }
		if (HX_FIELD_EQ(inName,"__renderGL") ) { return __renderGL_dyn(); }
		if (HX_FIELD_EQ(inName,"__stopDrag") ) { return __stopDrag_dyn(); }
		if (HX_FIELD_EQ(inName,"get_mouseX") ) { return get_mouseX_dyn(); }
		if (HX_FIELD_EQ(inName,"get_mouseY") ) { return get_mouseY_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"application") ) { return application; }
		if (HX_FIELD_EQ(inName,"stageHeight") ) { return stageHeight; }
		if (HX_FIELD_EQ(inName,"__deltaTime") ) { return __deltaTime; }
		if (HX_FIELD_EQ(inName,"__rendering") ) { return __rendering; }
		if (HX_FIELD_EQ(inName,"addRenderer") ) { return addRenderer_dyn(); }
		if (HX_FIELD_EQ(inName,"onMouseDown") ) { return onMouseDown_dyn(); }
		if (HX_FIELD_EQ(inName,"onMouseMove") ) { return onMouseMove_dyn(); }
		if (HX_FIELD_EQ(inName,"onTextInput") ) { return onTextInput_dyn(); }
		if (HX_FIELD_EQ(inName,"onTouchMove") ) { return onTouchMove_dyn(); }
		if (HX_FIELD_EQ(inName,"__fireEvent") ) { return __fireEvent_dyn(); }
		if (HX_FIELD_EQ(inName,"__renderDOM") ) { return __renderDOM_dyn(); }
		if (HX_FIELD_EQ(inName,"__startDrag") ) { return __startDrag_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"displayState") ) { if (inCallProp == hx::paccAlways) return get_displayState(); }
		if (HX_FIELD_EQ(inName,"__cacheFocus") ) { return __cacheFocus; }
		if (HX_FIELD_EQ(inName,"__colorSplit") ) { return __colorSplit; }
		if (HX_FIELD_EQ(inName,"__dragBounds") ) { return __dragBounds; }
		if (HX_FIELD_EQ(inName,"__dragObject") ) { return __dragObject; }
		if (HX_FIELD_EQ(inName,"__fullscreen") ) { return __fullscreen; }
		if (HX_FIELD_EQ(inName,"removeWindow") ) { return removeWindow_dyn(); }
		if (HX_FIELD_EQ(inName,"setPreloader") ) { return setPreloader_dyn(); }
		if (HX_FIELD_EQ(inName,"onModuleExit") ) { return onModuleExit_dyn(); }
		if (HX_FIELD_EQ(inName,"onMouseWheel") ) { return onMouseWheel_dyn(); }
		if (HX_FIELD_EQ(inName,"onTouchStart") ) { return onTouchStart_dyn(); }
		if (HX_FIELD_EQ(inName,"onWindowMove") ) { return onWindowMove_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__colorString") ) { return __colorString; }
		if (HX_FIELD_EQ(inName,"__dragOffsetX") ) { return __dragOffsetX; }
		if (HX_FIELD_EQ(inName,"__dragOffsetY") ) { return __dragOffsetY; }
		if (HX_FIELD_EQ(inName,"__invalidated") ) { return __invalidated; }
		if (HX_FIELD_EQ(inName,"__macKeyboard") ) { return __macKeyboard; }
		if (HX_FIELD_EQ(inName,"__transparent") ) { return __transparent; }
		if (HX_FIELD_EQ(inName,"globalToLocal") ) { return globalToLocal_dyn(); }
		if (HX_FIELD_EQ(inName,"localToGlobal") ) { return localToGlobal_dyn(); }
		if (HX_FIELD_EQ(inName,"onWindowClose") ) { return onWindowClose_dyn(); }
		if (HX_FIELD_EQ(inName,"onWindowEnter") ) { return onWindowEnter_dyn(); }
		if (HX_FIELD_EQ(inName,"onWindowLeave") ) { return onWindowLeave_dyn(); }
		if (HX_FIELD_EQ(inName,"get_frameRate") ) { return get_frameRate_dyn(); }
		if (HX_FIELD_EQ(inName,"set_frameRate") ) { return set_frameRate_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"stageFocusRect") ) { return stageFocusRect; }
		if (HX_FIELD_EQ(inName,"__displayState") ) { return __displayState; }
		if (HX_FIELD_EQ(inName,"__logicalWidth") ) { return __logicalWidth; }
		if (HX_FIELD_EQ(inName,"registerModule") ) { return registerModule_dyn(); }
		if (HX_FIELD_EQ(inName,"removeRenderer") ) { return removeRenderer_dyn(); }
		if (HX_FIELD_EQ(inName,"onWindowCreate") ) { return onWindowCreate_dyn(); }
		if (HX_FIELD_EQ(inName,"onWindowResize") ) { return onWindowResize_dyn(); }
		if (HX_FIELD_EQ(inName,"__onMouseWheel") ) { return __onMouseWheel_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__displayMatrix") ) { return __displayMatrix; }
		if (HX_FIELD_EQ(inName,"__lastClickTime") ) { return __lastClickTime; }
		if (HX_FIELD_EQ(inName,"__logicalHeight") ) { return __logicalHeight; }
		if (HX_FIELD_EQ(inName,"__mouseDownLeft") ) { return __mouseDownLeft; }
		if (HX_FIELD_EQ(inName,"__mouseOutStack") ) { return __mouseOutStack; }
		if (HX_FIELD_EQ(inName,"onWindowFocusIn") ) { return onWindowFocusIn_dyn(); }
		if (HX_FIELD_EQ(inName,"onWindowRestore") ) { return onWindowRestore_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"allowsFullScreen") ) { return allowsFullScreen; }
		if (HX_FIELD_EQ(inName,"__mouseDownRight") ) { return __mouseDownRight; }
		if (HX_FIELD_EQ(inName,"unregisterModule") ) { return unregisterModule_dyn(); }
		if (HX_FIELD_EQ(inName,"onGamepadConnect") ) { return onGamepadConnect_dyn(); }
		if (HX_FIELD_EQ(inName,"onWindowActivate") ) { return onWindowActivate_dyn(); }
		if (HX_FIELD_EQ(inName,"onWindowDropFile") ) { return onWindowDropFile_dyn(); }
		if (HX_FIELD_EQ(inName,"onWindowFocusOut") ) { return onWindowFocusOut_dyn(); }
		if (HX_FIELD_EQ(inName,"onWindowMinimize") ) { return onWindowMinimize_dyn(); }
		if (HX_FIELD_EQ(inName,"__broadcastEvent") ) { return __broadcastEvent_dyn(); }
		if (HX_FIELD_EQ(inName,"__getInteractive") ) { return __getInteractive_dyn(); }
		if (HX_FIELD_EQ(inName,"__setLogicalSize") ) { return __setLogicalSize_dyn(); }
		if (HX_FIELD_EQ(inName,"get_displayState") ) { return get_displayState_dyn(); }
		if (HX_FIELD_EQ(inName,"set_displayState") ) { return set_displayState_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__mouseDownMiddle") ) { return __mouseDownMiddle; }
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
		if (HX_FIELD_EQ(inName,"__clearBeforeRender") ) { return __clearBeforeRender; }
		if (HX_FIELD_EQ(inName,"onGamepadButtonDown") ) { return onGamepadButtonDown_dyn(); }
		if (HX_FIELD_EQ(inName,"onGamepadDisconnect") ) { return onGamepadDisconnect_dyn(); }
		if (HX_FIELD_EQ(inName,"onMouseMoveRelative") ) { return onMouseMoveRelative_dyn(); }
		if (HX_FIELD_EQ(inName,"onRenderContextLost") ) { return onRenderContextLost_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"onJoystickButtonDown") ) { return onJoystickButtonDown_dyn(); }
		if (HX_FIELD_EQ(inName,"onJoystickDisconnect") ) { return onJoystickDisconnect_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"onJoystickTrackballMove") ) { return onJoystickTrackballMove_dyn(); }
		if (HX_FIELD_EQ(inName,"onRenderContextRestored") ) { return onRenderContextRestored_dyn(); }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"allowsFullScreenInteractive") ) { return allowsFullScreenInteractive; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Stage_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"align") ) { align=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"color") ) { if (inCallProp == hx::paccAlways) return set_color(inValue); }
		if (HX_FIELD_EQ(inName,"focus") ) { if (inCallProp == hx::paccAlways) return set_focus(inValue); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"window") ) { window=inValue.Cast< ::lime::ui::Window >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"quality") ) { quality=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__color") ) { __color=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__dirty") ) { __dirty=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__focus") ) { __focus=inValue.Cast< ::openfl::display::InteractiveObject >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__stack") ) { __stack=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"stage3Ds") ) { stage3Ds=inValue.Cast< ::openfl::_Vector::ObjectVector >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__mouseX") ) { __mouseX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__mouseY") ) { __mouseY=inValue.Cast< Float >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"frameRate") ) { if (inCallProp == hx::paccAlways) return set_frameRate(inValue); }
		if (HX_FIELD_EQ(inName,"scaleMode") ) { scaleMode=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"stageWidth") ) { stageWidth=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__renderer") ) { __renderer=inValue.Cast< ::openfl::_internal::renderer::AbstractRenderer >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__wasDirty") ) { __wasDirty=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"application") ) { application=inValue.Cast< ::lime::app::Application >(); return inValue; }
		if (HX_FIELD_EQ(inName,"stageHeight") ) { stageHeight=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__deltaTime") ) { __deltaTime=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__rendering") ) { __rendering=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"displayState") ) { if (inCallProp == hx::paccAlways) return set_displayState(inValue); }
		if (HX_FIELD_EQ(inName,"__cacheFocus") ) { __cacheFocus=inValue.Cast< ::openfl::display::InteractiveObject >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__colorSplit") ) { __colorSplit=inValue.Cast< Array< Float > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__dragBounds") ) { __dragBounds=inValue.Cast< ::openfl::geom::Rectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__dragObject") ) { __dragObject=inValue.Cast< ::openfl::display::Sprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__fullscreen") ) { __fullscreen=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__colorString") ) { __colorString=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__dragOffsetX") ) { __dragOffsetX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__dragOffsetY") ) { __dragOffsetY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__invalidated") ) { __invalidated=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__macKeyboard") ) { __macKeyboard=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__transparent") ) { __transparent=inValue.Cast< bool >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"stageFocusRect") ) { stageFocusRect=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__displayState") ) { __displayState=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__logicalWidth") ) { __logicalWidth=inValue.Cast< int >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__displayMatrix") ) { __displayMatrix=inValue.Cast< ::openfl::geom::Matrix >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__lastClickTime") ) { __lastClickTime=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__logicalHeight") ) { __logicalHeight=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__mouseDownLeft") ) { __mouseDownLeft=inValue.Cast< ::openfl::display::InteractiveObject >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__mouseOutStack") ) { __mouseOutStack=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"allowsFullScreen") ) { allowsFullScreen=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__mouseDownRight") ) { __mouseDownRight=inValue.Cast< ::openfl::display::InteractiveObject >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__mouseDownMiddle") ) { __mouseDownMiddle=inValue.Cast< ::openfl::display::InteractiveObject >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"__clearBeforeRender") ) { __clearBeforeRender=inValue.Cast< bool >(); return inValue; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"allowsFullScreenInteractive") ) { allowsFullScreenInteractive=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Stage_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("align","\xc5","\x56","\x91","\x21"));
	outFields->push(HX_HCSTRING("allowsFullScreen","\xc5","\x66","\xdc","\x4b"));
	outFields->push(HX_HCSTRING("allowsFullScreenInteractive","\x1d","\x8b","\x2c","\xc8"));
	outFields->push(HX_HCSTRING("application","\x50","\xab","\x3e","\x2a"));
	outFields->push(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"));
	outFields->push(HX_HCSTRING("displayState","\x6f","\x4c","\x64","\x90"));
	outFields->push(HX_HCSTRING("focus","\xd8","\x5f","\x89","\x04"));
	outFields->push(HX_HCSTRING("frameRate","\xad","\x11","\x25","\x39"));
	outFields->push(HX_HCSTRING("quality","\xbf","\x04","\x4c","\x44"));
	outFields->push(HX_HCSTRING("scaleMode","\x0d","\xdb","\xd3","\x2b"));
	outFields->push(HX_HCSTRING("stage3Ds","\xa4","\x4e","\x30","\xe3"));
	outFields->push(HX_HCSTRING("stageFocusRect","\x7e","\xd2","\x81","\x74"));
	outFields->push(HX_HCSTRING("stageHeight","\x45","\x89","\x45","\x95"));
	outFields->push(HX_HCSTRING("stageWidth","\x68","\x0a","\xb3","\x1d"));
	outFields->push(HX_HCSTRING("window","\xf0","\x93","\x8c","\x52"));
	outFields->push(HX_HCSTRING("__cacheFocus","\x56","\x41","\xd5","\x7f"));
	outFields->push(HX_HCSTRING("__clearBeforeRender","\x42","\xa3","\xd5","\xf3"));
	outFields->push(HX_HCSTRING("__color","\x43","\xca","\xba","\xb4"));
	outFields->push(HX_HCSTRING("__colorSplit","\x97","\x7d","\x6e","\xde"));
	outFields->push(HX_HCSTRING("__colorString","\x74","\xfb","\xd0","\x13"));
	outFields->push(HX_HCSTRING("__deltaTime","\x05","\x85","\x88","\x23"));
	outFields->push(HX_HCSTRING("__dirty","\xf2","\xa8","\x2e","\x44"));
	outFields->push(HX_HCSTRING("__displayMatrix","\x03","\x2b","\xdd","\x04"));
	outFields->push(HX_HCSTRING("__displayState","\x8f","\xcf","\x24","\xb1"));
	outFields->push(HX_HCSTRING("__dragBounds","\xa9","\x10","\x1d","\x47"));
	outFields->push(HX_HCSTRING("__dragObject","\xf3","\x08","\x3f","\xf6"));
	outFields->push(HX_HCSTRING("__dragOffsetX","\xb1","\x6c","\xfe","\xd5"));
	outFields->push(HX_HCSTRING("__dragOffsetY","\xb2","\x6c","\xfe","\xd5"));
	outFields->push(HX_HCSTRING("__focus","\xb8","\xb8","\xe7","\x6e"));
	outFields->push(HX_HCSTRING("__fullscreen","\x5b","\xb5","\x47","\x32"));
	outFields->push(HX_HCSTRING("__invalidated","\x69","\x73","\x24","\x06"));
	outFields->push(HX_HCSTRING("__lastClickTime","\x1f","\x4c","\xe7","\xb1"));
	outFields->push(HX_HCSTRING("__logicalWidth","\x9d","\xce","\x2c","\x0d"));
	outFields->push(HX_HCSTRING("__logicalHeight","\x70","\x73","\x57","\x30"));
	outFields->push(HX_HCSTRING("__macKeyboard","\x36","\x6b","\x9a","\xd8"));
	outFields->push(HX_HCSTRING("__mouseDownLeft","\xae","\x3d","\x4b","\x93"));
	outFields->push(HX_HCSTRING("__mouseDownMiddle","\xbc","\x00","\x70","\x1d"));
	outFields->push(HX_HCSTRING("__mouseDownRight","\x55","\xc8","\x97","\xc5"));
	outFields->push(HX_HCSTRING("__mouseOutStack","\xff","\xab","\x80","\x5d"));
	outFields->push(HX_HCSTRING("__mouseX","\xb3","\xb5","\x3d","\x74"));
	outFields->push(HX_HCSTRING("__mouseY","\xb4","\xb5","\x3d","\x74"));
	outFields->push(HX_HCSTRING("__renderer","\x63","\x38","\x14","\x56"));
	outFields->push(HX_HCSTRING("__rendering","\x2c","\x24","\xa0","\xfb"));
	outFields->push(HX_HCSTRING("__stack","\x28","\xc0","\x69","\xee"));
	outFields->push(HX_HCSTRING("__transparent","\x32","\x6c","\x32","\x6b"));
	outFields->push(HX_HCSTRING("__wasDirty","\x49","\xbd","\x55","\x63"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Stage_obj,align),HX_HCSTRING("align","\xc5","\x56","\x91","\x21")},
	{hx::fsBool,(int)offsetof(Stage_obj,allowsFullScreen),HX_HCSTRING("allowsFullScreen","\xc5","\x66","\xdc","\x4b")},
	{hx::fsBool,(int)offsetof(Stage_obj,allowsFullScreenInteractive),HX_HCSTRING("allowsFullScreenInteractive","\x1d","\x8b","\x2c","\xc8")},
	{hx::fsObject /*::lime::app::Application*/ ,(int)offsetof(Stage_obj,application),HX_HCSTRING("application","\x50","\xab","\x3e","\x2a")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Stage_obj,quality),HX_HCSTRING("quality","\xbf","\x04","\x4c","\x44")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Stage_obj,scaleMode),HX_HCSTRING("scaleMode","\x0d","\xdb","\xd3","\x2b")},
	{hx::fsObject /*::openfl::_Vector::ObjectVector*/ ,(int)offsetof(Stage_obj,stage3Ds),HX_HCSTRING("stage3Ds","\xa4","\x4e","\x30","\xe3")},
	{hx::fsBool,(int)offsetof(Stage_obj,stageFocusRect),HX_HCSTRING("stageFocusRect","\x7e","\xd2","\x81","\x74")},
	{hx::fsInt,(int)offsetof(Stage_obj,stageHeight),HX_HCSTRING("stageHeight","\x45","\x89","\x45","\x95")},
	{hx::fsInt,(int)offsetof(Stage_obj,stageWidth),HX_HCSTRING("stageWidth","\x68","\x0a","\xb3","\x1d")},
	{hx::fsObject /*::lime::ui::Window*/ ,(int)offsetof(Stage_obj,window),HX_HCSTRING("window","\xf0","\x93","\x8c","\x52")},
	{hx::fsObject /*::openfl::display::InteractiveObject*/ ,(int)offsetof(Stage_obj,__cacheFocus),HX_HCSTRING("__cacheFocus","\x56","\x41","\xd5","\x7f")},
	{hx::fsBool,(int)offsetof(Stage_obj,__clearBeforeRender),HX_HCSTRING("__clearBeforeRender","\x42","\xa3","\xd5","\xf3")},
	{hx::fsInt,(int)offsetof(Stage_obj,__color),HX_HCSTRING("__color","\x43","\xca","\xba","\xb4")},
	{hx::fsObject /*Array< Float >*/ ,(int)offsetof(Stage_obj,__colorSplit),HX_HCSTRING("__colorSplit","\x97","\x7d","\x6e","\xde")},
	{hx::fsString,(int)offsetof(Stage_obj,__colorString),HX_HCSTRING("__colorString","\x74","\xfb","\xd0","\x13")},
	{hx::fsInt,(int)offsetof(Stage_obj,__deltaTime),HX_HCSTRING("__deltaTime","\x05","\x85","\x88","\x23")},
	{hx::fsBool,(int)offsetof(Stage_obj,__dirty),HX_HCSTRING("__dirty","\xf2","\xa8","\x2e","\x44")},
	{hx::fsObject /*::openfl::geom::Matrix*/ ,(int)offsetof(Stage_obj,__displayMatrix),HX_HCSTRING("__displayMatrix","\x03","\x2b","\xdd","\x04")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Stage_obj,__displayState),HX_HCSTRING("__displayState","\x8f","\xcf","\x24","\xb1")},
	{hx::fsObject /*::openfl::geom::Rectangle*/ ,(int)offsetof(Stage_obj,__dragBounds),HX_HCSTRING("__dragBounds","\xa9","\x10","\x1d","\x47")},
	{hx::fsObject /*::openfl::display::Sprite*/ ,(int)offsetof(Stage_obj,__dragObject),HX_HCSTRING("__dragObject","\xf3","\x08","\x3f","\xf6")},
	{hx::fsFloat,(int)offsetof(Stage_obj,__dragOffsetX),HX_HCSTRING("__dragOffsetX","\xb1","\x6c","\xfe","\xd5")},
	{hx::fsFloat,(int)offsetof(Stage_obj,__dragOffsetY),HX_HCSTRING("__dragOffsetY","\xb2","\x6c","\xfe","\xd5")},
	{hx::fsObject /*::openfl::display::InteractiveObject*/ ,(int)offsetof(Stage_obj,__focus),HX_HCSTRING("__focus","\xb8","\xb8","\xe7","\x6e")},
	{hx::fsBool,(int)offsetof(Stage_obj,__fullscreen),HX_HCSTRING("__fullscreen","\x5b","\xb5","\x47","\x32")},
	{hx::fsBool,(int)offsetof(Stage_obj,__invalidated),HX_HCSTRING("__invalidated","\x69","\x73","\x24","\x06")},
	{hx::fsInt,(int)offsetof(Stage_obj,__lastClickTime),HX_HCSTRING("__lastClickTime","\x1f","\x4c","\xe7","\xb1")},
	{hx::fsInt,(int)offsetof(Stage_obj,__logicalWidth),HX_HCSTRING("__logicalWidth","\x9d","\xce","\x2c","\x0d")},
	{hx::fsInt,(int)offsetof(Stage_obj,__logicalHeight),HX_HCSTRING("__logicalHeight","\x70","\x73","\x57","\x30")},
	{hx::fsBool,(int)offsetof(Stage_obj,__macKeyboard),HX_HCSTRING("__macKeyboard","\x36","\x6b","\x9a","\xd8")},
	{hx::fsObject /*::openfl::display::InteractiveObject*/ ,(int)offsetof(Stage_obj,__mouseDownLeft),HX_HCSTRING("__mouseDownLeft","\xae","\x3d","\x4b","\x93")},
	{hx::fsObject /*::openfl::display::InteractiveObject*/ ,(int)offsetof(Stage_obj,__mouseDownMiddle),HX_HCSTRING("__mouseDownMiddle","\xbc","\x00","\x70","\x1d")},
	{hx::fsObject /*::openfl::display::InteractiveObject*/ ,(int)offsetof(Stage_obj,__mouseDownRight),HX_HCSTRING("__mouseDownRight","\x55","\xc8","\x97","\xc5")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Stage_obj,__mouseOutStack),HX_HCSTRING("__mouseOutStack","\xff","\xab","\x80","\x5d")},
	{hx::fsFloat,(int)offsetof(Stage_obj,__mouseX),HX_HCSTRING("__mouseX","\xb3","\xb5","\x3d","\x74")},
	{hx::fsFloat,(int)offsetof(Stage_obj,__mouseY),HX_HCSTRING("__mouseY","\xb4","\xb5","\x3d","\x74")},
	{hx::fsObject /*::openfl::_internal::renderer::AbstractRenderer*/ ,(int)offsetof(Stage_obj,__renderer),HX_HCSTRING("__renderer","\x63","\x38","\x14","\x56")},
	{hx::fsBool,(int)offsetof(Stage_obj,__rendering),HX_HCSTRING("__rendering","\x2c","\x24","\xa0","\xfb")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Stage_obj,__stack),HX_HCSTRING("__stack","\x28","\xc0","\x69","\xee")},
	{hx::fsBool,(int)offsetof(Stage_obj,__transparent),HX_HCSTRING("__transparent","\x32","\x6c","\x32","\x6b")},
	{hx::fsBool,(int)offsetof(Stage_obj,__wasDirty),HX_HCSTRING("__wasDirty","\x49","\xbd","\x55","\x63")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("align","\xc5","\x56","\x91","\x21"),
	HX_HCSTRING("allowsFullScreen","\xc5","\x66","\xdc","\x4b"),
	HX_HCSTRING("allowsFullScreenInteractive","\x1d","\x8b","\x2c","\xc8"),
	HX_HCSTRING("application","\x50","\xab","\x3e","\x2a"),
	HX_HCSTRING("quality","\xbf","\x04","\x4c","\x44"),
	HX_HCSTRING("scaleMode","\x0d","\xdb","\xd3","\x2b"),
	HX_HCSTRING("stage3Ds","\xa4","\x4e","\x30","\xe3"),
	HX_HCSTRING("stageFocusRect","\x7e","\xd2","\x81","\x74"),
	HX_HCSTRING("stageHeight","\x45","\x89","\x45","\x95"),
	HX_HCSTRING("stageWidth","\x68","\x0a","\xb3","\x1d"),
	HX_HCSTRING("window","\xf0","\x93","\x8c","\x52"),
	HX_HCSTRING("__cacheFocus","\x56","\x41","\xd5","\x7f"),
	HX_HCSTRING("__clearBeforeRender","\x42","\xa3","\xd5","\xf3"),
	HX_HCSTRING("__color","\x43","\xca","\xba","\xb4"),
	HX_HCSTRING("__colorSplit","\x97","\x7d","\x6e","\xde"),
	HX_HCSTRING("__colorString","\x74","\xfb","\xd0","\x13"),
	HX_HCSTRING("__deltaTime","\x05","\x85","\x88","\x23"),
	HX_HCSTRING("__dirty","\xf2","\xa8","\x2e","\x44"),
	HX_HCSTRING("__displayMatrix","\x03","\x2b","\xdd","\x04"),
	HX_HCSTRING("__displayState","\x8f","\xcf","\x24","\xb1"),
	HX_HCSTRING("__dragBounds","\xa9","\x10","\x1d","\x47"),
	HX_HCSTRING("__dragObject","\xf3","\x08","\x3f","\xf6"),
	HX_HCSTRING("__dragOffsetX","\xb1","\x6c","\xfe","\xd5"),
	HX_HCSTRING("__dragOffsetY","\xb2","\x6c","\xfe","\xd5"),
	HX_HCSTRING("__focus","\xb8","\xb8","\xe7","\x6e"),
	HX_HCSTRING("__fullscreen","\x5b","\xb5","\x47","\x32"),
	HX_HCSTRING("__invalidated","\x69","\x73","\x24","\x06"),
	HX_HCSTRING("__lastClickTime","\x1f","\x4c","\xe7","\xb1"),
	HX_HCSTRING("__logicalWidth","\x9d","\xce","\x2c","\x0d"),
	HX_HCSTRING("__logicalHeight","\x70","\x73","\x57","\x30"),
	HX_HCSTRING("__macKeyboard","\x36","\x6b","\x9a","\xd8"),
	HX_HCSTRING("__mouseDownLeft","\xae","\x3d","\x4b","\x93"),
	HX_HCSTRING("__mouseDownMiddle","\xbc","\x00","\x70","\x1d"),
	HX_HCSTRING("__mouseDownRight","\x55","\xc8","\x97","\xc5"),
	HX_HCSTRING("__mouseOutStack","\xff","\xab","\x80","\x5d"),
	HX_HCSTRING("__mouseX","\xb3","\xb5","\x3d","\x74"),
	HX_HCSTRING("__mouseY","\xb4","\xb5","\x3d","\x74"),
	HX_HCSTRING("__renderer","\x63","\x38","\x14","\x56"),
	HX_HCSTRING("__rendering","\x2c","\x24","\xa0","\xfb"),
	HX_HCSTRING("__stack","\x28","\xc0","\x69","\xee"),
	HX_HCSTRING("__transparent","\x32","\x6c","\x32","\x6b"),
	HX_HCSTRING("__wasDirty","\x49","\xbd","\x55","\x63"),
	HX_HCSTRING("addRenderer","\x84","\xfc","\x37","\xe4"),
	HX_HCSTRING("addWindow","\xf1","\xc8","\xb0","\x0a"),
	HX_HCSTRING("registerModule","\x6f","\xbb","\x14","\x87"),
	HX_HCSTRING("removeRenderer","\xa7","\x01","\x32","\x7d"),
	HX_HCSTRING("removeWindow","\x54","\x2f","\xba","\xc1"),
	HX_HCSTRING("setPreloader","\x74","\xa4","\xcb","\xa6"),
	HX_HCSTRING("unregisterModule","\x88","\x2b","\x36","\x94"),
	HX_HCSTRING("globalToLocal","\xcd","\x4e","\xae","\x6b"),
	HX_HCSTRING("invalidate","\x7b","\x19","\x2a","\x87"),
	HX_HCSTRING("localToGlobal","\xc9","\x41","\xeb","\x47"),
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
	HX_HCSTRING("onTouchMove","\x51","\x55","\x10","\x30"),
	HX_HCSTRING("onTouchEnd","\x9b","\x99","\xc0","\xdd"),
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
	HX_HCSTRING("onWindowMinimize","\xad","\x0c","\xab","\x27"),
	HX_HCSTRING("onWindowMove","\x20","\xfd","\x7a","\xab"),
	HX_HCSTRING("onWindowResize","\xc3","\x55","\xdb","\xf9"),
	HX_HCSTRING("onWindowRestore","\x9f","\xc0","\x4c","\xad"),
	HX_HCSTRING("render","\x56","\x6b","\x29","\x05"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("__broadcastEvent","\x79","\x9c","\xa4","\x95"),
	HX_HCSTRING("__drag","\x14","\x8f","\x68","\xf1"),
	HX_HCSTRING("__fireEvent","\x64","\x79","\x99","\x9f"),
	HX_HCSTRING("__getInteractive","\x0c","\x1c","\x37","\xf8"),
	HX_HCSTRING("__onKey","\xa0","\x76","\xc7","\x9c"),
	HX_HCSTRING("__onGamepadConnect","\xe8","\xe9","\x67","\x58"),
	HX_HCSTRING("__onMouse","\x66","\x05","\xf1","\x23"),
	HX_HCSTRING("__onMouseWheel","\x55","\x4d","\x8b","\xe0"),
	HX_HCSTRING("__onTouch","\x00","\x07","\xbf","\x2b"),
	HX_HCSTRING("__renderDOM","\xac","\xf5","\x83","\xfb"),
	HX_HCSTRING("__renderGL","\x1b","\x1e","\x14","\x56"),
	HX_HCSTRING("__resize","\x14","\xc5","\xaa","\xb0"),
	HX_HCSTRING("__setLogicalSize","\xc8","\x6d","\xcd","\x32"),
	HX_HCSTRING("__startDrag","\x56","\xee","\x8f","\x29"),
	HX_HCSTRING("__stopDrag","\x36","\xe4","\x62","\x38"),
	HX_HCSTRING("__update","\x29","\xf1","\x34","\x2f"),
	HX_HCSTRING("get_color","\xba","\xcd","\x05","\x8e"),
	HX_HCSTRING("set_color","\xc6","\xb9","\x56","\x71"),
	HX_HCSTRING("get_displayState","\xf8","\x38","\x03","\x95"),
	HX_HCSTRING("set_displayState","\x6c","\x26","\x45","\xeb"),
	HX_HCSTRING("get_focus","\x2f","\xbc","\x32","\x48"),
	HX_HCSTRING("set_focus","\x3b","\xa8","\x83","\x2b"),
	HX_HCSTRING("get_frameRate","\x84","\xe5","\x88","\xfa"),
	HX_HCSTRING("set_frameRate","\x90","\xc7","\x8e","\x3f"),
	HX_HCSTRING("get_mouseX","\x5c","\xba","\x95","\xbc"),
	HX_HCSTRING("get_mouseY","\x5d","\xba","\x95","\xbc"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Stage_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Stage_obj::__mClass,"__mClass");
};

#endif

hx::Class Stage_obj::__mClass;

void Stage_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.display.Stage","\x14","\x36","\x7c","\x5c");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Stage_obj >;
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
