#ifndef INCLUDED_haxegon_Debug
#define INCLUDED_haxegon_Debug

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxegon,Debug)
namespace haxegon{


class HXCPP_CLASS_ATTRIBUTES  Debug_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Debug_obj OBJ_;
		Debug_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="haxegon.Debug")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Debug_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Debug_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Debug","\x33","\xc2","\x4c","\x6a"); }

		static void __boot();
		static Void clearlog( );
		static Dynamic clearlog_dyn();

		static Void log( Dynamic t);
		static Dynamic log_dyn();

		static Void test( Dynamic t);
		static Dynamic test_dyn();

		static Void showlog( );
		static Dynamic showlog_dyn();

		static bool showtest;
		static Array< ::String > debuglog;
};

} // end namespace haxegon

#endif /* INCLUDED_haxegon_Debug */ 
