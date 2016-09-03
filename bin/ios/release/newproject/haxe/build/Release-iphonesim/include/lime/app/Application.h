#ifndef INCLUDED_lime_app_Application
#define INCLUDED_lime_app_Application

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_lime_app_Module
#include <lime/app/Module.h>
#endif
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,IntMap)
HX_DECLARE_CLASS3(lime,_backend,native,NativeApplication)
HX_DECLARE_CLASS2(lime,app,Application)
HX_DECLARE_CLASS2(lime,app,Event_Int_Void)
HX_DECLARE_CLASS2(lime,app,IModule)
HX_DECLARE_CLASS2(lime,app,Module)
HX_DECLARE_CLASS2(lime,app,Preloader)
HX_DECLARE_CLASS2(lime,graphics,Renderer)
HX_DECLARE_CLASS2(lime,ui,Window)
namespace lime{
namespace app{


class HXCPP_CLASS_ATTRIBUTES  Application_obj : public ::lime::app::Module_obj{
	public:
		typedef ::lime::app::Module_obj super;
		typedef Application_obj OBJ_;
		Application_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="lime.app.Application")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Application_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Application_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Application","\x30","\x43","\x71","\x0e"); }

		static ::lime::app::Application current;
		Dynamic config;
		Array< ::lime::app::IModule > modules;
		::lime::app::Preloader preloader;
		::lime::app::Event_Int_Void onUpdate;
		::lime::graphics::Renderer renderer;
		Array< ::Dynamic > renderers;
		::lime::ui::Window window;
		Array< ::Dynamic > windows;
		::lime::_backend::native::NativeApplication backend;
		::haxe::ds::IntMap windowByID;
		virtual Void addModule( ::lime::app::IModule module);
		Dynamic addModule_dyn();

		virtual Void addRenderer( ::lime::graphics::Renderer renderer);

		virtual Void create( Dynamic config);
		Dynamic create_dyn();

		virtual Void createWindow( ::lime::ui::Window window);
		Dynamic createWindow_dyn();

		virtual int exec( );
		Dynamic exec_dyn();

		virtual Void onModuleExit( int code);

		virtual Void onWindowClose( ::lime::ui::Window window);

		virtual Void removeModule( ::lime::app::IModule module);
		Dynamic removeModule_dyn();

		virtual Void removeWindow( ::lime::ui::Window window);

		virtual Void setPreloader( ::lime::app::Preloader preloader);

		virtual Float get_frameRate( );
		Dynamic get_frameRate_dyn();

		virtual Float set_frameRate( Float value);
		Dynamic set_frameRate_dyn();

		virtual ::lime::app::Preloader get_preloader( );
		Dynamic get_preloader_dyn();

		virtual ::lime::graphics::Renderer get_renderer( );
		Dynamic get_renderer_dyn();

		virtual Array< ::Dynamic > get_renderers( );
		Dynamic get_renderers_dyn();

		virtual ::lime::ui::Window get_window( );
		Dynamic get_window_dyn();

		virtual Array< ::Dynamic > get_windows( );
		Dynamic get_windows_dyn();

};

} // end namespace lime
} // end namespace app

#endif /* INCLUDED_lime_app_Application */ 
