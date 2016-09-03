#ifndef INCLUDED_openfl_utils__ByteArray_ByteArray_Impl_
#define INCLUDED_openfl_utils__ByteArray_ByteArray_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(lime,utils,Bytes)
HX_DECLARE_CLASS2(openfl,utils,ByteArrayData)
HX_DECLARE_CLASS2(openfl,utils,IDataInput)
HX_DECLARE_CLASS2(openfl,utils,IDataOutput)
HX_DECLARE_CLASS3(openfl,utils,_ByteArray,ByteArray_Impl_)
namespace openfl{
namespace utils{
namespace _ByteArray{


class HXCPP_CLASS_ATTRIBUTES  ByteArray_Impl__obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ByteArray_Impl__obj OBJ_;
		ByteArray_Impl__obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="openfl.utils._ByteArray.ByteArray_Impl_")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< ByteArray_Impl__obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ByteArray_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("ByteArray_Impl_","\xb1","\xb0","\xf9","\xe1"); }

		static int defaultObjectEncoding;
		static ::openfl::utils::ByteArrayData _new( hx::Null< int >  length);
		static Dynamic _new_dyn();

		static int get( ::openfl::utils::ByteArrayData this1,int index);
		static Dynamic get_dyn();

		static int set( ::openfl::utils::ByteArrayData this1,int index,int value);
		static Dynamic set_dyn();

		static ::openfl::utils::ByteArrayData fromArrayBuffer( ::haxe::io::Bytes buffer);
		static Dynamic fromArrayBuffer_dyn();

		static ::openfl::utils::ByteArrayData fromBytes( ::haxe::io::Bytes bytes);
		static Dynamic fromBytes_dyn();

		static ::openfl::utils::ByteArrayData fromBytesData( Array< unsigned char > bytesData);
		static Dynamic fromBytesData_dyn();

		static ::haxe::io::Bytes toArrayBuffer( ::openfl::utils::ByteArrayData byteArray);
		static Dynamic toArrayBuffer_dyn();

		static ::haxe::io::Bytes toBytes( ::openfl::utils::ByteArrayData byteArray);
		static Dynamic toBytes_dyn();

		static Array< unsigned char > toBytesData( ::openfl::utils::ByteArrayData byteArray);
		static Dynamic toBytesData_dyn();

		static ::lime::utils::Bytes toLimeBytes( ::openfl::utils::ByteArrayData byteArray);
		static Dynamic toLimeBytes_dyn();

		static int get_length( ::openfl::utils::ByteArrayData this1);
		static Dynamic get_length_dyn();

		static int set_length( ::openfl::utils::ByteArrayData this1,int value);
		static Dynamic set_length_dyn();

};

} // end namespace openfl
} // end namespace utils
} // end namespace _ByteArray

#endif /* INCLUDED_openfl_utils__ByteArray_ByteArray_Impl_ */ 
