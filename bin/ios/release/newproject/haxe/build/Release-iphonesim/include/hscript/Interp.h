#ifndef INCLUDED_hscript_Interp
#define INCLUDED_hscript_Interp

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS1(hscript,ErrorDef)
HX_DECLARE_CLASS1(hscript,ExprDef)
HX_DECLARE_CLASS1(hscript,Interp)
namespace hscript{


class HXCPP_CLASS_ATTRIBUTES  Interp_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Interp_obj OBJ_;
		Interp_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="hscript.Interp")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Interp_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Interp_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Interp","\xf4","\xed","\x1a","\xd3"); }

		::haxe::ds::StringMap variables;
		::haxe::ds::StringMap locals;
		::haxe::ds::StringMap binops;
		int depth;
		bool inTry;
		cpp::ArrayBase declared;
		Dynamic curExpr;
		virtual Void initOps( );
		Dynamic initOps_dyn();

		virtual Dynamic assign( Dynamic e1,Dynamic e2);
		Dynamic assign_dyn();

		virtual Void assignOp( ::String op,Dynamic fop);
		Dynamic assignOp_dyn();

		virtual Dynamic evalAssignOp( ::String op,Dynamic fop,Dynamic e1,Dynamic e2);
		Dynamic evalAssignOp_dyn();

		virtual Dynamic increment( Dynamic e,bool prefix,int delta);
		Dynamic increment_dyn();

		virtual Dynamic execute( Dynamic expr);
		Dynamic execute_dyn();

		virtual Dynamic exprReturn( Dynamic e);
		Dynamic exprReturn_dyn();

		virtual ::haxe::ds::StringMap duplicate( ::haxe::ds::StringMap h);
		Dynamic duplicate_dyn();

		virtual Void restore( int old);
		Dynamic restore_dyn();

		virtual ::hscript::ExprDef edef( Dynamic e);
		Dynamic edef_dyn();

		virtual Dynamic error( ::hscript::ErrorDef e);
		Dynamic error_dyn();

		virtual Dynamic resolve( ::String id);
		Dynamic resolve_dyn();

		virtual Dynamic expr( Dynamic e);
		Dynamic expr_dyn();

		virtual Void whileLoop( Dynamic econd,Dynamic e);
		Dynamic whileLoop_dyn();

		virtual Dynamic makeIterator( Dynamic v);
		Dynamic makeIterator_dyn();

		virtual Void forLoop( ::String n,Dynamic it,Dynamic e);
		Dynamic forLoop_dyn();

		virtual Dynamic get( Dynamic o,::String f);
		Dynamic get_dyn();

		virtual Dynamic set( Dynamic o,::String f,Dynamic v);
		Dynamic set_dyn();

		virtual Dynamic fcall( Dynamic o,::String f,cpp::ArrayBase args);
		Dynamic fcall_dyn();

		virtual Dynamic call( Dynamic o,Dynamic f,cpp::ArrayBase args);
		Dynamic call_dyn();

		virtual Dynamic cnew( ::String cl,cpp::ArrayBase args);
		Dynamic cnew_dyn();

};

} // end namespace hscript

#endif /* INCLUDED_hscript_Interp */ 
