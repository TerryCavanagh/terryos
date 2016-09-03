#ifndef INCLUDED_openfl_display3D__Program3D_UniformMap
#define INCLUDED_openfl_display3D__Program3D_UniformMap

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(openfl,_Vector,IVector)
HX_DECLARE_CLASS2(openfl,_Vector,ObjectVector)
HX_DECLARE_CLASS3(openfl,display3D,_Program3D,Uniform)
HX_DECLARE_CLASS3(openfl,display3D,_Program3D,UniformMap)
namespace openfl{
namespace display3D{
namespace _Program3D{


class HXCPP_CLASS_ATTRIBUTES  UniformMap_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef UniformMap_obj OBJ_;
		UniformMap_obj();
		Void __construct(Array< ::Dynamic > list);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="openfl.display3D._Program3D.UniformMap")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< UniformMap_obj > __new(Array< ::Dynamic > list);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~UniformMap_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("UniformMap","\xe8","\x3d","\x45","\xd1"); }

		bool __allDirty;
		bool __anyDirty;
		::openfl::_Vector::ObjectVector __registerLookup;
		Array< ::Dynamic > __uniforms;
		virtual Void flush( );
		Dynamic flush_dyn();

		virtual Void markAllDirty( );
		Dynamic markAllDirty_dyn();

		virtual Void markDirty( int start,int count);
		Dynamic markDirty_dyn();

};

} // end namespace openfl
} // end namespace display3D
} // end namespace _Program3D

#endif /* INCLUDED_openfl_display3D__Program3D_UniformMap */ 
