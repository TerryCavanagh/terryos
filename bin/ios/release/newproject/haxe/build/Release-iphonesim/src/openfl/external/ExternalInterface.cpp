#include <hxcpp.h>

#ifndef INCLUDED_openfl_external_ExternalInterface
#include <openfl/external/ExternalInterface.h>
#endif
namespace openfl{
namespace external{

Void ExternalInterface_obj::__construct()
{
	return null();
}

//ExternalInterface_obj::~ExternalInterface_obj() { }

Dynamic ExternalInterface_obj::__CreateEmpty() { return  new ExternalInterface_obj; }
hx::ObjectPtr< ExternalInterface_obj > ExternalInterface_obj::__new()
{  hx::ObjectPtr< ExternalInterface_obj > _result_ = new ExternalInterface_obj();
	_result_->__construct();
	return _result_;}

Dynamic ExternalInterface_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ExternalInterface_obj > _result_ = new ExternalInterface_obj();
	_result_->__construct();
	return _result_;}

bool ExternalInterface_obj::available;

bool ExternalInterface_obj::marshallExceptions;

::String ExternalInterface_obj::objectID;

Void ExternalInterface_obj::addCallback( ::String functionName,Dynamic closure){
{
		HX_STACK_FRAME("openfl.external.ExternalInterface","addCallback",0x264b8021,"openfl.external.ExternalInterface.addCallback","openfl/external/ExternalInterface.hx",18,0xf65fa335)
		HX_STACK_ARG(functionName,"functionName")
		HX_STACK_ARG(closure,"closure")
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ExternalInterface_obj,addCallback,(void))

Dynamic ExternalInterface_obj::call( ::String functionName,Dynamic p1,Dynamic p2,Dynamic p3,Dynamic p4,Dynamic p5){
	HX_STACK_FRAME("openfl.external.ExternalInterface","call",0x750c1423,"openfl.external.ExternalInterface.call","openfl/external/ExternalInterface.hx",69,0xf65fa335)
	HX_STACK_ARG(functionName,"functionName")
	HX_STACK_ARG(p1,"p1")
	HX_STACK_ARG(p2,"p2")
	HX_STACK_ARG(p3,"p3")
	HX_STACK_ARG(p4,"p4")
	HX_STACK_ARG(p5,"p5")
	HX_STACK_LINE(69)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(ExternalInterface_obj,call,return )


ExternalInterface_obj::ExternalInterface_obj()
{
}

bool ExternalInterface_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"call") ) { outValue = call_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"objectID") ) { outValue = objectID; return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"available") ) { outValue = available; return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"addCallback") ) { outValue = addCallback_dyn(); return true;  }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"marshallExceptions") ) { outValue = marshallExceptions; return true;  }
	}
	return false;
}

bool ExternalInterface_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"objectID") ) { objectID=ioValue.Cast< ::String >(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"available") ) { available=ioValue.Cast< bool >(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"marshallExceptions") ) { marshallExceptions=ioValue.Cast< bool >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsBool,(void *) &ExternalInterface_obj::available,HX_HCSTRING("available","\xc9","\x59","\x83","\x77")},
	{hx::fsBool,(void *) &ExternalInterface_obj::marshallExceptions,HX_HCSTRING("marshallExceptions","\x32","\x7f","\x40","\xc6")},
	{hx::fsString,(void *) &ExternalInterface_obj::objectID,HX_HCSTRING("objectID","\x5a","\x2c","\x2c","\x83")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ExternalInterface_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ExternalInterface_obj::available,"available");
	HX_MARK_MEMBER_NAME(ExternalInterface_obj::marshallExceptions,"marshallExceptions");
	HX_MARK_MEMBER_NAME(ExternalInterface_obj::objectID,"objectID");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ExternalInterface_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ExternalInterface_obj::available,"available");
	HX_VISIT_MEMBER_NAME(ExternalInterface_obj::marshallExceptions,"marshallExceptions");
	HX_VISIT_MEMBER_NAME(ExternalInterface_obj::objectID,"objectID");
};

#endif

hx::Class ExternalInterface_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("available","\xc9","\x59","\x83","\x77"),
	HX_HCSTRING("marshallExceptions","\x32","\x7f","\x40","\xc6"),
	HX_HCSTRING("objectID","\x5a","\x2c","\x2c","\x83"),
	HX_HCSTRING("addCallback","\x06","\xd1","\x62","\xb0"),
	HX_HCSTRING("call","\x9e","\x18","\xba","\x41"),
	::String(null()) };

void ExternalInterface_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.external.ExternalInterface","\x09","\x13","\x6e","\x7b");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ExternalInterface_obj::__GetStatic;
	__mClass->mSetStaticField = &ExternalInterface_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< ExternalInterface_obj >;
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

void ExternalInterface_obj::__boot()
{
	available= true;
	marshallExceptions= false;
}

} // end namespace openfl
} // end namespace external
