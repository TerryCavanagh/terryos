#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
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
#ifndef INCLUDED_lime_graphics_opengl_GLFramebuffer
#include <lime/graphics/opengl/GLFramebuffer.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLObject
#include <lime/graphics/opengl/GLObject.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLRenderbuffer
#include <lime/graphics/opengl/GLRenderbuffer.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLTexture
#include <lime/graphics/opengl/GLTexture.h>
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
#ifndef INCLUDED_openfl__Vector_IntVector
#include <openfl/_Vector/IntVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_ObjectVector
#include <openfl/_Vector/ObjectVector.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_RenderSession
#include <openfl/_internal/renderer/RenderSession.h>
#endif
#ifndef INCLUDED_openfl__internal_stage3D_Context3DStateCache
#include <openfl/_internal/stage3D/Context3DStateCache.h>
#endif
#ifndef INCLUDED_openfl__internal_stage3D_GLUtils
#include <openfl/_internal/stage3D/GLUtils.h>
#endif
#ifndef INCLUDED_openfl__internal_stage3D_SamplerState
#include <openfl/_internal/stage3D/SamplerState.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_Stage3D
#include <openfl/display/Stage3D.h>
#endif
#ifndef INCLUDED_openfl_display3D_Context3D
#include <openfl/display3D/Context3D.h>
#endif
#ifndef INCLUDED_openfl_display3D_IndexBuffer3D
#include <openfl/display3D/IndexBuffer3D.h>
#endif
#ifndef INCLUDED_openfl_display3D_Program3D
#include <openfl/display3D/Program3D.h>
#endif
#ifndef INCLUDED_openfl_display3D_VertexBuffer3D
#include <openfl/display3D/VertexBuffer3D.h>
#endif
#ifndef INCLUDED_openfl_display3D__Context3DBufferUsage_Context3DBufferUsage_Impl_
#include <openfl/display3D/_Context3DBufferUsage/Context3DBufferUsage_Impl_.h>
#endif
#ifndef INCLUDED_openfl_display3D__Context3DTextureFormat_Context3DTextureFormat_Impl_
#include <openfl/display3D/_Context3DTextureFormat/Context3DTextureFormat_Impl_.h>
#endif
#ifndef INCLUDED_openfl_display3D_textures_CubeTexture
#include <openfl/display3D/textures/CubeTexture.h>
#endif
#ifndef INCLUDED_openfl_display3D_textures_RectangleTexture
#include <openfl/display3D/textures/RectangleTexture.h>
#endif
#ifndef INCLUDED_openfl_display3D_textures_Texture
#include <openfl/display3D/textures/Texture.h>
#endif
#ifndef INCLUDED_openfl_display3D_textures_TextureBase
#include <openfl/display3D/textures/TextureBase.h>
#endif
#ifndef INCLUDED_openfl_errors_Error
#include <openfl/errors/Error.h>
#endif
#ifndef INCLUDED_openfl_errors_IllegalOperationError
#include <openfl/errors/IllegalOperationError.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix3D
#include <openfl/geom/Matrix3D.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
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

Void Context3D_obj::__construct(::openfl::display::Stage3D stage3D,::openfl::_internal::renderer::RenderSession renderSession)
{
HX_STACK_FRAME("openfl.display3D.Context3D","new",0x4f12c019,"openfl.display3D.Context3D.new","openfl/display3D/Context3D.hx",43,0xc899cbb9)
HX_STACK_THIS(this)
HX_STACK_ARG(stage3D,"stage3D")
HX_STACK_ARG(renderSession,"renderSession")
{
	HX_STACK_LINE(61)
	this->totalGPUMemory = (int)0;
	HX_STACK_LINE(60)
	this->profile = ((Dynamic)((int)0));
	HX_STACK_LINE(57)
	this->enableErrorChecking = false;
	HX_STACK_LINE(56)
	this->driverInfo = HX_HCSTRING("OpenGL (Direct blitting)","\xe6","\x33","\xc8","\xa6");
	HX_STACK_LINE(55)
	this->backBufferWidth = (int)0;
	HX_STACK_LINE(54)
	this->backBufferHeight = (int)0;
	HX_STACK_LINE(99)
	super::__construct(null());
	HX_STACK_LINE(101)
	this->__stage3D = stage3D;
	HX_STACK_LINE(102)
	this->__renderSession = renderSession;
	HX_STACK_LINE(104)
	::lime::utils::ArrayBufferView tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(104)
	{
		HX_STACK_LINE(104)
		::lime::utils::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
		HX_STACK_LINE(104)
		bool tmp1 = true;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(104)
		if ((tmp1)){
			HX_STACK_LINE(104)
			::lime::utils::ArrayBufferView tmp2 = ::lime::utils::ArrayBufferView_obj::__new((int)512,(int)8);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(104)
			this1 = tmp2;
		}
		else{
			HX_STACK_LINE(104)
			bool tmp2 = false;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(104)
			if ((tmp2)){
				HX_STACK_LINE(104)
				::lime::utils::ArrayBufferView tmp3;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(104)
				{
					HX_STACK_LINE(104)
					::lime::utils::ArrayBufferView tmp4 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(104)
					::lime::utils::ArrayBufferView _this = tmp4;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(104)
					_this->byteOffset = (int)0;
					HX_STACK_LINE(104)
					int tmp5 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(104)
					_this->length = tmp5;
					HX_STACK_LINE(104)
					int tmp6 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(104)
					_this->byteLength = tmp6;
					HX_STACK_LINE(104)
					::haxe::io::Bytes tmp7;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(104)
					{
						HX_STACK_LINE(104)
						::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
						HX_STACK_LINE(104)
						int tmp8 = _this->byteLength;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(104)
						::haxe::io::Bytes tmp9 = ::haxe::io::Bytes_obj::alloc(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(104)
						this2 = tmp9;
						HX_STACK_LINE(104)
						tmp7 = this2;
					}
					HX_STACK_LINE(104)
					_this->buffer = tmp7;
					HX_STACK_LINE(104)
					_this->copyFromArray(((Array< Float >)(null())),null());
					HX_STACK_LINE(104)
					tmp3 = _this;
				}
				HX_STACK_LINE(104)
				this1 = tmp3;
			}
			else{
				HX_STACK_LINE(104)
				bool tmp3 = false;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(104)
				if ((tmp3)){
					HX_STACK_LINE(104)
					::lime::utils::ArrayBufferView tmp4;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(104)
					{
						HX_STACK_LINE(104)
						::lime::utils::ArrayBufferView tmp5 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(104)
						::lime::utils::ArrayBufferView _this = tmp5;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(104)
						::haxe::io::Bytes tmp6 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(104)
						::haxe::io::Bytes srcData = tmp6;		HX_STACK_VAR(srcData,"srcData");
						HX_STACK_LINE(104)
						int tmp7 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(104)
						int srcLength = tmp7;		HX_STACK_VAR(srcLength,"srcLength");
						HX_STACK_LINE(104)
						int tmp8 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(104)
						int srcByteOffset = tmp8;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
						HX_STACK_LINE(104)
						int tmp9 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(104)
						int srcElementSize = tmp9;		HX_STACK_VAR(srcElementSize,"srcElementSize");
						HX_STACK_LINE(104)
						int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
						HX_STACK_LINE(104)
						int tmp10 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(104)
						int tmp11 = _this->type;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(104)
						bool tmp12 = (tmp10 == tmp11);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(104)
						if ((tmp12)){
							HX_STACK_LINE(104)
							int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
							HX_STACK_LINE(104)
							int tmp13 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(104)
							int cloneLength = tmp13;		HX_STACK_VAR(cloneLength,"cloneLength");
							HX_STACK_LINE(104)
							::haxe::io::Bytes tmp14;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(104)
							{
								HX_STACK_LINE(104)
								::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
								HX_STACK_LINE(104)
								int tmp15 = cloneLength;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(104)
								::haxe::io::Bytes tmp16 = ::haxe::io::Bytes_obj::alloc(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(104)
								this2 = tmp16;
								HX_STACK_LINE(104)
								tmp14 = this2;
							}
							HX_STACK_LINE(104)
							_this->buffer = tmp14;
							HX_STACK_LINE(104)
							::haxe::io::Bytes tmp15 = srcData;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(104)
							int tmp16 = srcByteOffset;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(104)
							int tmp17 = cloneLength;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(104)
							_this->buffer->blit((int)0,tmp15,tmp16,tmp17);
						}
						else{
							HX_STACK_LINE(104)
							HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
						}
						HX_STACK_LINE(104)
						int tmp13 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(104)
						_this->byteLength = tmp13;
						HX_STACK_LINE(104)
						_this->byteOffset = (int)0;
						HX_STACK_LINE(104)
						_this->length = srcLength;
						HX_STACK_LINE(104)
						tmp4 = _this;
					}
					HX_STACK_LINE(104)
					this1 = tmp4;
				}
				else{
					HX_STACK_LINE(104)
					bool tmp4 = false;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(104)
					if ((tmp4)){
						HX_STACK_LINE(104)
						::lime::utils::ArrayBufferView tmp5;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(104)
						{
							HX_STACK_LINE(104)
							::lime::utils::ArrayBufferView tmp6 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(104)
							::lime::utils::ArrayBufferView _this = tmp6;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(104)
							bool tmp7 = false;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(104)
							if ((tmp7)){
								HX_STACK_LINE(104)
								HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
							}
							HX_STACK_LINE(104)
							int tmp8 = hx::Mod((int)0,_this->bytesPerElement);		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(104)
							bool tmp9 = (tmp8 != (int)0);		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(104)
							if ((tmp9)){
								HX_STACK_LINE(104)
								HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
							}
							HX_STACK_LINE(104)
							int tmp10 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(104)
							int bufferByteLength = tmp10;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
							HX_STACK_LINE(104)
							int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
							HX_STACK_LINE(104)
							int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
							HX_STACK_LINE(104)
							bool tmp11 = true;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(104)
							if ((tmp11)){
								HX_STACK_LINE(104)
								int tmp12 = bufferByteLength;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(104)
								newByteLength = tmp12;
								HX_STACK_LINE(104)
								int tmp13 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(104)
								bool tmp14 = (tmp13 != (int)0);		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(104)
								if ((tmp14)){
									HX_STACK_LINE(104)
									HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
								}
								HX_STACK_LINE(104)
								bool tmp15 = (newByteLength < (int)0);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(104)
								if ((tmp15)){
									HX_STACK_LINE(104)
									HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
								}
							}
							else{
								HX_STACK_LINE(104)
								int tmp12 = (null() * _this->bytesPerElement);		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(104)
								newByteLength = tmp12;
								HX_STACK_LINE(104)
								int tmp13 = newByteLength;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(104)
								int newRange = tmp13;		HX_STACK_VAR(newRange,"newRange");
								HX_STACK_LINE(104)
								bool tmp14 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(104)
								if ((tmp14)){
									HX_STACK_LINE(104)
									HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
								}
							}
							HX_STACK_LINE(104)
							_this->buffer = null();
							HX_STACK_LINE(104)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(104)
							_this->byteLength = newByteLength;
							HX_STACK_LINE(104)
							Float tmp12 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(104)
							int tmp13 = ::Std_obj::_int(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(104)
							_this->length = tmp13;
							HX_STACK_LINE(104)
							tmp5 = _this;
						}
						HX_STACK_LINE(104)
						this1 = tmp5;
					}
					else{
						HX_STACK_LINE(104)
						HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Float32Array","\x8e","\xc1","\xf4","\xd4"));
					}
				}
			}
		}
		HX_STACK_LINE(104)
		tmp = this1;
	}
	HX_STACK_LINE(104)
	this->__vertexConstants = tmp;
	HX_STACK_LINE(105)
	::lime::utils::ArrayBufferView tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(105)
	{
		HX_STACK_LINE(105)
		::lime::utils::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
		HX_STACK_LINE(105)
		bool tmp2 = true;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(105)
		if ((tmp2)){
			HX_STACK_LINE(105)
			::lime::utils::ArrayBufferView tmp3 = ::lime::utils::ArrayBufferView_obj::__new((int)512,(int)8);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(105)
			this1 = tmp3;
		}
		else{
			HX_STACK_LINE(105)
			bool tmp3 = false;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(105)
			if ((tmp3)){
				HX_STACK_LINE(105)
				::lime::utils::ArrayBufferView tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(105)
				{
					HX_STACK_LINE(105)
					::lime::utils::ArrayBufferView tmp5 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(105)
					::lime::utils::ArrayBufferView _this = tmp5;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(105)
					_this->byteOffset = (int)0;
					HX_STACK_LINE(105)
					int tmp6 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(105)
					_this->length = tmp6;
					HX_STACK_LINE(105)
					int tmp7 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(105)
					_this->byteLength = tmp7;
					HX_STACK_LINE(105)
					::haxe::io::Bytes tmp8;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(105)
					{
						HX_STACK_LINE(105)
						::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
						HX_STACK_LINE(105)
						int tmp9 = _this->byteLength;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(105)
						::haxe::io::Bytes tmp10 = ::haxe::io::Bytes_obj::alloc(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(105)
						this2 = tmp10;
						HX_STACK_LINE(105)
						tmp8 = this2;
					}
					HX_STACK_LINE(105)
					_this->buffer = tmp8;
					HX_STACK_LINE(105)
					_this->copyFromArray(((Array< Float >)(null())),null());
					HX_STACK_LINE(105)
					tmp4 = _this;
				}
				HX_STACK_LINE(105)
				this1 = tmp4;
			}
			else{
				HX_STACK_LINE(105)
				bool tmp4 = false;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(105)
				if ((tmp4)){
					HX_STACK_LINE(105)
					::lime::utils::ArrayBufferView tmp5;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(105)
					{
						HX_STACK_LINE(105)
						::lime::utils::ArrayBufferView tmp6 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(105)
						::lime::utils::ArrayBufferView _this = tmp6;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(105)
						::haxe::io::Bytes tmp7 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(105)
						::haxe::io::Bytes srcData = tmp7;		HX_STACK_VAR(srcData,"srcData");
						HX_STACK_LINE(105)
						int tmp8 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(105)
						int srcLength = tmp8;		HX_STACK_VAR(srcLength,"srcLength");
						HX_STACK_LINE(105)
						int tmp9 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(105)
						int srcByteOffset = tmp9;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
						HX_STACK_LINE(105)
						int tmp10 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(105)
						int srcElementSize = tmp10;		HX_STACK_VAR(srcElementSize,"srcElementSize");
						HX_STACK_LINE(105)
						int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
						HX_STACK_LINE(105)
						int tmp11 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(105)
						int tmp12 = _this->type;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(105)
						bool tmp13 = (tmp11 == tmp12);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(105)
						if ((tmp13)){
							HX_STACK_LINE(105)
							int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
							HX_STACK_LINE(105)
							int tmp14 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(105)
							int cloneLength = tmp14;		HX_STACK_VAR(cloneLength,"cloneLength");
							HX_STACK_LINE(105)
							::haxe::io::Bytes tmp15;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(105)
							{
								HX_STACK_LINE(105)
								::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
								HX_STACK_LINE(105)
								int tmp16 = cloneLength;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(105)
								::haxe::io::Bytes tmp17 = ::haxe::io::Bytes_obj::alloc(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(105)
								this2 = tmp17;
								HX_STACK_LINE(105)
								tmp15 = this2;
							}
							HX_STACK_LINE(105)
							_this->buffer = tmp15;
							HX_STACK_LINE(105)
							::haxe::io::Bytes tmp16 = srcData;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(105)
							int tmp17 = srcByteOffset;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(105)
							int tmp18 = cloneLength;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(105)
							_this->buffer->blit((int)0,tmp16,tmp17,tmp18);
						}
						else{
							HX_STACK_LINE(105)
							HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
						}
						HX_STACK_LINE(105)
						int tmp14 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(105)
						_this->byteLength = tmp14;
						HX_STACK_LINE(105)
						_this->byteOffset = (int)0;
						HX_STACK_LINE(105)
						_this->length = srcLength;
						HX_STACK_LINE(105)
						tmp5 = _this;
					}
					HX_STACK_LINE(105)
					this1 = tmp5;
				}
				else{
					HX_STACK_LINE(105)
					bool tmp5 = false;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(105)
					if ((tmp5)){
						HX_STACK_LINE(105)
						::lime::utils::ArrayBufferView tmp6;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(105)
						{
							HX_STACK_LINE(105)
							::lime::utils::ArrayBufferView tmp7 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(105)
							::lime::utils::ArrayBufferView _this = tmp7;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(105)
							bool tmp8 = false;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(105)
							if ((tmp8)){
								HX_STACK_LINE(105)
								HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
							}
							HX_STACK_LINE(105)
							int tmp9 = hx::Mod((int)0,_this->bytesPerElement);		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(105)
							bool tmp10 = (tmp9 != (int)0);		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(105)
							if ((tmp10)){
								HX_STACK_LINE(105)
								HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
							}
							HX_STACK_LINE(105)
							int tmp11 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(105)
							int bufferByteLength = tmp11;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
							HX_STACK_LINE(105)
							int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
							HX_STACK_LINE(105)
							int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
							HX_STACK_LINE(105)
							bool tmp12 = true;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(105)
							if ((tmp12)){
								HX_STACK_LINE(105)
								int tmp13 = bufferByteLength;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(105)
								newByteLength = tmp13;
								HX_STACK_LINE(105)
								int tmp14 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(105)
								bool tmp15 = (tmp14 != (int)0);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(105)
								if ((tmp15)){
									HX_STACK_LINE(105)
									HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
								}
								HX_STACK_LINE(105)
								bool tmp16 = (newByteLength < (int)0);		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(105)
								if ((tmp16)){
									HX_STACK_LINE(105)
									HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
								}
							}
							else{
								HX_STACK_LINE(105)
								int tmp13 = (null() * _this->bytesPerElement);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(105)
								newByteLength = tmp13;
								HX_STACK_LINE(105)
								int tmp14 = newByteLength;		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(105)
								int newRange = tmp14;		HX_STACK_VAR(newRange,"newRange");
								HX_STACK_LINE(105)
								bool tmp15 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(105)
								if ((tmp15)){
									HX_STACK_LINE(105)
									HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
								}
							}
							HX_STACK_LINE(105)
							_this->buffer = null();
							HX_STACK_LINE(105)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(105)
							_this->byteLength = newByteLength;
							HX_STACK_LINE(105)
							Float tmp13 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(105)
							int tmp14 = ::Std_obj::_int(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(105)
							_this->length = tmp14;
							HX_STACK_LINE(105)
							tmp6 = _this;
						}
						HX_STACK_LINE(105)
						this1 = tmp6;
					}
					else{
						HX_STACK_LINE(105)
						HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Float32Array","\x8e","\xc1","\xf4","\xd4"));
					}
				}
			}
		}
		HX_STACK_LINE(105)
		tmp1 = this1;
	}
	HX_STACK_LINE(105)
	this->__fragmentConstants = tmp1;
	HX_STACK_LINE(107)
	::lime::utils::ArrayBufferView tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(107)
	{
		HX_STACK_LINE(107)
		cpp::ArrayBase array = Array_obj< Float >::__new().Add(((Float)1.0)).Add(((Float)1.0)).Add(((Float)1.0)).Add(((Float)1.0));		HX_STACK_VAR(array,"array");
		HX_STACK_LINE(107)
		::lime::utils::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
		HX_STACK_LINE(107)
		bool tmp3 = false;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(107)
		if ((tmp3)){
			HX_STACK_LINE(107)
			::lime::utils::ArrayBufferView tmp4 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)8);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(107)
			this1 = tmp4;
		}
		else{
			HX_STACK_LINE(107)
			bool tmp4 = (array != null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(107)
			if ((tmp4)){
				HX_STACK_LINE(107)
				::lime::utils::ArrayBufferView tmp5;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(107)
				{
					HX_STACK_LINE(107)
					::lime::utils::ArrayBufferView tmp6 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(107)
					::lime::utils::ArrayBufferView _this = tmp6;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(107)
					_this->byteOffset = (int)0;
					HX_STACK_LINE(107)
					_this->length = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
					HX_STACK_LINE(107)
					int tmp7 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(107)
					_this->byteLength = tmp7;
					HX_STACK_LINE(107)
					::haxe::io::Bytes tmp8;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(107)
					{
						HX_STACK_LINE(107)
						::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
						HX_STACK_LINE(107)
						int tmp9 = _this->byteLength;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(107)
						::haxe::io::Bytes tmp10 = ::haxe::io::Bytes_obj::alloc(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(107)
						this2 = tmp10;
						HX_STACK_LINE(107)
						tmp8 = this2;
					}
					HX_STACK_LINE(107)
					_this->buffer = tmp8;
					HX_STACK_LINE(107)
					_this->copyFromArray(((Array< Float >)(array)),null());
					HX_STACK_LINE(107)
					tmp5 = _this;
				}
				HX_STACK_LINE(107)
				this1 = tmp5;
			}
			else{
				HX_STACK_LINE(107)
				bool tmp5 = false;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(107)
				if ((tmp5)){
					HX_STACK_LINE(107)
					::lime::utils::ArrayBufferView tmp6;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(107)
					{
						HX_STACK_LINE(107)
						::lime::utils::ArrayBufferView tmp7 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(107)
						::lime::utils::ArrayBufferView _this = tmp7;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(107)
						::haxe::io::Bytes tmp8 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(107)
						::haxe::io::Bytes srcData = tmp8;		HX_STACK_VAR(srcData,"srcData");
						HX_STACK_LINE(107)
						int tmp9 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(107)
						int srcLength = tmp9;		HX_STACK_VAR(srcLength,"srcLength");
						HX_STACK_LINE(107)
						int tmp10 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(107)
						int srcByteOffset = tmp10;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
						HX_STACK_LINE(107)
						int tmp11 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(107)
						int srcElementSize = tmp11;		HX_STACK_VAR(srcElementSize,"srcElementSize");
						HX_STACK_LINE(107)
						int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
						HX_STACK_LINE(107)
						int tmp12 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(107)
						int tmp13 = _this->type;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(107)
						bool tmp14 = (tmp12 == tmp13);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(107)
						if ((tmp14)){
							HX_STACK_LINE(107)
							int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
							HX_STACK_LINE(107)
							int tmp15 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(107)
							int cloneLength = tmp15;		HX_STACK_VAR(cloneLength,"cloneLength");
							HX_STACK_LINE(107)
							::haxe::io::Bytes tmp16;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(107)
							{
								HX_STACK_LINE(107)
								::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
								HX_STACK_LINE(107)
								int tmp17 = cloneLength;		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(107)
								::haxe::io::Bytes tmp18 = ::haxe::io::Bytes_obj::alloc(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(107)
								this2 = tmp18;
								HX_STACK_LINE(107)
								tmp16 = this2;
							}
							HX_STACK_LINE(107)
							_this->buffer = tmp16;
							HX_STACK_LINE(107)
							::haxe::io::Bytes tmp17 = srcData;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(107)
							int tmp18 = srcByteOffset;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(107)
							int tmp19 = cloneLength;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(107)
							_this->buffer->blit((int)0,tmp17,tmp18,tmp19);
						}
						else{
							HX_STACK_LINE(107)
							HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
						}
						HX_STACK_LINE(107)
						int tmp15 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(107)
						_this->byteLength = tmp15;
						HX_STACK_LINE(107)
						_this->byteOffset = (int)0;
						HX_STACK_LINE(107)
						_this->length = srcLength;
						HX_STACK_LINE(107)
						tmp6 = _this;
					}
					HX_STACK_LINE(107)
					this1 = tmp6;
				}
				else{
					HX_STACK_LINE(107)
					bool tmp6 = false;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(107)
					if ((tmp6)){
						HX_STACK_LINE(107)
						::lime::utils::ArrayBufferView tmp7;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(107)
						{
							HX_STACK_LINE(107)
							::lime::utils::ArrayBufferView tmp8 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(107)
							::lime::utils::ArrayBufferView _this = tmp8;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(107)
							bool tmp9 = false;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(107)
							if ((tmp9)){
								HX_STACK_LINE(107)
								HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
							}
							HX_STACK_LINE(107)
							int tmp10 = hx::Mod((int)0,_this->bytesPerElement);		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(107)
							bool tmp11 = (tmp10 != (int)0);		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(107)
							if ((tmp11)){
								HX_STACK_LINE(107)
								HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
							}
							HX_STACK_LINE(107)
							int tmp12 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(107)
							int bufferByteLength = tmp12;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
							HX_STACK_LINE(107)
							int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
							HX_STACK_LINE(107)
							int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
							HX_STACK_LINE(107)
							bool tmp13 = true;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(107)
							if ((tmp13)){
								HX_STACK_LINE(107)
								int tmp14 = bufferByteLength;		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(107)
								newByteLength = tmp14;
								HX_STACK_LINE(107)
								int tmp15 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(107)
								bool tmp16 = (tmp15 != (int)0);		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(107)
								if ((tmp16)){
									HX_STACK_LINE(107)
									HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
								}
								HX_STACK_LINE(107)
								bool tmp17 = (newByteLength < (int)0);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(107)
								if ((tmp17)){
									HX_STACK_LINE(107)
									HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
								}
							}
							else{
								HX_STACK_LINE(107)
								int tmp14 = (null() * _this->bytesPerElement);		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(107)
								newByteLength = tmp14;
								HX_STACK_LINE(107)
								int tmp15 = newByteLength;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(107)
								int newRange = tmp15;		HX_STACK_VAR(newRange,"newRange");
								HX_STACK_LINE(107)
								bool tmp16 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(107)
								if ((tmp16)){
									HX_STACK_LINE(107)
									HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
								}
							}
							HX_STACK_LINE(107)
							_this->buffer = null();
							HX_STACK_LINE(107)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(107)
							_this->byteLength = newByteLength;
							HX_STACK_LINE(107)
							Float tmp14 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(107)
							int tmp15 = ::Std_obj::_int(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(107)
							_this->length = tmp15;
							HX_STACK_LINE(107)
							tmp7 = _this;
						}
						HX_STACK_LINE(107)
						this1 = tmp7;
					}
					else{
						HX_STACK_LINE(107)
						HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Float32Array","\x8e","\xc1","\xf4","\xd4"));
					}
				}
			}
		}
		HX_STACK_LINE(107)
		tmp2 = this1;
	}
	HX_STACK_LINE(107)
	this->__positionScale = tmp2;
	HX_STACK_LINE(108)
	this->__samplerDirty = (int)0;
	HX_STACK_LINE(109)
	::openfl::_Vector::ObjectVector tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(109)
	{
		HX_STACK_LINE(109)
		bool fixed = null();		HX_STACK_VAR(fixed,"fixed");
		HX_STACK_LINE(109)
		::openfl::_Vector::ObjectVector tmp4 = ::openfl::_Vector::ObjectVector_obj::__new((int)8,fixed,null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(109)
		::openfl::_Vector::ObjectVector tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(109)
		tmp3 = tmp5;
	}
	HX_STACK_LINE(109)
	this->__samplerTextures = tmp3;
	HX_STACK_LINE(110)
	this->__samplerStates = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(112)
	{
		HX_STACK_LINE(112)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(112)
		while((true)){
			HX_STACK_LINE(112)
			bool tmp4 = (_g < (int)8);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(112)
			bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(112)
			if ((tmp5)){
				HX_STACK_LINE(112)
				break;
			}
			HX_STACK_LINE(112)
			int tmp6 = (_g)++;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(112)
			int i = tmp6;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(114)
			::openfl::_internal::stage3D::SamplerState tmp7 = ::openfl::_internal::stage3D::SamplerState_obj::__new((int)9729,(int)9729,(int)33071,(int)33071,null(),null());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(114)
			this->__samplerStates[i] = tmp7;
		}
	}
	HX_STACK_LINE(121)
	int tmp4 = this->maxBackBufferWidth = (int)16384;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(121)
	this->maxBackBufferHeight = tmp4;
	HX_STACK_LINE(124)
	this->__backBufferAntiAlias = (int)0;
	HX_STACK_LINE(125)
	this->__backBufferEnableDepthAndStencil = true;
	HX_STACK_LINE(126)
	this->__backBufferWantsBestResolution = false;
	HX_STACK_LINE(128)
	this->__frameCount = (int)0;
	HX_STACK_LINE(129)
	this->__rttDepthAndStencil = false;
	HX_STACK_LINE(130)
	this->__samplerDirty = (int)0;
	HX_STACK_LINE(131)
	this->__stencilCompareMode = ((Dynamic)((int)0));
	HX_STACK_LINE(132)
	this->__stencilRef = (int)0;
	HX_STACK_LINE(133)
	this->__stencilReadMask = (int)255;
	HX_STACK_LINE(137)
	bool tmp5 = this->__hasGLExtension(HX_HCSTRING("GL_OES_packed_depth_stencil","\x15","\xba","\x96","\xd2"));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(137)
	bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(137)
	bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(137)
	if ((tmp6)){
		HX_STACK_LINE(137)
		tmp7 = this->__hasGLExtension(HX_HCSTRING("GL_EXT_packed_depth_stencil","\x91","\x29","\x49","\xe0"));
	}
	else{
		HX_STACK_LINE(137)
		tmp7 = true;
	}
	HX_STACK_LINE(137)
	this->__supportsPackedDepthStencil = tmp7;
	HX_STACK_LINE(140)
	::openfl::_Vector::IntVector tmp8;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(140)
	{
		HX_STACK_LINE(140)
		bool fixed = null();		HX_STACK_VAR(fixed,"fixed");
		HX_STACK_LINE(140)
		::openfl::_Vector::IntVector tmp9 = ::openfl::_Vector::IntVector_obj::__new((int)11,fixed,null());		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(140)
		::openfl::_Vector::IntVector tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(140)
		tmp8 = tmp10;
	}
	HX_STACK_LINE(140)
	this->__stats = tmp8;
	HX_STACK_LINE(141)
	::openfl::_Vector::IntVector tmp9;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(141)
	{
		HX_STACK_LINE(141)
		bool fixed = null();		HX_STACK_VAR(fixed,"fixed");
		HX_STACK_LINE(141)
		::openfl::_Vector::IntVector tmp10 = ::openfl::_Vector::IntVector_obj::__new((int)11,fixed,null());		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(141)
		::openfl::_Vector::IntVector tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(141)
		tmp9 = tmp11;
	}
	HX_STACK_LINE(141)
	this->__statsCache = tmp9;
	HX_STACK_LINE(148)
	::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
	HX_STACK_LINE(150)
	::String vendor = ((Dynamic)(::lime::graphics::opengl::GL_obj::cffi_lime_gl_get_parameter.call((int)7936)));		HX_STACK_VAR(vendor,"vendor");
	HX_STACK_LINE(151)
	::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
	HX_STACK_LINE(153)
	::String version = ((Dynamic)(::lime::graphics::opengl::GL_obj::cffi_lime_gl_get_parameter.call((int)7938)));		HX_STACK_VAR(version,"version");
	HX_STACK_LINE(154)
	::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
	HX_STACK_LINE(156)
	::String renderer = ((Dynamic)(::lime::graphics::opengl::GL_obj::cffi_lime_gl_get_parameter.call((int)7937)));		HX_STACK_VAR(renderer,"renderer");
	HX_STACK_LINE(157)
	::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
	HX_STACK_LINE(159)
	::String glslVersion = HX_HCSTRING("<unknown>","\xb0","\x91","\xd8","\xda");		HX_STACK_VAR(glslVersion,"glslVersion");
	HX_STACK_LINE(160)
	::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
	HX_STACK_LINE(162)
	::String tmp10 = HX_HCSTRING("OpenGL Vendor=","\x04","\xc1","\x2f","\xf5");		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(163)
	::String tmp11 = vendor;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(162)
	::String tmp12 = (tmp10 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(162)
	::String tmp13 = (tmp12 + HX_HCSTRING(" Version=","\x65","\x2a","\x97","\x0e"));		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(164)
	::String tmp14 = version;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(162)
	::String tmp15 = (tmp13 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(162)
	::String tmp16 = (tmp15 + HX_HCSTRING(" Renderer=","\x5a","\xb1","\x92","\x78"));		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(165)
	::String tmp17 = renderer;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(162)
	::String tmp18 = (tmp16 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(162)
	::String tmp19 = (tmp18 + HX_HCSTRING(" GLSL=","\x5f","\x30","\x5a","\xdf"));		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(166)
	::String tmp20 = glslVersion;		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(162)
	::String tmp21 = (tmp19 + tmp20);		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(162)
	this->driverInfo = tmp21;
	HX_STACK_LINE(172)
	{
		HX_STACK_LINE(172)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(172)
		::openfl::_Vector::IntVector tmp22 = this->__stats;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(172)
		int tmp23 = tmp22->get_length();		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(172)
		int _g = tmp23;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(172)
		while((true)){
			HX_STACK_LINE(172)
			bool tmp24 = (_g1 < _g);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(172)
			bool tmp25 = !(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(172)
			if ((tmp25)){
				HX_STACK_LINE(172)
				break;
			}
			HX_STACK_LINE(172)
			int tmp26 = (_g1)++;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(172)
			int i = tmp26;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(174)
			::openfl::_Vector::IntVector tmp27 = this->__stats;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(174)
			int tmp28 = i;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(174)
			int tmp29 = tmp27->set(tmp28,(int)0);		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(174)
			tmp29;
		}
	}
	HX_STACK_LINE(178)
	::openfl::_internal::stage3D::Context3DStateCache tmp22 = ::openfl::display3D::Context3D_obj::__stateCache;		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(178)
	tmp22->clearSettings();
}
;
	return null();
}

//Context3D_obj::~Context3D_obj() { }

Dynamic Context3D_obj::__CreateEmpty() { return  new Context3D_obj; }
hx::ObjectPtr< Context3D_obj > Context3D_obj::__new(::openfl::display::Stage3D stage3D,::openfl::_internal::renderer::RenderSession renderSession)
{  hx::ObjectPtr< Context3D_obj > _result_ = new Context3D_obj();
	_result_->__construct(stage3D,renderSession);
	return _result_;}

Dynamic Context3D_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Context3D_obj > _result_ = new Context3D_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

Void Context3D_obj::clear( hx::Null< Float >  __o_red,hx::Null< Float >  __o_green,hx::Null< Float >  __o_blue,hx::Null< Float >  __o_alpha,hx::Null< Float >  __o_depth,hx::Null< int >  __o_stencil,hx::Null< int >  __o_mask){
Float red = __o_red.Default(0);
Float green = __o_green.Default(0);
Float blue = __o_blue.Default(0);
Float alpha = __o_alpha.Default(1);
Float depth = __o_depth.Default(1);
int stencil = __o_stencil.Default(0);
int mask = __o_mask.Default(7);
	HX_STACK_FRAME("openfl.display3D.Context3D","clear",0xf8808186,"openfl.display3D.Context3D.clear","openfl/display3D/Context3D.hx",183,0xc899cbb9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(red,"red")
	HX_STACK_ARG(green,"green")
	HX_STACK_ARG(blue,"blue")
	HX_STACK_ARG(alpha,"alpha")
	HX_STACK_ARG(depth,"depth")
	HX_STACK_ARG(stencil,"stencil")
	HX_STACK_ARG(mask,"mask")
{
		HX_STACK_LINE(185)
		int clearMask = (int)0;		HX_STACK_VAR(clearMask,"clearMask");
		HX_STACK_LINE(187)
		int tmp = (int(mask) & int((int)1));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(187)
		int tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(187)
		bool tmp2 = (tmp1 != (int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(187)
		if ((tmp2)){
			HX_STACK_LINE(189)
			hx::OrEq(clearMask,(int)16384);
			HX_STACK_LINE(191)
			::lime::graphics::opengl::GL_obj::cffi_lime_gl_clear_color.call(red,green,blue,alpha);
			HX_STACK_LINE(192)
			::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
		}
		HX_STACK_LINE(196)
		int tmp3 = (int(mask) & int((int)2));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(196)
		int tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(196)
		bool tmp5 = (tmp4 != (int)0);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(196)
		if ((tmp5)){
			HX_STACK_LINE(198)
			hx::OrEq(clearMask,(int)256);
			HX_STACK_LINE(200)
			::lime::graphics::opengl::GL_obj::cffi_lime_gl_clear_depth.call(depth);
			HX_STACK_LINE(201)
			::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
		}
		HX_STACK_LINE(205)
		int tmp6 = (int(mask) & int((int)4));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(205)
		int tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(205)
		bool tmp8 = (tmp7 != (int)0);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(205)
		if ((tmp8)){
			HX_STACK_LINE(207)
			hx::OrEq(clearMask,(int)1024);
			HX_STACK_LINE(209)
			::lime::graphics::opengl::GL_obj::cffi_lime_gl_clear_stencil.call(stencil);
			HX_STACK_LINE(210)
			::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
		}
		HX_STACK_LINE(214)
		::lime::graphics::opengl::GL_obj::cffi_lime_gl_clear.call(clearMask);
		HX_STACK_LINE(215)
		::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC7(Context3D_obj,clear,(void))

Void Context3D_obj::configureBackBuffer( int width,int height,int antiAlias,hx::Null< bool >  __o_enableDepthAndStencil,hx::Null< bool >  __o_wantsBestResolution,hx::Null< bool >  __o_wantsBestResolutionOnBrowserZoom){
bool enableDepthAndStencil = __o_enableDepthAndStencil.Default(true);
bool wantsBestResolution = __o_wantsBestResolution.Default(false);
bool wantsBestResolutionOnBrowserZoom = __o_wantsBestResolutionOnBrowserZoom.Default(false);
	HX_STACK_FRAME("openfl.display3D.Context3D","configureBackBuffer",0x7210edc6,"openfl.display3D.Context3D.configureBackBuffer","openfl/display3D/Context3D.hx",220,0xc899cbb9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(width,"width")
	HX_STACK_ARG(height,"height")
	HX_STACK_ARG(antiAlias,"antiAlias")
	HX_STACK_ARG(enableDepthAndStencil,"enableDepthAndStencil")
	HX_STACK_ARG(wantsBestResolution,"wantsBestResolution")
	HX_STACK_ARG(wantsBestResolutionOnBrowserZoom,"wantsBestResolutionOnBrowserZoom")
{
		HX_STACK_LINE(222)
		this->__updateBackbufferViewport();
		HX_STACK_LINE(224)
		this->backBufferWidth = width;
		HX_STACK_LINE(225)
		this->backBufferHeight = height;
		HX_STACK_LINE(227)
		this->__backBufferAntiAlias = antiAlias;
		HX_STACK_LINE(228)
		this->__backBufferEnableDepthAndStencil = enableDepthAndStencil;
		HX_STACK_LINE(229)
		this->__backBufferWantsBestResolution = wantsBestResolution;
		HX_STACK_LINE(231)
		::openfl::_internal::stage3D::Context3DStateCache tmp = ::openfl::display3D::Context3D_obj::__stateCache;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(231)
		tmp->clearSettings();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(Context3D_obj,configureBackBuffer,(void))

::openfl::display3D::textures::CubeTexture Context3D_obj::createCubeTexture( int size,Dynamic format,bool optimizeForRenderToTexture,hx::Null< int >  __o_streamingLevels){
int streamingLevels = __o_streamingLevels.Default(0);
	HX_STACK_FRAME("openfl.display3D.Context3D","createCubeTexture",0xbb69e843,"openfl.display3D.Context3D.createCubeTexture","openfl/display3D/Context3D.hx",236,0xc899cbb9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(size,"size")
	HX_STACK_ARG(format,"format")
	HX_STACK_ARG(optimizeForRenderToTexture,"optimizeForRenderToTexture")
	HX_STACK_ARG(streamingLevels,"streamingLevels")
{
		HX_STACK_LINE(238)
		::openfl::display3D::textures::CubeTexture tmp = ::openfl::display3D::textures::CubeTexture_obj::__new(hx::ObjectPtr<OBJ_>(this),size,format,optimizeForRenderToTexture,streamingLevels);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(238)
		return tmp;
	}
}


HX_DEFINE_DYNAMIC_FUNC4(Context3D_obj,createCubeTexture,return )

::openfl::display3D::IndexBuffer3D Context3D_obj::createIndexBuffer( int numIndices,Dynamic __o_bufferUsage){
Dynamic bufferUsage = __o_bufferUsage.Default(1);
	HX_STACK_FRAME("openfl.display3D.Context3D","createIndexBuffer",0x3b80e18f,"openfl.display3D.Context3D.createIndexBuffer","openfl/display3D/Context3D.hx",243,0xc899cbb9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(numIndices,"numIndices")
	HX_STACK_ARG(bufferUsage,"bufferUsage")
{
		HX_STACK_LINE(245)
		int tmp = numIndices;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(245)
		Dynamic tmp1 = bufferUsage;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(245)
		::String tmp2 = ::openfl::display3D::_Context3DBufferUsage::Context3DBufferUsage_Impl__obj::toString(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(245)
		::openfl::display3D::IndexBuffer3D tmp3 = ::openfl::display3D::IndexBuffer3D_obj::__new(hx::ObjectPtr<OBJ_>(this),tmp,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(245)
		return tmp3;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(Context3D_obj,createIndexBuffer,return )

::openfl::display3D::Program3D Context3D_obj::createProgram( ){
	HX_STACK_FRAME("openfl.display3D.Context3D","createProgram",0x0b5753e1,"openfl.display3D.Context3D.createProgram","openfl/display3D/Context3D.hx",250,0xc899cbb9)
	HX_STACK_THIS(this)
	HX_STACK_LINE(252)
	::openfl::display3D::Program3D tmp = ::openfl::display3D::Program3D_obj::__new(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(252)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Context3D_obj,createProgram,return )

::openfl::display3D::textures::RectangleTexture Context3D_obj::createRectangleTexture( int width,int height,Dynamic format,bool optimizeForRenderToTexture){
	HX_STACK_FRAME("openfl.display3D.Context3D","createRectangleTexture",0x8720f36f,"openfl.display3D.Context3D.createRectangleTexture","openfl/display3D/Context3D.hx",257,0xc899cbb9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(width,"width")
	HX_STACK_ARG(height,"height")
	HX_STACK_ARG(format,"format")
	HX_STACK_ARG(optimizeForRenderToTexture,"optimizeForRenderToTexture")
	HX_STACK_LINE(259)
	int tmp = width;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(259)
	int tmp1 = height;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(259)
	Dynamic tmp2 = format;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(259)
	::String tmp3 = ::openfl::display3D::_Context3DTextureFormat::Context3DTextureFormat_Impl__obj::toString(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(259)
	bool tmp4 = optimizeForRenderToTexture;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(259)
	::openfl::display3D::textures::RectangleTexture tmp5 = ::openfl::display3D::textures::RectangleTexture_obj::__new(hx::ObjectPtr<OBJ_>(this),tmp,tmp1,tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(259)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC4(Context3D_obj,createRectangleTexture,return )

::openfl::display3D::textures::Texture Context3D_obj::createTexture( int width,int height,Dynamic format,bool optimizeForRenderToTexture,hx::Null< int >  __o_streamingLevels){
int streamingLevels = __o_streamingLevels.Default(0);
	HX_STACK_FRAME("openfl.display3D.Context3D","createTexture",0xb63ed238,"openfl.display3D.Context3D.createTexture","openfl/display3D/Context3D.hx",264,0xc899cbb9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(width,"width")
	HX_STACK_ARG(height,"height")
	HX_STACK_ARG(format,"format")
	HX_STACK_ARG(optimizeForRenderToTexture,"optimizeForRenderToTexture")
	HX_STACK_ARG(streamingLevels,"streamingLevels")
{
		HX_STACK_LINE(266)
		::openfl::display3D::textures::Texture tmp = ::openfl::display3D::textures::Texture_obj::__new(hx::ObjectPtr<OBJ_>(this),width,height,format,optimizeForRenderToTexture,streamingLevels);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(266)
		return tmp;
	}
}


HX_DEFINE_DYNAMIC_FUNC5(Context3D_obj,createTexture,return )

::openfl::display3D::VertexBuffer3D Context3D_obj::createVertexBuffer( int numVertices,int data32PerVertex,Dynamic __o_bufferUsage){
Dynamic bufferUsage = __o_bufferUsage.Default(1);
	HX_STACK_FRAME("openfl.display3D.Context3D","createVertexBuffer",0x49fb9507,"openfl.display3D.Context3D.createVertexBuffer","openfl/display3D/Context3D.hx",271,0xc899cbb9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(numVertices,"numVertices")
	HX_STACK_ARG(data32PerVertex,"data32PerVertex")
	HX_STACK_ARG(bufferUsage,"bufferUsage")
{
		HX_STACK_LINE(273)
		int tmp = numVertices;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(273)
		int tmp1 = data32PerVertex;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(273)
		Dynamic tmp2 = bufferUsage;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(273)
		::String tmp3 = ::openfl::display3D::_Context3DBufferUsage::Context3DBufferUsage_Impl__obj::toString(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(273)
		::openfl::display3D::VertexBuffer3D tmp4 = ::openfl::display3D::VertexBuffer3D_obj::__new(hx::ObjectPtr<OBJ_>(this),tmp,tmp1,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(273)
		return tmp4;
	}
}


HX_DEFINE_DYNAMIC_FUNC3(Context3D_obj,createVertexBuffer,return )

Void Context3D_obj::dispose( ){
{
		HX_STACK_FRAME("openfl.display3D.Context3D","dispose",0x8ad040d8,"openfl.display3D.Context3D.dispose","openfl/display3D/Context3D.hx",278,0xc899cbb9)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Context3D_obj,dispose,(void))

Void Context3D_obj::drawToBitmapData( ::openfl::display::BitmapData destination){
{
		HX_STACK_FRAME("openfl.display3D.Context3D","drawToBitmapData",0x474f45df,"openfl.display3D.Context3D.drawToBitmapData","openfl/display3D/Context3D.hx",285,0xc899cbb9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(destination,"destination")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Context3D_obj,drawToBitmapData,(void))

Void Context3D_obj::drawTriangles( ::openfl::display3D::IndexBuffer3D indexBuffer,hx::Null< int >  __o_firstIndex,hx::Null< int >  __o_numTriangles){
int firstIndex = __o_firstIndex.Default(0);
int numTriangles = __o_numTriangles.Default(-1);
	HX_STACK_FRAME("openfl.display3D.Context3D","drawTriangles",0x0d837500,"openfl.display3D.Context3D.drawTriangles","openfl/display3D/Context3D.hx",292,0xc899cbb9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(indexBuffer,"indexBuffer")
	HX_STACK_ARG(firstIndex,"firstIndex")
	HX_STACK_ARG(numTriangles,"numTriangles")
{
		HX_STACK_LINE(294)
		::openfl::display3D::Program3D tmp = this->__program;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(294)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(294)
		if ((tmp1)){
			HX_STACK_LINE(296)
			return null();
		}
		HX_STACK_LINE(300)
		this->__flushSamplerState();
		HX_STACK_LINE(301)
		::openfl::display3D::Program3D tmp2 = this->__program;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(301)
		tmp2->__flush();
		HX_STACK_LINE(303)
		bool tmp3 = (numTriangles == (int)-1);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(303)
		int tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(303)
		if ((tmp3)){
			HX_STACK_LINE(303)
			tmp4 = indexBuffer->__numIndices;
		}
		else{
			HX_STACK_LINE(303)
			tmp4 = (numTriangles * (int)3);
		}
		HX_STACK_LINE(303)
		int count = tmp4;		HX_STACK_VAR(count,"count");
		HX_STACK_LINE(305)
		{
			HX_STACK_LINE(305)
			::lime::graphics::opengl::GLBuffer buffer = indexBuffer->__id;		HX_STACK_VAR(buffer,"buffer");
			HX_STACK_LINE(305)
			::lime::graphics::opengl::GL_obj::cffi_lime_gl_bind_buffer.call((int)34963,hx::DynamicPtr((  (((buffer == null()))) ? Dynamic(null()) : Dynamic(buffer->id) )));
		}
		HX_STACK_LINE(306)
		::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
		HX_STACK_LINE(308)
		::lime::graphics::opengl::GL_obj::cffi_lime_gl_draw_elements.call((int)4,count,indexBuffer->__elementType,firstIndex);
		HX_STACK_LINE(309)
		::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
		HX_STACK_LINE(311)
		this->__statsIncrement((int)0);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Context3D_obj,drawTriangles,(void))

Void Context3D_obj::present( ){
{
		HX_STACK_FRAME("openfl.display3D.Context3D","present",0x095ffb34,"openfl.display3D.Context3D.present","openfl/display3D/Context3D.hx",317,0xc899cbb9)
		HX_STACK_THIS(this)
		HX_STACK_LINE(319)
		this->__statsSendToTelemetry();
		HX_STACK_LINE(326)
		this->__statsClear((int)0);
		HX_STACK_LINE(328)
		(this->__frameCount)++;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Context3D_obj,present,(void))

Void Context3D_obj::setBlendFactors( Dynamic sourceFactor,Dynamic destinationFactor){
{
		HX_STACK_FRAME("openfl.display3D.Context3D","setBlendFactors",0x86d16c6e,"openfl.display3D.Context3D.setBlendFactors","openfl/display3D/Context3D.hx",333,0xc899cbb9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(sourceFactor,"sourceFactor")
		HX_STACK_ARG(destinationFactor,"destinationFactor")
		HX_STACK_LINE(335)
		::openfl::_internal::stage3D::Context3DStateCache tmp = ::openfl::display3D::Context3D_obj::__stateCache;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(335)
		Dynamic tmp1 = sourceFactor;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(335)
		bool tmp2 = tmp->updateBlendSrcFactor(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(335)
		bool updateSrc = tmp2;		HX_STACK_VAR(updateSrc,"updateSrc");
		HX_STACK_LINE(336)
		::openfl::_internal::stage3D::Context3DStateCache tmp3 = ::openfl::display3D::Context3D_obj::__stateCache;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(336)
		Dynamic tmp4 = destinationFactor;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(336)
		bool tmp5 = tmp3->updateBlendDestFactor(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(336)
		bool updateDest = tmp5;		HX_STACK_VAR(updateDest,"updateDest");
		HX_STACK_LINE(337)
		bool tmp6 = updateSrc;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(337)
		bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(337)
		bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(337)
		if ((tmp7)){
			HX_STACK_LINE(337)
			tmp8 = updateDest;
		}
		else{
			HX_STACK_LINE(337)
			tmp8 = true;
		}
		HX_STACK_LINE(337)
		if ((tmp8)){
			HX_STACK_LINE(339)
			this->__updateBlendFactors();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Context3D_obj,setBlendFactors,(void))

Void Context3D_obj::setColorMask( bool red,bool green,bool blue,bool alpha){
{
		HX_STACK_FRAME("openfl.display3D.Context3D","setColorMask",0xad4f5d14,"openfl.display3D.Context3D.setColorMask","openfl/display3D/Context3D.hx",348,0xc899cbb9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(red,"red")
		HX_STACK_ARG(green,"green")
		HX_STACK_ARG(blue,"blue")
		HX_STACK_ARG(alpha,"alpha")
		HX_STACK_LINE(348)
		::lime::graphics::opengl::GL_obj::cffi_lime_gl_color_mask.call(red,green,blue,alpha);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Context3D_obj,setColorMask,(void))

Void Context3D_obj::setCulling( Dynamic triangleFaceToCull){
{
		HX_STACK_FRAME("openfl.display3D.Context3D","setCulling",0x39687055,"openfl.display3D.Context3D.setCulling","openfl/display3D/Context3D.hx",353,0xc899cbb9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(triangleFaceToCull,"triangleFaceToCull")
		HX_STACK_LINE(355)
		::openfl::_internal::stage3D::Context3DStateCache tmp = ::openfl::display3D::Context3D_obj::__stateCache;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(355)
		Dynamic tmp1 = triangleFaceToCull;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(355)
		bool tmp2 = tmp->updateCullingMode(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(355)
		if ((tmp2)){
			HX_STACK_LINE(357)
			Dynamic tmp3 = triangleFaceToCull;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(357)
			switch( (int)(tmp3)){
				case (int)3: {
					HX_STACK_LINE(361)
					::lime::graphics::opengl::GL_obj::cffi_lime_gl_disable.call((int)2884);
				}
				;break;
				case (int)0: {
					HX_STACK_LINE(365)
					::lime::graphics::opengl::GL_obj::cffi_lime_gl_enable.call((int)2884);
					HX_STACK_LINE(366)
					::lime::graphics::opengl::GL_obj::cffi_lime_gl_cull_face.call((int)1028);
				}
				;break;
				case (int)1: {
					HX_STACK_LINE(370)
					::lime::graphics::opengl::GL_obj::cffi_lime_gl_enable.call((int)2884);
					HX_STACK_LINE(371)
					::lime::graphics::opengl::GL_obj::cffi_lime_gl_cull_face.call((int)1029);
				}
				;break;
				case (int)2: {
					HX_STACK_LINE(375)
					::lime::graphics::opengl::GL_obj::cffi_lime_gl_enable.call((int)2884);
					HX_STACK_LINE(376)
					::lime::graphics::opengl::GL_obj::cffi_lime_gl_cull_face.call((int)1032);
				}
				;break;
				default: {
					HX_STACK_LINE(380)
					::openfl::errors::IllegalOperationError tmp4 = ::openfl::errors::IllegalOperationError_obj::__new(null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(380)
					HX_STACK_DO_THROW(tmp4);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Context3D_obj,setCulling,(void))

Void Context3D_obj::setDepthTest( bool depthMask,Dynamic passCompareMode){
{
		HX_STACK_FRAME("openfl.display3D.Context3D","setDepthTest",0x2d08b41a,"openfl.display3D.Context3D.setDepthTest","openfl/display3D/Context3D.hx",389,0xc899cbb9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(depthMask,"depthMask")
		HX_STACK_ARG(passCompareMode,"passCompareMode")
		HX_STACK_LINE(391)
		bool tmp = this->__backBufferEnableDepthAndStencil;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(391)
		bool depthTestEnabled = tmp;		HX_STACK_VAR(depthTestEnabled,"depthTestEnabled");
		HX_STACK_LINE(393)
		::openfl::_internal::stage3D::Context3DStateCache tmp1 = ::openfl::display3D::Context3D_obj::__stateCache;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(393)
		bool tmp2 = depthTestEnabled;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(393)
		bool tmp3 = tmp1->updateDepthTestEnabled(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(393)
		if ((tmp3)){
			HX_STACK_LINE(395)
			bool tmp4 = depthTestEnabled;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(395)
			if ((tmp4)){
				HX_STACK_LINE(397)
				::lime::graphics::opengl::GL_obj::cffi_lime_gl_enable.call((int)2929);
			}
			else{
				HX_STACK_LINE(401)
				::lime::graphics::opengl::GL_obj::cffi_lime_gl_disable.call((int)2929);
			}
		}
		HX_STACK_LINE(407)
		::openfl::_internal::stage3D::Context3DStateCache tmp4 = ::openfl::display3D::Context3D_obj::__stateCache;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(407)
		bool tmp5 = depthMask;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(407)
		bool tmp6 = tmp4->updateDepthTestMask(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(407)
		if ((tmp6)){
			HX_STACK_LINE(409)
			::lime::graphics::opengl::GL_obj::cffi_lime_gl_depth_mask.call(depthMask);
		}
		HX_STACK_LINE(413)
		::openfl::_internal::stage3D::Context3DStateCache tmp7 = ::openfl::display3D::Context3D_obj::__stateCache;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(413)
		Dynamic tmp8 = passCompareMode;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(413)
		bool tmp9 = tmp7->updateDepthCompareMode(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(413)
		if ((tmp9)){
			HX_STACK_LINE(415)
			Dynamic tmp10 = passCompareMode;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(415)
			switch( (int)(tmp10)){
				case (int)0: {
					HX_STACK_LINE(417)
					::lime::graphics::opengl::GL_obj::cffi_lime_gl_depth_func.call((int)519);
				}
				;break;
				case (int)1: {
					HX_STACK_LINE(418)
					::lime::graphics::opengl::GL_obj::cffi_lime_gl_depth_func.call((int)514);
				}
				;break;
				case (int)2: {
					HX_STACK_LINE(419)
					::lime::graphics::opengl::GL_obj::cffi_lime_gl_depth_func.call((int)516);
				}
				;break;
				case (int)3: {
					HX_STACK_LINE(420)
					::lime::graphics::opengl::GL_obj::cffi_lime_gl_depth_func.call((int)518);
				}
				;break;
				case (int)4: {
					HX_STACK_LINE(421)
					::lime::graphics::opengl::GL_obj::cffi_lime_gl_depth_func.call((int)513);
				}
				;break;
				case (int)5: {
					HX_STACK_LINE(422)
					::lime::graphics::opengl::GL_obj::cffi_lime_gl_depth_func.call((int)515);
				}
				;break;
				case (int)6: {
					HX_STACK_LINE(423)
					::lime::graphics::opengl::GL_obj::cffi_lime_gl_depth_func.call((int)512);
				}
				;break;
				case (int)7: {
					HX_STACK_LINE(424)
					::lime::graphics::opengl::GL_obj::cffi_lime_gl_depth_func.call((int)517);
				}
				;break;
				default: {
					HX_STACK_LINE(427)
					::openfl::errors::IllegalOperationError tmp11 = ::openfl::errors::IllegalOperationError_obj::__new(null());		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(427)
					HX_STACK_DO_THROW(tmp11);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Context3D_obj,setDepthTest,(void))

Void Context3D_obj::setProgram( ::openfl::display3D::Program3D program){
{
		HX_STACK_FRAME("openfl.display3D.Context3D","setProgram",0xd9d9d869,"openfl.display3D.Context3D.setProgram","openfl/display3D/Context3D.hx",436,0xc899cbb9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(program,"program")
		HX_STACK_LINE(438)
		bool tmp = (program == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(438)
		if ((tmp)){
			HX_STACK_LINE(440)
			::openfl::errors::IllegalOperationError tmp1 = ::openfl::errors::IllegalOperationError_obj::__new(null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(440)
			HX_STACK_DO_THROW(tmp1);
		}
		HX_STACK_LINE(444)
		::openfl::_internal::stage3D::Context3DStateCache tmp1 = ::openfl::display3D::Context3D_obj::__stateCache;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(444)
		::openfl::display3D::Program3D tmp2 = program;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(444)
		bool tmp3 = tmp1->updateProgram3D(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(444)
		if ((tmp3)){
			HX_STACK_LINE(446)
			program->__use();
			HX_STACK_LINE(447)
			::lime::utils::ArrayBufferView tmp4 = this->__positionScale;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(447)
			program->__setPositionScale(tmp4);
			HX_STACK_LINE(449)
			this->__program = program;
			HX_STACK_LINE(451)
			::openfl::display3D::Program3D tmp5 = this->__program;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(451)
			hx::OrEq(this->__samplerDirty,tmp5->__samplerUsageMask);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Context3D_obj,setProgram,(void))

Void Context3D_obj::setProgramConstantsFromByteArray( Dynamic programType,int firstRegister,int numRegisters,::openfl::utils::ByteArrayData data,int byteArrayOffset){
{
		HX_STACK_FRAME("openfl.display3D.Context3D","setProgramConstantsFromByteArray",0xd8990de1,"openfl.display3D.Context3D.setProgramConstantsFromByteArray","openfl/display3D/Context3D.hx",458,0xc899cbb9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(programType,"programType")
		HX_STACK_ARG(firstRegister,"firstRegister")
		HX_STACK_ARG(numRegisters,"numRegisters")
		HX_STACK_ARG(data,"data")
		HX_STACK_ARG(byteArrayOffset,"byteArrayOffset")
		HX_STACK_LINE(460)
		bool tmp = (numRegisters == (int)0);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(460)
		if ((tmp)){
			HX_STACK_LINE(460)
			return null();
		}
		HX_STACK_LINE(462)
		bool tmp1 = (numRegisters == (int)-1);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(462)
		if ((tmp1)){
			HX_STACK_LINE(464)
			int tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(464)
			{
				HX_STACK_LINE(464)
				::openfl::utils::ByteArrayData tmp3 = data;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(464)
				int tmp4 = ::openfl::utils::_ByteArray::ByteArray_Impl__obj::get_length(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(464)
				int tmp5 = (int(tmp4) >> int((int)2));		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(464)
				int a = tmp5;		HX_STACK_VAR(a,"a");
				HX_STACK_LINE(464)
				tmp2 = (a - byteArrayOffset);
			}
			HX_STACK_LINE(464)
			numRegisters = tmp2;
		}
		HX_STACK_LINE(468)
		bool tmp2 = (programType == ((Dynamic)((int)1)));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(468)
		bool isVertex = tmp2;		HX_STACK_VAR(isVertex,"isVertex");
		HX_STACK_LINE(469)
		bool tmp3 = isVertex;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(469)
		::lime::utils::ArrayBufferView tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(469)
		if ((tmp3)){
			HX_STACK_LINE(469)
			tmp4 = this->__vertexConstants;
		}
		else{
			HX_STACK_LINE(469)
			tmp4 = this->__fragmentConstants;
		}
		HX_STACK_LINE(469)
		::lime::utils::ArrayBufferView dest = tmp4;		HX_STACK_VAR(dest,"dest");
		HX_STACK_LINE(471)
		::lime::utils::ArrayBufferView tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(471)
		{
			HX_STACK_LINE(471)
			::openfl::utils::ByteArrayData tmp6 = data;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(471)
			::haxe::io::Bytes tmp7 = ::openfl::utils::_ByteArray::ByteArray_Impl__obj::toArrayBuffer(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(471)
			::haxe::io::Bytes bytes = tmp7;		HX_STACK_VAR(bytes,"bytes");
			HX_STACK_LINE(471)
			::openfl::utils::ByteArrayData tmp8 = data;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(471)
			int tmp9 = ::openfl::utils::_ByteArray::ByteArray_Impl__obj::get_length(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(471)
			Dynamic len = tmp9;		HX_STACK_VAR(len,"len");
			HX_STACK_LINE(471)
			{
				HX_STACK_LINE(471)
				::lime::utils::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(471)
				bool tmp10 = false;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(471)
				if ((tmp10)){
					HX_STACK_LINE(471)
					::lime::utils::ArrayBufferView tmp11 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)8);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(471)
					this1 = tmp11;
				}
				else{
					HX_STACK_LINE(471)
					bool tmp11 = false;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(471)
					if ((tmp11)){
						HX_STACK_LINE(471)
						::lime::utils::ArrayBufferView tmp12;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(471)
						{
							HX_STACK_LINE(471)
							::lime::utils::ArrayBufferView tmp13 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(471)
							::lime::utils::ArrayBufferView _this = tmp13;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(471)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(471)
							int tmp14 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(471)
							_this->length = tmp14;
							HX_STACK_LINE(471)
							int tmp15 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(471)
							_this->byteLength = tmp15;
							HX_STACK_LINE(471)
							::haxe::io::Bytes tmp16;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(471)
							{
								HX_STACK_LINE(471)
								::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
								HX_STACK_LINE(471)
								int tmp17 = _this->byteLength;		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(471)
								::haxe::io::Bytes tmp18 = ::haxe::io::Bytes_obj::alloc(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(471)
								this2 = tmp18;
								HX_STACK_LINE(471)
								tmp16 = this2;
							}
							HX_STACK_LINE(471)
							_this->buffer = tmp16;
							HX_STACK_LINE(471)
							_this->copyFromArray(((Array< Float >)(null())),null());
							HX_STACK_LINE(471)
							tmp12 = _this;
						}
						HX_STACK_LINE(471)
						this1 = tmp12;
					}
					else{
						HX_STACK_LINE(471)
						bool tmp12 = false;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(471)
						if ((tmp12)){
							HX_STACK_LINE(471)
							::lime::utils::ArrayBufferView tmp13;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(471)
							{
								HX_STACK_LINE(471)
								::lime::utils::ArrayBufferView tmp14 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(471)
								::lime::utils::ArrayBufferView _this = tmp14;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(471)
								::haxe::io::Bytes tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(471)
								::haxe::io::Bytes srcData = tmp15;		HX_STACK_VAR(srcData,"srcData");
								HX_STACK_LINE(471)
								int tmp16 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(471)
								int srcLength = tmp16;		HX_STACK_VAR(srcLength,"srcLength");
								HX_STACK_LINE(471)
								int tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(471)
								int srcByteOffset = tmp17;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
								HX_STACK_LINE(471)
								int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(471)
								int srcElementSize = tmp18;		HX_STACK_VAR(srcElementSize,"srcElementSize");
								HX_STACK_LINE(471)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(471)
								int tmp19 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(471)
								int tmp20 = _this->type;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(471)
								bool tmp21 = (tmp19 == tmp20);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(471)
								if ((tmp21)){
									HX_STACK_LINE(471)
									int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
									HX_STACK_LINE(471)
									int tmp22 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(471)
									int cloneLength = tmp22;		HX_STACK_VAR(cloneLength,"cloneLength");
									HX_STACK_LINE(471)
									::haxe::io::Bytes tmp23;		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(471)
									{
										HX_STACK_LINE(471)
										::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
										HX_STACK_LINE(471)
										int tmp24 = cloneLength;		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(471)
										::haxe::io::Bytes tmp25 = ::haxe::io::Bytes_obj::alloc(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(471)
										this2 = tmp25;
										HX_STACK_LINE(471)
										tmp23 = this2;
									}
									HX_STACK_LINE(471)
									_this->buffer = tmp23;
									HX_STACK_LINE(471)
									::haxe::io::Bytes tmp24 = srcData;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(471)
									int tmp25 = srcByteOffset;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(471)
									int tmp26 = cloneLength;		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(471)
									_this->buffer->blit((int)0,tmp24,tmp25,tmp26);
								}
								else{
									HX_STACK_LINE(471)
									HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
								}
								HX_STACK_LINE(471)
								int tmp22 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(471)
								_this->byteLength = tmp22;
								HX_STACK_LINE(471)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(471)
								_this->length = srcLength;
								HX_STACK_LINE(471)
								tmp13 = _this;
							}
							HX_STACK_LINE(471)
							this1 = tmp13;
						}
						else{
							HX_STACK_LINE(471)
							bool tmp13 = (bytes != null());		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(471)
							if ((tmp13)){
								HX_STACK_LINE(471)
								::lime::utils::ArrayBufferView tmp14;		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(471)
								{
									HX_STACK_LINE(471)
									::lime::utils::ArrayBufferView tmp15 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(471)
									::lime::utils::ArrayBufferView _this = tmp15;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(471)
									bool tmp16 = false;		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(471)
									if ((tmp16)){
										HX_STACK_LINE(471)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(471)
									int tmp17 = hx::Mod((int)0,_this->bytesPerElement);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(471)
									bool tmp18 = (tmp17 != (int)0);		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(471)
									if ((tmp18)){
										HX_STACK_LINE(471)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(471)
									int bufferByteLength = bytes->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
									HX_STACK_LINE(471)
									int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
									HX_STACK_LINE(471)
									int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
									HX_STACK_LINE(471)
									bool tmp19 = (len == null());		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(471)
									if ((tmp19)){
										HX_STACK_LINE(471)
										int tmp20 = bufferByteLength;		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(471)
										newByteLength = tmp20;
										HX_STACK_LINE(471)
										int tmp21 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(471)
										bool tmp22 = (tmp21 != (int)0);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(471)
										if ((tmp22)){
											HX_STACK_LINE(471)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										HX_STACK_LINE(471)
										bool tmp23 = (newByteLength < (int)0);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(471)
										if ((tmp23)){
											HX_STACK_LINE(471)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
									}
									else{
										HX_STACK_LINE(471)
										int tmp20 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(471)
										newByteLength = tmp20;
										HX_STACK_LINE(471)
										int tmp21 = newByteLength;		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(471)
										int newRange = tmp21;		HX_STACK_VAR(newRange,"newRange");
										HX_STACK_LINE(471)
										bool tmp22 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(471)
										if ((tmp22)){
											HX_STACK_LINE(471)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
									}
									HX_STACK_LINE(471)
									_this->buffer = bytes;
									HX_STACK_LINE(471)
									_this->byteOffset = (int)0;
									HX_STACK_LINE(471)
									_this->byteLength = newByteLength;
									HX_STACK_LINE(471)
									Float tmp20 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(471)
									int tmp21 = ::Std_obj::_int(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(471)
									_this->length = tmp21;
									HX_STACK_LINE(471)
									tmp14 = _this;
								}
								HX_STACK_LINE(471)
								this1 = tmp14;
							}
							else{
								HX_STACK_LINE(471)
								HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Float32Array","\x8e","\xc1","\xf4","\xd4"));
							}
						}
					}
				}
				HX_STACK_LINE(471)
				tmp5 = this1;
			}
		}
		HX_STACK_LINE(471)
		::lime::utils::ArrayBufferView floatData = tmp5;		HX_STACK_VAR(floatData,"floatData");
		HX_STACK_LINE(472)
		int tmp6 = (firstRegister * (int)4);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(472)
		int outOffset = tmp6;		HX_STACK_VAR(outOffset,"outOffset");
		HX_STACK_LINE(473)
		Float tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(473)
		{
			HX_STACK_LINE(473)
			int _int = byteArrayOffset;		HX_STACK_VAR(_int,"int");
			HX_STACK_LINE(473)
			bool tmp8 = (_int < (int)0);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(473)
			if ((tmp8)){
				HX_STACK_LINE(473)
				tmp7 = (((Float)4294967296.0) + _int);
			}
			else{
				HX_STACK_LINE(473)
				tmp7 = (_int + ((Float)0.0));
			}
		}
		HX_STACK_LINE(473)
		Float tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(473)
		{
			HX_STACK_LINE(473)
			int _int = (int)4;		HX_STACK_VAR(_int,"int");
			HX_STACK_LINE(473)
			bool tmp9 = (_int < (int)0);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(473)
			if ((tmp9)){
				HX_STACK_LINE(473)
				tmp8 = (((Float)4294967296.0) + _int);
			}
			else{
				HX_STACK_LINE(473)
				tmp8 = (_int + ((Float)0.0));
			}
		}
		HX_STACK_LINE(473)
		Float tmp9 = (Float(tmp7) / Float(tmp8));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(473)
		int tmp10 = ::Std_obj::_int(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(473)
		int inOffset = tmp10;		HX_STACK_VAR(inOffset,"inOffset");
		HX_STACK_LINE(475)
		{
			HX_STACK_LINE(475)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(475)
			int tmp11 = (numRegisters * (int)4);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(475)
			int _g = tmp11;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(475)
			while((true)){
				HX_STACK_LINE(475)
				bool tmp12 = (_g1 < _g);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(475)
				bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(475)
				if ((tmp13)){
					HX_STACK_LINE(475)
					break;
				}
				HX_STACK_LINE(475)
				int tmp14 = (_g1)++;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(475)
				int i = tmp14;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(477)
				{
					HX_STACK_LINE(477)
					Float tmp15 = ::__hxcpp_memory_get_float(floatData->buffer->b,(floatData->byteOffset + (((inOffset + i)) * (int)4)));		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(477)
					Float val = tmp15;		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(477)
					::__hxcpp_memory_set_float(dest->buffer->b,(dest->byteOffset + (((outOffset + i)) * (int)4)),val);
					HX_STACK_LINE(477)
					val;
				}
			}
		}
		HX_STACK_LINE(481)
		::openfl::display3D::Program3D tmp11 = this->__program;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(481)
		bool tmp12 = (tmp11 != null());		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(481)
		if ((tmp12)){
			HX_STACK_LINE(483)
			::openfl::display3D::Program3D tmp13 = this->__program;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(483)
			bool tmp14 = isVertex;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(483)
			int tmp15 = firstRegister;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(483)
			int tmp16 = numRegisters;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(483)
			tmp13->__markDirty(tmp14,tmp15,tmp16);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(Context3D_obj,setProgramConstantsFromByteArray,(void))

Void Context3D_obj::setProgramConstantsFromMatrix( Dynamic programType,int firstRegister,::openfl::geom::Matrix3D matrix,hx::Null< bool >  __o_transposedMatrix){
bool transposedMatrix = __o_transposedMatrix.Default(false);
	HX_STACK_FRAME("openfl.display3D.Context3D","setProgramConstantsFromMatrix",0x29e843d1,"openfl.display3D.Context3D.setProgramConstantsFromMatrix","openfl/display3D/Context3D.hx",490,0xc899cbb9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(programType,"programType")
	HX_STACK_ARG(firstRegister,"firstRegister")
	HX_STACK_ARG(matrix,"matrix")
	HX_STACK_ARG(transposedMatrix,"transposedMatrix")
{
		HX_STACK_LINE(492)
		bool tmp = (programType == ((Dynamic)((int)1)));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(492)
		bool isVertex = tmp;		HX_STACK_VAR(isVertex,"isVertex");
		HX_STACK_LINE(493)
		bool tmp1 = isVertex;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(493)
		::lime::utils::ArrayBufferView tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(493)
		if ((tmp1)){
			HX_STACK_LINE(493)
			tmp2 = this->__vertexConstants;
		}
		else{
			HX_STACK_LINE(493)
			tmp2 = this->__fragmentConstants;
		}
		HX_STACK_LINE(493)
		::lime::utils::ArrayBufferView dest = tmp2;		HX_STACK_VAR(dest,"dest");
		HX_STACK_LINE(494)
		::openfl::_Vector::FloatVector source = matrix->rawData;		HX_STACK_VAR(source,"source");
		HX_STACK_LINE(495)
		int tmp3 = (firstRegister * (int)4);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(495)
		int i = tmp3;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(497)
		bool tmp4 = transposedMatrix;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(497)
		if ((tmp4)){
			HX_STACK_LINE(499)
			{
				HX_STACK_LINE(499)
				int tmp5 = (i)++;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(499)
				int idx = tmp5;		HX_STACK_VAR(idx,"idx");
				HX_STACK_LINE(499)
				Float tmp6 = source->get((int)0);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(499)
				Float val = tmp6;		HX_STACK_VAR(val,"val");
				HX_STACK_LINE(499)
				::__hxcpp_memory_set_float(dest->buffer->b,(dest->byteOffset + (idx * (int)4)),val);
				HX_STACK_LINE(499)
				val;
			}
			HX_STACK_LINE(500)
			{
				HX_STACK_LINE(500)
				int tmp5 = (i)++;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(500)
				int idx = tmp5;		HX_STACK_VAR(idx,"idx");
				HX_STACK_LINE(500)
				Float tmp6 = source->get((int)4);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(500)
				Float val = tmp6;		HX_STACK_VAR(val,"val");
				HX_STACK_LINE(500)
				::__hxcpp_memory_set_float(dest->buffer->b,(dest->byteOffset + (idx * (int)4)),val);
				HX_STACK_LINE(500)
				val;
			}
			HX_STACK_LINE(501)
			{
				HX_STACK_LINE(501)
				int tmp5 = (i)++;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(501)
				int idx = tmp5;		HX_STACK_VAR(idx,"idx");
				HX_STACK_LINE(501)
				Float tmp6 = source->get((int)8);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(501)
				Float val = tmp6;		HX_STACK_VAR(val,"val");
				HX_STACK_LINE(501)
				::__hxcpp_memory_set_float(dest->buffer->b,(dest->byteOffset + (idx * (int)4)),val);
				HX_STACK_LINE(501)
				val;
			}
			HX_STACK_LINE(502)
			{
				HX_STACK_LINE(502)
				int tmp5 = (i)++;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(502)
				int idx = tmp5;		HX_STACK_VAR(idx,"idx");
				HX_STACK_LINE(502)
				Float tmp6 = source->get((int)12);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(502)
				Float val = tmp6;		HX_STACK_VAR(val,"val");
				HX_STACK_LINE(502)
				::__hxcpp_memory_set_float(dest->buffer->b,(dest->byteOffset + (idx * (int)4)),val);
				HX_STACK_LINE(502)
				val;
			}
			HX_STACK_LINE(504)
			{
				HX_STACK_LINE(504)
				int tmp5 = (i)++;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(504)
				int idx = tmp5;		HX_STACK_VAR(idx,"idx");
				HX_STACK_LINE(504)
				Float tmp6 = source->get((int)1);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(504)
				Float val = tmp6;		HX_STACK_VAR(val,"val");
				HX_STACK_LINE(504)
				::__hxcpp_memory_set_float(dest->buffer->b,(dest->byteOffset + (idx * (int)4)),val);
				HX_STACK_LINE(504)
				val;
			}
			HX_STACK_LINE(505)
			{
				HX_STACK_LINE(505)
				int tmp5 = (i)++;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(505)
				int idx = tmp5;		HX_STACK_VAR(idx,"idx");
				HX_STACK_LINE(505)
				Float tmp6 = source->get((int)5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(505)
				Float val = tmp6;		HX_STACK_VAR(val,"val");
				HX_STACK_LINE(505)
				::__hxcpp_memory_set_float(dest->buffer->b,(dest->byteOffset + (idx * (int)4)),val);
				HX_STACK_LINE(505)
				val;
			}
			HX_STACK_LINE(506)
			{
				HX_STACK_LINE(506)
				int tmp5 = (i)++;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(506)
				int idx = tmp5;		HX_STACK_VAR(idx,"idx");
				HX_STACK_LINE(506)
				Float tmp6 = source->get((int)9);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(506)
				Float val = tmp6;		HX_STACK_VAR(val,"val");
				HX_STACK_LINE(506)
				::__hxcpp_memory_set_float(dest->buffer->b,(dest->byteOffset + (idx * (int)4)),val);
				HX_STACK_LINE(506)
				val;
			}
			HX_STACK_LINE(507)
			{
				HX_STACK_LINE(507)
				int tmp5 = (i)++;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(507)
				int idx = tmp5;		HX_STACK_VAR(idx,"idx");
				HX_STACK_LINE(507)
				Float tmp6 = source->get((int)13);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(507)
				Float val = tmp6;		HX_STACK_VAR(val,"val");
				HX_STACK_LINE(507)
				::__hxcpp_memory_set_float(dest->buffer->b,(dest->byteOffset + (idx * (int)4)),val);
				HX_STACK_LINE(507)
				val;
			}
			HX_STACK_LINE(509)
			{
				HX_STACK_LINE(509)
				int tmp5 = (i)++;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(509)
				int idx = tmp5;		HX_STACK_VAR(idx,"idx");
				HX_STACK_LINE(509)
				Float tmp6 = source->get((int)2);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(509)
				Float val = tmp6;		HX_STACK_VAR(val,"val");
				HX_STACK_LINE(509)
				::__hxcpp_memory_set_float(dest->buffer->b,(dest->byteOffset + (idx * (int)4)),val);
				HX_STACK_LINE(509)
				val;
			}
			HX_STACK_LINE(510)
			{
				HX_STACK_LINE(510)
				int tmp5 = (i)++;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(510)
				int idx = tmp5;		HX_STACK_VAR(idx,"idx");
				HX_STACK_LINE(510)
				Float tmp6 = source->get((int)6);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(510)
				Float val = tmp6;		HX_STACK_VAR(val,"val");
				HX_STACK_LINE(510)
				::__hxcpp_memory_set_float(dest->buffer->b,(dest->byteOffset + (idx * (int)4)),val);
				HX_STACK_LINE(510)
				val;
			}
			HX_STACK_LINE(511)
			{
				HX_STACK_LINE(511)
				int tmp5 = (i)++;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(511)
				int idx = tmp5;		HX_STACK_VAR(idx,"idx");
				HX_STACK_LINE(511)
				Float tmp6 = source->get((int)10);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(511)
				Float val = tmp6;		HX_STACK_VAR(val,"val");
				HX_STACK_LINE(511)
				::__hxcpp_memory_set_float(dest->buffer->b,(dest->byteOffset + (idx * (int)4)),val);
				HX_STACK_LINE(511)
				val;
			}
			HX_STACK_LINE(512)
			{
				HX_STACK_LINE(512)
				int tmp5 = (i)++;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(512)
				int idx = tmp5;		HX_STACK_VAR(idx,"idx");
				HX_STACK_LINE(512)
				Float tmp6 = source->get((int)14);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(512)
				Float val = tmp6;		HX_STACK_VAR(val,"val");
				HX_STACK_LINE(512)
				::__hxcpp_memory_set_float(dest->buffer->b,(dest->byteOffset + (idx * (int)4)),val);
				HX_STACK_LINE(512)
				val;
			}
			HX_STACK_LINE(514)
			{
				HX_STACK_LINE(514)
				int tmp5 = (i)++;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(514)
				int idx = tmp5;		HX_STACK_VAR(idx,"idx");
				HX_STACK_LINE(514)
				Float tmp6 = source->get((int)3);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(514)
				Float val = tmp6;		HX_STACK_VAR(val,"val");
				HX_STACK_LINE(514)
				::__hxcpp_memory_set_float(dest->buffer->b,(dest->byteOffset + (idx * (int)4)),val);
				HX_STACK_LINE(514)
				val;
			}
			HX_STACK_LINE(515)
			{
				HX_STACK_LINE(515)
				int tmp5 = (i)++;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(515)
				int idx = tmp5;		HX_STACK_VAR(idx,"idx");
				HX_STACK_LINE(515)
				Float tmp6 = source->get((int)7);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(515)
				Float val = tmp6;		HX_STACK_VAR(val,"val");
				HX_STACK_LINE(515)
				::__hxcpp_memory_set_float(dest->buffer->b,(dest->byteOffset + (idx * (int)4)),val);
				HX_STACK_LINE(515)
				val;
			}
			HX_STACK_LINE(516)
			{
				HX_STACK_LINE(516)
				int tmp5 = (i)++;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(516)
				int idx = tmp5;		HX_STACK_VAR(idx,"idx");
				HX_STACK_LINE(516)
				Float tmp6 = source->get((int)11);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(516)
				Float val = tmp6;		HX_STACK_VAR(val,"val");
				HX_STACK_LINE(516)
				::__hxcpp_memory_set_float(dest->buffer->b,(dest->byteOffset + (idx * (int)4)),val);
				HX_STACK_LINE(516)
				val;
			}
			HX_STACK_LINE(517)
			{
				HX_STACK_LINE(517)
				int tmp5 = (i)++;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(517)
				int idx = tmp5;		HX_STACK_VAR(idx,"idx");
				HX_STACK_LINE(517)
				Float tmp6 = source->get((int)15);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(517)
				Float val = tmp6;		HX_STACK_VAR(val,"val");
				HX_STACK_LINE(517)
				::__hxcpp_memory_set_float(dest->buffer->b,(dest->byteOffset + (idx * (int)4)),val);
				HX_STACK_LINE(517)
				val;
			}
		}
		else{
			HX_STACK_LINE(521)
			{
				HX_STACK_LINE(521)
				int tmp5 = (i)++;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(521)
				int idx = tmp5;		HX_STACK_VAR(idx,"idx");
				HX_STACK_LINE(521)
				Float tmp6 = source->get((int)0);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(521)
				Float val = tmp6;		HX_STACK_VAR(val,"val");
				HX_STACK_LINE(521)
				::__hxcpp_memory_set_float(dest->buffer->b,(dest->byteOffset + (idx * (int)4)),val);
				HX_STACK_LINE(521)
				val;
			}
			HX_STACK_LINE(522)
			{
				HX_STACK_LINE(522)
				int tmp5 = (i)++;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(522)
				int idx = tmp5;		HX_STACK_VAR(idx,"idx");
				HX_STACK_LINE(522)
				Float tmp6 = source->get((int)1);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(522)
				Float val = tmp6;		HX_STACK_VAR(val,"val");
				HX_STACK_LINE(522)
				::__hxcpp_memory_set_float(dest->buffer->b,(dest->byteOffset + (idx * (int)4)),val);
				HX_STACK_LINE(522)
				val;
			}
			HX_STACK_LINE(523)
			{
				HX_STACK_LINE(523)
				int tmp5 = (i)++;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(523)
				int idx = tmp5;		HX_STACK_VAR(idx,"idx");
				HX_STACK_LINE(523)
				Float tmp6 = source->get((int)2);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(523)
				Float val = tmp6;		HX_STACK_VAR(val,"val");
				HX_STACK_LINE(523)
				::__hxcpp_memory_set_float(dest->buffer->b,(dest->byteOffset + (idx * (int)4)),val);
				HX_STACK_LINE(523)
				val;
			}
			HX_STACK_LINE(524)
			{
				HX_STACK_LINE(524)
				int tmp5 = (i)++;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(524)
				int idx = tmp5;		HX_STACK_VAR(idx,"idx");
				HX_STACK_LINE(524)
				Float tmp6 = source->get((int)3);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(524)
				Float val = tmp6;		HX_STACK_VAR(val,"val");
				HX_STACK_LINE(524)
				::__hxcpp_memory_set_float(dest->buffer->b,(dest->byteOffset + (idx * (int)4)),val);
				HX_STACK_LINE(524)
				val;
			}
			HX_STACK_LINE(526)
			{
				HX_STACK_LINE(526)
				int tmp5 = (i)++;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(526)
				int idx = tmp5;		HX_STACK_VAR(idx,"idx");
				HX_STACK_LINE(526)
				Float tmp6 = source->get((int)4);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(526)
				Float val = tmp6;		HX_STACK_VAR(val,"val");
				HX_STACK_LINE(526)
				::__hxcpp_memory_set_float(dest->buffer->b,(dest->byteOffset + (idx * (int)4)),val);
				HX_STACK_LINE(526)
				val;
			}
			HX_STACK_LINE(527)
			{
				HX_STACK_LINE(527)
				int tmp5 = (i)++;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(527)
				int idx = tmp5;		HX_STACK_VAR(idx,"idx");
				HX_STACK_LINE(527)
				Float tmp6 = source->get((int)5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(527)
				Float val = tmp6;		HX_STACK_VAR(val,"val");
				HX_STACK_LINE(527)
				::__hxcpp_memory_set_float(dest->buffer->b,(dest->byteOffset + (idx * (int)4)),val);
				HX_STACK_LINE(527)
				val;
			}
			HX_STACK_LINE(528)
			{
				HX_STACK_LINE(528)
				int tmp5 = (i)++;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(528)
				int idx = tmp5;		HX_STACK_VAR(idx,"idx");
				HX_STACK_LINE(528)
				Float tmp6 = source->get((int)6);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(528)
				Float val = tmp6;		HX_STACK_VAR(val,"val");
				HX_STACK_LINE(528)
				::__hxcpp_memory_set_float(dest->buffer->b,(dest->byteOffset + (idx * (int)4)),val);
				HX_STACK_LINE(528)
				val;
			}
			HX_STACK_LINE(529)
			{
				HX_STACK_LINE(529)
				int tmp5 = (i)++;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(529)
				int idx = tmp5;		HX_STACK_VAR(idx,"idx");
				HX_STACK_LINE(529)
				Float tmp6 = source->get((int)7);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(529)
				Float val = tmp6;		HX_STACK_VAR(val,"val");
				HX_STACK_LINE(529)
				::__hxcpp_memory_set_float(dest->buffer->b,(dest->byteOffset + (idx * (int)4)),val);
				HX_STACK_LINE(529)
				val;
			}
			HX_STACK_LINE(531)
			{
				HX_STACK_LINE(531)
				int tmp5 = (i)++;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(531)
				int idx = tmp5;		HX_STACK_VAR(idx,"idx");
				HX_STACK_LINE(531)
				Float tmp6 = source->get((int)8);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(531)
				Float val = tmp6;		HX_STACK_VAR(val,"val");
				HX_STACK_LINE(531)
				::__hxcpp_memory_set_float(dest->buffer->b,(dest->byteOffset + (idx * (int)4)),val);
				HX_STACK_LINE(531)
				val;
			}
			HX_STACK_LINE(532)
			{
				HX_STACK_LINE(532)
				int tmp5 = (i)++;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(532)
				int idx = tmp5;		HX_STACK_VAR(idx,"idx");
				HX_STACK_LINE(532)
				Float tmp6 = source->get((int)9);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(532)
				Float val = tmp6;		HX_STACK_VAR(val,"val");
				HX_STACK_LINE(532)
				::__hxcpp_memory_set_float(dest->buffer->b,(dest->byteOffset + (idx * (int)4)),val);
				HX_STACK_LINE(532)
				val;
			}
			HX_STACK_LINE(533)
			{
				HX_STACK_LINE(533)
				int tmp5 = (i)++;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(533)
				int idx = tmp5;		HX_STACK_VAR(idx,"idx");
				HX_STACK_LINE(533)
				Float tmp6 = source->get((int)10);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(533)
				Float val = tmp6;		HX_STACK_VAR(val,"val");
				HX_STACK_LINE(533)
				::__hxcpp_memory_set_float(dest->buffer->b,(dest->byteOffset + (idx * (int)4)),val);
				HX_STACK_LINE(533)
				val;
			}
			HX_STACK_LINE(534)
			{
				HX_STACK_LINE(534)
				int tmp5 = (i)++;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(534)
				int idx = tmp5;		HX_STACK_VAR(idx,"idx");
				HX_STACK_LINE(534)
				Float tmp6 = source->get((int)11);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(534)
				Float val = tmp6;		HX_STACK_VAR(val,"val");
				HX_STACK_LINE(534)
				::__hxcpp_memory_set_float(dest->buffer->b,(dest->byteOffset + (idx * (int)4)),val);
				HX_STACK_LINE(534)
				val;
			}
			HX_STACK_LINE(536)
			{
				HX_STACK_LINE(536)
				int tmp5 = (i)++;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(536)
				int idx = tmp5;		HX_STACK_VAR(idx,"idx");
				HX_STACK_LINE(536)
				Float tmp6 = source->get((int)12);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(536)
				Float val = tmp6;		HX_STACK_VAR(val,"val");
				HX_STACK_LINE(536)
				::__hxcpp_memory_set_float(dest->buffer->b,(dest->byteOffset + (idx * (int)4)),val);
				HX_STACK_LINE(536)
				val;
			}
			HX_STACK_LINE(537)
			{
				HX_STACK_LINE(537)
				int tmp5 = (i)++;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(537)
				int idx = tmp5;		HX_STACK_VAR(idx,"idx");
				HX_STACK_LINE(537)
				Float tmp6 = source->get((int)13);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(537)
				Float val = tmp6;		HX_STACK_VAR(val,"val");
				HX_STACK_LINE(537)
				::__hxcpp_memory_set_float(dest->buffer->b,(dest->byteOffset + (idx * (int)4)),val);
				HX_STACK_LINE(537)
				val;
			}
			HX_STACK_LINE(538)
			{
				HX_STACK_LINE(538)
				int tmp5 = (i)++;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(538)
				int idx = tmp5;		HX_STACK_VAR(idx,"idx");
				HX_STACK_LINE(538)
				Float tmp6 = source->get((int)14);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(538)
				Float val = tmp6;		HX_STACK_VAR(val,"val");
				HX_STACK_LINE(538)
				::__hxcpp_memory_set_float(dest->buffer->b,(dest->byteOffset + (idx * (int)4)),val);
				HX_STACK_LINE(538)
				val;
			}
			HX_STACK_LINE(539)
			{
				HX_STACK_LINE(539)
				int tmp5 = (i)++;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(539)
				int idx = tmp5;		HX_STACK_VAR(idx,"idx");
				HX_STACK_LINE(539)
				Float tmp6 = source->get((int)15);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(539)
				Float val = tmp6;		HX_STACK_VAR(val,"val");
				HX_STACK_LINE(539)
				::__hxcpp_memory_set_float(dest->buffer->b,(dest->byteOffset + (idx * (int)4)),val);
				HX_STACK_LINE(539)
				val;
			}
		}
		HX_STACK_LINE(543)
		::openfl::display3D::Program3D tmp5 = this->__program;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(543)
		bool tmp6 = (tmp5 != null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(543)
		if ((tmp6)){
			HX_STACK_LINE(545)
			::openfl::display3D::Program3D tmp7 = this->__program;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(545)
			bool tmp8 = isVertex;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(545)
			int tmp9 = firstRegister;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(545)
			tmp7->__markDirty(tmp8,tmp9,(int)4);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Context3D_obj,setProgramConstantsFromMatrix,(void))

Void Context3D_obj::setProgramConstantsFromVector( Dynamic programType,int firstRegister,::openfl::_Vector::FloatVector data,hx::Null< int >  __o_numRegisters){
int numRegisters = __o_numRegisters.Default(-1);
	HX_STACK_FRAME("openfl.display3D.Context3D","setProgramConstantsFromVector",0x057dbe53,"openfl.display3D.Context3D.setProgramConstantsFromVector","openfl/display3D/Context3D.hx",552,0xc899cbb9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(programType,"programType")
	HX_STACK_ARG(firstRegister,"firstRegister")
	HX_STACK_ARG(data,"data")
	HX_STACK_ARG(numRegisters,"numRegisters")
{
		HX_STACK_LINE(554)
		bool tmp = (numRegisters == (int)0);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(554)
		if ((tmp)){
			HX_STACK_LINE(554)
			return null();
		}
		HX_STACK_LINE(556)
		bool tmp1 = (numRegisters == (int)-1);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(556)
		if ((tmp1)){
			HX_STACK_LINE(558)
			int tmp2 = data->get_length();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(558)
			int tmp3 = (int(tmp2) >> int((int)2));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(558)
			numRegisters = tmp3;
		}
		HX_STACK_LINE(562)
		bool tmp2 = (programType == ((Dynamic)((int)1)));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(562)
		bool isVertex = tmp2;		HX_STACK_VAR(isVertex,"isVertex");
		HX_STACK_LINE(563)
		bool tmp3 = isVertex;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(563)
		::lime::utils::ArrayBufferView tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(563)
		if ((tmp3)){
			HX_STACK_LINE(563)
			tmp4 = this->__vertexConstants;
		}
		else{
			HX_STACK_LINE(563)
			tmp4 = this->__fragmentConstants;
		}
		HX_STACK_LINE(563)
		::lime::utils::ArrayBufferView dest = tmp4;		HX_STACK_VAR(dest,"dest");
		HX_STACK_LINE(564)
		::openfl::_Vector::FloatVector source = data;		HX_STACK_VAR(source,"source");
		HX_STACK_LINE(566)
		int sourceIndex = (int)0;		HX_STACK_VAR(sourceIndex,"sourceIndex");
		HX_STACK_LINE(567)
		int tmp5 = (firstRegister * (int)4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(567)
		int destIndex = tmp5;		HX_STACK_VAR(destIndex,"destIndex");
		HX_STACK_LINE(569)
		{
			HX_STACK_LINE(569)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(569)
			while((true)){
				HX_STACK_LINE(569)
				bool tmp6 = (_g < numRegisters);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(569)
				bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(569)
				if ((tmp7)){
					HX_STACK_LINE(569)
					break;
				}
				HX_STACK_LINE(569)
				int tmp8 = (_g)++;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(569)
				int i = tmp8;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(571)
				{
					HX_STACK_LINE(571)
					int tmp9 = (destIndex)++;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(571)
					int idx = tmp9;		HX_STACK_VAR(idx,"idx");
					HX_STACK_LINE(571)
					Float tmp10;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(571)
					{
						HX_STACK_LINE(571)
						int tmp11 = (sourceIndex)++;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(571)
						int index = tmp11;		HX_STACK_VAR(index,"index");
						HX_STACK_LINE(571)
						int tmp12 = index;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(571)
						tmp10 = source->get(tmp12);
					}
					HX_STACK_LINE(571)
					Float val = tmp10;		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(571)
					::__hxcpp_memory_set_float(dest->buffer->b,(dest->byteOffset + (idx * (int)4)),val);
					HX_STACK_LINE(571)
					val;
				}
				HX_STACK_LINE(572)
				{
					HX_STACK_LINE(572)
					int tmp9 = (destIndex)++;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(572)
					int idx = tmp9;		HX_STACK_VAR(idx,"idx");
					HX_STACK_LINE(572)
					Float tmp10;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(572)
					{
						HX_STACK_LINE(572)
						int tmp11 = (sourceIndex)++;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(572)
						int index = tmp11;		HX_STACK_VAR(index,"index");
						HX_STACK_LINE(572)
						int tmp12 = index;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(572)
						tmp10 = source->get(tmp12);
					}
					HX_STACK_LINE(572)
					Float val = tmp10;		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(572)
					::__hxcpp_memory_set_float(dest->buffer->b,(dest->byteOffset + (idx * (int)4)),val);
					HX_STACK_LINE(572)
					val;
				}
				HX_STACK_LINE(573)
				{
					HX_STACK_LINE(573)
					int tmp9 = (destIndex)++;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(573)
					int idx = tmp9;		HX_STACK_VAR(idx,"idx");
					HX_STACK_LINE(573)
					Float tmp10;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(573)
					{
						HX_STACK_LINE(573)
						int tmp11 = (sourceIndex)++;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(573)
						int index = tmp11;		HX_STACK_VAR(index,"index");
						HX_STACK_LINE(573)
						int tmp12 = index;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(573)
						tmp10 = source->get(tmp12);
					}
					HX_STACK_LINE(573)
					Float val = tmp10;		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(573)
					::__hxcpp_memory_set_float(dest->buffer->b,(dest->byteOffset + (idx * (int)4)),val);
					HX_STACK_LINE(573)
					val;
				}
				HX_STACK_LINE(574)
				{
					HX_STACK_LINE(574)
					int tmp9 = (destIndex)++;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(574)
					int idx = tmp9;		HX_STACK_VAR(idx,"idx");
					HX_STACK_LINE(574)
					Float tmp10;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(574)
					{
						HX_STACK_LINE(574)
						int tmp11 = (sourceIndex)++;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(574)
						int index = tmp11;		HX_STACK_VAR(index,"index");
						HX_STACK_LINE(574)
						int tmp12 = index;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(574)
						tmp10 = source->get(tmp12);
					}
					HX_STACK_LINE(574)
					Float val = tmp10;		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(574)
					::__hxcpp_memory_set_float(dest->buffer->b,(dest->byteOffset + (idx * (int)4)),val);
					HX_STACK_LINE(574)
					val;
				}
			}
		}
		HX_STACK_LINE(578)
		::openfl::display3D::Program3D tmp6 = this->__program;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(578)
		bool tmp7 = (tmp6 != null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(578)
		if ((tmp7)){
			HX_STACK_LINE(580)
			::openfl::display3D::Program3D tmp8 = this->__program;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(580)
			bool tmp9 = isVertex;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(580)
			int tmp10 = firstRegister;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(580)
			int tmp11 = numRegisters;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(580)
			tmp8->__markDirty(tmp9,tmp10,tmp11);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Context3D_obj,setProgramConstantsFromVector,(void))

Void Context3D_obj::setRenderToBackBuffer( ){
{
		HX_STACK_FRAME("openfl.display3D.Context3D","setRenderToBackBuffer",0x6095d693,"openfl.display3D.Context3D.setRenderToBackBuffer","openfl/display3D/Context3D.hx",587,0xc899cbb9)
		HX_STACK_THIS(this)
		HX_STACK_LINE(589)
		::lime::graphics::opengl::GL_obj::cffi_lime_gl_bind_framebuffer.call((int)36160,hx::DynamicPtr(null()));
		HX_STACK_LINE(590)
		::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
		HX_STACK_LINE(592)
		this->__renderToTexture = null();
		HX_STACK_LINE(593)
		this->__updateBackbufferViewport();
		HX_STACK_LINE(594)
		this->__updateScissorRectangle();
		HX_STACK_LINE(595)
		this->__updateDepthAndStencilState();
		HX_STACK_LINE(597)
		{
			HX_STACK_LINE(597)
			::lime::utils::ArrayBufferView tmp = this->__positionScale;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(597)
			::lime::utils::ArrayBufferView this1 = tmp;		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(597)
			::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)4),((Float)1.0));
			HX_STACK_LINE(597)
			((Float)1.0);
		}
		HX_STACK_LINE(599)
		::openfl::display3D::Program3D tmp = this->__program;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(599)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(599)
		if ((tmp1)){
			HX_STACK_LINE(601)
			::openfl::display3D::Program3D tmp2 = this->__program;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(601)
			::lime::utils::ArrayBufferView tmp3 = this->__positionScale;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(601)
			tmp2->__setPositionScale(tmp3);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Context3D_obj,setRenderToBackBuffer,(void))

Void Context3D_obj::setRenderToTexture( ::openfl::display3D::textures::TextureBase texture,hx::Null< bool >  __o_enableDepthAndStencil,hx::Null< int >  __o_antiAlias,hx::Null< int >  __o_surfaceSelector){
bool enableDepthAndStencil = __o_enableDepthAndStencil.Default(false);
int antiAlias = __o_antiAlias.Default(0);
int surfaceSelector = __o_surfaceSelector.Default(0);
	HX_STACK_FRAME("openfl.display3D.Context3D","setRenderToTexture",0x25c5d54f,"openfl.display3D.Context3D.setRenderToTexture","openfl/display3D/Context3D.hx",608,0xc899cbb9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(texture,"texture")
	HX_STACK_ARG(enableDepthAndStencil,"enableDepthAndStencil")
	HX_STACK_ARG(antiAlias,"antiAlias")
	HX_STACK_ARG(surfaceSelector,"surfaceSelector")
{
		HX_STACK_LINE(610)
		int width = (int)0;		HX_STACK_VAR(width,"width");
		HX_STACK_LINE(611)
		int height = (int)0;		HX_STACK_VAR(height,"height");
		HX_STACK_LINE(613)
		::openfl::display3D::textures::TextureBase tmp = texture;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(613)
		bool tmp1 = ::Std_obj::is(tmp,hx::ClassOf< ::openfl::display3D::textures::Texture >());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(613)
		if ((tmp1)){
			HX_STACK_LINE(615)
			::openfl::display3D::textures::Texture texture2D = ((::openfl::display3D::textures::Texture)(texture));		HX_STACK_VAR(texture2D,"texture2D");
			HX_STACK_LINE(616)
			width = texture2D->__width;
			HX_STACK_LINE(617)
			height = texture2D->__height;
		}
		else{
			HX_STACK_LINE(619)
			::openfl::display3D::textures::TextureBase tmp2 = texture;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(619)
			bool tmp3 = ::Std_obj::is(tmp2,hx::ClassOf< ::openfl::display3D::textures::RectangleTexture >());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(619)
			if ((tmp3)){
				HX_STACK_LINE(621)
				::openfl::display3D::textures::RectangleTexture rectTexture = ((::openfl::display3D::textures::RectangleTexture)(texture));		HX_STACK_VAR(rectTexture,"rectTexture");
				HX_STACK_LINE(622)
				width = rectTexture->__width;
				HX_STACK_LINE(623)
				height = rectTexture->__height;
			}
			else{
				HX_STACK_LINE(627)
				::openfl::errors::Error tmp4 = ::openfl::errors::Error_obj::__new(HX_HCSTRING("Invalid texture","\x92","\x3e","\x59","\x9a"),null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(627)
				HX_STACK_DO_THROW(tmp4);
			}
		}
		HX_STACK_LINE(631)
		::lime::graphics::opengl::GLFramebuffer tmp2 = this->__framebuffer;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(631)
		bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(631)
		if ((tmp3)){
			HX_STACK_LINE(633)
			int tmp4 = ::lime::graphics::opengl::GL_obj::get_version();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(633)
			Dynamic tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(633)
			{
				HX_STACK_LINE(633)
				::hx::Object * inVal = ::lime::graphics::opengl::GL_obj::cffi_lime_gl_create_framebuffer.call();		HX_STACK_VAR(inVal,"inVal");
				HX_STACK_LINE(633)
				::hx::Object * tmp6 = inVal;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(633)
				::hx::Object * tmp7 = hx::DynamicPtr(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(633)
				tmp5 = Dynamic(tmp7);
			}
			HX_STACK_LINE(633)
			::lime::graphics::opengl::GLFramebuffer tmp6 = ::lime::graphics::opengl::GLFramebuffer_obj::__new(tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(633)
			this->__framebuffer = tmp6;
			HX_STACK_LINE(634)
			::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
		}
		HX_STACK_LINE(638)
		{
			HX_STACK_LINE(638)
			::lime::graphics::opengl::GLFramebuffer tmp4 = this->__framebuffer;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(638)
			::lime::graphics::opengl::GLFramebuffer framebuffer = tmp4;		HX_STACK_VAR(framebuffer,"framebuffer");
			HX_STACK_LINE(638)
			::lime::graphics::opengl::GL_obj::cffi_lime_gl_bind_framebuffer.call((int)36160,hx::DynamicPtr((  (((framebuffer == null()))) ? Dynamic(null()) : Dynamic(framebuffer->id) )));
		}
		HX_STACK_LINE(639)
		::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
		HX_STACK_LINE(640)
		::lime::graphics::opengl::GL_obj::cffi_lime_gl_framebuffer_texture2D.call((int)36160,(int)36064,(int)3553,hx::DynamicPtr(texture->__textureID->id),(int)0);
		HX_STACK_LINE(641)
		::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
		HX_STACK_LINE(643)
		bool tmp4 = enableDepthAndStencil;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(643)
		if ((tmp4)){
			HX_STACK_LINE(645)
			bool tmp5 = this->__supportsPackedDepthStencil;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(645)
			if ((tmp5)){
				HX_STACK_LINE(647)
				::lime::graphics::opengl::GLRenderbuffer tmp6 = this->__depthStencilRenderBuffer;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(647)
				bool tmp7 = (tmp6 == null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(647)
				if ((tmp7)){
					HX_STACK_LINE(649)
					int tmp8 = ::lime::graphics::opengl::GL_obj::get_version();		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(649)
					Dynamic tmp9;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(649)
					{
						HX_STACK_LINE(649)
						::hx::Object * inVal = ::lime::graphics::opengl::GL_obj::cffi_lime_gl_create_render_buffer.call();		HX_STACK_VAR(inVal,"inVal");
						HX_STACK_LINE(649)
						::hx::Object * tmp10 = inVal;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(649)
						::hx::Object * tmp11 = hx::DynamicPtr(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(649)
						tmp9 = Dynamic(tmp11);
					}
					HX_STACK_LINE(649)
					::lime::graphics::opengl::GLRenderbuffer tmp10 = ::lime::graphics::opengl::GLRenderbuffer_obj::__new(tmp8,tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(649)
					this->__depthStencilRenderBuffer = tmp10;
					HX_STACK_LINE(650)
					::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
				}
				HX_STACK_LINE(654)
				{
					HX_STACK_LINE(654)
					::lime::graphics::opengl::GLRenderbuffer tmp8 = this->__depthStencilRenderBuffer;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(654)
					::lime::graphics::opengl::GLRenderbuffer renderbuffer = tmp8;		HX_STACK_VAR(renderbuffer,"renderbuffer");
					HX_STACK_LINE(654)
					::lime::graphics::opengl::GL_obj::cffi_lime_gl_bind_renderbuffer.call((int)36161,hx::DynamicPtr((  (((renderbuffer == null()))) ? Dynamic(null()) : Dynamic(renderbuffer->id) )));
				}
				HX_STACK_LINE(655)
				::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
				HX_STACK_LINE(656)
				::lime::graphics::opengl::GL_obj::cffi_lime_gl_renderbuffer_storage.call((int)36161,(int)35056,width,height);
				HX_STACK_LINE(657)
				::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
				HX_STACK_LINE(659)
				::lime::graphics::opengl::GL_obj::cffi_lime_gl_framebuffer_renderbuffer.call((int)36160,(int)33306,(int)36161,hx::DynamicPtr(this->__depthStencilRenderBuffer->id));
				HX_STACK_LINE(660)
				::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
			}
			else{
				HX_STACK_LINE(664)
				::lime::graphics::opengl::GLRenderbuffer tmp6 = this->__depthRenderBuffer;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(664)
				bool tmp7 = (tmp6 == null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(664)
				if ((tmp7)){
					HX_STACK_LINE(666)
					int tmp8 = ::lime::graphics::opengl::GL_obj::get_version();		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(666)
					Dynamic tmp9;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(666)
					{
						HX_STACK_LINE(666)
						::hx::Object * inVal = ::lime::graphics::opengl::GL_obj::cffi_lime_gl_create_render_buffer.call();		HX_STACK_VAR(inVal,"inVal");
						HX_STACK_LINE(666)
						::hx::Object * tmp10 = inVal;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(666)
						::hx::Object * tmp11 = hx::DynamicPtr(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(666)
						tmp9 = Dynamic(tmp11);
					}
					HX_STACK_LINE(666)
					::lime::graphics::opengl::GLRenderbuffer tmp10 = ::lime::graphics::opengl::GLRenderbuffer_obj::__new(tmp8,tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(666)
					this->__depthRenderBuffer = tmp10;
					HX_STACK_LINE(667)
					::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
				}
				HX_STACK_LINE(671)
				::lime::graphics::opengl::GLRenderbuffer tmp8 = this->__stencilRenderBuffer;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(671)
				bool tmp9 = (tmp8 == null());		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(671)
				if ((tmp9)){
					HX_STACK_LINE(673)
					int tmp10 = ::lime::graphics::opengl::GL_obj::get_version();		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(673)
					Dynamic tmp11;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(673)
					{
						HX_STACK_LINE(673)
						::hx::Object * inVal = ::lime::graphics::opengl::GL_obj::cffi_lime_gl_create_render_buffer.call();		HX_STACK_VAR(inVal,"inVal");
						HX_STACK_LINE(673)
						::hx::Object * tmp12 = inVal;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(673)
						::hx::Object * tmp13 = hx::DynamicPtr(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(673)
						tmp11 = Dynamic(tmp13);
					}
					HX_STACK_LINE(673)
					::lime::graphics::opengl::GLRenderbuffer tmp12 = ::lime::graphics::opengl::GLRenderbuffer_obj::__new(tmp10,tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(673)
					this->__stencilRenderBuffer = tmp12;
					HX_STACK_LINE(674)
					::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
				}
				HX_STACK_LINE(678)
				{
					HX_STACK_LINE(678)
					::lime::graphics::opengl::GLRenderbuffer tmp10 = this->__depthRenderBuffer;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(678)
					::lime::graphics::opengl::GLRenderbuffer renderbuffer = tmp10;		HX_STACK_VAR(renderbuffer,"renderbuffer");
					HX_STACK_LINE(678)
					::lime::graphics::opengl::GL_obj::cffi_lime_gl_bind_renderbuffer.call((int)36161,hx::DynamicPtr((  (((renderbuffer == null()))) ? Dynamic(null()) : Dynamic(renderbuffer->id) )));
				}
				HX_STACK_LINE(679)
				::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
				HX_STACK_LINE(680)
				::lime::graphics::opengl::GL_obj::cffi_lime_gl_renderbuffer_storage.call((int)36161,(int)33189,width,height);
				HX_STACK_LINE(681)
				::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
				HX_STACK_LINE(682)
				{
					HX_STACK_LINE(682)
					::lime::graphics::opengl::GLRenderbuffer tmp10 = this->__stencilRenderBuffer;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(682)
					::lime::graphics::opengl::GLRenderbuffer renderbuffer = tmp10;		HX_STACK_VAR(renderbuffer,"renderbuffer");
					HX_STACK_LINE(682)
					::lime::graphics::opengl::GL_obj::cffi_lime_gl_bind_renderbuffer.call((int)36161,hx::DynamicPtr((  (((renderbuffer == null()))) ? Dynamic(null()) : Dynamic(renderbuffer->id) )));
				}
				HX_STACK_LINE(683)
				::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
				HX_STACK_LINE(684)
				::lime::graphics::opengl::GL_obj::cffi_lime_gl_renderbuffer_storage.call((int)36161,(int)36168,width,height);
				HX_STACK_LINE(685)
				::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
				HX_STACK_LINE(687)
				::lime::graphics::opengl::GL_obj::cffi_lime_gl_framebuffer_renderbuffer.call((int)36160,(int)36096,(int)36161,hx::DynamicPtr(this->__depthRenderBuffer->id));
				HX_STACK_LINE(688)
				::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
				HX_STACK_LINE(689)
				::lime::graphics::opengl::GL_obj::cffi_lime_gl_framebuffer_renderbuffer.call((int)36160,(int)36128,(int)36161,hx::DynamicPtr(this->__stencilRenderBuffer->id));
				HX_STACK_LINE(690)
				::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
			}
			HX_STACK_LINE(694)
			::lime::graphics::opengl::GL_obj::cffi_lime_gl_bind_renderbuffer.call((int)36161,hx::DynamicPtr(null()));
			HX_STACK_LINE(695)
			::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
		}
		HX_STACK_LINE(699)
		int tmp5 = width;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(699)
		int tmp6 = height;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(699)
		this->__setViewport((int)0,(int)0,tmp5,tmp6);
		HX_STACK_LINE(701)
		bool tmp7 = this->enableErrorChecking;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(701)
		if ((tmp7)){
			HX_STACK_LINE(703)
			int code = ::lime::graphics::opengl::GL_obj::cffi_lime_gl_check_framebuffer_status.call((int)36160);		HX_STACK_VAR(code,"code");
			HX_STACK_LINE(705)
			bool tmp8 = (code != (int)36053);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(705)
			if ((tmp8)){
				HX_STACK_LINE(707)
				Dynamic tmp9 = hx::SourceInfo(HX_HCSTRING("Context3D.hx","\x7e","\x2e","\xcf","\x45"),707,HX_HCSTRING("openfl.display3D.Context3D","\xa7","\xbf","\xa0","\x2f"),HX_HCSTRING("setRenderToTexture","\xe8","\x2c","\x92","\x46"));		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(707)
				::haxe::Log_obj::trace(HX_HCSTRING("Error: Context3D.setRenderToTexture status:${code} width:${texture2D.__width} height:${texture2D.__height}","\x55","\xdb","\x0b","\xac"),tmp9);
			}
		}
		HX_STACK_LINE(713)
		{
			HX_STACK_LINE(713)
			::lime::utils::ArrayBufferView tmp8 = this->__positionScale;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(713)
			::lime::utils::ArrayBufferView this1 = tmp8;		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(713)
			::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)4),((Float)-1.0));
			HX_STACK_LINE(713)
			((Float)-1.0);
		}
		HX_STACK_LINE(715)
		::openfl::display3D::Program3D tmp8 = this->__program;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(715)
		bool tmp9 = (tmp8 != null());		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(715)
		if ((tmp9)){
			HX_STACK_LINE(717)
			::openfl::display3D::Program3D tmp10 = this->__program;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(717)
			::lime::utils::ArrayBufferView tmp11 = this->__positionScale;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(717)
			tmp10->__setPositionScale(tmp11);
		}
		HX_STACK_LINE(721)
		this->__renderToTexture = texture;
		HX_STACK_LINE(722)
		this->__rttDepthAndStencil = enableDepthAndStencil;
		HX_STACK_LINE(723)
		this->__updateScissorRectangle();
		HX_STACK_LINE(724)
		this->__updateDepthAndStencilState();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Context3D_obj,setRenderToTexture,(void))

Void Context3D_obj::setSamplerStateAt( int sampler,Dynamic wrap,Dynamic filter,Dynamic mipfilter){
{
		HX_STACK_FRAME("openfl.display3D.Context3D","setSamplerStateAt",0x9f8ad1f7,"openfl.display3D.Context3D.setSamplerStateAt","openfl/display3D/Context3D.hx",729,0xc899cbb9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(sampler,"sampler")
		HX_STACK_ARG(wrap,"wrap")
		HX_STACK_ARG(filter,"filter")
		HX_STACK_ARG(mipfilter,"mipfilter")
		HX_STACK_LINE(731)
		bool tmp = (sampler < (int)0);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(731)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(731)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(731)
		if ((tmp1)){
			HX_STACK_LINE(731)
			tmp2 = (sampler > (int)8);
		}
		else{
			HX_STACK_LINE(731)
			tmp2 = true;
		}
		HX_STACK_LINE(731)
		if ((tmp2)){
			HX_STACK_LINE(733)
			::openfl::errors::Error tmp3 = ::openfl::errors::Error_obj::__new(HX_HCSTRING("sampler out of range","\xde","\x61","\xc4","\x36"),null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(733)
			HX_STACK_DO_THROW(tmp3);
		}
		HX_STACK_LINE(737)
		::openfl::_internal::stage3D::SamplerState tmp3 = this->__samplerStates->__get(sampler).StaticCast< ::openfl::_internal::stage3D::SamplerState >();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(737)
		::openfl::_internal::stage3D::SamplerState state = tmp3;		HX_STACK_VAR(state,"state");
		HX_STACK_LINE(739)
		Dynamic tmp4 = wrap;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(739)
		switch( (int)(tmp4)){
			case (int)0: {
				HX_STACK_LINE(743)
				state->wrapModeS = (int)33071;
				HX_STACK_LINE(744)
				state->wrapModeT = (int)33071;
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(748)
				state->wrapModeS = (int)33071;
				HX_STACK_LINE(749)
				state->wrapModeT = (int)10497;
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(753)
				state->wrapModeS = (int)10497;
				HX_STACK_LINE(754)
				state->wrapModeT = (int)10497;
			}
			;break;
			case (int)3: {
				HX_STACK_LINE(758)
				state->wrapModeS = (int)10497;
				HX_STACK_LINE(759)
				state->wrapModeT = (int)33071;
			}
			;break;
			default: {
				HX_STACK_LINE(763)
				::openfl::errors::Error tmp5 = ::openfl::errors::Error_obj::__new(HX_HCSTRING("wrap bad enum","\x52","\x1c","\x4c","\x59"),null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(763)
				HX_STACK_DO_THROW(tmp5);
			}
		}
		HX_STACK_LINE(767)
		Dynamic tmp5 = filter;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(767)
		switch( (int)(tmp5)){
			case (int)4: {
				HX_STACK_LINE(771)
				state->magFilter = (int)9729;
			}
			;break;
			case (int)5: {
				HX_STACK_LINE(775)
				state->magFilter = (int)9728;
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(780)
				state->magFilter = (int)9729;
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(785)
				state->magFilter = (int)9729;
			}
			;break;
			case (int)3: {
				HX_STACK_LINE(790)
				state->magFilter = (int)9729;
			}
			;break;
			case (int)0: {
				HX_STACK_LINE(795)
				state->magFilter = (int)9729;
			}
			;break;
			default: {
				HX_STACK_LINE(799)
				::openfl::errors::Error tmp6 = ::openfl::errors::Error_obj::__new(HX_HCSTRING("filter bad enum","\xa4","\x08","\xed","\x96"),null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(799)
				HX_STACK_DO_THROW(tmp6);
			}
		}
		HX_STACK_LINE(803)
		Dynamic tmp6 = mipfilter;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(803)
		switch( (int)(tmp6)){
			case (int)0: {
				HX_STACK_LINE(807)
				state->minFilter = (int)9987;
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(811)
				state->minFilter = (int)9984;
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(815)
				bool tmp7 = (filter == ((Dynamic)((int)5)));		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(815)
				int tmp8;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(815)
				if ((tmp7)){
					HX_STACK_LINE(815)
					tmp8 = (int)9728;
				}
				else{
					HX_STACK_LINE(815)
					tmp8 = (int)9729;
				}
				HX_STACK_LINE(815)
				state->minFilter = tmp8;
			}
			;break;
			default: {
				HX_STACK_LINE(819)
				::openfl::errors::Error tmp7 = ::openfl::errors::Error_obj::__new(HX_HCSTRING("mipfiter bad enum","\xb2","\x1b","\x09","\xc4"),null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(819)
				HX_STACK_DO_THROW(tmp7);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Context3D_obj,setSamplerStateAt,(void))

Void Context3D_obj::setScissorRectangle( ::openfl::geom::Rectangle rectangle){
{
		HX_STACK_FRAME("openfl.display3D.Context3D","setScissorRectangle",0x712bb5ee,"openfl.display3D.Context3D.setScissorRectangle","openfl/display3D/Context3D.hx",826,0xc899cbb9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(rectangle,"rectangle")
		HX_STACK_LINE(828)
		this->__scissorRectangle = rectangle;
		HX_STACK_LINE(829)
		this->__updateScissorRectangle();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Context3D_obj,setScissorRectangle,(void))

Void Context3D_obj::setStencilActions( Dynamic __o_triangleFace,Dynamic __o_compareMode,Dynamic __o_actionOnBothPass,Dynamic __o_actionOnDepthFail,Dynamic __o_actionOnDepthPassStencilFail){
Dynamic triangleFace = __o_triangleFace.Default(2);
Dynamic compareMode = __o_compareMode.Default(0);
Dynamic actionOnBothPass = __o_actionOnBothPass.Default(5);
Dynamic actionOnDepthFail = __o_actionOnDepthFail.Default(5);
Dynamic actionOnDepthPassStencilFail = __o_actionOnDepthPassStencilFail.Default(5);
	HX_STACK_FRAME("openfl.display3D.Context3D","setStencilActions",0x1fe08e1c,"openfl.display3D.Context3D.setStencilActions","openfl/display3D/Context3D.hx",834,0xc899cbb9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(triangleFace,"triangleFace")
	HX_STACK_ARG(compareMode,"compareMode")
	HX_STACK_ARG(actionOnBothPass,"actionOnBothPass")
	HX_STACK_ARG(actionOnDepthFail,"actionOnDepthFail")
	HX_STACK_ARG(actionOnDepthPassStencilFail,"actionOnDepthPassStencilFail")
{
		HX_STACK_LINE(836)
		this->__stencilCompareMode = compareMode;
		HX_STACK_LINE(837)
		{
			HX_STACK_LINE(837)
			Dynamic tmp = actionOnDepthFail;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(837)
			int tmp1 = this->__getGLStencilAction(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(837)
			int fail = tmp1;		HX_STACK_VAR(fail,"fail");
			HX_STACK_LINE(837)
			Dynamic tmp2 = actionOnDepthPassStencilFail;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(837)
			int tmp3 = this->__getGLStencilAction(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(837)
			int zfail = tmp3;		HX_STACK_VAR(zfail,"zfail");
			HX_STACK_LINE(837)
			Dynamic tmp4 = actionOnBothPass;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(837)
			int tmp5 = this->__getGLStencilAction(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(837)
			int zpass = tmp5;		HX_STACK_VAR(zpass,"zpass");
			HX_STACK_LINE(837)
			::lime::graphics::opengl::GL_obj::cffi_lime_gl_stencil_op.call(fail,zfail,zpass);
		}
		HX_STACK_LINE(838)
		{
			HX_STACK_LINE(838)
			Dynamic tmp = this->__stencilCompareMode;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(838)
			int tmp1 = this->__getGLCompareMode(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(838)
			int func = tmp1;		HX_STACK_VAR(func,"func");
			HX_STACK_LINE(838)
			::lime::graphics::opengl::GL_obj::cffi_lime_gl_stencil_func.call(func,this->__stencilRef,this->__stencilReadMask);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(Context3D_obj,setStencilActions,(void))

Void Context3D_obj::setStencilReferenceValue( int referenceValue,hx::Null< int >  __o_readMask,hx::Null< int >  __o_writeMask){
int readMask = __o_readMask.Default(255);
int writeMask = __o_writeMask.Default(255);
	HX_STACK_FRAME("openfl.display3D.Context3D","setStencilReferenceValue",0xaa284f67,"openfl.display3D.Context3D.setStencilReferenceValue","openfl/display3D/Context3D.hx",843,0xc899cbb9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(referenceValue,"referenceValue")
	HX_STACK_ARG(readMask,"readMask")
	HX_STACK_ARG(writeMask,"writeMask")
{
		HX_STACK_LINE(845)
		this->__stencilReadMask = readMask;
		HX_STACK_LINE(846)
		this->__stencilRef = referenceValue;
		HX_STACK_LINE(848)
		{
			HX_STACK_LINE(848)
			Dynamic tmp = this->__stencilCompareMode;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(848)
			int tmp1 = this->__getGLCompareMode(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(848)
			int func = tmp1;		HX_STACK_VAR(func,"func");
			HX_STACK_LINE(848)
			::lime::graphics::opengl::GL_obj::cffi_lime_gl_stencil_func.call(func,this->__stencilRef,this->__stencilReadMask);
		}
		HX_STACK_LINE(849)
		::lime::graphics::opengl::GL_obj::cffi_lime_gl_stencil_mask.call(writeMask);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Context3D_obj,setStencilReferenceValue,(void))

Void Context3D_obj::setTextureAt( int sampler,::openfl::display3D::textures::TextureBase texture){
{
		HX_STACK_FRAME("openfl.display3D.Context3D","setTextureAt",0x38d4bfd3,"openfl.display3D.Context3D.setTextureAt","openfl/display3D/Context3D.hx",854,0xc899cbb9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(sampler,"sampler")
		HX_STACK_ARG(texture,"texture")
		HX_STACK_LINE(856)
		::openfl::_Vector::ObjectVector tmp = this->__samplerTextures;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(856)
		int tmp1 = sampler;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(856)
		::openfl::display3D::textures::TextureBase tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(856)
		::openfl::display3D::textures::TextureBase tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(856)
		::openfl::display3D::textures::TextureBase tmp4 = texture;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(856)
		bool tmp5 = (tmp3 != tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(856)
		if ((tmp5)){
			HX_STACK_LINE(858)
			::openfl::_Vector::ObjectVector tmp6 = this->__samplerTextures;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(858)
			int tmp7 = sampler;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(858)
			::openfl::display3D::textures::TextureBase tmp8 = texture;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(858)
			::openfl::display3D::textures::TextureBase tmp9 = tmp6->set(tmp7,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(858)
			tmp9;
			HX_STACK_LINE(859)
			int tmp10 = (int((int)1) << int(sampler));		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(859)
			hx::OrEq(this->__samplerDirty,tmp10);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Context3D_obj,setTextureAt,(void))

Void Context3D_obj::setVertexBufferAt( int index,::openfl::display3D::VertexBuffer3D buffer,hx::Null< int >  __o_bufferOffset,Dynamic __o_format){
int bufferOffset = __o_bufferOffset.Default(0);
Dynamic format = __o_format.Default(4);
	HX_STACK_FRAME("openfl.display3D.Context3D","setVertexBufferAt",0xbb32fa52,"openfl.display3D.Context3D.setVertexBufferAt","openfl/display3D/Context3D.hx",868,0xc899cbb9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_ARG(buffer,"buffer")
	HX_STACK_ARG(bufferOffset,"bufferOffset")
	HX_STACK_ARG(format,"format")
{
		HX_STACK_LINE(870)
		bool tmp = (buffer == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(870)
		if ((tmp)){
			HX_STACK_LINE(872)
			::lime::graphics::opengl::GL_obj::cffi_lime_gl_disable_vertex_attrib_array.call(index);
			HX_STACK_LINE(873)
			::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
			HX_STACK_LINE(875)
			::lime::graphics::opengl::GL_obj::cffi_lime_gl_bind_buffer.call((int)34962,hx::DynamicPtr(null()));
			HX_STACK_LINE(876)
			::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
			HX_STACK_LINE(878)
			return null();
		}
		HX_STACK_LINE(882)
		::lime::graphics::opengl::GL_obj::cffi_lime_gl_enable_vertex_attrib_array.call(index);
		HX_STACK_LINE(883)
		::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
		HX_STACK_LINE(885)
		{
			HX_STACK_LINE(885)
			::lime::graphics::opengl::GLBuffer buffer1 = buffer->__id;		HX_STACK_VAR(buffer1,"buffer1");
			HX_STACK_LINE(885)
			::lime::graphics::opengl::GL_obj::cffi_lime_gl_bind_buffer.call((int)34962,hx::DynamicPtr((  (((buffer1 == null()))) ? Dynamic(null()) : Dynamic(buffer1->id) )));
		}
		HX_STACK_LINE(886)
		::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
		HX_STACK_LINE(888)
		int tmp1 = (bufferOffset * (int)4);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(888)
		int byteOffset = tmp1;		HX_STACK_VAR(byteOffset,"byteOffset");
		HX_STACK_LINE(890)
		Dynamic tmp2 = format;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(890)
		switch( (int)(tmp2)){
			case (int)0: {
				HX_STACK_LINE(894)
				::lime::graphics::opengl::GL_obj::cffi_lime_gl_vertex_attrib_pointer.call(index,(int)4,(int)5121,true,buffer->__stride,byteOffset);
				HX_STACK_LINE(895)
				::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
			}
			;break;
			case (int)4: {
				HX_STACK_LINE(899)
				::lime::graphics::opengl::GL_obj::cffi_lime_gl_vertex_attrib_pointer.call(index,(int)4,(int)5126,false,buffer->__stride,byteOffset);
				HX_STACK_LINE(900)
				::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
			}
			;break;
			case (int)3: {
				HX_STACK_LINE(904)
				::lime::graphics::opengl::GL_obj::cffi_lime_gl_vertex_attrib_pointer.call(index,(int)3,(int)5126,false,buffer->__stride,byteOffset);
				HX_STACK_LINE(905)
				::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(909)
				::lime::graphics::opengl::GL_obj::cffi_lime_gl_vertex_attrib_pointer.call(index,(int)2,(int)5126,false,buffer->__stride,byteOffset);
				HX_STACK_LINE(910)
				::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(914)
				::lime::graphics::opengl::GL_obj::cffi_lime_gl_vertex_attrib_pointer.call(index,(int)1,(int)5126,false,buffer->__stride,byteOffset);
				HX_STACK_LINE(915)
				::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
			}
			;break;
			default: {
				HX_STACK_LINE(919)
				::openfl::errors::IllegalOperationError tmp3 = ::openfl::errors::IllegalOperationError_obj::__new(null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(919)
				HX_STACK_DO_THROW(tmp3);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Context3D_obj,setVertexBufferAt,(void))

Void Context3D_obj::__flushSamplerState( ){
{
		HX_STACK_FRAME("openfl.display3D.Context3D","__flushSamplerState",0xbb488366,"openfl.display3D.Context3D.__flushSamplerState","openfl/display3D/Context3D.hx",926,0xc899cbb9)
		HX_STACK_THIS(this)
		HX_STACK_LINE(928)
		int sampler = (int)0;		HX_STACK_VAR(sampler,"sampler");
		HX_STACK_LINE(930)
		while((true)){
			HX_STACK_LINE(930)
			int tmp = this->__samplerDirty;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(930)
			bool tmp1 = (tmp != (int)0);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(930)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(930)
			if ((tmp2)){
				HX_STACK_LINE(930)
				break;
			}
			HX_STACK_LINE(932)
			int tmp3 = this->__samplerDirty;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(932)
			int tmp4 = (int((int)1) << int(sampler));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(932)
			int tmp5 = (int(tmp3) & int(tmp4));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(932)
			bool tmp6 = (tmp5 != (int)0);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(932)
			if ((tmp6)){
				HX_STACK_LINE(934)
				::openfl::_internal::stage3D::Context3DStateCache tmp7 = ::openfl::display3D::Context3D_obj::__stateCache;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(934)
				int tmp8 = sampler;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(934)
				bool tmp9 = tmp7->updateActiveTextureSample(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(934)
				if ((tmp9)){
					HX_STACK_LINE(936)
					::lime::graphics::opengl::GL_obj::cffi_lime_gl_active_texture.call(((int)33984 + sampler));
					HX_STACK_LINE(937)
					::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
				}
				HX_STACK_LINE(941)
				::openfl::_Vector::ObjectVector tmp10 = this->__samplerTextures;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(941)
				int tmp11 = sampler;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(941)
				::openfl::display3D::textures::TextureBase tmp12 = tmp10->get(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(941)
				::openfl::display3D::textures::TextureBase texture = tmp12;		HX_STACK_VAR(texture,"texture");
				HX_STACK_LINE(943)
				bool tmp13 = (texture != null());		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(943)
				if ((tmp13)){
					HX_STACK_LINE(945)
					int target = texture->__textureTarget;		HX_STACK_VAR(target,"target");
					HX_STACK_LINE(947)
					{
						HX_STACK_LINE(947)
						::lime::graphics::opengl::GLTexture texture1 = texture->__textureID;		HX_STACK_VAR(texture1,"texture1");
						HX_STACK_LINE(947)
						::lime::graphics::opengl::GL_obj::cffi_lime_gl_bind_texture.call(target,hx::DynamicPtr((  (((texture1 == null()))) ? Dynamic(null()) : Dynamic(texture1->id) )));
					}
					HX_STACK_LINE(948)
					::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
					HX_STACK_LINE(960)
					::openfl::_internal::stage3D::SamplerState tmp14 = this->__samplerStates->__get(sampler).StaticCast< ::openfl::_internal::stage3D::SamplerState >();		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(960)
					texture->__setSamplerState(tmp14);
				}
				else{
					HX_STACK_LINE(964)
					::lime::graphics::opengl::GL_obj::cffi_lime_gl_bind_texture.call((int)3553,hx::DynamicPtr(null()));
					HX_STACK_LINE(965)
					::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
				}
				HX_STACK_LINE(969)
				int tmp14 = (int((int)1) << int(sampler));		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(969)
				int tmp15 = ~(int)(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(969)
				hx::AndEq(this->__samplerDirty,tmp15);
			}
			HX_STACK_LINE(973)
			(sampler)++;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Context3D_obj,__flushSamplerState,(void))

int Context3D_obj::__getGLCompareMode( Dynamic compareMode){
	HX_STACK_FRAME("openfl.display3D.Context3D","__getGLCompareMode",0xec8b55b4,"openfl.display3D.Context3D.__getGLCompareMode","openfl/display3D/Context3D.hx",980,0xc899cbb9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(compareMode,"compareMode")
	HX_STACK_LINE(982)
	Dynamic tmp = compareMode;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(982)
	int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(982)
	switch( (int)(tmp)){
		case (int)0: {
			HX_STACK_LINE(984)
			tmp1 = (int)519;
		}
		;break;
		case (int)1: {
			HX_STACK_LINE(985)
			tmp1 = (int)514;
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(986)
			tmp1 = (int)516;
		}
		;break;
		case (int)3: {
			HX_STACK_LINE(987)
			tmp1 = (int)518;
		}
		;break;
		case (int)4: {
			HX_STACK_LINE(988)
			tmp1 = (int)513;
		}
		;break;
		case (int)5: {
			HX_STACK_LINE(989)
			tmp1 = (int)515;
		}
		;break;
		case (int)6: {
			HX_STACK_LINE(990)
			tmp1 = (int)512;
		}
		;break;
		case (int)7: {
			HX_STACK_LINE(991)
			tmp1 = (int)517;
		}
		;break;
		default: {
			HX_STACK_LINE(992)
			tmp1 = (int)514;
		}
	}
	HX_STACK_LINE(982)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(Context3D_obj,__getGLCompareMode,return )

int Context3D_obj::__getGLStencilAction( Dynamic stencilAction){
	HX_STACK_FRAME("openfl.display3D.Context3D","__getGLStencilAction",0xdf4274de,"openfl.display3D.Context3D.__getGLStencilAction","openfl/display3D/Context3D.hx",999,0xc899cbb9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(stencilAction,"stencilAction")
	HX_STACK_LINE(1001)
	Dynamic tmp = stencilAction;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1001)
	int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1001)
	switch( (int)(tmp)){
		case (int)0: {
			HX_STACK_LINE(1003)
			tmp1 = (int)7683;
		}
		;break;
		case (int)1: {
			HX_STACK_LINE(1004)
			tmp1 = (int)34056;
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(1005)
			tmp1 = (int)7682;
		}
		;break;
		case (int)3: {
			HX_STACK_LINE(1006)
			tmp1 = (int)34055;
		}
		;break;
		case (int)4: {
			HX_STACK_LINE(1007)
			tmp1 = (int)5386;
		}
		;break;
		case (int)5: {
			HX_STACK_LINE(1008)
			tmp1 = (int)7680;
		}
		;break;
		case (int)6: {
			HX_STACK_LINE(1009)
			tmp1 = (int)7681;
		}
		;break;
		case (int)7: {
			HX_STACK_LINE(1010)
			tmp1 = (int)0;
		}
		;break;
		default: {
			HX_STACK_LINE(1011)
			tmp1 = (int)7680;
		}
	}
	HX_STACK_LINE(1001)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(Context3D_obj,__getGLStencilAction,return )

bool Context3D_obj::__hasGLExtension( ::String name){
	HX_STACK_FRAME("openfl.display3D.Context3D","__hasGLExtension",0xeedeef47,"openfl.display3D.Context3D.__hasGLExtension","openfl/display3D/Context3D.hx",1018,0xc899cbb9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(name,"name")
	HX_STACK_LINE(1020)
	::String tmp = name;		HX_STACK_VAR(tmp,"tmp");
	struct _Function_1_1{
		inline static Array< ::String > Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/display3D/Context3D.hx",1020,0xc899cbb9)
			{
				HX_STACK_LINE(1020)
				Array< ::String > result = Array_obj< ::String >::__new();		HX_STACK_VAR(result,"result");
				HX_STACK_LINE(1020)
				::lime::graphics::opengl::GL_obj::cffi_lime_gl_get_supported_extensions.call(hx::DynamicPtr(result));
				HX_STACK_LINE(1020)
				return result;
			}
			return null();
		}
	};
	HX_STACK_LINE(1020)
	int tmp1 = (_Function_1_1::Block())->indexOf(tmp,null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1020)
	bool tmp2 = (tmp1 != (int)-1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1020)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Context3D_obj,__hasGLExtension,return )

Void Context3D_obj::__setViewport( int originX,int originY,int width,int height){
{
		HX_STACK_FRAME("openfl.display3D.Context3D","__setViewport",0x44998801,"openfl.display3D.Context3D.__setViewport","openfl/display3D/Context3D.hx",1025,0xc899cbb9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(originX,"originX")
		HX_STACK_ARG(originY,"originY")
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_LINE(1027)
		::openfl::_internal::stage3D::Context3DStateCache tmp = ::openfl::display3D::Context3D_obj::__stateCache;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1027)
		int tmp1 = originX;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1027)
		int tmp2 = originY;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1027)
		int tmp3 = width;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1027)
		int tmp4 = height;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1027)
		bool tmp5 = tmp->updateViewport(tmp1,tmp2,tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1027)
		if ((tmp5)){
			HX_STACK_LINE(1029)
			::lime::graphics::opengl::GL_obj::cffi_lime_gl_viewport.call(originX,originY,width,height);
			HX_STACK_LINE(1030)
			::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Context3D_obj,__setViewport,(void))

int Context3D_obj::__statsAdd( int stat,int value){
	HX_STACK_FRAME("openfl.display3D.Context3D","__statsAdd",0x9eeb6dc9,"openfl.display3D.Context3D.__statsAdd","openfl/display3D/Context3D.hx",1037,0xc899cbb9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(stat,"stat")
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1039)
	{
		HX_STACK_LINE(1039)
		int _g = stat;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1039)
		{
			HX_STACK_LINE(1039)
			::openfl::_Vector::IntVector tmp = this->__stats;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(1039)
			int tmp1 = _g;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1039)
			int tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1039)
			int tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1039)
			int tmp4 = value;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1039)
			int tmp5 = (tmp3 + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1039)
			int value1 = tmp5;		HX_STACK_VAR(value1,"value1");
			HX_STACK_LINE(1039)
			::openfl::_Vector::IntVector tmp6 = this->__stats;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1039)
			int tmp7 = _g;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1039)
			int tmp8 = value1;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1039)
			tmp6->set(tmp7,tmp8);
		}
	}
	HX_STACK_LINE(1040)
	::openfl::_Vector::IntVector tmp = this->__stats;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1040)
	int tmp1 = stat;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1040)
	int tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1040)
	int tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1040)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC2(Context3D_obj,__statsAdd,return )

Void Context3D_obj::__statsClear( int stat){
{
		HX_STACK_FRAME("openfl.display3D.Context3D","__statsClear",0xef112735,"openfl.display3D.Context3D.__statsClear","openfl/display3D/Context3D.hx",1045,0xc899cbb9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(stat,"stat")
		HX_STACK_LINE(1047)
		::openfl::_Vector::IntVector tmp = this->__stats;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1047)
		int tmp1 = stat;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1047)
		int tmp2 = tmp->set(tmp1,(int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1047)
		tmp2;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Context3D_obj,__statsClear,(void))

Void Context3D_obj::__statsDecrement( int stat){
{
		HX_STACK_FRAME("openfl.display3D.Context3D","__statsDecrement",0xf8079fbb,"openfl.display3D.Context3D.__statsDecrement","openfl/display3D/Context3D.hx",1054,0xc899cbb9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(stat,"stat")
		HX_STACK_LINE(1054)
		int _g = stat;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1054)
		{
			HX_STACK_LINE(1054)
			::openfl::_Vector::IntVector tmp = this->__stats;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(1054)
			int tmp1 = _g;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1054)
			int tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1054)
			int tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1054)
			int tmp4 = (tmp3 - (int)1);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1054)
			int value = tmp4;		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(1054)
			::openfl::_Vector::IntVector tmp5 = this->__stats;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1054)
			int tmp6 = _g;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1054)
			int tmp7 = value;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1054)
			tmp5->set(tmp6,tmp7);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Context3D_obj,__statsDecrement,(void))

Void Context3D_obj::__statsIncrement( int stat){
{
		HX_STACK_FRAME("openfl.display3D.Context3D","__statsIncrement",0x1984afd7,"openfl.display3D.Context3D.__statsIncrement","openfl/display3D/Context3D.hx",1061,0xc899cbb9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(stat,"stat")
		HX_STACK_LINE(1061)
		int _g = stat;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1061)
		{
			HX_STACK_LINE(1061)
			::openfl::_Vector::IntVector tmp = this->__stats;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(1061)
			int tmp1 = _g;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1061)
			int tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1061)
			int tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1061)
			int tmp4 = (tmp3 + (int)1);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1061)
			int value = tmp4;		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(1061)
			::openfl::_Vector::IntVector tmp5 = this->__stats;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1061)
			int tmp6 = _g;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1061)
			int tmp7 = value;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1061)
			tmp5->set(tmp6,tmp7);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Context3D_obj,__statsIncrement,(void))

Void Context3D_obj::__statsSendToTelemetry( ){
{
		HX_STACK_FRAME("openfl.display3D.Context3D","__statsSendToTelemetry",0x95ec20be,"openfl.display3D.Context3D.__statsSendToTelemetry","openfl/display3D/Context3D.hx",1066,0xc899cbb9)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Context3D_obj,__statsSendToTelemetry,(void))

int Context3D_obj::__statsSubtract( int stat,int value){
	HX_STACK_FRAME("openfl.display3D.Context3D","__statsSubtract",0xc326b86c,"openfl.display3D.Context3D.__statsSubtract","openfl/display3D/Context3D.hx",1115,0xc899cbb9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(stat,"stat")
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1117)
	{
		HX_STACK_LINE(1117)
		int _g = stat;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1117)
		{
			HX_STACK_LINE(1117)
			::openfl::_Vector::IntVector tmp = this->__stats;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(1117)
			int tmp1 = _g;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1117)
			int tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1117)
			int tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1117)
			int tmp4 = value;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1117)
			int tmp5 = (tmp3 - tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1117)
			int value1 = tmp5;		HX_STACK_VAR(value1,"value1");
			HX_STACK_LINE(1117)
			::openfl::_Vector::IntVector tmp6 = this->__stats;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1117)
			int tmp7 = _g;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1117)
			int tmp8 = value1;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1117)
			tmp6->set(tmp7,tmp8);
		}
	}
	HX_STACK_LINE(1118)
	::openfl::_Vector::IntVector tmp = this->__stats;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1118)
	int tmp1 = stat;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1118)
	int tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1118)
	int tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1118)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC2(Context3D_obj,__statsSubtract,return )

Void Context3D_obj::__updateDepthAndStencilState( ){
{
		HX_STACK_FRAME("openfl.display3D.Context3D","__updateDepthAndStencilState",0x7fba6d19,"openfl.display3D.Context3D.__updateDepthAndStencilState","openfl/display3D/Context3D.hx",1122,0xc899cbb9)
		HX_STACK_THIS(this)
		HX_STACK_LINE(1124)
		::openfl::display3D::textures::TextureBase tmp = this->__renderToTexture;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1124)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1124)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1124)
		if ((tmp1)){
			HX_STACK_LINE(1124)
			tmp2 = this->__rttDepthAndStencil;
		}
		else{
			HX_STACK_LINE(1124)
			tmp2 = this->__backBufferEnableDepthAndStencil;
		}
		HX_STACK_LINE(1124)
		bool depthAndStencil = tmp2;		HX_STACK_VAR(depthAndStencil,"depthAndStencil");
		HX_STACK_LINE(1126)
		bool tmp3 = depthAndStencil;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1126)
		if ((tmp3)){
			HX_STACK_LINE(1128)
			::lime::graphics::opengl::GL_obj::cffi_lime_gl_enable.call((int)2929);
			HX_STACK_LINE(1129)
			::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
			HX_STACK_LINE(1130)
			::lime::graphics::opengl::GL_obj::cffi_lime_gl_enable.call((int)2960);
			HX_STACK_LINE(1131)
			::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
		}
		else{
			HX_STACK_LINE(1135)
			::lime::graphics::opengl::GL_obj::cffi_lime_gl_disable.call((int)2929);
			HX_STACK_LINE(1136)
			::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
			HX_STACK_LINE(1137)
			::lime::graphics::opengl::GL_obj::cffi_lime_gl_disable.call((int)2960);
			HX_STACK_LINE(1138)
			::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Context3D_obj,__updateDepthAndStencilState,(void))

Void Context3D_obj::__updateBlendFactors( ){
{
		HX_STACK_FRAME("openfl.display3D.Context3D","__updateBlendFactors",0x00141f63,"openfl.display3D.Context3D.__updateBlendFactors","openfl/display3D/Context3D.hx",1145,0xc899cbb9)
		HX_STACK_THIS(this)
		HX_STACK_LINE(1147)
		::openfl::_internal::stage3D::Context3DStateCache tmp = ::openfl::display3D::Context3D_obj::__stateCache;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1147)
		Dynamic tmp1 = tmp->_srcBlendFactor;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1147)
		bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1147)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1147)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1147)
		if ((tmp3)){
			HX_STACK_LINE(1147)
			::openfl::_internal::stage3D::Context3DStateCache tmp5 = ::openfl::display3D::Context3D_obj::__stateCache;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1147)
			::openfl::_internal::stage3D::Context3DStateCache tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1147)
			Dynamic tmp7 = tmp6->_destBlendFactor;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1147)
			tmp4 = (tmp7 == null());
		}
		else{
			HX_STACK_LINE(1147)
			tmp4 = true;
		}
		HX_STACK_LINE(1147)
		if ((tmp4)){
			HX_STACK_LINE(1149)
			return null();
		}
		HX_STACK_LINE(1153)
		int src = (int)1;		HX_STACK_VAR(src,"src");
		HX_STACK_LINE(1154)
		int dest = (int)0;		HX_STACK_VAR(dest,"dest");
		HX_STACK_LINE(1155)
		{
			HX_STACK_LINE(1155)
			::openfl::_internal::stage3D::Context3DStateCache tmp5 = ::openfl::display3D::Context3D_obj::__stateCache;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1155)
			Dynamic _g = tmp5->_srcBlendFactor;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1155)
			Dynamic tmp6 = _g;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1155)
			switch( (int)(tmp6)){
				case (int)2: {
					HX_STACK_LINE(1157)
					src = (int)1;
				}
				;break;
				case (int)9: {
					HX_STACK_LINE(1158)
					src = (int)0;
				}
				;break;
				case (int)7: {
					HX_STACK_LINE(1159)
					src = (int)770;
				}
				;break;
				case (int)0: {
					HX_STACK_LINE(1160)
					src = (int)772;
				}
				;break;
				case (int)1: {
					HX_STACK_LINE(1161)
					src = (int)774;
				}
				;break;
				case (int)5: {
					HX_STACK_LINE(1162)
					src = (int)771;
				}
				;break;
				case (int)3: {
					HX_STACK_LINE(1163)
					src = (int)773;
				}
				;break;
				case (int)4: {
					HX_STACK_LINE(1164)
					src = (int)775;
				}
				;break;
				default: {
					HX_STACK_LINE(1166)
					::openfl::errors::IllegalOperationError tmp7 = ::openfl::errors::IllegalOperationError_obj::__new(null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(1166)
					HX_STACK_DO_THROW(tmp7);
				}
			}
		}
		HX_STACK_LINE(1170)
		{
			HX_STACK_LINE(1170)
			::openfl::_internal::stage3D::Context3DStateCache tmp5 = ::openfl::display3D::Context3D_obj::__stateCache;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1170)
			Dynamic _g = tmp5->_destBlendFactor;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1170)
			Dynamic tmp6 = _g;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1170)
			switch( (int)(tmp6)){
				case (int)2: {
					HX_STACK_LINE(1172)
					dest = (int)1;
				}
				;break;
				case (int)9: {
					HX_STACK_LINE(1173)
					dest = (int)0;
				}
				;break;
				case (int)7: {
					HX_STACK_LINE(1174)
					dest = (int)770;
				}
				;break;
				case (int)8: {
					HX_STACK_LINE(1175)
					dest = (int)768;
				}
				;break;
				case (int)0: {
					HX_STACK_LINE(1176)
					dest = (int)772;
				}
				;break;
				case (int)5: {
					HX_STACK_LINE(1177)
					dest = (int)771;
				}
				;break;
				case (int)6: {
					HX_STACK_LINE(1178)
					dest = (int)769;
				}
				;break;
				case (int)3: {
					HX_STACK_LINE(1179)
					dest = (int)773;
				}
				;break;
				default: {
					HX_STACK_LINE(1181)
					::openfl::errors::IllegalOperationError tmp7 = ::openfl::errors::IllegalOperationError_obj::__new(null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(1181)
					HX_STACK_DO_THROW(tmp7);
				}
			}
		}
		HX_STACK_LINE(1185)
		::lime::graphics::opengl::GL_obj::cffi_lime_gl_enable.call((int)3042);
		HX_STACK_LINE(1186)
		::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
		HX_STACK_LINE(1187)
		::lime::graphics::opengl::GL_obj::cffi_lime_gl_blend_func.call(src,dest);
		HX_STACK_LINE(1188)
		::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Context3D_obj,__updateBlendFactors,(void))

Void Context3D_obj::__updateScissorRectangle( ){
{
		HX_STACK_FRAME("openfl.display3D.Context3D","__updateScissorRectangle",0x17db8763,"openfl.display3D.Context3D.__updateScissorRectangle","openfl/display3D/Context3D.hx",1193,0xc899cbb9)
		HX_STACK_THIS(this)
		HX_STACK_LINE(1195)
		::openfl::geom::Rectangle tmp = this->__scissorRectangle;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1195)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1195)
		if ((tmp1)){
			HX_STACK_LINE(1197)
			::lime::graphics::opengl::GL_obj::cffi_lime_gl_disable.call((int)3089);
			HX_STACK_LINE(1198)
			::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
			HX_STACK_LINE(1199)
			return null();
		}
		HX_STACK_LINE(1203)
		::lime::graphics::opengl::GL_obj::cffi_lime_gl_enable.call((int)3089);
		HX_STACK_LINE(1204)
		::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
		HX_STACK_LINE(1206)
		int height = (int)0;		HX_STACK_VAR(height,"height");
		HX_STACK_LINE(1208)
		::openfl::display3D::textures::TextureBase tmp2 = this->__renderToTexture;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1208)
		bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1208)
		if ((tmp3)){
			HX_STACK_LINE(1210)
			::openfl::display3D::textures::TextureBase tmp4 = this->__renderToTexture;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1210)
			bool tmp5 = ::Std_obj::is(tmp4,hx::ClassOf< ::openfl::display3D::textures::Texture >());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1210)
			if ((tmp5)){
				HX_STACK_LINE(1212)
				::openfl::display3D::textures::TextureBase tmp6 = this->__renderToTexture;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1212)
				::openfl::display3D::textures::Texture texture2D = ((::openfl::display3D::textures::Texture)(tmp6));		HX_STACK_VAR(texture2D,"texture2D");
				HX_STACK_LINE(1213)
				height = texture2D->__height;
			}
			else{
				HX_STACK_LINE(1215)
				::openfl::display3D::textures::TextureBase tmp6 = this->__renderToTexture;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1215)
				bool tmp7 = ::Std_obj::is(tmp6,hx::ClassOf< ::openfl::display3D::textures::RectangleTexture >());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1215)
				if ((tmp7)){
					HX_STACK_LINE(1217)
					::openfl::display3D::textures::TextureBase tmp8 = this->__renderToTexture;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(1217)
					::openfl::display3D::textures::RectangleTexture rectTexture = ((::openfl::display3D::textures::RectangleTexture)(tmp8));		HX_STACK_VAR(rectTexture,"rectTexture");
					HX_STACK_LINE(1218)
					height = rectTexture->__height;
				}
			}
		}
		else{
			HX_STACK_LINE(1224)
			int tmp4 = this->backBufferHeight;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1224)
			height = tmp4;
		}
		HX_STACK_LINE(1228)
		{
			HX_STACK_LINE(1228)
			::openfl::geom::Rectangle tmp4 = this->__scissorRectangle;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1228)
			Float tmp5 = tmp4->x;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1228)
			int tmp6 = ::Std_obj::_int(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1228)
			int x = tmp6;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(1229)
			int tmp7 = height;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1229)
			::openfl::geom::Rectangle tmp8 = this->__scissorRectangle;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1229)
			Float tmp9 = tmp8->y;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1229)
			int tmp10 = ::Std_obj::_int(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1229)
			int tmp11 = (tmp7 - tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(1229)
			::openfl::geom::Rectangle tmp12 = this->__scissorRectangle;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1229)
			Float tmp13 = tmp12->height;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(1229)
			int tmp14 = ::Std_obj::_int(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(1229)
			int tmp15 = (tmp11 - tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(1229)
			int tmp16 = ::Std_obj::_int(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(1229)
			int y = tmp16;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(1230)
			::openfl::geom::Rectangle tmp17 = this->__scissorRectangle;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(1230)
			Float tmp18 = tmp17->width;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(1230)
			int tmp19 = ::Std_obj::_int(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(1230)
			int width = tmp19;		HX_STACK_VAR(width,"width");
			HX_STACK_LINE(1231)
			::openfl::geom::Rectangle tmp20 = this->__scissorRectangle;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(1231)
			Float tmp21 = tmp20->height;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(1231)
			int tmp22 = ::Std_obj::_int(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(1231)
			int height1 = tmp22;		HX_STACK_VAR(height1,"height1");
			HX_STACK_LINE(1228)
			::lime::graphics::opengl::GL_obj::cffi_lime_gl_scissor.call(x,y,width,height1);
		}
		HX_STACK_LINE(1233)
		::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Context3D_obj,__updateScissorRectangle,(void))

Void Context3D_obj::__updateBackbufferViewport( ){
{
		HX_STACK_FRAME("openfl.display3D.Context3D","__updateBackbufferViewport",0x1ffcf0dd,"openfl.display3D.Context3D.__updateBackbufferViewport","openfl/display3D/Context3D.hx",1238,0xc899cbb9)
		HX_STACK_THIS(this)
		HX_STACK_LINE(1240)
		::openfl::display3D::textures::TextureBase tmp = this->__renderToTexture;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1240)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1240)
		if ((tmp1)){
			HX_STACK_LINE(1242)
			::openfl::display::Stage3D tmp2 = this->__stage3D;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1242)
			Float tmp3 = tmp2->x;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1242)
			int tmp4 = ::Std_obj::_int(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1242)
			::openfl::display::Stage3D tmp5 = this->__stage3D;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1242)
			Float tmp6 = tmp5->y;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1242)
			int tmp7 = ::Std_obj::_int(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1242)
			int tmp8 = this->backBufferWidth;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1242)
			int tmp9 = this->backBufferHeight;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1242)
			this->__setViewport(tmp4,tmp7,tmp8,tmp9);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Context3D_obj,__updateBackbufferViewport,(void))

bool Context3D_obj::set_enableErrorChecking( bool value){
	HX_STACK_FRAME("openfl.display3D.Context3D","set_enableErrorChecking",0x101dce5b,"openfl.display3D.Context3D.set_enableErrorChecking","openfl/display3D/Context3D.hx",1249,0xc899cbb9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1251)
	bool tmp = ::openfl::_internal::stage3D::GLUtils_obj::debug = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1251)
	bool tmp1 = this->enableErrorChecking = tmp;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1251)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(Context3D_obj,set_enableErrorChecking,return )

bool Context3D_obj::supportsVideoTexture;

int Context3D_obj::MAX_SAMPLERS;

int Context3D_obj::MAX_ATTRIBUTES;

int Context3D_obj::MAX_PROGRAM_REGISTERS;

::openfl::_internal::stage3D::Context3DStateCache Context3D_obj::__stateCache;


Context3D_obj::Context3D_obj()
{
}

void Context3D_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Context3D);
	HX_MARK_MEMBER_NAME(backBufferHeight,"backBufferHeight");
	HX_MARK_MEMBER_NAME(backBufferWidth,"backBufferWidth");
	HX_MARK_MEMBER_NAME(driverInfo,"driverInfo");
	HX_MARK_MEMBER_NAME(enableErrorChecking,"enableErrorChecking");
	HX_MARK_MEMBER_NAME(maxBackBufferHeight,"maxBackBufferHeight");
	HX_MARK_MEMBER_NAME(maxBackBufferWidth,"maxBackBufferWidth");
	HX_MARK_MEMBER_NAME(profile,"profile");
	HX_MARK_MEMBER_NAME(totalGPUMemory,"totalGPUMemory");
	HX_MARK_MEMBER_NAME(__backBufferAntiAlias,"__backBufferAntiAlias");
	HX_MARK_MEMBER_NAME(__backBufferEnableDepthAndStencil,"__backBufferEnableDepthAndStencil");
	HX_MARK_MEMBER_NAME(__backBufferWantsBestResolution,"__backBufferWantsBestResolution");
	HX_MARK_MEMBER_NAME(__depthRenderBuffer,"__depthRenderBuffer");
	HX_MARK_MEMBER_NAME(__depthStencilRenderBuffer,"__depthStencilRenderBuffer");
	HX_MARK_MEMBER_NAME(__fragmentConstants,"__fragmentConstants");
	HX_MARK_MEMBER_NAME(__framebuffer,"__framebuffer");
	HX_MARK_MEMBER_NAME(__frameCount,"__frameCount");
	HX_MARK_MEMBER_NAME(__positionScale,"__positionScale");
	HX_MARK_MEMBER_NAME(__program,"__program");
	HX_MARK_MEMBER_NAME(__renderSession,"__renderSession");
	HX_MARK_MEMBER_NAME(__renderToTexture,"__renderToTexture");
	HX_MARK_MEMBER_NAME(__rttDepthAndStencil,"__rttDepthAndStencil");
	HX_MARK_MEMBER_NAME(__samplerDirty,"__samplerDirty");
	HX_MARK_MEMBER_NAME(__samplerTextures,"__samplerTextures");
	HX_MARK_MEMBER_NAME(__samplerStates,"__samplerStates");
	HX_MARK_MEMBER_NAME(__scissorRectangle,"__scissorRectangle");
	HX_MARK_MEMBER_NAME(__stage3D,"__stage3D");
	HX_MARK_MEMBER_NAME(__stats,"__stats");
	HX_MARK_MEMBER_NAME(__statsCache,"__statsCache");
	HX_MARK_MEMBER_NAME(__stencilCompareMode,"__stencilCompareMode");
	HX_MARK_MEMBER_NAME(__stencilRef,"__stencilRef");
	HX_MARK_MEMBER_NAME(__stencilReadMask,"__stencilReadMask");
	HX_MARK_MEMBER_NAME(__stencilRenderBuffer,"__stencilRenderBuffer");
	HX_MARK_MEMBER_NAME(__supportsPackedDepthStencil,"__supportsPackedDepthStencil");
	HX_MARK_MEMBER_NAME(__vertexConstants,"__vertexConstants");
	::openfl::events::EventDispatcher_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Context3D_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(backBufferHeight,"backBufferHeight");
	HX_VISIT_MEMBER_NAME(backBufferWidth,"backBufferWidth");
	HX_VISIT_MEMBER_NAME(driverInfo,"driverInfo");
	HX_VISIT_MEMBER_NAME(enableErrorChecking,"enableErrorChecking");
	HX_VISIT_MEMBER_NAME(maxBackBufferHeight,"maxBackBufferHeight");
	HX_VISIT_MEMBER_NAME(maxBackBufferWidth,"maxBackBufferWidth");
	HX_VISIT_MEMBER_NAME(profile,"profile");
	HX_VISIT_MEMBER_NAME(totalGPUMemory,"totalGPUMemory");
	HX_VISIT_MEMBER_NAME(__backBufferAntiAlias,"__backBufferAntiAlias");
	HX_VISIT_MEMBER_NAME(__backBufferEnableDepthAndStencil,"__backBufferEnableDepthAndStencil");
	HX_VISIT_MEMBER_NAME(__backBufferWantsBestResolution,"__backBufferWantsBestResolution");
	HX_VISIT_MEMBER_NAME(__depthRenderBuffer,"__depthRenderBuffer");
	HX_VISIT_MEMBER_NAME(__depthStencilRenderBuffer,"__depthStencilRenderBuffer");
	HX_VISIT_MEMBER_NAME(__fragmentConstants,"__fragmentConstants");
	HX_VISIT_MEMBER_NAME(__framebuffer,"__framebuffer");
	HX_VISIT_MEMBER_NAME(__frameCount,"__frameCount");
	HX_VISIT_MEMBER_NAME(__positionScale,"__positionScale");
	HX_VISIT_MEMBER_NAME(__program,"__program");
	HX_VISIT_MEMBER_NAME(__renderSession,"__renderSession");
	HX_VISIT_MEMBER_NAME(__renderToTexture,"__renderToTexture");
	HX_VISIT_MEMBER_NAME(__rttDepthAndStencil,"__rttDepthAndStencil");
	HX_VISIT_MEMBER_NAME(__samplerDirty,"__samplerDirty");
	HX_VISIT_MEMBER_NAME(__samplerTextures,"__samplerTextures");
	HX_VISIT_MEMBER_NAME(__samplerStates,"__samplerStates");
	HX_VISIT_MEMBER_NAME(__scissorRectangle,"__scissorRectangle");
	HX_VISIT_MEMBER_NAME(__stage3D,"__stage3D");
	HX_VISIT_MEMBER_NAME(__stats,"__stats");
	HX_VISIT_MEMBER_NAME(__statsCache,"__statsCache");
	HX_VISIT_MEMBER_NAME(__stencilCompareMode,"__stencilCompareMode");
	HX_VISIT_MEMBER_NAME(__stencilRef,"__stencilRef");
	HX_VISIT_MEMBER_NAME(__stencilReadMask,"__stencilReadMask");
	HX_VISIT_MEMBER_NAME(__stencilRenderBuffer,"__stencilRenderBuffer");
	HX_VISIT_MEMBER_NAME(__supportsPackedDepthStencil,"__supportsPackedDepthStencil");
	HX_VISIT_MEMBER_NAME(__vertexConstants,"__vertexConstants");
	::openfl::events::EventDispatcher_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Context3D_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"profile") ) { return profile; }
		if (HX_FIELD_EQ(inName,"__stats") ) { return __stats; }
		if (HX_FIELD_EQ(inName,"dispose") ) { return dispose_dyn(); }
		if (HX_FIELD_EQ(inName,"present") ) { return present_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"__program") ) { return __program; }
		if (HX_FIELD_EQ(inName,"__stage3D") ) { return __stage3D; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"driverInfo") ) { return driverInfo; }
		if (HX_FIELD_EQ(inName,"setCulling") ) { return setCulling_dyn(); }
		if (HX_FIELD_EQ(inName,"setProgram") ) { return setProgram_dyn(); }
		if (HX_FIELD_EQ(inName,"__statsAdd") ) { return __statsAdd_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__frameCount") ) { return __frameCount; }
		if (HX_FIELD_EQ(inName,"__statsCache") ) { return __statsCache; }
		if (HX_FIELD_EQ(inName,"__stencilRef") ) { return __stencilRef; }
		if (HX_FIELD_EQ(inName,"setColorMask") ) { return setColorMask_dyn(); }
		if (HX_FIELD_EQ(inName,"setDepthTest") ) { return setDepthTest_dyn(); }
		if (HX_FIELD_EQ(inName,"setTextureAt") ) { return setTextureAt_dyn(); }
		if (HX_FIELD_EQ(inName,"__statsClear") ) { return __statsClear_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__framebuffer") ) { return __framebuffer; }
		if (HX_FIELD_EQ(inName,"createProgram") ) { return createProgram_dyn(); }
		if (HX_FIELD_EQ(inName,"createTexture") ) { return createTexture_dyn(); }
		if (HX_FIELD_EQ(inName,"drawTriangles") ) { return drawTriangles_dyn(); }
		if (HX_FIELD_EQ(inName,"__setViewport") ) { return __setViewport_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"totalGPUMemory") ) { return totalGPUMemory; }
		if (HX_FIELD_EQ(inName,"__samplerDirty") ) { return __samplerDirty; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"backBufferWidth") ) { return backBufferWidth; }
		if (HX_FIELD_EQ(inName,"__positionScale") ) { return __positionScale; }
		if (HX_FIELD_EQ(inName,"__renderSession") ) { return __renderSession; }
		if (HX_FIELD_EQ(inName,"__samplerStates") ) { return __samplerStates; }
		if (HX_FIELD_EQ(inName,"setBlendFactors") ) { return setBlendFactors_dyn(); }
		if (HX_FIELD_EQ(inName,"__statsSubtract") ) { return __statsSubtract_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"backBufferHeight") ) { return backBufferHeight; }
		if (HX_FIELD_EQ(inName,"drawToBitmapData") ) { return drawToBitmapData_dyn(); }
		if (HX_FIELD_EQ(inName,"__hasGLExtension") ) { return __hasGLExtension_dyn(); }
		if (HX_FIELD_EQ(inName,"__statsDecrement") ) { return __statsDecrement_dyn(); }
		if (HX_FIELD_EQ(inName,"__statsIncrement") ) { return __statsIncrement_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__renderToTexture") ) { return __renderToTexture; }
		if (HX_FIELD_EQ(inName,"__samplerTextures") ) { return __samplerTextures; }
		if (HX_FIELD_EQ(inName,"__stencilReadMask") ) { return __stencilReadMask; }
		if (HX_FIELD_EQ(inName,"__vertexConstants") ) { return __vertexConstants; }
		if (HX_FIELD_EQ(inName,"createCubeTexture") ) { return createCubeTexture_dyn(); }
		if (HX_FIELD_EQ(inName,"createIndexBuffer") ) { return createIndexBuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"setSamplerStateAt") ) { return setSamplerStateAt_dyn(); }
		if (HX_FIELD_EQ(inName,"setStencilActions") ) { return setStencilActions_dyn(); }
		if (HX_FIELD_EQ(inName,"setVertexBufferAt") ) { return setVertexBufferAt_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"maxBackBufferWidth") ) { return maxBackBufferWidth; }
		if (HX_FIELD_EQ(inName,"__scissorRectangle") ) { return __scissorRectangle; }
		if (HX_FIELD_EQ(inName,"createVertexBuffer") ) { return createVertexBuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"setRenderToTexture") ) { return setRenderToTexture_dyn(); }
		if (HX_FIELD_EQ(inName,"__getGLCompareMode") ) { return __getGLCompareMode_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"enableErrorChecking") ) { return enableErrorChecking; }
		if (HX_FIELD_EQ(inName,"maxBackBufferHeight") ) { return maxBackBufferHeight; }
		if (HX_FIELD_EQ(inName,"__depthRenderBuffer") ) { return __depthRenderBuffer; }
		if (HX_FIELD_EQ(inName,"__fragmentConstants") ) { return __fragmentConstants; }
		if (HX_FIELD_EQ(inName,"configureBackBuffer") ) { return configureBackBuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"setScissorRectangle") ) { return setScissorRectangle_dyn(); }
		if (HX_FIELD_EQ(inName,"__flushSamplerState") ) { return __flushSamplerState_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"__rttDepthAndStencil") ) { return __rttDepthAndStencil; }
		if (HX_FIELD_EQ(inName,"__stencilCompareMode") ) { return __stencilCompareMode; }
		if (HX_FIELD_EQ(inName,"__getGLStencilAction") ) { return __getGLStencilAction_dyn(); }
		if (HX_FIELD_EQ(inName,"__updateBlendFactors") ) { return __updateBlendFactors_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"__backBufferAntiAlias") ) { return __backBufferAntiAlias; }
		if (HX_FIELD_EQ(inName,"__stencilRenderBuffer") ) { return __stencilRenderBuffer; }
		if (HX_FIELD_EQ(inName,"setRenderToBackBuffer") ) { return setRenderToBackBuffer_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"createRectangleTexture") ) { return createRectangleTexture_dyn(); }
		if (HX_FIELD_EQ(inName,"__statsSendToTelemetry") ) { return __statsSendToTelemetry_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"set_enableErrorChecking") ) { return set_enableErrorChecking_dyn(); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"setStencilReferenceValue") ) { return setStencilReferenceValue_dyn(); }
		if (HX_FIELD_EQ(inName,"__updateScissorRectangle") ) { return __updateScissorRectangle_dyn(); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"__depthStencilRenderBuffer") ) { return __depthStencilRenderBuffer; }
		if (HX_FIELD_EQ(inName,"__updateBackbufferViewport") ) { return __updateBackbufferViewport_dyn(); }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"__supportsPackedDepthStencil") ) { return __supportsPackedDepthStencil; }
		if (HX_FIELD_EQ(inName,"__updateDepthAndStencilState") ) { return __updateDepthAndStencilState_dyn(); }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"setProgramConstantsFromMatrix") ) { return setProgramConstantsFromMatrix_dyn(); }
		if (HX_FIELD_EQ(inName,"setProgramConstantsFromVector") ) { return setProgramConstantsFromVector_dyn(); }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"__backBufferWantsBestResolution") ) { return __backBufferWantsBestResolution; }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"setProgramConstantsFromByteArray") ) { return setProgramConstantsFromByteArray_dyn(); }
		break;
	case 33:
		if (HX_FIELD_EQ(inName,"__backBufferEnableDepthAndStencil") ) { return __backBufferEnableDepthAndStencil; }
	}
	return super::__Field(inName,inCallProp);
}

bool Context3D_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"__stateCache") ) { outValue = __stateCache; return true;  }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"supportsVideoTexture") ) { outValue = supportsVideoTexture; return true;  }
	}
	return false;
}

Dynamic Context3D_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"profile") ) { profile=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__stats") ) { __stats=inValue.Cast< ::openfl::_Vector::IntVector >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"__program") ) { __program=inValue.Cast< ::openfl::display3D::Program3D >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__stage3D") ) { __stage3D=inValue.Cast< ::openfl::display::Stage3D >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"driverInfo") ) { driverInfo=inValue.Cast< ::String >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__frameCount") ) { __frameCount=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__statsCache") ) { __statsCache=inValue.Cast< ::openfl::_Vector::IntVector >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__stencilRef") ) { __stencilRef=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__framebuffer") ) { __framebuffer=inValue.Cast< ::lime::graphics::opengl::GLFramebuffer >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"totalGPUMemory") ) { totalGPUMemory=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__samplerDirty") ) { __samplerDirty=inValue.Cast< int >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"backBufferWidth") ) { backBufferWidth=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__positionScale") ) { __positionScale=inValue.Cast< ::lime::utils::ArrayBufferView >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__renderSession") ) { __renderSession=inValue.Cast< ::openfl::_internal::renderer::RenderSession >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__samplerStates") ) { __samplerStates=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"backBufferHeight") ) { backBufferHeight=inValue.Cast< int >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__renderToTexture") ) { __renderToTexture=inValue.Cast< ::openfl::display3D::textures::TextureBase >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__samplerTextures") ) { __samplerTextures=inValue.Cast< ::openfl::_Vector::ObjectVector >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__stencilReadMask") ) { __stencilReadMask=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__vertexConstants") ) { __vertexConstants=inValue.Cast< ::lime::utils::ArrayBufferView >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"maxBackBufferWidth") ) { maxBackBufferWidth=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__scissorRectangle") ) { __scissorRectangle=inValue.Cast< ::openfl::geom::Rectangle >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"enableErrorChecking") ) { if (inCallProp == hx::paccAlways) return set_enableErrorChecking(inValue);enableErrorChecking=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"maxBackBufferHeight") ) { maxBackBufferHeight=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__depthRenderBuffer") ) { __depthRenderBuffer=inValue.Cast< ::lime::graphics::opengl::GLRenderbuffer >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__fragmentConstants") ) { __fragmentConstants=inValue.Cast< ::lime::utils::ArrayBufferView >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"__rttDepthAndStencil") ) { __rttDepthAndStencil=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__stencilCompareMode") ) { __stencilCompareMode=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"__backBufferAntiAlias") ) { __backBufferAntiAlias=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__stencilRenderBuffer") ) { __stencilRenderBuffer=inValue.Cast< ::lime::graphics::opengl::GLRenderbuffer >(); return inValue; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"__depthStencilRenderBuffer") ) { __depthStencilRenderBuffer=inValue.Cast< ::lime::graphics::opengl::GLRenderbuffer >(); return inValue; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"__supportsPackedDepthStencil") ) { __supportsPackedDepthStencil=inValue.Cast< bool >(); return inValue; }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"__backBufferWantsBestResolution") ) { __backBufferWantsBestResolution=inValue.Cast< bool >(); return inValue; }
		break;
	case 33:
		if (HX_FIELD_EQ(inName,"__backBufferEnableDepthAndStencil") ) { __backBufferEnableDepthAndStencil=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Context3D_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"__stateCache") ) { __stateCache=ioValue.Cast< ::openfl::_internal::stage3D::Context3DStateCache >(); return true; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"supportsVideoTexture") ) { supportsVideoTexture=ioValue.Cast< bool >(); return true; }
	}
	return false;
}

void Context3D_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("backBufferHeight","\xce","\x3d","\x76","\xf3"));
	outFields->push(HX_HCSTRING("backBufferWidth","\xff","\xf9","\x53","\x8c"));
	outFields->push(HX_HCSTRING("driverInfo","\xb6","\x18","\x7b","\xe3"));
	outFields->push(HX_HCSTRING("enableErrorChecking","\x7f","\x3c","\x19","\xba"));
	outFields->push(HX_HCSTRING("maxBackBufferHeight","\x92","\xac","\x2a","\x8e"));
	outFields->push(HX_HCSTRING("maxBackBufferWidth","\xbb","\x8f","\x62","\xbe"));
	outFields->push(HX_HCSTRING("profile","\x29","\x49","\x49","\xf3"));
	outFields->push(HX_HCSTRING("totalGPUMemory","\xe9","\x89","\x1b","\x9c"));
	outFields->push(HX_HCSTRING("__backBufferAntiAlias","\xe7","\x9b","\x20","\xbd"));
	outFields->push(HX_HCSTRING("__backBufferEnableDepthAndStencil","\x5e","\x16","\x47","\xce"));
	outFields->push(HX_HCSTRING("__backBufferWantsBestResolution","\x0c","\x81","\x2c","\xec"));
	outFields->push(HX_HCSTRING("__depthRenderBuffer","\x79","\x1f","\xfe","\x32"));
	outFields->push(HX_HCSTRING("__depthStencilRenderBuffer","\xef","\x9c","\xa8","\x76"));
	outFields->push(HX_HCSTRING("__fragmentConstants","\x7f","\xa5","\xa6","\x65"));
	outFields->push(HX_HCSTRING("__framebuffer","\xcd","\x55","\xc0","\xc2"));
	outFields->push(HX_HCSTRING("__frameCount","\x82","\xf4","\x1c","\x66"));
	outFields->push(HX_HCSTRING("__positionScale","\x01","\xd2","\x7f","\x6a"));
	outFields->push(HX_HCSTRING("__program","\x64","\x9b","\x47","\x75"));
	outFields->push(HX_HCSTRING("__renderSession","\x80","\xc3","\x37","\x17"));
	outFields->push(HX_HCSTRING("__renderToTexture","\x4a","\x8b","\x77","\x3a"));
	outFields->push(HX_HCSTRING("__rttDepthAndStencil","\x96","\x47","\x37","\xce"));
	outFields->push(HX_HCSTRING("__samplerDirty","\x0a","\x41","\x45","\x32"));
	outFields->push(HX_HCSTRING("__samplerTextures","\x40","\xf1","\xfc","\x14"));
	outFields->push(HX_HCSTRING("__samplerStates","\x4a","\xc1","\xd9","\x13"));
	outFields->push(HX_HCSTRING("__scissorRectangle","\x93","\x3b","\xf9","\x77"));
	outFields->push(HX_HCSTRING("__stage3D","\xcf","\x93","\x18","\xaf"));
	outFields->push(HX_HCSTRING("__stats","\xff","\xce","\x69","\xee"));
	outFields->push(HX_HCSTRING("__statsCache","\xc3","\x7e","\x8e","\x82"));
	outFields->push(HX_HCSTRING("__stencilCompareMode","\x2c","\x4d","\xce","\x56"));
	outFields->push(HX_HCSTRING("__stencilRef","\xd7","\x33","\x94","\xf0"));
	outFields->push(HX_HCSTRING("__stencilReadMask","\x5e","\x22","\x86","\x68"));
	outFields->push(HX_HCSTRING("__stencilRenderBuffer","\xf2","\xf5","\x97","\x34"));
	outFields->push(HX_HCSTRING("__supportsPackedDepthStencil","\x95","\x74","\x8e","\xfa"));
	outFields->push(HX_HCSTRING("__vertexConstants","\x6b","\x1f","\x14","\xb9"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(Context3D_obj,backBufferHeight),HX_HCSTRING("backBufferHeight","\xce","\x3d","\x76","\xf3")},
	{hx::fsInt,(int)offsetof(Context3D_obj,backBufferWidth),HX_HCSTRING("backBufferWidth","\xff","\xf9","\x53","\x8c")},
	{hx::fsString,(int)offsetof(Context3D_obj,driverInfo),HX_HCSTRING("driverInfo","\xb6","\x18","\x7b","\xe3")},
	{hx::fsBool,(int)offsetof(Context3D_obj,enableErrorChecking),HX_HCSTRING("enableErrorChecking","\x7f","\x3c","\x19","\xba")},
	{hx::fsInt,(int)offsetof(Context3D_obj,maxBackBufferHeight),HX_HCSTRING("maxBackBufferHeight","\x92","\xac","\x2a","\x8e")},
	{hx::fsInt,(int)offsetof(Context3D_obj,maxBackBufferWidth),HX_HCSTRING("maxBackBufferWidth","\xbb","\x8f","\x62","\xbe")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Context3D_obj,profile),HX_HCSTRING("profile","\x29","\x49","\x49","\xf3")},
	{hx::fsInt,(int)offsetof(Context3D_obj,totalGPUMemory),HX_HCSTRING("totalGPUMemory","\xe9","\x89","\x1b","\x9c")},
	{hx::fsInt,(int)offsetof(Context3D_obj,__backBufferAntiAlias),HX_HCSTRING("__backBufferAntiAlias","\xe7","\x9b","\x20","\xbd")},
	{hx::fsBool,(int)offsetof(Context3D_obj,__backBufferEnableDepthAndStencil),HX_HCSTRING("__backBufferEnableDepthAndStencil","\x5e","\x16","\x47","\xce")},
	{hx::fsBool,(int)offsetof(Context3D_obj,__backBufferWantsBestResolution),HX_HCSTRING("__backBufferWantsBestResolution","\x0c","\x81","\x2c","\xec")},
	{hx::fsObject /*::lime::graphics::opengl::GLRenderbuffer*/ ,(int)offsetof(Context3D_obj,__depthRenderBuffer),HX_HCSTRING("__depthRenderBuffer","\x79","\x1f","\xfe","\x32")},
	{hx::fsObject /*::lime::graphics::opengl::GLRenderbuffer*/ ,(int)offsetof(Context3D_obj,__depthStencilRenderBuffer),HX_HCSTRING("__depthStencilRenderBuffer","\xef","\x9c","\xa8","\x76")},
	{hx::fsObject /*::lime::utils::ArrayBufferView*/ ,(int)offsetof(Context3D_obj,__fragmentConstants),HX_HCSTRING("__fragmentConstants","\x7f","\xa5","\xa6","\x65")},
	{hx::fsObject /*::lime::graphics::opengl::GLFramebuffer*/ ,(int)offsetof(Context3D_obj,__framebuffer),HX_HCSTRING("__framebuffer","\xcd","\x55","\xc0","\xc2")},
	{hx::fsInt,(int)offsetof(Context3D_obj,__frameCount),HX_HCSTRING("__frameCount","\x82","\xf4","\x1c","\x66")},
	{hx::fsObject /*::lime::utils::ArrayBufferView*/ ,(int)offsetof(Context3D_obj,__positionScale),HX_HCSTRING("__positionScale","\x01","\xd2","\x7f","\x6a")},
	{hx::fsObject /*::openfl::display3D::Program3D*/ ,(int)offsetof(Context3D_obj,__program),HX_HCSTRING("__program","\x64","\x9b","\x47","\x75")},
	{hx::fsObject /*::openfl::_internal::renderer::RenderSession*/ ,(int)offsetof(Context3D_obj,__renderSession),HX_HCSTRING("__renderSession","\x80","\xc3","\x37","\x17")},
	{hx::fsObject /*::openfl::display3D::textures::TextureBase*/ ,(int)offsetof(Context3D_obj,__renderToTexture),HX_HCSTRING("__renderToTexture","\x4a","\x8b","\x77","\x3a")},
	{hx::fsBool,(int)offsetof(Context3D_obj,__rttDepthAndStencil),HX_HCSTRING("__rttDepthAndStencil","\x96","\x47","\x37","\xce")},
	{hx::fsInt,(int)offsetof(Context3D_obj,__samplerDirty),HX_HCSTRING("__samplerDirty","\x0a","\x41","\x45","\x32")},
	{hx::fsObject /*::openfl::_Vector::ObjectVector*/ ,(int)offsetof(Context3D_obj,__samplerTextures),HX_HCSTRING("__samplerTextures","\x40","\xf1","\xfc","\x14")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Context3D_obj,__samplerStates),HX_HCSTRING("__samplerStates","\x4a","\xc1","\xd9","\x13")},
	{hx::fsObject /*::openfl::geom::Rectangle*/ ,(int)offsetof(Context3D_obj,__scissorRectangle),HX_HCSTRING("__scissorRectangle","\x93","\x3b","\xf9","\x77")},
	{hx::fsObject /*::openfl::display::Stage3D*/ ,(int)offsetof(Context3D_obj,__stage3D),HX_HCSTRING("__stage3D","\xcf","\x93","\x18","\xaf")},
	{hx::fsObject /*::openfl::_Vector::IntVector*/ ,(int)offsetof(Context3D_obj,__stats),HX_HCSTRING("__stats","\xff","\xce","\x69","\xee")},
	{hx::fsObject /*::openfl::_Vector::IntVector*/ ,(int)offsetof(Context3D_obj,__statsCache),HX_HCSTRING("__statsCache","\xc3","\x7e","\x8e","\x82")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Context3D_obj,__stencilCompareMode),HX_HCSTRING("__stencilCompareMode","\x2c","\x4d","\xce","\x56")},
	{hx::fsInt,(int)offsetof(Context3D_obj,__stencilRef),HX_HCSTRING("__stencilRef","\xd7","\x33","\x94","\xf0")},
	{hx::fsInt,(int)offsetof(Context3D_obj,__stencilReadMask),HX_HCSTRING("__stencilReadMask","\x5e","\x22","\x86","\x68")},
	{hx::fsObject /*::lime::graphics::opengl::GLRenderbuffer*/ ,(int)offsetof(Context3D_obj,__stencilRenderBuffer),HX_HCSTRING("__stencilRenderBuffer","\xf2","\xf5","\x97","\x34")},
	{hx::fsBool,(int)offsetof(Context3D_obj,__supportsPackedDepthStencil),HX_HCSTRING("__supportsPackedDepthStencil","\x95","\x74","\x8e","\xfa")},
	{hx::fsObject /*::lime::utils::ArrayBufferView*/ ,(int)offsetof(Context3D_obj,__vertexConstants),HX_HCSTRING("__vertexConstants","\x6b","\x1f","\x14","\xb9")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsBool,(void *) &Context3D_obj::supportsVideoTexture,HX_HCSTRING("supportsVideoTexture","\x44","\x35","\x75","\x67")},
	{hx::fsInt,(void *) &Context3D_obj::MAX_SAMPLERS,HX_HCSTRING("MAX_SAMPLERS","\xc6","\x92","\x84","\x06")},
	{hx::fsInt,(void *) &Context3D_obj::MAX_ATTRIBUTES,HX_HCSTRING("MAX_ATTRIBUTES","\xf2","\x89","\xd4","\x39")},
	{hx::fsInt,(void *) &Context3D_obj::MAX_PROGRAM_REGISTERS,HX_HCSTRING("MAX_PROGRAM_REGISTERS","\xfa","\x9b","\x3d","\x0f")},
	{hx::fsObject /*::openfl::_internal::stage3D::Context3DStateCache*/ ,(void *) &Context3D_obj::__stateCache,HX_HCSTRING("__stateCache","\x91","\x71","\x8f","\xe9")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("backBufferHeight","\xce","\x3d","\x76","\xf3"),
	HX_HCSTRING("backBufferWidth","\xff","\xf9","\x53","\x8c"),
	HX_HCSTRING("driverInfo","\xb6","\x18","\x7b","\xe3"),
	HX_HCSTRING("enableErrorChecking","\x7f","\x3c","\x19","\xba"),
	HX_HCSTRING("maxBackBufferHeight","\x92","\xac","\x2a","\x8e"),
	HX_HCSTRING("maxBackBufferWidth","\xbb","\x8f","\x62","\xbe"),
	HX_HCSTRING("profile","\x29","\x49","\x49","\xf3"),
	HX_HCSTRING("totalGPUMemory","\xe9","\x89","\x1b","\x9c"),
	HX_HCSTRING("__backBufferAntiAlias","\xe7","\x9b","\x20","\xbd"),
	HX_HCSTRING("__backBufferEnableDepthAndStencil","\x5e","\x16","\x47","\xce"),
	HX_HCSTRING("__backBufferWantsBestResolution","\x0c","\x81","\x2c","\xec"),
	HX_HCSTRING("__depthRenderBuffer","\x79","\x1f","\xfe","\x32"),
	HX_HCSTRING("__depthStencilRenderBuffer","\xef","\x9c","\xa8","\x76"),
	HX_HCSTRING("__fragmentConstants","\x7f","\xa5","\xa6","\x65"),
	HX_HCSTRING("__framebuffer","\xcd","\x55","\xc0","\xc2"),
	HX_HCSTRING("__frameCount","\x82","\xf4","\x1c","\x66"),
	HX_HCSTRING("__positionScale","\x01","\xd2","\x7f","\x6a"),
	HX_HCSTRING("__program","\x64","\x9b","\x47","\x75"),
	HX_HCSTRING("__renderSession","\x80","\xc3","\x37","\x17"),
	HX_HCSTRING("__renderToTexture","\x4a","\x8b","\x77","\x3a"),
	HX_HCSTRING("__rttDepthAndStencil","\x96","\x47","\x37","\xce"),
	HX_HCSTRING("__samplerDirty","\x0a","\x41","\x45","\x32"),
	HX_HCSTRING("__samplerTextures","\x40","\xf1","\xfc","\x14"),
	HX_HCSTRING("__samplerStates","\x4a","\xc1","\xd9","\x13"),
	HX_HCSTRING("__scissorRectangle","\x93","\x3b","\xf9","\x77"),
	HX_HCSTRING("__stage3D","\xcf","\x93","\x18","\xaf"),
	HX_HCSTRING("__stats","\xff","\xce","\x69","\xee"),
	HX_HCSTRING("__statsCache","\xc3","\x7e","\x8e","\x82"),
	HX_HCSTRING("__stencilCompareMode","\x2c","\x4d","\xce","\x56"),
	HX_HCSTRING("__stencilRef","\xd7","\x33","\x94","\xf0"),
	HX_HCSTRING("__stencilReadMask","\x5e","\x22","\x86","\x68"),
	HX_HCSTRING("__stencilRenderBuffer","\xf2","\xf5","\x97","\x34"),
	HX_HCSTRING("__supportsPackedDepthStencil","\x95","\x74","\x8e","\xfa"),
	HX_HCSTRING("__vertexConstants","\x6b","\x1f","\x14","\xb9"),
	HX_HCSTRING("clear","\x8d","\x71","\x5b","\x48"),
	HX_HCSTRING("configureBackBuffer","\x0d","\x3c","\x11","\x04"),
	HX_HCSTRING("createCubeTexture","\xca","\x46","\x30","\xc8"),
	HX_HCSTRING("createIndexBuffer","\x16","\x40","\x47","\x48"),
	HX_HCSTRING("createProgram","\xe8","\x22","\x3c","\xdc"),
	HX_HCSTRING("createRectangleTexture","\x88","\x8b","\xb3","\xf2"),
	HX_HCSTRING("createTexture","\x3f","\xa1","\x23","\x87"),
	HX_HCSTRING("createVertexBuffer","\xa0","\xec","\xc7","\x6a"),
	HX_HCSTRING("dispose","\x9f","\x80","\x4c","\xbb"),
	HX_HCSTRING("drawToBitmapData","\x38","\x55","\xb6","\xf4"),
	HX_HCSTRING("drawTriangles","\x07","\x44","\x68","\xde"),
	HX_HCSTRING("present","\xfb","\x3a","\xdc","\x39"),
	HX_HCSTRING("setBlendFactors","\x35","\x4b","\xcd","\xf5"),
	HX_HCSTRING("setColorMask","\xed","\x8b","\x13","\x48"),
	HX_HCSTRING("setCulling","\xee","\x06","\x67","\xa6"),
	HX_HCSTRING("setDepthTest","\xf3","\xe2","\xcc","\xc7"),
	HX_HCSTRING("setProgram","\x02","\x6f","\xd8","\x46"),
	HX_HCSTRING("setProgramConstantsFromByteArray","\x3a","\x1f","\x12","\xd4"),
	HX_HCSTRING("setProgramConstantsFromMatrix","\xd8","\xd0","\x45","\xbe"),
	HX_HCSTRING("setProgramConstantsFromVector","\x5a","\x4b","\xdb","\x99"),
	HX_HCSTRING("setRenderToBackBuffer","\x9a","\x84","\xfb","\xad"),
	HX_HCSTRING("setRenderToTexture","\xe8","\x2c","\x92","\x46"),
	HX_HCSTRING("setSamplerStateAt","\x7e","\x30","\x51","\xac"),
	HX_HCSTRING("setScissorRectangle","\x35","\x04","\x2c","\x03"),
	HX_HCSTRING("setStencilActions","\xa3","\xec","\xa6","\x2c"),
	HX_HCSTRING("setStencilReferenceValue","\xc0","\xdf","\xa3","\x11"),
	HX_HCSTRING("setTextureAt","\xac","\xee","\x98","\xd3"),
	HX_HCSTRING("setVertexBufferAt","\xd9","\x58","\xf9","\xc7"),
	HX_HCSTRING("__flushSamplerState","\xad","\xd1","\x48","\x4d"),
	HX_HCSTRING("__getGLCompareMode","\x4d","\xad","\x57","\x0d"),
	HX_HCSTRING("__getGLStencilAction","\xb7","\xa4","\x86","\x0d"),
	HX_HCSTRING("__hasGLExtension","\xa0","\xfe","\x45","\x9c"),
	HX_HCSTRING("__setViewport","\x08","\x57","\x7e","\x15"),
	HX_HCSTRING("__statsAdd","\x62","\x04","\xea","\x0b"),
	HX_HCSTRING("__statsClear","\x0e","\x56","\xd5","\x89"),
	HX_HCSTRING("__statsDecrement","\x14","\xaf","\x6e","\xa5"),
	HX_HCSTRING("__statsIncrement","\x30","\xbf","\xeb","\xc6"),
	HX_HCSTRING("__statsSendToTelemetry","\xd7","\xb8","\x7e","\x01"),
	HX_HCSTRING("__statsSubtract","\x33","\x97","\x22","\x32"),
	HX_HCSTRING("__updateDepthAndStencilState","\xf2","\x9d","\xe7","\xb2"),
	HX_HCSTRING("__updateBlendFactors","\x3c","\x4f","\x58","\x2e"),
	HX_HCSTRING("__updateScissorRectangle","\xbc","\x17","\x57","\x7f"),
	HX_HCSTRING("__updateBackbufferViewport","\x76","\x09","\xc0","\x09"),
	HX_HCSTRING("set_enableErrorChecking","\x22","\x4c","\xd0","\xc4"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Context3D_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Context3D_obj::supportsVideoTexture,"supportsVideoTexture");
	HX_MARK_MEMBER_NAME(Context3D_obj::MAX_SAMPLERS,"MAX_SAMPLERS");
	HX_MARK_MEMBER_NAME(Context3D_obj::MAX_ATTRIBUTES,"MAX_ATTRIBUTES");
	HX_MARK_MEMBER_NAME(Context3D_obj::MAX_PROGRAM_REGISTERS,"MAX_PROGRAM_REGISTERS");
	HX_MARK_MEMBER_NAME(Context3D_obj::__stateCache,"__stateCache");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Context3D_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Context3D_obj::supportsVideoTexture,"supportsVideoTexture");
	HX_VISIT_MEMBER_NAME(Context3D_obj::MAX_SAMPLERS,"MAX_SAMPLERS");
	HX_VISIT_MEMBER_NAME(Context3D_obj::MAX_ATTRIBUTES,"MAX_ATTRIBUTES");
	HX_VISIT_MEMBER_NAME(Context3D_obj::MAX_PROGRAM_REGISTERS,"MAX_PROGRAM_REGISTERS");
	HX_VISIT_MEMBER_NAME(Context3D_obj::__stateCache,"__stateCache");
};

#endif

hx::Class Context3D_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("supportsVideoTexture","\x44","\x35","\x75","\x67"),
	HX_HCSTRING("MAX_SAMPLERS","\xc6","\x92","\x84","\x06"),
	HX_HCSTRING("MAX_ATTRIBUTES","\xf2","\x89","\xd4","\x39"),
	HX_HCSTRING("MAX_PROGRAM_REGISTERS","\xfa","\x9b","\x3d","\x0f"),
	HX_HCSTRING("__stateCache","\x91","\x71","\x8f","\xe9"),
	::String(null()) };

void Context3D_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.display3D.Context3D","\xa7","\xbf","\xa0","\x2f");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Context3D_obj::__GetStatic;
	__mClass->mSetStaticField = &Context3D_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Context3D_obj >;
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

void Context3D_obj::__boot()
{
	supportsVideoTexture= false;
	MAX_SAMPLERS= (int)8;
	MAX_ATTRIBUTES= (int)16;
	MAX_PROGRAM_REGISTERS= (int)128;
	__stateCache= ::openfl::_internal::stage3D::Context3DStateCache_obj::__new();
}

} // end namespace openfl
} // end namespace display3D
