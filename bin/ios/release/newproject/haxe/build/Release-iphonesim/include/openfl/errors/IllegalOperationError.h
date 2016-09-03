#ifndef INCLUDED_openfl_errors_IllegalOperationError
#define INCLUDED_openfl_errors_IllegalOperationError

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_errors_Error
#include <openfl/errors/Error.h>
#endif
HX_DECLARE_CLASS2(openfl,errors,Error)
HX_DECLARE_CLASS2(openfl,errors,IllegalOperationError)
namespace openfl{
namespace errors{


class HXCPP_CLASS_ATTRIBUTES  IllegalOperationError_obj : public ::openfl::errors::Error_obj{
	public:
		typedef ::openfl::errors::Error_obj super;
		typedef IllegalOperationError_obj OBJ_;
		IllegalOperationError_obj();
		Void __construct(::String __o_message);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="openfl.errors.IllegalOperationError")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< IllegalOperationError_obj > __new(::String __o_message);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~IllegalOperationError_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		::String __ToString() const { return HX_HCSTRING("IllegalOperationError","\x17","\xce","\xc0","\x9e"); }

};

} // end namespace openfl
} // end namespace errors

#endif /* INCLUDED_openfl_errors_IllegalOperationError */ 
