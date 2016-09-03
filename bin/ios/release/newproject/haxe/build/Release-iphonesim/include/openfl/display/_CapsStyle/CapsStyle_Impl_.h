#ifndef INCLUDED_openfl_display__CapsStyle_CapsStyle_Impl_
#define INCLUDED_openfl_display__CapsStyle_CapsStyle_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(openfl,display,_CapsStyle,CapsStyle_Impl_)
namespace openfl{
namespace display{
namespace _CapsStyle{


class HXCPP_CLASS_ATTRIBUTES  CapsStyle_Impl__obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef CapsStyle_Impl__obj OBJ_;
		CapsStyle_Impl__obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="openfl.display._CapsStyle.CapsStyle_Impl_")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< CapsStyle_Impl__obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~CapsStyle_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("CapsStyle_Impl_","\xd0","\x81","\x7b","\x42"); }

		static void __boot();
		static Dynamic NONE;
		static Dynamic ROUND;
		static Dynamic SQUARE;
		static Dynamic fromString( ::String value);
		static Dynamic fromString_dyn();

		static ::String toString( int value);
		static Dynamic toString_dyn();

};

} // end namespace openfl
} // end namespace display
} // end namespace _CapsStyle

#endif /* INCLUDED_openfl_display__CapsStyle_CapsStyle_Impl_ */ 
