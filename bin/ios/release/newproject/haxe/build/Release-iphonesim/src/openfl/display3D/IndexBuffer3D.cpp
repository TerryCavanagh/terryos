#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GL
#include <lime/graphics/opengl/GL.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLBuffer
#include <lime/graphics/opengl/GLBuffer.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLObject
#include <lime/graphics/opengl/GLObject.h>
#endif
#ifndef INCLUDED_lime_utils_ArrayBufferIO
#include <lime/utils/ArrayBufferIO.h>
#endif
#ifndef INCLUDED_lime_utils_ArrayBufferView
#include <lime/utils/ArrayBufferView.h>
#endif
#ifndef INCLUDED_lime_utils_TAError
#include <lime/utils/TAError.h>
#endif
#ifndef INCLUDED_openfl__Vector_IVector
#include <openfl/_Vector/IVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_IntVector
#include <openfl/_Vector/IntVector.h>
#endif
#ifndef INCLUDED_openfl__internal_stage3D_GLUtils
#include <openfl/_internal/stage3D/GLUtils.h>
#endif
#ifndef INCLUDED_openfl_display3D_Context3D
#include <openfl/display3D/Context3D.h>
#endif
#ifndef INCLUDED_openfl_display3D_IndexBuffer3D
#include <openfl/display3D/IndexBuffer3D.h>
#endif
#ifndef INCLUDED_openfl_display3D__Context3DBufferUsage_Context3DBufferUsage_Impl_
#include <openfl/display3D/_Context3DBufferUsage/Context3DBufferUsage_Impl_.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
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
namespace display3D{

Void IndexBuffer3D_obj::__construct(::openfl::display3D::Context3D context3D,int numIndices,::String bufferUsage)
{
HX_STACK_FRAME("openfl.display3D.IndexBuffer3D","new",0x7b4eb39c,"openfl.display3D.IndexBuffer3D.new","openfl/display3D/IndexBuffer3D.hx",25,0x3d934296)
HX_STACK_THIS(this)
HX_STACK_ARG(context3D,"context3D")
HX_STACK_ARG(numIndices,"numIndices")
HX_STACK_ARG(bufferUsage,"bufferUsage")
{
	HX_STACK_LINE(27)
	this->__context = context3D;
	HX_STACK_LINE(28)
	this->__numIndices = numIndices;
	HX_STACK_LINE(29)
	this->__elementType = (int)5123;
	HX_STACK_LINE(31)
	int tmp = ::lime::graphics::opengl::GL_obj::get_version();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(31)
	Dynamic tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(31)
	{
		HX_STACK_LINE(31)
		::hx::Object * inVal = ::lime::graphics::opengl::GL_obj::cffi_lime_gl_create_buffer.call();		HX_STACK_VAR(inVal,"inVal");
		HX_STACK_LINE(31)
		::hx::Object * tmp2 = inVal;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(31)
		::hx::Object * tmp3 = hx::DynamicPtr(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(31)
		tmp1 = Dynamic(tmp3);
	}
	HX_STACK_LINE(31)
	::lime::graphics::opengl::GLBuffer tmp2 = ::lime::graphics::opengl::GLBuffer_obj::__new(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(31)
	this->__id = tmp2;
	HX_STACK_LINE(32)
	::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
	HX_STACK_LINE(34)
	::String tmp3 = bufferUsage;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(34)
	Dynamic tmp4 = ::openfl::display3D::_Context3DBufferUsage::Context3DBufferUsage_Impl__obj::fromString(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(34)
	bool tmp5 = (tmp4 == ((Dynamic)((int)0)));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(34)
	int tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(34)
	if ((tmp5)){
		HX_STACK_LINE(34)
		tmp6 = (int)35048;
	}
	else{
		HX_STACK_LINE(34)
		tmp6 = (int)35044;
	}
	HX_STACK_LINE(34)
	this->__usage = tmp6;
	HX_STACK_LINE(36)
	::openfl::display3D::Context3D tmp7 = this->__context;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(36)
	tmp7->__statsIncrement((int)1);
	HX_STACK_LINE(37)
	this->__memoryUsage = (int)0;
}
;
	return null();
}

//IndexBuffer3D_obj::~IndexBuffer3D_obj() { }

Dynamic IndexBuffer3D_obj::__CreateEmpty() { return  new IndexBuffer3D_obj; }
hx::ObjectPtr< IndexBuffer3D_obj > IndexBuffer3D_obj::__new(::openfl::display3D::Context3D context3D,int numIndices,::String bufferUsage)
{  hx::ObjectPtr< IndexBuffer3D_obj > _result_ = new IndexBuffer3D_obj();
	_result_->__construct(context3D,numIndices,bufferUsage);
	return _result_;}

Dynamic IndexBuffer3D_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< IndexBuffer3D_obj > _result_ = new IndexBuffer3D_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _result_;}

Void IndexBuffer3D_obj::dispose( ){
{
		HX_STACK_FRAME("openfl.display3D.IndexBuffer3D","dispose",0xbcffb1db,"openfl.display3D.IndexBuffer3D.dispose","openfl/display3D/IndexBuffer3D.hx",42,0x3d934296)
		HX_STACK_THIS(this)
		HX_STACK_LINE(44)
		{
			HX_STACK_LINE(44)
			::lime::graphics::opengl::GLBuffer tmp = this->__id;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(44)
			::lime::graphics::opengl::GLBuffer buffer = tmp;		HX_STACK_VAR(buffer,"buffer");
			HX_STACK_LINE(44)
			::lime::graphics::opengl::GL_obj::cffi_lime_gl_delete_buffer.call(hx::DynamicPtr(buffer->id));
			HX_STACK_LINE(44)
			buffer->invalidate();
		}
		HX_STACK_LINE(46)
		::openfl::display3D::Context3D tmp = this->__context;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(46)
		tmp->__statsDecrement((int)1);
		HX_STACK_LINE(47)
		::openfl::display3D::Context3D tmp1 = this->__context;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(47)
		int tmp2 = this->__memoryUsage;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(47)
		tmp1->__statsSubtract((int)6,tmp2);
		HX_STACK_LINE(48)
		this->__memoryUsage = (int)0;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(IndexBuffer3D_obj,dispose,(void))

Void IndexBuffer3D_obj::uploadFromByteArray( ::openfl::utils::ByteArrayData data,int byteArrayOffset,int startOffset,int count){
{
		HX_STACK_FRAME("openfl.display3D.IndexBuffer3D","uploadFromByteArray",0x61713322,"openfl.display3D.IndexBuffer3D.uploadFromByteArray","openfl/display3D/IndexBuffer3D.hx",53,0x3d934296)
		HX_STACK_THIS(this)
		HX_STACK_ARG(data,"data")
		HX_STACK_ARG(byteArrayOffset,"byteArrayOffset")
		HX_STACK_ARG(startOffset,"startOffset")
		HX_STACK_ARG(count,"count")
		HX_STACK_LINE(55)
		int tmp = byteArrayOffset;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(55)
		int tmp1 = (startOffset * (int)2);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(55)
		int tmp2 = (tmp + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(55)
		int offset = tmp2;		HX_STACK_VAR(offset,"offset");
		HX_STACK_LINE(57)
		::lime::utils::ArrayBufferView tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(57)
		{
			HX_STACK_LINE(57)
			::openfl::utils::ByteArrayData tmp4 = data;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(57)
			::haxe::io::Bytes tmp5 = ::openfl::utils::_ByteArray::ByteArray_Impl__obj::toArrayBuffer(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(57)
			::haxe::io::Bytes buffer = tmp5;		HX_STACK_VAR(buffer,"buffer");
			HX_STACK_LINE(57)
			::lime::utils::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(57)
			bool tmp6 = false;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(57)
			if ((tmp6)){
				HX_STACK_LINE(57)
				::lime::utils::ArrayBufferView tmp7 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)2);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(57)
				this1 = tmp7;
			}
			else{
				HX_STACK_LINE(57)
				bool tmp7 = false;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(57)
				if ((tmp7)){
					HX_STACK_LINE(57)
					::lime::utils::ArrayBufferView tmp8;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(57)
					{
						HX_STACK_LINE(57)
						::lime::utils::ArrayBufferView tmp9 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)2);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(57)
						::lime::utils::ArrayBufferView _this = tmp9;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(57)
						_this->byteOffset = (int)0;
						HX_STACK_LINE(57)
						int tmp10 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(57)
						_this->length = tmp10;
						HX_STACK_LINE(57)
						int tmp11 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(57)
						_this->byteLength = tmp11;
						HX_STACK_LINE(57)
						::haxe::io::Bytes tmp12;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(57)
						{
							HX_STACK_LINE(57)
							::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
							HX_STACK_LINE(57)
							int tmp13 = _this->byteLength;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(57)
							::haxe::io::Bytes tmp14 = ::haxe::io::Bytes_obj::alloc(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(57)
							this2 = tmp14;
							HX_STACK_LINE(57)
							tmp12 = this2;
						}
						HX_STACK_LINE(57)
						_this->buffer = tmp12;
						HX_STACK_LINE(57)
						_this->copyFromArray(((Array< Float >)(null())),null());
						HX_STACK_LINE(57)
						tmp8 = _this;
					}
					HX_STACK_LINE(57)
					this1 = tmp8;
				}
				else{
					HX_STACK_LINE(57)
					bool tmp8 = false;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(57)
					if ((tmp8)){
						HX_STACK_LINE(57)
						::lime::utils::ArrayBufferView tmp9;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(57)
						{
							HX_STACK_LINE(57)
							::lime::utils::ArrayBufferView tmp10 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)2);		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(57)
							::lime::utils::ArrayBufferView _this = tmp10;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(57)
							::haxe::io::Bytes tmp11 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(57)
							::haxe::io::Bytes srcData = tmp11;		HX_STACK_VAR(srcData,"srcData");
							HX_STACK_LINE(57)
							int tmp12 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(57)
							int srcLength = tmp12;		HX_STACK_VAR(srcLength,"srcLength");
							HX_STACK_LINE(57)
							int tmp13 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(57)
							int srcByteOffset = tmp13;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
							HX_STACK_LINE(57)
							int tmp14 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(57)
							int srcElementSize = tmp14;		HX_STACK_VAR(srcElementSize,"srcElementSize");
							HX_STACK_LINE(57)
							int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
							HX_STACK_LINE(57)
							int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(57)
							int tmp16 = _this->type;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(57)
							bool tmp17 = (tmp15 == tmp16);		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(57)
							if ((tmp17)){
								HX_STACK_LINE(57)
								int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
								HX_STACK_LINE(57)
								int tmp18 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(57)
								int cloneLength = tmp18;		HX_STACK_VAR(cloneLength,"cloneLength");
								HX_STACK_LINE(57)
								::haxe::io::Bytes tmp19;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(57)
								{
									HX_STACK_LINE(57)
									::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
									HX_STACK_LINE(57)
									int tmp20 = cloneLength;		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(57)
									::haxe::io::Bytes tmp21 = ::haxe::io::Bytes_obj::alloc(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(57)
									this2 = tmp21;
									HX_STACK_LINE(57)
									tmp19 = this2;
								}
								HX_STACK_LINE(57)
								_this->buffer = tmp19;
								HX_STACK_LINE(57)
								::haxe::io::Bytes tmp20 = srcData;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(57)
								int tmp21 = srcByteOffset;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(57)
								int tmp22 = cloneLength;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(57)
								_this->buffer->blit((int)0,tmp20,tmp21,tmp22);
							}
							else{
								HX_STACK_LINE(57)
								HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
							}
							HX_STACK_LINE(57)
							int tmp18 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(57)
							_this->byteLength = tmp18;
							HX_STACK_LINE(57)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(57)
							_this->length = srcLength;
							HX_STACK_LINE(57)
							tmp9 = _this;
						}
						HX_STACK_LINE(57)
						this1 = tmp9;
					}
					else{
						HX_STACK_LINE(57)
						bool tmp9 = (buffer != null());		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(57)
						if ((tmp9)){
							HX_STACK_LINE(57)
							::lime::utils::ArrayBufferView tmp10;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(57)
							{
								HX_STACK_LINE(57)
								::lime::utils::ArrayBufferView tmp11 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)2);		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(57)
								::lime::utils::ArrayBufferView _this = tmp11;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(57)
								bool tmp12 = (offset < (int)0);		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(57)
								if ((tmp12)){
									HX_STACK_LINE(57)
									HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
								}
								HX_STACK_LINE(57)
								int tmp13 = hx::Mod(offset,_this->bytesPerElement);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(57)
								bool tmp14 = (tmp13 != (int)0);		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(57)
								if ((tmp14)){
									HX_STACK_LINE(57)
									HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
								}
								HX_STACK_LINE(57)
								int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
								HX_STACK_LINE(57)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(57)
								int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
								HX_STACK_LINE(57)
								bool tmp15 = (count == null());		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(57)
								if ((tmp15)){
									HX_STACK_LINE(57)
									int tmp16 = (bufferByteLength - offset);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(57)
									newByteLength = tmp16;
									HX_STACK_LINE(57)
									int tmp17 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(57)
									bool tmp18 = (tmp17 != (int)0);		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(57)
									if ((tmp18)){
										HX_STACK_LINE(57)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(57)
									bool tmp19 = (newByteLength < (int)0);		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(57)
									if ((tmp19)){
										HX_STACK_LINE(57)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
								}
								else{
									HX_STACK_LINE(57)
									int tmp16 = (count * _this->bytesPerElement);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(57)
									newByteLength = tmp16;
									HX_STACK_LINE(57)
									int tmp17 = (offset + newByteLength);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(57)
									int newRange = tmp17;		HX_STACK_VAR(newRange,"newRange");
									HX_STACK_LINE(57)
									bool tmp18 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(57)
									if ((tmp18)){
										HX_STACK_LINE(57)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
								}
								HX_STACK_LINE(57)
								_this->buffer = buffer;
								HX_STACK_LINE(57)
								_this->byteOffset = offset;
								HX_STACK_LINE(57)
								_this->byteLength = newByteLength;
								HX_STACK_LINE(57)
								Float tmp16 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(57)
								int tmp17 = ::Std_obj::_int(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(57)
								_this->length = tmp17;
								HX_STACK_LINE(57)
								tmp10 = _this;
							}
							HX_STACK_LINE(57)
							this1 = tmp10;
						}
						else{
							HX_STACK_LINE(57)
							HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Int16Array","\x95","\xb2","\x95","\xa7"));
						}
					}
				}
			}
			HX_STACK_LINE(57)
			tmp3 = this1;
		}
		HX_STACK_LINE(57)
		this->uploadFromTypedArray(tmp3);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(IndexBuffer3D_obj,uploadFromByteArray,(void))

Void IndexBuffer3D_obj::uploadFromTypedArray( ::lime::utils::ArrayBufferView data){
{
		HX_STACK_FRAME("openfl.display3D.IndexBuffer3D","uploadFromTypedArray",0x49f635fe,"openfl.display3D.IndexBuffer3D.uploadFromTypedArray","openfl/display3D/IndexBuffer3D.hx",62,0x3d934296)
		HX_STACK_THIS(this)
		HX_STACK_ARG(data,"data")
		HX_STACK_LINE(64)
		{
			HX_STACK_LINE(64)
			::lime::graphics::opengl::GLBuffer tmp = this->__id;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(64)
			::lime::graphics::opengl::GLBuffer buffer = tmp;		HX_STACK_VAR(buffer,"buffer");
			HX_STACK_LINE(64)
			::lime::graphics::opengl::GL_obj::cffi_lime_gl_bind_buffer.call((int)34963,hx::DynamicPtr((  (((buffer == null()))) ? Dynamic(null()) : Dynamic(buffer->id) )));
		}
		HX_STACK_LINE(65)
		::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
		HX_STACK_LINE(67)
		::lime::graphics::opengl::GL_obj::cffi_lime_gl_buffer_data.call((int)34963,hx::DynamicPtr(data->buffer),data->byteOffset,data->byteLength,this->__usage);
		HX_STACK_LINE(68)
		::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
		HX_STACK_LINE(70)
		int tmp = data->byteLength;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(70)
		int tmp1 = this->__memoryUsage;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(70)
		bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(70)
		if ((tmp2)){
			HX_STACK_LINE(72)
			::openfl::display3D::Context3D tmp3 = this->__context;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(72)
			int tmp4 = data->byteLength;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(72)
			int tmp5 = this->__memoryUsage;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(72)
			int tmp6 = (tmp4 - tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(72)
			tmp3->__statsAdd((int)6,tmp6);
			HX_STACK_LINE(73)
			this->__memoryUsage = data->byteLength;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(IndexBuffer3D_obj,uploadFromTypedArray,(void))

Void IndexBuffer3D_obj::uploadFromVector( ::openfl::_Vector::IntVector data,int startOffset,int count){
{
		HX_STACK_FRAME("openfl.display3D.IndexBuffer3D","uploadFromVector",0xaabe3672,"openfl.display3D.IndexBuffer3D.uploadFromVector","openfl/display3D/IndexBuffer3D.hx",80,0x3d934296)
		HX_STACK_THIS(this)
		HX_STACK_ARG(data,"data")
		HX_STACK_ARG(startOffset,"startOffset")
		HX_STACK_ARG(count,"count")
		HX_STACK_LINE(84)
		int tmp = (startOffset + count);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(84)
		int length = tmp;		HX_STACK_VAR(length,"length");
		HX_STACK_LINE(86)
		::lime::utils::ArrayBufferView tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(86)
		{
			HX_STACK_LINE(86)
			::lime::utils::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(86)
			bool tmp2 = (count != null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(86)
			if ((tmp2)){
				HX_STACK_LINE(86)
				::lime::utils::ArrayBufferView tmp3 = ::lime::utils::ArrayBufferView_obj::__new(count,(int)2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(86)
				this1 = tmp3;
			}
			else{
				HX_STACK_LINE(86)
				bool tmp3 = false;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(86)
				if ((tmp3)){
					HX_STACK_LINE(86)
					::lime::utils::ArrayBufferView tmp4;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(86)
					{
						HX_STACK_LINE(86)
						::lime::utils::ArrayBufferView tmp5 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)2);		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(86)
						::lime::utils::ArrayBufferView _this = tmp5;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(86)
						_this->byteOffset = (int)0;
						HX_STACK_LINE(86)
						int tmp6 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(86)
						_this->length = tmp6;
						HX_STACK_LINE(86)
						int tmp7 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(86)
						_this->byteLength = tmp7;
						HX_STACK_LINE(86)
						::haxe::io::Bytes tmp8;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(86)
						{
							HX_STACK_LINE(86)
							::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
							HX_STACK_LINE(86)
							int tmp9 = _this->byteLength;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(86)
							::haxe::io::Bytes tmp10 = ::haxe::io::Bytes_obj::alloc(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(86)
							this2 = tmp10;
							HX_STACK_LINE(86)
							tmp8 = this2;
						}
						HX_STACK_LINE(86)
						_this->buffer = tmp8;
						HX_STACK_LINE(86)
						_this->copyFromArray(((Array< Float >)(null())),null());
						HX_STACK_LINE(86)
						tmp4 = _this;
					}
					HX_STACK_LINE(86)
					this1 = tmp4;
				}
				else{
					HX_STACK_LINE(86)
					bool tmp4 = false;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(86)
					if ((tmp4)){
						HX_STACK_LINE(86)
						::lime::utils::ArrayBufferView tmp5;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(86)
						{
							HX_STACK_LINE(86)
							::lime::utils::ArrayBufferView tmp6 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)2);		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(86)
							::lime::utils::ArrayBufferView _this = tmp6;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(86)
							::haxe::io::Bytes tmp7 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(86)
							::haxe::io::Bytes srcData = tmp7;		HX_STACK_VAR(srcData,"srcData");
							HX_STACK_LINE(86)
							int tmp8 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(86)
							int srcLength = tmp8;		HX_STACK_VAR(srcLength,"srcLength");
							HX_STACK_LINE(86)
							int tmp9 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(86)
							int srcByteOffset = tmp9;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
							HX_STACK_LINE(86)
							int tmp10 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(86)
							int srcElementSize = tmp10;		HX_STACK_VAR(srcElementSize,"srcElementSize");
							HX_STACK_LINE(86)
							int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
							HX_STACK_LINE(86)
							int tmp11 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(86)
							int tmp12 = _this->type;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(86)
							bool tmp13 = (tmp11 == tmp12);		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(86)
							if ((tmp13)){
								HX_STACK_LINE(86)
								int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
								HX_STACK_LINE(86)
								int tmp14 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(86)
								int cloneLength = tmp14;		HX_STACK_VAR(cloneLength,"cloneLength");
								HX_STACK_LINE(86)
								::haxe::io::Bytes tmp15;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(86)
								{
									HX_STACK_LINE(86)
									::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
									HX_STACK_LINE(86)
									int tmp16 = cloneLength;		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(86)
									::haxe::io::Bytes tmp17 = ::haxe::io::Bytes_obj::alloc(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(86)
									this2 = tmp17;
									HX_STACK_LINE(86)
									tmp15 = this2;
								}
								HX_STACK_LINE(86)
								_this->buffer = tmp15;
								HX_STACK_LINE(86)
								::haxe::io::Bytes tmp16 = srcData;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(86)
								int tmp17 = srcByteOffset;		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(86)
								int tmp18 = cloneLength;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(86)
								_this->buffer->blit((int)0,tmp16,tmp17,tmp18);
							}
							else{
								HX_STACK_LINE(86)
								HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
							}
							HX_STACK_LINE(86)
							int tmp14 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(86)
							_this->byteLength = tmp14;
							HX_STACK_LINE(86)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(86)
							_this->length = srcLength;
							HX_STACK_LINE(86)
							tmp5 = _this;
						}
						HX_STACK_LINE(86)
						this1 = tmp5;
					}
					else{
						HX_STACK_LINE(86)
						bool tmp5 = false;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(86)
						if ((tmp5)){
							HX_STACK_LINE(86)
							::lime::utils::ArrayBufferView tmp6;		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(86)
							{
								HX_STACK_LINE(86)
								::lime::utils::ArrayBufferView tmp7 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)2);		HX_STACK_VAR(tmp7,"tmp7");
								HX_STACK_LINE(86)
								::lime::utils::ArrayBufferView _this = tmp7;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(86)
								bool tmp8 = false;		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(86)
								if ((tmp8)){
									HX_STACK_LINE(86)
									HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
								}
								HX_STACK_LINE(86)
								int tmp9 = hx::Mod((int)0,_this->bytesPerElement);		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(86)
								bool tmp10 = (tmp9 != (int)0);		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(86)
								if ((tmp10)){
									HX_STACK_LINE(86)
									HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
								}
								HX_STACK_LINE(86)
								int tmp11 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(86)
								int bufferByteLength = tmp11;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
								HX_STACK_LINE(86)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(86)
								int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
								HX_STACK_LINE(86)
								bool tmp12 = true;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(86)
								if ((tmp12)){
									HX_STACK_LINE(86)
									int tmp13 = bufferByteLength;		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(86)
									newByteLength = tmp13;
									HX_STACK_LINE(86)
									int tmp14 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(86)
									bool tmp15 = (tmp14 != (int)0);		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(86)
									if ((tmp15)){
										HX_STACK_LINE(86)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(86)
									bool tmp16 = (newByteLength < (int)0);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(86)
									if ((tmp16)){
										HX_STACK_LINE(86)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
								}
								else{
									HX_STACK_LINE(86)
									int tmp13 = (null() * _this->bytesPerElement);		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(86)
									newByteLength = tmp13;
									HX_STACK_LINE(86)
									int tmp14 = newByteLength;		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(86)
									int newRange = tmp14;		HX_STACK_VAR(newRange,"newRange");
									HX_STACK_LINE(86)
									bool tmp15 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(86)
									if ((tmp15)){
										HX_STACK_LINE(86)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
								}
								HX_STACK_LINE(86)
								_this->buffer = null();
								HX_STACK_LINE(86)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(86)
								_this->byteLength = newByteLength;
								HX_STACK_LINE(86)
								Float tmp13 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(86)
								int tmp14 = ::Std_obj::_int(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(86)
								_this->length = tmp14;
								HX_STACK_LINE(86)
								tmp6 = _this;
							}
							HX_STACK_LINE(86)
							this1 = tmp6;
						}
						else{
							HX_STACK_LINE(86)
							HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Int16Array","\x95","\xb2","\x95","\xa7"));
						}
					}
				}
			}
			HX_STACK_LINE(86)
			tmp1 = this1;
		}
		HX_STACK_LINE(86)
		::lime::utils::ArrayBufferView buffer = tmp1;		HX_STACK_VAR(buffer,"buffer");
		HX_STACK_LINE(88)
		{
			HX_STACK_LINE(88)
			int _g = startOffset;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(88)
			while((true)){
				HX_STACK_LINE(88)
				bool tmp2 = (_g < length);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(88)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(88)
				if ((tmp3)){
					HX_STACK_LINE(88)
					break;
				}
				HX_STACK_LINE(88)
				int tmp4 = (_g)++;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(88)
				int i = tmp4;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(90)
				{
					HX_STACK_LINE(90)
					int tmp5 = i;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(90)
					int tmp6 = data->get(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(90)
					int val = tmp6;		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(90)
					::haxe::io::Bytes tmp7 = buffer->buffer;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(90)
					int tmp8 = buffer->byteOffset;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(90)
					int tmp9 = (i - startOffset);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(90)
					int tmp10 = (tmp9 * (int)2);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(90)
					int tmp11 = (tmp8 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(90)
					int tmp12 = val;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(90)
					::lime::utils::ArrayBufferIO_obj::setInt16(tmp7,tmp11,tmp12);
					HX_STACK_LINE(90)
					val;
				}
			}
		}
		HX_STACK_LINE(94)
		::lime::utils::ArrayBufferView tmp2 = buffer;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(94)
		this->uploadFromTypedArray(tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(IndexBuffer3D_obj,uploadFromVector,(void))


IndexBuffer3D_obj::IndexBuffer3D_obj()
{
}

void IndexBuffer3D_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(IndexBuffer3D);
	HX_MARK_MEMBER_NAME(__context,"__context");
	HX_MARK_MEMBER_NAME(__elementType,"__elementType");
	HX_MARK_MEMBER_NAME(__id,"__id");
	HX_MARK_MEMBER_NAME(__memoryUsage,"__memoryUsage");
	HX_MARK_MEMBER_NAME(__numIndices,"__numIndices");
	HX_MARK_MEMBER_NAME(__usage,"__usage");
	HX_MARK_END_CLASS();
}

void IndexBuffer3D_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(__context,"__context");
	HX_VISIT_MEMBER_NAME(__elementType,"__elementType");
	HX_VISIT_MEMBER_NAME(__id,"__id");
	HX_VISIT_MEMBER_NAME(__memoryUsage,"__memoryUsage");
	HX_VISIT_MEMBER_NAME(__numIndices,"__numIndices");
	HX_VISIT_MEMBER_NAME(__usage,"__usage");
}

Dynamic IndexBuffer3D_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"__id") ) { return __id; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"__usage") ) { return __usage; }
		if (HX_FIELD_EQ(inName,"dispose") ) { return dispose_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"__context") ) { return __context; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__numIndices") ) { return __numIndices; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__elementType") ) { return __elementType; }
		if (HX_FIELD_EQ(inName,"__memoryUsage") ) { return __memoryUsage; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"uploadFromVector") ) { return uploadFromVector_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"uploadFromByteArray") ) { return uploadFromByteArray_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"uploadFromTypedArray") ) { return uploadFromTypedArray_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic IndexBuffer3D_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"__id") ) { __id=inValue.Cast< ::lime::graphics::opengl::GLBuffer >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"__usage") ) { __usage=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"__context") ) { __context=inValue.Cast< ::openfl::display3D::Context3D >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__numIndices") ) { __numIndices=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__elementType") ) { __elementType=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__memoryUsage") ) { __memoryUsage=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void IndexBuffer3D_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("__context","\xcf","\xe6","\xc5","\x9a"));
	outFields->push(HX_HCSTRING("__elementType","\x76","\x1c","\xf3","\x38"));
	outFields->push(HX_HCSTRING("__id","\xfb","\xb6","\x13","\x3f"));
	outFields->push(HX_HCSTRING("__memoryUsage","\x40","\xbf","\x50","\xc5"));
	outFields->push(HX_HCSTRING("__numIndices","\xa1","\x00","\x08","\x4c"));
	outFields->push(HX_HCSTRING("__usage","\x01","\xb6","\x8d","\x14"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::display3D::Context3D*/ ,(int)offsetof(IndexBuffer3D_obj,__context),HX_HCSTRING("__context","\xcf","\xe6","\xc5","\x9a")},
	{hx::fsInt,(int)offsetof(IndexBuffer3D_obj,__elementType),HX_HCSTRING("__elementType","\x76","\x1c","\xf3","\x38")},
	{hx::fsObject /*::lime::graphics::opengl::GLBuffer*/ ,(int)offsetof(IndexBuffer3D_obj,__id),HX_HCSTRING("__id","\xfb","\xb6","\x13","\x3f")},
	{hx::fsInt,(int)offsetof(IndexBuffer3D_obj,__memoryUsage),HX_HCSTRING("__memoryUsage","\x40","\xbf","\x50","\xc5")},
	{hx::fsInt,(int)offsetof(IndexBuffer3D_obj,__numIndices),HX_HCSTRING("__numIndices","\xa1","\x00","\x08","\x4c")},
	{hx::fsInt,(int)offsetof(IndexBuffer3D_obj,__usage),HX_HCSTRING("__usage","\x01","\xb6","\x8d","\x14")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("__context","\xcf","\xe6","\xc5","\x9a"),
	HX_HCSTRING("__elementType","\x76","\x1c","\xf3","\x38"),
	HX_HCSTRING("__id","\xfb","\xb6","\x13","\x3f"),
	HX_HCSTRING("__memoryUsage","\x40","\xbf","\x50","\xc5"),
	HX_HCSTRING("__numIndices","\xa1","\x00","\x08","\x4c"),
	HX_HCSTRING("__usage","\x01","\xb6","\x8d","\x14"),
	HX_HCSTRING("dispose","\x9f","\x80","\x4c","\xbb"),
	HX_HCSTRING("uploadFromByteArray","\xe6","\x17","\x1b","\xee"),
	HX_HCSTRING("uploadFromTypedArray","\xba","\x7c","\xf4","\xd1"),
	HX_HCSTRING("uploadFromVector","\x2e","\x6f","\x6b","\xa8"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(IndexBuffer3D_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(IndexBuffer3D_obj::__mClass,"__mClass");
};

#endif

hx::Class IndexBuffer3D_obj::__mClass;

void IndexBuffer3D_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.display3D.IndexBuffer3D","\xaa","\xf5","\xd5","\x3f");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< IndexBuffer3D_obj >;
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
} // end namespace display3D
