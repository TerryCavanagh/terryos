#include <hxcpp.h>

#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
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
#ifndef INCLUDED_openfl_AssetCache
#include <openfl/AssetCache.h>
#endif
#ifndef INCLUDED_openfl_AssetLibrary
#include <openfl/AssetLibrary.h>
#endif
#ifndef INCLUDED_openfl_Assets
#include <openfl/Assets.h>
#endif
#ifndef INCLUDED_openfl_IAssetCache
#include <openfl/IAssetCache.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
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
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_media_Sound
#include <openfl/media/Sound.h>
#endif
#ifndef INCLUDED_openfl_text_Font
#include <openfl/text/Font.h>
#endif
#ifndef INCLUDED_openfl_utils_ByteArrayData
#include <openfl/utils/ByteArrayData.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataInput
#include <openfl/utils/IDataInput.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataOutput
#include <openfl/utils/IDataOutput.h>
#endif
#ifndef INCLUDED_openfl_utils__ByteArray_ByteArray_Impl_
#include <openfl/utils/_ByteArray/ByteArray_Impl_.h>
#endif
namespace openfl{

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

::openfl::IAssetCache Assets_obj::cache;

::openfl::events::EventDispatcher Assets_obj::dispatcher;

Void Assets_obj::addEventListener( ::String type,Dynamic listener,hx::Null< bool >  __o_useCapture,hx::Null< int >  __o_priority,hx::Null< bool >  __o_useWeakReference){
bool useCapture = __o_useCapture.Default(false);
int priority = __o_priority.Default(0);
bool useWeakReference = __o_useWeakReference.Default(false);
	HX_STACK_FRAME("openfl.Assets","addEventListener",0x08307d1a,"openfl.Assets.addEventListener","openfl/Assets.hx",54,0x989d477c)
	HX_STACK_ARG(type,"type")
	HX_STACK_ARG(listener,"listener")
	HX_STACK_ARG(useCapture,"useCapture")
	HX_STACK_ARG(priority,"priority")
	HX_STACK_ARG(useWeakReference,"useWeakReference")
{
		HX_STACK_LINE(56)
		::lime::app::Event_Void_Void tmp = ::lime::Assets_obj::onChange;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(56)
		Dynamic tmp1 = ::openfl::Assets_obj::LimeAssets_onChange_dyn();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(56)
		bool tmp2 = tmp->has(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(56)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(56)
		if ((tmp3)){
			HX_STACK_LINE(58)
			::lime::app::Event_Void_Void tmp4 = ::lime::Assets_obj::onChange;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(58)
			Dynamic tmp5 = ::openfl::Assets_obj::LimeAssets_onChange_dyn();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(58)
			tmp4->add(tmp5,null(),null());
		}
		HX_STACK_LINE(62)
		::openfl::events::EventDispatcher tmp4 = ::openfl::Assets_obj::dispatcher;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(62)
		::String tmp5 = type;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(62)
		Dynamic tmp6 = listener;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(62)
		bool tmp7 = useCapture;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(62)
		int tmp8 = priority;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(62)
		bool tmp9 = useWeakReference;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(62)
		tmp4->addEventListener(tmp5,tmp6,tmp7,tmp8,tmp9);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(Assets_obj,addEventListener,(void))

bool Assets_obj::dispatchEvent( ::openfl::events::Event event){
	HX_STACK_FRAME("openfl.Assets","dispatchEvent",0xff6e3393,"openfl.Assets.dispatchEvent","openfl/Assets.hx",67,0x989d477c)
	HX_STACK_ARG(event,"event")
	HX_STACK_LINE(69)
	::openfl::events::EventDispatcher tmp = ::openfl::Assets_obj::dispatcher;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(69)
	::openfl::events::Event tmp1 = event;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(69)
	bool tmp2 = tmp->dispatchEvent(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(69)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,dispatchEvent,return )

bool Assets_obj::exists( ::String id,::String type){
	HX_STACK_FRAME("openfl.Assets","exists",0xd3fc5ce9,"openfl.Assets.exists","openfl/Assets.hx",79,0x989d477c)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(type,"type")
	HX_STACK_LINE(81)
	::String tmp = id;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(81)
	::String tmp1 = type;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(81)
	bool tmp2 = ::lime::Assets_obj::exists(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(81)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,exists,return )

::openfl::display::BitmapData Assets_obj::getBitmapData( ::String id,hx::Null< bool >  __o_useCache){
bool useCache = __o_useCache.Default(true);
	HX_STACK_FRAME("openfl.Assets","getBitmapData",0xc93c7e82,"openfl.Assets.getBitmapData","openfl/Assets.hx",93,0x989d477c)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(useCache,"useCache")
{
		HX_STACK_LINE(97)
		bool tmp = useCache;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(97)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(97)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(97)
		if ((tmp1)){
			HX_STACK_LINE(97)
			::openfl::IAssetCache tmp3 = ::openfl::Assets_obj::cache;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(97)
			::openfl::IAssetCache tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(97)
			::openfl::IAssetCache tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(97)
			tmp2 = tmp5->get_enabled();
		}
		else{
			HX_STACK_LINE(97)
			tmp2 = false;
		}
		HX_STACK_LINE(97)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(97)
		if ((tmp2)){
			HX_STACK_LINE(97)
			::openfl::IAssetCache tmp4 = ::openfl::Assets_obj::cache;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(97)
			::openfl::IAssetCache tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(97)
			::String tmp6 = id;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(97)
			::String tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(97)
			tmp3 = tmp5->hasBitmapData(tmp7);
		}
		else{
			HX_STACK_LINE(97)
			tmp3 = false;
		}
		HX_STACK_LINE(97)
		if ((tmp3)){
			HX_STACK_LINE(99)
			::openfl::IAssetCache tmp4 = ::openfl::Assets_obj::cache;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(99)
			::String tmp5 = id;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(99)
			::openfl::display::BitmapData tmp6 = tmp4->getBitmapData(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(99)
			::openfl::display::BitmapData bitmapData = tmp6;		HX_STACK_VAR(bitmapData,"bitmapData");
			HX_STACK_LINE(101)
			::openfl::display::BitmapData tmp7 = bitmapData;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(101)
			bool tmp8 = ::openfl::Assets_obj::isValidBitmapData(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(101)
			if ((tmp8)){
				HX_STACK_LINE(103)
				::openfl::display::BitmapData tmp9 = bitmapData;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(103)
				return tmp9;
			}
		}
		HX_STACK_LINE(109)
		::String tmp4 = id;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(109)
		::lime::graphics::Image tmp5 = ::lime::Assets_obj::getImage(tmp4,false);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(109)
		::lime::graphics::Image image = tmp5;		HX_STACK_VAR(image,"image");
		HX_STACK_LINE(111)
		bool tmp6 = (image != null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(111)
		if ((tmp6)){
			HX_STACK_LINE(116)
			::lime::graphics::Image tmp7 = image;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(116)
			::openfl::display::BitmapData tmp8 = ::openfl::display::BitmapData_obj::fromImage(tmp7,null());		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(116)
			::openfl::display::BitmapData bitmapData = tmp8;		HX_STACK_VAR(bitmapData,"bitmapData");
			HX_STACK_LINE(119)
			bool tmp9 = useCache;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(119)
			bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(119)
			if ((tmp9)){
				HX_STACK_LINE(119)
				::openfl::IAssetCache tmp11 = ::openfl::Assets_obj::cache;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(119)
				::openfl::IAssetCache tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(119)
				tmp10 = tmp12->get_enabled();
			}
			else{
				HX_STACK_LINE(119)
				tmp10 = false;
			}
			HX_STACK_LINE(119)
			if ((tmp10)){
				HX_STACK_LINE(121)
				::openfl::IAssetCache tmp11 = ::openfl::Assets_obj::cache;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(121)
				::String tmp12 = id;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(121)
				::openfl::display::BitmapData tmp13 = bitmapData;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(121)
				tmp11->setBitmapData(tmp12,tmp13);
			}
			HX_STACK_LINE(125)
			::openfl::display::BitmapData tmp11 = bitmapData;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(125)
			return tmp11;
		}
		HX_STACK_LINE(131)
		return null();
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,getBitmapData,return )

::openfl::utils::ByteArrayData Assets_obj::getBytes( ::String id){
	HX_STACK_FRAME("openfl.Assets","getBytes",0xa062f442,"openfl.Assets.getBytes","openfl/Assets.hx",142,0x989d477c)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(144)
	::String tmp = id;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(144)
	::lime::utils::Bytes tmp1 = ::lime::Assets_obj::getBytes(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(144)
	::openfl::utils::ByteArrayData tmp2 = ::openfl::utils::_ByteArray::ByteArray_Impl__obj::fromArrayBuffer(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(144)
	return tmp2;
	HX_STACK_LINE(144)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,getBytes,return )

::openfl::text::Font Assets_obj::getFont( ::String id,hx::Null< bool >  __o_useCache){
bool useCache = __o_useCache.Default(true);
	HX_STACK_FRAME("openfl.Assets","getFont",0x9addf9d8,"openfl.Assets.getFont","openfl/Assets.hx",156,0x989d477c)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(useCache,"useCache")
{
		HX_STACK_LINE(160)
		bool tmp = useCache;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(160)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(160)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(160)
		if ((tmp1)){
			HX_STACK_LINE(160)
			::openfl::IAssetCache tmp3 = ::openfl::Assets_obj::cache;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(160)
			::openfl::IAssetCache tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(160)
			::openfl::IAssetCache tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(160)
			tmp2 = tmp5->get_enabled();
		}
		else{
			HX_STACK_LINE(160)
			tmp2 = false;
		}
		HX_STACK_LINE(160)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(160)
		if ((tmp2)){
			HX_STACK_LINE(160)
			::openfl::IAssetCache tmp4 = ::openfl::Assets_obj::cache;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(160)
			::openfl::IAssetCache tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(160)
			::String tmp6 = id;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(160)
			::String tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(160)
			tmp3 = tmp5->hasFont(tmp7);
		}
		else{
			HX_STACK_LINE(160)
			tmp3 = false;
		}
		HX_STACK_LINE(160)
		if ((tmp3)){
			HX_STACK_LINE(162)
			::openfl::IAssetCache tmp4 = ::openfl::Assets_obj::cache;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(162)
			::String tmp5 = id;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(162)
			::openfl::text::Font tmp6 = tmp4->getFont(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(162)
			return tmp6;
		}
		HX_STACK_LINE(166)
		::String tmp4 = id;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(166)
		::lime::text::Font tmp5 = ::lime::Assets_obj::getFont(tmp4,false);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(166)
		::lime::text::Font limeFont = tmp5;		HX_STACK_VAR(limeFont,"limeFont");
		HX_STACK_LINE(168)
		bool tmp6 = (limeFont != null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(168)
		if ((tmp6)){
			HX_STACK_LINE(173)
			::lime::text::Font tmp7 = limeFont;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(173)
			::openfl::text::Font tmp8 = ::openfl::text::Font_obj::__fromLimeFont(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(173)
			::openfl::text::Font font = tmp8;		HX_STACK_VAR(font,"font");
			HX_STACK_LINE(176)
			bool tmp9 = useCache;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(176)
			bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(176)
			if ((tmp9)){
				HX_STACK_LINE(176)
				::openfl::IAssetCache tmp11 = ::openfl::Assets_obj::cache;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(176)
				::openfl::IAssetCache tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(176)
				tmp10 = tmp12->get_enabled();
			}
			else{
				HX_STACK_LINE(176)
				tmp10 = false;
			}
			HX_STACK_LINE(176)
			if ((tmp10)){
				HX_STACK_LINE(178)
				::openfl::IAssetCache tmp11 = ::openfl::Assets_obj::cache;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(178)
				::String tmp12 = id;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(178)
				::openfl::text::Font tmp13 = font;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(178)
				tmp11->setFont(tmp12,tmp13);
			}
			HX_STACK_LINE(182)
			::openfl::text::Font tmp11 = font;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(182)
			return tmp11;
		}
		HX_STACK_LINE(188)
		::openfl::text::Font tmp7 = ::openfl::text::Font_obj::__new(null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(188)
		return tmp7;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,getFont,return )

::lime::AssetLibrary Assets_obj::getLibrary( ::String name){
	HX_STACK_FRAME("openfl.Assets","getLibrary",0x9baef692,"openfl.Assets.getLibrary","openfl/Assets.hx",193,0x989d477c)
	HX_STACK_ARG(name,"name")
	HX_STACK_LINE(195)
	::String tmp = name;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(195)
	::lime::AssetLibrary tmp1 = ::lime::Assets_obj::getLibrary(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(195)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,getLibrary,return )

::openfl::display::MovieClip Assets_obj::getMovieClip( ::String id){
	HX_STACK_FRAME("openfl.Assets","getMovieClip",0x1d5e25f7,"openfl.Assets.getMovieClip","openfl/Assets.hx",206,0x989d477c)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(210)
	int tmp = id.indexOf(HX_HCSTRING(":","\x3a","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(210)
	::String tmp1 = id.substring((int)0,tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(210)
	::String libraryName = tmp1;		HX_STACK_VAR(libraryName,"libraryName");
	HX_STACK_LINE(211)
	int tmp2 = id.indexOf(HX_HCSTRING(":","\x3a","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(211)
	int tmp3 = (tmp2 + (int)1);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(211)
	::String tmp4 = id.substr(tmp3,null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(211)
	::String symbolName = tmp4;		HX_STACK_VAR(symbolName,"symbolName");
	HX_STACK_LINE(212)
	::String tmp5 = libraryName;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(212)
	::lime::AssetLibrary tmp6 = ::openfl::Assets_obj::getLibrary(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(212)
	::openfl::AssetLibrary library = ((::openfl::AssetLibrary)(tmp6));		HX_STACK_VAR(library,"library");
	HX_STACK_LINE(214)
	bool tmp7 = (library != null());		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(214)
	if ((tmp7)){
		HX_STACK_LINE(216)
		::String tmp8 = symbolName;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(216)
		bool tmp9 = library->exists(tmp8,HX_HCSTRING("MOVIE_CLIP","\x1f","\xe1","\xaa","\x77"));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(216)
		if ((tmp9)){
			HX_STACK_LINE(218)
			::String tmp10 = symbolName;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(218)
			bool tmp11 = library->isLocal(tmp10,HX_HCSTRING("MOVIE_CLIP","\x1f","\xe1","\xaa","\x77"));		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(218)
			if ((tmp11)){
				HX_STACK_LINE(220)
				::String tmp12 = symbolName;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(220)
				::openfl::display::MovieClip tmp13 = library->getMovieClip(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(220)
				return tmp13;
			}
			else{
				HX_STACK_LINE(224)
				::String tmp12 = (HX_HCSTRING("[openfl.Assets] MovieClip asset \"","\x09","\x87","\xab","\x4e") + id);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(224)
				::String tmp13 = (tmp12 + HX_HCSTRING("\" exists, but only asynchronously","\xdc","\xca","\xf2","\xdd"));		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(224)
				Dynamic tmp14 = hx::SourceInfo(HX_HCSTRING("Assets.hx","\xfb","\xcd","\xc6","\x67"),875,HX_HCSTRING("openfl.Assets","\xc1","\x41","\xe1","\xa0"),HX_HCSTRING("printError","\x5b","\x20","\xbc","\xcb"));		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(224)
				::haxe::Log_obj::trace(tmp13,tmp14);
			}
		}
		else{
			HX_STACK_LINE(230)
			::String tmp10 = (HX_HCSTRING("[openfl.Assets] There is no MovieClip asset with an ID of \"","\x47","\x50","\x6c","\x1a") + id);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(230)
			::String tmp11 = (tmp10 + HX_HCSTRING("\"","\x22","\x00","\x00","\x00"));		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(230)
			Dynamic tmp12 = hx::SourceInfo(HX_HCSTRING("Assets.hx","\xfb","\xcd","\xc6","\x67"),875,HX_HCSTRING("openfl.Assets","\xc1","\x41","\xe1","\xa0"),HX_HCSTRING("printError","\x5b","\x20","\xbc","\xcb"));		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(230)
			::haxe::Log_obj::trace(tmp11,tmp12);
		}
	}
	else{
		HX_STACK_LINE(236)
		::String tmp8 = (HX_HCSTRING("[openfl.Assets] There is no asset library named \"","\x58","\xa0","\x33","\x5b") + libraryName);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(236)
		::String tmp9 = (tmp8 + HX_HCSTRING("\"","\x22","\x00","\x00","\x00"));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(236)
		Dynamic tmp10 = hx::SourceInfo(HX_HCSTRING("Assets.hx","\xfb","\xcd","\xc6","\x67"),875,HX_HCSTRING("openfl.Assets","\xc1","\x41","\xe1","\xa0"),HX_HCSTRING("printError","\x5b","\x20","\xbc","\xcb"));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(236)
		::haxe::Log_obj::trace(tmp9,tmp10);
	}
	HX_STACK_LINE(242)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,getMovieClip,return )

::openfl::media::Sound Assets_obj::getMusic( ::String id,hx::Null< bool >  __o_useCache){
bool useCache = __o_useCache.Default(true);
	HX_STACK_FRAME("openfl.Assets","getMusic",0xf325bc7c,"openfl.Assets.getMusic","openfl/Assets.hx",254,0x989d477c)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(useCache,"useCache")
{
		HX_STACK_LINE(261)
		::String tmp = id;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(261)
		bool tmp1 = useCache;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(261)
		::lime::audio::AudioBuffer tmp2 = ::lime::Assets_obj::getAudioBuffer(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(261)
		::openfl::media::Sound tmp3 = ::openfl::media::Sound_obj::fromAudioBuffer(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(261)
		return tmp3;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,getMusic,return )

::String Assets_obj::getPath( ::String id){
	HX_STACK_FRAME("openfl.Assets","getPath",0xa16f81ae,"openfl.Assets.getPath","openfl/Assets.hx",284,0x989d477c)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(286)
	::String tmp = id;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(286)
	::String tmp1 = ::lime::Assets_obj::getPath(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(286)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,getPath,return )

::openfl::media::Sound Assets_obj::getSound( ::String id,hx::Null< bool >  __o_useCache){
bool useCache = __o_useCache.Default(true);
	HX_STACK_FRAME("openfl.Assets","getSound",0x639778a6,"openfl.Assets.getSound","openfl/Assets.hx",298,0x989d477c)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(useCache,"useCache")
{
		HX_STACK_LINE(302)
		bool tmp = useCache;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(302)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(302)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(302)
		if ((tmp1)){
			HX_STACK_LINE(302)
			::openfl::IAssetCache tmp3 = ::openfl::Assets_obj::cache;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(302)
			::openfl::IAssetCache tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(302)
			::openfl::IAssetCache tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(302)
			tmp2 = tmp5->get_enabled();
		}
		else{
			HX_STACK_LINE(302)
			tmp2 = false;
		}
		HX_STACK_LINE(302)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(302)
		if ((tmp2)){
			HX_STACK_LINE(302)
			::openfl::IAssetCache tmp4 = ::openfl::Assets_obj::cache;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(302)
			::openfl::IAssetCache tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(302)
			::String tmp6 = id;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(302)
			::String tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(302)
			tmp3 = tmp5->hasSound(tmp7);
		}
		else{
			HX_STACK_LINE(302)
			tmp3 = false;
		}
		HX_STACK_LINE(302)
		if ((tmp3)){
			HX_STACK_LINE(304)
			::openfl::IAssetCache tmp4 = ::openfl::Assets_obj::cache;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(304)
			::String tmp5 = id;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(304)
			::openfl::media::Sound tmp6 = tmp4->getSound(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(304)
			::openfl::media::Sound sound = tmp6;		HX_STACK_VAR(sound,"sound");
			HX_STACK_LINE(306)
			::openfl::media::Sound tmp7 = sound;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(306)
			bool tmp8 = ::openfl::Assets_obj::isValidSound(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(306)
			if ((tmp8)){
				HX_STACK_LINE(308)
				::openfl::media::Sound tmp9 = sound;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(308)
				return tmp9;
			}
		}
		HX_STACK_LINE(315)
		::String tmp4 = id;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(315)
		::lime::audio::AudioBuffer tmp5 = ::lime::Assets_obj::getAudioBuffer(tmp4,false);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(315)
		::lime::audio::AudioBuffer buffer = tmp5;		HX_STACK_VAR(buffer,"buffer");
		HX_STACK_LINE(317)
		bool tmp6 = (buffer != null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(317)
		if ((tmp6)){
			HX_STACK_LINE(322)
			::lime::audio::AudioBuffer tmp7 = buffer;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(322)
			::openfl::media::Sound tmp8 = ::openfl::media::Sound_obj::fromAudioBuffer(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(322)
			::openfl::media::Sound sound = tmp8;		HX_STACK_VAR(sound,"sound");
			HX_STACK_LINE(325)
			bool tmp9 = useCache;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(325)
			bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(325)
			if ((tmp9)){
				HX_STACK_LINE(325)
				::openfl::IAssetCache tmp11 = ::openfl::Assets_obj::cache;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(325)
				::openfl::IAssetCache tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(325)
				tmp10 = tmp12->get_enabled();
			}
			else{
				HX_STACK_LINE(325)
				tmp10 = false;
			}
			HX_STACK_LINE(325)
			if ((tmp10)){
				HX_STACK_LINE(327)
				::openfl::IAssetCache tmp11 = ::openfl::Assets_obj::cache;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(327)
				::String tmp12 = id;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(327)
				::openfl::media::Sound tmp13 = sound;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(327)
				tmp11->setSound(tmp12,tmp13);
			}
			HX_STACK_LINE(331)
			::openfl::media::Sound tmp11 = sound;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(331)
			return tmp11;
		}
		HX_STACK_LINE(346)
		return null();
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,getSound,return )

::String Assets_obj::getText( ::String id){
	HX_STACK_FRAME("openfl.Assets","getText",0xa41768b6,"openfl.Assets.getText","openfl/Assets.hx",357,0x989d477c)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(359)
	::String tmp = id;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(359)
	::String tmp1 = ::lime::Assets_obj::getText(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(359)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,getText,return )

bool Assets_obj::hasEventListener( ::String type){
	HX_STACK_FRAME("openfl.Assets","hasEventListener",0x23b6a041,"openfl.Assets.hasEventListener","openfl/Assets.hx",364,0x989d477c)
	HX_STACK_ARG(type,"type")
	HX_STACK_LINE(366)
	::openfl::events::EventDispatcher tmp = ::openfl::Assets_obj::dispatcher;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(366)
	::String tmp1 = type;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(366)
	bool tmp2 = tmp->hasEventListener(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(366)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,hasEventListener,return )

bool Assets_obj::isLocal( ::String id,::String type,hx::Null< bool >  __o_useCache){
bool useCache = __o_useCache.Default(true);
	HX_STACK_FRAME("openfl.Assets","isLocal",0x9a115974,"openfl.Assets.isLocal","openfl/Assets.hx",378,0x989d477c)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(type,"type")
	HX_STACK_ARG(useCache,"useCache")
{
		HX_STACK_LINE(382)
		bool tmp = useCache;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(382)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(382)
		if ((tmp)){
			HX_STACK_LINE(382)
			::openfl::IAssetCache tmp2 = ::openfl::Assets_obj::cache;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(382)
			::openfl::IAssetCache tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(382)
			tmp1 = tmp3->get_enabled();
		}
		else{
			HX_STACK_LINE(382)
			tmp1 = false;
		}
		HX_STACK_LINE(382)
		if ((tmp1)){
			HX_STACK_LINE(384)
			bool tmp2 = (type == HX_HCSTRING("IMAGE","\x3b","\x57","\x57","\x3b"));		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(384)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(384)
			bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(384)
			if ((tmp3)){
				HX_STACK_LINE(384)
				tmp4 = (type == null());
			}
			else{
				HX_STACK_LINE(384)
				tmp4 = true;
			}
			HX_STACK_LINE(384)
			if ((tmp4)){
				HX_STACK_LINE(386)
				::openfl::IAssetCache tmp5 = ::openfl::Assets_obj::cache;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(386)
				::String tmp6 = id;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(386)
				bool tmp7 = tmp5->hasBitmapData(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(386)
				if ((tmp7)){
					HX_STACK_LINE(386)
					return true;
				}
			}
			HX_STACK_LINE(390)
			bool tmp5 = (type == HX_HCSTRING("FONT","\xcf","\x25","\x81","\x2e"));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(390)
			bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(390)
			bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(390)
			if ((tmp6)){
				HX_STACK_LINE(390)
				tmp7 = (type == null());
			}
			else{
				HX_STACK_LINE(390)
				tmp7 = true;
			}
			HX_STACK_LINE(390)
			if ((tmp7)){
				HX_STACK_LINE(392)
				::openfl::IAssetCache tmp8 = ::openfl::Assets_obj::cache;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(392)
				::String tmp9 = id;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(392)
				bool tmp10 = tmp8->hasFont(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(392)
				if ((tmp10)){
					HX_STACK_LINE(392)
					return true;
				}
			}
			HX_STACK_LINE(396)
			bool tmp8 = (type == HX_HCSTRING("SOUND","\xaf","\xc4","\xba","\xfe"));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(396)
			bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(396)
			bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(396)
			bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(396)
			if ((tmp10)){
				HX_STACK_LINE(396)
				tmp11 = (type == HX_HCSTRING("MUSIC","\x85","\x08","\x49","\x8e"));
			}
			else{
				HX_STACK_LINE(396)
				tmp11 = true;
			}
			HX_STACK_LINE(396)
			bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(396)
			bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(396)
			if ((tmp12)){
				HX_STACK_LINE(396)
				tmp13 = (type == null());
			}
			else{
				HX_STACK_LINE(396)
				tmp13 = true;
			}
			HX_STACK_LINE(396)
			if ((tmp13)){
				HX_STACK_LINE(398)
				::openfl::IAssetCache tmp14 = ::openfl::Assets_obj::cache;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(398)
				::String tmp15 = id;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(398)
				bool tmp16 = tmp14->hasSound(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(398)
				if ((tmp16)){
					HX_STACK_LINE(398)
					return true;
				}
			}
		}
		HX_STACK_LINE(404)
		int tmp2 = id.indexOf(HX_HCSTRING(":","\x3a","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(404)
		::String tmp3 = id.substring((int)0,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(404)
		::String libraryName = tmp3;		HX_STACK_VAR(libraryName,"libraryName");
		HX_STACK_LINE(405)
		int tmp4 = id.indexOf(HX_HCSTRING(":","\x3a","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(405)
		int tmp5 = (tmp4 + (int)1);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(405)
		::String tmp6 = id.substr(tmp5,null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(405)
		::String symbolName = tmp6;		HX_STACK_VAR(symbolName,"symbolName");
		HX_STACK_LINE(406)
		::String tmp7 = libraryName;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(406)
		::lime::AssetLibrary tmp8 = ::openfl::Assets_obj::getLibrary(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(406)
		::lime::AssetLibrary library = tmp8;		HX_STACK_VAR(library,"library");
		HX_STACK_LINE(408)
		bool tmp9 = (library != null());		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(408)
		if ((tmp9)){
			HX_STACK_LINE(410)
			::String tmp10 = symbolName;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(410)
			::String tmp11 = type;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(410)
			bool tmp12 = library->isLocal(tmp10,tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(410)
			return tmp12;
		}
		HX_STACK_LINE(416)
		return false;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Assets_obj,isLocal,return )

bool Assets_obj::isValidBitmapData( ::openfl::display::BitmapData bitmapData){
	HX_STACK_FRAME("openfl.Assets","isValidBitmapData",0xc2fb171e,"openfl.Assets.isValidBitmapData","openfl/Assets.hx",421,0x989d477c)
	HX_STACK_ARG(bitmapData,"bitmapData")
	HX_STACK_LINE(439)
	bool tmp = (bitmapData != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(439)
	bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(439)
	if ((tmp)){
		HX_STACK_LINE(439)
		tmp1 = (bitmapData->image != null());
	}
	else{
		HX_STACK_LINE(439)
		tmp1 = false;
	}
	HX_STACK_LINE(439)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,isValidBitmapData,return )

bool Assets_obj::isValidSound( ::openfl::media::Sound sound){
	HX_STACK_FRAME("openfl.Assets","isValidSound",0x9717a58a,"openfl.Assets.isValidSound","openfl/Assets.hx",455,0x989d477c)
	HX_STACK_ARG(sound,"sound")
	HX_STACK_LINE(455)
	return true;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,isValidSound,return )

Array< ::String > Assets_obj::list( ::String type){
	HX_STACK_FRAME("openfl.Assets","list",0xb0f58e2b,"openfl.Assets.list","openfl/Assets.hx",472,0x989d477c)
	HX_STACK_ARG(type,"type")
	HX_STACK_LINE(474)
	::String tmp = type;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(474)
	return ::lime::Assets_obj::list(tmp);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,list,return )

::lime::app::Future Assets_obj::loadBitmapData( ::String id,Dynamic __o_useCache,Dynamic handler){
Dynamic useCache = __o_useCache.Default(true);
	HX_STACK_FRAME("openfl.Assets","loadBitmapData",0x79a7538c,"openfl.Assets.loadBitmapData","openfl/Assets.hx",487,0x989d477c)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(useCache,"useCache")
	HX_STACK_ARG(handler,"handler")
{
		HX_STACK_LINE(489)
		bool tmp = (useCache == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(489)
		if ((tmp)){
			HX_STACK_LINE(489)
			useCache = true;
		}
		HX_STACK_LINE(491)
		::lime::app::Promise tmp1 = ::lime::app::Promise_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(491)
		::lime::app::Promise promise = tmp1;		HX_STACK_VAR(promise,"promise");
		HX_STACK_LINE(493)
		bool tmp2 = (handler != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(493)
		if ((tmp2)){
			HX_STACK_LINE(495)
			Dynamic tmp3 = handler;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(495)
			promise->future->onComplete(tmp3);

			HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,Dynamic,handler)
			int __ArgCount() const { return 1; }
			Void run(Dynamic _){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","openfl/Assets.hx",496,0x989d477c)
				HX_STACK_ARG(_,"_")
				{
					HX_STACK_LINE(496)
					handler(null()).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			HX_STACK_LINE(496)
			promise->future->onError( Dynamic(new _Function_2_1(handler)));
		}
		HX_STACK_LINE(502)
		Dynamic tmp3 = useCache;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(502)
		Dynamic tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(502)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(502)
		if ((tmp4)){
			HX_STACK_LINE(502)
			::openfl::IAssetCache tmp6 = ::openfl::Assets_obj::cache;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(502)
			::openfl::IAssetCache tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(502)
			::openfl::IAssetCache tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(502)
			tmp5 = tmp8->get_enabled();
		}
		else{
			HX_STACK_LINE(502)
			tmp5 = false;
		}
		HX_STACK_LINE(502)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(502)
		if ((tmp5)){
			HX_STACK_LINE(502)
			::openfl::IAssetCache tmp7 = ::openfl::Assets_obj::cache;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(502)
			::openfl::IAssetCache tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(502)
			::String tmp9 = id;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(502)
			::String tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(502)
			tmp6 = tmp8->hasBitmapData(tmp10);
		}
		else{
			HX_STACK_LINE(502)
			tmp6 = false;
		}
		HX_STACK_LINE(502)
		if ((tmp6)){
			HX_STACK_LINE(504)
			::openfl::IAssetCache tmp7 = ::openfl::Assets_obj::cache;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(504)
			::String tmp8 = id;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(504)
			::openfl::display::BitmapData tmp9 = tmp7->getBitmapData(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(504)
			::openfl::display::BitmapData bitmapData = tmp9;		HX_STACK_VAR(bitmapData,"bitmapData");
			HX_STACK_LINE(506)
			::openfl::display::BitmapData tmp10 = bitmapData;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(506)
			bool tmp11 = ::openfl::Assets_obj::isValidBitmapData(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(506)
			if ((tmp11)){
				HX_STACK_LINE(508)
				::openfl::display::BitmapData tmp12 = bitmapData;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(508)
				promise->complete(tmp12);
				HX_STACK_LINE(509)
				::lime::app::Future tmp13 = promise->future;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(509)
				return tmp13;
			}
		}
		HX_STACK_LINE(515)
		::String tmp7 = id;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(515)
		::lime::app::Future tmp8 = ::lime::Assets_obj::loadImage(tmp7,false);		HX_STACK_VAR(tmp8,"tmp8");

		HX_BEGIN_LOCAL_FUNC_S3(hx::LocalFunc,_Function_1_1,Dynamic,useCache,::lime::app::Promise,promise,::String,id)
		int __ArgCount() const { return 1; }
		Void run(::lime::graphics::Image image){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","openfl/Assets.hx",515,0x989d477c)
			HX_STACK_ARG(image,"image")
			{
				HX_STACK_LINE(517)
				bool tmp9 = (image != null());		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(517)
				if ((tmp9)){
					HX_STACK_LINE(522)
					::lime::graphics::Image tmp10 = image;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(522)
					::openfl::display::BitmapData tmp11 = ::openfl::display::BitmapData_obj::fromImage(tmp10,null());		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(522)
					::openfl::display::BitmapData bitmapData = tmp11;		HX_STACK_VAR(bitmapData,"bitmapData");
					HX_STACK_LINE(525)
					Dynamic tmp12 = useCache;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(525)
					bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(525)
					if ((tmp12)){
						HX_STACK_LINE(525)
						::openfl::IAssetCache tmp14 = ::openfl::Assets_obj::cache;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(525)
						::openfl::IAssetCache tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(525)
						tmp13 = tmp15->get_enabled();
					}
					else{
						HX_STACK_LINE(525)
						tmp13 = false;
					}
					HX_STACK_LINE(525)
					if ((tmp13)){
						HX_STACK_LINE(527)
						::openfl::IAssetCache tmp14 = ::openfl::Assets_obj::cache;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(527)
						::String tmp15 = id;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(527)
						::openfl::display::BitmapData tmp16 = bitmapData;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(527)
						tmp14->setBitmapData(tmp15,tmp16);
					}
					HX_STACK_LINE(531)
					::openfl::display::BitmapData tmp14 = bitmapData;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(531)
					promise->complete(tmp14);
				}
				else{
					HX_STACK_LINE(535)
					::String tmp10 = (HX_HCSTRING("[Assets] Could not load Image \"","\xf0","\x0b","\xf7","\xed") + id);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(535)
					::String tmp11 = (tmp10 + HX_HCSTRING("\"","\x22","\x00","\x00","\x00"));		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(535)
					promise->error(tmp11);
				}
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(515)
		::lime::app::Future tmp9 = tmp8->onComplete( Dynamic(new _Function_1_1(useCache,promise,id)));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(539)
		Dynamic tmp10 = promise->error_dyn();		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(515)
		::lime::app::Future tmp11 = tmp9->onError(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(539)
		Dynamic tmp12 = promise->progress_dyn();		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(515)
		tmp11->onProgress(tmp12);
		HX_STACK_LINE(543)
		::lime::app::Future tmp13 = promise->future;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(543)
		return tmp13;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Assets_obj,loadBitmapData,return )

::lime::app::Future Assets_obj::loadBytes( ::String id,Dynamic handler){
	HX_STACK_FRAME("openfl.Assets","loadBytes",0xeb3c3b78,"openfl.Assets.loadBytes","openfl/Assets.hx",556,0x989d477c)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(handler,"handler")
	HX_STACK_LINE(558)
	::lime::app::Promise tmp = ::lime::app::Promise_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(558)
	::lime::app::Promise promise = tmp;		HX_STACK_VAR(promise,"promise");
	HX_STACK_LINE(559)
	::String tmp1 = id;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(559)
	::lime::app::Future tmp2 = ::lime::Assets_obj::loadBytes(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(559)
	::lime::app::Future future = tmp2;		HX_STACK_VAR(future,"future");
	HX_STACK_LINE(561)
	bool tmp3 = (handler != null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(561)
	if ((tmp3)){
		HX_STACK_LINE(563)
		Dynamic tmp4 = handler;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(563)
		promise->future->onComplete(tmp4);

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,Dynamic,handler)
		int __ArgCount() const { return 1; }
		Void run(Dynamic _){
			HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","openfl/Assets.hx",564,0x989d477c)
			HX_STACK_ARG(_,"_")
			{
				HX_STACK_LINE(564)
				handler(null()).Cast< Void >();
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(564)
		promise->future->onError( Dynamic(new _Function_2_1(handler)));

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_2,::lime::app::Promise,promise)
		int __ArgCount() const { return 1; }
		Void run(::lime::utils::Bytes bytes){
			HX_STACK_FRAME("*","_Function_2_2",0x5201af79,"*._Function_2_2","openfl/Assets.hx",566,0x989d477c)
			HX_STACK_ARG(bytes,"bytes")
			{
				HX_STACK_LINE(566)
				::lime::utils::Bytes tmp5 = bytes;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(566)
				::openfl::utils::ByteArrayData tmp6 = ::openfl::utils::_ByteArray::ByteArray_Impl__obj::fromArrayBuffer(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(566)
				promise->complete(tmp6);
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(566)
		future->onComplete( Dynamic(new _Function_2_2(promise)));

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_3,::lime::app::Promise,promise)
		int __ArgCount() const { return 1; }
		Void run(Float progress){
			HX_STACK_FRAME("*","_Function_2_3",0x5201af7a,"*._Function_2_3","openfl/Assets.hx",567,0x989d477c)
			HX_STACK_ARG(progress,"progress")
			{
				HX_STACK_LINE(567)
				Float tmp5 = progress;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(567)
				promise->progress(tmp5);
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(567)
		future->onProgress( Dynamic(new _Function_2_3(promise)));

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_4,::lime::app::Promise,promise)
		int __ArgCount() const { return 1; }
		Void run(Dynamic msg){
			HX_STACK_FRAME("*","_Function_2_4",0x5201af7b,"*._Function_2_4","openfl/Assets.hx",568,0x989d477c)
			HX_STACK_ARG(msg,"msg")
			{
				HX_STACK_LINE(568)
				Dynamic tmp5 = msg;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(568)
				promise->error(tmp5);
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(568)
		future->onError( Dynamic(new _Function_2_4(promise)));
	}
	HX_STACK_LINE(572)
	::lime::app::Future tmp4 = promise->future;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(572)
	return tmp4;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,loadBytes,return )

::lime::app::Future Assets_obj::loadFont( ::String id,Dynamic __o_useCache,Dynamic handler){
Dynamic useCache = __o_useCache.Default(true);
	HX_STACK_FRAME("openfl.Assets","loadFont",0x37540b62,"openfl.Assets.loadFont","openfl/Assets.hx",585,0x989d477c)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(useCache,"useCache")
	HX_STACK_ARG(handler,"handler")
{
		HX_STACK_LINE(587)
		bool tmp = (useCache == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(587)
		if ((tmp)){
			HX_STACK_LINE(587)
			useCache = true;
		}
		HX_STACK_LINE(589)
		::lime::app::Promise tmp1 = ::lime::app::Promise_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(589)
		::lime::app::Promise promise = tmp1;		HX_STACK_VAR(promise,"promise");
		HX_STACK_LINE(591)
		bool tmp2 = (handler != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(591)
		if ((tmp2)){
			HX_STACK_LINE(593)
			Dynamic tmp3 = handler;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(593)
			promise->future->onComplete(tmp3);

			HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,Dynamic,handler)
			int __ArgCount() const { return 1; }
			Void run(Dynamic _){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","openfl/Assets.hx",594,0x989d477c)
				HX_STACK_ARG(_,"_")
				{
					HX_STACK_LINE(594)
					handler(null()).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			HX_STACK_LINE(594)
			promise->future->onError( Dynamic(new _Function_2_1(handler)));
		}
		HX_STACK_LINE(600)
		Dynamic tmp3 = useCache;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(600)
		Dynamic tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(600)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(600)
		if ((tmp4)){
			HX_STACK_LINE(600)
			::openfl::IAssetCache tmp6 = ::openfl::Assets_obj::cache;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(600)
			::openfl::IAssetCache tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(600)
			::openfl::IAssetCache tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(600)
			tmp5 = tmp8->get_enabled();
		}
		else{
			HX_STACK_LINE(600)
			tmp5 = false;
		}
		HX_STACK_LINE(600)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(600)
		if ((tmp5)){
			HX_STACK_LINE(600)
			::openfl::IAssetCache tmp7 = ::openfl::Assets_obj::cache;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(600)
			::openfl::IAssetCache tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(600)
			::String tmp9 = id;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(600)
			::String tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(600)
			tmp6 = tmp8->hasFont(tmp10);
		}
		else{
			HX_STACK_LINE(600)
			tmp6 = false;
		}
		HX_STACK_LINE(600)
		if ((tmp6)){
			HX_STACK_LINE(602)
			::openfl::IAssetCache tmp7 = ::openfl::Assets_obj::cache;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(602)
			::String tmp8 = id;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(602)
			::openfl::text::Font tmp9 = tmp7->getFont(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(602)
			promise->complete(tmp9);
			HX_STACK_LINE(603)
			::lime::app::Future tmp10 = promise->future;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(603)
			return tmp10;
		}
		HX_STACK_LINE(607)
		::String tmp7 = id;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(607)
		::lime::app::Future tmp8 = ::lime::Assets_obj::loadFont(tmp7);		HX_STACK_VAR(tmp8,"tmp8");

		HX_BEGIN_LOCAL_FUNC_S3(hx::LocalFunc,_Function_1_1,Dynamic,useCache,::lime::app::Promise,promise,::String,id)
		int __ArgCount() const { return 1; }
		Void run(::lime::text::Font limeFont){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","openfl/Assets.hx",607,0x989d477c)
			HX_STACK_ARG(limeFont,"limeFont")
			{
				HX_STACK_LINE(612)
				::lime::text::Font tmp9 = limeFont;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(612)
				::openfl::text::Font tmp10 = ::openfl::text::Font_obj::__fromLimeFont(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(612)
				::openfl::text::Font font = tmp10;		HX_STACK_VAR(font,"font");
				HX_STACK_LINE(615)
				Dynamic tmp11 = useCache;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(615)
				bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(615)
				if ((tmp11)){
					HX_STACK_LINE(615)
					::openfl::IAssetCache tmp13 = ::openfl::Assets_obj::cache;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(615)
					::openfl::IAssetCache tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(615)
					tmp12 = tmp14->get_enabled();
				}
				else{
					HX_STACK_LINE(615)
					tmp12 = false;
				}
				HX_STACK_LINE(615)
				if ((tmp12)){
					HX_STACK_LINE(617)
					::openfl::IAssetCache tmp13 = ::openfl::Assets_obj::cache;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(617)
					::String tmp14 = id;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(617)
					::openfl::text::Font tmp15 = font;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(617)
					tmp13->setFont(tmp14,tmp15);
				}
				HX_STACK_LINE(621)
				::openfl::text::Font tmp13 = font;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(621)
				promise->complete(tmp13);
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(607)
		::lime::app::Future tmp9 = tmp8->onComplete( Dynamic(new _Function_1_1(useCache,promise,id)));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(623)
		Dynamic tmp10 = promise->error_dyn();		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(607)
		::lime::app::Future tmp11 = tmp9->onError(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(623)
		Dynamic tmp12 = promise->progress_dyn();		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(607)
		tmp11->onProgress(tmp12);
		HX_STACK_LINE(627)
		::lime::app::Future tmp13 = promise->future;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(627)
		return tmp13;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Assets_obj,loadFont,return )

::lime::app::Future Assets_obj::loadLibrary( ::String name,Dynamic handler){
	HX_STACK_FRAME("openfl.Assets","loadLibrary",0x44d0f748,"openfl.Assets.loadLibrary","openfl/Assets.hx",638,0x989d477c)
	HX_STACK_ARG(name,"name")
	HX_STACK_ARG(handler,"handler")
	HX_STACK_LINE(640)
	::String tmp = name;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(640)
	::lime::app::Future tmp1 = ::lime::Assets_obj::loadLibrary(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(640)
	::lime::app::Future future = tmp1;		HX_STACK_VAR(future,"future");
	HX_STACK_LINE(642)
	bool tmp2 = (handler != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(642)
	if ((tmp2)){
		HX_STACK_LINE(644)
		Dynamic tmp3 = handler;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(644)
		future->onComplete(tmp3);

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,Dynamic,handler)
		int __ArgCount() const { return 1; }
		Void run(Dynamic _){
			HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","openfl/Assets.hx",645,0x989d477c)
			HX_STACK_ARG(_,"_")
			{
				HX_STACK_LINE(645)
				handler(null()).Cast< Void >();
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(645)
		future->onError( Dynamic(new _Function_2_1(handler)));
	}
	HX_STACK_LINE(649)
	::lime::app::Future tmp3 = future;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(649)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,loadLibrary,return )

::lime::app::Future Assets_obj::loadMusic( ::String id,Dynamic __o_useCache,Dynamic handler){
Dynamic useCache = __o_useCache.Default(true);
	HX_STACK_FRAME("openfl.Assets","loadMusic",0x3dff03b2,"openfl.Assets.loadMusic","openfl/Assets.hx",662,0x989d477c)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(useCache,"useCache")
	HX_STACK_ARG(handler,"handler")
{
		HX_STACK_LINE(664)
		bool tmp = (useCache == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(664)
		if ((tmp)){
			HX_STACK_LINE(664)
			useCache = true;
		}
		HX_STACK_LINE(668)
		::lime::app::Promise tmp1 = ::lime::app::Promise_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(668)
		::lime::app::Promise promise = tmp1;		HX_STACK_VAR(promise,"promise");
		HX_STACK_LINE(670)
		::String tmp2 = id;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(670)
		Dynamic tmp3 = useCache;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(670)
		::lime::app::Future tmp4 = ::lime::Assets_obj::loadAudioBuffer(tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");

		HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_1_1,::lime::app::Promise,promise,::String,id)
		int __ArgCount() const { return 1; }
		Void run(::lime::audio::AudioBuffer buffer){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","openfl/Assets.hx",670,0x989d477c)
			HX_STACK_ARG(buffer,"buffer")
			{
				HX_STACK_LINE(672)
				bool tmp5 = (buffer != null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(672)
				if ((tmp5)){
					HX_STACK_LINE(677)
					::lime::audio::AudioBuffer tmp6 = buffer;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(677)
					::openfl::media::Sound tmp7 = ::openfl::media::Sound_obj::fromAudioBuffer(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(677)
					promise->complete(tmp7);
				}
				else{
					HX_STACK_LINE(682)
					::String tmp6 = (HX_HCSTRING("[Assets] Could not load Sound \"","\x64","\xbe","\x27","\xe3") + id);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(682)
					::String tmp7 = (tmp6 + HX_HCSTRING("\"","\x22","\x00","\x00","\x00"));		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(682)
					promise->error(tmp7);
				}
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(670)
		::lime::app::Future tmp5 = tmp4->onComplete( Dynamic(new _Function_1_1(promise,id)));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(686)
		Dynamic tmp6 = promise->error_dyn();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(670)
		::lime::app::Future tmp7 = tmp5->onError(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(686)
		Dynamic tmp8 = promise->progress_dyn();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(670)
		tmp7->onProgress(tmp8);
		HX_STACK_LINE(687)
		::lime::app::Future tmp9 = promise->future;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(687)
		return tmp9;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Assets_obj,loadMusic,return )

::lime::app::Future Assets_obj::loadMovieClip( ::String id,Dynamic handler){
	HX_STACK_FRAME("openfl.Assets","loadMovieClip",0xd38a402d,"openfl.Assets.loadMovieClip","openfl/Assets.hx",706,0x989d477c)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(handler,"handler")
	HX_STACK_LINE(708)
	::lime::app::Promise tmp = ::lime::app::Promise_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(708)
	::lime::app::Promise promise = tmp;		HX_STACK_VAR(promise,"promise");
	HX_STACK_LINE(710)
	bool tmp1 = (handler != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(710)
	if ((tmp1)){
		HX_STACK_LINE(712)
		Dynamic tmp2 = handler;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(712)
		promise->future->onComplete(tmp2);

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,Dynamic,handler)
		int __ArgCount() const { return 1; }
		Void run(Dynamic _){
			HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","openfl/Assets.hx",713,0x989d477c)
			HX_STACK_ARG(_,"_")
			{
				HX_STACK_LINE(713)
				handler(null()).Cast< Void >();
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(713)
		promise->future->onError( Dynamic(new _Function_2_1(handler)));
	}
	HX_STACK_LINE(719)
	int tmp2 = id.indexOf(HX_HCSTRING(":","\x3a","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(719)
	::String tmp3 = id.substring((int)0,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(719)
	::String libraryName = tmp3;		HX_STACK_VAR(libraryName,"libraryName");
	HX_STACK_LINE(720)
	int tmp4 = id.indexOf(HX_HCSTRING(":","\x3a","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(720)
	int tmp5 = (tmp4 + (int)1);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(720)
	::String tmp6 = id.substr(tmp5,null());		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(720)
	::String symbolName = tmp6;		HX_STACK_VAR(symbolName,"symbolName");
	HX_STACK_LINE(721)
	::String tmp7 = libraryName;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(721)
	::lime::AssetLibrary tmp8 = ::openfl::Assets_obj::getLibrary(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(721)
	::openfl::AssetLibrary library = ((::openfl::AssetLibrary)(tmp8));		HX_STACK_VAR(library,"library");
	HX_STACK_LINE(723)
	bool tmp9 = (library != null());		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(723)
	if ((tmp9)){
		HX_STACK_LINE(725)
		::String tmp10 = symbolName;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(725)
		bool tmp11 = library->exists(tmp10,HX_HCSTRING("MOVIE_CLIP","\x1f","\xe1","\xaa","\x77"));		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(725)
		if ((tmp11)){
			HX_STACK_LINE(727)
			::String tmp12 = symbolName;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(727)
			::lime::app::Future tmp13 = library->loadMovieClip(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(727)
			promise->completeWith(tmp13);
		}
		else{
			HX_STACK_LINE(731)
			::String tmp12 = (HX_HCSTRING("[Assets] There is no MovieClip asset with an ID of \"","\x8f","\x8e","\xf2","\x7d") + id);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(731)
			::String tmp13 = (tmp12 + HX_HCSTRING("\"","\x22","\x00","\x00","\x00"));		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(731)
			promise->error(tmp13);
		}
	}
	else{
		HX_STACK_LINE(737)
		::String tmp10 = (HX_HCSTRING("[Assets] There is no asset library named \"","\xa0","\xb4","\x0a","\xcd") + libraryName);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(737)
		::String tmp11 = (tmp10 + HX_HCSTRING("\"","\x22","\x00","\x00","\x00"));		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(737)
		promise->error(tmp11);
	}
	HX_STACK_LINE(743)
	::lime::app::Future tmp10 = promise->future;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(743)
	return tmp10;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,loadMovieClip,return )

::lime::app::Future Assets_obj::loadSound( ::String id,Dynamic __o_useCache,Dynamic handler){
Dynamic useCache = __o_useCache.Default(true);
	HX_STACK_FRAME("openfl.Assets","loadSound",0xae70bfdc,"openfl.Assets.loadSound","openfl/Assets.hx",756,0x989d477c)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(useCache,"useCache")
	HX_STACK_ARG(handler,"handler")
{
		HX_STACK_LINE(758)
		bool tmp = (useCache == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(758)
		if ((tmp)){
			HX_STACK_LINE(758)
			useCache = true;
		}
		HX_STACK_LINE(762)
		::lime::app::Promise tmp1 = ::lime::app::Promise_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(762)
		::lime::app::Promise promise = tmp1;		HX_STACK_VAR(promise,"promise");
		HX_STACK_LINE(764)
		::String tmp2 = id;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(764)
		Dynamic tmp3 = useCache;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(764)
		::lime::app::Future tmp4 = ::lime::Assets_obj::loadAudioBuffer(tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");

		HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_1_1,::lime::app::Promise,promise,::String,id)
		int __ArgCount() const { return 1; }
		Void run(::lime::audio::AudioBuffer buffer){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","openfl/Assets.hx",764,0x989d477c)
			HX_STACK_ARG(buffer,"buffer")
			{
				HX_STACK_LINE(766)
				bool tmp5 = (buffer != null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(766)
				if ((tmp5)){
					HX_STACK_LINE(771)
					::lime::audio::AudioBuffer tmp6 = buffer;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(771)
					::openfl::media::Sound tmp7 = ::openfl::media::Sound_obj::fromAudioBuffer(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(771)
					promise->complete(tmp7);
				}
				else{
					HX_STACK_LINE(776)
					::String tmp6 = (HX_HCSTRING("[Assets] Could not load Sound \"","\x64","\xbe","\x27","\xe3") + id);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(776)
					::String tmp7 = (tmp6 + HX_HCSTRING("\"","\x22","\x00","\x00","\x00"));		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(776)
					promise->error(tmp7);
				}
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(764)
		::lime::app::Future tmp5 = tmp4->onComplete( Dynamic(new _Function_1_1(promise,id)));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(780)
		Dynamic tmp6 = promise->error_dyn();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(764)
		::lime::app::Future tmp7 = tmp5->onError(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(780)
		Dynamic tmp8 = promise->progress_dyn();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(764)
		tmp7->onProgress(tmp8);
		HX_STACK_LINE(781)
		::lime::app::Future tmp9 = promise->future;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(781)
		return tmp9;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Assets_obj,loadSound,return )

::lime::app::Future Assets_obj::loadText( ::String id,Dynamic handler){
	HX_STACK_FRAME("openfl.Assets","loadText",0x408d7a40,"openfl.Assets.loadText","openfl/Assets.hx",800,0x989d477c)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(handler,"handler")
	HX_STACK_LINE(802)
	::String tmp = id;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(802)
	::lime::app::Future tmp1 = ::lime::Assets_obj::loadText(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(802)
	::lime::app::Future future = tmp1;		HX_STACK_VAR(future,"future");
	HX_STACK_LINE(804)
	bool tmp2 = (handler != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(804)
	if ((tmp2)){
		HX_STACK_LINE(806)
		Dynamic tmp3 = handler;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(806)
		future->onComplete(tmp3);

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,Dynamic,handler)
		int __ArgCount() const { return 1; }
		Void run(Dynamic _){
			HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","openfl/Assets.hx",807,0x989d477c)
			HX_STACK_ARG(_,"_")
			{
				HX_STACK_LINE(807)
				handler(null()).Cast< Void >();
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(807)
		future->onError( Dynamic(new _Function_2_1(handler)));
	}
	HX_STACK_LINE(811)
	::lime::app::Future tmp3 = future;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(811)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,loadText,return )

Void Assets_obj::registerLibrary( ::String name,::openfl::AssetLibrary library){
{
		HX_STACK_FRAME("openfl.Assets","registerLibrary",0x9230822b,"openfl.Assets.registerLibrary","openfl/Assets.hx",821,0x989d477c)
		HX_STACK_ARG(name,"name")
		HX_STACK_ARG(library,"library")
		HX_STACK_LINE(823)
		::String tmp = name;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(823)
		::openfl::AssetLibrary tmp1 = library;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(823)
		::lime::Assets_obj::registerLibrary(tmp,tmp1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,registerLibrary,(void))

Void Assets_obj::removeEventListener( ::String type,Dynamic listener,hx::Null< bool >  __o_capture){
bool capture = __o_capture.Default(false);
	HX_STACK_FRAME("openfl.Assets","removeEventListener",0x6a2b249d,"openfl.Assets.removeEventListener","openfl/Assets.hx",828,0x989d477c)
	HX_STACK_ARG(type,"type")
	HX_STACK_ARG(listener,"listener")
	HX_STACK_ARG(capture,"capture")
{
		HX_STACK_LINE(830)
		::openfl::events::EventDispatcher tmp = ::openfl::Assets_obj::dispatcher;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(830)
		::String tmp1 = type;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(830)
		Dynamic tmp2 = listener;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(830)
		bool tmp3 = capture;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(830)
		tmp->removeEventListener(tmp1,tmp2,tmp3);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Assets_obj,removeEventListener,(void))

::hx::Class Assets_obj::resolveClass( ::String name){
	HX_STACK_FRAME("openfl.Assets","resolveClass",0x76ca4479,"openfl.Assets.resolveClass","openfl/Assets.hx",835,0x989d477c)
	HX_STACK_ARG(name,"name")
	HX_STACK_LINE(837)
	::String tmp = name;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(837)
	::hx::Class tmp1 = ::Type_obj::resolveClass(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(837)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,resolveClass,return )

::Enum Assets_obj::resolveEnum( ::String name){
	HX_STACK_FRAME("openfl.Assets","resolveEnum",0x1314a1e0,"openfl.Assets.resolveEnum","openfl/Assets.hx",842,0x989d477c)
	HX_STACK_ARG(name,"name")
	HX_STACK_LINE(844)
	::String tmp = name;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(844)
	::Enum tmp1 = ::Type_obj::resolveEnum(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(844)
	::Enum value = tmp1;		HX_STACK_VAR(value,"value");
	HX_STACK_LINE(856)
	::Enum tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(856)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,resolveEnum,return )

Void Assets_obj::unloadLibrary( ::String name){
{
		HX_STACK_FRAME("openfl.Assets","unloadLibrary",0x6a51c84f,"openfl.Assets.unloadLibrary","openfl/Assets.hx",861,0x989d477c)
		HX_STACK_ARG(name,"name")
		HX_STACK_LINE(863)
		::String tmp = name;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(863)
		::lime::Assets_obj::unloadLibrary(tmp);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,unloadLibrary,(void))

Void Assets_obj::printError( ::String message){
{
		HX_STACK_FRAME("openfl.Assets","printError",0xd89969e8,"openfl.Assets.printError","openfl/Assets.hx",868,0x989d477c)
		HX_STACK_ARG(message,"message")
		HX_STACK_LINE(875)
		::String tmp = message;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(875)
		Dynamic tmp1 = hx::SourceInfo(HX_HCSTRING("Assets.hx","\xfb","\xcd","\xc6","\x67"),875,HX_HCSTRING("openfl.Assets","\xc1","\x41","\xe1","\xa0"),HX_HCSTRING("printError","\x5b","\x20","\xbc","\xcb"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(875)
		::haxe::Log_obj::trace(tmp,tmp1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,printError,(void))

Void Assets_obj::LimeAssets_onChange( ){
{
		HX_STACK_FRAME("openfl.Assets","LimeAssets_onChange",0xaa15d389,"openfl.Assets.LimeAssets_onChange","openfl/Assets.hx",887,0x989d477c)
		HX_STACK_LINE(889)
		::openfl::events::Event tmp = ::openfl::events::Event_obj::__new(HX_HCSTRING("change","\x70","\x91","\x72","\xb7"),null(),null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(889)
		::openfl::Assets_obj::dispatchEvent(tmp);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Assets_obj,LimeAssets_onChange,(void))


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
		if (HX_FIELD_EQ(inName,"getBytes") ) { outValue = getBytes_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getMusic") ) { outValue = getMusic_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getSound") ) { outValue = getSound_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"loadFont") ) { outValue = loadFont_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"loadText") ) { outValue = loadText_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"loadBytes") ) { outValue = loadBytes_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"loadMusic") ) { outValue = loadMusic_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"loadSound") ) { outValue = loadSound_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"dispatcher") ) { outValue = dispatcher; return true;  }
		if (HX_FIELD_EQ(inName,"getLibrary") ) { outValue = getLibrary_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"printError") ) { outValue = printError_dyn(); return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"loadLibrary") ) { outValue = loadLibrary_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"resolveEnum") ) { outValue = resolveEnum_dyn(); return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"getMovieClip") ) { outValue = getMovieClip_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"isValidSound") ) { outValue = isValidSound_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"resolveClass") ) { outValue = resolveClass_dyn(); return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"dispatchEvent") ) { outValue = dispatchEvent_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getBitmapData") ) { outValue = getBitmapData_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"loadMovieClip") ) { outValue = loadMovieClip_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"unloadLibrary") ) { outValue = unloadLibrary_dyn(); return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"loadBitmapData") ) { outValue = loadBitmapData_dyn(); return true;  }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"registerLibrary") ) { outValue = registerLibrary_dyn(); return true;  }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"addEventListener") ) { outValue = addEventListener_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"hasEventListener") ) { outValue = hasEventListener_dyn(); return true;  }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"isValidBitmapData") ) { outValue = isValidBitmapData_dyn(); return true;  }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"removeEventListener") ) { outValue = removeEventListener_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"LimeAssets_onChange") ) { outValue = LimeAssets_onChange_dyn(); return true;  }
	}
	return false;
}

bool Assets_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"cache") ) { cache=ioValue.Cast< ::openfl::IAssetCache >(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"dispatcher") ) { dispatcher=ioValue.Cast< ::openfl::events::EventDispatcher >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::openfl::IAssetCache*/ ,(void *) &Assets_obj::cache,HX_HCSTRING("cache","\x42","\x9a","\x14","\x41")},
	{hx::fsObject /*::openfl::events::EventDispatcher*/ ,(void *) &Assets_obj::dispatcher,HX_HCSTRING("dispatcher","\xa7","\xc9","\x00","\x5a")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Assets_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Assets_obj::cache,"cache");
	HX_MARK_MEMBER_NAME(Assets_obj::dispatcher,"dispatcher");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Assets_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Assets_obj::cache,"cache");
	HX_VISIT_MEMBER_NAME(Assets_obj::dispatcher,"dispatcher");
};

#endif

hx::Class Assets_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("cache","\x42","\x9a","\x14","\x41"),
	HX_HCSTRING("dispatcher","\xa7","\xc9","\x00","\x5a"),
	HX_HCSTRING("addEventListener","\xcd","\x0b","\x64","\xf1"),
	HX_HCSTRING("dispatchEvent","\x00","\xc7","\x64","\xc6"),
	HX_HCSTRING("exists","\xdc","\x1d","\xe0","\xbf"),
	HX_HCSTRING("getBitmapData","\xef","\x11","\x33","\x90"),
	HX_HCSTRING("getBytes","\xf5","\x17","\x6f","\x1d"),
	HX_HCSTRING("getFont","\x85","\x0d","\x43","\x16"),
	HX_HCSTRING("getLibrary","\x05","\xad","\xd1","\x8e"),
	HX_HCSTRING("getMovieClip","\x2a","\x9f","\x71","\x27"),
	HX_HCSTRING("getMusic","\x2f","\xe0","\x31","\x70"),
	HX_HCSTRING("getPath","\x5b","\x95","\xd4","\x1c"),
	HX_HCSTRING("getSound","\x59","\x9c","\xa3","\xe0"),
	HX_HCSTRING("getText","\x63","\x7c","\x7c","\x1f"),
	HX_HCSTRING("hasEventListener","\xf4","\x2e","\xea","\x0c"),
	HX_HCSTRING("isLocal","\x21","\x6d","\x76","\x15"),
	HX_HCSTRING("isValidBitmapData","\x0b","\x65","\xe4","\xe6"),
	HX_HCSTRING("isValidSound","\xbd","\x1e","\x2b","\xa1"),
	HX_HCSTRING("list","\x5e","\x1c","\xb3","\x47"),
	HX_HCSTRING("loadBitmapData","\x7f","\xbf","\x71","\xca"),
	HX_HCSTRING("loadBytes","\x65","\x54","\xcf","\xd8"),
	HX_HCSTRING("loadFont","\x15","\x2f","\x60","\xb4"),
	HX_HCSTRING("loadLibrary","\x75","\xe5","\x0d","\x10"),
	HX_HCSTRING("loadMusic","\x9f","\x1c","\x92","\x2b"),
	HX_HCSTRING("loadMovieClip","\x9a","\xd3","\x80","\x9a"),
	HX_HCSTRING("loadSound","\xc9","\xd8","\x03","\x9c"),
	HX_HCSTRING("loadText","\xf3","\x9d","\x99","\xbd"),
	HX_HCSTRING("registerLibrary","\xd8","\x8a","\x84","\xf2"),
	HX_HCSTRING("removeEventListener","\xca","\x87","\x75","\x55"),
	HX_HCSTRING("resolveClass","\xac","\xbd","\xdd","\x80"),
	HX_HCSTRING("resolveEnum","\x0d","\x90","\x51","\xde"),
	HX_HCSTRING("unloadLibrary","\xbc","\x5b","\x48","\x31"),
	HX_HCSTRING("printError","\x5b","\x20","\xbc","\xcb"),
	HX_HCSTRING("LimeAssets_onChange","\xb6","\x36","\x60","\x95"),
	::String(null()) };

void Assets_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.Assets","\xc1","\x41","\xe1","\xa0");
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
struct _Function_0_1{
	inline static ::openfl::IAssetCache Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/Assets.hx",49,0x989d477c)
		{
			HX_STACK_LINE(49)
			::openfl::AssetCache tmp = ::openfl::AssetCache_obj::__new();		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(49)
			return ((::openfl::IAssetCache)(tmp));
		}
		return null();
	}
};
	cache= _Function_0_1::Block();
	dispatcher= ::openfl::events::EventDispatcher_obj::__new(null());
}

} // end namespace openfl
