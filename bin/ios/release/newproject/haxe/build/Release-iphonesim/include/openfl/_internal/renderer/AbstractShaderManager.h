#ifndef INCLUDED_openfl__internal_renderer_AbstractShaderManager
#define INCLUDED_openfl__internal_renderer_AbstractShaderManager

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(openfl,_internal,renderer,AbstractShaderManager)
HX_DECLARE_CLASS2(openfl,display,Shader)
namespace openfl{
namespace _internal{
namespace renderer{


class HXCPP_CLASS_ATTRIBUTES  AbstractShaderManager_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef AbstractShaderManager_obj OBJ_;
		AbstractShaderManager_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="openfl._internal.renderer.AbstractShaderManager")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< AbstractShaderManager_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~AbstractShaderManager_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("AbstractShaderManager","\x66","\xb3","\x32","\xde"); }

		::openfl::display::Shader defaultShader;
		virtual Void setShader( ::openfl::display::Shader shader);
		Dynamic setShader_dyn();

};

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer

#endif /* INCLUDED_openfl__internal_renderer_AbstractShaderManager */ 
