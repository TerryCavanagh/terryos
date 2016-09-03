#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxegon_Input
#include <haxegon/Input.h>
#endif
#ifndef INCLUDED_haxegon_Key
#include <haxegon/Key.h>
#endif
#ifndef INCLUDED_haxegon_Music
#include <haxegon/Music.h>
#endif
#ifndef INCLUDED_haxegon_Text
#include <haxegon/Text.h>
#endif
#ifndef INCLUDED_openfl_Assets
#include <openfl/Assets.h>
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
#ifndef INCLUDED_openfl_media_SoundChannel
#include <openfl/media/SoundChannel.h>
#endif
#ifndef INCLUDED_openfl_media_SoundTransform
#include <openfl/media/SoundTransform.h>
#endif
namespace haxegon{

Void Music_obj::__construct()
{
	return null();
}

//Music_obj::~Music_obj() { }

Dynamic Music_obj::__CreateEmpty() { return  new Music_obj; }
hx::ObjectPtr< Music_obj > Music_obj::__new()
{  hx::ObjectPtr< Music_obj > _result_ = new Music_obj();
	_result_->__construct();
	return _result_;}

Dynamic Music_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Music_obj > _result_ = new Music_obj();
	_result_->__construct();
	return _result_;}

Void Music_obj::playsound( ::String t,hx::Null< int >  __o_offset){
int offset = __o_offset.Default(0);
	HX_STACK_FRAME("haxegon.Music","playsound",0x3d26e1a4,"haxegon.Music.playsound","haxegon/Music.hx",11,0xbb0c9da8)
	HX_STACK_ARG(t,"t")
	HX_STACK_ARG(offset,"offset")
{
		HX_STACK_LINE(12)
		::haxe::ds::StringMap tmp = ::haxegon::Music_obj::effectindex;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(12)
		::String tmp1 = t;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(12)
		Dynamic tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(12)
		Dynamic tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(12)
		int tmp4 = ::Std_obj::_int(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(12)
		Float tmp5 = ::haxegon::Music_obj::volumelevels->__get(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(12)
		Float tmp6 = ::haxegon::Music_obj::globalsound;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(12)
		Float tmp7 = (tmp5 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(12)
		::openfl::media::SoundTransform tmp8 = ::openfl::media::SoundTransform_obj::__new(tmp7,null());		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(12)
		::haxegon::Music_obj::temptransform = tmp8;
		HX_STACK_LINE(13)
		int tmp9 = ::haxegon::Music_obj::currentefchan;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(13)
		::haxe::ds::StringMap tmp10 = ::haxegon::Music_obj::effectindex;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(13)
		::String tmp11 = t;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(13)
		Dynamic tmp12 = tmp10->get(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(13)
		Dynamic tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(13)
		int tmp14 = ::Std_obj::_int(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(13)
		::openfl::media::Sound tmp15 = ::haxegon::Music_obj::efchan->__get(tmp14).StaticCast< ::openfl::media::Sound >();		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(13)
		int tmp16 = offset;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(13)
		::openfl::media::SoundChannel tmp17 = tmp15->play(tmp16,null(),null());		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(13)
		::haxegon::Music_obj::efchannel[tmp9] = tmp17;
		HX_STACK_LINE(14)
		int tmp18 = ::haxegon::Music_obj::currentefchan;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(14)
		::openfl::media::SoundChannel tmp19 = ::haxegon::Music_obj::efchannel->__get(tmp18).StaticCast< ::openfl::media::SoundChannel >();		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(14)
		::openfl::media::SoundTransform tmp20 = ::haxegon::Music_obj::temptransform;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(14)
		tmp19->set_soundTransform(tmp20);
		HX_STACK_LINE(15)
		(::haxegon::Music_obj::currentefchan)++;
		HX_STACK_LINE(16)
		int tmp21 = ::haxegon::Music_obj::currentefchan;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(16)
		bool tmp22 = (tmp21 > (int)15);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(16)
		if ((tmp22)){
			HX_STACK_LINE(16)
			hx::SubEq(::haxegon::Music_obj::currentefchan,(int)16);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Music_obj,playsound,(void))

Void Music_obj::stopsound( ){
{
		HX_STACK_FRAME("haxegon.Music","stopsound",0x2c84ecd6,"haxegon.Music.stopsound","haxegon/Music.hx",19,0xbb0c9da8)
		HX_STACK_LINE(20)
		::openfl::media::SoundTransform tmp = ::openfl::media::SoundTransform_obj::__new((int)0,null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(20)
		::haxegon::Music_obj::temptransform = tmp;
		HX_STACK_LINE(22)
		{
			HX_STACK_LINE(22)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(22)
			while((true)){
				HX_STACK_LINE(22)
				bool tmp1 = (_g < (int)16);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(22)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(22)
				if ((tmp2)){
					HX_STACK_LINE(22)
					break;
				}
				HX_STACK_LINE(22)
				int tmp3 = (_g)++;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(22)
				int i = tmp3;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(23)
				::openfl::media::SoundChannel tmp4 = ::haxegon::Music_obj::efchannel->__get(i).StaticCast< ::openfl::media::SoundChannel >();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(23)
				bool tmp5 = (tmp4 != null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(23)
				if ((tmp5)){
					HX_STACK_LINE(23)
					::openfl::media::SoundChannel tmp6 = ::haxegon::Music_obj::efchannel->__get(i).StaticCast< ::openfl::media::SoundChannel >();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(23)
					::openfl::media::SoundTransform tmp7 = ::haxegon::Music_obj::temptransform;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(23)
					tmp6->set_soundTransform(tmp7);
				}
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Music_obj,stopsound,(void))

Void Music_obj::loadsound( ::String t,hx::Null< Float >  __o_vol){
Float vol = __o_vol.Default(((Float)1.0));
	HX_STACK_FRAME("haxegon.Music","loadsound",0x377a0032,"haxegon.Music.loadsound","haxegon/Music.hx",27,0xbb0c9da8)
	HX_STACK_ARG(t,"t")
	HX_STACK_ARG(vol,"vol")
{
		HX_STACK_LINE(28)
		::haxe::ds::StringMap tmp = ::haxegon::Music_obj::effectindex;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(28)
		::String tmp1 = t;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(28)
		int tmp2 = ::haxegon::Music_obj::numeffects;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(28)
		tmp->set(tmp1,tmp2);
		HX_STACK_LINE(29)
		Float tmp3 = vol;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(29)
		::haxegon::Music_obj::volumelevels->push(tmp3);
		HX_STACK_LINE(33)
		::String tmp4 = (HX_HCSTRING("data/sounds/","\xc6","\x86","\x2c","\xc9") + t);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(33)
		::String tmp5 = (tmp4 + HX_HCSTRING(".ogg","\xe1","\x64","\xbc","\x1e"));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(33)
		::openfl::media::Sound tmp6 = ::openfl::Assets_obj::getSound(tmp5,null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(33)
		::haxegon::Music_obj::efchan->push(tmp6);
		HX_STACK_LINE(35)
		(::haxegon::Music_obj::numeffects)++;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Music_obj,loadsound,(void))

Void Music_obj::loadsong( ::String t,hx::Null< Float >  __o_vol){
Float vol = __o_vol.Default(((Float)1.0));
	HX_STACK_FRAME("haxegon.Music","loadsong",0x028b6dd2,"haxegon.Music.loadsong","haxegon/Music.hx",38,0xbb0c9da8)
	HX_STACK_ARG(t,"t")
	HX_STACK_ARG(vol,"vol")
{
		HX_STACK_LINE(39)
		::haxe::ds::StringMap tmp = ::haxegon::Music_obj::songindex;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(39)
		::String tmp1 = t;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(39)
		int tmp2 = ::haxegon::Music_obj::numsongs;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(39)
		tmp->set(tmp1,tmp2);
		HX_STACK_LINE(40)
		Float tmp3 = vol;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(40)
		::haxegon::Music_obj::songvolumelevels->push(tmp3);
		HX_STACK_LINE(44)
		::String tmp4 = (HX_HCSTRING("data/music/","\x6f","\xb0","\x26","\x56") + t);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(44)
		::String tmp5 = (tmp4 + HX_HCSTRING(".ogg","\xe1","\x64","\xbc","\x1e"));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(44)
		::openfl::media::Sound tmp6 = ::openfl::Assets_obj::getMusic(tmp5,null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(44)
		::haxegon::Music_obj::musicchan->push(tmp6);
		HX_STACK_LINE(46)
		(::haxegon::Music_obj::numsongs)++;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Music_obj,loadsong,(void))

Void Music_obj::play( ::String t,Dynamic __o_time,Dynamic __o_loop){
Dynamic time = __o_time.Default(0);
Dynamic loop = __o_loop.Default(true);
	HX_STACK_FRAME("haxegon.Music","play",0x920fdb4b,"haxegon.Music.play","haxegon/Music.hx",49,0xbb0c9da8)
	HX_STACK_ARG(t,"t")
	HX_STACK_ARG(time,"time")
	HX_STACK_ARG(loop,"loop")
{
		HX_STACK_LINE(50)
		::String tmp = ::haxegon::Music_obj::currentsong;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(50)
		::String tmp1 = t;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(50)
		bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(50)
		if ((tmp2)){
			HX_STACK_LINE(51)
			::String tmp3 = ::haxegon::Music_obj::currentsong;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(51)
			bool tmp4 = (tmp3 != HX_HCSTRING("nothing","\x0d","\x9c","\x5f","\x4f"));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(51)
			if ((tmp4)){
				HX_STACK_LINE(53)
				::openfl::media::SoundChannel tmp5 = ::haxegon::Music_obj::musicchannel;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(53)
				tmp5->stop();
				HX_STACK_LINE(54)
				::openfl::media::SoundChannel tmp6 = ::haxegon::Music_obj::musicchannel;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(54)
				Dynamic tmp7 = ::haxegon::Music_obj::loopmusic_dyn();		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(54)
				tmp6->removeEventListener(HX_HCSTRING("soundComplete","\xa8","\x30","\xe6","\x1c"),tmp7,null());
			}
			HX_STACK_LINE(57)
			::haxegon::Music_obj::musicfade = (int)0;
			HX_STACK_LINE(58)
			::haxegon::Music_obj::musicfadein = (int)0;
			HX_STACK_LINE(60)
			bool tmp5 = (t != HX_HCSTRING("nothing","\x0d","\x9c","\x5f","\x4f"));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(60)
			if ((tmp5)){
				HX_STACK_LINE(61)
				::haxegon::Music_obj::currentsong = t;
				HX_STACK_LINE(63)
				Dynamic tmp6 = loop;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(63)
				if ((tmp6)){
					HX_STACK_LINE(64)
					bool tmp7 = (time == (int)0);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(64)
					if ((tmp7)){
						HX_STACK_LINE(65)
						::haxe::ds::StringMap tmp8 = ::haxegon::Music_obj::songindex;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(65)
						::String tmp9 = t;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(65)
						Dynamic tmp10 = tmp8->get(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(65)
						Dynamic tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(65)
						int tmp12 = ::Std_obj::_int(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(65)
						::openfl::media::Sound tmp13 = ::haxegon::Music_obj::musicchan->__get(tmp12).StaticCast< ::openfl::media::Sound >();		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(65)
						::openfl::media::SoundChannel tmp14 = tmp13->play((int)0,(int)999999,null());		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(65)
						::haxegon::Music_obj::musicchannel = tmp14;
					}
					else{
						HX_STACK_LINE(67)
						::haxe::ds::StringMap tmp8 = ::haxegon::Music_obj::songindex;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(67)
						::String tmp9 = t;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(67)
						Dynamic tmp10 = tmp8->get(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(67)
						Dynamic tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(67)
						int tmp12 = ::Std_obj::_int(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(67)
						::openfl::media::Sound tmp13 = ::haxegon::Music_obj::musicchan->__get(tmp12).StaticCast< ::openfl::media::Sound >();		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(67)
						int tmp14 = (time * (int)1000);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(67)
						::haxe::ds::StringMap tmp15 = ::haxegon::Music_obj::songindex;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(67)
						::String tmp16 = t;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(67)
						Dynamic tmp17 = tmp15->get(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(67)
						Dynamic tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(67)
						int tmp19 = ::Std_obj::_int(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(67)
						::openfl::media::Sound tmp20 = ::haxegon::Music_obj::musicchan->__get(tmp19).StaticCast< ::openfl::media::Sound >();		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(67)
						Float tmp21 = tmp20->get_length();		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(67)
						Float tmp22 = hx::Mod(tmp14,tmp21);		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(67)
						::openfl::media::SoundChannel tmp23 = tmp13->play(tmp22,null(),null());		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(67)
						::haxegon::Music_obj::musicchannel = tmp23;
						HX_STACK_LINE(68)
						::openfl::media::SoundChannel tmp24 = ::haxegon::Music_obj::musicchannel;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(68)
						Dynamic tmp25 = ::haxegon::Music_obj::loopmusic_dyn();		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(68)
						tmp24->addEventListener(HX_HCSTRING("soundComplete","\xa8","\x30","\xe6","\x1c"),tmp25,null(),null(),null());
					}
				}
				else{
					HX_STACK_LINE(71)
					::haxe::ds::StringMap tmp7 = ::haxegon::Music_obj::songindex;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(71)
					::String tmp8 = t;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(71)
					Dynamic tmp9 = tmp7->get(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(71)
					Dynamic tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(71)
					int tmp11 = ::Std_obj::_int(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(71)
					::openfl::media::Sound tmp12 = ::haxegon::Music_obj::musicchan->__get(tmp11).StaticCast< ::openfl::media::Sound >();		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(71)
					int tmp13 = (time * (int)1000);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(71)
					::haxe::ds::StringMap tmp14 = ::haxegon::Music_obj::songindex;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(71)
					::String tmp15 = t;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(71)
					Dynamic tmp16 = tmp14->get(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(71)
					Dynamic tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(71)
					int tmp18 = ::Std_obj::_int(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(71)
					::openfl::media::Sound tmp19 = ::haxegon::Music_obj::musicchan->__get(tmp18).StaticCast< ::openfl::media::Sound >();		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(71)
					Float tmp20 = tmp19->get_length();		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(71)
					Float tmp21 = hx::Mod(tmp13,tmp20);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(71)
					::openfl::media::SoundChannel tmp22 = tmp12->play(tmp21,null(),null());		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(71)
					::haxegon::Music_obj::musicchannel = tmp22;
				}
				HX_STACK_LINE(73)
				::openfl::media::SoundChannel tmp7 = ::haxegon::Music_obj::musicchannel;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(73)
				::haxe::ds::StringMap tmp8 = ::haxegon::Music_obj::songindex;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(73)
				::String tmp9 = t;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(73)
				Dynamic tmp10 = tmp8->get(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(73)
				Dynamic tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(73)
				int tmp12 = ::Std_obj::_int(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(73)
				Float tmp13 = ::haxegon::Music_obj::songvolumelevels->__get(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(73)
				Float tmp14 = ::haxegon::Music_obj::globalsound;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(73)
				Float tmp15 = (tmp13 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(73)
				::openfl::media::SoundTransform tmp16 = ::openfl::media::SoundTransform_obj::__new(tmp15,null());		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(73)
				tmp7->set_soundTransform(tmp16);
			}
			else{
				HX_STACK_LINE(75)
				::haxegon::Music_obj::currentsong = HX_HCSTRING("nothing","\x0d","\x9c","\x5f","\x4f");
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Music_obj,play,(void))

Void Music_obj::stop( ){
{
		HX_STACK_FRAME("haxegon.Music","stop",0x94119d59,"haxegon.Music.stop","haxegon/Music.hx",80,0xbb0c9da8)
		HX_STACK_LINE(81)
		::openfl::media::SoundChannel tmp = ::haxegon::Music_obj::musicchannel;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(81)
		Dynamic tmp1 = ::haxegon::Music_obj::stopmusic_dyn();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(81)
		tmp->removeEventListener(HX_HCSTRING("soundComplete","\xa8","\x30","\xe6","\x1c"),tmp1,null());
		HX_STACK_LINE(82)
		::openfl::media::SoundChannel tmp2 = ::haxegon::Music_obj::musicchannel;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(82)
		tmp2->stop();
		HX_STACK_LINE(83)
		::haxegon::Music_obj::currentsong = HX_HCSTRING("nothing","\x0d","\x9c","\x5f","\x4f");
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Music_obj,stop,(void))

Void Music_obj::fadeout( ){
{
		HX_STACK_FRAME("haxegon.Music","fadeout",0x7c2a839b,"haxegon.Music.fadeout","haxegon/Music.hx",86,0xbb0c9da8)
		HX_STACK_LINE(87)
		int tmp = ::haxegon::Music_obj::musicfade;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(87)
		bool tmp1 = (tmp == (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(87)
		if ((tmp1)){
			HX_STACK_LINE(88)
			::haxegon::Music_obj::musicfade = (int)31;
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Music_obj,fadeout,(void))

Void Music_obj::init( ){
{
		HX_STACK_FRAME("haxegon.Music","init",0x8d70e867,"haxegon.Music.init","haxegon/Music.hx",92,0xbb0c9da8)
		HX_STACK_LINE(93)
		::haxegon::Music_obj::currentsong = HX_HCSTRING("nothing","\x0d","\x9c","\x5f","\x4f");
		HX_STACK_LINE(93)
		::haxegon::Music_obj::musicfade = (int)0;
		HX_STACK_LINE(94)
		::haxegon::Music_obj::currentefchan = (int)0;
		HX_STACK_LINE(95)
		::haxegon::Music_obj::usingtickertext = false;
		HX_STACK_LINE(97)
		::haxegon::Music_obj::globalsound = (int)1;
		HX_STACK_LINE(97)
		::haxegon::Music_obj::muted = false;
		HX_STACK_LINE(99)
		::haxegon::Music_obj::numplays = (int)0;
		HX_STACK_LINE(100)
		::haxegon::Music_obj::numeffects = (int)0;
		HX_STACK_LINE(101)
		::haxegon::Music_obj::numsongs = (int)0;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Music_obj,init,(void))

Void Music_obj::loopmusic( ::openfl::events::Event e){
{
		HX_STACK_FRAME("haxegon.Music","loopmusic",0xd97d170a,"haxegon.Music.loopmusic","haxegon/Music.hx",104,0xbb0c9da8)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(105)
		::openfl::media::SoundChannel tmp = ::haxegon::Music_obj::musicchannel;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(105)
		Dynamic tmp1 = ::haxegon::Music_obj::loopmusic_dyn();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(105)
		tmp->removeEventListener(HX_HCSTRING("soundComplete","\xa8","\x30","\xe6","\x1c"),tmp1,null());
		HX_STACK_LINE(106)
		::String tmp2 = ::haxegon::Music_obj::currentsong;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(106)
		bool tmp3 = (tmp2 != HX_HCSTRING("nothing","\x0d","\x9c","\x5f","\x4f"));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(106)
		if ((tmp3)){
			HX_STACK_LINE(107)
			::haxe::ds::StringMap tmp4 = ::haxegon::Music_obj::songindex;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(107)
			::String tmp5 = ::haxegon::Music_obj::currentsong;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(107)
			Dynamic tmp6 = tmp4->get(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(107)
			Dynamic tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(107)
			int tmp8 = ::Std_obj::_int(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(107)
			::openfl::media::Sound tmp9 = ::haxegon::Music_obj::musicchan->__get(tmp8).StaticCast< ::openfl::media::Sound >();		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(107)
			::openfl::media::SoundChannel tmp10 = tmp9->play((int)0,(int)999999,null());		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(107)
			::haxegon::Music_obj::musicchannel = tmp10;
			HX_STACK_LINE(108)
			::openfl::media::SoundChannel tmp11 = ::haxegon::Music_obj::musicchannel;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(108)
			::haxe::ds::StringMap tmp12 = ::haxegon::Music_obj::songindex;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(108)
			::String tmp13 = ::haxegon::Music_obj::currentsong;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(108)
			Dynamic tmp14 = tmp12->get(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(108)
			Dynamic tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(108)
			int tmp16 = ::Std_obj::_int(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(108)
			Float tmp17 = ::haxegon::Music_obj::songvolumelevels->__get(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(108)
			Float tmp18 = ::haxegon::Music_obj::globalsound;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(108)
			Float tmp19 = (tmp17 * tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(108)
			::openfl::media::SoundTransform tmp20 = ::openfl::media::SoundTransform_obj::__new(tmp19,null());		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(108)
			tmp11->set_soundTransform(tmp20);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Music_obj,loopmusic,(void))

Void Music_obj::stopmusic( ::openfl::events::Event e){
{
		HX_STACK_FRAME("haxegon.Music","stopmusic",0xbc1330ac,"haxegon.Music.stopmusic","haxegon/Music.hx",112,0xbb0c9da8)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(113)
		::openfl::media::SoundChannel tmp = ::haxegon::Music_obj::musicchannel;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(113)
		Dynamic tmp1 = ::haxegon::Music_obj::stopmusic_dyn();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(113)
		tmp->removeEventListener(HX_HCSTRING("soundComplete","\xa8","\x30","\xe6","\x1c"),tmp1,null());
		HX_STACK_LINE(114)
		::openfl::media::SoundChannel tmp2 = ::haxegon::Music_obj::musicchannel;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(114)
		tmp2->stop();
		HX_STACK_LINE(115)
		::haxegon::Music_obj::currentsong = HX_HCSTRING("nothing","\x0d","\x9c","\x5f","\x4f");
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Music_obj,stopmusic,(void))

Void Music_obj::processmusicfade( ){
{
		HX_STACK_FRAME("haxegon.Music","processmusicfade",0x44e12829,"haxegon.Music.processmusicfade","haxegon/Music.hx",118,0xbb0c9da8)
		HX_STACK_LINE(119)
		(::haxegon::Music_obj::musicfade)--;
		HX_STACK_LINE(120)
		::openfl::media::SoundChannel tmp = ::haxegon::Music_obj::musicchannel;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(120)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(120)
		if ((tmp1)){
			HX_STACK_LINE(121)
			int tmp2 = ::haxegon::Music_obj::musicfade;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(121)
			bool tmp3 = (tmp2 > (int)0);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(121)
			if ((tmp3)){
				HX_STACK_LINE(122)
				::openfl::media::SoundChannel tmp4 = ::haxegon::Music_obj::musicchannel;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(122)
				int tmp5 = ::haxegon::Music_obj::musicfade;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(122)
				Float tmp6 = (Float(tmp5) / Float((int)30));		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(122)
				Float tmp7 = ::haxegon::Music_obj::globalsound;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(122)
				Float tmp8 = (tmp6 * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(122)
				::openfl::media::SoundTransform tmp9 = ::openfl::media::SoundTransform_obj::__new(tmp8,null());		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(122)
				tmp4->set_soundTransform(tmp9);
			}
			else{
				HX_STACK_LINE(124)
				::openfl::media::SoundChannel tmp4 = ::haxegon::Music_obj::musicchannel;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(124)
				tmp4->stop();
				HX_STACK_LINE(125)
				::haxegon::Music_obj::currentsong = HX_HCSTRING("nothing","\x0d","\x9c","\x5f","\x4f");
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Music_obj,processmusicfade,(void))

Void Music_obj::processmusicfadein( ){
{
		HX_STACK_FRAME("haxegon.Music","processmusicfadein",0x1d9aa04e,"haxegon.Music.processmusicfadein","haxegon/Music.hx",130,0xbb0c9da8)
		HX_STACK_LINE(131)
		(::haxegon::Music_obj::musicfadein)--;
		HX_STACK_LINE(132)
		::openfl::media::SoundChannel tmp = ::haxegon::Music_obj::musicchannel;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(132)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(132)
		if ((tmp1)){
			HX_STACK_LINE(133)
			int tmp2 = ::haxegon::Music_obj::musicfadein;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(133)
			bool tmp3 = (tmp2 > (int)0);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(133)
			if ((tmp3)){
				HX_STACK_LINE(134)
				::openfl::media::SoundChannel tmp4 = ::haxegon::Music_obj::musicchannel;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(134)
				int tmp5 = ::haxegon::Music_obj::musicfadein;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(134)
				int tmp6 = ((int)60 - tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(134)
				Float tmp7 = (Float(tmp6) / Float((int)60));		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(134)
				Float tmp8 = ::haxegon::Music_obj::globalsound;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(134)
				Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(134)
				::openfl::media::SoundTransform tmp10 = ::openfl::media::SoundTransform_obj::__new(tmp9,null());		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(134)
				tmp4->set_soundTransform(tmp10);
			}
			else{
				HX_STACK_LINE(136)
				::openfl::media::SoundChannel tmp4 = ::haxegon::Music_obj::musicchannel;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(136)
				Float tmp5 = ::haxegon::Music_obj::globalsound;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(136)
				Float tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(136)
				::openfl::media::SoundTransform tmp7 = ::openfl::media::SoundTransform_obj::__new(tmp6,null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(136)
				tmp4->set_soundTransform(tmp7);
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Music_obj,processmusicfadein,(void))

Void Music_obj::processmusic( ){
{
		HX_STACK_FRAME("haxegon.Music","processmusic",0xbd97582d,"haxegon.Music.processmusic","haxegon/Music.hx",141,0xbb0c9da8)
		HX_STACK_LINE(142)
		int tmp = ::haxegon::Music_obj::musicfade;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(142)
		bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(142)
		if ((tmp1)){
			HX_STACK_LINE(142)
			::haxegon::Music_obj::processmusicfade();
		}
		HX_STACK_LINE(143)
		int tmp2 = ::haxegon::Music_obj::musicfadein;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(143)
		bool tmp3 = (tmp2 > (int)0);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(143)
		if ((tmp3)){
			HX_STACK_LINE(143)
			::haxegon::Music_obj::processmusicfadein();
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Music_obj,processmusic,(void))

Void Music_obj::updateallvolumes( ){
{
		HX_STACK_FRAME("haxegon.Music","updateallvolumes",0xa473f178,"haxegon.Music.updateallvolumes","haxegon/Music.hx",146,0xbb0c9da8)
		HX_STACK_LINE(149)
		::String tmp = ::haxegon::Music_obj::currentsong;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(149)
		bool tmp1 = (tmp != HX_HCSTRING("nothing","\x0d","\x9c","\x5f","\x4f"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(149)
		if ((tmp1)){
			HX_STACK_LINE(150)
			::openfl::media::SoundChannel tmp2 = ::haxegon::Music_obj::musicchannel;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(150)
			::haxe::ds::StringMap tmp3 = ::haxegon::Music_obj::songindex;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(150)
			::String tmp4 = ::haxegon::Music_obj::currentsong;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(150)
			Dynamic tmp5 = tmp3->get(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(150)
			Dynamic tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(150)
			int tmp7 = ::Std_obj::_int(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(150)
			Float tmp8 = ::haxegon::Music_obj::songvolumelevels->__get(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(150)
			Float tmp9 = ::haxegon::Music_obj::globalsound;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(150)
			Float tmp10 = (tmp8 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(150)
			::openfl::media::SoundTransform tmp11 = ::openfl::media::SoundTransform_obj::__new(tmp10,null());		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(150)
			tmp2->set_soundTransform(tmp11);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Music_obj,updateallvolumes,(void))

Void Music_obj::processmute( ){
{
		HX_STACK_FRAME("haxegon.Music","processmute",0x4a523051,"haxegon.Music.processmute","haxegon/Music.hx",156,0xbb0c9da8)
		HX_STACK_LINE(157)
		int tmp = ::haxegon::Text_obj::input_show;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(157)
		bool tmp1 = (tmp == (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(157)
		if ((tmp1)){
			HX_STACK_LINE(158)
			bool tmp2 = ::haxegon::Input_obj::justpressed(::haxegon::Key_obj::M);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(158)
			bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(158)
			if ((tmp2)){
				HX_STACK_LINE(158)
				int tmp4 = ::haxegon::Music_obj::mutebutton;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(158)
				int tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(158)
				tmp3 = (tmp5 <= (int)0);
			}
			else{
				HX_STACK_LINE(158)
				tmp3 = false;
			}
			HX_STACK_LINE(158)
			if ((tmp3)){
				HX_STACK_LINE(159)
				::haxegon::Music_obj::mutebutton = (int)2;
				HX_STACK_LINE(159)
				bool tmp4 = ::haxegon::Music_obj::muted;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(159)
				if ((tmp4)){
					HX_STACK_LINE(159)
					::haxegon::Music_obj::muted = false;
				}
				else{
					HX_STACK_LINE(159)
					::haxegon::Music_obj::muted = true;
				}
			}
			HX_STACK_LINE(161)
			int tmp4 = ::haxegon::Music_obj::mutebutton;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(161)
			bool tmp5 = (tmp4 > (int)0);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(161)
			bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(161)
			if ((tmp5)){
				HX_STACK_LINE(161)
				bool tmp7 = ::haxegon::Input_obj::pressed(::haxegon::Key_obj::M);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(161)
				bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(161)
				bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(161)
				tmp6 = !(tmp9);
			}
			else{
				HX_STACK_LINE(161)
				tmp6 = false;
			}
			HX_STACK_LINE(161)
			if ((tmp6)){
				HX_STACK_LINE(161)
				(::haxegon::Music_obj::mutebutton)--;
			}
		}
		HX_STACK_LINE(164)
		bool tmp2 = ::haxegon::Music_obj::muted;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(164)
		if ((tmp2)){
			HX_STACK_LINE(165)
			Float tmp3 = ::haxegon::Music_obj::globalsound;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(165)
			bool tmp4 = (tmp3 == (int)1);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(165)
			if ((tmp4)){
				HX_STACK_LINE(166)
				::haxegon::Music_obj::globalsound = (int)0;
				HX_STACK_LINE(167)
				::haxegon::Music_obj::updateallvolumes();
			}
		}
		HX_STACK_LINE(171)
		bool tmp3 = ::haxegon::Music_obj::muted;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(171)
		bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(171)
		bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(171)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(171)
		if ((tmp5)){
			HX_STACK_LINE(171)
			Float tmp7 = ::haxegon::Music_obj::globalsound;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(171)
			Float tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(171)
			tmp6 = (tmp8 < (int)1);
		}
		else{
			HX_STACK_LINE(171)
			tmp6 = false;
		}
		HX_STACK_LINE(171)
		if ((tmp6)){
			HX_STACK_LINE(172)
			hx::AddEq(::haxegon::Music_obj::globalsound,((Float)0.05));
			HX_STACK_LINE(173)
			Float tmp7 = ::haxegon::Music_obj::globalsound;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(173)
			bool tmp8 = (tmp7 > ((Float)1.0));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(173)
			if ((tmp8)){
				HX_STACK_LINE(173)
				::haxegon::Music_obj::globalsound = ((Float)1.0);
			}
			HX_STACK_LINE(174)
			::haxegon::Music_obj::updateallvolumes();
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Music_obj,processmute,(void))

Array< ::Dynamic > Music_obj::musicchan;

::openfl::media::SoundChannel Music_obj::musicchannel;

::String Music_obj::currentsong;

int Music_obj::musicfade;

int Music_obj::musicfadein;

::haxe::ds::StringMap Music_obj::effectindex;

Array< Float > Music_obj::volumelevels;

int Music_obj::numeffects;

::haxe::ds::StringMap Music_obj::songindex;

Array< Float > Music_obj::songvolumelevels;

int Music_obj::numsongs;

int Music_obj::currentefchan;

Array< ::Dynamic > Music_obj::efchannel;

Array< ::Dynamic > Music_obj::efchan;

int Music_obj::numplays;

bool Music_obj::usingtickertext;

::openfl::media::SoundTransform Music_obj::temptransform;

Float Music_obj::globalsound;

bool Music_obj::muted;

int Music_obj::mutebutton;


Music_obj::Music_obj()
{
}

bool Music_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"play") ) { outValue = play_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"stop") ) { outValue = stop_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"init") ) { outValue = init_dyn(); return true;  }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"muted") ) { outValue = muted; return true;  }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"efchan") ) { outValue = efchan; return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"fadeout") ) { outValue = fadeout_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"loadsong") ) { outValue = loadsong_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"numsongs") ) { outValue = numsongs; return true;  }
		if (HX_FIELD_EQ(inName,"numplays") ) { outValue = numplays; return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"playsound") ) { outValue = playsound_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"stopsound") ) { outValue = stopsound_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"loadsound") ) { outValue = loadsound_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"loopmusic") ) { outValue = loopmusic_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"stopmusic") ) { outValue = stopmusic_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"musicchan") ) { outValue = musicchan; return true;  }
		if (HX_FIELD_EQ(inName,"musicfade") ) { outValue = musicfade; return true;  }
		if (HX_FIELD_EQ(inName,"songindex") ) { outValue = songindex; return true;  }
		if (HX_FIELD_EQ(inName,"efchannel") ) { outValue = efchannel; return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"numeffects") ) { outValue = numeffects; return true;  }
		if (HX_FIELD_EQ(inName,"mutebutton") ) { outValue = mutebutton; return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"processmute") ) { outValue = processmute_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"currentsong") ) { outValue = currentsong; return true;  }
		if (HX_FIELD_EQ(inName,"musicfadein") ) { outValue = musicfadein; return true;  }
		if (HX_FIELD_EQ(inName,"effectindex") ) { outValue = effectindex; return true;  }
		if (HX_FIELD_EQ(inName,"globalsound") ) { outValue = globalsound; return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"processmusic") ) { outValue = processmusic_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"musicchannel") ) { outValue = musicchannel; return true;  }
		if (HX_FIELD_EQ(inName,"volumelevels") ) { outValue = volumelevels; return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"currentefchan") ) { outValue = currentefchan; return true;  }
		if (HX_FIELD_EQ(inName,"temptransform") ) { outValue = temptransform; return true;  }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"usingtickertext") ) { outValue = usingtickertext; return true;  }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"processmusicfade") ) { outValue = processmusicfade_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"updateallvolumes") ) { outValue = updateallvolumes_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"songvolumelevels") ) { outValue = songvolumelevels; return true;  }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"processmusicfadein") ) { outValue = processmusicfadein_dyn(); return true;  }
	}
	return false;
}

bool Music_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"muted") ) { muted=ioValue.Cast< bool >(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"efchan") ) { efchan=ioValue.Cast< Array< ::Dynamic > >(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"numsongs") ) { numsongs=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"numplays") ) { numplays=ioValue.Cast< int >(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"musicchan") ) { musicchan=ioValue.Cast< Array< ::Dynamic > >(); return true; }
		if (HX_FIELD_EQ(inName,"musicfade") ) { musicfade=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"songindex") ) { songindex=ioValue.Cast< ::haxe::ds::StringMap >(); return true; }
		if (HX_FIELD_EQ(inName,"efchannel") ) { efchannel=ioValue.Cast< Array< ::Dynamic > >(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"numeffects") ) { numeffects=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"mutebutton") ) { mutebutton=ioValue.Cast< int >(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"currentsong") ) { currentsong=ioValue.Cast< ::String >(); return true; }
		if (HX_FIELD_EQ(inName,"musicfadein") ) { musicfadein=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"effectindex") ) { effectindex=ioValue.Cast< ::haxe::ds::StringMap >(); return true; }
		if (HX_FIELD_EQ(inName,"globalsound") ) { globalsound=ioValue.Cast< Float >(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"musicchannel") ) { musicchannel=ioValue.Cast< ::openfl::media::SoundChannel >(); return true; }
		if (HX_FIELD_EQ(inName,"volumelevels") ) { volumelevels=ioValue.Cast< Array< Float > >(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"currentefchan") ) { currentefchan=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"temptransform") ) { temptransform=ioValue.Cast< ::openfl::media::SoundTransform >(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"usingtickertext") ) { usingtickertext=ioValue.Cast< bool >(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"songvolumelevels") ) { songvolumelevels=ioValue.Cast< Array< Float > >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*Array< ::Dynamic >*/ ,(void *) &Music_obj::musicchan,HX_HCSTRING("musicchan","\xf7","\xe5","\xdf","\xe0")},
	{hx::fsObject /*::openfl::media::SoundChannel*/ ,(void *) &Music_obj::musicchannel,HX_HCSTRING("musicchannel","\xbe","\xbe","\xf4","\xb5")},
	{hx::fsString,(void *) &Music_obj::currentsong,HX_HCSTRING("currentsong","\x8e","\xd0","\x10","\x9a")},
	{hx::fsInt,(void *) &Music_obj::musicfade,HX_HCSTRING("musicfade","\xa1","\x3c","\xd6","\xe2")},
	{hx::fsInt,(void *) &Music_obj::musicfadein,HX_HCSTRING("musicfadein","\xc6","\xc2","\x57","\xf2")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(void *) &Music_obj::effectindex,HX_HCSTRING("effectindex","\xe1","\x52","\xca","\x46")},
	{hx::fsObject /*Array< Float >*/ ,(void *) &Music_obj::volumelevels,HX_HCSTRING("volumelevels","\xc9","\xc7","\x2e","\x1d")},
	{hx::fsInt,(void *) &Music_obj::numeffects,HX_HCSTRING("numeffects","\x3c","\xfb","\x1a","\x91")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(void *) &Music_obj::songindex,HX_HCSTRING("songindex","\x1d","\x73","\x61","\x5a")},
	{hx::fsObject /*Array< Float >*/ ,(void *) &Music_obj::songvolumelevels,HX_HCSTRING("songvolumelevels","\x1e","\xd7","\xd7","\xe7")},
	{hx::fsInt,(void *) &Music_obj::numsongs,HX_HCSTRING("numsongs","\xf8","\xda","\xa9","\xaa")},
	{hx::fsInt,(void *) &Music_obj::currentefchan,HX_HCSTRING("currentefchan","\xac","\x08","\x72","\x0d")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(void *) &Music_obj::efchannel,HX_HCSTRING("efchannel","\x82","\xe6","\x29","\xd0")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(void *) &Music_obj::efchan,HX_HCSTRING("efchan","\xb3","\xfb","\xa9","\x5e")},
	{hx::fsInt,(void *) &Music_obj::numplays,HX_HCSTRING("numplays","\xf9","\xab","\x70","\xee")},
	{hx::fsBool,(void *) &Music_obj::usingtickertext,HX_HCSTRING("usingtickertext","\xfb","\xb8","\xfe","\xb9")},
	{hx::fsObject /*::openfl::media::SoundTransform*/ ,(void *) &Music_obj::temptransform,HX_HCSTRING("temptransform","\xd8","\x67","\x9a","\xd0")},
	{hx::fsFloat,(void *) &Music_obj::globalsound,HX_HCSTRING("globalsound","\x8c","\x74","\xdd","\xc5")},
	{hx::fsBool,(void *) &Music_obj::muted,HX_HCSTRING("muted","\x6b","\x8f","\x5b","\x10")},
	{hx::fsInt,(void *) &Music_obj::mutebutton,HX_HCSTRING("mutebutton","\x8b","\xf9","\xbd","\x74")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Music_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Music_obj::musicchan,"musicchan");
	HX_MARK_MEMBER_NAME(Music_obj::musicchannel,"musicchannel");
	HX_MARK_MEMBER_NAME(Music_obj::currentsong,"currentsong");
	HX_MARK_MEMBER_NAME(Music_obj::musicfade,"musicfade");
	HX_MARK_MEMBER_NAME(Music_obj::musicfadein,"musicfadein");
	HX_MARK_MEMBER_NAME(Music_obj::effectindex,"effectindex");
	HX_MARK_MEMBER_NAME(Music_obj::volumelevels,"volumelevels");
	HX_MARK_MEMBER_NAME(Music_obj::numeffects,"numeffects");
	HX_MARK_MEMBER_NAME(Music_obj::songindex,"songindex");
	HX_MARK_MEMBER_NAME(Music_obj::songvolumelevels,"songvolumelevels");
	HX_MARK_MEMBER_NAME(Music_obj::numsongs,"numsongs");
	HX_MARK_MEMBER_NAME(Music_obj::currentefchan,"currentefchan");
	HX_MARK_MEMBER_NAME(Music_obj::efchannel,"efchannel");
	HX_MARK_MEMBER_NAME(Music_obj::efchan,"efchan");
	HX_MARK_MEMBER_NAME(Music_obj::numplays,"numplays");
	HX_MARK_MEMBER_NAME(Music_obj::usingtickertext,"usingtickertext");
	HX_MARK_MEMBER_NAME(Music_obj::temptransform,"temptransform");
	HX_MARK_MEMBER_NAME(Music_obj::globalsound,"globalsound");
	HX_MARK_MEMBER_NAME(Music_obj::muted,"muted");
	HX_MARK_MEMBER_NAME(Music_obj::mutebutton,"mutebutton");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Music_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Music_obj::musicchan,"musicchan");
	HX_VISIT_MEMBER_NAME(Music_obj::musicchannel,"musicchannel");
	HX_VISIT_MEMBER_NAME(Music_obj::currentsong,"currentsong");
	HX_VISIT_MEMBER_NAME(Music_obj::musicfade,"musicfade");
	HX_VISIT_MEMBER_NAME(Music_obj::musicfadein,"musicfadein");
	HX_VISIT_MEMBER_NAME(Music_obj::effectindex,"effectindex");
	HX_VISIT_MEMBER_NAME(Music_obj::volumelevels,"volumelevels");
	HX_VISIT_MEMBER_NAME(Music_obj::numeffects,"numeffects");
	HX_VISIT_MEMBER_NAME(Music_obj::songindex,"songindex");
	HX_VISIT_MEMBER_NAME(Music_obj::songvolumelevels,"songvolumelevels");
	HX_VISIT_MEMBER_NAME(Music_obj::numsongs,"numsongs");
	HX_VISIT_MEMBER_NAME(Music_obj::currentefchan,"currentefchan");
	HX_VISIT_MEMBER_NAME(Music_obj::efchannel,"efchannel");
	HX_VISIT_MEMBER_NAME(Music_obj::efchan,"efchan");
	HX_VISIT_MEMBER_NAME(Music_obj::numplays,"numplays");
	HX_VISIT_MEMBER_NAME(Music_obj::usingtickertext,"usingtickertext");
	HX_VISIT_MEMBER_NAME(Music_obj::temptransform,"temptransform");
	HX_VISIT_MEMBER_NAME(Music_obj::globalsound,"globalsound");
	HX_VISIT_MEMBER_NAME(Music_obj::muted,"muted");
	HX_VISIT_MEMBER_NAME(Music_obj::mutebutton,"mutebutton");
};

#endif

hx::Class Music_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("playsound","\x5b","\x4a","\x83","\x0e"),
	HX_HCSTRING("stopsound","\x8d","\x55","\xe1","\xfd"),
	HX_HCSTRING("loadsound","\xe9","\x68","\xd6","\x08"),
	HX_HCSTRING("loadsong","\xfb","\xc8","\x1e","\xd2"),
	HX_HCSTRING("play","\xf4","\x2d","\x5a","\x4a"),
	HX_HCSTRING("stop","\x02","\xf0","\x5b","\x4c"),
	HX_HCSTRING("fadeout","\x92","\x80","\x54","\x31"),
	HX_HCSTRING("init","\x10","\x3b","\xbb","\x45"),
	HX_HCSTRING("loopmusic","\xc1","\x7f","\xd9","\xaa"),
	HX_HCSTRING("stopmusic","\x63","\x99","\x6f","\x8d"),
	HX_HCSTRING("processmusicfade","\x52","\x54","\x71","\xf8"),
	HX_HCSTRING("processmusicfadein","\xb7","\xe8","\xac","\xf6"),
	HX_HCSTRING("processmusic","\xd6","\xfb","\xe1","\x64"),
	HX_HCSTRING("updateallvolumes","\xa1","\x1d","\x04","\x58"),
	HX_HCSTRING("processmute","\xc8","\x74","\x23","\x7a"),
	HX_HCSTRING("musicchan","\xf7","\xe5","\xdf","\xe0"),
	HX_HCSTRING("musicchannel","\xbe","\xbe","\xf4","\xb5"),
	HX_HCSTRING("currentsong","\x8e","\xd0","\x10","\x9a"),
	HX_HCSTRING("musicfade","\xa1","\x3c","\xd6","\xe2"),
	HX_HCSTRING("musicfadein","\xc6","\xc2","\x57","\xf2"),
	HX_HCSTRING("effectindex","\xe1","\x52","\xca","\x46"),
	HX_HCSTRING("volumelevels","\xc9","\xc7","\x2e","\x1d"),
	HX_HCSTRING("numeffects","\x3c","\xfb","\x1a","\x91"),
	HX_HCSTRING("songindex","\x1d","\x73","\x61","\x5a"),
	HX_HCSTRING("songvolumelevels","\x1e","\xd7","\xd7","\xe7"),
	HX_HCSTRING("numsongs","\xf8","\xda","\xa9","\xaa"),
	HX_HCSTRING("currentefchan","\xac","\x08","\x72","\x0d"),
	HX_HCSTRING("efchannel","\x82","\xe6","\x29","\xd0"),
	HX_HCSTRING("efchan","\xb3","\xfb","\xa9","\x5e"),
	HX_HCSTRING("numplays","\xf9","\xab","\x70","\xee"),
	HX_HCSTRING("usingtickertext","\xfb","\xb8","\xfe","\xb9"),
	HX_HCSTRING("temptransform","\xd8","\x67","\x9a","\xd0"),
	HX_HCSTRING("globalsound","\x8c","\x74","\xdd","\xc5"),
	HX_HCSTRING("muted","\x6b","\x8f","\x5b","\x10"),
	HX_HCSTRING("mutebutton","\x8b","\xf9","\xbd","\x74"),
	::String(null()) };

void Music_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxegon.Music","\x77","\xb2","\x8b","\x17");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Music_obj::__GetStatic;
	__mClass->mSetStaticField = &Music_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Music_obj >;
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

void Music_obj::__boot()
{
	musicchan= Array_obj< ::Dynamic >::__new();
struct _Function_0_1{
	inline static ::haxe::ds::StringMap Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxegon/Music.hx",184,0xbb0c9da8)
		{
			HX_STACK_LINE(184)
			::haxe::ds::StringMap tmp = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(184)
			::haxe::ds::StringMap tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(184)
			return tmp1;
		}
		return null();
	}
};
	effectindex= _Function_0_1::Block();
	volumelevels= Array_obj< Float >::__new();
struct _Function_0_2{
	inline static ::haxe::ds::StringMap Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxegon/Music.hx",188,0xbb0c9da8)
		{
			HX_STACK_LINE(188)
			::haxe::ds::StringMap tmp = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(188)
			::haxe::ds::StringMap tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(188)
			return tmp1;
		}
		return null();
	}
};
	songindex= _Function_0_2::Block();
	songvolumelevels= Array_obj< Float >::__new();
	efchannel= Array_obj< ::Dynamic >::__new();
	efchan= Array_obj< ::Dynamic >::__new();
}

} // end namespace haxegon
