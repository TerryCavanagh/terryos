#ifndef INCLUDED_openfl_display__InterpolationMethod_InterpolationMethod_Impl_
#define INCLUDED_openfl_display__InterpolationMethod_InterpolationMethod_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(openfl,display,_InterpolationMethod,InterpolationMethod_Impl_)
namespace openfl{
namespace display{
namespace _InterpolationMethod{


class HXCPP_CLASS_ATTRIBUTES  InterpolationMethod_Impl__obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef InterpolationMethod_Impl__obj OBJ_;
		InterpolationMethod_Impl__obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="openfl.display._InterpolationMethod.InterpolationMethod_Impl_")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< InterpolationMethod_Impl__obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~InterpolationMethod_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("InterpolationMethod_Impl_","\x65","\xd5","\x85","\xa3"); }

		static void __boot();
		static Dynamic LINEAR_RGB;
		static Dynamic RGB;
		static Dynamic fromString( ::String value);
		static Dynamic fromString_dyn();

		static ::String toString( int value);
		static Dynamic toString_dyn();

};

} // end namespace openfl
} // end namespace display
} // end namespace _InterpolationMethod

#endif /* INCLUDED_openfl_display__InterpolationMethod_InterpolationMethod_Impl_ */ 
