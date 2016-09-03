#ifndef INCLUDED_haxe__Int64_Int64_Impl_
#define INCLUDED_haxe__Int64_Int64_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,_Int64,Int64_Impl_)
namespace haxe{
namespace _Int64{


class HXCPP_CLASS_ATTRIBUTES  Int64_Impl__obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Int64_Impl__obj OBJ_;
		Int64_Impl__obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="haxe._Int64.Int64_Impl_")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Int64_Impl__obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Int64_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Int64_Impl_","\x2d","\x1a","\x59","\xc4"); }

		static cpp::Int64Struct ofInt( int x);
		static Dynamic ofInt_dyn();

};

} // end namespace haxe
} // end namespace _Int64

#endif /* INCLUDED_haxe__Int64_Int64_Impl_ */ 
