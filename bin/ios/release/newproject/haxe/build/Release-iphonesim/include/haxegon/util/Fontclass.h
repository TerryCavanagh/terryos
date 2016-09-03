#ifndef INCLUDED_haxegon_util_Fontclass
#define INCLUDED_haxegon_util_Fontclass

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxegon,bitmapFont,BitmapTextField)
HX_DECLARE_CLASS2(haxegon,util,Fontclass)
HX_DECLARE_CLASS2(openfl,display,BitmapData)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,text,TextField)
namespace haxegon{
namespace util{


class HXCPP_CLASS_ATTRIBUTES  Fontclass_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Fontclass_obj OBJ_;
		Fontclass_obj();
		Void __construct(::String _name,Float _size);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="haxegon.util.Fontclass")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Fontclass_obj > __new(::String _name,Float _size);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Fontclass_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Fontclass","\xe9","\x8b","\xd9","\x02"); }

		virtual Void loadbitmapfont( ::String _name,Float _size);
		Dynamic loadbitmapfont_dyn();

		virtual Void loadttffont( ::String _name,Float _size);
		Dynamic loadttffont_dyn();

		virtual Void clearbitmap( );
		Dynamic clearbitmap_dyn();

		::haxegon::bitmapFont::BitmapTextField tf_bitmap;
		::openfl::text::TextField tf_ttf;
		::openfl::display::BitmapData tfbitmap;
		::String name;
		::String type;
		Float size;
		Float height;
};

} // end namespace haxegon
} // end namespace util

#endif /* INCLUDED_haxegon_util_Fontclass */ 
