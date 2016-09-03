#ifndef INCLUDED_openfl_text__TextFieldAutoSize_TextFieldAutoSize_Impl_
#define INCLUDED_openfl_text__TextFieldAutoSize_TextFieldAutoSize_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(openfl,text,_TextFieldAutoSize,TextFieldAutoSize_Impl_)
namespace openfl{
namespace text{
namespace _TextFieldAutoSize{


class HXCPP_CLASS_ATTRIBUTES  TextFieldAutoSize_Impl__obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef TextFieldAutoSize_Impl__obj OBJ_;
		TextFieldAutoSize_Impl__obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="openfl.text._TextFieldAutoSize.TextFieldAutoSize_Impl_")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< TextFieldAutoSize_Impl__obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TextFieldAutoSize_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("TextFieldAutoSize_Impl_","\xfd","\x15","\xbc","\x50"); }

		static void __boot();
		static Dynamic CENTER;
		static Dynamic LEFT;
		static Dynamic NONE;
		static Dynamic RIGHT;
		static Dynamic fromString( ::String value);
		static Dynamic fromString_dyn();

		static ::String toString( int value);
		static Dynamic toString_dyn();

};

} // end namespace openfl
} // end namespace text
} // end namespace _TextFieldAutoSize

#endif /* INCLUDED_openfl_text__TextFieldAutoSize_TextFieldAutoSize_Impl_ */ 
