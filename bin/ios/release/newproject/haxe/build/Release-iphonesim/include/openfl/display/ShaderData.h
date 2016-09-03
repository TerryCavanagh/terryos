#ifndef INCLUDED_openfl_display_ShaderData
#define INCLUDED_openfl_display_ShaderData

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(openfl,display,ShaderData)
HX_DECLARE_CLASS2(openfl,utils,ByteArrayData)
HX_DECLARE_CLASS2(openfl,utils,IDataInput)
HX_DECLARE_CLASS2(openfl,utils,IDataOutput)
namespace openfl{
namespace display{


class HXCPP_CLASS_ATTRIBUTES  ShaderData_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ShaderData_obj OBJ_;
		ShaderData_obj();
		Void __construct(::openfl::utils::ByteArrayData byteArray);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="openfl.display.ShaderData")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< ShaderData_obj > __new(::openfl::utils::ByteArrayData byteArray);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ShaderData_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		HX_DECLARE_IMPLEMENT_DYNAMIC;
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("ShaderData","\x0f","\x3c","\xad","\x27"); }

};

} // end namespace openfl
} // end namespace display

#endif /* INCLUDED_openfl_display_ShaderData */ 
