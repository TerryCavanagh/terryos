#ifndef INCLUDED_openfl__internal_stage3D__AGALConverter_RegisterMapEntry
#define INCLUDED_openfl__internal_stage3D__AGALConverter_RegisterMapEntry

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(openfl,_internal,stage3D,_AGALConverter,RegisterMapEntry)
HX_DECLARE_CLASS4(openfl,_internal,stage3D,_AGALConverter,RegisterUsage)
namespace openfl{
namespace _internal{
namespace stage3D{
namespace _AGALConverter{


class HXCPP_CLASS_ATTRIBUTES  RegisterMapEntry_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef RegisterMapEntry_obj OBJ_;
		RegisterMapEntry_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="openfl._internal.stage3D._AGALConverter.RegisterMapEntry")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< RegisterMapEntry_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~RegisterMapEntry_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("RegisterMapEntry","\xd9","\xc1","\x86","\x00"); }

		int type;
		int number;
		::String name;
		::openfl::_internal::stage3D::_AGALConverter::RegisterUsage usage;
};

} // end namespace openfl
} // end namespace _internal
} // end namespace stage3D
} // end namespace _AGALConverter

#endif /* INCLUDED_openfl__internal_stage3D__AGALConverter_RegisterMapEntry */ 
