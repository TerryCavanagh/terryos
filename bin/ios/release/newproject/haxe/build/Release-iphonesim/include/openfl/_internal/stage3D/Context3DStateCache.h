#ifndef INCLUDED_openfl__internal_stage3D_Context3DStateCache
#define INCLUDED_openfl__internal_stage3D_Context3DStateCache

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(openfl,_Vector,FloatVector)
HX_DECLARE_CLASS2(openfl,_Vector,IVector)
HX_DECLARE_CLASS3(openfl,_internal,stage3D,Context3DStateCache)
HX_DECLARE_CLASS2(openfl,display3D,Program3D)
namespace openfl{
namespace _internal{
namespace stage3D{


class HXCPP_CLASS_ATTRIBUTES  Context3DStateCache_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Context3DStateCache_obj OBJ_;
		Context3DStateCache_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="openfl._internal.stage3D.Context3DStateCache")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Context3DStateCache_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Context3DStateCache_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Context3DStateCache","\xd1","\x06","\xfa","\x71"); }

		static void __boot();
		static bool disableCache;
		static int MAX_NUM_REGISTERS;
		static int FLOATS_PER_REGISTER;
		Dynamic _srcBlendFactor;
		Dynamic _destBlendFactor;
		bool _deptTestEnabled;
		bool _depthTestMask;
		Dynamic _depthTestCompareMode;
		::openfl::display3D::Program3D _program;
		Dynamic _cullingMode;
		int _activeTexture;
		int _activeVertexArray;
		int _viewportOriginX;
		int _viewportOriginY;
		int _viewportWidth;
		int _viewportHeight;
		::openfl::_Vector::FloatVector _registers;
		virtual Void clearSettings( );
		Dynamic clearSettings_dyn();

		virtual Void clearRegisters( );
		Dynamic clearRegisters_dyn();

		virtual bool updateBlendSrcFactor( Dynamic factor);
		Dynamic updateBlendSrcFactor_dyn();

		virtual bool updateBlendDestFactor( Dynamic factor);
		Dynamic updateBlendDestFactor_dyn();

		virtual bool updateDepthTestEnabled( bool test);
		Dynamic updateDepthTestEnabled_dyn();

		virtual bool updateDepthTestMask( bool mask);
		Dynamic updateDepthTestMask_dyn();

		virtual bool updateDepthCompareMode( Dynamic mode);
		Dynamic updateDepthCompareMode_dyn();

		virtual bool updateProgram3D( ::openfl::display3D::Program3D program3d);
		Dynamic updateProgram3D_dyn();

		virtual bool updateCullingMode( Dynamic cullMode);
		Dynamic updateCullingMode_dyn();

		virtual bool updateActiveTextureSample( int texture);
		Dynamic updateActiveTextureSample_dyn();

		virtual bool updateActiveVertexArray( int vertexArray);
		Dynamic updateActiveVertexArray_dyn();

		virtual bool updateViewport( int originX,int originY,int width,int height);
		Dynamic updateViewport_dyn();

		virtual bool updateRegisters( ::openfl::_Vector::FloatVector mTemp,int startRegister,int numRegisters);
		Dynamic updateRegisters_dyn();

};

} // end namespace openfl
} // end namespace _internal
} // end namespace stage3D

#endif /* INCLUDED_openfl__internal_stage3D_Context3DStateCache */ 
