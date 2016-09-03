#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_haxegon_bitmapFont_BitmapFont
#include <haxegon/bitmapFont/BitmapFont.h>
#endif
#ifndef INCLUDED_haxegon_bitmapFont_BitmapGlyph
#include <haxegon/bitmapFont/BitmapGlyph.h>
#endif
#ifndef INCLUDED_haxegon_bitmapFont_BitmapGlyphCollection
#include <haxegon/bitmapFont/BitmapGlyphCollection.h>
#endif
#ifndef INCLUDED_haxegon_bitmapFont_BitmapGlyphFrame
#include <haxegon/bitmapFont/BitmapGlyphFrame.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_geom_ColorTransform
#include <openfl/geom/ColorTransform.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
namespace haxegon{
namespace bitmapFont{

Void BitmapGlyphCollection_obj::__construct(::haxegon::bitmapFont::BitmapFont font,Float scale,int color,hx::Null< bool >  __o_useColor,hx::Null< bool >  __o_smoothing)
{
HX_STACK_FRAME("haxegon.bitmapFont.BitmapGlyphCollection","new",0x9186098b,"haxegon.bitmapFont.BitmapGlyphCollection.new","haxegon/bitmapFont/BitmapFont.hx",639,0x0e43809e)
HX_STACK_THIS(this)
HX_STACK_ARG(font,"font")
HX_STACK_ARG(scale,"scale")
HX_STACK_ARG(color,"color")
HX_STACK_ARG(__o_useColor,"useColor")
HX_STACK_ARG(__o_smoothing,"smoothing")
bool useColor = __o_useColor.Default(true);
bool smoothing = __o_smoothing.Default(false);
{
	HX_STACK_LINE(651)
	this->spaceWidth = ((Float)0);
	HX_STACK_LINE(641)
	this->minOffsetX = ((Float)0);
	HX_STACK_LINE(657)
	::haxe::ds::IntMap tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(657)
	{
		HX_STACK_LINE(657)
		::haxe::ds::IntMap tmp1 = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(657)
		::haxe::ds::IntMap tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(657)
		tmp = tmp2;
	}
	HX_STACK_LINE(657)
	this->glyphMap = tmp;
	HX_STACK_LINE(658)
	this->glyphs = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(659)
	this->font = font;
	HX_STACK_LINE(660)
	this->scale = scale;
	HX_STACK_LINE(661)
	bool tmp1 = useColor;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(661)
	int tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(661)
	if ((tmp1)){
		HX_STACK_LINE(661)
		tmp2 = color;
	}
	else{
		HX_STACK_LINE(661)
		tmp2 = (int)-1;
	}
	HX_STACK_LINE(661)
	this->color = tmp2;
	HX_STACK_LINE(662)
	Float tmp3 = (font->minOffsetX * scale);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(662)
	this->minOffsetX = tmp3;
	HX_STACK_LINE(663)
	bool tmp4 = smoothing;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(663)
	this->prepareGlyphs(tmp4);
}
;
	return null();
}

//BitmapGlyphCollection_obj::~BitmapGlyphCollection_obj() { }

Dynamic BitmapGlyphCollection_obj::__CreateEmpty() { return  new BitmapGlyphCollection_obj; }
hx::ObjectPtr< BitmapGlyphCollection_obj > BitmapGlyphCollection_obj::__new(::haxegon::bitmapFont::BitmapFont font,Float scale,int color,hx::Null< bool >  __o_useColor,hx::Null< bool >  __o_smoothing)
{  hx::ObjectPtr< BitmapGlyphCollection_obj > _result_ = new BitmapGlyphCollection_obj();
	_result_->__construct(font,scale,color,__o_useColor,__o_smoothing);
	return _result_;}

Dynamic BitmapGlyphCollection_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< BitmapGlyphCollection_obj > _result_ = new BitmapGlyphCollection_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return _result_;}

Void BitmapGlyphCollection_obj::prepareGlyphs( hx::Null< bool >  __o_smoothing){
bool smoothing = __o_smoothing.Default(false);
	HX_STACK_FRAME("haxegon.bitmapFont.BitmapGlyphCollection","prepareGlyphs",0x638edb19,"haxegon.bitmapFont.BitmapGlyphCollection.prepareGlyphs","haxegon/bitmapFont/BitmapFont.hx",667,0x0e43809e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(smoothing,"smoothing")
{
		HX_STACK_LINE(668)
		::openfl::geom::Matrix tmp = ::openfl::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(668)
		::openfl::geom::Matrix matrix = tmp;		HX_STACK_VAR(matrix,"matrix");
		HX_STACK_LINE(669)
		Float tmp1 = this->scale;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(669)
		Float tmp2 = this->scale;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(669)
		matrix->scale(tmp1,tmp2);
		HX_STACK_LINE(671)
		::openfl::geom::ColorTransform tmp3 = ::openfl::geom::ColorTransform_obj::__new(null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(671)
		::openfl::geom::ColorTransform colorTransform = tmp3;		HX_STACK_VAR(colorTransform,"colorTransform");
		HX_STACK_LINE(672)
		Float tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(672)
		{
			HX_STACK_LINE(672)
			int tmp5 = this->color;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(672)
			int tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(672)
			int tmp7 = (int(tmp6) >> int((int)16));		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(672)
			int tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(672)
			int tmp9 = (int(tmp8) & int((int)255));		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(672)
			int _int = tmp9;		HX_STACK_VAR(_int,"int");
			HX_STACK_LINE(672)
			bool tmp10 = (_int < (int)0);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(672)
			if ((tmp10)){
				HX_STACK_LINE(672)
				tmp4 = (((Float)4294967296.0) + _int);
			}
			else{
				HX_STACK_LINE(672)
				tmp4 = (_int + ((Float)0.0));
			}
		}
		HX_STACK_LINE(672)
		Float tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(672)
		{
			HX_STACK_LINE(672)
			int _int = (int)255;		HX_STACK_VAR(_int,"int");
			HX_STACK_LINE(672)
			bool tmp6 = (_int < (int)0);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(672)
			if ((tmp6)){
				HX_STACK_LINE(672)
				tmp5 = (((Float)4294967296.0) + _int);
			}
			else{
				HX_STACK_LINE(672)
				tmp5 = (_int + ((Float)0.0));
			}
		}
		HX_STACK_LINE(672)
		Float tmp6 = (Float(tmp4) / Float(tmp5));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(672)
		colorTransform->redMultiplier = tmp6;
		HX_STACK_LINE(673)
		Float tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(673)
		{
			HX_STACK_LINE(673)
			int tmp8 = this->color;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(673)
			int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(673)
			int tmp10 = (int(tmp9) >> int((int)8));		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(673)
			int tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(673)
			int tmp12 = (int(tmp11) & int((int)255));		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(673)
			int _int = tmp12;		HX_STACK_VAR(_int,"int");
			HX_STACK_LINE(673)
			bool tmp13 = (_int < (int)0);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(673)
			if ((tmp13)){
				HX_STACK_LINE(673)
				tmp7 = (((Float)4294967296.0) + _int);
			}
			else{
				HX_STACK_LINE(673)
				tmp7 = (_int + ((Float)0.0));
			}
		}
		HX_STACK_LINE(673)
		Float tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(673)
		{
			HX_STACK_LINE(673)
			int _int = (int)255;		HX_STACK_VAR(_int,"int");
			HX_STACK_LINE(673)
			bool tmp9 = (_int < (int)0);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(673)
			if ((tmp9)){
				HX_STACK_LINE(673)
				tmp8 = (((Float)4294967296.0) + _int);
			}
			else{
				HX_STACK_LINE(673)
				tmp8 = (_int + ((Float)0.0));
			}
		}
		HX_STACK_LINE(673)
		Float tmp9 = (Float(tmp7) / Float(tmp8));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(673)
		colorTransform->greenMultiplier = tmp9;
		HX_STACK_LINE(674)
		Float tmp10;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(674)
		{
			HX_STACK_LINE(674)
			int tmp11 = this->color;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(674)
			int tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(674)
			int tmp13 = (int(tmp12) & int((int)255));		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(674)
			int _int = tmp13;		HX_STACK_VAR(_int,"int");
			HX_STACK_LINE(674)
			bool tmp14 = (_int < (int)0);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(674)
			if ((tmp14)){
				HX_STACK_LINE(674)
				tmp10 = (((Float)4294967296.0) + _int);
			}
			else{
				HX_STACK_LINE(674)
				tmp10 = (_int + ((Float)0.0));
			}
		}
		HX_STACK_LINE(674)
		Float tmp11;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(674)
		{
			HX_STACK_LINE(674)
			int _int = (int)255;		HX_STACK_VAR(_int,"int");
			HX_STACK_LINE(674)
			bool tmp12 = (_int < (int)0);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(674)
			if ((tmp12)){
				HX_STACK_LINE(674)
				tmp11 = (((Float)4294967296.0) + _int);
			}
			else{
				HX_STACK_LINE(674)
				tmp11 = (_int + ((Float)0.0));
			}
		}
		HX_STACK_LINE(674)
		Float tmp12 = (Float(tmp10) / Float(tmp11));		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(674)
		colorTransform->blueMultiplier = tmp12;
		HX_STACK_LINE(675)
		Float tmp13;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(675)
		{
			HX_STACK_LINE(675)
			int tmp14 = this->color;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(675)
			int tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(675)
			int tmp16 = (int(tmp15) >> int((int)24));		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(675)
			int tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(675)
			int tmp18 = (int(tmp17) & int((int)255));		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(675)
			int _int = tmp18;		HX_STACK_VAR(_int,"int");
			HX_STACK_LINE(675)
			bool tmp19 = (_int < (int)0);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(675)
			if ((tmp19)){
				HX_STACK_LINE(675)
				tmp13 = (((Float)4294967296.0) + _int);
			}
			else{
				HX_STACK_LINE(675)
				tmp13 = (_int + ((Float)0.0));
			}
		}
		HX_STACK_LINE(675)
		Float tmp14;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(675)
		{
			HX_STACK_LINE(675)
			int _int = (int)255;		HX_STACK_VAR(_int,"int");
			HX_STACK_LINE(675)
			bool tmp15 = (_int < (int)0);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(675)
			if ((tmp15)){
				HX_STACK_LINE(675)
				tmp14 = (((Float)4294967296.0) + _int);
			}
			else{
				HX_STACK_LINE(675)
				tmp14 = (_int + ((Float)0.0));
			}
		}
		HX_STACK_LINE(675)
		Float tmp15 = (Float(tmp13) / Float(tmp14));		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(675)
		colorTransform->alphaMultiplier = tmp15;
		HX_STACK_LINE(677)
		::openfl::display::BitmapData glyphBD;		HX_STACK_VAR(glyphBD,"glyphBD");
		HX_STACK_LINE(678)
		::openfl::display::BitmapData preparedBD;		HX_STACK_VAR(preparedBD,"preparedBD");
		HX_STACK_LINE(679)
		::haxegon::bitmapFont::BitmapGlyphFrame glyph;		HX_STACK_VAR(glyph,"glyph");
		HX_STACK_LINE(680)
		::haxegon::bitmapFont::BitmapGlyph preparedGlyph;		HX_STACK_VAR(preparedGlyph,"preparedGlyph");
		HX_STACK_LINE(681)
		int bdWidth;		HX_STACK_VAR(bdWidth,"bdWidth");
		HX_STACK_LINE(681)
		int bdHeight;		HX_STACK_VAR(bdHeight,"bdHeight");
		HX_STACK_LINE(682)
		int offsetX;		HX_STACK_VAR(offsetX,"offsetX");
		HX_STACK_LINE(682)
		int offsetY;		HX_STACK_VAR(offsetY,"offsetY");
		HX_STACK_LINE(682)
		int xAdvance;		HX_STACK_VAR(xAdvance,"xAdvance");
		HX_STACK_LINE(684)
		::haxegon::bitmapFont::BitmapFont tmp16 = this->font;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(684)
		int tmp17 = tmp16->spaceWidth;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(684)
		Float tmp18 = this->scale;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(684)
		Float tmp19 = (tmp17 * tmp18);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(684)
		this->spaceWidth = tmp19;
		HX_STACK_LINE(686)
		::haxegon::bitmapFont::BitmapFont tmp20 = this->font;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(686)
		Dynamic tmp21 = tmp20->glyphs->iterator();		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(686)
		for(::cpp::FastIterator_obj< ::haxegon::bitmapFont::BitmapGlyphFrame > *__it = ::cpp::CreateFastIterator< ::haxegon::bitmapFont::BitmapGlyphFrame >(tmp21);  __it->hasNext(); ){
			::haxegon::bitmapFont::BitmapGlyphFrame glyph1 = __it->next();
			{
				HX_STACK_LINE(688)
				::openfl::display::BitmapData tmp22 = glyph1->get_bitmap();		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(688)
				glyphBD = tmp22;
				HX_STACK_LINE(690)
				int tmp23 = glyphBD->width;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(690)
				Float tmp24 = this->scale;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(690)
				Float tmp25 = (tmp23 * tmp24);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(690)
				int tmp26 = ::Math_obj::ceil(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(690)
				bdWidth = tmp26;
				HX_STACK_LINE(691)
				int tmp27 = glyphBD->height;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(691)
				Float tmp28 = this->scale;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(691)
				Float tmp29 = (tmp27 * tmp28);		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(691)
				int tmp30 = ::Math_obj::ceil(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(691)
				bdHeight = tmp30;
				HX_STACK_LINE(693)
				bool tmp31 = (bdWidth > (int)0);		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(693)
				int tmp32;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(693)
				if ((tmp31)){
					HX_STACK_LINE(693)
					tmp32 = bdWidth;
				}
				else{
					HX_STACK_LINE(693)
					tmp32 = (int)1;
				}
				HX_STACK_LINE(693)
				bdWidth = tmp32;
				HX_STACK_LINE(694)
				bool tmp33 = (bdHeight > (int)0);		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(694)
				int tmp34;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(694)
				if ((tmp33)){
					HX_STACK_LINE(694)
					tmp34 = bdHeight;
				}
				else{
					HX_STACK_LINE(694)
					tmp34 = (int)1;
				}
				HX_STACK_LINE(694)
				bdHeight = tmp34;
				HX_STACK_LINE(696)
				::openfl::display::BitmapData tmp35 = ::openfl::display::BitmapData_obj::__new(bdWidth,bdHeight,true,(int)0);		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(696)
				preparedBD = tmp35;
				HX_STACK_LINE(699)
				::openfl::display::BitmapData tmp36 = glyphBD;		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(699)
				::openfl::geom::Matrix tmp37 = matrix;		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(699)
				::openfl::geom::ColorTransform tmp38 = colorTransform;		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(699)
				bool tmp39 = smoothing;		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(699)
				preparedBD->draw(tmp36,tmp37,tmp38,null(),null(),tmp39);
				HX_STACK_LINE(705)
				int tmp40 = glyph1->xoffset;		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(705)
				Float tmp41 = this->scale;		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(705)
				Float tmp42 = (tmp40 * tmp41);		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(705)
				int tmp43 = ::Math_obj::ceil(tmp42);		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(705)
				offsetX = tmp43;
				HX_STACK_LINE(706)
				int tmp44 = glyph1->yoffset;		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(706)
				Float tmp45 = this->scale;		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(706)
				Float tmp46 = (tmp44 * tmp45);		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(706)
				int tmp47 = ::Math_obj::ceil(tmp46);		HX_STACK_VAR(tmp47,"tmp47");
				HX_STACK_LINE(706)
				offsetY = tmp47;
				HX_STACK_LINE(707)
				int tmp48 = glyph1->xadvance;		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(707)
				Float tmp49 = this->scale;		HX_STACK_VAR(tmp49,"tmp49");
				HX_STACK_LINE(707)
				Float tmp50 = (tmp48 * tmp49);		HX_STACK_VAR(tmp50,"tmp50");
				HX_STACK_LINE(707)
				int tmp51 = ::Math_obj::ceil(tmp50);		HX_STACK_VAR(tmp51,"tmp51");
				HX_STACK_LINE(707)
				xAdvance = tmp51;
				HX_STACK_LINE(709)
				::haxegon::bitmapFont::BitmapGlyph tmp52 = ::haxegon::bitmapFont::BitmapGlyph_obj::__new(glyph1->charCode,preparedBD,offsetX,offsetY,xAdvance);		HX_STACK_VAR(tmp52,"tmp52");
				HX_STACK_LINE(709)
				preparedGlyph = tmp52;
				HX_STACK_LINE(711)
				::haxegon::bitmapFont::BitmapGlyph tmp53 = preparedGlyph;		HX_STACK_VAR(tmp53,"tmp53");
				HX_STACK_LINE(711)
				this->glyphs->push(tmp53);
				HX_STACK_LINE(712)
				::haxe::ds::IntMap tmp54 = this->glyphMap;		HX_STACK_VAR(tmp54,"tmp54");
				HX_STACK_LINE(712)
				int tmp55 = preparedGlyph->charCode;		HX_STACK_VAR(tmp55,"tmp55");
				HX_STACK_LINE(712)
				::haxegon::bitmapFont::BitmapGlyph tmp56 = preparedGlyph;		HX_STACK_VAR(tmp56,"tmp56");
				HX_STACK_LINE(712)
				tmp54->set(tmp55,tmp56);
			}
;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapGlyphCollection_obj,prepareGlyphs,(void))

Void BitmapGlyphCollection_obj::dispose( ){
{
		HX_STACK_FRAME("haxegon.bitmapFont.BitmapGlyphCollection","dispose",0x66ca2b4a,"haxegon.bitmapFont.BitmapGlyphCollection.dispose","haxegon/bitmapFont/BitmapFont.hx",717,0x0e43809e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(718)
		bool tmp = (this->glyphs != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(718)
		if ((tmp)){
			HX_STACK_LINE(720)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(720)
			Array< ::Dynamic > _g1 = this->glyphs;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(720)
			while((true)){
				HX_STACK_LINE(720)
				bool tmp1 = (_g < _g1->length);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(720)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(720)
				if ((tmp2)){
					HX_STACK_LINE(720)
					break;
				}
				HX_STACK_LINE(720)
				::haxegon::bitmapFont::BitmapGlyph tmp3 = _g1->__get(_g).StaticCast< ::haxegon::bitmapFont::BitmapGlyph >();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(720)
				::haxegon::bitmapFont::BitmapGlyph glyph = tmp3;		HX_STACK_VAR(glyph,"glyph");
				HX_STACK_LINE(720)
				++(_g);
				HX_STACK_LINE(722)
				glyph->dispose();
			}
		}
		HX_STACK_LINE(726)
		this->glyphs = null();
		HX_STACK_LINE(727)
		this->glyphMap = null();
		HX_STACK_LINE(728)
		this->font = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BitmapGlyphCollection_obj,dispose,(void))


BitmapGlyphCollection_obj::BitmapGlyphCollection_obj()
{
}

void BitmapGlyphCollection_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BitmapGlyphCollection);
	HX_MARK_MEMBER_NAME(minOffsetX,"minOffsetX");
	HX_MARK_MEMBER_NAME(glyphMap,"glyphMap");
	HX_MARK_MEMBER_NAME(glyphs,"glyphs");
	HX_MARK_MEMBER_NAME(color,"color");
	HX_MARK_MEMBER_NAME(scale,"scale");
	HX_MARK_MEMBER_NAME(spaceWidth,"spaceWidth");
	HX_MARK_MEMBER_NAME(font,"font");
	HX_MARK_END_CLASS();
}

void BitmapGlyphCollection_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(minOffsetX,"minOffsetX");
	HX_VISIT_MEMBER_NAME(glyphMap,"glyphMap");
	HX_VISIT_MEMBER_NAME(glyphs,"glyphs");
	HX_VISIT_MEMBER_NAME(color,"color");
	HX_VISIT_MEMBER_NAME(scale,"scale");
	HX_VISIT_MEMBER_NAME(spaceWidth,"spaceWidth");
	HX_VISIT_MEMBER_NAME(font,"font");
}

Dynamic BitmapGlyphCollection_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"font") ) { return font; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"color") ) { return color; }
		if (HX_FIELD_EQ(inName,"scale") ) { return scale; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"glyphs") ) { return glyphs; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"dispose") ) { return dispose_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"glyphMap") ) { return glyphMap; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"minOffsetX") ) { return minOffsetX; }
		if (HX_FIELD_EQ(inName,"spaceWidth") ) { return spaceWidth; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"prepareGlyphs") ) { return prepareGlyphs_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic BitmapGlyphCollection_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"font") ) { font=inValue.Cast< ::haxegon::bitmapFont::BitmapFont >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"color") ) { color=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scale") ) { scale=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"glyphs") ) { glyphs=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"glyphMap") ) { glyphMap=inValue.Cast< ::haxe::ds::IntMap >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"minOffsetX") ) { minOffsetX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"spaceWidth") ) { spaceWidth=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void BitmapGlyphCollection_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("minOffsetX","\xf3","\x55","\x1c","\x9d"));
	outFields->push(HX_HCSTRING("glyphMap","\x50","\x98","\x62","\xb1"));
	outFields->push(HX_HCSTRING("glyphs","\x47","\xf9","\x58","\xae"));
	outFields->push(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"));
	outFields->push(HX_HCSTRING("scale","\x8a","\xce","\xce","\x78"));
	outFields->push(HX_HCSTRING("spaceWidth","\x60","\x8b","\x97","\x2b"));
	outFields->push(HX_HCSTRING("font","\xcf","\x5d","\xc0","\x43"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(BitmapGlyphCollection_obj,minOffsetX),HX_HCSTRING("minOffsetX","\xf3","\x55","\x1c","\x9d")},
	{hx::fsObject /*::haxe::ds::IntMap*/ ,(int)offsetof(BitmapGlyphCollection_obj,glyphMap),HX_HCSTRING("glyphMap","\x50","\x98","\x62","\xb1")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(BitmapGlyphCollection_obj,glyphs),HX_HCSTRING("glyphs","\x47","\xf9","\x58","\xae")},
	{hx::fsInt,(int)offsetof(BitmapGlyphCollection_obj,color),HX_HCSTRING("color","\x63","\x71","\x5c","\x4a")},
	{hx::fsFloat,(int)offsetof(BitmapGlyphCollection_obj,scale),HX_HCSTRING("scale","\x8a","\xce","\xce","\x78")},
	{hx::fsFloat,(int)offsetof(BitmapGlyphCollection_obj,spaceWidth),HX_HCSTRING("spaceWidth","\x60","\x8b","\x97","\x2b")},
	{hx::fsObject /*::haxegon::bitmapFont::BitmapFont*/ ,(int)offsetof(BitmapGlyphCollection_obj,font),HX_HCSTRING("font","\xcf","\x5d","\xc0","\x43")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("minOffsetX","\xf3","\x55","\x1c","\x9d"),
	HX_HCSTRING("glyphMap","\x50","\x98","\x62","\xb1"),
	HX_HCSTRING("glyphs","\x47","\xf9","\x58","\xae"),
	HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"),
	HX_HCSTRING("scale","\x8a","\xce","\xce","\x78"),
	HX_HCSTRING("spaceWidth","\x60","\x8b","\x97","\x2b"),
	HX_HCSTRING("font","\xcf","\x5d","\xc0","\x43"),
	HX_HCSTRING("prepareGlyphs","\x2e","\x5e","\x9f","\x74"),
	HX_HCSTRING("dispose","\x9f","\x80","\x4c","\xbb"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BitmapGlyphCollection_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BitmapGlyphCollection_obj::__mClass,"__mClass");
};

#endif

hx::Class BitmapGlyphCollection_obj::__mClass;

void BitmapGlyphCollection_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxegon.bitmapFont.BitmapGlyphCollection","\x19","\xe8","\xb1","\x6a");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< BitmapGlyphCollection_obj >;
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

} // end namespace haxegon
} // end namespace bitmapFont
