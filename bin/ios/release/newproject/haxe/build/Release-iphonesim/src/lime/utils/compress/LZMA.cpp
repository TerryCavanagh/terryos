#include <hxcpp.h>

#ifndef INCLUDED_cpp_Prime
#include <cpp/Prime.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_utils_compress_LZMA
#include <lime/utils/compress/LZMA.h>
#endif
namespace lime{
namespace utils{
namespace compress{

Void LZMA_obj::__construct()
{
	return null();
}

//LZMA_obj::~LZMA_obj() { }

Dynamic LZMA_obj::__CreateEmpty() { return  new LZMA_obj; }
hx::ObjectPtr< LZMA_obj > LZMA_obj::__new()
{  hx::ObjectPtr< LZMA_obj > _result_ = new LZMA_obj();
	_result_->__construct();
	return _result_;}

Dynamic LZMA_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< LZMA_obj > _result_ = new LZMA_obj();
	_result_->__construct();
	return _result_;}

::haxe::io::Bytes LZMA_obj::compress( ::haxe::io::Bytes bytes){
	HX_STACK_FRAME("lime.utils.compress.LZMA","compress",0xfe03fbf8,"lime.utils.compress.LZMA.compress","lime/utils/compress/LZMA.hx",19,0x3a5f97c7)
	HX_STACK_ARG(bytes,"bytes")
	HX_STACK_LINE(23)
	Dynamic data = ((Dynamic)(::lime::utils::compress::LZMA_obj::cffi_lime_lzma_compress.call(hx::DynamicPtr(bytes))));		HX_STACK_VAR(data,"data");
	HX_STACK_LINE(24)
	bool tmp = (data == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(24)
	if ((tmp)){
		HX_STACK_LINE(24)
		return null();
	}
	HX_STACK_LINE(25)
	::haxe::io::Bytes tmp1 = ::haxe::io::Bytes_obj::__new(data->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ),data->__Field(HX_HCSTRING("b","\x62","\x00","\x00","\x00"), hx::paccDynamic ));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(25)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(LZMA_obj,compress,return )

::haxe::io::Bytes LZMA_obj::decompress( ::haxe::io::Bytes bytes){
	HX_STACK_FRAME("lime.utils.compress.LZMA","decompress",0xf62f7df9,"lime.utils.compress.LZMA.decompress","lime/utils/compress/LZMA.hx",46,0x3a5f97c7)
	HX_STACK_ARG(bytes,"bytes")
	HX_STACK_LINE(50)
	Dynamic data = ((Dynamic)(::lime::utils::compress::LZMA_obj::cffi_lime_lzma_decompress.call(hx::DynamicPtr(bytes))));		HX_STACK_VAR(data,"data");
	HX_STACK_LINE(51)
	bool tmp = (data == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(51)
	if ((tmp)){
		HX_STACK_LINE(51)
		return null();
	}
	HX_STACK_LINE(52)
	::haxe::io::Bytes tmp1 = ::haxe::io::Bytes_obj::__new(data->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ),data->__Field(HX_HCSTRING("b","\x62","\x00","\x00","\x00"), hx::paccDynamic ));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(52)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(LZMA_obj,decompress,return )

Dynamic LZMA_obj::lime_lzma_compress( Dynamic data){
	HX_STACK_FRAME("lime.utils.compress.LZMA","lime_lzma_compress",0xbb58a34b,"lime.utils.compress.LZMA.lime_lzma_compress","lime/utils/compress/LZMA.hx",81,0x3a5f97c7)
	HX_STACK_ARG(data,"data")
	HX_STACK_LINE(81)
	return ::lime::utils::compress::LZMA_obj::cffi_lime_lzma_compress.call(hx::DynamicPtr(data));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(LZMA_obj,lime_lzma_compress,return )

Dynamic LZMA_obj::lime_lzma_decompress( Dynamic data){
	HX_STACK_FRAME("lime.utils.compress.LZMA","lime_lzma_decompress",0x2f7ae00c,"lime.utils.compress.LZMA.lime_lzma_decompress","lime/utils/compress/LZMA.hx",82,0x3a5f97c7)
	HX_STACK_ARG(data,"data")
	HX_STACK_LINE(82)
	return ::lime::utils::compress::LZMA_obj::cffi_lime_lzma_decompress.call(hx::DynamicPtr(data));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(LZMA_obj,lime_lzma_decompress,return )

::cpp::Function< ::hx::Object * ( ::hx::Object * ) > LZMA_obj::cffi_lime_lzma_compress;

::cpp::Function< ::hx::Object * ( ::hx::Object * ) > LZMA_obj::cffi_lime_lzma_decompress;


LZMA_obj::LZMA_obj()
{
}

bool LZMA_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"compress") ) { outValue = compress_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"decompress") ) { outValue = decompress_dyn(); return true;  }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"lime_lzma_compress") ) { outValue = lime_lzma_compress_dyn(); return true;  }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"lime_lzma_decompress") ) { outValue = lime_lzma_decompress_dyn(); return true;  }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"cffi_lime_lzma_compress") ) { outValue = cffi_lime_lzma_compress; return true;  }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"cffi_lime_lzma_decompress") ) { outValue = cffi_lime_lzma_decompress; return true;  }
	}
	return false;
}

bool LZMA_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 23:
		if (HX_FIELD_EQ(inName,"cffi_lime_lzma_compress") ) { cffi_lime_lzma_compress=ioValue.Cast< ::cpp::Function< ::hx::Object * ( ::hx::Object * ) > >(); return true; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"cffi_lime_lzma_decompress") ) { cffi_lime_lzma_decompress=ioValue.Cast< ::cpp::Function< ::hx::Object * ( ::hx::Object * ) > >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::cpp::Function< ::hx::Object * ( ::hx::Object * ) >*/ ,(void *) &LZMA_obj::cffi_lime_lzma_compress,HX_HCSTRING("cffi_lime_lzma_compress","\xae","\x0c","\x35","\x0a")},
	{hx::fsObject /*::cpp::Function< ::hx::Object * ( ::hx::Object * ) >*/ ,(void *) &LZMA_obj::cffi_lime_lzma_decompress,HX_HCSTRING("cffi_lime_lzma_decompress","\x2f","\xa8","\x4e","\x3d")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(LZMA_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(LZMA_obj::cffi_lime_lzma_compress,"cffi_lime_lzma_compress");
	HX_MARK_MEMBER_NAME(LZMA_obj::cffi_lime_lzma_decompress,"cffi_lime_lzma_decompress");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(LZMA_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(LZMA_obj::cffi_lime_lzma_compress,"cffi_lime_lzma_compress");
	HX_VISIT_MEMBER_NAME(LZMA_obj::cffi_lime_lzma_decompress,"cffi_lime_lzma_decompress");
};

#endif

hx::Class LZMA_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("compress","\xa2","\x47","\xbf","\x83"),
	HX_HCSTRING("decompress","\x23","\x88","\x14","\xda"),
	HX_HCSTRING("lime_lzma_compress","\x75","\xe7","\xf2","\x95"),
	HX_HCSTRING("lime_lzma_decompress","\xb6","\x02","\x4e","\x98"),
	HX_HCSTRING("cffi_lime_lzma_compress","\xae","\x0c","\x35","\x0a"),
	HX_HCSTRING("cffi_lime_lzma_decompress","\x2f","\xa8","\x4e","\x3d"),
	::String(null()) };

void LZMA_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.utils.compress.LZMA","\xd8","\x8e","\x8f","\xf0");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &LZMA_obj::__GetStatic;
	__mClass->mSetStaticField = &LZMA_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< LZMA_obj >;
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

void LZMA_obj::__boot()
{
	cffi_lime_lzma_compress= ::cpp::Function< ::hx::Object * ( ::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_lzma_compress","\x75","\xe7","\xf2","\x95"),HX_HCSTRING("oo","\x20","\x61","\x00","\x00"),false));
	cffi_lime_lzma_decompress= ::cpp::Function< ::hx::Object * ( ::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_lzma_decompress","\xb6","\x02","\x4e","\x98"),HX_HCSTRING("oo","\x20","\x61","\x00","\x00"),false));
}

} // end namespace lime
} // end namespace utils
} // end namespace compress
