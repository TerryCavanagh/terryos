#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_openfl_display_ShaderData
#include <openfl/display/ShaderData.h>
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
namespace display{

Void ShaderData_obj::__construct(::openfl::utils::ByteArrayData byteArray)
{
HX_STACK_FRAME("openfl.display.ShaderData","new",0x6406164b,"openfl.display.ShaderData.new","openfl/display/ShaderData.hx",10,0xa8261943)
HX_STACK_THIS(this)
HX_STACK_ARG(byteArray,"byteArray")
{
}
;
	return null();
}

//ShaderData_obj::~ShaderData_obj() { }

Dynamic ShaderData_obj::__CreateEmpty() { return  new ShaderData_obj; }
hx::ObjectPtr< ShaderData_obj > ShaderData_obj::__new(::openfl::utils::ByteArrayData byteArray)
{  hx::ObjectPtr< ShaderData_obj > _result_ = new ShaderData_obj();
	_result_->__construct(byteArray);
	return _result_;}

Dynamic ShaderData_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ShaderData_obj > _result_ = new ShaderData_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}


ShaderData_obj::ShaderData_obj()
{
	HX_INIT_IMPLEMENT_DYNAMIC;
}

void ShaderData_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ShaderData);
	HX_MARK_DYNAMIC;
	HX_MARK_END_CLASS();
}

void ShaderData_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_DYNAMIC;
}

Dynamic ShaderData_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	HX_CHECK_DYNAMIC_GET_FIELD(inName);
	return super::__Field(inName,inCallProp);
}

Dynamic ShaderData_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	try { return super::__SetField(inName,inValue,inCallProp); }
	catch(Dynamic e) { HX_DYNAMIC_SET_FIELD(inName,inValue); }
	return inValue;
}

void ShaderData_obj::__GetFields(Array< ::String> &outFields)
{
	HX_APPEND_DYNAMIC_FIELDS(outFields);
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ShaderData_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ShaderData_obj::__mClass,"__mClass");
};

#endif

hx::Class ShaderData_obj::__mClass;

void ShaderData_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.display.ShaderData","\xd9","\x94","\x7c","\x97");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< ShaderData_obj >;
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
} // end namespace display
