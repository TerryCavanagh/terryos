#ifndef INCLUDED_haxegon_Input
#define INCLUDED_haxegon_Input

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,BalancedTree)
HX_DECLARE_CLASS2(haxe,ds,EnumValueMap)
HX_DECLARE_CLASS2(haxe,ds,IntMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS1(haxegon,Input)
HX_DECLARE_CLASS1(haxegon,Key)
HX_DECLARE_CLASS1(haxegon,Keystate)
HX_DECLARE_CLASS2(lime,app,IModule)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Stage)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,events,KeyboardEvent)
HX_DECLARE_CLASS2(openfl,events,TextEvent)
namespace haxegon{


class HXCPP_CLASS_ATTRIBUTES  Input_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Input_obj OBJ_;
		Input_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="haxegon.Input")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Input_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Input_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Input","\xea","\x33","\x4b","\x51"); }

		static void __boot();
		static bool pressed( ::haxegon::Key k);
		static Dynamic pressed_dyn();

		static bool justpressed( ::haxegon::Key k);
		static Dynamic justpressed_dyn();

		static bool justreleased( ::haxegon::Key k);
		static Dynamic justreleased_dyn();

		static Void forcerelease( ::haxegon::Key k);
		static Dynamic forcerelease_dyn();

		static int pressheldtime( ::haxegon::Key k);
		static Dynamic pressheldtime_dyn();

		static bool delaypressed( ::haxegon::Key k,int repeatframes,Dynamic instantreps);
		static Dynamic delaypressed_dyn();

		static Void init( ::openfl::display::Stage stage);
		static Dynamic init_dyn();

		static Void unload( ::openfl::display::DisplayObject stage);
		static Dynamic unload_dyn();

		static Void update( );
		static Dynamic update_dyn();

		static Void reset( );
		static Dynamic reset_dyn();

		static bool iskeycodeheld( ::haxegon::Keystate k);
		static Dynamic iskeycodeheld_dyn();

		static Array< ::String > clipboardbuffer;
		static bool selectall;
		static bool cut;
		static bool paste;
		static bool undo;
		static bool redo;
		static Void handlecut( ::openfl::events::Event event);
		static Dynamic handlecut_dyn();

		static Void handlecopy( ::openfl::events::Event event);
		static Dynamic handlecopy_dyn();

		static Void handlepaste( ::openfl::events::Event event);
		static Dynamic handlepaste_dyn();

		static Void handleselectall( ::openfl::events::Event event);
		static Dynamic handleselectall_dyn();

		static Void handlekeydown( ::openfl::events::KeyboardEvent event);
		static Dynamic handlekeydown_dyn();

		static Void handletextinput( ::openfl::events::TextEvent event);
		static Dynamic handletextinput_dyn();

		static Void handledeactivate( ::openfl::events::Event e);
		static Dynamic handledeactivate_dyn();

		static ::String getchar( );
		static Dynamic getchar_dyn();

		static Void handlekeyup( ::openfl::events::KeyboardEvent event);
		static Dynamic handlekeyup_dyn();

		static Void addkey( ::haxegon::Key KeyName,int KeyCode);
		static Dynamic addkey_dyn();

		static Void resetKeys( );
		static Dynamic resetKeys_dyn();

		static ::String keyname( ::haxegon::Key k);
		static Dynamic keyname_dyn();

		static ::haxe::ds::EnumValueMap keymap;
		static ::haxe::ds::IntMap lookup;
		static Array< ::Dynamic > current;
		static Array< ::Dynamic > last;
		static Array< int > keyheld;
		static ::haxe::ds::StringMap _nativeCorrection;
		static int numletters;
		static int keycode;
		static int charcode;
		static int lastcharcode;
		static ::String keybuffer;
		static ::openfl::display::Stage gamestage;
};

} // end namespace haxegon

#endif /* INCLUDED_haxegon_Input */ 
