#ifndef INCLUDED_openfl__Vector_IntVector
#define INCLUDED_openfl__Vector_IntVector

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl__Vector_IVector
#include <openfl/_Vector/IVector.h>
#endif
HX_DECLARE_CLASS2(openfl,_Vector,IVector)
HX_DECLARE_CLASS2(openfl,_Vector,IntVector)
namespace openfl{
namespace _Vector{


class HXCPP_CLASS_ATTRIBUTES  IntVector_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef IntVector_obj OBJ_;
		IntVector_obj();
		Void __construct(Dynamic length,Dynamic fixed,Array< int > array);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="openfl._Vector.IntVector")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< IntVector_obj > __new(Dynamic length,Dynamic fixed,Array< int > array);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~IntVector_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		hx::Object *__ToInterface(const hx::type_info &inType);
		operator ::openfl::_Vector::IVector_obj *();
		::String __ToString() const { return HX_HCSTRING("IntVector","\xf2","\xee","\x2f","\x5e"); }

		bool fixed;
		Array< int > __array;
		virtual ::openfl::_Vector::IVector concat( ::openfl::_Vector::IVector a);
		Dynamic concat_dyn();

		virtual ::openfl::_Vector::IVector copy( );
		Dynamic copy_dyn();

		virtual int get( int index);
		Dynamic get_dyn();

		virtual int indexOf( int x,Dynamic from);
		Dynamic indexOf_dyn();

		virtual Void insertAt( int index,int element);
		Dynamic insertAt_dyn();

		virtual Dynamic iterator( );
		Dynamic iterator_dyn();

		virtual ::String join( ::String sep);
		Dynamic join_dyn();

		virtual int lastIndexOf( int x,Dynamic from);
		Dynamic lastIndexOf_dyn();

		virtual Dynamic pop( );
		Dynamic pop_dyn();

		virtual int push( int x);
		Dynamic push_dyn();

		virtual Void reverse( );
		Dynamic reverse_dyn();

		virtual int set( int index,int value);
		Dynamic set_dyn();

		virtual Dynamic shift( );
		Dynamic shift_dyn();

		virtual ::openfl::_Vector::IVector slice( Dynamic startIndex,Dynamic endIndex);
		Dynamic slice_dyn();

		virtual Void sort( Dynamic f);
		Dynamic sort_dyn();

		virtual ::openfl::_Vector::IVector splice( int pos,int len);
		Dynamic splice_dyn();

		virtual ::String toString( );
		Dynamic toString_dyn();

		virtual Void unshift( int x);
		Dynamic unshift_dyn();

		virtual int get_length( );
		Dynamic get_length_dyn();

		virtual int set_length( int value);
		Dynamic set_length_dyn();

};

} // end namespace openfl
} // end namespace _Vector

#endif /* INCLUDED_openfl__Vector_IntVector */ 
