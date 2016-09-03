#ifndef INCLUDED_openfl_display__TriangleCulling_TriangleCulling_Impl_
#define INCLUDED_openfl_display__TriangleCulling_TriangleCulling_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(openfl,display,_TriangleCulling,TriangleCulling_Impl_)
namespace openfl{
namespace display{
namespace _TriangleCulling{


class HXCPP_CLASS_ATTRIBUTES  TriangleCulling_Impl__obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef TriangleCulling_Impl__obj OBJ_;
		TriangleCulling_Impl__obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="openfl.display._TriangleCulling.TriangleCulling_Impl_")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< TriangleCulling_Impl__obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TriangleCulling_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("TriangleCulling_Impl_","\x08","\xb7","\x72","\xec"); }

		static void __boot();
		static Dynamic NEGATIVE;
		static Dynamic NONE;
		static Dynamic POSITIVE;
		static Dynamic fromString( ::String value);
		static Dynamic fromString_dyn();

		static ::String toString( int value);
		static Dynamic toString_dyn();

};

} // end namespace openfl
} // end namespace display
} // end namespace _TriangleCulling

#endif /* INCLUDED_openfl_display__TriangleCulling_TriangleCulling_Impl_ */ 
