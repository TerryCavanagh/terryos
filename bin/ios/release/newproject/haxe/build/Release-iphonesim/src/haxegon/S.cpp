#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxegon_S
#include <haxegon/S.h>
#endif
namespace haxegon{

Void S_obj::__construct()
{
	return null();
}

//S_obj::~S_obj() { }

Dynamic S_obj::__CreateEmpty() { return  new S_obj; }
hx::ObjectPtr< S_obj > S_obj::__new()
{  hx::ObjectPtr< S_obj > _result_ = new S_obj();
	_result_->__construct();
	return _result_;}

Dynamic S_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< S_obj > _result_ = new S_obj();
	_result_->__construct();
	return _result_;}

::String S_obj::uppercase( ::String currentstring){
	HX_STACK_FRAME("haxegon.S","uppercase",0x5db554a9,"haxegon.S.uppercase","haxegon/S.hx",5,0x33631f1a)
	HX_STACK_ARG(currentstring,"currentstring")
	HX_STACK_LINE(6)
	::String tmp = currentstring.toUpperCase();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(6)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(S_obj,uppercase,return )

::String S_obj::lowercase( ::String currentstring){
	HX_STACK_FRAME("haxegon.S","lowercase",0xdd1c70c8,"haxegon.S.lowercase","haxegon/S.hx",10,0x33631f1a)
	HX_STACK_ARG(currentstring,"currentstring")
	HX_STACK_LINE(11)
	::String tmp = currentstring.toLowerCase();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(11)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(S_obj,lowercase,return )

Array< ::String > S_obj::split( ::String currentstring,::String delimiter){
	HX_STACK_FRAME("haxegon.S","split",0x728856f1,"haxegon.S.split","haxegon/S.hx",15,0x33631f1a)
	HX_STACK_ARG(currentstring,"currentstring")
	HX_STACK_ARG(delimiter,"delimiter")
	HX_STACK_LINE(16)
	::String tmp = delimiter;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(16)
	return currentstring.split(tmp);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(S_obj,split,return )

::String S_obj::removefromstring( ::String fullstring,::String substring){
	HX_STACK_FRAME("haxegon.S","removefromstring",0xf0d0c048,"haxegon.S.removefromstring","haxegon/S.hx",20,0x33631f1a)
	HX_STACK_ARG(fullstring,"fullstring")
	HX_STACK_ARG(substring,"substring")
	HX_STACK_LINE(21)
	::String tmp = fullstring;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(21)
	::String tmp1 = substring;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(21)
	int tmp2 = ::haxegon::S_obj::positioninstring(tmp,tmp1,null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(21)
	int t = tmp2;		HX_STACK_VAR(t,"t");
	HX_STACK_LINE(22)
	bool tmp3 = (t == (int)-1);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(22)
	if ((tmp3)){
		HX_STACK_LINE(23)
		::String tmp4 = fullstring;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(23)
		return tmp4;
	}
	else{
		HX_STACK_LINE(25)
		::String tmp4 = fullstring;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(25)
		::String tmp5 = substring;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(25)
		::String tmp6 = ::haxegon::S_obj::getroot(tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(25)
		::String tmp7 = fullstring;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(25)
		::String tmp8 = substring;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(25)
		::String tmp9 = ::haxegon::S_obj::getbranch(tmp7,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(25)
		::String tmp10 = (tmp6 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(25)
		::String tmp11 = substring;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(25)
		::String tmp12 = ::haxegon::S_obj::removefromstring(tmp10,tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(25)
		return tmp12;
	}
	HX_STACK_LINE(22)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(S_obj,removefromstring,return )

bool S_obj::isinstring( ::String fullstring,::String stringtocheck){
	HX_STACK_FRAME("haxegon.S","isinstring",0x378bb4e9,"haxegon.S.isinstring","haxegon/S.hx",30,0x33631f1a)
	HX_STACK_ARG(fullstring,"fullstring")
	HX_STACK_ARG(stringtocheck,"stringtocheck")
	HX_STACK_LINE(31)
	::String tmp = fullstring;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(31)
	::String tmp1 = stringtocheck;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(31)
	int tmp2 = ::haxegon::S_obj::positioninstring(tmp,tmp1,null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(31)
	bool tmp3 = (tmp2 != (int)-1);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(31)
	if ((tmp3)){
		HX_STACK_LINE(31)
		return true;
	}
	HX_STACK_LINE(32)
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(S_obj,isinstring,return )

int S_obj::positioninstring( ::String fullstring,::String substring,hx::Null< int >  __o_start){
int start = __o_start.Default(0);
	HX_STACK_FRAME("haxegon.S","positioninstring",0xeb0bdd68,"haxegon.S.positioninstring","haxegon/S.hx",36,0x33631f1a)
	HX_STACK_ARG(fullstring,"fullstring")
	HX_STACK_ARG(substring,"substring")
	HX_STACK_ARG(start,"start")
{
		HX_STACK_LINE(37)
		::String tmp = substring;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(37)
		int tmp1 = start;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(37)
		int tmp2 = fullstring.indexOf(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(37)
		return tmp2;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(S_obj,positioninstring,return )

::String S_obj::letterat( ::String currentstring,hx::Null< int >  __o_position){
int position = __o_position.Default(0);
	HX_STACK_FRAME("haxegon.S","letterat",0x6f0083a2,"haxegon.S.letterat","haxegon/S.hx",41,0x33631f1a)
	HX_STACK_ARG(currentstring,"currentstring")
	HX_STACK_ARG(position,"position")
{
		HX_STACK_LINE(42)
		int tmp = position;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(42)
		::String tmp1 = currentstring.substr(tmp,(int)1);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(42)
		return tmp1;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(S_obj,letterat,return )

::String S_obj::mid( ::String currentstring,hx::Null< int >  __o_start,hx::Null< int >  __o_length){
int start = __o_start.Default(0);
int length = __o_length.Default(1);
	HX_STACK_FRAME("haxegon.S","mid",0x5d0079df,"haxegon.S.mid","haxegon/S.hx",46,0x33631f1a)
	HX_STACK_ARG(currentstring,"currentstring")
	HX_STACK_ARG(start,"start")
	HX_STACK_ARG(length,"length")
{
		HX_STACK_LINE(47)
		int tmp = start;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(47)
		int tmp1 = length;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(47)
		::String tmp2 = currentstring.substr(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(47)
		return tmp2;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(S_obj,mid,return )

::String S_obj::left( ::String currentstring,hx::Null< int >  __o_length){
int length = __o_length.Default(1);
	HX_STACK_FRAME("haxegon.S","left",0x02bdebd0,"haxegon.S.left","haxegon/S.hx",51,0x33631f1a)
	HX_STACK_ARG(currentstring,"currentstring")
	HX_STACK_ARG(length,"length")
{
		HX_STACK_LINE(52)
		int tmp = length;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(52)
		::String tmp1 = currentstring.substr((int)0,tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(52)
		return tmp1;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(S_obj,left,return )

::String S_obj::right( ::String currentstring,hx::Null< int >  __o_length){
int length = __o_length.Default(1);
	HX_STACK_FRAME("haxegon.S","right",0xda7d77f3,"haxegon.S.right","haxegon/S.hx",56,0x33631f1a)
	HX_STACK_ARG(currentstring,"currentstring")
	HX_STACK_ARG(length,"length")
{
		HX_STACK_LINE(57)
		int tmp = (currentstring.length - length);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(57)
		int tmp1 = length;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(57)
		::String tmp2 = currentstring.substr(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(57)
		return tmp2;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(S_obj,right,return )

::String S_obj::reversetext( ::String currentstring){
	HX_STACK_FRAME("haxegon.S","reversetext",0x15065626,"haxegon.S.reversetext","haxegon/S.hx",61,0x33631f1a)
	HX_STACK_ARG(currentstring,"currentstring")
	HX_STACK_LINE(62)
	::String t2 = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(t2,"t2");
	HX_STACK_LINE(64)
	{
		HX_STACK_LINE(64)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(64)
		int _g = currentstring.length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(64)
		while((true)){
			HX_STACK_LINE(64)
			bool tmp = (_g1 < _g);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(64)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(64)
			if ((tmp1)){
				HX_STACK_LINE(64)
				break;
			}
			HX_STACK_LINE(64)
			int tmp2 = (_g1)++;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(64)
			int i = tmp2;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(65)
			::String tmp3 = currentstring;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(65)
			int tmp4 = (currentstring.length - i);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(65)
			int tmp5 = (tmp4 - (int)1);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(65)
			::String tmp6 = ::haxegon::S_obj::mid(tmp3,tmp5,(int)1);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(65)
			hx::AddEq(t2,tmp6);
		}
	}
	HX_STACK_LINE(67)
	::String tmp = t2;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(67)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(S_obj,reversetext,return )

::String S_obj::replacechar( ::String currentstring,::String __o_ch,::String __o_ch2){
::String ch = __o_ch.Default(HX_HCSTRING("|","\x7c","\x00","\x00","\x00"));
::String ch2 = __o_ch2.Default(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
	HX_STACK_FRAME("haxegon.S","replacechar",0x7fe1e861,"haxegon.S.replacechar","haxegon/S.hx",71,0x33631f1a)
	HX_STACK_ARG(currentstring,"currentstring")
	HX_STACK_ARG(ch,"ch")
	HX_STACK_ARG(ch2,"ch2")
{
		HX_STACK_LINE(72)
		::String fixedstring = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(fixedstring,"fixedstring");
		HX_STACK_LINE(73)
		{
			HX_STACK_LINE(73)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(73)
			int _g = currentstring.length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(73)
			while((true)){
				HX_STACK_LINE(73)
				bool tmp = (_g1 < _g);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(73)
				bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(73)
				if ((tmp1)){
					HX_STACK_LINE(73)
					break;
				}
				HX_STACK_LINE(73)
				int tmp2 = (_g1)++;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(73)
				int i = tmp2;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(74)
				::String tmp3 = currentstring;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(74)
				int tmp4 = i;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(74)
				::String tmp5 = ::haxegon::S_obj::mid(tmp3,tmp4,null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(74)
				::String tmp6 = ch;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(74)
				bool tmp7 = (tmp5 == tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(74)
				if ((tmp7)){
					HX_STACK_LINE(75)
					hx::AddEq(fixedstring,ch2);
				}
				else{
					HX_STACK_LINE(77)
					::String tmp8 = currentstring;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(77)
					int tmp9 = i;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(77)
					::String tmp10 = ::haxegon::S_obj::mid(tmp8,tmp9,null());		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(77)
					hx::AddEq(fixedstring,tmp10);
				}
			}
		}
		HX_STACK_LINE(80)
		::String tmp = fixedstring;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(80)
		return tmp;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(S_obj,replacechar,return )

::String S_obj::getlastbranch( ::String currentstring,::String ch){
	HX_STACK_FRAME("haxegon.S","getlastbranch",0x0d36a0a5,"haxegon.S.getlastbranch","haxegon/S.hx",84,0x33631f1a)
	HX_STACK_ARG(currentstring,"currentstring")
	HX_STACK_ARG(ch,"ch")
	HX_STACK_LINE(85)
	int tmp = (currentstring.length - (int)1);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(85)
	int i = tmp;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(86)
	while((true)){
		HX_STACK_LINE(86)
		bool tmp1 = (i >= (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(86)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(86)
		if ((tmp2)){
			HX_STACK_LINE(86)
			break;
		}
		HX_STACK_LINE(87)
		::String tmp3 = currentstring;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(87)
		int tmp4 = i;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(87)
		::String tmp5 = ::haxegon::S_obj::mid(tmp3,tmp4,(int)1);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(87)
		::String tmp6 = ch;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(87)
		bool tmp7 = (tmp5 == tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(87)
		if ((tmp7)){
			HX_STACK_LINE(88)
			::String tmp8 = currentstring;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(88)
			int tmp9 = (i + (int)1);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(88)
			int tmp10 = (currentstring.length - i);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(88)
			int tmp11 = (tmp10 - (int)1);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(88)
			::String tmp12 = ::haxegon::S_obj::mid(tmp8,tmp9,tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(88)
			return tmp12;
		}
		HX_STACK_LINE(90)
		(i)--;
	}
	HX_STACK_LINE(92)
	::String tmp1 = currentstring;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(92)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(S_obj,getlastbranch,return )

::String S_obj::getroot( ::String currentstring,::String ch){
	HX_STACK_FRAME("haxegon.S","getroot",0xaeb6518f,"haxegon.S.getroot","haxegon/S.hx",96,0x33631f1a)
	HX_STACK_ARG(currentstring,"currentstring")
	HX_STACK_ARG(ch,"ch")
	HX_STACK_LINE(97)
	{
		HX_STACK_LINE(97)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(97)
		int _g = currentstring.length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(97)
		while((true)){
			HX_STACK_LINE(97)
			bool tmp = (_g1 < _g);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(97)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(97)
			if ((tmp1)){
				HX_STACK_LINE(97)
				break;
			}
			HX_STACK_LINE(97)
			int tmp2 = (_g1)++;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(97)
			int i = tmp2;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(98)
			::String tmp3 = currentstring;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(98)
			int tmp4 = i;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(98)
			::String tmp5 = ::haxegon::S_obj::mid(tmp3,tmp4,(int)1);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(98)
			::String tmp6 = ch;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(98)
			bool tmp7 = (tmp5 == tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(98)
			if ((tmp7)){
				HX_STACK_LINE(99)
				::String tmp8 = currentstring;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(99)
				int tmp9 = i;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(99)
				::String tmp10 = ::haxegon::S_obj::mid(tmp8,(int)0,tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(99)
				return tmp10;
			}
		}
	}
	HX_STACK_LINE(102)
	::String tmp = currentstring;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(102)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(S_obj,getroot,return )

::String S_obj::getbranch( ::String currentstring,::String ch){
	HX_STACK_FRAME("haxegon.S","getbranch",0xd151d74f,"haxegon.S.getbranch","haxegon/S.hx",106,0x33631f1a)
	HX_STACK_ARG(currentstring,"currentstring")
	HX_STACK_ARG(ch,"ch")
	HX_STACK_LINE(107)
	{
		HX_STACK_LINE(107)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(107)
		int _g = currentstring.length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(107)
		while((true)){
			HX_STACK_LINE(107)
			bool tmp = (_g1 < _g);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(107)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(107)
			if ((tmp1)){
				HX_STACK_LINE(107)
				break;
			}
			HX_STACK_LINE(107)
			int tmp2 = (_g1)++;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(107)
			int i = tmp2;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(108)
			::String tmp3 = currentstring;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(108)
			int tmp4 = i;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(108)
			::String tmp5 = ::haxegon::S_obj::mid(tmp3,tmp4,(int)1);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(108)
			::String tmp6 = ch;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(108)
			bool tmp7 = (tmp5 == tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(108)
			if ((tmp7)){
				HX_STACK_LINE(109)
				::String tmp8 = currentstring;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(109)
				int tmp9 = (i + (int)1);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(109)
				int tmp10 = (currentstring.length - i);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(109)
				int tmp11 = (tmp10 - (int)1);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(109)
				::String tmp12 = ::haxegon::S_obj::mid(tmp8,tmp9,tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(109)
				return tmp12;
			}
		}
	}
	HX_STACK_LINE(112)
	::String tmp = currentstring;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(112)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(S_obj,getbranch,return )

::String S_obj::getbetweenbrackets( ::String currentstring){
	HX_STACK_FRAME("haxegon.S","getbetweenbrackets",0x5734a0c6,"haxegon.S.getbetweenbrackets","haxegon/S.hx",116,0x33631f1a)
	HX_STACK_ARG(currentstring,"currentstring")
	HX_STACK_LINE(117)
	while((true)){
		HX_STACK_LINE(117)
		::String tmp = currentstring;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(117)
		::String tmp1 = ::haxegon::S_obj::mid(tmp,(int)0,(int)1);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(117)
		bool tmp2 = (tmp1 != HX_HCSTRING("(","\x28","\x00","\x00","\x00"));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(117)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(117)
		if ((tmp2)){
			HX_STACK_LINE(117)
			tmp3 = (currentstring.length > (int)0);
		}
		else{
			HX_STACK_LINE(117)
			tmp3 = false;
		}
		HX_STACK_LINE(117)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(117)
		if ((tmp4)){
			HX_STACK_LINE(117)
			break;
		}
		HX_STACK_LINE(117)
		::String tmp5 = currentstring;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(117)
		int tmp6 = (currentstring.length - (int)1);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(117)
		::String tmp7 = ::haxegon::S_obj::mid(tmp5,(int)1,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(117)
		currentstring = tmp7;
	}
	HX_STACK_LINE(118)
	while((true)){
		HX_STACK_LINE(118)
		::String tmp = currentstring;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(118)
		int tmp1 = (currentstring.length - (int)1);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(118)
		::String tmp2 = ::haxegon::S_obj::mid(tmp,tmp1,(int)1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(118)
		bool tmp3 = (tmp2 != HX_HCSTRING(")","\x29","\x00","\x00","\x00"));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(118)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(118)
		if ((tmp3)){
			HX_STACK_LINE(118)
			tmp4 = (currentstring.length > (int)0);
		}
		else{
			HX_STACK_LINE(118)
			tmp4 = false;
		}
		HX_STACK_LINE(118)
		bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(118)
		if ((tmp5)){
			HX_STACK_LINE(118)
			break;
		}
		HX_STACK_LINE(118)
		::String tmp6 = currentstring;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(118)
		int tmp7 = (currentstring.length - (int)1);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(118)
		::String tmp8 = ::haxegon::S_obj::mid(tmp6,(int)0,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(118)
		currentstring = tmp8;
	}
	HX_STACK_LINE(120)
	bool tmp = (currentstring.length <= (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(120)
	if ((tmp)){
		HX_STACK_LINE(120)
		return HX_HCSTRING("","\x00","\x00","\x00","\x00");
	}
	HX_STACK_LINE(121)
	::String tmp1 = currentstring;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(121)
	int tmp2 = (currentstring.length - (int)2);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(121)
	::String tmp3 = ::haxegon::S_obj::mid(tmp1,(int)1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(121)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(S_obj,getbetweenbrackets,return )

::String S_obj::trimspaces( ::String currentstring){
	HX_STACK_FRAME("haxegon.S","trimspaces",0x255c73d8,"haxegon.S.trimspaces","haxegon/S.hx",125,0x33631f1a)
	HX_STACK_ARG(currentstring,"currentstring")
	HX_STACK_LINE(126)
	while((true)){
		HX_STACK_LINE(126)
		::String tmp = currentstring;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(126)
		::String tmp1 = ::haxegon::S_obj::mid(tmp,(int)0,(int)1);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(126)
		bool tmp2 = (tmp1 == HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(126)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(126)
		if ((tmp2)){
			HX_STACK_LINE(126)
			tmp3 = (currentstring.length > (int)0);
		}
		else{
			HX_STACK_LINE(126)
			tmp3 = false;
		}
		HX_STACK_LINE(126)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(126)
		if ((tmp4)){
			HX_STACK_LINE(126)
			break;
		}
		HX_STACK_LINE(126)
		::String tmp5 = currentstring;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(126)
		int tmp6 = (currentstring.length - (int)1);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(126)
		::String tmp7 = ::haxegon::S_obj::mid(tmp5,(int)1,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(126)
		currentstring = tmp7;
	}
	HX_STACK_LINE(127)
	while((true)){
		HX_STACK_LINE(127)
		::String tmp = currentstring;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(127)
		int tmp1 = (currentstring.length - (int)1);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(127)
		::String tmp2 = ::haxegon::S_obj::mid(tmp,tmp1,(int)1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(127)
		bool tmp3 = (tmp2 == HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(127)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(127)
		if ((tmp3)){
			HX_STACK_LINE(127)
			tmp4 = (currentstring.length > (int)0);
		}
		else{
			HX_STACK_LINE(127)
			tmp4 = false;
		}
		HX_STACK_LINE(127)
		bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(127)
		if ((tmp5)){
			HX_STACK_LINE(127)
			break;
		}
		HX_STACK_LINE(127)
		::String tmp6 = currentstring;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(127)
		int tmp7 = (currentstring.length - (int)1);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(127)
		::String tmp8 = ::haxegon::S_obj::mid(tmp6,(int)0,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(127)
		currentstring = tmp8;
	}
	HX_STACK_LINE(129)
	while((true)){
		HX_STACK_LINE(129)
		::String tmp = currentstring;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(129)
		::String tmp1 = ::haxegon::S_obj::mid(tmp,(int)0,(int)1);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(129)
		bool tmp2 = (tmp1 == HX_HCSTRING("\t","\x09","\x00","\x00","\x00"));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(129)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(129)
		if ((tmp2)){
			HX_STACK_LINE(129)
			tmp3 = (currentstring.length > (int)0);
		}
		else{
			HX_STACK_LINE(129)
			tmp3 = false;
		}
		HX_STACK_LINE(129)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(129)
		if ((tmp4)){
			HX_STACK_LINE(129)
			break;
		}
		HX_STACK_LINE(129)
		::String tmp5 = currentstring;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(129)
		int tmp6 = (currentstring.length - (int)1);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(129)
		::String tmp7 = ::haxegon::S_obj::mid(tmp5,(int)1,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(129)
		currentstring = tmp7;
	}
	HX_STACK_LINE(130)
	while((true)){
		HX_STACK_LINE(130)
		::String tmp = currentstring;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(130)
		int tmp1 = (currentstring.length - (int)1);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(130)
		::String tmp2 = ::haxegon::S_obj::mid(tmp,tmp1,(int)1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(130)
		bool tmp3 = (tmp2 == HX_HCSTRING("\t","\x09","\x00","\x00","\x00"));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(130)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(130)
		if ((tmp3)){
			HX_STACK_LINE(130)
			tmp4 = (currentstring.length > (int)0);
		}
		else{
			HX_STACK_LINE(130)
			tmp4 = false;
		}
		HX_STACK_LINE(130)
		bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(130)
		if ((tmp5)){
			HX_STACK_LINE(130)
			break;
		}
		HX_STACK_LINE(130)
		::String tmp6 = currentstring;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(130)
		int tmp7 = (currentstring.length - (int)1);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(130)
		::String tmp8 = ::haxegon::S_obj::mid(tmp6,(int)0,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(130)
		currentstring = tmp8;
	}
	HX_STACK_LINE(132)
	bool tmp = (currentstring.length <= (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(132)
	if ((tmp)){
		HX_STACK_LINE(132)
		return HX_HCSTRING("","\x00","\x00","\x00","\x00");
	}
	HX_STACK_LINE(133)
	::String tmp1 = currentstring;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(133)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(S_obj,trimspaces,return )

bool S_obj::isnumber( ::String currentstring){
	HX_STACK_FRAME("haxegon.S","isnumber",0x3c15aa7c,"haxegon.S.isnumber","haxegon/S.hx",137,0x33631f1a)
	HX_STACK_ARG(currentstring,"currentstring")
	HX_STACK_LINE(138)
	::String tmp = currentstring;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(138)
	Float tmp1 = ::Std_obj::parseFloat(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(138)
	bool tmp2 = ::Math_obj::isNaN(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(138)
	if ((tmp2)){
		HX_STACK_LINE(139)
		return false;
	}
	else{
		HX_STACK_LINE(141)
		return true;
	}
	HX_STACK_LINE(143)
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(S_obj,isnumber,return )


S_obj::S_obj()
{
}

bool S_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"mid") ) { outValue = mid_dyn(); return true;  }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"left") ) { outValue = left_dyn(); return true;  }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"split") ) { outValue = split_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"right") ) { outValue = right_dyn(); return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getroot") ) { outValue = getroot_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"letterat") ) { outValue = letterat_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"isnumber") ) { outValue = isnumber_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"uppercase") ) { outValue = uppercase_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lowercase") ) { outValue = lowercase_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getbranch") ) { outValue = getbranch_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"isinstring") ) { outValue = isinstring_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"trimspaces") ) { outValue = trimspaces_dyn(); return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"reversetext") ) { outValue = reversetext_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"replacechar") ) { outValue = replacechar_dyn(); return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getlastbranch") ) { outValue = getlastbranch_dyn(); return true;  }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"removefromstring") ) { outValue = removefromstring_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"positioninstring") ) { outValue = positioninstring_dyn(); return true;  }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"getbetweenbrackets") ) { outValue = getbetweenbrackets_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(S_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(S_obj::__mClass,"__mClass");
};

#endif

hx::Class S_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("uppercase","\x12","\x91","\x3e","\xe7"),
	HX_HCSTRING("lowercase","\x31","\xad","\xa5","\x66"),
	HX_HCSTRING("split","\xda","\xea","\x6e","\x81"),
	HX_HCSTRING("removefromstring","\xff","\xd2","\xd7","\xe2"),
	HX_HCSTRING("isinstring","\x60","\x54","\x17","\x06"),
	HX_HCSTRING("positioninstring","\x1f","\xf0","\x12","\xdd"),
	HX_HCSTRING("letterat","\x59","\x87","\x3a","\xf8"),
	HX_HCSTRING("mid","\x88","\x11","\x53","\x00"),
	HX_HCSTRING("left","\x07","\x08","\xb0","\x47"),
	HX_HCSTRING("right","\xdc","\x0b","\x64","\xe9"),
	HX_HCSTRING("reversetext","\xcf","\x3e","\xa6","\x00"),
	HX_HCSTRING("replacechar","\x0a","\xd1","\x81","\x6b"),
	HX_HCSTRING("getlastbranch","\x8e","\xc5","\x20","\x0f"),
	HX_HCSTRING("getroot","\xb8","\x71","\x58","\x33"),
	HX_HCSTRING("getbranch","\xb8","\x13","\xdb","\x5a"),
	HX_HCSTRING("getbetweenbrackets","\x3d","\x0f","\x2f","\x27"),
	HX_HCSTRING("trimspaces","\x4f","\x13","\xe8","\xf3"),
	HX_HCSTRING("isnumber","\x33","\xae","\x4f","\xc5"),
	::String(null()) };

void S_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxegon.S","\x45","\x11","\x43","\xd6");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &S_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< S_obj >;
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
