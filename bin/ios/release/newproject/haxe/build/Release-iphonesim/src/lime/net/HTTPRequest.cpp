#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_app_Event_Dynamic_Void
#include <lime/app/Event_Dynamic_Void.h>
#endif
#ifndef INCLUDED_lime_app_Future
#include <lime/app/Future.h>
#endif
#ifndef INCLUDED_lime_app_Promise
#include <lime/app/Promise.h>
#endif
#ifndef INCLUDED_lime_net_HTTPRequest
#include <lime/net/HTTPRequest.h>
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
namespace lime{
namespace net{

Void HTTPRequest_obj::__construct()
{
HX_STACK_FRAME("lime.net.HTTPRequest","new",0xc8d2372f,"lime.net.HTTPRequest.new","lime/net/HTTPRequest.hx",27,0x339db723)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(29)
	::lime::app::Promise tmp = ::lime::app::Promise_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(29)
	this->promise = tmp;
}
;
	return null();
}

//HTTPRequest_obj::~HTTPRequest_obj() { }

Dynamic HTTPRequest_obj::__CreateEmpty() { return  new HTTPRequest_obj; }
hx::ObjectPtr< HTTPRequest_obj > HTTPRequest_obj::__new()
{  hx::ObjectPtr< HTTPRequest_obj > _result_ = new HTTPRequest_obj();
	_result_->__construct();
	return _result_;}

Dynamic HTTPRequest_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< HTTPRequest_obj > _result_ = new HTTPRequest_obj();
	_result_->__construct();
	return _result_;}

::lime::app::Future HTTPRequest_obj::load( ::String url){
	HX_STACK_FRAME("lime.net.HTTPRequest","load",0xedd32877,"lime.net.HTTPRequest.load","lime/net/HTTPRequest.hx",34,0x339db723)
	HX_STACK_THIS(this)
	HX_STACK_ARG(url,"url")
	HX_STACK_LINE(34)
	::lime::net::HTTPRequest _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(36)
	this->bytesLoaded = (int)0;
	HX_STACK_LINE(37)
	this->bytesTotal = (int)0;
	HX_STACK_LINE(70)
	int tmp = url.indexOf(HX_HCSTRING("http://","\x52","\x75","\xcd","\x5a"),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(70)
	int tmp1 = (int)-1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(70)
	bool tmp2 = (tmp == tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(70)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(70)
	if ((tmp2)){
		HX_STACK_LINE(70)
		int tmp4 = url.indexOf(HX_HCSTRING("https://","\xcf","\xb4","\xae","\x3e"),null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(70)
		int tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(70)
		tmp3 = (tmp5 == (int)-1);
	}
	else{
		HX_STACK_LINE(70)
		tmp3 = false;
	}
	HX_STACK_LINE(70)
	if ((tmp3)){
		HX_STACK_LINE(72)
		::lime::_system::BackgroundWorker tmp4 = ::lime::_system::BackgroundWorker_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(72)
		::lime::_system::BackgroundWorker worker = tmp4;		HX_STACK_VAR(worker,"worker");

		HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::lime::net::HTTPRequest,_g,::String,url)
		int __ArgCount() const { return 1; }
		Void run(Dynamic _){
			HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","lime/net/HTTPRequest.hx",73,0x339db723)
			HX_STACK_ARG(_,"_")
			{
				HX_STACK_LINE(75)
				::String path = url;		HX_STACK_VAR(path,"path");
				HX_STACK_LINE(76)
				int tmp5 = path.indexOf(HX_HCSTRING("?","\x3f","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(76)
				int index = tmp5;		HX_STACK_VAR(index,"index");
				HX_STACK_LINE(78)
				bool tmp6 = (index > (int)-1);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(78)
				if ((tmp6)){
					HX_STACK_LINE(80)
					int tmp7 = index;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(80)
					::String tmp8 = path.substring((int)0,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(80)
					path = tmp8;
				}
				HX_STACK_LINE(84)
				::String tmp7 = path;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(84)
				::lime::utils::Bytes tmp8 = ::lime::utils::Bytes_obj::readFile(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(84)
				::lime::utils::Bytes bytes = tmp8;		HX_STACK_VAR(bytes,"bytes");
				HX_STACK_LINE(85)
				::lime::utils::Bytes tmp9 = bytes;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(85)
				_g->promise->complete(tmp9);
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(73)
		worker->__Field(HX_HCSTRING("doWork","\xfc","\xa6","\x00","\x1f"), hx::paccDynamic )->__Field(HX_HCSTRING("add","\x21","\xf2","\x49","\x00"), hx::paccDynamic )( Dynamic(new _Function_2_1(_g,url)),null(),null());
		HX_STACK_LINE(88)
		worker->__Field(HX_HCSTRING("run","\x4b","\xe7","\x56","\x00"), hx::paccDynamic )(null());
	}
	else{
		HX_STACK_LINE(92)
		::lime::utils::Bytes tmp4 = ::lime::utils::Bytes_obj::alloc((int)0);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(92)
		this->bytes = tmp4;
		HX_STACK_LINE(94)
		this->bytesLoaded = (int)0;
		HX_STACK_LINE(95)
		this->bytesTotal = (int)0;
		HX_STACK_LINE(97)
		Float tmp5 = ::lime::net::curl::CURLEasy_obj::init();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(97)
		Float curl = tmp5;		HX_STACK_VAR(curl,"curl");
		HX_STACK_LINE(99)
		Float tmp6 = curl;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(99)
		::String tmp7 = url;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(99)
		::lime::net::curl::CURLEasy_obj::setopt(tmp6,(int)10002,tmp7);
		HX_STACK_LINE(100)
		Float tmp8 = curl;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(100)
		::lime::net::curl::CURLEasy_obj::setopt(tmp8,(int)80,true);
		HX_STACK_LINE(102)
		Float tmp9 = curl;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(102)
		::lime::net::curl::CURLEasy_obj::setopt(tmp9,(int)52,true);
		HX_STACK_LINE(103)
		Float tmp10 = curl;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(103)
		::lime::net::curl::CURLEasy_obj::setopt(tmp10,(int)58,true);
		HX_STACK_LINE(104)
		Float tmp11 = curl;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(104)
		::lime::net::curl::CURLEasy_obj::setopt(tmp11,(int)10023,cpp::ArrayBase_obj::__new().Add(HX_HCSTRING("Expect: ","\xdf","\xc4","\xe1","\x19")));
		HX_STACK_LINE(106)
		Float tmp12 = curl;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(106)
		Dynamic tmp13 = this->curl_onProgress_dyn();		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(106)
		::lime::net::curl::CURLEasy_obj::setopt(tmp12,(int)20056,tmp13);
		HX_STACK_LINE(107)
		Float tmp14 = curl;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(107)
		Dynamic tmp15 = this->curl_onWrite_dyn();		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(107)
		::lime::net::curl::CURLEasy_obj::setopt(tmp14,(int)20011,tmp15);
		HX_STACK_LINE(109)
		Float tmp16 = curl;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(109)
		::lime::net::curl::CURLEasy_obj::setopt(tmp16,(int)64,false);
		HX_STACK_LINE(110)
		Float tmp17 = curl;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(110)
		::lime::net::curl::CURLEasy_obj::setopt(tmp17,(int)81,(int)0);
		HX_STACK_LINE(111)
		Float tmp18 = curl;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(111)
		::lime::net::curl::CURLEasy_obj::setopt(tmp18,(int)10018,HX_HCSTRING("libcurl-agent/1.0","\x4d","\x41","\xcc","\xd3"));
		HX_STACK_LINE(112)
		Float tmp19 = curl;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(112)
		::lime::net::curl::CURLEasy_obj::setopt(tmp19,(int)78,(int)30);
		HX_STACK_LINE(113)
		Float tmp20 = curl;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(113)
		::lime::net::curl::CURLEasy_obj::setopt(tmp20,(int)53,(int)0);
		HX_STACK_LINE(115)
		::lime::_system::BackgroundWorker tmp21 = ::lime::_system::BackgroundWorker_obj::__new();		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(115)
		::lime::_system::BackgroundWorker worker = tmp21;		HX_STACK_VAR(worker,"worker");

		HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,Float,curl,::lime::_system::BackgroundWorker,worker)
		int __ArgCount() const { return 1; }
		Void run(Dynamic _){
			HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","lime/net/HTTPRequest.hx",116,0x339db723)
			HX_STACK_ARG(_,"_")
			{
				HX_STACK_LINE(118)
				Float tmp22 = curl;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(118)
				int tmp23 = ::lime::net::curl::CURLEasy_obj::perform(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(118)
				int result = tmp23;		HX_STACK_VAR(result,"result");
				HX_STACK_LINE(119)
				int tmp24 = result;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(119)
				worker->__Field(HX_HCSTRING("sendComplete","\x21","\xd2","\x84","\xc0"), hx::paccDynamic )(tmp24);
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(116)
		worker->__Field(HX_HCSTRING("doWork","\xfc","\xa6","\x00","\x1f"), hx::paccDynamic )->__Field(HX_HCSTRING("add","\x21","\xf2","\x49","\x00"), hx::paccDynamic )( Dynamic(new _Function_2_1(curl,worker)),null(),null());

		HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_2,Float,curl,::lime::net::HTTPRequest,_g)
		int __ArgCount() const { return 1; }
		Void run(int result){
			HX_STACK_FRAME("*","_Function_2_2",0x5201af79,"*._Function_2_2","lime/net/HTTPRequest.hx",122,0x339db723)
			HX_STACK_ARG(result,"result")
			{
				HX_STACK_LINE(124)
				Float tmp22 = curl;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(124)
				Dynamic tmp23 = ::lime::net::curl::CURLEasy_obj::getinfo(tmp22,(int)2097154);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(124)
				Dynamic responseCode = tmp23;		HX_STACK_VAR(responseCode,"responseCode");
				HX_STACK_LINE(126)
				bool tmp24 = (result == (int)0);		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(126)
				if ((tmp24)){
					HX_STACK_LINE(128)
					::lime::utils::Bytes tmp25 = _g->bytes;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(128)
					_g->promise->complete(tmp25);
				}
				else{
					HX_STACK_LINE(132)
					int tmp25 = result;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(132)
					_g->promise->error(tmp25);
				}
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(122)
		worker->__Field(HX_HCSTRING("onComplete","\xf8","\xd4","\x7e","\x5d"), hx::paccDynamic )->__Field(HX_HCSTRING("add","\x21","\xf2","\x49","\x00"), hx::paccDynamic )( Dynamic(new _Function_2_2(curl,_g)),null(),null());
		HX_STACK_LINE(137)
		worker->__Field(HX_HCSTRING("run","\x4b","\xe7","\x56","\x00"), hx::paccDynamic )(null());
	}
	HX_STACK_LINE(143)
	::lime::app::Promise tmp4 = this->promise;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(143)
	::lime::app::Future tmp5 = tmp4->future;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(143)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC1(HTTPRequest_obj,load,return )

int HTTPRequest_obj::curl_onProgress( Float dltotal,Float dlnow,Float uptotal,Float upnow){
	HX_STACK_FRAME("lime.net.HTTPRequest","curl_onProgress",0x3f907eee,"lime.net.HTTPRequest.curl_onProgress","lime/net/HTTPRequest.hx",155,0x339db723)
	HX_STACK_THIS(this)
	HX_STACK_ARG(dltotal,"dltotal")
	HX_STACK_ARG(dlnow,"dlnow")
	HX_STACK_ARG(uptotal,"uptotal")
	HX_STACK_ARG(upnow,"upnow")
	HX_STACK_LINE(157)
	Float tmp = upnow;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(157)
	int tmp1 = this->bytesLoaded;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(157)
	bool tmp2 = (tmp > tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(157)
	bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(157)
	bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(157)
	bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(157)
	if ((tmp4)){
		HX_STACK_LINE(157)
		Float tmp6 = dlnow;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(157)
		int tmp7 = this->bytesLoaded;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(157)
		int tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(157)
		int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(157)
		tmp5 = (tmp6 > tmp9);
	}
	else{
		HX_STACK_LINE(157)
		tmp5 = true;
	}
	HX_STACK_LINE(157)
	bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(157)
	bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(157)
	bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(157)
	if ((tmp7)){
		HX_STACK_LINE(157)
		Float tmp9 = uptotal;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(157)
		int tmp10 = this->bytesTotal;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(157)
		int tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(157)
		int tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(157)
		tmp8 = (tmp9 > tmp12);
	}
	else{
		HX_STACK_LINE(157)
		tmp8 = true;
	}
	HX_STACK_LINE(157)
	bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(157)
	bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(157)
	if ((tmp9)){
		HX_STACK_LINE(157)
		Float tmp11 = dltotal;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(157)
		int tmp12 = this->bytesTotal;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(157)
		int tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(157)
		tmp10 = (tmp11 > tmp13);
	}
	else{
		HX_STACK_LINE(157)
		tmp10 = true;
	}
	HX_STACK_LINE(157)
	if ((tmp10)){
		HX_STACK_LINE(159)
		Float tmp11 = upnow;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(159)
		int tmp12 = this->bytesLoaded;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(159)
		bool tmp13 = (tmp11 > tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(159)
		if ((tmp13)){
			HX_STACK_LINE(159)
			Float tmp14 = upnow;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(159)
			int tmp15 = ::Std_obj::_int(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(159)
			this->bytesLoaded = tmp15;
		}
		HX_STACK_LINE(160)
		Float tmp14 = dlnow;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(160)
		int tmp15 = this->bytesLoaded;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(160)
		bool tmp16 = (tmp14 > tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(160)
		if ((tmp16)){
			HX_STACK_LINE(160)
			Float tmp17 = dlnow;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(160)
			int tmp18 = ::Std_obj::_int(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(160)
			this->bytesLoaded = tmp18;
		}
		HX_STACK_LINE(161)
		Float tmp17 = uptotal;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(161)
		int tmp18 = this->bytesTotal;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(161)
		bool tmp19 = (tmp17 > tmp18);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(161)
		if ((tmp19)){
			HX_STACK_LINE(161)
			Float tmp20 = uptotal;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(161)
			int tmp21 = ::Std_obj::_int(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(161)
			this->bytesTotal = tmp21;
		}
		HX_STACK_LINE(162)
		Float tmp20 = dltotal;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(162)
		int tmp21 = this->bytesTotal;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(162)
		bool tmp22 = (tmp20 > tmp21);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(162)
		if ((tmp22)){
			HX_STACK_LINE(162)
			Float tmp23 = dltotal;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(162)
			int tmp24 = ::Std_obj::_int(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(162)
			this->bytesTotal = tmp24;
		}
		HX_STACK_LINE(164)
		::lime::app::Promise tmp23 = this->promise;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(164)
		int tmp24 = this->bytesLoaded;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(164)
		int tmp25 = this->bytesTotal;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(164)
		Float tmp26 = (Float(tmp24) / Float(tmp25));		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(164)
		tmp23->progress(tmp26);
	}
	HX_STACK_LINE(168)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC4(HTTPRequest_obj,curl_onProgress,return )

int HTTPRequest_obj::curl_onWrite( ::lime::utils::Bytes output,int size,int nmemb){
	HX_STACK_FRAME("lime.net.HTTPRequest","curl_onWrite",0xf1bb42fe,"lime.net.HTTPRequest.curl_onWrite","lime/net/HTTPRequest.hx",173,0x339db723)
	HX_STACK_THIS(this)
	HX_STACK_ARG(output,"output")
	HX_STACK_ARG(size,"size")
	HX_STACK_ARG(nmemb,"nmemb")
	HX_STACK_LINE(175)
	::lime::utils::Bytes tmp = this->bytes;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(175)
	::lime::utils::Bytes cacheBytes = tmp;		HX_STACK_VAR(cacheBytes,"cacheBytes");
	HX_STACK_LINE(176)
	::lime::utils::Bytes tmp1 = this->bytes;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(176)
	int tmp2 = tmp1->length;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(176)
	int tmp3 = output->length;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(176)
	int tmp4 = (tmp2 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(176)
	::lime::utils::Bytes tmp5 = ::lime::utils::Bytes_obj::alloc(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(176)
	this->bytes = tmp5;
	HX_STACK_LINE(177)
	::lime::utils::Bytes tmp6 = this->bytes;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(177)
	::lime::utils::Bytes tmp7 = cacheBytes;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(177)
	int tmp8 = cacheBytes->length;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(177)
	tmp6->blit((int)0,tmp7,(int)0,tmp8);
	HX_STACK_LINE(178)
	::lime::utils::Bytes tmp9 = this->bytes;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(178)
	int tmp10 = cacheBytes->length;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(178)
	::lime::utils::Bytes tmp11 = output;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(178)
	int tmp12 = output->length;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(178)
	tmp9->blit(tmp10,tmp11,(int)0,tmp12);
	HX_STACK_LINE(180)
	int tmp13 = (size * nmemb);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(180)
	return tmp13;
}


HX_DEFINE_DYNAMIC_FUNC3(HTTPRequest_obj,curl_onWrite,return )

Void HTTPRequest_obj::request_onProgress( Dynamic event){
{
		HX_STACK_FRAME("lime.net.HTTPRequest","request_onProgress",0xb88d882d,"lime.net.HTTPRequest.request_onProgress","lime/net/HTTPRequest.hx",185,0x339db723)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(187)
		::lime::app::Promise tmp = this->promise;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(187)
		Float tmp1 = (Float(event->__Field(HX_HCSTRING("loaded","\x05","\x48","\x6f","\x58"), hx::paccDynamic )) / Float(event->__Field(HX_HCSTRING("total","\xc4","\x53","\x32","\x14"), hx::paccDynamic )));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(187)
		tmp->progress(tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(HTTPRequest_obj,request_onProgress,(void))


HTTPRequest_obj::HTTPRequest_obj()
{
}

void HTTPRequest_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(HTTPRequest);
	HX_MARK_MEMBER_NAME(bytes,"bytes");
	HX_MARK_MEMBER_NAME(bytesLoaded,"bytesLoaded");
	HX_MARK_MEMBER_NAME(bytesTotal,"bytesTotal");
	HX_MARK_MEMBER_NAME(promise,"promise");
	HX_MARK_END_CLASS();
}

void HTTPRequest_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(bytes,"bytes");
	HX_VISIT_MEMBER_NAME(bytesLoaded,"bytesLoaded");
	HX_VISIT_MEMBER_NAME(bytesTotal,"bytesTotal");
	HX_VISIT_MEMBER_NAME(promise,"promise");
}

Dynamic HTTPRequest_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"load") ) { return load_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"bytes") ) { return bytes; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"promise") ) { return promise; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bytesTotal") ) { return bytesTotal; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"bytesLoaded") ) { return bytesLoaded; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"curl_onWrite") ) { return curl_onWrite_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"curl_onProgress") ) { return curl_onProgress_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"request_onProgress") ) { return request_onProgress_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic HTTPRequest_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"bytes") ) { bytes=inValue.Cast< ::lime::utils::Bytes >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"promise") ) { promise=inValue.Cast< ::lime::app::Promise >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bytesTotal") ) { bytesTotal=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"bytesLoaded") ) { bytesLoaded=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void HTTPRequest_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("bytes","\x6b","\x08","\x98","\xbd"));
	outFields->push(HX_HCSTRING("bytesLoaded","\xd0","\x66","\xca","\x99"));
	outFields->push(HX_HCSTRING("bytesTotal","\x59","\x57","\xda","\x45"));
	outFields->push(HX_HCSTRING("promise","\x9b","\xcd","\xe9","\xf7"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::lime::utils::Bytes*/ ,(int)offsetof(HTTPRequest_obj,bytes),HX_HCSTRING("bytes","\x6b","\x08","\x98","\xbd")},
	{hx::fsInt,(int)offsetof(HTTPRequest_obj,bytesLoaded),HX_HCSTRING("bytesLoaded","\xd0","\x66","\xca","\x99")},
	{hx::fsInt,(int)offsetof(HTTPRequest_obj,bytesTotal),HX_HCSTRING("bytesTotal","\x59","\x57","\xda","\x45")},
	{hx::fsObject /*::lime::app::Promise*/ ,(int)offsetof(HTTPRequest_obj,promise),HX_HCSTRING("promise","\x9b","\xcd","\xe9","\xf7")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("bytes","\x6b","\x08","\x98","\xbd"),
	HX_HCSTRING("bytesLoaded","\xd0","\x66","\xca","\x99"),
	HX_HCSTRING("bytesTotal","\x59","\x57","\xda","\x45"),
	HX_HCSTRING("promise","\x9b","\xcd","\xe9","\xf7"),
	HX_HCSTRING("load","\x26","\x9a","\xb7","\x47"),
	HX_HCSTRING("curl_onProgress","\x9f","\x9d","\x6b","\x99"),
	HX_HCSTRING("curl_onWrite","\xad","\x7b","\xff","\x91"),
	HX_HCSTRING("request_onProgress","\x1c","\xee","\xf7","\x02"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(HTTPRequest_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(HTTPRequest_obj::__mClass,"__mClass");
};

#endif

hx::Class HTTPRequest_obj::__mClass;

void HTTPRequest_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.net.HTTPRequest","\xbd","\x73","\x25","\x4c");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< HTTPRequest_obj >;
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
} // end namespace net
