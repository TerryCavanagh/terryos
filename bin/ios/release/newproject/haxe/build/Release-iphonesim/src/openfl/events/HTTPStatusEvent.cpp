#include <hxcpp.h>

#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_HTTPStatusEvent
#include <openfl/events/HTTPStatusEvent.h>
#endif
namespace openfl{
namespace events{

Void HTTPStatusEvent_obj::__construct(::String type,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable,hx::Null< int >  __o_status,hx::Null< bool >  __o_redirected)
{
HX_STACK_FRAME("openfl.events.HTTPStatusEvent","new",0x992d4c1b,"openfl.events.HTTPStatusEvent.new","openfl/events/HTTPStatusEvent.hx",16,0x9d0269d5)
HX_STACK_THIS(this)
HX_STACK_ARG(type,"type")
HX_STACK_ARG(__o_bubbles,"bubbles")
HX_STACK_ARG(__o_cancelable,"cancelable")
HX_STACK_ARG(__o_status,"status")
HX_STACK_ARG(__o_redirected,"redirected")
bool bubbles = __o_bubbles.Default(false);
bool cancelable = __o_cancelable.Default(false);
int status = __o_status.Default(0);
bool redirected = __o_redirected.Default(false);
{
	HX_STACK_LINE(18)
	this->status = status;
	HX_STACK_LINE(19)
	this->redirected = redirected;
	HX_STACK_LINE(21)
	::String tmp = type;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(21)
	bool tmp1 = bubbles;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(21)
	bool tmp2 = cancelable;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(21)
	super::__construct(tmp,tmp1,tmp2);
}
;
	return null();
}

//HTTPStatusEvent_obj::~HTTPStatusEvent_obj() { }

Dynamic HTTPStatusEvent_obj::__CreateEmpty() { return  new HTTPStatusEvent_obj; }
hx::ObjectPtr< HTTPStatusEvent_obj > HTTPStatusEvent_obj::__new(::String type,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable,hx::Null< int >  __o_status,hx::Null< bool >  __o_redirected)
{  hx::ObjectPtr< HTTPStatusEvent_obj > _result_ = new HTTPStatusEvent_obj();
	_result_->__construct(type,__o_bubbles,__o_cancelable,__o_status,__o_redirected);
	return _result_;}

Dynamic HTTPStatusEvent_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< HTTPStatusEvent_obj > _result_ = new HTTPStatusEvent_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return _result_;}

::openfl::events::Event HTTPStatusEvent_obj::clone( ){
	HX_STACK_FRAME("openfl.events.HTTPStatusEvent","clone",0xe75f33d8,"openfl.events.HTTPStatusEvent.clone","openfl/events/HTTPStatusEvent.hx",26,0x9d0269d5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(28)
	::String tmp = this->type;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(28)
	bool tmp1 = this->bubbles;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(28)
	int tmp2 = this->status;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(28)
	bool tmp3 = this->redirected;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(28)
	::openfl::events::HTTPStatusEvent tmp4 = ::openfl::events::HTTPStatusEvent_obj::__new(tmp,tmp1,null(),tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(28)
	::openfl::events::HTTPStatusEvent event = tmp4;		HX_STACK_VAR(event,"event");
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
	::openfl::events::HTTPStatusEvent tmp8 = event;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(32)
	return tmp8;
}


::String HTTPStatusEvent_obj::toString( ){
	HX_STACK_FRAME("openfl.events.HTTPStatusEvent","toString",0x9713ef11,"openfl.events.HTTPStatusEvent.toString","openfl/events/HTTPStatusEvent.hx",37,0x9d0269d5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(39)
	::String tmp = this->__formatToString(HX_HCSTRING("HTTPStatusEvent","\xe0","\x4c","\x1b","\xfe"),Array_obj< ::String >::__new().Add(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d")).Add(HX_HCSTRING("bubbles","\x67","\xbb","\x56","\x61")).Add(HX_HCSTRING("cancelable","\x14","\xa0","\x79","\xc4")).Add(HX_HCSTRING("status","\x32","\xe7","\xfb","\x05")).Add(HX_HCSTRING("redirected","\x7b","\x4e","\x5a","\x3e")));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(39)
	return tmp;
}


::String HTTPStatusEvent_obj::HTTP_RESPONSE_STATUS;

::String HTTPStatusEvent_obj::HTTP_STATUS;


HTTPStatusEvent_obj::HTTPStatusEvent_obj()
{
}

void HTTPStatusEvent_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(HTTPStatusEvent);
	HX_MARK_MEMBER_NAME(redirected,"redirected");
	HX_MARK_MEMBER_NAME(responseHeaders,"responseHeaders");
	HX_MARK_MEMBER_NAME(responseURL,"responseURL");
	HX_MARK_MEMBER_NAME(status,"status");
	::openfl::events::Event_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void HTTPStatusEvent_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(redirected,"redirected");
	HX_VISIT_MEMBER_NAME(responseHeaders,"responseHeaders");
	HX_VISIT_MEMBER_NAME(responseURL,"responseURL");
	HX_VISIT_MEMBER_NAME(status,"status");
	::openfl::events::Event_obj::__Visit(HX_VISIT_ARG);
}

Dynamic HTTPStatusEvent_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"status") ) { return status; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"redirected") ) { return redirected; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"responseURL") ) { return responseURL; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"responseHeaders") ) { return responseHeaders; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic HTTPStatusEvent_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"status") ) { status=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"redirected") ) { redirected=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"responseURL") ) { responseURL=inValue.Cast< ::String >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"responseHeaders") ) { responseHeaders=inValue.Cast< cpp::ArrayBase >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void HTTPStatusEvent_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("redirected","\x7b","\x4e","\x5a","\x3e"));
	outFields->push(HX_HCSTRING("responseHeaders","\xc5","\x0d","\xca","\x43"));
	outFields->push(HX_HCSTRING("responseURL","\x6e","\x5f","\x19","\x86"));
	outFields->push(HX_HCSTRING("status","\x32","\xe7","\xfb","\x05"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(HTTPStatusEvent_obj,redirected),HX_HCSTRING("redirected","\x7b","\x4e","\x5a","\x3e")},
	{hx::fsObject /*cpp::ArrayBase*/ ,(int)offsetof(HTTPStatusEvent_obj,responseHeaders),HX_HCSTRING("responseHeaders","\xc5","\x0d","\xca","\x43")},
	{hx::fsString,(int)offsetof(HTTPStatusEvent_obj,responseURL),HX_HCSTRING("responseURL","\x6e","\x5f","\x19","\x86")},
	{hx::fsInt,(int)offsetof(HTTPStatusEvent_obj,status),HX_HCSTRING("status","\x32","\xe7","\xfb","\x05")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsString,(void *) &HTTPStatusEvent_obj::HTTP_RESPONSE_STATUS,HX_HCSTRING("HTTP_RESPONSE_STATUS","\x79","\xde","\x26","\x00")},
	{hx::fsString,(void *) &HTTPStatusEvent_obj::HTTP_STATUS,HX_HCSTRING("HTTP_STATUS","\x49","\x42","\xed","\x94")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("redirected","\x7b","\x4e","\x5a","\x3e"),
	HX_HCSTRING("responseHeaders","\xc5","\x0d","\xca","\x43"),
	HX_HCSTRING("responseURL","\x6e","\x5f","\x19","\x86"),
	HX_HCSTRING("status","\x32","\xe7","\xfb","\x05"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(HTTPStatusEvent_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(HTTPStatusEvent_obj::HTTP_RESPONSE_STATUS,"HTTP_RESPONSE_STATUS");
	HX_MARK_MEMBER_NAME(HTTPStatusEvent_obj::HTTP_STATUS,"HTTP_STATUS");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(HTTPStatusEvent_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(HTTPStatusEvent_obj::HTTP_RESPONSE_STATUS,"HTTP_RESPONSE_STATUS");
	HX_VISIT_MEMBER_NAME(HTTPStatusEvent_obj::HTTP_STATUS,"HTTP_STATUS");
};

#endif

hx::Class HTTPStatusEvent_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("HTTP_RESPONSE_STATUS","\x79","\xde","\x26","\x00"),
	HX_HCSTRING("HTTP_STATUS","\x49","\x42","\xed","\x94"),
	::String(null()) };

void HTTPStatusEvent_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.events.HTTPStatusEvent","\xa9","\xa2","\xc0","\x61");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< HTTPStatusEvent_obj >;
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

void HTTPStatusEvent_obj::__boot()
{
	HTTP_RESPONSE_STATUS= HX_HCSTRING("httpResponseStatus","\x3b","\xae","\xf6","\x61");
	HTTP_STATUS= HX_HCSTRING("httpStatus","\xda","\x4c","\x74","\x0a");
}

} // end namespace openfl
} // end namespace events
