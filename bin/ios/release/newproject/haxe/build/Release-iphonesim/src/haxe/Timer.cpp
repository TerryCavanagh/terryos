#include <hxcpp.h>

#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_Timer
#include <haxe/Timer.h>
#endif
#ifndef INCLUDED_lime_system_System
#include <lime/system/System.h>
#endif
namespace haxe{

Void Timer_obj::__construct(Float time)
{
HX_STACK_FRAME("haxe.Timer","new",0x4136b0cf,"haxe.Timer.new","haxe/Timer.hx",211,0x1a690682)
HX_STACK_THIS(this)
HX_STACK_ARG(time,"time")
{
	HX_STACK_LINE(213)
	this->mTime = time;
	HX_STACK_LINE(214)
	::haxe::Timer_obj::sRunningTimers->push(hx::ObjectPtr<OBJ_>(this));
	HX_STACK_LINE(215)
	Float tmp = ::haxe::Timer_obj::getMS();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(215)
	Float tmp1 = this->mTime;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(215)
	Float tmp2 = (tmp + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(215)
	this->mFireAt = tmp2;
	HX_STACK_LINE(216)
	this->mRunning = true;
}
;
	return null();
}

//Timer_obj::~Timer_obj() { }

Dynamic Timer_obj::__CreateEmpty() { return  new Timer_obj; }
hx::ObjectPtr< Timer_obj > Timer_obj::__new(Float time)
{  hx::ObjectPtr< Timer_obj > _result_ = new Timer_obj();
	_result_->__construct(time);
	return _result_;}

Dynamic Timer_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Timer_obj > _result_ = new Timer_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

HX_BEGIN_DEFAULT_FUNC(__default_run,Timer_obj)
Void run(){
{
		HX_STACK_FRAME("haxe.Timer","run",0x4139c7ba,"haxe.Timer.run","haxe/Timer.hx",254,0x1a690682)
		HX_STACK_THIS(this)
	}
return null();
}
HX_END_LOCAL_FUNC0((void))
HX_END_DEFAULT_FUNC

Void Timer_obj::stop( ){
{
		HX_STACK_FRAME("haxe.Timer","stop",0xd1fd70b3,"haxe.Timer.stop","haxe/Timer.hx",268,0x1a690682)
		HX_STACK_THIS(this)
		HX_STACK_LINE(270)
		bool tmp = this->mRunning;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(270)
		if ((tmp)){
			HX_STACK_LINE(272)
			this->mRunning = false;
			HX_STACK_LINE(274)
			{
				HX_STACK_LINE(274)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(274)
				int tmp1 = ::haxe::Timer_obj::sRunningTimers->length;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(274)
				int _g = tmp1;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(274)
				while((true)){
					HX_STACK_LINE(274)
					bool tmp2 = (_g1 < _g);		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(274)
					bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(274)
					if ((tmp3)){
						HX_STACK_LINE(274)
						break;
					}
					HX_STACK_LINE(274)
					int tmp4 = (_g1)++;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(274)
					int i = tmp4;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(276)
					::haxe::Timer tmp5 = ::haxe::Timer_obj::sRunningTimers->__get(i).StaticCast< ::haxe::Timer >();		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(276)
					bool tmp6 = (tmp5 == hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(276)
					if ((tmp6)){
						HX_STACK_LINE(278)
						::haxe::Timer_obj::sRunningTimers[i] = null();
						HX_STACK_LINE(279)
						break;
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Timer_obj,stop,(void))

Void Timer_obj::__check( Float inTime){
{
		HX_STACK_FRAME("haxe.Timer","__check",0xb5623597,"haxe.Timer.__check","haxe/Timer.hx",290,0x1a690682)
		HX_STACK_THIS(this)
		HX_STACK_ARG(inTime,"inTime")
		HX_STACK_LINE(292)
		Float tmp = inTime;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(292)
		Float tmp1 = this->mFireAt;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(292)
		bool tmp2 = (tmp >= tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(292)
		if ((tmp2)){
			HX_STACK_LINE(294)
			Float tmp3 = this->mTime;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(294)
			hx::AddEq(this->mFireAt,tmp3);
			HX_STACK_LINE(295)
			this->run();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Timer_obj,__check,(void))

Array< ::Dynamic > Timer_obj::sRunningTimers;

::haxe::Timer Timer_obj::delay( Dynamic f,int time){
	HX_STACK_FRAME("haxe.Timer","delay",0x3ed5f1b2,"haxe.Timer.delay","haxe/Timer.hx",221,0x1a690682)
	HX_STACK_ARG(f,"f")
	HX_STACK_ARG(time,"time")
	HX_STACK_LINE(223)
	::haxe::Timer tmp = ::haxe::Timer_obj::__new(time);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(223)
	::haxe::Timer t = tmp;		HX_STACK_VAR(t,"t");

	HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_1_1,::haxe::Timer,t,Dynamic,f)
	int __ArgCount() const { return 0; }
	Void run(){
		HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","haxe/Timer.hx",225,0x1a690682)
		{
			HX_STACK_LINE(227)
			t->stop();
			HX_STACK_LINE(228)
			f().Cast< Void >();
		}
		return null();
	}
	HX_END_LOCAL_FUNC0((void))

	HX_STACK_LINE(225)
	t->run =  Dynamic(new _Function_1_1(t,f));
	HX_STACK_LINE(232)
	::haxe::Timer tmp1 = t;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(232)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Timer_obj,delay,return )

Float Timer_obj::getMS( ){
	HX_STACK_FRAME("haxe.Timer","getMS",0xf90fafab,"haxe.Timer.getMS","haxe/Timer.hx",237,0x1a690682)
	HX_STACK_LINE(239)
	int tmp = ::lime::_system::System_obj::getTimer();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(239)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Timer_obj,getMS,return )

Dynamic Timer_obj::measure( Dynamic f,Dynamic pos){
	HX_STACK_FRAME("haxe.Timer","measure",0x42373f4d,"haxe.Timer.measure","haxe/Timer.hx",244,0x1a690682)
	HX_STACK_ARG(f,"f")
	HX_STACK_ARG(pos,"pos")
	HX_STACK_LINE(246)
	Float tmp = ::haxe::Timer_obj::stamp();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(246)
	Float t0 = tmp;		HX_STACK_VAR(t0,"t0");
	HX_STACK_LINE(247)
	Dynamic tmp1 = f();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(247)
	Dynamic r = tmp1;		HX_STACK_VAR(r,"r");
	HX_STACK_LINE(248)
	Float tmp2 = ::haxe::Timer_obj::stamp();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(248)
	Float tmp3 = t0;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(248)
	Float tmp4 = (tmp2 - tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(248)
	::String tmp5 = (tmp4 + HX_HCSTRING("s","\x73","\x00","\x00","\x00"));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(248)
	Dynamic tmp6 = pos;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(248)
	::haxe::Log_obj::trace(tmp5,tmp6);
	HX_STACK_LINE(249)
	Dynamic tmp7 = r;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(249)
	return tmp7;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Timer_obj,measure,return )

Float Timer_obj::stamp( ){
	HX_STACK_FRAME("haxe.Timer","stamp",0xebba8a32,"haxe.Timer.stamp","haxe/Timer.hx",261,0x1a690682)
	HX_STACK_LINE(263)
	int tmp = ::lime::_system::System_obj::getTimer();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(263)
	Float tmp1 = (Float(tmp) / Float((int)1000));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(263)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Timer_obj,stamp,return )

Void Timer_obj::__checkTimers( ){
{
		HX_STACK_FRAME("haxe.Timer","__checkTimers",0xb7078205,"haxe.Timer.__checkTimers","haxe/Timer.hx",302,0x1a690682)
		HX_STACK_LINE(304)
		Float tmp = ::haxe::Timer_obj::getMS();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(304)
		Float now = tmp;		HX_STACK_VAR(now,"now");
		HX_STACK_LINE(305)
		bool foundNull = false;		HX_STACK_VAR(foundNull,"foundNull");
		HX_STACK_LINE(306)
		::haxe::Timer timer;		HX_STACK_VAR(timer,"timer");
		HX_STACK_LINE(308)
		{
			HX_STACK_LINE(308)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(308)
			int tmp1 = ::haxe::Timer_obj::sRunningTimers->length;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(308)
			int _g = tmp1;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(308)
			while((true)){
				HX_STACK_LINE(308)
				bool tmp2 = (_g1 < _g);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(308)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(308)
				if ((tmp3)){
					HX_STACK_LINE(308)
					break;
				}
				HX_STACK_LINE(308)
				int tmp4 = (_g1)++;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(308)
				int i = tmp4;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(310)
				::haxe::Timer tmp5 = ::haxe::Timer_obj::sRunningTimers->__get(i).StaticCast< ::haxe::Timer >();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(310)
				timer = tmp5;
				HX_STACK_LINE(312)
				bool tmp6 = (timer != null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(312)
				if ((tmp6)){
					HX_STACK_LINE(314)
					Float tmp7 = now;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(314)
					timer->__check(tmp7);
				}
				HX_STACK_LINE(318)
				bool tmp7 = foundNull;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(318)
				bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(318)
				bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(318)
				if ((tmp8)){
					HX_STACK_LINE(318)
					::haxe::Timer tmp10 = ::haxe::Timer_obj::sRunningTimers->__get(i).StaticCast< ::haxe::Timer >();		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(318)
					::haxe::Timer tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(318)
					tmp9 = (tmp11 == null());
				}
				else{
					HX_STACK_LINE(318)
					tmp9 = true;
				}
				HX_STACK_LINE(318)
				foundNull = tmp9;
			}
		}
		HX_STACK_LINE(322)
		bool tmp1 = foundNull;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(322)
		if ((tmp1)){

			HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_2_1)
			int __ArgCount() const { return 1; }
			bool run(::haxe::Timer val){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","haxe/Timer.hx",324,0x1a690682)
				HX_STACK_ARG(val,"val")
				{
					HX_STACK_LINE(324)
					bool tmp2 = (val != null());		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(324)
					return tmp2;
				}
				return null();
			}
			HX_END_LOCAL_FUNC1(return)

			HX_STACK_LINE(324)
			::haxe::Timer_obj::sRunningTimers = ::haxe::Timer_obj::sRunningTimers->filter( Dynamic(new _Function_2_1()));
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Timer_obj,__checkTimers,(void))


Timer_obj::Timer_obj()
{
	run = new __default_run(this);
}

void Timer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Timer);
	HX_MARK_MEMBER_NAME(mTime,"mTime");
	HX_MARK_MEMBER_NAME(mFireAt,"mFireAt");
	HX_MARK_MEMBER_NAME(mRunning,"mRunning");
	HX_MARK_MEMBER_NAME(run,"run");
	HX_MARK_END_CLASS();
}

void Timer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(mTime,"mTime");
	HX_VISIT_MEMBER_NAME(mFireAt,"mFireAt");
	HX_VISIT_MEMBER_NAME(mRunning,"mRunning");
	HX_VISIT_MEMBER_NAME(run,"run");
}

Dynamic Timer_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"run") ) { return run; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"stop") ) { return stop_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"mTime") ) { return mTime; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"mFireAt") ) { return mFireAt; }
		if (HX_FIELD_EQ(inName,"__check") ) { return __check_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"mRunning") ) { return mRunning; }
	}
	return super::__Field(inName,inCallProp);
}

bool Timer_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"delay") ) { outValue = delay_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getMS") ) { outValue = getMS_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"stamp") ) { outValue = stamp_dyn(); return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"measure") ) { outValue = measure_dyn(); return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__checkTimers") ) { outValue = __checkTimers_dyn(); return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"sRunningTimers") ) { outValue = sRunningTimers; return true;  }
	}
	return false;
}

Dynamic Timer_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"run") ) { run=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"mTime") ) { mTime=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"mFireAt") ) { mFireAt=inValue.Cast< Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"mRunning") ) { mRunning=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Timer_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 14:
		if (HX_FIELD_EQ(inName,"sRunningTimers") ) { sRunningTimers=ioValue.Cast< Array< ::Dynamic > >(); return true; }
	}
	return false;
}

void Timer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("mTime","\x1a","\x33","\x83","\xfa"));
	outFields->push(HX_HCSTRING("mFireAt","\x96","\xea","\x58","\x72"));
	outFields->push(HX_HCSTRING("mRunning","\x12","\x2d","\x35","\x13"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(Timer_obj,mTime),HX_HCSTRING("mTime","\x1a","\x33","\x83","\xfa")},
	{hx::fsFloat,(int)offsetof(Timer_obj,mFireAt),HX_HCSTRING("mFireAt","\x96","\xea","\x58","\x72")},
	{hx::fsBool,(int)offsetof(Timer_obj,mRunning),HX_HCSTRING("mRunning","\x12","\x2d","\x35","\x13")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Timer_obj,run),HX_HCSTRING("run","\x4b","\xe7","\x56","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*Array< ::Dynamic >*/ ,(void *) &Timer_obj::sRunningTimers,HX_HCSTRING("sRunningTimers","\xfa","\xbb","\xcd","\xfe")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("mTime","\x1a","\x33","\x83","\xfa"),
	HX_HCSTRING("mFireAt","\x96","\xea","\x58","\x72"),
	HX_HCSTRING("mRunning","\x12","\x2d","\x35","\x13"),
	HX_HCSTRING("run","\x4b","\xe7","\x56","\x00"),
	HX_HCSTRING("stop","\x02","\xf0","\x5b","\x4c"),
	HX_HCSTRING("__check","\xa8","\xf1","\x14","\xb0"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Timer_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Timer_obj::sRunningTimers,"sRunningTimers");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Timer_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Timer_obj::sRunningTimers,"sRunningTimers");
};

#endif

hx::Class Timer_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("sRunningTimers","\xfa","\xbb","\xcd","\xfe"),
	HX_HCSTRING("delay","\x83","\xd7","\x26","\xd7"),
	HX_HCSTRING("getMS","\x7c","\x95","\x60","\x91"),
	HX_HCSTRING("measure","\x5e","\xfb","\xe9","\x3c"),
	HX_HCSTRING("stamp","\x03","\x70","\x0b","\x84"),
	HX_HCSTRING("__checkTimers","\xd6","\x20","\x5c","\x49"),
	::String(null()) };

void Timer_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.Timer","\x5d","\x9d","\x24","\x4b");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Timer_obj::__GetStatic;
	__mClass->mSetStaticField = &Timer_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Timer_obj >;
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

void Timer_obj::__boot()
{
	sRunningTimers= Array_obj< ::Dynamic >::__new();
}

} // end namespace haxe
