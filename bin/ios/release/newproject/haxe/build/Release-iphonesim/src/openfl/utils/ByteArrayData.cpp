#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_io_Error
#include <haxe/io/Error.h>
#endif
#ifndef INCLUDED_lime_utils_compress_Deflate
#include <lime/utils/compress/Deflate.h>
#endif
#ifndef INCLUDED_lime_utils_compress_LZMA
#include <lime/utils/compress/LZMA.h>
#endif
#ifndef INCLUDED_lime_utils_compress_Zlib
#include <lime/utils/compress/Zlib.h>
#endif
#ifndef INCLUDED_openfl_errors_EOFError
#include <openfl/errors/EOFError.h>
#endif
#ifndef INCLUDED_openfl_errors_Error
#include <openfl/errors/Error.h>
#endif
#ifndef INCLUDED_openfl_errors_IOError
#include <openfl/errors/IOError.h>
#endif
#ifndef INCLUDED_openfl_utils_ByteArrayData
#include <openfl/utils/ByteArrayData.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataInput
#include <openfl/utils/IDataInput.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataOutput
#include <openfl/utils/IDataOutput.h>
#endif
#ifndef INCLUDED_openfl_utils__ByteArray_ByteArray_Impl_
#include <openfl/utils/_ByteArray/ByteArray_Impl_.h>
#endif
namespace openfl{
namespace utils{

Void ByteArrayData_obj::__construct(hx::Null< int >  __o_length)
{
HX_STACK_FRAME("openfl.utils.ByteArrayData","new",0x36383a32,"openfl.utils.ByteArrayData.new","openfl/utils/ByteArray.hx",234,0xaa5cee4a)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_length,"length")
int length = __o_length.Default(0);
{
	HX_STACK_LINE(236)
	int tmp = length;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(236)
	::haxe::io::Bytes tmp1 = ::haxe::io::Bytes_obj::alloc(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(236)
	::haxe::io::Bytes bytes = tmp1;		HX_STACK_VAR(bytes,"bytes");
	HX_STACK_LINE(241)
	int tmp2 = length;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(241)
	super::__construct(tmp2,bytes->b);
	HX_STACK_LINE(244)
	this->__length = length;
	HX_STACK_LINE(245)
	this->__endian = ((Dynamic)((int)0));
	HX_STACK_LINE(246)
	this->position = (int)0;
}
;
	return null();
}

//ByteArrayData_obj::~ByteArrayData_obj() { }

Dynamic ByteArrayData_obj::__CreateEmpty() { return  new ByteArrayData_obj; }
hx::ObjectPtr< ByteArrayData_obj > ByteArrayData_obj::__new(hx::Null< int >  __o_length)
{  hx::ObjectPtr< ByteArrayData_obj > _result_ = new ByteArrayData_obj();
	_result_->__construct(__o_length);
	return _result_;}

Dynamic ByteArrayData_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ByteArrayData_obj > _result_ = new ByteArrayData_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

hx::Object *ByteArrayData_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::openfl::utils::IDataOutput_obj)) return operator ::openfl::utils::IDataOutput_obj *();
	if (inType==typeid( ::openfl::utils::IDataInput_obj)) return operator ::openfl::utils::IDataInput_obj *();
	return super::__ToInterface(inType);
}

ByteArrayData_obj::operator ::openfl::utils::IDataOutput_obj *()
	{ return new ::openfl::utils::IDataOutput_delegate_< ByteArrayData_obj >(this); }
ByteArrayData_obj::operator ::openfl::utils::IDataInput_obj *()
	{ return new ::openfl::utils::IDataInput_delegate_< ByteArrayData_obj >(this); }
Void ByteArrayData_obj::clear( ){
{
		HX_STACK_FRAME("openfl.utils.ByteArrayData","clear",0x0f8b73df,"openfl.utils.ByteArrayData.clear","openfl/utils/ByteArray.hx",251,0xaa5cee4a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(253)
		this->length = (int)0;
		HX_STACK_LINE(254)
		this->position = (int)0;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArrayData_obj,clear,(void))

Void ByteArrayData_obj::compress( Dynamic __o_algorithm){
Dynamic algorithm = __o_algorithm.Default(2);
	HX_STACK_FRAME("openfl.utils.ByteArrayData","compress",0xe3300490,"openfl.utils.ByteArrayData.compress","openfl/utils/ByteArray.hx",259,0xaa5cee4a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(algorithm,"algorithm")
{
		HX_STACK_LINE(274)
		Dynamic tmp = algorithm;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(274)
		::haxe::io::Bytes tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(274)
		switch( (int)(tmp)){
			case (int)0: {
				HX_STACK_LINE(276)
				tmp1 = ::lime::utils::compress::Deflate_obj::compress(hx::ObjectPtr<OBJ_>(this));
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(277)
				tmp1 = ::lime::utils::compress::LZMA_obj::compress(hx::ObjectPtr<OBJ_>(this));
			}
			;break;
			default: {
				HX_STACK_LINE(278)
				tmp1 = ::lime::utils::compress::Zlib_obj::compress(hx::ObjectPtr<OBJ_>(this));
			}
		}
		HX_STACK_LINE(274)
		::haxe::io::Bytes bytes = tmp1;		HX_STACK_VAR(bytes,"bytes");
		HX_STACK_LINE(282)
		bool tmp2 = (bytes != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(282)
		if ((tmp2)){
			HX_STACK_LINE(284)
			{
				HX_STACK_LINE(284)
				this->b = bytes->b;
				HX_STACK_LINE(284)
				this->__length = bytes->length;
			}
			HX_STACK_LINE(286)
			int tmp3 = this->__length;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(286)
			this->length = tmp3;
			HX_STACK_LINE(287)
			int tmp4 = this->length;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(287)
			this->position = tmp4;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArrayData_obj,compress,(void))

Void ByteArrayData_obj::deflate( ){
{
		HX_STACK_FRAME("openfl.utils.ByteArrayData","deflate",0x97ecc63d,"openfl.utils.ByteArrayData.deflate","openfl/utils/ByteArray.hx",296,0xaa5cee4a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(296)
		this->compress(((Dynamic)((int)0)));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArrayData_obj,deflate,(void))

Void ByteArrayData_obj::inflate( ){
{
		HX_STACK_FRAME("openfl.utils.ByteArrayData","inflate",0x010e5759,"openfl.utils.ByteArrayData.inflate","openfl/utils/ByteArray.hx",312,0xaa5cee4a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(312)
		this->uncompress(((Dynamic)((int)0)));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArrayData_obj,inflate,(void))

bool ByteArrayData_obj::readBoolean( ){
	HX_STACK_FRAME("openfl.utils.ByteArrayData","readBoolean",0x98e809c4,"openfl.utils.ByteArrayData.readBoolean","openfl/utils/ByteArray.hx",317,0xaa5cee4a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(319)
	int tmp = this->position;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(319)
	int tmp1 = this->length;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(319)
	bool tmp2 = (tmp < tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(319)
	if ((tmp2)){
		HX_STACK_LINE(321)
		int tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(321)
		{
			HX_STACK_LINE(321)
			int tmp4 = (this->position)++;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(321)
			int pos = tmp4;		HX_STACK_VAR(pos,"pos");
			HX_STACK_LINE(321)
			tmp3 = this->b->__get(pos);
		}
		HX_STACK_LINE(321)
		bool tmp4 = (tmp3 != (int)0);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(321)
		return tmp4;
	}
	else{
		HX_STACK_LINE(325)
		::openfl::errors::EOFError tmp3 = ::openfl::errors::EOFError_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(325)
		HX_STACK_DO_THROW(tmp3);
		HX_STACK_LINE(326)
		return false;
	}
	HX_STACK_LINE(319)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArrayData_obj,readBoolean,return )

int ByteArrayData_obj::readByte( ){
	HX_STACK_FRAME("openfl.utils.ByteArrayData","readByte",0xc88bb66c,"openfl.utils.ByteArrayData.readByte","openfl/utils/ByteArray.hx",333,0xaa5cee4a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(335)
	int tmp = this->readUnsignedByte();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(335)
	int value = tmp;		HX_STACK_VAR(value,"value");
	HX_STACK_LINE(337)
	int tmp1 = (int(value) & int((int)128));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(337)
	bool tmp2 = (tmp1 != (int)0);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(337)
	if ((tmp2)){
		HX_STACK_LINE(339)
		int tmp3 = (value - (int)256);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(339)
		return tmp3;
	}
	else{
		HX_STACK_LINE(343)
		int tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(343)
		return tmp3;
	}
	HX_STACK_LINE(337)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArrayData_obj,readByte,return )

Void ByteArrayData_obj::readBytes( ::openfl::utils::ByteArrayData bytes,hx::Null< int >  __o_offset,hx::Null< int >  __o_length){
int offset = __o_offset.Default(0);
int length = __o_length.Default(0);
	HX_STACK_FRAME("openfl.utils.ByteArrayData","readBytes",0xb1b3e887,"openfl.utils.ByteArrayData.readBytes","openfl/utils/ByteArray.hx",350,0xaa5cee4a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(bytes,"bytes")
	HX_STACK_ARG(offset,"offset")
	HX_STACK_ARG(length,"length")
{
		HX_STACK_LINE(352)
		bool tmp = (length == (int)0);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(352)
		if ((tmp)){
			HX_STACK_LINE(352)
			int tmp1 = this->length;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(352)
			int tmp2 = this->position;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(352)
			int tmp3 = (tmp1 - tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(352)
			length = tmp3;
		}
		HX_STACK_LINE(354)
		int tmp1 = this->position;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(354)
		int tmp2 = length;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(354)
		int tmp3 = (tmp1 + tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(354)
		int tmp4 = this->length;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(354)
		bool tmp5 = (tmp3 > tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(354)
		if ((tmp5)){
			HX_STACK_LINE(356)
			::openfl::errors::EOFError tmp6 = ::openfl::errors::EOFError_obj::__new();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(356)
			HX_STACK_DO_THROW(tmp6);
		}
		HX_STACK_LINE(360)
		int tmp6 = bytes->length;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(360)
		int tmp7 = (offset + length);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(360)
		bool tmp8 = (tmp6 < tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(360)
		if ((tmp8)){
			HX_STACK_LINE(362)
			int tmp9 = (offset + length);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(362)
			bytes->__resize(tmp9);
		}
		HX_STACK_LINE(366)
		int tmp9 = offset;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(366)
		int tmp10 = this->position;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(366)
		int tmp11 = length;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(366)
		bytes->blit(tmp9,hx::ObjectPtr<OBJ_>(this),tmp10,tmp11);
		HX_STACK_LINE(367)
		hx::AddEq(this->position,length);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(ByteArrayData_obj,readBytes,(void))

Float ByteArrayData_obj::readDouble( ){
	HX_STACK_FRAME("openfl.utils.ByteArrayData","readDouble",0xd7136375,"openfl.utils.ByteArrayData.readDouble","openfl/utils/ByteArray.hx",372,0xaa5cee4a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(374)
	int tmp = this->position;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(374)
	int tmp1 = (tmp + (int)8);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(374)
	int tmp2 = this->length;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(374)
	bool tmp3 = (tmp1 > tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(374)
	if ((tmp3)){
		HX_STACK_LINE(376)
		::openfl::errors::EOFError tmp4 = ::openfl::errors::EOFError_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(376)
		HX_STACK_DO_THROW(tmp4);
	}
	HX_STACK_LINE(380)
	hx::AddEq(this->position,(int)8);
	HX_STACK_LINE(381)
	Float tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(381)
	{
		HX_STACK_LINE(381)
		int tmp5 = this->position;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(381)
		int tmp6 = (tmp5 - (int)8);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(381)
		int pos = tmp6;		HX_STACK_VAR(pos,"pos");
		HX_STACK_LINE(381)
		bool tmp7 = (pos < (int)0);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(381)
		bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(381)
		bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(381)
		if ((tmp8)){
			HX_STACK_LINE(381)
			int tmp10 = (pos + (int)8);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(381)
			int tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(381)
			int tmp12 = this->length;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(381)
			int tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(381)
			tmp9 = (tmp11 > tmp13);
		}
		else{
			HX_STACK_LINE(381)
			tmp9 = true;
		}
		HX_STACK_LINE(381)
		if ((tmp9)){
			HX_STACK_LINE(381)
			HX_STACK_DO_THROW(::haxe::io::Error_obj::OutsideBounds);
		}
		HX_STACK_LINE(381)
		tmp4 = ::__hxcpp_memory_get_double(this->b,pos);
	}
	HX_STACK_LINE(381)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArrayData_obj,readDouble,return )

Float ByteArrayData_obj::readFloat( ){
	HX_STACK_FRAME("openfl.utils.ByteArrayData","readFloat",0xf6b2a5b8,"openfl.utils.ByteArrayData.readFloat","openfl/utils/ByteArray.hx",386,0xaa5cee4a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(388)
	int tmp = this->position;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(388)
	int tmp1 = (tmp + (int)4);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(388)
	int tmp2 = this->length;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(388)
	bool tmp3 = (tmp1 > tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(388)
	if ((tmp3)){
		HX_STACK_LINE(390)
		::openfl::errors::EOFError tmp4 = ::openfl::errors::EOFError_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(390)
		HX_STACK_DO_THROW(tmp4);
	}
	HX_STACK_LINE(394)
	hx::AddEq(this->position,(int)4);
	HX_STACK_LINE(395)
	Float tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(395)
	{
		HX_STACK_LINE(395)
		int tmp5 = this->position;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(395)
		int tmp6 = (tmp5 - (int)4);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(395)
		int pos = tmp6;		HX_STACK_VAR(pos,"pos");
		HX_STACK_LINE(395)
		bool tmp7 = (pos < (int)0);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(395)
		bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(395)
		bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(395)
		if ((tmp8)){
			HX_STACK_LINE(395)
			int tmp10 = (pos + (int)4);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(395)
			int tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(395)
			int tmp12 = this->length;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(395)
			int tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(395)
			tmp9 = (tmp11 > tmp13);
		}
		else{
			HX_STACK_LINE(395)
			tmp9 = true;
		}
		HX_STACK_LINE(395)
		if ((tmp9)){
			HX_STACK_LINE(395)
			HX_STACK_DO_THROW(::haxe::io::Error_obj::OutsideBounds);
		}
		HX_STACK_LINE(395)
		tmp4 = ::__hxcpp_memory_get_float(this->b,pos);
	}
	HX_STACK_LINE(395)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArrayData_obj,readFloat,return )

int ByteArrayData_obj::readInt( ){
	HX_STACK_FRAME("openfl.utils.ByteArrayData","readInt",0xf7bc6e0b,"openfl.utils.ByteArrayData.readInt","openfl/utils/ByteArray.hx",400,0xaa5cee4a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(402)
	int tmp = this->readUnsignedByte();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(402)
	int ch1 = tmp;		HX_STACK_VAR(ch1,"ch1");
	HX_STACK_LINE(403)
	int tmp1 = this->readUnsignedByte();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(403)
	int ch2 = tmp1;		HX_STACK_VAR(ch2,"ch2");
	HX_STACK_LINE(404)
	int tmp2 = this->readUnsignedByte();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(404)
	int ch3 = tmp2;		HX_STACK_VAR(ch3,"ch3");
	HX_STACK_LINE(405)
	int tmp3 = this->readUnsignedByte();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(405)
	int ch4 = tmp3;		HX_STACK_VAR(ch4,"ch4");
	HX_STACK_LINE(407)
	Dynamic tmp4 = this->__endian;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(407)
	bool tmp5 = (tmp4 == ((Dynamic)((int)1)));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(407)
	if ((tmp5)){
		HX_STACK_LINE(409)
		int tmp6 = (int(ch4) << int((int)24));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(409)
		int tmp7 = (int(ch3) << int((int)16));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(409)
		int tmp8 = (int(tmp6) | int(tmp7));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(409)
		int tmp9 = (int(ch2) << int((int)8));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(409)
		int tmp10 = (int(tmp8) | int(tmp9));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(409)
		int tmp11 = ch1;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(409)
		int tmp12 = (int(tmp10) | int(tmp11));		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(409)
		return tmp12;
	}
	else{
		HX_STACK_LINE(413)
		int tmp6 = (int(ch1) << int((int)24));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(413)
		int tmp7 = (int(ch2) << int((int)16));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(413)
		int tmp8 = (int(tmp6) | int(tmp7));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(413)
		int tmp9 = (int(ch3) << int((int)8));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(413)
		int tmp10 = (int(tmp8) | int(tmp9));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(413)
		int tmp11 = ch4;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(413)
		int tmp12 = (int(tmp10) | int(tmp11));		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(413)
		return tmp12;
	}
	HX_STACK_LINE(407)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArrayData_obj,readInt,return )

::String ByteArrayData_obj::readMultiByte( int length,::String charSet){
	HX_STACK_FRAME("openfl.utils.ByteArrayData","readMultiByte",0x011f243d,"openfl.utils.ByteArrayData.readMultiByte","openfl/utils/ByteArray.hx",420,0xaa5cee4a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(length,"length")
	HX_STACK_ARG(charSet,"charSet")
	HX_STACK_LINE(422)
	int tmp = length;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(422)
	::String tmp1 = this->readUTFBytes(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(422)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC2(ByteArrayData_obj,readMultiByte,return )

int ByteArrayData_obj::readShort( ){
	HX_STACK_FRAME("openfl.utils.ByteArrayData","readShort",0x70436498,"openfl.utils.ByteArrayData.readShort","openfl/utils/ByteArray.hx",427,0xaa5cee4a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(429)
	int tmp = this->readUnsignedByte();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(429)
	int ch1 = tmp;		HX_STACK_VAR(ch1,"ch1");
	HX_STACK_LINE(430)
	int tmp1 = this->readUnsignedByte();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(430)
	int ch2 = tmp1;		HX_STACK_VAR(ch2,"ch2");
	HX_STACK_LINE(432)
	int value;		HX_STACK_VAR(value,"value");
	HX_STACK_LINE(434)
	Dynamic tmp2 = this->__endian;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(434)
	bool tmp3 = (tmp2 == ((Dynamic)((int)1)));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(434)
	if ((tmp3)){
		HX_STACK_LINE(436)
		int tmp4 = (int(ch2) << int((int)8));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(436)
		int tmp5 = ch1;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(436)
		int tmp6 = (int(tmp4) | int(tmp5));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(436)
		value = tmp6;
	}
	else{
		HX_STACK_LINE(440)
		int tmp4 = (int(ch1) << int((int)8));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(440)
		int tmp5 = ch2;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(440)
		int tmp6 = (int(tmp4) | int(tmp5));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(440)
		value = tmp6;
	}
	HX_STACK_LINE(444)
	int tmp4 = (int(value) & int((int)32768));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(444)
	bool tmp5 = (tmp4 != (int)0);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(444)
	if ((tmp5)){
		HX_STACK_LINE(446)
		int tmp6 = (value - (int)65536);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(446)
		return tmp6;
	}
	else{
		HX_STACK_LINE(450)
		int tmp6 = value;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(450)
		return tmp6;
	}
	HX_STACK_LINE(444)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArrayData_obj,readShort,return )

int ByteArrayData_obj::readUnsignedByte( ){
	HX_STACK_FRAME("openfl.utils.ByteArrayData","readUnsignedByte",0x50ca6601,"openfl.utils.ByteArrayData.readUnsignedByte","openfl/utils/ByteArray.hx",457,0xaa5cee4a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(459)
	int tmp = this->position;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(459)
	int tmp1 = this->length;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(459)
	bool tmp2 = (tmp < tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(459)
	if ((tmp2)){
		HX_STACK_LINE(461)
		int tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(461)
		{
			HX_STACK_LINE(461)
			int tmp4 = (this->position)++;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(461)
			int pos = tmp4;		HX_STACK_VAR(pos,"pos");
			HX_STACK_LINE(461)
			tmp3 = this->b->__get(pos);
		}
		HX_STACK_LINE(461)
		return tmp3;
	}
	else{
		HX_STACK_LINE(465)
		::openfl::errors::EOFError tmp3 = ::openfl::errors::EOFError_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(465)
		HX_STACK_DO_THROW(tmp3);
		HX_STACK_LINE(466)
		return (int)0;
	}
	HX_STACK_LINE(459)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArrayData_obj,readUnsignedByte,return )

int ByteArrayData_obj::readUnsignedInt( ){
	HX_STACK_FRAME("openfl.utils.ByteArrayData","readUnsignedInt",0xac948816,"openfl.utils.ByteArrayData.readUnsignedInt","openfl/utils/ByteArray.hx",473,0xaa5cee4a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(475)
	int tmp = this->readUnsignedByte();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(475)
	int ch1 = tmp;		HX_STACK_VAR(ch1,"ch1");
	HX_STACK_LINE(476)
	int tmp1 = this->readUnsignedByte();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(476)
	int ch2 = tmp1;		HX_STACK_VAR(ch2,"ch2");
	HX_STACK_LINE(477)
	int tmp2 = this->readUnsignedByte();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(477)
	int ch3 = tmp2;		HX_STACK_VAR(ch3,"ch3");
	HX_STACK_LINE(478)
	int tmp3 = this->readUnsignedByte();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(478)
	int ch4 = tmp3;		HX_STACK_VAR(ch4,"ch4");
	HX_STACK_LINE(480)
	Dynamic tmp4 = this->__endian;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(480)
	bool tmp5 = (tmp4 == ((Dynamic)((int)1)));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(480)
	if ((tmp5)){
		HX_STACK_LINE(482)
		int tmp6 = (int(ch4) << int((int)24));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(482)
		int tmp7 = (int(ch3) << int((int)16));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(482)
		int tmp8 = (int(tmp6) | int(tmp7));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(482)
		int tmp9 = (int(ch2) << int((int)8));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(482)
		int tmp10 = (int(tmp8) | int(tmp9));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(482)
		int tmp11 = ch1;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(482)
		int tmp12 = (int(tmp10) | int(tmp11));		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(482)
		return tmp12;
	}
	else{
		HX_STACK_LINE(486)
		int tmp6 = (int(ch1) << int((int)24));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(486)
		int tmp7 = (int(ch2) << int((int)16));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(486)
		int tmp8 = (int(tmp6) | int(tmp7));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(486)
		int tmp9 = (int(ch3) << int((int)8));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(486)
		int tmp10 = (int(tmp8) | int(tmp9));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(486)
		int tmp11 = ch4;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(486)
		int tmp12 = (int(tmp10) | int(tmp11));		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(486)
		return tmp12;
	}
	HX_STACK_LINE(480)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArrayData_obj,readUnsignedInt,return )

int ByteArrayData_obj::readUnsignedShort( ){
	HX_STACK_FRAME("openfl.utils.ByteArrayData","readUnsignedShort",0x1ede5763,"openfl.utils.ByteArrayData.readUnsignedShort","openfl/utils/ByteArray.hx",493,0xaa5cee4a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(495)
	int tmp = this->readUnsignedByte();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(495)
	int ch1 = tmp;		HX_STACK_VAR(ch1,"ch1");
	HX_STACK_LINE(496)
	int tmp1 = this->readUnsignedByte();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(496)
	int ch2 = tmp1;		HX_STACK_VAR(ch2,"ch2");
	HX_STACK_LINE(498)
	Dynamic tmp2 = this->__endian;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(498)
	bool tmp3 = (tmp2 == ((Dynamic)((int)1)));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(498)
	if ((tmp3)){
		HX_STACK_LINE(500)
		int tmp4 = (int(ch2) << int((int)8));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(500)
		int tmp5 = ch1;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(500)
		int tmp6 = (tmp4 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(500)
		return tmp6;
	}
	else{
		HX_STACK_LINE(504)
		int tmp4 = (int(ch1) << int((int)8));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(504)
		int tmp5 = ch2;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(504)
		int tmp6 = (int(tmp4) | int(tmp5));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(504)
		return tmp6;
	}
	HX_STACK_LINE(498)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArrayData_obj,readUnsignedShort,return )

::String ByteArrayData_obj::readUTF( ){
	HX_STACK_FRAME("openfl.utils.ByteArrayData","readUTF",0xf7c57243,"openfl.utils.ByteArrayData.readUTF","openfl/utils/ByteArray.hx",511,0xaa5cee4a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(513)
	int tmp = this->readUnsignedShort();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(513)
	int bytesCount = tmp;		HX_STACK_VAR(bytesCount,"bytesCount");
	HX_STACK_LINE(514)
	int tmp1 = bytesCount;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(514)
	::String tmp2 = this->readUTFBytes(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(514)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArrayData_obj,readUTF,return )

::String ByteArrayData_obj::readUTFBytes( int length){
	HX_STACK_FRAME("openfl.utils.ByteArrayData","readUTFBytes",0x87ebf328,"openfl.utils.ByteArrayData.readUTFBytes","openfl/utils/ByteArray.hx",519,0xaa5cee4a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(length,"length")
	HX_STACK_LINE(521)
	int tmp = this->position;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(521)
	int tmp1 = length;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(521)
	int tmp2 = (tmp + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(521)
	int tmp3 = this->length;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(521)
	bool tmp4 = (tmp2 > tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(521)
	if ((tmp4)){
		HX_STACK_LINE(523)
		::openfl::errors::EOFError tmp5 = ::openfl::errors::EOFError_obj::__new();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(523)
		HX_STACK_DO_THROW(tmp5);
	}
	HX_STACK_LINE(527)
	hx::AddEq(this->position,length);
	HX_STACK_LINE(529)
	int tmp5 = this->position;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(529)
	int tmp6 = length;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(529)
	int tmp7 = (tmp5 - tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(529)
	int tmp8 = length;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(529)
	::String tmp9 = this->getString(tmp7,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(529)
	return tmp9;
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArrayData_obj,readUTFBytes,return )

Void ByteArrayData_obj::uncompress( Dynamic __o_algorithm){
Dynamic algorithm = __o_algorithm.Default(2);
	HX_STACK_FRAME("openfl.utils.ByteArrayData","uncompress",0xb44f8369,"openfl.utils.ByteArrayData.uncompress","openfl/utils/ByteArray.hx",534,0xaa5cee4a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(algorithm,"algorithm")
{
		HX_STACK_LINE(549)
		Dynamic tmp = algorithm;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(549)
		::haxe::io::Bytes tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(549)
		switch( (int)(tmp)){
			case (int)0: {
				HX_STACK_LINE(551)
				tmp1 = ::lime::utils::compress::Deflate_obj::decompress(hx::ObjectPtr<OBJ_>(this));
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(552)
				tmp1 = ::lime::utils::compress::LZMA_obj::decompress(hx::ObjectPtr<OBJ_>(this));
			}
			;break;
			default: {
				HX_STACK_LINE(553)
				tmp1 = ::lime::utils::compress::Zlib_obj::decompress(hx::ObjectPtr<OBJ_>(this));
			}
		}
		HX_STACK_LINE(549)
		::haxe::io::Bytes bytes = tmp1;		HX_STACK_VAR(bytes,"bytes");
		HX_STACK_LINE(557)
		bool tmp2 = (bytes != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(557)
		if ((tmp2)){
			HX_STACK_LINE(559)
			{
				HX_STACK_LINE(559)
				this->b = bytes->b;
				HX_STACK_LINE(559)
				this->__length = bytes->length;
			}
			HX_STACK_LINE(561)
			int tmp3 = this->__length;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(561)
			this->length = tmp3;
			HX_STACK_LINE(562)
			int tmp4 = this->__length;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(562)
			this->position = tmp4;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArrayData_obj,uncompress,(void))

Void ByteArrayData_obj::writeBoolean( bool value){
{
		HX_STACK_FRAME("openfl.utils.ByteArrayData","writeBoolean",0x790a5b77,"openfl.utils.ByteArrayData.writeBoolean","openfl/utils/ByteArray.hx",569,0xaa5cee4a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(571)
		bool tmp = value;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(571)
		int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(571)
		if ((tmp)){
			HX_STACK_LINE(571)
			tmp1 = (int)1;
		}
		else{
			HX_STACK_LINE(571)
			tmp1 = (int)0;
		}
		HX_STACK_LINE(571)
		this->writeByte(tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArrayData_obj,writeBoolean,(void))

Void ByteArrayData_obj::writeByte( int value){
{
		HX_STACK_FRAME("openfl.utils.ByteArrayData","writeByte",0x6d0ba6d9,"openfl.utils.ByteArrayData.writeByte","openfl/utils/ByteArray.hx",576,0xaa5cee4a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(578)
		int tmp = this->position;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(578)
		int tmp1 = (tmp + (int)1);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(578)
		this->__resize(tmp1);
		HX_STACK_LINE(579)
		{
			HX_STACK_LINE(579)
			int tmp2 = (this->position)++;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(579)
			int pos = tmp2;		HX_STACK_VAR(pos,"pos");
			HX_STACK_LINE(579)
			int tmp3 = (int(value) & int((int)255));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(579)
			this->b[pos] = tmp3;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArrayData_obj,writeByte,(void))

Void ByteArrayData_obj::writeBytes( ::openfl::utils::ByteArrayData bytes,hx::Null< int >  __o_offset,hx::Null< int >  __o_length){
int offset = __o_offset.Default(0);
int length = __o_length.Default(0);
	HX_STACK_FRAME("openfl.utils.ByteArrayData","writeBytes",0xfd26577a,"openfl.utils.ByteArrayData.writeBytes","openfl/utils/ByteArray.hx",584,0xaa5cee4a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(bytes,"bytes")
	HX_STACK_ARG(offset,"offset")
	HX_STACK_ARG(length,"length")
{
		HX_STACK_LINE(586)
		::openfl::utils::ByteArrayData tmp = bytes;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(586)
		int tmp1 = ::openfl::utils::_ByteArray::ByteArray_Impl__obj::get_length(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(586)
		bool tmp2 = (tmp1 == (int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(586)
		if ((tmp2)){
			HX_STACK_LINE(586)
			return null();
		}
		HX_STACK_LINE(587)
		bool tmp3 = (length == (int)0);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(587)
		if ((tmp3)){
			HX_STACK_LINE(587)
			int tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(587)
			{
				HX_STACK_LINE(587)
				::openfl::utils::ByteArrayData tmp5 = bytes;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(587)
				int tmp6 = ::openfl::utils::_ByteArray::ByteArray_Impl__obj::get_length(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(587)
				int a = tmp6;		HX_STACK_VAR(a,"a");
				HX_STACK_LINE(587)
				tmp4 = (a - offset);
			}
			HX_STACK_LINE(587)
			length = tmp4;
		}
		HX_STACK_LINE(589)
		int tmp4 = this->position;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(589)
		int tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(589)
		int tmp6 = length;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(589)
		int tmp7 = (tmp5 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(589)
		int tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(589)
		this->__resize(tmp8);
		HX_STACK_LINE(590)
		int tmp9 = this->position;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(590)
		::openfl::utils::ByteArrayData tmp10 = bytes;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(590)
		int tmp11 = offset;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(590)
		int tmp12 = length;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(590)
		this->blit(tmp9,tmp10,tmp11,tmp12);
		HX_STACK_LINE(592)
		int tmp13 = this->position;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(592)
		int tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(592)
		int tmp15 = length;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(592)
		int tmp16 = (tmp14 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(592)
		this->position = tmp16;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(ByteArrayData_obj,writeBytes,(void))

Void ByteArrayData_obj::writeDouble( Float value){
{
		HX_STACK_FRAME("openfl.utils.ByteArrayData","writeDouble",0x8fc20922,"openfl.utils.ByteArrayData.writeDouble","openfl/utils/ByteArray.hx",597,0xaa5cee4a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(599)
		int tmp = this->position;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(599)
		int tmp1 = (tmp + (int)8);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(599)
		this->__resize(tmp1);
		HX_STACK_LINE(600)
		int tmp2 = this->position;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(600)
		Float tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(600)
		this->setDouble(tmp2,tmp3);
		HX_STACK_LINE(601)
		hx::AddEq(this->position,(int)8);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArrayData_obj,writeDouble,(void))

Void ByteArrayData_obj::writeFloat( Float value){
{
		HX_STACK_FRAME("openfl.utils.ByteArrayData","writeFloat",0x422514ab,"openfl.utils.ByteArrayData.writeFloat","openfl/utils/ByteArray.hx",606,0xaa5cee4a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(608)
		int tmp = this->position;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(608)
		int tmp1 = (tmp + (int)4);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(608)
		this->__resize(tmp1);
		HX_STACK_LINE(609)
		int tmp2 = this->position;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(609)
		Float tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(609)
		this->setFloat(tmp2,tmp3);
		HX_STACK_LINE(610)
		hx::AddEq(this->position,(int)4);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArrayData_obj,writeFloat,(void))

Void ByteArrayData_obj::writeInt( int value){
{
		HX_STACK_FRAME("openfl.utils.ByteArrayData","writeInt",0x83612a3e,"openfl.utils.ByteArrayData.writeInt","openfl/utils/ByteArray.hx",615,0xaa5cee4a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(617)
		int tmp = this->position;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(617)
		int tmp1 = (tmp + (int)4);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(617)
		this->__resize(tmp1);
		HX_STACK_LINE(619)
		Dynamic tmp2 = this->__endian;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(619)
		bool tmp3 = (tmp2 == ((Dynamic)((int)1)));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(619)
		if ((tmp3)){
			HX_STACK_LINE(621)
			{
				HX_STACK_LINE(621)
				int tmp4 = (this->position)++;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(621)
				int pos = tmp4;		HX_STACK_VAR(pos,"pos");
				HX_STACK_LINE(621)
				int tmp5 = value;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(621)
				this->b[pos] = tmp5;
			}
			HX_STACK_LINE(622)
			{
				HX_STACK_LINE(622)
				int tmp4 = (this->position)++;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(622)
				int pos = tmp4;		HX_STACK_VAR(pos,"pos");
				HX_STACK_LINE(622)
				int tmp5 = (int(value) >> int((int)8));		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(622)
				this->b[pos] = tmp5;
			}
			HX_STACK_LINE(623)
			{
				HX_STACK_LINE(623)
				int tmp4 = (this->position)++;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(623)
				int pos = tmp4;		HX_STACK_VAR(pos,"pos");
				HX_STACK_LINE(623)
				int tmp5 = (int(value) >> int((int)16));		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(623)
				this->b[pos] = tmp5;
			}
			HX_STACK_LINE(624)
			{
				HX_STACK_LINE(624)
				int tmp4 = (this->position)++;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(624)
				int pos = tmp4;		HX_STACK_VAR(pos,"pos");
				HX_STACK_LINE(624)
				int tmp5 = (int(value) >> int((int)24));		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(624)
				this->b[pos] = tmp5;
			}
		}
		else{
			HX_STACK_LINE(628)
			{
				HX_STACK_LINE(628)
				int tmp4 = (this->position)++;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(628)
				int pos = tmp4;		HX_STACK_VAR(pos,"pos");
				HX_STACK_LINE(628)
				int tmp5 = (int(value) >> int((int)24));		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(628)
				this->b[pos] = tmp5;
			}
			HX_STACK_LINE(629)
			{
				HX_STACK_LINE(629)
				int tmp4 = (this->position)++;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(629)
				int pos = tmp4;		HX_STACK_VAR(pos,"pos");
				HX_STACK_LINE(629)
				int tmp5 = (int(value) >> int((int)16));		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(629)
				this->b[pos] = tmp5;
			}
			HX_STACK_LINE(630)
			{
				HX_STACK_LINE(630)
				int tmp4 = (this->position)++;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(630)
				int pos = tmp4;		HX_STACK_VAR(pos,"pos");
				HX_STACK_LINE(630)
				int tmp5 = (int(value) >> int((int)8));		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(630)
				this->b[pos] = tmp5;
			}
			HX_STACK_LINE(631)
			{
				HX_STACK_LINE(631)
				int tmp4 = (this->position)++;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(631)
				int pos = tmp4;		HX_STACK_VAR(pos,"pos");
				HX_STACK_LINE(631)
				int tmp5 = value;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(631)
				this->b[pos] = tmp5;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArrayData_obj,writeInt,(void))

Void ByteArrayData_obj::writeMultiByte( ::String value,::String charSet){
{
		HX_STACK_FRAME("openfl.utils.ByteArrayData","writeMultiByte",0xebbf88b0,"openfl.utils.ByteArrayData.writeMultiByte","openfl/utils/ByteArray.hx",638,0xaa5cee4a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(value,"value")
		HX_STACK_ARG(charSet,"charSet")
		HX_STACK_LINE(640)
		::String tmp = value;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(640)
		this->writeUTFBytes(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ByteArrayData_obj,writeMultiByte,(void))

Void ByteArrayData_obj::writeShort( int value){
{
		HX_STACK_FRAME("openfl.utils.ByteArrayData","writeShort",0xbbb5d38b,"openfl.utils.ByteArrayData.writeShort","openfl/utils/ByteArray.hx",645,0xaa5cee4a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(647)
		int tmp = this->position;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(647)
		int tmp1 = (tmp + (int)2);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(647)
		this->__resize(tmp1);
		HX_STACK_LINE(649)
		Dynamic tmp2 = this->__endian;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(649)
		bool tmp3 = (tmp2 == ((Dynamic)((int)1)));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(649)
		if ((tmp3)){
			HX_STACK_LINE(651)
			{
				HX_STACK_LINE(651)
				int tmp4 = (this->position)++;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(651)
				int pos = tmp4;		HX_STACK_VAR(pos,"pos");
				HX_STACK_LINE(651)
				int tmp5 = value;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(651)
				this->b[pos] = tmp5;
			}
			HX_STACK_LINE(652)
			{
				HX_STACK_LINE(652)
				int tmp4 = (this->position)++;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(652)
				int pos = tmp4;		HX_STACK_VAR(pos,"pos");
				HX_STACK_LINE(652)
				int tmp5 = (int(value) >> int((int)8));		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(652)
				this->b[pos] = tmp5;
			}
		}
		else{
			HX_STACK_LINE(656)
			{
				HX_STACK_LINE(656)
				int tmp4 = (this->position)++;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(656)
				int pos = tmp4;		HX_STACK_VAR(pos,"pos");
				HX_STACK_LINE(656)
				int tmp5 = (int(value) >> int((int)8));		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(656)
				this->b[pos] = tmp5;
			}
			HX_STACK_LINE(657)
			{
				HX_STACK_LINE(657)
				int tmp4 = (this->position)++;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(657)
				int pos = tmp4;		HX_STACK_VAR(pos,"pos");
				HX_STACK_LINE(657)
				int tmp5 = value;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(657)
				this->b[pos] = tmp5;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArrayData_obj,writeShort,(void))

Void ByteArrayData_obj::writeUnsignedInt( int value){
{
		HX_STACK_FRAME("openfl.utils.ByteArrayData","writeUnsignedInt",0xcb6d2f49,"openfl.utils.ByteArrayData.writeUnsignedInt","openfl/utils/ByteArray.hx",664,0xaa5cee4a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(666)
		int tmp = value;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(666)
		this->writeInt(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArrayData_obj,writeUnsignedInt,(void))

Void ByteArrayData_obj::writeUTF( ::String value){
{
		HX_STACK_FRAME("openfl.utils.ByteArrayData","writeUTF",0x836a2e76,"openfl.utils.ByteArrayData.writeUTF","openfl/utils/ByteArray.hx",671,0xaa5cee4a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(673)
		::String tmp = value;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(673)
		::haxe::io::Bytes tmp1 = ::haxe::io::Bytes_obj::ofString(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(673)
		::haxe::io::Bytes bytes = tmp1;		HX_STACK_VAR(bytes,"bytes");
		HX_STACK_LINE(675)
		int tmp2 = bytes->length;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(675)
		this->writeShort(tmp2);
		HX_STACK_LINE(676)
		::haxe::io::Bytes tmp3 = bytes;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(676)
		::openfl::utils::ByteArrayData tmp4 = ::openfl::utils::_ByteArray::ByteArray_Impl__obj::fromArrayBuffer(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(676)
		this->writeBytes(tmp4,null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArrayData_obj,writeUTF,(void))

Void ByteArrayData_obj::writeUTFBytes( ::String value){
{
		HX_STACK_FRAME("openfl.utils.ByteArrayData","writeUTFBytes",0xc5d11e15,"openfl.utils.ByteArrayData.writeUTFBytes","openfl/utils/ByteArray.hx",681,0xaa5cee4a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(683)
		::String tmp = value;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(683)
		::haxe::io::Bytes tmp1 = ::haxe::io::Bytes_obj::ofString(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(683)
		::haxe::io::Bytes bytes = tmp1;		HX_STACK_VAR(bytes,"bytes");
		HX_STACK_LINE(684)
		::String tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(684)
		::haxe::io::Bytes tmp3 = ::haxe::io::Bytes_obj::ofString(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(684)
		::openfl::utils::ByteArrayData tmp4 = ::openfl::utils::_ByteArray::ByteArray_Impl__obj::fromArrayBuffer(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(684)
		this->writeBytes(tmp4,null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArrayData_obj,writeUTFBytes,(void))

Void ByteArrayData_obj::__fromBytes( ::haxe::io::Bytes bytes){
{
		HX_STACK_FRAME("openfl.utils.ByteArrayData","__fromBytes",0x684ac753,"openfl.utils.ByteArrayData.__fromBytes","openfl/utils/ByteArray.hx",689,0xaa5cee4a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bytes,"bytes")
		HX_STACK_LINE(691)
		{
			HX_STACK_LINE(691)
			this->b = bytes->b;
			HX_STACK_LINE(691)
			this->__length = bytes->length;
		}
		HX_STACK_LINE(692)
		this->length = bytes->length;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArrayData_obj,__fromBytes,(void))

Void ByteArrayData_obj::__resize( int size){
{
		HX_STACK_FRAME("openfl.utils.ByteArrayData","__resize",0x101b8202,"openfl.utils.ByteArrayData.__resize","openfl/utils/ByteArray.hx",697,0xaa5cee4a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(size,"size")
		HX_STACK_LINE(699)
		int tmp = size;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(699)
		int tmp1 = this->__length;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(699)
		bool tmp2 = (tmp > tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(699)
		if ((tmp2)){
			HX_STACK_LINE(701)
			int tmp3 = (size + (int)1);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(701)
			int tmp4 = (tmp3 * (int)3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(701)
			int tmp5 = (int(tmp4) >> int((int)1));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(701)
			::haxe::io::Bytes tmp6 = ::haxe::io::Bytes_obj::alloc(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(701)
			::haxe::io::Bytes bytes = tmp6;		HX_STACK_VAR(bytes,"bytes");
			HX_STACK_LINE(702)
			int tmp7 = this->length;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(702)
			int cacheLength = tmp7;		HX_STACK_VAR(cacheLength,"cacheLength");
			HX_STACK_LINE(703)
			int tmp8 = this->__length;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(703)
			this->length = tmp8;
			HX_STACK_LINE(704)
			int tmp9 = this->__length;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(704)
			bytes->blit((int)0,hx::ObjectPtr<OBJ_>(this),(int)0,tmp9);
			HX_STACK_LINE(705)
			this->length = cacheLength;
			HX_STACK_LINE(706)
			{
				HX_STACK_LINE(706)
				this->b = bytes->b;
				HX_STACK_LINE(706)
				this->__length = bytes->length;
			}
		}
		HX_STACK_LINE(710)
		int tmp3 = this->length;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(710)
		int tmp4 = size;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(710)
		bool tmp5 = (tmp3 < tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(710)
		if ((tmp5)){
			HX_STACK_LINE(712)
			this->length = size;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArrayData_obj,__resize,(void))

Void ByteArrayData_obj::__setData( ::haxe::io::Bytes bytes){
{
		HX_STACK_FRAME("openfl.utils.ByteArrayData","__setData",0xac6a7b1e,"openfl.utils.ByteArrayData.__setData","openfl/utils/ByteArray.hx",719,0xaa5cee4a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bytes,"bytes")
		HX_STACK_LINE(721)
		this->b = bytes->b;
		HX_STACK_LINE(722)
		this->__length = bytes->length;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArrayData_obj,__setData,(void))

int ByteArrayData_obj::get_bytesAvailable( ){
	HX_STACK_FRAME("openfl.utils.ByteArrayData","get_bytesAvailable",0x68329f15,"openfl.utils.ByteArrayData.get_bytesAvailable","openfl/utils/ByteArray.hx",738,0xaa5cee4a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(740)
	int tmp = this->length;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(740)
	int tmp1 = this->position;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(740)
	int tmp2 = (tmp - tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(740)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArrayData_obj,get_bytesAvailable,return )

Dynamic ByteArrayData_obj::get_endian( ){
	HX_STACK_FRAME("openfl.utils.ByteArrayData","get_endian",0x95dc5cd2,"openfl.utils.ByteArrayData.get_endian","openfl/utils/ByteArray.hx",745,0xaa5cee4a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(747)
	Dynamic tmp = this->__endian;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(747)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArrayData_obj,get_endian,return )

Dynamic ByteArrayData_obj::set_endian( Dynamic value){
	HX_STACK_FRAME("openfl.utils.ByteArrayData","set_endian",0x9959fb46,"openfl.utils.ByteArrayData.set_endian","openfl/utils/ByteArray.hx",752,0xaa5cee4a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(754)
	Dynamic tmp = this->__endian = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(754)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArrayData_obj,set_endian,return )

::openfl::utils::ByteArrayData ByteArrayData_obj::fromBytes( ::haxe::io::Bytes bytes){
	HX_STACK_FRAME("openfl.utils.ByteArrayData","fromBytes",0x955585f3,"openfl.utils.ByteArrayData.fromBytes","openfl/utils/ByteArray.hx",301,0xaa5cee4a)
	HX_STACK_ARG(bytes,"bytes")
	HX_STACK_LINE(303)
	::openfl::utils::ByteArrayData tmp = ::openfl::utils::ByteArrayData_obj::__new(null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(303)
	::openfl::utils::ByteArrayData result = tmp;		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(304)
	::haxe::io::Bytes tmp1 = bytes;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(304)
	result->__fromBytes(tmp1);
	HX_STACK_LINE(305)
	::openfl::utils::ByteArrayData tmp2 = result;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(305)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ByteArrayData_obj,fromBytes,return )


ByteArrayData_obj::ByteArrayData_obj()
{
}

void ByteArrayData_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ByteArrayData);
	HX_MARK_MEMBER_NAME(objectEncoding,"objectEncoding");
	HX_MARK_MEMBER_NAME(position,"position");
	HX_MARK_MEMBER_NAME(__endian,"__endian");
	HX_MARK_MEMBER_NAME(__length,"__length");
	::haxe::io::Bytes_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ByteArrayData_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(objectEncoding,"objectEncoding");
	HX_VISIT_MEMBER_NAME(position,"position");
	HX_VISIT_MEMBER_NAME(__endian,"__endian");
	HX_VISIT_MEMBER_NAME(__length,"__length");
	::haxe::io::Bytes_obj::__Visit(HX_VISIT_ARG);
}

Dynamic ByteArrayData_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"endian") ) { if (inCallProp == hx::paccAlways) return get_endian(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"deflate") ) { return deflate_dyn(); }
		if (HX_FIELD_EQ(inName,"inflate") ) { return inflate_dyn(); }
		if (HX_FIELD_EQ(inName,"readInt") ) { return readInt_dyn(); }
		if (HX_FIELD_EQ(inName,"readUTF") ) { return readUTF_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"position") ) { return position; }
		if (HX_FIELD_EQ(inName,"__endian") ) { return __endian; }
		if (HX_FIELD_EQ(inName,"__length") ) { return __length; }
		if (HX_FIELD_EQ(inName,"compress") ) { return compress_dyn(); }
		if (HX_FIELD_EQ(inName,"readByte") ) { return readByte_dyn(); }
		if (HX_FIELD_EQ(inName,"writeInt") ) { return writeInt_dyn(); }
		if (HX_FIELD_EQ(inName,"writeUTF") ) { return writeUTF_dyn(); }
		if (HX_FIELD_EQ(inName,"__resize") ) { return __resize_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"readBytes") ) { return readBytes_dyn(); }
		if (HX_FIELD_EQ(inName,"readFloat") ) { return readFloat_dyn(); }
		if (HX_FIELD_EQ(inName,"readShort") ) { return readShort_dyn(); }
		if (HX_FIELD_EQ(inName,"writeByte") ) { return writeByte_dyn(); }
		if (HX_FIELD_EQ(inName,"__setData") ) { return __setData_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"readDouble") ) { return readDouble_dyn(); }
		if (HX_FIELD_EQ(inName,"uncompress") ) { return uncompress_dyn(); }
		if (HX_FIELD_EQ(inName,"writeBytes") ) { return writeBytes_dyn(); }
		if (HX_FIELD_EQ(inName,"writeFloat") ) { return writeFloat_dyn(); }
		if (HX_FIELD_EQ(inName,"writeShort") ) { return writeShort_dyn(); }
		if (HX_FIELD_EQ(inName,"get_endian") ) { return get_endian_dyn(); }
		if (HX_FIELD_EQ(inName,"set_endian") ) { return set_endian_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"readBoolean") ) { return readBoolean_dyn(); }
		if (HX_FIELD_EQ(inName,"writeDouble") ) { return writeDouble_dyn(); }
		if (HX_FIELD_EQ(inName,"__fromBytes") ) { return __fromBytes_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"readUTFBytes") ) { return readUTFBytes_dyn(); }
		if (HX_FIELD_EQ(inName,"writeBoolean") ) { return writeBoolean_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"readMultiByte") ) { return readMultiByte_dyn(); }
		if (HX_FIELD_EQ(inName,"writeUTFBytes") ) { return writeUTFBytes_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"bytesAvailable") ) { if (inCallProp == hx::paccAlways) return get_bytesAvailable(); }
		if (HX_FIELD_EQ(inName,"objectEncoding") ) { return objectEncoding; }
		if (HX_FIELD_EQ(inName,"writeMultiByte") ) { return writeMultiByte_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"readUnsignedInt") ) { return readUnsignedInt_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"readUnsignedByte") ) { return readUnsignedByte_dyn(); }
		if (HX_FIELD_EQ(inName,"writeUnsignedInt") ) { return writeUnsignedInt_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"readUnsignedShort") ) { return readUnsignedShort_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"get_bytesAvailable") ) { return get_bytesAvailable_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool ByteArrayData_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"fromBytes") ) { outValue = fromBytes_dyn(); return true;  }
	}
	return false;
}

Dynamic ByteArrayData_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"endian") ) { if (inCallProp == hx::paccAlways) return set_endian(inValue); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"position") ) { position=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__endian") ) { __endian=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__length") ) { __length=inValue.Cast< int >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"objectEncoding") ) { objectEncoding=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ByteArrayData_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("bytesAvailable","\xde","\x4b","\x9d","\x9b"));
	outFields->push(HX_HCSTRING("endian","\x9b","\x98","\x88","\xfa"));
	outFields->push(HX_HCSTRING("objectEncoding","\xb2","\x1e","\x15","\x2a"));
	outFields->push(HX_HCSTRING("position","\xa9","\xa0","\xfa","\xca"));
	outFields->push(HX_HCSTRING("__endian","\xbb","\x03","\xb8","\xa2"));
	outFields->push(HX_HCSTRING("__length","\x06","\x00","\x37","\x47"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(ByteArrayData_obj,objectEncoding),HX_HCSTRING("objectEncoding","\xb2","\x1e","\x15","\x2a")},
	{hx::fsInt,(int)offsetof(ByteArrayData_obj,position),HX_HCSTRING("position","\xa9","\xa0","\xfa","\xca")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(ByteArrayData_obj,__endian),HX_HCSTRING("__endian","\xbb","\x03","\xb8","\xa2")},
	{hx::fsInt,(int)offsetof(ByteArrayData_obj,__length),HX_HCSTRING("__length","\x06","\x00","\x37","\x47")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("objectEncoding","\xb2","\x1e","\x15","\x2a"),
	HX_HCSTRING("position","\xa9","\xa0","\xfa","\xca"),
	HX_HCSTRING("__endian","\xbb","\x03","\xb8","\xa2"),
	HX_HCSTRING("__length","\x06","\x00","\x37","\x47"),
	HX_HCSTRING("clear","\x8d","\x71","\x5b","\x48"),
	HX_HCSTRING("compress","\xa2","\x47","\xbf","\x83"),
	HX_HCSTRING("deflate","\x6b","\x0b","\xfa","\xa2"),
	HX_HCSTRING("inflate","\x87","\x9c","\x1b","\x0c"),
	HX_HCSTRING("readBoolean","\xf2","\x7d","\xea","\xd0"),
	HX_HCSTRING("readByte","\x7e","\xf9","\x1a","\x69"),
	HX_HCSTRING("readBytes","\x35","\x55","\x7f","\x8e"),
	HX_HCSTRING("readDouble","\x07","\x0f","\x47","\x2c"),
	HX_HCSTRING("readFloat","\x66","\x12","\x7e","\xd3"),
	HX_HCSTRING("readInt","\x39","\xb3","\xc9","\x02"),
	HX_HCSTRING("readMultiByte","\xeb","\x7f","\xc9","\x15"),
	HX_HCSTRING("readShort","\x46","\xd1","\x0e","\x4d"),
	HX_HCSTRING("readUnsignedByte","\x13","\x0b","\xce","\x9b"),
	HX_HCSTRING("readUnsignedInt","\x44","\xab","\x4f","\x05"),
	HX_HCSTRING("readUnsignedShort","\x11","\x22","\x0b","\x77"),
	HX_HCSTRING("readUTF","\x71","\xb7","\xd2","\x02"),
	HX_HCSTRING("readUTFBytes","\x3a","\x27","\x0f","\x52"),
	HX_HCSTRING("uncompress","\xfb","\x2e","\x83","\x09"),
	HX_HCSTRING("writeBoolean","\x89","\x8f","\x2d","\x43"),
	HX_HCSTRING("writeByte","\x87","\x13","\xd7","\x49"),
	HX_HCSTRING("writeBytes","\x0c","\x03","\x5a","\x52"),
	HX_HCSTRING("writeDouble","\x50","\x7d","\xc4","\xc7"),
	HX_HCSTRING("writeFloat","\x3d","\xc0","\x58","\x97"),
	HX_HCSTRING("writeInt","\x50","\x6d","\xf0","\x23"),
	HX_HCSTRING("writeMultiByte","\x42","\x65","\x25","\xec"),
	HX_HCSTRING("writeShort","\x1d","\x7f","\xe9","\x10"),
	HX_HCSTRING("writeUnsignedInt","\x5b","\xd4","\x70","\x16"),
	HX_HCSTRING("writeUTF","\x88","\x71","\xf9","\x23"),
	HX_HCSTRING("writeUTFBytes","\xc3","\x79","\x7b","\xda"),
	HX_HCSTRING("__fromBytes","\x81","\x3b","\x4d","\xa0"),
	HX_HCSTRING("__resize","\x14","\xc5","\xaa","\xb0"),
	HX_HCSTRING("__setData","\xcc","\xe7","\x35","\x89"),
	HX_HCSTRING("get_bytesAvailable","\xa7","\x2c","\x37","\x37"),
	HX_HCSTRING("get_endian","\x64","\x08","\x10","\xeb"),
	HX_HCSTRING("set_endian","\xd8","\xa6","\x8d","\xee"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ByteArrayData_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ByteArrayData_obj::__mClass,"__mClass");
};

#endif

hx::Class ByteArrayData_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("fromBytes","\xa1","\xf2","\x20","\x72"),
	::String(null()) };

void ByteArrayData_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.utils.ByteArrayData","\x40","\xf9","\x66","\x4c");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ByteArrayData_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ByteArrayData_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = sStaticStorageInfo;
#endif
	hx::RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace utils
