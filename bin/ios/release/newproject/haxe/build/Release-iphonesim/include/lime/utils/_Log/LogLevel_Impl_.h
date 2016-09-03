#ifndef INCLUDED_lime_utils__Log_LogLevel_Impl_
#define INCLUDED_lime_utils__Log_LogLevel_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(lime,utils,_Log,LogLevel_Impl_)
namespace lime{
namespace utils{
namespace _Log{


class HXCPP_CLASS_ATTRIBUTES  LogLevel_Impl__obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef LogLevel_Impl__obj OBJ_;
		LogLevel_Impl__obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="lime.utils._Log.LogLevel_Impl_")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< LogLevel_Impl__obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~LogLevel_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("LogLevel_Impl_","\x20","\x2b","\x1e","\x41"); }

		static void __boot();
		static int NONE;
		static int ERROR;
		static int WARN;
		static int INFO;
		static int DEBUG;
		static int VERBOSE;
		static bool gt( int a,int b);
		static Dynamic gt_dyn();

		static bool gte( int a,int b);
		static Dynamic gte_dyn();

		static bool lt( int a,int b);
		static Dynamic lt_dyn();

		static bool lte( int a,int b);
		static Dynamic lte_dyn();

};

} // end namespace lime
} // end namespace utils
} // end namespace _Log

#endif /* INCLUDED_lime_utils__Log_LogLevel_Impl_ */ 
