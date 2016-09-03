#ifndef INCLUDED_openfl_display_Graphics
#define INCLUDED_openfl_display_Graphics

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(lime,graphics,cairo,Cairo)
HX_DECLARE_CLASS2(openfl,_Vector,FloatVector)
HX_DECLARE_CLASS2(openfl,_Vector,IVector)
HX_DECLARE_CLASS2(openfl,_Vector,IntVector)
HX_DECLARE_CLASS2(openfl,_Vector,ObjectVector)
HX_DECLARE_CLASS3(openfl,_internal,renderer,DrawCommandBuffer)
HX_DECLARE_CLASS2(openfl,display,BitmapData)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,Graphics)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,geom,Matrix)
HX_DECLARE_CLASS2(openfl,geom,Rectangle)
namespace openfl{
namespace display{


class HXCPP_CLASS_ATTRIBUTES  Graphics_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Graphics_obj OBJ_;
		Graphics_obj();
		Void __construct(::openfl::display::DisplayObject owner);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="openfl.display.Graphics")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Graphics_obj > __new(::openfl::display::DisplayObject owner);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Graphics_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Graphics","\xeb","\xb4","\x19","\xec"); }

		::openfl::geom::Rectangle __bounds;
		::openfl::_internal::renderer::DrawCommandBuffer __commands;
		bool __dirty;
		int __height;
		Float __positionX;
		Float __positionY;
		::openfl::geom::Matrix __renderTransform;
		Float __strokePadding;
		bool __transformDirty;
		bool __visible;
		::openfl::display::DisplayObject __owner;
		int __width;
		::openfl::geom::Matrix __worldTransform;
		::lime::graphics::cairo::Cairo __cairo;
		::openfl::display::BitmapData __bitmap;
		virtual Void beginBitmapFill( ::openfl::display::BitmapData bitmap,::openfl::geom::Matrix matrix,hx::Null< bool >  repeat,hx::Null< bool >  smooth);
		Dynamic beginBitmapFill_dyn();

		virtual Void beginFill( hx::Null< int >  color,hx::Null< Float >  alpha);
		Dynamic beginFill_dyn();

		virtual Void beginGradientFill( Dynamic type,Array< int > colors,Array< Float > alphas,Array< int > ratios,::openfl::geom::Matrix matrix,Dynamic spreadMethod,Dynamic interpolationMethod,hx::Null< Float >  focalPointRatio);
		Dynamic beginGradientFill_dyn();

		virtual Void clear( );
		Dynamic clear_dyn();

		virtual Void copyFrom( ::openfl::display::Graphics sourceGraphics);
		Dynamic copyFrom_dyn();

		virtual Void cubicCurveTo( Float controlX1,Float controlY1,Float controlX2,Float controlY2,Float anchorX,Float anchorY);
		Dynamic cubicCurveTo_dyn();

		virtual Void curveTo( Float controlX,Float controlY,Float anchorX,Float anchorY);
		Dynamic curveTo_dyn();

		virtual Void drawCircle( Float x,Float y,Float radius);
		Dynamic drawCircle_dyn();

		virtual Void drawEllipse( Float x,Float y,Float width,Float height);
		Dynamic drawEllipse_dyn();

		virtual Void drawGraphicsData( ::openfl::_Vector::ObjectVector graphicsData);
		Dynamic drawGraphicsData_dyn();

		virtual Void drawPath( ::openfl::_Vector::IntVector commands,::openfl::_Vector::FloatVector data,Dynamic winding);
		Dynamic drawPath_dyn();

		virtual Void drawRect( Float x,Float y,Float width,Float height);
		Dynamic drawRect_dyn();

		virtual Void drawRoundRect( Float x,Float y,Float width,Float height,Float ellipseWidth,Dynamic ellipseHeight);
		Dynamic drawRoundRect_dyn();

		virtual Void drawRoundRectComplex( Float x,Float y,Float width,Float height,Float topLeftRadius,Float topRightRadius,Float bottomLeftRadius,Float bottomRightRadius);
		Dynamic drawRoundRectComplex_dyn();

		virtual Void drawTriangles( ::openfl::_Vector::FloatVector vertices,::openfl::_Vector::IntVector indices,::openfl::_Vector::FloatVector uvtData,Dynamic culling);
		Dynamic drawTriangles_dyn();

		virtual Void endFill( );
		Dynamic endFill_dyn();

		virtual Void lineBitmapStyle( ::openfl::display::BitmapData bitmap,::openfl::geom::Matrix matrix,hx::Null< bool >  repeat,hx::Null< bool >  smooth);
		Dynamic lineBitmapStyle_dyn();

		virtual Void lineGradientStyle( Dynamic type,Array< int > colors,Array< Float > alphas,Array< int > ratios,::openfl::geom::Matrix matrix,Dynamic spreadMethod,Dynamic interpolationMethod,hx::Null< Float >  focalPointRatio);
		Dynamic lineGradientStyle_dyn();

		virtual Void lineStyle( Dynamic thickness,hx::Null< int >  color,hx::Null< Float >  alpha,hx::Null< bool >  pixelHinting,Dynamic scaleMode,Dynamic caps,Dynamic joints,hx::Null< Float >  miterLimit);
		Dynamic lineStyle_dyn();

		virtual Void lineTo( Float x,Float y);
		Dynamic lineTo_dyn();

		virtual Void moveTo( Float x,Float y);
		Dynamic moveTo_dyn();

		virtual ::openfl::_Vector::ObjectVector readGraphicsData( hx::Null< bool >  recurse);
		Dynamic readGraphicsData_dyn();

		virtual Float __calculateBezierCubicPoint( Float t,Float p1,Float p2,Float p3,Float p4);
		Dynamic __calculateBezierCubicPoint_dyn();

		virtual Float __calculateBezierQuadPoint( Float t,Float p1,Float p2,Float p3);
		Dynamic __calculateBezierQuadPoint_dyn();

		virtual Void __cleanup( );
		Dynamic __cleanup_dyn();

		virtual Void __getBounds( ::openfl::geom::Rectangle rect,::openfl::geom::Matrix matrix);
		Dynamic __getBounds_dyn();

		virtual bool __hitTest( Float x,Float y,bool shapeFlag,::openfl::geom::Matrix matrix);
		Dynamic __hitTest_dyn();

		virtual Void __inflateBounds( Float x,Float y);
		Dynamic __inflateBounds_dyn();

		virtual Void __readGraphicsData( ::openfl::_Vector::ObjectVector graphicsData);
		Dynamic __readGraphicsData_dyn();

		virtual Void __update( );
		Dynamic __update_dyn();

		virtual bool set___dirty( bool value);
		Dynamic set___dirty_dyn();

};

} // end namespace openfl
} // end namespace display

#endif /* INCLUDED_openfl_display_Graphics */ 
