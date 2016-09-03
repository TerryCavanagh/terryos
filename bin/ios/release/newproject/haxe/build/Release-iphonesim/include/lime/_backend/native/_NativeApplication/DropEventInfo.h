#ifndef INCLUDED_lime__backend_native__NativeApplication_DropEventInfo
#define INCLUDED_lime__backend_native__NativeApplication_DropEventInfo

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(lime,_backend,native,_NativeApplication,DropEventInfo)
namespace lime{
namespace _backend{
namespace native{
namespace _NativeApplication{


class HXCPP_CLASS_ATTRIBUTES  DropEventInfo_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef DropEventInfo_obj OBJ_;
		DropEventInfo_obj();
		Void __construct(Dynamic type,::String file);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="lime._backend.native._NativeApplication.DropEventInfo")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< DropEventInfo_obj > __new(Dynamic type,::String file);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~DropEventInfo_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("DropEventInfo","\x59","\x3b","\x00","\x66"); }

		::String file;
		int type;
		virtual ::lime::_backend::native::_NativeApplication::DropEventInfo clone( );
		Dynamic clone_dyn();

};

} // end namespace lime
} // end namespace _backend
} // end namespace native
} // end namespace _NativeApplication

#endif /* INCLUDED_lime__backend_native__NativeApplication_DropEventInfo */ 
