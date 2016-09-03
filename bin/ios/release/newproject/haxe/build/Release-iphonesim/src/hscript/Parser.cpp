#include <hxcpp.h>

#ifndef INCLUDED_List
#include <List.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_io_BytesInput
#include <haxe/io/BytesInput.h>
#endif
#ifndef INCLUDED_haxe_io_BytesOutput
#include <haxe/io/BytesOutput.h>
#endif
#ifndef INCLUDED_haxe_io_Input
#include <haxe/io/Input.h>
#endif
#ifndef INCLUDED_haxe_io_Output
#include <haxe/io/Output.h>
#endif
#ifndef INCLUDED_haxe_io_StringInput
#include <haxe/io/StringInput.h>
#endif
#ifndef INCLUDED_hscript_CType
#include <hscript/CType.h>
#endif
#ifndef INCLUDED_hscript_Const
#include <hscript/Const.h>
#endif
#ifndef INCLUDED_hscript_Error
#include <hscript/Error.h>
#endif
#ifndef INCLUDED_hscript_ErrorDef
#include <hscript/ErrorDef.h>
#endif
#ifndef INCLUDED_hscript_ExprDef
#include <hscript/ExprDef.h>
#endif
#ifndef INCLUDED_hscript_Parser
#include <hscript/Parser.h>
#endif
#ifndef INCLUDED_hscript_Token
#include <hscript/Token.h>
#endif
namespace hscript{

Void Parser_obj::__construct()
{
HX_STACK_FRAME("hscript.Parser","new",0x4b9f158c,"hscript.Parser.new","hscript/Parser.hx",46,0x98735743)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(77)
	this->uid = (int)0;
	HX_STACK_LINE(101)
	this->line = (int)1;
	HX_STACK_LINE(102)
	this->opChars = HX_HCSTRING("+*/-=!><&|^%~","\xe2","\xec","\xc4","\xdc");
	HX_STACK_LINE(103)
	this->identChars = HX_HCSTRING("ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789_","\xe0","\xb5","\x3b","\x15");
	HX_STACK_LINE(104)
	Array< ::Dynamic > priorities = Array_obj< ::Dynamic >::__new().Add(Array_obj< ::String >::__new().Add(HX_HCSTRING("%","\x25","\x00","\x00","\x00"))).Add(Array_obj< ::String >::__new().Add(HX_HCSTRING("*","\x2a","\x00","\x00","\x00")).Add(HX_HCSTRING("/","\x2f","\x00","\x00","\x00"))).Add(Array_obj< ::String >::__new().Add(HX_HCSTRING("+","\x2b","\x00","\x00","\x00")).Add(HX_HCSTRING("-","\x2d","\x00","\x00","\x00"))).Add(Array_obj< ::String >::__new().Add(HX_HCSTRING("<<","\x80","\x34","\x00","\x00")).Add(HX_HCSTRING(">>","\x40","\x36","\x00","\x00")).Add(HX_HCSTRING(">>>","\xfe","\x41","\x2f","\x00"))).Add(Array_obj< ::String >::__new().Add(HX_HCSTRING("|","\x7c","\x00","\x00","\x00")).Add(HX_HCSTRING("&","\x26","\x00","\x00","\x00")).Add(HX_HCSTRING("^","\x5e","\x00","\x00","\x00"))).Add(Array_obj< ::String >::__new().Add(HX_HCSTRING("==","\x60","\x35","\x00","\x00")).Add(HX_HCSTRING("!=","\xfc","\x1c","\x00","\x00")).Add(HX_HCSTRING(">","\x3e","\x00","\x00","\x00")).Add(HX_HCSTRING("<","\x3c","\x00","\x00","\x00")).Add(HX_HCSTRING(">=","\x3f","\x36","\x00","\x00")).Add(HX_HCSTRING("<=","\x81","\x34","\x00","\x00"))).Add(Array_obj< ::String >::__new().Add(HX_HCSTRING("...","\xee","\x0f","\x23","\x00"))).Add(Array_obj< ::String >::__new().Add(HX_HCSTRING("&&","\x40","\x21","\x00","\x00"))).Add(Array_obj< ::String >::__new().Add(HX_HCSTRING("||","\x80","\x6c","\x00","\x00"))).Add(Array_obj< ::String >::__new().Add(HX_HCSTRING("=","\x3d","\x00","\x00","\x00")).Add(HX_HCSTRING("+=","\xb2","\x25","\x00","\x00")).Add(HX_HCSTRING("-=","\x70","\x27","\x00","\x00")).Add(HX_HCSTRING("*=","\xd3","\x24","\x00","\x00")).Add(HX_HCSTRING("/=","\x2e","\x29","\x00","\x00")).Add(HX_HCSTRING("%=","\x78","\x20","\x00","\x00")).Add(HX_HCSTRING("<<=","\xbd","\xbb","\x2d","\x00")).Add(HX_HCSTRING(">>=","\xfd","\x41","\x2f","\x00")).Add(HX_HCSTRING(">>>=","\x7f","\x7c","\x2a","\x29")).Add(HX_HCSTRING("|=","\x41","\x6c","\x00","\x00")).Add(HX_HCSTRING("&=","\x57","\x21","\x00","\x00")).Add(HX_HCSTRING("^=","\x1f","\x52","\x00","\x00")));		HX_STACK_VAR(priorities,"priorities");
	HX_STACK_LINE(117)
	::haxe::ds::StringMap tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(117)
	{
		HX_STACK_LINE(117)
		::haxe::ds::StringMap tmp1 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(117)
		::haxe::ds::StringMap tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(117)
		tmp = tmp2;
	}
	HX_STACK_LINE(117)
	this->opPriority = tmp;
	HX_STACK_LINE(118)
	::haxe::ds::StringMap tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(118)
	{
		HX_STACK_LINE(118)
		::haxe::ds::StringMap tmp2 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(118)
		::haxe::ds::StringMap tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(118)
		tmp1 = tmp3;
	}
	HX_STACK_LINE(118)
	this->opRightAssoc = tmp1;
	HX_STACK_LINE(119)
	::haxe::ds::StringMap tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(119)
	{
		HX_STACK_LINE(119)
		::haxe::ds::StringMap tmp3 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(119)
		::haxe::ds::StringMap tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(119)
		tmp2 = tmp4;
	}
	HX_STACK_LINE(119)
	this->unops = tmp2;
	HX_STACK_LINE(125)
	{
		HX_STACK_LINE(125)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(125)
		int _g = priorities->length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(125)
		while((true)){
			HX_STACK_LINE(125)
			bool tmp3 = (_g1 < _g);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(125)
			bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(125)
			if ((tmp4)){
				HX_STACK_LINE(125)
				break;
			}
			HX_STACK_LINE(125)
			int tmp5 = (_g1)++;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(125)
			int i = tmp5;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(126)
			int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(126)
			Array< ::String > _g3 = priorities->__get(i).StaticCast< Array< ::String > >();		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(126)
			while((true)){
				HX_STACK_LINE(126)
				bool tmp6 = (_g2 < _g3->length);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(126)
				bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(126)
				if ((tmp7)){
					HX_STACK_LINE(126)
					break;
				}
				HX_STACK_LINE(126)
				::String tmp8 = _g3->__get(_g2);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(126)
				::String x = tmp8;		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(126)
				++(_g2);
				HX_STACK_LINE(127)
				::haxe::ds::StringMap tmp9 = this->opPriority;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(127)
				::String tmp10 = x;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(127)
				int tmp11 = i;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(127)
				tmp9->set(tmp10,tmp11);
				HX_STACK_LINE(128)
				bool tmp12 = (i == (int)9);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(128)
				if ((tmp12)){
					HX_STACK_LINE(128)
					::haxe::ds::StringMap tmp13 = this->opRightAssoc;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(128)
					::String tmp14 = x;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(128)
					tmp13->set(tmp14,true);
				}
			}
		}
	}
	HX_STACK_LINE(130)
	{
		HX_STACK_LINE(130)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(130)
		Array< ::String > _g1 = Array_obj< ::String >::__new().Add(HX_HCSTRING("!","\x21","\x00","\x00","\x00")).Add(HX_HCSTRING("++","\xa0","\x25","\x00","\x00")).Add(HX_HCSTRING("--","\x60","\x27","\x00","\x00")).Add(HX_HCSTRING("-","\x2d","\x00","\x00","\x00")).Add(HX_HCSTRING("~","\x7e","\x00","\x00","\x00"));		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(130)
		while((true)){
			HX_STACK_LINE(130)
			bool tmp3 = (_g < _g1->length);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(130)
			bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(130)
			if ((tmp4)){
				HX_STACK_LINE(130)
				break;
			}
			HX_STACK_LINE(130)
			::String tmp5 = _g1->__get(_g);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(130)
			::String x = tmp5;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(130)
			++(_g);
			HX_STACK_LINE(131)
			::haxe::ds::StringMap tmp6 = this->unops;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(131)
			::String tmp7 = x;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(131)
			bool tmp8 = (x == HX_HCSTRING("++","\xa0","\x25","\x00","\x00"));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(131)
			bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(131)
			bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(131)
			if ((tmp9)){
				HX_STACK_LINE(131)
				tmp10 = (x == HX_HCSTRING("--","\x60","\x27","\x00","\x00"));
			}
			else{
				HX_STACK_LINE(131)
				tmp10 = true;
			}
			HX_STACK_LINE(131)
			tmp6->set(tmp7,tmp10);
		}
	}
}
;
	return null();
}

//Parser_obj::~Parser_obj() { }

Dynamic Parser_obj::__CreateEmpty() { return  new Parser_obj; }
hx::ObjectPtr< Parser_obj > Parser_obj::__new()
{  hx::ObjectPtr< Parser_obj > _result_ = new Parser_obj();
	_result_->__construct();
	return _result_;}

Dynamic Parser_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Parser_obj > _result_ = new Parser_obj();
	_result_->__construct();
	return _result_;}

Void Parser_obj::error( ::hscript::ErrorDef err,int pmin,int pmax){
{
		HX_STACK_FRAME("hscript.Parser","error",0x9bb1b3f4,"hscript.Parser.error","hscript/Parser.hx",134,0x98735743)
		HX_STACK_THIS(this)
		HX_STACK_ARG(err,"err")
		HX_STACK_ARG(pmin,"pmin")
		HX_STACK_ARG(pmax,"pmax")
		HX_STACK_LINE(136)
		::hscript::Error tmp = ::hscript::Error_obj::__new(err,pmin,pmax);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(136)
		HX_STACK_DO_THROW(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Parser_obj,error,(void))

Void Parser_obj::invalidChar( int c){
{
		HX_STACK_FRAME("hscript.Parser","invalidChar",0x0ae4fe99,"hscript.Parser.invalidChar","hscript/Parser.hx",143,0x98735743)
		HX_STACK_THIS(this)
		HX_STACK_ARG(c,"c")
		HX_STACK_LINE(143)
		int tmp = c;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(143)
		::hscript::ErrorDef tmp1 = ::hscript::ErrorDef_obj::EInvalidChar(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(143)
		::hscript::ErrorDef err = tmp1;		HX_STACK_VAR(err,"err");
		HX_STACK_LINE(143)
		::hscript::ErrorDef tmp2 = err;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(143)
		int tmp3 = this->readPos;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(143)
		int tmp4 = this->readPos;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(143)
		::hscript::Error tmp5 = ::hscript::Error_obj::__new(tmp2,tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(143)
		HX_STACK_DO_THROW(tmp5);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Parser_obj,invalidChar,(void))

Dynamic Parser_obj::parseString( ::String s){
	HX_STACK_FRAME("hscript.Parser","parseString",0xed832690,"hscript.Parser.parseString","hscript/Parser.hx",146,0x98735743)
	HX_STACK_THIS(this)
	HX_STACK_ARG(s,"s")
	HX_STACK_LINE(147)
	this->line = (int)1;
	HX_STACK_LINE(148)
	this->uid = (int)0;
	HX_STACK_LINE(149)
	::haxe::io::StringInput tmp = ::haxe::io::StringInput_obj::__new(s);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(149)
	Dynamic tmp1 = this->parse(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(149)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(Parser_obj,parseString,return )

Dynamic Parser_obj::parse( ::haxe::io::Input s){
	HX_STACK_FRAME("hscript.Parser","parse",0xe5dd785f,"hscript.Parser.parse","hscript/Parser.hx",152,0x98735743)
	HX_STACK_THIS(this)
	HX_STACK_ARG(s,"s")
	HX_STACK_LINE(154)
	this->readPos = (int)0;
	HX_STACK_LINE(155)
	int tmp = this->oldTokenMin = (int)0;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(155)
	this->tokenMin = tmp;
	HX_STACK_LINE(156)
	int tmp1 = this->oldTokenMax = (int)0;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(156)
	this->tokenMax = tmp1;
	HX_STACK_LINE(157)
	::List tmp2 = ::List_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(157)
	this->tokens = tmp2;
	HX_STACK_LINE(163)
	this->_char = (int)-1;
	HX_STACK_LINE(164)
	this->input = s;
	HX_STACK_LINE(165)
	this->ops = Array_obj< bool >::__new();
	HX_STACK_LINE(166)
	this->idents = Array_obj< bool >::__new();
	HX_STACK_LINE(167)
	{
		HX_STACK_LINE(167)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(167)
		::String tmp3 = this->opChars;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(167)
		int _g = tmp3.length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(167)
		while((true)){
			HX_STACK_LINE(167)
			bool tmp4 = (_g1 < _g);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(167)
			bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(167)
			if ((tmp5)){
				HX_STACK_LINE(167)
				break;
			}
			HX_STACK_LINE(167)
			int tmp6 = (_g1)++;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(167)
			int i = tmp6;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(168)
			::String tmp7 = this->opChars;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(168)
			int tmp8 = i;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(168)
			Dynamic tmp9 = tmp7.charCodeAt(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(168)
			this->ops[tmp9] = true;
		}
	}
	HX_STACK_LINE(169)
	{
		HX_STACK_LINE(169)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(169)
		::String tmp3 = this->identChars;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(169)
		int _g = tmp3.length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(169)
		while((true)){
			HX_STACK_LINE(169)
			bool tmp4 = (_g1 < _g);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(169)
			bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(169)
			if ((tmp5)){
				HX_STACK_LINE(169)
				break;
			}
			HX_STACK_LINE(169)
			int tmp6 = (_g1)++;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(169)
			int i = tmp6;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(170)
			::String tmp7 = this->identChars;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(170)
			int tmp8 = i;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(170)
			Dynamic tmp9 = tmp7.charCodeAt(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(170)
			this->idents[tmp9] = true;
		}
	}
	HX_STACK_LINE(171)
	cpp::ArrayBase a = Dynamic( Array_obj<Dynamic>::__new() );		HX_STACK_VAR(a,"a");
	HX_STACK_LINE(172)
	while((true)){
		HX_STACK_LINE(173)
		::hscript::Token tmp3 = this->token();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(173)
		::hscript::Token tk = tmp3;		HX_STACK_VAR(tk,"tk");
		HX_STACK_LINE(174)
		bool tmp4 = (tk == ::hscript::Token_obj::TEof);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(174)
		if ((tmp4)){
			HX_STACK_LINE(174)
			break;
		}
		HX_STACK_LINE(175)
		{
			HX_STACK_LINE(175)
			::List tmp5 = this->tokens;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(175)
			::hscript::Token tmp6 = tk;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(175)
			int tmp7 = this->tokenMin;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(175)
			int tmp8 = this->tokenMax;		HX_STACK_VAR(tmp8,"tmp8");
			struct _Function_3_1{
				inline static Dynamic Block( ::hscript::Token &tmp6,int &tmp7,int &tmp8){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","hscript/Parser.hx",175,0x98735743)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_HCSTRING("t","\x74","\x00","\x00","\x00") , tmp6,false);
						__result->Add(HX_HCSTRING("min","\x92","\x11","\x53","\x00") , tmp7,false);
						__result->Add(HX_HCSTRING("max","\xa4","\x0a","\x53","\x00") , tmp8,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(175)
			Dynamic tmp9 = _Function_3_1::Block(tmp6,tmp7,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(175)
			tmp5->push(tmp9);
			HX_STACK_LINE(175)
			int tmp10 = this->oldTokenMin;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(175)
			this->tokenMin = tmp10;
			HX_STACK_LINE(175)
			int tmp11 = this->oldTokenMax;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(175)
			this->tokenMax = tmp11;
		}
		HX_STACK_LINE(176)
		Dynamic tmp5 = this->parseFullExpr();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(176)
		a->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp5);
	}
	HX_STACK_LINE(178)
	bool tmp3 = (a->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ) == (int)1);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(178)
	Dynamic tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(178)
	if ((tmp3)){
		HX_STACK_LINE(178)
		tmp4 = a->__GetItem((int)0);
	}
	else{
		HX_STACK_LINE(178)
		::hscript::ExprDef tmp5 = ::hscript::ExprDef_obj::EBlock(a);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(178)
		::hscript::ExprDef e = tmp5;		HX_STACK_VAR(e,"e");
		HX_STACK_LINE(178)
		Dynamic pmin = (int)0;		HX_STACK_VAR(pmin,"pmin");
		HX_STACK_LINE(178)
		Dynamic pmax = null();		HX_STACK_VAR(pmax,"pmax");
		HX_STACK_LINE(178)
		bool tmp6 = (pmin == null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(178)
		if ((tmp6)){
			HX_STACK_LINE(178)
			int tmp7 = this->tokenMin;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(178)
			pmin = tmp7;
		}
		HX_STACK_LINE(178)
		bool tmp7 = (pmax == null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(178)
		if ((tmp7)){
			HX_STACK_LINE(178)
			int tmp8 = this->tokenMax;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(178)
			pmax = tmp8;
		}
		struct _Function_2_1{
			inline static Dynamic Block( Dynamic &pmax,::hscript::ExprDef &e,Dynamic &pmin){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","hscript/Parser.hx",178,0x98735743)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("e","\x65","\x00","\x00","\x00") , e,false);
					__result->Add(HX_HCSTRING("pmin","\x22","\xf7","\x5a","\x4a") , pmin,false);
					__result->Add(HX_HCSTRING("pmax","\x34","\xf0","\x5a","\x4a") , pmax,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(178)
		tmp4 = _Function_2_1::Block(pmax,e,pmin);
	}
	HX_STACK_LINE(178)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(Parser_obj,parse,return )

Dynamic Parser_obj::unexpected( ::hscript::Token tk){
	HX_STACK_FRAME("hscript.Parser","unexpected",0xb7770e25,"hscript.Parser.unexpected","hscript/Parser.hx",181,0x98735743)
	HX_STACK_THIS(this)
	HX_STACK_ARG(tk,"tk")
	HX_STACK_LINE(182)
	{
		HX_STACK_LINE(182)
		::hscript::Token tmp = tk;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(182)
		::String tmp1 = this->tokenString(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(182)
		::hscript::ErrorDef tmp2 = ::hscript::ErrorDef_obj::EUnexpected(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(182)
		::hscript::ErrorDef err = tmp2;		HX_STACK_VAR(err,"err");
		HX_STACK_LINE(182)
		::hscript::ErrorDef tmp3 = err;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(182)
		int tmp4 = this->tokenMin;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(182)
		int tmp5 = this->tokenMax;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(182)
		::hscript::Error tmp6 = ::hscript::Error_obj::__new(tmp3,tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(182)
		HX_STACK_DO_THROW(tmp6);
	}
	HX_STACK_LINE(183)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Parser_obj,unexpected,return )

Void Parser_obj::push( ::hscript::Token tk){
{
		HX_STACK_FRAME("hscript.Parser","push",0xe0f2532e,"hscript.Parser.push","hscript/Parser.hx",186,0x98735743)
		HX_STACK_THIS(this)
		HX_STACK_ARG(tk,"tk")
		HX_STACK_LINE(188)
		::List tmp = this->tokens;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(188)
		::hscript::Token tmp1 = tk;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(188)
		int tmp2 = this->tokenMin;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(188)
		int tmp3 = this->tokenMax;		HX_STACK_VAR(tmp3,"tmp3");
		struct _Function_1_1{
			inline static Dynamic Block( int &tmp2,int &tmp3,::hscript::Token &tmp1){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","hscript/Parser.hx",188,0x98735743)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("t","\x74","\x00","\x00","\x00") , tmp1,false);
					__result->Add(HX_HCSTRING("min","\x92","\x11","\x53","\x00") , tmp2,false);
					__result->Add(HX_HCSTRING("max","\xa4","\x0a","\x53","\x00") , tmp3,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(188)
		Dynamic tmp4 = _Function_1_1::Block(tmp2,tmp3,tmp1);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(188)
		tmp->push(tmp4);
		HX_STACK_LINE(189)
		int tmp5 = this->oldTokenMin;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(189)
		this->tokenMin = tmp5;
		HX_STACK_LINE(190)
		int tmp6 = this->oldTokenMax;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(190)
		this->tokenMax = tmp6;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Parser_obj,push,(void))

Void Parser_obj::ensure( ::hscript::Token tk){
{
		HX_STACK_FRAME("hscript.Parser","ensure",0x52df3412,"hscript.Parser.ensure","hscript/Parser.hx",196,0x98735743)
		HX_STACK_THIS(this)
		HX_STACK_ARG(tk,"tk")
		HX_STACK_LINE(197)
		::hscript::Token tmp = this->token();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(197)
		::hscript::Token t = tmp;		HX_STACK_VAR(t,"t");
		HX_STACK_LINE(198)
		bool tmp1 = (t != tk);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(198)
		if ((tmp1)){
			HX_STACK_LINE(198)
			::hscript::Token tmp2 = t;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(198)
			this->unexpected(tmp2);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Parser_obj,ensure,(void))

::hscript::ExprDef Parser_obj::expr( Dynamic e){
	HX_STACK_FRAME("hscript.Parser","expr",0xd9af3e89,"hscript.Parser.expr","hscript/Parser.hx",201,0x98735743)
	HX_STACK_THIS(this)
	HX_STACK_ARG(e,"e")
	HX_STACK_LINE(203)
	::hscript::ExprDef tmp = e->__Field(HX_HCSTRING("e","\x65","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(203)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Parser_obj,expr,return )

int Parser_obj::pmin( Dynamic e){
	HX_STACK_FRAME("hscript.Parser","pmin",0xe0ec3876,"hscript.Parser.pmin","hscript/Parser.hx",209,0x98735743)
	HX_STACK_THIS(this)
	HX_STACK_ARG(e,"e")
	HX_STACK_LINE(211)
	int tmp = e->__Field(HX_HCSTRING("pmin","\x22","\xf7","\x5a","\x4a"), hx::paccDynamic );		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(211)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Parser_obj,pmin,return )

int Parser_obj::pmax( Dynamic e){
	HX_STACK_FRAME("hscript.Parser","pmax",0xe0ec3188,"hscript.Parser.pmax","hscript/Parser.hx",217,0x98735743)
	HX_STACK_THIS(this)
	HX_STACK_ARG(e,"e")
	HX_STACK_LINE(219)
	int tmp = e->__Field(HX_HCSTRING("pmax","\x34","\xf0","\x5a","\x4a"), hx::paccDynamic );		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(219)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Parser_obj,pmax,return )

Dynamic Parser_obj::mk( ::hscript::ExprDef e,Dynamic pmin,Dynamic pmax){
	HX_STACK_FRAME("hscript.Parser","mk",0xd828e3b2,"hscript.Parser.mk","hscript/Parser.hx",225,0x98735743)
	HX_STACK_THIS(this)
	HX_STACK_ARG(e,"e")
	HX_STACK_ARG(pmin,"pmin")
	HX_STACK_ARG(pmax,"pmax")
	HX_STACK_LINE(227)
	bool tmp = (pmin == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(227)
	if ((tmp)){
		HX_STACK_LINE(227)
		int tmp1 = this->tokenMin;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(227)
		pmin = tmp1;
	}
	HX_STACK_LINE(228)
	bool tmp1 = (pmax == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(228)
	if ((tmp1)){
		HX_STACK_LINE(228)
		int tmp2 = this->tokenMax;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(228)
		pmax = tmp2;
	}
	struct _Function_1_1{
		inline static Dynamic Block( Dynamic &pmax,::hscript::ExprDef &e,Dynamic &pmin){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","hscript/Parser.hx",229,0x98735743)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("e","\x65","\x00","\x00","\x00") , e,false);
				__result->Add(HX_HCSTRING("pmin","\x22","\xf7","\x5a","\x4a") , pmin,false);
				__result->Add(HX_HCSTRING("pmax","\x34","\xf0","\x5a","\x4a") , pmax,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(229)
	Dynamic tmp2 = _Function_1_1::Block(pmax,e,pmin);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(229)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC3(Parser_obj,mk,return )

bool Parser_obj::isBlock( Dynamic e){
	HX_STACK_FRAME("hscript.Parser","isBlock",0x99f5642f,"hscript.Parser.isBlock","hscript/Parser.hx",235,0x98735743)
	HX_STACK_THIS(this)
	HX_STACK_ARG(e,"e")
	HX_STACK_LINE(236)
	bool tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(236)
	{
		HX_STACK_LINE(236)
		::hscript::ExprDef _g = e->__Field(HX_HCSTRING("e","\x65","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(236)
		switch( (int)(_g->__Index())){
			case (int)4: case (int)21: case (int)23: {
				HX_STACK_LINE(237)
				tmp = true;
			}
			;break;
			case (int)14: {
				HX_STACK_LINE(236)
				Dynamic tmp1 = (::hscript::ExprDef(_g))->__Param(1);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(236)
				Dynamic e1 = tmp1;		HX_STACK_VAR(e1,"e1");
				HX_STACK_LINE(238)
				{
					HX_STACK_LINE(238)
					Dynamic tmp2 = e1;		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(238)
					tmp = this->isBlock(tmp2);
				}
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(236)
				Dynamic tmp1 = (::hscript::ExprDef(_g))->__Param(2);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(236)
				Dynamic e1 = tmp1;		HX_STACK_VAR(e1,"e1");
				HX_STACK_LINE(239)
				{
					HX_STACK_LINE(239)
					bool tmp2 = (e1 != null());		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(239)
					if ((tmp2)){
						HX_STACK_LINE(239)
						Dynamic tmp3 = e1;		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(239)
						Dynamic tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(239)
						tmp = this->isBlock(tmp4);
					}
					else{
						HX_STACK_LINE(239)
						tmp = false;
					}
				}
			}
			;break;
			case (int)9: {
				HX_STACK_LINE(236)
				Dynamic tmp1 = (::hscript::ExprDef(_g))->__Param(2);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(236)
				Dynamic e2 = tmp1;		HX_STACK_VAR(e2,"e2");
				HX_STACK_LINE(236)
				Dynamic tmp2 = (::hscript::ExprDef(_g))->__Param(1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(236)
				Dynamic e1 = tmp2;		HX_STACK_VAR(e1,"e1");
				HX_STACK_LINE(240)
				{
					HX_STACK_LINE(240)
					bool tmp3 = (e2 != null());		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(240)
					if ((tmp3)){
						HX_STACK_LINE(240)
						Dynamic tmp4 = e2;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(240)
						tmp = this->isBlock(tmp4);
					}
					else{
						HX_STACK_LINE(240)
						Dynamic tmp4 = e1;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(240)
						tmp = this->isBlock(tmp4);
					}
				}
			}
			;break;
			case (int)6: {
				HX_STACK_LINE(236)
				Dynamic tmp1 = (::hscript::ExprDef(_g))->__Param(2);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(236)
				Dynamic e1 = tmp1;		HX_STACK_VAR(e1,"e1");
				HX_STACK_LINE(241)
				{
					HX_STACK_LINE(241)
					Dynamic tmp2 = e1;		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(241)
					tmp = this->isBlock(tmp2);
				}
			}
			;break;
			case (int)7: {
				HX_STACK_LINE(236)
				Dynamic tmp1 = (::hscript::ExprDef(_g))->__Param(2);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(236)
				Dynamic e1 = tmp1;		HX_STACK_VAR(e1,"e1");
				HX_STACK_LINE(236)
				bool tmp2 = (::hscript::ExprDef(_g))->__Param(1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(236)
				bool prefix = tmp2;		HX_STACK_VAR(prefix,"prefix");
				HX_STACK_LINE(242)
				{
					HX_STACK_LINE(242)
					bool tmp3 = prefix;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(242)
					bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(242)
					bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(242)
					if ((tmp5)){
						HX_STACK_LINE(242)
						Dynamic tmp6 = e1;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(242)
						Dynamic tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(242)
						tmp = this->isBlock(tmp7);
					}
					else{
						HX_STACK_LINE(242)
						tmp = false;
					}
				}
			}
			;break;
			case (int)10: {
				HX_STACK_LINE(236)
				Dynamic tmp1 = (::hscript::ExprDef(_g))->__Param(1);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(236)
				Dynamic e1 = tmp1;		HX_STACK_VAR(e1,"e1");
				HX_STACK_LINE(243)
				{
					HX_STACK_LINE(243)
					Dynamic tmp2 = e1;		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(243)
					tmp = this->isBlock(tmp2);
				}
			}
			;break;
			case (int)11: {
				HX_STACK_LINE(236)
				Dynamic tmp1 = (::hscript::ExprDef(_g))->__Param(2);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(236)
				Dynamic e1 = tmp1;		HX_STACK_VAR(e1,"e1");
				HX_STACK_LINE(244)
				{
					HX_STACK_LINE(244)
					Dynamic tmp2 = e1;		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(244)
					tmp = this->isBlock(tmp2);
				}
			}
			;break;
			case (int)15: {
				HX_STACK_LINE(236)
				Dynamic tmp1 = (::hscript::ExprDef(_g))->__Param(0);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(236)
				Dynamic e1 = tmp1;		HX_STACK_VAR(e1,"e1");
				HX_STACK_LINE(245)
				{
					HX_STACK_LINE(245)
					bool tmp2 = (e1 != null());		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(245)
					if ((tmp2)){
						HX_STACK_LINE(245)
						Dynamic tmp3 = e1;		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(245)
						Dynamic tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(245)
						tmp = this->isBlock(tmp4);
					}
					else{
						HX_STACK_LINE(245)
						tmp = false;
					}
				}
			}
			;break;
			case (int)20: {
				HX_STACK_LINE(236)
				Dynamic tmp1 = (::hscript::ExprDef(_g))->__Param(3);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(236)
				Dynamic e1 = tmp1;		HX_STACK_VAR(e1,"e1");
				HX_STACK_LINE(246)
				{
					HX_STACK_LINE(246)
					Dynamic tmp2 = e1;		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(246)
					tmp = this->isBlock(tmp2);
				}
			}
			;break;
			default: {
				HX_STACK_LINE(247)
				tmp = false;
			}
		}
	}
	HX_STACK_LINE(236)
	return tmp;
	HX_STACK_LINE(236)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(Parser_obj,isBlock,return )

Dynamic Parser_obj::parseFullExpr( ){
	HX_STACK_FRAME("hscript.Parser","parseFullExpr",0x2c8eb1e3,"hscript.Parser.parseFullExpr","hscript/Parser.hx",251,0x98735743)
	HX_STACK_THIS(this)
	HX_STACK_LINE(252)
	Dynamic tmp = this->parseExpr();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(252)
	Dynamic e = tmp;		HX_STACK_VAR(e,"e");
	HX_STACK_LINE(253)
	::hscript::Token tmp1 = this->token();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(253)
	::hscript::Token tk = tmp1;		HX_STACK_VAR(tk,"tk");
	HX_STACK_LINE(254)
	bool tmp2 = (tk != ::hscript::Token_obj::TSemicolon);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(254)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(254)
	if ((tmp2)){
		HX_STACK_LINE(254)
		tmp3 = (tk != ::hscript::Token_obj::TEof);
	}
	else{
		HX_STACK_LINE(254)
		tmp3 = false;
	}
	HX_STACK_LINE(254)
	if ((tmp3)){
		HX_STACK_LINE(255)
		Dynamic tmp4 = e;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(255)
		bool tmp5 = this->isBlock(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(255)
		if ((tmp5)){
			HX_STACK_LINE(256)
			::List tmp6 = this->tokens;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(256)
			::hscript::Token tmp7 = tk;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(256)
			int tmp8 = this->tokenMin;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(256)
			int tmp9 = this->tokenMax;		HX_STACK_VAR(tmp9,"tmp9");
			struct _Function_3_1{
				inline static Dynamic Block( int &tmp9,::hscript::Token &tmp7,int &tmp8){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","hscript/Parser.hx",256,0x98735743)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_HCSTRING("t","\x74","\x00","\x00","\x00") , tmp7,false);
						__result->Add(HX_HCSTRING("min","\x92","\x11","\x53","\x00") , tmp8,false);
						__result->Add(HX_HCSTRING("max","\xa4","\x0a","\x53","\x00") , tmp9,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(256)
			Dynamic tmp10 = _Function_3_1::Block(tmp9,tmp7,tmp8);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(256)
			tmp6->push(tmp10);
			HX_STACK_LINE(256)
			int tmp11 = this->oldTokenMin;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(256)
			this->tokenMin = tmp11;
			HX_STACK_LINE(256)
			int tmp12 = this->oldTokenMax;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(256)
			this->tokenMax = tmp12;
		}
		else{
			HX_STACK_LINE(258)
			::hscript::Token tmp6 = tk;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(258)
			this->unexpected(tmp6);
		}
	}
	HX_STACK_LINE(260)
	Dynamic tmp4 = e;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(260)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC0(Parser_obj,parseFullExpr,return )

Dynamic Parser_obj::parseObject( Dynamic p1){
	HX_STACK_FRAME("hscript.Parser","parseObject",0xf1927c7e,"hscript.Parser.parseObject","hscript/Parser.hx",263,0x98735743)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p1,"p1")
	HX_STACK_LINE(265)
	cpp::ArrayBase fl = Dynamic( Array_obj<Dynamic>::__new() );		HX_STACK_VAR(fl,"fl");
	HX_STACK_LINE(266)
	while((true)){
		HX_STACK_LINE(267)
		::hscript::Token tmp = this->token();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(267)
		::hscript::Token tk = tmp;		HX_STACK_VAR(tk,"tk");
		HX_STACK_LINE(268)
		::String id = null();		HX_STACK_VAR(id,"id");
		HX_STACK_LINE(269)
		int _switch_1 = (tk->__Index());
		if (  ( _switch_1==(int)2)){
			HX_STACK_LINE(269)
			::String tmp1 = (::hscript::Token(tk))->__Param(0);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(269)
			::String i = tmp1;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(270)
			id = i;
		}
		else if (  ( _switch_1==(int)1)){
			HX_STACK_LINE(269)
			::hscript::Const tmp1 = (::hscript::Token(tk))->__Param(0);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(269)
			::hscript::Const c = tmp1;		HX_STACK_VAR(c,"c");
			HX_STACK_LINE(271)
			{
				HX_STACK_LINE(272)
				bool tmp2 = this->allowJSON;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(272)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(272)
				if ((tmp3)){
					HX_STACK_LINE(273)
					::hscript::Token tmp4 = tk;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(273)
					this->unexpected(tmp4);
				}
				HX_STACK_LINE(274)
				switch( (int)(c->__Index())){
					case (int)2: {
						HX_STACK_LINE(274)
						::String tmp4 = (::hscript::Const(c))->__Param(0);		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(274)
						::String s = tmp4;		HX_STACK_VAR(s,"s");
						HX_STACK_LINE(275)
						id = s;
					}
					;break;
					default: {
						HX_STACK_LINE(276)
						::hscript::Token tmp4 = tk;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(276)
						this->unexpected(tmp4);
					}
				}
			}
		}
		else if (  ( _switch_1==(int)7)){
			HX_STACK_LINE(279)
			break;
		}
		else  {
			HX_STACK_LINE(281)
			::hscript::Token tmp1 = tk;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(281)
			this->unexpected(tmp1);
		}
;
;
		HX_STACK_LINE(283)
		{
			HX_STACK_LINE(283)
			::hscript::Token tmp1 = this->token();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(283)
			::hscript::Token t = tmp1;		HX_STACK_VAR(t,"t");
			HX_STACK_LINE(283)
			bool tmp2 = (t != ::hscript::Token_obj::TDoubleDot);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(283)
			if ((tmp2)){
				HX_STACK_LINE(283)
				::hscript::Token tmp3 = t;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(283)
				this->unexpected(tmp3);
			}
		}
		HX_STACK_LINE(284)
		::String tmp1 = id;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(284)
		Dynamic tmp2 = this->parseExpr();		HX_STACK_VAR(tmp2,"tmp2");
		struct _Function_2_1{
			inline static Dynamic Block( Dynamic &tmp2,::String &tmp1){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","hscript/Parser.hx",284,0x98735743)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("name","\x4b","\x72","\xff","\x48") , tmp1,false);
					__result->Add(HX_HCSTRING("e","\x65","\x00","\x00","\x00") , tmp2,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(284)
		Dynamic tmp3 = _Function_2_1::Block(tmp2,tmp1);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(284)
		fl->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp3);
		HX_STACK_LINE(285)
		::hscript::Token tmp4 = this->token();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(285)
		tk = tmp4;
		HX_STACK_LINE(286)
		int _switch_2 = (tk->__Index());
		if (  ( _switch_2==(int)7)){
			HX_STACK_LINE(288)
			break;
		}
		else if (  ( _switch_2==(int)9)){
		}
		else  {
			HX_STACK_LINE(291)
			::hscript::Token tmp5 = tk;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(291)
			this->unexpected(tmp5);
		}
;
;
	}
	HX_STACK_LINE(294)
	Dynamic tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(294)
	{
		HX_STACK_LINE(294)
		::hscript::ExprDef tmp1 = ::hscript::ExprDef_obj::EObject(fl);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(294)
		::hscript::ExprDef e = tmp1;		HX_STACK_VAR(e,"e");
		HX_STACK_LINE(294)
		Dynamic pmin = p1;		HX_STACK_VAR(pmin,"pmin");
		HX_STACK_LINE(294)
		Dynamic pmax = null();		HX_STACK_VAR(pmax,"pmax");
		HX_STACK_LINE(294)
		bool tmp2 = (pmin == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(294)
		if ((tmp2)){
			HX_STACK_LINE(294)
			int tmp3 = this->tokenMin;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(294)
			pmin = tmp3;
		}
		HX_STACK_LINE(294)
		bool tmp3 = (pmax == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(294)
		if ((tmp3)){
			HX_STACK_LINE(294)
			int tmp4 = this->tokenMax;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(294)
			pmax = tmp4;
		}
		struct _Function_2_1{
			inline static Dynamic Block( Dynamic &pmax,::hscript::ExprDef &e,Dynamic &pmin){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","hscript/Parser.hx",294,0x98735743)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("e","\x65","\x00","\x00","\x00") , e,false);
					__result->Add(HX_HCSTRING("pmin","\x22","\xf7","\x5a","\x4a") , pmin,false);
					__result->Add(HX_HCSTRING("pmax","\x34","\xf0","\x5a","\x4a") , pmax,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(294)
		tmp = _Function_2_1::Block(pmax,e,pmin);
	}
	HX_STACK_LINE(294)
	Dynamic tmp1 = this->parseExprNext(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(294)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(Parser_obj,parseObject,return )

Dynamic Parser_obj::parseExpr( ){
	HX_STACK_FRAME("hscript.Parser","parseExpr",0x8f01bd34,"hscript.Parser.parseExpr","hscript/Parser.hx",297,0x98735743)
	HX_STACK_THIS(this)
	HX_STACK_LINE(298)
	::hscript::Token tmp = this->token();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(298)
	::hscript::Token tk = tmp;		HX_STACK_VAR(tk,"tk");
	HX_STACK_LINE(300)
	int tmp1 = this->tokenMin;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(300)
	int p1 = tmp1;		HX_STACK_VAR(p1,"p1");
	HX_STACK_LINE(302)
	switch( (int)(tk->__Index())){
		case (int)2: {
			HX_STACK_LINE(302)
			::String tmp2 = (::hscript::Token(tk))->__Param(0);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(302)
			::String id = tmp2;		HX_STACK_VAR(id,"id");
			HX_STACK_LINE(303)
			{
				HX_STACK_LINE(304)
				::String tmp3 = id;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(304)
				Dynamic tmp4 = this->parseStructure(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(304)
				Dynamic e = tmp4;		HX_STACK_VAR(e,"e");
				HX_STACK_LINE(305)
				bool tmp5 = (e == null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(305)
				if ((tmp5)){
					HX_STACK_LINE(306)
					Dynamic tmp6;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(306)
					{
						HX_STACK_LINE(306)
						::String tmp7 = id;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(306)
						::hscript::ExprDef tmp8 = ::hscript::ExprDef_obj::EIdent(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(306)
						::hscript::ExprDef e1 = tmp8;		HX_STACK_VAR(e1,"e1");
						HX_STACK_LINE(306)
						Dynamic pmin = null();		HX_STACK_VAR(pmin,"pmin");
						HX_STACK_LINE(306)
						Dynamic pmax = null();		HX_STACK_VAR(pmax,"pmax");
						HX_STACK_LINE(306)
						bool tmp9 = (pmin == null());		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(306)
						if ((tmp9)){
							HX_STACK_LINE(306)
							int tmp10 = this->tokenMin;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(306)
							pmin = tmp10;
						}
						HX_STACK_LINE(306)
						bool tmp10 = (pmax == null());		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(306)
						if ((tmp10)){
							HX_STACK_LINE(306)
							int tmp11 = this->tokenMax;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(306)
							pmax = tmp11;
						}
						struct _Function_5_1{
							inline static Dynamic Block( ::hscript::ExprDef &e1,Dynamic &pmax,Dynamic &pmin){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","hscript/Parser.hx",306,0x98735743)
								{
									hx::Anon __result = hx::Anon_obj::Create();
									__result->Add(HX_HCSTRING("e","\x65","\x00","\x00","\x00") , e1,false);
									__result->Add(HX_HCSTRING("pmin","\x22","\xf7","\x5a","\x4a") , pmin,false);
									__result->Add(HX_HCSTRING("pmax","\x34","\xf0","\x5a","\x4a") , pmax,false);
									return __result;
								}
								return null();
							}
						};
						HX_STACK_LINE(306)
						tmp6 = _Function_5_1::Block(e1,pmax,pmin);
					}
					HX_STACK_LINE(306)
					e = tmp6;
				}
				HX_STACK_LINE(307)
				Dynamic tmp6 = e;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(307)
				Dynamic tmp7 = this->parseExprNext(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(307)
				return tmp7;
			}
		}
		;break;
		case (int)1: {
			HX_STACK_LINE(302)
			::hscript::Const tmp2 = (::hscript::Token(tk))->__Param(0);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(302)
			::hscript::Const c = tmp2;		HX_STACK_VAR(c,"c");
			HX_STACK_LINE(308)
			{
				HX_STACK_LINE(309)
				Dynamic tmp3;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(309)
				{
					HX_STACK_LINE(309)
					::hscript::Const tmp4 = c;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(309)
					::hscript::ExprDef tmp5 = ::hscript::ExprDef_obj::EConst(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(309)
					::hscript::ExprDef e = tmp5;		HX_STACK_VAR(e,"e");
					HX_STACK_LINE(309)
					Dynamic pmin = null();		HX_STACK_VAR(pmin,"pmin");
					HX_STACK_LINE(309)
					Dynamic pmax = null();		HX_STACK_VAR(pmax,"pmax");
					HX_STACK_LINE(309)
					bool tmp6 = (pmin == null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(309)
					if ((tmp6)){
						HX_STACK_LINE(309)
						int tmp7 = this->tokenMin;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(309)
						pmin = tmp7;
					}
					HX_STACK_LINE(309)
					bool tmp7 = (pmax == null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(309)
					if ((tmp7)){
						HX_STACK_LINE(309)
						int tmp8 = this->tokenMax;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(309)
						pmax = tmp8;
					}
					struct _Function_4_1{
						inline static Dynamic Block( Dynamic &pmax,::hscript::ExprDef &e,Dynamic &pmin){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","hscript/Parser.hx",309,0x98735743)
							{
								hx::Anon __result = hx::Anon_obj::Create();
								__result->Add(HX_HCSTRING("e","\x65","\x00","\x00","\x00") , e,false);
								__result->Add(HX_HCSTRING("pmin","\x22","\xf7","\x5a","\x4a") , pmin,false);
								__result->Add(HX_HCSTRING("pmax","\x34","\xf0","\x5a","\x4a") , pmax,false);
								return __result;
							}
							return null();
						}
					};
					HX_STACK_LINE(309)
					tmp3 = _Function_4_1::Block(pmax,e,pmin);
				}
				HX_STACK_LINE(309)
				Dynamic tmp4 = this->parseExprNext(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(309)
				return tmp4;
			}
		}
		;break;
		case (int)4: {
			HX_STACK_LINE(311)
			Dynamic tmp2 = this->parseExpr();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(311)
			Dynamic e = tmp2;		HX_STACK_VAR(e,"e");
			HX_STACK_LINE(312)
			{
				HX_STACK_LINE(312)
				::hscript::Token tmp3 = this->token();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(312)
				::hscript::Token t = tmp3;		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(312)
				bool tmp4 = (t != ::hscript::Token_obj::TPClose);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(312)
				if ((tmp4)){
					HX_STACK_LINE(312)
					::hscript::Token tmp5 = t;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(312)
					this->unexpected(tmp5);
				}
			}
			HX_STACK_LINE(313)
			Dynamic tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(313)
			{
				HX_STACK_LINE(313)
				Dynamic tmp4 = e;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(313)
				::hscript::ExprDef tmp5 = ::hscript::ExprDef_obj::EParent(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(313)
				::hscript::ExprDef e1 = tmp5;		HX_STACK_VAR(e1,"e1");
				HX_STACK_LINE(313)
				Dynamic pmin = p1;		HX_STACK_VAR(pmin,"pmin");
				HX_STACK_LINE(313)
				int tmp6 = this->tokenMax;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(313)
				Dynamic pmax = tmp6;		HX_STACK_VAR(pmax,"pmax");
				HX_STACK_LINE(313)
				bool tmp7 = (pmin == null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(313)
				if ((tmp7)){
					HX_STACK_LINE(313)
					int tmp8 = this->tokenMin;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(313)
					pmin = tmp8;
				}
				HX_STACK_LINE(313)
				bool tmp8 = (pmax == null());		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(313)
				if ((tmp8)){
					HX_STACK_LINE(313)
					int tmp9 = this->tokenMax;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(313)
					pmax = tmp9;
				}
				struct _Function_3_1{
					inline static Dynamic Block( ::hscript::ExprDef &e1,Dynamic &pmax,Dynamic &pmin){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","hscript/Parser.hx",313,0x98735743)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_HCSTRING("e","\x65","\x00","\x00","\x00") , e1,false);
							__result->Add(HX_HCSTRING("pmin","\x22","\xf7","\x5a","\x4a") , pmin,false);
							__result->Add(HX_HCSTRING("pmax","\x34","\xf0","\x5a","\x4a") , pmax,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(313)
				tmp3 = _Function_3_1::Block(e1,pmax,pmin);
			}
			HX_STACK_LINE(313)
			Dynamic tmp4 = this->parseExprNext(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(313)
			return tmp4;
		}
		;break;
		case (int)6: {
			HX_STACK_LINE(315)
			::hscript::Token tmp2 = this->token();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(315)
			tk = tmp2;
			HX_STACK_LINE(316)
			switch( (int)(tk->__Index())){
				case (int)7: {
					HX_STACK_LINE(318)
					Dynamic tmp3;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(318)
					{
						HX_STACK_LINE(318)
						::hscript::ExprDef tmp4 = ::hscript::ExprDef_obj::EObject(cpp::ArrayBase_obj::__new());		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(318)
						::hscript::ExprDef e = tmp4;		HX_STACK_VAR(e,"e");
						HX_STACK_LINE(318)
						Dynamic pmin = p1;		HX_STACK_VAR(pmin,"pmin");
						HX_STACK_LINE(318)
						Dynamic pmax = null();		HX_STACK_VAR(pmax,"pmax");
						HX_STACK_LINE(318)
						bool tmp5 = (pmin == null());		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(318)
						if ((tmp5)){
							HX_STACK_LINE(318)
							int tmp6 = this->tokenMin;		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(318)
							pmin = tmp6;
						}
						HX_STACK_LINE(318)
						bool tmp6 = (pmax == null());		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(318)
						if ((tmp6)){
							HX_STACK_LINE(318)
							int tmp7 = this->tokenMax;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(318)
							pmax = tmp7;
						}
						struct _Function_4_1{
							inline static Dynamic Block( Dynamic &pmax,::hscript::ExprDef &e,Dynamic &pmin){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","hscript/Parser.hx",318,0x98735743)
								{
									hx::Anon __result = hx::Anon_obj::Create();
									__result->Add(HX_HCSTRING("e","\x65","\x00","\x00","\x00") , e,false);
									__result->Add(HX_HCSTRING("pmin","\x22","\xf7","\x5a","\x4a") , pmin,false);
									__result->Add(HX_HCSTRING("pmax","\x34","\xf0","\x5a","\x4a") , pmax,false);
									return __result;
								}
								return null();
							}
						};
						HX_STACK_LINE(318)
						tmp3 = _Function_4_1::Block(pmax,e,pmin);
					}
					HX_STACK_LINE(318)
					Dynamic tmp4 = this->parseExprNext(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(318)
					return tmp4;
				}
				;break;
				case (int)2: {
					HX_STACK_LINE(320)
					::hscript::Token tmp3 = this->token();		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(320)
					::hscript::Token tk2 = tmp3;		HX_STACK_VAR(tk2,"tk2");
					HX_STACK_LINE(321)
					{
						HX_STACK_LINE(321)
						::List tmp4 = this->tokens;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(321)
						::hscript::Token tmp5 = tk2;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(321)
						int tmp6 = this->tokenMin;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(321)
						int tmp7 = this->tokenMax;		HX_STACK_VAR(tmp7,"tmp7");
						struct _Function_4_1{
							inline static Dynamic Block( ::hscript::Token &tmp5,int &tmp6,int &tmp7){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","hscript/Parser.hx",321,0x98735743)
								{
									hx::Anon __result = hx::Anon_obj::Create();
									__result->Add(HX_HCSTRING("t","\x74","\x00","\x00","\x00") , tmp5,false);
									__result->Add(HX_HCSTRING("min","\x92","\x11","\x53","\x00") , tmp6,false);
									__result->Add(HX_HCSTRING("max","\xa4","\x0a","\x53","\x00") , tmp7,false);
									return __result;
								}
								return null();
							}
						};
						HX_STACK_LINE(321)
						Dynamic tmp8 = _Function_4_1::Block(tmp5,tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(321)
						tmp4->push(tmp8);
						HX_STACK_LINE(321)
						int tmp9 = this->oldTokenMin;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(321)
						this->tokenMin = tmp9;
						HX_STACK_LINE(321)
						int tmp10 = this->oldTokenMax;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(321)
						this->tokenMax = tmp10;
					}
					HX_STACK_LINE(322)
					{
						HX_STACK_LINE(322)
						::List tmp4 = this->tokens;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(322)
						::hscript::Token tmp5 = tk;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(322)
						int tmp6 = this->tokenMin;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(322)
						int tmp7 = this->tokenMax;		HX_STACK_VAR(tmp7,"tmp7");
						struct _Function_4_1{
							inline static Dynamic Block( ::hscript::Token &tmp5,int &tmp6,int &tmp7){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","hscript/Parser.hx",322,0x98735743)
								{
									hx::Anon __result = hx::Anon_obj::Create();
									__result->Add(HX_HCSTRING("t","\x74","\x00","\x00","\x00") , tmp5,false);
									__result->Add(HX_HCSTRING("min","\x92","\x11","\x53","\x00") , tmp6,false);
									__result->Add(HX_HCSTRING("max","\xa4","\x0a","\x53","\x00") , tmp7,false);
									return __result;
								}
								return null();
							}
						};
						HX_STACK_LINE(322)
						Dynamic tmp8 = _Function_4_1::Block(tmp5,tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(322)
						tmp4->push(tmp8);
						HX_STACK_LINE(322)
						int tmp9 = this->oldTokenMin;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(322)
						this->tokenMin = tmp9;
						HX_STACK_LINE(322)
						int tmp10 = this->oldTokenMax;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(322)
						this->tokenMax = tmp10;
					}
					HX_STACK_LINE(323)
					switch( (int)(tk2->__Index())){
						case (int)14: {
							HX_STACK_LINE(325)
							int tmp4 = p1;		HX_STACK_VAR(tmp4,"tmp4");
							HX_STACK_LINE(325)
							Dynamic tmp5 = this->parseObject(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(325)
							Dynamic tmp6 = this->parseExprNext(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(325)
							return tmp6;
						}
						;break;
						default: {
						}
					}
				}
				;break;
				case (int)1: {
					HX_STACK_LINE(316)
					::hscript::Const tmp3 = (::hscript::Token(tk))->__Param(0);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(316)
					::hscript::Const c = tmp3;		HX_STACK_VAR(c,"c");
					HX_STACK_LINE(328)
					{
						HX_STACK_LINE(329)
						bool tmp4 = this->allowJSON;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(329)
						if ((tmp4)){
							HX_STACK_LINE(330)
							switch( (int)(c->__Index())){
								case (int)2: {
									HX_STACK_LINE(332)
									::hscript::Token tmp5 = this->token();		HX_STACK_VAR(tmp5,"tmp5");
									HX_STACK_LINE(332)
									::hscript::Token tk2 = tmp5;		HX_STACK_VAR(tk2,"tk2");
									HX_STACK_LINE(333)
									{
										HX_STACK_LINE(333)
										::List tmp6 = this->tokens;		HX_STACK_VAR(tmp6,"tmp6");
										HX_STACK_LINE(333)
										::hscript::Token tmp7 = tk2;		HX_STACK_VAR(tmp7,"tmp7");
										HX_STACK_LINE(333)
										int tmp8 = this->tokenMin;		HX_STACK_VAR(tmp8,"tmp8");
										HX_STACK_LINE(333)
										int tmp9 = this->tokenMax;		HX_STACK_VAR(tmp9,"tmp9");
										struct _Function_7_1{
											inline static Dynamic Block( int &tmp9,::hscript::Token &tmp7,int &tmp8){
												HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","hscript/Parser.hx",333,0x98735743)
												{
													hx::Anon __result = hx::Anon_obj::Create();
													__result->Add(HX_HCSTRING("t","\x74","\x00","\x00","\x00") , tmp7,false);
													__result->Add(HX_HCSTRING("min","\x92","\x11","\x53","\x00") , tmp8,false);
													__result->Add(HX_HCSTRING("max","\xa4","\x0a","\x53","\x00") , tmp9,false);
													return __result;
												}
												return null();
											}
										};
										HX_STACK_LINE(333)
										Dynamic tmp10 = _Function_7_1::Block(tmp9,tmp7,tmp8);		HX_STACK_VAR(tmp10,"tmp10");
										HX_STACK_LINE(333)
										tmp6->push(tmp10);
										HX_STACK_LINE(333)
										int tmp11 = this->oldTokenMin;		HX_STACK_VAR(tmp11,"tmp11");
										HX_STACK_LINE(333)
										this->tokenMin = tmp11;
										HX_STACK_LINE(333)
										int tmp12 = this->oldTokenMax;		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(333)
										this->tokenMax = tmp12;
									}
									HX_STACK_LINE(334)
									{
										HX_STACK_LINE(334)
										::List tmp6 = this->tokens;		HX_STACK_VAR(tmp6,"tmp6");
										HX_STACK_LINE(334)
										::hscript::Token tmp7 = tk;		HX_STACK_VAR(tmp7,"tmp7");
										HX_STACK_LINE(334)
										int tmp8 = this->tokenMin;		HX_STACK_VAR(tmp8,"tmp8");
										HX_STACK_LINE(334)
										int tmp9 = this->tokenMax;		HX_STACK_VAR(tmp9,"tmp9");
										struct _Function_7_1{
											inline static Dynamic Block( int &tmp9,::hscript::Token &tmp7,int &tmp8){
												HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","hscript/Parser.hx",334,0x98735743)
												{
													hx::Anon __result = hx::Anon_obj::Create();
													__result->Add(HX_HCSTRING("t","\x74","\x00","\x00","\x00") , tmp7,false);
													__result->Add(HX_HCSTRING("min","\x92","\x11","\x53","\x00") , tmp8,false);
													__result->Add(HX_HCSTRING("max","\xa4","\x0a","\x53","\x00") , tmp9,false);
													return __result;
												}
												return null();
											}
										};
										HX_STACK_LINE(334)
										Dynamic tmp10 = _Function_7_1::Block(tmp9,tmp7,tmp8);		HX_STACK_VAR(tmp10,"tmp10");
										HX_STACK_LINE(334)
										tmp6->push(tmp10);
										HX_STACK_LINE(334)
										int tmp11 = this->oldTokenMin;		HX_STACK_VAR(tmp11,"tmp11");
										HX_STACK_LINE(334)
										this->tokenMin = tmp11;
										HX_STACK_LINE(334)
										int tmp12 = this->oldTokenMax;		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(334)
										this->tokenMax = tmp12;
									}
									HX_STACK_LINE(335)
									switch( (int)(tk2->__Index())){
										case (int)14: {
											HX_STACK_LINE(337)
											int tmp6 = p1;		HX_STACK_VAR(tmp6,"tmp6");
											HX_STACK_LINE(337)
											Dynamic tmp7 = this->parseObject(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
											HX_STACK_LINE(337)
											Dynamic tmp8 = this->parseExprNext(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
											HX_STACK_LINE(337)
											return tmp8;
										}
										;break;
										default: {
										}
									}
								}
								;break;
								default: {
									HX_STACK_LINE(341)
									::List tmp5 = this->tokens;		HX_STACK_VAR(tmp5,"tmp5");
									HX_STACK_LINE(341)
									::hscript::Token tmp6 = tk;		HX_STACK_VAR(tmp6,"tmp6");
									HX_STACK_LINE(341)
									int tmp7 = this->tokenMin;		HX_STACK_VAR(tmp7,"tmp7");
									HX_STACK_LINE(341)
									int tmp8 = this->tokenMax;		HX_STACK_VAR(tmp8,"tmp8");
									struct _Function_6_1{
										inline static Dynamic Block( ::hscript::Token &tmp6,int &tmp7,int &tmp8){
											HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","hscript/Parser.hx",341,0x98735743)
											{
												hx::Anon __result = hx::Anon_obj::Create();
												__result->Add(HX_HCSTRING("t","\x74","\x00","\x00","\x00") , tmp6,false);
												__result->Add(HX_HCSTRING("min","\x92","\x11","\x53","\x00") , tmp7,false);
												__result->Add(HX_HCSTRING("max","\xa4","\x0a","\x53","\x00") , tmp8,false);
												return __result;
											}
											return null();
										}
									};
									HX_STACK_LINE(341)
									Dynamic tmp9 = _Function_6_1::Block(tmp6,tmp7,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
									HX_STACK_LINE(341)
									tmp5->push(tmp9);
									HX_STACK_LINE(341)
									int tmp10 = this->oldTokenMin;		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(341)
									this->tokenMin = tmp10;
									HX_STACK_LINE(341)
									int tmp11 = this->oldTokenMax;		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(341)
									this->tokenMax = tmp11;
								}
							}
						}
						else{
							HX_STACK_LINE(344)
							::List tmp5 = this->tokens;		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(344)
							::hscript::Token tmp6 = tk;		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(344)
							int tmp7 = this->tokenMin;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(344)
							int tmp8 = this->tokenMax;		HX_STACK_VAR(tmp8,"tmp8");
							struct _Function_5_1{
								inline static Dynamic Block( ::hscript::Token &tmp6,int &tmp7,int &tmp8){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","hscript/Parser.hx",344,0x98735743)
									{
										hx::Anon __result = hx::Anon_obj::Create();
										__result->Add(HX_HCSTRING("t","\x74","\x00","\x00","\x00") , tmp6,false);
										__result->Add(HX_HCSTRING("min","\x92","\x11","\x53","\x00") , tmp7,false);
										__result->Add(HX_HCSTRING("max","\xa4","\x0a","\x53","\x00") , tmp8,false);
										return __result;
									}
									return null();
								}
							};
							HX_STACK_LINE(344)
							Dynamic tmp9 = _Function_5_1::Block(tmp6,tmp7,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(344)
							tmp5->push(tmp9);
							HX_STACK_LINE(344)
							int tmp10 = this->oldTokenMin;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(344)
							this->tokenMin = tmp10;
							HX_STACK_LINE(344)
							int tmp11 = this->oldTokenMax;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(344)
							this->tokenMax = tmp11;
						}
					}
				}
				;break;
				default: {
					HX_STACK_LINE(346)
					::List tmp3 = this->tokens;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(346)
					::hscript::Token tmp4 = tk;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(346)
					int tmp5 = this->tokenMin;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(346)
					int tmp6 = this->tokenMax;		HX_STACK_VAR(tmp6,"tmp6");
					struct _Function_3_1{
						inline static Dynamic Block( int &tmp5,int &tmp6,::hscript::Token &tmp4){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","hscript/Parser.hx",346,0x98735743)
							{
								hx::Anon __result = hx::Anon_obj::Create();
								__result->Add(HX_HCSTRING("t","\x74","\x00","\x00","\x00") , tmp4,false);
								__result->Add(HX_HCSTRING("min","\x92","\x11","\x53","\x00") , tmp5,false);
								__result->Add(HX_HCSTRING("max","\xa4","\x0a","\x53","\x00") , tmp6,false);
								return __result;
							}
							return null();
						}
					};
					HX_STACK_LINE(346)
					Dynamic tmp7 = _Function_3_1::Block(tmp5,tmp6,tmp4);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(346)
					tmp3->push(tmp7);
					HX_STACK_LINE(346)
					int tmp8 = this->oldTokenMin;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(346)
					this->tokenMin = tmp8;
					HX_STACK_LINE(346)
					int tmp9 = this->oldTokenMax;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(346)
					this->tokenMax = tmp9;
				}
			}
			HX_STACK_LINE(348)
			cpp::ArrayBase a = Dynamic( Array_obj<Dynamic>::__new() );		HX_STACK_VAR(a,"a");
			HX_STACK_LINE(349)
			while((true)){
				HX_STACK_LINE(350)
				Dynamic tmp3 = this->parseFullExpr();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(350)
				a->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp3);
				HX_STACK_LINE(351)
				::hscript::Token tmp4 = this->token();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(351)
				tk = tmp4;
				HX_STACK_LINE(352)
				bool tmp5 = (tk == ::hscript::Token_obj::TBrClose);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(352)
				if ((tmp5)){
					HX_STACK_LINE(353)
					break;
				}
				HX_STACK_LINE(354)
				{
					HX_STACK_LINE(354)
					::List tmp6 = this->tokens;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(354)
					::hscript::Token tmp7 = tk;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(354)
					int tmp8 = this->tokenMin;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(354)
					int tmp9 = this->tokenMax;		HX_STACK_VAR(tmp9,"tmp9");
					struct _Function_4_1{
						inline static Dynamic Block( int &tmp9,::hscript::Token &tmp7,int &tmp8){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","hscript/Parser.hx",354,0x98735743)
							{
								hx::Anon __result = hx::Anon_obj::Create();
								__result->Add(HX_HCSTRING("t","\x74","\x00","\x00","\x00") , tmp7,false);
								__result->Add(HX_HCSTRING("min","\x92","\x11","\x53","\x00") , tmp8,false);
								__result->Add(HX_HCSTRING("max","\xa4","\x0a","\x53","\x00") , tmp9,false);
								return __result;
							}
							return null();
						}
					};
					HX_STACK_LINE(354)
					Dynamic tmp10 = _Function_4_1::Block(tmp9,tmp7,tmp8);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(354)
					tmp6->push(tmp10);
					HX_STACK_LINE(354)
					int tmp11 = this->oldTokenMin;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(354)
					this->tokenMin = tmp11;
					HX_STACK_LINE(354)
					int tmp12 = this->oldTokenMax;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(354)
					this->tokenMax = tmp12;
				}
			}
			HX_STACK_LINE(356)
			Dynamic tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(356)
			{
				HX_STACK_LINE(356)
				::hscript::ExprDef tmp4 = ::hscript::ExprDef_obj::EBlock(a);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(356)
				::hscript::ExprDef e = tmp4;		HX_STACK_VAR(e,"e");
				HX_STACK_LINE(356)
				Dynamic pmin = p1;		HX_STACK_VAR(pmin,"pmin");
				HX_STACK_LINE(356)
				Dynamic pmax = null();		HX_STACK_VAR(pmax,"pmax");
				HX_STACK_LINE(356)
				bool tmp5 = (pmin == null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(356)
				if ((tmp5)){
					HX_STACK_LINE(356)
					int tmp6 = this->tokenMin;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(356)
					pmin = tmp6;
				}
				HX_STACK_LINE(356)
				bool tmp6 = (pmax == null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(356)
				if ((tmp6)){
					HX_STACK_LINE(356)
					int tmp7 = this->tokenMax;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(356)
					pmax = tmp7;
				}
				struct _Function_3_1{
					inline static Dynamic Block( Dynamic &pmax,::hscript::ExprDef &e,Dynamic &pmin){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","hscript/Parser.hx",356,0x98735743)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_HCSTRING("e","\x65","\x00","\x00","\x00") , e,false);
							__result->Add(HX_HCSTRING("pmin","\x22","\xf7","\x5a","\x4a") , pmin,false);
							__result->Add(HX_HCSTRING("pmax","\x34","\xf0","\x5a","\x4a") , pmax,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(356)
				tmp3 = _Function_3_1::Block(pmax,e,pmin);
			}
			HX_STACK_LINE(356)
			return tmp3;
		}
		;break;
		case (int)3: {
			HX_STACK_LINE(302)
			::String tmp2 = (::hscript::Token(tk))->__Param(0);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(302)
			::String op = tmp2;		HX_STACK_VAR(op,"op");
			HX_STACK_LINE(357)
			{
				HX_STACK_LINE(358)
				::haxe::ds::StringMap tmp3 = this->unops;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(358)
				::String tmp4 = op;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(358)
				bool tmp5 = tmp3->exists(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(358)
				if ((tmp5)){
					HX_STACK_LINE(359)
					::String tmp6 = op;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(359)
					Dynamic tmp7 = this->parseExpr();		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(359)
					Dynamic tmp8 = this->makeUnop(tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(359)
					return tmp8;
				}
				HX_STACK_LINE(360)
				::hscript::Token tmp6 = tk;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(360)
				Dynamic tmp7 = this->unexpected(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(360)
				return tmp7;
			}
		}
		;break;
		case (int)11: {
			HX_STACK_LINE(362)
			cpp::ArrayBase a = Dynamic( Array_obj<Dynamic>::__new() );		HX_STACK_VAR(a,"a");
			HX_STACK_LINE(363)
			::hscript::Token tmp2 = this->token();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(363)
			tk = tmp2;
			HX_STACK_LINE(364)
			while((true)){
				HX_STACK_LINE(364)
				bool tmp3 = (tk != ::hscript::Token_obj::TBkClose);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(364)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(364)
				if ((tmp4)){
					HX_STACK_LINE(364)
					break;
				}
				HX_STACK_LINE(365)
				{
					HX_STACK_LINE(365)
					::List tmp5 = this->tokens;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(365)
					::hscript::Token tmp6 = tk;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(365)
					int tmp7 = this->tokenMin;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(365)
					int tmp8 = this->tokenMax;		HX_STACK_VAR(tmp8,"tmp8");
					struct _Function_4_1{
						inline static Dynamic Block( ::hscript::Token &tmp6,int &tmp7,int &tmp8){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","hscript/Parser.hx",365,0x98735743)
							{
								hx::Anon __result = hx::Anon_obj::Create();
								__result->Add(HX_HCSTRING("t","\x74","\x00","\x00","\x00") , tmp6,false);
								__result->Add(HX_HCSTRING("min","\x92","\x11","\x53","\x00") , tmp7,false);
								__result->Add(HX_HCSTRING("max","\xa4","\x0a","\x53","\x00") , tmp8,false);
								return __result;
							}
							return null();
						}
					};
					HX_STACK_LINE(365)
					Dynamic tmp9 = _Function_4_1::Block(tmp6,tmp7,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(365)
					tmp5->push(tmp9);
					HX_STACK_LINE(365)
					int tmp10 = this->oldTokenMin;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(365)
					this->tokenMin = tmp10;
					HX_STACK_LINE(365)
					int tmp11 = this->oldTokenMax;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(365)
					this->tokenMax = tmp11;
				}
				HX_STACK_LINE(366)
				Dynamic tmp5 = this->parseExpr();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(366)
				a->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp5);
				HX_STACK_LINE(367)
				::hscript::Token tmp6 = this->token();		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(367)
				tk = tmp6;
				HX_STACK_LINE(368)
				bool tmp7 = (tk == ::hscript::Token_obj::TComma);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(368)
				if ((tmp7)){
					HX_STACK_LINE(369)
					::hscript::Token tmp8 = this->token();		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(369)
					tk = tmp8;
				}
			}
			HX_STACK_LINE(371)
			bool tmp3 = (a->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ) == (int)1);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(371)
			if ((tmp3)){
				HX_STACK_LINE(372)
				{
					HX_STACK_LINE(372)
					Dynamic tmp4 = a->__GetItem((int)0);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(372)
					::hscript::ExprDef _g = tmp4->__Field(HX_HCSTRING("e","\x65","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(372)
					switch( (int)(_g->__Index())){
						case (int)11: case (int)10: {
							HX_STACK_LINE(374)
							int tmp5 = (this->uid)++;		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(374)
							::String tmp6 = (HX_HCSTRING("__a_","\xfe","\xaf","\x13","\x3f") + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(374)
							::String tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(375)
							Dynamic tmp8;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(375)
							{
								HX_STACK_LINE(376)
								Dynamic tmp9;		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(376)
								{
									HX_STACK_LINE(376)
									::String tmp10 = tmp7;		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(376)
									Dynamic tmp11;		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(376)
									{
										HX_STACK_LINE(376)
										::hscript::ExprDef tmp12 = ::hscript::ExprDef_obj::EArrayDecl(cpp::ArrayBase_obj::__new());		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(376)
										::hscript::ExprDef e = tmp12;		HX_STACK_VAR(e,"e");
										HX_STACK_LINE(376)
										Dynamic pmin = p1;		HX_STACK_VAR(pmin,"pmin");
										HX_STACK_LINE(376)
										Dynamic pmax = null();		HX_STACK_VAR(pmax,"pmax");
										HX_STACK_LINE(376)
										bool tmp13 = (pmin == null());		HX_STACK_VAR(tmp13,"tmp13");
										HX_STACK_LINE(376)
										if ((tmp13)){
											HX_STACK_LINE(376)
											int tmp14 = this->tokenMin;		HX_STACK_VAR(tmp14,"tmp14");
											HX_STACK_LINE(376)
											pmin = tmp14;
										}
										HX_STACK_LINE(376)
										bool tmp14 = (pmax == null());		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(376)
										if ((tmp14)){
											HX_STACK_LINE(376)
											int tmp15 = this->tokenMax;		HX_STACK_VAR(tmp15,"tmp15");
											HX_STACK_LINE(376)
											pmax = tmp15;
										}
										struct _Function_8_1{
											inline static Dynamic Block( Dynamic &pmax,::hscript::ExprDef &e,Dynamic &pmin){
												HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","hscript/Parser.hx",376,0x98735743)
												{
													hx::Anon __result = hx::Anon_obj::Create();
													__result->Add(HX_HCSTRING("e","\x65","\x00","\x00","\x00") , e,false);
													__result->Add(HX_HCSTRING("pmin","\x22","\xf7","\x5a","\x4a") , pmin,false);
													__result->Add(HX_HCSTRING("pmax","\x34","\xf0","\x5a","\x4a") , pmax,false);
													return __result;
												}
												return null();
											}
										};
										HX_STACK_LINE(376)
										tmp11 = _Function_8_1::Block(pmax,e,pmin);
									}
									HX_STACK_LINE(376)
									::hscript::ExprDef tmp12 = ::hscript::ExprDef_obj::EVar(tmp10,null(),tmp11);		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(376)
									::hscript::ExprDef e = tmp12;		HX_STACK_VAR(e,"e");
									HX_STACK_LINE(376)
									Dynamic pmin = p1;		HX_STACK_VAR(pmin,"pmin");
									HX_STACK_LINE(376)
									Dynamic pmax = null();		HX_STACK_VAR(pmax,"pmax");
									HX_STACK_LINE(376)
									bool tmp13 = (pmin == null());		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(376)
									if ((tmp13)){
										HX_STACK_LINE(376)
										int tmp14 = this->tokenMin;		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(376)
										pmin = tmp14;
									}
									HX_STACK_LINE(376)
									bool tmp14 = (pmax == null());		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(376)
									if ((tmp14)){
										HX_STACK_LINE(376)
										int tmp15 = this->tokenMax;		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(376)
										pmax = tmp15;
									}
									struct _Function_7_1{
										inline static Dynamic Block( Dynamic &pmax,::hscript::ExprDef &e,Dynamic &pmin){
											HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","hscript/Parser.hx",376,0x98735743)
											{
												hx::Anon __result = hx::Anon_obj::Create();
												__result->Add(HX_HCSTRING("e","\x65","\x00","\x00","\x00") , e,false);
												__result->Add(HX_HCSTRING("pmin","\x22","\xf7","\x5a","\x4a") , pmin,false);
												__result->Add(HX_HCSTRING("pmax","\x34","\xf0","\x5a","\x4a") , pmax,false);
												return __result;
											}
											return null();
										}
									};
									HX_STACK_LINE(376)
									tmp9 = _Function_7_1::Block(pmax,e,pmin);
								}
								HX_STACK_LINE(377)
								::String tmp10 = tmp7;		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(377)
								Dynamic tmp11 = a->__GetItem((int)0);		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(377)
								Dynamic tmp12 = this->mapCompr(tmp10,tmp11);		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(378)
								Dynamic tmp13;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(378)
								{
									HX_STACK_LINE(378)
									::String tmp14 = tmp7;		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(378)
									::hscript::ExprDef tmp15 = ::hscript::ExprDef_obj::EIdent(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(378)
									::hscript::ExprDef e = tmp15;		HX_STACK_VAR(e,"e");
									HX_STACK_LINE(378)
									Dynamic pmin = p1;		HX_STACK_VAR(pmin,"pmin");
									HX_STACK_LINE(378)
									Dynamic pmax = null();		HX_STACK_VAR(pmax,"pmax");
									HX_STACK_LINE(378)
									bool tmp16 = (pmin == null());		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(378)
									if ((tmp16)){
										HX_STACK_LINE(378)
										int tmp17 = this->tokenMin;		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(378)
										pmin = tmp17;
									}
									HX_STACK_LINE(378)
									bool tmp17 = (pmax == null());		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(378)
									if ((tmp17)){
										HX_STACK_LINE(378)
										int tmp18 = this->tokenMax;		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(378)
										pmax = tmp18;
									}
									struct _Function_7_1{
										inline static Dynamic Block( Dynamic &pmax,::hscript::ExprDef &e,Dynamic &pmin){
											HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","hscript/Parser.hx",378,0x98735743)
											{
												hx::Anon __result = hx::Anon_obj::Create();
												__result->Add(HX_HCSTRING("e","\x65","\x00","\x00","\x00") , e,false);
												__result->Add(HX_HCSTRING("pmin","\x22","\xf7","\x5a","\x4a") , pmin,false);
												__result->Add(HX_HCSTRING("pmax","\x34","\xf0","\x5a","\x4a") , pmax,false);
												return __result;
											}
											return null();
										}
									};
									HX_STACK_LINE(378)
									tmp13 = _Function_7_1::Block(pmax,e,pmin);
								}
								HX_STACK_LINE(375)
								::hscript::ExprDef tmp14 = ::hscript::ExprDef_obj::EBlock(cpp::ArrayBase_obj::__new().Add(tmp9).Add(tmp12).Add(tmp13));		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(375)
								::hscript::ExprDef e = tmp14;		HX_STACK_VAR(e,"e");
								HX_STACK_LINE(379)
								Dynamic pmin = p1;		HX_STACK_VAR(pmin,"pmin");
								HX_STACK_LINE(375)
								Dynamic pmax = null();		HX_STACK_VAR(pmax,"pmax");
								HX_STACK_LINE(375)
								bool tmp15 = (pmin == null());		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(375)
								if ((tmp15)){
									HX_STACK_LINE(375)
									int tmp16 = this->tokenMin;		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(375)
									pmin = tmp16;
								}
								HX_STACK_LINE(375)
								bool tmp16 = (pmax == null());		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(375)
								if ((tmp16)){
									HX_STACK_LINE(375)
									int tmp17 = this->tokenMax;		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(375)
									pmax = tmp17;
								}
								struct _Function_6_1{
									inline static Dynamic Block( Dynamic &pmax,::hscript::ExprDef &e,Dynamic &pmin){
										HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","hscript/Parser.hx",375,0x98735743)
										{
											hx::Anon __result = hx::Anon_obj::Create();
											__result->Add(HX_HCSTRING("e","\x65","\x00","\x00","\x00") , e,false);
											__result->Add(HX_HCSTRING("pmin","\x22","\xf7","\x5a","\x4a") , pmin,false);
											__result->Add(HX_HCSTRING("pmax","\x34","\xf0","\x5a","\x4a") , pmax,false);
											return __result;
										}
										return null();
									}
								};
								HX_STACK_LINE(375)
								tmp8 = _Function_6_1::Block(pmax,e,pmin);
							}
							HX_STACK_LINE(375)
							Dynamic e = tmp8;		HX_STACK_VAR(e,"e");
							HX_STACK_LINE(380)
							Dynamic tmp9 = e;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(380)
							Dynamic tmp10 = this->parseExprNext(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(380)
							return tmp10;
						}
						;break;
						default: {
						}
					}
				}
			}
			HX_STACK_LINE(383)
			Dynamic tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(383)
			{
				HX_STACK_LINE(383)
				::hscript::ExprDef tmp5 = ::hscript::ExprDef_obj::EArrayDecl(a);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(383)
				::hscript::ExprDef e = tmp5;		HX_STACK_VAR(e,"e");
				HX_STACK_LINE(383)
				Dynamic pmin = p1;		HX_STACK_VAR(pmin,"pmin");
				HX_STACK_LINE(383)
				Dynamic pmax = null();		HX_STACK_VAR(pmax,"pmax");
				HX_STACK_LINE(383)
				bool tmp6 = (pmin == null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(383)
				if ((tmp6)){
					HX_STACK_LINE(383)
					int tmp7 = this->tokenMin;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(383)
					pmin = tmp7;
				}
				HX_STACK_LINE(383)
				bool tmp7 = (pmax == null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(383)
				if ((tmp7)){
					HX_STACK_LINE(383)
					int tmp8 = this->tokenMax;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(383)
					pmax = tmp8;
				}
				struct _Function_3_1{
					inline static Dynamic Block( Dynamic &pmax,::hscript::ExprDef &e,Dynamic &pmin){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","hscript/Parser.hx",383,0x98735743)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_HCSTRING("e","\x65","\x00","\x00","\x00") , e,false);
							__result->Add(HX_HCSTRING("pmin","\x22","\xf7","\x5a","\x4a") , pmin,false);
							__result->Add(HX_HCSTRING("pmax","\x34","\xf0","\x5a","\x4a") , pmax,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(383)
				tmp4 = _Function_3_1::Block(pmax,e,pmin);
			}
			HX_STACK_LINE(383)
			Dynamic tmp5 = this->parseExprNext(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(383)
			return tmp5;
		}
		;break;
		default: {
			HX_STACK_LINE(385)
			::hscript::Token tmp2 = tk;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(385)
			Dynamic tmp3 = this->unexpected(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(385)
			return tmp3;
		}
	}
	HX_STACK_LINE(302)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Parser_obj,parseExpr,return )

Dynamic Parser_obj::mapCompr( ::String tmp,Dynamic e){
	HX_STACK_FRAME("hscript.Parser","mapCompr",0xde0e1f9b,"hscript.Parser.mapCompr","hscript/Parser.hx",389,0x98735743)
	HX_STACK_THIS(this)
	HX_STACK_ARG(tmp,"tmp")
	HX_STACK_ARG(e,"e")
	HX_STACK_LINE(390)
	::hscript::ExprDef tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(390)
	{
		HX_STACK_LINE(390)
		::hscript::ExprDef _g = e->__Field(HX_HCSTRING("e","\x65","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(390)
		switch( (int)(_g->__Index())){
			case (int)11: {
				HX_STACK_LINE(390)
				Dynamic tmp2 = (::hscript::ExprDef(_g))->__Param(2);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(390)
				Dynamic e2 = tmp2;		HX_STACK_VAR(e2,"e2");
				HX_STACK_LINE(390)
				Dynamic tmp3 = (::hscript::ExprDef(_g))->__Param(1);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(390)
				Dynamic it = tmp3;		HX_STACK_VAR(it,"it");
				HX_STACK_LINE(390)
				::String tmp4 = (::hscript::ExprDef(_g))->__Param(0);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(390)
				::String v = tmp4;		HX_STACK_VAR(v,"v");
				HX_STACK_LINE(391)
				{
					HX_STACK_LINE(392)
					::String tmp5 = v;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(392)
					Dynamic tmp6 = it;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(392)
					::String tmp7 = tmp;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(392)
					Dynamic tmp8 = e2;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(392)
					Dynamic tmp9 = this->mapCompr(tmp7,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(392)
					tmp1 = ::hscript::ExprDef_obj::EFor(tmp5,tmp6,tmp9);
				}
			}
			;break;
			case (int)10: {
				HX_STACK_LINE(390)
				Dynamic tmp2 = (::hscript::ExprDef(_g))->__Param(1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(390)
				Dynamic e2 = tmp2;		HX_STACK_VAR(e2,"e2");
				HX_STACK_LINE(390)
				Dynamic tmp3 = (::hscript::ExprDef(_g))->__Param(0);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(390)
				Dynamic cond = tmp3;		HX_STACK_VAR(cond,"cond");
				HX_STACK_LINE(393)
				{
					HX_STACK_LINE(394)
					Dynamic tmp4 = cond;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(394)
					::String tmp5 = tmp;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(394)
					Dynamic tmp6 = e2;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(394)
					Dynamic tmp7 = this->mapCompr(tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(394)
					tmp1 = ::hscript::ExprDef_obj::EWhile(tmp4,tmp7);
				}
			}
			;break;
			case (int)9: {
				HX_STACK_LINE(390)
				Dynamic tmp2 = (::hscript::ExprDef(_g))->__Param(2);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(390)
				Dynamic e2 = tmp2;		HX_STACK_VAR(e2,"e2");
				HX_STACK_LINE(390)
				Dynamic tmp3 = (::hscript::ExprDef(_g))->__Param(1);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(390)
				Dynamic e1 = tmp3;		HX_STACK_VAR(e1,"e1");
				HX_STACK_LINE(390)
				Dynamic tmp4 = (::hscript::ExprDef(_g))->__Param(0);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(390)
				Dynamic cond = tmp4;		HX_STACK_VAR(cond,"cond");
				HX_STACK_LINE(395)
				bool tmp5 = (e2 == null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(395)
				if ((tmp5)){
					HX_STACK_LINE(396)
					Dynamic tmp6 = cond;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(396)
					::String tmp7 = tmp;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(396)
					Dynamic tmp8 = e1;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(396)
					Dynamic tmp9 = this->mapCompr(tmp7,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(396)
					tmp1 = ::hscript::ExprDef_obj::EIf(tmp6,tmp9,null());
				}
				else{
					HX_STACK_LINE(402)
					Dynamic tmp6;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(402)
					{
						HX_STACK_LINE(402)
						Dynamic tmp7;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(402)
						{
							HX_STACK_LINE(402)
							::String tmp8 = tmp;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(402)
							::hscript::ExprDef tmp9 = ::hscript::ExprDef_obj::EIdent(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(402)
							::hscript::ExprDef e3 = tmp9;		HX_STACK_VAR(e3,"e3");
							HX_STACK_LINE(402)
							Dynamic pmin = e->__Field(HX_HCSTRING("pmin","\x22","\xf7","\x5a","\x4a"), hx::paccDynamic );		HX_STACK_VAR(pmin,"pmin");
							HX_STACK_LINE(402)
							Dynamic pmax = e->__Field(HX_HCSTRING("pmax","\x34","\xf0","\x5a","\x4a"), hx::paccDynamic );		HX_STACK_VAR(pmax,"pmax");
							HX_STACK_LINE(402)
							bool tmp10 = (pmin == null());		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(402)
							if ((tmp10)){
								HX_STACK_LINE(402)
								int tmp11 = this->tokenMin;		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(402)
								pmin = tmp11;
							}
							HX_STACK_LINE(402)
							bool tmp11 = (pmax == null());		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(402)
							if ((tmp11)){
								HX_STACK_LINE(402)
								int tmp12 = this->tokenMax;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(402)
								pmax = tmp12;
							}
							struct _Function_6_1{
								inline static Dynamic Block( Dynamic &pmax,::hscript::ExprDef &e3,Dynamic &pmin){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","hscript/Parser.hx",402,0x98735743)
									{
										hx::Anon __result = hx::Anon_obj::Create();
										__result->Add(HX_HCSTRING("e","\x65","\x00","\x00","\x00") , e3,false);
										__result->Add(HX_HCSTRING("pmin","\x22","\xf7","\x5a","\x4a") , pmin,false);
										__result->Add(HX_HCSTRING("pmax","\x34","\xf0","\x5a","\x4a") , pmax,false);
										return __result;
									}
									return null();
								}
							};
							HX_STACK_LINE(402)
							tmp7 = _Function_6_1::Block(pmax,e3,pmin);
						}
						HX_STACK_LINE(402)
						::hscript::ExprDef tmp8 = ::hscript::ExprDef_obj::EField(tmp7,HX_HCSTRING("push","\xda","\x11","\x61","\x4a"));		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(402)
						::hscript::ExprDef e3 = tmp8;		HX_STACK_VAR(e3,"e3");
						HX_STACK_LINE(402)
						Dynamic pmin = e->__Field(HX_HCSTRING("pmin","\x22","\xf7","\x5a","\x4a"), hx::paccDynamic );		HX_STACK_VAR(pmin,"pmin");
						HX_STACK_LINE(402)
						Dynamic pmax = e->__Field(HX_HCSTRING("pmax","\x34","\xf0","\x5a","\x4a"), hx::paccDynamic );		HX_STACK_VAR(pmax,"pmax");
						HX_STACK_LINE(402)
						bool tmp9 = (pmin == null());		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(402)
						if ((tmp9)){
							HX_STACK_LINE(402)
							int tmp10 = this->tokenMin;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(402)
							pmin = tmp10;
						}
						HX_STACK_LINE(402)
						bool tmp10 = (pmax == null());		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(402)
						if ((tmp10)){
							HX_STACK_LINE(402)
							int tmp11 = this->tokenMax;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(402)
							pmax = tmp11;
						}
						struct _Function_5_1{
							inline static Dynamic Block( Dynamic &pmax,::hscript::ExprDef &e3,Dynamic &pmin){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","hscript/Parser.hx",402,0x98735743)
								{
									hx::Anon __result = hx::Anon_obj::Create();
									__result->Add(HX_HCSTRING("e","\x65","\x00","\x00","\x00") , e3,false);
									__result->Add(HX_HCSTRING("pmin","\x22","\xf7","\x5a","\x4a") , pmin,false);
									__result->Add(HX_HCSTRING("pmax","\x34","\xf0","\x5a","\x4a") , pmax,false);
									return __result;
								}
								return null();
							}
						};
						HX_STACK_LINE(402)
						tmp6 = _Function_5_1::Block(pmax,e3,pmin);
					}
					HX_STACK_LINE(402)
					tmp1 = ::hscript::ExprDef_obj::ECall(tmp6,cpp::ArrayBase_obj::__new().Add(e));
				}
			}
			;break;
			case (int)4: {
				HX_STACK_LINE(390)
				int tmp2 = (::hscript::ExprDef(_g))->__Param(0)->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(390)
				switch( (int)(tmp2)){
					case (int)1: {
						HX_STACK_LINE(390)
						Dynamic tmp3 = (::hscript::ExprDef(_g))->__Param(0)->__GetItem((int)0);		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(390)
						Dynamic e1 = tmp3;		HX_STACK_VAR(e1,"e1");
						HX_STACK_LINE(397)
						{
							HX_STACK_LINE(398)
							::String tmp4 = tmp;		HX_STACK_VAR(tmp4,"tmp4");
							HX_STACK_LINE(398)
							Dynamic tmp5 = e1;		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(398)
							Dynamic tmp6 = this->mapCompr(tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(398)
							tmp1 = ::hscript::ExprDef_obj::EBlock(cpp::ArrayBase_obj::__new().Add(tmp6));
						}
					}
					;break;
					default: {
						HX_STACK_LINE(402)
						Dynamic tmp3;		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(402)
						{
							HX_STACK_LINE(402)
							Dynamic tmp4;		HX_STACK_VAR(tmp4,"tmp4");
							HX_STACK_LINE(402)
							{
								HX_STACK_LINE(402)
								::String tmp5 = tmp;		HX_STACK_VAR(tmp5,"tmp5");
								HX_STACK_LINE(402)
								::hscript::ExprDef tmp6 = ::hscript::ExprDef_obj::EIdent(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
								HX_STACK_LINE(402)
								::hscript::ExprDef e1 = tmp6;		HX_STACK_VAR(e1,"e1");
								HX_STACK_LINE(402)
								Dynamic pmin = e->__Field(HX_HCSTRING("pmin","\x22","\xf7","\x5a","\x4a"), hx::paccDynamic );		HX_STACK_VAR(pmin,"pmin");
								HX_STACK_LINE(402)
								Dynamic pmax = e->__Field(HX_HCSTRING("pmax","\x34","\xf0","\x5a","\x4a"), hx::paccDynamic );		HX_STACK_VAR(pmax,"pmax");
								HX_STACK_LINE(402)
								bool tmp7 = (pmin == null());		HX_STACK_VAR(tmp7,"tmp7");
								HX_STACK_LINE(402)
								if ((tmp7)){
									HX_STACK_LINE(402)
									int tmp8 = this->tokenMin;		HX_STACK_VAR(tmp8,"tmp8");
									HX_STACK_LINE(402)
									pmin = tmp8;
								}
								HX_STACK_LINE(402)
								bool tmp8 = (pmax == null());		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(402)
								if ((tmp8)){
									HX_STACK_LINE(402)
									int tmp9 = this->tokenMax;		HX_STACK_VAR(tmp9,"tmp9");
									HX_STACK_LINE(402)
									pmax = tmp9;
								}
								struct _Function_6_1{
									inline static Dynamic Block( ::hscript::ExprDef &e1,Dynamic &pmax,Dynamic &pmin){
										HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","hscript/Parser.hx",402,0x98735743)
										{
											hx::Anon __result = hx::Anon_obj::Create();
											__result->Add(HX_HCSTRING("e","\x65","\x00","\x00","\x00") , e1,false);
											__result->Add(HX_HCSTRING("pmin","\x22","\xf7","\x5a","\x4a") , pmin,false);
											__result->Add(HX_HCSTRING("pmax","\x34","\xf0","\x5a","\x4a") , pmax,false);
											return __result;
										}
										return null();
									}
								};
								HX_STACK_LINE(402)
								tmp4 = _Function_6_1::Block(e1,pmax,pmin);
							}
							HX_STACK_LINE(402)
							::hscript::ExprDef tmp5 = ::hscript::ExprDef_obj::EField(tmp4,HX_HCSTRING("push","\xda","\x11","\x61","\x4a"));		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(402)
							::hscript::ExprDef e1 = tmp5;		HX_STACK_VAR(e1,"e1");
							HX_STACK_LINE(402)
							Dynamic pmin = e->__Field(HX_HCSTRING("pmin","\x22","\xf7","\x5a","\x4a"), hx::paccDynamic );		HX_STACK_VAR(pmin,"pmin");
							HX_STACK_LINE(402)
							Dynamic pmax = e->__Field(HX_HCSTRING("pmax","\x34","\xf0","\x5a","\x4a"), hx::paccDynamic );		HX_STACK_VAR(pmax,"pmax");
							HX_STACK_LINE(402)
							bool tmp6 = (pmin == null());		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(402)
							if ((tmp6)){
								HX_STACK_LINE(402)
								int tmp7 = this->tokenMin;		HX_STACK_VAR(tmp7,"tmp7");
								HX_STACK_LINE(402)
								pmin = tmp7;
							}
							HX_STACK_LINE(402)
							bool tmp7 = (pmax == null());		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(402)
							if ((tmp7)){
								HX_STACK_LINE(402)
								int tmp8 = this->tokenMax;		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(402)
								pmax = tmp8;
							}
							struct _Function_5_1{
								inline static Dynamic Block( ::hscript::ExprDef &e1,Dynamic &pmax,Dynamic &pmin){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","hscript/Parser.hx",402,0x98735743)
									{
										hx::Anon __result = hx::Anon_obj::Create();
										__result->Add(HX_HCSTRING("e","\x65","\x00","\x00","\x00") , e1,false);
										__result->Add(HX_HCSTRING("pmin","\x22","\xf7","\x5a","\x4a") , pmin,false);
										__result->Add(HX_HCSTRING("pmax","\x34","\xf0","\x5a","\x4a") , pmax,false);
										return __result;
									}
									return null();
								}
							};
							HX_STACK_LINE(402)
							tmp3 = _Function_5_1::Block(e1,pmax,pmin);
						}
						HX_STACK_LINE(402)
						tmp1 = ::hscript::ExprDef_obj::ECall(tmp3,cpp::ArrayBase_obj::__new().Add(e));
					}
				}
			}
			;break;
			case (int)3: {
				HX_STACK_LINE(390)
				Dynamic tmp2 = (::hscript::ExprDef(_g))->__Param(0);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(390)
				Dynamic e2 = tmp2;		HX_STACK_VAR(e2,"e2");
				HX_STACK_LINE(399)
				{
					HX_STACK_LINE(400)
					::String tmp3 = tmp;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(400)
					Dynamic tmp4 = e2;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(400)
					Dynamic tmp5 = this->mapCompr(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(400)
					tmp1 = ::hscript::ExprDef_obj::EParent(tmp5);
				}
			}
			;break;
			default: {
				HX_STACK_LINE(402)
				Dynamic tmp2;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(402)
				{
					HX_STACK_LINE(402)
					Dynamic tmp3;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(402)
					{
						HX_STACK_LINE(402)
						::String tmp4 = tmp;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(402)
						::hscript::ExprDef tmp5 = ::hscript::ExprDef_obj::EIdent(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(402)
						::hscript::ExprDef e1 = tmp5;		HX_STACK_VAR(e1,"e1");
						HX_STACK_LINE(402)
						Dynamic pmin = e->__Field(HX_HCSTRING("pmin","\x22","\xf7","\x5a","\x4a"), hx::paccDynamic );		HX_STACK_VAR(pmin,"pmin");
						HX_STACK_LINE(402)
						Dynamic pmax = e->__Field(HX_HCSTRING("pmax","\x34","\xf0","\x5a","\x4a"), hx::paccDynamic );		HX_STACK_VAR(pmax,"pmax");
						HX_STACK_LINE(402)
						bool tmp6 = (pmin == null());		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(402)
						if ((tmp6)){
							HX_STACK_LINE(402)
							int tmp7 = this->tokenMin;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(402)
							pmin = tmp7;
						}
						HX_STACK_LINE(402)
						bool tmp7 = (pmax == null());		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(402)
						if ((tmp7)){
							HX_STACK_LINE(402)
							int tmp8 = this->tokenMax;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(402)
							pmax = tmp8;
						}
						struct _Function_5_1{
							inline static Dynamic Block( ::hscript::ExprDef &e1,Dynamic &pmax,Dynamic &pmin){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","hscript/Parser.hx",402,0x98735743)
								{
									hx::Anon __result = hx::Anon_obj::Create();
									__result->Add(HX_HCSTRING("e","\x65","\x00","\x00","\x00") , e1,false);
									__result->Add(HX_HCSTRING("pmin","\x22","\xf7","\x5a","\x4a") , pmin,false);
									__result->Add(HX_HCSTRING("pmax","\x34","\xf0","\x5a","\x4a") , pmax,false);
									return __result;
								}
								return null();
							}
						};
						HX_STACK_LINE(402)
						tmp3 = _Function_5_1::Block(e1,pmax,pmin);
					}
					HX_STACK_LINE(402)
					::hscript::ExprDef tmp4 = ::hscript::ExprDef_obj::EField(tmp3,HX_HCSTRING("push","\xda","\x11","\x61","\x4a"));		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(402)
					::hscript::ExprDef e1 = tmp4;		HX_STACK_VAR(e1,"e1");
					HX_STACK_LINE(402)
					Dynamic pmin = e->__Field(HX_HCSTRING("pmin","\x22","\xf7","\x5a","\x4a"), hx::paccDynamic );		HX_STACK_VAR(pmin,"pmin");
					HX_STACK_LINE(402)
					Dynamic pmax = e->__Field(HX_HCSTRING("pmax","\x34","\xf0","\x5a","\x4a"), hx::paccDynamic );		HX_STACK_VAR(pmax,"pmax");
					HX_STACK_LINE(402)
					bool tmp5 = (pmin == null());		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(402)
					if ((tmp5)){
						HX_STACK_LINE(402)
						int tmp6 = this->tokenMin;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(402)
						pmin = tmp6;
					}
					HX_STACK_LINE(402)
					bool tmp6 = (pmax == null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(402)
					if ((tmp6)){
						HX_STACK_LINE(402)
						int tmp7 = this->tokenMax;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(402)
						pmax = tmp7;
					}
					struct _Function_4_1{
						inline static Dynamic Block( ::hscript::ExprDef &e1,Dynamic &pmax,Dynamic &pmin){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","hscript/Parser.hx",402,0x98735743)
							{
								hx::Anon __result = hx::Anon_obj::Create();
								__result->Add(HX_HCSTRING("e","\x65","\x00","\x00","\x00") , e1,false);
								__result->Add(HX_HCSTRING("pmin","\x22","\xf7","\x5a","\x4a") , pmin,false);
								__result->Add(HX_HCSTRING("pmax","\x34","\xf0","\x5a","\x4a") , pmax,false);
								return __result;
							}
							return null();
						}
					};
					HX_STACK_LINE(402)
					tmp2 = _Function_4_1::Block(e1,pmax,pmin);
				}
				HX_STACK_LINE(402)
				tmp1 = ::hscript::ExprDef_obj::ECall(tmp2,cpp::ArrayBase_obj::__new().Add(e));
			}
		}
	}
	HX_STACK_LINE(390)
	::hscript::ExprDef edef = tmp1;		HX_STACK_VAR(edef,"edef");
	HX_STACK_LINE(404)
	Dynamic tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(404)
	{
		HX_STACK_LINE(404)
		Dynamic pmin = e->__Field(HX_HCSTRING("pmin","\x22","\xf7","\x5a","\x4a"), hx::paccDynamic );		HX_STACK_VAR(pmin,"pmin");
		HX_STACK_LINE(404)
		Dynamic pmax = e->__Field(HX_HCSTRING("pmax","\x34","\xf0","\x5a","\x4a"), hx::paccDynamic );		HX_STACK_VAR(pmax,"pmax");
		HX_STACK_LINE(404)
		bool tmp3 = (pmin == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(404)
		if ((tmp3)){
			HX_STACK_LINE(404)
			int tmp4 = this->tokenMin;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(404)
			pmin = tmp4;
		}
		HX_STACK_LINE(404)
		bool tmp4 = (pmax == null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(404)
		if ((tmp4)){
			HX_STACK_LINE(404)
			int tmp5 = this->tokenMax;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(404)
			pmax = tmp5;
		}
		struct _Function_2_1{
			inline static Dynamic Block( Dynamic &pmax,::hscript::ExprDef &edef,Dynamic &pmin){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","hscript/Parser.hx",404,0x98735743)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("e","\x65","\x00","\x00","\x00") , edef,false);
					__result->Add(HX_HCSTRING("pmin","\x22","\xf7","\x5a","\x4a") , pmin,false);
					__result->Add(HX_HCSTRING("pmax","\x34","\xf0","\x5a","\x4a") , pmax,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(404)
		tmp2 = _Function_2_1::Block(pmax,edef,pmin);
	}
	HX_STACK_LINE(404)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC2(Parser_obj,mapCompr,return )

Dynamic Parser_obj::makeUnop( ::String op,Dynamic e){
	HX_STACK_FRAME("hscript.Parser","makeUnop",0x60b6401c,"hscript.Parser.makeUnop","hscript/Parser.hx",407,0x98735743)
	HX_STACK_THIS(this)
	HX_STACK_ARG(op,"op")
	HX_STACK_ARG(e,"e")
	HX_STACK_LINE(408)
	Dynamic tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(408)
	{
		HX_STACK_LINE(408)
		::hscript::ExprDef _g = e->__Field(HX_HCSTRING("e","\x65","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(408)
		switch( (int)(_g->__Index())){
			case (int)6: {
				HX_STACK_LINE(408)
				Dynamic tmp1 = (::hscript::ExprDef(_g))->__Param(2);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(408)
				Dynamic e2 = tmp1;		HX_STACK_VAR(e2,"e2");
				HX_STACK_LINE(408)
				Dynamic tmp2 = (::hscript::ExprDef(_g))->__Param(1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(408)
				Dynamic e1 = tmp2;		HX_STACK_VAR(e1,"e1");
				HX_STACK_LINE(408)
				::String tmp3 = (::hscript::ExprDef(_g))->__Param(0);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(408)
				::String bop = tmp3;		HX_STACK_VAR(bop,"bop");
				HX_STACK_LINE(409)
				{
					HX_STACK_LINE(409)
					::String tmp4 = bop;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(409)
					::String tmp5 = op;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(409)
					Dynamic tmp6 = e1;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(409)
					Dynamic tmp7 = this->makeUnop(tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(409)
					Dynamic tmp8 = e2;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(409)
					::hscript::ExprDef tmp9 = ::hscript::ExprDef_obj::EBinop(tmp4,tmp7,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(409)
					::hscript::ExprDef e3 = tmp9;		HX_STACK_VAR(e3,"e3");
					HX_STACK_LINE(409)
					Dynamic pmin = e1->__Field(HX_HCSTRING("pmin","\x22","\xf7","\x5a","\x4a"), hx::paccDynamic );		HX_STACK_VAR(pmin,"pmin");
					HX_STACK_LINE(409)
					Dynamic pmax = e2->__Field(HX_HCSTRING("pmax","\x34","\xf0","\x5a","\x4a"), hx::paccDynamic );		HX_STACK_VAR(pmax,"pmax");
					HX_STACK_LINE(409)
					bool tmp10 = (pmin == null());		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(409)
					if ((tmp10)){
						HX_STACK_LINE(409)
						int tmp11 = this->tokenMin;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(409)
						pmin = tmp11;
					}
					HX_STACK_LINE(409)
					bool tmp11 = (pmax == null());		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(409)
					if ((tmp11)){
						HX_STACK_LINE(409)
						int tmp12 = this->tokenMax;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(409)
						pmax = tmp12;
					}
					struct _Function_4_1{
						inline static Dynamic Block( Dynamic &pmax,::hscript::ExprDef &e3,Dynamic &pmin){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","hscript/Parser.hx",409,0x98735743)
							{
								hx::Anon __result = hx::Anon_obj::Create();
								__result->Add(HX_HCSTRING("e","\x65","\x00","\x00","\x00") , e3,false);
								__result->Add(HX_HCSTRING("pmin","\x22","\xf7","\x5a","\x4a") , pmin,false);
								__result->Add(HX_HCSTRING("pmax","\x34","\xf0","\x5a","\x4a") , pmax,false);
								return __result;
							}
							return null();
						}
					};
					HX_STACK_LINE(409)
					tmp = _Function_4_1::Block(pmax,e3,pmin);
				}
			}
			;break;
			case (int)22: {
				HX_STACK_LINE(408)
				Dynamic tmp1 = (::hscript::ExprDef(_g))->__Param(2);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(408)
				Dynamic e3 = tmp1;		HX_STACK_VAR(e3,"e3");
				HX_STACK_LINE(408)
				Dynamic tmp2 = (::hscript::ExprDef(_g))->__Param(1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(408)
				Dynamic e2 = tmp2;		HX_STACK_VAR(e2,"e2");
				HX_STACK_LINE(408)
				Dynamic tmp3 = (::hscript::ExprDef(_g))->__Param(0);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(408)
				Dynamic e1 = tmp3;		HX_STACK_VAR(e1,"e1");
				HX_STACK_LINE(410)
				{
					HX_STACK_LINE(410)
					::String tmp4 = op;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(410)
					Dynamic tmp5 = e1;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(410)
					Dynamic tmp6 = this->makeUnop(tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(410)
					Dynamic tmp7 = e2;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(410)
					Dynamic tmp8 = e3;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(410)
					::hscript::ExprDef tmp9 = ::hscript::ExprDef_obj::ETernary(tmp6,tmp7,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(410)
					::hscript::ExprDef e4 = tmp9;		HX_STACK_VAR(e4,"e4");
					HX_STACK_LINE(410)
					Dynamic pmin = e1->__Field(HX_HCSTRING("pmin","\x22","\xf7","\x5a","\x4a"), hx::paccDynamic );		HX_STACK_VAR(pmin,"pmin");
					HX_STACK_LINE(410)
					Dynamic pmax = e3->__Field(HX_HCSTRING("pmax","\x34","\xf0","\x5a","\x4a"), hx::paccDynamic );		HX_STACK_VAR(pmax,"pmax");
					HX_STACK_LINE(410)
					bool tmp10 = (pmin == null());		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(410)
					if ((tmp10)){
						HX_STACK_LINE(410)
						int tmp11 = this->tokenMin;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(410)
						pmin = tmp11;
					}
					HX_STACK_LINE(410)
					bool tmp11 = (pmax == null());		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(410)
					if ((tmp11)){
						HX_STACK_LINE(410)
						int tmp12 = this->tokenMax;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(410)
						pmax = tmp12;
					}
					struct _Function_4_1{
						inline static Dynamic Block( Dynamic &pmax,::hscript::ExprDef &e4,Dynamic &pmin){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","hscript/Parser.hx",410,0x98735743)
							{
								hx::Anon __result = hx::Anon_obj::Create();
								__result->Add(HX_HCSTRING("e","\x65","\x00","\x00","\x00") , e4,false);
								__result->Add(HX_HCSTRING("pmin","\x22","\xf7","\x5a","\x4a") , pmin,false);
								__result->Add(HX_HCSTRING("pmax","\x34","\xf0","\x5a","\x4a") , pmax,false);
								return __result;
							}
							return null();
						}
					};
					HX_STACK_LINE(410)
					tmp = _Function_4_1::Block(pmax,e4,pmin);
				}
			}
			;break;
			default: {
				HX_STACK_LINE(411)
				::String tmp1 = op;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(411)
				Dynamic tmp2 = e;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(411)
				::hscript::ExprDef tmp3 = ::hscript::ExprDef_obj::EUnop(tmp1,true,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(411)
				::hscript::ExprDef e1 = tmp3;		HX_STACK_VAR(e1,"e1");
				HX_STACK_LINE(411)
				Dynamic pmin = e->__Field(HX_HCSTRING("pmin","\x22","\xf7","\x5a","\x4a"), hx::paccDynamic );		HX_STACK_VAR(pmin,"pmin");
				HX_STACK_LINE(411)
				Dynamic pmax = e->__Field(HX_HCSTRING("pmax","\x34","\xf0","\x5a","\x4a"), hx::paccDynamic );		HX_STACK_VAR(pmax,"pmax");
				HX_STACK_LINE(411)
				bool tmp4 = (pmin == null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(411)
				if ((tmp4)){
					HX_STACK_LINE(411)
					int tmp5 = this->tokenMin;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(411)
					pmin = tmp5;
				}
				HX_STACK_LINE(411)
				bool tmp5 = (pmax == null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(411)
				if ((tmp5)){
					HX_STACK_LINE(411)
					int tmp6 = this->tokenMax;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(411)
					pmax = tmp6;
				}
				struct _Function_3_1{
					inline static Dynamic Block( ::hscript::ExprDef &e1,Dynamic &pmax,Dynamic &pmin){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","hscript/Parser.hx",411,0x98735743)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_HCSTRING("e","\x65","\x00","\x00","\x00") , e1,false);
							__result->Add(HX_HCSTRING("pmin","\x22","\xf7","\x5a","\x4a") , pmin,false);
							__result->Add(HX_HCSTRING("pmax","\x34","\xf0","\x5a","\x4a") , pmax,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(411)
				tmp = _Function_3_1::Block(e1,pmax,pmin);
			}
		}
	}
	HX_STACK_LINE(408)
	return tmp;
	HX_STACK_LINE(408)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Parser_obj,makeUnop,return )

Dynamic Parser_obj::makeBinop( ::String op,Dynamic e1,Dynamic e){
	HX_STACK_FRAME("hscript.Parser","makeBinop",0x4ad5ff06,"hscript.Parser.makeBinop","hscript/Parser.hx",415,0x98735743)
	HX_STACK_THIS(this)
	HX_STACK_ARG(op,"op")
	HX_STACK_ARG(e1,"e1")
	HX_STACK_ARG(e,"e")
	HX_STACK_LINE(416)
	Dynamic tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(416)
	{
		HX_STACK_LINE(416)
		::hscript::ExprDef _g = e->__Field(HX_HCSTRING("e","\x65","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(416)
		switch( (int)(_g->__Index())){
			case (int)6: {
				HX_STACK_LINE(416)
				Dynamic tmp1 = (::hscript::ExprDef(_g))->__Param(2);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(416)
				Dynamic e3 = tmp1;		HX_STACK_VAR(e3,"e3");
				HX_STACK_LINE(416)
				Dynamic tmp2 = (::hscript::ExprDef(_g))->__Param(1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(416)
				Dynamic e2 = tmp2;		HX_STACK_VAR(e2,"e2");
				HX_STACK_LINE(416)
				::String tmp3 = (::hscript::ExprDef(_g))->__Param(0);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(416)
				::String op2 = tmp3;		HX_STACK_VAR(op2,"op2");
				HX_STACK_LINE(417)
				{
					HX_STACK_LINE(418)
					::haxe::ds::StringMap tmp4 = this->opPriority;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(418)
					::String tmp5 = op;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(418)
					Dynamic tmp6 = tmp4->get(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(418)
					Dynamic tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(418)
					::haxe::ds::StringMap tmp8 = this->opPriority;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(418)
					::String tmp9 = op2;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(418)
					Dynamic tmp10 = tmp8->get(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(418)
					Dynamic tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(418)
					bool tmp12 = (tmp7 <= tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(418)
					bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(418)
					if ((tmp12)){
						HX_STACK_LINE(418)
						::haxe::ds::StringMap tmp14 = this->opRightAssoc;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(418)
						::haxe::ds::StringMap tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(418)
						::String tmp16 = op;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(418)
						::String tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(418)
						bool tmp18 = tmp15->exists(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(418)
						bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(418)
						bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(418)
						tmp13 = !(tmp20);
					}
					else{
						HX_STACK_LINE(418)
						tmp13 = false;
					}
					HX_STACK_LINE(418)
					if ((tmp13)){
						HX_STACK_LINE(419)
						::String tmp14 = op2;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(419)
						::String tmp15 = op;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(419)
						Dynamic tmp16 = e1;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(419)
						Dynamic tmp17 = e2;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(419)
						Dynamic tmp18 = this->makeBinop(tmp15,tmp16,tmp17);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(419)
						Dynamic tmp19 = e3;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(419)
						::hscript::ExprDef tmp20 = ::hscript::ExprDef_obj::EBinop(tmp14,tmp18,tmp19);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(419)
						::hscript::ExprDef e4 = tmp20;		HX_STACK_VAR(e4,"e4");
						HX_STACK_LINE(419)
						Dynamic pmin = e1->__Field(HX_HCSTRING("pmin","\x22","\xf7","\x5a","\x4a"), hx::paccDynamic );		HX_STACK_VAR(pmin,"pmin");
						HX_STACK_LINE(419)
						Dynamic pmax = e3->__Field(HX_HCSTRING("pmax","\x34","\xf0","\x5a","\x4a"), hx::paccDynamic );		HX_STACK_VAR(pmax,"pmax");
						HX_STACK_LINE(419)
						bool tmp21 = (pmin == null());		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(419)
						if ((tmp21)){
							HX_STACK_LINE(419)
							int tmp22 = this->tokenMin;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(419)
							pmin = tmp22;
						}
						HX_STACK_LINE(419)
						bool tmp22 = (pmax == null());		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(419)
						if ((tmp22)){
							HX_STACK_LINE(419)
							int tmp23 = this->tokenMax;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(419)
							pmax = tmp23;
						}
						struct _Function_5_1{
							inline static Dynamic Block( Dynamic &pmax,::hscript::ExprDef &e4,Dynamic &pmin){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","hscript/Parser.hx",419,0x98735743)
								{
									hx::Anon __result = hx::Anon_obj::Create();
									__result->Add(HX_HCSTRING("e","\x65","\x00","\x00","\x00") , e4,false);
									__result->Add(HX_HCSTRING("pmin","\x22","\xf7","\x5a","\x4a") , pmin,false);
									__result->Add(HX_HCSTRING("pmax","\x34","\xf0","\x5a","\x4a") , pmax,false);
									return __result;
								}
								return null();
							}
						};
						HX_STACK_LINE(419)
						tmp = _Function_5_1::Block(pmax,e4,pmin);
					}
					else{
						HX_STACK_LINE(421)
						::String tmp14 = op;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(421)
						Dynamic tmp15 = e1;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(421)
						Dynamic tmp16 = e;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(421)
						::hscript::ExprDef tmp17 = ::hscript::ExprDef_obj::EBinop(tmp14,tmp15,tmp16);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(421)
						::hscript::ExprDef e4 = tmp17;		HX_STACK_VAR(e4,"e4");
						HX_STACK_LINE(421)
						Dynamic pmin = e1->__Field(HX_HCSTRING("pmin","\x22","\xf7","\x5a","\x4a"), hx::paccDynamic );		HX_STACK_VAR(pmin,"pmin");
						HX_STACK_LINE(421)
						Dynamic pmax = e->__Field(HX_HCSTRING("pmax","\x34","\xf0","\x5a","\x4a"), hx::paccDynamic );		HX_STACK_VAR(pmax,"pmax");
						HX_STACK_LINE(421)
						bool tmp18 = (pmin == null());		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(421)
						if ((tmp18)){
							HX_STACK_LINE(421)
							int tmp19 = this->tokenMin;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(421)
							pmin = tmp19;
						}
						HX_STACK_LINE(421)
						bool tmp19 = (pmax == null());		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(421)
						if ((tmp19)){
							HX_STACK_LINE(421)
							int tmp20 = this->tokenMax;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(421)
							pmax = tmp20;
						}
						struct _Function_5_1{
							inline static Dynamic Block( Dynamic &pmax,::hscript::ExprDef &e4,Dynamic &pmin){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","hscript/Parser.hx",421,0x98735743)
								{
									hx::Anon __result = hx::Anon_obj::Create();
									__result->Add(HX_HCSTRING("e","\x65","\x00","\x00","\x00") , e4,false);
									__result->Add(HX_HCSTRING("pmin","\x22","\xf7","\x5a","\x4a") , pmin,false);
									__result->Add(HX_HCSTRING("pmax","\x34","\xf0","\x5a","\x4a") , pmax,false);
									return __result;
								}
								return null();
							}
						};
						HX_STACK_LINE(421)
						tmp = _Function_5_1::Block(pmax,e4,pmin);
					}
				}
			}
			;break;
			case (int)22: {
				HX_STACK_LINE(416)
				Dynamic tmp1 = (::hscript::ExprDef(_g))->__Param(2);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(416)
				Dynamic e4 = tmp1;		HX_STACK_VAR(e4,"e4");
				HX_STACK_LINE(416)
				Dynamic tmp2 = (::hscript::ExprDef(_g))->__Param(1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(416)
				Dynamic e3 = tmp2;		HX_STACK_VAR(e3,"e3");
				HX_STACK_LINE(416)
				Dynamic tmp3 = (::hscript::ExprDef(_g))->__Param(0);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(416)
				Dynamic e2 = tmp3;		HX_STACK_VAR(e2,"e2");
				HX_STACK_LINE(422)
				{
					HX_STACK_LINE(423)
					::haxe::ds::StringMap tmp4 = this->opRightAssoc;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(423)
					::String tmp5 = op;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(423)
					bool tmp6 = tmp4->exists(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(423)
					if ((tmp6)){
						HX_STACK_LINE(424)
						::String tmp7 = op;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(424)
						Dynamic tmp8 = e1;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(424)
						Dynamic tmp9 = e;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(424)
						::hscript::ExprDef tmp10 = ::hscript::ExprDef_obj::EBinop(tmp7,tmp8,tmp9);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(424)
						::hscript::ExprDef e5 = tmp10;		HX_STACK_VAR(e5,"e5");
						HX_STACK_LINE(424)
						Dynamic pmin = e1->__Field(HX_HCSTRING("pmin","\x22","\xf7","\x5a","\x4a"), hx::paccDynamic );		HX_STACK_VAR(pmin,"pmin");
						HX_STACK_LINE(424)
						Dynamic pmax = e->__Field(HX_HCSTRING("pmax","\x34","\xf0","\x5a","\x4a"), hx::paccDynamic );		HX_STACK_VAR(pmax,"pmax");
						HX_STACK_LINE(424)
						bool tmp11 = (pmin == null());		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(424)
						if ((tmp11)){
							HX_STACK_LINE(424)
							int tmp12 = this->tokenMin;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(424)
							pmin = tmp12;
						}
						HX_STACK_LINE(424)
						bool tmp12 = (pmax == null());		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(424)
						if ((tmp12)){
							HX_STACK_LINE(424)
							int tmp13 = this->tokenMax;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(424)
							pmax = tmp13;
						}
						struct _Function_5_1{
							inline static Dynamic Block( Dynamic &pmax,::hscript::ExprDef &e5,Dynamic &pmin){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","hscript/Parser.hx",424,0x98735743)
								{
									hx::Anon __result = hx::Anon_obj::Create();
									__result->Add(HX_HCSTRING("e","\x65","\x00","\x00","\x00") , e5,false);
									__result->Add(HX_HCSTRING("pmin","\x22","\xf7","\x5a","\x4a") , pmin,false);
									__result->Add(HX_HCSTRING("pmax","\x34","\xf0","\x5a","\x4a") , pmax,false);
									return __result;
								}
								return null();
							}
						};
						HX_STACK_LINE(424)
						tmp = _Function_5_1::Block(pmax,e5,pmin);
					}
					else{
						HX_STACK_LINE(426)
						::String tmp7 = op;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(426)
						Dynamic tmp8 = e1;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(426)
						Dynamic tmp9 = e2;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(426)
						Dynamic tmp10 = this->makeBinop(tmp7,tmp8,tmp9);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(426)
						Dynamic tmp11 = e3;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(426)
						Dynamic tmp12 = e4;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(426)
						::hscript::ExprDef tmp13 = ::hscript::ExprDef_obj::ETernary(tmp10,tmp11,tmp12);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(426)
						::hscript::ExprDef e5 = tmp13;		HX_STACK_VAR(e5,"e5");
						HX_STACK_LINE(426)
						Dynamic pmin = e1->__Field(HX_HCSTRING("pmin","\x22","\xf7","\x5a","\x4a"), hx::paccDynamic );		HX_STACK_VAR(pmin,"pmin");
						HX_STACK_LINE(426)
						Dynamic pmax = e->__Field(HX_HCSTRING("pmax","\x34","\xf0","\x5a","\x4a"), hx::paccDynamic );		HX_STACK_VAR(pmax,"pmax");
						HX_STACK_LINE(426)
						bool tmp14 = (pmin == null());		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(426)
						if ((tmp14)){
							HX_STACK_LINE(426)
							int tmp15 = this->tokenMin;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(426)
							pmin = tmp15;
						}
						HX_STACK_LINE(426)
						bool tmp15 = (pmax == null());		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(426)
						if ((tmp15)){
							HX_STACK_LINE(426)
							int tmp16 = this->tokenMax;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(426)
							pmax = tmp16;
						}
						struct _Function_5_1{
							inline static Dynamic Block( Dynamic &pmax,::hscript::ExprDef &e5,Dynamic &pmin){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","hscript/Parser.hx",426,0x98735743)
								{
									hx::Anon __result = hx::Anon_obj::Create();
									__result->Add(HX_HCSTRING("e","\x65","\x00","\x00","\x00") , e5,false);
									__result->Add(HX_HCSTRING("pmin","\x22","\xf7","\x5a","\x4a") , pmin,false);
									__result->Add(HX_HCSTRING("pmax","\x34","\xf0","\x5a","\x4a") , pmax,false);
									return __result;
								}
								return null();
							}
						};
						HX_STACK_LINE(426)
						tmp = _Function_5_1::Block(pmax,e5,pmin);
					}
				}
			}
			;break;
			default: {
				HX_STACK_LINE(428)
				::String tmp1 = op;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(428)
				Dynamic tmp2 = e1;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(428)
				Dynamic tmp3 = e;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(428)
				::hscript::ExprDef tmp4 = ::hscript::ExprDef_obj::EBinop(tmp1,tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(428)
				::hscript::ExprDef e2 = tmp4;		HX_STACK_VAR(e2,"e2");
				HX_STACK_LINE(428)
				Dynamic pmin = e1->__Field(HX_HCSTRING("pmin","\x22","\xf7","\x5a","\x4a"), hx::paccDynamic );		HX_STACK_VAR(pmin,"pmin");
				HX_STACK_LINE(428)
				Dynamic pmax = e->__Field(HX_HCSTRING("pmax","\x34","\xf0","\x5a","\x4a"), hx::paccDynamic );		HX_STACK_VAR(pmax,"pmax");
				HX_STACK_LINE(428)
				bool tmp5 = (pmin == null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(428)
				if ((tmp5)){
					HX_STACK_LINE(428)
					int tmp6 = this->tokenMin;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(428)
					pmin = tmp6;
				}
				HX_STACK_LINE(428)
				bool tmp6 = (pmax == null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(428)
				if ((tmp6)){
					HX_STACK_LINE(428)
					int tmp7 = this->tokenMax;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(428)
					pmax = tmp7;
				}
				struct _Function_3_1{
					inline static Dynamic Block( Dynamic &pmax,::hscript::ExprDef &e2,Dynamic &pmin){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","hscript/Parser.hx",428,0x98735743)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_HCSTRING("e","\x65","\x00","\x00","\x00") , e2,false);
							__result->Add(HX_HCSTRING("pmin","\x22","\xf7","\x5a","\x4a") , pmin,false);
							__result->Add(HX_HCSTRING("pmax","\x34","\xf0","\x5a","\x4a") , pmax,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(428)
				tmp = _Function_3_1::Block(pmax,e2,pmin);
			}
		}
	}
	HX_STACK_LINE(416)
	return tmp;
	HX_STACK_LINE(416)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Parser_obj,makeBinop,return )

Dynamic Parser_obj::parseStructure( ::String id){
	HX_STACK_FRAME("hscript.Parser","parseStructure",0x237837d4,"hscript.Parser.parseStructure","hscript/Parser.hx",432,0x98735743)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(434)
	int tmp = this->tokenMin;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(434)
	int p1 = tmp;		HX_STACK_VAR(p1,"p1");
	HX_STACK_LINE(436)
	::String tmp1 = id;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(436)
	Dynamic tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(436)
	::String _switch_3 = (tmp1);
	if (  ( _switch_3==HX_HCSTRING("if","\xdd","\x5b","\x00","\x00"))){
		HX_STACK_LINE(438)
		{
			HX_STACK_LINE(438)
			::hscript::Token tmp3 = this->token();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(438)
			::hscript::Token t = tmp3;		HX_STACK_VAR(t,"t");
			HX_STACK_LINE(438)
			bool tmp4 = (t != ::hscript::Token_obj::TPOpen);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(438)
			if ((tmp4)){
				HX_STACK_LINE(438)
				::hscript::Token tmp5 = t;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(438)
				this->unexpected(tmp5);
			}
		}
		HX_STACK_LINE(439)
		Dynamic tmp3 = this->parseExpr();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(439)
		Dynamic cond = tmp3;		HX_STACK_VAR(cond,"cond");
		HX_STACK_LINE(440)
		{
			HX_STACK_LINE(440)
			::hscript::Token tmp4 = this->token();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(440)
			::hscript::Token t = tmp4;		HX_STACK_VAR(t,"t");
			HX_STACK_LINE(440)
			bool tmp5 = (t != ::hscript::Token_obj::TPClose);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(440)
			if ((tmp5)){
				HX_STACK_LINE(440)
				::hscript::Token tmp6 = t;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(440)
				this->unexpected(tmp6);
			}
		}
		HX_STACK_LINE(441)
		Dynamic tmp4 = this->parseExpr();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(441)
		Dynamic e1 = tmp4;		HX_STACK_VAR(e1,"e1");
		HX_STACK_LINE(442)
		Dynamic e2 = null();		HX_STACK_VAR(e2,"e2");
		HX_STACK_LINE(443)
		bool semic = false;		HX_STACK_VAR(semic,"semic");
		HX_STACK_LINE(444)
		::hscript::Token tmp5 = this->token();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(444)
		::hscript::Token tk = tmp5;		HX_STACK_VAR(tk,"tk");
		HX_STACK_LINE(445)
		bool tmp6 = (tk == ::hscript::Token_obj::TSemicolon);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(445)
		if ((tmp6)){
			HX_STACK_LINE(446)
			semic = true;
			HX_STACK_LINE(447)
			::hscript::Token tmp7 = this->token();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(447)
			tk = tmp7;
		}
		HX_STACK_LINE(449)
		::hscript::Token tmp7 = tk;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(449)
		::hscript::Token tmp8 = ::hscript::Token_obj::TId(HX_HCSTRING("else","\xb9","\xe4","\x14","\x43"));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(449)
		bool tmp9 = ::Type_obj::enumEq(tmp7,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(449)
		if ((tmp9)){
			HX_STACK_LINE(450)
			Dynamic tmp10 = this->parseExpr();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(450)
			e2 = tmp10;
		}
		else{
			HX_STACK_LINE(452)
			{
				HX_STACK_LINE(452)
				::List tmp10 = this->tokens;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(452)
				::hscript::Token tmp11 = tk;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(452)
				int tmp12 = this->tokenMin;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(452)
				int tmp13 = this->tokenMax;		HX_STACK_VAR(tmp13,"tmp13");
				struct _Function_4_1{
					inline static Dynamic Block( int &tmp13,::hscript::Token &tmp11,int &tmp12){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","hscript/Parser.hx",452,0x98735743)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_HCSTRING("t","\x74","\x00","\x00","\x00") , tmp11,false);
							__result->Add(HX_HCSTRING("min","\x92","\x11","\x53","\x00") , tmp12,false);
							__result->Add(HX_HCSTRING("max","\xa4","\x0a","\x53","\x00") , tmp13,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(452)
				Dynamic tmp14 = _Function_4_1::Block(tmp13,tmp11,tmp12);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(452)
				tmp10->push(tmp14);
				HX_STACK_LINE(452)
				int tmp15 = this->oldTokenMin;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(452)
				this->tokenMin = tmp15;
				HX_STACK_LINE(452)
				int tmp16 = this->oldTokenMax;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(452)
				this->tokenMax = tmp16;
			}
			HX_STACK_LINE(453)
			bool tmp10 = semic;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(453)
			if ((tmp10)){
				HX_STACK_LINE(453)
				::List tmp11 = this->tokens;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(453)
				int tmp12 = this->tokenMin;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(453)
				int tmp13 = this->tokenMax;		HX_STACK_VAR(tmp13,"tmp13");
				struct _Function_4_1{
					inline static Dynamic Block( int &tmp13,int &tmp12){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","hscript/Parser.hx",453,0x98735743)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_HCSTRING("t","\x74","\x00","\x00","\x00") , ::hscript::Token_obj::TSemicolon,false);
							__result->Add(HX_HCSTRING("min","\x92","\x11","\x53","\x00") , tmp12,false);
							__result->Add(HX_HCSTRING("max","\xa4","\x0a","\x53","\x00") , tmp13,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(453)
				Dynamic tmp14 = _Function_4_1::Block(tmp13,tmp12);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(453)
				tmp11->push(tmp14);
				HX_STACK_LINE(453)
				int tmp15 = this->oldTokenMin;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(453)
				this->tokenMin = tmp15;
				HX_STACK_LINE(453)
				int tmp16 = this->oldTokenMax;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(453)
				this->tokenMax = tmp16;
			}
		}
		HX_STACK_LINE(455)
		{
			HX_STACK_LINE(455)
			Dynamic tmp10 = cond;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(455)
			Dynamic tmp11 = e1;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(455)
			Dynamic tmp12 = e2;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(455)
			::hscript::ExprDef tmp13 = ::hscript::ExprDef_obj::EIf(tmp10,tmp11,tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(455)
			::hscript::ExprDef e = tmp13;		HX_STACK_VAR(e,"e");
			HX_STACK_LINE(455)
			Dynamic pmin = p1;		HX_STACK_VAR(pmin,"pmin");
			HX_STACK_LINE(455)
			bool tmp14 = (e2 == null());		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(455)
			Dynamic tmp15;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(455)
			if ((tmp14)){
				HX_STACK_LINE(455)
				tmp15 = this->tokenMax;
			}
			else{
				HX_STACK_LINE(455)
				tmp15 = e2->__Field(HX_HCSTRING("pmax","\x34","\xf0","\x5a","\x4a"), hx::paccDynamic );
			}
			HX_STACK_LINE(455)
			Dynamic pmax = tmp15;		HX_STACK_VAR(pmax,"pmax");
			HX_STACK_LINE(455)
			bool tmp16 = (pmin == null());		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(455)
			if ((tmp16)){
				HX_STACK_LINE(455)
				int tmp17 = this->tokenMin;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(455)
				pmin = tmp17;
			}
			HX_STACK_LINE(455)
			bool tmp17 = (pmax == null());		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(455)
			if ((tmp17)){
				HX_STACK_LINE(455)
				int tmp18 = this->tokenMax;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(455)
				pmax = tmp18;
			}
			struct _Function_3_1{
				inline static Dynamic Block( Dynamic &pmax,::hscript::ExprDef &e,Dynamic &pmin){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","hscript/Parser.hx",455,0x98735743)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_HCSTRING("e","\x65","\x00","\x00","\x00") , e,false);
						__result->Add(HX_HCSTRING("pmin","\x22","\xf7","\x5a","\x4a") , pmin,false);
						__result->Add(HX_HCSTRING("pmax","\x34","\xf0","\x5a","\x4a") , pmax,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(455)
			tmp2 = _Function_3_1::Block(pmax,e,pmin);
		}
	}
	else if (  ( _switch_3==HX_HCSTRING("var","\xe7","\xde","\x59","\x00"))){
		HX_STACK_LINE(457)
		::hscript::Token tmp3 = this->token();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(457)
		::hscript::Token tk = tmp3;		HX_STACK_VAR(tk,"tk");
		HX_STACK_LINE(458)
		::String ident = null();		HX_STACK_VAR(ident,"ident");
		HX_STACK_LINE(459)
		switch( (int)(tk->__Index())){
			case (int)2: {
				HX_STACK_LINE(459)
				::String tmp4 = (::hscript::Token(tk))->__Param(0);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(459)
				::String id1 = tmp4;		HX_STACK_VAR(id1,"id1");
				HX_STACK_LINE(460)
				ident = id1;
			}
			;break;
			default: {
				HX_STACK_LINE(461)
				::hscript::Token tmp4 = tk;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(461)
				this->unexpected(tmp4);
			}
		}
		HX_STACK_LINE(463)
		::hscript::Token tmp4 = this->token();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(463)
		tk = tmp4;
		HX_STACK_LINE(464)
		::hscript::CType t = null();		HX_STACK_VAR(t,"t");
		HX_STACK_LINE(465)
		bool tmp5 = (tk == ::hscript::Token_obj::TDoubleDot);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(465)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(465)
		if ((tmp5)){
			HX_STACK_LINE(465)
			tmp6 = this->allowTypes;
		}
		else{
			HX_STACK_LINE(465)
			tmp6 = false;
		}
		HX_STACK_LINE(465)
		if ((tmp6)){
			HX_STACK_LINE(466)
			::hscript::CType tmp7 = this->parseType();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(466)
			t = tmp7;
			HX_STACK_LINE(467)
			::hscript::Token tmp8 = this->token();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(467)
			tk = tmp8;
		}
		HX_STACK_LINE(469)
		Dynamic e = null();		HX_STACK_VAR(e,"e");
		HX_STACK_LINE(470)
		::hscript::Token tmp7 = tk;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(470)
		::hscript::Token tmp8 = ::hscript::Token_obj::TOp(HX_HCSTRING("=","\x3d","\x00","\x00","\x00"));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(470)
		bool tmp9 = ::Type_obj::enumEq(tmp7,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(470)
		if ((tmp9)){
			HX_STACK_LINE(471)
			Dynamic tmp10 = this->parseExpr();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(471)
			e = tmp10;
		}
		else{
			HX_STACK_LINE(473)
			::List tmp10 = this->tokens;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(473)
			::hscript::Token tmp11 = tk;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(473)
			int tmp12 = this->tokenMin;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(473)
			int tmp13 = this->tokenMax;		HX_STACK_VAR(tmp13,"tmp13");
			struct _Function_3_1{
				inline static Dynamic Block( int &tmp13,::hscript::Token &tmp11,int &tmp12){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","hscript/Parser.hx",473,0x98735743)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_HCSTRING("t","\x74","\x00","\x00","\x00") , tmp11,false);
						__result->Add(HX_HCSTRING("min","\x92","\x11","\x53","\x00") , tmp12,false);
						__result->Add(HX_HCSTRING("max","\xa4","\x0a","\x53","\x00") , tmp13,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(473)
			Dynamic tmp14 = _Function_3_1::Block(tmp13,tmp11,tmp12);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(473)
			tmp10->push(tmp14);
			HX_STACK_LINE(473)
			int tmp15 = this->oldTokenMin;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(473)
			this->tokenMin = tmp15;
			HX_STACK_LINE(473)
			int tmp16 = this->oldTokenMax;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(473)
			this->tokenMax = tmp16;
		}
		HX_STACK_LINE(474)
		{
			HX_STACK_LINE(474)
			::String tmp10 = ident;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(474)
			::hscript::CType tmp11 = t;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(474)
			Dynamic tmp12 = e;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(474)
			::hscript::ExprDef tmp13 = ::hscript::ExprDef_obj::EVar(tmp10,tmp11,tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(474)
			::hscript::ExprDef e1 = tmp13;		HX_STACK_VAR(e1,"e1");
			HX_STACK_LINE(474)
			Dynamic pmin = p1;		HX_STACK_VAR(pmin,"pmin");
			HX_STACK_LINE(474)
			bool tmp14 = (e == null());		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(474)
			Dynamic tmp15;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(474)
			if ((tmp14)){
				HX_STACK_LINE(474)
				tmp15 = this->tokenMax;
			}
			else{
				HX_STACK_LINE(474)
				tmp15 = e->__Field(HX_HCSTRING("pmax","\x34","\xf0","\x5a","\x4a"), hx::paccDynamic );
			}
			HX_STACK_LINE(474)
			Dynamic pmax = tmp15;		HX_STACK_VAR(pmax,"pmax");
			HX_STACK_LINE(474)
			bool tmp16 = (pmin == null());		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(474)
			if ((tmp16)){
				HX_STACK_LINE(474)
				int tmp17 = this->tokenMin;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(474)
				pmin = tmp17;
			}
			HX_STACK_LINE(474)
			bool tmp17 = (pmax == null());		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(474)
			if ((tmp17)){
				HX_STACK_LINE(474)
				int tmp18 = this->tokenMax;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(474)
				pmax = tmp18;
			}
			struct _Function_3_1{
				inline static Dynamic Block( ::hscript::ExprDef &e1,Dynamic &pmax,Dynamic &pmin){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","hscript/Parser.hx",474,0x98735743)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_HCSTRING("e","\x65","\x00","\x00","\x00") , e1,false);
						__result->Add(HX_HCSTRING("pmin","\x22","\xf7","\x5a","\x4a") , pmin,false);
						__result->Add(HX_HCSTRING("pmax","\x34","\xf0","\x5a","\x4a") , pmax,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(474)
			tmp2 = _Function_3_1::Block(e1,pmax,pmin);
		}
	}
	else if (  ( _switch_3==HX_HCSTRING("while","\xb1","\x43","\xbd","\xc9"))){
		HX_STACK_LINE(476)
		Dynamic tmp3 = this->parseExpr();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(476)
		Dynamic econd = tmp3;		HX_STACK_VAR(econd,"econd");
		HX_STACK_LINE(477)
		Dynamic tmp4 = this->parseExpr();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(477)
		Dynamic e = tmp4;		HX_STACK_VAR(e,"e");
		HX_STACK_LINE(478)
		{
			HX_STACK_LINE(478)
			Dynamic tmp5 = econd;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(478)
			Dynamic tmp6 = e;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(478)
			::hscript::ExprDef tmp7 = ::hscript::ExprDef_obj::EWhile(tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(478)
			::hscript::ExprDef e1 = tmp7;		HX_STACK_VAR(e1,"e1");
			HX_STACK_LINE(478)
			Dynamic pmin = p1;		HX_STACK_VAR(pmin,"pmin");
			HX_STACK_LINE(478)
			Dynamic pmax = e->__Field(HX_HCSTRING("pmax","\x34","\xf0","\x5a","\x4a"), hx::paccDynamic );		HX_STACK_VAR(pmax,"pmax");
			HX_STACK_LINE(478)
			bool tmp8 = (pmin == null());		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(478)
			if ((tmp8)){
				HX_STACK_LINE(478)
				int tmp9 = this->tokenMin;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(478)
				pmin = tmp9;
			}
			HX_STACK_LINE(478)
			bool tmp9 = (pmax == null());		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(478)
			if ((tmp9)){
				HX_STACK_LINE(478)
				int tmp10 = this->tokenMax;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(478)
				pmax = tmp10;
			}
			struct _Function_3_1{
				inline static Dynamic Block( ::hscript::ExprDef &e1,Dynamic &pmax,Dynamic &pmin){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","hscript/Parser.hx",478,0x98735743)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_HCSTRING("e","\x65","\x00","\x00","\x00") , e1,false);
						__result->Add(HX_HCSTRING("pmin","\x22","\xf7","\x5a","\x4a") , pmin,false);
						__result->Add(HX_HCSTRING("pmax","\x34","\xf0","\x5a","\x4a") , pmax,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(478)
			tmp2 = _Function_3_1::Block(e1,pmax,pmin);
		}
	}
	else if (  ( _switch_3==HX_HCSTRING("for","\x09","\xc7","\x4d","\x00"))){
		HX_STACK_LINE(480)
		{
			HX_STACK_LINE(480)
			::hscript::Token tmp3 = this->token();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(480)
			::hscript::Token t = tmp3;		HX_STACK_VAR(t,"t");
			HX_STACK_LINE(480)
			bool tmp4 = (t != ::hscript::Token_obj::TPOpen);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(480)
			if ((tmp4)){
				HX_STACK_LINE(480)
				::hscript::Token tmp5 = t;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(480)
				this->unexpected(tmp5);
			}
		}
		HX_STACK_LINE(481)
		::hscript::Token tmp3 = this->token();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(481)
		::hscript::Token tk = tmp3;		HX_STACK_VAR(tk,"tk");
		HX_STACK_LINE(482)
		::String vname = null();		HX_STACK_VAR(vname,"vname");
		HX_STACK_LINE(483)
		switch( (int)(tk->__Index())){
			case (int)2: {
				HX_STACK_LINE(483)
				::String tmp4 = (::hscript::Token(tk))->__Param(0);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(483)
				::String id1 = tmp4;		HX_STACK_VAR(id1,"id1");
				HX_STACK_LINE(484)
				vname = id1;
			}
			;break;
			default: {
				HX_STACK_LINE(485)
				::hscript::Token tmp4 = tk;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(485)
				this->unexpected(tmp4);
			}
		}
		HX_STACK_LINE(487)
		::hscript::Token tmp4 = this->token();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(487)
		tk = tmp4;
		HX_STACK_LINE(488)
		::hscript::Token tmp5 = tk;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(488)
		::hscript::Token tmp6 = ::hscript::Token_obj::TId(HX_HCSTRING("in","\xe5","\x5b","\x00","\x00"));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(488)
		bool tmp7 = ::Type_obj::enumEq(tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(488)
		bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(488)
		if ((tmp8)){
			HX_STACK_LINE(488)
			::hscript::Token tmp9 = tk;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(488)
			this->unexpected(tmp9);
		}
		HX_STACK_LINE(489)
		Dynamic tmp9 = this->parseExpr();		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(489)
		Dynamic eiter = tmp9;		HX_STACK_VAR(eiter,"eiter");
		HX_STACK_LINE(490)
		{
			HX_STACK_LINE(490)
			::hscript::Token tmp10 = this->token();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(490)
			::hscript::Token t = tmp10;		HX_STACK_VAR(t,"t");
			HX_STACK_LINE(490)
			bool tmp11 = (t != ::hscript::Token_obj::TPClose);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(490)
			if ((tmp11)){
				HX_STACK_LINE(490)
				::hscript::Token tmp12 = t;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(490)
				this->unexpected(tmp12);
			}
		}
		HX_STACK_LINE(491)
		Dynamic tmp10 = this->parseExpr();		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(491)
		Dynamic e = tmp10;		HX_STACK_VAR(e,"e");
		HX_STACK_LINE(492)
		{
			HX_STACK_LINE(492)
			::String tmp11 = vname;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(492)
			Dynamic tmp12 = eiter;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(492)
			Dynamic tmp13 = e;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(492)
			::hscript::ExprDef tmp14 = ::hscript::ExprDef_obj::EFor(tmp11,tmp12,tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(492)
			::hscript::ExprDef e1 = tmp14;		HX_STACK_VAR(e1,"e1");
			HX_STACK_LINE(492)
			Dynamic pmin = p1;		HX_STACK_VAR(pmin,"pmin");
			HX_STACK_LINE(492)
			Dynamic pmax = e->__Field(HX_HCSTRING("pmax","\x34","\xf0","\x5a","\x4a"), hx::paccDynamic );		HX_STACK_VAR(pmax,"pmax");
			HX_STACK_LINE(492)
			bool tmp15 = (pmin == null());		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(492)
			if ((tmp15)){
				HX_STACK_LINE(492)
				int tmp16 = this->tokenMin;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(492)
				pmin = tmp16;
			}
			HX_STACK_LINE(492)
			bool tmp16 = (pmax == null());		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(492)
			if ((tmp16)){
				HX_STACK_LINE(492)
				int tmp17 = this->tokenMax;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(492)
				pmax = tmp17;
			}
			struct _Function_3_1{
				inline static Dynamic Block( ::hscript::ExprDef &e1,Dynamic &pmax,Dynamic &pmin){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","hscript/Parser.hx",492,0x98735743)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_HCSTRING("e","\x65","\x00","\x00","\x00") , e1,false);
						__result->Add(HX_HCSTRING("pmin","\x22","\xf7","\x5a","\x4a") , pmin,false);
						__result->Add(HX_HCSTRING("pmax","\x34","\xf0","\x5a","\x4a") , pmax,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(492)
			tmp2 = _Function_3_1::Block(e1,pmax,pmin);
		}
	}
	else if (  ( _switch_3==HX_HCSTRING("break","\xbf","\x24","\xec","\xb8"))){
		HX_STACK_LINE(493)
		Dynamic pmin = null();		HX_STACK_VAR(pmin,"pmin");
		HX_STACK_LINE(493)
		Dynamic pmax = null();		HX_STACK_VAR(pmax,"pmax");
		HX_STACK_LINE(493)
		bool tmp3 = (pmin == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(493)
		if ((tmp3)){
			HX_STACK_LINE(493)
			int tmp4 = this->tokenMin;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(493)
			pmin = tmp4;
		}
		HX_STACK_LINE(493)
		bool tmp4 = (pmax == null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(493)
		if ((tmp4)){
			HX_STACK_LINE(493)
			int tmp5 = this->tokenMax;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(493)
			pmax = tmp5;
		}
		struct _Function_2_1{
			inline static Dynamic Block( Dynamic &pmax,Dynamic &pmin){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","hscript/Parser.hx",493,0x98735743)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("e","\x65","\x00","\x00","\x00") , ::hscript::ExprDef_obj::EBreak,false);
					__result->Add(HX_HCSTRING("pmin","\x22","\xf7","\x5a","\x4a") , pmin,false);
					__result->Add(HX_HCSTRING("pmax","\x34","\xf0","\x5a","\x4a") , pmax,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(493)
		tmp2 = _Function_2_1::Block(pmax,pmin);
	}
	else if (  ( _switch_3==HX_HCSTRING("continue","\x67","\xe0","\xc8","\x31"))){
		HX_STACK_LINE(494)
		Dynamic pmin = null();		HX_STACK_VAR(pmin,"pmin");
		HX_STACK_LINE(494)
		Dynamic pmax = null();		HX_STACK_VAR(pmax,"pmax");
		HX_STACK_LINE(494)
		bool tmp3 = (pmin == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(494)
		if ((tmp3)){
			HX_STACK_LINE(494)
			int tmp4 = this->tokenMin;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(494)
			pmin = tmp4;
		}
		HX_STACK_LINE(494)
		bool tmp4 = (pmax == null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(494)
		if ((tmp4)){
			HX_STACK_LINE(494)
			int tmp5 = this->tokenMax;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(494)
			pmax = tmp5;
		}
		struct _Function_2_1{
			inline static Dynamic Block( Dynamic &pmax,Dynamic &pmin){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","hscript/Parser.hx",494,0x98735743)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("e","\x65","\x00","\x00","\x00") , ::hscript::ExprDef_obj::EContinue,false);
					__result->Add(HX_HCSTRING("pmin","\x22","\xf7","\x5a","\x4a") , pmin,false);
					__result->Add(HX_HCSTRING("pmax","\x34","\xf0","\x5a","\x4a") , pmax,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(494)
		tmp2 = _Function_2_1::Block(pmax,pmin);
	}
	else if (  ( _switch_3==HX_HCSTRING("else","\xb9","\xe4","\x14","\x43"))){
		HX_STACK_LINE(495)
		::String tmp3 = id;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(495)
		::hscript::Token tmp4 = ::hscript::Token_obj::TId(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(495)
		tmp2 = this->unexpected(tmp4);
	}
	else if (  ( _switch_3==HX_HCSTRING("function","\x18","\xab","\x52","\x14"))){
		HX_STACK_LINE(497)
		::hscript::Token tmp3 = this->token();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(497)
		::hscript::Token tk = tmp3;		HX_STACK_VAR(tk,"tk");
		HX_STACK_LINE(498)
		::String name = null();		HX_STACK_VAR(name,"name");
		HX_STACK_LINE(499)
		switch( (int)(tk->__Index())){
			case (int)2: {
				HX_STACK_LINE(499)
				::String tmp4 = (::hscript::Token(tk))->__Param(0);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(499)
				::String id1 = tmp4;		HX_STACK_VAR(id1,"id1");
				HX_STACK_LINE(500)
				name = id1;
			}
			;break;
			default: {
				HX_STACK_LINE(501)
				::List tmp4 = this->tokens;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(501)
				::hscript::Token tmp5 = tk;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(501)
				int tmp6 = this->tokenMin;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(501)
				int tmp7 = this->tokenMax;		HX_STACK_VAR(tmp7,"tmp7");
				struct _Function_3_1{
					inline static Dynamic Block( ::hscript::Token &tmp5,int &tmp6,int &tmp7){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","hscript/Parser.hx",501,0x98735743)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_HCSTRING("t","\x74","\x00","\x00","\x00") , tmp5,false);
							__result->Add(HX_HCSTRING("min","\x92","\x11","\x53","\x00") , tmp6,false);
							__result->Add(HX_HCSTRING("max","\xa4","\x0a","\x53","\x00") , tmp7,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(501)
				Dynamic tmp8 = _Function_3_1::Block(tmp5,tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(501)
				tmp4->push(tmp8);
				HX_STACK_LINE(501)
				int tmp9 = this->oldTokenMin;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(501)
				this->tokenMin = tmp9;
				HX_STACK_LINE(501)
				int tmp10 = this->oldTokenMax;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(501)
				this->tokenMax = tmp10;
			}
		}
		HX_STACK_LINE(503)
		{
			HX_STACK_LINE(503)
			::hscript::Token tmp4 = this->token();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(503)
			::hscript::Token t = tmp4;		HX_STACK_VAR(t,"t");
			HX_STACK_LINE(503)
			bool tmp5 = (t != ::hscript::Token_obj::TPOpen);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(503)
			if ((tmp5)){
				HX_STACK_LINE(503)
				::hscript::Token tmp6 = t;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(503)
				this->unexpected(tmp6);
			}
		}
		HX_STACK_LINE(504)
		cpp::ArrayBase args = Dynamic( Array_obj<Dynamic>::__new() );		HX_STACK_VAR(args,"args");
		HX_STACK_LINE(505)
		::hscript::Token tmp4 = this->token();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(505)
		tk = tmp4;
		HX_STACK_LINE(506)
		bool tmp5 = (tk != ::hscript::Token_obj::TPClose);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(506)
		if ((tmp5)){
			HX_STACK_LINE(507)
			bool done = false;		HX_STACK_VAR(done,"done");
			HX_STACK_LINE(508)
			while((true)){
				HX_STACK_LINE(508)
				bool tmp6 = done;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(508)
				bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(508)
				bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(508)
				if ((tmp8)){
					HX_STACK_LINE(508)
					break;
				}
				HX_STACK_LINE(509)
				::String name1 = null();		HX_STACK_VAR(name1,"name1");
				HX_STACK_LINE(509)
				bool opt = false;		HX_STACK_VAR(opt,"opt");
				HX_STACK_LINE(510)
				switch( (int)(tk->__Index())){
					case (int)13: {
						HX_STACK_LINE(512)
						opt = true;
						HX_STACK_LINE(513)
						::hscript::Token tmp9 = this->token();		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(513)
						tk = tmp9;
					}
					;break;
					default: {
					}
				}
				HX_STACK_LINE(516)
				switch( (int)(tk->__Index())){
					case (int)2: {
						HX_STACK_LINE(516)
						::String tmp9 = (::hscript::Token(tk))->__Param(0);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(516)
						::String id1 = tmp9;		HX_STACK_VAR(id1,"id1");
						HX_STACK_LINE(517)
						name1 = id1;
					}
					;break;
					default: {
						HX_STACK_LINE(518)
						::hscript::Token tmp9 = tk;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(518)
						this->unexpected(tmp9);
					}
				}
				HX_STACK_LINE(520)
				::hscript::Token tmp9 = this->token();		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(520)
				tk = tmp9;
				struct _Function_4_1{
					inline static Dynamic Block( ::String &name1){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","hscript/Parser.hx",521,0x98735743)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_HCSTRING("name","\x4b","\x72","\xff","\x48") , name1,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(521)
				Dynamic tmp10 = _Function_4_1::Block(name1);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(521)
				Dynamic arg = tmp10;		HX_STACK_VAR(arg,"arg");
				HX_STACK_LINE(522)
				Dynamic tmp11 = arg;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(522)
				args->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp11);
				HX_STACK_LINE(523)
				bool tmp12 = opt;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(523)
				if ((tmp12)){
					HX_STACK_LINE(523)
					arg->__FieldRef(HX_HCSTRING("opt","\x33","\x9c","\x54","\x00")) = true;
				}
				HX_STACK_LINE(524)
				bool tmp13 = (tk == ::hscript::Token_obj::TDoubleDot);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(524)
				bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(524)
				if ((tmp13)){
					HX_STACK_LINE(524)
					tmp14 = this->allowTypes;
				}
				else{
					HX_STACK_LINE(524)
					tmp14 = false;
				}
				HX_STACK_LINE(524)
				if ((tmp14)){
					HX_STACK_LINE(525)
					::hscript::CType tmp15 = this->parseType();		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(525)
					arg->__FieldRef(HX_HCSTRING("t","\x74","\x00","\x00","\x00")) = tmp15;
					HX_STACK_LINE(526)
					::hscript::Token tmp16 = this->token();		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(526)
					tk = tmp16;
				}
				HX_STACK_LINE(528)
				switch( (int)(tk->__Index())){
					case (int)9: {
						HX_STACK_LINE(530)
						::hscript::Token tmp15 = this->token();		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(530)
						tk = tmp15;
					}
					;break;
					case (int)5: {
						HX_STACK_LINE(532)
						done = true;
					}
					;break;
					default: {
						HX_STACK_LINE(534)
						::hscript::Token tmp15 = tk;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(534)
						this->unexpected(tmp15);
					}
				}
			}
		}
		HX_STACK_LINE(538)
		::hscript::CType ret = null();		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(539)
		bool tmp6 = this->allowTypes;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(539)
		if ((tmp6)){
			HX_STACK_LINE(540)
			::hscript::Token tmp7 = this->token();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(540)
			tk = tmp7;
			HX_STACK_LINE(541)
			bool tmp8 = (tk != ::hscript::Token_obj::TDoubleDot);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(541)
			if ((tmp8)){
				HX_STACK_LINE(542)
				::List tmp9 = this->tokens;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(542)
				::hscript::Token tmp10 = tk;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(542)
				int tmp11 = this->tokenMin;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(542)
				int tmp12 = this->tokenMax;		HX_STACK_VAR(tmp12,"tmp12");
				struct _Function_4_1{
					inline static Dynamic Block( int &tmp11,::hscript::Token &tmp10,int &tmp12){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","hscript/Parser.hx",542,0x98735743)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_HCSTRING("t","\x74","\x00","\x00","\x00") , tmp10,false);
							__result->Add(HX_HCSTRING("min","\x92","\x11","\x53","\x00") , tmp11,false);
							__result->Add(HX_HCSTRING("max","\xa4","\x0a","\x53","\x00") , tmp12,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(542)
				Dynamic tmp13 = _Function_4_1::Block(tmp11,tmp10,tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(542)
				tmp9->push(tmp13);
				HX_STACK_LINE(542)
				int tmp14 = this->oldTokenMin;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(542)
				this->tokenMin = tmp14;
				HX_STACK_LINE(542)
				int tmp15 = this->oldTokenMax;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(542)
				this->tokenMax = tmp15;
			}
			else{
				HX_STACK_LINE(544)
				::hscript::CType tmp9 = this->parseType();		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(544)
				ret = tmp9;
			}
		}
		HX_STACK_LINE(546)
		Dynamic tmp7 = this->parseExpr();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(546)
		Dynamic body = tmp7;		HX_STACK_VAR(body,"body");
		HX_STACK_LINE(547)
		{
			HX_STACK_LINE(547)
			Dynamic tmp8 = body;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(547)
			::String tmp9 = name;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(547)
			::hscript::CType tmp10 = ret;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(547)
			::hscript::ExprDef tmp11 = ::hscript::ExprDef_obj::EFunction(args,tmp8,tmp9,tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(547)
			::hscript::ExprDef e = tmp11;		HX_STACK_VAR(e,"e");
			HX_STACK_LINE(547)
			Dynamic pmin = p1;		HX_STACK_VAR(pmin,"pmin");
			HX_STACK_LINE(547)
			Dynamic pmax = body->__Field(HX_HCSTRING("pmax","\x34","\xf0","\x5a","\x4a"), hx::paccDynamic );		HX_STACK_VAR(pmax,"pmax");
			HX_STACK_LINE(547)
			bool tmp12 = (pmin == null());		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(547)
			if ((tmp12)){
				HX_STACK_LINE(547)
				int tmp13 = this->tokenMin;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(547)
				pmin = tmp13;
			}
			HX_STACK_LINE(547)
			bool tmp13 = (pmax == null());		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(547)
			if ((tmp13)){
				HX_STACK_LINE(547)
				int tmp14 = this->tokenMax;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(547)
				pmax = tmp14;
			}
			struct _Function_3_1{
				inline static Dynamic Block( Dynamic &pmax,::hscript::ExprDef &e,Dynamic &pmin){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","hscript/Parser.hx",547,0x98735743)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_HCSTRING("e","\x65","\x00","\x00","\x00") , e,false);
						__result->Add(HX_HCSTRING("pmin","\x22","\xf7","\x5a","\x4a") , pmin,false);
						__result->Add(HX_HCSTRING("pmax","\x34","\xf0","\x5a","\x4a") , pmax,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(547)
			tmp2 = _Function_3_1::Block(pmax,e,pmin);
		}
	}
	else if (  ( _switch_3==HX_HCSTRING("return","\xb0","\xa4","\x2d","\x09"))){
		HX_STACK_LINE(549)
		::hscript::Token tmp3 = this->token();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(549)
		::hscript::Token tk = tmp3;		HX_STACK_VAR(tk,"tk");
		HX_STACK_LINE(550)
		{
			HX_STACK_LINE(550)
			::List tmp4 = this->tokens;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(550)
			::hscript::Token tmp5 = tk;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(550)
			int tmp6 = this->tokenMin;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(550)
			int tmp7 = this->tokenMax;		HX_STACK_VAR(tmp7,"tmp7");
			struct _Function_3_1{
				inline static Dynamic Block( ::hscript::Token &tmp5,int &tmp6,int &tmp7){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","hscript/Parser.hx",550,0x98735743)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_HCSTRING("t","\x74","\x00","\x00","\x00") , tmp5,false);
						__result->Add(HX_HCSTRING("min","\x92","\x11","\x53","\x00") , tmp6,false);
						__result->Add(HX_HCSTRING("max","\xa4","\x0a","\x53","\x00") , tmp7,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(550)
			Dynamic tmp8 = _Function_3_1::Block(tmp5,tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(550)
			tmp4->push(tmp8);
			HX_STACK_LINE(550)
			int tmp9 = this->oldTokenMin;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(550)
			this->tokenMin = tmp9;
			HX_STACK_LINE(550)
			int tmp10 = this->oldTokenMax;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(550)
			this->tokenMax = tmp10;
		}
		HX_STACK_LINE(551)
		bool tmp4 = (tk == ::hscript::Token_obj::TSemicolon);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(551)
		Dynamic tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(551)
		if ((tmp4)){
			HX_STACK_LINE(551)
			tmp5 = null();
		}
		else{
			HX_STACK_LINE(551)
			tmp5 = this->parseExpr();
		}
		HX_STACK_LINE(551)
		Dynamic e = tmp5;		HX_STACK_VAR(e,"e");
		HX_STACK_LINE(552)
		{
			HX_STACK_LINE(552)
			Dynamic tmp6 = e;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(552)
			::hscript::ExprDef tmp7 = ::hscript::ExprDef_obj::EReturn(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(552)
			::hscript::ExprDef e1 = tmp7;		HX_STACK_VAR(e1,"e1");
			HX_STACK_LINE(552)
			Dynamic pmin = p1;		HX_STACK_VAR(pmin,"pmin");
			HX_STACK_LINE(552)
			bool tmp8 = (e == null());		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(552)
			Dynamic tmp9;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(552)
			if ((tmp8)){
				HX_STACK_LINE(552)
				tmp9 = this->tokenMax;
			}
			else{
				HX_STACK_LINE(552)
				tmp9 = e->__Field(HX_HCSTRING("pmax","\x34","\xf0","\x5a","\x4a"), hx::paccDynamic );
			}
			HX_STACK_LINE(552)
			Dynamic pmax = tmp9;		HX_STACK_VAR(pmax,"pmax");
			HX_STACK_LINE(552)
			bool tmp10 = (pmin == null());		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(552)
			if ((tmp10)){
				HX_STACK_LINE(552)
				int tmp11 = this->tokenMin;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(552)
				pmin = tmp11;
			}
			HX_STACK_LINE(552)
			bool tmp11 = (pmax == null());		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(552)
			if ((tmp11)){
				HX_STACK_LINE(552)
				int tmp12 = this->tokenMax;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(552)
				pmax = tmp12;
			}
			struct _Function_3_1{
				inline static Dynamic Block( ::hscript::ExprDef &e1,Dynamic &pmax,Dynamic &pmin){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","hscript/Parser.hx",552,0x98735743)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_HCSTRING("e","\x65","\x00","\x00","\x00") , e1,false);
						__result->Add(HX_HCSTRING("pmin","\x22","\xf7","\x5a","\x4a") , pmin,false);
						__result->Add(HX_HCSTRING("pmax","\x34","\xf0","\x5a","\x4a") , pmax,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(552)
			tmp2 = _Function_3_1::Block(e1,pmax,pmin);
		}
	}
	else if (  ( _switch_3==HX_HCSTRING("new","\x60","\xd0","\x53","\x00"))){
		HX_STACK_LINE(554)
		Array< ::String > a = Array_obj< ::String >::__new();		HX_STACK_VAR(a,"a");
		HX_STACK_LINE(555)
		::hscript::Token tmp3 = this->token();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(555)
		::hscript::Token tk = tmp3;		HX_STACK_VAR(tk,"tk");
		HX_STACK_LINE(556)
		switch( (int)(tk->__Index())){
			case (int)2: {
				HX_STACK_LINE(556)
				::String tmp4 = (::hscript::Token(tk))->__Param(0);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(556)
				::String id1 = tmp4;		HX_STACK_VAR(id1,"id1");
				HX_STACK_LINE(557)
				{
					HX_STACK_LINE(557)
					::String tmp5 = id1;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(557)
					a->push(tmp5);
				}
			}
			;break;
			default: {
				HX_STACK_LINE(558)
				::hscript::Token tmp4 = tk;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(558)
				this->unexpected(tmp4);
			}
		}
		HX_STACK_LINE(560)
		bool next = true;		HX_STACK_VAR(next,"next");
		HX_STACK_LINE(561)
		while((true)){
			HX_STACK_LINE(561)
			bool tmp4 = next;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(561)
			bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(561)
			if ((tmp5)){
				HX_STACK_LINE(561)
				break;
			}
			HX_STACK_LINE(562)
			::hscript::Token tmp6 = this->token();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(562)
			tk = tmp6;
			HX_STACK_LINE(563)
			switch( (int)(tk->__Index())){
				case (int)8: {
					HX_STACK_LINE(565)
					::hscript::Token tmp7 = this->token();		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(565)
					tk = tmp7;
					HX_STACK_LINE(566)
					switch( (int)(tk->__Index())){
						case (int)2: {
							HX_STACK_LINE(566)
							::String tmp8 = (::hscript::Token(tk))->__Param(0);		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(566)
							::String id1 = tmp8;		HX_STACK_VAR(id1,"id1");
							HX_STACK_LINE(567)
							{
								HX_STACK_LINE(567)
								::String tmp9 = id1;		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(567)
								a->push(tmp9);
							}
						}
						;break;
						default: {
							HX_STACK_LINE(568)
							::hscript::Token tmp8 = tk;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(568)
							this->unexpected(tmp8);
						}
					}
				}
				;break;
				case (int)4: {
					HX_STACK_LINE(571)
					next = false;
				}
				;break;
				default: {
					HX_STACK_LINE(573)
					::hscript::Token tmp7 = tk;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(573)
					this->unexpected(tmp7);
				}
			}
		}
		HX_STACK_LINE(576)
		cpp::ArrayBase args = this->parseExprList(::hscript::Token_obj::TPClose);		HX_STACK_VAR(args,"args");
		HX_STACK_LINE(577)
		{
			HX_STACK_LINE(577)
			::String tmp4 = a->join(HX_HCSTRING(".","\x2e","\x00","\x00","\x00"));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(577)
			::hscript::ExprDef tmp5 = ::hscript::ExprDef_obj::ENew(tmp4,args);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(577)
			::hscript::ExprDef e = tmp5;		HX_STACK_VAR(e,"e");
			HX_STACK_LINE(577)
			Dynamic pmin = p1;		HX_STACK_VAR(pmin,"pmin");
			HX_STACK_LINE(577)
			Dynamic pmax = null();		HX_STACK_VAR(pmax,"pmax");
			HX_STACK_LINE(577)
			bool tmp6 = (pmin == null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(577)
			if ((tmp6)){
				HX_STACK_LINE(577)
				int tmp7 = this->tokenMin;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(577)
				pmin = tmp7;
			}
			HX_STACK_LINE(577)
			bool tmp7 = (pmax == null());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(577)
			if ((tmp7)){
				HX_STACK_LINE(577)
				int tmp8 = this->tokenMax;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(577)
				pmax = tmp8;
			}
			struct _Function_3_1{
				inline static Dynamic Block( Dynamic &pmax,::hscript::ExprDef &e,Dynamic &pmin){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","hscript/Parser.hx",577,0x98735743)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_HCSTRING("e","\x65","\x00","\x00","\x00") , e,false);
						__result->Add(HX_HCSTRING("pmin","\x22","\xf7","\x5a","\x4a") , pmin,false);
						__result->Add(HX_HCSTRING("pmax","\x34","\xf0","\x5a","\x4a") , pmax,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(577)
			tmp2 = _Function_3_1::Block(pmax,e,pmin);
		}
	}
	else if (  ( _switch_3==HX_HCSTRING("throw","\x26","\x5d","\x90","\x0f"))){
		HX_STACK_LINE(579)
		Dynamic tmp3 = this->parseExpr();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(579)
		Dynamic e = tmp3;		HX_STACK_VAR(e,"e");
		HX_STACK_LINE(580)
		{
			HX_STACK_LINE(580)
			Dynamic tmp4 = e;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(580)
			::hscript::ExprDef tmp5 = ::hscript::ExprDef_obj::EThrow(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(580)
			::hscript::ExprDef e1 = tmp5;		HX_STACK_VAR(e1,"e1");
			HX_STACK_LINE(580)
			Dynamic pmin = p1;		HX_STACK_VAR(pmin,"pmin");
			HX_STACK_LINE(580)
			Dynamic pmax = e->__Field(HX_HCSTRING("pmax","\x34","\xf0","\x5a","\x4a"), hx::paccDynamic );		HX_STACK_VAR(pmax,"pmax");
			HX_STACK_LINE(580)
			bool tmp6 = (pmin == null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(580)
			if ((tmp6)){
				HX_STACK_LINE(580)
				int tmp7 = this->tokenMin;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(580)
				pmin = tmp7;
			}
			HX_STACK_LINE(580)
			bool tmp7 = (pmax == null());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(580)
			if ((tmp7)){
				HX_STACK_LINE(580)
				int tmp8 = this->tokenMax;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(580)
				pmax = tmp8;
			}
			struct _Function_3_1{
				inline static Dynamic Block( ::hscript::ExprDef &e1,Dynamic &pmax,Dynamic &pmin){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","hscript/Parser.hx",580,0x98735743)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_HCSTRING("e","\x65","\x00","\x00","\x00") , e1,false);
						__result->Add(HX_HCSTRING("pmin","\x22","\xf7","\x5a","\x4a") , pmin,false);
						__result->Add(HX_HCSTRING("pmax","\x34","\xf0","\x5a","\x4a") , pmax,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(580)
			tmp2 = _Function_3_1::Block(e1,pmax,pmin);
		}
	}
	else if (  ( _switch_3==HX_HCSTRING("try","\x3b","\x69","\x58","\x00"))){
		HX_STACK_LINE(582)
		Dynamic tmp3 = this->parseExpr();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(582)
		Dynamic e = tmp3;		HX_STACK_VAR(e,"e");
		HX_STACK_LINE(583)
		::hscript::Token tmp4 = this->token();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(583)
		::hscript::Token tk = tmp4;		HX_STACK_VAR(tk,"tk");
		HX_STACK_LINE(584)
		::hscript::Token tmp5 = tk;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(584)
		::hscript::Token tmp6 = ::hscript::Token_obj::TId(HX_HCSTRING("catch","\x3b","\x7c","\x21","\x41"));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(584)
		bool tmp7 = ::Type_obj::enumEq(tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(584)
		bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(584)
		if ((tmp8)){
			HX_STACK_LINE(584)
			::hscript::Token tmp9 = tk;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(584)
			this->unexpected(tmp9);
		}
		HX_STACK_LINE(585)
		{
			HX_STACK_LINE(585)
			::hscript::Token tmp9 = this->token();		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(585)
			::hscript::Token t = tmp9;		HX_STACK_VAR(t,"t");
			HX_STACK_LINE(585)
			bool tmp10 = (t != ::hscript::Token_obj::TPOpen);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(585)
			if ((tmp10)){
				HX_STACK_LINE(585)
				::hscript::Token tmp11 = t;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(585)
				this->unexpected(tmp11);
			}
		}
		HX_STACK_LINE(586)
		::hscript::Token tmp9 = this->token();		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(586)
		tk = tmp9;
		HX_STACK_LINE(587)
		::String tmp10;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(587)
		switch( (int)(tk->__Index())){
			case (int)2: {
				HX_STACK_LINE(587)
				::String tmp11 = (::hscript::Token(tk))->__Param(0);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(587)
				::String id1 = tmp11;		HX_STACK_VAR(id1,"id1");
				HX_STACK_LINE(588)
				tmp10 = id1;
			}
			;break;
			default: {
				HX_STACK_LINE(589)
				::hscript::Token tmp11 = tk;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(589)
				tmp10 = this->unexpected(tmp11);
			}
		}
		HX_STACK_LINE(587)
		::String vname = tmp10;		HX_STACK_VAR(vname,"vname");
		HX_STACK_LINE(591)
		{
			HX_STACK_LINE(591)
			::hscript::Token tmp11 = this->token();		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(591)
			::hscript::Token t = tmp11;		HX_STACK_VAR(t,"t");
			HX_STACK_LINE(591)
			bool tmp12 = (t != ::hscript::Token_obj::TDoubleDot);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(591)
			if ((tmp12)){
				HX_STACK_LINE(591)
				::hscript::Token tmp13 = t;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(591)
				this->unexpected(tmp13);
			}
		}
		HX_STACK_LINE(592)
		::hscript::CType t = null();		HX_STACK_VAR(t,"t");
		HX_STACK_LINE(593)
		bool tmp11 = this->allowTypes;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(593)
		if ((tmp11)){
			HX_STACK_LINE(594)
			::hscript::CType tmp12 = this->parseType();		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(594)
			t = tmp12;
		}
		else{
			HX_STACK_LINE(596)
			::hscript::Token tmp12 = this->token();		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(596)
			tk = tmp12;
			HX_STACK_LINE(597)
			::hscript::Token tmp13 = tk;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(597)
			::hscript::Token tmp14 = ::hscript::Token_obj::TId(HX_HCSTRING("Dynamic","\x5f","\xc7","\x66","\x03"));		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(597)
			bool tmp15 = ::Type_obj::enumEq(tmp13,tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(597)
			bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(597)
			if ((tmp16)){
				HX_STACK_LINE(597)
				::hscript::Token tmp17 = tk;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(597)
				this->unexpected(tmp17);
			}
		}
		HX_STACK_LINE(599)
		{
			HX_STACK_LINE(599)
			::hscript::Token tmp12 = this->token();		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(599)
			::hscript::Token t1 = tmp12;		HX_STACK_VAR(t1,"t1");
			HX_STACK_LINE(599)
			bool tmp13 = (t1 != ::hscript::Token_obj::TPClose);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(599)
			if ((tmp13)){
				HX_STACK_LINE(599)
				::hscript::Token tmp14 = t1;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(599)
				this->unexpected(tmp14);
			}
		}
		HX_STACK_LINE(600)
		Dynamic tmp12 = this->parseExpr();		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(600)
		Dynamic ec = tmp12;		HX_STACK_VAR(ec,"ec");
		HX_STACK_LINE(601)
		{
			HX_STACK_LINE(601)
			Dynamic tmp13 = e;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(601)
			::String tmp14 = vname;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(601)
			::hscript::CType tmp15 = t;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(601)
			Dynamic tmp16 = ec;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(601)
			::hscript::ExprDef tmp17 = ::hscript::ExprDef_obj::ETry(tmp13,tmp14,tmp15,tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(601)
			::hscript::ExprDef e1 = tmp17;		HX_STACK_VAR(e1,"e1");
			HX_STACK_LINE(601)
			Dynamic pmin = p1;		HX_STACK_VAR(pmin,"pmin");
			HX_STACK_LINE(601)
			Dynamic pmax = ec->__Field(HX_HCSTRING("pmax","\x34","\xf0","\x5a","\x4a"), hx::paccDynamic );		HX_STACK_VAR(pmax,"pmax");
			HX_STACK_LINE(601)
			bool tmp18 = (pmin == null());		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(601)
			if ((tmp18)){
				HX_STACK_LINE(601)
				int tmp19 = this->tokenMin;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(601)
				pmin = tmp19;
			}
			HX_STACK_LINE(601)
			bool tmp19 = (pmax == null());		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(601)
			if ((tmp19)){
				HX_STACK_LINE(601)
				int tmp20 = this->tokenMax;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(601)
				pmax = tmp20;
			}
			struct _Function_3_1{
				inline static Dynamic Block( ::hscript::ExprDef &e1,Dynamic &pmax,Dynamic &pmin){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","hscript/Parser.hx",601,0x98735743)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_HCSTRING("e","\x65","\x00","\x00","\x00") , e1,false);
						__result->Add(HX_HCSTRING("pmin","\x22","\xf7","\x5a","\x4a") , pmin,false);
						__result->Add(HX_HCSTRING("pmax","\x34","\xf0","\x5a","\x4a") , pmax,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(601)
			tmp2 = _Function_3_1::Block(e1,pmax,pmin);
		}
	}
	else if (  ( _switch_3==HX_HCSTRING("switch","\xf4","\x49","\x79","\xc5"))){
		HX_STACK_LINE(603)
		Dynamic tmp3 = this->parseExpr();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(603)
		Dynamic e = tmp3;		HX_STACK_VAR(e,"e");
		HX_STACK_LINE(604)
		Dynamic def = null();		HX_STACK_VAR(def,"def");
		HX_STACK_LINE(604)
		cpp::ArrayBase cases = cpp::ArrayBase_obj::__new();		HX_STACK_VAR(cases,"cases");
		HX_STACK_LINE(605)
		{
			HX_STACK_LINE(605)
			::hscript::Token tmp4 = this->token();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(605)
			::hscript::Token t = tmp4;		HX_STACK_VAR(t,"t");
			HX_STACK_LINE(605)
			bool tmp5 = (t != ::hscript::Token_obj::TBrOpen);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(605)
			if ((tmp5)){
				HX_STACK_LINE(605)
				::hscript::Token tmp6 = t;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(605)
				this->unexpected(tmp6);
			}
		}
		HX_STACK_LINE(606)
		while((true)){
			HX_STACK_LINE(607)
			::hscript::Token tmp4 = this->token();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(607)
			::hscript::Token tk = tmp4;		HX_STACK_VAR(tk,"tk");
			HX_STACK_LINE(608)
			int _switch_4 = (tk->__Index());
			if (  ( _switch_4==(int)2)){
				HX_STACK_LINE(608)
				::String tmp5 = (::hscript::Token(tk))->__Param(0);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(608)
				::String _switch_5 = (tmp5);
				if (  ( _switch_5==HX_HCSTRING("case","\xb0","\x1e","\xba","\x41"))){
					struct _Function_5_1{
						inline static Dynamic Block( ){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","hscript/Parser.hx",610,0x98735743)
							{
								hx::Anon __result = hx::Anon_obj::Create();
								__result->Add(HX_HCSTRING("values","\xe2","\x03","\xb7","\x4f") , cpp::ArrayBase_obj::__new(),false);
								__result->Add(HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43") , null(),false);
								return __result;
							}
							return null();
						}
					};
					HX_STACK_LINE(610)
					Dynamic tmp6 = _Function_5_1::Block();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(610)
					Dynamic c = tmp6;		HX_STACK_VAR(c,"c");
					HX_STACK_LINE(611)
					Dynamic tmp7 = c;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(611)
					cases->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp7);
					HX_STACK_LINE(612)
					while((true)){
						HX_STACK_LINE(613)
						Dynamic tmp8 = this->parseExpr();		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(613)
						Dynamic e1 = tmp8;		HX_STACK_VAR(e1,"e1");
						HX_STACK_LINE(614)
						Dynamic tmp9 = e1;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(614)
						c->__Field(HX_HCSTRING("values","\xe2","\x03","\xb7","\x4f"), hx::paccDynamic )->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp9);
						HX_STACK_LINE(615)
						::hscript::Token tmp10 = this->token();		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(615)
						tk = tmp10;
						HX_STACK_LINE(616)
						int _switch_6 = (tk->__Index());
						if (  ( _switch_6==(int)9)){
						}
						else if (  ( _switch_6==(int)14)){
							HX_STACK_LINE(620)
							break;
						}
						else  {
							HX_STACK_LINE(622)
							::hscript::Token tmp11 = tk;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(622)
							this->unexpected(tmp11);
						}
;
;
					}
					HX_STACK_LINE(625)
					cpp::ArrayBase exprs = cpp::ArrayBase_obj::__new();		HX_STACK_VAR(exprs,"exprs");
					HX_STACK_LINE(626)
					while((true)){
						HX_STACK_LINE(627)
						::hscript::Token tmp8 = this->token();		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(627)
						tk = tmp8;
						HX_STACK_LINE(628)
						{
							HX_STACK_LINE(628)
							::List tmp9 = this->tokens;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(628)
							::hscript::Token tmp10 = tk;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(628)
							int tmp11 = this->tokenMin;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(628)
							int tmp12 = this->tokenMax;		HX_STACK_VAR(tmp12,"tmp12");
							struct _Function_7_1{
								inline static Dynamic Block( int &tmp11,::hscript::Token &tmp10,int &tmp12){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","hscript/Parser.hx",628,0x98735743)
									{
										hx::Anon __result = hx::Anon_obj::Create();
										__result->Add(HX_HCSTRING("t","\x74","\x00","\x00","\x00") , tmp10,false);
										__result->Add(HX_HCSTRING("min","\x92","\x11","\x53","\x00") , tmp11,false);
										__result->Add(HX_HCSTRING("max","\xa4","\x0a","\x53","\x00") , tmp12,false);
										return __result;
									}
									return null();
								}
							};
							HX_STACK_LINE(628)
							Dynamic tmp13 = _Function_7_1::Block(tmp11,tmp10,tmp12);		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(628)
							tmp9->push(tmp13);
							HX_STACK_LINE(628)
							int tmp14 = this->oldTokenMin;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(628)
							this->tokenMin = tmp14;
							HX_STACK_LINE(628)
							int tmp15 = this->oldTokenMax;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(628)
							this->tokenMax = tmp15;
						}
						HX_STACK_LINE(629)
						int _switch_7 = (tk->__Index());
						if (  ( _switch_7==(int)2)){
							HX_STACK_LINE(629)
							::String tmp9 = (::hscript::Token(tk))->__Param(0);		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(629)
							::String _switch_8 = (tmp9);
							if (  ( _switch_8==HX_HCSTRING("case","\xb0","\x1e","\xba","\x41")) ||  ( _switch_8==HX_HCSTRING("default","\xc1","\xd8","\xc3","\x9b"))){
								HX_STACK_LINE(631)
								break;
							}
							else  {
								HX_STACK_LINE(633)
								Dynamic tmp10 = this->parseFullExpr();		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(633)
								exprs->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp10);
							}
;
;
						}
						else if (  ( _switch_7==(int)7)){
							HX_STACK_LINE(631)
							break;
						}
						else  {
							HX_STACK_LINE(633)
							Dynamic tmp9 = this->parseFullExpr();		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(633)
							exprs->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp9);
						}
;
;
					}
					HX_STACK_LINE(636)
					bool tmp8 = (exprs->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ) == (int)1);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(636)
					Dynamic tmp9;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(636)
					if ((tmp8)){
						HX_STACK_LINE(637)
						tmp9 = exprs->__GetItem((int)0);
					}
					else{
						HX_STACK_LINE(638)
						bool tmp10 = (exprs->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ) == (int)0);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(638)
						if ((tmp10)){
							HX_STACK_LINE(639)
							::hscript::ExprDef tmp11 = ::hscript::ExprDef_obj::EBlock(cpp::ArrayBase_obj::__new());		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(639)
							::hscript::ExprDef e1 = tmp11;		HX_STACK_VAR(e1,"e1");
							HX_STACK_LINE(639)
							int tmp12 = this->tokenMin;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(639)
							Dynamic pmin = tmp12;		HX_STACK_VAR(pmin,"pmin");
							HX_STACK_LINE(639)
							int tmp13 = this->tokenMin;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(639)
							Dynamic pmax = tmp13;		HX_STACK_VAR(pmax,"pmax");
							HX_STACK_LINE(639)
							bool tmp14 = (pmin == null());		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(639)
							if ((tmp14)){
								HX_STACK_LINE(639)
								int tmp15 = this->tokenMin;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(639)
								pmin = tmp15;
							}
							HX_STACK_LINE(639)
							bool tmp15 = (pmax == null());		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(639)
							if ((tmp15)){
								HX_STACK_LINE(639)
								int tmp16 = this->tokenMax;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(639)
								pmax = tmp16;
							}
							struct _Function_7_1{
								inline static Dynamic Block( ::hscript::ExprDef &e1,Dynamic &pmax,Dynamic &pmin){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","hscript/Parser.hx",639,0x98735743)
									{
										hx::Anon __result = hx::Anon_obj::Create();
										__result->Add(HX_HCSTRING("e","\x65","\x00","\x00","\x00") , e1,false);
										__result->Add(HX_HCSTRING("pmin","\x22","\xf7","\x5a","\x4a") , pmin,false);
										__result->Add(HX_HCSTRING("pmax","\x34","\xf0","\x5a","\x4a") , pmax,false);
										return __result;
									}
									return null();
								}
							};
							HX_STACK_LINE(639)
							tmp9 = _Function_7_1::Block(e1,pmax,pmin);
						}
						else{
							HX_STACK_LINE(641)
							::hscript::ExprDef tmp11 = ::hscript::ExprDef_obj::EBlock(exprs);		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(641)
							::hscript::ExprDef e1 = tmp11;		HX_STACK_VAR(e1,"e1");
							HX_STACK_LINE(641)
							Dynamic tmp12 = exprs->__GetItem((int)0);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(641)
							Dynamic pmin = tmp12->__Field(HX_HCSTRING("pmin","\x22","\xf7","\x5a","\x4a"), hx::paccDynamic );		HX_STACK_VAR(pmin,"pmin");
							HX_STACK_LINE(641)
							int tmp13 = (exprs->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ) - (int)1);		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(641)
							Dynamic tmp14 = exprs->__GetItem(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(641)
							Dynamic pmax = tmp14->__Field(HX_HCSTRING("pmax","\x34","\xf0","\x5a","\x4a"), hx::paccDynamic );		HX_STACK_VAR(pmax,"pmax");
							HX_STACK_LINE(641)
							bool tmp15 = (pmin == null());		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(641)
							if ((tmp15)){
								HX_STACK_LINE(641)
								int tmp16 = this->tokenMin;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(641)
								pmin = tmp16;
							}
							HX_STACK_LINE(641)
							bool tmp16 = (pmax == null());		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(641)
							if ((tmp16)){
								HX_STACK_LINE(641)
								int tmp17 = this->tokenMax;		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(641)
								pmax = tmp17;
							}
							struct _Function_7_1{
								inline static Dynamic Block( ::hscript::ExprDef &e1,Dynamic &pmax,Dynamic &pmin){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","hscript/Parser.hx",641,0x98735743)
									{
										hx::Anon __result = hx::Anon_obj::Create();
										__result->Add(HX_HCSTRING("e","\x65","\x00","\x00","\x00") , e1,false);
										__result->Add(HX_HCSTRING("pmin","\x22","\xf7","\x5a","\x4a") , pmin,false);
										__result->Add(HX_HCSTRING("pmax","\x34","\xf0","\x5a","\x4a") , pmax,false);
										return __result;
									}
									return null();
								}
							};
							HX_STACK_LINE(641)
							tmp9 = _Function_7_1::Block(e1,pmax,pmin);
						}
					}
					HX_STACK_LINE(636)
					c->__FieldRef(HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43")) = tmp9;
				}
				else if (  ( _switch_5==HX_HCSTRING("default","\xc1","\xd8","\xc3","\x9b"))){
					HX_STACK_LINE(643)
					bool tmp6 = (def != null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(643)
					if ((tmp6)){
						HX_STACK_LINE(643)
						::hscript::Token tmp7 = tk;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(643)
						this->unexpected(tmp7);
					}
					HX_STACK_LINE(644)
					{
						HX_STACK_LINE(644)
						::hscript::Token tmp7 = this->token();		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(644)
						::hscript::Token t = tmp7;		HX_STACK_VAR(t,"t");
						HX_STACK_LINE(644)
						bool tmp8 = (t != ::hscript::Token_obj::TDoubleDot);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(644)
						if ((tmp8)){
							HX_STACK_LINE(644)
							::hscript::Token tmp9 = t;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(644)
							this->unexpected(tmp9);
						}
					}
					HX_STACK_LINE(645)
					cpp::ArrayBase exprs = cpp::ArrayBase_obj::__new();		HX_STACK_VAR(exprs,"exprs");
					HX_STACK_LINE(646)
					while((true)){
						HX_STACK_LINE(647)
						::hscript::Token tmp7 = this->token();		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(647)
						tk = tmp7;
						HX_STACK_LINE(648)
						{
							HX_STACK_LINE(648)
							::List tmp8 = this->tokens;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(648)
							::hscript::Token tmp9 = tk;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(648)
							int tmp10 = this->tokenMin;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(648)
							int tmp11 = this->tokenMax;		HX_STACK_VAR(tmp11,"tmp11");
							struct _Function_7_1{
								inline static Dynamic Block( ::hscript::Token &tmp9,int &tmp11,int &tmp10){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","hscript/Parser.hx",648,0x98735743)
									{
										hx::Anon __result = hx::Anon_obj::Create();
										__result->Add(HX_HCSTRING("t","\x74","\x00","\x00","\x00") , tmp9,false);
										__result->Add(HX_HCSTRING("min","\x92","\x11","\x53","\x00") , tmp10,false);
										__result->Add(HX_HCSTRING("max","\xa4","\x0a","\x53","\x00") , tmp11,false);
										return __result;
									}
									return null();
								}
							};
							HX_STACK_LINE(648)
							Dynamic tmp12 = _Function_7_1::Block(tmp9,tmp11,tmp10);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(648)
							tmp8->push(tmp12);
							HX_STACK_LINE(648)
							int tmp13 = this->oldTokenMin;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(648)
							this->tokenMin = tmp13;
							HX_STACK_LINE(648)
							int tmp14 = this->oldTokenMax;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(648)
							this->tokenMax = tmp14;
						}
						HX_STACK_LINE(649)
						int _switch_9 = (tk->__Index());
						if (  ( _switch_9==(int)2)){
							HX_STACK_LINE(649)
							::String tmp8 = (::hscript::Token(tk))->__Param(0);		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(649)
							::String _switch_10 = (tmp8);
							if (  ( _switch_10==HX_HCSTRING("case","\xb0","\x1e","\xba","\x41")) ||  ( _switch_10==HX_HCSTRING("default","\xc1","\xd8","\xc3","\x9b"))){
								HX_STACK_LINE(651)
								break;
							}
							else  {
								HX_STACK_LINE(653)
								Dynamic tmp9 = this->parseFullExpr();		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(653)
								exprs->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp9);
							}
;
;
						}
						else if (  ( _switch_9==(int)7)){
							HX_STACK_LINE(651)
							break;
						}
						else  {
							HX_STACK_LINE(653)
							Dynamic tmp8 = this->parseFullExpr();		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(653)
							exprs->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp8);
						}
;
;
					}
					HX_STACK_LINE(656)
					bool tmp7 = (exprs->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ) == (int)1);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(656)
					Dynamic tmp8;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(656)
					if ((tmp7)){
						HX_STACK_LINE(657)
						tmp8 = exprs->__GetItem((int)0);
					}
					else{
						HX_STACK_LINE(658)
						bool tmp9 = (exprs->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ) == (int)0);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(658)
						if ((tmp9)){
							HX_STACK_LINE(659)
							::hscript::ExprDef tmp10 = ::hscript::ExprDef_obj::EBlock(cpp::ArrayBase_obj::__new());		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(659)
							::hscript::ExprDef e1 = tmp10;		HX_STACK_VAR(e1,"e1");
							HX_STACK_LINE(659)
							int tmp11 = this->tokenMin;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(659)
							Dynamic pmin = tmp11;		HX_STACK_VAR(pmin,"pmin");
							HX_STACK_LINE(659)
							int tmp12 = this->tokenMin;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(659)
							Dynamic pmax = tmp12;		HX_STACK_VAR(pmax,"pmax");
							HX_STACK_LINE(659)
							bool tmp13 = (pmin == null());		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(659)
							if ((tmp13)){
								HX_STACK_LINE(659)
								int tmp14 = this->tokenMin;		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(659)
								pmin = tmp14;
							}
							HX_STACK_LINE(659)
							bool tmp14 = (pmax == null());		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(659)
							if ((tmp14)){
								HX_STACK_LINE(659)
								int tmp15 = this->tokenMax;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(659)
								pmax = tmp15;
							}
							struct _Function_7_1{
								inline static Dynamic Block( ::hscript::ExprDef &e1,Dynamic &pmax,Dynamic &pmin){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","hscript/Parser.hx",659,0x98735743)
									{
										hx::Anon __result = hx::Anon_obj::Create();
										__result->Add(HX_HCSTRING("e","\x65","\x00","\x00","\x00") , e1,false);
										__result->Add(HX_HCSTRING("pmin","\x22","\xf7","\x5a","\x4a") , pmin,false);
										__result->Add(HX_HCSTRING("pmax","\x34","\xf0","\x5a","\x4a") , pmax,false);
										return __result;
									}
									return null();
								}
							};
							HX_STACK_LINE(659)
							tmp8 = _Function_7_1::Block(e1,pmax,pmin);
						}
						else{
							HX_STACK_LINE(661)
							::hscript::ExprDef tmp10 = ::hscript::ExprDef_obj::EBlock(exprs);		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(661)
							::hscript::ExprDef e1 = tmp10;		HX_STACK_VAR(e1,"e1");
							HX_STACK_LINE(661)
							Dynamic tmp11 = exprs->__GetItem((int)0);		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(661)
							Dynamic pmin = tmp11->__Field(HX_HCSTRING("pmin","\x22","\xf7","\x5a","\x4a"), hx::paccDynamic );		HX_STACK_VAR(pmin,"pmin");
							HX_STACK_LINE(661)
							int tmp12 = (exprs->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ) - (int)1);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(661)
							Dynamic tmp13 = exprs->__GetItem(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(661)
							Dynamic pmax = tmp13->__Field(HX_HCSTRING("pmax","\x34","\xf0","\x5a","\x4a"), hx::paccDynamic );		HX_STACK_VAR(pmax,"pmax");
							HX_STACK_LINE(661)
							bool tmp14 = (pmin == null());		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(661)
							if ((tmp14)){
								HX_STACK_LINE(661)
								int tmp15 = this->tokenMin;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(661)
								pmin = tmp15;
							}
							HX_STACK_LINE(661)
							bool tmp15 = (pmax == null());		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(661)
							if ((tmp15)){
								HX_STACK_LINE(661)
								int tmp16 = this->tokenMax;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(661)
								pmax = tmp16;
							}
							struct _Function_7_1{
								inline static Dynamic Block( ::hscript::ExprDef &e1,Dynamic &pmax,Dynamic &pmin){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","hscript/Parser.hx",661,0x98735743)
									{
										hx::Anon __result = hx::Anon_obj::Create();
										__result->Add(HX_HCSTRING("e","\x65","\x00","\x00","\x00") , e1,false);
										__result->Add(HX_HCSTRING("pmin","\x22","\xf7","\x5a","\x4a") , pmin,false);
										__result->Add(HX_HCSTRING("pmax","\x34","\xf0","\x5a","\x4a") , pmax,false);
										return __result;
									}
									return null();
								}
							};
							HX_STACK_LINE(661)
							tmp8 = _Function_7_1::Block(e1,pmax,pmin);
						}
					}
					HX_STACK_LINE(656)
					def = tmp8;
				}
				else  {
					HX_STACK_LINE(665)
					::hscript::Token tmp6 = tk;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(665)
					this->unexpected(tmp6);
				}
;
;
			}
			else if (  ( _switch_4==(int)7)){
				HX_STACK_LINE(663)
				break;
			}
			else  {
				HX_STACK_LINE(665)
				::hscript::Token tmp5 = tk;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(665)
				this->unexpected(tmp5);
			}
;
;
		}
		HX_STACK_LINE(668)
		{
			HX_STACK_LINE(668)
			Dynamic tmp4 = e;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(668)
			Dynamic tmp5 = def;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(668)
			::hscript::ExprDef tmp6 = ::hscript::ExprDef_obj::ESwitch(tmp4,cases,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(668)
			::hscript::ExprDef e1 = tmp6;		HX_STACK_VAR(e1,"e1");
			HX_STACK_LINE(668)
			Dynamic pmin = p1;		HX_STACK_VAR(pmin,"pmin");
			HX_STACK_LINE(668)
			int tmp7 = this->tokenMax;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(668)
			Dynamic pmax = tmp7;		HX_STACK_VAR(pmax,"pmax");
			HX_STACK_LINE(668)
			bool tmp8 = (pmin == null());		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(668)
			if ((tmp8)){
				HX_STACK_LINE(668)
				int tmp9 = this->tokenMin;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(668)
				pmin = tmp9;
			}
			HX_STACK_LINE(668)
			bool tmp9 = (pmax == null());		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(668)
			if ((tmp9)){
				HX_STACK_LINE(668)
				int tmp10 = this->tokenMax;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(668)
				pmax = tmp10;
			}
			struct _Function_3_1{
				inline static Dynamic Block( ::hscript::ExprDef &e1,Dynamic &pmax,Dynamic &pmin){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","hscript/Parser.hx",668,0x98735743)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_HCSTRING("e","\x65","\x00","\x00","\x00") , e1,false);
						__result->Add(HX_HCSTRING("pmin","\x22","\xf7","\x5a","\x4a") , pmin,false);
						__result->Add(HX_HCSTRING("pmax","\x34","\xf0","\x5a","\x4a") , pmax,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(668)
			tmp2 = _Function_3_1::Block(e1,pmax,pmin);
		}
	}
	else  {
		HX_STACK_LINE(670)
		tmp2 = null();
	}
;
;
	HX_STACK_LINE(436)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Parser_obj,parseStructure,return )

Dynamic Parser_obj::parseExprNext( Dynamic e1){
	HX_STACK_FRAME("hscript.Parser","parseExprNext",0x83d61847,"hscript.Parser.parseExprNext","hscript/Parser.hx",674,0x98735743)
	HX_STACK_THIS(this)
	HX_STACK_ARG(e1,"e1")
	HX_STACK_LINE(675)
	::hscript::Token tmp = this->token();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(675)
	::hscript::Token tk = tmp;		HX_STACK_VAR(tk,"tk");
	HX_STACK_LINE(676)
	switch( (int)(tk->__Index())){
		case (int)3: {
			HX_STACK_LINE(676)
			::String tmp1 = (::hscript::Token(tk))->__Param(0);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(676)
			::String op = tmp1;		HX_STACK_VAR(op,"op");
			HX_STACK_LINE(677)
			{
				HX_STACK_LINE(678)
				::haxe::ds::StringMap tmp2 = this->unops;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(678)
				::String tmp3 = op;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(678)
				Dynamic tmp4 = tmp2->get(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(678)
				Dynamic tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(678)
				if ((tmp5)){
					HX_STACK_LINE(679)
					Dynamic tmp6 = e1;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(679)
					Dynamic tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(679)
					bool tmp8 = this->isBlock(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(679)
					bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(679)
					bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(679)
					if ((tmp9)){
						HX_STACK_LINE(679)
						::hscript::ExprDef _g = e1->__Field(HX_HCSTRING("e","\x65","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(679)
						switch( (int)(_g->__Index())){
							case (int)3: {
								HX_STACK_LINE(679)
								tmp10 = true;
							}
							;break;
							default: {
								HX_STACK_LINE(679)
								tmp10 = false;
							}
						}
					}
					else{
						HX_STACK_LINE(679)
						tmp10 = true;
					}
					HX_STACK_LINE(679)
					if ((tmp10)){
						HX_STACK_LINE(680)
						{
							HX_STACK_LINE(680)
							::List tmp11 = this->tokens;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(680)
							::hscript::Token tmp12 = tk;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(680)
							int tmp13 = this->tokenMin;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(680)
							int tmp14 = this->tokenMax;		HX_STACK_VAR(tmp14,"tmp14");
							struct _Function_6_1{
								inline static Dynamic Block( int &tmp13,::hscript::Token &tmp12,int &tmp14){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","hscript/Parser.hx",680,0x98735743)
									{
										hx::Anon __result = hx::Anon_obj::Create();
										__result->Add(HX_HCSTRING("t","\x74","\x00","\x00","\x00") , tmp12,false);
										__result->Add(HX_HCSTRING("min","\x92","\x11","\x53","\x00") , tmp13,false);
										__result->Add(HX_HCSTRING("max","\xa4","\x0a","\x53","\x00") , tmp14,false);
										return __result;
									}
									return null();
								}
							};
							HX_STACK_LINE(680)
							Dynamic tmp15 = _Function_6_1::Block(tmp13,tmp12,tmp14);		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(680)
							tmp11->push(tmp15);
							HX_STACK_LINE(680)
							int tmp16 = this->oldTokenMin;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(680)
							this->tokenMin = tmp16;
							HX_STACK_LINE(680)
							int tmp17 = this->oldTokenMax;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(680)
							this->tokenMax = tmp17;
						}
						HX_STACK_LINE(681)
						Dynamic tmp11 = e1;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(681)
						return tmp11;
					}
					HX_STACK_LINE(683)
					Dynamic tmp11;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(683)
					{
						HX_STACK_LINE(683)
						::String tmp12 = op;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(683)
						Dynamic tmp13 = e1;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(683)
						::hscript::ExprDef tmp14 = ::hscript::ExprDef_obj::EUnop(tmp12,false,tmp13);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(683)
						::hscript::ExprDef e = tmp14;		HX_STACK_VAR(e,"e");
						HX_STACK_LINE(683)
						Dynamic pmin = e1->__Field(HX_HCSTRING("pmin","\x22","\xf7","\x5a","\x4a"), hx::paccDynamic );		HX_STACK_VAR(pmin,"pmin");
						HX_STACK_LINE(683)
						Dynamic pmax = null();		HX_STACK_VAR(pmax,"pmax");
						HX_STACK_LINE(683)
						bool tmp15 = (pmin == null());		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(683)
						if ((tmp15)){
							HX_STACK_LINE(683)
							int tmp16 = this->tokenMin;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(683)
							pmin = tmp16;
						}
						HX_STACK_LINE(683)
						bool tmp16 = (pmax == null());		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(683)
						if ((tmp16)){
							HX_STACK_LINE(683)
							int tmp17 = this->tokenMax;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(683)
							pmax = tmp17;
						}
						struct _Function_5_1{
							inline static Dynamic Block( Dynamic &pmax,::hscript::ExprDef &e,Dynamic &pmin){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","hscript/Parser.hx",683,0x98735743)
								{
									hx::Anon __result = hx::Anon_obj::Create();
									__result->Add(HX_HCSTRING("e","\x65","\x00","\x00","\x00") , e,false);
									__result->Add(HX_HCSTRING("pmin","\x22","\xf7","\x5a","\x4a") , pmin,false);
									__result->Add(HX_HCSTRING("pmax","\x34","\xf0","\x5a","\x4a") , pmax,false);
									return __result;
								}
								return null();
							}
						};
						HX_STACK_LINE(683)
						tmp11 = _Function_5_1::Block(pmax,e,pmin);
					}
					HX_STACK_LINE(683)
					Dynamic tmp12 = this->parseExprNext(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(683)
					return tmp12;
				}
				HX_STACK_LINE(685)
				::String tmp6 = op;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(685)
				Dynamic tmp7 = e1;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(685)
				Dynamic tmp8 = this->parseExpr();		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(685)
				Dynamic tmp9 = this->makeBinop(tmp6,tmp7,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(685)
				return tmp9;
			}
		}
		;break;
		case (int)8: {
			HX_STACK_LINE(687)
			::hscript::Token tmp1 = this->token();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(687)
			tk = tmp1;
			HX_STACK_LINE(688)
			::String field = null();		HX_STACK_VAR(field,"field");
			HX_STACK_LINE(689)
			switch( (int)(tk->__Index())){
				case (int)2: {
					HX_STACK_LINE(689)
					::String tmp2 = (::hscript::Token(tk))->__Param(0);		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(689)
					::String id = tmp2;		HX_STACK_VAR(id,"id");
					HX_STACK_LINE(690)
					field = id;
				}
				;break;
				default: {
					HX_STACK_LINE(691)
					::hscript::Token tmp2 = tk;		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(691)
					this->unexpected(tmp2);
				}
			}
			HX_STACK_LINE(693)
			Dynamic tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(693)
			{
				HX_STACK_LINE(693)
				Dynamic tmp3 = e1;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(693)
				::String tmp4 = field;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(693)
				::hscript::ExprDef tmp5 = ::hscript::ExprDef_obj::EField(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(693)
				::hscript::ExprDef e = tmp5;		HX_STACK_VAR(e,"e");
				HX_STACK_LINE(693)
				Dynamic pmin = e1->__Field(HX_HCSTRING("pmin","\x22","\xf7","\x5a","\x4a"), hx::paccDynamic );		HX_STACK_VAR(pmin,"pmin");
				HX_STACK_LINE(693)
				Dynamic pmax = null();		HX_STACK_VAR(pmax,"pmax");
				HX_STACK_LINE(693)
				bool tmp6 = (pmin == null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(693)
				if ((tmp6)){
					HX_STACK_LINE(693)
					int tmp7 = this->tokenMin;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(693)
					pmin = tmp7;
				}
				HX_STACK_LINE(693)
				bool tmp7 = (pmax == null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(693)
				if ((tmp7)){
					HX_STACK_LINE(693)
					int tmp8 = this->tokenMax;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(693)
					pmax = tmp8;
				}
				struct _Function_3_1{
					inline static Dynamic Block( Dynamic &pmax,::hscript::ExprDef &e,Dynamic &pmin){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","hscript/Parser.hx",693,0x98735743)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_HCSTRING("e","\x65","\x00","\x00","\x00") , e,false);
							__result->Add(HX_HCSTRING("pmin","\x22","\xf7","\x5a","\x4a") , pmin,false);
							__result->Add(HX_HCSTRING("pmax","\x34","\xf0","\x5a","\x4a") , pmax,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(693)
				tmp2 = _Function_3_1::Block(pmax,e,pmin);
			}
			HX_STACK_LINE(693)
			Dynamic tmp3 = this->parseExprNext(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(693)
			return tmp3;
		}
		;break;
		case (int)4: {
			HX_STACK_LINE(695)
			Dynamic tmp1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(695)
			{
				HX_STACK_LINE(695)
				Dynamic tmp2 = e1;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(695)
				::hscript::ExprDef tmp3 = ::hscript::ExprDef_obj::ECall(tmp2,this->parseExprList(::hscript::Token_obj::TPClose));		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(695)
				::hscript::ExprDef e = tmp3;		HX_STACK_VAR(e,"e");
				HX_STACK_LINE(695)
				Dynamic pmin = e1->__Field(HX_HCSTRING("pmin","\x22","\xf7","\x5a","\x4a"), hx::paccDynamic );		HX_STACK_VAR(pmin,"pmin");
				HX_STACK_LINE(695)
				Dynamic pmax = null();		HX_STACK_VAR(pmax,"pmax");
				HX_STACK_LINE(695)
				bool tmp4 = (pmin == null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(695)
				if ((tmp4)){
					HX_STACK_LINE(695)
					int tmp5 = this->tokenMin;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(695)
					pmin = tmp5;
				}
				HX_STACK_LINE(695)
				bool tmp5 = (pmax == null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(695)
				if ((tmp5)){
					HX_STACK_LINE(695)
					int tmp6 = this->tokenMax;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(695)
					pmax = tmp6;
				}
				struct _Function_3_1{
					inline static Dynamic Block( Dynamic &pmax,::hscript::ExprDef &e,Dynamic &pmin){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","hscript/Parser.hx",695,0x98735743)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_HCSTRING("e","\x65","\x00","\x00","\x00") , e,false);
							__result->Add(HX_HCSTRING("pmin","\x22","\xf7","\x5a","\x4a") , pmin,false);
							__result->Add(HX_HCSTRING("pmax","\x34","\xf0","\x5a","\x4a") , pmax,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(695)
				tmp1 = _Function_3_1::Block(pmax,e,pmin);
			}
			HX_STACK_LINE(695)
			Dynamic tmp2 = this->parseExprNext(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(695)
			return tmp2;
		}
		;break;
		case (int)11: {
			HX_STACK_LINE(697)
			Dynamic tmp1 = this->parseExpr();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(697)
			Dynamic e2 = tmp1;		HX_STACK_VAR(e2,"e2");
			HX_STACK_LINE(698)
			{
				HX_STACK_LINE(698)
				::hscript::Token tmp2 = this->token();		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(698)
				::hscript::Token t = tmp2;		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(698)
				bool tmp3 = (t != ::hscript::Token_obj::TBkClose);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(698)
				if ((tmp3)){
					HX_STACK_LINE(698)
					::hscript::Token tmp4 = t;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(698)
					this->unexpected(tmp4);
				}
			}
			HX_STACK_LINE(699)
			Dynamic tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(699)
			{
				HX_STACK_LINE(699)
				Dynamic tmp3 = e1;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(699)
				Dynamic tmp4 = e2;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(699)
				::hscript::ExprDef tmp5 = ::hscript::ExprDef_obj::EArray(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(699)
				::hscript::ExprDef e = tmp5;		HX_STACK_VAR(e,"e");
				HX_STACK_LINE(699)
				Dynamic pmin = e1->__Field(HX_HCSTRING("pmin","\x22","\xf7","\x5a","\x4a"), hx::paccDynamic );		HX_STACK_VAR(pmin,"pmin");
				HX_STACK_LINE(699)
				Dynamic pmax = null();		HX_STACK_VAR(pmax,"pmax");
				HX_STACK_LINE(699)
				bool tmp6 = (pmin == null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(699)
				if ((tmp6)){
					HX_STACK_LINE(699)
					int tmp7 = this->tokenMin;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(699)
					pmin = tmp7;
				}
				HX_STACK_LINE(699)
				bool tmp7 = (pmax == null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(699)
				if ((tmp7)){
					HX_STACK_LINE(699)
					int tmp8 = this->tokenMax;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(699)
					pmax = tmp8;
				}
				struct _Function_3_1{
					inline static Dynamic Block( Dynamic &pmax,::hscript::ExprDef &e,Dynamic &pmin){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","hscript/Parser.hx",699,0x98735743)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_HCSTRING("e","\x65","\x00","\x00","\x00") , e,false);
							__result->Add(HX_HCSTRING("pmin","\x22","\xf7","\x5a","\x4a") , pmin,false);
							__result->Add(HX_HCSTRING("pmax","\x34","\xf0","\x5a","\x4a") , pmax,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(699)
				tmp2 = _Function_3_1::Block(pmax,e,pmin);
			}
			HX_STACK_LINE(699)
			Dynamic tmp3 = this->parseExprNext(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(699)
			return tmp3;
		}
		;break;
		case (int)13: {
			HX_STACK_LINE(701)
			Dynamic tmp1 = this->parseExpr();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(701)
			Dynamic e2 = tmp1;		HX_STACK_VAR(e2,"e2");
			HX_STACK_LINE(702)
			{
				HX_STACK_LINE(702)
				::hscript::Token tmp2 = this->token();		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(702)
				::hscript::Token t = tmp2;		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(702)
				bool tmp3 = (t != ::hscript::Token_obj::TDoubleDot);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(702)
				if ((tmp3)){
					HX_STACK_LINE(702)
					::hscript::Token tmp4 = t;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(702)
					this->unexpected(tmp4);
				}
			}
			HX_STACK_LINE(703)
			Dynamic tmp2 = this->parseExpr();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(703)
			Dynamic e3 = tmp2;		HX_STACK_VAR(e3,"e3");
			HX_STACK_LINE(704)
			Dynamic tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(704)
			{
				HX_STACK_LINE(704)
				Dynamic tmp4 = e1;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(704)
				Dynamic tmp5 = e2;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(704)
				Dynamic tmp6 = e3;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(704)
				::hscript::ExprDef tmp7 = ::hscript::ExprDef_obj::ETernary(tmp4,tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(704)
				::hscript::ExprDef e = tmp7;		HX_STACK_VAR(e,"e");
				HX_STACK_LINE(704)
				Dynamic pmin = e1->__Field(HX_HCSTRING("pmin","\x22","\xf7","\x5a","\x4a"), hx::paccDynamic );		HX_STACK_VAR(pmin,"pmin");
				HX_STACK_LINE(704)
				Dynamic pmax = e3->__Field(HX_HCSTRING("pmax","\x34","\xf0","\x5a","\x4a"), hx::paccDynamic );		HX_STACK_VAR(pmax,"pmax");
				HX_STACK_LINE(704)
				bool tmp8 = (pmin == null());		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(704)
				if ((tmp8)){
					HX_STACK_LINE(704)
					int tmp9 = this->tokenMin;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(704)
					pmin = tmp9;
				}
				HX_STACK_LINE(704)
				bool tmp9 = (pmax == null());		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(704)
				if ((tmp9)){
					HX_STACK_LINE(704)
					int tmp10 = this->tokenMax;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(704)
					pmax = tmp10;
				}
				struct _Function_3_1{
					inline static Dynamic Block( Dynamic &pmax,::hscript::ExprDef &e,Dynamic &pmin){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","hscript/Parser.hx",704,0x98735743)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_HCSTRING("e","\x65","\x00","\x00","\x00") , e,false);
							__result->Add(HX_HCSTRING("pmin","\x22","\xf7","\x5a","\x4a") , pmin,false);
							__result->Add(HX_HCSTRING("pmax","\x34","\xf0","\x5a","\x4a") , pmax,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(704)
				tmp3 = _Function_3_1::Block(pmax,e,pmin);
			}
			HX_STACK_LINE(704)
			return tmp3;
		}
		;break;
		default: {
			HX_STACK_LINE(706)
			{
				HX_STACK_LINE(706)
				::List tmp1 = this->tokens;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(706)
				::hscript::Token tmp2 = tk;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(706)
				int tmp3 = this->tokenMin;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(706)
				int tmp4 = this->tokenMax;		HX_STACK_VAR(tmp4,"tmp4");
				struct _Function_3_1{
					inline static Dynamic Block( int &tmp4,::hscript::Token &tmp2,int &tmp3){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","hscript/Parser.hx",706,0x98735743)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_HCSTRING("t","\x74","\x00","\x00","\x00") , tmp2,false);
							__result->Add(HX_HCSTRING("min","\x92","\x11","\x53","\x00") , tmp3,false);
							__result->Add(HX_HCSTRING("max","\xa4","\x0a","\x53","\x00") , tmp4,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(706)
				Dynamic tmp5 = _Function_3_1::Block(tmp4,tmp2,tmp3);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(706)
				tmp1->push(tmp5);
				HX_STACK_LINE(706)
				int tmp6 = this->oldTokenMin;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(706)
				this->tokenMin = tmp6;
				HX_STACK_LINE(706)
				int tmp7 = this->oldTokenMax;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(706)
				this->tokenMax = tmp7;
			}
			HX_STACK_LINE(707)
			Dynamic tmp1 = e1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(707)
			return tmp1;
		}
	}
	HX_STACK_LINE(676)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Parser_obj,parseExprNext,return )

::hscript::CType Parser_obj::parseType( ){
	HX_STACK_FRAME("hscript.Parser","parseType",0x98ecb2b9,"hscript.Parser.parseType","hscript/Parser.hx",711,0x98735743)
	HX_STACK_THIS(this)
	HX_STACK_LINE(712)
	::hscript::Token tmp = this->token();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(712)
	::hscript::Token t = tmp;		HX_STACK_VAR(t,"t");
	HX_STACK_LINE(713)
	switch( (int)(t->__Index())){
		case (int)2: {
			HX_STACK_LINE(713)
			::String tmp1 = (::hscript::Token(t))->__Param(0);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(713)
			::String v = tmp1;		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(714)
			{
				HX_STACK_LINE(715)
				Array< ::String > path = Array_obj< ::String >::__new().Add(v);		HX_STACK_VAR(path,"path");
				HX_STACK_LINE(716)
				while((true)){
					HX_STACK_LINE(717)
					::hscript::Token tmp2 = this->token();		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(717)
					t = tmp2;
					HX_STACK_LINE(718)
					bool tmp3 = (t != ::hscript::Token_obj::TDot);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(718)
					if ((tmp3)){
						HX_STACK_LINE(719)
						break;
					}
					HX_STACK_LINE(720)
					::hscript::Token tmp4 = this->token();		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(720)
					t = tmp4;
					HX_STACK_LINE(721)
					switch( (int)(t->__Index())){
						case (int)2: {
							HX_STACK_LINE(721)
							::String tmp5 = (::hscript::Token(t))->__Param(0);		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(721)
							::String v1 = tmp5;		HX_STACK_VAR(v1,"v1");
							HX_STACK_LINE(722)
							{
								HX_STACK_LINE(723)
								::String tmp6 = v1;		HX_STACK_VAR(tmp6,"tmp6");
								HX_STACK_LINE(723)
								path->push(tmp6);
							}
						}
						;break;
						default: {
							HX_STACK_LINE(725)
							::hscript::Token tmp5 = t;		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(725)
							this->unexpected(tmp5);
						}
					}
				}
				HX_STACK_LINE(728)
				Array< ::Dynamic > params = null();		HX_STACK_VAR(params,"params");
				HX_STACK_LINE(729)
				switch( (int)(t->__Index())){
					case (int)3: {
						HX_STACK_LINE(729)
						::String tmp2 = (::hscript::Token(t))->__Param(0);		HX_STACK_VAR(tmp2,"tmp2");
						HX_STACK_LINE(729)
						::String op = tmp2;		HX_STACK_VAR(op,"op");
						HX_STACK_LINE(730)
						{
							HX_STACK_LINE(731)
							bool tmp3 = (op == HX_HCSTRING("<","\x3c","\x00","\x00","\x00"));		HX_STACK_VAR(tmp3,"tmp3");
							HX_STACK_LINE(731)
							if ((tmp3)){
								HX_STACK_LINE(732)
								params = Array_obj< ::Dynamic >::__new();
								HX_STACK_LINE(733)
								while((true)){
									HX_STACK_LINE(734)
									::hscript::CType tmp4 = this->parseType();		HX_STACK_VAR(tmp4,"tmp4");
									HX_STACK_LINE(734)
									params->push(tmp4);
									HX_STACK_LINE(735)
									::hscript::Token tmp5 = this->token();		HX_STACK_VAR(tmp5,"tmp5");
									HX_STACK_LINE(735)
									t = tmp5;
									HX_STACK_LINE(736)
									int _switch_11 = (t->__Index());
									if (  ( _switch_11==(int)9)){
										HX_STACK_LINE(737)
										continue;
									}
									else if (  ( _switch_11==(int)3)){
										HX_STACK_LINE(736)
										::String tmp6 = (::hscript::Token(t))->__Param(0);		HX_STACK_VAR(tmp6,"tmp6");
										HX_STACK_LINE(736)
										::String op1 = tmp6;		HX_STACK_VAR(op1,"op1");
										HX_STACK_LINE(738)
										{
											HX_STACK_LINE(739)
											bool tmp7 = (op1 == HX_HCSTRING(">","\x3e","\x00","\x00","\x00"));		HX_STACK_VAR(tmp7,"tmp7");
											HX_STACK_LINE(739)
											if ((tmp7)){
												HX_STACK_LINE(739)
												break;
											}
											HX_STACK_LINE(740)
											Dynamic tmp8 = op1.charCodeAt((int)0);		HX_STACK_VAR(tmp8,"tmp8");
											HX_STACK_LINE(740)
											bool tmp9 = (tmp8 == (int)62);		HX_STACK_VAR(tmp9,"tmp9");
											HX_STACK_LINE(740)
											if ((tmp9)){
												HX_STACK_LINE(742)
												::List tmp10 = this->tokens;		HX_STACK_VAR(tmp10,"tmp10");
												HX_STACK_LINE(742)
												::String tmp11 = op1.substr((int)1,null());		HX_STACK_VAR(tmp11,"tmp11");
												HX_STACK_LINE(742)
												::hscript::Token tmp12 = ::hscript::Token_obj::TOp(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
												HX_STACK_LINE(742)
												int tmp13 = this->tokenMax;		HX_STACK_VAR(tmp13,"tmp13");
												HX_STACK_LINE(742)
												int tmp14 = op1.length;		HX_STACK_VAR(tmp14,"tmp14");
												HX_STACK_LINE(742)
												int tmp15 = (tmp13 - tmp14);		HX_STACK_VAR(tmp15,"tmp15");
												HX_STACK_LINE(742)
												int tmp16 = (tmp15 - (int)1);		HX_STACK_VAR(tmp16,"tmp16");
												HX_STACK_LINE(742)
												int tmp17 = this->tokenMax;		HX_STACK_VAR(tmp17,"tmp17");
												struct _Function_10_1{
													inline static Dynamic Block( int &tmp17,::hscript::Token &tmp12,int &tmp16){
														HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","hscript/Parser.hx",742,0x98735743)
														{
															hx::Anon __result = hx::Anon_obj::Create();
															__result->Add(HX_HCSTRING("t","\x74","\x00","\x00","\x00") , tmp12,false);
															__result->Add(HX_HCSTRING("min","\x92","\x11","\x53","\x00") , tmp16,false);
															__result->Add(HX_HCSTRING("max","\xa4","\x0a","\x53","\x00") , tmp17,false);
															return __result;
														}
														return null();
													}
												};
												HX_STACK_LINE(742)
												Dynamic tmp18 = _Function_10_1::Block(tmp17,tmp12,tmp16);		HX_STACK_VAR(tmp18,"tmp18");
												HX_STACK_LINE(742)
												tmp10->add(tmp18);
												HX_STACK_LINE(746)
												break;
											}
										}
									}
									else  {
									}
;
;
									HX_STACK_LINE(750)
									::hscript::Token tmp6 = t;		HX_STACK_VAR(tmp6,"tmp6");
									HX_STACK_LINE(750)
									this->unexpected(tmp6);
								}
							}
							else{
								HX_STACK_LINE(753)
								::List tmp4 = this->tokens;		HX_STACK_VAR(tmp4,"tmp4");
								HX_STACK_LINE(753)
								::hscript::Token tmp5 = t;		HX_STACK_VAR(tmp5,"tmp5");
								HX_STACK_LINE(753)
								int tmp6 = this->tokenMin;		HX_STACK_VAR(tmp6,"tmp6");
								HX_STACK_LINE(753)
								int tmp7 = this->tokenMax;		HX_STACK_VAR(tmp7,"tmp7");
								struct _Function_6_1{
									inline static Dynamic Block( ::hscript::Token &tmp5,int &tmp6,int &tmp7){
										HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","hscript/Parser.hx",753,0x98735743)
										{
											hx::Anon __result = hx::Anon_obj::Create();
											__result->Add(HX_HCSTRING("t","\x74","\x00","\x00","\x00") , tmp5,false);
											__result->Add(HX_HCSTRING("min","\x92","\x11","\x53","\x00") , tmp6,false);
											__result->Add(HX_HCSTRING("max","\xa4","\x0a","\x53","\x00") , tmp7,false);
											return __result;
										}
										return null();
									}
								};
								HX_STACK_LINE(753)
								Dynamic tmp8 = _Function_6_1::Block(tmp5,tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(753)
								tmp4->push(tmp8);
								HX_STACK_LINE(753)
								int tmp9 = this->oldTokenMin;		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(753)
								this->tokenMin = tmp9;
								HX_STACK_LINE(753)
								int tmp10 = this->oldTokenMax;		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(753)
								this->tokenMax = tmp10;
							}
						}
					}
					;break;
					default: {
						HX_STACK_LINE(755)
						::List tmp2 = this->tokens;		HX_STACK_VAR(tmp2,"tmp2");
						HX_STACK_LINE(755)
						::hscript::Token tmp3 = t;		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(755)
						int tmp4 = this->tokenMin;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(755)
						int tmp5 = this->tokenMax;		HX_STACK_VAR(tmp5,"tmp5");
						struct _Function_4_1{
							inline static Dynamic Block( int &tmp5,int &tmp4,::hscript::Token &tmp3){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","hscript/Parser.hx",755,0x98735743)
								{
									hx::Anon __result = hx::Anon_obj::Create();
									__result->Add(HX_HCSTRING("t","\x74","\x00","\x00","\x00") , tmp3,false);
									__result->Add(HX_HCSTRING("min","\x92","\x11","\x53","\x00") , tmp4,false);
									__result->Add(HX_HCSTRING("max","\xa4","\x0a","\x53","\x00") , tmp5,false);
									return __result;
								}
								return null();
							}
						};
						HX_STACK_LINE(755)
						Dynamic tmp6 = _Function_4_1::Block(tmp5,tmp4,tmp3);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(755)
						tmp2->push(tmp6);
						HX_STACK_LINE(755)
						int tmp7 = this->oldTokenMin;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(755)
						this->tokenMin = tmp7;
						HX_STACK_LINE(755)
						int tmp8 = this->oldTokenMax;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(755)
						this->tokenMax = tmp8;
					}
				}
				HX_STACK_LINE(757)
				::hscript::CType tmp2 = ::hscript::CType_obj::CTPath(path,params);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(757)
				::hscript::CType tmp3 = this->parseTypeNext(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(757)
				return tmp3;
			}
		}
		;break;
		case (int)4: {
			HX_STACK_LINE(759)
			::hscript::CType tmp1 = this->parseType();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(759)
			::hscript::CType t1 = tmp1;		HX_STACK_VAR(t1,"t1");
			HX_STACK_LINE(760)
			{
				HX_STACK_LINE(760)
				::hscript::Token tmp2 = this->token();		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(760)
				::hscript::Token t2 = tmp2;		HX_STACK_VAR(t2,"t2");
				HX_STACK_LINE(760)
				bool tmp3 = (t2 != ::hscript::Token_obj::TPClose);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(760)
				if ((tmp3)){
					HX_STACK_LINE(760)
					::hscript::Token tmp4 = t2;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(760)
					this->unexpected(tmp4);
				}
			}
			HX_STACK_LINE(761)
			::hscript::CType tmp2 = t1;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(761)
			::hscript::CType tmp3 = ::hscript::CType_obj::CTParent(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(761)
			::hscript::CType tmp4 = this->parseTypeNext(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(761)
			return tmp4;
		}
		;break;
		case (int)6: {
			HX_STACK_LINE(763)
			cpp::ArrayBase fields = cpp::ArrayBase_obj::__new();		HX_STACK_VAR(fields,"fields");
			HX_STACK_LINE(764)
			while((true)){
				HX_STACK_LINE(765)
				::hscript::Token tmp1 = this->token();		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(765)
				t = tmp1;
				HX_STACK_LINE(766)
				int _switch_12 = (t->__Index());
				if (  ( _switch_12==(int)7)){
					HX_STACK_LINE(767)
					break;
				}
				else if (  ( _switch_12==(int)2)){
					HX_STACK_LINE(766)
					::String tmp2 = (::hscript::Token(t))->__Param(0);		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(766)
					::String name = tmp2;		HX_STACK_VAR(name,"name");
					HX_STACK_LINE(768)
					{
						HX_STACK_LINE(769)
						{
							HX_STACK_LINE(769)
							::hscript::Token tmp3 = this->token();		HX_STACK_VAR(tmp3,"tmp3");
							HX_STACK_LINE(769)
							::hscript::Token t1 = tmp3;		HX_STACK_VAR(t1,"t1");
							HX_STACK_LINE(769)
							bool tmp4 = (t1 != ::hscript::Token_obj::TDoubleDot);		HX_STACK_VAR(tmp4,"tmp4");
							HX_STACK_LINE(769)
							if ((tmp4)){
								HX_STACK_LINE(769)
								::hscript::Token tmp5 = t1;		HX_STACK_VAR(tmp5,"tmp5");
								HX_STACK_LINE(769)
								this->unexpected(tmp5);
							}
						}
						HX_STACK_LINE(770)
						::String tmp3 = name;		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(770)
						::hscript::CType tmp4 = this->parseType();		HX_STACK_VAR(tmp4,"tmp4");
						struct _Function_5_1{
							inline static Dynamic Block( ::hscript::CType &tmp4,::String &tmp3){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","hscript/Parser.hx",770,0x98735743)
								{
									hx::Anon __result = hx::Anon_obj::Create();
									__result->Add(HX_HCSTRING("name","\x4b","\x72","\xff","\x48") , tmp3,false);
									__result->Add(HX_HCSTRING("t","\x74","\x00","\x00","\x00") , tmp4,false);
									return __result;
								}
								return null();
							}
						};
						HX_STACK_LINE(770)
						Dynamic tmp5 = _Function_5_1::Block(tmp4,tmp3);		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(770)
						fields->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp5);
						HX_STACK_LINE(771)
						::hscript::Token tmp6 = this->token();		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(771)
						t = tmp6;
						HX_STACK_LINE(772)
						int _switch_13 = (t->__Index());
						if (  ( _switch_13==(int)9)){
						}
						else if (  ( _switch_13==(int)7)){
							HX_STACK_LINE(774)
							break;
						}
						else  {
							HX_STACK_LINE(775)
							::hscript::Token tmp7 = t;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(775)
							this->unexpected(tmp7);
						}
;
;
					}
				}
				else  {
					HX_STACK_LINE(778)
					::hscript::Token tmp2 = t;		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(778)
					this->unexpected(tmp2);
				}
;
;
			}
			HX_STACK_LINE(781)
			::hscript::CType tmp1 = ::hscript::CType_obj::CTAnon(fields);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(781)
			::hscript::CType tmp2 = this->parseTypeNext(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(781)
			return tmp2;
		}
		;break;
		default: {
			HX_STACK_LINE(783)
			::hscript::Token tmp1 = t;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(783)
			Dynamic tmp2 = this->unexpected(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(783)
			return tmp2;
		}
	}
	HX_STACK_LINE(713)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Parser_obj,parseType,return )

::hscript::CType Parser_obj::parseTypeNext( ::hscript::CType t){
	HX_STACK_FRAME("hscript.Parser","parseTypeNext",0x8b2ab44c,"hscript.Parser.parseTypeNext","hscript/Parser.hx",787,0x98735743)
	HX_STACK_THIS(this)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(788)
	::hscript::Token tmp = this->token();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(788)
	::hscript::Token tk = tmp;		HX_STACK_VAR(tk,"tk");
	HX_STACK_LINE(789)
	switch( (int)(tk->__Index())){
		case (int)3: {
			HX_STACK_LINE(789)
			::String tmp1 = (::hscript::Token(tk))->__Param(0);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(789)
			::String op = tmp1;		HX_STACK_VAR(op,"op");
			HX_STACK_LINE(790)
			{
				HX_STACK_LINE(791)
				bool tmp2 = (op != HX_HCSTRING("->","\x71","\x27","\x00","\x00"));		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(791)
				if ((tmp2)){
					HX_STACK_LINE(792)
					{
						HX_STACK_LINE(792)
						::List tmp3 = this->tokens;		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(792)
						::hscript::Token tmp4 = tk;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(792)
						int tmp5 = this->tokenMin;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(792)
						int tmp6 = this->tokenMax;		HX_STACK_VAR(tmp6,"tmp6");
						struct _Function_5_1{
							inline static Dynamic Block( int &tmp5,int &tmp6,::hscript::Token &tmp4){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","hscript/Parser.hx",792,0x98735743)
								{
									hx::Anon __result = hx::Anon_obj::Create();
									__result->Add(HX_HCSTRING("t","\x74","\x00","\x00","\x00") , tmp4,false);
									__result->Add(HX_HCSTRING("min","\x92","\x11","\x53","\x00") , tmp5,false);
									__result->Add(HX_HCSTRING("max","\xa4","\x0a","\x53","\x00") , tmp6,false);
									return __result;
								}
								return null();
							}
						};
						HX_STACK_LINE(792)
						Dynamic tmp7 = _Function_5_1::Block(tmp5,tmp6,tmp4);		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(792)
						tmp3->push(tmp7);
						HX_STACK_LINE(792)
						int tmp8 = this->oldTokenMin;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(792)
						this->tokenMin = tmp8;
						HX_STACK_LINE(792)
						int tmp9 = this->oldTokenMax;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(792)
						this->tokenMax = tmp9;
					}
					HX_STACK_LINE(793)
					::hscript::CType tmp3 = t;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(793)
					return tmp3;
				}
			}
		}
		;break;
		default: {
			HX_STACK_LINE(796)
			{
				HX_STACK_LINE(796)
				::List tmp1 = this->tokens;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(796)
				::hscript::Token tmp2 = tk;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(796)
				int tmp3 = this->tokenMin;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(796)
				int tmp4 = this->tokenMax;		HX_STACK_VAR(tmp4,"tmp4");
				struct _Function_3_1{
					inline static Dynamic Block( int &tmp4,::hscript::Token &tmp2,int &tmp3){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","hscript/Parser.hx",796,0x98735743)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_HCSTRING("t","\x74","\x00","\x00","\x00") , tmp2,false);
							__result->Add(HX_HCSTRING("min","\x92","\x11","\x53","\x00") , tmp3,false);
							__result->Add(HX_HCSTRING("max","\xa4","\x0a","\x53","\x00") , tmp4,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(796)
				Dynamic tmp5 = _Function_3_1::Block(tmp4,tmp2,tmp3);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(796)
				tmp1->push(tmp5);
				HX_STACK_LINE(796)
				int tmp6 = this->oldTokenMin;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(796)
				this->tokenMin = tmp6;
				HX_STACK_LINE(796)
				int tmp7 = this->oldTokenMax;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(796)
				this->tokenMax = tmp7;
			}
			HX_STACK_LINE(797)
			::hscript::CType tmp1 = t;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(797)
			return tmp1;
		}
	}
	HX_STACK_LINE(799)
	::hscript::CType tmp1 = this->parseType();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(799)
	::hscript::CType t2 = tmp1;		HX_STACK_VAR(t2,"t2");
	HX_STACK_LINE(800)
	switch( (int)(t2->__Index())){
		case (int)1: {
			HX_STACK_LINE(800)
			Array< ::Dynamic > args = (::hscript::CType(t2))->__Param(0);		HX_STACK_VAR(args,"args");
			HX_STACK_LINE(801)
			{
				HX_STACK_LINE(802)
				::hscript::CType tmp2 = t;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(802)
				args->unshift(tmp2);
				HX_STACK_LINE(803)
				::hscript::CType tmp3 = t2;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(803)
				return tmp3;
			}
		}
		;break;
		default: {
			HX_STACK_LINE(805)
			::hscript::CType tmp2 = t2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(805)
			::hscript::CType tmp3 = ::hscript::CType_obj::CTFun(Array_obj< ::Dynamic >::__new().Add(t),tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(805)
			return tmp3;
		}
	}
	HX_STACK_LINE(800)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Parser_obj,parseTypeNext,return )

cpp::ArrayBase Parser_obj::parseExprList( ::hscript::Token etk){
	HX_STACK_FRAME("hscript.Parser","parseExprList",0x8286afb2,"hscript.Parser.parseExprList","hscript/Parser.hx",809,0x98735743)
	HX_STACK_THIS(this)
	HX_STACK_ARG(etk,"etk")
	HX_STACK_LINE(810)
	cpp::ArrayBase args = Dynamic( Array_obj<Dynamic>::__new() );		HX_STACK_VAR(args,"args");
	HX_STACK_LINE(811)
	::hscript::Token tmp = this->token();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(811)
	::hscript::Token tk = tmp;		HX_STACK_VAR(tk,"tk");
	HX_STACK_LINE(812)
	bool tmp1 = (tk == etk);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(812)
	if ((tmp1)){
		HX_STACK_LINE(813)
		return args;
	}
	HX_STACK_LINE(814)
	{
		HX_STACK_LINE(814)
		::List tmp2 = this->tokens;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(814)
		::hscript::Token tmp3 = tk;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(814)
		int tmp4 = this->tokenMin;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(814)
		int tmp5 = this->tokenMax;		HX_STACK_VAR(tmp5,"tmp5");
		struct _Function_2_1{
			inline static Dynamic Block( int &tmp5,int &tmp4,::hscript::Token &tmp3){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","hscript/Parser.hx",814,0x98735743)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("t","\x74","\x00","\x00","\x00") , tmp3,false);
					__result->Add(HX_HCSTRING("min","\x92","\x11","\x53","\x00") , tmp4,false);
					__result->Add(HX_HCSTRING("max","\xa4","\x0a","\x53","\x00") , tmp5,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(814)
		Dynamic tmp6 = _Function_2_1::Block(tmp5,tmp4,tmp3);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(814)
		tmp2->push(tmp6);
		HX_STACK_LINE(814)
		int tmp7 = this->oldTokenMin;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(814)
		this->tokenMin = tmp7;
		HX_STACK_LINE(814)
		int tmp8 = this->oldTokenMax;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(814)
		this->tokenMax = tmp8;
	}
	HX_STACK_LINE(815)
	while((true)){
		HX_STACK_LINE(816)
		Dynamic tmp2 = this->parseExpr();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(816)
		args->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp2);
		HX_STACK_LINE(817)
		::hscript::Token tmp3 = this->token();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(817)
		tk = tmp3;
		HX_STACK_LINE(818)
		int _switch_14 = (tk->__Index());
		if (  ( _switch_14==(int)9)){
		}
		else  {
			HX_STACK_LINE(821)
			bool tmp4 = (tk == etk);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(821)
			if ((tmp4)){
				HX_STACK_LINE(821)
				break;
			}
			HX_STACK_LINE(822)
			::hscript::Token tmp5 = tk;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(822)
			this->unexpected(tmp5);
		}
;
;
	}
	HX_STACK_LINE(825)
	return args;
}


HX_DEFINE_DYNAMIC_FUNC1(Parser_obj,parseExprList,return )

Void Parser_obj::incPos( ){
{
		HX_STACK_FRAME("hscript.Parser","incPos",0xe19d25aa,"hscript.Parser.incPos","hscript/Parser.hx",830,0x98735743)
		HX_STACK_THIS(this)
		HX_STACK_LINE(830)
		(this->readPos)++;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Parser_obj,incPos,(void))

int Parser_obj::readChar( ){
	HX_STACK_FRAME("hscript.Parser","readChar",0x8625b4a0,"hscript.Parser.readChar","hscript/Parser.hx",834,0x98735743)
	HX_STACK_THIS(this)
	HX_STACK_LINE(835)
	(this->readPos)++;
	HX_STACK_LINE(836)
	int tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(836)
	try
	{
	HX_STACK_CATCHABLE(Dynamic, 0);
	{
		HX_STACK_LINE(836)
		::haxe::io::Input tmp1 = this->input;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(836)
		tmp = tmp1->readByte();
	}
	}
	catch(Dynamic __e){
		{
			HX_STACK_BEGIN_CATCH
			Dynamic e = __e;{
				HX_STACK_LINE(836)
				tmp = (int)0;
			}
		}
	}
	HX_STACK_LINE(836)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Parser_obj,readChar,return )

::String Parser_obj::readString( int until){
	HX_STACK_FRAME("hscript.Parser","readString",0xfc2f051b,"hscript.Parser.readString","hscript/Parser.hx",839,0x98735743)
	HX_STACK_THIS(this)
	HX_STACK_ARG(until,"until")
	HX_STACK_LINE(840)
	int c = (int)0;		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(841)
	::haxe::io::BytesOutput tmp = ::haxe::io::BytesOutput_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(841)
	::haxe::io::BytesOutput b = tmp;		HX_STACK_VAR(b,"b");
	HX_STACK_LINE(842)
	bool esc = false;		HX_STACK_VAR(esc,"esc");
	HX_STACK_LINE(843)
	int tmp1 = this->line;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(843)
	int old = tmp1;		HX_STACK_VAR(old,"old");
	HX_STACK_LINE(844)
	::haxe::io::Input tmp2 = this->input;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(844)
	::haxe::io::Input s = tmp2;		HX_STACK_VAR(s,"s");
	HX_STACK_LINE(846)
	int tmp3 = this->readPos;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(846)
	int tmp4 = (tmp3 - (int)1);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(846)
	int p1 = tmp4;		HX_STACK_VAR(p1,"p1");
	HX_STACK_LINE(848)
	while((true)){
		HX_STACK_LINE(849)
		try
		{
		HX_STACK_CATCHABLE(Dynamic, 0);
		{
			HX_STACK_LINE(850)
			(this->readPos)++;
			HX_STACK_LINE(851)
			int tmp5 = s->readByte();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(851)
			c = tmp5;
		}
		}
		catch(Dynamic __e){
			{
				HX_STACK_BEGIN_CATCH
				Dynamic e = __e;{
					HX_STACK_LINE(853)
					this->line = old;
					HX_STACK_LINE(854)
					{
						HX_STACK_LINE(854)
						::hscript::Error tmp5 = ::hscript::Error_obj::__new(::hscript::ErrorDef_obj::EUnterminatedString,p1,p1);		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(854)
						HX_STACK_DO_THROW(tmp5);
					}
				}
			}
		}
		HX_STACK_LINE(856)
		bool tmp5 = esc;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(856)
		if ((tmp5)){
			HX_STACK_LINE(857)
			esc = false;
			HX_STACK_LINE(858)
			int tmp6 = c;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(858)
			switch( (int)(tmp6)){
				case (int)110: {
					HX_STACK_LINE(859)
					b->writeByte((int)10);
				}
				;break;
				case (int)114: {
					HX_STACK_LINE(860)
					b->writeByte((int)13);
				}
				;break;
				case (int)116: {
					HX_STACK_LINE(861)
					b->writeByte((int)9);
				}
				;break;
				case (int)39: case (int)34: case (int)92: {
					HX_STACK_LINE(862)
					int tmp7 = c;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(862)
					b->writeByte(tmp7);
				}
				;break;
				case (int)47: {
					HX_STACK_LINE(863)
					bool tmp7 = this->allowJSON;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(863)
					if ((tmp7)){
						HX_STACK_LINE(863)
						int tmp8 = c;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(863)
						b->writeByte(tmp8);
					}
					else{
						HX_STACK_LINE(863)
						int tmp8 = c;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(863)
						this->invalidChar(tmp8);
					}
				}
				;break;
				case (int)117: {
					HX_STACK_LINE(865)
					bool tmp7 = this->allowJSON;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(865)
					bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(865)
					if ((tmp8)){
						HX_STACK_LINE(865)
						int tmp9 = c;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(865)
						this->invalidChar(tmp9);
					}
					HX_STACK_LINE(866)
					::String code = null();		HX_STACK_VAR(code,"code");
					HX_STACK_LINE(867)
					try
					{
					HX_STACK_CATCHABLE(Dynamic, 0);
					{
						HX_STACK_LINE(868)
						(this->readPos)++;
						HX_STACK_LINE(869)
						(this->readPos)++;
						HX_STACK_LINE(870)
						(this->readPos)++;
						HX_STACK_LINE(871)
						(this->readPos)++;
						HX_STACK_LINE(872)
						::String tmp9 = s->readString((int)4);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(872)
						code = tmp9;
					}
					}
					catch(Dynamic __e){
						{
							HX_STACK_BEGIN_CATCH
							Dynamic e = __e;{
								HX_STACK_LINE(874)
								this->line = old;
								HX_STACK_LINE(875)
								{
									HX_STACK_LINE(875)
									::hscript::Error tmp9 = ::hscript::Error_obj::__new(::hscript::ErrorDef_obj::EUnterminatedString,p1,p1);		HX_STACK_VAR(tmp9,"tmp9");
									HX_STACK_LINE(875)
									HX_STACK_DO_THROW(tmp9);
								}
							}
						}
					}
					HX_STACK_LINE(877)
					int k = (int)0;		HX_STACK_VAR(k,"k");
					HX_STACK_LINE(878)
					{
						HX_STACK_LINE(878)
						int _g = (int)0;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(878)
						while((true)){
							HX_STACK_LINE(878)
							bool tmp9 = (_g < (int)4);		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(878)
							bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(878)
							if ((tmp10)){
								HX_STACK_LINE(878)
								break;
							}
							HX_STACK_LINE(878)
							int tmp11 = (_g)++;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(878)
							int i = tmp11;		HX_STACK_VAR(i,"i");
							HX_STACK_LINE(879)
							hx::ShlEq(k,(int)4);
							HX_STACK_LINE(880)
							int tmp12 = i;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(880)
							Dynamic tmp13 = code.charCodeAt(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(880)
							Dynamic _char = tmp13;		HX_STACK_VAR(_char,"char");
							HX_STACK_LINE(881)
							bool tmp14 = (_char != null());		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(881)
							if ((tmp14)){
								HX_STACK_LINE(881)
								Dynamic tmp15 = _char;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(881)
								switch( (int)(tmp15)){
									case (int)48: case (int)49: case (int)50: case (int)51: case (int)52: case (int)53: case (int)54: case (int)55: case (int)56: case (int)57: {
										HX_STACK_LINE(883)
										int tmp16 = (_char - (int)48);		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(883)
										hx::AddEq(k,tmp16);
									}
									;break;
									case (int)65: case (int)66: case (int)67: case (int)68: case (int)69: case (int)70: {
										HX_STACK_LINE(885)
										int tmp16 = (_char - (int)55);		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(885)
										hx::AddEq(k,tmp16);
									}
									;break;
									case (int)97: case (int)98: case (int)99: case (int)100: case (int)101: case (int)102: {
										HX_STACK_LINE(887)
										int tmp16 = (_char - (int)87);		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(887)
										hx::AddEq(k,tmp16);
									}
									;break;
									default: {
										HX_STACK_LINE(889)
										Dynamic tmp16 = _char;		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(889)
										this->invalidChar(tmp16);
									}
								}
							}
							else{
								HX_STACK_LINE(889)
								Dynamic tmp15 = _char;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(889)
								this->invalidChar(tmp15);
							}
						}
					}
					HX_STACK_LINE(893)
					bool tmp9 = (k <= (int)127);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(893)
					if ((tmp9)){
						HX_STACK_LINE(894)
						int tmp10 = k;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(894)
						b->writeByte(tmp10);
					}
					else{
						HX_STACK_LINE(895)
						bool tmp10 = (k <= (int)2047);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(895)
						if ((tmp10)){
							HX_STACK_LINE(896)
							int tmp11 = (int(k) >> int((int)6));		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(896)
							int tmp12 = (int((int)192) | int(tmp11));		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(896)
							b->writeByte(tmp12);
							HX_STACK_LINE(897)
							int tmp13 = (int(k) & int((int)63));		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(897)
							int tmp14 = (int((int)128) | int(tmp13));		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(897)
							b->writeByte(tmp14);
						}
						else{
							HX_STACK_LINE(899)
							int tmp11 = (int(k) >> int((int)12));		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(899)
							int tmp12 = (int((int)224) | int(tmp11));		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(899)
							b->writeByte(tmp12);
							HX_STACK_LINE(900)
							int tmp13 = (int(k) >> int((int)6));		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(900)
							int tmp14 = (int(tmp13) & int((int)63));		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(900)
							int tmp15 = (int((int)128) | int(tmp14));		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(900)
							b->writeByte(tmp15);
							HX_STACK_LINE(901)
							int tmp16 = (int(k) & int((int)63));		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(901)
							int tmp17 = (int((int)128) | int(tmp16));		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(901)
							b->writeByte(tmp17);
						}
					}
				}
				;break;
				default: {
					HX_STACK_LINE(903)
					int tmp7 = c;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(903)
					this->invalidChar(tmp7);
				}
			}
		}
		else{
			HX_STACK_LINE(905)
			bool tmp6 = (c == (int)92);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(905)
			if ((tmp6)){
				HX_STACK_LINE(906)
				esc = true;
			}
			else{
				HX_STACK_LINE(907)
				bool tmp7 = (c == until);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(907)
				if ((tmp7)){
					HX_STACK_LINE(908)
					break;
				}
				else{
					HX_STACK_LINE(910)
					bool tmp8 = (c == (int)10);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(910)
					if ((tmp8)){
						HX_STACK_LINE(910)
						(this->line)++;
					}
					HX_STACK_LINE(911)
					int tmp9 = c;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(911)
					b->writeByte(tmp9);
				}
			}
		}
	}
	HX_STACK_LINE(914)
	::haxe::io::Bytes tmp5 = b->getBytes();		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(914)
	::String tmp6 = tmp5->toString();		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(914)
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC1(Parser_obj,readString,return )

::hscript::Token Parser_obj::token( ){
	HX_STACK_FRAME("hscript.Parser","token",0x3cb36b25,"hscript.Parser.token","hscript/Parser.hx",917,0x98735743)
	HX_STACK_THIS(this)
	HX_STACK_LINE(919)
	::List tmp = this->tokens;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(919)
	Dynamic tmp1 = tmp->pop();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(919)
	Dynamic t = tmp1;		HX_STACK_VAR(t,"t");
	HX_STACK_LINE(920)
	bool tmp2 = (t != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(920)
	if ((tmp2)){
		HX_STACK_LINE(921)
		this->tokenMin = t->__Field(HX_HCSTRING("min","\x92","\x11","\x53","\x00"), hx::paccDynamic );
		HX_STACK_LINE(922)
		this->tokenMax = t->__Field(HX_HCSTRING("max","\xa4","\x0a","\x53","\x00"), hx::paccDynamic );
		HX_STACK_LINE(923)
		::hscript::Token tmp3 = t->__Field(HX_HCSTRING("t","\x74","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(923)
		return tmp3;
	}
	HX_STACK_LINE(925)
	int tmp3 = this->tokenMin;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(925)
	this->oldTokenMin = tmp3;
	HX_STACK_LINE(926)
	int tmp4 = this->tokenMax;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(926)
	this->oldTokenMax = tmp4;
	HX_STACK_LINE(927)
	int tmp5 = this->_char;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(927)
	bool tmp6 = (tmp5 < (int)0);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(927)
	int tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(927)
	if ((tmp6)){
		HX_STACK_LINE(927)
		tmp7 = this->readPos;
	}
	else{
		HX_STACK_LINE(927)
		int tmp8 = this->readPos;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(927)
		tmp7 = (tmp8 - (int)1);
	}
	HX_STACK_LINE(927)
	this->tokenMin = tmp7;
	HX_STACK_LINE(928)
	::hscript::Token tmp8 = this->_token();		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(928)
	::hscript::Token t1 = tmp8;		HX_STACK_VAR(t1,"t1");
	HX_STACK_LINE(929)
	int tmp9 = this->_char;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(929)
	bool tmp10 = (tmp9 < (int)0);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(929)
	int tmp11;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(929)
	if ((tmp10)){
		HX_STACK_LINE(929)
		int tmp12 = this->readPos;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(929)
		tmp11 = (tmp12 - (int)1);
	}
	else{
		HX_STACK_LINE(929)
		int tmp12 = this->readPos;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(929)
		tmp11 = (tmp12 - (int)2);
	}
	HX_STACK_LINE(929)
	this->tokenMax = tmp11;
	HX_STACK_LINE(930)
	::hscript::Token tmp12 = t1;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(930)
	return tmp12;
}


HX_DEFINE_DYNAMIC_FUNC0(Parser_obj,token,return )

::hscript::Token Parser_obj::_token( ){
	HX_STACK_FRAME("hscript.Parser","_token",0x5e76088e,"hscript.Parser._token","hscript/Parser.hx",933,0x98735743)
	HX_STACK_THIS(this)
	HX_STACK_LINE(938)
	int _char;		HX_STACK_VAR(_char,"char");
	HX_STACK_LINE(939)
	int tmp = this->_char;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(939)
	bool tmp1 = (tmp < (int)0);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(939)
	if ((tmp1)){
		HX_STACK_LINE(940)
		int tmp2 = this->readChar();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(940)
		_char = tmp2;
	}
	else{
		HX_STACK_LINE(942)
		int tmp2 = this->_char;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(942)
		_char = tmp2;
		HX_STACK_LINE(943)
		this->_char = (int)-1;
	}
	HX_STACK_LINE(945)
	while((true)){
		HX_STACK_LINE(946)
		int tmp2 = _char;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(946)
		switch( (int)(tmp2)){
			case (int)0: {
				HX_STACK_LINE(947)
				return ::hscript::Token_obj::TEof;
			}
			;break;
			case (int)32: case (int)9: case (int)13: {
				HX_STACK_LINE(950)
				(this->tokenMin)++;
			}
			;break;
			case (int)10: {
				HX_STACK_LINE(952)
				(this->line)++;
				HX_STACK_LINE(954)
				(this->tokenMin)++;
			}
			;break;
			case (int)48: case (int)49: case (int)50: case (int)51: case (int)52: case (int)53: case (int)54: case (int)55: case (int)56: case (int)57: {
				HX_STACK_LINE(957)
				int tmp3 = (_char - (int)48);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(957)
				Float tmp4 = (tmp3 * ((Float)1.0));		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(957)
				Float n = tmp4;		HX_STACK_VAR(n,"n");
				HX_STACK_LINE(958)
				Float exp = ((Float)0.);		HX_STACK_VAR(exp,"exp");
				HX_STACK_LINE(959)
				while((true)){
					HX_STACK_LINE(960)
					int tmp5 = this->readChar();		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(960)
					_char = tmp5;
					HX_STACK_LINE(961)
					hx::MultEq(exp,(int)10);
					HX_STACK_LINE(962)
					int tmp6 = _char;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(962)
					switch( (int)(tmp6)){
						case (int)48: case (int)49: case (int)50: case (int)51: case (int)52: case (int)53: case (int)54: case (int)55: case (int)56: case (int)57: {
							HX_STACK_LINE(964)
							Float tmp7 = (n * (int)10);		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(964)
							int tmp8 = (_char - (int)48);		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(964)
							Float tmp9 = (tmp7 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(964)
							n = tmp9;
						}
						;break;
						case (int)46: {
							HX_STACK_LINE(966)
							bool tmp7 = (exp > (int)0);		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(966)
							if ((tmp7)){
								HX_STACK_LINE(968)
								bool tmp8 = (exp == (int)10);		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(968)
								bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(968)
								if ((tmp8)){
									HX_STACK_LINE(968)
									int tmp10 = this->readChar();		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(968)
									int tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(968)
									tmp9 = (tmp11 == (int)46);
								}
								else{
									HX_STACK_LINE(968)
									tmp9 = false;
								}
								HX_STACK_LINE(968)
								if ((tmp9)){
									HX_STACK_LINE(969)
									{
										HX_STACK_LINE(969)
										::hscript::Token tmp10 = ::hscript::Token_obj::TOp(HX_HCSTRING("...","\xee","\x0f","\x23","\x00"));		HX_STACK_VAR(tmp10,"tmp10");
										HX_STACK_LINE(969)
										::hscript::Token tk = tmp10;		HX_STACK_VAR(tk,"tk");
										HX_STACK_LINE(969)
										::List tmp11 = this->tokens;		HX_STACK_VAR(tmp11,"tmp11");
										HX_STACK_LINE(969)
										::hscript::Token tmp12 = tk;		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(969)
										int tmp13 = this->tokenMin;		HX_STACK_VAR(tmp13,"tmp13");
										HX_STACK_LINE(969)
										int tmp14 = this->tokenMax;		HX_STACK_VAR(tmp14,"tmp14");
										struct _Function_8_1{
											inline static Dynamic Block( int &tmp13,::hscript::Token &tmp12,int &tmp14){
												HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","hscript/Parser.hx",969,0x98735743)
												{
													hx::Anon __result = hx::Anon_obj::Create();
													__result->Add(HX_HCSTRING("t","\x74","\x00","\x00","\x00") , tmp12,false);
													__result->Add(HX_HCSTRING("min","\x92","\x11","\x53","\x00") , tmp13,false);
													__result->Add(HX_HCSTRING("max","\xa4","\x0a","\x53","\x00") , tmp14,false);
													return __result;
												}
												return null();
											}
										};
										HX_STACK_LINE(969)
										Dynamic tmp15 = _Function_8_1::Block(tmp13,tmp12,tmp14);		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(969)
										tmp11->push(tmp15);
										HX_STACK_LINE(969)
										int tmp16 = this->oldTokenMin;		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(969)
										this->tokenMin = tmp16;
										HX_STACK_LINE(969)
										int tmp17 = this->oldTokenMax;		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(969)
										this->tokenMax = tmp17;
									}
									HX_STACK_LINE(970)
									Float tmp10 = n;		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(970)
									int tmp11 = ::Std_obj::_int(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(970)
									int i = tmp11;		HX_STACK_VAR(i,"i");
									HX_STACK_LINE(971)
									bool tmp12 = (i == n);		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(971)
									::hscript::Const tmp13;		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(971)
									if ((tmp12)){
										HX_STACK_LINE(971)
										int tmp14 = i;		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(971)
										tmp13 = ::hscript::Const_obj::CInt(tmp14);
									}
									else{
										HX_STACK_LINE(971)
										Float tmp14 = n;		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(971)
										tmp13 = ::hscript::Const_obj::CFloat(tmp14);
									}
									HX_STACK_LINE(971)
									::hscript::Token tmp14 = ::hscript::Token_obj::TConst(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(971)
									return tmp14;
								}
								HX_STACK_LINE(973)
								int tmp10 = _char;		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(973)
								this->invalidChar(tmp10);
							}
							HX_STACK_LINE(975)
							exp = ((Float)1.);
						}
						;break;
						case (int)120: {
							HX_STACK_LINE(977)
							bool tmp7 = (n > (int)0);		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(977)
							bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(977)
							bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(977)
							if ((tmp8)){
								HX_STACK_LINE(977)
								tmp9 = (exp > (int)0);
							}
							else{
								HX_STACK_LINE(977)
								tmp9 = true;
							}
							HX_STACK_LINE(977)
							if ((tmp9)){
								HX_STACK_LINE(978)
								int tmp10 = _char;		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(978)
								this->invalidChar(tmp10);
							}
							HX_STACK_LINE(981)
							int n1 = (int)0;		HX_STACK_VAR(n1,"n1");
							HX_STACK_LINE(982)
							while((true)){
								HX_STACK_LINE(983)
								int tmp10 = this->readChar();		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(983)
								_char = tmp10;
								HX_STACK_LINE(984)
								int tmp11 = _char;		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(984)
								switch( (int)(tmp11)){
									case (int)48: case (int)49: case (int)50: case (int)51: case (int)52: case (int)53: case (int)54: case (int)55: case (int)56: case (int)57: {
										HX_STACK_LINE(986)
										int tmp12 = (int(n1) << int((int)4));		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(986)
										int tmp13 = _char;		HX_STACK_VAR(tmp13,"tmp13");
										HX_STACK_LINE(986)
										int tmp14 = (tmp12 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(986)
										int tmp15 = (tmp14 - (int)48);		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(986)
										n1 = tmp15;
									}
									;break;
									case (int)65: case (int)66: case (int)67: case (int)68: case (int)69: case (int)70: {
										HX_STACK_LINE(988)
										int tmp12 = (int(n1) << int((int)4));		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(988)
										int tmp13 = (_char - (int)55);		HX_STACK_VAR(tmp13,"tmp13");
										HX_STACK_LINE(988)
										int tmp14 = (tmp12 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(988)
										n1 = tmp14;
									}
									;break;
									case (int)97: case (int)98: case (int)99: case (int)100: case (int)101: case (int)102: {
										HX_STACK_LINE(990)
										int tmp12 = (int(n1) << int((int)4));		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(990)
										int tmp13 = (_char - (int)87);		HX_STACK_VAR(tmp13,"tmp13");
										HX_STACK_LINE(990)
										int tmp14 = (tmp12 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(990)
										n1 = tmp14;
									}
									;break;
									default: {
										HX_STACK_LINE(992)
										this->_char = _char;
										HX_STACK_LINE(993)
										int tmp12 = n1;		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(993)
										::hscript::Const tmp13 = ::hscript::Const_obj::CInt(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
										HX_STACK_LINE(993)
										::hscript::Token tmp14 = ::hscript::Token_obj::TConst(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(993)
										return tmp14;
									}
								}
							}
						}
						;break;
						default: {
							HX_STACK_LINE(1018)
							this->_char = _char;
							HX_STACK_LINE(1019)
							Float tmp7 = n;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(1019)
							int tmp8 = ::Std_obj::_int(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(1019)
							int i = tmp8;		HX_STACK_VAR(i,"i");
							HX_STACK_LINE(1020)
							bool tmp9 = (exp > (int)0);		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(1020)
							::hscript::Const tmp10;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(1020)
							if ((tmp9)){
								HX_STACK_LINE(1020)
								Float tmp11 = (n * (int)10);		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(1020)
								Float tmp12 = exp;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(1020)
								Float tmp13 = (Float(tmp11) / Float(tmp12));		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(1020)
								tmp10 = ::hscript::Const_obj::CFloat(tmp13);
							}
							else{
								HX_STACK_LINE(1020)
								bool tmp11 = (i == n);		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(1020)
								if ((tmp11)){
									HX_STACK_LINE(1020)
									int tmp12 = i;		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(1020)
									tmp10 = ::hscript::Const_obj::CInt(tmp12);
								}
								else{
									HX_STACK_LINE(1020)
									Float tmp12 = n;		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(1020)
									tmp10 = ::hscript::Const_obj::CFloat(tmp12);
								}
							}
							HX_STACK_LINE(1020)
							::hscript::Token tmp11 = ::hscript::Token_obj::TConst(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(1020)
							return tmp11;
						}
					}
				}
			}
			;break;
			case (int)59: {
				HX_STACK_LINE(1023)
				return ::hscript::Token_obj::TSemicolon;
			}
			;break;
			case (int)40: {
				HX_STACK_LINE(1024)
				return ::hscript::Token_obj::TPOpen;
			}
			;break;
			case (int)41: {
				HX_STACK_LINE(1025)
				return ::hscript::Token_obj::TPClose;
			}
			;break;
			case (int)44: {
				HX_STACK_LINE(1026)
				return ::hscript::Token_obj::TComma;
			}
			;break;
			case (int)46: {
				HX_STACK_LINE(1028)
				int tmp3 = this->readChar();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(1028)
				_char = tmp3;
				HX_STACK_LINE(1029)
				int tmp4 = _char;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(1029)
				switch( (int)(tmp4)){
					case (int)48: case (int)49: case (int)50: case (int)51: case (int)52: case (int)53: case (int)54: case (int)55: case (int)56: case (int)57: {
						HX_STACK_LINE(1031)
						int tmp5 = (_char - (int)48);		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(1031)
						int n = tmp5;		HX_STACK_VAR(n,"n");
						HX_STACK_LINE(1032)
						int exp = (int)1;		HX_STACK_VAR(exp,"exp");
						HX_STACK_LINE(1033)
						while((true)){
							HX_STACK_LINE(1034)
							int tmp6 = this->readChar();		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(1034)
							_char = tmp6;
							HX_STACK_LINE(1035)
							hx::MultEq(exp,(int)10);
							HX_STACK_LINE(1036)
							int tmp7 = _char;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(1036)
							switch( (int)(tmp7)){
								case (int)48: case (int)49: case (int)50: case (int)51: case (int)52: case (int)53: case (int)54: case (int)55: case (int)56: case (int)57: {
									HX_STACK_LINE(1038)
									int tmp8 = (n * (int)10);		HX_STACK_VAR(tmp8,"tmp8");
									HX_STACK_LINE(1038)
									int tmp9 = (_char - (int)48);		HX_STACK_VAR(tmp9,"tmp9");
									HX_STACK_LINE(1038)
									int tmp10 = (tmp8 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(1038)
									n = tmp10;
								}
								;break;
								default: {
									HX_STACK_LINE(1040)
									this->_char = _char;
									HX_STACK_LINE(1041)
									Float tmp8 = (Float(n) / Float(exp));		HX_STACK_VAR(tmp8,"tmp8");
									HX_STACK_LINE(1041)
									::hscript::Const tmp9 = ::hscript::Const_obj::CFloat(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
									HX_STACK_LINE(1041)
									::hscript::Token tmp10 = ::hscript::Token_obj::TConst(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(1041)
									return tmp10;
								}
							}
						}
					}
					;break;
					case (int)46: {
						HX_STACK_LINE(1045)
						int tmp5 = this->readChar();		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(1045)
						_char = tmp5;
						HX_STACK_LINE(1046)
						bool tmp6 = (_char != (int)46);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(1046)
						if ((tmp6)){
							HX_STACK_LINE(1047)
							int tmp7 = _char;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(1047)
							this->invalidChar(tmp7);
						}
						HX_STACK_LINE(1048)
						::hscript::Token tmp7 = ::hscript::Token_obj::TOp(HX_HCSTRING("...","\xee","\x0f","\x23","\x00"));		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(1048)
						return tmp7;
					}
					;break;
					default: {
						HX_STACK_LINE(1050)
						this->_char = _char;
						HX_STACK_LINE(1051)
						return ::hscript::Token_obj::TDot;
					}
				}
			}
			;break;
			case (int)123: {
				HX_STACK_LINE(1053)
				return ::hscript::Token_obj::TBrOpen;
			}
			;break;
			case (int)125: {
				HX_STACK_LINE(1054)
				return ::hscript::Token_obj::TBrClose;
			}
			;break;
			case (int)91: {
				HX_STACK_LINE(1055)
				return ::hscript::Token_obj::TBkOpen;
			}
			;break;
			case (int)93: {
				HX_STACK_LINE(1056)
				return ::hscript::Token_obj::TBkClose;
			}
			;break;
			case (int)39: {
				HX_STACK_LINE(1057)
				::String tmp3 = this->readString((int)39);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(1057)
				::hscript::Const tmp4 = ::hscript::Const_obj::CString(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(1057)
				::hscript::Token tmp5 = ::hscript::Token_obj::TConst(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1057)
				return tmp5;
			}
			;break;
			case (int)34: {
				HX_STACK_LINE(1058)
				::String tmp3 = this->readString((int)34);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(1058)
				::hscript::Const tmp4 = ::hscript::Const_obj::CString(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(1058)
				::hscript::Token tmp5 = ::hscript::Token_obj::TConst(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1058)
				return tmp5;
			}
			;break;
			case (int)63: {
				HX_STACK_LINE(1059)
				return ::hscript::Token_obj::TQuestion;
			}
			;break;
			case (int)58: {
				HX_STACK_LINE(1060)
				return ::hscript::Token_obj::TDoubleDot;
			}
			;break;
			case (int)61: {
				HX_STACK_LINE(1062)
				int tmp3 = this->readChar();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(1062)
				_char = tmp3;
				HX_STACK_LINE(1063)
				bool tmp4 = (_char == (int)61);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(1063)
				if ((tmp4)){
					HX_STACK_LINE(1064)
					::hscript::Token tmp5 = ::hscript::Token_obj::TOp(HX_HCSTRING("==","\x60","\x35","\x00","\x00"));		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(1064)
					return tmp5;
				}
				HX_STACK_LINE(1065)
				this->_char = _char;
				HX_STACK_LINE(1066)
				::hscript::Token tmp5 = ::hscript::Token_obj::TOp(HX_HCSTRING("=","\x3d","\x00","\x00","\x00"));		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1066)
				return tmp5;
			}
			;break;
			default: {
				HX_STACK_LINE(1068)
				bool tmp3 = this->ops->__get(_char);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(1068)
				if ((tmp3)){
					HX_STACK_LINE(1069)
					int tmp4 = _char;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(1069)
					::String tmp5 = ::String::fromCharCode(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(1069)
					::String op = tmp5;		HX_STACK_VAR(op,"op");
					HX_STACK_LINE(1070)
					int prev = (int)-1;		HX_STACK_VAR(prev,"prev");
					HX_STACK_LINE(1071)
					while((true)){
						HX_STACK_LINE(1072)
						int tmp6 = this->readChar();		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(1072)
						_char = tmp6;
						HX_STACK_LINE(1073)
						bool tmp7 = this->ops->__get(_char);		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(1073)
						bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(1073)
						bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(1073)
						bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(1073)
						bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(1073)
						if ((tmp10)){
							HX_STACK_LINE(1073)
							tmp11 = (prev == (int)61);
						}
						else{
							HX_STACK_LINE(1073)
							tmp11 = true;
						}
						HX_STACK_LINE(1073)
						if ((tmp11)){
							HX_STACK_LINE(1074)
							Dynamic tmp12 = op.charCodeAt((int)0);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(1074)
							bool tmp13 = (tmp12 == (int)47);		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(1074)
							if ((tmp13)){
								HX_STACK_LINE(1075)
								::String tmp14 = op;		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(1075)
								int tmp15 = _char;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(1075)
								::hscript::Token tmp16 = this->tokenComment(tmp14,tmp15);		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(1075)
								return tmp16;
							}
							HX_STACK_LINE(1076)
							this->_char = _char;
							HX_STACK_LINE(1077)
							::String tmp14 = op;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(1077)
							::hscript::Token tmp15 = ::hscript::Token_obj::TOp(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(1077)
							return tmp15;
						}
						HX_STACK_LINE(1079)
						prev = _char;
						HX_STACK_LINE(1080)
						int tmp12 = _char;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(1080)
						::String tmp13 = ::String::fromCharCode(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(1080)
						hx::AddEq(op,tmp13);
					}
				}
				HX_STACK_LINE(1083)
				bool tmp4 = this->idents->__get(_char);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(1083)
				if ((tmp4)){
					HX_STACK_LINE(1084)
					int tmp5 = _char;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(1084)
					::String tmp6 = ::String::fromCharCode(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(1084)
					::String id = tmp6;		HX_STACK_VAR(id,"id");
					HX_STACK_LINE(1085)
					while((true)){
						HX_STACK_LINE(1086)
						int tmp7 = this->readChar();		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(1086)
						_char = tmp7;
						HX_STACK_LINE(1087)
						bool tmp8 = this->idents->__get(_char);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(1087)
						bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(1087)
						if ((tmp9)){
							HX_STACK_LINE(1088)
							this->_char = _char;
							HX_STACK_LINE(1089)
							::String tmp10 = id;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(1089)
							::hscript::Token tmp11 = ::hscript::Token_obj::TId(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(1089)
							return tmp11;
						}
						HX_STACK_LINE(1091)
						int tmp10 = _char;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(1091)
						::String tmp11 = ::String::fromCharCode(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(1091)
						hx::AddEq(id,tmp11);
					}
				}
				HX_STACK_LINE(1094)
				int tmp5 = _char;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1094)
				this->invalidChar(tmp5);
			}
		}
		HX_STACK_LINE(1096)
		int tmp3 = this->readChar();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1096)
		_char = tmp3;
	}
	HX_STACK_LINE(1098)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Parser_obj,_token,return )

::hscript::Token Parser_obj::tokenComment( ::String op,int _char){
	HX_STACK_FRAME("hscript.Parser","tokenComment",0xb86c15ba,"hscript.Parser.tokenComment","hscript/Parser.hx",1101,0x98735743)
	HX_STACK_THIS(this)
	HX_STACK_ARG(op,"op")
	HX_STACK_ARG(_char,"char")
	HX_STACK_LINE(1102)
	Dynamic tmp = op.charCodeAt((int)1);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1102)
	Dynamic c = tmp;		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(1103)
	::haxe::io::Input tmp1 = this->input;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1103)
	::haxe::io::Input s = tmp1;		HX_STACK_VAR(s,"s");
	HX_STACK_LINE(1104)
	bool tmp2 = (c == (int)47);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1104)
	if ((tmp2)){
		HX_STACK_LINE(1105)
		try
		{
		HX_STACK_CATCHABLE(Dynamic, 0);
		{
			HX_STACK_LINE(1106)
			while((true)){
				HX_STACK_LINE(1106)
				bool tmp3 = (_char != (int)13);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(1106)
				bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(1106)
				if ((tmp3)){
					HX_STACK_LINE(1106)
					tmp4 = (_char != (int)10);
				}
				else{
					HX_STACK_LINE(1106)
					tmp4 = false;
				}
				HX_STACK_LINE(1106)
				bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1106)
				if ((tmp5)){
					HX_STACK_LINE(1106)
					break;
				}
				HX_STACK_LINE(1107)
				(this->readPos)++;
				HX_STACK_LINE(1108)
				int tmp6 = s->readByte();		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1108)
				_char = tmp6;
			}
			HX_STACK_LINE(1110)
			this->_char = _char;
		}
		}
		catch(Dynamic __e){
			{
				HX_STACK_BEGIN_CATCH
				Dynamic e = __e;{
				}
			}
		}
		HX_STACK_LINE(1113)
		::hscript::Token tmp3 = this->token();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1113)
		return tmp3;
	}
	HX_STACK_LINE(1115)
	bool tmp3 = (c == (int)42);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1115)
	if ((tmp3)){
		HX_STACK_LINE(1116)
		int tmp4 = this->line;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1116)
		int old = tmp4;		HX_STACK_VAR(old,"old");
		HX_STACK_LINE(1117)
		bool tmp5 = (op == HX_HCSTRING("/**/","\xa0","\x0a","\x31","\x1f"));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1117)
		if ((tmp5)){
			HX_STACK_LINE(1118)
			this->_char = _char;
			HX_STACK_LINE(1119)
			::hscript::Token tmp6 = this->token();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1119)
			return tmp6;
		}
		HX_STACK_LINE(1121)
		try
		{
		HX_STACK_CATCHABLE(Dynamic, 0);
		{
			HX_STACK_LINE(1122)
			while((true)){
				HX_STACK_LINE(1123)
				while((true)){
					HX_STACK_LINE(1123)
					bool tmp6 = (_char != (int)42);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(1123)
					bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(1123)
					if ((tmp7)){
						HX_STACK_LINE(1123)
						break;
					}
					HX_STACK_LINE(1124)
					bool tmp8 = (_char == (int)10);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(1124)
					if ((tmp8)){
						HX_STACK_LINE(1124)
						(this->line)++;
					}
					HX_STACK_LINE(1125)
					(this->readPos)++;
					HX_STACK_LINE(1126)
					int tmp9 = s->readByte();		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(1126)
					_char = tmp9;
				}
				HX_STACK_LINE(1128)
				(this->readPos)++;
				HX_STACK_LINE(1129)
				int tmp6 = s->readByte();		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1129)
				_char = tmp6;
				HX_STACK_LINE(1130)
				bool tmp7 = (_char == (int)47);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1130)
				if ((tmp7)){
					HX_STACK_LINE(1131)
					break;
				}
			}
		}
		}
		catch(Dynamic __e){
			{
				HX_STACK_BEGIN_CATCH
				Dynamic e = __e;{
					HX_STACK_LINE(1134)
					this->line = old;
					HX_STACK_LINE(1135)
					{
						HX_STACK_LINE(1135)
						int tmp6 = this->tokenMin;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(1135)
						int tmp7 = this->tokenMin;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(1135)
						::hscript::Error tmp8 = ::hscript::Error_obj::__new(::hscript::ErrorDef_obj::EUnterminatedComment,tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(1135)
						HX_STACK_DO_THROW(tmp8);
					}
				}
			}
		}
		HX_STACK_LINE(1137)
		::hscript::Token tmp6 = this->token();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1137)
		return tmp6;
	}
	HX_STACK_LINE(1139)
	this->_char = _char;
	HX_STACK_LINE(1140)
	::String tmp4 = op;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1140)
	::hscript::Token tmp5 = ::hscript::Token_obj::TOp(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1140)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC2(Parser_obj,tokenComment,return )

::String Parser_obj::constString( ::hscript::Const c){
	HX_STACK_FRAME("hscript.Parser","constString",0x0a4693c0,"hscript.Parser.constString","hscript/Parser.hx",1143,0x98735743)
	HX_STACK_THIS(this)
	HX_STACK_ARG(c,"c")
	HX_STACK_LINE(1144)
	::String tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1144)
	switch( (int)(c->__Index())){
		case (int)0: {
			HX_STACK_LINE(1144)
			int tmp1 = (::hscript::Const(c))->__Param(0);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1144)
			int v = tmp1;		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(1145)
			{
				HX_STACK_LINE(1145)
				int tmp2 = v;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(1145)
				tmp = ::Std_obj::string(tmp2);
			}
		}
		;break;
		case (int)1: {
			HX_STACK_LINE(1144)
			Float tmp1 = (::hscript::Const(c))->__Param(0);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1144)
			Float f = tmp1;		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(1146)
			{
				HX_STACK_LINE(1146)
				Float tmp2 = f;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(1146)
				tmp = ::Std_obj::string(tmp2);
			}
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(1144)
			::String tmp1 = (::hscript::Const(c))->__Param(0);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1144)
			::String s = tmp1;		HX_STACK_VAR(s,"s");
			HX_STACK_LINE(1147)
			tmp = s;
		}
		;break;
	}
	HX_STACK_LINE(1144)
	return tmp;
	HX_STACK_LINE(1144)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Parser_obj,constString,return )

::String Parser_obj::tokenString( ::hscript::Token t){
	HX_STACK_FRAME("hscript.Parser","tokenString",0x05f471d6,"hscript.Parser.tokenString","hscript/Parser.hx",1154,0x98735743)
	HX_STACK_THIS(this)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(1155)
	::String tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1155)
	switch( (int)(t->__Index())){
		case (int)0: {
			HX_STACK_LINE(1156)
			tmp = HX_HCSTRING("<eof>","\x3e","\xee","\x21","\xcf");
		}
		;break;
		case (int)1: {
			HX_STACK_LINE(1155)
			::hscript::Const tmp1 = (::hscript::Token(t))->__Param(0);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1155)
			::hscript::Const c = tmp1;		HX_STACK_VAR(c,"c");
			HX_STACK_LINE(1157)
			{
				HX_STACK_LINE(1157)
				::hscript::Const tmp2 = c;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(1157)
				tmp = this->constString(tmp2);
			}
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(1155)
			::String tmp1 = (::hscript::Token(t))->__Param(0);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1155)
			::String s = tmp1;		HX_STACK_VAR(s,"s");
			HX_STACK_LINE(1158)
			tmp = s;
		}
		;break;
		case (int)3: {
			HX_STACK_LINE(1155)
			::String tmp1 = (::hscript::Token(t))->__Param(0);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1155)
			::String s = tmp1;		HX_STACK_VAR(s,"s");
			HX_STACK_LINE(1159)
			tmp = s;
		}
		;break;
		case (int)4: {
			HX_STACK_LINE(1160)
			tmp = HX_HCSTRING("(","\x28","\x00","\x00","\x00");
		}
		;break;
		case (int)5: {
			HX_STACK_LINE(1161)
			tmp = HX_HCSTRING(")","\x29","\x00","\x00","\x00");
		}
		;break;
		case (int)6: {
			HX_STACK_LINE(1162)
			tmp = HX_HCSTRING("{","\x7b","\x00","\x00","\x00");
		}
		;break;
		case (int)7: {
			HX_STACK_LINE(1163)
			tmp = HX_HCSTRING("}","\x7d","\x00","\x00","\x00");
		}
		;break;
		case (int)8: {
			HX_STACK_LINE(1164)
			tmp = HX_HCSTRING(".","\x2e","\x00","\x00","\x00");
		}
		;break;
		case (int)9: {
			HX_STACK_LINE(1165)
			tmp = HX_HCSTRING(",","\x2c","\x00","\x00","\x00");
		}
		;break;
		case (int)10: {
			HX_STACK_LINE(1166)
			tmp = HX_HCSTRING(";","\x3b","\x00","\x00","\x00");
		}
		;break;
		case (int)11: {
			HX_STACK_LINE(1167)
			tmp = HX_HCSTRING("[","\x5b","\x00","\x00","\x00");
		}
		;break;
		case (int)12: {
			HX_STACK_LINE(1168)
			tmp = HX_HCSTRING("]","\x5d","\x00","\x00","\x00");
		}
		;break;
		case (int)13: {
			HX_STACK_LINE(1169)
			tmp = HX_HCSTRING("?","\x3f","\x00","\x00","\x00");
		}
		;break;
		case (int)14: {
			HX_STACK_LINE(1170)
			tmp = HX_HCSTRING(":","\x3a","\x00","\x00","\x00");
		}
		;break;
	}
	HX_STACK_LINE(1155)
	return tmp;
	HX_STACK_LINE(1155)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Parser_obj,tokenString,return )


Parser_obj::Parser_obj()
{
}

void Parser_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Parser);
	HX_MARK_MEMBER_NAME(line,"line");
	HX_MARK_MEMBER_NAME(opChars,"opChars");
	HX_MARK_MEMBER_NAME(identChars,"identChars");
	HX_MARK_MEMBER_NAME(opPriority,"opPriority");
	HX_MARK_MEMBER_NAME(opRightAssoc,"opRightAssoc");
	HX_MARK_MEMBER_NAME(unops,"unops");
	HX_MARK_MEMBER_NAME(allowJSON,"allowJSON");
	HX_MARK_MEMBER_NAME(allowTypes,"allowTypes");
	HX_MARK_MEMBER_NAME(input,"input");
	HX_MARK_MEMBER_NAME(_char,"char");
	HX_MARK_MEMBER_NAME(ops,"ops");
	HX_MARK_MEMBER_NAME(idents,"idents");
	HX_MARK_MEMBER_NAME(uid,"uid");
	HX_MARK_MEMBER_NAME(readPos,"readPos");
	HX_MARK_MEMBER_NAME(tokenMin,"tokenMin");
	HX_MARK_MEMBER_NAME(tokenMax,"tokenMax");
	HX_MARK_MEMBER_NAME(oldTokenMin,"oldTokenMin");
	HX_MARK_MEMBER_NAME(oldTokenMax,"oldTokenMax");
	HX_MARK_MEMBER_NAME(tokens,"tokens");
	HX_MARK_END_CLASS();
}

void Parser_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(line,"line");
	HX_VISIT_MEMBER_NAME(opChars,"opChars");
	HX_VISIT_MEMBER_NAME(identChars,"identChars");
	HX_VISIT_MEMBER_NAME(opPriority,"opPriority");
	HX_VISIT_MEMBER_NAME(opRightAssoc,"opRightAssoc");
	HX_VISIT_MEMBER_NAME(unops,"unops");
	HX_VISIT_MEMBER_NAME(allowJSON,"allowJSON");
	HX_VISIT_MEMBER_NAME(allowTypes,"allowTypes");
	HX_VISIT_MEMBER_NAME(input,"input");
	HX_VISIT_MEMBER_NAME(_char,"char");
	HX_VISIT_MEMBER_NAME(ops,"ops");
	HX_VISIT_MEMBER_NAME(idents,"idents");
	HX_VISIT_MEMBER_NAME(uid,"uid");
	HX_VISIT_MEMBER_NAME(readPos,"readPos");
	HX_VISIT_MEMBER_NAME(tokenMin,"tokenMin");
	HX_VISIT_MEMBER_NAME(tokenMax,"tokenMax");
	HX_VISIT_MEMBER_NAME(oldTokenMin,"oldTokenMin");
	HX_VISIT_MEMBER_NAME(oldTokenMax,"oldTokenMax");
	HX_VISIT_MEMBER_NAME(tokens,"tokens");
}

Dynamic Parser_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"mk") ) { return mk_dyn(); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"ops") ) { return ops; }
		if (HX_FIELD_EQ(inName,"uid") ) { return uid; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"line") ) { return line; }
		if (HX_FIELD_EQ(inName,"char") ) { return _char; }
		if (HX_FIELD_EQ(inName,"push") ) { return push_dyn(); }
		if (HX_FIELD_EQ(inName,"expr") ) { return expr_dyn(); }
		if (HX_FIELD_EQ(inName,"pmin") ) { return pmin_dyn(); }
		if (HX_FIELD_EQ(inName,"pmax") ) { return pmax_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"unops") ) { return unops; }
		if (HX_FIELD_EQ(inName,"input") ) { return input; }
		if (HX_FIELD_EQ(inName,"error") ) { return error_dyn(); }
		if (HX_FIELD_EQ(inName,"parse") ) { return parse_dyn(); }
		if (HX_FIELD_EQ(inName,"token") ) { return token_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"idents") ) { return idents; }
		if (HX_FIELD_EQ(inName,"tokens") ) { return tokens; }
		if (HX_FIELD_EQ(inName,"ensure") ) { return ensure_dyn(); }
		if (HX_FIELD_EQ(inName,"incPos") ) { return incPos_dyn(); }
		if (HX_FIELD_EQ(inName,"_token") ) { return _token_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"opChars") ) { return opChars; }
		if (HX_FIELD_EQ(inName,"readPos") ) { return readPos; }
		if (HX_FIELD_EQ(inName,"isBlock") ) { return isBlock_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"tokenMin") ) { return tokenMin; }
		if (HX_FIELD_EQ(inName,"tokenMax") ) { return tokenMax; }
		if (HX_FIELD_EQ(inName,"mapCompr") ) { return mapCompr_dyn(); }
		if (HX_FIELD_EQ(inName,"makeUnop") ) { return makeUnop_dyn(); }
		if (HX_FIELD_EQ(inName,"readChar") ) { return readChar_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"allowJSON") ) { return allowJSON; }
		if (HX_FIELD_EQ(inName,"parseExpr") ) { return parseExpr_dyn(); }
		if (HX_FIELD_EQ(inName,"makeBinop") ) { return makeBinop_dyn(); }
		if (HX_FIELD_EQ(inName,"parseType") ) { return parseType_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"identChars") ) { return identChars; }
		if (HX_FIELD_EQ(inName,"opPriority") ) { return opPriority; }
		if (HX_FIELD_EQ(inName,"allowTypes") ) { return allowTypes; }
		if (HX_FIELD_EQ(inName,"unexpected") ) { return unexpected_dyn(); }
		if (HX_FIELD_EQ(inName,"readString") ) { return readString_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"oldTokenMin") ) { return oldTokenMin; }
		if (HX_FIELD_EQ(inName,"oldTokenMax") ) { return oldTokenMax; }
		if (HX_FIELD_EQ(inName,"invalidChar") ) { return invalidChar_dyn(); }
		if (HX_FIELD_EQ(inName,"parseString") ) { return parseString_dyn(); }
		if (HX_FIELD_EQ(inName,"parseObject") ) { return parseObject_dyn(); }
		if (HX_FIELD_EQ(inName,"constString") ) { return constString_dyn(); }
		if (HX_FIELD_EQ(inName,"tokenString") ) { return tokenString_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"opRightAssoc") ) { return opRightAssoc; }
		if (HX_FIELD_EQ(inName,"tokenComment") ) { return tokenComment_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"parseFullExpr") ) { return parseFullExpr_dyn(); }
		if (HX_FIELD_EQ(inName,"parseExprNext") ) { return parseExprNext_dyn(); }
		if (HX_FIELD_EQ(inName,"parseTypeNext") ) { return parseTypeNext_dyn(); }
		if (HX_FIELD_EQ(inName,"parseExprList") ) { return parseExprList_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"parseStructure") ) { return parseStructure_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Parser_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"ops") ) { ops=inValue.Cast< Array< bool > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"uid") ) { uid=inValue.Cast< int >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"line") ) { line=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"char") ) { _char=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"unops") ) { unops=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"input") ) { input=inValue.Cast< ::haxe::io::Input >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"idents") ) { idents=inValue.Cast< Array< bool > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tokens") ) { tokens=inValue.Cast< ::List >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"opChars") ) { opChars=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"readPos") ) { readPos=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"tokenMin") ) { tokenMin=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tokenMax") ) { tokenMax=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"allowJSON") ) { allowJSON=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"identChars") ) { identChars=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"opPriority") ) { opPriority=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"allowTypes") ) { allowTypes=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"oldTokenMin") ) { oldTokenMin=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"oldTokenMax") ) { oldTokenMax=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"opRightAssoc") ) { opRightAssoc=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Parser_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("line","\xf4","\x17","\xb3","\x47"));
	outFields->push(HX_HCSTRING("opChars","\xfc","\xf3","\xa7","\xa8"));
	outFields->push(HX_HCSTRING("identChars","\xcd","\x23","\x3f","\xee"));
	outFields->push(HX_HCSTRING("opPriority","\xa5","\x21","\xd8","\x3e"));
	outFields->push(HX_HCSTRING("opRightAssoc","\x9a","\xd1","\xfe","\x02"));
	outFields->push(HX_HCSTRING("unops","\x79","\xf3","\xeb","\xa6"));
	outFields->push(HX_HCSTRING("allowJSON","\x31","\x27","\x44","\xb1"));
	outFields->push(HX_HCSTRING("allowTypes","\x30","\x2b","\x97","\x45"));
	outFields->push(HX_HCSTRING("input","\x0a","\xc4","\x1d","\xbe"));
	outFields->push(HX_HCSTRING("char","\xd6","\x5e","\xbf","\x41"));
	outFields->push(HX_HCSTRING("ops","\x32","\x9c","\x54","\x00"));
	outFields->push(HX_HCSTRING("idents","\x83","\x4f","\xa1","\xd2"));
	outFields->push(HX_HCSTRING("uid","\x90","\x23","\x59","\x00"));
	outFields->push(HX_HCSTRING("readPos","\xde","\x03","\xcf","\x02"));
	outFields->push(HX_HCSTRING("tokenMin","\x19","\xa8","\x42","\x2b"));
	outFields->push(HX_HCSTRING("tokenMax","\x2b","\xa1","\x42","\x2b"));
	outFields->push(HX_HCSTRING("oldTokenMin","\xe0","\x7b","\x1c","\x6b"));
	outFields->push(HX_HCSTRING("oldTokenMax","\xf2","\x74","\x1c","\x6b"));
	outFields->push(HX_HCSTRING("tokens","\x5a","\x17","\xe7","\x91"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(Parser_obj,line),HX_HCSTRING("line","\xf4","\x17","\xb3","\x47")},
	{hx::fsString,(int)offsetof(Parser_obj,opChars),HX_HCSTRING("opChars","\xfc","\xf3","\xa7","\xa8")},
	{hx::fsString,(int)offsetof(Parser_obj,identChars),HX_HCSTRING("identChars","\xcd","\x23","\x3f","\xee")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(Parser_obj,opPriority),HX_HCSTRING("opPriority","\xa5","\x21","\xd8","\x3e")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(Parser_obj,opRightAssoc),HX_HCSTRING("opRightAssoc","\x9a","\xd1","\xfe","\x02")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(Parser_obj,unops),HX_HCSTRING("unops","\x79","\xf3","\xeb","\xa6")},
	{hx::fsBool,(int)offsetof(Parser_obj,allowJSON),HX_HCSTRING("allowJSON","\x31","\x27","\x44","\xb1")},
	{hx::fsBool,(int)offsetof(Parser_obj,allowTypes),HX_HCSTRING("allowTypes","\x30","\x2b","\x97","\x45")},
	{hx::fsObject /*::haxe::io::Input*/ ,(int)offsetof(Parser_obj,input),HX_HCSTRING("input","\x0a","\xc4","\x1d","\xbe")},
	{hx::fsInt,(int)offsetof(Parser_obj,_char),HX_HCSTRING("char","\xd6","\x5e","\xbf","\x41")},
	{hx::fsObject /*Array< bool >*/ ,(int)offsetof(Parser_obj,ops),HX_HCSTRING("ops","\x32","\x9c","\x54","\x00")},
	{hx::fsObject /*Array< bool >*/ ,(int)offsetof(Parser_obj,idents),HX_HCSTRING("idents","\x83","\x4f","\xa1","\xd2")},
	{hx::fsInt,(int)offsetof(Parser_obj,uid),HX_HCSTRING("uid","\x90","\x23","\x59","\x00")},
	{hx::fsInt,(int)offsetof(Parser_obj,readPos),HX_HCSTRING("readPos","\xde","\x03","\xcf","\x02")},
	{hx::fsInt,(int)offsetof(Parser_obj,tokenMin),HX_HCSTRING("tokenMin","\x19","\xa8","\x42","\x2b")},
	{hx::fsInt,(int)offsetof(Parser_obj,tokenMax),HX_HCSTRING("tokenMax","\x2b","\xa1","\x42","\x2b")},
	{hx::fsInt,(int)offsetof(Parser_obj,oldTokenMin),HX_HCSTRING("oldTokenMin","\xe0","\x7b","\x1c","\x6b")},
	{hx::fsInt,(int)offsetof(Parser_obj,oldTokenMax),HX_HCSTRING("oldTokenMax","\xf2","\x74","\x1c","\x6b")},
	{hx::fsObject /*::List*/ ,(int)offsetof(Parser_obj,tokens),HX_HCSTRING("tokens","\x5a","\x17","\xe7","\x91")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("line","\xf4","\x17","\xb3","\x47"),
	HX_HCSTRING("opChars","\xfc","\xf3","\xa7","\xa8"),
	HX_HCSTRING("identChars","\xcd","\x23","\x3f","\xee"),
	HX_HCSTRING("opPriority","\xa5","\x21","\xd8","\x3e"),
	HX_HCSTRING("opRightAssoc","\x9a","\xd1","\xfe","\x02"),
	HX_HCSTRING("unops","\x79","\xf3","\xeb","\xa6"),
	HX_HCSTRING("allowJSON","\x31","\x27","\x44","\xb1"),
	HX_HCSTRING("allowTypes","\x30","\x2b","\x97","\x45"),
	HX_HCSTRING("input","\x0a","\xc4","\x1d","\xbe"),
	HX_HCSTRING("char","\xd6","\x5e","\xbf","\x41"),
	HX_HCSTRING("ops","\x32","\x9c","\x54","\x00"),
	HX_HCSTRING("idents","\x83","\x4f","\xa1","\xd2"),
	HX_HCSTRING("uid","\x90","\x23","\x59","\x00"),
	HX_HCSTRING("readPos","\xde","\x03","\xcf","\x02"),
	HX_HCSTRING("tokenMin","\x19","\xa8","\x42","\x2b"),
	HX_HCSTRING("tokenMax","\x2b","\xa1","\x42","\x2b"),
	HX_HCSTRING("oldTokenMin","\xe0","\x7b","\x1c","\x6b"),
	HX_HCSTRING("oldTokenMax","\xf2","\x74","\x1c","\x6b"),
	HX_HCSTRING("tokens","\x5a","\x17","\xe7","\x91"),
	HX_HCSTRING("error","\xc8","\xcb","\x29","\x73"),
	HX_HCSTRING("invalidChar","\x6d","\xad","\xce","\xa9"),
	HX_HCSTRING("parseString","\x64","\xd5","\x6c","\x8c"),
	HX_HCSTRING("parse","\x33","\x90","\x55","\xbd"),
	HX_HCSTRING("unexpected","\xd1","\x15","\xf4","\xc5"),
	HX_HCSTRING("push","\xda","\x11","\x61","\x4a"),
	HX_HCSTRING("ensure","\xbe","\xf5","\x7b","\x04"),
	HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43"),
	HX_HCSTRING("pmin","\x22","\xf7","\x5a","\x4a"),
	HX_HCSTRING("pmax","\x34","\xf0","\x5a","\x4a"),
	HX_HCSTRING("mk","\x5e","\x5f","\x00","\x00"),
	HX_HCSTRING("isBlock","\x03","\x19","\x82","\x51"),
	HX_HCSTRING("parseFullExpr","\xb7","\xbd","\x60","\x9c"),
	HX_HCSTRING("parseObject","\x52","\x2b","\x7c","\x90"),
	HX_HCSTRING("parseExpr","\x08","\x4f","\xc4","\xca"),
	HX_HCSTRING("mapCompr","\x47","\xa4","\x9f","\xc1"),
	HX_HCSTRING("makeUnop","\xc8","\xc4","\x47","\x44"),
	HX_HCSTRING("makeBinop","\xda","\x90","\x98","\x86"),
	HX_HCSTRING("parseStructure","\x80","\x85","\x70","\x8b"),
	HX_HCSTRING("parseExprNext","\x1b","\x24","\xa8","\xf3"),
	HX_HCSTRING("parseType","\x8d","\x44","\xaf","\xd4"),
	HX_HCSTRING("parseTypeNext","\x20","\xc0","\xfc","\xfa"),
	HX_HCSTRING("parseExprList","\x86","\xbb","\x58","\xf2"),
	HX_HCSTRING("incPos","\x56","\xe7","\x39","\x93"),
	HX_HCSTRING("readChar","\x4c","\x39","\xb7","\x69"),
	HX_HCSTRING("readString","\xc7","\x0c","\xac","\x0a"),
	HX_HCSTRING("token","\xf9","\x82","\x2b","\x14"),
	HX_HCSTRING("_token","\x3a","\xca","\x12","\x10"),
	HX_HCSTRING("tokenComment","\x66","\x60","\xfb","\x25"),
	HX_HCSTRING("constString","\x94","\x42","\x30","\xa9"),
	HX_HCSTRING("tokenString","\xaa","\x20","\xde","\xa4"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Parser_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Parser_obj::__mClass,"__mClass");
};

#endif

hx::Class Parser_obj::__mClass;

void Parser_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("hscript.Parser","\x9a","\x9f","\xf2","\xe9");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Parser_obj >;
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

} // end namespace hscript
