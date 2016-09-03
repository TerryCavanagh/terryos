#ifndef INCLUDED_openfl_display3D__Context3DBlendFactor_Context3DBlendFactor_Impl_
#define INCLUDED_openfl_display3D__Context3DBlendFactor_Context3DBlendFactor_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(openfl,display3D,_Context3DBlendFactor,Context3DBlendFactor_Impl_)
namespace openfl{
namespace display3D{
namespace _Context3DBlendFactor{


class HXCPP_CLASS_ATTRIBUTES  Context3DBlendFactor_Impl__obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Context3DBlendFactor_Impl__obj OBJ_;
		Context3DBlendFactor_Impl__obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="openfl.display3D._Context3DBlendFactor.Context3DBlendFactor_Impl_")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Context3DBlendFactor_Impl__obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Context3DBlendFactor_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Context3DBlendFactor_Impl_","\x40","\x80","\x2d","\x4a"); }

		static void __boot();
		static Dynamic DESTINATION_ALPHA;
		static Dynamic DESTINATION_COLOR;
		static Dynamic ONE;
		static Dynamic ONE_MINUS_DESTINATION_ALPHA;
		static Dynamic ONE_MINUS_DESTINATION_COLOR;
		static Dynamic ONE_MINUS_SOURCE_ALPHA;
		static Dynamic ONE_MINUS_SOURCE_COLOR;
		static Dynamic SOURCE_ALPHA;
		static Dynamic SOURCE_COLOR;
		static Dynamic ZERO;
		static Dynamic fromString( ::String value);
		static Dynamic fromString_dyn();

		static ::String toString( int value);
		static Dynamic toString_dyn();

};

} // end namespace openfl
} // end namespace display3D
} // end namespace _Context3DBlendFactor

#endif /* INCLUDED_openfl_display3D__Context3DBlendFactor_Context3DBlendFactor_Impl_ */ 
