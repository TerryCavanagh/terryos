#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_openfl__Vector_FloatVector
#include <openfl/_Vector/FloatVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_IVector
#include <openfl/_Vector/IVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_ObjectVector
#include <openfl/_Vector/ObjectVector.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix3D
#include <openfl/geom/Matrix3D.h>
#endif
#ifndef INCLUDED_openfl_geom_Vector3D
#include <openfl/geom/Vector3D.h>
#endif
namespace openfl{
namespace geom{

Void Matrix3D_obj::__construct(::openfl::_Vector::FloatVector v)
{
HX_STACK_FRAME("openfl.geom.Matrix3D","new",0xe0591fd8,"openfl.geom.Matrix3D.new","openfl/geom/Matrix3D.hx",18,0x3acce238)
HX_STACK_THIS(this)
HX_STACK_ARG(v,"v")
{
	HX_STACK_LINE(20)
	bool tmp = (v != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(20)
	bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(20)
	if ((tmp)){
		HX_STACK_LINE(20)
		int tmp2 = v->get_length();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(20)
		int tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(20)
		tmp1 = (tmp3 == (int)16);
	}
	else{
		HX_STACK_LINE(20)
		tmp1 = false;
	}
	HX_STACK_LINE(20)
	if ((tmp1)){
		HX_STACK_LINE(22)
		this->rawData = v;
	}
	else{
		HX_STACK_LINE(26)
		::openfl::_Vector::FloatVector tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(26)
		{
			HX_STACK_LINE(26)
			cpp::ArrayBase a = cpp::ArrayBase_obj::__new().Add(((Float)1.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)1.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)1.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)1.0));		HX_STACK_VAR(a,"a");
			HX_STACK_LINE(26)
			::openfl::_Vector::FloatVector tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(26)
			{
				HX_STACK_LINE(26)
				int length = null();		HX_STACK_VAR(length,"length");
				HX_STACK_LINE(26)
				bool fixed = null();		HX_STACK_VAR(fixed,"fixed");
				HX_STACK_LINE(26)
				::openfl::_Vector::FloatVector tmp4 = ::openfl::_Vector::FloatVector_obj::__new(length,fixed,null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(26)
				::openfl::_Vector::FloatVector tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(26)
				tmp3 = tmp5;
			}
			HX_STACK_LINE(26)
			::openfl::_Vector::FloatVector vector = tmp3;		HX_STACK_VAR(vector,"vector");
			HX_STACK_LINE(26)
			{
				HX_STACK_LINE(26)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(26)
				int _g = a->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(26)
				while((true)){
					HX_STACK_LINE(26)
					bool tmp4 = (_g1 < _g);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(26)
					bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(26)
					if ((tmp5)){
						HX_STACK_LINE(26)
						break;
					}
					HX_STACK_LINE(26)
					int tmp6 = (_g1)++;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(26)
					int i = tmp6;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(26)
					int tmp7 = i;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(26)
					Dynamic tmp8 = a->__GetItem(i);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(26)
					Float tmp9 = ((Float)(tmp8));		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(26)
					Float tmp10 = vector->set(tmp7,tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(26)
					tmp10;
				}
			}
			HX_STACK_LINE(26)
			tmp2 = vector;
		}
		HX_STACK_LINE(26)
		this->rawData = tmp2;
	}
}
;
	return null();
}

//Matrix3D_obj::~Matrix3D_obj() { }

Dynamic Matrix3D_obj::__CreateEmpty() { return  new Matrix3D_obj; }
hx::ObjectPtr< Matrix3D_obj > Matrix3D_obj::__new(::openfl::_Vector::FloatVector v)
{  hx::ObjectPtr< Matrix3D_obj > _result_ = new Matrix3D_obj();
	_result_->__construct(v);
	return _result_;}

Dynamic Matrix3D_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Matrix3D_obj > _result_ = new Matrix3D_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void Matrix3D_obj::append( ::openfl::geom::Matrix3D lhs){
{
		HX_STACK_FRAME("openfl.geom.Matrix3D","append",0x481b8d62,"openfl.geom.Matrix3D.append","openfl/geom/Matrix3D.hx",33,0x3acce238)
		HX_STACK_THIS(this)
		HX_STACK_ARG(lhs,"lhs")
		HX_STACK_LINE(35)
		::openfl::_Vector::FloatVector tmp = this->rawData;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(35)
		Float tmp1 = tmp->get((int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(35)
		Float m111 = tmp1;		HX_STACK_VAR(m111,"m111");
		HX_STACK_LINE(35)
		::openfl::_Vector::FloatVector tmp2 = this->rawData;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(35)
		Float tmp3 = tmp2->get((int)4);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(35)
		Float m121 = tmp3;		HX_STACK_VAR(m121,"m121");
		HX_STACK_LINE(35)
		::openfl::_Vector::FloatVector tmp4 = this->rawData;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(35)
		Float tmp5 = tmp4->get((int)8);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(35)
		Float m131 = tmp5;		HX_STACK_VAR(m131,"m131");
		HX_STACK_LINE(35)
		::openfl::_Vector::FloatVector tmp6 = this->rawData;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(35)
		Float tmp7 = tmp6->get((int)12);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(35)
		Float m141 = tmp7;		HX_STACK_VAR(m141,"m141");
		HX_STACK_LINE(36)
		::openfl::_Vector::FloatVector tmp8 = this->rawData;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(36)
		Float tmp9 = tmp8->get((int)1);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(36)
		Float m112 = tmp9;		HX_STACK_VAR(m112,"m112");
		HX_STACK_LINE(36)
		::openfl::_Vector::FloatVector tmp10 = this->rawData;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(36)
		Float tmp11 = tmp10->get((int)5);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(36)
		Float m122 = tmp11;		HX_STACK_VAR(m122,"m122");
		HX_STACK_LINE(36)
		::openfl::_Vector::FloatVector tmp12 = this->rawData;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(36)
		Float tmp13 = tmp12->get((int)9);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(36)
		Float m132 = tmp13;		HX_STACK_VAR(m132,"m132");
		HX_STACK_LINE(36)
		::openfl::_Vector::FloatVector tmp14 = this->rawData;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(36)
		Float tmp15 = tmp14->get((int)13);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(36)
		Float m142 = tmp15;		HX_STACK_VAR(m142,"m142");
		HX_STACK_LINE(37)
		::openfl::_Vector::FloatVector tmp16 = this->rawData;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(37)
		Float tmp17 = tmp16->get((int)2);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(37)
		Float m113 = tmp17;		HX_STACK_VAR(m113,"m113");
		HX_STACK_LINE(37)
		::openfl::_Vector::FloatVector tmp18 = this->rawData;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(37)
		Float tmp19 = tmp18->get((int)6);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(37)
		Float m123 = tmp19;		HX_STACK_VAR(m123,"m123");
		HX_STACK_LINE(37)
		::openfl::_Vector::FloatVector tmp20 = this->rawData;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(37)
		Float tmp21 = tmp20->get((int)10);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(37)
		Float m133 = tmp21;		HX_STACK_VAR(m133,"m133");
		HX_STACK_LINE(37)
		::openfl::_Vector::FloatVector tmp22 = this->rawData;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(37)
		Float tmp23 = tmp22->get((int)14);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(37)
		Float m143 = tmp23;		HX_STACK_VAR(m143,"m143");
		HX_STACK_LINE(38)
		::openfl::_Vector::FloatVector tmp24 = this->rawData;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(38)
		Float tmp25 = tmp24->get((int)3);		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(38)
		Float m114 = tmp25;		HX_STACK_VAR(m114,"m114");
		HX_STACK_LINE(38)
		::openfl::_Vector::FloatVector tmp26 = this->rawData;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(38)
		Float tmp27 = tmp26->get((int)7);		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(38)
		Float m124 = tmp27;		HX_STACK_VAR(m124,"m124");
		HX_STACK_LINE(38)
		::openfl::_Vector::FloatVector tmp28 = this->rawData;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(38)
		Float tmp29 = tmp28->get((int)11);		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(38)
		Float m134 = tmp29;		HX_STACK_VAR(m134,"m134");
		HX_STACK_LINE(38)
		::openfl::_Vector::FloatVector tmp30 = this->rawData;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(38)
		Float tmp31 = tmp30->get((int)15);		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(38)
		Float m144 = tmp31;		HX_STACK_VAR(m144,"m144");
		HX_STACK_LINE(39)
		Float tmp32 = lhs->rawData->get((int)0);		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(39)
		Float m211 = tmp32;		HX_STACK_VAR(m211,"m211");
		HX_STACK_LINE(39)
		Float tmp33 = lhs->rawData->get((int)4);		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(39)
		Float m221 = tmp33;		HX_STACK_VAR(m221,"m221");
		HX_STACK_LINE(39)
		Float tmp34 = lhs->rawData->get((int)8);		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(39)
		Float m231 = tmp34;		HX_STACK_VAR(m231,"m231");
		HX_STACK_LINE(39)
		Float tmp35 = lhs->rawData->get((int)12);		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(39)
		Float m241 = tmp35;		HX_STACK_VAR(m241,"m241");
		HX_STACK_LINE(40)
		Float tmp36 = lhs->rawData->get((int)1);		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(40)
		Float m212 = tmp36;		HX_STACK_VAR(m212,"m212");
		HX_STACK_LINE(40)
		Float tmp37 = lhs->rawData->get((int)5);		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(40)
		Float m222 = tmp37;		HX_STACK_VAR(m222,"m222");
		HX_STACK_LINE(40)
		Float tmp38 = lhs->rawData->get((int)9);		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(40)
		Float m232 = tmp38;		HX_STACK_VAR(m232,"m232");
		HX_STACK_LINE(40)
		Float tmp39 = lhs->rawData->get((int)13);		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(40)
		Float m242 = tmp39;		HX_STACK_VAR(m242,"m242");
		HX_STACK_LINE(41)
		Float tmp40 = lhs->rawData->get((int)2);		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(41)
		Float m213 = tmp40;		HX_STACK_VAR(m213,"m213");
		HX_STACK_LINE(41)
		Float tmp41 = lhs->rawData->get((int)6);		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(41)
		Float m223 = tmp41;		HX_STACK_VAR(m223,"m223");
		HX_STACK_LINE(41)
		Float tmp42 = lhs->rawData->get((int)10);		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(41)
		Float m233 = tmp42;		HX_STACK_VAR(m233,"m233");
		HX_STACK_LINE(41)
		Float tmp43 = lhs->rawData->get((int)14);		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(41)
		Float m243 = tmp43;		HX_STACK_VAR(m243,"m243");
		HX_STACK_LINE(42)
		Float tmp44 = lhs->rawData->get((int)3);		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(42)
		Float m214 = tmp44;		HX_STACK_VAR(m214,"m214");
		HX_STACK_LINE(42)
		Float tmp45 = lhs->rawData->get((int)7);		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(42)
		Float m224 = tmp45;		HX_STACK_VAR(m224,"m224");
		HX_STACK_LINE(42)
		Float tmp46 = lhs->rawData->get((int)11);		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(42)
		Float m234 = tmp46;		HX_STACK_VAR(m234,"m234");
		HX_STACK_LINE(42)
		Float tmp47 = lhs->rawData->get((int)15);		HX_STACK_VAR(tmp47,"tmp47");
		HX_STACK_LINE(42)
		Float m244 = tmp47;		HX_STACK_VAR(m244,"m244");
		HX_STACK_LINE(44)
		::openfl::_Vector::FloatVector tmp48 = this->rawData;		HX_STACK_VAR(tmp48,"tmp48");
		HX_STACK_LINE(44)
		Float tmp49 = (m111 * m211);		HX_STACK_VAR(tmp49,"tmp49");
		HX_STACK_LINE(44)
		Float tmp50 = (m112 * m221);		HX_STACK_VAR(tmp50,"tmp50");
		HX_STACK_LINE(44)
		Float tmp51 = (tmp49 + tmp50);		HX_STACK_VAR(tmp51,"tmp51");
		HX_STACK_LINE(44)
		Float tmp52 = (m113 * m231);		HX_STACK_VAR(tmp52,"tmp52");
		HX_STACK_LINE(44)
		Float tmp53 = (tmp51 + tmp52);		HX_STACK_VAR(tmp53,"tmp53");
		HX_STACK_LINE(44)
		Float tmp54 = (m114 * m241);		HX_STACK_VAR(tmp54,"tmp54");
		HX_STACK_LINE(44)
		Float tmp55 = (tmp53 + tmp54);		HX_STACK_VAR(tmp55,"tmp55");
		HX_STACK_LINE(44)
		Float tmp56 = tmp48->set((int)0,tmp55);		HX_STACK_VAR(tmp56,"tmp56");
		HX_STACK_LINE(44)
		tmp56;
		HX_STACK_LINE(45)
		::openfl::_Vector::FloatVector tmp57 = this->rawData;		HX_STACK_VAR(tmp57,"tmp57");
		HX_STACK_LINE(45)
		Float tmp58 = (m111 * m212);		HX_STACK_VAR(tmp58,"tmp58");
		HX_STACK_LINE(45)
		Float tmp59 = (m112 * m222);		HX_STACK_VAR(tmp59,"tmp59");
		HX_STACK_LINE(45)
		Float tmp60 = (tmp58 + tmp59);		HX_STACK_VAR(tmp60,"tmp60");
		HX_STACK_LINE(45)
		Float tmp61 = (m113 * m232);		HX_STACK_VAR(tmp61,"tmp61");
		HX_STACK_LINE(45)
		Float tmp62 = (tmp60 + tmp61);		HX_STACK_VAR(tmp62,"tmp62");
		HX_STACK_LINE(45)
		Float tmp63 = (m114 * m242);		HX_STACK_VAR(tmp63,"tmp63");
		HX_STACK_LINE(45)
		Float tmp64 = (tmp62 + tmp63);		HX_STACK_VAR(tmp64,"tmp64");
		HX_STACK_LINE(45)
		Float tmp65 = tmp57->set((int)1,tmp64);		HX_STACK_VAR(tmp65,"tmp65");
		HX_STACK_LINE(45)
		tmp65;
		HX_STACK_LINE(46)
		::openfl::_Vector::FloatVector tmp66 = this->rawData;		HX_STACK_VAR(tmp66,"tmp66");
		HX_STACK_LINE(46)
		Float tmp67 = (m111 * m213);		HX_STACK_VAR(tmp67,"tmp67");
		HX_STACK_LINE(46)
		Float tmp68 = (m112 * m223);		HX_STACK_VAR(tmp68,"tmp68");
		HX_STACK_LINE(46)
		Float tmp69 = (tmp67 + tmp68);		HX_STACK_VAR(tmp69,"tmp69");
		HX_STACK_LINE(46)
		Float tmp70 = (m113 * m233);		HX_STACK_VAR(tmp70,"tmp70");
		HX_STACK_LINE(46)
		Float tmp71 = (tmp69 + tmp70);		HX_STACK_VAR(tmp71,"tmp71");
		HX_STACK_LINE(46)
		Float tmp72 = (m114 * m243);		HX_STACK_VAR(tmp72,"tmp72");
		HX_STACK_LINE(46)
		Float tmp73 = (tmp71 + tmp72);		HX_STACK_VAR(tmp73,"tmp73");
		HX_STACK_LINE(46)
		Float tmp74 = tmp66->set((int)2,tmp73);		HX_STACK_VAR(tmp74,"tmp74");
		HX_STACK_LINE(46)
		tmp74;
		HX_STACK_LINE(47)
		::openfl::_Vector::FloatVector tmp75 = this->rawData;		HX_STACK_VAR(tmp75,"tmp75");
		HX_STACK_LINE(47)
		Float tmp76 = (m111 * m214);		HX_STACK_VAR(tmp76,"tmp76");
		HX_STACK_LINE(47)
		Float tmp77 = (m112 * m224);		HX_STACK_VAR(tmp77,"tmp77");
		HX_STACK_LINE(47)
		Float tmp78 = (tmp76 + tmp77);		HX_STACK_VAR(tmp78,"tmp78");
		HX_STACK_LINE(47)
		Float tmp79 = (m113 * m234);		HX_STACK_VAR(tmp79,"tmp79");
		HX_STACK_LINE(47)
		Float tmp80 = (tmp78 + tmp79);		HX_STACK_VAR(tmp80,"tmp80");
		HX_STACK_LINE(47)
		Float tmp81 = (m114 * m244);		HX_STACK_VAR(tmp81,"tmp81");
		HX_STACK_LINE(47)
		Float tmp82 = (tmp80 + tmp81);		HX_STACK_VAR(tmp82,"tmp82");
		HX_STACK_LINE(47)
		Float tmp83 = tmp75->set((int)3,tmp82);		HX_STACK_VAR(tmp83,"tmp83");
		HX_STACK_LINE(47)
		tmp83;
		HX_STACK_LINE(49)
		::openfl::_Vector::FloatVector tmp84 = this->rawData;		HX_STACK_VAR(tmp84,"tmp84");
		HX_STACK_LINE(49)
		Float tmp85 = (m121 * m211);		HX_STACK_VAR(tmp85,"tmp85");
		HX_STACK_LINE(49)
		Float tmp86 = (m122 * m221);		HX_STACK_VAR(tmp86,"tmp86");
		HX_STACK_LINE(49)
		Float tmp87 = (tmp85 + tmp86);		HX_STACK_VAR(tmp87,"tmp87");
		HX_STACK_LINE(49)
		Float tmp88 = (m123 * m231);		HX_STACK_VAR(tmp88,"tmp88");
		HX_STACK_LINE(49)
		Float tmp89 = (tmp87 + tmp88);		HX_STACK_VAR(tmp89,"tmp89");
		HX_STACK_LINE(49)
		Float tmp90 = (m124 * m241);		HX_STACK_VAR(tmp90,"tmp90");
		HX_STACK_LINE(49)
		Float tmp91 = (tmp89 + tmp90);		HX_STACK_VAR(tmp91,"tmp91");
		HX_STACK_LINE(49)
		Float tmp92 = tmp84->set((int)4,tmp91);		HX_STACK_VAR(tmp92,"tmp92");
		HX_STACK_LINE(49)
		tmp92;
		HX_STACK_LINE(50)
		::openfl::_Vector::FloatVector tmp93 = this->rawData;		HX_STACK_VAR(tmp93,"tmp93");
		HX_STACK_LINE(50)
		Float tmp94 = (m121 * m212);		HX_STACK_VAR(tmp94,"tmp94");
		HX_STACK_LINE(50)
		Float tmp95 = (m122 * m222);		HX_STACK_VAR(tmp95,"tmp95");
		HX_STACK_LINE(50)
		Float tmp96 = (tmp94 + tmp95);		HX_STACK_VAR(tmp96,"tmp96");
		HX_STACK_LINE(50)
		Float tmp97 = (m123 * m232);		HX_STACK_VAR(tmp97,"tmp97");
		HX_STACK_LINE(50)
		Float tmp98 = (tmp96 + tmp97);		HX_STACK_VAR(tmp98,"tmp98");
		HX_STACK_LINE(50)
		Float tmp99 = (m124 * m242);		HX_STACK_VAR(tmp99,"tmp99");
		HX_STACK_LINE(50)
		Float tmp100 = (tmp98 + tmp99);		HX_STACK_VAR(tmp100,"tmp100");
		HX_STACK_LINE(50)
		Float tmp101 = tmp93->set((int)5,tmp100);		HX_STACK_VAR(tmp101,"tmp101");
		HX_STACK_LINE(50)
		tmp101;
		HX_STACK_LINE(51)
		::openfl::_Vector::FloatVector tmp102 = this->rawData;		HX_STACK_VAR(tmp102,"tmp102");
		HX_STACK_LINE(51)
		Float tmp103 = (m121 * m213);		HX_STACK_VAR(tmp103,"tmp103");
		HX_STACK_LINE(51)
		Float tmp104 = (m122 * m223);		HX_STACK_VAR(tmp104,"tmp104");
		HX_STACK_LINE(51)
		Float tmp105 = (tmp103 + tmp104);		HX_STACK_VAR(tmp105,"tmp105");
		HX_STACK_LINE(51)
		Float tmp106 = (m123 * m233);		HX_STACK_VAR(tmp106,"tmp106");
		HX_STACK_LINE(51)
		Float tmp107 = (tmp105 + tmp106);		HX_STACK_VAR(tmp107,"tmp107");
		HX_STACK_LINE(51)
		Float tmp108 = (m124 * m243);		HX_STACK_VAR(tmp108,"tmp108");
		HX_STACK_LINE(51)
		Float tmp109 = (tmp107 + tmp108);		HX_STACK_VAR(tmp109,"tmp109");
		HX_STACK_LINE(51)
		Float tmp110 = tmp102->set((int)6,tmp109);		HX_STACK_VAR(tmp110,"tmp110");
		HX_STACK_LINE(51)
		tmp110;
		HX_STACK_LINE(52)
		::openfl::_Vector::FloatVector tmp111 = this->rawData;		HX_STACK_VAR(tmp111,"tmp111");
		HX_STACK_LINE(52)
		Float tmp112 = (m121 * m214);		HX_STACK_VAR(tmp112,"tmp112");
		HX_STACK_LINE(52)
		Float tmp113 = (m122 * m224);		HX_STACK_VAR(tmp113,"tmp113");
		HX_STACK_LINE(52)
		Float tmp114 = (tmp112 + tmp113);		HX_STACK_VAR(tmp114,"tmp114");
		HX_STACK_LINE(52)
		Float tmp115 = (m123 * m234);		HX_STACK_VAR(tmp115,"tmp115");
		HX_STACK_LINE(52)
		Float tmp116 = (tmp114 + tmp115);		HX_STACK_VAR(tmp116,"tmp116");
		HX_STACK_LINE(52)
		Float tmp117 = (m124 * m244);		HX_STACK_VAR(tmp117,"tmp117");
		HX_STACK_LINE(52)
		Float tmp118 = (tmp116 + tmp117);		HX_STACK_VAR(tmp118,"tmp118");
		HX_STACK_LINE(52)
		Float tmp119 = tmp111->set((int)7,tmp118);		HX_STACK_VAR(tmp119,"tmp119");
		HX_STACK_LINE(52)
		tmp119;
		HX_STACK_LINE(54)
		::openfl::_Vector::FloatVector tmp120 = this->rawData;		HX_STACK_VAR(tmp120,"tmp120");
		HX_STACK_LINE(54)
		Float tmp121 = (m131 * m211);		HX_STACK_VAR(tmp121,"tmp121");
		HX_STACK_LINE(54)
		Float tmp122 = (m132 * m221);		HX_STACK_VAR(tmp122,"tmp122");
		HX_STACK_LINE(54)
		Float tmp123 = (tmp121 + tmp122);		HX_STACK_VAR(tmp123,"tmp123");
		HX_STACK_LINE(54)
		Float tmp124 = (m133 * m231);		HX_STACK_VAR(tmp124,"tmp124");
		HX_STACK_LINE(54)
		Float tmp125 = (tmp123 + tmp124);		HX_STACK_VAR(tmp125,"tmp125");
		HX_STACK_LINE(54)
		Float tmp126 = (m134 * m241);		HX_STACK_VAR(tmp126,"tmp126");
		HX_STACK_LINE(54)
		Float tmp127 = (tmp125 + tmp126);		HX_STACK_VAR(tmp127,"tmp127");
		HX_STACK_LINE(54)
		Float tmp128 = tmp120->set((int)8,tmp127);		HX_STACK_VAR(tmp128,"tmp128");
		HX_STACK_LINE(54)
		tmp128;
		HX_STACK_LINE(55)
		::openfl::_Vector::FloatVector tmp129 = this->rawData;		HX_STACK_VAR(tmp129,"tmp129");
		HX_STACK_LINE(55)
		Float tmp130 = (m131 * m212);		HX_STACK_VAR(tmp130,"tmp130");
		HX_STACK_LINE(55)
		Float tmp131 = (m132 * m222);		HX_STACK_VAR(tmp131,"tmp131");
		HX_STACK_LINE(55)
		Float tmp132 = (tmp130 + tmp131);		HX_STACK_VAR(tmp132,"tmp132");
		HX_STACK_LINE(55)
		Float tmp133 = (m133 * m232);		HX_STACK_VAR(tmp133,"tmp133");
		HX_STACK_LINE(55)
		Float tmp134 = (tmp132 + tmp133);		HX_STACK_VAR(tmp134,"tmp134");
		HX_STACK_LINE(55)
		Float tmp135 = (m134 * m242);		HX_STACK_VAR(tmp135,"tmp135");
		HX_STACK_LINE(55)
		Float tmp136 = (tmp134 + tmp135);		HX_STACK_VAR(tmp136,"tmp136");
		HX_STACK_LINE(55)
		Float tmp137 = tmp129->set((int)9,tmp136);		HX_STACK_VAR(tmp137,"tmp137");
		HX_STACK_LINE(55)
		tmp137;
		HX_STACK_LINE(56)
		::openfl::_Vector::FloatVector tmp138 = this->rawData;		HX_STACK_VAR(tmp138,"tmp138");
		HX_STACK_LINE(56)
		Float tmp139 = (m131 * m213);		HX_STACK_VAR(tmp139,"tmp139");
		HX_STACK_LINE(56)
		Float tmp140 = (m132 * m223);		HX_STACK_VAR(tmp140,"tmp140");
		HX_STACK_LINE(56)
		Float tmp141 = (tmp139 + tmp140);		HX_STACK_VAR(tmp141,"tmp141");
		HX_STACK_LINE(56)
		Float tmp142 = (m133 * m233);		HX_STACK_VAR(tmp142,"tmp142");
		HX_STACK_LINE(56)
		Float tmp143 = (tmp141 + tmp142);		HX_STACK_VAR(tmp143,"tmp143");
		HX_STACK_LINE(56)
		Float tmp144 = (m134 * m243);		HX_STACK_VAR(tmp144,"tmp144");
		HX_STACK_LINE(56)
		Float tmp145 = (tmp143 + tmp144);		HX_STACK_VAR(tmp145,"tmp145");
		HX_STACK_LINE(56)
		Float tmp146 = tmp138->set((int)10,tmp145);		HX_STACK_VAR(tmp146,"tmp146");
		HX_STACK_LINE(56)
		tmp146;
		HX_STACK_LINE(57)
		::openfl::_Vector::FloatVector tmp147 = this->rawData;		HX_STACK_VAR(tmp147,"tmp147");
		HX_STACK_LINE(57)
		Float tmp148 = (m131 * m214);		HX_STACK_VAR(tmp148,"tmp148");
		HX_STACK_LINE(57)
		Float tmp149 = (m132 * m224);		HX_STACK_VAR(tmp149,"tmp149");
		HX_STACK_LINE(57)
		Float tmp150 = (tmp148 + tmp149);		HX_STACK_VAR(tmp150,"tmp150");
		HX_STACK_LINE(57)
		Float tmp151 = (m133 * m234);		HX_STACK_VAR(tmp151,"tmp151");
		HX_STACK_LINE(57)
		Float tmp152 = (tmp150 + tmp151);		HX_STACK_VAR(tmp152,"tmp152");
		HX_STACK_LINE(57)
		Float tmp153 = (m134 * m244);		HX_STACK_VAR(tmp153,"tmp153");
		HX_STACK_LINE(57)
		Float tmp154 = (tmp152 + tmp153);		HX_STACK_VAR(tmp154,"tmp154");
		HX_STACK_LINE(57)
		Float tmp155 = tmp147->set((int)11,tmp154);		HX_STACK_VAR(tmp155,"tmp155");
		HX_STACK_LINE(57)
		tmp155;
		HX_STACK_LINE(59)
		::openfl::_Vector::FloatVector tmp156 = this->rawData;		HX_STACK_VAR(tmp156,"tmp156");
		HX_STACK_LINE(59)
		Float tmp157 = (m141 * m211);		HX_STACK_VAR(tmp157,"tmp157");
		HX_STACK_LINE(59)
		Float tmp158 = (m142 * m221);		HX_STACK_VAR(tmp158,"tmp158");
		HX_STACK_LINE(59)
		Float tmp159 = (tmp157 + tmp158);		HX_STACK_VAR(tmp159,"tmp159");
		HX_STACK_LINE(59)
		Float tmp160 = (m143 * m231);		HX_STACK_VAR(tmp160,"tmp160");
		HX_STACK_LINE(59)
		Float tmp161 = (tmp159 + tmp160);		HX_STACK_VAR(tmp161,"tmp161");
		HX_STACK_LINE(59)
		Float tmp162 = (m144 * m241);		HX_STACK_VAR(tmp162,"tmp162");
		HX_STACK_LINE(59)
		Float tmp163 = (tmp161 + tmp162);		HX_STACK_VAR(tmp163,"tmp163");
		HX_STACK_LINE(59)
		Float tmp164 = tmp156->set((int)12,tmp163);		HX_STACK_VAR(tmp164,"tmp164");
		HX_STACK_LINE(59)
		tmp164;
		HX_STACK_LINE(60)
		::openfl::_Vector::FloatVector tmp165 = this->rawData;		HX_STACK_VAR(tmp165,"tmp165");
		HX_STACK_LINE(60)
		Float tmp166 = (m141 * m212);		HX_STACK_VAR(tmp166,"tmp166");
		HX_STACK_LINE(60)
		Float tmp167 = (m142 * m222);		HX_STACK_VAR(tmp167,"tmp167");
		HX_STACK_LINE(60)
		Float tmp168 = (tmp166 + tmp167);		HX_STACK_VAR(tmp168,"tmp168");
		HX_STACK_LINE(60)
		Float tmp169 = (m143 * m232);		HX_STACK_VAR(tmp169,"tmp169");
		HX_STACK_LINE(60)
		Float tmp170 = (tmp168 + tmp169);		HX_STACK_VAR(tmp170,"tmp170");
		HX_STACK_LINE(60)
		Float tmp171 = (m144 * m242);		HX_STACK_VAR(tmp171,"tmp171");
		HX_STACK_LINE(60)
		Float tmp172 = (tmp170 + tmp171);		HX_STACK_VAR(tmp172,"tmp172");
		HX_STACK_LINE(60)
		Float tmp173 = tmp165->set((int)13,tmp172);		HX_STACK_VAR(tmp173,"tmp173");
		HX_STACK_LINE(60)
		tmp173;
		HX_STACK_LINE(61)
		::openfl::_Vector::FloatVector tmp174 = this->rawData;		HX_STACK_VAR(tmp174,"tmp174");
		HX_STACK_LINE(61)
		Float tmp175 = (m141 * m213);		HX_STACK_VAR(tmp175,"tmp175");
		HX_STACK_LINE(61)
		Float tmp176 = (m142 * m223);		HX_STACK_VAR(tmp176,"tmp176");
		HX_STACK_LINE(61)
		Float tmp177 = (tmp175 + tmp176);		HX_STACK_VAR(tmp177,"tmp177");
		HX_STACK_LINE(61)
		Float tmp178 = (m143 * m233);		HX_STACK_VAR(tmp178,"tmp178");
		HX_STACK_LINE(61)
		Float tmp179 = (tmp177 + tmp178);		HX_STACK_VAR(tmp179,"tmp179");
		HX_STACK_LINE(61)
		Float tmp180 = (m144 * m243);		HX_STACK_VAR(tmp180,"tmp180");
		HX_STACK_LINE(61)
		Float tmp181 = (tmp179 + tmp180);		HX_STACK_VAR(tmp181,"tmp181");
		HX_STACK_LINE(61)
		Float tmp182 = tmp174->set((int)14,tmp181);		HX_STACK_VAR(tmp182,"tmp182");
		HX_STACK_LINE(61)
		tmp182;
		HX_STACK_LINE(62)
		::openfl::_Vector::FloatVector tmp183 = this->rawData;		HX_STACK_VAR(tmp183,"tmp183");
		HX_STACK_LINE(62)
		Float tmp184 = (m141 * m214);		HX_STACK_VAR(tmp184,"tmp184");
		HX_STACK_LINE(62)
		Float tmp185 = (m142 * m224);		HX_STACK_VAR(tmp185,"tmp185");
		HX_STACK_LINE(62)
		Float tmp186 = (tmp184 + tmp185);		HX_STACK_VAR(tmp186,"tmp186");
		HX_STACK_LINE(62)
		Float tmp187 = (m143 * m234);		HX_STACK_VAR(tmp187,"tmp187");
		HX_STACK_LINE(62)
		Float tmp188 = (tmp186 + tmp187);		HX_STACK_VAR(tmp188,"tmp188");
		HX_STACK_LINE(62)
		Float tmp189 = (m144 * m244);		HX_STACK_VAR(tmp189,"tmp189");
		HX_STACK_LINE(62)
		Float tmp190 = (tmp188 + tmp189);		HX_STACK_VAR(tmp190,"tmp190");
		HX_STACK_LINE(62)
		Float tmp191 = tmp183->set((int)15,tmp190);		HX_STACK_VAR(tmp191,"tmp191");
		HX_STACK_LINE(62)
		tmp191;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix3D_obj,append,(void))

Void Matrix3D_obj::appendRotation( Float degrees,::openfl::geom::Vector3D axis,::openfl::geom::Vector3D pivotPoint){
{
		HX_STACK_FRAME("openfl.geom.Matrix3D","appendRotation",0xf492b8c0,"openfl.geom.Matrix3D.appendRotation","openfl/geom/Matrix3D.hx",67,0x3acce238)
		HX_STACK_THIS(this)
		HX_STACK_ARG(degrees,"degrees")
		HX_STACK_ARG(axis,"axis")
		HX_STACK_ARG(pivotPoint,"pivotPoint")
		HX_STACK_LINE(69)
		Float tx;		HX_STACK_VAR(tx,"tx");
		HX_STACK_LINE(69)
		Float ty;		HX_STACK_VAR(ty,"ty");
		HX_STACK_LINE(69)
		Float tz;		HX_STACK_VAR(tz,"tz");
		HX_STACK_LINE(70)
		Float tmp = tz = (int)0;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(70)
		Float tmp1 = ty = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(70)
		tx = tmp1;
		HX_STACK_LINE(72)
		bool tmp2 = (pivotPoint != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(72)
		if ((tmp2)){
			HX_STACK_LINE(73)
			tx = pivotPoint->x;
			HX_STACK_LINE(74)
			ty = pivotPoint->y;
			HX_STACK_LINE(75)
			tz = pivotPoint->z;
		}
		HX_STACK_LINE(77)
		Float tmp3 = degrees;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(77)
		Float tmp4 = ::Math_obj::PI;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(77)
		Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(77)
		Float tmp6 = (Float(tmp5) / Float((int)180));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(77)
		Float radian = tmp6;		HX_STACK_VAR(radian,"radian");
		HX_STACK_LINE(78)
		Float tmp7 = radian;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(78)
		Float tmp8 = ::Math_obj::cos(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(78)
		Float cos = tmp8;		HX_STACK_VAR(cos,"cos");
		HX_STACK_LINE(79)
		Float tmp9 = radian;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(79)
		Float tmp10 = ::Math_obj::sin(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(79)
		Float sin = tmp10;		HX_STACK_VAR(sin,"sin");
		HX_STACK_LINE(80)
		Float x = axis->x;		HX_STACK_VAR(x,"x");
		HX_STACK_LINE(81)
		Float y = axis->y;		HX_STACK_VAR(y,"y");
		HX_STACK_LINE(82)
		Float z = axis->z;		HX_STACK_VAR(z,"z");
		HX_STACK_LINE(83)
		Float tmp11 = (x * x);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(83)
		Float x2 = tmp11;		HX_STACK_VAR(x2,"x2");
		HX_STACK_LINE(84)
		Float tmp12 = (y * y);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(84)
		Float y2 = tmp12;		HX_STACK_VAR(y2,"y2");
		HX_STACK_LINE(85)
		Float tmp13 = (z * z);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(85)
		Float z2 = tmp13;		HX_STACK_VAR(z2,"z2");
		HX_STACK_LINE(86)
		Float tmp14 = (x2 + y2);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(86)
		Float tmp15 = z2;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(86)
		Float tmp16 = (tmp14 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(86)
		Float ls = tmp16;		HX_STACK_VAR(ls,"ls");
		HX_STACK_LINE(87)
		bool tmp17 = (ls != (int)0);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(87)
		if ((tmp17)){
			HX_STACK_LINE(88)
			Float tmp18 = ls;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(88)
			Float tmp19 = ::Math_obj::sqrt(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(88)
			Float l = tmp19;		HX_STACK_VAR(l,"l");
			HX_STACK_LINE(89)
			hx::DivEq(x,l);
			HX_STACK_LINE(90)
			hx::DivEq(y,l);
			HX_STACK_LINE(91)
			hx::DivEq(z,l);
			HX_STACK_LINE(92)
			hx::DivEq(x2,ls);
			HX_STACK_LINE(93)
			hx::DivEq(y2,ls);
			HX_STACK_LINE(94)
			hx::DivEq(z2,ls);
		}
		HX_STACK_LINE(96)
		Float tmp18 = ((int)1 - cos);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(96)
		Float ccos = tmp18;		HX_STACK_VAR(ccos,"ccos");
		HX_STACK_LINE(97)
		::openfl::geom::Matrix3D tmp19 = ::openfl::geom::Matrix3D_obj::__new(null());		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(97)
		::openfl::geom::Matrix3D m = tmp19;		HX_STACK_VAR(m,"m");
		HX_STACK_LINE(98)
		::openfl::_Vector::FloatVector d = m->rawData;		HX_STACK_VAR(d,"d");
		HX_STACK_LINE(99)
		Float tmp20 = x2;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(99)
		Float tmp21 = (y2 + z2);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(99)
		Float tmp22 = cos;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(99)
		Float tmp23 = (tmp21 * tmp22);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(99)
		Float tmp24 = (tmp20 + tmp23);		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(99)
		Float tmp25 = d->set((int)0,tmp24);		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(99)
		tmp25;
		HX_STACK_LINE(100)
		Float tmp26 = (x * y);		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(100)
		Float tmp27 = ccos;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(100)
		Float tmp28 = (tmp26 * tmp27);		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(100)
		Float tmp29 = (z * sin);		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(100)
		Float tmp30 = (tmp28 + tmp29);		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(100)
		Float tmp31 = d->set((int)1,tmp30);		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(100)
		tmp31;
		HX_STACK_LINE(101)
		Float tmp32 = (x * z);		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(101)
		Float tmp33 = ccos;		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(101)
		Float tmp34 = (tmp32 * tmp33);		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(101)
		Float tmp35 = (y * sin);		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(101)
		Float tmp36 = (tmp34 - tmp35);		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(101)
		Float tmp37 = d->set((int)2,tmp36);		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(101)
		tmp37;
		HX_STACK_LINE(102)
		Float tmp38 = (x * y);		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(102)
		Float tmp39 = ccos;		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(102)
		Float tmp40 = (tmp38 * tmp39);		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(102)
		Float tmp41 = (z * sin);		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(102)
		Float tmp42 = (tmp40 - tmp41);		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(102)
		Float tmp43 = d->set((int)4,tmp42);		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(102)
		tmp43;
		HX_STACK_LINE(103)
		Float tmp44 = y2;		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(103)
		Float tmp45 = (x2 + z2);		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(103)
		Float tmp46 = cos;		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(103)
		Float tmp47 = (tmp45 * tmp46);		HX_STACK_VAR(tmp47,"tmp47");
		HX_STACK_LINE(103)
		Float tmp48 = (tmp44 + tmp47);		HX_STACK_VAR(tmp48,"tmp48");
		HX_STACK_LINE(103)
		Float tmp49 = d->set((int)5,tmp48);		HX_STACK_VAR(tmp49,"tmp49");
		HX_STACK_LINE(103)
		tmp49;
		HX_STACK_LINE(104)
		Float tmp50 = (y * z);		HX_STACK_VAR(tmp50,"tmp50");
		HX_STACK_LINE(104)
		Float tmp51 = ccos;		HX_STACK_VAR(tmp51,"tmp51");
		HX_STACK_LINE(104)
		Float tmp52 = (tmp50 * tmp51);		HX_STACK_VAR(tmp52,"tmp52");
		HX_STACK_LINE(104)
		Float tmp53 = (x * sin);		HX_STACK_VAR(tmp53,"tmp53");
		HX_STACK_LINE(104)
		Float tmp54 = (tmp52 + tmp53);		HX_STACK_VAR(tmp54,"tmp54");
		HX_STACK_LINE(104)
		Float tmp55 = d->set((int)6,tmp54);		HX_STACK_VAR(tmp55,"tmp55");
		HX_STACK_LINE(104)
		tmp55;
		HX_STACK_LINE(105)
		Float tmp56 = (x * z);		HX_STACK_VAR(tmp56,"tmp56");
		HX_STACK_LINE(105)
		Float tmp57 = ccos;		HX_STACK_VAR(tmp57,"tmp57");
		HX_STACK_LINE(105)
		Float tmp58 = (tmp56 * tmp57);		HX_STACK_VAR(tmp58,"tmp58");
		HX_STACK_LINE(105)
		Float tmp59 = (y * sin);		HX_STACK_VAR(tmp59,"tmp59");
		HX_STACK_LINE(105)
		Float tmp60 = (tmp58 + tmp59);		HX_STACK_VAR(tmp60,"tmp60");
		HX_STACK_LINE(105)
		Float tmp61 = d->set((int)8,tmp60);		HX_STACK_VAR(tmp61,"tmp61");
		HX_STACK_LINE(105)
		tmp61;
		HX_STACK_LINE(106)
		Float tmp62 = (y * z);		HX_STACK_VAR(tmp62,"tmp62");
		HX_STACK_LINE(106)
		Float tmp63 = ccos;		HX_STACK_VAR(tmp63,"tmp63");
		HX_STACK_LINE(106)
		Float tmp64 = (tmp62 * tmp63);		HX_STACK_VAR(tmp64,"tmp64");
		HX_STACK_LINE(106)
		Float tmp65 = (x * sin);		HX_STACK_VAR(tmp65,"tmp65");
		HX_STACK_LINE(106)
		Float tmp66 = (tmp64 - tmp65);		HX_STACK_VAR(tmp66,"tmp66");
		HX_STACK_LINE(106)
		Float tmp67 = d->set((int)9,tmp66);		HX_STACK_VAR(tmp67,"tmp67");
		HX_STACK_LINE(106)
		tmp67;
		HX_STACK_LINE(107)
		Float tmp68 = z2;		HX_STACK_VAR(tmp68,"tmp68");
		HX_STACK_LINE(107)
		Float tmp69 = (x2 + y2);		HX_STACK_VAR(tmp69,"tmp69");
		HX_STACK_LINE(107)
		Float tmp70 = cos;		HX_STACK_VAR(tmp70,"tmp70");
		HX_STACK_LINE(107)
		Float tmp71 = (tmp69 * tmp70);		HX_STACK_VAR(tmp71,"tmp71");
		HX_STACK_LINE(107)
		Float tmp72 = (tmp68 + tmp71);		HX_STACK_VAR(tmp72,"tmp72");
		HX_STACK_LINE(107)
		Float tmp73 = d->set((int)10,tmp72);		HX_STACK_VAR(tmp73,"tmp73");
		HX_STACK_LINE(107)
		tmp73;
		HX_STACK_LINE(108)
		Float tmp74 = tx;		HX_STACK_VAR(tmp74,"tmp74");
		HX_STACK_LINE(108)
		Float tmp75 = (y2 + z2);		HX_STACK_VAR(tmp75,"tmp75");
		HX_STACK_LINE(108)
		Float tmp76 = (tmp74 * tmp75);		HX_STACK_VAR(tmp76,"tmp76");
		HX_STACK_LINE(108)
		Float tmp77 = x;		HX_STACK_VAR(tmp77,"tmp77");
		HX_STACK_LINE(108)
		Float tmp78 = (ty * y);		HX_STACK_VAR(tmp78,"tmp78");
		HX_STACK_LINE(108)
		Float tmp79 = (tz * z);		HX_STACK_VAR(tmp79,"tmp79");
		HX_STACK_LINE(108)
		Float tmp80 = (tmp78 + tmp79);		HX_STACK_VAR(tmp80,"tmp80");
		HX_STACK_LINE(108)
		Float tmp81 = (tmp77 * tmp80);		HX_STACK_VAR(tmp81,"tmp81");
		HX_STACK_LINE(108)
		Float tmp82 = (tmp76 - tmp81);		HX_STACK_VAR(tmp82,"tmp82");
		HX_STACK_LINE(108)
		Float tmp83 = ccos;		HX_STACK_VAR(tmp83,"tmp83");
		HX_STACK_LINE(108)
		Float tmp84 = (tmp82 * tmp83);		HX_STACK_VAR(tmp84,"tmp84");
		HX_STACK_LINE(108)
		Float tmp85 = (ty * z);		HX_STACK_VAR(tmp85,"tmp85");
		HX_STACK_LINE(108)
		Float tmp86 = (tz * y);		HX_STACK_VAR(tmp86,"tmp86");
		HX_STACK_LINE(108)
		Float tmp87 = (tmp85 - tmp86);		HX_STACK_VAR(tmp87,"tmp87");
		HX_STACK_LINE(108)
		Float tmp88 = sin;		HX_STACK_VAR(tmp88,"tmp88");
		HX_STACK_LINE(108)
		Float tmp89 = (tmp87 * tmp88);		HX_STACK_VAR(tmp89,"tmp89");
		HX_STACK_LINE(108)
		Float tmp90 = (tmp84 + tmp89);		HX_STACK_VAR(tmp90,"tmp90");
		HX_STACK_LINE(108)
		Float tmp91 = d->set((int)12,tmp90);		HX_STACK_VAR(tmp91,"tmp91");
		HX_STACK_LINE(108)
		tmp91;
		HX_STACK_LINE(109)
		Float tmp92 = ty;		HX_STACK_VAR(tmp92,"tmp92");
		HX_STACK_LINE(109)
		Float tmp93 = (x2 + z2);		HX_STACK_VAR(tmp93,"tmp93");
		HX_STACK_LINE(109)
		Float tmp94 = (tmp92 * tmp93);		HX_STACK_VAR(tmp94,"tmp94");
		HX_STACK_LINE(109)
		Float tmp95 = y;		HX_STACK_VAR(tmp95,"tmp95");
		HX_STACK_LINE(109)
		Float tmp96 = (tx * x);		HX_STACK_VAR(tmp96,"tmp96");
		HX_STACK_LINE(109)
		Float tmp97 = (tz * z);		HX_STACK_VAR(tmp97,"tmp97");
		HX_STACK_LINE(109)
		Float tmp98 = (tmp96 + tmp97);		HX_STACK_VAR(tmp98,"tmp98");
		HX_STACK_LINE(109)
		Float tmp99 = (tmp95 * tmp98);		HX_STACK_VAR(tmp99,"tmp99");
		HX_STACK_LINE(109)
		Float tmp100 = (tmp94 - tmp99);		HX_STACK_VAR(tmp100,"tmp100");
		HX_STACK_LINE(109)
		Float tmp101 = ccos;		HX_STACK_VAR(tmp101,"tmp101");
		HX_STACK_LINE(109)
		Float tmp102 = (tmp100 * tmp101);		HX_STACK_VAR(tmp102,"tmp102");
		HX_STACK_LINE(109)
		Float tmp103 = (tz * x);		HX_STACK_VAR(tmp103,"tmp103");
		HX_STACK_LINE(109)
		Float tmp104 = (tx * z);		HX_STACK_VAR(tmp104,"tmp104");
		HX_STACK_LINE(109)
		Float tmp105 = (tmp103 - tmp104);		HX_STACK_VAR(tmp105,"tmp105");
		HX_STACK_LINE(109)
		Float tmp106 = sin;		HX_STACK_VAR(tmp106,"tmp106");
		HX_STACK_LINE(109)
		Float tmp107 = (tmp105 * tmp106);		HX_STACK_VAR(tmp107,"tmp107");
		HX_STACK_LINE(109)
		Float tmp108 = (tmp102 + tmp107);		HX_STACK_VAR(tmp108,"tmp108");
		HX_STACK_LINE(109)
		Float tmp109 = d->set((int)13,tmp108);		HX_STACK_VAR(tmp109,"tmp109");
		HX_STACK_LINE(109)
		tmp109;
		HX_STACK_LINE(110)
		Float tmp110 = tz;		HX_STACK_VAR(tmp110,"tmp110");
		HX_STACK_LINE(110)
		Float tmp111 = (x2 + y2);		HX_STACK_VAR(tmp111,"tmp111");
		HX_STACK_LINE(110)
		Float tmp112 = (tmp110 * tmp111);		HX_STACK_VAR(tmp112,"tmp112");
		HX_STACK_LINE(110)
		Float tmp113 = z;		HX_STACK_VAR(tmp113,"tmp113");
		HX_STACK_LINE(110)
		Float tmp114 = (tx * x);		HX_STACK_VAR(tmp114,"tmp114");
		HX_STACK_LINE(110)
		Float tmp115 = (ty * y);		HX_STACK_VAR(tmp115,"tmp115");
		HX_STACK_LINE(110)
		Float tmp116 = (tmp114 + tmp115);		HX_STACK_VAR(tmp116,"tmp116");
		HX_STACK_LINE(110)
		Float tmp117 = (tmp113 * tmp116);		HX_STACK_VAR(tmp117,"tmp117");
		HX_STACK_LINE(110)
		Float tmp118 = (tmp112 - tmp117);		HX_STACK_VAR(tmp118,"tmp118");
		HX_STACK_LINE(110)
		Float tmp119 = ccos;		HX_STACK_VAR(tmp119,"tmp119");
		HX_STACK_LINE(110)
		Float tmp120 = (tmp118 * tmp119);		HX_STACK_VAR(tmp120,"tmp120");
		HX_STACK_LINE(110)
		Float tmp121 = (tx * y);		HX_STACK_VAR(tmp121,"tmp121");
		HX_STACK_LINE(110)
		Float tmp122 = (ty * x);		HX_STACK_VAR(tmp122,"tmp122");
		HX_STACK_LINE(110)
		Float tmp123 = (tmp121 - tmp122);		HX_STACK_VAR(tmp123,"tmp123");
		HX_STACK_LINE(110)
		Float tmp124 = sin;		HX_STACK_VAR(tmp124,"tmp124");
		HX_STACK_LINE(110)
		Float tmp125 = (tmp123 * tmp124);		HX_STACK_VAR(tmp125,"tmp125");
		HX_STACK_LINE(110)
		Float tmp126 = (tmp120 + tmp125);		HX_STACK_VAR(tmp126,"tmp126");
		HX_STACK_LINE(110)
		Float tmp127 = d->set((int)14,tmp126);		HX_STACK_VAR(tmp127,"tmp127");
		HX_STACK_LINE(110)
		tmp127;
		HX_STACK_LINE(111)
		::openfl::geom::Matrix3D tmp128 = m;		HX_STACK_VAR(tmp128,"tmp128");
		HX_STACK_LINE(111)
		this->append(tmp128);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Matrix3D_obj,appendRotation,(void))

Void Matrix3D_obj::appendScale( Float xScale,Float yScale,Float zScale){
{
		HX_STACK_FRAME("openfl.geom.Matrix3D","appendScale",0x02daedc8,"openfl.geom.Matrix3D.appendScale","openfl/geom/Matrix3D.hx",116,0x3acce238)
		HX_STACK_THIS(this)
		HX_STACK_ARG(xScale,"xScale")
		HX_STACK_ARG(yScale,"yScale")
		HX_STACK_ARG(zScale,"zScale")
		HX_STACK_LINE(118)
		::openfl::_Vector::FloatVector tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(118)
		{
			HX_STACK_LINE(118)
			cpp::ArrayBase a = cpp::ArrayBase_obj::__new().Add(xScale).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(yScale).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(zScale).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)1.0));		HX_STACK_VAR(a,"a");
			HX_STACK_LINE(118)
			::openfl::_Vector::FloatVector tmp1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(118)
			{
				HX_STACK_LINE(118)
				int length = null();		HX_STACK_VAR(length,"length");
				HX_STACK_LINE(118)
				bool fixed = null();		HX_STACK_VAR(fixed,"fixed");
				HX_STACK_LINE(118)
				::openfl::_Vector::FloatVector tmp2 = ::openfl::_Vector::FloatVector_obj::__new(length,fixed,null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(118)
				::openfl::_Vector::FloatVector tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(118)
				tmp1 = tmp3;
			}
			HX_STACK_LINE(118)
			::openfl::_Vector::FloatVector vector = tmp1;		HX_STACK_VAR(vector,"vector");
			HX_STACK_LINE(118)
			{
				HX_STACK_LINE(118)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(118)
				int _g = a->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(118)
				while((true)){
					HX_STACK_LINE(118)
					bool tmp2 = (_g1 < _g);		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(118)
					bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(118)
					if ((tmp3)){
						HX_STACK_LINE(118)
						break;
					}
					HX_STACK_LINE(118)
					int tmp4 = (_g1)++;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(118)
					int i = tmp4;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(118)
					int tmp5 = i;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(118)
					Dynamic tmp6 = a->__GetItem(i);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(118)
					Float tmp7 = ((Float)(tmp6));		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(118)
					Float tmp8 = vector->set(tmp5,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(118)
					tmp8;
				}
			}
			HX_STACK_LINE(118)
			tmp = vector;
		}
		HX_STACK_LINE(118)
		::openfl::geom::Matrix3D tmp1 = ::openfl::geom::Matrix3D_obj::__new(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(118)
		this->append(tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Matrix3D_obj,appendScale,(void))

Void Matrix3D_obj::appendTranslation( Float x,Float y,Float z){
{
		HX_STACK_FRAME("openfl.geom.Matrix3D","appendTranslation",0x514252af,"openfl.geom.Matrix3D.appendTranslation","openfl/geom/Matrix3D.hx",123,0x3acce238)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(z,"z")
		HX_STACK_LINE(125)
		{
			HX_STACK_LINE(125)
			::openfl::_Vector::FloatVector tmp = this->rawData;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(125)
			Float tmp1 = tmp->get((int)12);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(125)
			Float tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(125)
			Float tmp3 = x;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(125)
			Float tmp4 = (tmp2 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(125)
			Float value = tmp4;		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(125)
			::openfl::_Vector::FloatVector tmp5 = this->rawData;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(125)
			Float tmp6 = value;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(125)
			tmp5->set((int)12,tmp6);
		}
		HX_STACK_LINE(126)
		{
			HX_STACK_LINE(126)
			::openfl::_Vector::FloatVector tmp = this->rawData;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(126)
			Float tmp1 = tmp->get((int)13);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(126)
			Float tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(126)
			Float tmp3 = y;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(126)
			Float tmp4 = (tmp2 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(126)
			Float value = tmp4;		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(126)
			::openfl::_Vector::FloatVector tmp5 = this->rawData;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(126)
			Float tmp6 = value;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(126)
			tmp5->set((int)13,tmp6);
		}
		HX_STACK_LINE(127)
		{
			HX_STACK_LINE(127)
			::openfl::_Vector::FloatVector tmp = this->rawData;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(127)
			Float tmp1 = tmp->get((int)14);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(127)
			Float tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(127)
			Float tmp3 = z;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(127)
			Float tmp4 = (tmp2 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(127)
			Float value = tmp4;		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(127)
			::openfl::_Vector::FloatVector tmp5 = this->rawData;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(127)
			Float tmp6 = value;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(127)
			tmp5->set((int)14,tmp6);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Matrix3D_obj,appendTranslation,(void))

::openfl::geom::Matrix3D Matrix3D_obj::clone( ){
	HX_STACK_FRAME("openfl.geom.Matrix3D","clone",0x2ff530d5,"openfl.geom.Matrix3D.clone","openfl/geom/Matrix3D.hx",132,0x3acce238)
	HX_STACK_THIS(this)
	HX_STACK_LINE(134)
	::openfl::_Vector::FloatVector tmp = this->rawData;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(134)
	::openfl::_Vector::IVector tmp1 = tmp->copy();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(134)
	::openfl::_Vector::FloatVector tmp2 = ((::openfl::_Vector::FloatVector)(tmp1));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(134)
	::openfl::geom::Matrix3D tmp3 = ::openfl::geom::Matrix3D_obj::__new(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(134)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(Matrix3D_obj,clone,return )

Void Matrix3D_obj::copyColumnFrom( int column,::openfl::geom::Vector3D vector3D){
{
		HX_STACK_FRAME("openfl.geom.Matrix3D","copyColumnFrom",0x63600afd,"openfl.geom.Matrix3D.copyColumnFrom","openfl/geom/Matrix3D.hx",139,0x3acce238)
		HX_STACK_THIS(this)
		HX_STACK_ARG(column,"column")
		HX_STACK_ARG(vector3D,"vector3D")
		HX_STACK_LINE(141)
		int tmp = column;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(141)
		switch( (int)(tmp)){
			case (int)0: {
				HX_STACK_LINE(145)
				::openfl::_Vector::FloatVector tmp1 = this->rawData;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(145)
				Float tmp2 = vector3D->x;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(145)
				Float tmp3 = tmp1->set((int)0,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(145)
				tmp3;
				HX_STACK_LINE(146)
				::openfl::_Vector::FloatVector tmp4 = this->rawData;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(146)
				Float tmp5 = vector3D->y;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(146)
				Float tmp6 = tmp4->set((int)1,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(146)
				tmp6;
				HX_STACK_LINE(147)
				::openfl::_Vector::FloatVector tmp7 = this->rawData;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(147)
				Float tmp8 = vector3D->z;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(147)
				Float tmp9 = tmp7->set((int)2,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(147)
				tmp9;
				HX_STACK_LINE(148)
				::openfl::_Vector::FloatVector tmp10 = this->rawData;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(148)
				Float tmp11 = vector3D->w;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(148)
				Float tmp12 = tmp10->set((int)3,tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(148)
				tmp12;
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(152)
				::openfl::_Vector::FloatVector tmp1 = this->rawData;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(152)
				Float tmp2 = vector3D->x;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(152)
				Float tmp3 = tmp1->set((int)4,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(152)
				tmp3;
				HX_STACK_LINE(153)
				::openfl::_Vector::FloatVector tmp4 = this->rawData;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(153)
				Float tmp5 = vector3D->y;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(153)
				Float tmp6 = tmp4->set((int)5,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(153)
				tmp6;
				HX_STACK_LINE(154)
				::openfl::_Vector::FloatVector tmp7 = this->rawData;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(154)
				Float tmp8 = vector3D->z;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(154)
				Float tmp9 = tmp7->set((int)6,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(154)
				tmp9;
				HX_STACK_LINE(155)
				::openfl::_Vector::FloatVector tmp10 = this->rawData;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(155)
				Float tmp11 = vector3D->w;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(155)
				Float tmp12 = tmp10->set((int)7,tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(155)
				tmp12;
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(159)
				::openfl::_Vector::FloatVector tmp1 = this->rawData;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(159)
				Float tmp2 = vector3D->x;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(159)
				Float tmp3 = tmp1->set((int)8,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(159)
				tmp3;
				HX_STACK_LINE(160)
				::openfl::_Vector::FloatVector tmp4 = this->rawData;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(160)
				Float tmp5 = vector3D->y;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(160)
				Float tmp6 = tmp4->set((int)9,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(160)
				tmp6;
				HX_STACK_LINE(161)
				::openfl::_Vector::FloatVector tmp7 = this->rawData;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(161)
				Float tmp8 = vector3D->z;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(161)
				Float tmp9 = tmp7->set((int)10,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(161)
				tmp9;
				HX_STACK_LINE(162)
				::openfl::_Vector::FloatVector tmp10 = this->rawData;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(162)
				Float tmp11 = vector3D->w;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(162)
				Float tmp12 = tmp10->set((int)11,tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(162)
				tmp12;
			}
			;break;
			case (int)3: {
				HX_STACK_LINE(166)
				::openfl::_Vector::FloatVector tmp1 = this->rawData;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(166)
				Float tmp2 = vector3D->x;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(166)
				Float tmp3 = tmp1->set((int)12,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(166)
				tmp3;
				HX_STACK_LINE(167)
				::openfl::_Vector::FloatVector tmp4 = this->rawData;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(167)
				Float tmp5 = vector3D->y;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(167)
				Float tmp6 = tmp4->set((int)13,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(167)
				tmp6;
				HX_STACK_LINE(168)
				::openfl::_Vector::FloatVector tmp7 = this->rawData;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(168)
				Float tmp8 = vector3D->z;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(168)
				Float tmp9 = tmp7->set((int)14,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(168)
				tmp9;
				HX_STACK_LINE(169)
				::openfl::_Vector::FloatVector tmp10 = this->rawData;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(169)
				Float tmp11 = vector3D->w;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(169)
				Float tmp12 = tmp10->set((int)15,tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(169)
				tmp12;
			}
			;break;
			default: {
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Matrix3D_obj,copyColumnFrom,(void))

Void Matrix3D_obj::copyColumnTo( int column,::openfl::geom::Vector3D vector3D){
{
		HX_STACK_FRAME("openfl.geom.Matrix3D","copyColumnTo",0x8c37304e,"openfl.geom.Matrix3D.copyColumnTo","openfl/geom/Matrix3D.hx",178,0x3acce238)
		HX_STACK_THIS(this)
		HX_STACK_ARG(column,"column")
		HX_STACK_ARG(vector3D,"vector3D")
		HX_STACK_LINE(180)
		int tmp = column;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(180)
		switch( (int)(tmp)){
			case (int)0: {
				HX_STACK_LINE(184)
				::openfl::_Vector::FloatVector tmp1 = this->rawData;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(184)
				Float tmp2 = tmp1->get((int)0);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(184)
				vector3D->x = tmp2;
				HX_STACK_LINE(185)
				::openfl::_Vector::FloatVector tmp3 = this->rawData;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(185)
				Float tmp4 = tmp3->get((int)1);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(185)
				vector3D->y = tmp4;
				HX_STACK_LINE(186)
				::openfl::_Vector::FloatVector tmp5 = this->rawData;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(186)
				Float tmp6 = tmp5->get((int)2);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(186)
				vector3D->z = tmp6;
				HX_STACK_LINE(187)
				::openfl::_Vector::FloatVector tmp7 = this->rawData;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(187)
				Float tmp8 = tmp7->get((int)3);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(187)
				vector3D->w = tmp8;
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(191)
				::openfl::_Vector::FloatVector tmp1 = this->rawData;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(191)
				Float tmp2 = tmp1->get((int)4);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(191)
				vector3D->x = tmp2;
				HX_STACK_LINE(192)
				::openfl::_Vector::FloatVector tmp3 = this->rawData;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(192)
				Float tmp4 = tmp3->get((int)5);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(192)
				vector3D->y = tmp4;
				HX_STACK_LINE(193)
				::openfl::_Vector::FloatVector tmp5 = this->rawData;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(193)
				Float tmp6 = tmp5->get((int)6);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(193)
				vector3D->z = tmp6;
				HX_STACK_LINE(194)
				::openfl::_Vector::FloatVector tmp7 = this->rawData;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(194)
				Float tmp8 = tmp7->get((int)7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(194)
				vector3D->w = tmp8;
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(198)
				::openfl::_Vector::FloatVector tmp1 = this->rawData;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(198)
				Float tmp2 = tmp1->get((int)8);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(198)
				vector3D->x = tmp2;
				HX_STACK_LINE(199)
				::openfl::_Vector::FloatVector tmp3 = this->rawData;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(199)
				Float tmp4 = tmp3->get((int)9);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(199)
				vector3D->y = tmp4;
				HX_STACK_LINE(200)
				::openfl::_Vector::FloatVector tmp5 = this->rawData;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(200)
				Float tmp6 = tmp5->get((int)10);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(200)
				vector3D->z = tmp6;
				HX_STACK_LINE(201)
				::openfl::_Vector::FloatVector tmp7 = this->rawData;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(201)
				Float tmp8 = tmp7->get((int)11);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(201)
				vector3D->w = tmp8;
			}
			;break;
			case (int)3: {
				HX_STACK_LINE(205)
				::openfl::_Vector::FloatVector tmp1 = this->rawData;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(205)
				Float tmp2 = tmp1->get((int)12);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(205)
				vector3D->x = tmp2;
				HX_STACK_LINE(206)
				::openfl::_Vector::FloatVector tmp3 = this->rawData;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(206)
				Float tmp4 = tmp3->get((int)13);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(206)
				vector3D->y = tmp4;
				HX_STACK_LINE(207)
				::openfl::_Vector::FloatVector tmp5 = this->rawData;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(207)
				Float tmp6 = tmp5->get((int)14);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(207)
				vector3D->z = tmp6;
				HX_STACK_LINE(208)
				::openfl::_Vector::FloatVector tmp7 = this->rawData;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(208)
				Float tmp8 = tmp7->get((int)15);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(208)
				vector3D->w = tmp8;
			}
			;break;
			default: {
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Matrix3D_obj,copyColumnTo,(void))

Void Matrix3D_obj::copyFrom( ::openfl::geom::Matrix3D other){
{
		HX_STACK_FRAME("openfl.geom.Matrix3D","copyFrom",0xe290a947,"openfl.geom.Matrix3D.copyFrom","openfl/geom/Matrix3D.hx",217,0x3acce238)
		HX_STACK_THIS(this)
		HX_STACK_ARG(other,"other")
		HX_STACK_LINE(219)
		::openfl::_Vector::IVector tmp = other->rawData->copy();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(219)
		this->rawData = ((::openfl::_Vector::FloatVector)(tmp));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix3D_obj,copyFrom,(void))

Void Matrix3D_obj::copyRawDataFrom( ::openfl::_Vector::FloatVector vector,hx::Null< int >  __o_index,hx::Null< bool >  __o_transpose){
int index = __o_index.Default(0);
bool transpose = __o_transpose.Default(false);
	HX_STACK_FRAME("openfl.geom.Matrix3D","copyRawDataFrom",0x9938207f,"openfl.geom.Matrix3D.copyRawDataFrom","openfl/geom/Matrix3D.hx",224,0x3acce238)
	HX_STACK_THIS(this)
	HX_STACK_ARG(vector,"vector")
	HX_STACK_ARG(index,"index")
	HX_STACK_ARG(transpose,"transpose")
{
		HX_STACK_LINE(226)
		bool tmp = transpose;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(226)
		if ((tmp)){
			HX_STACK_LINE(228)
			this->transpose();
		}
		HX_STACK_LINE(232)
		int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(232)
		{
			HX_STACK_LINE(232)
			int tmp2 = vector->get_length();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(232)
			int a = tmp2;		HX_STACK_VAR(a,"a");
			HX_STACK_LINE(232)
			tmp1 = (a - index);
		}
		HX_STACK_LINE(232)
		int length = tmp1;		HX_STACK_VAR(length,"length");
		HX_STACK_LINE(234)
		{
			HX_STACK_LINE(234)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(234)
			while((true)){
				HX_STACK_LINE(234)
				bool tmp2 = (_g < length);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(234)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(234)
				if ((tmp3)){
					HX_STACK_LINE(234)
					break;
				}
				HX_STACK_LINE(234)
				int tmp4 = (_g)++;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(234)
				int i = tmp4;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(236)
				{
					HX_STACK_LINE(236)
					int tmp5 = (i + index);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(236)
					int tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(236)
					Float tmp7 = vector->get(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(236)
					Float value = tmp7;		HX_STACK_VAR(value,"value");
					HX_STACK_LINE(236)
					::openfl::_Vector::FloatVector tmp8 = this->rawData;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(236)
					int tmp9 = i;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(236)
					Float tmp10 = value;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(236)
					tmp8->set(tmp9,tmp10);
				}
			}
		}
		HX_STACK_LINE(240)
		bool tmp2 = transpose;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(240)
		if ((tmp2)){
			HX_STACK_LINE(242)
			this->transpose();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Matrix3D_obj,copyRawDataFrom,(void))

Void Matrix3D_obj::copyRawDataTo( ::openfl::_Vector::FloatVector vector,hx::Null< int >  __o_index,hx::Null< bool >  __o_transpose){
int index = __o_index.Default(0);
bool transpose = __o_transpose.Default(false);
	HX_STACK_FRAME("openfl.geom.Matrix3D","copyRawDataTo",0xac978150,"openfl.geom.Matrix3D.copyRawDataTo","openfl/geom/Matrix3D.hx",249,0x3acce238)
	HX_STACK_THIS(this)
	HX_STACK_ARG(vector,"vector")
	HX_STACK_ARG(index,"index")
	HX_STACK_ARG(transpose,"transpose")
{
		HX_STACK_LINE(251)
		bool tmp = transpose;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(251)
		if ((tmp)){
			HX_STACK_LINE(253)
			this->transpose();
		}
		HX_STACK_LINE(257)
		{
			HX_STACK_LINE(257)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(257)
			::openfl::_Vector::FloatVector tmp1 = this->rawData;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(257)
			int tmp2 = tmp1->get_length();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(257)
			int _g = tmp2;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(257)
			while((true)){
				HX_STACK_LINE(257)
				bool tmp3 = (_g1 < _g);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(257)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(257)
				if ((tmp4)){
					HX_STACK_LINE(257)
					break;
				}
				HX_STACK_LINE(257)
				int tmp5 = (_g1)++;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(257)
				int i = tmp5;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(259)
				{
					HX_STACK_LINE(259)
					::openfl::_Vector::FloatVector tmp6 = this->rawData;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(259)
					int tmp7 = i;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(259)
					Float tmp8 = tmp6->get(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(259)
					Float value = tmp8;		HX_STACK_VAR(value,"value");
					HX_STACK_LINE(259)
					int tmp9 = (i + index);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(259)
					int tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(259)
					Float tmp11 = value;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(259)
					vector->set(tmp10,tmp11);
				}
			}
		}
		HX_STACK_LINE(263)
		bool tmp1 = transpose;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(263)
		if ((tmp1)){
			HX_STACK_LINE(265)
			this->transpose();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Matrix3D_obj,copyRawDataTo,(void))

Void Matrix3D_obj::copyRowFrom( int row,::openfl::geom::Vector3D vector3D){
{
		HX_STACK_FRAME("openfl.geom.Matrix3D","copyRowFrom",0x3d20cce7,"openfl.geom.Matrix3D.copyRowFrom","openfl/geom/Matrix3D.hx",272,0x3acce238)
		HX_STACK_THIS(this)
		HX_STACK_ARG(row,"row")
		HX_STACK_ARG(vector3D,"vector3D")
		HX_STACK_LINE(274)
		int tmp = row;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(274)
		switch( (int)(tmp)){
			case (int)0: {
				HX_STACK_LINE(278)
				::openfl::_Vector::FloatVector tmp1 = this->rawData;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(278)
				Float tmp2 = vector3D->x;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(278)
				Float tmp3 = tmp1->set((int)0,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(278)
				tmp3;
				HX_STACK_LINE(279)
				::openfl::_Vector::FloatVector tmp4 = this->rawData;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(279)
				Float tmp5 = vector3D->y;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(279)
				Float tmp6 = tmp4->set((int)4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(279)
				tmp6;
				HX_STACK_LINE(280)
				::openfl::_Vector::FloatVector tmp7 = this->rawData;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(280)
				Float tmp8 = vector3D->z;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(280)
				Float tmp9 = tmp7->set((int)8,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(280)
				tmp9;
				HX_STACK_LINE(281)
				::openfl::_Vector::FloatVector tmp10 = this->rawData;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(281)
				Float tmp11 = vector3D->w;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(281)
				Float tmp12 = tmp10->set((int)12,tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(281)
				tmp12;
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(285)
				::openfl::_Vector::FloatVector tmp1 = this->rawData;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(285)
				Float tmp2 = vector3D->x;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(285)
				Float tmp3 = tmp1->set((int)1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(285)
				tmp3;
				HX_STACK_LINE(286)
				::openfl::_Vector::FloatVector tmp4 = this->rawData;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(286)
				Float tmp5 = vector3D->y;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(286)
				Float tmp6 = tmp4->set((int)5,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(286)
				tmp6;
				HX_STACK_LINE(287)
				::openfl::_Vector::FloatVector tmp7 = this->rawData;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(287)
				Float tmp8 = vector3D->z;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(287)
				Float tmp9 = tmp7->set((int)9,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(287)
				tmp9;
				HX_STACK_LINE(288)
				::openfl::_Vector::FloatVector tmp10 = this->rawData;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(288)
				Float tmp11 = vector3D->w;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(288)
				Float tmp12 = tmp10->set((int)13,tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(288)
				tmp12;
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(292)
				::openfl::_Vector::FloatVector tmp1 = this->rawData;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(292)
				Float tmp2 = vector3D->x;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(292)
				Float tmp3 = tmp1->set((int)2,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(292)
				tmp3;
				HX_STACK_LINE(293)
				::openfl::_Vector::FloatVector tmp4 = this->rawData;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(293)
				Float tmp5 = vector3D->y;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(293)
				Float tmp6 = tmp4->set((int)6,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(293)
				tmp6;
				HX_STACK_LINE(294)
				::openfl::_Vector::FloatVector tmp7 = this->rawData;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(294)
				Float tmp8 = vector3D->z;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(294)
				Float tmp9 = tmp7->set((int)10,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(294)
				tmp9;
				HX_STACK_LINE(295)
				::openfl::_Vector::FloatVector tmp10 = this->rawData;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(295)
				Float tmp11 = vector3D->w;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(295)
				Float tmp12 = tmp10->set((int)14,tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(295)
				tmp12;
			}
			;break;
			case (int)3: {
				HX_STACK_LINE(299)
				::openfl::_Vector::FloatVector tmp1 = this->rawData;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(299)
				Float tmp2 = vector3D->x;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(299)
				Float tmp3 = tmp1->set((int)3,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(299)
				tmp3;
				HX_STACK_LINE(300)
				::openfl::_Vector::FloatVector tmp4 = this->rawData;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(300)
				Float tmp5 = vector3D->y;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(300)
				Float tmp6 = tmp4->set((int)7,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(300)
				tmp6;
				HX_STACK_LINE(301)
				::openfl::_Vector::FloatVector tmp7 = this->rawData;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(301)
				Float tmp8 = vector3D->z;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(301)
				Float tmp9 = tmp7->set((int)11,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(301)
				tmp9;
				HX_STACK_LINE(302)
				::openfl::_Vector::FloatVector tmp10 = this->rawData;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(302)
				Float tmp11 = vector3D->w;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(302)
				Float tmp12 = tmp10->set((int)15,tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(302)
				tmp12;
			}
			;break;
			default: {
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Matrix3D_obj,copyRowFrom,(void))

Void Matrix3D_obj::copyRowTo( int row,::openfl::geom::Vector3D vector3D){
{
		HX_STACK_FRAME("openfl.geom.Matrix3D","copyRowTo",0x42dcc3b8,"openfl.geom.Matrix3D.copyRowTo","openfl/geom/Matrix3D.hx",311,0x3acce238)
		HX_STACK_THIS(this)
		HX_STACK_ARG(row,"row")
		HX_STACK_ARG(vector3D,"vector3D")
		HX_STACK_LINE(313)
		int tmp = row;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(313)
		switch( (int)(tmp)){
			case (int)0: {
				HX_STACK_LINE(317)
				::openfl::_Vector::FloatVector tmp1 = this->rawData;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(317)
				Float tmp2 = tmp1->get((int)0);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(317)
				vector3D->x = tmp2;
				HX_STACK_LINE(318)
				::openfl::_Vector::FloatVector tmp3 = this->rawData;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(318)
				Float tmp4 = tmp3->get((int)4);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(318)
				vector3D->y = tmp4;
				HX_STACK_LINE(319)
				::openfl::_Vector::FloatVector tmp5 = this->rawData;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(319)
				Float tmp6 = tmp5->get((int)8);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(319)
				vector3D->z = tmp6;
				HX_STACK_LINE(320)
				::openfl::_Vector::FloatVector tmp7 = this->rawData;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(320)
				Float tmp8 = tmp7->get((int)12);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(320)
				vector3D->w = tmp8;
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(324)
				::openfl::_Vector::FloatVector tmp1 = this->rawData;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(324)
				Float tmp2 = tmp1->get((int)1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(324)
				vector3D->x = tmp2;
				HX_STACK_LINE(325)
				::openfl::_Vector::FloatVector tmp3 = this->rawData;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(325)
				Float tmp4 = tmp3->get((int)5);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(325)
				vector3D->y = tmp4;
				HX_STACK_LINE(326)
				::openfl::_Vector::FloatVector tmp5 = this->rawData;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(326)
				Float tmp6 = tmp5->get((int)9);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(326)
				vector3D->z = tmp6;
				HX_STACK_LINE(327)
				::openfl::_Vector::FloatVector tmp7 = this->rawData;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(327)
				Float tmp8 = tmp7->get((int)13);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(327)
				vector3D->w = tmp8;
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(331)
				::openfl::_Vector::FloatVector tmp1 = this->rawData;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(331)
				Float tmp2 = tmp1->get((int)2);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(331)
				vector3D->x = tmp2;
				HX_STACK_LINE(332)
				::openfl::_Vector::FloatVector tmp3 = this->rawData;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(332)
				Float tmp4 = tmp3->get((int)6);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(332)
				vector3D->y = tmp4;
				HX_STACK_LINE(333)
				::openfl::_Vector::FloatVector tmp5 = this->rawData;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(333)
				Float tmp6 = tmp5->get((int)10);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(333)
				vector3D->z = tmp6;
				HX_STACK_LINE(334)
				::openfl::_Vector::FloatVector tmp7 = this->rawData;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(334)
				Float tmp8 = tmp7->get((int)14);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(334)
				vector3D->w = tmp8;
			}
			;break;
			case (int)3: {
				HX_STACK_LINE(338)
				::openfl::_Vector::FloatVector tmp1 = this->rawData;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(338)
				Float tmp2 = tmp1->get((int)3);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(338)
				vector3D->x = tmp2;
				HX_STACK_LINE(339)
				::openfl::_Vector::FloatVector tmp3 = this->rawData;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(339)
				Float tmp4 = tmp3->get((int)7);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(339)
				vector3D->y = tmp4;
				HX_STACK_LINE(340)
				::openfl::_Vector::FloatVector tmp5 = this->rawData;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(340)
				Float tmp6 = tmp5->get((int)11);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(340)
				vector3D->z = tmp6;
				HX_STACK_LINE(341)
				::openfl::_Vector::FloatVector tmp7 = this->rawData;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(341)
				Float tmp8 = tmp7->get((int)15);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(341)
				vector3D->w = tmp8;
			}
			;break;
			default: {
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Matrix3D_obj,copyRowTo,(void))

Void Matrix3D_obj::copyToMatrix3D( ::openfl::geom::Matrix3D other){
{
		HX_STACK_FRAME("openfl.geom.Matrix3D","copyToMatrix3D",0x2cc9916a,"openfl.geom.Matrix3D.copyToMatrix3D","openfl/geom/Matrix3D.hx",350,0x3acce238)
		HX_STACK_THIS(this)
		HX_STACK_ARG(other,"other")
		HX_STACK_LINE(352)
		::openfl::_Vector::FloatVector tmp = this->rawData;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(352)
		::openfl::_Vector::IVector tmp1 = tmp->copy();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(352)
		other->rawData = ((::openfl::_Vector::FloatVector)(tmp1));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix3D_obj,copyToMatrix3D,(void))

::openfl::_Vector::ObjectVector Matrix3D_obj::decompose( Dynamic orientationStyle){
	HX_STACK_FRAME("openfl.geom.Matrix3D","decompose",0x4a21fd29,"openfl.geom.Matrix3D.decompose","openfl/geom/Matrix3D.hx",386,0x3acce238)
	HX_STACK_THIS(this)
	HX_STACK_ARG(orientationStyle,"orientationStyle")
	HX_STACK_LINE(388)
	bool tmp = (orientationStyle == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(388)
	if ((tmp)){
		HX_STACK_LINE(390)
		orientationStyle = ((Dynamic)((int)1));
	}
	HX_STACK_LINE(394)
	::openfl::_Vector::ObjectVector tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(394)
	{
		HX_STACK_LINE(394)
		int length = null();		HX_STACK_VAR(length,"length");
		HX_STACK_LINE(394)
		bool fixed = null();		HX_STACK_VAR(fixed,"fixed");
		HX_STACK_LINE(394)
		::openfl::_Vector::ObjectVector tmp2 = ::openfl::_Vector::ObjectVector_obj::__new(length,fixed,null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(394)
		::openfl::_Vector::ObjectVector tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(394)
		tmp1 = tmp3;
	}
	HX_STACK_LINE(394)
	::openfl::_Vector::ObjectVector vec = tmp1;		HX_STACK_VAR(vec,"vec");
	HX_STACK_LINE(395)
	::openfl::geom::Matrix3D tmp2 = this->clone();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(395)
	::openfl::geom::Matrix3D m = tmp2;		HX_STACK_VAR(m,"m");
	HX_STACK_LINE(396)
	::openfl::_Vector::IVector tmp3 = m->rawData->copy();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(396)
	::openfl::_Vector::FloatVector mr = ((::openfl::_Vector::FloatVector)(tmp3));		HX_STACK_VAR(mr,"mr");
	HX_STACK_LINE(398)
	Float tmp4 = mr->get((int)12);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(398)
	Float tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(398)
	Float tmp6 = mr->get((int)13);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(398)
	Float tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(398)
	Float tmp8 = mr->get((int)14);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(398)
	Float tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(398)
	::openfl::geom::Vector3D tmp10 = ::openfl::geom::Vector3D_obj::__new(tmp5,tmp7,tmp9,null());		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(398)
	::openfl::geom::Vector3D pos = tmp10;		HX_STACK_VAR(pos,"pos");
	HX_STACK_LINE(399)
	Float tmp11 = mr->set((int)12,(int)0);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(399)
	tmp11;
	HX_STACK_LINE(400)
	Float tmp12 = mr->set((int)13,(int)0);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(400)
	tmp12;
	HX_STACK_LINE(401)
	Float tmp13 = mr->set((int)14,(int)0);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(401)
	tmp13;
	HX_STACK_LINE(403)
	::openfl::geom::Vector3D tmp14 = ::openfl::geom::Vector3D_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(403)
	::openfl::geom::Vector3D scale = tmp14;		HX_STACK_VAR(scale,"scale");
	HX_STACK_LINE(405)
	Float tmp15 = mr->get((int)0);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(405)
	Float tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(405)
	Float tmp17 = mr->get((int)0);		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(405)
	Float tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(405)
	Float tmp19 = (tmp16 * tmp18);		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(405)
	Float tmp20 = mr->get((int)1);		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(405)
	Float tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(405)
	Float tmp22 = mr->get((int)1);		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(405)
	Float tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(405)
	Float tmp24 = (tmp21 * tmp23);		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(405)
	Float tmp25 = (tmp19 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(405)
	Float tmp26 = mr->get((int)2);		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(405)
	Float tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(405)
	Float tmp28 = mr->get((int)2);		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(405)
	Float tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
	HX_STACK_LINE(405)
	Float tmp30 = (tmp27 * tmp29);		HX_STACK_VAR(tmp30,"tmp30");
	HX_STACK_LINE(405)
	Float tmp31 = (tmp25 + tmp30);		HX_STACK_VAR(tmp31,"tmp31");
	HX_STACK_LINE(405)
	Float tmp32 = ::Math_obj::sqrt(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
	HX_STACK_LINE(405)
	scale->x = tmp32;
	HX_STACK_LINE(406)
	Float tmp33 = mr->get((int)4);		HX_STACK_VAR(tmp33,"tmp33");
	HX_STACK_LINE(406)
	Float tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
	HX_STACK_LINE(406)
	Float tmp35 = mr->get((int)4);		HX_STACK_VAR(tmp35,"tmp35");
	HX_STACK_LINE(406)
	Float tmp36 = tmp35;		HX_STACK_VAR(tmp36,"tmp36");
	HX_STACK_LINE(406)
	Float tmp37 = (tmp34 * tmp36);		HX_STACK_VAR(tmp37,"tmp37");
	HX_STACK_LINE(406)
	Float tmp38 = mr->get((int)5);		HX_STACK_VAR(tmp38,"tmp38");
	HX_STACK_LINE(406)
	Float tmp39 = tmp38;		HX_STACK_VAR(tmp39,"tmp39");
	HX_STACK_LINE(406)
	Float tmp40 = mr->get((int)5);		HX_STACK_VAR(tmp40,"tmp40");
	HX_STACK_LINE(406)
	Float tmp41 = tmp40;		HX_STACK_VAR(tmp41,"tmp41");
	HX_STACK_LINE(406)
	Float tmp42 = (tmp39 * tmp41);		HX_STACK_VAR(tmp42,"tmp42");
	HX_STACK_LINE(406)
	Float tmp43 = (tmp37 + tmp42);		HX_STACK_VAR(tmp43,"tmp43");
	HX_STACK_LINE(406)
	Float tmp44 = mr->get((int)6);		HX_STACK_VAR(tmp44,"tmp44");
	HX_STACK_LINE(406)
	Float tmp45 = tmp44;		HX_STACK_VAR(tmp45,"tmp45");
	HX_STACK_LINE(406)
	Float tmp46 = mr->get((int)6);		HX_STACK_VAR(tmp46,"tmp46");
	HX_STACK_LINE(406)
	Float tmp47 = tmp46;		HX_STACK_VAR(tmp47,"tmp47");
	HX_STACK_LINE(406)
	Float tmp48 = (tmp45 * tmp47);		HX_STACK_VAR(tmp48,"tmp48");
	HX_STACK_LINE(406)
	Float tmp49 = (tmp43 + tmp48);		HX_STACK_VAR(tmp49,"tmp49");
	HX_STACK_LINE(406)
	Float tmp50 = ::Math_obj::sqrt(tmp49);		HX_STACK_VAR(tmp50,"tmp50");
	HX_STACK_LINE(406)
	scale->y = tmp50;
	HX_STACK_LINE(407)
	Float tmp51 = mr->get((int)8);		HX_STACK_VAR(tmp51,"tmp51");
	HX_STACK_LINE(407)
	Float tmp52 = tmp51;		HX_STACK_VAR(tmp52,"tmp52");
	HX_STACK_LINE(407)
	Float tmp53 = mr->get((int)8);		HX_STACK_VAR(tmp53,"tmp53");
	HX_STACK_LINE(407)
	Float tmp54 = tmp53;		HX_STACK_VAR(tmp54,"tmp54");
	HX_STACK_LINE(407)
	Float tmp55 = (tmp52 * tmp54);		HX_STACK_VAR(tmp55,"tmp55");
	HX_STACK_LINE(407)
	Float tmp56 = mr->get((int)9);		HX_STACK_VAR(tmp56,"tmp56");
	HX_STACK_LINE(407)
	Float tmp57 = tmp56;		HX_STACK_VAR(tmp57,"tmp57");
	HX_STACK_LINE(407)
	Float tmp58 = mr->get((int)9);		HX_STACK_VAR(tmp58,"tmp58");
	HX_STACK_LINE(407)
	Float tmp59 = tmp58;		HX_STACK_VAR(tmp59,"tmp59");
	HX_STACK_LINE(407)
	Float tmp60 = (tmp57 * tmp59);		HX_STACK_VAR(tmp60,"tmp60");
	HX_STACK_LINE(407)
	Float tmp61 = (tmp55 + tmp60);		HX_STACK_VAR(tmp61,"tmp61");
	HX_STACK_LINE(407)
	Float tmp62 = mr->get((int)10);		HX_STACK_VAR(tmp62,"tmp62");
	HX_STACK_LINE(407)
	Float tmp63 = tmp62;		HX_STACK_VAR(tmp63,"tmp63");
	HX_STACK_LINE(407)
	Float tmp64 = mr->get((int)10);		HX_STACK_VAR(tmp64,"tmp64");
	HX_STACK_LINE(407)
	Float tmp65 = tmp64;		HX_STACK_VAR(tmp65,"tmp65");
	HX_STACK_LINE(407)
	Float tmp66 = (tmp63 * tmp65);		HX_STACK_VAR(tmp66,"tmp66");
	HX_STACK_LINE(407)
	Float tmp67 = (tmp61 + tmp66);		HX_STACK_VAR(tmp67,"tmp67");
	HX_STACK_LINE(407)
	Float tmp68 = ::Math_obj::sqrt(tmp67);		HX_STACK_VAR(tmp68,"tmp68");
	HX_STACK_LINE(407)
	scale->z = tmp68;
	HX_STACK_LINE(409)
	Float tmp69 = mr->get((int)0);		HX_STACK_VAR(tmp69,"tmp69");
	HX_STACK_LINE(409)
	Float tmp70 = tmp69;		HX_STACK_VAR(tmp70,"tmp70");
	HX_STACK_LINE(409)
	Float tmp71 = mr->get((int)5);		HX_STACK_VAR(tmp71,"tmp71");
	HX_STACK_LINE(409)
	Float tmp72 = tmp71;		HX_STACK_VAR(tmp72,"tmp72");
	HX_STACK_LINE(409)
	Float tmp73 = mr->get((int)10);		HX_STACK_VAR(tmp73,"tmp73");
	HX_STACK_LINE(409)
	Float tmp74 = tmp73;		HX_STACK_VAR(tmp74,"tmp74");
	HX_STACK_LINE(409)
	Float tmp75 = (tmp72 * tmp74);		HX_STACK_VAR(tmp75,"tmp75");
	HX_STACK_LINE(409)
	Float tmp76 = mr->get((int)6);		HX_STACK_VAR(tmp76,"tmp76");
	HX_STACK_LINE(409)
	Float tmp77 = tmp76;		HX_STACK_VAR(tmp77,"tmp77");
	HX_STACK_LINE(409)
	Float tmp78 = mr->get((int)9);		HX_STACK_VAR(tmp78,"tmp78");
	HX_STACK_LINE(409)
	Float tmp79 = tmp78;		HX_STACK_VAR(tmp79,"tmp79");
	HX_STACK_LINE(409)
	Float tmp80 = (tmp77 * tmp79);		HX_STACK_VAR(tmp80,"tmp80");
	HX_STACK_LINE(409)
	Float tmp81 = (tmp75 - tmp80);		HX_STACK_VAR(tmp81,"tmp81");
	HX_STACK_LINE(409)
	Float tmp82 = (tmp70 * tmp81);		HX_STACK_VAR(tmp82,"tmp82");
	HX_STACK_LINE(409)
	Float tmp83 = mr->get((int)1);		HX_STACK_VAR(tmp83,"tmp83");
	HX_STACK_LINE(409)
	Float tmp84 = tmp83;		HX_STACK_VAR(tmp84,"tmp84");
	HX_STACK_LINE(409)
	Float tmp85 = mr->get((int)4);		HX_STACK_VAR(tmp85,"tmp85");
	HX_STACK_LINE(409)
	Float tmp86 = tmp85;		HX_STACK_VAR(tmp86,"tmp86");
	HX_STACK_LINE(409)
	Float tmp87 = mr->get((int)10);		HX_STACK_VAR(tmp87,"tmp87");
	HX_STACK_LINE(409)
	Float tmp88 = tmp87;		HX_STACK_VAR(tmp88,"tmp88");
	HX_STACK_LINE(409)
	Float tmp89 = (tmp86 * tmp88);		HX_STACK_VAR(tmp89,"tmp89");
	HX_STACK_LINE(409)
	Float tmp90 = mr->get((int)6);		HX_STACK_VAR(tmp90,"tmp90");
	HX_STACK_LINE(409)
	Float tmp91 = tmp90;		HX_STACK_VAR(tmp91,"tmp91");
	HX_STACK_LINE(409)
	Float tmp92 = mr->get((int)8);		HX_STACK_VAR(tmp92,"tmp92");
	HX_STACK_LINE(409)
	Float tmp93 = tmp92;		HX_STACK_VAR(tmp93,"tmp93");
	HX_STACK_LINE(409)
	Float tmp94 = (tmp91 * tmp93);		HX_STACK_VAR(tmp94,"tmp94");
	HX_STACK_LINE(409)
	Float tmp95 = (tmp89 - tmp94);		HX_STACK_VAR(tmp95,"tmp95");
	HX_STACK_LINE(409)
	Float tmp96 = (tmp84 * tmp95);		HX_STACK_VAR(tmp96,"tmp96");
	HX_STACK_LINE(409)
	Float tmp97 = (tmp82 - tmp96);		HX_STACK_VAR(tmp97,"tmp97");
	HX_STACK_LINE(409)
	Float tmp98 = mr->get((int)2);		HX_STACK_VAR(tmp98,"tmp98");
	HX_STACK_LINE(409)
	Float tmp99 = tmp98;		HX_STACK_VAR(tmp99,"tmp99");
	HX_STACK_LINE(409)
	Float tmp100 = mr->get((int)4);		HX_STACK_VAR(tmp100,"tmp100");
	HX_STACK_LINE(409)
	Float tmp101 = tmp100;		HX_STACK_VAR(tmp101,"tmp101");
	HX_STACK_LINE(409)
	Float tmp102 = mr->get((int)9);		HX_STACK_VAR(tmp102,"tmp102");
	HX_STACK_LINE(409)
	Float tmp103 = tmp102;		HX_STACK_VAR(tmp103,"tmp103");
	HX_STACK_LINE(409)
	Float tmp104 = (tmp101 * tmp103);		HX_STACK_VAR(tmp104,"tmp104");
	HX_STACK_LINE(409)
	Float tmp105 = mr->get((int)5);		HX_STACK_VAR(tmp105,"tmp105");
	HX_STACK_LINE(409)
	Float tmp106 = tmp105;		HX_STACK_VAR(tmp106,"tmp106");
	HX_STACK_LINE(409)
	Float tmp107 = mr->get((int)8);		HX_STACK_VAR(tmp107,"tmp107");
	HX_STACK_LINE(409)
	Float tmp108 = tmp107;		HX_STACK_VAR(tmp108,"tmp108");
	HX_STACK_LINE(409)
	Float tmp109 = (tmp106 * tmp108);		HX_STACK_VAR(tmp109,"tmp109");
	HX_STACK_LINE(409)
	Float tmp110 = (tmp104 - tmp109);		HX_STACK_VAR(tmp110,"tmp110");
	HX_STACK_LINE(409)
	Float tmp111 = (tmp99 * tmp110);		HX_STACK_VAR(tmp111,"tmp111");
	HX_STACK_LINE(409)
	Float tmp112 = (tmp97 + tmp111);		HX_STACK_VAR(tmp112,"tmp112");
	HX_STACK_LINE(409)
	bool tmp113 = (tmp112 < (int)0);		HX_STACK_VAR(tmp113,"tmp113");
	HX_STACK_LINE(409)
	if ((tmp113)){
		HX_STACK_LINE(411)
		Float tmp114 = scale->z;		HX_STACK_VAR(tmp114,"tmp114");
		HX_STACK_LINE(411)
		Float tmp115 = -(tmp114);		HX_STACK_VAR(tmp115,"tmp115");
		HX_STACK_LINE(411)
		scale->z = tmp115;
	}
	HX_STACK_LINE(415)
	{
		HX_STACK_LINE(415)
		Float tmp114 = mr->get((int)0);		HX_STACK_VAR(tmp114,"tmp114");
		HX_STACK_LINE(415)
		Float tmp115 = tmp114;		HX_STACK_VAR(tmp115,"tmp115");
		HX_STACK_LINE(415)
		Float tmp116 = scale->x;		HX_STACK_VAR(tmp116,"tmp116");
		HX_STACK_LINE(415)
		Float tmp117 = (Float(tmp115) / Float(tmp116));		HX_STACK_VAR(tmp117,"tmp117");
		HX_STACK_LINE(415)
		Float value = tmp117;		HX_STACK_VAR(value,"value");
		HX_STACK_LINE(415)
		Float tmp118 = value;		HX_STACK_VAR(tmp118,"tmp118");
		HX_STACK_LINE(415)
		mr->set((int)0,tmp118);
	}
	HX_STACK_LINE(416)
	{
		HX_STACK_LINE(416)
		Float tmp114 = mr->get((int)1);		HX_STACK_VAR(tmp114,"tmp114");
		HX_STACK_LINE(416)
		Float tmp115 = tmp114;		HX_STACK_VAR(tmp115,"tmp115");
		HX_STACK_LINE(416)
		Float tmp116 = scale->x;		HX_STACK_VAR(tmp116,"tmp116");
		HX_STACK_LINE(416)
		Float tmp117 = (Float(tmp115) / Float(tmp116));		HX_STACK_VAR(tmp117,"tmp117");
		HX_STACK_LINE(416)
		Float value = tmp117;		HX_STACK_VAR(value,"value");
		HX_STACK_LINE(416)
		Float tmp118 = value;		HX_STACK_VAR(tmp118,"tmp118");
		HX_STACK_LINE(416)
		mr->set((int)1,tmp118);
	}
	HX_STACK_LINE(417)
	{
		HX_STACK_LINE(417)
		Float tmp114 = mr->get((int)2);		HX_STACK_VAR(tmp114,"tmp114");
		HX_STACK_LINE(417)
		Float tmp115 = tmp114;		HX_STACK_VAR(tmp115,"tmp115");
		HX_STACK_LINE(417)
		Float tmp116 = scale->x;		HX_STACK_VAR(tmp116,"tmp116");
		HX_STACK_LINE(417)
		Float tmp117 = (Float(tmp115) / Float(tmp116));		HX_STACK_VAR(tmp117,"tmp117");
		HX_STACK_LINE(417)
		Float value = tmp117;		HX_STACK_VAR(value,"value");
		HX_STACK_LINE(417)
		Float tmp118 = value;		HX_STACK_VAR(tmp118,"tmp118");
		HX_STACK_LINE(417)
		mr->set((int)2,tmp118);
	}
	HX_STACK_LINE(418)
	{
		HX_STACK_LINE(418)
		Float tmp114 = mr->get((int)4);		HX_STACK_VAR(tmp114,"tmp114");
		HX_STACK_LINE(418)
		Float tmp115 = tmp114;		HX_STACK_VAR(tmp115,"tmp115");
		HX_STACK_LINE(418)
		Float tmp116 = scale->y;		HX_STACK_VAR(tmp116,"tmp116");
		HX_STACK_LINE(418)
		Float tmp117 = (Float(tmp115) / Float(tmp116));		HX_STACK_VAR(tmp117,"tmp117");
		HX_STACK_LINE(418)
		Float value = tmp117;		HX_STACK_VAR(value,"value");
		HX_STACK_LINE(418)
		Float tmp118 = value;		HX_STACK_VAR(tmp118,"tmp118");
		HX_STACK_LINE(418)
		mr->set((int)4,tmp118);
	}
	HX_STACK_LINE(419)
	{
		HX_STACK_LINE(419)
		Float tmp114 = mr->get((int)5);		HX_STACK_VAR(tmp114,"tmp114");
		HX_STACK_LINE(419)
		Float tmp115 = tmp114;		HX_STACK_VAR(tmp115,"tmp115");
		HX_STACK_LINE(419)
		Float tmp116 = scale->y;		HX_STACK_VAR(tmp116,"tmp116");
		HX_STACK_LINE(419)
		Float tmp117 = (Float(tmp115) / Float(tmp116));		HX_STACK_VAR(tmp117,"tmp117");
		HX_STACK_LINE(419)
		Float value = tmp117;		HX_STACK_VAR(value,"value");
		HX_STACK_LINE(419)
		Float tmp118 = value;		HX_STACK_VAR(tmp118,"tmp118");
		HX_STACK_LINE(419)
		mr->set((int)5,tmp118);
	}
	HX_STACK_LINE(420)
	{
		HX_STACK_LINE(420)
		Float tmp114 = mr->get((int)6);		HX_STACK_VAR(tmp114,"tmp114");
		HX_STACK_LINE(420)
		Float tmp115 = tmp114;		HX_STACK_VAR(tmp115,"tmp115");
		HX_STACK_LINE(420)
		Float tmp116 = scale->y;		HX_STACK_VAR(tmp116,"tmp116");
		HX_STACK_LINE(420)
		Float tmp117 = (Float(tmp115) / Float(tmp116));		HX_STACK_VAR(tmp117,"tmp117");
		HX_STACK_LINE(420)
		Float value = tmp117;		HX_STACK_VAR(value,"value");
		HX_STACK_LINE(420)
		Float tmp118 = value;		HX_STACK_VAR(tmp118,"tmp118");
		HX_STACK_LINE(420)
		mr->set((int)6,tmp118);
	}
	HX_STACK_LINE(421)
	{
		HX_STACK_LINE(421)
		Float tmp114 = mr->get((int)8);		HX_STACK_VAR(tmp114,"tmp114");
		HX_STACK_LINE(421)
		Float tmp115 = tmp114;		HX_STACK_VAR(tmp115,"tmp115");
		HX_STACK_LINE(421)
		Float tmp116 = scale->z;		HX_STACK_VAR(tmp116,"tmp116");
		HX_STACK_LINE(421)
		Float tmp117 = (Float(tmp115) / Float(tmp116));		HX_STACK_VAR(tmp117,"tmp117");
		HX_STACK_LINE(421)
		Float value = tmp117;		HX_STACK_VAR(value,"value");
		HX_STACK_LINE(421)
		Float tmp118 = value;		HX_STACK_VAR(tmp118,"tmp118");
		HX_STACK_LINE(421)
		mr->set((int)8,tmp118);
	}
	HX_STACK_LINE(422)
	{
		HX_STACK_LINE(422)
		Float tmp114 = mr->get((int)9);		HX_STACK_VAR(tmp114,"tmp114");
		HX_STACK_LINE(422)
		Float tmp115 = tmp114;		HX_STACK_VAR(tmp115,"tmp115");
		HX_STACK_LINE(422)
		Float tmp116 = scale->z;		HX_STACK_VAR(tmp116,"tmp116");
		HX_STACK_LINE(422)
		Float tmp117 = (Float(tmp115) / Float(tmp116));		HX_STACK_VAR(tmp117,"tmp117");
		HX_STACK_LINE(422)
		Float value = tmp117;		HX_STACK_VAR(value,"value");
		HX_STACK_LINE(422)
		Float tmp118 = value;		HX_STACK_VAR(tmp118,"tmp118");
		HX_STACK_LINE(422)
		mr->set((int)9,tmp118);
	}
	HX_STACK_LINE(423)
	{
		HX_STACK_LINE(423)
		Float tmp114 = mr->get((int)10);		HX_STACK_VAR(tmp114,"tmp114");
		HX_STACK_LINE(423)
		Float tmp115 = tmp114;		HX_STACK_VAR(tmp115,"tmp115");
		HX_STACK_LINE(423)
		Float tmp116 = scale->z;		HX_STACK_VAR(tmp116,"tmp116");
		HX_STACK_LINE(423)
		Float tmp117 = (Float(tmp115) / Float(tmp116));		HX_STACK_VAR(tmp117,"tmp117");
		HX_STACK_LINE(423)
		Float value = tmp117;		HX_STACK_VAR(value,"value");
		HX_STACK_LINE(423)
		Float tmp118 = value;		HX_STACK_VAR(tmp118,"tmp118");
		HX_STACK_LINE(423)
		mr->set((int)10,tmp118);
	}
	HX_STACK_LINE(425)
	::openfl::geom::Vector3D tmp114 = ::openfl::geom::Vector3D_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp114,"tmp114");
	HX_STACK_LINE(425)
	::openfl::geom::Vector3D rot = tmp114;		HX_STACK_VAR(rot,"rot");
	HX_STACK_LINE(427)
	bool tmp115 = (orientationStyle != null());		HX_STACK_VAR(tmp115,"tmp115");
	HX_STACK_LINE(427)
	if ((tmp115)){
		HX_STACK_LINE(427)
		Dynamic tmp116 = orientationStyle;		HX_STACK_VAR(tmp116,"tmp116");
		HX_STACK_LINE(427)
		switch( (int)(tmp116)){
			case (int)0: {
				HX_STACK_LINE(431)
				Float tmp117 = mr->get((int)0);		HX_STACK_VAR(tmp117,"tmp117");
				HX_STACK_LINE(431)
				Float tmp118 = tmp117;		HX_STACK_VAR(tmp118,"tmp118");
				HX_STACK_LINE(431)
				Float tmp119 = mr->get((int)5);		HX_STACK_VAR(tmp119,"tmp119");
				HX_STACK_LINE(431)
				Float tmp120 = tmp119;		HX_STACK_VAR(tmp120,"tmp120");
				HX_STACK_LINE(431)
				Float tmp121 = (tmp118 + tmp120);		HX_STACK_VAR(tmp121,"tmp121");
				HX_STACK_LINE(431)
				Float tmp122 = mr->get((int)10);		HX_STACK_VAR(tmp122,"tmp122");
				HX_STACK_LINE(431)
				Float tmp123 = tmp122;		HX_STACK_VAR(tmp123,"tmp123");
				HX_STACK_LINE(431)
				Float tmp124 = (tmp121 + tmp123);		HX_STACK_VAR(tmp124,"tmp124");
				HX_STACK_LINE(431)
				Float tmp125 = (tmp124 - (int)1);		HX_STACK_VAR(tmp125,"tmp125");
				HX_STACK_LINE(431)
				Float tmp126 = (Float(tmp125) / Float((int)2));		HX_STACK_VAR(tmp126,"tmp126");
				HX_STACK_LINE(431)
				Float tmp127 = ::Math_obj::acos(tmp126);		HX_STACK_VAR(tmp127,"tmp127");
				HX_STACK_LINE(431)
				rot->w = tmp127;
				HX_STACK_LINE(433)
				Float tmp128 = mr->get((int)6);		HX_STACK_VAR(tmp128,"tmp128");
				HX_STACK_LINE(433)
				Float tmp129 = tmp128;		HX_STACK_VAR(tmp129,"tmp129");
				HX_STACK_LINE(433)
				Float tmp130 = mr->get((int)9);		HX_STACK_VAR(tmp130,"tmp130");
				HX_STACK_LINE(433)
				Float tmp131 = tmp130;		HX_STACK_VAR(tmp131,"tmp131");
				HX_STACK_LINE(433)
				Float tmp132 = (tmp129 - tmp131);		HX_STACK_VAR(tmp132,"tmp132");
				HX_STACK_LINE(433)
				Float tmp133 = mr->get((int)6);		HX_STACK_VAR(tmp133,"tmp133");
				HX_STACK_LINE(433)
				Float tmp134 = tmp133;		HX_STACK_VAR(tmp134,"tmp134");
				HX_STACK_LINE(433)
				Float tmp135 = mr->get((int)9);		HX_STACK_VAR(tmp135,"tmp135");
				HX_STACK_LINE(433)
				Float tmp136 = tmp135;		HX_STACK_VAR(tmp136,"tmp136");
				HX_STACK_LINE(433)
				Float tmp137 = (tmp134 - tmp136);		HX_STACK_VAR(tmp137,"tmp137");
				HX_STACK_LINE(433)
				Float tmp138 = (tmp132 * tmp137);		HX_STACK_VAR(tmp138,"tmp138");
				HX_STACK_LINE(433)
				Float tmp139 = mr->get((int)8);		HX_STACK_VAR(tmp139,"tmp139");
				HX_STACK_LINE(433)
				Float tmp140 = tmp139;		HX_STACK_VAR(tmp140,"tmp140");
				HX_STACK_LINE(433)
				Float tmp141 = mr->get((int)2);		HX_STACK_VAR(tmp141,"tmp141");
				HX_STACK_LINE(433)
				Float tmp142 = tmp141;		HX_STACK_VAR(tmp142,"tmp142");
				HX_STACK_LINE(433)
				Float tmp143 = (tmp140 - tmp142);		HX_STACK_VAR(tmp143,"tmp143");
				HX_STACK_LINE(433)
				Float tmp144 = mr->get((int)8);		HX_STACK_VAR(tmp144,"tmp144");
				HX_STACK_LINE(433)
				Float tmp145 = tmp144;		HX_STACK_VAR(tmp145,"tmp145");
				HX_STACK_LINE(433)
				Float tmp146 = mr->get((int)2);		HX_STACK_VAR(tmp146,"tmp146");
				HX_STACK_LINE(433)
				Float tmp147 = tmp146;		HX_STACK_VAR(tmp147,"tmp147");
				HX_STACK_LINE(433)
				Float tmp148 = (tmp145 - tmp147);		HX_STACK_VAR(tmp148,"tmp148");
				HX_STACK_LINE(433)
				Float tmp149 = (tmp143 * tmp148);		HX_STACK_VAR(tmp149,"tmp149");
				HX_STACK_LINE(433)
				Float tmp150 = (tmp138 + tmp149);		HX_STACK_VAR(tmp150,"tmp150");
				HX_STACK_LINE(433)
				Float tmp151 = mr->get((int)1);		HX_STACK_VAR(tmp151,"tmp151");
				HX_STACK_LINE(433)
				Float tmp152 = tmp151;		HX_STACK_VAR(tmp152,"tmp152");
				HX_STACK_LINE(433)
				Float tmp153 = mr->get((int)4);		HX_STACK_VAR(tmp153,"tmp153");
				HX_STACK_LINE(433)
				Float tmp154 = tmp153;		HX_STACK_VAR(tmp154,"tmp154");
				HX_STACK_LINE(433)
				Float tmp155 = (tmp152 - tmp154);		HX_STACK_VAR(tmp155,"tmp155");
				HX_STACK_LINE(433)
				Float tmp156 = mr->get((int)1);		HX_STACK_VAR(tmp156,"tmp156");
				HX_STACK_LINE(433)
				Float tmp157 = tmp156;		HX_STACK_VAR(tmp157,"tmp157");
				HX_STACK_LINE(433)
				Float tmp158 = mr->get((int)4);		HX_STACK_VAR(tmp158,"tmp158");
				HX_STACK_LINE(433)
				Float tmp159 = tmp158;		HX_STACK_VAR(tmp159,"tmp159");
				HX_STACK_LINE(433)
				Float tmp160 = (tmp157 - tmp159);		HX_STACK_VAR(tmp160,"tmp160");
				HX_STACK_LINE(433)
				Float tmp161 = (tmp155 * tmp160);		HX_STACK_VAR(tmp161,"tmp161");
				HX_STACK_LINE(433)
				Float tmp162 = (tmp150 + tmp161);		HX_STACK_VAR(tmp162,"tmp162");
				HX_STACK_LINE(433)
				Float tmp163 = ::Math_obj::sqrt(tmp162);		HX_STACK_VAR(tmp163,"tmp163");
				HX_STACK_LINE(433)
				Float len = tmp163;		HX_STACK_VAR(len,"len");
				HX_STACK_LINE(435)
				bool tmp164 = (len != (int)0);		HX_STACK_VAR(tmp164,"tmp164");
				HX_STACK_LINE(435)
				if ((tmp164)){
					HX_STACK_LINE(437)
					Float tmp165 = mr->get((int)6);		HX_STACK_VAR(tmp165,"tmp165");
					HX_STACK_LINE(437)
					Float tmp166 = tmp165;		HX_STACK_VAR(tmp166,"tmp166");
					HX_STACK_LINE(437)
					Float tmp167 = mr->get((int)9);		HX_STACK_VAR(tmp167,"tmp167");
					HX_STACK_LINE(437)
					Float tmp168 = tmp167;		HX_STACK_VAR(tmp168,"tmp168");
					HX_STACK_LINE(437)
					Float tmp169 = (tmp166 - tmp168);		HX_STACK_VAR(tmp169,"tmp169");
					HX_STACK_LINE(437)
					Float tmp170 = len;		HX_STACK_VAR(tmp170,"tmp170");
					HX_STACK_LINE(437)
					Float tmp171 = (Float(tmp169) / Float(tmp170));		HX_STACK_VAR(tmp171,"tmp171");
					HX_STACK_LINE(437)
					rot->x = tmp171;
					HX_STACK_LINE(438)
					Float tmp172 = mr->get((int)8);		HX_STACK_VAR(tmp172,"tmp172");
					HX_STACK_LINE(438)
					Float tmp173 = tmp172;		HX_STACK_VAR(tmp173,"tmp173");
					HX_STACK_LINE(438)
					Float tmp174 = mr->get((int)2);		HX_STACK_VAR(tmp174,"tmp174");
					HX_STACK_LINE(438)
					Float tmp175 = tmp174;		HX_STACK_VAR(tmp175,"tmp175");
					HX_STACK_LINE(438)
					Float tmp176 = (tmp173 - tmp175);		HX_STACK_VAR(tmp176,"tmp176");
					HX_STACK_LINE(438)
					Float tmp177 = len;		HX_STACK_VAR(tmp177,"tmp177");
					HX_STACK_LINE(438)
					Float tmp178 = (Float(tmp176) / Float(tmp177));		HX_STACK_VAR(tmp178,"tmp178");
					HX_STACK_LINE(438)
					rot->y = tmp178;
					HX_STACK_LINE(439)
					Float tmp179 = mr->get((int)1);		HX_STACK_VAR(tmp179,"tmp179");
					HX_STACK_LINE(439)
					Float tmp180 = tmp179;		HX_STACK_VAR(tmp180,"tmp180");
					HX_STACK_LINE(439)
					Float tmp181 = mr->get((int)4);		HX_STACK_VAR(tmp181,"tmp181");
					HX_STACK_LINE(439)
					Float tmp182 = tmp181;		HX_STACK_VAR(tmp182,"tmp182");
					HX_STACK_LINE(439)
					Float tmp183 = (tmp180 - tmp182);		HX_STACK_VAR(tmp183,"tmp183");
					HX_STACK_LINE(439)
					Float tmp184 = len;		HX_STACK_VAR(tmp184,"tmp184");
					HX_STACK_LINE(439)
					Float tmp185 = (Float(tmp183) / Float(tmp184));		HX_STACK_VAR(tmp185,"tmp185");
					HX_STACK_LINE(439)
					rot->z = tmp185;
				}
				else{
					HX_STACK_LINE(443)
					Float tmp165 = rot->z = (int)0;		HX_STACK_VAR(tmp165,"tmp165");
					HX_STACK_LINE(443)
					Float tmp166 = rot->y = tmp165;		HX_STACK_VAR(tmp166,"tmp166");
					HX_STACK_LINE(443)
					rot->x = tmp166;
				}
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(449)
				Float tmp117 = mr->get((int)0);		HX_STACK_VAR(tmp117,"tmp117");
				HX_STACK_LINE(449)
				Float tmp118 = tmp117;		HX_STACK_VAR(tmp118,"tmp118");
				HX_STACK_LINE(449)
				Float tmp119 = mr->get((int)5);		HX_STACK_VAR(tmp119,"tmp119");
				HX_STACK_LINE(449)
				Float tmp120 = tmp119;		HX_STACK_VAR(tmp120,"tmp120");
				HX_STACK_LINE(449)
				Float tmp121 = (tmp118 + tmp120);		HX_STACK_VAR(tmp121,"tmp121");
				HX_STACK_LINE(449)
				Float tmp122 = mr->get((int)10);		HX_STACK_VAR(tmp122,"tmp122");
				HX_STACK_LINE(449)
				Float tmp123 = tmp122;		HX_STACK_VAR(tmp123,"tmp123");
				HX_STACK_LINE(449)
				Float tmp124 = (tmp121 + tmp123);		HX_STACK_VAR(tmp124,"tmp124");
				HX_STACK_LINE(449)
				Float tr = tmp124;		HX_STACK_VAR(tr,"tr");
				HX_STACK_LINE(451)
				bool tmp125 = (tr > (int)0);		HX_STACK_VAR(tmp125,"tmp125");
				HX_STACK_LINE(451)
				if ((tmp125)){
					HX_STACK_LINE(453)
					Float tmp126 = ((int)1 + tr);		HX_STACK_VAR(tmp126,"tmp126");
					HX_STACK_LINE(453)
					Float tmp127 = ::Math_obj::sqrt(tmp126);		HX_STACK_VAR(tmp127,"tmp127");
					HX_STACK_LINE(453)
					Float tmp128 = (Float(tmp127) / Float((int)2));		HX_STACK_VAR(tmp128,"tmp128");
					HX_STACK_LINE(453)
					rot->w = tmp128;
					HX_STACK_LINE(455)
					Float tmp129 = mr->get((int)6);		HX_STACK_VAR(tmp129,"tmp129");
					HX_STACK_LINE(455)
					Float tmp130 = tmp129;		HX_STACK_VAR(tmp130,"tmp130");
					HX_STACK_LINE(455)
					Float tmp131 = mr->get((int)9);		HX_STACK_VAR(tmp131,"tmp131");
					HX_STACK_LINE(455)
					Float tmp132 = tmp131;		HX_STACK_VAR(tmp132,"tmp132");
					HX_STACK_LINE(455)
					Float tmp133 = (tmp130 - tmp132);		HX_STACK_VAR(tmp133,"tmp133");
					HX_STACK_LINE(455)
					Float tmp134 = ((int)4 * rot->w);		HX_STACK_VAR(tmp134,"tmp134");
					HX_STACK_LINE(455)
					Float tmp135 = (Float(tmp133) / Float(tmp134));		HX_STACK_VAR(tmp135,"tmp135");
					HX_STACK_LINE(455)
					rot->x = tmp135;
					HX_STACK_LINE(456)
					Float tmp136 = mr->get((int)8);		HX_STACK_VAR(tmp136,"tmp136");
					HX_STACK_LINE(456)
					Float tmp137 = tmp136;		HX_STACK_VAR(tmp137,"tmp137");
					HX_STACK_LINE(456)
					Float tmp138 = mr->get((int)2);		HX_STACK_VAR(tmp138,"tmp138");
					HX_STACK_LINE(456)
					Float tmp139 = tmp138;		HX_STACK_VAR(tmp139,"tmp139");
					HX_STACK_LINE(456)
					Float tmp140 = (tmp137 - tmp139);		HX_STACK_VAR(tmp140,"tmp140");
					HX_STACK_LINE(456)
					Float tmp141 = ((int)4 * rot->w);		HX_STACK_VAR(tmp141,"tmp141");
					HX_STACK_LINE(456)
					Float tmp142 = (Float(tmp140) / Float(tmp141));		HX_STACK_VAR(tmp142,"tmp142");
					HX_STACK_LINE(456)
					rot->y = tmp142;
					HX_STACK_LINE(457)
					Float tmp143 = mr->get((int)1);		HX_STACK_VAR(tmp143,"tmp143");
					HX_STACK_LINE(457)
					Float tmp144 = tmp143;		HX_STACK_VAR(tmp144,"tmp144");
					HX_STACK_LINE(457)
					Float tmp145 = mr->get((int)4);		HX_STACK_VAR(tmp145,"tmp145");
					HX_STACK_LINE(457)
					Float tmp146 = tmp145;		HX_STACK_VAR(tmp146,"tmp146");
					HX_STACK_LINE(457)
					Float tmp147 = (tmp144 - tmp146);		HX_STACK_VAR(tmp147,"tmp147");
					HX_STACK_LINE(457)
					Float tmp148 = ((int)4 * rot->w);		HX_STACK_VAR(tmp148,"tmp148");
					HX_STACK_LINE(457)
					Float tmp149 = (Float(tmp147) / Float(tmp148));		HX_STACK_VAR(tmp149,"tmp149");
					HX_STACK_LINE(457)
					rot->z = tmp149;
				}
				else{
					HX_STACK_LINE(459)
					Float tmp126 = mr->get((int)0);		HX_STACK_VAR(tmp126,"tmp126");
					HX_STACK_LINE(459)
					Float tmp127 = tmp126;		HX_STACK_VAR(tmp127,"tmp127");
					HX_STACK_LINE(459)
					Float tmp128 = mr->get((int)5);		HX_STACK_VAR(tmp128,"tmp128");
					HX_STACK_LINE(459)
					Float tmp129 = tmp128;		HX_STACK_VAR(tmp129,"tmp129");
					HX_STACK_LINE(459)
					bool tmp130 = (tmp127 > tmp129);		HX_STACK_VAR(tmp130,"tmp130");
					HX_STACK_LINE(459)
					bool tmp131;		HX_STACK_VAR(tmp131,"tmp131");
					HX_STACK_LINE(459)
					if ((tmp130)){
						HX_STACK_LINE(459)
						Float tmp132 = mr->get((int)0);		HX_STACK_VAR(tmp132,"tmp132");
						HX_STACK_LINE(459)
						Float tmp133 = tmp132;		HX_STACK_VAR(tmp133,"tmp133");
						HX_STACK_LINE(459)
						Float tmp134 = tmp133;		HX_STACK_VAR(tmp134,"tmp134");
						HX_STACK_LINE(459)
						Float tmp135 = mr->get((int)10);		HX_STACK_VAR(tmp135,"tmp135");
						HX_STACK_LINE(459)
						Float tmp136 = tmp135;		HX_STACK_VAR(tmp136,"tmp136");
						HX_STACK_LINE(459)
						Float tmp137 = tmp136;		HX_STACK_VAR(tmp137,"tmp137");
						HX_STACK_LINE(459)
						tmp131 = (tmp134 > tmp137);
					}
					else{
						HX_STACK_LINE(459)
						tmp131 = false;
					}
					HX_STACK_LINE(459)
					if ((tmp131)){
						HX_STACK_LINE(461)
						Float tmp132 = mr->get((int)0);		HX_STACK_VAR(tmp132,"tmp132");
						HX_STACK_LINE(461)
						Float tmp133 = tmp132;		HX_STACK_VAR(tmp133,"tmp133");
						HX_STACK_LINE(461)
						Float tmp134 = ((int)1 + tmp133);		HX_STACK_VAR(tmp134,"tmp134");
						HX_STACK_LINE(461)
						Float tmp135 = mr->get((int)5);		HX_STACK_VAR(tmp135,"tmp135");
						HX_STACK_LINE(461)
						Float tmp136 = tmp135;		HX_STACK_VAR(tmp136,"tmp136");
						HX_STACK_LINE(461)
						Float tmp137 = (tmp134 - tmp136);		HX_STACK_VAR(tmp137,"tmp137");
						HX_STACK_LINE(461)
						Float tmp138 = mr->get((int)10);		HX_STACK_VAR(tmp138,"tmp138");
						HX_STACK_LINE(461)
						Float tmp139 = tmp138;		HX_STACK_VAR(tmp139,"tmp139");
						HX_STACK_LINE(461)
						Float tmp140 = (tmp137 - tmp139);		HX_STACK_VAR(tmp140,"tmp140");
						HX_STACK_LINE(461)
						Float tmp141 = ::Math_obj::sqrt(tmp140);		HX_STACK_VAR(tmp141,"tmp141");
						HX_STACK_LINE(461)
						Float tmp142 = (Float(tmp141) / Float((int)2));		HX_STACK_VAR(tmp142,"tmp142");
						HX_STACK_LINE(461)
						rot->x = tmp142;
						HX_STACK_LINE(463)
						Float tmp143 = mr->get((int)6);		HX_STACK_VAR(tmp143,"tmp143");
						HX_STACK_LINE(463)
						Float tmp144 = tmp143;		HX_STACK_VAR(tmp144,"tmp144");
						HX_STACK_LINE(463)
						Float tmp145 = mr->get((int)9);		HX_STACK_VAR(tmp145,"tmp145");
						HX_STACK_LINE(463)
						Float tmp146 = tmp145;		HX_STACK_VAR(tmp146,"tmp146");
						HX_STACK_LINE(463)
						Float tmp147 = (tmp144 - tmp146);		HX_STACK_VAR(tmp147,"tmp147");
						HX_STACK_LINE(463)
						Float tmp148 = ((int)4 * rot->x);		HX_STACK_VAR(tmp148,"tmp148");
						HX_STACK_LINE(463)
						Float tmp149 = (Float(tmp147) / Float(tmp148));		HX_STACK_VAR(tmp149,"tmp149");
						HX_STACK_LINE(463)
						rot->w = tmp149;
						HX_STACK_LINE(464)
						Float tmp150 = mr->get((int)1);		HX_STACK_VAR(tmp150,"tmp150");
						HX_STACK_LINE(464)
						Float tmp151 = tmp150;		HX_STACK_VAR(tmp151,"tmp151");
						HX_STACK_LINE(464)
						Float tmp152 = mr->get((int)4);		HX_STACK_VAR(tmp152,"tmp152");
						HX_STACK_LINE(464)
						Float tmp153 = tmp152;		HX_STACK_VAR(tmp153,"tmp153");
						HX_STACK_LINE(464)
						Float tmp154 = (tmp151 + tmp153);		HX_STACK_VAR(tmp154,"tmp154");
						HX_STACK_LINE(464)
						Float tmp155 = ((int)4 * rot->x);		HX_STACK_VAR(tmp155,"tmp155");
						HX_STACK_LINE(464)
						Float tmp156 = (Float(tmp154) / Float(tmp155));		HX_STACK_VAR(tmp156,"tmp156");
						HX_STACK_LINE(464)
						rot->y = tmp156;
						HX_STACK_LINE(465)
						Float tmp157 = mr->get((int)8);		HX_STACK_VAR(tmp157,"tmp157");
						HX_STACK_LINE(465)
						Float tmp158 = tmp157;		HX_STACK_VAR(tmp158,"tmp158");
						HX_STACK_LINE(465)
						Float tmp159 = mr->get((int)2);		HX_STACK_VAR(tmp159,"tmp159");
						HX_STACK_LINE(465)
						Float tmp160 = tmp159;		HX_STACK_VAR(tmp160,"tmp160");
						HX_STACK_LINE(465)
						Float tmp161 = (tmp158 + tmp160);		HX_STACK_VAR(tmp161,"tmp161");
						HX_STACK_LINE(465)
						Float tmp162 = ((int)4 * rot->x);		HX_STACK_VAR(tmp162,"tmp162");
						HX_STACK_LINE(465)
						Float tmp163 = (Float(tmp161) / Float(tmp162));		HX_STACK_VAR(tmp163,"tmp163");
						HX_STACK_LINE(465)
						rot->z = tmp163;
					}
					else{
						HX_STACK_LINE(467)
						Float tmp132 = mr->get((int)5);		HX_STACK_VAR(tmp132,"tmp132");
						HX_STACK_LINE(467)
						Float tmp133 = tmp132;		HX_STACK_VAR(tmp133,"tmp133");
						HX_STACK_LINE(467)
						Float tmp134 = mr->get((int)10);		HX_STACK_VAR(tmp134,"tmp134");
						HX_STACK_LINE(467)
						Float tmp135 = tmp134;		HX_STACK_VAR(tmp135,"tmp135");
						HX_STACK_LINE(467)
						bool tmp136 = (tmp133 > tmp135);		HX_STACK_VAR(tmp136,"tmp136");
						HX_STACK_LINE(467)
						if ((tmp136)){
							HX_STACK_LINE(469)
							Float tmp137 = mr->get((int)5);		HX_STACK_VAR(tmp137,"tmp137");
							HX_STACK_LINE(469)
							Float tmp138 = tmp137;		HX_STACK_VAR(tmp138,"tmp138");
							HX_STACK_LINE(469)
							Float tmp139 = ((int)1 + tmp138);		HX_STACK_VAR(tmp139,"tmp139");
							HX_STACK_LINE(469)
							Float tmp140 = mr->get((int)0);		HX_STACK_VAR(tmp140,"tmp140");
							HX_STACK_LINE(469)
							Float tmp141 = tmp140;		HX_STACK_VAR(tmp141,"tmp141");
							HX_STACK_LINE(469)
							Float tmp142 = (tmp139 - tmp141);		HX_STACK_VAR(tmp142,"tmp142");
							HX_STACK_LINE(469)
							Float tmp143 = mr->get((int)10);		HX_STACK_VAR(tmp143,"tmp143");
							HX_STACK_LINE(469)
							Float tmp144 = tmp143;		HX_STACK_VAR(tmp144,"tmp144");
							HX_STACK_LINE(469)
							Float tmp145 = (tmp142 - tmp144);		HX_STACK_VAR(tmp145,"tmp145");
							HX_STACK_LINE(469)
							Float tmp146 = ::Math_obj::sqrt(tmp145);		HX_STACK_VAR(tmp146,"tmp146");
							HX_STACK_LINE(469)
							Float tmp147 = (Float(tmp146) / Float((int)2));		HX_STACK_VAR(tmp147,"tmp147");
							HX_STACK_LINE(469)
							rot->y = tmp147;
							HX_STACK_LINE(471)
							Float tmp148 = mr->get((int)1);		HX_STACK_VAR(tmp148,"tmp148");
							HX_STACK_LINE(471)
							Float tmp149 = tmp148;		HX_STACK_VAR(tmp149,"tmp149");
							HX_STACK_LINE(471)
							Float tmp150 = mr->get((int)4);		HX_STACK_VAR(tmp150,"tmp150");
							HX_STACK_LINE(471)
							Float tmp151 = tmp150;		HX_STACK_VAR(tmp151,"tmp151");
							HX_STACK_LINE(471)
							Float tmp152 = (tmp149 + tmp151);		HX_STACK_VAR(tmp152,"tmp152");
							HX_STACK_LINE(471)
							Float tmp153 = ((int)4 * rot->y);		HX_STACK_VAR(tmp153,"tmp153");
							HX_STACK_LINE(471)
							Float tmp154 = (Float(tmp152) / Float(tmp153));		HX_STACK_VAR(tmp154,"tmp154");
							HX_STACK_LINE(471)
							rot->x = tmp154;
							HX_STACK_LINE(472)
							Float tmp155 = mr->get((int)8);		HX_STACK_VAR(tmp155,"tmp155");
							HX_STACK_LINE(472)
							Float tmp156 = tmp155;		HX_STACK_VAR(tmp156,"tmp156");
							HX_STACK_LINE(472)
							Float tmp157 = mr->get((int)2);		HX_STACK_VAR(tmp157,"tmp157");
							HX_STACK_LINE(472)
							Float tmp158 = tmp157;		HX_STACK_VAR(tmp158,"tmp158");
							HX_STACK_LINE(472)
							Float tmp159 = (tmp156 - tmp158);		HX_STACK_VAR(tmp159,"tmp159");
							HX_STACK_LINE(472)
							Float tmp160 = ((int)4 * rot->y);		HX_STACK_VAR(tmp160,"tmp160");
							HX_STACK_LINE(472)
							Float tmp161 = (Float(tmp159) / Float(tmp160));		HX_STACK_VAR(tmp161,"tmp161");
							HX_STACK_LINE(472)
							rot->w = tmp161;
							HX_STACK_LINE(473)
							Float tmp162 = mr->get((int)6);		HX_STACK_VAR(tmp162,"tmp162");
							HX_STACK_LINE(473)
							Float tmp163 = tmp162;		HX_STACK_VAR(tmp163,"tmp163");
							HX_STACK_LINE(473)
							Float tmp164 = mr->get((int)9);		HX_STACK_VAR(tmp164,"tmp164");
							HX_STACK_LINE(473)
							Float tmp165 = tmp164;		HX_STACK_VAR(tmp165,"tmp165");
							HX_STACK_LINE(473)
							Float tmp166 = (tmp163 + tmp165);		HX_STACK_VAR(tmp166,"tmp166");
							HX_STACK_LINE(473)
							Float tmp167 = ((int)4 * rot->y);		HX_STACK_VAR(tmp167,"tmp167");
							HX_STACK_LINE(473)
							Float tmp168 = (Float(tmp166) / Float(tmp167));		HX_STACK_VAR(tmp168,"tmp168");
							HX_STACK_LINE(473)
							rot->z = tmp168;
						}
						else{
							HX_STACK_LINE(477)
							Float tmp137 = mr->get((int)10);		HX_STACK_VAR(tmp137,"tmp137");
							HX_STACK_LINE(477)
							Float tmp138 = tmp137;		HX_STACK_VAR(tmp138,"tmp138");
							HX_STACK_LINE(477)
							Float tmp139 = ((int)1 + tmp138);		HX_STACK_VAR(tmp139,"tmp139");
							HX_STACK_LINE(477)
							Float tmp140 = mr->get((int)0);		HX_STACK_VAR(tmp140,"tmp140");
							HX_STACK_LINE(477)
							Float tmp141 = tmp140;		HX_STACK_VAR(tmp141,"tmp141");
							HX_STACK_LINE(477)
							Float tmp142 = (tmp139 - tmp141);		HX_STACK_VAR(tmp142,"tmp142");
							HX_STACK_LINE(477)
							Float tmp143 = mr->get((int)5);		HX_STACK_VAR(tmp143,"tmp143");
							HX_STACK_LINE(477)
							Float tmp144 = tmp143;		HX_STACK_VAR(tmp144,"tmp144");
							HX_STACK_LINE(477)
							Float tmp145 = (tmp142 - tmp144);		HX_STACK_VAR(tmp145,"tmp145");
							HX_STACK_LINE(477)
							Float tmp146 = ::Math_obj::sqrt(tmp145);		HX_STACK_VAR(tmp146,"tmp146");
							HX_STACK_LINE(477)
							Float tmp147 = (Float(tmp146) / Float((int)2));		HX_STACK_VAR(tmp147,"tmp147");
							HX_STACK_LINE(477)
							rot->z = tmp147;
							HX_STACK_LINE(479)
							Float tmp148 = mr->get((int)8);		HX_STACK_VAR(tmp148,"tmp148");
							HX_STACK_LINE(479)
							Float tmp149 = tmp148;		HX_STACK_VAR(tmp149,"tmp149");
							HX_STACK_LINE(479)
							Float tmp150 = mr->get((int)2);		HX_STACK_VAR(tmp150,"tmp150");
							HX_STACK_LINE(479)
							Float tmp151 = tmp150;		HX_STACK_VAR(tmp151,"tmp151");
							HX_STACK_LINE(479)
							Float tmp152 = (tmp149 + tmp151);		HX_STACK_VAR(tmp152,"tmp152");
							HX_STACK_LINE(479)
							Float tmp153 = ((int)4 * rot->z);		HX_STACK_VAR(tmp153,"tmp153");
							HX_STACK_LINE(479)
							Float tmp154 = (Float(tmp152) / Float(tmp153));		HX_STACK_VAR(tmp154,"tmp154");
							HX_STACK_LINE(479)
							rot->x = tmp154;
							HX_STACK_LINE(480)
							Float tmp155 = mr->get((int)6);		HX_STACK_VAR(tmp155,"tmp155");
							HX_STACK_LINE(480)
							Float tmp156 = tmp155;		HX_STACK_VAR(tmp156,"tmp156");
							HX_STACK_LINE(480)
							Float tmp157 = mr->get((int)9);		HX_STACK_VAR(tmp157,"tmp157");
							HX_STACK_LINE(480)
							Float tmp158 = tmp157;		HX_STACK_VAR(tmp158,"tmp158");
							HX_STACK_LINE(480)
							Float tmp159 = (tmp156 + tmp158);		HX_STACK_VAR(tmp159,"tmp159");
							HX_STACK_LINE(480)
							Float tmp160 = ((int)4 * rot->z);		HX_STACK_VAR(tmp160,"tmp160");
							HX_STACK_LINE(480)
							Float tmp161 = (Float(tmp159) / Float(tmp160));		HX_STACK_VAR(tmp161,"tmp161");
							HX_STACK_LINE(480)
							rot->y = tmp161;
							HX_STACK_LINE(481)
							Float tmp162 = mr->get((int)1);		HX_STACK_VAR(tmp162,"tmp162");
							HX_STACK_LINE(481)
							Float tmp163 = tmp162;		HX_STACK_VAR(tmp163,"tmp163");
							HX_STACK_LINE(481)
							Float tmp164 = mr->get((int)4);		HX_STACK_VAR(tmp164,"tmp164");
							HX_STACK_LINE(481)
							Float tmp165 = tmp164;		HX_STACK_VAR(tmp165,"tmp165");
							HX_STACK_LINE(481)
							Float tmp166 = (tmp163 - tmp165);		HX_STACK_VAR(tmp166,"tmp166");
							HX_STACK_LINE(481)
							Float tmp167 = ((int)4 * rot->z);		HX_STACK_VAR(tmp167,"tmp167");
							HX_STACK_LINE(481)
							Float tmp168 = (Float(tmp166) / Float(tmp167));		HX_STACK_VAR(tmp168,"tmp168");
							HX_STACK_LINE(481)
							rot->w = tmp168;
						}
					}
				}
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(487)
				Float tmp117 = mr->get((int)2);		HX_STACK_VAR(tmp117,"tmp117");
				HX_STACK_LINE(487)
				Float tmp118 = tmp117;		HX_STACK_VAR(tmp118,"tmp118");
				HX_STACK_LINE(487)
				Float tmp119 = -(tmp118);		HX_STACK_VAR(tmp119,"tmp119");
				HX_STACK_LINE(487)
				Float tmp120 = ::Math_obj::asin(tmp119);		HX_STACK_VAR(tmp120,"tmp120");
				HX_STACK_LINE(487)
				rot->y = tmp120;
				HX_STACK_LINE(489)
				Float tmp121 = mr->get((int)2);		HX_STACK_VAR(tmp121,"tmp121");
				HX_STACK_LINE(489)
				Float tmp122 = tmp121;		HX_STACK_VAR(tmp122,"tmp122");
				HX_STACK_LINE(489)
				bool tmp123 = (tmp122 != (int)1);		HX_STACK_VAR(tmp123,"tmp123");
				HX_STACK_LINE(489)
				bool tmp124;		HX_STACK_VAR(tmp124,"tmp124");
				HX_STACK_LINE(489)
				if ((tmp123)){
					HX_STACK_LINE(489)
					Float tmp125 = mr->get((int)2);		HX_STACK_VAR(tmp125,"tmp125");
					HX_STACK_LINE(489)
					Float tmp126 = tmp125;		HX_STACK_VAR(tmp126,"tmp126");
					HX_STACK_LINE(489)
					Float tmp127 = tmp126;		HX_STACK_VAR(tmp127,"tmp127");
					HX_STACK_LINE(489)
					tmp124 = (tmp127 != (int)-1);
				}
				else{
					HX_STACK_LINE(489)
					tmp124 = false;
				}
				HX_STACK_LINE(489)
				if ((tmp124)){
					HX_STACK_LINE(491)
					Float tmp125 = mr->get((int)6);		HX_STACK_VAR(tmp125,"tmp125");
					HX_STACK_LINE(491)
					Float tmp126 = tmp125;		HX_STACK_VAR(tmp126,"tmp126");
					HX_STACK_LINE(491)
					Float tmp127 = mr->get((int)10);		HX_STACK_VAR(tmp127,"tmp127");
					HX_STACK_LINE(491)
					Float tmp128 = tmp127;		HX_STACK_VAR(tmp128,"tmp128");
					HX_STACK_LINE(491)
					Float tmp129 = ::Math_obj::atan2(tmp126,tmp128);		HX_STACK_VAR(tmp129,"tmp129");
					HX_STACK_LINE(491)
					rot->x = tmp129;
					HX_STACK_LINE(492)
					Float tmp130 = mr->get((int)1);		HX_STACK_VAR(tmp130,"tmp130");
					HX_STACK_LINE(492)
					Float tmp131 = tmp130;		HX_STACK_VAR(tmp131,"tmp131");
					HX_STACK_LINE(492)
					Float tmp132 = mr->get((int)0);		HX_STACK_VAR(tmp132,"tmp132");
					HX_STACK_LINE(492)
					Float tmp133 = tmp132;		HX_STACK_VAR(tmp133,"tmp133");
					HX_STACK_LINE(492)
					Float tmp134 = ::Math_obj::atan2(tmp131,tmp133);		HX_STACK_VAR(tmp134,"tmp134");
					HX_STACK_LINE(492)
					rot->z = tmp134;
				}
				else{
					HX_STACK_LINE(496)
					rot->z = (int)0;
					HX_STACK_LINE(497)
					Float tmp125 = mr->get((int)4);		HX_STACK_VAR(tmp125,"tmp125");
					HX_STACK_LINE(497)
					Float tmp126 = tmp125;		HX_STACK_VAR(tmp126,"tmp126");
					HX_STACK_LINE(497)
					Float tmp127 = mr->get((int)5);		HX_STACK_VAR(tmp127,"tmp127");
					HX_STACK_LINE(497)
					Float tmp128 = tmp127;		HX_STACK_VAR(tmp128,"tmp128");
					HX_STACK_LINE(497)
					Float tmp129 = ::Math_obj::atan2(tmp126,tmp128);		HX_STACK_VAR(tmp129,"tmp129");
					HX_STACK_LINE(497)
					rot->x = tmp129;
				}
			}
			;break;
		}
	}
	HX_STACK_LINE(503)
	::openfl::geom::Vector3D tmp116 = pos;		HX_STACK_VAR(tmp116,"tmp116");
	HX_STACK_LINE(503)
	vec->push(tmp116);
	HX_STACK_LINE(504)
	::openfl::geom::Vector3D tmp117 = rot;		HX_STACK_VAR(tmp117,"tmp117");
	HX_STACK_LINE(504)
	vec->push(tmp117);
	HX_STACK_LINE(505)
	::openfl::geom::Vector3D tmp118 = scale;		HX_STACK_VAR(tmp118,"tmp118");
	HX_STACK_LINE(505)
	vec->push(tmp118);
	HX_STACK_LINE(507)
	::openfl::_Vector::ObjectVector tmp119 = vec;		HX_STACK_VAR(tmp119,"tmp119");
	HX_STACK_LINE(507)
	return tmp119;
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix3D_obj,decompose,return )

::openfl::geom::Vector3D Matrix3D_obj::deltaTransformVector( ::openfl::geom::Vector3D v){
	HX_STACK_FRAME("openfl.geom.Matrix3D","deltaTransformVector",0x0285cbbf,"openfl.geom.Matrix3D.deltaTransformVector","openfl/geom/Matrix3D.hx",512,0x3acce238)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(514)
	Float x = v->x;		HX_STACK_VAR(x,"x");
	HX_STACK_LINE(514)
	Float y = v->y;		HX_STACK_VAR(y,"y");
	HX_STACK_LINE(514)
	Float z = v->z;		HX_STACK_VAR(z,"z");
	HX_STACK_LINE(516)
	Float tmp = x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(516)
	::openfl::_Vector::FloatVector tmp1 = this->rawData;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(516)
	Float tmp2 = tmp1->get((int)0);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(516)
	Float tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(516)
	Float tmp4 = (tmp * tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(516)
	Float tmp5 = y;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(516)
	::openfl::_Vector::FloatVector tmp6 = this->rawData;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(516)
	Float tmp7 = tmp6->get((int)4);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(516)
	Float tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(516)
	Float tmp9 = (tmp5 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(516)
	Float tmp10 = (tmp4 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(516)
	Float tmp11 = z;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(516)
	::openfl::_Vector::FloatVector tmp12 = this->rawData;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(516)
	Float tmp13 = tmp12->get((int)8);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(516)
	Float tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(516)
	Float tmp15 = (tmp11 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(516)
	Float tmp16 = (tmp10 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(516)
	::openfl::_Vector::FloatVector tmp17 = this->rawData;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(516)
	Float tmp18 = tmp17->get((int)3);		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(516)
	Float tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(516)
	Float tmp20 = (tmp16 + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(516)
	Float tmp21 = x;		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(516)
	::openfl::_Vector::FloatVector tmp22 = this->rawData;		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(516)
	Float tmp23 = tmp22->get((int)1);		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(516)
	Float tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(516)
	Float tmp25 = (tmp21 * tmp24);		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(516)
	Float tmp26 = y;		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(516)
	::openfl::_Vector::FloatVector tmp27 = this->rawData;		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(516)
	Float tmp28 = tmp27->get((int)5);		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(516)
	Float tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
	HX_STACK_LINE(516)
	Float tmp30 = (tmp26 * tmp29);		HX_STACK_VAR(tmp30,"tmp30");
	HX_STACK_LINE(516)
	Float tmp31 = (tmp25 + tmp30);		HX_STACK_VAR(tmp31,"tmp31");
	HX_STACK_LINE(516)
	Float tmp32 = z;		HX_STACK_VAR(tmp32,"tmp32");
	HX_STACK_LINE(516)
	::openfl::_Vector::FloatVector tmp33 = this->rawData;		HX_STACK_VAR(tmp33,"tmp33");
	HX_STACK_LINE(516)
	Float tmp34 = tmp33->get((int)9);		HX_STACK_VAR(tmp34,"tmp34");
	HX_STACK_LINE(516)
	Float tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
	HX_STACK_LINE(516)
	Float tmp36 = (tmp32 * tmp35);		HX_STACK_VAR(tmp36,"tmp36");
	HX_STACK_LINE(516)
	Float tmp37 = (tmp31 + tmp36);		HX_STACK_VAR(tmp37,"tmp37");
	HX_STACK_LINE(516)
	::openfl::_Vector::FloatVector tmp38 = this->rawData;		HX_STACK_VAR(tmp38,"tmp38");
	HX_STACK_LINE(516)
	Float tmp39 = tmp38->get((int)7);		HX_STACK_VAR(tmp39,"tmp39");
	HX_STACK_LINE(516)
	Float tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
	HX_STACK_LINE(516)
	Float tmp41 = (tmp37 + tmp40);		HX_STACK_VAR(tmp41,"tmp41");
	HX_STACK_LINE(516)
	Float tmp42 = x;		HX_STACK_VAR(tmp42,"tmp42");
	HX_STACK_LINE(516)
	::openfl::_Vector::FloatVector tmp43 = this->rawData;		HX_STACK_VAR(tmp43,"tmp43");
	HX_STACK_LINE(516)
	Float tmp44 = tmp43->get((int)2);		HX_STACK_VAR(tmp44,"tmp44");
	HX_STACK_LINE(516)
	Float tmp45 = tmp44;		HX_STACK_VAR(tmp45,"tmp45");
	HX_STACK_LINE(516)
	Float tmp46 = (tmp42 * tmp45);		HX_STACK_VAR(tmp46,"tmp46");
	HX_STACK_LINE(516)
	Float tmp47 = y;		HX_STACK_VAR(tmp47,"tmp47");
	HX_STACK_LINE(516)
	::openfl::_Vector::FloatVector tmp48 = this->rawData;		HX_STACK_VAR(tmp48,"tmp48");
	HX_STACK_LINE(516)
	Float tmp49 = tmp48->get((int)6);		HX_STACK_VAR(tmp49,"tmp49");
	HX_STACK_LINE(516)
	Float tmp50 = tmp49;		HX_STACK_VAR(tmp50,"tmp50");
	HX_STACK_LINE(516)
	Float tmp51 = (tmp47 * tmp50);		HX_STACK_VAR(tmp51,"tmp51");
	HX_STACK_LINE(516)
	Float tmp52 = (tmp46 + tmp51);		HX_STACK_VAR(tmp52,"tmp52");
	HX_STACK_LINE(516)
	Float tmp53 = z;		HX_STACK_VAR(tmp53,"tmp53");
	HX_STACK_LINE(516)
	::openfl::_Vector::FloatVector tmp54 = this->rawData;		HX_STACK_VAR(tmp54,"tmp54");
	HX_STACK_LINE(516)
	Float tmp55 = tmp54->get((int)10);		HX_STACK_VAR(tmp55,"tmp55");
	HX_STACK_LINE(516)
	Float tmp56 = tmp55;		HX_STACK_VAR(tmp56,"tmp56");
	HX_STACK_LINE(516)
	Float tmp57 = (tmp53 * tmp56);		HX_STACK_VAR(tmp57,"tmp57");
	HX_STACK_LINE(516)
	Float tmp58 = (tmp52 + tmp57);		HX_STACK_VAR(tmp58,"tmp58");
	HX_STACK_LINE(516)
	::openfl::_Vector::FloatVector tmp59 = this->rawData;		HX_STACK_VAR(tmp59,"tmp59");
	HX_STACK_LINE(516)
	Float tmp60 = tmp59->get((int)11);		HX_STACK_VAR(tmp60,"tmp60");
	HX_STACK_LINE(516)
	Float tmp61 = tmp60;		HX_STACK_VAR(tmp61,"tmp61");
	HX_STACK_LINE(516)
	Float tmp62 = (tmp58 + tmp61);		HX_STACK_VAR(tmp62,"tmp62");
	HX_STACK_LINE(516)
	::openfl::geom::Vector3D tmp63 = ::openfl::geom::Vector3D_obj::__new(tmp20,tmp41,tmp62,(int)0);		HX_STACK_VAR(tmp63,"tmp63");
	HX_STACK_LINE(516)
	return tmp63;
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix3D_obj,deltaTransformVector,return )

Void Matrix3D_obj::identity( ){
{
		HX_STACK_FRAME("openfl.geom.Matrix3D","identity",0xd35ee2c6,"openfl.geom.Matrix3D.identity","openfl/geom/Matrix3D.hx",521,0x3acce238)
		HX_STACK_THIS(this)
		HX_STACK_LINE(523)
		::openfl::_Vector::FloatVector tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(523)
		{
			HX_STACK_LINE(523)
			cpp::ArrayBase a = cpp::ArrayBase_obj::__new().Add(((Float)1.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)1.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)1.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)1.0));		HX_STACK_VAR(a,"a");
			HX_STACK_LINE(523)
			::openfl::_Vector::FloatVector tmp1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(523)
			{
				HX_STACK_LINE(523)
				int length = null();		HX_STACK_VAR(length,"length");
				HX_STACK_LINE(523)
				bool fixed = null();		HX_STACK_VAR(fixed,"fixed");
				HX_STACK_LINE(523)
				::openfl::_Vector::FloatVector tmp2 = ::openfl::_Vector::FloatVector_obj::__new(length,fixed,null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(523)
				::openfl::_Vector::FloatVector tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(523)
				tmp1 = tmp3;
			}
			HX_STACK_LINE(523)
			::openfl::_Vector::FloatVector vector = tmp1;		HX_STACK_VAR(vector,"vector");
			HX_STACK_LINE(523)
			{
				HX_STACK_LINE(523)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(523)
				int _g = a->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(523)
				while((true)){
					HX_STACK_LINE(523)
					bool tmp2 = (_g1 < _g);		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(523)
					bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(523)
					if ((tmp3)){
						HX_STACK_LINE(523)
						break;
					}
					HX_STACK_LINE(523)
					int tmp4 = (_g1)++;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(523)
					int i = tmp4;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(523)
					int tmp5 = i;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(523)
					Dynamic tmp6 = a->__GetItem(i);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(523)
					Float tmp7 = ((Float)(tmp6));		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(523)
					Float tmp8 = vector->set(tmp5,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(523)
					tmp8;
				}
			}
			HX_STACK_LINE(523)
			tmp = vector;
		}
		HX_STACK_LINE(523)
		this->rawData = tmp;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Matrix3D_obj,identity,(void))

Void Matrix3D_obj::interpolateTo( ::openfl::geom::Matrix3D toMat,Float percent){
{
		HX_STACK_FRAME("openfl.geom.Matrix3D","interpolateTo",0x74c2e614,"openfl.geom.Matrix3D.interpolateTo","openfl/geom/Matrix3D.hx",545,0x3acce238)
		HX_STACK_THIS(this)
		HX_STACK_ARG(toMat,"toMat")
		HX_STACK_ARG(percent,"percent")
		HX_STACK_LINE(545)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(545)
		while((true)){
			HX_STACK_LINE(545)
			bool tmp = (_g < (int)16);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(545)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(545)
			if ((tmp1)){
				HX_STACK_LINE(545)
				break;
			}
			HX_STACK_LINE(545)
			int tmp2 = (_g)++;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(545)
			int i = tmp2;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(547)
			{
				HX_STACK_LINE(547)
				::openfl::_Vector::FloatVector tmp3 = this->rawData;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(547)
				int tmp4 = i;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(547)
				Float tmp5 = tmp3->get(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(547)
				Float tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(547)
				int tmp7 = i;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(547)
				Float tmp8 = toMat->rawData->get(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(547)
				Float tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(547)
				::openfl::_Vector::FloatVector tmp10 = this->rawData;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(547)
				int tmp11 = i;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(547)
				Float tmp12 = tmp10->get(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(547)
				Float tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(547)
				Float tmp14 = (tmp9 - tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(547)
				Float tmp15 = percent;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(547)
				Float tmp16 = (tmp14 * tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(547)
				Float tmp17 = (tmp6 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(547)
				Float value = tmp17;		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(547)
				::openfl::_Vector::FloatVector tmp18 = this->rawData;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(547)
				int tmp19 = i;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(547)
				Float tmp20 = value;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(547)
				tmp18->set(tmp19,tmp20);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Matrix3D_obj,interpolateTo,(void))

bool Matrix3D_obj::invert( ){
	HX_STACK_FRAME("openfl.geom.Matrix3D","invert",0x5820929e,"openfl.geom.Matrix3D.invert","openfl/geom/Matrix3D.hx",554,0x3acce238)
	HX_STACK_THIS(this)
	HX_STACK_LINE(556)
	Float tmp = this->get_determinant();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(556)
	Float d = tmp;		HX_STACK_VAR(d,"d");
	HX_STACK_LINE(557)
	Float tmp1 = d;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(557)
	Float tmp2 = ::Math_obj::abs(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(557)
	bool tmp3 = (tmp2 > ((Float)0.00000000001));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(557)
	bool invertable = tmp3;		HX_STACK_VAR(invertable,"invertable");
	HX_STACK_LINE(559)
	bool tmp4 = invertable;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(559)
	if ((tmp4)){
		HX_STACK_LINE(561)
		Float tmp5 = (Float((int)1) / Float(d));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(561)
		d = tmp5;
		HX_STACK_LINE(563)
		::openfl::_Vector::FloatVector tmp6 = this->rawData;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(563)
		Float tmp7 = tmp6->get((int)0);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(563)
		Float m11 = tmp7;		HX_STACK_VAR(m11,"m11");
		HX_STACK_LINE(563)
		::openfl::_Vector::FloatVector tmp8 = this->rawData;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(563)
		Float tmp9 = tmp8->get((int)4);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(563)
		Float m21 = tmp9;		HX_STACK_VAR(m21,"m21");
		HX_STACK_LINE(563)
		::openfl::_Vector::FloatVector tmp10 = this->rawData;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(563)
		Float tmp11 = tmp10->get((int)8);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(563)
		Float m31 = tmp11;		HX_STACK_VAR(m31,"m31");
		HX_STACK_LINE(563)
		::openfl::_Vector::FloatVector tmp12 = this->rawData;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(563)
		Float tmp13 = tmp12->get((int)12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(563)
		Float m41 = tmp13;		HX_STACK_VAR(m41,"m41");
		HX_STACK_LINE(564)
		::openfl::_Vector::FloatVector tmp14 = this->rawData;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(564)
		Float tmp15 = tmp14->get((int)1);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(564)
		Float m12 = tmp15;		HX_STACK_VAR(m12,"m12");
		HX_STACK_LINE(564)
		::openfl::_Vector::FloatVector tmp16 = this->rawData;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(564)
		Float tmp17 = tmp16->get((int)5);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(564)
		Float m22 = tmp17;		HX_STACK_VAR(m22,"m22");
		HX_STACK_LINE(564)
		::openfl::_Vector::FloatVector tmp18 = this->rawData;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(564)
		Float tmp19 = tmp18->get((int)9);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(564)
		Float m32 = tmp19;		HX_STACK_VAR(m32,"m32");
		HX_STACK_LINE(564)
		::openfl::_Vector::FloatVector tmp20 = this->rawData;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(564)
		Float tmp21 = tmp20->get((int)13);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(564)
		Float m42 = tmp21;		HX_STACK_VAR(m42,"m42");
		HX_STACK_LINE(565)
		::openfl::_Vector::FloatVector tmp22 = this->rawData;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(565)
		Float tmp23 = tmp22->get((int)2);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(565)
		Float m13 = tmp23;		HX_STACK_VAR(m13,"m13");
		HX_STACK_LINE(565)
		::openfl::_Vector::FloatVector tmp24 = this->rawData;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(565)
		Float tmp25 = tmp24->get((int)6);		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(565)
		Float m23 = tmp25;		HX_STACK_VAR(m23,"m23");
		HX_STACK_LINE(565)
		::openfl::_Vector::FloatVector tmp26 = this->rawData;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(565)
		Float tmp27 = tmp26->get((int)10);		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(565)
		Float m33 = tmp27;		HX_STACK_VAR(m33,"m33");
		HX_STACK_LINE(565)
		::openfl::_Vector::FloatVector tmp28 = this->rawData;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(565)
		Float tmp29 = tmp28->get((int)14);		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(565)
		Float m43 = tmp29;		HX_STACK_VAR(m43,"m43");
		HX_STACK_LINE(566)
		::openfl::_Vector::FloatVector tmp30 = this->rawData;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(566)
		Float tmp31 = tmp30->get((int)3);		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(566)
		Float m14 = tmp31;		HX_STACK_VAR(m14,"m14");
		HX_STACK_LINE(566)
		::openfl::_Vector::FloatVector tmp32 = this->rawData;		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(566)
		Float tmp33 = tmp32->get((int)7);		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(566)
		Float m24 = tmp33;		HX_STACK_VAR(m24,"m24");
		HX_STACK_LINE(566)
		::openfl::_Vector::FloatVector tmp34 = this->rawData;		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(566)
		Float tmp35 = tmp34->get((int)11);		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(566)
		Float m34 = tmp35;		HX_STACK_VAR(m34,"m34");
		HX_STACK_LINE(566)
		::openfl::_Vector::FloatVector tmp36 = this->rawData;		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(566)
		Float tmp37 = tmp36->get((int)15);		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(566)
		Float m44 = tmp37;		HX_STACK_VAR(m44,"m44");
		HX_STACK_LINE(568)
		::openfl::_Vector::FloatVector tmp38 = this->rawData;		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(568)
		Float tmp39 = d;		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(568)
		Float tmp40 = m22;		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(568)
		Float tmp41 = (m33 * m44);		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(568)
		Float tmp42 = (m43 * m34);		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(568)
		Float tmp43 = (tmp41 - tmp42);		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(568)
		Float tmp44 = (tmp40 * tmp43);		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(568)
		Float tmp45 = m32;		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(568)
		Float tmp46 = (m23 * m44);		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(568)
		Float tmp47 = (m43 * m24);		HX_STACK_VAR(tmp47,"tmp47");
		HX_STACK_LINE(568)
		Float tmp48 = (tmp46 - tmp47);		HX_STACK_VAR(tmp48,"tmp48");
		HX_STACK_LINE(568)
		Float tmp49 = (tmp45 * tmp48);		HX_STACK_VAR(tmp49,"tmp49");
		HX_STACK_LINE(568)
		Float tmp50 = (tmp44 - tmp49);		HX_STACK_VAR(tmp50,"tmp50");
		HX_STACK_LINE(568)
		Float tmp51 = m42;		HX_STACK_VAR(tmp51,"tmp51");
		HX_STACK_LINE(568)
		Float tmp52 = (m23 * m34);		HX_STACK_VAR(tmp52,"tmp52");
		HX_STACK_LINE(568)
		Float tmp53 = (m33 * m24);		HX_STACK_VAR(tmp53,"tmp53");
		HX_STACK_LINE(568)
		Float tmp54 = (tmp52 - tmp53);		HX_STACK_VAR(tmp54,"tmp54");
		HX_STACK_LINE(568)
		Float tmp55 = (tmp51 * tmp54);		HX_STACK_VAR(tmp55,"tmp55");
		HX_STACK_LINE(568)
		Float tmp56 = (tmp50 + tmp55);		HX_STACK_VAR(tmp56,"tmp56");
		HX_STACK_LINE(568)
		Float tmp57 = (tmp39 * tmp56);		HX_STACK_VAR(tmp57,"tmp57");
		HX_STACK_LINE(568)
		Float tmp58 = tmp38->set((int)0,tmp57);		HX_STACK_VAR(tmp58,"tmp58");
		HX_STACK_LINE(568)
		tmp58;
		HX_STACK_LINE(569)
		::openfl::_Vector::FloatVector tmp59 = this->rawData;		HX_STACK_VAR(tmp59,"tmp59");
		HX_STACK_LINE(569)
		Float tmp60 = d;		HX_STACK_VAR(tmp60,"tmp60");
		HX_STACK_LINE(569)
		Float tmp61 = -(tmp60);		HX_STACK_VAR(tmp61,"tmp61");
		HX_STACK_LINE(569)
		Float tmp62 = m12;		HX_STACK_VAR(tmp62,"tmp62");
		HX_STACK_LINE(569)
		Float tmp63 = (m33 * m44);		HX_STACK_VAR(tmp63,"tmp63");
		HX_STACK_LINE(569)
		Float tmp64 = (m43 * m34);		HX_STACK_VAR(tmp64,"tmp64");
		HX_STACK_LINE(569)
		Float tmp65 = (tmp63 - tmp64);		HX_STACK_VAR(tmp65,"tmp65");
		HX_STACK_LINE(569)
		Float tmp66 = (tmp62 * tmp65);		HX_STACK_VAR(tmp66,"tmp66");
		HX_STACK_LINE(569)
		Float tmp67 = m32;		HX_STACK_VAR(tmp67,"tmp67");
		HX_STACK_LINE(569)
		Float tmp68 = (m13 * m44);		HX_STACK_VAR(tmp68,"tmp68");
		HX_STACK_LINE(569)
		Float tmp69 = (m43 * m14);		HX_STACK_VAR(tmp69,"tmp69");
		HX_STACK_LINE(569)
		Float tmp70 = (tmp68 - tmp69);		HX_STACK_VAR(tmp70,"tmp70");
		HX_STACK_LINE(569)
		Float tmp71 = (tmp67 * tmp70);		HX_STACK_VAR(tmp71,"tmp71");
		HX_STACK_LINE(569)
		Float tmp72 = (tmp66 - tmp71);		HX_STACK_VAR(tmp72,"tmp72");
		HX_STACK_LINE(569)
		Float tmp73 = m42;		HX_STACK_VAR(tmp73,"tmp73");
		HX_STACK_LINE(569)
		Float tmp74 = (m13 * m34);		HX_STACK_VAR(tmp74,"tmp74");
		HX_STACK_LINE(569)
		Float tmp75 = (m33 * m14);		HX_STACK_VAR(tmp75,"tmp75");
		HX_STACK_LINE(569)
		Float tmp76 = (tmp74 - tmp75);		HX_STACK_VAR(tmp76,"tmp76");
		HX_STACK_LINE(569)
		Float tmp77 = (tmp73 * tmp76);		HX_STACK_VAR(tmp77,"tmp77");
		HX_STACK_LINE(569)
		Float tmp78 = (tmp72 + tmp77);		HX_STACK_VAR(tmp78,"tmp78");
		HX_STACK_LINE(569)
		Float tmp79 = (tmp61 * tmp78);		HX_STACK_VAR(tmp79,"tmp79");
		HX_STACK_LINE(569)
		Float tmp80 = tmp59->set((int)1,tmp79);		HX_STACK_VAR(tmp80,"tmp80");
		HX_STACK_LINE(569)
		tmp80;
		HX_STACK_LINE(570)
		::openfl::_Vector::FloatVector tmp81 = this->rawData;		HX_STACK_VAR(tmp81,"tmp81");
		HX_STACK_LINE(570)
		Float tmp82 = d;		HX_STACK_VAR(tmp82,"tmp82");
		HX_STACK_LINE(570)
		Float tmp83 = m12;		HX_STACK_VAR(tmp83,"tmp83");
		HX_STACK_LINE(570)
		Float tmp84 = (m23 * m44);		HX_STACK_VAR(tmp84,"tmp84");
		HX_STACK_LINE(570)
		Float tmp85 = (m43 * m24);		HX_STACK_VAR(tmp85,"tmp85");
		HX_STACK_LINE(570)
		Float tmp86 = (tmp84 - tmp85);		HX_STACK_VAR(tmp86,"tmp86");
		HX_STACK_LINE(570)
		Float tmp87 = (tmp83 * tmp86);		HX_STACK_VAR(tmp87,"tmp87");
		HX_STACK_LINE(570)
		Float tmp88 = m22;		HX_STACK_VAR(tmp88,"tmp88");
		HX_STACK_LINE(570)
		Float tmp89 = (m13 * m44);		HX_STACK_VAR(tmp89,"tmp89");
		HX_STACK_LINE(570)
		Float tmp90 = (m43 * m14);		HX_STACK_VAR(tmp90,"tmp90");
		HX_STACK_LINE(570)
		Float tmp91 = (tmp89 - tmp90);		HX_STACK_VAR(tmp91,"tmp91");
		HX_STACK_LINE(570)
		Float tmp92 = (tmp88 * tmp91);		HX_STACK_VAR(tmp92,"tmp92");
		HX_STACK_LINE(570)
		Float tmp93 = (tmp87 - tmp92);		HX_STACK_VAR(tmp93,"tmp93");
		HX_STACK_LINE(570)
		Float tmp94 = m42;		HX_STACK_VAR(tmp94,"tmp94");
		HX_STACK_LINE(570)
		Float tmp95 = (m13 * m24);		HX_STACK_VAR(tmp95,"tmp95");
		HX_STACK_LINE(570)
		Float tmp96 = (m23 * m14);		HX_STACK_VAR(tmp96,"tmp96");
		HX_STACK_LINE(570)
		Float tmp97 = (tmp95 - tmp96);		HX_STACK_VAR(tmp97,"tmp97");
		HX_STACK_LINE(570)
		Float tmp98 = (tmp94 * tmp97);		HX_STACK_VAR(tmp98,"tmp98");
		HX_STACK_LINE(570)
		Float tmp99 = (tmp93 + tmp98);		HX_STACK_VAR(tmp99,"tmp99");
		HX_STACK_LINE(570)
		Float tmp100 = (tmp82 * tmp99);		HX_STACK_VAR(tmp100,"tmp100");
		HX_STACK_LINE(570)
		Float tmp101 = tmp81->set((int)2,tmp100);		HX_STACK_VAR(tmp101,"tmp101");
		HX_STACK_LINE(570)
		tmp101;
		HX_STACK_LINE(571)
		::openfl::_Vector::FloatVector tmp102 = this->rawData;		HX_STACK_VAR(tmp102,"tmp102");
		HX_STACK_LINE(571)
		Float tmp103 = d;		HX_STACK_VAR(tmp103,"tmp103");
		HX_STACK_LINE(571)
		Float tmp104 = -(tmp103);		HX_STACK_VAR(tmp104,"tmp104");
		HX_STACK_LINE(571)
		Float tmp105 = m12;		HX_STACK_VAR(tmp105,"tmp105");
		HX_STACK_LINE(571)
		Float tmp106 = (m23 * m34);		HX_STACK_VAR(tmp106,"tmp106");
		HX_STACK_LINE(571)
		Float tmp107 = (m33 * m24);		HX_STACK_VAR(tmp107,"tmp107");
		HX_STACK_LINE(571)
		Float tmp108 = (tmp106 - tmp107);		HX_STACK_VAR(tmp108,"tmp108");
		HX_STACK_LINE(571)
		Float tmp109 = (tmp105 * tmp108);		HX_STACK_VAR(tmp109,"tmp109");
		HX_STACK_LINE(571)
		Float tmp110 = m22;		HX_STACK_VAR(tmp110,"tmp110");
		HX_STACK_LINE(571)
		Float tmp111 = (m13 * m34);		HX_STACK_VAR(tmp111,"tmp111");
		HX_STACK_LINE(571)
		Float tmp112 = (m33 * m14);		HX_STACK_VAR(tmp112,"tmp112");
		HX_STACK_LINE(571)
		Float tmp113 = (tmp111 - tmp112);		HX_STACK_VAR(tmp113,"tmp113");
		HX_STACK_LINE(571)
		Float tmp114 = (tmp110 * tmp113);		HX_STACK_VAR(tmp114,"tmp114");
		HX_STACK_LINE(571)
		Float tmp115 = (tmp109 - tmp114);		HX_STACK_VAR(tmp115,"tmp115");
		HX_STACK_LINE(571)
		Float tmp116 = m32;		HX_STACK_VAR(tmp116,"tmp116");
		HX_STACK_LINE(571)
		Float tmp117 = (m13 * m24);		HX_STACK_VAR(tmp117,"tmp117");
		HX_STACK_LINE(571)
		Float tmp118 = (m23 * m14);		HX_STACK_VAR(tmp118,"tmp118");
		HX_STACK_LINE(571)
		Float tmp119 = (tmp117 - tmp118);		HX_STACK_VAR(tmp119,"tmp119");
		HX_STACK_LINE(571)
		Float tmp120 = (tmp116 * tmp119);		HX_STACK_VAR(tmp120,"tmp120");
		HX_STACK_LINE(571)
		Float tmp121 = (tmp115 + tmp120);		HX_STACK_VAR(tmp121,"tmp121");
		HX_STACK_LINE(571)
		Float tmp122 = (tmp104 * tmp121);		HX_STACK_VAR(tmp122,"tmp122");
		HX_STACK_LINE(571)
		Float tmp123 = tmp102->set((int)3,tmp122);		HX_STACK_VAR(tmp123,"tmp123");
		HX_STACK_LINE(571)
		tmp123;
		HX_STACK_LINE(572)
		::openfl::_Vector::FloatVector tmp124 = this->rawData;		HX_STACK_VAR(tmp124,"tmp124");
		HX_STACK_LINE(572)
		Float tmp125 = d;		HX_STACK_VAR(tmp125,"tmp125");
		HX_STACK_LINE(572)
		Float tmp126 = -(tmp125);		HX_STACK_VAR(tmp126,"tmp126");
		HX_STACK_LINE(572)
		Float tmp127 = m21;		HX_STACK_VAR(tmp127,"tmp127");
		HX_STACK_LINE(572)
		Float tmp128 = (m33 * m44);		HX_STACK_VAR(tmp128,"tmp128");
		HX_STACK_LINE(572)
		Float tmp129 = (m43 * m34);		HX_STACK_VAR(tmp129,"tmp129");
		HX_STACK_LINE(572)
		Float tmp130 = (tmp128 - tmp129);		HX_STACK_VAR(tmp130,"tmp130");
		HX_STACK_LINE(572)
		Float tmp131 = (tmp127 * tmp130);		HX_STACK_VAR(tmp131,"tmp131");
		HX_STACK_LINE(572)
		Float tmp132 = m31;		HX_STACK_VAR(tmp132,"tmp132");
		HX_STACK_LINE(572)
		Float tmp133 = (m23 * m44);		HX_STACK_VAR(tmp133,"tmp133");
		HX_STACK_LINE(572)
		Float tmp134 = (m43 * m24);		HX_STACK_VAR(tmp134,"tmp134");
		HX_STACK_LINE(572)
		Float tmp135 = (tmp133 - tmp134);		HX_STACK_VAR(tmp135,"tmp135");
		HX_STACK_LINE(572)
		Float tmp136 = (tmp132 * tmp135);		HX_STACK_VAR(tmp136,"tmp136");
		HX_STACK_LINE(572)
		Float tmp137 = (tmp131 - tmp136);		HX_STACK_VAR(tmp137,"tmp137");
		HX_STACK_LINE(572)
		Float tmp138 = m41;		HX_STACK_VAR(tmp138,"tmp138");
		HX_STACK_LINE(572)
		Float tmp139 = (m23 * m34);		HX_STACK_VAR(tmp139,"tmp139");
		HX_STACK_LINE(572)
		Float tmp140 = (m33 * m24);		HX_STACK_VAR(tmp140,"tmp140");
		HX_STACK_LINE(572)
		Float tmp141 = (tmp139 - tmp140);		HX_STACK_VAR(tmp141,"tmp141");
		HX_STACK_LINE(572)
		Float tmp142 = (tmp138 * tmp141);		HX_STACK_VAR(tmp142,"tmp142");
		HX_STACK_LINE(572)
		Float tmp143 = (tmp137 + tmp142);		HX_STACK_VAR(tmp143,"tmp143");
		HX_STACK_LINE(572)
		Float tmp144 = (tmp126 * tmp143);		HX_STACK_VAR(tmp144,"tmp144");
		HX_STACK_LINE(572)
		Float tmp145 = tmp124->set((int)4,tmp144);		HX_STACK_VAR(tmp145,"tmp145");
		HX_STACK_LINE(572)
		tmp145;
		HX_STACK_LINE(573)
		::openfl::_Vector::FloatVector tmp146 = this->rawData;		HX_STACK_VAR(tmp146,"tmp146");
		HX_STACK_LINE(573)
		Float tmp147 = d;		HX_STACK_VAR(tmp147,"tmp147");
		HX_STACK_LINE(573)
		Float tmp148 = m11;		HX_STACK_VAR(tmp148,"tmp148");
		HX_STACK_LINE(573)
		Float tmp149 = (m33 * m44);		HX_STACK_VAR(tmp149,"tmp149");
		HX_STACK_LINE(573)
		Float tmp150 = (m43 * m34);		HX_STACK_VAR(tmp150,"tmp150");
		HX_STACK_LINE(573)
		Float tmp151 = (tmp149 - tmp150);		HX_STACK_VAR(tmp151,"tmp151");
		HX_STACK_LINE(573)
		Float tmp152 = (tmp148 * tmp151);		HX_STACK_VAR(tmp152,"tmp152");
		HX_STACK_LINE(573)
		Float tmp153 = m31;		HX_STACK_VAR(tmp153,"tmp153");
		HX_STACK_LINE(573)
		Float tmp154 = (m13 * m44);		HX_STACK_VAR(tmp154,"tmp154");
		HX_STACK_LINE(573)
		Float tmp155 = (m43 * m14);		HX_STACK_VAR(tmp155,"tmp155");
		HX_STACK_LINE(573)
		Float tmp156 = (tmp154 - tmp155);		HX_STACK_VAR(tmp156,"tmp156");
		HX_STACK_LINE(573)
		Float tmp157 = (tmp153 * tmp156);		HX_STACK_VAR(tmp157,"tmp157");
		HX_STACK_LINE(573)
		Float tmp158 = (tmp152 - tmp157);		HX_STACK_VAR(tmp158,"tmp158");
		HX_STACK_LINE(573)
		Float tmp159 = m41;		HX_STACK_VAR(tmp159,"tmp159");
		HX_STACK_LINE(573)
		Float tmp160 = (m13 * m34);		HX_STACK_VAR(tmp160,"tmp160");
		HX_STACK_LINE(573)
		Float tmp161 = (m33 * m14);		HX_STACK_VAR(tmp161,"tmp161");
		HX_STACK_LINE(573)
		Float tmp162 = (tmp160 - tmp161);		HX_STACK_VAR(tmp162,"tmp162");
		HX_STACK_LINE(573)
		Float tmp163 = (tmp159 * tmp162);		HX_STACK_VAR(tmp163,"tmp163");
		HX_STACK_LINE(573)
		Float tmp164 = (tmp158 + tmp163);		HX_STACK_VAR(tmp164,"tmp164");
		HX_STACK_LINE(573)
		Float tmp165 = (tmp147 * tmp164);		HX_STACK_VAR(tmp165,"tmp165");
		HX_STACK_LINE(573)
		Float tmp166 = tmp146->set((int)5,tmp165);		HX_STACK_VAR(tmp166,"tmp166");
		HX_STACK_LINE(573)
		tmp166;
		HX_STACK_LINE(574)
		::openfl::_Vector::FloatVector tmp167 = this->rawData;		HX_STACK_VAR(tmp167,"tmp167");
		HX_STACK_LINE(574)
		Float tmp168 = d;		HX_STACK_VAR(tmp168,"tmp168");
		HX_STACK_LINE(574)
		Float tmp169 = -(tmp168);		HX_STACK_VAR(tmp169,"tmp169");
		HX_STACK_LINE(574)
		Float tmp170 = m11;		HX_STACK_VAR(tmp170,"tmp170");
		HX_STACK_LINE(574)
		Float tmp171 = (m23 * m44);		HX_STACK_VAR(tmp171,"tmp171");
		HX_STACK_LINE(574)
		Float tmp172 = (m43 * m24);		HX_STACK_VAR(tmp172,"tmp172");
		HX_STACK_LINE(574)
		Float tmp173 = (tmp171 - tmp172);		HX_STACK_VAR(tmp173,"tmp173");
		HX_STACK_LINE(574)
		Float tmp174 = (tmp170 * tmp173);		HX_STACK_VAR(tmp174,"tmp174");
		HX_STACK_LINE(574)
		Float tmp175 = m21;		HX_STACK_VAR(tmp175,"tmp175");
		HX_STACK_LINE(574)
		Float tmp176 = (m13 * m44);		HX_STACK_VAR(tmp176,"tmp176");
		HX_STACK_LINE(574)
		Float tmp177 = (m43 * m14);		HX_STACK_VAR(tmp177,"tmp177");
		HX_STACK_LINE(574)
		Float tmp178 = (tmp176 - tmp177);		HX_STACK_VAR(tmp178,"tmp178");
		HX_STACK_LINE(574)
		Float tmp179 = (tmp175 * tmp178);		HX_STACK_VAR(tmp179,"tmp179");
		HX_STACK_LINE(574)
		Float tmp180 = (tmp174 - tmp179);		HX_STACK_VAR(tmp180,"tmp180");
		HX_STACK_LINE(574)
		Float tmp181 = m41;		HX_STACK_VAR(tmp181,"tmp181");
		HX_STACK_LINE(574)
		Float tmp182 = (m13 * m24);		HX_STACK_VAR(tmp182,"tmp182");
		HX_STACK_LINE(574)
		Float tmp183 = (m23 * m14);		HX_STACK_VAR(tmp183,"tmp183");
		HX_STACK_LINE(574)
		Float tmp184 = (tmp182 - tmp183);		HX_STACK_VAR(tmp184,"tmp184");
		HX_STACK_LINE(574)
		Float tmp185 = (tmp181 * tmp184);		HX_STACK_VAR(tmp185,"tmp185");
		HX_STACK_LINE(574)
		Float tmp186 = (tmp180 + tmp185);		HX_STACK_VAR(tmp186,"tmp186");
		HX_STACK_LINE(574)
		Float tmp187 = (tmp169 * tmp186);		HX_STACK_VAR(tmp187,"tmp187");
		HX_STACK_LINE(574)
		Float tmp188 = tmp167->set((int)6,tmp187);		HX_STACK_VAR(tmp188,"tmp188");
		HX_STACK_LINE(574)
		tmp188;
		HX_STACK_LINE(575)
		::openfl::_Vector::FloatVector tmp189 = this->rawData;		HX_STACK_VAR(tmp189,"tmp189");
		HX_STACK_LINE(575)
		Float tmp190 = d;		HX_STACK_VAR(tmp190,"tmp190");
		HX_STACK_LINE(575)
		Float tmp191 = m11;		HX_STACK_VAR(tmp191,"tmp191");
		HX_STACK_LINE(575)
		Float tmp192 = (m23 * m34);		HX_STACK_VAR(tmp192,"tmp192");
		HX_STACK_LINE(575)
		Float tmp193 = (m33 * m24);		HX_STACK_VAR(tmp193,"tmp193");
		HX_STACK_LINE(575)
		Float tmp194 = (tmp192 - tmp193);		HX_STACK_VAR(tmp194,"tmp194");
		HX_STACK_LINE(575)
		Float tmp195 = (tmp191 * tmp194);		HX_STACK_VAR(tmp195,"tmp195");
		HX_STACK_LINE(575)
		Float tmp196 = m21;		HX_STACK_VAR(tmp196,"tmp196");
		HX_STACK_LINE(575)
		Float tmp197 = (m13 * m34);		HX_STACK_VAR(tmp197,"tmp197");
		HX_STACK_LINE(575)
		Float tmp198 = (m33 * m14);		HX_STACK_VAR(tmp198,"tmp198");
		HX_STACK_LINE(575)
		Float tmp199 = (tmp197 - tmp198);		HX_STACK_VAR(tmp199,"tmp199");
		HX_STACK_LINE(575)
		Float tmp200 = (tmp196 * tmp199);		HX_STACK_VAR(tmp200,"tmp200");
		HX_STACK_LINE(575)
		Float tmp201 = (tmp195 - tmp200);		HX_STACK_VAR(tmp201,"tmp201");
		HX_STACK_LINE(575)
		Float tmp202 = m31;		HX_STACK_VAR(tmp202,"tmp202");
		HX_STACK_LINE(575)
		Float tmp203 = (m13 * m24);		HX_STACK_VAR(tmp203,"tmp203");
		HX_STACK_LINE(575)
		Float tmp204 = (m23 * m14);		HX_STACK_VAR(tmp204,"tmp204");
		HX_STACK_LINE(575)
		Float tmp205 = (tmp203 - tmp204);		HX_STACK_VAR(tmp205,"tmp205");
		HX_STACK_LINE(575)
		Float tmp206 = (tmp202 * tmp205);		HX_STACK_VAR(tmp206,"tmp206");
		HX_STACK_LINE(575)
		Float tmp207 = (tmp201 + tmp206);		HX_STACK_VAR(tmp207,"tmp207");
		HX_STACK_LINE(575)
		Float tmp208 = (tmp190 * tmp207);		HX_STACK_VAR(tmp208,"tmp208");
		HX_STACK_LINE(575)
		Float tmp209 = tmp189->set((int)7,tmp208);		HX_STACK_VAR(tmp209,"tmp209");
		HX_STACK_LINE(575)
		tmp209;
		HX_STACK_LINE(576)
		::openfl::_Vector::FloatVector tmp210 = this->rawData;		HX_STACK_VAR(tmp210,"tmp210");
		HX_STACK_LINE(576)
		Float tmp211 = d;		HX_STACK_VAR(tmp211,"tmp211");
		HX_STACK_LINE(576)
		Float tmp212 = m21;		HX_STACK_VAR(tmp212,"tmp212");
		HX_STACK_LINE(576)
		Float tmp213 = (m32 * m44);		HX_STACK_VAR(tmp213,"tmp213");
		HX_STACK_LINE(576)
		Float tmp214 = (m42 * m34);		HX_STACK_VAR(tmp214,"tmp214");
		HX_STACK_LINE(576)
		Float tmp215 = (tmp213 - tmp214);		HX_STACK_VAR(tmp215,"tmp215");
		HX_STACK_LINE(576)
		Float tmp216 = (tmp212 * tmp215);		HX_STACK_VAR(tmp216,"tmp216");
		HX_STACK_LINE(576)
		Float tmp217 = m31;		HX_STACK_VAR(tmp217,"tmp217");
		HX_STACK_LINE(576)
		Float tmp218 = (m22 * m44);		HX_STACK_VAR(tmp218,"tmp218");
		HX_STACK_LINE(576)
		Float tmp219 = (m42 * m24);		HX_STACK_VAR(tmp219,"tmp219");
		HX_STACK_LINE(576)
		Float tmp220 = (tmp218 - tmp219);		HX_STACK_VAR(tmp220,"tmp220");
		HX_STACK_LINE(576)
		Float tmp221 = (tmp217 * tmp220);		HX_STACK_VAR(tmp221,"tmp221");
		HX_STACK_LINE(576)
		Float tmp222 = (tmp216 - tmp221);		HX_STACK_VAR(tmp222,"tmp222");
		HX_STACK_LINE(576)
		Float tmp223 = m41;		HX_STACK_VAR(tmp223,"tmp223");
		HX_STACK_LINE(576)
		Float tmp224 = (m22 * m34);		HX_STACK_VAR(tmp224,"tmp224");
		HX_STACK_LINE(576)
		Float tmp225 = (m32 * m24);		HX_STACK_VAR(tmp225,"tmp225");
		HX_STACK_LINE(576)
		Float tmp226 = (tmp224 - tmp225);		HX_STACK_VAR(tmp226,"tmp226");
		HX_STACK_LINE(576)
		Float tmp227 = (tmp223 * tmp226);		HX_STACK_VAR(tmp227,"tmp227");
		HX_STACK_LINE(576)
		Float tmp228 = (tmp222 + tmp227);		HX_STACK_VAR(tmp228,"tmp228");
		HX_STACK_LINE(576)
		Float tmp229 = (tmp211 * tmp228);		HX_STACK_VAR(tmp229,"tmp229");
		HX_STACK_LINE(576)
		Float tmp230 = tmp210->set((int)8,tmp229);		HX_STACK_VAR(tmp230,"tmp230");
		HX_STACK_LINE(576)
		tmp230;
		HX_STACK_LINE(577)
		::openfl::_Vector::FloatVector tmp231 = this->rawData;		HX_STACK_VAR(tmp231,"tmp231");
		HX_STACK_LINE(577)
		Float tmp232 = d;		HX_STACK_VAR(tmp232,"tmp232");
		HX_STACK_LINE(577)
		Float tmp233 = -(tmp232);		HX_STACK_VAR(tmp233,"tmp233");
		HX_STACK_LINE(577)
		Float tmp234 = m11;		HX_STACK_VAR(tmp234,"tmp234");
		HX_STACK_LINE(577)
		Float tmp235 = (m32 * m44);		HX_STACK_VAR(tmp235,"tmp235");
		HX_STACK_LINE(577)
		Float tmp236 = (m42 * m34);		HX_STACK_VAR(tmp236,"tmp236");
		HX_STACK_LINE(577)
		Float tmp237 = (tmp235 - tmp236);		HX_STACK_VAR(tmp237,"tmp237");
		HX_STACK_LINE(577)
		Float tmp238 = (tmp234 * tmp237);		HX_STACK_VAR(tmp238,"tmp238");
		HX_STACK_LINE(577)
		Float tmp239 = m31;		HX_STACK_VAR(tmp239,"tmp239");
		HX_STACK_LINE(577)
		Float tmp240 = (m12 * m44);		HX_STACK_VAR(tmp240,"tmp240");
		HX_STACK_LINE(577)
		Float tmp241 = (m42 * m14);		HX_STACK_VAR(tmp241,"tmp241");
		HX_STACK_LINE(577)
		Float tmp242 = (tmp240 - tmp241);		HX_STACK_VAR(tmp242,"tmp242");
		HX_STACK_LINE(577)
		Float tmp243 = (tmp239 * tmp242);		HX_STACK_VAR(tmp243,"tmp243");
		HX_STACK_LINE(577)
		Float tmp244 = (tmp238 - tmp243);		HX_STACK_VAR(tmp244,"tmp244");
		HX_STACK_LINE(577)
		Float tmp245 = m41;		HX_STACK_VAR(tmp245,"tmp245");
		HX_STACK_LINE(577)
		Float tmp246 = (m12 * m34);		HX_STACK_VAR(tmp246,"tmp246");
		HX_STACK_LINE(577)
		Float tmp247 = (m32 * m14);		HX_STACK_VAR(tmp247,"tmp247");
		HX_STACK_LINE(577)
		Float tmp248 = (tmp246 - tmp247);		HX_STACK_VAR(tmp248,"tmp248");
		HX_STACK_LINE(577)
		Float tmp249 = (tmp245 * tmp248);		HX_STACK_VAR(tmp249,"tmp249");
		HX_STACK_LINE(577)
		Float tmp250 = (tmp244 + tmp249);		HX_STACK_VAR(tmp250,"tmp250");
		HX_STACK_LINE(577)
		Float tmp251 = (tmp233 * tmp250);		HX_STACK_VAR(tmp251,"tmp251");
		HX_STACK_LINE(577)
		Float tmp252 = tmp231->set((int)9,tmp251);		HX_STACK_VAR(tmp252,"tmp252");
		HX_STACK_LINE(577)
		tmp252;
		HX_STACK_LINE(578)
		::openfl::_Vector::FloatVector tmp253 = this->rawData;		HX_STACK_VAR(tmp253,"tmp253");
		HX_STACK_LINE(578)
		Float tmp254 = d;		HX_STACK_VAR(tmp254,"tmp254");
		HX_STACK_LINE(578)
		Float tmp255 = m11;		HX_STACK_VAR(tmp255,"tmp255");
		HX_STACK_LINE(578)
		Float tmp256 = (m22 * m44);		HX_STACK_VAR(tmp256,"tmp256");
		HX_STACK_LINE(578)
		Float tmp257 = (m42 * m24);		HX_STACK_VAR(tmp257,"tmp257");
		HX_STACK_LINE(578)
		Float tmp258 = (tmp256 - tmp257);		HX_STACK_VAR(tmp258,"tmp258");
		HX_STACK_LINE(578)
		Float tmp259 = (tmp255 * tmp258);		HX_STACK_VAR(tmp259,"tmp259");
		HX_STACK_LINE(578)
		Float tmp260 = m21;		HX_STACK_VAR(tmp260,"tmp260");
		HX_STACK_LINE(578)
		Float tmp261 = (m12 * m44);		HX_STACK_VAR(tmp261,"tmp261");
		HX_STACK_LINE(578)
		Float tmp262 = (m42 * m14);		HX_STACK_VAR(tmp262,"tmp262");
		HX_STACK_LINE(578)
		Float tmp263 = (tmp261 - tmp262);		HX_STACK_VAR(tmp263,"tmp263");
		HX_STACK_LINE(578)
		Float tmp264 = (tmp260 * tmp263);		HX_STACK_VAR(tmp264,"tmp264");
		HX_STACK_LINE(578)
		Float tmp265 = (tmp259 - tmp264);		HX_STACK_VAR(tmp265,"tmp265");
		HX_STACK_LINE(578)
		Float tmp266 = m41;		HX_STACK_VAR(tmp266,"tmp266");
		HX_STACK_LINE(578)
		Float tmp267 = (m12 * m24);		HX_STACK_VAR(tmp267,"tmp267");
		HX_STACK_LINE(578)
		Float tmp268 = (m22 * m14);		HX_STACK_VAR(tmp268,"tmp268");
		HX_STACK_LINE(578)
		Float tmp269 = (tmp267 - tmp268);		HX_STACK_VAR(tmp269,"tmp269");
		HX_STACK_LINE(578)
		Float tmp270 = (tmp266 * tmp269);		HX_STACK_VAR(tmp270,"tmp270");
		HX_STACK_LINE(578)
		Float tmp271 = (tmp265 + tmp270);		HX_STACK_VAR(tmp271,"tmp271");
		HX_STACK_LINE(578)
		Float tmp272 = (tmp254 * tmp271);		HX_STACK_VAR(tmp272,"tmp272");
		HX_STACK_LINE(578)
		Float tmp273 = tmp253->set((int)10,tmp272);		HX_STACK_VAR(tmp273,"tmp273");
		HX_STACK_LINE(578)
		tmp273;
		HX_STACK_LINE(579)
		::openfl::_Vector::FloatVector tmp274 = this->rawData;		HX_STACK_VAR(tmp274,"tmp274");
		HX_STACK_LINE(579)
		Float tmp275 = d;		HX_STACK_VAR(tmp275,"tmp275");
		HX_STACK_LINE(579)
		Float tmp276 = -(tmp275);		HX_STACK_VAR(tmp276,"tmp276");
		HX_STACK_LINE(579)
		Float tmp277 = m11;		HX_STACK_VAR(tmp277,"tmp277");
		HX_STACK_LINE(579)
		Float tmp278 = (m22 * m34);		HX_STACK_VAR(tmp278,"tmp278");
		HX_STACK_LINE(579)
		Float tmp279 = (m32 * m24);		HX_STACK_VAR(tmp279,"tmp279");
		HX_STACK_LINE(579)
		Float tmp280 = (tmp278 - tmp279);		HX_STACK_VAR(tmp280,"tmp280");
		HX_STACK_LINE(579)
		Float tmp281 = (tmp277 * tmp280);		HX_STACK_VAR(tmp281,"tmp281");
		HX_STACK_LINE(579)
		Float tmp282 = m21;		HX_STACK_VAR(tmp282,"tmp282");
		HX_STACK_LINE(579)
		Float tmp283 = (m12 * m34);		HX_STACK_VAR(tmp283,"tmp283");
		HX_STACK_LINE(579)
		Float tmp284 = (m32 * m14);		HX_STACK_VAR(tmp284,"tmp284");
		HX_STACK_LINE(579)
		Float tmp285 = (tmp283 - tmp284);		HX_STACK_VAR(tmp285,"tmp285");
		HX_STACK_LINE(579)
		Float tmp286 = (tmp282 * tmp285);		HX_STACK_VAR(tmp286,"tmp286");
		HX_STACK_LINE(579)
		Float tmp287 = (tmp281 - tmp286);		HX_STACK_VAR(tmp287,"tmp287");
		HX_STACK_LINE(579)
		Float tmp288 = m31;		HX_STACK_VAR(tmp288,"tmp288");
		HX_STACK_LINE(579)
		Float tmp289 = (m12 * m24);		HX_STACK_VAR(tmp289,"tmp289");
		HX_STACK_LINE(579)
		Float tmp290 = (m22 * m14);		HX_STACK_VAR(tmp290,"tmp290");
		HX_STACK_LINE(579)
		Float tmp291 = (tmp289 - tmp290);		HX_STACK_VAR(tmp291,"tmp291");
		HX_STACK_LINE(579)
		Float tmp292 = (tmp288 * tmp291);		HX_STACK_VAR(tmp292,"tmp292");
		HX_STACK_LINE(579)
		Float tmp293 = (tmp287 + tmp292);		HX_STACK_VAR(tmp293,"tmp293");
		HX_STACK_LINE(579)
		Float tmp294 = (tmp276 * tmp293);		HX_STACK_VAR(tmp294,"tmp294");
		HX_STACK_LINE(579)
		Float tmp295 = tmp274->set((int)11,tmp294);		HX_STACK_VAR(tmp295,"tmp295");
		HX_STACK_LINE(579)
		tmp295;
		HX_STACK_LINE(580)
		::openfl::_Vector::FloatVector tmp296 = this->rawData;		HX_STACK_VAR(tmp296,"tmp296");
		HX_STACK_LINE(580)
		Float tmp297 = d;		HX_STACK_VAR(tmp297,"tmp297");
		HX_STACK_LINE(580)
		Float tmp298 = -(tmp297);		HX_STACK_VAR(tmp298,"tmp298");
		HX_STACK_LINE(580)
		Float tmp299 = m21;		HX_STACK_VAR(tmp299,"tmp299");
		HX_STACK_LINE(580)
		Float tmp300 = (m32 * m43);		HX_STACK_VAR(tmp300,"tmp300");
		HX_STACK_LINE(580)
		Float tmp301 = (m42 * m33);		HX_STACK_VAR(tmp301,"tmp301");
		HX_STACK_LINE(580)
		Float tmp302 = (tmp300 - tmp301);		HX_STACK_VAR(tmp302,"tmp302");
		HX_STACK_LINE(580)
		Float tmp303 = (tmp299 * tmp302);		HX_STACK_VAR(tmp303,"tmp303");
		HX_STACK_LINE(580)
		Float tmp304 = m31;		HX_STACK_VAR(tmp304,"tmp304");
		HX_STACK_LINE(580)
		Float tmp305 = (m22 * m43);		HX_STACK_VAR(tmp305,"tmp305");
		HX_STACK_LINE(580)
		Float tmp306 = (m42 * m23);		HX_STACK_VAR(tmp306,"tmp306");
		HX_STACK_LINE(580)
		Float tmp307 = (tmp305 - tmp306);		HX_STACK_VAR(tmp307,"tmp307");
		HX_STACK_LINE(580)
		Float tmp308 = (tmp304 * tmp307);		HX_STACK_VAR(tmp308,"tmp308");
		HX_STACK_LINE(580)
		Float tmp309 = (tmp303 - tmp308);		HX_STACK_VAR(tmp309,"tmp309");
		HX_STACK_LINE(580)
		Float tmp310 = m41;		HX_STACK_VAR(tmp310,"tmp310");
		HX_STACK_LINE(580)
		Float tmp311 = (m22 * m33);		HX_STACK_VAR(tmp311,"tmp311");
		HX_STACK_LINE(580)
		Float tmp312 = (m32 * m23);		HX_STACK_VAR(tmp312,"tmp312");
		HX_STACK_LINE(580)
		Float tmp313 = (tmp311 - tmp312);		HX_STACK_VAR(tmp313,"tmp313");
		HX_STACK_LINE(580)
		Float tmp314 = (tmp310 * tmp313);		HX_STACK_VAR(tmp314,"tmp314");
		HX_STACK_LINE(580)
		Float tmp315 = (tmp309 + tmp314);		HX_STACK_VAR(tmp315,"tmp315");
		HX_STACK_LINE(580)
		Float tmp316 = (tmp298 * tmp315);		HX_STACK_VAR(tmp316,"tmp316");
		HX_STACK_LINE(580)
		Float tmp317 = tmp296->set((int)12,tmp316);		HX_STACK_VAR(tmp317,"tmp317");
		HX_STACK_LINE(580)
		tmp317;
		HX_STACK_LINE(581)
		::openfl::_Vector::FloatVector tmp318 = this->rawData;		HX_STACK_VAR(tmp318,"tmp318");
		HX_STACK_LINE(581)
		Float tmp319 = d;		HX_STACK_VAR(tmp319,"tmp319");
		HX_STACK_LINE(581)
		Float tmp320 = m11;		HX_STACK_VAR(tmp320,"tmp320");
		HX_STACK_LINE(581)
		Float tmp321 = (m32 * m43);		HX_STACK_VAR(tmp321,"tmp321");
		HX_STACK_LINE(581)
		Float tmp322 = (m42 * m33);		HX_STACK_VAR(tmp322,"tmp322");
		HX_STACK_LINE(581)
		Float tmp323 = (tmp321 - tmp322);		HX_STACK_VAR(tmp323,"tmp323");
		HX_STACK_LINE(581)
		Float tmp324 = (tmp320 * tmp323);		HX_STACK_VAR(tmp324,"tmp324");
		HX_STACK_LINE(581)
		Float tmp325 = m31;		HX_STACK_VAR(tmp325,"tmp325");
		HX_STACK_LINE(581)
		Float tmp326 = (m12 * m43);		HX_STACK_VAR(tmp326,"tmp326");
		HX_STACK_LINE(581)
		Float tmp327 = (m42 * m13);		HX_STACK_VAR(tmp327,"tmp327");
		HX_STACK_LINE(581)
		Float tmp328 = (tmp326 - tmp327);		HX_STACK_VAR(tmp328,"tmp328");
		HX_STACK_LINE(581)
		Float tmp329 = (tmp325 * tmp328);		HX_STACK_VAR(tmp329,"tmp329");
		HX_STACK_LINE(581)
		Float tmp330 = (tmp324 - tmp329);		HX_STACK_VAR(tmp330,"tmp330");
		HX_STACK_LINE(581)
		Float tmp331 = m41;		HX_STACK_VAR(tmp331,"tmp331");
		HX_STACK_LINE(581)
		Float tmp332 = (m12 * m33);		HX_STACK_VAR(tmp332,"tmp332");
		HX_STACK_LINE(581)
		Float tmp333 = (m32 * m13);		HX_STACK_VAR(tmp333,"tmp333");
		HX_STACK_LINE(581)
		Float tmp334 = (tmp332 - tmp333);		HX_STACK_VAR(tmp334,"tmp334");
		HX_STACK_LINE(581)
		Float tmp335 = (tmp331 * tmp334);		HX_STACK_VAR(tmp335,"tmp335");
		HX_STACK_LINE(581)
		Float tmp336 = (tmp330 + tmp335);		HX_STACK_VAR(tmp336,"tmp336");
		HX_STACK_LINE(581)
		Float tmp337 = (tmp319 * tmp336);		HX_STACK_VAR(tmp337,"tmp337");
		HX_STACK_LINE(581)
		Float tmp338 = tmp318->set((int)13,tmp337);		HX_STACK_VAR(tmp338,"tmp338");
		HX_STACK_LINE(581)
		tmp338;
		HX_STACK_LINE(582)
		::openfl::_Vector::FloatVector tmp339 = this->rawData;		HX_STACK_VAR(tmp339,"tmp339");
		HX_STACK_LINE(582)
		Float tmp340 = d;		HX_STACK_VAR(tmp340,"tmp340");
		HX_STACK_LINE(582)
		Float tmp341 = -(tmp340);		HX_STACK_VAR(tmp341,"tmp341");
		HX_STACK_LINE(582)
		Float tmp342 = m11;		HX_STACK_VAR(tmp342,"tmp342");
		HX_STACK_LINE(582)
		Float tmp343 = (m22 * m43);		HX_STACK_VAR(tmp343,"tmp343");
		HX_STACK_LINE(582)
		Float tmp344 = (m42 * m23);		HX_STACK_VAR(tmp344,"tmp344");
		HX_STACK_LINE(582)
		Float tmp345 = (tmp343 - tmp344);		HX_STACK_VAR(tmp345,"tmp345");
		HX_STACK_LINE(582)
		Float tmp346 = (tmp342 * tmp345);		HX_STACK_VAR(tmp346,"tmp346");
		HX_STACK_LINE(582)
		Float tmp347 = m21;		HX_STACK_VAR(tmp347,"tmp347");
		HX_STACK_LINE(582)
		Float tmp348 = (m12 * m43);		HX_STACK_VAR(tmp348,"tmp348");
		HX_STACK_LINE(582)
		Float tmp349 = (m42 * m13);		HX_STACK_VAR(tmp349,"tmp349");
		HX_STACK_LINE(582)
		Float tmp350 = (tmp348 - tmp349);		HX_STACK_VAR(tmp350,"tmp350");
		HX_STACK_LINE(582)
		Float tmp351 = (tmp347 * tmp350);		HX_STACK_VAR(tmp351,"tmp351");
		HX_STACK_LINE(582)
		Float tmp352 = (tmp346 - tmp351);		HX_STACK_VAR(tmp352,"tmp352");
		HX_STACK_LINE(582)
		Float tmp353 = m41;		HX_STACK_VAR(tmp353,"tmp353");
		HX_STACK_LINE(582)
		Float tmp354 = (m12 * m23);		HX_STACK_VAR(tmp354,"tmp354");
		HX_STACK_LINE(582)
		Float tmp355 = (m22 * m13);		HX_STACK_VAR(tmp355,"tmp355");
		HX_STACK_LINE(582)
		Float tmp356 = (tmp354 - tmp355);		HX_STACK_VAR(tmp356,"tmp356");
		HX_STACK_LINE(582)
		Float tmp357 = (tmp353 * tmp356);		HX_STACK_VAR(tmp357,"tmp357");
		HX_STACK_LINE(582)
		Float tmp358 = (tmp352 + tmp357);		HX_STACK_VAR(tmp358,"tmp358");
		HX_STACK_LINE(582)
		Float tmp359 = (tmp341 * tmp358);		HX_STACK_VAR(tmp359,"tmp359");
		HX_STACK_LINE(582)
		Float tmp360 = tmp339->set((int)14,tmp359);		HX_STACK_VAR(tmp360,"tmp360");
		HX_STACK_LINE(582)
		tmp360;
		HX_STACK_LINE(583)
		::openfl::_Vector::FloatVector tmp361 = this->rawData;		HX_STACK_VAR(tmp361,"tmp361");
		HX_STACK_LINE(583)
		Float tmp362 = d;		HX_STACK_VAR(tmp362,"tmp362");
		HX_STACK_LINE(583)
		Float tmp363 = m11;		HX_STACK_VAR(tmp363,"tmp363");
		HX_STACK_LINE(583)
		Float tmp364 = (m22 * m33);		HX_STACK_VAR(tmp364,"tmp364");
		HX_STACK_LINE(583)
		Float tmp365 = (m32 * m23);		HX_STACK_VAR(tmp365,"tmp365");
		HX_STACK_LINE(583)
		Float tmp366 = (tmp364 - tmp365);		HX_STACK_VAR(tmp366,"tmp366");
		HX_STACK_LINE(583)
		Float tmp367 = (tmp363 * tmp366);		HX_STACK_VAR(tmp367,"tmp367");
		HX_STACK_LINE(583)
		Float tmp368 = m21;		HX_STACK_VAR(tmp368,"tmp368");
		HX_STACK_LINE(583)
		Float tmp369 = (m12 * m33);		HX_STACK_VAR(tmp369,"tmp369");
		HX_STACK_LINE(583)
		Float tmp370 = (m32 * m13);		HX_STACK_VAR(tmp370,"tmp370");
		HX_STACK_LINE(583)
		Float tmp371 = (tmp369 - tmp370);		HX_STACK_VAR(tmp371,"tmp371");
		HX_STACK_LINE(583)
		Float tmp372 = (tmp368 * tmp371);		HX_STACK_VAR(tmp372,"tmp372");
		HX_STACK_LINE(583)
		Float tmp373 = (tmp367 - tmp372);		HX_STACK_VAR(tmp373,"tmp373");
		HX_STACK_LINE(583)
		Float tmp374 = m31;		HX_STACK_VAR(tmp374,"tmp374");
		HX_STACK_LINE(583)
		Float tmp375 = (m12 * m23);		HX_STACK_VAR(tmp375,"tmp375");
		HX_STACK_LINE(583)
		Float tmp376 = (m22 * m13);		HX_STACK_VAR(tmp376,"tmp376");
		HX_STACK_LINE(583)
		Float tmp377 = (tmp375 - tmp376);		HX_STACK_VAR(tmp377,"tmp377");
		HX_STACK_LINE(583)
		Float tmp378 = (tmp374 * tmp377);		HX_STACK_VAR(tmp378,"tmp378");
		HX_STACK_LINE(583)
		Float tmp379 = (tmp373 + tmp378);		HX_STACK_VAR(tmp379,"tmp379");
		HX_STACK_LINE(583)
		Float tmp380 = (tmp362 * tmp379);		HX_STACK_VAR(tmp380,"tmp380");
		HX_STACK_LINE(583)
		Float tmp381 = tmp361->set((int)15,tmp380);		HX_STACK_VAR(tmp381,"tmp381");
		HX_STACK_LINE(583)
		tmp381;
	}
	HX_STACK_LINE(587)
	bool tmp5 = invertable;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(587)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC0(Matrix3D_obj,invert,return )

Void Matrix3D_obj::pointAt( ::openfl::geom::Vector3D pos,::openfl::geom::Vector3D at,::openfl::geom::Vector3D up){
{
		HX_STACK_FRAME("openfl.geom.Matrix3D","pointAt",0xd7900cdb,"openfl.geom.Matrix3D.pointAt","openfl/geom/Matrix3D.hx",592,0x3acce238)
		HX_STACK_THIS(this)
		HX_STACK_ARG(pos,"pos")
		HX_STACK_ARG(at,"at")
		HX_STACK_ARG(up,"up")
		HX_STACK_LINE(594)
		bool tmp = (at == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(594)
		if ((tmp)){
			HX_STACK_LINE(596)
			::openfl::geom::Vector3D tmp1 = ::openfl::geom::Vector3D_obj::__new((int)0,(int)0,(int)-1,null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(596)
			at = tmp1;
		}
		HX_STACK_LINE(600)
		bool tmp1 = (up == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(600)
		if ((tmp1)){
			HX_STACK_LINE(602)
			::openfl::geom::Vector3D tmp2 = ::openfl::geom::Vector3D_obj::__new((int)0,(int)-1,(int)0,null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(602)
			up = tmp2;
		}
		HX_STACK_LINE(606)
		::openfl::geom::Vector3D tmp2 = pos;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(606)
		::openfl::geom::Vector3D tmp3 = at->subtract(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(606)
		::openfl::geom::Vector3D dir = tmp3;		HX_STACK_VAR(dir,"dir");
		HX_STACK_LINE(607)
		::openfl::geom::Vector3D tmp4 = up->clone();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(607)
		::openfl::geom::Vector3D vup = tmp4;		HX_STACK_VAR(vup,"vup");
		HX_STACK_LINE(608)
		::openfl::geom::Vector3D right;		HX_STACK_VAR(right,"right");
		HX_STACK_LINE(610)
		dir->normalize();
		HX_STACK_LINE(611)
		vup->normalize();
		HX_STACK_LINE(613)
		::openfl::geom::Vector3D tmp5 = dir->clone();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(613)
		::openfl::geom::Vector3D dir2 = tmp5;		HX_STACK_VAR(dir2,"dir2");
		HX_STACK_LINE(614)
		::openfl::geom::Vector3D tmp6 = dir;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(614)
		Float tmp7 = vup->dotProduct(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(614)
		dir2->scaleBy(tmp7);
		HX_STACK_LINE(616)
		::openfl::geom::Vector3D tmp8 = dir2;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(616)
		::openfl::geom::Vector3D tmp9 = vup->subtract(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(616)
		vup = tmp9;
		HX_STACK_LINE(618)
		Float tmp10 = vup->get_length();		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(618)
		bool tmp11 = (tmp10 > (int)0);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(618)
		if ((tmp11)){
			HX_STACK_LINE(620)
			vup->normalize();
		}
		else{
			HX_STACK_LINE(624)
			bool tmp12 = (dir->x != (int)0);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(624)
			if ((tmp12)){
				HX_STACK_LINE(626)
				Float tmp13 = dir->y;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(626)
				Float tmp14 = -(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(626)
				Float tmp15 = dir->x;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(626)
				::openfl::geom::Vector3D tmp16 = ::openfl::geom::Vector3D_obj::__new(tmp14,tmp15,(int)0,null());		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(626)
				vup = tmp16;
			}
			else{
				HX_STACK_LINE(630)
				::openfl::geom::Vector3D tmp13 = ::openfl::geom::Vector3D_obj::__new((int)1,(int)0,(int)0,null());		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(630)
				vup = tmp13;
			}
		}
		HX_STACK_LINE(636)
		::openfl::geom::Vector3D tmp12 = dir;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(636)
		::openfl::geom::Vector3D tmp13 = vup->crossProduct(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(636)
		right = tmp13;
		HX_STACK_LINE(637)
		right->normalize();
		HX_STACK_LINE(639)
		::openfl::_Vector::FloatVector tmp14 = this->rawData;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(639)
		Float tmp15 = right->x;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(639)
		Float tmp16 = tmp14->set((int)0,tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(639)
		tmp16;
		HX_STACK_LINE(640)
		::openfl::_Vector::FloatVector tmp17 = this->rawData;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(640)
		Float tmp18 = right->y;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(640)
		Float tmp19 = tmp17->set((int)4,tmp18);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(640)
		tmp19;
		HX_STACK_LINE(641)
		::openfl::_Vector::FloatVector tmp20 = this->rawData;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(641)
		Float tmp21 = right->z;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(641)
		Float tmp22 = tmp20->set((int)8,tmp21);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(641)
		tmp22;
		HX_STACK_LINE(642)
		::openfl::_Vector::FloatVector tmp23 = this->rawData;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(642)
		Float tmp24 = tmp23->set((int)12,((Float)0.0));		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(642)
		tmp24;
		HX_STACK_LINE(643)
		::openfl::_Vector::FloatVector tmp25 = this->rawData;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(643)
		Float tmp26 = vup->x;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(643)
		Float tmp27 = tmp25->set((int)1,tmp26);		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(643)
		tmp27;
		HX_STACK_LINE(644)
		::openfl::_Vector::FloatVector tmp28 = this->rawData;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(644)
		Float tmp29 = vup->y;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(644)
		Float tmp30 = tmp28->set((int)5,tmp29);		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(644)
		tmp30;
		HX_STACK_LINE(645)
		::openfl::_Vector::FloatVector tmp31 = this->rawData;		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(645)
		Float tmp32 = vup->z;		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(645)
		Float tmp33 = tmp31->set((int)9,tmp32);		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(645)
		tmp33;
		HX_STACK_LINE(646)
		::openfl::_Vector::FloatVector tmp34 = this->rawData;		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(646)
		Float tmp35 = tmp34->set((int)13,((Float)0.0));		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(646)
		tmp35;
		HX_STACK_LINE(647)
		::openfl::_Vector::FloatVector tmp36 = this->rawData;		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(647)
		Float tmp37 = dir->x;		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(647)
		Float tmp38 = tmp36->set((int)2,tmp37);		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(647)
		tmp38;
		HX_STACK_LINE(648)
		::openfl::_Vector::FloatVector tmp39 = this->rawData;		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(648)
		Float tmp40 = dir->y;		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(648)
		Float tmp41 = tmp39->set((int)6,tmp40);		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(648)
		tmp41;
		HX_STACK_LINE(649)
		::openfl::_Vector::FloatVector tmp42 = this->rawData;		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(649)
		Float tmp43 = dir->z;		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(649)
		Float tmp44 = tmp42->set((int)10,tmp43);		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(649)
		tmp44;
		HX_STACK_LINE(650)
		::openfl::_Vector::FloatVector tmp45 = this->rawData;		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(650)
		Float tmp46 = tmp45->set((int)14,((Float)0.0));		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(650)
		tmp46;
		HX_STACK_LINE(651)
		::openfl::_Vector::FloatVector tmp47 = this->rawData;		HX_STACK_VAR(tmp47,"tmp47");
		HX_STACK_LINE(651)
		Float tmp48 = pos->x;		HX_STACK_VAR(tmp48,"tmp48");
		HX_STACK_LINE(651)
		Float tmp49 = tmp47->set((int)3,tmp48);		HX_STACK_VAR(tmp49,"tmp49");
		HX_STACK_LINE(651)
		tmp49;
		HX_STACK_LINE(652)
		::openfl::_Vector::FloatVector tmp50 = this->rawData;		HX_STACK_VAR(tmp50,"tmp50");
		HX_STACK_LINE(652)
		Float tmp51 = pos->y;		HX_STACK_VAR(tmp51,"tmp51");
		HX_STACK_LINE(652)
		Float tmp52 = tmp50->set((int)7,tmp51);		HX_STACK_VAR(tmp52,"tmp52");
		HX_STACK_LINE(652)
		tmp52;
		HX_STACK_LINE(653)
		::openfl::_Vector::FloatVector tmp53 = this->rawData;		HX_STACK_VAR(tmp53,"tmp53");
		HX_STACK_LINE(653)
		Float tmp54 = pos->z;		HX_STACK_VAR(tmp54,"tmp54");
		HX_STACK_LINE(653)
		Float tmp55 = tmp53->set((int)11,tmp54);		HX_STACK_VAR(tmp55,"tmp55");
		HX_STACK_LINE(653)
		tmp55;
		HX_STACK_LINE(654)
		::openfl::_Vector::FloatVector tmp56 = this->rawData;		HX_STACK_VAR(tmp56,"tmp56");
		HX_STACK_LINE(654)
		Float tmp57 = tmp56->set((int)15,((Float)1.0));		HX_STACK_VAR(tmp57,"tmp57");
		HX_STACK_LINE(654)
		tmp57;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Matrix3D_obj,pointAt,(void))

Void Matrix3D_obj::prepend( ::openfl::geom::Matrix3D rhs){
{
		HX_STACK_FRAME("openfl.geom.Matrix3D","prepend",0xbe4f0286,"openfl.geom.Matrix3D.prepend","openfl/geom/Matrix3D.hx",659,0x3acce238)
		HX_STACK_THIS(this)
		HX_STACK_ARG(rhs,"rhs")
		HX_STACK_LINE(661)
		Float tmp = rhs->rawData->get((int)0);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(661)
		Float m111 = tmp;		HX_STACK_VAR(m111,"m111");
		HX_STACK_LINE(661)
		Float tmp1 = rhs->rawData->get((int)4);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(661)
		Float m121 = tmp1;		HX_STACK_VAR(m121,"m121");
		HX_STACK_LINE(661)
		Float tmp2 = rhs->rawData->get((int)8);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(661)
		Float m131 = tmp2;		HX_STACK_VAR(m131,"m131");
		HX_STACK_LINE(661)
		Float tmp3 = rhs->rawData->get((int)12);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(661)
		Float m141 = tmp3;		HX_STACK_VAR(m141,"m141");
		HX_STACK_LINE(662)
		Float tmp4 = rhs->rawData->get((int)1);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(662)
		Float m112 = tmp4;		HX_STACK_VAR(m112,"m112");
		HX_STACK_LINE(662)
		Float tmp5 = rhs->rawData->get((int)5);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(662)
		Float m122 = tmp5;		HX_STACK_VAR(m122,"m122");
		HX_STACK_LINE(662)
		Float tmp6 = rhs->rawData->get((int)9);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(662)
		Float m132 = tmp6;		HX_STACK_VAR(m132,"m132");
		HX_STACK_LINE(662)
		Float tmp7 = rhs->rawData->get((int)13);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(662)
		Float m142 = tmp7;		HX_STACK_VAR(m142,"m142");
		HX_STACK_LINE(663)
		Float tmp8 = rhs->rawData->get((int)2);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(663)
		Float m113 = tmp8;		HX_STACK_VAR(m113,"m113");
		HX_STACK_LINE(663)
		Float tmp9 = rhs->rawData->get((int)6);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(663)
		Float m123 = tmp9;		HX_STACK_VAR(m123,"m123");
		HX_STACK_LINE(663)
		Float tmp10 = rhs->rawData->get((int)10);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(663)
		Float m133 = tmp10;		HX_STACK_VAR(m133,"m133");
		HX_STACK_LINE(663)
		Float tmp11 = rhs->rawData->get((int)14);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(663)
		Float m143 = tmp11;		HX_STACK_VAR(m143,"m143");
		HX_STACK_LINE(664)
		Float tmp12 = rhs->rawData->get((int)3);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(664)
		Float m114 = tmp12;		HX_STACK_VAR(m114,"m114");
		HX_STACK_LINE(664)
		Float tmp13 = rhs->rawData->get((int)7);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(664)
		Float m124 = tmp13;		HX_STACK_VAR(m124,"m124");
		HX_STACK_LINE(664)
		Float tmp14 = rhs->rawData->get((int)11);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(664)
		Float m134 = tmp14;		HX_STACK_VAR(m134,"m134");
		HX_STACK_LINE(664)
		Float tmp15 = rhs->rawData->get((int)15);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(664)
		Float m144 = tmp15;		HX_STACK_VAR(m144,"m144");
		HX_STACK_LINE(665)
		::openfl::_Vector::FloatVector tmp16 = this->rawData;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(665)
		Float tmp17 = tmp16->get((int)0);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(665)
		Float m211 = tmp17;		HX_STACK_VAR(m211,"m211");
		HX_STACK_LINE(665)
		::openfl::_Vector::FloatVector tmp18 = this->rawData;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(665)
		Float tmp19 = tmp18->get((int)4);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(665)
		Float m221 = tmp19;		HX_STACK_VAR(m221,"m221");
		HX_STACK_LINE(665)
		::openfl::_Vector::FloatVector tmp20 = this->rawData;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(665)
		Float tmp21 = tmp20->get((int)8);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(665)
		Float m231 = tmp21;		HX_STACK_VAR(m231,"m231");
		HX_STACK_LINE(665)
		::openfl::_Vector::FloatVector tmp22 = this->rawData;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(665)
		Float tmp23 = tmp22->get((int)12);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(665)
		Float m241 = tmp23;		HX_STACK_VAR(m241,"m241");
		HX_STACK_LINE(666)
		::openfl::_Vector::FloatVector tmp24 = this->rawData;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(666)
		Float tmp25 = tmp24->get((int)1);		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(666)
		Float m212 = tmp25;		HX_STACK_VAR(m212,"m212");
		HX_STACK_LINE(666)
		::openfl::_Vector::FloatVector tmp26 = this->rawData;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(666)
		Float tmp27 = tmp26->get((int)5);		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(666)
		Float m222 = tmp27;		HX_STACK_VAR(m222,"m222");
		HX_STACK_LINE(666)
		::openfl::_Vector::FloatVector tmp28 = this->rawData;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(666)
		Float tmp29 = tmp28->get((int)9);		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(666)
		Float m232 = tmp29;		HX_STACK_VAR(m232,"m232");
		HX_STACK_LINE(666)
		::openfl::_Vector::FloatVector tmp30 = this->rawData;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(666)
		Float tmp31 = tmp30->get((int)13);		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(666)
		Float m242 = tmp31;		HX_STACK_VAR(m242,"m242");
		HX_STACK_LINE(667)
		::openfl::_Vector::FloatVector tmp32 = this->rawData;		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(667)
		Float tmp33 = tmp32->get((int)2);		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(667)
		Float m213 = tmp33;		HX_STACK_VAR(m213,"m213");
		HX_STACK_LINE(667)
		::openfl::_Vector::FloatVector tmp34 = this->rawData;		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(667)
		Float tmp35 = tmp34->get((int)6);		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(667)
		Float m223 = tmp35;		HX_STACK_VAR(m223,"m223");
		HX_STACK_LINE(667)
		::openfl::_Vector::FloatVector tmp36 = this->rawData;		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(667)
		Float tmp37 = tmp36->get((int)10);		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(667)
		Float m233 = tmp37;		HX_STACK_VAR(m233,"m233");
		HX_STACK_LINE(667)
		::openfl::_Vector::FloatVector tmp38 = this->rawData;		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(667)
		Float tmp39 = tmp38->get((int)14);		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(667)
		Float m243 = tmp39;		HX_STACK_VAR(m243,"m243");
		HX_STACK_LINE(668)
		::openfl::_Vector::FloatVector tmp40 = this->rawData;		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(668)
		Float tmp41 = tmp40->get((int)3);		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(668)
		Float m214 = tmp41;		HX_STACK_VAR(m214,"m214");
		HX_STACK_LINE(668)
		::openfl::_Vector::FloatVector tmp42 = this->rawData;		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(668)
		Float tmp43 = tmp42->get((int)7);		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(668)
		Float m224 = tmp43;		HX_STACK_VAR(m224,"m224");
		HX_STACK_LINE(668)
		::openfl::_Vector::FloatVector tmp44 = this->rawData;		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(668)
		Float tmp45 = tmp44->get((int)11);		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(668)
		Float m234 = tmp45;		HX_STACK_VAR(m234,"m234");
		HX_STACK_LINE(668)
		::openfl::_Vector::FloatVector tmp46 = this->rawData;		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(668)
		Float tmp47 = tmp46->get((int)15);		HX_STACK_VAR(tmp47,"tmp47");
		HX_STACK_LINE(668)
		Float m244 = tmp47;		HX_STACK_VAR(m244,"m244");
		HX_STACK_LINE(670)
		::openfl::_Vector::FloatVector tmp48 = this->rawData;		HX_STACK_VAR(tmp48,"tmp48");
		HX_STACK_LINE(670)
		Float tmp49 = (m111 * m211);		HX_STACK_VAR(tmp49,"tmp49");
		HX_STACK_LINE(670)
		Float tmp50 = (m112 * m221);		HX_STACK_VAR(tmp50,"tmp50");
		HX_STACK_LINE(670)
		Float tmp51 = (tmp49 + tmp50);		HX_STACK_VAR(tmp51,"tmp51");
		HX_STACK_LINE(670)
		Float tmp52 = (m113 * m231);		HX_STACK_VAR(tmp52,"tmp52");
		HX_STACK_LINE(670)
		Float tmp53 = (tmp51 + tmp52);		HX_STACK_VAR(tmp53,"tmp53");
		HX_STACK_LINE(670)
		Float tmp54 = (m114 * m241);		HX_STACK_VAR(tmp54,"tmp54");
		HX_STACK_LINE(670)
		Float tmp55 = (tmp53 + tmp54);		HX_STACK_VAR(tmp55,"tmp55");
		HX_STACK_LINE(670)
		Float tmp56 = tmp48->set((int)0,tmp55);		HX_STACK_VAR(tmp56,"tmp56");
		HX_STACK_LINE(670)
		tmp56;
		HX_STACK_LINE(671)
		::openfl::_Vector::FloatVector tmp57 = this->rawData;		HX_STACK_VAR(tmp57,"tmp57");
		HX_STACK_LINE(671)
		Float tmp58 = (m111 * m212);		HX_STACK_VAR(tmp58,"tmp58");
		HX_STACK_LINE(671)
		Float tmp59 = (m112 * m222);		HX_STACK_VAR(tmp59,"tmp59");
		HX_STACK_LINE(671)
		Float tmp60 = (tmp58 + tmp59);		HX_STACK_VAR(tmp60,"tmp60");
		HX_STACK_LINE(671)
		Float tmp61 = (m113 * m232);		HX_STACK_VAR(tmp61,"tmp61");
		HX_STACK_LINE(671)
		Float tmp62 = (tmp60 + tmp61);		HX_STACK_VAR(tmp62,"tmp62");
		HX_STACK_LINE(671)
		Float tmp63 = (m114 * m242);		HX_STACK_VAR(tmp63,"tmp63");
		HX_STACK_LINE(671)
		Float tmp64 = (tmp62 + tmp63);		HX_STACK_VAR(tmp64,"tmp64");
		HX_STACK_LINE(671)
		Float tmp65 = tmp57->set((int)1,tmp64);		HX_STACK_VAR(tmp65,"tmp65");
		HX_STACK_LINE(671)
		tmp65;
		HX_STACK_LINE(672)
		::openfl::_Vector::FloatVector tmp66 = this->rawData;		HX_STACK_VAR(tmp66,"tmp66");
		HX_STACK_LINE(672)
		Float tmp67 = (m111 * m213);		HX_STACK_VAR(tmp67,"tmp67");
		HX_STACK_LINE(672)
		Float tmp68 = (m112 * m223);		HX_STACK_VAR(tmp68,"tmp68");
		HX_STACK_LINE(672)
		Float tmp69 = (tmp67 + tmp68);		HX_STACK_VAR(tmp69,"tmp69");
		HX_STACK_LINE(672)
		Float tmp70 = (m113 * m233);		HX_STACK_VAR(tmp70,"tmp70");
		HX_STACK_LINE(672)
		Float tmp71 = (tmp69 + tmp70);		HX_STACK_VAR(tmp71,"tmp71");
		HX_STACK_LINE(672)
		Float tmp72 = (m114 * m243);		HX_STACK_VAR(tmp72,"tmp72");
		HX_STACK_LINE(672)
		Float tmp73 = (tmp71 + tmp72);		HX_STACK_VAR(tmp73,"tmp73");
		HX_STACK_LINE(672)
		Float tmp74 = tmp66->set((int)2,tmp73);		HX_STACK_VAR(tmp74,"tmp74");
		HX_STACK_LINE(672)
		tmp74;
		HX_STACK_LINE(673)
		::openfl::_Vector::FloatVector tmp75 = this->rawData;		HX_STACK_VAR(tmp75,"tmp75");
		HX_STACK_LINE(673)
		Float tmp76 = (m111 * m214);		HX_STACK_VAR(tmp76,"tmp76");
		HX_STACK_LINE(673)
		Float tmp77 = (m112 * m224);		HX_STACK_VAR(tmp77,"tmp77");
		HX_STACK_LINE(673)
		Float tmp78 = (tmp76 + tmp77);		HX_STACK_VAR(tmp78,"tmp78");
		HX_STACK_LINE(673)
		Float tmp79 = (m113 * m234);		HX_STACK_VAR(tmp79,"tmp79");
		HX_STACK_LINE(673)
		Float tmp80 = (tmp78 + tmp79);		HX_STACK_VAR(tmp80,"tmp80");
		HX_STACK_LINE(673)
		Float tmp81 = (m114 * m244);		HX_STACK_VAR(tmp81,"tmp81");
		HX_STACK_LINE(673)
		Float tmp82 = (tmp80 + tmp81);		HX_STACK_VAR(tmp82,"tmp82");
		HX_STACK_LINE(673)
		Float tmp83 = tmp75->set((int)3,tmp82);		HX_STACK_VAR(tmp83,"tmp83");
		HX_STACK_LINE(673)
		tmp83;
		HX_STACK_LINE(675)
		::openfl::_Vector::FloatVector tmp84 = this->rawData;		HX_STACK_VAR(tmp84,"tmp84");
		HX_STACK_LINE(675)
		Float tmp85 = (m121 * m211);		HX_STACK_VAR(tmp85,"tmp85");
		HX_STACK_LINE(675)
		Float tmp86 = (m122 * m221);		HX_STACK_VAR(tmp86,"tmp86");
		HX_STACK_LINE(675)
		Float tmp87 = (tmp85 + tmp86);		HX_STACK_VAR(tmp87,"tmp87");
		HX_STACK_LINE(675)
		Float tmp88 = (m123 * m231);		HX_STACK_VAR(tmp88,"tmp88");
		HX_STACK_LINE(675)
		Float tmp89 = (tmp87 + tmp88);		HX_STACK_VAR(tmp89,"tmp89");
		HX_STACK_LINE(675)
		Float tmp90 = (m124 * m241);		HX_STACK_VAR(tmp90,"tmp90");
		HX_STACK_LINE(675)
		Float tmp91 = (tmp89 + tmp90);		HX_STACK_VAR(tmp91,"tmp91");
		HX_STACK_LINE(675)
		Float tmp92 = tmp84->set((int)4,tmp91);		HX_STACK_VAR(tmp92,"tmp92");
		HX_STACK_LINE(675)
		tmp92;
		HX_STACK_LINE(676)
		::openfl::_Vector::FloatVector tmp93 = this->rawData;		HX_STACK_VAR(tmp93,"tmp93");
		HX_STACK_LINE(676)
		Float tmp94 = (m121 * m212);		HX_STACK_VAR(tmp94,"tmp94");
		HX_STACK_LINE(676)
		Float tmp95 = (m122 * m222);		HX_STACK_VAR(tmp95,"tmp95");
		HX_STACK_LINE(676)
		Float tmp96 = (tmp94 + tmp95);		HX_STACK_VAR(tmp96,"tmp96");
		HX_STACK_LINE(676)
		Float tmp97 = (m123 * m232);		HX_STACK_VAR(tmp97,"tmp97");
		HX_STACK_LINE(676)
		Float tmp98 = (tmp96 + tmp97);		HX_STACK_VAR(tmp98,"tmp98");
		HX_STACK_LINE(676)
		Float tmp99 = (m124 * m242);		HX_STACK_VAR(tmp99,"tmp99");
		HX_STACK_LINE(676)
		Float tmp100 = (tmp98 + tmp99);		HX_STACK_VAR(tmp100,"tmp100");
		HX_STACK_LINE(676)
		Float tmp101 = tmp93->set((int)5,tmp100);		HX_STACK_VAR(tmp101,"tmp101");
		HX_STACK_LINE(676)
		tmp101;
		HX_STACK_LINE(677)
		::openfl::_Vector::FloatVector tmp102 = this->rawData;		HX_STACK_VAR(tmp102,"tmp102");
		HX_STACK_LINE(677)
		Float tmp103 = (m121 * m213);		HX_STACK_VAR(tmp103,"tmp103");
		HX_STACK_LINE(677)
		Float tmp104 = (m122 * m223);		HX_STACK_VAR(tmp104,"tmp104");
		HX_STACK_LINE(677)
		Float tmp105 = (tmp103 + tmp104);		HX_STACK_VAR(tmp105,"tmp105");
		HX_STACK_LINE(677)
		Float tmp106 = (m123 * m233);		HX_STACK_VAR(tmp106,"tmp106");
		HX_STACK_LINE(677)
		Float tmp107 = (tmp105 + tmp106);		HX_STACK_VAR(tmp107,"tmp107");
		HX_STACK_LINE(677)
		Float tmp108 = (m124 * m243);		HX_STACK_VAR(tmp108,"tmp108");
		HX_STACK_LINE(677)
		Float tmp109 = (tmp107 + tmp108);		HX_STACK_VAR(tmp109,"tmp109");
		HX_STACK_LINE(677)
		Float tmp110 = tmp102->set((int)6,tmp109);		HX_STACK_VAR(tmp110,"tmp110");
		HX_STACK_LINE(677)
		tmp110;
		HX_STACK_LINE(678)
		::openfl::_Vector::FloatVector tmp111 = this->rawData;		HX_STACK_VAR(tmp111,"tmp111");
		HX_STACK_LINE(678)
		Float tmp112 = (m121 * m214);		HX_STACK_VAR(tmp112,"tmp112");
		HX_STACK_LINE(678)
		Float tmp113 = (m122 * m224);		HX_STACK_VAR(tmp113,"tmp113");
		HX_STACK_LINE(678)
		Float tmp114 = (tmp112 + tmp113);		HX_STACK_VAR(tmp114,"tmp114");
		HX_STACK_LINE(678)
		Float tmp115 = (m123 * m234);		HX_STACK_VAR(tmp115,"tmp115");
		HX_STACK_LINE(678)
		Float tmp116 = (tmp114 + tmp115);		HX_STACK_VAR(tmp116,"tmp116");
		HX_STACK_LINE(678)
		Float tmp117 = (m124 * m244);		HX_STACK_VAR(tmp117,"tmp117");
		HX_STACK_LINE(678)
		Float tmp118 = (tmp116 + tmp117);		HX_STACK_VAR(tmp118,"tmp118");
		HX_STACK_LINE(678)
		Float tmp119 = tmp111->set((int)7,tmp118);		HX_STACK_VAR(tmp119,"tmp119");
		HX_STACK_LINE(678)
		tmp119;
		HX_STACK_LINE(680)
		::openfl::_Vector::FloatVector tmp120 = this->rawData;		HX_STACK_VAR(tmp120,"tmp120");
		HX_STACK_LINE(680)
		Float tmp121 = (m131 * m211);		HX_STACK_VAR(tmp121,"tmp121");
		HX_STACK_LINE(680)
		Float tmp122 = (m132 * m221);		HX_STACK_VAR(tmp122,"tmp122");
		HX_STACK_LINE(680)
		Float tmp123 = (tmp121 + tmp122);		HX_STACK_VAR(tmp123,"tmp123");
		HX_STACK_LINE(680)
		Float tmp124 = (m133 * m231);		HX_STACK_VAR(tmp124,"tmp124");
		HX_STACK_LINE(680)
		Float tmp125 = (tmp123 + tmp124);		HX_STACK_VAR(tmp125,"tmp125");
		HX_STACK_LINE(680)
		Float tmp126 = (m134 * m241);		HX_STACK_VAR(tmp126,"tmp126");
		HX_STACK_LINE(680)
		Float tmp127 = (tmp125 + tmp126);		HX_STACK_VAR(tmp127,"tmp127");
		HX_STACK_LINE(680)
		Float tmp128 = tmp120->set((int)8,tmp127);		HX_STACK_VAR(tmp128,"tmp128");
		HX_STACK_LINE(680)
		tmp128;
		HX_STACK_LINE(681)
		::openfl::_Vector::FloatVector tmp129 = this->rawData;		HX_STACK_VAR(tmp129,"tmp129");
		HX_STACK_LINE(681)
		Float tmp130 = (m131 * m212);		HX_STACK_VAR(tmp130,"tmp130");
		HX_STACK_LINE(681)
		Float tmp131 = (m132 * m222);		HX_STACK_VAR(tmp131,"tmp131");
		HX_STACK_LINE(681)
		Float tmp132 = (tmp130 + tmp131);		HX_STACK_VAR(tmp132,"tmp132");
		HX_STACK_LINE(681)
		Float tmp133 = (m133 * m232);		HX_STACK_VAR(tmp133,"tmp133");
		HX_STACK_LINE(681)
		Float tmp134 = (tmp132 + tmp133);		HX_STACK_VAR(tmp134,"tmp134");
		HX_STACK_LINE(681)
		Float tmp135 = (m134 * m242);		HX_STACK_VAR(tmp135,"tmp135");
		HX_STACK_LINE(681)
		Float tmp136 = (tmp134 + tmp135);		HX_STACK_VAR(tmp136,"tmp136");
		HX_STACK_LINE(681)
		Float tmp137 = tmp129->set((int)9,tmp136);		HX_STACK_VAR(tmp137,"tmp137");
		HX_STACK_LINE(681)
		tmp137;
		HX_STACK_LINE(682)
		::openfl::_Vector::FloatVector tmp138 = this->rawData;		HX_STACK_VAR(tmp138,"tmp138");
		HX_STACK_LINE(682)
		Float tmp139 = (m131 * m213);		HX_STACK_VAR(tmp139,"tmp139");
		HX_STACK_LINE(682)
		Float tmp140 = (m132 * m223);		HX_STACK_VAR(tmp140,"tmp140");
		HX_STACK_LINE(682)
		Float tmp141 = (tmp139 + tmp140);		HX_STACK_VAR(tmp141,"tmp141");
		HX_STACK_LINE(682)
		Float tmp142 = (m133 * m233);		HX_STACK_VAR(tmp142,"tmp142");
		HX_STACK_LINE(682)
		Float tmp143 = (tmp141 + tmp142);		HX_STACK_VAR(tmp143,"tmp143");
		HX_STACK_LINE(682)
		Float tmp144 = (m134 * m243);		HX_STACK_VAR(tmp144,"tmp144");
		HX_STACK_LINE(682)
		Float tmp145 = (tmp143 + tmp144);		HX_STACK_VAR(tmp145,"tmp145");
		HX_STACK_LINE(682)
		Float tmp146 = tmp138->set((int)10,tmp145);		HX_STACK_VAR(tmp146,"tmp146");
		HX_STACK_LINE(682)
		tmp146;
		HX_STACK_LINE(683)
		::openfl::_Vector::FloatVector tmp147 = this->rawData;		HX_STACK_VAR(tmp147,"tmp147");
		HX_STACK_LINE(683)
		Float tmp148 = (m131 * m214);		HX_STACK_VAR(tmp148,"tmp148");
		HX_STACK_LINE(683)
		Float tmp149 = (m132 * m224);		HX_STACK_VAR(tmp149,"tmp149");
		HX_STACK_LINE(683)
		Float tmp150 = (tmp148 + tmp149);		HX_STACK_VAR(tmp150,"tmp150");
		HX_STACK_LINE(683)
		Float tmp151 = (m133 * m234);		HX_STACK_VAR(tmp151,"tmp151");
		HX_STACK_LINE(683)
		Float tmp152 = (tmp150 + tmp151);		HX_STACK_VAR(tmp152,"tmp152");
		HX_STACK_LINE(683)
		Float tmp153 = (m134 * m244);		HX_STACK_VAR(tmp153,"tmp153");
		HX_STACK_LINE(683)
		Float tmp154 = (tmp152 + tmp153);		HX_STACK_VAR(tmp154,"tmp154");
		HX_STACK_LINE(683)
		Float tmp155 = tmp147->set((int)11,tmp154);		HX_STACK_VAR(tmp155,"tmp155");
		HX_STACK_LINE(683)
		tmp155;
		HX_STACK_LINE(685)
		::openfl::_Vector::FloatVector tmp156 = this->rawData;		HX_STACK_VAR(tmp156,"tmp156");
		HX_STACK_LINE(685)
		Float tmp157 = (m141 * m211);		HX_STACK_VAR(tmp157,"tmp157");
		HX_STACK_LINE(685)
		Float tmp158 = (m142 * m221);		HX_STACK_VAR(tmp158,"tmp158");
		HX_STACK_LINE(685)
		Float tmp159 = (tmp157 + tmp158);		HX_STACK_VAR(tmp159,"tmp159");
		HX_STACK_LINE(685)
		Float tmp160 = (m143 * m231);		HX_STACK_VAR(tmp160,"tmp160");
		HX_STACK_LINE(685)
		Float tmp161 = (tmp159 + tmp160);		HX_STACK_VAR(tmp161,"tmp161");
		HX_STACK_LINE(685)
		Float tmp162 = (m144 * m241);		HX_STACK_VAR(tmp162,"tmp162");
		HX_STACK_LINE(685)
		Float tmp163 = (tmp161 + tmp162);		HX_STACK_VAR(tmp163,"tmp163");
		HX_STACK_LINE(685)
		Float tmp164 = tmp156->set((int)12,tmp163);		HX_STACK_VAR(tmp164,"tmp164");
		HX_STACK_LINE(685)
		tmp164;
		HX_STACK_LINE(686)
		::openfl::_Vector::FloatVector tmp165 = this->rawData;		HX_STACK_VAR(tmp165,"tmp165");
		HX_STACK_LINE(686)
		Float tmp166 = (m141 * m212);		HX_STACK_VAR(tmp166,"tmp166");
		HX_STACK_LINE(686)
		Float tmp167 = (m142 * m222);		HX_STACK_VAR(tmp167,"tmp167");
		HX_STACK_LINE(686)
		Float tmp168 = (tmp166 + tmp167);		HX_STACK_VAR(tmp168,"tmp168");
		HX_STACK_LINE(686)
		Float tmp169 = (m143 * m232);		HX_STACK_VAR(tmp169,"tmp169");
		HX_STACK_LINE(686)
		Float tmp170 = (tmp168 + tmp169);		HX_STACK_VAR(tmp170,"tmp170");
		HX_STACK_LINE(686)
		Float tmp171 = (m144 * m242);		HX_STACK_VAR(tmp171,"tmp171");
		HX_STACK_LINE(686)
		Float tmp172 = (tmp170 + tmp171);		HX_STACK_VAR(tmp172,"tmp172");
		HX_STACK_LINE(686)
		Float tmp173 = tmp165->set((int)13,tmp172);		HX_STACK_VAR(tmp173,"tmp173");
		HX_STACK_LINE(686)
		tmp173;
		HX_STACK_LINE(687)
		::openfl::_Vector::FloatVector tmp174 = this->rawData;		HX_STACK_VAR(tmp174,"tmp174");
		HX_STACK_LINE(687)
		Float tmp175 = (m141 * m213);		HX_STACK_VAR(tmp175,"tmp175");
		HX_STACK_LINE(687)
		Float tmp176 = (m142 * m223);		HX_STACK_VAR(tmp176,"tmp176");
		HX_STACK_LINE(687)
		Float tmp177 = (tmp175 + tmp176);		HX_STACK_VAR(tmp177,"tmp177");
		HX_STACK_LINE(687)
		Float tmp178 = (m143 * m233);		HX_STACK_VAR(tmp178,"tmp178");
		HX_STACK_LINE(687)
		Float tmp179 = (tmp177 + tmp178);		HX_STACK_VAR(tmp179,"tmp179");
		HX_STACK_LINE(687)
		Float tmp180 = (m144 * m243);		HX_STACK_VAR(tmp180,"tmp180");
		HX_STACK_LINE(687)
		Float tmp181 = (tmp179 + tmp180);		HX_STACK_VAR(tmp181,"tmp181");
		HX_STACK_LINE(687)
		Float tmp182 = tmp174->set((int)14,tmp181);		HX_STACK_VAR(tmp182,"tmp182");
		HX_STACK_LINE(687)
		tmp182;
		HX_STACK_LINE(688)
		::openfl::_Vector::FloatVector tmp183 = this->rawData;		HX_STACK_VAR(tmp183,"tmp183");
		HX_STACK_LINE(688)
		Float tmp184 = (m141 * m214);		HX_STACK_VAR(tmp184,"tmp184");
		HX_STACK_LINE(688)
		Float tmp185 = (m142 * m224);		HX_STACK_VAR(tmp185,"tmp185");
		HX_STACK_LINE(688)
		Float tmp186 = (tmp184 + tmp185);		HX_STACK_VAR(tmp186,"tmp186");
		HX_STACK_LINE(688)
		Float tmp187 = (m143 * m234);		HX_STACK_VAR(tmp187,"tmp187");
		HX_STACK_LINE(688)
		Float tmp188 = (tmp186 + tmp187);		HX_STACK_VAR(tmp188,"tmp188");
		HX_STACK_LINE(688)
		Float tmp189 = (m144 * m244);		HX_STACK_VAR(tmp189,"tmp189");
		HX_STACK_LINE(688)
		Float tmp190 = (tmp188 + tmp189);		HX_STACK_VAR(tmp190,"tmp190");
		HX_STACK_LINE(688)
		Float tmp191 = tmp183->set((int)15,tmp190);		HX_STACK_VAR(tmp191,"tmp191");
		HX_STACK_LINE(688)
		tmp191;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix3D_obj,prepend,(void))

Void Matrix3D_obj::prependRotation( Float degrees,::openfl::geom::Vector3D axis,::openfl::geom::Vector3D pivotPoint){
{
		HX_STACK_FRAME("openfl.geom.Matrix3D","prependRotation",0x54b5f1e4,"openfl.geom.Matrix3D.prependRotation","openfl/geom/Matrix3D.hx",693,0x3acce238)
		HX_STACK_THIS(this)
		HX_STACK_ARG(degrees,"degrees")
		HX_STACK_ARG(axis,"axis")
		HX_STACK_ARG(pivotPoint,"pivotPoint")
		HX_STACK_LINE(695)
		Float tx;		HX_STACK_VAR(tx,"tx");
		HX_STACK_LINE(695)
		Float ty;		HX_STACK_VAR(ty,"ty");
		HX_STACK_LINE(695)
		Float tz;		HX_STACK_VAR(tz,"tz");
		HX_STACK_LINE(696)
		Float tmp = tz = (int)0;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(696)
		Float tmp1 = ty = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(696)
		tx = tmp1;
		HX_STACK_LINE(697)
		bool tmp2 = (pivotPoint != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(697)
		if ((tmp2)){
			HX_STACK_LINE(698)
			tx = pivotPoint->x;
			HX_STACK_LINE(699)
			ty = pivotPoint->y;
			HX_STACK_LINE(700)
			tz = pivotPoint->z;
		}
		HX_STACK_LINE(702)
		Float tmp3 = degrees;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(702)
		Float tmp4 = ::Math_obj::PI;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(702)
		Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(702)
		Float tmp6 = (Float(tmp5) / Float((int)180));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(702)
		Float radian = tmp6;		HX_STACK_VAR(radian,"radian");
		HX_STACK_LINE(703)
		Float tmp7 = radian;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(703)
		Float tmp8 = ::Math_obj::cos(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(703)
		Float cos = tmp8;		HX_STACK_VAR(cos,"cos");
		HX_STACK_LINE(704)
		Float tmp9 = radian;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(704)
		Float tmp10 = ::Math_obj::sin(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(704)
		Float sin = tmp10;		HX_STACK_VAR(sin,"sin");
		HX_STACK_LINE(705)
		Float x = axis->x;		HX_STACK_VAR(x,"x");
		HX_STACK_LINE(706)
		Float y = axis->y;		HX_STACK_VAR(y,"y");
		HX_STACK_LINE(707)
		Float z = axis->z;		HX_STACK_VAR(z,"z");
		HX_STACK_LINE(708)
		Float tmp11 = (x * x);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(708)
		Float x2 = tmp11;		HX_STACK_VAR(x2,"x2");
		HX_STACK_LINE(709)
		Float tmp12 = (y * y);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(709)
		Float y2 = tmp12;		HX_STACK_VAR(y2,"y2");
		HX_STACK_LINE(710)
		Float tmp13 = (z * z);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(710)
		Float z2 = tmp13;		HX_STACK_VAR(z2,"z2");
		HX_STACK_LINE(711)
		Float tmp14 = (x2 + y2);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(711)
		Float tmp15 = z2;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(711)
		Float tmp16 = (tmp14 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(711)
		Float ls = tmp16;		HX_STACK_VAR(ls,"ls");
		HX_STACK_LINE(712)
		bool tmp17 = (ls != (int)0);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(712)
		if ((tmp17)){
			HX_STACK_LINE(713)
			Float tmp18 = ls;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(713)
			Float tmp19 = ::Math_obj::sqrt(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(713)
			Float l = tmp19;		HX_STACK_VAR(l,"l");
			HX_STACK_LINE(714)
			hx::DivEq(x,l);
			HX_STACK_LINE(715)
			hx::DivEq(y,l);
			HX_STACK_LINE(716)
			hx::DivEq(z,l);
			HX_STACK_LINE(717)
			hx::DivEq(x2,ls);
			HX_STACK_LINE(718)
			hx::DivEq(y2,ls);
			HX_STACK_LINE(719)
			hx::DivEq(z2,ls);
		}
		HX_STACK_LINE(721)
		Float tmp18 = ((int)1 - cos);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(721)
		Float ccos = tmp18;		HX_STACK_VAR(ccos,"ccos");
		HX_STACK_LINE(722)
		::openfl::geom::Matrix3D tmp19 = ::openfl::geom::Matrix3D_obj::__new(null());		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(722)
		::openfl::geom::Matrix3D m = tmp19;		HX_STACK_VAR(m,"m");
		HX_STACK_LINE(723)
		::openfl::_Vector::FloatVector d = m->rawData;		HX_STACK_VAR(d,"d");
		HX_STACK_LINE(724)
		Float tmp20 = x2;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(724)
		Float tmp21 = (y2 + z2);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(724)
		Float tmp22 = cos;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(724)
		Float tmp23 = (tmp21 * tmp22);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(724)
		Float tmp24 = (tmp20 + tmp23);		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(724)
		Float tmp25 = d->set((int)0,tmp24);		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(724)
		tmp25;
		HX_STACK_LINE(725)
		Float tmp26 = (x * y);		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(725)
		Float tmp27 = ccos;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(725)
		Float tmp28 = (tmp26 * tmp27);		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(725)
		Float tmp29 = (z * sin);		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(725)
		Float tmp30 = (tmp28 + tmp29);		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(725)
		Float tmp31 = d->set((int)1,tmp30);		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(725)
		tmp31;
		HX_STACK_LINE(726)
		Float tmp32 = (x * z);		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(726)
		Float tmp33 = ccos;		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(726)
		Float tmp34 = (tmp32 * tmp33);		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(726)
		Float tmp35 = (y * sin);		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(726)
		Float tmp36 = (tmp34 - tmp35);		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(726)
		Float tmp37 = d->set((int)2,tmp36);		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(726)
		tmp37;
		HX_STACK_LINE(727)
		Float tmp38 = (x * y);		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(727)
		Float tmp39 = ccos;		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(727)
		Float tmp40 = (tmp38 * tmp39);		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(727)
		Float tmp41 = (z * sin);		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(727)
		Float tmp42 = (tmp40 - tmp41);		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(727)
		Float tmp43 = d->set((int)4,tmp42);		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(727)
		tmp43;
		HX_STACK_LINE(728)
		Float tmp44 = y2;		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(728)
		Float tmp45 = (x2 + z2);		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(728)
		Float tmp46 = cos;		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(728)
		Float tmp47 = (tmp45 * tmp46);		HX_STACK_VAR(tmp47,"tmp47");
		HX_STACK_LINE(728)
		Float tmp48 = (tmp44 + tmp47);		HX_STACK_VAR(tmp48,"tmp48");
		HX_STACK_LINE(728)
		Float tmp49 = d->set((int)5,tmp48);		HX_STACK_VAR(tmp49,"tmp49");
		HX_STACK_LINE(728)
		tmp49;
		HX_STACK_LINE(729)
		Float tmp50 = (y * z);		HX_STACK_VAR(tmp50,"tmp50");
		HX_STACK_LINE(729)
		Float tmp51 = ccos;		HX_STACK_VAR(tmp51,"tmp51");
		HX_STACK_LINE(729)
		Float tmp52 = (tmp50 * tmp51);		HX_STACK_VAR(tmp52,"tmp52");
		HX_STACK_LINE(729)
		Float tmp53 = (x * sin);		HX_STACK_VAR(tmp53,"tmp53");
		HX_STACK_LINE(729)
		Float tmp54 = (tmp52 + tmp53);		HX_STACK_VAR(tmp54,"tmp54");
		HX_STACK_LINE(729)
		Float tmp55 = d->set((int)6,tmp54);		HX_STACK_VAR(tmp55,"tmp55");
		HX_STACK_LINE(729)
		tmp55;
		HX_STACK_LINE(730)
		Float tmp56 = (x * z);		HX_STACK_VAR(tmp56,"tmp56");
		HX_STACK_LINE(730)
		Float tmp57 = ccos;		HX_STACK_VAR(tmp57,"tmp57");
		HX_STACK_LINE(730)
		Float tmp58 = (tmp56 * tmp57);		HX_STACK_VAR(tmp58,"tmp58");
		HX_STACK_LINE(730)
		Float tmp59 = (y * sin);		HX_STACK_VAR(tmp59,"tmp59");
		HX_STACK_LINE(730)
		Float tmp60 = (tmp58 + tmp59);		HX_STACK_VAR(tmp60,"tmp60");
		HX_STACK_LINE(730)
		Float tmp61 = d->set((int)8,tmp60);		HX_STACK_VAR(tmp61,"tmp61");
		HX_STACK_LINE(730)
		tmp61;
		HX_STACK_LINE(731)
		Float tmp62 = (y * z);		HX_STACK_VAR(tmp62,"tmp62");
		HX_STACK_LINE(731)
		Float tmp63 = ccos;		HX_STACK_VAR(tmp63,"tmp63");
		HX_STACK_LINE(731)
		Float tmp64 = (tmp62 * tmp63);		HX_STACK_VAR(tmp64,"tmp64");
		HX_STACK_LINE(731)
		Float tmp65 = (x * sin);		HX_STACK_VAR(tmp65,"tmp65");
		HX_STACK_LINE(731)
		Float tmp66 = (tmp64 - tmp65);		HX_STACK_VAR(tmp66,"tmp66");
		HX_STACK_LINE(731)
		Float tmp67 = d->set((int)9,tmp66);		HX_STACK_VAR(tmp67,"tmp67");
		HX_STACK_LINE(731)
		tmp67;
		HX_STACK_LINE(732)
		Float tmp68 = z2;		HX_STACK_VAR(tmp68,"tmp68");
		HX_STACK_LINE(732)
		Float tmp69 = (x2 + y2);		HX_STACK_VAR(tmp69,"tmp69");
		HX_STACK_LINE(732)
		Float tmp70 = cos;		HX_STACK_VAR(tmp70,"tmp70");
		HX_STACK_LINE(732)
		Float tmp71 = (tmp69 * tmp70);		HX_STACK_VAR(tmp71,"tmp71");
		HX_STACK_LINE(732)
		Float tmp72 = (tmp68 + tmp71);		HX_STACK_VAR(tmp72,"tmp72");
		HX_STACK_LINE(732)
		Float tmp73 = d->set((int)10,tmp72);		HX_STACK_VAR(tmp73,"tmp73");
		HX_STACK_LINE(732)
		tmp73;
		HX_STACK_LINE(733)
		Float tmp74 = tx;		HX_STACK_VAR(tmp74,"tmp74");
		HX_STACK_LINE(733)
		Float tmp75 = (y2 + z2);		HX_STACK_VAR(tmp75,"tmp75");
		HX_STACK_LINE(733)
		Float tmp76 = (tmp74 * tmp75);		HX_STACK_VAR(tmp76,"tmp76");
		HX_STACK_LINE(733)
		Float tmp77 = x;		HX_STACK_VAR(tmp77,"tmp77");
		HX_STACK_LINE(733)
		Float tmp78 = (ty * y);		HX_STACK_VAR(tmp78,"tmp78");
		HX_STACK_LINE(733)
		Float tmp79 = (tz * z);		HX_STACK_VAR(tmp79,"tmp79");
		HX_STACK_LINE(733)
		Float tmp80 = (tmp78 + tmp79);		HX_STACK_VAR(tmp80,"tmp80");
		HX_STACK_LINE(733)
		Float tmp81 = (tmp77 * tmp80);		HX_STACK_VAR(tmp81,"tmp81");
		HX_STACK_LINE(733)
		Float tmp82 = (tmp76 - tmp81);		HX_STACK_VAR(tmp82,"tmp82");
		HX_STACK_LINE(733)
		Float tmp83 = ccos;		HX_STACK_VAR(tmp83,"tmp83");
		HX_STACK_LINE(733)
		Float tmp84 = (tmp82 * tmp83);		HX_STACK_VAR(tmp84,"tmp84");
		HX_STACK_LINE(733)
		Float tmp85 = (ty * z);		HX_STACK_VAR(tmp85,"tmp85");
		HX_STACK_LINE(733)
		Float tmp86 = (tz * y);		HX_STACK_VAR(tmp86,"tmp86");
		HX_STACK_LINE(733)
		Float tmp87 = (tmp85 - tmp86);		HX_STACK_VAR(tmp87,"tmp87");
		HX_STACK_LINE(733)
		Float tmp88 = sin;		HX_STACK_VAR(tmp88,"tmp88");
		HX_STACK_LINE(733)
		Float tmp89 = (tmp87 * tmp88);		HX_STACK_VAR(tmp89,"tmp89");
		HX_STACK_LINE(733)
		Float tmp90 = (tmp84 + tmp89);		HX_STACK_VAR(tmp90,"tmp90");
		HX_STACK_LINE(733)
		Float tmp91 = d->set((int)12,tmp90);		HX_STACK_VAR(tmp91,"tmp91");
		HX_STACK_LINE(733)
		tmp91;
		HX_STACK_LINE(734)
		Float tmp92 = ty;		HX_STACK_VAR(tmp92,"tmp92");
		HX_STACK_LINE(734)
		Float tmp93 = (x2 + z2);		HX_STACK_VAR(tmp93,"tmp93");
		HX_STACK_LINE(734)
		Float tmp94 = (tmp92 * tmp93);		HX_STACK_VAR(tmp94,"tmp94");
		HX_STACK_LINE(734)
		Float tmp95 = y;		HX_STACK_VAR(tmp95,"tmp95");
		HX_STACK_LINE(734)
		Float tmp96 = (tx * x);		HX_STACK_VAR(tmp96,"tmp96");
		HX_STACK_LINE(734)
		Float tmp97 = (tz * z);		HX_STACK_VAR(tmp97,"tmp97");
		HX_STACK_LINE(734)
		Float tmp98 = (tmp96 + tmp97);		HX_STACK_VAR(tmp98,"tmp98");
		HX_STACK_LINE(734)
		Float tmp99 = (tmp95 * tmp98);		HX_STACK_VAR(tmp99,"tmp99");
		HX_STACK_LINE(734)
		Float tmp100 = (tmp94 - tmp99);		HX_STACK_VAR(tmp100,"tmp100");
		HX_STACK_LINE(734)
		Float tmp101 = ccos;		HX_STACK_VAR(tmp101,"tmp101");
		HX_STACK_LINE(734)
		Float tmp102 = (tmp100 * tmp101);		HX_STACK_VAR(tmp102,"tmp102");
		HX_STACK_LINE(734)
		Float tmp103 = (tz * x);		HX_STACK_VAR(tmp103,"tmp103");
		HX_STACK_LINE(734)
		Float tmp104 = (tx * z);		HX_STACK_VAR(tmp104,"tmp104");
		HX_STACK_LINE(734)
		Float tmp105 = (tmp103 - tmp104);		HX_STACK_VAR(tmp105,"tmp105");
		HX_STACK_LINE(734)
		Float tmp106 = sin;		HX_STACK_VAR(tmp106,"tmp106");
		HX_STACK_LINE(734)
		Float tmp107 = (tmp105 * tmp106);		HX_STACK_VAR(tmp107,"tmp107");
		HX_STACK_LINE(734)
		Float tmp108 = (tmp102 + tmp107);		HX_STACK_VAR(tmp108,"tmp108");
		HX_STACK_LINE(734)
		Float tmp109 = d->set((int)13,tmp108);		HX_STACK_VAR(tmp109,"tmp109");
		HX_STACK_LINE(734)
		tmp109;
		HX_STACK_LINE(735)
		Float tmp110 = tz;		HX_STACK_VAR(tmp110,"tmp110");
		HX_STACK_LINE(735)
		Float tmp111 = (x2 + y2);		HX_STACK_VAR(tmp111,"tmp111");
		HX_STACK_LINE(735)
		Float tmp112 = (tmp110 * tmp111);		HX_STACK_VAR(tmp112,"tmp112");
		HX_STACK_LINE(735)
		Float tmp113 = z;		HX_STACK_VAR(tmp113,"tmp113");
		HX_STACK_LINE(735)
		Float tmp114 = (tx * x);		HX_STACK_VAR(tmp114,"tmp114");
		HX_STACK_LINE(735)
		Float tmp115 = (ty * y);		HX_STACK_VAR(tmp115,"tmp115");
		HX_STACK_LINE(735)
		Float tmp116 = (tmp114 + tmp115);		HX_STACK_VAR(tmp116,"tmp116");
		HX_STACK_LINE(735)
		Float tmp117 = (tmp113 * tmp116);		HX_STACK_VAR(tmp117,"tmp117");
		HX_STACK_LINE(735)
		Float tmp118 = (tmp112 - tmp117);		HX_STACK_VAR(tmp118,"tmp118");
		HX_STACK_LINE(735)
		Float tmp119 = ccos;		HX_STACK_VAR(tmp119,"tmp119");
		HX_STACK_LINE(735)
		Float tmp120 = (tmp118 * tmp119);		HX_STACK_VAR(tmp120,"tmp120");
		HX_STACK_LINE(735)
		Float tmp121 = (tx * y);		HX_STACK_VAR(tmp121,"tmp121");
		HX_STACK_LINE(735)
		Float tmp122 = (ty * x);		HX_STACK_VAR(tmp122,"tmp122");
		HX_STACK_LINE(735)
		Float tmp123 = (tmp121 - tmp122);		HX_STACK_VAR(tmp123,"tmp123");
		HX_STACK_LINE(735)
		Float tmp124 = sin;		HX_STACK_VAR(tmp124,"tmp124");
		HX_STACK_LINE(735)
		Float tmp125 = (tmp123 * tmp124);		HX_STACK_VAR(tmp125,"tmp125");
		HX_STACK_LINE(735)
		Float tmp126 = (tmp120 + tmp125);		HX_STACK_VAR(tmp126,"tmp126");
		HX_STACK_LINE(735)
		Float tmp127 = d->set((int)14,tmp126);		HX_STACK_VAR(tmp127,"tmp127");
		HX_STACK_LINE(735)
		tmp127;
		HX_STACK_LINE(737)
		::openfl::geom::Matrix3D tmp128 = m;		HX_STACK_VAR(tmp128,"tmp128");
		HX_STACK_LINE(737)
		this->prepend(tmp128);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Matrix3D_obj,prependRotation,(void))

Void Matrix3D_obj::prependScale( Float xScale,Float yScale,Float zScale){
{
		HX_STACK_FRAME("openfl.geom.Matrix3D","prependScale",0x59d85624,"openfl.geom.Matrix3D.prependScale","openfl/geom/Matrix3D.hx",742,0x3acce238)
		HX_STACK_THIS(this)
		HX_STACK_ARG(xScale,"xScale")
		HX_STACK_ARG(yScale,"yScale")
		HX_STACK_ARG(zScale,"zScale")
		HX_STACK_LINE(744)
		::openfl::_Vector::FloatVector tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(744)
		{
			HX_STACK_LINE(744)
			cpp::ArrayBase a = cpp::ArrayBase_obj::__new().Add(xScale).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(yScale).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(zScale).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)1.0));		HX_STACK_VAR(a,"a");
			HX_STACK_LINE(744)
			::openfl::_Vector::FloatVector tmp1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(744)
			{
				HX_STACK_LINE(744)
				int length = null();		HX_STACK_VAR(length,"length");
				HX_STACK_LINE(744)
				bool fixed = null();		HX_STACK_VAR(fixed,"fixed");
				HX_STACK_LINE(744)
				::openfl::_Vector::FloatVector tmp2 = ::openfl::_Vector::FloatVector_obj::__new(length,fixed,null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(744)
				::openfl::_Vector::FloatVector tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(744)
				tmp1 = tmp3;
			}
			HX_STACK_LINE(744)
			::openfl::_Vector::FloatVector vector = tmp1;		HX_STACK_VAR(vector,"vector");
			HX_STACK_LINE(744)
			{
				HX_STACK_LINE(744)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(744)
				int _g = a->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(744)
				while((true)){
					HX_STACK_LINE(744)
					bool tmp2 = (_g1 < _g);		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(744)
					bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(744)
					if ((tmp3)){
						HX_STACK_LINE(744)
						break;
					}
					HX_STACK_LINE(744)
					int tmp4 = (_g1)++;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(744)
					int i = tmp4;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(744)
					int tmp5 = i;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(744)
					Dynamic tmp6 = a->__GetItem(i);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(744)
					Float tmp7 = ((Float)(tmp6));		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(744)
					Float tmp8 = vector->set(tmp5,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(744)
					tmp8;
				}
			}
			HX_STACK_LINE(744)
			tmp = vector;
		}
		HX_STACK_LINE(744)
		::openfl::geom::Matrix3D tmp1 = ::openfl::geom::Matrix3D_obj::__new(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(744)
		this->prepend(tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Matrix3D_obj,prependScale,(void))

Void Matrix3D_obj::prependTranslation( Float x,Float y,Float z){
{
		HX_STACK_FRAME("openfl.geom.Matrix3D","prependTranslation",0x2df4680b,"openfl.geom.Matrix3D.prependTranslation","openfl/geom/Matrix3D.hx",749,0x3acce238)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(z,"z")
		HX_STACK_LINE(751)
		::openfl::geom::Matrix3D tmp = ::openfl::geom::Matrix3D_obj::__new(null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(751)
		::openfl::geom::Matrix3D m = tmp;		HX_STACK_VAR(m,"m");
		HX_STACK_LINE(752)
		::openfl::geom::Vector3D tmp1 = ::openfl::geom::Vector3D_obj::__new(x,y,z,null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(752)
		m->set_position(tmp1);
		HX_STACK_LINE(753)
		::openfl::geom::Matrix3D tmp2 = m;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(753)
		this->prepend(tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Matrix3D_obj,prependTranslation,(void))

bool Matrix3D_obj::recompose( ::openfl::_Vector::ObjectVector components,Dynamic orientationStyle){
	HX_STACK_FRAME("openfl.geom.Matrix3D","recompose",0xd355bb37,"openfl.geom.Matrix3D.recompose","openfl/geom/Matrix3D.hx",758,0x3acce238)
	HX_STACK_THIS(this)
	HX_STACK_ARG(components,"components")
	HX_STACK_ARG(orientationStyle,"orientationStyle")
	HX_STACK_LINE(760)
	int tmp = components->get_length();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(760)
	bool tmp1 = (tmp < (int)3);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(760)
	bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(760)
	bool tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(760)
	bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(760)
	if ((tmp3)){
		HX_STACK_LINE(760)
		::openfl::geom::Vector3D tmp5 = components->get((int)2);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(760)
		::openfl::geom::Vector3D tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(760)
		::openfl::geom::Vector3D tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(760)
		Float tmp8 = tmp7->x;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(760)
		Float tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(760)
		Float tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(760)
		tmp4 = (tmp10 == (int)0);
	}
	else{
		HX_STACK_LINE(760)
		tmp4 = true;
	}
	HX_STACK_LINE(760)
	bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(760)
	bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(760)
	bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(760)
	if ((tmp6)){
		HX_STACK_LINE(760)
		::openfl::geom::Vector3D tmp8 = components->get((int)2);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(760)
		::openfl::geom::Vector3D tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(760)
		::openfl::geom::Vector3D tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(760)
		Float tmp11 = tmp10->y;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(760)
		Float tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(760)
		Float tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(760)
		tmp7 = (tmp13 == (int)0);
	}
	else{
		HX_STACK_LINE(760)
		tmp7 = true;
	}
	HX_STACK_LINE(760)
	bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(760)
	bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(760)
	if ((tmp8)){
		HX_STACK_LINE(760)
		::openfl::geom::Vector3D tmp10 = components->get((int)2);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(760)
		::openfl::geom::Vector3D tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(760)
		Float tmp12 = tmp11->z;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(760)
		Float tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(760)
		tmp9 = (tmp13 == (int)0);
	}
	else{
		HX_STACK_LINE(760)
		tmp9 = true;
	}
	HX_STACK_LINE(760)
	if ((tmp9)){
		HX_STACK_LINE(762)
		return false;
	}
	HX_STACK_LINE(766)
	bool tmp10 = (orientationStyle == null());		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(766)
	if ((tmp10)){
		HX_STACK_LINE(768)
		orientationStyle = ((Dynamic)((int)1));
	}
	HX_STACK_LINE(772)
	this->identity();
	HX_STACK_LINE(774)
	Array< Float > scale = Array_obj< Float >::__new();		HX_STACK_VAR(scale,"scale");
	HX_STACK_LINE(775)
	::openfl::geom::Vector3D tmp11 = components->get((int)2);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(775)
	Float tmp12 = tmp11->x;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(775)
	Float tmp13 = scale[(int)2] = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(775)
	Float tmp14 = scale[(int)1] = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(775)
	scale[(int)0] = tmp14;
	HX_STACK_LINE(776)
	::openfl::geom::Vector3D tmp15 = components->get((int)2);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(776)
	Float tmp16 = tmp15->y;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(776)
	Float tmp17 = scale[(int)6] = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(776)
	Float tmp18 = scale[(int)5] = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(776)
	scale[(int)4] = tmp18;
	HX_STACK_LINE(777)
	::openfl::geom::Vector3D tmp19 = components->get((int)2);		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(777)
	Float tmp20 = tmp19->z;		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(777)
	Float tmp21 = scale[(int)10] = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(777)
	Float tmp22 = scale[(int)9] = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(777)
	scale[(int)8] = tmp22;
	HX_STACK_LINE(779)
	bool tmp23 = (orientationStyle != null());		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(779)
	if ((tmp23)){
		HX_STACK_LINE(779)
		Dynamic tmp24 = orientationStyle;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(779)
		switch( (int)(tmp24)){
			case (int)1: {
				HX_STACK_LINE(783)
				::openfl::geom::Vector3D tmp25 = components->get((int)1);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(783)
				Float tmp26 = tmp25->x;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(783)
				Float tmp27 = ::Math_obj::cos(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(783)
				Float cx = tmp27;		HX_STACK_VAR(cx,"cx");
				HX_STACK_LINE(784)
				::openfl::geom::Vector3D tmp28 = components->get((int)1);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(784)
				Float tmp29 = tmp28->y;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(784)
				Float tmp30 = ::Math_obj::cos(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(784)
				Float cy = tmp30;		HX_STACK_VAR(cy,"cy");
				HX_STACK_LINE(785)
				::openfl::geom::Vector3D tmp31 = components->get((int)1);		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(785)
				Float tmp32 = tmp31->z;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(785)
				Float tmp33 = ::Math_obj::cos(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(785)
				Float cz = tmp33;		HX_STACK_VAR(cz,"cz");
				HX_STACK_LINE(786)
				::openfl::geom::Vector3D tmp34 = components->get((int)1);		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(786)
				Float tmp35 = tmp34->x;		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(786)
				Float tmp36 = ::Math_obj::sin(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(786)
				Float sx = tmp36;		HX_STACK_VAR(sx,"sx");
				HX_STACK_LINE(787)
				::openfl::geom::Vector3D tmp37 = components->get((int)1);		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(787)
				Float tmp38 = tmp37->y;		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(787)
				Float tmp39 = ::Math_obj::sin(tmp38);		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(787)
				Float sy = tmp39;		HX_STACK_VAR(sy,"sy");
				HX_STACK_LINE(788)
				::openfl::geom::Vector3D tmp40 = components->get((int)1);		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(788)
				Float tmp41 = tmp40->z;		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(788)
				Float tmp42 = ::Math_obj::sin(tmp41);		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(788)
				Float sz = tmp42;		HX_STACK_VAR(sz,"sz");
				HX_STACK_LINE(790)
				::openfl::_Vector::FloatVector tmp43 = this->rawData;		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(790)
				Float tmp44 = (cy * cz);		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(790)
				Float tmp45 = scale->__get((int)0);		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(790)
				Float tmp46 = (tmp44 * tmp45);		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(790)
				Float tmp47 = tmp43->set((int)0,tmp46);		HX_STACK_VAR(tmp47,"tmp47");
				HX_STACK_LINE(790)
				tmp47;
				HX_STACK_LINE(791)
				::openfl::_Vector::FloatVector tmp48 = this->rawData;		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(791)
				Float tmp49 = (cy * sz);		HX_STACK_VAR(tmp49,"tmp49");
				HX_STACK_LINE(791)
				Float tmp50 = scale->__get((int)1);		HX_STACK_VAR(tmp50,"tmp50");
				HX_STACK_LINE(791)
				Float tmp51 = (tmp49 * tmp50);		HX_STACK_VAR(tmp51,"tmp51");
				HX_STACK_LINE(791)
				Float tmp52 = tmp48->set((int)1,tmp51);		HX_STACK_VAR(tmp52,"tmp52");
				HX_STACK_LINE(791)
				tmp52;
				HX_STACK_LINE(792)
				::openfl::_Vector::FloatVector tmp53 = this->rawData;		HX_STACK_VAR(tmp53,"tmp53");
				HX_STACK_LINE(792)
				Float tmp54 = sy;		HX_STACK_VAR(tmp54,"tmp54");
				HX_STACK_LINE(792)
				Float tmp55 = -(tmp54);		HX_STACK_VAR(tmp55,"tmp55");
				HX_STACK_LINE(792)
				Float tmp56 = scale->__get((int)2);		HX_STACK_VAR(tmp56,"tmp56");
				HX_STACK_LINE(792)
				Float tmp57 = (tmp55 * tmp56);		HX_STACK_VAR(tmp57,"tmp57");
				HX_STACK_LINE(792)
				Float tmp58 = tmp53->set((int)2,tmp57);		HX_STACK_VAR(tmp58,"tmp58");
				HX_STACK_LINE(792)
				tmp58;
				HX_STACK_LINE(793)
				::openfl::_Vector::FloatVector tmp59 = this->rawData;		HX_STACK_VAR(tmp59,"tmp59");
				HX_STACK_LINE(793)
				Float tmp60 = tmp59->set((int)3,(int)0);		HX_STACK_VAR(tmp60,"tmp60");
				HX_STACK_LINE(793)
				tmp60;
				HX_STACK_LINE(794)
				::openfl::_Vector::FloatVector tmp61 = this->rawData;		HX_STACK_VAR(tmp61,"tmp61");
				HX_STACK_LINE(794)
				Float tmp62 = (sx * sy);		HX_STACK_VAR(tmp62,"tmp62");
				HX_STACK_LINE(794)
				Float tmp63 = cz;		HX_STACK_VAR(tmp63,"tmp63");
				HX_STACK_LINE(794)
				Float tmp64 = (tmp62 * tmp63);		HX_STACK_VAR(tmp64,"tmp64");
				HX_STACK_LINE(794)
				Float tmp65 = (cx * sz);		HX_STACK_VAR(tmp65,"tmp65");
				HX_STACK_LINE(794)
				Float tmp66 = (tmp64 - tmp65);		HX_STACK_VAR(tmp66,"tmp66");
				HX_STACK_LINE(794)
				Float tmp67 = scale->__get((int)4);		HX_STACK_VAR(tmp67,"tmp67");
				HX_STACK_LINE(794)
				Float tmp68 = (tmp66 * tmp67);		HX_STACK_VAR(tmp68,"tmp68");
				HX_STACK_LINE(794)
				Float tmp69 = tmp61->set((int)4,tmp68);		HX_STACK_VAR(tmp69,"tmp69");
				HX_STACK_LINE(794)
				tmp69;
				HX_STACK_LINE(795)
				::openfl::_Vector::FloatVector tmp70 = this->rawData;		HX_STACK_VAR(tmp70,"tmp70");
				HX_STACK_LINE(795)
				Float tmp71 = (sx * sy);		HX_STACK_VAR(tmp71,"tmp71");
				HX_STACK_LINE(795)
				Float tmp72 = sz;		HX_STACK_VAR(tmp72,"tmp72");
				HX_STACK_LINE(795)
				Float tmp73 = (tmp71 * tmp72);		HX_STACK_VAR(tmp73,"tmp73");
				HX_STACK_LINE(795)
				Float tmp74 = (cx * cz);		HX_STACK_VAR(tmp74,"tmp74");
				HX_STACK_LINE(795)
				Float tmp75 = (tmp73 + tmp74);		HX_STACK_VAR(tmp75,"tmp75");
				HX_STACK_LINE(795)
				Float tmp76 = scale->__get((int)5);		HX_STACK_VAR(tmp76,"tmp76");
				HX_STACK_LINE(795)
				Float tmp77 = (tmp75 * tmp76);		HX_STACK_VAR(tmp77,"tmp77");
				HX_STACK_LINE(795)
				Float tmp78 = tmp70->set((int)5,tmp77);		HX_STACK_VAR(tmp78,"tmp78");
				HX_STACK_LINE(795)
				tmp78;
				HX_STACK_LINE(796)
				::openfl::_Vector::FloatVector tmp79 = this->rawData;		HX_STACK_VAR(tmp79,"tmp79");
				HX_STACK_LINE(796)
				Float tmp80 = (sx * cy);		HX_STACK_VAR(tmp80,"tmp80");
				HX_STACK_LINE(796)
				Float tmp81 = scale->__get((int)6);		HX_STACK_VAR(tmp81,"tmp81");
				HX_STACK_LINE(796)
				Float tmp82 = (tmp80 * tmp81);		HX_STACK_VAR(tmp82,"tmp82");
				HX_STACK_LINE(796)
				Float tmp83 = tmp79->set((int)6,tmp82);		HX_STACK_VAR(tmp83,"tmp83");
				HX_STACK_LINE(796)
				tmp83;
				HX_STACK_LINE(797)
				::openfl::_Vector::FloatVector tmp84 = this->rawData;		HX_STACK_VAR(tmp84,"tmp84");
				HX_STACK_LINE(797)
				Float tmp85 = tmp84->set((int)7,(int)0);		HX_STACK_VAR(tmp85,"tmp85");
				HX_STACK_LINE(797)
				tmp85;
				HX_STACK_LINE(798)
				::openfl::_Vector::FloatVector tmp86 = this->rawData;		HX_STACK_VAR(tmp86,"tmp86");
				HX_STACK_LINE(798)
				Float tmp87 = (cx * sy);		HX_STACK_VAR(tmp87,"tmp87");
				HX_STACK_LINE(798)
				Float tmp88 = cz;		HX_STACK_VAR(tmp88,"tmp88");
				HX_STACK_LINE(798)
				Float tmp89 = (tmp87 * tmp88);		HX_STACK_VAR(tmp89,"tmp89");
				HX_STACK_LINE(798)
				Float tmp90 = (sx * sz);		HX_STACK_VAR(tmp90,"tmp90");
				HX_STACK_LINE(798)
				Float tmp91 = (tmp89 + tmp90);		HX_STACK_VAR(tmp91,"tmp91");
				HX_STACK_LINE(798)
				Float tmp92 = scale->__get((int)8);		HX_STACK_VAR(tmp92,"tmp92");
				HX_STACK_LINE(798)
				Float tmp93 = (tmp91 * tmp92);		HX_STACK_VAR(tmp93,"tmp93");
				HX_STACK_LINE(798)
				Float tmp94 = tmp86->set((int)8,tmp93);		HX_STACK_VAR(tmp94,"tmp94");
				HX_STACK_LINE(798)
				tmp94;
				HX_STACK_LINE(799)
				::openfl::_Vector::FloatVector tmp95 = this->rawData;		HX_STACK_VAR(tmp95,"tmp95");
				HX_STACK_LINE(799)
				Float tmp96 = (cx * sy);		HX_STACK_VAR(tmp96,"tmp96");
				HX_STACK_LINE(799)
				Float tmp97 = sz;		HX_STACK_VAR(tmp97,"tmp97");
				HX_STACK_LINE(799)
				Float tmp98 = (tmp96 * tmp97);		HX_STACK_VAR(tmp98,"tmp98");
				HX_STACK_LINE(799)
				Float tmp99 = (sx * cz);		HX_STACK_VAR(tmp99,"tmp99");
				HX_STACK_LINE(799)
				Float tmp100 = (tmp98 - tmp99);		HX_STACK_VAR(tmp100,"tmp100");
				HX_STACK_LINE(799)
				Float tmp101 = scale->__get((int)9);		HX_STACK_VAR(tmp101,"tmp101");
				HX_STACK_LINE(799)
				Float tmp102 = (tmp100 * tmp101);		HX_STACK_VAR(tmp102,"tmp102");
				HX_STACK_LINE(799)
				Float tmp103 = tmp95->set((int)9,tmp102);		HX_STACK_VAR(tmp103,"tmp103");
				HX_STACK_LINE(799)
				tmp103;
				HX_STACK_LINE(800)
				::openfl::_Vector::FloatVector tmp104 = this->rawData;		HX_STACK_VAR(tmp104,"tmp104");
				HX_STACK_LINE(800)
				Float tmp105 = (cx * cy);		HX_STACK_VAR(tmp105,"tmp105");
				HX_STACK_LINE(800)
				Float tmp106 = scale->__get((int)10);		HX_STACK_VAR(tmp106,"tmp106");
				HX_STACK_LINE(800)
				Float tmp107 = (tmp105 * tmp106);		HX_STACK_VAR(tmp107,"tmp107");
				HX_STACK_LINE(800)
				Float tmp108 = tmp104->set((int)10,tmp107);		HX_STACK_VAR(tmp108,"tmp108");
				HX_STACK_LINE(800)
				tmp108;
				HX_STACK_LINE(801)
				::openfl::_Vector::FloatVector tmp109 = this->rawData;		HX_STACK_VAR(tmp109,"tmp109");
				HX_STACK_LINE(801)
				Float tmp110 = tmp109->set((int)11,(int)0);		HX_STACK_VAR(tmp110,"tmp110");
				HX_STACK_LINE(801)
				tmp110;
				HX_STACK_LINE(802)
				{
					HX_STACK_LINE(802)
					::openfl::geom::Vector3D tmp111 = components->get((int)0);		HX_STACK_VAR(tmp111,"tmp111");
					HX_STACK_LINE(802)
					Float tmp112 = tmp111->x;		HX_STACK_VAR(tmp112,"tmp112");
					HX_STACK_LINE(802)
					Float value = tmp112;		HX_STACK_VAR(value,"value");
					HX_STACK_LINE(802)
					::openfl::_Vector::FloatVector tmp113 = this->rawData;		HX_STACK_VAR(tmp113,"tmp113");
					HX_STACK_LINE(802)
					Float tmp114 = value;		HX_STACK_VAR(tmp114,"tmp114");
					HX_STACK_LINE(802)
					tmp113->set((int)12,tmp114);
				}
				HX_STACK_LINE(803)
				{
					HX_STACK_LINE(803)
					::openfl::geom::Vector3D tmp111 = components->get((int)0);		HX_STACK_VAR(tmp111,"tmp111");
					HX_STACK_LINE(803)
					Float tmp112 = tmp111->y;		HX_STACK_VAR(tmp112,"tmp112");
					HX_STACK_LINE(803)
					Float value = tmp112;		HX_STACK_VAR(value,"value");
					HX_STACK_LINE(803)
					::openfl::_Vector::FloatVector tmp113 = this->rawData;		HX_STACK_VAR(tmp113,"tmp113");
					HX_STACK_LINE(803)
					Float tmp114 = value;		HX_STACK_VAR(tmp114,"tmp114");
					HX_STACK_LINE(803)
					tmp113->set((int)13,tmp114);
				}
				HX_STACK_LINE(804)
				{
					HX_STACK_LINE(804)
					::openfl::geom::Vector3D tmp111 = components->get((int)0);		HX_STACK_VAR(tmp111,"tmp111");
					HX_STACK_LINE(804)
					Float tmp112 = tmp111->z;		HX_STACK_VAR(tmp112,"tmp112");
					HX_STACK_LINE(804)
					Float value = tmp112;		HX_STACK_VAR(value,"value");
					HX_STACK_LINE(804)
					::openfl::_Vector::FloatVector tmp113 = this->rawData;		HX_STACK_VAR(tmp113,"tmp113");
					HX_STACK_LINE(804)
					Float tmp114 = value;		HX_STACK_VAR(tmp114,"tmp114");
					HX_STACK_LINE(804)
					tmp113->set((int)14,tmp114);
				}
				HX_STACK_LINE(805)
				::openfl::_Vector::FloatVector tmp111 = this->rawData;		HX_STACK_VAR(tmp111,"tmp111");
				HX_STACK_LINE(805)
				Float tmp112 = tmp111->set((int)15,(int)1);		HX_STACK_VAR(tmp112,"tmp112");
				HX_STACK_LINE(805)
				tmp112;
			}
			;break;
			default: {
				HX_STACK_LINE(809)
				::openfl::geom::Vector3D tmp25 = components->get((int)1);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(809)
				Float tmp26 = tmp25->x;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(809)
				Float x = tmp26;		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(810)
				::openfl::geom::Vector3D tmp27 = components->get((int)1);		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(810)
				Float tmp28 = tmp27->y;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(810)
				Float y = tmp28;		HX_STACK_VAR(y,"y");
				HX_STACK_LINE(811)
				::openfl::geom::Vector3D tmp29 = components->get((int)1);		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(811)
				Float tmp30 = tmp29->z;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(811)
				Float z = tmp30;		HX_STACK_VAR(z,"z");
				HX_STACK_LINE(812)
				::openfl::geom::Vector3D tmp31 = components->get((int)1);		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(812)
				Float tmp32 = tmp31->w;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(812)
				Float w = tmp32;		HX_STACK_VAR(w,"w");
				HX_STACK_LINE(814)
				bool tmp33 = (orientationStyle == ((Dynamic)((int)0)));		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(814)
				if ((tmp33)){
					HX_STACK_LINE(816)
					Float tmp34 = (Float(w) / Float((int)2));		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(816)
					Float tmp35 = ::Math_obj::sin(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(816)
					hx::MultEq(x,tmp35);
					HX_STACK_LINE(817)
					Float tmp36 = (Float(w) / Float((int)2));		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(817)
					Float tmp37 = ::Math_obj::sin(tmp36);		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(817)
					hx::MultEq(y,tmp37);
					HX_STACK_LINE(818)
					Float tmp38 = (Float(w) / Float((int)2));		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(818)
					Float tmp39 = ::Math_obj::sin(tmp38);		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(818)
					hx::MultEq(z,tmp39);
					HX_STACK_LINE(819)
					Float tmp40 = (Float(w) / Float((int)2));		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(819)
					Float tmp41 = ::Math_obj::cos(tmp40);		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(819)
					w = tmp41;
				}
				HX_STACK_LINE(823)
				::openfl::_Vector::FloatVector tmp34 = this->rawData;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(823)
				Float tmp35 = ((int)2 * y);		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(823)
				Float tmp36 = y;		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(823)
				Float tmp37 = (tmp35 * tmp36);		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(823)
				Float tmp38 = ((int)1 - tmp37);		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(823)
				Float tmp39 = ((int)2 * z);		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(823)
				Float tmp40 = z;		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(823)
				Float tmp41 = (tmp39 * tmp40);		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(823)
				Float tmp42 = (tmp38 - tmp41);		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(823)
				Float tmp43 = scale->__get((int)0);		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(823)
				Float tmp44 = (tmp42 * tmp43);		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(823)
				Float tmp45 = tmp34->set((int)0,tmp44);		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(823)
				tmp45;
				HX_STACK_LINE(824)
				::openfl::_Vector::FloatVector tmp46 = this->rawData;		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(824)
				Float tmp47 = ((int)2 * x);		HX_STACK_VAR(tmp47,"tmp47");
				HX_STACK_LINE(824)
				Float tmp48 = y;		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(824)
				Float tmp49 = (tmp47 * tmp48);		HX_STACK_VAR(tmp49,"tmp49");
				HX_STACK_LINE(824)
				Float tmp50 = ((int)2 * w);		HX_STACK_VAR(tmp50,"tmp50");
				HX_STACK_LINE(824)
				Float tmp51 = z;		HX_STACK_VAR(tmp51,"tmp51");
				HX_STACK_LINE(824)
				Float tmp52 = (tmp50 * tmp51);		HX_STACK_VAR(tmp52,"tmp52");
				HX_STACK_LINE(824)
				Float tmp53 = (tmp49 + tmp52);		HX_STACK_VAR(tmp53,"tmp53");
				HX_STACK_LINE(824)
				Float tmp54 = scale->__get((int)1);		HX_STACK_VAR(tmp54,"tmp54");
				HX_STACK_LINE(824)
				Float tmp55 = (tmp53 * tmp54);		HX_STACK_VAR(tmp55,"tmp55");
				HX_STACK_LINE(824)
				Float tmp56 = tmp46->set((int)1,tmp55);		HX_STACK_VAR(tmp56,"tmp56");
				HX_STACK_LINE(824)
				tmp56;
				HX_STACK_LINE(825)
				::openfl::_Vector::FloatVector tmp57 = this->rawData;		HX_STACK_VAR(tmp57,"tmp57");
				HX_STACK_LINE(825)
				Float tmp58 = ((int)2 * x);		HX_STACK_VAR(tmp58,"tmp58");
				HX_STACK_LINE(825)
				Float tmp59 = z;		HX_STACK_VAR(tmp59,"tmp59");
				HX_STACK_LINE(825)
				Float tmp60 = (tmp58 * tmp59);		HX_STACK_VAR(tmp60,"tmp60");
				HX_STACK_LINE(825)
				Float tmp61 = ((int)2 * w);		HX_STACK_VAR(tmp61,"tmp61");
				HX_STACK_LINE(825)
				Float tmp62 = y;		HX_STACK_VAR(tmp62,"tmp62");
				HX_STACK_LINE(825)
				Float tmp63 = (tmp61 * tmp62);		HX_STACK_VAR(tmp63,"tmp63");
				HX_STACK_LINE(825)
				Float tmp64 = (tmp60 - tmp63);		HX_STACK_VAR(tmp64,"tmp64");
				HX_STACK_LINE(825)
				Float tmp65 = scale->__get((int)2);		HX_STACK_VAR(tmp65,"tmp65");
				HX_STACK_LINE(825)
				Float tmp66 = (tmp64 * tmp65);		HX_STACK_VAR(tmp66,"tmp66");
				HX_STACK_LINE(825)
				Float tmp67 = tmp57->set((int)2,tmp66);		HX_STACK_VAR(tmp67,"tmp67");
				HX_STACK_LINE(825)
				tmp67;
				HX_STACK_LINE(826)
				::openfl::_Vector::FloatVector tmp68 = this->rawData;		HX_STACK_VAR(tmp68,"tmp68");
				HX_STACK_LINE(826)
				Float tmp69 = tmp68->set((int)3,(int)0);		HX_STACK_VAR(tmp69,"tmp69");
				HX_STACK_LINE(826)
				tmp69;
				HX_STACK_LINE(827)
				::openfl::_Vector::FloatVector tmp70 = this->rawData;		HX_STACK_VAR(tmp70,"tmp70");
				HX_STACK_LINE(827)
				Float tmp71 = ((int)2 * x);		HX_STACK_VAR(tmp71,"tmp71");
				HX_STACK_LINE(827)
				Float tmp72 = y;		HX_STACK_VAR(tmp72,"tmp72");
				HX_STACK_LINE(827)
				Float tmp73 = (tmp71 * tmp72);		HX_STACK_VAR(tmp73,"tmp73");
				HX_STACK_LINE(827)
				Float tmp74 = ((int)2 * w);		HX_STACK_VAR(tmp74,"tmp74");
				HX_STACK_LINE(827)
				Float tmp75 = z;		HX_STACK_VAR(tmp75,"tmp75");
				HX_STACK_LINE(827)
				Float tmp76 = (tmp74 * tmp75);		HX_STACK_VAR(tmp76,"tmp76");
				HX_STACK_LINE(827)
				Float tmp77 = (tmp73 - tmp76);		HX_STACK_VAR(tmp77,"tmp77");
				HX_STACK_LINE(827)
				Float tmp78 = scale->__get((int)4);		HX_STACK_VAR(tmp78,"tmp78");
				HX_STACK_LINE(827)
				Float tmp79 = (tmp77 * tmp78);		HX_STACK_VAR(tmp79,"tmp79");
				HX_STACK_LINE(827)
				Float tmp80 = tmp70->set((int)4,tmp79);		HX_STACK_VAR(tmp80,"tmp80");
				HX_STACK_LINE(827)
				tmp80;
				HX_STACK_LINE(828)
				::openfl::_Vector::FloatVector tmp81 = this->rawData;		HX_STACK_VAR(tmp81,"tmp81");
				HX_STACK_LINE(828)
				Float tmp82 = ((int)2 * x);		HX_STACK_VAR(tmp82,"tmp82");
				HX_STACK_LINE(828)
				Float tmp83 = x;		HX_STACK_VAR(tmp83,"tmp83");
				HX_STACK_LINE(828)
				Float tmp84 = (tmp82 * tmp83);		HX_STACK_VAR(tmp84,"tmp84");
				HX_STACK_LINE(828)
				Float tmp85 = ((int)1 - tmp84);		HX_STACK_VAR(tmp85,"tmp85");
				HX_STACK_LINE(828)
				Float tmp86 = ((int)2 * z);		HX_STACK_VAR(tmp86,"tmp86");
				HX_STACK_LINE(828)
				Float tmp87 = z;		HX_STACK_VAR(tmp87,"tmp87");
				HX_STACK_LINE(828)
				Float tmp88 = (tmp86 * tmp87);		HX_STACK_VAR(tmp88,"tmp88");
				HX_STACK_LINE(828)
				Float tmp89 = (tmp85 - tmp88);		HX_STACK_VAR(tmp89,"tmp89");
				HX_STACK_LINE(828)
				Float tmp90 = scale->__get((int)5);		HX_STACK_VAR(tmp90,"tmp90");
				HX_STACK_LINE(828)
				Float tmp91 = (tmp89 * tmp90);		HX_STACK_VAR(tmp91,"tmp91");
				HX_STACK_LINE(828)
				Float tmp92 = tmp81->set((int)5,tmp91);		HX_STACK_VAR(tmp92,"tmp92");
				HX_STACK_LINE(828)
				tmp92;
				HX_STACK_LINE(829)
				::openfl::_Vector::FloatVector tmp93 = this->rawData;		HX_STACK_VAR(tmp93,"tmp93");
				HX_STACK_LINE(829)
				Float tmp94 = ((int)2 * y);		HX_STACK_VAR(tmp94,"tmp94");
				HX_STACK_LINE(829)
				Float tmp95 = z;		HX_STACK_VAR(tmp95,"tmp95");
				HX_STACK_LINE(829)
				Float tmp96 = (tmp94 * tmp95);		HX_STACK_VAR(tmp96,"tmp96");
				HX_STACK_LINE(829)
				Float tmp97 = ((int)2 * w);		HX_STACK_VAR(tmp97,"tmp97");
				HX_STACK_LINE(829)
				Float tmp98 = x;		HX_STACK_VAR(tmp98,"tmp98");
				HX_STACK_LINE(829)
				Float tmp99 = (tmp97 * tmp98);		HX_STACK_VAR(tmp99,"tmp99");
				HX_STACK_LINE(829)
				Float tmp100 = (tmp96 + tmp99);		HX_STACK_VAR(tmp100,"tmp100");
				HX_STACK_LINE(829)
				Float tmp101 = scale->__get((int)6);		HX_STACK_VAR(tmp101,"tmp101");
				HX_STACK_LINE(829)
				Float tmp102 = (tmp100 * tmp101);		HX_STACK_VAR(tmp102,"tmp102");
				HX_STACK_LINE(829)
				Float tmp103 = tmp93->set((int)6,tmp102);		HX_STACK_VAR(tmp103,"tmp103");
				HX_STACK_LINE(829)
				tmp103;
				HX_STACK_LINE(830)
				::openfl::_Vector::FloatVector tmp104 = this->rawData;		HX_STACK_VAR(tmp104,"tmp104");
				HX_STACK_LINE(830)
				Float tmp105 = tmp104->set((int)7,(int)0);		HX_STACK_VAR(tmp105,"tmp105");
				HX_STACK_LINE(830)
				tmp105;
				HX_STACK_LINE(831)
				::openfl::_Vector::FloatVector tmp106 = this->rawData;		HX_STACK_VAR(tmp106,"tmp106");
				HX_STACK_LINE(831)
				Float tmp107 = ((int)2 * x);		HX_STACK_VAR(tmp107,"tmp107");
				HX_STACK_LINE(831)
				Float tmp108 = z;		HX_STACK_VAR(tmp108,"tmp108");
				HX_STACK_LINE(831)
				Float tmp109 = (tmp107 * tmp108);		HX_STACK_VAR(tmp109,"tmp109");
				HX_STACK_LINE(831)
				Float tmp110 = ((int)2 * w);		HX_STACK_VAR(tmp110,"tmp110");
				HX_STACK_LINE(831)
				Float tmp111 = y;		HX_STACK_VAR(tmp111,"tmp111");
				HX_STACK_LINE(831)
				Float tmp112 = (tmp110 * tmp111);		HX_STACK_VAR(tmp112,"tmp112");
				HX_STACK_LINE(831)
				Float tmp113 = (tmp109 + tmp112);		HX_STACK_VAR(tmp113,"tmp113");
				HX_STACK_LINE(831)
				Float tmp114 = scale->__get((int)8);		HX_STACK_VAR(tmp114,"tmp114");
				HX_STACK_LINE(831)
				Float tmp115 = (tmp113 * tmp114);		HX_STACK_VAR(tmp115,"tmp115");
				HX_STACK_LINE(831)
				Float tmp116 = tmp106->set((int)8,tmp115);		HX_STACK_VAR(tmp116,"tmp116");
				HX_STACK_LINE(831)
				tmp116;
				HX_STACK_LINE(832)
				::openfl::_Vector::FloatVector tmp117 = this->rawData;		HX_STACK_VAR(tmp117,"tmp117");
				HX_STACK_LINE(832)
				Float tmp118 = ((int)2 * y);		HX_STACK_VAR(tmp118,"tmp118");
				HX_STACK_LINE(832)
				Float tmp119 = z;		HX_STACK_VAR(tmp119,"tmp119");
				HX_STACK_LINE(832)
				Float tmp120 = (tmp118 * tmp119);		HX_STACK_VAR(tmp120,"tmp120");
				HX_STACK_LINE(832)
				Float tmp121 = ((int)2 * w);		HX_STACK_VAR(tmp121,"tmp121");
				HX_STACK_LINE(832)
				Float tmp122 = x;		HX_STACK_VAR(tmp122,"tmp122");
				HX_STACK_LINE(832)
				Float tmp123 = (tmp121 * tmp122);		HX_STACK_VAR(tmp123,"tmp123");
				HX_STACK_LINE(832)
				Float tmp124 = (tmp120 - tmp123);		HX_STACK_VAR(tmp124,"tmp124");
				HX_STACK_LINE(832)
				Float tmp125 = scale->__get((int)9);		HX_STACK_VAR(tmp125,"tmp125");
				HX_STACK_LINE(832)
				Float tmp126 = (tmp124 * tmp125);		HX_STACK_VAR(tmp126,"tmp126");
				HX_STACK_LINE(832)
				Float tmp127 = tmp117->set((int)9,tmp126);		HX_STACK_VAR(tmp127,"tmp127");
				HX_STACK_LINE(832)
				tmp127;
				HX_STACK_LINE(833)
				::openfl::_Vector::FloatVector tmp128 = this->rawData;		HX_STACK_VAR(tmp128,"tmp128");
				HX_STACK_LINE(833)
				Float tmp129 = ((int)2 * x);		HX_STACK_VAR(tmp129,"tmp129");
				HX_STACK_LINE(833)
				Float tmp130 = x;		HX_STACK_VAR(tmp130,"tmp130");
				HX_STACK_LINE(833)
				Float tmp131 = (tmp129 * tmp130);		HX_STACK_VAR(tmp131,"tmp131");
				HX_STACK_LINE(833)
				Float tmp132 = ((int)1 - tmp131);		HX_STACK_VAR(tmp132,"tmp132");
				HX_STACK_LINE(833)
				Float tmp133 = ((int)2 * y);		HX_STACK_VAR(tmp133,"tmp133");
				HX_STACK_LINE(833)
				Float tmp134 = y;		HX_STACK_VAR(tmp134,"tmp134");
				HX_STACK_LINE(833)
				Float tmp135 = (tmp133 * tmp134);		HX_STACK_VAR(tmp135,"tmp135");
				HX_STACK_LINE(833)
				Float tmp136 = (tmp132 - tmp135);		HX_STACK_VAR(tmp136,"tmp136");
				HX_STACK_LINE(833)
				Float tmp137 = scale->__get((int)10);		HX_STACK_VAR(tmp137,"tmp137");
				HX_STACK_LINE(833)
				Float tmp138 = (tmp136 * tmp137);		HX_STACK_VAR(tmp138,"tmp138");
				HX_STACK_LINE(833)
				Float tmp139 = tmp128->set((int)10,tmp138);		HX_STACK_VAR(tmp139,"tmp139");
				HX_STACK_LINE(833)
				tmp139;
				HX_STACK_LINE(834)
				::openfl::_Vector::FloatVector tmp140 = this->rawData;		HX_STACK_VAR(tmp140,"tmp140");
				HX_STACK_LINE(834)
				Float tmp141 = tmp140->set((int)11,(int)0);		HX_STACK_VAR(tmp141,"tmp141");
				HX_STACK_LINE(834)
				tmp141;
				HX_STACK_LINE(835)
				{
					HX_STACK_LINE(835)
					::openfl::geom::Vector3D tmp142 = components->get((int)0);		HX_STACK_VAR(tmp142,"tmp142");
					HX_STACK_LINE(835)
					Float tmp143 = tmp142->x;		HX_STACK_VAR(tmp143,"tmp143");
					HX_STACK_LINE(835)
					Float value = tmp143;		HX_STACK_VAR(value,"value");
					HX_STACK_LINE(835)
					::openfl::_Vector::FloatVector tmp144 = this->rawData;		HX_STACK_VAR(tmp144,"tmp144");
					HX_STACK_LINE(835)
					Float tmp145 = value;		HX_STACK_VAR(tmp145,"tmp145");
					HX_STACK_LINE(835)
					tmp144->set((int)12,tmp145);
				}
				HX_STACK_LINE(836)
				{
					HX_STACK_LINE(836)
					::openfl::geom::Vector3D tmp142 = components->get((int)0);		HX_STACK_VAR(tmp142,"tmp142");
					HX_STACK_LINE(836)
					Float tmp143 = tmp142->y;		HX_STACK_VAR(tmp143,"tmp143");
					HX_STACK_LINE(836)
					Float value = tmp143;		HX_STACK_VAR(value,"value");
					HX_STACK_LINE(836)
					::openfl::_Vector::FloatVector tmp144 = this->rawData;		HX_STACK_VAR(tmp144,"tmp144");
					HX_STACK_LINE(836)
					Float tmp145 = value;		HX_STACK_VAR(tmp145,"tmp145");
					HX_STACK_LINE(836)
					tmp144->set((int)13,tmp145);
				}
				HX_STACK_LINE(837)
				{
					HX_STACK_LINE(837)
					::openfl::geom::Vector3D tmp142 = components->get((int)0);		HX_STACK_VAR(tmp142,"tmp142");
					HX_STACK_LINE(837)
					Float tmp143 = tmp142->z;		HX_STACK_VAR(tmp143,"tmp143");
					HX_STACK_LINE(837)
					Float value = tmp143;		HX_STACK_VAR(value,"value");
					HX_STACK_LINE(837)
					::openfl::_Vector::FloatVector tmp144 = this->rawData;		HX_STACK_VAR(tmp144,"tmp144");
					HX_STACK_LINE(837)
					Float tmp145 = value;		HX_STACK_VAR(tmp145,"tmp145");
					HX_STACK_LINE(837)
					tmp144->set((int)14,tmp145);
				}
				HX_STACK_LINE(838)
				::openfl::_Vector::FloatVector tmp142 = this->rawData;		HX_STACK_VAR(tmp142,"tmp142");
				HX_STACK_LINE(838)
				Float tmp143 = tmp142->set((int)15,(int)1);		HX_STACK_VAR(tmp143,"tmp143");
				HX_STACK_LINE(838)
				tmp143;
			}
		}
	}
	else{
		HX_STACK_LINE(809)
		::openfl::geom::Vector3D tmp24 = components->get((int)1);		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(809)
		Float tmp25 = tmp24->x;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(809)
		Float x = tmp25;		HX_STACK_VAR(x,"x");
		HX_STACK_LINE(810)
		::openfl::geom::Vector3D tmp26 = components->get((int)1);		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(810)
		Float tmp27 = tmp26->y;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(810)
		Float y = tmp27;		HX_STACK_VAR(y,"y");
		HX_STACK_LINE(811)
		::openfl::geom::Vector3D tmp28 = components->get((int)1);		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(811)
		Float tmp29 = tmp28->z;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(811)
		Float z = tmp29;		HX_STACK_VAR(z,"z");
		HX_STACK_LINE(812)
		::openfl::geom::Vector3D tmp30 = components->get((int)1);		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(812)
		Float tmp31 = tmp30->w;		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(812)
		Float w = tmp31;		HX_STACK_VAR(w,"w");
		HX_STACK_LINE(814)
		bool tmp32 = (orientationStyle == ((Dynamic)((int)0)));		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(814)
		if ((tmp32)){
			HX_STACK_LINE(816)
			Float tmp33 = (Float(w) / Float((int)2));		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(816)
			Float tmp34 = ::Math_obj::sin(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(816)
			hx::MultEq(x,tmp34);
			HX_STACK_LINE(817)
			Float tmp35 = (Float(w) / Float((int)2));		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(817)
			Float tmp36 = ::Math_obj::sin(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(817)
			hx::MultEq(y,tmp36);
			HX_STACK_LINE(818)
			Float tmp37 = (Float(w) / Float((int)2));		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(818)
			Float tmp38 = ::Math_obj::sin(tmp37);		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(818)
			hx::MultEq(z,tmp38);
			HX_STACK_LINE(819)
			Float tmp39 = (Float(w) / Float((int)2));		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(819)
			Float tmp40 = ::Math_obj::cos(tmp39);		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(819)
			w = tmp40;
		}
		HX_STACK_LINE(823)
		::openfl::_Vector::FloatVector tmp33 = this->rawData;		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(823)
		Float tmp34 = ((int)2 * y);		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(823)
		Float tmp35 = y;		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(823)
		Float tmp36 = (tmp34 * tmp35);		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(823)
		Float tmp37 = ((int)1 - tmp36);		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(823)
		Float tmp38 = ((int)2 * z);		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(823)
		Float tmp39 = z;		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(823)
		Float tmp40 = (tmp38 * tmp39);		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(823)
		Float tmp41 = (tmp37 - tmp40);		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(823)
		Float tmp42 = scale->__get((int)0);		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(823)
		Float tmp43 = (tmp41 * tmp42);		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(823)
		Float tmp44 = tmp33->set((int)0,tmp43);		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(823)
		tmp44;
		HX_STACK_LINE(824)
		::openfl::_Vector::FloatVector tmp45 = this->rawData;		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(824)
		Float tmp46 = ((int)2 * x);		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(824)
		Float tmp47 = y;		HX_STACK_VAR(tmp47,"tmp47");
		HX_STACK_LINE(824)
		Float tmp48 = (tmp46 * tmp47);		HX_STACK_VAR(tmp48,"tmp48");
		HX_STACK_LINE(824)
		Float tmp49 = ((int)2 * w);		HX_STACK_VAR(tmp49,"tmp49");
		HX_STACK_LINE(824)
		Float tmp50 = z;		HX_STACK_VAR(tmp50,"tmp50");
		HX_STACK_LINE(824)
		Float tmp51 = (tmp49 * tmp50);		HX_STACK_VAR(tmp51,"tmp51");
		HX_STACK_LINE(824)
		Float tmp52 = (tmp48 + tmp51);		HX_STACK_VAR(tmp52,"tmp52");
		HX_STACK_LINE(824)
		Float tmp53 = scale->__get((int)1);		HX_STACK_VAR(tmp53,"tmp53");
		HX_STACK_LINE(824)
		Float tmp54 = (tmp52 * tmp53);		HX_STACK_VAR(tmp54,"tmp54");
		HX_STACK_LINE(824)
		Float tmp55 = tmp45->set((int)1,tmp54);		HX_STACK_VAR(tmp55,"tmp55");
		HX_STACK_LINE(824)
		tmp55;
		HX_STACK_LINE(825)
		::openfl::_Vector::FloatVector tmp56 = this->rawData;		HX_STACK_VAR(tmp56,"tmp56");
		HX_STACK_LINE(825)
		Float tmp57 = ((int)2 * x);		HX_STACK_VAR(tmp57,"tmp57");
		HX_STACK_LINE(825)
		Float tmp58 = z;		HX_STACK_VAR(tmp58,"tmp58");
		HX_STACK_LINE(825)
		Float tmp59 = (tmp57 * tmp58);		HX_STACK_VAR(tmp59,"tmp59");
		HX_STACK_LINE(825)
		Float tmp60 = ((int)2 * w);		HX_STACK_VAR(tmp60,"tmp60");
		HX_STACK_LINE(825)
		Float tmp61 = y;		HX_STACK_VAR(tmp61,"tmp61");
		HX_STACK_LINE(825)
		Float tmp62 = (tmp60 * tmp61);		HX_STACK_VAR(tmp62,"tmp62");
		HX_STACK_LINE(825)
		Float tmp63 = (tmp59 - tmp62);		HX_STACK_VAR(tmp63,"tmp63");
		HX_STACK_LINE(825)
		Float tmp64 = scale->__get((int)2);		HX_STACK_VAR(tmp64,"tmp64");
		HX_STACK_LINE(825)
		Float tmp65 = (tmp63 * tmp64);		HX_STACK_VAR(tmp65,"tmp65");
		HX_STACK_LINE(825)
		Float tmp66 = tmp56->set((int)2,tmp65);		HX_STACK_VAR(tmp66,"tmp66");
		HX_STACK_LINE(825)
		tmp66;
		HX_STACK_LINE(826)
		::openfl::_Vector::FloatVector tmp67 = this->rawData;		HX_STACK_VAR(tmp67,"tmp67");
		HX_STACK_LINE(826)
		Float tmp68 = tmp67->set((int)3,(int)0);		HX_STACK_VAR(tmp68,"tmp68");
		HX_STACK_LINE(826)
		tmp68;
		HX_STACK_LINE(827)
		::openfl::_Vector::FloatVector tmp69 = this->rawData;		HX_STACK_VAR(tmp69,"tmp69");
		HX_STACK_LINE(827)
		Float tmp70 = ((int)2 * x);		HX_STACK_VAR(tmp70,"tmp70");
		HX_STACK_LINE(827)
		Float tmp71 = y;		HX_STACK_VAR(tmp71,"tmp71");
		HX_STACK_LINE(827)
		Float tmp72 = (tmp70 * tmp71);		HX_STACK_VAR(tmp72,"tmp72");
		HX_STACK_LINE(827)
		Float tmp73 = ((int)2 * w);		HX_STACK_VAR(tmp73,"tmp73");
		HX_STACK_LINE(827)
		Float tmp74 = z;		HX_STACK_VAR(tmp74,"tmp74");
		HX_STACK_LINE(827)
		Float tmp75 = (tmp73 * tmp74);		HX_STACK_VAR(tmp75,"tmp75");
		HX_STACK_LINE(827)
		Float tmp76 = (tmp72 - tmp75);		HX_STACK_VAR(tmp76,"tmp76");
		HX_STACK_LINE(827)
		Float tmp77 = scale->__get((int)4);		HX_STACK_VAR(tmp77,"tmp77");
		HX_STACK_LINE(827)
		Float tmp78 = (tmp76 * tmp77);		HX_STACK_VAR(tmp78,"tmp78");
		HX_STACK_LINE(827)
		Float tmp79 = tmp69->set((int)4,tmp78);		HX_STACK_VAR(tmp79,"tmp79");
		HX_STACK_LINE(827)
		tmp79;
		HX_STACK_LINE(828)
		::openfl::_Vector::FloatVector tmp80 = this->rawData;		HX_STACK_VAR(tmp80,"tmp80");
		HX_STACK_LINE(828)
		Float tmp81 = ((int)2 * x);		HX_STACK_VAR(tmp81,"tmp81");
		HX_STACK_LINE(828)
		Float tmp82 = x;		HX_STACK_VAR(tmp82,"tmp82");
		HX_STACK_LINE(828)
		Float tmp83 = (tmp81 * tmp82);		HX_STACK_VAR(tmp83,"tmp83");
		HX_STACK_LINE(828)
		Float tmp84 = ((int)1 - tmp83);		HX_STACK_VAR(tmp84,"tmp84");
		HX_STACK_LINE(828)
		Float tmp85 = ((int)2 * z);		HX_STACK_VAR(tmp85,"tmp85");
		HX_STACK_LINE(828)
		Float tmp86 = z;		HX_STACK_VAR(tmp86,"tmp86");
		HX_STACK_LINE(828)
		Float tmp87 = (tmp85 * tmp86);		HX_STACK_VAR(tmp87,"tmp87");
		HX_STACK_LINE(828)
		Float tmp88 = (tmp84 - tmp87);		HX_STACK_VAR(tmp88,"tmp88");
		HX_STACK_LINE(828)
		Float tmp89 = scale->__get((int)5);		HX_STACK_VAR(tmp89,"tmp89");
		HX_STACK_LINE(828)
		Float tmp90 = (tmp88 * tmp89);		HX_STACK_VAR(tmp90,"tmp90");
		HX_STACK_LINE(828)
		Float tmp91 = tmp80->set((int)5,tmp90);		HX_STACK_VAR(tmp91,"tmp91");
		HX_STACK_LINE(828)
		tmp91;
		HX_STACK_LINE(829)
		::openfl::_Vector::FloatVector tmp92 = this->rawData;		HX_STACK_VAR(tmp92,"tmp92");
		HX_STACK_LINE(829)
		Float tmp93 = ((int)2 * y);		HX_STACK_VAR(tmp93,"tmp93");
		HX_STACK_LINE(829)
		Float tmp94 = z;		HX_STACK_VAR(tmp94,"tmp94");
		HX_STACK_LINE(829)
		Float tmp95 = (tmp93 * tmp94);		HX_STACK_VAR(tmp95,"tmp95");
		HX_STACK_LINE(829)
		Float tmp96 = ((int)2 * w);		HX_STACK_VAR(tmp96,"tmp96");
		HX_STACK_LINE(829)
		Float tmp97 = x;		HX_STACK_VAR(tmp97,"tmp97");
		HX_STACK_LINE(829)
		Float tmp98 = (tmp96 * tmp97);		HX_STACK_VAR(tmp98,"tmp98");
		HX_STACK_LINE(829)
		Float tmp99 = (tmp95 + tmp98);		HX_STACK_VAR(tmp99,"tmp99");
		HX_STACK_LINE(829)
		Float tmp100 = scale->__get((int)6);		HX_STACK_VAR(tmp100,"tmp100");
		HX_STACK_LINE(829)
		Float tmp101 = (tmp99 * tmp100);		HX_STACK_VAR(tmp101,"tmp101");
		HX_STACK_LINE(829)
		Float tmp102 = tmp92->set((int)6,tmp101);		HX_STACK_VAR(tmp102,"tmp102");
		HX_STACK_LINE(829)
		tmp102;
		HX_STACK_LINE(830)
		::openfl::_Vector::FloatVector tmp103 = this->rawData;		HX_STACK_VAR(tmp103,"tmp103");
		HX_STACK_LINE(830)
		Float tmp104 = tmp103->set((int)7,(int)0);		HX_STACK_VAR(tmp104,"tmp104");
		HX_STACK_LINE(830)
		tmp104;
		HX_STACK_LINE(831)
		::openfl::_Vector::FloatVector tmp105 = this->rawData;		HX_STACK_VAR(tmp105,"tmp105");
		HX_STACK_LINE(831)
		Float tmp106 = ((int)2 * x);		HX_STACK_VAR(tmp106,"tmp106");
		HX_STACK_LINE(831)
		Float tmp107 = z;		HX_STACK_VAR(tmp107,"tmp107");
		HX_STACK_LINE(831)
		Float tmp108 = (tmp106 * tmp107);		HX_STACK_VAR(tmp108,"tmp108");
		HX_STACK_LINE(831)
		Float tmp109 = ((int)2 * w);		HX_STACK_VAR(tmp109,"tmp109");
		HX_STACK_LINE(831)
		Float tmp110 = y;		HX_STACK_VAR(tmp110,"tmp110");
		HX_STACK_LINE(831)
		Float tmp111 = (tmp109 * tmp110);		HX_STACK_VAR(tmp111,"tmp111");
		HX_STACK_LINE(831)
		Float tmp112 = (tmp108 + tmp111);		HX_STACK_VAR(tmp112,"tmp112");
		HX_STACK_LINE(831)
		Float tmp113 = scale->__get((int)8);		HX_STACK_VAR(tmp113,"tmp113");
		HX_STACK_LINE(831)
		Float tmp114 = (tmp112 * tmp113);		HX_STACK_VAR(tmp114,"tmp114");
		HX_STACK_LINE(831)
		Float tmp115 = tmp105->set((int)8,tmp114);		HX_STACK_VAR(tmp115,"tmp115");
		HX_STACK_LINE(831)
		tmp115;
		HX_STACK_LINE(832)
		::openfl::_Vector::FloatVector tmp116 = this->rawData;		HX_STACK_VAR(tmp116,"tmp116");
		HX_STACK_LINE(832)
		Float tmp117 = ((int)2 * y);		HX_STACK_VAR(tmp117,"tmp117");
		HX_STACK_LINE(832)
		Float tmp118 = z;		HX_STACK_VAR(tmp118,"tmp118");
		HX_STACK_LINE(832)
		Float tmp119 = (tmp117 * tmp118);		HX_STACK_VAR(tmp119,"tmp119");
		HX_STACK_LINE(832)
		Float tmp120 = ((int)2 * w);		HX_STACK_VAR(tmp120,"tmp120");
		HX_STACK_LINE(832)
		Float tmp121 = x;		HX_STACK_VAR(tmp121,"tmp121");
		HX_STACK_LINE(832)
		Float tmp122 = (tmp120 * tmp121);		HX_STACK_VAR(tmp122,"tmp122");
		HX_STACK_LINE(832)
		Float tmp123 = (tmp119 - tmp122);		HX_STACK_VAR(tmp123,"tmp123");
		HX_STACK_LINE(832)
		Float tmp124 = scale->__get((int)9);		HX_STACK_VAR(tmp124,"tmp124");
		HX_STACK_LINE(832)
		Float tmp125 = (tmp123 * tmp124);		HX_STACK_VAR(tmp125,"tmp125");
		HX_STACK_LINE(832)
		Float tmp126 = tmp116->set((int)9,tmp125);		HX_STACK_VAR(tmp126,"tmp126");
		HX_STACK_LINE(832)
		tmp126;
		HX_STACK_LINE(833)
		::openfl::_Vector::FloatVector tmp127 = this->rawData;		HX_STACK_VAR(tmp127,"tmp127");
		HX_STACK_LINE(833)
		Float tmp128 = ((int)2 * x);		HX_STACK_VAR(tmp128,"tmp128");
		HX_STACK_LINE(833)
		Float tmp129 = x;		HX_STACK_VAR(tmp129,"tmp129");
		HX_STACK_LINE(833)
		Float tmp130 = (tmp128 * tmp129);		HX_STACK_VAR(tmp130,"tmp130");
		HX_STACK_LINE(833)
		Float tmp131 = ((int)1 - tmp130);		HX_STACK_VAR(tmp131,"tmp131");
		HX_STACK_LINE(833)
		Float tmp132 = ((int)2 * y);		HX_STACK_VAR(tmp132,"tmp132");
		HX_STACK_LINE(833)
		Float tmp133 = y;		HX_STACK_VAR(tmp133,"tmp133");
		HX_STACK_LINE(833)
		Float tmp134 = (tmp132 * tmp133);		HX_STACK_VAR(tmp134,"tmp134");
		HX_STACK_LINE(833)
		Float tmp135 = (tmp131 - tmp134);		HX_STACK_VAR(tmp135,"tmp135");
		HX_STACK_LINE(833)
		Float tmp136 = scale->__get((int)10);		HX_STACK_VAR(tmp136,"tmp136");
		HX_STACK_LINE(833)
		Float tmp137 = (tmp135 * tmp136);		HX_STACK_VAR(tmp137,"tmp137");
		HX_STACK_LINE(833)
		Float tmp138 = tmp127->set((int)10,tmp137);		HX_STACK_VAR(tmp138,"tmp138");
		HX_STACK_LINE(833)
		tmp138;
		HX_STACK_LINE(834)
		::openfl::_Vector::FloatVector tmp139 = this->rawData;		HX_STACK_VAR(tmp139,"tmp139");
		HX_STACK_LINE(834)
		Float tmp140 = tmp139->set((int)11,(int)0);		HX_STACK_VAR(tmp140,"tmp140");
		HX_STACK_LINE(834)
		tmp140;
		HX_STACK_LINE(835)
		{
			HX_STACK_LINE(835)
			::openfl::geom::Vector3D tmp141 = components->get((int)0);		HX_STACK_VAR(tmp141,"tmp141");
			HX_STACK_LINE(835)
			Float tmp142 = tmp141->x;		HX_STACK_VAR(tmp142,"tmp142");
			HX_STACK_LINE(835)
			Float value = tmp142;		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(835)
			::openfl::_Vector::FloatVector tmp143 = this->rawData;		HX_STACK_VAR(tmp143,"tmp143");
			HX_STACK_LINE(835)
			Float tmp144 = value;		HX_STACK_VAR(tmp144,"tmp144");
			HX_STACK_LINE(835)
			tmp143->set((int)12,tmp144);
		}
		HX_STACK_LINE(836)
		{
			HX_STACK_LINE(836)
			::openfl::geom::Vector3D tmp141 = components->get((int)0);		HX_STACK_VAR(tmp141,"tmp141");
			HX_STACK_LINE(836)
			Float tmp142 = tmp141->y;		HX_STACK_VAR(tmp142,"tmp142");
			HX_STACK_LINE(836)
			Float value = tmp142;		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(836)
			::openfl::_Vector::FloatVector tmp143 = this->rawData;		HX_STACK_VAR(tmp143,"tmp143");
			HX_STACK_LINE(836)
			Float tmp144 = value;		HX_STACK_VAR(tmp144,"tmp144");
			HX_STACK_LINE(836)
			tmp143->set((int)13,tmp144);
		}
		HX_STACK_LINE(837)
		{
			HX_STACK_LINE(837)
			::openfl::geom::Vector3D tmp141 = components->get((int)0);		HX_STACK_VAR(tmp141,"tmp141");
			HX_STACK_LINE(837)
			Float tmp142 = tmp141->z;		HX_STACK_VAR(tmp142,"tmp142");
			HX_STACK_LINE(837)
			Float value = tmp142;		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(837)
			::openfl::_Vector::FloatVector tmp143 = this->rawData;		HX_STACK_VAR(tmp143,"tmp143");
			HX_STACK_LINE(837)
			Float tmp144 = value;		HX_STACK_VAR(tmp144,"tmp144");
			HX_STACK_LINE(837)
			tmp143->set((int)14,tmp144);
		}
		HX_STACK_LINE(838)
		::openfl::_Vector::FloatVector tmp141 = this->rawData;		HX_STACK_VAR(tmp141,"tmp141");
		HX_STACK_LINE(838)
		Float tmp142 = tmp141->set((int)15,(int)1);		HX_STACK_VAR(tmp142,"tmp142");
		HX_STACK_LINE(838)
		tmp142;
	}
	HX_STACK_LINE(842)
	::openfl::geom::Vector3D tmp24 = components->get((int)2);		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(842)
	Float tmp25 = tmp24->x;		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(842)
	bool tmp26 = (tmp25 == (int)0);		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(842)
	if ((tmp26)){
		HX_STACK_LINE(844)
		::openfl::_Vector::FloatVector tmp27 = this->rawData;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(844)
		Float tmp28 = tmp27->set((int)0,((Float)1e-15));		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(844)
		tmp28;
	}
	HX_STACK_LINE(848)
	::openfl::geom::Vector3D tmp27 = components->get((int)2);		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(848)
	Float tmp28 = tmp27->y;		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(848)
	bool tmp29 = (tmp28 == (int)0);		HX_STACK_VAR(tmp29,"tmp29");
	HX_STACK_LINE(848)
	if ((tmp29)){
		HX_STACK_LINE(850)
		::openfl::_Vector::FloatVector tmp30 = this->rawData;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(850)
		Float tmp31 = tmp30->set((int)5,((Float)1e-15));		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(850)
		tmp31;
	}
	HX_STACK_LINE(854)
	::openfl::geom::Vector3D tmp30 = components->get((int)2);		HX_STACK_VAR(tmp30,"tmp30");
	HX_STACK_LINE(854)
	Float tmp31 = tmp30->z;		HX_STACK_VAR(tmp31,"tmp31");
	HX_STACK_LINE(854)
	bool tmp32 = (tmp31 == (int)0);		HX_STACK_VAR(tmp32,"tmp32");
	HX_STACK_LINE(854)
	if ((tmp32)){
		HX_STACK_LINE(856)
		::openfl::_Vector::FloatVector tmp33 = this->rawData;		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(856)
		Float tmp34 = tmp33->set((int)10,((Float)1e-15));		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(856)
		tmp34;
	}
	HX_STACK_LINE(860)
	::openfl::geom::Vector3D tmp33 = components->get((int)2);		HX_STACK_VAR(tmp33,"tmp33");
	HX_STACK_LINE(860)
	Float tmp34 = tmp33->x;		HX_STACK_VAR(tmp34,"tmp34");
	HX_STACK_LINE(860)
	bool tmp35 = (tmp34 == (int)0);		HX_STACK_VAR(tmp35,"tmp35");
	HX_STACK_LINE(860)
	bool tmp36 = !(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
	HX_STACK_LINE(860)
	bool tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
	HX_STACK_LINE(860)
	bool tmp38;		HX_STACK_VAR(tmp38,"tmp38");
	HX_STACK_LINE(860)
	if ((tmp37)){
		HX_STACK_LINE(860)
		::openfl::geom::Vector3D tmp39 = components->get((int)2);		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(860)
		::openfl::geom::Vector3D tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(860)
		::openfl::geom::Vector3D tmp41 = tmp40;		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(860)
		Float tmp42 = tmp41->y;		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(860)
		Float tmp43 = tmp42;		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(860)
		Float tmp44 = tmp43;		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(860)
		tmp38 = (tmp44 == (int)0);
	}
	else{
		HX_STACK_LINE(860)
		tmp38 = true;
	}
	HX_STACK_LINE(860)
	bool tmp39 = !(tmp38);		HX_STACK_VAR(tmp39,"tmp39");
	HX_STACK_LINE(860)
	bool tmp40;		HX_STACK_VAR(tmp40,"tmp40");
	HX_STACK_LINE(860)
	if ((tmp39)){
		HX_STACK_LINE(860)
		::openfl::geom::Vector3D tmp41 = components->get((int)2);		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(860)
		::openfl::geom::Vector3D tmp42 = tmp41;		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(860)
		Float tmp43 = tmp42->y;		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(860)
		Float tmp44 = tmp43;		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(860)
		tmp40 = (tmp44 == (int)0);
	}
	else{
		HX_STACK_LINE(860)
		tmp40 = true;
	}
	HX_STACK_LINE(860)
	bool tmp41 = !(tmp40);		HX_STACK_VAR(tmp41,"tmp41");
	HX_STACK_LINE(860)
	return tmp41;
}


HX_DEFINE_DYNAMIC_FUNC2(Matrix3D_obj,recompose,return )

::openfl::geom::Vector3D Matrix3D_obj::transformVector( ::openfl::geom::Vector3D v){
	HX_STACK_FRAME("openfl.geom.Matrix3D","transformVector",0x3f2dcec7,"openfl.geom.Matrix3D.transformVector","openfl/geom/Matrix3D.hx",865,0x3acce238)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(867)
	Float x = v->x;		HX_STACK_VAR(x,"x");
	HX_STACK_LINE(868)
	Float y = v->y;		HX_STACK_VAR(y,"y");
	HX_STACK_LINE(869)
	Float z = v->z;		HX_STACK_VAR(z,"z");
	HX_STACK_LINE(871)
	Float tmp = x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(871)
	::openfl::_Vector::FloatVector tmp1 = this->rawData;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(871)
	Float tmp2 = tmp1->get((int)0);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(871)
	Float tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(871)
	Float tmp4 = (tmp * tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(871)
	Float tmp5 = y;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(871)
	::openfl::_Vector::FloatVector tmp6 = this->rawData;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(871)
	Float tmp7 = tmp6->get((int)4);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(871)
	Float tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(871)
	Float tmp9 = (tmp5 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(871)
	Float tmp10 = (tmp4 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(871)
	Float tmp11 = z;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(871)
	::openfl::_Vector::FloatVector tmp12 = this->rawData;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(871)
	Float tmp13 = tmp12->get((int)8);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(871)
	Float tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(871)
	Float tmp15 = (tmp11 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(871)
	Float tmp16 = (tmp10 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(871)
	::openfl::_Vector::FloatVector tmp17 = this->rawData;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(871)
	Float tmp18 = tmp17->get((int)12);		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(871)
	Float tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(871)
	Float tmp20 = (tmp16 + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(871)
	Float tmp21 = x;		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(871)
	::openfl::_Vector::FloatVector tmp22 = this->rawData;		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(871)
	Float tmp23 = tmp22->get((int)1);		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(871)
	Float tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(871)
	Float tmp25 = (tmp21 * tmp24);		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(871)
	Float tmp26 = y;		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(871)
	::openfl::_Vector::FloatVector tmp27 = this->rawData;		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(871)
	Float tmp28 = tmp27->get((int)5);		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(871)
	Float tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
	HX_STACK_LINE(871)
	Float tmp30 = (tmp26 * tmp29);		HX_STACK_VAR(tmp30,"tmp30");
	HX_STACK_LINE(871)
	Float tmp31 = (tmp25 + tmp30);		HX_STACK_VAR(tmp31,"tmp31");
	HX_STACK_LINE(871)
	Float tmp32 = z;		HX_STACK_VAR(tmp32,"tmp32");
	HX_STACK_LINE(871)
	::openfl::_Vector::FloatVector tmp33 = this->rawData;		HX_STACK_VAR(tmp33,"tmp33");
	HX_STACK_LINE(871)
	Float tmp34 = tmp33->get((int)9);		HX_STACK_VAR(tmp34,"tmp34");
	HX_STACK_LINE(871)
	Float tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
	HX_STACK_LINE(871)
	Float tmp36 = (tmp32 * tmp35);		HX_STACK_VAR(tmp36,"tmp36");
	HX_STACK_LINE(871)
	Float tmp37 = (tmp31 + tmp36);		HX_STACK_VAR(tmp37,"tmp37");
	HX_STACK_LINE(871)
	::openfl::_Vector::FloatVector tmp38 = this->rawData;		HX_STACK_VAR(tmp38,"tmp38");
	HX_STACK_LINE(871)
	Float tmp39 = tmp38->get((int)13);		HX_STACK_VAR(tmp39,"tmp39");
	HX_STACK_LINE(871)
	Float tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
	HX_STACK_LINE(871)
	Float tmp41 = (tmp37 + tmp40);		HX_STACK_VAR(tmp41,"tmp41");
	HX_STACK_LINE(871)
	Float tmp42 = x;		HX_STACK_VAR(tmp42,"tmp42");
	HX_STACK_LINE(871)
	::openfl::_Vector::FloatVector tmp43 = this->rawData;		HX_STACK_VAR(tmp43,"tmp43");
	HX_STACK_LINE(871)
	Float tmp44 = tmp43->get((int)2);		HX_STACK_VAR(tmp44,"tmp44");
	HX_STACK_LINE(871)
	Float tmp45 = tmp44;		HX_STACK_VAR(tmp45,"tmp45");
	HX_STACK_LINE(871)
	Float tmp46 = (tmp42 * tmp45);		HX_STACK_VAR(tmp46,"tmp46");
	HX_STACK_LINE(871)
	Float tmp47 = y;		HX_STACK_VAR(tmp47,"tmp47");
	HX_STACK_LINE(871)
	::openfl::_Vector::FloatVector tmp48 = this->rawData;		HX_STACK_VAR(tmp48,"tmp48");
	HX_STACK_LINE(871)
	Float tmp49 = tmp48->get((int)6);		HX_STACK_VAR(tmp49,"tmp49");
	HX_STACK_LINE(871)
	Float tmp50 = tmp49;		HX_STACK_VAR(tmp50,"tmp50");
	HX_STACK_LINE(871)
	Float tmp51 = (tmp47 * tmp50);		HX_STACK_VAR(tmp51,"tmp51");
	HX_STACK_LINE(871)
	Float tmp52 = (tmp46 + tmp51);		HX_STACK_VAR(tmp52,"tmp52");
	HX_STACK_LINE(871)
	Float tmp53 = z;		HX_STACK_VAR(tmp53,"tmp53");
	HX_STACK_LINE(871)
	::openfl::_Vector::FloatVector tmp54 = this->rawData;		HX_STACK_VAR(tmp54,"tmp54");
	HX_STACK_LINE(871)
	Float tmp55 = tmp54->get((int)10);		HX_STACK_VAR(tmp55,"tmp55");
	HX_STACK_LINE(871)
	Float tmp56 = tmp55;		HX_STACK_VAR(tmp56,"tmp56");
	HX_STACK_LINE(871)
	Float tmp57 = (tmp53 * tmp56);		HX_STACK_VAR(tmp57,"tmp57");
	HX_STACK_LINE(871)
	Float tmp58 = (tmp52 + tmp57);		HX_STACK_VAR(tmp58,"tmp58");
	HX_STACK_LINE(871)
	::openfl::_Vector::FloatVector tmp59 = this->rawData;		HX_STACK_VAR(tmp59,"tmp59");
	HX_STACK_LINE(871)
	Float tmp60 = tmp59->get((int)14);		HX_STACK_VAR(tmp60,"tmp60");
	HX_STACK_LINE(871)
	Float tmp61 = tmp60;		HX_STACK_VAR(tmp61,"tmp61");
	HX_STACK_LINE(871)
	Float tmp62 = (tmp58 + tmp61);		HX_STACK_VAR(tmp62,"tmp62");
	HX_STACK_LINE(871)
	Float tmp63 = x;		HX_STACK_VAR(tmp63,"tmp63");
	HX_STACK_LINE(871)
	::openfl::_Vector::FloatVector tmp64 = this->rawData;		HX_STACK_VAR(tmp64,"tmp64");
	HX_STACK_LINE(871)
	Float tmp65 = tmp64->get((int)3);		HX_STACK_VAR(tmp65,"tmp65");
	HX_STACK_LINE(871)
	Float tmp66 = tmp65;		HX_STACK_VAR(tmp66,"tmp66");
	HX_STACK_LINE(871)
	Float tmp67 = (tmp63 * tmp66);		HX_STACK_VAR(tmp67,"tmp67");
	HX_STACK_LINE(871)
	Float tmp68 = y;		HX_STACK_VAR(tmp68,"tmp68");
	HX_STACK_LINE(871)
	::openfl::_Vector::FloatVector tmp69 = this->rawData;		HX_STACK_VAR(tmp69,"tmp69");
	HX_STACK_LINE(871)
	Float tmp70 = tmp69->get((int)7);		HX_STACK_VAR(tmp70,"tmp70");
	HX_STACK_LINE(871)
	Float tmp71 = tmp70;		HX_STACK_VAR(tmp71,"tmp71");
	HX_STACK_LINE(871)
	Float tmp72 = (tmp68 * tmp71);		HX_STACK_VAR(tmp72,"tmp72");
	HX_STACK_LINE(871)
	Float tmp73 = (tmp67 + tmp72);		HX_STACK_VAR(tmp73,"tmp73");
	HX_STACK_LINE(871)
	Float tmp74 = z;		HX_STACK_VAR(tmp74,"tmp74");
	HX_STACK_LINE(871)
	::openfl::_Vector::FloatVector tmp75 = this->rawData;		HX_STACK_VAR(tmp75,"tmp75");
	HX_STACK_LINE(871)
	Float tmp76 = tmp75->get((int)11);		HX_STACK_VAR(tmp76,"tmp76");
	HX_STACK_LINE(871)
	Float tmp77 = tmp76;		HX_STACK_VAR(tmp77,"tmp77");
	HX_STACK_LINE(871)
	Float tmp78 = (tmp74 * tmp77);		HX_STACK_VAR(tmp78,"tmp78");
	HX_STACK_LINE(871)
	Float tmp79 = (tmp73 + tmp78);		HX_STACK_VAR(tmp79,"tmp79");
	HX_STACK_LINE(871)
	::openfl::_Vector::FloatVector tmp80 = this->rawData;		HX_STACK_VAR(tmp80,"tmp80");
	HX_STACK_LINE(871)
	Float tmp81 = tmp80->get((int)15);		HX_STACK_VAR(tmp81,"tmp81");
	HX_STACK_LINE(871)
	Float tmp82 = tmp81;		HX_STACK_VAR(tmp82,"tmp82");
	HX_STACK_LINE(871)
	Float tmp83 = (tmp79 + tmp82);		HX_STACK_VAR(tmp83,"tmp83");
	HX_STACK_LINE(871)
	::openfl::geom::Vector3D tmp84 = ::openfl::geom::Vector3D_obj::__new(tmp20,tmp41,tmp62,tmp83);		HX_STACK_VAR(tmp84,"tmp84");
	HX_STACK_LINE(871)
	return tmp84;
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix3D_obj,transformVector,return )

Void Matrix3D_obj::transformVectors( ::openfl::_Vector::FloatVector vin,::openfl::_Vector::FloatVector vout){
{
		HX_STACK_FRAME("openfl.geom.Matrix3D","transformVectors",0x08e71fcc,"openfl.geom.Matrix3D.transformVectors","openfl/geom/Matrix3D.hx",876,0x3acce238)
		HX_STACK_THIS(this)
		HX_STACK_ARG(vin,"vin")
		HX_STACK_ARG(vout,"vout")
		HX_STACK_LINE(878)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(879)
		Float x;		HX_STACK_VAR(x,"x");
		HX_STACK_LINE(879)
		Float y;		HX_STACK_VAR(y,"y");
		HX_STACK_LINE(879)
		Float z;		HX_STACK_VAR(z,"z");
		HX_STACK_LINE(881)
		while((true)){
			HX_STACK_LINE(881)
			int tmp = (i + (int)3);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(881)
			int tmp1 = vin->get_length();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(881)
			bool tmp2 = (tmp <= tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(881)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(881)
			if ((tmp3)){
				HX_STACK_LINE(881)
				break;
			}
			HX_STACK_LINE(883)
			int tmp4 = i;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(883)
			Float tmp5 = vin->get(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(883)
			x = tmp5;
			HX_STACK_LINE(884)
			int tmp6 = (i + (int)1);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(884)
			Float tmp7 = vin->get(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(884)
			y = tmp7;
			HX_STACK_LINE(885)
			int tmp8 = (i + (int)2);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(885)
			Float tmp9 = vin->get(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(885)
			z = tmp9;
			HX_STACK_LINE(887)
			{
				HX_STACK_LINE(887)
				Float tmp10 = x;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(887)
				::openfl::_Vector::FloatVector tmp11 = this->rawData;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(887)
				Float tmp12 = tmp11->get((int)0);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(887)
				Float tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(887)
				Float tmp14 = (tmp10 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(887)
				Float tmp15 = y;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(887)
				::openfl::_Vector::FloatVector tmp16 = this->rawData;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(887)
				Float tmp17 = tmp16->get((int)4);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(887)
				Float tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(887)
				Float tmp19 = (tmp15 * tmp18);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(887)
				Float tmp20 = (tmp14 + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(887)
				Float tmp21 = z;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(887)
				::openfl::_Vector::FloatVector tmp22 = this->rawData;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(887)
				Float tmp23 = tmp22->get((int)8);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(887)
				Float tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(887)
				Float tmp25 = (tmp21 * tmp24);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(887)
				Float tmp26 = (tmp20 + tmp25);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(887)
				::openfl::_Vector::FloatVector tmp27 = this->rawData;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(887)
				Float tmp28 = tmp27->get((int)12);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(887)
				Float tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(887)
				Float tmp30 = (tmp26 + tmp29);		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(887)
				Float value = tmp30;		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(887)
				int tmp31 = i;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(887)
				Float tmp32 = value;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(887)
				vout->set(tmp31,tmp32);
			}
			HX_STACK_LINE(888)
			{
				HX_STACK_LINE(888)
				Float tmp10 = x;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(888)
				::openfl::_Vector::FloatVector tmp11 = this->rawData;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(888)
				Float tmp12 = tmp11->get((int)1);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(888)
				Float tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(888)
				Float tmp14 = (tmp10 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(888)
				Float tmp15 = y;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(888)
				::openfl::_Vector::FloatVector tmp16 = this->rawData;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(888)
				Float tmp17 = tmp16->get((int)5);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(888)
				Float tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(888)
				Float tmp19 = (tmp15 * tmp18);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(888)
				Float tmp20 = (tmp14 + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(888)
				Float tmp21 = z;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(888)
				::openfl::_Vector::FloatVector tmp22 = this->rawData;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(888)
				Float tmp23 = tmp22->get((int)9);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(888)
				Float tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(888)
				Float tmp25 = (tmp21 * tmp24);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(888)
				Float tmp26 = (tmp20 + tmp25);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(888)
				::openfl::_Vector::FloatVector tmp27 = this->rawData;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(888)
				Float tmp28 = tmp27->get((int)13);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(888)
				Float tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(888)
				Float tmp30 = (tmp26 + tmp29);		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(888)
				Float value = tmp30;		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(888)
				int tmp31 = (i + (int)1);		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(888)
				Float tmp32 = value;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(888)
				vout->set(tmp31,tmp32);
			}
			HX_STACK_LINE(889)
			{
				HX_STACK_LINE(889)
				Float tmp10 = x;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(889)
				::openfl::_Vector::FloatVector tmp11 = this->rawData;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(889)
				Float tmp12 = tmp11->get((int)2);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(889)
				Float tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(889)
				Float tmp14 = (tmp10 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(889)
				Float tmp15 = y;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(889)
				::openfl::_Vector::FloatVector tmp16 = this->rawData;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(889)
				Float tmp17 = tmp16->get((int)6);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(889)
				Float tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(889)
				Float tmp19 = (tmp15 * tmp18);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(889)
				Float tmp20 = (tmp14 + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(889)
				Float tmp21 = z;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(889)
				::openfl::_Vector::FloatVector tmp22 = this->rawData;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(889)
				Float tmp23 = tmp22->get((int)10);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(889)
				Float tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(889)
				Float tmp25 = (tmp21 * tmp24);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(889)
				Float tmp26 = (tmp20 + tmp25);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(889)
				::openfl::_Vector::FloatVector tmp27 = this->rawData;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(889)
				Float tmp28 = tmp27->get((int)14);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(889)
				Float tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(889)
				Float tmp30 = (tmp26 + tmp29);		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(889)
				Float value = tmp30;		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(889)
				int tmp31 = (i + (int)2);		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(889)
				Float tmp32 = value;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(889)
				vout->set(tmp31,tmp32);
			}
			HX_STACK_LINE(891)
			hx::AddEq(i,(int)3);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Matrix3D_obj,transformVectors,(void))

Void Matrix3D_obj::transpose( ){
{
		HX_STACK_FRAME("openfl.geom.Matrix3D","transpose",0x1ba989f1,"openfl.geom.Matrix3D.transpose","openfl/geom/Matrix3D.hx",898,0x3acce238)
		HX_STACK_THIS(this)
		HX_STACK_LINE(900)
		::openfl::_Vector::FloatVector tmp = this->rawData;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(900)
		::openfl::_Vector::IVector tmp1 = tmp->copy();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(900)
		::openfl::_Vector::FloatVector oRawData = ((::openfl::_Vector::FloatVector)(tmp1));		HX_STACK_VAR(oRawData,"oRawData");
		HX_STACK_LINE(901)
		{
			HX_STACK_LINE(901)
			Float tmp2 = oRawData->get((int)4);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(901)
			Float value = tmp2;		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(901)
			::openfl::_Vector::FloatVector tmp3 = this->rawData;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(901)
			Float tmp4 = value;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(901)
			tmp3->set((int)1,tmp4);
		}
		HX_STACK_LINE(902)
		{
			HX_STACK_LINE(902)
			Float tmp2 = oRawData->get((int)8);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(902)
			Float value = tmp2;		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(902)
			::openfl::_Vector::FloatVector tmp3 = this->rawData;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(902)
			Float tmp4 = value;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(902)
			tmp3->set((int)2,tmp4);
		}
		HX_STACK_LINE(903)
		{
			HX_STACK_LINE(903)
			Float tmp2 = oRawData->get((int)12);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(903)
			Float value = tmp2;		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(903)
			::openfl::_Vector::FloatVector tmp3 = this->rawData;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(903)
			Float tmp4 = value;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(903)
			tmp3->set((int)3,tmp4);
		}
		HX_STACK_LINE(904)
		{
			HX_STACK_LINE(904)
			Float tmp2 = oRawData->get((int)1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(904)
			Float value = tmp2;		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(904)
			::openfl::_Vector::FloatVector tmp3 = this->rawData;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(904)
			Float tmp4 = value;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(904)
			tmp3->set((int)4,tmp4);
		}
		HX_STACK_LINE(905)
		{
			HX_STACK_LINE(905)
			Float tmp2 = oRawData->get((int)9);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(905)
			Float value = tmp2;		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(905)
			::openfl::_Vector::FloatVector tmp3 = this->rawData;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(905)
			Float tmp4 = value;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(905)
			tmp3->set((int)6,tmp4);
		}
		HX_STACK_LINE(906)
		{
			HX_STACK_LINE(906)
			Float tmp2 = oRawData->get((int)13);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(906)
			Float value = tmp2;		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(906)
			::openfl::_Vector::FloatVector tmp3 = this->rawData;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(906)
			Float tmp4 = value;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(906)
			tmp3->set((int)7,tmp4);
		}
		HX_STACK_LINE(907)
		{
			HX_STACK_LINE(907)
			Float tmp2 = oRawData->get((int)2);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(907)
			Float value = tmp2;		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(907)
			::openfl::_Vector::FloatVector tmp3 = this->rawData;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(907)
			Float tmp4 = value;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(907)
			tmp3->set((int)8,tmp4);
		}
		HX_STACK_LINE(908)
		{
			HX_STACK_LINE(908)
			Float tmp2 = oRawData->get((int)6);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(908)
			Float value = tmp2;		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(908)
			::openfl::_Vector::FloatVector tmp3 = this->rawData;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(908)
			Float tmp4 = value;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(908)
			tmp3->set((int)9,tmp4);
		}
		HX_STACK_LINE(909)
		{
			HX_STACK_LINE(909)
			Float tmp2 = oRawData->get((int)14);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(909)
			Float value = tmp2;		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(909)
			::openfl::_Vector::FloatVector tmp3 = this->rawData;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(909)
			Float tmp4 = value;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(909)
			tmp3->set((int)11,tmp4);
		}
		HX_STACK_LINE(910)
		{
			HX_STACK_LINE(910)
			Float tmp2 = oRawData->get((int)3);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(910)
			Float value = tmp2;		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(910)
			::openfl::_Vector::FloatVector tmp3 = this->rawData;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(910)
			Float tmp4 = value;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(910)
			tmp3->set((int)12,tmp4);
		}
		HX_STACK_LINE(911)
		{
			HX_STACK_LINE(911)
			Float tmp2 = oRawData->get((int)7);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(911)
			Float value = tmp2;		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(911)
			::openfl::_Vector::FloatVector tmp3 = this->rawData;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(911)
			Float tmp4 = value;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(911)
			tmp3->set((int)13,tmp4);
		}
		HX_STACK_LINE(912)
		{
			HX_STACK_LINE(912)
			Float tmp2 = oRawData->get((int)11);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(912)
			Float value = tmp2;		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(912)
			::openfl::_Vector::FloatVector tmp3 = this->rawData;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(912)
			Float tmp4 = value;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(912)
			tmp3->set((int)14,tmp4);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Matrix3D_obj,transpose,(void))

Float Matrix3D_obj::get_determinant( ){
	HX_STACK_FRAME("openfl.geom.Matrix3D","get_determinant",0x5f71b8a4,"openfl.geom.Matrix3D.get_determinant","openfl/geom/Matrix3D.hx",956,0x3acce238)
	HX_STACK_THIS(this)
	HX_STACK_LINE(958)
	::openfl::_Vector::FloatVector tmp = this->rawData;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(958)
	Float tmp1 = tmp->get((int)0);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(958)
	Float tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(958)
	::openfl::_Vector::FloatVector tmp3 = this->rawData;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(958)
	Float tmp4 = tmp3->get((int)5);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(958)
	Float tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(958)
	Float tmp6 = (tmp2 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(958)
	::openfl::_Vector::FloatVector tmp7 = this->rawData;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(958)
	Float tmp8 = tmp7->get((int)4);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(958)
	Float tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(958)
	::openfl::_Vector::FloatVector tmp10 = this->rawData;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(958)
	Float tmp11 = tmp10->get((int)1);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(958)
	Float tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(958)
	Float tmp13 = (tmp9 * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(958)
	Float tmp14 = (tmp6 - tmp13);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(958)
	::openfl::_Vector::FloatVector tmp15 = this->rawData;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(958)
	Float tmp16 = tmp15->get((int)10);		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(958)
	Float tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(958)
	::openfl::_Vector::FloatVector tmp18 = this->rawData;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(958)
	Float tmp19 = tmp18->get((int)15);		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(958)
	Float tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(958)
	Float tmp21 = (tmp17 * tmp20);		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(958)
	::openfl::_Vector::FloatVector tmp22 = this->rawData;		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(958)
	Float tmp23 = tmp22->get((int)14);		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(958)
	Float tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(958)
	::openfl::_Vector::FloatVector tmp25 = this->rawData;		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(958)
	Float tmp26 = tmp25->get((int)11);		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(958)
	Float tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(958)
	Float tmp28 = (tmp24 * tmp27);		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(958)
	Float tmp29 = (tmp21 - tmp28);		HX_STACK_VAR(tmp29,"tmp29");
	HX_STACK_LINE(958)
	Float tmp30 = (tmp14 * tmp29);		HX_STACK_VAR(tmp30,"tmp30");
	HX_STACK_LINE(959)
	::openfl::_Vector::FloatVector tmp31 = this->rawData;		HX_STACK_VAR(tmp31,"tmp31");
	HX_STACK_LINE(959)
	Float tmp32 = tmp31->get((int)0);		HX_STACK_VAR(tmp32,"tmp32");
	HX_STACK_LINE(959)
	Float tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
	HX_STACK_LINE(959)
	::openfl::_Vector::FloatVector tmp34 = this->rawData;		HX_STACK_VAR(tmp34,"tmp34");
	HX_STACK_LINE(959)
	Float tmp35 = tmp34->get((int)9);		HX_STACK_VAR(tmp35,"tmp35");
	HX_STACK_LINE(959)
	Float tmp36 = tmp35;		HX_STACK_VAR(tmp36,"tmp36");
	HX_STACK_LINE(959)
	Float tmp37 = (tmp33 * tmp36);		HX_STACK_VAR(tmp37,"tmp37");
	HX_STACK_LINE(959)
	::openfl::_Vector::FloatVector tmp38 = this->rawData;		HX_STACK_VAR(tmp38,"tmp38");
	HX_STACK_LINE(959)
	Float tmp39 = tmp38->get((int)8);		HX_STACK_VAR(tmp39,"tmp39");
	HX_STACK_LINE(959)
	Float tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
	HX_STACK_LINE(959)
	::openfl::_Vector::FloatVector tmp41 = this->rawData;		HX_STACK_VAR(tmp41,"tmp41");
	HX_STACK_LINE(959)
	Float tmp42 = tmp41->get((int)1);		HX_STACK_VAR(tmp42,"tmp42");
	HX_STACK_LINE(959)
	Float tmp43 = tmp42;		HX_STACK_VAR(tmp43,"tmp43");
	HX_STACK_LINE(959)
	Float tmp44 = (tmp40 * tmp43);		HX_STACK_VAR(tmp44,"tmp44");
	HX_STACK_LINE(959)
	Float tmp45 = (tmp37 - tmp44);		HX_STACK_VAR(tmp45,"tmp45");
	HX_STACK_LINE(959)
	::openfl::_Vector::FloatVector tmp46 = this->rawData;		HX_STACK_VAR(tmp46,"tmp46");
	HX_STACK_LINE(959)
	Float tmp47 = tmp46->get((int)6);		HX_STACK_VAR(tmp47,"tmp47");
	HX_STACK_LINE(959)
	Float tmp48 = tmp47;		HX_STACK_VAR(tmp48,"tmp48");
	HX_STACK_LINE(959)
	::openfl::_Vector::FloatVector tmp49 = this->rawData;		HX_STACK_VAR(tmp49,"tmp49");
	HX_STACK_LINE(959)
	Float tmp50 = tmp49->get((int)15);		HX_STACK_VAR(tmp50,"tmp50");
	HX_STACK_LINE(959)
	Float tmp51 = tmp50;		HX_STACK_VAR(tmp51,"tmp51");
	HX_STACK_LINE(959)
	Float tmp52 = (tmp48 * tmp51);		HX_STACK_VAR(tmp52,"tmp52");
	HX_STACK_LINE(959)
	::openfl::_Vector::FloatVector tmp53 = this->rawData;		HX_STACK_VAR(tmp53,"tmp53");
	HX_STACK_LINE(959)
	Float tmp54 = tmp53->get((int)14);		HX_STACK_VAR(tmp54,"tmp54");
	HX_STACK_LINE(959)
	Float tmp55 = tmp54;		HX_STACK_VAR(tmp55,"tmp55");
	HX_STACK_LINE(959)
	::openfl::_Vector::FloatVector tmp56 = this->rawData;		HX_STACK_VAR(tmp56,"tmp56");
	HX_STACK_LINE(959)
	Float tmp57 = tmp56->get((int)7);		HX_STACK_VAR(tmp57,"tmp57");
	HX_STACK_LINE(959)
	Float tmp58 = tmp57;		HX_STACK_VAR(tmp58,"tmp58");
	HX_STACK_LINE(959)
	Float tmp59 = (tmp55 * tmp58);		HX_STACK_VAR(tmp59,"tmp59");
	HX_STACK_LINE(959)
	Float tmp60 = (tmp52 - tmp59);		HX_STACK_VAR(tmp60,"tmp60");
	HX_STACK_LINE(959)
	Float tmp61 = (tmp45 * tmp60);		HX_STACK_VAR(tmp61,"tmp61");
	HX_STACK_LINE(958)
	Float tmp62 = (tmp30 - tmp61);		HX_STACK_VAR(tmp62,"tmp62");
	HX_STACK_LINE(960)
	::openfl::_Vector::FloatVector tmp63 = this->rawData;		HX_STACK_VAR(tmp63,"tmp63");
	HX_STACK_LINE(960)
	Float tmp64 = tmp63->get((int)0);		HX_STACK_VAR(tmp64,"tmp64");
	HX_STACK_LINE(960)
	Float tmp65 = tmp64;		HX_STACK_VAR(tmp65,"tmp65");
	HX_STACK_LINE(960)
	::openfl::_Vector::FloatVector tmp66 = this->rawData;		HX_STACK_VAR(tmp66,"tmp66");
	HX_STACK_LINE(960)
	Float tmp67 = tmp66->get((int)13);		HX_STACK_VAR(tmp67,"tmp67");
	HX_STACK_LINE(960)
	Float tmp68 = tmp67;		HX_STACK_VAR(tmp68,"tmp68");
	HX_STACK_LINE(960)
	Float tmp69 = (tmp65 * tmp68);		HX_STACK_VAR(tmp69,"tmp69");
	HX_STACK_LINE(960)
	::openfl::_Vector::FloatVector tmp70 = this->rawData;		HX_STACK_VAR(tmp70,"tmp70");
	HX_STACK_LINE(960)
	Float tmp71 = tmp70->get((int)12);		HX_STACK_VAR(tmp71,"tmp71");
	HX_STACK_LINE(960)
	Float tmp72 = tmp71;		HX_STACK_VAR(tmp72,"tmp72");
	HX_STACK_LINE(960)
	::openfl::_Vector::FloatVector tmp73 = this->rawData;		HX_STACK_VAR(tmp73,"tmp73");
	HX_STACK_LINE(960)
	Float tmp74 = tmp73->get((int)1);		HX_STACK_VAR(tmp74,"tmp74");
	HX_STACK_LINE(960)
	Float tmp75 = tmp74;		HX_STACK_VAR(tmp75,"tmp75");
	HX_STACK_LINE(960)
	Float tmp76 = (tmp72 * tmp75);		HX_STACK_VAR(tmp76,"tmp76");
	HX_STACK_LINE(960)
	Float tmp77 = (tmp69 - tmp76);		HX_STACK_VAR(tmp77,"tmp77");
	HX_STACK_LINE(960)
	::openfl::_Vector::FloatVector tmp78 = this->rawData;		HX_STACK_VAR(tmp78,"tmp78");
	HX_STACK_LINE(960)
	Float tmp79 = tmp78->get((int)6);		HX_STACK_VAR(tmp79,"tmp79");
	HX_STACK_LINE(960)
	Float tmp80 = tmp79;		HX_STACK_VAR(tmp80,"tmp80");
	HX_STACK_LINE(960)
	::openfl::_Vector::FloatVector tmp81 = this->rawData;		HX_STACK_VAR(tmp81,"tmp81");
	HX_STACK_LINE(960)
	Float tmp82 = tmp81->get((int)11);		HX_STACK_VAR(tmp82,"tmp82");
	HX_STACK_LINE(960)
	Float tmp83 = tmp82;		HX_STACK_VAR(tmp83,"tmp83");
	HX_STACK_LINE(960)
	Float tmp84 = (tmp80 * tmp83);		HX_STACK_VAR(tmp84,"tmp84");
	HX_STACK_LINE(960)
	::openfl::_Vector::FloatVector tmp85 = this->rawData;		HX_STACK_VAR(tmp85,"tmp85");
	HX_STACK_LINE(960)
	Float tmp86 = tmp85->get((int)10);		HX_STACK_VAR(tmp86,"tmp86");
	HX_STACK_LINE(960)
	Float tmp87 = tmp86;		HX_STACK_VAR(tmp87,"tmp87");
	HX_STACK_LINE(960)
	::openfl::_Vector::FloatVector tmp88 = this->rawData;		HX_STACK_VAR(tmp88,"tmp88");
	HX_STACK_LINE(960)
	Float tmp89 = tmp88->get((int)7);		HX_STACK_VAR(tmp89,"tmp89");
	HX_STACK_LINE(960)
	Float tmp90 = tmp89;		HX_STACK_VAR(tmp90,"tmp90");
	HX_STACK_LINE(960)
	Float tmp91 = (tmp87 * tmp90);		HX_STACK_VAR(tmp91,"tmp91");
	HX_STACK_LINE(960)
	Float tmp92 = (tmp84 - tmp91);		HX_STACK_VAR(tmp92,"tmp92");
	HX_STACK_LINE(960)
	Float tmp93 = (tmp77 * tmp92);		HX_STACK_VAR(tmp93,"tmp93");
	HX_STACK_LINE(958)
	Float tmp94 = (tmp62 + tmp93);		HX_STACK_VAR(tmp94,"tmp94");
	HX_STACK_LINE(961)
	::openfl::_Vector::FloatVector tmp95 = this->rawData;		HX_STACK_VAR(tmp95,"tmp95");
	HX_STACK_LINE(961)
	Float tmp96 = tmp95->get((int)4);		HX_STACK_VAR(tmp96,"tmp96");
	HX_STACK_LINE(961)
	Float tmp97 = tmp96;		HX_STACK_VAR(tmp97,"tmp97");
	HX_STACK_LINE(961)
	::openfl::_Vector::FloatVector tmp98 = this->rawData;		HX_STACK_VAR(tmp98,"tmp98");
	HX_STACK_LINE(961)
	Float tmp99 = tmp98->get((int)9);		HX_STACK_VAR(tmp99,"tmp99");
	HX_STACK_LINE(961)
	Float tmp100 = tmp99;		HX_STACK_VAR(tmp100,"tmp100");
	HX_STACK_LINE(961)
	Float tmp101 = (tmp97 * tmp100);		HX_STACK_VAR(tmp101,"tmp101");
	HX_STACK_LINE(961)
	::openfl::_Vector::FloatVector tmp102 = this->rawData;		HX_STACK_VAR(tmp102,"tmp102");
	HX_STACK_LINE(961)
	Float tmp103 = tmp102->get((int)8);		HX_STACK_VAR(tmp103,"tmp103");
	HX_STACK_LINE(961)
	Float tmp104 = tmp103;		HX_STACK_VAR(tmp104,"tmp104");
	HX_STACK_LINE(961)
	::openfl::_Vector::FloatVector tmp105 = this->rawData;		HX_STACK_VAR(tmp105,"tmp105");
	HX_STACK_LINE(961)
	Float tmp106 = tmp105->get((int)5);		HX_STACK_VAR(tmp106,"tmp106");
	HX_STACK_LINE(961)
	Float tmp107 = tmp106;		HX_STACK_VAR(tmp107,"tmp107");
	HX_STACK_LINE(961)
	Float tmp108 = (tmp104 * tmp107);		HX_STACK_VAR(tmp108,"tmp108");
	HX_STACK_LINE(961)
	Float tmp109 = (tmp101 - tmp108);		HX_STACK_VAR(tmp109,"tmp109");
	HX_STACK_LINE(961)
	::openfl::_Vector::FloatVector tmp110 = this->rawData;		HX_STACK_VAR(tmp110,"tmp110");
	HX_STACK_LINE(961)
	Float tmp111 = tmp110->get((int)2);		HX_STACK_VAR(tmp111,"tmp111");
	HX_STACK_LINE(961)
	Float tmp112 = tmp111;		HX_STACK_VAR(tmp112,"tmp112");
	HX_STACK_LINE(961)
	::openfl::_Vector::FloatVector tmp113 = this->rawData;		HX_STACK_VAR(tmp113,"tmp113");
	HX_STACK_LINE(961)
	Float tmp114 = tmp113->get((int)15);		HX_STACK_VAR(tmp114,"tmp114");
	HX_STACK_LINE(961)
	Float tmp115 = tmp114;		HX_STACK_VAR(tmp115,"tmp115");
	HX_STACK_LINE(961)
	Float tmp116 = (tmp112 * tmp115);		HX_STACK_VAR(tmp116,"tmp116");
	HX_STACK_LINE(961)
	::openfl::_Vector::FloatVector tmp117 = this->rawData;		HX_STACK_VAR(tmp117,"tmp117");
	HX_STACK_LINE(961)
	Float tmp118 = tmp117->get((int)14);		HX_STACK_VAR(tmp118,"tmp118");
	HX_STACK_LINE(961)
	Float tmp119 = tmp118;		HX_STACK_VAR(tmp119,"tmp119");
	HX_STACK_LINE(961)
	::openfl::_Vector::FloatVector tmp120 = this->rawData;		HX_STACK_VAR(tmp120,"tmp120");
	HX_STACK_LINE(961)
	Float tmp121 = tmp120->get((int)3);		HX_STACK_VAR(tmp121,"tmp121");
	HX_STACK_LINE(961)
	Float tmp122 = tmp121;		HX_STACK_VAR(tmp122,"tmp122");
	HX_STACK_LINE(961)
	Float tmp123 = (tmp119 * tmp122);		HX_STACK_VAR(tmp123,"tmp123");
	HX_STACK_LINE(961)
	Float tmp124 = (tmp116 - tmp123);		HX_STACK_VAR(tmp124,"tmp124");
	HX_STACK_LINE(961)
	Float tmp125 = (tmp109 * tmp124);		HX_STACK_VAR(tmp125,"tmp125");
	HX_STACK_LINE(958)
	Float tmp126 = (tmp94 + tmp125);		HX_STACK_VAR(tmp126,"tmp126");
	HX_STACK_LINE(962)
	::openfl::_Vector::FloatVector tmp127 = this->rawData;		HX_STACK_VAR(tmp127,"tmp127");
	HX_STACK_LINE(962)
	Float tmp128 = tmp127->get((int)4);		HX_STACK_VAR(tmp128,"tmp128");
	HX_STACK_LINE(962)
	Float tmp129 = tmp128;		HX_STACK_VAR(tmp129,"tmp129");
	HX_STACK_LINE(962)
	::openfl::_Vector::FloatVector tmp130 = this->rawData;		HX_STACK_VAR(tmp130,"tmp130");
	HX_STACK_LINE(962)
	Float tmp131 = tmp130->get((int)13);		HX_STACK_VAR(tmp131,"tmp131");
	HX_STACK_LINE(962)
	Float tmp132 = tmp131;		HX_STACK_VAR(tmp132,"tmp132");
	HX_STACK_LINE(962)
	Float tmp133 = (tmp129 * tmp132);		HX_STACK_VAR(tmp133,"tmp133");
	HX_STACK_LINE(962)
	::openfl::_Vector::FloatVector tmp134 = this->rawData;		HX_STACK_VAR(tmp134,"tmp134");
	HX_STACK_LINE(962)
	Float tmp135 = tmp134->get((int)12);		HX_STACK_VAR(tmp135,"tmp135");
	HX_STACK_LINE(962)
	Float tmp136 = tmp135;		HX_STACK_VAR(tmp136,"tmp136");
	HX_STACK_LINE(962)
	::openfl::_Vector::FloatVector tmp137 = this->rawData;		HX_STACK_VAR(tmp137,"tmp137");
	HX_STACK_LINE(962)
	Float tmp138 = tmp137->get((int)5);		HX_STACK_VAR(tmp138,"tmp138");
	HX_STACK_LINE(962)
	Float tmp139 = tmp138;		HX_STACK_VAR(tmp139,"tmp139");
	HX_STACK_LINE(962)
	Float tmp140 = (tmp136 * tmp139);		HX_STACK_VAR(tmp140,"tmp140");
	HX_STACK_LINE(962)
	Float tmp141 = (tmp133 - tmp140);		HX_STACK_VAR(tmp141,"tmp141");
	HX_STACK_LINE(962)
	::openfl::_Vector::FloatVector tmp142 = this->rawData;		HX_STACK_VAR(tmp142,"tmp142");
	HX_STACK_LINE(962)
	Float tmp143 = tmp142->get((int)2);		HX_STACK_VAR(tmp143,"tmp143");
	HX_STACK_LINE(962)
	Float tmp144 = tmp143;		HX_STACK_VAR(tmp144,"tmp144");
	HX_STACK_LINE(962)
	::openfl::_Vector::FloatVector tmp145 = this->rawData;		HX_STACK_VAR(tmp145,"tmp145");
	HX_STACK_LINE(962)
	Float tmp146 = tmp145->get((int)11);		HX_STACK_VAR(tmp146,"tmp146");
	HX_STACK_LINE(962)
	Float tmp147 = tmp146;		HX_STACK_VAR(tmp147,"tmp147");
	HX_STACK_LINE(962)
	Float tmp148 = (tmp144 * tmp147);		HX_STACK_VAR(tmp148,"tmp148");
	HX_STACK_LINE(962)
	::openfl::_Vector::FloatVector tmp149 = this->rawData;		HX_STACK_VAR(tmp149,"tmp149");
	HX_STACK_LINE(962)
	Float tmp150 = tmp149->get((int)10);		HX_STACK_VAR(tmp150,"tmp150");
	HX_STACK_LINE(962)
	Float tmp151 = tmp150;		HX_STACK_VAR(tmp151,"tmp151");
	HX_STACK_LINE(962)
	::openfl::_Vector::FloatVector tmp152 = this->rawData;		HX_STACK_VAR(tmp152,"tmp152");
	HX_STACK_LINE(962)
	Float tmp153 = tmp152->get((int)3);		HX_STACK_VAR(tmp153,"tmp153");
	HX_STACK_LINE(962)
	Float tmp154 = tmp153;		HX_STACK_VAR(tmp154,"tmp154");
	HX_STACK_LINE(962)
	Float tmp155 = (tmp151 * tmp154);		HX_STACK_VAR(tmp155,"tmp155");
	HX_STACK_LINE(962)
	Float tmp156 = (tmp148 - tmp155);		HX_STACK_VAR(tmp156,"tmp156");
	HX_STACK_LINE(962)
	Float tmp157 = (tmp141 * tmp156);		HX_STACK_VAR(tmp157,"tmp157");
	HX_STACK_LINE(958)
	Float tmp158 = (tmp126 - tmp157);		HX_STACK_VAR(tmp158,"tmp158");
	HX_STACK_LINE(963)
	::openfl::_Vector::FloatVector tmp159 = this->rawData;		HX_STACK_VAR(tmp159,"tmp159");
	HX_STACK_LINE(963)
	Float tmp160 = tmp159->get((int)8);		HX_STACK_VAR(tmp160,"tmp160");
	HX_STACK_LINE(963)
	Float tmp161 = tmp160;		HX_STACK_VAR(tmp161,"tmp161");
	HX_STACK_LINE(963)
	::openfl::_Vector::FloatVector tmp162 = this->rawData;		HX_STACK_VAR(tmp162,"tmp162");
	HX_STACK_LINE(963)
	Float tmp163 = tmp162->get((int)13);		HX_STACK_VAR(tmp163,"tmp163");
	HX_STACK_LINE(963)
	Float tmp164 = tmp163;		HX_STACK_VAR(tmp164,"tmp164");
	HX_STACK_LINE(963)
	Float tmp165 = (tmp161 * tmp164);		HX_STACK_VAR(tmp165,"tmp165");
	HX_STACK_LINE(963)
	::openfl::_Vector::FloatVector tmp166 = this->rawData;		HX_STACK_VAR(tmp166,"tmp166");
	HX_STACK_LINE(963)
	Float tmp167 = tmp166->get((int)12);		HX_STACK_VAR(tmp167,"tmp167");
	HX_STACK_LINE(963)
	Float tmp168 = tmp167;		HX_STACK_VAR(tmp168,"tmp168");
	HX_STACK_LINE(963)
	::openfl::_Vector::FloatVector tmp169 = this->rawData;		HX_STACK_VAR(tmp169,"tmp169");
	HX_STACK_LINE(963)
	Float tmp170 = tmp169->get((int)9);		HX_STACK_VAR(tmp170,"tmp170");
	HX_STACK_LINE(963)
	Float tmp171 = tmp170;		HX_STACK_VAR(tmp171,"tmp171");
	HX_STACK_LINE(963)
	Float tmp172 = (tmp168 * tmp171);		HX_STACK_VAR(tmp172,"tmp172");
	HX_STACK_LINE(963)
	Float tmp173 = (tmp165 - tmp172);		HX_STACK_VAR(tmp173,"tmp173");
	HX_STACK_LINE(963)
	::openfl::_Vector::FloatVector tmp174 = this->rawData;		HX_STACK_VAR(tmp174,"tmp174");
	HX_STACK_LINE(963)
	Float tmp175 = tmp174->get((int)2);		HX_STACK_VAR(tmp175,"tmp175");
	HX_STACK_LINE(963)
	Float tmp176 = tmp175;		HX_STACK_VAR(tmp176,"tmp176");
	HX_STACK_LINE(963)
	::openfl::_Vector::FloatVector tmp177 = this->rawData;		HX_STACK_VAR(tmp177,"tmp177");
	HX_STACK_LINE(963)
	Float tmp178 = tmp177->get((int)7);		HX_STACK_VAR(tmp178,"tmp178");
	HX_STACK_LINE(963)
	Float tmp179 = tmp178;		HX_STACK_VAR(tmp179,"tmp179");
	HX_STACK_LINE(963)
	Float tmp180 = (tmp176 * tmp179);		HX_STACK_VAR(tmp180,"tmp180");
	HX_STACK_LINE(963)
	::openfl::_Vector::FloatVector tmp181 = this->rawData;		HX_STACK_VAR(tmp181,"tmp181");
	HX_STACK_LINE(963)
	Float tmp182 = tmp181->get((int)6);		HX_STACK_VAR(tmp182,"tmp182");
	HX_STACK_LINE(963)
	Float tmp183 = tmp182;		HX_STACK_VAR(tmp183,"tmp183");
	HX_STACK_LINE(963)
	::openfl::_Vector::FloatVector tmp184 = this->rawData;		HX_STACK_VAR(tmp184,"tmp184");
	HX_STACK_LINE(963)
	Float tmp185 = tmp184->get((int)3);		HX_STACK_VAR(tmp185,"tmp185");
	HX_STACK_LINE(963)
	Float tmp186 = tmp185;		HX_STACK_VAR(tmp186,"tmp186");
	HX_STACK_LINE(963)
	Float tmp187 = (tmp183 * tmp186);		HX_STACK_VAR(tmp187,"tmp187");
	HX_STACK_LINE(963)
	Float tmp188 = (tmp180 - tmp187);		HX_STACK_VAR(tmp188,"tmp188");
	HX_STACK_LINE(963)
	Float tmp189 = (tmp173 * tmp188);		HX_STACK_VAR(tmp189,"tmp189");
	HX_STACK_LINE(958)
	Float tmp190 = (tmp158 + tmp189);		HX_STACK_VAR(tmp190,"tmp190");
	HX_STACK_LINE(958)
	Float tmp191 = tmp190;		HX_STACK_VAR(tmp191,"tmp191");
	HX_STACK_LINE(958)
	return tmp191;
}


HX_DEFINE_DYNAMIC_FUNC0(Matrix3D_obj,get_determinant,return )

::openfl::geom::Vector3D Matrix3D_obj::get_position( ){
	HX_STACK_FRAME("openfl.geom.Matrix3D","get_position",0x1555563a,"openfl.geom.Matrix3D.get_position","openfl/geom/Matrix3D.hx",968,0x3acce238)
	HX_STACK_THIS(this)
	HX_STACK_LINE(970)
	::openfl::_Vector::FloatVector tmp = this->rawData;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(970)
	Float tmp1 = tmp->get((int)12);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(970)
	Float tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(970)
	::openfl::_Vector::FloatVector tmp3 = this->rawData;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(970)
	Float tmp4 = tmp3->get((int)13);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(970)
	Float tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(970)
	::openfl::_Vector::FloatVector tmp6 = this->rawData;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(970)
	Float tmp7 = tmp6->get((int)14);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(970)
	Float tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(970)
	::openfl::geom::Vector3D tmp9 = ::openfl::geom::Vector3D_obj::__new(tmp2,tmp5,tmp8,null());		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(970)
	return tmp9;
}


HX_DEFINE_DYNAMIC_FUNC0(Matrix3D_obj,get_position,return )

::openfl::geom::Vector3D Matrix3D_obj::set_position( ::openfl::geom::Vector3D val){
	HX_STACK_FRAME("openfl.geom.Matrix3D","set_position",0x2a4e79ae,"openfl.geom.Matrix3D.set_position","openfl/geom/Matrix3D.hx",975,0x3acce238)
	HX_STACK_THIS(this)
	HX_STACK_ARG(val,"val")
	HX_STACK_LINE(977)
	::openfl::_Vector::FloatVector tmp = this->rawData;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(977)
	Float tmp1 = val->x;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(977)
	Float tmp2 = tmp->set((int)12,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(977)
	tmp2;
	HX_STACK_LINE(978)
	::openfl::_Vector::FloatVector tmp3 = this->rawData;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(978)
	Float tmp4 = val->y;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(978)
	Float tmp5 = tmp3->set((int)13,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(978)
	tmp5;
	HX_STACK_LINE(979)
	::openfl::_Vector::FloatVector tmp6 = this->rawData;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(979)
	Float tmp7 = val->z;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(979)
	Float tmp8 = tmp6->set((int)14,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(979)
	tmp8;
	HX_STACK_LINE(980)
	::openfl::geom::Vector3D tmp9 = val;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(980)
	return tmp9;
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix3D_obj,set_position,return )

::openfl::geom::Matrix3D Matrix3D_obj::create2D( Float x,Float y,hx::Null< Float >  __o_scale,hx::Null< Float >  __o_rotation){
Float scale = __o_scale.Default(1);
Float rotation = __o_rotation.Default(0);
	HX_STACK_FRAME("openfl.geom.Matrix3D","create2D",0x4623e756,"openfl.geom.Matrix3D.create2D","openfl/geom/Matrix3D.hx",357,0x3acce238)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(scale,"scale")
	HX_STACK_ARG(rotation,"rotation")
{
		HX_STACK_LINE(359)
		Float tmp = rotation;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(359)
		Float tmp1 = ::Math_obj::PI;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(359)
		Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(359)
		Float tmp3 = (Float(tmp2) / Float(((Float)180.0)));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(359)
		Float theta = tmp3;		HX_STACK_VAR(theta,"theta");
		HX_STACK_LINE(360)
		Float tmp4 = theta;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(360)
		Float tmp5 = ::Math_obj::cos(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(360)
		Float c = tmp5;		HX_STACK_VAR(c,"c");
		HX_STACK_LINE(361)
		Float tmp6 = theta;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(361)
		Float tmp7 = ::Math_obj::sin(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(361)
		Float s = tmp7;		HX_STACK_VAR(s,"s");
		HX_STACK_LINE(363)
		::openfl::_Vector::FloatVector tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(363)
		{
			HX_STACK_LINE(363)
			Float tmp9 = (c * scale);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(363)
			Float tmp10 = s;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(363)
			Float tmp11 = -(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(363)
			Float tmp12 = scale;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(363)
			Float tmp13 = (tmp11 * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(363)
			Float tmp14 = (s * scale);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(363)
			Float tmp15 = (c * scale);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(363)
			Float tmp16 = x;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(363)
			Float tmp17 = y;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(363)
			cpp::ArrayBase a = cpp::ArrayBase_obj::__new().Add(tmp9).Add(tmp13).Add((int)0).Add((int)0).Add(tmp14).Add(tmp15).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)1).Add((int)0).Add(tmp16).Add(tmp17).Add((int)0).Add((int)1);		HX_STACK_VAR(a,"a");
			HX_STACK_LINE(363)
			::openfl::_Vector::FloatVector tmp18;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(363)
			{
				HX_STACK_LINE(363)
				int length = null();		HX_STACK_VAR(length,"length");
				HX_STACK_LINE(363)
				bool fixed = null();		HX_STACK_VAR(fixed,"fixed");
				HX_STACK_LINE(363)
				::openfl::_Vector::FloatVector tmp19 = ::openfl::_Vector::FloatVector_obj::__new(length,fixed,null());		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(363)
				::openfl::_Vector::FloatVector tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(363)
				tmp18 = tmp20;
			}
			HX_STACK_LINE(363)
			::openfl::_Vector::FloatVector vector = tmp18;		HX_STACK_VAR(vector,"vector");
			HX_STACK_LINE(363)
			{
				HX_STACK_LINE(363)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(363)
				int _g = a->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(363)
				while((true)){
					HX_STACK_LINE(363)
					bool tmp19 = (_g1 < _g);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(363)
					bool tmp20 = !(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(363)
					if ((tmp20)){
						HX_STACK_LINE(363)
						break;
					}
					HX_STACK_LINE(363)
					int tmp21 = (_g1)++;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(363)
					int i = tmp21;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(363)
					int tmp22 = i;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(363)
					Dynamic tmp23 = a->__GetItem(i);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(363)
					Float tmp24 = ((Float)(tmp23));		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(363)
					Float tmp25 = vector->set(tmp22,tmp24);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(363)
					tmp25;
				}
			}
			HX_STACK_LINE(363)
			tmp8 = vector;
		}
		HX_STACK_LINE(363)
		::openfl::geom::Matrix3D tmp9 = ::openfl::geom::Matrix3D_obj::__new(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(363)
		return tmp9;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Matrix3D_obj,create2D,return )

::openfl::geom::Matrix3D Matrix3D_obj::createABCD( Float a,Float b,Float c,Float d,Float tx,Float ty){
	HX_STACK_FRAME("openfl.geom.Matrix3D","createABCD",0x0e55d246,"openfl.geom.Matrix3D.createABCD","openfl/geom/Matrix3D.hx",368,0x3acce238)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_ARG(c,"c")
	HX_STACK_ARG(d,"d")
	HX_STACK_ARG(tx,"tx")
	HX_STACK_ARG(ty,"ty")
	HX_STACK_LINE(370)
	::openfl::_Vector::FloatVector tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(370)
	{
		HX_STACK_LINE(370)
		cpp::ArrayBase a1 = cpp::ArrayBase_obj::__new().Add(a).Add(b).Add((int)0).Add((int)0).Add(c).Add(d).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)1).Add((int)0).Add(tx).Add(ty).Add((int)0).Add((int)1);		HX_STACK_VAR(a1,"a1");
		HX_STACK_LINE(370)
		::openfl::_Vector::FloatVector tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(370)
		{
			HX_STACK_LINE(370)
			int length = null();		HX_STACK_VAR(length,"length");
			HX_STACK_LINE(370)
			bool fixed = null();		HX_STACK_VAR(fixed,"fixed");
			HX_STACK_LINE(370)
			::openfl::_Vector::FloatVector tmp2 = ::openfl::_Vector::FloatVector_obj::__new(length,fixed,null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(370)
			::openfl::_Vector::FloatVector tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(370)
			tmp1 = tmp3;
		}
		HX_STACK_LINE(370)
		::openfl::_Vector::FloatVector vector = tmp1;		HX_STACK_VAR(vector,"vector");
		HX_STACK_LINE(370)
		{
			HX_STACK_LINE(370)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(370)
			int _g = a1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(370)
			while((true)){
				HX_STACK_LINE(370)
				bool tmp2 = (_g1 < _g);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(370)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(370)
				if ((tmp3)){
					HX_STACK_LINE(370)
					break;
				}
				HX_STACK_LINE(370)
				int tmp4 = (_g1)++;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(370)
				int i = tmp4;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(370)
				int tmp5 = i;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(370)
				Dynamic tmp6 = a1->__GetItem(i);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(370)
				Float tmp7 = ((Float)(tmp6));		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(370)
				Float tmp8 = vector->set(tmp5,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(370)
				tmp8;
			}
		}
		HX_STACK_LINE(370)
		tmp = vector;
	}
	HX_STACK_LINE(370)
	::openfl::geom::Matrix3D tmp1 = ::openfl::geom::Matrix3D_obj::__new(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(370)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(Matrix3D_obj,createABCD,return )

::openfl::geom::Matrix3D Matrix3D_obj::createOrtho( Float x0,Float x1,Float y0,Float y1,Float zNear,Float zFar){
	HX_STACK_FRAME("openfl.geom.Matrix3D","createOrtho",0xac3dd614,"openfl.geom.Matrix3D.createOrtho","openfl/geom/Matrix3D.hx",375,0x3acce238)
	HX_STACK_ARG(x0,"x0")
	HX_STACK_ARG(x1,"x1")
	HX_STACK_ARG(y0,"y0")
	HX_STACK_ARG(y1,"y1")
	HX_STACK_ARG(zNear,"zNear")
	HX_STACK_ARG(zFar,"zFar")
	HX_STACK_LINE(377)
	Float tmp = (x1 - x0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(377)
	Float tmp1 = (Float(((Float)1.0)) / Float(tmp));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(377)
	Float sx = tmp1;		HX_STACK_VAR(sx,"sx");
	HX_STACK_LINE(378)
	Float tmp2 = (y1 - y0);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(378)
	Float tmp3 = (Float(((Float)1.0)) / Float(tmp2));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(378)
	Float sy = tmp3;		HX_STACK_VAR(sy,"sy");
	HX_STACK_LINE(379)
	Float tmp4 = (zFar - zNear);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(379)
	Float tmp5 = (Float(((Float)1.0)) / Float(tmp4));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(379)
	Float sz = tmp5;		HX_STACK_VAR(sz,"sz");
	HX_STACK_LINE(381)
	::openfl::_Vector::FloatVector tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(381)
	{
		HX_STACK_LINE(381)
		Float tmp7 = (((Float)2.0) * sx);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(381)
		Float tmp8 = (((Float)2.0) * sy);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(381)
		Float tmp9 = (((Float)-2.) * sz);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(381)
		Float tmp10 = (x0 + x1);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(381)
		Float tmp11 = -(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(381)
		Float tmp12 = sx;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(381)
		Float tmp13 = (tmp11 * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(381)
		Float tmp14 = (y0 + y1);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(381)
		Float tmp15 = -(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(381)
		Float tmp16 = sy;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(381)
		Float tmp17 = (tmp15 * tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(381)
		Float tmp18 = (zNear + zFar);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(381)
		Float tmp19 = -(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(381)
		Float tmp20 = sz;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(381)
		Float tmp21 = (tmp19 * tmp20);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(381)
		cpp::ArrayBase a = cpp::ArrayBase_obj::__new().Add(tmp7).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add(tmp8).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add(tmp9).Add((int)0).Add(tmp13).Add(tmp17).Add(tmp21).Add((int)1);		HX_STACK_VAR(a,"a");
		HX_STACK_LINE(381)
		::openfl::_Vector::FloatVector tmp22;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(381)
		{
			HX_STACK_LINE(381)
			int length = null();		HX_STACK_VAR(length,"length");
			HX_STACK_LINE(381)
			bool fixed = null();		HX_STACK_VAR(fixed,"fixed");
			HX_STACK_LINE(381)
			::openfl::_Vector::FloatVector tmp23 = ::openfl::_Vector::FloatVector_obj::__new(length,fixed,null());		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(381)
			::openfl::_Vector::FloatVector tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(381)
			tmp22 = tmp24;
		}
		HX_STACK_LINE(381)
		::openfl::_Vector::FloatVector vector = tmp22;		HX_STACK_VAR(vector,"vector");
		HX_STACK_LINE(381)
		{
			HX_STACK_LINE(381)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(381)
			int _g = a->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(381)
			while((true)){
				HX_STACK_LINE(381)
				bool tmp23 = (_g1 < _g);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(381)
				bool tmp24 = !(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(381)
				if ((tmp24)){
					HX_STACK_LINE(381)
					break;
				}
				HX_STACK_LINE(381)
				int tmp25 = (_g1)++;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(381)
				int i = tmp25;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(381)
				int tmp26 = i;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(381)
				Dynamic tmp27 = a->__GetItem(i);		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(381)
				Float tmp28 = ((Float)(tmp27));		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(381)
				Float tmp29 = vector->set(tmp26,tmp28);		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(381)
				tmp29;
			}
		}
		HX_STACK_LINE(381)
		tmp6 = vector;
	}
	HX_STACK_LINE(381)
	::openfl::geom::Matrix3D tmp7 = ::openfl::geom::Matrix3D_obj::__new(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(381)
	return tmp7;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(Matrix3D_obj,createOrtho,return )

::openfl::geom::Matrix3D Matrix3D_obj::interpolate( ::openfl::geom::Matrix3D thisMat,::openfl::geom::Matrix3D toMat,Float percent){
	HX_STACK_FRAME("openfl.geom.Matrix3D","interpolate",0x6cc85c39,"openfl.geom.Matrix3D.interpolate","openfl/geom/Matrix3D.hx",528,0x3acce238)
	HX_STACK_ARG(thisMat,"thisMat")
	HX_STACK_ARG(toMat,"toMat")
	HX_STACK_ARG(percent,"percent")
	HX_STACK_LINE(530)
	::openfl::geom::Matrix3D tmp = ::openfl::geom::Matrix3D_obj::__new(null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(530)
	::openfl::geom::Matrix3D m = tmp;		HX_STACK_VAR(m,"m");
	HX_STACK_LINE(532)
	{
		HX_STACK_LINE(532)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(532)
		while((true)){
			HX_STACK_LINE(532)
			bool tmp1 = (_g < (int)16);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(532)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(532)
			if ((tmp2)){
				HX_STACK_LINE(532)
				break;
			}
			HX_STACK_LINE(532)
			int tmp3 = (_g)++;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(532)
			int i = tmp3;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(534)
			{
				HX_STACK_LINE(534)
				int tmp4 = i;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(534)
				Float tmp5 = thisMat->rawData->get(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(534)
				Float tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(534)
				int tmp7 = i;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(534)
				Float tmp8 = toMat->rawData->get(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(534)
				Float tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(534)
				int tmp10 = i;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(534)
				Float tmp11 = thisMat->rawData->get(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(534)
				Float tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(534)
				Float tmp13 = (tmp9 - tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(534)
				Float tmp14 = percent;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(534)
				Float tmp15 = (tmp13 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(534)
				Float tmp16 = (tmp6 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(534)
				Float value = tmp16;		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(534)
				int tmp17 = i;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(534)
				Float tmp18 = value;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(534)
				m->rawData->set(tmp17,tmp18);
			}
		}
	}
	HX_STACK_LINE(538)
	::openfl::geom::Matrix3D tmp1 = m;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(538)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Matrix3D_obj,interpolate,return )

::openfl::geom::Matrix3D Matrix3D_obj::__getAxisRotation( Float x,Float y,Float z,Float degrees){
	HX_STACK_FRAME("openfl.geom.Matrix3D","__getAxisRotation",0xf649170d,"openfl.geom.Matrix3D.__getAxisRotation","openfl/geom/Matrix3D.hx",917,0x3acce238)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(z,"z")
	HX_STACK_ARG(degrees,"degrees")
	HX_STACK_LINE(919)
	::openfl::geom::Matrix3D tmp = ::openfl::geom::Matrix3D_obj::__new(null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(919)
	::openfl::geom::Matrix3D m = tmp;		HX_STACK_VAR(m,"m");
	HX_STACK_LINE(921)
	::openfl::geom::Vector3D tmp1 = ::openfl::geom::Vector3D_obj::__new(x,y,z,null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(921)
	::openfl::geom::Vector3D a1 = tmp1;		HX_STACK_VAR(a1,"a1");
	HX_STACK_LINE(922)
	Float tmp2 = degrees;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(922)
	Float tmp3 = -(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(922)
	Float tmp4 = ::Math_obj::PI;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(922)
	Float tmp5 = (Float(tmp4) / Float((int)180));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(922)
	Float tmp6 = (tmp3 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(922)
	Float rad = tmp6;		HX_STACK_VAR(rad,"rad");
	HX_STACK_LINE(923)
	Float tmp7 = rad;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(923)
	Float tmp8 = ::Math_obj::cos(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(923)
	Float c = tmp8;		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(924)
	Float tmp9 = rad;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(924)
	Float tmp10 = ::Math_obj::sin(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(924)
	Float s = tmp10;		HX_STACK_VAR(s,"s");
	HX_STACK_LINE(925)
	Float tmp11 = (((Float)1.0) - c);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(925)
	Float t = tmp11;		HX_STACK_VAR(t,"t");
	HX_STACK_LINE(927)
	Float tmp12 = c;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(927)
	Float tmp13 = (a1->x * a1->x);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(927)
	Float tmp14 = t;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(927)
	Float tmp15 = (tmp13 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(927)
	Float tmp16 = (tmp12 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(927)
	Float tmp17 = m->rawData->set((int)0,tmp16);		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(927)
	tmp17;
	HX_STACK_LINE(928)
	Float tmp18 = c;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(928)
	Float tmp19 = (a1->y * a1->y);		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(928)
	Float tmp20 = t;		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(928)
	Float tmp21 = (tmp19 * tmp20);		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(928)
	Float tmp22 = (tmp18 + tmp21);		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(928)
	Float tmp23 = m->rawData->set((int)5,tmp22);		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(928)
	tmp23;
	HX_STACK_LINE(929)
	Float tmp24 = c;		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(929)
	Float tmp25 = (a1->z * a1->z);		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(929)
	Float tmp26 = t;		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(929)
	Float tmp27 = (tmp25 * tmp26);		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(929)
	Float tmp28 = (tmp24 + tmp27);		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(929)
	Float tmp29 = m->rawData->set((int)10,tmp28);		HX_STACK_VAR(tmp29,"tmp29");
	HX_STACK_LINE(929)
	tmp29;
	HX_STACK_LINE(931)
	Float tmp30 = (a1->x * a1->y);		HX_STACK_VAR(tmp30,"tmp30");
	HX_STACK_LINE(931)
	Float tmp31 = t;		HX_STACK_VAR(tmp31,"tmp31");
	HX_STACK_LINE(931)
	Float tmp32 = (tmp30 * tmp31);		HX_STACK_VAR(tmp32,"tmp32");
	HX_STACK_LINE(931)
	Float tmp110 = tmp32;		HX_STACK_VAR(tmp110,"tmp110");
	HX_STACK_LINE(932)
	Float tmp33 = (a1->z * s);		HX_STACK_VAR(tmp33,"tmp33");
	HX_STACK_LINE(932)
	Float tmp210 = tmp33;		HX_STACK_VAR(tmp210,"tmp210");
	HX_STACK_LINE(933)
	Float tmp34 = (tmp110 + tmp210);		HX_STACK_VAR(tmp34,"tmp34");
	HX_STACK_LINE(933)
	Float tmp35 = m->rawData->set((int)4,tmp34);		HX_STACK_VAR(tmp35,"tmp35");
	HX_STACK_LINE(933)
	tmp35;
	HX_STACK_LINE(934)
	Float tmp36 = (tmp110 - tmp210);		HX_STACK_VAR(tmp36,"tmp36");
	HX_STACK_LINE(934)
	Float tmp37 = m->rawData->set((int)1,tmp36);		HX_STACK_VAR(tmp37,"tmp37");
	HX_STACK_LINE(934)
	tmp37;
	HX_STACK_LINE(935)
	Float tmp38 = (a1->x * a1->z);		HX_STACK_VAR(tmp38,"tmp38");
	HX_STACK_LINE(935)
	Float tmp39 = t;		HX_STACK_VAR(tmp39,"tmp39");
	HX_STACK_LINE(935)
	Float tmp40 = (tmp38 * tmp39);		HX_STACK_VAR(tmp40,"tmp40");
	HX_STACK_LINE(935)
	tmp110 = tmp40;
	HX_STACK_LINE(936)
	Float tmp41 = (a1->y * s);		HX_STACK_VAR(tmp41,"tmp41");
	HX_STACK_LINE(936)
	tmp210 = tmp41;
	HX_STACK_LINE(937)
	Float tmp42 = (tmp110 - tmp210);		HX_STACK_VAR(tmp42,"tmp42");
	HX_STACK_LINE(937)
	Float tmp43 = m->rawData->set((int)8,tmp42);		HX_STACK_VAR(tmp43,"tmp43");
	HX_STACK_LINE(937)
	tmp43;
	HX_STACK_LINE(938)
	Float tmp44 = (tmp110 + tmp210);		HX_STACK_VAR(tmp44,"tmp44");
	HX_STACK_LINE(938)
	Float tmp45 = m->rawData->set((int)2,tmp44);		HX_STACK_VAR(tmp45,"tmp45");
	HX_STACK_LINE(938)
	tmp45;
	HX_STACK_LINE(939)
	Float tmp46 = (a1->y * a1->z);		HX_STACK_VAR(tmp46,"tmp46");
	HX_STACK_LINE(939)
	Float tmp47 = t;		HX_STACK_VAR(tmp47,"tmp47");
	HX_STACK_LINE(939)
	Float tmp48 = (tmp46 * tmp47);		HX_STACK_VAR(tmp48,"tmp48");
	HX_STACK_LINE(939)
	tmp110 = tmp48;
	HX_STACK_LINE(940)
	Float tmp49 = (a1->x * s);		HX_STACK_VAR(tmp49,"tmp49");
	HX_STACK_LINE(940)
	tmp210 = tmp49;
	HX_STACK_LINE(941)
	Float tmp50 = (tmp110 + tmp210);		HX_STACK_VAR(tmp50,"tmp50");
	HX_STACK_LINE(941)
	Float tmp51 = m->rawData->set((int)9,tmp50);		HX_STACK_VAR(tmp51,"tmp51");
	HX_STACK_LINE(941)
	tmp51;
	HX_STACK_LINE(942)
	Float tmp52 = (tmp110 - tmp210);		HX_STACK_VAR(tmp52,"tmp52");
	HX_STACK_LINE(942)
	Float tmp53 = m->rawData->set((int)6,tmp52);		HX_STACK_VAR(tmp53,"tmp53");
	HX_STACK_LINE(942)
	tmp53;
	HX_STACK_LINE(944)
	::openfl::geom::Matrix3D tmp54 = m;		HX_STACK_VAR(tmp54,"tmp54");
	HX_STACK_LINE(944)
	return tmp54;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Matrix3D_obj,__getAxisRotation,return )


Matrix3D_obj::Matrix3D_obj()
{
}

void Matrix3D_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Matrix3D);
	HX_MARK_MEMBER_NAME(rawData,"rawData");
	HX_MARK_END_CLASS();
}

void Matrix3D_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(rawData,"rawData");
}

Dynamic Matrix3D_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"append") ) { return append_dyn(); }
		if (HX_FIELD_EQ(inName,"invert") ) { return invert_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"rawData") ) { return rawData; }
		if (HX_FIELD_EQ(inName,"pointAt") ) { return pointAt_dyn(); }
		if (HX_FIELD_EQ(inName,"prepend") ) { return prepend_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"position") ) { if (inCallProp == hx::paccAlways) return get_position(); }
		if (HX_FIELD_EQ(inName,"copyFrom") ) { return copyFrom_dyn(); }
		if (HX_FIELD_EQ(inName,"identity") ) { return identity_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"copyRowTo") ) { return copyRowTo_dyn(); }
		if (HX_FIELD_EQ(inName,"decompose") ) { return decompose_dyn(); }
		if (HX_FIELD_EQ(inName,"recompose") ) { return recompose_dyn(); }
		if (HX_FIELD_EQ(inName,"transpose") ) { return transpose_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"determinant") ) { if (inCallProp == hx::paccAlways) return get_determinant(); }
		if (HX_FIELD_EQ(inName,"appendScale") ) { return appendScale_dyn(); }
		if (HX_FIELD_EQ(inName,"copyRowFrom") ) { return copyRowFrom_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"copyColumnTo") ) { return copyColumnTo_dyn(); }
		if (HX_FIELD_EQ(inName,"prependScale") ) { return prependScale_dyn(); }
		if (HX_FIELD_EQ(inName,"get_position") ) { return get_position_dyn(); }
		if (HX_FIELD_EQ(inName,"set_position") ) { return set_position_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"copyRawDataTo") ) { return copyRawDataTo_dyn(); }
		if (HX_FIELD_EQ(inName,"interpolateTo") ) { return interpolateTo_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"appendRotation") ) { return appendRotation_dyn(); }
		if (HX_FIELD_EQ(inName,"copyColumnFrom") ) { return copyColumnFrom_dyn(); }
		if (HX_FIELD_EQ(inName,"copyToMatrix3D") ) { return copyToMatrix3D_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"copyRawDataFrom") ) { return copyRawDataFrom_dyn(); }
		if (HX_FIELD_EQ(inName,"prependRotation") ) { return prependRotation_dyn(); }
		if (HX_FIELD_EQ(inName,"transformVector") ) { return transformVector_dyn(); }
		if (HX_FIELD_EQ(inName,"get_determinant") ) { return get_determinant_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"transformVectors") ) { return transformVectors_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"appendTranslation") ) { return appendTranslation_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"prependTranslation") ) { return prependTranslation_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"deltaTransformVector") ) { return deltaTransformVector_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool Matrix3D_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"create2D") ) { outValue = create2D_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"createABCD") ) { outValue = createABCD_dyn(); return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"createOrtho") ) { outValue = createOrtho_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"interpolate") ) { outValue = interpolate_dyn(); return true;  }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__getAxisRotation") ) { outValue = __getAxisRotation_dyn(); return true;  }
	}
	return false;
}

Dynamic Matrix3D_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"rawData") ) { rawData=inValue.Cast< ::openfl::_Vector::FloatVector >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"position") ) { if (inCallProp == hx::paccAlways) return set_position(inValue); }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Matrix3D_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("determinant","\x95","\x5d","\x15","\x32"));
	outFields->push(HX_HCSTRING("position","\xa9","\xa0","\xfa","\xca"));
	outFields->push(HX_HCSTRING("rawData","\x32","\x6c","\x18","\xff"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::_Vector::FloatVector*/ ,(int)offsetof(Matrix3D_obj,rawData),HX_HCSTRING("rawData","\x32","\x6c","\x18","\xff")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("rawData","\x32","\x6c","\x18","\xff"),
	HX_HCSTRING("append","\xda","\xe1","\xd3","\x8f"),
	HX_HCSTRING("appendRotation","\x38","\x45","\xe8","\xcb"),
	HX_HCSTRING("appendScale","\x50","\x66","\x45","\xb5"),
	HX_HCSTRING("appendTranslation","\x37","\xe1","\x3d","\xd6"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	HX_HCSTRING("copyColumnFrom","\x75","\x97","\xb5","\x3a"),
	HX_HCSTRING("copyColumnTo","\xc6","\x2e","\xf6","\xf6"),
	HX_HCSTRING("copyFrom","\xbf","\x0b","\x61","\xc8"),
	HX_HCSTRING("copyRawDataFrom","\x07","\x7d","\xbd","\x2c"),
	HX_HCSTRING("copyRawDataTo","\xd8","\x2b","\xf7","\xa8"),
	HX_HCSTRING("copyRowFrom","\x6f","\x45","\x8b","\xef"),
	HX_HCSTRING("copyRowTo","\x40","\x8a","\x62","\x73"),
	HX_HCSTRING("copyToMatrix3D","\xe2","\x1d","\x1f","\x04"),
	HX_HCSTRING("decompose","\xb1","\xc3","\xa7","\x7a"),
	HX_HCSTRING("deltaTransformVector","\x37","\x02","\x9c","\xc2"),
	HX_HCSTRING("identity","\x3e","\x45","\x2f","\xb9"),
	HX_HCSTRING("interpolateTo","\x9c","\x90","\x22","\x71"),
	HX_HCSTRING("invert","\x16","\xe7","\xd8","\x9f"),
	HX_HCSTRING("pointAt","\x63","\xa1","\x21","\x51"),
	HX_HCSTRING("prepend","\x0e","\x97","\xe0","\x37"),
	HX_HCSTRING("prependRotation","\x6c","\x4e","\x3b","\xe8"),
	HX_HCSTRING("prependScale","\x9c","\x54","\x97","\xc4"),
	HX_HCSTRING("prependTranslation","\x83","\x90","\x15","\x05"),
	HX_HCSTRING("recompose","\xbf","\x81","\xdb","\x03"),
	HX_HCSTRING("transformVector","\x4f","\x2b","\xb3","\xd2"),
	HX_HCSTRING("transformVectors","\x44","\xba","\x12","\x8a"),
	HX_HCSTRING("transpose","\x79","\x50","\x2f","\x4c"),
	HX_HCSTRING("get_determinant","\x2c","\x15","\xf7","\xf2"),
	HX_HCSTRING("get_position","\xb2","\x54","\x14","\x80"),
	HX_HCSTRING("set_position","\x26","\x78","\x0d","\x95"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Matrix3D_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Matrix3D_obj::__mClass,"__mClass");
};

#endif

hx::Class Matrix3D_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("create2D","\xce","\x49","\xf4","\x2b"),
	HX_HCSTRING("createABCD","\xbe","\xc2","\xdd","\x52"),
	HX_HCSTRING("createOrtho","\x9c","\x4e","\xa8","\x5e"),
	HX_HCSTRING("interpolate","\xc1","\xd4","\x32","\x1f"),
	HX_HCSTRING("__getAxisRotation","\x95","\xa5","\x44","\x7b"),
	::String(null()) };

void Matrix3D_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.geom.Matrix3D","\xe6","\x93","\x2e","\x3d");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Matrix3D_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Matrix3D_obj >;
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
