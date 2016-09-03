#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_GLRenderContext
#include <lime/graphics/GLRenderContext.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GL
#include <lime/graphics/opengl/GL.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_AbstractBlendModeManager
#include <openfl/_internal/renderer/AbstractBlendModeManager.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_GLBlendModeManager
#include <openfl/_internal/renderer/opengl/GLBlendModeManager.h>
#endif
namespace openfl{
namespace _internal{
namespace renderer{
namespace opengl{

Void GLBlendModeManager_obj::__construct(::lime::graphics::GLRenderContext gl)
{
HX_STACK_FRAME("openfl._internal.renderer.opengl.GLBlendModeManager","new",0xd6095494,"openfl._internal.renderer.opengl.GLBlendModeManager.new","openfl/_internal/renderer/opengl/GLBlendModeManager.hx",16,0xe1d930ba)
HX_STACK_THIS(this)
HX_STACK_ARG(gl,"gl")
{
	HX_STACK_LINE(18)
	super::__construct();
	HX_STACK_LINE(20)
	this->gl = gl;
	HX_STACK_LINE(22)
	this->setBlendMode(((Dynamic)((int)10)));
	HX_STACK_LINE(23)
	::lime::graphics::opengl::GL_obj::cffi_lime_gl_enable.call(gl->BLEND);
}
;
	return null();
}

//GLBlendModeManager_obj::~GLBlendModeManager_obj() { }

Dynamic GLBlendModeManager_obj::__CreateEmpty() { return  new GLBlendModeManager_obj; }
hx::ObjectPtr< GLBlendModeManager_obj > GLBlendModeManager_obj::__new(::lime::graphics::GLRenderContext gl)
{  hx::ObjectPtr< GLBlendModeManager_obj > _result_ = new GLBlendModeManager_obj();
	_result_->__construct(gl);
	return _result_;}

Dynamic GLBlendModeManager_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< GLBlendModeManager_obj > _result_ = new GLBlendModeManager_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void GLBlendModeManager_obj::setBlendMode( Dynamic blendMode){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.GLBlendModeManager","setBlendMode",0xf121f99e,"openfl._internal.renderer.opengl.GLBlendModeManager.setBlendMode","openfl/_internal/renderer/opengl/GLBlendModeManager.hx",28,0xe1d930ba)
		HX_STACK_THIS(this)
		HX_STACK_ARG(blendMode,"blendMode")
		HX_STACK_LINE(30)
		Dynamic tmp = this->currentBlendMode;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(30)
		Dynamic tmp1 = blendMode;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(30)
		bool tmp2 = (tmp == tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(30)
		if ((tmp2)){
			HX_STACK_LINE(30)
			return null();
		}
		HX_STACK_LINE(32)
		this->currentBlendMode = blendMode;
		HX_STACK_LINE(34)
		Dynamic tmp3 = blendMode;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(34)
		switch( (int)(tmp3)){
			case (int)0: {
				HX_STACK_LINE(38)
				::lime::graphics::opengl::GL_obj::cffi_lime_gl_blend_equation.call(this->gl->FUNC_ADD);
				HX_STACK_LINE(39)
				::lime::graphics::opengl::GL_obj::cffi_lime_gl_blend_func.call(this->gl->ONE,this->gl->ONE);
			}
			;break;
			case (int)9: {
				HX_STACK_LINE(43)
				::lime::graphics::opengl::GL_obj::cffi_lime_gl_blend_equation.call(this->gl->FUNC_ADD);
				HX_STACK_LINE(44)
				::lime::graphics::opengl::GL_obj::cffi_lime_gl_blend_func.call(this->gl->DST_COLOR,this->gl->ONE_MINUS_SRC_ALPHA);
			}
			;break;
			case (int)12: {
				HX_STACK_LINE(48)
				::lime::graphics::opengl::GL_obj::cffi_lime_gl_blend_equation.call(this->gl->FUNC_ADD);
				HX_STACK_LINE(49)
				::lime::graphics::opengl::GL_obj::cffi_lime_gl_blend_func.call(this->gl->ONE,this->gl->ONE_MINUS_SRC_COLOR);
			}
			;break;
			case (int)14: {
				HX_STACK_LINE(53)
				::lime::graphics::opengl::GL_obj::cffi_lime_gl_blend_equation.call(this->gl->FUNC_REVERSE_SUBTRACT);
				HX_STACK_LINE(54)
				::lime::graphics::opengl::GL_obj::cffi_lime_gl_blend_func.call(this->gl->ONE,this->gl->ONE);
			}
			;break;
			default: {
				HX_STACK_LINE(70)
				::lime::graphics::opengl::GL_obj::cffi_lime_gl_blend_equation.call(this->gl->FUNC_ADD);
				HX_STACK_LINE(71)
				::lime::graphics::opengl::GL_obj::cffi_lime_gl_blend_func.call(this->gl->SRC_ALPHA,this->gl->ONE_MINUS_SRC_ALPHA);
			}
		}
	}
return null();
}



GLBlendModeManager_obj::GLBlendModeManager_obj()
{
}

void GLBlendModeManager_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GLBlendModeManager);
	HX_MARK_MEMBER_NAME(currentBlendMode,"currentBlendMode");
	HX_MARK_MEMBER_NAME(gl,"gl");
	HX_MARK_END_CLASS();
}

void GLBlendModeManager_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(currentBlendMode,"currentBlendMode");
	HX_VISIT_MEMBER_NAME(gl,"gl");
}

Dynamic GLBlendModeManager_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"gl") ) { return gl; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"setBlendMode") ) { return setBlendMode_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"currentBlendMode") ) { return currentBlendMode; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic GLBlendModeManager_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"gl") ) { gl=inValue.Cast< ::lime::graphics::GLRenderContext >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"currentBlendMode") ) { currentBlendMode=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void GLBlendModeManager_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("currentBlendMode","\xdb","\x58","\x68","\xff"));
	outFields->push(HX_HCSTRING("gl","\x25","\x5a","\x00","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(GLBlendModeManager_obj,currentBlendMode),HX_HCSTRING("currentBlendMode","\xdb","\x58","\x68","\xff")},
	{hx::fsObject /*::lime::graphics::GLRenderContext*/ ,(int)offsetof(GLBlendModeManager_obj,gl),HX_HCSTRING("gl","\x25","\x5a","\x00","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("currentBlendMode","\xdb","\x58","\x68","\xff"),
	HX_HCSTRING("gl","\x25","\x5a","\x00","\x00"),
	HX_HCSTRING("setBlendMode","\x52","\xa4","\x87","\x30"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GLBlendModeManager_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GLBlendModeManager_obj::__mClass,"__mClass");
};

#endif

hx::Class GLBlendModeManager_obj::__mClass;

void GLBlendModeManager_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.renderer.opengl.GLBlendModeManager","\xa2","\xba","\x7e","\x51");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< GLBlendModeManager_obj >;
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
} // end namespace opengl
