#ifndef INCLUDED_openfl_system__TouchscreenType_TouchscreenType_Impl_
#define INCLUDED_openfl_system__TouchscreenType_TouchscreenType_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(openfl,_system,_TouchscreenType,TouchscreenType_Impl_)
namespace openfl{
namespace _system{
namespace _TouchscreenType{


class HXCPP_CLASS_ATTRIBUTES  TouchscreenType_Impl__obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef TouchscreenType_Impl__obj OBJ_;
		TouchscreenType_Impl__obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="openfl.system._TouchscreenType.TouchscreenType_Impl_")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< TouchscreenType_Impl__obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TouchscreenType_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("TouchscreenType_Impl_","\x05","\x2b","\xd5","\x75"); }

		static void __boot();
		static Dynamic FINGER;
		static Dynamic NONE;
		static Dynamic STYLUS;
		static Dynamic fromString( ::String value);
		static Dynamic fromString_dyn();

		static ::String toString( int value);
		static Dynamic toString_dyn();

};

} // end namespace openfl
} // end namespace system
} // end namespace _TouchscreenType

#endif /* INCLUDED_openfl_system__TouchscreenType_TouchscreenType_Impl_ */ 
