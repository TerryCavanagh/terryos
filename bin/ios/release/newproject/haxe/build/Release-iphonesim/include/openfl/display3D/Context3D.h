#ifndef INCLUDED_openfl_display3D_Context3D
#define INCLUDED_openfl_display3D_Context3D

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS3(lime,graphics,opengl,GLFramebuffer)
HX_DECLARE_CLASS3(lime,graphics,opengl,GLObject)
HX_DECLARE_CLASS3(lime,graphics,opengl,GLRenderbuffer)
HX_DECLARE_CLASS2(lime,utils,ArrayBufferView)
HX_DECLARE_CLASS2(openfl,_Vector,FloatVector)
HX_DECLARE_CLASS2(openfl,_Vector,IVector)
HX_DECLARE_CLASS2(openfl,_Vector,IntVector)
HX_DECLARE_CLASS2(openfl,_Vector,ObjectVector)
HX_DECLARE_CLASS3(openfl,_internal,renderer,RenderSession)
HX_DECLARE_CLASS3(openfl,_internal,stage3D,Context3DStateCache)
HX_DECLARE_CLASS3(openfl,_internal,stage3D,SamplerState)
HX_DECLARE_CLASS2(openfl,display,BitmapData)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,Stage3D)
HX_DECLARE_CLASS2(openfl,display3D,Context3D)
HX_DECLARE_CLASS2(openfl,display3D,IndexBuffer3D)
HX_DECLARE_CLASS2(openfl,display3D,Program3D)
HX_DECLARE_CLASS2(openfl,display3D,VertexBuffer3D)
HX_DECLARE_CLASS3(openfl,display3D,textures,CubeTexture)
HX_DECLARE_CLASS3(openfl,display3D,textures,RectangleTexture)
HX_DECLARE_CLASS3(openfl,display3D,textures,Texture)
HX_DECLARE_CLASS3(openfl,display3D,textures,TextureBase)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,geom,Matrix3D)
HX_DECLARE_CLASS2(openfl,geom,Rectangle)
HX_DECLARE_CLASS2(openfl,utils,ByteArrayData)
HX_DECLARE_CLASS2(openfl,utils,IDataInput)
HX_DECLARE_CLASS2(openfl,utils,IDataOutput)
namespace openfl{
namespace display3D{


class HXCPP_CLASS_ATTRIBUTES  Context3D_obj : public ::openfl::events::EventDispatcher_obj{
	public:
		typedef ::openfl::events::EventDispatcher_obj super;
		typedef Context3D_obj OBJ_;
		Context3D_obj();
		Void __construct(::openfl::display::Stage3D stage3D,::openfl::_internal::renderer::RenderSession renderSession);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="openfl.display3D.Context3D")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Context3D_obj > __new(::openfl::display::Stage3D stage3D,::openfl::_internal::renderer::RenderSession renderSession);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Context3D_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Context3D","\x40","\x3c","\xcf","\xb8"); }

		static void __boot();
		static bool supportsVideoTexture;
		static int MAX_SAMPLERS;
		static int MAX_ATTRIBUTES;
		static int MAX_PROGRAM_REGISTERS;
		static ::openfl::_internal::stage3D::Context3DStateCache __stateCache;
		int backBufferHeight;
		int backBufferWidth;
		::String driverInfo;
		bool enableErrorChecking;
		int maxBackBufferHeight;
		int maxBackBufferWidth;
		Dynamic profile;
		int totalGPUMemory;
		int __backBufferAntiAlias;
		bool __backBufferEnableDepthAndStencil;
		bool __backBufferWantsBestResolution;
		::lime::graphics::opengl::GLRenderbuffer __depthRenderBuffer;
		::lime::graphics::opengl::GLRenderbuffer __depthStencilRenderBuffer;
		::lime::utils::ArrayBufferView __fragmentConstants;
		::lime::graphics::opengl::GLFramebuffer __framebuffer;
		int __frameCount;
		::lime::utils::ArrayBufferView __positionScale;
		::openfl::display3D::Program3D __program;
		::openfl::_internal::renderer::RenderSession __renderSession;
		::openfl::display3D::textures::TextureBase __renderToTexture;
		bool __rttDepthAndStencil;
		int __samplerDirty;
		::openfl::_Vector::ObjectVector __samplerTextures;
		Array< ::Dynamic > __samplerStates;
		::openfl::geom::Rectangle __scissorRectangle;
		::openfl::display::Stage3D __stage3D;
		::openfl::_Vector::IntVector __stats;
		::openfl::_Vector::IntVector __statsCache;
		Dynamic __stencilCompareMode;
		int __stencilRef;
		int __stencilReadMask;
		::lime::graphics::opengl::GLRenderbuffer __stencilRenderBuffer;
		bool __supportsPackedDepthStencil;
		::lime::utils::ArrayBufferView __vertexConstants;
		virtual Void clear( hx::Null< Float >  red,hx::Null< Float >  green,hx::Null< Float >  blue,hx::Null< Float >  alpha,hx::Null< Float >  depth,hx::Null< int >  stencil,hx::Null< int >  mask);
		Dynamic clear_dyn();

		virtual Void configureBackBuffer( int width,int height,int antiAlias,hx::Null< bool >  enableDepthAndStencil,hx::Null< bool >  wantsBestResolution,hx::Null< bool >  wantsBestResolutionOnBrowserZoom);
		Dynamic configureBackBuffer_dyn();

		virtual ::openfl::display3D::textures::CubeTexture createCubeTexture( int size,Dynamic format,bool optimizeForRenderToTexture,hx::Null< int >  streamingLevels);
		Dynamic createCubeTexture_dyn();

		virtual ::openfl::display3D::IndexBuffer3D createIndexBuffer( int numIndices,Dynamic bufferUsage);
		Dynamic createIndexBuffer_dyn();

		virtual ::openfl::display3D::Program3D createProgram( );
		Dynamic createProgram_dyn();

		virtual ::openfl::display3D::textures::RectangleTexture createRectangleTexture( int width,int height,Dynamic format,bool optimizeForRenderToTexture);
		Dynamic createRectangleTexture_dyn();

		virtual ::openfl::display3D::textures::Texture createTexture( int width,int height,Dynamic format,bool optimizeForRenderToTexture,hx::Null< int >  streamingLevels);
		Dynamic createTexture_dyn();

		virtual ::openfl::display3D::VertexBuffer3D createVertexBuffer( int numVertices,int data32PerVertex,Dynamic bufferUsage);
		Dynamic createVertexBuffer_dyn();

		virtual Void dispose( );
		Dynamic dispose_dyn();

		virtual Void drawToBitmapData( ::openfl::display::BitmapData destination);
		Dynamic drawToBitmapData_dyn();

		virtual Void drawTriangles( ::openfl::display3D::IndexBuffer3D indexBuffer,hx::Null< int >  firstIndex,hx::Null< int >  numTriangles);
		Dynamic drawTriangles_dyn();

		virtual Void present( );
		Dynamic present_dyn();

		virtual Void setBlendFactors( Dynamic sourceFactor,Dynamic destinationFactor);
		Dynamic setBlendFactors_dyn();

		virtual Void setColorMask( bool red,bool green,bool blue,bool alpha);
		Dynamic setColorMask_dyn();

		virtual Void setCulling( Dynamic triangleFaceToCull);
		Dynamic setCulling_dyn();

		virtual Void setDepthTest( bool depthMask,Dynamic passCompareMode);
		Dynamic setDepthTest_dyn();

		virtual Void setProgram( ::openfl::display3D::Program3D program);
		Dynamic setProgram_dyn();

		virtual Void setProgramConstantsFromByteArray( Dynamic programType,int firstRegister,int numRegisters,::openfl::utils::ByteArrayData data,int byteArrayOffset);
		Dynamic setProgramConstantsFromByteArray_dyn();

		virtual Void setProgramConstantsFromMatrix( Dynamic programType,int firstRegister,::openfl::geom::Matrix3D matrix,hx::Null< bool >  transposedMatrix);
		Dynamic setProgramConstantsFromMatrix_dyn();

		virtual Void setProgramConstantsFromVector( Dynamic programType,int firstRegister,::openfl::_Vector::FloatVector data,hx::Null< int >  numRegisters);
		Dynamic setProgramConstantsFromVector_dyn();

		virtual Void setRenderToBackBuffer( );
		Dynamic setRenderToBackBuffer_dyn();

		virtual Void setRenderToTexture( ::openfl::display3D::textures::TextureBase texture,hx::Null< bool >  enableDepthAndStencil,hx::Null< int >  antiAlias,hx::Null< int >  surfaceSelector);
		Dynamic setRenderToTexture_dyn();

		virtual Void setSamplerStateAt( int sampler,Dynamic wrap,Dynamic filter,Dynamic mipfilter);
		Dynamic setSamplerStateAt_dyn();

		virtual Void setScissorRectangle( ::openfl::geom::Rectangle rectangle);
		Dynamic setScissorRectangle_dyn();

		virtual Void setStencilActions( Dynamic triangleFace,Dynamic compareMode,Dynamic actionOnBothPass,Dynamic actionOnDepthFail,Dynamic actionOnDepthPassStencilFail);
		Dynamic setStencilActions_dyn();

		virtual Void setStencilReferenceValue( int referenceValue,hx::Null< int >  readMask,hx::Null< int >  writeMask);
		Dynamic setStencilReferenceValue_dyn();

		virtual Void setTextureAt( int sampler,::openfl::display3D::textures::TextureBase texture);
		Dynamic setTextureAt_dyn();

		virtual Void setVertexBufferAt( int index,::openfl::display3D::VertexBuffer3D buffer,hx::Null< int >  bufferOffset,Dynamic format);
		Dynamic setVertexBufferAt_dyn();

		virtual Void __flushSamplerState( );
		Dynamic __flushSamplerState_dyn();

		virtual int __getGLCompareMode( Dynamic compareMode);
		Dynamic __getGLCompareMode_dyn();

		virtual int __getGLStencilAction( Dynamic stencilAction);
		Dynamic __getGLStencilAction_dyn();

		virtual bool __hasGLExtension( ::String name);
		Dynamic __hasGLExtension_dyn();

		virtual Void __setViewport( int originX,int originY,int width,int height);
		Dynamic __setViewport_dyn();

		virtual int __statsAdd( int stat,int value);
		Dynamic __statsAdd_dyn();

		virtual Void __statsClear( int stat);
		Dynamic __statsClear_dyn();

		virtual Void __statsDecrement( int stat);
		Dynamic __statsDecrement_dyn();

		virtual Void __statsIncrement( int stat);
		Dynamic __statsIncrement_dyn();

		virtual Void __statsSendToTelemetry( );
		Dynamic __statsSendToTelemetry_dyn();

		virtual int __statsSubtract( int stat,int value);
		Dynamic __statsSubtract_dyn();

		virtual Void __updateDepthAndStencilState( );
		Dynamic __updateDepthAndStencilState_dyn();

		virtual Void __updateBlendFactors( );
		Dynamic __updateBlendFactors_dyn();

		virtual Void __updateScissorRectangle( );
		Dynamic __updateScissorRectangle_dyn();

		virtual Void __updateBackbufferViewport( );
		Dynamic __updateBackbufferViewport_dyn();

		virtual bool set_enableErrorChecking( bool value);
		Dynamic set_enableErrorChecking_dyn();

};

} // end namespace openfl
} // end namespace display3D

#endif /* INCLUDED_openfl_display3D_Context3D */ 
