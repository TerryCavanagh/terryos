#ifndef INCLUDED_openfl_display3D__Context3DVertexBufferFormat_Context3DVertexBufferFormat_Impl_
#define INCLUDED_openfl_display3D__Context3DVertexBufferFormat_Context3DVertexBufferFormat_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(openfl,display3D,_Context3DVertexBufferFormat,Context3DVertexBufferFormat_Impl_)
namespace openfl{
namespace display3D{
namespace _Context3DVertexBufferFormat{


class HXCPP_CLASS_ATTRIBUTES  Context3DVertexBufferFormat_Impl__obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Context3DVertexBufferFormat_Impl__obj OBJ_;
		Context3DVertexBufferFormat_Impl__obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="openfl.display3D._Context3DVertexBufferFormat.Context3DVertexBufferFormat_Impl_")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Context3DVertexBufferFormat_Impl__obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Context3DVertexBufferFormat_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Context3DVertexBufferFormat_Impl_","\x1b","\xb9","\x26","\xce"); }

		static void __boot();
		static Dynamic BYTES_4;
		static Dynamic FLOAT_1;
		static Dynamic FLOAT_2;
		static Dynamic FLOAT_3;
		static Dynamic FLOAT_4;
		static Dynamic fromString( ::String value);
		static Dynamic fromString_dyn();

		static ::String toString( int value);
		static Dynamic toString_dyn();

};

} // end namespace openfl
} // end namespace display3D
} // end namespace _Context3DVertexBufferFormat

#endif /* INCLUDED_openfl_display3D__Context3DVertexBufferFormat_Context3DVertexBufferFormat_Impl_ */ 
