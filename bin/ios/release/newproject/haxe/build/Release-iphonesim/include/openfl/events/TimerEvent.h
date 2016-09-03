#ifndef INCLUDED_openfl_events_TimerEvent
#define INCLUDED_openfl_events_TimerEvent

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,TimerEvent)
namespace openfl{
namespace events{


class HXCPP_CLASS_ATTRIBUTES  TimerEvent_obj : public ::openfl::events::Event_obj{
	public:
		typedef ::openfl::events::Event_obj super;
		typedef TimerEvent_obj OBJ_;
		TimerEvent_obj();
		Void __construct(::String type,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="openfl.events.TimerEvent")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< TimerEvent_obj > __new(::String type,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TimerEvent_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("TimerEvent","\x35","\x32","\x87","\xfd"); }

		static void __boot();
		static ::String TIMER;
		static ::String TIMER_COMPLETE;
		virtual ::openfl::events::Event clone( );

		virtual ::String toString( );

		virtual Void updateAfterEvent( );
		Dynamic updateAfterEvent_dyn();

};

} // end namespace openfl
} // end namespace events

#endif /* INCLUDED_openfl_events_TimerEvent */ 
