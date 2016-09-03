#ifndef INCLUDED_hscript_Parser
#define INCLUDED_hscript_Parser

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(List)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS2(haxe,io,Input)
HX_DECLARE_CLASS1(hscript,CType)
HX_DECLARE_CLASS1(hscript,Const)
HX_DECLARE_CLASS1(hscript,ErrorDef)
HX_DECLARE_CLASS1(hscript,ExprDef)
HX_DECLARE_CLASS1(hscript,Parser)
HX_DECLARE_CLASS1(hscript,Token)
namespace hscript{


class HXCPP_CLASS_ATTRIBUTES  Parser_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Parser_obj OBJ_;
		Parser_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="hscript.Parser")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Parser_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Parser_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Parser","\xff","\x10","\x1d","\x22"); }

		int line;
		::String opChars;
		::String identChars;
		::haxe::ds::StringMap opPriority;
		::haxe::ds::StringMap opRightAssoc;
		::haxe::ds::StringMap unops;
		bool allowJSON;
		bool allowTypes;
		::haxe::io::Input input;
		int _char;
		Array< bool > ops;
		Array< bool > idents;
		int uid;
		int readPos;
		int tokenMin;
		int tokenMax;
		int oldTokenMin;
		int oldTokenMax;
		::List tokens;
		virtual Void error( ::hscript::ErrorDef err,int pmin,int pmax);
		Dynamic error_dyn();

		virtual Void invalidChar( int c);
		Dynamic invalidChar_dyn();

		virtual Dynamic parseString( ::String s);
		Dynamic parseString_dyn();

		virtual Dynamic parse( ::haxe::io::Input s);
		Dynamic parse_dyn();

		virtual Dynamic unexpected( ::hscript::Token tk);
		Dynamic unexpected_dyn();

		virtual Void push( ::hscript::Token tk);
		Dynamic push_dyn();

		virtual Void ensure( ::hscript::Token tk);
		Dynamic ensure_dyn();

		virtual ::hscript::ExprDef expr( Dynamic e);
		Dynamic expr_dyn();

		virtual int pmin( Dynamic e);
		Dynamic pmin_dyn();

		virtual int pmax( Dynamic e);
		Dynamic pmax_dyn();

		virtual Dynamic mk( ::hscript::ExprDef e,Dynamic pmin,Dynamic pmax);
		Dynamic mk_dyn();

		virtual bool isBlock( Dynamic e);
		Dynamic isBlock_dyn();

		virtual Dynamic parseFullExpr( );
		Dynamic parseFullExpr_dyn();

		virtual Dynamic parseObject( Dynamic p1);
		Dynamic parseObject_dyn();

		virtual Dynamic parseExpr( );
		Dynamic parseExpr_dyn();

		virtual Dynamic mapCompr( ::String tmp,Dynamic e);
		Dynamic mapCompr_dyn();

		virtual Dynamic makeUnop( ::String op,Dynamic e);
		Dynamic makeUnop_dyn();

		virtual Dynamic makeBinop( ::String op,Dynamic e1,Dynamic e);
		Dynamic makeBinop_dyn();

		virtual Dynamic parseStructure( ::String id);
		Dynamic parseStructure_dyn();

		virtual Dynamic parseExprNext( Dynamic e1);
		Dynamic parseExprNext_dyn();

		virtual ::hscript::CType parseType( );
		Dynamic parseType_dyn();

		virtual ::hscript::CType parseTypeNext( ::hscript::CType t);
		Dynamic parseTypeNext_dyn();

		virtual cpp::ArrayBase parseExprList( ::hscript::Token etk);
		Dynamic parseExprList_dyn();

		virtual Void incPos( );
		Dynamic incPos_dyn();

		virtual int readChar( );
		Dynamic readChar_dyn();

		virtual ::String readString( int until);
		Dynamic readString_dyn();

		virtual ::hscript::Token token( );
		Dynamic token_dyn();

		virtual ::hscript::Token _token( );
		Dynamic _token_dyn();

		virtual ::hscript::Token tokenComment( ::String op,int _char);
		Dynamic tokenComment_dyn();

		virtual ::String constString( ::hscript::Const c);
		Dynamic constString_dyn();

		virtual ::String tokenString( ::hscript::Token t);
		Dynamic tokenString_dyn();

};

} // end namespace hscript

#endif /* INCLUDED_hscript_Parser */ 
