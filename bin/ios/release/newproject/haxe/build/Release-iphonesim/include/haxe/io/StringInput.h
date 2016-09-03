#ifndef INCLUDED_haxe_io_StringInput
#define INCLUDED_haxe_io_StringInput

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_io_BytesInput
#include <haxe/io/BytesInput.h>
#endif
HX_DECLARE_CLASS2(haxe,io,BytesInput)
HX_DECLARE_CLASS2(haxe,io,Input)
HX_DECLARE_CLASS2(haxe,io,StringInput)
namespace haxe{
namespace io{


class HXCPP_CLASS_ATTRIBUTES  StringInput_obj : public ::haxe::io::BytesInput_obj{
	public:
		typedef ::haxe::io::BytesInput_obj super;
		typedef StringInput_obj OBJ_;
		StringInput_obj();
		Void __construct(::String s);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="haxe.io.StringInput")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< StringInput_obj > __new(::String s);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~StringInput_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		::String __ToString() const { return HX_HCSTRING("StringInput","\x59","\x0d","\x53","\xad"); }

};

} // end namespace haxe
} // end namespace io

#endif /* INCLUDED_haxe_io_StringInput */ 
