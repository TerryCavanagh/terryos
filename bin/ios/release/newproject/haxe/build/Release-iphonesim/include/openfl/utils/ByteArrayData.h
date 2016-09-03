#ifndef INCLUDED_openfl_utils_ByteArrayData
#define INCLUDED_openfl_utils_ByteArrayData

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataOutput
#include <openfl/utils/IDataOutput.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataInput
#include <openfl/utils/IDataInput.h>
#endif
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(openfl,utils,ByteArrayData)
HX_DECLARE_CLASS2(openfl,utils,IDataInput)
HX_DECLARE_CLASS2(openfl,utils,IDataOutput)
namespace openfl{
namespace utils{


class HXCPP_CLASS_ATTRIBUTES  ByteArrayData_obj : public ::haxe::io::Bytes_obj{
	public:
		typedef ::haxe::io::Bytes_obj super;
		typedef ByteArrayData_obj OBJ_;
		ByteArrayData_obj();
		Void __construct(hx::Null< int >  __o_length);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="openfl.utils.ByteArrayData")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< ByteArrayData_obj > __new(hx::Null< int >  __o_length);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ByteArrayData_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		hx::Object *__ToInterface(const hx::type_info &inType);
		operator ::openfl::utils::IDataOutput_obj *();
		operator ::openfl::utils::IDataInput_obj *();
		::String __ToString() const { return HX_HCSTRING("ByteArrayData","\x1b","\x20","\xed","\x7e"); }

		static ::openfl::utils::ByteArrayData fromBytes( ::haxe::io::Bytes bytes);
		static Dynamic fromBytes_dyn();

		int objectEncoding;
		int position;
		Dynamic __endian;
		int __length;
		virtual Void clear( );
		Dynamic clear_dyn();

		virtual Void compress( Dynamic algorithm);
		Dynamic compress_dyn();

		virtual Void deflate( );
		Dynamic deflate_dyn();

		virtual Void inflate( );
		Dynamic inflate_dyn();

		virtual bool readBoolean( );
		Dynamic readBoolean_dyn();

		virtual int readByte( );
		Dynamic readByte_dyn();

		virtual Void readBytes( ::openfl::utils::ByteArrayData bytes,hx::Null< int >  offset,hx::Null< int >  length);
		Dynamic readBytes_dyn();

		virtual Float readDouble( );
		Dynamic readDouble_dyn();

		virtual Float readFloat( );
		Dynamic readFloat_dyn();

		virtual int readInt( );
		Dynamic readInt_dyn();

		virtual ::String readMultiByte( int length,::String charSet);
		Dynamic readMultiByte_dyn();

		virtual int readShort( );
		Dynamic readShort_dyn();

		virtual int readUnsignedByte( );
		Dynamic readUnsignedByte_dyn();

		virtual int readUnsignedInt( );
		Dynamic readUnsignedInt_dyn();

		virtual int readUnsignedShort( );
		Dynamic readUnsignedShort_dyn();

		virtual ::String readUTF( );
		Dynamic readUTF_dyn();

		virtual ::String readUTFBytes( int length);
		Dynamic readUTFBytes_dyn();

		virtual Void uncompress( Dynamic algorithm);
		Dynamic uncompress_dyn();

		virtual Void writeBoolean( bool value);
		Dynamic writeBoolean_dyn();

		virtual Void writeByte( int value);
		Dynamic writeByte_dyn();

		virtual Void writeBytes( ::openfl::utils::ByteArrayData bytes,hx::Null< int >  offset,hx::Null< int >  length);
		Dynamic writeBytes_dyn();

		virtual Void writeDouble( Float value);
		Dynamic writeDouble_dyn();

		virtual Void writeFloat( Float value);
		Dynamic writeFloat_dyn();

		virtual Void writeInt( int value);
		Dynamic writeInt_dyn();

		virtual Void writeMultiByte( ::String value,::String charSet);
		Dynamic writeMultiByte_dyn();

		virtual Void writeShort( int value);
		Dynamic writeShort_dyn();

		virtual Void writeUnsignedInt( int value);
		Dynamic writeUnsignedInt_dyn();

		virtual Void writeUTF( ::String value);
		Dynamic writeUTF_dyn();

		virtual Void writeUTFBytes( ::String value);
		Dynamic writeUTFBytes_dyn();

		virtual Void __fromBytes( ::haxe::io::Bytes bytes);
		Dynamic __fromBytes_dyn();

		virtual Void __resize( int size);
		Dynamic __resize_dyn();

		virtual Void __setData( ::haxe::io::Bytes bytes);
		Dynamic __setData_dyn();

		virtual int get_bytesAvailable( );
		Dynamic get_bytesAvailable_dyn();

		virtual Dynamic get_endian( );
		Dynamic get_endian_dyn();

		virtual Dynamic set_endian( Dynamic value);
		Dynamic set_endian_dyn();

};

} // end namespace openfl
} // end namespace utils

#endif /* INCLUDED_openfl_utils_ByteArrayData */ 
