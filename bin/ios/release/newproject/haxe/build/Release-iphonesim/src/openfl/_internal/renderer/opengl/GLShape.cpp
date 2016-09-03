#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_graphics_GLRenderContext
#include <lime/graphics/GLRenderContext.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GL
#include <lime/graphics/opengl/GL.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLBuffer
#include <lime/graphics/opengl/GLBuffer.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLObject
#include <lime/graphics/opengl/GLObject.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLTexture
#include <lime/graphics/opengl/GLTexture.h>
#endif
#ifndef INCLUDED_lime_utils_ArrayBufferView
#include <lime/utils/ArrayBufferView.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_AbstractBlendModeManager
#include <openfl/_internal/renderer/AbstractBlendModeManager.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_AbstractMaskManager
#include <openfl/_internal/renderer/AbstractMaskManager.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_AbstractRenderer
#include <openfl/_internal/renderer/AbstractRenderer.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_AbstractShaderManager
#include <openfl/_internal/renderer/AbstractShaderManager.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_RenderSession
#include <openfl/_internal/renderer/RenderSession.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_cairo_CairoGraphics
#include <openfl/_internal/renderer/cairo/CairoGraphics.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_GLRenderer
#include <openfl/_internal/renderer/opengl/GLRenderer.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_GLShape
#include <openfl/_internal/renderer/opengl/GLShape.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_Graphics
#include <openfl/display/Graphics.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_Shader
#include <openfl/display/Shader.h>
#endif
#ifndef INCLUDED_openfl_display_ShaderData
#include <openfl/display/ShaderData.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_filters_BitmapFilter
#include <openfl/filters/BitmapFilter.h>
#endif
#ifndef INCLUDED_openfl_filters_ShaderFilter
#include <openfl/filters/ShaderFilter.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
namespace openfl{
namespace _internal{
namespace renderer{
namespace opengl{

Void GLShape_obj::__construct()
{
	return null();
}

//GLShape_obj::~GLShape_obj() { }

Dynamic GLShape_obj::__CreateEmpty() { return  new GLShape_obj; }
hx::ObjectPtr< GLShape_obj > GLShape_obj::__new()
{  hx::ObjectPtr< GLShape_obj > _result_ = new GLShape_obj();
	_result_->__construct();
	return _result_;}

Dynamic GLShape_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< GLShape_obj > _result_ = new GLShape_obj();
	_result_->__construct();
	return _result_;}

Void GLShape_obj::render( ::openfl::display::DisplayObject shape,::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.GLShape","render",0x6f8c5eac,"openfl._internal.renderer.opengl.GLShape.render","openfl/_internal/renderer/opengl/GLShape.hx",21,0xf928bb48)
		HX_STACK_ARG(shape,"shape")
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_LINE(23)
		bool tmp = shape->__renderable;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(23)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(23)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(23)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(23)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(23)
		if ((tmp3)){
			HX_STACK_LINE(23)
			tmp4 = (shape->__worldAlpha <= (int)0);
		}
		else{
			HX_STACK_LINE(23)
			tmp4 = true;
		}
		HX_STACK_LINE(23)
		if ((tmp4)){
			HX_STACK_LINE(23)
			return null();
		}
		HX_STACK_LINE(25)
		::openfl::display::Graphics graphics = shape->__graphics;		HX_STACK_VAR(graphics,"graphics");
		HX_STACK_LINE(26)
		::lime::graphics::GLRenderContext gl = renderSession->gl;		HX_STACK_VAR(gl,"gl");
		HX_STACK_LINE(28)
		bool tmp5 = (graphics != null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(28)
		if ((tmp5)){
			HX_STACK_LINE(33)
			::openfl::display::Graphics tmp6 = graphics;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(33)
			::openfl::_internal::renderer::RenderSession tmp7 = renderSession;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(33)
			::openfl::geom::Matrix tmp8 = shape->__worldTransform;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(33)
			::openfl::_internal::renderer::cairo::CairoGraphics_obj::render(tmp6,tmp7,tmp8);
			HX_STACK_LINE(36)
			::openfl::geom::Rectangle bounds = graphics->__bounds;		HX_STACK_VAR(bounds,"bounds");
			HX_STACK_LINE(38)
			bool tmp9 = (graphics->__bitmap != null());		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(38)
			bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(38)
			if ((tmp9)){
				HX_STACK_LINE(38)
				tmp10 = graphics->__visible;
			}
			else{
				HX_STACK_LINE(38)
				tmp10 = false;
			}
			HX_STACK_LINE(38)
			if ((tmp10)){
				HX_STACK_LINE(40)
				::openfl::display::Shader shader;		HX_STACK_VAR(shader,"shader");
				HX_STACK_LINE(42)
				bool tmp11 = (shape->__filters != null());		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(42)
				bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(42)
				if ((tmp11)){
					HX_STACK_LINE(42)
					::openfl::filters::BitmapFilter tmp13 = shape->__filters->__get((int)0).StaticCast< ::openfl::filters::BitmapFilter >();		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(42)
					::openfl::filters::BitmapFilter tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(42)
					::openfl::filters::BitmapFilter tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(42)
					tmp12 = ::Std_obj::is(tmp15,hx::ClassOf< ::openfl::filters::ShaderFilter >());
				}
				else{
					HX_STACK_LINE(42)
					tmp12 = false;
				}
				HX_STACK_LINE(42)
				if ((tmp12)){
					HX_STACK_LINE(44)
					::openfl::filters::BitmapFilter tmp13 = shape->__filters->__get((int)0).StaticCast< ::openfl::filters::BitmapFilter >();		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(44)
					::openfl::filters::ShaderFilter tmp14;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(44)
					tmp14 = hx::TCast< ::openfl::filters::ShaderFilter >::cast(tmp13);
					HX_STACK_LINE(44)
					shader = tmp14->shader;
				}
				else{
					HX_STACK_LINE(48)
					::openfl::display::Shader tmp13 = renderSession->shaderManager->defaultShader;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(48)
					shader = tmp13;
				}
				HX_STACK_LINE(52)
				Dynamic tmp13 = shape->get_blendMode();		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(52)
				renderSession->blendModeManager->setBlendMode(tmp13);
				HX_STACK_LINE(53)
				::openfl::display::Shader tmp14 = shader;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(53)
				renderSession->shaderManager->setShader(tmp14);
				HX_STACK_LINE(54)
				::openfl::display::DisplayObject tmp15 = shape;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(54)
				renderSession->maskManager->pushObject(tmp15,null());
				HX_STACK_LINE(56)
				::openfl::_internal::renderer::opengl::GLRenderer renderer = ((::openfl::_internal::renderer::opengl::GLRenderer)(renderSession->renderer));		HX_STACK_VAR(renderer,"renderer");
				HX_STACK_LINE(58)
				{
					HX_STACK_LINE(58)
					int index = shader->data->__Field(HX_HCSTRING("aAlpha","\x3d","\x17","\x62","\x7d"), hx::paccDynamic )->__Field(HX_HCSTRING("index","\x12","\x9b","\x14","\xbe"), hx::paccDynamic );		HX_STACK_VAR(index,"index");
					HX_STACK_LINE(58)
					::lime::graphics::opengl::GL_obj::cffi_lime_gl_enable_vertex_attrib_array.call(index);
				}
				HX_STACK_LINE(59)
				{
					HX_STACK_LINE(59)
					int location = shader->data->__Field(HX_HCSTRING("uMatrix","\x96","\xf0","\xab","\xf1"), hx::paccDynamic )->__Field(HX_HCSTRING("index","\x12","\x9b","\x14","\xbe"), hx::paccDynamic );		HX_STACK_VAR(location,"location");
					HX_STACK_LINE(59)
					::openfl::geom::Matrix tmp16 = graphics->__worldTransform;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(59)
					::lime::utils::ArrayBufferView tmp17 = renderer->getMatrix(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(59)
					::lime::utils::ArrayBufferView v = tmp17;		HX_STACK_VAR(v,"v");
					HX_STACK_LINE(59)
					::lime::graphics::opengl::GL_obj::cffi_lime_gl_uniform_matrix.call(location,false,hx::DynamicPtr(v->buffer),(int)4);
				}
				HX_STACK_LINE(61)
				{
					HX_STACK_LINE(61)
					::lime::graphics::GLRenderContext tmp16 = gl;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(61)
					::lime::graphics::opengl::GLTexture tmp17 = graphics->__bitmap->getTexture(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(61)
					::lime::graphics::opengl::GLTexture texture = tmp17;		HX_STACK_VAR(texture,"texture");
					HX_STACK_LINE(61)
					::lime::graphics::opengl::GL_obj::cffi_lime_gl_bind_texture.call(gl->TEXTURE_2D,hx::DynamicPtr((  (((texture == null()))) ? Dynamic(null()) : Dynamic(texture->id) )));
				}
				HX_STACK_LINE(63)
				::lime::graphics::opengl::GL_obj::cffi_lime_gl_tex_parameteri.call(gl->TEXTURE_2D,gl->TEXTURE_MAG_FILTER,gl->LINEAR);
				HX_STACK_LINE(64)
				::lime::graphics::opengl::GL_obj::cffi_lime_gl_tex_parameteri.call(gl->TEXTURE_2D,gl->TEXTURE_MIN_FILTER,gl->LINEAR);
				HX_STACK_LINE(66)
				{
					HX_STACK_LINE(66)
					::lime::graphics::GLRenderContext tmp16 = gl;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(66)
					Float tmp17 = shape->__worldAlpha;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(66)
					::lime::graphics::opengl::GLBuffer tmp18 = graphics->__bitmap->getBuffer(tmp16,tmp17);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(66)
					::lime::graphics::opengl::GLBuffer buffer = tmp18;		HX_STACK_VAR(buffer,"buffer");
					HX_STACK_LINE(66)
					::lime::graphics::opengl::GL_obj::cffi_lime_gl_bind_buffer.call(gl->ARRAY_BUFFER,hx::DynamicPtr((  (((buffer == null()))) ? Dynamic(null()) : Dynamic(buffer->id) )));
				}
				HX_STACK_LINE(67)
				{
					HX_STACK_LINE(67)
					int indx = shader->data->__Field(HX_HCSTRING("aPosition","\x2a","\x26","\x25","\x92"), hx::paccDynamic )->__Field(HX_HCSTRING("index","\x12","\x9b","\x14","\xbe"), hx::paccDynamic );		HX_STACK_VAR(indx,"indx");
					HX_STACK_LINE(67)
					::lime::graphics::opengl::GL_obj::cffi_lime_gl_vertex_attrib_pointer.call(indx,(int)3,gl->FLOAT,false,(int)24,(int)0);
				}
				HX_STACK_LINE(68)
				{
					HX_STACK_LINE(68)
					int indx = shader->data->__Field(HX_HCSTRING("aTexCoord","\xcf","\x8c","\x5d","\xf2"), hx::paccDynamic )->__Field(HX_HCSTRING("index","\x12","\x9b","\x14","\xbe"), hx::paccDynamic );		HX_STACK_VAR(indx,"indx");
					HX_STACK_LINE(68)
					::lime::graphics::opengl::GL_obj::cffi_lime_gl_vertex_attrib_pointer.call(indx,(int)2,gl->FLOAT,false,(int)24,(int)12);
				}
				HX_STACK_LINE(69)
				{
					HX_STACK_LINE(69)
					int indx = shader->data->__Field(HX_HCSTRING("aAlpha","\x3d","\x17","\x62","\x7d"), hx::paccDynamic )->__Field(HX_HCSTRING("index","\x12","\x9b","\x14","\xbe"), hx::paccDynamic );		HX_STACK_VAR(indx,"indx");
					HX_STACK_LINE(69)
					::lime::graphics::opengl::GL_obj::cffi_lime_gl_vertex_attrib_pointer.call(indx,(int)1,gl->FLOAT,false,(int)24,(int)20);
				}
				HX_STACK_LINE(71)
				::lime::graphics::opengl::GL_obj::cffi_lime_gl_draw_arrays.call(gl->TRIANGLE_STRIP,(int)0,(int)4);
				HX_STACK_LINE(73)
				::openfl::display::DisplayObject tmp16 = shape;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(73)
				renderSession->maskManager->popObject(tmp16,null());
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GLShape_obj,render,(void))


GLShape_obj::GLShape_obj()
{
}

bool GLShape_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"render") ) { outValue = render_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GLShape_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GLShape_obj::__mClass,"__mClass");
};

#endif

hx::Class GLShape_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("render","\x56","\x6b","\x29","\x05"),
	::String(null()) };

void GLShape_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.renderer.opengl.GLShape","\x58","\x5e","\x97","\x4e");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &GLShape_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< GLShape_obj >;
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
