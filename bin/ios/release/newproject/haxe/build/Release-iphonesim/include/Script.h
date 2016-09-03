#ifndef INCLUDED_Script
#define INCLUDED_Script

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Script)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS1(hscript,Interp)
HX_DECLARE_CLASS1(hscript,Parser)


class HXCPP_CLASS_ATTRIBUTES  Script_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Script_obj OBJ_;
		Script_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="Script")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Script_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Script_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Script","\x2b","\xc2","\xf4","\x7b"); }

		static Void init( );
		static Dynamic init_dyn();

		static Void loadapps( );
		static Dynamic loadapps_dyn();

		static bool loadscript( ::String scriptname);
		static Dynamic loadscript_dyn();

		static bool beginparsedscript( );
		static Dynamic beginparsedscript_dyn();

		static Void runapp( ::String scriptname);
		static Dynamic runapp_dyn();

		static Void update( );
		static Dynamic update_dyn();

		static Void resetvariables( );
		static Dynamic resetvariables_dyn();

		static bool runningscript;
		static int scriptdelay;
		static bool stopping;
		static Array< ::String > savedprogram;
		static ::String activescript;
		static ::haxe::ds::StringMap applist;
		static Dynamic parsedscript;
		static ::hscript::Parser parser;
		static ::hscript::Interp interpreter;
		static Dynamic returnvalue;
		static Dynamic initfunction;
		static Dynamic updatefunction;
};


#endif /* INCLUDED_Script */ 
