#ifndef INCLUDED_openfl_display_BitmapData
#define INCLUDED_openfl_display_BitmapData

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(lime,graphics,GLRenderContext)
HX_DECLARE_CLASS2(lime,graphics,Image)
HX_DECLARE_CLASS3(lime,graphics,opengl,GLBuffer)
HX_DECLARE_CLASS3(lime,graphics,opengl,GLObject)
HX_DECLARE_CLASS3(lime,graphics,opengl,GLTexture)
HX_DECLARE_CLASS2(lime,utils,ArrayBufferView)
HX_DECLARE_CLASS2(openfl,_Vector,IVector)
HX_DECLARE_CLASS2(openfl,_Vector,IntVector)
HX_DECLARE_CLASS3(openfl,_internal,renderer,RenderSession)
HX_DECLARE_CLASS2(openfl,display,BitmapData)
HX_DECLARE_CLASS2(openfl,display,Graphics)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,filters,BitmapFilter)
HX_DECLARE_CLASS2(openfl,geom,ColorTransform)
HX_DECLARE_CLASS2(openfl,geom,Matrix)
HX_DECLARE_CLASS2(openfl,geom,Point)
HX_DECLARE_CLASS2(openfl,geom,Rectangle)
HX_DECLARE_CLASS2(openfl,utils,ByteArrayData)
HX_DECLARE_CLASS2(openfl,utils,IDataInput)
HX_DECLARE_CLASS2(openfl,utils,IDataOutput)
namespace openfl{
namespace display{


class HXCPP_CLASS_ATTRIBUTES  BitmapData_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef BitmapData_obj OBJ_;
		BitmapData_obj();
		Void __construct(int width,int height,hx::Null< bool >  __o_transparent,hx::Null< int >  __o_fillColor);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="openfl.display.BitmapData")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< BitmapData_obj > __new(int width,int height,hx::Null< bool >  __o_transparent,hx::Null< int >  __o_fillColor);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~BitmapData_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		hx::Object *__ToInterface(const hx::type_info &inType);
		operator ::openfl::display::IBitmapDrawable_obj *();
		::String __ToString() const { return HX_HCSTRING("BitmapData","\xd9","\xb9","\x71","\x2a"); }

		static void __boot();
		static Dynamic __isGLES;
		static ::openfl::display::BitmapData fromBase64( ::String base64,::String type,Dynamic onload);
		static Dynamic fromBase64_dyn();

		static ::openfl::display::BitmapData fromBytes( ::openfl::utils::ByteArrayData bytes,::openfl::utils::ByteArrayData rawAlpha,Dynamic onload);
		static Dynamic fromBytes_dyn();

		static ::openfl::display::BitmapData fromFile( ::String path,Dynamic onload,Dynamic onerror);
		static Dynamic fromFile_dyn();

		static ::openfl::display::BitmapData fromImage( ::lime::graphics::Image image,hx::Null< bool >  transparent);
		static Dynamic fromImage_dyn();

		int height;
		::lime::graphics::Image image;
		::openfl::geom::Rectangle rect;
		bool transparent;
		int width;
		::openfl::geom::Matrix __worldTransform;
		::openfl::geom::ColorTransform __worldColorTransform;
		Dynamic __blendMode;
		::lime::graphics::opengl::GLBuffer __buffer;
		Float __bufferAlpha;
		::lime::utils::ArrayBufferView __bufferData;
		bool __isValid;
		Dynamic __surface;
		::lime::graphics::opengl::GLTexture __texture;
		int __textureVersion;
		virtual Void applyFilter( ::openfl::display::BitmapData sourceBitmapData,::openfl::geom::Rectangle sourceRect,::openfl::geom::Point destPoint,::openfl::filters::BitmapFilter filter);
		Dynamic applyFilter_dyn();

		virtual ::openfl::display::BitmapData clone( );
		Dynamic clone_dyn();

		virtual Void colorTransform( ::openfl::geom::Rectangle rect,::openfl::geom::ColorTransform colorTransform);
		Dynamic colorTransform_dyn();

		virtual Dynamic compare( ::openfl::display::BitmapData otherBitmapData);
		Dynamic compare_dyn();

		virtual Void copyChannel( ::openfl::display::BitmapData sourceBitmapData,::openfl::geom::Rectangle sourceRect,::openfl::geom::Point destPoint,int sourceChannel,int destChannel);
		Dynamic copyChannel_dyn();

		virtual Void copyPixels( ::openfl::display::BitmapData sourceBitmapData,::openfl::geom::Rectangle sourceRect,::openfl::geom::Point destPoint,::openfl::display::BitmapData alphaBitmapData,::openfl::geom::Point alphaPoint,hx::Null< bool >  mergeAlpha);
		Dynamic copyPixels_dyn();

		virtual Void dispose( );
		Dynamic dispose_dyn();

		virtual Void draw( ::openfl::display::IBitmapDrawable source,::openfl::geom::Matrix matrix,::openfl::geom::ColorTransform colorTransform,Dynamic blendMode,::openfl::geom::Rectangle clipRect,hx::Null< bool >  smoothing);
		Dynamic draw_dyn();

		virtual Void drawWithQuality( ::openfl::display::IBitmapDrawable source,::openfl::geom::Matrix matrix,::openfl::geom::ColorTransform colorTransform,Dynamic blendMode,::openfl::geom::Rectangle clipRect,hx::Null< bool >  smoothing,Dynamic quality);
		Dynamic drawWithQuality_dyn();

		virtual ::openfl::utils::ByteArrayData encode( ::openfl::geom::Rectangle rect,Dynamic compressor,::openfl::utils::ByteArrayData byteArray);
		Dynamic encode_dyn();

		virtual Void fillRect( ::openfl::geom::Rectangle rect,int color);
		Dynamic fillRect_dyn();

		virtual Void floodFill( int x,int y,int color);
		Dynamic floodFill_dyn();

		virtual ::openfl::geom::Rectangle generateFilterRect( ::openfl::geom::Rectangle sourceRect,::openfl::filters::BitmapFilter filter);
		Dynamic generateFilterRect_dyn();

		virtual ::lime::graphics::opengl::GLBuffer getBuffer( ::lime::graphics::GLRenderContext gl,Float alpha);
		Dynamic getBuffer_dyn();

		virtual ::openfl::geom::Rectangle getColorBoundsRect( int mask,int color,hx::Null< bool >  findColor);
		Dynamic getColorBoundsRect_dyn();

		virtual int getPixel( int x,int y);
		Dynamic getPixel_dyn();

		virtual int getPixel32( int x,int y);
		Dynamic getPixel32_dyn();

		virtual ::openfl::utils::ByteArrayData getPixels( ::openfl::geom::Rectangle rect);
		Dynamic getPixels_dyn();

		virtual Dynamic getSurface( );
		Dynamic getSurface_dyn();

		virtual ::lime::graphics::opengl::GLTexture getTexture( ::lime::graphics::GLRenderContext gl);
		Dynamic getTexture_dyn();

		virtual ::openfl::_Vector::IntVector getVector( ::openfl::geom::Rectangle rect);
		Dynamic getVector_dyn();

		virtual Array< ::Dynamic > histogram( ::openfl::geom::Rectangle hRect);
		Dynamic histogram_dyn();

		virtual bool hitTest( ::openfl::geom::Point firstPoint,int firstAlphaThreshold,Dynamic secondObject,::openfl::geom::Point secondBitmapDataPoint,hx::Null< int >  secondAlphaThreshold);
		Dynamic hitTest_dyn();

		virtual Void lock( );
		Dynamic lock_dyn();

		virtual Void merge( ::openfl::display::BitmapData sourceBitmapData,::openfl::geom::Rectangle sourceRect,::openfl::geom::Point destPoint,int redMultiplier,int greenMultiplier,int blueMultiplier,int alphaMultiplier);
		Dynamic merge_dyn();

		virtual Void noise( int randomSeed,hx::Null< int >  low,hx::Null< int >  high,hx::Null< int >  channelOptions,hx::Null< bool >  grayScale);
		Dynamic noise_dyn();

		virtual Void paletteMap( ::openfl::display::BitmapData sourceBitmapData,::openfl::geom::Rectangle sourceRect,::openfl::geom::Point destPoint,Array< int > redArray,Array< int > greenArray,Array< int > blueArray,Array< int > alphaArray);
		Dynamic paletteMap_dyn();

		virtual Void perlinNoise( Float baseX,Float baseY,int numOctaves,int randomSeed,bool stitch,bool fractalNoise,hx::Null< int >  channelOptions,hx::Null< bool >  grayScale,Array< ::Dynamic > offsets);
		Dynamic perlinNoise_dyn();

		virtual Void scroll( int x,int y);
		Dynamic scroll_dyn();

		virtual Void setPixel( int x,int y,int color);
		Dynamic setPixel_dyn();

		virtual Void setPixel32( int x,int y,int color);
		Dynamic setPixel32_dyn();

		virtual Void setPixels( ::openfl::geom::Rectangle rect,::openfl::utils::ByteArrayData byteArray);
		Dynamic setPixels_dyn();

		virtual Void setVector( ::openfl::geom::Rectangle rect,::openfl::_Vector::IntVector inputVector);
		Dynamic setVector_dyn();

		virtual int threshold( ::openfl::display::BitmapData sourceBitmapData,::openfl::geom::Rectangle sourceRect,::openfl::geom::Point destPoint,::String operation,int threshold,hx::Null< int >  color,hx::Null< int >  mask,hx::Null< bool >  copySource);
		Dynamic threshold_dyn();

		virtual Void unlock( ::openfl::geom::Rectangle changeRect);
		Dynamic unlock_dyn();

		virtual Void __fromBase64( ::String base64,::String type,Dynamic onload);
		Dynamic __fromBase64_dyn();

		virtual Void __fromBytes( ::openfl::utils::ByteArrayData bytes,::openfl::utils::ByteArrayData rawAlpha,Dynamic onload);
		Dynamic __fromBytes_dyn();

		virtual Void __fromFile( ::String path,Dynamic onload,Dynamic onerror);
		Dynamic __fromFile_dyn();

		virtual Void __fromImage( ::lime::graphics::Image image);
		Dynamic __fromImage_dyn();

		virtual Void __renderCairo( ::openfl::_internal::renderer::RenderSession renderSession);
		Dynamic __renderCairo_dyn();

		virtual Void __renderCairoMask( ::openfl::_internal::renderer::RenderSession renderSession);
		Dynamic __renderCairoMask_dyn();

		virtual Void __renderCanvas( ::openfl::_internal::renderer::RenderSession renderSession);
		Dynamic __renderCanvas_dyn();

		virtual Void __renderCanvasMask( ::openfl::_internal::renderer::RenderSession renderSession);
		Dynamic __renderCanvasMask_dyn();

		virtual Void __renderGL( ::openfl::_internal::renderer::RenderSession renderSession);
		Dynamic __renderGL_dyn();

		virtual Void __resize( int width,int height);
		Dynamic __resize_dyn();

		virtual Void __sync( );
		Dynamic __sync_dyn();

		virtual Void __updateChildren( bool transformOnly);
		Dynamic __updateChildren_dyn();

		virtual Void __updateMask( ::openfl::display::Graphics maskGraphics);
		Dynamic __updateMask_dyn();

		virtual Void __updateTransforms( ::openfl::geom::Matrix overrideTransform);
		Dynamic __updateTransforms_dyn();

};

} // end namespace openfl
} // end namespace display

#endif /* INCLUDED_openfl_display_BitmapData */ 
