#include <hxcpp.h>

#ifndef INCLUDED_Lambda
#include <Lambda.h>
#endif
#ifndef INCLUDED_List
#include <List.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED__List_ListIterator
#include <_List/ListIterator.h>
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
#ifndef INCLUDED_lime_graphics_opengl_GLObject
#include <lime/graphics/opengl/GLObject.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLProgram
#include <lime/graphics/opengl/GLProgram.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLShader
#include <lime/graphics/opengl/GLShader.h>
#endif
#ifndef INCLUDED_lime_utils_ArrayBufferView
#include <lime/utils/ArrayBufferView.h>
#endif
#ifndef INCLUDED_lime_utils_Log
#include <lime/utils/Log.h>
#endif
#ifndef INCLUDED_openfl__Vector_IVector
#include <openfl/_Vector/IVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_ObjectVector
#include <openfl/_Vector/ObjectVector.h>
#endif
#ifndef INCLUDED_openfl__internal_stage3D_AGALConverter
#include <openfl/_internal/stage3D/AGALConverter.h>
#endif
#ifndef INCLUDED_openfl__internal_stage3D_GLUtils
#include <openfl/_internal/stage3D/GLUtils.h>
#endif
#ifndef INCLUDED_openfl__internal_stage3D_SamplerState
#include <openfl/_internal/stage3D/SamplerState.h>
#endif
#ifndef INCLUDED_openfl_display3D_Context3D
#include <openfl/display3D/Context3D.h>
#endif
#ifndef INCLUDED_openfl_display3D_Program3D
#include <openfl/display3D/Program3D.h>
#endif
#ifndef INCLUDED_openfl_display3D__Program3D_Uniform
#include <openfl/display3D/_Program3D/Uniform.h>
#endif
#ifndef INCLUDED_openfl_display3D__Program3D_UniformMap
#include <openfl/display3D/_Program3D/UniformMap.h>
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
namespace display3D{

Void Program3D_obj::__construct(::openfl::display3D::Context3D context3D)
{
HX_STACK_FRAME("openfl.display3D.Program3D","new",0xcbd1926e,"openfl.display3D.Program3D.new","openfl/display3D/Program3D.hx",43,0x0a985b04)
HX_STACK_THIS(this)
HX_STACK_ARG(context3D,"context3D")
{
	HX_STACK_LINE(45)
	this->__context = context3D;
	HX_STACK_LINE(47)
	this->__memUsage = (int)0;
	HX_STACK_LINE(48)
	this->__samplerUsageMask = (int)0;
	HX_STACK_LINE(50)
	::List tmp = ::List_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(50)
	this->__uniforms = tmp;
	HX_STACK_LINE(51)
	::List tmp1 = ::List_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(51)
	this->__samplerUniforms = tmp1;
	HX_STACK_LINE(52)
	::List tmp2 = ::List_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(52)
	this->__alphaSamplerUniforms = tmp2;
	HX_STACK_LINE(54)
	::openfl::_Vector::ObjectVector tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(54)
	{
		HX_STACK_LINE(54)
		bool fixed = null();		HX_STACK_VAR(fixed,"fixed");
		HX_STACK_LINE(54)
		::openfl::_Vector::ObjectVector tmp4 = ::openfl::_Vector::ObjectVector_obj::__new((int)8,fixed,null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(54)
		::openfl::_Vector::ObjectVector tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(54)
		tmp3 = tmp5;
	}
	HX_STACK_LINE(54)
	this->__samplerStates = tmp3;
}
;
	return null();
}

//Program3D_obj::~Program3D_obj() { }

Dynamic Program3D_obj::__CreateEmpty() { return  new Program3D_obj; }
hx::ObjectPtr< Program3D_obj > Program3D_obj::__new(::openfl::display3D::Context3D context3D)
{  hx::ObjectPtr< Program3D_obj > _result_ = new Program3D_obj();
	_result_->__construct(context3D);
	return _result_;}

Dynamic Program3D_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Program3D_obj > _result_ = new Program3D_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void Program3D_obj::dispose( ){
{
		HX_STACK_FRAME("openfl.display3D.Program3D","dispose",0x556f61ad,"openfl.display3D.Program3D.dispose","openfl/display3D/Program3D.hx",61,0x0a985b04)
		HX_STACK_THIS(this)
		HX_STACK_LINE(61)
		this->__deleteShaders();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Program3D_obj,dispose,(void))

Void Program3D_obj::upload( ::openfl::utils::ByteArrayData vertexProgram,::openfl::utils::ByteArrayData fragmentProgram){
{
		HX_STACK_FRAME("openfl.display3D.Program3D","upload",0x91a244b3,"openfl.display3D.Program3D.upload","openfl/display3D/Program3D.hx",66,0x0a985b04)
		HX_STACK_THIS(this)
		HX_STACK_ARG(vertexProgram,"vertexProgram")
		HX_STACK_ARG(fragmentProgram,"fragmentProgram")
		HX_STACK_LINE(69)
		Array< ::Dynamic > samplerStates = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(samplerStates,"samplerStates");
		HX_STACK_LINE(71)
		::openfl::utils::ByteArrayData tmp = vertexProgram;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(71)
		::String tmp1 = ::openfl::_internal::stage3D::AGALConverter_obj::ConvertToGLSL(tmp,null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(71)
		::String glslVertex = tmp1;		HX_STACK_VAR(glslVertex,"glslVertex");
		HX_STACK_LINE(72)
		::openfl::utils::ByteArrayData tmp2 = fragmentProgram;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(72)
		::String tmp3 = ::openfl::_internal::stage3D::AGALConverter_obj::ConvertToGLSL(tmp2,samplerStates);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(72)
		::String glslFragment = tmp3;		HX_STACK_VAR(glslFragment,"glslFragment");
		HX_STACK_LINE(74)
		::String tmp4 = glslVertex;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(74)
		::String tmp5 = glslFragment;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(74)
		this->__uploadFromGLSL(tmp4,tmp5);
		HX_STACK_LINE(76)
		{
			HX_STACK_LINE(76)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(76)
			int _g = samplerStates->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(76)
			while((true)){
				HX_STACK_LINE(76)
				bool tmp6 = (_g1 < _g);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(76)
				bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(76)
				if ((tmp7)){
					HX_STACK_LINE(76)
					break;
				}
				HX_STACK_LINE(76)
				int tmp8 = (_g1)++;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(76)
				int i = tmp8;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(78)
				int tmp9 = i;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(78)
				::openfl::_internal::stage3D::SamplerState tmp10 = samplerStates->__get(i).StaticCast< ::openfl::_internal::stage3D::SamplerState >();		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(78)
				this->__setSamplerState(tmp9,tmp10);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Program3D_obj,upload,(void))

Void Program3D_obj::__buildUniformList( ){
{
		HX_STACK_FRAME("openfl.display3D.Program3D","__buildUniformList",0x0fafd3f6,"openfl.display3D.Program3D.__buildUniformList","openfl/display3D/Program3D.hx",85,0x0a985b04)
		HX_STACK_THIS(this)
		HX_STACK_LINE(87)
		::List tmp = this->__uniforms;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(87)
		tmp->clear();
		HX_STACK_LINE(88)
		::List tmp1 = this->__samplerUniforms;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(88)
		tmp1->clear();
		HX_STACK_LINE(89)
		::List tmp2 = this->__alphaSamplerUniforms;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(89)
		tmp2->clear();
		HX_STACK_LINE(91)
		this->__samplerUsageMask = (int)0;
		HX_STACK_LINE(93)
		int numActive = (int)0;		HX_STACK_VAR(numActive,"numActive");
		HX_STACK_LINE(94)
		numActive = ::lime::graphics::opengl::GL_obj::cffi_lime_gl_get_program_parameter.call(hx::DynamicPtr(this->__programID->id),(int)35718);
		HX_STACK_LINE(95)
		::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
		HX_STACK_LINE(97)
		::List tmp3 = ::List_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(97)
		::List vertexUniforms = tmp3;		HX_STACK_VAR(vertexUniforms,"vertexUniforms");
		HX_STACK_LINE(98)
		::List tmp4 = ::List_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(98)
		::List fragmentUniforms = tmp4;		HX_STACK_VAR(fragmentUniforms,"fragmentUniforms");
		HX_STACK_LINE(100)
		{
			HX_STACK_LINE(100)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(100)
			while((true)){
				HX_STACK_LINE(100)
				bool tmp5 = (_g < numActive);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(100)
				bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(100)
				if ((tmp6)){
					HX_STACK_LINE(100)
					break;
				}
				HX_STACK_LINE(100)
				int tmp7 = (_g)++;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(100)
				int i = tmp7;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(102)
				Dynamic tmp8;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(102)
				{
					HX_STACK_LINE(102)
					Dynamic result = ((Dynamic)(::lime::graphics::opengl::GL_obj::cffi_lime_gl_get_active_uniform.call(hx::DynamicPtr(this->__programID->id),i)));		HX_STACK_VAR(result,"result");
					HX_STACK_LINE(102)
					tmp8 = result;
				}
				HX_STACK_LINE(102)
				Dynamic info = tmp8;		HX_STACK_VAR(info,"info");
				HX_STACK_LINE(103)
				::String name = info->__Field(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"), hx::paccDynamic );		HX_STACK_VAR(name,"name");
				HX_STACK_LINE(104)
				int size = info->__Field(HX_HCSTRING("size","\xc1","\xa0","\x53","\x4c"), hx::paccDynamic );		HX_STACK_VAR(size,"size");
				HX_STACK_LINE(105)
				int uniformType = info->__Field(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"), hx::paccDynamic );		HX_STACK_VAR(uniformType,"uniformType");
				HX_STACK_LINE(106)
				::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
				HX_STACK_LINE(108)
				::openfl::display3D::_Program3D::Uniform tmp9 = ::openfl::display3D::_Program3D::Uniform_obj::__new();		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(108)
				::openfl::display3D::_Program3D::Uniform uniform = tmp9;		HX_STACK_VAR(uniform,"uniform");
				HX_STACK_LINE(109)
				uniform->name = name;
				HX_STACK_LINE(110)
				uniform->size = size;
				HX_STACK_LINE(111)
				uniform->type = uniformType;
				HX_STACK_LINE(113)
				uniform->location = ::lime::graphics::opengl::GL_obj::cffi_lime_gl_get_uniform_location.call(hx::DynamicPtr(this->__programID->id),uniform->name);
				HX_STACK_LINE(114)
				::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
				HX_STACK_LINE(116)
				int tmp10 = uniform->name.indexOf(HX_HCSTRING("[","\x5b","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(116)
				int indexBracket = tmp10;		HX_STACK_VAR(indexBracket,"indexBracket");
				HX_STACK_LINE(118)
				bool tmp11 = (indexBracket >= (int)0);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(118)
				if ((tmp11)){
					HX_STACK_LINE(120)
					int tmp12 = indexBracket;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(120)
					::String tmp13 = uniform->name.substring((int)0,tmp12);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(120)
					uniform->name = tmp13;
				}
				HX_STACK_LINE(124)
				{
					HX_STACK_LINE(124)
					int _g1 = uniform->type;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(124)
					int tmp12 = _g1;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(124)
					switch( (int)(tmp12)){
						case (int)35674: {
							HX_STACK_LINE(126)
							uniform->regCount = (int)2;
						}
						;break;
						case (int)35675: {
							HX_STACK_LINE(127)
							uniform->regCount = (int)3;
						}
						;break;
						case (int)35676: {
							HX_STACK_LINE(128)
							uniform->regCount = (int)4;
						}
						;break;
						default: {
							HX_STACK_LINE(129)
							uniform->regCount = (int)1;
						}
					}
				}
				HX_STACK_LINE(133)
				hx::MultEq(uniform->regCount,uniform->size);
				HX_STACK_LINE(135)
				::List tmp12 = this->__uniforms;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(135)
				::openfl::display3D::_Program3D::Uniform tmp13 = uniform;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(135)
				tmp12->add(tmp13);
				HX_STACK_LINE(137)
				bool tmp14 = (uniform->name == HX_HCSTRING("vcPositionScale","\xb4","\xc9","\xc0","\x1f"));		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(137)
				if ((tmp14)){
					HX_STACK_LINE(139)
					this->__positionScale = uniform;
				}
				else{
					HX_STACK_LINE(141)
					::String tmp15 = uniform->name;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(141)
					bool tmp16 = ::StringTools_obj::startsWith(tmp15,HX_HCSTRING("vc","\x2d","\x67","\x00","\x00"));		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(141)
					if ((tmp16)){
						HX_STACK_LINE(143)
						::String tmp17 = uniform->name.substring((int)2,null());		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(143)
						Dynamic tmp18 = ::Std_obj::parseInt(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(143)
						uniform->regIndex = tmp18;
						HX_STACK_LINE(144)
						::openfl::display3D::Context3D tmp19 = this->__context;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(144)
						uniform->regData = tmp19->__vertexConstants;
						HX_STACK_LINE(145)
						::openfl::display3D::_Program3D::Uniform tmp20 = uniform;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(145)
						vertexUniforms->add(tmp20);
					}
					else{
						HX_STACK_LINE(147)
						::String tmp17 = uniform->name;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(147)
						bool tmp18 = ::StringTools_obj::startsWith(tmp17,HX_HCSTRING("fc","\x3d","\x59","\x00","\x00"));		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(147)
						if ((tmp18)){
							HX_STACK_LINE(149)
							::String tmp19 = uniform->name.substring((int)2,null());		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(149)
							Dynamic tmp20 = ::Std_obj::parseInt(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(149)
							uniform->regIndex = tmp20;
							HX_STACK_LINE(150)
							::openfl::display3D::Context3D tmp21 = this->__context;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(150)
							uniform->regData = tmp21->__fragmentConstants;
							HX_STACK_LINE(151)
							::openfl::display3D::_Program3D::Uniform tmp22 = uniform;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(151)
							fragmentUniforms->add(tmp22);
						}
						else{
							HX_STACK_LINE(153)
							::String tmp19 = uniform->name;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(153)
							::String tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(153)
							bool tmp21 = ::StringTools_obj::startsWith(tmp20,HX_HCSTRING("sampler","\x08","\xc5","\xc9","\x83"));		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(153)
							bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(153)
							if ((tmp21)){
								HX_STACK_LINE(153)
								::String tmp23 = uniform->name;		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(153)
								::String tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(153)
								bool tmp25 = ::StringTools_obj::endsWith(tmp24,HX_HCSTRING("_alpha","\x9f","\xee","\x7d","\x1d"));		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(153)
								bool tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(153)
								bool tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(153)
								tmp22 = !(tmp27);
							}
							else{
								HX_STACK_LINE(153)
								tmp22 = false;
							}
							HX_STACK_LINE(153)
							if ((tmp22)){
								HX_STACK_LINE(155)
								::String tmp23 = uniform->name.substring((int)7,null());		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(155)
								Dynamic tmp24 = ::Std_obj::parseInt(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(155)
								uniform->regIndex = tmp24;
								HX_STACK_LINE(156)
								::List tmp25 = this->__samplerUniforms;		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(156)
								::openfl::display3D::_Program3D::Uniform tmp26 = uniform;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(156)
								tmp25->add(tmp26);
								HX_STACK_LINE(158)
								{
									HX_STACK_LINE(158)
									int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
									HX_STACK_LINE(158)
									int _g1 = uniform->regCount;		HX_STACK_VAR(_g1,"_g1");
									HX_STACK_LINE(158)
									while((true)){
										HX_STACK_LINE(158)
										bool tmp27 = (_g2 < _g1);		HX_STACK_VAR(tmp27,"tmp27");
										HX_STACK_LINE(158)
										bool tmp28 = !(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
										HX_STACK_LINE(158)
										if ((tmp28)){
											HX_STACK_LINE(158)
											break;
										}
										HX_STACK_LINE(158)
										int tmp29 = (_g2)++;		HX_STACK_VAR(tmp29,"tmp29");
										HX_STACK_LINE(158)
										int reg = tmp29;		HX_STACK_VAR(reg,"reg");
										HX_STACK_LINE(160)
										int tmp30 = (uniform->regIndex + reg);		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(160)
										int tmp31 = (int((int)1) << int(tmp30));		HX_STACK_VAR(tmp31,"tmp31");
										HX_STACK_LINE(160)
										hx::OrEq(this->__samplerUsageMask,tmp31);
									}
								}
							}
							else{
								HX_STACK_LINE(164)
								::String tmp23 = uniform->name;		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(164)
								::String tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(164)
								bool tmp25 = ::StringTools_obj::startsWith(tmp24,HX_HCSTRING("sampler","\x08","\xc5","\xc9","\x83"));		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(164)
								bool tmp26;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(164)
								if ((tmp25)){
									HX_STACK_LINE(164)
									::String tmp27 = uniform->name;		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(164)
									::String tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
									HX_STACK_LINE(164)
									tmp26 = ::StringTools_obj::endsWith(tmp28,HX_HCSTRING("_alpha","\x9f","\xee","\x7d","\x1d"));
								}
								else{
									HX_STACK_LINE(164)
									tmp26 = false;
								}
								HX_STACK_LINE(164)
								if ((tmp26)){
									HX_STACK_LINE(166)
									int tmp27 = uniform->name.indexOf(HX_HCSTRING("_","\x5f","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(166)
									int tmp28 = (tmp27 - (int)7);		HX_STACK_VAR(tmp28,"tmp28");
									HX_STACK_LINE(166)
									int len = tmp28;		HX_STACK_VAR(len,"len");
									HX_STACK_LINE(167)
									int tmp29 = ((int)7 + len);		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(167)
									::String tmp30 = uniform->name.substring((int)7,tmp29);		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(167)
									Dynamic tmp31 = ::Std_obj::parseInt(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(167)
									int tmp32 = (tmp31 + (int)4);		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(167)
									uniform->regIndex = tmp32;
									HX_STACK_LINE(168)
									::List tmp33 = this->__alphaSamplerUniforms;		HX_STACK_VAR(tmp33,"tmp33");
									HX_STACK_LINE(168)
									::openfl::display3D::_Program3D::Uniform tmp34 = uniform;		HX_STACK_VAR(tmp34,"tmp34");
									HX_STACK_LINE(168)
									tmp33->add(tmp34);
								}
							}
						}
					}
				}
				HX_STACK_LINE(172)
				bool tmp15 = ::openfl::display3D::Program3D_obj::verbose;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(172)
				if ((tmp15)){
					HX_STACK_LINE(174)
					::String tmp16 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + i);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(174)
					::String tmp17 = (tmp16 + HX_HCSTRING(" name:","\x6f","\x1b","\xf0","\x61"));		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(174)
					::String tmp18 = uniform->name;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(174)
					::String tmp19 = (tmp17 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(174)
					::String tmp20 = (tmp19 + HX_HCSTRING(" type:","\x20","\xfc","\x36","\xe6"));		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(174)
					int tmp21 = uniform->type;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(174)
					::String tmp22 = (tmp20 + tmp21);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(174)
					::String tmp23 = (tmp22 + HX_HCSTRING(" size:","\x39","\x94","\x44","\x48"));		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(174)
					int tmp24 = uniform->size;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(174)
					::String tmp25 = (tmp23 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(174)
					::String tmp26 = (tmp25 + HX_HCSTRING(" location:","\x45","\xfc","\xa8","\xc1"));		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(174)
					int tmp27 = uniform->location;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(174)
					::String tmp28 = (tmp26 + tmp27);		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(174)
					Dynamic tmp29 = hx::SourceInfo(HX_HCSTRING("Program3D.hx","\xc9","\xbd","\xcd","\x87"),174,HX_HCSTRING("openfl.display3D.Program3D","\x7c","\x83","\x68","\xf5"),HX_HCSTRING("__buildUniformList","\x44","\x16","\xc1","\x02"));		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(174)
					::haxe::Log_obj::trace(tmp28,tmp29);
				}
			}
		}
		HX_STACK_LINE(180)
		::List tmp5 = vertexUniforms;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(180)
		::openfl::display3D::_Program3D::UniformMap tmp6 = ::openfl::display3D::_Program3D::UniformMap_obj::__new(::Lambda_obj::array(tmp5));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(180)
		this->__vertexUniformMap = tmp6;
		HX_STACK_LINE(181)
		::List tmp7 = fragmentUniforms;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(181)
		::openfl::display3D::_Program3D::UniformMap tmp8 = ::openfl::display3D::_Program3D::UniformMap_obj::__new(::Lambda_obj::array(tmp7));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(181)
		this->__fragmentUniformMap = tmp8;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Program3D_obj,__buildUniformList,(void))

Void Program3D_obj::__deleteShaders( ){
{
		HX_STACK_FRAME("openfl.display3D.Program3D","__deleteShaders",0x8861ecb1,"openfl.display3D.Program3D.__deleteShaders","openfl/display3D/Program3D.hx",186,0x0a985b04)
		HX_STACK_THIS(this)
		HX_STACK_LINE(188)
		::lime::graphics::opengl::GLProgram tmp = this->__programID;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(188)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(188)
		if ((tmp1)){
			HX_STACK_LINE(192)
			this->__programID = null();
		}
		HX_STACK_LINE(196)
		::lime::graphics::opengl::GLShader tmp2 = this->__vertexShaderID;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(196)
		bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(196)
		if ((tmp3)){
			HX_STACK_LINE(198)
			{
				HX_STACK_LINE(198)
				::lime::graphics::opengl::GLShader tmp4 = this->__vertexShaderID;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(198)
				::lime::graphics::opengl::GLShader shader = tmp4;		HX_STACK_VAR(shader,"shader");
				HX_STACK_LINE(198)
				::lime::graphics::opengl::GL_obj::cffi_lime_gl_delete_shader.call(hx::DynamicPtr(shader->id));
				HX_STACK_LINE(198)
				shader->invalidate();
			}
			HX_STACK_LINE(199)
			::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
			HX_STACK_LINE(200)
			this->__vertexShaderID = null();
		}
		HX_STACK_LINE(204)
		::lime::graphics::opengl::GLShader tmp4 = this->__fragmentShaderID;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(204)
		bool tmp5 = (tmp4 != null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(204)
		if ((tmp5)){
			HX_STACK_LINE(206)
			{
				HX_STACK_LINE(206)
				::lime::graphics::opengl::GLShader tmp6 = this->__fragmentShaderID;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(206)
				::lime::graphics::opengl::GLShader shader = tmp6;		HX_STACK_VAR(shader,"shader");
				HX_STACK_LINE(206)
				::lime::graphics::opengl::GL_obj::cffi_lime_gl_delete_shader.call(hx::DynamicPtr(shader->id));
				HX_STACK_LINE(206)
				shader->invalidate();
			}
			HX_STACK_LINE(207)
			::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
			HX_STACK_LINE(208)
			this->__fragmentShaderID = null();
		}
		HX_STACK_LINE(212)
		int tmp6 = this->__memUsage;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(212)
		bool tmp7 = (tmp6 != (int)0);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(212)
		if ((tmp7)){
			HX_STACK_LINE(214)
			::openfl::display3D::Context3D tmp8 = this->__context;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(214)
			tmp8->__statsDecrement((int)5);
			HX_STACK_LINE(215)
			::openfl::display3D::Context3D tmp9 = this->__context;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(215)
			int tmp10 = this->__memUsage;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(215)
			tmp9->__statsSubtract((int)10,tmp10);
			HX_STACK_LINE(216)
			this->__memUsage = (int)0;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Program3D_obj,__deleteShaders,(void))

Void Program3D_obj::__flush( ){
{
		HX_STACK_FRAME("openfl.display3D.Program3D","__flush",0x071c9cb2,"openfl.display3D.Program3D.__flush","openfl/display3D/Program3D.hx",223,0x0a985b04)
		HX_STACK_THIS(this)
		HX_STACK_LINE(225)
		::openfl::display3D::_Program3D::UniformMap tmp = this->__vertexUniformMap;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(225)
		tmp->flush();
		HX_STACK_LINE(226)
		::openfl::display3D::_Program3D::UniformMap tmp1 = this->__fragmentUniformMap;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(226)
		tmp1->flush();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Program3D_obj,__flush,(void))

::openfl::_internal::stage3D::SamplerState Program3D_obj::__getSamplerState( int sampler){
	HX_STACK_FRAME("openfl.display3D.Program3D","__getSamplerState",0x4314690d,"openfl.display3D.Program3D.__getSamplerState","openfl/display3D/Program3D.hx",231,0x0a985b04)
	HX_STACK_THIS(this)
	HX_STACK_ARG(sampler,"sampler")
	HX_STACK_LINE(233)
	::openfl::_Vector::ObjectVector tmp = this->__samplerStates;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(233)
	int tmp1 = sampler;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(233)
	::openfl::_internal::stage3D::SamplerState tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(233)
	::openfl::_internal::stage3D::SamplerState tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(233)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Program3D_obj,__getSamplerState,return )

Void Program3D_obj::__markDirty( bool isVertex,int index,int count){
{
		HX_STACK_FRAME("openfl.display3D.Program3D","__markDirty",0xf012f9b3,"openfl.display3D.Program3D.__markDirty","openfl/display3D/Program3D.hx",238,0x0a985b04)
		HX_STACK_THIS(this)
		HX_STACK_ARG(isVertex,"isVertex")
		HX_STACK_ARG(index,"index")
		HX_STACK_ARG(count,"count")
		HX_STACK_LINE(240)
		bool tmp = isVertex;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(240)
		if ((tmp)){
			HX_STACK_LINE(242)
			::openfl::display3D::_Program3D::UniformMap tmp1 = this->__vertexUniformMap;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(242)
			int tmp2 = index;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(242)
			int tmp3 = count;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(242)
			tmp1->markDirty(tmp2,tmp3);
		}
		else{
			HX_STACK_LINE(246)
			::openfl::display3D::_Program3D::UniformMap tmp1 = this->__fragmentUniformMap;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(246)
			int tmp2 = index;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(246)
			int tmp3 = count;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(246)
			tmp1->markDirty(tmp2,tmp3);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Program3D_obj,__markDirty,(void))

Void Program3D_obj::__setPositionScale( ::lime::utils::ArrayBufferView positionScale){
{
		HX_STACK_FRAME("openfl.display3D.Program3D","__setPositionScale",0x1baf80f1,"openfl.display3D.Program3D.__setPositionScale","openfl/display3D/Program3D.hx",253,0x0a985b04)
		HX_STACK_THIS(this)
		HX_STACK_ARG(positionScale,"positionScale")
		HX_STACK_LINE(255)
		::openfl::display3D::_Program3D::Uniform tmp = this->__positionScale;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(255)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(255)
		if ((tmp1)){
			HX_STACK_LINE(257)
			::lime::graphics::opengl::GL_obj::cffi_lime_gl_uniform4fv.call(this->__positionScale->location,hx::DynamicPtr(positionScale->buffer));
			HX_STACK_LINE(258)
			::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Program3D_obj,__setPositionScale,(void))

Void Program3D_obj::__setSamplerState( int sampler,::openfl::_internal::stage3D::SamplerState state){
{
		HX_STACK_FRAME("openfl.display3D.Program3D","__setSamplerState",0x3edfe619,"openfl.display3D.Program3D.__setSamplerState","openfl/display3D/Program3D.hx",265,0x0a985b04)
		HX_STACK_THIS(this)
		HX_STACK_ARG(sampler,"sampler")
		HX_STACK_ARG(state,"state")
		HX_STACK_LINE(267)
		::openfl::_Vector::ObjectVector tmp = this->__samplerStates;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(267)
		int tmp1 = sampler;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(267)
		::openfl::_internal::stage3D::SamplerState tmp2 = state;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(267)
		::openfl::_internal::stage3D::SamplerState tmp3 = tmp->set(tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(267)
		tmp3;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Program3D_obj,__setSamplerState,(void))

Void Program3D_obj::__uploadFromGLSL( ::String vertexShaderSource,::String fragmentShaderSource){
{
		HX_STACK_FRAME("openfl.display3D.Program3D","__uploadFromGLSL",0x163cc3db,"openfl.display3D.Program3D.__uploadFromGLSL","openfl/display3D/Program3D.hx",272,0x0a985b04)
		HX_STACK_THIS(this)
		HX_STACK_ARG(vertexShaderSource,"vertexShaderSource")
		HX_STACK_ARG(fragmentShaderSource,"fragmentShaderSource")
		HX_STACK_LINE(274)
		this->__deleteShaders();
		HX_STACK_LINE(276)
		bool tmp = ::openfl::display3D::Program3D_obj::verbose;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(276)
		if ((tmp)){
			HX_STACK_LINE(278)
			::String tmp1 = vertexShaderSource;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(278)
			Dynamic tmp2 = hx::SourceInfo(HX_HCSTRING("Program3D.hx","\xc9","\xbd","\xcd","\x87"),278,HX_HCSTRING("openfl.display3D.Program3D","\x7c","\x83","\x68","\xf5"),HX_HCSTRING("__uploadFromGLSL","\xa9","\x36","\x31","\x0d"));		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(278)
			::haxe::Log_obj::trace(tmp1,tmp2);
			HX_STACK_LINE(279)
			::String tmp3 = fragmentShaderSource;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(279)
			Dynamic tmp4 = hx::SourceInfo(HX_HCSTRING("Program3D.hx","\xc9","\xbd","\xcd","\x87"),279,HX_HCSTRING("openfl.display3D.Program3D","\x7c","\x83","\x68","\xf5"),HX_HCSTRING("__uploadFromGLSL","\xa9","\x36","\x31","\x0d"));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(279)
			::haxe::Log_obj::trace(tmp3,tmp4);
		}
		HX_STACK_LINE(283)
		this->__vertexSource = vertexShaderSource;
		HX_STACK_LINE(284)
		this->__fragmentSource = fragmentShaderSource;
		HX_STACK_LINE(286)
		int tmp1 = ::lime::graphics::opengl::GL_obj::get_version();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(286)
		Dynamic tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(286)
		{
			HX_STACK_LINE(286)
			::hx::Object * inVal = ::lime::graphics::opengl::GL_obj::cffi_lime_gl_create_shader.call((int)35633);		HX_STACK_VAR(inVal,"inVal");
			HX_STACK_LINE(286)
			::hx::Object * tmp3 = inVal;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(286)
			::hx::Object * tmp4 = hx::DynamicPtr(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(286)
			tmp2 = Dynamic(tmp4);
		}
		HX_STACK_LINE(286)
		::lime::graphics::opengl::GLShader tmp3 = ::lime::graphics::opengl::GLShader_obj::__new(tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(286)
		this->__vertexShaderID = tmp3;
		HX_STACK_LINE(287)
		::lime::graphics::opengl::GL_obj::cffi_lime_gl_shader_source.call(hx::DynamicPtr(this->__vertexShaderID->id),vertexShaderSource);
		HX_STACK_LINE(288)
		::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
		HX_STACK_LINE(290)
		::lime::graphics::opengl::GL_obj::cffi_lime_gl_compile_shader.call(hx::DynamicPtr(this->__vertexShaderID->id));
		HX_STACK_LINE(291)
		::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
		HX_STACK_LINE(293)
		int shaderCompiled = ::lime::graphics::opengl::GL_obj::cffi_lime_gl_get_shader_parameter.call(hx::DynamicPtr(this->__vertexShaderID->id),(int)35713);		HX_STACK_VAR(shaderCompiled,"shaderCompiled");
		HX_STACK_LINE(295)
		::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
		HX_STACK_LINE(297)
		bool tmp4 = (shaderCompiled == (int)0);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(297)
		if ((tmp4)){
			HX_STACK_LINE(299)
			::String vertexInfoLog = ::lime::graphics::opengl::GL_obj::cffi_lime_gl_get_shader_info_log.call(hx::DynamicPtr(this->__vertexShaderID->id));		HX_STACK_VAR(vertexInfoLog,"vertexInfoLog");
			HX_STACK_LINE(301)
			bool tmp5 = (vertexInfoLog != null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(301)
			bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(301)
			if ((tmp5)){
				HX_STACK_LINE(301)
				tmp6 = (vertexInfoLog.length != (int)0);
			}
			else{
				HX_STACK_LINE(301)
				tmp6 = false;
			}
			HX_STACK_LINE(301)
			if ((tmp6)){
				HX_STACK_LINE(303)
				::String tmp7 = (HX_HCSTRING("vertex: ","\x0a","\xaf","\x80","\x67") + vertexInfoLog);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(303)
				Dynamic tmp8 = hx::SourceInfo(HX_HCSTRING("Program3D.hx","\xc9","\xbd","\xcd","\x87"),303,HX_HCSTRING("openfl.display3D.Program3D","\x7c","\x83","\x68","\xf5"),HX_HCSTRING("__uploadFromGLSL","\xa9","\x36","\x31","\x0d"));		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(303)
				::haxe::Log_obj::trace(tmp7,tmp8);
			}
			HX_STACK_LINE(307)
			::String tmp7 = (HX_HCSTRING("Error compiling vertex shader: ","\x1f","\x7c","\xb1","\x3d") + vertexInfoLog);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(307)
			::openfl::errors::Error tmp8 = ::openfl::errors::Error_obj::__new(tmp7,null());		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(307)
			HX_STACK_DO_THROW(tmp8);
		}
		HX_STACK_LINE(311)
		int tmp5 = ::lime::graphics::opengl::GL_obj::get_version();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(311)
		Dynamic tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(311)
		{
			HX_STACK_LINE(311)
			::hx::Object * inVal = ::lime::graphics::opengl::GL_obj::cffi_lime_gl_create_shader.call((int)35632);		HX_STACK_VAR(inVal,"inVal");
			HX_STACK_LINE(311)
			::hx::Object * tmp7 = inVal;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(311)
			::hx::Object * tmp8 = hx::DynamicPtr(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(311)
			tmp6 = Dynamic(tmp8);
		}
		HX_STACK_LINE(311)
		::lime::graphics::opengl::GLShader tmp7 = ::lime::graphics::opengl::GLShader_obj::__new(tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(311)
		this->__fragmentShaderID = tmp7;
		HX_STACK_LINE(312)
		::lime::graphics::opengl::GL_obj::cffi_lime_gl_shader_source.call(hx::DynamicPtr(this->__fragmentShaderID->id),fragmentShaderSource);
		HX_STACK_LINE(313)
		::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
		HX_STACK_LINE(315)
		::lime::graphics::opengl::GL_obj::cffi_lime_gl_compile_shader.call(hx::DynamicPtr(this->__fragmentShaderID->id));
		HX_STACK_LINE(316)
		::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
		HX_STACK_LINE(318)
		int fragmentCompiled = ::lime::graphics::opengl::GL_obj::cffi_lime_gl_get_shader_parameter.call(hx::DynamicPtr(this->__fragmentShaderID->id),(int)35713);		HX_STACK_VAR(fragmentCompiled,"fragmentCompiled");
		HX_STACK_LINE(320)
		bool tmp8 = (fragmentCompiled == (int)0);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(320)
		if ((tmp8)){
			HX_STACK_LINE(322)
			::String fragmentInfoLog = ::lime::graphics::opengl::GL_obj::cffi_lime_gl_get_shader_info_log.call(hx::DynamicPtr(this->__fragmentShaderID->id));		HX_STACK_VAR(fragmentInfoLog,"fragmentInfoLog");
			HX_STACK_LINE(324)
			bool tmp9 = (fragmentInfoLog != null());		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(324)
			bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(324)
			if ((tmp9)){
				HX_STACK_LINE(324)
				tmp10 = (fragmentInfoLog.length != (int)0);
			}
			else{
				HX_STACK_LINE(324)
				tmp10 = false;
			}
			HX_STACK_LINE(324)
			if ((tmp10)){
				HX_STACK_LINE(326)
				::String tmp11 = (HX_HCSTRING("fragment: ","\x76","\x26","\xd9","\xf9") + fragmentInfoLog);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(326)
				Dynamic tmp12 = hx::SourceInfo(HX_HCSTRING("Program3D.hx","\xc9","\xbd","\xcd","\x87"),326,HX_HCSTRING("openfl.display3D.Program3D","\x7c","\x83","\x68","\xf5"),HX_HCSTRING("__uploadFromGLSL","\xa9","\x36","\x31","\x0d"));		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(326)
				::haxe::Log_obj::trace(tmp11,tmp12);
			}
			HX_STACK_LINE(330)
			::String tmp11 = (HX_HCSTRING("Error compiling fragment shader: ","\x33","\x70","\x4d","\x6d") + fragmentInfoLog);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(330)
			::openfl::errors::Error tmp12 = ::openfl::errors::Error_obj::__new(tmp11,null());		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(330)
			HX_STACK_DO_THROW(tmp12);
		}
		HX_STACK_LINE(334)
		int tmp9 = ::lime::graphics::opengl::GL_obj::get_version();		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(334)
		Dynamic tmp10;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(334)
		{
			HX_STACK_LINE(334)
			::hx::Object * inVal = ::lime::graphics::opengl::GL_obj::cffi_lime_gl_create_program.call();		HX_STACK_VAR(inVal,"inVal");
			HX_STACK_LINE(334)
			::hx::Object * tmp11 = inVal;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(334)
			::hx::Object * tmp12 = hx::DynamicPtr(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(334)
			tmp10 = Dynamic(tmp12);
		}
		HX_STACK_LINE(334)
		::lime::graphics::opengl::GLProgram tmp11 = ::lime::graphics::opengl::GLProgram_obj::__new(tmp9,tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(334)
		this->__programID = tmp11;
		HX_STACK_LINE(335)
		{
			HX_STACK_LINE(335)
			::lime::graphics::opengl::GLProgram tmp12 = this->__programID;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(335)
			::lime::graphics::opengl::GLProgram program = tmp12;		HX_STACK_VAR(program,"program");
			HX_STACK_LINE(335)
			::lime::graphics::opengl::GLShader tmp13 = this->__vertexShaderID;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(335)
			::lime::graphics::opengl::GLShader shader = tmp13;		HX_STACK_VAR(shader,"shader");
			HX_STACK_LINE(335)
			::lime::graphics::opengl::GLShader tmp14 = shader;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(335)
			program->attach(tmp14);
			HX_STACK_LINE(335)
			::lime::graphics::opengl::GL_obj::cffi_lime_gl_attach_shader.call(hx::DynamicPtr(program->id),hx::DynamicPtr(shader->id));
		}
		HX_STACK_LINE(336)
		::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
		HX_STACK_LINE(338)
		{
			HX_STACK_LINE(338)
			::lime::graphics::opengl::GLProgram tmp12 = this->__programID;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(338)
			::lime::graphics::opengl::GLProgram program = tmp12;		HX_STACK_VAR(program,"program");
			HX_STACK_LINE(338)
			::lime::graphics::opengl::GLShader tmp13 = this->__fragmentShaderID;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(338)
			::lime::graphics::opengl::GLShader shader = tmp13;		HX_STACK_VAR(shader,"shader");
			HX_STACK_LINE(338)
			::lime::graphics::opengl::GLShader tmp14 = shader;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(338)
			program->attach(tmp14);
			HX_STACK_LINE(338)
			::lime::graphics::opengl::GL_obj::cffi_lime_gl_attach_shader.call(hx::DynamicPtr(program->id),hx::DynamicPtr(shader->id));
		}
		HX_STACK_LINE(339)
		::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
		HX_STACK_LINE(341)
		{
			HX_STACK_LINE(341)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(341)
			while((true)){
				HX_STACK_LINE(341)
				bool tmp12 = (_g < (int)16);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(341)
				bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(341)
				if ((tmp13)){
					HX_STACK_LINE(341)
					break;
				}
				HX_STACK_LINE(341)
				int tmp14 = (_g)++;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(341)
				int i = tmp14;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(343)
				::String tmp15 = (HX_HCSTRING("va","\x2b","\x67","\x00","\x00") + i);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(343)
				::String name = tmp15;		HX_STACK_VAR(name,"name");
				HX_STACK_LINE(345)
				::String tmp16 = (HX_HCSTRING(" ","\x20","\x00","\x00","\x00") + name);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(345)
				int tmp17 = vertexShaderSource.indexOf(tmp16,null());		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(345)
				bool tmp18 = (tmp17 != (int)-1);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(345)
				if ((tmp18)){
					HX_STACK_LINE(347)
					::lime::graphics::opengl::GL_obj::cffi_lime_gl_bind_attrib_location.call(hx::DynamicPtr(this->__programID->id),i,name);
				}
			}
		}
		HX_STACK_LINE(353)
		::lime::graphics::opengl::GL_obj::cffi_lime_gl_link_program.call(hx::DynamicPtr(this->__programID->id));
		HX_STACK_LINE(355)
		::String infoLog = ::lime::graphics::opengl::GL_obj::cffi_lime_gl_get_program_info_log.call(hx::DynamicPtr(this->__programID->id));		HX_STACK_VAR(infoLog,"infoLog");
		HX_STACK_LINE(357)
		bool tmp12 = (infoLog != null());		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(357)
		bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(357)
		if ((tmp12)){
			HX_STACK_LINE(357)
			tmp13 = (infoLog.length != (int)0);
		}
		else{
			HX_STACK_LINE(357)
			tmp13 = false;
		}
		HX_STACK_LINE(357)
		if ((tmp13)){
			HX_STACK_LINE(359)
			Dynamic tmp14 = hx::SourceInfo(HX_HCSTRING("Program3D.hx","\xc9","\xbd","\xcd","\x87"),359,HX_HCSTRING("openfl.display3D.Program3D","\x7c","\x83","\x68","\xf5"),HX_HCSTRING("__uploadFromGLSL","\xa9","\x36","\x31","\x0d"));		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(359)
			::haxe::Log_obj::trace(HX_HCSTRING("program: ${infoLog}","\x88","\x60","\xff","\xbe"),tmp14);
		}
		HX_STACK_LINE(363)
		this->__buildUniformList();
		HX_STACK_LINE(365)
		this->__memUsage = (int)1;
		HX_STACK_LINE(366)
		::openfl::display3D::Context3D tmp14 = this->__context;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(366)
		tmp14->__statsIncrement((int)5);
		HX_STACK_LINE(367)
		::openfl::display3D::Context3D tmp15 = this->__context;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(367)
		int tmp16 = this->__memUsage;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(367)
		tmp15->__statsAdd((int)10,tmp16);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Program3D_obj,__uploadFromGLSL,(void))

Void Program3D_obj::__use( ){
{
		HX_STACK_FRAME("openfl.display3D.Program3D","__use",0xea326eb5,"openfl.display3D.Program3D.__use","openfl/display3D/Program3D.hx",372,0x0a985b04)
		HX_STACK_THIS(this)
		HX_STACK_LINE(374)
		{
			HX_STACK_LINE(374)
			::lime::graphics::opengl::GLProgram tmp = this->__programID;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(374)
			::lime::graphics::opengl::GLProgram program = tmp;		HX_STACK_VAR(program,"program");
			HX_STACK_LINE(374)
			::lime::graphics::opengl::GL_obj::cffi_lime_gl_use_program.call(hx::DynamicPtr((  (((program == null()))) ? Dynamic(null()) : Dynamic(program->id) )));
		}
		HX_STACK_LINE(375)
		::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
		HX_STACK_LINE(377)
		::openfl::display3D::_Program3D::UniformMap tmp = this->__vertexUniformMap;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(377)
		tmp->markAllDirty();
		HX_STACK_LINE(378)
		::openfl::display3D::_Program3D::UniformMap tmp1 = this->__fragmentUniformMap;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(378)
		tmp1->markAllDirty();
		HX_STACK_LINE(380)
		{
			HX_STACK_LINE(380)
			::List tmp2 = this->__samplerUniforms;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(380)
			::_List::ListIterator tmp3 = ::_List::ListIterator_obj::__new(tmp2->h);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(380)
			::_List::ListIterator _g = tmp3;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(380)
			while((true)){
				HX_STACK_LINE(380)
				bool tmp4 = (_g->head != null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(380)
				bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(380)
				if ((tmp5)){
					HX_STACK_LINE(380)
					break;
				}
				HX_STACK_LINE(380)
				Dynamic tmp6;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(380)
				{
					HX_STACK_LINE(380)
					Dynamic tmp7 = _g->head->__GetItem((int)0);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(380)
					_g->val = tmp7;
					HX_STACK_LINE(380)
					Dynamic tmp8 = _g->head->__GetItem((int)1);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(380)
					_g->head = tmp8;
					HX_STACK_LINE(380)
					tmp6 = _g->val;
				}
				HX_STACK_LINE(380)
				::openfl::display3D::_Program3D::Uniform sampler = ((::openfl::display3D::_Program3D::Uniform)(tmp6));		HX_STACK_VAR(sampler,"sampler");
				HX_STACK_LINE(382)
				bool tmp7 = (sampler->regCount == (int)1);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(382)
				if ((tmp7)){
					HX_STACK_LINE(384)
					::lime::graphics::opengl::GL_obj::cffi_lime_gl_uniform1i.call(sampler->location,sampler->regIndex);
					HX_STACK_LINE(385)
					::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
				}
				else{
					HX_STACK_LINE(389)
					::openfl::errors::IllegalOperationError tmp8 = ::openfl::errors::IllegalOperationError_obj::__new(HX_HCSTRING("!!! TODO: uniform location on webgl","\x0c","\x47","\xd9","\x53"));		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(389)
					HX_STACK_DO_THROW(tmp8);
				}
			}
		}
		HX_STACK_LINE(403)
		{
			HX_STACK_LINE(403)
			::List tmp2 = this->__alphaSamplerUniforms;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(403)
			::_List::ListIterator tmp3 = ::_List::ListIterator_obj::__new(tmp2->h);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(403)
			::_List::ListIterator _g = tmp3;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(403)
			while((true)){
				HX_STACK_LINE(403)
				bool tmp4 = (_g->head != null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(403)
				bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(403)
				if ((tmp5)){
					HX_STACK_LINE(403)
					break;
				}
				HX_STACK_LINE(403)
				Dynamic tmp6;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(403)
				{
					HX_STACK_LINE(403)
					Dynamic tmp7 = _g->head->__GetItem((int)0);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(403)
					_g->val = tmp7;
					HX_STACK_LINE(403)
					Dynamic tmp8 = _g->head->__GetItem((int)1);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(403)
					_g->head = tmp8;
					HX_STACK_LINE(403)
					tmp6 = _g->val;
				}
				HX_STACK_LINE(403)
				::openfl::display3D::_Program3D::Uniform sampler = ((::openfl::display3D::_Program3D::Uniform)(tmp6));		HX_STACK_VAR(sampler,"sampler");
				HX_STACK_LINE(405)
				bool tmp7 = (sampler->regCount == (int)1);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(405)
				if ((tmp7)){
					HX_STACK_LINE(407)
					::lime::graphics::opengl::GL_obj::cffi_lime_gl_uniform1i.call(sampler->location,sampler->regIndex);
					HX_STACK_LINE(408)
					::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
				}
				else{
					HX_STACK_LINE(412)
					::openfl::errors::IllegalOperationError tmp8 = ::openfl::errors::IllegalOperationError_obj::__new(HX_HCSTRING("!!! TODO: uniform location on webgl","\x0c","\x47","\xd9","\x53"));		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(412)
					HX_STACK_DO_THROW(tmp8);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Program3D_obj,__use,(void))

bool Program3D_obj::verbose;


Program3D_obj::Program3D_obj()
{
}

void Program3D_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Program3D);
	HX_MARK_MEMBER_NAME(__alphaSamplerUniforms,"__alphaSamplerUniforms");
	HX_MARK_MEMBER_NAME(__context,"__context");
	HX_MARK_MEMBER_NAME(__fragmentShaderID,"__fragmentShaderID");
	HX_MARK_MEMBER_NAME(__fragmentSource,"__fragmentSource");
	HX_MARK_MEMBER_NAME(__fragmentUniformMap,"__fragmentUniformMap");
	HX_MARK_MEMBER_NAME(__memUsage,"__memUsage");
	HX_MARK_MEMBER_NAME(__positionScale,"__positionScale");
	HX_MARK_MEMBER_NAME(__programID,"__programID");
	HX_MARK_MEMBER_NAME(__samplerStates,"__samplerStates");
	HX_MARK_MEMBER_NAME(__samplerUniforms,"__samplerUniforms");
	HX_MARK_MEMBER_NAME(__samplerUsageMask,"__samplerUsageMask");
	HX_MARK_MEMBER_NAME(__uniforms,"__uniforms");
	HX_MARK_MEMBER_NAME(__vertexShaderID,"__vertexShaderID");
	HX_MARK_MEMBER_NAME(__vertexSource,"__vertexSource");
	HX_MARK_MEMBER_NAME(__vertexUniformMap,"__vertexUniformMap");
	HX_MARK_END_CLASS();
}

void Program3D_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(__alphaSamplerUniforms,"__alphaSamplerUniforms");
	HX_VISIT_MEMBER_NAME(__context,"__context");
	HX_VISIT_MEMBER_NAME(__fragmentShaderID,"__fragmentShaderID");
	HX_VISIT_MEMBER_NAME(__fragmentSource,"__fragmentSource");
	HX_VISIT_MEMBER_NAME(__fragmentUniformMap,"__fragmentUniformMap");
	HX_VISIT_MEMBER_NAME(__memUsage,"__memUsage");
	HX_VISIT_MEMBER_NAME(__positionScale,"__positionScale");
	HX_VISIT_MEMBER_NAME(__programID,"__programID");
	HX_VISIT_MEMBER_NAME(__samplerStates,"__samplerStates");
	HX_VISIT_MEMBER_NAME(__samplerUniforms,"__samplerUniforms");
	HX_VISIT_MEMBER_NAME(__samplerUsageMask,"__samplerUsageMask");
	HX_VISIT_MEMBER_NAME(__uniforms,"__uniforms");
	HX_VISIT_MEMBER_NAME(__vertexShaderID,"__vertexShaderID");
	HX_VISIT_MEMBER_NAME(__vertexSource,"__vertexSource");
	HX_VISIT_MEMBER_NAME(__vertexUniformMap,"__vertexUniformMap");
}

Dynamic Program3D_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"__use") ) { return __use_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"upload") ) { return upload_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"dispose") ) { return dispose_dyn(); }
		if (HX_FIELD_EQ(inName,"__flush") ) { return __flush_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"__context") ) { return __context; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"__memUsage") ) { return __memUsage; }
		if (HX_FIELD_EQ(inName,"__uniforms") ) { return __uniforms; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"__programID") ) { return __programID; }
		if (HX_FIELD_EQ(inName,"__markDirty") ) { return __markDirty_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__vertexSource") ) { return __vertexSource; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__positionScale") ) { return __positionScale; }
		if (HX_FIELD_EQ(inName,"__samplerStates") ) { return __samplerStates; }
		if (HX_FIELD_EQ(inName,"__deleteShaders") ) { return __deleteShaders_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__fragmentSource") ) { return __fragmentSource; }
		if (HX_FIELD_EQ(inName,"__vertexShaderID") ) { return __vertexShaderID; }
		if (HX_FIELD_EQ(inName,"__uploadFromGLSL") ) { return __uploadFromGLSL_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__samplerUniforms") ) { return __samplerUniforms; }
		if (HX_FIELD_EQ(inName,"__getSamplerState") ) { return __getSamplerState_dyn(); }
		if (HX_FIELD_EQ(inName,"__setSamplerState") ) { return __setSamplerState_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"__fragmentShaderID") ) { return __fragmentShaderID; }
		if (HX_FIELD_EQ(inName,"__samplerUsageMask") ) { return __samplerUsageMask; }
		if (HX_FIELD_EQ(inName,"__vertexUniformMap") ) { return __vertexUniformMap; }
		if (HX_FIELD_EQ(inName,"__buildUniformList") ) { return __buildUniformList_dyn(); }
		if (HX_FIELD_EQ(inName,"__setPositionScale") ) { return __setPositionScale_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"__fragmentUniformMap") ) { return __fragmentUniformMap; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"__alphaSamplerUniforms") ) { return __alphaSamplerUniforms; }
	}
	return super::__Field(inName,inCallProp);
}

bool Program3D_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"verbose") ) { outValue = verbose; return true;  }
	}
	return false;
}

Dynamic Program3D_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"__context") ) { __context=inValue.Cast< ::openfl::display3D::Context3D >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"__memUsage") ) { __memUsage=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__uniforms") ) { __uniforms=inValue.Cast< ::List >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"__programID") ) { __programID=inValue.Cast< ::lime::graphics::opengl::GLProgram >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__vertexSource") ) { __vertexSource=inValue.Cast< ::String >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__positionScale") ) { __positionScale=inValue.Cast< ::openfl::display3D::_Program3D::Uniform >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__samplerStates") ) { __samplerStates=inValue.Cast< ::openfl::_Vector::ObjectVector >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__fragmentSource") ) { __fragmentSource=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__vertexShaderID") ) { __vertexShaderID=inValue.Cast< ::lime::graphics::opengl::GLShader >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__samplerUniforms") ) { __samplerUniforms=inValue.Cast< ::List >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"__fragmentShaderID") ) { __fragmentShaderID=inValue.Cast< ::lime::graphics::opengl::GLShader >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__samplerUsageMask") ) { __samplerUsageMask=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__vertexUniformMap") ) { __vertexUniformMap=inValue.Cast< ::openfl::display3D::_Program3D::UniformMap >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"__fragmentUniformMap") ) { __fragmentUniformMap=inValue.Cast< ::openfl::display3D::_Program3D::UniformMap >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"__alphaSamplerUniforms") ) { __alphaSamplerUniforms=inValue.Cast< ::List >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Program3D_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"verbose") ) { verbose=ioValue.Cast< bool >(); return true; }
	}
	return false;
}

void Program3D_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("__alphaSamplerUniforms","\x49","\x93","\x09","\xfc"));
	outFields->push(HX_HCSTRING("__context","\xcf","\xe6","\xc5","\x9a"));
	outFields->push(HX_HCSTRING("__fragmentShaderID","\x50","\xd1","\x6e","\x10"));
	outFields->push(HX_HCSTRING("__fragmentSource","\xeb","\xcb","\x2c","\x83"));
	outFields->push(HX_HCSTRING("__fragmentUniformMap","\xd8","\x1c","\x22","\xcd"));
	outFields->push(HX_HCSTRING("__memUsage","\xec","\x05","\xee","\x37"));
	outFields->push(HX_HCSTRING("__positionScale","\x01","\xd2","\x7f","\x6a"));
	outFields->push(HX_HCSTRING("__programID","\x3f","\x7c","\xf0","\x0a"));
	outFields->push(HX_HCSTRING("__samplerStates","\x4a","\xc1","\xd9","\x13"));
	outFields->push(HX_HCSTRING("__samplerUniforms","\xc7","\xc6","\x82","\xb1"));
	outFields->push(HX_HCSTRING("__samplerUsageMask","\xa5","\x3b","\x17","\xfe"));
	outFields->push(HX_HCSTRING("__uniforms","\xdf","\x3f","\x8d","\xa5"));
	outFields->push(HX_HCSTRING("__vertexShaderID","\xe4","\xf8","\x83","\xef"));
	outFields->push(HX_HCSTRING("__vertexSource","\x7f","\x26","\x07","\xf3"));
	outFields->push(HX_HCSTRING("__vertexUniformMap","\x6c","\x51","\x7f","\x79"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::List*/ ,(int)offsetof(Program3D_obj,__alphaSamplerUniforms),HX_HCSTRING("__alphaSamplerUniforms","\x49","\x93","\x09","\xfc")},
	{hx::fsObject /*::openfl::display3D::Context3D*/ ,(int)offsetof(Program3D_obj,__context),HX_HCSTRING("__context","\xcf","\xe6","\xc5","\x9a")},
	{hx::fsObject /*::lime::graphics::opengl::GLShader*/ ,(int)offsetof(Program3D_obj,__fragmentShaderID),HX_HCSTRING("__fragmentShaderID","\x50","\xd1","\x6e","\x10")},
	{hx::fsString,(int)offsetof(Program3D_obj,__fragmentSource),HX_HCSTRING("__fragmentSource","\xeb","\xcb","\x2c","\x83")},
	{hx::fsObject /*::openfl::display3D::_Program3D::UniformMap*/ ,(int)offsetof(Program3D_obj,__fragmentUniformMap),HX_HCSTRING("__fragmentUniformMap","\xd8","\x1c","\x22","\xcd")},
	{hx::fsInt,(int)offsetof(Program3D_obj,__memUsage),HX_HCSTRING("__memUsage","\xec","\x05","\xee","\x37")},
	{hx::fsObject /*::openfl::display3D::_Program3D::Uniform*/ ,(int)offsetof(Program3D_obj,__positionScale),HX_HCSTRING("__positionScale","\x01","\xd2","\x7f","\x6a")},
	{hx::fsObject /*::lime::graphics::opengl::GLProgram*/ ,(int)offsetof(Program3D_obj,__programID),HX_HCSTRING("__programID","\x3f","\x7c","\xf0","\x0a")},
	{hx::fsObject /*::openfl::_Vector::ObjectVector*/ ,(int)offsetof(Program3D_obj,__samplerStates),HX_HCSTRING("__samplerStates","\x4a","\xc1","\xd9","\x13")},
	{hx::fsObject /*::List*/ ,(int)offsetof(Program3D_obj,__samplerUniforms),HX_HCSTRING("__samplerUniforms","\xc7","\xc6","\x82","\xb1")},
	{hx::fsInt,(int)offsetof(Program3D_obj,__samplerUsageMask),HX_HCSTRING("__samplerUsageMask","\xa5","\x3b","\x17","\xfe")},
	{hx::fsObject /*::List*/ ,(int)offsetof(Program3D_obj,__uniforms),HX_HCSTRING("__uniforms","\xdf","\x3f","\x8d","\xa5")},
	{hx::fsObject /*::lime::graphics::opengl::GLShader*/ ,(int)offsetof(Program3D_obj,__vertexShaderID),HX_HCSTRING("__vertexShaderID","\xe4","\xf8","\x83","\xef")},
	{hx::fsString,(int)offsetof(Program3D_obj,__vertexSource),HX_HCSTRING("__vertexSource","\x7f","\x26","\x07","\xf3")},
	{hx::fsObject /*::openfl::display3D::_Program3D::UniformMap*/ ,(int)offsetof(Program3D_obj,__vertexUniformMap),HX_HCSTRING("__vertexUniformMap","\x6c","\x51","\x7f","\x79")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsBool,(void *) &Program3D_obj::verbose,HX_HCSTRING("verbose","\x82","\xd7","\xb9","\x71")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("__alphaSamplerUniforms","\x49","\x93","\x09","\xfc"),
	HX_HCSTRING("__context","\xcf","\xe6","\xc5","\x9a"),
	HX_HCSTRING("__fragmentShaderID","\x50","\xd1","\x6e","\x10"),
	HX_HCSTRING("__fragmentSource","\xeb","\xcb","\x2c","\x83"),
	HX_HCSTRING("__fragmentUniformMap","\xd8","\x1c","\x22","\xcd"),
	HX_HCSTRING("__memUsage","\xec","\x05","\xee","\x37"),
	HX_HCSTRING("__positionScale","\x01","\xd2","\x7f","\x6a"),
	HX_HCSTRING("__programID","\x3f","\x7c","\xf0","\x0a"),
	HX_HCSTRING("__samplerStates","\x4a","\xc1","\xd9","\x13"),
	HX_HCSTRING("__samplerUniforms","\xc7","\xc6","\x82","\xb1"),
	HX_HCSTRING("__samplerUsageMask","\xa5","\x3b","\x17","\xfe"),
	HX_HCSTRING("__uniforms","\xdf","\x3f","\x8d","\xa5"),
	HX_HCSTRING("__vertexShaderID","\xe4","\xf8","\x83","\xef"),
	HX_HCSTRING("__vertexSource","\x7f","\x26","\x07","\xf3"),
	HX_HCSTRING("__vertexUniformMap","\x6c","\x51","\x7f","\x79"),
	HX_HCSTRING("dispose","\x9f","\x80","\x4c","\xbb"),
	HX_HCSTRING("upload","\x01","\xca","\x59","\x8c"),
	HX_HCSTRING("__buildUniformList","\x44","\x16","\xc1","\x02"),
	HX_HCSTRING("__deleteShaders","\xa3","\x4d","\xc2","\x45"),
	HX_HCSTRING("__flush","\xa4","\xbb","\xf9","\x6c"),
	HX_HCSTRING("__getSamplerState","\x7f","\x6a","\x04","\x62"),
	HX_HCSTRING("__markDirty","\xa5","\x79","\xcf","\x64"),
	HX_HCSTRING("__setPositionScale","\x3f","\xc3","\xc0","\x0e"),
	HX_HCSTRING("__setSamplerState","\x8b","\xe7","\xcf","\x5d"),
	HX_HCSTRING("__uploadFromGLSL","\xa9","\x36","\x31","\x0d"),
	HX_HCSTRING("__use","\x27","\x8d","\x35","\xf2"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Program3D_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Program3D_obj::verbose,"verbose");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Program3D_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Program3D_obj::verbose,"verbose");
};

#endif

hx::Class Program3D_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("verbose","\x82","\xd7","\xb9","\x71"),
	::String(null()) };

void Program3D_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.display3D.Program3D","\x7c","\x83","\x68","\xf5");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Program3D_obj::__GetStatic;
	__mClass->mSetStaticField = &Program3D_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Program3D_obj >;
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

void Program3D_obj::__boot()
{
struct _Function_0_1{
	inline static bool Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/display3D/Program3D.hx",24,0x0a985b04)
		{
			HX_STACK_LINE(24)
			int tmp = ::lime::utils::Log_obj::level;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(24)
			return (tmp == (int)5);
		}
		return null();
	}
};
	verbose= _Function_0_1::Block();
}

} // end namespace openfl
} // end namespace display3D
