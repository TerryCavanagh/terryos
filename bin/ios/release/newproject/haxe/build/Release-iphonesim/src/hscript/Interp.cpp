#include <hxcpp.h>

#ifndef INCLUDED_IntIterator
#include <IntIterator.h>
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
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
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
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
#ifndef INCLUDED_hscript_Interp
#include <hscript/Interp.h>
#endif
#ifndef INCLUDED_hscript__Interp_Stop
#include <hscript/_Interp/Stop.h>
#endif
namespace hscript{

Void Interp_obj::__construct()
{
HX_STACK_FRAME("hscript.Interp","new",0xf7e71101,"hscript.Interp.new","hscript/Interp.hx",54,0xf078416e)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(56)
	::haxe::ds::StringMap tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(56)
	{
		HX_STACK_LINE(56)
		::haxe::ds::StringMap tmp1 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(56)
		::haxe::ds::StringMap tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(56)
		tmp = tmp2;
	}
	HX_STACK_LINE(56)
	this->variables = tmp;
	HX_STACK_LINE(57)
	::haxe::ds::StringMap tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(57)
	{
		HX_STACK_LINE(57)
		::haxe::ds::StringMap tmp2 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(57)
		::haxe::ds::StringMap tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(57)
		tmp1 = tmp3;
	}
	HX_STACK_LINE(57)
	this->locals = tmp1;
	HX_STACK_LINE(62)
	this->declared = Dynamic( Array_obj<Dynamic>::__new() );
	HX_STACK_LINE(63)
	::haxe::ds::StringMap tmp2 = this->variables;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(63)
	tmp2->set(HX_HCSTRING("null","\x87","\x9e","\x0e","\x49"),null());
	HX_STACK_LINE(64)
	::haxe::ds::StringMap tmp3 = this->variables;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(64)
	tmp3->set(HX_HCSTRING("true","\x4e","\xa7","\x03","\x4d"),true);
	HX_STACK_LINE(65)
	::haxe::ds::StringMap tmp4 = this->variables;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(65)
	tmp4->set(HX_HCSTRING("false","\xa3","\x35","\x4f","\xfb"),false);
	HX_STACK_LINE(66)
	::haxe::ds::StringMap tmp5 = this->variables;		HX_STACK_VAR(tmp5,"tmp5");

	HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_1)
	int __ArgCount() const { return 1; }
	Void run(Dynamic e){
		HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","hscript/Interp.hx",66,0xf078416e)
		HX_STACK_ARG(e,"e")
		{
			HX_STACK_LINE(66)
			Dynamic tmp6 = e;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(66)
			::String tmp7 = ::Std_obj::string(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			struct _Function_2_1{
				inline static Dynamic Block( ){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","hscript/Interp.hx",66,0xf078416e)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_HCSTRING("fileName","\xe7","\x5a","\x43","\x62") , HX_HCSTRING("hscript","\x73","\x8c","\x18","\x2c"),false);
						__result->Add(HX_HCSTRING("lineNumber","\xdd","\x81","\x22","\x76") , (int)0,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(66)
			Dynamic tmp8 = _Function_2_1::Block();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(66)
			Dynamic tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(66)
			::haxe::Log_obj::trace(tmp7,tmp9);
		}
		return null();
	}
	HX_END_LOCAL_FUNC1((void))

	HX_STACK_LINE(66)
	tmp5->set(HX_HCSTRING("trace","\x85","\x8e","\x1f","\x16"), Dynamic(new _Function_1_1()));
	HX_STACK_LINE(67)
	this->initOps();
}
;
	return null();
}

//Interp_obj::~Interp_obj() { }

Dynamic Interp_obj::__CreateEmpty() { return  new Interp_obj; }
hx::ObjectPtr< Interp_obj > Interp_obj::__new()
{  hx::ObjectPtr< Interp_obj > _result_ = new Interp_obj();
	_result_->__construct();
	return _result_;}

Dynamic Interp_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Interp_obj > _result_ = new Interp_obj();
	_result_->__construct();
	return _result_;}

Void Interp_obj::initOps( ){
{
		HX_STACK_FRAME("hscript.Interp","initOps",0xe1420823,"hscript.Interp.initOps","hscript/Interp.hx",70,0xf078416e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(71)
		::hscript::Interp me = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(me,"me");
		HX_STACK_LINE(73)
		::haxe::ds::StringMap tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(73)
		{
			HX_STACK_LINE(73)
			::haxe::ds::StringMap tmp1 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(73)
			::haxe::ds::StringMap tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(73)
			tmp = tmp2;
		}
		HX_STACK_LINE(73)
		this->binops = tmp;
		HX_STACK_LINE(77)
		::haxe::ds::StringMap tmp1 = this->binops;		HX_STACK_VAR(tmp1,"tmp1");

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,::hscript::Interp,me)
		int __ArgCount() const { return 2; }
		Dynamic run(Dynamic e1,Dynamic e2){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","hscript/Interp.hx",77,0xf078416e)
			HX_STACK_ARG(e1,"e1")
			HX_STACK_ARG(e2,"e2")
			{
				HX_STACK_LINE(77)
				Dynamic tmp2 = e1;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(77)
				Dynamic tmp3 = me->expr(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(77)
				Dynamic tmp4 = e2;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(77)
				Dynamic tmp5 = me->expr(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(77)
				Dynamic tmp6 = (tmp3 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(77)
				return tmp6;
			}
			return null();
		}
		HX_END_LOCAL_FUNC2(return)

		HX_STACK_LINE(77)
		tmp1->set(HX_HCSTRING("+","\x2b","\x00","\x00","\x00"), Dynamic(new _Function_1_1(me)));
		HX_STACK_LINE(78)
		::haxe::ds::StringMap tmp2 = this->binops;		HX_STACK_VAR(tmp2,"tmp2");

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_2,::hscript::Interp,me)
		int __ArgCount() const { return 2; }
		Float run(Dynamic e1,Dynamic e2){
			HX_STACK_FRAME("*","_Function_1_2",0x5200ed38,"*._Function_1_2","hscript/Interp.hx",78,0xf078416e)
			HX_STACK_ARG(e1,"e1")
			HX_STACK_ARG(e2,"e2")
			{
				HX_STACK_LINE(78)
				Dynamic tmp3 = e1;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(78)
				Dynamic tmp4 = me->expr(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(78)
				Dynamic tmp5 = e2;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(78)
				Dynamic tmp6 = me->expr(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(78)
				Float tmp7 = (tmp4 - tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(78)
				return tmp7;
			}
			return null();
		}
		HX_END_LOCAL_FUNC2(return)

		HX_STACK_LINE(78)
		tmp2->set(HX_HCSTRING("-","\x2d","\x00","\x00","\x00"), Dynamic(new _Function_1_2(me)));
		HX_STACK_LINE(79)
		::haxe::ds::StringMap tmp3 = this->binops;		HX_STACK_VAR(tmp3,"tmp3");

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_3,::hscript::Interp,me)
		int __ArgCount() const { return 2; }
		Float run(Dynamic e1,Dynamic e2){
			HX_STACK_FRAME("*","_Function_1_3",0x5200ed39,"*._Function_1_3","hscript/Interp.hx",79,0xf078416e)
			HX_STACK_ARG(e1,"e1")
			HX_STACK_ARG(e2,"e2")
			{
				HX_STACK_LINE(79)
				Dynamic tmp4 = e1;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(79)
				Dynamic tmp5 = me->expr(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(79)
				Dynamic tmp6 = e2;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(79)
				Dynamic tmp7 = me->expr(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(79)
				Float tmp8 = (tmp5 * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(79)
				return tmp8;
			}
			return null();
		}
		HX_END_LOCAL_FUNC2(return)

		HX_STACK_LINE(79)
		tmp3->set(HX_HCSTRING("*","\x2a","\x00","\x00","\x00"), Dynamic(new _Function_1_3(me)));
		HX_STACK_LINE(80)
		::haxe::ds::StringMap tmp4 = this->binops;		HX_STACK_VAR(tmp4,"tmp4");

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_4,::hscript::Interp,me)
		int __ArgCount() const { return 2; }
		Float run(Dynamic e1,Dynamic e2){
			HX_STACK_FRAME("*","_Function_1_4",0x5200ed3a,"*._Function_1_4","hscript/Interp.hx",80,0xf078416e)
			HX_STACK_ARG(e1,"e1")
			HX_STACK_ARG(e2,"e2")
			{
				HX_STACK_LINE(80)
				Dynamic tmp5 = e1;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(80)
				Dynamic tmp6 = me->expr(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(80)
				Dynamic tmp7 = e2;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(80)
				Dynamic tmp8 = me->expr(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(80)
				Float tmp9 = (Float(tmp6) / Float(tmp8));		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(80)
				return tmp9;
			}
			return null();
		}
		HX_END_LOCAL_FUNC2(return)

		HX_STACK_LINE(80)
		tmp4->set(HX_HCSTRING("/","\x2f","\x00","\x00","\x00"), Dynamic(new _Function_1_4(me)));
		HX_STACK_LINE(81)
		::haxe::ds::StringMap tmp5 = this->binops;		HX_STACK_VAR(tmp5,"tmp5");

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_5,::hscript::Interp,me)
		int __ArgCount() const { return 2; }
		Float run(Dynamic e1,Dynamic e2){
			HX_STACK_FRAME("*","_Function_1_5",0x5200ed3b,"*._Function_1_5","hscript/Interp.hx",81,0xf078416e)
			HX_STACK_ARG(e1,"e1")
			HX_STACK_ARG(e2,"e2")
			{
				HX_STACK_LINE(81)
				Dynamic tmp6 = e1;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(81)
				Dynamic tmp7 = me->expr(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(81)
				Dynamic tmp8 = e2;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(81)
				Dynamic tmp9 = me->expr(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(81)
				Float tmp10 = hx::Mod(tmp7,tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(81)
				return tmp10;
			}
			return null();
		}
		HX_END_LOCAL_FUNC2(return)

		HX_STACK_LINE(81)
		tmp5->set(HX_HCSTRING("%","\x25","\x00","\x00","\x00"), Dynamic(new _Function_1_5(me)));
		HX_STACK_LINE(82)
		::haxe::ds::StringMap tmp6 = this->binops;		HX_STACK_VAR(tmp6,"tmp6");

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_6,::hscript::Interp,me)
		int __ArgCount() const { return 2; }
		int run(Dynamic e1,Dynamic e2){
			HX_STACK_FRAME("*","_Function_1_6",0x5200ed3c,"*._Function_1_6","hscript/Interp.hx",82,0xf078416e)
			HX_STACK_ARG(e1,"e1")
			HX_STACK_ARG(e2,"e2")
			{
				HX_STACK_LINE(82)
				Dynamic tmp7 = e1;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(82)
				Dynamic tmp8 = me->expr(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(82)
				Dynamic tmp9 = e2;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(82)
				Dynamic tmp10 = me->expr(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(82)
				int tmp11 = (int(tmp8) & int(tmp10));		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(82)
				return tmp11;
			}
			return null();
		}
		HX_END_LOCAL_FUNC2(return)

		HX_STACK_LINE(82)
		tmp6->set(HX_HCSTRING("&","\x26","\x00","\x00","\x00"), Dynamic(new _Function_1_6(me)));
		HX_STACK_LINE(83)
		::haxe::ds::StringMap tmp7 = this->binops;		HX_STACK_VAR(tmp7,"tmp7");

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_7,::hscript::Interp,me)
		int __ArgCount() const { return 2; }
		int run(Dynamic e1,Dynamic e2){
			HX_STACK_FRAME("*","_Function_1_7",0x5200ed3d,"*._Function_1_7","hscript/Interp.hx",83,0xf078416e)
			HX_STACK_ARG(e1,"e1")
			HX_STACK_ARG(e2,"e2")
			{
				HX_STACK_LINE(83)
				Dynamic tmp8 = e1;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(83)
				Dynamic tmp9 = me->expr(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(83)
				Dynamic tmp10 = e2;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(83)
				Dynamic tmp11 = me->expr(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(83)
				int tmp12 = (int(tmp9) | int(tmp11));		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(83)
				return tmp12;
			}
			return null();
		}
		HX_END_LOCAL_FUNC2(return)

		HX_STACK_LINE(83)
		tmp7->set(HX_HCSTRING("|","\x7c","\x00","\x00","\x00"), Dynamic(new _Function_1_7(me)));
		HX_STACK_LINE(84)
		::haxe::ds::StringMap tmp8 = this->binops;		HX_STACK_VAR(tmp8,"tmp8");

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_8,::hscript::Interp,me)
		int __ArgCount() const { return 2; }
		int run(Dynamic e1,Dynamic e2){
			HX_STACK_FRAME("*","_Function_1_8",0x5200ed3e,"*._Function_1_8","hscript/Interp.hx",84,0xf078416e)
			HX_STACK_ARG(e1,"e1")
			HX_STACK_ARG(e2,"e2")
			{
				HX_STACK_LINE(84)
				Dynamic tmp9 = e1;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(84)
				Dynamic tmp10 = me->expr(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(84)
				Dynamic tmp11 = e2;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(84)
				Dynamic tmp12 = me->expr(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(84)
				int tmp13 = (int(tmp10) ^ int(tmp12));		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(84)
				return tmp13;
			}
			return null();
		}
		HX_END_LOCAL_FUNC2(return)

		HX_STACK_LINE(84)
		tmp8->set(HX_HCSTRING("^","\x5e","\x00","\x00","\x00"), Dynamic(new _Function_1_8(me)));
		HX_STACK_LINE(85)
		::haxe::ds::StringMap tmp9 = this->binops;		HX_STACK_VAR(tmp9,"tmp9");

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_9,::hscript::Interp,me)
		int __ArgCount() const { return 2; }
		int run(Dynamic e1,Dynamic e2){
			HX_STACK_FRAME("*","_Function_1_9",0x5200ed3f,"*._Function_1_9","hscript/Interp.hx",85,0xf078416e)
			HX_STACK_ARG(e1,"e1")
			HX_STACK_ARG(e2,"e2")
			{
				HX_STACK_LINE(85)
				Dynamic tmp10 = e1;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(85)
				Dynamic tmp11 = me->expr(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(85)
				Dynamic tmp12 = e2;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(85)
				Dynamic tmp13 = me->expr(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(85)
				int tmp14 = (int(tmp11) << int(tmp13));		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(85)
				return tmp14;
			}
			return null();
		}
		HX_END_LOCAL_FUNC2(return)

		HX_STACK_LINE(85)
		tmp9->set(HX_HCSTRING("<<","\x80","\x34","\x00","\x00"), Dynamic(new _Function_1_9(me)));
		HX_STACK_LINE(86)
		::haxe::ds::StringMap tmp10 = this->binops;		HX_STACK_VAR(tmp10,"tmp10");

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_10,::hscript::Interp,me)
		int __ArgCount() const { return 2; }
		int run(Dynamic e1,Dynamic e2){
			HX_STACK_FRAME("*","_Function_1_10",0x6ecea319,"*._Function_1_10","hscript/Interp.hx",86,0xf078416e)
			HX_STACK_ARG(e1,"e1")
			HX_STACK_ARG(e2,"e2")
			{
				HX_STACK_LINE(86)
				Dynamic tmp11 = e1;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(86)
				Dynamic tmp12 = me->expr(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(86)
				Dynamic tmp13 = e2;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(86)
				Dynamic tmp14 = me->expr(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(86)
				int tmp15 = (int(tmp12) >> int(tmp14));		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(86)
				return tmp15;
			}
			return null();
		}
		HX_END_LOCAL_FUNC2(return)

		HX_STACK_LINE(86)
		tmp10->set(HX_HCSTRING(">>","\x40","\x36","\x00","\x00"), Dynamic(new _Function_1_10(me)));
		HX_STACK_LINE(87)
		::haxe::ds::StringMap tmp11 = this->binops;		HX_STACK_VAR(tmp11,"tmp11");

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_11,::hscript::Interp,me)
		int __ArgCount() const { return 2; }
		int run(Dynamic e1,Dynamic e2){
			HX_STACK_FRAME("*","_Function_1_11",0x6ecea31a,"*._Function_1_11","hscript/Interp.hx",87,0xf078416e)
			HX_STACK_ARG(e1,"e1")
			HX_STACK_ARG(e2,"e2")
			{
				HX_STACK_LINE(87)
				Dynamic tmp12 = e1;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(87)
				Dynamic tmp13 = me->expr(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(87)
				Dynamic tmp14 = e2;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(87)
				Dynamic tmp15 = me->expr(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(87)
				int tmp16 = hx::UShr(tmp13,tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(87)
				return tmp16;
			}
			return null();
		}
		HX_END_LOCAL_FUNC2(return)

		HX_STACK_LINE(87)
		tmp11->set(HX_HCSTRING(">>>","\xfe","\x41","\x2f","\x00"), Dynamic(new _Function_1_11(me)));
		HX_STACK_LINE(88)
		::haxe::ds::StringMap tmp12 = this->binops;		HX_STACK_VAR(tmp12,"tmp12");

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_12,::hscript::Interp,me)
		int __ArgCount() const { return 2; }
		bool run(Dynamic e1,Dynamic e2){
			HX_STACK_FRAME("*","_Function_1_12",0x6ecea31b,"*._Function_1_12","hscript/Interp.hx",88,0xf078416e)
			HX_STACK_ARG(e1,"e1")
			HX_STACK_ARG(e2,"e2")
			{
				HX_STACK_LINE(88)
				Dynamic tmp13 = e1;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(88)
				Dynamic tmp14 = me->expr(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(88)
				Dynamic tmp15 = e2;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(88)
				Dynamic tmp16 = me->expr(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(88)
				bool tmp17 = (tmp14 == tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(88)
				return tmp17;
			}
			return null();
		}
		HX_END_LOCAL_FUNC2(return)

		HX_STACK_LINE(88)
		tmp12->set(HX_HCSTRING("==","\x60","\x35","\x00","\x00"), Dynamic(new _Function_1_12(me)));
		HX_STACK_LINE(89)
		::haxe::ds::StringMap tmp13 = this->binops;		HX_STACK_VAR(tmp13,"tmp13");

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_13,::hscript::Interp,me)
		int __ArgCount() const { return 2; }
		bool run(Dynamic e1,Dynamic e2){
			HX_STACK_FRAME("*","_Function_1_13",0x6ecea31c,"*._Function_1_13","hscript/Interp.hx",89,0xf078416e)
			HX_STACK_ARG(e1,"e1")
			HX_STACK_ARG(e2,"e2")
			{
				HX_STACK_LINE(89)
				Dynamic tmp14 = e1;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(89)
				Dynamic tmp15 = me->expr(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(89)
				Dynamic tmp16 = e2;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(89)
				Dynamic tmp17 = me->expr(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(89)
				bool tmp18 = (tmp15 != tmp17);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(89)
				return tmp18;
			}
			return null();
		}
		HX_END_LOCAL_FUNC2(return)

		HX_STACK_LINE(89)
		tmp13->set(HX_HCSTRING("!=","\xfc","\x1c","\x00","\x00"), Dynamic(new _Function_1_13(me)));
		HX_STACK_LINE(90)
		::haxe::ds::StringMap tmp14 = this->binops;		HX_STACK_VAR(tmp14,"tmp14");

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_14,::hscript::Interp,me)
		int __ArgCount() const { return 2; }
		bool run(Dynamic e1,Dynamic e2){
			HX_STACK_FRAME("*","_Function_1_14",0x6ecea31d,"*._Function_1_14","hscript/Interp.hx",90,0xf078416e)
			HX_STACK_ARG(e1,"e1")
			HX_STACK_ARG(e2,"e2")
			{
				HX_STACK_LINE(90)
				Dynamic tmp15 = e1;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(90)
				Dynamic tmp16 = me->expr(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(90)
				Dynamic tmp17 = e2;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(90)
				Dynamic tmp18 = me->expr(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(90)
				bool tmp19 = (tmp16 >= tmp18);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(90)
				return tmp19;
			}
			return null();
		}
		HX_END_LOCAL_FUNC2(return)

		HX_STACK_LINE(90)
		tmp14->set(HX_HCSTRING(">=","\x3f","\x36","\x00","\x00"), Dynamic(new _Function_1_14(me)));
		HX_STACK_LINE(91)
		::haxe::ds::StringMap tmp15 = this->binops;		HX_STACK_VAR(tmp15,"tmp15");

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_15,::hscript::Interp,me)
		int __ArgCount() const { return 2; }
		bool run(Dynamic e1,Dynamic e2){
			HX_STACK_FRAME("*","_Function_1_15",0x6ecea31e,"*._Function_1_15","hscript/Interp.hx",91,0xf078416e)
			HX_STACK_ARG(e1,"e1")
			HX_STACK_ARG(e2,"e2")
			{
				HX_STACK_LINE(91)
				Dynamic tmp16 = e1;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(91)
				Dynamic tmp17 = me->expr(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(91)
				Dynamic tmp18 = e2;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(91)
				Dynamic tmp19 = me->expr(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(91)
				bool tmp20 = (tmp17 <= tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(91)
				return tmp20;
			}
			return null();
		}
		HX_END_LOCAL_FUNC2(return)

		HX_STACK_LINE(91)
		tmp15->set(HX_HCSTRING("<=","\x81","\x34","\x00","\x00"), Dynamic(new _Function_1_15(me)));
		HX_STACK_LINE(92)
		::haxe::ds::StringMap tmp16 = this->binops;		HX_STACK_VAR(tmp16,"tmp16");

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_16,::hscript::Interp,me)
		int __ArgCount() const { return 2; }
		bool run(Dynamic e1,Dynamic e2){
			HX_STACK_FRAME("*","_Function_1_16",0x6ecea31f,"*._Function_1_16","hscript/Interp.hx",92,0xf078416e)
			HX_STACK_ARG(e1,"e1")
			HX_STACK_ARG(e2,"e2")
			{
				HX_STACK_LINE(92)
				Dynamic tmp17 = e1;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(92)
				Dynamic tmp18 = me->expr(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(92)
				Dynamic tmp19 = e2;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(92)
				Dynamic tmp20 = me->expr(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(92)
				bool tmp21 = (tmp18 > tmp20);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(92)
				return tmp21;
			}
			return null();
		}
		HX_END_LOCAL_FUNC2(return)

		HX_STACK_LINE(92)
		tmp16->set(HX_HCSTRING(">","\x3e","\x00","\x00","\x00"), Dynamic(new _Function_1_16(me)));
		HX_STACK_LINE(93)
		::haxe::ds::StringMap tmp17 = this->binops;		HX_STACK_VAR(tmp17,"tmp17");

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_17,::hscript::Interp,me)
		int __ArgCount() const { return 2; }
		bool run(Dynamic e1,Dynamic e2){
			HX_STACK_FRAME("*","_Function_1_17",0x6ecea320,"*._Function_1_17","hscript/Interp.hx",93,0xf078416e)
			HX_STACK_ARG(e1,"e1")
			HX_STACK_ARG(e2,"e2")
			{
				HX_STACK_LINE(93)
				Dynamic tmp18 = e1;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(93)
				Dynamic tmp19 = me->expr(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(93)
				Dynamic tmp20 = e2;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(93)
				Dynamic tmp21 = me->expr(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(93)
				bool tmp22 = (tmp19 < tmp21);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(93)
				return tmp22;
			}
			return null();
		}
		HX_END_LOCAL_FUNC2(return)

		HX_STACK_LINE(93)
		tmp17->set(HX_HCSTRING("<","\x3c","\x00","\x00","\x00"), Dynamic(new _Function_1_17(me)));
		HX_STACK_LINE(94)
		::haxe::ds::StringMap tmp18 = this->binops;		HX_STACK_VAR(tmp18,"tmp18");

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_18,::hscript::Interp,me)
		int __ArgCount() const { return 2; }
		bool run(Dynamic e1,Dynamic e2){
			HX_STACK_FRAME("*","_Function_1_18",0x6ecea321,"*._Function_1_18","hscript/Interp.hx",94,0xf078416e)
			HX_STACK_ARG(e1,"e1")
			HX_STACK_ARG(e2,"e2")
			{
				HX_STACK_LINE(94)
				Dynamic tmp19 = e1;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(94)
				Dynamic tmp20 = me->expr(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(94)
				bool tmp21 = (tmp20 == true);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(94)
				bool tmp22 = !(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(94)
				bool tmp23;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(94)
				if ((tmp22)){
					HX_STACK_LINE(94)
					Dynamic tmp24 = e2;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(94)
					Dynamic tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(94)
					Dynamic tmp26 = me->expr(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(94)
					Dynamic tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(94)
					tmp23 = (tmp27 == true);
				}
				else{
					HX_STACK_LINE(94)
					tmp23 = true;
				}
				HX_STACK_LINE(94)
				return tmp23;
			}
			return null();
		}
		HX_END_LOCAL_FUNC2(return)

		HX_STACK_LINE(94)
		tmp18->set(HX_HCSTRING("||","\x80","\x6c","\x00","\x00"), Dynamic(new _Function_1_18(me)));
		HX_STACK_LINE(95)
		::haxe::ds::StringMap tmp19 = this->binops;		HX_STACK_VAR(tmp19,"tmp19");

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_19,::hscript::Interp,me)
		int __ArgCount() const { return 2; }
		bool run(Dynamic e1,Dynamic e2){
			HX_STACK_FRAME("*","_Function_1_19",0x6ecea322,"*._Function_1_19","hscript/Interp.hx",95,0xf078416e)
			HX_STACK_ARG(e1,"e1")
			HX_STACK_ARG(e2,"e2")
			{
				HX_STACK_LINE(95)
				Dynamic tmp20 = e1;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(95)
				Dynamic tmp21 = me->expr(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(95)
				bool tmp22 = (tmp21 == true);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(95)
				bool tmp23;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(95)
				if ((tmp22)){
					HX_STACK_LINE(95)
					Dynamic tmp24 = e2;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(95)
					Dynamic tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(95)
					Dynamic tmp26 = me->expr(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(95)
					Dynamic tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(95)
					tmp23 = (tmp27 == true);
				}
				else{
					HX_STACK_LINE(95)
					tmp23 = false;
				}
				HX_STACK_LINE(95)
				return tmp23;
			}
			return null();
		}
		HX_END_LOCAL_FUNC2(return)

		HX_STACK_LINE(95)
		tmp19->set(HX_HCSTRING("&&","\x40","\x21","\x00","\x00"), Dynamic(new _Function_1_19(me)));
		HX_STACK_LINE(96)
		::haxe::ds::StringMap tmp20 = this->binops;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(96)
		Dynamic tmp21 = this->assign_dyn();		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(96)
		tmp20->set(HX_HCSTRING("=","\x3d","\x00","\x00","\x00"),tmp21);
		HX_STACK_LINE(97)
		::haxe::ds::StringMap tmp22 = this->binops;		HX_STACK_VAR(tmp22,"tmp22");

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_20,::hscript::Interp,me)
		int __ArgCount() const { return 2; }
		::IntIterator run(Dynamic e1,Dynamic e2){
			HX_STACK_FRAME("*","_Function_1_20",0x6ecea3f8,"*._Function_1_20","hscript/Interp.hx",97,0xf078416e)
			HX_STACK_ARG(e1,"e1")
			HX_STACK_ARG(e2,"e2")
			{
				HX_STACK_LINE(97)
				Dynamic tmp23 = e1;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(97)
				Dynamic tmp24 = me->expr(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(97)
				Dynamic tmp25 = e2;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(97)
				Dynamic tmp26 = me->expr(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(97)
				::IntIterator tmp27 = ::IntIterator_obj::__new(tmp24,tmp26);		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(97)
				return tmp27;
			}
			return null();
		}
		HX_END_LOCAL_FUNC2(return)

		HX_STACK_LINE(97)
		tmp22->set(HX_HCSTRING("...","\xee","\x0f","\x23","\x00"), Dynamic(new _Function_1_20(me)));

		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_21)
		int __ArgCount() const { return 2; }
		Dynamic run(Dynamic v1,Dynamic v2){
			HX_STACK_FRAME("*","_Function_1_21",0x6ecea3f9,"*._Function_1_21","hscript/Interp.hx",98,0xf078416e)
			HX_STACK_ARG(v1,"v1")
			HX_STACK_ARG(v2,"v2")
			{
				HX_STACK_LINE(98)
				Dynamic tmp23 = (v1 + v2);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(98)
				return tmp23;
			}
			return null();
		}
		HX_END_LOCAL_FUNC2(return)

		HX_STACK_LINE(98)
		this->assignOp(HX_HCSTRING("+=","\xb2","\x25","\x00","\x00"), Dynamic(new _Function_1_21()));

		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_22)
		int __ArgCount() const { return 2; }
		Float run(Float v1,Float v2){
			HX_STACK_FRAME("*","_Function_1_22",0x6ecea3fa,"*._Function_1_22","hscript/Interp.hx",99,0xf078416e)
			HX_STACK_ARG(v1,"v1")
			HX_STACK_ARG(v2,"v2")
			{
				HX_STACK_LINE(99)
				Float tmp23 = (v1 - v2);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(99)
				return tmp23;
			}
			return null();
		}
		HX_END_LOCAL_FUNC2(return)

		HX_STACK_LINE(99)
		this->assignOp(HX_HCSTRING("-=","\x70","\x27","\x00","\x00"), Dynamic(new _Function_1_22()));

		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_23)
		int __ArgCount() const { return 2; }
		Float run(Float v1,Float v2){
			HX_STACK_FRAME("*","_Function_1_23",0x6ecea3fb,"*._Function_1_23","hscript/Interp.hx",100,0xf078416e)
			HX_STACK_ARG(v1,"v1")
			HX_STACK_ARG(v2,"v2")
			{
				HX_STACK_LINE(100)
				Float tmp23 = (v1 * v2);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(100)
				return tmp23;
			}
			return null();
		}
		HX_END_LOCAL_FUNC2(return)

		HX_STACK_LINE(100)
		this->assignOp(HX_HCSTRING("*=","\xd3","\x24","\x00","\x00"), Dynamic(new _Function_1_23()));

		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_24)
		int __ArgCount() const { return 2; }
		Float run(Float v1,Float v2){
			HX_STACK_FRAME("*","_Function_1_24",0x6ecea3fc,"*._Function_1_24","hscript/Interp.hx",101,0xf078416e)
			HX_STACK_ARG(v1,"v1")
			HX_STACK_ARG(v2,"v2")
			{
				HX_STACK_LINE(101)
				Float tmp23 = (Float(v1) / Float(v2));		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(101)
				return tmp23;
			}
			return null();
		}
		HX_END_LOCAL_FUNC2(return)

		HX_STACK_LINE(101)
		this->assignOp(HX_HCSTRING("/=","\x2e","\x29","\x00","\x00"), Dynamic(new _Function_1_24()));

		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_25)
		int __ArgCount() const { return 2; }
		Float run(Float v1,Float v2){
			HX_STACK_FRAME("*","_Function_1_25",0x6ecea3fd,"*._Function_1_25","hscript/Interp.hx",102,0xf078416e)
			HX_STACK_ARG(v1,"v1")
			HX_STACK_ARG(v2,"v2")
			{
				HX_STACK_LINE(102)
				Float tmp23 = hx::Mod(v1,v2);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(102)
				return tmp23;
			}
			return null();
		}
		HX_END_LOCAL_FUNC2(return)

		HX_STACK_LINE(102)
		this->assignOp(HX_HCSTRING("%=","\x78","\x20","\x00","\x00"), Dynamic(new _Function_1_25()));

		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_26)
		int __ArgCount() const { return 2; }
		int run(int v1,int v2){
			HX_STACK_FRAME("*","_Function_1_26",0x6ecea3fe,"*._Function_1_26","hscript/Interp.hx",103,0xf078416e)
			HX_STACK_ARG(v1,"v1")
			HX_STACK_ARG(v2,"v2")
			{
				HX_STACK_LINE(103)
				int tmp23 = (int(v1) & int(v2));		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(103)
				return tmp23;
			}
			return null();
		}
		HX_END_LOCAL_FUNC2(return)

		HX_STACK_LINE(103)
		this->assignOp(HX_HCSTRING("&=","\x57","\x21","\x00","\x00"), Dynamic(new _Function_1_26()));

		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_27)
		int __ArgCount() const { return 2; }
		int run(int v1,int v2){
			HX_STACK_FRAME("*","_Function_1_27",0x6ecea3ff,"*._Function_1_27","hscript/Interp.hx",104,0xf078416e)
			HX_STACK_ARG(v1,"v1")
			HX_STACK_ARG(v2,"v2")
			{
				HX_STACK_LINE(104)
				int tmp23 = (int(v1) | int(v2));		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(104)
				return tmp23;
			}
			return null();
		}
		HX_END_LOCAL_FUNC2(return)

		HX_STACK_LINE(104)
		this->assignOp(HX_HCSTRING("|=","\x41","\x6c","\x00","\x00"), Dynamic(new _Function_1_27()));

		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_28)
		int __ArgCount() const { return 2; }
		int run(int v1,int v2){
			HX_STACK_FRAME("*","_Function_1_28",0x6ecea400,"*._Function_1_28","hscript/Interp.hx",105,0xf078416e)
			HX_STACK_ARG(v1,"v1")
			HX_STACK_ARG(v2,"v2")
			{
				HX_STACK_LINE(105)
				int tmp23 = (int(v1) ^ int(v2));		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(105)
				return tmp23;
			}
			return null();
		}
		HX_END_LOCAL_FUNC2(return)

		HX_STACK_LINE(105)
		this->assignOp(HX_HCSTRING("^=","\x1f","\x52","\x00","\x00"), Dynamic(new _Function_1_28()));

		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_29)
		int __ArgCount() const { return 2; }
		int run(int v1,int v2){
			HX_STACK_FRAME("*","_Function_1_29",0x6ecea401,"*._Function_1_29","hscript/Interp.hx",106,0xf078416e)
			HX_STACK_ARG(v1,"v1")
			HX_STACK_ARG(v2,"v2")
			{
				HX_STACK_LINE(106)
				int tmp23 = (int(v1) << int(v2));		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(106)
				return tmp23;
			}
			return null();
		}
		HX_END_LOCAL_FUNC2(return)

		HX_STACK_LINE(106)
		this->assignOp(HX_HCSTRING("<<=","\xbd","\xbb","\x2d","\x00"), Dynamic(new _Function_1_29()));

		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_30)
		int __ArgCount() const { return 2; }
		int run(int v1,int v2){
			HX_STACK_FRAME("*","_Function_1_30",0x6ecea4d7,"*._Function_1_30","hscript/Interp.hx",107,0xf078416e)
			HX_STACK_ARG(v1,"v1")
			HX_STACK_ARG(v2,"v2")
			{
				HX_STACK_LINE(107)
				int tmp23 = (int(v1) >> int(v2));		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(107)
				return tmp23;
			}
			return null();
		}
		HX_END_LOCAL_FUNC2(return)

		HX_STACK_LINE(107)
		this->assignOp(HX_HCSTRING(">>=","\xfd","\x41","\x2f","\x00"), Dynamic(new _Function_1_30()));

		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_31)
		int __ArgCount() const { return 2; }
		int run(int v1,int v2){
			HX_STACK_FRAME("*","_Function_1_31",0x6ecea4d8,"*._Function_1_31","hscript/Interp.hx",108,0xf078416e)
			HX_STACK_ARG(v1,"v1")
			HX_STACK_ARG(v2,"v2")
			{
				HX_STACK_LINE(108)
				int tmp23 = hx::UShr(v1,v2);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(108)
				return tmp23;
			}
			return null();
		}
		HX_END_LOCAL_FUNC2(return)

		HX_STACK_LINE(108)
		this->assignOp(HX_HCSTRING(">>>=","\x7f","\x7c","\x2a","\x29"), Dynamic(new _Function_1_31()));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Interp_obj,initOps,(void))

Dynamic Interp_obj::assign( Dynamic e1,Dynamic e2){
	HX_STACK_FRAME("hscript.Interp","assign",0xca66602e,"hscript.Interp.assign","hscript/Interp.hx",111,0xf078416e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(e1,"e1")
	HX_STACK_ARG(e2,"e2")
	HX_STACK_LINE(112)
	Dynamic tmp = e2;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(112)
	Dynamic tmp1 = this->expr(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(112)
	Dynamic v = tmp1;		HX_STACK_VAR(v,"v");
	HX_STACK_LINE(113)
	{
		HX_STACK_LINE(113)
		::hscript::ExprDef _g = e1->__Field(HX_HCSTRING("e","\x65","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(113)
		switch( (int)(_g->__Index())){
			case (int)1: {
				HX_STACK_LINE(113)
				::String tmp2 = (::hscript::ExprDef(_g))->__Param(0);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(113)
				::String id = tmp2;		HX_STACK_VAR(id,"id");
				HX_STACK_LINE(114)
				{
					HX_STACK_LINE(115)
					::haxe::ds::StringMap tmp3 = this->locals;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(115)
					::String tmp4 = id;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(115)
					Dynamic tmp5 = tmp3->get(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(115)
					Dynamic l = tmp5;		HX_STACK_VAR(l,"l");
					HX_STACK_LINE(116)
					bool tmp6 = (l == null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(116)
					if ((tmp6)){
						HX_STACK_LINE(117)
						::haxe::ds::StringMap tmp7 = this->variables;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(117)
						::String tmp8 = id;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(117)
						Dynamic tmp9 = v;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(117)
						tmp7->set(tmp8,tmp9);
					}
					else{
						HX_STACK_LINE(119)
						l->__FieldRef(HX_HCSTRING("r","\x72","\x00","\x00","\x00")) = v;
					}
				}
			}
			;break;
			case (int)5: {
				HX_STACK_LINE(113)
				::String tmp2 = (::hscript::ExprDef(_g))->__Param(1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(113)
				::String f = tmp2;		HX_STACK_VAR(f,"f");
				HX_STACK_LINE(113)
				Dynamic tmp3 = (::hscript::ExprDef(_g))->__Param(0);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(113)
				Dynamic e = tmp3;		HX_STACK_VAR(e,"e");
				HX_STACK_LINE(120)
				{
					HX_STACK_LINE(121)
					Dynamic tmp4 = e;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(121)
					Dynamic tmp5 = this->expr(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(121)
					::String tmp6 = f;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(121)
					Dynamic tmp7 = v;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(121)
					Dynamic tmp8 = this->set(tmp5,tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(121)
					v = tmp8;
				}
			}
			;break;
			case (int)16: {
				HX_STACK_LINE(113)
				Dynamic tmp2 = (::hscript::ExprDef(_g))->__Param(1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(113)
				Dynamic index = tmp2;		HX_STACK_VAR(index,"index");
				HX_STACK_LINE(113)
				Dynamic tmp3 = (::hscript::ExprDef(_g))->__Param(0);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(113)
				Dynamic e = tmp3;		HX_STACK_VAR(e,"e");
				HX_STACK_LINE(122)
				{
					HX_STACK_LINE(123)
					Dynamic tmp4 = e;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(123)
					Dynamic tmp5 = this->expr(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(123)
					Dynamic tmp6 = index;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(123)
					Dynamic tmp7 = this->expr(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(123)
					Dynamic tmp8 = v;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(123)
					hx::IndexRef((tmp5).mPtr,tmp7) = tmp8;
				}
			}
			;break;
			default: {
				HX_STACK_LINE(125)
				::hscript::ErrorDef tmp2 = ::hscript::ErrorDef_obj::EInvalidOp(HX_HCSTRING("=","\x3d","\x00","\x00","\x00"));		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(125)
				::hscript::ErrorDef e = tmp2;		HX_STACK_VAR(e,"e");
				HX_STACK_LINE(125)
				::hscript::ErrorDef tmp3 = e;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(125)
				Dynamic tmp4 = this->curExpr;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(125)
				int tmp5 = tmp4->__Field(HX_HCSTRING("pmin","\x22","\xf7","\x5a","\x4a"), hx::paccDynamic );		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(125)
				Dynamic tmp6 = this->curExpr;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(125)
				int tmp7 = tmp6->__Field(HX_HCSTRING("pmax","\x34","\xf0","\x5a","\x4a"), hx::paccDynamic );		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(125)
				::hscript::Error tmp8 = ::hscript::Error_obj::__new(tmp3,tmp5,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(125)
				HX_STACK_DO_THROW(tmp8);
				HX_STACK_LINE(125)
				Dynamic();
			}
		}
	}
	HX_STACK_LINE(127)
	Dynamic tmp2 = v;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(127)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC2(Interp_obj,assign,return )

Void Interp_obj::assignOp( ::String op,Dynamic fop){
{
		HX_STACK_FRAME("hscript.Interp","assignOp",0xf8e18cef,"hscript.Interp.assignOp","hscript/Interp.hx",130,0xf078416e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(op,"op")
		HX_STACK_ARG(fop,"fop")
		HX_STACK_LINE(131)
		::hscript::Interp me = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(me,"me");
		HX_STACK_LINE(132)
		::haxe::ds::StringMap tmp = this->binops;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(132)
		::String tmp1 = op;		HX_STACK_VAR(tmp1,"tmp1");

		HX_BEGIN_LOCAL_FUNC_S3(hx::LocalFunc,_Function_1_1,Dynamic,fop,::hscript::Interp,me,::String,op)
		int __ArgCount() const { return 2; }
		Dynamic run(Dynamic e1,Dynamic e2){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","hscript/Interp.hx",132,0xf078416e)
			HX_STACK_ARG(e1,"e1")
			HX_STACK_ARG(e2,"e2")
			{
				HX_STACK_LINE(132)
				::String tmp2 = op;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(132)
				Dynamic tmp3 = fop;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(132)
				Dynamic tmp4 = e1;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(132)
				Dynamic tmp5 = e2;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(132)
				Dynamic tmp6 = me->evalAssignOp(tmp2,tmp3,tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(132)
				return tmp6;
			}
			return null();
		}
		HX_END_LOCAL_FUNC2(return)

		HX_STACK_LINE(132)
		tmp->set(tmp1, Dynamic(new _Function_1_1(fop,me,op)));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Interp_obj,assignOp,(void))

Dynamic Interp_obj::evalAssignOp( ::String op,Dynamic fop,Dynamic e1,Dynamic e2){
	HX_STACK_FRAME("hscript.Interp","evalAssignOp",0xa46efc2b,"hscript.Interp.evalAssignOp","hscript/Interp.hx",135,0xf078416e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(op,"op")
	HX_STACK_ARG(fop,"fop")
	HX_STACK_ARG(e1,"e1")
	HX_STACK_ARG(e2,"e2")
	HX_STACK_LINE(136)
	Dynamic v;		HX_STACK_VAR(v,"v");
	HX_STACK_LINE(137)
	{
		HX_STACK_LINE(137)
		::hscript::ExprDef _g = e1->__Field(HX_HCSTRING("e","\x65","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(137)
		switch( (int)(_g->__Index())){
			case (int)1: {
				HX_STACK_LINE(137)
				::String tmp = (::hscript::ExprDef(_g))->__Param(0);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(137)
				::String id = tmp;		HX_STACK_VAR(id,"id");
				HX_STACK_LINE(138)
				{
					HX_STACK_LINE(139)
					::haxe::ds::StringMap tmp1 = this->locals;		HX_STACK_VAR(tmp1,"tmp1");
					HX_STACK_LINE(139)
					::String tmp2 = id;		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(139)
					Dynamic tmp3 = tmp1->get(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(139)
					Dynamic l = tmp3;		HX_STACK_VAR(l,"l");
					HX_STACK_LINE(140)
					Dynamic tmp4 = e1;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(140)
					Dynamic tmp5 = this->expr(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(140)
					Dynamic tmp6 = e2;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(140)
					Dynamic tmp7 = this->expr(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(140)
					Dynamic tmp8 = fop(tmp5,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(140)
					v = tmp8;
					HX_STACK_LINE(141)
					bool tmp9 = (l == null());		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(141)
					if ((tmp9)){
						HX_STACK_LINE(142)
						::haxe::ds::StringMap tmp10 = this->variables;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(142)
						::String tmp11 = id;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(142)
						Dynamic tmp12 = v;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(142)
						tmp10->set(tmp11,tmp12);
					}
					else{
						HX_STACK_LINE(144)
						l->__FieldRef(HX_HCSTRING("r","\x72","\x00","\x00","\x00")) = v;
					}
				}
			}
			;break;
			case (int)5: {
				HX_STACK_LINE(137)
				::String tmp = (::hscript::ExprDef(_g))->__Param(1);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(137)
				::String f = tmp;		HX_STACK_VAR(f,"f");
				HX_STACK_LINE(137)
				Dynamic tmp1 = (::hscript::ExprDef(_g))->__Param(0);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(137)
				Dynamic e = tmp1;		HX_STACK_VAR(e,"e");
				HX_STACK_LINE(145)
				{
					HX_STACK_LINE(146)
					Dynamic tmp2 = e;		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(146)
					Dynamic tmp3 = this->expr(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(146)
					Dynamic obj = tmp3;		HX_STACK_VAR(obj,"obj");
					HX_STACK_LINE(147)
					Dynamic tmp4 = obj;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(147)
					::String tmp5 = f;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(147)
					Dynamic tmp6 = this->get(tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(147)
					Dynamic tmp7 = e2;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(147)
					Dynamic tmp8 = this->expr(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(147)
					Dynamic tmp9 = fop(tmp6,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(147)
					v = tmp9;
					HX_STACK_LINE(148)
					Dynamic tmp10 = obj;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(148)
					::String tmp11 = f;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(148)
					Dynamic tmp12 = v;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(148)
					Dynamic tmp13 = this->set(tmp10,tmp11,tmp12);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(148)
					v = tmp13;
				}
			}
			;break;
			case (int)16: {
				HX_STACK_LINE(137)
				Dynamic tmp = (::hscript::ExprDef(_g))->__Param(1);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(137)
				Dynamic index = tmp;		HX_STACK_VAR(index,"index");
				HX_STACK_LINE(137)
				Dynamic tmp1 = (::hscript::ExprDef(_g))->__Param(0);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(137)
				Dynamic e = tmp1;		HX_STACK_VAR(e,"e");
				HX_STACK_LINE(149)
				{
					HX_STACK_LINE(150)
					Dynamic tmp2 = e;		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(150)
					Dynamic tmp3 = this->expr(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(150)
					cpp::ArrayBase arr = tmp3;		HX_STACK_VAR(arr,"arr");
					HX_STACK_LINE(151)
					Dynamic tmp4 = index;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(151)
					Dynamic tmp5 = this->expr(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(151)
					int index1 = tmp5;		HX_STACK_VAR(index1,"index1");
					HX_STACK_LINE(152)
					Dynamic tmp6 = arr->__GetItem(index1);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(152)
					Dynamic tmp7 = e2;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(152)
					Dynamic tmp8 = this->expr(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(152)
					Dynamic tmp9 = fop(tmp6,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(152)
					v = tmp9;
					HX_STACK_LINE(153)
					Dynamic tmp10 = v;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(153)
					hx::IndexRef((arr).mPtr,index1) = tmp10;
				}
			}
			;break;
			default: {
				HX_STACK_LINE(155)
				Dynamic tmp;		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(155)
				{
					HX_STACK_LINE(155)
					::String tmp1 = op;		HX_STACK_VAR(tmp1,"tmp1");
					HX_STACK_LINE(155)
					::hscript::ErrorDef tmp2 = ::hscript::ErrorDef_obj::EInvalidOp(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(155)
					::hscript::ErrorDef e = tmp2;		HX_STACK_VAR(e,"e");
					HX_STACK_LINE(155)
					::hscript::ErrorDef tmp3 = e;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(155)
					Dynamic tmp4 = this->curExpr;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(155)
					int tmp5 = tmp4->__Field(HX_HCSTRING("pmin","\x22","\xf7","\x5a","\x4a"), hx::paccDynamic );		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(155)
					Dynamic tmp6 = this->curExpr;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(155)
					int tmp7 = tmp6->__Field(HX_HCSTRING("pmax","\x34","\xf0","\x5a","\x4a"), hx::paccDynamic );		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(155)
					::hscript::Error tmp8 = ::hscript::Error_obj::__new(tmp3,tmp5,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(155)
					HX_STACK_DO_THROW(tmp8);
					HX_STACK_LINE(155)
					tmp = null();
				}
				HX_STACK_LINE(155)
				return tmp;
			}
		}
	}
	HX_STACK_LINE(157)
	Dynamic tmp = v;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(157)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC4(Interp_obj,evalAssignOp,return )

Dynamic Interp_obj::increment( Dynamic e,bool prefix,int delta){
	HX_STACK_FRAME("hscript.Interp","increment",0x1e81f590,"hscript.Interp.increment","hscript/Interp.hx",160,0xf078416e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(e,"e")
	HX_STACK_ARG(prefix,"prefix")
	HX_STACK_ARG(delta,"delta")
	HX_STACK_LINE(162)
	this->curExpr = e;
	HX_STACK_LINE(163)
	::hscript::ExprDef e1 = e->__Field(HX_HCSTRING("e","\x65","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(e1,"e1");
	HX_STACK_LINE(165)
	switch( (int)(e1->__Index())){
		case (int)1: {
			HX_STACK_LINE(165)
			::String tmp = (::hscript::ExprDef(e1))->__Param(0);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(165)
			::String id = tmp;		HX_STACK_VAR(id,"id");
			HX_STACK_LINE(166)
			{
				HX_STACK_LINE(167)
				::haxe::ds::StringMap tmp1 = this->locals;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(167)
				::String tmp2 = id;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(167)
				Dynamic tmp3 = tmp1->get(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(167)
				Dynamic l = tmp3;		HX_STACK_VAR(l,"l");
				HX_STACK_LINE(168)
				bool tmp4 = (l == null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(168)
				Dynamic tmp5;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(168)
				if ((tmp4)){
					HX_STACK_LINE(168)
					::haxe::ds::StringMap tmp6 = this->variables;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(168)
					::String tmp7 = id;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(168)
					Dynamic tmp8 = tmp6->get(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(168)
					tmp5 = tmp8;
				}
				else{
					HX_STACK_LINE(168)
					tmp5 = l->__Field(HX_HCSTRING("r","\x72","\x00","\x00","\x00"), hx::paccDynamic );
				}
				HX_STACK_LINE(168)
				Dynamic v = tmp5;		HX_STACK_VAR(v,"v");
				HX_STACK_LINE(169)
				bool tmp6 = prefix;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(169)
				if ((tmp6)){
					HX_STACK_LINE(170)
					hx::AddEq(v,delta);
					HX_STACK_LINE(171)
					bool tmp7 = (l == null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(171)
					if ((tmp7)){
						HX_STACK_LINE(171)
						Dynamic value = v;		HX_STACK_VAR(value,"value");
						HX_STACK_LINE(171)
						::haxe::ds::StringMap tmp8 = this->variables;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(171)
						::String tmp9 = id;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(171)
						Dynamic tmp10 = value;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(171)
						tmp8->set(tmp9,tmp10);
					}
					else{
						HX_STACK_LINE(171)
						l->__FieldRef(HX_HCSTRING("r","\x72","\x00","\x00","\x00")) = v;
					}
				}
				else{
					HX_STACK_LINE(173)
					bool tmp7 = (l == null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(173)
					if ((tmp7)){
						HX_STACK_LINE(173)
						Dynamic tmp8 = (v + delta);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(173)
						Dynamic value = tmp8;		HX_STACK_VAR(value,"value");
						HX_STACK_LINE(173)
						::haxe::ds::StringMap tmp9 = this->variables;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(173)
						::String tmp10 = id;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(173)
						Dynamic tmp11 = value;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(173)
						tmp9->set(tmp10,tmp11);
					}
					else{
						HX_STACK_LINE(173)
						Dynamic tmp8 = (v + delta);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(173)
						l->__FieldRef(HX_HCSTRING("r","\x72","\x00","\x00","\x00")) = tmp8;
					}
				}
				HX_STACK_LINE(174)
				Dynamic tmp7 = v;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(174)
				return tmp7;
			}
		}
		;break;
		case (int)5: {
			HX_STACK_LINE(165)
			::String tmp = (::hscript::ExprDef(e1))->__Param(1);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(165)
			::String f = tmp;		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(165)
			Dynamic tmp1 = (::hscript::ExprDef(e1))->__Param(0);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(165)
			Dynamic e2 = tmp1;		HX_STACK_VAR(e2,"e2");
			HX_STACK_LINE(175)
			{
				HX_STACK_LINE(176)
				Dynamic tmp2 = e2;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(176)
				Dynamic tmp3 = this->expr(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(176)
				Dynamic obj = tmp3;		HX_STACK_VAR(obj,"obj");
				HX_STACK_LINE(177)
				Dynamic tmp4 = obj;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(177)
				::String tmp5 = f;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(177)
				Dynamic tmp6 = this->get(tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(177)
				Dynamic v = tmp6;		HX_STACK_VAR(v,"v");
				HX_STACK_LINE(178)
				bool tmp7 = prefix;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(178)
				if ((tmp7)){
					HX_STACK_LINE(179)
					hx::AddEq(v,delta);
					HX_STACK_LINE(180)
					Dynamic tmp8 = obj;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(180)
					::String tmp9 = f;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(180)
					Dynamic tmp10 = v;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(180)
					this->set(tmp8,tmp9,tmp10);
				}
				else{
					HX_STACK_LINE(182)
					Dynamic tmp8 = obj;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(182)
					::String tmp9 = f;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(182)
					Dynamic tmp10 = (v + delta);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(182)
					this->set(tmp8,tmp9,tmp10);
				}
				HX_STACK_LINE(183)
				Dynamic tmp8 = v;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(183)
				return tmp8;
			}
		}
		;break;
		case (int)16: {
			HX_STACK_LINE(165)
			Dynamic tmp = (::hscript::ExprDef(e1))->__Param(1);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(165)
			Dynamic index = tmp;		HX_STACK_VAR(index,"index");
			HX_STACK_LINE(165)
			Dynamic tmp1 = (::hscript::ExprDef(e1))->__Param(0);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(165)
			Dynamic e2 = tmp1;		HX_STACK_VAR(e2,"e2");
			HX_STACK_LINE(184)
			{
				HX_STACK_LINE(185)
				Dynamic tmp2 = e2;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(185)
				Dynamic tmp3 = this->expr(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(185)
				Array< int > arr = tmp3;		HX_STACK_VAR(arr,"arr");
				HX_STACK_LINE(186)
				Dynamic tmp4 = index;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(186)
				Dynamic tmp5 = this->expr(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(186)
				int index1 = tmp5;		HX_STACK_VAR(index1,"index1");
				HX_STACK_LINE(187)
				int tmp6 = arr->__get(index1);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(187)
				int v = tmp6;		HX_STACK_VAR(v,"v");
				HX_STACK_LINE(188)
				bool tmp7 = prefix;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(188)
				if ((tmp7)){
					HX_STACK_LINE(189)
					hx::AddEq(v,delta);
					HX_STACK_LINE(190)
					int tmp8 = v;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(190)
					arr[index1] = tmp8;
				}
				else{
					HX_STACK_LINE(192)
					int tmp8 = (v + delta);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(192)
					arr[index1] = tmp8;
				}
				HX_STACK_LINE(193)
				int tmp8 = v;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(193)
				return tmp8;
			}
		}
		;break;
		default: {
			HX_STACK_LINE(195)
			Dynamic tmp;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(195)
			{
				HX_STACK_LINE(195)
				bool tmp1 = (delta > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(195)
				::String tmp2;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(195)
				if ((tmp1)){
					HX_STACK_LINE(195)
					tmp2 = HX_HCSTRING("++","\xa0","\x25","\x00","\x00");
				}
				else{
					HX_STACK_LINE(195)
					tmp2 = HX_HCSTRING("--","\x60","\x27","\x00","\x00");
				}
				HX_STACK_LINE(195)
				::hscript::ErrorDef tmp3 = ::hscript::ErrorDef_obj::EInvalidOp(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(195)
				::hscript::ErrorDef e2 = tmp3;		HX_STACK_VAR(e2,"e2");
				HX_STACK_LINE(195)
				::hscript::ErrorDef tmp4 = e2;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(195)
				Dynamic tmp5 = this->curExpr;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(195)
				int tmp6 = tmp5->__Field(HX_HCSTRING("pmin","\x22","\xf7","\x5a","\x4a"), hx::paccDynamic );		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(195)
				Dynamic tmp7 = this->curExpr;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(195)
				int tmp8 = tmp7->__Field(HX_HCSTRING("pmax","\x34","\xf0","\x5a","\x4a"), hx::paccDynamic );		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(195)
				::hscript::Error tmp9 = ::hscript::Error_obj::__new(tmp4,tmp6,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(195)
				HX_STACK_DO_THROW(tmp9);
				HX_STACK_LINE(195)
				tmp = null();
			}
			HX_STACK_LINE(195)
			return tmp;
		}
	}
	HX_STACK_LINE(165)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Interp_obj,increment,return )

Dynamic Interp_obj::execute( Dynamic expr){
	HX_STACK_FRAME("hscript.Interp","execute",0xe1c3af56,"hscript.Interp.execute","hscript/Interp.hx",199,0xf078416e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(expr,"expr")
	HX_STACK_LINE(200)
	this->depth = (int)0;
	HX_STACK_LINE(202)
	::haxe::ds::StringMap tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(202)
	{
		HX_STACK_LINE(202)
		::haxe::ds::StringMap tmp1 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(202)
		::haxe::ds::StringMap tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(202)
		tmp = tmp2;
	}
	HX_STACK_LINE(202)
	this->locals = tmp;
	HX_STACK_LINE(206)
	this->declared = Dynamic( Array_obj<Dynamic>::__new() );
	HX_STACK_LINE(207)
	Dynamic tmp1 = expr;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(207)
	Dynamic tmp2 = this->exprReturn(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(207)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Interp_obj,execute,return )

Dynamic Interp_obj::exprReturn( Dynamic e){
	HX_STACK_FRAME("hscript.Interp","exprReturn",0x8cfbf144,"hscript.Interp.exprReturn","hscript/Interp.hx",210,0xf078416e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(e,"e")
	HX_STACK_LINE(211)
	try
	{
	HX_STACK_CATCHABLE(::hscript::_Interp::Stop, 0);
	{
		HX_STACK_LINE(212)
		Dynamic tmp = e;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(212)
		Dynamic tmp1 = this->expr(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(212)
		return tmp1;
	}
	}
	catch(Dynamic __e){
		if (__e.IsClass< ::hscript::_Interp::Stop >() ){
			HX_STACK_BEGIN_CATCH
			::hscript::_Interp::Stop e1 = __e;{
				HX_STACK_LINE(214)
				switch( (int)(e1->__Index())){
					case (int)0: {
						HX_STACK_LINE(215)
						HX_STACK_DO_THROW(HX_HCSTRING("Invalid break","\xb6","\xee","\x24","\x9d"));
					}
					;break;
					case (int)1: {
						HX_STACK_LINE(216)
						HX_STACK_DO_THROW(HX_HCSTRING("Invalid continue","\xd0","\x6a","\xb7","\x3f"));
					}
					;break;
					case (int)2: {
						HX_STACK_LINE(214)
						Dynamic tmp = (::hscript::_Interp::Stop(e1))->__Param(0);		HX_STACK_VAR(tmp,"tmp");
						HX_STACK_LINE(214)
						Dynamic v = tmp;		HX_STACK_VAR(v,"v");
						HX_STACK_LINE(217)
						{
							HX_STACK_LINE(217)
							Dynamic tmp1 = v;		HX_STACK_VAR(tmp1,"tmp1");
							HX_STACK_LINE(217)
							return tmp1;
						}
					}
					;break;
				}
			}
		}
		else {
		    HX_STACK_DO_THROW(__e);
		}
	}
	HX_STACK_LINE(220)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Interp_obj,exprReturn,return )

::haxe::ds::StringMap Interp_obj::duplicate( ::haxe::ds::StringMap h){
	HX_STACK_FRAME("hscript.Interp","duplicate",0x8d9a10ec,"hscript.Interp.duplicate","hscript/Interp.hx",223,0xf078416e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(h,"h")
	HX_STACK_LINE(225)
	::haxe::ds::StringMap tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(225)
	{
		HX_STACK_LINE(225)
		::haxe::ds::StringMap tmp1 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(225)
		::haxe::ds::StringMap tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(225)
		tmp = tmp2;
	}
	HX_STACK_LINE(225)
	::haxe::ds::StringMap h2 = tmp;		HX_STACK_VAR(h2,"h2");
	HX_STACK_LINE(229)
	Dynamic tmp1 = h->keys();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(229)
	for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(tmp1);  __it->hasNext(); ){
		::String k = __it->next();
		{
			HX_STACK_LINE(230)
			::String tmp2 = k;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(230)
			Dynamic tmp3 = h->get(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(230)
			Dynamic value = tmp3;		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(230)
			::String tmp4 = k;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(230)
			Dynamic tmp5 = value;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(230)
			h2->set(tmp4,tmp5);
		}
;
	}
	HX_STACK_LINE(231)
	::haxe::ds::StringMap tmp2 = h2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(231)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Interp_obj,duplicate,return )

Void Interp_obj::restore( int old){
{
		HX_STACK_FRAME("hscript.Interp","restore",0x80670c6f,"hscript.Interp.restore","hscript/Interp.hx",235,0xf078416e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(old,"old")
		HX_STACK_LINE(235)
		while((true)){
			HX_STACK_LINE(235)
			int tmp = this->declared->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(235)
			int tmp1 = old;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(235)
			bool tmp2 = (tmp > tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(235)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(235)
			if ((tmp3)){
				HX_STACK_LINE(235)
				break;
			}
			HX_STACK_LINE(236)
			Dynamic tmp4 = this->declared->__Field(HX_HCSTRING("pop","\x91","\x5d","\x55","\x00"), hx::paccDynamic )();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(236)
			Dynamic d = tmp4;		HX_STACK_VAR(d,"d");
			HX_STACK_LINE(237)
			::haxe::ds::StringMap tmp5 = this->locals;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(237)
			::String tmp6 = d->__Field(HX_HCSTRING("n","\x6e","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(237)
			Dynamic tmp7 = d->__Field(HX_HCSTRING("old","\xa7","\x98","\x54","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(237)
			tmp5->set(tmp6,tmp7);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Interp_obj,restore,(void))

::hscript::ExprDef Interp_obj::edef( Dynamic e){
	HX_STACK_FRAME("hscript.Interp","edef",0xec5412bf,"hscript.Interp.edef","hscript/Interp.hx",241,0xf078416e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(e,"e")
	HX_STACK_LINE(243)
	::hscript::ExprDef tmp = e->__Field(HX_HCSTRING("e","\x65","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(243)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Interp_obj,edef,return )

Dynamic Interp_obj::error( ::hscript::ErrorDef e){
	HX_STACK_FRAME("hscript.Interp","error",0xe68736a9,"hscript.Interp.error","hscript/Interp.hx",249,0xf078416e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(e,"e")
	HX_STACK_LINE(251)
	::hscript::ErrorDef tmp = e;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(251)
	Dynamic tmp1 = this->curExpr;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(251)
	int tmp2 = tmp1->__Field(HX_HCSTRING("pmin","\x22","\xf7","\x5a","\x4a"), hx::paccDynamic );		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(251)
	Dynamic tmp3 = this->curExpr;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(251)
	int tmp4 = tmp3->__Field(HX_HCSTRING("pmax","\x34","\xf0","\x5a","\x4a"), hx::paccDynamic );		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(251)
	::hscript::Error tmp5 = ::hscript::Error_obj::__new(tmp,tmp2,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(251)
	HX_STACK_DO_THROW(tmp5);
	HX_STACK_LINE(255)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Interp_obj,error,return )

Dynamic Interp_obj::resolve( ::String id){
	HX_STACK_FRAME("hscript.Interp","resolve",0x7d16b80d,"hscript.Interp.resolve","hscript/Interp.hx",258,0xf078416e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(259)
	::haxe::ds::StringMap tmp = this->locals;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(259)
	::String tmp1 = id;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(259)
	Dynamic tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(259)
	Dynamic l = tmp2;		HX_STACK_VAR(l,"l");
	HX_STACK_LINE(260)
	bool tmp3 = (l != null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(260)
	if ((tmp3)){
		HX_STACK_LINE(261)
		Dynamic tmp4 = l->__Field(HX_HCSTRING("r","\x72","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(261)
		return tmp4;
	}
	HX_STACK_LINE(262)
	::haxe::ds::StringMap tmp4 = this->variables;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(262)
	::String tmp5 = id;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(262)
	Dynamic tmp6 = tmp4->get(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(262)
	Dynamic v = tmp6;		HX_STACK_VAR(v,"v");
	HX_STACK_LINE(263)
	bool tmp7 = (v == null());		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(263)
	bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(263)
	if ((tmp7)){
		HX_STACK_LINE(263)
		::haxe::ds::StringMap tmp9 = this->variables;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(263)
		::haxe::ds::StringMap tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(263)
		::String tmp11 = id;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(263)
		::String tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(263)
		bool tmp13 = tmp10->exists(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(263)
		bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(263)
		bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(263)
		tmp8 = !(tmp15);
	}
	else{
		HX_STACK_LINE(263)
		tmp8 = false;
	}
	HX_STACK_LINE(263)
	if ((tmp8)){
		HX_STACK_LINE(264)
		::String tmp9 = id;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(264)
		::hscript::ErrorDef tmp10 = ::hscript::ErrorDef_obj::EUnknownVariable(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(264)
		::hscript::ErrorDef e = tmp10;		HX_STACK_VAR(e,"e");
		HX_STACK_LINE(264)
		::hscript::ErrorDef tmp11 = e;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(264)
		Dynamic tmp12 = this->curExpr;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(264)
		int tmp13 = tmp12->__Field(HX_HCSTRING("pmin","\x22","\xf7","\x5a","\x4a"), hx::paccDynamic );		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(264)
		Dynamic tmp14 = this->curExpr;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(264)
		int tmp15 = tmp14->__Field(HX_HCSTRING("pmax","\x34","\xf0","\x5a","\x4a"), hx::paccDynamic );		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(264)
		::hscript::Error tmp16 = ::hscript::Error_obj::__new(tmp11,tmp13,tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(264)
		HX_STACK_DO_THROW(tmp16);
		HX_STACK_LINE(264)
		Dynamic();
	}
	HX_STACK_LINE(265)
	Dynamic tmp9 = v;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(265)
	return tmp9;
}


HX_DEFINE_DYNAMIC_FUNC1(Interp_obj,resolve,return )

Dynamic Interp_obj::expr( Dynamic e){
	HX_STACK_FRAME("hscript.Interp","expr",0xec634974,"hscript.Interp.expr","hscript/Interp.hx",268,0xf078416e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(e,"e")
	HX_STACK_LINE(268)
	::hscript::Interp _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(270)
	this->curExpr = e;
	HX_STACK_LINE(271)
	::hscript::ExprDef e1 = e->__Field(HX_HCSTRING("e","\x65","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(e1,"e1");
	HX_STACK_LINE(273)
	switch( (int)(e1->__Index())){
		case (int)0: {
			HX_STACK_LINE(273)
			::hscript::Const tmp = (::hscript::ExprDef(e1))->__Param(0);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(273)
			::hscript::Const c = tmp;		HX_STACK_VAR(c,"c");
			HX_STACK_LINE(275)
			switch( (int)(c->__Index())){
				case (int)0: {
					HX_STACK_LINE(275)
					int tmp1 = (::hscript::Const(c))->__Param(0);		HX_STACK_VAR(tmp1,"tmp1");
					HX_STACK_LINE(275)
					int v = tmp1;		HX_STACK_VAR(v,"v");
					HX_STACK_LINE(276)
					{
						HX_STACK_LINE(276)
						int tmp2 = v;		HX_STACK_VAR(tmp2,"tmp2");
						HX_STACK_LINE(276)
						return tmp2;
					}
				}
				;break;
				case (int)1: {
					HX_STACK_LINE(275)
					Float tmp1 = (::hscript::Const(c))->__Param(0);		HX_STACK_VAR(tmp1,"tmp1");
					HX_STACK_LINE(275)
					Float f = tmp1;		HX_STACK_VAR(f,"f");
					HX_STACK_LINE(277)
					{
						HX_STACK_LINE(277)
						Float tmp2 = f;		HX_STACK_VAR(tmp2,"tmp2");
						HX_STACK_LINE(277)
						return tmp2;
					}
				}
				;break;
				case (int)2: {
					HX_STACK_LINE(275)
					::String tmp1 = (::hscript::Const(c))->__Param(0);		HX_STACK_VAR(tmp1,"tmp1");
					HX_STACK_LINE(275)
					::String s = tmp1;		HX_STACK_VAR(s,"s");
					HX_STACK_LINE(278)
					{
						HX_STACK_LINE(278)
						::String tmp2 = s;		HX_STACK_VAR(tmp2,"tmp2");
						HX_STACK_LINE(278)
						return tmp2;
					}
				}
				;break;
			}
		}
		;break;
		case (int)1: {
			HX_STACK_LINE(273)
			::String tmp = (::hscript::ExprDef(e1))->__Param(0);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(273)
			::String id = tmp;		HX_STACK_VAR(id,"id");
			HX_STACK_LINE(283)
			{
				HX_STACK_LINE(284)
				::String tmp1 = id;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(284)
				Dynamic tmp2 = this->resolve(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(284)
				return tmp2;
			}
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(273)
			Dynamic tmp = (::hscript::ExprDef(e1))->__Param(2);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(273)
			Dynamic e2 = tmp;		HX_STACK_VAR(e2,"e2");
			HX_STACK_LINE(273)
			::String tmp1 = (::hscript::ExprDef(e1))->__Param(0);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(273)
			::String n = tmp1;		HX_STACK_VAR(n,"n");
			HX_STACK_LINE(285)
			{
				HX_STACK_LINE(286)
				::String tmp2 = n;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(286)
				::haxe::ds::StringMap tmp3 = this->locals;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(286)
				::String tmp4 = n;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(286)
				Dynamic tmp5 = tmp3->get(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(286)
				Dynamic tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
				struct _Function_3_1{
					inline static Dynamic Block( Dynamic &tmp6,::String &tmp2){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","hscript/Interp.hx",286,0xf078416e)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_HCSTRING("n","\x6e","\x00","\x00","\x00") , tmp2,false);
							__result->Add(HX_HCSTRING("old","\xa7","\x98","\x54","\x00") , tmp6,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(286)
				Dynamic tmp7 = _Function_3_1::Block(tmp6,tmp2);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(286)
				this->declared->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp7);
				HX_STACK_LINE(287)
				{
					HX_STACK_LINE(287)
					bool tmp8 = (e2 == null());		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(287)
					Dynamic tmp9;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(287)
					if ((tmp8)){
						HX_STACK_LINE(287)
						tmp9 = null();
					}
					else{
						HX_STACK_LINE(287)
						Dynamic tmp10 = e2;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(287)
						tmp9 = this->expr(tmp10);
					}
					struct _Function_4_1{
						inline static Dynamic Block( Dynamic &tmp9){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","hscript/Interp.hx",287,0xf078416e)
							{
								hx::Anon __result = hx::Anon_obj::Create();
								__result->Add(HX_HCSTRING("r","\x72","\x00","\x00","\x00") , tmp9,false);
								return __result;
							}
							return null();
						}
					};
					HX_STACK_LINE(287)
					Dynamic tmp10 = _Function_4_1::Block(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(287)
					Dynamic value = tmp10;		HX_STACK_VAR(value,"value");
					HX_STACK_LINE(287)
					::haxe::ds::StringMap tmp11 = this->locals;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(287)
					::String tmp12 = n;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(287)
					Dynamic tmp13 = value;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(287)
					tmp11->set(tmp12,tmp13);
				}
				HX_STACK_LINE(288)
				return null();
			}
		}
		;break;
		case (int)3: {
			HX_STACK_LINE(273)
			Dynamic tmp = (::hscript::ExprDef(e1))->__Param(0);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(273)
			Dynamic e2 = tmp;		HX_STACK_VAR(e2,"e2");
			HX_STACK_LINE(289)
			{
				HX_STACK_LINE(290)
				Dynamic tmp1 = e2;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(290)
				Dynamic tmp2 = this->expr(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(290)
				return tmp2;
			}
		}
		;break;
		case (int)4: {
			HX_STACK_LINE(273)
			cpp::ArrayBase exprs = (::hscript::ExprDef(e1))->__Param(0);		HX_STACK_VAR(exprs,"exprs");
			HX_STACK_LINE(291)
			{
				HX_STACK_LINE(292)
				int tmp = this->declared->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(292)
				int old = tmp;		HX_STACK_VAR(old,"old");
				HX_STACK_LINE(293)
				Dynamic v = null();		HX_STACK_VAR(v,"v");
				HX_STACK_LINE(294)
				{
					HX_STACK_LINE(294)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(294)
					while((true)){
						HX_STACK_LINE(294)
						bool tmp1 = (_g1 < exprs->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp1,"tmp1");
						HX_STACK_LINE(294)
						bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
						HX_STACK_LINE(294)
						if ((tmp2)){
							HX_STACK_LINE(294)
							break;
						}
						HX_STACK_LINE(294)
						Dynamic tmp3 = exprs->__GetItem(_g1);		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(294)
						Dynamic e2 = tmp3;		HX_STACK_VAR(e2,"e2");
						HX_STACK_LINE(294)
						++(_g1);
						HX_STACK_LINE(295)
						Dynamic tmp4 = e2;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(295)
						Dynamic tmp5 = this->expr(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(295)
						v = tmp5;
					}
				}
				HX_STACK_LINE(296)
				int tmp1 = old;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(296)
				this->restore(tmp1);
				HX_STACK_LINE(297)
				Dynamic tmp2 = v;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(297)
				return tmp2;
			}
		}
		;break;
		case (int)5: {
			HX_STACK_LINE(273)
			::String tmp = (::hscript::ExprDef(e1))->__Param(1);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(273)
			::String f = tmp;		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(273)
			Dynamic tmp1 = (::hscript::ExprDef(e1))->__Param(0);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(273)
			Dynamic e2 = tmp1;		HX_STACK_VAR(e2,"e2");
			HX_STACK_LINE(298)
			{
				HX_STACK_LINE(299)
				Dynamic tmp2 = e2;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(299)
				Dynamic tmp3 = this->expr(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(299)
				::String tmp4 = f;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(299)
				Dynamic tmp5 = this->get(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(299)
				return tmp5;
			}
		}
		;break;
		case (int)6: {
			HX_STACK_LINE(273)
			Dynamic tmp = (::hscript::ExprDef(e1))->__Param(2);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(273)
			Dynamic e2 = tmp;		HX_STACK_VAR(e2,"e2");
			HX_STACK_LINE(273)
			Dynamic tmp1 = (::hscript::ExprDef(e1))->__Param(1);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(273)
			Dynamic e11 = tmp1;		HX_STACK_VAR(e11,"e11");
			HX_STACK_LINE(273)
			::String tmp2 = (::hscript::ExprDef(e1))->__Param(0);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(273)
			::String op = tmp2;		HX_STACK_VAR(op,"op");
			HX_STACK_LINE(300)
			{
				HX_STACK_LINE(301)
				::haxe::ds::StringMap tmp3 = this->binops;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(301)
				::String tmp4 = op;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(301)
				Dynamic tmp5 = tmp3->get(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(301)
				Dynamic fop = tmp5;		HX_STACK_VAR(fop,"fop");
				HX_STACK_LINE(302)
				bool tmp6 = (fop == null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(302)
				if ((tmp6)){
					HX_STACK_LINE(302)
					::String tmp7 = op;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(302)
					::hscript::ErrorDef tmp8 = ::hscript::ErrorDef_obj::EInvalidOp(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(302)
					::hscript::ErrorDef e3 = tmp8;		HX_STACK_VAR(e3,"e3");
					HX_STACK_LINE(302)
					::hscript::ErrorDef tmp9 = e3;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(302)
					Dynamic tmp10 = this->curExpr;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(302)
					int tmp11 = tmp10->__Field(HX_HCSTRING("pmin","\x22","\xf7","\x5a","\x4a"), hx::paccDynamic );		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(302)
					Dynamic tmp12 = this->curExpr;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(302)
					int tmp13 = tmp12->__Field(HX_HCSTRING("pmax","\x34","\xf0","\x5a","\x4a"), hx::paccDynamic );		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(302)
					::hscript::Error tmp14 = ::hscript::Error_obj::__new(tmp9,tmp11,tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(302)
					HX_STACK_DO_THROW(tmp14);
					HX_STACK_LINE(302)
					Dynamic();
				}
				HX_STACK_LINE(303)
				Dynamic tmp7 = e11;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(303)
				Dynamic tmp8 = e2;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(303)
				Dynamic tmp9 = fop(tmp7,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(303)
				return tmp9;
			}
		}
		;break;
		case (int)7: {
			HX_STACK_LINE(273)
			Dynamic tmp = (::hscript::ExprDef(e1))->__Param(2);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(273)
			Dynamic e2 = tmp;		HX_STACK_VAR(e2,"e2");
			HX_STACK_LINE(273)
			bool tmp1 = (::hscript::ExprDef(e1))->__Param(1);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(273)
			bool prefix = tmp1;		HX_STACK_VAR(prefix,"prefix");
			HX_STACK_LINE(273)
			::String tmp2 = (::hscript::ExprDef(e1))->__Param(0);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(273)
			::String op = tmp2;		HX_STACK_VAR(op,"op");
			HX_STACK_LINE(304)
			{
				HX_STACK_LINE(305)
				::String tmp3 = op;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(305)
				::String _switch_1 = (tmp3);
				if (  ( _switch_1==HX_HCSTRING("!","\x21","\x00","\x00","\x00"))){
					HX_STACK_LINE(307)
					Dynamic tmp4 = e2;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(307)
					Dynamic tmp5 = this->expr(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(307)
					bool tmp6 = (tmp5 != true);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(307)
					return tmp6;
				}
				else if (  ( _switch_1==HX_HCSTRING("-","\x2d","\x00","\x00","\x00"))){
					HX_STACK_LINE(309)
					Dynamic tmp4 = e2;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(309)
					Dynamic tmp5 = this->expr(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(309)
					Float tmp6 = -(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(309)
					return tmp6;
				}
				else if (  ( _switch_1==HX_HCSTRING("++","\xa0","\x25","\x00","\x00"))){
					HX_STACK_LINE(311)
					Dynamic tmp4 = e2;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(311)
					bool tmp5 = prefix;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(311)
					Dynamic tmp6 = this->increment(tmp4,tmp5,(int)1);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(311)
					return tmp6;
				}
				else if (  ( _switch_1==HX_HCSTRING("--","\x60","\x27","\x00","\x00"))){
					HX_STACK_LINE(313)
					Dynamic tmp4 = e2;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(313)
					bool tmp5 = prefix;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(313)
					Dynamic tmp6 = this->increment(tmp4,tmp5,(int)-1);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(313)
					return tmp6;
				}
				else if (  ( _switch_1==HX_HCSTRING("~","\x7e","\x00","\x00","\x00"))){
					HX_STACK_LINE(318)
					Dynamic tmp4 = e2;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(318)
					Dynamic tmp5 = this->expr(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(318)
					Float tmp6 = ~(int)(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(318)
					return tmp6;
				}
				else  {
					HX_STACK_LINE(321)
					::String tmp4 = op;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(321)
					::hscript::ErrorDef tmp5 = ::hscript::ErrorDef_obj::EInvalidOp(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(321)
					::hscript::ErrorDef e3 = tmp5;		HX_STACK_VAR(e3,"e3");
					HX_STACK_LINE(321)
					::hscript::ErrorDef tmp6 = e3;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(321)
					Dynamic tmp7 = this->curExpr;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(321)
					int tmp8 = tmp7->__Field(HX_HCSTRING("pmin","\x22","\xf7","\x5a","\x4a"), hx::paccDynamic );		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(321)
					Dynamic tmp9 = this->curExpr;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(321)
					int tmp10 = tmp9->__Field(HX_HCSTRING("pmax","\x34","\xf0","\x5a","\x4a"), hx::paccDynamic );		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(321)
					::hscript::Error tmp11 = ::hscript::Error_obj::__new(tmp6,tmp8,tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(321)
					HX_STACK_DO_THROW(tmp11);
					HX_STACK_LINE(321)
					Dynamic();
				}
;
;
			}
		}
		;break;
		case (int)8: {
			HX_STACK_LINE(273)
			cpp::ArrayBase params = (::hscript::ExprDef(e1))->__Param(1);		HX_STACK_VAR(params,"params");
			HX_STACK_LINE(273)
			Dynamic tmp = (::hscript::ExprDef(e1))->__Param(0);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(273)
			Dynamic e2 = tmp;		HX_STACK_VAR(e2,"e2");
			HX_STACK_LINE(323)
			{
				HX_STACK_LINE(324)
				cpp::ArrayBase args = Dynamic( Array_obj<Dynamic>::__new() );		HX_STACK_VAR(args,"args");
				HX_STACK_LINE(325)
				{
					HX_STACK_LINE(325)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(325)
					while((true)){
						HX_STACK_LINE(325)
						bool tmp1 = (_g1 < params->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp1,"tmp1");
						HX_STACK_LINE(325)
						bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
						HX_STACK_LINE(325)
						if ((tmp2)){
							HX_STACK_LINE(325)
							break;
						}
						HX_STACK_LINE(325)
						Dynamic tmp3 = params->__GetItem(_g1);		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(325)
						Dynamic p = tmp3;		HX_STACK_VAR(p,"p");
						HX_STACK_LINE(325)
						++(_g1);
						HX_STACK_LINE(326)
						Dynamic tmp4 = p;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(326)
						Dynamic tmp5 = this->expr(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(326)
						args->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp5);
					}
				}
				HX_STACK_LINE(328)
				{
					HX_STACK_LINE(328)
					::hscript::ExprDef _g1 = e2->__Field(HX_HCSTRING("e","\x65","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(328)
					switch( (int)(_g1->__Index())){
						case (int)5: {
							HX_STACK_LINE(328)
							::String tmp1 = (::hscript::ExprDef(_g1))->__Param(1);		HX_STACK_VAR(tmp1,"tmp1");
							HX_STACK_LINE(328)
							::String f = tmp1;		HX_STACK_VAR(f,"f");
							HX_STACK_LINE(328)
							Dynamic tmp2 = (::hscript::ExprDef(_g1))->__Param(0);		HX_STACK_VAR(tmp2,"tmp2");
							HX_STACK_LINE(328)
							Dynamic e3 = tmp2;		HX_STACK_VAR(e3,"e3");
							HX_STACK_LINE(329)
							{
								HX_STACK_LINE(330)
								Dynamic tmp3 = e3;		HX_STACK_VAR(tmp3,"tmp3");
								HX_STACK_LINE(330)
								Dynamic tmp4 = this->expr(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
								HX_STACK_LINE(330)
								Dynamic obj = tmp4;		HX_STACK_VAR(obj,"obj");
								HX_STACK_LINE(331)
								bool tmp5 = (obj == null());		HX_STACK_VAR(tmp5,"tmp5");
								HX_STACK_LINE(331)
								if ((tmp5)){
									HX_STACK_LINE(331)
									::String tmp6 = f;		HX_STACK_VAR(tmp6,"tmp6");
									HX_STACK_LINE(331)
									::hscript::ErrorDef tmp7 = ::hscript::ErrorDef_obj::EInvalidAccess(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
									HX_STACK_LINE(331)
									::hscript::ErrorDef e4 = tmp7;		HX_STACK_VAR(e4,"e4");
									HX_STACK_LINE(331)
									::hscript::ErrorDef tmp8 = e4;		HX_STACK_VAR(tmp8,"tmp8");
									HX_STACK_LINE(331)
									Dynamic tmp9 = this->curExpr;		HX_STACK_VAR(tmp9,"tmp9");
									HX_STACK_LINE(331)
									int tmp10 = tmp9->__Field(HX_HCSTRING("pmin","\x22","\xf7","\x5a","\x4a"), hx::paccDynamic );		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(331)
									Dynamic tmp11 = this->curExpr;		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(331)
									int tmp12 = tmp11->__Field(HX_HCSTRING("pmax","\x34","\xf0","\x5a","\x4a"), hx::paccDynamic );		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(331)
									::hscript::Error tmp13 = ::hscript::Error_obj::__new(tmp8,tmp10,tmp12);		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(331)
									HX_STACK_DO_THROW(tmp13);
									HX_STACK_LINE(331)
									Dynamic();
								}
								HX_STACK_LINE(332)
								Dynamic tmp6 = obj;		HX_STACK_VAR(tmp6,"tmp6");
								HX_STACK_LINE(332)
								::String tmp7 = f;		HX_STACK_VAR(tmp7,"tmp7");
								HX_STACK_LINE(332)
								Dynamic tmp8 = this->fcall(tmp6,tmp7,args);		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(332)
								return tmp8;
							}
						}
						;break;
						default: {
							HX_STACK_LINE(334)
							Dynamic tmp1 = e2;		HX_STACK_VAR(tmp1,"tmp1");
							HX_STACK_LINE(334)
							Dynamic tmp2 = this->expr(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
							HX_STACK_LINE(334)
							Dynamic tmp3 = this->call(null(),tmp2,args);		HX_STACK_VAR(tmp3,"tmp3");
							HX_STACK_LINE(334)
							return tmp3;
						}
					}
				}
			}
		}
		;break;
		case (int)9: {
			HX_STACK_LINE(273)
			Dynamic tmp = (::hscript::ExprDef(e1))->__Param(2);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(273)
			Dynamic e2 = tmp;		HX_STACK_VAR(e2,"e2");
			HX_STACK_LINE(273)
			Dynamic tmp1 = (::hscript::ExprDef(e1))->__Param(1);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(273)
			Dynamic e11 = tmp1;		HX_STACK_VAR(e11,"e11");
			HX_STACK_LINE(273)
			Dynamic tmp2 = (::hscript::ExprDef(e1))->__Param(0);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(273)
			Dynamic econd = tmp2;		HX_STACK_VAR(econd,"econd");
			HX_STACK_LINE(336)
			{
				HX_STACK_LINE(337)
				Dynamic tmp3 = econd;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(337)
				Dynamic tmp4 = this->expr(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(337)
				bool tmp5 = (tmp4 == true);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(337)
				Dynamic tmp6;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(337)
				if ((tmp5)){
					HX_STACK_LINE(337)
					Dynamic tmp7 = e11;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(337)
					tmp6 = this->expr(tmp7);
				}
				else{
					HX_STACK_LINE(337)
					bool tmp7 = (e2 == null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(337)
					if ((tmp7)){
						HX_STACK_LINE(337)
						tmp6 = null();
					}
					else{
						HX_STACK_LINE(337)
						Dynamic tmp8 = e2;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(337)
						tmp6 = this->expr(tmp8);
					}
				}
				HX_STACK_LINE(337)
				return tmp6;
			}
		}
		;break;
		case (int)10: {
			HX_STACK_LINE(273)
			Dynamic tmp = (::hscript::ExprDef(e1))->__Param(1);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(273)
			Dynamic e2 = tmp;		HX_STACK_VAR(e2,"e2");
			HX_STACK_LINE(273)
			Dynamic tmp1 = (::hscript::ExprDef(e1))->__Param(0);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(273)
			Dynamic econd = tmp1;		HX_STACK_VAR(econd,"econd");
			HX_STACK_LINE(338)
			{
				HX_STACK_LINE(339)
				Dynamic tmp2 = econd;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(339)
				Dynamic tmp3 = e2;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(339)
				this->whileLoop(tmp2,tmp3);
				HX_STACK_LINE(340)
				return null();
			}
		}
		;break;
		case (int)11: {
			HX_STACK_LINE(273)
			Dynamic tmp = (::hscript::ExprDef(e1))->__Param(2);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(273)
			Dynamic e2 = tmp;		HX_STACK_VAR(e2,"e2");
			HX_STACK_LINE(273)
			Dynamic tmp1 = (::hscript::ExprDef(e1))->__Param(1);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(273)
			Dynamic it = tmp1;		HX_STACK_VAR(it,"it");
			HX_STACK_LINE(273)
			::String tmp2 = (::hscript::ExprDef(e1))->__Param(0);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(273)
			::String v = tmp2;		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(341)
			{
				HX_STACK_LINE(342)
				::String tmp3 = v;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(342)
				Dynamic tmp4 = it;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(342)
				Dynamic tmp5 = e2;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(342)
				this->forLoop(tmp3,tmp4,tmp5);
				HX_STACK_LINE(343)
				return null();
			}
		}
		;break;
		case (int)12: {
			HX_STACK_LINE(345)
			HX_STACK_DO_THROW(::hscript::_Interp::Stop_obj::SBreak);
		}
		;break;
		case (int)13: {
			HX_STACK_LINE(347)
			HX_STACK_DO_THROW(::hscript::_Interp::Stop_obj::SContinue);
		}
		;break;
		case (int)15: {
			HX_STACK_LINE(273)
			Dynamic tmp = (::hscript::ExprDef(e1))->__Param(0);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(273)
			Dynamic e2 = tmp;		HX_STACK_VAR(e2,"e2");
			HX_STACK_LINE(348)
			{
				HX_STACK_LINE(349)
				bool tmp1 = (e2 == null());		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(349)
				Dynamic tmp2;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(349)
				if ((tmp1)){
					HX_STACK_LINE(349)
					tmp2 = null();
				}
				else{
					HX_STACK_LINE(349)
					Dynamic tmp3 = e2;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(349)
					tmp2 = this->expr(tmp3);
				}
				HX_STACK_LINE(349)
				::hscript::_Interp::Stop tmp3 = ::hscript::_Interp::Stop_obj::SReturn(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(349)
				HX_STACK_DO_THROW(tmp3);
			}
		}
		;break;
		case (int)14: {
			HX_STACK_LINE(273)
			::String tmp = (::hscript::ExprDef(e1))->__Param(2);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(273)
			::String name = tmp;		HX_STACK_VAR(name,"name");
			HX_STACK_LINE(273)
			Dynamic tmp1 = (::hscript::ExprDef(e1))->__Param(1);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(273)
			Dynamic fexpr = tmp1;		HX_STACK_VAR(fexpr,"fexpr");
			HX_STACK_LINE(273)
			cpp::ArrayBase params = (::hscript::ExprDef(e1))->__Param(0);		HX_STACK_VAR(params,"params");
			HX_STACK_LINE(350)
			{
				HX_STACK_LINE(351)
				::haxe::ds::StringMap tmp2 = this->locals;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(351)
				::haxe::ds::StringMap tmp3 = this->duplicate(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(351)
				::haxe::ds::StringMap capturedLocals = tmp3;		HX_STACK_VAR(capturedLocals,"capturedLocals");
				HX_STACK_LINE(352)
				::hscript::Interp me = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(me,"me");
				HX_STACK_LINE(353)
				bool hasOpt = false;		HX_STACK_VAR(hasOpt,"hasOpt");
				HX_STACK_LINE(353)
				int minParams = (int)0;		HX_STACK_VAR(minParams,"minParams");
				HX_STACK_LINE(354)
				{
					HX_STACK_LINE(354)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(354)
					while((true)){
						HX_STACK_LINE(354)
						bool tmp4 = (_g1 < params->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(354)
						bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(354)
						if ((tmp5)){
							HX_STACK_LINE(354)
							break;
						}
						HX_STACK_LINE(354)
						Dynamic tmp6 = params->__GetItem(_g1);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(354)
						Dynamic p = tmp6;		HX_STACK_VAR(p,"p");
						HX_STACK_LINE(354)
						++(_g1);
						HX_STACK_LINE(355)
						Dynamic tmp7 = p->__Field(HX_HCSTRING("opt","\x33","\x9c","\x54","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(355)
						if ((tmp7)){
							HX_STACK_LINE(356)
							hasOpt = true;
						}
						else{
							HX_STACK_LINE(358)
							(minParams)++;
						}
					}
				}

				HX_BEGIN_LOCAL_FUNC_S7(hx::LocalFunc,_Function_3_1,::hscript::Interp,_g,::haxe::ds::StringMap,capturedLocals,cpp::ArrayBase,params,::hscript::Interp,me,int,minParams,Dynamic,fexpr,::String,name)
				int __ArgCount() const { return 1; }
				Dynamic run(cpp::ArrayBase args){
					HX_STACK_FRAME("*","_Function_3_1",0x520271b9,"*._Function_3_1","hscript/Interp.hx",359,0xf078416e)
					HX_STACK_ARG(args,"args")
					{
						HX_STACK_LINE(360)
						bool tmp4 = (args->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ) != params->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(360)
						if ((tmp4)){
							HX_STACK_LINE(361)
							bool tmp5 = (args->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ) < minParams);		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(361)
							if ((tmp5)){
								HX_STACK_LINE(362)
								::String tmp6 = (HX_HCSTRING("Invalid number of parameters. Got ","\xcb","\x2b","\xd9","\xb1") + args->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp6,"tmp6");
								HX_STACK_LINE(362)
								::String tmp7 = (tmp6 + HX_HCSTRING(", required ","\xed","\x0c","\x66","\x93"));		HX_STACK_VAR(tmp7,"tmp7");
								HX_STACK_LINE(362)
								int tmp8 = minParams;		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(362)
								::String tmp9 = (tmp7 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(362)
								::String str = tmp9;		HX_STACK_VAR(str,"str");
								HX_STACK_LINE(363)
								bool tmp10 = (name != null());		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(363)
								if ((tmp10)){
									HX_STACK_LINE(363)
									::String tmp11 = (HX_HCSTRING(" for function '","\xf6","\x90","\xab","\xa0") + name);		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(363)
									::String tmp12 = (tmp11 + HX_HCSTRING("'","\x27","\x00","\x00","\x00"));		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(363)
									hx::AddEq(str,tmp12);
								}
								HX_STACK_LINE(364)
								::String tmp11 = str;		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(364)
								HX_STACK_DO_THROW(tmp11);
							}
							HX_STACK_LINE(367)
							cpp::ArrayBase args2 = cpp::ArrayBase_obj::__new();		HX_STACK_VAR(args2,"args2");
							HX_STACK_LINE(368)
							int tmp6 = (args->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ) - minParams);		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(368)
							int extraParams = tmp6;		HX_STACK_VAR(extraParams,"extraParams");
							HX_STACK_LINE(369)
							int pos = (int)0;		HX_STACK_VAR(pos,"pos");
							HX_STACK_LINE(370)
							{
								HX_STACK_LINE(370)
								int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
								HX_STACK_LINE(370)
								while((true)){
									HX_STACK_LINE(370)
									bool tmp7 = (_g1 < params->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp7,"tmp7");
									HX_STACK_LINE(370)
									bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
									HX_STACK_LINE(370)
									if ((tmp8)){
										HX_STACK_LINE(370)
										break;
									}
									HX_STACK_LINE(370)
									Dynamic tmp9 = params->__GetItem(_g1);		HX_STACK_VAR(tmp9,"tmp9");
									HX_STACK_LINE(370)
									Dynamic p = tmp9;		HX_STACK_VAR(p,"p");
									HX_STACK_LINE(370)
									++(_g1);
									HX_STACK_LINE(371)
									Dynamic tmp10 = p->__Field(HX_HCSTRING("opt","\x33","\x9c","\x54","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(371)
									if ((tmp10)){
										HX_STACK_LINE(372)
										bool tmp11 = (extraParams > (int)0);		HX_STACK_VAR(tmp11,"tmp11");
										HX_STACK_LINE(372)
										if ((tmp11)){
											HX_STACK_LINE(373)
											int tmp12 = (pos)++;		HX_STACK_VAR(tmp12,"tmp12");
											HX_STACK_LINE(373)
											Dynamic tmp13 = args->__GetItem(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
											HX_STACK_LINE(373)
											args2->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp13);
											HX_STACK_LINE(374)
											(extraParams)--;
										}
										else{
											HX_STACK_LINE(376)
											args2->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(null());
										}
									}
									else{
										HX_STACK_LINE(378)
										int tmp11 = (pos)++;		HX_STACK_VAR(tmp11,"tmp11");
										HX_STACK_LINE(378)
										Dynamic tmp12 = args->__GetItem(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(378)
										args2->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp12);
									}
								}
							}
							HX_STACK_LINE(379)
							args = args2;
						}
						HX_STACK_LINE(381)
						::haxe::ds::StringMap old = me->locals;		HX_STACK_VAR(old,"old");
						HX_STACK_LINE(381)
						int depth = me->depth;		HX_STACK_VAR(depth,"depth");
						HX_STACK_LINE(382)
						(me->depth)++;
						HX_STACK_LINE(383)
						::haxe::ds::StringMap tmp5 = capturedLocals;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(383)
						::haxe::ds::StringMap tmp6 = me->duplicate(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(383)
						me->locals = tmp6;
						HX_STACK_LINE(384)
						{
							HX_STACK_LINE(384)
							int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(384)
							int _g2 = params->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(384)
							while((true)){
								HX_STACK_LINE(384)
								bool tmp7 = (_g1 < _g2);		HX_STACK_VAR(tmp7,"tmp7");
								HX_STACK_LINE(384)
								bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(384)
								if ((tmp8)){
									HX_STACK_LINE(384)
									break;
								}
								HX_STACK_LINE(384)
								int tmp9 = (_g1)++;		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(384)
								int i = tmp9;		HX_STACK_VAR(i,"i");
								HX_STACK_LINE(385)
								Dynamic tmp10 = params->__GetItem(i);		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(385)
								::String tmp11 = tmp10->__Field(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"), hx::paccDynamic );		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(385)
								Dynamic tmp12 = args->__GetItem(i);		HX_STACK_VAR(tmp12,"tmp12");
								struct _Function_6_1{
									inline static Dynamic Block( Dynamic &tmp12){
										HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","hscript/Interp.hx",385,0xf078416e)
										{
											hx::Anon __result = hx::Anon_obj::Create();
											__result->Add(HX_HCSTRING("r","\x72","\x00","\x00","\x00") , tmp12,false);
											return __result;
										}
										return null();
									}
								};
								HX_STACK_LINE(385)
								Dynamic tmp13 = _Function_6_1::Block(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(385)
								me->locals->set(tmp11,tmp13);
							}
						}
						HX_STACK_LINE(386)
						Dynamic r = null();		HX_STACK_VAR(r,"r");
						HX_STACK_LINE(387)
						bool tmp7 = _g->inTry;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(387)
						if ((tmp7)){
							HX_STACK_LINE(388)
							try
							{
							HX_STACK_CATCHABLE(Dynamic, 0);
							{
								HX_STACK_LINE(389)
								Dynamic tmp8 = fexpr;		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(389)
								Dynamic tmp9 = me->exprReturn(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(389)
								r = tmp9;
							}
							}
							catch(Dynamic __e){
								{
									HX_STACK_BEGIN_CATCH
									Dynamic e2 = __e;{
										HX_STACK_LINE(391)
										me->locals = old;
										HX_STACK_LINE(392)
										me->depth = depth;
										HX_STACK_LINE(396)
										Dynamic tmp8 = e2;		HX_STACK_VAR(tmp8,"tmp8");
										HX_STACK_LINE(396)
										HX_STACK_DO_THROW(tmp8);
									}
								}
							}
						}
						else{
							HX_STACK_LINE(400)
							Dynamic tmp8 = fexpr;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(400)
							Dynamic tmp9 = me->exprReturn(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(400)
							r = tmp9;
						}
						HX_STACK_LINE(401)
						me->locals = old;
						HX_STACK_LINE(402)
						me->depth = depth;
						HX_STACK_LINE(403)
						Dynamic tmp8 = r;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(403)
						return tmp8;
					}
					return null();
				}
				HX_END_LOCAL_FUNC1(return)

				HX_STACK_LINE(359)
				Dynamic f =  Dynamic(new _Function_3_1(_g,capturedLocals,params,me,minParams,fexpr,name));		HX_STACK_VAR(f,"f");
				HX_STACK_LINE(405)
				Dynamic tmp4 = f;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(405)
				Dynamic tmp5 = ::Reflect_obj::makeVarArgs(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(405)
				Dynamic f1 = tmp5;		HX_STACK_VAR(f1,"f1");
				HX_STACK_LINE(406)
				bool tmp6 = (name != null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(406)
				if ((tmp6)){
					HX_STACK_LINE(407)
					int tmp7 = this->depth;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(407)
					bool tmp8 = (tmp7 == (int)0);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(407)
					if ((tmp8)){
						HX_STACK_LINE(409)
						::haxe::ds::StringMap tmp9 = this->variables;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(409)
						::String tmp10 = name;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(409)
						Dynamic tmp11 = f1;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(409)
						tmp9->set(tmp10,tmp11);
					}
					else{
						HX_STACK_LINE(412)
						::String tmp9 = name;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(412)
						::haxe::ds::StringMap tmp10 = this->locals;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(412)
						::String tmp11 = name;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(412)
						Dynamic tmp12 = tmp10->get(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(412)
						Dynamic tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
						struct _Function_5_1{
							inline static Dynamic Block( Dynamic &tmp13,::String &tmp9){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","hscript/Interp.hx",412,0xf078416e)
								{
									hx::Anon __result = hx::Anon_obj::Create();
									__result->Add(HX_HCSTRING("n","\x6e","\x00","\x00","\x00") , tmp9,false);
									__result->Add(HX_HCSTRING("old","\xa7","\x98","\x54","\x00") , tmp13,false);
									return __result;
								}
								return null();
							}
						};
						HX_STACK_LINE(412)
						Dynamic tmp14 = _Function_5_1::Block(tmp13,tmp9);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(412)
						this->declared->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp14);
						struct _Function_5_2{
							inline static Dynamic Block( Dynamic &f1){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","hscript/Interp.hx",413,0xf078416e)
								{
									hx::Anon __result = hx::Anon_obj::Create();
									__result->Add(HX_HCSTRING("r","\x72","\x00","\x00","\x00") , f1,false);
									return __result;
								}
								return null();
							}
						};
						HX_STACK_LINE(413)
						Dynamic tmp15 = _Function_5_2::Block(f1);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(413)
						Dynamic ref = tmp15;		HX_STACK_VAR(ref,"ref");
						HX_STACK_LINE(414)
						::haxe::ds::StringMap tmp16 = this->locals;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(414)
						::String tmp17 = name;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(414)
						Dynamic tmp18 = ref;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(414)
						tmp16->set(tmp17,tmp18);
						HX_STACK_LINE(415)
						::String tmp19 = name;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(415)
						Dynamic tmp20 = ref;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(415)
						capturedLocals->set(tmp19,tmp20);
					}
				}
				HX_STACK_LINE(418)
				Dynamic tmp7 = f1;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(418)
				return tmp7;
			}
		}
		;break;
		case (int)17: {
			HX_STACK_LINE(273)
			cpp::ArrayBase arr = (::hscript::ExprDef(e1))->__Param(0);		HX_STACK_VAR(arr,"arr");
			HX_STACK_LINE(419)
			{
				HX_STACK_LINE(420)
				cpp::ArrayBase a = Dynamic( Array_obj<Dynamic>::__new() );		HX_STACK_VAR(a,"a");
				HX_STACK_LINE(421)
				{
					HX_STACK_LINE(421)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(421)
					while((true)){
						HX_STACK_LINE(421)
						bool tmp = (_g1 < arr->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp,"tmp");
						HX_STACK_LINE(421)
						bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
						HX_STACK_LINE(421)
						if ((tmp1)){
							HX_STACK_LINE(421)
							break;
						}
						HX_STACK_LINE(421)
						Dynamic tmp2 = arr->__GetItem(_g1);		HX_STACK_VAR(tmp2,"tmp2");
						HX_STACK_LINE(421)
						Dynamic e2 = tmp2;		HX_STACK_VAR(e2,"e2");
						HX_STACK_LINE(421)
						++(_g1);
						HX_STACK_LINE(422)
						Dynamic tmp3 = e2;		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(422)
						Dynamic tmp4 = this->expr(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(422)
						a->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp4);
					}
				}
				HX_STACK_LINE(423)
				return a;
			}
		}
		;break;
		case (int)16: {
			HX_STACK_LINE(273)
			Dynamic tmp = (::hscript::ExprDef(e1))->__Param(1);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(273)
			Dynamic index = tmp;		HX_STACK_VAR(index,"index");
			HX_STACK_LINE(273)
			Dynamic tmp1 = (::hscript::ExprDef(e1))->__Param(0);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(273)
			Dynamic e2 = tmp1;		HX_STACK_VAR(e2,"e2");
			HX_STACK_LINE(424)
			{
				HX_STACK_LINE(425)
				Dynamic tmp2 = e2;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(425)
				Dynamic tmp3 = this->expr(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(425)
				Dynamic tmp4 = index;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(425)
				Dynamic tmp5 = this->expr(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(425)
				Dynamic tmp6 = tmp3->__GetItem(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(425)
				return tmp6;
			}
		}
		;break;
		case (int)18: {
			HX_STACK_LINE(273)
			cpp::ArrayBase params = (::hscript::ExprDef(e1))->__Param(1);		HX_STACK_VAR(params,"params");
			HX_STACK_LINE(273)
			::String tmp = (::hscript::ExprDef(e1))->__Param(0);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(273)
			::String cl = tmp;		HX_STACK_VAR(cl,"cl");
			HX_STACK_LINE(426)
			{
				HX_STACK_LINE(427)
				cpp::ArrayBase a = Dynamic( Array_obj<Dynamic>::__new() );		HX_STACK_VAR(a,"a");
				HX_STACK_LINE(428)
				{
					HX_STACK_LINE(428)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(428)
					while((true)){
						HX_STACK_LINE(428)
						bool tmp1 = (_g1 < params->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp1,"tmp1");
						HX_STACK_LINE(428)
						bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
						HX_STACK_LINE(428)
						if ((tmp2)){
							HX_STACK_LINE(428)
							break;
						}
						HX_STACK_LINE(428)
						Dynamic tmp3 = params->__GetItem(_g1);		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(428)
						Dynamic e2 = tmp3;		HX_STACK_VAR(e2,"e2");
						HX_STACK_LINE(428)
						++(_g1);
						HX_STACK_LINE(429)
						Dynamic tmp4 = e2;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(429)
						Dynamic tmp5 = this->expr(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(429)
						a->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp5);
					}
				}
				HX_STACK_LINE(430)
				::String tmp1 = cl;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(430)
				Dynamic tmp2 = this->cnew(tmp1,a);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(430)
				return tmp2;
			}
		}
		;break;
		case (int)19: {
			HX_STACK_LINE(273)
			Dynamic tmp = (::hscript::ExprDef(e1))->__Param(0);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(273)
			Dynamic e2 = tmp;		HX_STACK_VAR(e2,"e2");
			HX_STACK_LINE(431)
			{
				HX_STACK_LINE(432)
				Dynamic tmp1 = e2;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(432)
				Dynamic tmp2 = this->expr(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(432)
				HX_STACK_DO_THROW(tmp2);
			}
		}
		;break;
		case (int)20: {
			HX_STACK_LINE(273)
			Dynamic tmp = (::hscript::ExprDef(e1))->__Param(3);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(273)
			Dynamic ecatch = tmp;		HX_STACK_VAR(ecatch,"ecatch");
			HX_STACK_LINE(273)
			::String tmp1 = (::hscript::ExprDef(e1))->__Param(1);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(273)
			::String n = tmp1;		HX_STACK_VAR(n,"n");
			HX_STACK_LINE(273)
			Dynamic tmp2 = (::hscript::ExprDef(e1))->__Param(0);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(273)
			Dynamic e2 = tmp2;		HX_STACK_VAR(e2,"e2");
			HX_STACK_LINE(433)
			{
				HX_STACK_LINE(434)
				int tmp3 = this->declared->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(434)
				int old = tmp3;		HX_STACK_VAR(old,"old");
				HX_STACK_LINE(435)
				bool tmp4 = this->inTry;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(435)
				bool oldTry = tmp4;		HX_STACK_VAR(oldTry,"oldTry");
				HX_STACK_LINE(436)
				try
				{
				HX_STACK_CATCHABLE(::hscript::_Interp::Stop, 0);
				HX_STACK_CATCHABLE(Dynamic, 1);
				{
					HX_STACK_LINE(437)
					this->inTry = true;
					HX_STACK_LINE(438)
					Dynamic tmp5 = e2;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(438)
					Dynamic tmp6 = this->expr(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(438)
					Dynamic v = tmp6;		HX_STACK_VAR(v,"v");
					HX_STACK_LINE(439)
					int tmp7 = old;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(439)
					this->restore(tmp7);
					HX_STACK_LINE(440)
					this->inTry = oldTry;
					HX_STACK_LINE(441)
					Dynamic tmp8 = v;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(441)
					return tmp8;
				}
				}
				catch(Dynamic __e){
					if (__e.IsClass< ::hscript::_Interp::Stop >() ){
						HX_STACK_BEGIN_CATCH
						::hscript::_Interp::Stop err = __e;{
							HX_STACK_LINE(443)
							this->inTry = oldTry;
							HX_STACK_LINE(444)
							::hscript::_Interp::Stop tmp5 = err;		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(444)
							HX_STACK_DO_THROW(tmp5);
						}
					}
					else {
						HX_STACK_BEGIN_CATCH
						Dynamic err = __e;{
							HX_STACK_LINE(447)
							int tmp5 = old;		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(447)
							this->restore(tmp5);
							HX_STACK_LINE(448)
							this->inTry = oldTry;
							HX_STACK_LINE(450)
							::String tmp6 = n;		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(450)
							::haxe::ds::StringMap tmp7 = this->locals;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(450)
							::String tmp8 = n;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(450)
							Dynamic tmp9 = tmp7->get(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(450)
							Dynamic tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
							struct _Function_4_1{
								inline static Dynamic Block( ::String &tmp6,Dynamic &tmp10){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","hscript/Interp.hx",450,0xf078416e)
									{
										hx::Anon __result = hx::Anon_obj::Create();
										__result->Add(HX_HCSTRING("n","\x6e","\x00","\x00","\x00") , tmp6,false);
										__result->Add(HX_HCSTRING("old","\xa7","\x98","\x54","\x00") , tmp10,false);
										return __result;
									}
									return null();
								}
							};
							HX_STACK_LINE(450)
							Dynamic tmp11 = _Function_4_1::Block(tmp6,tmp10);		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(450)
							this->declared->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp11);
							HX_STACK_LINE(451)
							::haxe::ds::StringMap tmp12 = this->locals;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(451)
							::String tmp13 = n;		HX_STACK_VAR(tmp13,"tmp13");
							struct _Function_4_2{
								inline static Dynamic Block( Dynamic &err){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","hscript/Interp.hx",451,0xf078416e)
									{
										hx::Anon __result = hx::Anon_obj::Create();
										__result->Add(HX_HCSTRING("r","\x72","\x00","\x00","\x00") , err,false);
										return __result;
									}
									return null();
								}
							};
							HX_STACK_LINE(451)
							Dynamic tmp14 = _Function_4_2::Block(err);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(451)
							tmp12->set(tmp13,tmp14);
							HX_STACK_LINE(452)
							Dynamic tmp15 = ecatch;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(452)
							Dynamic tmp16 = this->expr(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(452)
							Dynamic v = tmp16;		HX_STACK_VAR(v,"v");
							HX_STACK_LINE(453)
							int tmp17 = old;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(453)
							this->restore(tmp17);
							HX_STACK_LINE(454)
							Dynamic tmp18 = v;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(454)
							return tmp18;
						}
					}
				}
			}
		}
		;break;
		case (int)21: {
			HX_STACK_LINE(273)
			cpp::ArrayBase fl = (::hscript::ExprDef(e1))->__Param(0);		HX_STACK_VAR(fl,"fl");
			HX_STACK_LINE(456)
			{
				struct _Function_3_1{
					inline static Dynamic Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","hscript/Interp.hx",457,0xf078416e)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(457)
				Dynamic tmp = _Function_3_1::Block();		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(457)
				Dynamic o = tmp;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(458)
				{
					HX_STACK_LINE(458)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(458)
					while((true)){
						HX_STACK_LINE(458)
						bool tmp1 = (_g1 < fl->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp1,"tmp1");
						HX_STACK_LINE(458)
						bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
						HX_STACK_LINE(458)
						if ((tmp2)){
							HX_STACK_LINE(458)
							break;
						}
						HX_STACK_LINE(458)
						Dynamic tmp3 = fl->__GetItem(_g1);		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(458)
						Dynamic f = tmp3;		HX_STACK_VAR(f,"f");
						HX_STACK_LINE(458)
						++(_g1);
						HX_STACK_LINE(459)
						Dynamic tmp4 = o;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(459)
						::String tmp5 = f->__Field(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"), hx::paccDynamic );		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(459)
						Dynamic tmp6 = f->__Field(HX_HCSTRING("e","\x65","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(459)
						Dynamic tmp7 = this->expr(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(459)
						this->set(tmp4,tmp5,tmp7);
					}
				}
				HX_STACK_LINE(460)
				Dynamic tmp1 = o;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(460)
				return tmp1;
			}
		}
		;break;
		case (int)22: {
			HX_STACK_LINE(273)
			Dynamic tmp = (::hscript::ExprDef(e1))->__Param(2);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(273)
			Dynamic e2 = tmp;		HX_STACK_VAR(e2,"e2");
			HX_STACK_LINE(273)
			Dynamic tmp1 = (::hscript::ExprDef(e1))->__Param(1);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(273)
			Dynamic e11 = tmp1;		HX_STACK_VAR(e11,"e11");
			HX_STACK_LINE(273)
			Dynamic tmp2 = (::hscript::ExprDef(e1))->__Param(0);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(273)
			Dynamic econd = tmp2;		HX_STACK_VAR(econd,"econd");
			HX_STACK_LINE(461)
			{
				HX_STACK_LINE(462)
				Dynamic tmp3 = econd;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(462)
				Dynamic tmp4 = this->expr(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(462)
				bool tmp5 = (tmp4 == true);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(462)
				Dynamic tmp6;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(462)
				if ((tmp5)){
					HX_STACK_LINE(462)
					Dynamic tmp7 = e11;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(462)
					tmp6 = this->expr(tmp7);
				}
				else{
					HX_STACK_LINE(462)
					Dynamic tmp7 = e2;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(462)
					tmp6 = this->expr(tmp7);
				}
				HX_STACK_LINE(462)
				return tmp6;
			}
		}
		;break;
		case (int)23: {
			HX_STACK_LINE(273)
			Dynamic tmp = (::hscript::ExprDef(e1))->__Param(2);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(273)
			Dynamic def = tmp;		HX_STACK_VAR(def,"def");
			HX_STACK_LINE(273)
			cpp::ArrayBase cases = (::hscript::ExprDef(e1))->__Param(1);		HX_STACK_VAR(cases,"cases");
			HX_STACK_LINE(273)
			Dynamic tmp1 = (::hscript::ExprDef(e1))->__Param(0);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(273)
			Dynamic e2 = tmp1;		HX_STACK_VAR(e2,"e2");
			HX_STACK_LINE(463)
			{
				HX_STACK_LINE(464)
				Dynamic tmp2 = e2;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(464)
				Dynamic tmp3 = this->expr(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(464)
				Dynamic val = tmp3;		HX_STACK_VAR(val,"val");
				HX_STACK_LINE(465)
				bool match = false;		HX_STACK_VAR(match,"match");
				HX_STACK_LINE(466)
				{
					HX_STACK_LINE(466)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(466)
					while((true)){
						HX_STACK_LINE(466)
						bool tmp4 = (_g1 < cases->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(466)
						bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(466)
						if ((tmp5)){
							HX_STACK_LINE(466)
							break;
						}
						HX_STACK_LINE(466)
						Dynamic tmp6 = cases->__GetItem(_g1);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(466)
						Dynamic c = tmp6;		HX_STACK_VAR(c,"c");
						HX_STACK_LINE(466)
						++(_g1);
						HX_STACK_LINE(467)
						{
							HX_STACK_LINE(467)
							int _g11 = (int)0;		HX_STACK_VAR(_g11,"_g11");
							HX_STACK_LINE(467)
							cpp::ArrayBase _g2 = c->__Field(HX_HCSTRING("values","\xe2","\x03","\xb7","\x4f"), hx::paccDynamic );		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(467)
							while((true)){
								HX_STACK_LINE(467)
								bool tmp7 = (_g11 < _g2->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp7,"tmp7");
								HX_STACK_LINE(467)
								bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(467)
								if ((tmp8)){
									HX_STACK_LINE(467)
									break;
								}
								HX_STACK_LINE(467)
								Dynamic tmp9 = _g2->__GetItem(_g11);		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(467)
								Dynamic v = tmp9;		HX_STACK_VAR(v,"v");
								HX_STACK_LINE(467)
								++(_g11);
								HX_STACK_LINE(468)
								Dynamic tmp10 = v;		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(468)
								Dynamic tmp11 = this->expr(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(468)
								Dynamic tmp12 = val;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(468)
								bool tmp13 = (tmp11 == tmp12);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(468)
								if ((tmp13)){
									HX_STACK_LINE(469)
									match = true;
									HX_STACK_LINE(470)
									break;
								}
							}
						}
						HX_STACK_LINE(472)
						bool tmp7 = match;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(472)
						if ((tmp7)){
							HX_STACK_LINE(473)
							Dynamic tmp8 = c->__Field(HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43"), hx::paccDynamic );		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(473)
							Dynamic tmp9 = this->expr(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(473)
							val = tmp9;
							HX_STACK_LINE(474)
							break;
						}
					}
				}
				HX_STACK_LINE(477)
				bool tmp4 = match;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(477)
				bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(477)
				if ((tmp5)){
					HX_STACK_LINE(478)
					bool tmp6 = (def == null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(478)
					Dynamic tmp7;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(478)
					if ((tmp6)){
						HX_STACK_LINE(478)
						tmp7 = null();
					}
					else{
						HX_STACK_LINE(478)
						Dynamic tmp8 = def;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(478)
						tmp7 = this->expr(tmp8);
					}
					HX_STACK_LINE(478)
					val = tmp7;
				}
				HX_STACK_LINE(479)
				Dynamic tmp6 = val;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(479)
				return tmp6;
			}
		}
		;break;
	}
	HX_STACK_LINE(481)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Interp_obj,expr,return )

Void Interp_obj::whileLoop( Dynamic econd,Dynamic e){
{
		HX_STACK_FRAME("hscript.Interp","whileLoop",0xce1b3216,"hscript.Interp.whileLoop","hscript/Interp.hx",484,0xf078416e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(econd,"econd")
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(485)
		int tmp = this->declared->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(485)
		int old = tmp;		HX_STACK_VAR(old,"old");
		HX_STACK_LINE(486)
		while((true)){
			HX_STACK_LINE(486)
			Dynamic tmp1 = econd;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(486)
			Dynamic tmp2 = this->expr(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(486)
			bool tmp3 = (tmp2 == true);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(486)
			bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(486)
			if ((tmp4)){
				HX_STACK_LINE(486)
				break;
			}
			HX_STACK_LINE(487)
			try
			{
			HX_STACK_CATCHABLE(::hscript::_Interp::Stop, 0);
			{
				HX_STACK_LINE(488)
				Dynamic tmp5 = e;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(488)
				this->expr(tmp5);
			}
			}
			catch(Dynamic __e){
				if (__e.IsClass< ::hscript::_Interp::Stop >() ){
					HX_STACK_BEGIN_CATCH
					::hscript::_Interp::Stop err = __e;{
						HX_STACK_LINE(490)
						int _switch_2 = (err->__Index());
						if (  ( _switch_2==(int)1)){
						}
						else if (  ( _switch_2==(int)0)){
							HX_STACK_LINE(492)
							break;
						}
						else if (  ( _switch_2==(int)2)){
							HX_STACK_LINE(493)
							::hscript::_Interp::Stop tmp5 = err;		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(493)
							HX_STACK_DO_THROW(tmp5);
						}
					}
				}
				else {
				    HX_STACK_DO_THROW(__e);
				}
			}
		}
		HX_STACK_LINE(497)
		int tmp1 = old;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(497)
		this->restore(tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Interp_obj,whileLoop,(void))

Dynamic Interp_obj::makeIterator( Dynamic v){
	HX_STACK_FRAME("hscript.Interp","makeIterator",0x634d013b,"hscript.Interp.makeIterator","hscript/Interp.hx",500,0xf078416e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(504)
	try
	{
	HX_STACK_CATCHABLE(Dynamic, 0);
	{
		HX_STACK_LINE(504)
		Dynamic tmp = v->__Field(HX_HCSTRING("iterator","\xee","\x49","\x9a","\x93"), hx::paccDynamic )();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(504)
		v = tmp;
	}
	}
	catch(Dynamic __e){
		{
			HX_STACK_BEGIN_CATCH
			Dynamic e = __e;{
			}
		}
	}
	HX_STACK_LINE(506)
	bool tmp = (v->__Field(HX_HCSTRING("hasNext","\x6d","\xa5","\x46","\x18"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(506)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(506)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(506)
	if ((tmp1)){
		HX_STACK_LINE(506)
		tmp2 = (v->__Field(HX_HCSTRING("next","\xf3","\x84","\x02","\x49"), hx::paccDynamic ) == null());
	}
	else{
		HX_STACK_LINE(506)
		tmp2 = true;
	}
	HX_STACK_LINE(506)
	if ((tmp2)){
		HX_STACK_LINE(506)
		Dynamic tmp3 = v;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(506)
		::hscript::ErrorDef tmp4 = ::hscript::ErrorDef_obj::EInvalidIterator(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(506)
		::hscript::ErrorDef e = tmp4;		HX_STACK_VAR(e,"e");
		HX_STACK_LINE(506)
		::hscript::ErrorDef tmp5 = e;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(506)
		Dynamic tmp6 = this->curExpr;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(506)
		int tmp7 = tmp6->__Field(HX_HCSTRING("pmin","\x22","\xf7","\x5a","\x4a"), hx::paccDynamic );		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(506)
		Dynamic tmp8 = this->curExpr;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(506)
		int tmp9 = tmp8->__Field(HX_HCSTRING("pmax","\x34","\xf0","\x5a","\x4a"), hx::paccDynamic );		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(506)
		::hscript::Error tmp10 = ::hscript::Error_obj::__new(tmp5,tmp7,tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(506)
		HX_STACK_DO_THROW(tmp10);
		HX_STACK_LINE(506)
		Dynamic();
	}
	HX_STACK_LINE(507)
	Dynamic tmp3 = v;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(507)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Interp_obj,makeIterator,return )

Void Interp_obj::forLoop( ::String n,Dynamic it,Dynamic e){
{
		HX_STACK_FRAME("hscript.Interp","forLoop",0xdf1ff72e,"hscript.Interp.forLoop","hscript/Interp.hx",510,0xf078416e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(n,"n")
		HX_STACK_ARG(it,"it")
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(511)
		int tmp = this->declared->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(511)
		int old = tmp;		HX_STACK_VAR(old,"old");
		HX_STACK_LINE(512)
		::String tmp1 = n;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(512)
		::haxe::ds::StringMap tmp2 = this->locals;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(512)
		::String tmp3 = n;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(512)
		Dynamic tmp4 = tmp2->get(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(512)
		Dynamic tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		struct _Function_1_1{
			inline static Dynamic Block( Dynamic &tmp5,::String &tmp1){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","hscript/Interp.hx",512,0xf078416e)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("n","\x6e","\x00","\x00","\x00") , tmp1,false);
					__result->Add(HX_HCSTRING("old","\xa7","\x98","\x54","\x00") , tmp5,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(512)
		Dynamic tmp6 = _Function_1_1::Block(tmp5,tmp1);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(512)
		this->declared->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp6);
		HX_STACK_LINE(513)
		Dynamic tmp7 = it;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(513)
		Dynamic tmp8 = this->expr(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(513)
		Dynamic tmp9 = this->makeIterator(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(513)
		Dynamic it1 = tmp9;		HX_STACK_VAR(it1,"it1");
		HX_STACK_LINE(514)
		while((true)){
			HX_STACK_LINE(514)
			bool tmp10 = it1->__Field(HX_HCSTRING("hasNext","\x6d","\xa5","\x46","\x18"), hx::paccDynamic )();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(514)
			bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(514)
			if ((tmp11)){
				HX_STACK_LINE(514)
				break;
			}
			HX_STACK_LINE(515)
			{
				HX_STACK_LINE(515)
				Dynamic tmp12 = it1->__Field(HX_HCSTRING("next","\xf3","\x84","\x02","\x49"), hx::paccDynamic )();		HX_STACK_VAR(tmp12,"tmp12");
				struct _Function_3_1{
					inline static Dynamic Block( Dynamic &tmp12){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","hscript/Interp.hx",515,0xf078416e)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_HCSTRING("r","\x72","\x00","\x00","\x00") , tmp12,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(515)
				Dynamic tmp13 = _Function_3_1::Block(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(515)
				Dynamic value = tmp13;		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(515)
				::haxe::ds::StringMap tmp14 = this->locals;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(515)
				::String tmp15 = n;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(515)
				Dynamic tmp16 = value;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(515)
				tmp14->set(tmp15,tmp16);
			}
			HX_STACK_LINE(516)
			try
			{
			HX_STACK_CATCHABLE(::hscript::_Interp::Stop, 0);
			{
				HX_STACK_LINE(517)
				Dynamic tmp12 = e;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(517)
				this->expr(tmp12);
			}
			}
			catch(Dynamic __e){
				if (__e.IsClass< ::hscript::_Interp::Stop >() ){
					HX_STACK_BEGIN_CATCH
					::hscript::_Interp::Stop err = __e;{
						HX_STACK_LINE(519)
						int _switch_3 = (err->__Index());
						if (  ( _switch_3==(int)1)){
						}
						else if (  ( _switch_3==(int)0)){
							HX_STACK_LINE(521)
							break;
						}
						else if (  ( _switch_3==(int)2)){
							HX_STACK_LINE(522)
							::hscript::_Interp::Stop tmp12 = err;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(522)
							HX_STACK_DO_THROW(tmp12);
						}
					}
				}
				else {
				    HX_STACK_DO_THROW(__e);
				}
			}
		}
		HX_STACK_LINE(526)
		int tmp10 = old;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(526)
		this->restore(tmp10);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Interp_obj,forLoop,(void))

Dynamic Interp_obj::get( Dynamic o,::String f){
	HX_STACK_FRAME("hscript.Interp","get",0xf7e1c137,"hscript.Interp.get","hscript/Interp.hx",529,0xf078416e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(o,"o")
	HX_STACK_ARG(f,"f")
	HX_STACK_LINE(530)
	bool tmp = (o == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(530)
	if ((tmp)){
		HX_STACK_LINE(530)
		::String tmp1 = f;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(530)
		::hscript::ErrorDef tmp2 = ::hscript::ErrorDef_obj::EInvalidAccess(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(530)
		::hscript::ErrorDef e = tmp2;		HX_STACK_VAR(e,"e");
		HX_STACK_LINE(530)
		::hscript::ErrorDef tmp3 = e;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(530)
		Dynamic tmp4 = this->curExpr;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(530)
		int tmp5 = tmp4->__Field(HX_HCSTRING("pmin","\x22","\xf7","\x5a","\x4a"), hx::paccDynamic );		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(530)
		Dynamic tmp6 = this->curExpr;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(530)
		int tmp7 = tmp6->__Field(HX_HCSTRING("pmax","\x34","\xf0","\x5a","\x4a"), hx::paccDynamic );		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(530)
		::hscript::Error tmp8 = ::hscript::Error_obj::__new(tmp3,tmp5,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(530)
		HX_STACK_DO_THROW(tmp8);
		HX_STACK_LINE(530)
		Dynamic();
	}
	HX_STACK_LINE(539)
	Dynamic tmp1 = o;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(539)
	::String tmp2 = f;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(539)
	Dynamic tmp3 = ::Reflect_obj::getProperty(tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(539)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC2(Interp_obj,get,return )

Dynamic Interp_obj::set( Dynamic o,::String f,Dynamic v){
	HX_STACK_FRAME("hscript.Interp","set",0xf7eadc43,"hscript.Interp.set","hscript/Interp.hx",543,0xf078416e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(o,"o")
	HX_STACK_ARG(f,"f")
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(544)
	bool tmp = (o == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(544)
	if ((tmp)){
		HX_STACK_LINE(544)
		::String tmp1 = f;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(544)
		::hscript::ErrorDef tmp2 = ::hscript::ErrorDef_obj::EInvalidAccess(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(544)
		::hscript::ErrorDef e = tmp2;		HX_STACK_VAR(e,"e");
		HX_STACK_LINE(544)
		::hscript::ErrorDef tmp3 = e;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(544)
		Dynamic tmp4 = this->curExpr;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(544)
		int tmp5 = tmp4->__Field(HX_HCSTRING("pmin","\x22","\xf7","\x5a","\x4a"), hx::paccDynamic );		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(544)
		Dynamic tmp6 = this->curExpr;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(544)
		int tmp7 = tmp6->__Field(HX_HCSTRING("pmax","\x34","\xf0","\x5a","\x4a"), hx::paccDynamic );		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(544)
		::hscript::Error tmp8 = ::hscript::Error_obj::__new(tmp3,tmp5,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(544)
		HX_STACK_DO_THROW(tmp8);
		HX_STACK_LINE(544)
		Dynamic();
	}
	HX_STACK_LINE(545)
	Dynamic tmp1 = o;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(545)
	::String tmp2 = f;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(545)
	Dynamic tmp3 = v;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(545)
	::Reflect_obj::setProperty(tmp1,tmp2,tmp3);
	HX_STACK_LINE(546)
	Dynamic tmp4 = v;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(546)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC3(Interp_obj,set,return )

Dynamic Interp_obj::fcall( Dynamic o,::String f,cpp::ArrayBase args){
	HX_STACK_FRAME("hscript.Interp","fcall",0x6ff6aee5,"hscript.Interp.fcall","hscript/Interp.hx",549,0xf078416e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(o,"o")
	HX_STACK_ARG(f,"f")
	HX_STACK_ARG(args,"args")
	HX_STACK_LINE(550)
	Dynamic tmp = o;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(550)
	Dynamic tmp1 = o;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(550)
	::String tmp2 = f;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(550)
	Dynamic tmp3 = this->get(tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(550)
	Dynamic tmp4 = this->call(tmp,tmp3,args);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(550)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC3(Interp_obj,fcall,return )

Dynamic Interp_obj::call( Dynamic o,Dynamic f,cpp::ArrayBase args){
	HX_STACK_FRAME("hscript.Interp","call",0xeaff64dd,"hscript.Interp.call","hscript/Interp.hx",553,0xf078416e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(o,"o")
	HX_STACK_ARG(f,"f")
	HX_STACK_ARG(args,"args")
	HX_STACK_LINE(554)
	Dynamic tmp = o;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(554)
	Dynamic tmp1 = f;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(554)
	Dynamic tmp2 = ::Reflect_obj::callMethod(tmp,tmp1,args);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(554)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC3(Interp_obj,call,return )

Dynamic Interp_obj::cnew( ::String cl,cpp::ArrayBase args){
	HX_STACK_FRAME("hscript.Interp","cnew",0xeb093c1c,"hscript.Interp.cnew","hscript/Interp.hx",557,0xf078416e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(cl,"cl")
	HX_STACK_ARG(args,"args")
	HX_STACK_LINE(558)
	::String tmp = cl;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(558)
	::hx::Class tmp1 = ::Type_obj::resolveClass(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(558)
	::hx::Class c = tmp1;		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(559)
	bool tmp2 = (c == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(559)
	if ((tmp2)){
		HX_STACK_LINE(559)
		::String tmp3 = cl;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(559)
		Dynamic tmp4 = this->resolve(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(559)
		c = tmp4;
	}
	HX_STACK_LINE(560)
	::hx::Class tmp3 = c;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(560)
	Dynamic tmp4 = ::Type_obj::createInstance(tmp3,args);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(560)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC2(Interp_obj,cnew,return )


Interp_obj::Interp_obj()
{
}

void Interp_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Interp);
	HX_MARK_MEMBER_NAME(variables,"variables");
	HX_MARK_MEMBER_NAME(locals,"locals");
	HX_MARK_MEMBER_NAME(binops,"binops");
	HX_MARK_MEMBER_NAME(depth,"depth");
	HX_MARK_MEMBER_NAME(inTry,"inTry");
	HX_MARK_MEMBER_NAME(declared,"declared");
	HX_MARK_MEMBER_NAME(curExpr,"curExpr");
	HX_MARK_END_CLASS();
}

void Interp_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(variables,"variables");
	HX_VISIT_MEMBER_NAME(locals,"locals");
	HX_VISIT_MEMBER_NAME(binops,"binops");
	HX_VISIT_MEMBER_NAME(depth,"depth");
	HX_VISIT_MEMBER_NAME(inTry,"inTry");
	HX_VISIT_MEMBER_NAME(declared,"declared");
	HX_VISIT_MEMBER_NAME(curExpr,"curExpr");
}

Dynamic Interp_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return get_dyn(); }
		if (HX_FIELD_EQ(inName,"set") ) { return set_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"edef") ) { return edef_dyn(); }
		if (HX_FIELD_EQ(inName,"expr") ) { return expr_dyn(); }
		if (HX_FIELD_EQ(inName,"call") ) { return call_dyn(); }
		if (HX_FIELD_EQ(inName,"cnew") ) { return cnew_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"depth") ) { return depth; }
		if (HX_FIELD_EQ(inName,"inTry") ) { return inTry; }
		if (HX_FIELD_EQ(inName,"error") ) { return error_dyn(); }
		if (HX_FIELD_EQ(inName,"fcall") ) { return fcall_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"locals") ) { return locals; }
		if (HX_FIELD_EQ(inName,"binops") ) { return binops; }
		if (HX_FIELD_EQ(inName,"assign") ) { return assign_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"curExpr") ) { return curExpr; }
		if (HX_FIELD_EQ(inName,"initOps") ) { return initOps_dyn(); }
		if (HX_FIELD_EQ(inName,"execute") ) { return execute_dyn(); }
		if (HX_FIELD_EQ(inName,"restore") ) { return restore_dyn(); }
		if (HX_FIELD_EQ(inName,"resolve") ) { return resolve_dyn(); }
		if (HX_FIELD_EQ(inName,"forLoop") ) { return forLoop_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"declared") ) { return declared; }
		if (HX_FIELD_EQ(inName,"assignOp") ) { return assignOp_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"variables") ) { return variables; }
		if (HX_FIELD_EQ(inName,"increment") ) { return increment_dyn(); }
		if (HX_FIELD_EQ(inName,"duplicate") ) { return duplicate_dyn(); }
		if (HX_FIELD_EQ(inName,"whileLoop") ) { return whileLoop_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"exprReturn") ) { return exprReturn_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"evalAssignOp") ) { return evalAssignOp_dyn(); }
		if (HX_FIELD_EQ(inName,"makeIterator") ) { return makeIterator_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Interp_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"depth") ) { depth=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"inTry") ) { inTry=inValue.Cast< bool >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"locals") ) { locals=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"binops") ) { binops=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"curExpr") ) { curExpr=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"declared") ) { declared=inValue.Cast< cpp::ArrayBase >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"variables") ) { variables=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Interp_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("variables","\xb7","\xe2","\x62","\x82"));
	outFields->push(HX_HCSTRING("locals","\xa8","\x74","\xbf","\x59"));
	outFields->push(HX_HCSTRING("binops","\xcb","\x59","\x16","\xed"));
	outFields->push(HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7"));
	outFields->push(HX_HCSTRING("inTry","\x56","\x82","\x08","\xbe"));
	outFields->push(HX_HCSTRING("declared","\xfa","\x58","\xbc","\xc4"));
	outFields->push(HX_HCSTRING("curExpr","\xd5","\x6e","\x33","\xae"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(Interp_obj,variables),HX_HCSTRING("variables","\xb7","\xe2","\x62","\x82")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(Interp_obj,locals),HX_HCSTRING("locals","\xa8","\x74","\xbf","\x59")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(Interp_obj,binops),HX_HCSTRING("binops","\xcb","\x59","\x16","\xed")},
	{hx::fsInt,(int)offsetof(Interp_obj,depth),HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7")},
	{hx::fsBool,(int)offsetof(Interp_obj,inTry),HX_HCSTRING("inTry","\x56","\x82","\x08","\xbe")},
	{hx::fsObject /*cpp::ArrayBase*/ ,(int)offsetof(Interp_obj,declared),HX_HCSTRING("declared","\xfa","\x58","\xbc","\xc4")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Interp_obj,curExpr),HX_HCSTRING("curExpr","\xd5","\x6e","\x33","\xae")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("variables","\xb7","\xe2","\x62","\x82"),
	HX_HCSTRING("locals","\xa8","\x74","\xbf","\x59"),
	HX_HCSTRING("binops","\xcb","\x59","\x16","\xed"),
	HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7"),
	HX_HCSTRING("inTry","\x56","\x82","\x08","\xbe"),
	HX_HCSTRING("declared","\xfa","\x58","\xbc","\xc4"),
	HX_HCSTRING("curExpr","\xd5","\x6e","\x33","\xae"),
	HX_HCSTRING("initOps","\x02","\x63","\x8b","\xcb"),
	HX_HCSTRING("assign","\x2f","\x46","\x06","\x4c"),
	HX_HCSTRING("assignOp","\x30","\xb5","\xc7","\x0e"),
	HX_HCSTRING("evalAssignOp","\xec","\xd8","\x94","\x19"),
	HX_HCSTRING("increment","\x2f","\x06","\xff","\x31"),
	HX_HCSTRING("execute","\x35","\x0a","\x0d","\xcc"),
	HX_HCSTRING("exprReturn","\xc5","\x6b","\xed","\x86"),
	HX_HCSTRING("duplicate","\x8b","\x21","\x17","\xa1"),
	HX_HCSTRING("restore","\x4e","\x67","\xb0","\x6a"),
	HX_HCSTRING("edef","\x80","\xc6","\x0e","\x43"),
	HX_HCSTRING("error","\xc8","\xcb","\x29","\x73"),
	HX_HCSTRING("resolve","\xec","\x12","\x60","\x67"),
	HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43"),
	HX_HCSTRING("whileLoop","\xb5","\x42","\x98","\xe1"),
	HX_HCSTRING("makeIterator","\xfc","\xdd","\x72","\xd8"),
	HX_HCSTRING("forLoop","\x0d","\x52","\x69","\xc9"),
	HX_HCSTRING("get","\x96","\x80","\x4e","\x00"),
	HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"),
	HX_HCSTRING("fcall","\x04","\x44","\x99","\xfc"),
	HX_HCSTRING("call","\x9e","\x18","\xba","\x41"),
	HX_HCSTRING("cnew","\xdd","\xef","\xc3","\x41"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Interp_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Interp_obj::__mClass,"__mClass");
};

#endif

hx::Class Interp_obj::__mClass;

void Interp_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("hscript.Interp","\x8f","\x7c","\xf0","\x9a");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Interp_obj >;
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
