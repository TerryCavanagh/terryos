#ifndef INCLUDED_openfl_display__StageDisplayState_StageDisplayState_Impl_
#define INCLUDED_openfl_display__StageDisplayState_StageDisplayState_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(openfl,display,_StageDisplayState,StageDisplayState_Impl_)
namespace openfl{
namespace display{
namespace _StageDisplayState{


class HXCPP_CLASS_ATTRIBUTES  StageDisplayState_Impl__obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef StageDisplayState_Impl__obj OBJ_;
		StageDisplayState_Impl__obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="openfl.display._StageDisplayState.StageDisplayState_Impl_")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< StageDisplayState_Impl__obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~StageDisplayState_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("StageDisplayState_Impl_","\x8d","\x04","\x09","\xe1"); }

		static void __boot();
		static Dynamic FULL_SCREEN;
		static Dynamic FULL_SCREEN_INTERACTIVE;
		static Dynamic NORMAL;
		static Dynamic fromString( ::String value);
		static Dynamic fromString_dyn();

		static ::String toString( int value);
		static Dynamic toString_dyn();

};

} // end namespace openfl
} // end namespace display
} // end namespace _StageDisplayState

#endif /* INCLUDED_openfl_display__StageDisplayState_StageDisplayState_Impl_ */ 
