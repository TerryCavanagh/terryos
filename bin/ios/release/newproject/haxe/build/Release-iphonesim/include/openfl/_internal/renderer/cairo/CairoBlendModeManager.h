#ifndef INCLUDED_openfl__internal_renderer_cairo_CairoBlendModeManager
#define INCLUDED_openfl__internal_renderer_cairo_CairoBlendModeManager

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl__internal_renderer_AbstractBlendModeManager
#include <openfl/_internal/renderer/AbstractBlendModeManager.h>
#endif
HX_DECLARE_CLASS3(openfl,_internal,renderer,AbstractBlendModeManager)
HX_DECLARE_CLASS3(openfl,_internal,renderer,RenderSession)
HX_DECLARE_CLASS4(openfl,_internal,renderer,cairo,CairoBlendModeManager)
namespace openfl{
namespace _internal{
namespace renderer{
namespace cairo{


class HXCPP_CLASS_ATTRIBUTES  CairoBlendModeManager_obj : public ::openfl::_internal::renderer::AbstractBlendModeManager_obj{
	public:
		typedef ::openfl::_internal::renderer::AbstractBlendModeManager_obj super;
		typedef CairoBlendModeManager_obj OBJ_;
		CairoBlendModeManager_obj();
		Void __construct(::openfl::_internal::renderer::RenderSession renderSession);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="openfl._internal.renderer.cairo.CairoBlendModeManager")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< CairoBlendModeManager_obj > __new(::openfl::_internal::renderer::RenderSession renderSession);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~CairoBlendModeManager_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("CairoBlendModeManager","\x01","\x95","\x7b","\x7c"); }

		Dynamic currentBlendMode;
		::openfl::_internal::renderer::RenderSession renderSession;
		virtual Void setBlendMode( Dynamic blendMode);

};

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace cairo

#endif /* INCLUDED_openfl__internal_renderer_cairo_CairoBlendModeManager */ 
