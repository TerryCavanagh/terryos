#ifndef INCLUDED_openfl_display3D__Program3D_Uniform
#define INCLUDED_openfl_display3D__Program3D_Uniform

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(lime,utils,ArrayBufferView)
HX_DECLARE_CLASS3(openfl,display3D,_Program3D,Uniform)
namespace openfl{
namespace display3D{
namespace _Program3D{


class HXCPP_CLASS_ATTRIBUTES  Uniform_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Uniform_obj OBJ_;
		Uniform_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="openfl.display3D._Program3D.Uniform")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Uniform_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Uniform_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Uniform","\x14","\x69","\xb5","\x82"); }

		::String name;
		int location;
		int type;
		int size;
		::lime::utils::ArrayBufferView regData;
		int regIndex;
		int regCount;
		bool isDirty;
		virtual Void flush( );
		Dynamic flush_dyn();

		virtual ::lime::utils::ArrayBufferView __getRegisters( int index,int size);
		Dynamic __getRegisters_dyn();

};

} // end namespace openfl
} // end namespace display3D
} // end namespace _Program3D

#endif /* INCLUDED_openfl_display3D__Program3D_Uniform */ 
