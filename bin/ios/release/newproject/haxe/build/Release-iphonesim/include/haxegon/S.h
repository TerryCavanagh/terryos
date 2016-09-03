#ifndef INCLUDED_haxegon_S
#define INCLUDED_haxegon_S

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxegon,S)
namespace haxegon{


class HXCPP_CLASS_ATTRIBUTES  S_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef S_obj OBJ_;
		S_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="haxegon.S")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< S_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~S_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("S","\x53","\x00","\x00","\x00"); }

		static ::String uppercase( ::String currentstring);
		static Dynamic uppercase_dyn();

		static ::String lowercase( ::String currentstring);
		static Dynamic lowercase_dyn();

		static Array< ::String > split( ::String currentstring,::String delimiter);
		static Dynamic split_dyn();

		static ::String removefromstring( ::String fullstring,::String substring);
		static Dynamic removefromstring_dyn();

		static bool isinstring( ::String fullstring,::String stringtocheck);
		static Dynamic isinstring_dyn();

		static int positioninstring( ::String fullstring,::String substring,hx::Null< int >  start);
		static Dynamic positioninstring_dyn();

		static ::String letterat( ::String currentstring,hx::Null< int >  position);
		static Dynamic letterat_dyn();

		static ::String mid( ::String currentstring,hx::Null< int >  start,hx::Null< int >  length);
		static Dynamic mid_dyn();

		static ::String left( ::String currentstring,hx::Null< int >  length);
		static Dynamic left_dyn();

		static ::String right( ::String currentstring,hx::Null< int >  length);
		static Dynamic right_dyn();

		static ::String reversetext( ::String currentstring);
		static Dynamic reversetext_dyn();

		static ::String replacechar( ::String currentstring,::String ch,::String ch2);
		static Dynamic replacechar_dyn();

		static ::String getlastbranch( ::String currentstring,::String ch);
		static Dynamic getlastbranch_dyn();

		static ::String getroot( ::String currentstring,::String ch);
		static Dynamic getroot_dyn();

		static ::String getbranch( ::String currentstring,::String ch);
		static Dynamic getbranch_dyn();

		static ::String getbetweenbrackets( ::String currentstring);
		static Dynamic getbetweenbrackets_dyn();

		static ::String trimspaces( ::String currentstring);
		static Dynamic trimspaces_dyn();

		static bool isnumber( ::String currentstring);
		static Dynamic isnumber_dyn();

};

} // end namespace haxegon

#endif /* INCLUDED_haxegon_S */ 
