#include <hxcpp.h>

#ifndef INCLUDED_TerryOSGfx
#include <TerryOSGfx.h>
#endif
#ifndef INCLUDED_haxegon_Col
#include <haxegon/Col.h>
#endif
#ifndef INCLUDED_haxegon_Gfx
#include <haxegon/Gfx.h>
#endif

Void TerryOSGfx_obj::__construct()
{
	return null();
}

//TerryOSGfx_obj::~TerryOSGfx_obj() { }

Dynamic TerryOSGfx_obj::__CreateEmpty() { return  new TerryOSGfx_obj; }
hx::ObjectPtr< TerryOSGfx_obj > TerryOSGfx_obj::__new()
{  hx::ObjectPtr< TerryOSGfx_obj > _result_ = new TerryOSGfx_obj();
	_result_->__construct();
	return _result_;}

Dynamic TerryOSGfx_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TerryOSGfx_obj > _result_ = new TerryOSGfx_obj();
	_result_->__construct();
	return _result_;}

Array< int > TerryOSGfx_obj::colours;

int TerryOSGfx_obj::fixcol( int colour){
	HX_STACK_FRAME("TerryOSGfx","fixcol",0xd7d70dec,"TerryOSGfx.fixcol","TerryOSGfx.hx",23,0x1bb092f1)
	HX_STACK_ARG(colour,"colour")
	HX_STACK_LINE(24)
	bool tmp = (colour < (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(24)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(24)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(24)
	if ((tmp1)){
		HX_STACK_LINE(24)
		tmp2 = (colour >= (int)16);
	}
	else{
		HX_STACK_LINE(24)
		tmp2 = true;
	}
	HX_STACK_LINE(24)
	if ((tmp2)){
		HX_STACK_LINE(24)
		int tmp3 = ::haxegon::Col_obj::TRANSPARENT;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(24)
		return tmp3;
	}
	HX_STACK_LINE(25)
	int tmp3 = ::TerryOSGfx_obj::colours->__get(colour);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(25)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(TerryOSGfx_obj,fixcol,return )

Void TerryOSGfx_obj::fillbox( Float x,Float y,Float width,Float height,int colour){
{
		HX_STACK_FRAME("TerryOSGfx","fillbox",0x216f3be7,"TerryOSGfx.fillbox","TerryOSGfx.hx",28,0x1bb092f1)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_ARG(colour,"colour")
		HX_STACK_LINE(29)
		bool tmp = (colour < (int)0);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(29)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(29)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(29)
		if ((tmp1)){
			HX_STACK_LINE(29)
			tmp2 = (colour >= (int)16);
		}
		else{
			HX_STACK_LINE(29)
			tmp2 = true;
		}
		HX_STACK_LINE(29)
		int tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(29)
		if ((tmp2)){
			HX_STACK_LINE(29)
			tmp3 = ::haxegon::Col_obj::TRANSPARENT;
		}
		else{
			HX_STACK_LINE(29)
			tmp3 = ::TerryOSGfx_obj::colours->__get(colour);
		}
		HX_STACK_LINE(29)
		colour = tmp3;
		HX_STACK_LINE(31)
		Float tmp4 = x;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(31)
		Float tmp5 = y;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(31)
		Float tmp6 = width;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(31)
		Float tmp7 = height;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(31)
		int tmp8 = colour;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(31)
		::haxegon::Gfx_obj::fillbox(tmp4,tmp5,tmp6,tmp7,tmp8,null());
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(TerryOSGfx_obj,fillbox,(void))

Void TerryOSGfx_obj::fillcircle( Float x,Float y,Float radius,int colour){
{
		HX_STACK_FRAME("TerryOSGfx","fillcircle",0xb48005b4,"TerryOSGfx.fillcircle","TerryOSGfx.hx",34,0x1bb092f1)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(radius,"radius")
		HX_STACK_ARG(colour,"colour")
		HX_STACK_LINE(35)
		bool tmp = (colour < (int)0);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(35)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(35)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(35)
		if ((tmp1)){
			HX_STACK_LINE(35)
			tmp2 = (colour >= (int)16);
		}
		else{
			HX_STACK_LINE(35)
			tmp2 = true;
		}
		HX_STACK_LINE(35)
		int tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(35)
		if ((tmp2)){
			HX_STACK_LINE(35)
			tmp3 = ::haxegon::Col_obj::TRANSPARENT;
		}
		else{
			HX_STACK_LINE(35)
			tmp3 = ::TerryOSGfx_obj::colours->__get(colour);
		}
		HX_STACK_LINE(35)
		colour = tmp3;
		HX_STACK_LINE(37)
		Float tmp4 = x;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(37)
		Float tmp5 = y;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(37)
		Float tmp6 = radius;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(37)
		int tmp7 = colour;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(37)
		::haxegon::Gfx_obj::fillcircle(tmp4,tmp5,tmp6,tmp7,null());
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(TerryOSGfx_obj,fillcircle,(void))


TerryOSGfx_obj::TerryOSGfx_obj()
{
}

bool TerryOSGfx_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"fixcol") ) { outValue = fixcol_dyn(); return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"colours") ) { outValue = colours; return true;  }
		if (HX_FIELD_EQ(inName,"fillbox") ) { outValue = fillbox_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"fillcircle") ) { outValue = fillcircle_dyn(); return true;  }
	}
	return false;
}

bool TerryOSGfx_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"colours") ) { colours=ioValue.Cast< Array< int > >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*Array< int >*/ ,(void *) &TerryOSGfx_obj::colours,HX_HCSTRING("colours","\xa7","\x7a","\x68","\xef")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TerryOSGfx_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(TerryOSGfx_obj::colours,"colours");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TerryOSGfx_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(TerryOSGfx_obj::colours,"colours");
};

#endif

hx::Class TerryOSGfx_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("colours","\xa7","\x7a","\x68","\xef"),
	HX_HCSTRING("fixcol","\x8b","\xd1","\x16","\x8d"),
	HX_HCSTRING("fillbox","\x68","\xa3","\xfa","\x03"),
	HX_HCSTRING("fillcircle","\xd3","\x84","\x13","\x25"),
	::String(null()) };

void TerryOSGfx_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("TerryOSGfx","\xed","\xe1","\x9c","\x63");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &TerryOSGfx_obj::__GetStatic;
	__mClass->mSetStaticField = &TerryOSGfx_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< TerryOSGfx_obj >;
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

void TerryOSGfx_obj::__boot()
{
struct _Function_0_1{
	inline static Array< int > Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","TerryOSGfx.hx",4,0x1bb092f1)
		{
			HX_STACK_LINE(5)
			int tmp = ::haxegon::Col_obj::BLACK;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(6)
			int tmp1 = ::haxegon::Col_obj::GREY;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(7)
			int tmp2 = ::haxegon::Col_obj::WHITE;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(8)
			int tmp3 = ::haxegon::Col_obj::RED;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(9)
			int tmp4 = ::haxegon::Col_obj::PINK;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(10)
			int tmp5 = ::haxegon::Col_obj::DARKBROWN;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(11)
			int tmp6 = ::haxegon::Col_obj::BROWN;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(12)
			int tmp7 = ::haxegon::Col_obj::ORANGE;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(13)
			int tmp8 = ::haxegon::Col_obj::YELLOW;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(14)
			int tmp9 = ::haxegon::Col_obj::DARKGREEN;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(15)
			int tmp10 = ::haxegon::Col_obj::GREEN;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(16)
			int tmp11 = ::haxegon::Col_obj::LIGHTGREEN;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(17)
			int tmp12 = ::haxegon::Col_obj::NIGHTBLUE;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(18)
			int tmp13 = ::haxegon::Col_obj::DARKBLUE;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(19)
			int tmp14 = ::haxegon::Col_obj::BLUE;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(20)
			int tmp15 = ::haxegon::Col_obj::LIGHTBLUE;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(4)
			return Array_obj< int >::__new().Add(tmp).Add(tmp1).Add(tmp2).Add(tmp3).Add(tmp4).Add(tmp5).Add(tmp6).Add(tmp7).Add(tmp8).Add(tmp9).Add(tmp10).Add(tmp11).Add(tmp12).Add(tmp13).Add(tmp14).Add(tmp15);
		}
		return null();
	}
};
	colours= _Function_0_1::Block();
}

