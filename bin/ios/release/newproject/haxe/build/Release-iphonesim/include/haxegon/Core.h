#ifndef INCLUDED_haxegon_Core
#define INCLUDED_haxegon_Core

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
HX_DECLARE_CLASS1(haxe,Timer)
HX_DECLARE_CLASS1(haxegon,Core)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
namespace haxegon{


class HXCPP_CLASS_ATTRIBUTES  Core_obj : public ::openfl::display::Sprite_obj{
	public:
		typedef ::openfl::display::Sprite_obj super;
		typedef Core_obj OBJ_;
		Core_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="haxegon.Core")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Core_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Core_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Core","\x7f","\xe9","\x9d","\x2c"); }

		virtual Void init( );
		Dynamic init_dyn();

		virtual Void addedtostage( ::openfl::events::Event e);
		Dynamic addedtostage_dyn();

		virtual Void loaded( );
		Dynamic loaded_dyn();

		virtual Void onenterframe( ::openfl::events::Event FlashEvent);
		Dynamic onenterframe_dyn();

		virtual Void ontimer( );
		Dynamic ontimer_dyn();

		virtual Void doupdate( );
		Dynamic doupdate_dyn();

		Float maxelapsed;
		int maxframeskip;
		int tickrate;
		int TARGETFRAMERATE;
		Float _delta;
		Float _time;
		Float _last;
		::haxe::Timer _timer;
		Float _rate;
		Float _skip;
		Float _prev;
		int _skipedupdate;
		Float _updatetime;
		Float _rendertime;
		Float _gametime;
		Float _framesthissecond_counter;
};

} // end namespace haxegon

#endif /* INCLUDED_haxegon_Core */ 
