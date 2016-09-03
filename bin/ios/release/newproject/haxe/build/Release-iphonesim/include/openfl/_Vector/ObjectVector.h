#ifndef INCLUDED_openfl__Vector_ObjectVector
#define INCLUDED_openfl__Vector_ObjectVector

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl__Vector_IVector
#include <openfl/_Vector/IVector.h>
#endif
HX_DECLARE_CLASS2(openfl,_Vector,IVector)
HX_DECLARE_CLASS2(openfl,_Vector,ObjectVector)
namespace openfl{
namespace _Vector{


class HXCPP_CLASS_ATTRIBUTES  ObjectVector_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ObjectVector_obj OBJ_;
		ObjectVector_obj();
		Void __construct(Dynamic length,Dynamic fixed,cpp::ArrayBase array);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="openfl._Vector.ObjectVector")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< ObjectVector_obj > __new(Dynamic length,Dynamic fixed,cpp::ArrayBase array);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ObjectVector_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		hx::Object *__ToInterface(const hx::type_info &inType);
		operator ::openfl::_Vector::IVector_obj *();
		::String __ToString() const { return HX_HCSTRING("ObjectVector","\x02","\x09","\x7a","\x39"); }

		bool fixed;
		cpp::ArrayBase __array;
		virtual ::openfl::_Vector::IVector concat( ::openfl::_Vector::IVector a);
		Dynamic concat_dyn();

		virtual ::openfl::_Vector::IVector copy( );
		Dynamic copy_dyn();

		virtual Dynamic get( int index);
		Dynamic get_dyn();

		virtual int indexOf( Dynamic x,Dynamic from);
		Dynamic indexOf_dyn();

		virtual Void insertAt( int index,Dynamic element);
		Dynamic insertAt_dyn();

		virtual Dynamic iterator( );
		Dynamic iterator_dyn();

		virtual ::String join( ::String sep);
		Dynamic join_dyn();

		virtual int lastIndexOf( Dynamic x,Dynamic from);
		Dynamic lastIndexOf_dyn();

		virtual Dynamic pop( );
		Dynamic pop_dyn();

		virtual int push( Dynamic x);
		Dynamic push_dyn();

		virtual Void reverse( );
		Dynamic reverse_dyn();

		virtual Dynamic set( int index,Dynamic value);
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

		virtual Void unshift( Dynamic x);
		Dynamic unshift_dyn();

		virtual int get_length( );
		Dynamic get_length_dyn();

		virtual int set_length( int value);
		Dynamic set_length_dyn();

};

} // end namespace openfl
} // end namespace _Vector

#endif /* INCLUDED_openfl__Vector_ObjectVector */ 
