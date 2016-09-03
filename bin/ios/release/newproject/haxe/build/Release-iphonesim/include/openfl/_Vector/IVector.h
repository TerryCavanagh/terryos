#ifndef INCLUDED_openfl__Vector_IVector
#define INCLUDED_openfl__Vector_IVector

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(openfl,_Vector,IVector)
namespace openfl{
namespace _Vector{


class HXCPP_CLASS_ATTRIBUTES  IVector_obj : public hx::Interface{
	public:
		typedef hx::Interface super;
		typedef IVector_obj OBJ_;
		HX_DO_INTERFACE_RTTI;
		virtual int get_length( )=0;
virtual Dynamic get_length_dyn()=0;
		virtual int set_length( int value)=0;
virtual Dynamic set_length_dyn()=0;
		virtual ::openfl::_Vector::IVector concat( ::openfl::_Vector::IVector a)=0;
virtual Dynamic concat_dyn()=0;
		virtual ::openfl::_Vector::IVector copy( )=0;
virtual Dynamic copy_dyn()=0;
		virtual Dynamic get( int index)=0;
virtual Dynamic get_dyn()=0;
		virtual int indexOf( Dynamic x,Dynamic from)=0;
virtual Dynamic indexOf_dyn()=0;
		virtual Void insertAt( int index,Dynamic element)=0;
virtual Dynamic insertAt_dyn()=0;
		virtual Dynamic iterator( )=0;
virtual Dynamic iterator_dyn()=0;
		virtual ::String join( ::String sep)=0;
virtual Dynamic join_dyn()=0;
		virtual int lastIndexOf( Dynamic x,Dynamic from)=0;
virtual Dynamic lastIndexOf_dyn()=0;
		virtual Dynamic pop( )=0;
virtual Dynamic pop_dyn()=0;
		virtual int push( Dynamic x)=0;
virtual Dynamic push_dyn()=0;
		virtual Void reverse( )=0;
virtual Dynamic reverse_dyn()=0;
		virtual Dynamic set( int index,Dynamic value)=0;
virtual Dynamic set_dyn()=0;
		virtual Dynamic shift( )=0;
virtual Dynamic shift_dyn()=0;
		virtual ::openfl::_Vector::IVector slice( Dynamic pos,Dynamic end)=0;
virtual Dynamic slice_dyn()=0;
		virtual Void sort( Dynamic f)=0;
virtual Dynamic sort_dyn()=0;
		virtual ::openfl::_Vector::IVector splice( int pos,int len)=0;
virtual Dynamic splice_dyn()=0;
		virtual ::String toString( )=0;
virtual Dynamic toString_dyn()=0;
		virtual Void unshift( Dynamic x)=0;
virtual Dynamic unshift_dyn()=0;
};



template<typename IMPL>
class IVector_delegate_ : public IVector_obj
{
	protected:
		IMPL *mDelegate;
	public:
		IVector_delegate_(IMPL *inDelegate) : mDelegate(inDelegate) {}
		hx::Object *__GetRealObject() { return mDelegate; }
		void __Visit(HX_VISIT_PARAMS) { HX_VISIT_OBJECT(mDelegate); }
		int get_length( ) { return mDelegate->get_length();}
		Dynamic get_length_dyn() { return mDelegate->get_length_dyn();}
		int set_length( int value) { return mDelegate->set_length(value);}
		Dynamic set_length_dyn() { return mDelegate->set_length_dyn();}
		::openfl::_Vector::IVector concat( ::openfl::_Vector::IVector a) { return mDelegate->concat(a);}
		Dynamic concat_dyn() { return mDelegate->concat_dyn();}
		::openfl::_Vector::IVector copy( ) { return mDelegate->copy();}
		Dynamic copy_dyn() { return mDelegate->copy_dyn();}
		Dynamic get( int index) { return mDelegate->get(index);}
		Dynamic get_dyn() { return mDelegate->get_dyn();}
		int indexOf( Dynamic x,Dynamic from) { return mDelegate->indexOf(x,from);}
		Dynamic indexOf_dyn() { return mDelegate->indexOf_dyn();}
		Void insertAt( int index,Dynamic element) { return mDelegate->insertAt(index,element);}
		Dynamic insertAt_dyn() { return mDelegate->insertAt_dyn();}
		Dynamic iterator( ) { return mDelegate->iterator();}
		Dynamic iterator_dyn() { return mDelegate->iterator_dyn();}
		::String join( ::String sep) { return mDelegate->join(sep);}
		Dynamic join_dyn() { return mDelegate->join_dyn();}
		int lastIndexOf( Dynamic x,Dynamic from) { return mDelegate->lastIndexOf(x,from);}
		Dynamic lastIndexOf_dyn() { return mDelegate->lastIndexOf_dyn();}
		Dynamic pop( ) { return mDelegate->pop();}
		Dynamic pop_dyn() { return mDelegate->pop_dyn();}
		int push( Dynamic x) { return mDelegate->push(x);}
		Dynamic push_dyn() { return mDelegate->push_dyn();}
		Void reverse( ) { return mDelegate->reverse();}
		Dynamic reverse_dyn() { return mDelegate->reverse_dyn();}
		Dynamic set( int index,Dynamic value) { return mDelegate->set(index,value);}
		Dynamic set_dyn() { return mDelegate->set_dyn();}
		Dynamic shift( ) { return mDelegate->shift();}
		Dynamic shift_dyn() { return mDelegate->shift_dyn();}
		::openfl::_Vector::IVector slice( Dynamic pos,Dynamic end) { return mDelegate->slice(pos,end);}
		Dynamic slice_dyn() { return mDelegate->slice_dyn();}
		Void sort( Dynamic f) { return mDelegate->sort(f);}
		Dynamic sort_dyn() { return mDelegate->sort_dyn();}
		::openfl::_Vector::IVector splice( int pos,int len) { return mDelegate->splice(pos,len);}
		Dynamic splice_dyn() { return mDelegate->splice_dyn();}
		::String toString( ) { return mDelegate->toString();}
		Dynamic toString_dyn() { return mDelegate->toString_dyn();}
		Void unshift( Dynamic x) { return mDelegate->unshift(x);}
		Dynamic unshift_dyn() { return mDelegate->unshift_dyn();}
};

} // end namespace openfl
} // end namespace _Vector

#endif /* INCLUDED_openfl__Vector_IVector */ 
