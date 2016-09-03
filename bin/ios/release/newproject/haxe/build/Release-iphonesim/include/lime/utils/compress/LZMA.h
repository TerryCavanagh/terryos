#ifndef INCLUDED_lime_utils_compress_LZMA
#define INCLUDED_lime_utils_compress_LZMA

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS3(lime,utils,compress,LZMA)
namespace lime{
namespace utils{
namespace compress{


class HXCPP_CLASS_ATTRIBUTES  LZMA_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef LZMA_obj OBJ_;
		LZMA_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="lime.utils.compress.LZMA")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< LZMA_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~LZMA_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("LZMA","\x62","\xc5","\x80","\x32"); }

		static void __boot();
		static ::haxe::io::Bytes compress( ::haxe::io::Bytes bytes);
		static Dynamic compress_dyn();

		static ::haxe::io::Bytes decompress( ::haxe::io::Bytes bytes);
		static Dynamic decompress_dyn();

		static Dynamic lime_lzma_compress( Dynamic data);
		static Dynamic lime_lzma_compress_dyn();

		static Dynamic lime_lzma_decompress( Dynamic data);
		static Dynamic lime_lzma_decompress_dyn();

		static ::cpp::Function< ::hx::Object * ( ::hx::Object * ) > cffi_lime_lzma_compress;
		static ::cpp::Function< ::hx::Object * ( ::hx::Object * ) > cffi_lime_lzma_decompress;
};

} // end namespace lime
} // end namespace utils
} // end namespace compress

#endif /* INCLUDED_lime_utils_compress_LZMA */ 
