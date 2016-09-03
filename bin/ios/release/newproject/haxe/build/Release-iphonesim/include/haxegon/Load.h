#ifndef INCLUDED_haxegon_Load
#define INCLUDED_haxegon_Load

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxegon_Core
#include <haxegon/Core.h>
#endif
HX_DECLARE_CLASS1(haxegon,Core)
HX_DECLARE_CLASS1(haxegon,Load)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
namespace haxegon{


class HXCPP_CLASS_ATTRIBUTES  Load_obj : public ::haxegon::Core_obj{
	public:
		typedef ::haxegon::Core_obj super;
		typedef Load_obj OBJ_;
		Load_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="haxegon.Load")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Load_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Load_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Load","\x46","\xc6","\x90","\x32"); }

};

} // end namespace haxegon

#endif /* INCLUDED_haxegon_Load */ 
