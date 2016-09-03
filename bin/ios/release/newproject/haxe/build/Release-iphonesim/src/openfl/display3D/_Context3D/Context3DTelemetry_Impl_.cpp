#include <hxcpp.h>

#ifndef INCLUDED_openfl_display3D__Context3D_Context3DTelemetry_Impl_
#include <openfl/display3D/_Context3D/Context3DTelemetry_Impl_.h>
#endif
namespace openfl{
namespace display3D{
namespace _Context3D{

Void Context3DTelemetry_Impl__obj::__construct()
{
	return null();
}

//Context3DTelemetry_Impl__obj::~Context3DTelemetry_Impl__obj() { }

Dynamic Context3DTelemetry_Impl__obj::__CreateEmpty() { return  new Context3DTelemetry_Impl__obj; }
hx::ObjectPtr< Context3DTelemetry_Impl__obj > Context3DTelemetry_Impl__obj::__new()
{  hx::ObjectPtr< Context3DTelemetry_Impl__obj > _result_ = new Context3DTelemetry_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic Context3DTelemetry_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Context3DTelemetry_Impl__obj > _result_ = new Context3DTelemetry_Impl__obj();
	_result_->__construct();
	return _result_;}

int Context3DTelemetry_Impl__obj::DRAW_CALLS;

int Context3DTelemetry_Impl__obj::COUNT_INDEX_BUFFER;

int Context3DTelemetry_Impl__obj::COUNT_VERTEX_BUFFER;

int Context3DTelemetry_Impl__obj::COUNT_TEXTURE;

int Context3DTelemetry_Impl__obj::COUNT_TEXTURE_COMPRESSED;

int Context3DTelemetry_Impl__obj::COUNT_PROGRAM;

int Context3DTelemetry_Impl__obj::MEM_INDEX_BUFFER;

int Context3DTelemetry_Impl__obj::MEM_VERTEX_BUFFER;

int Context3DTelemetry_Impl__obj::MEM_TEXTURE;

int Context3DTelemetry_Impl__obj::MEM_TEXTURE_COMPRESSED;

int Context3DTelemetry_Impl__obj::MEM_PROGRAM;

int Context3DTelemetry_Impl__obj::length;


Context3DTelemetry_Impl__obj::Context3DTelemetry_Impl__obj()
{
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &Context3DTelemetry_Impl__obj::DRAW_CALLS,HX_HCSTRING("DRAW_CALLS","\x3a","\xc0","\xa6","\x07")},
	{hx::fsInt,(void *) &Context3DTelemetry_Impl__obj::COUNT_INDEX_BUFFER,HX_HCSTRING("COUNT_INDEX_BUFFER","\xbd","\x5e","\x75","\x11")},
	{hx::fsInt,(void *) &Context3DTelemetry_Impl__obj::COUNT_VERTEX_BUFFER,HX_HCSTRING("COUNT_VERTEX_BUFFER","\xeb","\x08","\xae","\x48")},
	{hx::fsInt,(void *) &Context3DTelemetry_Impl__obj::COUNT_TEXTURE,HX_HCSTRING("COUNT_TEXTURE","\xeb","\x39","\xa1","\x7b")},
	{hx::fsInt,(void *) &Context3DTelemetry_Impl__obj::COUNT_TEXTURE_COMPRESSED,HX_HCSTRING("COUNT_TEXTURE_COMPRESSED","\x95","\x95","\x8e","\x7c")},
	{hx::fsInt,(void *) &Context3DTelemetry_Impl__obj::COUNT_PROGRAM,HX_HCSTRING("COUNT_PROGRAM","\x94","\xbb","\xb9","\xd0")},
	{hx::fsInt,(void *) &Context3DTelemetry_Impl__obj::MEM_INDEX_BUFFER,HX_HCSTRING("MEM_INDEX_BUFFER","\xb7","\xdd","\xf8","\x0e")},
	{hx::fsInt,(void *) &Context3DTelemetry_Impl__obj::MEM_VERTEX_BUFFER,HX_HCSTRING("MEM_VERTEX_BUFFER","\xb1","\xa4","\x39","\x1e")},
	{hx::fsInt,(void *) &Context3DTelemetry_Impl__obj::MEM_TEXTURE,HX_HCSTRING("MEM_TEXTURE","\x31","\x1d","\x02","\x62")},
	{hx::fsInt,(void *) &Context3DTelemetry_Impl__obj::MEM_TEXTURE_COMPRESSED,HX_HCSTRING("MEM_TEXTURE_COMPRESSED","\x0f","\x8c","\xba","\x2a")},
	{hx::fsInt,(void *) &Context3DTelemetry_Impl__obj::MEM_PROGRAM,HX_HCSTRING("MEM_PROGRAM","\xda","\x9e","\x1a","\xb7")},
	{hx::fsInt,(void *) &Context3DTelemetry_Impl__obj::length,HX_HCSTRING("length","\xe6","\x94","\x07","\x9f")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Context3DTelemetry_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Context3DTelemetry_Impl__obj::DRAW_CALLS,"DRAW_CALLS");
	HX_MARK_MEMBER_NAME(Context3DTelemetry_Impl__obj::COUNT_INDEX_BUFFER,"COUNT_INDEX_BUFFER");
	HX_MARK_MEMBER_NAME(Context3DTelemetry_Impl__obj::COUNT_VERTEX_BUFFER,"COUNT_VERTEX_BUFFER");
	HX_MARK_MEMBER_NAME(Context3DTelemetry_Impl__obj::COUNT_TEXTURE,"COUNT_TEXTURE");
	HX_MARK_MEMBER_NAME(Context3DTelemetry_Impl__obj::COUNT_TEXTURE_COMPRESSED,"COUNT_TEXTURE_COMPRESSED");
	HX_MARK_MEMBER_NAME(Context3DTelemetry_Impl__obj::COUNT_PROGRAM,"COUNT_PROGRAM");
	HX_MARK_MEMBER_NAME(Context3DTelemetry_Impl__obj::MEM_INDEX_BUFFER,"MEM_INDEX_BUFFER");
	HX_MARK_MEMBER_NAME(Context3DTelemetry_Impl__obj::MEM_VERTEX_BUFFER,"MEM_VERTEX_BUFFER");
	HX_MARK_MEMBER_NAME(Context3DTelemetry_Impl__obj::MEM_TEXTURE,"MEM_TEXTURE");
	HX_MARK_MEMBER_NAME(Context3DTelemetry_Impl__obj::MEM_TEXTURE_COMPRESSED,"MEM_TEXTURE_COMPRESSED");
	HX_MARK_MEMBER_NAME(Context3DTelemetry_Impl__obj::MEM_PROGRAM,"MEM_PROGRAM");
	HX_MARK_MEMBER_NAME(Context3DTelemetry_Impl__obj::length,"length");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Context3DTelemetry_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Context3DTelemetry_Impl__obj::DRAW_CALLS,"DRAW_CALLS");
	HX_VISIT_MEMBER_NAME(Context3DTelemetry_Impl__obj::COUNT_INDEX_BUFFER,"COUNT_INDEX_BUFFER");
	HX_VISIT_MEMBER_NAME(Context3DTelemetry_Impl__obj::COUNT_VERTEX_BUFFER,"COUNT_VERTEX_BUFFER");
	HX_VISIT_MEMBER_NAME(Context3DTelemetry_Impl__obj::COUNT_TEXTURE,"COUNT_TEXTURE");
	HX_VISIT_MEMBER_NAME(Context3DTelemetry_Impl__obj::COUNT_TEXTURE_COMPRESSED,"COUNT_TEXTURE_COMPRESSED");
	HX_VISIT_MEMBER_NAME(Context3DTelemetry_Impl__obj::COUNT_PROGRAM,"COUNT_PROGRAM");
	HX_VISIT_MEMBER_NAME(Context3DTelemetry_Impl__obj::MEM_INDEX_BUFFER,"MEM_INDEX_BUFFER");
	HX_VISIT_MEMBER_NAME(Context3DTelemetry_Impl__obj::MEM_VERTEX_BUFFER,"MEM_VERTEX_BUFFER");
	HX_VISIT_MEMBER_NAME(Context3DTelemetry_Impl__obj::MEM_TEXTURE,"MEM_TEXTURE");
	HX_VISIT_MEMBER_NAME(Context3DTelemetry_Impl__obj::MEM_TEXTURE_COMPRESSED,"MEM_TEXTURE_COMPRESSED");
	HX_VISIT_MEMBER_NAME(Context3DTelemetry_Impl__obj::MEM_PROGRAM,"MEM_PROGRAM");
	HX_VISIT_MEMBER_NAME(Context3DTelemetry_Impl__obj::length,"length");
};

#endif

hx::Class Context3DTelemetry_Impl__obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("DRAW_CALLS","\x3a","\xc0","\xa6","\x07"),
	HX_HCSTRING("COUNT_INDEX_BUFFER","\xbd","\x5e","\x75","\x11"),
	HX_HCSTRING("COUNT_VERTEX_BUFFER","\xeb","\x08","\xae","\x48"),
	HX_HCSTRING("COUNT_TEXTURE","\xeb","\x39","\xa1","\x7b"),
	HX_HCSTRING("COUNT_TEXTURE_COMPRESSED","\x95","\x95","\x8e","\x7c"),
	HX_HCSTRING("COUNT_PROGRAM","\x94","\xbb","\xb9","\xd0"),
	HX_HCSTRING("MEM_INDEX_BUFFER","\xb7","\xdd","\xf8","\x0e"),
	HX_HCSTRING("MEM_VERTEX_BUFFER","\xb1","\xa4","\x39","\x1e"),
	HX_HCSTRING("MEM_TEXTURE","\x31","\x1d","\x02","\x62"),
	HX_HCSTRING("MEM_TEXTURE_COMPRESSED","\x0f","\x8c","\xba","\x2a"),
	HX_HCSTRING("MEM_PROGRAM","\xda","\x9e","\x1a","\xb7"),
	HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"),
	::String(null()) };

void Context3DTelemetry_Impl__obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.display3D._Context3D.Context3DTelemetry_Impl_","\xad","\x77","\x53","\x2c");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Context3DTelemetry_Impl__obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = sStaticStorageInfo;
#endif
	hx::RegisterClass(__mClass->mName, __mClass);
}

void Context3DTelemetry_Impl__obj::__boot()
{
	DRAW_CALLS= (int)0;
	COUNT_INDEX_BUFFER= (int)1;
	COUNT_VERTEX_BUFFER= (int)2;
	COUNT_TEXTURE= (int)3;
	COUNT_TEXTURE_COMPRESSED= (int)4;
	COUNT_PROGRAM= (int)5;
	MEM_INDEX_BUFFER= (int)6;
	MEM_VERTEX_BUFFER= (int)7;
	MEM_TEXTURE= (int)8;
	MEM_TEXTURE_COMPRESSED= (int)9;
	MEM_PROGRAM= (int)10;
	length= (int)11;
}

} // end namespace openfl
} // end namespace display3D
} // end namespace _Context3D
