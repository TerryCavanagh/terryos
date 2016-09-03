#ifndef INCLUDED_haxegon_Scene
#define INCLUDED_haxegon_Scene

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxegon,Scene)
namespace haxegon{


class HXCPP_CLASS_ATTRIBUTES  Scene_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Scene_obj OBJ_;
		Scene_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="haxegon.Scene")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Scene_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Scene_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Scene","\x2c","\x49","\xff","\x0b"); }

		static Void init( );
		static Dynamic init_dyn();

		static Void update( );
		static Dynamic update_dyn();

		static Void callscenemethod( Dynamic scene,::String method);
		static Dynamic callscenemethod_dyn();

		static int findscene( ::hx::Class findscene);
		static Dynamic findscene_dyn();

		static Dynamic change( ::hx::Class newscene);
		static Dynamic change_dyn();

		static Dynamic get( ::hx::Class newscene);
		static Dynamic get_dyn();

		static ::String getcurrentscene( );
		static Dynamic getcurrentscene_dyn();

		static Dynamic getcurrentsceneclass( );
		static Dynamic getcurrentsceneclass_dyn();

		static cpp::ArrayBase scenelist;
		static int currentscene;
};

} // end namespace haxegon

#endif /* INCLUDED_haxegon_Scene */ 
