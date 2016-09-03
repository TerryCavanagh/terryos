#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_opengl_GL
#include <lime/graphics/opengl/GL.h>
#endif
#ifndef INCLUDED_openfl__internal_stage3D_GLUtils
#include <openfl/_internal/stage3D/GLUtils.h>
#endif
#ifndef INCLUDED_openfl_errors_Error
#include <openfl/errors/Error.h>
#endif
#ifndef INCLUDED_openfl_errors_IllegalOperationError
#include <openfl/errors/IllegalOperationError.h>
#endif
namespace openfl{
namespace _internal{
namespace stage3D{

Void GLUtils_obj::__construct()
{
	return null();
}

//GLUtils_obj::~GLUtils_obj() { }

Dynamic GLUtils_obj::__CreateEmpty() { return  new GLUtils_obj; }
hx::ObjectPtr< GLUtils_obj > GLUtils_obj::__new()
{  hx::ObjectPtr< GLUtils_obj > _result_ = new GLUtils_obj();
	_result_->__construct();
	return _result_;}

Dynamic GLUtils_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< GLUtils_obj > _result_ = new GLUtils_obj();
	_result_->__construct();
	return _result_;}

bool GLUtils_obj::debug;

Void GLUtils_obj::CheckGLError( ){
{
		HX_STACK_FRAME("openfl._internal.stage3D.GLUtils","CheckGLError",0x9918f1ac,"openfl._internal.stage3D.GLUtils.CheckGLError","openfl/_internal/stage3D/GLUtils.hx",15,0x3e0a00c4)
		HX_STACK_LINE(16)
		bool tmp = ::openfl::_internal::stage3D::GLUtils_obj::debug;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(16)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(16)
		if ((tmp1)){
			HX_STACK_LINE(16)
			return null();
		}
		HX_STACK_LINE(18)
		int error = ::lime::graphics::opengl::GL_obj::cffi_lime_gl_get_error.call();		HX_STACK_VAR(error,"error");
		HX_STACK_LINE(19)
		bool tmp2 = (error != (int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(19)
		if ((tmp2)){
			HX_STACK_LINE(20)
			::String tmp3 = (HX_HCSTRING("Error calling openGL api. Error: ","\x3f","\xad","\x32","\x17") + error);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(20)
			::String tmp4 = (tmp3 + HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(20)
			::openfl::errors::IllegalOperationError tmp5 = ::openfl::errors::IllegalOperationError_obj::__new(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(20)
			HX_STACK_DO_THROW(tmp5);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(GLUtils_obj,CheckGLError,(void))


GLUtils_obj::GLUtils_obj()
{
}

bool GLUtils_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"debug") ) { outValue = debug; return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"CheckGLError") ) { outValue = CheckGLError_dyn(); return true;  }
	}
	return false;
}

bool GLUtils_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"debug") ) { debug=ioValue.Cast< bool >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsBool,(void *) &GLUtils_obj::debug,HX_HCSTRING("debug","\x53","\x52","\x1f","\xd7")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GLUtils_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(GLUtils_obj::debug,"debug");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GLUtils_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(GLUtils_obj::debug,"debug");
};

#endif

hx::Class GLUtils_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("debug","\x53","\x52","\x1f","\xd7"),
	HX_HCSTRING("CheckGLError","\xbb","\x73","\x32","\xda"),
	::String(null()) };

void GLUtils_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.stage3D.GLUtils","\x1d","\xe1","\xf9","\x25");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &GLUtils_obj::__GetStatic;
	__mClass->mSetStaticField = &GLUtils_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< GLUtils_obj >;
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

void GLUtils_obj::__boot()
{
	debug= false;
}

} // end namespace openfl
} // end namespace _internal
} // end namespace stage3D
