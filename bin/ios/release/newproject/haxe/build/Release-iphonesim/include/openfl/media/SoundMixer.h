#ifndef INCLUDED_openfl_media_SoundMixer
#define INCLUDED_openfl_media_SoundMixer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,media,SoundChannel)
HX_DECLARE_CLASS2(openfl,media,SoundMixer)
HX_DECLARE_CLASS2(openfl,media,SoundTransform)
namespace openfl{
namespace media{


class HXCPP_CLASS_ATTRIBUTES  SoundMixer_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef SoundMixer_obj OBJ_;
		SoundMixer_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="openfl.media.SoundMixer")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< SoundMixer_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~SoundMixer_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("SoundMixer","\xda","\x21","\x66","\x68"); }

		static void __boot();
		static int bufferTime;
		static Array< ::Dynamic > __soundChannels;
		static ::openfl::media::SoundTransform __soundTransform;
		static bool areSoundsInaccessible( );
		static Dynamic areSoundsInaccessible_dyn();

		static Void stopAll( );
		static Dynamic stopAll_dyn();

		static Void __registerSoundChannel( ::openfl::media::SoundChannel soundChannel);
		static Dynamic __registerSoundChannel_dyn();

		static Void __unregisterSoundChannel( ::openfl::media::SoundChannel soundChannel);
		static Dynamic __unregisterSoundChannel_dyn();

		static ::openfl::media::SoundTransform get_soundTransform( );
		static Dynamic get_soundTransform_dyn();

		static ::openfl::media::SoundTransform set_soundTransform( ::openfl::media::SoundTransform value);
		static Dynamic set_soundTransform_dyn();

};

} // end namespace openfl
} // end namespace media

#endif /* INCLUDED_openfl_media_SoundMixer */ 
