#ifndef INCLUDED_openfl_events_ActivityEvent
#define INCLUDED_openfl_events_ActivityEvent

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
HX_DECLARE_CLASS2(openfl,events,ActivityEvent)
HX_DECLARE_CLASS2(openfl,events,Event)
namespace openfl{
namespace events{


class HXCPP_CLASS_ATTRIBUTES  ActivityEvent_obj : public ::openfl::events::Event_obj{
	public:
		typedef ::openfl::events::Event_obj super;
		typedef ActivityEvent_obj OBJ_;
		ActivityEvent_obj();
		Void __construct(::String type,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable,hx::Null< bool >  __o_activating);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="openfl.events.ActivityEvent")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< ActivityEvent_obj > __new(::String type,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable,hx::Null< bool >  __o_activating);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ActivityEvent_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("ActivityEvent","\xab","\xeb","\x0c","\x59"); }

		static void __boot();
		static ::String ACTIVITY;
		bool activating;
		virtual ::openfl::events::Event clone( );

		virtual ::String toString( );

};

} // end namespace openfl
} // end namespace events

#endif /* INCLUDED_openfl_events_ActivityEvent */ 
