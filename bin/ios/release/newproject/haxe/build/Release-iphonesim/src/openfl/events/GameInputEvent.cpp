#include <hxcpp.h>

#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_GameInputEvent
#include <openfl/events/GameInputEvent.h>
#endif
#ifndef INCLUDED_openfl_ui_GameInputDevice
#include <openfl/ui/GameInputDevice.h>
#endif
namespace openfl{
namespace events{

Void GameInputEvent_obj::__construct(::String type,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable,::openfl::ui::GameInputDevice device)
{
HX_STACK_FRAME("openfl.events.GameInputEvent","new",0x8065662b,"openfl.events.GameInputEvent.new","openfl/events/GameInputEvent.hx",17,0x5318f185)
HX_STACK_THIS(this)
HX_STACK_ARG(type,"type")
HX_STACK_ARG(__o_bubbles,"bubbles")
HX_STACK_ARG(__o_cancelable,"cancelable")
HX_STACK_ARG(device,"device")
bool bubbles = __o_bubbles.Default(true);
bool cancelable = __o_cancelable.Default(false);
{
	HX_STACK_LINE(19)
	::String tmp = type;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(19)
	bool tmp1 = bubbles;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(19)
	bool tmp2 = cancelable;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(19)
	super::__construct(tmp,tmp1,tmp2);
	HX_STACK_LINE(21)
	this->device = device;
}
;
	return null();
}

//GameInputEvent_obj::~GameInputEvent_obj() { }

Dynamic GameInputEvent_obj::__CreateEmpty() { return  new GameInputEvent_obj; }
hx::ObjectPtr< GameInputEvent_obj > GameInputEvent_obj::__new(::String type,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable,::openfl::ui::GameInputDevice device)
{  hx::ObjectPtr< GameInputEvent_obj > _result_ = new GameInputEvent_obj();
	_result_->__construct(type,__o_bubbles,__o_cancelable,device);
	return _result_;}

Dynamic GameInputEvent_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< GameInputEvent_obj > _result_ = new GameInputEvent_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _result_;}

::openfl::events::Event GameInputEvent_obj::clone( ){
	HX_STACK_FRAME("openfl.events.GameInputEvent","clone",0x205df1e8,"openfl.events.GameInputEvent.clone","openfl/events/GameInputEvent.hx",26,0x5318f185)
	HX_STACK_THIS(this)
	HX_STACK_LINE(28)
	::String tmp = this->type;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(28)
	bool tmp1 = this->bubbles;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(28)
	bool tmp2 = this->cancelable;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(28)
	::openfl::ui::GameInputDevice tmp3 = this->device;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(28)
	::openfl::events::GameInputEvent tmp4 = ::openfl::events::GameInputEvent_obj::__new(tmp,tmp1,tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(28)
	::openfl::events::GameInputEvent event = tmp4;		HX_STACK_VAR(event,"event");
	HX_STACK_LINE(29)
	Dynamic tmp5 = this->target;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(29)
	event->target = tmp5;
	HX_STACK_LINE(30)
	Dynamic tmp6 = this->currentTarget;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(30)
	event->currentTarget = tmp6;
	HX_STACK_LINE(31)
	int tmp7 = this->eventPhase;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(31)
	event->eventPhase = tmp7;
	HX_STACK_LINE(32)
	::openfl::events::GameInputEvent tmp8 = event;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(32)
	return tmp8;
}


::String GameInputEvent_obj::toString( ){
	HX_STACK_FRAME("openfl.events.GameInputEvent","toString",0x31f35b01,"openfl.events.GameInputEvent.toString","openfl/events/GameInputEvent.hx",37,0x5318f185)
	HX_STACK_THIS(this)
	HX_STACK_LINE(39)
	::String tmp = this->__formatToString(HX_HCSTRING("GameInputEvent","\x62","\x3e","\xf4","\x2c"),Array_obj< ::String >::__new().Add(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d")).Add(HX_HCSTRING("bubbles","\x67","\xbb","\x56","\x61")).Add(HX_HCSTRING("cancelable","\x14","\xa0","\x79","\xc4")).Add(HX_HCSTRING("device","\x96","\xdc","\x77","\x71")));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(39)
	return tmp;
}


::String GameInputEvent_obj::DEVICE_ADDED;

::String GameInputEvent_obj::DEVICE_REMOVED;

::String GameInputEvent_obj::DEVICE_UNUSABLE;


GameInputEvent_obj::GameInputEvent_obj()
{
}

void GameInputEvent_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GameInputEvent);
	HX_MARK_MEMBER_NAME(device,"device");
	::openfl::events::Event_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void GameInputEvent_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(device,"device");
	::openfl::events::Event_obj::__Visit(HX_VISIT_ARG);
}

Dynamic GameInputEvent_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"device") ) { return device; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic GameInputEvent_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"device") ) { device=inValue.Cast< ::openfl::ui::GameInputDevice >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void GameInputEvent_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("device","\x96","\xdc","\x77","\x71"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::ui::GameInputDevice*/ ,(int)offsetof(GameInputEvent_obj,device),HX_HCSTRING("device","\x96","\xdc","\x77","\x71")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsString,(void *) &GameInputEvent_obj::DEVICE_ADDED,HX_HCSTRING("DEVICE_ADDED","\xf7","\x70","\x3d","\xb6")},
	{hx::fsString,(void *) &GameInputEvent_obj::DEVICE_REMOVED,HX_HCSTRING("DEVICE_REMOVED","\x97","\x5b","\xc2","\x33")},
	{hx::fsString,(void *) &GameInputEvent_obj::DEVICE_UNUSABLE,HX_HCSTRING("DEVICE_UNUSABLE","\x1a","\xc6","\xb7","\xaa")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("device","\x96","\xdc","\x77","\x71"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GameInputEvent_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(GameInputEvent_obj::DEVICE_ADDED,"DEVICE_ADDED");
	HX_MARK_MEMBER_NAME(GameInputEvent_obj::DEVICE_REMOVED,"DEVICE_REMOVED");
	HX_MARK_MEMBER_NAME(GameInputEvent_obj::DEVICE_UNUSABLE,"DEVICE_UNUSABLE");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GameInputEvent_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(GameInputEvent_obj::DEVICE_ADDED,"DEVICE_ADDED");
	HX_VISIT_MEMBER_NAME(GameInputEvent_obj::DEVICE_REMOVED,"DEVICE_REMOVED");
	HX_VISIT_MEMBER_NAME(GameInputEvent_obj::DEVICE_UNUSABLE,"DEVICE_UNUSABLE");
};

#endif

hx::Class GameInputEvent_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("DEVICE_ADDED","\xf7","\x70","\x3d","\xb6"),
	HX_HCSTRING("DEVICE_REMOVED","\x97","\x5b","\xc2","\x33"),
	HX_HCSTRING("DEVICE_UNUSABLE","\x1a","\xc6","\xb7","\xaa"),
	::String(null()) };

void GameInputEvent_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.events.GameInputEvent","\xb9","\x74","\x3e","\x6a");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< GameInputEvent_obj >;
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

void GameInputEvent_obj::__boot()
{
	DEVICE_ADDED= HX_HCSTRING("deviceAdded","\x4a","\x08","\x84","\x0b");
	DEVICE_REMOVED= HX_HCSTRING("deviceRemoved","\xaa","\xc9","\x5b","\x59");
	DEVICE_UNUSABLE= HX_HCSTRING("deviceUnusable","\xc7","\xa8","\x5e","\x6b");
}

} // end namespace openfl
} // end namespace events
