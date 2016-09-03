#ifndef INCLUDED_openfl__internal_stage3D__AGALConverter_SamplerReg
#define INCLUDED_openfl__internal_stage3D__AGALConverter_SamplerReg

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(openfl,_internal,stage3D,SamplerState)
HX_DECLARE_CLASS4(openfl,_internal,stage3D,_AGALConverter,ProgramType)
HX_DECLARE_CLASS4(openfl,_internal,stage3D,_AGALConverter,SamplerReg)
namespace openfl{
namespace _internal{
namespace stage3D{
namespace _AGALConverter{


class HXCPP_CLASS_ATTRIBUTES  SamplerReg_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef SamplerReg_obj OBJ_;
		SamplerReg_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="openfl._internal.stage3D._AGALConverter.SamplerReg")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< SamplerReg_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~SamplerReg_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("SamplerReg","\x4c","\xa5","\x18","\x73"); }

		static ::openfl::_internal::stage3D::_AGALConverter::SamplerReg Parse( cpp::Int64Struct v,::openfl::_internal::stage3D::_AGALConverter::ProgramType programType);
		static Dynamic Parse_dyn();

		::openfl::_internal::stage3D::_AGALConverter::ProgramType programType;
		int f;
		int m;
		int w;
		int s;
		int d;
		int t;
		int type;
		int b;
		int n;
		virtual ::String ToGLSL( );
		Dynamic ToGLSL_dyn();

		virtual ::openfl::_internal::stage3D::SamplerState ToSamplerState( );
		Dynamic ToSamplerState_dyn();

};

} // end namespace openfl
} // end namespace _internal
} // end namespace stage3D
} // end namespace _AGALConverter

#endif /* INCLUDED_openfl__internal_stage3D__AGALConverter_SamplerReg */ 
