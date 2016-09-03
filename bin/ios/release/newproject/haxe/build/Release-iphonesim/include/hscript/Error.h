#ifndef INCLUDED_hscript_Error
#define INCLUDED_hscript_Error

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(hscript,Error)
HX_DECLARE_CLASS1(hscript,ErrorDef)
namespace hscript{


class HXCPP_CLASS_ATTRIBUTES  Error_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Error_obj OBJ_;
		Error_obj();
		Void __construct(::hscript::ErrorDef e,int pmin,int pmax);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="hscript.Error")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Error_obj > __new(::hscript::ErrorDef e,int pmin,int pmax);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Error_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Error","\xa8","\x3b","\x57","\x06"); }

		::hscript::ErrorDef e;
		int pmin;
		int pmax;
};

} // end namespace hscript

#endif /* INCLUDED_hscript_Error */ 
