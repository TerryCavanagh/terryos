#include <hxcpp.h>

#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_TimerEvent
#include <openfl/events/TimerEvent.h>
#endif
namespace openfl{
namespace events{

Void TimerEvent_obj::__construct(::String type,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable)
{
HX_STACK_FRAME("openfl.events.TimerEvent","new",0xb64ac7fe,"openfl.events.TimerEvent.new","openfl/events/TimerEvent.hx",11,0x5c7b7b12)
HX_STACK_THIS(this)
HX_STACK_ARG(type,"type")
HX_STACK_ARG(__o_bubbles,"bubbles")
HX_STACK_ARG(__o_cancelable,"cancelable")
bool bubbles = __o_bubbles.Default(false);
bool cancelable = __o_cancelable.Default(false);
{
	HX_STACK_LINE(13)
	::String tmp = type;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(13)
	bool tmp1 = bubbles;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(13)
	bool tmp2 = cancelable;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(13)
	super::__construct(tmp,tmp1,tmp2);
}
;
	return null();
}

//TimerEvent_obj::~TimerEvent_obj() { }

Dynamic TimerEvent_obj::__CreateEmpty() { return  new TimerEvent_obj; }
hx::ObjectPtr< TimerEvent_obj > TimerEvent_obj::__new(::String type,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable)
{  hx::ObjectPtr< TimerEvent_obj > _result_ = new TimerEvent_obj();
	_result_->__construct(type,__o_bubbles,__o_cancelable);
	return _result_;}

Dynamic TimerEvent_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TimerEvent_obj > _result_ = new TimerEvent_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _result_;}

::openfl::events::Event TimerEvent_obj::clone( ){
	HX_STACK_FRAME("openfl.events.TimerEvent","clone",0xa3bdae7b,"openfl.events.TimerEvent.clone","openfl/events/TimerEvent.hx",18,0x5c7b7b12)
	HX_STACK_THIS(this)
	HX_STACK_LINE(20)
	::String tmp = this->type;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(20)
	bool tmp1 = this->bubbles;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(20)
	bool tmp2 = this->cancelable;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(20)
	::openfl::events::TimerEvent tmp3 = ::openfl::events::TimerEvent_obj::__new(tmp,tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(20)
	::openfl::events::TimerEvent event = tmp3;		HX_STACK_VAR(event,"event");
	HX_STACK_LINE(21)
	Dynamic tmp4 = this->target;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(21)
	event->target = tmp4;
	HX_STACK_LINE(22)
	Dynamic tmp5 = this->currentTarget;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(22)
	event->currentTarget = tmp5;
	HX_STACK_LINE(23)
	int tmp6 = this->eventPhase;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(23)
	event->eventPhase = tmp6;
	HX_STACK_LINE(24)
	::openfl::events::TimerEvent tmp7 = event;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(24)
	return tmp7;
}


::String TimerEvent_obj::toString( ){
	HX_STACK_FRAME("openfl.events.TimerEvent","toString",0x793b7c4e,"openfl.events.TimerEvent.toString","openfl/events/TimerEvent.hx",29,0x5c7b7b12)
	HX_STACK_THIS(this)
	HX_STACK_LINE(31)
	::String tmp = this->__formatToString(HX_HCSTRING("TimerEvent","\x35","\x32","\x87","\xfd"),Array_obj< ::String >::__new().Add(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d")).Add(HX_HCSTRING("bubbles","\x67","\xbb","\x56","\x61")).Add(HX_HCSTRING("cancelable","\x14","\xa0","\x79","\xc4")));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(31)
	return tmp;
}


Void TimerEvent_obj::updateAfterEvent( ){
{
		HX_STACK_FRAME("openfl.events.TimerEvent","updateAfterEvent",0xcd7c1969,"openfl.events.TimerEvent.updateAfterEvent","openfl/events/TimerEvent.hx",36,0x5c7b7b12)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TimerEvent_obj,updateAfterEvent,(void))

::String TimerEvent_obj::TIMER;

::String TimerEvent_obj::TIMER_COMPLETE;


TimerEvent_obj::TimerEvent_obj()
{
}

Dynamic TimerEvent_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"updateAfterEvent") ) { return updateAfterEvent_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsString,(void *) &TimerEvent_obj::TIMER,HX_HCSTRING("TIMER","\xa5","\xf7","\x23","\x8e")},
	{hx::fsString,(void *) &TimerEvent_obj::TIMER_COMPLETE,HX_HCSTRING("TIMER_COMPLETE","\xd3","\xf3","\x07","\x00")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	HX_HCSTRING("updateAfterEvent","\xc7","\xfb","\xc7","\x22"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TimerEvent_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(TimerEvent_obj::TIMER,"TIMER");
	HX_MARK_MEMBER_NAME(TimerEvent_obj::TIMER_COMPLETE,"TIMER_COMPLETE");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TimerEvent_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(TimerEvent_obj::TIMER,"TIMER");
	HX_VISIT_MEMBER_NAME(TimerEvent_obj::TIMER_COMPLETE,"TIMER_COMPLETE");
};

#endif

hx::Class TimerEvent_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("TIMER","\xa5","\xf7","\x23","\x8e"),
	HX_HCSTRING("TIMER_COMPLETE","\xd3","\xf3","\x07","\x00"),
	::String(null()) };

void TimerEvent_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.events.TimerEvent","\x0c","\xb1","\x93","\x7c");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< TimerEvent_obj >;
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

void TimerEvent_obj::__boot()
{
	TIMER= HX_HCSTRING("timer","\xc5","\xbf","\x35","\x10");
	TIMER_COMPLETE= HX_HCSTRING("timerComplete","\x9e","\x49","\xcc","\x97");
}

} // end namespace openfl
} // end namespace events
