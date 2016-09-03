#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_cairo_CairoGlyph
#include <lime/graphics/cairo/CairoGlyph.h>
#endif
namespace lime{
namespace graphics{
namespace cairo{

Void CairoGlyph_obj::__construct(int index,hx::Null< Float >  __o_x,hx::Null< Float >  __o_y)
{
HX_STACK_FRAME("lime.graphics.cairo.CairoGlyph","new",0x55c88ba6,"lime.graphics.cairo.CairoGlyph.new","lime/graphics/cairo/CairoGlyph.hx",12,0x7c7a7209)
HX_STACK_THIS(this)
HX_STACK_ARG(index,"index")
HX_STACK_ARG(__o_x,"x")
HX_STACK_ARG(__o_y,"y")
Float x = __o_x.Default(0);
Float y = __o_y.Default(0);
{
	HX_STACK_LINE(14)
	this->index = index;
	HX_STACK_LINE(15)
	this->x = x;
	HX_STACK_LINE(16)
	this->y = y;
}
;
	return null();
}

//CairoGlyph_obj::~CairoGlyph_obj() { }

Dynamic CairoGlyph_obj::__CreateEmpty() { return  new CairoGlyph_obj; }
hx::ObjectPtr< CairoGlyph_obj > CairoGlyph_obj::__new(int index,hx::Null< Float >  __o_x,hx::Null< Float >  __o_y)
{  hx::ObjectPtr< CairoGlyph_obj > _result_ = new CairoGlyph_obj();
	_result_->__construct(index,__o_x,__o_y);
	return _result_;}

Dynamic CairoGlyph_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CairoGlyph_obj > _result_ = new CairoGlyph_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _result_;}


CairoGlyph_obj::CairoGlyph_obj()
{
}

Dynamic CairoGlyph_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return x; }
		if (HX_FIELD_EQ(inName,"y") ) { return y; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"index") ) { return index; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic CairoGlyph_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< Float >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"index") ) { index=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void CairoGlyph_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("index","\x12","\x9b","\x14","\xbe"));
	outFields->push(HX_HCSTRING("x","\x78","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("y","\x79","\x00","\x00","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(CairoGlyph_obj,index),HX_HCSTRING("index","\x12","\x9b","\x14","\xbe")},
	{hx::fsFloat,(int)offsetof(CairoGlyph_obj,x),HX_HCSTRING("x","\x78","\x00","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(CairoGlyph_obj,y),HX_HCSTRING("y","\x79","\x00","\x00","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("index","\x12","\x9b","\x14","\xbe"),
	HX_HCSTRING("x","\x78","\x00","\x00","\x00"),
	HX_HCSTRING("y","\x79","\x00","\x00","\x00"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CairoGlyph_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CairoGlyph_obj::__mClass,"__mClass");
};

#endif

hx::Class CairoGlyph_obj::__mClass;

void CairoGlyph_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.graphics.cairo.CairoGlyph","\xb4","\x80","\xac","\x82");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< CairoGlyph_obj >;
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

} // end namespace lime
} // end namespace graphics
} // end namespace cairo
