#ifndef INCLUDED_InterpExtended
#define INCLUDED_InterpExtended

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_hscript_Interp
#include <hscript/Interp.h>
#endif
HX_DECLARE_CLASS0(InterpExtended)
HX_DECLARE_CLASS1(hscript,Interp)


class HXCPP_CLASS_ATTRIBUTES  InterpExtended_obj : public ::hscript::Interp_obj{
	public:
		typedef ::hscript::Interp_obj super;
		typedef InterpExtended_obj OBJ_;
		InterpExtended_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="InterpExtended")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< InterpExtended_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~InterpExtended_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("InterpExtended","\xcd","\x92","\xf0","\xc3"); }

		virtual Dynamic get( Dynamic o,::String f);

		virtual Dynamic set( Dynamic o,::String f,Dynamic v);

};


#endif /* INCLUDED_InterpExtended */ 
