#include <hxcpp.h>

#ifndef INCLUDED_haxegon_bitmapFont_BitmapGlyph
#include <haxegon/bitmapFont/BitmapGlyph.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
namespace haxegon{
namespace bitmapFont{

Void BitmapGlyph_obj::__construct(int charCode,::openfl::display::BitmapData bmd,hx::Null< int >  __o_offsetX,hx::Null< int >  __o_offsetY,hx::Null< int >  __o_xAdvance)
{
HX_STACK_FRAME("haxegon.bitmapFont.BitmapGlyph","new",0xd017404d,"haxegon.bitmapFont.BitmapGlyph.new","haxegon/bitmapFont/BitmapFont.hx",736,0x0e43809e)
HX_STACK_THIS(this)
HX_STACK_ARG(charCode,"charCode")
HX_STACK_ARG(bmd,"bmd")
HX_STACK_ARG(__o_offsetX,"offsetX")
HX_STACK_ARG(__o_offsetY,"offsetY")
HX_STACK_ARG(__o_xAdvance,"xAdvance")
int offsetX = __o_offsetX.Default(0);
int offsetY = __o_offsetY.Default(0);
int xAdvance = __o_xAdvance.Default(0);
{
	HX_STACK_LINE(746)
	this->xAdvance = (int)0;
	HX_STACK_LINE(744)
	this->offsetY = (int)0;
	HX_STACK_LINE(742)
	this->offsetX = (int)0;
	HX_STACK_LINE(752)
	this->charCode = charCode;
	HX_STACK_LINE(753)
	this->bitmap = bmd;
	HX_STACK_LINE(754)
	this->offsetX = offsetX;
	HX_STACK_LINE(755)
	this->offsetY = offsetY;
	HX_STACK_LINE(756)
	this->xAdvance = xAdvance;
	HX_STACK_LINE(757)
	this->rect = bmd->rect;
}
;
	return null();
}

//BitmapGlyph_obj::~BitmapGlyph_obj() { }

Dynamic BitmapGlyph_obj::__CreateEmpty() { return  new BitmapGlyph_obj; }
hx::ObjectPtr< BitmapGlyph_obj > BitmapGlyph_obj::__new(int charCode,::openfl::display::BitmapData bmd,hx::Null< int >  __o_offsetX,hx::Null< int >  __o_offsetY,hx::Null< int >  __o_xAdvance)
{  hx::ObjectPtr< BitmapGlyph_obj > _result_ = new BitmapGlyph_obj();
	_result_->__construct(charCode,bmd,__o_offsetX,__o_offsetY,__o_xAdvance);
	return _result_;}

Dynamic BitmapGlyph_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< BitmapGlyph_obj > _result_ = new BitmapGlyph_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return _result_;}

Void BitmapGlyph_obj::dispose( ){
{
		HX_STACK_FRAME("haxegon.bitmapFont.BitmapGlyph","dispose",0x18eaeb0c,"haxegon.bitmapFont.BitmapGlyph.dispose","haxegon/bitmapFont/BitmapFont.hx",761,0x0e43809e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(762)
		::openfl::display::BitmapData tmp = this->bitmap;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(762)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(762)
		if ((tmp1)){
			HX_STACK_LINE(764)
			::openfl::display::BitmapData tmp2 = this->bitmap;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(764)
			tmp2->dispose();
		}
		HX_STACK_LINE(767)
		this->bitmap = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BitmapGlyph_obj,dispose,(void))


BitmapGlyph_obj::BitmapGlyph_obj()
{
}

void BitmapGlyph_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BitmapGlyph);
	HX_MARK_MEMBER_NAME(charCode,"charCode");
	HX_MARK_MEMBER_NAME(bitmap,"bitmap");
	HX_MARK_MEMBER_NAME(offsetX,"offsetX");
	HX_MARK_MEMBER_NAME(offsetY,"offsetY");
	HX_MARK_MEMBER_NAME(xAdvance,"xAdvance");
	HX_MARK_MEMBER_NAME(rect,"rect");
	HX_MARK_END_CLASS();
}

void BitmapGlyph_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(charCode,"charCode");
	HX_VISIT_MEMBER_NAME(bitmap,"bitmap");
	HX_VISIT_MEMBER_NAME(offsetX,"offsetX");
	HX_VISIT_MEMBER_NAME(offsetY,"offsetY");
	HX_VISIT_MEMBER_NAME(xAdvance,"xAdvance");
	HX_VISIT_MEMBER_NAME(rect,"rect");
}

Dynamic BitmapGlyph_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"rect") ) { return rect; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"bitmap") ) { return bitmap; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"offsetX") ) { return offsetX; }
		if (HX_FIELD_EQ(inName,"offsetY") ) { return offsetY; }
		if (HX_FIELD_EQ(inName,"dispose") ) { return dispose_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"charCode") ) { return charCode; }
		if (HX_FIELD_EQ(inName,"xAdvance") ) { return xAdvance; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic BitmapGlyph_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"rect") ) { rect=inValue.Cast< ::openfl::geom::Rectangle >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"bitmap") ) { bitmap=inValue.Cast< ::openfl::display::BitmapData >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"offsetX") ) { offsetX=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"offsetY") ) { offsetY=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"charCode") ) { charCode=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"xAdvance") ) { xAdvance=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void BitmapGlyph_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("charCode","\x23","\x5f","\x24","\x9c"));
	outFields->push(HX_HCSTRING("bitmap","\xef","\x0f","\x0c","\xf1"));
	outFields->push(HX_HCSTRING("offsetX","\x65","\x09","\x65","\xd7"));
	outFields->push(HX_HCSTRING("offsetY","\x66","\x09","\x65","\xd7"));
	outFields->push(HX_HCSTRING("xAdvance","\xea","\xae","\x02","\x8c"));
	outFields->push(HX_HCSTRING("rect","\x24","\x4d","\xa7","\x4b"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(BitmapGlyph_obj,charCode),HX_HCSTRING("charCode","\x23","\x5f","\x24","\x9c")},
	{hx::fsObject /*::openfl::display::BitmapData*/ ,(int)offsetof(BitmapGlyph_obj,bitmap),HX_HCSTRING("bitmap","\xef","\x0f","\x0c","\xf1")},
	{hx::fsInt,(int)offsetof(BitmapGlyph_obj,offsetX),HX_HCSTRING("offsetX","\x65","\x09","\x65","\xd7")},
	{hx::fsInt,(int)offsetof(BitmapGlyph_obj,offsetY),HX_HCSTRING("offsetY","\x66","\x09","\x65","\xd7")},
	{hx::fsInt,(int)offsetof(BitmapGlyph_obj,xAdvance),HX_HCSTRING("xAdvance","\xea","\xae","\x02","\x8c")},
	{hx::fsObject /*::openfl::geom::Rectangle*/ ,(int)offsetof(BitmapGlyph_obj,rect),HX_HCSTRING("rect","\x24","\x4d","\xa7","\x4b")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("charCode","\x23","\x5f","\x24","\x9c"),
	HX_HCSTRING("bitmap","\xef","\x0f","\x0c","\xf1"),
	HX_HCSTRING("offsetX","\x65","\x09","\x65","\xd7"),
	HX_HCSTRING("offsetY","\x66","\x09","\x65","\xd7"),
	HX_HCSTRING("xAdvance","\xea","\xae","\x02","\x8c"),
	HX_HCSTRING("rect","\x24","\x4d","\xa7","\x4b"),
	HX_HCSTRING("dispose","\x9f","\x80","\x4c","\xbb"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BitmapGlyph_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BitmapGlyph_obj::__mClass,"__mClass");
};

#endif

hx::Class BitmapGlyph_obj::__mClass;

void BitmapGlyph_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxegon.bitmapFont.BitmapGlyph","\xdb","\x15","\x6c","\x88");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< BitmapGlyph_obj >;
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
