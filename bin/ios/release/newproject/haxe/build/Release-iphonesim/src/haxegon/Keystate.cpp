#include <hxcpp.h>

#ifndef INCLUDED_haxegon_Keystate
#include <haxegon/Keystate.h>
#endif
namespace haxegon{

::haxegon::Keystate Keystate_obj::forcerelease;

::haxegon::Keystate Keystate_obj::justpressed;

::haxegon::Keystate Keystate_obj::justreleased;

::haxegon::Keystate Keystate_obj::notpressed;

::haxegon::Keystate Keystate_obj::pressed;

HX_DEFINE_CREATE_ENUM(Keystate_obj)

int Keystate_obj::__FindIndex(::String inName)
{
	if (inName==HX_HCSTRING("forcerelease","\x3c","\xb7","\x0f","\x31")) return 4;
	if (inName==HX_HCSTRING("justpressed","\xf6","\xe5","\x55","\x25")) return 3;
	if (inName==HX_HCSTRING("justreleased","\xe9","\x5e","\xa9","\x8c")) return 0;
	if (inName==HX_HCSTRING("notpressed","\xef","\x91","\x6e","\x3b")) return 1;
	if (inName==HX_HCSTRING("pressed","\xa2","\xd2","\xe6","\x39")) return 2;
	return super::__FindIndex(inName);
}

int Keystate_obj::__FindArgCount(::String inName)
{
	if (inName==HX_HCSTRING("forcerelease","\x3c","\xb7","\x0f","\x31")) return 0;
	if (inName==HX_HCSTRING("justpressed","\xf6","\xe5","\x55","\x25")) return 0;
	if (inName==HX_HCSTRING("justreleased","\xe9","\x5e","\xa9","\x8c")) return 0;
	if (inName==HX_HCSTRING("notpressed","\xef","\x91","\x6e","\x3b")) return 0;
	if (inName==HX_HCSTRING("pressed","\xa2","\xd2","\xe6","\x39")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic Keystate_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_HCSTRING("forcerelease","\x3c","\xb7","\x0f","\x31")) return forcerelease;
	if (inName==HX_HCSTRING("justpressed","\xf6","\xe5","\x55","\x25")) return justpressed;
	if (inName==HX_HCSTRING("justreleased","\xe9","\x5e","\xa9","\x8c")) return justreleased;
	if (inName==HX_HCSTRING("notpressed","\xef","\x91","\x6e","\x3b")) return notpressed;
	if (inName==HX_HCSTRING("pressed","\xa2","\xd2","\xe6","\x39")) return pressed;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_HCSTRING("justreleased","\xe9","\x5e","\xa9","\x8c"),
	HX_HCSTRING("notpressed","\xef","\x91","\x6e","\x3b"),
	HX_HCSTRING("pressed","\xa2","\xd2","\xe6","\x39"),
	HX_HCSTRING("justpressed","\xf6","\xe5","\x55","\x25"),
	HX_HCSTRING("forcerelease","\x3c","\xb7","\x0f","\x31"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Keystate_obj::forcerelease,"forcerelease");
	HX_MARK_MEMBER_NAME(Keystate_obj::justpressed,"justpressed");
	HX_MARK_MEMBER_NAME(Keystate_obj::justreleased,"justreleased");
	HX_MARK_MEMBER_NAME(Keystate_obj::notpressed,"notpressed");
	HX_MARK_MEMBER_NAME(Keystate_obj::pressed,"pressed");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Keystate_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Keystate_obj::forcerelease,"forcerelease");
	HX_VISIT_MEMBER_NAME(Keystate_obj::justpressed,"justpressed");
	HX_VISIT_MEMBER_NAME(Keystate_obj::justreleased,"justreleased");
	HX_VISIT_MEMBER_NAME(Keystate_obj::notpressed,"notpressed");
	HX_VISIT_MEMBER_NAME(Keystate_obj::pressed,"pressed");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
hx::Class Keystate_obj::__mClass;

Dynamic __Create_Keystate_obj() { return new Keystate_obj; }

void Keystate_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_HCSTRING("haxegon.Keystate","\x80","\x39","\xe8","\x0f"), hx::TCanCast< Keystate_obj >,sStaticFields,sMemberFields,
	&__Create_Keystate_obj, &__Create,
	&super::__SGetClass(), &CreateKeystate_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void Keystate_obj::__boot()
{
hx::Static(forcerelease) = hx::CreateEnum< Keystate_obj >(HX_HCSTRING("forcerelease","\x3c","\xb7","\x0f","\x31"),4);
hx::Static(justpressed) = hx::CreateEnum< Keystate_obj >(HX_HCSTRING("justpressed","\xf6","\xe5","\x55","\x25"),3);
hx::Static(justreleased) = hx::CreateEnum< Keystate_obj >(HX_HCSTRING("justreleased","\xe9","\x5e","\xa9","\x8c"),0);
hx::Static(notpressed) = hx::CreateEnum< Keystate_obj >(HX_HCSTRING("notpressed","\xef","\x91","\x6e","\x3b"),1);
hx::Static(pressed) = hx::CreateEnum< Keystate_obj >(HX_HCSTRING("pressed","\xa2","\xd2","\xe6","\x39"),2);
}


} // end namespace haxegon
