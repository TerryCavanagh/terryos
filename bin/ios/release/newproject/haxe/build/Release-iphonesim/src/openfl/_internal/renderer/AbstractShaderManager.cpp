#include <hxcpp.h>

#ifndef INCLUDED_openfl__internal_renderer_AbstractShaderManager
#include <openfl/_internal/renderer/AbstractShaderManager.h>
#endif
#ifndef INCLUDED_openfl_display_Shader
#include <openfl/display/Shader.h>
#endif
namespace openfl{
namespace _internal{
namespace renderer{

Void AbstractShaderManager_obj::__construct()
{
HX_STACK_FRAME("openfl._internal.renderer.AbstractShaderManager","new",0xdae95c9d,"openfl._internal.renderer.AbstractShaderManager.new","openfl/_internal/renderer/AbstractShaderManager.hx",13,0x593d46f2)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//AbstractShaderManager_obj::~AbstractShaderManager_obj() { }

Dynamic AbstractShaderManager_obj::__CreateEmpty() { return  new AbstractShaderManager_obj; }
hx::ObjectPtr< AbstractShaderManager_obj > AbstractShaderManager_obj::__new()
{  hx::ObjectPtr< AbstractShaderManager_obj > _result_ = new AbstractShaderManager_obj();
	_result_->__construct();
	return _result_;}

Dynamic AbstractShaderManager_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AbstractShaderManager_obj > _result_ = new AbstractShaderManager_obj();
	_result_->__construct();
	return _result_;}

Void AbstractShaderManager_obj::setShader( ::openfl::display::Shader shader){
{
		HX_STACK_FRAME("openfl._internal.renderer.AbstractShaderManager","setShader",0x9aac0c64,"openfl._internal.renderer.AbstractShaderManager.setShader","openfl/_internal/renderer/AbstractShaderManager.hx",20,0x593d46f2)
		HX_STACK_THIS(this)
		HX_STACK_ARG(shader,"shader")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AbstractShaderManager_obj,setShader,(void))


AbstractShaderManager_obj::AbstractShaderManager_obj()
{
}

void AbstractShaderManager_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AbstractShaderManager);
	HX_MARK_MEMBER_NAME(defaultShader,"defaultShader");
	HX_MARK_END_CLASS();
}

void AbstractShaderManager_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(defaultShader,"defaultShader");
}

Dynamic AbstractShaderManager_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"setShader") ) { return setShader_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"defaultShader") ) { return defaultShader; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic AbstractShaderManager_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"defaultShader") ) { defaultShader=inValue.Cast< ::openfl::display::Shader >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void AbstractShaderManager_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("defaultShader","\xc6","\x92","\x99","\x17"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::display::Shader*/ ,(int)offsetof(AbstractShaderManager_obj,defaultShader),HX_HCSTRING("defaultShader","\xc6","\x92","\x99","\x17")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("defaultShader","\xc6","\x92","\x99","\x17"),
	HX_HCSTRING("setShader","\x67","\x34","\xc8","\x7c"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AbstractShaderManager_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AbstractShaderManager_obj::__mClass,"__mClass");
};

#endif

hx::Class AbstractShaderManager_obj::__mClass;

void AbstractShaderManager_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.renderer.AbstractShaderManager","\x2b","\xca","\x45","\x02");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< AbstractShaderManager_obj >;
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
} // end namespace renderer
