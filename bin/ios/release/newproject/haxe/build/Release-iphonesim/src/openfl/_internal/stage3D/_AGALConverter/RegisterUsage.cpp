#include <hxcpp.h>

#ifndef INCLUDED_openfl__internal_stage3D__AGALConverter_RegisterUsage
#include <openfl/_internal/stage3D/_AGALConverter/RegisterUsage.h>
#endif
namespace openfl{
namespace _internal{
namespace stage3D{
namespace _AGALConverter{

::openfl::_internal::stage3D::_AGALConverter::RegisterUsage RegisterUsage_obj::Matrix44;

::openfl::_internal::stage3D::_AGALConverter::RegisterUsage RegisterUsage_obj::Sampler2D;

::openfl::_internal::stage3D::_AGALConverter::RegisterUsage RegisterUsage_obj::Sampler2DAlpha;

::openfl::_internal::stage3D::_AGALConverter::RegisterUsage RegisterUsage_obj::SamplerCube;

::openfl::_internal::stage3D::_AGALConverter::RegisterUsage RegisterUsage_obj::Unused;

::openfl::_internal::stage3D::_AGALConverter::RegisterUsage RegisterUsage_obj::Vector4;

::openfl::_internal::stage3D::_AGALConverter::RegisterUsage RegisterUsage_obj::Vector4Array;

HX_DEFINE_CREATE_ENUM(RegisterUsage_obj)

int RegisterUsage_obj::__FindIndex(::String inName)
{
	if (inName==HX_HCSTRING("Matrix44","\x21","\xf2","\xa4","\x40")) return 2;
	if (inName==HX_HCSTRING("Sampler2D","\xba","\x22","\x5e","\xff")) return 3;
	if (inName==HX_HCSTRING("Sampler2DAlpha","\x44","\xd2","\x4b","\xc1")) return 4;
	if (inName==HX_HCSTRING("SamplerCube","\xfd","\xe9","\x99","\x38")) return 5;
	if (inName==HX_HCSTRING("Unused","\x36","\x0d","\x17","\xa0")) return 0;
	if (inName==HX_HCSTRING("Vector4","\xf1","\x21","\xee","\xa7")) return 1;
	if (inName==HX_HCSTRING("Vector4Array","\xe8","\x11","\xf9","\xb4")) return 6;
	return super::__FindIndex(inName);
}

int RegisterUsage_obj::__FindArgCount(::String inName)
{
	if (inName==HX_HCSTRING("Matrix44","\x21","\xf2","\xa4","\x40")) return 0;
	if (inName==HX_HCSTRING("Sampler2D","\xba","\x22","\x5e","\xff")) return 0;
	if (inName==HX_HCSTRING("Sampler2DAlpha","\x44","\xd2","\x4b","\xc1")) return 0;
	if (inName==HX_HCSTRING("SamplerCube","\xfd","\xe9","\x99","\x38")) return 0;
	if (inName==HX_HCSTRING("Unused","\x36","\x0d","\x17","\xa0")) return 0;
	if (inName==HX_HCSTRING("Vector4","\xf1","\x21","\xee","\xa7")) return 0;
	if (inName==HX_HCSTRING("Vector4Array","\xe8","\x11","\xf9","\xb4")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic RegisterUsage_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_HCSTRING("Matrix44","\x21","\xf2","\xa4","\x40")) return Matrix44;
	if (inName==HX_HCSTRING("Sampler2D","\xba","\x22","\x5e","\xff")) return Sampler2D;
	if (inName==HX_HCSTRING("Sampler2DAlpha","\x44","\xd2","\x4b","\xc1")) return Sampler2DAlpha;
	if (inName==HX_HCSTRING("SamplerCube","\xfd","\xe9","\x99","\x38")) return SamplerCube;
	if (inName==HX_HCSTRING("Unused","\x36","\x0d","\x17","\xa0")) return Unused;
	if (inName==HX_HCSTRING("Vector4","\xf1","\x21","\xee","\xa7")) return Vector4;
	if (inName==HX_HCSTRING("Vector4Array","\xe8","\x11","\xf9","\xb4")) return Vector4Array;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_HCSTRING("Unused","\x36","\x0d","\x17","\xa0"),
	HX_HCSTRING("Vector4","\xf1","\x21","\xee","\xa7"),
	HX_HCSTRING("Matrix44","\x21","\xf2","\xa4","\x40"),
	HX_HCSTRING("Sampler2D","\xba","\x22","\x5e","\xff"),
	HX_HCSTRING("Sampler2DAlpha","\x44","\xd2","\x4b","\xc1"),
	HX_HCSTRING("SamplerCube","\xfd","\xe9","\x99","\x38"),
	HX_HCSTRING("Vector4Array","\xe8","\x11","\xf9","\xb4"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(RegisterUsage_obj::Matrix44,"Matrix44");
	HX_MARK_MEMBER_NAME(RegisterUsage_obj::Sampler2D,"Sampler2D");
	HX_MARK_MEMBER_NAME(RegisterUsage_obj::Sampler2DAlpha,"Sampler2DAlpha");
	HX_MARK_MEMBER_NAME(RegisterUsage_obj::SamplerCube,"SamplerCube");
	HX_MARK_MEMBER_NAME(RegisterUsage_obj::Unused,"Unused");
	HX_MARK_MEMBER_NAME(RegisterUsage_obj::Vector4,"Vector4");
	HX_MARK_MEMBER_NAME(RegisterUsage_obj::Vector4Array,"Vector4Array");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(RegisterUsage_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(RegisterUsage_obj::Matrix44,"Matrix44");
	HX_VISIT_MEMBER_NAME(RegisterUsage_obj::Sampler2D,"Sampler2D");
	HX_VISIT_MEMBER_NAME(RegisterUsage_obj::Sampler2DAlpha,"Sampler2DAlpha");
	HX_VISIT_MEMBER_NAME(RegisterUsage_obj::SamplerCube,"SamplerCube");
	HX_VISIT_MEMBER_NAME(RegisterUsage_obj::Unused,"Unused");
	HX_VISIT_MEMBER_NAME(RegisterUsage_obj::Vector4,"Vector4");
	HX_VISIT_MEMBER_NAME(RegisterUsage_obj::Vector4Array,"Vector4Array");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
hx::Class RegisterUsage_obj::__mClass;

Dynamic __Create_RegisterUsage_obj() { return new RegisterUsage_obj; }

void RegisterUsage_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_HCSTRING("openfl._internal.stage3D._AGALConverter.RegisterUsage","\x8f","\x93","\xf5","\x03"), hx::TCanCast< RegisterUsage_obj >,sStaticFields,sMemberFields,
	&__Create_RegisterUsage_obj, &__Create,
	&super::__SGetClass(), &CreateRegisterUsage_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void RegisterUsage_obj::__boot()
{
hx::Static(Matrix44) = hx::CreateEnum< RegisterUsage_obj >(HX_HCSTRING("Matrix44","\x21","\xf2","\xa4","\x40"),2);
hx::Static(Sampler2D) = hx::CreateEnum< RegisterUsage_obj >(HX_HCSTRING("Sampler2D","\xba","\x22","\x5e","\xff"),3);
hx::Static(Sampler2DAlpha) = hx::CreateEnum< RegisterUsage_obj >(HX_HCSTRING("Sampler2DAlpha","\x44","\xd2","\x4b","\xc1"),4);
hx::Static(SamplerCube) = hx::CreateEnum< RegisterUsage_obj >(HX_HCSTRING("SamplerCube","\xfd","\xe9","\x99","\x38"),5);
hx::Static(Unused) = hx::CreateEnum< RegisterUsage_obj >(HX_HCSTRING("Unused","\x36","\x0d","\x17","\xa0"),0);
hx::Static(Vector4) = hx::CreateEnum< RegisterUsage_obj >(HX_HCSTRING("Vector4","\xf1","\x21","\xee","\xa7"),1);
hx::Static(Vector4Array) = hx::CreateEnum< RegisterUsage_obj >(HX_HCSTRING("Vector4Array","\xe8","\x11","\xf9","\xb4"),6);
}


} // end namespace openfl
} // end namespace _internal
} // end namespace stage3D
} // end namespace _AGALConverter
