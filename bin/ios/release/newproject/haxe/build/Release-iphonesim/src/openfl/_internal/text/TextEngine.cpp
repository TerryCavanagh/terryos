#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_Timer
#include <haxe/Timer.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLObject
#include <lime/graphics/opengl/GLObject.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLTexture
#include <lime/graphics/opengl/GLTexture.h>
#endif
#ifndef INCLUDED_lime_math_Vector2
#include <lime/math/Vector2.h>
#endif
#ifndef INCLUDED_lime_system_System
#include <lime/system/System.h>
#endif
#ifndef INCLUDED_lime_text_Font
#include <lime/text/Font.h>
#endif
#ifndef INCLUDED_lime_text_GlyphPosition
#include <lime/text/GlyphPosition.h>
#endif
#ifndef INCLUDED_lime_text_TextLayout
#include <lime/text/TextLayout.h>
#endif
#ifndef INCLUDED_openfl__internal_text_TextEngine
#include <openfl/_internal/text/TextEngine.h>
#endif
#ifndef INCLUDED_openfl__internal_text_TextFormatRange
#include <openfl/_internal/text/TextFormatRange.h>
#endif
#ifndef INCLUDED_openfl__internal_text_TextLayoutGroup
#include <openfl/_internal/text/TextLayoutGroup.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
#ifndef INCLUDED_openfl_text_Font
#include <openfl/text/Font.h>
#endif
#ifndef INCLUDED_openfl_text_TextField
#include <openfl/text/TextField.h>
#endif
#ifndef INCLUDED_openfl_text_TextFormat
#include <openfl/text/TextFormat.h>
#endif
namespace openfl{
namespace _internal{
namespace text{

Void TextEngine_obj::__construct(::openfl::text::TextField textField)
{
HX_STACK_FRAME("openfl._internal.text.TextEngine","new",0xcc80cb52,"openfl._internal.text.TextEngine.new","openfl/_internal/text/TextEngine.hx",120,0xdff93b7f)
HX_STACK_THIS(this)
HX_STACK_ARG(textField,"textField")
{
	HX_STACK_LINE(122)
	this->textField = textField;
	HX_STACK_LINE(124)
	this->width = (int)100;
	HX_STACK_LINE(125)
	this->height = (int)100;
	HX_STACK_LINE(126)
	this->text = HX_HCSTRING("","\x00","\x00","\x00","\x00");
	HX_STACK_LINE(128)
	::openfl::geom::Rectangle tmp = ::openfl::geom::Rectangle_obj::__new((int)0,(int)0,(int)0,(int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(128)
	this->bounds = tmp;
	HX_STACK_LINE(130)
	this->type = ((Dynamic)((int)0));
	HX_STACK_LINE(131)
	this->autoSize = ((Dynamic)((int)2));
	HX_STACK_LINE(132)
	this->displayAsPassword = false;
	HX_STACK_LINE(133)
	this->embedFonts = false;
	HX_STACK_LINE(134)
	this->selectable = true;
	HX_STACK_LINE(135)
	this->borderColor = (int)0;
	HX_STACK_LINE(136)
	this->border = false;
	HX_STACK_LINE(137)
	this->backgroundColor = (int)16777215;
	HX_STACK_LINE(138)
	this->background = false;
	HX_STACK_LINE(139)
	this->gridFitType = ((Dynamic)((int)1));
	HX_STACK_LINE(140)
	this->maxChars = (int)0;
	HX_STACK_LINE(141)
	this->multiline = false;
	HX_STACK_LINE(142)
	this->sharpness = (int)0;
	HX_STACK_LINE(143)
	this->scrollH = (int)0;
	HX_STACK_LINE(144)
	this->scrollV = (int)1;
	HX_STACK_LINE(145)
	this->wordWrap = false;
	HX_STACK_LINE(147)
	this->lineAscents = Array_obj< Float >::__new();
	HX_STACK_LINE(148)
	this->lineBreaks = Array_obj< int >::__new();
	HX_STACK_LINE(149)
	this->lineDescents = Array_obj< Float >::__new();
	HX_STACK_LINE(150)
	this->lineLeadings = Array_obj< Float >::__new();
	HX_STACK_LINE(151)
	this->lineHeights = Array_obj< Float >::__new();
	HX_STACK_LINE(152)
	this->lineWidths = Array_obj< Float >::__new();
	HX_STACK_LINE(153)
	this->layoutGroups = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(154)
	this->textFormatRanges = Array_obj< ::Dynamic >::__new();
}
;
	return null();
}

//TextEngine_obj::~TextEngine_obj() { }

Dynamic TextEngine_obj::__CreateEmpty() { return  new TextEngine_obj; }
hx::ObjectPtr< TextEngine_obj > TextEngine_obj::__new(::openfl::text::TextField textField)
{  hx::ObjectPtr< TextEngine_obj > _result_ = new TextEngine_obj();
	_result_->__construct(textField);
	return _result_;}

Dynamic TextEngine_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TextEngine_obj > _result_ = new TextEngine_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void TextEngine_obj::getBounds( ){
{
		HX_STACK_FRAME("openfl._internal.text.TextEngine","getBounds",0x5ce2cc1d,"openfl._internal.text.TextEngine.getBounds","openfl/_internal/text/TextEngine.hx",196,0xdff93b7f)
		HX_STACK_THIS(this)
		HX_STACK_LINE(198)
		bool tmp = this->border;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(198)
		int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(198)
		if ((tmp)){
			HX_STACK_LINE(198)
			tmp1 = (int)1;
		}
		else{
			HX_STACK_LINE(198)
			tmp1 = (int)0;
		}
		HX_STACK_LINE(198)
		int padding = tmp1;		HX_STACK_VAR(padding,"padding");
		HX_STACK_LINE(200)
		Float tmp2 = this->width;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(200)
		int tmp3 = padding;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(200)
		Float tmp4 = (tmp2 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(200)
		::openfl::geom::Rectangle tmp5 = this->bounds;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(200)
		tmp5->width = tmp4;
		HX_STACK_LINE(201)
		Float tmp6 = this->height;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(201)
		int tmp7 = padding;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(201)
		Float tmp8 = (tmp6 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(201)
		::openfl::geom::Rectangle tmp9 = this->bounds;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(201)
		tmp9->height = tmp8;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TextEngine_obj,getBounds,(void))

::String TextEngine_obj::getLine( int index){
	HX_STACK_FRAME("openfl._internal.text.TextEngine","getLine",0xf060239c,"openfl._internal.text.TextEngine.getLine","openfl/_internal/text/TextEngine.hx",433,0xdff93b7f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(435)
	bool tmp = (index < (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(435)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(435)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(435)
	if ((tmp1)){
		HX_STACK_LINE(435)
		int tmp3 = index;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(435)
		int tmp4 = this->lineBreaks->length;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(435)
		int tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(435)
		int tmp6 = (tmp5 + (int)1);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(435)
		int tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(435)
		tmp2 = (tmp3 > tmp7);
	}
	else{
		HX_STACK_LINE(435)
		tmp2 = true;
	}
	HX_STACK_LINE(435)
	if ((tmp2)){
		HX_STACK_LINE(437)
		return null();
	}
	HX_STACK_LINE(441)
	int tmp3 = this->lineBreaks->length;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(441)
	bool tmp4 = (tmp3 == (int)0);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(441)
	if ((tmp4)){
		HX_STACK_LINE(443)
		::String tmp5 = this->text;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(443)
		return tmp5;
	}
	else{
		HX_STACK_LINE(447)
		::String tmp5 = this->text;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(447)
		bool tmp6 = (index > (int)0);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(447)
		int tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(447)
		if ((tmp6)){
			HX_STACK_LINE(447)
			int tmp8 = (index - (int)1);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(447)
			tmp7 = this->lineBreaks->__get(tmp8);
		}
		else{
			HX_STACK_LINE(447)
			tmp7 = (int)0;
		}
		HX_STACK_LINE(447)
		int tmp8 = this->lineBreaks->__get(index);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(447)
		::String tmp9 = tmp5.substring(tmp7,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(447)
		return tmp9;
	}
	HX_STACK_LINE(441)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TextEngine_obj,getLine,return )

int TextEngine_obj::getLineBreakIndex( hx::Null< int >  __o_startIndex){
int startIndex = __o_startIndex.Default(0);
	HX_STACK_FRAME("openfl._internal.text.TextEngine","getLineBreakIndex",0x0741948f,"openfl._internal.text.TextEngine.getLineBreakIndex","openfl/_internal/text/TextEngine.hx",454,0xdff93b7f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(startIndex,"startIndex")
{
		HX_STACK_LINE(456)
		::String tmp = this->text;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(456)
		int tmp1 = startIndex;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(456)
		int tmp2 = tmp.indexOf(HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"),tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(456)
		int cr = tmp2;		HX_STACK_VAR(cr,"cr");
		HX_STACK_LINE(457)
		::String tmp3 = this->text;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(457)
		int tmp4 = startIndex;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(457)
		int tmp5 = tmp3.indexOf(HX_HCSTRING("\r","\x0d","\x00","\x00","\x00"),tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(457)
		int lf = tmp5;		HX_STACK_VAR(lf,"lf");
		HX_STACK_LINE(459)
		bool tmp6 = (cr == (int)-1);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(459)
		if ((tmp6)){
			HX_STACK_LINE(459)
			int tmp7 = lf;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(459)
			return tmp7;
		}
		HX_STACK_LINE(460)
		bool tmp7 = (lf == (int)-1);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(460)
		if ((tmp7)){
			HX_STACK_LINE(460)
			int tmp8 = cr;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(460)
			return tmp8;
		}
		HX_STACK_LINE(462)
		bool tmp8 = (cr < lf);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(462)
		int tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(462)
		if ((tmp8)){
			HX_STACK_LINE(462)
			tmp9 = cr;
		}
		else{
			HX_STACK_LINE(462)
			tmp9 = lf;
		}
		HX_STACK_LINE(462)
		return tmp9;
	}
}


HX_DEFINE_DYNAMIC_FUNC1(TextEngine_obj,getLineBreakIndex,return )

Void TextEngine_obj::getLineMeasurements( ){
{
		HX_STACK_FRAME("openfl._internal.text.TextEngine","getLineMeasurements",0x203f1eb3,"openfl._internal.text.TextEngine.getLineMeasurements","openfl/_internal/text/TextEngine.hx",467,0xdff93b7f)
		HX_STACK_THIS(this)
		HX_STACK_LINE(469)
		int tmp = this->lineAscents->length;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(469)
		this->lineAscents->splice((int)0,tmp);
		HX_STACK_LINE(470)
		int tmp1 = this->lineDescents->length;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(470)
		this->lineDescents->splice((int)0,tmp1);
		HX_STACK_LINE(471)
		int tmp2 = this->lineLeadings->length;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(471)
		this->lineLeadings->splice((int)0,tmp2);
		HX_STACK_LINE(472)
		int tmp3 = this->lineHeights->length;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(472)
		this->lineHeights->splice((int)0,tmp3);
		HX_STACK_LINE(473)
		int tmp4 = this->lineWidths->length;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(473)
		this->lineWidths->splice((int)0,tmp4);
		HX_STACK_LINE(475)
		Float currentLineAscent = ((Float)0.0);		HX_STACK_VAR(currentLineAscent,"currentLineAscent");
		HX_STACK_LINE(476)
		Float currentLineDescent = ((Float)0.0);		HX_STACK_VAR(currentLineDescent,"currentLineDescent");
		HX_STACK_LINE(477)
		Dynamic currentLineLeading = null();		HX_STACK_VAR(currentLineLeading,"currentLineLeading");
		HX_STACK_LINE(478)
		Float currentLineHeight = ((Float)0.0);		HX_STACK_VAR(currentLineHeight,"currentLineHeight");
		HX_STACK_LINE(479)
		Float currentLineWidth = ((Float)0.0);		HX_STACK_VAR(currentLineWidth,"currentLineWidth");
		HX_STACK_LINE(481)
		this->textWidth = (int)0;
		HX_STACK_LINE(482)
		this->textHeight = (int)0;
		HX_STACK_LINE(483)
		this->numLines = (int)1;
		HX_STACK_LINE(484)
		this->bottomScrollV = (int)0;
		HX_STACK_LINE(485)
		this->maxScrollH = (int)0;
		HX_STACK_LINE(487)
		{
			HX_STACK_LINE(487)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(487)
			Array< ::Dynamic > _g1 = this->layoutGroups;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(487)
			while((true)){
				HX_STACK_LINE(487)
				bool tmp5 = (_g < _g1->length);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(487)
				bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(487)
				if ((tmp6)){
					HX_STACK_LINE(487)
					break;
				}
				HX_STACK_LINE(487)
				::openfl::_internal::text::TextLayoutGroup tmp7 = _g1->__get(_g).StaticCast< ::openfl::_internal::text::TextLayoutGroup >();		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(487)
				::openfl::_internal::text::TextLayoutGroup group = tmp7;		HX_STACK_VAR(group,"group");
				HX_STACK_LINE(487)
				++(_g);
				HX_STACK_LINE(489)
				while((true)){
					HX_STACK_LINE(489)
					int tmp8 = group->lineIndex;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(489)
					int tmp9 = this->numLines;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(489)
					int tmp10 = (tmp9 - (int)1);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(489)
					bool tmp11 = (tmp8 > tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(489)
					bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(489)
					if ((tmp12)){
						HX_STACK_LINE(489)
						break;
					}
					HX_STACK_LINE(491)
					Float tmp13 = currentLineAscent;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(491)
					this->lineAscents->push(tmp13);
					HX_STACK_LINE(492)
					Float tmp14 = currentLineDescent;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(492)
					this->lineDescents->push(tmp14);
					HX_STACK_LINE(493)
					bool tmp15 = (currentLineLeading != null());		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(493)
					Float tmp16;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(493)
					if ((tmp15)){
						HX_STACK_LINE(493)
						tmp16 = currentLineLeading;
					}
					else{
						HX_STACK_LINE(493)
						tmp16 = (int)0;
					}
					HX_STACK_LINE(493)
					this->lineLeadings->push(tmp16);
					HX_STACK_LINE(494)
					Float tmp17 = currentLineHeight;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(494)
					this->lineHeights->push(tmp17);
					HX_STACK_LINE(495)
					Float tmp18 = currentLineWidth;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(495)
					this->lineWidths->push(tmp18);
					HX_STACK_LINE(497)
					currentLineAscent = (int)0;
					HX_STACK_LINE(498)
					currentLineDescent = (int)0;
					HX_STACK_LINE(499)
					currentLineLeading = null();
					HX_STACK_LINE(500)
					currentLineHeight = (int)0;
					HX_STACK_LINE(501)
					currentLineWidth = (int)0;
					HX_STACK_LINE(503)
					(this->numLines)++;
					HX_STACK_LINE(505)
					Float tmp19 = this->textHeight;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(505)
					Float tmp20 = this->height;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(505)
					Float tmp21 = (tmp20 - (int)2);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(505)
					bool tmp22 = (tmp19 <= tmp21);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(505)
					if ((tmp22)){
						HX_STACK_LINE(507)
						(this->bottomScrollV)++;
					}
				}
				HX_STACK_LINE(513)
				Float tmp8 = currentLineAscent;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(513)
				Float tmp9 = group->ascent;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(513)
				Float tmp10 = ::Math_obj::max(tmp8,tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(513)
				currentLineAscent = tmp10;
				HX_STACK_LINE(514)
				Float tmp11 = currentLineDescent;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(514)
				Float tmp12 = group->descent;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(514)
				Float tmp13 = ::Math_obj::max(tmp11,tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(514)
				currentLineDescent = tmp13;
				HX_STACK_LINE(516)
				bool tmp14 = (currentLineLeading == null());		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(516)
				if ((tmp14)){
					HX_STACK_LINE(518)
					currentLineLeading = group->leading;
				}
				else{
					HX_STACK_LINE(522)
					Dynamic tmp15 = currentLineLeading;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(522)
					int tmp16 = group->leading;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(522)
					Float tmp17 = ::Math_obj::max(tmp15,tmp16);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(522)
					int tmp18 = ::Std_obj::_int(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(522)
					currentLineLeading = tmp18;
				}
				HX_STACK_LINE(526)
				Float tmp15 = currentLineHeight;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(526)
				Float tmp16 = group->height;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(526)
				Float tmp17 = ::Math_obj::max(tmp15,tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(526)
				currentLineHeight = tmp17;
				HX_STACK_LINE(527)
				Float tmp18 = (group->offsetX - (int)2);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(527)
				Float tmp19 = group->width;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(527)
				Float tmp20 = (tmp18 + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(527)
				currentLineWidth = tmp20;
				HX_STACK_LINE(529)
				Float tmp21 = currentLineWidth;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(529)
				Float tmp22 = this->textWidth;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(529)
				bool tmp23 = (tmp21 > tmp22);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(529)
				if ((tmp23)){
					HX_STACK_LINE(531)
					this->textWidth = currentLineWidth;
				}
				HX_STACK_LINE(535)
				Float tmp24 = (group->offsetY - (int)2);		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(535)
				Float tmp25 = group->ascent;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(535)
				Float tmp26 = (tmp24 + tmp25);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(535)
				Float tmp27 = group->descent;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(535)
				Float tmp28 = (tmp26 + tmp27);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(535)
				this->textHeight = tmp28;
			}
		}
		HX_STACK_LINE(539)
		Float tmp5 = currentLineAscent;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(539)
		this->lineAscents->push(tmp5);
		HX_STACK_LINE(540)
		Float tmp6 = currentLineDescent;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(540)
		this->lineDescents->push(tmp6);
		HX_STACK_LINE(541)
		bool tmp7 = (currentLineLeading != null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(541)
		Float tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(541)
		if ((tmp7)){
			HX_STACK_LINE(541)
			tmp8 = currentLineLeading;
		}
		else{
			HX_STACK_LINE(541)
			tmp8 = (int)0;
		}
		HX_STACK_LINE(541)
		this->lineLeadings->push(tmp8);
		HX_STACK_LINE(542)
		Float tmp9 = currentLineHeight;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(542)
		this->lineHeights->push(tmp9);
		HX_STACK_LINE(543)
		Float tmp10 = currentLineWidth;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(543)
		this->lineWidths->push(tmp10);
		HX_STACK_LINE(545)
		int tmp11 = this->numLines;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(545)
		bool tmp12 = (tmp11 == (int)1);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(545)
		if ((tmp12)){
			HX_STACK_LINE(547)
			this->bottomScrollV = (int)1;
			HX_STACK_LINE(549)
			bool tmp13 = (currentLineLeading > (int)0);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(549)
			if ((tmp13)){
				HX_STACK_LINE(551)
				hx::AddEq(this->textHeight,currentLineLeading);
			}
		}
		else{
			HX_STACK_LINE(555)
			Float tmp13 = this->textHeight;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(555)
			Float tmp14 = this->height;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(555)
			Float tmp15 = (tmp14 - (int)2);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(555)
			bool tmp16 = (tmp13 <= tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(555)
			if ((tmp16)){
				HX_STACK_LINE(557)
				(this->bottomScrollV)++;
			}
		}
		HX_STACK_LINE(561)
		Float tmp13 = this->textWidth;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(561)
		Float tmp14 = this->width;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(561)
		Float tmp15 = (tmp14 - (int)4);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(561)
		bool tmp16 = (tmp13 > tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(561)
		if ((tmp16)){
			HX_STACK_LINE(563)
			Float tmp17 = this->textWidth;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(563)
			Float tmp18 = this->width;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(563)
			Float tmp19 = (tmp17 - tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(563)
			Float tmp20 = (tmp19 + (int)4);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(563)
			int tmp21 = ::Std_obj::_int(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(563)
			this->maxScrollH = tmp21;
		}
		else{
			HX_STACK_LINE(567)
			this->maxScrollH = (int)0;
		}
		HX_STACK_LINE(571)
		int tmp17 = this->numLines;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(571)
		int tmp18 = this->bottomScrollV;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(571)
		int tmp19 = (tmp17 - tmp18);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(571)
		int tmp20 = (tmp19 + (int)1);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(571)
		this->maxScrollV = tmp20;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TextEngine_obj,getLineMeasurements,(void))

Void TextEngine_obj::getLayoutGroups( ){
{
		HX_STACK_FRAME("openfl._internal.text.TextEngine","getLayoutGroups",0xa3099646,"openfl._internal.text.TextEngine.getLayoutGroups","openfl/_internal/text/TextEngine.hx",576,0xdff93b7f)
		HX_STACK_THIS(this)
		HX_STACK_LINE(576)
		::openfl::_internal::text::TextEngine _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(578)
		int tmp = this->layoutGroups->length;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(578)
		this->layoutGroups->splice((int)0,tmp);
		HX_STACK_LINE(580)
		int rangeIndex = (int)-1;		HX_STACK_VAR(rangeIndex,"rangeIndex");
		HX_STACK_LINE(581)
		::openfl::_internal::text::TextFormatRange formatRange = null();		HX_STACK_VAR(formatRange,"formatRange");
		HX_STACK_LINE(582)
		::lime::text::Font font = null();		HX_STACK_VAR(font,"font");
		HX_STACK_LINE(584)
		::openfl::text::TextFormat tmp1 = ::openfl::text::TextField_obj::__defaultTextFormat;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(584)
		::openfl::text::TextFormat tmp2 = tmp1->clone();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(584)
		::openfl::text::TextFormat currentFormat = tmp2;		HX_STACK_VAR(currentFormat,"currentFormat");
		HX_STACK_LINE(586)
		int leading = (int)0;		HX_STACK_VAR(leading,"leading");
		HX_STACK_LINE(587)
		Float ascent = ((Float)0.0);		HX_STACK_VAR(ascent,"ascent");
		HX_STACK_LINE(588)
		Float descent = ((Float)0.0);		HX_STACK_VAR(descent,"descent");
		HX_STACK_LINE(590)
		::openfl::_internal::text::TextLayoutGroup layoutGroup;		HX_STACK_VAR(layoutGroup,"layoutGroup");
		HX_STACK_LINE(590)
		Array< Float > advances;		HX_STACK_VAR(advances,"advances");
		HX_STACK_LINE(591)
		Float widthValue;		HX_STACK_VAR(widthValue,"widthValue");
		HX_STACK_LINE(591)
		Float heightValue = ((Float)0.0);		HX_STACK_VAR(heightValue,"heightValue");
		HX_STACK_LINE(593)
		Float spaceWidth = ((Float)0.0);		HX_STACK_VAR(spaceWidth,"spaceWidth");
		HX_STACK_LINE(594)
		int previousSpaceIndex = (int)0;		HX_STACK_VAR(previousSpaceIndex,"previousSpaceIndex");
		HX_STACK_LINE(595)
		::String tmp3 = this->text;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(595)
		int tmp4 = tmp3.indexOf(HX_HCSTRING(" ","\x20","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(595)
		int spaceIndex = tmp4;		HX_STACK_VAR(spaceIndex,"spaceIndex");
		HX_STACK_LINE(596)
		int tmp5 = this->getLineBreakIndex(null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(596)
		int breakIndex = tmp5;		HX_STACK_VAR(breakIndex,"breakIndex");
		HX_STACK_LINE(598)
		Float marginRight = ((Float)0.0);		HX_STACK_VAR(marginRight,"marginRight");
		HX_STACK_LINE(599)
		Float offsetX = ((Float)2.0);		HX_STACK_VAR(offsetX,"offsetX");
		HX_STACK_LINE(600)
		Float offsetY = ((Float)2.0);		HX_STACK_VAR(offsetY,"offsetY");
		HX_STACK_LINE(601)
		int textIndex = (int)0;		HX_STACK_VAR(textIndex,"textIndex");
		HX_STACK_LINE(602)
		int lineIndex = (int)0;		HX_STACK_VAR(lineIndex,"lineIndex");
		HX_STACK_LINE(603)
		::openfl::text::TextFormat lineFormat = null();		HX_STACK_VAR(lineFormat,"lineFormat");
		HX_STACK_LINE(757)
		{
			HX_STACK_LINE(757)
			int tmp6 = rangeIndex;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(757)
			int tmp7 = _g->textFormatRanges->length;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(757)
			int tmp8 = (tmp7 - (int)1);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(757)
			bool tmp9 = (tmp6 < tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(757)
			if ((tmp9)){
				HX_STACK_LINE(757)
				(rangeIndex)++;
				HX_STACK_LINE(757)
				::openfl::_internal::text::TextFormatRange tmp10 = _g->textFormatRanges->__get(rangeIndex).StaticCast< ::openfl::_internal::text::TextFormatRange >();		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(757)
				formatRange = tmp10;
				HX_STACK_LINE(757)
				::openfl::text::TextFormat tmp11 = formatRange->format;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(757)
				currentFormat->__merge(tmp11);
				HX_STACK_LINE(757)
				::openfl::text::TextFormat tmp12 = currentFormat;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(757)
				::openfl::text::Font tmp13 = ::openfl::_internal::text::TextEngine_obj::getFontInstance(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(757)
				font = tmp13;
				HX_STACK_LINE(757)
				bool tmp14 = (font != null());		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(757)
				if ((tmp14)){
					HX_STACK_LINE(757)
					int tmp15 = font->get_ascender();		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(757)
					int tmp16 = font->get_unitsPerEM();		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(757)
					Float tmp17 = (Float(tmp15) / Float(tmp16));		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(757)
					Dynamic tmp18 = currentFormat->size;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(757)
					Float tmp19 = (tmp17 * tmp18);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(757)
					ascent = tmp19;
					HX_STACK_LINE(757)
					int tmp20 = font->get_descender();		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(757)
					int tmp21 = font->get_unitsPerEM();		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(757)
					Float tmp22 = (Float(tmp20) / Float(tmp21));		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(757)
					Dynamic tmp23 = currentFormat->size;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(757)
					Float tmp24 = (tmp22 * tmp23);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(757)
					Float tmp25 = ::Math_obj::abs(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(757)
					descent = tmp25;
					HX_STACK_LINE(757)
					leading = currentFormat->leading;
					HX_STACK_LINE(757)
					Float tmp26 = (ascent + descent);		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(757)
					int tmp27 = leading;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(757)
					Float tmp28 = (tmp26 + tmp27);		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(757)
					heightValue = tmp28;
				}
				else{
					HX_STACK_LINE(757)
					ascent = currentFormat->size;
					HX_STACK_LINE(757)
					Float tmp15 = (currentFormat->size * ((Float)0.185));		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(757)
					descent = tmp15;
					HX_STACK_LINE(757)
					leading = currentFormat->leading;
					HX_STACK_LINE(757)
					Float tmp16 = (ascent + descent);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(757)
					int tmp17 = leading;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(757)
					Float tmp18 = (tmp16 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(757)
					heightValue = tmp18;
				}
				HX_STACK_LINE(757)
				bool tmp15 = (spaceIndex > (int)-1);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(757)
				if ((tmp15)){
					HX_STACK_LINE(757)
					Float tmp16;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(757)
					{
						HX_STACK_LINE(757)
						bool tmp17 = (_g->__textLayout == null());		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(757)
						if ((tmp17)){
							HX_STACK_LINE(757)
							::lime::text::TextLayout tmp18 = ::lime::text::TextLayout_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(757)
							_g->__textLayout = tmp18;
						}
						HX_STACK_LINE(757)
						Float width = ((Float)0.0);		HX_STACK_VAR(width,"width");
						HX_STACK_LINE(757)
						_g->__textLayout->set_text(null());
						HX_STACK_LINE(757)
						::lime::text::Font tmp18 = font;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(757)
						_g->__textLayout->set_font(tmp18);
						HX_STACK_LINE(757)
						Dynamic tmp19 = formatRange->format->size;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(757)
						bool tmp20 = (tmp19 != null());		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(757)
						if ((tmp20)){
							HX_STACK_LINE(757)
							Dynamic tmp21 = formatRange->format->size;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(757)
							_g->__textLayout->set_size(tmp21);
						}
						HX_STACK_LINE(757)
						_g->__textLayout->set_text(HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));
						HX_STACK_LINE(757)
						{
							HX_STACK_LINE(757)
							int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(757)
							Array< ::Dynamic > _g2 = _g->__textLayout->get_positions();		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(757)
							while((true)){
								HX_STACK_LINE(757)
								bool tmp21 = (_g1 < _g2->length);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(757)
								bool tmp22 = !(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(757)
								if ((tmp22)){
									HX_STACK_LINE(757)
									break;
								}
								HX_STACK_LINE(757)
								::lime::text::GlyphPosition tmp23 = _g2->__get(_g1).StaticCast< ::lime::text::GlyphPosition >();		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(757)
								::lime::text::GlyphPosition position = tmp23;		HX_STACK_VAR(position,"position");
								HX_STACK_LINE(757)
								++(_g1);
								HX_STACK_LINE(757)
								Float tmp24 = position->advance->x;		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(757)
								hx::AddEq(width,tmp24);
							}
						}
						HX_STACK_LINE(757)
						tmp16 = width;
					}
					HX_STACK_LINE(757)
					spaceWidth = tmp16;
				}
			}
		}
		HX_STACK_LINE(759)
		lineFormat = formatRange->format;
		HX_STACK_LINE(760)
		bool wrap;		HX_STACK_VAR(wrap,"wrap");
		HX_STACK_LINE(762)
		while((true)){
			HX_STACK_LINE(762)
			int tmp6 = textIndex;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(762)
			::String tmp7 = this->text;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(762)
			int tmp8 = tmp7.length;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(762)
			bool tmp9 = (tmp6 < tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(762)
			bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(762)
			if ((tmp10)){
				HX_STACK_LINE(762)
				break;
			}
			HX_STACK_LINE(764)
			bool tmp11 = (breakIndex > (int)-1);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(764)
			bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(764)
			bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(764)
			if ((tmp12)){
				HX_STACK_LINE(764)
				int tmp14 = spaceIndex;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(764)
				int tmp15 = (int)-1;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(764)
				int tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(764)
				int tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(764)
				bool tmp18 = (tmp14 == tmp17);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(764)
				bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(764)
				bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(764)
				bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(764)
				bool tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(764)
				bool tmp23 = !(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(764)
				bool tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(764)
				bool tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(764)
				bool tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(764)
				bool tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(764)
				if ((tmp27)){
					HX_STACK_LINE(764)
					tmp13 = (breakIndex < spaceIndex);
				}
				else{
					HX_STACK_LINE(764)
					tmp13 = true;
				}
			}
			else{
				HX_STACK_LINE(764)
				tmp13 = false;
			}
			HX_STACK_LINE(764)
			bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(764)
			if ((tmp13)){
				HX_STACK_LINE(764)
				tmp14 = (formatRange->end >= breakIndex);
			}
			else{
				HX_STACK_LINE(764)
				tmp14 = false;
			}
			HX_STACK_LINE(764)
			if ((tmp14)){
				HX_STACK_LINE(766)
				::openfl::_internal::text::TextLayoutGroup tmp15 = ::openfl::_internal::text::TextLayoutGroup_obj::__new(formatRange->format,textIndex,breakIndex);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(766)
				layoutGroup = tmp15;
				HX_STACK_LINE(767)
				{
					HX_STACK_LINE(767)
					Array< Float > advances1 = Array_obj< Float >::__new();		HX_STACK_VAR(advances1,"advances1");
					HX_STACK_LINE(767)
					bool tmp16 = (_g->__textLayout == null());		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(767)
					if ((tmp16)){
						HX_STACK_LINE(767)
						::lime::text::TextLayout tmp17 = ::lime::text::TextLayout_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(767)
						_g->__textLayout = tmp17;
					}
					HX_STACK_LINE(767)
					Float width = ((Float)0.0);		HX_STACK_VAR(width,"width");
					HX_STACK_LINE(767)
					_g->__textLayout->set_text(null());
					HX_STACK_LINE(767)
					::lime::text::Font tmp17 = font;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(767)
					_g->__textLayout->set_font(tmp17);
					HX_STACK_LINE(767)
					Dynamic tmp18 = formatRange->format->size;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(767)
					bool tmp19 = (tmp18 != null());		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(767)
					if ((tmp19)){
						HX_STACK_LINE(767)
						Dynamic tmp20 = formatRange->format->size;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(767)
						_g->__textLayout->set_size(tmp20);
					}
					HX_STACK_LINE(767)
					::String tmp20 = this->text;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(767)
					int tmp21 = textIndex;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(767)
					int tmp22 = breakIndex;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(767)
					::String tmp23 = tmp20.substring(tmp21,tmp22);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(767)
					_g->__textLayout->set_text(tmp23);
					HX_STACK_LINE(767)
					{
						HX_STACK_LINE(767)
						int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(767)
						Array< ::Dynamic > _g2 = _g->__textLayout->get_positions();		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(767)
						while((true)){
							HX_STACK_LINE(767)
							bool tmp24 = (_g1 < _g2->length);		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(767)
							bool tmp25 = !(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(767)
							if ((tmp25)){
								HX_STACK_LINE(767)
								break;
							}
							HX_STACK_LINE(767)
							::lime::text::GlyphPosition tmp26 = _g2->__get(_g1).StaticCast< ::lime::text::GlyphPosition >();		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(767)
							::lime::text::GlyphPosition position = tmp26;		HX_STACK_VAR(position,"position");
							HX_STACK_LINE(767)
							++(_g1);
							HX_STACK_LINE(767)
							Float tmp27 = position->advance->x;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(767)
							advances1->push(tmp27);
						}
					}
					HX_STACK_LINE(767)
					layoutGroup->advances = advances1;
				}
				HX_STACK_LINE(768)
				layoutGroup->offsetX = offsetX;
				HX_STACK_LINE(769)
				layoutGroup->ascent = ascent;
				HX_STACK_LINE(770)
				layoutGroup->descent = descent;
				HX_STACK_LINE(771)
				layoutGroup->leading = leading;
				HX_STACK_LINE(772)
				layoutGroup->lineIndex = lineIndex;
				HX_STACK_LINE(773)
				layoutGroup->offsetY = offsetY;
				HX_STACK_LINE(774)
				Float tmp16;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(774)
				{
					HX_STACK_LINE(774)
					Array< Float > advances1 = layoutGroup->advances;		HX_STACK_VAR(advances1,"advances1");
					HX_STACK_LINE(774)
					Float width = ((Float)0.0);		HX_STACK_VAR(width,"width");
					HX_STACK_LINE(774)
					{
						HX_STACK_LINE(774)
						int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(774)
						while((true)){
							HX_STACK_LINE(774)
							bool tmp17 = (_g1 < advances1->length);		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(774)
							bool tmp18 = !(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(774)
							if ((tmp18)){
								HX_STACK_LINE(774)
								break;
							}
							HX_STACK_LINE(774)
							Float tmp19 = advances1->__get(_g1);		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(774)
							Float advance = tmp19;		HX_STACK_VAR(advance,"advance");
							HX_STACK_LINE(774)
							++(_g1);
							HX_STACK_LINE(774)
							hx::AddEq(width,advance);
						}
					}
					HX_STACK_LINE(774)
					tmp16 = width;
				}
				HX_STACK_LINE(774)
				layoutGroup->width = tmp16;
				HX_STACK_LINE(775)
				layoutGroup->height = heightValue;
				HX_STACK_LINE(776)
				::openfl::_internal::text::TextLayoutGroup tmp17 = layoutGroup;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(776)
				this->layoutGroups->push(tmp17);
				HX_STACK_LINE(778)
				hx::AddEq(offsetY,heightValue);
				HX_STACK_LINE(779)
				offsetX = (int)2;
				HX_STACK_LINE(781)
				bool tmp18 = this->wordWrap;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(781)
				bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(781)
				if ((tmp18)){
					HX_STACK_LINE(781)
					Float tmp20 = (layoutGroup->offsetX + layoutGroup->width);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(781)
					Float tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(781)
					Float tmp22 = this->width;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(781)
					Float tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(781)
					Float tmp24 = (tmp23 - (int)2);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(781)
					Float tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(781)
					tmp19 = (tmp21 > tmp25);
				}
				else{
					HX_STACK_LINE(781)
					tmp19 = false;
				}
				HX_STACK_LINE(781)
				if ((tmp19)){
					HX_STACK_LINE(783)
					layoutGroup->offsetY = offsetY;
					HX_STACK_LINE(784)
					layoutGroup->offsetX = offsetX;
					HX_STACK_LINE(785)
					(layoutGroup->lineIndex)++;
					HX_STACK_LINE(787)
					hx::AddEq(offsetY,heightValue);
					HX_STACK_LINE(788)
					(lineIndex)++;
				}
				HX_STACK_LINE(792)
				bool tmp20 = (formatRange->end == breakIndex);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(792)
				if ((tmp20)){
					HX_STACK_LINE(794)
					{
						HX_STACK_LINE(794)
						int tmp21 = rangeIndex;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(794)
						int tmp22 = _g->textFormatRanges->length;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(794)
						int tmp23 = (tmp22 - (int)1);		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(794)
						bool tmp24 = (tmp21 < tmp23);		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(794)
						if ((tmp24)){
							HX_STACK_LINE(794)
							(rangeIndex)++;
							HX_STACK_LINE(794)
							::openfl::_internal::text::TextFormatRange tmp25 = _g->textFormatRanges->__get(rangeIndex).StaticCast< ::openfl::_internal::text::TextFormatRange >();		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(794)
							formatRange = tmp25;
							HX_STACK_LINE(794)
							::openfl::text::TextFormat tmp26 = formatRange->format;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(794)
							currentFormat->__merge(tmp26);
							HX_STACK_LINE(794)
							::openfl::text::TextFormat tmp27 = currentFormat;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(794)
							::openfl::text::Font tmp28 = ::openfl::_internal::text::TextEngine_obj::getFontInstance(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(794)
							font = tmp28;
							HX_STACK_LINE(794)
							bool tmp29 = (font != null());		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(794)
							if ((tmp29)){
								HX_STACK_LINE(794)
								int tmp30 = font->get_ascender();		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(794)
								int tmp31 = font->get_unitsPerEM();		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(794)
								Float tmp32 = (Float(tmp30) / Float(tmp31));		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(794)
								Dynamic tmp33 = currentFormat->size;		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(794)
								Float tmp34 = (tmp32 * tmp33);		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(794)
								ascent = tmp34;
								HX_STACK_LINE(794)
								int tmp35 = font->get_descender();		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(794)
								int tmp36 = font->get_unitsPerEM();		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(794)
								Float tmp37 = (Float(tmp35) / Float(tmp36));		HX_STACK_VAR(tmp37,"tmp37");
								HX_STACK_LINE(794)
								Dynamic tmp38 = currentFormat->size;		HX_STACK_VAR(tmp38,"tmp38");
								HX_STACK_LINE(794)
								Float tmp39 = (tmp37 * tmp38);		HX_STACK_VAR(tmp39,"tmp39");
								HX_STACK_LINE(794)
								Float tmp40 = ::Math_obj::abs(tmp39);		HX_STACK_VAR(tmp40,"tmp40");
								HX_STACK_LINE(794)
								descent = tmp40;
								HX_STACK_LINE(794)
								leading = currentFormat->leading;
								HX_STACK_LINE(794)
								Float tmp41 = (ascent + descent);		HX_STACK_VAR(tmp41,"tmp41");
								HX_STACK_LINE(794)
								int tmp42 = leading;		HX_STACK_VAR(tmp42,"tmp42");
								HX_STACK_LINE(794)
								Float tmp43 = (tmp41 + tmp42);		HX_STACK_VAR(tmp43,"tmp43");
								HX_STACK_LINE(794)
								heightValue = tmp43;
							}
							else{
								HX_STACK_LINE(794)
								ascent = currentFormat->size;
								HX_STACK_LINE(794)
								Float tmp30 = (currentFormat->size * ((Float)0.185));		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(794)
								descent = tmp30;
								HX_STACK_LINE(794)
								leading = currentFormat->leading;
								HX_STACK_LINE(794)
								Float tmp31 = (ascent + descent);		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(794)
								int tmp32 = leading;		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(794)
								Float tmp33 = (tmp31 + tmp32);		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(794)
								heightValue = tmp33;
							}
							HX_STACK_LINE(794)
							bool tmp30 = (spaceIndex > (int)-1);		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(794)
							if ((tmp30)){
								HX_STACK_LINE(794)
								Float tmp31;		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(794)
								{
									HX_STACK_LINE(794)
									bool tmp32 = (_g->__textLayout == null());		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(794)
									if ((tmp32)){
										HX_STACK_LINE(794)
										::lime::text::TextLayout tmp33 = ::lime::text::TextLayout_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(794)
										_g->__textLayout = tmp33;
									}
									HX_STACK_LINE(794)
									Float width = ((Float)0.0);		HX_STACK_VAR(width,"width");
									HX_STACK_LINE(794)
									_g->__textLayout->set_text(null());
									HX_STACK_LINE(794)
									::lime::text::Font tmp33 = font;		HX_STACK_VAR(tmp33,"tmp33");
									HX_STACK_LINE(794)
									_g->__textLayout->set_font(tmp33);
									HX_STACK_LINE(794)
									Dynamic tmp34 = formatRange->format->size;		HX_STACK_VAR(tmp34,"tmp34");
									HX_STACK_LINE(794)
									bool tmp35 = (tmp34 != null());		HX_STACK_VAR(tmp35,"tmp35");
									HX_STACK_LINE(794)
									if ((tmp35)){
										HX_STACK_LINE(794)
										Dynamic tmp36 = formatRange->format->size;		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(794)
										_g->__textLayout->set_size(tmp36);
									}
									HX_STACK_LINE(794)
									_g->__textLayout->set_text(HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));
									HX_STACK_LINE(794)
									{
										HX_STACK_LINE(794)
										int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
										HX_STACK_LINE(794)
										Array< ::Dynamic > _g2 = _g->__textLayout->get_positions();		HX_STACK_VAR(_g2,"_g2");
										HX_STACK_LINE(794)
										while((true)){
											HX_STACK_LINE(794)
											bool tmp36 = (_g1 < _g2->length);		HX_STACK_VAR(tmp36,"tmp36");
											HX_STACK_LINE(794)
											bool tmp37 = !(tmp36);		HX_STACK_VAR(tmp37,"tmp37");
											HX_STACK_LINE(794)
											if ((tmp37)){
												HX_STACK_LINE(794)
												break;
											}
											HX_STACK_LINE(794)
											::lime::text::GlyphPosition tmp38 = _g2->__get(_g1).StaticCast< ::lime::text::GlyphPosition >();		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(794)
											::lime::text::GlyphPosition position = tmp38;		HX_STACK_VAR(position,"position");
											HX_STACK_LINE(794)
											++(_g1);
											HX_STACK_LINE(794)
											Float tmp39 = position->advance->x;		HX_STACK_VAR(tmp39,"tmp39");
											HX_STACK_LINE(794)
											hx::AddEq(width,tmp39);
										}
									}
									HX_STACK_LINE(794)
									tmp31 = width;
								}
								HX_STACK_LINE(794)
								spaceWidth = tmp31;
							}
						}
					}
					HX_STACK_LINE(795)
					lineFormat = formatRange->format;
				}
				HX_STACK_LINE(799)
				int tmp21 = (breakIndex + (int)1);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(799)
				textIndex = tmp21;
				HX_STACK_LINE(800)
				int tmp22 = textIndex;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(800)
				int tmp23 = this->getLineBreakIndex(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(800)
				breakIndex = tmp23;
				HX_STACK_LINE(801)
				(lineIndex)++;
			}
			else{
				HX_STACK_LINE(803)
				bool tmp15 = (formatRange->end >= spaceIndex);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(803)
				bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(803)
				if ((tmp15)){
					HX_STACK_LINE(803)
					tmp16 = (spaceIndex > (int)-1);
				}
				else{
					HX_STACK_LINE(803)
					tmp16 = false;
				}
				HX_STACK_LINE(803)
				if ((tmp16)){
					HX_STACK_LINE(805)
					layoutGroup = null();
					HX_STACK_LINE(806)
					wrap = false;
					HX_STACK_LINE(808)
					while((true)){
						HX_STACK_LINE(810)
						bool tmp17 = (spaceIndex == (int)-1);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(810)
						if ((tmp17)){
							HX_STACK_LINE(810)
							spaceIndex = formatRange->end;
						}
						HX_STACK_LINE(812)
						{
							HX_STACK_LINE(812)
							Array< Float > advances1 = Array_obj< Float >::__new();		HX_STACK_VAR(advances1,"advances1");
							HX_STACK_LINE(812)
							bool tmp18 = (_g->__textLayout == null());		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(812)
							if ((tmp18)){
								HX_STACK_LINE(812)
								::lime::text::TextLayout tmp19 = ::lime::text::TextLayout_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(812)
								_g->__textLayout = tmp19;
							}
							HX_STACK_LINE(812)
							Float width = ((Float)0.0);		HX_STACK_VAR(width,"width");
							HX_STACK_LINE(812)
							_g->__textLayout->set_text(null());
							HX_STACK_LINE(812)
							::lime::text::Font tmp19 = font;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(812)
							_g->__textLayout->set_font(tmp19);
							HX_STACK_LINE(812)
							Dynamic tmp20 = formatRange->format->size;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(812)
							bool tmp21 = (tmp20 != null());		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(812)
							if ((tmp21)){
								HX_STACK_LINE(812)
								Dynamic tmp22 = formatRange->format->size;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(812)
								_g->__textLayout->set_size(tmp22);
							}
							HX_STACK_LINE(812)
							::String tmp22 = this->text;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(812)
							int tmp23 = textIndex;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(812)
							int tmp24 = spaceIndex;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(812)
							::String tmp25 = tmp22.substring(tmp23,tmp24);		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(812)
							_g->__textLayout->set_text(tmp25);
							HX_STACK_LINE(812)
							{
								HX_STACK_LINE(812)
								int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
								HX_STACK_LINE(812)
								Array< ::Dynamic > _g2 = _g->__textLayout->get_positions();		HX_STACK_VAR(_g2,"_g2");
								HX_STACK_LINE(812)
								while((true)){
									HX_STACK_LINE(812)
									bool tmp26 = (_g1 < _g2->length);		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(812)
									bool tmp27 = !(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(812)
									if ((tmp27)){
										HX_STACK_LINE(812)
										break;
									}
									HX_STACK_LINE(812)
									::lime::text::GlyphPosition tmp28 = _g2->__get(_g1).StaticCast< ::lime::text::GlyphPosition >();		HX_STACK_VAR(tmp28,"tmp28");
									HX_STACK_LINE(812)
									::lime::text::GlyphPosition position = tmp28;		HX_STACK_VAR(position,"position");
									HX_STACK_LINE(812)
									++(_g1);
									HX_STACK_LINE(812)
									Float tmp29 = position->advance->x;		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(812)
									advances1->push(tmp29);
								}
							}
							HX_STACK_LINE(812)
							advances = advances1;
						}
						HX_STACK_LINE(813)
						Float tmp18;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(813)
						{
							HX_STACK_LINE(813)
							Float width = ((Float)0.0);		HX_STACK_VAR(width,"width");
							HX_STACK_LINE(813)
							{
								HX_STACK_LINE(813)
								int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
								HX_STACK_LINE(813)
								while((true)){
									HX_STACK_LINE(813)
									bool tmp19 = (_g1 < advances->length);		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(813)
									bool tmp20 = !(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(813)
									if ((tmp20)){
										HX_STACK_LINE(813)
										break;
									}
									HX_STACK_LINE(813)
									Float tmp21 = advances->__get(_g1);		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(813)
									Float advance = tmp21;		HX_STACK_VAR(advance,"advance");
									HX_STACK_LINE(813)
									++(_g1);
									HX_STACK_LINE(813)
									hx::AddEq(width,advance);
								}
							}
							HX_STACK_LINE(813)
							tmp18 = width;
						}
						HX_STACK_LINE(813)
						widthValue = tmp18;
						HX_STACK_LINE(815)
						bool tmp19 = this->wordWrap;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(815)
						if ((tmp19)){
							HX_STACK_LINE(817)
							Float tmp20 = (offsetX + widthValue);		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(817)
							Float tmp21 = this->width;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(817)
							Float tmp22 = (tmp21 - (int)2);		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(817)
							bool tmp23 = (tmp20 > tmp22);		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(817)
							if ((tmp23)){
								HX_STACK_LINE(819)
								wrap = true;
							}
						}
						HX_STACK_LINE(825)
						bool tmp20 = wrap;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(825)
						if ((tmp20)){
							HX_STACK_LINE(827)
							hx::AddEq(offsetY,heightValue);
							HX_STACK_LINE(829)
							int tmp21 = this->layoutGroups->length;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(829)
							int tmp22 = (tmp21 - (int)1);		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(829)
							int i = tmp22;		HX_STACK_VAR(i,"i");
							HX_STACK_LINE(830)
							int offsetCount = (int)0;		HX_STACK_VAR(offsetCount,"offsetCount");
							HX_STACK_LINE(832)
							while((true)){
								HX_STACK_LINE(834)
								::openfl::_internal::text::TextLayoutGroup tmp23 = this->layoutGroups->__get(i).StaticCast< ::openfl::_internal::text::TextLayoutGroup >();		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(834)
								layoutGroup = tmp23;
								HX_STACK_LINE(836)
								bool tmp24 = (i > (int)0);		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(836)
								bool tmp25;		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(836)
								if ((tmp24)){
									HX_STACK_LINE(836)
									tmp25 = (layoutGroup->startIndex > previousSpaceIndex);
								}
								else{
									HX_STACK_LINE(836)
									tmp25 = false;
								}
								HX_STACK_LINE(836)
								if ((tmp25)){
									HX_STACK_LINE(838)
									(offsetCount)++;
								}
								else{
									HX_STACK_LINE(842)
									break;
								}
								HX_STACK_LINE(846)
								(i)--;
							}
							HX_STACK_LINE(850)
							(lineIndex)++;
							HX_STACK_LINE(852)
							offsetX = (int)2;
							HX_STACK_LINE(854)
							bool tmp23 = (offsetCount > (int)0);		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(854)
							if ((tmp23)){
								HX_STACK_LINE(856)
								int tmp24 = this->layoutGroups->length;		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(856)
								int tmp25 = offsetCount;		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(856)
								int tmp26 = (tmp24 - tmp25);		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(856)
								::openfl::_internal::text::TextLayoutGroup tmp27 = this->layoutGroups->__get(tmp26).StaticCast< ::openfl::_internal::text::TextLayoutGroup >();		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(856)
								Float bumpX = tmp27->offsetX;		HX_STACK_VAR(bumpX,"bumpX");
								HX_STACK_LINE(858)
								{
									HX_STACK_LINE(858)
									int tmp28 = this->layoutGroups->length;		HX_STACK_VAR(tmp28,"tmp28");
									HX_STACK_LINE(858)
									int tmp29 = offsetCount;		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(858)
									int tmp30 = (tmp28 - tmp29);		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(858)
									int _g1 = tmp30;		HX_STACK_VAR(_g1,"_g1");
									HX_STACK_LINE(858)
									int tmp31 = this->layoutGroups->length;		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(858)
									int _g2 = tmp31;		HX_STACK_VAR(_g2,"_g2");
									HX_STACK_LINE(858)
									while((true)){
										HX_STACK_LINE(858)
										bool tmp32 = (_g1 < _g2);		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(858)
										bool tmp33 = !(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(858)
										if ((tmp33)){
											HX_STACK_LINE(858)
											break;
										}
										HX_STACK_LINE(858)
										int tmp34 = (_g1)++;		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(858)
										int i1 = tmp34;		HX_STACK_VAR(i1,"i1");
										HX_STACK_LINE(860)
										::openfl::_internal::text::TextLayoutGroup tmp35 = this->layoutGroups->__get(i1).StaticCast< ::openfl::_internal::text::TextLayoutGroup >();		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(860)
										layoutGroup = tmp35;
										HX_STACK_LINE(861)
										hx::SubEq(layoutGroup->offsetX,bumpX);
										HX_STACK_LINE(862)
										layoutGroup->offsetY = offsetY;
										HX_STACK_LINE(863)
										layoutGroup->lineIndex = lineIndex;
										HX_STACK_LINE(864)
										hx::AddEq(offsetX,layoutGroup->width);
									}
								}
							}
							HX_STACK_LINE(870)
							::openfl::_internal::text::TextLayoutGroup tmp24 = ::openfl::_internal::text::TextLayoutGroup_obj::__new(formatRange->format,textIndex,spaceIndex);		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(870)
							layoutGroup = tmp24;
							HX_STACK_LINE(871)
							layoutGroup->advances = advances;
							HX_STACK_LINE(872)
							layoutGroup->offsetX = offsetX;
							HX_STACK_LINE(873)
							layoutGroup->ascent = ascent;
							HX_STACK_LINE(874)
							layoutGroup->descent = descent;
							HX_STACK_LINE(875)
							layoutGroup->leading = leading;
							HX_STACK_LINE(876)
							layoutGroup->lineIndex = lineIndex;
							HX_STACK_LINE(877)
							layoutGroup->offsetY = offsetY;
							HX_STACK_LINE(878)
							layoutGroup->width = widthValue;
							HX_STACK_LINE(879)
							layoutGroup->height = heightValue;
							HX_STACK_LINE(880)
							::openfl::_internal::text::TextLayoutGroup tmp25 = layoutGroup;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(880)
							this->layoutGroups->push(tmp25);
							HX_STACK_LINE(882)
							Float tmp26 = (widthValue + spaceWidth);		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(882)
							offsetX = tmp26;
							HX_STACK_LINE(883)
							marginRight = spaceWidth;
							HX_STACK_LINE(885)
							wrap = false;
						}
						else{
							HX_STACK_LINE(889)
							bool tmp21 = (layoutGroup != null());		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(889)
							bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(889)
							if ((tmp21)){
								HX_STACK_LINE(889)
								tmp22 = (textIndex == spaceIndex);
							}
							else{
								HX_STACK_LINE(889)
								tmp22 = false;
							}
							HX_STACK_LINE(889)
							if ((tmp22)){
								HX_STACK_LINE(891)
								Dynamic tmp23 = formatRange->format->align;		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(891)
								bool tmp24 = (tmp23 != ((Dynamic)((int)2)));		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(891)
								if ((tmp24)){
									HX_STACK_LINE(893)
									layoutGroup->endIndex = spaceIndex;
								}
								HX_STACK_LINE(897)
								Float tmp25 = spaceWidth;		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(897)
								layoutGroup->advances->push(tmp25);
								HX_STACK_LINE(898)
								hx::AddEq(marginRight,spaceWidth);
							}
							else{
								HX_STACK_LINE(900)
								bool tmp23 = (layoutGroup == null());		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(900)
								bool tmp24 = !(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(900)
								bool tmp25;		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(900)
								if ((tmp24)){
									HX_STACK_LINE(900)
									tmp25 = (lineFormat->align == ((Dynamic)((int)2)));
								}
								else{
									HX_STACK_LINE(900)
									tmp25 = true;
								}
								HX_STACK_LINE(900)
								if ((tmp25)){
									HX_STACK_LINE(902)
									::openfl::_internal::text::TextLayoutGroup tmp26 = ::openfl::_internal::text::TextLayoutGroup_obj::__new(formatRange->format,textIndex,spaceIndex);		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(902)
									layoutGroup = tmp26;
									HX_STACK_LINE(903)
									layoutGroup->advances = advances;
									HX_STACK_LINE(904)
									layoutGroup->offsetX = offsetX;
									HX_STACK_LINE(905)
									layoutGroup->ascent = ascent;
									HX_STACK_LINE(906)
									layoutGroup->descent = descent;
									HX_STACK_LINE(907)
									layoutGroup->leading = leading;
									HX_STACK_LINE(908)
									layoutGroup->lineIndex = lineIndex;
									HX_STACK_LINE(909)
									layoutGroup->offsetY = offsetY;
									HX_STACK_LINE(910)
									layoutGroup->width = widthValue;
									HX_STACK_LINE(911)
									layoutGroup->height = heightValue;
									HX_STACK_LINE(912)
									::openfl::_internal::text::TextLayoutGroup tmp27 = layoutGroup;		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(912)
									this->layoutGroups->push(tmp27);
									HX_STACK_LINE(914)
									Float tmp28 = spaceWidth;		HX_STACK_VAR(tmp28,"tmp28");
									HX_STACK_LINE(914)
									layoutGroup->advances->push(tmp28);
									HX_STACK_LINE(915)
									marginRight = spaceWidth;
								}
								else{
									HX_STACK_LINE(919)
									layoutGroup->endIndex = spaceIndex;
									HX_STACK_LINE(920)
									layoutGroup->advances = layoutGroup->advances->concat(advances);
									HX_STACK_LINE(921)
									Float tmp26 = (marginRight + widthValue);		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(921)
									hx::AddEq(layoutGroup->width,tmp26);
									HX_STACK_LINE(923)
									Float tmp27 = spaceWidth;		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(923)
									layoutGroup->advances->push(tmp27);
									HX_STACK_LINE(924)
									marginRight = spaceWidth;
								}
							}
							HX_STACK_LINE(928)
							Float tmp23 = (widthValue + spaceWidth);		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(928)
							hx::AddEq(offsetX,tmp23);
						}
						HX_STACK_LINE(932)
						int tmp21 = (spaceIndex + (int)1);		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(932)
						textIndex = tmp21;
						HX_STACK_LINE(934)
						previousSpaceIndex = spaceIndex;
						HX_STACK_LINE(935)
						::String tmp22 = this->text;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(935)
						int tmp23 = (previousSpaceIndex + (int)1);		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(935)
						int tmp24 = tmp22.indexOf(HX_HCSTRING(" ","\x20","\x00","\x00","\x00"),tmp23);		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(935)
						spaceIndex = tmp24;
						HX_STACK_LINE(937)
						bool tmp25 = (formatRange->end <= previousSpaceIndex);		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(937)
						if ((tmp25)){
							HX_STACK_LINE(939)
							layoutGroup = null();
							HX_STACK_LINE(940)
							{
								HX_STACK_LINE(940)
								int tmp26 = rangeIndex;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(940)
								int tmp27 = _g->textFormatRanges->length;		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(940)
								int tmp28 = (tmp27 - (int)1);		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(940)
								bool tmp29 = (tmp26 < tmp28);		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(940)
								if ((tmp29)){
									HX_STACK_LINE(940)
									(rangeIndex)++;
									HX_STACK_LINE(940)
									::openfl::_internal::text::TextFormatRange tmp30 = _g->textFormatRanges->__get(rangeIndex).StaticCast< ::openfl::_internal::text::TextFormatRange >();		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(940)
									formatRange = tmp30;
									HX_STACK_LINE(940)
									::openfl::text::TextFormat tmp31 = formatRange->format;		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(940)
									currentFormat->__merge(tmp31);
									HX_STACK_LINE(940)
									::openfl::text::TextFormat tmp32 = currentFormat;		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(940)
									::openfl::text::Font tmp33 = ::openfl::_internal::text::TextEngine_obj::getFontInstance(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
									HX_STACK_LINE(940)
									font = tmp33;
									HX_STACK_LINE(940)
									bool tmp34 = (font != null());		HX_STACK_VAR(tmp34,"tmp34");
									HX_STACK_LINE(940)
									if ((tmp34)){
										HX_STACK_LINE(940)
										int tmp35 = font->get_ascender();		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(940)
										int tmp36 = font->get_unitsPerEM();		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(940)
										Float tmp37 = (Float(tmp35) / Float(tmp36));		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(940)
										Dynamic tmp38 = currentFormat->size;		HX_STACK_VAR(tmp38,"tmp38");
										HX_STACK_LINE(940)
										Float tmp39 = (tmp37 * tmp38);		HX_STACK_VAR(tmp39,"tmp39");
										HX_STACK_LINE(940)
										ascent = tmp39;
										HX_STACK_LINE(940)
										int tmp40 = font->get_descender();		HX_STACK_VAR(tmp40,"tmp40");
										HX_STACK_LINE(940)
										int tmp41 = font->get_unitsPerEM();		HX_STACK_VAR(tmp41,"tmp41");
										HX_STACK_LINE(940)
										Float tmp42 = (Float(tmp40) / Float(tmp41));		HX_STACK_VAR(tmp42,"tmp42");
										HX_STACK_LINE(940)
										Dynamic tmp43 = currentFormat->size;		HX_STACK_VAR(tmp43,"tmp43");
										HX_STACK_LINE(940)
										Float tmp44 = (tmp42 * tmp43);		HX_STACK_VAR(tmp44,"tmp44");
										HX_STACK_LINE(940)
										Float tmp45 = ::Math_obj::abs(tmp44);		HX_STACK_VAR(tmp45,"tmp45");
										HX_STACK_LINE(940)
										descent = tmp45;
										HX_STACK_LINE(940)
										leading = currentFormat->leading;
										HX_STACK_LINE(940)
										Float tmp46 = (ascent + descent);		HX_STACK_VAR(tmp46,"tmp46");
										HX_STACK_LINE(940)
										int tmp47 = leading;		HX_STACK_VAR(tmp47,"tmp47");
										HX_STACK_LINE(940)
										Float tmp48 = (tmp46 + tmp47);		HX_STACK_VAR(tmp48,"tmp48");
										HX_STACK_LINE(940)
										heightValue = tmp48;
									}
									else{
										HX_STACK_LINE(940)
										ascent = currentFormat->size;
										HX_STACK_LINE(940)
										Float tmp35 = (currentFormat->size * ((Float)0.185));		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(940)
										descent = tmp35;
										HX_STACK_LINE(940)
										leading = currentFormat->leading;
										HX_STACK_LINE(940)
										Float tmp36 = (ascent + descent);		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(940)
										int tmp37 = leading;		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(940)
										Float tmp38 = (tmp36 + tmp37);		HX_STACK_VAR(tmp38,"tmp38");
										HX_STACK_LINE(940)
										heightValue = tmp38;
									}
									HX_STACK_LINE(940)
									bool tmp35 = (spaceIndex > (int)-1);		HX_STACK_VAR(tmp35,"tmp35");
									HX_STACK_LINE(940)
									if ((tmp35)){
										HX_STACK_LINE(940)
										Float tmp36;		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(940)
										{
											HX_STACK_LINE(940)
											bool tmp37 = (_g->__textLayout == null());		HX_STACK_VAR(tmp37,"tmp37");
											HX_STACK_LINE(940)
											if ((tmp37)){
												HX_STACK_LINE(940)
												::lime::text::TextLayout tmp38 = ::lime::text::TextLayout_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp38,"tmp38");
												HX_STACK_LINE(940)
												_g->__textLayout = tmp38;
											}
											HX_STACK_LINE(940)
											Float width = ((Float)0.0);		HX_STACK_VAR(width,"width");
											HX_STACK_LINE(940)
											_g->__textLayout->set_text(null());
											HX_STACK_LINE(940)
											::lime::text::Font tmp38 = font;		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(940)
											_g->__textLayout->set_font(tmp38);
											HX_STACK_LINE(940)
											Dynamic tmp39 = formatRange->format->size;		HX_STACK_VAR(tmp39,"tmp39");
											HX_STACK_LINE(940)
											bool tmp40 = (tmp39 != null());		HX_STACK_VAR(tmp40,"tmp40");
											HX_STACK_LINE(940)
											if ((tmp40)){
												HX_STACK_LINE(940)
												Dynamic tmp41 = formatRange->format->size;		HX_STACK_VAR(tmp41,"tmp41");
												HX_STACK_LINE(940)
												_g->__textLayout->set_size(tmp41);
											}
											HX_STACK_LINE(940)
											_g->__textLayout->set_text(HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));
											HX_STACK_LINE(940)
											{
												HX_STACK_LINE(940)
												int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
												HX_STACK_LINE(940)
												Array< ::Dynamic > _g2 = _g->__textLayout->get_positions();		HX_STACK_VAR(_g2,"_g2");
												HX_STACK_LINE(940)
												while((true)){
													HX_STACK_LINE(940)
													bool tmp41 = (_g1 < _g2->length);		HX_STACK_VAR(tmp41,"tmp41");
													HX_STACK_LINE(940)
													bool tmp42 = !(tmp41);		HX_STACK_VAR(tmp42,"tmp42");
													HX_STACK_LINE(940)
													if ((tmp42)){
														HX_STACK_LINE(940)
														break;
													}
													HX_STACK_LINE(940)
													::lime::text::GlyphPosition tmp43 = _g2->__get(_g1).StaticCast< ::lime::text::GlyphPosition >();		HX_STACK_VAR(tmp43,"tmp43");
													HX_STACK_LINE(940)
													::lime::text::GlyphPosition position = tmp43;		HX_STACK_VAR(position,"position");
													HX_STACK_LINE(940)
													++(_g1);
													HX_STACK_LINE(940)
													Float tmp44 = position->advance->x;		HX_STACK_VAR(tmp44,"tmp44");
													HX_STACK_LINE(940)
													hx::AddEq(width,tmp44);
												}
											}
											HX_STACK_LINE(940)
											tmp36 = width;
										}
										HX_STACK_LINE(940)
										spaceWidth = tmp36;
									}
								}
							}
						}
						HX_STACK_LINE(944)
						bool tmp26 = (spaceIndex > breakIndex);		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(944)
						bool tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(944)
						bool tmp28;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(944)
						if ((tmp27)){
							HX_STACK_LINE(944)
							tmp28 = (breakIndex > (int)-1);
						}
						else{
							HX_STACK_LINE(944)
							tmp28 = false;
						}
						HX_STACK_LINE(944)
						bool tmp29 = !(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(944)
						bool tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(944)
						bool tmp31;		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(944)
						if ((tmp30)){
							HX_STACK_LINE(944)
							int tmp32 = textIndex;		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(944)
							::String tmp33 = this->text;		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(944)
							::String tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(944)
							::String tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(944)
							int tmp36 = tmp35.length;		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(944)
							tmp31 = (tmp32 > tmp36);
						}
						else{
							HX_STACK_LINE(944)
							tmp31 = true;
						}
						HX_STACK_LINE(944)
						bool tmp32 = !(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(944)
						bool tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(944)
						bool tmp34;		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(944)
						if ((tmp33)){
							HX_STACK_LINE(944)
							tmp34 = (spaceIndex > formatRange->end);
						}
						else{
							HX_STACK_LINE(944)
							tmp34 = true;
						}
						HX_STACK_LINE(944)
						bool tmp35 = !(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(944)
						bool tmp36;		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(944)
						if ((tmp35)){
							HX_STACK_LINE(944)
							int tmp37 = spaceIndex;		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(944)
							int tmp38 = (int)-1;		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(944)
							int tmp39 = tmp38;		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(944)
							bool tmp40 = (tmp37 == tmp39);		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(944)
							bool tmp41 = tmp40;		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(944)
							bool tmp42 = tmp41;		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(944)
							if ((tmp42)){
								HX_STACK_LINE(944)
								tmp36 = (breakIndex > (int)-1);
							}
							else{
								HX_STACK_LINE(944)
								tmp36 = false;
							}
						}
						else{
							HX_STACK_LINE(944)
							tmp36 = true;
						}
						HX_STACK_LINE(944)
						if ((tmp36)){
							HX_STACK_LINE(946)
							bool tmp37 = (spaceIndex > formatRange->end);		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(946)
							if ((tmp37)){
								HX_STACK_LINE(948)
								(textIndex)--;
							}
							HX_STACK_LINE(952)
							break;
						}
					}
				}
				else{
					HX_STACK_LINE(960)
					bool tmp17 = (textIndex > formatRange->end);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(960)
					if ((tmp17)){
						HX_STACK_LINE(962)
						break;
					}
					HX_STACK_LINE(966)
					bool tmp18 = (textIndex < formatRange->end);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(966)
					if ((tmp18)){
						HX_STACK_LINE(968)
						::openfl::_internal::text::TextLayoutGroup tmp19 = ::openfl::_internal::text::TextLayoutGroup_obj::__new(formatRange->format,textIndex,formatRange->end);		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(968)
						layoutGroup = tmp19;
						HX_STACK_LINE(969)
						{
							HX_STACK_LINE(969)
							Array< Float > advances1 = Array_obj< Float >::__new();		HX_STACK_VAR(advances1,"advances1");
							HX_STACK_LINE(969)
							bool tmp20 = (_g->__textLayout == null());		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(969)
							if ((tmp20)){
								HX_STACK_LINE(969)
								::lime::text::TextLayout tmp21 = ::lime::text::TextLayout_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(969)
								_g->__textLayout = tmp21;
							}
							HX_STACK_LINE(969)
							Float width = ((Float)0.0);		HX_STACK_VAR(width,"width");
							HX_STACK_LINE(969)
							_g->__textLayout->set_text(null());
							HX_STACK_LINE(969)
							::lime::text::Font tmp21 = font;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(969)
							_g->__textLayout->set_font(tmp21);
							HX_STACK_LINE(969)
							Dynamic tmp22 = formatRange->format->size;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(969)
							bool tmp23 = (tmp22 != null());		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(969)
							if ((tmp23)){
								HX_STACK_LINE(969)
								Dynamic tmp24 = formatRange->format->size;		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(969)
								_g->__textLayout->set_size(tmp24);
							}
							HX_STACK_LINE(969)
							::String tmp24 = this->text;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(969)
							int tmp25 = textIndex;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(969)
							int tmp26 = formatRange->end;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(969)
							::String tmp27 = tmp24.substring(tmp25,tmp26);		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(969)
							_g->__textLayout->set_text(tmp27);
							HX_STACK_LINE(969)
							{
								HX_STACK_LINE(969)
								int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
								HX_STACK_LINE(969)
								Array< ::Dynamic > _g2 = _g->__textLayout->get_positions();		HX_STACK_VAR(_g2,"_g2");
								HX_STACK_LINE(969)
								while((true)){
									HX_STACK_LINE(969)
									bool tmp28 = (_g1 < _g2->length);		HX_STACK_VAR(tmp28,"tmp28");
									HX_STACK_LINE(969)
									bool tmp29 = !(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(969)
									if ((tmp29)){
										HX_STACK_LINE(969)
										break;
									}
									HX_STACK_LINE(969)
									::lime::text::GlyphPosition tmp30 = _g2->__get(_g1).StaticCast< ::lime::text::GlyphPosition >();		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(969)
									::lime::text::GlyphPosition position = tmp30;		HX_STACK_VAR(position,"position");
									HX_STACK_LINE(969)
									++(_g1);
									HX_STACK_LINE(969)
									Float tmp31 = position->advance->x;		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(969)
									advances1->push(tmp31);
								}
							}
							HX_STACK_LINE(969)
							layoutGroup->advances = advances1;
						}
						HX_STACK_LINE(970)
						layoutGroup->offsetX = offsetX;
						HX_STACK_LINE(971)
						layoutGroup->ascent = ascent;
						HX_STACK_LINE(972)
						layoutGroup->descent = descent;
						HX_STACK_LINE(973)
						layoutGroup->leading = leading;
						HX_STACK_LINE(974)
						layoutGroup->lineIndex = lineIndex;
						HX_STACK_LINE(975)
						layoutGroup->offsetY = offsetY;
						HX_STACK_LINE(976)
						Float tmp20;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(976)
						{
							HX_STACK_LINE(976)
							Array< Float > advances1 = layoutGroup->advances;		HX_STACK_VAR(advances1,"advances1");
							HX_STACK_LINE(976)
							Float width = ((Float)0.0);		HX_STACK_VAR(width,"width");
							HX_STACK_LINE(976)
							{
								HX_STACK_LINE(976)
								int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
								HX_STACK_LINE(976)
								while((true)){
									HX_STACK_LINE(976)
									bool tmp21 = (_g1 < advances1->length);		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(976)
									bool tmp22 = !(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(976)
									if ((tmp22)){
										HX_STACK_LINE(976)
										break;
									}
									HX_STACK_LINE(976)
									Float tmp23 = advances1->__get(_g1);		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(976)
									Float advance = tmp23;		HX_STACK_VAR(advance,"advance");
									HX_STACK_LINE(976)
									++(_g1);
									HX_STACK_LINE(976)
									hx::AddEq(width,advance);
								}
							}
							HX_STACK_LINE(976)
							tmp20 = width;
						}
						HX_STACK_LINE(976)
						layoutGroup->width = tmp20;
						HX_STACK_LINE(977)
						layoutGroup->height = heightValue;
						HX_STACK_LINE(978)
						::openfl::_internal::text::TextLayoutGroup tmp21 = layoutGroup;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(978)
						this->layoutGroups->push(tmp21);
						HX_STACK_LINE(980)
						hx::AddEq(offsetX,layoutGroup->width);
						HX_STACK_LINE(982)
						textIndex = formatRange->end;
					}
					HX_STACK_LINE(986)
					{
						HX_STACK_LINE(986)
						int tmp19 = rangeIndex;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(986)
						int tmp20 = _g->textFormatRanges->length;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(986)
						int tmp21 = (tmp20 - (int)1);		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(986)
						bool tmp22 = (tmp19 < tmp21);		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(986)
						if ((tmp22)){
							HX_STACK_LINE(986)
							(rangeIndex)++;
							HX_STACK_LINE(986)
							::openfl::_internal::text::TextFormatRange tmp23 = _g->textFormatRanges->__get(rangeIndex).StaticCast< ::openfl::_internal::text::TextFormatRange >();		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(986)
							formatRange = tmp23;
							HX_STACK_LINE(986)
							::openfl::text::TextFormat tmp24 = formatRange->format;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(986)
							currentFormat->__merge(tmp24);
							HX_STACK_LINE(986)
							::openfl::text::TextFormat tmp25 = currentFormat;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(986)
							::openfl::text::Font tmp26 = ::openfl::_internal::text::TextEngine_obj::getFontInstance(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(986)
							font = tmp26;
							HX_STACK_LINE(986)
							bool tmp27 = (font != null());		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(986)
							if ((tmp27)){
								HX_STACK_LINE(986)
								int tmp28 = font->get_ascender();		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(986)
								int tmp29 = font->get_unitsPerEM();		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(986)
								Float tmp30 = (Float(tmp28) / Float(tmp29));		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(986)
								Dynamic tmp31 = currentFormat->size;		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(986)
								Float tmp32 = (tmp30 * tmp31);		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(986)
								ascent = tmp32;
								HX_STACK_LINE(986)
								int tmp33 = font->get_descender();		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(986)
								int tmp34 = font->get_unitsPerEM();		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(986)
								Float tmp35 = (Float(tmp33) / Float(tmp34));		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(986)
								Dynamic tmp36 = currentFormat->size;		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(986)
								Float tmp37 = (tmp35 * tmp36);		HX_STACK_VAR(tmp37,"tmp37");
								HX_STACK_LINE(986)
								Float tmp38 = ::Math_obj::abs(tmp37);		HX_STACK_VAR(tmp38,"tmp38");
								HX_STACK_LINE(986)
								descent = tmp38;
								HX_STACK_LINE(986)
								leading = currentFormat->leading;
								HX_STACK_LINE(986)
								Float tmp39 = (ascent + descent);		HX_STACK_VAR(tmp39,"tmp39");
								HX_STACK_LINE(986)
								int tmp40 = leading;		HX_STACK_VAR(tmp40,"tmp40");
								HX_STACK_LINE(986)
								Float tmp41 = (tmp39 + tmp40);		HX_STACK_VAR(tmp41,"tmp41");
								HX_STACK_LINE(986)
								heightValue = tmp41;
							}
							else{
								HX_STACK_LINE(986)
								ascent = currentFormat->size;
								HX_STACK_LINE(986)
								Float tmp28 = (currentFormat->size * ((Float)0.185));		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(986)
								descent = tmp28;
								HX_STACK_LINE(986)
								leading = currentFormat->leading;
								HX_STACK_LINE(986)
								Float tmp29 = (ascent + descent);		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(986)
								int tmp30 = leading;		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(986)
								Float tmp31 = (tmp29 + tmp30);		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(986)
								heightValue = tmp31;
							}
							HX_STACK_LINE(986)
							bool tmp28 = (spaceIndex > (int)-1);		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(986)
							if ((tmp28)){
								HX_STACK_LINE(986)
								Float tmp29;		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(986)
								{
									HX_STACK_LINE(986)
									bool tmp30 = (_g->__textLayout == null());		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(986)
									if ((tmp30)){
										HX_STACK_LINE(986)
										::lime::text::TextLayout tmp31 = ::lime::text::TextLayout_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp31,"tmp31");
										HX_STACK_LINE(986)
										_g->__textLayout = tmp31;
									}
									HX_STACK_LINE(986)
									Float width = ((Float)0.0);		HX_STACK_VAR(width,"width");
									HX_STACK_LINE(986)
									_g->__textLayout->set_text(null());
									HX_STACK_LINE(986)
									::lime::text::Font tmp31 = font;		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(986)
									_g->__textLayout->set_font(tmp31);
									HX_STACK_LINE(986)
									Dynamic tmp32 = formatRange->format->size;		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(986)
									bool tmp33 = (tmp32 != null());		HX_STACK_VAR(tmp33,"tmp33");
									HX_STACK_LINE(986)
									if ((tmp33)){
										HX_STACK_LINE(986)
										Dynamic tmp34 = formatRange->format->size;		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(986)
										_g->__textLayout->set_size(tmp34);
									}
									HX_STACK_LINE(986)
									_g->__textLayout->set_text(HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));
									HX_STACK_LINE(986)
									{
										HX_STACK_LINE(986)
										int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
										HX_STACK_LINE(986)
										Array< ::Dynamic > _g2 = _g->__textLayout->get_positions();		HX_STACK_VAR(_g2,"_g2");
										HX_STACK_LINE(986)
										while((true)){
											HX_STACK_LINE(986)
											bool tmp34 = (_g1 < _g2->length);		HX_STACK_VAR(tmp34,"tmp34");
											HX_STACK_LINE(986)
											bool tmp35 = !(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
											HX_STACK_LINE(986)
											if ((tmp35)){
												HX_STACK_LINE(986)
												break;
											}
											HX_STACK_LINE(986)
											::lime::text::GlyphPosition tmp36 = _g2->__get(_g1).StaticCast< ::lime::text::GlyphPosition >();		HX_STACK_VAR(tmp36,"tmp36");
											HX_STACK_LINE(986)
											::lime::text::GlyphPosition position = tmp36;		HX_STACK_VAR(position,"position");
											HX_STACK_LINE(986)
											++(_g1);
											HX_STACK_LINE(986)
											Float tmp37 = position->advance->x;		HX_STACK_VAR(tmp37,"tmp37");
											HX_STACK_LINE(986)
											hx::AddEq(width,tmp37);
										}
									}
									HX_STACK_LINE(986)
									tmp29 = width;
								}
								HX_STACK_LINE(986)
								spaceWidth = tmp29;
							}
						}
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TextEngine_obj,getLayoutGroups,(void))

Void TextEngine_obj::setTextAlignment( ){
{
		HX_STACK_FRAME("openfl._internal.text.TextEngine","setTextAlignment",0xb5caa542,"openfl._internal.text.TextEngine.setTextAlignment","openfl/_internal/text/TextEngine.hx",995,0xdff93b7f)
		HX_STACK_THIS(this)
		HX_STACK_LINE(997)
		int lineIndex = (int)-1;		HX_STACK_VAR(lineIndex,"lineIndex");
		HX_STACK_LINE(998)
		Float offsetX = ((Float)0.0);		HX_STACK_VAR(offsetX,"offsetX");
		HX_STACK_LINE(999)
		::openfl::_internal::text::TextLayoutGroup group;		HX_STACK_VAR(group,"group");
		HX_STACK_LINE(999)
		int lineLength;		HX_STACK_VAR(lineLength,"lineLength");
		HX_STACK_LINE(1001)
		{
			HX_STACK_LINE(1001)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(1001)
			int tmp = this->layoutGroups->length;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(1001)
			int _g = tmp;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1001)
			while((true)){
				HX_STACK_LINE(1001)
				bool tmp1 = (_g1 < _g);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(1001)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(1001)
				if ((tmp2)){
					HX_STACK_LINE(1001)
					break;
				}
				HX_STACK_LINE(1001)
				int tmp3 = (_g1)++;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(1001)
				int i = tmp3;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(1003)
				::openfl::_internal::text::TextLayoutGroup tmp4 = this->layoutGroups->__get(i).StaticCast< ::openfl::_internal::text::TextLayoutGroup >();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(1003)
				group = tmp4;
				HX_STACK_LINE(1005)
				bool tmp5 = (group->lineIndex != lineIndex);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1005)
				if ((tmp5)){
					HX_STACK_LINE(1007)
					lineIndex = group->lineIndex;
					HX_STACK_LINE(1009)
					{
						HX_STACK_LINE(1009)
						Dynamic tmp6 = group->format->align;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(1009)
						Dynamic _g2 = tmp6;		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(1009)
						Dynamic tmp7 = _g2;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(1009)
						switch( (int)(tmp7)){
							case (int)0: {
								HX_STACK_LINE(1013)
								Float tmp8 = this->lineWidths->__get(lineIndex);		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(1013)
								Float tmp9 = this->width;		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(1013)
								Float tmp10 = (tmp9 - (int)4);		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(1013)
								bool tmp11 = (tmp8 < tmp10);		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(1013)
								if ((tmp11)){
									HX_STACK_LINE(1015)
									Float tmp12 = this->width;		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(1015)
									Float tmp13 = (tmp12 - (int)4);		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(1015)
									Float tmp14 = this->lineWidths->__get(lineIndex);		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(1015)
									Float tmp15 = (tmp13 - tmp14);		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(1015)
									Float tmp16 = (Float(tmp15) / Float((int)2));		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(1015)
									int tmp17 = ::Math_obj::round(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(1015)
									offsetX = tmp17;
								}
								else{
									HX_STACK_LINE(1019)
									offsetX = (int)0;
								}
							}
							;break;
							case (int)4: {
								HX_STACK_LINE(1025)
								Float tmp8 = this->lineWidths->__get(lineIndex);		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(1025)
								Float tmp9 = this->width;		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(1025)
								Float tmp10 = (tmp9 - (int)4);		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(1025)
								bool tmp11 = (tmp8 < tmp10);		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(1025)
								if ((tmp11)){
									HX_STACK_LINE(1027)
									Float tmp12 = this->width;		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(1027)
									Float tmp13 = (tmp12 - (int)4);		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(1027)
									Float tmp14 = this->lineWidths->__get(lineIndex);		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(1027)
									Float tmp15 = (tmp13 - tmp14);		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(1027)
									int tmp16 = ::Math_obj::round(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(1027)
									offsetX = tmp16;
								}
								else{
									HX_STACK_LINE(1031)
									offsetX = (int)0;
								}
							}
							;break;
							case (int)2: {
								HX_STACK_LINE(1037)
								Float tmp8 = this->lineWidths->__get(lineIndex);		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(1037)
								Float tmp9 = this->width;		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(1037)
								Float tmp10 = (tmp9 - (int)4);		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(1037)
								bool tmp11 = (tmp8 < tmp10);		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(1037)
								if ((tmp11)){
									HX_STACK_LINE(1039)
									lineLength = (int)1;
									HX_STACK_LINE(1041)
									{
										HX_STACK_LINE(1041)
										int tmp12 = (i + (int)1);		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(1041)
										int _g4 = tmp12;		HX_STACK_VAR(_g4,"_g4");
										HX_STACK_LINE(1041)
										int tmp13 = this->layoutGroups->length;		HX_STACK_VAR(tmp13,"tmp13");
										HX_STACK_LINE(1041)
										int _g3 = tmp13;		HX_STACK_VAR(_g3,"_g3");
										HX_STACK_LINE(1041)
										while((true)){
											HX_STACK_LINE(1041)
											bool tmp14 = (_g4 < _g3);		HX_STACK_VAR(tmp14,"tmp14");
											HX_STACK_LINE(1041)
											bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
											HX_STACK_LINE(1041)
											if ((tmp15)){
												HX_STACK_LINE(1041)
												break;
											}
											HX_STACK_LINE(1041)
											int tmp16 = (_g4)++;		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(1041)
											int j = tmp16;		HX_STACK_VAR(j,"j");
											HX_STACK_LINE(1043)
											::openfl::_internal::text::TextLayoutGroup tmp17 = this->layoutGroups->__get(j).StaticCast< ::openfl::_internal::text::TextLayoutGroup >();		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(1043)
											int tmp18 = tmp17->lineIndex;		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(1043)
											int tmp19 = lineIndex;		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(1043)
											bool tmp20 = (tmp18 == tmp19);		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(1043)
											if ((tmp20)){
												HX_STACK_LINE(1045)
												(lineLength)++;
											}
											else{
												HX_STACK_LINE(1049)
												break;
											}
										}
									}
									HX_STACK_LINE(1055)
									bool tmp12 = (lineLength > (int)1);		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(1055)
									if ((tmp12)){
										HX_STACK_LINE(1057)
										int tmp13 = (i + lineLength);		HX_STACK_VAR(tmp13,"tmp13");
										HX_STACK_LINE(1057)
										int tmp14 = (tmp13 - (int)1);		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(1057)
										::openfl::_internal::text::TextLayoutGroup tmp15 = this->layoutGroups->__get(tmp14).StaticCast< ::openfl::_internal::text::TextLayoutGroup >();		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(1057)
										group = tmp15;
										HX_STACK_LINE(1059)
										::String tmp16 = this->text;		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(1059)
										int tmp17 = group->endIndex;		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(1059)
										::String tmp18 = tmp16.charAt(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(1059)
										::String endChar = tmp18;		HX_STACK_VAR(endChar,"endChar");
										HX_STACK_LINE(1060)
										int tmp19 = group->endIndex;		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(1060)
										::String tmp20 = this->text;		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(1060)
										int tmp21 = tmp20.length;		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(1060)
										bool tmp22 = (tmp19 < tmp21);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(1060)
										bool tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(1060)
										bool tmp24;		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(1060)
										if ((tmp23)){
											HX_STACK_LINE(1060)
											tmp24 = (endChar != HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));
										}
										else{
											HX_STACK_LINE(1060)
											tmp24 = false;
										}
										HX_STACK_LINE(1060)
										bool tmp25;		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(1060)
										if ((tmp24)){
											HX_STACK_LINE(1060)
											tmp25 = (endChar != HX_HCSTRING("\r","\x0d","\x00","\x00","\x00"));
										}
										else{
											HX_STACK_LINE(1060)
											tmp25 = false;
										}
										HX_STACK_LINE(1060)
										if ((tmp25)){
											HX_STACK_LINE(1062)
											Float tmp26 = this->width;		HX_STACK_VAR(tmp26,"tmp26");
											HX_STACK_LINE(1062)
											Float tmp27 = (tmp26 - (int)4);		HX_STACK_VAR(tmp27,"tmp27");
											HX_STACK_LINE(1062)
											Float tmp28 = this->lineWidths->__get(lineIndex);		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(1062)
											Float tmp29 = (tmp27 - tmp28);		HX_STACK_VAR(tmp29,"tmp29");
											HX_STACK_LINE(1062)
											int tmp30 = (lineLength - (int)1);		HX_STACK_VAR(tmp30,"tmp30");
											HX_STACK_LINE(1062)
											Float tmp31 = (Float(tmp29) / Float(tmp30));		HX_STACK_VAR(tmp31,"tmp31");
											HX_STACK_LINE(1062)
											offsetX = tmp31;
											HX_STACK_LINE(1064)
											{
												HX_STACK_LINE(1064)
												int _g3 = (int)1;		HX_STACK_VAR(_g3,"_g3");
												HX_STACK_LINE(1064)
												while((true)){
													HX_STACK_LINE(1064)
													bool tmp32 = (_g3 < lineLength);		HX_STACK_VAR(tmp32,"tmp32");
													HX_STACK_LINE(1064)
													bool tmp33 = !(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
													HX_STACK_LINE(1064)
													if ((tmp33)){
														HX_STACK_LINE(1064)
														break;
													}
													HX_STACK_LINE(1064)
													int tmp34 = (_g3)++;		HX_STACK_VAR(tmp34,"tmp34");
													HX_STACK_LINE(1064)
													int j = tmp34;		HX_STACK_VAR(j,"j");
													HX_STACK_LINE(1066)
													Float tmp35 = (offsetX * j);		HX_STACK_VAR(tmp35,"tmp35");
													HX_STACK_LINE(1066)
													int tmp36 = (i + j);		HX_STACK_VAR(tmp36,"tmp36");
													HX_STACK_LINE(1066)
													::openfl::_internal::text::TextLayoutGroup tmp37 = this->layoutGroups->__get(tmp36).StaticCast< ::openfl::_internal::text::TextLayoutGroup >();		HX_STACK_VAR(tmp37,"tmp37");
													HX_STACK_LINE(1066)
													hx::AddEq(tmp37->offsetX,tmp35);
												}
											}
										}
									}
								}
								HX_STACK_LINE(1076)
								offsetX = (int)0;
							}
							;break;
							default: {
								HX_STACK_LINE(1080)
								offsetX = (int)0;
							}
						}
					}
				}
				HX_STACK_LINE(1086)
				bool tmp6 = (offsetX > (int)0);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1086)
				if ((tmp6)){
					HX_STACK_LINE(1088)
					hx::AddEq(group->offsetX,offsetX);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TextEngine_obj,setTextAlignment,(void))

Void TextEngine_obj::update( ){
{
		HX_STACK_FRAME("openfl._internal.text.TextEngine","update",0x7da66e57,"openfl._internal.text.TextEngine.update","openfl/_internal/text/TextEngine.hx",1097,0xdff93b7f)
		HX_STACK_THIS(this)
		HX_STACK_LINE(1099)
		::String tmp = this->text;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1099)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1099)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1099)
		bool tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1099)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1099)
		if ((tmp3)){
			HX_STACK_LINE(1099)
			::String tmp5 = this->text;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1099)
			::String tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1099)
			::String tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1099)
			::String tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1099)
			::String tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1099)
			::String tmp10 = ::StringTools_obj::trim(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1099)
			::String tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(1099)
			::String tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1099)
			tmp4 = (tmp12 == HX_HCSTRING("","\x00","\x00","\x00","\x00"));
		}
		else{
			HX_STACK_LINE(1099)
			tmp4 = true;
		}
		HX_STACK_LINE(1099)
		bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1099)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1099)
		if ((tmp5)){
			HX_STACK_LINE(1099)
			int tmp7 = this->textFormatRanges->length;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1099)
			int tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1099)
			tmp6 = (tmp8 == (int)0);
		}
		else{
			HX_STACK_LINE(1099)
			tmp6 = true;
		}
		HX_STACK_LINE(1099)
		if ((tmp6)){
			HX_STACK_LINE(1101)
			int tmp7 = this->lineAscents->length;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1101)
			this->lineAscents->splice((int)0,tmp7);
			HX_STACK_LINE(1102)
			int tmp8 = this->lineBreaks->length;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1102)
			this->lineBreaks->splice((int)0,tmp8);
			HX_STACK_LINE(1103)
			int tmp9 = this->lineDescents->length;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1103)
			this->lineDescents->splice((int)0,tmp9);
			HX_STACK_LINE(1104)
			int tmp10 = this->lineLeadings->length;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1104)
			this->lineLeadings->splice((int)0,tmp10);
			HX_STACK_LINE(1105)
			int tmp11 = this->lineHeights->length;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(1105)
			this->lineHeights->splice((int)0,tmp11);
			HX_STACK_LINE(1106)
			int tmp12 = this->lineWidths->length;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1106)
			this->lineWidths->splice((int)0,tmp12);
			HX_STACK_LINE(1107)
			int tmp13 = this->layoutGroups->length;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(1107)
			this->layoutGroups->splice((int)0,tmp13);
			HX_STACK_LINE(1109)
			this->textWidth = (int)0;
			HX_STACK_LINE(1110)
			this->textHeight = (int)0;
			HX_STACK_LINE(1111)
			this->numLines = (int)1;
			HX_STACK_LINE(1112)
			this->maxScrollH = (int)0;
			HX_STACK_LINE(1113)
			this->maxScrollV = (int)1;
			HX_STACK_LINE(1114)
			this->bottomScrollV = (int)1;
		}
		else{
			HX_STACK_LINE(1118)
			this->getLayoutGroups();
			HX_STACK_LINE(1119)
			this->getLineMeasurements();
			HX_STACK_LINE(1120)
			this->setTextAlignment();
		}
		HX_STACK_LINE(1124)
		this->getBounds();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TextEngine_obj,update,(void))

int TextEngine_obj::UTF8_TAB;

int TextEngine_obj::UTF8_ENDLINE;

int TextEngine_obj::UTF8_SPACE;

int TextEngine_obj::UTF8_HYPHEN;

::haxe::ds::StringMap TextEngine_obj::__defaultFonts;

::openfl::text::Font TextEngine_obj::findFont( ::String name){
	HX_STACK_FRAME("openfl._internal.text.TextEngine","findFont",0x253a8276,"openfl._internal.text.TextEngine.findFont","openfl/_internal/text/TextEngine.hx",164,0xdff93b7f)
	HX_STACK_ARG(name,"name")
	HX_STACK_LINE(168)
	{
		HX_STACK_LINE(168)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(168)
		Array< ::Dynamic > _g1 = ::openfl::text::Font_obj::__registeredFonts;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(168)
		while((true)){
			HX_STACK_LINE(168)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(168)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(168)
			if ((tmp1)){
				HX_STACK_LINE(168)
				break;
			}
			HX_STACK_LINE(168)
			::openfl::text::Font tmp2 = _g1->__get(_g).StaticCast< ::openfl::text::Font >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(168)
			::openfl::text::Font registeredFont = tmp2;		HX_STACK_VAR(registeredFont,"registeredFont");
			HX_STACK_LINE(168)
			++(_g);
			HX_STACK_LINE(170)
			bool tmp3 = (registeredFont == null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(170)
			if ((tmp3)){
				HX_STACK_LINE(170)
				continue;
			}
			HX_STACK_LINE(172)
			bool tmp4 = (registeredFont->name == name);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(172)
			bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(172)
			bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(172)
			if ((tmp5)){
				HX_STACK_LINE(172)
				bool tmp7 = (registeredFont->__fontPath != null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(172)
				bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(172)
				bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(172)
				if ((tmp9)){
					HX_STACK_LINE(172)
					bool tmp10 = (registeredFont->__fontPath == name);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(172)
					bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(172)
					bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(172)
					bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(172)
					bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(172)
					bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(172)
					bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(172)
					bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(172)
					bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(172)
					bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(172)
					if ((tmp19)){
						HX_STACK_LINE(172)
						tmp6 = (registeredFont->__fontPathWithoutDirectory == name);
					}
					else{
						HX_STACK_LINE(172)
						tmp6 = true;
					}
				}
				else{
					HX_STACK_LINE(172)
					tmp6 = false;
				}
			}
			else{
				HX_STACK_LINE(172)
				tmp6 = true;
			}
			HX_STACK_LINE(172)
			if ((tmp6)){
				HX_STACK_LINE(174)
				::openfl::text::Font tmp7 = registeredFont;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(174)
				return tmp7;
			}
		}
	}
	HX_STACK_LINE(180)
	::String tmp = name;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(180)
	::openfl::text::Font tmp1 = ::openfl::text::Font_obj::fromFile(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(180)
	::openfl::text::Font font = tmp1;		HX_STACK_VAR(font,"font");
	HX_STACK_LINE(182)
	bool tmp2 = (font != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(182)
	if ((tmp2)){
		HX_STACK_LINE(184)
		::openfl::text::Font tmp3 = font;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(184)
		::openfl::text::Font_obj::__registeredFonts->push(tmp3);
		HX_STACK_LINE(185)
		::openfl::text::Font tmp4 = font;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(185)
		return tmp4;
	}
	HX_STACK_LINE(191)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(TextEngine_obj,findFont,return )

::String TextEngine_obj::getFont( ::openfl::text::TextFormat format){
	HX_STACK_FRAME("openfl._internal.text.TextEngine","getFont",0xec6d6977,"openfl._internal.text.TextEngine.getFont","openfl/_internal/text/TextEngine.hx",206,0xdff93b7f)
	HX_STACK_ARG(format,"format")
	HX_STACK_LINE(208)
	Dynamic tmp = format->italic;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(208)
	::String tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(208)
	if ((tmp)){
		HX_STACK_LINE(208)
		tmp1 = HX_HCSTRING("italic ","\x30","\xe3","\x44","\x91");
	}
	else{
		HX_STACK_LINE(208)
		tmp1 = HX_HCSTRING("normal ","\x19","\x70","\xda","\x2b");
	}
	HX_STACK_LINE(208)
	::String font = tmp1;		HX_STACK_VAR(font,"font");
	HX_STACK_LINE(209)
	hx::AddEq(font,HX_HCSTRING("normal ","\x19","\x70","\xda","\x2b"));
	HX_STACK_LINE(210)
	Dynamic tmp2 = format->bold;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(210)
	::String tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(210)
	if ((tmp2)){
		HX_STACK_LINE(210)
		tmp3 = HX_HCSTRING("bold ","\xfb","\xd2","\xf5","\xb6");
	}
	else{
		HX_STACK_LINE(210)
		tmp3 = HX_HCSTRING("normal ","\x19","\x70","\xda","\x2b");
	}
	HX_STACK_LINE(210)
	hx::AddEq(font,tmp3);
	HX_STACK_LINE(211)
	::String tmp4 = (format->size + HX_HCSTRING("px","\x08","\x62","\x00","\x00"));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(211)
	hx::AddEq(font,tmp4);
	HX_STACK_LINE(212)
	int tmp5 = (format->size + format->leading);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(212)
	int tmp6 = (tmp5 + (int)6);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(212)
	::String tmp7 = (HX_HCSTRING("/","\x2f","\x00","\x00","\x00") + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(212)
	::String tmp8 = (tmp7 + HX_HCSTRING("px ","\x18","\x65","\x55","\x00"));		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(212)
	hx::AddEq(font,tmp8);
	HX_STACK_LINE(214)
	::String tmp9;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(214)
	{
		HX_STACK_LINE(214)
		::String _g = format->font;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(214)
		::String tmp10 = _g;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(214)
		::String _switch_1 = (tmp10);
		if (  ( _switch_1==HX_HCSTRING("_sans","\x32","\xa0","\x5e","\xff"))){
			HX_STACK_LINE(216)
			tmp9 = HX_HCSTRING("sans-serif","\xc3","\x60","\xfb","\x08");
		}
		else if (  ( _switch_1==HX_HCSTRING("_serif","\xbe","\x66","\x15","\x76"))){
			HX_STACK_LINE(217)
			tmp9 = HX_HCSTRING("serif","\x7d","\x1f","\x2e","\x7a");
		}
		else if (  ( _switch_1==HX_HCSTRING("_typewriter","\x0c","\x5e","\x52","\x94"))){
			HX_STACK_LINE(218)
			tmp9 = HX_HCSTRING("monospace","\xc3","\xd1","\xe5","\x5e");
		}
		else  {
			HX_STACK_LINE(219)
			::String tmp11 = (HX_HCSTRING("'","\x27","\x00","\x00","\x00") + format->font);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(219)
			tmp9 = (tmp11 + HX_HCSTRING("'","\x27","\x00","\x00","\x00"));
		}
;
;
	}
	HX_STACK_LINE(214)
	::String tmp10 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(214)
	hx::AddEq(font,tmp10);
	HX_STACK_LINE(223)
	::String tmp11 = font;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(223)
	return tmp11;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(TextEngine_obj,getFont,return )

::openfl::text::Font TextEngine_obj::getFontInstance( ::openfl::text::TextFormat format){
	HX_STACK_FRAME("openfl._internal.text.TextEngine","getFontInstance",0xe749142c,"openfl._internal.text.TextEngine.getFontInstance","openfl/_internal/text/TextEngine.hx",228,0xdff93b7f)
	HX_STACK_ARG(format,"format")
	HX_STACK_LINE(232)
	::openfl::text::Font instance = null();		HX_STACK_VAR(instance,"instance");
	HX_STACK_LINE(233)
	Array< ::String > fontList = null();		HX_STACK_VAR(fontList,"fontList");
	HX_STACK_LINE(235)
	bool tmp = (format != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(235)
	bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(235)
	if ((tmp)){
		HX_STACK_LINE(235)
		tmp1 = (format->font != null());
	}
	else{
		HX_STACK_LINE(235)
		tmp1 = false;
	}
	HX_STACK_LINE(235)
	if ((tmp1)){
		HX_STACK_LINE(237)
		::haxe::ds::StringMap tmp2 = ::openfl::_internal::text::TextEngine_obj::__defaultFonts;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(237)
		::String tmp3 = format->font;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(237)
		bool tmp4 = tmp2->exists(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(237)
		if ((tmp4)){
			HX_STACK_LINE(239)
			::haxe::ds::StringMap tmp5 = ::openfl::_internal::text::TextEngine_obj::__defaultFonts;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(239)
			::String tmp6 = format->font;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(239)
			::openfl::text::Font tmp7 = tmp5->get(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(239)
			::openfl::text::Font tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(239)
			return tmp8;
		}
		HX_STACK_LINE(243)
		::String tmp5 = format->font;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(243)
		::openfl::text::Font tmp6 = ::openfl::_internal::text::TextEngine_obj::findFont(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(243)
		instance = tmp6;
		HX_STACK_LINE(244)
		bool tmp7 = (instance != null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(244)
		if ((tmp7)){
			HX_STACK_LINE(244)
			::openfl::text::Font tmp8 = instance;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(244)
			return tmp8;
		}
		HX_STACK_LINE(246)
		::String tmp8 = ::lime::_system::System_obj::get_fontsDirectory();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(246)
		::String systemFontDirectory = tmp8;		HX_STACK_VAR(systemFontDirectory,"systemFontDirectory");
		HX_STACK_LINE(248)
		{
			HX_STACK_LINE(248)
			::String _g = format->font;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(248)
			::String tmp9 = _g;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(248)
			::String _switch_2 = (tmp9);
			if (  ( _switch_2==HX_HCSTRING("_sans","\x32","\xa0","\x5e","\xff"))){
				HX_STACK_LINE(279)
				::String tmp10 = (systemFontDirectory + HX_HCSTRING("/Arial Black.ttf","\x0b","\xb8","\xa6","\x98"));		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(279)
				::String tmp11 = (systemFontDirectory + HX_HCSTRING("/Arial.ttf","\x0c","\x14","\x61","\x7a"));		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(279)
				::String tmp12 = (systemFontDirectory + HX_HCSTRING("/Helvetica.ttf","\x5a","\x6c","\xff","\x0c"));		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(279)
				::String tmp13 = (systemFontDirectory + HX_HCSTRING("/Cache/Arial Black.ttf","\x9e","\x4d","\xde","\x05"));		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(279)
				::String tmp14 = (systemFontDirectory + HX_HCSTRING("/Cache/Arial.ttf","\x5f","\x69","\xb5","\x54"));		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(279)
				::String tmp15 = (systemFontDirectory + HX_HCSTRING("/Cache/Helvetica.ttf","\x2d","\x67","\xe4","\x7a"));		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(279)
				::String tmp16 = (systemFontDirectory + HX_HCSTRING("/Core/Arial Black.ttf","\x39","\xa1","\xd3","\x8e"));		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(279)
				::String tmp17 = (systemFontDirectory + HX_HCSTRING("/Core/Arial.ttf","\xba","\xc6","\x65","\x25"));		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(279)
				::String tmp18 = (systemFontDirectory + HX_HCSTRING("/Core/Helvetica.ttf","\x08","\x0e","\xfe","\x0c"));		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(279)
				::String tmp19 = (systemFontDirectory + HX_HCSTRING("/CoreAddition/Arial Black.ttf","\x55","\xa0","\x03","\xce"));		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(279)
				::String tmp20 = (systemFontDirectory + HX_HCSTRING("/CoreAddition/Arial.ttf","\xd6","\x48","\x2f","\x75"));		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(279)
				::String tmp21 = (systemFontDirectory + HX_HCSTRING("/CoreAddition/Helvetica.ttf","\x24","\xce","\xe8","\xab"));		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(279)
				fontList = Array_obj< ::String >::__new().Add(tmp10).Add(tmp11).Add(tmp12).Add(tmp13).Add(tmp14).Add(tmp15).Add(tmp16).Add(tmp17).Add(tmp18).Add(tmp19).Add(tmp20).Add(tmp21);
			}
			else if (  ( _switch_2==HX_HCSTRING("_serif","\xbe","\x66","\x15","\x76"))){
			}
			else if (  ( _switch_2==HX_HCSTRING("_typewriter","\x0c","\x5e","\x52","\x94"))){
				HX_STACK_LINE(321)
				::String tmp10 = (systemFontDirectory + HX_HCSTRING("/Courier New.ttf","\xd6","\xe1","\x80","\xa0"));		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(321)
				::String tmp11 = (systemFontDirectory + HX_HCSTRING("/Courier.ttf","\xb6","\x7e","\x38","\x40"));		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(321)
				::String tmp12 = (systemFontDirectory + HX_HCSTRING("/Cache/Courier New.ttf","\x69","\x77","\xb8","\x0d"));		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(321)
				::String tmp13 = (systemFontDirectory + HX_HCSTRING("/Cache/Courier.ttf","\xc9","\x0e","\x4b","\x98"));		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(321)
				::String tmp14 = (systemFontDirectory + HX_HCSTRING("/Core/Courier New.ttf","\x04","\xcb","\xad","\x96"));		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(321)
				::String tmp15 = (systemFontDirectory + HX_HCSTRING("/Core/Courier.ttf","\xe4","\xb8","\xd1","\x3b"));		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(321)
				::String tmp16 = (systemFontDirectory + HX_HCSTRING("/CoreAddition/Courier New.ttf","\x20","\xca","\xdd","\xd5"));		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(321)
				::String tmp17 = (systemFontDirectory + HX_HCSTRING("/CoreAddition/Courier.ttf","\x00","\xfa","\x94","\x32"));		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(321)
				fontList = Array_obj< ::String >::__new().Add(tmp10).Add(tmp11).Add(tmp12).Add(tmp13).Add(tmp14).Add(tmp15).Add(tmp16).Add(tmp17);
			}
			else  {
				HX_STACK_LINE(332)
				::String tmp10 = (systemFontDirectory + HX_HCSTRING("/","\x2f","\x00","\x00","\x00"));		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(332)
				::String tmp11 = format->font;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(332)
				::String tmp12 = (tmp10 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(332)
				fontList = Array_obj< ::String >::__new().Add(tmp12);
			}
;
;
		}
		HX_STACK_LINE(349)
		bool tmp9 = (fontList != null());		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(349)
		if ((tmp9)){
			HX_STACK_LINE(351)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(351)
			while((true)){
				HX_STACK_LINE(351)
				bool tmp10 = (_g < fontList->length);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(351)
				bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(351)
				if ((tmp11)){
					HX_STACK_LINE(351)
					break;
				}
				HX_STACK_LINE(351)
				::String tmp12 = fontList->__get(_g);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(351)
				::String font = tmp12;		HX_STACK_VAR(font,"font");
				HX_STACK_LINE(351)
				++(_g);
				HX_STACK_LINE(353)
				::String tmp13 = font;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(353)
				::openfl::text::Font tmp14 = ::openfl::_internal::text::TextEngine_obj::findFont(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(353)
				instance = tmp14;
				HX_STACK_LINE(355)
				bool tmp15 = (instance != null());		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(355)
				if ((tmp15)){
					HX_STACK_LINE(357)
					::haxe::ds::StringMap tmp16 = ::openfl::_internal::text::TextEngine_obj::__defaultFonts;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(357)
					::String tmp17 = format->font;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(357)
					::openfl::text::Font tmp18 = instance;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(357)
					tmp16->set(tmp17,tmp18);
					HX_STACK_LINE(358)
					::openfl::text::Font tmp19 = instance;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(358)
					return tmp19;
				}
			}
		}
		HX_STACK_LINE(366)
		::openfl::text::Font tmp10 = ::openfl::_internal::text::TextEngine_obj::findFont(HX_HCSTRING("_serif","\xbe","\x66","\x15","\x76"));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(366)
		instance = tmp10;
		HX_STACK_LINE(367)
		bool tmp11 = (instance != null());		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(367)
		if ((tmp11)){
			HX_STACK_LINE(367)
			::openfl::text::Font tmp12 = instance;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(367)
			return tmp12;
		}
	}
	HX_STACK_LINE(371)
	::String tmp2 = ::lime::_system::System_obj::get_fontsDirectory();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(371)
	::String systemFontDirectory = tmp2;		HX_STACK_VAR(systemFontDirectory,"systemFontDirectory");
	HX_STACK_LINE(400)
	::String tmp3 = (systemFontDirectory + HX_HCSTRING("/Georgia.ttf","\x67","\xae","\x93","\x4b"));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(400)
	::String tmp4 = (systemFontDirectory + HX_HCSTRING("/Times.ttf","\x0f","\x38","\x17","\x67"));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(400)
	::String tmp5 = (systemFontDirectory + HX_HCSTRING("/Times New Roman.ttf","\x2c","\xb8","\x6d","\x0c"));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(400)
	::String tmp6 = (systemFontDirectory + HX_HCSTRING("/Cache/Georgia.ttf","\x7a","\x3e","\xa6","\xa3"));		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(400)
	::String tmp7 = (systemFontDirectory + HX_HCSTRING("/Cache/Times.ttf","\x62","\x8d","\x6b","\x41"));		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(400)
	::String tmp8 = (systemFontDirectory + HX_HCSTRING("/Cache/Times New Roman.ttf","\x3f","\x13","\x7b","\x39"));		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(400)
	::String tmp9 = (systemFontDirectory + HX_HCSTRING("/Core/Georgia.ttf","\x95","\xe8","\x2c","\x47"));		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(400)
	::String tmp10 = (systemFontDirectory + HX_HCSTRING("/Core/Times.ttf","\xbd","\xea","\x1b","\x12"));		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(400)
	::String tmp11 = (systemFontDirectory + HX_HCSTRING("/Core/Times New Roman.ttf","\x5a","\xd0","\x31","\x62"));		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(400)
	::String tmp12 = (systemFontDirectory + HX_HCSTRING("/CoreAddition/Georgia.ttf","\xb1","\x29","\xf0","\x3d"));		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(400)
	::String tmp13 = (systemFontDirectory + HX_HCSTRING("/CoreAddition/Times.ttf","\xd9","\x6c","\xe5","\x61"));		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(400)
	::String tmp14 = (systemFontDirectory + HX_HCSTRING("/CoreAddition/Times New Roman.ttf","\x76","\x8d","\x05","\xb2"));		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(400)
	fontList = Array_obj< ::String >::__new().Add(tmp3).Add(tmp4).Add(tmp5).Add(tmp6).Add(tmp7).Add(tmp8).Add(tmp9).Add(tmp10).Add(tmp11).Add(tmp12).Add(tmp13).Add(tmp14);
	HX_STACK_LINE(411)
	{
		HX_STACK_LINE(411)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(411)
		while((true)){
			HX_STACK_LINE(411)
			bool tmp15 = (_g < fontList->length);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(411)
			bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(411)
			if ((tmp16)){
				HX_STACK_LINE(411)
				break;
			}
			HX_STACK_LINE(411)
			::String tmp17 = fontList->__get(_g);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(411)
			::String font = tmp17;		HX_STACK_VAR(font,"font");
			HX_STACK_LINE(411)
			++(_g);
			HX_STACK_LINE(413)
			::String tmp18 = font;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(413)
			::openfl::text::Font tmp19 = ::openfl::_internal::text::TextEngine_obj::findFont(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(413)
			instance = tmp19;
			HX_STACK_LINE(415)
			bool tmp20 = (instance != null());		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(415)
			if ((tmp20)){
				HX_STACK_LINE(417)
				::haxe::ds::StringMap tmp21 = ::openfl::_internal::text::TextEngine_obj::__defaultFonts;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(417)
				::String tmp22 = format->font;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(417)
				::openfl::text::Font tmp23 = instance;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(417)
				tmp21->set(tmp22,tmp23);
				HX_STACK_LINE(418)
				::openfl::text::Font tmp24 = instance;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(418)
				return tmp24;
			}
		}
	}
	HX_STACK_LINE(424)
	::haxe::ds::StringMap tmp15 = ::openfl::_internal::text::TextEngine_obj::__defaultFonts;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(424)
	::String tmp16 = format->font;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(424)
	tmp15->set(tmp16,null());
	HX_STACK_LINE(428)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(TextEngine_obj,getFontInstance,return )


TextEngine_obj::TextEngine_obj()
{
}

void TextEngine_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TextEngine);
	HX_MARK_MEMBER_NAME(antiAliasType,"antiAliasType");
	HX_MARK_MEMBER_NAME(autoSize,"autoSize");
	HX_MARK_MEMBER_NAME(background,"background");
	HX_MARK_MEMBER_NAME(backgroundColor,"backgroundColor");
	HX_MARK_MEMBER_NAME(border,"border");
	HX_MARK_MEMBER_NAME(borderColor,"borderColor");
	HX_MARK_MEMBER_NAME(bottomScrollV,"bottomScrollV");
	HX_MARK_MEMBER_NAME(bounds,"bounds");
	HX_MARK_MEMBER_NAME(caretIndex,"caretIndex");
	HX_MARK_MEMBER_NAME(displayAsPassword,"displayAsPassword");
	HX_MARK_MEMBER_NAME(embedFonts,"embedFonts");
	HX_MARK_MEMBER_NAME(gridFitType,"gridFitType");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(layoutGroups,"layoutGroups");
	HX_MARK_MEMBER_NAME(lineAscents,"lineAscents");
	HX_MARK_MEMBER_NAME(lineBreaks,"lineBreaks");
	HX_MARK_MEMBER_NAME(lineDescents,"lineDescents");
	HX_MARK_MEMBER_NAME(lineLeadings,"lineLeadings");
	HX_MARK_MEMBER_NAME(lineHeights,"lineHeights");
	HX_MARK_MEMBER_NAME(lineWidths,"lineWidths");
	HX_MARK_MEMBER_NAME(maxChars,"maxChars");
	HX_MARK_MEMBER_NAME(maxScrollH,"maxScrollH");
	HX_MARK_MEMBER_NAME(maxScrollV,"maxScrollV");
	HX_MARK_MEMBER_NAME(multiline,"multiline");
	HX_MARK_MEMBER_NAME(numLines,"numLines");
	HX_MARK_MEMBER_NAME(restrict,"restrict");
	HX_MARK_MEMBER_NAME(scrollH,"scrollH");
	HX_MARK_MEMBER_NAME(scrollV,"scrollV");
	HX_MARK_MEMBER_NAME(selectable,"selectable");
	HX_MARK_MEMBER_NAME(sharpness,"sharpness");
	HX_MARK_MEMBER_NAME(text,"text");
	HX_MARK_MEMBER_NAME(textHeight,"textHeight");
	HX_MARK_MEMBER_NAME(textFormatRanges,"textFormatRanges");
	HX_MARK_MEMBER_NAME(textWidth,"textWidth");
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(wordWrap,"wordWrap");
	HX_MARK_MEMBER_NAME(textField,"textField");
	HX_MARK_MEMBER_NAME(__cursorPosition,"__cursorPosition");
	HX_MARK_MEMBER_NAME(__cursorTimer,"__cursorTimer");
	HX_MARK_MEMBER_NAME(__hasFocus,"__hasFocus");
	HX_MARK_MEMBER_NAME(__isKeyDown,"__isKeyDown");
	HX_MARK_MEMBER_NAME(__measuredHeight,"__measuredHeight");
	HX_MARK_MEMBER_NAME(__measuredWidth,"__measuredWidth");
	HX_MARK_MEMBER_NAME(__selectionStart,"__selectionStart");
	HX_MARK_MEMBER_NAME(__showCursor,"__showCursor");
	HX_MARK_MEMBER_NAME(__textFormat,"__textFormat");
	HX_MARK_MEMBER_NAME(__textLayout,"__textLayout");
	HX_MARK_MEMBER_NAME(__texture,"__texture");
	HX_MARK_MEMBER_NAME(__cairoFont,"__cairoFont");
	HX_MARK_MEMBER_NAME(__font,"__font");
	HX_MARK_END_CLASS();
}

void TextEngine_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(antiAliasType,"antiAliasType");
	HX_VISIT_MEMBER_NAME(autoSize,"autoSize");
	HX_VISIT_MEMBER_NAME(background,"background");
	HX_VISIT_MEMBER_NAME(backgroundColor,"backgroundColor");
	HX_VISIT_MEMBER_NAME(border,"border");
	HX_VISIT_MEMBER_NAME(borderColor,"borderColor");
	HX_VISIT_MEMBER_NAME(bottomScrollV,"bottomScrollV");
	HX_VISIT_MEMBER_NAME(bounds,"bounds");
	HX_VISIT_MEMBER_NAME(caretIndex,"caretIndex");
	HX_VISIT_MEMBER_NAME(displayAsPassword,"displayAsPassword");
	HX_VISIT_MEMBER_NAME(embedFonts,"embedFonts");
	HX_VISIT_MEMBER_NAME(gridFitType,"gridFitType");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(layoutGroups,"layoutGroups");
	HX_VISIT_MEMBER_NAME(lineAscents,"lineAscents");
	HX_VISIT_MEMBER_NAME(lineBreaks,"lineBreaks");
	HX_VISIT_MEMBER_NAME(lineDescents,"lineDescents");
	HX_VISIT_MEMBER_NAME(lineLeadings,"lineLeadings");
	HX_VISIT_MEMBER_NAME(lineHeights,"lineHeights");
	HX_VISIT_MEMBER_NAME(lineWidths,"lineWidths");
	HX_VISIT_MEMBER_NAME(maxChars,"maxChars");
	HX_VISIT_MEMBER_NAME(maxScrollH,"maxScrollH");
	HX_VISIT_MEMBER_NAME(maxScrollV,"maxScrollV");
	HX_VISIT_MEMBER_NAME(multiline,"multiline");
	HX_VISIT_MEMBER_NAME(numLines,"numLines");
	HX_VISIT_MEMBER_NAME(restrict,"restrict");
	HX_VISIT_MEMBER_NAME(scrollH,"scrollH");
	HX_VISIT_MEMBER_NAME(scrollV,"scrollV");
	HX_VISIT_MEMBER_NAME(selectable,"selectable");
	HX_VISIT_MEMBER_NAME(sharpness,"sharpness");
	HX_VISIT_MEMBER_NAME(text,"text");
	HX_VISIT_MEMBER_NAME(textHeight,"textHeight");
	HX_VISIT_MEMBER_NAME(textFormatRanges,"textFormatRanges");
	HX_VISIT_MEMBER_NAME(textWidth,"textWidth");
	HX_VISIT_MEMBER_NAME(type,"type");
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(wordWrap,"wordWrap");
	HX_VISIT_MEMBER_NAME(textField,"textField");
	HX_VISIT_MEMBER_NAME(__cursorPosition,"__cursorPosition");
	HX_VISIT_MEMBER_NAME(__cursorTimer,"__cursorTimer");
	HX_VISIT_MEMBER_NAME(__hasFocus,"__hasFocus");
	HX_VISIT_MEMBER_NAME(__isKeyDown,"__isKeyDown");
	HX_VISIT_MEMBER_NAME(__measuredHeight,"__measuredHeight");
	HX_VISIT_MEMBER_NAME(__measuredWidth,"__measuredWidth");
	HX_VISIT_MEMBER_NAME(__selectionStart,"__selectionStart");
	HX_VISIT_MEMBER_NAME(__showCursor,"__showCursor");
	HX_VISIT_MEMBER_NAME(__textFormat,"__textFormat");
	HX_VISIT_MEMBER_NAME(__textLayout,"__textLayout");
	HX_VISIT_MEMBER_NAME(__texture,"__texture");
	HX_VISIT_MEMBER_NAME(__cairoFont,"__cairoFont");
	HX_VISIT_MEMBER_NAME(__font,"__font");
}

Dynamic TextEngine_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"text") ) { return text; }
		if (HX_FIELD_EQ(inName,"type") ) { return type; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return width; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"border") ) { return border; }
		if (HX_FIELD_EQ(inName,"bounds") ) { return bounds; }
		if (HX_FIELD_EQ(inName,"height") ) { return height; }
		if (HX_FIELD_EQ(inName,"__font") ) { return __font; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"scrollH") ) { return scrollH; }
		if (HX_FIELD_EQ(inName,"scrollV") ) { return scrollV; }
		if (HX_FIELD_EQ(inName,"getLine") ) { return getLine_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"autoSize") ) { return autoSize; }
		if (HX_FIELD_EQ(inName,"maxChars") ) { return maxChars; }
		if (HX_FIELD_EQ(inName,"numLines") ) { return numLines; }
		if (HX_FIELD_EQ(inName,"restrict") ) { return restrict; }
		if (HX_FIELD_EQ(inName,"wordWrap") ) { return wordWrap; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"multiline") ) { return multiline; }
		if (HX_FIELD_EQ(inName,"sharpness") ) { return sharpness; }
		if (HX_FIELD_EQ(inName,"textWidth") ) { return textWidth; }
		if (HX_FIELD_EQ(inName,"textField") ) { return textField; }
		if (HX_FIELD_EQ(inName,"__texture") ) { return __texture; }
		if (HX_FIELD_EQ(inName,"getBounds") ) { return getBounds_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"background") ) { return background; }
		if (HX_FIELD_EQ(inName,"caretIndex") ) { return caretIndex; }
		if (HX_FIELD_EQ(inName,"embedFonts") ) { return embedFonts; }
		if (HX_FIELD_EQ(inName,"lineBreaks") ) { return lineBreaks; }
		if (HX_FIELD_EQ(inName,"lineWidths") ) { return lineWidths; }
		if (HX_FIELD_EQ(inName,"maxScrollH") ) { return maxScrollH; }
		if (HX_FIELD_EQ(inName,"maxScrollV") ) { return maxScrollV; }
		if (HX_FIELD_EQ(inName,"selectable") ) { return selectable; }
		if (HX_FIELD_EQ(inName,"textHeight") ) { return textHeight; }
		if (HX_FIELD_EQ(inName,"__hasFocus") ) { return __hasFocus; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"borderColor") ) { return borderColor; }
		if (HX_FIELD_EQ(inName,"gridFitType") ) { return gridFitType; }
		if (HX_FIELD_EQ(inName,"lineAscents") ) { return lineAscents; }
		if (HX_FIELD_EQ(inName,"lineHeights") ) { return lineHeights; }
		if (HX_FIELD_EQ(inName,"__isKeyDown") ) { return __isKeyDown; }
		if (HX_FIELD_EQ(inName,"__cairoFont") ) { return __cairoFont; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"layoutGroups") ) { return layoutGroups; }
		if (HX_FIELD_EQ(inName,"lineDescents") ) { return lineDescents; }
		if (HX_FIELD_EQ(inName,"lineLeadings") ) { return lineLeadings; }
		if (HX_FIELD_EQ(inName,"__showCursor") ) { return __showCursor; }
		if (HX_FIELD_EQ(inName,"__textFormat") ) { return __textFormat; }
		if (HX_FIELD_EQ(inName,"__textLayout") ) { return __textLayout; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"antiAliasType") ) { return antiAliasType; }
		if (HX_FIELD_EQ(inName,"bottomScrollV") ) { return bottomScrollV; }
		if (HX_FIELD_EQ(inName,"__cursorTimer") ) { return __cursorTimer; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"backgroundColor") ) { return backgroundColor; }
		if (HX_FIELD_EQ(inName,"__measuredWidth") ) { return __measuredWidth; }
		if (HX_FIELD_EQ(inName,"getLayoutGroups") ) { return getLayoutGroups_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"textFormatRanges") ) { return textFormatRanges; }
		if (HX_FIELD_EQ(inName,"__cursorPosition") ) { return __cursorPosition; }
		if (HX_FIELD_EQ(inName,"__measuredHeight") ) { return __measuredHeight; }
		if (HX_FIELD_EQ(inName,"__selectionStart") ) { return __selectionStart; }
		if (HX_FIELD_EQ(inName,"setTextAlignment") ) { return setTextAlignment_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"displayAsPassword") ) { return displayAsPassword; }
		if (HX_FIELD_EQ(inName,"getLineBreakIndex") ) { return getLineBreakIndex_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"getLineMeasurements") ) { return getLineMeasurements_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool TextEngine_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"getFont") ) { outValue = getFont_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"findFont") ) { outValue = findFont_dyn(); return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__defaultFonts") ) { outValue = __defaultFonts; return true;  }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"getFontInstance") ) { outValue = getFontInstance_dyn(); return true;  }
	}
	return false;
}

Dynamic TextEngine_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"text") ) { text=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"border") ) { border=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bounds") ) { bounds=inValue.Cast< ::openfl::geom::Rectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__font") ) { __font=inValue.Cast< ::openfl::text::Font >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"scrollH") ) { scrollH=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scrollV") ) { scrollV=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"autoSize") ) { autoSize=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"maxChars") ) { maxChars=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"numLines") ) { numLines=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"restrict") ) { restrict=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"wordWrap") ) { wordWrap=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"multiline") ) { multiline=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"sharpness") ) { sharpness=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"textWidth") ) { textWidth=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"textField") ) { textField=inValue.Cast< ::openfl::text::TextField >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__texture") ) { __texture=inValue.Cast< ::lime::graphics::opengl::GLTexture >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"background") ) { background=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"caretIndex") ) { caretIndex=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"embedFonts") ) { embedFonts=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lineBreaks") ) { lineBreaks=inValue.Cast< Array< int > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lineWidths") ) { lineWidths=inValue.Cast< Array< Float > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"maxScrollH") ) { maxScrollH=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"maxScrollV") ) { maxScrollV=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"selectable") ) { selectable=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"textHeight") ) { textHeight=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__hasFocus") ) { __hasFocus=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"borderColor") ) { borderColor=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"gridFitType") ) { gridFitType=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lineAscents") ) { lineAscents=inValue.Cast< Array< Float > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lineHeights") ) { lineHeights=inValue.Cast< Array< Float > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__isKeyDown") ) { __isKeyDown=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__cairoFont") ) { __cairoFont=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"layoutGroups") ) { layoutGroups=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lineDescents") ) { lineDescents=inValue.Cast< Array< Float > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lineLeadings") ) { lineLeadings=inValue.Cast< Array< Float > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__showCursor") ) { __showCursor=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__textFormat") ) { __textFormat=inValue.Cast< ::openfl::text::TextFormat >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__textLayout") ) { __textLayout=inValue.Cast< ::lime::text::TextLayout >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"antiAliasType") ) { antiAliasType=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bottomScrollV") ) { bottomScrollV=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__cursorTimer") ) { __cursorTimer=inValue.Cast< ::haxe::Timer >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"backgroundColor") ) { backgroundColor=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__measuredWidth") ) { __measuredWidth=inValue.Cast< int >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"textFormatRanges") ) { textFormatRanges=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__cursorPosition") ) { __cursorPosition=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__measuredHeight") ) { __measuredHeight=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__selectionStart") ) { __selectionStart=inValue.Cast< int >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"displayAsPassword") ) { displayAsPassword=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool TextEngine_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 14:
		if (HX_FIELD_EQ(inName,"__defaultFonts") ) { __defaultFonts=ioValue.Cast< ::haxe::ds::StringMap >(); return true; }
	}
	return false;
}

void TextEngine_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("antiAliasType","\x68","\xc4","\xfa","\xe7"));
	outFields->push(HX_HCSTRING("autoSize","\xd0","\x8f","\x79","\x2f"));
	outFields->push(HX_HCSTRING("background","\xee","\x93","\x1d","\x26"));
	outFields->push(HX_HCSTRING("backgroundColor","\x95","\x4e","\x47","\x0d"));
	outFields->push(HX_HCSTRING("border","\xec","\x4c","\x1a","\x64"));
	outFields->push(HX_HCSTRING("borderColor","\xd7","\x3c","\xd5","\xd6"));
	outFields->push(HX_HCSTRING("bottomScrollV","\xfe","\xf7","\x87","\x8b"));
	outFields->push(HX_HCSTRING("bounds","\x75","\x86","\x1d","\x66"));
	outFields->push(HX_HCSTRING("caretIndex","\x8f","\xb6","\x5b","\xdd"));
	outFields->push(HX_HCSTRING("displayAsPassword","\x0f","\xcb","\x96","\xea"));
	outFields->push(HX_HCSTRING("embedFonts","\x2b","\xc7","\xe1","\x8e"));
	outFields->push(HX_HCSTRING("gridFitType","\x05","\xf3","\x13","\xb4"));
	outFields->push(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"));
	outFields->push(HX_HCSTRING("layoutGroups","\x9e","\xa2","\x6c","\x37"));
	outFields->push(HX_HCSTRING("lineAscents","\x45","\x0c","\xc2","\x3e"));
	outFields->push(HX_HCSTRING("lineBreaks","\xe8","\xfd","\x5b","\xea"));
	outFields->push(HX_HCSTRING("lineDescents","\x0d","\xad","\x64","\x49"));
	outFields->push(HX_HCSTRING("lineLeadings","\x01","\x23","\x97","\x76"));
	outFields->push(HX_HCSTRING("lineHeights","\x18","\x99","\x8e","\x3e"));
	outFields->push(HX_HCSTRING("lineWidths","\xc1","\x8a","\xa4","\x20"));
	outFields->push(HX_HCSTRING("maxChars","\x99","\xef","\xd0","\xef"));
	outFields->push(HX_HCSTRING("maxScrollH","\x57","\xad","\xfc","\x9a"));
	outFields->push(HX_HCSTRING("maxScrollV","\x65","\xad","\xfc","\x9a"));
	outFields->push(HX_HCSTRING("multiline","\xed","\xd2","\x11","\x9e"));
	outFields->push(HX_HCSTRING("numLines","\xd9","\xf1","\x11","\x32"));
	outFields->push(HX_HCSTRING("restrict","\x3c","\xcb","\x9e","\xf1"));
	outFields->push(HX_HCSTRING("scrollH","\x9b","\x33","\xd8","\x30"));
	outFields->push(HX_HCSTRING("scrollV","\xa9","\x33","\xd8","\x30"));
	outFields->push(HX_HCSTRING("selectable","\x96","\xb6","\x2a","\xc4"));
	outFields->push(HX_HCSTRING("sharpness","\x81","\x22","\x25","\x1b"));
	outFields->push(HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c"));
	outFields->push(HX_HCSTRING("textHeight","\x74","\x88","\x3c","\x39"));
	outFields->push(HX_HCSTRING("textFormatRanges","\xfa","\x0e","\x49","\xa2"));
	outFields->push(HX_HCSTRING("textWidth","\x19","\x46","\x50","\x63"));
	outFields->push(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"));
	outFields->push(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"));
	outFields->push(HX_HCSTRING("wordWrap","\xb4","\x14","\xdb","\x00"));
	outFields->push(HX_HCSTRING("textField","\xcd","\x24","\x81","\x99"));
	outFields->push(HX_HCSTRING("__cursorPosition","\xbf","\x3c","\xe0","\x7d"));
	outFields->push(HX_HCSTRING("__cursorTimer","\xef","\x59","\x8f","\xe1"));
	outFields->push(HX_HCSTRING("__hasFocus","\x3e","\x1d","\x1a","\x34"));
	outFields->push(HX_HCSTRING("__isKeyDown","\xb7","\x2f","\x72","\xce"));
	outFields->push(HX_HCSTRING("__measuredHeight","\xed","\xb6","\x23","\x42"));
	outFields->push(HX_HCSTRING("__measuredWidth","\xc0","\x49","\xec","\x02"));
	outFields->push(HX_HCSTRING("__selectionStart","\x96","\xe3","\xb9","\x43"));
	outFields->push(HX_HCSTRING("__showCursor","\xd3","\xae","\xf0","\xe0"));
	outFields->push(HX_HCSTRING("__textFormat","\xe4","\x8a","\x12","\x6d"));
	outFields->push(HX_HCSTRING("__textLayout","\x57","\xaa","\x3c","\xc8"));
	outFields->push(HX_HCSTRING("__texture","\xbb","\x19","\x2f","\x20"));
	outFields->push(HX_HCSTRING("__cairoFont","\x57","\xe7","\xb5","\x28"));
	outFields->push(HX_HCSTRING("__font","\xef","\xc0","\xb8","\xf2"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(TextEngine_obj,antiAliasType),HX_HCSTRING("antiAliasType","\x68","\xc4","\xfa","\xe7")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(TextEngine_obj,autoSize),HX_HCSTRING("autoSize","\xd0","\x8f","\x79","\x2f")},
	{hx::fsBool,(int)offsetof(TextEngine_obj,background),HX_HCSTRING("background","\xee","\x93","\x1d","\x26")},
	{hx::fsInt,(int)offsetof(TextEngine_obj,backgroundColor),HX_HCSTRING("backgroundColor","\x95","\x4e","\x47","\x0d")},
	{hx::fsBool,(int)offsetof(TextEngine_obj,border),HX_HCSTRING("border","\xec","\x4c","\x1a","\x64")},
	{hx::fsInt,(int)offsetof(TextEngine_obj,borderColor),HX_HCSTRING("borderColor","\xd7","\x3c","\xd5","\xd6")},
	{hx::fsInt,(int)offsetof(TextEngine_obj,bottomScrollV),HX_HCSTRING("bottomScrollV","\xfe","\xf7","\x87","\x8b")},
	{hx::fsObject /*::openfl::geom::Rectangle*/ ,(int)offsetof(TextEngine_obj,bounds),HX_HCSTRING("bounds","\x75","\x86","\x1d","\x66")},
	{hx::fsInt,(int)offsetof(TextEngine_obj,caretIndex),HX_HCSTRING("caretIndex","\x8f","\xb6","\x5b","\xdd")},
	{hx::fsBool,(int)offsetof(TextEngine_obj,displayAsPassword),HX_HCSTRING("displayAsPassword","\x0f","\xcb","\x96","\xea")},
	{hx::fsBool,(int)offsetof(TextEngine_obj,embedFonts),HX_HCSTRING("embedFonts","\x2b","\xc7","\xe1","\x8e")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(TextEngine_obj,gridFitType),HX_HCSTRING("gridFitType","\x05","\xf3","\x13","\xb4")},
	{hx::fsFloat,(int)offsetof(TextEngine_obj,height),HX_HCSTRING("height","\xe7","\x07","\x4c","\x02")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(TextEngine_obj,layoutGroups),HX_HCSTRING("layoutGroups","\x9e","\xa2","\x6c","\x37")},
	{hx::fsObject /*Array< Float >*/ ,(int)offsetof(TextEngine_obj,lineAscents),HX_HCSTRING("lineAscents","\x45","\x0c","\xc2","\x3e")},
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(TextEngine_obj,lineBreaks),HX_HCSTRING("lineBreaks","\xe8","\xfd","\x5b","\xea")},
	{hx::fsObject /*Array< Float >*/ ,(int)offsetof(TextEngine_obj,lineDescents),HX_HCSTRING("lineDescents","\x0d","\xad","\x64","\x49")},
	{hx::fsObject /*Array< Float >*/ ,(int)offsetof(TextEngine_obj,lineLeadings),HX_HCSTRING("lineLeadings","\x01","\x23","\x97","\x76")},
	{hx::fsObject /*Array< Float >*/ ,(int)offsetof(TextEngine_obj,lineHeights),HX_HCSTRING("lineHeights","\x18","\x99","\x8e","\x3e")},
	{hx::fsObject /*Array< Float >*/ ,(int)offsetof(TextEngine_obj,lineWidths),HX_HCSTRING("lineWidths","\xc1","\x8a","\xa4","\x20")},
	{hx::fsInt,(int)offsetof(TextEngine_obj,maxChars),HX_HCSTRING("maxChars","\x99","\xef","\xd0","\xef")},
	{hx::fsInt,(int)offsetof(TextEngine_obj,maxScrollH),HX_HCSTRING("maxScrollH","\x57","\xad","\xfc","\x9a")},
	{hx::fsInt,(int)offsetof(TextEngine_obj,maxScrollV),HX_HCSTRING("maxScrollV","\x65","\xad","\xfc","\x9a")},
	{hx::fsBool,(int)offsetof(TextEngine_obj,multiline),HX_HCSTRING("multiline","\xed","\xd2","\x11","\x9e")},
	{hx::fsInt,(int)offsetof(TextEngine_obj,numLines),HX_HCSTRING("numLines","\xd9","\xf1","\x11","\x32")},
	{hx::fsString,(int)offsetof(TextEngine_obj,restrict),HX_HCSTRING("restrict","\x3c","\xcb","\x9e","\xf1")},
	{hx::fsInt,(int)offsetof(TextEngine_obj,scrollH),HX_HCSTRING("scrollH","\x9b","\x33","\xd8","\x30")},
	{hx::fsInt,(int)offsetof(TextEngine_obj,scrollV),HX_HCSTRING("scrollV","\xa9","\x33","\xd8","\x30")},
	{hx::fsBool,(int)offsetof(TextEngine_obj,selectable),HX_HCSTRING("selectable","\x96","\xb6","\x2a","\xc4")},
	{hx::fsFloat,(int)offsetof(TextEngine_obj,sharpness),HX_HCSTRING("sharpness","\x81","\x22","\x25","\x1b")},
	{hx::fsString,(int)offsetof(TextEngine_obj,text),HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c")},
	{hx::fsFloat,(int)offsetof(TextEngine_obj,textHeight),HX_HCSTRING("textHeight","\x74","\x88","\x3c","\x39")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(TextEngine_obj,textFormatRanges),HX_HCSTRING("textFormatRanges","\xfa","\x0e","\x49","\xa2")},
	{hx::fsFloat,(int)offsetof(TextEngine_obj,textWidth),HX_HCSTRING("textWidth","\x19","\x46","\x50","\x63")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(TextEngine_obj,type),HX_HCSTRING("type","\xba","\xf2","\x08","\x4d")},
	{hx::fsFloat,(int)offsetof(TextEngine_obj,width),HX_HCSTRING("width","\x06","\xb6","\x62","\xca")},
	{hx::fsBool,(int)offsetof(TextEngine_obj,wordWrap),HX_HCSTRING("wordWrap","\xb4","\x14","\xdb","\x00")},
	{hx::fsObject /*::openfl::text::TextField*/ ,(int)offsetof(TextEngine_obj,textField),HX_HCSTRING("textField","\xcd","\x24","\x81","\x99")},
	{hx::fsInt,(int)offsetof(TextEngine_obj,__cursorPosition),HX_HCSTRING("__cursorPosition","\xbf","\x3c","\xe0","\x7d")},
	{hx::fsObject /*::haxe::Timer*/ ,(int)offsetof(TextEngine_obj,__cursorTimer),HX_HCSTRING("__cursorTimer","\xef","\x59","\x8f","\xe1")},
	{hx::fsBool,(int)offsetof(TextEngine_obj,__hasFocus),HX_HCSTRING("__hasFocus","\x3e","\x1d","\x1a","\x34")},
	{hx::fsBool,(int)offsetof(TextEngine_obj,__isKeyDown),HX_HCSTRING("__isKeyDown","\xb7","\x2f","\x72","\xce")},
	{hx::fsInt,(int)offsetof(TextEngine_obj,__measuredHeight),HX_HCSTRING("__measuredHeight","\xed","\xb6","\x23","\x42")},
	{hx::fsInt,(int)offsetof(TextEngine_obj,__measuredWidth),HX_HCSTRING("__measuredWidth","\xc0","\x49","\xec","\x02")},
	{hx::fsInt,(int)offsetof(TextEngine_obj,__selectionStart),HX_HCSTRING("__selectionStart","\x96","\xe3","\xb9","\x43")},
	{hx::fsBool,(int)offsetof(TextEngine_obj,__showCursor),HX_HCSTRING("__showCursor","\xd3","\xae","\xf0","\xe0")},
	{hx::fsObject /*::openfl::text::TextFormat*/ ,(int)offsetof(TextEngine_obj,__textFormat),HX_HCSTRING("__textFormat","\xe4","\x8a","\x12","\x6d")},
	{hx::fsObject /*::lime::text::TextLayout*/ ,(int)offsetof(TextEngine_obj,__textLayout),HX_HCSTRING("__textLayout","\x57","\xaa","\x3c","\xc8")},
	{hx::fsObject /*::lime::graphics::opengl::GLTexture*/ ,(int)offsetof(TextEngine_obj,__texture),HX_HCSTRING("__texture","\xbb","\x19","\x2f","\x20")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(TextEngine_obj,__cairoFont),HX_HCSTRING("__cairoFont","\x57","\xe7","\xb5","\x28")},
	{hx::fsObject /*::openfl::text::Font*/ ,(int)offsetof(TextEngine_obj,__font),HX_HCSTRING("__font","\xef","\xc0","\xb8","\xf2")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &TextEngine_obj::UTF8_TAB,HX_HCSTRING("UTF8_TAB","\x07","\xd5","\x41","\x1d")},
	{hx::fsInt,(void *) &TextEngine_obj::UTF8_ENDLINE,HX_HCSTRING("UTF8_ENDLINE","\x01","\x29","\x41","\xcf")},
	{hx::fsInt,(void *) &TextEngine_obj::UTF8_SPACE,HX_HCSTRING("UTF8_SPACE","\xf8","\x7b","\xa9","\xc7")},
	{hx::fsInt,(void *) &TextEngine_obj::UTF8_HYPHEN,HX_HCSTRING("UTF8_HYPHEN","\x60","\x3c","\x3f","\xbf")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(void *) &TextEngine_obj::__defaultFonts,HX_HCSTRING("__defaultFonts","\x63","\x76","\xad","\xda")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("antiAliasType","\x68","\xc4","\xfa","\xe7"),
	HX_HCSTRING("autoSize","\xd0","\x8f","\x79","\x2f"),
	HX_HCSTRING("background","\xee","\x93","\x1d","\x26"),
	HX_HCSTRING("backgroundColor","\x95","\x4e","\x47","\x0d"),
	HX_HCSTRING("border","\xec","\x4c","\x1a","\x64"),
	HX_HCSTRING("borderColor","\xd7","\x3c","\xd5","\xd6"),
	HX_HCSTRING("bottomScrollV","\xfe","\xf7","\x87","\x8b"),
	HX_HCSTRING("bounds","\x75","\x86","\x1d","\x66"),
	HX_HCSTRING("caretIndex","\x8f","\xb6","\x5b","\xdd"),
	HX_HCSTRING("displayAsPassword","\x0f","\xcb","\x96","\xea"),
	HX_HCSTRING("embedFonts","\x2b","\xc7","\xe1","\x8e"),
	HX_HCSTRING("gridFitType","\x05","\xf3","\x13","\xb4"),
	HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"),
	HX_HCSTRING("layoutGroups","\x9e","\xa2","\x6c","\x37"),
	HX_HCSTRING("lineAscents","\x45","\x0c","\xc2","\x3e"),
	HX_HCSTRING("lineBreaks","\xe8","\xfd","\x5b","\xea"),
	HX_HCSTRING("lineDescents","\x0d","\xad","\x64","\x49"),
	HX_HCSTRING("lineLeadings","\x01","\x23","\x97","\x76"),
	HX_HCSTRING("lineHeights","\x18","\x99","\x8e","\x3e"),
	HX_HCSTRING("lineWidths","\xc1","\x8a","\xa4","\x20"),
	HX_HCSTRING("maxChars","\x99","\xef","\xd0","\xef"),
	HX_HCSTRING("maxScrollH","\x57","\xad","\xfc","\x9a"),
	HX_HCSTRING("maxScrollV","\x65","\xad","\xfc","\x9a"),
	HX_HCSTRING("multiline","\xed","\xd2","\x11","\x9e"),
	HX_HCSTRING("numLines","\xd9","\xf1","\x11","\x32"),
	HX_HCSTRING("restrict","\x3c","\xcb","\x9e","\xf1"),
	HX_HCSTRING("scrollH","\x9b","\x33","\xd8","\x30"),
	HX_HCSTRING("scrollV","\xa9","\x33","\xd8","\x30"),
	HX_HCSTRING("selectable","\x96","\xb6","\x2a","\xc4"),
	HX_HCSTRING("sharpness","\x81","\x22","\x25","\x1b"),
	HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c"),
	HX_HCSTRING("textHeight","\x74","\x88","\x3c","\x39"),
	HX_HCSTRING("textFormatRanges","\xfa","\x0e","\x49","\xa2"),
	HX_HCSTRING("textWidth","\x19","\x46","\x50","\x63"),
	HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"),
	HX_HCSTRING("width","\x06","\xb6","\x62","\xca"),
	HX_HCSTRING("wordWrap","\xb4","\x14","\xdb","\x00"),
	HX_HCSTRING("textField","\xcd","\x24","\x81","\x99"),
	HX_HCSTRING("__cursorPosition","\xbf","\x3c","\xe0","\x7d"),
	HX_HCSTRING("__cursorTimer","\xef","\x59","\x8f","\xe1"),
	HX_HCSTRING("__hasFocus","\x3e","\x1d","\x1a","\x34"),
	HX_HCSTRING("__isKeyDown","\xb7","\x2f","\x72","\xce"),
	HX_HCSTRING("__measuredHeight","\xed","\xb6","\x23","\x42"),
	HX_HCSTRING("__measuredWidth","\xc0","\x49","\xec","\x02"),
	HX_HCSTRING("__selectionStart","\x96","\xe3","\xb9","\x43"),
	HX_HCSTRING("__showCursor","\xd3","\xae","\xf0","\xe0"),
	HX_HCSTRING("__textFormat","\xe4","\x8a","\x12","\x6d"),
	HX_HCSTRING("__textLayout","\x57","\xaa","\x3c","\xc8"),
	HX_HCSTRING("__texture","\xbb","\x19","\x2f","\x20"),
	HX_HCSTRING("__cairoFont","\x57","\xe7","\xb5","\x28"),
	HX_HCSTRING("__font","\xef","\xc0","\xb8","\xf2"),
	HX_HCSTRING("getBounds","\xab","\x0f","\x74","\xe2"),
	HX_HCSTRING("getLine","\xaa","\xc7","\x35","\x1a"),
	HX_HCSTRING("getLineBreakIndex","\x1d","\x16","\x36","\x36"),
	HX_HCSTRING("getLineMeasurements","\xc1","\x9f","\x81","\x56"),
	HX_HCSTRING("getLayoutGroups","\x54","\xf8","\x56","\x5a"),
	HX_HCSTRING("setTextAlignment","\x74","\x0f","\x33","\x62"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TextEngine_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(TextEngine_obj::UTF8_TAB,"UTF8_TAB");
	HX_MARK_MEMBER_NAME(TextEngine_obj::UTF8_ENDLINE,"UTF8_ENDLINE");
	HX_MARK_MEMBER_NAME(TextEngine_obj::UTF8_SPACE,"UTF8_SPACE");
	HX_MARK_MEMBER_NAME(TextEngine_obj::UTF8_HYPHEN,"UTF8_HYPHEN");
	HX_MARK_MEMBER_NAME(TextEngine_obj::__defaultFonts,"__defaultFonts");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TextEngine_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(TextEngine_obj::UTF8_TAB,"UTF8_TAB");
	HX_VISIT_MEMBER_NAME(TextEngine_obj::UTF8_ENDLINE,"UTF8_ENDLINE");
	HX_VISIT_MEMBER_NAME(TextEngine_obj::UTF8_SPACE,"UTF8_SPACE");
	HX_VISIT_MEMBER_NAME(TextEngine_obj::UTF8_HYPHEN,"UTF8_HYPHEN");
	HX_VISIT_MEMBER_NAME(TextEngine_obj::__defaultFonts,"__defaultFonts");
};

#endif

hx::Class TextEngine_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("UTF8_TAB","\x07","\xd5","\x41","\x1d"),
	HX_HCSTRING("UTF8_ENDLINE","\x01","\x29","\x41","\xcf"),
	HX_HCSTRING("UTF8_SPACE","\xf8","\x7b","\xa9","\xc7"),
	HX_HCSTRING("UTF8_HYPHEN","\x60","\x3c","\x3f","\xbf"),
	HX_HCSTRING("__defaultFonts","\x63","\x76","\xad","\xda"),
	HX_HCSTRING("findFont","\xa8","\x6a","\x54","\x96"),
	HX_HCSTRING("getFont","\x85","\x0d","\x43","\x16"),
	HX_HCSTRING("getFontInstance","\x3a","\x76","\x96","\x9e"),
	::String(null()) };

void TextEngine_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.text.TextEngine","\x60","\x7a","\x88","\xa0");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &TextEngine_obj::__GetStatic;
	__mClass->mSetStaticField = &TextEngine_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< TextEngine_obj >;
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

void TextEngine_obj::__boot()
{
	UTF8_TAB= (int)9;
	UTF8_ENDLINE= (int)10;
	UTF8_SPACE= (int)32;
	UTF8_HYPHEN= (int)45;
struct _Function_0_1{
	inline static ::haxe::ds::StringMap Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/_internal/text/TextEngine.hx",50,0xdff93b7f)
		{
			HX_STACK_LINE(50)
			::haxe::ds::StringMap tmp = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(50)
			::haxe::ds::StringMap tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(50)
			return tmp1;
		}
		return null();
	}
};
	__defaultFonts= _Function_0_1::Block();
}

} // end namespace openfl
} // end namespace _internal
} // end namespace text
