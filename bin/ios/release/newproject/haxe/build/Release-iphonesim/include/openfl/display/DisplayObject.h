#ifndef INCLUDED_openfl_display_DisplayObject
#define INCLUDED_openfl_display_DisplayObject

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS2(lime,app,IModule)
HX_DECLARE_CLASS3(lime,graphics,cairo,Cairo)
HX_DECLARE_CLASS2(lime,ui,MouseCursor)
HX_DECLARE_CLASS2(openfl,_Vector,IVector)
HX_DECLARE_CLASS2(openfl,_Vector,ObjectVector)
HX_DECLARE_CLASS3(openfl,_internal,renderer,RenderSession)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,Graphics)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,LoaderInfo)
HX_DECLARE_CLASS2(openfl,display,Stage)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,filters,BitmapFilter)
HX_DECLARE_CLASS2(openfl,geom,ColorTransform)
HX_DECLARE_CLASS2(openfl,geom,Matrix)
HX_DECLARE_CLASS2(openfl,geom,Point)
HX_DECLARE_CLASS2(openfl,geom,Rectangle)
HX_DECLARE_CLASS2(openfl,geom,Transform)
namespace openfl{
namespace display{


class HXCPP_CLASS_ATTRIBUTES  DisplayObject_obj : public ::openfl::events::EventDispatcher_obj{
	public:
		typedef ::openfl::events::EventDispatcher_obj super;
		typedef DisplayObject_obj OBJ_;
		DisplayObject_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="openfl.display.DisplayObject")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< DisplayObject_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~DisplayObject_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		HX_DECLARE_IMPLEMENT_DYNAMIC;
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		hx::Object *__ToInterface(const hx::type_info &inType);
		operator ::openfl::display::IBitmapDrawable_obj *();
		::String __ToString() const { return HX_HCSTRING("DisplayObject","\x81","\x8a","\x92","\x1e"); }

		static void __boot();
		static ::haxe::ds::StringMap __broadcastEvents;
		static int __instanceCount;
		static int __worldRenderDirty;
		static int __worldTransformDirty;
		::openfl::display::LoaderInfo loaderInfo;
		Dynamic opaqueBackground;
		::openfl::display::DisplayObjectContainer parent;
		::openfl::geom::Rectangle scale9Grid;
		::openfl::display::Stage stage;
		::openfl::geom::ColorTransform __worldColorTransform;
		::openfl::geom::Matrix __worldTransform;
		Float __alpha;
		Dynamic __blendMode;
		bool __cacheAsBitmap;
		::openfl::geom::Matrix __cacheAsBitmapMatrix;
		::lime::graphics::cairo::Cairo __cairo;
		Array< ::Dynamic > __children;
		Array< ::Dynamic > __filters;
		bool __forceCacheAsBitmap;
		::openfl::display::Graphics __graphics;
		bool __interactive;
		bool __isMask;
		::openfl::display::DisplayObject __mask;
		::String __name;
		::openfl::geom::Transform __objectTransform;
		bool __renderable;
		bool __renderDirty;
		::openfl::display::DisplayObject __renderParent;
		::openfl::geom::Matrix __renderTransform;
		Float __rotation;
		Float __rotationCosine;
		Float __rotationSine;
		::openfl::geom::Rectangle __scrollRect;
		::openfl::geom::Matrix __transform;
		bool __transformDirty;
		bool __visible;
		Float __worldAlpha;
		bool __worldAlphaChanged;
		::openfl::geom::Rectangle __worldClip;
		bool __worldClipChanged;
		::openfl::geom::Matrix __worldTransformCache;
		bool __worldTransformChanged;
		bool __worldVisible;
		bool __worldVisibleChanged;
		int __worldZ;
		virtual Void addEventListener( ::String type,Dynamic listener,hx::Null< bool >  useCapture,hx::Null< int >  priority,hx::Null< bool >  useWeakReference);

		virtual ::openfl::geom::Rectangle getBounds( ::openfl::display::DisplayObject targetCoordinateSpace);
		Dynamic getBounds_dyn();

		virtual ::openfl::geom::Rectangle getRect( ::openfl::display::DisplayObject targetCoordinateSpace);
		Dynamic getRect_dyn();

		virtual ::openfl::geom::Point globalToLocal( ::openfl::geom::Point pos);
		Dynamic globalToLocal_dyn();

		virtual bool hitTestObject( ::openfl::display::DisplayObject obj);
		Dynamic hitTestObject_dyn();

		virtual bool hitTestPoint( Float x,Float y,hx::Null< bool >  shapeFlag);
		Dynamic hitTestPoint_dyn();

		virtual ::openfl::geom::Point localToGlobal( ::openfl::geom::Point point);
		Dynamic localToGlobal_dyn();

		virtual Void removeEventListener( ::String type,Dynamic listener,hx::Null< bool >  useCapture);

		virtual Void __cleanup( );
		Dynamic __cleanup_dyn();

		virtual bool __dispatch( ::openfl::events::Event event);
		Dynamic __dispatch_dyn();

		virtual bool __dispatchEvent( ::openfl::events::Event event);

		virtual Void __enterFrame( int deltaTime);
		Dynamic __enterFrame_dyn();

		virtual Void __getBounds( ::openfl::geom::Rectangle rect,::openfl::geom::Matrix matrix);
		Dynamic __getBounds_dyn();

		virtual ::lime::ui::MouseCursor __getCursor( );
		Dynamic __getCursor_dyn();

		virtual bool __getInteractive( Array< ::Dynamic > stack);
		Dynamic __getInteractive_dyn();

		virtual Void __getLocalBounds( ::openfl::geom::Rectangle rect);
		Dynamic __getLocalBounds_dyn();

		virtual Void __getRenderBounds( ::openfl::geom::Rectangle rect,::openfl::geom::Matrix matrix);
		Dynamic __getRenderBounds_dyn();

		virtual ::openfl::geom::Matrix __getRenderTransform( );
		Dynamic __getRenderTransform_dyn();

		virtual ::openfl::geom::Matrix __getWorldTransform( );
		Dynamic __getWorldTransform_dyn();

		virtual bool __hitTest( Float x,Float y,bool shapeFlag,Array< ::Dynamic > stack,bool interactiveOnly,::openfl::display::DisplayObject hitObject);
		Dynamic __hitTest_dyn();

		virtual bool __hitTestMask( Float x,Float y);
		Dynamic __hitTestMask_dyn();

		virtual Void __readGraphicsData( ::openfl::_Vector::ObjectVector graphicsData,bool recurse);
		Dynamic __readGraphicsData_dyn();

		virtual Void __renderCairo( ::openfl::_internal::renderer::RenderSession renderSession);
		Dynamic __renderCairo_dyn();

		virtual Void __renderCairoMask( ::openfl::_internal::renderer::RenderSession renderSession);
		Dynamic __renderCairoMask_dyn();

		virtual Void __renderCanvas( ::openfl::_internal::renderer::RenderSession renderSession);
		Dynamic __renderCanvas_dyn();

		virtual Void __renderCanvasMask( ::openfl::_internal::renderer::RenderSession renderSession);
		Dynamic __renderCanvasMask_dyn();

		virtual Void __renderDOM( ::openfl::_internal::renderer::RenderSession renderSession);
		Dynamic __renderDOM_dyn();

		virtual Void __renderGL( ::openfl::_internal::renderer::RenderSession renderSession);
		Dynamic __renderGL_dyn();

		virtual Void __setRenderDirty( );
		Dynamic __setRenderDirty_dyn();

		virtual Void __setTransformDirty( );
		Dynamic __setTransformDirty_dyn();

		virtual Void __setStageReference( ::openfl::display::Stage stage);
		Dynamic __setStageReference_dyn();

		virtual Void __stopAllMovieClips( );
		Dynamic __stopAllMovieClips_dyn();

		virtual Void __update( bool transformOnly,bool updateChildren,::openfl::display::Graphics maskGraphics);
		Dynamic __update_dyn();

		virtual Void __updateChildren( bool transformOnly);
		Dynamic __updateChildren_dyn();

		virtual Void __updateMask( ::openfl::display::Graphics maskGraphics);
		Dynamic __updateMask_dyn();

		virtual Void __updateTransforms( ::openfl::geom::Matrix overrideTransform);
		Dynamic __updateTransforms_dyn();

		virtual Float get_alpha( );
		Dynamic get_alpha_dyn();

		virtual Float set_alpha( Float value);
		Dynamic set_alpha_dyn();

		virtual Dynamic get_blendMode( );
		Dynamic get_blendMode_dyn();

		virtual Dynamic set_blendMode( Dynamic value);
		Dynamic set_blendMode_dyn();

		virtual bool get_cacheAsBitmap( );
		Dynamic get_cacheAsBitmap_dyn();

		virtual bool set_cacheAsBitmap( bool value);
		Dynamic set_cacheAsBitmap_dyn();

		virtual ::openfl::geom::Matrix get_cacheAsBitmapMatrix( );
		Dynamic get_cacheAsBitmapMatrix_dyn();

		virtual ::openfl::geom::Matrix set_cacheAsBitmapMatrix( ::openfl::geom::Matrix value);
		Dynamic set_cacheAsBitmapMatrix_dyn();

		virtual Array< ::Dynamic > get_filters( );
		Dynamic get_filters_dyn();

		virtual Array< ::Dynamic > set_filters( Array< ::Dynamic > value);
		Dynamic set_filters_dyn();

		virtual Float get_height( );
		Dynamic get_height_dyn();

		virtual Float set_height( Float value);
		Dynamic set_height_dyn();

		virtual ::openfl::display::DisplayObject get_mask( );
		Dynamic get_mask_dyn();

		virtual ::openfl::display::DisplayObject set_mask( ::openfl::display::DisplayObject value);
		Dynamic set_mask_dyn();

		virtual Float get_mouseX( );
		Dynamic get_mouseX_dyn();

		virtual Float get_mouseY( );
		Dynamic get_mouseY_dyn();

		virtual ::String get_name( );
		Dynamic get_name_dyn();

		virtual ::String set_name( ::String value);
		Dynamic set_name_dyn();

		virtual ::openfl::display::DisplayObject get_root( );
		Dynamic get_root_dyn();

		virtual Float get_rotation( );
		Dynamic get_rotation_dyn();

		virtual Float set_rotation( Float value);
		Dynamic set_rotation_dyn();

		virtual Float get_scaleX( );
		Dynamic get_scaleX_dyn();

		virtual Float set_scaleX( Float value);
		Dynamic set_scaleX_dyn();

		virtual Float get_scaleY( );
		Dynamic get_scaleY_dyn();

		virtual Float set_scaleY( Float value);
		Dynamic set_scaleY_dyn();

		virtual ::openfl::geom::Rectangle get_scrollRect( );
		Dynamic get_scrollRect_dyn();

		virtual ::openfl::geom::Rectangle set_scrollRect( ::openfl::geom::Rectangle value);
		Dynamic set_scrollRect_dyn();

		virtual ::openfl::geom::Transform get_transform( );
		Dynamic get_transform_dyn();

		virtual ::openfl::geom::Transform set_transform( ::openfl::geom::Transform value);
		Dynamic set_transform_dyn();

		virtual bool get_visible( );
		Dynamic get_visible_dyn();

		virtual bool set_visible( bool value);
		Dynamic set_visible_dyn();

		virtual Float get_width( );
		Dynamic get_width_dyn();

		virtual Float set_width( Float value);
		Dynamic set_width_dyn();

		virtual Float get_x( );
		Dynamic get_x_dyn();

		virtual Float set_x( Float value);
		Dynamic set_x_dyn();

		virtual Float get_y( );
		Dynamic get_y_dyn();

		virtual Float set_y( Float value);
		Dynamic set_y_dyn();

};

} // end namespace openfl
} // end namespace display

#endif /* INCLUDED_openfl_display_DisplayObject */ 
