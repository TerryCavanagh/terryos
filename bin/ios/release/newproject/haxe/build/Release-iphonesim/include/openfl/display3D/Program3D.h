#ifndef INCLUDED_openfl_display3D_Program3D
#define INCLUDED_openfl_display3D_Program3D

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(List)
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS3(lime,graphics,opengl,GLObject)
HX_DECLARE_CLASS3(lime,graphics,opengl,GLProgram)
HX_DECLARE_CLASS3(lime,graphics,opengl,GLShader)
HX_DECLARE_CLASS2(lime,utils,ArrayBufferView)
HX_DECLARE_CLASS2(openfl,_Vector,IVector)
HX_DECLARE_CLASS2(openfl,_Vector,ObjectVector)
HX_DECLARE_CLASS3(openfl,_internal,stage3D,SamplerState)
HX_DECLARE_CLASS2(openfl,display3D,Context3D)
HX_DECLARE_CLASS2(openfl,display3D,Program3D)
HX_DECLARE_CLASS3(openfl,display3D,_Program3D,Uniform)
HX_DECLARE_CLASS3(openfl,display3D,_Program3D,UniformMap)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,utils,ByteArrayData)
HX_DECLARE_CLASS2(openfl,utils,IDataInput)
HX_DECLARE_CLASS2(openfl,utils,IDataOutput)
namespace openfl{
namespace display3D{


class HXCPP_CLASS_ATTRIBUTES  Program3D_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Program3D_obj OBJ_;
		Program3D_obj();
		Void __construct(::openfl::display3D::Context3D context3D);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="openfl.display3D.Program3D")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Program3D_obj > __new(::openfl::display3D::Context3D context3D);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Program3D_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Program3D","\x15","\x00","\x97","\x7e"); }

		static void __boot();
		static bool verbose;
		::List __alphaSamplerUniforms;
		::openfl::display3D::Context3D __context;
		::lime::graphics::opengl::GLShader __fragmentShaderID;
		::String __fragmentSource;
		::openfl::display3D::_Program3D::UniformMap __fragmentUniformMap;
		int __memUsage;
		::openfl::display3D::_Program3D::Uniform __positionScale;
		::lime::graphics::opengl::GLProgram __programID;
		::openfl::_Vector::ObjectVector __samplerStates;
		::List __samplerUniforms;
		int __samplerUsageMask;
		::List __uniforms;
		::lime::graphics::opengl::GLShader __vertexShaderID;
		::String __vertexSource;
		::openfl::display3D::_Program3D::UniformMap __vertexUniformMap;
		virtual Void dispose( );
		Dynamic dispose_dyn();

		virtual Void upload( ::openfl::utils::ByteArrayData vertexProgram,::openfl::utils::ByteArrayData fragmentProgram);
		Dynamic upload_dyn();

		virtual Void __buildUniformList( );
		Dynamic __buildUniformList_dyn();

		virtual Void __deleteShaders( );
		Dynamic __deleteShaders_dyn();

		virtual Void __flush( );
		Dynamic __flush_dyn();

		virtual ::openfl::_internal::stage3D::SamplerState __getSamplerState( int sampler);
		Dynamic __getSamplerState_dyn();

		virtual Void __markDirty( bool isVertex,int index,int count);
		Dynamic __markDirty_dyn();

		virtual Void __setPositionScale( ::lime::utils::ArrayBufferView positionScale);
		Dynamic __setPositionScale_dyn();

		virtual Void __setSamplerState( int sampler,::openfl::_internal::stage3D::SamplerState state);
		Dynamic __setSamplerState_dyn();

		virtual Void __uploadFromGLSL( ::String vertexShaderSource,::String fragmentShaderSource);
		Dynamic __uploadFromGLSL_dyn();

		virtual Void __use( );
		Dynamic __use_dyn();

};

} // end namespace openfl
} // end namespace display3D

#endif /* INCLUDED_openfl_display3D_Program3D */ 
