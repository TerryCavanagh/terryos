#include <hxcpp.h>

#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_ui_Gamepad
#include <lime/ui/Gamepad.h>
#endif
#ifndef INCLUDED_openfl__Vector_IVector
#include <openfl/_Vector/IVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_ObjectVector
#include <openfl/_Vector/ObjectVector.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_ui_GameInputControl
#include <openfl/ui/GameInputControl.h>
#endif
#ifndef INCLUDED_openfl_ui_GameInputDevice
#include <openfl/ui/GameInputDevice.h>
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
namespace ui{

Void GameInputDevice_obj::__construct(::String id,::String name)
{
HX_STACK_FRAME("openfl.ui.GameInputDevice","new",0x66440344,"openfl.ui.GameInputDevice.new","openfl/ui/GameInputDevice.hx",10,0x744a6f4c)
HX_STACK_THIS(this)
HX_STACK_ARG(id,"id")
HX_STACK_ARG(name,"name")
{
	HX_STACK_LINE(23)
	this->__controls = Array_obj< ::Dynamic >::__new();
	struct _Function_1_1{
		inline static ::haxe::ds::IntMap Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/ui/GameInputDevice.hx",22,0x744a6f4c)
			{
				HX_STACK_LINE(22)
				::haxe::ds::IntMap tmp = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(22)
				::haxe::ds::IntMap tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(22)
				return tmp1;
			}
			return null();
		}
	};
	HX_STACK_LINE(22)
	this->__button = _Function_1_1::Block();
	struct _Function_1_2{
		inline static ::haxe::ds::IntMap Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/ui/GameInputDevice.hx",21,0x744a6f4c)
			{
				HX_STACK_LINE(21)
				::haxe::ds::IntMap tmp = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(21)
				::haxe::ds::IntMap tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(21)
				return tmp1;
			}
			return null();
		}
	};
	HX_STACK_LINE(21)
	this->__axis = _Function_1_2::Block();
	HX_STACK_LINE(29)
	this->id = id;
	HX_STACK_LINE(30)
	this->name = name;
	HX_STACK_LINE(32)
	::openfl::ui::GameInputControl control;		HX_STACK_VAR(control,"control");
	HX_STACK_LINE(34)
	{
		HX_STACK_LINE(34)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(34)
		while((true)){
			HX_STACK_LINE(34)
			bool tmp = (_g < (int)6);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(34)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(34)
			if ((tmp1)){
				HX_STACK_LINE(34)
				break;
			}
			HX_STACK_LINE(34)
			int tmp2 = (_g)++;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(34)
			int i = tmp2;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(36)
			::String tmp3 = (HX_HCSTRING("AXIS_","\x9e","\x28","\x6e","\xa7") + i);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(36)
			::openfl::ui::GameInputControl tmp4 = ::openfl::ui::GameInputControl_obj::__new(hx::ObjectPtr<OBJ_>(this),tmp3,(int)-1,(int)1,null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(36)
			control = tmp4;
			HX_STACK_LINE(37)
			::haxe::ds::IntMap tmp5 = this->__axis;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(37)
			int tmp6 = i;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(37)
			::openfl::ui::GameInputControl tmp7 = control;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(37)
			tmp5->set(tmp6,tmp7);
			HX_STACK_LINE(38)
			::openfl::ui::GameInputControl tmp8 = control;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(38)
			this->__controls->push(tmp8);
		}
	}
	HX_STACK_LINE(42)
	{
		HX_STACK_LINE(42)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(42)
		while((true)){
			HX_STACK_LINE(42)
			bool tmp = (_g < (int)15);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(42)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(42)
			if ((tmp1)){
				HX_STACK_LINE(42)
				break;
			}
			HX_STACK_LINE(42)
			int tmp2 = (_g)++;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(42)
			int i = tmp2;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(44)
			::String tmp3 = (HX_HCSTRING("BUTTON_","\x2d","\x26","\x49","\x4a") + i);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(44)
			::openfl::ui::GameInputControl tmp4 = ::openfl::ui::GameInputControl_obj::__new(hx::ObjectPtr<OBJ_>(this),tmp3,(int)0,(int)1,null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(44)
			control = tmp4;
			HX_STACK_LINE(45)
			::haxe::ds::IntMap tmp5 = this->__button;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(45)
			int tmp6 = i;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(45)
			::openfl::ui::GameInputControl tmp7 = control;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(45)
			tmp5->set(tmp6,tmp7);
			HX_STACK_LINE(46)
			::openfl::ui::GameInputControl tmp8 = control;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(46)
			this->__controls->push(tmp8);
		}
	}
}
;
	return null();
}

//GameInputDevice_obj::~GameInputDevice_obj() { }

Dynamic GameInputDevice_obj::__CreateEmpty() { return  new GameInputDevice_obj; }
hx::ObjectPtr< GameInputDevice_obj > GameInputDevice_obj::__new(::String id,::String name)
{  hx::ObjectPtr< GameInputDevice_obj > _result_ = new GameInputDevice_obj();
	_result_->__construct(id,name);
	return _result_;}

Dynamic GameInputDevice_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< GameInputDevice_obj > _result_ = new GameInputDevice_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

int GameInputDevice_obj::getCachedSamples( ::openfl::utils::ByteArrayData data,hx::Null< bool >  __o_append){
bool append = __o_append.Default(false);
	HX_STACK_FRAME("openfl.ui.GameInputDevice","getCachedSamples",0x0422a56d,"openfl.ui.GameInputDevice.getCachedSamples","openfl/ui/GameInputDevice.hx",55,0x744a6f4c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(data,"data")
	HX_STACK_ARG(append,"append")
{
		HX_STACK_LINE(55)
		return (int)0;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(GameInputDevice_obj,getCachedSamples,return )

::openfl::ui::GameInputControl GameInputDevice_obj::getControlAt( int i){
	HX_STACK_FRAME("openfl.ui.GameInputDevice","getControlAt",0xc65be2d6,"openfl.ui.GameInputDevice.getControlAt","openfl/ui/GameInputDevice.hx",60,0x744a6f4c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(i,"i")
	HX_STACK_LINE(62)
	bool tmp = (i >= (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(62)
	bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(62)
	if ((tmp)){
		HX_STACK_LINE(62)
		int tmp2 = i;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(62)
		int tmp3 = this->__controls->length;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(62)
		int tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(62)
		tmp1 = (tmp2 < tmp4);
	}
	else{
		HX_STACK_LINE(62)
		tmp1 = false;
	}
	HX_STACK_LINE(62)
	if ((tmp1)){
		HX_STACK_LINE(64)
		::openfl::ui::GameInputControl tmp2 = this->__controls->__get(i).StaticCast< ::openfl::ui::GameInputControl >();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(64)
		return tmp2;
	}
	HX_STACK_LINE(68)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(GameInputDevice_obj,getControlAt,return )

Void GameInputDevice_obj::startCachingSamples( int numSamples,::openfl::_Vector::ObjectVector controls){
{
		HX_STACK_FRAME("openfl.ui.GameInputDevice","startCachingSamples",0xf3794db0,"openfl.ui.GameInputDevice.startCachingSamples","openfl/ui/GameInputDevice.hx",73,0x744a6f4c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(numSamples,"numSamples")
		HX_STACK_ARG(controls,"controls")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(GameInputDevice_obj,startCachingSamples,(void))

Void GameInputDevice_obj::stopCachingSamples( ){
{
		HX_STACK_FRAME("openfl.ui.GameInputDevice","stopCachingSamples",0xbbb05408,"openfl.ui.GameInputDevice.stopCachingSamples","openfl/ui/GameInputDevice.hx",80,0x744a6f4c)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(GameInputDevice_obj,stopCachingSamples,(void))

int GameInputDevice_obj::get_numControls( ){
	HX_STACK_FRAME("openfl.ui.GameInputDevice","get_numControls",0x2a978757,"openfl.ui.GameInputDevice.get_numControls","openfl/ui/GameInputDevice.hx",94,0x744a6f4c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(96)
	int tmp = this->__controls->length;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(96)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(GameInputDevice_obj,get_numControls,return )

int GameInputDevice_obj::MAX_BUFFER_SIZE;


GameInputDevice_obj::GameInputDevice_obj()
{
}

void GameInputDevice_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GameInputDevice);
	HX_MARK_MEMBER_NAME(enabled,"enabled");
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(sampleInterval,"sampleInterval");
	HX_MARK_MEMBER_NAME(__axis,"__axis");
	HX_MARK_MEMBER_NAME(__button,"__button");
	HX_MARK_MEMBER_NAME(__controls,"__controls");
	HX_MARK_MEMBER_NAME(__gamepad,"__gamepad");
	HX_MARK_END_CLASS();
}

void GameInputDevice_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(enabled,"enabled");
	HX_VISIT_MEMBER_NAME(id,"id");
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(sampleInterval,"sampleInterval");
	HX_VISIT_MEMBER_NAME(__axis,"__axis");
	HX_VISIT_MEMBER_NAME(__button,"__button");
	HX_VISIT_MEMBER_NAME(__controls,"__controls");
	HX_VISIT_MEMBER_NAME(__gamepad,"__gamepad");
}

Dynamic GameInputDevice_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return id; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return name; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"__axis") ) { return __axis; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"enabled") ) { return enabled; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__button") ) { return __button; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"__gamepad") ) { return __gamepad; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"__controls") ) { return __controls; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"numControls") ) { if (inCallProp == hx::paccAlways) return get_numControls(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"getControlAt") ) { return getControlAt_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"sampleInterval") ) { return sampleInterval; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_numControls") ) { return get_numControls_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"getCachedSamples") ) { return getCachedSamples_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"stopCachingSamples") ) { return stopCachingSamples_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"startCachingSamples") ) { return startCachingSamples_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool GameInputDevice_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 15:
		if (HX_FIELD_EQ(inName,"MAX_BUFFER_SIZE") ) { outValue = MAX_BUFFER_SIZE; return true;  }
	}
	return false;
}

Dynamic GameInputDevice_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< ::String >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"__axis") ) { __axis=inValue.Cast< ::haxe::ds::IntMap >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"enabled") ) { enabled=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__button") ) { __button=inValue.Cast< ::haxe::ds::IntMap >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"__gamepad") ) { __gamepad=inValue.Cast< ::lime::ui::Gamepad >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"__controls") ) { __controls=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"sampleInterval") ) { sampleInterval=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool GameInputDevice_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 15:
		if (HX_FIELD_EQ(inName,"MAX_BUFFER_SIZE") ) { MAX_BUFFER_SIZE=ioValue.Cast< int >(); return true; }
	}
	return false;
}

void GameInputDevice_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("enabled","\x81","\x04","\x31","\x7e"));
	outFields->push(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"));
	outFields->push(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"));
	outFields->push(HX_HCSTRING("numControls","\xdc","\xd6","\xd2","\x23"));
	outFields->push(HX_HCSTRING("sampleInterval","\x8f","\xcf","\x73","\x9c"));
	outFields->push(HX_HCSTRING("__axis","\xc1","\x7f","\x71","\xef"));
	outFields->push(HX_HCSTRING("__button","\x12","\xcd","\x0f","\x82"));
	outFields->push(HX_HCSTRING("__controls","\x96","\xf9","\xf4","\xda"));
	outFields->push(HX_HCSTRING("__gamepad","\x81","\x31","\xd4","\x0a"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(GameInputDevice_obj,enabled),HX_HCSTRING("enabled","\x81","\x04","\x31","\x7e")},
	{hx::fsString,(int)offsetof(GameInputDevice_obj,id),HX_HCSTRING("id","\xdb","\x5b","\x00","\x00")},
	{hx::fsString,(int)offsetof(GameInputDevice_obj,name),HX_HCSTRING("name","\x4b","\x72","\xff","\x48")},
	{hx::fsInt,(int)offsetof(GameInputDevice_obj,sampleInterval),HX_HCSTRING("sampleInterval","\x8f","\xcf","\x73","\x9c")},
	{hx::fsObject /*::haxe::ds::IntMap*/ ,(int)offsetof(GameInputDevice_obj,__axis),HX_HCSTRING("__axis","\xc1","\x7f","\x71","\xef")},
	{hx::fsObject /*::haxe::ds::IntMap*/ ,(int)offsetof(GameInputDevice_obj,__button),HX_HCSTRING("__button","\x12","\xcd","\x0f","\x82")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(GameInputDevice_obj,__controls),HX_HCSTRING("__controls","\x96","\xf9","\xf4","\xda")},
	{hx::fsObject /*::lime::ui::Gamepad*/ ,(int)offsetof(GameInputDevice_obj,__gamepad),HX_HCSTRING("__gamepad","\x81","\x31","\xd4","\x0a")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &GameInputDevice_obj::MAX_BUFFER_SIZE,HX_HCSTRING("MAX_BUFFER_SIZE","\x25","\x86","\x77","\xea")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("enabled","\x81","\x04","\x31","\x7e"),
	HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"),
	HX_HCSTRING("name","\x4b","\x72","\xff","\x48"),
	HX_HCSTRING("sampleInterval","\x8f","\xcf","\x73","\x9c"),
	HX_HCSTRING("__axis","\xc1","\x7f","\x71","\xef"),
	HX_HCSTRING("__button","\x12","\xcd","\x0f","\x82"),
	HX_HCSTRING("__controls","\x96","\xf9","\xf4","\xda"),
	HX_HCSTRING("__gamepad","\x81","\x31","\xd4","\x0a"),
	HX_HCSTRING("getCachedSamples","\xd1","\xd6","\x6b","\x23"),
	HX_HCSTRING("getControlAt","\x3a","\x92","\x8f","\x9c"),
	HX_HCSTRING("startCachingSamples","\xcc","\x12","\x5e","\x6d"),
	HX_HCSTRING("stopCachingSamples","\x6c","\xa6","\xb3","\x24"),
	HX_HCSTRING("get_numControls","\x73","\x8e","\xb4","\xe4"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GameInputDevice_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(GameInputDevice_obj::MAX_BUFFER_SIZE,"MAX_BUFFER_SIZE");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GameInputDevice_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(GameInputDevice_obj::MAX_BUFFER_SIZE,"MAX_BUFFER_SIZE");
};

#endif

hx::Class GameInputDevice_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("MAX_BUFFER_SIZE","\x25","\x86","\x77","\xea"),
	::String(null()) };

void GameInputDevice_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.ui.GameInputDevice","\x52","\x51","\xb0","\x03");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &GameInputDevice_obj::__GetStatic;
	__mClass->mSetStaticField = &GameInputDevice_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< GameInputDevice_obj >;
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

void GameInputDevice_obj::__boot()
{
	MAX_BUFFER_SIZE= (int)32000;
}

} // end namespace openfl
} // end namespace ui
