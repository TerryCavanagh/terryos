#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_cairo_Cairo
#include <lime/graphics/cairo/Cairo.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_AbstractBlendModeManager
#include <openfl/_internal/renderer/AbstractBlendModeManager.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_RenderSession
#include <openfl/_internal/renderer/RenderSession.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_cairo_CairoBlendModeManager
#include <openfl/_internal/renderer/cairo/CairoBlendModeManager.h>
#endif
namespace openfl{
namespace _internal{
namespace renderer{
namespace cairo{

Void CairoBlendModeManager_obj::__construct(::openfl::_internal::renderer::RenderSession renderSession)
{
HX_STACK_FRAME("openfl._internal.renderer.cairo.CairoBlendModeManager","new",0xb5137212,"openfl._internal.renderer.cairo.CairoBlendModeManager.new","openfl/_internal/renderer/cairo/CairoBlendModeManager.hx",17,0x538d3b5e)
HX_STACK_THIS(this)
HX_STACK_ARG(renderSession,"renderSession")
{
	HX_STACK_LINE(19)
	super::__construct();
	HX_STACK_LINE(21)
	this->renderSession = renderSession;
}
;
	return null();
}

//CairoBlendModeManager_obj::~CairoBlendModeManager_obj() { }

Dynamic CairoBlendModeManager_obj::__CreateEmpty() { return  new CairoBlendModeManager_obj; }
hx::ObjectPtr< CairoBlendModeManager_obj > CairoBlendModeManager_obj::__new(::openfl::_internal::renderer::RenderSession renderSession)
{  hx::ObjectPtr< CairoBlendModeManager_obj > _result_ = new CairoBlendModeManager_obj();
	_result_->__construct(renderSession);
	return _result_;}

Dynamic CairoBlendModeManager_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CairoBlendModeManager_obj > _result_ = new CairoBlendModeManager_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void CairoBlendModeManager_obj::setBlendMode( Dynamic blendMode){
{
		HX_STACK_FRAME("openfl._internal.renderer.cairo.CairoBlendModeManager","setBlendMode",0xf5133c60,"openfl._internal.renderer.cairo.CairoBlendModeManager.setBlendMode","openfl/_internal/renderer/cairo/CairoBlendModeManager.hx",26,0x538d3b5e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(blendMode,"blendMode")
		HX_STACK_LINE(28)
		Dynamic tmp = this->currentBlendMode;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(28)
		Dynamic tmp1 = blendMode;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(28)
		bool tmp2 = (tmp == tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(28)
		if ((tmp2)){
			HX_STACK_LINE(28)
			return null();
		}
		HX_STACK_LINE(30)
		this->currentBlendMode = blendMode;
		HX_STACK_LINE(32)
		Dynamic tmp3 = blendMode;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(32)
		switch( (int)(tmp3)){
			case (int)0: {
				HX_STACK_LINE(36)
				::openfl::_internal::renderer::RenderSession tmp4 = this->renderSession;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(36)
				tmp4->cairo->set_operator((int)12);
			}
			;break;
			case (int)1: {
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(44)
				::openfl::_internal::renderer::RenderSession tmp4 = this->renderSession;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(44)
				tmp4->cairo->set_operator((int)17);
			}
			;break;
			case (int)3: {
				HX_STACK_LINE(48)
				::openfl::_internal::renderer::RenderSession tmp4 = this->renderSession;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(48)
				tmp4->cairo->set_operator((int)23);
			}
			;break;
			case (int)4: {
			}
			;break;
			case (int)5: {
				HX_STACK_LINE(56)
				::openfl::_internal::renderer::RenderSession tmp4 = this->renderSession;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(56)
				tmp4->cairo->set_operator((int)21);
			}
			;break;
			case (int)6: {
			}
			;break;
			case (int)7: {
				HX_STACK_LINE(64)
				::openfl::_internal::renderer::RenderSession tmp4 = this->renderSession;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(64)
				tmp4->cairo->set_operator((int)2);
			}
			;break;
			case (int)8: {
				HX_STACK_LINE(68)
				::openfl::_internal::renderer::RenderSession tmp4 = this->renderSession;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(68)
				tmp4->cairo->set_operator((int)18);
			}
			;break;
			case (int)9: {
				HX_STACK_LINE(72)
				::openfl::_internal::renderer::RenderSession tmp4 = this->renderSession;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(72)
				tmp4->cairo->set_operator((int)14);
			}
			;break;
			case (int)10: {
				HX_STACK_LINE(76)
				::openfl::_internal::renderer::RenderSession tmp4 = this->renderSession;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(76)
				tmp4->cairo->set_operator((int)2);
			}
			;break;
			case (int)11: {
				HX_STACK_LINE(80)
				::openfl::_internal::renderer::RenderSession tmp4 = this->renderSession;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(80)
				tmp4->cairo->set_operator((int)16);
			}
			;break;
			case (int)12: {
				HX_STACK_LINE(84)
				::openfl::_internal::renderer::RenderSession tmp4 = this->renderSession;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(84)
				tmp4->cairo->set_operator((int)15);
			}
			;break;
			case (int)13: {
			}
			;break;
			case (int)14: {
			}
			;break;
			default: {
				HX_STACK_LINE(96)
				::openfl::_internal::renderer::RenderSession tmp4 = this->renderSession;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(96)
				tmp4->cairo->set_operator((int)2);
			}
		}
	}
return null();
}



CairoBlendModeManager_obj::CairoBlendModeManager_obj()
{
}

void CairoBlendModeManager_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(CairoBlendModeManager);
	HX_MARK_MEMBER_NAME(currentBlendMode,"currentBlendMode");
	HX_MARK_MEMBER_NAME(renderSession,"renderSession");
	HX_MARK_END_CLASS();
}

void CairoBlendModeManager_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(currentBlendMode,"currentBlendMode");
	HX_VISIT_MEMBER_NAME(renderSession,"renderSession");
}

Dynamic CairoBlendModeManager_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"setBlendMode") ) { return setBlendMode_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"renderSession") ) { return renderSession; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"currentBlendMode") ) { return currentBlendMode; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic CairoBlendModeManager_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"renderSession") ) { renderSession=inValue.Cast< ::openfl::_internal::renderer::RenderSession >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"currentBlendMode") ) { currentBlendMode=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void CairoBlendModeManager_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("currentBlendMode","\xdb","\x58","\x68","\xff"));
	outFields->push(HX_HCSTRING("renderSession","\xa0","\x8a","\x85","\x8f"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(CairoBlendModeManager_obj,currentBlendMode),HX_HCSTRING("currentBlendMode","\xdb","\x58","\x68","\xff")},
	{hx::fsObject /*::openfl::_internal::renderer::RenderSession*/ ,(int)offsetof(CairoBlendModeManager_obj,renderSession),HX_HCSTRING("renderSession","\xa0","\x8a","\x85","\x8f")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("currentBlendMode","\xdb","\x58","\x68","\xff"),
	HX_HCSTRING("renderSession","\xa0","\x8a","\x85","\x8f"),
	HX_HCSTRING("setBlendMode","\x52","\xa4","\x87","\x30"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CairoBlendModeManager_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CairoBlendModeManager_obj::__mClass,"__mClass");
};

#endif

hx::Class CairoBlendModeManager_obj::__mClass;

void CairoBlendModeManager_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.renderer.cairo.CairoBlendModeManager","\x20","\xc1","\x90","\xcb");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< CairoBlendModeManager_obj >;
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
} // end namespace cairo
