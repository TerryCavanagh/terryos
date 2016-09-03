#ifndef INCLUDED_openfl__internal_stage3D_AGALConverter
#define INCLUDED_openfl__internal_stage3D_AGALConverter

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS3(openfl,_internal,stage3D,AGALConverter)
HX_DECLARE_CLASS3(openfl,_internal,stage3D,SamplerState)
HX_DECLARE_CLASS4(openfl,_internal,stage3D,_AGALConverter,ProgramType)
HX_DECLARE_CLASS2(openfl,utils,ByteArrayData)
HX_DECLARE_CLASS2(openfl,utils,IDataInput)
HX_DECLARE_CLASS2(openfl,utils,IDataOutput)
namespace openfl{
namespace _internal{
namespace stage3D{


class HXCPP_CLASS_ATTRIBUTES  AGALConverter_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef AGALConverter_obj OBJ_;
		AGALConverter_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="openfl._internal.stage3D.AGALConverter")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< AGALConverter_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~AGALConverter_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("AGALConverter","\x8f","\xef","\x1a","\x42"); }

		static ::String PrefixFromType( int t,::openfl::_internal::stage3D::_AGALConverter::ProgramType pt);
		static Dynamic PrefixFromType_dyn();

		static cpp::Int64Struct ReadUInt64( ::openfl::utils::ByteArrayData ba);
		static Dynamic ReadUInt64_dyn();

		static ::String ConvertToGLSL( ::openfl::utils::ByteArrayData agal,Array< ::Dynamic > outSamplers);
		static Dynamic ConvertToGLSL_dyn();

};

} // end namespace openfl
} // end namespace _internal
} // end namespace stage3D

#endif /* INCLUDED_openfl__internal_stage3D_AGALConverter */ 
