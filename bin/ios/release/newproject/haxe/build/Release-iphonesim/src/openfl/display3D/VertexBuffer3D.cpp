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
#ifndef INCLUDED_lime_utils_ArrayBufferView
#include <lime/utils/ArrayBufferView.h>
#endif
#ifndef INCLUDED_lime_utils_TAError
#include <lime/utils/TAError.h>
#endif
#ifndef INCLUDED_openfl__Vector_FloatVector
#include <openfl/_Vector/FloatVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_IVector
#include <openfl/_Vector/IVector.h>
#endif
#ifndef INCLUDED_openfl__internal_stage3D_GLUtils
#include <openfl/_internal/stage3D/GLUtils.h>
#endif
#ifndef INCLUDED_openfl_display3D_Context3D
#include <openfl/display3D/Context3D.h>
#endif
#ifndef INCLUDED_openfl_display3D_VertexBuffer3D
#include <openfl/display3D/VertexBuffer3D.h>
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

Void VertexBuffer3D_obj::__construct(::openfl::display3D::Context3D context3D,int numVertices,int dataPerVertex,::String bufferUsage)
{
HX_STACK_FRAME("openfl.display3D.VertexBuffer3D","new",0xf0b52080,"openfl.display3D.VertexBuffer3D.new","openfl/display3D/VertexBuffer3D.hx",28,0xb1ad396e)
HX_STACK_THIS(this)
HX_STACK_ARG(context3D,"context3D")
HX_STACK_ARG(numVertices,"numVertices")
HX_STACK_ARG(dataPerVertex,"dataPerVertex")
HX_STACK_ARG(bufferUsage,"bufferUsage")
{
	HX_STACK_LINE(30)
	this->__context = context3D;
	HX_STACK_LINE(31)
	this->__numVertices = numVertices;
	HX_STACK_LINE(32)
	this->__vertexSize = dataPerVertex;
	HX_STACK_LINE(34)
	int tmp = ::lime::graphics::opengl::GL_obj::get_version();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(34)
	Dynamic tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(34)
	{
		HX_STACK_LINE(34)
		::hx::Object * inVal = ::lime::graphics::opengl::GL_obj::cffi_lime_gl_create_buffer.call();		HX_STACK_VAR(inVal,"inVal");
		HX_STACK_LINE(34)
		::hx::Object * tmp2 = inVal;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(34)
		::hx::Object * tmp3 = hx::DynamicPtr(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(34)
		tmp1 = Dynamic(tmp3);
	}
	HX_STACK_LINE(34)
	::lime::graphics::opengl::GLBuffer tmp2 = ::lime::graphics::opengl::GLBuffer_obj::__new(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(34)
	this->__id = tmp2;
	HX_STACK_LINE(35)
	::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
	HX_STACK_LINE(37)
	int tmp3 = this->__vertexSize;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(37)
	int tmp4 = (tmp3 * (int)4);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(37)
	this->__stride = tmp4;
	HX_STACK_LINE(38)
	this->__memoryUsage = (int)0;
	HX_STACK_LINE(40)
	::String tmp5 = bufferUsage;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(40)
	Dynamic tmp6 = ::openfl::display3D::_Context3DBufferUsage::Context3DBufferUsage_Impl__obj::fromString(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(40)
	bool tmp7 = (tmp6 == ((Dynamic)((int)0)));		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(40)
	int tmp8;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(40)
	if ((tmp7)){
		HX_STACK_LINE(40)
		tmp8 = (int)35048;
	}
	else{
		HX_STACK_LINE(40)
		tmp8 = (int)35044;
	}
	HX_STACK_LINE(40)
	this->__usage = tmp8;
	HX_STACK_LINE(42)
	::openfl::display3D::Context3D tmp9 = this->__context;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(42)
	tmp9->__statsIncrement((int)2);
}
;
	return null();
}

//VertexBuffer3D_obj::~VertexBuffer3D_obj() { }

Dynamic VertexBuffer3D_obj::__CreateEmpty() { return  new VertexBuffer3D_obj; }
hx::ObjectPtr< VertexBuffer3D_obj > VertexBuffer3D_obj::__new(::openfl::display3D::Context3D context3D,int numVertices,int dataPerVertex,::String bufferUsage)
{  hx::ObjectPtr< VertexBuffer3D_obj > _result_ = new VertexBuffer3D_obj();
	_result_->__construct(context3D,numVertices,dataPerVertex,bufferUsage);
	return _result_;}

Dynamic VertexBuffer3D_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< VertexBuffer3D_obj > _result_ = new VertexBuffer3D_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _result_;}

Void VertexBuffer3D_obj::dispose( ){
{
		HX_STACK_FRAME("openfl.display3D.VertexBuffer3D","dispose",0x6b6860bf,"openfl.display3D.VertexBuffer3D.dispose","openfl/display3D/VertexBuffer3D.hx",47,0xb1ad396e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(49)
		{
			HX_STACK_LINE(49)
			::lime::graphics::opengl::GLBuffer tmp = this->__id;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(49)
			::lime::graphics::opengl::GLBuffer buffer = tmp;		HX_STACK_VAR(buffer,"buffer");
			HX_STACK_LINE(49)
			::lime::graphics::opengl::GL_obj::cffi_lime_gl_delete_buffer.call(hx::DynamicPtr(buffer->id));
			HX_STACK_LINE(49)
			buffer->invalidate();
		}
		HX_STACK_LINE(51)
		::openfl::display3D::Context3D tmp = this->__context;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(51)
		tmp->__statsDecrement((int)2);
		HX_STACK_LINE(52)
		::openfl::display3D::Context3D tmp1 = this->__context;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(52)
		int tmp2 = this->__memoryUsage;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(52)
		tmp1->__statsSubtract((int)7,tmp2);
		HX_STACK_LINE(53)
		this->__memoryUsage = (int)0;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(VertexBuffer3D_obj,dispose,(void))

Void VertexBuffer3D_obj::uploadFromByteArray( ::openfl::utils::ByteArrayData data,int byteArrayOffset,int startVertex,int numVertices){
{
		HX_STACK_FRAME("openfl.display3D.VertexBuffer3D","uploadFromByteArray",0x0096a806,"openfl.display3D.VertexBuffer3D.uploadFromByteArray","openfl/display3D/VertexBuffer3D.hx",58,0xb1ad396e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(data,"data")
		HX_STACK_ARG(byteArrayOffset,"byteArrayOffset")
		HX_STACK_ARG(startVertex,"startVertex")
		HX_STACK_ARG(numVertices,"numVertices")
		HX_STACK_LINE(60)
		int tmp = byteArrayOffset;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(60)
		int tmp1 = startVertex;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(60)
		int tmp2 = this->__stride;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(60)
		int tmp3 = (tmp1 * tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(60)
		int tmp4 = (tmp + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(60)
		int offset = tmp4;		HX_STACK_VAR(offset,"offset");
		HX_STACK_LINE(61)
		int tmp5 = numVertices;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(61)
		int tmp6 = this->__vertexSize;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(61)
		int tmp7 = (tmp5 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(61)
		int length = tmp7;		HX_STACK_VAR(length,"length");
		HX_STACK_LINE(63)
		::lime::utils::ArrayBufferView tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(63)
		{
			HX_STACK_LINE(63)
			::openfl::utils::ByteArrayData tmp9 = data;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(63)
			::haxe::io::Bytes tmp10 = ::openfl::utils::_ByteArray::ByteArray_Impl__obj::toArrayBuffer(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(63)
			::haxe::io::Bytes buffer = tmp10;		HX_STACK_VAR(buffer,"buffer");
			HX_STACK_LINE(63)
			::lime::utils::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(63)
			bool tmp11 = false;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(63)
			if ((tmp11)){
				HX_STACK_LINE(63)
				::lime::utils::ArrayBufferView tmp12 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)8);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(63)
				this1 = tmp12;
			}
			else{
				HX_STACK_LINE(63)
				bool tmp12 = false;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(63)
				if ((tmp12)){
					HX_STACK_LINE(63)
					::lime::utils::ArrayBufferView tmp13;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(63)
					{
						HX_STACK_LINE(63)
						::lime::utils::ArrayBufferView tmp14 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(63)
						::lime::utils::ArrayBufferView _this = tmp14;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(63)
						_this->byteOffset = (int)0;
						HX_STACK_LINE(63)
						int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(63)
						_this->length = tmp15;
						HX_STACK_LINE(63)
						int tmp16 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(63)
						_this->byteLength = tmp16;
						HX_STACK_LINE(63)
						::haxe::io::Bytes tmp17;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(63)
						{
							HX_STACK_LINE(63)
							::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
							HX_STACK_LINE(63)
							int tmp18 = _this->byteLength;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(63)
							::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(63)
							this2 = tmp19;
							HX_STACK_LINE(63)
							tmp17 = this2;
						}
						HX_STACK_LINE(63)
						_this->buffer = tmp17;
						HX_STACK_LINE(63)
						_this->copyFromArray(((Array< Float >)(null())),null());
						HX_STACK_LINE(63)
						tmp13 = _this;
					}
					HX_STACK_LINE(63)
					this1 = tmp13;
				}
				else{
					HX_STACK_LINE(63)
					bool tmp13 = false;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(63)
					if ((tmp13)){
						HX_STACK_LINE(63)
						::lime::utils::ArrayBufferView tmp14;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(63)
						{
							HX_STACK_LINE(63)
							::lime::utils::ArrayBufferView tmp15 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(63)
							::lime::utils::ArrayBufferView _this = tmp15;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(63)
							::haxe::io::Bytes tmp16 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(63)
							::haxe::io::Bytes srcData = tmp16;		HX_STACK_VAR(srcData,"srcData");
							HX_STACK_LINE(63)
							int tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(63)
							int srcLength = tmp17;		HX_STACK_VAR(srcLength,"srcLength");
							HX_STACK_LINE(63)
							int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(63)
							int srcByteOffset = tmp18;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
							HX_STACK_LINE(63)
							int tmp19 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(63)
							int srcElementSize = tmp19;		HX_STACK_VAR(srcElementSize,"srcElementSize");
							HX_STACK_LINE(63)
							int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
							HX_STACK_LINE(63)
							int tmp20 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(63)
							int tmp21 = _this->type;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(63)
							bool tmp22 = (tmp20 == tmp21);		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(63)
							if ((tmp22)){
								HX_STACK_LINE(63)
								int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
								HX_STACK_LINE(63)
								int tmp23 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(63)
								int cloneLength = tmp23;		HX_STACK_VAR(cloneLength,"cloneLength");
								HX_STACK_LINE(63)
								::haxe::io::Bytes tmp24;		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(63)
								{
									HX_STACK_LINE(63)
									::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
									HX_STACK_LINE(63)
									int tmp25 = cloneLength;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(63)
									::haxe::io::Bytes tmp26 = ::haxe::io::Bytes_obj::alloc(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(63)
									this2 = tmp26;
									HX_STACK_LINE(63)
									tmp24 = this2;
								}
								HX_STACK_LINE(63)
								_this->buffer = tmp24;
								HX_STACK_LINE(63)
								::haxe::io::Bytes tmp25 = srcData;		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(63)
								int tmp26 = srcByteOffset;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(63)
								int tmp27 = cloneLength;		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(63)
								_this->buffer->blit((int)0,tmp25,tmp26,tmp27);
							}
							else{
								HX_STACK_LINE(63)
								HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
							}
							HX_STACK_LINE(63)
							int tmp23 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(63)
							_this->byteLength = tmp23;
							HX_STACK_LINE(63)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(63)
							_this->length = srcLength;
							HX_STACK_LINE(63)
							tmp14 = _this;
						}
						HX_STACK_LINE(63)
						this1 = tmp14;
					}
					else{
						HX_STACK_LINE(63)
						bool tmp14 = (buffer != null());		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(63)
						if ((tmp14)){
							HX_STACK_LINE(63)
							::lime::utils::ArrayBufferView tmp15;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(63)
							{
								HX_STACK_LINE(63)
								::lime::utils::ArrayBufferView tmp16 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(63)
								::lime::utils::ArrayBufferView _this = tmp16;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(63)
								bool tmp17 = (offset < (int)0);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(63)
								if ((tmp17)){
									HX_STACK_LINE(63)
									HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
								}
								HX_STACK_LINE(63)
								int tmp18 = hx::Mod(offset,_this->bytesPerElement);		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(63)
								bool tmp19 = (tmp18 != (int)0);		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(63)
								if ((tmp19)){
									HX_STACK_LINE(63)
									HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
								}
								HX_STACK_LINE(63)
								int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
								HX_STACK_LINE(63)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(63)
								int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
								HX_STACK_LINE(63)
								bool tmp20 = (length == null());		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(63)
								if ((tmp20)){
									HX_STACK_LINE(63)
									int tmp21 = (bufferByteLength - offset);		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(63)
									newByteLength = tmp21;
									HX_STACK_LINE(63)
									int tmp22 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(63)
									bool tmp23 = (tmp22 != (int)0);		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(63)
									if ((tmp23)){
										HX_STACK_LINE(63)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(63)
									bool tmp24 = (newByteLength < (int)0);		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(63)
									if ((tmp24)){
										HX_STACK_LINE(63)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
								}
								else{
									HX_STACK_LINE(63)
									int tmp21 = (length * _this->bytesPerElement);		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(63)
									newByteLength = tmp21;
									HX_STACK_LINE(63)
									int tmp22 = (offset + newByteLength);		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(63)
									int newRange = tmp22;		HX_STACK_VAR(newRange,"newRange");
									HX_STACK_LINE(63)
									bool tmp23 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(63)
									if ((tmp23)){
										HX_STACK_LINE(63)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
								}
								HX_STACK_LINE(63)
								_this->buffer = buffer;
								HX_STACK_LINE(63)
								_this->byteOffset = offset;
								HX_STACK_LINE(63)
								_this->byteLength = newByteLength;
								HX_STACK_LINE(63)
								Float tmp21 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(63)
								int tmp22 = ::Std_obj::_int(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(63)
								_this->length = tmp22;
								HX_STACK_LINE(63)
								tmp15 = _this;
							}
							HX_STACK_LINE(63)
							this1 = tmp15;
						}
						else{
							HX_STACK_LINE(63)
							HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Float32Array","\x8e","\xc1","\xf4","\xd4"));
						}
					}
				}
			}
			HX_STACK_LINE(63)
			tmp8 = this1;
		}
		HX_STACK_LINE(63)
		this->uploadFromTypedArray(tmp8);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(VertexBuffer3D_obj,uploadFromByteArray,(void))

Void VertexBuffer3D_obj::uploadFromTypedArray( ::lime::utils::ArrayBufferView data){
{
		HX_STACK_FRAME("openfl.display3D.VertexBuffer3D","uploadFromTypedArray",0xeb97089a,"openfl.display3D.VertexBuffer3D.uploadFromTypedArray","openfl/display3D/VertexBuffer3D.hx",68,0xb1ad396e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(data,"data")
		HX_STACK_LINE(70)
		{
			HX_STACK_LINE(70)
			::lime::graphics::opengl::GLBuffer tmp = this->__id;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(70)
			::lime::graphics::opengl::GLBuffer buffer = tmp;		HX_STACK_VAR(buffer,"buffer");
			HX_STACK_LINE(70)
			::lime::graphics::opengl::GL_obj::cffi_lime_gl_bind_buffer.call((int)34962,hx::DynamicPtr((  (((buffer == null()))) ? Dynamic(null()) : Dynamic(buffer->id) )));
		}
		HX_STACK_LINE(71)
		::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
		HX_STACK_LINE(73)
		::lime::graphics::opengl::GL_obj::cffi_lime_gl_buffer_data.call((int)34962,hx::DynamicPtr(data->buffer),data->byteOffset,data->byteLength,this->__usage);
		HX_STACK_LINE(74)
		::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
		HX_STACK_LINE(76)
		int tmp = data->byteLength;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(76)
		int tmp1 = this->__memoryUsage;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(76)
		bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(76)
		if ((tmp2)){
			HX_STACK_LINE(78)
			::openfl::display3D::Context3D tmp3 = this->__context;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(78)
			int tmp4 = data->byteLength;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(78)
			int tmp5 = this->__memoryUsage;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(78)
			int tmp6 = (tmp4 - tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(78)
			tmp3->__statsAdd((int)7,tmp6);
			HX_STACK_LINE(79)
			this->__memoryUsage = data->byteLength;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(VertexBuffer3D_obj,uploadFromTypedArray,(void))

Void VertexBuffer3D_obj::uploadFromVector( ::openfl::_Vector::FloatVector data,int startVertex,int numVertices){
{
		HX_STACK_FRAME("openfl.display3D.VertexBuffer3D","uploadFromVector",0xcf228b0e,"openfl.display3D.VertexBuffer3D.uploadFromVector","openfl/display3D/VertexBuffer3D.hx",86,0xb1ad396e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(data,"data")
		HX_STACK_ARG(startVertex,"startVertex")
		HX_STACK_ARG(numVertices,"numVertices")
		HX_STACK_LINE(90)
		int tmp = startVertex;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(90)
		int tmp1 = this->__vertexSize;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(90)
		int tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(90)
		int start = tmp2;		HX_STACK_VAR(start,"start");
		HX_STACK_LINE(91)
		int tmp3 = numVertices;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(91)
		int tmp4 = this->__vertexSize;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(91)
		int tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(91)
		int count = tmp5;		HX_STACK_VAR(count,"count");
		HX_STACK_LINE(92)
		int tmp6 = (start + count);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(92)
		int length = tmp6;		HX_STACK_VAR(length,"length");
		HX_STACK_LINE(94)
		::lime::utils::ArrayBufferView tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(94)
		{
			HX_STACK_LINE(94)
			::lime::utils::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(94)
			bool tmp8 = (count != null());		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(94)
			if ((tmp8)){
				HX_STACK_LINE(94)
				::lime::utils::ArrayBufferView tmp9 = ::lime::utils::ArrayBufferView_obj::__new(count,(int)8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(94)
				this1 = tmp9;
			}
			else{
				HX_STACK_LINE(94)
				bool tmp9 = false;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(94)
				if ((tmp9)){
					HX_STACK_LINE(94)
					::lime::utils::ArrayBufferView tmp10;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(94)
					{
						HX_STACK_LINE(94)
						::lime::utils::ArrayBufferView tmp11 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(94)
						::lime::utils::ArrayBufferView _this = tmp11;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(94)
						_this->byteOffset = (int)0;
						HX_STACK_LINE(94)
						int tmp12 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(94)
						_this->length = tmp12;
						HX_STACK_LINE(94)
						int tmp13 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(94)
						_this->byteLength = tmp13;
						HX_STACK_LINE(94)
						::haxe::io::Bytes tmp14;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(94)
						{
							HX_STACK_LINE(94)
							::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
							HX_STACK_LINE(94)
							int tmp15 = _this->byteLength;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(94)
							::haxe::io::Bytes tmp16 = ::haxe::io::Bytes_obj::alloc(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(94)
							this2 = tmp16;
							HX_STACK_LINE(94)
							tmp14 = this2;
						}
						HX_STACK_LINE(94)
						_this->buffer = tmp14;
						HX_STACK_LINE(94)
						_this->copyFromArray(((Array< Float >)(null())),null());
						HX_STACK_LINE(94)
						tmp10 = _this;
					}
					HX_STACK_LINE(94)
					this1 = tmp10;
				}
				else{
					HX_STACK_LINE(94)
					bool tmp10 = false;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(94)
					if ((tmp10)){
						HX_STACK_LINE(94)
						::lime::utils::ArrayBufferView tmp11;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(94)
						{
							HX_STACK_LINE(94)
							::lime::utils::ArrayBufferView tmp12 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(94)
							::lime::utils::ArrayBufferView _this = tmp12;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(94)
							::haxe::io::Bytes tmp13 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(94)
							::haxe::io::Bytes srcData = tmp13;		HX_STACK_VAR(srcData,"srcData");
							HX_STACK_LINE(94)
							int tmp14 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(94)
							int srcLength = tmp14;		HX_STACK_VAR(srcLength,"srcLength");
							HX_STACK_LINE(94)
							int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(94)
							int srcByteOffset = tmp15;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
							HX_STACK_LINE(94)
							int tmp16 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(94)
							int srcElementSize = tmp16;		HX_STACK_VAR(srcElementSize,"srcElementSize");
							HX_STACK_LINE(94)
							int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
							HX_STACK_LINE(94)
							int tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(94)
							int tmp18 = _this->type;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(94)
							bool tmp19 = (tmp17 == tmp18);		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(94)
							if ((tmp19)){
								HX_STACK_LINE(94)
								int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
								HX_STACK_LINE(94)
								int tmp20 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(94)
								int cloneLength = tmp20;		HX_STACK_VAR(cloneLength,"cloneLength");
								HX_STACK_LINE(94)
								::haxe::io::Bytes tmp21;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(94)
								{
									HX_STACK_LINE(94)
									::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
									HX_STACK_LINE(94)
									int tmp22 = cloneLength;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(94)
									::haxe::io::Bytes tmp23 = ::haxe::io::Bytes_obj::alloc(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(94)
									this2 = tmp23;
									HX_STACK_LINE(94)
									tmp21 = this2;
								}
								HX_STACK_LINE(94)
								_this->buffer = tmp21;
								HX_STACK_LINE(94)
								::haxe::io::Bytes tmp22 = srcData;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(94)
								int tmp23 = srcByteOffset;		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(94)
								int tmp24 = cloneLength;		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(94)
								_this->buffer->blit((int)0,tmp22,tmp23,tmp24);
							}
							else{
								HX_STACK_LINE(94)
								HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
							}
							HX_STACK_LINE(94)
							int tmp20 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(94)
							_this->byteLength = tmp20;
							HX_STACK_LINE(94)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(94)
							_this->length = srcLength;
							HX_STACK_LINE(94)
							tmp11 = _this;
						}
						HX_STACK_LINE(94)
						this1 = tmp11;
					}
					else{
						HX_STACK_LINE(94)
						bool tmp11 = false;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(94)
						if ((tmp11)){
							HX_STACK_LINE(94)
							::lime::utils::ArrayBufferView tmp12;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(94)
							{
								HX_STACK_LINE(94)
								::lime::utils::ArrayBufferView tmp13 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(94)
								::lime::utils::ArrayBufferView _this = tmp13;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(94)
								bool tmp14 = false;		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(94)
								if ((tmp14)){
									HX_STACK_LINE(94)
									HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
								}
								HX_STACK_LINE(94)
								int tmp15 = hx::Mod((int)0,_this->bytesPerElement);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(94)
								bool tmp16 = (tmp15 != (int)0);		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(94)
								if ((tmp16)){
									HX_STACK_LINE(94)
									HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
								}
								HX_STACK_LINE(94)
								int tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(94)
								int bufferByteLength = tmp17;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
								HX_STACK_LINE(94)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(94)
								int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
								HX_STACK_LINE(94)
								bool tmp18 = true;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(94)
								if ((tmp18)){
									HX_STACK_LINE(94)
									int tmp19 = bufferByteLength;		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(94)
									newByteLength = tmp19;
									HX_STACK_LINE(94)
									int tmp20 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(94)
									bool tmp21 = (tmp20 != (int)0);		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(94)
									if ((tmp21)){
										HX_STACK_LINE(94)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(94)
									bool tmp22 = (newByteLength < (int)0);		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(94)
									if ((tmp22)){
										HX_STACK_LINE(94)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
								}
								else{
									HX_STACK_LINE(94)
									int tmp19 = (null() * _this->bytesPerElement);		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(94)
									newByteLength = tmp19;
									HX_STACK_LINE(94)
									int tmp20 = newByteLength;		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(94)
									int newRange = tmp20;		HX_STACK_VAR(newRange,"newRange");
									HX_STACK_LINE(94)
									bool tmp21 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(94)
									if ((tmp21)){
										HX_STACK_LINE(94)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
								}
								HX_STACK_LINE(94)
								_this->buffer = null();
								HX_STACK_LINE(94)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(94)
								_this->byteLength = newByteLength;
								HX_STACK_LINE(94)
								Float tmp19 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(94)
								int tmp20 = ::Std_obj::_int(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(94)
								_this->length = tmp20;
								HX_STACK_LINE(94)
								tmp12 = _this;
							}
							HX_STACK_LINE(94)
							this1 = tmp12;
						}
						else{
							HX_STACK_LINE(94)
							HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Float32Array","\x8e","\xc1","\xf4","\xd4"));
						}
					}
				}
			}
			HX_STACK_LINE(94)
			tmp7 = this1;
		}
		HX_STACK_LINE(94)
		::lime::utils::ArrayBufferView buffer = tmp7;		HX_STACK_VAR(buffer,"buffer");
		HX_STACK_LINE(96)
		{
			HX_STACK_LINE(96)
			int _g = start;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(96)
			while((true)){
				HX_STACK_LINE(96)
				bool tmp8 = (_g < length);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(96)
				bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(96)
				if ((tmp9)){
					HX_STACK_LINE(96)
					break;
				}
				HX_STACK_LINE(96)
				int tmp10 = (_g)++;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(96)
				int i = tmp10;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(98)
				{
					HX_STACK_LINE(98)
					int tmp11 = i;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(98)
					Float tmp12 = data->get(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(98)
					Float val = tmp12;		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(98)
					::__hxcpp_memory_set_float(buffer->buffer->b,(buffer->byteOffset + (((i - start)) * (int)4)),val);
					HX_STACK_LINE(98)
					val;
				}
			}
		}
		HX_STACK_LINE(102)
		::lime::utils::ArrayBufferView tmp8 = buffer;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(102)
		this->uploadFromTypedArray(tmp8);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(VertexBuffer3D_obj,uploadFromVector,(void))


VertexBuffer3D_obj::VertexBuffer3D_obj()
{
}

void VertexBuffer3D_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(VertexBuffer3D);
	HX_MARK_MEMBER_NAME(__context,"__context");
	HX_MARK_MEMBER_NAME(__data,"__data");
	HX_MARK_MEMBER_NAME(__id,"__id");
	HX_MARK_MEMBER_NAME(__memoryUsage,"__memoryUsage");
	HX_MARK_MEMBER_NAME(__numVertices,"__numVertices");
	HX_MARK_MEMBER_NAME(__stride,"__stride");
	HX_MARK_MEMBER_NAME(__usage,"__usage");
	HX_MARK_MEMBER_NAME(__vertexSize,"__vertexSize");
	HX_MARK_END_CLASS();
}

void VertexBuffer3D_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(__context,"__context");
	HX_VISIT_MEMBER_NAME(__data,"__data");
	HX_VISIT_MEMBER_NAME(__id,"__id");
	HX_VISIT_MEMBER_NAME(__memoryUsage,"__memoryUsage");
	HX_VISIT_MEMBER_NAME(__numVertices,"__numVertices");
	HX_VISIT_MEMBER_NAME(__stride,"__stride");
	HX_VISIT_MEMBER_NAME(__usage,"__usage");
	HX_VISIT_MEMBER_NAME(__vertexSize,"__vertexSize");
}

Dynamic VertexBuffer3D_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"__id") ) { return __id; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"__data") ) { return __data; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"__usage") ) { return __usage; }
		if (HX_FIELD_EQ(inName,"dispose") ) { return dispose_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__stride") ) { return __stride; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"__context") ) { return __context; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__vertexSize") ) { return __vertexSize; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__memoryUsage") ) { return __memoryUsage; }
		if (HX_FIELD_EQ(inName,"__numVertices") ) { return __numVertices; }
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

Dynamic VertexBuffer3D_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"__id") ) { __id=inValue.Cast< ::lime::graphics::opengl::GLBuffer >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"__data") ) { __data=inValue.Cast< ::openfl::_Vector::FloatVector >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"__usage") ) { __usage=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__stride") ) { __stride=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"__context") ) { __context=inValue.Cast< ::openfl::display3D::Context3D >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__vertexSize") ) { __vertexSize=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__memoryUsage") ) { __memoryUsage=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__numVertices") ) { __numVertices=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void VertexBuffer3D_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("__context","\xcf","\xe6","\xc5","\x9a"));
	outFields->push(HX_HCSTRING("__data","\x4a","\xb9","\x5b","\xf1"));
	outFields->push(HX_HCSTRING("__id","\xfb","\xb6","\x13","\x3f"));
	outFields->push(HX_HCSTRING("__memoryUsage","\x40","\xbf","\x50","\xc5"));
	outFields->push(HX_HCSTRING("__numVertices","\x3f","\x51","\xa4","\x9e"));
	outFields->push(HX_HCSTRING("__stride","\x39","\x8b","\x5f","\xb9"));
	outFields->push(HX_HCSTRING("__usage","\x01","\xb6","\x8d","\x14"));
	outFields->push(HX_HCSTRING("__vertexSize","\x65","\xa5","\xa3","\x15"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::display3D::Context3D*/ ,(int)offsetof(VertexBuffer3D_obj,__context),HX_HCSTRING("__context","\xcf","\xe6","\xc5","\x9a")},
	{hx::fsObject /*::openfl::_Vector::FloatVector*/ ,(int)offsetof(VertexBuffer3D_obj,__data),HX_HCSTRING("__data","\x4a","\xb9","\x5b","\xf1")},
	{hx::fsObject /*::lime::graphics::opengl::GLBuffer*/ ,(int)offsetof(VertexBuffer3D_obj,__id),HX_HCSTRING("__id","\xfb","\xb6","\x13","\x3f")},
	{hx::fsInt,(int)offsetof(VertexBuffer3D_obj,__memoryUsage),HX_HCSTRING("__memoryUsage","\x40","\xbf","\x50","\xc5")},
	{hx::fsInt,(int)offsetof(VertexBuffer3D_obj,__numVertices),HX_HCSTRING("__numVertices","\x3f","\x51","\xa4","\x9e")},
	{hx::fsInt,(int)offsetof(VertexBuffer3D_obj,__stride),HX_HCSTRING("__stride","\x39","\x8b","\x5f","\xb9")},
	{hx::fsInt,(int)offsetof(VertexBuffer3D_obj,__usage),HX_HCSTRING("__usage","\x01","\xb6","\x8d","\x14")},
	{hx::fsInt,(int)offsetof(VertexBuffer3D_obj,__vertexSize),HX_HCSTRING("__vertexSize","\x65","\xa5","\xa3","\x15")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("__context","\xcf","\xe6","\xc5","\x9a"),
	HX_HCSTRING("__data","\x4a","\xb9","\x5b","\xf1"),
	HX_HCSTRING("__id","\xfb","\xb6","\x13","\x3f"),
	HX_HCSTRING("__memoryUsage","\x40","\xbf","\x50","\xc5"),
	HX_HCSTRING("__numVertices","\x3f","\x51","\xa4","\x9e"),
	HX_HCSTRING("__stride","\x39","\x8b","\x5f","\xb9"),
	HX_HCSTRING("__usage","\x01","\xb6","\x8d","\x14"),
	HX_HCSTRING("__vertexSize","\x65","\xa5","\xa3","\x15"),
	HX_HCSTRING("dispose","\x9f","\x80","\x4c","\xbb"),
	HX_HCSTRING("uploadFromByteArray","\xe6","\x17","\x1b","\xee"),
	HX_HCSTRING("uploadFromTypedArray","\xba","\x7c","\xf4","\xd1"),
	HX_HCSTRING("uploadFromVector","\x2e","\x6f","\x6b","\xa8"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(VertexBuffer3D_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(VertexBuffer3D_obj::__mClass,"__mClass");
};

#endif

hx::Class VertexBuffer3D_obj::__mClass;

void VertexBuffer3D_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.display3D.VertexBuffer3D","\x8e","\x20","\x03","\xff");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< VertexBuffer3D_obj >;
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
