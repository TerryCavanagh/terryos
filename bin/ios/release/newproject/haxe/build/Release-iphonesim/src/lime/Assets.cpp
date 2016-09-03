#include <hxcpp.h>

#ifndef INCLUDED_DefaultAssetLibrary
#include <DefaultAssetLibrary.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_format_JsonParser
#include <haxe/format/JsonParser.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_AssetCache
#include <lime/AssetCache.h>
#endif
#ifndef INCLUDED_lime_AssetLibrary
#include <lime/AssetLibrary.h>
#endif
#ifndef INCLUDED_lime_Assets
#include <lime/Assets.h>
#endif
#ifndef INCLUDED_lime_app_Event_Void_Void
#include <lime/app/Event_Void_Void.h>
#endif
#ifndef INCLUDED_lime_app_Future
#include <lime/app/Future.h>
#endif
#ifndef INCLUDED_lime_app_Promise
#include <lime/app/Promise.h>
#endif
#ifndef INCLUDED_lime_audio_AudioBuffer
#include <lime/audio/AudioBuffer.h>
#endif
#ifndef INCLUDED_lime_graphics_Image
#include <lime/graphics/Image.h>
#endif
#ifndef INCLUDED_lime_text_Font
#include <lime/text/Font.h>
#endif
#ifndef INCLUDED_lime_utils_Bytes
#include <lime/utils/Bytes.h>
#endif
namespace lime{

Void Assets_obj::__construct()
{
	return null();
}

//Assets_obj::~Assets_obj() { }

Dynamic Assets_obj::__CreateEmpty() { return  new Assets_obj; }
hx::ObjectPtr< Assets_obj > Assets_obj::__new()
{  hx::ObjectPtr< Assets_obj > _result_ = new Assets_obj();
	_result_->__construct();
	return _result_;}

Dynamic Assets_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Assets_obj > _result_ = new Assets_obj();
	_result_->__construct();
	return _result_;}

::lime::AssetCache Assets_obj::cache;

::haxe::ds::StringMap Assets_obj::libraries;

::lime::app::Event_Void_Void Assets_obj::onChange;

bool Assets_obj::initialized;

bool Assets_obj::exists( ::String id,::String type){
	HX_STACK_FRAME("lime.Assets","exists",0x8a084f2e,"lime.Assets.exists","lime/Assets.hx",48,0x48c77341)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(type,"type")
	HX_STACK_LINE(50)
	::lime::Assets_obj::initialize();
	HX_STACK_LINE(54)
	bool tmp = (type == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(54)
	if ((tmp)){
		HX_STACK_LINE(56)
		type = HX_HCSTRING("BINARY","\x01","\x68","\x8e","\x9f");
	}
	HX_STACK_LINE(60)
	int tmp1 = id.indexOf(HX_HCSTRING(":","\x3a","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(60)
	::String tmp2 = id.substring((int)0,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(60)
	::String libraryName = tmp2;		HX_STACK_VAR(libraryName,"libraryName");
	HX_STACK_LINE(61)
	int tmp3 = id.indexOf(HX_HCSTRING(":","\x3a","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(61)
	int tmp4 = (tmp3 + (int)1);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(61)
	::String tmp5 = id.substr(tmp4,null());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(61)
	::String symbolName = tmp5;		HX_STACK_VAR(symbolName,"symbolName");
	HX_STACK_LINE(62)
	::String tmp6 = libraryName;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(62)
	::lime::AssetLibrary tmp7 = ::lime::Assets_obj::getLibrary(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(62)
	::lime::AssetLibrary library = tmp7;		HX_STACK_VAR(library,"library");
	HX_STACK_LINE(64)
	bool tmp8 = (library != null());		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(64)
	if ((tmp8)){
		HX_STACK_LINE(66)
		::String tmp9 = symbolName;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(66)
		::String tmp10 = type;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(66)
		bool tmp11 = library->exists(tmp9,tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(66)
		return tmp11;
	}
	HX_STACK_LINE(72)
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,exists,return )

::lime::audio::AudioBuffer Assets_obj::getAudioBuffer( ::String id,hx::Null< bool >  __o_useCache){
bool useCache = __o_useCache.Default(true);
	HX_STACK_FRAME("lime.Assets","getAudioBuffer",0x1f7814d2,"lime.Assets.getAudioBuffer","lime/Assets.hx",83,0x48c77341)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(useCache,"useCache")
{
		HX_STACK_LINE(85)
		::lime::Assets_obj::initialize();
		HX_STACK_LINE(89)
		bool tmp = useCache;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(89)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(89)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(89)
		if ((tmp1)){
			HX_STACK_LINE(89)
			::lime::AssetCache tmp3 = ::lime::Assets_obj::cache;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(89)
			::lime::AssetCache tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(89)
			::lime::AssetCache tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(89)
			tmp2 = tmp5->enabled;
		}
		else{
			HX_STACK_LINE(89)
			tmp2 = false;
		}
		HX_STACK_LINE(89)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(89)
		if ((tmp2)){
			HX_STACK_LINE(89)
			::lime::AssetCache tmp4 = ::lime::Assets_obj::cache;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(89)
			::lime::AssetCache tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(89)
			::String tmp6 = id;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(89)
			::String tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(89)
			tmp3 = tmp5->audio->exists(tmp7);
		}
		else{
			HX_STACK_LINE(89)
			tmp3 = false;
		}
		HX_STACK_LINE(89)
		if ((tmp3)){
			HX_STACK_LINE(91)
			::lime::AssetCache tmp4 = ::lime::Assets_obj::cache;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(91)
			::String tmp5 = id;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(91)
			::lime::audio::AudioBuffer tmp6 = tmp4->audio->get(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(91)
			::lime::audio::AudioBuffer audio = tmp6;		HX_STACK_VAR(audio,"audio");
			HX_STACK_LINE(93)
			::lime::audio::AudioBuffer tmp7 = audio;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(93)
			bool tmp8 = ::lime::Assets_obj::isValidAudio(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(93)
			if ((tmp8)){
				HX_STACK_LINE(95)
				::lime::audio::AudioBuffer tmp9 = audio;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(95)
				return tmp9;
			}
		}
		HX_STACK_LINE(101)
		int tmp4 = id.indexOf(HX_HCSTRING(":","\x3a","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(101)
		::String tmp5 = id.substring((int)0,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(101)
		::String libraryName = tmp5;		HX_STACK_VAR(libraryName,"libraryName");
		HX_STACK_LINE(102)
		int tmp6 = id.indexOf(HX_HCSTRING(":","\x3a","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(102)
		int tmp7 = (tmp6 + (int)1);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(102)
		::String tmp8 = id.substr(tmp7,null());		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(102)
		::String symbolName = tmp8;		HX_STACK_VAR(symbolName,"symbolName");
		HX_STACK_LINE(103)
		::String tmp9 = libraryName;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(103)
		::lime::AssetLibrary tmp10 = ::lime::Assets_obj::getLibrary(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(103)
		::lime::AssetLibrary library = tmp10;		HX_STACK_VAR(library,"library");
		HX_STACK_LINE(105)
		bool tmp11 = (library != null());		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(105)
		if ((tmp11)){
			HX_STACK_LINE(107)
			::String tmp12 = symbolName;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(107)
			bool tmp13 = library->exists(tmp12,HX_HCSTRING("SOUND","\xaf","\xc4","\xba","\xfe"));		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(107)
			if ((tmp13)){
				HX_STACK_LINE(109)
				::String tmp14 = symbolName;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(109)
				bool tmp15 = library->isLocal(tmp14,HX_HCSTRING("SOUND","\xaf","\xc4","\xba","\xfe"));		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(109)
				if ((tmp15)){
					HX_STACK_LINE(111)
					::String tmp16 = symbolName;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(111)
					::lime::audio::AudioBuffer tmp17 = library->getAudioBuffer(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(111)
					::lime::audio::AudioBuffer audio = tmp17;		HX_STACK_VAR(audio,"audio");
					HX_STACK_LINE(113)
					bool tmp18 = useCache;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(113)
					bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(113)
					if ((tmp18)){
						HX_STACK_LINE(113)
						::lime::AssetCache tmp20 = ::lime::Assets_obj::cache;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(113)
						::lime::AssetCache tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(113)
						tmp19 = tmp21->enabled;
					}
					else{
						HX_STACK_LINE(113)
						tmp19 = false;
					}
					HX_STACK_LINE(113)
					if ((tmp19)){
						HX_STACK_LINE(115)
						::lime::AssetCache tmp20 = ::lime::Assets_obj::cache;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(115)
						::String tmp21 = id;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(115)
						::lime::audio::AudioBuffer tmp22 = audio;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(115)
						tmp20->audio->set(tmp21,tmp22);
					}
					HX_STACK_LINE(119)
					::lime::audio::AudioBuffer tmp20 = audio;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(119)
					return tmp20;
				}
				else{
					HX_STACK_LINE(123)
					::String tmp16 = (HX_HCSTRING("[Assets] Audio asset \"","\x07","\x8c","\xae","\x7b") + id);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(123)
					::String tmp17 = (tmp16 + HX_HCSTRING("\" exists, but only asynchronously","\xdc","\xca","\xf2","\xdd"));		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(123)
					Dynamic tmp18 = hx::SourceInfo(HX_HCSTRING("Assets.hx","\xfb","\xcd","\xc6","\x67"),876,HX_HCSTRING("lime.Assets","\xdc","\x38","\x84","\x97"),HX_HCSTRING("printError","\x5b","\x20","\xbc","\xcb"));		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(123)
					::haxe::Log_obj::trace(tmp17,tmp18);
				}
			}
			else{
				HX_STACK_LINE(129)
				::String tmp14 = (HX_HCSTRING("[Assets] There is no audio asset with an ID of \"","\x65","\x50","\xb8","\x55") + id);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(129)
				::String tmp15 = (tmp14 + HX_HCSTRING("\"","\x22","\x00","\x00","\x00"));		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(129)
				Dynamic tmp16 = hx::SourceInfo(HX_HCSTRING("Assets.hx","\xfb","\xcd","\xc6","\x67"),876,HX_HCSTRING("lime.Assets","\xdc","\x38","\x84","\x97"),HX_HCSTRING("printError","\x5b","\x20","\xbc","\xcb"));		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(129)
				::haxe::Log_obj::trace(tmp15,tmp16);
			}
		}
		else{
			HX_STACK_LINE(135)
			::String tmp12 = (HX_HCSTRING("[Assets] There is no asset library named \"","\xa0","\xb4","\x0a","\xcd") + libraryName);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(135)
			::String tmp13 = (tmp12 + HX_HCSTRING("\"","\x22","\x00","\x00","\x00"));		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(135)
			Dynamic tmp14 = hx::SourceInfo(HX_HCSTRING("Assets.hx","\xfb","\xcd","\xc6","\x67"),876,HX_HCSTRING("lime.Assets","\xdc","\x38","\x84","\x97"),HX_HCSTRING("printError","\x5b","\x20","\xbc","\xcb"));		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(135)
			::haxe::Log_obj::trace(tmp13,tmp14);
		}
		HX_STACK_LINE(141)
		return null();
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,getAudioBuffer,return )

::lime::utils::Bytes Assets_obj::getBytes( ::String id){
	HX_STACK_FRAME("lime.Assets","getBytes",0xe703c1c7,"lime.Assets.getBytes","lime/Assets.hx",152,0x48c77341)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(154)
	::lime::Assets_obj::initialize();
	HX_STACK_LINE(158)
	int tmp = id.indexOf(HX_HCSTRING(":","\x3a","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(158)
	::String tmp1 = id.substring((int)0,tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(158)
	::String libraryName = tmp1;		HX_STACK_VAR(libraryName,"libraryName");
	HX_STACK_LINE(159)
	int tmp2 = id.indexOf(HX_HCSTRING(":","\x3a","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(159)
	int tmp3 = (tmp2 + (int)1);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(159)
	::String tmp4 = id.substr(tmp3,null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(159)
	::String symbolName = tmp4;		HX_STACK_VAR(symbolName,"symbolName");
	HX_STACK_LINE(160)
	::String tmp5 = libraryName;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(160)
	::lime::AssetLibrary tmp6 = ::lime::Assets_obj::getLibrary(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(160)
	::lime::AssetLibrary library = tmp6;		HX_STACK_VAR(library,"library");
	HX_STACK_LINE(162)
	bool tmp7 = (library != null());		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(162)
	if ((tmp7)){
		HX_STACK_LINE(164)
		::String tmp8 = symbolName;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(164)
		bool tmp9 = library->exists(tmp8,HX_HCSTRING("BINARY","\x01","\x68","\x8e","\x9f"));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(164)
		if ((tmp9)){
			HX_STACK_LINE(166)
			::String tmp10 = symbolName;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(166)
			bool tmp11 = library->isLocal(tmp10,HX_HCSTRING("BINARY","\x01","\x68","\x8e","\x9f"));		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(166)
			if ((tmp11)){
				HX_STACK_LINE(168)
				::String tmp12 = symbolName;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(168)
				::lime::utils::Bytes tmp13 = library->getBytes(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(168)
				return tmp13;
			}
			else{
				HX_STACK_LINE(172)
				::String tmp12 = (HX_HCSTRING("[Assets] String or Bytes asset \"","\xae","\x95","\x0c","\xeb") + id);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(172)
				::String tmp13 = (tmp12 + HX_HCSTRING("\" exists, but only asynchronously","\xdc","\xca","\xf2","\xdd"));		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(172)
				Dynamic tmp14 = hx::SourceInfo(HX_HCSTRING("Assets.hx","\xfb","\xcd","\xc6","\x67"),876,HX_HCSTRING("lime.Assets","\xdc","\x38","\x84","\x97"),HX_HCSTRING("printError","\x5b","\x20","\xbc","\xcb"));		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(172)
				::haxe::Log_obj::trace(tmp13,tmp14);
			}
		}
		else{
			HX_STACK_LINE(178)
			::String tmp10 = (HX_HCSTRING("[Assets] There is no String or Bytes asset with an ID of \"","\xec","\xff","\x7c","\x1c") + id);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(178)
			::String tmp11 = (tmp10 + HX_HCSTRING("\"","\x22","\x00","\x00","\x00"));		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(178)
			Dynamic tmp12 = hx::SourceInfo(HX_HCSTRING("Assets.hx","\xfb","\xcd","\xc6","\x67"),876,HX_HCSTRING("lime.Assets","\xdc","\x38","\x84","\x97"),HX_HCSTRING("printError","\x5b","\x20","\xbc","\xcb"));		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(178)
			::haxe::Log_obj::trace(tmp11,tmp12);
		}
	}
	else{
		HX_STACK_LINE(184)
		::String tmp8 = (HX_HCSTRING("[Assets] There is no asset library named \"","\xa0","\xb4","\x0a","\xcd") + libraryName);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(184)
		::String tmp9 = (tmp8 + HX_HCSTRING("\"","\x22","\x00","\x00","\x00"));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(184)
		Dynamic tmp10 = hx::SourceInfo(HX_HCSTRING("Assets.hx","\xfb","\xcd","\xc6","\x67"),876,HX_HCSTRING("lime.Assets","\xdc","\x38","\x84","\x97"),HX_HCSTRING("printError","\x5b","\x20","\xbc","\xcb"));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(184)
		::haxe::Log_obj::trace(tmp9,tmp10);
	}
	HX_STACK_LINE(190)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,getBytes,return )

::lime::text::Font Assets_obj::getFont( ::String id,hx::Null< bool >  __o_useCache){
bool useCache = __o_useCache.Default(true);
	HX_STACK_FRAME("lime.Assets","getFont",0x2f4603f3,"lime.Assets.getFont","lime/Assets.hx",201,0x48c77341)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(useCache,"useCache")
{
		HX_STACK_LINE(203)
		::lime::Assets_obj::initialize();
		HX_STACK_LINE(207)
		bool tmp = useCache;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(207)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(207)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(207)
		if ((tmp1)){
			HX_STACK_LINE(207)
			::lime::AssetCache tmp3 = ::lime::Assets_obj::cache;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(207)
			::lime::AssetCache tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(207)
			::lime::AssetCache tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(207)
			tmp2 = tmp5->enabled;
		}
		else{
			HX_STACK_LINE(207)
			tmp2 = false;
		}
		HX_STACK_LINE(207)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(207)
		if ((tmp2)){
			HX_STACK_LINE(207)
			::lime::AssetCache tmp4 = ::lime::Assets_obj::cache;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(207)
			::lime::AssetCache tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(207)
			::String tmp6 = id;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(207)
			::String tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(207)
			tmp3 = tmp5->font->exists(tmp7);
		}
		else{
			HX_STACK_LINE(207)
			tmp3 = false;
		}
		HX_STACK_LINE(207)
		if ((tmp3)){
			HX_STACK_LINE(209)
			::lime::AssetCache tmp4 = ::lime::Assets_obj::cache;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(209)
			::String tmp5 = id;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(209)
			Dynamic tmp6 = tmp4->font->get(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(209)
			Dynamic tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(209)
			return tmp7;
		}
		HX_STACK_LINE(213)
		int tmp4 = id.indexOf(HX_HCSTRING(":","\x3a","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(213)
		::String tmp5 = id.substring((int)0,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(213)
		::String libraryName = tmp5;		HX_STACK_VAR(libraryName,"libraryName");
		HX_STACK_LINE(214)
		int tmp6 = id.indexOf(HX_HCSTRING(":","\x3a","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(214)
		int tmp7 = (tmp6 + (int)1);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(214)
		::String tmp8 = id.substr(tmp7,null());		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(214)
		::String symbolName = tmp8;		HX_STACK_VAR(symbolName,"symbolName");
		HX_STACK_LINE(215)
		::String tmp9 = libraryName;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(215)
		::lime::AssetLibrary tmp10 = ::lime::Assets_obj::getLibrary(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(215)
		::lime::AssetLibrary library = tmp10;		HX_STACK_VAR(library,"library");
		HX_STACK_LINE(217)
		bool tmp11 = (library != null());		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(217)
		if ((tmp11)){
			HX_STACK_LINE(219)
			::String tmp12 = symbolName;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(219)
			bool tmp13 = library->exists(tmp12,HX_HCSTRING("FONT","\xcf","\x25","\x81","\x2e"));		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(219)
			if ((tmp13)){
				HX_STACK_LINE(221)
				::String tmp14 = symbolName;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(221)
				bool tmp15 = library->isLocal(tmp14,HX_HCSTRING("FONT","\xcf","\x25","\x81","\x2e"));		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(221)
				if ((tmp15)){
					HX_STACK_LINE(223)
					::String tmp16 = symbolName;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(223)
					::lime::text::Font tmp17 = library->getFont(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(223)
					::lime::text::Font font = tmp17;		HX_STACK_VAR(font,"font");
					HX_STACK_LINE(225)
					bool tmp18 = useCache;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(225)
					bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(225)
					if ((tmp18)){
						HX_STACK_LINE(225)
						::lime::AssetCache tmp20 = ::lime::Assets_obj::cache;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(225)
						::lime::AssetCache tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(225)
						tmp19 = tmp21->enabled;
					}
					else{
						HX_STACK_LINE(225)
						tmp19 = false;
					}
					HX_STACK_LINE(225)
					if ((tmp19)){
						HX_STACK_LINE(227)
						::lime::AssetCache tmp20 = ::lime::Assets_obj::cache;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(227)
						::String tmp21 = id;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(227)
						::lime::text::Font tmp22 = font;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(227)
						tmp20->font->set(tmp21,tmp22);
					}
					HX_STACK_LINE(231)
					::lime::text::Font tmp20 = font;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(231)
					return tmp20;
				}
				else{
					HX_STACK_LINE(235)
					::String tmp16 = (HX_HCSTRING("[Assets] Font asset \"","\x22","\x94","\xa9","\xe6") + id);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(235)
					::String tmp17 = (tmp16 + HX_HCSTRING("\" exists, but only asynchronously","\xdc","\xca","\xf2","\xdd"));		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(235)
					Dynamic tmp18 = hx::SourceInfo(HX_HCSTRING("Assets.hx","\xfb","\xcd","\xc6","\x67"),876,HX_HCSTRING("lime.Assets","\xdc","\x38","\x84","\x97"),HX_HCSTRING("printError","\x5b","\x20","\xbc","\xcb"));		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(235)
					::haxe::Log_obj::trace(tmp17,tmp18);
				}
			}
			else{
				HX_STACK_LINE(241)
				::String tmp14 = (HX_HCSTRING("[Assets] There is no Font asset with an ID of \"","\x8a","\x40","\xc3","\xf6") + id);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(241)
				::String tmp15 = (tmp14 + HX_HCSTRING("\"","\x22","\x00","\x00","\x00"));		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(241)
				Dynamic tmp16 = hx::SourceInfo(HX_HCSTRING("Assets.hx","\xfb","\xcd","\xc6","\x67"),876,HX_HCSTRING("lime.Assets","\xdc","\x38","\x84","\x97"),HX_HCSTRING("printError","\x5b","\x20","\xbc","\xcb"));		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(241)
				::haxe::Log_obj::trace(tmp15,tmp16);
			}
		}
		else{
			HX_STACK_LINE(247)
			::String tmp12 = (HX_HCSTRING("[Assets] There is no asset library named \"","\xa0","\xb4","\x0a","\xcd") + libraryName);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(247)
			::String tmp13 = (tmp12 + HX_HCSTRING("\"","\x22","\x00","\x00","\x00"));		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(247)
			Dynamic tmp14 = hx::SourceInfo(HX_HCSTRING("Assets.hx","\xfb","\xcd","\xc6","\x67"),876,HX_HCSTRING("lime.Assets","\xdc","\x38","\x84","\x97"),HX_HCSTRING("printError","\x5b","\x20","\xbc","\xcb"));		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(247)
			::haxe::Log_obj::trace(tmp13,tmp14);
		}
		HX_STACK_LINE(253)
		return null();
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,getFont,return )

::lime::graphics::Image Assets_obj::getImage( ::String id,hx::Null< bool >  __o_useCache){
bool useCache = __o_useCache.Default(true);
	HX_STACK_FRAME("lime.Assets","getImage",0xe6d4d8b7,"lime.Assets.getImage","lime/Assets.hx",265,0x48c77341)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(useCache,"useCache")
{
		HX_STACK_LINE(267)
		::lime::Assets_obj::initialize();
		HX_STACK_LINE(271)
		bool tmp = useCache;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(271)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(271)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(271)
		if ((tmp1)){
			HX_STACK_LINE(271)
			::lime::AssetCache tmp3 = ::lime::Assets_obj::cache;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(271)
			::lime::AssetCache tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(271)
			::lime::AssetCache tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(271)
			tmp2 = tmp5->enabled;
		}
		else{
			HX_STACK_LINE(271)
			tmp2 = false;
		}
		HX_STACK_LINE(271)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(271)
		if ((tmp2)){
			HX_STACK_LINE(271)
			::lime::AssetCache tmp4 = ::lime::Assets_obj::cache;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(271)
			::lime::AssetCache tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(271)
			::String tmp6 = id;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(271)
			::String tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(271)
			tmp3 = tmp5->image->exists(tmp7);
		}
		else{
			HX_STACK_LINE(271)
			tmp3 = false;
		}
		HX_STACK_LINE(271)
		if ((tmp3)){
			HX_STACK_LINE(273)
			::lime::AssetCache tmp4 = ::lime::Assets_obj::cache;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(273)
			::String tmp5 = id;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(273)
			::lime::graphics::Image tmp6 = tmp4->image->get(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(273)
			::lime::graphics::Image image = tmp6;		HX_STACK_VAR(image,"image");
			HX_STACK_LINE(275)
			::lime::graphics::Image tmp7 = image;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(275)
			bool tmp8 = ::lime::Assets_obj::isValidImage(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(275)
			if ((tmp8)){
				HX_STACK_LINE(277)
				::lime::graphics::Image tmp9 = image;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(277)
				return tmp9;
			}
		}
		HX_STACK_LINE(283)
		int tmp4 = id.indexOf(HX_HCSTRING(":","\x3a","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(283)
		::String tmp5 = id.substring((int)0,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(283)
		::String libraryName = tmp5;		HX_STACK_VAR(libraryName,"libraryName");
		HX_STACK_LINE(284)
		int tmp6 = id.indexOf(HX_HCSTRING(":","\x3a","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(284)
		int tmp7 = (tmp6 + (int)1);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(284)
		::String tmp8 = id.substr(tmp7,null());		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(284)
		::String symbolName = tmp8;		HX_STACK_VAR(symbolName,"symbolName");
		HX_STACK_LINE(285)
		::String tmp9 = libraryName;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(285)
		::lime::AssetLibrary tmp10 = ::lime::Assets_obj::getLibrary(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(285)
		::lime::AssetLibrary library = tmp10;		HX_STACK_VAR(library,"library");
		HX_STACK_LINE(287)
		bool tmp11 = (library != null());		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(287)
		if ((tmp11)){
			HX_STACK_LINE(289)
			::String tmp12 = symbolName;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(289)
			bool tmp13 = library->exists(tmp12,HX_HCSTRING("IMAGE","\x3b","\x57","\x57","\x3b"));		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(289)
			if ((tmp13)){
				HX_STACK_LINE(291)
				::String tmp14 = symbolName;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(291)
				bool tmp15 = library->isLocal(tmp14,HX_HCSTRING("IMAGE","\x3b","\x57","\x57","\x3b"));		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(291)
				if ((tmp15)){
					HX_STACK_LINE(293)
					::String tmp16 = symbolName;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(293)
					::lime::graphics::Image tmp17 = library->getImage(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(293)
					::lime::graphics::Image image = tmp17;		HX_STACK_VAR(image,"image");
					HX_STACK_LINE(295)
					bool tmp18 = useCache;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(295)
					bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(295)
					if ((tmp18)){
						HX_STACK_LINE(295)
						::lime::AssetCache tmp20 = ::lime::Assets_obj::cache;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(295)
						::lime::AssetCache tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(295)
						tmp19 = tmp21->enabled;
					}
					else{
						HX_STACK_LINE(295)
						tmp19 = false;
					}
					HX_STACK_LINE(295)
					if ((tmp19)){
						HX_STACK_LINE(297)
						::lime::AssetCache tmp20 = ::lime::Assets_obj::cache;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(297)
						::String tmp21 = id;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(297)
						::lime::graphics::Image tmp22 = image;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(297)
						tmp20->image->set(tmp21,tmp22);
					}
					HX_STACK_LINE(301)
					::lime::graphics::Image tmp20 = image;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(301)
					return tmp20;
				}
				else{
					HX_STACK_LINE(305)
					::String tmp16 = (HX_HCSTRING("[Assets] Image asset \"","\x8c","\xbf","\x18","\x5b") + id);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(305)
					::String tmp17 = (tmp16 + HX_HCSTRING("\" exists, but only asynchronously","\xdc","\xca","\xf2","\xdd"));		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(305)
					Dynamic tmp18 = hx::SourceInfo(HX_HCSTRING("Assets.hx","\xfb","\xcd","\xc6","\x67"),876,HX_HCSTRING("lime.Assets","\xdc","\x38","\x84","\x97"),HX_HCSTRING("printError","\x5b","\x20","\xbc","\xcb"));		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(305)
					::haxe::Log_obj::trace(tmp17,tmp18);
				}
			}
			else{
				HX_STACK_LINE(311)
				::String tmp14 = (HX_HCSTRING("[Assets] There is no Image asset with an ID of \"","\x8a","\x1a","\x98","\x70") + id);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(311)
				::String tmp15 = (tmp14 + HX_HCSTRING("\"","\x22","\x00","\x00","\x00"));		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(311)
				Dynamic tmp16 = hx::SourceInfo(HX_HCSTRING("Assets.hx","\xfb","\xcd","\xc6","\x67"),876,HX_HCSTRING("lime.Assets","\xdc","\x38","\x84","\x97"),HX_HCSTRING("printError","\x5b","\x20","\xbc","\xcb"));		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(311)
				::haxe::Log_obj::trace(tmp15,tmp16);
			}
		}
		else{
			HX_STACK_LINE(317)
			::String tmp12 = (HX_HCSTRING("[Assets] There is no asset library named \"","\xa0","\xb4","\x0a","\xcd") + libraryName);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(317)
			::String tmp13 = (tmp12 + HX_HCSTRING("\"","\x22","\x00","\x00","\x00"));		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(317)
			Dynamic tmp14 = hx::SourceInfo(HX_HCSTRING("Assets.hx","\xfb","\xcd","\xc6","\x67"),876,HX_HCSTRING("lime.Assets","\xdc","\x38","\x84","\x97"),HX_HCSTRING("printError","\x5b","\x20","\xbc","\xcb"));		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(317)
			::haxe::Log_obj::trace(tmp13,tmp14);
		}
		HX_STACK_LINE(323)
		return null();
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,getImage,return )

::lime::AssetLibrary Assets_obj::getLibrary( ::String name){
	HX_STACK_FRAME("lime.Assets","getLibrary",0x6641ef57,"lime.Assets.getLibrary","lime/Assets.hx",328,0x48c77341)
	HX_STACK_ARG(name,"name")
	HX_STACK_LINE(330)
	bool tmp = (name == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(330)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(330)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(330)
	if ((tmp1)){
		HX_STACK_LINE(330)
		tmp2 = (name == HX_HCSTRING("","\x00","\x00","\x00","\x00"));
	}
	else{
		HX_STACK_LINE(330)
		tmp2 = true;
	}
	HX_STACK_LINE(330)
	if ((tmp2)){
		HX_STACK_LINE(332)
		name = HX_HCSTRING("default","\xc1","\xd8","\xc3","\x9b");
	}
	HX_STACK_LINE(336)
	::haxe::ds::StringMap tmp3 = ::lime::Assets_obj::libraries;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(336)
	::String tmp4 = name;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(336)
	::lime::AssetLibrary tmp5 = tmp3->get(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(336)
	::lime::AssetLibrary tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(336)
	return tmp6;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,getLibrary,return )

::String Assets_obj::getPath( ::String id){
	HX_STACK_FRAME("lime.Assets","getPath",0x35d78bc9,"lime.Assets.getPath","lime/Assets.hx",347,0x48c77341)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(349)
	::lime::Assets_obj::initialize();
	HX_STACK_LINE(353)
	int tmp = id.indexOf(HX_HCSTRING(":","\x3a","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(353)
	::String tmp1 = id.substring((int)0,tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(353)
	::String libraryName = tmp1;		HX_STACK_VAR(libraryName,"libraryName");
	HX_STACK_LINE(354)
	int tmp2 = id.indexOf(HX_HCSTRING(":","\x3a","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(354)
	int tmp3 = (tmp2 + (int)1);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(354)
	::String tmp4 = id.substr(tmp3,null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(354)
	::String symbolName = tmp4;		HX_STACK_VAR(symbolName,"symbolName");
	HX_STACK_LINE(355)
	::String tmp5 = libraryName;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(355)
	::lime::AssetLibrary tmp6 = ::lime::Assets_obj::getLibrary(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(355)
	::lime::AssetLibrary library = tmp6;		HX_STACK_VAR(library,"library");
	HX_STACK_LINE(357)
	bool tmp7 = (library != null());		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(357)
	if ((tmp7)){
		HX_STACK_LINE(359)
		::String tmp8 = symbolName;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(359)
		bool tmp9 = library->exists(tmp8,null());		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(359)
		if ((tmp9)){
			HX_STACK_LINE(361)
			::String tmp10 = symbolName;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(361)
			::String tmp11 = library->getPath(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(361)
			return tmp11;
		}
		else{
			HX_STACK_LINE(365)
			::String tmp10 = (HX_HCSTRING("[Assets] There is no asset with an ID of \"","\xaf","\xc3","\xed","\x11") + id);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(365)
			::String tmp11 = (tmp10 + HX_HCSTRING("\"","\x22","\x00","\x00","\x00"));		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(365)
			Dynamic tmp12 = hx::SourceInfo(HX_HCSTRING("Assets.hx","\xfb","\xcd","\xc6","\x67"),876,HX_HCSTRING("lime.Assets","\xdc","\x38","\x84","\x97"),HX_HCSTRING("printError","\x5b","\x20","\xbc","\xcb"));		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(365)
			::haxe::Log_obj::trace(tmp11,tmp12);
		}
	}
	else{
		HX_STACK_LINE(371)
		::String tmp8 = (HX_HCSTRING("[Assets] There is no asset library named \"","\xa0","\xb4","\x0a","\xcd") + libraryName);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(371)
		::String tmp9 = (tmp8 + HX_HCSTRING("\"","\x22","\x00","\x00","\x00"));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(371)
		Dynamic tmp10 = hx::SourceInfo(HX_HCSTRING("Assets.hx","\xfb","\xcd","\xc6","\x67"),876,HX_HCSTRING("lime.Assets","\xdc","\x38","\x84","\x97"),HX_HCSTRING("printError","\x5b","\x20","\xbc","\xcb"));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(371)
		::haxe::Log_obj::trace(tmp9,tmp10);
	}
	HX_STACK_LINE(377)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,getPath,return )

::String Assets_obj::getText( ::String id){
	HX_STACK_FRAME("lime.Assets","getText",0x387f72d1,"lime.Assets.getText","lime/Assets.hx",388,0x48c77341)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(390)
	::lime::Assets_obj::initialize();
	HX_STACK_LINE(394)
	int tmp = id.indexOf(HX_HCSTRING(":","\x3a","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(394)
	::String tmp1 = id.substring((int)0,tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(394)
	::String libraryName = tmp1;		HX_STACK_VAR(libraryName,"libraryName");
	HX_STACK_LINE(395)
	int tmp2 = id.indexOf(HX_HCSTRING(":","\x3a","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(395)
	int tmp3 = (tmp2 + (int)1);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(395)
	::String tmp4 = id.substr(tmp3,null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(395)
	::String symbolName = tmp4;		HX_STACK_VAR(symbolName,"symbolName");
	HX_STACK_LINE(396)
	::String tmp5 = libraryName;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(396)
	::lime::AssetLibrary tmp6 = ::lime::Assets_obj::getLibrary(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(396)
	::lime::AssetLibrary library = tmp6;		HX_STACK_VAR(library,"library");
	HX_STACK_LINE(398)
	bool tmp7 = (library != null());		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(398)
	if ((tmp7)){
		HX_STACK_LINE(400)
		::String tmp8 = symbolName;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(400)
		bool tmp9 = library->exists(tmp8,HX_HCSTRING("TEXT","\xad","\x94","\xba","\x37"));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(400)
		if ((tmp9)){
			HX_STACK_LINE(402)
			::String tmp10 = symbolName;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(402)
			bool tmp11 = library->isLocal(tmp10,HX_HCSTRING("TEXT","\xad","\x94","\xba","\x37"));		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(402)
			if ((tmp11)){
				HX_STACK_LINE(404)
				::String tmp12 = symbolName;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(404)
				::String tmp13 = library->getText(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(404)
				return tmp13;
			}
			else{
				HX_STACK_LINE(408)
				::String tmp12 = (HX_HCSTRING("[Assets] String asset \"","\x64","\x53","\x3d","\x14") + id);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(408)
				::String tmp13 = (tmp12 + HX_HCSTRING("\" exists, but only asynchronously","\xdc","\xca","\xf2","\xdd"));		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(408)
				Dynamic tmp14 = hx::SourceInfo(HX_HCSTRING("Assets.hx","\xfb","\xcd","\xc6","\x67"),876,HX_HCSTRING("lime.Assets","\xdc","\x38","\x84","\x97"),HX_HCSTRING("printError","\x5b","\x20","\xbc","\xcb"));		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(408)
				::haxe::Log_obj::trace(tmp13,tmp14);
			}
		}
		else{
			HX_STACK_LINE(414)
			::String tmp10 = (HX_HCSTRING("[Assets] There is no String asset with an ID of \"","\x8c","\x62","\xe6","\x40") + id);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(414)
			::String tmp11 = (tmp10 + HX_HCSTRING("\"","\x22","\x00","\x00","\x00"));		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(414)
			Dynamic tmp12 = hx::SourceInfo(HX_HCSTRING("Assets.hx","\xfb","\xcd","\xc6","\x67"),876,HX_HCSTRING("lime.Assets","\xdc","\x38","\x84","\x97"),HX_HCSTRING("printError","\x5b","\x20","\xbc","\xcb"));		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(414)
			::haxe::Log_obj::trace(tmp11,tmp12);
		}
	}
	else{
		HX_STACK_LINE(420)
		::String tmp8 = (HX_HCSTRING("[Assets] There is no asset library named \"","\xa0","\xb4","\x0a","\xcd") + libraryName);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(420)
		::String tmp9 = (tmp8 + HX_HCSTRING("\"","\x22","\x00","\x00","\x00"));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(420)
		Dynamic tmp10 = hx::SourceInfo(HX_HCSTRING("Assets.hx","\xfb","\xcd","\xc6","\x67"),876,HX_HCSTRING("lime.Assets","\xdc","\x38","\x84","\x97"),HX_HCSTRING("printError","\x5b","\x20","\xbc","\xcb"));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(420)
		::haxe::Log_obj::trace(tmp9,tmp10);
	}
	HX_STACK_LINE(426)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,getText,return )

Void Assets_obj::initialize( ){
{
		HX_STACK_FRAME("lime.Assets","initialize",0xc42b73a2,"lime.Assets.initialize","lime/Assets.hx",431,0x48c77341)
		HX_STACK_LINE(433)
		bool tmp = ::lime::Assets_obj::initialized;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(433)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(433)
		if ((tmp1)){
			HX_STACK_LINE(437)
			::DefaultAssetLibrary tmp2 = ::DefaultAssetLibrary_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(437)
			::lime::Assets_obj::registerLibrary(HX_HCSTRING("default","\xc1","\xd8","\xc3","\x9b"),tmp2);
			HX_STACK_LINE(441)
			::lime::Assets_obj::initialized = true;
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Assets_obj,initialize,(void))

bool Assets_obj::isLocal( ::String id,::String type,hx::Null< bool >  __o_useCache){
bool useCache = __o_useCache.Default(true);
	HX_STACK_FRAME("lime.Assets","isLocal",0x2e79638f,"lime.Assets.isLocal","lime/Assets.hx",448,0x48c77341)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(type,"type")
	HX_STACK_ARG(useCache,"useCache")
{
		HX_STACK_LINE(450)
		::lime::Assets_obj::initialize();
		HX_STACK_LINE(454)
		bool tmp = useCache;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(454)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(454)
		if ((tmp)){
			HX_STACK_LINE(454)
			::lime::AssetCache tmp2 = ::lime::Assets_obj::cache;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(454)
			::lime::AssetCache tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(454)
			tmp1 = tmp3->enabled;
		}
		else{
			HX_STACK_LINE(454)
			tmp1 = false;
		}
		HX_STACK_LINE(454)
		if ((tmp1)){
			HX_STACK_LINE(456)
			bool tmp2 = (type == HX_HCSTRING("IMAGE","\x3b","\x57","\x57","\x3b"));		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(456)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(456)
			bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(456)
			if ((tmp3)){
				HX_STACK_LINE(456)
				tmp4 = (type == null());
			}
			else{
				HX_STACK_LINE(456)
				tmp4 = true;
			}
			HX_STACK_LINE(456)
			if ((tmp4)){
				HX_STACK_LINE(458)
				::lime::AssetCache tmp5 = ::lime::Assets_obj::cache;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(458)
				::String tmp6 = id;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(458)
				bool tmp7 = tmp5->image->exists(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(458)
				if ((tmp7)){
					HX_STACK_LINE(458)
					return true;
				}
			}
			HX_STACK_LINE(462)
			bool tmp5 = (type == HX_HCSTRING("FONT","\xcf","\x25","\x81","\x2e"));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(462)
			bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(462)
			bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(462)
			if ((tmp6)){
				HX_STACK_LINE(462)
				tmp7 = (type == null());
			}
			else{
				HX_STACK_LINE(462)
				tmp7 = true;
			}
			HX_STACK_LINE(462)
			if ((tmp7)){
				HX_STACK_LINE(464)
				::lime::AssetCache tmp8 = ::lime::Assets_obj::cache;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(464)
				::String tmp9 = id;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(464)
				bool tmp10 = tmp8->font->exists(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(464)
				if ((tmp10)){
					HX_STACK_LINE(464)
					return true;
				}
			}
			HX_STACK_LINE(468)
			bool tmp8 = (type == HX_HCSTRING("SOUND","\xaf","\xc4","\xba","\xfe"));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(468)
			bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(468)
			bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(468)
			bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(468)
			if ((tmp10)){
				HX_STACK_LINE(468)
				tmp11 = (type == HX_HCSTRING("MUSIC","\x85","\x08","\x49","\x8e"));
			}
			else{
				HX_STACK_LINE(468)
				tmp11 = true;
			}
			HX_STACK_LINE(468)
			bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(468)
			bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(468)
			if ((tmp12)){
				HX_STACK_LINE(468)
				tmp13 = (type == null());
			}
			else{
				HX_STACK_LINE(468)
				tmp13 = true;
			}
			HX_STACK_LINE(468)
			if ((tmp13)){
				HX_STACK_LINE(470)
				::lime::AssetCache tmp14 = ::lime::Assets_obj::cache;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(470)
				::String tmp15 = id;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(470)
				bool tmp16 = tmp14->audio->exists(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(470)
				if ((tmp16)){
					HX_STACK_LINE(470)
					return true;
				}
			}
		}
		HX_STACK_LINE(476)
		int tmp2 = id.indexOf(HX_HCSTRING(":","\x3a","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(476)
		::String tmp3 = id.substring((int)0,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(476)
		::String libraryName = tmp3;		HX_STACK_VAR(libraryName,"libraryName");
		HX_STACK_LINE(477)
		int tmp4 = id.indexOf(HX_HCSTRING(":","\x3a","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(477)
		int tmp5 = (tmp4 + (int)1);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(477)
		::String tmp6 = id.substr(tmp5,null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(477)
		::String symbolName = tmp6;		HX_STACK_VAR(symbolName,"symbolName");
		HX_STACK_LINE(478)
		::String tmp7 = libraryName;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(478)
		::lime::AssetLibrary tmp8 = ::lime::Assets_obj::getLibrary(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(478)
		::lime::AssetLibrary library = tmp8;		HX_STACK_VAR(library,"library");
		HX_STACK_LINE(480)
		bool tmp9 = (library != null());		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(480)
		if ((tmp9)){
			HX_STACK_LINE(482)
			::String tmp10 = symbolName;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(482)
			::String tmp11 = type;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(482)
			bool tmp12 = library->isLocal(tmp10,tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(482)
			return tmp12;
		}
		HX_STACK_LINE(488)
		return false;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Assets_obj,isLocal,return )

bool Assets_obj::isValidAudio( ::lime::audio::AudioBuffer buffer){
	HX_STACK_FRAME("lime.Assets","isValidAudio",0x0da20596,"lime.Assets.isValidAudio","lime/Assets.hx",493,0x48c77341)
	HX_STACK_ARG(buffer,"buffer")
	HX_STACK_LINE(497)
	bool tmp = (buffer != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(497)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,isValidAudio,return )

bool Assets_obj::isValidImage( ::lime::graphics::Image buffer){
	HX_STACK_FRAME("lime.Assets","isValidImage",0xa38aac1b,"lime.Assets.isValidImage","lime/Assets.hx",509,0x48c77341)
	HX_STACK_ARG(buffer,"buffer")
	HX_STACK_LINE(514)
	bool tmp = (buffer != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(514)
	return tmp;
	HX_STACK_LINE(533)
	return true;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,isValidImage,return )

Array< ::String > Assets_obj::list( ::String type){
	HX_STACK_FRAME("lime.Assets","list",0x60d5f530,"lime.Assets.list","lime/Assets.hx",538,0x48c77341)
	HX_STACK_ARG(type,"type")
	HX_STACK_LINE(540)
	::lime::Assets_obj::initialize();
	HX_STACK_LINE(542)
	Array< ::String > items = Array_obj< ::String >::__new();		HX_STACK_VAR(items,"items");
	HX_STACK_LINE(544)
	::haxe::ds::StringMap tmp = ::lime::Assets_obj::libraries;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(544)
	Dynamic tmp1 = tmp->iterator();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(544)
	for(::cpp::FastIterator_obj< ::lime::AssetLibrary > *__it = ::cpp::CreateFastIterator< ::lime::AssetLibrary >(tmp1);  __it->hasNext(); ){
		::lime::AssetLibrary library = __it->next();
		{
			HX_STACK_LINE(546)
			::String tmp2 = type;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(546)
			Array< ::String > libraryItems = library->list(tmp2);		HX_STACK_VAR(libraryItems,"libraryItems");
			HX_STACK_LINE(548)
			bool tmp3 = (libraryItems != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(548)
			if ((tmp3)){
				HX_STACK_LINE(550)
				items = items->concat(libraryItems);
			}
		}
;
	}
	HX_STACK_LINE(556)
	return items;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,list,return )

::lime::app::Future Assets_obj::loadAudioBuffer( ::String id,hx::Null< bool >  __o_useCache){
bool useCache = __o_useCache.Default(true);
	HX_STACK_FRAME("lime.Assets","loadAudioBuffer",0x6d20865e,"lime.Assets.loadAudioBuffer","lime/Assets.hx",561,0x48c77341)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(useCache,"useCache")
{
		HX_STACK_LINE(563)
		::lime::Assets_obj::initialize();
		HX_STACK_LINE(565)
		::lime::app::Promise tmp = ::lime::app::Promise_obj::__new();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(565)
		::lime::app::Promise promise = tmp;		HX_STACK_VAR(promise,"promise");
		HX_STACK_LINE(569)
		bool tmp1 = useCache;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(569)
		bool tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(569)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(569)
		if ((tmp2)){
			HX_STACK_LINE(569)
			::lime::AssetCache tmp4 = ::lime::Assets_obj::cache;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(569)
			::lime::AssetCache tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(569)
			::lime::AssetCache tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(569)
			tmp3 = tmp6->enabled;
		}
		else{
			HX_STACK_LINE(569)
			tmp3 = false;
		}
		HX_STACK_LINE(569)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(569)
		if ((tmp3)){
			HX_STACK_LINE(569)
			::lime::AssetCache tmp5 = ::lime::Assets_obj::cache;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(569)
			::lime::AssetCache tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(569)
			::String tmp7 = id;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(569)
			::String tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(569)
			tmp4 = tmp6->audio->exists(tmp8);
		}
		else{
			HX_STACK_LINE(569)
			tmp4 = false;
		}
		HX_STACK_LINE(569)
		if ((tmp4)){
			HX_STACK_LINE(571)
			::lime::AssetCache tmp5 = ::lime::Assets_obj::cache;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(571)
			::String tmp6 = id;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(571)
			::lime::audio::AudioBuffer tmp7 = tmp5->audio->get(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(571)
			::lime::audio::AudioBuffer audio = tmp7;		HX_STACK_VAR(audio,"audio");
			HX_STACK_LINE(573)
			::lime::audio::AudioBuffer tmp8 = audio;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(573)
			bool tmp9 = ::lime::Assets_obj::isValidAudio(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(573)
			if ((tmp9)){
				HX_STACK_LINE(575)
				::lime::audio::AudioBuffer tmp10 = audio;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(575)
				promise->complete(tmp10);
				HX_STACK_LINE(576)
				::lime::app::Future tmp11 = promise->future;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(576)
				return tmp11;
			}
		}
		HX_STACK_LINE(582)
		int tmp5 = id.indexOf(HX_HCSTRING(":","\x3a","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(582)
		::String tmp6 = id.substring((int)0,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(582)
		::String libraryName = tmp6;		HX_STACK_VAR(libraryName,"libraryName");
		HX_STACK_LINE(583)
		int tmp7 = id.indexOf(HX_HCSTRING(":","\x3a","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(583)
		int tmp8 = (tmp7 + (int)1);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(583)
		::String tmp9 = id.substr(tmp8,null());		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(583)
		::String symbolName = tmp9;		HX_STACK_VAR(symbolName,"symbolName");
		HX_STACK_LINE(584)
		::String tmp10 = libraryName;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(584)
		::lime::AssetLibrary tmp11 = ::lime::Assets_obj::getLibrary(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(584)
		::lime::AssetLibrary library = tmp11;		HX_STACK_VAR(library,"library");
		HX_STACK_LINE(586)
		bool tmp12 = (library != null());		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(586)
		if ((tmp12)){
			HX_STACK_LINE(588)
			::String tmp13 = symbolName;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(588)
			bool tmp14 = library->exists(tmp13,HX_HCSTRING("SOUND","\xaf","\xc4","\xba","\xfe"));		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(588)
			if ((tmp14)){
				HX_STACK_LINE(590)
				::String tmp15 = symbolName;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(590)
				::lime::app::Future tmp16 = library->loadAudioBuffer(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(590)
				::lime::app::Future future = tmp16;		HX_STACK_VAR(future,"future");
				HX_STACK_LINE(592)
				bool tmp17 = useCache;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(592)
				bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(592)
				if ((tmp17)){
					HX_STACK_LINE(592)
					::lime::AssetCache tmp19 = ::lime::Assets_obj::cache;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(592)
					::lime::AssetCache tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(592)
					tmp18 = tmp20->enabled;
				}
				else{
					HX_STACK_LINE(592)
					tmp18 = false;
				}
				HX_STACK_LINE(592)
				if ((tmp18)){

					HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_4_1,::String,id)
					int __ArgCount() const { return 1; }
					Void run(::lime::audio::AudioBuffer audio){
						HX_STACK_FRAME("*","_Function_4_1",0x520333fa,"*._Function_4_1","lime/Assets.hx",594,0x48c77341)
						HX_STACK_ARG(audio,"audio")
						{
							HX_STACK_LINE(594)
							::lime::AssetCache tmp19 = ::lime::Assets_obj::cache;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(594)
							::String tmp20 = id;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(594)
							::lime::audio::AudioBuffer tmp21 = audio;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(594)
							tmp19->audio->set(tmp20,tmp21);
						}
						return null();
					}
					HX_END_LOCAL_FUNC1((void))

					HX_STACK_LINE(594)
					future->onComplete( Dynamic(new _Function_4_1(id)));
				}
				HX_STACK_LINE(598)
				::lime::app::Future tmp19 = future;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(598)
				promise->completeWith(tmp19);
			}
			else{
				HX_STACK_LINE(602)
				::String tmp15 = (HX_HCSTRING("[Assets] There is no audio asset with an ID of \"","\x65","\x50","\xb8","\x55") + id);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(602)
				::String tmp16 = (tmp15 + HX_HCSTRING("\"","\x22","\x00","\x00","\x00"));		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(602)
				promise->error(tmp16);
			}
		}
		else{
			HX_STACK_LINE(608)
			::String tmp13 = (HX_HCSTRING("[Assets] There is no asset library named \"","\xa0","\xb4","\x0a","\xcd") + libraryName);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(608)
			::String tmp14 = (tmp13 + HX_HCSTRING("\"","\x22","\x00","\x00","\x00"));		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(608)
			promise->error(tmp14);
		}
		HX_STACK_LINE(614)
		::lime::app::Future tmp13 = promise->future;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(614)
		return tmp13;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,loadAudioBuffer,return )

::lime::app::Future Assets_obj::loadBytes( ::String id){
	HX_STACK_FRAME("lime.Assets","loadBytes",0x714f4253,"lime.Assets.loadBytes","lime/Assets.hx",619,0x48c77341)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(621)
	::lime::Assets_obj::initialize();
	HX_STACK_LINE(623)
	::lime::app::Promise tmp = ::lime::app::Promise_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(623)
	::lime::app::Promise promise = tmp;		HX_STACK_VAR(promise,"promise");
	HX_STACK_LINE(627)
	int tmp1 = id.indexOf(HX_HCSTRING(":","\x3a","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(627)
	::String tmp2 = id.substring((int)0,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(627)
	::String libraryName = tmp2;		HX_STACK_VAR(libraryName,"libraryName");
	HX_STACK_LINE(628)
	int tmp3 = id.indexOf(HX_HCSTRING(":","\x3a","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(628)
	int tmp4 = (tmp3 + (int)1);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(628)
	::String tmp5 = id.substr(tmp4,null());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(628)
	::String symbolName = tmp5;		HX_STACK_VAR(symbolName,"symbolName");
	HX_STACK_LINE(629)
	::String tmp6 = libraryName;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(629)
	::lime::AssetLibrary tmp7 = ::lime::Assets_obj::getLibrary(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(629)
	::lime::AssetLibrary library = tmp7;		HX_STACK_VAR(library,"library");
	HX_STACK_LINE(631)
	bool tmp8 = (library != null());		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(631)
	if ((tmp8)){
		HX_STACK_LINE(633)
		::String tmp9 = symbolName;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(633)
		bool tmp10 = library->exists(tmp9,HX_HCSTRING("BINARY","\x01","\x68","\x8e","\x9f"));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(633)
		if ((tmp10)){
			HX_STACK_LINE(635)
			::String tmp11 = symbolName;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(635)
			::lime::app::Future tmp12 = library->loadBytes(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(635)
			promise->completeWith(tmp12);
		}
		else{
			HX_STACK_LINE(639)
			::String tmp11 = (HX_HCSTRING("[Assets] There is no String or Bytes asset with an ID of \"","\xec","\xff","\x7c","\x1c") + id);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(639)
			::String tmp12 = (tmp11 + HX_HCSTRING("\"","\x22","\x00","\x00","\x00"));		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(639)
			promise->error(tmp12);
		}
	}
	else{
		HX_STACK_LINE(645)
		::String tmp9 = (HX_HCSTRING("[Assets] There is no asset library named \"","\xa0","\xb4","\x0a","\xcd") + libraryName);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(645)
		::String tmp10 = (tmp9 + HX_HCSTRING("\"","\x22","\x00","\x00","\x00"));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(645)
		promise->error(tmp10);
	}
	HX_STACK_LINE(651)
	::lime::app::Future tmp9 = promise->future;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(651)
	return tmp9;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,loadBytes,return )

::lime::app::Future Assets_obj::loadFont( ::String id){
	HX_STACK_FRAME("lime.Assets","loadFont",0x7df4d8e7,"lime.Assets.loadFont","lime/Assets.hx",656,0x48c77341)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(658)
	::lime::Assets_obj::initialize();
	HX_STACK_LINE(660)
	::lime::app::Promise tmp = ::lime::app::Promise_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(660)
	::lime::app::Promise promise = tmp;		HX_STACK_VAR(promise,"promise");
	HX_STACK_LINE(664)
	int tmp1 = id.indexOf(HX_HCSTRING(":","\x3a","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(664)
	::String tmp2 = id.substring((int)0,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(664)
	::String libraryName = tmp2;		HX_STACK_VAR(libraryName,"libraryName");
	HX_STACK_LINE(665)
	int tmp3 = id.indexOf(HX_HCSTRING(":","\x3a","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(665)
	int tmp4 = (tmp3 + (int)1);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(665)
	::String tmp5 = id.substr(tmp4,null());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(665)
	::String symbolName = tmp5;		HX_STACK_VAR(symbolName,"symbolName");
	HX_STACK_LINE(666)
	::String tmp6 = libraryName;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(666)
	::lime::AssetLibrary tmp7 = ::lime::Assets_obj::getLibrary(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(666)
	::lime::AssetLibrary library = tmp7;		HX_STACK_VAR(library,"library");
	HX_STACK_LINE(668)
	bool tmp8 = (library != null());		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(668)
	if ((tmp8)){
		HX_STACK_LINE(670)
		::String tmp9 = symbolName;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(670)
		bool tmp10 = library->exists(tmp9,HX_HCSTRING("FONT","\xcf","\x25","\x81","\x2e"));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(670)
		if ((tmp10)){
			HX_STACK_LINE(672)
			::String tmp11 = symbolName;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(672)
			::lime::app::Future tmp12 = library->loadFont(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(672)
			promise->completeWith(tmp12);
		}
		else{
			HX_STACK_LINE(676)
			::String tmp11 = (HX_HCSTRING("[Assets] There is no Font asset with an ID of \"","\x8a","\x40","\xc3","\xf6") + id);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(676)
			::String tmp12 = (tmp11 + HX_HCSTRING("\"","\x22","\x00","\x00","\x00"));		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(676)
			promise->error(tmp12);
		}
	}
	else{
		HX_STACK_LINE(682)
		::String tmp9 = (HX_HCSTRING("[Assets] There is no asset library named \"","\xa0","\xb4","\x0a","\xcd") + libraryName);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(682)
		::String tmp10 = (tmp9 + HX_HCSTRING("\"","\x22","\x00","\x00","\x00"));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(682)
		promise->error(tmp10);
	}
	HX_STACK_LINE(688)
	::lime::app::Future tmp9 = promise->future;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(688)
	return tmp9;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,loadFont,return )

::lime::app::Future Assets_obj::loadImage( ::String id,hx::Null< bool >  __o_useCache){
bool useCache = __o_useCache.Default(true);
	HX_STACK_FRAME("lime.Assets","loadImage",0x71205943,"lime.Assets.loadImage","lime/Assets.hx",693,0x48c77341)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(useCache,"useCache")
{
		HX_STACK_LINE(695)
		::lime::Assets_obj::initialize();
		HX_STACK_LINE(697)
		::lime::app::Promise tmp = ::lime::app::Promise_obj::__new();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(697)
		::lime::app::Promise promise = tmp;		HX_STACK_VAR(promise,"promise");
		HX_STACK_LINE(701)
		bool tmp1 = useCache;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(701)
		bool tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(701)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(701)
		if ((tmp2)){
			HX_STACK_LINE(701)
			::lime::AssetCache tmp4 = ::lime::Assets_obj::cache;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(701)
			::lime::AssetCache tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(701)
			::lime::AssetCache tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(701)
			tmp3 = tmp6->enabled;
		}
		else{
			HX_STACK_LINE(701)
			tmp3 = false;
		}
		HX_STACK_LINE(701)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(701)
		if ((tmp3)){
			HX_STACK_LINE(701)
			::lime::AssetCache tmp5 = ::lime::Assets_obj::cache;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(701)
			::lime::AssetCache tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(701)
			::String tmp7 = id;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(701)
			::String tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(701)
			tmp4 = tmp6->image->exists(tmp8);
		}
		else{
			HX_STACK_LINE(701)
			tmp4 = false;
		}
		HX_STACK_LINE(701)
		if ((tmp4)){
			HX_STACK_LINE(703)
			::lime::AssetCache tmp5 = ::lime::Assets_obj::cache;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(703)
			::String tmp6 = id;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(703)
			::lime::graphics::Image tmp7 = tmp5->image->get(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(703)
			::lime::graphics::Image image = tmp7;		HX_STACK_VAR(image,"image");
			HX_STACK_LINE(705)
			::lime::graphics::Image tmp8 = image;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(705)
			bool tmp9 = ::lime::Assets_obj::isValidImage(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(705)
			if ((tmp9)){
				HX_STACK_LINE(707)
				::lime::graphics::Image tmp10 = image;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(707)
				promise->complete(tmp10);
				HX_STACK_LINE(708)
				::lime::app::Future tmp11 = promise->future;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(708)
				return tmp11;
			}
		}
		HX_STACK_LINE(714)
		int tmp5 = id.indexOf(HX_HCSTRING(":","\x3a","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(714)
		::String tmp6 = id.substring((int)0,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(714)
		::String libraryName = tmp6;		HX_STACK_VAR(libraryName,"libraryName");
		HX_STACK_LINE(715)
		int tmp7 = id.indexOf(HX_HCSTRING(":","\x3a","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(715)
		int tmp8 = (tmp7 + (int)1);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(715)
		::String tmp9 = id.substr(tmp8,null());		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(715)
		::String symbolName = tmp9;		HX_STACK_VAR(symbolName,"symbolName");
		HX_STACK_LINE(716)
		::String tmp10 = libraryName;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(716)
		::lime::AssetLibrary tmp11 = ::lime::Assets_obj::getLibrary(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(716)
		::lime::AssetLibrary library = tmp11;		HX_STACK_VAR(library,"library");
		HX_STACK_LINE(718)
		bool tmp12 = (library != null());		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(718)
		if ((tmp12)){
			HX_STACK_LINE(720)
			::String tmp13 = symbolName;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(720)
			bool tmp14 = library->exists(tmp13,HX_HCSTRING("IMAGE","\x3b","\x57","\x57","\x3b"));		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(720)
			if ((tmp14)){
				HX_STACK_LINE(722)
				::String tmp15 = symbolName;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(722)
				::lime::app::Future tmp16 = library->loadImage(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(722)
				::lime::app::Future future = tmp16;		HX_STACK_VAR(future,"future");
				HX_STACK_LINE(724)
				bool tmp17 = useCache;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(724)
				bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(724)
				if ((tmp17)){
					HX_STACK_LINE(724)
					::lime::AssetCache tmp19 = ::lime::Assets_obj::cache;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(724)
					::lime::AssetCache tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(724)
					tmp18 = tmp20->enabled;
				}
				else{
					HX_STACK_LINE(724)
					tmp18 = false;
				}
				HX_STACK_LINE(724)
				if ((tmp18)){

					HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_4_1,::String,id)
					int __ArgCount() const { return 1; }
					Void run(::lime::graphics::Image image){
						HX_STACK_FRAME("*","_Function_4_1",0x520333fa,"*._Function_4_1","lime/Assets.hx",726,0x48c77341)
						HX_STACK_ARG(image,"image")
						{
							HX_STACK_LINE(726)
							::lime::AssetCache tmp19 = ::lime::Assets_obj::cache;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(726)
							::String tmp20 = id;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(726)
							::lime::graphics::Image tmp21 = image;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(726)
							tmp19->image->set(tmp20,tmp21);
						}
						return null();
					}
					HX_END_LOCAL_FUNC1((void))

					HX_STACK_LINE(726)
					future->onComplete( Dynamic(new _Function_4_1(id)));
				}
				HX_STACK_LINE(730)
				::lime::app::Future tmp19 = future;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(730)
				promise->completeWith(tmp19);
			}
			else{
				HX_STACK_LINE(734)
				::String tmp15 = (HX_HCSTRING("[Assets] There is no Image asset with an ID of \"","\x8a","\x1a","\x98","\x70") + id);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(734)
				::String tmp16 = (tmp15 + HX_HCSTRING("\"","\x22","\x00","\x00","\x00"));		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(734)
				promise->error(tmp16);
			}
		}
		else{
			HX_STACK_LINE(740)
			::String tmp13 = (HX_HCSTRING("[Assets] There is no asset library named \"","\xa0","\xb4","\x0a","\xcd") + libraryName);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(740)
			::String tmp14 = (tmp13 + HX_HCSTRING("\"","\x22","\x00","\x00","\x00"));		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(740)
			promise->error(tmp14);
		}
		HX_STACK_LINE(746)
		::lime::app::Future tmp13 = promise->future;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(746)
		return tmp13;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,loadImage,return )

::lime::app::Future Assets_obj::loadLibrary( ::String name){
	HX_STACK_FRAME("lime.Assets","loadLibrary",0xbad7aae3,"lime.Assets.loadLibrary","lime/Assets.hx",751,0x48c77341)
	HX_STACK_ARG(name,"name")
	HX_STACK_LINE(753)
	::lime::Assets_obj::initialize();
	HX_STACK_LINE(755)
	::lime::app::Promise tmp = ::lime::app::Promise_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(755)
	::lime::app::Promise promise = tmp;		HX_STACK_VAR(promise,"promise");
	HX_STACK_LINE(759)
	::String tmp1 = (HX_HCSTRING("libraries/","\xf6","\xc5","\x4d","\xc0") + name);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(759)
	::String tmp2 = (tmp1 + HX_HCSTRING(".json","\x56","\xf1","\xd6","\xc2"));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(759)
	::String tmp3 = ::lime::Assets_obj::getText(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(759)
	::String data = tmp3;		HX_STACK_VAR(data,"data");
	HX_STACK_LINE(761)
	bool tmp4 = (data != null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(761)
	bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(761)
	if ((tmp4)){
		HX_STACK_LINE(761)
		tmp5 = (data != HX_HCSTRING("","\x00","\x00","\x00","\x00"));
	}
	else{
		HX_STACK_LINE(761)
		tmp5 = false;
	}
	HX_STACK_LINE(761)
	if ((tmp5)){
		HX_STACK_LINE(763)
		::haxe::format::JsonParser tmp6 = ::haxe::format::JsonParser_obj::__new(data);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(763)
		Dynamic tmp7 = tmp6->parseRec();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(763)
		Dynamic info = tmp7;		HX_STACK_VAR(info,"info");
		HX_STACK_LINE(764)
		::String tmp8 = info->__Field(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"), hx::paccDynamic );		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(764)
		::hx::Class tmp9 = ::Type_obj::resolveClass(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(764)
		::lime::AssetLibrary tmp10 = ::Type_obj::createInstance(tmp9,info->__Field(HX_HCSTRING("args","\x5d","\x8d","\x74","\x40"), hx::paccDynamic ));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(764)
		::lime::AssetLibrary library = tmp10;		HX_STACK_VAR(library,"library");
		HX_STACK_LINE(765)
		::haxe::ds::StringMap tmp11 = ::lime::Assets_obj::libraries;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(765)
		::String tmp12 = name;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(765)
		::lime::AssetLibrary tmp13 = library;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(765)
		tmp11->set(tmp12,tmp13);
		HX_STACK_LINE(766)
		::lime::app::Event_Void_Void tmp14 = ::lime::Assets_obj::onChange;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(766)
		Dynamic tmp15 = tmp14->dispatch_dyn();		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(766)
		library->onChange->add(tmp15,null(),null());
		HX_STACK_LINE(767)
		::lime::app::Future tmp16 = library->load();		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(767)
		promise->completeWith(tmp16);
	}
	else{
		HX_STACK_LINE(771)
		::String tmp6 = (HX_HCSTRING("[Assets] There is no asset library named \"","\xa0","\xb4","\x0a","\xcd") + name);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(771)
		::String tmp7 = (tmp6 + HX_HCSTRING("\"","\x22","\x00","\x00","\x00"));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(771)
		promise->error(tmp7);
	}
	HX_STACK_LINE(777)
	::lime::app::Future tmp6 = promise->future;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(777)
	return tmp6;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,loadLibrary,return )

::lime::app::Future Assets_obj::loadText( ::String id){
	HX_STACK_FRAME("lime.Assets","loadText",0x872e47c5,"lime.Assets.loadText","lime/Assets.hx",782,0x48c77341)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(784)
	::lime::Assets_obj::initialize();
	HX_STACK_LINE(786)
	::lime::app::Promise tmp = ::lime::app::Promise_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(786)
	::lime::app::Promise promise = tmp;		HX_STACK_VAR(promise,"promise");
	HX_STACK_LINE(790)
	int tmp1 = id.indexOf(HX_HCSTRING(":","\x3a","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(790)
	::String tmp2 = id.substring((int)0,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(790)
	::String libraryName = tmp2;		HX_STACK_VAR(libraryName,"libraryName");
	HX_STACK_LINE(791)
	int tmp3 = id.indexOf(HX_HCSTRING(":","\x3a","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(791)
	int tmp4 = (tmp3 + (int)1);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(791)
	::String tmp5 = id.substr(tmp4,null());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(791)
	::String symbolName = tmp5;		HX_STACK_VAR(symbolName,"symbolName");
	HX_STACK_LINE(792)
	::String tmp6 = libraryName;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(792)
	::lime::AssetLibrary tmp7 = ::lime::Assets_obj::getLibrary(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(792)
	::lime::AssetLibrary library = tmp7;		HX_STACK_VAR(library,"library");
	HX_STACK_LINE(794)
	bool tmp8 = (library != null());		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(794)
	if ((tmp8)){
		HX_STACK_LINE(796)
		::String tmp9 = symbolName;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(796)
		bool tmp10 = library->exists(tmp9,HX_HCSTRING("TEXT","\xad","\x94","\xba","\x37"));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(796)
		if ((tmp10)){
			HX_STACK_LINE(798)
			::String tmp11 = symbolName;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(798)
			::lime::app::Future tmp12 = library->loadText(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(798)
			promise->completeWith(tmp12);
		}
		else{
			HX_STACK_LINE(802)
			::String tmp11 = (HX_HCSTRING("[Assets] There is no String asset with an ID of \"","\x8c","\x62","\xe6","\x40") + id);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(802)
			::String tmp12 = (tmp11 + HX_HCSTRING("\"","\x22","\x00","\x00","\x00"));		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(802)
			promise->error(tmp12);
		}
	}
	else{
		HX_STACK_LINE(808)
		::String tmp9 = (HX_HCSTRING("[Assets] There is no asset library named \"","\xa0","\xb4","\x0a","\xcd") + libraryName);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(808)
		::String tmp10 = (tmp9 + HX_HCSTRING("\"","\x22","\x00","\x00","\x00"));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(808)
		promise->error(tmp10);
	}
	HX_STACK_LINE(814)
	::lime::app::Future tmp9 = promise->future;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(814)
	return tmp9;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,loadText,return )

Void Assets_obj::registerLibrary( ::String name,::lime::AssetLibrary library){
{
		HX_STACK_FRAME("lime.Assets","registerLibrary",0x7c289f46,"lime.Assets.registerLibrary","lime/Assets.hx",819,0x48c77341)
		HX_STACK_ARG(name,"name")
		HX_STACK_ARG(library,"library")
		HX_STACK_LINE(821)
		::haxe::ds::StringMap tmp = ::lime::Assets_obj::libraries;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(821)
		::String tmp1 = name;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(821)
		bool tmp2 = tmp->exists(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(821)
		if ((tmp2)){
			HX_STACK_LINE(823)
			::haxe::ds::StringMap tmp3 = ::lime::Assets_obj::libraries;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(823)
			::String tmp4 = name;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(823)
			::lime::AssetLibrary tmp5 = tmp3->get(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(823)
			::lime::AssetLibrary tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(823)
			::lime::AssetLibrary tmp7 = library;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(823)
			bool tmp8 = (tmp6 == tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(823)
			if ((tmp8)){
				HX_STACK_LINE(825)
				return null();
			}
			else{
				HX_STACK_LINE(829)
				::String tmp9 = name;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(829)
				::lime::Assets_obj::unloadLibrary(tmp9);
			}
		}
		HX_STACK_LINE(835)
		bool tmp3 = (library != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(835)
		if ((tmp3)){
			HX_STACK_LINE(837)
			Dynamic tmp4 = ::lime::Assets_obj::library_onChange_dyn();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(837)
			library->onChange->add(tmp4,null(),null());
		}
		HX_STACK_LINE(841)
		::haxe::ds::StringMap tmp4 = ::lime::Assets_obj::libraries;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(841)
		::String tmp5 = name;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(841)
		::lime::AssetLibrary tmp6 = library;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(841)
		tmp4->set(tmp5,tmp6);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,registerLibrary,(void))

Void Assets_obj::unloadLibrary( ::String name){
{
		HX_STACK_FRAME("lime.Assets","unloadLibrary",0x7620d8aa,"lime.Assets.unloadLibrary","lime/Assets.hx",846,0x48c77341)
		HX_STACK_ARG(name,"name")
		HX_STACK_LINE(848)
		::lime::Assets_obj::initialize();
		HX_STACK_LINE(852)
		::haxe::ds::StringMap tmp = ::lime::Assets_obj::libraries;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(852)
		::String tmp1 = name;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(852)
		::lime::AssetLibrary tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(852)
		::lime::AssetLibrary library = tmp2;		HX_STACK_VAR(library,"library");
		HX_STACK_LINE(854)
		bool tmp3 = (library != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(854)
		if ((tmp3)){
			HX_STACK_LINE(856)
			::lime::AssetCache tmp4 = ::lime::Assets_obj::cache;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(856)
			::String tmp5 = (name + HX_HCSTRING(":","\x3a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(856)
			tmp4->clear(tmp5);
			HX_STACK_LINE(857)
			Dynamic tmp6 = ::lime::Assets_obj::library_onChange_dyn();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(857)
			library->onChange->remove(tmp6);
			HX_STACK_LINE(858)
			library->unload();
		}
		HX_STACK_LINE(862)
		::haxe::ds::StringMap tmp4 = ::lime::Assets_obj::libraries;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(862)
		::String tmp5 = name;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(862)
		tmp4->remove(tmp5);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,unloadLibrary,(void))

Void Assets_obj::printError( ::String message){
{
		HX_STACK_FRAME("lime.Assets","printError",0xa32c62ad,"lime.Assets.printError","lime/Assets.hx",869,0x48c77341)
		HX_STACK_ARG(message,"message")
		HX_STACK_LINE(876)
		::String tmp = message;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(876)
		Dynamic tmp1 = hx::SourceInfo(HX_HCSTRING("Assets.hx","\xfb","\xcd","\xc6","\x67"),876,HX_HCSTRING("lime.Assets","\xdc","\x38","\x84","\x97"),HX_HCSTRING("printError","\x5b","\x20","\xbc","\xcb"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(876)
		::haxe::Log_obj::trace(tmp,tmp1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,printError,(void))

Void Assets_obj::library_onChange( ){
{
		HX_STACK_FRAME("lime.Assets","library_onChange",0xae01ecc5,"lime.Assets.library_onChange","lime/Assets.hx",887,0x48c77341)
		HX_STACK_LINE(889)
		::lime::AssetCache tmp = ::lime::Assets_obj::cache;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(889)
		tmp->clear(null());
		HX_STACK_LINE(890)
		::lime::app::Event_Void_Void tmp1 = ::lime::Assets_obj::onChange;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(890)
		tmp1->dispatch();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Assets_obj,library_onChange,(void))


Assets_obj::Assets_obj()
{
}

bool Assets_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"list") ) { outValue = list_dyn(); return true;  }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"cache") ) { outValue = cache; return true;  }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"exists") ) { outValue = exists_dyn(); return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getFont") ) { outValue = getFont_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getPath") ) { outValue = getPath_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getText") ) { outValue = getText_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"isLocal") ) { outValue = isLocal_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"onChange") ) { outValue = onChange; return true;  }
		if (HX_FIELD_EQ(inName,"getBytes") ) { outValue = getBytes_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getImage") ) { outValue = getImage_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"loadFont") ) { outValue = loadFont_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"loadText") ) { outValue = loadText_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"libraries") ) { outValue = libraries; return true;  }
		if (HX_FIELD_EQ(inName,"loadBytes") ) { outValue = loadBytes_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"loadImage") ) { outValue = loadImage_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"getLibrary") ) { outValue = getLibrary_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"initialize") ) { outValue = initialize_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"printError") ) { outValue = printError_dyn(); return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"initialized") ) { outValue = initialized; return true;  }
		if (HX_FIELD_EQ(inName,"loadLibrary") ) { outValue = loadLibrary_dyn(); return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"isValidAudio") ) { outValue = isValidAudio_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"isValidImage") ) { outValue = isValidImage_dyn(); return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"unloadLibrary") ) { outValue = unloadLibrary_dyn(); return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"getAudioBuffer") ) { outValue = getAudioBuffer_dyn(); return true;  }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"loadAudioBuffer") ) { outValue = loadAudioBuffer_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"registerLibrary") ) { outValue = registerLibrary_dyn(); return true;  }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"library_onChange") ) { outValue = library_onChange_dyn(); return true;  }
	}
	return false;
}

bool Assets_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"cache") ) { cache=ioValue.Cast< ::lime::AssetCache >(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"onChange") ) { onChange=ioValue.Cast< ::lime::app::Event_Void_Void >(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"libraries") ) { libraries=ioValue.Cast< ::haxe::ds::StringMap >(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"initialized") ) { initialized=ioValue.Cast< bool >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::lime::AssetCache*/ ,(void *) &Assets_obj::cache,HX_HCSTRING("cache","\x42","\x9a","\x14","\x41")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(void *) &Assets_obj::libraries,HX_HCSTRING("libraries","\x19","\x50","\xf8","\x18")},
	{hx::fsObject /*::lime::app::Event_Void_Void*/ ,(void *) &Assets_obj::onChange,HX_HCSTRING("onChange","\xef","\x87","\x1f","\x97")},
	{hx::fsBool,(void *) &Assets_obj::initialized,HX_HCSTRING("initialized","\x14","\xf5","\x0f","\x37")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Assets_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Assets_obj::cache,"cache");
	HX_MARK_MEMBER_NAME(Assets_obj::libraries,"libraries");
	HX_MARK_MEMBER_NAME(Assets_obj::onChange,"onChange");
	HX_MARK_MEMBER_NAME(Assets_obj::initialized,"initialized");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Assets_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Assets_obj::cache,"cache");
	HX_VISIT_MEMBER_NAME(Assets_obj::libraries,"libraries");
	HX_VISIT_MEMBER_NAME(Assets_obj::onChange,"onChange");
	HX_VISIT_MEMBER_NAME(Assets_obj::initialized,"initialized");
};

#endif

hx::Class Assets_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("cache","\x42","\x9a","\x14","\x41"),
	HX_HCSTRING("libraries","\x19","\x50","\xf8","\x18"),
	HX_HCSTRING("onChange","\xef","\x87","\x1f","\x97"),
	HX_HCSTRING("initialized","\x14","\xf5","\x0f","\x37"),
	HX_HCSTRING("exists","\xdc","\x1d","\xe0","\xbf"),
	HX_HCSTRING("getAudioBuffer","\x80","\x41","\xe3","\x26"),
	HX_HCSTRING("getBytes","\xf5","\x17","\x6f","\x1d"),
	HX_HCSTRING("getFont","\x85","\x0d","\x43","\x16"),
	HX_HCSTRING("getImage","\xe5","\x2e","\x40","\x1d"),
	HX_HCSTRING("getLibrary","\x05","\xad","\xd1","\x8e"),
	HX_HCSTRING("getPath","\x5b","\x95","\xd4","\x1c"),
	HX_HCSTRING("getText","\x63","\x7c","\x7c","\x1f"),
	HX_HCSTRING("initialize","\x50","\x31","\xbb","\xec"),
	HX_HCSTRING("isLocal","\x21","\x6d","\x76","\x15"),
	HX_HCSTRING("isValidAudio","\xc4","\x0a","\xdf","\x47"),
	HX_HCSTRING("isValidImage","\x49","\xb1","\xc7","\xdd"),
	HX_HCSTRING("list","\x5e","\x1c","\xb3","\x47"),
	HX_HCSTRING("loadAudioBuffer","\xf0","\x71","\x7c","\xe3"),
	HX_HCSTRING("loadBytes","\x65","\x54","\xcf","\xd8"),
	HX_HCSTRING("loadFont","\x15","\x2f","\x60","\xb4"),
	HX_HCSTRING("loadImage","\x55","\x6b","\xa0","\xd8"),
	HX_HCSTRING("loadLibrary","\x75","\xe5","\x0d","\x10"),
	HX_HCSTRING("loadText","\xf3","\x9d","\x99","\xbd"),
	HX_HCSTRING("registerLibrary","\xd8","\x8a","\x84","\xf2"),
	HX_HCSTRING("unloadLibrary","\xbc","\x5b","\x48","\x31"),
	HX_HCSTRING("printError","\x5b","\x20","\xbc","\xcb"),
	HX_HCSTRING("library_onChange","\xf3","\x20","\x14","\xc8"),
	::String(null()) };

void Assets_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.Assets","\xdc","\x38","\x84","\x97");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Assets_obj::__GetStatic;
	__mClass->mSetStaticField = &Assets_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Assets_obj >;
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

void Assets_obj::__boot()
{
	cache= ::lime::AssetCache_obj::__new();
struct _Function_0_1{
	inline static ::haxe::ds::StringMap Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","lime/Assets.hx",42,0x48c77341)
		{
			HX_STACK_LINE(42)
			::haxe::ds::StringMap tmp = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(42)
			::haxe::ds::StringMap tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(42)
			return tmp1;
		}
		return null();
	}
};
	libraries= _Function_0_1::Block();
	onChange= ::lime::app::Event_Void_Void_obj::__new();
	initialized= false;
}

} // end namespace lime
