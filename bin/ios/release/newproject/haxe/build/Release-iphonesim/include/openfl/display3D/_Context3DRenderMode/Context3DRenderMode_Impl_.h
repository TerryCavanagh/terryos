#ifndef INCLUDED_openfl_display3D__Context3DRenderMode_Context3DRenderMode_Impl_
#define INCLUDED_openfl_display3D__Context3DRenderMode_Context3DRenderMode_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(openfl,display3D,_Context3DRenderMode,Context3DRenderMode_Impl_)
namespace openfl{
namespace display3D{
namespace _Context3DRenderMode{


class HXCPP_CLASS_ATTRIBUTES  Context3DRenderMode_Impl__obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Context3DRenderMode_Impl__obj OBJ_;
		Context3DRenderMode_Impl__obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="openfl.display3D._Context3DRenderMode.Context3DRenderMode_Impl_")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Context3DRenderMode_Impl__obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Context3DRenderMode_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Context3DRenderMode_Impl_","\x99","\x0b","\x34","\x90"); }

		static void __boot();
		static Dynamic AUTO;
		static Dynamic SOFTWARE;
		static Dynamic fromString( ::String value);
		static Dynamic fromString_dyn();

		static ::String toString( int value);
		static Dynamic toString_dyn();

};

} // end namespace openfl
} // end namespace display3D
} // end namespace _Context3DRenderMode

#endif /* INCLUDED_openfl_display3D__Context3DRenderMode_Context3DRenderMode_Impl_ */ 
