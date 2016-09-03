#ifndef INCLUDED_openfl_display_ShaderInput
#define INCLUDED_openfl_display_ShaderInput

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(openfl,display,ShaderInput)
namespace openfl{
namespace display{


class HXCPP_CLASS_ATTRIBUTES  ShaderInput_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ShaderInput_obj OBJ_;
		ShaderInput_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="openfl.display.ShaderInput")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< ShaderInput_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ShaderInput_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		HX_DECLARE_IMPLEMENT_DYNAMIC;
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("ShaderInput","\x85","\x06","\x7d","\x79"); }

		int channels;
		int height;
		Dynamic index;
		Dynamic input;
		int width;
};

} // end namespace openfl
} // end namespace display

#endif /* INCLUDED_openfl_display_ShaderInput */ 
