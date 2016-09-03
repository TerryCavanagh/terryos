#ifndef INCLUDED_openfl__internal_stage3D__AGALConverter_ProgramType
#define INCLUDED_openfl__internal_stage3D__AGALConverter_ProgramType

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(openfl,_internal,stage3D,_AGALConverter,ProgramType)
namespace openfl{
namespace _internal{
namespace stage3D{
namespace _AGALConverter{


class ProgramType_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef ProgramType_obj OBJ_;

	public:
		ProgramType_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_HCSTRING("openfl._internal.stage3D._AGALConverter.ProgramType","\xef","\x28","\x77","\x1f"); }
		::String __ToString() const { return HX_HCSTRING("ProgramType.","\x30","\x43","\x41","\xab") + tag; }

		static ::openfl::_internal::stage3D::_AGALConverter::ProgramType Fragment;
		static inline ::openfl::_internal::stage3D::_AGALConverter::ProgramType Fragment_dyn() { return Fragment; }
		static ::openfl::_internal::stage3D::_AGALConverter::ProgramType Vertex;
		static inline ::openfl::_internal::stage3D::_AGALConverter::ProgramType Vertex_dyn() { return Vertex; }
};

} // end namespace openfl
} // end namespace _internal
} // end namespace stage3D
} // end namespace _AGALConverter

#endif /* INCLUDED_openfl__internal_stage3D__AGALConverter_ProgramType */ 
