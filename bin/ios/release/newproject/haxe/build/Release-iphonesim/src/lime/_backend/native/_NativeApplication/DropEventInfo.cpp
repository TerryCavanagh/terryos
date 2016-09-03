#include <hxcpp.h>

#ifndef INCLUDED_lime__backend_native__NativeApplication_DropEventInfo
#include <lime/_backend/native/_NativeApplication/DropEventInfo.h>
#endif
namespace lime{
namespace _backend{
namespace native{
namespace _NativeApplication{

Void DropEventInfo_obj::__construct(Dynamic type,::String file)
{
HX_STACK_FRAME("lime._backend.native._NativeApplication.DropEventInfo","new",0x5891dece,"lime._backend.native._NativeApplication.DropEventInfo.new","lime/_backend/native/NativeApplication.hx",691,0xb13849fd)
HX_STACK_THIS(this)
HX_STACK_ARG(type,"type")
HX_STACK_ARG(file,"file")
{
	HX_STACK_LINE(693)
	this->type = type;
	HX_STACK_LINE(694)
	this->file = file;
}
;
	return null();
}

//DropEventInfo_obj::~DropEventInfo_obj() { }

Dynamic DropEventInfo_obj::__CreateEmpty() { return  new DropEventInfo_obj; }
hx::ObjectPtr< DropEventInfo_obj > DropEventInfo_obj::__new(Dynamic type,::String file)
{  hx::ObjectPtr< DropEventInfo_obj > _result_ = new DropEventInfo_obj();
	_result_->__construct(type,file);
	return _result_;}

Dynamic DropEventInfo_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< DropEventInfo_obj > _result_ = new DropEventInfo_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

::lime::_backend::native::_NativeApplication::DropEventInfo DropEventInfo_obj::clone( ){
	HX_STACK_FRAME("lime._backend.native._NativeApplication.DropEventInfo","clone",0xb714194b,"lime._backend.native._NativeApplication.DropEventInfo.clone","lime/_backend/native/NativeApplication.hx",699,0xb13849fd)
	HX_STACK_THIS(this)
	HX_STACK_LINE(701)
	int tmp = this->type;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(701)
	::String tmp1 = this->file;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(701)
	::lime::_backend::native::_NativeApplication::DropEventInfo tmp2 = ::lime::_backend::native::_NativeApplication::DropEventInfo_obj::__new(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(701)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(DropEventInfo_obj,clone,return )


DropEventInfo_obj::DropEventInfo_obj()
{
}

void DropEventInfo_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DropEventInfo);
	HX_MARK_MEMBER_NAME(file,"file");
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_END_CLASS();
}

void DropEventInfo_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(file,"file");
	HX_VISIT_MEMBER_NAME(type,"type");
}

Dynamic DropEventInfo_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"file") ) { return file; }
		if (HX_FIELD_EQ(inName,"type") ) { return type; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic DropEventInfo_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"file") ) { file=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void DropEventInfo_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("file","\x7c","\xce","\xbb","\x43"));
	outFields->push(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(DropEventInfo_obj,file),HX_HCSTRING("file","\x7c","\xce","\xbb","\x43")},
	{hx::fsInt,(int)offsetof(DropEventInfo_obj,type),HX_HCSTRING("type","\xba","\xf2","\x08","\x4d")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("file","\x7c","\xce","\xbb","\x43"),
	HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DropEventInfo_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DropEventInfo_obj::__mClass,"__mClass");
};

#endif

hx::Class DropEventInfo_obj::__mClass;

void DropEventInfo_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime._backend.native._NativeApplication.DropEventInfo","\xdc","\x1f","\x33","\x8c");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< DropEventInfo_obj >;
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

} // end namespace lime
} // end namespace _backend
} // end namespace native
} // end namespace _NativeApplication
