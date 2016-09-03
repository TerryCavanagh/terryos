#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_graphics_GLRenderContext
#include <lime/graphics/GLRenderContext.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GL
#include <lime/graphics/opengl/GL.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLObject
#include <lime/graphics/opengl/GLObject.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLProgram
#include <lime/graphics/opengl/GLProgram.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_AbstractShaderManager
#include <openfl/_internal/renderer/AbstractShaderManager.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_GLShaderManager
#include <openfl/_internal/renderer/opengl/GLShaderManager.h>
#endif
#ifndef INCLUDED_openfl_display_Shader
#include <openfl/display/Shader.h>
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
namespace _internal{
namespace renderer{
namespace opengl{

Void GLShaderManager_obj::__construct(::lime::graphics::GLRenderContext gl)
{
HX_STACK_FRAME("openfl._internal.renderer.opengl.GLShaderManager","new",0xf3047071,"openfl._internal.renderer.opengl.GLShaderManager.new","openfl/_internal/renderer/opengl/GLShaderManager.hx",18,0xbe4c2a01)
HX_STACK_THIS(this)
HX_STACK_ARG(gl,"gl")
{
	HX_STACK_LINE(20)
	super::__construct();
	HX_STACK_LINE(22)
	this->gl = gl;
	HX_STACK_LINE(24)
	::openfl::display::Shader tmp = ::openfl::display::Shader_obj::__new(null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(24)
	this->defaultShader = tmp;
	HX_STACK_LINE(25)
	::openfl::display::Shader tmp1 = this->defaultShader;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(25)
	tmp1->gl = gl;
	HX_STACK_LINE(26)
	::openfl::display::Shader tmp2 = this->defaultShader;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(26)
	tmp2->__init();
}
;
	return null();
}

//GLShaderManager_obj::~GLShaderManager_obj() { }

Dynamic GLShaderManager_obj::__CreateEmpty() { return  new GLShaderManager_obj; }
hx::ObjectPtr< GLShaderManager_obj > GLShaderManager_obj::__new(::lime::graphics::GLRenderContext gl)
{  hx::ObjectPtr< GLShaderManager_obj > _result_ = new GLShaderManager_obj();
	_result_->__construct(gl);
	return _result_;}

Dynamic GLShaderManager_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< GLShaderManager_obj > _result_ = new GLShaderManager_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void GLShaderManager_obj::setShader( ::openfl::display::Shader shader){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.GLShaderManager","setShader",0xc09db738,"openfl._internal.renderer.opengl.GLShaderManager.setShader","openfl/_internal/renderer/opengl/GLShaderManager.hx",31,0xbe4c2a01)
		HX_STACK_THIS(this)
		HX_STACK_ARG(shader,"shader")
		HX_STACK_LINE(33)
		::openfl::display::Shader tmp = this->currentShader;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(33)
		::openfl::display::Shader tmp1 = shader;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(33)
		bool tmp2 = (tmp == tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(33)
		if ((tmp2)){
			HX_STACK_LINE(33)
			return null();
		}
		HX_STACK_LINE(35)
		::openfl::display::Shader tmp3 = this->currentShader;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(35)
		bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(35)
		if ((tmp4)){
			HX_STACK_LINE(37)
			::openfl::display::Shader tmp5 = this->currentShader;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(37)
			tmp5->__disable();
		}
		HX_STACK_LINE(41)
		bool tmp5 = (shader == null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(41)
		if ((tmp5)){
			HX_STACK_LINE(43)
			this->currentShader = null();
			HX_STACK_LINE(44)
			::lime::graphics::opengl::GL_obj::cffi_lime_gl_use_program.call(hx::DynamicPtr(null()));
			HX_STACK_LINE(45)
			return null();
		}
		HX_STACK_LINE(49)
		this->currentShader = shader;
		HX_STACK_LINE(51)
		::openfl::display::Shader tmp6 = this->currentShader;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(51)
		::lime::graphics::GLRenderContext tmp7 = tmp6->gl;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(51)
		bool tmp8 = (tmp7 == null());		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(51)
		if ((tmp8)){
			HX_STACK_LINE(53)
			::lime::graphics::GLRenderContext tmp9 = this->gl;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(53)
			::openfl::display::Shader tmp10 = this->currentShader;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(53)
			tmp10->gl = tmp9;
			HX_STACK_LINE(54)
			::openfl::display::Shader tmp11 = this->currentShader;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(54)
			tmp11->__init();
		}
		HX_STACK_LINE(58)
		{
			HX_STACK_LINE(58)
			::lime::graphics::opengl::GLProgram program = shader->glProgram;		HX_STACK_VAR(program,"program");
			HX_STACK_LINE(58)
			::lime::graphics::opengl::GL_obj::cffi_lime_gl_use_program.call(hx::DynamicPtr((  (((program == null()))) ? Dynamic(null()) : Dynamic(program->id) )));
		}
		HX_STACK_LINE(59)
		::openfl::display::Shader tmp9 = this->currentShader;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(59)
		tmp9->__enable();
	}
return null();
}



GLShaderManager_obj::GLShaderManager_obj()
{
}

void GLShaderManager_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GLShaderManager);
	HX_MARK_MEMBER_NAME(currentShader,"currentShader");
	HX_MARK_MEMBER_NAME(gl,"gl");
	::openfl::_internal::renderer::AbstractShaderManager_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void GLShaderManager_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(currentShader,"currentShader");
	HX_VISIT_MEMBER_NAME(gl,"gl");
	::openfl::_internal::renderer::AbstractShaderManager_obj::__Visit(HX_VISIT_ARG);
}

Dynamic GLShaderManager_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"gl") ) { return gl; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"setShader") ) { return setShader_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"currentShader") ) { return currentShader; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic GLShaderManager_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"gl") ) { gl=inValue.Cast< ::lime::graphics::GLRenderContext >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"currentShader") ) { currentShader=inValue.Cast< ::openfl::display::Shader >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void GLShaderManager_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("currentShader","\x3e","\x40","\x7d","\x00"));
	outFields->push(HX_HCSTRING("gl","\x25","\x5a","\x00","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::display::Shader*/ ,(int)offsetof(GLShaderManager_obj,currentShader),HX_HCSTRING("currentShader","\x3e","\x40","\x7d","\x00")},
	{hx::fsObject /*::lime::graphics::GLRenderContext*/ ,(int)offsetof(GLShaderManager_obj,gl),HX_HCSTRING("gl","\x25","\x5a","\x00","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("currentShader","\x3e","\x40","\x7d","\x00"),
	HX_HCSTRING("gl","\x25","\x5a","\x00","\x00"),
	HX_HCSTRING("setShader","\x67","\x34","\xc8","\x7c"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GLShaderManager_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GLShaderManager_obj::__mClass,"__mClass");
};

#endif

hx::Class GLShaderManager_obj::__mClass;

void GLShaderManager_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.renderer.opengl.GLShaderManager","\xff","\x63","\x2d","\xbb");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< GLShaderManager_obj >;
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
