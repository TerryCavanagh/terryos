#ifndef INCLUDED_openfl_filters_ShaderFilter
#define INCLUDED_openfl_filters_ShaderFilter

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_filters_BitmapFilter
#include <openfl/filters/BitmapFilter.h>
#endif
HX_DECLARE_CLASS2(openfl,display,Shader)
HX_DECLARE_CLASS2(openfl,filters,BitmapFilter)
HX_DECLARE_CLASS2(openfl,filters,ShaderFilter)
namespace openfl{
namespace filters{


class HXCPP_CLASS_ATTRIBUTES  ShaderFilter_obj : public ::openfl::filters::BitmapFilter_obj{
	public:
		typedef ::openfl::filters::BitmapFilter_obj super;
		typedef ShaderFilter_obj OBJ_;
		ShaderFilter_obj();
		Void __construct(::openfl::display::Shader shader);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="openfl.filters.ShaderFilter")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< ShaderFilter_obj > __new(::openfl::display::Shader shader);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ShaderFilter_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("ShaderFilter","\xdd","\x08","\x30","\xbd"); }

		int bottomExtension;
		int leftExtension;
		int rightExtension;
		::openfl::display::Shader shader;
		int topExtension;
		virtual ::openfl::filters::BitmapFilter clone( );

};

} // end namespace openfl
} // end namespace filters

#endif /* INCLUDED_openfl_filters_ShaderFilter */ 
