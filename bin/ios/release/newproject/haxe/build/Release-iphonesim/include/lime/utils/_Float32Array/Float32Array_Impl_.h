#ifndef INCLUDED_lime_utils__Float32Array_Float32Array_Impl_
#define INCLUDED_lime_utils__Float32Array_Float32Array_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(lime,utils,ArrayBufferView)
HX_DECLARE_CLASS3(lime,utils,_Float32Array,Float32Array_Impl_)
namespace lime{
namespace utils{
namespace _Float32Array{


class HXCPP_CLASS_ATTRIBUTES  Float32Array_Impl__obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Float32Array_Impl__obj OBJ_;
		Float32Array_Impl__obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="lime.utils._Float32Array.Float32Array_Impl_")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Float32Array_Impl__obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Float32Array_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Float32Array_Impl_","\x9e","\x71","\x1e","\xf4"); }

		static void __boot();
		static int BYTES_PER_ELEMENT;
		static ::lime::utils::ArrayBufferView subarray( ::lime::utils::ArrayBufferView this1,int begin,Dynamic end);
		static Dynamic subarray_dyn();

		static ::lime::utils::ArrayBufferView fromBytes( ::haxe::io::Bytes bytes,Dynamic byteOffset,Dynamic len);
		static Dynamic fromBytes_dyn();

		static ::haxe::io::Bytes toBytes( ::lime::utils::ArrayBufferView this1);
		static Dynamic toBytes_dyn();

		static ::String toString( ::lime::utils::ArrayBufferView this1);
		static Dynamic toString_dyn();

};

} // end namespace lime
} // end namespace utils
} // end namespace _Float32Array

#endif /* INCLUDED_lime_utils__Float32Array_Float32Array_Impl_ */ 