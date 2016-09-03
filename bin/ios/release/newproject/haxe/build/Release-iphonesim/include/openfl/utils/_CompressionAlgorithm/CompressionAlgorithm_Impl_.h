#ifndef INCLUDED_openfl_utils__CompressionAlgorithm_CompressionAlgorithm_Impl_
#define INCLUDED_openfl_utils__CompressionAlgorithm_CompressionAlgorithm_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(openfl,utils,_CompressionAlgorithm,CompressionAlgorithm_Impl_)
namespace openfl{
namespace utils{
namespace _CompressionAlgorithm{


class HXCPP_CLASS_ATTRIBUTES  CompressionAlgorithm_Impl__obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef CompressionAlgorithm_Impl__obj OBJ_;
		CompressionAlgorithm_Impl__obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="openfl.utils._CompressionAlgorithm.CompressionAlgorithm_Impl_")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< CompressionAlgorithm_Impl__obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~CompressionAlgorithm_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("CompressionAlgorithm_Impl_","\xa9","\x3d","\x59","\x0e"); }

		static void __boot();
		static Dynamic DEFLATE;
		static Dynamic LZMA;
		static Dynamic ZLIB;
		static Dynamic fromString( ::String value);
		static Dynamic fromString_dyn();

		static ::String toString( int value);
		static Dynamic toString_dyn();

};

} // end namespace openfl
} // end namespace utils
} // end namespace _CompressionAlgorithm

#endif /* INCLUDED_openfl_utils__CompressionAlgorithm_CompressionAlgorithm_Impl_ */ 
