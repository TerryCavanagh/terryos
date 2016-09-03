#ifndef INCLUDED_openfl_net__URLRequestMethod_URLRequestMethod_Impl_
#define INCLUDED_openfl_net__URLRequestMethod_URLRequestMethod_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(openfl,net,_URLRequestMethod,URLRequestMethod_Impl_)
namespace openfl{
namespace net{
namespace _URLRequestMethod{


class HXCPP_CLASS_ATTRIBUTES  URLRequestMethod_Impl__obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef URLRequestMethod_Impl__obj OBJ_;
		URLRequestMethod_Impl__obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="openfl.net._URLRequestMethod.URLRequestMethod_Impl_")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< URLRequestMethod_Impl__obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~URLRequestMethod_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("URLRequestMethod_Impl_","\x21","\x56","\x52","\x53"); }

		static void __boot();
		static Dynamic DELETE;
		static Dynamic GET;
		static Dynamic HEAD;
		static Dynamic OPTIONS;
		static Dynamic POST;
		static Dynamic PUT;
		static Dynamic fromString( ::String value);
		static Dynamic fromString_dyn();

		static ::String toString( int value);
		static Dynamic toString_dyn();

};

} // end namespace openfl
} // end namespace net
} // end namespace _URLRequestMethod

#endif /* INCLUDED_openfl_net__URLRequestMethod_URLRequestMethod_Impl_ */ 
