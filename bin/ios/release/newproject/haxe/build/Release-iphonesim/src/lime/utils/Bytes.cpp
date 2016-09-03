#include <hxcpp.h>

#ifndef INCLUDED_cpp_Prime
#include <cpp/Prime.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_utils_Bytes
#include <lime/utils/Bytes.h>
#endif
namespace lime{
namespace utils{

Void Bytes_obj::__construct(int length,Array< unsigned char > bytesData)
{
HX_STACK_FRAME("lime.utils.Bytes","new",0xa06e8ae7,"lime.utils.Bytes.new","lime/utils/Bytes.hx",17,0x9fbf972b)
HX_STACK_THIS(this)
HX_STACK_ARG(length,"length")
HX_STACK_ARG(bytesData,"bytesData")
{
	HX_STACK_LINE(22)
	int tmp = length;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(22)
	super::__construct(tmp,bytesData);
}
;
	return null();
}

//Bytes_obj::~Bytes_obj() { }

Dynamic Bytes_obj::__CreateEmpty() { return  new Bytes_obj; }
hx::ObjectPtr< Bytes_obj > Bytes_obj::__new(int length,Array< unsigned char > bytesData)
{  hx::ObjectPtr< Bytes_obj > _result_ = new Bytes_obj();
	_result_->__construct(length,bytesData);
	return _result_;}

Dynamic Bytes_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Bytes_obj > _result_ = new Bytes_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

::lime::utils::Bytes Bytes_obj::alloc( int length){
	HX_STACK_FRAME("lime.utils.Bytes","alloc",0x09b74ebc,"lime.utils.Bytes.alloc","lime/utils/Bytes.hx",28,0x9fbf972b)
	HX_STACK_ARG(length,"length")
	HX_STACK_LINE(30)
	int tmp = length;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(30)
	::haxe::io::Bytes tmp1 = ::haxe::io::Bytes_obj::alloc(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(30)
	::haxe::io::Bytes bytes = tmp1;		HX_STACK_VAR(bytes,"bytes");
	HX_STACK_LINE(31)
	::lime::utils::Bytes tmp2 = ::lime::utils::Bytes_obj::__new(bytes->length,bytes->b);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(31)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Bytes_obj,alloc,return )

int Bytes_obj::fastGet( Array< unsigned char > b,int pos){
	HX_STACK_FRAME("lime.utils.Bytes","fastGet",0xd63b0961,"lime.utils.Bytes.fastGet","lime/utils/Bytes.hx",36,0x9fbf972b)
	HX_STACK_ARG(b,"b")
	HX_STACK_ARG(pos,"pos")
	HX_STACK_LINE(38)
	int tmp = pos;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(38)
	unsigned char tmp1 = b->__unsafe_get(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(38)
	int tmp2 = ((int)(tmp1));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(38)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Bytes_obj,fastGet,return )

::lime::utils::Bytes Bytes_obj::ofData( Array< unsigned char > b){
	HX_STACK_FRAME("lime.utils.Bytes","ofData",0x80ca0eba,"lime.utils.Bytes.ofData","lime/utils/Bytes.hx",43,0x9fbf972b)
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(45)
	::haxe::io::Bytes tmp = ::haxe::io::Bytes_obj::ofData(b);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(45)
	::haxe::io::Bytes bytes = tmp;		HX_STACK_VAR(bytes,"bytes");
	HX_STACK_LINE(46)
	::lime::utils::Bytes tmp1 = ::lime::utils::Bytes_obj::__new(bytes->length,bytes->b);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(46)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Bytes_obj,ofData,return )

::lime::utils::Bytes Bytes_obj::ofString( ::String s){
	HX_STACK_FRAME("lime.utils.Bytes","ofString",0xc1222561,"lime.utils.Bytes.ofString","lime/utils/Bytes.hx",51,0x9fbf972b)
	HX_STACK_ARG(s,"s")
	HX_STACK_LINE(53)
	::String tmp = s;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(53)
	::haxe::io::Bytes tmp1 = ::haxe::io::Bytes_obj::ofString(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(53)
	::haxe::io::Bytes bytes = tmp1;		HX_STACK_VAR(bytes,"bytes");
	HX_STACK_LINE(54)
	::lime::utils::Bytes tmp2 = ::lime::utils::Bytes_obj::__new(bytes->length,bytes->b);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(54)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Bytes_obj,ofString,return )

::lime::utils::Bytes Bytes_obj::readFile( ::String path){
	HX_STACK_FRAME("lime.utils.Bytes","readFile",0x88a4650b,"lime.utils.Bytes.readFile","lime/utils/Bytes.hx",59,0x9fbf972b)
	HX_STACK_ARG(path,"path")
	HX_STACK_LINE(62)
	Dynamic data = ((Dynamic)(::lime::utils::Bytes_obj::cffi_lime_bytes_read_file.call(path)));		HX_STACK_VAR(data,"data");
	HX_STACK_LINE(63)
	bool tmp = (data != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(63)
	if ((tmp)){
		HX_STACK_LINE(63)
		::lime::utils::Bytes tmp1 = ::lime::utils::Bytes_obj::__new(data->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ),data->__Field(HX_HCSTRING("b","\x62","\x00","\x00","\x00"), hx::paccDynamic ));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(63)
		return tmp1;
	}
	HX_STACK_LINE(65)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Bytes_obj,readFile,return )

::lime::utils::Bytes Bytes_obj::__fromNativePointer( Dynamic data,int length){
	HX_STACK_FRAME("lime.utils.Bytes","__fromNativePointer",0x91d44183,"lime.utils.Bytes.__fromNativePointer","lime/utils/Bytes.hx",71,0x9fbf972b)
	HX_STACK_ARG(data,"data")
	HX_STACK_ARG(length,"length")
	HX_STACK_LINE(73)
	Dynamic tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(73)
	{
		HX_STACK_LINE(73)
		Float data1 = data;		HX_STACK_VAR(data1,"data1");
		HX_STACK_LINE(73)
		tmp = ::lime::utils::Bytes_obj::cffi_lime_bytes_from_data_pointer.call(data1,length);
	}
	HX_STACK_LINE(73)
	Dynamic bytes = tmp;		HX_STACK_VAR(bytes,"bytes");
	HX_STACK_LINE(74)
	::lime::utils::Bytes tmp1 = ::lime::utils::Bytes_obj::__new(bytes->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ),bytes->__Field(HX_HCSTRING("b","\x62","\x00","\x00","\x00"), hx::paccDynamic ));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(74)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Bytes_obj,__fromNativePointer,return )

Dynamic Bytes_obj::lime_bytes_from_data_pointer( Float data,int length){
	HX_STACK_FRAME("lime.utils.Bytes","lime_bytes_from_data_pointer",0x7df5f9b8,"lime.utils.Bytes.lime_bytes_from_data_pointer","lime/utils/Bytes.hx",88,0x9fbf972b)
	HX_STACK_ARG(data,"data")
	HX_STACK_ARG(length,"length")
	HX_STACK_LINE(88)
	return ::lime::utils::Bytes_obj::cffi_lime_bytes_from_data_pointer.call(data,length);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Bytes_obj,lime_bytes_from_data_pointer,return )

Float Bytes_obj::lime_bytes_get_data_pointer( Dynamic data){
	HX_STACK_FRAME("lime.utils.Bytes","lime_bytes_get_data_pointer",0x1d4bd736,"lime.utils.Bytes.lime_bytes_get_data_pointer","lime/utils/Bytes.hx",89,0x9fbf972b)
	HX_STACK_ARG(data,"data")
	HX_STACK_LINE(89)
	return ::lime::utils::Bytes_obj::cffi_lime_bytes_get_data_pointer.call(hx::DynamicPtr(data));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Bytes_obj,lime_bytes_get_data_pointer,return )

Dynamic Bytes_obj::lime_bytes_read_file( ::String path){
	HX_STACK_FRAME("lime.utils.Bytes","lime_bytes_read_file",0xab69b060,"lime.utils.Bytes.lime_bytes_read_file","lime/utils/Bytes.hx",90,0x9fbf972b)
	HX_STACK_ARG(path,"path")
	HX_STACK_LINE(90)
	return ::lime::utils::Bytes_obj::cffi_lime_bytes_read_file.call(path);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Bytes_obj,lime_bytes_read_file,return )

::cpp::Function< ::hx::Object * ( Float ,int ) > Bytes_obj::cffi_lime_bytes_from_data_pointer;

::cpp::Function< Float ( ::hx::Object * ) > Bytes_obj::cffi_lime_bytes_get_data_pointer;

::cpp::Function< ::hx::Object * ( ::String ) > Bytes_obj::cffi_lime_bytes_read_file;


Bytes_obj::Bytes_obj()
{
}

bool Bytes_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"alloc") ) { outValue = alloc_dyn(); return true;  }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"ofData") ) { outValue = ofData_dyn(); return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"fastGet") ) { outValue = fastGet_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"ofString") ) { outValue = ofString_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"readFile") ) { outValue = readFile_dyn(); return true;  }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"__fromNativePointer") ) { outValue = __fromNativePointer_dyn(); return true;  }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"lime_bytes_read_file") ) { outValue = lime_bytes_read_file_dyn(); return true;  }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"cffi_lime_bytes_read_file") ) { outValue = cffi_lime_bytes_read_file; return true;  }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"lime_bytes_get_data_pointer") ) { outValue = lime_bytes_get_data_pointer_dyn(); return true;  }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"lime_bytes_from_data_pointer") ) { outValue = lime_bytes_from_data_pointer_dyn(); return true;  }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"cffi_lime_bytes_get_data_pointer") ) { outValue = cffi_lime_bytes_get_data_pointer; return true;  }
		break;
	case 33:
		if (HX_FIELD_EQ(inName,"cffi_lime_bytes_from_data_pointer") ) { outValue = cffi_lime_bytes_from_data_pointer; return true;  }
	}
	return false;
}

bool Bytes_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 25:
		if (HX_FIELD_EQ(inName,"cffi_lime_bytes_read_file") ) { cffi_lime_bytes_read_file=ioValue.Cast< ::cpp::Function< ::hx::Object * ( ::String ) > >(); return true; }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"cffi_lime_bytes_get_data_pointer") ) { cffi_lime_bytes_get_data_pointer=ioValue.Cast< ::cpp::Function< Float ( ::hx::Object * ) > >(); return true; }
		break;
	case 33:
		if (HX_FIELD_EQ(inName,"cffi_lime_bytes_from_data_pointer") ) { cffi_lime_bytes_from_data_pointer=ioValue.Cast< ::cpp::Function< ::hx::Object * ( Float ,int ) > >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::cpp::Function< ::hx::Object * ( Float ,int ) >*/ ,(void *) &Bytes_obj::cffi_lime_bytes_from_data_pointer,HX_HCSTRING("cffi_lime_bytes_from_data_pointer","\x98","\x81","\xca","\x81")},
	{hx::fsObject /*::cpp::Function< Float ( ::hx::Object * ) >*/ ,(void *) &Bytes_obj::cffi_lime_bytes_get_data_pointer,HX_HCSTRING("cffi_lime_bytes_get_data_pointer","\x56","\xeb","\xe8","\x02")},
	{hx::fsObject /*::cpp::Function< ::hx::Object * ( ::String ) >*/ ,(void *) &Bytes_obj::cffi_lime_bytes_read_file,HX_HCSTRING("cffi_lime_bytes_read_file","\x40","\x58","\x83","\x5f")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Bytes_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Bytes_obj::cffi_lime_bytes_from_data_pointer,"cffi_lime_bytes_from_data_pointer");
	HX_MARK_MEMBER_NAME(Bytes_obj::cffi_lime_bytes_get_data_pointer,"cffi_lime_bytes_get_data_pointer");
	HX_MARK_MEMBER_NAME(Bytes_obj::cffi_lime_bytes_read_file,"cffi_lime_bytes_read_file");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Bytes_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Bytes_obj::cffi_lime_bytes_from_data_pointer,"cffi_lime_bytes_from_data_pointer");
	HX_VISIT_MEMBER_NAME(Bytes_obj::cffi_lime_bytes_get_data_pointer,"cffi_lime_bytes_get_data_pointer");
	HX_VISIT_MEMBER_NAME(Bytes_obj::cffi_lime_bytes_read_file,"cffi_lime_bytes_read_file");
};

#endif

hx::Class Bytes_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("alloc","\x75","\xa4","\x93","\x21"),
	HX_HCSTRING("fastGet","\x5a","\xff","\x22","\xde"),
	HX_HCSTRING("ofData","\xe1","\xba","\xb8","\x49"),
	HX_HCSTRING("ofString","\x48","\x69","\x31","\xa4"),
	HX_HCSTRING("readFile","\xf2","\xa8","\xb3","\x6b"),
	HX_HCSTRING("__fromNativePointer","\xfc","\xc8","\x91","\x68"),
	HX_HCSTRING("lime_bytes_from_data_pointer","\x1f","\x3b","\x02","\x90"),
	HX_HCSTRING("lime_bytes_get_data_pointer","\xaf","\xff","\x82","\x7b"),
	HX_HCSTRING("lime_bytes_read_file","\xc7","\xb2","\x82","\xba"),
	HX_HCSTRING("cffi_lime_bytes_from_data_pointer","\x98","\x81","\xca","\x81"),
	HX_HCSTRING("cffi_lime_bytes_get_data_pointer","\x56","\xeb","\xe8","\x02"),
	HX_HCSTRING("cffi_lime_bytes_read_file","\x40","\x58","\x83","\x5f"),
	::String(null()) };

void Bytes_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.utils.Bytes","\x75","\x8b","\xaf","\x6d");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Bytes_obj::__GetStatic;
	__mClass->mSetStaticField = &Bytes_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Bytes_obj >;
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

void Bytes_obj::__boot()
{
	cffi_lime_bytes_from_data_pointer= ::cpp::Function< ::hx::Object * ( Float ,int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_bytes_from_data_pointer","\x1f","\x3b","\x02","\x90"),HX_HCSTRING("dio","\x4a","\x3d","\x4c","\x00"),false));
	cffi_lime_bytes_get_data_pointer= ::cpp::Function< Float ( ::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_bytes_get_data_pointer","\xaf","\xff","\x82","\x7b"),HX_HCSTRING("od","\x15","\x61","\x00","\x00"),false));
	cffi_lime_bytes_read_file= ::cpp::Function< ::hx::Object * ( ::String ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_bytes_read_file","\xc7","\xb2","\x82","\xba"),HX_HCSTRING("so","\x9c","\x64","\x00","\x00"),false));
}

} // end namespace lime
} // end namespace utils
