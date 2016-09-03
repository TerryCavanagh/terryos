#include <hxcpp.h>

#ifndef INCLUDED_openfl__Vector_FloatVector
#include <openfl/_Vector/FloatVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_IVector
#include <openfl/_Vector/IVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_IntVector
#include <openfl/_Vector/IntVector.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_DrawCommandBuffer
#include <openfl/_internal/renderer/DrawCommandBuffer.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_DrawCommandReader
#include <openfl/_internal/renderer/DrawCommandReader.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer__DrawCommandReader_DrawTrianglesView_Impl_
#include <openfl/_internal/renderer/_DrawCommandReader/DrawTrianglesView_Impl_.h>
#endif
namespace openfl{
namespace _internal{
namespace renderer{
namespace _DrawCommandReader{

Void DrawTrianglesView_Impl__obj::__construct()
{
	return null();
}

//DrawTrianglesView_Impl__obj::~DrawTrianglesView_Impl__obj() { }

Dynamic DrawTrianglesView_Impl__obj::__CreateEmpty() { return  new DrawTrianglesView_Impl__obj; }
hx::ObjectPtr< DrawTrianglesView_Impl__obj > DrawTrianglesView_Impl__obj::__new()
{  hx::ObjectPtr< DrawTrianglesView_Impl__obj > _result_ = new DrawTrianglesView_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic DrawTrianglesView_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< DrawTrianglesView_Impl__obj > _result_ = new DrawTrianglesView_Impl__obj();
	_result_->__construct();
	return _result_;}

::openfl::_internal::renderer::DrawCommandReader DrawTrianglesView_Impl__obj::_new( ::openfl::_internal::renderer::DrawCommandReader d){
	HX_STACK_FRAME("openfl._internal.renderer._DrawCommandReader.DrawTrianglesView_Impl_","_new",0x7149dbeb,"openfl._internal.renderer._DrawCommandReader.DrawTrianglesView_Impl_._new","openfl/_internal/renderer/DrawCommandReader.hx",332,0xbbdbd1ae)
	HX_STACK_ARG(d,"d")
	HX_STACK_LINE(332)
	::openfl::_internal::renderer::DrawCommandReader tmp = d;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(332)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(DrawTrianglesView_Impl__obj,_new,return )

::openfl::_Vector::FloatVector DrawTrianglesView_Impl__obj::get_vertices( ::openfl::_internal::renderer::DrawCommandReader this1){
	HX_STACK_FRAME("openfl._internal.renderer._DrawCommandReader.DrawTrianglesView_Impl_","get_vertices",0xf8b2d48c,"openfl._internal.renderer._DrawCommandReader.DrawTrianglesView_Impl_.get_vertices","openfl/_internal/renderer/DrawCommandReader.hx",333,0xbbdbd1ae)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(333)
	int tmp = this1->oPos;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(333)
	Dynamic tmp1 = this1->buffer->o->__GetItem(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(333)
	::openfl::_Vector::FloatVector tmp2 = ((::openfl::_Vector::FloatVector)(tmp1));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(333)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(DrawTrianglesView_Impl__obj,get_vertices,return )

::openfl::_Vector::IntVector DrawTrianglesView_Impl__obj::get_indices( ::openfl::_internal::renderer::DrawCommandReader this1){
	HX_STACK_FRAME("openfl._internal.renderer._DrawCommandReader.DrawTrianglesView_Impl_","get_indices",0x09da25f4,"openfl._internal.renderer._DrawCommandReader.DrawTrianglesView_Impl_.get_indices","openfl/_internal/renderer/DrawCommandReader.hx",334,0xbbdbd1ae)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(334)
	int tmp = (this1->oPos + (int)1);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(334)
	Dynamic tmp1 = this1->buffer->o->__GetItem(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(334)
	::openfl::_Vector::IntVector tmp2 = ((::openfl::_Vector::IntVector)(tmp1));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(334)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(DrawTrianglesView_Impl__obj,get_indices,return )

::openfl::_Vector::FloatVector DrawTrianglesView_Impl__obj::get_uvtData( ::openfl::_internal::renderer::DrawCommandReader this1){
	HX_STACK_FRAME("openfl._internal.renderer._DrawCommandReader.DrawTrianglesView_Impl_","get_uvtData",0x4da9858a,"openfl._internal.renderer._DrawCommandReader.DrawTrianglesView_Impl_.get_uvtData","openfl/_internal/renderer/DrawCommandReader.hx",335,0xbbdbd1ae)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(335)
	int tmp = (this1->oPos + (int)2);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(335)
	Dynamic tmp1 = this1->buffer->o->__GetItem(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(335)
	::openfl::_Vector::FloatVector tmp2 = ((::openfl::_Vector::FloatVector)(tmp1));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(335)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(DrawTrianglesView_Impl__obj,get_uvtData,return )

Dynamic DrawTrianglesView_Impl__obj::get_culling( ::openfl::_internal::renderer::DrawCommandReader this1){
	HX_STACK_FRAME("openfl._internal.renderer._DrawCommandReader.DrawTrianglesView_Impl_","get_culling",0x7a0dc13d,"openfl._internal.renderer._DrawCommandReader.DrawTrianglesView_Impl_.get_culling","openfl/_internal/renderer/DrawCommandReader.hx",336,0xbbdbd1ae)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(336)
	int tmp = (this1->oPos + (int)3);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(336)
	Dynamic tmp1 = this1->buffer->o->__GetItem(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(336)
	Dynamic tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(336)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(DrawTrianglesView_Impl__obj,get_culling,return )


DrawTrianglesView_Impl__obj::DrawTrianglesView_Impl__obj()
{
}

bool DrawTrianglesView_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { outValue = _new_dyn(); return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_indices") ) { outValue = get_indices_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_uvtData") ) { outValue = get_uvtData_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_culling") ) { outValue = get_culling_dyn(); return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_vertices") ) { outValue = get_vertices_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DrawTrianglesView_Impl__obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DrawTrianglesView_Impl__obj::__mClass,"__mClass");
};

#endif

hx::Class DrawTrianglesView_Impl__obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("_new","\x61","\x15","\x1f","\x3f"),
	HX_HCSTRING("get_vertices","\x02","\x74","\x2f","\x1f"),
	HX_HCSTRING("get_indices","\x3e","\xa7","\x4e","\x69"),
	HX_HCSTRING("get_uvtData","\xd4","\x06","\x1e","\xad"),
	HX_HCSTRING("get_culling","\x87","\x42","\x82","\xd9"),
	::String(null()) };

void DrawTrianglesView_Impl__obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.renderer._DrawCommandReader.DrawTrianglesView_Impl_","\x24","\x26","\xf3","\xcd");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &DrawTrianglesView_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< DrawTrianglesView_Impl__obj >;
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
} // end namespace _internal
} // end namespace renderer
} // end namespace _DrawCommandReader
