#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_utils_ArrayBufferIO
#include <lime/utils/ArrayBufferIO.h>
#endif
namespace lime{
namespace utils{

Void ArrayBufferIO_obj::__construct()
{
	return null();
}

//ArrayBufferIO_obj::~ArrayBufferIO_obj() { }

Dynamic ArrayBufferIO_obj::__CreateEmpty() { return  new ArrayBufferIO_obj; }
hx::ObjectPtr< ArrayBufferIO_obj > ArrayBufferIO_obj::__new()
{  hx::ObjectPtr< ArrayBufferIO_obj > _result_ = new ArrayBufferIO_obj();
	_result_->__construct();
	return _result_;}

Dynamic ArrayBufferIO_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ArrayBufferIO_obj > _result_ = new ArrayBufferIO_obj();
	_result_->__construct();
	return _result_;}

int ArrayBufferIO_obj::getInt16( ::haxe::io::Bytes buffer,int byteOffset){
	HX_STACK_FRAME("lime.utils.ArrayBufferIO","getInt16",0x764c5d83,"lime.utils.ArrayBufferIO.getInt16","lime/utils/ArrayBufferView.hx",483,0xb543acf8)
	HX_STACK_ARG(buffer,"buffer")
	HX_STACK_ARG(byteOffset,"byteOffset")
	HX_STACK_LINE(486)
	int tmp = ::__hxcpp_memory_get_i16(buffer->b,byteOffset);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(486)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ArrayBufferIO_obj,getInt16,return )

int ArrayBufferIO_obj::getInt16_BE( ::haxe::io::Bytes buffer,int byteOffset){
	HX_STACK_FRAME("lime.utils.ArrayBufferIO","getInt16_BE",0x50eb063f,"lime.utils.ArrayBufferIO.getInt16_BE","lime/utils/ArrayBufferView.hx",500,0xb543acf8)
	HX_STACK_ARG(buffer,"buffer")
	HX_STACK_ARG(byteOffset,"byteOffset")
	HX_STACK_LINE(503)
	int tmp = ::__hxcpp_memory_get_i16(buffer->b,byteOffset);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(503)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ArrayBufferIO_obj,getInt16_BE,return )

Void ArrayBufferIO_obj::setInt16( ::haxe::io::Bytes buffer,int byteOffset,int value){
{
		HX_STACK_FRAME("lime.utils.ArrayBufferIO","setInt16",0x24a9b6f7,"lime.utils.ArrayBufferIO.setInt16","lime/utils/ArrayBufferView.hx",521,0xb543acf8)
		HX_STACK_ARG(buffer,"buffer")
		HX_STACK_ARG(byteOffset,"byteOffset")
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(521)
		::__hxcpp_memory_set_i16(buffer->b,byteOffset,value);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(ArrayBufferIO_obj,setInt16,(void))

Void ArrayBufferIO_obj::setInt16_BE( ::haxe::io::Bytes buffer,int byteOffset,int value){
{
		HX_STACK_FRAME("lime.utils.ArrayBufferIO","setInt16_BE",0x5b580d4b,"lime.utils.ArrayBufferIO.setInt16_BE","lime/utils/ArrayBufferView.hx",537,0xb543acf8)
		HX_STACK_ARG(buffer,"buffer")
		HX_STACK_ARG(byteOffset,"byteOffset")
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(537)
		::__hxcpp_memory_set_i16(buffer->b,byteOffset,value);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(ArrayBufferIO_obj,setInt16_BE,(void))


ArrayBufferIO_obj::ArrayBufferIO_obj()
{
}

bool ArrayBufferIO_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"getInt16") ) { outValue = getInt16_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"setInt16") ) { outValue = setInt16_dyn(); return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"getInt16_BE") ) { outValue = getInt16_BE_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"setInt16_BE") ) { outValue = setInt16_BE_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ArrayBufferIO_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ArrayBufferIO_obj::__mClass,"__mClass");
};

#endif

hx::Class ArrayBufferIO_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("getInt16","\x1e","\xa1","\xf7","\x1d"),
	HX_HCSTRING("getInt16_BE","\x84","\xb5","\xdf","\x35"),
	HX_HCSTRING("setInt16","\x92","\xfa","\x54","\xcc"),
	HX_HCSTRING("setInt16_BE","\x90","\xbc","\x4c","\x40"),
	::String(null()) };

void ArrayBufferIO_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.utils.ArrayBufferIO","\xa9","\xc4","\x7c","\x14");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ArrayBufferIO_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< ArrayBufferIO_obj >;
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
} // end namespace utils
