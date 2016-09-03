#ifndef INCLUDED_lime_utils_compress_Zlib
#define INCLUDED_lime_utils_compress_Zlib

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS3(lime,utils,compress,Zlib)
namespace lime{
namespace utils{
namespace compress{


class HXCPP_CLASS_ATTRIBUTES  Zlib_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Zlib_obj OBJ_;
		Zlib_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="lime.utils.compress.Zlib")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Zlib_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Zlib_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Zlib","\x2b","\x83","\xcf","\x3b"); }

		static void __boot();
		static ::haxe::io::Bytes compress( ::haxe::io::Bytes bytes);
		static Dynamic compress_dyn();

		static ::haxe::io::Bytes decompress( ::haxe::io::Bytes bytes);
		static Dynamic decompress_dyn();

		static Dynamic lime_zlib_compress( Dynamic data);
		static Dynamic lime_zlib_compress_dyn();

		static Dynamic lime_zlib_decompress( Dynamic data);
		static Dynamic lime_zlib_decompress_dyn();

		static ::cpp::Function< ::hx::Object * ( ::hx::Object * ) > cffi_lime_zlib_compress;
		static ::cpp::Function< ::hx::Object * ( ::hx::Object * ) > cffi_lime_zlib_decompress;
};

} // end namespace lime
} // end namespace utils
} // end namespace compress

#endif /* INCLUDED_lime_utils_compress_Zlib */ 
