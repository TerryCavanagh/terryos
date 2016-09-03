#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxegon_Random
#include <haxegon/Random.h>
#endif
namespace haxegon{

Void Random_obj::__construct()
{
	return null();
}

//Random_obj::~Random_obj() { }

Dynamic Random_obj::__CreateEmpty() { return  new Random_obj; }
hx::ObjectPtr< Random_obj > Random_obj::__new()
{  hx::ObjectPtr< Random_obj > _result_ = new Random_obj();
	_result_->__construct();
	return _result_;}

Dynamic Random_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Random_obj > _result_ = new Random_obj();
	_result_->__construct();
	return _result_;}

bool Random_obj::_bool( ){
	HX_STACK_FRAME("haxegon.Random","bool",0x9a1cf1c7,"haxegon.Random.bool","haxegon/Random.hx",8,0xd956af4c)
	HX_STACK_LINE(10)
	Float tmp = ::haxegon::Random_obj::random();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(10)
	bool tmp1 = (tmp < ((Float)0.5));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(10)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Random_obj,_bool,return )

bool Random_obj::occasional( ){
	HX_STACK_FRAME("haxegon.Random","occasional",0x41949aef,"haxegon.Random.occasional","haxegon/Random.hx",17,0xd956af4c)
	HX_STACK_LINE(19)
	Float tmp = ::haxegon::Random_obj::random();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(19)
	bool tmp1 = (tmp < ((Float)0.2));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(19)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Random_obj,occasional,return )

bool Random_obj::rare( ){
	HX_STACK_FRAME("haxegon.Random","rare",0xa4a5bebf,"haxegon.Random.rare","haxegon/Random.hx",26,0xd956af4c)
	HX_STACK_LINE(28)
	Float tmp = ::haxegon::Random_obj::random();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(28)
	bool tmp1 = (tmp < ((Float)0.05));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(28)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Random_obj,rare,return )

bool Random_obj::chance( int n){
	HX_STACK_FRAME("haxegon.Random","chance",0x65e05cd1,"haxegon.Random.chance","haxegon/Random.hx",35,0xd956af4c)
	HX_STACK_ARG(n,"n")
	HX_STACK_LINE(37)
	int tmp = (int)100;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(37)
	int tmp1 = (tmp + (int)1);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(37)
	Float tmp2 = ::haxegon::Random_obj::random();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(37)
	Float tmp3 = (tmp1 * tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(37)
	int tmp4 = ::Math_obj::floor(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(37)
	int tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(37)
	int tmp6 = n;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(37)
	bool tmp7 = (tmp5 <= tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(37)
	return tmp7;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Random_obj,chance,return )

int Random_obj::_int( int from,int to){
	HX_STACK_FRAME("haxegon.Random","int",0xd1a501f2,"haxegon.Random.int","haxegon/Random.hx",44,0xd956af4c)
	HX_STACK_ARG(from,"from")
	HX_STACK_ARG(to,"to")
	HX_STACK_LINE(46)
	int tmp = from;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(46)
	int tmp1 = (to - from);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(46)
	int tmp2 = (tmp1 + (int)1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(46)
	Float tmp3 = ::haxegon::Random_obj::random();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(46)
	Float tmp4 = (tmp2 * tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(46)
	int tmp5 = ::Math_obj::floor(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(46)
	int tmp6 = (tmp + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(46)
	return tmp6;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Random_obj,_int,return )

Float Random_obj::_float( Float from,Float to){
	HX_STACK_FRAME("haxegon.Random","float",0x8ad5415f,"haxegon.Random.float","haxegon/Random.hx",53,0xd956af4c)
	HX_STACK_ARG(from,"from")
	HX_STACK_ARG(to,"to")
	HX_STACK_LINE(55)
	Float tmp = from;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(55)
	Float tmp1 = (to - from);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(55)
	Float tmp2 = ::haxegon::Random_obj::random();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(55)
	Float tmp3 = (tmp1 * tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(55)
	Float tmp4 = (tmp + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(55)
	return tmp4;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Random_obj,_float,return )

::String Random_obj::string( int length,::String __o_charactersToUse){
::String charactersToUse = __o_charactersToUse.Default(HX_HCSTRING("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789","\x9f","\x35","\xea","\x01"));
	HX_STACK_FRAME("haxegon.Random","string",0xbf9df7ae,"haxegon.Random.string","haxegon/Random.hx",71,0xd956af4c)
	HX_STACK_ARG(length,"length")
	HX_STACK_ARG(charactersToUse,"charactersToUse")
{
		HX_STACK_LINE(72)
		::String str = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(str,"str");
		HX_STACK_LINE(73)
		{
			HX_STACK_LINE(73)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(73)
			while((true)){
				HX_STACK_LINE(73)
				bool tmp = (_g < length);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(73)
				bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(73)
				if ((tmp1)){
					HX_STACK_LINE(73)
					break;
				}
				HX_STACK_LINE(73)
				int tmp2 = (_g)++;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(73)
				int i = tmp2;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(74)
				int tmp3 = (charactersToUse.length - (int)1);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(74)
				int tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(74)
				int tmp5 = (tmp4 + (int)1);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(74)
				Float tmp6 = ::haxegon::Random_obj::random();		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(74)
				Float tmp7 = (tmp5 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(74)
				int tmp8 = ::Math_obj::floor(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(74)
				int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(74)
				::String tmp10 = charactersToUse.charAt(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(74)
				hx::AddEq(str,tmp10);
			}
		}
		HX_STACK_LINE(76)
		::String tmp = str;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(76)
		return tmp;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Random_obj,string,return )

::String Random_obj::pickstring( ::String s1,::String s2,::String s3,::String s4,::String s5,::String s6,::String s7,::String s8,::String s9,::String s10,::String s11,::String s12){
	HX_STACK_FRAME("haxegon.Random","pickstring",0xeabe71cf,"haxegon.Random.pickstring","haxegon/Random.hx",82,0xd956af4c)
	HX_STACK_ARG(s1,"s1")
	HX_STACK_ARG(s2,"s2")
	HX_STACK_ARG(s3,"s3")
	HX_STACK_ARG(s4,"s4")
	HX_STACK_ARG(s5,"s5")
	HX_STACK_ARG(s6,"s6")
	HX_STACK_ARG(s7,"s7")
	HX_STACK_ARG(s8,"s8")
	HX_STACK_ARG(s9,"s9")
	HX_STACK_ARG(s10,"s10")
	HX_STACK_ARG(s11,"s11")
	HX_STACK_ARG(s12,"s12")
	HX_STACK_LINE(83)
	::haxegon::Random_obj::temp = (int)2;
	HX_STACK_LINE(84)
	bool tmp = (s3 != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(84)
	if ((tmp)){
		HX_STACK_LINE(84)
		::haxegon::Random_obj::temp = (int)3;
	}
	HX_STACK_LINE(85)
	bool tmp1 = (s4 != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(85)
	if ((tmp1)){
		HX_STACK_LINE(85)
		::haxegon::Random_obj::temp = (int)4;
	}
	HX_STACK_LINE(86)
	bool tmp2 = (s5 != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(86)
	if ((tmp2)){
		HX_STACK_LINE(86)
		::haxegon::Random_obj::temp = (int)5;
	}
	HX_STACK_LINE(87)
	bool tmp3 = (s6 != null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(87)
	if ((tmp3)){
		HX_STACK_LINE(87)
		::haxegon::Random_obj::temp = (int)6;
	}
	HX_STACK_LINE(88)
	bool tmp4 = (s7 != null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(88)
	if ((tmp4)){
		HX_STACK_LINE(88)
		::haxegon::Random_obj::temp = (int)7;
	}
	HX_STACK_LINE(89)
	bool tmp5 = (s8 != null());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(89)
	if ((tmp5)){
		HX_STACK_LINE(89)
		::haxegon::Random_obj::temp = (int)8;
	}
	HX_STACK_LINE(90)
	bool tmp6 = (s9 != null());		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(90)
	if ((tmp6)){
		HX_STACK_LINE(90)
		::haxegon::Random_obj::temp = (int)9;
	}
	HX_STACK_LINE(91)
	bool tmp7 = (s10 != null());		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(91)
	if ((tmp7)){
		HX_STACK_LINE(91)
		::haxegon::Random_obj::temp = (int)10;
	}
	HX_STACK_LINE(92)
	bool tmp8 = (s11 != null());		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(92)
	if ((tmp8)){
		HX_STACK_LINE(92)
		::haxegon::Random_obj::temp = (int)11;
	}
	HX_STACK_LINE(93)
	bool tmp9 = (s12 != null());		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(93)
	if ((tmp9)){
		HX_STACK_LINE(93)
		::haxegon::Random_obj::temp = (int)12;
	}
	HX_STACK_LINE(95)
	{
		HX_STACK_LINE(95)
		int tmp10 = ::haxegon::Random_obj::temp;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(95)
		int tmp11 = (tmp10 - (int)1);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(95)
		int tmp12 = (tmp11 + (int)1);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(95)
		Float tmp13 = ::haxegon::Random_obj::random();		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(95)
		Float tmp14 = (tmp12 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(95)
		int tmp15 = ::Math_obj::floor(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(95)
		int tmp16 = ((int)1 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(95)
		int _g = tmp16;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(95)
		int tmp17 = _g;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(95)
		switch( (int)(tmp17)){
			case (int)1: {
				HX_STACK_LINE(96)
				::String tmp18 = s1;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(96)
				return tmp18;
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(97)
				::String tmp18 = s2;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(97)
				return tmp18;
			}
			;break;
			case (int)3: {
				HX_STACK_LINE(98)
				::String tmp18 = s3;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(98)
				return tmp18;
			}
			;break;
			case (int)4: {
				HX_STACK_LINE(99)
				::String tmp18 = s4;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(99)
				return tmp18;
			}
			;break;
			case (int)5: {
				HX_STACK_LINE(100)
				::String tmp18 = s5;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(100)
				return tmp18;
			}
			;break;
			case (int)6: {
				HX_STACK_LINE(101)
				::String tmp18 = s6;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(101)
				return tmp18;
			}
			;break;
			case (int)7: {
				HX_STACK_LINE(102)
				::String tmp18 = s7;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(102)
				return tmp18;
			}
			;break;
			case (int)8: {
				HX_STACK_LINE(103)
				::String tmp18 = s8;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(103)
				return tmp18;
			}
			;break;
			case (int)9: {
				HX_STACK_LINE(104)
				::String tmp18 = s9;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(104)
				return tmp18;
			}
			;break;
			case (int)10: {
				HX_STACK_LINE(105)
				::String tmp18 = s10;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(105)
				return tmp18;
			}
			;break;
			case (int)11: {
				HX_STACK_LINE(106)
				::String tmp18 = s11;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(106)
				return tmp18;
			}
			;break;
			case (int)12: {
				HX_STACK_LINE(107)
				::String tmp18 = s12;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(107)
				return tmp18;
			}
			;break;
		}
	}
	HX_STACK_LINE(110)
	::String tmp10 = s1;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(110)
	return tmp10;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC12(Random_obj,pickstring,return )

int Random_obj::pickint( int s1,int s2,Dynamic s3,Dynamic s4,Dynamic s5,Dynamic s6,Dynamic s7,Dynamic s8,Dynamic s9,Dynamic s10,Dynamic s11,Dynamic s12){
	HX_STACK_FRAME("haxegon.Random","pickint",0x66395931,"haxegon.Random.pickint","haxegon/Random.hx",116,0xd956af4c)
	HX_STACK_ARG(s1,"s1")
	HX_STACK_ARG(s2,"s2")
	HX_STACK_ARG(s3,"s3")
	HX_STACK_ARG(s4,"s4")
	HX_STACK_ARG(s5,"s5")
	HX_STACK_ARG(s6,"s6")
	HX_STACK_ARG(s7,"s7")
	HX_STACK_ARG(s8,"s8")
	HX_STACK_ARG(s9,"s9")
	HX_STACK_ARG(s10,"s10")
	HX_STACK_ARG(s11,"s11")
	HX_STACK_ARG(s12,"s12")
	HX_STACK_LINE(117)
	::haxegon::Random_obj::temp = (int)2;
	HX_STACK_LINE(118)
	bool tmp = (s3 != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(118)
	if ((tmp)){
		HX_STACK_LINE(118)
		::haxegon::Random_obj::temp = (int)3;
	}
	HX_STACK_LINE(119)
	bool tmp1 = (s4 != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(119)
	if ((tmp1)){
		HX_STACK_LINE(119)
		::haxegon::Random_obj::temp = (int)4;
	}
	HX_STACK_LINE(120)
	bool tmp2 = (s5 != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(120)
	if ((tmp2)){
		HX_STACK_LINE(120)
		::haxegon::Random_obj::temp = (int)5;
	}
	HX_STACK_LINE(121)
	bool tmp3 = (s6 != null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(121)
	if ((tmp3)){
		HX_STACK_LINE(121)
		::haxegon::Random_obj::temp = (int)6;
	}
	HX_STACK_LINE(122)
	bool tmp4 = (s7 != null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(122)
	if ((tmp4)){
		HX_STACK_LINE(122)
		::haxegon::Random_obj::temp = (int)7;
	}
	HX_STACK_LINE(123)
	bool tmp5 = (s8 != null());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(123)
	if ((tmp5)){
		HX_STACK_LINE(123)
		::haxegon::Random_obj::temp = (int)8;
	}
	HX_STACK_LINE(124)
	bool tmp6 = (s9 != null());		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(124)
	if ((tmp6)){
		HX_STACK_LINE(124)
		::haxegon::Random_obj::temp = (int)9;
	}
	HX_STACK_LINE(125)
	bool tmp7 = (s10 != null());		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(125)
	if ((tmp7)){
		HX_STACK_LINE(125)
		::haxegon::Random_obj::temp = (int)10;
	}
	HX_STACK_LINE(126)
	bool tmp8 = (s11 != null());		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(126)
	if ((tmp8)){
		HX_STACK_LINE(126)
		::haxegon::Random_obj::temp = (int)11;
	}
	HX_STACK_LINE(127)
	bool tmp9 = (s12 != null());		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(127)
	if ((tmp9)){
		HX_STACK_LINE(127)
		::haxegon::Random_obj::temp = (int)12;
	}
	HX_STACK_LINE(129)
	{
		HX_STACK_LINE(129)
		int tmp10 = ::haxegon::Random_obj::temp;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(129)
		int tmp11 = (tmp10 - (int)1);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(129)
		int tmp12 = (tmp11 + (int)1);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(129)
		Float tmp13 = ::haxegon::Random_obj::random();		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(129)
		Float tmp14 = (tmp12 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(129)
		int tmp15 = ::Math_obj::floor(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(129)
		int tmp16 = ((int)1 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(129)
		int _g = tmp16;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(129)
		int tmp17 = _g;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(129)
		switch( (int)(tmp17)){
			case (int)1: {
				HX_STACK_LINE(130)
				int tmp18 = s1;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(130)
				return tmp18;
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(131)
				int tmp18 = s2;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(131)
				return tmp18;
			}
			;break;
			case (int)3: {
				HX_STACK_LINE(132)
				Dynamic tmp18 = s3;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(132)
				return tmp18;
			}
			;break;
			case (int)4: {
				HX_STACK_LINE(133)
				Dynamic tmp18 = s4;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(133)
				return tmp18;
			}
			;break;
			case (int)5: {
				HX_STACK_LINE(134)
				Dynamic tmp18 = s5;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(134)
				return tmp18;
			}
			;break;
			case (int)6: {
				HX_STACK_LINE(135)
				Dynamic tmp18 = s6;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(135)
				return tmp18;
			}
			;break;
			case (int)7: {
				HX_STACK_LINE(136)
				Dynamic tmp18 = s7;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(136)
				return tmp18;
			}
			;break;
			case (int)8: {
				HX_STACK_LINE(137)
				Dynamic tmp18 = s8;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(137)
				return tmp18;
			}
			;break;
			case (int)9: {
				HX_STACK_LINE(138)
				Dynamic tmp18 = s9;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(138)
				return tmp18;
			}
			;break;
			case (int)10: {
				HX_STACK_LINE(139)
				Dynamic tmp18 = s10;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(139)
				return tmp18;
			}
			;break;
			case (int)11: {
				HX_STACK_LINE(140)
				Dynamic tmp18 = s11;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(140)
				return tmp18;
			}
			;break;
			case (int)12: {
				HX_STACK_LINE(141)
				Dynamic tmp18 = s12;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(141)
				return tmp18;
			}
			;break;
		}
	}
	HX_STACK_LINE(144)
	int tmp10 = s1;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(144)
	return tmp10;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC12(Random_obj,pickint,return )

Float Random_obj::pickfloat( Float s1,Float s2,Dynamic s3,Dynamic s4,Dynamic s5,Dynamic s6,Dynamic s7,Dynamic s8,Dynamic s9,Dynamic s10,Dynamic s11,Dynamic s12){
	HX_STACK_FRAME("haxegon.Random","pickfloat",0xae9d265e,"haxegon.Random.pickfloat","haxegon/Random.hx",150,0xd956af4c)
	HX_STACK_ARG(s1,"s1")
	HX_STACK_ARG(s2,"s2")
	HX_STACK_ARG(s3,"s3")
	HX_STACK_ARG(s4,"s4")
	HX_STACK_ARG(s5,"s5")
	HX_STACK_ARG(s6,"s6")
	HX_STACK_ARG(s7,"s7")
	HX_STACK_ARG(s8,"s8")
	HX_STACK_ARG(s9,"s9")
	HX_STACK_ARG(s10,"s10")
	HX_STACK_ARG(s11,"s11")
	HX_STACK_ARG(s12,"s12")
	HX_STACK_LINE(151)
	::haxegon::Random_obj::temp = (int)2;
	HX_STACK_LINE(152)
	bool tmp = (s3 != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(152)
	if ((tmp)){
		HX_STACK_LINE(152)
		::haxegon::Random_obj::temp = (int)3;
	}
	HX_STACK_LINE(153)
	bool tmp1 = (s4 != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(153)
	if ((tmp1)){
		HX_STACK_LINE(153)
		::haxegon::Random_obj::temp = (int)4;
	}
	HX_STACK_LINE(154)
	bool tmp2 = (s5 != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(154)
	if ((tmp2)){
		HX_STACK_LINE(154)
		::haxegon::Random_obj::temp = (int)5;
	}
	HX_STACK_LINE(155)
	bool tmp3 = (s6 != null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(155)
	if ((tmp3)){
		HX_STACK_LINE(155)
		::haxegon::Random_obj::temp = (int)6;
	}
	HX_STACK_LINE(156)
	bool tmp4 = (s7 != null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(156)
	if ((tmp4)){
		HX_STACK_LINE(156)
		::haxegon::Random_obj::temp = (int)7;
	}
	HX_STACK_LINE(157)
	bool tmp5 = (s8 != null());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(157)
	if ((tmp5)){
		HX_STACK_LINE(157)
		::haxegon::Random_obj::temp = (int)8;
	}
	HX_STACK_LINE(158)
	bool tmp6 = (s9 != null());		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(158)
	if ((tmp6)){
		HX_STACK_LINE(158)
		::haxegon::Random_obj::temp = (int)9;
	}
	HX_STACK_LINE(159)
	bool tmp7 = (s10 != null());		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(159)
	if ((tmp7)){
		HX_STACK_LINE(159)
		::haxegon::Random_obj::temp = (int)10;
	}
	HX_STACK_LINE(160)
	bool tmp8 = (s11 != null());		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(160)
	if ((tmp8)){
		HX_STACK_LINE(160)
		::haxegon::Random_obj::temp = (int)11;
	}
	HX_STACK_LINE(161)
	bool tmp9 = (s12 != null());		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(161)
	if ((tmp9)){
		HX_STACK_LINE(161)
		::haxegon::Random_obj::temp = (int)12;
	}
	HX_STACK_LINE(163)
	{
		HX_STACK_LINE(163)
		int tmp10 = ::haxegon::Random_obj::temp;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(163)
		int tmp11 = (tmp10 - (int)1);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(163)
		int tmp12 = (tmp11 + (int)1);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(163)
		Float tmp13 = ::haxegon::Random_obj::random();		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(163)
		Float tmp14 = (tmp12 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(163)
		int tmp15 = ::Math_obj::floor(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(163)
		int tmp16 = ((int)1 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(163)
		int _g = tmp16;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(163)
		int tmp17 = _g;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(163)
		switch( (int)(tmp17)){
			case (int)1: {
				HX_STACK_LINE(164)
				Float tmp18 = s1;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(164)
				return tmp18;
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(165)
				Float tmp18 = s2;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(165)
				return tmp18;
			}
			;break;
			case (int)3: {
				HX_STACK_LINE(166)
				Dynamic tmp18 = s3;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(166)
				return tmp18;
			}
			;break;
			case (int)4: {
				HX_STACK_LINE(167)
				Dynamic tmp18 = s4;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(167)
				return tmp18;
			}
			;break;
			case (int)5: {
				HX_STACK_LINE(168)
				Dynamic tmp18 = s5;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(168)
				return tmp18;
			}
			;break;
			case (int)6: {
				HX_STACK_LINE(169)
				Dynamic tmp18 = s6;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(169)
				return tmp18;
			}
			;break;
			case (int)7: {
				HX_STACK_LINE(170)
				Dynamic tmp18 = s7;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(170)
				return tmp18;
			}
			;break;
			case (int)8: {
				HX_STACK_LINE(171)
				Dynamic tmp18 = s8;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(171)
				return tmp18;
			}
			;break;
			case (int)9: {
				HX_STACK_LINE(172)
				Dynamic tmp18 = s9;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(172)
				return tmp18;
			}
			;break;
			case (int)10: {
				HX_STACK_LINE(173)
				Dynamic tmp18 = s10;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(173)
				return tmp18;
			}
			;break;
			case (int)11: {
				HX_STACK_LINE(174)
				Dynamic tmp18 = s11;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(174)
				return tmp18;
			}
			;break;
			case (int)12: {
				HX_STACK_LINE(175)
				Dynamic tmp18 = s12;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(175)
				return tmp18;
			}
			;break;
		}
	}
	HX_STACK_LINE(178)
	Float tmp10 = s1;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(178)
	return tmp10;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC12(Random_obj,pickfloat,return )

Dynamic Random_obj::pick( cpp::ArrayBase arr){
	HX_STACK_FRAME("haxegon.Random","pick",0xa359567e,"haxegon.Random.pick","haxegon/Random.hx",181,0xd956af4c)
	HX_STACK_ARG(arr,"arr")
	HX_STACK_LINE(182)
	int tmp = (arr->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ) - (int)1);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(182)
	int tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(182)
	int tmp2 = (tmp1 + (int)1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(182)
	Float tmp3 = ::haxegon::Random_obj::random();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(182)
	Float tmp4 = (tmp2 * tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(182)
	int tmp5 = ::Math_obj::floor(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(182)
	int tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(182)
	Dynamic tmp7 = arr->__GetItem(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(182)
	return tmp7;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Random_obj,pick,return )

Float Random_obj::random( ){
	HX_STACK_FRAME("haxegon.Random","random",0x65fcf0e0,"haxegon.Random.random","haxegon/Random.hx",185,0xd956af4c)
	HX_STACK_LINE(186)
	int tmp = ::haxegon::Random_obj::seed;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(186)
	int tmp1 = (tmp * (int)16807);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(186)
	int tmp2 = hx::Mod(tmp1,(int)2147483647);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(186)
	::haxegon::Random_obj::seed = tmp2;
	HX_STACK_LINE(187)
	int tmp3 = ::haxegon::Random_obj::seed;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(187)
	Float tmp4 = (Float(tmp3) / Float((int)2147483647));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(187)
	Float tmp5 = ::Math_obj::abs(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(187)
	return tmp5;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Random_obj,random,return )

Void Random_obj::setseed( int s){
{
		HX_STACK_FRAME("haxegon.Random","setseed",0x18a2cc96,"haxegon.Random.setseed","haxegon/Random.hx",190,0xd956af4c)
		HX_STACK_ARG(s,"s")
		HX_STACK_LINE(191)
		int tmp = hx::Mod(s,(int)2147483647);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(191)
		Float tmp1 = ::Math_obj::abs(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(191)
		int tmp2 = ::Std_obj::_int(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(191)
		::haxegon::Random_obj::seed = tmp2;
		HX_STACK_LINE(192)
		::Math_obj::random();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Random_obj,setseed,(void))

int Random_obj::temp;

int Random_obj::seed;


Random_obj::Random_obj()
{
}

bool Random_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"int") ) { outValue = _int_dyn(); return true;  }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"bool") ) { outValue = _bool_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"rare") ) { outValue = rare_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"pick") ) { outValue = pick_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"temp") ) { outValue = temp; return true;  }
		if (HX_FIELD_EQ(inName,"seed") ) { outValue = seed; return true;  }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"float") ) { outValue = _float_dyn(); return true;  }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"chance") ) { outValue = chance_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"string") ) { outValue = string_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"random") ) { outValue = random_dyn(); return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"pickint") ) { outValue = pickint_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"setseed") ) { outValue = setseed_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"pickfloat") ) { outValue = pickfloat_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"occasional") ) { outValue = occasional_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"pickstring") ) { outValue = pickstring_dyn(); return true;  }
	}
	return false;
}

bool Random_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"temp") ) { temp=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"seed") ) { seed=ioValue.Cast< int >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &Random_obj::temp,HX_HCSTRING("temp","\x14","\xc3","\xf9","\x4c")},
	{hx::fsInt,(void *) &Random_obj::seed,HX_HCSTRING("seed","\x71","\x85","\x50","\x4c")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Random_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Random_obj::temp,"temp");
	HX_MARK_MEMBER_NAME(Random_obj::seed,"seed");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Random_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Random_obj::temp,"temp");
	HX_VISIT_MEMBER_NAME(Random_obj::seed,"seed");
};

#endif

hx::Class Random_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("bool","\x2a","\x84","\x1b","\x41"),
	HX_HCSTRING("occasional","\x92","\x99","\x99","\x8d"),
	HX_HCSTRING("rare","\x22","\x51","\xa4","\x4b"),
	HX_HCSTRING("chance","\xf4","\x8d","\x72","\xb7"),
	HX_HCSTRING("int","\xef","\x0c","\x50","\x00"),
	HX_HCSTRING("float","\x9c","\xc5","\x96","\x02"),
	HX_HCSTRING("string","\xd1","\x28","\x30","\x11"),
	HX_HCSTRING("pickstring","\x72","\x70","\xc3","\x36"),
	HX_HCSTRING("pickint","\xae","\x26","\x92","\x74"),
	HX_HCSTRING("pickfloat","\x1b","\x0d","\xe2","\x9e"),
	HX_HCSTRING("pick","\xe1","\xe8","\x57","\x4a"),
	HX_HCSTRING("random","\x03","\x22","\x8f","\xb7"),
	HX_HCSTRING("setseed","\x13","\x9a","\xfb","\x26"),
	HX_HCSTRING("temp","\x14","\xc3","\xf9","\x4c"),
	HX_HCSTRING("seed","\x71","\x85","\x50","\x4c"),
	::String(null()) };

void Random_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxegon.Random","\xf1","\xd7","\x23","\xfb");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Random_obj::__GetStatic;
	__mClass->mSetStaticField = &Random_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Random_obj >;
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

void Random_obj::__boot()
{
	seed= (int)0;
}

} // end namespace haxegon
