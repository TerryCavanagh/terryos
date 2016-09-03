#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_opengl_GL
#include <lime/graphics/opengl/GL.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLObject
#include <lime/graphics/opengl/GLObject.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLTexture
#include <lime/graphics/opengl/GLTexture.h>
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
#ifndef INCLUDED_openfl_display3D_textures_Texture
#include <openfl/display3D/textures/Texture.h>
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
namespace openfl{
namespace display3D{
namespace textures{

Void TextureBase_obj::__construct(::openfl::display3D::Context3D context,int target)
{
HX_STACK_FRAME("openfl.display3D.textures.TextureBase","new",0x670078a1,"openfl.display3D.textures.TextureBase.new","openfl/display3D/textures/TextureBase.hx",12,0x7b0f92ae)
HX_STACK_THIS(this)
HX_STACK_ARG(context,"context")
HX_STACK_ARG(target,"target")
{
	HX_STACK_LINE(23)
	this->__outputTextureMemoryUsage = false;
	HX_STACK_LINE(31)
	super::__construct(null());
	HX_STACK_LINE(33)
	this->__context = context;
	HX_STACK_LINE(34)
	this->__textureTarget = target;
	HX_STACK_LINE(36)
	int tmp = ::lime::graphics::opengl::GL_obj::get_version();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(36)
	Dynamic tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(36)
	{
		HX_STACK_LINE(36)
		::hx::Object * inVal = ::lime::graphics::opengl::GL_obj::cffi_lime_gl_create_texture.call();		HX_STACK_VAR(inVal,"inVal");
		HX_STACK_LINE(36)
		::hx::Object * tmp2 = inVal;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(36)
		::hx::Object * tmp3 = hx::DynamicPtr(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(36)
		tmp1 = Dynamic(tmp3);
	}
	HX_STACK_LINE(36)
	::lime::graphics::opengl::GLTexture tmp2 = ::lime::graphics::opengl::GLTexture_obj::__new(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(36)
	this->__textureID = tmp2;
	HX_STACK_LINE(46)
	this->__internalFormat = (int)6408;
	HX_STACK_LINE(47)
	this->__format = (int)32993;
	HX_STACK_LINE(63)
	this->__memoryUsage = (int)0;
	HX_STACK_LINE(64)
	this->__compressedMemoryUsage = (int)0;
}
;
	return null();
}

//TextureBase_obj::~TextureBase_obj() { }

Dynamic TextureBase_obj::__CreateEmpty() { return  new TextureBase_obj; }
hx::ObjectPtr< TextureBase_obj > TextureBase_obj::__new(::openfl::display3D::Context3D context,int target)
{  hx::ObjectPtr< TextureBase_obj > _result_ = new TextureBase_obj();
	_result_->__construct(context,target);
	return _result_;}

Dynamic TextureBase_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TextureBase_obj > _result_ = new TextureBase_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

Void TextureBase_obj::dispose( ){
{
		HX_STACK_FRAME("openfl.display3D.textures.TextureBase","dispose",0xa678dd60,"openfl.display3D.textures.TextureBase.dispose","openfl/display3D/textures/TextureBase.hx",69,0x7b0f92ae)
		HX_STACK_THIS(this)
		HX_STACK_LINE(71)
		::openfl::display3D::textures::Texture tmp = this->__alphaTexture;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(71)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(71)
		if ((tmp1)){
			HX_STACK_LINE(73)
			::openfl::display3D::textures::Texture tmp2 = this->__alphaTexture;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(73)
			tmp2->dispose();
		}
		HX_STACK_LINE(77)
		{
			HX_STACK_LINE(77)
			::lime::graphics::opengl::GLTexture tmp2 = this->__textureID;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(77)
			::lime::graphics::opengl::GLTexture texture = tmp2;		HX_STACK_VAR(texture,"texture");
			HX_STACK_LINE(77)
			::lime::graphics::opengl::GL_obj::cffi_lime_gl_delete_texture.call(hx::DynamicPtr(texture->id));
			HX_STACK_LINE(77)
			texture->invalidate();
		}
		HX_STACK_LINE(79)
		int tmp2 = this->__compressedMemoryUsage;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(79)
		bool tmp3 = (tmp2 > (int)0);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(79)
		if ((tmp3)){
			HX_STACK_LINE(81)
			::openfl::display3D::Context3D tmp4 = this->__context;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(81)
			tmp4->__statsDecrement((int)4);
			HX_STACK_LINE(82)
			::openfl::display3D::Context3D tmp5 = this->__context;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(82)
			int tmp6 = this->__compressedMemoryUsage;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(82)
			int tmp7 = tmp5->__statsSubtract((int)9,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(82)
			int currentCompressedMemory = tmp7;		HX_STACK_VAR(currentCompressedMemory,"currentCompressedMemory");
			HX_STACK_LINE(92)
			this->__compressedMemoryUsage = (int)0;
		}
		HX_STACK_LINE(96)
		int tmp4 = this->__memoryUsage;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(96)
		bool tmp5 = (tmp4 > (int)0);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(96)
		if ((tmp5)){
			HX_STACK_LINE(98)
			::openfl::display3D::Context3D tmp6 = this->__context;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(98)
			tmp6->__statsDecrement((int)3);
			HX_STACK_LINE(99)
			::openfl::display3D::Context3D tmp7 = this->__context;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(99)
			int tmp8 = this->__memoryUsage;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(99)
			int tmp9 = tmp7->__statsSubtract((int)8,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(99)
			int currentMemory = tmp9;		HX_STACK_VAR(currentMemory,"currentMemory");
			HX_STACK_LINE(109)
			this->__memoryUsage = (int)0;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TextureBase_obj,dispose,(void))

Void TextureBase_obj::__setSamplerState( ::openfl::_internal::stage3D::SamplerState state){
{
		HX_STACK_FRAME("openfl.display3D.textures.TextureBase","__setSamplerState",0x8e361f8c,"openfl.display3D.textures.TextureBase.__setSamplerState","openfl/display3D/textures/TextureBase.hx",116,0x7b0f92ae)
		HX_STACK_THIS(this)
		HX_STACK_ARG(state,"state")
		HX_STACK_LINE(118)
		::openfl::_internal::stage3D::SamplerState tmp = this->__samplerState;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(118)
		bool tmp1 = state->equals(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(118)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(118)
		if ((tmp2)){
			HX_STACK_LINE(120)
			{
				HX_STACK_LINE(120)
				::lime::graphics::opengl::GLTexture tmp3 = this->__textureID;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(120)
				::lime::graphics::opengl::GLTexture texture = tmp3;		HX_STACK_VAR(texture,"texture");
				HX_STACK_LINE(120)
				::lime::graphics::opengl::GL_obj::cffi_lime_gl_bind_texture.call(this->__textureTarget,hx::DynamicPtr((  (((texture == null()))) ? Dynamic(null()) : Dynamic(texture->id) )));
			}
			HX_STACK_LINE(121)
			::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
			HX_STACK_LINE(122)
			::lime::graphics::opengl::GL_obj::cffi_lime_gl_tex_parameteri.call(this->__textureTarget,(int)10241,state->minFilter);
			HX_STACK_LINE(123)
			::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
			HX_STACK_LINE(124)
			::lime::graphics::opengl::GL_obj::cffi_lime_gl_tex_parameteri.call(this->__textureTarget,(int)10240,state->magFilter);
			HX_STACK_LINE(125)
			::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
			HX_STACK_LINE(126)
			::lime::graphics::opengl::GL_obj::cffi_lime_gl_tex_parameteri.call(this->__textureTarget,(int)10242,state->wrapModeS);
			HX_STACK_LINE(127)
			::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
			HX_STACK_LINE(128)
			::lime::graphics::opengl::GL_obj::cffi_lime_gl_tex_parameteri.call(this->__textureTarget,(int)10243,state->wrapModeT);
			HX_STACK_LINE(129)
			::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
			HX_STACK_LINE(131)
			bool tmp3 = (state->lodBias != ((Float)0.0));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(131)
			if ((tmp3)){
			}
			HX_STACK_LINE(138)
			this->__samplerState = state;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TextureBase_obj,__setSamplerState,(void))

Void TextureBase_obj::__trackCompressedMemoryUsage( int memory){
{
		HX_STACK_FRAME("openfl.display3D.textures.TextureBase","__trackCompressedMemoryUsage",0x1551bb93,"openfl.display3D.textures.TextureBase.__trackCompressedMemoryUsage","openfl/display3D/textures/TextureBase.hx",145,0x7b0f92ae)
		HX_STACK_THIS(this)
		HX_STACK_ARG(memory,"memory")
		HX_STACK_LINE(147)
		int tmp = this->__compressedMemoryUsage;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(147)
		bool tmp1 = (tmp == (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(147)
		if ((tmp1)){
			HX_STACK_LINE(149)
			::openfl::display3D::Context3D tmp2 = this->__context;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(149)
			tmp2->__statsIncrement((int)4);
		}
		HX_STACK_LINE(153)
		hx::AddEq(this->__compressedMemoryUsage,memory);
		HX_STACK_LINE(154)
		::openfl::display3D::Context3D tmp2 = this->__context;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(154)
		int tmp3 = memory;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(154)
		int tmp4 = tmp2->__statsAdd((int)9,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(154)
		int currentCompressedMemory = tmp4;		HX_STACK_VAR(currentCompressedMemory,"currentCompressedMemory");
		HX_STACK_LINE(164)
		int tmp5 = memory;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(164)
		this->__trackMemoryUsage(tmp5);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TextureBase_obj,__trackCompressedMemoryUsage,(void))

Void TextureBase_obj::__trackMemoryUsage( int memory){
{
		HX_STACK_FRAME("openfl.display3D.textures.TextureBase","__trackMemoryUsage",0xc7a62994,"openfl.display3D.textures.TextureBase.__trackMemoryUsage","openfl/display3D/textures/TextureBase.hx",169,0x7b0f92ae)
		HX_STACK_THIS(this)
		HX_STACK_ARG(memory,"memory")
		HX_STACK_LINE(171)
		int tmp = this->__memoryUsage;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(171)
		bool tmp1 = (tmp == (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(171)
		if ((tmp1)){
			HX_STACK_LINE(173)
			::openfl::display3D::Context3D tmp2 = this->__context;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(173)
			tmp2->__statsIncrement((int)3);
		}
		HX_STACK_LINE(177)
		hx::AddEq(this->__memoryUsage,memory);
		HX_STACK_LINE(178)
		::openfl::display3D::Context3D tmp2 = this->__context;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(178)
		int tmp3 = memory;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(178)
		int tmp4 = tmp2->__statsAdd((int)8,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(178)
		int currentMemory = tmp4;		HX_STACK_VAR(currentMemory,"currentMemory");
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TextureBase_obj,__trackMemoryUsage,(void))

Dynamic TextureBase_obj::__isGLES;


TextureBase_obj::TextureBase_obj()
{
}

void TextureBase_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TextureBase);
	HX_MARK_MEMBER_NAME(__alphaTexture,"__alphaTexture");
	HX_MARK_MEMBER_NAME(__compressedMemoryUsage,"__compressedMemoryUsage");
	HX_MARK_MEMBER_NAME(__context,"__context");
	HX_MARK_MEMBER_NAME(__format,"__format");
	HX_MARK_MEMBER_NAME(__internalFormat,"__internalFormat");
	HX_MARK_MEMBER_NAME(__memoryUsage,"__memoryUsage");
	HX_MARK_MEMBER_NAME(__outputTextureMemoryUsage,"__outputTextureMemoryUsage");
	HX_MARK_MEMBER_NAME(__samplerState,"__samplerState");
	HX_MARK_MEMBER_NAME(__textureID,"__textureID");
	HX_MARK_MEMBER_NAME(__textureTarget,"__textureTarget");
	::openfl::events::EventDispatcher_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void TextureBase_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(__alphaTexture,"__alphaTexture");
	HX_VISIT_MEMBER_NAME(__compressedMemoryUsage,"__compressedMemoryUsage");
	HX_VISIT_MEMBER_NAME(__context,"__context");
	HX_VISIT_MEMBER_NAME(__format,"__format");
	HX_VISIT_MEMBER_NAME(__internalFormat,"__internalFormat");
	HX_VISIT_MEMBER_NAME(__memoryUsage,"__memoryUsage");
	HX_VISIT_MEMBER_NAME(__outputTextureMemoryUsage,"__outputTextureMemoryUsage");
	HX_VISIT_MEMBER_NAME(__samplerState,"__samplerState");
	HX_VISIT_MEMBER_NAME(__textureID,"__textureID");
	HX_VISIT_MEMBER_NAME(__textureTarget,"__textureTarget");
	::openfl::events::EventDispatcher_obj::__Visit(HX_VISIT_ARG);
}

Dynamic TextureBase_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"dispose") ) { return dispose_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__format") ) { return __format; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"__context") ) { return __context; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"__textureID") ) { return __textureID; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__memoryUsage") ) { return __memoryUsage; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__alphaTexture") ) { return __alphaTexture; }
		if (HX_FIELD_EQ(inName,"__samplerState") ) { return __samplerState; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__textureTarget") ) { return __textureTarget; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__internalFormat") ) { return __internalFormat; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__setSamplerState") ) { return __setSamplerState_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"__trackMemoryUsage") ) { return __trackMemoryUsage_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"__compressedMemoryUsage") ) { return __compressedMemoryUsage; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"__outputTextureMemoryUsage") ) { return __outputTextureMemoryUsage; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"__trackCompressedMemoryUsage") ) { return __trackCompressedMemoryUsage_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool TextureBase_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"__isGLES") ) { outValue = __isGLES; return true;  }
	}
	return false;
}

Dynamic TextureBase_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"__format") ) { __format=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"__context") ) { __context=inValue.Cast< ::openfl::display3D::Context3D >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"__textureID") ) { __textureID=inValue.Cast< ::lime::graphics::opengl::GLTexture >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__memoryUsage") ) { __memoryUsage=inValue.Cast< int >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__alphaTexture") ) { __alphaTexture=inValue.Cast< ::openfl::display3D::textures::Texture >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__samplerState") ) { __samplerState=inValue.Cast< ::openfl::_internal::stage3D::SamplerState >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__textureTarget") ) { __textureTarget=inValue.Cast< int >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__internalFormat") ) { __internalFormat=inValue.Cast< int >(); return inValue; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"__compressedMemoryUsage") ) { __compressedMemoryUsage=inValue.Cast< int >(); return inValue; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"__outputTextureMemoryUsage") ) { __outputTextureMemoryUsage=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool TextureBase_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"__isGLES") ) { __isGLES=ioValue.Cast< Dynamic >(); return true; }
	}
	return false;
}

void TextureBase_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("__alphaTexture","\x3d","\x94","\x14","\x53"));
	outFields->push(HX_HCSTRING("__compressedMemoryUsage","\x3f","\xa0","\x58","\x95"));
	outFields->push(HX_HCSTRING("__context","\xcf","\xe6","\xc5","\x9a"));
	outFields->push(HX_HCSTRING("__format","\x57","\xfa","\xbd","\xa5"));
	outFields->push(HX_HCSTRING("__internalFormat","\x74","\x81","\xbd","\x56"));
	outFields->push(HX_HCSTRING("__memoryUsage","\x40","\xbf","\x50","\xc5"));
	outFields->push(HX_HCSTRING("__outputTextureMemoryUsage","\xc6","\xcf","\x1a","\x71"));
	outFields->push(HX_HCSTRING("__samplerState","\x09","\x67","\x80","\xdc"));
	outFields->push(HX_HCSTRING("__textureID","\x56","\x7e","\x75","\xdd"));
	outFields->push(HX_HCSTRING("__textureTarget","\x6c","\xff","\xb6","\xa1"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::display3D::textures::Texture*/ ,(int)offsetof(TextureBase_obj,__alphaTexture),HX_HCSTRING("__alphaTexture","\x3d","\x94","\x14","\x53")},
	{hx::fsInt,(int)offsetof(TextureBase_obj,__compressedMemoryUsage),HX_HCSTRING("__compressedMemoryUsage","\x3f","\xa0","\x58","\x95")},
	{hx::fsObject /*::openfl::display3D::Context3D*/ ,(int)offsetof(TextureBase_obj,__context),HX_HCSTRING("__context","\xcf","\xe6","\xc5","\x9a")},
	{hx::fsInt,(int)offsetof(TextureBase_obj,__format),HX_HCSTRING("__format","\x57","\xfa","\xbd","\xa5")},
	{hx::fsInt,(int)offsetof(TextureBase_obj,__internalFormat),HX_HCSTRING("__internalFormat","\x74","\x81","\xbd","\x56")},
	{hx::fsInt,(int)offsetof(TextureBase_obj,__memoryUsage),HX_HCSTRING("__memoryUsage","\x40","\xbf","\x50","\xc5")},
	{hx::fsBool,(int)offsetof(TextureBase_obj,__outputTextureMemoryUsage),HX_HCSTRING("__outputTextureMemoryUsage","\xc6","\xcf","\x1a","\x71")},
	{hx::fsObject /*::openfl::_internal::stage3D::SamplerState*/ ,(int)offsetof(TextureBase_obj,__samplerState),HX_HCSTRING("__samplerState","\x09","\x67","\x80","\xdc")},
	{hx::fsObject /*::lime::graphics::opengl::GLTexture*/ ,(int)offsetof(TextureBase_obj,__textureID),HX_HCSTRING("__textureID","\x56","\x7e","\x75","\xdd")},
	{hx::fsInt,(int)offsetof(TextureBase_obj,__textureTarget),HX_HCSTRING("__textureTarget","\x6c","\xff","\xb6","\xa1")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(void *) &TextureBase_obj::__isGLES,HX_HCSTRING("__isGLES","\xdd","\x11","\xe5","\x09")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("__alphaTexture","\x3d","\x94","\x14","\x53"),
	HX_HCSTRING("__compressedMemoryUsage","\x3f","\xa0","\x58","\x95"),
	HX_HCSTRING("__context","\xcf","\xe6","\xc5","\x9a"),
	HX_HCSTRING("__format","\x57","\xfa","\xbd","\xa5"),
	HX_HCSTRING("__internalFormat","\x74","\x81","\xbd","\x56"),
	HX_HCSTRING("__memoryUsage","\x40","\xbf","\x50","\xc5"),
	HX_HCSTRING("__outputTextureMemoryUsage","\xc6","\xcf","\x1a","\x71"),
	HX_HCSTRING("__samplerState","\x09","\x67","\x80","\xdc"),
	HX_HCSTRING("__textureID","\x56","\x7e","\x75","\xdd"),
	HX_HCSTRING("__textureTarget","\x6c","\xff","\xb6","\xa1"),
	HX_HCSTRING("dispose","\x9f","\x80","\x4c","\xbb"),
	HX_HCSTRING("__setSamplerState","\x8b","\xe7","\xcf","\x5d"),
	HX_HCSTRING("__trackCompressedMemoryUsage","\xf4","\x85","\x3d","\x76"),
	HX_HCSTRING("__trackMemoryUsage","\xb5","\x60","\x9b","\x9e"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TextureBase_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(TextureBase_obj::__isGLES,"__isGLES");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TextureBase_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(TextureBase_obj::__isGLES,"__isGLES");
};

#endif

hx::Class TextureBase_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("__isGLES","\xdd","\x11","\xe5","\x09"),
	::String(null()) };

void TextureBase_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.display3D.textures.TextureBase","\x2f","\x94","\x15","\xbc");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &TextureBase_obj::__GetStatic;
	__mClass->mSetStaticField = &TextureBase_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< TextureBase_obj >;
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
