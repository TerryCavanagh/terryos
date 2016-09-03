#ifndef INCLUDED_openfl__internal_stage3D_GLUtils
#define INCLUDED_openfl__internal_stage3D_GLUtils

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(openfl,_internal,stage3D,GLUtils)
namespace openfl{
namespace _internal{
namespace stage3D{


class HXCPP_CLASS_ATTRIBUTES  GLUtils_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef GLUtils_obj OBJ_;
		GLUtils_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="openfl._internal.stage3D.GLUtils")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< GLUtils_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~GLUtils_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("GLUtils","\xcc","\x75","\x9f","\x29"); }

		static void __boot();
		static bool debug;
		static Void CheckGLError( );
		static Dynamic CheckGLError_dyn();

};

} // end namespace openfl
} // end namespace _internal
} // end namespace stage3D

#endif /* INCLUDED_openfl__internal_stage3D_GLUtils */ 
