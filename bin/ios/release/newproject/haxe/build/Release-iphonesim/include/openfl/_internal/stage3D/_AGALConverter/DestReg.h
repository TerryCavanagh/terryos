#ifndef INCLUDED_openfl__internal_stage3D__AGALConverter_DestReg
#define INCLUDED_openfl__internal_stage3D__AGALConverter_DestReg

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(openfl,_internal,stage3D,_AGALConverter,DestReg)
HX_DECLARE_CLASS4(openfl,_internal,stage3D,_AGALConverter,ProgramType)
namespace openfl{
namespace _internal{
namespace stage3D{
namespace _AGALConverter{


class HXCPP_CLASS_ATTRIBUTES  DestReg_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef DestReg_obj OBJ_;
		DestReg_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="openfl._internal.stage3D._AGALConverter.DestReg")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< DestReg_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~DestReg_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("DestReg","\xf2","\x03","\xbf","\xf1"); }

		static ::openfl::_internal::stage3D::_AGALConverter::DestReg Parse( int v,::openfl::_internal::stage3D::_AGALConverter::ProgramType programType);
		static Dynamic Parse_dyn();

		::openfl::_internal::stage3D::_AGALConverter::ProgramType programType;
		int type;
		int mask;
		int n;
		virtual ::String GetWriteMask( );
		Dynamic GetWriteMask_dyn();

		virtual ::String ToGLSL( hx::Null< bool >  useMask);
		Dynamic ToGLSL_dyn();

};

} // end namespace openfl
} // end namespace _internal
} // end namespace stage3D
} // end namespace _AGALConverter

#endif /* INCLUDED_openfl__internal_stage3D__AGALConverter_DestReg */ 
