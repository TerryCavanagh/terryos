#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_openfl_net_URLRequest
#include <openfl/net/URLRequest.h>
#endif
#ifndef INCLUDED_openfl_net_URLRequestHeader
#include <openfl/net/URLRequestHeader.h>
#endif
#ifndef INCLUDED_openfl_net__URLRequestMethod_URLRequestMethod_Impl_
#include <openfl/net/_URLRequestMethod/URLRequestMethod_Impl_.h>
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
namespace openfl{
namespace net{

Void URLRequest_obj::__construct(::String inURL)
{
HX_STACK_FRAME("openfl.net.URLRequest","new",0xe13767c1,"openfl.net.URLRequest.new","openfl/net/URLRequest.hx",18,0xe997cd0d)
HX_STACK_THIS(this)
HX_STACK_ARG(inURL,"inURL")
{
	HX_STACK_LINE(20)
	bool tmp = (inURL != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(20)
	if ((tmp)){
		HX_STACK_LINE(22)
		this->url = inURL;
	}
	HX_STACK_LINE(26)
	this->requestHeaders = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(27)
	::String tmp1 = ::openfl::net::_URLRequestMethod::URLRequestMethod_Impl__obj::toString(((Dynamic)((int)1)));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(27)
	this->method = tmp1;
	HX_STACK_LINE(28)
	this->contentType = null();
}
;
	return null();
}

//URLRequest_obj::~URLRequest_obj() { }

Dynamic URLRequest_obj::__CreateEmpty() { return  new URLRequest_obj; }
hx::ObjectPtr< URLRequest_obj > URLRequest_obj::__new(::String inURL)
{  hx::ObjectPtr< URLRequest_obj > _result_ = new URLRequest_obj();
	_result_->__construct(inURL);
	return _result_;}

Dynamic URLRequest_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< URLRequest_obj > _result_ = new URLRequest_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Array< ::Dynamic > URLRequest_obj::formatRequestHeaders( ){
	HX_STACK_FRAME("openfl.net.URLRequest","formatRequestHeaders",0x4a7f73cd,"openfl.net.URLRequest.formatRequestHeaders","openfl/net/URLRequest.hx",33,0xe997cd0d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(35)
	Array< ::Dynamic > res = this->requestHeaders;		HX_STACK_VAR(res,"res");
	HX_STACK_LINE(36)
	bool tmp = (res == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(36)
	if ((tmp)){
		HX_STACK_LINE(36)
		res = Array_obj< ::Dynamic >::__new();
	}
	HX_STACK_LINE(38)
	::String tmp1 = this->method;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(38)
	Dynamic tmp2 = ::openfl::net::_URLRequestMethod::URLRequestMethod_Impl__obj::fromString(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(38)
	Dynamic tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(38)
	bool tmp4 = (tmp3 == ((Dynamic)((int)1)));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(38)
	bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(38)
	bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(38)
	if ((tmp5)){
		HX_STACK_LINE(38)
		Dynamic tmp7 = this->data;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(38)
		Dynamic tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(38)
		tmp6 = (tmp8 == null());
	}
	else{
		HX_STACK_LINE(38)
		tmp6 = true;
	}
	HX_STACK_LINE(38)
	if ((tmp6)){
		HX_STACK_LINE(38)
		return res;
	}
	HX_STACK_LINE(40)
	Dynamic tmp7 = this->data;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(40)
	Dynamic tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(40)
	bool tmp9 = ::Std_obj::is(tmp8,hx::ClassOf< ::String >());		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(40)
	bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(40)
	bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(40)
	if ((tmp10)){
		HX_STACK_LINE(40)
		Dynamic tmp12 = this->data;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(40)
		Dynamic tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(40)
		Dynamic tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(40)
		tmp11 = ::Std_obj::is(tmp14,hx::ClassOf< ::openfl::utils::ByteArrayData >());
	}
	else{
		HX_STACK_LINE(40)
		tmp11 = true;
	}
	HX_STACK_LINE(40)
	if ((tmp11)){
		HX_STACK_LINE(42)
		res = res->copy();
		HX_STACK_LINE(43)
		::String tmp12 = this->contentType;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(43)
		bool tmp13 = (tmp12 != null());		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(43)
		::String tmp14;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(43)
		if ((tmp13)){
			HX_STACK_LINE(43)
			tmp14 = this->contentType;
		}
		else{
			HX_STACK_LINE(43)
			tmp14 = HX_HCSTRING("application/x-www-form-urlencoded","\x9e","\x61","\x91","\xfa");
		}
		HX_STACK_LINE(43)
		::openfl::net::URLRequestHeader tmp15 = ::openfl::net::URLRequestHeader_obj::__new(HX_HCSTRING("Content-Type","\xce","\x69","\x5d","\x3c"),tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(43)
		res->push(tmp15);
	}
	HX_STACK_LINE(47)
	return res;
}


HX_DEFINE_DYNAMIC_FUNC0(URLRequest_obj,formatRequestHeaders,return )


URLRequest_obj::URLRequest_obj()
{
}

void URLRequest_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(URLRequest);
	HX_MARK_MEMBER_NAME(contentType,"contentType");
	HX_MARK_MEMBER_NAME(data,"data");
	HX_MARK_MEMBER_NAME(method,"method");
	HX_MARK_MEMBER_NAME(requestHeaders,"requestHeaders");
	HX_MARK_MEMBER_NAME(url,"url");
	HX_MARK_MEMBER_NAME(userAgent,"userAgent");
	HX_MARK_END_CLASS();
}

void URLRequest_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(contentType,"contentType");
	HX_VISIT_MEMBER_NAME(data,"data");
	HX_VISIT_MEMBER_NAME(method,"method");
	HX_VISIT_MEMBER_NAME(requestHeaders,"requestHeaders");
	HX_VISIT_MEMBER_NAME(url,"url");
	HX_VISIT_MEMBER_NAME(userAgent,"userAgent");
}

Dynamic URLRequest_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"url") ) { return url; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { return data; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"method") ) { return method; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"userAgent") ) { return userAgent; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"contentType") ) { return contentType; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"requestHeaders") ) { return requestHeaders; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"formatRequestHeaders") ) { return formatRequestHeaders_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic URLRequest_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"url") ) { url=inValue.Cast< ::String >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { data=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"method") ) { method=inValue.Cast< ::String >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"userAgent") ) { userAgent=inValue.Cast< ::String >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"contentType") ) { contentType=inValue.Cast< ::String >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"requestHeaders") ) { requestHeaders=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void URLRequest_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("contentType","\x93","\x3c","\x7b","\x2a"));
	outFields->push(HX_HCSTRING("data","\x2a","\x56","\x63","\x42"));
	outFields->push(HX_HCSTRING("method","\xe1","\xf6","\x5a","\x09"));
	outFields->push(HX_HCSTRING("requestHeaders","\xb7","\xb2","\x4f","\xdc"));
	outFields->push(HX_HCSTRING("url","\x6f","\x2b","\x59","\x00"));
	outFields->push(HX_HCSTRING("userAgent","\x7a","\xf0","\x12","\xc8"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(URLRequest_obj,contentType),HX_HCSTRING("contentType","\x93","\x3c","\x7b","\x2a")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(URLRequest_obj,data),HX_HCSTRING("data","\x2a","\x56","\x63","\x42")},
	{hx::fsString,(int)offsetof(URLRequest_obj,method),HX_HCSTRING("method","\xe1","\xf6","\x5a","\x09")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(URLRequest_obj,requestHeaders),HX_HCSTRING("requestHeaders","\xb7","\xb2","\x4f","\xdc")},
	{hx::fsString,(int)offsetof(URLRequest_obj,url),HX_HCSTRING("url","\x6f","\x2b","\x59","\x00")},
	{hx::fsString,(int)offsetof(URLRequest_obj,userAgent),HX_HCSTRING("userAgent","\x7a","\xf0","\x12","\xc8")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("contentType","\x93","\x3c","\x7b","\x2a"),
	HX_HCSTRING("data","\x2a","\x56","\x63","\x42"),
	HX_HCSTRING("method","\xe1","\xf6","\x5a","\x09"),
	HX_HCSTRING("requestHeaders","\xb7","\xb2","\x4f","\xdc"),
	HX_HCSTRING("url","\x6f","\x2b","\x59","\x00"),
	HX_HCSTRING("userAgent","\x7a","\xf0","\x12","\xc8"),
	HX_HCSTRING("formatRequestHeaders","\x4e","\x68","\xff","\x70"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(URLRequest_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(URLRequest_obj::__mClass,"__mClass");
};

#endif

hx::Class URLRequest_obj::__mClass;

void URLRequest_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.net.URLRequest","\x4f","\x73","\x1e","\xca");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< URLRequest_obj >;
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
} // end namespace net
