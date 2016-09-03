#ifndef INCLUDED_openfl_system_Capabilities
#define INCLUDED_openfl_system_Capabilities

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(openfl,_system,Capabilities)
namespace openfl{
namespace _system{


class HXCPP_CLASS_ATTRIBUTES  Capabilities_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Capabilities_obj OBJ_;
		Capabilities_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="openfl.system.Capabilities")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Capabilities_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Capabilities_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Capabilities","\x56","\x9a","\xa5","\xfb"); }

		static void __boot();
		static bool avHardwareDisable;
		static ::String cpuArchitecture;
		static bool hasAccessibility;
		static bool hasAudio;
		static bool hasAudioEncoder;
		static bool hasEmbeddedVideo;
		static bool hasIME;
		static bool hasMP3;
		static bool hasPrinting;
		static bool hasScreenBroadcast;
		static bool hasScreenPlayback;
		static bool hasStreamingAudio;
		static bool hasStreamingVideo;
		static bool hasTLS;
		static bool hasVideoEncoder;
		static bool isDebugger;
		static bool isEmbeddedInAcrobat;
		static bool localFileReadDisable;
		static ::String manufacturer;
		static int maxLevelIDC;
		static ::String playerType;
		static ::String screenColor;
		static ::String serverString;
		static bool supports32BitProcesses;
		static bool supports64BitProcesses;
		static Dynamic touchscreenType;
		static bool hasMultiChannelAudio( ::String type);
		static Dynamic hasMultiChannelAudio_dyn();

		static ::String get_os( );
		static Dynamic get_os_dyn();

		static Float get_pixelAspectRatio( );
		static Dynamic get_pixelAspectRatio_dyn();

		static Float get_screenDPI( );
		static Dynamic get_screenDPI_dyn();

		static Float get_screenResolutionX( );
		static Dynamic get_screenResolutionX_dyn();

		static Float get_screenResolutionY( );
		static Dynamic get_screenResolutionY_dyn();

		static ::String get_language( );
		static Dynamic get_language_dyn();

		static ::String get_version( );
		static Dynamic get_version_dyn();

};

} // end namespace openfl
} // end namespace system

#endif /* INCLUDED_openfl_system_Capabilities */ 
