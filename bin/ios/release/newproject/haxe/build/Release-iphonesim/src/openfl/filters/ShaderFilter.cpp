#include <hxcpp.h>

#ifndef INCLUDED_openfl_display_Shader
#include <openfl/display/Shader.h>
#endif
#ifndef INCLUDED_openfl_filters_BitmapFilter
#include <openfl/filters/BitmapFilter.h>
#endif
#ifndef INCLUDED_openfl_filters_ShaderFilter
#include <openfl/filters/ShaderFilter.h>
#endif
namespace openfl{
namespace filters{

Void ShaderFilter_obj::__construct(::openfl::display::Shader shader)
{
HX_STACK_FRAME("openfl.filters.ShaderFilter","new",0xe9b87900,"openfl.filters.ShaderFilter.new","openfl/filters/ShaderFilter.hx",17,0x3faaafae)
HX_STACK_THIS(this)
HX_STACK_ARG(shader,"shader")
{
	HX_STACK_LINE(19)
	super::__construct();
	HX_STACK_LINE(21)
	this->shader = shader;
}
;
	return null();
}

//ShaderFilter_obj::~ShaderFilter_obj() { }

Dynamic ShaderFilter_obj::__CreateEmpty() { return  new ShaderFilter_obj; }
hx::ObjectPtr< ShaderFilter_obj > ShaderFilter_obj::__new(::openfl::display::Shader shader)
{  hx::ObjectPtr< ShaderFilter_obj > _result_ = new ShaderFilter_obj();
	_result_->__construct(shader);
	return _result_;}

Dynamic ShaderFilter_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ShaderFilter_obj > _result_ = new ShaderFilter_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

::openfl::filters::BitmapFilter ShaderFilter_obj::clone( ){
	HX_STACK_FRAME("openfl.filters.ShaderFilter","clone",0xd2bb23fd,"openfl.filters.ShaderFilter.clone","openfl/filters/ShaderFilter.hx",26,0x3faaafae)
	HX_STACK_THIS(this)
	HX_STACK_LINE(28)
	::openfl::display::Shader tmp = this->shader;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(28)
	::openfl::filters::ShaderFilter tmp1 = ::openfl::filters::ShaderFilter_obj::__new(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(28)
	::openfl::filters::ShaderFilter filter = tmp1;		HX_STACK_VAR(filter,"filter");
	HX_STACK_LINE(29)
	int tmp2 = this->bottomExtension;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(29)
	filter->bottomExtension = tmp2;
	HX_STACK_LINE(30)
	int tmp3 = this->leftExtension;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(30)
	filter->leftExtension = tmp3;
	HX_STACK_LINE(31)
	int tmp4 = this->rightExtension;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(31)
	filter->rightExtension = tmp4;
	HX_STACK_LINE(32)
	int tmp5 = this->topExtension;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(32)
	filter->topExtension = tmp5;
	HX_STACK_LINE(33)
	::openfl::filters::ShaderFilter tmp6 = filter;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(33)
	return tmp6;
}



ShaderFilter_obj::ShaderFilter_obj()
{
}

void ShaderFilter_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ShaderFilter);
	HX_MARK_MEMBER_NAME(bottomExtension,"bottomExtension");
	HX_MARK_MEMBER_NAME(leftExtension,"leftExtension");
	HX_MARK_MEMBER_NAME(rightExtension,"rightExtension");
	HX_MARK_MEMBER_NAME(shader,"shader");
	HX_MARK_MEMBER_NAME(topExtension,"topExtension");
	HX_MARK_END_CLASS();
}

void ShaderFilter_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(bottomExtension,"bottomExtension");
	HX_VISIT_MEMBER_NAME(leftExtension,"leftExtension");
	HX_VISIT_MEMBER_NAME(rightExtension,"rightExtension");
	HX_VISIT_MEMBER_NAME(shader,"shader");
	HX_VISIT_MEMBER_NAME(topExtension,"topExtension");
}

Dynamic ShaderFilter_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"shader") ) { return shader; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"topExtension") ) { return topExtension; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"leftExtension") ) { return leftExtension; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"rightExtension") ) { return rightExtension; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"bottomExtension") ) { return bottomExtension; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ShaderFilter_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"shader") ) { shader=inValue.Cast< ::openfl::display::Shader >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"topExtension") ) { topExtension=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"leftExtension") ) { leftExtension=inValue.Cast< int >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"rightExtension") ) { rightExtension=inValue.Cast< int >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"bottomExtension") ) { bottomExtension=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ShaderFilter_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("bottomExtension","\x14","\xd7","\x79","\x1e"));
	outFields->push(HX_HCSTRING("leftExtension","\x78","\xb2","\xfb","\x5e"));
	outFields->push(HX_HCSTRING("rightExtension","\x03","\x0c","\x25","\xc4"));
	outFields->push(HX_HCSTRING("shader","\x25","\xbf","\x20","\x1d"));
	outFields->push(HX_HCSTRING("topExtension","\x2a","\x12","\xa6","\x52"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(ShaderFilter_obj,bottomExtension),HX_HCSTRING("bottomExtension","\x14","\xd7","\x79","\x1e")},
	{hx::fsInt,(int)offsetof(ShaderFilter_obj,leftExtension),HX_HCSTRING("leftExtension","\x78","\xb2","\xfb","\x5e")},
	{hx::fsInt,(int)offsetof(ShaderFilter_obj,rightExtension),HX_HCSTRING("rightExtension","\x03","\x0c","\x25","\xc4")},
	{hx::fsObject /*::openfl::display::Shader*/ ,(int)offsetof(ShaderFilter_obj,shader),HX_HCSTRING("shader","\x25","\xbf","\x20","\x1d")},
	{hx::fsInt,(int)offsetof(ShaderFilter_obj,topExtension),HX_HCSTRING("topExtension","\x2a","\x12","\xa6","\x52")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("bottomExtension","\x14","\xd7","\x79","\x1e"),
	HX_HCSTRING("leftExtension","\x78","\xb2","\xfb","\x5e"),
	HX_HCSTRING("rightExtension","\x03","\x0c","\x25","\xc4"),
	HX_HCSTRING("shader","\x25","\xbf","\x20","\x1d"),
	HX_HCSTRING("topExtension","\x2a","\x12","\xa6","\x52"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ShaderFilter_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ShaderFilter_obj::__mClass,"__mClass");
};

#endif

hx::Class ShaderFilter_obj::__mClass;

void ShaderFilter_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.filters.ShaderFilter","\x0e","\x39","\x50","\x7c");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ShaderFilter_obj >;
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
} // end namespace filters
