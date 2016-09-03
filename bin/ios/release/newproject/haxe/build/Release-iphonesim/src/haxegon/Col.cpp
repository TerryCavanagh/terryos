#include <hxcpp.h>

#ifndef INCLUDED_haxegon_Col
#include <haxegon/Col.h>
#endif
namespace haxegon{

Void Col_obj::__construct()
{
	return null();
}

//Col_obj::~Col_obj() { }

Dynamic Col_obj::__CreateEmpty() { return  new Col_obj; }
hx::ObjectPtr< Col_obj > Col_obj::__new()
{  hx::ObjectPtr< Col_obj > _result_ = new Col_obj();
	_result_->__construct();
	return _result_;}

Dynamic Col_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Col_obj > _result_ = new Col_obj();
	_result_->__construct();
	return _result_;}

int Col_obj::BLACK;

int Col_obj::GREY;

int Col_obj::GRAY;

int Col_obj::WHITE;

int Col_obj::RED;

int Col_obj::PINK;

int Col_obj::DARKBROWN;

int Col_obj::BROWN;

int Col_obj::ORANGE;

int Col_obj::YELLOW;

int Col_obj::DARKGREEN;

int Col_obj::GREEN;

int Col_obj::LIGHTGREEN;

int Col_obj::NIGHTBLUE;

int Col_obj::DARKBLUE;

int Col_obj::BLUE;

int Col_obj::LIGHTBLUE;

int Col_obj::MAGENTA;

int Col_obj::TRANSPARENT;


Col_obj::Col_obj()
{
}

bool Col_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"RED") ) { outValue = RED; return true;  }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"GREY") ) { outValue = GREY; return true;  }
		if (HX_FIELD_EQ(inName,"GRAY") ) { outValue = GRAY; return true;  }
		if (HX_FIELD_EQ(inName,"PINK") ) { outValue = PINK; return true;  }
		if (HX_FIELD_EQ(inName,"BLUE") ) { outValue = BLUE; return true;  }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"BLACK") ) { outValue = BLACK; return true;  }
		if (HX_FIELD_EQ(inName,"WHITE") ) { outValue = WHITE; return true;  }
		if (HX_FIELD_EQ(inName,"BROWN") ) { outValue = BROWN; return true;  }
		if (HX_FIELD_EQ(inName,"GREEN") ) { outValue = GREEN; return true;  }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"ORANGE") ) { outValue = ORANGE; return true;  }
		if (HX_FIELD_EQ(inName,"YELLOW") ) { outValue = YELLOW; return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"MAGENTA") ) { outValue = MAGENTA; return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"DARKBLUE") ) { outValue = DARKBLUE; return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"DARKBROWN") ) { outValue = DARKBROWN; return true;  }
		if (HX_FIELD_EQ(inName,"DARKGREEN") ) { outValue = DARKGREEN; return true;  }
		if (HX_FIELD_EQ(inName,"NIGHTBLUE") ) { outValue = NIGHTBLUE; return true;  }
		if (HX_FIELD_EQ(inName,"LIGHTBLUE") ) { outValue = LIGHTBLUE; return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"LIGHTGREEN") ) { outValue = LIGHTGREEN; return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"TRANSPARENT") ) { outValue = TRANSPARENT; return true;  }
	}
	return false;
}

bool Col_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"RED") ) { RED=ioValue.Cast< int >(); return true; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"GREY") ) { GREY=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"GRAY") ) { GRAY=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"PINK") ) { PINK=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"BLUE") ) { BLUE=ioValue.Cast< int >(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"BLACK") ) { BLACK=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"WHITE") ) { WHITE=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"BROWN") ) { BROWN=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"GREEN") ) { GREEN=ioValue.Cast< int >(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"ORANGE") ) { ORANGE=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"YELLOW") ) { YELLOW=ioValue.Cast< int >(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"MAGENTA") ) { MAGENTA=ioValue.Cast< int >(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"DARKBLUE") ) { DARKBLUE=ioValue.Cast< int >(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"DARKBROWN") ) { DARKBROWN=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"DARKGREEN") ) { DARKGREEN=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"NIGHTBLUE") ) { NIGHTBLUE=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"LIGHTBLUE") ) { LIGHTBLUE=ioValue.Cast< int >(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"LIGHTGREEN") ) { LIGHTGREEN=ioValue.Cast< int >(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"TRANSPARENT") ) { TRANSPARENT=ioValue.Cast< int >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &Col_obj::BLACK,HX_HCSTRING("BLACK","\x9f","\x0d","\xe0","\x32")},
	{hx::fsInt,(void *) &Col_obj::GREY,HX_HCSTRING("GREY","\x5f","\x9b","\x2c","\x2f")},
	{hx::fsInt,(void *) &Col_obj::GRAY,HX_HCSTRING("GRAY","\xe3","\x97","\x2c","\x2f")},
	{hx::fsInt,(void *) &Col_obj::WHITE,HX_HCSTRING("WHITE","\x89","\x82","\xab","\x47")},
	{hx::fsInt,(void *) &Col_obj::RED,HX_HCSTRING("RED","\x31","\x75","\x3e","\x00")},
	{hx::fsInt,(void *) &Col_obj::PINK,HX_HCSTRING("PINK","\x76","\xba","\x18","\x35")},
	{hx::fsInt,(void *) &Col_obj::DARKBROWN,HX_HCSTRING("DARKBROWN","\x20","\xfe","\x74","\x13")},
	{hx::fsInt,(void *) &Col_obj::BROWN,HX_HCSTRING("BROWN","\x56","\x06","\xe2","\x36")},
	{hx::fsInt,(void *) &Col_obj::ORANGE,HX_HCSTRING("ORANGE","\xee","\x5e","\x3f","\xf8")},
	{hx::fsInt,(void *) &Col_obj::YELLOW,HX_HCSTRING("YELLOW","\x74","\x4b","\xdf","\x82")},
	{hx::fsInt,(void *) &Col_obj::DARKGREEN,HX_HCSTRING("DARKGREEN","\x6d","\x3e","\x6e","\xf4")},
	{hx::fsInt,(void *) &Col_obj::GREEN,HX_HCSTRING("GREEN","\xa3","\x46","\xdb","\x17")},
	{hx::fsInt,(void *) &Col_obj::LIGHTGREEN,HX_HCSTRING("LIGHTGREEN","\x2d","\x2a","\xcf","\x79")},
	{hx::fsInt,(void *) &Col_obj::NIGHTBLUE,HX_HCSTRING("NIGHTBLUE","\x52","\x38","\x99","\x70")},
	{hx::fsInt,(void *) &Col_obj::DARKBLUE,HX_HCSTRING("DARKBLUE","\x10","\x9a","\x84","\xe4")},
	{hx::fsInt,(void *) &Col_obj::BLUE,HX_HCSTRING("BLUE","\x9a","\x0a","\xda","\x2b")},
	{hx::fsInt,(void *) &Col_obj::LIGHTBLUE,HX_HCSTRING("LIGHTBLUE","\x50","\x66","\xb6","\xca")},
	{hx::fsInt,(void *) &Col_obj::MAGENTA,HX_HCSTRING("MAGENTA","\x09","\x8e","\x71","\x8e")},
	{hx::fsInt,(void *) &Col_obj::TRANSPARENT,HX_HCSTRING("TRANSPARENT","\x32","\x37","\xf6","\xf8")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Col_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Col_obj::BLACK,"BLACK");
	HX_MARK_MEMBER_NAME(Col_obj::GREY,"GREY");
	HX_MARK_MEMBER_NAME(Col_obj::GRAY,"GRAY");
	HX_MARK_MEMBER_NAME(Col_obj::WHITE,"WHITE");
	HX_MARK_MEMBER_NAME(Col_obj::RED,"RED");
	HX_MARK_MEMBER_NAME(Col_obj::PINK,"PINK");
	HX_MARK_MEMBER_NAME(Col_obj::DARKBROWN,"DARKBROWN");
	HX_MARK_MEMBER_NAME(Col_obj::BROWN,"BROWN");
	HX_MARK_MEMBER_NAME(Col_obj::ORANGE,"ORANGE");
	HX_MARK_MEMBER_NAME(Col_obj::YELLOW,"YELLOW");
	HX_MARK_MEMBER_NAME(Col_obj::DARKGREEN,"DARKGREEN");
	HX_MARK_MEMBER_NAME(Col_obj::GREEN,"GREEN");
	HX_MARK_MEMBER_NAME(Col_obj::LIGHTGREEN,"LIGHTGREEN");
	HX_MARK_MEMBER_NAME(Col_obj::NIGHTBLUE,"NIGHTBLUE");
	HX_MARK_MEMBER_NAME(Col_obj::DARKBLUE,"DARKBLUE");
	HX_MARK_MEMBER_NAME(Col_obj::BLUE,"BLUE");
	HX_MARK_MEMBER_NAME(Col_obj::LIGHTBLUE,"LIGHTBLUE");
	HX_MARK_MEMBER_NAME(Col_obj::MAGENTA,"MAGENTA");
	HX_MARK_MEMBER_NAME(Col_obj::TRANSPARENT,"TRANSPARENT");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Col_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Col_obj::BLACK,"BLACK");
	HX_VISIT_MEMBER_NAME(Col_obj::GREY,"GREY");
	HX_VISIT_MEMBER_NAME(Col_obj::GRAY,"GRAY");
	HX_VISIT_MEMBER_NAME(Col_obj::WHITE,"WHITE");
	HX_VISIT_MEMBER_NAME(Col_obj::RED,"RED");
	HX_VISIT_MEMBER_NAME(Col_obj::PINK,"PINK");
	HX_VISIT_MEMBER_NAME(Col_obj::DARKBROWN,"DARKBROWN");
	HX_VISIT_MEMBER_NAME(Col_obj::BROWN,"BROWN");
	HX_VISIT_MEMBER_NAME(Col_obj::ORANGE,"ORANGE");
	HX_VISIT_MEMBER_NAME(Col_obj::YELLOW,"YELLOW");
	HX_VISIT_MEMBER_NAME(Col_obj::DARKGREEN,"DARKGREEN");
	HX_VISIT_MEMBER_NAME(Col_obj::GREEN,"GREEN");
	HX_VISIT_MEMBER_NAME(Col_obj::LIGHTGREEN,"LIGHTGREEN");
	HX_VISIT_MEMBER_NAME(Col_obj::NIGHTBLUE,"NIGHTBLUE");
	HX_VISIT_MEMBER_NAME(Col_obj::DARKBLUE,"DARKBLUE");
	HX_VISIT_MEMBER_NAME(Col_obj::BLUE,"BLUE");
	HX_VISIT_MEMBER_NAME(Col_obj::LIGHTBLUE,"LIGHTBLUE");
	HX_VISIT_MEMBER_NAME(Col_obj::MAGENTA,"MAGENTA");
	HX_VISIT_MEMBER_NAME(Col_obj::TRANSPARENT,"TRANSPARENT");
};

#endif

hx::Class Col_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("BLACK","\x9f","\x0d","\xe0","\x32"),
	HX_HCSTRING("GREY","\x5f","\x9b","\x2c","\x2f"),
	HX_HCSTRING("GRAY","\xe3","\x97","\x2c","\x2f"),
	HX_HCSTRING("WHITE","\x89","\x82","\xab","\x47"),
	HX_HCSTRING("RED","\x31","\x75","\x3e","\x00"),
	HX_HCSTRING("PINK","\x76","\xba","\x18","\x35"),
	HX_HCSTRING("DARKBROWN","\x20","\xfe","\x74","\x13"),
	HX_HCSTRING("BROWN","\x56","\x06","\xe2","\x36"),
	HX_HCSTRING("ORANGE","\xee","\x5e","\x3f","\xf8"),
	HX_HCSTRING("YELLOW","\x74","\x4b","\xdf","\x82"),
	HX_HCSTRING("DARKGREEN","\x6d","\x3e","\x6e","\xf4"),
	HX_HCSTRING("GREEN","\xa3","\x46","\xdb","\x17"),
	HX_HCSTRING("LIGHTGREEN","\x2d","\x2a","\xcf","\x79"),
	HX_HCSTRING("NIGHTBLUE","\x52","\x38","\x99","\x70"),
	HX_HCSTRING("DARKBLUE","\x10","\x9a","\x84","\xe4"),
	HX_HCSTRING("BLUE","\x9a","\x0a","\xda","\x2b"),
	HX_HCSTRING("LIGHTBLUE","\x50","\x66","\xb6","\xca"),
	HX_HCSTRING("MAGENTA","\x09","\x8e","\x71","\x8e"),
	HX_HCSTRING("TRANSPARENT","\x32","\x37","\xf6","\xf8"),
	::String(null()) };

void Col_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxegon.Col","\x92","\xe9","\x11","\x3a");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Col_obj::__GetStatic;
	__mClass->mSetStaticField = &Col_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Col_obj >;
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

void Col_obj::__boot()
{
	BLACK= (int)0;
	GREY= (int)10329501;
	GRAY= (int)10329501;
	WHITE= (int)16777215;
	RED= (int)12461619;
	PINK= (int)14708619;
	DARKBROWN= (int)4799531;
	BROWN= (int)10773538;
	ORANGE= (int)15436081;
	YELLOW= (int)16245355;
	DARKGREEN= (int)3098702;
	GREEN= (int)4491546;
	LIGHTGREEN= (int)10735143;
	NIGHTBLUE= (int)1779250;
	DARKBLUE= (int)22404;
	BLUE= (int)3252978;
	LIGHTBLUE= (int)11721967;
	MAGENTA= (int)16711935;
	TRANSPARENT= (int)1;
}

} // end namespace haxegon
