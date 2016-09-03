#include <hxcpp.h>

#ifndef INCLUDED_haxegon_util_Tileset
#include <haxegon/util/Tileset.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
namespace haxegon{
namespace util{

Void Tileset_obj::__construct(::String n,int w,int h)
{
HX_STACK_FRAME("haxegon.util.Tileset","new",0x4c9b38e8,"haxegon.util.Tileset.new","haxegon/util/Tileset.hx",5,0x61a7efe8)
HX_STACK_THIS(this)
HX_STACK_ARG(n,"n")
HX_STACK_ARG(w,"w")
HX_STACK_ARG(h,"h")
{
	HX_STACK_LINE(19)
	this->tiles = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(7)
	this->name = n;
	HX_STACK_LINE(8)
	this->width = w;
	HX_STACK_LINE(9)
	this->height = h;
	HX_STACK_LINE(11)
	this->animationspeed = (int)0;
	HX_STACK_LINE(12)
	this->timethisframe = (int)0;
	HX_STACK_LINE(13)
	this->currentframe = (int)0;
	HX_STACK_LINE(15)
	this->startframe = (int)0;
	HX_STACK_LINE(16)
	this->endframe = (int)-1;
}
;
	return null();
}

//Tileset_obj::~Tileset_obj() { }

Dynamic Tileset_obj::__CreateEmpty() { return  new Tileset_obj; }
hx::ObjectPtr< Tileset_obj > Tileset_obj::__new(::String n,int w,int h)
{  hx::ObjectPtr< Tileset_obj > _result_ = new Tileset_obj();
	_result_->__construct(n,w,h);
	return _result_;}

Dynamic Tileset_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Tileset_obj > _result_ = new Tileset_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _result_;}


Tileset_obj::Tileset_obj()
{
}

void Tileset_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Tileset);
	HX_MARK_MEMBER_NAME(tiles,"tiles");
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(animationspeed,"animationspeed");
	HX_MARK_MEMBER_NAME(timethisframe,"timethisframe");
	HX_MARK_MEMBER_NAME(currentframe,"currentframe");
	HX_MARK_MEMBER_NAME(startframe,"startframe");
	HX_MARK_MEMBER_NAME(endframe,"endframe");
	HX_MARK_END_CLASS();
}

void Tileset_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(tiles,"tiles");
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(animationspeed,"animationspeed");
	HX_VISIT_MEMBER_NAME(timethisframe,"timethisframe");
	HX_VISIT_MEMBER_NAME(currentframe,"currentframe");
	HX_VISIT_MEMBER_NAME(startframe,"startframe");
	HX_VISIT_MEMBER_NAME(endframe,"endframe");
}

Dynamic Tileset_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return name; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"tiles") ) { return tiles; }
		if (HX_FIELD_EQ(inName,"width") ) { return width; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { return height; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"endframe") ) { return endframe; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"startframe") ) { return startframe; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"currentframe") ) { return currentframe; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"timethisframe") ) { return timethisframe; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"animationspeed") ) { return animationspeed; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Tileset_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"tiles") ) { tiles=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"endframe") ) { endframe=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"startframe") ) { startframe=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"currentframe") ) { currentframe=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"timethisframe") ) { timethisframe=inValue.Cast< int >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"animationspeed") ) { animationspeed=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Tileset_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("tiles","\x85","\xfd","\x34","\x10"));
	outFields->push(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"));
	outFields->push(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"));
	outFields->push(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"));
	outFields->push(HX_HCSTRING("animationspeed","\x03","\xba","\x5f","\xfe"));
	outFields->push(HX_HCSTRING("timethisframe","\x62","\x67","\x8f","\x30"));
	outFields->push(HX_HCSTRING("currentframe","\x54","\xed","\x61","\xba"));
	outFields->push(HX_HCSTRING("startframe","\x8b","\xe0","\x6c","\x8f"));
	outFields->push(HX_HCSTRING("endframe","\x72","\x9a","\x53","\x71"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Tileset_obj,tiles),HX_HCSTRING("tiles","\x85","\xfd","\x34","\x10")},
	{hx::fsString,(int)offsetof(Tileset_obj,name),HX_HCSTRING("name","\x4b","\x72","\xff","\x48")},
	{hx::fsInt,(int)offsetof(Tileset_obj,width),HX_HCSTRING("width","\x06","\xb6","\x62","\xca")},
	{hx::fsInt,(int)offsetof(Tileset_obj,height),HX_HCSTRING("height","\xe7","\x07","\x4c","\x02")},
	{hx::fsInt,(int)offsetof(Tileset_obj,animationspeed),HX_HCSTRING("animationspeed","\x03","\xba","\x5f","\xfe")},
	{hx::fsInt,(int)offsetof(Tileset_obj,timethisframe),HX_HCSTRING("timethisframe","\x62","\x67","\x8f","\x30")},
	{hx::fsInt,(int)offsetof(Tileset_obj,currentframe),HX_HCSTRING("currentframe","\x54","\xed","\x61","\xba")},
	{hx::fsInt,(int)offsetof(Tileset_obj,startframe),HX_HCSTRING("startframe","\x8b","\xe0","\x6c","\x8f")},
	{hx::fsInt,(int)offsetof(Tileset_obj,endframe),HX_HCSTRING("endframe","\x72","\x9a","\x53","\x71")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("tiles","\x85","\xfd","\x34","\x10"),
	HX_HCSTRING("name","\x4b","\x72","\xff","\x48"),
	HX_HCSTRING("width","\x06","\xb6","\x62","\xca"),
	HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"),
	HX_HCSTRING("animationspeed","\x03","\xba","\x5f","\xfe"),
	HX_HCSTRING("timethisframe","\x62","\x67","\x8f","\x30"),
	HX_HCSTRING("currentframe","\x54","\xed","\x61","\xba"),
	HX_HCSTRING("startframe","\x8b","\xe0","\x6c","\x8f"),
	HX_HCSTRING("endframe","\x72","\x9a","\x53","\x71"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Tileset_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Tileset_obj::__mClass,"__mClass");
};

#endif

hx::Class Tileset_obj::__mClass;

void Tileset_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxegon.util.Tileset","\xf6","\xe4","\x0a","\x60");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Tileset_obj >;
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
