#include <hxcpp.h>

#ifndef INCLUDED_Sys
#include <Sys.h>
#endif
#ifndef INCLUDED_lime_utils_Log
#include <lime/utils/Log.h>
#endif
namespace lime{
namespace utils{

Void Log_obj::__construct()
{
	return null();
}

//Log_obj::~Log_obj() { }

Dynamic Log_obj::__CreateEmpty() { return  new Log_obj; }
hx::ObjectPtr< Log_obj > Log_obj::__new()
{  hx::ObjectPtr< Log_obj > _result_ = new Log_obj();
	_result_->__construct();
	return _result_;}

Dynamic Log_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Log_obj > _result_ = new Log_obj();
	_result_->__construct();
	return _result_;}

void Log_obj::__init__() {
HX_STACK_FRAME("lime.utils.Log","__init__",0xbf2d08b0,"lime.utils.Log.__init__","lime/utils/Log.hx",98,0x300eb2b2)
{
	HX_STACK_LINE(106)
	Array< ::String > args = ::Sys_obj::args();		HX_STACK_VAR(args,"args");
	HX_STACK_LINE(107)
	int tmp = args->indexOf(HX_HCSTRING("-v","\xa9","\x27","\x00","\x00"),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(107)
	int tmp1 = (int)-1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(107)
	bool tmp2 = (tmp > tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(107)
	bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(107)
	bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(107)
	if ((tmp3)){
		HX_STACK_LINE(107)
		int tmp5 = args->indexOf(HX_HCSTRING("-verbose","\xf5","\xe6","\x97","\x7f"),null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(107)
		int tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(107)
		tmp4 = (tmp6 > (int)-1);
	}
	else{
		HX_STACK_LINE(107)
		tmp4 = true;
	}
	HX_STACK_LINE(107)
	if ((tmp4)){
		HX_STACK_LINE(108)
		::lime::utils::Log_obj::level = (int)5;
	}
	else{
		HX_STACK_LINE(115)
		::lime::utils::Log_obj::level = (int)3;
	}
}
}

int Log_obj::level;

Void Log_obj::debug( ::String message,Dynamic info){
{
		HX_STACK_FRAME("lime.utils.Log","debug",0x08fb4af3,"lime.utils.Log.debug","lime/utils/Log.hx",13,0x300eb2b2)
		HX_STACK_ARG(message,"message")
		HX_STACK_ARG(info,"info")
		HX_STACK_LINE(15)
		int tmp = ::lime::utils::Log_obj::level;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(15)
		int tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(15)
		bool tmp2 = (tmp1 >= (int)4);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(15)
		if ((tmp2)){
			HX_STACK_LINE(17)
			::String tmp3 = (HX_HCSTRING("[","\x5b","\x00","\x00","\x00") + info->__Field(HX_HCSTRING("className","\xa3","\x92","\x3d","\xdc"), hx::paccDynamic ));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(17)
			::String tmp4 = (tmp3 + HX_HCSTRING("] ","\x23","\x51","\x00","\x00"));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(17)
			::String tmp5 = message;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(17)
			::String tmp6 = (tmp4 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(17)
			::Sys_obj::println(tmp6);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Log_obj,debug,(void))

Void Log_obj::error( ::String message,Dynamic info){
{
		HX_STACK_FRAME("lime.utils.Log","error",0xa505c468,"lime.utils.Log.error","lime/utils/Log.hx",24,0x300eb2b2)
		HX_STACK_ARG(message,"message")
		HX_STACK_ARG(info,"info")
		HX_STACK_LINE(26)
		int tmp = ::lime::utils::Log_obj::level;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(26)
		int tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(26)
		bool tmp2 = (tmp1 >= (int)1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(26)
		if ((tmp2)){
			HX_STACK_LINE(28)
			::String tmp3 = (HX_HCSTRING("[","\x5b","\x00","\x00","\x00") + info->__Field(HX_HCSTRING("className","\xa3","\x92","\x3d","\xdc"), hx::paccDynamic ));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(28)
			::String tmp4 = (tmp3 + HX_HCSTRING("] ERROR: ","\x8b","\xd9","\xdf","\x31"));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(28)
			::String tmp5 = message;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(28)
			::String tmp6 = (tmp4 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(28)
			::Sys_obj::println(tmp6);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Log_obj,error,(void))

Void Log_obj::info( ::String message,Dynamic info){
{
		HX_STACK_FRAME("lime.utils.Log","info",0xefdb33ce,"lime.utils.Log.info","lime/utils/Log.hx",35,0x300eb2b2)
		HX_STACK_ARG(message,"message")
		HX_STACK_ARG(info,"info")
		HX_STACK_LINE(37)
		int tmp = ::lime::utils::Log_obj::level;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(37)
		int tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(37)
		bool tmp2 = (tmp1 >= (int)3);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(37)
		if ((tmp2)){
			HX_STACK_LINE(39)
			::String tmp3 = (HX_HCSTRING("[","\x5b","\x00","\x00","\x00") + info->__Field(HX_HCSTRING("className","\xa3","\x92","\x3d","\xdc"), hx::paccDynamic ));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(39)
			::String tmp4 = (tmp3 + HX_HCSTRING("] ","\x23","\x51","\x00","\x00"));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(39)
			::String tmp5 = message;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(39)
			::String tmp6 = (tmp4 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(39)
			::Sys_obj::println(tmp6);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Log_obj,info,(void))

Void Log_obj::print( ::String message){
{
		HX_STACK_FRAME("lime.utils.Log","print",0xfa6750cd,"lime.utils.Log.print","lime/utils/Log.hx",46,0x300eb2b2)
		HX_STACK_ARG(message,"message")
		HX_STACK_LINE(49)
		::String tmp = message;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(49)
		::Sys_obj::print(tmp);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Log_obj,print,(void))

Void Log_obj::println( ::String message){
{
		HX_STACK_FRAME("lime.utils.Log","println",0xdf773c8f,"lime.utils.Log.println","lime/utils/Log.hx",61,0x300eb2b2)
		HX_STACK_ARG(message,"message")
		HX_STACK_LINE(64)
		::String tmp = message;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(64)
		::Sys_obj::println(tmp);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Log_obj,println,(void))

Void Log_obj::verbose( ::String message,Dynamic info){
{
		HX_STACK_FRAME("lime.utils.Log","verbose",0xccfd3822,"lime.utils.Log.verbose","lime/utils/Log.hx",76,0x300eb2b2)
		HX_STACK_ARG(message,"message")
		HX_STACK_ARG(info,"info")
		HX_STACK_LINE(78)
		int tmp = ::lime::utils::Log_obj::level;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(78)
		int tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(78)
		bool tmp2 = (tmp1 >= (int)5);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(78)
		if ((tmp2)){
			HX_STACK_LINE(80)
			::String tmp3 = (HX_HCSTRING("[","\x5b","\x00","\x00","\x00") + info->__Field(HX_HCSTRING("className","\xa3","\x92","\x3d","\xdc"), hx::paccDynamic ));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(80)
			::String tmp4 = (tmp3 + HX_HCSTRING("] ","\x23","\x51","\x00","\x00"));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(80)
			::String tmp5 = message;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(80)
			::String tmp6 = (tmp4 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(80)
			::Sys_obj::println(tmp6);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Log_obj,verbose,(void))

Void Log_obj::warn( ::String message,Dynamic info){
{
		HX_STACK_FRAME("lime.utils.Log","warn",0xf9125da6,"lime.utils.Log.warn","lime/utils/Log.hx",87,0x300eb2b2)
		HX_STACK_ARG(message,"message")
		HX_STACK_ARG(info,"info")
		HX_STACK_LINE(89)
		int tmp = ::lime::utils::Log_obj::level;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(89)
		int tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(89)
		bool tmp2 = (tmp1 >= (int)2);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(89)
		if ((tmp2)){
			HX_STACK_LINE(91)
			::String tmp3 = (HX_HCSTRING("[","\x5b","\x00","\x00","\x00") + info->__Field(HX_HCSTRING("className","\xa3","\x92","\x3d","\xdc"), hx::paccDynamic ));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(91)
			::String tmp4 = (tmp3 + HX_HCSTRING("] WARNING: ","\x5f","\xda","\xb0","\xcd"));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(91)
			::String tmp5 = message;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(91)
			::String tmp6 = (tmp4 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(91)
			::Sys_obj::println(tmp6);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Log_obj,warn,(void))


Log_obj::Log_obj()
{
}

bool Log_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"info") ) { outValue = info_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"warn") ) { outValue = warn_dyn(); return true;  }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"level") ) { outValue = level; return true;  }
		if (HX_FIELD_EQ(inName,"debug") ) { outValue = debug_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"error") ) { outValue = error_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"print") ) { outValue = print_dyn(); return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"println") ) { outValue = println_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"verbose") ) { outValue = verbose_dyn(); return true;  }
	}
	return false;
}

bool Log_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"level") ) { level=ioValue.Cast< int >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &Log_obj::level,HX_HCSTRING("level","\x84","\x15","\x63","\x72")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Log_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Log_obj::level,"level");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Log_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Log_obj::level,"level");
};

#endif

hx::Class Log_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("level","\x84","\x15","\x63","\x72"),
	HX_HCSTRING("debug","\x53","\x52","\x1f","\xd7"),
	HX_HCSTRING("error","\xc8","\xcb","\x29","\x73"),
	HX_HCSTRING("info","\x6e","\x38","\xbb","\x45"),
	HX_HCSTRING("print","\x2d","\x58","\x8b","\xc8"),
	HX_HCSTRING("println","\xef","\xdb","\x33","\x84"),
	HX_HCSTRING("verbose","\x82","\xd7","\xb9","\x71"),
	HX_HCSTRING("warn","\x46","\x62","\xf2","\x4e"),
	::String(null()) };

void Log_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.utils.Log","\x0e","\x21","\x76","\x06");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Log_obj::__GetStatic;
	__mClass->mSetStaticField = &Log_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Log_obj >;
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

} // end namespace lime
} // end namespace utils
