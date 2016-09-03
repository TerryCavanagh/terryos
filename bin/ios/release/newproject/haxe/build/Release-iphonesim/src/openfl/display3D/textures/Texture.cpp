#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_Timer
#include <haxe/Timer.h>
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
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
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

Void Texture_obj::__construct(::openfl::display3D::Context3D context,int width,int height,Dynamic format,bool optimizeForRenderToTexture,int streamingLevels)
{
HX_STACK_FRAME("openfl.display3D.textures.Texture","new",0xaee720f0,"openfl.display3D.textures.Texture.new","openfl/display3D/textures/Texture.hx",30,0x3ee19dbf)
HX_STACK_THIS(this)
HX_STACK_ARG(context,"context")
HX_STACK_ARG(width,"width")
HX_STACK_ARG(height,"height")
HX_STACK_ARG(format,"format")
HX_STACK_ARG(optimizeForRenderToTexture,"optimizeForRenderToTexture")
HX_STACK_ARG(streamingLevels,"streamingLevels")
{
	HX_STACK_LINE(32)
	::openfl::display3D::Context3D tmp = context;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(32)
	super::__construct(tmp,(int)3553);
	HX_STACK_LINE(34)
	this->__width = width;
	HX_STACK_LINE(35)
	this->__height = height;
	HX_STACK_LINE(37)
	this->__optimizeForRenderToTexture = optimizeForRenderToTexture;
	HX_STACK_LINE(38)
	this->__streamingLevels = streamingLevels;
	HX_STACK_LINE(40)
	this->uploadFromTypedArray(null());
}
;
	return null();
}

//Texture_obj::~Texture_obj() { }

Dynamic Texture_obj::__CreateEmpty() { return  new Texture_obj; }
hx::ObjectPtr< Texture_obj > Texture_obj::__new(::openfl::display3D::Context3D context,int width,int height,Dynamic format,bool optimizeForRenderToTexture,int streamingLevels)
{  hx::ObjectPtr< Texture_obj > _result_ = new Texture_obj();
	_result_->__construct(context,width,height,format,optimizeForRenderToTexture,streamingLevels);
	return _result_;}

Dynamic Texture_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Texture_obj > _result_ = new Texture_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5]);
	return _result_;}

Void Texture_obj::uploadCompressedTextureFromByteArray( ::openfl::utils::ByteArrayData data,int byteArrayOffset,hx::Null< bool >  __o_async){
bool async = __o_async.Default(false);
	HX_STACK_FRAME("openfl.display3D.textures.Texture","uploadCompressedTextureFromByteArray",0xe2c5b53e,"openfl.display3D.textures.Texture.uploadCompressedTextureFromByteArray","openfl/display3D/textures/Texture.hx",45,0x3ee19dbf)
	HX_STACK_THIS(this)
	HX_STACK_ARG(data,"data")
	HX_STACK_ARG(byteArrayOffset,"byteArrayOffset")
	HX_STACK_ARG(async,"async")
{
		HX_STACK_LINE(45)
		::openfl::display3D::textures::Texture _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(47)
		data->position = byteArrayOffset;
		HX_STACK_LINE(48)
		::String tmp = data->readUTFBytes((int)3);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(48)
		::String signature = tmp;		HX_STACK_VAR(signature,"signature");
		HX_STACK_LINE(49)
		data->position = byteArrayOffset;
		HX_STACK_LINE(51)
		bool tmp1 = (signature == HX_HCSTRING("ATF","\xf3","\x9b","\x31","\x00"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(51)
		if ((tmp1)){
			HX_STACK_LINE(53)
			{
				HX_STACK_LINE(53)
				::lime::graphics::opengl::GLTexture tmp2 = this->__textureID;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(53)
				::lime::graphics::opengl::GLTexture texture = tmp2;		HX_STACK_VAR(texture,"texture");
				HX_STACK_LINE(53)
				::lime::graphics::opengl::GL_obj::cffi_lime_gl_bind_texture.call(this->__textureTarget,hx::DynamicPtr((  (((texture == null()))) ? Dynamic(null()) : Dynamic(texture->id) )));
			}
			HX_STACK_LINE(54)
			::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
			HX_STACK_LINE(56)
			::openfl::utils::ByteArrayData tmp2 = data;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(56)
			int tmp3 = byteArrayOffset;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(56)
			this->__uploadATFTextureFromByteArray(tmp2,tmp3);
			HX_STACK_LINE(58)
			::lime::graphics::opengl::GL_obj::cffi_lime_gl_bind_texture.call(this->__textureTarget,hx::DynamicPtr(null()));
			HX_STACK_LINE(59)
			::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
		}
		else{
			HX_STACK_LINE(65)
			::lime::graphics::opengl::GL_obj::cffi_lime_gl_bind_texture.call(this->__textureTarget,hx::DynamicPtr(null()));
			HX_STACK_LINE(66)
			::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
		}
		HX_STACK_LINE(70)
		bool tmp2 = async;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(70)
		if ((tmp2)){

			HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,::openfl::display3D::textures::Texture,_g)
			int __ArgCount() const { return 0; }
			Void run(){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","openfl/display3D/textures/Texture.hx",72,0x3ee19dbf)
				{
					HX_STACK_LINE(74)
					::openfl::events::Event tmp3 = ::openfl::events::Event_obj::__new(HX_HCSTRING("textureReady","\x88","\x4d","\x5a","\xdf"),null(),null());		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(74)
					_g->dispatchEvent(tmp3);
				}
				return null();
			}
			HX_END_LOCAL_FUNC0((void))

			HX_STACK_LINE(72)
			::haxe::Timer_obj::delay( Dynamic(new _Function_2_1(_g)),(int)1);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Texture_obj,uploadCompressedTextureFromByteArray,(void))

Void Texture_obj::uploadFromBitmapData( ::openfl::display::BitmapData source,hx::Null< int >  __o_miplevel,hx::Null< bool >  __o_generateMipmap){
int miplevel = __o_miplevel.Default(0);
bool generateMipmap = __o_generateMipmap.Default(false);
	HX_STACK_FRAME("openfl.display3D.textures.Texture","uploadFromBitmapData",0x5c4e9314,"openfl.display3D.textures.Texture.uploadFromBitmapData","openfl/display3D/textures/Texture.hx",83,0x3ee19dbf)
	HX_STACK_THIS(this)
	HX_STACK_ARG(source,"source")
	HX_STACK_ARG(miplevel,"miplevel")
	HX_STACK_ARG(generateMipmap,"generateMipmap")
{
		HX_STACK_LINE(95)
		this->__miplevel = miplevel;
		HX_STACK_LINE(97)
		::lime::graphics::Image image = source->image;		HX_STACK_VAR(image,"image");
		HX_STACK_LINE(99)
		bool tmp = image->get_premultiplied();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(99)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(99)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(99)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(99)
		if ((tmp2)){
			HX_STACK_LINE(99)
			tmp3 = image->get_transparent();
		}
		else{
			HX_STACK_LINE(99)
			tmp3 = false;
		}
		HX_STACK_LINE(99)
		if ((tmp3)){
			HX_STACK_LINE(101)
			::lime::graphics::Image tmp4 = image->clone();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(101)
			image = tmp4;
			HX_STACK_LINE(102)
			image->set_premultiplied(true);
		}
		HX_STACK_LINE(106)
		::lime::utils::ArrayBufferView tmp4 = image->get_data();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(106)
		this->uploadFromTypedArray(tmp4);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Texture_obj,uploadFromBitmapData,(void))

Void Texture_obj::uploadFromByteArray( ::openfl::utils::ByteArrayData data,int byteArrayOffset,hx::Null< int >  __o_miplevel){
int miplevel = __o_miplevel.Default(0);
	HX_STACK_FRAME("openfl.display3D.textures.Texture","uploadFromByteArray",0x0d748876,"openfl.display3D.textures.Texture.uploadFromByteArray","openfl/display3D/textures/Texture.hx",111,0x3ee19dbf)
	HX_STACK_THIS(this)
	HX_STACK_ARG(data,"data")
	HX_STACK_ARG(byteArrayOffset,"byteArrayOffset")
	HX_STACK_ARG(miplevel,"miplevel")
{
		HX_STACK_LINE(113)
		this->__miplevel = miplevel;
		HX_STACK_LINE(124)
		::lime::utils::ArrayBufferView tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(124)
		{
			HX_STACK_LINE(124)
			::openfl::utils::ByteArrayData tmp1 = data;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(124)
			::haxe::io::Bytes tmp2 = ::openfl::utils::_ByteArray::ByteArray_Impl__obj::toArrayBuffer(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(124)
			::haxe::io::Bytes buffer = tmp2;		HX_STACK_VAR(buffer,"buffer");
			HX_STACK_LINE(124)
			::lime::utils::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(124)
			bool tmp3 = false;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(124)
			if ((tmp3)){
				HX_STACK_LINE(124)
				::lime::utils::ArrayBufferView tmp4 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)4);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(124)
				this1 = tmp4;
			}
			else{
				HX_STACK_LINE(124)
				bool tmp4 = false;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(124)
				if ((tmp4)){
					HX_STACK_LINE(124)
					::lime::utils::ArrayBufferView tmp5;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(124)
					{
						HX_STACK_LINE(124)
						::lime::utils::ArrayBufferView tmp6 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(124)
						::lime::utils::ArrayBufferView _this = tmp6;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(124)
						_this->byteOffset = (int)0;
						HX_STACK_LINE(124)
						int tmp7 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(124)
						_this->length = tmp7;
						HX_STACK_LINE(124)
						int tmp8 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(124)
						_this->byteLength = tmp8;
						HX_STACK_LINE(124)
						::haxe::io::Bytes tmp9;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(124)
						{
							HX_STACK_LINE(124)
							::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
							HX_STACK_LINE(124)
							int tmp10 = _this->byteLength;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(124)
							::haxe::io::Bytes tmp11 = ::haxe::io::Bytes_obj::alloc(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(124)
							this2 = tmp11;
							HX_STACK_LINE(124)
							tmp9 = this2;
						}
						HX_STACK_LINE(124)
						_this->buffer = tmp9;
						HX_STACK_LINE(124)
						_this->copyFromArray(((Array< Float >)(null())),null());
						HX_STACK_LINE(124)
						tmp5 = _this;
					}
					HX_STACK_LINE(124)
					this1 = tmp5;
				}
				else{
					HX_STACK_LINE(124)
					bool tmp5 = false;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(124)
					if ((tmp5)){
						HX_STACK_LINE(124)
						::lime::utils::ArrayBufferView tmp6;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(124)
						{
							HX_STACK_LINE(124)
							::lime::utils::ArrayBufferView tmp7 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(124)
							::lime::utils::ArrayBufferView _this = tmp7;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(124)
							::haxe::io::Bytes tmp8 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(124)
							::haxe::io::Bytes srcData = tmp8;		HX_STACK_VAR(srcData,"srcData");
							HX_STACK_LINE(124)
							int tmp9 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(124)
							int srcLength = tmp9;		HX_STACK_VAR(srcLength,"srcLength");
							HX_STACK_LINE(124)
							int tmp10 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(124)
							int srcByteOffset = tmp10;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
							HX_STACK_LINE(124)
							int tmp11 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(124)
							int srcElementSize = tmp11;		HX_STACK_VAR(srcElementSize,"srcElementSize");
							HX_STACK_LINE(124)
							int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
							HX_STACK_LINE(124)
							int tmp12 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(124)
							int tmp13 = _this->type;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(124)
							bool tmp14 = (tmp12 == tmp13);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(124)
							if ((tmp14)){
								HX_STACK_LINE(124)
								int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
								HX_STACK_LINE(124)
								int tmp15 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(124)
								int cloneLength = tmp15;		HX_STACK_VAR(cloneLength,"cloneLength");
								HX_STACK_LINE(124)
								::haxe::io::Bytes tmp16;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(124)
								{
									HX_STACK_LINE(124)
									::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
									HX_STACK_LINE(124)
									int tmp17 = cloneLength;		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(124)
									::haxe::io::Bytes tmp18 = ::haxe::io::Bytes_obj::alloc(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(124)
									this2 = tmp18;
									HX_STACK_LINE(124)
									tmp16 = this2;
								}
								HX_STACK_LINE(124)
								_this->buffer = tmp16;
								HX_STACK_LINE(124)
								::haxe::io::Bytes tmp17 = srcData;		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(124)
								int tmp18 = srcByteOffset;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(124)
								int tmp19 = cloneLength;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(124)
								_this->buffer->blit((int)0,tmp17,tmp18,tmp19);
							}
							else{
								HX_STACK_LINE(124)
								HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
							}
							HX_STACK_LINE(124)
							int tmp15 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(124)
							_this->byteLength = tmp15;
							HX_STACK_LINE(124)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(124)
							_this->length = srcLength;
							HX_STACK_LINE(124)
							tmp6 = _this;
						}
						HX_STACK_LINE(124)
						this1 = tmp6;
					}
					else{
						HX_STACK_LINE(124)
						bool tmp6 = (buffer != null());		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(124)
						if ((tmp6)){
							HX_STACK_LINE(124)
							::lime::utils::ArrayBufferView tmp7;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(124)
							{
								HX_STACK_LINE(124)
								::lime::utils::ArrayBufferView tmp8 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(124)
								::lime::utils::ArrayBufferView _this = tmp8;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(124)
								bool tmp9 = (byteArrayOffset < (int)0);		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(124)
								if ((tmp9)){
									HX_STACK_LINE(124)
									HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
								}
								HX_STACK_LINE(124)
								int tmp10 = hx::Mod(byteArrayOffset,_this->bytesPerElement);		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(124)
								bool tmp11 = (tmp10 != (int)0);		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(124)
								if ((tmp11)){
									HX_STACK_LINE(124)
									HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
								}
								HX_STACK_LINE(124)
								int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
								HX_STACK_LINE(124)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(124)
								int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
								HX_STACK_LINE(124)
								bool tmp12 = true;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(124)
								if ((tmp12)){
									HX_STACK_LINE(124)
									int tmp13 = (bufferByteLength - byteArrayOffset);		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(124)
									newByteLength = tmp13;
									HX_STACK_LINE(124)
									int tmp14 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(124)
									bool tmp15 = (tmp14 != (int)0);		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(124)
									if ((tmp15)){
										HX_STACK_LINE(124)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(124)
									bool tmp16 = (newByteLength < (int)0);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(124)
									if ((tmp16)){
										HX_STACK_LINE(124)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
								}
								else{
									HX_STACK_LINE(124)
									int tmp13 = (null() * _this->bytesPerElement);		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(124)
									newByteLength = tmp13;
									HX_STACK_LINE(124)
									int tmp14 = (byteArrayOffset + newByteLength);		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(124)
									int newRange = tmp14;		HX_STACK_VAR(newRange,"newRange");
									HX_STACK_LINE(124)
									bool tmp15 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(124)
									if ((tmp15)){
										HX_STACK_LINE(124)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
								}
								HX_STACK_LINE(124)
								_this->buffer = buffer;
								HX_STACK_LINE(124)
								_this->byteOffset = byteArrayOffset;
								HX_STACK_LINE(124)
								_this->byteLength = newByteLength;
								HX_STACK_LINE(124)
								Float tmp13 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(124)
								int tmp14 = ::Std_obj::_int(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(124)
								_this->length = tmp14;
								HX_STACK_LINE(124)
								tmp7 = _this;
							}
							HX_STACK_LINE(124)
							this1 = tmp7;
						}
						else{
							HX_STACK_LINE(124)
							HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for UInt8Array","\x6b","\x44","\xd5","\x85"));
						}
					}
				}
			}
			HX_STACK_LINE(124)
			tmp = this1;
		}
		HX_STACK_LINE(124)
		this->uploadFromTypedArray(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Texture_obj,uploadFromByteArray,(void))

Void Texture_obj::uploadFromTypedArray( ::lime::utils::ArrayBufferView data){
{
		HX_STACK_FRAME("openfl.display3D.textures.Texture","uploadFromTypedArray",0x20dd8a2a,"openfl.display3D.textures.Texture.uploadFromTypedArray","openfl/display3D/textures/Texture.hx",129,0x3ee19dbf)
		HX_STACK_THIS(this)
		HX_STACK_ARG(data,"data")
		HX_STACK_LINE(131)
		{
			HX_STACK_LINE(131)
			::lime::graphics::opengl::GLTexture tmp = this->__textureID;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(131)
			::lime::graphics::opengl::GLTexture texture = tmp;		HX_STACK_VAR(texture,"texture");
			HX_STACK_LINE(131)
			::lime::graphics::opengl::GL_obj::cffi_lime_gl_bind_texture.call(this->__textureTarget,hx::DynamicPtr((  (((texture == null()))) ? Dynamic(null()) : Dynamic(texture->id) )));
		}
		HX_STACK_LINE(132)
		::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
		HX_STACK_LINE(134)
		{
			HX_STACK_LINE(134)
			bool tmp = (data == null());		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(134)
			::haxe::io::Bytes tmp1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(134)
			if ((tmp)){
				HX_STACK_LINE(134)
				tmp1 = null();
			}
			else{
				HX_STACK_LINE(134)
				tmp1 = data->buffer;
			}
			HX_STACK_LINE(134)
			::haxe::io::Bytes buffer = tmp1;		HX_STACK_VAR(buffer,"buffer");
			HX_STACK_LINE(134)
			::lime::graphics::opengl::GL_obj::cffi_lime_gl_tex_image_2d.call(this->__textureTarget,(int)0,this->__internalFormat,this->__width,this->__height,(int)0,this->__format,(int)5121,hx::DynamicPtr(buffer),(  (((data == null()))) ? int((int)0) : int(data->byteOffset) ));
		}
		HX_STACK_LINE(135)
		::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
		HX_STACK_LINE(137)
		::lime::graphics::opengl::GL_obj::cffi_lime_gl_bind_texture.call(this->__textureTarget,hx::DynamicPtr(null()));
		HX_STACK_LINE(138)
		::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
		HX_STACK_LINE(140)
		int tmp = this->__width;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(140)
		int tmp1 = this->__height;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(140)
		int tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(140)
		int tmp3 = (tmp2 * (int)4);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(140)
		int memUsage = tmp3;		HX_STACK_VAR(memUsage,"memUsage");
		HX_STACK_LINE(141)
		int tmp4 = memUsage;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(141)
		this->__trackMemoryUsage(tmp4);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Texture_obj,uploadFromTypedArray,(void))

Void Texture_obj::__uploadATFTextureFromByteArray( ::openfl::utils::ByteArrayData data,int byteArrayOffset){
{
		HX_STACK_FRAME("openfl.display3D.textures.Texture","__uploadATFTextureFromByteArray",0x7de383ee,"openfl.display3D.textures.Texture.__uploadATFTextureFromByteArray","openfl/display3D/textures/Texture.hx",203,0x3ee19dbf)
		HX_STACK_THIS(this)
		HX_STACK_ARG(data,"data")
		HX_STACK_ARG(byteArrayOffset,"byteArrayOffset")
		HX_STACK_LINE(205)
		data->position = byteArrayOffset;
		HX_STACK_LINE(207)
		::openfl::utils::ByteArrayData tmp = data;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(207)
		int tmp1 = ::openfl::display3D::textures::Texture_obj::__getATFVersion(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(207)
		int version = tmp1;		HX_STACK_VAR(version,"version");
		HX_STACK_LINE(208)
		bool tmp2 = (version == (int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(208)
		int tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(208)
		if ((tmp2)){
			HX_STACK_LINE(208)
			::openfl::utils::ByteArrayData tmp4 = data;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(208)
			tmp3 = ::openfl::display3D::textures::Texture_obj::__readUInt24(tmp4);
		}
		else{
			HX_STACK_LINE(208)
			::openfl::utils::ByteArrayData tmp4 = data;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(208)
			tmp3 = ::openfl::display3D::textures::Texture_obj::__readUInt32(tmp4);
		}
		HX_STACK_LINE(208)
		int length = tmp3;		HX_STACK_VAR(length,"length");
		HX_STACK_LINE(210)
		int tmp4 = (byteArrayOffset + length);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(210)
		int tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(210)
		tmp5 = hx::TCast< ::Int >::cast(tmp4);
		HX_STACK_LINE(210)
		::openfl::utils::ByteArrayData tmp6 = data;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(210)
		int tmp7 = ::openfl::utils::_ByteArray::ByteArray_Impl__obj::get_length(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(210)
		bool tmp8 = (tmp5 > tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(210)
		if ((tmp8)){
			HX_STACK_LINE(212)
			::openfl::errors::IllegalOperationError tmp9 = ::openfl::errors::IllegalOperationError_obj::__new(HX_HCSTRING("ATF length exceeds byte array length","\xd7","\x29","\x45","\x0f"));		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(212)
			HX_STACK_DO_THROW(tmp9);
		}
		HX_STACK_LINE(216)
		int tmp9 = data->readUnsignedByte();		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(216)
		int tdata = tmp9;		HX_STACK_VAR(tdata,"tdata");
		HX_STACK_LINE(217)
		int tmp10 = (int(tdata) >> int((int)7));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(217)
		int type = tmp10;		HX_STACK_VAR(type,"type");
		HX_STACK_LINE(219)
		bool tmp11 = (type != (int)0);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(219)
		if ((tmp11)){
			HX_STACK_LINE(221)
			::openfl::errors::IllegalOperationError tmp12 = ::openfl::errors::IllegalOperationError_obj::__new(HX_HCSTRING("ATF Cube maps are not supported","\x0a","\xda","\x6c","\x45"));		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(221)
			HX_STACK_DO_THROW(tmp12);
		}
		HX_STACK_LINE(231)
		int tmp12 = data->readUnsignedByte();		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(231)
		int tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(231)
		int tmp14 = (int((int)1) << int(tmp13));		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(231)
		int width = tmp14;		HX_STACK_VAR(width,"width");
		HX_STACK_LINE(232)
		int tmp15 = data->readUnsignedByte();		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(232)
		int tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(232)
		int tmp17 = (int((int)1) << int(tmp16));		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(232)
		int height = tmp17;		HX_STACK_VAR(height,"height");
		HX_STACK_LINE(234)
		int tmp18 = width;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(234)
		int tmp19 = this->__width;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(234)
		bool tmp20 = (tmp18 != tmp19);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(234)
		bool tmp21 = !(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(234)
		bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(234)
		if ((tmp21)){
			HX_STACK_LINE(234)
			int tmp23 = height;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(234)
			int tmp24 = this->__height;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(234)
			int tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(234)
			tmp22 = (tmp23 != tmp25);
		}
		else{
			HX_STACK_LINE(234)
			tmp22 = true;
		}
		HX_STACK_LINE(234)
		if ((tmp22)){
			HX_STACK_LINE(236)
			::openfl::errors::IllegalOperationError tmp23 = ::openfl::errors::IllegalOperationError_obj::__new(HX_HCSTRING("ATF width and height dont match","\x3f","\x49","\x15","\x70"));		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(236)
			HX_STACK_DO_THROW(tmp23);
		}
		HX_STACK_LINE(240)
		int tmp23 = data->readUnsignedByte();		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(240)
		int mipCount = tmp23;		HX_STACK_VAR(mipCount,"mipCount");
		HX_STACK_LINE(242)
		{
			HX_STACK_LINE(242)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(242)
			while((true)){
				HX_STACK_LINE(242)
				bool tmp24 = (_g < mipCount);		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(242)
				bool tmp25 = !(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(242)
				if ((tmp25)){
					HX_STACK_LINE(242)
					break;
				}
				HX_STACK_LINE(242)
				int tmp26 = (_g)++;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(242)
				int level = tmp26;		HX_STACK_VAR(level,"level");
				HX_STACK_LINE(244)
				{
					HX_STACK_LINE(244)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(244)
					while((true)){
						HX_STACK_LINE(244)
						bool tmp27 = (_g1 < (int)3);		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(244)
						bool tmp28 = !(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(244)
						if ((tmp28)){
							HX_STACK_LINE(244)
							break;
						}
						HX_STACK_LINE(244)
						int tmp29 = (_g1)++;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(244)
						int gpuFormat = tmp29;		HX_STACK_VAR(gpuFormat,"gpuFormat");
						HX_STACK_LINE(246)
						bool tmp30 = (version == (int)0);		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(246)
						int tmp31;		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(246)
						if ((tmp30)){
							HX_STACK_LINE(246)
							::openfl::utils::ByteArrayData tmp32 = data;		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(246)
							tmp31 = ::openfl::display3D::textures::Texture_obj::__readUInt24(tmp32);
						}
						else{
							HX_STACK_LINE(246)
							::openfl::utils::ByteArrayData tmp32 = data;		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(246)
							tmp31 = ::openfl::display3D::textures::Texture_obj::__readUInt32(tmp32);
						}
						HX_STACK_LINE(246)
						int blockLength = tmp31;		HX_STACK_VAR(blockLength,"blockLength");
						HX_STACK_LINE(254)
						bool tmp32;		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(254)
						{
							HX_STACK_LINE(254)
							bool tmp33 = (blockLength < (int)0);		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(254)
							bool aNeg = tmp33;		HX_STACK_VAR(aNeg,"aNeg");
							HX_STACK_LINE(254)
							bool tmp34 = ((int)0 < (int)0);		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(254)
							bool bNeg = tmp34;		HX_STACK_VAR(bNeg,"bNeg");
							HX_STACK_LINE(254)
							bool tmp35 = (aNeg != bNeg);		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(254)
							if ((tmp35)){
								HX_STACK_LINE(254)
								tmp32 = aNeg;
							}
							else{
								HX_STACK_LINE(254)
								tmp32 = (blockLength > (int)0);
							}
						}
						HX_STACK_LINE(254)
						if ((tmp32)){
							HX_STACK_LINE(256)
							bool tmp33 = (gpuFormat == (int)1);		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(256)
							if ((tmp33)){
							}
							else{
								HX_STACK_LINE(260)
								bool tmp34 = (gpuFormat == (int)2);		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(260)
								if ((tmp34)){
								}
							}
						}
						HX_STACK_LINE(270)
						int tmp33 = (data->position + blockLength);		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(270)
						data->position = tmp33;
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Texture_obj,__uploadATFTextureFromByteArray,(void))

bool Texture_obj::__lowMemoryMode;

int Texture_obj::__getATFVersion( ::openfl::utils::ByteArrayData data){
	HX_STACK_FRAME("openfl.display3D.textures.Texture","__getATFVersion",0x0832a0eb,"openfl.display3D.textures.Texture.__getATFVersion","openfl/display3D/textures/Texture.hx",146,0x3ee19dbf)
	HX_STACK_ARG(data,"data")
	HX_STACK_LINE(148)
	::String tmp = data->readUTFBytes((int)3);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(148)
	::String signature = tmp;		HX_STACK_VAR(signature,"signature");
	HX_STACK_LINE(150)
	bool tmp1 = (signature != HX_HCSTRING("ATF","\xf3","\x9b","\x31","\x00"));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(150)
	if ((tmp1)){
		HX_STACK_LINE(152)
		::openfl::errors::IllegalOperationError tmp2 = ::openfl::errors::IllegalOperationError_obj::__new(HX_HCSTRING("ATF signature not found","\xa0","\xf7","\x2f","\x3a"));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(152)
		HX_STACK_DO_THROW(tmp2);
	}
	HX_STACK_LINE(156)
	int position = data->position;		HX_STACK_VAR(position,"position");
	HX_STACK_LINE(157)
	int version = (int)0;		HX_STACK_VAR(version,"version");
	HX_STACK_LINE(159)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(159)
	{
		HX_STACK_LINE(159)
		int tmp3 = (data->length - data->position);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(159)
		int a = tmp3;		HX_STACK_VAR(a,"a");
		HX_STACK_LINE(159)
		bool tmp4 = (a < (int)0);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(159)
		bool aNeg = tmp4;		HX_STACK_VAR(aNeg,"aNeg");
		HX_STACK_LINE(159)
		bool tmp5 = ((int)5 < (int)0);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(159)
		bool bNeg = tmp5;		HX_STACK_VAR(bNeg,"bNeg");
		HX_STACK_LINE(159)
		bool tmp6 = (aNeg != bNeg);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(159)
		if ((tmp6)){
			HX_STACK_LINE(159)
			tmp2 = aNeg;
		}
		else{
			HX_STACK_LINE(159)
			tmp2 = (a >= (int)5);
		}
	}
	HX_STACK_LINE(159)
	if ((tmp2)){
		HX_STACK_LINE(161)
		::openfl::utils::ByteArrayData tmp3 = data;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(161)
		int tmp4 = ::openfl::display3D::textures::Texture_obj::__readUInt32(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(161)
		int sig = tmp4;		HX_STACK_VAR(sig,"sig");
		HX_STACK_LINE(163)
		bool tmp5 = (sig == (int)255);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(163)
		if ((tmp5)){
			HX_STACK_LINE(165)
			int tmp6 = data->readUnsignedByte();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(165)
			version = tmp6;
		}
		else{
			HX_STACK_LINE(169)
			data->position = position;
		}
	}
	HX_STACK_LINE(175)
	int tmp3 = version;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(175)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Texture_obj,__getATFVersion,return )

int Texture_obj::__readUInt24( ::openfl::utils::ByteArrayData data){
	HX_STACK_FRAME("openfl.display3D.textures.Texture","__readUInt24",0x2184b642,"openfl.display3D.textures.Texture.__readUInt24","openfl/display3D/textures/Texture.hx",180,0x3ee19dbf)
	HX_STACK_ARG(data,"data")
	HX_STACK_LINE(182)
	int value;		HX_STACK_VAR(value,"value");
	HX_STACK_LINE(183)
	int tmp = data->readUnsignedByte();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(183)
	int tmp1 = (int(tmp) << int((int)16));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(183)
	value = tmp1;
	HX_STACK_LINE(184)
	int tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(184)
	{
		HX_STACK_LINE(184)
		int tmp3 = data->readUnsignedByte();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(184)
		int tmp4 = (int(tmp3) << int((int)8));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(184)
		int b = tmp4;		HX_STACK_VAR(b,"b");
		HX_STACK_LINE(184)
		tmp2 = (int(value) | int(b));
	}
	HX_STACK_LINE(184)
	value = tmp2;
	HX_STACK_LINE(185)
	int tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(185)
	{
		HX_STACK_LINE(185)
		int tmp4 = data->readUnsignedByte();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(185)
		int b = tmp4;		HX_STACK_VAR(b,"b");
		HX_STACK_LINE(185)
		tmp3 = (int(value) | int(b));
	}
	HX_STACK_LINE(185)
	value = tmp3;
	HX_STACK_LINE(186)
	int tmp4 = value;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(186)
	return tmp4;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Texture_obj,__readUInt24,return )

int Texture_obj::__readUInt32( ::openfl::utils::ByteArrayData data){
	HX_STACK_FRAME("openfl.display3D.textures.Texture","__readUInt32",0x2184b71f,"openfl.display3D.textures.Texture.__readUInt32","openfl/display3D/textures/Texture.hx",191,0x3ee19dbf)
	HX_STACK_ARG(data,"data")
	HX_STACK_LINE(193)
	int value;		HX_STACK_VAR(value,"value");
	HX_STACK_LINE(194)
	int tmp = data->readUnsignedByte();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(194)
	int tmp1 = (int(tmp) << int((int)24));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(194)
	value = tmp1;
	HX_STACK_LINE(195)
	int tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(195)
	{
		HX_STACK_LINE(195)
		int tmp3 = data->readUnsignedByte();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(195)
		int tmp4 = (int(tmp3) << int((int)16));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(195)
		int b = tmp4;		HX_STACK_VAR(b,"b");
		HX_STACK_LINE(195)
		tmp2 = (int(value) | int(b));
	}
	HX_STACK_LINE(195)
	value = tmp2;
	HX_STACK_LINE(196)
	int tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(196)
	{
		HX_STACK_LINE(196)
		int tmp4 = data->readUnsignedByte();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(196)
		int tmp5 = (int(tmp4) << int((int)8));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(196)
		int b = tmp5;		HX_STACK_VAR(b,"b");
		HX_STACK_LINE(196)
		tmp3 = (int(value) | int(b));
	}
	HX_STACK_LINE(196)
	value = tmp3;
	HX_STACK_LINE(197)
	int tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(197)
	{
		HX_STACK_LINE(197)
		int tmp5 = data->readUnsignedByte();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(197)
		int b = tmp5;		HX_STACK_VAR(b,"b");
		HX_STACK_LINE(197)
		tmp4 = (int(value) | int(b));
	}
	HX_STACK_LINE(197)
	value = tmp4;
	HX_STACK_LINE(198)
	int tmp5 = value;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(198)
	return tmp5;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Texture_obj,__readUInt32,return )


Texture_obj::Texture_obj()
{
}

Dynamic Texture_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"__width") ) { return __width; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__height") ) { return __height; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"__miplevel") ) { return __miplevel; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__streamingLevels") ) { return __streamingLevels; }
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
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"__uploadATFTextureFromByteArray") ) { return __uploadATFTextureFromByteArray_dyn(); }
		break;
	case 36:
		if (HX_FIELD_EQ(inName,"uploadCompressedTextureFromByteArray") ) { return uploadCompressedTextureFromByteArray_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool Texture_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"__readUInt24") ) { outValue = __readUInt24_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"__readUInt32") ) { outValue = __readUInt32_dyn(); return true;  }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__lowMemoryMode") ) { outValue = __lowMemoryMode; return true;  }
		if (HX_FIELD_EQ(inName,"__getATFVersion") ) { outValue = __getATFVersion_dyn(); return true;  }
	}
	return false;
}

Dynamic Texture_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"__width") ) { __width=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__height") ) { __height=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"__miplevel") ) { __miplevel=inValue.Cast< int >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__streamingLevels") ) { __streamingLevels=inValue.Cast< int >(); return inValue; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"__optimizeForRenderToTexture") ) { __optimizeForRenderToTexture=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Texture_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 15:
		if (HX_FIELD_EQ(inName,"__lowMemoryMode") ) { __lowMemoryMode=ioValue.Cast< bool >(); return true; }
	}
	return false;
}

void Texture_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("__height","\x07","\x73","\x7b","\xaa"));
	outFields->push(HX_HCSTRING("__miplevel","\x90","\x3e","\x5c","\x46"));
	outFields->push(HX_HCSTRING("__optimizeForRenderToTexture","\xbe","\xd4","\x90","\xb3"));
	outFields->push(HX_HCSTRING("__streamingLevels","\x51","\xa1","\xde","\x07"));
	outFields->push(HX_HCSTRING("__width","\xe6","\x0e","\xc1","\x34"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(Texture_obj,__height),HX_HCSTRING("__height","\x07","\x73","\x7b","\xaa")},
	{hx::fsInt,(int)offsetof(Texture_obj,__miplevel),HX_HCSTRING("__miplevel","\x90","\x3e","\x5c","\x46")},
	{hx::fsBool,(int)offsetof(Texture_obj,__optimizeForRenderToTexture),HX_HCSTRING("__optimizeForRenderToTexture","\xbe","\xd4","\x90","\xb3")},
	{hx::fsInt,(int)offsetof(Texture_obj,__streamingLevels),HX_HCSTRING("__streamingLevels","\x51","\xa1","\xde","\x07")},
	{hx::fsInt,(int)offsetof(Texture_obj,__width),HX_HCSTRING("__width","\xe6","\x0e","\xc1","\x34")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsBool,(void *) &Texture_obj::__lowMemoryMode,HX_HCSTRING("__lowMemoryMode","\x98","\x71","\x9e","\x43")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("__height","\x07","\x73","\x7b","\xaa"),
	HX_HCSTRING("__miplevel","\x90","\x3e","\x5c","\x46"),
	HX_HCSTRING("__optimizeForRenderToTexture","\xbe","\xd4","\x90","\xb3"),
	HX_HCSTRING("__streamingLevels","\x51","\xa1","\xde","\x07"),
	HX_HCSTRING("__width","\xe6","\x0e","\xc1","\x34"),
	HX_HCSTRING("uploadCompressedTextureFromByteArray","\xce","\xc7","\x86","\xc5"),
	HX_HCSTRING("uploadFromBitmapData","\xa4","\x85","\x65","\x0d"),
	HX_HCSTRING("uploadFromByteArray","\xe6","\x17","\x1b","\xee"),
	HX_HCSTRING("uploadFromTypedArray","\xba","\x7c","\xf4","\xd1"),
	HX_HCSTRING("__uploadATFTextureFromByteArray","\x5e","\x7b","\xdb","\xc9"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Texture_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Texture_obj::__lowMemoryMode,"__lowMemoryMode");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Texture_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Texture_obj::__lowMemoryMode,"__lowMemoryMode");
};

#endif

hx::Class Texture_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("__lowMemoryMode","\x98","\x71","\x9e","\x43"),
	HX_HCSTRING("__getATFVersion","\x5b","\xb8","\xa0","\xe5"),
	HX_HCSTRING("__readUInt24","\xd2","\x98","\x1e","\x4b"),
	HX_HCSTRING("__readUInt32","\xaf","\x99","\x1e","\x4b"),
	::String(null()) };

void Texture_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.display3D.textures.Texture","\xfe","\x28","\x30","\xf1");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Texture_obj::__GetStatic;
	__mClass->mSetStaticField = &Texture_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Texture_obj >;
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

void Texture_obj::__boot()
{
	__lowMemoryMode= false;
}

} // end namespace openfl
} // end namespace display3D
} // end namespace textures
