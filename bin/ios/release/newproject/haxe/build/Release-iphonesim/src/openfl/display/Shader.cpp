#include <hxcpp.h>

#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_graphics_GLRenderContext
#include <lime/graphics/GLRenderContext.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GL
#include <lime/graphics/opengl/GL.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLObject
#include <lime/graphics/opengl/GLObject.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLProgram
#include <lime/graphics/opengl/GLProgram.h>
#endif
#ifndef INCLUDED_lime_utils_GLUtils
#include <lime/utils/GLUtils.h>
#endif
#ifndef INCLUDED_openfl_display_Shader
#include <openfl/display/Shader.h>
#endif
#ifndef INCLUDED_openfl_display_ShaderData
#include <openfl/display/ShaderData.h>
#endif
#ifndef INCLUDED_openfl_display_ShaderInput
#include <openfl/display/ShaderInput.h>
#endif
#ifndef INCLUDED_openfl_display_ShaderParameter
#include <openfl/display/ShaderParameter.h>
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
namespace openfl{
namespace display{

Void Shader_obj::__construct(::openfl::utils::ByteArrayData code)
{
HX_STACK_FRAME("openfl.display.Shader","new",0x88fbb381,"openfl.display.Shader.new","openfl/display/Shader.hx",26,0xae8f5dcd)
HX_STACK_THIS(this)
HX_STACK_ARG(code,"code")
{
	HX_STACK_LINE(28)
	this->byteCode = code;
	HX_STACK_LINE(29)
	this->precisionHint = ((Dynamic)((int)1));
	HX_STACK_LINE(31)
	::String tmp = this->glVertexSource;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(31)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(31)
	if ((tmp1)){
		HX_STACK_LINE(33)
		this->glVertexSource = HX_HCSTRING("attribute float aAlpha;\n\t\t\t\tattribute vec4 aPosition;\n\t\t\t\tattribute vec2 aTexCoord;\n\t\t\t\tvarying float vAlpha;\n\t\t\t\tvarying vec2 vTexCoord;\n\t\t\t\t\n\t\t\t\tuniform mat4 uMatrix;\n\t\t\t\t\n\t\t\t\tvoid main(void) {\n\t\t\t\t\t\n\t\t\t\t\tvAlpha = aAlpha;\n\t\t\t\t\tvTexCoord = aTexCoord;\n\t\t\t\t\tgl_Position = uMatrix * aPosition;\n\t\t\t\t\t\n\t\t\t\t}","\x62","\x40","\xfa","\xec");
	}
	HX_STACK_LINE(53)
	::String tmp2 = this->glFragmentSource;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(53)
	bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(53)
	if ((tmp3)){
		HX_STACK_LINE(55)
		this->glFragmentSource = HX_HCSTRING("varying float vAlpha;\n\t\t\t\tvarying vec2 vTexCoord;\n\t\t\t\tuniform sampler2D uImage0;\n\t\t\t\t\n\t\t\t\tvoid main(void) {\n\t\t\t\t\t\n\t\t\t\t\tvec4 color = texture2D (uImage0, vTexCoord);\n\t\t\t\t\t\n\t\t\t\t\tif (color.a == 0.0) {\n\t\t\t\t\t\t\n\t\t\t\t\t\tgl_FragColor = vec4 (0.0, 0.0, 0.0, 0.0);\n\t\t\t\t\t\t\n\t\t\t\t\t} else {\n\t\t\t\t\t\t\n\t\t\t\t\t\tgl_FragColor = vec4 (color.rgb / color.a, color.a * vAlpha);\n\t\t\t\t\t\t\n\t\t\t\t\t}\n\t\t\t\t\t\n\t\t\t\t}","\x51","\xe9","\x90","\x31");
	}
	HX_STACK_LINE(79)
	this->__init();
}
;
	return null();
}

//Shader_obj::~Shader_obj() { }

Dynamic Shader_obj::__CreateEmpty() { return  new Shader_obj; }
hx::ObjectPtr< Shader_obj > Shader_obj::__new(::openfl::utils::ByteArrayData code)
{  hx::ObjectPtr< Shader_obj > _result_ = new Shader_obj();
	_result_->__construct(code);
	return _result_;}

Dynamic Shader_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Shader_obj > _result_ = new Shader_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void Shader_obj::__disable( ){
{
		HX_STACK_FRAME("openfl.display.Shader","__disable",0x171f2ca9,"openfl.display.Shader.__disable","openfl/display/Shader.hx",84,0xae8f5dcd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(86)
		::lime::graphics::opengl::GLProgram tmp = this->glProgram;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(86)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(86)
		if ((tmp1)){
			HX_STACK_LINE(88)
			Dynamic value;		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(88)
			::openfl::display::ShaderParameter parameter;		HX_STACK_VAR(parameter,"parameter");
			HX_STACK_LINE(90)
			{
				HX_STACK_LINE(90)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(90)
				::openfl::display::ShaderData tmp2 = this->data;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(90)
				Array< ::String > _g1 = ::Reflect_obj::fields(tmp2);		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(90)
				while((true)){
					HX_STACK_LINE(90)
					bool tmp3 = (_g < _g1->length);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(90)
					bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(90)
					if ((tmp4)){
						HX_STACK_LINE(90)
						break;
					}
					HX_STACK_LINE(90)
					::String tmp5 = _g1->__get(_g);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(90)
					::String field = tmp5;		HX_STACK_VAR(field,"field");
					HX_STACK_LINE(90)
					++(_g);
					HX_STACK_LINE(92)
					::openfl::display::ShaderData tmp6 = this->data;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(92)
					::String tmp7 = field;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(92)
					Dynamic tmp8 = ::Reflect_obj::field(tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(92)
					value = tmp8;
					HX_STACK_LINE(94)
					Dynamic tmp9 = value;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(94)
					bool tmp10 = ::Std_obj::is(tmp9,hx::ClassOf< ::openfl::display::ShaderParameter >());		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(94)
					if ((tmp10)){
						HX_STACK_LINE(96)
						parameter = ((::openfl::display::ShaderParameter)(value));
						HX_STACK_LINE(98)
						{
							HX_STACK_LINE(98)
							Dynamic _g2 = parameter->type;		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(98)
							Dynamic tmp11 = _g2;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(98)
							switch( (int)(tmp11)){
								case (int)1: case (int)2: case (int)3: case (int)9: case (int)10: case (int)11: case (int)5: case (int)6: case (int)7: {
									HX_STACK_LINE(102)
									int index = parameter->index;		HX_STACK_VAR(index,"index");
									HX_STACK_LINE(102)
									::lime::graphics::opengl::GL_obj::cffi_lime_gl_disable_vertex_attrib_array.call(index);
								}
								;break;
								default: {
								}
							}
						}
					}
				}
			}
			HX_STACK_LINE(112)
			::lime::graphics::opengl::GL_obj::cffi_lime_gl_bind_buffer.call(this->gl->ARRAY_BUFFER,hx::DynamicPtr(null()));
			HX_STACK_LINE(113)
			::lime::graphics::opengl::GL_obj::cffi_lime_gl_bind_texture.call(this->gl->TEXTURE_2D,hx::DynamicPtr(null()));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Shader_obj,__disable,(void))

Void Shader_obj::__enable( ){
{
		HX_STACK_FRAME("openfl.display.Shader","__enable",0x8f5f3ee2,"openfl.display.Shader.__enable","openfl/display/Shader.hx",124,0xae8f5dcd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(126)
		this->__init();
		HX_STACK_LINE(128)
		::lime::graphics::opengl::GLProgram tmp = this->glProgram;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(128)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(128)
		if ((tmp1)){
			HX_STACK_LINE(130)
			::openfl::display::ShaderParameter parameter;		HX_STACK_VAR(parameter,"parameter");
			HX_STACK_LINE(130)
			Dynamic value;		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(131)
			int textureCount = (int)0;		HX_STACK_VAR(textureCount,"textureCount");
			HX_STACK_LINE(133)
			{
				HX_STACK_LINE(133)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(133)
				::openfl::display::ShaderData tmp2 = this->data;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(133)
				Array< ::String > _g1 = ::Reflect_obj::fields(tmp2);		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(133)
				while((true)){
					HX_STACK_LINE(133)
					bool tmp3 = (_g < _g1->length);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(133)
					bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(133)
					if ((tmp4)){
						HX_STACK_LINE(133)
						break;
					}
					HX_STACK_LINE(133)
					::String tmp5 = _g1->__get(_g);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(133)
					::String field = tmp5;		HX_STACK_VAR(field,"field");
					HX_STACK_LINE(133)
					++(_g);
					HX_STACK_LINE(135)
					::openfl::display::ShaderData tmp6 = this->data;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(135)
					::String tmp7 = field;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(135)
					Dynamic tmp8 = ::Reflect_obj::field(tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(135)
					value = tmp8;
					HX_STACK_LINE(137)
					Dynamic tmp9 = value;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(137)
					bool tmp10 = ::Std_obj::is(tmp9,hx::ClassOf< ::openfl::display::ShaderInput >());		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(137)
					if ((tmp10)){
						HX_STACK_LINE(139)
						::lime::graphics::opengl::GL_obj::cffi_lime_gl_uniform1i.call(value->__Field(HX_HCSTRING("index","\x12","\x9b","\x14","\xbe"), hx::paccDynamic ),textureCount);
						HX_STACK_LINE(140)
						(textureCount)++;
					}
					else{
						HX_STACK_LINE(144)
						parameter = ((::openfl::display::ShaderParameter)(value));
						HX_STACK_LINE(146)
						{
							HX_STACK_LINE(146)
							Dynamic _g2 = parameter->type;		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(146)
							Dynamic tmp11 = _g2;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(146)
							switch( (int)(tmp11)){
								case (int)1: case (int)2: case (int)3: case (int)9: case (int)10: case (int)11: case (int)5: case (int)6: case (int)7: {
									HX_STACK_LINE(150)
									int index = parameter->index;		HX_STACK_VAR(index,"index");
									HX_STACK_LINE(150)
									::lime::graphics::opengl::GL_obj::cffi_lime_gl_enable_vertex_attrib_array.call(index);
								}
								;break;
								default: {
								}
							}
						}
					}
				}
			}
			HX_STACK_LINE(160)
			bool tmp2 = (textureCount > (int)0);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(160)
			if ((tmp2)){
				HX_STACK_LINE(162)
				::lime::graphics::opengl::GL_obj::cffi_lime_gl_active_texture.call(this->gl->TEXTURE0);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Shader_obj,__enable,(void))

Void Shader_obj::__init( ){
{
		HX_STACK_FRAME("openfl.display.Shader","__init",0x2faba5af,"openfl.display.Shader.__init","openfl/display/Shader.hx",175,0xae8f5dcd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(177)
		::openfl::display::ShaderData tmp = this->data;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(177)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(177)
		if ((tmp1)){
			HX_STACK_LINE(179)
			::openfl::display::ShaderData tmp2 = ::openfl::display::ShaderData_obj::__new(null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(179)
			this->data = tmp2;
		}
		HX_STACK_LINE(183)
		::lime::graphics::GLRenderContext tmp2 = this->gl;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(183)
		bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(183)
		bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(183)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(183)
		if ((tmp4)){
			HX_STACK_LINE(183)
			::lime::graphics::opengl::GLProgram tmp6 = this->glProgram;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(183)
			::lime::graphics::opengl::GLProgram tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(183)
			::lime::graphics::opengl::GLProgram tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(183)
			tmp5 = (tmp8 == null());
		}
		else{
			HX_STACK_LINE(183)
			tmp5 = false;
		}
		HX_STACK_LINE(183)
		bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(183)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(183)
		if ((tmp6)){
			HX_STACK_LINE(183)
			::String tmp8 = this->glFragmentSource;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(183)
			::String tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(183)
			::String tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(183)
			tmp7 = (tmp10 != null());
		}
		else{
			HX_STACK_LINE(183)
			tmp7 = false;
		}
		HX_STACK_LINE(183)
		bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(183)
		if ((tmp7)){
			HX_STACK_LINE(183)
			::String tmp9 = this->glVertexSource;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(183)
			::String tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(183)
			tmp8 = (tmp10 != null());
		}
		else{
			HX_STACK_LINE(183)
			tmp8 = false;
		}
		HX_STACK_LINE(183)
		if ((tmp8)){
			HX_STACK_LINE(188)
			Dynamic tmp9 = this->precisionHint;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(188)
			bool tmp10 = (tmp9 == ((Dynamic)((int)1)));		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(188)
			::String tmp11;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(188)
			if ((tmp10)){
				HX_STACK_LINE(188)
				tmp11 = HX_HCSTRING("mediump","\x5b","\x92","\x81","\xf0");
			}
			else{
				HX_STACK_LINE(188)
				tmp11 = HX_HCSTRING("lowp","\x5c","\xad","\xb7","\x47");
			}
			HX_STACK_LINE(187)
			::String tmp12 = (HX_HCSTRING("#ifdef GL_ES\n\t\t\t\tprecision ","\xdf","\x92","\x6a","\x64") + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(187)
			::String tmp13 = (tmp12 + HX_HCSTRING(" float;\n\t\t\t\t#endif\n\t\t\t\t","\xea","\xd3","\x26","\xbb"));		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(190)
			::String tmp14 = this->glFragmentSource;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(187)
			::String tmp15 = (tmp13 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(187)
			::String fragment = tmp15;		HX_STACK_VAR(fragment,"fragment");
			HX_STACK_LINE(192)
			::String tmp16 = this->glVertexSource;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(192)
			::String tmp17 = fragment;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(192)
			::lime::graphics::opengl::GLProgram tmp18 = ::lime::utils::GLUtils_obj::createProgram(tmp16,tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(192)
			this->glProgram = tmp18;
			HX_STACK_LINE(194)
			::lime::graphics::opengl::GLProgram tmp19 = this->glProgram;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(194)
			bool tmp20 = (tmp19 != null());		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(194)
			if ((tmp20)){
				HX_STACK_LINE(196)
				::String tmp21 = this->glVertexSource;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(196)
				this->__processGLData(tmp21,HX_HCSTRING("attribute","\x1c","\x70","\xf0","\xfa"));
				HX_STACK_LINE(197)
				::String tmp22 = this->glVertexSource;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(197)
				this->__processGLData(tmp22,HX_HCSTRING("uniform","\x34","\x41","\x64","\xb5"));
				HX_STACK_LINE(198)
				::String tmp23 = this->glFragmentSource;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(198)
				this->__processGLData(tmp23,HX_HCSTRING("uniform","\x34","\x41","\x64","\xb5"));
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Shader_obj,__init,(void))

Void Shader_obj::__processGLData( ::String source,::String storageType){
{
		HX_STACK_FRAME("openfl.display.Shader","__processGLData",0x90b8a01f,"openfl.display.Shader.__processGLData","openfl/display/Shader.hx",207,0xae8f5dcd)
		HX_STACK_THIS(this)
		HX_STACK_ARG(source,"source")
		HX_STACK_ARG(storageType,"storageType")
		HX_STACK_LINE(209)
		int lastMatch = (int)0;		HX_STACK_VAR(lastMatch,"lastMatch");
		HX_STACK_LINE(209)
		Dynamic position;		HX_STACK_VAR(position,"position");
		HX_STACK_LINE(209)
		::EReg regex;		HX_STACK_VAR(regex,"regex");
		HX_STACK_LINE(209)
		::String name;		HX_STACK_VAR(name,"name");
		HX_STACK_LINE(209)
		::String type;		HX_STACK_VAR(type,"type");
		HX_STACK_LINE(211)
		bool tmp = (storageType == HX_HCSTRING("uniform","\x34","\x41","\x64","\xb5"));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(211)
		if ((tmp)){
			HX_STACK_LINE(213)
			::EReg tmp1 = ::EReg_obj::__new(HX_HCSTRING("uniform ([A-Za-z0-9]+) ([A-Za-z0-9]+)","\x74","\x9c","\x40","\x21"),HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(213)
			regex = tmp1;
		}
		else{
			HX_STACK_LINE(217)
			::EReg tmp1 = ::EReg_obj::__new(HX_HCSTRING("attribute ([A-Za-z0-9]+) ([A-Za-z0-9]+)","\x5c","\x61","\xa8","\xc8"),HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(217)
			regex = tmp1;
		}
		HX_STACK_LINE(221)
		while((true)){
			HX_STACK_LINE(221)
			::String tmp1 = source;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(221)
			int tmp2 = lastMatch;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(221)
			bool tmp3 = regex->matchSub(tmp1,tmp2,null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(221)
			bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(221)
			if ((tmp4)){
				HX_STACK_LINE(221)
				break;
			}
			HX_STACK_LINE(223)
			::String tmp5 = regex->matched((int)1);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(223)
			type = tmp5;
			HX_STACK_LINE(224)
			::String tmp6 = regex->matched((int)2);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(224)
			name = tmp6;
			HX_STACK_LINE(226)
			::String tmp7 = type;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(226)
			bool tmp8 = ::StringTools_obj::startsWith(tmp7,HX_HCSTRING("sampler","\x08","\xc5","\xc9","\x83"));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(226)
			if ((tmp8)){
				HX_STACK_LINE(228)
				::openfl::display::ShaderInput tmp9 = ::openfl::display::ShaderInput_obj::__new();		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(228)
				::openfl::display::ShaderInput input = tmp9;		HX_STACK_VAR(input,"input");
				HX_STACK_LINE(230)
				bool tmp10 = (storageType == HX_HCSTRING("uniform","\x34","\x41","\x64","\xb5"));		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(230)
				if ((tmp10)){
					HX_STACK_LINE(232)
					input->index = ::lime::graphics::opengl::GL_obj::cffi_lime_gl_get_uniform_location.call(hx::DynamicPtr(this->glProgram->id),name);
				}
				else{
					HX_STACK_LINE(236)
					input->index = ::lime::graphics::opengl::GL_obj::cffi_lime_gl_get_attrib_location.call(hx::DynamicPtr(this->glProgram->id),name);
				}
				HX_STACK_LINE(240)
				::openfl::display::ShaderData tmp11 = this->data;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(240)
				::String tmp12 = name;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(240)
				::openfl::display::ShaderInput tmp13 = input;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(240)
				::Reflect_obj::setField(tmp11,tmp12,tmp13);
			}
			else{
				HX_STACK_LINE(244)
				::openfl::display::ShaderParameter tmp9 = ::openfl::display::ShaderParameter_obj::__new();		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(244)
				::openfl::display::ShaderParameter parameter = tmp9;		HX_STACK_VAR(parameter,"parameter");
				HX_STACK_LINE(246)
				::String tmp10 = type;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(246)
				Dynamic tmp11;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(246)
				::String _switch_1 = (tmp10);
				if (  ( _switch_1==HX_HCSTRING("bool","\x2a","\x84","\x1b","\x41"))){
					HX_STACK_LINE(248)
					tmp11 = ((Dynamic)((int)0));
				}
				else if (  ( _switch_1==HX_HCSTRING("double","\x11","\x2b","\xcb","\x32")) ||  ( _switch_1==HX_HCSTRING("float","\x9c","\xc5","\x96","\x02"))){
					HX_STACK_LINE(249)
					tmp11 = ((Dynamic)((int)4));
				}
				else if (  ( _switch_1==HX_HCSTRING("int","\xef","\x0c","\x50","\x00")) ||  ( _switch_1==HX_HCSTRING("uint","\x9a","\x03","\xa6","\x4d"))){
					HX_STACK_LINE(250)
					tmp11 = ((Dynamic)((int)8));
				}
				else if (  ( _switch_1==HX_HCSTRING("bvec2","\xc0","\x00","\x91","\xbb"))){
					HX_STACK_LINE(251)
					tmp11 = ((Dynamic)((int)1));
				}
				else if (  ( _switch_1==HX_HCSTRING("bvec3","\xc1","\x00","\x91","\xbb"))){
					HX_STACK_LINE(252)
					tmp11 = ((Dynamic)((int)2));
				}
				else if (  ( _switch_1==HX_HCSTRING("bvec4","\xc2","\x00","\x91","\xbb"))){
					HX_STACK_LINE(253)
					tmp11 = ((Dynamic)((int)3));
				}
				else if (  ( _switch_1==HX_HCSTRING("ivec2","\x47","\x10","\x5f","\xc3")) ||  ( _switch_1==HX_HCSTRING("uvec2","\x53","\x06","\x2e","\xac"))){
					HX_STACK_LINE(254)
					tmp11 = ((Dynamic)((int)9));
				}
				else if (  ( _switch_1==HX_HCSTRING("ivec3","\x48","\x10","\x5f","\xc3")) ||  ( _switch_1==HX_HCSTRING("uvec3","\x54","\x06","\x2e","\xac"))){
					HX_STACK_LINE(255)
					tmp11 = ((Dynamic)((int)10));
				}
				else if (  ( _switch_1==HX_HCSTRING("ivec4","\x49","\x10","\x5f","\xc3")) ||  ( _switch_1==HX_HCSTRING("uvec4","\x55","\x06","\x2e","\xac"))){
					HX_STACK_LINE(256)
					tmp11 = ((Dynamic)((int)11));
				}
				else if (  ( _switch_1==HX_HCSTRING("vec2","\x5e","\x27","\x4c","\x4e")) ||  ( _switch_1==HX_HCSTRING("dvec2","\xc2","\x29","\x5e","\xe2"))){
					HX_STACK_LINE(257)
					tmp11 = ((Dynamic)((int)5));
				}
				else if (  ( _switch_1==HX_HCSTRING("vec3","\x5f","\x27","\x4c","\x4e")) ||  ( _switch_1==HX_HCSTRING("dvec3","\xc3","\x29","\x5e","\xe2"))){
					HX_STACK_LINE(258)
					tmp11 = ((Dynamic)((int)6));
				}
				else if (  ( _switch_1==HX_HCSTRING("vec4","\x60","\x27","\x4c","\x4e")) ||  ( _switch_1==HX_HCSTRING("dvec4","\xc4","\x29","\x5e","\xe2"))){
					HX_STACK_LINE(259)
					tmp11 = ((Dynamic)((int)7));
				}
				else if (  ( _switch_1==HX_HCSTRING("mat2","\x92","\x41","\x56","\x48")) ||  ( _switch_1==HX_HCSTRING("mat2x2","\xcc","\xb2","\x97","\xbb"))){
					HX_STACK_LINE(260)
					tmp11 = ((Dynamic)((int)12));
				}
				else if (  ( _switch_1==HX_HCSTRING("mat2x3","\xcd","\xb2","\x97","\xbb"))){
					HX_STACK_LINE(261)
					tmp11 = ((Dynamic)((int)13));
				}
				else if (  ( _switch_1==HX_HCSTRING("mat2x4","\xce","\xb2","\x97","\xbb"))){
					HX_STACK_LINE(262)
					tmp11 = ((Dynamic)((int)14));
				}
				else if (  ( _switch_1==HX_HCSTRING("mat3x2","\x0d","\x75","\x98","\xbb"))){
					HX_STACK_LINE(263)
					tmp11 = ((Dynamic)((int)15));
				}
				else if (  ( _switch_1==HX_HCSTRING("mat3","\x93","\x41","\x56","\x48")) ||  ( _switch_1==HX_HCSTRING("mat3x3","\x0e","\x75","\x98","\xbb"))){
					HX_STACK_LINE(264)
					tmp11 = ((Dynamic)((int)16));
				}
				else if (  ( _switch_1==HX_HCSTRING("mat3x4","\x0f","\x75","\x98","\xbb"))){
					HX_STACK_LINE(265)
					tmp11 = ((Dynamic)((int)17));
				}
				else if (  ( _switch_1==HX_HCSTRING("mat4x2","\x4e","\x37","\x99","\xbb"))){
					HX_STACK_LINE(266)
					tmp11 = ((Dynamic)((int)18));
				}
				else if (  ( _switch_1==HX_HCSTRING("mat4x3","\x4f","\x37","\x99","\xbb"))){
					HX_STACK_LINE(267)
					tmp11 = ((Dynamic)((int)19));
				}
				else if (  ( _switch_1==HX_HCSTRING("mat4","\x94","\x41","\x56","\x48")) ||  ( _switch_1==HX_HCSTRING("mat4x4","\x50","\x37","\x99","\xbb"))){
					HX_STACK_LINE(268)
					tmp11 = ((Dynamic)((int)20));
				}
				else  {
					HX_STACK_LINE(269)
					tmp11 = null();
				}
;
;
				HX_STACK_LINE(246)
				parameter->type = tmp11;
				HX_STACK_LINE(273)
				bool tmp12 = (storageType == HX_HCSTRING("uniform","\x34","\x41","\x64","\xb5"));		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(273)
				if ((tmp12)){
					HX_STACK_LINE(275)
					parameter->index = ::lime::graphics::opengl::GL_obj::cffi_lime_gl_get_uniform_location.call(hx::DynamicPtr(this->glProgram->id),name);
				}
				else{
					HX_STACK_LINE(279)
					parameter->index = ::lime::graphics::opengl::GL_obj::cffi_lime_gl_get_attrib_location.call(hx::DynamicPtr(this->glProgram->id),name);
				}
				HX_STACK_LINE(283)
				::openfl::display::ShaderData tmp13 = this->data;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(283)
				::String tmp14 = name;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(283)
				::openfl::display::ShaderParameter tmp15 = parameter;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(283)
				::Reflect_obj::setField(tmp13,tmp14,tmp15);
			}
			HX_STACK_LINE(287)
			Dynamic tmp9 = regex->matchedPos();		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(287)
			position = tmp9;
			HX_STACK_LINE(288)
			int tmp10 = (position->__Field(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"), hx::paccDynamic ) + position->__Field(HX_HCSTRING("len","\xd5","\x4b","\x52","\x00"), hx::paccDynamic ));		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(288)
			lastMatch = tmp10;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Shader_obj,__processGLData,(void))


Shader_obj::Shader_obj()
{
}

void Shader_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Shader);
	HX_MARK_MEMBER_NAME(byteCode,"byteCode");
	HX_MARK_MEMBER_NAME(data,"data");
	HX_MARK_MEMBER_NAME(glFragmentSource,"glFragmentSource");
	HX_MARK_MEMBER_NAME(glProgram,"glProgram");
	HX_MARK_MEMBER_NAME(glVertexSource,"glVertexSource");
	HX_MARK_MEMBER_NAME(precisionHint,"precisionHint");
	HX_MARK_MEMBER_NAME(gl,"gl");
	HX_MARK_END_CLASS();
}

void Shader_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(byteCode,"byteCode");
	HX_VISIT_MEMBER_NAME(data,"data");
	HX_VISIT_MEMBER_NAME(glFragmentSource,"glFragmentSource");
	HX_VISIT_MEMBER_NAME(glProgram,"glProgram");
	HX_VISIT_MEMBER_NAME(glVertexSource,"glVertexSource");
	HX_VISIT_MEMBER_NAME(precisionHint,"precisionHint");
	HX_VISIT_MEMBER_NAME(gl,"gl");
}

Dynamic Shader_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"gl") ) { return gl; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { return data; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"__init") ) { return __init_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"byteCode") ) { return byteCode; }
		if (HX_FIELD_EQ(inName,"__enable") ) { return __enable_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"glProgram") ) { return glProgram; }
		if (HX_FIELD_EQ(inName,"__disable") ) { return __disable_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"precisionHint") ) { return precisionHint; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"glVertexSource") ) { return glVertexSource; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__processGLData") ) { return __processGLData_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"glFragmentSource") ) { return glFragmentSource; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Shader_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"gl") ) { gl=inValue.Cast< ::lime::graphics::GLRenderContext >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { data=inValue.Cast< ::openfl::display::ShaderData >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"byteCode") ) { byteCode=inValue.Cast< ::openfl::utils::ByteArrayData >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"glProgram") ) { glProgram=inValue.Cast< ::lime::graphics::opengl::GLProgram >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"precisionHint") ) { precisionHint=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"glVertexSource") ) { glVertexSource=inValue.Cast< ::String >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"glFragmentSource") ) { glFragmentSource=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Shader_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("byteCode","\x55","\x20","\x71","\x42"));
	outFields->push(HX_HCSTRING("data","\x2a","\x56","\x63","\x42"));
	outFields->push(HX_HCSTRING("glFragmentSource","\xd0","\xc5","\xca","\xf7"));
	outFields->push(HX_HCSTRING("glProgram","\xdf","\xd6","\xb3","\xc1"));
	outFields->push(HX_HCSTRING("glVertexSource","\x24","\x6d","\x4a","\x5b"));
	outFields->push(HX_HCSTRING("precisionHint","\xe5","\xb5","\x95","\x2c"));
	outFields->push(HX_HCSTRING("gl","\x25","\x5a","\x00","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::utils::ByteArrayData*/ ,(int)offsetof(Shader_obj,byteCode),HX_HCSTRING("byteCode","\x55","\x20","\x71","\x42")},
	{hx::fsObject /*::openfl::display::ShaderData*/ ,(int)offsetof(Shader_obj,data),HX_HCSTRING("data","\x2a","\x56","\x63","\x42")},
	{hx::fsString,(int)offsetof(Shader_obj,glFragmentSource),HX_HCSTRING("glFragmentSource","\xd0","\xc5","\xca","\xf7")},
	{hx::fsObject /*::lime::graphics::opengl::GLProgram*/ ,(int)offsetof(Shader_obj,glProgram),HX_HCSTRING("glProgram","\xdf","\xd6","\xb3","\xc1")},
	{hx::fsString,(int)offsetof(Shader_obj,glVertexSource),HX_HCSTRING("glVertexSource","\x24","\x6d","\x4a","\x5b")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Shader_obj,precisionHint),HX_HCSTRING("precisionHint","\xe5","\xb5","\x95","\x2c")},
	{hx::fsObject /*::lime::graphics::GLRenderContext*/ ,(int)offsetof(Shader_obj,gl),HX_HCSTRING("gl","\x25","\x5a","\x00","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("byteCode","\x55","\x20","\x71","\x42"),
	HX_HCSTRING("data","\x2a","\x56","\x63","\x42"),
	HX_HCSTRING("glFragmentSource","\xd0","\xc5","\xca","\xf7"),
	HX_HCSTRING("glProgram","\xdf","\xd6","\xb3","\xc1"),
	HX_HCSTRING("glVertexSource","\x24","\x6d","\x4a","\x5b"),
	HX_HCSTRING("precisionHint","\xe5","\xb5","\x95","\x2c"),
	HX_HCSTRING("gl","\x25","\x5a","\x00","\x00"),
	HX_HCSTRING("__disable","\xc8","\xba","\xa6","\x32"),
	HX_HCSTRING("__enable","\xa3","\x19","\xb7","\xa0"),
	HX_HCSTRING("__init","\x30","\x9e","\xb3","\xf4"),
	HX_HCSTRING("__processGLData","\x7e","\x0f","\x78","\x7c"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Shader_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Shader_obj::__mClass,"__mClass");
};

#endif

hx::Class Shader_obj::__mClass;

void Shader_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.display.Shader","\x0f","\xdf","\x61","\xa7");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Shader_obj >;
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
} // end namespace display
