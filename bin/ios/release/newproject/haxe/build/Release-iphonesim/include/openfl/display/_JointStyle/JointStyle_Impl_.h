#ifndef INCLUDED_openfl_display__JointStyle_JointStyle_Impl_
#define INCLUDED_openfl_display__JointStyle_JointStyle_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(openfl,display,_JointStyle,JointStyle_Impl_)
namespace openfl{
namespace display{
namespace _JointStyle{


class HXCPP_CLASS_ATTRIBUTES  JointStyle_Impl__obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef JointStyle_Impl__obj OBJ_;
		JointStyle_Impl__obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="openfl.display._JointStyle.JointStyle_Impl_")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< JointStyle_Impl__obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~JointStyle_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("JointStyle_Impl_","\x87","\xe7","\x4f","\x3d"); }

		static void __boot();
		static Dynamic BEVEL;
		static Dynamic MITER;
		static Dynamic ROUND;
		static Dynamic fromString( ::String value);
		static Dynamic fromString_dyn();

		static ::String toString( int value);
		static Dynamic toString_dyn();

};

} // end namespace openfl
} // end namespace display
} // end namespace _JointStyle

#endif /* INCLUDED_openfl_display__JointStyle_JointStyle_Impl_ */ 
