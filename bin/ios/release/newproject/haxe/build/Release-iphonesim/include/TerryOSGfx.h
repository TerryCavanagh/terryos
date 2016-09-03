#ifndef INCLUDED_TerryOSGfx
#define INCLUDED_TerryOSGfx

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(TerryOSGfx)


class HXCPP_CLASS_ATTRIBUTES  TerryOSGfx_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef TerryOSGfx_obj OBJ_;
		TerryOSGfx_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="TerryOSGfx")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< TerryOSGfx_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TerryOSGfx_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("TerryOSGfx","\xed","\xe1","\x9c","\x63"); }

		static void __boot();
		static Array< int > colours;
		static int fixcol( int colour);
		static Dynamic fixcol_dyn();

		static Void fillbox( Float x,Float y,Float width,Float height,int colour);
		static Dynamic fillbox_dyn();

		static Void fillcircle( Float x,Float y,Float radius,int colour);
		static Dynamic fillcircle_dyn();

};


#endif /* INCLUDED_TerryOSGfx */ 
