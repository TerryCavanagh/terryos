#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxegon_Convert
#include <haxegon/Convert.h>
#endif
namespace haxegon{

Void Convert_obj::__construct()
{
	return null();
}

//Convert_obj::~Convert_obj() { }

Dynamic Convert_obj::__CreateEmpty() { return  new Convert_obj; }
hx::ObjectPtr< Convert_obj > Convert_obj::__new()
{  hx::ObjectPtr< Convert_obj > _result_ = new Convert_obj();
	_result_->__construct();
	return _result_;}

Dynamic Convert_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Convert_obj > _result_ = new Convert_obj();
	_result_->__construct();
	return _result_;}

::String Convert_obj::tostring( Dynamic value){
	HX_STACK_FRAME("haxegon.Convert","tostring",0xe3aa11d5,"haxegon.Convert.tostring","haxegon/Convert.hx",4,0x9363eeda)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(5)
	Dynamic tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(5)
	::String tmp1 = ::Std_obj::string(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(5)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Convert_obj,tostring,return )

int Convert_obj::toint( Dynamic value){
	HX_STACK_FRAME("haxegon.Convert","toint",0x6ddc196b,"haxegon.Convert.toint","haxegon/Convert.hx",8,0x9363eeda)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(9)
	Dynamic tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(9)
	::String tmp1 = ::Std_obj::string(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(9)
	Dynamic tmp2 = ::Std_obj::parseInt(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(9)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Convert_obj,toint,return )

Float Convert_obj::tofloat( Dynamic value){
	HX_STACK_FRAME("haxegon.Convert","tofloat",0xf49be918,"haxegon.Convert.tofloat","haxegon/Convert.hx",12,0x9363eeda)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(13)
	Dynamic tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(13)
	Float tmp1 = ::Std_obj::parseFloat(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(13)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Convert_obj,tofloat,return )


Convert_obj::Convert_obj()
{
}

bool Convert_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"toint") ) { outValue = toint_dyn(); return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"tofloat") ) { outValue = tofloat_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"tostring") ) { outValue = tostring_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Convert_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Convert_obj::__mClass,"__mClass");
};

#endif

hx::Class Convert_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("tostring","\x8c","\x5c","\xda","\x03"),
	HX_HCSTRING("toint","\x54","\x06","\x2a","\x14"),
	HX_HCSTRING("tofloat","\x41","\xa2","\xed","\x3b"),
	::String(null()) };

void Convert_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxegon.Convert","\x45","\x78","\x54","\xf9");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Convert_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Convert_obj >;
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

} // end namespace haxegon
