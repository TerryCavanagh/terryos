#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_cpp_Prime
#include <cpp/Prime.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime__backend_native_NativeRenderer
#include <lime/_backend/native/NativeRenderer.h>
#endif
#ifndef INCLUDED_lime__backend_native_NativeWindow
#include <lime/_backend/native/NativeWindow.h>
#endif
#ifndef INCLUDED_lime_graphics_GLRenderContext
#include <lime/graphics/GLRenderContext.h>
#endif
#ifndef INCLUDED_lime_graphics_Image
#include <lime/graphics/Image.h>
#endif
#ifndef INCLUDED_lime_graphics_ImageBuffer
#include <lime/graphics/ImageBuffer.h>
#endif
#ifndef INCLUDED_lime_graphics_ImageType
#include <lime/graphics/ImageType.h>
#endif
#ifndef INCLUDED_lime_graphics_RenderContext
#include <lime/graphics/RenderContext.h>
#endif
#ifndef INCLUDED_lime_graphics_Renderer
#include <lime/graphics/Renderer.h>
#endif
#ifndef INCLUDED_lime_graphics_RendererType
#include <lime/graphics/RendererType.h>
#endif
#ifndef INCLUDED_lime_graphics_cairo_Cairo
#include <lime/graphics/cairo/Cairo.h>
#endif
#ifndef INCLUDED_lime_graphics_cairo__CairoImageSurface_CairoImageSurface_Impl_
#include <lime/graphics/cairo/_CairoImageSurface/CairoImageSurface_Impl_.h>
#endif
#ifndef INCLUDED_lime_graphics_cairo__CairoSurface_CairoSurface_Impl_
#include <lime/graphics/cairo/_CairoSurface/CairoSurface_Impl_.h>
#endif
#ifndef INCLUDED_lime_math_Rectangle
#include <lime/math/Rectangle.h>
#endif
#ifndef INCLUDED_lime_ui_Window
#include <lime/ui/Window.h>
#endif
#ifndef INCLUDED_lime_utils_ArrayBufferView
#include <lime/utils/ArrayBufferView.h>
#endif
#ifndef INCLUDED_lime_utils_TAError
#include <lime/utils/TAError.h>
#endif
namespace lime{
namespace _backend{
namespace native{

Void NativeRenderer_obj::__construct(::lime::graphics::Renderer parent)
{
HX_STACK_FRAME("lime._backend.native.NativeRenderer","new",0x43f11223,"lime._backend.native.NativeRenderer.new","lime/_backend/native/NativeRenderer.hx",43,0x398cc96c)
HX_STACK_THIS(this)
HX_STACK_ARG(parent,"parent")
{
	HX_STACK_LINE(43)
	this->parent = parent;
}
;
	return null();
}

//NativeRenderer_obj::~NativeRenderer_obj() { }

Dynamic NativeRenderer_obj::__CreateEmpty() { return  new NativeRenderer_obj; }
hx::ObjectPtr< NativeRenderer_obj > NativeRenderer_obj::__new(::lime::graphics::Renderer parent)
{  hx::ObjectPtr< NativeRenderer_obj > _result_ = new NativeRenderer_obj();
	_result_->__construct(parent);
	return _result_;}

Dynamic NativeRenderer_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< NativeRenderer_obj > _result_ = new NativeRenderer_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void NativeRenderer_obj::create( ){
{
		HX_STACK_FRAME("lime._backend.native.NativeRenderer","create",0x10556119,"lime._backend.native.NativeRenderer.create","lime/_backend/native/NativeRenderer.hx",48,0x398cc96c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(51)
		this->handle = ((Dynamic)(::lime::_backend::native::NativeRenderer_obj::cffi_lime_renderer_create.call(hx::DynamicPtr(this->parent->window->backend->handle))));
		HX_STACK_LINE(53)
		::lime::graphics::Renderer tmp = this->parent;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(53)
		tmp->window->__scale = ::lime::_backend::native::NativeRenderer_obj::cffi_lime_renderer_get_scale.call(hx::DynamicPtr(this->handle));
		HX_STACK_LINE(63)
		::String type = ((Dynamic)(::lime::_backend::native::NativeRenderer_obj::cffi_lime_renderer_get_type.call(hx::DynamicPtr(this->handle))));		HX_STACK_VAR(type,"type");
		HX_STACK_LINE(65)
		::String tmp1 = type;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(65)
		::String _switch_1 = (tmp1);
		if (  ( _switch_1==HX_HCSTRING("opengl","\x6f","\x64","\x94","\x21"))){
			HX_STACK_LINE(69)
			this->useHardware = true;
			HX_STACK_LINE(70)
			::lime::graphics::GLRenderContext tmp2 = ::lime::graphics::GLRenderContext_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(70)
			::lime::graphics::RenderContext tmp3 = ::lime::graphics::RenderContext_obj::OPENGL(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(70)
			::lime::graphics::Renderer tmp4 = this->parent;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(70)
			tmp4->context = tmp3;
			HX_STACK_LINE(71)
			::lime::graphics::Renderer tmp5 = this->parent;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(71)
			tmp5->type = ::lime::graphics::RendererType_obj::OPENGL;
		}
		else  {
			HX_STACK_LINE(75)
			this->useHardware = false;
			HX_STACK_LINE(78)
			this->render();
			HX_STACK_LINE(79)
			::lime::graphics::cairo::Cairo tmp2 = this->cairo;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(79)
			::lime::graphics::RenderContext tmp3 = ::lime::graphics::RenderContext_obj::CAIRO(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(79)
			::lime::graphics::Renderer tmp4 = this->parent;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(79)
			tmp4->context = tmp3;
			HX_STACK_LINE(81)
			::lime::graphics::Renderer tmp5 = this->parent;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(81)
			tmp5->type = ::lime::graphics::RendererType_obj::CAIRO;
		}
;
;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(NativeRenderer_obj,create,(void))

Void NativeRenderer_obj::dispatch( ){
{
		HX_STACK_FRAME("lime._backend.native.NativeRenderer","dispatch",0xcbb24a17,"lime._backend.native.NativeRenderer.dispatch","lime/_backend/native/NativeRenderer.hx",91,0x398cc96c)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(NativeRenderer_obj,dispatch,(void))

Void NativeRenderer_obj::flip( ){
{
		HX_STACK_FRAME("lime._backend.native.NativeRenderer","flip",0x29ba5b8a,"lime._backend.native.NativeRenderer.flip","lime/_backend/native/NativeRenderer.hx",98,0x398cc96c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(101)
		bool tmp = this->useHardware;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(101)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(101)
		if ((tmp1)){
			HX_STACK_LINE(104)
			::lime::graphics::cairo::Cairo tmp2 = this->cairo;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(104)
			bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(104)
			if ((tmp3)){
				HX_STACK_LINE(106)
				Dynamic tmp4 = this->primarySurface;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(106)
				::lime::graphics::cairo::_CairoSurface::CairoSurface_Impl__obj::flush(tmp4);
			}
			HX_STACK_LINE(110)
			::lime::_backend::native::NativeRenderer_obj::cffi_lime_renderer_unlock.call(hx::DynamicPtr(this->handle));
		}
		HX_STACK_LINE(114)
		::lime::_backend::native::NativeRenderer_obj::cffi_lime_renderer_flip.call(hx::DynamicPtr(this->handle));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(NativeRenderer_obj,flip,(void))

::lime::graphics::Image NativeRenderer_obj::readPixels( ::lime::math::Rectangle rect){
	HX_STACK_FRAME("lime._backend.native.NativeRenderer","readPixels",0x008f9fc0,"lime._backend.native.NativeRenderer.readPixels","lime/_backend/native/NativeRenderer.hx",120,0x398cc96c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(rect,"rect")
	HX_STACK_LINE(122)
	Dynamic data = ((Dynamic)(::lime::_backend::native::NativeRenderer_obj::cffi_lime_renderer_read_pixels.call(hx::DynamicPtr(this->handle),hx::DynamicPtr(rect))));		HX_STACK_VAR(data,"data");
	HX_STACK_LINE(124)
	bool tmp = (data != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(124)
	if ((tmp)){
		HX_STACK_LINE(126)
		::lime::utils::ArrayBufferView tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(126)
		{
			HX_STACK_LINE(126)
			::haxe::io::Bytes tmp2 = ::haxe::io::Bytes_obj::__new(data->__Field(HX_HCSTRING("data","\x2a","\x56","\x63","\x42"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ),data->__Field(HX_HCSTRING("data","\x2a","\x56","\x63","\x42"), hx::paccDynamic )->__Field(HX_HCSTRING("b","\x62","\x00","\x00","\x00"), hx::paccDynamic ));		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(126)
			::haxe::io::Bytes buffer = tmp2;		HX_STACK_VAR(buffer,"buffer");
			HX_STACK_LINE(126)
			::lime::utils::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(126)
			bool tmp3 = false;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(126)
			if ((tmp3)){
				HX_STACK_LINE(126)
				::lime::utils::ArrayBufferView tmp4 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)4);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(126)
				this1 = tmp4;
			}
			else{
				HX_STACK_LINE(126)
				bool tmp4 = false;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(126)
				if ((tmp4)){
					HX_STACK_LINE(126)
					::lime::utils::ArrayBufferView tmp5;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(126)
					{
						HX_STACK_LINE(126)
						::lime::utils::ArrayBufferView tmp6 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(126)
						::lime::utils::ArrayBufferView _this = tmp6;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(126)
						_this->byteOffset = (int)0;
						HX_STACK_LINE(126)
						int tmp7 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(126)
						_this->length = tmp7;
						HX_STACK_LINE(126)
						int tmp8 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(126)
						_this->byteLength = tmp8;
						HX_STACK_LINE(126)
						::haxe::io::Bytes tmp9;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(126)
						{
							HX_STACK_LINE(126)
							::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
							HX_STACK_LINE(126)
							int tmp10 = _this->byteLength;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(126)
							::haxe::io::Bytes tmp11 = ::haxe::io::Bytes_obj::alloc(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(126)
							this2 = tmp11;
							HX_STACK_LINE(126)
							tmp9 = this2;
						}
						HX_STACK_LINE(126)
						_this->buffer = tmp9;
						HX_STACK_LINE(126)
						_this->copyFromArray(((Array< Float >)(null())),null());
						HX_STACK_LINE(126)
						tmp5 = _this;
					}
					HX_STACK_LINE(126)
					this1 = tmp5;
				}
				else{
					HX_STACK_LINE(126)
					bool tmp5 = false;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(126)
					if ((tmp5)){
						HX_STACK_LINE(126)
						::lime::utils::ArrayBufferView tmp6;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(126)
						{
							HX_STACK_LINE(126)
							::lime::utils::ArrayBufferView tmp7 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(126)
							::lime::utils::ArrayBufferView _this = tmp7;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(126)
							::haxe::io::Bytes tmp8 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(126)
							::haxe::io::Bytes srcData = tmp8;		HX_STACK_VAR(srcData,"srcData");
							HX_STACK_LINE(126)
							int tmp9 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(126)
							int srcLength = tmp9;		HX_STACK_VAR(srcLength,"srcLength");
							HX_STACK_LINE(126)
							int tmp10 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(126)
							int srcByteOffset = tmp10;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
							HX_STACK_LINE(126)
							int tmp11 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(126)
							int srcElementSize = tmp11;		HX_STACK_VAR(srcElementSize,"srcElementSize");
							HX_STACK_LINE(126)
							int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
							HX_STACK_LINE(126)
							int tmp12 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(126)
							int tmp13 = _this->type;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(126)
							bool tmp14 = (tmp12 == tmp13);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(126)
							if ((tmp14)){
								HX_STACK_LINE(126)
								int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
								HX_STACK_LINE(126)
								int tmp15 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(126)
								int cloneLength = tmp15;		HX_STACK_VAR(cloneLength,"cloneLength");
								HX_STACK_LINE(126)
								::haxe::io::Bytes tmp16;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(126)
								{
									HX_STACK_LINE(126)
									::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
									HX_STACK_LINE(126)
									int tmp17 = cloneLength;		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(126)
									::haxe::io::Bytes tmp18 = ::haxe::io::Bytes_obj::alloc(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(126)
									this2 = tmp18;
									HX_STACK_LINE(126)
									tmp16 = this2;
								}
								HX_STACK_LINE(126)
								_this->buffer = tmp16;
								HX_STACK_LINE(126)
								::haxe::io::Bytes tmp17 = srcData;		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(126)
								int tmp18 = srcByteOffset;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(126)
								int tmp19 = cloneLength;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(126)
								_this->buffer->blit((int)0,tmp17,tmp18,tmp19);
							}
							else{
								HX_STACK_LINE(126)
								HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
							}
							HX_STACK_LINE(126)
							int tmp15 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(126)
							_this->byteLength = tmp15;
							HX_STACK_LINE(126)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(126)
							_this->length = srcLength;
							HX_STACK_LINE(126)
							tmp6 = _this;
						}
						HX_STACK_LINE(126)
						this1 = tmp6;
					}
					else{
						HX_STACK_LINE(126)
						bool tmp6 = (buffer != null());		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(126)
						if ((tmp6)){
							HX_STACK_LINE(126)
							::lime::utils::ArrayBufferView tmp7;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(126)
							{
								HX_STACK_LINE(126)
								::lime::utils::ArrayBufferView tmp8 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(126)
								::lime::utils::ArrayBufferView _this = tmp8;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(126)
								bool tmp9 = false;		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(126)
								if ((tmp9)){
									HX_STACK_LINE(126)
									HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
								}
								HX_STACK_LINE(126)
								int tmp10 = hx::Mod((int)0,_this->bytesPerElement);		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(126)
								bool tmp11 = (tmp10 != (int)0);		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(126)
								if ((tmp11)){
									HX_STACK_LINE(126)
									HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
								}
								HX_STACK_LINE(126)
								int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
								HX_STACK_LINE(126)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(126)
								int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
								HX_STACK_LINE(126)
								bool tmp12 = true;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(126)
								if ((tmp12)){
									HX_STACK_LINE(126)
									int tmp13 = bufferByteLength;		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(126)
									newByteLength = tmp13;
									HX_STACK_LINE(126)
									int tmp14 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(126)
									bool tmp15 = (tmp14 != (int)0);		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(126)
									if ((tmp15)){
										HX_STACK_LINE(126)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(126)
									bool tmp16 = (newByteLength < (int)0);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(126)
									if ((tmp16)){
										HX_STACK_LINE(126)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
								}
								else{
									HX_STACK_LINE(126)
									int tmp13 = (null() * _this->bytesPerElement);		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(126)
									newByteLength = tmp13;
									HX_STACK_LINE(126)
									int tmp14 = newByteLength;		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(126)
									int newRange = tmp14;		HX_STACK_VAR(newRange,"newRange");
									HX_STACK_LINE(126)
									bool tmp15 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(126)
									if ((tmp15)){
										HX_STACK_LINE(126)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
								}
								HX_STACK_LINE(126)
								_this->buffer = buffer;
								HX_STACK_LINE(126)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(126)
								_this->byteLength = newByteLength;
								HX_STACK_LINE(126)
								Float tmp13 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(126)
								int tmp14 = ::Std_obj::_int(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(126)
								_this->length = tmp14;
								HX_STACK_LINE(126)
								tmp7 = _this;
							}
							HX_STACK_LINE(126)
							this1 = tmp7;
						}
						else{
							HX_STACK_LINE(126)
							HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for UInt8Array","\x6b","\x44","\xd5","\x85"));
						}
					}
				}
			}
			HX_STACK_LINE(126)
			tmp1 = this1;
		}
		HX_STACK_LINE(126)
		::lime::graphics::ImageBuffer tmp2 = ::lime::graphics::ImageBuffer_obj::__new(tmp1,data->__Field(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"), hx::paccDynamic ),data->__Field(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"), hx::paccDynamic ),data->__Field(HX_HCSTRING("bitsPerPixel","\x8f","\x4d","\xee","\x1c"), hx::paccDynamic ),null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(126)
		::lime::graphics::ImageBuffer buffer = tmp2;		HX_STACK_VAR(buffer,"buffer");
		HX_STACK_LINE(127)
		buffer->format = (int)0;
		HX_STACK_LINE(129)
		::lime::graphics::Image tmp3 = ::lime::graphics::Image_obj::__new(buffer,null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(129)
		return tmp3;
	}
	HX_STACK_LINE(133)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(NativeRenderer_obj,readPixels,return )

Void NativeRenderer_obj::render( ){
{
		HX_STACK_FRAME("lime._backend.native.NativeRenderer","render",0x996f6573,"lime._backend.native.NativeRenderer.render","lime/_backend/native/NativeRenderer.hx",138,0x398cc96c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(141)
		::lime::_backend::native::NativeRenderer_obj::cffi_lime_renderer_make_current.call(hx::DynamicPtr(this->handle));
		HX_STACK_LINE(143)
		bool tmp = this->useHardware;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(143)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(143)
		if ((tmp1)){
			HX_STACK_LINE(146)
			Dynamic lock = ((Dynamic)(::lime::_backend::native::NativeRenderer_obj::cffi_lime_renderer_lock.call(hx::DynamicPtr(this->handle))));		HX_STACK_VAR(lock,"lock");
			HX_STACK_LINE(148)
			Dynamic tmp2 = this->cacheLock;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(148)
			bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(148)
			bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(148)
			bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(148)
			bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(148)
			if ((tmp5)){
				HX_STACK_LINE(148)
				Dynamic tmp7 = this->cacheLock;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(148)
				Dynamic tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(148)
				Dynamic tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(148)
				tmp6 = (tmp9->__Field(HX_HCSTRING("pixels","\x2d","\xef","\xa9","\x8c"), hx::paccDynamic ) != lock->__Field(HX_HCSTRING("pixels","\x2d","\xef","\xa9","\x8c"), hx::paccDynamic ));
			}
			else{
				HX_STACK_LINE(148)
				tmp6 = true;
			}
			HX_STACK_LINE(148)
			bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(148)
			bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(148)
			bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(148)
			if ((tmp8)){
				HX_STACK_LINE(148)
				Dynamic tmp10 = this->cacheLock;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(148)
				Dynamic tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(148)
				Dynamic tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(148)
				tmp9 = (tmp12->__Field(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"), hx::paccDynamic ) != lock->__Field(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"), hx::paccDynamic ));
			}
			else{
				HX_STACK_LINE(148)
				tmp9 = true;
			}
			HX_STACK_LINE(148)
			bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(148)
			bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(148)
			if ((tmp10)){
				HX_STACK_LINE(148)
				Dynamic tmp12 = this->cacheLock;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(148)
				Dynamic tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(148)
				tmp11 = (tmp13->__Field(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"), hx::paccDynamic ) != lock->__Field(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"), hx::paccDynamic ));
			}
			else{
				HX_STACK_LINE(148)
				tmp11 = true;
			}
			HX_STACK_LINE(148)
			if ((tmp11)){
				HX_STACK_LINE(150)
				Dynamic tmp12 = ::lime::graphics::cairo::_CairoImageSurface::CairoImageSurface_Impl__obj::create(lock->__Field(HX_HCSTRING("pixels","\x2d","\xef","\xa9","\x8c"), hx::paccDynamic ),(int)0,lock->__Field(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"), hx::paccDynamic ),lock->__Field(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"), hx::paccDynamic ),lock->__Field(HX_HCSTRING("pitch","\xc0","\xbb","\xa0","\xc2"), hx::paccDynamic ));		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(150)
				this->primarySurface = tmp12;
				HX_STACK_LINE(152)
				::lime::graphics::cairo::Cairo tmp13 = this->cairo;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(152)
				bool tmp14 = (tmp13 != null());		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(152)
				if ((tmp14)){
					HX_STACK_LINE(154)
					::lime::graphics::cairo::Cairo tmp15 = this->cairo;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(154)
					Dynamic tmp16 = this->primarySurface;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(154)
					tmp15->recreate(tmp16);
				}
				else{
					HX_STACK_LINE(158)
					Dynamic tmp15 = this->primarySurface;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(158)
					::lime::graphics::cairo::Cairo tmp16 = ::lime::graphics::cairo::Cairo_obj::__new(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(158)
					this->cairo = tmp16;
				}
			}
			HX_STACK_LINE(164)
			this->cacheLock = lock;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(NativeRenderer_obj,render,(void))

Dynamic NativeRenderer_obj::lime_renderer_create( Dynamic window){
	HX_STACK_FRAME("lime._backend.native.NativeRenderer","lime_renderer_create",0xcf0a582b,"lime._backend.native.NativeRenderer.lime_renderer_create","lime/_backend/native/NativeRenderer.hx",183,0x398cc96c)
	HX_STACK_ARG(window,"window")
	HX_STACK_LINE(183)
	return ::lime::_backend::native::NativeRenderer_obj::cffi_lime_renderer_create.call(hx::DynamicPtr(window));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeRenderer_obj,lime_renderer_create,return )

Void NativeRenderer_obj::lime_renderer_flip( Dynamic handle){
{
		HX_STACK_FRAME("lime._backend.native.NativeRenderer","lime_renderer_flip",0xb8790a1c,"lime._backend.native.NativeRenderer.lime_renderer_flip","lime/_backend/native/NativeRenderer.hx",184,0x398cc96c)
		HX_STACK_ARG(handle,"handle")
		HX_STACK_LINE(184)
		::lime::_backend::native::NativeRenderer_obj::cffi_lime_renderer_flip.call(hx::DynamicPtr(handle));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeRenderer_obj,lime_renderer_flip,(void))

Float NativeRenderer_obj::lime_renderer_get_context( Dynamic handle){
	HX_STACK_FRAME("lime._backend.native.NativeRenderer","lime_renderer_get_context",0x0ef35a77,"lime._backend.native.NativeRenderer.lime_renderer_get_context","lime/_backend/native/NativeRenderer.hx",185,0x398cc96c)
	HX_STACK_ARG(handle,"handle")
	HX_STACK_LINE(185)
	return ::lime::_backend::native::NativeRenderer_obj::cffi_lime_renderer_get_context.call(hx::DynamicPtr(handle));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeRenderer_obj,lime_renderer_get_context,return )

Float NativeRenderer_obj::lime_renderer_get_scale( Dynamic handle){
	HX_STACK_FRAME("lime._backend.native.NativeRenderer","lime_renderer_get_scale",0x6d3ae112,"lime._backend.native.NativeRenderer.lime_renderer_get_scale","lime/_backend/native/NativeRenderer.hx",186,0x398cc96c)
	HX_STACK_ARG(handle,"handle")
	HX_STACK_LINE(186)
	return ::lime::_backend::native::NativeRenderer_obj::cffi_lime_renderer_get_scale.call(hx::DynamicPtr(handle));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeRenderer_obj,lime_renderer_get_scale,return )

Dynamic NativeRenderer_obj::lime_renderer_get_type( Dynamic handle){
	HX_STACK_FRAME("lime._backend.native.NativeRenderer","lime_renderer_get_type",0x09408932,"lime._backend.native.NativeRenderer.lime_renderer_get_type","lime/_backend/native/NativeRenderer.hx",187,0x398cc96c)
	HX_STACK_ARG(handle,"handle")
	HX_STACK_LINE(187)
	return ::lime::_backend::native::NativeRenderer_obj::cffi_lime_renderer_get_type.call(hx::DynamicPtr(handle));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeRenderer_obj,lime_renderer_get_type,return )

Dynamic NativeRenderer_obj::lime_renderer_lock( Dynamic handle){
	HX_STACK_FRAME("lime._backend.native.NativeRenderer","lime_renderer_lock",0xbc72935a,"lime._backend.native.NativeRenderer.lime_renderer_lock","lime/_backend/native/NativeRenderer.hx",188,0x398cc96c)
	HX_STACK_ARG(handle,"handle")
	HX_STACK_LINE(188)
	return ::lime::_backend::native::NativeRenderer_obj::cffi_lime_renderer_lock.call(hx::DynamicPtr(handle));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeRenderer_obj,lime_renderer_lock,return )

Void NativeRenderer_obj::lime_renderer_make_current( Dynamic handle){
{
		HX_STACK_FRAME("lime._backend.native.NativeRenderer","lime_renderer_make_current",0x92794c17,"lime._backend.native.NativeRenderer.lime_renderer_make_current","lime/_backend/native/NativeRenderer.hx",189,0x398cc96c)
		HX_STACK_ARG(handle,"handle")
		HX_STACK_LINE(189)
		::lime::_backend::native::NativeRenderer_obj::cffi_lime_renderer_make_current.call(hx::DynamicPtr(handle));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeRenderer_obj,lime_renderer_make_current,(void))

Dynamic NativeRenderer_obj::lime_renderer_read_pixels( Dynamic handle,Dynamic rect){
	HX_STACK_FRAME("lime._backend.native.NativeRenderer","lime_renderer_read_pixels",0xf03cd0a7,"lime._backend.native.NativeRenderer.lime_renderer_read_pixels","lime/_backend/native/NativeRenderer.hx",190,0x398cc96c)
	HX_STACK_ARG(handle,"handle")
	HX_STACK_ARG(rect,"rect")
	HX_STACK_LINE(190)
	return ::lime::_backend::native::NativeRenderer_obj::cffi_lime_renderer_read_pixels.call(hx::DynamicPtr(handle),hx::DynamicPtr(rect));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(NativeRenderer_obj,lime_renderer_read_pixels,return )

Void NativeRenderer_obj::lime_renderer_unlock( Dynamic handle){
{
		HX_STACK_FRAME("lime._backend.native.NativeRenderer","lime_renderer_unlock",0xb88793f3,"lime._backend.native.NativeRenderer.lime_renderer_unlock","lime/_backend/native/NativeRenderer.hx",191,0x398cc96c)
		HX_STACK_ARG(handle,"handle")
		HX_STACK_LINE(191)
		::lime::_backend::native::NativeRenderer_obj::cffi_lime_renderer_unlock.call(hx::DynamicPtr(handle));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeRenderer_obj,lime_renderer_unlock,(void))

::cpp::Function< ::hx::Object * ( ::hx::Object * ) > NativeRenderer_obj::cffi_lime_renderer_create;

::cpp::Function< void ( ::hx::Object * ) > NativeRenderer_obj::cffi_lime_renderer_flip;

::cpp::Function< Float ( ::hx::Object * ) > NativeRenderer_obj::cffi_lime_renderer_get_context;

::cpp::Function< Float ( ::hx::Object * ) > NativeRenderer_obj::cffi_lime_renderer_get_scale;

::cpp::Function< ::hx::Object * ( ::hx::Object * ) > NativeRenderer_obj::cffi_lime_renderer_get_type;

::cpp::Function< ::hx::Object * ( ::hx::Object * ) > NativeRenderer_obj::cffi_lime_renderer_lock;

::cpp::Function< void ( ::hx::Object * ) > NativeRenderer_obj::cffi_lime_renderer_make_current;

::cpp::Function< ::hx::Object * ( ::hx::Object * ,::hx::Object * ) > NativeRenderer_obj::cffi_lime_renderer_read_pixels;

::cpp::Function< void ( ::hx::Object * ) > NativeRenderer_obj::cffi_lime_renderer_unlock;


NativeRenderer_obj::NativeRenderer_obj()
{
}

void NativeRenderer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(NativeRenderer);
	HX_MARK_MEMBER_NAME(handle,"handle");
	HX_MARK_MEMBER_NAME(parent,"parent");
	HX_MARK_MEMBER_NAME(useHardware,"useHardware");
	HX_MARK_MEMBER_NAME(cacheLock,"cacheLock");
	HX_MARK_MEMBER_NAME(cairo,"cairo");
	HX_MARK_MEMBER_NAME(primarySurface,"primarySurface");
	HX_MARK_END_CLASS();
}

void NativeRenderer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(handle,"handle");
	HX_VISIT_MEMBER_NAME(parent,"parent");
	HX_VISIT_MEMBER_NAME(useHardware,"useHardware");
	HX_VISIT_MEMBER_NAME(cacheLock,"cacheLock");
	HX_VISIT_MEMBER_NAME(cairo,"cairo");
	HX_VISIT_MEMBER_NAME(primarySurface,"primarySurface");
}

Dynamic NativeRenderer_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"flip") ) { return flip_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"cairo") ) { return cairo; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"handle") ) { return handle; }
		if (HX_FIELD_EQ(inName,"parent") ) { return parent; }
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		if (HX_FIELD_EQ(inName,"render") ) { return render_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"dispatch") ) { return dispatch_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"cacheLock") ) { return cacheLock; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"readPixels") ) { return readPixels_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"useHardware") ) { return useHardware; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"primarySurface") ) { return primarySurface; }
	}
	return super::__Field(inName,inCallProp);
}

bool NativeRenderer_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 18:
		if (HX_FIELD_EQ(inName,"lime_renderer_flip") ) { outValue = lime_renderer_flip_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_renderer_lock") ) { outValue = lime_renderer_lock_dyn(); return true;  }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"lime_renderer_create") ) { outValue = lime_renderer_create_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_renderer_unlock") ) { outValue = lime_renderer_unlock_dyn(); return true;  }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"lime_renderer_get_type") ) { outValue = lime_renderer_get_type_dyn(); return true;  }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"lime_renderer_get_scale") ) { outValue = lime_renderer_get_scale_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_renderer_flip") ) { outValue = cffi_lime_renderer_flip; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_renderer_lock") ) { outValue = cffi_lime_renderer_lock; return true;  }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"lime_renderer_get_context") ) { outValue = lime_renderer_get_context_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_renderer_read_pixels") ) { outValue = lime_renderer_read_pixels_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_renderer_create") ) { outValue = cffi_lime_renderer_create; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_renderer_unlock") ) { outValue = cffi_lime_renderer_unlock; return true;  }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"lime_renderer_make_current") ) { outValue = lime_renderer_make_current_dyn(); return true;  }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"cffi_lime_renderer_get_type") ) { outValue = cffi_lime_renderer_get_type; return true;  }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"cffi_lime_renderer_get_scale") ) { outValue = cffi_lime_renderer_get_scale; return true;  }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"cffi_lime_renderer_get_context") ) { outValue = cffi_lime_renderer_get_context; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_renderer_read_pixels") ) { outValue = cffi_lime_renderer_read_pixels; return true;  }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"cffi_lime_renderer_make_current") ) { outValue = cffi_lime_renderer_make_current; return true;  }
	}
	return false;
}

Dynamic NativeRenderer_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"cairo") ) { cairo=inValue.Cast< ::lime::graphics::cairo::Cairo >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"handle") ) { handle=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"parent") ) { parent=inValue.Cast< ::lime::graphics::Renderer >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"cacheLock") ) { cacheLock=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"useHardware") ) { useHardware=inValue.Cast< bool >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"primarySurface") ) { primarySurface=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool NativeRenderer_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 23:
		if (HX_FIELD_EQ(inName,"cffi_lime_renderer_flip") ) { cffi_lime_renderer_flip=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_renderer_lock") ) { cffi_lime_renderer_lock=ioValue.Cast< ::cpp::Function< ::hx::Object * ( ::hx::Object * ) > >(); return true; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"cffi_lime_renderer_create") ) { cffi_lime_renderer_create=ioValue.Cast< ::cpp::Function< ::hx::Object * ( ::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_renderer_unlock") ) { cffi_lime_renderer_unlock=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ) > >(); return true; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"cffi_lime_renderer_get_type") ) { cffi_lime_renderer_get_type=ioValue.Cast< ::cpp::Function< ::hx::Object * ( ::hx::Object * ) > >(); return true; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"cffi_lime_renderer_get_scale") ) { cffi_lime_renderer_get_scale=ioValue.Cast< ::cpp::Function< Float ( ::hx::Object * ) > >(); return true; }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"cffi_lime_renderer_get_context") ) { cffi_lime_renderer_get_context=ioValue.Cast< ::cpp::Function< Float ( ::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_renderer_read_pixels") ) { cffi_lime_renderer_read_pixels=ioValue.Cast< ::cpp::Function< ::hx::Object * ( ::hx::Object * ,::hx::Object * ) > >(); return true; }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"cffi_lime_renderer_make_current") ) { cffi_lime_renderer_make_current=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ) > >(); return true; }
	}
	return false;
}

void NativeRenderer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("handle","\xa8","\x83","\xfd","\xb7"));
	outFields->push(HX_HCSTRING("parent","\x2a","\x05","\x7e","\xed"));
	outFields->push(HX_HCSTRING("useHardware","\x0f","\xea","\xde","\xcf"));
	outFields->push(HX_HCSTRING("cacheLock","\x4d","\xab","\x6c","\x43"));
	outFields->push(HX_HCSTRING("cairo","\x88","\x30","\x19","\x41"));
	outFields->push(HX_HCSTRING("primarySurface","\x8b","\xaa","\xee","\x10"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(NativeRenderer_obj,handle),HX_HCSTRING("handle","\xa8","\x83","\xfd","\xb7")},
	{hx::fsObject /*::lime::graphics::Renderer*/ ,(int)offsetof(NativeRenderer_obj,parent),HX_HCSTRING("parent","\x2a","\x05","\x7e","\xed")},
	{hx::fsBool,(int)offsetof(NativeRenderer_obj,useHardware),HX_HCSTRING("useHardware","\x0f","\xea","\xde","\xcf")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(NativeRenderer_obj,cacheLock),HX_HCSTRING("cacheLock","\x4d","\xab","\x6c","\x43")},
	{hx::fsObject /*::lime::graphics::cairo::Cairo*/ ,(int)offsetof(NativeRenderer_obj,cairo),HX_HCSTRING("cairo","\x88","\x30","\x19","\x41")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(NativeRenderer_obj,primarySurface),HX_HCSTRING("primarySurface","\x8b","\xaa","\xee","\x10")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::cpp::Function< ::hx::Object * ( ::hx::Object * ) >*/ ,(void *) &NativeRenderer_obj::cffi_lime_renderer_create,HX_HCSTRING("cffi_lime_renderer_create","\xc7","\x6a","\x82","\x36")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ) >*/ ,(void *) &NativeRenderer_obj::cffi_lime_renderer_flip,HX_HCSTRING("cffi_lime_renderer_flip","\xb8","\xfd","\x97","\xe3")},
	{hx::fsObject /*::cpp::Function< Float ( ::hx::Object * ) >*/ ,(void *) &NativeRenderer_obj::cffi_lime_renderer_get_context,HX_HCSTRING("cffi_lime_renderer_get_context","\x5b","\x52","\xa6","\x60")},
	{hx::fsObject /*::cpp::Function< Float ( ::hx::Object * ) >*/ ,(void *) &NativeRenderer_obj::cffi_lime_renderer_get_scale,HX_HCSTRING("cffi_lime_renderer_get_scale","\xf6","\x57","\xb7","\x4d")},
	{hx::fsObject /*::cpp::Function< ::hx::Object * ( ::hx::Object * ) >*/ ,(void *) &NativeRenderer_obj::cffi_lime_renderer_get_type,HX_HCSTRING("cffi_lime_renderer_get_type","\xce","\x7a","\xd7","\x4c")},
	{hx::fsObject /*::cpp::Function< ::hx::Object * ( ::hx::Object * ) >*/ ,(void *) &NativeRenderer_obj::cffi_lime_renderer_lock,HX_HCSTRING("cffi_lime_renderer_lock","\xf6","\x86","\x91","\xe7")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ) >*/ ,(void *) &NativeRenderer_obj::cffi_lime_renderer_make_current,HX_HCSTRING("cffi_lime_renderer_make_current","\xb3","\x3b","\x5f","\xbd")},
	{hx::fsObject /*::cpp::Function< ::hx::Object * ( ::hx::Object * ,::hx::Object * ) >*/ ,(void *) &NativeRenderer_obj::cffi_lime_renderer_read_pixels,HX_HCSTRING("cffi_lime_renderer_read_pixels","\x8b","\xc8","\xef","\x41")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ) >*/ ,(void *) &NativeRenderer_obj::cffi_lime_renderer_unlock,HX_HCSTRING("cffi_lime_renderer_unlock","\x8f","\xa6","\xff","\x1f")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("handle","\xa8","\x83","\xfd","\xb7"),
	HX_HCSTRING("parent","\x2a","\x05","\x7e","\xed"),
	HX_HCSTRING("useHardware","\x0f","\xea","\xde","\xcf"),
	HX_HCSTRING("cacheLock","\x4d","\xab","\x6c","\x43"),
	HX_HCSTRING("cairo","\x88","\x30","\x19","\x41"),
	HX_HCSTRING("primarySurface","\x8b","\xaa","\xee","\x10"),
	HX_HCSTRING("create","\xfc","\x66","\x0f","\x7c"),
	HX_HCSTRING("dispatch","\xba","\xce","\x63","\x1e"),
	HX_HCSTRING("flip","\xad","\x12","\xbe","\x43"),
	HX_HCSTRING("readPixels","\x23","\xd3","\x25","\x86"),
	HX_HCSTRING("render","\x56","\x6b","\x29","\x05"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(NativeRenderer_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(NativeRenderer_obj::cffi_lime_renderer_create,"cffi_lime_renderer_create");
	HX_MARK_MEMBER_NAME(NativeRenderer_obj::cffi_lime_renderer_flip,"cffi_lime_renderer_flip");
	HX_MARK_MEMBER_NAME(NativeRenderer_obj::cffi_lime_renderer_get_context,"cffi_lime_renderer_get_context");
	HX_MARK_MEMBER_NAME(NativeRenderer_obj::cffi_lime_renderer_get_scale,"cffi_lime_renderer_get_scale");
	HX_MARK_MEMBER_NAME(NativeRenderer_obj::cffi_lime_renderer_get_type,"cffi_lime_renderer_get_type");
	HX_MARK_MEMBER_NAME(NativeRenderer_obj::cffi_lime_renderer_lock,"cffi_lime_renderer_lock");
	HX_MARK_MEMBER_NAME(NativeRenderer_obj::cffi_lime_renderer_make_current,"cffi_lime_renderer_make_current");
	HX_MARK_MEMBER_NAME(NativeRenderer_obj::cffi_lime_renderer_read_pixels,"cffi_lime_renderer_read_pixels");
	HX_MARK_MEMBER_NAME(NativeRenderer_obj::cffi_lime_renderer_unlock,"cffi_lime_renderer_unlock");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(NativeRenderer_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(NativeRenderer_obj::cffi_lime_renderer_create,"cffi_lime_renderer_create");
	HX_VISIT_MEMBER_NAME(NativeRenderer_obj::cffi_lime_renderer_flip,"cffi_lime_renderer_flip");
	HX_VISIT_MEMBER_NAME(NativeRenderer_obj::cffi_lime_renderer_get_context,"cffi_lime_renderer_get_context");
	HX_VISIT_MEMBER_NAME(NativeRenderer_obj::cffi_lime_renderer_get_scale,"cffi_lime_renderer_get_scale");
	HX_VISIT_MEMBER_NAME(NativeRenderer_obj::cffi_lime_renderer_get_type,"cffi_lime_renderer_get_type");
	HX_VISIT_MEMBER_NAME(NativeRenderer_obj::cffi_lime_renderer_lock,"cffi_lime_renderer_lock");
	HX_VISIT_MEMBER_NAME(NativeRenderer_obj::cffi_lime_renderer_make_current,"cffi_lime_renderer_make_current");
	HX_VISIT_MEMBER_NAME(NativeRenderer_obj::cffi_lime_renderer_read_pixels,"cffi_lime_renderer_read_pixels");
	HX_VISIT_MEMBER_NAME(NativeRenderer_obj::cffi_lime_renderer_unlock,"cffi_lime_renderer_unlock");
};

#endif

hx::Class NativeRenderer_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("lime_renderer_create","\x4e","\xc5","\x81","\x91"),
	HX_HCSTRING("lime_renderer_flip","\x7f","\xd8","\x55","\x6f"),
	HX_HCSTRING("lime_renderer_get_context","\x74","\x6e","\xee","\xe1"),
	HX_HCSTRING("lime_renderer_get_scale","\xcf","\x0b","\x88","\x72"),
	HX_HCSTRING("lime_renderer_get_type","\x15","\xc5","\x47","\xea"),
	HX_HCSTRING("lime_renderer_lock","\xbd","\x61","\x4f","\x73"),
	HX_HCSTRING("lime_renderer_make_current","\x7a","\xb5","\x2f","\x5b"),
	HX_HCSTRING("lime_renderer_read_pixels","\xa4","\xe4","\x37","\xc3"),
	HX_HCSTRING("lime_renderer_unlock","\x16","\x01","\xff","\x7a"),
	HX_HCSTRING("cffi_lime_renderer_create","\xc7","\x6a","\x82","\x36"),
	HX_HCSTRING("cffi_lime_renderer_flip","\xb8","\xfd","\x97","\xe3"),
	HX_HCSTRING("cffi_lime_renderer_get_context","\x5b","\x52","\xa6","\x60"),
	HX_HCSTRING("cffi_lime_renderer_get_scale","\xf6","\x57","\xb7","\x4d"),
	HX_HCSTRING("cffi_lime_renderer_get_type","\xce","\x7a","\xd7","\x4c"),
	HX_HCSTRING("cffi_lime_renderer_lock","\xf6","\x86","\x91","\xe7"),
	HX_HCSTRING("cffi_lime_renderer_make_current","\xb3","\x3b","\x5f","\xbd"),
	HX_HCSTRING("cffi_lime_renderer_read_pixels","\x8b","\xc8","\xef","\x41"),
	HX_HCSTRING("cffi_lime_renderer_unlock","\x8f","\xa6","\xff","\x1f"),
	::String(null()) };

void NativeRenderer_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime._backend.native.NativeRenderer","\xb1","\xc4","\x96","\xae");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &NativeRenderer_obj::__GetStatic;
	__mClass->mSetStaticField = &NativeRenderer_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< NativeRenderer_obj >;
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

void NativeRenderer_obj::__boot()
{
	cffi_lime_renderer_create= ::cpp::Function< ::hx::Object * ( ::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_renderer_create","\x4e","\xc5","\x81","\x91"),HX_HCSTRING("oo","\x20","\x61","\x00","\x00"),false));
	cffi_lime_renderer_flip= ::cpp::Function< void ( ::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_renderer_flip","\x7f","\xd8","\x55","\x6f"),HX_HCSTRING("ov","\x27","\x61","\x00","\x00"),false));
	cffi_lime_renderer_get_context= ::cpp::Function< Float ( ::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_renderer_get_context","\x74","\x6e","\xee","\xe1"),HX_HCSTRING("od","\x15","\x61","\x00","\x00"),false));
	cffi_lime_renderer_get_scale= ::cpp::Function< Float ( ::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_renderer_get_scale","\xcf","\x0b","\x88","\x72"),HX_HCSTRING("od","\x15","\x61","\x00","\x00"),false));
	cffi_lime_renderer_get_type= ::cpp::Function< ::hx::Object * ( ::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_renderer_get_type","\x15","\xc5","\x47","\xea"),HX_HCSTRING("oo","\x20","\x61","\x00","\x00"),false));
	cffi_lime_renderer_lock= ::cpp::Function< ::hx::Object * ( ::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_renderer_lock","\xbd","\x61","\x4f","\x73"),HX_HCSTRING("oo","\x20","\x61","\x00","\x00"),false));
	cffi_lime_renderer_make_current= ::cpp::Function< void ( ::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_renderer_make_current","\x7a","\xb5","\x2f","\x5b"),HX_HCSTRING("ov","\x27","\x61","\x00","\x00"),false));
	cffi_lime_renderer_read_pixels= ::cpp::Function< ::hx::Object * ( ::hx::Object * ,::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_renderer_read_pixels","\xa4","\xe4","\x37","\xc3"),HX_HCSTRING("ooo","\x4f","\x9b","\x54","\x00"),false));
	cffi_lime_renderer_unlock= ::cpp::Function< void ( ::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_renderer_unlock","\x16","\x01","\xff","\x7a"),HX_HCSTRING("ov","\x27","\x61","\x00","\x00"),false));
}

} // end namespace lime
} // end namespace _backend
} // end namespace native
