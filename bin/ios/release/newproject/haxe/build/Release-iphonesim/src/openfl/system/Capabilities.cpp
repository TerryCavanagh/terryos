#include <hxcpp.h>

#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_lime_app_Application
#include <lime/app/Application.h>
#endif
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_lime_app_Module
#include <lime/app/Module.h>
#endif
#ifndef INCLUDED_lime_system_Display
#include <lime/system/Display.h>
#endif
#ifndef INCLUDED_lime_system_DisplayMode
#include <lime/system/DisplayMode.h>
#endif
#ifndef INCLUDED_lime_ui_Window
#include <lime/ui/Window.h>
#endif
#ifndef INCLUDED_openfl_Lib
#include <openfl/Lib.h>
#endif
#ifndef INCLUDED_openfl_display_Application
#include <openfl/display/Application.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_MovieClip
#include <openfl/display/MovieClip.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_display_Stage
#include <openfl/display/Stage.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_system_Capabilities
#include <openfl/system/Capabilities.h>
#endif
namespace openfl{
namespace _system{

Void Capabilities_obj::__construct()
{
	return null();
}

//Capabilities_obj::~Capabilities_obj() { }

Dynamic Capabilities_obj::__CreateEmpty() { return  new Capabilities_obj; }
hx::ObjectPtr< Capabilities_obj > Capabilities_obj::__new()
{  hx::ObjectPtr< Capabilities_obj > _result_ = new Capabilities_obj();
	_result_->__construct();
	return _result_;}

Dynamic Capabilities_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Capabilities_obj > _result_ = new Capabilities_obj();
	_result_->__construct();
	return _result_;}

bool Capabilities_obj::avHardwareDisable;

::String Capabilities_obj::cpuArchitecture;

bool Capabilities_obj::hasAccessibility;

bool Capabilities_obj::hasAudio;

bool Capabilities_obj::hasAudioEncoder;

bool Capabilities_obj::hasEmbeddedVideo;

bool Capabilities_obj::hasIME;

bool Capabilities_obj::hasMP3;

bool Capabilities_obj::hasPrinting;

bool Capabilities_obj::hasScreenBroadcast;

bool Capabilities_obj::hasScreenPlayback;

bool Capabilities_obj::hasStreamingAudio;

bool Capabilities_obj::hasStreamingVideo;

bool Capabilities_obj::hasTLS;

bool Capabilities_obj::hasVideoEncoder;

bool Capabilities_obj::isDebugger;

bool Capabilities_obj::isEmbeddedInAcrobat;

bool Capabilities_obj::localFileReadDisable;

::String Capabilities_obj::manufacturer;

int Capabilities_obj::maxLevelIDC;

::String Capabilities_obj::playerType;

::String Capabilities_obj::screenColor;

::String Capabilities_obj::serverString;

bool Capabilities_obj::supports32BitProcesses;

bool Capabilities_obj::supports64BitProcesses;

Dynamic Capabilities_obj::touchscreenType;

bool Capabilities_obj::hasMultiChannelAudio( ::String type){
	HX_STACK_FRAME("openfl.system.Capabilities","hasMultiChannelAudio",0xb0db92e9,"openfl.system.Capabilities.hasMultiChannelAudio","openfl/system/Capabilities.hx",47,0xabe25da7)
	HX_STACK_ARG(type,"type")
	HX_STACK_LINE(47)
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Capabilities_obj,hasMultiChannelAudio,return )

::String Capabilities_obj::get_os( ){
	HX_STACK_FRAME("openfl.system.Capabilities","get_os",0x7acb30a4,"openfl.system.Capabilities.get_os","openfl/system/Capabilities.hx",72,0xabe25da7)
	HX_STACK_LINE(72)
	return HX_HCSTRING("iOS","\xcd","\xf1","\x4f","\x00");
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Capabilities_obj,get_os,return )

Float Capabilities_obj::get_pixelAspectRatio( ){
	HX_STACK_FRAME("openfl.system.Capabilities","get_pixelAspectRatio",0xa176c2ad,"openfl.system.Capabilities.get_pixelAspectRatio","openfl/system/Capabilities.hx",88,0xabe25da7)
	HX_STACK_LINE(88)
	return (int)1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Capabilities_obj,get_pixelAspectRatio,return )

Float Capabilities_obj::get_screenDPI( ){
	HX_STACK_FRAME("openfl.system.Capabilities","get_screenDPI",0x6de6afd1,"openfl.system.Capabilities.get_screenDPI","openfl/system/Capabilities.hx",89,0xabe25da7)
	HX_STACK_LINE(91)
	::openfl::display::Application tmp = ::openfl::Lib_obj::application;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(91)
	::lime::ui::Window tmp1 = tmp->__windows->__get((int)0).StaticCast< ::lime::ui::Window >();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(91)
	::lime::ui::Window window = tmp1;		HX_STACK_VAR(window,"window");
	HX_STACK_LINE(93)
	bool tmp2 = (window != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(93)
	if ((tmp2)){
		HX_STACK_LINE(95)
		::lime::_system::Display tmp3 = window->get_display();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(95)
		::lime::_system::Display display = tmp3;		HX_STACK_VAR(display,"display");
		HX_STACK_LINE(97)
		bool tmp4 = (display != null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(97)
		if ((tmp4)){
			HX_STACK_LINE(99)
			Float tmp5 = display->__Field(HX_HCSTRING("dpi","\x5d","\x43","\x4c","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(99)
			return tmp5;
		}
	}
	HX_STACK_LINE(105)
	return (int)0;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Capabilities_obj,get_screenDPI,return )

Float Capabilities_obj::get_screenResolutionX( ){
	HX_STACK_FRAME("openfl.system.Capabilities","get_screenResolutionX",0x9f8b6e20,"openfl.system.Capabilities.get_screenResolutionX","openfl/system/Capabilities.hx",110,0xabe25da7)
	HX_STACK_LINE(112)
	::openfl::display::MovieClip tmp = ::openfl::Lib_obj::current;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(112)
	::openfl::display::Stage stage = tmp->stage;		HX_STACK_VAR(stage,"stage");
	HX_STACK_LINE(113)
	int resolutionX = (int)0;		HX_STACK_VAR(resolutionX,"resolutionX");
	HX_STACK_LINE(115)
	bool tmp1 = (stage->window != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(115)
	if ((tmp1)){
		HX_STACK_LINE(117)
		::lime::_system::Display tmp2 = stage->window->get_display();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(117)
		::lime::_system::Display display = tmp2;		HX_STACK_VAR(display,"display");
		HX_STACK_LINE(119)
		bool tmp3 = (display != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(119)
		if ((tmp3)){
			HX_STACK_LINE(121)
			int tmp4 = display->__Field(HX_HCSTRING("currentMode","\x3c","\xac","\xf2","\x80"), hx::paccDynamic )->__Field(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"), hx::paccDynamic );		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(121)
			resolutionX = tmp4;
		}
	}
	HX_STACK_LINE(127)
	bool tmp2 = (resolutionX > (int)0);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(127)
	if ((tmp2)){
		HX_STACK_LINE(129)
		int tmp3 = resolutionX;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(129)
		return tmp3;
	}
	HX_STACK_LINE(133)
	int tmp3 = stage->stageWidth;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(133)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Capabilities_obj,get_screenResolutionX,return )

Float Capabilities_obj::get_screenResolutionY( ){
	HX_STACK_FRAME("openfl.system.Capabilities","get_screenResolutionY",0x9f8b6e21,"openfl.system.Capabilities.get_screenResolutionY","openfl/system/Capabilities.hx",138,0xabe25da7)
	HX_STACK_LINE(140)
	::openfl::display::MovieClip tmp = ::openfl::Lib_obj::current;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(140)
	::openfl::display::Stage stage = tmp->stage;		HX_STACK_VAR(stage,"stage");
	HX_STACK_LINE(141)
	int resolutionY = (int)0;		HX_STACK_VAR(resolutionY,"resolutionY");
	HX_STACK_LINE(143)
	bool tmp1 = (stage->window != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(143)
	if ((tmp1)){
		HX_STACK_LINE(145)
		::lime::_system::Display tmp2 = stage->window->get_display();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(145)
		::lime::_system::Display display = tmp2;		HX_STACK_VAR(display,"display");
		HX_STACK_LINE(147)
		bool tmp3 = (display != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(147)
		if ((tmp3)){
			HX_STACK_LINE(149)
			int tmp4 = display->__Field(HX_HCSTRING("currentMode","\x3c","\xac","\xf2","\x80"), hx::paccDynamic )->__Field(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"), hx::paccDynamic );		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(149)
			resolutionY = tmp4;
		}
	}
	HX_STACK_LINE(155)
	bool tmp2 = (resolutionY > (int)0);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(155)
	if ((tmp2)){
		HX_STACK_LINE(157)
		int tmp3 = resolutionY;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(157)
		return tmp3;
	}
	HX_STACK_LINE(161)
	int tmp3 = stage->stageHeight;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(161)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Capabilities_obj,get_screenResolutionY,return )

::String Capabilities_obj::get_language( ){
	HX_STACK_FRAME("openfl.system.Capabilities","get_language",0xce1cefd8,"openfl.system.Capabilities.get_language","openfl/system/Capabilities.hx",174,0xabe25da7)
	HX_STACK_LINE(174)
	return HX_HCSTRING("en-US","\x02","\x7f","\x50","\x70");
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Capabilities_obj,get_language,return )

::String Capabilities_obj::get_version( ){
	HX_STACK_FRAME("openfl.system.Capabilities","get_version",0xb346e798,"openfl.system.Capabilities.get_version","openfl/system/Capabilities.hx",181,0xabe25da7)
	HX_STACK_LINE(190)
	::String value = HX_HCSTRING("IOS","\xad","\xa9","\x37","\x00");		HX_STACK_VAR(value,"value");
	HX_STACK_LINE(205)
	bool tmp = true;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(205)
	if ((tmp)){
		HX_STACK_LINE(207)
		::String tmp1 = ::StringTools_obj::replace(HX_HCSTRING("4.1.0","\x79","\x51","\x63","\x0f"),HX_HCSTRING(".","\x2e","\x00","\x00","\x00"),HX_HCSTRING(",","\x2c","\x00","\x00","\x00"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(207)
		::String tmp2 = (HX_HCSTRING(" ","\x20","\x00","\x00","\x00") + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(207)
		::String tmp3 = (tmp2 + HX_HCSTRING(",0","\x84","\x26","\x00","\x00"));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(207)
		hx::AddEq(value,tmp3);
	}
	HX_STACK_LINE(211)
	::String tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(211)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Capabilities_obj,get_version,return )


Capabilities_obj::Capabilities_obj()
{
}

bool Capabilities_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"os") ) { if (inCallProp == hx::paccAlways) { outValue = get_os(); return true; } }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"hasIME") ) { outValue = hasIME; return true;  }
		if (HX_FIELD_EQ(inName,"hasMP3") ) { outValue = hasMP3; return true;  }
		if (HX_FIELD_EQ(inName,"hasTLS") ) { outValue = hasTLS; return true;  }
		if (HX_FIELD_EQ(inName,"get_os") ) { outValue = get_os_dyn(); return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"version") ) { if (inCallProp == hx::paccAlways) { outValue = get_version(); return true; } }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"hasAudio") ) { outValue = hasAudio; return true;  }
		if (HX_FIELD_EQ(inName,"language") ) { if (inCallProp == hx::paccAlways) { outValue = get_language(); return true; } }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"screenDPI") ) { if (inCallProp == hx::paccAlways) { outValue = get_screenDPI(); return true; } }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"isDebugger") ) { outValue = isDebugger; return true;  }
		if (HX_FIELD_EQ(inName,"playerType") ) { outValue = playerType; return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"hasPrinting") ) { outValue = hasPrinting; return true;  }
		if (HX_FIELD_EQ(inName,"maxLevelIDC") ) { outValue = maxLevelIDC; return true;  }
		if (HX_FIELD_EQ(inName,"screenColor") ) { outValue = screenColor; return true;  }
		if (HX_FIELD_EQ(inName,"get_version") ) { outValue = get_version_dyn(); return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"manufacturer") ) { outValue = manufacturer; return true;  }
		if (HX_FIELD_EQ(inName,"serverString") ) { outValue = serverString; return true;  }
		if (HX_FIELD_EQ(inName,"get_language") ) { outValue = get_language_dyn(); return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_screenDPI") ) { outValue = get_screenDPI_dyn(); return true;  }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"cpuArchitecture") ) { outValue = cpuArchitecture; return true;  }
		if (HX_FIELD_EQ(inName,"hasAudioEncoder") ) { outValue = hasAudioEncoder; return true;  }
		if (HX_FIELD_EQ(inName,"hasVideoEncoder") ) { outValue = hasVideoEncoder; return true;  }
		if (HX_FIELD_EQ(inName,"touchscreenType") ) { outValue = touchscreenType; return true;  }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"hasAccessibility") ) { outValue = hasAccessibility; return true;  }
		if (HX_FIELD_EQ(inName,"hasEmbeddedVideo") ) { outValue = hasEmbeddedVideo; return true;  }
		if (HX_FIELD_EQ(inName,"pixelAspectRatio") ) { if (inCallProp == hx::paccAlways) { outValue = get_pixelAspectRatio(); return true; } }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"avHardwareDisable") ) { outValue = avHardwareDisable; return true;  }
		if (HX_FIELD_EQ(inName,"hasScreenPlayback") ) { outValue = hasScreenPlayback; return true;  }
		if (HX_FIELD_EQ(inName,"hasStreamingAudio") ) { outValue = hasStreamingAudio; return true;  }
		if (HX_FIELD_EQ(inName,"hasStreamingVideo") ) { outValue = hasStreamingVideo; return true;  }
		if (HX_FIELD_EQ(inName,"screenResolutionX") ) { if (inCallProp == hx::paccAlways) { outValue = get_screenResolutionX(); return true; } }
		if (HX_FIELD_EQ(inName,"screenResolutionY") ) { if (inCallProp == hx::paccAlways) { outValue = get_screenResolutionY(); return true; } }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"hasScreenBroadcast") ) { outValue = hasScreenBroadcast; return true;  }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"isEmbeddedInAcrobat") ) { outValue = isEmbeddedInAcrobat; return true;  }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"localFileReadDisable") ) { outValue = localFileReadDisable; return true;  }
		if (HX_FIELD_EQ(inName,"hasMultiChannelAudio") ) { outValue = hasMultiChannelAudio_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_pixelAspectRatio") ) { outValue = get_pixelAspectRatio_dyn(); return true;  }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"get_screenResolutionX") ) { outValue = get_screenResolutionX_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_screenResolutionY") ) { outValue = get_screenResolutionY_dyn(); return true;  }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"supports32BitProcesses") ) { outValue = supports32BitProcesses; return true;  }
		if (HX_FIELD_EQ(inName,"supports64BitProcesses") ) { outValue = supports64BitProcesses; return true;  }
	}
	return false;
}

bool Capabilities_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"hasIME") ) { hasIME=ioValue.Cast< bool >(); return true; }
		if (HX_FIELD_EQ(inName,"hasMP3") ) { hasMP3=ioValue.Cast< bool >(); return true; }
		if (HX_FIELD_EQ(inName,"hasTLS") ) { hasTLS=ioValue.Cast< bool >(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"hasAudio") ) { hasAudio=ioValue.Cast< bool >(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"isDebugger") ) { isDebugger=ioValue.Cast< bool >(); return true; }
		if (HX_FIELD_EQ(inName,"playerType") ) { playerType=ioValue.Cast< ::String >(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"hasPrinting") ) { hasPrinting=ioValue.Cast< bool >(); return true; }
		if (HX_FIELD_EQ(inName,"maxLevelIDC") ) { maxLevelIDC=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"screenColor") ) { screenColor=ioValue.Cast< ::String >(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"manufacturer") ) { manufacturer=ioValue.Cast< ::String >(); return true; }
		if (HX_FIELD_EQ(inName,"serverString") ) { serverString=ioValue.Cast< ::String >(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"cpuArchitecture") ) { cpuArchitecture=ioValue.Cast< ::String >(); return true; }
		if (HX_FIELD_EQ(inName,"hasAudioEncoder") ) { hasAudioEncoder=ioValue.Cast< bool >(); return true; }
		if (HX_FIELD_EQ(inName,"hasVideoEncoder") ) { hasVideoEncoder=ioValue.Cast< bool >(); return true; }
		if (HX_FIELD_EQ(inName,"touchscreenType") ) { touchscreenType=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"hasAccessibility") ) { hasAccessibility=ioValue.Cast< bool >(); return true; }
		if (HX_FIELD_EQ(inName,"hasEmbeddedVideo") ) { hasEmbeddedVideo=ioValue.Cast< bool >(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"avHardwareDisable") ) { avHardwareDisable=ioValue.Cast< bool >(); return true; }
		if (HX_FIELD_EQ(inName,"hasScreenPlayback") ) { hasScreenPlayback=ioValue.Cast< bool >(); return true; }
		if (HX_FIELD_EQ(inName,"hasStreamingAudio") ) { hasStreamingAudio=ioValue.Cast< bool >(); return true; }
		if (HX_FIELD_EQ(inName,"hasStreamingVideo") ) { hasStreamingVideo=ioValue.Cast< bool >(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"hasScreenBroadcast") ) { hasScreenBroadcast=ioValue.Cast< bool >(); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"isEmbeddedInAcrobat") ) { isEmbeddedInAcrobat=ioValue.Cast< bool >(); return true; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"localFileReadDisable") ) { localFileReadDisable=ioValue.Cast< bool >(); return true; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"supports32BitProcesses") ) { supports32BitProcesses=ioValue.Cast< bool >(); return true; }
		if (HX_FIELD_EQ(inName,"supports64BitProcesses") ) { supports64BitProcesses=ioValue.Cast< bool >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsBool,(void *) &Capabilities_obj::avHardwareDisable,HX_HCSTRING("avHardwareDisable","\xab","\x62","\x32","\x9a")},
	{hx::fsString,(void *) &Capabilities_obj::cpuArchitecture,HX_HCSTRING("cpuArchitecture","\x1b","\xa2","\xc9","\xca")},
	{hx::fsBool,(void *) &Capabilities_obj::hasAccessibility,HX_HCSTRING("hasAccessibility","\xd4","\x3e","\x39","\x17")},
	{hx::fsBool,(void *) &Capabilities_obj::hasAudio,HX_HCSTRING("hasAudio","\x1c","\xc3","\xd8","\xb3")},
	{hx::fsBool,(void *) &Capabilities_obj::hasAudioEncoder,HX_HCSTRING("hasAudioEncoder","\xe0","\x21","\x7b","\x20")},
	{hx::fsBool,(void *) &Capabilities_obj::hasEmbeddedVideo,HX_HCSTRING("hasEmbeddedVideo","\xd7","\x96","\x81","\xbc")},
	{hx::fsBool,(void *) &Capabilities_obj::hasIME,HX_HCSTRING("hasIME","\xc7","\xfc","\x36","\xbb")},
	{hx::fsBool,(void *) &Capabilities_obj::hasMP3,HX_HCSTRING("hasMP3","\x56","\x08","\x3a","\xbb")},
	{hx::fsBool,(void *) &Capabilities_obj::hasPrinting,HX_HCSTRING("hasPrinting","\x4f","\x34","\xe1","\xfb")},
	{hx::fsBool,(void *) &Capabilities_obj::hasScreenBroadcast,HX_HCSTRING("hasScreenBroadcast","\xbb","\x97","\x24","\x21")},
	{hx::fsBool,(void *) &Capabilities_obj::hasScreenPlayback,HX_HCSTRING("hasScreenPlayback","\xa1","\x92","\x10","\x71")},
	{hx::fsBool,(void *) &Capabilities_obj::hasStreamingAudio,HX_HCSTRING("hasStreamingAudio","\x0e","\xba","\x1a","\x5c")},
	{hx::fsBool,(void *) &Capabilities_obj::hasStreamingVideo,HX_HCSTRING("hasStreamingVideo","\xb3","\x55","\x96","\x6b")},
	{hx::fsBool,(void *) &Capabilities_obj::hasTLS,HX_HCSTRING("hasTLS","\xc1","\x54","\x3f","\xbb")},
	{hx::fsBool,(void *) &Capabilities_obj::hasVideoEncoder,HX_HCSTRING("hasVideoEncoder","\xdb","\x74","\xfc","\x2e")},
	{hx::fsBool,(void *) &Capabilities_obj::isDebugger,HX_HCSTRING("isDebugger","\x2b","\x36","\x9a","\x0b")},
	{hx::fsBool,(void *) &Capabilities_obj::isEmbeddedInAcrobat,HX_HCSTRING("isEmbeddedInAcrobat","\x7d","\x1e","\x22","\xf6")},
	{hx::fsBool,(void *) &Capabilities_obj::localFileReadDisable,HX_HCSTRING("localFileReadDisable","\xeb","\x2e","\x91","\x02")},
	{hx::fsString,(void *) &Capabilities_obj::manufacturer,HX_HCSTRING("manufacturer","\x51","\x1a","\x55","\x14")},
	{hx::fsInt,(void *) &Capabilities_obj::maxLevelIDC,HX_HCSTRING("maxLevelIDC","\xc8","\xdf","\x35","\x9c")},
	{hx::fsString,(void *) &Capabilities_obj::playerType,HX_HCSTRING("playerType","\xbb","\xce","\xca","\xaf")},
	{hx::fsString,(void *) &Capabilities_obj::screenColor,HX_HCSTRING("screenColor","\x57","\xbe","\xe1","\x01")},
	{hx::fsString,(void *) &Capabilities_obj::serverString,HX_HCSTRING("serverString","\xf4","\xdb","\x68","\x98")},
	{hx::fsBool,(void *) &Capabilities_obj::supports32BitProcesses,HX_HCSTRING("supports32BitProcesses","\xd3","\xe5","\x56","\xaa")},
	{hx::fsBool,(void *) &Capabilities_obj::supports64BitProcesses,HX_HCSTRING("supports64BitProcesses","\xf2","\xda","\xdf","\x7d")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Capabilities_obj::touchscreenType,HX_HCSTRING("touchscreenType","\xc5","\x5c","\xc7","\x58")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Capabilities_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Capabilities_obj::avHardwareDisable,"avHardwareDisable");
	HX_MARK_MEMBER_NAME(Capabilities_obj::cpuArchitecture,"cpuArchitecture");
	HX_MARK_MEMBER_NAME(Capabilities_obj::hasAccessibility,"hasAccessibility");
	HX_MARK_MEMBER_NAME(Capabilities_obj::hasAudio,"hasAudio");
	HX_MARK_MEMBER_NAME(Capabilities_obj::hasAudioEncoder,"hasAudioEncoder");
	HX_MARK_MEMBER_NAME(Capabilities_obj::hasEmbeddedVideo,"hasEmbeddedVideo");
	HX_MARK_MEMBER_NAME(Capabilities_obj::hasIME,"hasIME");
	HX_MARK_MEMBER_NAME(Capabilities_obj::hasMP3,"hasMP3");
	HX_MARK_MEMBER_NAME(Capabilities_obj::hasPrinting,"hasPrinting");
	HX_MARK_MEMBER_NAME(Capabilities_obj::hasScreenBroadcast,"hasScreenBroadcast");
	HX_MARK_MEMBER_NAME(Capabilities_obj::hasScreenPlayback,"hasScreenPlayback");
	HX_MARK_MEMBER_NAME(Capabilities_obj::hasStreamingAudio,"hasStreamingAudio");
	HX_MARK_MEMBER_NAME(Capabilities_obj::hasStreamingVideo,"hasStreamingVideo");
	HX_MARK_MEMBER_NAME(Capabilities_obj::hasTLS,"hasTLS");
	HX_MARK_MEMBER_NAME(Capabilities_obj::hasVideoEncoder,"hasVideoEncoder");
	HX_MARK_MEMBER_NAME(Capabilities_obj::isDebugger,"isDebugger");
	HX_MARK_MEMBER_NAME(Capabilities_obj::isEmbeddedInAcrobat,"isEmbeddedInAcrobat");
	HX_MARK_MEMBER_NAME(Capabilities_obj::localFileReadDisable,"localFileReadDisable");
	HX_MARK_MEMBER_NAME(Capabilities_obj::manufacturer,"manufacturer");
	HX_MARK_MEMBER_NAME(Capabilities_obj::maxLevelIDC,"maxLevelIDC");
	HX_MARK_MEMBER_NAME(Capabilities_obj::playerType,"playerType");
	HX_MARK_MEMBER_NAME(Capabilities_obj::screenColor,"screenColor");
	HX_MARK_MEMBER_NAME(Capabilities_obj::serverString,"serverString");
	HX_MARK_MEMBER_NAME(Capabilities_obj::supports32BitProcesses,"supports32BitProcesses");
	HX_MARK_MEMBER_NAME(Capabilities_obj::supports64BitProcesses,"supports64BitProcesses");
	HX_MARK_MEMBER_NAME(Capabilities_obj::touchscreenType,"touchscreenType");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Capabilities_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Capabilities_obj::avHardwareDisable,"avHardwareDisable");
	HX_VISIT_MEMBER_NAME(Capabilities_obj::cpuArchitecture,"cpuArchitecture");
	HX_VISIT_MEMBER_NAME(Capabilities_obj::hasAccessibility,"hasAccessibility");
	HX_VISIT_MEMBER_NAME(Capabilities_obj::hasAudio,"hasAudio");
	HX_VISIT_MEMBER_NAME(Capabilities_obj::hasAudioEncoder,"hasAudioEncoder");
	HX_VISIT_MEMBER_NAME(Capabilities_obj::hasEmbeddedVideo,"hasEmbeddedVideo");
	HX_VISIT_MEMBER_NAME(Capabilities_obj::hasIME,"hasIME");
	HX_VISIT_MEMBER_NAME(Capabilities_obj::hasMP3,"hasMP3");
	HX_VISIT_MEMBER_NAME(Capabilities_obj::hasPrinting,"hasPrinting");
	HX_VISIT_MEMBER_NAME(Capabilities_obj::hasScreenBroadcast,"hasScreenBroadcast");
	HX_VISIT_MEMBER_NAME(Capabilities_obj::hasScreenPlayback,"hasScreenPlayback");
	HX_VISIT_MEMBER_NAME(Capabilities_obj::hasStreamingAudio,"hasStreamingAudio");
	HX_VISIT_MEMBER_NAME(Capabilities_obj::hasStreamingVideo,"hasStreamingVideo");
	HX_VISIT_MEMBER_NAME(Capabilities_obj::hasTLS,"hasTLS");
	HX_VISIT_MEMBER_NAME(Capabilities_obj::hasVideoEncoder,"hasVideoEncoder");
	HX_VISIT_MEMBER_NAME(Capabilities_obj::isDebugger,"isDebugger");
	HX_VISIT_MEMBER_NAME(Capabilities_obj::isEmbeddedInAcrobat,"isEmbeddedInAcrobat");
	HX_VISIT_MEMBER_NAME(Capabilities_obj::localFileReadDisable,"localFileReadDisable");
	HX_VISIT_MEMBER_NAME(Capabilities_obj::manufacturer,"manufacturer");
	HX_VISIT_MEMBER_NAME(Capabilities_obj::maxLevelIDC,"maxLevelIDC");
	HX_VISIT_MEMBER_NAME(Capabilities_obj::playerType,"playerType");
	HX_VISIT_MEMBER_NAME(Capabilities_obj::screenColor,"screenColor");
	HX_VISIT_MEMBER_NAME(Capabilities_obj::serverString,"serverString");
	HX_VISIT_MEMBER_NAME(Capabilities_obj::supports32BitProcesses,"supports32BitProcesses");
	HX_VISIT_MEMBER_NAME(Capabilities_obj::supports64BitProcesses,"supports64BitProcesses");
	HX_VISIT_MEMBER_NAME(Capabilities_obj::touchscreenType,"touchscreenType");
};

#endif

hx::Class Capabilities_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("avHardwareDisable","\xab","\x62","\x32","\x9a"),
	HX_HCSTRING("cpuArchitecture","\x1b","\xa2","\xc9","\xca"),
	HX_HCSTRING("hasAccessibility","\xd4","\x3e","\x39","\x17"),
	HX_HCSTRING("hasAudio","\x1c","\xc3","\xd8","\xb3"),
	HX_HCSTRING("hasAudioEncoder","\xe0","\x21","\x7b","\x20"),
	HX_HCSTRING("hasEmbeddedVideo","\xd7","\x96","\x81","\xbc"),
	HX_HCSTRING("hasIME","\xc7","\xfc","\x36","\xbb"),
	HX_HCSTRING("hasMP3","\x56","\x08","\x3a","\xbb"),
	HX_HCSTRING("hasPrinting","\x4f","\x34","\xe1","\xfb"),
	HX_HCSTRING("hasScreenBroadcast","\xbb","\x97","\x24","\x21"),
	HX_HCSTRING("hasScreenPlayback","\xa1","\x92","\x10","\x71"),
	HX_HCSTRING("hasStreamingAudio","\x0e","\xba","\x1a","\x5c"),
	HX_HCSTRING("hasStreamingVideo","\xb3","\x55","\x96","\x6b"),
	HX_HCSTRING("hasTLS","\xc1","\x54","\x3f","\xbb"),
	HX_HCSTRING("hasVideoEncoder","\xdb","\x74","\xfc","\x2e"),
	HX_HCSTRING("isDebugger","\x2b","\x36","\x9a","\x0b"),
	HX_HCSTRING("isEmbeddedInAcrobat","\x7d","\x1e","\x22","\xf6"),
	HX_HCSTRING("localFileReadDisable","\xeb","\x2e","\x91","\x02"),
	HX_HCSTRING("manufacturer","\x51","\x1a","\x55","\x14"),
	HX_HCSTRING("maxLevelIDC","\xc8","\xdf","\x35","\x9c"),
	HX_HCSTRING("playerType","\xbb","\xce","\xca","\xaf"),
	HX_HCSTRING("screenColor","\x57","\xbe","\xe1","\x01"),
	HX_HCSTRING("serverString","\xf4","\xdb","\x68","\x98"),
	HX_HCSTRING("supports32BitProcesses","\xd3","\xe5","\x56","\xaa"),
	HX_HCSTRING("supports64BitProcesses","\xf2","\xda","\xdf","\x7d"),
	HX_HCSTRING("touchscreenType","\xc5","\x5c","\xc7","\x58"),
	HX_HCSTRING("hasMultiChannelAudio","\x72","\x08","\xff","\xd2"),
	HX_HCSTRING("get_os","\x6d","\xf8","\x2f","\xa3"),
	HX_HCSTRING("get_pixelAspectRatio","\x36","\x38","\x9a","\xc3"),
	HX_HCSTRING("get_screenDPI","\x28","\x63","\x54","\xf9"),
	HX_HCSTRING("get_screenResolutionX","\x77","\xd0","\x6e","\x5c"),
	HX_HCSTRING("get_screenResolutionY","\x78","\xd0","\x6e","\x5c"),
	HX_HCSTRING("get_language","\x61","\x34","\x2b","\x2f"),
	HX_HCSTRING("get_version","\x2f","\x47","\xec","\x02"),
	::String(null()) };

void Capabilities_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.system.Capabilities","\x57","\xc7","\x7b","\xbd");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Capabilities_obj::__GetStatic;
	__mClass->mSetStaticField = &Capabilities_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Capabilities_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = sStaticStorageInfo;
#endif
	hx::RegisterClass(__mClass->mName, __mClass);
}

void Capabilities_obj::__boot()
{
	avHardwareDisable= true;
	cpuArchitecture= HX_HCSTRING("","\x00","\x00","\x00","\x00");
	hasAccessibility= false;
	hasAudio= true;
	hasAudioEncoder= false;
	hasEmbeddedVideo= false;
	hasIME= false;
	hasMP3= false;
	hasPrinting= false;
	hasScreenBroadcast= false;
	hasScreenPlayback= false;
	hasStreamingAudio= false;
	hasStreamingVideo= false;
	hasTLS= true;
	hasVideoEncoder= false;
	isDebugger= false;
	isEmbeddedInAcrobat= false;
	localFileReadDisable= false;
	manufacturer= HX_HCSTRING("OpenFL Contributors","\xc8","\xce","\x85","\xc7");
	maxLevelIDC= (int)0;
	playerType= HX_HCSTRING("OpenFL","\xb0","\xbb","\x28","\x56");
	screenColor= HX_HCSTRING("color","\x63","\x71","\x5c","\x4a");
	serverString= HX_HCSTRING("","\x00","\x00","\x00","\x00");
	supports32BitProcesses= true;
	supports64BitProcesses= false;
	touchscreenType= ((Dynamic)((int)0));
}

} // end namespace openfl
} // end namespace system
