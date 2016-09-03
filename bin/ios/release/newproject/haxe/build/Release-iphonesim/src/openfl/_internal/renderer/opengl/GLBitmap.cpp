#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
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
#ifndef INCLUDED_openfl__internal_renderer_opengl_GLBitmap
#include <openfl/_internal/renderer/opengl/GLBitmap.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_GLRenderer
#include <openfl/_internal/renderer/opengl/GLRenderer.h>
#endif
#ifndef INCLUDED_openfl_display_Bitmap
#include <openfl/display/Bitmap.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
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
#ifndef INCLUDED_openfl_display_ShaderData
#include <openfl/display/ShaderData.h>
#endif
#ifndef INCLUDED_openfl_display_Stage
#include <openfl/display/Stage.h>
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
namespace openfl{
namespace _internal{
namespace renderer{
namespace opengl{

Void GLBitmap_obj::__construct()
{
	return null();
}

//GLBitmap_obj::~GLBitmap_obj() { }

Dynamic GLBitmap_obj::__CreateEmpty() { return  new GLBitmap_obj; }
hx::ObjectPtr< GLBitmap_obj > GLBitmap_obj::__new()
{  hx::ObjectPtr< GLBitmap_obj > _result_ = new GLBitmap_obj();
	_result_->__construct();
	return _result_;}

Dynamic GLBitmap_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< GLBitmap_obj > _result_ = new GLBitmap_obj();
	_result_->__construct();
	return _result_;}

Void GLBitmap_obj::render( ::openfl::display::Bitmap bitmap,::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.GLBitmap","render",0x8d0c282c,"openfl._internal.renderer.opengl.GLBitmap.render","openfl/_internal/renderer/opengl/GLBitmap.hx",17,0x02850ac4)
		HX_STACK_ARG(bitmap,"bitmap")
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_LINE(19)
		bool tmp = bitmap->__renderable;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(19)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(19)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(19)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(19)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(19)
		if ((tmp3)){
			HX_STACK_LINE(19)
			tmp4 = (bitmap->__worldAlpha <= (int)0);
		}
		else{
			HX_STACK_LINE(19)
			tmp4 = true;
		}
		HX_STACK_LINE(19)
		if ((tmp4)){
			HX_STACK_LINE(19)
			return null();
		}
		HX_STACK_LINE(21)
		::lime::graphics::GLRenderContext gl = renderSession->gl;		HX_STACK_VAR(gl,"gl");
		HX_STACK_LINE(23)
		bool tmp5 = (bitmap->bitmapData != null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(23)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(23)
		if ((tmp5)){
			HX_STACK_LINE(23)
			tmp6 = bitmap->bitmapData->__isValid;
		}
		else{
			HX_STACK_LINE(23)
			tmp6 = false;
		}
		HX_STACK_LINE(23)
		if ((tmp6)){
			HX_STACK_LINE(25)
			::openfl::display::Shader shader;		HX_STACK_VAR(shader,"shader");
			HX_STACK_LINE(27)
			bool tmp7 = (bitmap->__filters != null());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(27)
			bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(27)
			if ((tmp7)){
				HX_STACK_LINE(27)
				::openfl::filters::BitmapFilter tmp9 = bitmap->__filters->__get((int)0).StaticCast< ::openfl::filters::BitmapFilter >();		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(27)
				::openfl::filters::BitmapFilter tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(27)
				::openfl::filters::BitmapFilter tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(27)
				tmp8 = ::Std_obj::is(tmp11,hx::ClassOf< ::openfl::filters::ShaderFilter >());
			}
			else{
				HX_STACK_LINE(27)
				tmp8 = false;
			}
			HX_STACK_LINE(27)
			if ((tmp8)){
				HX_STACK_LINE(29)
				::openfl::filters::BitmapFilter tmp9 = bitmap->__filters->__get((int)0).StaticCast< ::openfl::filters::BitmapFilter >();		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(29)
				::openfl::filters::ShaderFilter tmp10;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(29)
				tmp10 = hx::TCast< ::openfl::filters::ShaderFilter >::cast(tmp9);
				HX_STACK_LINE(29)
				shader = tmp10->shader;
			}
			else{
				HX_STACK_LINE(33)
				::openfl::display::Shader tmp9 = renderSession->shaderManager->defaultShader;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(33)
				shader = tmp9;
			}
			HX_STACK_LINE(37)
			Dynamic tmp9 = bitmap->get_blendMode();		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(37)
			renderSession->blendModeManager->setBlendMode(tmp9);
			HX_STACK_LINE(38)
			::openfl::display::Shader tmp10 = shader;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(38)
			renderSession->shaderManager->setShader(tmp10);
			HX_STACK_LINE(39)
			::openfl::display::Bitmap tmp11 = bitmap;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(39)
			renderSession->maskManager->pushObject(tmp11,null());
			HX_STACK_LINE(41)
			::openfl::_internal::renderer::opengl::GLRenderer renderer = ((::openfl::_internal::renderer::opengl::GLRenderer)(renderSession->renderer));		HX_STACK_VAR(renderer,"renderer");
			HX_STACK_LINE(43)
			{
				HX_STACK_LINE(43)
				int index = shader->data->__Field(HX_HCSTRING("aAlpha","\x3d","\x17","\x62","\x7d"), hx::paccDynamic )->__Field(HX_HCSTRING("index","\x12","\x9b","\x14","\xbe"), hx::paccDynamic );		HX_STACK_VAR(index,"index");
				HX_STACK_LINE(43)
				::lime::graphics::opengl::GL_obj::cffi_lime_gl_enable_vertex_attrib_array.call(index);
			}
			HX_STACK_LINE(44)
			{
				HX_STACK_LINE(44)
				int location = shader->data->__Field(HX_HCSTRING("uMatrix","\x96","\xf0","\xab","\xf1"), hx::paccDynamic )->__Field(HX_HCSTRING("index","\x12","\x9b","\x14","\xbe"), hx::paccDynamic );		HX_STACK_VAR(location,"location");
				HX_STACK_LINE(44)
				::openfl::geom::Matrix tmp12 = bitmap->__worldTransform;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(44)
				::lime::utils::ArrayBufferView tmp13 = renderer->getMatrix(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(44)
				::lime::utils::ArrayBufferView v = tmp13;		HX_STACK_VAR(v,"v");
				HX_STACK_LINE(44)
				::lime::graphics::opengl::GL_obj::cffi_lime_gl_uniform_matrix.call(location,false,hx::DynamicPtr(v->buffer),(int)4);
			}
			HX_STACK_LINE(46)
			{
				HX_STACK_LINE(46)
				::lime::graphics::GLRenderContext tmp12 = gl;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(46)
				::lime::graphics::opengl::GLTexture tmp13 = bitmap->bitmapData->getTexture(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(46)
				::lime::graphics::opengl::GLTexture texture = tmp13;		HX_STACK_VAR(texture,"texture");
				HX_STACK_LINE(46)
				::lime::graphics::opengl::GL_obj::cffi_lime_gl_bind_texture.call(gl->TEXTURE_2D,hx::DynamicPtr((  (((texture == null()))) ? Dynamic(null()) : Dynamic(texture->id) )));
			}
			HX_STACK_LINE(48)
			bool tmp12 = bitmap->smoothing;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(48)
			bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(48)
			bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(48)
			if ((tmp13)){
				HX_STACK_LINE(48)
				bool tmp15 = (bitmap->stage != null());		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(48)
				bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(48)
				bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(48)
				if ((tmp17)){
					HX_STACK_LINE(48)
					::openfl::geom::Matrix tmp18 = bitmap->stage->__displayMatrix;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(48)
					::openfl::geom::Matrix tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(48)
					::openfl::geom::Matrix tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(48)
					Float tmp21 = tmp20->a;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(48)
					bool tmp22 = (tmp21 != (int)1);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(48)
					bool tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(48)
					bool tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(48)
					bool tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(48)
					bool tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(48)
					bool tmp27 = !(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(48)
					bool tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(48)
					bool tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(48)
					bool tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(48)
					bool tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(48)
					if ((tmp31)){
						HX_STACK_LINE(48)
						::openfl::geom::Matrix tmp32 = bitmap->stage->__displayMatrix;		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(48)
						::openfl::geom::Matrix tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(48)
						::openfl::geom::Matrix tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(48)
						::openfl::geom::Matrix tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(48)
						Float tmp36 = tmp35->d;		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(48)
						tmp14 = (tmp36 != (int)1);
					}
					else{
						HX_STACK_LINE(48)
						tmp14 = true;
					}
				}
				else{
					HX_STACK_LINE(48)
					tmp14 = false;
				}
			}
			else{
				HX_STACK_LINE(48)
				tmp14 = true;
			}
			HX_STACK_LINE(48)
			if ((tmp14)){
				HX_STACK_LINE(50)
				::lime::graphics::opengl::GL_obj::cffi_lime_gl_tex_parameteri.call(gl->TEXTURE_2D,gl->TEXTURE_MAG_FILTER,gl->LINEAR);
				HX_STACK_LINE(51)
				::lime::graphics::opengl::GL_obj::cffi_lime_gl_tex_parameteri.call(gl->TEXTURE_2D,gl->TEXTURE_MIN_FILTER,gl->LINEAR);
			}
			else{
				HX_STACK_LINE(55)
				::lime::graphics::opengl::GL_obj::cffi_lime_gl_tex_parameteri.call(gl->TEXTURE_2D,gl->TEXTURE_MAG_FILTER,gl->NEAREST);
				HX_STACK_LINE(56)
				::lime::graphics::opengl::GL_obj::cffi_lime_gl_tex_parameteri.call(gl->TEXTURE_2D,gl->TEXTURE_MIN_FILTER,gl->NEAREST);
			}
			HX_STACK_LINE(60)
			{
				HX_STACK_LINE(60)
				::lime::graphics::GLRenderContext tmp15 = gl;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(60)
				Float tmp16 = bitmap->__worldAlpha;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(60)
				::lime::graphics::opengl::GLBuffer tmp17 = bitmap->bitmapData->getBuffer(tmp15,tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(60)
				::lime::graphics::opengl::GLBuffer buffer = tmp17;		HX_STACK_VAR(buffer,"buffer");
				HX_STACK_LINE(60)
				::lime::graphics::opengl::GL_obj::cffi_lime_gl_bind_buffer.call(gl->ARRAY_BUFFER,hx::DynamicPtr((  (((buffer == null()))) ? Dynamic(null()) : Dynamic(buffer->id) )));
			}
			HX_STACK_LINE(61)
			{
				HX_STACK_LINE(61)
				int indx = shader->data->__Field(HX_HCSTRING("aPosition","\x2a","\x26","\x25","\x92"), hx::paccDynamic )->__Field(HX_HCSTRING("index","\x12","\x9b","\x14","\xbe"), hx::paccDynamic );		HX_STACK_VAR(indx,"indx");
				HX_STACK_LINE(61)
				::lime::graphics::opengl::GL_obj::cffi_lime_gl_vertex_attrib_pointer.call(indx,(int)3,gl->FLOAT,false,(int)24,(int)0);
			}
			HX_STACK_LINE(62)
			{
				HX_STACK_LINE(62)
				int indx = shader->data->__Field(HX_HCSTRING("aTexCoord","\xcf","\x8c","\x5d","\xf2"), hx::paccDynamic )->__Field(HX_HCSTRING("index","\x12","\x9b","\x14","\xbe"), hx::paccDynamic );		HX_STACK_VAR(indx,"indx");
				HX_STACK_LINE(62)
				::lime::graphics::opengl::GL_obj::cffi_lime_gl_vertex_attrib_pointer.call(indx,(int)2,gl->FLOAT,false,(int)24,(int)12);
			}
			HX_STACK_LINE(63)
			{
				HX_STACK_LINE(63)
				int indx = shader->data->__Field(HX_HCSTRING("aAlpha","\x3d","\x17","\x62","\x7d"), hx::paccDynamic )->__Field(HX_HCSTRING("index","\x12","\x9b","\x14","\xbe"), hx::paccDynamic );		HX_STACK_VAR(indx,"indx");
				HX_STACK_LINE(63)
				::lime::graphics::opengl::GL_obj::cffi_lime_gl_vertex_attrib_pointer.call(indx,(int)1,gl->FLOAT,false,(int)24,(int)20);
			}
			HX_STACK_LINE(65)
			::lime::graphics::opengl::GL_obj::cffi_lime_gl_draw_arrays.call(gl->TRIANGLE_STRIP,(int)0,(int)4);
			HX_STACK_LINE(67)
			::openfl::display::Bitmap tmp15 = bitmap;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(67)
			renderSession->maskManager->popObject(tmp15,null());
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GLBitmap_obj,render,(void))


GLBitmap_obj::GLBitmap_obj()
{
}

bool GLBitmap_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
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
	HX_MARK_MEMBER_NAME(GLBitmap_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GLBitmap_obj::__mClass,"__mClass");
};

#endif

hx::Class GLBitmap_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("render","\x56","\x6b","\x29","\x05"),
	::String(null()) };

void GLBitmap_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.renderer.opengl.GLBitmap","\xd8","\x64","\xbd","\x49");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &GLBitmap_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< GLBitmap_obj >;
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
