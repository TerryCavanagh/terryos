#include <hxcpp.h>

#ifndef INCLUDED_openfl__Vector_IVector
#include <openfl/_Vector/IVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_ObjectVector
#include <openfl/_Vector/ObjectVector.h>
#endif
namespace openfl{
namespace _Vector{

Void ObjectVector_obj::__construct(Dynamic length,Dynamic fixed,cpp::ArrayBase array)
{
HX_STACK_FRAME("openfl._Vector.ObjectVector","new",0x1b3b8afe,"openfl._Vector.ObjectVector.new","openfl/Vector.hx",1431,0x4a01873c)
HX_STACK_THIS(this)
HX_STACK_ARG(length,"length")
HX_STACK_ARG(fixed,"fixed")
HX_STACK_ARG(array,"array")
{
	HX_STACK_LINE(1433)
	bool tmp = (array == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1433)
	if ((tmp)){
		HX_STACK_LINE(1435)
		array = Dynamic( Array_obj<Dynamic>::__new() );
	}
	HX_STACK_LINE(1439)
	this->__array = array;
	HX_STACK_LINE(1441)
	bool tmp1 = (length != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1441)
	if ((tmp1)){
		HX_STACK_LINE(1443)
		Dynamic tmp2 = length;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1443)
		this->set_length(tmp2);
	}
	HX_STACK_LINE(1447)
	bool tmp2 = (fixed == true);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1447)
	this->fixed = tmp2;
}
;
	return null();
}

//ObjectVector_obj::~ObjectVector_obj() { }

Dynamic ObjectVector_obj::__CreateEmpty() { return  new ObjectVector_obj; }
hx::ObjectPtr< ObjectVector_obj > ObjectVector_obj::__new(Dynamic length,Dynamic fixed,cpp::ArrayBase array)
{  hx::ObjectPtr< ObjectVector_obj > _result_ = new ObjectVector_obj();
	_result_->__construct(length,fixed,array);
	return _result_;}

Dynamic ObjectVector_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ObjectVector_obj > _result_ = new ObjectVector_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _result_;}

hx::Object *ObjectVector_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::openfl::_Vector::IVector_obj)) return operator ::openfl::_Vector::IVector_obj *();
	return super::__ToInterface(inType);
}

ObjectVector_obj::operator ::openfl::_Vector::IVector_obj *()
	{ return new ::openfl::_Vector::IVector_delegate_< ObjectVector_obj >(this); }
::openfl::_Vector::IVector ObjectVector_obj::concat( ::openfl::_Vector::IVector a){
	HX_STACK_FRAME("openfl._Vector.ObjectVector","concat",0x91684536,"openfl._Vector.ObjectVector.concat","openfl/Vector.hx",1452,0x4a01873c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(a,"a")
	HX_STACK_LINE(1454)
	bool tmp = (a == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1454)
	if ((tmp)){
		HX_STACK_LINE(1456)
		::openfl::_Vector::ObjectVector tmp1 = ::openfl::_Vector::ObjectVector_obj::__new(null(),null(),this->__array->__Field(HX_HCSTRING("copy","\xb5","\xbb","\xc4","\x41"), hx::paccDynamic )());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1456)
		return tmp1;
	}
	else{
		HX_STACK_LINE(1460)
		::openfl::_Vector::ObjectVector tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1460)
		tmp1 = hx::TCast< ::openfl::_Vector::ObjectVector >::cast(a);
		HX_STACK_LINE(1460)
		::openfl::_Vector::ObjectVector tmp2 = ::openfl::_Vector::ObjectVector_obj::__new(null(),null(),this->__array->__Field(HX_HCSTRING("concat","\x14","\x09","\xd0","\xc7"), hx::paccDynamic )(((cpp::ArrayBase)(tmp1->__array))));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1460)
		return tmp2;
	}
	HX_STACK_LINE(1454)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ObjectVector_obj,concat,return )

::openfl::_Vector::IVector ObjectVector_obj::copy( ){
	HX_STACK_FRAME("openfl._Vector.ObjectVector","copy",0xb1a04b57,"openfl._Vector.ObjectVector.copy","openfl/Vector.hx",1467,0x4a01873c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1469)
	::openfl::_Vector::ObjectVector tmp = ::openfl::_Vector::ObjectVector_obj::__new(null(),null(),this->__array->__Field(HX_HCSTRING("copy","\xb5","\xbb","\xc4","\x41"), hx::paccDynamic )());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1469)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectVector_obj,copy,return )

Dynamic ObjectVector_obj::get( int index){
	HX_STACK_FRAME("openfl._Vector.ObjectVector","get",0x1b363b34,"openfl._Vector.ObjectVector.get","openfl/Vector.hx",1474,0x4a01873c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(1476)
	Dynamic tmp = this->__array->__GetItem(index);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1476)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(ObjectVector_obj,get,return )

int ObjectVector_obj::indexOf( Dynamic x,Dynamic __o_from){
Dynamic from = __o_from.Default(0);
	HX_STACK_FRAME("openfl._Vector.ObjectVector","indexOf",0x7c5baa67,"openfl._Vector.ObjectVector.indexOf","openfl/Vector.hx",1481,0x4a01873c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(from,"from")
{
		HX_STACK_LINE(1483)
		{
			HX_STACK_LINE(1483)
			int _g1 = from;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(1483)
			int tmp = this->__array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(1483)
			int _g = tmp;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1483)
			while((true)){
				HX_STACK_LINE(1483)
				bool tmp1 = (_g1 < _g);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(1483)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(1483)
				if ((tmp2)){
					HX_STACK_LINE(1483)
					break;
				}
				HX_STACK_LINE(1483)
				int tmp3 = (_g1)++;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(1483)
				int i = tmp3;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(1485)
				Dynamic tmp4 = this->__array->__GetItem(i);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(1485)
				Dynamic tmp5 = x;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1485)
				bool tmp6 = (tmp4 == tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1485)
				if ((tmp6)){
					HX_STACK_LINE(1487)
					int tmp7 = i;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(1487)
					return tmp7;
				}
			}
		}
		HX_STACK_LINE(1493)
		return (int)-1;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(ObjectVector_obj,indexOf,return )

Void ObjectVector_obj::insertAt( int index,Dynamic element){
{
		HX_STACK_FRAME("openfl._Vector.ObjectVector","insertAt",0x4f58852e,"openfl._Vector.ObjectVector.insertAt","openfl/Vector.hx",1498,0x4a01873c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(index,"index")
		HX_STACK_ARG(element,"element")
		HX_STACK_LINE(1500)
		bool tmp = this->fixed;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1500)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1500)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1500)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1500)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1500)
		if ((tmp3)){
			HX_STACK_LINE(1500)
			int tmp5 = index;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1500)
			int tmp6 = this->__array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1500)
			int tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1500)
			tmp4 = (tmp5 < tmp7);
		}
		else{
			HX_STACK_LINE(1500)
			tmp4 = true;
		}
		HX_STACK_LINE(1500)
		if ((tmp4)){
			HX_STACK_LINE(1502)
			int tmp5 = index;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1502)
			Dynamic tmp6 = element;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1502)
			this->__array->__Field(HX_HCSTRING("insert","\x39","\x43","\xdd","\x9d"), hx::paccDynamic )(tmp5,tmp6);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ObjectVector_obj,insertAt,(void))

Dynamic ObjectVector_obj::iterator( ){
	HX_STACK_FRAME("openfl._Vector.ObjectVector","iterator",0x20d35290,"openfl._Vector.ObjectVector.iterator","openfl/Vector.hx",1509,0x4a01873c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1511)
	Dynamic tmp = this->__array->__Field(HX_HCSTRING("iterator","\xee","\x49","\x9a","\x93"), hx::paccDynamic )();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1511)
	Dynamic tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1511)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectVector_obj,iterator,return )

::String ObjectVector_obj::join( ::String sep){
	HX_STACK_FRAME("openfl._Vector.ObjectVector","join",0xb640c38c,"openfl._Vector.ObjectVector.join","openfl/Vector.hx",1516,0x4a01873c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(sep,"sep")
	HX_STACK_LINE(1518)
	::String tmp = sep;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1518)
	::String tmp1 = this->__array->__Field(HX_HCSTRING("join","\xea","\x33","\x65","\x46"), hx::paccDynamic )(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1518)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(ObjectVector_obj,join,return )

int ObjectVector_obj::lastIndexOf( Dynamic x,Dynamic __o_from){
Dynamic from = __o_from.Default(0);
	HX_STACK_FRAME("openfl._Vector.ObjectVector","lastIndexOf",0x069b85b1,"openfl._Vector.ObjectVector.lastIndexOf","openfl/Vector.hx",1523,0x4a01873c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(from,"from")
{
		HX_STACK_LINE(1525)
		int tmp = this->__array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1525)
		int tmp1 = (tmp - (int)1);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1525)
		int i = tmp1;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(1527)
		while((true)){
			HX_STACK_LINE(1527)
			bool tmp2 = (i >= from);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1527)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1527)
			if ((tmp3)){
				HX_STACK_LINE(1527)
				break;
			}
			HX_STACK_LINE(1529)
			Dynamic tmp4 = this->__array->__GetItem(i);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1529)
			Dynamic tmp5 = x;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1529)
			bool tmp6 = (tmp4 == tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1529)
			if ((tmp6)){
				HX_STACK_LINE(1529)
				int tmp7 = i;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1529)
				return tmp7;
			}
			HX_STACK_LINE(1530)
			(i)--;
		}
		HX_STACK_LINE(1534)
		return (int)-1;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(ObjectVector_obj,lastIndexOf,return )

Dynamic ObjectVector_obj::pop( ){
	HX_STACK_FRAME("openfl._Vector.ObjectVector","pop",0x1b3d182f,"openfl._Vector.ObjectVector.pop","openfl/Vector.hx",1539,0x4a01873c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1541)
	bool tmp = this->fixed;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1541)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1541)
	if ((tmp1)){
		HX_STACK_LINE(1543)
		Dynamic tmp2 = this->__array->__Field(HX_HCSTRING("pop","\x91","\x5d","\x55","\x00"), hx::paccDynamic )();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1543)
		return tmp2;
	}
	else{
		HX_STACK_LINE(1547)
		return null();
	}
	HX_STACK_LINE(1541)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectVector_obj,pop,return )

int ObjectVector_obj::push( Dynamic x){
	HX_STACK_FRAME("openfl._Vector.ObjectVector","push",0xba3ca17c,"openfl._Vector.ObjectVector.push","openfl/Vector.hx",1554,0x4a01873c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_LINE(1556)
	bool tmp = this->fixed;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1556)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1556)
	if ((tmp1)){
		HX_STACK_LINE(1558)
		Dynamic tmp2 = x;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1558)
		int tmp3 = this->__array->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1558)
		return tmp3;
	}
	else{
		HX_STACK_LINE(1562)
		int tmp2 = this->__array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1562)
		return tmp2;
	}
	HX_STACK_LINE(1556)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC1(ObjectVector_obj,push,return )

Void ObjectVector_obj::reverse( ){
{
		HX_STACK_FRAME("openfl._Vector.ObjectVector","reverse",0xb6989ac0,"openfl._Vector.ObjectVector.reverse","openfl/Vector.hx",1571,0x4a01873c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(1571)
		this->__array->__Field(HX_HCSTRING("reverse","\x22","\x39","\xfc","\x1a"), hx::paccDynamic )();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectVector_obj,reverse,(void))

Dynamic ObjectVector_obj::set( int index,Dynamic value){
	HX_STACK_FRAME("openfl._Vector.ObjectVector","set",0x1b3f5640,"openfl._Vector.ObjectVector.set","openfl/Vector.hx",1576,0x4a01873c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1578)
	bool tmp = this->fixed;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1578)
	bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1578)
	bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1578)
	bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1578)
	bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1578)
	if ((tmp3)){
		HX_STACK_LINE(1578)
		int tmp5 = index;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1578)
		int tmp6 = this->__array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1578)
		int tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1578)
		tmp4 = (tmp5 < tmp7);
	}
	else{
		HX_STACK_LINE(1578)
		tmp4 = true;
	}
	HX_STACK_LINE(1578)
	if ((tmp4)){
		HX_STACK_LINE(1580)
		Dynamic tmp5 = value;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1580)
		Dynamic tmp6 = hx::IndexRef((this->__array).mPtr,index) = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1580)
		return tmp6;
	}
	else{
		HX_STACK_LINE(1584)
		Dynamic tmp5 = value;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1584)
		return tmp5;
	}
	HX_STACK_LINE(1578)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ObjectVector_obj,set,return )

Dynamic ObjectVector_obj::shift( ){
	HX_STACK_FRAME("openfl._Vector.ObjectVector","shift",0xec650aa0,"openfl._Vector.ObjectVector.shift","openfl/Vector.hx",1591,0x4a01873c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1593)
	bool tmp = this->fixed;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1593)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1593)
	if ((tmp1)){
		HX_STACK_LINE(1595)
		Dynamic tmp2 = this->__array->__Field(HX_HCSTRING("shift","\x82","\xec","\x22","\x7c"), hx::paccDynamic )();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1595)
		return tmp2;
	}
	else{
		HX_STACK_LINE(1599)
		return null();
	}
	HX_STACK_LINE(1593)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectVector_obj,shift,return )

::openfl::_Vector::IVector ObjectVector_obj::slice( Dynamic __o_startIndex,Dynamic __o_endIndex){
Dynamic startIndex = __o_startIndex.Default(0);
Dynamic endIndex = __o_endIndex.Default(16777215);
	HX_STACK_FRAME("openfl._Vector.ObjectVector","slice",0xef09e270,"openfl._Vector.ObjectVector.slice","openfl/Vector.hx",1606,0x4a01873c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(startIndex,"startIndex")
	HX_STACK_ARG(endIndex,"endIndex")
{
		HX_STACK_LINE(1608)
		Dynamic tmp = startIndex;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1608)
		Dynamic tmp1 = endIndex;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1608)
		::openfl::_Vector::ObjectVector tmp2 = ::openfl::_Vector::ObjectVector_obj::__new(null(),null(),this->__array->__Field(HX_HCSTRING("slice","\x52","\xc4","\xc7","\x7e"), hx::paccDynamic )(tmp,tmp1));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1608)
		return tmp2;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(ObjectVector_obj,slice,return )

Void ObjectVector_obj::sort( Dynamic f){
{
		HX_STACK_FRAME("openfl._Vector.ObjectVector","sort",0xbc33b700,"openfl._Vector.ObjectVector.sort","openfl/Vector.hx",1613,0x4a01873c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(f,"f")
		HX_STACK_LINE(1615)
		Dynamic tmp = f;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1615)
		this->__array->__Field(HX_HCSTRING("sort","\x5e","\x27","\x58","\x4c"), hx::paccDynamic )(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ObjectVector_obj,sort,(void))

::openfl::_Vector::IVector ObjectVector_obj::splice( int pos,int len){
	HX_STACK_FRAME("openfl._Vector.ObjectVector","splice",0x8936c19e,"openfl._Vector.ObjectVector.splice","openfl/Vector.hx",1620,0x4a01873c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pos,"pos")
	HX_STACK_ARG(len,"len")
	HX_STACK_LINE(1622)
	int tmp = pos;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1622)
	int tmp1 = len;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1622)
	::openfl::_Vector::ObjectVector tmp2 = ::openfl::_Vector::ObjectVector_obj::__new(null(),null(),this->__array->__Field(HX_HCSTRING("splice","\x7c","\x85","\x9e","\xbf"), hx::paccDynamic )(tmp,tmp1));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1622)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC2(ObjectVector_obj,splice,return )

::String ObjectVector_obj::toString( ){
	HX_STACK_FRAME("openfl._Vector.ObjectVector","toString",0xc5a7d94e,"openfl._Vector.ObjectVector.toString","openfl/Vector.hx",1627,0x4a01873c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1629)
	::String tmp = this->__array->toString();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1629)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectVector_obj,toString,return )

Void ObjectVector_obj::unshift( Dynamic x){
{
		HX_STACK_FRAME("openfl._Vector.ObjectVector","unshift",0x14504527,"openfl._Vector.ObjectVector.unshift","openfl/Vector.hx",1634,0x4a01873c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_LINE(1636)
		bool tmp = this->fixed;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1636)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1636)
		if ((tmp1)){
			HX_STACK_LINE(1638)
			Dynamic tmp2 = x;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1638)
			this->__array->__Field(HX_HCSTRING("unshift","\x89","\xe3","\xb3","\x78"), hx::paccDynamic )(tmp2);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ObjectVector_obj,unshift,(void))

int ObjectVector_obj::get_length( ){
	HX_STACK_FRAME("openfl._Vector.ObjectVector","get_length",0xa394f9d1,"openfl._Vector.ObjectVector.get_length","openfl/Vector.hx",1652,0x4a01873c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1654)
	int tmp = this->__array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1654)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectVector_obj,get_length,return )

int ObjectVector_obj::set_length( int value){
	HX_STACK_FRAME("openfl._Vector.ObjectVector","set_length",0xa7129845,"openfl._Vector.ObjectVector.set_length","openfl/Vector.hx",1659,0x4a01873c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1661)
	bool tmp = this->fixed;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1661)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1661)
	if ((tmp1)){
		HX_STACK_LINE(1665)
		int tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1665)
		this->__array->__Field(HX_HCSTRING("__SetSizeExact","\x7c","\x25","\xcd","\x82"), hx::paccDynamic )(tmp2);
	}
	HX_STACK_LINE(1694)
	int tmp2 = this->__array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1694)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(ObjectVector_obj,set_length,return )


ObjectVector_obj::ObjectVector_obj()
{
}

void ObjectVector_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ObjectVector);
	HX_MARK_MEMBER_NAME(fixed,"fixed");
	HX_MARK_MEMBER_NAME(__array,"__array");
	HX_MARK_END_CLASS();
}

void ObjectVector_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(fixed,"fixed");
	HX_VISIT_MEMBER_NAME(__array,"__array");
}

Dynamic ObjectVector_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
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

Dynamic ObjectVector_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
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

void ObjectVector_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("fixed","\x74","\xf9","\xa1","\x00"));
	outFields->push(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"));
	outFields->push(HX_HCSTRING("__array","\x79","\xc6","\xed","\x8f"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(ObjectVector_obj,fixed),HX_HCSTRING("fixed","\x74","\xf9","\xa1","\x00")},
	{hx::fsObject /*cpp::ArrayBase*/ ,(int)offsetof(ObjectVector_obj,__array),HX_HCSTRING("__array","\x79","\xc6","\xed","\x8f")},
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
	HX_MARK_MEMBER_NAME(ObjectVector_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ObjectVector_obj::__mClass,"__mClass");
};

#endif

hx::Class ObjectVector_obj::__mClass;

void ObjectVector_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._Vector.ObjectVector","\x0c","\xf4","\x26","\xc3");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ObjectVector_obj >;
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
