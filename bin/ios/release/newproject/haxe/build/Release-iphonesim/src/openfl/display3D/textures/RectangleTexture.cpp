#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_graphics_Image
#include <lime/graphics/Image.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GL
#include <lime/graphics/opengl/GL.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLObject
#include <lime/graphics/opengl/GLObject.h>
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
#ifndef INCLUDED_openfl__internal_stage3D_GLUtils
#include <openfl/_internal/stage3D/GLUtils.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display3D_Context3D
#include <openfl/display3D/Context3D.h>
#endif
#ifndef INCLUDED_openfl_display3D_textures_RectangleTexture
#include <openfl/display3D/textures/RectangleTexture.h>
#endif
#ifndef INCLUDED_openfl_display3D_textures_TextureBase
#include <openfl/display3D/textures/TextureBase.h>
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
namespace textures{

Void RectangleTexture_obj::__construct(::openfl::display3D::Context3D context,int width,int height,::String format,bool optimizeForRenderToTexture)
{
HX_STACK_FRAME("openfl.display3D.textures.RectangleTexture","new",0xcccbdd5b,"openfl.display3D.textures.RectangleTexture.new","openfl/display3D/textures/RectangleTexture.hx",23,0x83565556)
HX_STACK_THIS(this)
HX_STACK_ARG(context,"context")
HX_STACK_ARG(width,"width")
HX_STACK_ARG(height,"height")
HX_STACK_ARG(format,"format")
HX_STACK_ARG(optimizeForRenderToTexture,"optimizeForRenderToTexture")
{
	HX_STACK_LINE(25)
	::openfl::display3D::Context3D tmp = context;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(25)
	super::__construct(tmp,(int)3553);
	HX_STACK_LINE(27)
	this->__width = width;
	HX_STACK_LINE(28)
	this->__height = height;
	HX_STACK_LINE(30)
	this->__optimizeForRenderToTexture = optimizeForRenderToTexture;
	HX_STACK_LINE(32)
	this->uploadFromTypedArray(null());
}
;
	return null();
}

//RectangleTexture_obj::~RectangleTexture_obj() { }

Dynamic RectangleTexture_obj::__CreateEmpty() { return  new RectangleTexture_obj; }
hx::ObjectPtr< RectangleTexture_obj > RectangleTexture_obj::__new(::openfl::display3D::Context3D context,int width,int height,::String format,bool optimizeForRenderToTexture)
{  hx::ObjectPtr< RectangleTexture_obj > _result_ = new RectangleTexture_obj();
	_result_->__construct(context,width,height,format,optimizeForRenderToTexture);
	return _result_;}

Dynamic RectangleTexture_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< RectangleTexture_obj > _result_ = new RectangleTexture_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return _result_;}

Void RectangleTexture_obj::uploadFromBitmapData( ::openfl::display::BitmapData source){
{
		HX_STACK_FRAME("openfl.display3D.textures.RectangleTexture","uploadFromBitmapData",0x711b2e49,"openfl.display3D.textures.RectangleTexture.uploadFromBitmapData","openfl/display3D/textures/RectangleTexture.hx",37,0x83565556)
		HX_STACK_THIS(this)
		HX_STACK_ARG(source,"source")
		HX_STACK_LINE(39)
		bool tmp = (source == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(39)
		if ((tmp)){
			HX_STACK_LINE(39)
			return null();
		}
		HX_STACK_LINE(41)
		::lime::graphics::Image image = source->image;		HX_STACK_VAR(image,"image");
		HX_STACK_LINE(43)
		bool tmp1 = (image == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(43)
		if ((tmp1)){
			HX_STACK_LINE(43)
			return null();
		}
		HX_STACK_LINE(45)
		bool tmp2 = image->get_premultiplied();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(45)
		bool tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(45)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(45)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(45)
		if ((tmp4)){
			HX_STACK_LINE(45)
			tmp5 = image->get_transparent();
		}
		else{
			HX_STACK_LINE(45)
			tmp5 = false;
		}
		HX_STACK_LINE(45)
		if ((tmp5)){
			HX_STACK_LINE(47)
			::lime::graphics::Image tmp6 = image->clone();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(47)
			image = tmp6;
			HX_STACK_LINE(48)
			image->set_premultiplied(true);
		}
		HX_STACK_LINE(52)
		::lime::utils::ArrayBufferView tmp6 = image->get_data();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(52)
		this->uploadFromTypedArray(tmp6);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(RectangleTexture_obj,uploadFromBitmapData,(void))

Void RectangleTexture_obj::uploadFromByteArray( ::openfl::utils::ByteArrayData data,int byteArrayOffset){
{
		HX_STACK_FRAME("openfl.display3D.textures.RectangleTexture","uploadFromByteArray",0xfd7a0ae1,"openfl.display3D.textures.RectangleTexture.uploadFromByteArray","openfl/display3D/textures/RectangleTexture.hx",57,0x83565556)
		HX_STACK_THIS(this)
		HX_STACK_ARG(data,"data")
		HX_STACK_ARG(byteArrayOffset,"byteArrayOffset")
		HX_STACK_LINE(68)
		::lime::utils::ArrayBufferView tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(68)
		{
			HX_STACK_LINE(68)
			::openfl::utils::ByteArrayData tmp1 = data;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(68)
			::haxe::io::Bytes tmp2 = ::openfl::utils::_ByteArray::ByteArray_Impl__obj::toArrayBuffer(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(68)
			::haxe::io::Bytes buffer = tmp2;		HX_STACK_VAR(buffer,"buffer");
			HX_STACK_LINE(68)
			::lime::utils::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(68)
			bool tmp3 = false;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(68)
			if ((tmp3)){
				HX_STACK_LINE(68)
				::lime::utils::ArrayBufferView tmp4 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)4);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(68)
				this1 = tmp4;
			}
			else{
				HX_STACK_LINE(68)
				bool tmp4 = false;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(68)
				if ((tmp4)){
					HX_STACK_LINE(68)
					::lime::utils::ArrayBufferView tmp5;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(68)
					{
						HX_STACK_LINE(68)
						::lime::utils::ArrayBufferView tmp6 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(68)
						::lime::utils::ArrayBufferView _this = tmp6;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(68)
						_this->byteOffset = (int)0;
						HX_STACK_LINE(68)
						int tmp7 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(68)
						_this->length = tmp7;
						HX_STACK_LINE(68)
						int tmp8 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(68)
						_this->byteLength = tmp8;
						HX_STACK_LINE(68)
						::haxe::io::Bytes tmp9;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(68)
						{
							HX_STACK_LINE(68)
							::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
							HX_STACK_LINE(68)
							int tmp10 = _this->byteLength;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(68)
							::haxe::io::Bytes tmp11 = ::haxe::io::Bytes_obj::alloc(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(68)
							this2 = tmp11;
							HX_STACK_LINE(68)
							tmp9 = this2;
						}
						HX_STACK_LINE(68)
						_this->buffer = tmp9;
						HX_STACK_LINE(68)
						_this->copyFromArray(((Array< Float >)(null())),null());
						HX_STACK_LINE(68)
						tmp5 = _this;
					}
					HX_STACK_LINE(68)
					this1 = tmp5;
				}
				else{
					HX_STACK_LINE(68)
					bool tmp5 = false;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(68)
					if ((tmp5)){
						HX_STACK_LINE(68)
						::lime::utils::ArrayBufferView tmp6;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(68)
						{
							HX_STACK_LINE(68)
							::lime::utils::ArrayBufferView tmp7 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(68)
							::lime::utils::ArrayBufferView _this = tmp7;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(68)
							::haxe::io::Bytes tmp8 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(68)
							::haxe::io::Bytes srcData = tmp8;		HX_STACK_VAR(srcData,"srcData");
							HX_STACK_LINE(68)
							int tmp9 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(68)
							int srcLength = tmp9;		HX_STACK_VAR(srcLength,"srcLength");
							HX_STACK_LINE(68)
							int tmp10 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(68)
							int srcByteOffset = tmp10;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
							HX_STACK_LINE(68)
							int tmp11 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(68)
							int srcElementSize = tmp11;		HX_STACK_VAR(srcElementSize,"srcElementSize");
							HX_STACK_LINE(68)
							int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
							HX_STACK_LINE(68)
							int tmp12 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(68)
							int tmp13 = _this->type;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(68)
							bool tmp14 = (tmp12 == tmp13);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(68)
							if ((tmp14)){
								HX_STACK_LINE(68)
								int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
								HX_STACK_LINE(68)
								int tmp15 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(68)
								int cloneLength = tmp15;		HX_STACK_VAR(cloneLength,"cloneLength");
								HX_STACK_LINE(68)
								::haxe::io::Bytes tmp16;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(68)
								{
									HX_STACK_LINE(68)
									::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
									HX_STACK_LINE(68)
									int tmp17 = cloneLength;		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(68)
									::haxe::io::Bytes tmp18 = ::haxe::io::Bytes_obj::alloc(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(68)
									this2 = tmp18;
									HX_STACK_LINE(68)
									tmp16 = this2;
								}
								HX_STACK_LINE(68)
								_this->buffer = tmp16;
								HX_STACK_LINE(68)
								::haxe::io::Bytes tmp17 = srcData;		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(68)
								int tmp18 = srcByteOffset;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(68)
								int tmp19 = cloneLength;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(68)
								_this->buffer->blit((int)0,tmp17,tmp18,tmp19);
							}
							else{
								HX_STACK_LINE(68)
								HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
							}
							HX_STACK_LINE(68)
							int tmp15 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(68)
							_this->byteLength = tmp15;
							HX_STACK_LINE(68)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(68)
							_this->length = srcLength;
							HX_STACK_LINE(68)
							tmp6 = _this;
						}
						HX_STACK_LINE(68)
						this1 = tmp6;
					}
					else{
						HX_STACK_LINE(68)
						bool tmp6 = (buffer != null());		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(68)
						if ((tmp6)){
							HX_STACK_LINE(68)
							::lime::utils::ArrayBufferView tmp7;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(68)
							{
								HX_STACK_LINE(68)
								::lime::utils::ArrayBufferView tmp8 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(68)
								::lime::utils::ArrayBufferView _this = tmp8;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(68)
								bool tmp9 = (byteArrayOffset < (int)0);		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(68)
								if ((tmp9)){
									HX_STACK_LINE(68)
									HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
								}
								HX_STACK_LINE(68)
								int tmp10 = hx::Mod(byteArrayOffset,_this->bytesPerElement);		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(68)
								bool tmp11 = (tmp10 != (int)0);		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(68)
								if ((tmp11)){
									HX_STACK_LINE(68)
									HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
								}
								HX_STACK_LINE(68)
								int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
								HX_STACK_LINE(68)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(68)
								int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
								HX_STACK_LINE(68)
								bool tmp12 = true;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(68)
								if ((tmp12)){
									HX_STACK_LINE(68)
									int tmp13 = (bufferByteLength - byteArrayOffset);		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(68)
									newByteLength = tmp13;
									HX_STACK_LINE(68)
									int tmp14 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(68)
									bool tmp15 = (tmp14 != (int)0);		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(68)
									if ((tmp15)){
										HX_STACK_LINE(68)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(68)
									bool tmp16 = (newByteLength < (int)0);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(68)
									if ((tmp16)){
										HX_STACK_LINE(68)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
								}
								else{
									HX_STACK_LINE(68)
									int tmp13 = (null() * _this->bytesPerElement);		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(68)
									newByteLength = tmp13;
									HX_STACK_LINE(68)
									int tmp14 = (byteArrayOffset + newByteLength);		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(68)
									int newRange = tmp14;		HX_STACK_VAR(newRange,"newRange");
									HX_STACK_LINE(68)
									bool tmp15 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(68)
									if ((tmp15)){
										HX_STACK_LINE(68)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
								}
								HX_STACK_LINE(68)
								_this->buffer = buffer;
								HX_STACK_LINE(68)
								_this->byteOffset = byteArrayOffset;
								HX_STACK_LINE(68)
								_this->byteLength = newByteLength;
								HX_STACK_LINE(68)
								Float tmp13 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(68)
								int tmp14 = ::Std_obj::_int(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(68)
								_this->length = tmp14;
								HX_STACK_LINE(68)
								tmp7 = _this;
							}
							HX_STACK_LINE(68)
							this1 = tmp7;
						}
						else{
							HX_STACK_LINE(68)
							HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for UInt8Array","\x6b","\x44","\xd5","\x85"));
						}
					}
				}
			}
			HX_STACK_LINE(68)
			tmp = this1;
		}
		HX_STACK_LINE(68)
		this->uploadFromTypedArray(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(RectangleTexture_obj,uploadFromByteArray,(void))

Void RectangleTexture_obj::uploadFromTypedArray( ::lime::utils::ArrayBufferView data){
{
		HX_STACK_FRAME("openfl.display3D.textures.RectangleTexture","uploadFromTypedArray",0x35aa255f,"openfl.display3D.textures.RectangleTexture.uploadFromTypedArray","openfl/display3D/textures/RectangleTexture.hx",73,0x83565556)
		HX_STACK_THIS(this)
		HX_STACK_ARG(data,"data")
		HX_STACK_LINE(81)
		{
			HX_STACK_LINE(81)
			::lime::graphics::opengl::GLTexture tmp = this->__textureID;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(81)
			::lime::graphics::opengl::GLTexture texture = tmp;		HX_STACK_VAR(texture,"texture");
			HX_STACK_LINE(81)
			::lime::graphics::opengl::GL_obj::cffi_lime_gl_bind_texture.call(this->__textureTarget,hx::DynamicPtr((  (((texture == null()))) ? Dynamic(null()) : Dynamic(texture->id) )));
		}
		HX_STACK_LINE(82)
		::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
		HX_STACK_LINE(84)
		{
			HX_STACK_LINE(84)
			bool tmp = (data == null());		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(84)
			::haxe::io::Bytes tmp1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(84)
			if ((tmp)){
				HX_STACK_LINE(84)
				tmp1 = null();
			}
			else{
				HX_STACK_LINE(84)
				tmp1 = data->buffer;
			}
			HX_STACK_LINE(84)
			::haxe::io::Bytes buffer = tmp1;		HX_STACK_VAR(buffer,"buffer");
			HX_STACK_LINE(84)
			::lime::graphics::opengl::GL_obj::cffi_lime_gl_tex_image_2d.call(this->__textureTarget,(int)0,this->__internalFormat,this->__width,this->__height,(int)0,this->__format,(int)5121,hx::DynamicPtr(buffer),(  (((data == null()))) ? int((int)0) : int(data->byteOffset) ));
		}
		HX_STACK_LINE(85)
		::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
		HX_STACK_LINE(87)
		::lime::graphics::opengl::GL_obj::cffi_lime_gl_bind_texture.call(this->__textureTarget,hx::DynamicPtr(null()));
		HX_STACK_LINE(88)
		::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
		HX_STACK_LINE(90)
		int tmp = this->__width;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(90)
		int tmp1 = this->__height;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(90)
		int tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(90)
		int tmp3 = (tmp2 * (int)4);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(90)
		int memUsage = tmp3;		HX_STACK_VAR(memUsage,"memUsage");
		HX_STACK_LINE(91)
		int tmp4 = memUsage;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(91)
		this->__trackMemoryUsage(tmp4);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(RectangleTexture_obj,uploadFromTypedArray,(void))


RectangleTexture_obj::RectangleTexture_obj()
{
}

Dynamic RectangleTexture_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"__width") ) { return __width; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__height") ) { return __height; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"uploadFromByteArray") ) { return uploadFromByteArray_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"uploadFromBitmapData") ) { return uploadFromBitmapData_dyn(); }
		if (HX_FIELD_EQ(inName,"uploadFromTypedArray") ) { return uploadFromTypedArray_dyn(); }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"__optimizeForRenderToTexture") ) { return __optimizeForRenderToTexture; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic RectangleTexture_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"__width") ) { __width=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__height") ) { __height=inValue.Cast< int >(); return inValue; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"__optimizeForRenderToTexture") ) { __optimizeForRenderToTexture=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void RectangleTexture_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("__height","\x07","\x73","\x7b","\xaa"));
	outFields->push(HX_HCSTRING("__optimizeForRenderToTexture","\xbe","\xd4","\x90","\xb3"));
	outFields->push(HX_HCSTRING("__width","\xe6","\x0e","\xc1","\x34"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(RectangleTexture_obj,__height),HX_HCSTRING("__height","\x07","\x73","\x7b","\xaa")},
	{hx::fsBool,(int)offsetof(RectangleTexture_obj,__optimizeForRenderToTexture),HX_HCSTRING("__optimizeForRenderToTexture","\xbe","\xd4","\x90","\xb3")},
	{hx::fsInt,(int)offsetof(RectangleTexture_obj,__width),HX_HCSTRING("__width","\xe6","\x0e","\xc1","\x34")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("__height","\x07","\x73","\x7b","\xaa"),
	HX_HCSTRING("__optimizeForRenderToTexture","\xbe","\xd4","\x90","\xb3"),
	HX_HCSTRING("__width","\xe6","\x0e","\xc1","\x34"),
	HX_HCSTRING("uploadFromBitmapData","\xa4","\x85","\x65","\x0d"),
	HX_HCSTRING("uploadFromByteArray","\xe6","\x17","\x1b","\xee"),
	HX_HCSTRING("uploadFromTypedArray","\xba","\x7c","\xf4","\xd1"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(RectangleTexture_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(RectangleTexture_obj::__mClass,"__mClass");
};

#endif

hx::Class RectangleTexture_obj::__mClass;

void RectangleTexture_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.display3D.textures.RectangleTexture","\xe9","\x93","\xed","\xa3");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< RectangleTexture_obj >;
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
} // end namespace textures
