#ifndef INCLUDED_openfl_display__StageScaleMode_StageScaleMode_Impl_
#define INCLUDED_openfl_display__StageScaleMode_StageScaleMode_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(openfl,display,_StageScaleMode,StageScaleMode_Impl_)
namespace openfl{
namespace display{
namespace _StageScaleMode{


class HXCPP_CLASS_ATTRIBUTES  StageScaleMode_Impl__obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef StageScaleMode_Impl__obj OBJ_;
		StageScaleMode_Impl__obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="openfl.display._StageScaleMode.StageScaleMode_Impl_")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< StageScaleMode_Impl__obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~StageScaleMode_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("StageScaleMode_Impl_","\x6f","\x2e","\xdc","\xac"); }

		static void __boot();
		static Dynamic EXACT_FIT;
		static Dynamic NO_BORDER;
		static Dynamic NO_SCALE;
		static Dynamic SHOW_ALL;
		static Dynamic fromString( ::String value);
		static Dynamic fromString_dyn();

		static ::String toString( int value);
		static Dynamic toString_dyn();

};

} // end namespace openfl
} // end namespace display
} // end namespace _StageScaleMode

#endif /* INCLUDED_openfl_display__StageScaleMode_StageScaleMode_Impl_ */ 
