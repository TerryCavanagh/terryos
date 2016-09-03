#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_Timer
#include <haxe/Timer.h>
#endif
#ifndef INCLUDED_lime_app_Event_Void_Void
#include <lime/app/Event_Void_Void.h>
#endif
#ifndef INCLUDED_lime_audio_ALAudioContext
#include <lime/audio/ALAudioContext.h>
#endif
#ifndef INCLUDED_lime_audio_ALCAudioContext
#include <lime/audio/ALCAudioContext.h>
#endif
#ifndef INCLUDED_lime_audio_AudioBuffer
#include <lime/audio/AudioBuffer.h>
#endif
#ifndef INCLUDED_lime_audio_AudioContext
#include <lime/audio/AudioContext.h>
#endif
#ifndef INCLUDED_lime_audio_AudioManager
#include <lime/audio/AudioManager.h>
#endif
#ifndef INCLUDED_lime_audio_AudioSource
#include <lime/audio/AudioSource.h>
#endif
#ifndef INCLUDED_lime_audio_openal_AL
#include <lime/audio/openal/AL.h>
#endif
#ifndef INCLUDED_lime_math_Vector4
#include <lime/math/Vector4.h>
#endif
#ifndef INCLUDED_lime_utils_ArrayBufferView
#include <lime/utils/ArrayBufferView.h>
#endif
namespace lime{
namespace audio{

Void AudioSource_obj::__construct(::lime::audio::AudioBuffer buffer,hx::Null< int >  __o_offset,Dynamic length,hx::Null< int >  __o_loops)
{
HX_STACK_FRAME("lime.audio.AudioSource","new",0x2bd91bf2,"lime.audio.AudioSource.new","lime/audio/AudioSource.hx",28,0x17352e00)
HX_STACK_THIS(this)
HX_STACK_ARG(buffer,"buffer")
HX_STACK_ARG(__o_offset,"offset")
HX_STACK_ARG(length,"length")
HX_STACK_ARG(__o_loops,"loops")
int offset = __o_offset.Default(0);
int loops = __o_loops.Default(0);
{
	HX_STACK_LINE(31)
	this->onComplete = ::lime::app::Event_Void_Void_obj::__new();
	HX_STACK_LINE(62)
	this->buffer = buffer;
	HX_STACK_LINE(63)
	this->offset = offset;
	HX_STACK_LINE(65)
	bool tmp = (length != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(65)
	bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(65)
	if ((tmp)){
		HX_STACK_LINE(65)
		tmp1 = (length != (int)0);
	}
	else{
		HX_STACK_LINE(65)
		tmp1 = false;
	}
	HX_STACK_LINE(65)
	if ((tmp1)){
		HX_STACK_LINE(67)
		Dynamic tmp2 = length;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(67)
		this->set_length(tmp2);
	}
	HX_STACK_LINE(71)
	int tmp2 = loops;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(71)
	this->set_loops(tmp2);
	HX_STACK_LINE(72)
	this->id = (int)0;
	HX_STACK_LINE(74)
	::lime::math::Vector4 tmp3 = ::lime::math::Vector4_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(74)
	this->__position = tmp3;
	HX_STACK_LINE(76)
	bool tmp4 = (buffer != null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(76)
	if ((tmp4)){
		HX_STACK_LINE(78)
		this->init();
	}
}
;
	return null();
}

//AudioSource_obj::~AudioSource_obj() { }

Dynamic AudioSource_obj::__CreateEmpty() { return  new AudioSource_obj; }
hx::ObjectPtr< AudioSource_obj > AudioSource_obj::__new(::lime::audio::AudioBuffer buffer,hx::Null< int >  __o_offset,Dynamic length,hx::Null< int >  __o_loops)
{  hx::ObjectPtr< AudioSource_obj > _result_ = new AudioSource_obj();
	_result_->__construct(buffer,__o_offset,length,__o_loops);
	return _result_;}

Dynamic AudioSource_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AudioSource_obj > _result_ = new AudioSource_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _result_;}

Void AudioSource_obj::dispose( ){
{
		HX_STACK_FRAME("lime.audio.AudioSource","dispose",0xab53fd31,"lime.audio.AudioSource.dispose","lime/audio/AudioSource.hx",87,0x17352e00)
		HX_STACK_THIS(this)
		HX_STACK_LINE(87)
		{
			HX_STACK_LINE(87)
			::lime::audio::AudioContext tmp = ::lime::audio::AudioManager_obj::context;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(87)
			::lime::audio::AudioContext _g = tmp;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(87)
			switch( (int)(_g->__Index())){
				case (int)0: {
					HX_STACK_LINE(87)
					::lime::audio::ALAudioContext tmp1 = (::lime::audio::AudioContext(_g))->__Param(1);		HX_STACK_VAR(tmp1,"tmp1");
					HX_STACK_LINE(87)
					::lime::audio::ALAudioContext al = tmp1;		HX_STACK_VAR(al,"al");
					HX_STACK_LINE(87)
					::lime::audio::ALCAudioContext tmp2 = (::lime::audio::AudioContext(_g))->__Param(0);		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(87)
					::lime::audio::ALCAudioContext alc = tmp2;		HX_STACK_VAR(alc,"alc");
					HX_STACK_LINE(89)
					{
						HX_STACK_LINE(91)
						int tmp3 = this->id;		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(91)
						int tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(91)
						bool tmp5 = (tmp4 != (int)0);		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(91)
						if ((tmp5)){
							HX_STACK_LINE(93)
							int tmp6 = this->id;		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(93)
							al->deleteSource(tmp6);
						}
					}
				}
				;break;
				default: {
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(AudioSource_obj,dispose,(void))

Void AudioSource_obj::init( ){
{
		HX_STACK_FRAME("lime.audio.AudioSource","init",0x2ed80f3e,"lime.audio.AudioSource.init","lime/audio/AudioSource.hx",106,0x17352e00)
		HX_STACK_THIS(this)
		HX_STACK_LINE(106)
		{
			HX_STACK_LINE(106)
			::lime::audio::AudioContext tmp = ::lime::audio::AudioManager_obj::context;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(106)
			::lime::audio::AudioContext _g = tmp;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(106)
			switch( (int)(_g->__Index())){
				case (int)0: {
					HX_STACK_LINE(106)
					::lime::audio::ALAudioContext tmp1 = (::lime::audio::AudioContext(_g))->__Param(1);		HX_STACK_VAR(tmp1,"tmp1");
					HX_STACK_LINE(106)
					::lime::audio::ALAudioContext al = tmp1;		HX_STACK_VAR(al,"al");
					HX_STACK_LINE(106)
					::lime::audio::ALCAudioContext tmp2 = (::lime::audio::AudioContext(_g))->__Param(0);		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(106)
					::lime::audio::ALCAudioContext alc = tmp2;		HX_STACK_VAR(alc,"alc");
					HX_STACK_LINE(108)
					{
						HX_STACK_LINE(110)
						::lime::audio::AudioBuffer tmp3 = this->buffer;		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(110)
						int tmp4 = tmp3->id;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(110)
						bool tmp5 = (tmp4 == (int)0);		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(110)
						if ((tmp5)){
							HX_STACK_LINE(112)
							int tmp6 = al->genBuffer();		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(112)
							::lime::audio::AudioBuffer tmp7 = this->buffer;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(112)
							tmp7->id = tmp6;
							HX_STACK_LINE(114)
							int format = (int)0;		HX_STACK_VAR(format,"format");
							HX_STACK_LINE(116)
							::lime::audio::AudioBuffer tmp8 = this->buffer;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(116)
							int tmp9 = tmp8->channels;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(116)
							bool tmp10 = (tmp9 == (int)1);		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(116)
							if ((tmp10)){
								HX_STACK_LINE(118)
								::lime::audio::AudioBuffer tmp11 = this->buffer;		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(118)
								int tmp12 = tmp11->bitsPerSample;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(118)
								bool tmp13 = (tmp12 == (int)8);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(118)
								if ((tmp13)){
									HX_STACK_LINE(120)
									format = al->FORMAT_MONO8;
								}
								else{
									HX_STACK_LINE(122)
									::lime::audio::AudioBuffer tmp14 = this->buffer;		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(122)
									int tmp15 = tmp14->bitsPerSample;		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(122)
									bool tmp16 = (tmp15 == (int)16);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(122)
									if ((tmp16)){
										HX_STACK_LINE(124)
										format = al->FORMAT_MONO16;
									}
								}
							}
							else{
								HX_STACK_LINE(128)
								::lime::audio::AudioBuffer tmp11 = this->buffer;		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(128)
								int tmp12 = tmp11->channels;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(128)
								bool tmp13 = (tmp12 == (int)2);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(128)
								if ((tmp13)){
									HX_STACK_LINE(130)
									::lime::audio::AudioBuffer tmp14 = this->buffer;		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(130)
									int tmp15 = tmp14->bitsPerSample;		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(130)
									bool tmp16 = (tmp15 == (int)8);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(130)
									if ((tmp16)){
										HX_STACK_LINE(132)
										format = al->FORMAT_STEREO8;
									}
									else{
										HX_STACK_LINE(134)
										::lime::audio::AudioBuffer tmp17 = this->buffer;		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(134)
										int tmp18 = tmp17->bitsPerSample;		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(134)
										bool tmp19 = (tmp18 == (int)16);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(134)
										if ((tmp19)){
											HX_STACK_LINE(136)
											format = al->FORMAT_STEREO16;
										}
									}
								}
							}
							HX_STACK_LINE(142)
							::lime::audio::AudioBuffer tmp11 = this->buffer;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(142)
							int tmp12 = tmp11->id;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(142)
							int tmp13 = format;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(142)
							::lime::audio::AudioBuffer tmp14 = this->buffer;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(142)
							::lime::utils::ArrayBufferView tmp15 = tmp14->data;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(142)
							::lime::audio::AudioBuffer tmp16 = this->buffer;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(142)
							int tmp17 = tmp16->data->length;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(142)
							::lime::audio::AudioBuffer tmp18 = this->buffer;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(142)
							int tmp19 = tmp18->sampleRate;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(142)
							al->bufferData(tmp12,tmp13,tmp15,tmp17,tmp19);
						}
						HX_STACK_LINE(146)
						int tmp6 = al->genSource();		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(146)
						this->id = tmp6;
						HX_STACK_LINE(147)
						int tmp7 = this->id;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(147)
						int tmp8 = al->BUFFER;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(147)
						::lime::audio::AudioBuffer tmp9 = this->buffer;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(147)
						int tmp10 = tmp9->id;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(147)
						al->sourcei(tmp7,tmp8,tmp10);
					}
				}
				;break;
				default: {
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(AudioSource_obj,init,(void))

Void AudioSource_obj::play( ){
{
		HX_STACK_FRAME("lime.audio.AudioSource","play",0x33770222,"lime.audio.AudioSource.play","lime/audio/AudioSource.hx",156,0x17352e00)
		HX_STACK_THIS(this)
		HX_STACK_LINE(190)
		bool tmp = this->playing;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(190)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(190)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(190)
		if ((tmp1)){
			HX_STACK_LINE(190)
			int tmp3 = this->id;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(190)
			int tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(190)
			int tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(190)
			tmp2 = (tmp5 == (int)0);
		}
		else{
			HX_STACK_LINE(190)
			tmp2 = true;
		}
		HX_STACK_LINE(190)
		if ((tmp2)){
			HX_STACK_LINE(192)
			return null();
		}
		HX_STACK_LINE(196)
		this->playing = true;
		HX_STACK_LINE(198)
		int tmp3 = this->get_currentTime();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(198)
		int time = tmp3;		HX_STACK_VAR(time,"time");
		HX_STACK_LINE(200)
		int tmp4 = this->id;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(200)
		::lime::audio::openal::AL_obj::sourcePlay(tmp4);
		HX_STACK_LINE(202)
		int tmp5 = time;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(202)
		this->set_currentTime(tmp5);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(AudioSource_obj,play,(void))

Void AudioSource_obj::pause( ){
{
		HX_STACK_FRAME("lime.audio.AudioSource","pause",0xcd74ab08,"lime.audio.AudioSource.pause","lime/audio/AudioSource.hx",209,0x17352e00)
		HX_STACK_THIS(this)
		HX_STACK_LINE(231)
		this->playing = false;
		HX_STACK_LINE(232)
		int tmp = this->id;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(232)
		::lime::audio::openal::AL_obj::sourcePause(tmp);
		HX_STACK_LINE(234)
		::haxe::Timer tmp1 = this->timer;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(234)
		bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(234)
		if ((tmp2)){
			HX_STACK_LINE(236)
			::haxe::Timer tmp3 = this->timer;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(236)
			tmp3->stop();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(AudioSource_obj,pause,(void))

Void AudioSource_obj::stop( ){
{
		HX_STACK_FRAME("lime.audio.AudioSource","stop",0x3578c430,"lime.audio.AudioSource.stop","lime/audio/AudioSource.hx",245,0x17352e00)
		HX_STACK_THIS(this)
		HX_STACK_LINE(268)
		this->playing = false;
		HX_STACK_LINE(269)
		int tmp = this->id;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(269)
		::lime::audio::openal::AL_obj::sourceStop(tmp);
		HX_STACK_LINE(271)
		::haxe::Timer tmp1 = this->timer;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(271)
		bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(271)
		if ((tmp2)){
			HX_STACK_LINE(273)
			::haxe::Timer tmp3 = this->timer;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(273)
			tmp3->stop();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(AudioSource_obj,stop,(void))

Void AudioSource_obj::timer_onRun( ){
{
		HX_STACK_FRAME("lime.audio.AudioSource","timer_onRun",0x17df51c4,"lime.audio.AudioSource.timer_onRun","lime/audio/AudioSource.hx",371,0x17352e00)
		HX_STACK_THIS(this)
		HX_STACK_LINE(375)
		this->playing = false;
		HX_STACK_LINE(377)
		int tmp = this->get_loops();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(377)
		bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(377)
		if ((tmp1)){
			HX_STACK_LINE(379)
			{
				HX_STACK_LINE(379)
				::lime::audio::AudioSource _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(379)
				int tmp2 = _g->get_loops();		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(379)
				int _g1 = tmp2;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(379)
				int tmp3 = (_g1 - (int)1);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(379)
				_g->set_loops(tmp3);
				HX_STACK_LINE(379)
				_g1;
			}
			HX_STACK_LINE(380)
			this->set_currentTime((int)0);
			HX_STACK_LINE(381)
			this->play();
			HX_STACK_LINE(382)
			return null();
		}
		else{
			HX_STACK_LINE(386)
			int tmp2 = this->id;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(386)
			::lime::audio::openal::AL_obj::sourceStop(tmp2);
			HX_STACK_LINE(387)
			::haxe::Timer tmp3 = this->timer;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(387)
			tmp3->stop();
		}
		HX_STACK_LINE(391)
		::lime::app::Event_Void_Void tmp2 = this->onComplete;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(391)
		tmp2->dispatch();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(AudioSource_obj,timer_onRun,(void))

int AudioSource_obj::get_currentTime( ){
	HX_STACK_FRAME("lime.audio.AudioSource","get_currentTime",0x5201bb0f,"lime.audio.AudioSource.get_currentTime","lime/audio/AudioSource.hx",405,0x17352e00)
	HX_STACK_THIS(this)
	HX_STACK_LINE(422)
	int tmp = this->id;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(422)
	Float tmp1 = ::lime::audio::openal::AL_obj::getSourcef(tmp,(int)4132);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(422)
	Float tmp2 = (tmp1 * (int)1000);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(422)
	int tmp3 = ::Std_obj::_int(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(422)
	int tmp4 = this->offset;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(422)
	int tmp5 = (tmp3 - tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(422)
	int time = tmp5;		HX_STACK_VAR(time,"time");
	HX_STACK_LINE(423)
	bool tmp6 = (time < (int)0);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(423)
	if ((tmp6)){
		HX_STACK_LINE(423)
		return (int)0;
	}
	HX_STACK_LINE(424)
	int tmp7 = time;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(424)
	return tmp7;
}


HX_DEFINE_DYNAMIC_FUNC0(AudioSource_obj,get_currentTime,return )

int AudioSource_obj::set_currentTime( int value){
	HX_STACK_FRAME("lime.audio.AudioSource","set_currentTime",0x4dcd381b,"lime.audio.AudioSource.set_currentTime","lime/audio/AudioSource.hx",431,0x17352e00)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(450)
	::lime::audio::AudioBuffer tmp = this->buffer;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(450)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(450)
	if ((tmp1)){
		HX_STACK_LINE(452)
		int tmp2 = this->id;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(452)
		::lime::audio::openal::AL_obj::sourceRewind(tmp2);
		HX_STACK_LINE(453)
		bool tmp3 = this->playing;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(453)
		if ((tmp3)){
			HX_STACK_LINE(453)
			int tmp4 = this->id;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(453)
			::lime::audio::openal::AL_obj::sourcePlay(tmp4);
		}
		HX_STACK_LINE(454)
		int tmp4 = this->id;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(454)
		int tmp5 = value;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(454)
		int tmp6 = this->offset;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(454)
		int tmp7 = (tmp5 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(454)
		Float tmp8 = (Float(tmp7) / Float((int)1000));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(454)
		::lime::audio::openal::AL_obj::sourcef(tmp4,(int)4132,tmp8);
	}
	HX_STACK_LINE(458)
	bool tmp2 = this->playing;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(458)
	if ((tmp2)){
		HX_STACK_LINE(460)
		::haxe::Timer tmp3 = this->timer;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(460)
		bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(460)
		if ((tmp4)){
			HX_STACK_LINE(462)
			::haxe::Timer tmp5 = this->timer;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(462)
			tmp5->stop();
		}
		HX_STACK_LINE(466)
		int tmp5 = this->get_length();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(466)
		int tmp6 = value;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(466)
		int tmp7 = this->offset;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(466)
		int tmp8 = (tmp6 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(466)
		int tmp9 = (tmp5 - tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(466)
		int timeRemaining = tmp9;		HX_STACK_VAR(timeRemaining,"timeRemaining");
		HX_STACK_LINE(468)
		bool tmp10 = (timeRemaining > (int)0);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(468)
		if ((tmp10)){
			HX_STACK_LINE(470)
			::haxe::Timer tmp11 = ::haxe::Timer_obj::__new(timeRemaining);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(470)
			this->timer = tmp11;
			HX_STACK_LINE(471)
			Dynamic tmp12 = this->timer_onRun_dyn();		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(471)
			::haxe::Timer tmp13 = this->timer;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(471)
			tmp13->run = tmp12;
		}
	}
	HX_STACK_LINE(477)
	int tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(477)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(AudioSource_obj,set_currentTime,return )

Float AudioSource_obj::get_gain( ){
	HX_STACK_FRAME("lime.audio.AudioSource","get_gain",0xda9f2f36,"lime.audio.AudioSource.get_gain","lime/audio/AudioSource.hx",484,0x17352e00)
	HX_STACK_THIS(this)
	HX_STACK_LINE(506)
	int tmp = this->id;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(506)
	Float tmp1 = ::lime::audio::openal::AL_obj::getSourcef(tmp,(int)4106);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(506)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(AudioSource_obj,get_gain,return )

Float AudioSource_obj::set_gain( Float value){
	HX_STACK_FRAME("lime.audio.AudioSource","set_gain",0x88fc88aa,"lime.audio.AudioSource.set_gain","lime/audio/AudioSource.hx",513,0x17352e00)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(538)
	int tmp = this->id;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(538)
	Float tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(538)
	::lime::audio::openal::AL_obj::sourcef(tmp,(int)4106,tmp1);
	HX_STACK_LINE(539)
	Float tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(539)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(AudioSource_obj,set_gain,return )

int AudioSource_obj::get_length( ){
	HX_STACK_FRAME("lime.audio.AudioSource","get_length",0x74de2f5d,"lime.audio.AudioSource.get_length","lime/audio/AudioSource.hx",546,0x17352e00)
	HX_STACK_THIS(this)
	HX_STACK_LINE(548)
	Dynamic tmp = this->__length;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(548)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(548)
	if ((tmp1)){
		HX_STACK_LINE(550)
		Dynamic tmp2 = this->__length;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(550)
		return tmp2;
	}
	HX_STACK_LINE(569)
	::lime::audio::AudioBuffer tmp2 = this->buffer;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(569)
	int tmp3 = tmp2->data->length;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(569)
	int tmp4 = (tmp3 * (int)8);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(569)
	::lime::audio::AudioBuffer tmp5 = this->buffer;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(569)
	int tmp6 = tmp5->channels;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(569)
	::lime::audio::AudioBuffer tmp7 = this->buffer;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(569)
	int tmp8 = tmp7->bitsPerSample;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(569)
	int tmp9 = (tmp6 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(569)
	Float tmp10 = (Float(tmp4) / Float(tmp9));		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(569)
	Float samples = tmp10;		HX_STACK_VAR(samples,"samples");
	HX_STACK_LINE(570)
	Float tmp11 = samples;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(570)
	::lime::audio::AudioBuffer tmp12 = this->buffer;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(570)
	int tmp13 = tmp12->sampleRate;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(570)
	Float tmp14 = (Float(tmp11) / Float(tmp13));		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(570)
	Float tmp15 = (tmp14 * (int)1000);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(570)
	int tmp16 = ::Std_obj::_int(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(570)
	int tmp17 = this->offset;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(570)
	int tmp18 = (tmp16 - tmp17);		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(570)
	return tmp18;
}


HX_DEFINE_DYNAMIC_FUNC0(AudioSource_obj,get_length,return )

int AudioSource_obj::set_length( int value){
	HX_STACK_FRAME("lime.audio.AudioSource","set_length",0x785bcdd1,"lime.audio.AudioSource.set_length","lime/audio/AudioSource.hx",577,0x17352e00)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(586)
	bool tmp = this->playing;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(586)
	bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(586)
	if ((tmp)){
		HX_STACK_LINE(586)
		Dynamic tmp2 = this->__length;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(586)
		Dynamic tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(586)
		int tmp4 = value;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(586)
		tmp1 = (tmp3 != tmp4);
	}
	else{
		HX_STACK_LINE(586)
		tmp1 = false;
	}
	HX_STACK_LINE(586)
	if ((tmp1)){
		HX_STACK_LINE(588)
		::haxe::Timer tmp2 = this->timer;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(588)
		bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(588)
		if ((tmp3)){
			HX_STACK_LINE(590)
			::haxe::Timer tmp4 = this->timer;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(590)
			tmp4->stop();
		}
		HX_STACK_LINE(594)
		int tmp4 = value;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(594)
		int tmp5 = this->get_currentTime();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(594)
		int tmp6 = (tmp4 - tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(594)
		int timeRemaining = tmp6;		HX_STACK_VAR(timeRemaining,"timeRemaining");
		HX_STACK_LINE(596)
		bool tmp7 = (timeRemaining > (int)0);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(596)
		if ((tmp7)){
			HX_STACK_LINE(598)
			int tmp8 = value;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(598)
			int tmp9 = this->get_currentTime();		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(598)
			int tmp10 = (tmp8 - tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(598)
			::haxe::Timer tmp11 = ::haxe::Timer_obj::__new(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(598)
			this->timer = tmp11;
			HX_STACK_LINE(599)
			Dynamic tmp12 = this->timer_onRun_dyn();		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(599)
			::haxe::Timer tmp13 = this->timer;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(599)
			tmp13->run = tmp12;
		}
	}
	HX_STACK_LINE(607)
	Dynamic tmp2 = this->__length = value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(607)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(AudioSource_obj,set_length,return )

int AudioSource_obj::get_loops( ){
	HX_STACK_FRAME("lime.audio.AudioSource","get_loops",0x5af092f8,"lime.audio.AudioSource.get_loops","lime/audio/AudioSource.hx",612,0x17352e00)
	HX_STACK_THIS(this)
	HX_STACK_LINE(624)
	int tmp = this->__loops;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(624)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(AudioSource_obj,get_loops,return )

int AudioSource_obj::set_loops( int loops){
	HX_STACK_FRAME("lime.audio.AudioSource","set_loops",0x3e417f04,"lime.audio.AudioSource.set_loops","lime/audio/AudioSource.hx",629,0x17352e00)
	HX_STACK_THIS(this)
	HX_STACK_ARG(loops,"loops")
	HX_STACK_LINE(641)
	int tmp = this->__loops = loops;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(641)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(AudioSource_obj,set_loops,return )

::lime::math::Vector4 AudioSource_obj::get_position( ){
	HX_STACK_FRAME("lime.audio.AudioSource","get_position",0xb78606e0,"lime.audio.AudioSource.get_position","lime/audio/AudioSource.hx",646,0x17352e00)
	HX_STACK_THIS(this)
	HX_STACK_LINE(656)
	int tmp = this->id;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(656)
	Array< Float > value = ::lime::audio::openal::AL_obj::getSource3f(tmp,(int)4100);		HX_STACK_VAR(value,"value");
	HX_STACK_LINE(657)
	Float tmp1 = value->__get((int)0);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(657)
	::lime::math::Vector4 tmp2 = this->__position;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(657)
	tmp2->x = tmp1;
	HX_STACK_LINE(658)
	Float tmp3 = value->__get((int)1);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(658)
	::lime::math::Vector4 tmp4 = this->__position;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(658)
	tmp4->y = tmp3;
	HX_STACK_LINE(659)
	Float tmp5 = value->__get((int)2);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(659)
	::lime::math::Vector4 tmp6 = this->__position;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(659)
	tmp6->z = tmp5;
	HX_STACK_LINE(663)
	::lime::math::Vector4 tmp7 = this->__position;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(663)
	return tmp7;
}


HX_DEFINE_DYNAMIC_FUNC0(AudioSource_obj,get_position,return )

::lime::math::Vector4 AudioSource_obj::set_position( ::lime::math::Vector4 value){
	HX_STACK_FRAME("lime.audio.AudioSource","set_position",0xcc7f2a54,"lime.audio.AudioSource.set_position","lime/audio/AudioSource.hx",668,0x17352e00)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(670)
	::lime::math::Vector4 tmp = this->__position;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(670)
	tmp->x = value->x;
	HX_STACK_LINE(671)
	::lime::math::Vector4 tmp1 = this->__position;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(671)
	tmp1->y = value->y;
	HX_STACK_LINE(672)
	::lime::math::Vector4 tmp2 = this->__position;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(672)
	tmp2->z = value->z;
	HX_STACK_LINE(673)
	::lime::math::Vector4 tmp3 = this->__position;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(673)
	tmp3->w = value->w;
	HX_STACK_LINE(685)
	::lime::audio::openal::AL_obj::distanceModel((int)0);
	HX_STACK_LINE(686)
	int tmp4 = this->id;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(686)
	::lime::math::Vector4 tmp5 = this->__position;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(686)
	Float tmp6 = tmp5->x;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(686)
	::lime::math::Vector4 tmp7 = this->__position;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(686)
	Float tmp8 = tmp7->y;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(686)
	::lime::math::Vector4 tmp9 = this->__position;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(686)
	Float tmp10 = tmp9->z;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(686)
	::lime::audio::openal::AL_obj::source3f(tmp4,(int)4100,tmp6,tmp8,tmp10);
	HX_STACK_LINE(690)
	::lime::math::Vector4 tmp11 = this->__position;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(690)
	return tmp11;
}


HX_DEFINE_DYNAMIC_FUNC1(AudioSource_obj,set_position,return )


AudioSource_obj::AudioSource_obj()
{
}

void AudioSource_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AudioSource);
	HX_MARK_MEMBER_NAME(onComplete,"onComplete");
	HX_MARK_MEMBER_NAME(buffer,"buffer");
	HX_MARK_MEMBER_NAME(offset,"offset");
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_MEMBER_NAME(playing,"playing");
	HX_MARK_MEMBER_NAME(pauseTime,"pauseTime");
	HX_MARK_MEMBER_NAME(__length,"__length");
	HX_MARK_MEMBER_NAME(__loops,"__loops");
	HX_MARK_MEMBER_NAME(__position,"__position");
	HX_MARK_MEMBER_NAME(timer,"timer");
	HX_MARK_END_CLASS();
}

void AudioSource_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(onComplete,"onComplete");
	HX_VISIT_MEMBER_NAME(buffer,"buffer");
	HX_VISIT_MEMBER_NAME(offset,"offset");
	HX_VISIT_MEMBER_NAME(id,"id");
	HX_VISIT_MEMBER_NAME(playing,"playing");
	HX_VISIT_MEMBER_NAME(pauseTime,"pauseTime");
	HX_VISIT_MEMBER_NAME(__length,"__length");
	HX_VISIT_MEMBER_NAME(__loops,"__loops");
	HX_VISIT_MEMBER_NAME(__position,"__position");
	HX_VISIT_MEMBER_NAME(timer,"timer");
}

Dynamic AudioSource_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return id; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"gain") ) { if (inCallProp == hx::paccAlways) return get_gain(); }
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		if (HX_FIELD_EQ(inName,"play") ) { return play_dyn(); }
		if (HX_FIELD_EQ(inName,"stop") ) { return stop_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"loops") ) { if (inCallProp == hx::paccAlways) return get_loops(); }
		if (HX_FIELD_EQ(inName,"timer") ) { return timer; }
		if (HX_FIELD_EQ(inName,"pause") ) { return pause_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"buffer") ) { return buffer; }
		if (HX_FIELD_EQ(inName,"length") ) { if (inCallProp == hx::paccAlways) return get_length(); }
		if (HX_FIELD_EQ(inName,"offset") ) { return offset; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"playing") ) { return playing; }
		if (HX_FIELD_EQ(inName,"__loops") ) { return __loops; }
		if (HX_FIELD_EQ(inName,"dispose") ) { return dispose_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"position") ) { if (inCallProp == hx::paccAlways) return get_position(); }
		if (HX_FIELD_EQ(inName,"__length") ) { return __length; }
		if (HX_FIELD_EQ(inName,"get_gain") ) { return get_gain_dyn(); }
		if (HX_FIELD_EQ(inName,"set_gain") ) { return set_gain_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"pauseTime") ) { return pauseTime; }
		if (HX_FIELD_EQ(inName,"get_loops") ) { return get_loops_dyn(); }
		if (HX_FIELD_EQ(inName,"set_loops") ) { return set_loops_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"onComplete") ) { return onComplete; }
		if (HX_FIELD_EQ(inName,"__position") ) { return __position; }
		if (HX_FIELD_EQ(inName,"get_length") ) { return get_length_dyn(); }
		if (HX_FIELD_EQ(inName,"set_length") ) { return set_length_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"currentTime") ) { if (inCallProp == hx::paccAlways) return get_currentTime(); }
		if (HX_FIELD_EQ(inName,"timer_onRun") ) { return timer_onRun_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_position") ) { return get_position_dyn(); }
		if (HX_FIELD_EQ(inName,"set_position") ) { return set_position_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_currentTime") ) { return get_currentTime_dyn(); }
		if (HX_FIELD_EQ(inName,"set_currentTime") ) { return set_currentTime_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic AudioSource_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< int >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"gain") ) { if (inCallProp == hx::paccAlways) return set_gain(inValue); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"loops") ) { if (inCallProp == hx::paccAlways) return set_loops(inValue); }
		if (HX_FIELD_EQ(inName,"timer") ) { timer=inValue.Cast< ::haxe::Timer >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"buffer") ) { buffer=inValue.Cast< ::lime::audio::AudioBuffer >(); return inValue; }
		if (HX_FIELD_EQ(inName,"length") ) { if (inCallProp == hx::paccAlways) return set_length(inValue); }
		if (HX_FIELD_EQ(inName,"offset") ) { offset=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"playing") ) { playing=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__loops") ) { __loops=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"position") ) { if (inCallProp == hx::paccAlways) return set_position(inValue); }
		if (HX_FIELD_EQ(inName,"__length") ) { __length=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"pauseTime") ) { pauseTime=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"onComplete") ) { onComplete=inValue.Cast< ::lime::app::Event_Void_Void >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__position") ) { __position=inValue.Cast< ::lime::math::Vector4 >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"currentTime") ) { if (inCallProp == hx::paccAlways) return set_currentTime(inValue); }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void AudioSource_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("onComplete","\xf8","\xd4","\x7e","\x5d"));
	outFields->push(HX_HCSTRING("buffer","\x00","\xbd","\x94","\xd0"));
	outFields->push(HX_HCSTRING("currentTime","\xe6","\xa4","\x8e","\x85"));
	outFields->push(HX_HCSTRING("gain","\x7f","\xf0","\x5e","\x44"));
	outFields->push(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"));
	outFields->push(HX_HCSTRING("loops","\x8f","\xf1","\xf9","\x78"));
	outFields->push(HX_HCSTRING("offset","\x93","\x97","\x3f","\x60"));
	outFields->push(HX_HCSTRING("position","\xa9","\xa0","\xfa","\xca"));
	outFields->push(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"));
	outFields->push(HX_HCSTRING("playing","\x6e","\x0f","\x18","\x8a"));
	outFields->push(HX_HCSTRING("pauseTime","\x23","\x82","\x63","\x51"));
	outFields->push(HX_HCSTRING("__length","\x06","\x00","\x37","\x47"));
	outFields->push(HX_HCSTRING("__loops","\x6f","\x4a","\x58","\xe3"));
	outFields->push(HX_HCSTRING("__position","\xc9","\x13","\x33","\x6e"));
	outFields->push(HX_HCSTRING("timer","\xc5","\xbf","\x35","\x10"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::lime::app::Event_Void_Void*/ ,(int)offsetof(AudioSource_obj,onComplete),HX_HCSTRING("onComplete","\xf8","\xd4","\x7e","\x5d")},
	{hx::fsObject /*::lime::audio::AudioBuffer*/ ,(int)offsetof(AudioSource_obj,buffer),HX_HCSTRING("buffer","\x00","\xbd","\x94","\xd0")},
	{hx::fsInt,(int)offsetof(AudioSource_obj,offset),HX_HCSTRING("offset","\x93","\x97","\x3f","\x60")},
	{hx::fsInt,(int)offsetof(AudioSource_obj,id),HX_HCSTRING("id","\xdb","\x5b","\x00","\x00")},
	{hx::fsBool,(int)offsetof(AudioSource_obj,playing),HX_HCSTRING("playing","\x6e","\x0f","\x18","\x8a")},
	{hx::fsInt,(int)offsetof(AudioSource_obj,pauseTime),HX_HCSTRING("pauseTime","\x23","\x82","\x63","\x51")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(AudioSource_obj,__length),HX_HCSTRING("__length","\x06","\x00","\x37","\x47")},
	{hx::fsInt,(int)offsetof(AudioSource_obj,__loops),HX_HCSTRING("__loops","\x6f","\x4a","\x58","\xe3")},
	{hx::fsObject /*::lime::math::Vector4*/ ,(int)offsetof(AudioSource_obj,__position),HX_HCSTRING("__position","\xc9","\x13","\x33","\x6e")},
	{hx::fsObject /*::haxe::Timer*/ ,(int)offsetof(AudioSource_obj,timer),HX_HCSTRING("timer","\xc5","\xbf","\x35","\x10")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("onComplete","\xf8","\xd4","\x7e","\x5d"),
	HX_HCSTRING("buffer","\x00","\xbd","\x94","\xd0"),
	HX_HCSTRING("offset","\x93","\x97","\x3f","\x60"),
	HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"),
	HX_HCSTRING("playing","\x6e","\x0f","\x18","\x8a"),
	HX_HCSTRING("pauseTime","\x23","\x82","\x63","\x51"),
	HX_HCSTRING("__length","\x06","\x00","\x37","\x47"),
	HX_HCSTRING("__loops","\x6f","\x4a","\x58","\xe3"),
	HX_HCSTRING("__position","\xc9","\x13","\x33","\x6e"),
	HX_HCSTRING("timer","\xc5","\xbf","\x35","\x10"),
	HX_HCSTRING("dispose","\x9f","\x80","\x4c","\xbb"),
	HX_HCSTRING("init","\x10","\x3b","\xbb","\x45"),
	HX_HCSTRING("play","\xf4","\x2d","\x5a","\x4a"),
	HX_HCSTRING("pause","\xf6","\xd6","\x57","\xbd"),
	HX_HCSTRING("stop","\x02","\xf0","\x5b","\x4c"),
	HX_HCSTRING("timer_onRun","\x32","\x24","\xe9","\x57"),
	HX_HCSTRING("get_currentTime","\x7d","\x5c","\x70","\x46"),
	HX_HCSTRING("set_currentTime","\x89","\xd9","\x3b","\x42"),
	HX_HCSTRING("get_gain","\x08","\xac","\x19","\xc4"),
	HX_HCSTRING("set_gain","\x7c","\x05","\x77","\x72"),
	HX_HCSTRING("get_length","\xaf","\x04","\x8f","\x8f"),
	HX_HCSTRING("set_length","\x23","\xa3","\x0c","\x93"),
	HX_HCSTRING("get_loops","\xe6","\x4d","\xa3","\xbc"),
	HX_HCSTRING("set_loops","\xf2","\x39","\xf4","\x9f"),
	HX_HCSTRING("get_position","\xb2","\x54","\x14","\x80"),
	HX_HCSTRING("set_position","\x26","\x78","\x0d","\x95"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AudioSource_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AudioSource_obj::__mClass,"__mClass");
};

#endif

hx::Class AudioSource_obj::__mClass;

void AudioSource_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.audio.AudioSource","\x00","\xfb","\x03","\xbc");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< AudioSource_obj >;
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

} // end namespace lime
} // end namespace audio
