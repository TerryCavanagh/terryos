#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
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
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display3D_Context3D
#include <openfl/display3D/Context3D.h>
#endif
#ifndef INCLUDED_openfl_display3D_textures_CubeTexture
#include <openfl/display3D/textures/CubeTexture.h>
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
namespace textures{

Void CubeTexture_obj::__construct(::openfl::display3D::Context3D context,int size,Dynamic format,bool optimizeForRenderToTexture,int streamingLevels)
{
HX_STACK_FRAME("openfl.display3D.textures.CubeTexture","new",0x2100f37b,"openfl.display3D.textures.CubeTexture.new","openfl/display3D/textures/CubeTexture.hx",20,0xffe9b114)
HX_STACK_THIS(this)
HX_STACK_ARG(context,"context")
HX_STACK_ARG(size,"size")
HX_STACK_ARG(format,"format")
HX_STACK_ARG(optimizeForRenderToTexture,"optimizeForRenderToTexture")
HX_STACK_ARG(streamingLevels,"streamingLevels")
{
	HX_STACK_LINE(22)
	::openfl::display3D::Context3D tmp = context;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(22)
	super::__construct(tmp,(int)34067);
	HX_STACK_LINE(24)
	this->__size = size;
	HX_STACK_LINE(26)
	this->__optimizeForRenderToTexture = optimizeForRenderToTexture;
	HX_STACK_LINE(27)
	this->__streamingLevels = streamingLevels;
	HX_STACK_LINE(29)
	this->__uploadedSides = (int)0;
}
;
	return null();
}

//CubeTexture_obj::~CubeTexture_obj() { }

Dynamic CubeTexture_obj::__CreateEmpty() { return  new CubeTexture_obj; }
hx::ObjectPtr< CubeTexture_obj > CubeTexture_obj::__new(::openfl::display3D::Context3D context,int size,Dynamic format,bool optimizeForRenderToTexture,int streamingLevels)
{  hx::ObjectPtr< CubeTexture_obj > _result_ = new CubeTexture_obj();
	_result_->__construct(context,size,format,optimizeForRenderToTexture,streamingLevels);
	return _result_;}

Dynamic CubeTexture_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CubeTexture_obj > _result_ = new CubeTexture_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return _result_;}

Void CubeTexture_obj::uploadCompressedTextureFromByteArray( ::openfl::utils::ByteArrayData data,int byteArrayOffset,hx::Null< bool >  __o_async){
bool async = __o_async.Default(false);
	HX_STACK_FRAME("openfl.display3D.textures.CubeTexture","uploadCompressedTextureFromByteArray",0x47d49053,"openfl.display3D.textures.CubeTexture.uploadCompressedTextureFromByteArray","openfl/display3D/textures/CubeTexture.hx",34,0xffe9b114)
	HX_STACK_THIS(this)
	HX_STACK_ARG(data,"data")
	HX_STACK_ARG(byteArrayOffset,"byteArrayOffset")
	HX_STACK_ARG(async,"async")
{
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(CubeTexture_obj,uploadCompressedTextureFromByteArray,(void))

Void CubeTexture_obj::uploadFromBitmapData( ::openfl::display::BitmapData source,int side,hx::Null< int >  __o_miplevel,hx::Null< bool >  __o_generateMipmap){
int miplevel = __o_miplevel.Default(0);
bool generateMipmap = __o_generateMipmap.Default(false);
	HX_STACK_FRAME("openfl.display3D.textures.CubeTexture","uploadFromBitmapData",0xf44b3429,"openfl.display3D.textures.CubeTexture.uploadFromBitmapData","openfl/display3D/textures/CubeTexture.hx",41,0xffe9b114)
	HX_STACK_THIS(this)
	HX_STACK_ARG(source,"source")
	HX_STACK_ARG(side,"side")
	HX_STACK_ARG(miplevel,"miplevel")
	HX_STACK_ARG(generateMipmap,"generateMipmap")
{
		HX_STACK_LINE(43)
		{
			HX_STACK_LINE(43)
			::lime::graphics::opengl::GLTexture tmp = this->__textureID;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(43)
			::lime::graphics::opengl::GLTexture texture = tmp;		HX_STACK_VAR(texture,"texture");
			HX_STACK_LINE(43)
			::lime::graphics::opengl::GL_obj::cffi_lime_gl_bind_texture.call(this->__textureTarget,hx::DynamicPtr((  (((texture == null()))) ? Dynamic(null()) : Dynamic(texture->id) )));
		}
		HX_STACK_LINE(45)
		int tmp = side;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(45)
		int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(45)
		switch( (int)(tmp)){
			case (int)0: {
				HX_STACK_LINE(47)
				tmp1 = (int)34069;
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(48)
				tmp1 = (int)34070;
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(49)
				tmp1 = (int)34071;
			}
			;break;
			case (int)3: {
				HX_STACK_LINE(50)
				tmp1 = (int)34072;
			}
			;break;
			case (int)4: {
				HX_STACK_LINE(51)
				tmp1 = (int)34073;
			}
			;break;
			case (int)5: {
				HX_STACK_LINE(52)
				tmp1 = (int)34074;
			}
			;break;
			default: {
				HX_STACK_LINE(53)
				::openfl::errors::IllegalOperationError tmp2 = ::openfl::errors::IllegalOperationError_obj::__new(null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(53)
				HX_STACK_DO_THROW(tmp2);
			}
		}
		HX_STACK_LINE(45)
		int target = tmp1;		HX_STACK_VAR(target,"target");
		HX_STACK_LINE(59)
		int tmp2 = (int((int)1) << int(side));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(59)
		hx::OrEq(this->__uploadedSides,tmp2);
		HX_STACK_LINE(62)
		::lime::graphics::opengl::GL_obj::cffi_lime_gl_bind_texture.call(this->__textureTarget,hx::DynamicPtr(null()));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(CubeTexture_obj,uploadFromBitmapData,(void))

Void CubeTexture_obj::uploadFromByteArray( ::openfl::utils::ByteArrayData data,int byteArrayOffset,int side,hx::Null< int >  __o_miplevel){
int miplevel = __o_miplevel.Default(0);
	HX_STACK_FRAME("openfl.display3D.textures.CubeTexture","uploadFromByteArray",0x1e356101,"openfl.display3D.textures.CubeTexture.uploadFromByteArray","openfl/display3D/textures/CubeTexture.hx",67,0xffe9b114)
	HX_STACK_THIS(this)
	HX_STACK_ARG(data,"data")
	HX_STACK_ARG(byteArrayOffset,"byteArrayOffset")
	HX_STACK_ARG(side,"side")
	HX_STACK_ARG(miplevel,"miplevel")
{
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(CubeTexture_obj,uploadFromByteArray,(void))


CubeTexture_obj::CubeTexture_obj()
{
}

Dynamic CubeTexture_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"__size") ) { return __size; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__uploadedSides") ) { return __uploadedSides; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__streamingLevels") ) { return __streamingLevels; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"uploadFromByteArray") ) { return uploadFromByteArray_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"uploadFromBitmapData") ) { return uploadFromBitmapData_dyn(); }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"__optimizeForRenderToTexture") ) { return __optimizeForRenderToTexture; }
		break;
	case 36:
		if (HX_FIELD_EQ(inName,"uploadCompressedTextureFromByteArray") ) { return uploadCompressedTextureFromByteArray_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic CubeTexture_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"__size") ) { __size=inValue.Cast< int >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__uploadedSides") ) { __uploadedSides=inValue.Cast< int >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__streamingLevels") ) { __streamingLevels=inValue.Cast< int >(); return inValue; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"__optimizeForRenderToTexture") ) { __optimizeForRenderToTexture=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void CubeTexture_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("__optimizeForRenderToTexture","\xbe","\xd4","\x90","\xb3"));
	outFields->push(HX_HCSTRING("__size","\xe1","\x03","\x4c","\xfb"));
	outFields->push(HX_HCSTRING("__streamingLevels","\x51","\xa1","\xde","\x07"));
	outFields->push(HX_HCSTRING("__uploadedSides","\x1c","\xd7","\x55","\xa3"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(CubeTexture_obj,__optimizeForRenderToTexture),HX_HCSTRING("__optimizeForRenderToTexture","\xbe","\xd4","\x90","\xb3")},
	{hx::fsInt,(int)offsetof(CubeTexture_obj,__size),HX_HCSTRING("__size","\xe1","\x03","\x4c","\xfb")},
	{hx::fsInt,(int)offsetof(CubeTexture_obj,__streamingLevels),HX_HCSTRING("__streamingLevels","\x51","\xa1","\xde","\x07")},
	{hx::fsInt,(int)offsetof(CubeTexture_obj,__uploadedSides),HX_HCSTRING("__uploadedSides","\x1c","\xd7","\x55","\xa3")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("__optimizeForRenderToTexture","\xbe","\xd4","\x90","\xb3"),
	HX_HCSTRING("__size","\xe1","\x03","\x4c","\xfb"),
	HX_HCSTRING("__streamingLevels","\x51","\xa1","\xde","\x07"),
	HX_HCSTRING("__uploadedSides","\x1c","\xd7","\x55","\xa3"),
	HX_HCSTRING("uploadCompressedTextureFromByteArray","\xce","\xc7","\x86","\xc5"),
	HX_HCSTRING("uploadFromBitmapData","\xa4","\x85","\x65","\x0d"),
	HX_HCSTRING("uploadFromByteArray","\xe6","\x17","\x1b","\xee"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CubeTexture_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CubeTexture_obj::__mClass,"__mClass");
};

#endif

hx::Class CubeTexture_obj::__mClass;

void CubeTexture_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.display3D.textures.CubeTexture","\x09","\x1a","\x15","\x3a");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< CubeTexture_obj >;
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
