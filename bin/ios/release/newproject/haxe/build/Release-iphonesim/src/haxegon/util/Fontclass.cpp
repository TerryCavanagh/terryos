#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxegon_Gfx
#include <haxegon/Gfx.h>
#endif
#ifndef INCLUDED_haxegon_Text
#include <haxegon/Text.h>
#endif
#ifndef INCLUDED_haxegon_bitmapFont_BitmapFont
#include <haxegon/bitmapFont/BitmapFont.h>
#endif
#ifndef INCLUDED_haxegon_bitmapFont_BitmapTextField
#include <haxegon/bitmapFont/BitmapTextField.h>
#endif
#ifndef INCLUDED_haxegon_util_Fontclass
#include <haxegon/util/Fontclass.h>
#endif
#ifndef INCLUDED_haxegon_util_Fontfile
#include <haxegon/util/Fontfile.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
#ifndef INCLUDED_openfl_text_TextField
#include <openfl/text/TextField.h>
#endif
#ifndef INCLUDED_openfl_text_TextFormat
#include <openfl/text/TextFormat.h>
#endif
namespace haxegon{
namespace util{

Void Fontclass_obj::__construct(::String _name,Float _size)
{
HX_STACK_FRAME("haxegon.util.Fontclass","new",0xb30b26bd,"haxegon.util.Fontclass.new","haxegon/util/Fontclass.hx",11,0x11c52bb3)
HX_STACK_THIS(this)
HX_STACK_ARG(_name,"_name")
HX_STACK_ARG(_size,"_size")
{
	HX_STACK_LINE(12)
	::haxe::ds::StringMap tmp = ::haxegon::Text_obj::fontfileindex;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(12)
	::String tmp1 = _name;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(12)
	Dynamic tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(12)
	Dynamic tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(12)
	::haxegon::util::Fontfile tmp4 = ::haxegon::Text_obj::fontfile->__get(tmp3).StaticCast< ::haxegon::util::Fontfile >();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(12)
	this->type = tmp4->type;
	HX_STACK_LINE(13)
	::String tmp5 = this->type;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(13)
	bool tmp6 = (tmp5 == HX_HCSTRING("bitmap","\xef","\x0f","\x0c","\xf1"));		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(13)
	if ((tmp6)){
		HX_STACK_LINE(14)
		::String tmp7 = _name;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(14)
		Float tmp8 = _size;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(14)
		this->loadbitmapfont(tmp7,tmp8);
	}
	else{
		HX_STACK_LINE(15)
		::String tmp7 = this->type;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(15)
		bool tmp8 = (tmp7 == HX_HCSTRING("ttf","\xe6","\x6a","\x58","\x00"));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(15)
		if ((tmp8)){
			HX_STACK_LINE(16)
			::String tmp9 = _name;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(16)
			Float tmp10 = _size;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(16)
			this->loadttffont(tmp9,tmp10);
		}
	}
}
;
	return null();
}

//Fontclass_obj::~Fontclass_obj() { }

Dynamic Fontclass_obj::__CreateEmpty() { return  new Fontclass_obj; }
hx::ObjectPtr< Fontclass_obj > Fontclass_obj::__new(::String _name,Float _size)
{  hx::ObjectPtr< Fontclass_obj > _result_ = new Fontclass_obj();
	_result_->__construct(_name,_size);
	return _result_;}

Dynamic Fontclass_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Fontclass_obj > _result_ = new Fontclass_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

Void Fontclass_obj::loadbitmapfont( ::String _name,Float _size){
{
		HX_STACK_FRAME("haxegon.util.Fontclass","loadbitmapfont",0x064bd3a7,"haxegon.util.Fontclass.loadbitmapfont","haxegon/util/Fontclass.hx",20,0x11c52bb3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_name,"_name")
		HX_STACK_ARG(_size,"_size")
		HX_STACK_LINE(21)
		this->name = _name;
		HX_STACK_LINE(22)
		this->size = _size;
		HX_STACK_LINE(24)
		::haxe::ds::StringMap tmp = ::haxegon::Text_obj::fontfileindex;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(24)
		::String tmp1 = _name;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(24)
		Dynamic tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(24)
		Dynamic tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(24)
		::haxegon::util::Fontfile tmp4 = ::haxegon::Text_obj::fontfile->__get(tmp3).StaticCast< ::haxegon::util::Fontfile >();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(24)
		::haxegon::bitmapFont::BitmapFont tmp5 = tmp4->bitmapfont;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(24)
		::haxegon::bitmapFont::BitmapTextField tmp6 = ::haxegon::bitmapFont::BitmapTextField_obj::__new(tmp5,null(),null(),null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(24)
		this->tf_bitmap = tmp6;
		HX_STACK_LINE(25)
		::haxegon::bitmapFont::BitmapTextField tmp7 = this->tf_bitmap;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(25)
		tmp7->set_text(HX_HCSTRING("???","\x1f","\x05","\x30","\x00"));
		HX_STACK_LINE(26)
		::haxegon::bitmapFont::BitmapTextField tmp8 = this->tf_bitmap;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(26)
		Float tmp9 = tmp8->get_textHeight();		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(26)
		this->height = tmp9;
		HX_STACK_LINE(28)
		::haxegon::bitmapFont::BitmapTextField tmp10 = this->tf_bitmap;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(28)
		tmp10->set_background(false);
		HX_STACK_LINE(30)
		int tmp11 = ::haxegon::Gfx_obj::screenwidth;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(30)
		int tmp12 = ::haxegon::Gfx_obj::screenheight;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(30)
		::openfl::display::BitmapData tmp13 = ::openfl::display::BitmapData_obj::__new(tmp11,tmp12,true,(int)0);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(30)
		this->tfbitmap = tmp13;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Fontclass_obj,loadbitmapfont,(void))

Void Fontclass_obj::loadttffont( ::String _name,Float _size){
{
		HX_STACK_FRAME("haxegon.util.Fontclass","loadttffont",0xb7bc45ac,"haxegon.util.Fontclass.loadttffont","haxegon/util/Fontclass.hx",33,0x11c52bb3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_name,"_name")
		HX_STACK_ARG(_size,"_size")
		HX_STACK_LINE(34)
		this->name = _name;
		HX_STACK_LINE(35)
		this->size = _size;
		HX_STACK_LINE(37)
		::openfl::text::TextField tmp = ::openfl::text::TextField_obj::__new();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(37)
		this->tf_ttf = tmp;
		HX_STACK_LINE(38)
		::openfl::text::TextField tmp1 = this->tf_ttf;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(38)
		tmp1->set_embedFonts(true);
		HX_STACK_LINE(39)
		::openfl::text::TextField tmp2 = this->tf_ttf;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(39)
		::String tmp3 = _name;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(39)
		::String tmp4 = ::haxegon::Text_obj::getfonttypename(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(39)
		Float tmp5 = this->size;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(39)
		int tmp6 = ::Math_obj::round(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(39)
		::openfl::text::TextFormat tmp7 = ::openfl::text::TextFormat_obj::__new(tmp4,tmp6,(int)0,false,null(),null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(39)
		tmp2->set_defaultTextFormat(tmp7);
		HX_STACK_LINE(40)
		::openfl::text::TextField tmp8 = this->tf_ttf;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(40)
		tmp8->set_selectable(false);
		HX_STACK_LINE(41)
		::openfl::text::TextField tmp9 = this->tf_ttf;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(41)
		int tmp10 = ::haxegon::Gfx_obj::screenwidth;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(41)
		tmp9->set_width(tmp10);
		HX_STACK_LINE(42)
		::openfl::text::TextField tmp11 = this->tf_ttf;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(42)
		int tmp12 = ::haxegon::Gfx_obj::screenheight;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(42)
		tmp11->set_height(tmp12);
		HX_STACK_LINE(47)
		::openfl::text::TextField tmp13 = this->tf_ttf;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(47)
		tmp13->set_antiAliasType(((Dynamic)((int)1)));
		HX_STACK_LINE(51)
		::openfl::text::TextField tmp14 = this->tf_ttf;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(51)
		tmp14->set_text(HX_HCSTRING("???","\x1f","\x05","\x30","\x00"));
		HX_STACK_LINE(52)
		int tmp15 = ::haxegon::Gfx_obj::screenwidth;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(52)
		int tmp16 = ::haxegon::Gfx_obj::screenheight;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(52)
		::openfl::display::BitmapData tmp17 = ::openfl::display::BitmapData_obj::__new(tmp15,tmp16,true,(int)0);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(52)
		this->tfbitmap = tmp17;
		HX_STACK_LINE(53)
		::openfl::text::TextField tmp18 = this->tf_ttf;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(53)
		int tmp19 = ::haxegon::Gfx_obj::screenheight;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(53)
		tmp18->set_height(tmp19);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Fontclass_obj,loadttffont,(void))

Void Fontclass_obj::clearbitmap( ){
{
		HX_STACK_FRAME("haxegon.util.Fontclass","clearbitmap",0xcd152499,"haxegon.util.Fontclass.clearbitmap","haxegon/util/Fontclass.hx",56,0x11c52bb3)
		HX_STACK_THIS(this)
		HX_STACK_LINE(57)
		::openfl::display::BitmapData tmp = this->tfbitmap;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(57)
		::openfl::display::BitmapData tmp1 = this->tfbitmap;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(57)
		::openfl::geom::Rectangle tmp2 = tmp1->rect;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(57)
		tmp->fillRect(tmp2,(int)0);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Fontclass_obj,clearbitmap,(void))


Fontclass_obj::Fontclass_obj()
{
}

void Fontclass_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Fontclass);
	HX_MARK_MEMBER_NAME(tf_bitmap,"tf_bitmap");
	HX_MARK_MEMBER_NAME(tf_ttf,"tf_ttf");
	HX_MARK_MEMBER_NAME(tfbitmap,"tfbitmap");
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_MEMBER_NAME(size,"size");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_END_CLASS();
}

void Fontclass_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(tf_bitmap,"tf_bitmap");
	HX_VISIT_MEMBER_NAME(tf_ttf,"tf_ttf");
	HX_VISIT_MEMBER_NAME(tfbitmap,"tfbitmap");
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(type,"type");
	HX_VISIT_MEMBER_NAME(size,"size");
	HX_VISIT_MEMBER_NAME(height,"height");
}

Dynamic Fontclass_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return name; }
		if (HX_FIELD_EQ(inName,"type") ) { return type; }
		if (HX_FIELD_EQ(inName,"size") ) { return size; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"tf_ttf") ) { return tf_ttf; }
		if (HX_FIELD_EQ(inName,"height") ) { return height; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"tfbitmap") ) { return tfbitmap; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"tf_bitmap") ) { return tf_bitmap; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"loadttffont") ) { return loadttffont_dyn(); }
		if (HX_FIELD_EQ(inName,"clearbitmap") ) { return clearbitmap_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"loadbitmapfont") ) { return loadbitmapfont_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Fontclass_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"size") ) { size=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"tf_ttf") ) { tf_ttf=inValue.Cast< ::openfl::text::TextField >(); return inValue; }
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"tfbitmap") ) { tfbitmap=inValue.Cast< ::openfl::display::BitmapData >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"tf_bitmap") ) { tf_bitmap=inValue.Cast< ::haxegon::bitmapFont::BitmapTextField >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Fontclass_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("tf_bitmap","\x5c","\x2e","\x00","\xbf"));
	outFields->push(HX_HCSTRING("tf_ttf","\x59","\xb6","\x68","\x5b"));
	outFields->push(HX_HCSTRING("tfbitmap","\xe1","\x16","\x75","\x6d"));
	outFields->push(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"));
	outFields->push(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"));
	outFields->push(HX_HCSTRING("size","\xc1","\xa0","\x53","\x4c"));
	outFields->push(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxegon::bitmapFont::BitmapTextField*/ ,(int)offsetof(Fontclass_obj,tf_bitmap),HX_HCSTRING("tf_bitmap","\x5c","\x2e","\x00","\xbf")},
	{hx::fsObject /*::openfl::text::TextField*/ ,(int)offsetof(Fontclass_obj,tf_ttf),HX_HCSTRING("tf_ttf","\x59","\xb6","\x68","\x5b")},
	{hx::fsObject /*::openfl::display::BitmapData*/ ,(int)offsetof(Fontclass_obj,tfbitmap),HX_HCSTRING("tfbitmap","\xe1","\x16","\x75","\x6d")},
	{hx::fsString,(int)offsetof(Fontclass_obj,name),HX_HCSTRING("name","\x4b","\x72","\xff","\x48")},
	{hx::fsString,(int)offsetof(Fontclass_obj,type),HX_HCSTRING("type","\xba","\xf2","\x08","\x4d")},
	{hx::fsFloat,(int)offsetof(Fontclass_obj,size),HX_HCSTRING("size","\xc1","\xa0","\x53","\x4c")},
	{hx::fsFloat,(int)offsetof(Fontclass_obj,height),HX_HCSTRING("height","\xe7","\x07","\x4c","\x02")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("loadbitmapfont","\xe4","\x96","\x44","\xea"),
	HX_HCSTRING("loadttffont","\x4f","\xca","\x0b","\x3b"),
	HX_HCSTRING("clearbitmap","\x3c","\xa9","\x64","\x50"),
	HX_HCSTRING("tf_bitmap","\x5c","\x2e","\x00","\xbf"),
	HX_HCSTRING("tf_ttf","\x59","\xb6","\x68","\x5b"),
	HX_HCSTRING("tfbitmap","\xe1","\x16","\x75","\x6d"),
	HX_HCSTRING("name","\x4b","\x72","\xff","\x48"),
	HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"),
	HX_HCSTRING("size","\xc1","\xa0","\x53","\x4c"),
	HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Fontclass_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Fontclass_obj::__mClass,"__mClass");
};

#endif

hx::Class Fontclass_obj::__mClass;

void Fontclass_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxegon.util.Fontclass","\x4b","\x04","\xf0","\x92");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Fontclass_obj >;
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
} // end namespace util
