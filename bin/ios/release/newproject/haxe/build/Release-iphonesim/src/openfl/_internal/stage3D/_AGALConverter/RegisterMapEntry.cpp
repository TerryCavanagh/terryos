#include <hxcpp.h>

#ifndef INCLUDED_openfl__internal_stage3D__AGALConverter_RegisterMapEntry
#include <openfl/_internal/stage3D/_AGALConverter/RegisterMapEntry.h>
#endif
#ifndef INCLUDED_openfl__internal_stage3D__AGALConverter_RegisterUsage
#include <openfl/_internal/stage3D/_AGALConverter/RegisterUsage.h>
#endif
namespace openfl{
namespace _internal{
namespace stage3D{
namespace _AGALConverter{

Void RegisterMapEntry_obj::__construct()
{
HX_STACK_FRAME("openfl._internal.stage3D._AGALConverter.RegisterMapEntry","new",0xdb756f7a,"openfl._internal.stage3D._AGALConverter.RegisterMapEntry.new","openfl/_internal/stage3D/AGALConverter.hx",269,0x0a35cc61)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//RegisterMapEntry_obj::~RegisterMapEntry_obj() { }

Dynamic RegisterMapEntry_obj::__CreateEmpty() { return  new RegisterMapEntry_obj; }
hx::ObjectPtr< RegisterMapEntry_obj > RegisterMapEntry_obj::__new()
{  hx::ObjectPtr< RegisterMapEntry_obj > _result_ = new RegisterMapEntry_obj();
	_result_->__construct();
	return _result_;}

Dynamic RegisterMapEntry_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< RegisterMapEntry_obj > _result_ = new RegisterMapEntry_obj();
	_result_->__construct();
	return _result_;}


RegisterMapEntry_obj::RegisterMapEntry_obj()
{
}

void RegisterMapEntry_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(RegisterMapEntry);
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_MEMBER_NAME(number,"number");
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(usage,"usage");
	HX_MARK_END_CLASS();
}

void RegisterMapEntry_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(type,"type");
	HX_VISIT_MEMBER_NAME(number,"number");
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(usage,"usage");
}

Dynamic RegisterMapEntry_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { return type; }
		if (HX_FIELD_EQ(inName,"name") ) { return name; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"usage") ) { return usage; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"number") ) { return number; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic RegisterMapEntry_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"usage") ) { usage=inValue.Cast< ::openfl::_internal::stage3D::_AGALConverter::RegisterUsage >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"number") ) { number=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void RegisterMapEntry_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"));
	outFields->push(HX_HCSTRING("number","\xc9","\x86","\x7a","\xa1"));
	outFields->push(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"));
	outFields->push(HX_HCSTRING("usage","\x21","\x5d","\x2f","\xaa"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(RegisterMapEntry_obj,type),HX_HCSTRING("type","\xba","\xf2","\x08","\x4d")},
	{hx::fsInt,(int)offsetof(RegisterMapEntry_obj,number),HX_HCSTRING("number","\xc9","\x86","\x7a","\xa1")},
	{hx::fsString,(int)offsetof(RegisterMapEntry_obj,name),HX_HCSTRING("name","\x4b","\x72","\xff","\x48")},
	{hx::fsObject /*::openfl::_internal::stage3D::_AGALConverter::RegisterUsage*/ ,(int)offsetof(RegisterMapEntry_obj,usage),HX_HCSTRING("usage","\x21","\x5d","\x2f","\xaa")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"),
	HX_HCSTRING("number","\xc9","\x86","\x7a","\xa1"),
	HX_HCSTRING("name","\x4b","\x72","\xff","\x48"),
	HX_HCSTRING("usage","\x21","\x5d","\x2f","\xaa"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(RegisterMapEntry_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(RegisterMapEntry_obj::__mClass,"__mClass");
};

#endif

hx::Class RegisterMapEntry_obj::__mClass;

void RegisterMapEntry_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.stage3D._AGALConverter.RegisterMapEntry","\x88","\xea","\xfd","\x67");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< RegisterMapEntry_obj >;
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

} // end namespace openfl
} // end namespace _internal
} // end namespace stage3D
} // end namespace _AGALConverter
