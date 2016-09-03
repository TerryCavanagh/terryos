#include <hxcpp.h>

#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_FrameLabel
#include <openfl/display/FrameLabel.h>
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
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
namespace openfl{
namespace display{

Void MovieClip_obj::__construct()
{
HX_STACK_FRAME("openfl.display.MovieClip","new",0xe16984e8,"openfl.display.MovieClip.new","openfl/display/MovieClip.hx",23,0x2b84738a)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(25)
	super::__construct();
	HX_STACK_LINE(27)
	this->__currentFrame = (int)0;
	HX_STACK_LINE(28)
	this->__currentLabels = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(29)
	this->__totalFrames = (int)0;
	HX_STACK_LINE(30)
	this->enabled = true;
}
;
	return null();
}

//MovieClip_obj::~MovieClip_obj() { }

Dynamic MovieClip_obj::__CreateEmpty() { return  new MovieClip_obj; }
hx::ObjectPtr< MovieClip_obj > MovieClip_obj::__new()
{  hx::ObjectPtr< MovieClip_obj > _result_ = new MovieClip_obj();
	_result_->__construct();
	return _result_;}

Dynamic MovieClip_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< MovieClip_obj > _result_ = new MovieClip_obj();
	_result_->__construct();
	return _result_;}

Void MovieClip_obj::addFrameScript( int index,Dynamic method){
{
		HX_STACK_FRAME("openfl.display.MovieClip","addFrameScript",0xff5029ef,"openfl.display.MovieClip.addFrameScript","openfl/display/MovieClip.hx",35,0x2b84738a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(index,"index")
		HX_STACK_ARG(method,"method")
		HX_STACK_LINE(37)
		bool tmp = (method != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(37)
		if ((tmp)){
			HX_STACK_LINE(39)
			::haxe::ds::IntMap tmp1 = this->__frameScripts;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(39)
			bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(39)
			if ((tmp2)){
				HX_STACK_LINE(41)
				::haxe::ds::IntMap tmp3;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(41)
				{
					HX_STACK_LINE(41)
					::haxe::ds::IntMap tmp4 = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(41)
					::haxe::ds::IntMap tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(41)
					tmp3 = tmp5;
				}
				HX_STACK_LINE(41)
				this->__frameScripts = tmp3;
			}
			HX_STACK_LINE(45)
			::haxe::ds::IntMap tmp3 = this->__frameScripts;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(45)
			int tmp4 = index;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(45)
			Dynamic tmp5 = method;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(45)
			tmp3->set(tmp4,tmp5);
		}
		else{
			HX_STACK_LINE(47)
			::haxe::ds::IntMap tmp1 = this->__frameScripts;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(47)
			bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(47)
			if ((tmp2)){
				HX_STACK_LINE(49)
				::haxe::ds::IntMap tmp3 = this->__frameScripts;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(49)
				int tmp4 = index;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(49)
				tmp3->remove(tmp4);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(MovieClip_obj,addFrameScript,(void))

Void MovieClip_obj::gotoAndPlay( Dynamic frame,::String scene){
{
		HX_STACK_FRAME("openfl.display.MovieClip","gotoAndPlay",0x3bade190,"openfl.display.MovieClip.gotoAndPlay","openfl/display/MovieClip.hx",56,0x2b84738a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(frame,"frame")
		HX_STACK_ARG(scene,"scene")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(MovieClip_obj,gotoAndPlay,(void))

Void MovieClip_obj::gotoAndStop( Dynamic frame,::String scene){
{
		HX_STACK_FRAME("openfl.display.MovieClip","gotoAndStop",0x3dafa39e,"openfl.display.MovieClip.gotoAndStop","openfl/display/MovieClip.hx",63,0x2b84738a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(frame,"frame")
		HX_STACK_ARG(scene,"scene")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(MovieClip_obj,gotoAndStop,(void))

Void MovieClip_obj::nextFrame( ){
{
		HX_STACK_FRAME("openfl.display.MovieClip","nextFrame",0x3b845cc2,"openfl.display.MovieClip.nextFrame","openfl/display/MovieClip.hx",70,0x2b84738a)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(MovieClip_obj,nextFrame,(void))

Void MovieClip_obj::play( ){
{
		HX_STACK_FRAME("openfl.display.MovieClip","play",0x5c42706c,"openfl.display.MovieClip.play","openfl/display/MovieClip.hx",77,0x2b84738a)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(MovieClip_obj,play,(void))

Void MovieClip_obj::prevFrame( ){
{
		HX_STACK_FRAME("openfl.display.MovieClip","prevFrame",0x7f95e2c2,"openfl.display.MovieClip.prevFrame","openfl/display/MovieClip.hx",84,0x2b84738a)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(MovieClip_obj,prevFrame,(void))

Void MovieClip_obj::stop( ){
{
		HX_STACK_FRAME("openfl.display.MovieClip","stop",0x5e44327a,"openfl.display.MovieClip.stop","openfl/display/MovieClip.hx",91,0x2b84738a)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(MovieClip_obj,stop,(void))

Void MovieClip_obj::__stopAllMovieClips( ){
{
		HX_STACK_FRAME("openfl.display.MovieClip","__stopAllMovieClips",0x702dce5a,"openfl.display.MovieClip.__stopAllMovieClips","openfl/display/MovieClip.hx",98,0x2b84738a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(100)
		this->super::__stopAllMovieClips();
		HX_STACK_LINE(101)
		this->stop();
	}
return null();
}


int MovieClip_obj::get_currentFrame( ){
	HX_STACK_FRAME("openfl.display.MovieClip","get_currentFrame",0xf2ac6035,"openfl.display.MovieClip.get_currentFrame","openfl/display/MovieClip.hx",113,0x2b84738a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(113)
	int tmp = this->__currentFrame;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(113)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(MovieClip_obj,get_currentFrame,return )

::String MovieClip_obj::get_currentFrameLabel( ){
	HX_STACK_FRAME("openfl.display.MovieClip","get_currentFrameLabel",0x543e3d7f,"openfl.display.MovieClip.get_currentFrameLabel","openfl/display/MovieClip.hx",114,0x2b84738a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(114)
	::String tmp = this->__currentFrameLabel;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(114)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(MovieClip_obj,get_currentFrameLabel,return )

::String MovieClip_obj::get_currentLabel( ){
	HX_STACK_FRAME("openfl.display.MovieClip","get_currentLabel",0x5bd7f5fc,"openfl.display.MovieClip.get_currentLabel","openfl/display/MovieClip.hx",115,0x2b84738a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(115)
	::String tmp = this->__currentLabel;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(115)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(MovieClip_obj,get_currentLabel,return )

Array< ::Dynamic > MovieClip_obj::get_currentLabels( ){
	HX_STACK_FRAME("openfl.display.MovieClip","get_currentLabels",0x011f46f7,"openfl.display.MovieClip.get_currentLabels","openfl/display/MovieClip.hx",116,0x2b84738a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(116)
	return this->__currentLabels;
}


HX_DEFINE_DYNAMIC_FUNC0(MovieClip_obj,get_currentLabels,return )

int MovieClip_obj::get_framesLoaded( ){
	HX_STACK_FRAME("openfl.display.MovieClip","get_framesLoaded",0xb37eaf4c,"openfl.display.MovieClip.get_framesLoaded","openfl/display/MovieClip.hx",117,0x2b84738a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(117)
	int tmp = this->__totalFrames;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(117)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(MovieClip_obj,get_framesLoaded,return )

int MovieClip_obj::get_totalFrames( ){
	HX_STACK_FRAME("openfl.display.MovieClip","get_totalFrames",0x46b3baa9,"openfl.display.MovieClip.get_totalFrames","openfl/display/MovieClip.hx",118,0x2b84738a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(118)
	int tmp = this->__totalFrames;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(118)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(MovieClip_obj,get_totalFrames,return )


MovieClip_obj::MovieClip_obj()
{
}

void MovieClip_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MovieClip);
	HX_MARK_MEMBER_NAME(enabled,"enabled");
	HX_MARK_MEMBER_NAME(__currentFrame,"__currentFrame");
	HX_MARK_MEMBER_NAME(__currentFrameLabel,"__currentFrameLabel");
	HX_MARK_MEMBER_NAME(__currentLabel,"__currentLabel");
	HX_MARK_MEMBER_NAME(__currentLabels,"__currentLabels");
	HX_MARK_MEMBER_NAME(__frameScripts,"__frameScripts");
	HX_MARK_MEMBER_NAME(__totalFrames,"__totalFrames");
	::openfl::display::Sprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void MovieClip_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(enabled,"enabled");
	HX_VISIT_MEMBER_NAME(__currentFrame,"__currentFrame");
	HX_VISIT_MEMBER_NAME(__currentFrameLabel,"__currentFrameLabel");
	HX_VISIT_MEMBER_NAME(__currentLabel,"__currentLabel");
	HX_VISIT_MEMBER_NAME(__currentLabels,"__currentLabels");
	HX_VISIT_MEMBER_NAME(__frameScripts,"__frameScripts");
	HX_VISIT_MEMBER_NAME(__totalFrames,"__totalFrames");
	::openfl::display::Sprite_obj::__Visit(HX_VISIT_ARG);
}

Dynamic MovieClip_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"play") ) { return play_dyn(); }
		if (HX_FIELD_EQ(inName,"stop") ) { return stop_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"enabled") ) { return enabled; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"nextFrame") ) { return nextFrame_dyn(); }
		if (HX_FIELD_EQ(inName,"prevFrame") ) { return prevFrame_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"totalFrames") ) { if (inCallProp == hx::paccAlways) return get_totalFrames(); }
		if (HX_FIELD_EQ(inName,"gotoAndPlay") ) { return gotoAndPlay_dyn(); }
		if (HX_FIELD_EQ(inName,"gotoAndStop") ) { return gotoAndStop_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"currentFrame") ) { if (inCallProp == hx::paccAlways) return get_currentFrame(); }
		if (HX_FIELD_EQ(inName,"currentLabel") ) { if (inCallProp == hx::paccAlways) return get_currentLabel(); }
		if (HX_FIELD_EQ(inName,"framesLoaded") ) { if (inCallProp == hx::paccAlways) return get_framesLoaded(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"currentLabels") ) { if (inCallProp == hx::paccAlways) return get_currentLabels(); }
		if (HX_FIELD_EQ(inName,"__totalFrames") ) { return __totalFrames; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__currentFrame") ) { return __currentFrame; }
		if (HX_FIELD_EQ(inName,"__currentLabel") ) { return __currentLabel; }
		if (HX_FIELD_EQ(inName,"__frameScripts") ) { return __frameScripts; }
		if (HX_FIELD_EQ(inName,"addFrameScript") ) { return addFrameScript_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__currentLabels") ) { return __currentLabels; }
		if (HX_FIELD_EQ(inName,"get_totalFrames") ) { return get_totalFrames_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"get_currentFrame") ) { return get_currentFrame_dyn(); }
		if (HX_FIELD_EQ(inName,"get_currentLabel") ) { return get_currentLabel_dyn(); }
		if (HX_FIELD_EQ(inName,"get_framesLoaded") ) { return get_framesLoaded_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"currentFrameLabel") ) { if (inCallProp == hx::paccAlways) return get_currentFrameLabel(); }
		if (HX_FIELD_EQ(inName,"get_currentLabels") ) { return get_currentLabels_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"__currentFrameLabel") ) { return __currentFrameLabel; }
		if (HX_FIELD_EQ(inName,"__stopAllMovieClips") ) { return __stopAllMovieClips_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"get_currentFrameLabel") ) { return get_currentFrameLabel_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic MovieClip_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"enabled") ) { enabled=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__totalFrames") ) { __totalFrames=inValue.Cast< int >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__currentFrame") ) { __currentFrame=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__currentLabel") ) { __currentLabel=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__frameScripts") ) { __frameScripts=inValue.Cast< ::haxe::ds::IntMap >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__currentLabels") ) { __currentLabels=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"__currentFrameLabel") ) { __currentFrameLabel=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void MovieClip_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("currentFrame","\x34","\x5d","\x8f","\x4d"));
	outFields->push(HX_HCSTRING("currentFrameLabel","\x20","\xc4","\x0a","\x2a"));
	outFields->push(HX_HCSTRING("currentLabel","\xfb","\xf2","\xba","\xb6"));
	outFields->push(HX_HCSTRING("currentLabels","\x18","\xa9","\xd9","\x2c"));
	outFields->push(HX_HCSTRING("enabled","\x81","\x04","\x31","\x7e"));
	outFields->push(HX_HCSTRING("framesLoaded","\x4b","\xac","\x61","\x0e"));
	outFields->push(HX_HCSTRING("totalFrames","\x8a","\xa2","\xbb","\x72"));
	outFields->push(HX_HCSTRING("__currentFrame","\x54","\xe0","\x4f","\x6e"));
	outFields->push(HX_HCSTRING("__currentFrameLabel","\x00","\xed","\xfa","\xdc"));
	outFields->push(HX_HCSTRING("__currentLabel","\x1b","\x76","\x7b","\xd7"));
	outFields->push(HX_HCSTRING("__currentLabels","\xf8","\xe1","\x8b","\xb4"));
	outFields->push(HX_HCSTRING("__frameScripts","\x7b","\x3e","\x2f","\xee"));
	outFields->push(HX_HCSTRING("__totalFrames","\x6a","\xe3","\x33","\xbb"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(MovieClip_obj,enabled),HX_HCSTRING("enabled","\x81","\x04","\x31","\x7e")},
	{hx::fsInt,(int)offsetof(MovieClip_obj,__currentFrame),HX_HCSTRING("__currentFrame","\x54","\xe0","\x4f","\x6e")},
	{hx::fsString,(int)offsetof(MovieClip_obj,__currentFrameLabel),HX_HCSTRING("__currentFrameLabel","\x00","\xed","\xfa","\xdc")},
	{hx::fsString,(int)offsetof(MovieClip_obj,__currentLabel),HX_HCSTRING("__currentLabel","\x1b","\x76","\x7b","\xd7")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(MovieClip_obj,__currentLabels),HX_HCSTRING("__currentLabels","\xf8","\xe1","\x8b","\xb4")},
	{hx::fsObject /*::haxe::ds::IntMap*/ ,(int)offsetof(MovieClip_obj,__frameScripts),HX_HCSTRING("__frameScripts","\x7b","\x3e","\x2f","\xee")},
	{hx::fsInt,(int)offsetof(MovieClip_obj,__totalFrames),HX_HCSTRING("__totalFrames","\x6a","\xe3","\x33","\xbb")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("enabled","\x81","\x04","\x31","\x7e"),
	HX_HCSTRING("__currentFrame","\x54","\xe0","\x4f","\x6e"),
	HX_HCSTRING("__currentFrameLabel","\x00","\xed","\xfa","\xdc"),
	HX_HCSTRING("__currentLabel","\x1b","\x76","\x7b","\xd7"),
	HX_HCSTRING("__currentLabels","\xf8","\xe1","\x8b","\xb4"),
	HX_HCSTRING("__frameScripts","\x7b","\x3e","\x2f","\xee"),
	HX_HCSTRING("__totalFrames","\x6a","\xe3","\x33","\xbb"),
	HX_HCSTRING("addFrameScript","\x77","\x21","\x7f","\xbb"),
	HX_HCSTRING("gotoAndPlay","\x08","\x65","\x84","\xef"),
	HX_HCSTRING("gotoAndStop","\x16","\x27","\x86","\xf1"),
	HX_HCSTRING("nextFrame","\x3a","\x92","\xc8","\xad"),
	HX_HCSTRING("play","\xf4","\x2d","\x5a","\x4a"),
	HX_HCSTRING("prevFrame","\x3a","\x18","\xda","\xf1"),
	HX_HCSTRING("stop","\x02","\xf0","\x5b","\x4c"),
	HX_HCSTRING("__stopAllMovieClips","\xd2","\x89","\xe8","\x53"),
	HX_HCSTRING("get_currentFrame","\xbd","\x49","\x2e","\x52"),
	HX_HCSTRING("get_currentFrameLabel","\xf7","\xc6","\xb8","\xa8"),
	HX_HCSTRING("get_currentLabel","\x84","\xdf","\x59","\xbb"),
	HX_HCSTRING("get_currentLabels","\x6f","\xb4","\x49","\x33"),
	HX_HCSTRING("get_framesLoaded","\xd4","\x98","\x00","\x13"),
	HX_HCSTRING("get_totalFrames","\x21","\x5a","\x9d","\x33"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MovieClip_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MovieClip_obj::__mClass,"__mClass");
};

#endif

hx::Class MovieClip_obj::__mClass;

void MovieClip_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.display.MovieClip","\xf6","\x30","\xc3","\xc4");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< MovieClip_obj >;
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
} // end namespace display
