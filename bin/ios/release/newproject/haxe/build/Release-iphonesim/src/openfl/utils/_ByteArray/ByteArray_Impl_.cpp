#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_utils_Bytes
#include <lime/utils/Bytes.h>
#endif
#ifndef INCLUDED_openfl_utils_ByteArrayData
#include <openfl/utils/ByteArrayData.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataInput
#include <openfl/utils/IDataInput.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataOutput
#include <openfl/utils/IDataOutput.h>
#endif
#ifndef INCLUDED_openfl_utils__ByteArray_ByteArray_Impl_
#include <openfl/utils/_ByteArray/ByteArray_Impl_.h>
#endif
namespace openfl{
namespace utils{
namespace _ByteArray{

Void ByteArray_Impl__obj::__construct()
{
	return null();
}

//ByteArray_Impl__obj::~ByteArray_Impl__obj() { }

Dynamic ByteArray_Impl__obj::__CreateEmpty() { return  new ByteArray_Impl__obj; }
hx::ObjectPtr< ByteArray_Impl__obj > ByteArray_Impl__obj::__new()
{  hx::ObjectPtr< ByteArray_Impl__obj > _result_ = new ByteArray_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic ByteArray_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ByteArray_Impl__obj > _result_ = new ByteArray_Impl__obj();
	_result_->__construct();
	return _result_;}

int ByteArray_Impl__obj::defaultObjectEncoding;

::openfl::utils::ByteArrayData ByteArray_Impl__obj::_new( hx::Null< int >  __o_length){
int length = __o_length.Default(0);
	HX_STACK_FRAME("openfl.utils._ByteArray.ByteArray_Impl_","_new",0x0c79e17f,"openfl.utils._ByteArray.ByteArray_Impl_._new","openfl/utils/ByteArray.hx",32,0xaa5cee4a)
	HX_STACK_ARG(length,"length")
{
		HX_STACK_LINE(32)
		::openfl::utils::ByteArrayData tmp = ::openfl::utils::ByteArrayData_obj::__new(length);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(32)
		::openfl::utils::ByteArrayData tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(32)
		return tmp1;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ByteArray_Impl__obj,_new,return )

int ByteArray_Impl__obj::get( ::openfl::utils::ByteArrayData this1,int index){
	HX_STACK_FRAME("openfl.utils._ByteArray.ByteArray_Impl_","get",0x47412238,"openfl.utils._ByteArray.ByteArray_Impl_.get","openfl/utils/ByteArray.hx",38,0xaa5cee4a)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(45)
	int tmp = this1->b->__get(index);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(45)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ByteArray_Impl__obj,get,return )

int ByteArray_Impl__obj::set( ::openfl::utils::ByteArrayData this1,int index,int value){
	HX_STACK_FRAME("openfl.utils._ByteArray.ByteArray_Impl_","set",0x474a3d44,"openfl.utils._ByteArray.ByteArray_Impl_.set","openfl/utils/ByteArray.hx",51,0xaa5cee4a)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(index,"index")
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(57)
	int tmp = (index + (int)1);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(57)
	this1->__resize(tmp);
	HX_STACK_LINE(58)
	{
		HX_STACK_LINE(58)
		int tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(58)
		this1->b[index] = tmp1;
	}
	HX_STACK_LINE(60)
	int tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(60)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(ByteArray_Impl__obj,set,return )

::openfl::utils::ByteArrayData ByteArray_Impl__obj::fromArrayBuffer( ::haxe::io::Bytes buffer){
	HX_STACK_FRAME("openfl.utils._ByteArray.ByteArray_Impl_","fromArrayBuffer",0x09275ad1,"openfl.utils._ByteArray.ByteArray_Impl_.fromArrayBuffer","openfl/utils/ByteArray.hx",65,0xaa5cee4a)
	HX_STACK_ARG(buffer,"buffer")
	HX_STACK_LINE(74)
	::haxe::io::Bytes tmp = buffer;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(74)
	::openfl::utils::ByteArrayData tmp1 = ::openfl::utils::ByteArrayData_obj::fromBytes(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(74)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ByteArray_Impl__obj,fromArrayBuffer,return )

::openfl::utils::ByteArrayData ByteArray_Impl__obj::fromBytes( ::haxe::io::Bytes bytes){
	HX_STACK_FRAME("openfl.utils._ByteArray.ByteArray_Impl_","fromBytes",0xcad779c3,"openfl.utils._ByteArray.ByteArray_Impl_.fromBytes","openfl/utils/ByteArray.hx",80,0xaa5cee4a)
	HX_STACK_ARG(bytes,"bytes")
	HX_STACK_LINE(88)
	::haxe::io::Bytes tmp = bytes;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(88)
	bool tmp1 = ::Std_obj::is(tmp,hx::ClassOf< ::openfl::utils::ByteArrayData >());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(88)
	if ((tmp1)){
		HX_STACK_LINE(90)
		::openfl::utils::ByteArrayData tmp2 = ((::openfl::utils::ByteArrayData)(bytes));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(90)
		return tmp2;
	}
	else{
		HX_STACK_LINE(97)
		::haxe::io::Bytes tmp2 = bytes;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(97)
		::openfl::utils::ByteArrayData tmp3 = ::openfl::utils::ByteArrayData_obj::fromBytes(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(97)
		return tmp3;
	}
	HX_STACK_LINE(88)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ByteArray_Impl__obj,fromBytes,return )

::openfl::utils::ByteArrayData ByteArray_Impl__obj::fromBytesData( Array< unsigned char > bytesData){
	HX_STACK_FRAME("openfl.utils._ByteArray.ByteArray_Impl_","fromBytesData",0x72e7998d,"openfl.utils._ByteArray.ByteArray_Impl_.fromBytesData","openfl/utils/ByteArray.hx",107,0xaa5cee4a)
	HX_STACK_ARG(bytesData,"bytesData")
	HX_STACK_LINE(114)
	::haxe::io::Bytes tmp = ::haxe::io::Bytes_obj::ofData(bytesData);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(114)
	::openfl::utils::ByteArrayData tmp1 = ::openfl::utils::ByteArrayData_obj::fromBytes(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(114)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ByteArray_Impl__obj,fromBytesData,return )

::haxe::io::Bytes ByteArray_Impl__obj::toArrayBuffer( ::openfl::utils::ByteArrayData byteArray){
	HX_STACK_FRAME("openfl.utils._ByteArray.ByteArray_Impl_","toArrayBuffer",0x56ee15e0,"openfl.utils._ByteArray.ByteArray_Impl_.toArrayBuffer","openfl/utils/ByteArray.hx",120,0xaa5cee4a)
	HX_STACK_ARG(byteArray,"byteArray")
	HX_STACK_LINE(129)
	::openfl::utils::ByteArrayData tmp = byteArray;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(129)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ByteArray_Impl__obj,toArrayBuffer,return )

::haxe::io::Bytes ByteArray_Impl__obj::toBytes( ::openfl::utils::ByteArrayData byteArray){
	HX_STACK_FRAME("openfl.utils._ByteArray.ByteArray_Impl_","toBytes",0xfc5d6f92,"openfl.utils._ByteArray.ByteArray_Impl_.toBytes","openfl/utils/ByteArray.hx",135,0xaa5cee4a)
	HX_STACK_ARG(byteArray,"byteArray")
	HX_STACK_LINE(142)
	::openfl::utils::ByteArrayData tmp = byteArray;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(142)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ByteArray_Impl__obj,toBytes,return )

Array< unsigned char > ByteArray_Impl__obj::toBytesData( ::openfl::utils::ByteArrayData byteArray){
	HX_STACK_FRAME("openfl.utils._ByteArray.ByteArray_Impl_","toBytesData",0xa6fe22dc,"openfl.utils._ByteArray.ByteArray_Impl_.toBytesData","openfl/utils/ByteArray.hx",156,0xaa5cee4a)
	HX_STACK_ARG(byteArray,"byteArray")
	HX_STACK_LINE(156)
	return byteArray->b;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ByteArray_Impl__obj,toBytesData,return )

::lime::utils::Bytes ByteArray_Impl__obj::toLimeBytes( ::openfl::utils::ByteArrayData byteArray){
	HX_STACK_FRAME("openfl.utils._ByteArray.ByteArray_Impl_","toLimeBytes",0x1aa31bbd,"openfl.utils._ByteArray.ByteArray_Impl_.toLimeBytes","openfl/utils/ByteArray.hx",163,0xaa5cee4a)
	HX_STACK_ARG(byteArray,"byteArray")
	HX_STACK_LINE(170)
	::openfl::utils::ByteArrayData tmp = byteArray;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(170)
	int tmp1 = ::openfl::utils::_ByteArray::ByteArray_Impl__obj::get_length(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(170)
	::lime::utils::Bytes tmp2 = ::lime::utils::Bytes_obj::__new(tmp1,byteArray->b);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(170)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ByteArray_Impl__obj,toLimeBytes,return )

int ByteArray_Impl__obj::get_length( ::openfl::utils::ByteArrayData this1){
	HX_STACK_FRAME("openfl.utils._ByteArray.ByteArray_Impl_","get_length",0xd68ebb4d,"openfl.utils._ByteArray.ByteArray_Impl_.get_length","openfl/utils/ByteArray.hx",183,0xaa5cee4a)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(188)
	int tmp = this1->length;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(188)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ByteArray_Impl__obj,get_length,return )

int ByteArray_Impl__obj::set_length( ::openfl::utils::ByteArrayData this1,int value){
	HX_STACK_FRAME("openfl.utils._ByteArray.ByteArray_Impl_","set_length",0xda0c59c1,"openfl.utils._ByteArray.ByteArray_Impl_.set_length","openfl/utils/ByteArray.hx",194,0xaa5cee4a)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(200)
	bool tmp = (value > (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(200)
	if ((tmp)){
		HX_STACK_LINE(202)
		int tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(202)
		this1->__resize(tmp1);
	}
	HX_STACK_LINE(206)
	this1->length = value;
	HX_STACK_LINE(209)
	int tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(209)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ByteArray_Impl__obj,set_length,return )


ByteArray_Impl__obj::ByteArray_Impl__obj()
{
}

bool ByteArray_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { outValue = get_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"set") ) { outValue = set_dyn(); return true;  }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { outValue = _new_dyn(); return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"toBytes") ) { outValue = toBytes_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"fromBytes") ) { outValue = fromBytes_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_length") ) { outValue = get_length_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"set_length") ) { outValue = set_length_dyn(); return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"toBytesData") ) { outValue = toBytesData_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"toLimeBytes") ) { outValue = toLimeBytes_dyn(); return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"fromBytesData") ) { outValue = fromBytesData_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"toArrayBuffer") ) { outValue = toArrayBuffer_dyn(); return true;  }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"fromArrayBuffer") ) { outValue = fromArrayBuffer_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &ByteArray_Impl__obj::defaultObjectEncoding,HX_HCSTRING("defaultObjectEncoding","\x53","\xfb","\xeb","\xff")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ByteArray_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ByteArray_Impl__obj::defaultObjectEncoding,"defaultObjectEncoding");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ByteArray_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ByteArray_Impl__obj::defaultObjectEncoding,"defaultObjectEncoding");
};

#endif

hx::Class ByteArray_Impl__obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("defaultObjectEncoding","\x53","\xfb","\xeb","\xff"),
	HX_HCSTRING("_new","\x61","\x15","\x1f","\x3f"),
	HX_HCSTRING("get","\x96","\x80","\x4e","\x00"),
	HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"),
	HX_HCSTRING("fromArrayBuffer","\x2f","\xce","\x77","\xec"),
	HX_HCSTRING("fromBytes","\xa1","\xf2","\x20","\x72"),
	HX_HCSTRING("fromBytesData","\x6b","\xd9","\x41","\xdb"),
	HX_HCSTRING("toArrayBuffer","\xbe","\x55","\x48","\xbf"),
	HX_HCSTRING("toBytes","\xf0","\x54","\x1c","\x8a"),
	HX_HCSTRING("toBytesData","\x3a","\x0f","\x3e","\xce"),
	HX_HCSTRING("toLimeBytes","\x1b","\x08","\xe3","\x41"),
	HX_HCSTRING("get_length","\xaf","\x04","\x8f","\x8f"),
	HX_HCSTRING("set_length","\x23","\xa3","\x0c","\x93"),
	::String(null()) };

void ByteArray_Impl__obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.utils._ByteArray.ByteArray_Impl_","\x10","\x09","\x69","\x6e");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ByteArray_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< ByteArray_Impl__obj >;
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

} // end namespace openfl
} // end namespace utils
} // end namespace _ByteArray
