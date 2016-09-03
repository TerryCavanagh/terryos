#ifndef INCLUDED_openfl_display__GradientType_GradientType_Impl_
#define INCLUDED_openfl_display__GradientType_GradientType_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(openfl,display,_GradientType,GradientType_Impl_)
namespace openfl{
namespace display{
namespace _GradientType{


class HXCPP_CLASS_ATTRIBUTES  GradientType_Impl__obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef GradientType_Impl__obj OBJ_;
		GradientType_Impl__obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="openfl.display._GradientType.GradientType_Impl_")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< GradientType_Impl__obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~GradientType_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("GradientType_Impl_","\x0a","\x25","\x04","\xa0"); }

		static void __boot();
		static Dynamic LINEAR;
		static Dynamic RADIAL;
		static Dynamic fromString( ::String value);
		static Dynamic fromString_dyn();

		static ::String toString( int value);
		static Dynamic toString_dyn();

};

} // end namespace openfl
} // end namespace display
} // end namespace _GradientType

#endif /* INCLUDED_openfl_display__GradientType_GradientType_Impl_ */ 
