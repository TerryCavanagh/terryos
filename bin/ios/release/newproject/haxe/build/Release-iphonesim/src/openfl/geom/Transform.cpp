#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_openfl__Vector_FloatVector
#include <openfl/_Vector/FloatVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_IVector
#include <openfl/_Vector/IVector.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_geom_ColorTransform
#include <openfl/geom/ColorTransform.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix3D
#include <openfl/geom/Matrix3D.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
#ifndef INCLUDED_openfl_geom_Transform
#include <openfl/geom/Transform.h>
#endif
namespace openfl{
namespace geom{

Void Transform_obj::__construct(::openfl::display::DisplayObject displayObject)
{
HX_STACK_FRAME("openfl.geom.Transform","new",0x993cc92a,"openfl.geom.Transform.new","openfl/geom/Transform.hx",26,0xf4f475e6)
HX_STACK_THIS(this)
HX_STACK_ARG(displayObject,"displayObject")
{
	HX_STACK_LINE(28)
	::openfl::geom::ColorTransform tmp = ::openfl::geom::ColorTransform_obj::__new(null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(28)
	this->__colorTransform = tmp;
	HX_STACK_LINE(29)
	::openfl::geom::ColorTransform tmp1 = ::openfl::geom::ColorTransform_obj::__new(null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(29)
	this->concatenatedColorTransform = tmp1;
	HX_STACK_LINE(30)
	::openfl::geom::Rectangle tmp2 = ::openfl::geom::Rectangle_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(30)
	this->pixelBounds = tmp2;
	HX_STACK_LINE(32)
	this->__displayObject = displayObject;
	HX_STACK_LINE(33)
	this->__hasMatrix = true;
}
;
	return null();
}

//Transform_obj::~Transform_obj() { }

Dynamic Transform_obj::__CreateEmpty() { return  new Transform_obj; }
hx::ObjectPtr< Transform_obj > Transform_obj::__new(::openfl::display::DisplayObject displayObject)
{  hx::ObjectPtr< Transform_obj > _result_ = new Transform_obj();
	_result_->__construct(displayObject);
	return _result_;}

Dynamic Transform_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Transform_obj > _result_ = new Transform_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

::openfl::geom::ColorTransform Transform_obj::get_colorTransform( ){
	HX_STACK_FRAME("openfl.geom.Transform","get_colorTransform",0xc8c832c8,"openfl.geom.Transform.get_colorTransform","openfl/geom/Transform.hx",45,0xf4f475e6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(47)
	::openfl::geom::ColorTransform tmp = this->__colorTransform;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(47)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Transform_obj,get_colorTransform,return )

::openfl::geom::ColorTransform Transform_obj::set_colorTransform( ::openfl::geom::ColorTransform value){
	HX_STACK_FRAME("openfl.geom.Transform","set_colorTransform",0xa577653c,"openfl.geom.Transform.set_colorTransform","openfl/geom/Transform.hx",52,0xf4f475e6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(54)
	::openfl::geom::ColorTransform tmp = this->__colorTransform;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(54)
	::openfl::geom::ColorTransform tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(54)
	bool tmp2 = tmp->__equals(tmp1,null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(54)
	bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(54)
	if ((tmp3)){
		HX_STACK_LINE(56)
		this->__colorTransform = value;
		HX_STACK_LINE(58)
		bool tmp4 = (value != null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(58)
		if ((tmp4)){
			HX_STACK_LINE(60)
			::openfl::display::DisplayObject tmp5 = this->__displayObject;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(60)
			Float tmp6 = value->alphaMultiplier;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(60)
			tmp5->set_alpha(tmp6);
		}
		HX_STACK_LINE(64)
		{
			HX_STACK_LINE(64)
			::openfl::display::DisplayObject tmp5 = this->__displayObject;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(64)
			::openfl::display::DisplayObject _this = tmp5;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(64)
			bool tmp6 = _this->__renderDirty;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(64)
			bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(64)
			if ((tmp7)){
				HX_STACK_LINE(64)
				_this->__renderDirty = true;
				HX_STACK_LINE(64)
				(::openfl::display::DisplayObject_obj::__worldRenderDirty)++;
			}
		}
	}
	HX_STACK_LINE(68)
	::openfl::geom::ColorTransform tmp4 = this->__colorTransform;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(68)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(Transform_obj,set_colorTransform,return )

::openfl::geom::Matrix Transform_obj::get_concatenatedMatrix( ){
	HX_STACK_FRAME("openfl.geom.Transform","get_concatenatedMatrix",0x352d276f,"openfl.geom.Transform.get_concatenatedMatrix","openfl/geom/Transform.hx",73,0xf4f475e6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(75)
	bool tmp = this->__hasMatrix;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(75)
	if ((tmp)){
		HX_STACK_LINE(77)
		::openfl::display::DisplayObject tmp1 = this->__displayObject;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(77)
		::openfl::geom::Matrix tmp2 = tmp1->__getWorldTransform();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(77)
		::openfl::geom::Matrix tmp3 = tmp2->clone();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(77)
		return tmp3;
	}
	HX_STACK_LINE(81)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Transform_obj,get_concatenatedMatrix,return )

::openfl::geom::Matrix Transform_obj::get_matrix( ){
	HX_STACK_FRAME("openfl.geom.Transform","get_matrix",0x80c3ba80,"openfl.geom.Transform.get_matrix","openfl/geom/Transform.hx",86,0xf4f475e6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(88)
	bool tmp = this->__hasMatrix;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(88)
	if ((tmp)){
		HX_STACK_LINE(90)
		::openfl::display::DisplayObject tmp1 = this->__displayObject;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(90)
		::openfl::geom::Matrix tmp2 = tmp1->__transform->clone();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(90)
		return tmp2;
	}
	HX_STACK_LINE(94)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Transform_obj,get_matrix,return )

::openfl::geom::Matrix Transform_obj::set_matrix( ::openfl::geom::Matrix value){
	HX_STACK_FRAME("openfl.geom.Transform","set_matrix",0x844158f4,"openfl.geom.Transform.set_matrix","openfl/geom/Transform.hx",99,0xf4f475e6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(101)
	bool tmp = (value == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(101)
	if ((tmp)){
		HX_STACK_LINE(103)
		this->__hasMatrix = false;
		HX_STACK_LINE(104)
		return null();
	}
	HX_STACK_LINE(108)
	this->__hasMatrix = true;
	HX_STACK_LINE(109)
	this->__hasMatrix3D = false;
	HX_STACK_LINE(111)
	::openfl::display::DisplayObject tmp1 = this->__displayObject;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(111)
	bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(111)
	if ((tmp2)){
		HX_STACK_LINE(113)
		Float tmp3 = ::Math_obj::PI;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(113)
		Float tmp4 = (Float((int)180) / Float(tmp3));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(113)
		Float tmp5 = value->d;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(113)
		Float tmp6 = value->c;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(113)
		Float tmp7 = ::Math_obj::atan2(tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(113)
		Float tmp8 = (tmp4 * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(113)
		Float tmp9 = (tmp8 - (int)90);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(113)
		Float rotation = tmp9;		HX_STACK_VAR(rotation,"rotation");
		HX_STACK_LINE(115)
		Float tmp10 = rotation;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(115)
		::openfl::display::DisplayObject tmp11 = this->__displayObject;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(115)
		Float tmp12 = tmp11->__rotation;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(115)
		bool tmp13 = (tmp10 != tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(115)
		if ((tmp13)){
			HX_STACK_LINE(117)
			::openfl::display::DisplayObject tmp14 = this->__displayObject;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(117)
			tmp14->__rotation = rotation;
			HX_STACK_LINE(118)
			Float tmp15 = rotation;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(118)
			Float tmp16 = ::Math_obj::PI;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(118)
			Float tmp17 = (Float(tmp16) / Float((int)180));		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(118)
			Float tmp18 = (tmp15 * tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(118)
			Float radians = tmp18;		HX_STACK_VAR(radians,"radians");
			HX_STACK_LINE(119)
			Float tmp19 = radians;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(119)
			Float tmp20 = ::Math_obj::sin(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(119)
			::openfl::display::DisplayObject tmp21 = this->__displayObject;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(119)
			tmp21->__rotationSine = tmp20;
			HX_STACK_LINE(120)
			Float tmp22 = radians;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(120)
			Float tmp23 = ::Math_obj::cos(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(120)
			::openfl::display::DisplayObject tmp24 = this->__displayObject;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(120)
			tmp24->__rotationCosine = tmp23;
		}
		HX_STACK_LINE(124)
		::openfl::display::DisplayObject tmp14 = this->__displayObject;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(124)
		::openfl::geom::Matrix tmp15 = value;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(124)
		tmp14->__transform->copyFrom(tmp15);
		HX_STACK_LINE(125)
		{
			HX_STACK_LINE(125)
			::openfl::display::DisplayObject tmp16 = this->__displayObject;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(125)
			::openfl::display::DisplayObject _this = tmp16;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(125)
			bool tmp17 = _this->__transformDirty;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(125)
			bool tmp18 = !(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(125)
			if ((tmp18)){
				HX_STACK_LINE(125)
				_this->__transformDirty = true;
				HX_STACK_LINE(125)
				(::openfl::display::DisplayObject_obj::__worldTransformDirty)++;
			}
		}
	}
	HX_STACK_LINE(129)
	::openfl::geom::Matrix tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(129)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Transform_obj,set_matrix,return )

::openfl::geom::Matrix3D Transform_obj::get_matrix3D( ){
	HX_STACK_FRAME("openfl.geom.Transform","get_matrix3D",0x05078731,"openfl.geom.Transform.get_matrix3D","openfl/geom/Transform.hx",134,0xf4f475e6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(136)
	bool tmp = this->__hasMatrix3D;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(136)
	if ((tmp)){
		HX_STACK_LINE(138)
		::openfl::display::DisplayObject tmp1 = this->__displayObject;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(138)
		::openfl::geom::Matrix matrix = tmp1->__transform;		HX_STACK_VAR(matrix,"matrix");
		HX_STACK_LINE(139)
		::openfl::_Vector::FloatVector tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(139)
		{
			HX_STACK_LINE(139)
			cpp::ArrayBase a = cpp::ArrayBase_obj::__new().Add(matrix->a).Add(matrix->b).Add(((Float)0.0)).Add(((Float)0.0)).Add(matrix->c).Add(matrix->d).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)1.0)).Add(((Float)0.0)).Add(matrix->tx).Add(matrix->ty).Add(((Float)0.0)).Add(((Float)1.0));		HX_STACK_VAR(a,"a");
			HX_STACK_LINE(139)
			::openfl::_Vector::FloatVector tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(139)
			{
				HX_STACK_LINE(139)
				int length = null();		HX_STACK_VAR(length,"length");
				HX_STACK_LINE(139)
				bool fixed = null();		HX_STACK_VAR(fixed,"fixed");
				HX_STACK_LINE(139)
				::openfl::_Vector::FloatVector tmp4 = ::openfl::_Vector::FloatVector_obj::__new(length,fixed,null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(139)
				::openfl::_Vector::FloatVector tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(139)
				tmp3 = tmp5;
			}
			HX_STACK_LINE(139)
			::openfl::_Vector::FloatVector vector = tmp3;		HX_STACK_VAR(vector,"vector");
			HX_STACK_LINE(139)
			{
				HX_STACK_LINE(139)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(139)
				int _g = a->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(139)
				while((true)){
					HX_STACK_LINE(139)
					bool tmp4 = (_g1 < _g);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(139)
					bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(139)
					if ((tmp5)){
						HX_STACK_LINE(139)
						break;
					}
					HX_STACK_LINE(139)
					int tmp6 = (_g1)++;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(139)
					int i = tmp6;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(139)
					int tmp7 = i;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(139)
					Dynamic tmp8 = a->__GetItem(i);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(139)
					Float tmp9 = ((Float)(tmp8));		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(139)
					Float tmp10 = vector->set(tmp7,tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(139)
					tmp10;
				}
			}
			HX_STACK_LINE(139)
			tmp2 = vector;
		}
		HX_STACK_LINE(139)
		::openfl::geom::Matrix3D tmp3 = ::openfl::geom::Matrix3D_obj::__new(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(139)
		return tmp3;
	}
	HX_STACK_LINE(143)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Transform_obj,get_matrix3D,return )

::openfl::geom::Matrix3D Transform_obj::set_matrix3D( ::openfl::geom::Matrix3D value){
	HX_STACK_FRAME("openfl.geom.Transform","set_matrix3D",0x1a00aaa5,"openfl.geom.Transform.set_matrix3D","openfl/geom/Transform.hx",148,0xf4f475e6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(150)
	bool tmp = (value == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(150)
	if ((tmp)){
		HX_STACK_LINE(152)
		this->__hasMatrix3D = false;
		HX_STACK_LINE(153)
		return null();
	}
	HX_STACK_LINE(157)
	this->__hasMatrix = false;
	HX_STACK_LINE(158)
	this->__hasMatrix3D = true;
	HX_STACK_LINE(160)
	::openfl::display::DisplayObject tmp1 = this->__displayObject;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(160)
	bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(160)
	if ((tmp2)){
		HX_STACK_LINE(162)
		Float tmp3 = ::Math_obj::PI;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(162)
		Float tmp4 = (Float((int)180) / Float(tmp3));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(162)
		Float tmp5 = value->rawData->get((int)5);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(162)
		Float tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(162)
		Float tmp7 = value->rawData->get((int)4);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(162)
		Float tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(162)
		Float tmp9 = ::Math_obj::atan2(tmp6,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(162)
		Float tmp10 = (tmp4 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(162)
		Float tmp11 = (tmp10 - (int)90);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(162)
		Float rotation = tmp11;		HX_STACK_VAR(rotation,"rotation");
		HX_STACK_LINE(164)
		Float tmp12 = rotation;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(164)
		::openfl::display::DisplayObject tmp13 = this->__displayObject;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(164)
		Float tmp14 = tmp13->__rotation;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(164)
		bool tmp15 = (tmp12 != tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(164)
		if ((tmp15)){
			HX_STACK_LINE(166)
			::openfl::display::DisplayObject tmp16 = this->__displayObject;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(166)
			tmp16->__rotation = rotation;
			HX_STACK_LINE(167)
			Float tmp17 = rotation;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(167)
			Float tmp18 = ::Math_obj::PI;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(167)
			Float tmp19 = (Float(tmp18) / Float((int)180));		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(167)
			Float tmp20 = (tmp17 * tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(167)
			Float radians = tmp20;		HX_STACK_VAR(radians,"radians");
			HX_STACK_LINE(168)
			Float tmp21 = radians;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(168)
			Float tmp22 = ::Math_obj::sin(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(168)
			::openfl::display::DisplayObject tmp23 = this->__displayObject;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(168)
			tmp23->__rotationSine = tmp22;
			HX_STACK_LINE(169)
			Float tmp24 = radians;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(169)
			Float tmp25 = ::Math_obj::cos(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(169)
			::openfl::display::DisplayObject tmp26 = this->__displayObject;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(169)
			tmp26->__rotationCosine = tmp25;
		}
		HX_STACK_LINE(173)
		Float tmp16 = value->rawData->get((int)0);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(173)
		::openfl::display::DisplayObject tmp17 = this->__displayObject;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(173)
		tmp17->__transform->a = tmp16;
		HX_STACK_LINE(174)
		Float tmp18 = value->rawData->get((int)1);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(174)
		::openfl::display::DisplayObject tmp19 = this->__displayObject;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(174)
		tmp19->__transform->b = tmp18;
		HX_STACK_LINE(175)
		Float tmp20 = value->rawData->get((int)5);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(175)
		::openfl::display::DisplayObject tmp21 = this->__displayObject;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(175)
		tmp21->__transform->c = tmp20;
		HX_STACK_LINE(176)
		Float tmp22 = value->rawData->get((int)6);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(176)
		::openfl::display::DisplayObject tmp23 = this->__displayObject;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(176)
		tmp23->__transform->d = tmp22;
		HX_STACK_LINE(177)
		Float tmp24 = value->rawData->get((int)12);		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(177)
		::openfl::display::DisplayObject tmp25 = this->__displayObject;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(177)
		tmp25->__transform->tx = tmp24;
		HX_STACK_LINE(178)
		Float tmp26 = value->rawData->get((int)13);		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(178)
		::openfl::display::DisplayObject tmp27 = this->__displayObject;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(178)
		tmp27->__transform->ty = tmp26;
		HX_STACK_LINE(180)
		{
			HX_STACK_LINE(180)
			::openfl::display::DisplayObject tmp28 = this->__displayObject;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(180)
			::openfl::display::DisplayObject _this = tmp28;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(180)
			bool tmp29 = _this->__transformDirty;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(180)
			bool tmp30 = !(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(180)
			if ((tmp30)){
				HX_STACK_LINE(180)
				_this->__transformDirty = true;
				HX_STACK_LINE(180)
				(::openfl::display::DisplayObject_obj::__worldTransformDirty)++;
			}
		}
	}
	HX_STACK_LINE(184)
	::openfl::geom::Matrix3D tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(184)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Transform_obj,set_matrix3D,return )


Transform_obj::Transform_obj()
{
}

void Transform_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Transform);
	HX_MARK_MEMBER_NAME(concatenatedColorTransform,"concatenatedColorTransform");
	HX_MARK_MEMBER_NAME(pixelBounds,"pixelBounds");
	HX_MARK_MEMBER_NAME(__colorTransform,"__colorTransform");
	HX_MARK_MEMBER_NAME(__displayObject,"__displayObject");
	HX_MARK_MEMBER_NAME(__hasMatrix,"__hasMatrix");
	HX_MARK_MEMBER_NAME(__hasMatrix3D,"__hasMatrix3D");
	HX_MARK_END_CLASS();
}

void Transform_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(concatenatedColorTransform,"concatenatedColorTransform");
	HX_VISIT_MEMBER_NAME(pixelBounds,"pixelBounds");
	HX_VISIT_MEMBER_NAME(__colorTransform,"__colorTransform");
	HX_VISIT_MEMBER_NAME(__displayObject,"__displayObject");
	HX_VISIT_MEMBER_NAME(__hasMatrix,"__hasMatrix");
	HX_VISIT_MEMBER_NAME(__hasMatrix3D,"__hasMatrix3D");
}

Dynamic Transform_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"matrix") ) { if (inCallProp == hx::paccAlways) return get_matrix(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"matrix3D") ) { if (inCallProp == hx::paccAlways) return get_matrix3D(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_matrix") ) { return get_matrix_dyn(); }
		if (HX_FIELD_EQ(inName,"set_matrix") ) { return set_matrix_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"pixelBounds") ) { return pixelBounds; }
		if (HX_FIELD_EQ(inName,"__hasMatrix") ) { return __hasMatrix; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_matrix3D") ) { return get_matrix3D_dyn(); }
		if (HX_FIELD_EQ(inName,"set_matrix3D") ) { return set_matrix3D_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__hasMatrix3D") ) { return __hasMatrix3D; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"colorTransform") ) { if (inCallProp == hx::paccAlways) return get_colorTransform(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__displayObject") ) { return __displayObject; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__colorTransform") ) { return __colorTransform; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"concatenatedMatrix") ) { if (inCallProp == hx::paccAlways) return get_concatenatedMatrix(); }
		if (HX_FIELD_EQ(inName,"get_colorTransform") ) { return get_colorTransform_dyn(); }
		if (HX_FIELD_EQ(inName,"set_colorTransform") ) { return set_colorTransform_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"get_concatenatedMatrix") ) { return get_concatenatedMatrix_dyn(); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"concatenatedColorTransform") ) { return concatenatedColorTransform; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Transform_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"matrix") ) { if (inCallProp == hx::paccAlways) return set_matrix(inValue); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"matrix3D") ) { if (inCallProp == hx::paccAlways) return set_matrix3D(inValue); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"pixelBounds") ) { pixelBounds=inValue.Cast< ::openfl::geom::Rectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__hasMatrix") ) { __hasMatrix=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__hasMatrix3D") ) { __hasMatrix3D=inValue.Cast< bool >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"colorTransform") ) { if (inCallProp == hx::paccAlways) return set_colorTransform(inValue); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__displayObject") ) { __displayObject=inValue.Cast< ::openfl::display::DisplayObject >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__colorTransform") ) { __colorTransform=inValue.Cast< ::openfl::geom::ColorTransform >(); return inValue; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"concatenatedColorTransform") ) { concatenatedColorTransform=inValue.Cast< ::openfl::geom::ColorTransform >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Transform_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("colorTransform","\x89","\xd7","\x3f","\xad"));
	outFields->push(HX_HCSTRING("concatenatedColorTransform","\xf8","\xe8","\x5a","\x77"));
	outFields->push(HX_HCSTRING("concatenatedMatrix","\xb0","\xc0","\x9c","\xf8"));
	outFields->push(HX_HCSTRING("matrix","\x41","\x36","\xc8","\xbb"));
	outFields->push(HX_HCSTRING("matrix3D","\x32","\x35","\xf3","\x66"));
	outFields->push(HX_HCSTRING("pixelBounds","\x9b","\x69","\xaa","\xd7"));
	outFields->push(HX_HCSTRING("__colorTransform","\xa9","\x62","\x7f","\xe1"));
	outFields->push(HX_HCSTRING("__displayObject","\x81","\x73","\x54","\x5e"));
	outFields->push(HX_HCSTRING("__hasMatrix","\x1b","\x32","\xdd","\x2a"));
	outFields->push(HX_HCSTRING("__hasMatrix3D","\x8c","\x5b","\x22","\x82"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::geom::ColorTransform*/ ,(int)offsetof(Transform_obj,concatenatedColorTransform),HX_HCSTRING("concatenatedColorTransform","\xf8","\xe8","\x5a","\x77")},
	{hx::fsObject /*::openfl::geom::Rectangle*/ ,(int)offsetof(Transform_obj,pixelBounds),HX_HCSTRING("pixelBounds","\x9b","\x69","\xaa","\xd7")},
	{hx::fsObject /*::openfl::geom::ColorTransform*/ ,(int)offsetof(Transform_obj,__colorTransform),HX_HCSTRING("__colorTransform","\xa9","\x62","\x7f","\xe1")},
	{hx::fsObject /*::openfl::display::DisplayObject*/ ,(int)offsetof(Transform_obj,__displayObject),HX_HCSTRING("__displayObject","\x81","\x73","\x54","\x5e")},
	{hx::fsBool,(int)offsetof(Transform_obj,__hasMatrix),HX_HCSTRING("__hasMatrix","\x1b","\x32","\xdd","\x2a")},
	{hx::fsBool,(int)offsetof(Transform_obj,__hasMatrix3D),HX_HCSTRING("__hasMatrix3D","\x8c","\x5b","\x22","\x82")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("concatenatedColorTransform","\xf8","\xe8","\x5a","\x77"),
	HX_HCSTRING("pixelBounds","\x9b","\x69","\xaa","\xd7"),
	HX_HCSTRING("__colorTransform","\xa9","\x62","\x7f","\xe1"),
	HX_HCSTRING("__displayObject","\x81","\x73","\x54","\x5e"),
	HX_HCSTRING("__hasMatrix","\x1b","\x32","\xdd","\x2a"),
	HX_HCSTRING("__hasMatrix3D","\x8c","\x5b","\x22","\x82"),
	HX_HCSTRING("get_colorTransform","\x52","\xb8","\xd9","\x48"),
	HX_HCSTRING("set_colorTransform","\xc6","\xea","\x88","\x25"),
	HX_HCSTRING("get_concatenatedMatrix","\xf9","\x39","\x31","\x52"),
	HX_HCSTRING("get_matrix","\x0a","\xa6","\x4f","\xac"),
	HX_HCSTRING("set_matrix","\x7e","\x44","\xcd","\xaf"),
	HX_HCSTRING("get_matrix3D","\x3b","\xe9","\x0c","\x1c"),
	HX_HCSTRING("set_matrix3D","\xaf","\x0c","\x06","\x31"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Transform_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Transform_obj::__mClass,"__mClass");
};

#endif

hx::Class Transform_obj::__mClass;

void Transform_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.geom.Transform","\x38","\xac","\x4a","\xe3");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Transform_obj >;
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
} // end namespace geom
