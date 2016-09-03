#include <hxcpp.h>

#ifndef INCLUDED_openfl__Vector_FloatVector
#include <openfl/_Vector/FloatVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_IVector
#include <openfl/_Vector/IVector.h>
#endif
namespace openfl{
namespace _Vector{

Void FloatVector_obj::__construct(Dynamic length,Dynamic fixed,Array< Float > array)
{
HX_STACK_FRAME("openfl._Vector.FloatVector","new",0x7ccdf307,"openfl._Vector.FloatVector.new","openfl/Vector.hx",577,0x4a01873c)
HX_STACK_THIS(this)
HX_STACK_ARG(length,"length")
HX_STACK_ARG(fixed,"fixed")
HX_STACK_ARG(array,"array")
{
	HX_STACK_LINE(579)
	bool tmp = (array == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(579)
	if ((tmp)){
		HX_STACK_LINE(581)
		array = Array_obj< Float >::__new();
	}
	HX_STACK_LINE(585)
	this->__array = array;
	HX_STACK_LINE(587)
	bool tmp1 = (length != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(587)
	if ((tmp1)){
		HX_STACK_LINE(589)
		Dynamic tmp2 = length;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(589)
		this->set_length(tmp2);
	}
	HX_STACK_LINE(593)
	bool tmp2 = (fixed == true);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(593)
	this->fixed = tmp2;
}
;
	return null();
}

//FloatVector_obj::~FloatVector_obj() { }

Dynamic FloatVector_obj::__CreateEmpty() { return  new FloatVector_obj; }
hx::ObjectPtr< FloatVector_obj > FloatVector_obj::__new(Dynamic length,Dynamic fixed,Array< Float > array)
{  hx::ObjectPtr< FloatVector_obj > _result_ = new FloatVector_obj();
	_result_->__construct(length,fixed,array);
	return _result_;}

Dynamic FloatVector_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FloatVector_obj > _result_ = new FloatVector_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _result_;}

hx::Object *FloatVector_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::openfl::_Vector::IVector_obj)) return operator ::openfl::_Vector::IVector_obj *();
	return super::__ToInterface(inType);
}

FloatVector_obj::operator ::openfl::_Vector::IVector_obj *()
	{ return new ::openfl::_Vector::IVector_delegate_< FloatVector_obj >(this); }
::openfl::_Vector::IVector FloatVector_obj::concat( ::openfl::_Vector::IVector a){
	HX_STACK_FRAME("openfl._Vector.FloatVector","concat",0xbb39c8cd,"openfl._Vector.FloatVector.concat","openfl/Vector.hx",598,0x4a01873c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(a,"a")
	HX_STACK_LINE(600)
	bool tmp = (a == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(600)
	if ((tmp)){
		HX_STACK_LINE(602)
		::openfl::_Vector::FloatVector tmp1 = ::openfl::_Vector::FloatVector_obj::__new(null(),null(),this->__array->copy());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(602)
		return tmp1;
	}
	else{
		HX_STACK_LINE(606)
		::openfl::_Vector::FloatVector tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(606)
		tmp1 = hx::TCast< ::openfl::_Vector::FloatVector >::cast(a);
		HX_STACK_LINE(606)
		::openfl::_Vector::FloatVector tmp2 = ::openfl::_Vector::FloatVector_obj::__new(null(),null(),this->__array->concat(tmp1->__array));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(606)
		return tmp2;
	}
	HX_STACK_LINE(600)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FloatVector_obj,concat,return )

::openfl::_Vector::IVector FloatVector_obj::copy( ){
	HX_STACK_FRAME("openfl._Vector.FloatVector","copy",0xb028eb2e,"openfl._Vector.FloatVector.copy","openfl/Vector.hx",613,0x4a01873c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(615)
	bool tmp = this->fixed;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(615)
	::openfl::_Vector::FloatVector tmp1 = ::openfl::_Vector::FloatVector_obj::__new(null(),tmp,this->__array->copy());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(615)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(FloatVector_obj,copy,return )

Float FloatVector_obj::get( int index){
	HX_STACK_FRAME("openfl._Vector.FloatVector","get",0x7cc8a33d,"openfl._Vector.FloatVector.get","openfl/Vector.hx",620,0x4a01873c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(622)
	Float tmp = this->__array->__get(index);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(622)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(FloatVector_obj,get,return )

int FloatVector_obj::indexOf( Float x,Dynamic __o_from){
Dynamic from = __o_from.Default(0);
	HX_STACK_FRAME("openfl._Vector.FloatVector","indexOf",0xe9dd4af0,"openfl._Vector.FloatVector.indexOf","openfl/Vector.hx",627,0x4a01873c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(from,"from")
{
		HX_STACK_LINE(629)
		{
			HX_STACK_LINE(629)
			int _g1 = from;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(629)
			int tmp = this->__array->length;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(629)
			int _g = tmp;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(629)
			while((true)){
				HX_STACK_LINE(629)
				bool tmp1 = (_g1 < _g);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(629)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(629)
				if ((tmp2)){
					HX_STACK_LINE(629)
					break;
				}
				HX_STACK_LINE(629)
				int tmp3 = (_g1)++;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(629)
				int i = tmp3;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(631)
				Float tmp4 = this->__array->__get(i);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(631)
				Float tmp5 = x;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(631)
				bool tmp6 = (tmp4 == tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(631)
				if ((tmp6)){
					HX_STACK_LINE(633)
					int tmp7 = i;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(633)
					return tmp7;
				}
			}
		}
		HX_STACK_LINE(639)
		return (int)-1;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(FloatVector_obj,indexOf,return )

Void FloatVector_obj::insertAt( int index,Float element){
{
		HX_STACK_FRAME("openfl._Vector.FloatVector","insertAt",0xb3435c85,"openfl._Vector.FloatVector.insertAt","openfl/Vector.hx",644,0x4a01873c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(index,"index")
		HX_STACK_ARG(element,"element")
		HX_STACK_LINE(646)
		bool tmp = this->fixed;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(646)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(646)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(646)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(646)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(646)
		if ((tmp3)){
			HX_STACK_LINE(646)
			int tmp5 = index;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(646)
			int tmp6 = this->__array->length;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(646)
			int tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(646)
			tmp4 = (tmp5 < tmp7);
		}
		else{
			HX_STACK_LINE(646)
			tmp4 = true;
		}
		HX_STACK_LINE(646)
		if ((tmp4)){
			HX_STACK_LINE(648)
			int tmp5 = index;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(648)
			Float tmp6 = element;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(648)
			this->__array->insert(tmp5,tmp6);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FloatVector_obj,insertAt,(void))

Dynamic FloatVector_obj::iterator( ){
	HX_STACK_FRAME("openfl._Vector.FloatVector","iterator",0x84be29e7,"openfl._Vector.FloatVector.iterator","openfl/Vector.hx",655,0x4a01873c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(657)
	Dynamic tmp = this->__array->iterator();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(657)
	Dynamic tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(657)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(FloatVector_obj,iterator,return )

::String FloatVector_obj::join( ::String sep){
	HX_STACK_FRAME("openfl._Vector.FloatVector","join",0xb4c96363,"openfl._Vector.FloatVector.join","openfl/Vector.hx",662,0x4a01873c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(sep,"sep")
	HX_STACK_LINE(664)
	::String tmp = sep;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(664)
	::String tmp1 = this->__array->join(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(664)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(FloatVector_obj,join,return )

int FloatVector_obj::lastIndexOf( Float x,Dynamic __o_from){
Dynamic from = __o_from.Default(0);
	HX_STACK_FRAME("openfl._Vector.FloatVector","lastIndexOf",0xc7529eba,"openfl._Vector.FloatVector.lastIndexOf","openfl/Vector.hx",669,0x4a01873c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(from,"from")
{
		HX_STACK_LINE(671)
		int tmp = this->__array->length;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(671)
		int tmp1 = (tmp - (int)1);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(671)
		int i = tmp1;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(673)
		while((true)){
			HX_STACK_LINE(673)
			bool tmp2 = (i >= from);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(673)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(673)
			if ((tmp3)){
				HX_STACK_LINE(673)
				break;
			}
			HX_STACK_LINE(675)
			Float tmp4 = this->__array->__get(i);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(675)
			Float tmp5 = x;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(675)
			bool tmp6 = (tmp4 == tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(675)
			if ((tmp6)){
				HX_STACK_LINE(675)
				int tmp7 = i;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(675)
				return tmp7;
			}
			HX_STACK_LINE(676)
			(i)--;
		}
		HX_STACK_LINE(680)
		return (int)-1;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(FloatVector_obj,lastIndexOf,return )

Dynamic FloatVector_obj::pop( ){
	HX_STACK_FRAME("openfl._Vector.FloatVector","pop",0x7ccf8038,"openfl._Vector.FloatVector.pop","openfl/Vector.hx",685,0x4a01873c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(687)
	bool tmp = this->fixed;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(687)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(687)
	if ((tmp1)){
		HX_STACK_LINE(689)
		Dynamic tmp2 = this->__array->pop();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(689)
		return tmp2;
	}
	else{
		HX_STACK_LINE(693)
		return null();
	}
	HX_STACK_LINE(687)
	return ((Float)0.);
}


HX_DEFINE_DYNAMIC_FUNC0(FloatVector_obj,pop,return )

int FloatVector_obj::push( Float x){
	HX_STACK_FRAME("openfl._Vector.FloatVector","push",0xb8c54153,"openfl._Vector.FloatVector.push","openfl/Vector.hx",700,0x4a01873c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_LINE(702)
	bool tmp = this->fixed;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(702)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(702)
	if ((tmp1)){
		HX_STACK_LINE(704)
		Float tmp2 = x;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(704)
		int tmp3 = this->__array->push(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(704)
		return tmp3;
	}
	else{
		HX_STACK_LINE(708)
		int tmp2 = this->__array->length;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(708)
		return tmp2;
	}
	HX_STACK_LINE(702)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC1(FloatVector_obj,push,return )

Void FloatVector_obj::reverse( ){
{
		HX_STACK_FRAME("openfl._Vector.FloatVector","reverse",0x241a3b49,"openfl._Vector.FloatVector.reverse","openfl/Vector.hx",717,0x4a01873c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(717)
		this->__array->reverse();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FloatVector_obj,reverse,(void))

Float FloatVector_obj::set( int index,Float value){
	HX_STACK_FRAME("openfl._Vector.FloatVector","set",0x7cd1be49,"openfl._Vector.FloatVector.set","openfl/Vector.hx",722,0x4a01873c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(724)
	bool tmp = this->fixed;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(724)
	bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(724)
	bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(724)
	bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(724)
	bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(724)
	if ((tmp3)){
		HX_STACK_LINE(724)
		int tmp5 = index;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(724)
		int tmp6 = this->__array->length;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(724)
		int tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(724)
		tmp4 = (tmp5 < tmp7);
	}
	else{
		HX_STACK_LINE(724)
		tmp4 = true;
	}
	HX_STACK_LINE(724)
	if ((tmp4)){
		HX_STACK_LINE(726)
		Float tmp5 = value;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(726)
		Float tmp6 = this->__array[index] = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(726)
		return tmp6;
	}
	else{
		HX_STACK_LINE(730)
		Float tmp5 = value;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(730)
		return tmp5;
	}
	HX_STACK_LINE(724)
	return ((Float)0.);
}


HX_DEFINE_DYNAMIC_FUNC2(FloatVector_obj,set,return )

Dynamic FloatVector_obj::shift( ){
	HX_STACK_FRAME("openfl._Vector.FloatVector","shift",0xa56846e9,"openfl._Vector.FloatVector.shift","openfl/Vector.hx",737,0x4a01873c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(739)
	bool tmp = this->fixed;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(739)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(739)
	if ((tmp1)){
		HX_STACK_LINE(741)
		Dynamic tmp2 = this->__array->shift();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(741)
		return tmp2;
	}
	else{
		HX_STACK_LINE(745)
		return null();
	}
	HX_STACK_LINE(739)
	return ((Float)0.);
}


HX_DEFINE_DYNAMIC_FUNC0(FloatVector_obj,shift,return )

::openfl::_Vector::IVector FloatVector_obj::slice( Dynamic __o_startIndex,Dynamic __o_endIndex){
Dynamic startIndex = __o_startIndex.Default(0);
Dynamic endIndex = __o_endIndex.Default(16777215);
	HX_STACK_FRAME("openfl._Vector.FloatVector","slice",0xa80d1eb9,"openfl._Vector.FloatVector.slice","openfl/Vector.hx",752,0x4a01873c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(startIndex,"startIndex")
	HX_STACK_ARG(endIndex,"endIndex")
{
		HX_STACK_LINE(754)
		Dynamic tmp = startIndex;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(754)
		Dynamic tmp1 = endIndex;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(754)
		::openfl::_Vector::FloatVector tmp2 = ::openfl::_Vector::FloatVector_obj::__new(null(),null(),this->__array->slice(tmp,tmp1));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(754)
		return tmp2;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(FloatVector_obj,slice,return )

Void FloatVector_obj::sort( Dynamic f){
{
		HX_STACK_FRAME("openfl._Vector.FloatVector","sort",0xbabc56d7,"openfl._Vector.FloatVector.sort","openfl/Vector.hx",759,0x4a01873c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(f,"f")
		HX_STACK_LINE(761)
		Dynamic tmp = f;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(761)
		this->__array->sort(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FloatVector_obj,sort,(void))

::openfl::_Vector::IVector FloatVector_obj::splice( int pos,int len){
	HX_STACK_FRAME("openfl._Vector.FloatVector","splice",0xb3084535,"openfl._Vector.FloatVector.splice","openfl/Vector.hx",766,0x4a01873c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pos,"pos")
	HX_STACK_ARG(len,"len")
	HX_STACK_LINE(768)
	int tmp = pos;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(768)
	int tmp1 = len;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(768)
	::openfl::_Vector::FloatVector tmp2 = ::openfl::_Vector::FloatVector_obj::__new(null(),null(),this->__array->splice(tmp,tmp1));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(768)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC2(FloatVector_obj,splice,return )

::String FloatVector_obj::toString( ){
	HX_STACK_FRAME("openfl._Vector.FloatVector","toString",0x2992b0a5,"openfl._Vector.FloatVector.toString","openfl/Vector.hx",773,0x4a01873c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(775)
	::String tmp = this->__array->toString();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(775)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(FloatVector_obj,toString,return )

Void FloatVector_obj::unshift( Float x){
{
		HX_STACK_FRAME("openfl._Vector.FloatVector","unshift",0x81d1e5b0,"openfl._Vector.FloatVector.unshift","openfl/Vector.hx",780,0x4a01873c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_LINE(782)
		bool tmp = this->fixed;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(782)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(782)
		if ((tmp1)){
			HX_STACK_LINE(784)
			Float tmp2 = x;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(784)
			this->__array->unshift(tmp2);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FloatVector_obj,unshift,(void))

int FloatVector_obj::get_length( ){
	HX_STACK_FRAME("openfl._Vector.FloatVector","get_length",0xf96594e8,"openfl._Vector.FloatVector.get_length","openfl/Vector.hx",798,0x4a01873c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(800)
	int tmp = this->__array->length;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(800)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(FloatVector_obj,get_length,return )

int FloatVector_obj::set_length( int value){
	HX_STACK_FRAME("openfl._Vector.FloatVector","set_length",0xfce3335c,"openfl._Vector.FloatVector.set_length","openfl/Vector.hx",805,0x4a01873c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(807)
	bool tmp = this->fixed;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(807)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(807)
	if ((tmp1)){
		HX_STACK_LINE(811)
		int tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(811)
		this->__array->__SetSizeExact(tmp2);
	}
	HX_STACK_LINE(840)
	int tmp2 = this->__array->length;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(840)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(FloatVector_obj,set_length,return )


FloatVector_obj::FloatVector_obj()
{
}

void FloatVector_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FloatVector);
	HX_MARK_MEMBER_NAME(fixed,"fixed");
	HX_MARK_MEMBER_NAME(__array,"__array");
	HX_MARK_END_CLASS();
}

void FloatVector_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(fixed,"fixed");
	HX_VISIT_MEMBER_NAME(__array,"__array");
}

Dynamic FloatVector_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
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

Dynamic FloatVector_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"fixed") ) { fixed=inValue.Cast< bool >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { if (inCallProp == hx::paccAlways) return set_length(inValue); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"__array") ) { __array=inValue.Cast< Array< Float > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FloatVector_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("fixed","\x74","\xf9","\xa1","\x00"));
	outFields->push(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"));
	outFields->push(HX_HCSTRING("__array","\x79","\xc6","\xed","\x8f"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(FloatVector_obj,fixed),HX_HCSTRING("fixed","\x74","\xf9","\xa1","\x00")},
	{hx::fsObject /*Array< Float >*/ ,(int)offsetof(FloatVector_obj,__array),HX_HCSTRING("__array","\x79","\xc6","\xed","\x8f")},
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
	HX_MARK_MEMBER_NAME(FloatVector_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FloatVector_obj::__mClass,"__mClass");
};

#endif

hx::Class FloatVector_obj::__mClass;

void FloatVector_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._Vector.FloatVector","\x95","\x63","\xf0","\x2f");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FloatVector_obj >;
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
