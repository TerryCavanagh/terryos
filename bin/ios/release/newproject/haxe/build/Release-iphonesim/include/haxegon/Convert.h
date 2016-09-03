#ifndef INCLUDED_haxegon_Convert
#define INCLUDED_haxegon_Convert

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxegon,Convert)
namespace haxegon{


class HXCPP_CLASS_ATTRIBUTES  Convert_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Convert_obj OBJ_;
		Convert_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="haxegon.Convert")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Convert_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Convert_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Convert","\xd3","\x25","\x1b","\xe8"); }

		static ::String tostring( Dynamic value);
		static Dynamic tostring_dyn();

		static int toint( Dynamic value);
		static Dynamic toint_dyn();

		static Float tofloat( Dynamic value);
		static Dynamic tofloat_dyn();

};

} // end namespace haxegon

#endif /* INCLUDED_haxegon_Convert */ 
