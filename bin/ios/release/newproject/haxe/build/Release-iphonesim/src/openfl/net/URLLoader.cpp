#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_app_Event_Dynamic_Void
#include <lime/app/Event_Dynamic_Void.h>
#endif
#ifndef INCLUDED_lime_net_curl_CURLEasy
#include <lime/net/curl/CURLEasy.h>
#endif
#ifndef INCLUDED_lime_system_BackgroundWorker
#include <lime/system/BackgroundWorker.h>
#endif
#ifndef INCLUDED_lime_utils_Bytes
#include <lime/utils/Bytes.h>
#endif
#ifndef INCLUDED_openfl_events_ErrorEvent
#include <openfl/events/ErrorEvent.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_HTTPStatusEvent
#include <openfl/events/HTTPStatusEvent.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IOErrorEvent
#include <openfl/events/IOErrorEvent.h>
#endif
#ifndef INCLUDED_openfl_events_ProgressEvent
#include <openfl/events/ProgressEvent.h>
#endif
#ifndef INCLUDED_openfl_events_SecurityErrorEvent
#include <openfl/events/SecurityErrorEvent.h>
#endif
#ifndef INCLUDED_openfl_events_TextEvent
#include <openfl/events/TextEvent.h>
#endif
#ifndef INCLUDED_openfl_net_URLLoader
#include <openfl/net/URLLoader.h>
#endif
#ifndef INCLUDED_openfl_net_URLRequest
#include <openfl/net/URLRequest.h>
#endif
#ifndef INCLUDED_openfl_net_URLRequestHeader
#include <openfl/net/URLRequestHeader.h>
#endif
#ifndef INCLUDED_openfl_net_URLVariables
#include <openfl/net/URLVariables.h>
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
#ifndef INCLUDED_openfl_utils__ByteArray_ByteArray_Impl_
#include <openfl/utils/_ByteArray/ByteArray_Impl_.h>
#endif
namespace openfl{
namespace net{

Void URLLoader_obj::__construct(::openfl::net::URLRequest request)
{
HX_STACK_FRAME("openfl.net.URLLoader","new",0xb8a6da85,"openfl.net.URLLoader.new","openfl/net/URLLoader.hx",51,0x11daec0d)
HX_STACK_THIS(this)
HX_STACK_ARG(request,"request")
{
	HX_STACK_LINE(53)
	super::__construct(null());
	HX_STACK_LINE(55)
	this->bytesLoaded = (int)0;
	HX_STACK_LINE(56)
	this->bytesTotal = (int)0;
	HX_STACK_LINE(57)
	this->set_dataFormat(((Dynamic)((int)1)));
	HX_STACK_LINE(60)
	::openfl::utils::ByteArrayData tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(60)
	{
		HX_STACK_LINE(60)
		int length = (int)0;		HX_STACK_VAR(length,"length");
		HX_STACK_LINE(60)
		::openfl::utils::ByteArrayData tmp1 = ::openfl::utils::ByteArrayData_obj::__new(length);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(60)
		tmp = tmp1;
	}
	HX_STACK_LINE(60)
	this->__data = tmp;
	HX_STACK_LINE(61)
	Float tmp1 = ::lime::net::curl::CURLEasy_obj::init();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(61)
	this->__curl = tmp1;
	HX_STACK_LINE(64)
	bool tmp2 = (request != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(64)
	if ((tmp2)){
		HX_STACK_LINE(66)
		::openfl::net::URLRequest tmp3 = request;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(66)
		this->load(tmp3);
	}
}
;
	return null();
}

//URLLoader_obj::~URLLoader_obj() { }

Dynamic URLLoader_obj::__CreateEmpty() { return  new URLLoader_obj; }
hx::ObjectPtr< URLLoader_obj > URLLoader_obj::__new(::openfl::net::URLRequest request)
{  hx::ObjectPtr< URLLoader_obj > _result_ = new URLLoader_obj();
	_result_->__construct(request);
	return _result_;}

Dynamic URLLoader_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< URLLoader_obj > _result_ = new URLLoader_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void URLLoader_obj::close( ){
{
		HX_STACK_FRAME("openfl.net.URLLoader","close",0x0328b51d,"openfl.net.URLLoader.close","openfl/net/URLLoader.hx",73,0x11daec0d)
		HX_STACK_THIS(this)
		HX_STACK_LINE(76)
		Float tmp = this->__curl;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(76)
		::lime::net::curl::CURLEasy_obj::cleanup(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(URLLoader_obj,close,(void))

HX_BEGIN_DEFAULT_FUNC(__default_getData,URLLoader_obj)
Dynamic run(){
	HX_STACK_FRAME("openfl.net.URLLoader","getData",0x42598685,"openfl.net.URLLoader.getData","openfl/net/URLLoader.hx",84,0x11daec0d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(84)
	return null();
}
HX_END_LOCAL_FUNC0(return )
HX_END_DEFAULT_FUNC

Void URLLoader_obj::load( ::openfl::net::URLRequest request){
{
		HX_STACK_FRAME("openfl.net.URLLoader","load",0xd80d7061,"openfl.net.URLLoader.load","openfl/net/URLLoader.hx",89,0x11daec0d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(request,"request")
		HX_STACK_LINE(89)
		::openfl::net::URLLoader _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(94)
		bool tmp = (request->url != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(94)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(94)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(94)
		if ((tmp1)){
			HX_STACK_LINE(94)
			int tmp3 = request->url.indexOf(HX_HCSTRING("http://","\x52","\x75","\xcd","\x5a"),null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(94)
			int tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(94)
			int tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(94)
			int tmp6 = (int)-1;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(94)
			int tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(94)
			int tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(94)
			tmp2 = (tmp5 == tmp8);
		}
		else{
			HX_STACK_LINE(94)
			tmp2 = false;
		}
		HX_STACK_LINE(94)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(94)
		if ((tmp2)){
			HX_STACK_LINE(94)
			int tmp4 = request->url.indexOf(HX_HCSTRING("https://","\xcf","\xb4","\xae","\x3e"),null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(94)
			int tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(94)
			tmp3 = (tmp5 == (int)-1);
		}
		else{
			HX_STACK_LINE(94)
			tmp3 = false;
		}
		HX_STACK_LINE(94)
		if ((tmp3)){
			HX_STACK_LINE(96)
			::lime::_system::BackgroundWorker tmp4 = ::lime::_system::BackgroundWorker_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(96)
			::lime::_system::BackgroundWorker worker = tmp4;		HX_STACK_VAR(worker,"worker");

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::lime::_system::BackgroundWorker,worker,::openfl::net::URLRequest,request)
			int __ArgCount() const { return 1; }
			Void run(Dynamic _){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","openfl/net/URLLoader.hx",97,0x11daec0d)
				HX_STACK_ARG(_,"_")
				{
					HX_STACK_LINE(99)
					::String path = request->url;		HX_STACK_VAR(path,"path");
					HX_STACK_LINE(100)
					int tmp5 = path.indexOf(HX_HCSTRING("?","\x3f","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(100)
					int index = tmp5;		HX_STACK_VAR(index,"index");
					HX_STACK_LINE(102)
					bool tmp6 = (index > (int)-1);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(102)
					if ((tmp6)){
						HX_STACK_LINE(104)
						int tmp7 = index;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(104)
						::String tmp8 = path.substring((int)0,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(104)
						path = tmp8;
					}
					HX_STACK_LINE(108)
					::String tmp7 = path;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(108)
					::lime::utils::Bytes tmp8 = ::lime::utils::Bytes_obj::readFile(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(108)
					::openfl::utils::ByteArrayData tmp9 = ::openfl::utils::_ByteArray::ByteArray_Impl__obj::fromArrayBuffer(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(108)
					::openfl::utils::ByteArrayData bytes = tmp9;		HX_STACK_VAR(bytes,"bytes");
					HX_STACK_LINE(109)
					::openfl::utils::ByteArrayData tmp10 = bytes;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(109)
					worker->__Field(HX_HCSTRING("sendComplete","\x21","\xd2","\x84","\xc0"), hx::paccDynamic )(tmp10);
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			HX_STACK_LINE(97)
			worker->__Field(HX_HCSTRING("doWork","\xfc","\xa6","\x00","\x1f"), hx::paccDynamic )->__Field(HX_HCSTRING("add","\x21","\xf2","\x49","\x00"), hx::paccDynamic )( Dynamic(new _Function_2_1(worker,request)),null(),null());

			HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_2,::openfl::net::URLLoader,_g)
			int __ArgCount() const { return 1; }
			Void run(::openfl::utils::ByteArrayData bytes){
				HX_STACK_FRAME("*","_Function_2_2",0x5201af79,"*._Function_2_2","openfl/net/URLLoader.hx",112,0x11daec0d)
				HX_STACK_ARG(bytes,"bytes")
				{
					HX_STACK_LINE(114)
					bool tmp5 = (bytes != null());		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(114)
					if ((tmp5)){
						HX_STACK_LINE(116)
						{
							HX_STACK_LINE(116)
							Dynamic _g1 = _g->dataFormat;		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(116)
							Dynamic tmp6 = _g1;		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(116)
							switch( (int)(tmp6)){
								case (int)0: {
									HX_STACK_LINE(118)
									_g->data = bytes;
								}
								;break;
								default: {
									HX_STACK_LINE(119)
									::openfl::utils::ByteArrayData tmp7 = bytes;		HX_STACK_VAR(tmp7,"tmp7");
									HX_STACK_LINE(119)
									int tmp8 = ::openfl::utils::_ByteArray::ByteArray_Impl__obj::get_length(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
									HX_STACK_LINE(119)
									::String tmp9 = bytes->readUTFBytes(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
									HX_STACK_LINE(119)
									_g->data = tmp9;
								}
							}
						}
						HX_STACK_LINE(123)
						::openfl::events::Event tmp6 = ::openfl::events::Event_obj::__new(HX_HCSTRING("complete","\xb9","\x00","\xc8","\x7f"),null(),null());		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(123)
						::openfl::events::Event evt = tmp6;		HX_STACK_VAR(evt,"evt");
						HX_STACK_LINE(124)
						evt->currentTarget = _g;
						HX_STACK_LINE(125)
						::openfl::events::Event tmp7 = evt;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(125)
						_g->dispatchEvent(tmp7);
					}
					else{
						HX_STACK_LINE(129)
						::openfl::events::IOErrorEvent tmp6 = ::openfl::events::IOErrorEvent_obj::__new(HX_HCSTRING("ioError","\x02","\xfe","\x41","\x76"),null(),null(),null(),null());		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(129)
						::openfl::events::IOErrorEvent evt = tmp6;		HX_STACK_VAR(evt,"evt");
						HX_STACK_LINE(130)
						evt->currentTarget = _g;
						HX_STACK_LINE(131)
						::openfl::events::IOErrorEvent tmp7 = evt;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(131)
						_g->dispatchEvent(tmp7);
					}
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			HX_STACK_LINE(112)
			worker->__Field(HX_HCSTRING("onComplete","\xf8","\xd4","\x7e","\x5d"), hx::paccDynamic )->__Field(HX_HCSTRING("add","\x21","\xf2","\x49","\x00"), hx::paccDynamic )( Dynamic(new _Function_2_2(_g)),null(),null());
			HX_STACK_LINE(136)
			worker->__Field(HX_HCSTRING("run","\x4b","\xe7","\x56","\x00"), hx::paccDynamic )(null());
		}
		else{
			HX_STACK_LINE(142)
			::String tmp4 = request->url;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(142)
			::String tmp5 = request->method;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(142)
			Dynamic tmp6 = ::openfl::net::_URLRequestMethod::URLRequestMethod_Impl__obj::fromString(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(142)
			Dynamic tmp7 = request->data;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(142)
			this->requestUrl(tmp4,tmp6,tmp7,request->formatRequestHeaders());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(URLLoader_obj,load,(void))

::openfl::utils::ByteArrayData URLLoader_obj::prepareData( Dynamic data){
	HX_STACK_FRAME("openfl.net.URLLoader","prepareData",0x9b201a76,"openfl.net.URLLoader.prepareData","openfl/net/URLLoader.hx",317,0x11daec0d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(data,"data")
	HX_STACK_LINE(319)
	::openfl::utils::ByteArrayData tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(319)
	{
		HX_STACK_LINE(319)
		int length = (int)0;		HX_STACK_VAR(length,"length");
		HX_STACK_LINE(319)
		::openfl::utils::ByteArrayData tmp1 = ::openfl::utils::ByteArrayData_obj::__new(length);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(319)
		tmp = tmp1;
	}
	HX_STACK_LINE(319)
	::openfl::utils::ByteArrayData uri = tmp;		HX_STACK_VAR(uri,"uri");
	HX_STACK_LINE(321)
	Dynamic tmp1 = data;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(321)
	bool tmp2 = ::Std_obj::is(tmp1,hx::ClassOf< ::openfl::utils::ByteArrayData >());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(321)
	if ((tmp2)){
		HX_STACK_LINE(323)
		::openfl::utils::ByteArrayData data1 = ((::openfl::utils::ByteArrayData)(data));		HX_STACK_VAR(data1,"data1");
		HX_STACK_LINE(324)
		uri = data1;
	}
	else{
		HX_STACK_LINE(326)
		Dynamic tmp3 = data;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(326)
		bool tmp4 = ::Std_obj::is(tmp3,hx::ClassOf< ::openfl::net::URLVariables >());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(326)
		if ((tmp4)){
			HX_STACK_LINE(328)
			::openfl::net::URLVariables data1 = ((::openfl::net::URLVariables)(data));		HX_STACK_VAR(data1,"data1");
			HX_STACK_LINE(329)
			::String tmp5 = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(331)
			{
				HX_STACK_LINE(331)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(331)
				::openfl::net::URLVariables tmp6 = data1;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(331)
				Array< ::String > _g1 = ::Reflect_obj::fields(tmp6);		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(331)
				while((true)){
					HX_STACK_LINE(331)
					bool tmp7 = (_g < _g1->length);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(331)
					bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(331)
					if ((tmp8)){
						HX_STACK_LINE(331)
						break;
					}
					HX_STACK_LINE(331)
					::String tmp9 = _g1->__get(_g);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(331)
					::String p = tmp9;		HX_STACK_VAR(p,"p");
					HX_STACK_LINE(331)
					++(_g);
					HX_STACK_LINE(333)
					bool tmp10 = (tmp5.length != (int)0);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(333)
					if ((tmp10)){
						HX_STACK_LINE(333)
						hx::AddEq(tmp5,HX_HCSTRING("&","\x26","\x00","\x00","\x00"));
					}
					HX_STACK_LINE(334)
					::String tmp11 = p;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(334)
					::String tmp12 = ::StringTools_obj::urlEncode(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(334)
					::String tmp13 = (tmp12 + HX_HCSTRING("=","\x3d","\x00","\x00","\x00"));		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(334)
					::openfl::net::URLVariables tmp14 = data1;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(334)
					::String tmp15 = p;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(334)
					Dynamic tmp16 = ::Reflect_obj::field(tmp14,tmp15);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(334)
					::String tmp17 = ::Std_obj::string(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(334)
					::String tmp18 = ::StringTools_obj::urlEncode(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(334)
					::String tmp19 = (tmp13 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(334)
					hx::AddEq(tmp5,tmp19);
				}
			}
			HX_STACK_LINE(338)
			::String tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(338)
			uri->writeUTFBytes(tmp6);
		}
		else{
			HX_STACK_LINE(342)
			bool tmp5 = (data != null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(342)
			if ((tmp5)){
				HX_STACK_LINE(344)
				Dynamic tmp6 = data;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(344)
				::String tmp7 = ::Std_obj::string(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(344)
				uri->writeUTFBytes(tmp7);
			}
		}
	}
	HX_STACK_LINE(350)
	::openfl::utils::ByteArrayData tmp3 = uri;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(350)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(URLLoader_obj,prepareData,return )

Void URLLoader_obj::requestUrl( ::String url,Dynamic method,Dynamic data,Array< ::Dynamic > requestHeaders){
{
		HX_STACK_FRAME("openfl.net.URLLoader","requestUrl",0x85d5f3db,"openfl.net.URLLoader.requestUrl","openfl/net/URLLoader.hx",355,0x11daec0d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(url,"url")
		HX_STACK_ARG(method,"method")
		HX_STACK_ARG(data,"data")
		HX_STACK_ARG(requestHeaders,"requestHeaders")
		HX_STACK_LINE(355)
		::openfl::net::URLLoader _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(357)
		Dynamic tmp = data;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(357)
		::openfl::utils::ByteArrayData tmp1 = this->prepareData(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(357)
		::openfl::utils::ByteArrayData uri = tmp1;		HX_STACK_VAR(uri,"uri");
		HX_STACK_LINE(358)
		uri->position = (int)0;
		HX_STACK_LINE(360)
		::openfl::utils::ByteArrayData tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(360)
		{
			HX_STACK_LINE(360)
			int length = (int)0;		HX_STACK_VAR(length,"length");
			HX_STACK_LINE(360)
			::openfl::utils::ByteArrayData tmp3 = ::openfl::utils::ByteArrayData_obj::__new(length);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(360)
			tmp2 = tmp3;
		}
		HX_STACK_LINE(360)
		this->__data = tmp2;
		HX_STACK_LINE(361)
		this->bytesLoaded = (int)0;
		HX_STACK_LINE(362)
		this->bytesTotal = (int)0;
		HX_STACK_LINE(364)
		Float tmp3 = this->__curl;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(364)
		::lime::net::curl::CURLEasy_obj::reset(tmp3);
		HX_STACK_LINE(365)
		Float tmp4 = this->__curl;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(365)
		::String tmp5 = url;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(365)
		::lime::net::curl::CURLEasy_obj::setopt(tmp4,(int)10002,tmp5);
		HX_STACK_LINE(367)
		Dynamic tmp6 = method;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(367)
		switch( (int)(tmp6)){
			case (int)2: {
				HX_STACK_LINE(371)
				Float tmp7 = this->__curl;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(371)
				::lime::net::curl::CURLEasy_obj::setopt(tmp7,(int)44,true);
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(375)
				Float tmp7 = this->__curl;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(375)
				::lime::net::curl::CURLEasy_obj::setopt(tmp7,(int)80,true);
				HX_STACK_LINE(377)
				::openfl::utils::ByteArrayData tmp8 = uri;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(377)
				int tmp9 = ::openfl::utils::_ByteArray::ByteArray_Impl__obj::get_length(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(377)
				bool tmp10 = (tmp9 > (int)0);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(377)
				if ((tmp10)){
					HX_STACK_LINE(379)
					Float tmp11 = this->__curl;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(379)
					::String tmp12 = (url + HX_HCSTRING("?","\x3f","\x00","\x00","\x00"));		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(379)
					::openfl::utils::ByteArrayData tmp13 = uri;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(379)
					int tmp14 = ::openfl::utils::_ByteArray::ByteArray_Impl__obj::get_length(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(379)
					::String tmp15 = uri->readUTFBytes(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(379)
					::String tmp16 = (tmp12 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(379)
					::lime::net::curl::CURLEasy_obj::setopt(tmp11,(int)10002,tmp16);
				}
			}
			;break;
			case (int)4: {
				HX_STACK_LINE(385)
				Float tmp7 = this->__curl;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(385)
				::lime::net::curl::CURLEasy_obj::setopt(tmp7,(int)47,true);
				HX_STACK_LINE(386)
				Float tmp8 = this->__curl;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(386)
				Dynamic tmp9 = this->readFunction_dyn();		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(386)
				::openfl::utils::ByteArrayData tmp10 = uri;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(386)
				Dynamic tmp11;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(386)
				{
					HX_STACK_LINE(386)
					Dynamic f = tmp9;		HX_STACK_VAR(f,"f");
					HX_STACK_LINE(386)
					::openfl::utils::ByteArrayData a2 = tmp10;		HX_STACK_VAR(a2,"a2");

					HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_3_1,Dynamic,f,::openfl::utils::ByteArrayData,a2)
					int __ArgCount() const { return 1; }
					::lime::utils::Bytes run(int a1){
						HX_STACK_FRAME("*","_Function_3_1",0x520271b9,"*._Function_3_1","openfl/net/URLLoader.hx",386,0x11daec0d)
						HX_STACK_ARG(a1,"a1")
						{
							HX_STACK_LINE(386)
							int tmp12 = a1;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(386)
							::openfl::utils::ByteArrayData tmp13 = a2;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(386)
							::lime::utils::Bytes tmp14 = f(tmp12,tmp13).Cast< ::lime::utils::Bytes >();		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(386)
							return tmp14;
						}
						return null();
					}
					HX_END_LOCAL_FUNC1(return)

					HX_STACK_LINE(386)
					tmp11 =  Dynamic(new _Function_3_1(f,a2));
				}
				HX_STACK_LINE(386)
				::lime::net::curl::CURLEasy_obj::setopt(tmp8,(int)20012,tmp11);
				HX_STACK_LINE(387)
				Float tmp12 = this->__curl;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(387)
				::openfl::utils::ByteArrayData tmp13 = uri;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(387)
				int tmp14 = ::openfl::utils::_ByteArray::ByteArray_Impl__obj::get_length(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(387)
				::lime::net::curl::CURLEasy_obj::setopt(tmp12,(int)60,tmp14);
				HX_STACK_LINE(388)
				Float tmp15 = this->__curl;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(388)
				::openfl::utils::ByteArrayData tmp16 = uri;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(388)
				int tmp17 = ::openfl::utils::_ByteArray::ByteArray_Impl__obj::get_length(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(388)
				::lime::net::curl::CURLEasy_obj::setopt(tmp15,(int)14,tmp17);
			}
			;break;
			case (int)5: {
				HX_STACK_LINE(392)
				Float tmp7 = this->__curl;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(392)
				::lime::net::curl::CURLEasy_obj::setopt(tmp7,(int)46,true);
				HX_STACK_LINE(393)
				Float tmp8 = this->__curl;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(393)
				Dynamic tmp9 = this->readFunction_dyn();		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(393)
				::openfl::utils::ByteArrayData tmp10 = uri;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(393)
				Dynamic tmp11;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(393)
				{
					HX_STACK_LINE(393)
					Dynamic f = tmp9;		HX_STACK_VAR(f,"f");
					HX_STACK_LINE(393)
					::openfl::utils::ByteArrayData a2 = tmp10;		HX_STACK_VAR(a2,"a2");

					HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_3_1,Dynamic,f,::openfl::utils::ByteArrayData,a2)
					int __ArgCount() const { return 1; }
					::lime::utils::Bytes run(int a1){
						HX_STACK_FRAME("*","_Function_3_1",0x520271b9,"*._Function_3_1","openfl/net/URLLoader.hx",393,0x11daec0d)
						HX_STACK_ARG(a1,"a1")
						{
							HX_STACK_LINE(393)
							int tmp12 = a1;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(393)
							::openfl::utils::ByteArrayData tmp13 = a2;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(393)
							::lime::utils::Bytes tmp14 = f(tmp12,tmp13).Cast< ::lime::utils::Bytes >();		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(393)
							return tmp14;
						}
						return null();
					}
					HX_END_LOCAL_FUNC1(return)

					HX_STACK_LINE(393)
					tmp11 =  Dynamic(new _Function_3_1(f,a2));
				}
				HX_STACK_LINE(393)
				::lime::net::curl::CURLEasy_obj::setopt(tmp8,(int)20012,tmp11);
				HX_STACK_LINE(394)
				Float tmp12 = this->__curl;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(394)
				::openfl::utils::ByteArrayData tmp13 = uri;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(394)
				int tmp14 = ::openfl::utils::_ByteArray::ByteArray_Impl__obj::get_length(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(394)
				::lime::net::curl::CURLEasy_obj::setopt(tmp12,(int)14,tmp14);
			}
			;break;
			default: {
				HX_STACK_LINE(397)
				Dynamic tmp7 = method;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(397)
				::String tmp8 = ::openfl::net::_URLRequestMethod::URLRequestMethod_Impl__obj::toString(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(397)
				::String reqMethod = tmp8;		HX_STACK_VAR(reqMethod,"reqMethod");
				HX_STACK_LINE(399)
				Float tmp9 = this->__curl;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(399)
				::String tmp10 = reqMethod;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(399)
				::lime::net::curl::CURLEasy_obj::setopt(tmp9,(int)10036,tmp10);
				HX_STACK_LINE(400)
				Float tmp11 = this->__curl;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(400)
				Dynamic tmp12 = this->readFunction_dyn();		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(400)
				::openfl::utils::ByteArrayData tmp13 = uri;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(400)
				Dynamic tmp14;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(400)
				{
					HX_STACK_LINE(400)
					Dynamic f = tmp12;		HX_STACK_VAR(f,"f");
					HX_STACK_LINE(400)
					::openfl::utils::ByteArrayData a2 = tmp13;		HX_STACK_VAR(a2,"a2");

					HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_3_1,Dynamic,f,::openfl::utils::ByteArrayData,a2)
					int __ArgCount() const { return 1; }
					::lime::utils::Bytes run(int a1){
						HX_STACK_FRAME("*","_Function_3_1",0x520271b9,"*._Function_3_1","openfl/net/URLLoader.hx",400,0x11daec0d)
						HX_STACK_ARG(a1,"a1")
						{
							HX_STACK_LINE(400)
							int tmp15 = a1;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(400)
							::openfl::utils::ByteArrayData tmp16 = a2;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(400)
							::lime::utils::Bytes tmp17 = f(tmp15,tmp16).Cast< ::lime::utils::Bytes >();		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(400)
							return tmp17;
						}
						return null();
					}
					HX_END_LOCAL_FUNC1(return)

					HX_STACK_LINE(400)
					tmp14 =  Dynamic(new _Function_3_1(f,a2));
				}
				HX_STACK_LINE(400)
				::lime::net::curl::CURLEasy_obj::setopt(tmp11,(int)20012,tmp14);
				HX_STACK_LINE(401)
				Float tmp15 = this->__curl;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(401)
				::openfl::utils::ByteArrayData tmp16 = uri;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(401)
				int tmp17 = ::openfl::utils::_ByteArray::ByteArray_Impl__obj::get_length(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(401)
				::lime::net::curl::CURLEasy_obj::setopt(tmp15,(int)14,tmp17);
			}
		}
		HX_STACK_LINE(405)
		Array< ::String > headers = Array_obj< ::String >::__new();		HX_STACK_VAR(headers,"headers");
		HX_STACK_LINE(406)
		headers->push(HX_HCSTRING("Expect: ","\xdf","\xc4","\xe1","\x19"));
		HX_STACK_LINE(408)
		{
			HX_STACK_LINE(408)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(408)
			while((true)){
				HX_STACK_LINE(408)
				bool tmp7 = (_g1 < requestHeaders->length);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(408)
				bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(408)
				if ((tmp8)){
					HX_STACK_LINE(408)
					break;
				}
				HX_STACK_LINE(408)
				::openfl::net::URLRequestHeader tmp9 = requestHeaders->__get(_g1).StaticCast< ::openfl::net::URLRequestHeader >();		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(408)
				::openfl::net::URLRequestHeader requestHeader = tmp9;		HX_STACK_VAR(requestHeader,"requestHeader");
				HX_STACK_LINE(408)
				++(_g1);
				HX_STACK_LINE(410)
				::String tmp10 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + requestHeader->name);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(410)
				::String tmp11 = (tmp10 + HX_HCSTRING(": ","\xa6","\x32","\x00","\x00"));		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(410)
				::String tmp12 = requestHeader->value;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(410)
				::String tmp13 = (tmp11 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(410)
				headers->push(tmp13);
			}
		}
		HX_STACK_LINE(414)
		Float tmp7 = this->__curl;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(414)
		::lime::net::curl::CURLEasy_obj::setopt(tmp7,(int)52,true);
		HX_STACK_LINE(415)
		Float tmp8 = this->__curl;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(415)
		::lime::net::curl::CURLEasy_obj::setopt(tmp8,(int)58,true);
		HX_STACK_LINE(416)
		Float tmp9 = this->__curl;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(416)
		::lime::net::curl::CURLEasy_obj::setopt(tmp9,(int)10023,headers);
		HX_STACK_LINE(418)
		Float tmp10 = this->__curl;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(418)
		Dynamic tmp11 = this->progressFunction_dyn();		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(418)
		::lime::net::curl::CURLEasy_obj::setopt(tmp10,(int)20056,tmp11);
		HX_STACK_LINE(419)
		Float tmp12 = this->__curl;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(419)
		Dynamic tmp13 = this->writeFunction_dyn();		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(419)
		::lime::net::curl::CURLEasy_obj::setopt(tmp12,(int)20011,tmp13);
		HX_STACK_LINE(420)
		Float tmp14 = this->__curl;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(420)
		Dynamic tmp15 = this->headerFunction_dyn();		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(420)
		::lime::net::curl::CURLEasy_obj::setopt(tmp14,(int)20079,tmp15);
		HX_STACK_LINE(422)
		Float tmp16 = this->__curl;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(422)
		::lime::net::curl::CURLEasy_obj::setopt(tmp16,(int)64,false);
		HX_STACK_LINE(423)
		Float tmp17 = this->__curl;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(423)
		::lime::net::curl::CURLEasy_obj::setopt(tmp17,(int)81,(int)0);
		HX_STACK_LINE(424)
		Float tmp18 = this->__curl;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(424)
		::lime::net::curl::CURLEasy_obj::setopt(tmp18,(int)10018,HX_HCSTRING("libcurl-agent/1.0","\x4d","\x41","\xcc","\xd3"));
		HX_STACK_LINE(425)
		Float tmp19 = this->__curl;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(425)
		::lime::net::curl::CURLEasy_obj::setopt(tmp19,(int)78,(int)30);
		HX_STACK_LINE(426)
		Float tmp20 = this->__curl;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(426)
		Dynamic tmp21 = this->dataFormat;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(426)
		bool tmp22 = (tmp21 == ((Dynamic)((int)0)));		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(426)
		Dynamic tmp23;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(426)
		if ((tmp22)){
			HX_STACK_LINE(426)
			tmp23 = (int)0;
		}
		else{
			HX_STACK_LINE(426)
			tmp23 = (int)1;
		}
		HX_STACK_LINE(426)
		::lime::net::curl::CURLEasy_obj::setopt(tmp20,(int)53,tmp23);
		HX_STACK_LINE(428)
		::lime::_system::BackgroundWorker tmp24 = ::lime::_system::BackgroundWorker_obj::__new();		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(428)
		::lime::_system::BackgroundWorker worker = tmp24;		HX_STACK_VAR(worker,"worker");

		HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_1_1,::openfl::net::URLLoader,_g,::lime::_system::BackgroundWorker,worker)
		int __ArgCount() const { return 1; }
		Void run(Dynamic _){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","openfl/net/URLLoader.hx",429,0x11daec0d)
			HX_STACK_ARG(_,"_")
			{
				HX_STACK_LINE(431)
				Float tmp25 = _g->__curl;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(431)
				int tmp26 = ::lime::net::curl::CURLEasy_obj::perform(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(431)
				int result = tmp26;		HX_STACK_VAR(result,"result");
				HX_STACK_LINE(432)
				int tmp27 = result;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(432)
				worker->__Field(HX_HCSTRING("sendComplete","\x21","\xd2","\x84","\xc0"), hx::paccDynamic )(tmp27);
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(429)
		worker->__Field(HX_HCSTRING("doWork","\xfc","\xa6","\x00","\x1f"), hx::paccDynamic )->__Field(HX_HCSTRING("add","\x21","\xf2","\x49","\x00"), hx::paccDynamic )( Dynamic(new _Function_1_1(_g,worker)),null(),null());

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_2,::openfl::net::URLLoader,_g)
		int __ArgCount() const { return 1; }
		Void run(int result){
			HX_STACK_FRAME("*","_Function_1_2",0x5200ed38,"*._Function_1_2","openfl/net/URLLoader.hx",435,0x11daec0d)
			HX_STACK_ARG(result,"result")
			{
				HX_STACK_LINE(437)
				Float tmp25 = _g->__curl;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(437)
				Dynamic tmp26 = ::lime::net::curl::CURLEasy_obj::getinfo(tmp25,(int)2097154);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(437)
				::String responseCode = tmp26;		HX_STACK_VAR(responseCode,"responseCode");
				HX_STACK_LINE(439)
				bool tmp27 = (result == (int)0);		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(439)
				if ((tmp27)){
					HX_STACK_LINE(441)
					{
						HX_STACK_LINE(441)
						Dynamic _g1 = _g->dataFormat;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(441)
						Dynamic tmp28 = _g1;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(441)
						switch( (int)(tmp28)){
							case (int)0: {
								HX_STACK_LINE(445)
								_g->data = _g->__data;
							}
							;break;
							default: {
								HX_STACK_LINE(449)
								_g->__data->position = (int)0;
								HX_STACK_LINE(450)
								::openfl::utils::ByteArrayData tmp29 = _g->__data;		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(450)
								int tmp30 = ::openfl::utils::_ByteArray::ByteArray_Impl__obj::get_length(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(450)
								::String tmp31 = _g->__data->readUTFBytes(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(450)
								_g->data = tmp31;
							}
						}
					}
					HX_STACK_LINE(454)
					::String tmp28 = responseCode;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(454)
					Dynamic tmp29 = ::Std_obj::parseInt(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(454)
					_g->onStatus(tmp29);
					HX_STACK_LINE(456)
					::openfl::events::Event tmp30 = ::openfl::events::Event_obj::__new(HX_HCSTRING("complete","\xb9","\x00","\xc8","\x7f"),null(),null());		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(456)
					::openfl::events::Event evt = tmp30;		HX_STACK_VAR(evt,"evt");
					HX_STACK_LINE(457)
					evt->currentTarget = _g;
					HX_STACK_LINE(458)
					::openfl::events::Event tmp31 = evt;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(458)
					_g->dispatchEvent(tmp31);
				}
				else{
					HX_STACK_LINE(462)
					::String tmp28 = (HX_HCSTRING("Problem with curl: ","\x0b","\xcd","\x8d","\x69") + result);		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(462)
					_g->onError(tmp28);
				}
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(435)
		worker->__Field(HX_HCSTRING("onComplete","\xf8","\xd4","\x7e","\x5d"), hx::paccDynamic )->__Field(HX_HCSTRING("add","\x21","\xf2","\x49","\x00"), hx::paccDynamic )( Dynamic(new _Function_1_2(_g)),null(),null());
		HX_STACK_LINE(467)
		worker->__Field(HX_HCSTRING("run","\x4b","\xe7","\x56","\x00"), hx::paccDynamic )(null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(URLLoader_obj,requestUrl,(void))

int URLLoader_obj::writeFunction( ::haxe::io::Bytes output,int size,int nmemb){
	HX_STACK_FRAME("openfl.net.URLLoader","writeFunction",0xa65d557c,"openfl.net.URLLoader.writeFunction","openfl/net/URLLoader.hx",472,0x11daec0d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(output,"output")
	HX_STACK_ARG(size,"size")
	HX_STACK_ARG(nmemb,"nmemb")
	HX_STACK_LINE(474)
	::openfl::utils::ByteArrayData tmp = this->__data;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(474)
	::haxe::io::Bytes tmp1 = output;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(474)
	::openfl::utils::ByteArrayData tmp2 = ::openfl::utils::_ByteArray::ByteArray_Impl__obj::fromBytes(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(474)
	tmp->writeBytes(tmp2,null(),null());
	HX_STACK_LINE(475)
	int tmp3 = (size * nmemb);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(475)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC3(URLLoader_obj,writeFunction,return )

int URLLoader_obj::headerFunction( ::haxe::io::Bytes output,int size,int nmemb){
	HX_STACK_FRAME("openfl.net.URLLoader","headerFunction",0x642c53c0,"openfl.net.URLLoader.headerFunction","openfl/net/URLLoader.hx",480,0x11daec0d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(output,"output")
	HX_STACK_ARG(size,"size")
	HX_STACK_ARG(nmemb,"nmemb")
	HX_STACK_LINE(483)
	int tmp = (size * nmemb);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(483)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC3(URLLoader_obj,headerFunction,return )

int URLLoader_obj::progressFunction( Float dltotal,Float dlnow,Float uptotal,Float upnow){
	HX_STACK_FRAME("openfl.net.URLLoader","progressFunction",0x5fbe16a0,"openfl.net.URLLoader.progressFunction","openfl/net/URLLoader.hx",488,0x11daec0d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(dltotal,"dltotal")
	HX_STACK_ARG(dlnow,"dlnow")
	HX_STACK_ARG(uptotal,"uptotal")
	HX_STACK_ARG(upnow,"upnow")
	HX_STACK_LINE(490)
	Float tmp = upnow;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(490)
	int tmp1 = this->bytesLoaded;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(490)
	bool tmp2 = (tmp > tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(490)
	bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(490)
	bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(490)
	bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(490)
	if ((tmp4)){
		HX_STACK_LINE(490)
		Float tmp6 = dlnow;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(490)
		int tmp7 = this->bytesLoaded;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(490)
		int tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(490)
		int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(490)
		tmp5 = (tmp6 > tmp9);
	}
	else{
		HX_STACK_LINE(490)
		tmp5 = true;
	}
	HX_STACK_LINE(490)
	bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(490)
	bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(490)
	bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(490)
	if ((tmp7)){
		HX_STACK_LINE(490)
		Float tmp9 = uptotal;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(490)
		int tmp10 = this->bytesTotal;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(490)
		int tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(490)
		int tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(490)
		tmp8 = (tmp9 > tmp12);
	}
	else{
		HX_STACK_LINE(490)
		tmp8 = true;
	}
	HX_STACK_LINE(490)
	bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(490)
	bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(490)
	if ((tmp9)){
		HX_STACK_LINE(490)
		Float tmp11 = dltotal;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(490)
		int tmp12 = this->bytesTotal;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(490)
		int tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(490)
		tmp10 = (tmp11 > tmp13);
	}
	else{
		HX_STACK_LINE(490)
		tmp10 = true;
	}
	HX_STACK_LINE(490)
	if ((tmp10)){
		HX_STACK_LINE(492)
		Float tmp11 = upnow;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(492)
		int tmp12 = this->bytesLoaded;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(492)
		bool tmp13 = (tmp11 > tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(492)
		if ((tmp13)){
			HX_STACK_LINE(492)
			Float tmp14 = upnow;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(492)
			int tmp15 = ::Std_obj::_int(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(492)
			this->bytesLoaded = tmp15;
		}
		HX_STACK_LINE(493)
		Float tmp14 = dlnow;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(493)
		int tmp15 = this->bytesLoaded;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(493)
		bool tmp16 = (tmp14 > tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(493)
		if ((tmp16)){
			HX_STACK_LINE(493)
			Float tmp17 = dlnow;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(493)
			int tmp18 = ::Std_obj::_int(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(493)
			this->bytesLoaded = tmp18;
		}
		HX_STACK_LINE(494)
		Float tmp17 = uptotal;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(494)
		int tmp18 = this->bytesTotal;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(494)
		bool tmp19 = (tmp17 > tmp18);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(494)
		if ((tmp19)){
			HX_STACK_LINE(494)
			Float tmp20 = uptotal;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(494)
			int tmp21 = ::Std_obj::_int(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(494)
			this->bytesTotal = tmp21;
		}
		HX_STACK_LINE(495)
		Float tmp20 = dltotal;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(495)
		int tmp21 = this->bytesTotal;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(495)
		bool tmp22 = (tmp20 > tmp21);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(495)
		if ((tmp22)){
			HX_STACK_LINE(495)
			Float tmp23 = dltotal;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(495)
			int tmp24 = ::Std_obj::_int(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(495)
			this->bytesTotal = tmp24;
		}
		HX_STACK_LINE(497)
		::openfl::events::ProgressEvent tmp23 = ::openfl::events::ProgressEvent_obj::__new(HX_HCSTRING("progress","\xad","\xf7","\x2a","\x86"),null(),null(),null(),null());		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(497)
		::openfl::events::ProgressEvent evt = tmp23;		HX_STACK_VAR(evt,"evt");
		HX_STACK_LINE(498)
		evt->currentTarget = hx::ObjectPtr<OBJ_>(this);
		HX_STACK_LINE(499)
		int tmp24 = this->bytesLoaded;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(499)
		evt->bytesLoaded = tmp24;
		HX_STACK_LINE(500)
		int tmp25 = this->bytesTotal;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(500)
		evt->bytesTotal = tmp25;
		HX_STACK_LINE(501)
		::openfl::events::ProgressEvent tmp26 = evt;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(501)
		this->dispatchEvent(tmp26);
	}
	HX_STACK_LINE(505)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC4(URLLoader_obj,progressFunction,return )

::lime::utils::Bytes URLLoader_obj::readFunction( int max,::openfl::utils::ByteArrayData input){
	HX_STACK_FRAME("openfl.net.URLLoader","readFunction",0x284701c9,"openfl.net.URLLoader.readFunction","openfl/net/URLLoader.hx",510,0x11daec0d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(max,"max")
	HX_STACK_ARG(input,"input")
	HX_STACK_LINE(512)
	::openfl::utils::ByteArrayData tmp = input;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(512)
	::lime::utils::Bytes tmp1 = ::openfl::utils::_ByteArray::ByteArray_Impl__obj::toLimeBytes(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(512)
	return tmp1;
	HX_STACK_LINE(512)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC2(URLLoader_obj,readFunction,return )

Void URLLoader_obj::onData( Dynamic _){
{
		HX_STACK_FRAME("openfl.net.URLLoader","onData",0x971179e4,"openfl.net.URLLoader.onData","openfl/net/URLLoader.hx",527,0x11daec0d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_,"_")
		HX_STACK_LINE(540)
		::openfl::events::Event tmp = ::openfl::events::Event_obj::__new(HX_HCSTRING("complete","\xb9","\x00","\xc8","\x7f"),null(),null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(540)
		::openfl::events::Event evt = tmp;		HX_STACK_VAR(evt,"evt");
		HX_STACK_LINE(541)
		evt->currentTarget = hx::ObjectPtr<OBJ_>(this);
		HX_STACK_LINE(542)
		::openfl::events::Event tmp1 = evt;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(542)
		this->dispatchEvent(tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(URLLoader_obj,onData,(void))

Void URLLoader_obj::onError( ::String msg){
{
		HX_STACK_FRAME("openfl.net.URLLoader","onError",0x36daeace,"openfl.net.URLLoader.onError","openfl/net/URLLoader.hx",547,0x11daec0d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(msg,"msg")
		HX_STACK_LINE(549)
		::openfl::events::IOErrorEvent tmp = ::openfl::events::IOErrorEvent_obj::__new(HX_HCSTRING("ioError","\x02","\xfe","\x41","\x76"),null(),null(),null(),null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(549)
		::openfl::events::IOErrorEvent evt = tmp;		HX_STACK_VAR(evt,"evt");
		HX_STACK_LINE(550)
		evt->text = msg;
		HX_STACK_LINE(551)
		evt->currentTarget = hx::ObjectPtr<OBJ_>(this);
		HX_STACK_LINE(552)
		::openfl::events::IOErrorEvent tmp1 = evt;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(552)
		this->dispatchEvent(tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(URLLoader_obj,onError,(void))

Void URLLoader_obj::onOpen( ){
{
		HX_STACK_FRAME("openfl.net.URLLoader","onOpen",0x9e622784,"openfl.net.URLLoader.onOpen","openfl/net/URLLoader.hx",557,0x11daec0d)
		HX_STACK_THIS(this)
		HX_STACK_LINE(559)
		::openfl::events::Event tmp = ::openfl::events::Event_obj::__new(HX_HCSTRING("open","\xca","\x03","\xb4","\x49"),null(),null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(559)
		::openfl::events::Event evt = tmp;		HX_STACK_VAR(evt,"evt");
		HX_STACK_LINE(560)
		evt->currentTarget = hx::ObjectPtr<OBJ_>(this);
		HX_STACK_LINE(561)
		::openfl::events::Event tmp1 = evt;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(561)
		this->dispatchEvent(tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(URLLoader_obj,onOpen,(void))

Void URLLoader_obj::onProgress( Dynamic event){
{
		HX_STACK_FRAME("openfl.net.URLLoader","onProgress",0xe8ae8067,"openfl.net.URLLoader.onProgress","openfl/net/URLLoader.hx",566,0x11daec0d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(568)
		::openfl::events::ProgressEvent tmp = ::openfl::events::ProgressEvent_obj::__new(HX_HCSTRING("progress","\xad","\xf7","\x2a","\x86"),null(),null(),null(),null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(568)
		::openfl::events::ProgressEvent evt = tmp;		HX_STACK_VAR(evt,"evt");
		HX_STACK_LINE(569)
		evt->currentTarget = hx::ObjectPtr<OBJ_>(this);
		HX_STACK_LINE(570)
		evt->bytesLoaded = event->__Field(HX_HCSTRING("loaded","\x05","\x48","\x6f","\x58"), hx::paccDynamic );
		HX_STACK_LINE(571)
		evt->bytesTotal = event->__Field(HX_HCSTRING("total","\xc4","\x53","\x32","\x14"), hx::paccDynamic );
		HX_STACK_LINE(572)
		::openfl::events::ProgressEvent tmp1 = evt;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(572)
		this->dispatchEvent(tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(URLLoader_obj,onProgress,(void))

Void URLLoader_obj::onSecurityError( ::String msg){
{
		HX_STACK_FRAME("openfl.net.URLLoader","onSecurityError",0x2c8cbdee,"openfl.net.URLLoader.onSecurityError","openfl/net/URLLoader.hx",577,0x11daec0d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(msg,"msg")
		HX_STACK_LINE(579)
		::openfl::events::SecurityErrorEvent tmp = ::openfl::events::SecurityErrorEvent_obj::__new(HX_HCSTRING("securityError","\xe8","\x28","\x7c","\xa2"),null(),null(),null(),null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(579)
		::openfl::events::SecurityErrorEvent evt = tmp;		HX_STACK_VAR(evt,"evt");
		HX_STACK_LINE(580)
		evt->text = msg;
		HX_STACK_LINE(581)
		evt->currentTarget = hx::ObjectPtr<OBJ_>(this);
		HX_STACK_LINE(582)
		::openfl::events::SecurityErrorEvent tmp1 = evt;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(582)
		this->dispatchEvent(tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(URLLoader_obj,onSecurityError,(void))

Void URLLoader_obj::onStatus( int status){
{
		HX_STACK_FRAME("openfl.net.URLLoader","onStatus",0x7d45ed6c,"openfl.net.URLLoader.onStatus","openfl/net/URLLoader.hx",587,0x11daec0d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(status,"status")
		HX_STACK_LINE(589)
		::openfl::events::HTTPStatusEvent tmp = ::openfl::events::HTTPStatusEvent_obj::__new(HX_HCSTRING("httpStatus","\xda","\x4c","\x74","\x0a"),false,false,status,null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(589)
		::openfl::events::HTTPStatusEvent evt = tmp;		HX_STACK_VAR(evt,"evt");
		HX_STACK_LINE(590)
		evt->currentTarget = hx::ObjectPtr<OBJ_>(this);
		HX_STACK_LINE(591)
		::openfl::events::HTTPStatusEvent tmp1 = evt;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(591)
		this->dispatchEvent(tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(URLLoader_obj,onStatus,(void))

Dynamic URLLoader_obj::set_dataFormat( Dynamic inputVal){
	HX_STACK_FRAME("openfl.net.URLLoader","set_dataFormat",0x4cc5d3b9,"openfl.net.URLLoader.set_dataFormat","openfl/net/URLLoader.hx",603,0x11daec0d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(inputVal,"inputVal")
	HX_STACK_LINE(621)
	Dynamic tmp = this->dataFormat = inputVal;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(621)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(URLLoader_obj,set_dataFormat,return )


URLLoader_obj::URLLoader_obj()
{
	getData = new __default_getData(this);
}

void URLLoader_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(URLLoader);
	HX_MARK_MEMBER_NAME(bytesLoaded,"bytesLoaded");
	HX_MARK_MEMBER_NAME(bytesTotal,"bytesTotal");
	HX_MARK_MEMBER_NAME(data,"data");
	HX_MARK_MEMBER_NAME(dataFormat,"dataFormat");
	HX_MARK_MEMBER_NAME(__curl,"__curl");
	HX_MARK_MEMBER_NAME(__data,"__data");
	HX_MARK_MEMBER_NAME(getData,"getData");
	::openfl::events::EventDispatcher_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void URLLoader_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(bytesLoaded,"bytesLoaded");
	HX_VISIT_MEMBER_NAME(bytesTotal,"bytesTotal");
	HX_VISIT_MEMBER_NAME(data,"data");
	HX_VISIT_MEMBER_NAME(dataFormat,"dataFormat");
	HX_VISIT_MEMBER_NAME(__curl,"__curl");
	HX_VISIT_MEMBER_NAME(__data,"__data");
	HX_VISIT_MEMBER_NAME(getData,"getData");
	::openfl::events::EventDispatcher_obj::__Visit(HX_VISIT_ARG);
}

Dynamic URLLoader_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { return data; }
		if (HX_FIELD_EQ(inName,"load") ) { return load_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"close") ) { return close_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"__curl") ) { return __curl; }
		if (HX_FIELD_EQ(inName,"__data") ) { return __data; }
		if (HX_FIELD_EQ(inName,"onData") ) { return onData_dyn(); }
		if (HX_FIELD_EQ(inName,"onOpen") ) { return onOpen_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getData") ) { return getData; }
		if (HX_FIELD_EQ(inName,"onError") ) { return onError_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"onStatus") ) { return onStatus_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bytesTotal") ) { return bytesTotal; }
		if (HX_FIELD_EQ(inName,"dataFormat") ) { return dataFormat; }
		if (HX_FIELD_EQ(inName,"requestUrl") ) { return requestUrl_dyn(); }
		if (HX_FIELD_EQ(inName,"onProgress") ) { return onProgress_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"bytesLoaded") ) { return bytesLoaded; }
		if (HX_FIELD_EQ(inName,"prepareData") ) { return prepareData_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"readFunction") ) { return readFunction_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"writeFunction") ) { return writeFunction_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"headerFunction") ) { return headerFunction_dyn(); }
		if (HX_FIELD_EQ(inName,"set_dataFormat") ) { return set_dataFormat_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"onSecurityError") ) { return onSecurityError_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"progressFunction") ) { return progressFunction_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic URLLoader_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { data=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"__curl") ) { __curl=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__data") ) { __data=inValue.Cast< ::openfl::utils::ByteArrayData >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getData") ) { getData=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bytesTotal") ) { bytesTotal=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dataFormat") ) { if (inCallProp == hx::paccAlways) return set_dataFormat(inValue);dataFormat=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"bytesLoaded") ) { bytesLoaded=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void URLLoader_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("bytesLoaded","\xd0","\x66","\xca","\x99"));
	outFields->push(HX_HCSTRING("bytesTotal","\x59","\x57","\xda","\x45"));
	outFields->push(HX_HCSTRING("data","\x2a","\x56","\x63","\x42"));
	outFields->push(HX_HCSTRING("dataFormat","\x01","\x55","\x30","\xe9"));
	outFields->push(HX_HCSTRING("__curl","\x0c","\xae","\xc1","\xf0"));
	outFields->push(HX_HCSTRING("__data","\x4a","\xb9","\x5b","\xf1"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(URLLoader_obj,bytesLoaded),HX_HCSTRING("bytesLoaded","\xd0","\x66","\xca","\x99")},
	{hx::fsInt,(int)offsetof(URLLoader_obj,bytesTotal),HX_HCSTRING("bytesTotal","\x59","\x57","\xda","\x45")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(URLLoader_obj,data),HX_HCSTRING("data","\x2a","\x56","\x63","\x42")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(URLLoader_obj,dataFormat),HX_HCSTRING("dataFormat","\x01","\x55","\x30","\xe9")},
	{hx::fsFloat,(int)offsetof(URLLoader_obj,__curl),HX_HCSTRING("__curl","\x0c","\xae","\xc1","\xf0")},
	{hx::fsObject /*::openfl::utils::ByteArrayData*/ ,(int)offsetof(URLLoader_obj,__data),HX_HCSTRING("__data","\x4a","\xb9","\x5b","\xf1")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(URLLoader_obj,getData),HX_HCSTRING("getData","\xe0","\x05","\xe6","\x14")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("bytesLoaded","\xd0","\x66","\xca","\x99"),
	HX_HCSTRING("bytesTotal","\x59","\x57","\xda","\x45"),
	HX_HCSTRING("data","\x2a","\x56","\x63","\x42"),
	HX_HCSTRING("dataFormat","\x01","\x55","\x30","\xe9"),
	HX_HCSTRING("__curl","\x0c","\xae","\xc1","\xf0"),
	HX_HCSTRING("__data","\x4a","\xb9","\x5b","\xf1"),
	HX_HCSTRING("close","\xb8","\x17","\x63","\x48"),
	HX_HCSTRING("getData","\xe0","\x05","\xe6","\x14"),
	HX_HCSTRING("load","\x26","\x9a","\xb7","\x47"),
	HX_HCSTRING("prepareData","\x51","\xe3","\xce","\xec"),
	HX_HCSTRING("requestUrl","\x60","\x3f","\x09","\x01"),
	HX_HCSTRING("writeFunction","\x17","\x4b","\xf4","\xd7"),
	HX_HCSTRING("headerFunction","\xc5","\x45","\xac","\x96"),
	HX_HCSTRING("progressFunction","\xe5","\x53","\xa2","\x27"),
	HX_HCSTRING("readFunction","\x8e","\xf8","\x87","\x4f"),
	HX_HCSTRING("onData","\xe9","\x5e","\xed","\xe4"),
	HX_HCSTRING("onError","\x29","\x6a","\x67","\x09"),
	HX_HCSTRING("onOpen","\x89","\x0c","\x3e","\xec"),
	HX_HCSTRING("onProgress","\xec","\xcb","\xe1","\x63"),
	HX_HCSTRING("onSecurityError","\x49","\x90","\x00","\x2a"),
	HX_HCSTRING("onStatus","\xb1","\xdd","\xa8","\xe5"),
	HX_HCSTRING("set_dataFormat","\xbe","\xc5","\x45","\x7f"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(URLLoader_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(URLLoader_obj::__mClass,"__mClass");
};

#endif

hx::Class URLLoader_obj::__mClass;

void URLLoader_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.net.URLLoader","\x13","\x34","\x24","\x71");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< URLLoader_obj >;
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
