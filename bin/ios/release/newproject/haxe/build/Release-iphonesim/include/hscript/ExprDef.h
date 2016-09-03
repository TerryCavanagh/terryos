#ifndef INCLUDED_hscript_ExprDef
#define INCLUDED_hscript_ExprDef

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(hscript,CType)
HX_DECLARE_CLASS1(hscript,Const)
HX_DECLARE_CLASS1(hscript,ExprDef)
namespace hscript{


class ExprDef_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef ExprDef_obj OBJ_;

	public:
		ExprDef_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_HCSTRING("hscript.ExprDef","\x75","\xc4","\x92","\x0b"); }
		::String __ToString() const { return HX_HCSTRING("ExprDef.","\xbe","\x76","\x8e","\x81") + tag; }

		static ::hscript::ExprDef EArray(Dynamic e,Dynamic index);
		static Dynamic EArray_dyn();
		static ::hscript::ExprDef EArrayDecl(cpp::ArrayBase e);
		static Dynamic EArrayDecl_dyn();
		static ::hscript::ExprDef EBinop(::String op,Dynamic e1,Dynamic e2);
		static Dynamic EBinop_dyn();
		static ::hscript::ExprDef EBlock(cpp::ArrayBase e);
		static Dynamic EBlock_dyn();
		static ::hscript::ExprDef EBreak;
		static inline ::hscript::ExprDef EBreak_dyn() { return EBreak; }
		static ::hscript::ExprDef ECall(Dynamic e,cpp::ArrayBase params);
		static Dynamic ECall_dyn();
		static ::hscript::ExprDef EConst(::hscript::Const c);
		static Dynamic EConst_dyn();
		static ::hscript::ExprDef EContinue;
		static inline ::hscript::ExprDef EContinue_dyn() { return EContinue; }
		static ::hscript::ExprDef EField(Dynamic e,::String f);
		static Dynamic EField_dyn();
		static ::hscript::ExprDef EFor(::String v,Dynamic it,Dynamic e);
		static Dynamic EFor_dyn();
		static ::hscript::ExprDef EFunction(cpp::ArrayBase args,Dynamic e,::String name,::hscript::CType ret);
		static Dynamic EFunction_dyn();
		static ::hscript::ExprDef EIdent(::String v);
		static Dynamic EIdent_dyn();
		static ::hscript::ExprDef EIf(Dynamic cond,Dynamic e1,Dynamic e2);
		static Dynamic EIf_dyn();
		static ::hscript::ExprDef ENew(::String cl,cpp::ArrayBase params);
		static Dynamic ENew_dyn();
		static ::hscript::ExprDef EObject(cpp::ArrayBase fl);
		static Dynamic EObject_dyn();
		static ::hscript::ExprDef EParent(Dynamic e);
		static Dynamic EParent_dyn();
		static ::hscript::ExprDef EReturn(Dynamic e);
		static Dynamic EReturn_dyn();
		static ::hscript::ExprDef ESwitch(Dynamic e,cpp::ArrayBase cases,Dynamic defaultExpr);
		static Dynamic ESwitch_dyn();
		static ::hscript::ExprDef ETernary(Dynamic cond,Dynamic e1,Dynamic e2);
		static Dynamic ETernary_dyn();
		static ::hscript::ExprDef EThrow(Dynamic e);
		static Dynamic EThrow_dyn();
		static ::hscript::ExprDef ETry(Dynamic e,::String v,::hscript::CType t,Dynamic ecatch);
		static Dynamic ETry_dyn();
		static ::hscript::ExprDef EUnop(::String op,bool prefix,Dynamic e);
		static Dynamic EUnop_dyn();
		static ::hscript::ExprDef EVar(::String n,::hscript::CType t,Dynamic e);
		static Dynamic EVar_dyn();
		static ::hscript::ExprDef EWhile(Dynamic cond,Dynamic e);
		static Dynamic EWhile_dyn();
};

} // end namespace hscript

#endif /* INCLUDED_hscript_ExprDef */ 
