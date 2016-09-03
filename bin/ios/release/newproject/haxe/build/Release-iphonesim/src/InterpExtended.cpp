#include <hxcpp.h>

#ifndef INCLUDED_InterpExtended
#include <InterpExtended.h>
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_hscript_ErrorDef
#include <hscript/ErrorDef.h>
#endif
#ifndef INCLUDED_hscript_Interp
#include <hscript/Interp.h>
#endif

Void InterpExtended_obj::__construct()
{
HX_STACK_FRAME("InterpExtended","new",0x24821e3f,"InterpExtended.new","InterpExtended.hx",5,0x5adaae11)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(5)
	super::__construct();
}
;
	return null();
}

//InterpExtended_obj::~InterpExtended_obj() { }

Dynamic InterpExtended_obj::__CreateEmpty() { return  new InterpExtended_obj; }
hx::ObjectPtr< InterpExtended_obj > InterpExtended_obj::__new()
{  hx::ObjectPtr< InterpExtended_obj > _result_ = new InterpExtended_obj();
	_result_->__construct();
	return _result_;}

Dynamic InterpExtended_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< InterpExtended_obj > _result_ = new InterpExtended_obj();
	_result_->__construct();
	return _result_;}

Dynamic InterpExtended_obj::get( Dynamic o,::String f){
	HX_STACK_FRAME("InterpExtended","get",0x247cce75,"InterpExtended.get","InterpExtended.hx",7,0x5adaae11)
	HX_STACK_THIS(this)
	HX_STACK_ARG(o,"o")
	HX_STACK_ARG(f,"f")
	HX_STACK_LINE(9)
	bool tmp = (o == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(9)
	if ((tmp)){
		HX_STACK_LINE(9)
		::String tmp1 = f;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(9)
		::hscript::ErrorDef tmp2 = ::hscript::ErrorDef_obj::EInvalidAccess(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(9)
		HX_STACK_DO_THROW(tmp2);
	}
	HX_STACK_LINE(10)
	Dynamic tmp1 = o;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(10)
	::String tmp2 = f;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(10)
	Dynamic tmp3 = ::Reflect_obj::getProperty(tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(10)
	return tmp3;
}


Dynamic InterpExtended_obj::set( Dynamic o,::String f,Dynamic v){
	HX_STACK_FRAME("InterpExtended","set",0x2485e981,"InterpExtended.set","InterpExtended.hx",13,0x5adaae11)
	HX_STACK_THIS(this)
	HX_STACK_ARG(o,"o")
	HX_STACK_ARG(f,"f")
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(14)
	bool tmp = (o == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(14)
	if ((tmp)){
		HX_STACK_LINE(14)
		::String tmp1 = f;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(14)
		::hscript::ErrorDef tmp2 = ::hscript::ErrorDef_obj::EInvalidAccess(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(14)
		HX_STACK_DO_THROW(tmp2);
	}
	HX_STACK_LINE(15)
	Dynamic tmp1 = o;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(15)
	::String tmp2 = f;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(15)
	Dynamic tmp3 = v;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(15)
	::Reflect_obj::setProperty(tmp1,tmp2,tmp3);
	HX_STACK_LINE(16)
	Dynamic tmp4 = v;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(16)
	return tmp4;
}



InterpExtended_obj::InterpExtended_obj()
{
}

Dynamic InterpExtended_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return get_dyn(); }
		if (HX_FIELD_EQ(inName,"set") ) { return set_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("get","\x96","\x80","\x4e","\x00"),
	HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(InterpExtended_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(InterpExtended_obj::__mClass,"__mClass");
};

#endif

hx::Class InterpExtended_obj::__mClass;

void InterpExtended_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("InterpExtended","\xcd","\x92","\xf0","\xc3");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< InterpExtended_obj >;
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

