#ifndef INCLUDED_openfl_display__GraphicsPathWinding_GraphicsPathWinding_Impl_
#define INCLUDED_openfl_display__GraphicsPathWinding_GraphicsPathWinding_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(openfl,display,_GraphicsPathWinding,GraphicsPathWinding_Impl_)
namespace openfl{
namespace display{
namespace _GraphicsPathWinding{


class HXCPP_CLASS_ATTRIBUTES  GraphicsPathWinding_Impl__obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef GraphicsPathWinding_Impl__obj OBJ_;
		GraphicsPathWinding_Impl__obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="openfl.display._GraphicsPathWinding.GraphicsPathWinding_Impl_")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< GraphicsPathWinding_Impl__obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~GraphicsPathWinding_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("GraphicsPathWinding_Impl_","\xea","\x2e","\x4c","\x54"); }

		static void __boot();
		static Dynamic EVEN_ODD;
		static Dynamic NON_ZERO;
		static Dynamic fromString( ::String value);
		static Dynamic fromString_dyn();

		static ::String toString( int value);
		static Dynamic toString_dyn();

};

} // end namespace openfl
} // end namespace display
} // end namespace _GraphicsPathWinding

#endif /* INCLUDED_openfl_display__GraphicsPathWinding_GraphicsPathWinding_Impl_ */ 
