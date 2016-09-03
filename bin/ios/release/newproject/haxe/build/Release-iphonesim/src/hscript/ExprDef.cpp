#include <hxcpp.h>

#ifndef INCLUDED_hscript_CType
#include <hscript/CType.h>
#endif
#ifndef INCLUDED_hscript_Const
#include <hscript/Const.h>
#endif
#ifndef INCLUDED_hscript_ExprDef
#include <hscript/ExprDef.h>
#endif
namespace hscript{

::hscript::ExprDef  ExprDef_obj::EArray(Dynamic e,Dynamic index)
	{ return hx::CreateEnum< ExprDef_obj >(HX_HCSTRING("EArray","\x14","\xc3","\x5c","\x4f"),16,hx::DynamicArray(0,2).Add(e).Add(index)); }

::hscript::ExprDef  ExprDef_obj::EArrayDecl(cpp::ArrayBase e)
	{ return hx::CreateEnum< ExprDef_obj >(HX_HCSTRING("EArrayDecl","\x9e","\x59","\xbd","\x01"),17,hx::DynamicArray(0,1).Add(e)); }

::hscript::ExprDef  ExprDef_obj::EBinop(::String op,Dynamic e1,Dynamic e2)
	{ return hx::CreateEnum< ExprDef_obj >(HX_HCSTRING("EBinop","\x23","\x6f","\xcd","\xdc"),6,hx::DynamicArray(0,3).Add(op).Add(e1).Add(e2)); }

::hscript::ExprDef  ExprDef_obj::EBlock(cpp::ArrayBase e)
	{ return hx::CreateEnum< ExprDef_obj >(HX_HCSTRING("EBlock","\xc8","\xca","\xc9","\xde"),4,hx::DynamicArray(0,1).Add(e)); }

::hscript::ExprDef ExprDef_obj::EBreak;

::hscript::ExprDef  ExprDef_obj::ECall(Dynamic e,cpp::ArrayBase params)
	{ return hx::CreateEnum< ExprDef_obj >(HX_HCSTRING("ECall","\x83","\x4b","\x39","\xe7"),8,hx::DynamicArray(0,2).Add(e).Add(params)); }

::hscript::ExprDef  ExprDef_obj::EConst(::hscript::Const c)
	{ return hx::CreateEnum< ExprDef_obj >(HX_HCSTRING("EConst","\xde","\x4e","\x2b","\x74"),0,hx::DynamicArray(0,1).Add(c)); }

::hscript::ExprDef ExprDef_obj::EContinue;

::hscript::ExprDef  ExprDef_obj::EField(Dynamic e,::String f)
	{ return hx::CreateEnum< ExprDef_obj >(HX_HCSTRING("EField","\x35","\xea","\x60","\x2a"),5,hx::DynamicArray(0,2).Add(e).Add(f)); }

::hscript::ExprDef  ExprDef_obj::EFor(::String v,Dynamic it,Dynamic e)
	{ return hx::CreateEnum< ExprDef_obj >(HX_HCSTRING("EFor","\xc4","\x37","\xd1","\x2d"),11,hx::DynamicArray(0,3).Add(v).Add(it).Add(e)); }

::hscript::ExprDef  ExprDef_obj::EFunction(cpp::ArrayBase args,Dynamic e,::String name,::hscript::CType ret)
	{ return hx::CreateEnum< ExprDef_obj >(HX_HCSTRING("EFunction","\x7d","\xb4","\x15","\xc9"),14,hx::DynamicArray(0,4).Add(args).Add(e).Add(name).Add(ret)); }

::hscript::ExprDef  ExprDef_obj::EIdent(::String v)
	{ return hx::CreateEnum< ExprDef_obj >(HX_HCSTRING("EIdent","\x6b","\x98","\x46","\xe1"),1,hx::DynamicArray(0,1).Add(v)); }

::hscript::ExprDef  ExprDef_obj::EIf(Dynamic cond,Dynamic e1,Dynamic e2)
	{ return hx::CreateEnum< ExprDef_obj >(HX_HCSTRING("EIf","\x82","\x9b","\x34","\x00"),9,hx::DynamicArray(0,3).Add(cond).Add(e1).Add(e2)); }

::hscript::ExprDef  ExprDef_obj::ENew(::String cl,cpp::ArrayBase params)
	{ return hx::CreateEnum< ExprDef_obj >(HX_HCSTRING("ENew","\x1b","\x41","\xd7","\x2d"),18,hx::DynamicArray(0,2).Add(cl).Add(params)); }

::hscript::ExprDef  ExprDef_obj::EObject(cpp::ArrayBase fl)
	{ return hx::CreateEnum< ExprDef_obj >(HX_HCSTRING("EObject","\xe4","\xf4","\x1c","\x7f"),21,hx::DynamicArray(0,1).Add(fl)); }

::hscript::ExprDef  ExprDef_obj::EParent(Dynamic e)
	{ return hx::CreateEnum< ExprDef_obj >(HX_HCSTRING("EParent","\x4f","\x7b","\x5b","\x57"),3,hx::DynamicArray(0,1).Add(e)); }

::hscript::ExprDef  ExprDef_obj::EReturn(Dynamic e)
	{ return hx::CreateEnum< ExprDef_obj >(HX_HCSTRING("EReturn","\xd5","\x1a","\x0b","\x73"),15,hx::DynamicArray(0,1).Add(e)); }

::hscript::ExprDef  ExprDef_obj::ESwitch(Dynamic e,cpp::ArrayBase cases,Dynamic defaultExpr)
	{ return hx::CreateEnum< ExprDef_obj >(HX_HCSTRING("ESwitch","\x19","\xc0","\x56","\x2f"),23,hx::DynamicArray(0,3).Add(e).Add(cases).Add(defaultExpr)); }

::hscript::ExprDef  ExprDef_obj::ETernary(Dynamic cond,Dynamic e1,Dynamic e2)
	{ return hx::CreateEnum< ExprDef_obj >(HX_HCSTRING("ETernary","\x56","\xc3","\x5c","\x5e"),22,hx::DynamicArray(0,3).Add(cond).Add(e1).Add(e2)); }

::hscript::ExprDef  ExprDef_obj::EThrow(Dynamic e)
	{ return hx::CreateEnum< ExprDef_obj >(HX_HCSTRING("EThrow","\xa1","\xb2","\x5d","\x39"),19,hx::DynamicArray(0,1).Add(e)); }

::hscript::ExprDef  ExprDef_obj::ETry(Dynamic e,::String v,::hscript::CType t,Dynamic ecatch)
	{ return hx::CreateEnum< ExprDef_obj >(HX_HCSTRING("ETry","\xf6","\xd9","\xdb","\x2d"),20,hx::DynamicArray(0,4).Add(e).Add(v).Add(t).Add(ecatch)); }

::hscript::ExprDef  ExprDef_obj::EUnop(::String op,bool prefix,Dynamic e)
	{ return hx::CreateEnum< ExprDef_obj >(HX_HCSTRING("EUnop","\x9f","\x02","\x29","\xf3"),7,hx::DynamicArray(0,3).Add(op).Add(prefix).Add(e)); }

::hscript::ExprDef  ExprDef_obj::EVar(::String n,::hscript::CType t,Dynamic e)
	{ return hx::CreateEnum< ExprDef_obj >(HX_HCSTRING("EVar","\xa2","\x4f","\xdd","\x2d"),2,hx::DynamicArray(0,3).Add(n).Add(t).Add(e)); }

::hscript::ExprDef  ExprDef_obj::EWhile(Dynamic cond,Dynamic e)
	{ return hx::CreateEnum< ExprDef_obj >(HX_HCSTRING("EWhile","\x2c","\x99","\x8a","\xf3"),10,hx::DynamicArray(0,2).Add(cond).Add(e)); }

HX_DEFINE_CREATE_ENUM(ExprDef_obj)

int ExprDef_obj::__FindIndex(::String inName)
{
	if (inName==HX_HCSTRING("EArray","\x14","\xc3","\x5c","\x4f")) return 16;
	if (inName==HX_HCSTRING("EArrayDecl","\x9e","\x59","\xbd","\x01")) return 17;
	if (inName==HX_HCSTRING("EBinop","\x23","\x6f","\xcd","\xdc")) return 6;
	if (inName==HX_HCSTRING("EBlock","\xc8","\xca","\xc9","\xde")) return 4;
	if (inName==HX_HCSTRING("EBreak","\x3a","\x7a","\xb9","\xe2")) return 12;
	if (inName==HX_HCSTRING("ECall","\x83","\x4b","\x39","\xe7")) return 8;
	if (inName==HX_HCSTRING("EConst","\xde","\x4e","\x2b","\x74")) return 0;
	if (inName==HX_HCSTRING("EContinue","\xcc","\xe9","\x8b","\xe6")) return 13;
	if (inName==HX_HCSTRING("EField","\x35","\xea","\x60","\x2a")) return 5;
	if (inName==HX_HCSTRING("EFor","\xc4","\x37","\xd1","\x2d")) return 11;
	if (inName==HX_HCSTRING("EFunction","\x7d","\xb4","\x15","\xc9")) return 14;
	if (inName==HX_HCSTRING("EIdent","\x6b","\x98","\x46","\xe1")) return 1;
	if (inName==HX_HCSTRING("EIf","\x82","\x9b","\x34","\x00")) return 9;
	if (inName==HX_HCSTRING("ENew","\x1b","\x41","\xd7","\x2d")) return 18;
	if (inName==HX_HCSTRING("EObject","\xe4","\xf4","\x1c","\x7f")) return 21;
	if (inName==HX_HCSTRING("EParent","\x4f","\x7b","\x5b","\x57")) return 3;
	if (inName==HX_HCSTRING("EReturn","\xd5","\x1a","\x0b","\x73")) return 15;
	if (inName==HX_HCSTRING("ESwitch","\x19","\xc0","\x56","\x2f")) return 23;
	if (inName==HX_HCSTRING("ETernary","\x56","\xc3","\x5c","\x5e")) return 22;
	if (inName==HX_HCSTRING("EThrow","\xa1","\xb2","\x5d","\x39")) return 19;
	if (inName==HX_HCSTRING("ETry","\xf6","\xd9","\xdb","\x2d")) return 20;
	if (inName==HX_HCSTRING("EUnop","\x9f","\x02","\x29","\xf3")) return 7;
	if (inName==HX_HCSTRING("EVar","\xa2","\x4f","\xdd","\x2d")) return 2;
	if (inName==HX_HCSTRING("EWhile","\x2c","\x99","\x8a","\xf3")) return 10;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC2(ExprDef_obj,EArray,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(ExprDef_obj,EArrayDecl,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC3(ExprDef_obj,EBinop,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(ExprDef_obj,EBlock,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC2(ExprDef_obj,ECall,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(ExprDef_obj,EConst,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC2(ExprDef_obj,EField,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC3(ExprDef_obj,EFor,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC4(ExprDef_obj,EFunction,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(ExprDef_obj,EIdent,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC3(ExprDef_obj,EIf,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC2(ExprDef_obj,ENew,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(ExprDef_obj,EObject,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(ExprDef_obj,EParent,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(ExprDef_obj,EReturn,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC3(ExprDef_obj,ESwitch,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC3(ExprDef_obj,ETernary,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(ExprDef_obj,EThrow,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC4(ExprDef_obj,ETry,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC3(ExprDef_obj,EUnop,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC3(ExprDef_obj,EVar,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC2(ExprDef_obj,EWhile,return)

int ExprDef_obj::__FindArgCount(::String inName)
{
	if (inName==HX_HCSTRING("EArray","\x14","\xc3","\x5c","\x4f")) return 2;
	if (inName==HX_HCSTRING("EArrayDecl","\x9e","\x59","\xbd","\x01")) return 1;
	if (inName==HX_HCSTRING("EBinop","\x23","\x6f","\xcd","\xdc")) return 3;
	if (inName==HX_HCSTRING("EBlock","\xc8","\xca","\xc9","\xde")) return 1;
	if (inName==HX_HCSTRING("EBreak","\x3a","\x7a","\xb9","\xe2")) return 0;
	if (inName==HX_HCSTRING("ECall","\x83","\x4b","\x39","\xe7")) return 2;
	if (inName==HX_HCSTRING("EConst","\xde","\x4e","\x2b","\x74")) return 1;
	if (inName==HX_HCSTRING("EContinue","\xcc","\xe9","\x8b","\xe6")) return 0;
	if (inName==HX_HCSTRING("EField","\x35","\xea","\x60","\x2a")) return 2;
	if (inName==HX_HCSTRING("EFor","\xc4","\x37","\xd1","\x2d")) return 3;
	if (inName==HX_HCSTRING("EFunction","\x7d","\xb4","\x15","\xc9")) return 4;
	if (inName==HX_HCSTRING("EIdent","\x6b","\x98","\x46","\xe1")) return 1;
	if (inName==HX_HCSTRING("EIf","\x82","\x9b","\x34","\x00")) return 3;
	if (inName==HX_HCSTRING("ENew","\x1b","\x41","\xd7","\x2d")) return 2;
	if (inName==HX_HCSTRING("EObject","\xe4","\xf4","\x1c","\x7f")) return 1;
	if (inName==HX_HCSTRING("EParent","\x4f","\x7b","\x5b","\x57")) return 1;
	if (inName==HX_HCSTRING("EReturn","\xd5","\x1a","\x0b","\x73")) return 1;
	if (inName==HX_HCSTRING("ESwitch","\x19","\xc0","\x56","\x2f")) return 3;
	if (inName==HX_HCSTRING("ETernary","\x56","\xc3","\x5c","\x5e")) return 3;
	if (inName==HX_HCSTRING("EThrow","\xa1","\xb2","\x5d","\x39")) return 1;
	if (inName==HX_HCSTRING("ETry","\xf6","\xd9","\xdb","\x2d")) return 4;
	if (inName==HX_HCSTRING("EUnop","\x9f","\x02","\x29","\xf3")) return 3;
	if (inName==HX_HCSTRING("EVar","\xa2","\x4f","\xdd","\x2d")) return 3;
	if (inName==HX_HCSTRING("EWhile","\x2c","\x99","\x8a","\xf3")) return 2;
	return super::__FindArgCount(inName);
}

Dynamic ExprDef_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_HCSTRING("EArray","\x14","\xc3","\x5c","\x4f")) return EArray_dyn();
	if (inName==HX_HCSTRING("EArrayDecl","\x9e","\x59","\xbd","\x01")) return EArrayDecl_dyn();
	if (inName==HX_HCSTRING("EBinop","\x23","\x6f","\xcd","\xdc")) return EBinop_dyn();
	if (inName==HX_HCSTRING("EBlock","\xc8","\xca","\xc9","\xde")) return EBlock_dyn();
	if (inName==HX_HCSTRING("EBreak","\x3a","\x7a","\xb9","\xe2")) return EBreak;
	if (inName==HX_HCSTRING("ECall","\x83","\x4b","\x39","\xe7")) return ECall_dyn();
	if (inName==HX_HCSTRING("EConst","\xde","\x4e","\x2b","\x74")) return EConst_dyn();
	if (inName==HX_HCSTRING("EContinue","\xcc","\xe9","\x8b","\xe6")) return EContinue;
	if (inName==HX_HCSTRING("EField","\x35","\xea","\x60","\x2a")) return EField_dyn();
	if (inName==HX_HCSTRING("EFor","\xc4","\x37","\xd1","\x2d")) return EFor_dyn();
	if (inName==HX_HCSTRING("EFunction","\x7d","\xb4","\x15","\xc9")) return EFunction_dyn();
	if (inName==HX_HCSTRING("EIdent","\x6b","\x98","\x46","\xe1")) return EIdent_dyn();
	if (inName==HX_HCSTRING("EIf","\x82","\x9b","\x34","\x00")) return EIf_dyn();
	if (inName==HX_HCSTRING("ENew","\x1b","\x41","\xd7","\x2d")) return ENew_dyn();
	if (inName==HX_HCSTRING("EObject","\xe4","\xf4","\x1c","\x7f")) return EObject_dyn();
	if (inName==HX_HCSTRING("EParent","\x4f","\x7b","\x5b","\x57")) return EParent_dyn();
	if (inName==HX_HCSTRING("EReturn","\xd5","\x1a","\x0b","\x73")) return EReturn_dyn();
	if (inName==HX_HCSTRING("ESwitch","\x19","\xc0","\x56","\x2f")) return ESwitch_dyn();
	if (inName==HX_HCSTRING("ETernary","\x56","\xc3","\x5c","\x5e")) return ETernary_dyn();
	if (inName==HX_HCSTRING("EThrow","\xa1","\xb2","\x5d","\x39")) return EThrow_dyn();
	if (inName==HX_HCSTRING("ETry","\xf6","\xd9","\xdb","\x2d")) return ETry_dyn();
	if (inName==HX_HCSTRING("EUnop","\x9f","\x02","\x29","\xf3")) return EUnop_dyn();
	if (inName==HX_HCSTRING("EVar","\xa2","\x4f","\xdd","\x2d")) return EVar_dyn();
	if (inName==HX_HCSTRING("EWhile","\x2c","\x99","\x8a","\xf3")) return EWhile_dyn();
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_HCSTRING("EConst","\xde","\x4e","\x2b","\x74"),
	HX_HCSTRING("EIdent","\x6b","\x98","\x46","\xe1"),
	HX_HCSTRING("EVar","\xa2","\x4f","\xdd","\x2d"),
	HX_HCSTRING("EParent","\x4f","\x7b","\x5b","\x57"),
	HX_HCSTRING("EBlock","\xc8","\xca","\xc9","\xde"),
	HX_HCSTRING("EField","\x35","\xea","\x60","\x2a"),
	HX_HCSTRING("EBinop","\x23","\x6f","\xcd","\xdc"),
	HX_HCSTRING("EUnop","\x9f","\x02","\x29","\xf3"),
	HX_HCSTRING("ECall","\x83","\x4b","\x39","\xe7"),
	HX_HCSTRING("EIf","\x82","\x9b","\x34","\x00"),
	HX_HCSTRING("EWhile","\x2c","\x99","\x8a","\xf3"),
	HX_HCSTRING("EFor","\xc4","\x37","\xd1","\x2d"),
	HX_HCSTRING("EBreak","\x3a","\x7a","\xb9","\xe2"),
	HX_HCSTRING("EContinue","\xcc","\xe9","\x8b","\xe6"),
	HX_HCSTRING("EFunction","\x7d","\xb4","\x15","\xc9"),
	HX_HCSTRING("EReturn","\xd5","\x1a","\x0b","\x73"),
	HX_HCSTRING("EArray","\x14","\xc3","\x5c","\x4f"),
	HX_HCSTRING("EArrayDecl","\x9e","\x59","\xbd","\x01"),
	HX_HCSTRING("ENew","\x1b","\x41","\xd7","\x2d"),
	HX_HCSTRING("EThrow","\xa1","\xb2","\x5d","\x39"),
	HX_HCSTRING("ETry","\xf6","\xd9","\xdb","\x2d"),
	HX_HCSTRING("EObject","\xe4","\xf4","\x1c","\x7f"),
	HX_HCSTRING("ETernary","\x56","\xc3","\x5c","\x5e"),
	HX_HCSTRING("ESwitch","\x19","\xc0","\x56","\x2f"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ExprDef_obj::EBreak,"EBreak");
	HX_MARK_MEMBER_NAME(ExprDef_obj::EContinue,"EContinue");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ExprDef_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ExprDef_obj::EBreak,"EBreak");
	HX_VISIT_MEMBER_NAME(ExprDef_obj::EContinue,"EContinue");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
hx::Class ExprDef_obj::__mClass;

Dynamic __Create_ExprDef_obj() { return new ExprDef_obj; }

void ExprDef_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_HCSTRING("hscript.ExprDef","\x75","\xc4","\x92","\x0b"), hx::TCanCast< ExprDef_obj >,sStaticFields,sMemberFields,
	&__Create_ExprDef_obj, &__Create,
	&super::__SGetClass(), &CreateExprDef_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void ExprDef_obj::__boot()
{
hx::Static(EBreak) = hx::CreateEnum< ExprDef_obj >(HX_HCSTRING("EBreak","\x3a","\x7a","\xb9","\xe2"),12);
hx::Static(EContinue) = hx::CreateEnum< ExprDef_obj >(HX_HCSTRING("EContinue","\xcc","\xe9","\x8b","\xe6"),13);
}


} // end namespace hscript
