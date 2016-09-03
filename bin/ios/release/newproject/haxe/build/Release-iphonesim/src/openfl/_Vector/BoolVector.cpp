#include <hxcpp.h>

#ifndef INCLUDED_openfl__Vector_BoolVector
#include <openfl/_Vector/BoolVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_IVector
#include <openfl/_Vector/IVector.h>
#endif
namespace openfl{
namespace _Vector{

Void BoolVector_obj::__construct(Dynamic length,Dynamic fixed,Array< bool > array)
{
HX_STACK_FRAME("openfl._Vector.BoolVector","new",0x3a8665a9,"openfl._Vector.BoolVector.new","openfl/Vector.hx",287,0x4a01873c)
HX_STACK_THIS(this)
HX_STACK_ARG(length,"length")
HX_STACK_ARG(fixed,"fixed")
HX_STACK_ARG(array,"array")
{
	HX_STACK_LINE(289)
	bool tmp = (array == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(289)
	if ((tmp)){
		HX_STACK_LINE(291)
		array = Array_obj< bool >::__new();
	}
	HX_STACK_LINE(295)
	this->__array = array;
	HX_STACK_LINE(297)
	bool tmp1 = (length != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(297)
	if ((tmp1)){
		HX_STACK_LINE(299)
		Dynamic tmp2 = length;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(299)
		this->set_length(tmp2);
	}
	HX_STACK_LINE(303)
	bool tmp2 = (fixed == true);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(303)
	this->fixed = tmp2;
}
;
	return null();
}

//BoolVector_obj::~BoolVector_obj() { }

Dynamic BoolVector_obj::__CreateEmpty() { return  new BoolVector_obj; }
hx::ObjectPtr< BoolVector_obj > BoolVector_obj::__new(Dynamic length,Dynamic fixed,Array< bool > array)
{  hx::ObjectPtr< BoolVector_obj > _result_ = new BoolVector_obj();
	_result_->__construct(length,fixed,array);
	return _result_;}

Dynamic BoolVector_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< BoolVector_obj > _result_ = new BoolVector_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _result_;}

hx::Object *BoolVector_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::openfl::_Vector::IVector_obj)) return operator ::openfl::_Vector::IVector_obj *();
	return super::__ToInterface(inType);
}

BoolVector_obj::operator ::openfl::_Vector::IVector_obj *()
	{ return new ::openfl::_Vector::IVector_delegate_< BoolVector_obj >(this); }
::openfl::_Vector::IVector BoolVector_obj::concat( ::openfl::_Vector::IVector a){
	HX_STACK_FRAME("openfl._Vector.BoolVector","concat",0x25e9276b,"openfl._Vector.BoolVector.concat","openfl/Vector.hx",308,0x4a01873c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(a,"a")
	HX_STACK_LINE(310)
	bool tmp = (a == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(310)
	if ((tmp)){
		HX_STACK_LINE(312)
		::openfl::_Vector::BoolVector tmp1 = ::openfl::_Vector::BoolVector_obj::__new(null(),null(),this->__array->copy());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(312)
		return tmp1;
	}
	else{
		HX_STACK_LINE(316)
		::openfl::_Vector::BoolVector tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(316)
		tmp1 = hx::TCast< ::openfl::_Vector::BoolVector >::cast(a);
		HX_STACK_LINE(316)
		::openfl::_Vector::BoolVector tmp2 = ::openfl::_Vector::BoolVector_obj::__new(null(),null(),this->__array->concat(tmp1->__array));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(316)
		return tmp2;
	}
	HX_STACK_LINE(310)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BoolVector_obj,concat,return )

::openfl::_Vector::IVector BoolVector_obj::copy( ){
	HX_STACK_FRAME("openfl._Vector.BoolVector","copy",0xf3d4c64c,"openfl._Vector.BoolVector.copy","openfl/Vector.hx",323,0x4a01873c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(325)
	bool tmp = this->fixed;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(325)
	::openfl::_Vector::BoolVector tmp1 = ::openfl::_Vector::BoolVector_obj::__new(null(),tmp,this->__array->copy());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(325)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(BoolVector_obj,copy,return )

bool BoolVector_obj::get( int index){
	HX_STACK_FRAME("openfl._Vector.BoolVector","get",0x3a8115df,"openfl._Vector.BoolVector.get","openfl/Vector.hx",330,0x4a01873c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(332)
	int tmp = index;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(332)
	int tmp1 = this->__array->length;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(332)
	bool tmp2 = (tmp >= tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(332)
	if ((tmp2)){
		HX_STACK_LINE(334)
		return false;
	}
	else{
		HX_STACK_LINE(338)
		bool tmp3 = this->__array->__get(index);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(338)
		return tmp3;
	}
	HX_STACK_LINE(332)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(BoolVector_obj,get,return )

int BoolVector_obj::indexOf( bool x,Dynamic __o_from){
Dynamic from = __o_from.Default(0);
	HX_STACK_FRAME("openfl._Vector.BoolVector","indexOf",0xd8a0b692,"openfl._Vector.BoolVector.indexOf","openfl/Vector.hx",345,0x4a01873c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(from,"from")
{
		HX_STACK_LINE(347)
		{
			HX_STACK_LINE(347)
			int _g1 = from;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(347)
			int tmp = this->__array->length;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(347)
			int _g = tmp;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(347)
			while((true)){
				HX_STACK_LINE(347)
				bool tmp1 = (_g1 < _g);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(347)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(347)
				if ((tmp2)){
					HX_STACK_LINE(347)
					break;
				}
				HX_STACK_LINE(347)
				int tmp3 = (_g1)++;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(347)
				int i = tmp3;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(349)
				bool tmp4 = this->__array->__get(i);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(349)
				bool tmp5 = x;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(349)
				bool tmp6 = (tmp4 == tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(349)
				if ((tmp6)){
					HX_STACK_LINE(351)
					int tmp7 = i;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(351)
					return tmp7;
				}
			}
		}
		HX_STACK_LINE(357)
		return (int)-1;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(BoolVector_obj,indexOf,return )

Void BoolVector_obj::insertAt( int index,bool element){
{
		HX_STACK_FRAME("openfl._Vector.BoolVector","insertAt",0xaf7e1ea3,"openfl._Vector.BoolVector.insertAt","openfl/Vector.hx",362,0x4a01873c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(index,"index")
		HX_STACK_ARG(element,"element")
		HX_STACK_LINE(364)
		bool tmp = this->fixed;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(364)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(364)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(364)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(364)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(364)
		if ((tmp3)){
			HX_STACK_LINE(364)
			int tmp5 = index;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(364)
			int tmp6 = this->__array->length;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(364)
			int tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(364)
			tmp4 = (tmp5 < tmp7);
		}
		else{
			HX_STACK_LINE(364)
			tmp4 = true;
		}
		HX_STACK_LINE(364)
		if ((tmp4)){
			HX_STACK_LINE(366)
			int tmp5 = index;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(366)
			bool tmp6 = element;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(366)
			this->__array->insert(tmp5,tmp6);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(BoolVector_obj,insertAt,(void))

Dynamic BoolVector_obj::iterator( ){
	HX_STACK_FRAME("openfl._Vector.BoolVector","iterator",0x80f8ec05,"openfl._Vector.BoolVector.iterator","openfl/Vector.hx",373,0x4a01873c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(375)
	Dynamic tmp = this->__array->iterator();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(375)
	Dynamic tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(375)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(BoolVector_obj,iterator,return )

::String BoolVector_obj::join( ::String sep){
	HX_STACK_FRAME("openfl._Vector.BoolVector","join",0xf8753e81,"openfl._Vector.BoolVector.join","openfl/Vector.hx",380,0x4a01873c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(sep,"sep")
	HX_STACK_LINE(382)
	::String tmp = sep;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(382)
	::String tmp1 = this->__array->join(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(382)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(BoolVector_obj,join,return )

int BoolVector_obj::lastIndexOf( bool x,Dynamic __o_from){
Dynamic from = __o_from.Default(0);
	HX_STACK_FRAME("openfl._Vector.BoolVector","lastIndexOf",0xfa91835c,"openfl._Vector.BoolVector.lastIndexOf","openfl/Vector.hx",387,0x4a01873c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(from,"from")
{
		HX_STACK_LINE(389)
		int tmp = this->__array->length;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(389)
		int tmp1 = (tmp - (int)1);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(389)
		int i = tmp1;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(391)
		while((true)){
			HX_STACK_LINE(391)
			bool tmp2 = (i >= from);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(391)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(391)
			if ((tmp3)){
				HX_STACK_LINE(391)
				break;
			}
			HX_STACK_LINE(393)
			bool tmp4 = this->__array->__get(i);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(393)
			bool tmp5 = x;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(393)
			bool tmp6 = (tmp4 == tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(393)
			if ((tmp6)){
				HX_STACK_LINE(393)
				int tmp7 = i;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(393)
				return tmp7;
			}
			HX_STACK_LINE(394)
			(i)--;
		}
		HX_STACK_LINE(398)
		return (int)-1;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(BoolVector_obj,lastIndexOf,return )

Dynamic BoolVector_obj::pop( ){
	HX_STACK_FRAME("openfl._Vector.BoolVector","pop",0x3a87f2da,"openfl._Vector.BoolVector.pop","openfl/Vector.hx",403,0x4a01873c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(405)
	bool tmp = this->fixed;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(405)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(405)
	if ((tmp1)){
		HX_STACK_LINE(407)
		Dynamic tmp2 = this->__array->pop();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(407)
		return tmp2;
	}
	else{
		HX_STACK_LINE(411)
		return null();
	}
	HX_STACK_LINE(405)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC0(BoolVector_obj,pop,return )

int BoolVector_obj::push( bool x){
	HX_STACK_FRAME("openfl._Vector.BoolVector","push",0xfc711c71,"openfl._Vector.BoolVector.push","openfl/Vector.hx",418,0x4a01873c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_LINE(420)
	bool tmp = this->fixed;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(420)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(420)
	if ((tmp1)){
		HX_STACK_LINE(422)
		bool tmp2 = x;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(422)
		int tmp3 = this->__array->push(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(422)
		return tmp3;
	}
	else{
		HX_STACK_LINE(426)
		int tmp2 = this->__array->length;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(426)
		return tmp2;
	}
	HX_STACK_LINE(420)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC1(BoolVector_obj,push,return )

Void BoolVector_obj::reverse( ){
{
		HX_STACK_FRAME("openfl._Vector.BoolVector","reverse",0x12dda6eb,"openfl._Vector.BoolVector.reverse","openfl/Vector.hx",435,0x4a01873c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(435)
		this->__array->reverse();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BoolVector_obj,reverse,(void))

bool BoolVector_obj::set( int index,bool value){
	HX_STACK_FRAME("openfl._Vector.BoolVector","set",0x3a8a30eb,"openfl._Vector.BoolVector.set","openfl/Vector.hx",440,0x4a01873c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(442)
	bool tmp = this->fixed;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(442)
	bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(442)
	bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(442)
	bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(442)
	bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(442)
	if ((tmp3)){
		HX_STACK_LINE(442)
		int tmp5 = index;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(442)
		int tmp6 = this->__array->length;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(442)
		int tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(442)
		tmp4 = (tmp5 < tmp7);
	}
	else{
		HX_STACK_LINE(442)
		tmp4 = true;
	}
	HX_STACK_LINE(442)
	if ((tmp4)){
		HX_STACK_LINE(444)
		bool tmp5 = value;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(444)
		bool tmp6 = this->__array[index] = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(444)
		return tmp6;
	}
	else{
		HX_STACK_LINE(448)
		bool tmp5 = value;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(448)
		return tmp5;
	}
	HX_STACK_LINE(442)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC2(BoolVector_obj,set,return )

Dynamic BoolVector_obj::shift( ){
	HX_STACK_FRAME("openfl._Vector.BoolVector","shift",0x981c260b,"openfl._Vector.BoolVector.shift","openfl/Vector.hx",455,0x4a01873c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(457)
	bool tmp = this->fixed;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(457)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(457)
	if ((tmp1)){
		HX_STACK_LINE(459)
		Dynamic tmp2 = this->__array->shift();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(459)
		return tmp2;
	}
	else{
		HX_STACK_LINE(463)
		return null();
	}
	HX_STACK_LINE(457)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC0(BoolVector_obj,shift,return )

::openfl::_Vector::IVector BoolVector_obj::slice( Dynamic __o_startIndex,Dynamic __o_endIndex){
Dynamic startIndex = __o_startIndex.Default(0);
Dynamic endIndex = __o_endIndex.Default(16777215);
	HX_STACK_FRAME("openfl._Vector.BoolVector","slice",0x9ac0fddb,"openfl._Vector.BoolVector.slice","openfl/Vector.hx",470,0x4a01873c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(startIndex,"startIndex")
	HX_STACK_ARG(endIndex,"endIndex")
{
		HX_STACK_LINE(472)
		Dynamic tmp = startIndex;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(472)
		Dynamic tmp1 = endIndex;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(472)
		::openfl::_Vector::BoolVector tmp2 = ::openfl::_Vector::BoolVector_obj::__new(null(),null(),this->__array->slice(tmp,tmp1));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(472)
		return tmp2;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(BoolVector_obj,slice,return )

Void BoolVector_obj::sort( Dynamic f){
{
		HX_STACK_FRAME("openfl._Vector.BoolVector","sort",0xfe6831f5,"openfl._Vector.BoolVector.sort","openfl/Vector.hx",477,0x4a01873c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(f,"f")
		HX_STACK_LINE(479)
		Dynamic tmp = f;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(479)
		this->__array->sort(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BoolVector_obj,sort,(void))

::openfl::_Vector::IVector BoolVector_obj::splice( int pos,int len){
	HX_STACK_FRAME("openfl._Vector.BoolVector","splice",0x1db7a3d3,"openfl._Vector.BoolVector.splice","openfl/Vector.hx",484,0x4a01873c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pos,"pos")
	HX_STACK_ARG(len,"len")
	HX_STACK_LINE(486)
	int tmp = pos;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(486)
	int tmp1 = len;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(486)
	::openfl::_Vector::BoolVector tmp2 = ::openfl::_Vector::BoolVector_obj::__new(null(),null(),this->__array->splice(tmp,tmp1));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(486)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC2(BoolVector_obj,splice,return )

::String BoolVector_obj::toString( ){
	HX_STACK_FRAME("openfl._Vector.BoolVector","toString",0x25cd72c3,"openfl._Vector.BoolVector.toString","openfl/Vector.hx",491,0x4a01873c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(493)
	::String tmp = this->__array->toString();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(493)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(BoolVector_obj,toString,return )

Void BoolVector_obj::unshift( bool x){
{
		HX_STACK_FRAME("openfl._Vector.BoolVector","unshift",0x70955152,"openfl._Vector.BoolVector.unshift","openfl/Vector.hx",498,0x4a01873c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_LINE(500)
		bool tmp = this->fixed;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(500)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(500)
		if ((tmp1)){
			HX_STACK_LINE(502)
			bool tmp2 = x;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(502)
			this->__array->unshift(tmp2);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BoolVector_obj,unshift,(void))

int BoolVector_obj::get_length( ){
	HX_STACK_FRAME("openfl._Vector.BoolVector","get_length",0x8b6b9a86,"openfl._Vector.BoolVector.get_length","openfl/Vector.hx",516,0x4a01873c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(518)
	int tmp = this->__array->length;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(518)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(BoolVector_obj,get_length,return )

int BoolVector_obj::set_length( int value){
	HX_STACK_FRAME("openfl._Vector.BoolVector","set_length",0x8ee938fa,"openfl._Vector.BoolVector.set_length","openfl/Vector.hx",523,0x4a01873c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(525)
	bool tmp = this->fixed;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(525)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(525)
	if ((tmp1)){
		HX_STACK_LINE(529)
		int tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(529)
		this->__array->__SetSizeExact(tmp2);
	}
	HX_STACK_LINE(558)
	int tmp2 = this->__array->length;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(558)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(BoolVector_obj,set_length,return )


BoolVector_obj::BoolVector_obj()
{
}

void BoolVector_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BoolVector);
	HX_MARK_MEMBER_NAME(fixed,"fixed");
	HX_MARK_MEMBER_NAME(__array,"__array");
	HX_MARK_END_CLASS();
}

void BoolVector_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(fixed,"fixed");
	HX_VISIT_MEMBER_NAME(__array,"__array");
}

Dynamic BoolVector_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
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

Dynamic BoolVector_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"fixed") ) { fixed=inValue.Cast< bool >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { if (inCallProp == hx::paccAlways) return set_length(inValue); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"__array") ) { __array=inValue.Cast< Array< bool > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void BoolVector_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("fixed","\x74","\xf9","\xa1","\x00"));
	outFields->push(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"));
	outFields->push(HX_HCSTRING("__array","\x79","\xc6","\xed","\x8f"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(BoolVector_obj,fixed),HX_HCSTRING("fixed","\x74","\xf9","\xa1","\x00")},
	{hx::fsObject /*Array< bool >*/ ,(int)offsetof(BoolVector_obj,__array),HX_HCSTRING("__array","\x79","\xc6","\xed","\x8f")},
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
	HX_MARK_MEMBER_NAME(BoolVector_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BoolVector_obj::__mClass,"__mClass");
};

#endif

hx::Class BoolVector_obj::__mClass;

void BoolVector_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._Vector.BoolVector","\x37","\x5d","\xce","\x2d");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< BoolVector_obj >;
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
