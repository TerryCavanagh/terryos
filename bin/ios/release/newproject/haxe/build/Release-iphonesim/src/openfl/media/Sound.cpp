#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_audio_AudioBuffer
#include <lime/audio/AudioBuffer.h>
#endif
#ifndef INCLUDED_lime_audio_AudioSource
#include <lime/audio/AudioSource.h>
#endif
#ifndef INCLUDED_lime_math_Vector4
#include <lime/math/Vector4.h>
#endif
#ifndef INCLUDED_lime_utils_ArrayBufferView
#include <lime/utils/ArrayBufferView.h>
#endif
#ifndef INCLUDED_openfl_events_ErrorEvent
#include <openfl/events/ErrorEvent.h>
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
#ifndef INCLUDED_openfl_events_IOErrorEvent
#include <openfl/events/IOErrorEvent.h>
#endif
#ifndef INCLUDED_openfl_events_TextEvent
#include <openfl/events/TextEvent.h>
#endif
#ifndef INCLUDED_openfl_media_ID3Info
#include <openfl/media/ID3Info.h>
#endif
#ifndef INCLUDED_openfl_media_Sound
#include <openfl/media/Sound.h>
#endif
#ifndef INCLUDED_openfl_media_SoundChannel
#include <openfl/media/SoundChannel.h>
#endif
#ifndef INCLUDED_openfl_media_SoundLoaderContext
#include <openfl/media/SoundLoaderContext.h>
#endif
#ifndef INCLUDED_openfl_media_SoundMixer
#include <openfl/media/SoundMixer.h>
#endif
#ifndef INCLUDED_openfl_media_SoundTransform
#include <openfl/media/SoundTransform.h>
#endif
#ifndef INCLUDED_openfl_net_URLRequest
#include <openfl/net/URLRequest.h>
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
namespace media{

Void Sound_obj::__construct(::openfl::net::URLRequest stream,::openfl::media::SoundLoaderContext context)
{
HX_STACK_FRAME("openfl.media.Sound","new",0xfdfd1c39,"openfl.media.Sound.new","openfl/media/Sound.hx",41,0x46a01619)
HX_STACK_THIS(this)
HX_STACK_ARG(stream,"stream")
HX_STACK_ARG(context,"context")
{
	HX_STACK_LINE(43)
	super::__construct(hx::ObjectPtr<OBJ_>(this));
	HX_STACK_LINE(45)
	this->bytesLoaded = (int)0;
	HX_STACK_LINE(46)
	this->bytesTotal = (int)0;
	HX_STACK_LINE(47)
	this->isBuffering = false;
	HX_STACK_LINE(48)
	this->url = null();
	HX_STACK_LINE(50)
	bool tmp = (stream != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(50)
	if ((tmp)){
		HX_STACK_LINE(52)
		::openfl::net::URLRequest tmp1 = stream;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(52)
		::openfl::media::SoundLoaderContext tmp2 = context;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(52)
		this->load(tmp1,tmp2);
	}
}
;
	return null();
}

//Sound_obj::~Sound_obj() { }

Dynamic Sound_obj::__CreateEmpty() { return  new Sound_obj; }
hx::ObjectPtr< Sound_obj > Sound_obj::__new(::openfl::net::URLRequest stream,::openfl::media::SoundLoaderContext context)
{  hx::ObjectPtr< Sound_obj > _result_ = new Sound_obj();
	_result_->__construct(stream,context);
	return _result_;}

Dynamic Sound_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Sound_obj > _result_ = new Sound_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

Void Sound_obj::close( ){
{
		HX_STACK_FRAME("openfl.media.Sound","close",0xfbd9cbd1,"openfl.media.Sound.close","openfl/media/Sound.hx",59,0x46a01619)
		HX_STACK_THIS(this)
		HX_STACK_LINE(63)
		::lime::audio::AudioBuffer tmp = this->__buffer;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(63)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(63)
		if ((tmp1)){
			HX_STACK_LINE(65)
			::lime::audio::AudioBuffer tmp2 = this->__buffer;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(65)
			tmp2->dispose();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Sound_obj,close,(void))

Void Sound_obj::load( ::openfl::net::URLRequest stream,::openfl::media::SoundLoaderContext context){
{
		HX_STACK_FRAME("openfl.media.Sound","load",0x3e30ac2d,"openfl.media.Sound.load","openfl/media/Sound.hx",99,0x46a01619)
		HX_STACK_THIS(this)
		HX_STACK_ARG(stream,"stream")
		HX_STACK_ARG(context,"context")
		HX_STACK_LINE(101)
		this->url = stream->url;
		HX_STACK_LINE(105)
		::String tmp = stream->url;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(105)
		Dynamic tmp1 = this->AudioBuffer_onURLLoad_dyn();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(105)
		::lime::audio::AudioBuffer_obj::fromURL(tmp,tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Sound_obj,load,(void))

Void Sound_obj::loadCompressedDataFromByteArray( ::openfl::utils::ByteArrayData bytes,int bytesLength,hx::Null< bool >  __o_forcePlayAsMusic){
bool forcePlayAsMusic = __o_forcePlayAsMusic.Default(false);
	HX_STACK_FRAME("openfl.media.Sound","loadCompressedDataFromByteArray",0x8f237f2f,"openfl.media.Sound.loadCompressedDataFromByteArray","openfl/media/Sound.hx",133,0x46a01619)
	HX_STACK_THIS(this)
	HX_STACK_ARG(bytes,"bytes")
	HX_STACK_ARG(bytesLength,"bytesLength")
	HX_STACK_ARG(forcePlayAsMusic,"forcePlayAsMusic")
{
		HX_STACK_LINE(139)
		::openfl::utils::ByteArrayData tmp = bytes;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(139)
		::haxe::io::Bytes tmp1 = ::openfl::utils::_ByteArray::ByteArray_Impl__obj::toArrayBuffer(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(139)
		::lime::audio::AudioBuffer tmp2 = ::lime::audio::AudioBuffer_obj::fromBytes(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(139)
		this->__buffer = tmp2;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Sound_obj,loadCompressedDataFromByteArray,(void))

Void Sound_obj::loadPCMFromByteArray( ::openfl::utils::ByteArrayData bytes,int samples,::String format,hx::Null< bool >  __o_stereo,hx::Null< Float >  __o_sampleRate){
bool stereo = __o_stereo.Default(true);
Float sampleRate = __o_sampleRate.Default(44100);
	HX_STACK_FRAME("openfl.media.Sound","loadPCMFromByteArray",0xb6cc217a,"openfl.media.Sound.loadPCMFromByteArray","openfl/media/Sound.hx",150,0x46a01619)
	HX_STACK_THIS(this)
	HX_STACK_ARG(bytes,"bytes")
	HX_STACK_ARG(samples,"samples")
	HX_STACK_ARG(format,"format")
	HX_STACK_ARG(stereo,"stereo")
	HX_STACK_ARG(sampleRate,"sampleRate")
{
		HX_STACK_LINE(156)
		::openfl::utils::ByteArrayData tmp = bytes;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(156)
		::haxe::io::Bytes tmp1 = ::openfl::utils::_ByteArray::ByteArray_Impl__obj::toArrayBuffer(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(156)
		::lime::audio::AudioBuffer tmp2 = ::lime::audio::AudioBuffer_obj::fromBytes(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(156)
		this->__buffer = tmp2;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(Sound_obj,loadPCMFromByteArray,(void))

::openfl::media::SoundChannel Sound_obj::play( hx::Null< Float >  __o_startTime,hx::Null< int >  __o_loops,::openfl::media::SoundTransform sndTransform){
Float startTime = __o_startTime.Default(((Float)0.0));
int loops = __o_loops.Default(0);
	HX_STACK_FRAME("openfl.media.Sound","play",0x40d33ffb,"openfl.media.Sound.play","openfl/media/Sound.hx",167,0x46a01619)
	HX_STACK_THIS(this)
	HX_STACK_ARG(startTime,"startTime")
	HX_STACK_ARG(loops,"loops")
	HX_STACK_ARG(sndTransform,"sndTransform")
{
		HX_STACK_LINE(169)
		bool tmp = (sndTransform == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(169)
		if ((tmp)){
			HX_STACK_LINE(171)
			::openfl::media::SoundTransform tmp1 = ::openfl::media::SoundTransform_obj::__new(null(),null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(171)
			sndTransform = tmp1;
		}
		else{
			HX_STACK_LINE(175)
			::openfl::media::SoundTransform tmp1 = sndTransform->clone();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(175)
			sndTransform = tmp1;
		}
		HX_STACK_LINE(179)
		::openfl::media::SoundTransform tmp1 = ::openfl::media::SoundMixer_obj::__soundTransform;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(179)
		Float tmp2 = tmp1->pan;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(179)
		Float tmp3 = sndTransform->pan;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(179)
		Float tmp4 = (tmp2 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(179)
		Float pan = tmp4;		HX_STACK_VAR(pan,"pan");
		HX_STACK_LINE(181)
		bool tmp5 = (pan > (int)1);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(181)
		if ((tmp5)){
			HX_STACK_LINE(181)
			pan = (int)1;
		}
		HX_STACK_LINE(182)
		bool tmp6 = (pan < (int)-1);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(182)
		if ((tmp6)){
			HX_STACK_LINE(182)
			pan = (int)-1;
		}
		HX_STACK_LINE(184)
		::openfl::media::SoundTransform tmp7 = ::openfl::media::SoundMixer_obj::__soundTransform;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(184)
		Float tmp8 = tmp7->volume;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(184)
		Float tmp9 = sndTransform->volume;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(184)
		Float tmp10 = (tmp8 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(184)
		Float volume = tmp10;		HX_STACK_VAR(volume,"volume");
		HX_STACK_LINE(188)
		::lime::audio::AudioBuffer tmp11 = this->__buffer;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(188)
		::lime::audio::AudioSource tmp12 = ::lime::audio::AudioSource_obj::__new(tmp11,null(),null(),null());		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(188)
		::lime::audio::AudioSource source = tmp12;		HX_STACK_VAR(source,"source");
		HX_STACK_LINE(189)
		Float tmp13 = (startTime * (int)1000);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(189)
		int tmp14 = ::Std_obj::_int(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(189)
		source->offset = tmp14;
		HX_STACK_LINE(190)
		bool tmp15 = (loops > (int)1);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(190)
		if ((tmp15)){
			HX_STACK_LINE(190)
			int tmp16 = (loops - (int)1);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(190)
			source->set_loops(tmp16);
		}
		HX_STACK_LINE(192)
		Float tmp16 = volume;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(192)
		source->set_gain(tmp16);
		HX_STACK_LINE(194)
		::lime::math::Vector4 tmp17 = source->get_position();		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(194)
		::lime::math::Vector4 position = tmp17;		HX_STACK_VAR(position,"position");
		HX_STACK_LINE(195)
		position->x = pan;
		HX_STACK_LINE(196)
		int tmp18 = (int)-1;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(196)
		Float tmp19 = pan;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(196)
		Float tmp20 = ::Math_obj::pow(tmp19,(int)2);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(196)
		Float tmp21 = ((int)1 - tmp20);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(196)
		Float tmp22 = ::Math_obj::sqrt(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(196)
		Float tmp23 = (tmp18 * tmp22);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(196)
		position->z = tmp23;
		HX_STACK_LINE(197)
		::lime::math::Vector4 tmp24 = position;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(197)
		source->set_position(tmp24);
		HX_STACK_LINE(199)
		::openfl::media::SoundChannel tmp25 = ::openfl::media::SoundChannel_obj::__new(source,sndTransform);		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(199)
		return tmp25;
	}
}


HX_DEFINE_DYNAMIC_FUNC3(Sound_obj,play,return )

::openfl::media::ID3Info Sound_obj::get_id3( ){
	HX_STACK_FRAME("openfl.media.Sound","get_id3",0xac6378e8,"openfl.media.Sound.get_id3","openfl/media/Sound.hx",240,0x46a01619)
	HX_STACK_THIS(this)
	HX_STACK_LINE(242)
	::openfl::media::ID3Info tmp = ::openfl::media::ID3Info_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(242)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Sound_obj,get_id3,return )

int Sound_obj::get_length( ){
	HX_STACK_FRAME("openfl.media.Sound","get_length",0xcc37d5f6,"openfl.media.Sound.get_length","openfl/media/Sound.hx",247,0x46a01619)
	HX_STACK_THIS(this)
	HX_STACK_LINE(249)
	::lime::audio::AudioBuffer tmp = this->__buffer;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(249)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(249)
	if ((tmp1)){
		HX_STACK_LINE(257)
		::lime::audio::AudioBuffer tmp2 = this->__buffer;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(257)
		int tmp3 = tmp2->data->length;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(257)
		int tmp4 = (tmp3 * (int)8);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(257)
		::lime::audio::AudioBuffer tmp5 = this->__buffer;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(257)
		int tmp6 = tmp5->channels;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(257)
		::lime::audio::AudioBuffer tmp7 = this->__buffer;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(257)
		int tmp8 = tmp7->bitsPerSample;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(257)
		int tmp9 = (tmp6 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(257)
		Float tmp10 = (Float(tmp4) / Float(tmp9));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(257)
		Float samples = tmp10;		HX_STACK_VAR(samples,"samples");
		HX_STACK_LINE(258)
		Float tmp11 = samples;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(258)
		::lime::audio::AudioBuffer tmp12 = this->__buffer;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(258)
		int tmp13 = tmp12->sampleRate;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(258)
		Float tmp14 = (Float(tmp11) / Float(tmp13));		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(258)
		Float tmp15 = (tmp14 * (int)1000);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(258)
		int tmp16 = ::Std_obj::_int(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(258)
		return tmp16;
	}
	HX_STACK_LINE(264)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(Sound_obj,get_length,return )

Void Sound_obj::AudioBuffer_onURLLoad( ::lime::audio::AudioBuffer buffer){
{
		HX_STACK_FRAME("openfl.media.Sound","AudioBuffer_onURLLoad",0x80e63186,"openfl.media.Sound.AudioBuffer_onURLLoad","openfl/media/Sound.hx",276,0x46a01619)
		HX_STACK_THIS(this)
		HX_STACK_ARG(buffer,"buffer")
		HX_STACK_LINE(278)
		bool tmp = (buffer == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(278)
		if ((tmp)){
			HX_STACK_LINE(280)
			::openfl::events::IOErrorEvent tmp1 = ::openfl::events::IOErrorEvent_obj::__new(HX_HCSTRING("ioError","\x02","\xfe","\x41","\x76"),null(),null(),null(),null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(280)
			this->dispatchEvent(tmp1);
		}
		else{
			HX_STACK_LINE(284)
			this->__buffer = buffer;
			HX_STACK_LINE(285)
			::openfl::events::Event tmp1 = ::openfl::events::Event_obj::__new(HX_HCSTRING("complete","\xb9","\x00","\xc8","\x7f"),null(),null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(285)
			this->dispatchEvent(tmp1);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Sound_obj,AudioBuffer_onURLLoad,(void))

::openfl::media::Sound Sound_obj::fromAudioBuffer( ::lime::audio::AudioBuffer buffer){
	HX_STACK_FRAME("openfl.media.Sound","fromAudioBuffer",0xa9f89285,"openfl.media.Sound.fromAudioBuffer","openfl/media/Sound.hx",83,0x46a01619)
	HX_STACK_ARG(buffer,"buffer")
	HX_STACK_LINE(85)
	::openfl::media::Sound tmp = ::openfl::media::Sound_obj::__new(null(),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(85)
	::openfl::media::Sound sound = tmp;		HX_STACK_VAR(sound,"sound");
	HX_STACK_LINE(86)
	sound->__buffer = buffer;
	HX_STACK_LINE(87)
	::openfl::media::Sound tmp1 = sound;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(87)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Sound_obj,fromAudioBuffer,return )

::openfl::media::Sound Sound_obj::fromFile( ::String path){
	HX_STACK_FRAME("openfl.media.Sound","fromFile",0x06bfbe8d,"openfl.media.Sound.fromFile","openfl/media/Sound.hx",92,0x46a01619)
	HX_STACK_ARG(path,"path")
	HX_STACK_LINE(94)
	::String tmp = path;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(94)
	::lime::audio::AudioBuffer tmp1 = ::lime::audio::AudioBuffer_obj::fromFile(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(94)
	::openfl::media::Sound tmp2 = ::openfl::media::Sound_obj::fromAudioBuffer(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(94)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Sound_obj,fromFile,return )


Sound_obj::Sound_obj()
{
}

void Sound_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Sound);
	HX_MARK_MEMBER_NAME(bytesLoaded,"bytesLoaded");
	HX_MARK_MEMBER_NAME(bytesTotal,"bytesTotal");
	HX_MARK_MEMBER_NAME(isBuffering,"isBuffering");
	HX_MARK_MEMBER_NAME(url,"url");
	HX_MARK_MEMBER_NAME(__buffer,"__buffer");
	::openfl::events::EventDispatcher_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Sound_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(bytesLoaded,"bytesLoaded");
	HX_VISIT_MEMBER_NAME(bytesTotal,"bytesTotal");
	HX_VISIT_MEMBER_NAME(isBuffering,"isBuffering");
	HX_VISIT_MEMBER_NAME(url,"url");
	HX_VISIT_MEMBER_NAME(__buffer,"__buffer");
	::openfl::events::EventDispatcher_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Sound_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"id3") ) { if (inCallProp == hx::paccAlways) return get_id3(); }
		if (HX_FIELD_EQ(inName,"url") ) { return url; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"load") ) { return load_dyn(); }
		if (HX_FIELD_EQ(inName,"play") ) { return play_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"close") ) { return close_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { if (inCallProp == hx::paccAlways) return get_length(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"get_id3") ) { return get_id3_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__buffer") ) { return __buffer; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bytesTotal") ) { return bytesTotal; }
		if (HX_FIELD_EQ(inName,"get_length") ) { return get_length_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"bytesLoaded") ) { return bytesLoaded; }
		if (HX_FIELD_EQ(inName,"isBuffering") ) { return isBuffering; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"loadPCMFromByteArray") ) { return loadPCMFromByteArray_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"AudioBuffer_onURLLoad") ) { return AudioBuffer_onURLLoad_dyn(); }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"loadCompressedDataFromByteArray") ) { return loadCompressedDataFromByteArray_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool Sound_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"fromFile") ) { outValue = fromFile_dyn(); return true;  }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"fromAudioBuffer") ) { outValue = fromAudioBuffer_dyn(); return true;  }
	}
	return false;
}

Dynamic Sound_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"url") ) { url=inValue.Cast< ::String >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__buffer") ) { __buffer=inValue.Cast< ::lime::audio::AudioBuffer >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bytesTotal") ) { bytesTotal=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"bytesLoaded") ) { bytesLoaded=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"isBuffering") ) { isBuffering=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Sound_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("bytesLoaded","\xd0","\x66","\xca","\x99"));
	outFields->push(HX_HCSTRING("bytesTotal","\x59","\x57","\xda","\x45"));
	outFields->push(HX_HCSTRING("id3","\xf8","\x03","\x50","\x00"));
	outFields->push(HX_HCSTRING("isBuffering","\x98","\x26","\x10","\x90"));
	outFields->push(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"));
	outFields->push(HX_HCSTRING("url","\x6f","\x2b","\x59","\x00"));
	outFields->push(HX_HCSTRING("__buffer","\x20","\x28","\xc4","\x78"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(Sound_obj,bytesLoaded),HX_HCSTRING("bytesLoaded","\xd0","\x66","\xca","\x99")},
	{hx::fsInt,(int)offsetof(Sound_obj,bytesTotal),HX_HCSTRING("bytesTotal","\x59","\x57","\xda","\x45")},
	{hx::fsBool,(int)offsetof(Sound_obj,isBuffering),HX_HCSTRING("isBuffering","\x98","\x26","\x10","\x90")},
	{hx::fsString,(int)offsetof(Sound_obj,url),HX_HCSTRING("url","\x6f","\x2b","\x59","\x00")},
	{hx::fsObject /*::lime::audio::AudioBuffer*/ ,(int)offsetof(Sound_obj,__buffer),HX_HCSTRING("__buffer","\x20","\x28","\xc4","\x78")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("bytesLoaded","\xd0","\x66","\xca","\x99"),
	HX_HCSTRING("bytesTotal","\x59","\x57","\xda","\x45"),
	HX_HCSTRING("isBuffering","\x98","\x26","\x10","\x90"),
	HX_HCSTRING("url","\x6f","\x2b","\x59","\x00"),
	HX_HCSTRING("__buffer","\x20","\x28","\xc4","\x78"),
	HX_HCSTRING("close","\xb8","\x17","\x63","\x48"),
	HX_HCSTRING("load","\x26","\x9a","\xb7","\x47"),
	HX_HCSTRING("loadCompressedDataFromByteArray","\xd6","\x4f","\x5d","\xa0"),
	HX_HCSTRING("loadPCMFromByteArray","\x73","\x51","\xe4","\xc4"),
	HX_HCSTRING("play","\xf4","\x2d","\x5a","\x4a"),
	HX_HCSTRING("get_id3","\x8f","\xcc","\xc4","\x26"),
	HX_HCSTRING("get_length","\xaf","\x04","\x8f","\x8f"),
	HX_HCSTRING("AudioBuffer_onURLLoad","\x6d","\xfb","\xf7","\xc7"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Sound_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Sound_obj::__mClass,"__mClass");
};

#endif

hx::Class Sound_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("fromAudioBuffer","\x2c","\x65","\xe0","\xcd"),
	HX_HCSTRING("fromFile","\x06","\x9d","\x87","\xa1"),
	::String(null()) };

void Sound_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.media.Sound","\xc7","\x8b","\xe2","\x7e");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Sound_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Sound_obj >;
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

} // end namespace openfl
} // end namespace media
