#ifndef INCLUDED_lime_app_IModule
#define INCLUDED_lime_app_IModule

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(lime,app,Application)
HX_DECLARE_CLASS2(lime,app,IModule)
HX_DECLARE_CLASS2(lime,app,Module)
HX_DECLARE_CLASS2(lime,app,Preloader)
HX_DECLARE_CLASS2(lime,graphics,Renderer)
HX_DECLARE_CLASS2(lime,ui,Window)
namespace lime{
namespace app{


class HXCPP_CLASS_ATTRIBUTES  IModule_obj : public hx::Interface{
	public:
		typedef hx::Interface super;
		typedef IModule_obj OBJ_;
		HX_DO_INTERFACE_RTTI;
		virtual Void addRenderer( ::lime::graphics::Renderer renderer)=0;
virtual Dynamic addRenderer_dyn()=0;
		virtual Void addWindow( ::lime::ui::Window window)=0;
virtual Dynamic addWindow_dyn()=0;
		virtual Void registerModule( ::lime::app::Application application)=0;
virtual Dynamic registerModule_dyn()=0;
		virtual Void removeRenderer( ::lime::graphics::Renderer renderer)=0;
virtual Dynamic removeRenderer_dyn()=0;
		virtual Void removeWindow( ::lime::ui::Window window)=0;
virtual Dynamic removeWindow_dyn()=0;
		virtual Void setPreloader( ::lime::app::Preloader preloader)=0;
virtual Dynamic setPreloader_dyn()=0;
		virtual Void unregisterModule( ::lime::app::Application application)=0;
virtual Dynamic unregisterModule_dyn()=0;
};



template<typename IMPL>
class IModule_delegate_ : public IModule_obj
{
	protected:
		IMPL *mDelegate;
	public:
		IModule_delegate_(IMPL *inDelegate) : mDelegate(inDelegate) {}
		hx::Object *__GetRealObject() { return mDelegate; }
		void __Visit(HX_VISIT_PARAMS) { HX_VISIT_OBJECT(mDelegate); }
		Void addRenderer( ::lime::graphics::Renderer renderer) { return mDelegate->addRenderer(renderer);}
		Dynamic addRenderer_dyn() { return mDelegate->addRenderer_dyn();}
		Void addWindow( ::lime::ui::Window window) { return mDelegate->addWindow(window);}
		Dynamic addWindow_dyn() { return mDelegate->addWindow_dyn();}
		Void registerModule( ::lime::app::Application application) { return mDelegate->registerModule(application);}
		Dynamic registerModule_dyn() { return mDelegate->registerModule_dyn();}
		Void removeRenderer( ::lime::graphics::Renderer renderer) { return mDelegate->removeRenderer(renderer);}
		Dynamic removeRenderer_dyn() { return mDelegate->removeRenderer_dyn();}
		Void removeWindow( ::lime::ui::Window window) { return mDelegate->removeWindow(window);}
		Dynamic removeWindow_dyn() { return mDelegate->removeWindow_dyn();}
		Void setPreloader( ::lime::app::Preloader preloader) { return mDelegate->setPreloader(preloader);}
		Dynamic setPreloader_dyn() { return mDelegate->setPreloader_dyn();}
		Void unregisterModule( ::lime::app::Application application) { return mDelegate->unregisterModule(application);}
		Dynamic unregisterModule_dyn() { return mDelegate->unregisterModule_dyn();}
};

} // end namespace lime
} // end namespace app

#endif /* INCLUDED_lime_app_IModule */ 
