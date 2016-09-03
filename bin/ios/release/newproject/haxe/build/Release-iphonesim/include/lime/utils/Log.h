#ifndef INCLUDED_lime_utils_Log
#define INCLUDED_lime_utils_Log

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Sys)
HX_DECLARE_CLASS2(lime,utils,Log)
namespace lime{
namespace utils{


class HXCPP_CLASS_ATTRIBUTES  Log_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Log_obj OBJ_;
		Log_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="lime.utils.Log")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Log_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Log_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		static void __init__();

		::String __ToString() const { return HX_HCSTRING("Log","\x64","\x0c","\x3a","\x00"); }

		static int level;
		static Void debug( ::String message,Dynamic info);
		static Dynamic debug_dyn();

		static Void error( ::String message,Dynamic info);
		static Dynamic error_dyn();

		static Void info( ::String message,Dynamic info);
		static Dynamic info_dyn();

		static Void print( ::String message);
		static Dynamic print_dyn();

		static Void println( ::String message);
		static Dynamic println_dyn();

		static Void verbose( ::String message,Dynamic info);
		static Dynamic verbose_dyn();

		static Void warn( ::String message,Dynamic info);
		static Dynamic warn_dyn();

};

} // end namespace lime
} // end namespace utils

#endif /* INCLUDED_lime_utils_Log */ 
