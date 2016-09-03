#ifndef INCLUDED_hscript_ErrorDef
#define INCLUDED_hscript_ErrorDef

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(hscript,ErrorDef)
namespace hscript{


class ErrorDef_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef ErrorDef_obj OBJ_;

	public:
		ErrorDef_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_HCSTRING("hscript.ErrorDef","\x58","\x1a","\x2a","\x4c"); }
		::String __ToString() const { return HX_HCSTRING("ErrorDef.","\x91","\xae","\xa1","\x0a") + tag; }

		static ::hscript::ErrorDef EInvalidAccess(::String f);
		static Dynamic EInvalidAccess_dyn();
		static ::hscript::ErrorDef EInvalidChar(int c);
		static Dynamic EInvalidChar_dyn();
		static ::hscript::ErrorDef EInvalidIterator(::String v);
		static Dynamic EInvalidIterator_dyn();
		static ::hscript::ErrorDef EInvalidOp(::String op);
		static Dynamic EInvalidOp_dyn();
		static ::hscript::ErrorDef EUnexpected(::String s);
		static Dynamic EUnexpected_dyn();
		static ::hscript::ErrorDef EUnknownVariable(::String v);
		static Dynamic EUnknownVariable_dyn();
		static ::hscript::ErrorDef EUnterminatedComment;
		static inline ::hscript::ErrorDef EUnterminatedComment_dyn() { return EUnterminatedComment; }
		static ::hscript::ErrorDef EUnterminatedString;
		static inline ::hscript::ErrorDef EUnterminatedString_dyn() { return EUnterminatedString; }
};

} // end namespace hscript

#endif /* INCLUDED_hscript_ErrorDef */ 
