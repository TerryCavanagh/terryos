#ifndef INCLUDED_openfl_events_Event
#define INCLUDED_openfl_events_Event

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(openfl,events,Event)
namespace openfl{
namespace events{


class HXCPP_CLASS_ATTRIBUTES  Event_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Event_obj OBJ_;
		Event_obj();
		Void __construct(::String type,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="openfl.events.Event")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Event_obj > __new(::String type,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Event_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Event","\xfa","\x37","\xf2","\x08"); }

		static void __boot();
		static ::String ACTIVATE;
		static ::String ADDED;
		static ::String ADDED_TO_STAGE;
		static ::String CANCEL;
		static ::String CHANGE;
		static ::String CLEAR;
		static ::String CLOSE;
		static ::String COMPLETE;
		static ::String CONNECT;
		static ::String CONTEXT3D_CREATE;
		static ::String COPY;
		static ::String CUT;
		static ::String DEACTIVATE;
		static ::String ENTER_FRAME;
		static ::String EXIT_FRAME;
		static ::String FRAME_CONSTRUCTED;
		static ::String FRAME_LABEL;
		static ::String FULLSCREEN;
		static ::String ID3;
		static ::String INIT;
		static ::String MOUSE_LEAVE;
		static ::String OPEN;
		static ::String PASTE;
		static ::String REMOVED;
		static ::String REMOVED_FROM_STAGE;
		static ::String RENDER;
		static ::String RESIZE;
		static ::String SCROLL;
		static ::String SELECT;
		static ::String SELECT_ALL;
		static ::String SOUND_COMPLETE;
		static ::String TAB_CHILDREN_CHANGE;
		static ::String TAB_ENABLED_CHANGE;
		static ::String TAB_INDEX_CHANGE;
		static ::String TEXTURE_READY;
		static ::String UNLOAD;
		bool bubbles;
		bool cancelable;
		Dynamic currentTarget;
		int eventPhase;
		Dynamic target;
		::String type;
		bool __isCanceled;
		bool __isCanceledNow;
		bool __preventDefault;
		virtual ::openfl::events::Event clone( );
		Dynamic clone_dyn();

		virtual ::String formatToString( ::String className,::String p1,::String p2,::String p3,::String p4,::String p5);
		Dynamic formatToString_dyn();

		virtual bool isDefaultPrevented( );
		Dynamic isDefaultPrevented_dyn();

		virtual Void preventDefault( );
		Dynamic preventDefault_dyn();

		virtual Void stopImmediatePropagation( );
		Dynamic stopImmediatePropagation_dyn();

		virtual Void stopPropagation( );
		Dynamic stopPropagation_dyn();

		virtual ::String toString( );
		Dynamic toString_dyn();

		virtual ::String __formatToString( ::String className,Array< ::String > parameters);
		Dynamic __formatToString_dyn();

};

} // end namespace openfl
} // end namespace events

#endif /* INCLUDED_openfl_events_Event */ 
