#ifndef INCLUDED_openfl__internal_stage3D__AGALConverter_SourceReg
#define INCLUDED_openfl__internal_stage3D__AGALConverter_SourceReg

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(openfl,_internal,stage3D,_AGALConverter,ProgramType)
HX_DECLARE_CLASS4(openfl,_internal,stage3D,_AGALConverter,SourceReg)
namespace openfl{
namespace _internal{
namespace stage3D{
namespace _AGALConverter{


class HXCPP_CLASS_ATTRIBUTES  SourceReg_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef SourceReg_obj OBJ_;
		SourceReg_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="openfl._internal.stage3D._AGALConverter.SourceReg")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< SourceReg_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~SourceReg_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("SourceReg","\x19","\x7b","\xcf","\x0a"); }

		static ::openfl::_internal::stage3D::_AGALConverter::SourceReg Parse( cpp::Int64Struct v,::openfl::_internal::stage3D::_AGALConverter::ProgramType programType,int sourceMask);
		static Dynamic Parse_dyn();

		::openfl::_internal::stage3D::_AGALConverter::ProgramType programType;
		int d;
		int q;
		int itype;
		int type;
		int s;
		int o;
		int n;
		int sourceMask;
		virtual ::String ToGLSL( hx::Null< bool >  emitSwizzle,hx::Null< int >  offset);
		Dynamic ToGLSL_dyn();

};

} // end namespace openfl
} // end namespace _internal
} // end namespace stage3D
} // end namespace _AGALConverter

#endif /* INCLUDED_openfl__internal_stage3D__AGALConverter_SourceReg */ 
