#include <hxcpp.h>

#ifndef INCLUDED_openfl_events_ActivityEvent
#include <openfl/events/ActivityEvent.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
namespace openfl{
namespace events{

Void ActivityEvent_obj::__construct(::String type,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable,hx::Null< bool >  __o_activating)
{
HX_STACK_FRAME("openfl.events.ActivityEvent","new",0x259c5826,"openfl.events.ActivityEvent.new","openfl/events/ActivityEvent.hx",12,0x98f9202a)
HX_STACK_THIS(this)
HX_STACK_ARG(type,"type")
HX_STACK_ARG(__o_bubbles,"bubbles")
HX_STACK_ARG(__o_cancelable,"cancelable")
HX_STACK_ARG(__o_activating,"activating")
bool bubbles = __o_bubbles.Default(false);
bool cancelable = __o_cancelable.Default(false);
bool activating = __o_activating.Default(false);
{
	HX_STACK_LINE(14)
	::String tmp = type;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(14)
	bool tmp1 = bubbles;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(14)
	bool tmp2 = cancelable;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(14)
	super::__construct(tmp,tmp1,tmp2);
	HX_STACK_LINE(16)
	this->activating = activating;
}
;
	return null();
}

//ActivityEvent_obj::~ActivityEvent_obj() { }

Dynamic ActivityEvent_obj::__CreateEmpty() { return  new ActivityEvent_obj; }
hx::ObjectPtr< ActivityEvent_obj > ActivityEvent_obj::__new(::String type,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable,hx::Null< bool >  __o_activating)
{  hx::ObjectPtr< ActivityEvent_obj > _result_ = new ActivityEvent_obj();
	_result_->__construct(type,__o_bubbles,__o_cancelable,__o_activating);
	return _result_;}

Dynamic ActivityEvent_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ActivityEvent_obj > _result_ = new ActivityEvent_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _result_;}

::openfl::events::Event ActivityEvent_obj::clone( ){
	HX_STACK_FRAME("openfl.events.ActivityEvent","clone",0xb6b198a3,"openfl.events.ActivityEvent.clone","openfl/events/ActivityEvent.hx",21,0x98f9202a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(23)
	::String tmp = this->type;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(23)
	bool tmp1 = this->bubbles;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(23)
	bool tmp2 = this->cancelable;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(23)
	bool tmp3 = this->activating;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(23)
	::openfl::events::ActivityEvent tmp4 = ::openfl::events::ActivityEvent_obj::__new(tmp,tmp1,tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(23)
	::openfl::events::ActivityEvent event = tmp4;		HX_STACK_VAR(event,"event");
	HX_STACK_LINE(24)
	Dynamic tmp5 = this->target;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(24)
	event->target = tmp5;
	HX_STACK_LINE(25)
	Dynamic tmp6 = this->currentTarget;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(25)
	event->currentTarget = tmp6;
	HX_STACK_LINE(26)
	int tmp7 = this->eventPhase;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(26)
	event->eventPhase = tmp7;
	HX_STACK_LINE(27)
	::openfl::events::ActivityEvent tmp8 = event;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(27)
	return tmp8;
}


::String ActivityEvent_obj::toString( ){
	HX_STACK_FRAME("openfl.events.ActivityEvent","toString",0x46865b26,"openfl.events.ActivityEvent.toString","openfl/events/ActivityEvent.hx",32,0x98f9202a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(34)
	::String tmp = this->__formatToString(HX_HCSTRING("ActivityEvent","\xab","\xeb","\x0c","\x59"),Array_obj< ::String >::__new().Add(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d")).Add(HX_HCSTRING("bubbles","\x67","\xbb","\x56","\x61")).Add(HX_HCSTRING("cancelable","\x14","\xa0","\x79","\xc4")).Add(HX_HCSTRING("activating","\xb0","\x17","\xb4","\xbd")));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(34)
	return tmp;
}


::String ActivityEvent_obj::ACTIVITY;


ActivityEvent_obj::ActivityEvent_obj()
{
}

Dynamic ActivityEvent_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"activating") ) { return activating; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ActivityEvent_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"activating") ) { activating=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ActivityEvent_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("activating","\xb0","\x17","\xb4","\xbd"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(ActivityEvent_obj,activating),HX_HCSTRING("activating","\xb0","\x17","\xb4","\xbd")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsString,(void *) &ActivityEvent_obj::ACTIVITY,HX_HCSTRING("ACTIVITY","\xcf","\xbd","\x37","\x3f")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("activating","\xb0","\x17","\xb4","\xbd"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ActivityEvent_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ActivityEvent_obj::ACTIVITY,"ACTIVITY");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ActivityEvent_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ActivityEvent_obj::ACTIVITY,"ACTIVITY");
};

#endif

hx::Class ActivityEvent_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("ACTIVITY","\xcf","\xbd","\x37","\x3f"),
	::String(null()) };

void ActivityEvent_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.events.ActivityEvent","\x34","\x0d","\x80","\xa0");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ActivityEvent_obj >;
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

void ActivityEvent_obj::__boot()
{
	ACTIVITY= HX_HCSTRING("activity","\xcf","\x2d","\xb2","\xe5");
}

} // end namespace openfl
} // end namespace events
