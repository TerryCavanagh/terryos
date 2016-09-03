#ifndef INCLUDED_lime_utils_compress_Deflate
#define INCLUDED_lime_utils_compress_Deflate

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS3(lime,utils,compress,Deflate)
namespace lime{
namespace utils{
namespace compress{


class HXCPP_CLASS_ATTRIBUTES  Deflate_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Deflate_obj OBJ_;
		Deflate_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="lime.utils.compress.Deflate")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Deflate_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Deflate_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Deflate","\x4b","\x33","\x4b","\x70"); }

		static void __boot();
		static ::haxe::io::Bytes compress( ::haxe::io::Bytes bytes);
		static Dynamic compress_dyn();

		static ::haxe::io::Bytes decompress( ::haxe::io::Bytes bytes);
		static Dynamic decompress_dyn();

		static Dynamic lime_deflate_compress( Dynamic data);
		static Dynamic lime_deflate_compress_dyn();

		static Dynamic lime_deflate_decompress( Dynamic data);
		static Dynamic lime_deflate_decompress_dyn();

		static ::cpp::Function< ::hx::Object * ( ::hx::Object * ) > cffi_lime_deflate_compress;
		static ::cpp::Function< ::hx::Object * ( ::hx::Object * ) > cffi_lime_deflate_decompress;
};

} // end namespace lime
} // end namespace utils
} // end namespace compress

#endif /* INCLUDED_lime_utils_compress_Deflate */ 
