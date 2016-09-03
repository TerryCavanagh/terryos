#ifndef INCLUDED_openfl__internal_stage3D__AGALConverter_RegisterUsage
#define INCLUDED_openfl__internal_stage3D__AGALConverter_RegisterUsage

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(openfl,_internal,stage3D,_AGALConverter,RegisterUsage)
namespace openfl{
namespace _internal{
namespace stage3D{
namespace _AGALConverter{


class RegisterUsage_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef RegisterUsage_obj OBJ_;

	public:
		RegisterUsage_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_HCSTRING("openfl._internal.stage3D._AGALConverter.RegisterUsage","\x8f","\x93","\xf5","\x03"); }
		::String __ToString() const { return HX_HCSTRING("RegisterUsage.","\xd0","\x3a","\xd9","\xaf") + tag; }

		static ::openfl::_internal::stage3D::_AGALConverter::RegisterUsage Matrix44;
		static inline ::openfl::_internal::stage3D::_AGALConverter::RegisterUsage Matrix44_dyn() { return Matrix44; }
		static ::openfl::_internal::stage3D::_AGALConverter::RegisterUsage Sampler2D;
		static inline ::openfl::_internal::stage3D::_AGALConverter::RegisterUsage Sampler2D_dyn() { return Sampler2D; }
		static ::openfl::_internal::stage3D::_AGALConverter::RegisterUsage Sampler2DAlpha;
		static inline ::openfl::_internal::stage3D::_AGALConverter::RegisterUsage Sampler2DAlpha_dyn() { return Sampler2DAlpha; }
		static ::openfl::_internal::stage3D::_AGALConverter::RegisterUsage SamplerCube;
		static inline ::openfl::_internal::stage3D::_AGALConverter::RegisterUsage SamplerCube_dyn() { return SamplerCube; }
		static ::openfl::_internal::stage3D::_AGALConverter::RegisterUsage Unused;
		static inline ::openfl::_internal::stage3D::_AGALConverter::RegisterUsage Unused_dyn() { return Unused; }
		static ::openfl::_internal::stage3D::_AGALConverter::RegisterUsage Vector4;
		static inline ::openfl::_internal::stage3D::_AGALConverter::RegisterUsage Vector4_dyn() { return Vector4; }
		static ::openfl::_internal::stage3D::_AGALConverter::RegisterUsage Vector4Array;
		static inline ::openfl::_internal::stage3D::_AGALConverter::RegisterUsage Vector4Array_dyn() { return Vector4Array; }
};

} // end namespace openfl
} // end namespace _internal
} // end namespace stage3D
} // end namespace _AGALConverter

#endif /* INCLUDED_openfl__internal_stage3D__AGALConverter_RegisterUsage */ 
