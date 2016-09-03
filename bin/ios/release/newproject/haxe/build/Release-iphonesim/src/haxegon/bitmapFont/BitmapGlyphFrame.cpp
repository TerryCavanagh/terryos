#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_haxegon_bitmapFont_BitmapFont
#include <haxegon/bitmapFont/BitmapFont.h>
#endif
#ifndef INCLUDED_haxegon_bitmapFont_BitmapGlyphFrame
#include <haxegon/bitmapFont/BitmapGlyphFrame.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_geom_Point
#include <openfl/geom/Point.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
namespace haxegon{
namespace bitmapFont{

Void BitmapGlyphFrame_obj::__construct(::haxegon::bitmapFont::BitmapFont parent)
{
HX_STACK_FRAME("haxegon.bitmapFont.BitmapGlyphFrame","new",0x68d3ea44,"haxegon.bitmapFont.BitmapGlyphFrame.new","haxegon/bitmapFont/BitmapFont.hx",607,0x0e43809e)
HX_STACK_THIS(this)
HX_STACK_ARG(parent,"parent")
{
	HX_STACK_LINE(607)
	this->parent = parent;
}
;
	return null();
}

//BitmapGlyphFrame_obj::~BitmapGlyphFrame_obj() { }

Dynamic BitmapGlyphFrame_obj::__CreateEmpty() { return  new BitmapGlyphFrame_obj; }
hx::ObjectPtr< BitmapGlyphFrame_obj > BitmapGlyphFrame_obj::__new(::haxegon::bitmapFont::BitmapFont parent)
{  hx::ObjectPtr< BitmapGlyphFrame_obj > _result_ = new BitmapGlyphFrame_obj();
	_result_->__construct(parent);
	return _result_;}

Dynamic BitmapGlyphFrame_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< BitmapGlyphFrame_obj > _result_ = new BitmapGlyphFrame_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void BitmapGlyphFrame_obj::dispose( ){
{
		HX_STACK_FRAME("haxegon.bitmapFont.BitmapGlyphFrame","dispose",0xafa95c83,"haxegon.bitmapFont.BitmapGlyphFrame.dispose","haxegon/bitmapFont/BitmapFont.hx",611,0x0e43809e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(612)
		this->rect = null();
		HX_STACK_LINE(614)
		::openfl::display::BitmapData tmp = this->_bitmap;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(614)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(614)
		if ((tmp1)){
			HX_STACK_LINE(616)
			::openfl::display::BitmapData tmp2 = this->_bitmap;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(616)
			tmp2->dispose();
		}
		HX_STACK_LINE(619)
		this->_bitmap = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BitmapGlyphFrame_obj,dispose,(void))

::openfl::display::BitmapData BitmapGlyphFrame_obj::get_bitmap( ){
	HX_STACK_FRAME("haxegon.bitmapFont.BitmapGlyphFrame","get_bitmap",0x67262a54,"haxegon.bitmapFont.BitmapGlyphFrame.get_bitmap","haxegon/bitmapFont/BitmapFont.hx",623,0x0e43809e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(624)
	::openfl::display::BitmapData tmp = this->_bitmap;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(624)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(624)
	if ((tmp1)){
		HX_STACK_LINE(626)
		::openfl::display::BitmapData tmp2 = this->_bitmap;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(626)
		return tmp2;
	}
	HX_STACK_LINE(629)
	::openfl::geom::Rectangle tmp2 = this->rect;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(629)
	Float tmp3 = tmp2->width;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(629)
	int tmp4 = ::Math_obj::ceil(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(629)
	::openfl::geom::Rectangle tmp5 = this->rect;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(629)
	Float tmp6 = tmp5->height;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(629)
	int tmp7 = ::Math_obj::ceil(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(629)
	::openfl::display::BitmapData tmp8 = ::openfl::display::BitmapData_obj::__new(tmp4,tmp7,true,(int)0);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(629)
	this->_bitmap = tmp8;
	HX_STACK_LINE(630)
	::openfl::display::BitmapData tmp9 = this->_bitmap;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(630)
	::haxegon::bitmapFont::BitmapFont tmp10 = this->parent;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(630)
	::openfl::display::BitmapData tmp11 = tmp10->bitmap;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(630)
	::openfl::geom::Rectangle tmp12 = this->rect;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(630)
	::openfl::geom::Point tmp13 = ::openfl::geom::Point_obj::__new(null(),null());		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(630)
	tmp9->copyPixels(tmp11,tmp12,tmp13,null(),null(),null());
	HX_STACK_LINE(631)
	::openfl::display::BitmapData tmp14 = this->_bitmap;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(631)
	return tmp14;
}


HX_DEFINE_DYNAMIC_FUNC0(BitmapGlyphFrame_obj,get_bitmap,return )


BitmapGlyphFrame_obj::BitmapGlyphFrame_obj()
{
}

void BitmapGlyphFrame_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BitmapGlyphFrame);
	HX_MARK_MEMBER_NAME(parent,"parent");
	HX_MARK_MEMBER_NAME(charCode,"charCode");
	HX_MARK_MEMBER_NAME(xoffset,"xoffset");
	HX_MARK_MEMBER_NAME(yoffset,"yoffset");
	HX_MARK_MEMBER_NAME(xadvance,"xadvance");
	HX_MARK_MEMBER_NAME(rect,"rect");
	HX_MARK_MEMBER_NAME(bitmap,"bitmap");
	HX_MARK_MEMBER_NAME(_bitmap,"_bitmap");
	HX_MARK_MEMBER_NAME(tileID,"tileID");
	HX_MARK_END_CLASS();
}

void BitmapGlyphFrame_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(parent,"parent");
	HX_VISIT_MEMBER_NAME(charCode,"charCode");
	HX_VISIT_MEMBER_NAME(xoffset,"xoffset");
	HX_VISIT_MEMBER_NAME(yoffset,"yoffset");
	HX_VISIT_MEMBER_NAME(xadvance,"xadvance");
	HX_VISIT_MEMBER_NAME(rect,"rect");
	HX_VISIT_MEMBER_NAME(bitmap,"bitmap");
	HX_VISIT_MEMBER_NAME(_bitmap,"_bitmap");
	HX_VISIT_MEMBER_NAME(tileID,"tileID");
}

Dynamic BitmapGlyphFrame_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"rect") ) { return rect; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"parent") ) { return parent; }
		if (HX_FIELD_EQ(inName,"bitmap") ) { return inCallProp == hx::paccAlways ? get_bitmap() : bitmap; }
		if (HX_FIELD_EQ(inName,"tileID") ) { return tileID; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"xoffset") ) { return xoffset; }
		if (HX_FIELD_EQ(inName,"yoffset") ) { return yoffset; }
		if (HX_FIELD_EQ(inName,"_bitmap") ) { return _bitmap; }
		if (HX_FIELD_EQ(inName,"dispose") ) { return dispose_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"charCode") ) { return charCode; }
		if (HX_FIELD_EQ(inName,"xadvance") ) { return xadvance; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_bitmap") ) { return get_bitmap_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic BitmapGlyphFrame_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"rect") ) { rect=inValue.Cast< ::openfl::geom::Rectangle >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"parent") ) { parent=inValue.Cast< ::haxegon::bitmapFont::BitmapFont >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bitmap") ) { bitmap=inValue.Cast< ::openfl::display::BitmapData >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tileID") ) { tileID=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"xoffset") ) { xoffset=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"yoffset") ) { yoffset=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_bitmap") ) { _bitmap=inValue.Cast< ::openfl::display::BitmapData >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"charCode") ) { charCode=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"xadvance") ) { xadvance=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void BitmapGlyphFrame_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("parent","\x2a","\x05","\x7e","\xed"));
	outFields->push(HX_HCSTRING("charCode","\x23","\x5f","\x24","\x9c"));
	outFields->push(HX_HCSTRING("xoffset","\x0b","\x42","\x4f","\xde"));
	outFields->push(HX_HCSTRING("yoffset","\xcc","\xb8","\xe4","\x07"));
	outFields->push(HX_HCSTRING("xadvance","\x0a","\x87","\xb1","\xbe"));
	outFields->push(HX_HCSTRING("rect","\x24","\x4d","\xa7","\x4b"));
	outFields->push(HX_HCSTRING("bitmap","\xef","\x0f","\x0c","\xf1"));
	outFields->push(HX_HCSTRING("_bitmap","\x8e","\x21","\x83","\x5f"));
	outFields->push(HX_HCSTRING("tileID","\x89","\xb2","\x28","\x1e"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxegon::bitmapFont::BitmapFont*/ ,(int)offsetof(BitmapGlyphFrame_obj,parent),HX_HCSTRING("parent","\x2a","\x05","\x7e","\xed")},
	{hx::fsInt,(int)offsetof(BitmapGlyphFrame_obj,charCode),HX_HCSTRING("charCode","\x23","\x5f","\x24","\x9c")},
	{hx::fsInt,(int)offsetof(BitmapGlyphFrame_obj,xoffset),HX_HCSTRING("xoffset","\x0b","\x42","\x4f","\xde")},
	{hx::fsInt,(int)offsetof(BitmapGlyphFrame_obj,yoffset),HX_HCSTRING("yoffset","\xcc","\xb8","\xe4","\x07")},
	{hx::fsInt,(int)offsetof(BitmapGlyphFrame_obj,xadvance),HX_HCSTRING("xadvance","\x0a","\x87","\xb1","\xbe")},
	{hx::fsObject /*::openfl::geom::Rectangle*/ ,(int)offsetof(BitmapGlyphFrame_obj,rect),HX_HCSTRING("rect","\x24","\x4d","\xa7","\x4b")},
	{hx::fsObject /*::openfl::display::BitmapData*/ ,(int)offsetof(BitmapGlyphFrame_obj,bitmap),HX_HCSTRING("bitmap","\xef","\x0f","\x0c","\xf1")},
	{hx::fsObject /*::openfl::display::BitmapData*/ ,(int)offsetof(BitmapGlyphFrame_obj,_bitmap),HX_HCSTRING("_bitmap","\x8e","\x21","\x83","\x5f")},
	{hx::fsInt,(int)offsetof(BitmapGlyphFrame_obj,tileID),HX_HCSTRING("tileID","\x89","\xb2","\x28","\x1e")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("parent","\x2a","\x05","\x7e","\xed"),
	HX_HCSTRING("charCode","\x23","\x5f","\x24","\x9c"),
	HX_HCSTRING("xoffset","\x0b","\x42","\x4f","\xde"),
	HX_HCSTRING("yoffset","\xcc","\xb8","\xe4","\x07"),
	HX_HCSTRING("xadvance","\x0a","\x87","\xb1","\xbe"),
	HX_HCSTRING("rect","\x24","\x4d","\xa7","\x4b"),
	HX_HCSTRING("bitmap","\xef","\x0f","\x0c","\xf1"),
	HX_HCSTRING("_bitmap","\x8e","\x21","\x83","\x5f"),
	HX_HCSTRING("tileID","\x89","\xb2","\x28","\x1e"),
	HX_HCSTRING("dispose","\x9f","\x80","\x4c","\xbb"),
	HX_HCSTRING("get_bitmap","\xb8","\x7f","\x93","\xe1"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BitmapGlyphFrame_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BitmapGlyphFrame_obj::__mClass,"__mClass");
};

#endif

hx::Class BitmapGlyphFrame_obj::__mClass;

void BitmapGlyphFrame_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxegon.bitmapFont.BitmapGlyphFrame","\x52","\xb8","\x80","\x18");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< BitmapGlyphFrame_obj >;
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

} // end namespace haxegon
} // end namespace bitmapFont
