#ifndef INCLUDED_lime_net_HTTPRequest
#define INCLUDED_lime_net_HTTPRequest

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(lime,app,Future)
HX_DECLARE_CLASS2(lime,app,Promise)
HX_DECLARE_CLASS2(lime,net,HTTPRequest)
HX_DECLARE_CLASS2(lime,utils,Bytes)
namespace lime{
namespace net{


class HXCPP_CLASS_ATTRIBUTES  HTTPRequest_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef HTTPRequest_obj OBJ_;
		HTTPRequest_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="lime.net.HTTPRequest")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< HTTPRequest_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~HTTPRequest_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("HTTPRequest","\xa7","\xa4","\xcd","\x7f"); }

		::lime::utils::Bytes bytes;
		int bytesLoaded;
		int bytesTotal;
		::lime::app::Promise promise;
		virtual ::lime::app::Future load( ::String url);
		Dynamic load_dyn();

		virtual int curl_onProgress( Float dltotal,Float dlnow,Float uptotal,Float upnow);
		Dynamic curl_onProgress_dyn();

		virtual int curl_onWrite( ::lime::utils::Bytes output,int size,int nmemb);
		Dynamic curl_onWrite_dyn();

		virtual Void request_onProgress( Dynamic event);
		Dynamic request_onProgress_dyn();

};

} // end namespace lime
} // end namespace net

#endif /* INCLUDED_lime_net_HTTPRequest */ 
