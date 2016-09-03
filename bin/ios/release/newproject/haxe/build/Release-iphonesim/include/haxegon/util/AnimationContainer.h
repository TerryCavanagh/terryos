#ifndef INCLUDED_haxegon_util_AnimationContainer
#define INCLUDED_haxegon_util_AnimationContainer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxegon,util,AnimationContainer)
namespace haxegon{
namespace util{


class HXCPP_CLASS_ATTRIBUTES  AnimationContainer_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef AnimationContainer_obj OBJ_;
		AnimationContainer_obj();
		Void __construct(::String _animationname,::String _tileset,int _startframe,int _endframe,int _delayperframe);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="haxegon.util.AnimationContainer")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< AnimationContainer_obj > __new(::String _animationname,::String _tileset,int _startframe,int _endframe,int _delayperframe);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~AnimationContainer_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("AnimationContainer","\xbd","\x89","\x27","\x4a"); }

		virtual Void update( );
		Dynamic update_dyn();

		virtual Void reset( );
		Dynamic reset_dyn();

		::String name;
		::String tileset;
		int tilesetnum;
		int startframe;
		int endframe;
		int delayperframe;
		int timethisframe;
		int currentframe;
};

} // end namespace haxegon
} // end namespace util

#endif /* INCLUDED_haxegon_util_AnimationContainer */ 
