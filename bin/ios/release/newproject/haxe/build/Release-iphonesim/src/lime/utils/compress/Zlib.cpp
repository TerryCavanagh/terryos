#include <hxcpp.h>

#ifndef INCLUDED_cpp_Prime
#include <cpp/Prime.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_utils_compress_Zlib
#include <lime/utils/compress/Zlib.h>
#endif
namespace lime{
namespace utils{
namespace compress{

Void Zlib_obj::__construct()
{
	return null();
}

//Zlib_obj::~Zlib_obj() { }

Dynamic Zlib_obj::__CreateEmpty() { return  new Zlib_obj; }
hx::ObjectPtr< Zlib_obj > Zlib_obj::__new()
{  hx::ObjectPtr< Zlib_obj > _result_ = new Zlib_obj();
	_result_->__construct();
	return _result_;}

Dynamic Zlib_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Zlib_obj > _result_ = new Zlib_obj();
	_result_->__construct();
	return _result_;}

::haxe::io::Bytes Zlib_obj::compress( ::haxe::io::Bytes bytes){
	HX_STACK_FRAME("lime.utils.compress.Zlib","compress",0x4fedbd0f,"lime.utils.compress.Zlib.compress","lime/utils/compress/Zlib.hx",18,0xe800dd9e)
	HX_STACK_ARG(bytes,"bytes")
	HX_STACK_LINE(22)
	Dynamic data = ((Dynamic)(::lime::utils::compress::Zlib_obj::cffi_lime_zlib_compress.call(hx::DynamicPtr(bytes))));		HX_STACK_VAR(data,"data");
	HX_STACK_LINE(23)
	bool tmp = (data == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(23)
	if ((tmp)){
		HX_STACK_LINE(23)
		return null();
	}
	HX_STACK_LINE(24)
	::haxe::io::Bytes tmp1 = ::haxe::io::Bytes_obj::__new(data->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ),data->__Field(HX_HCSTRING("b","\x62","\x00","\x00","\x00"), hx::paccDynamic ));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(24)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Zlib_obj,compress,return )

::haxe::io::Bytes Zlib_obj::decompress( ::haxe::io::Bytes bytes){
	HX_STACK_FRAME("lime.utils.compress.Zlib","decompress",0xe6dcf2d0,"lime.utils.compress.Zlib.decompress","lime/utils/compress/Zlib.hx",50,0xe800dd9e)
	HX_STACK_ARG(bytes,"bytes")
	HX_STACK_LINE(54)
	Dynamic data = ((Dynamic)(::lime::utils::compress::Zlib_obj::cffi_lime_zlib_decompress.call(hx::DynamicPtr(bytes))));		HX_STACK_VAR(data,"data");
	HX_STACK_LINE(55)
	bool tmp = (data == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(55)
	if ((tmp)){
		HX_STACK_LINE(55)
		return null();
	}
	HX_STACK_LINE(56)
	::haxe::io::Bytes tmp1 = ::haxe::io::Bytes_obj::__new(data->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ),data->__Field(HX_HCSTRING("b","\x62","\x00","\x00","\x00"), hx::paccDynamic ));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(56)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Zlib_obj,decompress,return )

Dynamic Zlib_obj::lime_zlib_compress( Dynamic data){
	HX_STACK_FRAME("lime.utils.compress.Zlib","lime_zlib_compress",0x2238f059,"lime.utils.compress.Zlib.lime_zlib_compress","lime/utils/compress/Zlib.hx",90,0xe800dd9e)
	HX_STACK_ARG(data,"data")
	HX_STACK_LINE(90)
	return ::lime::utils::compress::Zlib_obj::cffi_lime_zlib_compress.call(hx::DynamicPtr(data));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Zlib_obj,lime_zlib_compress,return )

Dynamic Zlib_obj::lime_zlib_decompress( Dynamic data){
	HX_STACK_FRAME("lime.utils.compress.Zlib","lime_zlib_decompress",0x48d30c9a,"lime.utils.compress.Zlib.lime_zlib_decompress","lime/utils/compress/Zlib.hx",91,0xe800dd9e)
	HX_STACK_ARG(data,"data")
	HX_STACK_LINE(91)
	return ::lime::utils::compress::Zlib_obj::cffi_lime_zlib_decompress.call(hx::DynamicPtr(data));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Zlib_obj,lime_zlib_decompress,return )

::cpp::Function< ::hx::Object * ( ::hx::Object * ) > Zlib_obj::cffi_lime_zlib_compress;

::cpp::Function< ::hx::Object * ( ::hx::Object * ) > Zlib_obj::cffi_lime_zlib_decompress;


Zlib_obj::Zlib_obj()
{
}

bool Zlib_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"compress") ) { outValue = compress_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"decompress") ) { outValue = decompress_dyn(); return true;  }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"lime_zlib_compress") ) { outValue = lime_zlib_compress_dyn(); return true;  }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"lime_zlib_decompress") ) { outValue = lime_zlib_decompress_dyn(); return true;  }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"cffi_lime_zlib_compress") ) { outValue = cffi_lime_zlib_compress; return true;  }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"cffi_lime_zlib_decompress") ) { outValue = cffi_lime_zlib_decompress; return true;  }
	}
	return false;
}

bool Zlib_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 23:
		if (HX_FIELD_EQ(inName,"cffi_lime_zlib_compress") ) { cffi_lime_zlib_compress=ioValue.Cast< ::cpp::Function< ::hx::Object * ( ::hx::Object * ) > >(); return true; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"cffi_lime_zlib_decompress") ) { cffi_lime_zlib_decompress=ioValue.Cast< ::cpp::Function< ::hx::Object * ( ::hx::Object * ) > >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::cpp::Function< ::hx::Object * ( ::hx::Object * ) >*/ ,(void *) &Zlib_obj::cffi_lime_zlib_compress,HX_HCSTRING("cffi_lime_zlib_compress","\xe5","\xb5","\x14","\xff")},
	{hx::fsObject /*::cpp::Function< ::hx::Object * ( ::hx::Object * ) >*/ ,(void *) &Zlib_obj::cffi_lime_zlib_decompress,HX_HCSTRING("cffi_lime_zlib_decompress","\x26","\x4d","\x54","\xe8")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Zlib_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Zlib_obj::cffi_lime_zlib_compress,"cffi_lime_zlib_compress");
	HX_MARK_MEMBER_NAME(Zlib_obj::cffi_lime_zlib_decompress,"cffi_lime_zlib_decompress");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Zlib_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Zlib_obj::cffi_lime_zlib_compress,"cffi_lime_zlib_compress");
	HX_VISIT_MEMBER_NAME(Zlib_obj::cffi_lime_zlib_decompress,"cffi_lime_zlib_decompress");
};

#endif

hx::Class Zlib_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("compress","\xa2","\x47","\xbf","\x83"),
	HX_HCSTRING("decompress","\x23","\x88","\x14","\xda"),
	HX_HCSTRING("lime_zlib_compress","\xac","\x90","\xd2","\x8a"),
	HX_HCSTRING("lime_zlib_decompress","\xad","\xa7","\x53","\x43"),
	HX_HCSTRING("cffi_lime_zlib_compress","\xe5","\xb5","\x14","\xff"),
	HX_HCSTRING("cffi_lime_zlib_decompress","\x26","\x4d","\x54","\xe8"),
	::String(null()) };

void Zlib_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.utils.compress.Zlib","\xa1","\x4c","\xde","\xf9");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Zlib_obj::__GetStatic;
	__mClass->mSetStaticField = &Zlib_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Zlib_obj >;
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

void Zlib_obj::__boot()
{
	cffi_lime_zlib_compress= ::cpp::Function< ::hx::Object * ( ::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_zlib_compress","\xac","\x90","\xd2","\x8a"),HX_HCSTRING("oo","\x20","\x61","\x00","\x00"),false));
	cffi_lime_zlib_decompress= ::cpp::Function< ::hx::Object * ( ::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_zlib_decompress","\xad","\xa7","\x53","\x43"),HX_HCSTRING("oo","\x20","\x61","\x00","\x00"),false));
}

} // end namespace lime
} // end namespace utils
} // end namespace compress
