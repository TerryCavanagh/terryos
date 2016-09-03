#ifndef INCLUDED_haxegon_Mouse
#define INCLUDED_haxegon_Mouse

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxegon,Mouse)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,events,MouseEvent)
namespace haxegon{


class HXCPP_CLASS_ATTRIBUTES  Mouse_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Mouse_obj OBJ_;
		Mouse_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="haxegon.Mouse")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Mouse_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Mouse_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Mouse","\x05","\x86","\x92","\x9f"); }

		static void __boot();
		static int x;
		static int y;
		static int oldx;
		static int oldy;
		static int mousewheel;
		static bool cursormoved;
		static bool mouseoffstage;
		static bool isdragging;
		static bool leftheld( );
		static Dynamic leftheld_dyn();

		static bool leftclick( );
		static Dynamic leftclick_dyn();

		static bool leftreleased( );
		static Dynamic leftreleased_dyn();

		static bool rightheld( );
		static Dynamic rightheld_dyn();

		static bool rightclick( );
		static Dynamic rightclick_dyn();

		static bool rightreleased( );
		static Dynamic rightreleased_dyn();

		static bool middleheld( );
		static Dynamic middleheld_dyn();

		static bool middleclick( );
		static Dynamic middleclick_dyn();

		static bool middlereleased( );
		static Dynamic middlereleased_dyn();

		static Void init( ::openfl::display::DisplayObject stage);
		static Dynamic init_dyn();

		static Void unload( ::openfl::display::DisplayObject stage);
		static Dynamic unload_dyn();

		static Void mouseLeave( ::openfl::events::Event e);
		static Dynamic mouseLeave_dyn();

		static Void mouseOver( ::openfl::events::MouseEvent e);
		static Dynamic mouseOver_dyn();

		static Void mousewheelHandler( ::openfl::events::MouseEvent e);
		static Dynamic mousewheelHandler_dyn();

		static Void visitsite( ::String t);
		static Dynamic visitsite_dyn();

		static Void show( );
		static Dynamic show_dyn();

		static Void hide( );
		static Dynamic hide_dyn();

		static Void update( int X,int Y);
		static Dynamic update_dyn();

		static Void reset( );
		static Dynamic reset_dyn();

		static Void handleRightMouseDown( ::openfl::events::MouseEvent event);
		static Dynamic handleRightMouseDown_dyn();

		static Void handleRightMouseUp( ::openfl::events::MouseEvent event);
		static Dynamic handleRightMouseUp_dyn();

		static Void handleMiddleMouseDown( ::openfl::events::MouseEvent event);
		static Dynamic handleMiddleMouseDown_dyn();

		static Void handleMiddleMouseUp( ::openfl::events::MouseEvent event);
		static Dynamic handleMiddleMouseUp_dyn();

		static Void handleMouseDown( ::openfl::events::MouseEvent event);
		static Dynamic handleMouseDown_dyn();

		static Void handleMouseUp( ::openfl::events::MouseEvent event);
		static Dynamic handleMouseUp_dyn();

		static Void handleDeactivate( ::openfl::events::Event e);
		static Dynamic handleDeactivate_dyn();

		static int _current;
		static int _last;
		static int _middlecurrent;
		static int _middlelast;
		static int _rightcurrent;
		static int _rightlast;
		static ::String gotosite;
};

} // end namespace haxegon

#endif /* INCLUDED_haxegon_Mouse */ 
