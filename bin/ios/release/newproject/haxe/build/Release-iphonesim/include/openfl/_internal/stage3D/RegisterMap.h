#ifndef INCLUDED_openfl__internal_stage3D_RegisterMap
#define INCLUDED_openfl__internal_stage3D_RegisterMap

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(openfl,_internal,stage3D,RegisterMap)
HX_DECLARE_CLASS4(openfl,_internal,stage3D,_AGALConverter,DestReg)
HX_DECLARE_CLASS4(openfl,_internal,stage3D,_AGALConverter,RegisterMapEntry)
HX_DECLARE_CLASS4(openfl,_internal,stage3D,_AGALConverter,RegisterUsage)
HX_DECLARE_CLASS4(openfl,_internal,stage3D,_AGALConverter,SamplerReg)
HX_DECLARE_CLASS4(openfl,_internal,stage3D,_AGALConverter,SourceReg)
namespace openfl{
namespace _internal{
namespace stage3D{


class HXCPP_CLASS_ATTRIBUTES  RegisterMap_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef RegisterMap_obj OBJ_;
		RegisterMap_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="openfl._internal.stage3D.RegisterMap")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< RegisterMap_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~RegisterMap_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("RegisterMap","\xd9","\x93","\x09","\xfc"); }

		virtual ::openfl::_internal::stage3D::_AGALConverter::RegisterUsage GetUsage( int type,::String name,int number);
		Dynamic GetUsage_dyn();

		virtual ::openfl::_internal::stage3D::_AGALConverter::RegisterUsage GetRegisterUsage( ::openfl::_internal::stage3D::_AGALConverter::SourceReg sr);
		Dynamic GetRegisterUsage_dyn();

		virtual Void AddSR( ::openfl::_internal::stage3D::_AGALConverter::SourceReg sr,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage usage,hx::Null< int >  offset);
		Dynamic AddSR_dyn();

		virtual Void AddSaR( ::openfl::_internal::stage3D::_AGALConverter::SamplerReg sr,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage usage);
		Dynamic AddSaR_dyn();

		virtual Void AddDR( ::openfl::_internal::stage3D::_AGALConverter::DestReg dr,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage usage);
		Dynamic AddDR_dyn();

		virtual Void Add( int type,::String name,int number,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage usage);
		Dynamic Add_dyn();

		virtual ::String ToGLSL( bool tempRegsOnly);
		Dynamic ToGLSL_dyn();

		Array< ::Dynamic > mEntries;
};

} // end namespace openfl
} // end namespace _internal
} // end namespace stage3D

#endif /* INCLUDED_openfl__internal_stage3D_RegisterMap */ 
