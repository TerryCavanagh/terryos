#include <hxcpp.h>

#ifndef INCLUDED_openfl__Vector_BoolVector
#include <openfl/_Vector/BoolVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_FloatVector
#include <openfl/_Vector/FloatVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_FunctionVector
#include <openfl/_Vector/FunctionVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_IVector
#include <openfl/_Vector/IVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_IntVector
#include <openfl/_Vector/IntVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_ObjectVector
#include <openfl/_Vector/ObjectVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_Vector_Impl_
#include <openfl/_Vector/Vector_Impl_.h>
#endif
namespace openfl{
namespace _Vector{

Void Vector_Impl__obj::__construct()
{
	return null();
}

//Vector_Impl__obj::~Vector_Impl__obj() { }

Dynamic Vector_Impl__obj::__CreateEmpty() { return  new Vector_Impl__obj; }
hx::ObjectPtr< Vector_Impl__obj > Vector_Impl__obj::__new()
{  hx::ObjectPtr< Vector_Impl__obj > _result_ = new Vector_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic Vector_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Vector_Impl__obj > _result_ = new Vector_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic Vector_Impl__obj::_new;

::openfl::_Vector::ObjectVector Vector_Impl__obj::concat( ::openfl::_Vector::IVector this1,::openfl::_Vector::ObjectVector a){
	HX_STACK_FRAME("openfl._Vector.Vector_Impl_","concat",0x0c502a95,"openfl._Vector.Vector_Impl_.concat","openfl/Vector.hx",20,0x4a01873c)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(a,"a")
	HX_STACK_LINE(22)
	::openfl::_Vector::IVector tmp = ((::openfl::_Vector::IVector)(a));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(22)
	::openfl::_Vector::IVector tmp1 = this1->concat(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(22)
	::openfl::_Vector::ObjectVector tmp2 = ((::openfl::_Vector::ObjectVector)(tmp1));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(22)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Vector_Impl__obj,concat,return )

::openfl::_Vector::ObjectVector Vector_Impl__obj::copy( ::openfl::_Vector::IVector this1){
	HX_STACK_FRAME("openfl._Vector.Vector_Impl_","copy",0x7571caf6,"openfl._Vector.Vector_Impl_.copy","openfl/Vector.hx",27,0x4a01873c)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(29)
	::openfl::_Vector::IVector tmp = this1->copy();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(29)
	::openfl::_Vector::ObjectVector tmp1 = ((::openfl::_Vector::ObjectVector)(tmp));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(29)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Vector_Impl__obj,copy,return )

Dynamic Vector_Impl__obj::get( ::openfl::_Vector::IVector this1,int index){
	HX_STACK_FRAME("openfl._Vector.Vector_Impl_","get",0x456ad475,"openfl._Vector.Vector_Impl_.get","openfl/Vector.hx",34,0x4a01873c)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(36)
	int tmp = index;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(36)
	Dynamic tmp1 = this1->get(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(36)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Vector_Impl__obj,get,return )

int Vector_Impl__obj::indexOf( ::openfl::_Vector::IVector this1,Dynamic x,Dynamic __o_from){
Dynamic from = __o_from.Default(0);
	HX_STACK_FRAME("openfl._Vector.Vector_Impl_","indexOf",0x8c5c7828,"openfl._Vector.Vector_Impl_.indexOf","openfl/Vector.hx",41,0x4a01873c)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(from,"from")
{
		HX_STACK_LINE(43)
		Dynamic tmp = x;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(43)
		Dynamic tmp1 = from;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(43)
		int tmp2 = this1->indexOf(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(43)
		return tmp2;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Vector_Impl__obj,indexOf,return )

Void Vector_Impl__obj::insertAt( ::openfl::_Vector::IVector this1,int index,Dynamic element){
{
		HX_STACK_FRAME("openfl._Vector.Vector_Impl_","insertAt",0x400bc04d,"openfl._Vector.Vector_Impl_.insertAt","openfl/Vector.hx",48,0x4a01873c)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(index,"index")
		HX_STACK_ARG(element,"element")
		HX_STACK_LINE(50)
		int tmp = index;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(50)
		Dynamic tmp1 = element;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(50)
		this1->insertAt(tmp,tmp1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Vector_Impl__obj,insertAt,(void))

Dynamic Vector_Impl__obj::iterator( ::openfl::_Vector::IVector this1){
	HX_STACK_FRAME("openfl._Vector.Vector_Impl_","iterator",0x11868daf,"openfl._Vector.Vector_Impl_.iterator","openfl/Vector.hx",55,0x4a01873c)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(57)
	Dynamic tmp = this1->iterator();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(57)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Vector_Impl__obj,iterator,return )

::String Vector_Impl__obj::join( ::openfl::_Vector::IVector this1,::String sep){
	HX_STACK_FRAME("openfl._Vector.Vector_Impl_","join",0x7a12432b,"openfl._Vector.Vector_Impl_.join","openfl/Vector.hx",62,0x4a01873c)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(sep,"sep")
	HX_STACK_LINE(64)
	::String tmp = sep;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(64)
	::String tmp1 = this1->join(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(64)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Vector_Impl__obj,join,return )

int Vector_Impl__obj::lastIndexOf( ::openfl::_Vector::IVector this1,Dynamic x,Dynamic __o_from){
Dynamic from = __o_from.Default(0);
	HX_STACK_FRAME("openfl._Vector.Vector_Impl_","lastIndexOf",0x5bdcc7f2,"openfl._Vector.Vector_Impl_.lastIndexOf","openfl/Vector.hx",69,0x4a01873c)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(from,"from")
{
		HX_STACK_LINE(71)
		Dynamic tmp = x;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(71)
		Dynamic tmp1 = from;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(71)
		int tmp2 = this1->lastIndexOf(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(71)
		return tmp2;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Vector_Impl__obj,lastIndexOf,return )

Dynamic Vector_Impl__obj::pop( ::openfl::_Vector::IVector this1){
	HX_STACK_FRAME("openfl._Vector.Vector_Impl_","pop",0x4571b170,"openfl._Vector.Vector_Impl_.pop","openfl/Vector.hx",76,0x4a01873c)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(78)
	Dynamic tmp = this1->pop();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(78)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Vector_Impl__obj,pop,return )

int Vector_Impl__obj::push( ::openfl::_Vector::IVector this1,Dynamic x){
	HX_STACK_FRAME("openfl._Vector.Vector_Impl_","push",0x7e0e211b,"openfl._Vector.Vector_Impl_.push","openfl/Vector.hx",83,0x4a01873c)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(x,"x")
	HX_STACK_LINE(85)
	Dynamic tmp = x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(85)
	int tmp1 = this1->push(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(85)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Vector_Impl__obj,push,return )

Void Vector_Impl__obj::reverse( ::openfl::_Vector::IVector this1){
{
		HX_STACK_FRAME("openfl._Vector.Vector_Impl_","reverse",0xc6996881,"openfl._Vector.Vector_Impl_.reverse","openfl/Vector.hx",92,0x4a01873c)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_LINE(92)
		this1->reverse();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Vector_Impl__obj,reverse,(void))

Dynamic Vector_Impl__obj::set( ::openfl::_Vector::IVector this1,int index,Dynamic value){
	HX_STACK_FRAME("openfl._Vector.Vector_Impl_","set",0x4573ef81,"openfl._Vector.Vector_Impl_.set","openfl/Vector.hx",97,0x4a01873c)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(index,"index")
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(99)
	int tmp = index;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(99)
	Dynamic tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(99)
	Dynamic tmp2 = this1->set(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(99)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Vector_Impl__obj,set,return )

Dynamic Vector_Impl__obj::shift( ::openfl::_Vector::IVector this1){
	HX_STACK_FRAME("openfl._Vector.Vector_Impl_","shift",0x7fe33621,"openfl._Vector.Vector_Impl_.shift","openfl/Vector.hx",104,0x4a01873c)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(106)
	Dynamic tmp = this1->shift();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(106)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Vector_Impl__obj,shift,return )

::openfl::_Vector::ObjectVector Vector_Impl__obj::slice( ::openfl::_Vector::IVector this1,Dynamic pos,Dynamic end){
	HX_STACK_FRAME("openfl._Vector.Vector_Impl_","slice",0x82880df1,"openfl._Vector.Vector_Impl_.slice","openfl/Vector.hx",111,0x4a01873c)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(pos,"pos")
	HX_STACK_ARG(end,"end")
	HX_STACK_LINE(113)
	Dynamic tmp = pos;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(113)
	Dynamic tmp1 = end;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(113)
	::openfl::_Vector::IVector tmp2 = this1->slice(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(113)
	::openfl::_Vector::ObjectVector tmp3 = ((::openfl::_Vector::ObjectVector)(tmp2));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(113)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Vector_Impl__obj,slice,return )

Void Vector_Impl__obj::sort( ::openfl::_Vector::IVector this1,Dynamic f){
{
		HX_STACK_FRAME("openfl._Vector.Vector_Impl_","sort",0x8005369f,"openfl._Vector.Vector_Impl_.sort","openfl/Vector.hx",118,0x4a01873c)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(f,"f")
		HX_STACK_LINE(120)
		Dynamic tmp = f;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(120)
		this1->sort(tmp);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Vector_Impl__obj,sort,(void))

::openfl::_Vector::ObjectVector Vector_Impl__obj::splice( ::openfl::_Vector::IVector this1,int pos,int len){
	HX_STACK_FRAME("openfl._Vector.Vector_Impl_","splice",0x041ea6fd,"openfl._Vector.Vector_Impl_.splice","openfl/Vector.hx",125,0x4a01873c)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(pos,"pos")
	HX_STACK_ARG(len,"len")
	HX_STACK_LINE(127)
	int tmp = pos;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(127)
	int tmp1 = len;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(127)
	::openfl::_Vector::IVector tmp2 = this1->splice(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(127)
	::openfl::_Vector::ObjectVector tmp3 = ((::openfl::_Vector::ObjectVector)(tmp2));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(127)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Vector_Impl__obj,splice,return )

::String Vector_Impl__obj::toString( ::openfl::_Vector::IVector this1){
	HX_STACK_FRAME("openfl._Vector.Vector_Impl_","toString",0xb65b146d,"openfl._Vector.Vector_Impl_.toString","openfl/Vector.hx",132,0x4a01873c)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(134)
	::String tmp = this1->toString();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(134)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Vector_Impl__obj,toString,return )

Void Vector_Impl__obj::unshift( ::openfl::_Vector::IVector this1,Dynamic x){
{
		HX_STACK_FRAME("openfl._Vector.Vector_Impl_","unshift",0x245112e8,"openfl._Vector.Vector_Impl_.unshift","openfl/Vector.hx",139,0x4a01873c)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(x,"x")
		HX_STACK_LINE(141)
		Dynamic tmp = x;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(141)
		this1->unshift(tmp);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Vector_Impl__obj,unshift,(void))

::openfl::_Vector::ObjectVector Vector_Impl__obj::ofArray( cpp::ArrayBase a){
	HX_STACK_FRAME("openfl._Vector.Vector_Impl_","ofArray",0x348f5861,"openfl._Vector.Vector_Impl_.ofArray","openfl/Vector.hx",146,0x4a01873c)
	HX_STACK_ARG(a,"a")
	HX_STACK_LINE(148)
	::openfl::_Vector::ObjectVector tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(148)
	{
		HX_STACK_LINE(148)
		int length = null();		HX_STACK_VAR(length,"length");
		HX_STACK_LINE(148)
		bool fixed = null();		HX_STACK_VAR(fixed,"fixed");
		HX_STACK_LINE(148)
		tmp = ::openfl::_Vector::ObjectVector_obj::__new(length,fixed,null());
	}
	HX_STACK_LINE(148)
	::openfl::_Vector::ObjectVector vector = tmp;		HX_STACK_VAR(vector,"vector");
	HX_STACK_LINE(150)
	{
		HX_STACK_LINE(150)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(150)
		int _g = a->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(150)
		while((true)){
			HX_STACK_LINE(150)
			bool tmp1 = (_g1 < _g);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(150)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(150)
			if ((tmp2)){
				HX_STACK_LINE(150)
				break;
			}
			HX_STACK_LINE(150)
			int tmp3 = (_g1)++;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(150)
			int i = tmp3;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(152)
			int tmp4 = i;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(152)
			Dynamic tmp5 = a->__GetItem(i);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(152)
			Dynamic tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(152)
			Dynamic tmp7 = vector->set(tmp4,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(152)
			tmp7;
		}
	}
	HX_STACK_LINE(156)
	::openfl::_Vector::ObjectVector tmp1 = vector;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(156)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Vector_Impl__obj,ofArray,return )

::openfl::_Vector::IVector Vector_Impl__obj::convert( ::openfl::_Vector::IVector v){
	HX_STACK_FRAME("openfl._Vector.Vector_Impl_","convert",0xc6672d52,"openfl._Vector.Vector_Impl_.convert","openfl/Vector.hx",161,0x4a01873c)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(163)
	::openfl::_Vector::IVector tmp = v;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(163)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Vector_Impl__obj,convert,return )

::openfl::_Vector::BoolVector Vector_Impl__obj::toBoolVector( ::openfl::_Vector::IVector t,int length,bool fixed){
	HX_STACK_FRAME("openfl._Vector.Vector_Impl_","toBoolVector",0xb60d0e29,"openfl._Vector.Vector_Impl_.toBoolVector","openfl/Vector.hx",168,0x4a01873c)
	HX_STACK_ARG(t,"t")
	HX_STACK_ARG(length,"length")
	HX_STACK_ARG(fixed,"fixed")
	HX_STACK_LINE(170)
	::openfl::_Vector::BoolVector tmp = ::openfl::_Vector::BoolVector_obj::__new(length,fixed,null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(170)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Vector_Impl__obj,toBoolVector,return )

::openfl::_Vector::IntVector Vector_Impl__obj::toIntVector( ::openfl::_Vector::IVector t,int length,bool fixed){
	HX_STACK_FRAME("openfl._Vector.Vector_Impl_","toIntVector",0xe9b44cf6,"openfl._Vector.Vector_Impl_.toIntVector","openfl/Vector.hx",175,0x4a01873c)
	HX_STACK_ARG(t,"t")
	HX_STACK_ARG(length,"length")
	HX_STACK_ARG(fixed,"fixed")
	HX_STACK_LINE(177)
	::openfl::_Vector::IntVector tmp = ::openfl::_Vector::IntVector_obj::__new(length,fixed,null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(177)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Vector_Impl__obj,toIntVector,return )

::openfl::_Vector::FloatVector Vector_Impl__obj::toFloatVector( ::openfl::_Vector::IVector t,int length,bool fixed){
	HX_STACK_FRAME("openfl._Vector.Vector_Impl_","toFloatVector",0xde8c8663,"openfl._Vector.Vector_Impl_.toFloatVector","openfl/Vector.hx",182,0x4a01873c)
	HX_STACK_ARG(t,"t")
	HX_STACK_ARG(length,"length")
	HX_STACK_ARG(fixed,"fixed")
	HX_STACK_LINE(184)
	::openfl::_Vector::FloatVector tmp = ::openfl::_Vector::FloatVector_obj::__new(length,fixed,null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(184)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Vector_Impl__obj,toFloatVector,return )

::openfl::_Vector::FunctionVector Vector_Impl__obj::toFunctionVector( ::openfl::_Vector::IVector t,int length,bool fixed){
	HX_STACK_FRAME("openfl._Vector.Vector_Impl_","toFunctionVector",0xabc41997,"openfl._Vector.Vector_Impl_.toFunctionVector","openfl/Vector.hx",189,0x4a01873c)
	HX_STACK_ARG(t,"t")
	HX_STACK_ARG(length,"length")
	HX_STACK_ARG(fixed,"fixed")
	HX_STACK_LINE(191)
	::openfl::_Vector::FunctionVector tmp = ::openfl::_Vector::FunctionVector_obj::__new(length,fixed,null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(191)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Vector_Impl__obj,toFunctionVector,return )

::openfl::_Vector::ObjectVector Vector_Impl__obj::toObjectVector( ::openfl::_Vector::IVector t,int length,bool fixed){
	HX_STACK_FRAME("openfl._Vector.Vector_Impl_","toObjectVector",0xdd29457e,"openfl._Vector.Vector_Impl_.toObjectVector","openfl/Vector.hx",196,0x4a01873c)
	HX_STACK_ARG(t,"t")
	HX_STACK_ARG(length,"length")
	HX_STACK_ARG(fixed,"fixed")
	HX_STACK_LINE(198)
	::openfl::_Vector::ObjectVector tmp = ::openfl::_Vector::ObjectVector_obj::__new(length,fixed,null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(198)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Vector_Impl__obj,toObjectVector,return )

::openfl::_Vector::ObjectVector Vector_Impl__obj::fromBoolVector( ::openfl::_Vector::BoolVector vector){
	HX_STACK_FRAME("openfl._Vector.Vector_Impl_","fromBoolVector",0x5de98118,"openfl._Vector.Vector_Impl_.fromBoolVector","openfl/Vector.hx",203,0x4a01873c)
	HX_STACK_ARG(vector,"vector")
	HX_STACK_LINE(205)
	::openfl::_Vector::ObjectVector tmp = ((::openfl::_Vector::ObjectVector)(vector));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(205)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Vector_Impl__obj,fromBoolVector,return )

::openfl::_Vector::ObjectVector Vector_Impl__obj::fromIntVector( ::openfl::_Vector::IntVector vector){
	HX_STACK_FRAME("openfl._Vector.Vector_Impl_","fromIntVector",0xcee7cce7,"openfl._Vector.Vector_Impl_.fromIntVector","openfl/Vector.hx",210,0x4a01873c)
	HX_STACK_ARG(vector,"vector")
	HX_STACK_LINE(212)
	::openfl::_Vector::ObjectVector tmp = ((::openfl::_Vector::ObjectVector)(vector));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(212)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Vector_Impl__obj,fromIntVector,return )

::openfl::_Vector::ObjectVector Vector_Impl__obj::fromFloatVector( ::openfl::_Vector::FloatVector vector){
	HX_STACK_FRAME("openfl._Vector.Vector_Impl_","fromFloatVector",0x1794a494,"openfl._Vector.Vector_Impl_.fromFloatVector","openfl/Vector.hx",217,0x4a01873c)
	HX_STACK_ARG(vector,"vector")
	HX_STACK_LINE(219)
	::openfl::_Vector::ObjectVector tmp = ((::openfl::_Vector::ObjectVector)(vector));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(219)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Vector_Impl__obj,fromFloatVector,return )

::openfl::_Vector::ObjectVector Vector_Impl__obj::fromFunctionVector( ::openfl::_Vector::FunctionVector vector){
	HX_STACK_FRAME("openfl._Vector.Vector_Impl_","fromFunctionVector",0xbc863006,"openfl._Vector.Vector_Impl_.fromFunctionVector","openfl/Vector.hx",224,0x4a01873c)
	HX_STACK_ARG(vector,"vector")
	HX_STACK_LINE(226)
	::openfl::_Vector::ObjectVector tmp = ((::openfl::_Vector::ObjectVector)(vector));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(226)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Vector_Impl__obj,fromFunctionVector,return )

::openfl::_Vector::ObjectVector Vector_Impl__obj::fromObjectVector( ::openfl::_Vector::ObjectVector vector){
	HX_STACK_FRAME("openfl._Vector.Vector_Impl_","fromObjectVector",0x8b3b922d,"openfl._Vector.Vector_Impl_.fromObjectVector","openfl/Vector.hx",231,0x4a01873c)
	HX_STACK_ARG(vector,"vector")
	HX_STACK_LINE(233)
	::openfl::_Vector::ObjectVector tmp = vector;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(233)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Vector_Impl__obj,fromObjectVector,return )

bool Vector_Impl__obj::get_fixed( ::openfl::_Vector::IVector this1){
	HX_STACK_FRAME("openfl._Vector.Vector_Impl_","get_fixed",0xf51a5aea,"openfl._Vector.Vector_Impl_.get_fixed","openfl/Vector.hx",245,0x4a01873c)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(247)
	bool tmp = this1->__Field(HX_HCSTRING("fixed","\x74","\xf9","\xa1","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(247)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Vector_Impl__obj,get_fixed,return )

bool Vector_Impl__obj::set_fixed( ::openfl::_Vector::IVector this1,bool value){
	HX_STACK_FRAME("openfl._Vector.Vector_Impl_","set_fixed",0xd86b46f6,"openfl._Vector.Vector_Impl_.set_fixed","openfl/Vector.hx",252,0x4a01873c)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(254)
	bool tmp = this1->__FieldRef(HX_HCSTRING("fixed","\x74","\xf9","\xa1","\x00")) = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(254)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Vector_Impl__obj,set_fixed,return )

int Vector_Impl__obj::get_length( ::openfl::_Vector::IVector this1){
	HX_STACK_FRAME("openfl._Vector.Vector_Impl_","get_length",0x93e47ab0,"openfl._Vector.Vector_Impl_.get_length","openfl/Vector.hx",259,0x4a01873c)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(261)
	int tmp = this1->get_length();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(261)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Vector_Impl__obj,get_length,return )

int Vector_Impl__obj::set_length( ::openfl::_Vector::IVector this1,int value){
	HX_STACK_FRAME("openfl._Vector.Vector_Impl_","set_length",0x97621924,"openfl._Vector.Vector_Impl_.set_length","openfl/Vector.hx",266,0x4a01873c)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(268)
	int tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(268)
	int tmp1 = this1->set_length(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(268)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Vector_Impl__obj,set_length,return )


Vector_Impl__obj::Vector_Impl__obj()
{
}

bool Vector_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { outValue = get_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"pop") ) { outValue = pop_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"set") ) { outValue = set_dyn(); return true;  }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { outValue = _new; return true;  }
		if (HX_FIELD_EQ(inName,"copy") ) { outValue = copy_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"join") ) { outValue = join_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"push") ) { outValue = push_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"sort") ) { outValue = sort_dyn(); return true;  }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"shift") ) { outValue = shift_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"slice") ) { outValue = slice_dyn(); return true;  }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"concat") ) { outValue = concat_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"splice") ) { outValue = splice_dyn(); return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"indexOf") ) { outValue = indexOf_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"reverse") ) { outValue = reverse_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"unshift") ) { outValue = unshift_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"ofArray") ) { outValue = ofArray_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"convert") ) { outValue = convert_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"insertAt") ) { outValue = insertAt_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"iterator") ) { outValue = iterator_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"toString") ) { outValue = toString_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_fixed") ) { outValue = get_fixed_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"set_fixed") ) { outValue = set_fixed_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_length") ) { outValue = get_length_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"set_length") ) { outValue = set_length_dyn(); return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"lastIndexOf") ) { outValue = lastIndexOf_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"toIntVector") ) { outValue = toIntVector_dyn(); return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"toBoolVector") ) { outValue = toBoolVector_dyn(); return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"toFloatVector") ) { outValue = toFloatVector_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"fromIntVector") ) { outValue = fromIntVector_dyn(); return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"toObjectVector") ) { outValue = toObjectVector_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"fromBoolVector") ) { outValue = fromBoolVector_dyn(); return true;  }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"fromFloatVector") ) { outValue = fromFloatVector_dyn(); return true;  }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"toFunctionVector") ) { outValue = toFunctionVector_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"fromObjectVector") ) { outValue = fromObjectVector_dyn(); return true;  }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"fromFunctionVector") ) { outValue = fromFunctionVector_dyn(); return true;  }
	}
	return false;
}

bool Vector_Impl__obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { _new=ioValue.Cast< Dynamic >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(void *) &Vector_Impl__obj::_new,HX_HCSTRING("_new","\x61","\x15","\x1f","\x3f")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Vector_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Vector_Impl__obj::_new,"_new");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Vector_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Vector_Impl__obj::_new,"_new");
};

#endif

hx::Class Vector_Impl__obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("_new","\x61","\x15","\x1f","\x3f"),
	HX_HCSTRING("concat","\x14","\x09","\xd0","\xc7"),
	HX_HCSTRING("copy","\xb5","\xbb","\xc4","\x41"),
	HX_HCSTRING("get","\x96","\x80","\x4e","\x00"),
	HX_HCSTRING("indexOf","\xc9","\x48","\xbf","\xe0"),
	HX_HCSTRING("insertAt","\x8c","\x7c","\x1f","\xc2"),
	HX_HCSTRING("iterator","\xee","\x49","\x9a","\x93"),
	HX_HCSTRING("join","\xea","\x33","\x65","\x46"),
	HX_HCSTRING("lastIndexOf","\x13","\xfd","\x6a","\x95"),
	HX_HCSTRING("pop","\x91","\x5d","\x55","\x00"),
	HX_HCSTRING("push","\xda","\x11","\x61","\x4a"),
	HX_HCSTRING("reverse","\x22","\x39","\xfc","\x1a"),
	HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"),
	HX_HCSTRING("shift","\x82","\xec","\x22","\x7c"),
	HX_HCSTRING("slice","\x52","\xc4","\xc7","\x7e"),
	HX_HCSTRING("sort","\x5e","\x27","\x58","\x4c"),
	HX_HCSTRING("splice","\x7c","\x85","\x9e","\xbf"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	HX_HCSTRING("unshift","\x89","\xe3","\xb3","\x78"),
	HX_HCSTRING("ofArray","\x02","\x29","\xf2","\x88"),
	HX_HCSTRING("convert","\xf3","\xfd","\xc9","\x1a"),
	HX_HCSTRING("toBoolVector","\xe8","\x55","\xed","\xd8"),
	HX_HCSTRING("toIntVector","\x17","\x82","\x42","\x23"),
	HX_HCSTRING("toFloatVector","\xc4","\x05","\xeb","\x3f"),
	HX_HCSTRING("toFunctionVector","\xd6","\xac","\x5c","\x2b"),
	HX_HCSTRING("toObjectVector","\xfd","\x3a","\x7a","\xae"),
	HX_HCSTRING("fromBoolVector","\x97","\x76","\x3a","\x2f"),
	HX_HCSTRING("fromIntVector","\x48","\x4c","\x46","\x30"),
	HX_HCSTRING("fromFloatVector","\x35","\x7e","\x1a","\x6d"),
	HX_HCSTRING("fromFunctionVector","\x05","\x51","\xd9","\xc1"),
	HX_HCSTRING("fromObjectVector","\x6c","\x25","\xd4","\x0a"),
	HX_HCSTRING("get_fixed","\xcb","\x55","\x4b","\x44"),
	HX_HCSTRING("set_fixed","\xd7","\x41","\x9c","\x27"),
	HX_HCSTRING("get_length","\xaf","\x04","\x8f","\x8f"),
	HX_HCSTRING("set_length","\x23","\xa3","\x0c","\x93"),
	::String(null()) };

void Vector_Impl__obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._Vector.Vector_Impl_","\xcd","\x98","\xe3","\x07");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Vector_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &Vector_Impl__obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Vector_Impl__obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = sStaticStorageInfo;
#endif
	hx::RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace _Vector
