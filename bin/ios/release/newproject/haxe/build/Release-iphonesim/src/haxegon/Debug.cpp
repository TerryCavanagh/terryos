#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxegon_Convert
#include <haxegon/Convert.h>
#endif
#ifndef INCLUDED_haxegon_Debug
#include <haxegon/Debug.h>
#endif
#ifndef INCLUDED_haxegon_Gfx
#include <haxegon/Gfx.h>
#endif
#ifndef INCLUDED_haxegon_Text
#include <haxegon/Text.h>
#endif
namespace haxegon{

Void Debug_obj::__construct()
{
	return null();
}

//Debug_obj::~Debug_obj() { }

Dynamic Debug_obj::__CreateEmpty() { return  new Debug_obj; }
hx::ObjectPtr< Debug_obj > Debug_obj::__new()
{  hx::ObjectPtr< Debug_obj > _result_ = new Debug_obj();
	_result_->__construct();
	return _result_;}

Dynamic Debug_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Debug_obj > _result_ = new Debug_obj();
	_result_->__construct();
	return _result_;}

Void Debug_obj::clearlog( ){
{
		HX_STACK_FRAME("haxegon.Debug","clearlog",0xdb541680,"haxegon.Debug.clearlog","haxegon/Debug.hx",17,0x3e51dcba)
		HX_STACK_LINE(17)
		::haxegon::Debug_obj::debuglog = Array_obj< ::String >::__new();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Debug_obj,clearlog,(void))

Void Debug_obj::log( Dynamic t){
{
		HX_STACK_FRAME("haxegon.Debug","log",0x8907cfbb,"haxegon.Debug.log","haxegon/Debug.hx",21,0x3e51dcba)
		HX_STACK_ARG(t,"t")
		HX_STACK_LINE(22)
		Dynamic tmp = t;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(22)
		::String tmp1 = ::haxegon::Convert_obj::tostring(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(22)
		::haxegon::Debug_obj::debuglog->push(tmp1);
		HX_STACK_LINE(23)
		::haxegon::Debug_obj::showtest = true;
		HX_STACK_LINE(24)
		int tmp2 = ::haxegon::Debug_obj::debuglog->length;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(24)
		bool tmp3 = (tmp2 > (int)20);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(24)
		if ((tmp3)){
			HX_STACK_LINE(25)
			::haxegon::Debug_obj::debuglog->reverse();
			HX_STACK_LINE(26)
			::haxegon::Debug_obj::debuglog->pop();
			HX_STACK_LINE(27)
			::haxegon::Debug_obj::debuglog->reverse();
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Debug_obj,log,(void))

Void Debug_obj::test( Dynamic t){
{
		HX_STACK_FRAME("haxegon.Debug","test",0x63101d3b,"haxegon.Debug.test","haxegon/Debug.hx",33,0x3e51dcba)
		HX_STACK_ARG(t,"t")
		HX_STACK_LINE(34)
		Dynamic tmp = t;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(34)
		::String tmp1 = ::haxegon::Convert_obj::tostring(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(34)
		::haxegon::Debug_obj::debuglog[(int)0] = tmp1;
		HX_STACK_LINE(35)
		::haxegon::Debug_obj::showtest = true;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Debug_obj,test,(void))

Void Debug_obj::showlog( ){
{
		HX_STACK_FRAME("haxegon.Debug","showlog",0xf74fde5e,"haxegon.Debug.showlog","haxegon/Debug.hx",39,0x3e51dcba)
		HX_STACK_LINE(40)
		bool tmp = ::haxegon::Debug_obj::showtest;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(40)
		if ((tmp)){
			HX_STACK_LINE(41)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(41)
			int tmp1 = ::haxegon::Debug_obj::debuglog->length;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(41)
			int _g = tmp1;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(41)
			while((true)){
				HX_STACK_LINE(41)
				bool tmp2 = (_g1 < _g);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(41)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(41)
				if ((tmp3)){
					HX_STACK_LINE(41)
					break;
				}
				HX_STACK_LINE(41)
				int tmp4 = (_g1)++;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(41)
				int k = tmp4;		HX_STACK_VAR(k,"k");
				HX_STACK_LINE(42)
				{
					HX_STACK_LINE(42)
					int tmp5 = (int)-1;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(42)
					int _g2 = tmp5;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(42)
					while((true)){
						HX_STACK_LINE(42)
						bool tmp6 = (_g2 < (int)2);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(42)
						bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(42)
						if ((tmp7)){
							HX_STACK_LINE(42)
							break;
						}
						HX_STACK_LINE(42)
						int tmp8 = (_g2)++;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(42)
						int j = tmp8;		HX_STACK_VAR(j,"j");
						HX_STACK_LINE(43)
						{
							HX_STACK_LINE(43)
							int tmp9 = (int)-1;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(43)
							int _g3 = tmp9;		HX_STACK_VAR(_g3,"_g3");
							HX_STACK_LINE(43)
							while((true)){
								HX_STACK_LINE(43)
								bool tmp10 = (_g3 < (int)2);		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(43)
								bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(43)
								if ((tmp11)){
									HX_STACK_LINE(43)
									break;
								}
								HX_STACK_LINE(43)
								int tmp12 = (_g3)++;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(43)
								int i = tmp12;		HX_STACK_VAR(i,"i");
								HX_STACK_LINE(44)
								int tmp13 = ((int)2 + i);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(44)
								int tmp14 = j;		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(44)
								int tmp15 = ::haxegon::Debug_obj::debuglog->length;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(44)
								int tmp16 = (tmp15 - (int)1);		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(44)
								int tmp17 = k;		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(44)
								int tmp18 = (tmp16 - tmp17);		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(44)
								::String tmp19 = ::haxegon::Debug_obj::debuglog->__get(k);		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(44)
								Float tmp20 = ::haxegon::Text_obj::height(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(44)
								Float tmp21 = (tmp20 + (int)2);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(44)
								Float tmp22 = (tmp18 * tmp21);		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(44)
								Float tmp23 = ((int)2 + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(44)
								int tmp24 = ::Std_obj::_int(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(44)
								int tmp25 = (tmp14 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(44)
								::String tmp26 = ::haxegon::Debug_obj::debuglog->__get(k);		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(44)
								int tmp27 = ::haxegon::Gfx_obj::rgb((int)0,(int)0,(int)0);		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(44)
								::haxegon::Text_obj::display(tmp13,tmp25,tmp26,tmp27);
							}
						}
					}
				}
				HX_STACK_LINE(47)
				int tmp5 = ::haxegon::Debug_obj::debuglog->length;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(47)
				int tmp6 = (tmp5 - (int)1);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(47)
				int tmp7 = k;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(47)
				int tmp8 = (tmp6 - tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(47)
				::String tmp9 = ::haxegon::Debug_obj::debuglog->__get(k);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(47)
				Float tmp10 = ::haxegon::Text_obj::height(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(47)
				Float tmp11 = (tmp10 + (int)2);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(47)
				Float tmp12 = (tmp8 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(47)
				Float tmp13 = ((int)2 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(47)
				int tmp14 = ::Std_obj::_int(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(47)
				::String tmp15 = ::haxegon::Debug_obj::debuglog->__get(k);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(47)
				int tmp16 = ::haxegon::Gfx_obj::rgb((int)255,(int)255,(int)255);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(47)
				::haxegon::Text_obj::display((int)2,tmp14,tmp15,tmp16);
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Debug_obj,showlog,(void))

bool Debug_obj::showtest;

Array< ::String > Debug_obj::debuglog;


Debug_obj::Debug_obj()
{
}

bool Debug_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"log") ) { outValue = log_dyn(); return true;  }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"test") ) { outValue = test_dyn(); return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"showlog") ) { outValue = showlog_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"clearlog") ) { outValue = clearlog_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"showtest") ) { outValue = showtest; return true;  }
		if (HX_FIELD_EQ(inName,"debuglog") ) { outValue = debuglog; return true;  }
	}
	return false;
}

bool Debug_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"showtest") ) { showtest=ioValue.Cast< bool >(); return true; }
		if (HX_FIELD_EQ(inName,"debuglog") ) { debuglog=ioValue.Cast< Array< ::String > >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsBool,(void *) &Debug_obj::showtest,HX_HCSTRING("showtest","\xcf","\x5f","\xa7","\xc9")},
	{hx::fsObject /*Array< ::String >*/ ,(void *) &Debug_obj::debuglog,HX_HCSTRING("debuglog","\x11","\xf8","\xee","\x90")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Debug_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Debug_obj::showtest,"showtest");
	HX_MARK_MEMBER_NAME(Debug_obj::debuglog,"debuglog");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Debug_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Debug_obj::showtest,"showtest");
	HX_VISIT_MEMBER_NAME(Debug_obj::debuglog,"debuglog");
};

#endif

hx::Class Debug_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("clearlog","\x17","\x99","\x26","\x31"),
	HX_HCSTRING("log","\x84","\x54","\x52","\x00"),
	HX_HCSTRING("test","\x52","\xc8","\xf9","\x4c"),
	HX_HCSTRING("showlog","\xa7","\xfb","\xb6","\x7b"),
	HX_HCSTRING("showtest","\xcf","\x5f","\xa7","\xc9"),
	HX_HCSTRING("debuglog","\x11","\xf8","\xee","\x90"),
	::String(null()) };

void Debug_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxegon.Debug","\x25","\x34","\x50","\xde");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Debug_obj::__GetStatic;
	__mClass->mSetStaticField = &Debug_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Debug_obj >;
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

void Debug_obj::__boot()
{
	debuglog= Array_obj< ::String >::__new();
}

} // end namespace haxegon
