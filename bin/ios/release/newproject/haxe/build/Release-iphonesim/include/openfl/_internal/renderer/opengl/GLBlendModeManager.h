#ifndef INCLUDED_openfl__internal_renderer_opengl_GLBlendModeManager
#define INCLUDED_openfl__internal_renderer_opengl_GLBlendModeManager

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl__internal_renderer_AbstractBlendModeManager
#include <openfl/_internal/renderer/AbstractBlendModeManager.h>
#endif
HX_DECLARE_CLASS2(lime,graphics,GLRenderContext)
HX_DECLARE_CLASS3(openfl,_internal,renderer,AbstractBlendModeManager)
HX_DECLARE_CLASS4(openfl,_internal,renderer,opengl,GLBlendModeManager)
namespace openfl{
namespace _internal{
namespace renderer{
namespace opengl{


class HXCPP_CLASS_ATTRIBUTES  GLBlendModeManager_obj : public ::openfl::_internal::renderer::AbstractBlendModeManager_obj{
	public:
		typedef ::openfl::_internal::renderer::AbstractBlendModeManager_obj super;
		typedef GLBlendModeManager_obj OBJ_;
		GLBlendModeManager_obj();
		Void __construct(::lime::graphics::GLRenderContext gl);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="openfl._internal.renderer.opengl.GLBlendModeManager")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< GLBlendModeManager_obj > __new(::lime::graphics::GLRenderContext gl);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~GLBlendModeManager_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("GLBlendModeManager","\xbe","\x3c","\x01","\xa0"); }

		Dynamic currentBlendMode;
		::lime::graphics::GLRenderContext gl;
		virtual Void setBlendMode( Dynamic blendMode);

};

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace opengl

#endif /* INCLUDED_openfl__internal_renderer_opengl_GLBlendModeManager */ 
