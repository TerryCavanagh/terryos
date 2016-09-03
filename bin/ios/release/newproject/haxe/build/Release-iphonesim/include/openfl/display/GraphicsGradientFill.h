#ifndef INCLUDED_openfl_display_GraphicsGradientFill
#define INCLUDED_openfl_display_GraphicsGradientFill

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_display_IGraphicsFill
#include <openfl/display/IGraphicsFill.h>
#endif
#ifndef INCLUDED_openfl_display_IGraphicsData
#include <openfl/display/IGraphicsData.h>
#endif
HX_DECLARE_CLASS2(openfl,display,GraphicsDataType)
HX_DECLARE_CLASS2(openfl,display,GraphicsFillType)
HX_DECLARE_CLASS2(openfl,display,GraphicsGradientFill)
HX_DECLARE_CLASS2(openfl,display,IGraphicsData)
HX_DECLARE_CLASS2(openfl,display,IGraphicsFill)
HX_DECLARE_CLASS2(openfl,geom,Matrix)
namespace openfl{
namespace display{


class HXCPP_CLASS_ATTRIBUTES  GraphicsGradientFill_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef GraphicsGradientFill_obj OBJ_;
		GraphicsGradientFill_obj();
		Void __construct(Dynamic type,Array< int > colors,Array< Float > alphas,Array< int > ratios,::openfl::geom::Matrix matrix,Dynamic spreadMethod,Dynamic interpolationMethod,hx::Null< Float >  __o_focalPointRatio);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="openfl.display.GraphicsGradientFill")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< GraphicsGradientFill_obj > __new(Dynamic type,Array< int > colors,Array< Float > alphas,Array< int > ratios,::openfl::geom::Matrix matrix,Dynamic spreadMethod,Dynamic interpolationMethod,hx::Null< Float >  __o_focalPointRatio);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~GraphicsGradientFill_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		hx::Object *__ToInterface(const hx::type_info &inType);
		operator ::openfl::display::IGraphicsFill_obj *();
		operator ::openfl::display::IGraphicsData_obj *();
		::String __ToString() const { return HX_HCSTRING("GraphicsGradientFill","\x1e","\x22","\x2d","\x41"); }

		Array< Float > alphas;
		Array< int > colors;
		Float focalPointRatio;
		Dynamic interpolationMethod;
		::openfl::geom::Matrix matrix;
		Array< int > ratios;
		Dynamic spreadMethod;
		Dynamic type;
		::openfl::display::GraphicsDataType __graphicsDataType;
		::openfl::display::GraphicsFillType __graphicsFillType;
};

} // end namespace openfl
} // end namespace display

#endif /* INCLUDED_openfl_display_GraphicsGradientFill */ 
