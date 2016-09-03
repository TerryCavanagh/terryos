#include <hxcpp.h>

#ifndef INCLUDED_lime_math_Rectangle
#include <lime/math/Rectangle.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl_geom_Point
#include <openfl/geom/Point.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
namespace openfl{
namespace geom{

Void Rectangle_obj::__construct(hx::Null< Float >  __o_x,hx::Null< Float >  __o_y,hx::Null< Float >  __o_width,hx::Null< Float >  __o_height)
{
HX_STACK_FRAME("openfl.geom.Rectangle","new",0xe1148d6d,"openfl.geom.Rectangle.new","openfl/geom/Rectangle.hx",25,0xf2fb2b03)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_x,"x")
HX_STACK_ARG(__o_y,"y")
HX_STACK_ARG(__o_width,"width")
HX_STACK_ARG(__o_height,"height")
Float x = __o_x.Default(0);
Float y = __o_y.Default(0);
Float width = __o_width.Default(0);
Float height = __o_height.Default(0);
{
	HX_STACK_LINE(27)
	this->x = x;
	HX_STACK_LINE(28)
	this->y = y;
	HX_STACK_LINE(29)
	this->width = width;
	HX_STACK_LINE(30)
	this->height = height;
}
;
	return null();
}

//Rectangle_obj::~Rectangle_obj() { }

Dynamic Rectangle_obj::__CreateEmpty() { return  new Rectangle_obj; }
hx::ObjectPtr< Rectangle_obj > Rectangle_obj::__new(hx::Null< Float >  __o_x,hx::Null< Float >  __o_y,hx::Null< Float >  __o_width,hx::Null< Float >  __o_height)
{  hx::ObjectPtr< Rectangle_obj > _result_ = new Rectangle_obj();
	_result_->__construct(__o_x,__o_y,__o_width,__o_height);
	return _result_;}

Dynamic Rectangle_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Rectangle_obj > _result_ = new Rectangle_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _result_;}

::openfl::geom::Rectangle Rectangle_obj::clone( ){
	HX_STACK_FRAME("openfl.geom.Rectangle","clone",0x6896edaa,"openfl.geom.Rectangle.clone","openfl/geom/Rectangle.hx",35,0xf2fb2b03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(37)
	Float tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(37)
	Float tmp1 = this->y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(37)
	Float tmp2 = this->width;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(37)
	Float tmp3 = this->height;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(37)
	::openfl::geom::Rectangle tmp4 = ::openfl::geom::Rectangle_obj::__new(tmp,tmp1,tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(37)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC0(Rectangle_obj,clone,return )

bool Rectangle_obj::contains( Float x,Float y){
	HX_STACK_FRAME("openfl.geom.Rectangle","contains",0x39912df2,"openfl.geom.Rectangle.contains","openfl/geom/Rectangle.hx",42,0xf2fb2b03)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_LINE(44)
	Float tmp = x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(44)
	Float tmp1 = this->x;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(44)
	bool tmp2 = (tmp >= tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(44)
	bool tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(44)
	bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(44)
	if ((tmp3)){
		HX_STACK_LINE(44)
		Float tmp5 = y;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(44)
		Float tmp6 = this->y;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(44)
		Float tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(44)
		Float tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(44)
		tmp4 = (tmp5 >= tmp8);
	}
	else{
		HX_STACK_LINE(44)
		tmp4 = false;
	}
	HX_STACK_LINE(44)
	bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(44)
	bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(44)
	if ((tmp5)){
		HX_STACK_LINE(44)
		Float tmp7 = x;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(44)
		Float tmp8 = this->get_right();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(44)
		Float tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(44)
		Float tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(44)
		tmp6 = (tmp7 < tmp10);
	}
	else{
		HX_STACK_LINE(44)
		tmp6 = false;
	}
	HX_STACK_LINE(44)
	bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(44)
	if ((tmp6)){
		HX_STACK_LINE(44)
		Float tmp8 = y;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(44)
		Float tmp9 = this->get_bottom();		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(44)
		Float tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(44)
		tmp7 = (tmp8 < tmp10);
	}
	else{
		HX_STACK_LINE(44)
		tmp7 = false;
	}
	HX_STACK_LINE(44)
	return tmp7;
}


HX_DEFINE_DYNAMIC_FUNC2(Rectangle_obj,contains,return )

bool Rectangle_obj::containsPoint( ::openfl::geom::Point point){
	HX_STACK_FRAME("openfl.geom.Rectangle","containsPoint",0xa42628fe,"openfl.geom.Rectangle.containsPoint","openfl/geom/Rectangle.hx",49,0xf2fb2b03)
	HX_STACK_THIS(this)
	HX_STACK_ARG(point,"point")
	HX_STACK_LINE(51)
	Float tmp = point->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(51)
	Float tmp1 = point->y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(51)
	bool tmp2 = this->contains(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(51)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Rectangle_obj,containsPoint,return )

bool Rectangle_obj::containsRect( ::openfl::geom::Rectangle rect){
	HX_STACK_FRAME("openfl.geom.Rectangle","containsRect",0x6ba48836,"openfl.geom.Rectangle.containsRect","openfl/geom/Rectangle.hx",56,0xf2fb2b03)
	HX_STACK_THIS(this)
	HX_STACK_ARG(rect,"rect")
	HX_STACK_LINE(58)
	bool tmp = (rect->width <= (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(58)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(58)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(58)
	if ((tmp1)){
		HX_STACK_LINE(58)
		tmp2 = (rect->height <= (int)0);
	}
	else{
		HX_STACK_LINE(58)
		tmp2 = true;
	}
	HX_STACK_LINE(58)
	if ((tmp2)){
		HX_STACK_LINE(60)
		Float tmp3 = rect->x;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(60)
		Float tmp4 = this->x;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(60)
		bool tmp5 = (tmp3 > tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(60)
		bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(60)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(60)
		if ((tmp6)){
			HX_STACK_LINE(60)
			Float tmp8 = rect->y;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(60)
			Float tmp9 = this->y;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(60)
			Float tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(60)
			Float tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(60)
			tmp7 = (tmp8 > tmp11);
		}
		else{
			HX_STACK_LINE(60)
			tmp7 = false;
		}
		HX_STACK_LINE(60)
		bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(60)
		bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(60)
		if ((tmp8)){
			HX_STACK_LINE(60)
			Float tmp10 = rect->get_right();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(60)
			Float tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(60)
			Float tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(60)
			Float tmp13 = this->get_right();		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(60)
			Float tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(60)
			Float tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(60)
			tmp9 = (tmp12 < tmp15);
		}
		else{
			HX_STACK_LINE(60)
			tmp9 = false;
		}
		HX_STACK_LINE(60)
		bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(60)
		if ((tmp9)){
			HX_STACK_LINE(60)
			Float tmp11 = rect->get_bottom();		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(60)
			Float tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(60)
			Float tmp13 = this->get_bottom();		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(60)
			Float tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(60)
			tmp10 = (tmp12 < tmp14);
		}
		else{
			HX_STACK_LINE(60)
			tmp10 = false;
		}
		HX_STACK_LINE(60)
		return tmp10;
	}
	else{
		HX_STACK_LINE(64)
		Float tmp3 = rect->x;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(64)
		Float tmp4 = this->x;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(64)
		bool tmp5 = (tmp3 >= tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(64)
		bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(64)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(64)
		if ((tmp6)){
			HX_STACK_LINE(64)
			Float tmp8 = rect->y;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(64)
			Float tmp9 = this->y;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(64)
			Float tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(64)
			Float tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(64)
			tmp7 = (tmp8 >= tmp11);
		}
		else{
			HX_STACK_LINE(64)
			tmp7 = false;
		}
		HX_STACK_LINE(64)
		bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(64)
		bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(64)
		if ((tmp8)){
			HX_STACK_LINE(64)
			Float tmp10 = rect->get_right();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(64)
			Float tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(64)
			Float tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(64)
			Float tmp13 = this->get_right();		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(64)
			Float tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(64)
			Float tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(64)
			tmp9 = (tmp12 <= tmp15);
		}
		else{
			HX_STACK_LINE(64)
			tmp9 = false;
		}
		HX_STACK_LINE(64)
		bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(64)
		if ((tmp9)){
			HX_STACK_LINE(64)
			Float tmp11 = rect->get_bottom();		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(64)
			Float tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(64)
			Float tmp13 = this->get_bottom();		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(64)
			Float tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(64)
			tmp10 = (tmp12 <= tmp14);
		}
		else{
			HX_STACK_LINE(64)
			tmp10 = false;
		}
		HX_STACK_LINE(64)
		return tmp10;
	}
	HX_STACK_LINE(58)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(Rectangle_obj,containsRect,return )

Void Rectangle_obj::copyFrom( ::openfl::geom::Rectangle sourceRect){
{
		HX_STACK_FRAME("openfl.geom.Rectangle","copyFrom",0xd576df92,"openfl.geom.Rectangle.copyFrom","openfl/geom/Rectangle.hx",71,0xf2fb2b03)
		HX_STACK_THIS(this)
		HX_STACK_ARG(sourceRect,"sourceRect")
		HX_STACK_LINE(73)
		this->x = sourceRect->x;
		HX_STACK_LINE(74)
		this->y = sourceRect->y;
		HX_STACK_LINE(75)
		this->width = sourceRect->width;
		HX_STACK_LINE(76)
		this->height = sourceRect->height;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Rectangle_obj,copyFrom,(void))

bool Rectangle_obj::equals( ::openfl::geom::Rectangle toCompare){
	HX_STACK_FRAME("openfl.geom.Rectangle","equals",0xcd1e1752,"openfl.geom.Rectangle.equals","openfl/geom/Rectangle.hx",81,0xf2fb2b03)
	HX_STACK_THIS(this)
	HX_STACK_ARG(toCompare,"toCompare")
	HX_STACK_LINE(83)
	bool tmp = (toCompare != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(83)
	bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(83)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(83)
	if ((tmp1)){
		HX_STACK_LINE(83)
		Float tmp3 = this->x;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(83)
		Float tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(83)
		Float tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(83)
		Float tmp6 = toCompare->x;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(83)
		tmp2 = (tmp5 == tmp6);
	}
	else{
		HX_STACK_LINE(83)
		tmp2 = false;
	}
	HX_STACK_LINE(83)
	bool tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(83)
	bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(83)
	if ((tmp3)){
		HX_STACK_LINE(83)
		Float tmp5 = this->y;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(83)
		Float tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(83)
		Float tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(83)
		Float tmp8 = toCompare->y;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(83)
		tmp4 = (tmp7 == tmp8);
	}
	else{
		HX_STACK_LINE(83)
		tmp4 = false;
	}
	HX_STACK_LINE(83)
	bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(83)
	bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(83)
	if ((tmp5)){
		HX_STACK_LINE(83)
		Float tmp7 = this->width;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(83)
		Float tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(83)
		Float tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(83)
		Float tmp10 = toCompare->width;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(83)
		tmp6 = (tmp9 == tmp10);
	}
	else{
		HX_STACK_LINE(83)
		tmp6 = false;
	}
	HX_STACK_LINE(83)
	bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(83)
	if ((tmp6)){
		HX_STACK_LINE(83)
		Float tmp8 = this->height;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(83)
		Float tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(83)
		Float tmp10 = toCompare->height;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(83)
		tmp7 = (tmp9 == tmp10);
	}
	else{
		HX_STACK_LINE(83)
		tmp7 = false;
	}
	HX_STACK_LINE(83)
	return tmp7;
}


HX_DEFINE_DYNAMIC_FUNC1(Rectangle_obj,equals,return )

Void Rectangle_obj::inflate( Float dx,Float dy){
{
		HX_STACK_FRAME("openfl.geom.Rectangle","inflate",0x84b46414,"openfl.geom.Rectangle.inflate","openfl/geom/Rectangle.hx",88,0xf2fb2b03)
		HX_STACK_THIS(this)
		HX_STACK_ARG(dx,"dx")
		HX_STACK_ARG(dy,"dy")
		HX_STACK_LINE(90)
		hx::SubEq(this->x,dx);
		HX_STACK_LINE(90)
		Float tmp = (dx * (int)2);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(90)
		hx::AddEq(this->width,tmp);
		HX_STACK_LINE(91)
		hx::SubEq(this->y,dy);
		HX_STACK_LINE(91)
		Float tmp1 = (dy * (int)2);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(91)
		hx::AddEq(this->height,tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Rectangle_obj,inflate,(void))

Void Rectangle_obj::inflatePoint( ::openfl::geom::Point point){
{
		HX_STACK_FRAME("openfl.geom.Rectangle","inflatePoint",0xf7c1779c,"openfl.geom.Rectangle.inflatePoint","openfl/geom/Rectangle.hx",96,0xf2fb2b03)
		HX_STACK_THIS(this)
		HX_STACK_ARG(point,"point")
		HX_STACK_LINE(98)
		Float tmp = point->x;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(98)
		Float tmp1 = point->y;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(98)
		this->inflate(tmp,tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Rectangle_obj,inflatePoint,(void))

::openfl::geom::Rectangle Rectangle_obj::intersection( ::openfl::geom::Rectangle toIntersect){
	HX_STACK_FRAME("openfl.geom.Rectangle","intersection",0x4de95b9c,"openfl.geom.Rectangle.intersection","openfl/geom/Rectangle.hx",103,0xf2fb2b03)
	HX_STACK_THIS(this)
	HX_STACK_ARG(toIntersect,"toIntersect")
	HX_STACK_LINE(105)
	Float tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(105)
	Float tmp1 = toIntersect->x;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(105)
	bool tmp2 = (tmp < tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(105)
	Float tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(105)
	if ((tmp2)){
		HX_STACK_LINE(105)
		tmp3 = toIntersect->x;
	}
	else{
		HX_STACK_LINE(105)
		tmp3 = this->x;
	}
	HX_STACK_LINE(105)
	Float x0 = tmp3;		HX_STACK_VAR(x0,"x0");
	HX_STACK_LINE(106)
	Float tmp4 = this->get_right();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(106)
	Float tmp5 = toIntersect->get_right();		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(106)
	bool tmp6 = (tmp4 > tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(106)
	Float tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(106)
	if ((tmp6)){
		HX_STACK_LINE(106)
		tmp7 = toIntersect->get_right();
	}
	else{
		HX_STACK_LINE(106)
		tmp7 = this->get_right();
	}
	HX_STACK_LINE(106)
	Float x1 = tmp7;		HX_STACK_VAR(x1,"x1");
	HX_STACK_LINE(108)
	bool tmp8 = (x1 <= x0);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(108)
	if ((tmp8)){
		HX_STACK_LINE(110)
		::openfl::geom::Rectangle tmp9 = ::openfl::geom::Rectangle_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(110)
		return tmp9;
	}
	HX_STACK_LINE(114)
	Float tmp9 = this->y;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(114)
	Float tmp10 = toIntersect->y;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(114)
	bool tmp11 = (tmp9 < tmp10);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(114)
	Float tmp12;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(114)
	if ((tmp11)){
		HX_STACK_LINE(114)
		tmp12 = toIntersect->y;
	}
	else{
		HX_STACK_LINE(114)
		tmp12 = this->y;
	}
	HX_STACK_LINE(114)
	Float y0 = tmp12;		HX_STACK_VAR(y0,"y0");
	HX_STACK_LINE(115)
	Float tmp13 = this->get_bottom();		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(115)
	Float tmp14 = toIntersect->get_bottom();		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(115)
	bool tmp15 = (tmp13 > tmp14);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(115)
	Float tmp16;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(115)
	if ((tmp15)){
		HX_STACK_LINE(115)
		tmp16 = toIntersect->get_bottom();
	}
	else{
		HX_STACK_LINE(115)
		tmp16 = this->get_bottom();
	}
	HX_STACK_LINE(115)
	Float y1 = tmp16;		HX_STACK_VAR(y1,"y1");
	HX_STACK_LINE(117)
	bool tmp17 = (y1 <= y0);		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(117)
	if ((tmp17)){
		HX_STACK_LINE(119)
		::openfl::geom::Rectangle tmp18 = ::openfl::geom::Rectangle_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(119)
		return tmp18;
	}
	HX_STACK_LINE(123)
	Float tmp18 = x0;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(123)
	Float tmp19 = y0;		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(123)
	Float tmp20 = (x1 - x0);		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(123)
	Float tmp21 = (y1 - y0);		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(123)
	::openfl::geom::Rectangle tmp22 = ::openfl::geom::Rectangle_obj::__new(tmp18,tmp19,tmp20,tmp21);		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(123)
	return tmp22;
}


HX_DEFINE_DYNAMIC_FUNC1(Rectangle_obj,intersection,return )

bool Rectangle_obj::intersects( ::openfl::geom::Rectangle toIntersect){
	HX_STACK_FRAME("openfl.geom.Rectangle","intersects",0xc0fc7147,"openfl.geom.Rectangle.intersects","openfl/geom/Rectangle.hx",128,0xf2fb2b03)
	HX_STACK_THIS(this)
	HX_STACK_ARG(toIntersect,"toIntersect")
	HX_STACK_LINE(130)
	Float tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(130)
	Float tmp1 = toIntersect->x;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(130)
	bool tmp2 = (tmp < tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(130)
	Float tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(130)
	if ((tmp2)){
		HX_STACK_LINE(130)
		tmp3 = toIntersect->x;
	}
	else{
		HX_STACK_LINE(130)
		tmp3 = this->x;
	}
	HX_STACK_LINE(130)
	Float x0 = tmp3;		HX_STACK_VAR(x0,"x0");
	HX_STACK_LINE(131)
	Float tmp4 = this->get_right();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(131)
	Float tmp5 = toIntersect->get_right();		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(131)
	bool tmp6 = (tmp4 > tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(131)
	Float tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(131)
	if ((tmp6)){
		HX_STACK_LINE(131)
		tmp7 = toIntersect->get_right();
	}
	else{
		HX_STACK_LINE(131)
		tmp7 = this->get_right();
	}
	HX_STACK_LINE(131)
	Float x1 = tmp7;		HX_STACK_VAR(x1,"x1");
	HX_STACK_LINE(133)
	bool tmp8 = (x1 <= x0);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(133)
	if ((tmp8)){
		HX_STACK_LINE(135)
		return false;
	}
	HX_STACK_LINE(139)
	Float tmp9 = this->y;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(139)
	Float tmp10 = toIntersect->y;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(139)
	bool tmp11 = (tmp9 < tmp10);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(139)
	Float tmp12;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(139)
	if ((tmp11)){
		HX_STACK_LINE(139)
		tmp12 = toIntersect->y;
	}
	else{
		HX_STACK_LINE(139)
		tmp12 = this->y;
	}
	HX_STACK_LINE(139)
	Float y0 = tmp12;		HX_STACK_VAR(y0,"y0");
	HX_STACK_LINE(140)
	Float tmp13 = this->get_bottom();		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(140)
	Float tmp14 = toIntersect->get_bottom();		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(140)
	bool tmp15 = (tmp13 > tmp14);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(140)
	Float tmp16;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(140)
	if ((tmp15)){
		HX_STACK_LINE(140)
		tmp16 = toIntersect->get_bottom();
	}
	else{
		HX_STACK_LINE(140)
		tmp16 = this->get_bottom();
	}
	HX_STACK_LINE(140)
	Float y1 = tmp16;		HX_STACK_VAR(y1,"y1");
	HX_STACK_LINE(142)
	bool tmp17 = (y1 > y0);		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(142)
	return tmp17;
}


HX_DEFINE_DYNAMIC_FUNC1(Rectangle_obj,intersects,return )

bool Rectangle_obj::isEmpty( ){
	HX_STACK_FRAME("openfl.geom.Rectangle","isEmpty",0x84f8a5d0,"openfl.geom.Rectangle.isEmpty","openfl/geom/Rectangle.hx",147,0xf2fb2b03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(149)
	Float tmp = this->width;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(149)
	bool tmp1 = (tmp <= (int)0);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(149)
	bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(149)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(149)
	if ((tmp2)){
		HX_STACK_LINE(149)
		Float tmp4 = this->height;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(149)
		Float tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(149)
		tmp3 = (tmp5 <= (int)0);
	}
	else{
		HX_STACK_LINE(149)
		tmp3 = true;
	}
	HX_STACK_LINE(149)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(Rectangle_obj,isEmpty,return )

Void Rectangle_obj::offset( Float dx,Float dy){
{
		HX_STACK_FRAME("openfl.geom.Rectangle","offset",0x6d6ac0a6,"openfl.geom.Rectangle.offset","openfl/geom/Rectangle.hx",154,0xf2fb2b03)
		HX_STACK_THIS(this)
		HX_STACK_ARG(dx,"dx")
		HX_STACK_ARG(dy,"dy")
		HX_STACK_LINE(156)
		hx::AddEq(this->x,dx);
		HX_STACK_LINE(157)
		hx::AddEq(this->y,dy);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Rectangle_obj,offset,(void))

Void Rectangle_obj::offsetPoint( ::openfl::geom::Point point){
{
		HX_STACK_FRAME("openfl.geom.Rectangle","offsetPoint",0xf09849ca,"openfl.geom.Rectangle.offsetPoint","openfl/geom/Rectangle.hx",162,0xf2fb2b03)
		HX_STACK_THIS(this)
		HX_STACK_ARG(point,"point")
		HX_STACK_LINE(164)
		hx::AddEq(this->x,point->x);
		HX_STACK_LINE(165)
		hx::AddEq(this->y,point->y);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Rectangle_obj,offsetPoint,(void))

Void Rectangle_obj::setEmpty( ){
{
		HX_STACK_FRAME("openfl.geom.Rectangle","setEmpty",0x8b24775e,"openfl.geom.Rectangle.setEmpty","openfl/geom/Rectangle.hx",170,0xf2fb2b03)
		HX_STACK_THIS(this)
		HX_STACK_LINE(172)
		Float tmp = this->height = (int)0;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(172)
		Float tmp1 = this->width = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(172)
		Float tmp2 = this->y = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(172)
		this->x = tmp2;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Rectangle_obj,setEmpty,(void))

Void Rectangle_obj::setTo( Float xa,Float ya,Float widtha,Float heighta){
{
		HX_STACK_FRAME("openfl.geom.Rectangle","setTo",0x9a636c0a,"openfl.geom.Rectangle.setTo","openfl/geom/Rectangle.hx",177,0xf2fb2b03)
		HX_STACK_THIS(this)
		HX_STACK_ARG(xa,"xa")
		HX_STACK_ARG(ya,"ya")
		HX_STACK_ARG(widtha,"widtha")
		HX_STACK_ARG(heighta,"heighta")
		HX_STACK_LINE(179)
		this->x = xa;
		HX_STACK_LINE(180)
		this->y = ya;
		HX_STACK_LINE(181)
		this->width = widtha;
		HX_STACK_LINE(182)
		this->height = heighta;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Rectangle_obj,setTo,(void))

::String Rectangle_obj::toString( ){
	HX_STACK_FRAME("openfl.geom.Rectangle","toString",0x4584a47f,"openfl.geom.Rectangle.toString","openfl/geom/Rectangle.hx",187,0xf2fb2b03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(189)
	Float tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(189)
	::String tmp1 = (HX_HCSTRING("(x=","\xed","\xc2","\x1e","\x00") + tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(189)
	::String tmp2 = (tmp1 + HX_HCSTRING(", y=","\x18","\x15","\x2e","\x1d"));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(189)
	Float tmp3 = this->y;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(189)
	::String tmp4 = (tmp2 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(189)
	::String tmp5 = (tmp4 + HX_HCSTRING(", width=","\xeb","\x04","\x57","\x53"));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(189)
	Float tmp6 = this->width;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(189)
	::String tmp7 = (tmp5 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(189)
	::String tmp8 = (tmp7 + HX_HCSTRING(", height=","\x82","\x32","\x07","\x68"));		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(189)
	Float tmp9 = this->height;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(189)
	::String tmp10 = (tmp8 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(189)
	::String tmp11 = (tmp10 + HX_HCSTRING(")","\x29","\x00","\x00","\x00"));		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(189)
	return tmp11;
}


HX_DEFINE_DYNAMIC_FUNC0(Rectangle_obj,toString,return )

::openfl::geom::Rectangle Rectangle_obj::_union( ::openfl::geom::Rectangle toUnion){
	HX_STACK_FRAME("openfl.geom.Rectangle","union",0xc71b3f5c,"openfl.geom.Rectangle.union","openfl/geom/Rectangle.hx",194,0xf2fb2b03)
	HX_STACK_THIS(this)
	HX_STACK_ARG(toUnion,"toUnion")
	HX_STACK_LINE(196)
	Float tmp = this->width;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(196)
	bool tmp1 = (tmp == (int)0);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(196)
	bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(196)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(196)
	if ((tmp2)){
		HX_STACK_LINE(196)
		Float tmp4 = this->height;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(196)
		Float tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(196)
		tmp3 = (tmp5 == (int)0);
	}
	else{
		HX_STACK_LINE(196)
		tmp3 = true;
	}
	HX_STACK_LINE(196)
	if ((tmp3)){
		HX_STACK_LINE(198)
		::openfl::geom::Rectangle tmp4 = toUnion->clone();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(198)
		return tmp4;
	}
	else{
		HX_STACK_LINE(200)
		bool tmp4 = (toUnion->width == (int)0);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(200)
		bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(200)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(200)
		if ((tmp5)){
			HX_STACK_LINE(200)
			tmp6 = (toUnion->height == (int)0);
		}
		else{
			HX_STACK_LINE(200)
			tmp6 = true;
		}
		HX_STACK_LINE(200)
		if ((tmp6)){
			HX_STACK_LINE(202)
			::openfl::geom::Rectangle tmp7 = this->clone();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(202)
			return tmp7;
		}
	}
	HX_STACK_LINE(206)
	Float tmp4 = this->x;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(206)
	Float tmp5 = toUnion->x;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(206)
	bool tmp6 = (tmp4 > tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(206)
	Float tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(206)
	if ((tmp6)){
		HX_STACK_LINE(206)
		tmp7 = toUnion->x;
	}
	else{
		HX_STACK_LINE(206)
		tmp7 = this->x;
	}
	HX_STACK_LINE(206)
	Float x0 = tmp7;		HX_STACK_VAR(x0,"x0");
	HX_STACK_LINE(207)
	Float tmp8 = this->get_right();		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(207)
	Float tmp9 = toUnion->get_right();		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(207)
	bool tmp10 = (tmp8 < tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(207)
	Float tmp11;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(207)
	if ((tmp10)){
		HX_STACK_LINE(207)
		tmp11 = toUnion->get_right();
	}
	else{
		HX_STACK_LINE(207)
		tmp11 = this->get_right();
	}
	HX_STACK_LINE(207)
	Float x1 = tmp11;		HX_STACK_VAR(x1,"x1");
	HX_STACK_LINE(208)
	Float tmp12 = this->y;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(208)
	Float tmp13 = toUnion->y;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(208)
	bool tmp14 = (tmp12 > tmp13);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(208)
	Float tmp15;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(208)
	if ((tmp14)){
		HX_STACK_LINE(208)
		tmp15 = toUnion->y;
	}
	else{
		HX_STACK_LINE(208)
		tmp15 = this->y;
	}
	HX_STACK_LINE(208)
	Float y0 = tmp15;		HX_STACK_VAR(y0,"y0");
	HX_STACK_LINE(209)
	Float tmp16 = this->get_bottom();		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(209)
	Float tmp17 = toUnion->get_bottom();		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(209)
	bool tmp18 = (tmp16 < tmp17);		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(209)
	Float tmp19;		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(209)
	if ((tmp18)){
		HX_STACK_LINE(209)
		tmp19 = toUnion->get_bottom();
	}
	else{
		HX_STACK_LINE(209)
		tmp19 = this->get_bottom();
	}
	HX_STACK_LINE(209)
	Float y1 = tmp19;		HX_STACK_VAR(y1,"y1");
	HX_STACK_LINE(211)
	Float tmp20 = x0;		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(211)
	Float tmp21 = y0;		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(211)
	Float tmp22 = (x1 - x0);		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(211)
	Float tmp23 = (y1 - y0);		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(211)
	::openfl::geom::Rectangle tmp24 = ::openfl::geom::Rectangle_obj::__new(tmp20,tmp21,tmp22,tmp23);		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(211)
	return tmp24;
}


HX_DEFINE_DYNAMIC_FUNC1(Rectangle_obj,_union,return )

Void Rectangle_obj::__contract( Float x,Float y,Float width,Float height){
{
		HX_STACK_FRAME("openfl.geom.Rectangle","__contract",0xb7fb00c5,"openfl.geom.Rectangle.__contract","openfl/geom/Rectangle.hx",216,0xf2fb2b03)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_LINE(218)
		Float tmp = this->width;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(218)
		bool tmp1 = (tmp == (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(218)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(218)
		if ((tmp1)){
			HX_STACK_LINE(218)
			Float tmp3 = this->height;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(218)
			Float tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(218)
			tmp2 = (tmp4 == (int)0);
		}
		else{
			HX_STACK_LINE(218)
			tmp2 = false;
		}
		HX_STACK_LINE(218)
		if ((tmp2)){
			HX_STACK_LINE(220)
			return null();
		}
		HX_STACK_LINE(224)
		Float tmp3 = this->get_right();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(224)
		Float cacheRight = tmp3;		HX_STACK_VAR(cacheRight,"cacheRight");
		HX_STACK_LINE(225)
		Float tmp4 = this->get_bottom();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(225)
		Float cacheBottom = tmp4;		HX_STACK_VAR(cacheBottom,"cacheBottom");
		HX_STACK_LINE(227)
		Float tmp5 = this->x;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(227)
		Float tmp6 = x;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(227)
		bool tmp7 = (tmp5 < tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(227)
		if ((tmp7)){
			HX_STACK_LINE(227)
			this->x = x;
		}
		HX_STACK_LINE(228)
		Float tmp8 = this->y;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(228)
		Float tmp9 = y;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(228)
		bool tmp10 = (tmp8 < tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(228)
		if ((tmp10)){
			HX_STACK_LINE(228)
			this->y = y;
		}
		HX_STACK_LINE(229)
		Float tmp11 = this->get_right();		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(229)
		Float tmp12 = (x + width);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(229)
		bool tmp13 = (tmp11 > tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(229)
		if ((tmp13)){
			HX_STACK_LINE(229)
			Float tmp14 = (x + width);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(229)
			Float tmp15 = this->x;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(229)
			Float tmp16 = (tmp14 - tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(229)
			this->width = tmp16;
		}
		HX_STACK_LINE(230)
		Float tmp14 = this->get_bottom();		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(230)
		Float tmp15 = (y + height);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(230)
		bool tmp16 = (tmp14 > tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(230)
		if ((tmp16)){
			HX_STACK_LINE(230)
			Float tmp17 = (y + height);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(230)
			Float tmp18 = this->y;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(230)
			Float tmp19 = (tmp17 - tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(230)
			this->height = tmp19;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Rectangle_obj,__contract,(void))

Void Rectangle_obj::__expand( Float x,Float y,Float width,Float height){
{
		HX_STACK_FRAME("openfl.geom.Rectangle","__expand",0x79b82d4d,"openfl.geom.Rectangle.__expand","openfl/geom/Rectangle.hx",235,0xf2fb2b03)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_LINE(237)
		Float tmp = this->width;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(237)
		bool tmp1 = (tmp == (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(237)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(237)
		if ((tmp1)){
			HX_STACK_LINE(237)
			Float tmp3 = this->height;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(237)
			Float tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(237)
			tmp2 = (tmp4 == (int)0);
		}
		else{
			HX_STACK_LINE(237)
			tmp2 = false;
		}
		HX_STACK_LINE(237)
		if ((tmp2)){
			HX_STACK_LINE(239)
			this->x = x;
			HX_STACK_LINE(240)
			this->y = y;
			HX_STACK_LINE(241)
			this->width = width;
			HX_STACK_LINE(242)
			this->height = height;
			HX_STACK_LINE(243)
			return null();
		}
		HX_STACK_LINE(247)
		Float tmp3 = this->get_right();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(247)
		Float cacheRight = tmp3;		HX_STACK_VAR(cacheRight,"cacheRight");
		HX_STACK_LINE(248)
		Float tmp4 = this->get_bottom();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(248)
		Float cacheBottom = tmp4;		HX_STACK_VAR(cacheBottom,"cacheBottom");
		HX_STACK_LINE(250)
		Float tmp5 = this->x;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(250)
		Float tmp6 = x;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(250)
		bool tmp7 = (tmp5 > tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(250)
		if ((tmp7)){
			HX_STACK_LINE(252)
			this->x = x;
			HX_STACK_LINE(253)
			Float tmp8 = (cacheRight - x);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(253)
			this->width = tmp8;
		}
		HX_STACK_LINE(255)
		Float tmp8 = this->y;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(255)
		Float tmp9 = y;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(255)
		bool tmp10 = (tmp8 > tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(255)
		if ((tmp10)){
			HX_STACK_LINE(257)
			this->y = y;
			HX_STACK_LINE(258)
			Float tmp11 = (cacheBottom - y);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(258)
			this->height = tmp11;
		}
		HX_STACK_LINE(260)
		Float tmp11 = cacheRight;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(260)
		Float tmp12 = (x + width);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(260)
		bool tmp13 = (tmp11 < tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(260)
		if ((tmp13)){
			HX_STACK_LINE(260)
			Float tmp14 = (x + width);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(260)
			Float tmp15 = this->x;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(260)
			Float tmp16 = (tmp14 - tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(260)
			this->width = tmp16;
		}
		HX_STACK_LINE(261)
		Float tmp14 = cacheBottom;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(261)
		Float tmp15 = (y + height);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(261)
		bool tmp16 = (tmp14 < tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(261)
		if ((tmp16)){
			HX_STACK_LINE(261)
			Float tmp17 = (y + height);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(261)
			Float tmp18 = this->y;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(261)
			Float tmp19 = (tmp17 - tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(261)
			this->height = tmp19;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Rectangle_obj,__expand,(void))

::lime::math::Rectangle Rectangle_obj::__toLimeRectangle( ){
	HX_STACK_FRAME("openfl.geom.Rectangle","__toLimeRectangle",0x990c368c,"openfl.geom.Rectangle.__toLimeRectangle","openfl/geom/Rectangle.hx",266,0xf2fb2b03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(268)
	Float tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(268)
	Float tmp1 = this->y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(268)
	Float tmp2 = this->width;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(268)
	Float tmp3 = this->height;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(268)
	::lime::math::Rectangle tmp4 = ::lime::math::Rectangle_obj::__new(tmp,tmp1,tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(268)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC0(Rectangle_obj,__toLimeRectangle,return )

Void Rectangle_obj::__transform( ::openfl::geom::Rectangle rect,::openfl::geom::Matrix m){
{
		HX_STACK_FRAME("openfl.geom.Rectangle","__transform",0x05478859,"openfl.geom.Rectangle.__transform","openfl/geom/Rectangle.hx",273,0xf2fb2b03)
		HX_STACK_THIS(this)
		HX_STACK_ARG(rect,"rect")
		HX_STACK_ARG(m,"m")
		HX_STACK_LINE(275)
		Float tmp = m->a;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(275)
		Float tmp1 = this->x;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(275)
		Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(275)
		Float tmp3 = m->c;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(275)
		Float tmp4 = this->y;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(275)
		Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(275)
		Float tmp6 = (tmp2 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(275)
		Float tx0 = tmp6;		HX_STACK_VAR(tx0,"tx0");
		HX_STACK_LINE(276)
		Float tx1 = tx0;		HX_STACK_VAR(tx1,"tx1");
		HX_STACK_LINE(277)
		Float tmp7 = m->b;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(277)
		Float tmp8 = this->x;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(277)
		Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(277)
		Float tmp10 = m->d;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(277)
		Float tmp11 = this->y;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(277)
		Float tmp12 = (tmp10 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(277)
		Float tmp13 = (tmp9 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(277)
		Float ty0 = tmp13;		HX_STACK_VAR(ty0,"ty0");
		HX_STACK_LINE(278)
		Float ty1 = ty0;		HX_STACK_VAR(ty1,"ty1");
		HX_STACK_LINE(280)
		Float tmp14 = m->a;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(280)
		Float tmp15 = this->x;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(280)
		Float tmp16 = this->width;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(280)
		Float tmp17 = (tmp15 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(280)
		Float tmp18 = (tmp14 * tmp17);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(280)
		Float tmp19 = m->c;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(280)
		Float tmp20 = this->y;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(280)
		Float tmp21 = (tmp19 * tmp20);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(280)
		Float tmp22 = (tmp18 + tmp21);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(280)
		Float tx = tmp22;		HX_STACK_VAR(tx,"tx");
		HX_STACK_LINE(281)
		Float tmp23 = m->b;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(281)
		Float tmp24 = this->x;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(281)
		Float tmp25 = this->width;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(281)
		Float tmp26 = (tmp24 + tmp25);		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(281)
		Float tmp27 = (tmp23 * tmp26);		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(281)
		Float tmp28 = m->d;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(281)
		Float tmp29 = this->y;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(281)
		Float tmp30 = (tmp28 * tmp29);		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(281)
		Float tmp31 = (tmp27 + tmp30);		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(281)
		Float ty = tmp31;		HX_STACK_VAR(ty,"ty");
		HX_STACK_LINE(283)
		bool tmp32 = (tx < tx0);		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(283)
		if ((tmp32)){
			HX_STACK_LINE(283)
			tx0 = tx;
		}
		HX_STACK_LINE(284)
		bool tmp33 = (ty < ty0);		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(284)
		if ((tmp33)){
			HX_STACK_LINE(284)
			ty0 = ty;
		}
		HX_STACK_LINE(285)
		bool tmp34 = (tx > tx1);		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(285)
		if ((tmp34)){
			HX_STACK_LINE(285)
			tx1 = tx;
		}
		HX_STACK_LINE(286)
		bool tmp35 = (ty > ty1);		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(286)
		if ((tmp35)){
			HX_STACK_LINE(286)
			ty1 = ty;
		}
		HX_STACK_LINE(288)
		Float tmp36 = m->a;		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(288)
		Float tmp37 = this->x;		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(288)
		Float tmp38 = this->width;		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(288)
		Float tmp39 = (tmp37 + tmp38);		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(288)
		Float tmp40 = (tmp36 * tmp39);		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(288)
		Float tmp41 = m->c;		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(288)
		Float tmp42 = this->y;		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(288)
		Float tmp43 = this->height;		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(288)
		Float tmp44 = (tmp42 + tmp43);		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(288)
		Float tmp45 = (tmp41 * tmp44);		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(288)
		Float tmp46 = (tmp40 + tmp45);		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(288)
		tx = tmp46;
		HX_STACK_LINE(289)
		Float tmp47 = m->b;		HX_STACK_VAR(tmp47,"tmp47");
		HX_STACK_LINE(289)
		Float tmp48 = this->x;		HX_STACK_VAR(tmp48,"tmp48");
		HX_STACK_LINE(289)
		Float tmp49 = this->width;		HX_STACK_VAR(tmp49,"tmp49");
		HX_STACK_LINE(289)
		Float tmp50 = (tmp48 + tmp49);		HX_STACK_VAR(tmp50,"tmp50");
		HX_STACK_LINE(289)
		Float tmp51 = (tmp47 * tmp50);		HX_STACK_VAR(tmp51,"tmp51");
		HX_STACK_LINE(289)
		Float tmp52 = m->d;		HX_STACK_VAR(tmp52,"tmp52");
		HX_STACK_LINE(289)
		Float tmp53 = this->y;		HX_STACK_VAR(tmp53,"tmp53");
		HX_STACK_LINE(289)
		Float tmp54 = this->height;		HX_STACK_VAR(tmp54,"tmp54");
		HX_STACK_LINE(289)
		Float tmp55 = (tmp53 + tmp54);		HX_STACK_VAR(tmp55,"tmp55");
		HX_STACK_LINE(289)
		Float tmp56 = (tmp52 * tmp55);		HX_STACK_VAR(tmp56,"tmp56");
		HX_STACK_LINE(289)
		Float tmp57 = (tmp51 + tmp56);		HX_STACK_VAR(tmp57,"tmp57");
		HX_STACK_LINE(289)
		ty = tmp57;
		HX_STACK_LINE(291)
		bool tmp58 = (tx < tx0);		HX_STACK_VAR(tmp58,"tmp58");
		HX_STACK_LINE(291)
		if ((tmp58)){
			HX_STACK_LINE(291)
			tx0 = tx;
		}
		HX_STACK_LINE(292)
		bool tmp59 = (ty < ty0);		HX_STACK_VAR(tmp59,"tmp59");
		HX_STACK_LINE(292)
		if ((tmp59)){
			HX_STACK_LINE(292)
			ty0 = ty;
		}
		HX_STACK_LINE(293)
		bool tmp60 = (tx > tx1);		HX_STACK_VAR(tmp60,"tmp60");
		HX_STACK_LINE(293)
		if ((tmp60)){
			HX_STACK_LINE(293)
			tx1 = tx;
		}
		HX_STACK_LINE(294)
		bool tmp61 = (ty > ty1);		HX_STACK_VAR(tmp61,"tmp61");
		HX_STACK_LINE(294)
		if ((tmp61)){
			HX_STACK_LINE(294)
			ty1 = ty;
		}
		HX_STACK_LINE(296)
		Float tmp62 = m->a;		HX_STACK_VAR(tmp62,"tmp62");
		HX_STACK_LINE(296)
		Float tmp63 = this->x;		HX_STACK_VAR(tmp63,"tmp63");
		HX_STACK_LINE(296)
		Float tmp64 = (tmp62 * tmp63);		HX_STACK_VAR(tmp64,"tmp64");
		HX_STACK_LINE(296)
		Float tmp65 = m->c;		HX_STACK_VAR(tmp65,"tmp65");
		HX_STACK_LINE(296)
		Float tmp66 = this->y;		HX_STACK_VAR(tmp66,"tmp66");
		HX_STACK_LINE(296)
		Float tmp67 = this->height;		HX_STACK_VAR(tmp67,"tmp67");
		HX_STACK_LINE(296)
		Float tmp68 = (tmp66 + tmp67);		HX_STACK_VAR(tmp68,"tmp68");
		HX_STACK_LINE(296)
		Float tmp69 = (tmp65 * tmp68);		HX_STACK_VAR(tmp69,"tmp69");
		HX_STACK_LINE(296)
		Float tmp70 = (tmp64 + tmp69);		HX_STACK_VAR(tmp70,"tmp70");
		HX_STACK_LINE(296)
		tx = tmp70;
		HX_STACK_LINE(297)
		Float tmp71 = m->b;		HX_STACK_VAR(tmp71,"tmp71");
		HX_STACK_LINE(297)
		Float tmp72 = this->x;		HX_STACK_VAR(tmp72,"tmp72");
		HX_STACK_LINE(297)
		Float tmp73 = (tmp71 * tmp72);		HX_STACK_VAR(tmp73,"tmp73");
		HX_STACK_LINE(297)
		Float tmp74 = m->d;		HX_STACK_VAR(tmp74,"tmp74");
		HX_STACK_LINE(297)
		Float tmp75 = this->y;		HX_STACK_VAR(tmp75,"tmp75");
		HX_STACK_LINE(297)
		Float tmp76 = this->height;		HX_STACK_VAR(tmp76,"tmp76");
		HX_STACK_LINE(297)
		Float tmp77 = (tmp75 + tmp76);		HX_STACK_VAR(tmp77,"tmp77");
		HX_STACK_LINE(297)
		Float tmp78 = (tmp74 * tmp77);		HX_STACK_VAR(tmp78,"tmp78");
		HX_STACK_LINE(297)
		Float tmp79 = (tmp73 + tmp78);		HX_STACK_VAR(tmp79,"tmp79");
		HX_STACK_LINE(297)
		ty = tmp79;
		HX_STACK_LINE(299)
		bool tmp80 = (tx < tx0);		HX_STACK_VAR(tmp80,"tmp80");
		HX_STACK_LINE(299)
		if ((tmp80)){
			HX_STACK_LINE(299)
			tx0 = tx;
		}
		HX_STACK_LINE(300)
		bool tmp81 = (ty < ty0);		HX_STACK_VAR(tmp81,"tmp81");
		HX_STACK_LINE(300)
		if ((tmp81)){
			HX_STACK_LINE(300)
			ty0 = ty;
		}
		HX_STACK_LINE(301)
		bool tmp82 = (tx > tx1);		HX_STACK_VAR(tmp82,"tmp82");
		HX_STACK_LINE(301)
		if ((tmp82)){
			HX_STACK_LINE(301)
			tx1 = tx;
		}
		HX_STACK_LINE(302)
		bool tmp83 = (ty > ty1);		HX_STACK_VAR(tmp83,"tmp83");
		HX_STACK_LINE(302)
		if ((tmp83)){
			HX_STACK_LINE(302)
			ty1 = ty;
		}
		HX_STACK_LINE(304)
		Float tmp84 = (tx0 + m->tx);		HX_STACK_VAR(tmp84,"tmp84");
		HX_STACK_LINE(304)
		Float tmp85 = (ty0 + m->ty);		HX_STACK_VAR(tmp85,"tmp85");
		HX_STACK_LINE(304)
		Float tmp86 = (tx1 - tx0);		HX_STACK_VAR(tmp86,"tmp86");
		HX_STACK_LINE(304)
		Float tmp87 = (ty1 - ty0);		HX_STACK_VAR(tmp87,"tmp87");
		HX_STACK_LINE(304)
		rect->setTo(tmp84,tmp85,tmp86,tmp87);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Rectangle_obj,__transform,(void))

Float Rectangle_obj::get_bottom( ){
	HX_STACK_FRAME("openfl.geom.Rectangle","get_bottom",0x33110547,"openfl.geom.Rectangle.get_bottom","openfl/geom/Rectangle.hx",316,0xf2fb2b03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(316)
	Float tmp = this->y;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(316)
	Float tmp1 = this->height;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(316)
	Float tmp2 = (tmp + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(316)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(Rectangle_obj,get_bottom,return )

Float Rectangle_obj::set_bottom( Float b){
	HX_STACK_FRAME("openfl.geom.Rectangle","set_bottom",0x368ea3bb,"openfl.geom.Rectangle.set_bottom","openfl/geom/Rectangle.hx",317,0xf2fb2b03)
	HX_STACK_THIS(this)
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(317)
	Float tmp = b;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(317)
	Float tmp1 = this->y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(317)
	Float tmp2 = (tmp - tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(317)
	this->height = tmp2;
	HX_STACK_LINE(317)
	Float tmp3 = b;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(317)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Rectangle_obj,set_bottom,return )

::openfl::geom::Point Rectangle_obj::get_bottomRight( ){
	HX_STACK_FRAME("openfl.geom.Rectangle","get_bottomRight",0xb804f515,"openfl.geom.Rectangle.get_bottomRight","openfl/geom/Rectangle.hx",318,0xf2fb2b03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(318)
	Float tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(318)
	Float tmp1 = this->width;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(318)
	Float tmp2 = (tmp + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(318)
	Float tmp3 = this->y;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(318)
	Float tmp4 = this->height;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(318)
	Float tmp5 = (tmp3 + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(318)
	::openfl::geom::Point tmp6 = ::openfl::geom::Point_obj::__new(tmp2,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(318)
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC0(Rectangle_obj,get_bottomRight,return )

::openfl::geom::Point Rectangle_obj::set_bottomRight( ::openfl::geom::Point p){
	HX_STACK_FRAME("openfl.geom.Rectangle","set_bottomRight",0xb3d07221,"openfl.geom.Rectangle.set_bottomRight","openfl/geom/Rectangle.hx",319,0xf2fb2b03)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p,"p")
	HX_STACK_LINE(319)
	Float tmp = p->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(319)
	Float tmp1 = this->x;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(319)
	Float tmp2 = (tmp - tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(319)
	this->width = tmp2;
	HX_STACK_LINE(319)
	Float tmp3 = p->y;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(319)
	Float tmp4 = this->y;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(319)
	Float tmp5 = (tmp3 - tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(319)
	this->height = tmp5;
	HX_STACK_LINE(319)
	::openfl::geom::Point tmp6 = p->clone();		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(319)
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC1(Rectangle_obj,set_bottomRight,return )

Float Rectangle_obj::get_left( ){
	HX_STACK_FRAME("openfl.geom.Rectangle","get_left",0xd4809763,"openfl.geom.Rectangle.get_left","openfl/geom/Rectangle.hx",320,0xf2fb2b03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(320)
	Float tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(320)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Rectangle_obj,get_left,return )

Float Rectangle_obj::set_left( Float l){
	HX_STACK_FRAME("openfl.geom.Rectangle","set_left",0x82ddf0d7,"openfl.geom.Rectangle.set_left","openfl/geom/Rectangle.hx",321,0xf2fb2b03)
	HX_STACK_THIS(this)
	HX_STACK_ARG(l,"l")
	HX_STACK_LINE(321)
	Float tmp = l;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(321)
	Float tmp1 = this->x;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(321)
	Float tmp2 = (tmp - tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(321)
	hx::SubEq(this->width,tmp2);
	HX_STACK_LINE(321)
	this->x = l;
	HX_STACK_LINE(321)
	Float tmp3 = l;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(321)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Rectangle_obj,set_left,return )

Float Rectangle_obj::get_right( ){
	HX_STACK_FRAME("openfl.geom.Rectangle","get_right",0x9310ed00,"openfl.geom.Rectangle.get_right","openfl/geom/Rectangle.hx",322,0xf2fb2b03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(322)
	Float tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(322)
	Float tmp1 = this->width;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(322)
	Float tmp2 = (tmp + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(322)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(Rectangle_obj,get_right,return )

Float Rectangle_obj::set_right( Float r){
	HX_STACK_FRAME("openfl.geom.Rectangle","set_right",0x7661d90c,"openfl.geom.Rectangle.set_right","openfl/geom/Rectangle.hx",323,0xf2fb2b03)
	HX_STACK_THIS(this)
	HX_STACK_ARG(r,"r")
	HX_STACK_LINE(323)
	Float tmp = r;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(323)
	Float tmp1 = this->x;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(323)
	Float tmp2 = (tmp - tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(323)
	this->width = tmp2;
	HX_STACK_LINE(323)
	Float tmp3 = r;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(323)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Rectangle_obj,set_right,return )

::openfl::geom::Point Rectangle_obj::get_size( ){
	HX_STACK_FRAME("openfl.geom.Rectangle","get_size",0xd924301d,"openfl.geom.Rectangle.get_size","openfl/geom/Rectangle.hx",324,0xf2fb2b03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(324)
	Float tmp = this->width;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(324)
	Float tmp1 = this->height;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(324)
	::openfl::geom::Point tmp2 = ::openfl::geom::Point_obj::__new(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(324)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(Rectangle_obj,get_size,return )

::openfl::geom::Point Rectangle_obj::set_size( ::openfl::geom::Point p){
	HX_STACK_FRAME("openfl.geom.Rectangle","set_size",0x87818991,"openfl.geom.Rectangle.set_size","openfl/geom/Rectangle.hx",325,0xf2fb2b03)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p,"p")
	HX_STACK_LINE(325)
	this->width = p->x;
	HX_STACK_LINE(325)
	this->height = p->y;
	HX_STACK_LINE(325)
	::openfl::geom::Point tmp = p->clone();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(325)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Rectangle_obj,set_size,return )

Float Rectangle_obj::get_top( ){
	HX_STACK_FRAME("openfl.geom.Rectangle","get_top",0x9f65f6b9,"openfl.geom.Rectangle.get_top","openfl/geom/Rectangle.hx",326,0xf2fb2b03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(326)
	Float tmp = this->y;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(326)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Rectangle_obj,get_top,return )

Float Rectangle_obj::set_top( Float t){
	HX_STACK_FRAME("openfl.geom.Rectangle","set_top",0x926787c5,"openfl.geom.Rectangle.set_top","openfl/geom/Rectangle.hx",327,0xf2fb2b03)
	HX_STACK_THIS(this)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(327)
	Float tmp = t;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(327)
	Float tmp1 = this->y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(327)
	Float tmp2 = (tmp - tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(327)
	hx::SubEq(this->height,tmp2);
	HX_STACK_LINE(327)
	this->y = t;
	HX_STACK_LINE(327)
	Float tmp3 = t;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(327)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Rectangle_obj,set_top,return )

::openfl::geom::Point Rectangle_obj::get_topLeft( ){
	HX_STACK_FRAME("openfl.geom.Rectangle","get_topLeft",0x00437b60,"openfl.geom.Rectangle.get_topLeft","openfl/geom/Rectangle.hx",328,0xf2fb2b03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(328)
	Float tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(328)
	Float tmp1 = this->y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(328)
	::openfl::geom::Point tmp2 = ::openfl::geom::Point_obj::__new(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(328)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(Rectangle_obj,get_topLeft,return )

::openfl::geom::Point Rectangle_obj::set_topLeft( ::openfl::geom::Point p){
	HX_STACK_FRAME("openfl.geom.Rectangle","set_topLeft",0x0ab0826c,"openfl.geom.Rectangle.set_topLeft","openfl/geom/Rectangle.hx",329,0xf2fb2b03)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p,"p")
	HX_STACK_LINE(329)
	this->x = p->x;
	HX_STACK_LINE(329)
	this->y = p->y;
	HX_STACK_LINE(329)
	::openfl::geom::Point tmp = p->clone();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(329)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Rectangle_obj,set_topLeft,return )

::openfl::geom::Rectangle Rectangle_obj::__temp;


Rectangle_obj::Rectangle_obj()
{
}

Dynamic Rectangle_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return x; }
		if (HX_FIELD_EQ(inName,"y") ) { return y; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"top") ) { if (inCallProp == hx::paccAlways) return get_top(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"left") ) { if (inCallProp == hx::paccAlways) return get_left(); }
		if (HX_FIELD_EQ(inName,"size") ) { if (inCallProp == hx::paccAlways) return get_size(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"right") ) { if (inCallProp == hx::paccAlways) return get_right(); }
		if (HX_FIELD_EQ(inName,"width") ) { return width; }
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		if (HX_FIELD_EQ(inName,"setTo") ) { return setTo_dyn(); }
		if (HX_FIELD_EQ(inName,"union") ) { return _union_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"bottom") ) { if (inCallProp == hx::paccAlways) return get_bottom(); }
		if (HX_FIELD_EQ(inName,"height") ) { return height; }
		if (HX_FIELD_EQ(inName,"equals") ) { return equals_dyn(); }
		if (HX_FIELD_EQ(inName,"offset") ) { return offset_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"topLeft") ) { if (inCallProp == hx::paccAlways) return get_topLeft(); }
		if (HX_FIELD_EQ(inName,"inflate") ) { return inflate_dyn(); }
		if (HX_FIELD_EQ(inName,"isEmpty") ) { return isEmpty_dyn(); }
		if (HX_FIELD_EQ(inName,"get_top") ) { return get_top_dyn(); }
		if (HX_FIELD_EQ(inName,"set_top") ) { return set_top_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"contains") ) { return contains_dyn(); }
		if (HX_FIELD_EQ(inName,"copyFrom") ) { return copyFrom_dyn(); }
		if (HX_FIELD_EQ(inName,"setEmpty") ) { return setEmpty_dyn(); }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		if (HX_FIELD_EQ(inName,"__expand") ) { return __expand_dyn(); }
		if (HX_FIELD_EQ(inName,"get_left") ) { return get_left_dyn(); }
		if (HX_FIELD_EQ(inName,"set_left") ) { return set_left_dyn(); }
		if (HX_FIELD_EQ(inName,"get_size") ) { return get_size_dyn(); }
		if (HX_FIELD_EQ(inName,"set_size") ) { return set_size_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_right") ) { return get_right_dyn(); }
		if (HX_FIELD_EQ(inName,"set_right") ) { return set_right_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"intersects") ) { return intersects_dyn(); }
		if (HX_FIELD_EQ(inName,"__contract") ) { return __contract_dyn(); }
		if (HX_FIELD_EQ(inName,"get_bottom") ) { return get_bottom_dyn(); }
		if (HX_FIELD_EQ(inName,"set_bottom") ) { return set_bottom_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"bottomRight") ) { if (inCallProp == hx::paccAlways) return get_bottomRight(); }
		if (HX_FIELD_EQ(inName,"offsetPoint") ) { return offsetPoint_dyn(); }
		if (HX_FIELD_EQ(inName,"__transform") ) { return __transform_dyn(); }
		if (HX_FIELD_EQ(inName,"get_topLeft") ) { return get_topLeft_dyn(); }
		if (HX_FIELD_EQ(inName,"set_topLeft") ) { return set_topLeft_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"containsRect") ) { return containsRect_dyn(); }
		if (HX_FIELD_EQ(inName,"inflatePoint") ) { return inflatePoint_dyn(); }
		if (HX_FIELD_EQ(inName,"intersection") ) { return intersection_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"containsPoint") ) { return containsPoint_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_bottomRight") ) { return get_bottomRight_dyn(); }
		if (HX_FIELD_EQ(inName,"set_bottomRight") ) { return set_bottomRight_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__toLimeRectangle") ) { return __toLimeRectangle_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool Rectangle_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"__temp") ) { outValue = __temp; return true;  }
	}
	return false;
}

Dynamic Rectangle_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< Float >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"top") ) { if (inCallProp == hx::paccAlways) return set_top(inValue); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"left") ) { if (inCallProp == hx::paccAlways) return set_left(inValue); }
		if (HX_FIELD_EQ(inName,"size") ) { if (inCallProp == hx::paccAlways) return set_size(inValue); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"right") ) { if (inCallProp == hx::paccAlways) return set_right(inValue); }
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"bottom") ) { if (inCallProp == hx::paccAlways) return set_bottom(inValue); }
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"topLeft") ) { if (inCallProp == hx::paccAlways) return set_topLeft(inValue); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"bottomRight") ) { if (inCallProp == hx::paccAlways) return set_bottomRight(inValue); }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Rectangle_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"__temp") ) { __temp=ioValue.Cast< ::openfl::geom::Rectangle >(); return true; }
	}
	return false;
}

void Rectangle_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("bottom","\xeb","\xe6","\x78","\x65"));
	outFields->push(HX_HCSTRING("bottomRight","\xf1","\xa0","\xf4","\x4e"));
	outFields->push(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"));
	outFields->push(HX_HCSTRING("left","\x07","\x08","\xb0","\x47"));
	outFields->push(HX_HCSTRING("right","\xdc","\x0b","\x64","\xe9"));
	outFields->push(HX_HCSTRING("size","\xc1","\xa0","\x53","\x4c"));
	outFields->push(HX_HCSTRING("top","\x95","\x66","\x58","\x00"));
	outFields->push(HX_HCSTRING("topLeft","\x3c","\x09","\xc1","\xe8"));
	outFields->push(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"));
	outFields->push(HX_HCSTRING("x","\x78","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("y","\x79","\x00","\x00","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(Rectangle_obj,height),HX_HCSTRING("height","\xe7","\x07","\x4c","\x02")},
	{hx::fsFloat,(int)offsetof(Rectangle_obj,width),HX_HCSTRING("width","\x06","\xb6","\x62","\xca")},
	{hx::fsFloat,(int)offsetof(Rectangle_obj,x),HX_HCSTRING("x","\x78","\x00","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(Rectangle_obj,y),HX_HCSTRING("y","\x79","\x00","\x00","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::openfl::geom::Rectangle*/ ,(void *) &Rectangle_obj::__temp,HX_HCSTRING("__temp","\x34","\x26","\xf2","\xfb")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"),
	HX_HCSTRING("width","\x06","\xb6","\x62","\xca"),
	HX_HCSTRING("x","\x78","\x00","\x00","\x00"),
	HX_HCSTRING("y","\x79","\x00","\x00","\x00"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	HX_HCSTRING("contains","\x1f","\x5a","\x7b","\x2c"),
	HX_HCSTRING("containsPoint","\xb1","\xb9","\xeb","\x92"),
	HX_HCSTRING("containsRect","\xe3","\xce","\x1c","\xa6"),
	HX_HCSTRING("copyFrom","\xbf","\x0b","\x61","\xc8"),
	HX_HCSTRING("equals","\x3f","\xee","\xf2","\xbf"),
	HX_HCSTRING("inflate","\x87","\x9c","\x1b","\x0c"),
	HX_HCSTRING("inflatePoint","\x49","\xbe","\x39","\x32"),
	HX_HCSTRING("intersection","\x49","\xa2","\x61","\x88"),
	HX_HCSTRING("intersects","\xb4","\xc2","\xeb","\xe3"),
	HX_HCSTRING("isEmpty","\x43","\xde","\x5f","\x0c"),
	HX_HCSTRING("offset","\x93","\x97","\x3f","\x60"),
	HX_HCSTRING("offsetPoint","\xbd","\x37","\x10","\x5f"),
	HX_HCSTRING("setEmpty","\x8b","\xa3","\x0e","\x7e"),
	HX_HCSTRING("setTo","\xbd","\x91","\x2f","\x7a"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	HX_HCSTRING("union","\x0f","\x65","\xe7","\xa6"),
	HX_HCSTRING("__contract","\x32","\x52","\xea","\xda"),
	HX_HCSTRING("__expand","\x7a","\x59","\xa2","\x6c"),
	HX_HCSTRING("__toLimeRectangle","\xbf","\x9c","\x93","\x92"),
	HX_HCSTRING("__transform","\x4c","\x76","\xbf","\x73"),
	HX_HCSTRING("get_bottom","\xb4","\x56","\x00","\x56"),
	HX_HCSTRING("set_bottom","\x28","\xf5","\x7d","\x59"),
	HX_HCSTRING("get_bottomRight","\x88","\x58","\xd6","\x0f"),
	HX_HCSTRING("set_bottomRight","\x94","\xd5","\xa1","\x0b"),
	HX_HCSTRING("get_left","\x90","\xc3","\x6a","\xc7"),
	HX_HCSTRING("set_left","\x04","\x1d","\xc8","\x75"),
	HX_HCSTRING("get_right","\x33","\x68","\x0d","\x2d"),
	HX_HCSTRING("set_right","\x3f","\x54","\x5e","\x10"),
	HX_HCSTRING("get_size","\x4a","\x5c","\x0e","\xcc"),
	HX_HCSTRING("set_size","\xbe","\xb5","\x6b","\x7a"),
	HX_HCSTRING("get_top","\x2c","\x2f","\xcd","\x26"),
	HX_HCSTRING("set_top","\x38","\xc0","\xce","\x19"),
	HX_HCSTRING("get_topLeft","\x53","\x69","\xbb","\x6e"),
	HX_HCSTRING("set_topLeft","\x5f","\x70","\x28","\x79"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Rectangle_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Rectangle_obj::__temp,"__temp");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Rectangle_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Rectangle_obj::__temp,"__temp");
};

#endif

hx::Class Rectangle_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("__temp","\x34","\x26","\xf2","\xfb"),
	::String(null()) };

void Rectangle_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.geom.Rectangle","\xfb","\x52","\x34","\xb7");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Rectangle_obj::__GetStatic;
	__mClass->mSetStaticField = &Rectangle_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Rectangle_obj >;
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

void Rectangle_obj::__boot()
{
	__temp= ::openfl::geom::Rectangle_obj::__new(null(),null(),null(),null());
}

} // end namespace openfl
} // end namespace geom
