#include <hxcpp.h>

#ifndef INCLUDED_haxegon_Data
#include <haxegon/Data.h>
#endif
#ifndef INCLUDED_openfl_Assets
#include <openfl/Assets.h>
#endif
namespace haxegon{

Void Data_obj::__construct()
{
	return null();
}

//Data_obj::~Data_obj() { }

Dynamic Data_obj::__CreateEmpty() { return  new Data_obj; }
hx::ObjectPtr< Data_obj > Data_obj::__new()
{  hx::ObjectPtr< Data_obj > _result_ = new Data_obj();
	_result_->__construct();
	return _result_;}

Dynamic Data_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Data_obj > _result_ = new Data_obj();
	_result_->__construct();
	return _result_;}

int Data_obj::width;

int Data_obj::height;

Array< ::String > Data_obj::loadtext( ::String textfile){
	HX_STACK_FRAME("haxegon.Data","loadtext",0x125ce869,"haxegon.Data.loadtext","haxegon/Data.hx",22,0x29798f45)
	HX_STACK_ARG(textfile,"textfile")
	HX_STACK_LINE(23)
	::String tmp = (HX_HCSTRING("data/apps/","\x58","\xd2","\x0e","\xa6") + textfile);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(23)
	::String tmp1 = (tmp + HX_HCSTRING(".txt","\x02","\x3f","\xc0","\x1e"));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(23)
	::String tmp2 = ::openfl::Assets_obj::getText(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(23)
	::haxegon::Data_obj::tempstring = tmp2;
	HX_STACK_LINE(24)
	::String tmp3 = ::haxegon::Data_obj::tempstring;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(24)
	bool tmp4 = (tmp3 == null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(24)
	if ((tmp4)){
		HX_STACK_LINE(24)
		::haxegon::Data_obj::tempstring = HX_HCSTRING("file not found","\xd1","\x34","\x2b","\xe3");
	}
	HX_STACK_LINE(25)
	::String tmp5 = ::haxegon::Data_obj::tempstring;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(25)
	::String tmp6 = ::haxegon::Data_obj::replacechar(tmp5,HX_HCSTRING("\r","\x0d","\x00","\x00","\x00"),HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(25)
	::haxegon::Data_obj::tempstring = tmp6;
	HX_STACK_LINE(27)
	::String tmp7 = ::haxegon::Data_obj::tempstring;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(27)
	return tmp7.split(HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Data_obj,loadtext,return )

::String Data_obj::mid( ::String currentstring,hx::Null< int >  __o_start,hx::Null< int >  __o_length){
int start = __o_start.Default(0);
int length = __o_length.Default(1);
	HX_STACK_FRAME("haxegon.Data","mid",0x4df622b2,"haxegon.Data.mid","haxegon/Data.hx",97,0x29798f45)
	HX_STACK_ARG(currentstring,"currentstring")
	HX_STACK_ARG(start,"start")
	HX_STACK_ARG(length,"length")
{
		HX_STACK_LINE(98)
		int tmp = start;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(98)
		int tmp1 = length;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(98)
		::String tmp2 = currentstring.substr(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(98)
		return tmp2;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Data_obj,mid,return )

::String Data_obj::replacechar( ::String currentstring,::String __o_ch,::String __o_ch2){
::String ch = __o_ch.Default(HX_HCSTRING("|","\x7c","\x00","\x00","\x00"));
::String ch2 = __o_ch2.Default(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
	HX_STACK_FRAME("haxegon.Data","replacechar",0x37b91c34,"haxegon.Data.replacechar","haxegon/Data.hx",101,0x29798f45)
	HX_STACK_ARG(currentstring,"currentstring")
	HX_STACK_ARG(ch,"ch")
	HX_STACK_ARG(ch2,"ch2")
{
		HX_STACK_LINE(102)
		::String fixedstring = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(fixedstring,"fixedstring");
		HX_STACK_LINE(103)
		{
			HX_STACK_LINE(103)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(103)
			int _g = currentstring.length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(103)
			while((true)){
				HX_STACK_LINE(103)
				bool tmp = (_g1 < _g);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(103)
				bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(103)
				if ((tmp1)){
					HX_STACK_LINE(103)
					break;
				}
				HX_STACK_LINE(103)
				int tmp2 = (_g1)++;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(103)
				int i = tmp2;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(104)
				::String tmp3 = currentstring;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(104)
				int tmp4 = i;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(104)
				::String tmp5 = ::haxegon::Data_obj::mid(tmp3,tmp4,null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(104)
				::String tmp6 = ch;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(104)
				bool tmp7 = (tmp5 == tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(104)
				if ((tmp7)){
					HX_STACK_LINE(105)
					hx::AddEq(fixedstring,ch2);
				}
				else{
					HX_STACK_LINE(107)
					::String tmp8 = currentstring;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(107)
					int tmp9 = i;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(107)
					::String tmp10 = ::haxegon::Data_obj::mid(tmp8,tmp9,null());		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(107)
					hx::AddEq(fixedstring,tmp10);
				}
			}
		}
		HX_STACK_LINE(110)
		::String tmp = fixedstring;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(110)
		return tmp;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Data_obj,replacechar,return )

::String Data_obj::tempstring;


Data_obj::Data_obj()
{
}

bool Data_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"mid") ) { outValue = mid_dyn(); return true;  }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { outValue = width; return true;  }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { outValue = height; return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"loadtext") ) { outValue = loadtext_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"tempstring") ) { outValue = tempstring; return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"replacechar") ) { outValue = replacechar_dyn(); return true;  }
	}
	return false;
}

bool Data_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { width=ioValue.Cast< int >(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { height=ioValue.Cast< int >(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"tempstring") ) { tempstring=ioValue.Cast< ::String >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &Data_obj::width,HX_HCSTRING("width","\x06","\xb6","\x62","\xca")},
	{hx::fsInt,(void *) &Data_obj::height,HX_HCSTRING("height","\xe7","\x07","\x4c","\x02")},
	{hx::fsString,(void *) &Data_obj::tempstring,HX_HCSTRING("tempstring","\xe5","\x72","\x0b","\xf8")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Data_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Data_obj::width,"width");
	HX_MARK_MEMBER_NAME(Data_obj::height,"height");
	HX_MARK_MEMBER_NAME(Data_obj::tempstring,"tempstring");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Data_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Data_obj::width,"width");
	HX_VISIT_MEMBER_NAME(Data_obj::height,"height");
	HX_VISIT_MEMBER_NAME(Data_obj::tempstring,"tempstring");
};

#endif

hx::Class Data_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("width","\x06","\xb6","\x62","\xca"),
	HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"),
	HX_HCSTRING("loadtext","\xd3","\x71","\xc0","\xd2"),
	HX_HCSTRING("mid","\x88","\x11","\x53","\x00"),
	HX_HCSTRING("replacechar","\x0a","\xd1","\x81","\x6b"),
	HX_HCSTRING("tempstring","\xe5","\x72","\x0b","\xf8"),
	::String(null()) };

void Data_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxegon.Data","\x98","\x14","\x39","\x96");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Data_obj::__GetStatic;
	__mClass->mSetStaticField = &Data_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Data_obj >;
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

void Data_obj::__boot()
{
	width= (int)0;
	height= (int)0;
}

} // end namespace haxegon
