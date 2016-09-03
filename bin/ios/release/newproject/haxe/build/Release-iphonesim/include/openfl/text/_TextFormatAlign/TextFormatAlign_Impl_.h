#ifndef INCLUDED_openfl_text__TextFormatAlign_TextFormatAlign_Impl_
#define INCLUDED_openfl_text__TextFormatAlign_TextFormatAlign_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(openfl,text,_TextFormatAlign,TextFormatAlign_Impl_)
namespace openfl{
namespace text{
namespace _TextFormatAlign{


class HXCPP_CLASS_ATTRIBUTES  TextFormatAlign_Impl__obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef TextFormatAlign_Impl__obj OBJ_;
		TextFormatAlign_Impl__obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="openfl.text._TextFormatAlign.TextFormatAlign_Impl_")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< TextFormatAlign_Impl__obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TextFormatAlign_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("TextFormatAlign_Impl_","\xa1","\x7b","\x66","\x91"); }

		static void __boot();
		static Dynamic CENTER;
		static Dynamic END;
		static Dynamic JUSTIFY;
		static Dynamic LEFT;
		static Dynamic RIGHT;
		static Dynamic START;
		static Dynamic fromString( ::String value);
		static Dynamic fromString_dyn();

		static ::String toString( int value);
		static Dynamic toString_dyn();

};

} // end namespace openfl
} // end namespace text
} // end namespace _TextFormatAlign

#endif /* INCLUDED_openfl_text__TextFormatAlign_TextFormatAlign_Impl_ */ 
