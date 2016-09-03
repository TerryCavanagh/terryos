#include <hxcpp.h>

#ifndef INCLUDED_openfl_events_ErrorEvent
#include <openfl/events/ErrorEvent.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_SecurityErrorEvent
#include <openfl/events/SecurityErrorEvent.h>
#endif
#ifndef INCLUDED_openfl_events_TextEvent
#include <openfl/events/TextEvent.h>
#endif
namespace openfl{
namespace events{

Void SecurityErrorEvent_obj::__construct(::String type,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable,::String __o_text,hx::Null< int >  __o_id)
{
HX_STACK_FRAME("openfl.events.SecurityErrorEvent","new",0x42af717b,"openfl.events.SecurityErrorEvent.new","openfl/events/SecurityErrorEvent.hx",10,0x4f4e3035)
HX_STACK_THIS(this)
HX_STACK_ARG(type,"type")
HX_STACK_ARG(__o_bubbles,"bubbles")
HX_STACK_ARG(__o_cancelable,"cancelable")
HX_STACK_ARG(__o_text,"text")
HX_STACK_ARG(__o_id,"id")
bool bubbles = __o_bubbles.Default(false);
bool cancelable = __o_cancelable.Default(false);
::String text = __o_text.Default(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
int id = __o_id.Default(0);
{
	HX_STACK_LINE(12)
	::String tmp = type;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(12)
	bool tmp1 = bubbles;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(12)
	bool tmp2 = cancelable;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(12)
	::String tmp3 = text;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(12)
	int tmp4 = id;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(12)
	super::__construct(tmp,tmp1,tmp2,tmp3,tmp4);
}
;
	return null();
}

//SecurityErrorEvent_obj::~SecurityErrorEvent_obj() { }

Dynamic SecurityErrorEvent_obj::__CreateEmpty() { return  new SecurityErrorEvent_obj; }
hx::ObjectPtr< SecurityErrorEvent_obj > SecurityErrorEvent_obj::__new(::String type,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable,::String __o_text,hx::Null< int >  __o_id)
{  hx::ObjectPtr< SecurityErrorEvent_obj > _result_ = new SecurityErrorEvent_obj();
	_result_->__construct(type,__o_bubbles,__o_cancelable,__o_text,__o_id);
	return _result_;}

Dynamic SecurityErrorEvent_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SecurityErrorEvent_obj > _result_ = new SecurityErrorEvent_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return _result_;}

::openfl::events::Event SecurityErrorEvent_obj::clone( ){
	HX_STACK_FRAME("openfl.events.SecurityErrorEvent","clone",0x91bd7138,"openfl.events.SecurityErrorEvent.clone","openfl/events/SecurityErrorEvent.hx",17,0x4f4e3035)
	HX_STACK_THIS(this)
	HX_STACK_LINE(19)
	::String tmp = this->type;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(19)
	bool tmp1 = this->bubbles;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(19)
	bool tmp2 = this->cancelable;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(19)
	::String tmp3 = this->text;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(19)
	int tmp4 = this->errorID;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(19)
	::openfl::events::SecurityErrorEvent tmp5 = ::openfl::events::SecurityErrorEvent_obj::__new(tmp,tmp1,tmp2,tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(19)
	::openfl::events::SecurityErrorEvent event = tmp5;		HX_STACK_VAR(event,"event");
	HX_STACK_LINE(20)
	Dynamic tmp6 = this->target;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(20)
	event->target = tmp6;
	HX_STACK_LINE(21)
	Dynamic tmp7 = this->currentTarget;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(21)
	event->currentTarget = tmp7;
	HX_STACK_LINE(22)
	int tmp8 = this->eventPhase;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(22)
	event->eventPhase = tmp8;
	HX_STACK_LINE(23)
	::openfl::events::SecurityErrorEvent tmp9 = event;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(23)
	return tmp9;
}


::String SecurityErrorEvent_obj::toString( ){
	HX_STACK_FRAME("openfl.events.SecurityErrorEvent","toString",0xccee4db1,"openfl.events.SecurityErrorEvent.toString","openfl/events/SecurityErrorEvent.hx",28,0x4f4e3035)
	HX_STACK_THIS(this)
	HX_STACK_LINE(30)
	::String tmp = this->__formatToString(HX_HCSTRING("SecurityErrorEvent","\x32","\xea","\xb2","\xa1"),Array_obj< ::String >::__new().Add(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d")).Add(HX_HCSTRING("bubbles","\x67","\xbb","\x56","\x61")).Add(HX_HCSTRING("cancelable","\x14","\xa0","\x79","\xc4")).Add(HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c")).Add(HX_HCSTRING("errorID","\xa3","\x8d","\x0a","\xea")));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(30)
	return tmp;
}


::String SecurityErrorEvent_obj::SECURITY_ERROR;


SecurityErrorEvent_obj::SecurityErrorEvent_obj()
{
}

Dynamic SecurityErrorEvent_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsString,(void *) &SecurityErrorEvent_obj::SECURITY_ERROR,HX_HCSTRING("SECURITY_ERROR","\xa9","\x85","\x3b","\xcf")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SecurityErrorEvent_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(SecurityErrorEvent_obj::SECURITY_ERROR,"SECURITY_ERROR");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SecurityErrorEvent_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(SecurityErrorEvent_obj::SECURITY_ERROR,"SECURITY_ERROR");
};

#endif

hx::Class SecurityErrorEvent_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("SECURITY_ERROR","\xa9","\x85","\x3b","\xcf"),
	::String(null()) };

void SecurityErrorEvent_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.events.SecurityErrorEvent","\x09","\x98","\x2c","\x07");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< SecurityErrorEvent_obj >;
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

void SecurityErrorEvent_obj::__boot()
{
	SECURITY_ERROR= HX_HCSTRING("securityError","\xe8","\x28","\x7c","\xa2");
}

} // end namespace openfl
} // end namespace events
