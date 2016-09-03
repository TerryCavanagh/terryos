#include <hxcpp.h>

#ifndef INCLUDED_openfl__internal_stage3D__AGALConverter_ProgramType
#include <openfl/_internal/stage3D/_AGALConverter/ProgramType.h>
#endif
namespace openfl{
namespace _internal{
namespace stage3D{
namespace _AGALConverter{

::openfl::_internal::stage3D::_AGALConverter::ProgramType ProgramType_obj::Fragment;

::openfl::_internal::stage3D::_AGALConverter::ProgramType ProgramType_obj::Vertex;

HX_DEFINE_CREATE_ENUM(ProgramType_obj)

int ProgramType_obj::__FindIndex(::String inName)
{
	if (inName==HX_HCSTRING("Fragment","\xf0","\x1b","\x97","\x87")) return 1;
	if (inName==HX_HCSTRING("Vertex","\x84","\x4f","\xdc","\xd5")) return 0;
	return super::__FindIndex(inName);
}

int ProgramType_obj::__FindArgCount(::String inName)
{
	if (inName==HX_HCSTRING("Fragment","\xf0","\x1b","\x97","\x87")) return 0;
	if (inName==HX_HCSTRING("Vertex","\x84","\x4f","\xdc","\xd5")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic ProgramType_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_HCSTRING("Fragment","\xf0","\x1b","\x97","\x87")) return Fragment;
	if (inName==HX_HCSTRING("Vertex","\x84","\x4f","\xdc","\xd5")) return Vertex;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_HCSTRING("Vertex","\x84","\x4f","\xdc","\xd5"),
	HX_HCSTRING("Fragment","\xf0","\x1b","\x97","\x87"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ProgramType_obj::Fragment,"Fragment");
	HX_MARK_MEMBER_NAME(ProgramType_obj::Vertex,"Vertex");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ProgramType_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ProgramType_obj::Fragment,"Fragment");
	HX_VISIT_MEMBER_NAME(ProgramType_obj::Vertex,"Vertex");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
hx::Class ProgramType_obj::__mClass;

Dynamic __Create_ProgramType_obj() { return new ProgramType_obj; }

void ProgramType_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_HCSTRING("openfl._internal.stage3D._AGALConverter.ProgramType","\xef","\x28","\x77","\x1f"), hx::TCanCast< ProgramType_obj >,sStaticFields,sMemberFields,
	&__Create_ProgramType_obj, &__Create,
	&super::__SGetClass(), &CreateProgramType_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void ProgramType_obj::__boot()
{
hx::Static(Fragment) = hx::CreateEnum< ProgramType_obj >(HX_HCSTRING("Fragment","\xf0","\x1b","\x97","\x87"),1);
hx::Static(Vertex) = hx::CreateEnum< ProgramType_obj >(HX_HCSTRING("Vertex","\x84","\x4f","\xdc","\xd5"),0);
}


} // end namespace openfl
} // end namespace _internal
} // end namespace stage3D
} // end namespace _AGALConverter
