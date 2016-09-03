#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_lime_graphics_GLRenderContext
#include <lime/graphics/GLRenderContext.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GL
#include <lime/graphics/opengl/GL.h>
#endif
#ifndef INCLUDED_lime_math__Matrix4_Matrix4_Impl_
#include <lime/math/_Matrix4/Matrix4_Impl_.h>
#endif
#ifndef INCLUDED_lime_ui_Window
#include <lime/ui/Window.h>
#endif
#ifndef INCLUDED_lime_utils_ArrayBufferView
#include <lime/utils/ArrayBufferView.h>
#endif
#ifndef INCLUDED_openfl__Vector_IVector
#include <openfl/_Vector/IVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_ObjectVector
#include <openfl/_Vector/ObjectVector.h>
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
#ifndef INCLUDED_openfl__internal_renderer_opengl_GLBlendModeManager
#include <openfl/_internal/renderer/opengl/GLBlendModeManager.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_GLMaskManager
#include <openfl/_internal/renderer/opengl/GLMaskManager.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_GLRenderer
#include <openfl/_internal/renderer/opengl/GLRenderer.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_GLShaderManager
#include <openfl/_internal/renderer/opengl/GLShaderManager.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_Shader
#include <openfl/display/Shader.h>
#endif
#ifndef INCLUDED_openfl_display_Stage
#include <openfl/display/Stage.h>
#endif
#ifndef INCLUDED_openfl_display_Stage3D
#include <openfl/display/Stage3D.h>
#endif
#ifndef INCLUDED_openfl_display3D_Context3D
#include <openfl/display3D/Context3D.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif
namespace openfl{
namespace _internal{
namespace renderer{
namespace opengl{

Void GLRenderer_obj::__construct(int width,int height,::lime::graphics::GLRenderContext gl)
{
HX_STACK_FRAME("openfl._internal.renderer.opengl.GLRenderer","new",0xb6a82d5e,"openfl._internal.renderer.opengl.GLRenderer.new","openfl/_internal/renderer/opengl/GLRenderer.hx",25,0xb2b97130)
HX_STACK_THIS(this)
HX_STACK_ARG(width,"width")
HX_STACK_ARG(height,"height")
HX_STACK_ARG(gl,"gl")
{
	HX_STACK_LINE(27)
	int tmp = width;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(27)
	int tmp1 = height;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(27)
	super::__construct(tmp,tmp1);
	HX_STACK_LINE(29)
	this->gl = gl;
	HX_STACK_LINE(30)
	::lime::utils::ArrayBufferView tmp2 = ::lime::math::_Matrix4::Matrix4_Impl__obj::_new(null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(30)
	this->matrix = tmp2;
	HX_STACK_LINE(32)
	::openfl::_internal::renderer::RenderSession tmp3 = ::openfl::_internal::renderer::RenderSession_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(32)
	this->renderSession = tmp3;
	HX_STACK_LINE(33)
	::openfl::_internal::renderer::RenderSession tmp4 = this->renderSession;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(33)
	tmp4->gl = gl;
	HX_STACK_LINE(34)
	::openfl::_internal::renderer::RenderSession tmp5 = this->renderSession;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(34)
	tmp5->roundPixels = true;
	HX_STACK_LINE(35)
	::openfl::_internal::renderer::RenderSession tmp6 = this->renderSession;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(35)
	tmp6->renderer = hx::ObjectPtr<OBJ_>(this);
	HX_STACK_LINE(36)
	::openfl::_internal::renderer::opengl::GLBlendModeManager tmp7 = ::openfl::_internal::renderer::opengl::GLBlendModeManager_obj::__new(gl);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(36)
	::openfl::_internal::renderer::RenderSession tmp8 = this->renderSession;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(36)
	tmp8->blendModeManager = tmp7;
	HX_STACK_LINE(37)
	::openfl::_internal::renderer::opengl::GLShaderManager tmp9 = ::openfl::_internal::renderer::opengl::GLShaderManager_obj::__new(gl);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(37)
	::openfl::_internal::renderer::RenderSession tmp10 = this->renderSession;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(37)
	tmp10->shaderManager = tmp9;
	HX_STACK_LINE(38)
	::openfl::_internal::renderer::RenderSession tmp11 = this->renderSession;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(38)
	::openfl::_internal::renderer::opengl::GLMaskManager tmp12 = ::openfl::_internal::renderer::opengl::GLMaskManager_obj::__new(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(38)
	::openfl::_internal::renderer::RenderSession tmp13 = this->renderSession;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(38)
	tmp13->maskManager = tmp12;
	HX_STACK_LINE(40)
	int tmp14 = width;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(40)
	int tmp15 = height;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(40)
	::lime::utils::ArrayBufferView tmp16 = ::lime::math::_Matrix4::Matrix4_Impl__obj::createOrtho((int)0,tmp14,tmp15,(int)0,(int)-1000,(int)1000);		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(40)
	this->projection = tmp16;
}
;
	return null();
}

//GLRenderer_obj::~GLRenderer_obj() { }

Dynamic GLRenderer_obj::__CreateEmpty() { return  new GLRenderer_obj; }
hx::ObjectPtr< GLRenderer_obj > GLRenderer_obj::__new(int width,int height,::lime::graphics::GLRenderContext gl)
{  hx::ObjectPtr< GLRenderer_obj > _result_ = new GLRenderer_obj();
	_result_->__construct(width,height,gl);
	return _result_;}

Dynamic GLRenderer_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< GLRenderer_obj > _result_ = new GLRenderer_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _result_;}

::lime::utils::ArrayBufferView GLRenderer_obj::getMatrix( ::openfl::geom::Matrix transform){
	HX_STACK_FRAME("openfl._internal.renderer.opengl.GLRenderer","getMatrix",0x5e6beef5,"openfl._internal.renderer.opengl.GLRenderer.getMatrix","openfl/_internal/renderer/opengl/GLRenderer.hx",45,0xb2b97130)
	HX_STACK_THIS(this)
	HX_STACK_ARG(transform,"transform")
	HX_STACK_LINE(47)
	::lime::utils::ArrayBufferView tmp = this->matrix;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(47)
	::lime::math::_Matrix4::Matrix4_Impl__obj::identity(tmp);
	HX_STACK_LINE(48)
	::lime::utils::ArrayBufferView tmp1 = this->matrix;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(48)
	Float tmp2 = transform->a;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(48)
	::lime::math::_Matrix4::Matrix4_Impl__obj::set(tmp1,(int)0,tmp2);
	HX_STACK_LINE(49)
	::lime::utils::ArrayBufferView tmp3 = this->matrix;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(49)
	Float tmp4 = transform->b;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(49)
	::lime::math::_Matrix4::Matrix4_Impl__obj::set(tmp3,(int)1,tmp4);
	HX_STACK_LINE(50)
	::lime::utils::ArrayBufferView tmp5 = this->matrix;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(50)
	Float tmp6 = transform->c;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(50)
	::lime::math::_Matrix4::Matrix4_Impl__obj::set(tmp5,(int)4,tmp6);
	HX_STACK_LINE(51)
	::lime::utils::ArrayBufferView tmp7 = this->matrix;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(51)
	Float tmp8 = transform->d;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(51)
	::lime::math::_Matrix4::Matrix4_Impl__obj::set(tmp7,(int)5,tmp8);
	HX_STACK_LINE(52)
	::lime::utils::ArrayBufferView tmp9 = this->matrix;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(52)
	Float tmp10 = transform->tx;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(52)
	::lime::math::_Matrix4::Matrix4_Impl__obj::set(tmp9,(int)12,tmp10);
	HX_STACK_LINE(53)
	::lime::utils::ArrayBufferView tmp11 = this->matrix;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(53)
	Float tmp12 = transform->ty;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(53)
	::lime::math::_Matrix4::Matrix4_Impl__obj::set(tmp11,(int)13,tmp12);
	HX_STACK_LINE(54)
	::lime::utils::ArrayBufferView tmp13 = this->matrix;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(54)
	::lime::utils::ArrayBufferView tmp14 = this->projection;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(54)
	::lime::math::_Matrix4::Matrix4_Impl__obj::append(tmp13,tmp14);
	HX_STACK_LINE(56)
	::lime::utils::ArrayBufferView tmp15 = this->matrix;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(56)
	return tmp15;
}


HX_DEFINE_DYNAMIC_FUNC1(GLRenderer_obj,getMatrix,return )

Void GLRenderer_obj::init( ::openfl::display::Stage stage){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.GLRenderer","init",0x19383c52,"openfl._internal.renderer.opengl.GLRenderer.init","openfl/_internal/renderer/opengl/GLRenderer.hx",61,0xb2b97130)
		HX_STACK_THIS(this)
		HX_STACK_ARG(stage,"stage")
		HX_STACK_LINE(63)
		bool tmp = stage->__transparent;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(63)
		if ((tmp)){
			HX_STACK_LINE(65)
			::lime::graphics::opengl::GL_obj::cffi_lime_gl_clear_color.call((int)0,(int)0,(int)0,(int)0);
		}
		else{
			HX_STACK_LINE(69)
			::lime::graphics::opengl::GL_obj::cffi_lime_gl_clear_color.call(stage->__colorSplit->__get((int)0),stage->__colorSplit->__get((int)1),stage->__colorSplit->__get((int)2),(int)1);
		}
		HX_STACK_LINE(73)
		::lime::graphics::opengl::GL_obj::cffi_lime_gl_clear.call(this->gl->COLOR_BUFFER_BIT);
		HX_STACK_LINE(75)
		{
			HX_STACK_LINE(75)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(75)
			::openfl::_Vector::ObjectVector _g1 = stage->stage3Ds;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(75)
			while((true)){
				HX_STACK_LINE(75)
				int tmp1 = _g;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(75)
				int tmp2 = _g1->get_length();		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(75)
				bool tmp3 = (tmp1 < tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(75)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(75)
				if ((tmp4)){
					HX_STACK_LINE(75)
					break;
				}
				HX_STACK_LINE(75)
				int tmp5 = _g;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(75)
				::openfl::display::Stage3D tmp6 = _g1->get(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(75)
				::openfl::display::Stage3D stage3D = tmp6;		HX_STACK_VAR(stage3D,"stage3D");
				HX_STACK_LINE(75)
				++(_g);
				HX_STACK_LINE(77)
				bool tmp7 = (stage3D->context3D != null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(77)
				if ((tmp7)){
					HX_STACK_LINE(79)
					::openfl::_internal::renderer::RenderSession tmp8 = this->renderSession;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(79)
					tmp8->shaderManager->setShader(null());
					HX_STACK_LINE(80)
					::openfl::_internal::renderer::RenderSession tmp9 = this->renderSession;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(80)
					tmp9->blendModeManager->setBlendMode(null());
					HX_STACK_LINE(81)
					break;
				}
			}
		}
	}
return null();
}


Void GLRenderer_obj::render( ::openfl::display::Stage stage){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.GLRenderer","render",0x72dac118,"openfl._internal.renderer.opengl.GLRenderer.render","openfl/_internal/renderer/opengl/GLRenderer.hx",90,0xb2b97130)
		HX_STACK_THIS(this)
		HX_STACK_ARG(stage,"stage")
		HX_STACK_LINE(92)
		::openfl::geom::Matrix displayMatrix = stage->__displayMatrix;		HX_STACK_VAR(displayMatrix,"displayMatrix");
		HX_STACK_LINE(93)
		Float tmp = ((int)0 * displayMatrix->a);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(93)
		Float tmp1 = ((int)0 * displayMatrix->c);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(93)
		Float tmp2 = (tmp + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(93)
		Float tmp3 = displayMatrix->tx;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(93)
		Float tmp4 = (tmp2 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(93)
		int tmp5 = ::Math_obj::round(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(93)
		int offsetX = tmp5;		HX_STACK_VAR(offsetX,"offsetX");
		HX_STACK_LINE(94)
		Float tmp6 = ((int)0 * displayMatrix->b);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(94)
		Float tmp7 = ((int)0 * displayMatrix->d);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(94)
		Float tmp8 = (tmp6 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(94)
		Float tmp9 = displayMatrix->ty;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(94)
		Float tmp10 = (tmp8 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(94)
		int tmp11 = ::Math_obj::round(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(94)
		int offsetY = tmp11;		HX_STACK_VAR(offsetY,"offsetY");
		HX_STACK_LINE(95)
		int tmp12 = this->width;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(95)
		Float tmp13 = displayMatrix->a;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(95)
		Float tmp14 = (tmp12 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(95)
		Float tmp15 = ((int)0 * displayMatrix->c);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(95)
		Float tmp16 = (tmp14 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(95)
		Float tmp17 = displayMatrix->tx;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(95)
		Float tmp18 = (tmp16 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(95)
		int tmp19 = offsetX;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(95)
		Float tmp20 = (tmp18 - tmp19);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(95)
		int tmp21 = ::Math_obj::round(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(95)
		int displayWidth = tmp21;		HX_STACK_VAR(displayWidth,"displayWidth");
		HX_STACK_LINE(96)
		Float tmp22 = ((int)0 * displayMatrix->b);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(96)
		int tmp23 = this->height;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(96)
		Float tmp24 = displayMatrix->d;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(96)
		Float tmp25 = (tmp23 * tmp24);		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(96)
		Float tmp26 = (tmp22 + tmp25);		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(96)
		Float tmp27 = displayMatrix->ty;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(96)
		Float tmp28 = (tmp26 + tmp27);		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(96)
		int tmp29 = offsetY;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(96)
		Float tmp30 = (tmp28 - tmp29);		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(96)
		int tmp31 = ::Math_obj::round(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(96)
		int displayHeight = tmp31;		HX_STACK_VAR(displayHeight,"displayHeight");
		HX_STACK_LINE(98)
		::lime::graphics::opengl::GL_obj::cffi_lime_gl_viewport.call(offsetX,offsetY,displayWidth,displayHeight);
		HX_STACK_LINE(100)
		int tmp32 = stage->window->__width;		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(100)
		this->windowWidth = tmp32;
		HX_STACK_LINE(101)
		int tmp33 = stage->window->__height;		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(101)
		this->windowHeight = tmp33;
		HX_STACK_LINE(103)
		::openfl::_internal::renderer::RenderSession tmp34 = this->renderSession;		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(103)
		stage->__renderGL(tmp34);
		HX_STACK_LINE(105)
		bool tmp35 = (offsetX > (int)0);		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(105)
		bool tmp36 = !(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(105)
		bool tmp37;		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(105)
		if ((tmp36)){
			HX_STACK_LINE(105)
			tmp37 = (offsetY > (int)0);
		}
		else{
			HX_STACK_LINE(105)
			tmp37 = true;
		}
		HX_STACK_LINE(105)
		if ((tmp37)){
			HX_STACK_LINE(107)
			::lime::graphics::opengl::GL_obj::cffi_lime_gl_clear_color.call((int)0,(int)0,(int)0,(int)1);
			HX_STACK_LINE(108)
			::lime::graphics::opengl::GL_obj::cffi_lime_gl_enable.call(this->gl->SCISSOR_TEST);
			HX_STACK_LINE(110)
			bool tmp38 = (offsetX > (int)0);		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(110)
			if ((tmp38)){
				HX_STACK_LINE(112)
				::lime::graphics::opengl::GL_obj::cffi_lime_gl_scissor.call((int)0,(int)0,offsetX,this->windowHeight);
				HX_STACK_LINE(113)
				::lime::graphics::opengl::GL_obj::cffi_lime_gl_clear.call(this->gl->COLOR_BUFFER_BIT);
				HX_STACK_LINE(115)
				::lime::graphics::opengl::GL_obj::cffi_lime_gl_scissor.call((offsetX + displayWidth),(int)0,this->windowWidth,this->windowHeight);
				HX_STACK_LINE(116)
				::lime::graphics::opengl::GL_obj::cffi_lime_gl_clear.call(this->gl->COLOR_BUFFER_BIT);
			}
			HX_STACK_LINE(120)
			bool tmp39 = (offsetY > (int)0);		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(120)
			if ((tmp39)){
				HX_STACK_LINE(122)
				::lime::graphics::opengl::GL_obj::cffi_lime_gl_scissor.call((int)0,(int)0,this->windowWidth,offsetY);
				HX_STACK_LINE(123)
				::lime::graphics::opengl::GL_obj::cffi_lime_gl_clear.call(this->gl->COLOR_BUFFER_BIT);
				HX_STACK_LINE(125)
				::lime::graphics::opengl::GL_obj::cffi_lime_gl_scissor.call((int)0,(offsetY + displayHeight),this->windowWidth,this->windowHeight);
				HX_STACK_LINE(126)
				::lime::graphics::opengl::GL_obj::cffi_lime_gl_clear.call(this->gl->COLOR_BUFFER_BIT);
			}
			HX_STACK_LINE(130)
			::lime::graphics::opengl::GL_obj::cffi_lime_gl_disable.call(this->gl->SCISSOR_TEST);
		}
	}
return null();
}


Void GLRenderer_obj::resize( int width,int height){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.GLRenderer","resize",0x762cafb6,"openfl._internal.renderer.opengl.GLRenderer.resize","openfl/_internal/renderer/opengl/GLRenderer.hx",137,0xb2b97130)
		HX_STACK_THIS(this)
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_LINE(139)
		int tmp = width;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(139)
		int tmp1 = height;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(139)
		this->super::resize(tmp,tmp1);
		HX_STACK_LINE(141)
		int tmp2 = width;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(141)
		int tmp3 = height;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(141)
		::lime::utils::ArrayBufferView tmp4 = ::lime::math::_Matrix4::Matrix4_Impl__obj::createOrtho((int)0,tmp2,tmp3,(int)0,(int)-1000,(int)1000);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(141)
		this->projection = tmp4;
	}
return null();
}



GLRenderer_obj::GLRenderer_obj()
{
}

void GLRenderer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GLRenderer);
	HX_MARK_MEMBER_NAME(projection,"projection");
	HX_MARK_MEMBER_NAME(gl,"gl");
	HX_MARK_MEMBER_NAME(matrix,"matrix");
	HX_MARK_MEMBER_NAME(windowHeight,"windowHeight");
	HX_MARK_MEMBER_NAME(windowWidth,"windowWidth");
	::openfl::_internal::renderer::AbstractRenderer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void GLRenderer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(projection,"projection");
	HX_VISIT_MEMBER_NAME(gl,"gl");
	HX_VISIT_MEMBER_NAME(matrix,"matrix");
	HX_VISIT_MEMBER_NAME(windowHeight,"windowHeight");
	HX_VISIT_MEMBER_NAME(windowWidth,"windowWidth");
	::openfl::_internal::renderer::AbstractRenderer_obj::__Visit(HX_VISIT_ARG);
}

Dynamic GLRenderer_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"gl") ) { return gl; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"matrix") ) { return matrix; }
		if (HX_FIELD_EQ(inName,"render") ) { return render_dyn(); }
		if (HX_FIELD_EQ(inName,"resize") ) { return resize_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getMatrix") ) { return getMatrix_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"projection") ) { return projection; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"windowWidth") ) { return windowWidth; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"windowHeight") ) { return windowHeight; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic GLRenderer_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"gl") ) { gl=inValue.Cast< ::lime::graphics::GLRenderContext >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"matrix") ) { matrix=inValue.Cast< ::lime::utils::ArrayBufferView >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"projection") ) { projection=inValue.Cast< ::lime::utils::ArrayBufferView >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"windowWidth") ) { windowWidth=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"windowHeight") ) { windowHeight=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void GLRenderer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("projection","\x8f","\x88","\x8b","\xc4"));
	outFields->push(HX_HCSTRING("gl","\x25","\x5a","\x00","\x00"));
	outFields->push(HX_HCSTRING("matrix","\x41","\x36","\xc8","\xbb"));
	outFields->push(HX_HCSTRING("windowHeight","\xf7","\xa3","\xbc","\xc9"));
	outFields->push(HX_HCSTRING("windowWidth","\xf6","\x4b","\x35","\xbb"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::lime::utils::ArrayBufferView*/ ,(int)offsetof(GLRenderer_obj,projection),HX_HCSTRING("projection","\x8f","\x88","\x8b","\xc4")},
	{hx::fsObject /*::lime::graphics::GLRenderContext*/ ,(int)offsetof(GLRenderer_obj,gl),HX_HCSTRING("gl","\x25","\x5a","\x00","\x00")},
	{hx::fsObject /*::lime::utils::ArrayBufferView*/ ,(int)offsetof(GLRenderer_obj,matrix),HX_HCSTRING("matrix","\x41","\x36","\xc8","\xbb")},
	{hx::fsInt,(int)offsetof(GLRenderer_obj,windowHeight),HX_HCSTRING("windowHeight","\xf7","\xa3","\xbc","\xc9")},
	{hx::fsInt,(int)offsetof(GLRenderer_obj,windowWidth),HX_HCSTRING("windowWidth","\xf6","\x4b","\x35","\xbb")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("projection","\x8f","\x88","\x8b","\xc4"),
	HX_HCSTRING("gl","\x25","\x5a","\x00","\x00"),
	HX_HCSTRING("matrix","\x41","\x36","\xc8","\xbb"),
	HX_HCSTRING("windowHeight","\xf7","\xa3","\xbc","\xc9"),
	HX_HCSTRING("windowWidth","\xf6","\x4b","\x35","\xbb"),
	HX_HCSTRING("getMatrix","\x77","\xbf","\x1e","\x38"),
	HX_HCSTRING("init","\x10","\x3b","\xbb","\x45"),
	HX_HCSTRING("render","\x56","\x6b","\x29","\x05"),
	HX_HCSTRING("resize","\xf4","\x59","\x7b","\x08"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GLRenderer_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GLRenderer_obj::__mClass,"__mClass");
};

#endif

hx::Class GLRenderer_obj::__mClass;

void GLRenderer_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.renderer.opengl.GLRenderer","\x6c","\xe6","\x3a","\x9a");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< GLRenderer_obj >;
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
