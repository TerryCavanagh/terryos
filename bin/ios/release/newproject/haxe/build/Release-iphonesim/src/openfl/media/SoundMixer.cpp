#include <hxcpp.h>

#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_media_SoundChannel
#include <openfl/media/SoundChannel.h>
#endif
#ifndef INCLUDED_openfl_media_SoundMixer
#include <openfl/media/SoundMixer.h>
#endif
#ifndef INCLUDED_openfl_media_SoundTransform
#include <openfl/media/SoundTransform.h>
#endif
namespace openfl{
namespace media{

Void SoundMixer_obj::__construct()
{
	return null();
}

//SoundMixer_obj::~SoundMixer_obj() { }

Dynamic SoundMixer_obj::__CreateEmpty() { return  new SoundMixer_obj; }
hx::ObjectPtr< SoundMixer_obj > SoundMixer_obj::__new()
{  hx::ObjectPtr< SoundMixer_obj > _result_ = new SoundMixer_obj();
	_result_->__construct();
	return _result_;}

Dynamic SoundMixer_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SoundMixer_obj > _result_ = new SoundMixer_obj();
	_result_->__construct();
	return _result_;}

int SoundMixer_obj::bufferTime;

Array< ::Dynamic > SoundMixer_obj::__soundChannels;

::openfl::media::SoundTransform SoundMixer_obj::__soundTransform;

bool SoundMixer_obj::areSoundsInaccessible( ){
	HX_STACK_FRAME("openfl.media.SoundMixer","areSoundsInaccessible",0xcb915307,"openfl.media.SoundMixer.areSoundsInaccessible","openfl/media/SoundMixer.hx",19,0x17e3a43a)
	HX_STACK_LINE(19)
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(SoundMixer_obj,areSoundsInaccessible,return )

Void SoundMixer_obj::stopAll( ){
{
		HX_STACK_FRAME("openfl.media.SoundMixer","stopAll",0x7ebb1d93,"openfl.media.SoundMixer.stopAll","openfl/media/SoundMixer.hx",26,0x17e3a43a)
		HX_STACK_LINE(26)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(26)
		Array< ::Dynamic > _g1 = ::openfl::media::SoundMixer_obj::__soundChannels;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(26)
		while((true)){
			HX_STACK_LINE(26)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(26)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(26)
			if ((tmp1)){
				HX_STACK_LINE(26)
				break;
			}
			HX_STACK_LINE(26)
			::openfl::media::SoundChannel tmp2 = _g1->__get(_g).StaticCast< ::openfl::media::SoundChannel >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(26)
			::openfl::media::SoundChannel channel = tmp2;		HX_STACK_VAR(channel,"channel");
			HX_STACK_LINE(26)
			++(_g);
			HX_STACK_LINE(28)
			channel->stop();
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(SoundMixer_obj,stopAll,(void))

Void SoundMixer_obj::__registerSoundChannel( ::openfl::media::SoundChannel soundChannel){
{
		HX_STACK_FRAME("openfl.media.SoundMixer","__registerSoundChannel",0x60ebf103,"openfl.media.SoundMixer.__registerSoundChannel","openfl/media/SoundMixer.hx",35,0x17e3a43a)
		HX_STACK_ARG(soundChannel,"soundChannel")
		HX_STACK_LINE(37)
		::openfl::media::SoundChannel tmp = soundChannel;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(37)
		::openfl::media::SoundMixer_obj::__soundChannels->push(tmp);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(SoundMixer_obj,__registerSoundChannel,(void))

Void SoundMixer_obj::__unregisterSoundChannel( ::openfl::media::SoundChannel soundChannel){
{
		HX_STACK_FRAME("openfl.media.SoundMixer","__unregisterSoundChannel",0xb1bc24dc,"openfl.media.SoundMixer.__unregisterSoundChannel","openfl/media/SoundMixer.hx",42,0x17e3a43a)
		HX_STACK_ARG(soundChannel,"soundChannel")
		HX_STACK_LINE(44)
		::openfl::media::SoundChannel tmp = soundChannel;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(44)
		::openfl::media::SoundMixer_obj::__soundChannels->remove(tmp);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(SoundMixer_obj,__unregisterSoundChannel,(void))

::openfl::media::SoundTransform SoundMixer_obj::get_soundTransform( ){
	HX_STACK_FRAME("openfl.media.SoundMixer","get_soundTransform",0xc6a43892,"openfl.media.SoundMixer.get_soundTransform","openfl/media/SoundMixer.hx",56,0x17e3a43a)
	HX_STACK_LINE(58)
	::openfl::media::SoundTransform tmp = ::openfl::media::SoundMixer_obj::__soundTransform;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(58)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(SoundMixer_obj,get_soundTransform,return )

::openfl::media::SoundTransform SoundMixer_obj::set_soundTransform( ::openfl::media::SoundTransform value){
	HX_STACK_FRAME("openfl.media.SoundMixer","set_soundTransform",0xa3536b06,"openfl.media.SoundMixer.set_soundTransform","openfl/media/SoundMixer.hx",63,0x17e3a43a)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(65)
	::openfl::media::SoundTransform tmp = value->clone();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(65)
	::openfl::media::SoundMixer_obj::__soundTransform = tmp;
	HX_STACK_LINE(67)
	{
		HX_STACK_LINE(67)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(67)
		Array< ::Dynamic > _g1 = ::openfl::media::SoundMixer_obj::__soundChannels;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(67)
		while((true)){
			HX_STACK_LINE(67)
			bool tmp1 = (_g < _g1->length);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(67)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(67)
			if ((tmp2)){
				HX_STACK_LINE(67)
				break;
			}
			HX_STACK_LINE(67)
			::openfl::media::SoundChannel tmp3 = _g1->__get(_g).StaticCast< ::openfl::media::SoundChannel >();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(67)
			::openfl::media::SoundChannel channel = tmp3;		HX_STACK_VAR(channel,"channel");
			HX_STACK_LINE(67)
			++(_g);
			HX_STACK_LINE(69)
			channel->__updateTransform();
		}
	}
	HX_STACK_LINE(73)
	::openfl::media::SoundTransform tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(73)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(SoundMixer_obj,set_soundTransform,return )


SoundMixer_obj::SoundMixer_obj()
{
}

bool SoundMixer_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"stopAll") ) { outValue = stopAll_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bufferTime") ) { outValue = bufferTime; return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"soundTransform") ) { if (inCallProp == hx::paccAlways) { outValue = get_soundTransform(); return true; } }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__soundChannels") ) { outValue = __soundChannels; return true;  }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__soundTransform") ) { outValue = __soundTransform; return true;  }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"get_soundTransform") ) { outValue = get_soundTransform_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"set_soundTransform") ) { outValue = set_soundTransform_dyn(); return true;  }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"areSoundsInaccessible") ) { outValue = areSoundsInaccessible_dyn(); return true;  }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"__registerSoundChannel") ) { outValue = __registerSoundChannel_dyn(); return true;  }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"__unregisterSoundChannel") ) { outValue = __unregisterSoundChannel_dyn(); return true;  }
	}
	return false;
}

bool SoundMixer_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"bufferTime") ) { bufferTime=ioValue.Cast< int >(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"soundTransform") ) { if (inCallProp == hx::paccAlways)  ioValue = set_soundTransform(ioValue); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__soundChannels") ) { __soundChannels=ioValue.Cast< Array< ::Dynamic > >(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__soundTransform") ) { __soundTransform=ioValue.Cast< ::openfl::media::SoundTransform >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &SoundMixer_obj::bufferTime,HX_HCSTRING("bufferTime","\x2d","\x35","\x0d","\x9e")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(void *) &SoundMixer_obj::__soundChannels,HX_HCSTRING("__soundChannels","\x1f","\x13","\xbf","\x8f")},
	{hx::fsObject /*::openfl::media::SoundTransform*/ ,(void *) &SoundMixer_obj::__soundTransform,HX_HCSTRING("__soundTransform","\xbd","\x79","\x1e","\x57")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SoundMixer_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(SoundMixer_obj::bufferTime,"bufferTime");
	HX_MARK_MEMBER_NAME(SoundMixer_obj::__soundChannels,"__soundChannels");
	HX_MARK_MEMBER_NAME(SoundMixer_obj::__soundTransform,"__soundTransform");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SoundMixer_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(SoundMixer_obj::bufferTime,"bufferTime");
	HX_VISIT_MEMBER_NAME(SoundMixer_obj::__soundChannels,"__soundChannels");
	HX_VISIT_MEMBER_NAME(SoundMixer_obj::__soundTransform,"__soundTransform");
};

#endif

hx::Class SoundMixer_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("bufferTime","\x2d","\x35","\x0d","\x9e"),
	HX_HCSTRING("__soundChannels","\x1f","\x13","\xbf","\x8f"),
	HX_HCSTRING("__soundTransform","\xbd","\x79","\x1e","\x57"),
	HX_HCSTRING("areSoundsInaccessible","\xb3","\xb8","\x5f","\x22"),
	HX_HCSTRING("stopAll","\x3f","\x2e","\x3e","\x43"),
	HX_HCSTRING("__registerSoundChannel","\xd7","\x81","\xb6","\xfe"),
	HX_HCSTRING("__unregisterSoundChannel","\xb0","\x92","\xeb","\x43"),
	HX_HCSTRING("get_soundTransform","\x66","\xcf","\x78","\xbe"),
	HX_HCSTRING("set_soundTransform","\xda","\x01","\x28","\x9b"),
	::String(null()) };

void SoundMixer_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.media.SoundMixer","\xc2","\xdb","\xa7","\x15");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &SoundMixer_obj::__GetStatic;
	__mClass->mSetStaticField = &SoundMixer_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< SoundMixer_obj >;
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

void SoundMixer_obj::__boot()
{
	__soundChannels= Array_obj< ::Dynamic >::__new();
	__soundTransform= ::openfl::media::SoundTransform_obj::__new(null(),null());
}

} // end namespace openfl
} // end namespace media
