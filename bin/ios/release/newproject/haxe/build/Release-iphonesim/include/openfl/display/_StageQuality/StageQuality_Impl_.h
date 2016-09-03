#ifndef INCLUDED_openfl_display__StageQuality_StageQuality_Impl_
#define INCLUDED_openfl_display__StageQuality_StageQuality_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(openfl,display,_StageQuality,StageQuality_Impl_)
namespace openfl{
namespace display{
namespace _StageQuality{


class HXCPP_CLASS_ATTRIBUTES  StageQuality_Impl__obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef StageQuality_Impl__obj OBJ_;
		StageQuality_Impl__obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="openfl.display._StageQuality.StageQuality_Impl_")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< StageQuality_Impl__obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~StageQuality_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("StageQuality_Impl_","\x21","\x85","\xe4","\xfb"); }

		static void __boot();
		static Dynamic BEST;
		static Dynamic HIGH;
		static Dynamic LOW;
		static Dynamic MEDIUM;
		static Dynamic fromString( ::String value);
		static Dynamic fromString_dyn();

		static ::String toString( int value);
		static Dynamic toString_dyn();

};

} // end namespace openfl
} // end namespace display
} // end namespace _StageQuality

#endif /* INCLUDED_openfl_display__StageQuality_StageQuality_Impl_ */ 
