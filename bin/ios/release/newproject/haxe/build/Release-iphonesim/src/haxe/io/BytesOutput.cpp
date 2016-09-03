#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_io_BytesBuffer
#include <haxe/io/BytesBuffer.h>
#endif
#ifndef INCLUDED_haxe_io_BytesOutput
#include <haxe/io/BytesOutput.h>
#endif
#ifndef INCLUDED_haxe_io_Output
#include <haxe/io/Output.h>
#endif
namespace haxe{
namespace io{

Void BytesOutput_obj::__construct()
{
HX_STACK_FRAME("haxe.io.BytesOutput","new",0x130b775e,"haxe.io.BytesOutput.new","/usr/local/lib/haxe/std/haxe/io/BytesOutput.hx",35,0xe13b11ef)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(40)
	::haxe::io::BytesBuffer tmp = ::haxe::io::BytesBuffer_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(40)
	this->b = tmp;
}
;
	return null();
}

//BytesOutput_obj::~BytesOutput_obj() { }

Dynamic BytesOutput_obj::__CreateEmpty() { return  new BytesOutput_obj; }
hx::ObjectPtr< BytesOutput_obj > BytesOutput_obj::__new()
{  hx::ObjectPtr< BytesOutput_obj > _result_ = new BytesOutput_obj();
	_result_->__construct();
	return _result_;}

Dynamic BytesOutput_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< BytesOutput_obj > _result_ = new BytesOutput_obj();
	_result_->__construct();
	return _result_;}

Void BytesOutput_obj::writeByte( int c){
{
		HX_STACK_FRAME("haxe.io.BytesOutput","writeByte",0xed1b0d05,"haxe.io.BytesOutput.writeByte","/usr/local/lib/haxe/std/haxe/io/BytesOutput.hx",55,0xe13b11ef)
		HX_STACK_THIS(this)
		HX_STACK_ARG(c,"c")
		HX_STACK_LINE(55)
		::haxe::io::BytesBuffer tmp = this->b;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(55)
		int tmp1 = c;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(55)
		tmp->b->push(tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BytesOutput_obj,writeByte,(void))

::haxe::io::Bytes BytesOutput_obj::getBytes( ){
	HX_STACK_FRAME("haxe.io.BytesOutput","getBytes",0x9fe35837,"haxe.io.BytesOutput.getBytes","/usr/local/lib/haxe/std/haxe/io/BytesOutput.hx",125,0xe13b11ef)
	HX_STACK_THIS(this)
	HX_STACK_LINE(131)
	::haxe::io::BytesBuffer tmp = this->b;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(131)
	::haxe::io::Bytes tmp1 = tmp->getBytes();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(131)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(BytesOutput_obj,getBytes,return )


BytesOutput_obj::BytesOutput_obj()
{
}

void BytesOutput_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BytesOutput);
	HX_MARK_MEMBER_NAME(b,"b");
	HX_MARK_END_CLASS();
}

void BytesOutput_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(b,"b");
}

Dynamic BytesOutput_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"b") ) { return b; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getBytes") ) { return getBytes_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"writeByte") ) { return writeByte_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic BytesOutput_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"b") ) { b=inValue.Cast< ::haxe::io::BytesBuffer >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void BytesOutput_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("b","\x62","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::io::BytesBuffer*/ ,(int)offsetof(BytesOutput_obj,b),HX_HCSTRING("b","\x62","\x00","\x00","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("b","\x62","\x00","\x00","\x00"),
	HX_HCSTRING("writeByte","\x87","\x13","\xd7","\x49"),
	HX_HCSTRING("getBytes","\xf5","\x17","\x6f","\x1d"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BytesOutput_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BytesOutput_obj::__mClass,"__mClass");
};

#endif

hx::Class BytesOutput_obj::__mClass;

void BytesOutput_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.io.BytesOutput","\x6c","\x30","\xb1","\xdc");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< BytesOutput_obj >;
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

} // end namespace haxe
} // end namespace io
