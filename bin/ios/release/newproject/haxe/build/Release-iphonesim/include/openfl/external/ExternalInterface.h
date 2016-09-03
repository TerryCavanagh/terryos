#ifndef INCLUDED_openfl_external_ExternalInterface
#define INCLUDED_openfl_external_ExternalInterface

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(openfl,external,ExternalInterface)
namespace openfl{
namespace external{


class HXCPP_CLASS_ATTRIBUTES  ExternalInterface_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ExternalInterface_obj OBJ_;
		ExternalInterface_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="openfl.external.ExternalInterface")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< ExternalInterface_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ExternalInterface_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("ExternalInterface","\xce","\x6d","\x08","\x1a"); }

		static void __boot();
		static bool available;
		static bool marshallExceptions;
		static ::String objectID;
		static Void addCallback( ::String functionName,Dynamic closure);
		static Dynamic addCallback_dyn();

		static Dynamic call( ::String functionName,Dynamic p1,Dynamic p2,Dynamic p3,Dynamic p4,Dynamic p5);
		static Dynamic call_dyn();

};

} // end namespace openfl
} // end namespace external

#endif /* INCLUDED_openfl_external_ExternalInterface */ 
