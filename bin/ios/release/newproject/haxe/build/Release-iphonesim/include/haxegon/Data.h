#ifndef INCLUDED_haxegon_Data
#define INCLUDED_haxegon_Data

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxegon,Data)
namespace haxegon{


class HXCPP_CLASS_ATTRIBUTES  Data_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Data_obj OBJ_;
		Data_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="haxegon.Data")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Data_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Data_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Data","\x4a","\x82","\x3c","\x2d"); }

		static void __boot();
		static int width;
		static int height;
		static Array< ::String > loadtext( ::String textfile);
		static Dynamic loadtext_dyn();

		static ::String mid( ::String currentstring,hx::Null< int >  start,hx::Null< int >  length);
		static Dynamic mid_dyn();

		static ::String replacechar( ::String currentstring,::String ch,::String ch2);
		static Dynamic replacechar_dyn();

		static ::String tempstring;
};

} // end namespace haxegon

#endif /* INCLUDED_haxegon_Data */ 
