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
#ifndef INCLUDED_lime_utils_ArrayBufferView
#include <lime/utils/ArrayBufferView.h>
#endif
#ifndef INCLUDED_lime_utils_TAError
#include <lime/utils/TAError.h>
#endif
#ifndef INCLUDED_openfl__internal_stage3D_GLUtils
#include <openfl/_internal/stage3D/GLUtils.h>
#endif
#ifndef INCLUDED_openfl_display3D__Program3D_Uniform
#include <openfl/display3D/_Program3D/Uniform.h>
#endif
namespace openfl{
namespace display3D{
namespace _Program3D{

Void Uniform_obj::__construct()
{
HX_STACK_FRAME("openfl.display3D._Program3D.Uniform","new",0x7e26e3a7,"openfl.display3D._Program3D.Uniform.new","openfl/display3D/Program3D.hx",448,0x0a985b04)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(448)
	this->isDirty = true;
}
;
	return null();
}

//Uniform_obj::~Uniform_obj() { }

Dynamic Uniform_obj::__CreateEmpty() { return  new Uniform_obj; }
hx::ObjectPtr< Uniform_obj > Uniform_obj::__new()
{  hx::ObjectPtr< Uniform_obj > _result_ = new Uniform_obj();
	_result_->__construct();
	return _result_;}

Dynamic Uniform_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Uniform_obj > _result_ = new Uniform_obj();
	_result_->__construct();
	return _result_;}

Void Uniform_obj::flush( ){
{
		HX_STACK_FRAME("openfl.display3D._Program3D.Uniform","flush",0xe9cf15cb,"openfl.display3D._Program3D.Uniform.flush","openfl/display3D/Program3D.hx",453,0x0a985b04)
		HX_STACK_THIS(this)
		HX_STACK_LINE(455)
		int tmp = this->regIndex;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(455)
		int tmp1 = (tmp * (int)4);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(455)
		int index = tmp1;		HX_STACK_VAR(index,"index");
		HX_STACK_LINE(456)
		{
			HX_STACK_LINE(456)
			int tmp2 = this->type;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(456)
			int _g = tmp2;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(456)
			int tmp3 = _g;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(456)
			switch( (int)(tmp3)){
				case (int)35674: {
					HX_STACK_LINE(458)
					int tmp4 = index;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(458)
					int tmp5 = this->size;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(458)
					int tmp6 = (tmp5 * (int)2);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(458)
					int tmp7 = (tmp6 * (int)2);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(458)
					::lime::utils::ArrayBufferView tmp8 = this->__getRegisters(tmp4,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(458)
					::lime::utils::ArrayBufferView v = tmp8;		HX_STACK_VAR(v,"v");
					HX_STACK_LINE(458)
					::lime::graphics::opengl::GL_obj::cffi_lime_gl_uniform_matrix.call(this->location,false,hx::DynamicPtr(v->buffer),(int)2);
				}
				;break;
				case (int)35675: {
					HX_STACK_LINE(459)
					int tmp4 = index;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(459)
					int tmp5 = this->size;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(459)
					int tmp6 = (tmp5 * (int)3);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(459)
					int tmp7 = (tmp6 * (int)3);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(459)
					::lime::utils::ArrayBufferView tmp8 = this->__getRegisters(tmp4,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(459)
					::lime::utils::ArrayBufferView v = tmp8;		HX_STACK_VAR(v,"v");
					HX_STACK_LINE(459)
					::lime::graphics::opengl::GL_obj::cffi_lime_gl_uniform_matrix.call(this->location,false,hx::DynamicPtr(v->buffer),(int)3);
				}
				;break;
				case (int)35676: {
					HX_STACK_LINE(460)
					int tmp4 = index;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(460)
					int tmp5 = this->size;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(460)
					int tmp6 = (tmp5 * (int)4);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(460)
					int tmp7 = (tmp6 * (int)4);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(460)
					::lime::utils::ArrayBufferView tmp8 = this->__getRegisters(tmp4,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(460)
					::lime::utils::ArrayBufferView v = tmp8;		HX_STACK_VAR(v,"v");
					HX_STACK_LINE(460)
					::lime::graphics::opengl::GL_obj::cffi_lime_gl_uniform_matrix.call(this->location,false,hx::DynamicPtr(v->buffer),(int)4);
				}
				;break;
				case (int)35664: {
					HX_STACK_LINE(461)
					int tmp4 = index;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(461)
					int tmp5 = this->regCount;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(461)
					int tmp6 = (tmp5 * (int)2);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(461)
					::lime::utils::ArrayBufferView tmp7 = this->__getRegisters(tmp4,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(461)
					::lime::utils::ArrayBufferView v = tmp7;		HX_STACK_VAR(v,"v");
					HX_STACK_LINE(461)
					::lime::graphics::opengl::GL_obj::cffi_lime_gl_uniform2fv.call(this->location,hx::DynamicPtr(v->buffer));
				}
				;break;
				case (int)35665: {
					HX_STACK_LINE(462)
					int tmp4 = index;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(462)
					int tmp5 = this->regCount;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(462)
					int tmp6 = (tmp5 * (int)3);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(462)
					::lime::utils::ArrayBufferView tmp7 = this->__getRegisters(tmp4,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(462)
					::lime::utils::ArrayBufferView v = tmp7;		HX_STACK_VAR(v,"v");
					HX_STACK_LINE(462)
					::lime::graphics::opengl::GL_obj::cffi_lime_gl_uniform3fv.call(this->location,hx::DynamicPtr(v->buffer));
				}
				;break;
				case (int)35666: {
					HX_STACK_LINE(463)
					int tmp4 = index;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(463)
					int tmp5 = this->regCount;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(463)
					int tmp6 = (tmp5 * (int)4);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(463)
					::lime::utils::ArrayBufferView tmp7 = this->__getRegisters(tmp4,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(463)
					::lime::utils::ArrayBufferView v = tmp7;		HX_STACK_VAR(v,"v");
					HX_STACK_LINE(463)
					::lime::graphics::opengl::GL_obj::cffi_lime_gl_uniform4fv.call(this->location,hx::DynamicPtr(v->buffer));
				}
				;break;
				default: {
					HX_STACK_LINE(464)
					int tmp4 = index;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(464)
					int tmp5 = this->regCount;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(464)
					int tmp6 = (tmp5 * (int)4);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(464)
					::lime::utils::ArrayBufferView tmp7 = this->__getRegisters(tmp4,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(464)
					::lime::utils::ArrayBufferView v = tmp7;		HX_STACK_VAR(v,"v");
					HX_STACK_LINE(464)
					::lime::graphics::opengl::GL_obj::cffi_lime_gl_uniform4fv.call(this->location,hx::DynamicPtr(v->buffer));
				}
			}
		}
		HX_STACK_LINE(468)
		::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Uniform_obj,flush,(void))

::lime::utils::ArrayBufferView Uniform_obj::__getRegisters( int index,int size){
	HX_STACK_FRAME("openfl.display3D._Program3D.Uniform","__getRegisters",0x59704473,"openfl.display3D._Program3D.Uniform.__getRegisters","openfl/display3D/Program3D.hx",473,0x0a985b04)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_ARG(size,"size")
	HX_STACK_LINE(487)
	::lime::utils::ArrayBufferView tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(487)
	{
		HX_STACK_LINE(487)
		::lime::utils::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
		HX_STACK_LINE(487)
		bool tmp1 = (size != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(487)
		if ((tmp1)){
			HX_STACK_LINE(487)
			::lime::utils::ArrayBufferView tmp2 = ::lime::utils::ArrayBufferView_obj::__new(size,(int)8);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(487)
			this1 = tmp2;
		}
		else{
			HX_STACK_LINE(487)
			bool tmp2 = false;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(487)
			if ((tmp2)){
				HX_STACK_LINE(487)
				::lime::utils::ArrayBufferView tmp3;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(487)
				{
					HX_STACK_LINE(487)
					::lime::utils::ArrayBufferView tmp4 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(487)
					::lime::utils::ArrayBufferView _this = tmp4;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(487)
					_this->byteOffset = (int)0;
					HX_STACK_LINE(487)
					int tmp5 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(487)
					_this->length = tmp5;
					HX_STACK_LINE(487)
					int tmp6 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(487)
					_this->byteLength = tmp6;
					HX_STACK_LINE(487)
					::haxe::io::Bytes tmp7;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(487)
					{
						HX_STACK_LINE(487)
						::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
						HX_STACK_LINE(487)
						int tmp8 = _this->byteLength;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(487)
						::haxe::io::Bytes tmp9 = ::haxe::io::Bytes_obj::alloc(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(487)
						this2 = tmp9;
						HX_STACK_LINE(487)
						tmp7 = this2;
					}
					HX_STACK_LINE(487)
					_this->buffer = tmp7;
					HX_STACK_LINE(487)
					_this->copyFromArray(((Array< Float >)(null())),null());
					HX_STACK_LINE(487)
					tmp3 = _this;
				}
				HX_STACK_LINE(487)
				this1 = tmp3;
			}
			else{
				HX_STACK_LINE(487)
				bool tmp3 = false;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(487)
				if ((tmp3)){
					HX_STACK_LINE(487)
					::lime::utils::ArrayBufferView tmp4;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(487)
					{
						HX_STACK_LINE(487)
						::lime::utils::ArrayBufferView tmp5 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(487)
						::lime::utils::ArrayBufferView _this = tmp5;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(487)
						::haxe::io::Bytes tmp6 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(487)
						::haxe::io::Bytes srcData = tmp6;		HX_STACK_VAR(srcData,"srcData");
						HX_STACK_LINE(487)
						int tmp7 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(487)
						int srcLength = tmp7;		HX_STACK_VAR(srcLength,"srcLength");
						HX_STACK_LINE(487)
						int tmp8 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(487)
						int srcByteOffset = tmp8;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
						HX_STACK_LINE(487)
						int tmp9 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(487)
						int srcElementSize = tmp9;		HX_STACK_VAR(srcElementSize,"srcElementSize");
						HX_STACK_LINE(487)
						int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
						HX_STACK_LINE(487)
						int tmp10 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(487)
						int tmp11 = _this->type;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(487)
						bool tmp12 = (tmp10 == tmp11);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(487)
						if ((tmp12)){
							HX_STACK_LINE(487)
							int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
							HX_STACK_LINE(487)
							int tmp13 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(487)
							int cloneLength = tmp13;		HX_STACK_VAR(cloneLength,"cloneLength");
							HX_STACK_LINE(487)
							::haxe::io::Bytes tmp14;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(487)
							{
								HX_STACK_LINE(487)
								::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
								HX_STACK_LINE(487)
								int tmp15 = cloneLength;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(487)
								::haxe::io::Bytes tmp16 = ::haxe::io::Bytes_obj::alloc(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(487)
								this2 = tmp16;
								HX_STACK_LINE(487)
								tmp14 = this2;
							}
							HX_STACK_LINE(487)
							_this->buffer = tmp14;
							HX_STACK_LINE(487)
							::haxe::io::Bytes tmp15 = srcData;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(487)
							int tmp16 = srcByteOffset;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(487)
							int tmp17 = cloneLength;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(487)
							_this->buffer->blit((int)0,tmp15,tmp16,tmp17);
						}
						else{
							HX_STACK_LINE(487)
							HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
						}
						HX_STACK_LINE(487)
						int tmp13 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(487)
						_this->byteLength = tmp13;
						HX_STACK_LINE(487)
						_this->byteOffset = (int)0;
						HX_STACK_LINE(487)
						_this->length = srcLength;
						HX_STACK_LINE(487)
						tmp4 = _this;
					}
					HX_STACK_LINE(487)
					this1 = tmp4;
				}
				else{
					HX_STACK_LINE(487)
					bool tmp4 = false;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(487)
					if ((tmp4)){
						HX_STACK_LINE(487)
						::lime::utils::ArrayBufferView tmp5;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(487)
						{
							HX_STACK_LINE(487)
							::lime::utils::ArrayBufferView tmp6 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(487)
							::lime::utils::ArrayBufferView _this = tmp6;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(487)
							bool tmp7 = false;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(487)
							if ((tmp7)){
								HX_STACK_LINE(487)
								HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
							}
							HX_STACK_LINE(487)
							int tmp8 = hx::Mod((int)0,_this->bytesPerElement);		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(487)
							bool tmp9 = (tmp8 != (int)0);		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(487)
							if ((tmp9)){
								HX_STACK_LINE(487)
								HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
							}
							HX_STACK_LINE(487)
							int tmp10 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(487)
							int bufferByteLength = tmp10;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
							HX_STACK_LINE(487)
							int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
							HX_STACK_LINE(487)
							int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
							HX_STACK_LINE(487)
							bool tmp11 = true;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(487)
							if ((tmp11)){
								HX_STACK_LINE(487)
								int tmp12 = bufferByteLength;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(487)
								newByteLength = tmp12;
								HX_STACK_LINE(487)
								int tmp13 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(487)
								bool tmp14 = (tmp13 != (int)0);		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(487)
								if ((tmp14)){
									HX_STACK_LINE(487)
									HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
								}
								HX_STACK_LINE(487)
								bool tmp15 = (newByteLength < (int)0);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(487)
								if ((tmp15)){
									HX_STACK_LINE(487)
									HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
								}
							}
							else{
								HX_STACK_LINE(487)
								int tmp12 = (null() * _this->bytesPerElement);		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(487)
								newByteLength = tmp12;
								HX_STACK_LINE(487)
								int tmp13 = newByteLength;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(487)
								int newRange = tmp13;		HX_STACK_VAR(newRange,"newRange");
								HX_STACK_LINE(487)
								bool tmp14 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(487)
								if ((tmp14)){
									HX_STACK_LINE(487)
									HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
								}
							}
							HX_STACK_LINE(487)
							_this->buffer = null();
							HX_STACK_LINE(487)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(487)
							_this->byteLength = newByteLength;
							HX_STACK_LINE(487)
							Float tmp12 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(487)
							int tmp13 = ::Std_obj::_int(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(487)
							_this->length = tmp13;
							HX_STACK_LINE(487)
							tmp5 = _this;
						}
						HX_STACK_LINE(487)
						this1 = tmp5;
					}
					else{
						HX_STACK_LINE(487)
						HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Float32Array","\x8e","\xc1","\xf4","\xd4"));
					}
				}
			}
		}
		HX_STACK_LINE(487)
		tmp = this1;
	}
	HX_STACK_LINE(487)
	::lime::utils::ArrayBufferView result = tmp;		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(489)
	{
		HX_STACK_LINE(489)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(489)
		while((true)){
			HX_STACK_LINE(489)
			bool tmp1 = (_g < size);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(489)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(489)
			if ((tmp2)){
				HX_STACK_LINE(489)
				break;
			}
			HX_STACK_LINE(489)
			int tmp3 = (_g)++;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(489)
			int i = tmp3;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(491)
			{
				HX_STACK_LINE(491)
				Float tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(491)
				{
					HX_STACK_LINE(491)
					::lime::utils::ArrayBufferView tmp5 = this->regData;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(491)
					::lime::utils::ArrayBufferView this1 = tmp5;		HX_STACK_VAR(this1,"this1");
					HX_STACK_LINE(491)
					tmp4 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (((index + i)) * (int)4)));
				}
				HX_STACK_LINE(491)
				Float val = tmp4;		HX_STACK_VAR(val,"val");
				HX_STACK_LINE(491)
				::__hxcpp_memory_set_float(result->buffer->b,(result->byteOffset + (i * (int)4)),val);
				HX_STACK_LINE(491)
				val;
			}
		}
	}
	HX_STACK_LINE(495)
	::lime::utils::ArrayBufferView tmp1 = result;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(495)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC2(Uniform_obj,__getRegisters,return )


Uniform_obj::Uniform_obj()
{
}

void Uniform_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Uniform);
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(location,"location");
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_MEMBER_NAME(size,"size");
	HX_MARK_MEMBER_NAME(regData,"regData");
	HX_MARK_MEMBER_NAME(regIndex,"regIndex");
	HX_MARK_MEMBER_NAME(regCount,"regCount");
	HX_MARK_MEMBER_NAME(isDirty,"isDirty");
	HX_MARK_END_CLASS();
}

void Uniform_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(location,"location");
	HX_VISIT_MEMBER_NAME(type,"type");
	HX_VISIT_MEMBER_NAME(size,"size");
	HX_VISIT_MEMBER_NAME(regData,"regData");
	HX_VISIT_MEMBER_NAME(regIndex,"regIndex");
	HX_VISIT_MEMBER_NAME(regCount,"regCount");
	HX_VISIT_MEMBER_NAME(isDirty,"isDirty");
}

Dynamic Uniform_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return name; }
		if (HX_FIELD_EQ(inName,"type") ) { return type; }
		if (HX_FIELD_EQ(inName,"size") ) { return size; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"flush") ) { return flush_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"regData") ) { return regData; }
		if (HX_FIELD_EQ(inName,"isDirty") ) { return isDirty; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"location") ) { return location; }
		if (HX_FIELD_EQ(inName,"regIndex") ) { return regIndex; }
		if (HX_FIELD_EQ(inName,"regCount") ) { return regCount; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__getRegisters") ) { return __getRegisters_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Uniform_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"size") ) { size=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"regData") ) { regData=inValue.Cast< ::lime::utils::ArrayBufferView >(); return inValue; }
		if (HX_FIELD_EQ(inName,"isDirty") ) { isDirty=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"location") ) { location=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"regIndex") ) { regIndex=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"regCount") ) { regCount=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Uniform_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"));
	outFields->push(HX_HCSTRING("location","\x35","\x6e","\x46","\xe5"));
	outFields->push(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"));
	outFields->push(HX_HCSTRING("size","\xc1","\xa0","\x53","\x4c"));
	outFields->push(HX_HCSTRING("regData","\x9e","\x95","\x1c","\x62"));
	outFields->push(HX_HCSTRING("regIndex","\x1e","\xe1","\x72","\x60"));
	outFields->push(HX_HCSTRING("regCount","\xdb","\x8a","\xc1","\xec"));
	outFields->push(HX_HCSTRING("isDirty","\xc8","\xf3","\x55","\x76"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(Uniform_obj,name),HX_HCSTRING("name","\x4b","\x72","\xff","\x48")},
	{hx::fsInt,(int)offsetof(Uniform_obj,location),HX_HCSTRING("location","\x35","\x6e","\x46","\xe5")},
	{hx::fsInt,(int)offsetof(Uniform_obj,type),HX_HCSTRING("type","\xba","\xf2","\x08","\x4d")},
	{hx::fsInt,(int)offsetof(Uniform_obj,size),HX_HCSTRING("size","\xc1","\xa0","\x53","\x4c")},
	{hx::fsObject /*::lime::utils::ArrayBufferView*/ ,(int)offsetof(Uniform_obj,regData),HX_HCSTRING("regData","\x9e","\x95","\x1c","\x62")},
	{hx::fsInt,(int)offsetof(Uniform_obj,regIndex),HX_HCSTRING("regIndex","\x1e","\xe1","\x72","\x60")},
	{hx::fsInt,(int)offsetof(Uniform_obj,regCount),HX_HCSTRING("regCount","\xdb","\x8a","\xc1","\xec")},
	{hx::fsBool,(int)offsetof(Uniform_obj,isDirty),HX_HCSTRING("isDirty","\xc8","\xf3","\x55","\x76")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("name","\x4b","\x72","\xff","\x48"),
	HX_HCSTRING("location","\x35","\x6e","\x46","\xe5"),
	HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"),
	HX_HCSTRING("size","\xc1","\xa0","\x53","\x4c"),
	HX_HCSTRING("regData","\x9e","\x95","\x1c","\x62"),
	HX_HCSTRING("regIndex","\x1e","\xe1","\x72","\x60"),
	HX_HCSTRING("regCount","\xdb","\x8a","\xc1","\xec"),
	HX_HCSTRING("isDirty","\xc8","\xf3","\x55","\x76"),
	HX_HCSTRING("flush","\xc4","\x62","\x9b","\x02"),
	HX_HCSTRING("__getRegisters","\x5a","\x10","\x29","\xeb"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Uniform_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Uniform_obj::__mClass,"__mClass");
};

#endif

hx::Class Uniform_obj::__mClass;

void Uniform_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.display3D._Program3D.Uniform","\x35","\x84","\x9c","\x78");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Uniform_obj >;
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
} // end namespace _Program3D
