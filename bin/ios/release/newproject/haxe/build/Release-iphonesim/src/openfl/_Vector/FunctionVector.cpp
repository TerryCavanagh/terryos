#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_openfl__Vector_FunctionVector
#include <openfl/_Vector/FunctionVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_IVector
#include <openfl/_Vector/IVector.h>
#endif
namespace openfl{
namespace _Vector{

Void FunctionVector_obj::__construct(Dynamic length,Dynamic fixed,cpp::ArrayBase array)
{
HX_STACK_FRAME("openfl._Vector.FunctionVector","new",0x9bdddf17,"openfl._Vector.FunctionVector.new","openfl/Vector.hx",859,0x4a01873c)
HX_STACK_THIS(this)
HX_STACK_ARG(length,"length")
HX_STACK_ARG(fixed,"fixed")
HX_STACK_ARG(array,"array")
{
	HX_STACK_LINE(861)
	bool tmp = (array == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(861)
	if ((tmp)){
		HX_STACK_LINE(863)
		array = Dynamic( Array_obj<Dynamic>::__new() );
	}
	HX_STACK_LINE(867)
	this->__array = array;
	HX_STACK_LINE(869)
	bool tmp1 = (length != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(869)
	if ((tmp1)){
		HX_STACK_LINE(871)
		Dynamic tmp2 = length;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(871)
		this->set_length(tmp2);
	}
	HX_STACK_LINE(875)
	bool tmp2 = (fixed == true);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(875)
	this->fixed = tmp2;
}
;
	return null();
}

//FunctionVector_obj::~FunctionVector_obj() { }

Dynamic FunctionVector_obj::__CreateEmpty() { return  new FunctionVector_obj; }
hx::ObjectPtr< FunctionVector_obj > FunctionVector_obj::__new(Dynamic length,Dynamic fixed,cpp::ArrayBase array)
{  hx::ObjectPtr< FunctionVector_obj > _result_ = new FunctionVector_obj();
	_result_->__construct(length,fixed,array);
	return _result_;}

Dynamic FunctionVector_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FunctionVector_obj > _result_ = new FunctionVector_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _result_;}

hx::Object *FunctionVector_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::openfl::_Vector::IVector_obj)) return operator ::openfl::_Vector::IVector_obj *();
	return super::__ToInterface(inType);
}

FunctionVector_obj::operator ::openfl::_Vector::IVector_obj *()
	{ return new ::openfl::_Vector::IVector_delegate_< FunctionVector_obj >(this); }
::openfl::_Vector::IVector FunctionVector_obj::concat( ::openfl::_Vector::IVector a){
	HX_STACK_FRAME("openfl._Vector.FunctionVector","concat",0x3878c6bd,"openfl._Vector.FunctionVector.concat","openfl/Vector.hx",880,0x4a01873c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(a,"a")
	HX_STACK_LINE(882)
	bool tmp = (a == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(882)
	if ((tmp)){
		HX_STACK_LINE(884)
		::openfl::_Vector::FunctionVector tmp1 = ::openfl::_Vector::FunctionVector_obj::__new(null(),null(),this->__array->__Field(HX_HCSTRING("copy","\xb5","\xbb","\xc4","\x41"), hx::paccDynamic )());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(884)
		return tmp1;
	}
	else{
		HX_STACK_LINE(888)
		::openfl::_Vector::FunctionVector tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(888)
		tmp1 = hx::TCast< ::openfl::_Vector::FunctionVector >::cast(a);
		HX_STACK_LINE(888)
		::openfl::_Vector::FunctionVector tmp2 = ::openfl::_Vector::FunctionVector_obj::__new(null(),null(),this->__array->__Field(HX_HCSTRING("concat","\x14","\x09","\xd0","\xc7"), hx::paccDynamic )(tmp1->__array));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(888)
		return tmp2;
	}
	HX_STACK_LINE(882)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FunctionVector_obj,concat,return )

::openfl::_Vector::IVector FunctionVector_obj::copy( ){
	HX_STACK_FRAME("openfl._Vector.FunctionVector","copy",0xbf078d1e,"openfl._Vector.FunctionVector.copy","openfl/Vector.hx",895,0x4a01873c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(897)
	bool tmp = this->fixed;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(897)
	::openfl::_Vector::FunctionVector tmp1 = ::openfl::_Vector::FunctionVector_obj::__new(null(),tmp,this->__array->__Field(HX_HCSTRING("copy","\xb5","\xbb","\xc4","\x41"), hx::paccDynamic )());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(897)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(FunctionVector_obj,copy,return )

Dynamic FunctionVector_obj::get( int index){
	HX_STACK_FRAME("openfl._Vector.FunctionVector","get",0x9bd88f4d,"openfl._Vector.FunctionVector.get","openfl/Vector.hx",902,0x4a01873c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(904)
	int tmp = index;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(904)
	int tmp1 = this->__array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(904)
	bool tmp2 = (tmp >= tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(904)
	if ((tmp2)){
		HX_STACK_LINE(906)
		return null();
	}
	else{
		HX_STACK_LINE(910)
		Dynamic tmp3 = this->__array->__GetItem(index);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(910)
		return tmp3;
	}
	HX_STACK_LINE(904)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FunctionVector_obj,get,return )

int FunctionVector_obj::indexOf( Dynamic x,Dynamic __o_from){
Dynamic from = __o_from.Default(0);
	HX_STACK_FRAME("openfl._Vector.FunctionVector","indexOf",0x03bc7f00,"openfl._Vector.FunctionVector.indexOf","openfl/Vector.hx",917,0x4a01873c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(from,"from")
{
		HX_STACK_LINE(919)
		{
			HX_STACK_LINE(919)
			int _g1 = from;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(919)
			int tmp = this->__array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(919)
			int _g = tmp;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(919)
			while((true)){
				HX_STACK_LINE(919)
				bool tmp1 = (_g1 < _g);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(919)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(919)
				if ((tmp2)){
					HX_STACK_LINE(919)
					break;
				}
				HX_STACK_LINE(919)
				int tmp3 = (_g1)++;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(919)
				int i = tmp3;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(921)
				Dynamic tmp4 = this->__array->__GetItem(i);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(921)
				Dynamic tmp5 = x;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(921)
				bool tmp6 = ::Reflect_obj::compareMethods(tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(921)
				if ((tmp6)){
					HX_STACK_LINE(923)
					int tmp7 = i;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(923)
					return tmp7;
				}
			}
		}
		HX_STACK_LINE(929)
		return (int)-1;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(FunctionVector_obj,indexOf,return )

Void FunctionVector_obj::insertAt( int index,Dynamic element){
{
		HX_STACK_FRAME("openfl._Vector.FunctionVector","insertAt",0x3cb1b675,"openfl._Vector.FunctionVector.insertAt","openfl/Vector.hx",934,0x4a01873c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(index,"index")
		HX_STACK_ARG(element,"element")
		HX_STACK_LINE(936)
		bool tmp = this->fixed;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(936)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(936)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(936)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(936)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(936)
		if ((tmp3)){
			HX_STACK_LINE(936)
			int tmp5 = index;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(936)
			int tmp6 = this->__array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(936)
			int tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(936)
			tmp4 = (tmp5 < tmp7);
		}
		else{
			HX_STACK_LINE(936)
			tmp4 = true;
		}
		HX_STACK_LINE(936)
		if ((tmp4)){
			HX_STACK_LINE(938)
			int tmp5 = index;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(938)
			Dynamic tmp6 = element;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(938)
			this->__array->__Field(HX_HCSTRING("insert","\x39","\x43","\xdd","\x9d"), hx::paccDynamic )(tmp5,tmp6);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FunctionVector_obj,insertAt,(void))

Dynamic FunctionVector_obj::iterator( ){
	HX_STACK_FRAME("openfl._Vector.FunctionVector","iterator",0x0e2c83d7,"openfl._Vector.FunctionVector.iterator","openfl/Vector.hx",945,0x4a01873c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(947)
	Dynamic tmp = this->__array->__Field(HX_HCSTRING("iterator","\xee","\x49","\x9a","\x93"), hx::paccDynamic )();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(947)
	Dynamic tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(947)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(FunctionVector_obj,iterator,return )

::String FunctionVector_obj::join( ::String sep){
	HX_STACK_FRAME("openfl._Vector.FunctionVector","join",0xc3a80553,"openfl._Vector.FunctionVector.join","openfl/Vector.hx",952,0x4a01873c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(sep,"sep")
	HX_STACK_LINE(954)
	::String tmp = sep;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(954)
	::String tmp1 = this->__array->__Field(HX_HCSTRING("join","\xea","\x33","\x65","\x46"), hx::paccDynamic )(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(954)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(FunctionVector_obj,join,return )

int FunctionVector_obj::lastIndexOf( Dynamic x,Dynamic __o_from){
Dynamic from = __o_from.Default(0);
	HX_STACK_FRAME("openfl._Vector.FunctionVector","lastIndexOf",0xc9451aca,"openfl._Vector.FunctionVector.lastIndexOf","openfl/Vector.hx",959,0x4a01873c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(from,"from")
{
		HX_STACK_LINE(961)
		int tmp = this->__array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(961)
		int tmp1 = (tmp - (int)1);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(961)
		int i = tmp1;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(963)
		while((true)){
			HX_STACK_LINE(963)
			bool tmp2 = (i >= from);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(963)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(963)
			if ((tmp3)){
				HX_STACK_LINE(963)
				break;
			}
			HX_STACK_LINE(965)
			Dynamic tmp4 = this->__array->__GetItem(i);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(965)
			Dynamic tmp5 = x;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(965)
			bool tmp6 = ::Reflect_obj::compareMethods(tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(965)
			if ((tmp6)){
				HX_STACK_LINE(965)
				int tmp7 = i;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(965)
				return tmp7;
			}
			HX_STACK_LINE(966)
			(i)--;
		}
		HX_STACK_LINE(970)
		return (int)-1;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(FunctionVector_obj,lastIndexOf,return )

Dynamic FunctionVector_obj::pop( ){
	HX_STACK_FRAME("openfl._Vector.FunctionVector","pop",0x9bdf6c48,"openfl._Vector.FunctionVector.pop","openfl/Vector.hx",975,0x4a01873c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(977)
	bool tmp = this->fixed;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(977)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(977)
	if ((tmp1)){
		HX_STACK_LINE(979)
		Dynamic tmp2 = this->__array->__Field(HX_HCSTRING("pop","\x91","\x5d","\x55","\x00"), hx::paccDynamic )();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(979)
		return tmp2;
	}
	else{
		HX_STACK_LINE(983)
		return null();
	}
	HX_STACK_LINE(977)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FunctionVector_obj,pop,return )

int FunctionVector_obj::push( Dynamic x){
	HX_STACK_FRAME("openfl._Vector.FunctionVector","push",0xc7a3e343,"openfl._Vector.FunctionVector.push","openfl/Vector.hx",990,0x4a01873c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_LINE(992)
	bool tmp = this->fixed;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(992)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(992)
	if ((tmp1)){
		HX_STACK_LINE(994)
		Dynamic tmp2 = x;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(994)
		int tmp3 = this->__array->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(994)
		return tmp3;
	}
	else{
		HX_STACK_LINE(998)
		int tmp2 = this->__array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(998)
		return tmp2;
	}
	HX_STACK_LINE(992)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC1(FunctionVector_obj,push,return )

Void FunctionVector_obj::reverse( ){
{
		HX_STACK_FRAME("openfl._Vector.FunctionVector","reverse",0x3df96f59,"openfl._Vector.FunctionVector.reverse","openfl/Vector.hx",1007,0x4a01873c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(1007)
		this->__array->__Field(HX_HCSTRING("reverse","\x22","\x39","\xfc","\x1a"), hx::paccDynamic )();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FunctionVector_obj,reverse,(void))

Dynamic FunctionVector_obj::set( int index,Dynamic value){
	HX_STACK_FRAME("openfl._Vector.FunctionVector","set",0x9be1aa59,"openfl._Vector.FunctionVector.set","openfl/Vector.hx",1012,0x4a01873c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1014)
	bool tmp = this->fixed;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1014)
	bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1014)
	bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1014)
	bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1014)
	bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1014)
	if ((tmp3)){
		HX_STACK_LINE(1014)
		int tmp5 = index;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1014)
		int tmp6 = this->__array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1014)
		int tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1014)
		tmp4 = (tmp5 < tmp7);
	}
	else{
		HX_STACK_LINE(1014)
		tmp4 = true;
	}
	HX_STACK_LINE(1014)
	if ((tmp4)){
		HX_STACK_LINE(1016)
		Dynamic tmp5 = value;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1016)
		Dynamic tmp6 = hx::IndexRef((this->__array).mPtr,index) = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1016)
		return tmp6;
	}
	else{
		HX_STACK_LINE(1020)
		Dynamic tmp5 = value;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1020)
		return tmp5;
	}
	HX_STACK_LINE(1014)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FunctionVector_obj,set,return )

Dynamic FunctionVector_obj::shift( ){
	HX_STACK_FRAME("openfl._Vector.FunctionVector","shift",0x995756f9,"openfl._Vector.FunctionVector.shift","openfl/Vector.hx",1027,0x4a01873c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1029)
	bool tmp = this->fixed;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1029)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1029)
	if ((tmp1)){
		HX_STACK_LINE(1031)
		Dynamic tmp2 = this->__array->__Field(HX_HCSTRING("shift","\x82","\xec","\x22","\x7c"), hx::paccDynamic )();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1031)
		return tmp2;
	}
	else{
		HX_STACK_LINE(1035)
		return null();
	}
	HX_STACK_LINE(1029)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FunctionVector_obj,shift,return )

::openfl::_Vector::IVector FunctionVector_obj::slice( Dynamic __o_startIndex,Dynamic __o_endIndex){
Dynamic startIndex = __o_startIndex.Default(0);
Dynamic endIndex = __o_endIndex.Default(16777215);
	HX_STACK_FRAME("openfl._Vector.FunctionVector","slice",0x9bfc2ec9,"openfl._Vector.FunctionVector.slice","openfl/Vector.hx",1042,0x4a01873c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(startIndex,"startIndex")
	HX_STACK_ARG(endIndex,"endIndex")
{
		HX_STACK_LINE(1044)
		Dynamic tmp = startIndex;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1044)
		Dynamic tmp1 = endIndex;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1044)
		::openfl::_Vector::FunctionVector tmp2 = ::openfl::_Vector::FunctionVector_obj::__new(null(),null(),this->__array->__Field(HX_HCSTRING("slice","\x52","\xc4","\xc7","\x7e"), hx::paccDynamic )(tmp,tmp1));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1044)
		return tmp2;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(FunctionVector_obj,slice,return )

Void FunctionVector_obj::sort( Dynamic f){
{
		HX_STACK_FRAME("openfl._Vector.FunctionVector","sort",0xc99af8c7,"openfl._Vector.FunctionVector.sort","openfl/Vector.hx",1049,0x4a01873c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(f,"f")
		HX_STACK_LINE(1051)
		Dynamic tmp = f;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1051)
		this->__array->__Field(HX_HCSTRING("sort","\x5e","\x27","\x58","\x4c"), hx::paccDynamic )(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FunctionVector_obj,sort,(void))

::openfl::_Vector::IVector FunctionVector_obj::splice( int pos,int len){
	HX_STACK_FRAME("openfl._Vector.FunctionVector","splice",0x30474325,"openfl._Vector.FunctionVector.splice","openfl/Vector.hx",1056,0x4a01873c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pos,"pos")
	HX_STACK_ARG(len,"len")
	HX_STACK_LINE(1058)
	int tmp = pos;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1058)
	int tmp1 = len;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1058)
	::openfl::_Vector::FunctionVector tmp2 = ::openfl::_Vector::FunctionVector_obj::__new(null(),null(),this->__array->__Field(HX_HCSTRING("splice","\x7c","\x85","\x9e","\xbf"), hx::paccDynamic )(tmp,tmp1));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1058)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC2(FunctionVector_obj,splice,return )

::String FunctionVector_obj::toString( ){
	HX_STACK_FRAME("openfl._Vector.FunctionVector","toString",0xb3010a95,"openfl._Vector.FunctionVector.toString","openfl/Vector.hx",1063,0x4a01873c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1065)
	::String tmp = this->__array->toString();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1065)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(FunctionVector_obj,toString,return )

Void FunctionVector_obj::unshift( Dynamic x){
{
		HX_STACK_FRAME("openfl._Vector.FunctionVector","unshift",0x9bb119c0,"openfl._Vector.FunctionVector.unshift","openfl/Vector.hx",1070,0x4a01873c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_LINE(1072)
		bool tmp = this->fixed;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1072)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1072)
		if ((tmp1)){
			HX_STACK_LINE(1074)
			Dynamic tmp2 = x;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1074)
			this->__array->__Field(HX_HCSTRING("unshift","\x89","\xe3","\xb3","\x78"), hx::paccDynamic )(tmp2);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FunctionVector_obj,unshift,(void))

int FunctionVector_obj::get_length( ){
	HX_STACK_FRAME("openfl._Vector.FunctionVector","get_length",0x7e924ad8,"openfl._Vector.FunctionVector.get_length","openfl/Vector.hx",1088,0x4a01873c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1090)
	int tmp = this->__array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1090)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(FunctionVector_obj,get_length,return )

int FunctionVector_obj::set_length( int value){
	HX_STACK_FRAME("openfl._Vector.FunctionVector","set_length",0x820fe94c,"openfl._Vector.FunctionVector.set_length","openfl/Vector.hx",1095,0x4a01873c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1097)
	bool tmp = this->fixed;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1097)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1097)
	if ((tmp1)){
		HX_STACK_LINE(1101)
		int tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1101)
		this->__array->__Field(HX_HCSTRING("__SetSizeExact","\x7c","\x25","\xcd","\x82"), hx::paccDynamic )(tmp2);
	}
	HX_STACK_LINE(1130)
	int tmp2 = this->__array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1130)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(FunctionVector_obj,set_length,return )


FunctionVector_obj::FunctionVector_obj()
{
}

void FunctionVector_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FunctionVector);
	HX_MARK_MEMBER_NAME(fixed,"fixed");
	HX_MARK_MEMBER_NAME(__array,"__array");
	HX_MARK_END_CLASS();
}

void FunctionVector_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(fixed,"fixed");
	HX_VISIT_MEMBER_NAME(__array,"__array");
}

Dynamic FunctionVector_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return get_dyn(); }
		if (HX_FIELD_EQ(inName,"pop") ) { return pop_dyn(); }
		if (HX_FIELD_EQ(inName,"set") ) { return set_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"copy") ) { return copy_dyn(); }
		if (HX_FIELD_EQ(inName,"join") ) { return join_dyn(); }
		if (HX_FIELD_EQ(inName,"push") ) { return push_dyn(); }
		if (HX_FIELD_EQ(inName,"sort") ) { return sort_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"fixed") ) { return fixed; }
		if (HX_FIELD_EQ(inName,"shift") ) { return shift_dyn(); }
		if (HX_FIELD_EQ(inName,"slice") ) { return slice_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { if (inCallProp == hx::paccAlways) return get_length(); }
		if (HX_FIELD_EQ(inName,"concat") ) { return concat_dyn(); }
		if (HX_FIELD_EQ(inName,"splice") ) { return splice_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"__array") ) { return __array; }
		if (HX_FIELD_EQ(inName,"indexOf") ) { return indexOf_dyn(); }
		if (HX_FIELD_EQ(inName,"reverse") ) { return reverse_dyn(); }
		if (HX_FIELD_EQ(inName,"unshift") ) { return unshift_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"insertAt") ) { return insertAt_dyn(); }
		if (HX_FIELD_EQ(inName,"iterator") ) { return iterator_dyn(); }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_length") ) { return get_length_dyn(); }
		if (HX_FIELD_EQ(inName,"set_length") ) { return set_length_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"lastIndexOf") ) { return lastIndexOf_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FunctionVector_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"fixed") ) { fixed=inValue.Cast< bool >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { if (inCallProp == hx::paccAlways) return set_length(inValue); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"__array") ) { __array=inValue.Cast< cpp::ArrayBase >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FunctionVector_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("fixed","\x74","\xf9","\xa1","\x00"));
	outFields->push(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"));
	outFields->push(HX_HCSTRING("__array","\x79","\xc6","\xed","\x8f"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(FunctionVector_obj,fixed),HX_HCSTRING("fixed","\x74","\xf9","\xa1","\x00")},
	{hx::fsObject /*cpp::ArrayBase*/ ,(int)offsetof(FunctionVector_obj,__array),HX_HCSTRING("__array","\x79","\xc6","\xed","\x8f")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("fixed","\x74","\xf9","\xa1","\x00"),
	HX_HCSTRING("__array","\x79","\xc6","\xed","\x8f"),
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
	HX_HCSTRING("get_length","\xaf","\x04","\x8f","\x8f"),
	HX_HCSTRING("set_length","\x23","\xa3","\x0c","\x93"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FunctionVector_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FunctionVector_obj::__mClass,"__mClass");
};

#endif

hx::Class FunctionVector_obj::__mClass;

void FunctionVector_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._Vector.FunctionVector","\xa5","\x07","\x75","\x4f");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FunctionVector_obj >;
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
