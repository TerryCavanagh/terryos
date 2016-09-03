#ifndef INCLUDED_openfl_text__FontType_FontType_Impl_
#define INCLUDED_openfl_text__FontType_FontType_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(openfl,text,_FontType,FontType_Impl_)
namespace openfl{
namespace text{
namespace _FontType{


class HXCPP_CLASS_ATTRIBUTES  FontType_Impl__obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef FontType_Impl__obj OBJ_;
		FontType_Impl__obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="openfl.text._FontType.FontType_Impl_")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< FontType_Impl__obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FontType_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("FontType_Impl_","\xa9","\xe5","\x01","\xa6"); }

		static void __boot();
		static Dynamic DEVICE;
		static Dynamic EMBEDDED;
		static Dynamic EMBEDDED_CFF;
		static Dynamic fromString( ::String value);
		static Dynamic fromString_dyn();

		static ::String toString( int value);
		static Dynamic toString_dyn();

};

} // end namespace openfl
} // end namespace text
} // end namespace _FontType

#endif /* INCLUDED_openfl_text__FontType_FontType_Impl_ */ 
