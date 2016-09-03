#ifndef INCLUDED_openfl__Vector_Vector_Impl_
#define INCLUDED_openfl__Vector_Vector_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(openfl,_Vector,BoolVector)
HX_DECLARE_CLASS2(openfl,_Vector,FloatVector)
HX_DECLARE_CLASS2(openfl,_Vector,FunctionVector)
HX_DECLARE_CLASS2(openfl,_Vector,IVector)
HX_DECLARE_CLASS2(openfl,_Vector,IntVector)
HX_DECLARE_CLASS2(openfl,_Vector,ObjectVector)
HX_DECLARE_CLASS2(openfl,_Vector,Vector_Impl_)
namespace openfl{
namespace _Vector{


class HXCPP_CLASS_ATTRIBUTES  Vector_Impl__obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Vector_Impl__obj OBJ_;
		Vector_Impl__obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="openfl._Vector.Vector_Impl_")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Vector_Impl__obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Vector_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Vector_Impl_","\xc3","\xad","\x36","\x7e"); }

		static Dynamic _new;
		static Dynamic &_new_dyn() { return _new;}
		static ::openfl::_Vector::ObjectVector concat( ::openfl::_Vector::IVector this1,::openfl::_Vector::ObjectVector a);
		static Dynamic concat_dyn();

		static ::openfl::_Vector::ObjectVector copy( ::openfl::_Vector::IVector this1);
		static Dynamic copy_dyn();

		static Dynamic get( ::openfl::_Vector::IVector this1,int index);
		static Dynamic get_dyn();

		static int indexOf( ::openfl::_Vector::IVector this1,Dynamic x,Dynamic from);
		static Dynamic indexOf_dyn();

		static Void insertAt( ::openfl::_Vector::IVector this1,int index,Dynamic element);
		static Dynamic insertAt_dyn();

		static Dynamic iterator( ::openfl::_Vector::IVector this1);
		static Dynamic iterator_dyn();

		static ::String join( ::openfl::_Vector::IVector this1,::String sep);
		static Dynamic join_dyn();

		static int lastIndexOf( ::openfl::_Vector::IVector this1,Dynamic x,Dynamic from);
		static Dynamic lastIndexOf_dyn();

		static Dynamic pop( ::openfl::_Vector::IVector this1);
		static Dynamic pop_dyn();

		static int push( ::openfl::_Vector::IVector this1,Dynamic x);
		static Dynamic push_dyn();

		static Void reverse( ::openfl::_Vector::IVector this1);
		static Dynamic reverse_dyn();

		static Dynamic set( ::openfl::_Vector::IVector this1,int index,Dynamic value);
		static Dynamic set_dyn();

		static Dynamic shift( ::openfl::_Vector::IVector this1);
		static Dynamic shift_dyn();

		static ::openfl::_Vector::ObjectVector slice( ::openfl::_Vector::IVector this1,Dynamic pos,Dynamic end);
		static Dynamic slice_dyn();

		static Void sort( ::openfl::_Vector::IVector this1,Dynamic f);
		static Dynamic sort_dyn();

		static ::openfl::_Vector::ObjectVector splice( ::openfl::_Vector::IVector this1,int pos,int len);
		static Dynamic splice_dyn();

		static ::String toString( ::openfl::_Vector::IVector this1);
		static Dynamic toString_dyn();

		static Void unshift( ::openfl::_Vector::IVector this1,Dynamic x);
		static Dynamic unshift_dyn();

		static ::openfl::_Vector::ObjectVector ofArray( cpp::ArrayBase a);
		static Dynamic ofArray_dyn();

		static ::openfl::_Vector::IVector convert( ::openfl::_Vector::IVector v);
		static Dynamic convert_dyn();

		static ::openfl::_Vector::BoolVector toBoolVector( ::openfl::_Vector::IVector t,int length,bool fixed);
		static Dynamic toBoolVector_dyn();

		static ::openfl::_Vector::IntVector toIntVector( ::openfl::_Vector::IVector t,int length,bool fixed);
		static Dynamic toIntVector_dyn();

		static ::openfl::_Vector::FloatVector toFloatVector( ::openfl::_Vector::IVector t,int length,bool fixed);
		static Dynamic toFloatVector_dyn();

		static ::openfl::_Vector::FunctionVector toFunctionVector( ::openfl::_Vector::IVector t,int length,bool fixed);
		static Dynamic toFunctionVector_dyn();

		static ::openfl::_Vector::ObjectVector toObjectVector( ::openfl::_Vector::IVector t,int length,bool fixed);
		static Dynamic toObjectVector_dyn();

		static ::openfl::_Vector::ObjectVector fromBoolVector( ::openfl::_Vector::BoolVector vector);
		static Dynamic fromBoolVector_dyn();

		static ::openfl::_Vector::ObjectVector fromIntVector( ::openfl::_Vector::IntVector vector);
		static Dynamic fromIntVector_dyn();

		static ::openfl::_Vector::ObjectVector fromFloatVector( ::openfl::_Vector::FloatVector vector);
		static Dynamic fromFloatVector_dyn();

		static ::openfl::_Vector::ObjectVector fromFunctionVector( ::openfl::_Vector::FunctionVector vector);
		static Dynamic fromFunctionVector_dyn();

		static ::openfl::_Vector::ObjectVector fromObjectVector( ::openfl::_Vector::ObjectVector vector);
		static Dynamic fromObjectVector_dyn();

		static bool get_fixed( ::openfl::_Vector::IVector this1);
		static Dynamic get_fixed_dyn();

		static bool set_fixed( ::openfl::_Vector::IVector this1,bool value);
		static Dynamic set_fixed_dyn();

		static int get_length( ::openfl::_Vector::IVector this1);
		static Dynamic get_length_dyn();

		static int set_length( ::openfl::_Vector::IVector this1,int value);
		static Dynamic set_length_dyn();

};

} // end namespace openfl
} // end namespace _Vector

#endif /* INCLUDED_openfl__Vector_Vector_Impl_ */ 
