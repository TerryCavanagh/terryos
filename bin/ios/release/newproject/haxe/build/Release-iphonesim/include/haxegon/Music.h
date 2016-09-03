#ifndef INCLUDED_haxegon_Music
#define INCLUDED_haxegon_Music

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS1(haxegon,Music)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,media,Sound)
HX_DECLARE_CLASS2(openfl,media,SoundChannel)
HX_DECLARE_CLASS2(openfl,media,SoundTransform)
namespace haxegon{


class HXCPP_CLASS_ATTRIBUTES  Music_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Music_obj OBJ_;
		Music_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="haxegon.Music")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Music_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Music_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Music","\x85","\x40","\x88","\xa3"); }

		static void __boot();
		static Void playsound( ::String t,hx::Null< int >  offset);
		static Dynamic playsound_dyn();

		static Void stopsound( );
		static Dynamic stopsound_dyn();

		static Void loadsound( ::String t,hx::Null< Float >  vol);
		static Dynamic loadsound_dyn();

		static Void loadsong( ::String t,hx::Null< Float >  vol);
		static Dynamic loadsong_dyn();

		static Void play( ::String t,Dynamic time,Dynamic loop);
		static Dynamic play_dyn();

		static Void stop( );
		static Dynamic stop_dyn();

		static Void fadeout( );
		static Dynamic fadeout_dyn();

		static Void init( );
		static Dynamic init_dyn();

		static Void loopmusic( ::openfl::events::Event e);
		static Dynamic loopmusic_dyn();

		static Void stopmusic( ::openfl::events::Event e);
		static Dynamic stopmusic_dyn();

		static Void processmusicfade( );
		static Dynamic processmusicfade_dyn();

		static Void processmusicfadein( );
		static Dynamic processmusicfadein_dyn();

		static Void processmusic( );
		static Dynamic processmusic_dyn();

		static Void updateallvolumes( );
		static Dynamic updateallvolumes_dyn();

		static Void processmute( );
		static Dynamic processmute_dyn();

		static Array< ::Dynamic > musicchan;
		static ::openfl::media::SoundChannel musicchannel;
		static ::String currentsong;
		static int musicfade;
		static int musicfadein;
		static ::haxe::ds::StringMap effectindex;
		static Array< Float > volumelevels;
		static int numeffects;
		static ::haxe::ds::StringMap songindex;
		static Array< Float > songvolumelevels;
		static int numsongs;
		static int currentefchan;
		static Array< ::Dynamic > efchannel;
		static Array< ::Dynamic > efchan;
		static int numplays;
		static bool usingtickertext;
		static ::openfl::media::SoundTransform temptransform;
		static Float globalsound;
		static bool muted;
		static int mutebutton;
};

} // end namespace haxegon

#endif /* INCLUDED_haxegon_Music */ 
