#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
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
#ifndef INCLUDED_openfl_events_TouchEvent
#include <openfl/events/TouchEvent.h>
#endif
#ifndef INCLUDED_openfl_geom_Point
#include <openfl/geom/Point.h>
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
namespace openfl{
namespace events{

Void TouchEvent_obj::__construct(::String type,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable,hx::Null< int >  __o_touchPointID,hx::Null< bool >  __o_isPrimaryTouchPoint,hx::Null< Float >  __o_localX,hx::Null< Float >  __o_localY,hx::Null< Float >  __o_sizeX,hx::Null< Float >  __o_sizeY,hx::Null< Float >  __o_pressure,::openfl::display::InteractiveObject relatedObject,hx::Null< bool >  __o_ctrlKey,hx::Null< bool >  __o_altKey,hx::Null< bool >  __o_shiftKey,hx::Null< bool >  __o_commandKey,hx::Null< bool >  __o_controlKey,hx::Null< Float >  __o_timestamp,::String touchIntent,::openfl::utils::ByteArrayData samples,hx::Null< bool >  __o_isTouchPointCanceled)
{
HX_STACK_FRAME("openfl.events.TouchEvent","new",0xe223a0c4,"openfl.events.TouchEvent.new","openfl/events/TouchEvent.hx",39,0x2fe85d0c)
HX_STACK_THIS(this)
HX_STACK_ARG(type,"type")
HX_STACK_ARG(__o_bubbles,"bubbles")
HX_STACK_ARG(__o_cancelable,"cancelable")
HX_STACK_ARG(__o_touchPointID,"touchPointID")
HX_STACK_ARG(__o_isPrimaryTouchPoint,"isPrimaryTouchPoint")
HX_STACK_ARG(__o_localX,"localX")
HX_STACK_ARG(__o_localY,"localY")
HX_STACK_ARG(__o_sizeX,"sizeX")
HX_STACK_ARG(__o_sizeY,"sizeY")
HX_STACK_ARG(__o_pressure,"pressure")
HX_STACK_ARG(relatedObject,"relatedObject")
HX_STACK_ARG(__o_ctrlKey,"ctrlKey")
HX_STACK_ARG(__o_altKey,"altKey")
HX_STACK_ARG(__o_shiftKey,"shiftKey")
HX_STACK_ARG(__o_commandKey,"commandKey")
HX_STACK_ARG(__o_controlKey,"controlKey")
HX_STACK_ARG(__o_timestamp,"timestamp")
HX_STACK_ARG(touchIntent,"touchIntent")
HX_STACK_ARG(samples,"samples")
HX_STACK_ARG(__o_isTouchPointCanceled,"isTouchPointCanceled")
bool bubbles = __o_bubbles.Default(true);
bool cancelable = __o_cancelable.Default(false);
int touchPointID = __o_touchPointID.Default(0);
bool isPrimaryTouchPoint = __o_isPrimaryTouchPoint.Default(false);
Float localX = __o_localX.Default(0);
Float localY = __o_localY.Default(0);
Float sizeX = __o_sizeX.Default(0);
Float sizeY = __o_sizeY.Default(0);
Float pressure = __o_pressure.Default(0);
bool ctrlKey = __o_ctrlKey.Default(false);
bool altKey = __o_altKey.Default(false);
bool shiftKey = __o_shiftKey.Default(false);
bool commandKey = __o_commandKey.Default(false);
bool controlKey = __o_controlKey.Default(false);
Float timestamp = __o_timestamp.Default(0);
bool isTouchPointCanceled = __o_isTouchPointCanceled.Default(false);
{
	HX_STACK_LINE(41)
	::String tmp = type;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(41)
	bool tmp1 = bubbles;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(41)
	bool tmp2 = cancelable;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(41)
	super::__construct(tmp,tmp1,tmp2);
	HX_STACK_LINE(43)
	this->touchPointID = touchPointID;
	HX_STACK_LINE(44)
	this->isPrimaryTouchPoint = isPrimaryTouchPoint;
	HX_STACK_LINE(45)
	this->localX = localX;
	HX_STACK_LINE(46)
	this->localY = localY;
	HX_STACK_LINE(47)
	this->sizeX = sizeX;
	HX_STACK_LINE(48)
	this->sizeY = sizeY;
	HX_STACK_LINE(49)
	this->pressure = pressure;
	HX_STACK_LINE(50)
	this->relatedObject = relatedObject;
	HX_STACK_LINE(51)
	this->ctrlKey = ctrlKey;
	HX_STACK_LINE(52)
	this->altKey = altKey;
	HX_STACK_LINE(53)
	this->shiftKey = shiftKey;
	HX_STACK_LINE(54)
	this->commandKey = commandKey;
	HX_STACK_LINE(55)
	this->controlKey = controlKey;
}
;
	return null();
}

//TouchEvent_obj::~TouchEvent_obj() { }

Dynamic TouchEvent_obj::__CreateEmpty() { return  new TouchEvent_obj; }
hx::ObjectPtr< TouchEvent_obj > TouchEvent_obj::__new(::String type,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable,hx::Null< int >  __o_touchPointID,hx::Null< bool >  __o_isPrimaryTouchPoint,hx::Null< Float >  __o_localX,hx::Null< Float >  __o_localY,hx::Null< Float >  __o_sizeX,hx::Null< Float >  __o_sizeY,hx::Null< Float >  __o_pressure,::openfl::display::InteractiveObject relatedObject,hx::Null< bool >  __o_ctrlKey,hx::Null< bool >  __o_altKey,hx::Null< bool >  __o_shiftKey,hx::Null< bool >  __o_commandKey,hx::Null< bool >  __o_controlKey,hx::Null< Float >  __o_timestamp,::String touchIntent,::openfl::utils::ByteArrayData samples,hx::Null< bool >  __o_isTouchPointCanceled)
{  hx::ObjectPtr< TouchEvent_obj > _result_ = new TouchEvent_obj();
	_result_->__construct(type,__o_bubbles,__o_cancelable,__o_touchPointID,__o_isPrimaryTouchPoint,__o_localX,__o_localY,__o_sizeX,__o_sizeY,__o_pressure,relatedObject,__o_ctrlKey,__o_altKey,__o_shiftKey,__o_commandKey,__o_controlKey,__o_timestamp,touchIntent,samples,__o_isTouchPointCanceled);
	return _result_;}

Dynamic TouchEvent_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TouchEvent_obj > _result_ = new TouchEvent_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6],inArgs[7],inArgs[8],inArgs[9],inArgs[10],inArgs[11],inArgs[12],inArgs[13],inArgs[14],inArgs[15],inArgs[16],inArgs[17],inArgs[18],inArgs[19]);
	return _result_;}

::openfl::events::Event TouchEvent_obj::clone( ){
	HX_STACK_FRAME("openfl.events.TouchEvent","clone",0x1a12c4c1,"openfl.events.TouchEvent.clone","openfl/events/TouchEvent.hx",60,0x2fe85d0c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(62)
	::String tmp = this->type;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(62)
	bool tmp1 = this->bubbles;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(62)
	bool tmp2 = this->cancelable;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(62)
	int tmp3 = this->touchPointID;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(62)
	bool tmp4 = this->isPrimaryTouchPoint;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(62)
	Float tmp5 = this->localX;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(62)
	Float tmp6 = this->localY;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(62)
	Float tmp7 = this->sizeX;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(62)
	Float tmp8 = this->sizeY;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(62)
	Float tmp9 = this->pressure;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(62)
	::openfl::display::InteractiveObject tmp10 = this->relatedObject;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(62)
	bool tmp11 = this->ctrlKey;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(62)
	bool tmp12 = this->altKey;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(62)
	bool tmp13 = this->shiftKey;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(62)
	bool tmp14 = this->commandKey;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(62)
	bool tmp15 = this->controlKey;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(62)
	::openfl::events::TouchEvent tmp16 = ::openfl::events::TouchEvent_obj::__new(tmp,tmp1,tmp2,tmp3,tmp4,tmp5,tmp6,tmp7,tmp8,tmp9,tmp10,tmp11,tmp12,tmp13,tmp14,tmp15,null(),null(),null(),null());		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(62)
	::openfl::events::TouchEvent event = tmp16;		HX_STACK_VAR(event,"event");
	HX_STACK_LINE(63)
	Dynamic tmp17 = this->target;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(63)
	event->target = tmp17;
	HX_STACK_LINE(64)
	Dynamic tmp18 = this->currentTarget;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(64)
	event->currentTarget = tmp18;
	HX_STACK_LINE(65)
	int tmp19 = this->eventPhase;		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(65)
	event->eventPhase = tmp19;
	HX_STACK_LINE(66)
	::openfl::events::TouchEvent tmp20 = event;		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(66)
	return tmp20;
}


::String TouchEvent_obj::toString( ){
	HX_STACK_FRAME("openfl.events.TouchEvent","toString",0x9efd15c8,"openfl.events.TouchEvent.toString","openfl/events/TouchEvent.hx",71,0x2fe85d0c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(73)
	::String tmp = this->__formatToString(HX_HCSTRING("TouchEvent","\xfb","\xaf","\x06","\x66"),Array_obj< ::String >::__new().Add(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d")).Add(HX_HCSTRING("bubbles","\x67","\xbb","\x56","\x61")).Add(HX_HCSTRING("cancelable","\x14","\xa0","\x79","\xc4")).Add(HX_HCSTRING("touchPointID","\x2c","\xbe","\x83","\x7b")).Add(HX_HCSTRING("isPrimaryTouchPoint","\x29","\x3f","\x07","\x49")).Add(HX_HCSTRING("localX","\x8d","\x74","\xbf","\x59")).Add(HX_HCSTRING("localY","\x8e","\x74","\xbf","\x59")).Add(HX_HCSTRING("sizeX","\x77","\x08","\xd9","\x7c")).Add(HX_HCSTRING("sizeY","\x78","\x08","\xd9","\x7c")).Add(HX_HCSTRING("pressure","\xc5","\xab","\x1d","\x70")).Add(HX_HCSTRING("relatedObject","\x0a","\xbf","\xcb","\xe8")).Add(HX_HCSTRING("ctrlKey","\xb4","\x35","\x7d","\x61")).Add(HX_HCSTRING("altKey","\xf6","\xa7","\xca","\x44")).Add(HX_HCSTRING("shiftKey","\x3d","\x92","\x9f","\x99")).Add(HX_HCSTRING("commandKey","\x14","\x71","\x9b","\x43")).Add(HX_HCSTRING("controlKey","\x42","\x8e","\xa5","\x04")));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(73)
	return tmp;
}


Void TouchEvent_obj::updateAfterEvent( ){
{
		HX_STACK_FRAME("openfl.events.TouchEvent","updateAfterEvent",0xeb0abce3,"openfl.events.TouchEvent.updateAfterEvent","openfl/events/TouchEvent.hx",78,0x2fe85d0c)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TouchEvent_obj,updateAfterEvent,(void))

::String TouchEvent_obj::TOUCH_BEGIN;

::String TouchEvent_obj::TOUCH_END;

::String TouchEvent_obj::TOUCH_MOVE;

::String TouchEvent_obj::TOUCH_OUT;

::String TouchEvent_obj::TOUCH_OVER;

::String TouchEvent_obj::TOUCH_ROLL_OUT;

::String TouchEvent_obj::TOUCH_ROLL_OVER;

::String TouchEvent_obj::TOUCH_TAP;

::openfl::events::TouchEvent TouchEvent_obj::__create( ::String type,Dynamic touch,Float stageX,Float stageY,::openfl::geom::Point local,::openfl::display::InteractiveObject target){
	HX_STACK_FRAME("openfl.events.TouchEvent","__create",0x8acd1738,"openfl.events.TouchEvent.__create","openfl/events/TouchEvent.hx",85,0x2fe85d0c)
	HX_STACK_ARG(type,"type")
	HX_STACK_ARG(touch,"touch")
	HX_STACK_ARG(stageX,"stageX")
	HX_STACK_ARG(stageY,"stageY")
	HX_STACK_ARG(local,"local")
	HX_STACK_ARG(target,"target")
	HX_STACK_LINE(87)
	::openfl::events::TouchEvent tmp = ::openfl::events::TouchEvent_obj::__new(type,true,false,(int)0,true,local->x,local->y,(int)1,(int)1,(int)1,null(),null(),null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(87)
	::openfl::events::TouchEvent evt = tmp;		HX_STACK_VAR(evt,"evt");
	HX_STACK_LINE(88)
	evt->stageX = stageX;
	HX_STACK_LINE(89)
	evt->stageY = stageY;
	HX_STACK_LINE(90)
	evt->target = target;
	HX_STACK_LINE(92)
	::openfl::events::TouchEvent tmp1 = evt;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(92)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(TouchEvent_obj,__create,return )


TouchEvent_obj::TouchEvent_obj()
{
}

void TouchEvent_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TouchEvent);
	HX_MARK_MEMBER_NAME(altKey,"altKey");
	HX_MARK_MEMBER_NAME(commandKey,"commandKey");
	HX_MARK_MEMBER_NAME(controlKey,"controlKey");
	HX_MARK_MEMBER_NAME(ctrlKey,"ctrlKey");
	HX_MARK_MEMBER_NAME(delta,"delta");
	HX_MARK_MEMBER_NAME(isPrimaryTouchPoint,"isPrimaryTouchPoint");
	HX_MARK_MEMBER_NAME(localX,"localX");
	HX_MARK_MEMBER_NAME(localY,"localY");
	HX_MARK_MEMBER_NAME(pressure,"pressure");
	HX_MARK_MEMBER_NAME(relatedObject,"relatedObject");
	HX_MARK_MEMBER_NAME(shiftKey,"shiftKey");
	HX_MARK_MEMBER_NAME(sizeX,"sizeX");
	HX_MARK_MEMBER_NAME(sizeY,"sizeY");
	HX_MARK_MEMBER_NAME(stageX,"stageX");
	HX_MARK_MEMBER_NAME(stageY,"stageY");
	HX_MARK_MEMBER_NAME(touchPointID,"touchPointID");
	::openfl::events::Event_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void TouchEvent_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(altKey,"altKey");
	HX_VISIT_MEMBER_NAME(commandKey,"commandKey");
	HX_VISIT_MEMBER_NAME(controlKey,"controlKey");
	HX_VISIT_MEMBER_NAME(ctrlKey,"ctrlKey");
	HX_VISIT_MEMBER_NAME(delta,"delta");
	HX_VISIT_MEMBER_NAME(isPrimaryTouchPoint,"isPrimaryTouchPoint");
	HX_VISIT_MEMBER_NAME(localX,"localX");
	HX_VISIT_MEMBER_NAME(localY,"localY");
	HX_VISIT_MEMBER_NAME(pressure,"pressure");
	HX_VISIT_MEMBER_NAME(relatedObject,"relatedObject");
	HX_VISIT_MEMBER_NAME(shiftKey,"shiftKey");
	HX_VISIT_MEMBER_NAME(sizeX,"sizeX");
	HX_VISIT_MEMBER_NAME(sizeY,"sizeY");
	HX_VISIT_MEMBER_NAME(stageX,"stageX");
	HX_VISIT_MEMBER_NAME(stageY,"stageY");
	HX_VISIT_MEMBER_NAME(touchPointID,"touchPointID");
	::openfl::events::Event_obj::__Visit(HX_VISIT_ARG);
}

Dynamic TouchEvent_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"delta") ) { return delta; }
		if (HX_FIELD_EQ(inName,"sizeX") ) { return sizeX; }
		if (HX_FIELD_EQ(inName,"sizeY") ) { return sizeY; }
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"altKey") ) { return altKey; }
		if (HX_FIELD_EQ(inName,"localX") ) { return localX; }
		if (HX_FIELD_EQ(inName,"localY") ) { return localY; }
		if (HX_FIELD_EQ(inName,"stageX") ) { return stageX; }
		if (HX_FIELD_EQ(inName,"stageY") ) { return stageY; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"ctrlKey") ) { return ctrlKey; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"pressure") ) { return pressure; }
		if (HX_FIELD_EQ(inName,"shiftKey") ) { return shiftKey; }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"commandKey") ) { return commandKey; }
		if (HX_FIELD_EQ(inName,"controlKey") ) { return controlKey; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"touchPointID") ) { return touchPointID; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"relatedObject") ) { return relatedObject; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"updateAfterEvent") ) { return updateAfterEvent_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"isPrimaryTouchPoint") ) { return isPrimaryTouchPoint; }
	}
	return super::__Field(inName,inCallProp);
}

bool TouchEvent_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"__create") ) { outValue = __create_dyn(); return true;  }
	}
	return false;
}

Dynamic TouchEvent_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"delta") ) { delta=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"sizeX") ) { sizeX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"sizeY") ) { sizeY=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"altKey") ) { altKey=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"localX") ) { localX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"localY") ) { localY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"stageX") ) { stageX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"stageY") ) { stageY=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"ctrlKey") ) { ctrlKey=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"pressure") ) { pressure=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"shiftKey") ) { shiftKey=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"commandKey") ) { commandKey=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"controlKey") ) { controlKey=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"touchPointID") ) { touchPointID=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"relatedObject") ) { relatedObject=inValue.Cast< ::openfl::display::InteractiveObject >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"isPrimaryTouchPoint") ) { isPrimaryTouchPoint=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TouchEvent_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("altKey","\xf6","\xa7","\xca","\x44"));
	outFields->push(HX_HCSTRING("commandKey","\x14","\x71","\x9b","\x43"));
	outFields->push(HX_HCSTRING("controlKey","\x42","\x8e","\xa5","\x04"));
	outFields->push(HX_HCSTRING("ctrlKey","\xb4","\x35","\x7d","\x61"));
	outFields->push(HX_HCSTRING("delta","\xf8","\xe7","\x26","\xd7"));
	outFields->push(HX_HCSTRING("isPrimaryTouchPoint","\x29","\x3f","\x07","\x49"));
	outFields->push(HX_HCSTRING("localX","\x8d","\x74","\xbf","\x59"));
	outFields->push(HX_HCSTRING("localY","\x8e","\x74","\xbf","\x59"));
	outFields->push(HX_HCSTRING("pressure","\xc5","\xab","\x1d","\x70"));
	outFields->push(HX_HCSTRING("relatedObject","\x0a","\xbf","\xcb","\xe8"));
	outFields->push(HX_HCSTRING("shiftKey","\x3d","\x92","\x9f","\x99"));
	outFields->push(HX_HCSTRING("sizeX","\x77","\x08","\xd9","\x7c"));
	outFields->push(HX_HCSTRING("sizeY","\x78","\x08","\xd9","\x7c"));
	outFields->push(HX_HCSTRING("stageX","\xda","\xfb","\xf1","\x05"));
	outFields->push(HX_HCSTRING("stageY","\xdb","\xfb","\xf1","\x05"));
	outFields->push(HX_HCSTRING("touchPointID","\x2c","\xbe","\x83","\x7b"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(TouchEvent_obj,altKey),HX_HCSTRING("altKey","\xf6","\xa7","\xca","\x44")},
	{hx::fsBool,(int)offsetof(TouchEvent_obj,commandKey),HX_HCSTRING("commandKey","\x14","\x71","\x9b","\x43")},
	{hx::fsBool,(int)offsetof(TouchEvent_obj,controlKey),HX_HCSTRING("controlKey","\x42","\x8e","\xa5","\x04")},
	{hx::fsBool,(int)offsetof(TouchEvent_obj,ctrlKey),HX_HCSTRING("ctrlKey","\xb4","\x35","\x7d","\x61")},
	{hx::fsInt,(int)offsetof(TouchEvent_obj,delta),HX_HCSTRING("delta","\xf8","\xe7","\x26","\xd7")},
	{hx::fsBool,(int)offsetof(TouchEvent_obj,isPrimaryTouchPoint),HX_HCSTRING("isPrimaryTouchPoint","\x29","\x3f","\x07","\x49")},
	{hx::fsFloat,(int)offsetof(TouchEvent_obj,localX),HX_HCSTRING("localX","\x8d","\x74","\xbf","\x59")},
	{hx::fsFloat,(int)offsetof(TouchEvent_obj,localY),HX_HCSTRING("localY","\x8e","\x74","\xbf","\x59")},
	{hx::fsFloat,(int)offsetof(TouchEvent_obj,pressure),HX_HCSTRING("pressure","\xc5","\xab","\x1d","\x70")},
	{hx::fsObject /*::openfl::display::InteractiveObject*/ ,(int)offsetof(TouchEvent_obj,relatedObject),HX_HCSTRING("relatedObject","\x0a","\xbf","\xcb","\xe8")},
	{hx::fsBool,(int)offsetof(TouchEvent_obj,shiftKey),HX_HCSTRING("shiftKey","\x3d","\x92","\x9f","\x99")},
	{hx::fsFloat,(int)offsetof(TouchEvent_obj,sizeX),HX_HCSTRING("sizeX","\x77","\x08","\xd9","\x7c")},
	{hx::fsFloat,(int)offsetof(TouchEvent_obj,sizeY),HX_HCSTRING("sizeY","\x78","\x08","\xd9","\x7c")},
	{hx::fsFloat,(int)offsetof(TouchEvent_obj,stageX),HX_HCSTRING("stageX","\xda","\xfb","\xf1","\x05")},
	{hx::fsFloat,(int)offsetof(TouchEvent_obj,stageY),HX_HCSTRING("stageY","\xdb","\xfb","\xf1","\x05")},
	{hx::fsInt,(int)offsetof(TouchEvent_obj,touchPointID),HX_HCSTRING("touchPointID","\x2c","\xbe","\x83","\x7b")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsString,(void *) &TouchEvent_obj::TOUCH_BEGIN,HX_HCSTRING("TOUCH_BEGIN","\x29","\xba","\x86","\x7e")},
	{hx::fsString,(void *) &TouchEvent_obj::TOUCH_END,HX_HCSTRING("TOUCH_END","\xdb","\xef","\x2a","\x2a")},
	{hx::fsString,(void *) &TouchEvent_obj::TOUCH_MOVE,HX_HCSTRING("TOUCH_MOVE","\xf1","\x76","\xb1","\xc0")},
	{hx::fsString,(void *) &TouchEvent_obj::TOUCH_OUT,HX_HCSTRING("TOUCH_OUT","\x8e","\x8c","\x32","\x2a")},
	{hx::fsString,(void *) &TouchEvent_obj::TOUCH_OVER,HX_HCSTRING("TOUCH_OVER","\x34","\x25","\x09","\xc2")},
	{hx::fsString,(void *) &TouchEvent_obj::TOUCH_ROLL_OUT,HX_HCSTRING("TOUCH_ROLL_OUT","\x4c","\x73","\x76","\xde")},
	{hx::fsString,(void *) &TouchEvent_obj::TOUCH_ROLL_OVER,HX_HCSTRING("TOUCH_ROLL_OVER","\xb6","\x24","\x2f","\xc9")},
	{hx::fsString,(void *) &TouchEvent_obj::TOUCH_TAP,HX_HCSTRING("TOUCH_TAP","\x63","\x46","\x36","\x2a")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("altKey","\xf6","\xa7","\xca","\x44"),
	HX_HCSTRING("commandKey","\x14","\x71","\x9b","\x43"),
	HX_HCSTRING("controlKey","\x42","\x8e","\xa5","\x04"),
	HX_HCSTRING("ctrlKey","\xb4","\x35","\x7d","\x61"),
	HX_HCSTRING("delta","\xf8","\xe7","\x26","\xd7"),
	HX_HCSTRING("isPrimaryTouchPoint","\x29","\x3f","\x07","\x49"),
	HX_HCSTRING("localX","\x8d","\x74","\xbf","\x59"),
	HX_HCSTRING("localY","\x8e","\x74","\xbf","\x59"),
	HX_HCSTRING("pressure","\xc5","\xab","\x1d","\x70"),
	HX_HCSTRING("relatedObject","\x0a","\xbf","\xcb","\xe8"),
	HX_HCSTRING("shiftKey","\x3d","\x92","\x9f","\x99"),
	HX_HCSTRING("sizeX","\x77","\x08","\xd9","\x7c"),
	HX_HCSTRING("sizeY","\x78","\x08","\xd9","\x7c"),
	HX_HCSTRING("stageX","\xda","\xfb","\xf1","\x05"),
	HX_HCSTRING("stageY","\xdb","\xfb","\xf1","\x05"),
	HX_HCSTRING("touchPointID","\x2c","\xbe","\x83","\x7b"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	HX_HCSTRING("updateAfterEvent","\xc7","\xfb","\xc7","\x22"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TouchEvent_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(TouchEvent_obj::TOUCH_BEGIN,"TOUCH_BEGIN");
	HX_MARK_MEMBER_NAME(TouchEvent_obj::TOUCH_END,"TOUCH_END");
	HX_MARK_MEMBER_NAME(TouchEvent_obj::TOUCH_MOVE,"TOUCH_MOVE");
	HX_MARK_MEMBER_NAME(TouchEvent_obj::TOUCH_OUT,"TOUCH_OUT");
	HX_MARK_MEMBER_NAME(TouchEvent_obj::TOUCH_OVER,"TOUCH_OVER");
	HX_MARK_MEMBER_NAME(TouchEvent_obj::TOUCH_ROLL_OUT,"TOUCH_ROLL_OUT");
	HX_MARK_MEMBER_NAME(TouchEvent_obj::TOUCH_ROLL_OVER,"TOUCH_ROLL_OVER");
	HX_MARK_MEMBER_NAME(TouchEvent_obj::TOUCH_TAP,"TOUCH_TAP");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TouchEvent_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(TouchEvent_obj::TOUCH_BEGIN,"TOUCH_BEGIN");
	HX_VISIT_MEMBER_NAME(TouchEvent_obj::TOUCH_END,"TOUCH_END");
	HX_VISIT_MEMBER_NAME(TouchEvent_obj::TOUCH_MOVE,"TOUCH_MOVE");
	HX_VISIT_MEMBER_NAME(TouchEvent_obj::TOUCH_OUT,"TOUCH_OUT");
	HX_VISIT_MEMBER_NAME(TouchEvent_obj::TOUCH_OVER,"TOUCH_OVER");
	HX_VISIT_MEMBER_NAME(TouchEvent_obj::TOUCH_ROLL_OUT,"TOUCH_ROLL_OUT");
	HX_VISIT_MEMBER_NAME(TouchEvent_obj::TOUCH_ROLL_OVER,"TOUCH_ROLL_OVER");
	HX_VISIT_MEMBER_NAME(TouchEvent_obj::TOUCH_TAP,"TOUCH_TAP");
};

#endif

hx::Class TouchEvent_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("TOUCH_BEGIN","\x29","\xba","\x86","\x7e"),
	HX_HCSTRING("TOUCH_END","\xdb","\xef","\x2a","\x2a"),
	HX_HCSTRING("TOUCH_MOVE","\xf1","\x76","\xb1","\xc0"),
	HX_HCSTRING("TOUCH_OUT","\x8e","\x8c","\x32","\x2a"),
	HX_HCSTRING("TOUCH_OVER","\x34","\x25","\x09","\xc2"),
	HX_HCSTRING("TOUCH_ROLL_OUT","\x4c","\x73","\x76","\xde"),
	HX_HCSTRING("TOUCH_ROLL_OVER","\xb6","\x24","\x2f","\xc9"),
	HX_HCSTRING("TOUCH_TAP","\x63","\x46","\x36","\x2a"),
	HX_HCSTRING("__create","\x1c","\xd2","\x3e","\x24"),
	::String(null()) };

void TouchEvent_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.events.TouchEvent","\xd2","\x2e","\x13","\xe5");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &TouchEvent_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< TouchEvent_obj >;
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

void TouchEvent_obj::__boot()
{
	TOUCH_BEGIN= HX_HCSTRING("touchBegin","\xea","\xcd","\xe6","\xa9");
	TOUCH_END= HX_HCSTRING("touchEnd","\x5c","\xc5","\x09","\x00");
	TOUCH_MOVE= HX_HCSTRING("touchMove","\x70","\x72","\xcd","\x0d");
	TOUCH_OUT= HX_HCSTRING("touchOut","\x0f","\x62","\x11","\x00");
	TOUCH_OVER= HX_HCSTRING("touchOver","\xb3","\x20","\x25","\x0f");
	TOUCH_ROLL_OUT= HX_HCSTRING("touchRollOut","\x12","\x0f","\x74","\x87");
	TOUCH_ROLL_OVER= HX_HCSTRING("touchRollOver","\x50","\xd6","\x19","\xfe");
	TOUCH_TAP= HX_HCSTRING("touchTap","\xe4","\x1b","\x15","\x00");
}

} // end namespace openfl
} // end namespace events
