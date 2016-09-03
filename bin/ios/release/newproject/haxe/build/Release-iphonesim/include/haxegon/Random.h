#ifndef INCLUDED_haxegon_Random
#define INCLUDED_haxegon_Random

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxegon,Random)
namespace haxegon{


class HXCPP_CLASS_ATTRIBUTES  Random_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Random_obj OBJ_;
		Random_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="haxegon.Random")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Random_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Random_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Random","\x23","\x96","\x23","\xec"); }

		static void __boot();
		static bool _bool( );
		static Dynamic _bool_dyn();

		static bool occasional( );
		static Dynamic occasional_dyn();

		static bool rare( );
		static Dynamic rare_dyn();

		static bool chance( int n);
		static Dynamic chance_dyn();

		static int _int( int from,int to);
		static Dynamic _int_dyn();

		static Float _float( Float from,Float to);
		static Dynamic _float_dyn();

		static ::String string( int length,::String charactersToUse);
		static Dynamic string_dyn();

		static ::String pickstring( ::String s1,::String s2,::String s3,::String s4,::String s5,::String s6,::String s7,::String s8,::String s9,::String s10,::String s11,::String s12);
		static Dynamic pickstring_dyn();

		static int pickint( int s1,int s2,Dynamic s3,Dynamic s4,Dynamic s5,Dynamic s6,Dynamic s7,Dynamic s8,Dynamic s9,Dynamic s10,Dynamic s11,Dynamic s12);
		static Dynamic pickint_dyn();

		static Float pickfloat( Float s1,Float s2,Dynamic s3,Dynamic s4,Dynamic s5,Dynamic s6,Dynamic s7,Dynamic s8,Dynamic s9,Dynamic s10,Dynamic s11,Dynamic s12);
		static Dynamic pickfloat_dyn();

		static Dynamic pick( cpp::ArrayBase arr);
		static Dynamic pick_dyn();

		static Float random( );
		static Dynamic random_dyn();

		static Void setseed( int s);
		static Dynamic setseed_dyn();

		static int temp;
		static int seed;
};

} // end namespace haxegon

#endif /* INCLUDED_haxegon_Random */ 
