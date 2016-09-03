#ifndef INCLUDED_openfl_display_ShaderParameter
#define INCLUDED_openfl_display_ShaderParameter

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(openfl,display,ShaderParameter)
namespace openfl{
namespace display{


class HXCPP_CLASS_ATTRIBUTES  ShaderParameter_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ShaderParameter_obj OBJ_;
		ShaderParameter_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="openfl.display.ShaderParameter")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< ShaderParameter_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ShaderParameter_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		HX_DECLARE_IMPLEMENT_DYNAMIC;
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("ShaderParameter","\xa4","\xd1","\x21","\xe4"); }

		Dynamic index;
		Dynamic type;
		cpp::ArrayBase value;
};

} // end namespace openfl
} // end namespace display

#endif /* INCLUDED_openfl_display_ShaderParameter */ 
