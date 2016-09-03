#ifndef INCLUDED_lime_graphics_format_BMP
#define INCLUDED_lime_graphics_format_BMP

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(lime,graphics,Image)
HX_DECLARE_CLASS3(lime,graphics,format,BMP)
HX_DECLARE_CLASS3(lime,graphics,format,BMPType)
namespace lime{
namespace graphics{
namespace format{


class HXCPP_CLASS_ATTRIBUTES  BMP_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef BMP_obj OBJ_;
		BMP_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="lime.graphics.format.BMP")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< BMP_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~BMP_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("BMP","\x25","\x58","\x32","\x00"); }

		static ::haxe::io::Bytes encode( ::lime::graphics::Image image,::lime::graphics::format::BMPType type);
		static Dynamic encode_dyn();

};

} // end namespace lime
} // end namespace graphics
} // end namespace format

#endif /* INCLUDED_lime_graphics_format_BMP */ 
