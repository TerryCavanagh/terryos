#ifndef INCLUDED_openfl__internal_renderer_AbstractBlendModeManager
#define INCLUDED_openfl__internal_renderer_AbstractBlendModeManager

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(openfl,_internal,renderer,AbstractBlendModeManager)
namespace openfl{
namespace _internal{
namespace renderer{


class HXCPP_CLASS_ATTRIBUTES  AbstractBlendModeManager_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef AbstractBlendModeManager_obj OBJ_;
		AbstractBlendModeManager_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="openfl._internal.renderer.AbstractBlendModeManager")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< AbstractBlendModeManager_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~AbstractBlendModeManager_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("AbstractBlendModeManager","\x9b","\xc5","\x89","\x9b"); }

		virtual Void setBlendMode( Dynamic blendMode);
		Dynamic setBlendMode_dyn();

};

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer

#endif /* INCLUDED_openfl__internal_renderer_AbstractBlendModeManager */ 
