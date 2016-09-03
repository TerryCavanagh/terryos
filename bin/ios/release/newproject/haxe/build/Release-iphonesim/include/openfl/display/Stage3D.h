#ifndef INCLUDED_openfl_display_Stage3D
#define INCLUDED_openfl_display_Stage3D

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
HX_DECLARE_CLASS2(lime,app,IModule)
HX_DECLARE_CLASS2(openfl,_Vector,IVector)
HX_DECLARE_CLASS2(openfl,_Vector,ObjectVector)
HX_DECLARE_CLASS3(openfl,_internal,renderer,RenderSession)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Stage)
HX_DECLARE_CLASS2(openfl,display,Stage3D)
HX_DECLARE_CLASS2(openfl,display3D,Context3D)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
namespace openfl{
namespace display{


class HXCPP_CLASS_ATTRIBUTES  Stage3D_obj : public ::openfl::events::EventDispatcher_obj{
	public:
		typedef ::openfl::events::EventDispatcher_obj super;
		typedef Stage3D_obj OBJ_;
		Stage3D_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="openfl.display.Stage3D")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Stage3D_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Stage3D_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Stage3D","\xcf","\x6a","\x1b","\xfb"); }

		::openfl::display3D::Context3D context3D;
		bool visible;
		Float x;
		Float y;
		bool __contextRequested;
		virtual Void requestContext3D( Dynamic context3DRenderMode,Dynamic profile);
		Dynamic requestContext3D_dyn();

		virtual Void requestContext3DMatchingProfiles( ::openfl::_Vector::ObjectVector profiles);
		Dynamic requestContext3DMatchingProfiles_dyn();

		virtual Void __createContext( ::openfl::_internal::renderer::RenderSession renderSession);
		Dynamic __createContext_dyn();

		virtual Void __renderDOM( ::openfl::display::Stage stage,::openfl::_internal::renderer::RenderSession renderSession);
		Dynamic __renderDOM_dyn();

		virtual Void __renderGL( ::openfl::display::Stage stage,::openfl::_internal::renderer::RenderSession renderSession);
		Dynamic __renderGL_dyn();

		virtual Void __resize( int width,int height);
		Dynamic __resize_dyn();

		virtual Void __resetContext3DStates( );
		Dynamic __resetContext3DStates_dyn();

		virtual Float set_x( Float value);
		Dynamic set_x_dyn();

		virtual Float set_y( Float value);
		Dynamic set_y_dyn();

};

} // end namespace openfl
} // end namespace display

#endif /* INCLUDED_openfl_display_Stage3D */ 
