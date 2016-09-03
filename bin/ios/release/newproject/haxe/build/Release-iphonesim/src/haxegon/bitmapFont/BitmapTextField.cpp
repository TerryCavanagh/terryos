#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_Utf8
#include <haxe/Utf8.h>
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
#ifndef INCLUDED_haxegon_bitmapFont_BitmapTextField
#include <haxegon/bitmapFont/BitmapTextField.h>
#endif
#ifndef INCLUDED_haxegon_bitmapFont_TextBorderStyle
#include <haxegon/bitmapFont/TextBorderStyle.h>
#endif
#ifndef INCLUDED_openfl_display_Bitmap
#include <openfl/display/Bitmap.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_geom_Point
#include <openfl/geom/Point.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
namespace haxegon{
namespace bitmapFont{

Void BitmapTextField_obj::__construct(::haxegon::bitmapFont::BitmapFont font,::String __o_text,Dynamic pixelSnapping,hx::Null< bool >  __o_smoothing)
{
HX_STACK_FRAME("haxegon.bitmapFont.BitmapTextField","new",0x10550f6e,"haxegon.bitmapFont.BitmapTextField.new","haxegon/bitmapFont/BitmapTextField.hx",17,0xab2b8d62)
HX_STACK_THIS(this)
HX_STACK_ARG(font,"font")
HX_STACK_ARG(__o_text,"text")
HX_STACK_ARG(pixelSnapping,"pixelSnapping")
HX_STACK_ARG(__o_smoothing,"smoothing")
::String text = __o_text.Default(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
bool smoothing = __o_smoothing.Default(false);
{
	HX_STACK_LINE(183)
	this->_fieldHeight = (int)1;
	HX_STACK_LINE(182)
	this->_fieldWidth = (int)1;
	HX_STACK_LINE(180)
	this->_pendingBorderGlyphsChange = false;
	HX_STACK_LINE(179)
	this->_pendingTextGlyphsChange = true;
	HX_STACK_LINE(177)
	this->_pendingGraphicChange = true;
	HX_STACK_LINE(176)
	this->_pendingTextChange = true;
	HX_STACK_LINE(174)
	this->updateImmediately = true;
	HX_STACK_LINE(162)
	this->size = ((Float)1);
	HX_STACK_LINE(157)
	this->numLines = (int)0;
	HX_STACK_LINE(152)
	this->multiLine = true;
	HX_STACK_LINE(147)
	this->backgroundColor = (int)0;
	HX_STACK_LINE(142)
	this->background = false;
	HX_STACK_LINE(131)
	this->borderQuality = ((Float)0);
	HX_STACK_LINE(124)
	this->borderSize = ((Float)1);
	HX_STACK_LINE(119)
	this->borderColor = (int)-16777216;
	HX_STACK_LINE(114)
	this->borderStyle = ::haxegon::bitmapFont::TextBorderStyle_obj::NONE;
	HX_STACK_LINE(109)
	this->useTextColor = false;
	HX_STACK_LINE(104)
	this->textColor = (int)-1;
	HX_STACK_LINE(99)
	this->_tabSpaces = HX_HCSTRING("    ","\x00","\x38","\x3f","\x15");
	HX_STACK_LINE(98)
	this->numSpacesInTab = (int)4;
	HX_STACK_LINE(78)
	this->padding = (int)0;
	HX_STACK_LINE(73)
	this->autoSize = true;
	HX_STACK_LINE(67)
	this->wrapByWord = true;
	HX_STACK_LINE(61)
	this->wordWrap = true;
	HX_STACK_LINE(56)
	this->autoUpperCase = false;
	HX_STACK_LINE(51)
	this->letterSpacing = (int)0;
	HX_STACK_LINE(46)
	this->lineSpacing = (int)0;
	HX_STACK_LINE(41)
	this->alignment = HX_HCSTRING("left","\x07","\x08","\xb0","\x47");
	HX_STACK_LINE(36)
	this->_linesWidth = Array_obj< Float >::__new();
	HX_STACK_LINE(32)
	this->_lines = Array_obj< ::String >::__new();
	HX_STACK_LINE(27)
	this->text = HX_HCSTRING("","\x00","\x00","\x00","\x00");
	HX_STACK_LINE(211)
	super::__construct();
	HX_STACK_LINE(213)
	::openfl::geom::Point tmp = ::openfl::geom::Point_obj::__new((int)1,(int)1);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(213)
	this->shadowOffset = tmp;
	HX_STACK_LINE(216)
	bool tmp1 = (pixelSnapping == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(216)
	Dynamic tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(216)
	if ((tmp1)){
		HX_STACK_LINE(216)
		tmp2 = ((Dynamic)((int)1));
	}
	else{
		HX_STACK_LINE(216)
		tmp2 = pixelSnapping;
	}
	HX_STACK_LINE(216)
	pixelSnapping = tmp2;
	HX_STACK_LINE(217)
	int tmp3 = this->_fieldWidth;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(217)
	int tmp4 = this->_fieldHeight;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(217)
	::openfl::display::BitmapData tmp5 = ::openfl::display::BitmapData_obj::__new(tmp3,tmp4,true,(int)0);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(217)
	this->_bitmapData = tmp5;
	HX_STACK_LINE(218)
	::openfl::display::BitmapData tmp6 = this->_bitmapData;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(218)
	Dynamic tmp7 = pixelSnapping;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(218)
	bool tmp8 = smoothing;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(218)
	::openfl::display::Bitmap tmp9 = ::openfl::display::Bitmap_obj::__new(tmp6,tmp7,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(218)
	this->_bitmap = tmp9;
	HX_STACK_LINE(219)
	::openfl::display::Bitmap tmp10 = this->_bitmap;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(219)
	tmp10->smoothing = false;
	HX_STACK_LINE(220)
	::openfl::display::Bitmap tmp11 = this->_bitmap;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(220)
	this->addChild(tmp11);
	HX_STACK_LINE(221)
	::openfl::geom::Point tmp12 = ::openfl::geom::Point_obj::__new(null(),null());		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(221)
	this->_point = tmp12;
	HX_STACK_LINE(226)
	bool tmp13 = (font == null());		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(226)
	if ((tmp13)){
		HX_STACK_LINE(228)
		::haxegon::bitmapFont::BitmapFont tmp14 = ::haxegon::bitmapFont::BitmapFont_obj::getDefaultFont();		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(228)
		font = tmp14;
	}
	HX_STACK_LINE(231)
	::haxegon::bitmapFont::BitmapFont tmp14 = font;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(231)
	this->set_font(tmp14);
	HX_STACK_LINE(232)
	::String tmp15 = text;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(232)
	this->set_text(tmp15);
	HX_STACK_LINE(233)
	bool tmp16 = smoothing;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(233)
	this->set_smoothing(tmp16);
}
;
	return null();
}

//BitmapTextField_obj::~BitmapTextField_obj() { }

Dynamic BitmapTextField_obj::__CreateEmpty() { return  new BitmapTextField_obj; }
hx::ObjectPtr< BitmapTextField_obj > BitmapTextField_obj::__new(::haxegon::bitmapFont::BitmapFont font,::String __o_text,Dynamic pixelSnapping,hx::Null< bool >  __o_smoothing)
{  hx::ObjectPtr< BitmapTextField_obj > _result_ = new BitmapTextField_obj();
	_result_->__construct(font,__o_text,pixelSnapping,__o_smoothing);
	return _result_;}

Dynamic BitmapTextField_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< BitmapTextField_obj > _result_ = new BitmapTextField_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _result_;}

Void BitmapTextField_obj::dispose( ){
{
		HX_STACK_FRAME("haxegon.bitmapFont.BitmapTextField","dispose",0xadf55ead,"haxegon.bitmapFont.BitmapTextField.dispose","haxegon/bitmapFont/BitmapTextField.hx",240,0xab2b8d62)
		HX_STACK_THIS(this)
		HX_STACK_LINE(241)
		this->set_updateImmediately(false);
		HX_STACK_LINE(243)
		this->set_font(null());
		HX_STACK_LINE(244)
		this->set_text(null());
		HX_STACK_LINE(245)
		this->_lines = null();
		HX_STACK_LINE(246)
		this->_linesWidth = null();
		HX_STACK_LINE(247)
		this->shadowOffset = null();
		HX_STACK_LINE(250)
		this->_point = null();
		HX_STACK_LINE(252)
		::haxegon::bitmapFont::BitmapGlyphCollection tmp = this->textGlyphs;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(252)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(252)
		if ((tmp1)){
			HX_STACK_LINE(254)
			::haxegon::bitmapFont::BitmapGlyphCollection tmp2 = this->textGlyphs;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(254)
			tmp2->dispose();
		}
		HX_STACK_LINE(256)
		this->textGlyphs = null();
		HX_STACK_LINE(258)
		::haxegon::bitmapFont::BitmapGlyphCollection tmp2 = this->borderGlyphs;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(258)
		bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(258)
		if ((tmp3)){
			HX_STACK_LINE(260)
			::haxegon::bitmapFont::BitmapGlyphCollection tmp4 = this->borderGlyphs;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(260)
			tmp4->dispose();
		}
		HX_STACK_LINE(262)
		this->borderGlyphs = null();
		HX_STACK_LINE(264)
		::openfl::display::Bitmap tmp4 = this->_bitmap;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(264)
		bool tmp5 = (tmp4 != null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(264)
		if ((tmp5)){
			HX_STACK_LINE(266)
			::openfl::display::Bitmap tmp6 = this->_bitmap;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(266)
			this->removeChild(tmp6);
		}
		HX_STACK_LINE(268)
		this->_bitmap = null();
		HX_STACK_LINE(270)
		::openfl::display::BitmapData tmp6 = this->_bitmapData;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(270)
		bool tmp7 = (tmp6 != null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(270)
		if ((tmp7)){
			HX_STACK_LINE(272)
			::openfl::display::BitmapData tmp8 = this->_bitmapData;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(272)
			tmp8->dispose();
		}
		HX_STACK_LINE(274)
		this->_bitmapData = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BitmapTextField_obj,dispose,(void))

Void BitmapTextField_obj::forceGraphicUpdate( ){
{
		HX_STACK_FRAME("haxegon.bitmapFont.BitmapTextField","forceGraphicUpdate",0x9f332a98,"haxegon.bitmapFont.BitmapTextField.forceGraphicUpdate","haxegon/bitmapFont/BitmapTextField.hx",284,0xab2b8d62)
		HX_STACK_THIS(this)
		HX_STACK_LINE(285)
		this->_pendingGraphicChange = true;
		HX_STACK_LINE(286)
		{
			HX_STACK_LINE(286)
			bool tmp = this->_pendingTextGlyphsChange;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(286)
			if ((tmp)){
				HX_STACK_LINE(286)
				this->updateTextGlyphs();
			}
			HX_STACK_LINE(286)
			bool tmp1 = this->_pendingBorderGlyphsChange;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(286)
			if ((tmp1)){
				HX_STACK_LINE(286)
				this->updateBorderGlyphs();
			}
			HX_STACK_LINE(286)
			bool tmp2 = this->_pendingTextChange;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(286)
			if ((tmp2)){
				HX_STACK_LINE(286)
				this->updateText();
				HX_STACK_LINE(286)
				this->_pendingGraphicChange = true;
			}
			HX_STACK_LINE(286)
			bool tmp3 = this->_pendingGraphicChange;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(286)
			if ((tmp3)){
				HX_STACK_LINE(286)
				this->updateGraphic();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BitmapTextField_obj,forceGraphicUpdate,(void))

Void BitmapTextField_obj::checkImmediateChanges( ){
{
		HX_STACK_FRAME("haxegon.bitmapFont.BitmapTextField","checkImmediateChanges",0x13143488,"haxegon.bitmapFont.BitmapTextField.checkImmediateChanges","haxegon/bitmapFont/BitmapTextField.hx",290,0xab2b8d62)
		HX_STACK_THIS(this)
		HX_STACK_LINE(291)
		bool tmp = this->updateImmediately;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(291)
		if ((tmp)){
			HX_STACK_LINE(293)
			bool tmp1 = this->_pendingTextGlyphsChange;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(293)
			if ((tmp1)){
				HX_STACK_LINE(293)
				this->updateTextGlyphs();
			}
			HX_STACK_LINE(293)
			bool tmp2 = this->_pendingBorderGlyphsChange;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(293)
			if ((tmp2)){
				HX_STACK_LINE(293)
				this->updateBorderGlyphs();
			}
			HX_STACK_LINE(293)
			bool tmp3 = this->_pendingTextChange;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(293)
			if ((tmp3)){
				HX_STACK_LINE(293)
				this->updateText();
				HX_STACK_LINE(293)
				this->_pendingGraphicChange = true;
			}
			HX_STACK_LINE(293)
			bool tmp4 = this->_pendingGraphicChange;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(293)
			if ((tmp4)){
				HX_STACK_LINE(293)
				this->updateGraphic();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BitmapTextField_obj,checkImmediateChanges,(void))

Void BitmapTextField_obj::checkPendingChanges( ){
{
		HX_STACK_FRAME("haxegon.bitmapFont.BitmapTextField","checkPendingChanges",0x8198bf62,"haxegon.bitmapFont.BitmapTextField.checkPendingChanges","haxegon/bitmapFont/BitmapTextField.hx",298,0xab2b8d62)
		HX_STACK_THIS(this)
		HX_STACK_LINE(299)
		bool tmp = this->_pendingTextGlyphsChange;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(299)
		if ((tmp)){
			HX_STACK_LINE(301)
			this->updateTextGlyphs();
		}
		HX_STACK_LINE(304)
		bool tmp1 = this->_pendingBorderGlyphsChange;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(304)
		if ((tmp1)){
			HX_STACK_LINE(306)
			this->updateBorderGlyphs();
		}
		HX_STACK_LINE(309)
		bool tmp2 = this->_pendingTextChange;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(309)
		if ((tmp2)){
			HX_STACK_LINE(311)
			this->updateText();
			HX_STACK_LINE(312)
			this->_pendingGraphicChange = true;
		}
		HX_STACK_LINE(315)
		bool tmp3 = this->_pendingGraphicChange;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(315)
		if ((tmp3)){
			HX_STACK_LINE(317)
			this->updateGraphic();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BitmapTextField_obj,checkPendingChanges,(void))

int BitmapTextField_obj::set_textColor( int value){
	HX_STACK_FRAME("haxegon.bitmapFont.BitmapTextField","set_textColor",0x2d8393e7,"haxegon.bitmapFont.BitmapTextField.set_textColor","haxegon/bitmapFont/BitmapTextField.hx",322,0xab2b8d62)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(323)
	int tmp = this->textColor;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(323)
	int tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(323)
	int tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(323)
	bool tmp3 = (tmp1 != tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(323)
	if ((tmp3)){
		HX_STACK_LINE(325)
		this->textColor = value;
		HX_STACK_LINE(326)
		this->_pendingTextGlyphsChange = true;
		HX_STACK_LINE(327)
		{
			HX_STACK_LINE(327)
			bool tmp4 = this->updateImmediately;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(327)
			if ((tmp4)){
				HX_STACK_LINE(327)
				bool tmp5 = this->_pendingTextGlyphsChange;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(327)
				if ((tmp5)){
					HX_STACK_LINE(327)
					this->updateTextGlyphs();
				}
				HX_STACK_LINE(327)
				bool tmp6 = this->_pendingBorderGlyphsChange;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(327)
				if ((tmp6)){
					HX_STACK_LINE(327)
					this->updateBorderGlyphs();
				}
				HX_STACK_LINE(327)
				bool tmp7 = this->_pendingTextChange;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(327)
				if ((tmp7)){
					HX_STACK_LINE(327)
					this->updateText();
					HX_STACK_LINE(327)
					this->_pendingGraphicChange = true;
				}
				HX_STACK_LINE(327)
				bool tmp8 = this->_pendingGraphicChange;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(327)
				if ((tmp8)){
					HX_STACK_LINE(327)
					this->updateGraphic();
				}
			}
		}
	}
	HX_STACK_LINE(330)
	int tmp4 = value;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(330)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapTextField_obj,set_textColor,return )

bool BitmapTextField_obj::set_useTextColor( bool value){
	HX_STACK_FRAME("haxegon.bitmapFont.BitmapTextField","set_useTextColor",0x3e243e5e,"haxegon.bitmapFont.BitmapTextField.set_useTextColor","haxegon/bitmapFont/BitmapTextField.hx",334,0xab2b8d62)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(335)
	bool tmp = this->useTextColor;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(335)
	bool tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(335)
	bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(335)
	if ((tmp2)){
		HX_STACK_LINE(337)
		this->useTextColor = value;
		HX_STACK_LINE(338)
		this->_pendingTextGlyphsChange = true;
		HX_STACK_LINE(339)
		{
			HX_STACK_LINE(339)
			bool tmp3 = this->updateImmediately;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(339)
			if ((tmp3)){
				HX_STACK_LINE(339)
				bool tmp4 = this->_pendingTextGlyphsChange;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(339)
				if ((tmp4)){
					HX_STACK_LINE(339)
					this->updateTextGlyphs();
				}
				HX_STACK_LINE(339)
				bool tmp5 = this->_pendingBorderGlyphsChange;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(339)
				if ((tmp5)){
					HX_STACK_LINE(339)
					this->updateBorderGlyphs();
				}
				HX_STACK_LINE(339)
				bool tmp6 = this->_pendingTextChange;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(339)
				if ((tmp6)){
					HX_STACK_LINE(339)
					this->updateText();
					HX_STACK_LINE(339)
					this->_pendingGraphicChange = true;
				}
				HX_STACK_LINE(339)
				bool tmp7 = this->_pendingGraphicChange;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(339)
				if ((tmp7)){
					HX_STACK_LINE(339)
					this->updateGraphic();
				}
			}
		}
	}
	HX_STACK_LINE(342)
	bool tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(342)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapTextField_obj,set_useTextColor,return )

::String BitmapTextField_obj::set_text( ::String value){
	HX_STACK_FRAME("haxegon.bitmapFont.BitmapTextField","set_text",0xdc2b4fdc,"haxegon.bitmapFont.BitmapTextField.set_text","haxegon/bitmapFont/BitmapTextField.hx",346,0xab2b8d62)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(347)
	::String tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(347)
	::String tmp1 = this->text;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(347)
	bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(347)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(347)
	if ((tmp2)){
		HX_STACK_LINE(347)
		tmp3 = (value != null());
	}
	else{
		HX_STACK_LINE(347)
		tmp3 = false;
	}
	HX_STACK_LINE(347)
	if ((tmp3)){
		HX_STACK_LINE(349)
		this->text = value;
		HX_STACK_LINE(350)
		this->_pendingTextChange = true;
		HX_STACK_LINE(351)
		{
			HX_STACK_LINE(351)
			bool tmp4 = this->updateImmediately;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(351)
			if ((tmp4)){
				HX_STACK_LINE(351)
				bool tmp5 = this->_pendingTextGlyphsChange;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(351)
				if ((tmp5)){
					HX_STACK_LINE(351)
					this->updateTextGlyphs();
				}
				HX_STACK_LINE(351)
				bool tmp6 = this->_pendingBorderGlyphsChange;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(351)
				if ((tmp6)){
					HX_STACK_LINE(351)
					this->updateBorderGlyphs();
				}
				HX_STACK_LINE(351)
				bool tmp7 = this->_pendingTextChange;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(351)
				if ((tmp7)){
					HX_STACK_LINE(351)
					this->updateText();
					HX_STACK_LINE(351)
					this->_pendingGraphicChange = true;
				}
				HX_STACK_LINE(351)
				bool tmp8 = this->_pendingGraphicChange;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(351)
				if ((tmp8)){
					HX_STACK_LINE(351)
					this->updateGraphic();
				}
			}
		}
	}
	HX_STACK_LINE(354)
	::String tmp4 = value;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(354)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapTextField_obj,set_text,return )

Void BitmapTextField_obj::updateText( ){
{
		HX_STACK_FRAME("haxegon.bitmapFont.BitmapTextField","updateText",0xf2a59608,"haxegon.bitmapFont.BitmapTextField.updateText","haxegon/bitmapFont/BitmapTextField.hx",358,0xab2b8d62)
		HX_STACK_THIS(this)
		HX_STACK_LINE(359)
		bool tmp = this->autoUpperCase;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(359)
		::String tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(359)
		if ((tmp)){
			HX_STACK_LINE(359)
			::String tmp2 = this->text;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(359)
			tmp1 = tmp2.toUpperCase();
		}
		else{
			HX_STACK_LINE(359)
			tmp1 = this->text;
		}
		HX_STACK_LINE(359)
		::String tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(361)
		this->_lines = tmp2.split(HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));
		HX_STACK_LINE(363)
		bool tmp3 = this->autoSize;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(363)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(363)
		if ((tmp4)){
			HX_STACK_LINE(365)
			bool tmp5 = this->wordWrap;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(365)
			if ((tmp5)){
				HX_STACK_LINE(367)
				this->wrap();
			}
			else{
				HX_STACK_LINE(371)
				this->cutLines();
			}
		}
		HX_STACK_LINE(375)
		bool tmp5 = this->multiLine;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(375)
		bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(375)
		if ((tmp6)){
			HX_STACK_LINE(377)
			::String tmp7 = this->_lines->__get((int)0);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(377)
			this->_lines = Array_obj< ::String >::__new().Add(tmp7);
		}
		HX_STACK_LINE(380)
		this->_pendingTextChange = false;
		HX_STACK_LINE(381)
		this->_pendingGraphicChange = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BitmapTextField_obj,updateText,(void))

Void BitmapTextField_obj::computeTextSize( ){
{
		HX_STACK_FRAME("haxegon.bitmapFont.BitmapTextField","computeTextSize",0xa3ba62b3,"haxegon.bitmapFont.BitmapTextField.computeTextSize","haxegon/bitmapFont/BitmapTextField.hx",388,0xab2b8d62)
		HX_STACK_THIS(this)
		HX_STACK_LINE(389)
		int tmp = this->_fieldWidth;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(389)
		int tmp1 = ::Math_obj::ceil(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(389)
		int txtWidth = tmp1;		HX_STACK_VAR(txtWidth,"txtWidth");
		HX_STACK_LINE(390)
		Float tmp2 = this->get_textHeight();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(390)
		int tmp3 = ::Math_obj::ceil(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(390)
		int tmp4 = this->padding;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(390)
		int tmp5 = ((int)2 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(390)
		int tmp6 = (tmp3 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(390)
		int txtHeight = tmp6;		HX_STACK_VAR(txtHeight,"txtHeight");
		HX_STACK_LINE(392)
		Float tmp7 = this->get_textWidth();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(392)
		int tmp8 = ::Math_obj::ceil(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(392)
		int tw = tmp8;		HX_STACK_VAR(tw,"tw");
		HX_STACK_LINE(394)
		bool tmp9 = this->autoSize;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(394)
		if ((tmp9)){
			HX_STACK_LINE(396)
			int tmp10 = tw;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(396)
			int tmp11 = this->padding;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(396)
			int tmp12 = ((int)2 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(396)
			int tmp13 = (tmp10 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(396)
			txtWidth = tmp13;
		}
		else{
			HX_STACK_LINE(400)
			int tmp10 = this->_fieldWidth;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(400)
			int tmp11 = ::Math_obj::ceil(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(400)
			txtWidth = tmp11;
		}
		HX_STACK_LINE(403)
		bool tmp10 = (txtWidth == (int)0);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(403)
		int tmp11;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(403)
		if ((tmp10)){
			HX_STACK_LINE(403)
			tmp11 = (int)1;
		}
		else{
			HX_STACK_LINE(403)
			tmp11 = txtWidth;
		}
		HX_STACK_LINE(403)
		this->_fieldWidth = tmp11;
		HX_STACK_LINE(404)
		bool tmp12 = (txtHeight == (int)0);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(404)
		int tmp13;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(404)
		if ((tmp12)){
			HX_STACK_LINE(404)
			tmp13 = (int)1;
		}
		else{
			HX_STACK_LINE(404)
			tmp13 = txtHeight;
		}
		HX_STACK_LINE(404)
		this->_fieldHeight = tmp13;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BitmapTextField_obj,computeTextSize,(void))

Float BitmapTextField_obj::getLineWidth( int lineIndex){
	HX_STACK_FRAME("haxegon.bitmapFont.BitmapTextField","getLineWidth",0x6025c52e,"haxegon.bitmapFont.BitmapTextField.getLineWidth","haxegon/bitmapFont/BitmapTextField.hx",414,0xab2b8d62)
	HX_STACK_THIS(this)
	HX_STACK_ARG(lineIndex,"lineIndex")
	HX_STACK_LINE(415)
	bool tmp = (lineIndex < (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(415)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(415)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(415)
	if ((tmp1)){
		HX_STACK_LINE(415)
		int tmp3 = lineIndex;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(415)
		int tmp4 = this->_lines->length;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(415)
		int tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(415)
		tmp2 = (tmp3 >= tmp5);
	}
	else{
		HX_STACK_LINE(415)
		tmp2 = true;
	}
	HX_STACK_LINE(415)
	if ((tmp2)){
		HX_STACK_LINE(417)
		return (int)0;
	}
	HX_STACK_LINE(420)
	::String tmp3 = this->_lines->__get(lineIndex);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(420)
	Float tmp4 = this->getStringWidth(tmp3,null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(420)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapTextField_obj,getLineWidth,return )

Float BitmapTextField_obj::getStringWidth( ::String str,hx::Null< bool >  __o_fordrawing){
bool fordrawing = __o_fordrawing.Default(true);
	HX_STACK_FRAME("haxegon.bitmapFont.BitmapTextField","getStringWidth",0x6f14da31,"haxegon.bitmapFont.BitmapTextField.getStringWidth","haxegon/bitmapFont/BitmapTextField.hx",430,0xab2b8d62)
	HX_STACK_THIS(this)
	HX_STACK_ARG(str,"str")
	HX_STACK_ARG(fordrawing,"fordrawing")
{
		HX_STACK_LINE(431)
		::haxegon::bitmapFont::BitmapFont tmp = this->font;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(431)
		int tmp1 = tmp->spaceWidth;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(431)
		Float tmp2 = this->size;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(431)
		Float tmp3 = (tmp1 * tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(431)
		int tmp4 = ::Math_obj::ceil(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(431)
		Float spaceWidth = tmp4;		HX_STACK_VAR(spaceWidth,"spaceWidth");
		HX_STACK_LINE(432)
		Float tmp5 = spaceWidth;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(432)
		int tmp6 = this->numSpacesInTab;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(432)
		Float tmp7 = (tmp5 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(432)
		int tmp8 = ::Math_obj::ceil(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(432)
		Float tabWidth = tmp8;		HX_STACK_VAR(tabWidth,"tabWidth");
		HX_STACK_LINE(434)
		::String tmp9 = str;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(434)
		int tmp10 = ::haxe::Utf8_obj::length(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(434)
		int lineLength = tmp10;		HX_STACK_VAR(lineLength,"lineLength");
		HX_STACK_LINE(435)
		::haxegon::bitmapFont::BitmapFont tmp11 = this->font;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(435)
		int tmp12 = tmp11->minOffsetX;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(435)
		Float tmp13 = ::Math_obj::abs(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(435)
		Float tmp14 = this->size;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(435)
		Float tmp15 = (tmp13 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(435)
		int tmp16 = ::Math_obj::ceil(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(435)
		Float lineWidth = tmp16;		HX_STACK_VAR(lineWidth,"lineWidth");
		HX_STACK_LINE(436)
		bool tmp17 = fordrawing;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(436)
		bool tmp18 = !(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(436)
		if ((tmp18)){
			HX_STACK_LINE(436)
			lineWidth = (int)0;
		}
		HX_STACK_LINE(438)
		int charCode;		HX_STACK_VAR(charCode,"charCode");
		HX_STACK_LINE(439)
		Float charWidth = (int)0;		HX_STACK_VAR(charWidth,"charWidth");
		HX_STACK_LINE(441)
		int widthPlusOffset = (int)0;		HX_STACK_VAR(widthPlusOffset,"widthPlusOffset");
		HX_STACK_LINE(442)
		::haxegon::bitmapFont::BitmapGlyphFrame glyphFrame;		HX_STACK_VAR(glyphFrame,"glyphFrame");
		HX_STACK_LINE(444)
		{
			HX_STACK_LINE(444)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(444)
			while((true)){
				HX_STACK_LINE(444)
				bool tmp19 = (_g < lineLength);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(444)
				bool tmp20 = !(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(444)
				if ((tmp20)){
					HX_STACK_LINE(444)
					break;
				}
				HX_STACK_LINE(444)
				int tmp21 = (_g)++;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(444)
				int c = tmp21;		HX_STACK_VAR(c,"c");
				HX_STACK_LINE(446)
				::String tmp22 = str;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(446)
				int tmp23 = c;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(446)
				int tmp24 = ::haxe::Utf8_obj::charCodeAt(tmp22,tmp23);		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(446)
				charCode = tmp24;
				HX_STACK_LINE(448)
				bool tmp25 = (charCode == (int)32);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(448)
				if ((tmp25)){
					HX_STACK_LINE(450)
					charWidth = spaceWidth;
				}
				else{
					HX_STACK_LINE(452)
					bool tmp26 = (charCode == (int)9);		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(452)
					if ((tmp26)){
						HX_STACK_LINE(454)
						charWidth = tabWidth;
					}
					else{
						HX_STACK_LINE(458)
						::haxegon::bitmapFont::BitmapFont tmp27 = this->font;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(458)
						int tmp28 = charCode;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(458)
						bool tmp29 = tmp27->glyphs->exists(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(458)
						if ((tmp29)){
							HX_STACK_LINE(460)
							::haxegon::bitmapFont::BitmapFont tmp30 = this->font;		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(460)
							int tmp31 = charCode;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(460)
							::haxegon::bitmapFont::BitmapGlyphFrame tmp32 = tmp30->glyphs->get(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(460)
							glyphFrame = tmp32;
							HX_STACK_LINE(461)
							int tmp33 = glyphFrame->xadvance;		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(461)
							Float tmp34 = this->size;		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(461)
							Float tmp35 = (tmp33 * tmp34);		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(461)
							int tmp36 = ::Math_obj::ceil(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(461)
							charWidth = tmp36;
							HX_STACK_LINE(463)
							int tmp37 = c;		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(463)
							int tmp38 = (lineLength - (int)1);		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(463)
							bool tmp39 = (tmp37 == tmp38);		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(463)
							if ((tmp39)){
								HX_STACK_LINE(465)
								int tmp40 = glyphFrame->xoffset;		HX_STACK_VAR(tmp40,"tmp40");
								HX_STACK_LINE(465)
								::openfl::display::BitmapData tmp41 = glyphFrame->get_bitmap();		HX_STACK_VAR(tmp41,"tmp41");
								HX_STACK_LINE(465)
								int tmp42 = tmp41->width;		HX_STACK_VAR(tmp42,"tmp42");
								HX_STACK_LINE(465)
								int tmp43 = (tmp40 + tmp42);		HX_STACK_VAR(tmp43,"tmp43");
								HX_STACK_LINE(465)
								Float tmp44 = this->size;		HX_STACK_VAR(tmp44,"tmp44");
								HX_STACK_LINE(465)
								Float tmp45 = (tmp43 * tmp44);		HX_STACK_VAR(tmp45,"tmp45");
								HX_STACK_LINE(465)
								int tmp46 = ::Math_obj::ceil(tmp45);		HX_STACK_VAR(tmp46,"tmp46");
								HX_STACK_LINE(465)
								widthPlusOffset = tmp46;
								HX_STACK_LINE(466)
								bool tmp47 = (widthPlusOffset > charWidth);		HX_STACK_VAR(tmp47,"tmp47");
								HX_STACK_LINE(466)
								if ((tmp47)){
									HX_STACK_LINE(468)
									charWidth = widthPlusOffset;
								}
							}
						}
						else{
							HX_STACK_LINE(474)
							charWidth = (int)0;
						}
					}
				}
				HX_STACK_LINE(478)
				Float tmp26 = charWidth;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(478)
				int tmp27 = this->letterSpacing;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(478)
				Float tmp28 = (tmp26 + tmp27);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(478)
				hx::AddEq(lineWidth,tmp28);
			}
		}
		HX_STACK_LINE(481)
		bool tmp19 = (lineLength > (int)0);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(481)
		if ((tmp19)){
			HX_STACK_LINE(483)
			int tmp20 = this->letterSpacing;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(483)
			hx::SubEq(lineWidth,tmp20);
		}
		HX_STACK_LINE(486)
		Float tmp20 = lineWidth;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(486)
		return tmp20;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(BitmapTextField_obj,getStringWidth,return )

Void BitmapTextField_obj::cutLines( ){
{
		HX_STACK_FRAME("haxegon.bitmapFont.BitmapTextField","cutLines",0xea7fff4f,"haxegon.bitmapFont.BitmapTextField.cutLines","haxegon/bitmapFont/BitmapTextField.hx",493,0xab2b8d62)
		HX_STACK_THIS(this)
		HX_STACK_LINE(494)
		Array< ::String > newLines = Array_obj< ::String >::__new();		HX_STACK_VAR(newLines,"newLines");
		HX_STACK_LINE(496)
		int lineLength;		HX_STACK_VAR(lineLength,"lineLength");
		HX_STACK_LINE(498)
		int c;		HX_STACK_VAR(c,"c");
		HX_STACK_LINE(499)
		::String _char;		HX_STACK_VAR(_char,"char");
		HX_STACK_LINE(500)
		int charCode;		HX_STACK_VAR(charCode,"charCode");
		HX_STACK_LINE(501)
		Float charWidth = (int)0;		HX_STACK_VAR(charWidth,"charWidth");
		HX_STACK_LINE(503)
		::haxe::Utf8 subLine;		HX_STACK_VAR(subLine,"subLine");
		HX_STACK_LINE(504)
		Float subLineWidth;		HX_STACK_VAR(subLineWidth,"subLineWidth");
		HX_STACK_LINE(506)
		::haxegon::bitmapFont::BitmapFont tmp = this->font;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(506)
		int tmp1 = tmp->spaceWidth;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(506)
		Float tmp2 = this->size;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(506)
		Float tmp3 = (tmp1 * tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(506)
		Float spaceWidth = tmp3;		HX_STACK_VAR(spaceWidth,"spaceWidth");
		HX_STACK_LINE(507)
		Float tmp4 = spaceWidth;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(507)
		int tmp5 = this->numSpacesInTab;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(507)
		Float tmp6 = (tmp4 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(507)
		Float tabWidth = tmp6;		HX_STACK_VAR(tabWidth,"tabWidth");
		HX_STACK_LINE(509)
		::haxegon::bitmapFont::BitmapFont tmp7 = this->font;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(509)
		int tmp8 = tmp7->minOffsetX;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(509)
		Float tmp9 = ::Math_obj::abs(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(509)
		Float tmp10 = this->size;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(509)
		Float tmp11 = (tmp9 * tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(509)
		Float startX = tmp11;		HX_STACK_VAR(startX,"startX");
		HX_STACK_LINE(511)
		{
			HX_STACK_LINE(511)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(511)
			Array< ::String > _g1 = this->_lines;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(511)
			while((true)){
				HX_STACK_LINE(511)
				bool tmp12 = (_g < _g1->length);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(511)
				bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(511)
				if ((tmp13)){
					HX_STACK_LINE(511)
					break;
				}
				HX_STACK_LINE(511)
				::String tmp14 = _g1->__get(_g);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(511)
				::String line = tmp14;		HX_STACK_VAR(line,"line");
				HX_STACK_LINE(511)
				++(_g);
				HX_STACK_LINE(513)
				::String tmp15 = line;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(513)
				int tmp16 = ::haxe::Utf8_obj::length(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(513)
				lineLength = tmp16;
				HX_STACK_LINE(514)
				::haxe::Utf8 tmp17 = ::haxe::Utf8_obj::__new(null());		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(514)
				subLine = tmp17;
				HX_STACK_LINE(515)
				subLineWidth = startX;
				HX_STACK_LINE(517)
				c = (int)0;
				HX_STACK_LINE(518)
				while((true)){
					HX_STACK_LINE(518)
					bool tmp18 = (c < lineLength);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(518)
					bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(518)
					if ((tmp19)){
						HX_STACK_LINE(518)
						break;
					}
					HX_STACK_LINE(520)
					::String tmp20 = line;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(520)
					int tmp21 = c;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(520)
					int tmp22 = ::haxe::Utf8_obj::charCodeAt(tmp20,tmp21);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(520)
					charCode = tmp22;
					HX_STACK_LINE(522)
					bool tmp23 = (charCode == (int)32);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(522)
					if ((tmp23)){
						HX_STACK_LINE(524)
						charWidth = spaceWidth;
					}
					else{
						HX_STACK_LINE(526)
						bool tmp24 = (charCode == (int)9);		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(526)
						if ((tmp24)){
							HX_STACK_LINE(528)
							charWidth = tabWidth;
						}
						else{
							HX_STACK_LINE(532)
							::haxegon::bitmapFont::BitmapFont tmp25 = this->font;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(532)
							int tmp26 = charCode;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(532)
							bool tmp27 = tmp25->glyphs->exists(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(532)
							Float tmp28;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(532)
							if ((tmp27)){
								HX_STACK_LINE(532)
								::haxegon::bitmapFont::BitmapFont tmp29 = this->font;		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(532)
								int tmp30 = charCode;		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(532)
								::haxegon::bitmapFont::BitmapGlyphFrame tmp31 = tmp29->glyphs->get(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(532)
								int tmp32 = tmp31->xadvance;		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(532)
								Float tmp33 = this->size;		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(532)
								tmp28 = (tmp32 * tmp33);
							}
							else{
								HX_STACK_LINE(532)
								tmp28 = (int)0;
							}
							HX_STACK_LINE(532)
							charWidth = tmp28;
						}
					}
					HX_STACK_LINE(534)
					int tmp24 = this->letterSpacing;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(534)
					hx::AddEq(charWidth,tmp24);
					HX_STACK_LINE(536)
					Float tmp25 = (subLineWidth + charWidth);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(536)
					int tmp26 = this->_fieldWidth;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(536)
					int tmp27 = this->padding;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(536)
					int tmp28 = ((int)2 * tmp27);		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(536)
					int tmp29 = (tmp26 - tmp28);		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(536)
					bool tmp30 = (tmp25 > tmp29);		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(536)
					if ((tmp30)){
						HX_STACK_LINE(538)
						int tmp31 = charCode;		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(538)
						subLine->addChar(tmp31);
						HX_STACK_LINE(539)
						::String tmp32 = subLine->toString();		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(539)
						newLines->push(tmp32);
						HX_STACK_LINE(540)
						::haxe::Utf8 tmp33 = ::haxe::Utf8_obj::__new(null());		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(540)
						subLine = tmp33;
						HX_STACK_LINE(541)
						subLineWidth = startX;
						HX_STACK_LINE(542)
						c = lineLength;
					}
					else{
						HX_STACK_LINE(546)
						int tmp31 = charCode;		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(546)
						subLine->addChar(tmp31);
						HX_STACK_LINE(547)
						hx::AddEq(subLineWidth,charWidth);
					}
					HX_STACK_LINE(550)
					(c)++;
				}
			}
		}
		HX_STACK_LINE(554)
		this->_lines = newLines;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BitmapTextField_obj,cutLines,(void))

Void BitmapTextField_obj::wrap( ){
{
		HX_STACK_FRAME("haxegon.bitmapFont.BitmapTextField","wrap",0x401526fc,"haxegon.bitmapFont.BitmapTextField.wrap","haxegon/bitmapFont/BitmapTextField.hx",562,0xab2b8d62)
		HX_STACK_THIS(this)
		HX_STACK_LINE(564)
		Array< ::String > newLines = Array_obj< ::String >::__new();		HX_STACK_VAR(newLines,"newLines");
		HX_STACK_LINE(565)
		Array< ::String > words;		HX_STACK_VAR(words,"words");
		HX_STACK_LINE(567)
		{
			HX_STACK_LINE(567)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(567)
			Array< ::String > _g1 = this->_lines;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(567)
			while((true)){
				HX_STACK_LINE(567)
				bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(567)
				bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(567)
				if ((tmp1)){
					HX_STACK_LINE(567)
					break;
				}
				HX_STACK_LINE(567)
				::String tmp2 = _g1->__get(_g);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(567)
				::String line = tmp2;		HX_STACK_VAR(line,"line");
				HX_STACK_LINE(567)
				++(_g);
				HX_STACK_LINE(569)
				words = Array_obj< ::String >::__new();
				HX_STACK_LINE(571)
				::String tmp3 = line;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(571)
				this->splitLineIntoWords(tmp3,words);
				HX_STACK_LINE(573)
				bool tmp4 = this->wrapByWord;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(573)
				if ((tmp4)){
					HX_STACK_LINE(575)
					this->wrapLineByWord(words,newLines);
				}
				else{
					HX_STACK_LINE(579)
					this->wrapLineByCharacter(words,newLines);
				}
			}
		}
		HX_STACK_LINE(583)
		this->_lines = newLines;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BitmapTextField_obj,wrap,(void))

Void BitmapTextField_obj::splitLineIntoWords( ::String line,Array< ::String > words){
{
		HX_STACK_FRAME("haxegon.bitmapFont.BitmapTextField","splitLineIntoWords",0xfe89258d,"haxegon.bitmapFont.BitmapTextField.splitLineIntoWords","haxegon/bitmapFont/BitmapTextField.hx",593,0xab2b8d62)
		HX_STACK_THIS(this)
		HX_STACK_ARG(line,"line")
		HX_STACK_ARG(words,"words")
		HX_STACK_LINE(594)
		::String word = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(word,"word");
		HX_STACK_LINE(595)
		::haxe::Utf8 tmp = ::haxe::Utf8_obj::__new(null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(595)
		::haxe::Utf8 wordUtf8 = tmp;		HX_STACK_VAR(wordUtf8,"wordUtf8");
		HX_STACK_LINE(596)
		bool isSpaceWord = false;		HX_STACK_VAR(isSpaceWord,"isSpaceWord");
		HX_STACK_LINE(597)
		::String tmp1 = line;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(597)
		int tmp2 = ::haxe::Utf8_obj::length(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(597)
		int lineLength = tmp2;		HX_STACK_VAR(lineLength,"lineLength");
		HX_STACK_LINE(599)
		int tmp3 = ::haxe::Utf8_obj::charCodeAt(HX_HCSTRING("-","\x2d","\x00","\x00","\x00"),(int)0);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(599)
		int hyphenCode = tmp3;		HX_STACK_VAR(hyphenCode,"hyphenCode");
		HX_STACK_LINE(601)
		int c = (int)0;		HX_STACK_VAR(c,"c");
		HX_STACK_LINE(602)
		int charCode;		HX_STACK_VAR(charCode,"charCode");
		HX_STACK_LINE(603)
		::haxe::Utf8 charUtf8;		HX_STACK_VAR(charUtf8,"charUtf8");
		HX_STACK_LINE(605)
		while((true)){
			HX_STACK_LINE(605)
			bool tmp4 = (c < lineLength);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(605)
			bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(605)
			if ((tmp5)){
				HX_STACK_LINE(605)
				break;
			}
			HX_STACK_LINE(607)
			::String tmp6 = line;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(607)
			int tmp7 = c;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(607)
			int tmp8 = ::haxe::Utf8_obj::charCodeAt(tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(607)
			charCode = tmp8;
			HX_STACK_LINE(608)
			::String tmp9 = wordUtf8->toString();		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(608)
			word = tmp9;
			HX_STACK_LINE(610)
			bool tmp10 = (charCode == (int)32);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(610)
			bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(610)
			bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(610)
			if ((tmp11)){
				HX_STACK_LINE(610)
				tmp12 = (charCode == (int)9);
			}
			else{
				HX_STACK_LINE(610)
				tmp12 = true;
			}
			HX_STACK_LINE(610)
			if ((tmp12)){
				HX_STACK_LINE(612)
				bool tmp13 = isSpaceWord;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(612)
				bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(612)
				if ((tmp14)){
					HX_STACK_LINE(614)
					isSpaceWord = true;
					HX_STACK_LINE(616)
					bool tmp15 = (word != HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(616)
					if ((tmp15)){
						HX_STACK_LINE(618)
						::String tmp16 = word;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(618)
						words->push(tmp16);
						HX_STACK_LINE(619)
						::haxe::Utf8 tmp17 = ::haxe::Utf8_obj::__new(null());		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(619)
						wordUtf8 = tmp17;
					}
				}
				HX_STACK_LINE(623)
				int tmp15 = charCode;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(623)
				wordUtf8->addChar(tmp15);
			}
			else{
				HX_STACK_LINE(625)
				bool tmp13 = (charCode == hyphenCode);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(625)
				if ((tmp13)){
					HX_STACK_LINE(627)
					bool tmp14 = isSpaceWord;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(627)
					bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(627)
					if ((tmp14)){
						HX_STACK_LINE(627)
						tmp15 = (word != HX_HCSTRING("","\x00","\x00","\x00","\x00"));
					}
					else{
						HX_STACK_LINE(627)
						tmp15 = false;
					}
					HX_STACK_LINE(627)
					if ((tmp15)){
						HX_STACK_LINE(629)
						isSpaceWord = false;
						HX_STACK_LINE(630)
						::String tmp16 = word;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(630)
						words->push(tmp16);
						HX_STACK_LINE(631)
						words->push(HX_HCSTRING("-","\x2d","\x00","\x00","\x00"));
					}
					else{
						HX_STACK_LINE(633)
						bool tmp16 = (isSpaceWord == false);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(633)
						if ((tmp16)){
							HX_STACK_LINE(635)
							::haxe::Utf8 tmp17 = ::haxe::Utf8_obj::__new(null());		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(635)
							charUtf8 = tmp17;
							HX_STACK_LINE(636)
							int tmp18 = charCode;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(636)
							charUtf8->addChar(tmp18);
							HX_STACK_LINE(637)
							::String tmp19 = word;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(637)
							::String tmp20 = charUtf8->toString();		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(637)
							::String tmp21 = (tmp19 + tmp20);		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(637)
							words->push(tmp21);
						}
					}
					HX_STACK_LINE(640)
					::haxe::Utf8 tmp16 = ::haxe::Utf8_obj::__new(null());		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(640)
					wordUtf8 = tmp16;
				}
				else{
					HX_STACK_LINE(644)
					bool tmp14 = isSpaceWord;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(644)
					bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(644)
					if ((tmp14)){
						HX_STACK_LINE(644)
						tmp15 = (word != HX_HCSTRING("","\x00","\x00","\x00","\x00"));
					}
					else{
						HX_STACK_LINE(644)
						tmp15 = false;
					}
					HX_STACK_LINE(644)
					if ((tmp15)){
						HX_STACK_LINE(646)
						isSpaceWord = false;
						HX_STACK_LINE(647)
						::String tmp16 = word;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(647)
						words->push(tmp16);
						HX_STACK_LINE(648)
						::haxe::Utf8 tmp17 = ::haxe::Utf8_obj::__new(null());		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(648)
						wordUtf8 = tmp17;
					}
					HX_STACK_LINE(651)
					int tmp16 = charCode;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(651)
					wordUtf8->addChar(tmp16);
				}
			}
			HX_STACK_LINE(654)
			(c)++;
		}
		HX_STACK_LINE(657)
		::String tmp4 = wordUtf8->toString();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(657)
		word = tmp4;
		HX_STACK_LINE(658)
		bool tmp5 = (word != HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(658)
		if ((tmp5)){
			HX_STACK_LINE(658)
			::String tmp6 = word;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(658)
			words->push(tmp6);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(BitmapTextField_obj,splitLineIntoWords,(void))

Void BitmapTextField_obj::wrapLineByWord( Array< ::String > words,Array< ::String > newLines){
{
		HX_STACK_FRAME("haxegon.bitmapFont.BitmapTextField","wrapLineByWord",0xcad6f471,"haxegon.bitmapFont.BitmapTextField.wrapLineByWord","haxegon/bitmapFont/BitmapTextField.hx",668,0xab2b8d62)
		HX_STACK_THIS(this)
		HX_STACK_ARG(words,"words")
		HX_STACK_ARG(newLines,"newLines")
		HX_STACK_LINE(669)
		int numWords = words->length;		HX_STACK_VAR(numWords,"numWords");
		HX_STACK_LINE(670)
		int w;		HX_STACK_VAR(w,"w");
		HX_STACK_LINE(671)
		::String word;		HX_STACK_VAR(word,"word");
		HX_STACK_LINE(672)
		Float wordWidth;		HX_STACK_VAR(wordWidth,"wordWidth");
		HX_STACK_LINE(673)
		int wordLength;		HX_STACK_VAR(wordLength,"wordLength");
		HX_STACK_LINE(675)
		bool isSpaceWord = false;		HX_STACK_VAR(isSpaceWord,"isSpaceWord");
		HX_STACK_LINE(677)
		int charCode;		HX_STACK_VAR(charCode,"charCode");
		HX_STACK_LINE(678)
		Float charWidth = (int)0;		HX_STACK_VAR(charWidth,"charWidth");
		HX_STACK_LINE(680)
		Array< ::String > subLines = Array_obj< ::String >::__new();		HX_STACK_VAR(subLines,"subLines");
		HX_STACK_LINE(682)
		::String subLine;		HX_STACK_VAR(subLine,"subLine");
		HX_STACK_LINE(683)
		Float subLineWidth;		HX_STACK_VAR(subLineWidth,"subLineWidth");
		HX_STACK_LINE(685)
		::haxegon::bitmapFont::BitmapFont tmp = this->font;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(685)
		int tmp1 = tmp->spaceWidth;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(685)
		Float tmp2 = this->size;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(685)
		Float tmp3 = (tmp1 * tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(685)
		Float spaceWidth = tmp3;		HX_STACK_VAR(spaceWidth,"spaceWidth");
		HX_STACK_LINE(686)
		Float tmp4 = spaceWidth;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(686)
		int tmp5 = this->numSpacesInTab;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(686)
		Float tmp6 = (tmp4 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(686)
		Float tabWidth = tmp6;		HX_STACK_VAR(tabWidth,"tabWidth");
		HX_STACK_LINE(688)
		::haxegon::bitmapFont::BitmapFont tmp7 = this->font;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(688)
		int tmp8 = tmp7->minOffsetX;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(688)
		Float tmp9 = ::Math_obj::abs(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(688)
		Float tmp10 = this->size;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(688)
		Float tmp11 = (tmp9 * tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(688)
		Float startX = tmp11;		HX_STACK_VAR(startX,"startX");
		HX_STACK_LINE(690)
		bool tmp12 = (numWords > (int)0);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(690)
		if ((tmp12)){
			HX_STACK_LINE(692)
			w = (int)0;
			HX_STACK_LINE(693)
			subLineWidth = startX;
			HX_STACK_LINE(694)
			subLine = HX_HCSTRING("","\x00","\x00","\x00","\x00");
			HX_STACK_LINE(696)
			while((true)){
				HX_STACK_LINE(696)
				bool tmp13 = (w < numWords);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(696)
				bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(696)
				if ((tmp14)){
					HX_STACK_LINE(696)
					break;
				}
				HX_STACK_LINE(698)
				wordWidth = (int)0;
				HX_STACK_LINE(699)
				::String tmp15 = words->__get(w);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(699)
				word = tmp15;
				HX_STACK_LINE(700)
				::String tmp16 = word;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(700)
				int tmp17 = ::haxe::Utf8_obj::length(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(700)
				wordLength = tmp17;
				HX_STACK_LINE(702)
				::String tmp18 = word;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(702)
				int tmp19 = ::haxe::Utf8_obj::charCodeAt(tmp18,(int)0);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(702)
				charCode = tmp19;
				HX_STACK_LINE(703)
				bool tmp20 = (charCode == (int)32);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(703)
				bool tmp21 = !(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(703)
				bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(703)
				if ((tmp21)){
					HX_STACK_LINE(703)
					tmp22 = (charCode == (int)9);
				}
				else{
					HX_STACK_LINE(703)
					tmp22 = true;
				}
				HX_STACK_LINE(703)
				isSpaceWord = tmp22;
				HX_STACK_LINE(705)
				{
					HX_STACK_LINE(705)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(705)
					while((true)){
						HX_STACK_LINE(705)
						bool tmp23 = (_g < wordLength);		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(705)
						bool tmp24 = !(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(705)
						if ((tmp24)){
							HX_STACK_LINE(705)
							break;
						}
						HX_STACK_LINE(705)
						int tmp25 = (_g)++;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(705)
						int c = tmp25;		HX_STACK_VAR(c,"c");
						HX_STACK_LINE(707)
						::String tmp26 = word;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(707)
						int tmp27 = c;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(707)
						int tmp28 = ::haxe::Utf8_obj::charCodeAt(tmp26,tmp27);		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(707)
						charCode = tmp28;
						HX_STACK_LINE(709)
						bool tmp29 = (charCode == (int)32);		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(709)
						if ((tmp29)){
							HX_STACK_LINE(711)
							charWidth = spaceWidth;
						}
						else{
							HX_STACK_LINE(713)
							bool tmp30 = (charCode == (int)9);		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(713)
							if ((tmp30)){
								HX_STACK_LINE(715)
								charWidth = tabWidth;
							}
							else{
								HX_STACK_LINE(719)
								::haxegon::bitmapFont::BitmapFont tmp31 = this->font;		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(719)
								int tmp32 = charCode;		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(719)
								bool tmp33 = tmp31->glyphs->exists(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(719)
								Float tmp34;		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(719)
								if ((tmp33)){
									HX_STACK_LINE(719)
									::haxegon::bitmapFont::BitmapFont tmp35 = this->font;		HX_STACK_VAR(tmp35,"tmp35");
									HX_STACK_LINE(719)
									int tmp36 = charCode;		HX_STACK_VAR(tmp36,"tmp36");
									HX_STACK_LINE(719)
									::haxegon::bitmapFont::BitmapGlyphFrame tmp37 = tmp35->glyphs->get(tmp36);		HX_STACK_VAR(tmp37,"tmp37");
									HX_STACK_LINE(719)
									int tmp38 = tmp37->xadvance;		HX_STACK_VAR(tmp38,"tmp38");
									HX_STACK_LINE(719)
									Float tmp39 = this->size;		HX_STACK_VAR(tmp39,"tmp39");
									HX_STACK_LINE(719)
									tmp34 = (tmp38 * tmp39);
								}
								else{
									HX_STACK_LINE(719)
									tmp34 = (int)0;
								}
								HX_STACK_LINE(719)
								charWidth = tmp34;
							}
						}
						HX_STACK_LINE(722)
						hx::AddEq(wordWidth,charWidth);
					}
				}
				HX_STACK_LINE(725)
				int tmp23 = (wordLength - (int)1);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(725)
				int tmp24 = this->letterSpacing;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(725)
				int tmp25 = (tmp23 * tmp24);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(725)
				hx::AddEq(wordWidth,tmp25);
				HX_STACK_LINE(727)
				Float tmp26 = (subLineWidth + wordWidth);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(727)
				int tmp27 = this->_fieldWidth;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(727)
				int tmp28 = this->padding;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(727)
				int tmp29 = ((int)2 * tmp28);		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(727)
				int tmp30 = (tmp27 - tmp29);		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(727)
				bool tmp31 = (tmp26 > tmp30);		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(727)
				if ((tmp31)){
					HX_STACK_LINE(729)
					bool tmp32 = isSpaceWord;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(729)
					if ((tmp32)){
						HX_STACK_LINE(731)
						::String tmp33 = subLine;		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(731)
						subLines->push(tmp33);
						HX_STACK_LINE(732)
						subLine = HX_HCSTRING("","\x00","\x00","\x00","\x00");
						HX_STACK_LINE(733)
						subLineWidth = startX;
					}
					else{
						HX_STACK_LINE(735)
						bool tmp33 = (subLine != HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(735)
						if ((tmp33)){
							HX_STACK_LINE(737)
							::String tmp34 = subLine;		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(737)
							subLines->push(tmp34);
							HX_STACK_LINE(738)
							subLine = word;
							HX_STACK_LINE(739)
							Float tmp35 = (startX + wordWidth);		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(739)
							int tmp36 = this->letterSpacing;		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(739)
							Float tmp37 = (tmp35 + tmp36);		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(739)
							subLineWidth = tmp37;
						}
						else{
							HX_STACK_LINE(743)
							subLine = word;
							HX_STACK_LINE(744)
							Float tmp34 = (startX + wordWidth);		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(744)
							int tmp35 = this->letterSpacing;		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(744)
							Float tmp36 = (tmp34 + tmp35);		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(744)
							subLineWidth = tmp36;
						}
					}
				}
				else{
					HX_STACK_LINE(749)
					hx::AddEq(subLine,word);
					HX_STACK_LINE(750)
					Float tmp32 = wordWidth;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(750)
					int tmp33 = this->letterSpacing;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(750)
					Float tmp34 = (tmp32 + tmp33);		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(750)
					hx::AddEq(subLineWidth,tmp34);
				}
				HX_STACK_LINE(753)
				(w)++;
			}
			HX_STACK_LINE(756)
			bool tmp13 = (subLine != HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(756)
			if ((tmp13)){
				HX_STACK_LINE(758)
				::String tmp14 = subLine;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(758)
				subLines->push(tmp14);
			}
		}
		HX_STACK_LINE(762)
		{
			HX_STACK_LINE(762)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(762)
			while((true)){
				HX_STACK_LINE(762)
				bool tmp13 = (_g < subLines->length);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(762)
				bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(762)
				if ((tmp14)){
					HX_STACK_LINE(762)
					break;
				}
				HX_STACK_LINE(762)
				::String tmp15 = subLines->__get(_g);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(762)
				::String subline = tmp15;		HX_STACK_VAR(subline,"subline");
				HX_STACK_LINE(762)
				++(_g);
				HX_STACK_LINE(764)
				::String tmp16 = subline;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(764)
				newLines->push(tmp16);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(BitmapTextField_obj,wrapLineByWord,(void))

Void BitmapTextField_obj::wrapLineByCharacter( Array< ::String > words,Array< ::String > newLines){
{
		HX_STACK_FRAME("haxegon.bitmapFont.BitmapTextField","wrapLineByCharacter",0x5643eba2,"haxegon.bitmapFont.BitmapTextField.wrapLineByCharacter","haxegon/bitmapFont/BitmapTextField.hx",775,0xab2b8d62)
		HX_STACK_THIS(this)
		HX_STACK_ARG(words,"words")
		HX_STACK_ARG(newLines,"newLines")
		HX_STACK_LINE(776)
		int numWords = words->length;		HX_STACK_VAR(numWords,"numWords");
		HX_STACK_LINE(777)
		int w;		HX_STACK_VAR(w,"w");
		HX_STACK_LINE(778)
		::String word;		HX_STACK_VAR(word,"word");
		HX_STACK_LINE(779)
		int wordLength;		HX_STACK_VAR(wordLength,"wordLength");
		HX_STACK_LINE(781)
		bool isSpaceWord = false;		HX_STACK_VAR(isSpaceWord,"isSpaceWord");
		HX_STACK_LINE(783)
		::String _char;		HX_STACK_VAR(_char,"char");
		HX_STACK_LINE(784)
		int charCode;		HX_STACK_VAR(charCode,"charCode");
		HX_STACK_LINE(785)
		int c;		HX_STACK_VAR(c,"c");
		HX_STACK_LINE(786)
		Float charWidth = (int)0;		HX_STACK_VAR(charWidth,"charWidth");
		HX_STACK_LINE(788)
		Array< ::String > subLines = Array_obj< ::String >::__new();		HX_STACK_VAR(subLines,"subLines");
		HX_STACK_LINE(790)
		::String subLine;		HX_STACK_VAR(subLine,"subLine");
		HX_STACK_LINE(791)
		::haxe::Utf8 subLineUtf8;		HX_STACK_VAR(subLineUtf8,"subLineUtf8");
		HX_STACK_LINE(792)
		Float subLineWidth;		HX_STACK_VAR(subLineWidth,"subLineWidth");
		HX_STACK_LINE(794)
		::haxegon::bitmapFont::BitmapFont tmp = this->font;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(794)
		int tmp1 = tmp->spaceWidth;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(794)
		Float tmp2 = this->size;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(794)
		Float tmp3 = (tmp1 * tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(794)
		Float spaceWidth = tmp3;		HX_STACK_VAR(spaceWidth,"spaceWidth");
		HX_STACK_LINE(795)
		Float tmp4 = spaceWidth;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(795)
		int tmp5 = this->numSpacesInTab;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(795)
		Float tmp6 = (tmp4 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(795)
		Float tabWidth = tmp6;		HX_STACK_VAR(tabWidth,"tabWidth");
		HX_STACK_LINE(797)
		::haxegon::bitmapFont::BitmapFont tmp7 = this->font;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(797)
		int tmp8 = tmp7->minOffsetX;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(797)
		Float tmp9 = ::Math_obj::abs(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(797)
		Float tmp10 = this->size;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(797)
		Float tmp11 = (tmp9 * tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(797)
		Float startX = tmp11;		HX_STACK_VAR(startX,"startX");
		HX_STACK_LINE(799)
		bool tmp12 = (numWords > (int)0);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(799)
		if ((tmp12)){
			HX_STACK_LINE(801)
			w = (int)0;
			HX_STACK_LINE(802)
			subLineWidth = startX;
			HX_STACK_LINE(803)
			::haxe::Utf8 tmp13 = ::haxe::Utf8_obj::__new(null());		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(803)
			subLineUtf8 = tmp13;
			HX_STACK_LINE(805)
			while((true)){
				HX_STACK_LINE(805)
				bool tmp14 = (w < numWords);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(805)
				bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(805)
				if ((tmp15)){
					HX_STACK_LINE(805)
					break;
				}
				HX_STACK_LINE(807)
				::String tmp16 = words->__get(w);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(807)
				word = tmp16;
				HX_STACK_LINE(808)
				::String tmp17 = word;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(808)
				int tmp18 = ::haxe::Utf8_obj::length(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(808)
				wordLength = tmp18;
				HX_STACK_LINE(810)
				::String tmp19 = word;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(810)
				int tmp20 = ::haxe::Utf8_obj::charCodeAt(tmp19,(int)0);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(810)
				charCode = tmp20;
				HX_STACK_LINE(811)
				bool tmp21 = (charCode == (int)32);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(811)
				bool tmp22 = !(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(811)
				bool tmp23;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(811)
				if ((tmp22)){
					HX_STACK_LINE(811)
					tmp23 = (charCode == (int)9);
				}
				else{
					HX_STACK_LINE(811)
					tmp23 = true;
				}
				HX_STACK_LINE(811)
				isSpaceWord = tmp23;
				HX_STACK_LINE(813)
				c = (int)0;
				HX_STACK_LINE(815)
				while((true)){
					HX_STACK_LINE(815)
					bool tmp24 = (c < wordLength);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(815)
					bool tmp25 = !(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(815)
					if ((tmp25)){
						HX_STACK_LINE(815)
						break;
					}
					HX_STACK_LINE(817)
					::String tmp26 = word;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(817)
					int tmp27 = c;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(817)
					int tmp28 = ::haxe::Utf8_obj::charCodeAt(tmp26,tmp27);		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(817)
					charCode = tmp28;
					HX_STACK_LINE(819)
					bool tmp29 = (charCode == (int)32);		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(819)
					if ((tmp29)){
						HX_STACK_LINE(821)
						charWidth = spaceWidth;
					}
					else{
						HX_STACK_LINE(823)
						bool tmp30 = (charCode == (int)9);		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(823)
						if ((tmp30)){
							HX_STACK_LINE(825)
							charWidth = tabWidth;
						}
						else{
							HX_STACK_LINE(829)
							::haxegon::bitmapFont::BitmapFont tmp31 = this->font;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(829)
							int tmp32 = charCode;		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(829)
							bool tmp33 = tmp31->glyphs->exists(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(829)
							Float tmp34;		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(829)
							if ((tmp33)){
								HX_STACK_LINE(829)
								::haxegon::bitmapFont::BitmapFont tmp35 = this->font;		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(829)
								int tmp36 = charCode;		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(829)
								::haxegon::bitmapFont::BitmapGlyphFrame tmp37 = tmp35->glyphs->get(tmp36);		HX_STACK_VAR(tmp37,"tmp37");
								HX_STACK_LINE(829)
								int tmp38 = tmp37->xadvance;		HX_STACK_VAR(tmp38,"tmp38");
								HX_STACK_LINE(829)
								Float tmp39 = this->size;		HX_STACK_VAR(tmp39,"tmp39");
								HX_STACK_LINE(829)
								tmp34 = (tmp38 * tmp39);
							}
							else{
								HX_STACK_LINE(829)
								tmp34 = (int)0;
							}
							HX_STACK_LINE(829)
							charWidth = tmp34;
						}
					}
					HX_STACK_LINE(832)
					Float tmp30 = (subLineWidth + charWidth);		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(832)
					int tmp31 = this->_fieldWidth;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(832)
					int tmp32 = this->padding;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(832)
					int tmp33 = ((int)2 * tmp32);		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(832)
					int tmp34 = (tmp31 - tmp33);		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(832)
					bool tmp35 = (tmp30 > tmp34);		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(832)
					if ((tmp35)){
						HX_STACK_LINE(834)
						::String tmp36 = subLineUtf8->toString();		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(834)
						subLine = tmp36;
						HX_STACK_LINE(836)
						bool tmp37 = isSpaceWord;		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(836)
						if ((tmp37)){
							HX_STACK_LINE(838)
							::String tmp38 = subLine;		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(838)
							subLines->push(tmp38);
							HX_STACK_LINE(839)
							c = wordLength;
							HX_STACK_LINE(840)
							::haxe::Utf8 tmp39 = ::haxe::Utf8_obj::__new(null());		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(840)
							subLineUtf8 = tmp39;
							HX_STACK_LINE(841)
							subLineWidth = startX;
						}
						else{
							HX_STACK_LINE(843)
							bool tmp38 = (subLine != HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(843)
							if ((tmp38)){
								HX_STACK_LINE(845)
								::String tmp39 = subLine;		HX_STACK_VAR(tmp39,"tmp39");
								HX_STACK_LINE(845)
								subLines->push(tmp39);
								HX_STACK_LINE(846)
								::haxe::Utf8 tmp40 = ::haxe::Utf8_obj::__new(null());		HX_STACK_VAR(tmp40,"tmp40");
								HX_STACK_LINE(846)
								subLineUtf8 = tmp40;
								HX_STACK_LINE(847)
								int tmp41 = charCode;		HX_STACK_VAR(tmp41,"tmp41");
								HX_STACK_LINE(847)
								subLineUtf8->addChar(tmp41);
								HX_STACK_LINE(848)
								Float tmp42 = (startX + charWidth);		HX_STACK_VAR(tmp42,"tmp42");
								HX_STACK_LINE(848)
								int tmp43 = this->letterSpacing;		HX_STACK_VAR(tmp43,"tmp43");
								HX_STACK_LINE(848)
								Float tmp44 = (tmp42 + tmp43);		HX_STACK_VAR(tmp44,"tmp44");
								HX_STACK_LINE(848)
								subLineWidth = tmp44;
							}
							else{
								HX_STACK_LINE(852)
								::haxe::Utf8 tmp39 = ::haxe::Utf8_obj::__new(null());		HX_STACK_VAR(tmp39,"tmp39");
								HX_STACK_LINE(852)
								subLineUtf8 = tmp39;
								HX_STACK_LINE(853)
								int tmp40 = charCode;		HX_STACK_VAR(tmp40,"tmp40");
								HX_STACK_LINE(853)
								subLineUtf8->addChar(tmp40);
								HX_STACK_LINE(854)
								Float tmp41 = (startX + charWidth);		HX_STACK_VAR(tmp41,"tmp41");
								HX_STACK_LINE(854)
								int tmp42 = this->letterSpacing;		HX_STACK_VAR(tmp42,"tmp42");
								HX_STACK_LINE(854)
								Float tmp43 = (tmp41 + tmp42);		HX_STACK_VAR(tmp43,"tmp43");
								HX_STACK_LINE(854)
								subLineWidth = tmp43;
							}
						}
					}
					else{
						HX_STACK_LINE(859)
						int tmp36 = charCode;		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(859)
						subLineUtf8->addChar(tmp36);
						HX_STACK_LINE(860)
						Float tmp37 = charWidth;		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(860)
						int tmp38 = this->letterSpacing;		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(860)
						Float tmp39 = (tmp37 + tmp38);		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(860)
						hx::AddEq(subLineWidth,tmp39);
					}
					HX_STACK_LINE(863)
					(c)++;
				}
				HX_STACK_LINE(866)
				(w)++;
			}
			HX_STACK_LINE(869)
			::String tmp14 = subLineUtf8->toString();		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(869)
			subLine = tmp14;
			HX_STACK_LINE(871)
			bool tmp15 = (subLine != HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(871)
			if ((tmp15)){
				HX_STACK_LINE(873)
				::String tmp16 = subLine;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(873)
				subLines->push(tmp16);
			}
		}
		HX_STACK_LINE(877)
		{
			HX_STACK_LINE(877)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(877)
			while((true)){
				HX_STACK_LINE(877)
				bool tmp13 = (_g < subLines->length);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(877)
				bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(877)
				if ((tmp14)){
					HX_STACK_LINE(877)
					break;
				}
				HX_STACK_LINE(877)
				::String tmp15 = subLines->__get(_g);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(877)
				::String subline = tmp15;		HX_STACK_VAR(subline,"subline");
				HX_STACK_LINE(877)
				++(_g);
				HX_STACK_LINE(879)
				::String tmp16 = subline;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(879)
				newLines->push(tmp16);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(BitmapTextField_obj,wrapLineByCharacter,(void))

Void BitmapTextField_obj::updateGraphic( ){
{
		HX_STACK_FRAME("haxegon.bitmapFont.BitmapTextField","updateGraphic",0x83459c2d,"haxegon.bitmapFont.BitmapTextField.updateGraphic","haxegon/bitmapFont/BitmapTextField.hx",887,0xab2b8d62)
		HX_STACK_THIS(this)
		HX_STACK_LINE(888)
		this->computeTextSize();
		HX_STACK_LINE(889)
		bool tmp = this->background;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(889)
		int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(889)
		if ((tmp)){
			HX_STACK_LINE(889)
			tmp1 = this->backgroundColor;
		}
		else{
			HX_STACK_LINE(889)
			tmp1 = (int)0;
		}
		HX_STACK_LINE(889)
		int colorForFill = tmp1;		HX_STACK_VAR(colorForFill,"colorForFill");
		HX_STACK_LINE(891)
		::openfl::display::BitmapData tmp2 = this->_bitmapData;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(891)
		bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(891)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(891)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(891)
		if ((tmp4)){
			HX_STACK_LINE(891)
			int tmp6 = this->_fieldWidth;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(891)
			int tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(891)
			::openfl::display::BitmapData tmp8 = this->_bitmapData;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(891)
			::openfl::display::BitmapData tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(891)
			int tmp10 = tmp9->width;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(891)
			bool tmp11 = (tmp7 != tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(891)
			bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(891)
			bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(891)
			bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(891)
			bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(891)
			bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(891)
			if ((tmp16)){
				HX_STACK_LINE(891)
				int tmp17 = this->_fieldHeight;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(891)
				int tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(891)
				int tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(891)
				::openfl::display::BitmapData tmp20 = this->_bitmapData;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(891)
				::openfl::display::BitmapData tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(891)
				::openfl::display::BitmapData tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(891)
				int tmp23 = tmp22->height;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(891)
				tmp5 = (tmp19 != tmp23);
			}
			else{
				HX_STACK_LINE(891)
				tmp5 = true;
			}
		}
		else{
			HX_STACK_LINE(891)
			tmp5 = true;
		}
		HX_STACK_LINE(891)
		if ((tmp5)){
			HX_STACK_LINE(893)
			::openfl::display::BitmapData tmp6 = this->_bitmapData;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(893)
			bool tmp7 = (tmp6 != null());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(893)
			if ((tmp7)){
				HX_STACK_LINE(895)
				::openfl::display::BitmapData tmp8 = this->_bitmapData;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(895)
				tmp8->dispose();
			}
			HX_STACK_LINE(898)
			int tmp8 = this->_fieldWidth;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(898)
			int tmp9 = this->_fieldHeight;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(898)
			int tmp10 = colorForFill;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(898)
			::openfl::display::BitmapData tmp11 = ::openfl::display::BitmapData_obj::__new(tmp8,tmp9,true,tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(898)
			this->_bitmapData = tmp11;
			HX_STACK_LINE(899)
			::openfl::display::Bitmap tmp12 = this->_bitmap;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(899)
			::openfl::display::BitmapData tmp13 = this->_bitmapData;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(899)
			tmp12->set_bitmapData(tmp13);
			HX_STACK_LINE(900)
			bool tmp14 = this->smoothing;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(900)
			::openfl::display::Bitmap tmp15 = this->_bitmap;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(900)
			tmp15->smoothing = tmp14;
		}
		else{
			HX_STACK_LINE(904)
			::openfl::display::BitmapData tmp6 = this->_bitmapData;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(904)
			::openfl::display::BitmapData tmp7 = this->_bitmapData;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(904)
			::openfl::geom::Rectangle tmp8 = tmp7->rect;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(904)
			int tmp9 = colorForFill;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(904)
			tmp6->fillRect(tmp8,tmp9);
		}
		HX_STACK_LINE(922)
		Float tmp6 = this->size;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(922)
		bool tmp7 = (tmp6 > (int)0);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(922)
		if ((tmp7)){
			HX_STACK_LINE(925)
			::openfl::display::BitmapData tmp8 = this->_bitmapData;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(925)
			tmp8->lock();
			HX_STACK_LINE(928)
			int tmp9 = this->_lines->length;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(928)
			int numLines = tmp9;		HX_STACK_VAR(numLines,"numLines");
			HX_STACK_LINE(929)
			::String line;		HX_STACK_VAR(line,"line");
			HX_STACK_LINE(930)
			Float lineWidth;		HX_STACK_VAR(lineWidth,"lineWidth");
			HX_STACK_LINE(932)
			int ox;		HX_STACK_VAR(ox,"ox");
			HX_STACK_LINE(932)
			int oy;		HX_STACK_VAR(oy,"oy");
			HX_STACK_LINE(934)
			Float tmp10 = this->borderSize;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(934)
			Float tmp11 = this->borderQuality;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(934)
			Float tmp12 = (tmp10 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(934)
			int tmp13 = ::Std_obj::_int(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(934)
			int iterations = tmp13;		HX_STACK_VAR(iterations,"iterations");
			HX_STACK_LINE(935)
			bool tmp14 = (iterations <= (int)0);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(935)
			int tmp15;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(935)
			if ((tmp14)){
				HX_STACK_LINE(935)
				tmp15 = (int)1;
			}
			else{
				HX_STACK_LINE(935)
				tmp15 = iterations;
			}
			HX_STACK_LINE(935)
			iterations = tmp15;
			HX_STACK_LINE(937)
			Float tmp16 = this->borderSize;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(937)
			int tmp17 = iterations;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(937)
			Float tmp18 = (Float(tmp16) / Float(tmp17));		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(937)
			int tmp19 = ::Std_obj::_int(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(937)
			int delta = tmp19;		HX_STACK_VAR(delta,"delta");
			HX_STACK_LINE(939)
			int iterationsX = (int)1;		HX_STACK_VAR(iterationsX,"iterationsX");
			HX_STACK_LINE(940)
			int iterationsY = (int)1;		HX_STACK_VAR(iterationsY,"iterationsY");
			HX_STACK_LINE(941)
			int deltaX = (int)1;		HX_STACK_VAR(deltaX,"deltaX");
			HX_STACK_LINE(942)
			int deltaY = (int)1;		HX_STACK_VAR(deltaY,"deltaY");
			HX_STACK_LINE(944)
			::haxegon::bitmapFont::TextBorderStyle tmp20 = this->borderStyle;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(944)
			bool tmp21 = (tmp20 == ::haxegon::bitmapFont::TextBorderStyle_obj::SHADOW);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(944)
			if ((tmp21)){
				HX_STACK_LINE(946)
				::openfl::geom::Point tmp22 = this->shadowOffset;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(946)
				Float tmp23 = tmp22->x;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(946)
				Float tmp24 = ::Math_obj::abs(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(946)
				Float tmp25 = this->borderQuality;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(946)
				Float tmp26 = (tmp24 * tmp25);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(946)
				int tmp27 = ::Math_obj::round(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(946)
				iterationsX = tmp27;
				HX_STACK_LINE(947)
				bool tmp28 = (iterationsX <= (int)0);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(947)
				int tmp29;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(947)
				if ((tmp28)){
					HX_STACK_LINE(947)
					tmp29 = (int)1;
				}
				else{
					HX_STACK_LINE(947)
					tmp29 = iterationsX;
				}
				HX_STACK_LINE(947)
				iterationsX = tmp29;
				HX_STACK_LINE(949)
				::openfl::geom::Point tmp30 = this->shadowOffset;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(949)
				Float tmp31 = tmp30->y;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(949)
				Float tmp32 = ::Math_obj::abs(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(949)
				Float tmp33 = this->borderQuality;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(949)
				Float tmp34 = (tmp32 * tmp33);		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(949)
				int tmp35 = ::Math_obj::round(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(949)
				iterationsY = tmp35;
				HX_STACK_LINE(950)
				bool tmp36 = (iterationsY <= (int)0);		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(950)
				int tmp37;		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(950)
				if ((tmp36)){
					HX_STACK_LINE(950)
					tmp37 = (int)1;
				}
				else{
					HX_STACK_LINE(950)
					tmp37 = iterationsY;
				}
				HX_STACK_LINE(950)
				iterationsY = tmp37;
				HX_STACK_LINE(952)
				::openfl::geom::Point tmp38 = this->shadowOffset;		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(952)
				Float tmp39 = tmp38->x;		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(952)
				int tmp40 = iterationsX;		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(952)
				Float tmp41 = (Float(tmp39) / Float(tmp40));		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(952)
				int tmp42 = ::Math_obj::round(tmp41);		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(952)
				deltaX = tmp42;
				HX_STACK_LINE(953)
				::openfl::geom::Point tmp43 = this->shadowOffset;		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(953)
				Float tmp44 = tmp43->y;		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(953)
				int tmp45 = iterationsY;		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(953)
				Float tmp46 = (Float(tmp44) / Float(tmp45));		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(953)
				int tmp47 = ::Math_obj::round(tmp46);		HX_STACK_VAR(tmp47,"tmp47");
				HX_STACK_LINE(953)
				deltaY = tmp47;
			}
			HX_STACK_LINE(957)
			{
				HX_STACK_LINE(957)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(957)
				while((true)){
					HX_STACK_LINE(957)
					bool tmp22 = (_g < numLines);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(957)
					bool tmp23 = !(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(957)
					if ((tmp23)){
						HX_STACK_LINE(957)
						break;
					}
					HX_STACK_LINE(957)
					int tmp24 = (_g)++;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(957)
					int i = tmp24;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(959)
					::String tmp25 = this->_lines->__get(i);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(959)
					line = tmp25;
					HX_STACK_LINE(960)
					Float tmp26 = this->_linesWidth->__get(i);		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(960)
					lineWidth = tmp26;
					HX_STACK_LINE(963)
					::haxegon::bitmapFont::BitmapFont tmp27 = this->font;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(963)
					int tmp28 = tmp27->minOffsetX;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(963)
					Float tmp29 = ::Math_obj::abs(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(963)
					Float tmp30 = this->size;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(963)
					Float tmp31 = (tmp29 * tmp30);		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(963)
					int tmp32 = ::Std_obj::_int(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(963)
					ox = tmp32;
					HX_STACK_LINE(964)
					int tmp33 = i;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(964)
					::haxegon::bitmapFont::BitmapFont tmp34 = this->font;		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(964)
					int tmp35 = tmp34->lineHeight;		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(964)
					Float tmp36 = this->size;		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(964)
					Float tmp37 = (tmp35 * tmp36);		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(964)
					int tmp38 = this->lineSpacing;		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(964)
					Float tmp39 = (tmp37 + tmp38);		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(964)
					Float tmp40 = (tmp33 * tmp39);		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(964)
					int tmp41 = ::Std_obj::_int(tmp40);		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(964)
					int tmp42 = this->padding;		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(964)
					int tmp43 = (tmp41 + tmp42);		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(964)
					oy = tmp43;
					HX_STACK_LINE(966)
					::String tmp44 = this->alignment;		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(966)
					bool tmp45 = (tmp44 == HX_HCSTRING("center","\xd5","\x25","\xdb","\x05"));		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(966)
					if ((tmp45)){
						HX_STACK_LINE(968)
						int tmp46 = this->_fieldWidth;		HX_STACK_VAR(tmp46,"tmp46");
						HX_STACK_LINE(968)
						Float tmp47 = lineWidth;		HX_STACK_VAR(tmp47,"tmp47");
						HX_STACK_LINE(968)
						Float tmp48 = (tmp46 - tmp47);		HX_STACK_VAR(tmp48,"tmp48");
						HX_STACK_LINE(968)
						Float tmp49 = (Float(tmp48) / Float((int)2));		HX_STACK_VAR(tmp49,"tmp49");
						HX_STACK_LINE(968)
						int tmp50 = ::Std_obj::_int(tmp49);		HX_STACK_VAR(tmp50,"tmp50");
						HX_STACK_LINE(968)
						int tmp51 = this->padding;		HX_STACK_VAR(tmp51,"tmp51");
						HX_STACK_LINE(968)
						int tmp52 = (tmp50 - tmp51);		HX_STACK_VAR(tmp52,"tmp52");
						HX_STACK_LINE(968)
						hx::AddEq(ox,tmp52);
					}
					HX_STACK_LINE(970)
					::String tmp46 = this->alignment;		HX_STACK_VAR(tmp46,"tmp46");
					HX_STACK_LINE(970)
					bool tmp47 = (tmp46 == HX_HCSTRING("right","\xdc","\x0b","\x64","\xe9"));		HX_STACK_VAR(tmp47,"tmp47");
					HX_STACK_LINE(970)
					if ((tmp47)){
						HX_STACK_LINE(972)
						int tmp48 = this->_fieldWidth;		HX_STACK_VAR(tmp48,"tmp48");
						HX_STACK_LINE(972)
						Float tmp49 = lineWidth;		HX_STACK_VAR(tmp49,"tmp49");
						HX_STACK_LINE(972)
						int tmp50 = ::Std_obj::_int(tmp49);		HX_STACK_VAR(tmp50,"tmp50");
						HX_STACK_LINE(972)
						int tmp51 = (tmp48 - tmp50);		HX_STACK_VAR(tmp51,"tmp51");
						HX_STACK_LINE(972)
						int tmp52 = this->padding;		HX_STACK_VAR(tmp52,"tmp52");
						HX_STACK_LINE(972)
						int tmp53 = (tmp51 - tmp52);		HX_STACK_VAR(tmp53,"tmp53");
						HX_STACK_LINE(972)
						hx::AddEq(ox,tmp53);
					}
					else{
						HX_STACK_LINE(976)
						int tmp48 = this->padding;		HX_STACK_VAR(tmp48,"tmp48");
						HX_STACK_LINE(976)
						hx::AddEq(ox,tmp48);
					}
					HX_STACK_LINE(979)
					{
						HX_STACK_LINE(979)
						::haxegon::bitmapFont::TextBorderStyle tmp48 = this->borderStyle;		HX_STACK_VAR(tmp48,"tmp48");
						HX_STACK_LINE(979)
						::haxegon::bitmapFont::TextBorderStyle _g1 = tmp48;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(979)
						switch( (int)(_g1->__Index())){
							case (int)1: {
								HX_STACK_LINE(982)
								int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
								HX_STACK_LINE(982)
								while((true)){
									HX_STACK_LINE(982)
									bool tmp49 = (_g2 < iterationsY);		HX_STACK_VAR(tmp49,"tmp49");
									HX_STACK_LINE(982)
									bool tmp50 = !(tmp49);		HX_STACK_VAR(tmp50,"tmp50");
									HX_STACK_LINE(982)
									if ((tmp50)){
										HX_STACK_LINE(982)
										break;
									}
									HX_STACK_LINE(982)
									int tmp51 = (_g2)++;		HX_STACK_VAR(tmp51,"tmp51");
									HX_STACK_LINE(982)
									int iterY = tmp51;		HX_STACK_VAR(iterY,"iterY");
									HX_STACK_LINE(984)
									{
										HX_STACK_LINE(984)
										int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
										HX_STACK_LINE(984)
										while((true)){
											HX_STACK_LINE(984)
											bool tmp52 = (_g3 < iterationsX);		HX_STACK_VAR(tmp52,"tmp52");
											HX_STACK_LINE(984)
											bool tmp53 = !(tmp52);		HX_STACK_VAR(tmp53,"tmp53");
											HX_STACK_LINE(984)
											if ((tmp53)){
												HX_STACK_LINE(984)
												break;
											}
											HX_STACK_LINE(984)
											int tmp54 = (_g3)++;		HX_STACK_VAR(tmp54,"tmp54");
											HX_STACK_LINE(984)
											int iterX = tmp54;		HX_STACK_VAR(iterX,"iterX");
											HX_STACK_LINE(987)
											::String tmp55 = line;		HX_STACK_VAR(tmp55,"tmp55");
											HX_STACK_LINE(987)
											::haxegon::bitmapFont::BitmapGlyphCollection tmp56 = this->borderGlyphs;		HX_STACK_VAR(tmp56,"tmp56");
											HX_STACK_LINE(987)
											int tmp57 = ox;		HX_STACK_VAR(tmp57,"tmp57");
											HX_STACK_LINE(987)
											int tmp58 = deltaX;		HX_STACK_VAR(tmp58,"tmp58");
											HX_STACK_LINE(987)
											int tmp59 = (iterX + (int)1);		HX_STACK_VAR(tmp59,"tmp59");
											HX_STACK_LINE(987)
											int tmp60 = (tmp58 * tmp59);		HX_STACK_VAR(tmp60,"tmp60");
											HX_STACK_LINE(987)
											int tmp61 = (tmp57 + tmp60);		HX_STACK_VAR(tmp61,"tmp61");
											HX_STACK_LINE(987)
											int tmp62 = oy;		HX_STACK_VAR(tmp62,"tmp62");
											HX_STACK_LINE(987)
											int tmp63 = deltaY;		HX_STACK_VAR(tmp63,"tmp63");
											HX_STACK_LINE(987)
											int tmp64 = (iterY + (int)1);		HX_STACK_VAR(tmp64,"tmp64");
											HX_STACK_LINE(987)
											int tmp65 = (tmp63 * tmp64);		HX_STACK_VAR(tmp65,"tmp65");
											HX_STACK_LINE(987)
											int tmp66 = (tmp62 + tmp65);		HX_STACK_VAR(tmp66,"tmp66");
											HX_STACK_LINE(987)
											this->blitLine(tmp55,tmp56,tmp61,tmp66);
										}
									}
								}
							}
							;break;
							case (int)2: {
								HX_STACK_LINE(996)
								int itd = (int)0;		HX_STACK_VAR(itd,"itd");
								HX_STACK_LINE(997)
								{
									HX_STACK_LINE(997)
									int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
									HX_STACK_LINE(997)
									while((true)){
										HX_STACK_LINE(997)
										bool tmp49 = (_g2 < iterations);		HX_STACK_VAR(tmp49,"tmp49");
										HX_STACK_LINE(997)
										bool tmp50 = !(tmp49);		HX_STACK_VAR(tmp50,"tmp50");
										HX_STACK_LINE(997)
										if ((tmp50)){
											HX_STACK_LINE(997)
											break;
										}
										HX_STACK_LINE(997)
										int tmp51 = (_g2)++;		HX_STACK_VAR(tmp51,"tmp51");
										HX_STACK_LINE(997)
										int iter = tmp51;		HX_STACK_VAR(iter,"iter");
										HX_STACK_LINE(999)
										int tmp52 = delta;		HX_STACK_VAR(tmp52,"tmp52");
										HX_STACK_LINE(999)
										int tmp53 = (iter + (int)1);		HX_STACK_VAR(tmp53,"tmp53");
										HX_STACK_LINE(999)
										int tmp54 = (tmp52 * tmp53);		HX_STACK_VAR(tmp54,"tmp54");
										HX_STACK_LINE(999)
										itd = tmp54;
										HX_STACK_LINE(1002)
										::String tmp55 = line;		HX_STACK_VAR(tmp55,"tmp55");
										HX_STACK_LINE(1002)
										::haxegon::bitmapFont::BitmapGlyphCollection tmp56 = this->borderGlyphs;		HX_STACK_VAR(tmp56,"tmp56");
										HX_STACK_LINE(1002)
										int tmp57 = (ox - itd);		HX_STACK_VAR(tmp57,"tmp57");
										HX_STACK_LINE(1002)
										int tmp58 = (oy - itd);		HX_STACK_VAR(tmp58,"tmp58");
										HX_STACK_LINE(1002)
										this->blitLine(tmp55,tmp56,tmp57,tmp58);
										HX_STACK_LINE(1004)
										::String tmp59 = line;		HX_STACK_VAR(tmp59,"tmp59");
										HX_STACK_LINE(1004)
										::haxegon::bitmapFont::BitmapGlyphCollection tmp60 = this->borderGlyphs;		HX_STACK_VAR(tmp60,"tmp60");
										HX_STACK_LINE(1004)
										int tmp61 = ox;		HX_STACK_VAR(tmp61,"tmp61");
										HX_STACK_LINE(1004)
										int tmp62 = (oy - itd);		HX_STACK_VAR(tmp62,"tmp62");
										HX_STACK_LINE(1004)
										this->blitLine(tmp59,tmp60,tmp61,tmp62);
										HX_STACK_LINE(1006)
										::String tmp63 = line;		HX_STACK_VAR(tmp63,"tmp63");
										HX_STACK_LINE(1006)
										::haxegon::bitmapFont::BitmapGlyphCollection tmp64 = this->borderGlyphs;		HX_STACK_VAR(tmp64,"tmp64");
										HX_STACK_LINE(1006)
										int tmp65 = (ox + itd);		HX_STACK_VAR(tmp65,"tmp65");
										HX_STACK_LINE(1006)
										int tmp66 = (oy - itd);		HX_STACK_VAR(tmp66,"tmp66");
										HX_STACK_LINE(1006)
										this->blitLine(tmp63,tmp64,tmp65,tmp66);
										HX_STACK_LINE(1008)
										::String tmp67 = line;		HX_STACK_VAR(tmp67,"tmp67");
										HX_STACK_LINE(1008)
										::haxegon::bitmapFont::BitmapGlyphCollection tmp68 = this->borderGlyphs;		HX_STACK_VAR(tmp68,"tmp68");
										HX_STACK_LINE(1008)
										int tmp69 = (ox - itd);		HX_STACK_VAR(tmp69,"tmp69");
										HX_STACK_LINE(1008)
										int tmp70 = oy;		HX_STACK_VAR(tmp70,"tmp70");
										HX_STACK_LINE(1008)
										this->blitLine(tmp67,tmp68,tmp69,tmp70);
										HX_STACK_LINE(1010)
										::String tmp71 = line;		HX_STACK_VAR(tmp71,"tmp71");
										HX_STACK_LINE(1010)
										::haxegon::bitmapFont::BitmapGlyphCollection tmp72 = this->borderGlyphs;		HX_STACK_VAR(tmp72,"tmp72");
										HX_STACK_LINE(1010)
										int tmp73 = (ox + itd);		HX_STACK_VAR(tmp73,"tmp73");
										HX_STACK_LINE(1010)
										int tmp74 = oy;		HX_STACK_VAR(tmp74,"tmp74");
										HX_STACK_LINE(1010)
										this->blitLine(tmp71,tmp72,tmp73,tmp74);
										HX_STACK_LINE(1012)
										::String tmp75 = line;		HX_STACK_VAR(tmp75,"tmp75");
										HX_STACK_LINE(1012)
										::haxegon::bitmapFont::BitmapGlyphCollection tmp76 = this->borderGlyphs;		HX_STACK_VAR(tmp76,"tmp76");
										HX_STACK_LINE(1012)
										int tmp77 = (ox - itd);		HX_STACK_VAR(tmp77,"tmp77");
										HX_STACK_LINE(1012)
										int tmp78 = (oy + itd);		HX_STACK_VAR(tmp78,"tmp78");
										HX_STACK_LINE(1012)
										this->blitLine(tmp75,tmp76,tmp77,tmp78);
										HX_STACK_LINE(1014)
										::String tmp79 = line;		HX_STACK_VAR(tmp79,"tmp79");
										HX_STACK_LINE(1014)
										::haxegon::bitmapFont::BitmapGlyphCollection tmp80 = this->borderGlyphs;		HX_STACK_VAR(tmp80,"tmp80");
										HX_STACK_LINE(1014)
										int tmp81 = ox;		HX_STACK_VAR(tmp81,"tmp81");
										HX_STACK_LINE(1014)
										int tmp82 = (oy + itd);		HX_STACK_VAR(tmp82,"tmp82");
										HX_STACK_LINE(1014)
										this->blitLine(tmp79,tmp80,tmp81,tmp82);
										HX_STACK_LINE(1016)
										::String tmp83 = line;		HX_STACK_VAR(tmp83,"tmp83");
										HX_STACK_LINE(1016)
										::haxegon::bitmapFont::BitmapGlyphCollection tmp84 = this->borderGlyphs;		HX_STACK_VAR(tmp84,"tmp84");
										HX_STACK_LINE(1016)
										int tmp85 = (ox + itd);		HX_STACK_VAR(tmp85,"tmp85");
										HX_STACK_LINE(1016)
										int tmp86 = (oy + itd);		HX_STACK_VAR(tmp86,"tmp86");
										HX_STACK_LINE(1016)
										this->blitLine(tmp83,tmp84,tmp85,tmp86);
									}
								}
							}
							;break;
							case (int)3: {
								HX_STACK_LINE(1040)
								int itd = (int)0;		HX_STACK_VAR(itd,"itd");
								HX_STACK_LINE(1041)
								{
									HX_STACK_LINE(1041)
									int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
									HX_STACK_LINE(1041)
									while((true)){
										HX_STACK_LINE(1041)
										bool tmp49 = (_g2 < iterations);		HX_STACK_VAR(tmp49,"tmp49");
										HX_STACK_LINE(1041)
										bool tmp50 = !(tmp49);		HX_STACK_VAR(tmp50,"tmp50");
										HX_STACK_LINE(1041)
										if ((tmp50)){
											HX_STACK_LINE(1041)
											break;
										}
										HX_STACK_LINE(1041)
										int tmp51 = (_g2)++;		HX_STACK_VAR(tmp51,"tmp51");
										HX_STACK_LINE(1041)
										int iter = tmp51;		HX_STACK_VAR(iter,"iter");
										HX_STACK_LINE(1043)
										int tmp52 = delta;		HX_STACK_VAR(tmp52,"tmp52");
										HX_STACK_LINE(1043)
										int tmp53 = (iter + (int)1);		HX_STACK_VAR(tmp53,"tmp53");
										HX_STACK_LINE(1043)
										int tmp54 = (tmp52 * tmp53);		HX_STACK_VAR(tmp54,"tmp54");
										HX_STACK_LINE(1043)
										itd = tmp54;
										HX_STACK_LINE(1046)
										::String tmp55 = line;		HX_STACK_VAR(tmp55,"tmp55");
										HX_STACK_LINE(1046)
										::haxegon::bitmapFont::BitmapGlyphCollection tmp56 = this->borderGlyphs;		HX_STACK_VAR(tmp56,"tmp56");
										HX_STACK_LINE(1046)
										int tmp57 = (ox - itd);		HX_STACK_VAR(tmp57,"tmp57");
										HX_STACK_LINE(1046)
										int tmp58 = (oy - itd);		HX_STACK_VAR(tmp58,"tmp58");
										HX_STACK_LINE(1046)
										this->blitLine(tmp55,tmp56,tmp57,tmp58);
										HX_STACK_LINE(1048)
										::String tmp59 = line;		HX_STACK_VAR(tmp59,"tmp59");
										HX_STACK_LINE(1048)
										::haxegon::bitmapFont::BitmapGlyphCollection tmp60 = this->borderGlyphs;		HX_STACK_VAR(tmp60,"tmp60");
										HX_STACK_LINE(1048)
										int tmp61 = (ox + itd);		HX_STACK_VAR(tmp61,"tmp61");
										HX_STACK_LINE(1048)
										int tmp62 = (oy - itd);		HX_STACK_VAR(tmp62,"tmp62");
										HX_STACK_LINE(1048)
										this->blitLine(tmp59,tmp60,tmp61,tmp62);
										HX_STACK_LINE(1050)
										::String tmp63 = line;		HX_STACK_VAR(tmp63,"tmp63");
										HX_STACK_LINE(1050)
										::haxegon::bitmapFont::BitmapGlyphCollection tmp64 = this->borderGlyphs;		HX_STACK_VAR(tmp64,"tmp64");
										HX_STACK_LINE(1050)
										int tmp65 = (ox - itd);		HX_STACK_VAR(tmp65,"tmp65");
										HX_STACK_LINE(1050)
										int tmp66 = (oy + itd);		HX_STACK_VAR(tmp66,"tmp66");
										HX_STACK_LINE(1050)
										this->blitLine(tmp63,tmp64,tmp65,tmp66);
										HX_STACK_LINE(1052)
										::String tmp67 = line;		HX_STACK_VAR(tmp67,"tmp67");
										HX_STACK_LINE(1052)
										::haxegon::bitmapFont::BitmapGlyphCollection tmp68 = this->borderGlyphs;		HX_STACK_VAR(tmp68,"tmp68");
										HX_STACK_LINE(1052)
										int tmp69 = (ox + itd);		HX_STACK_VAR(tmp69,"tmp69");
										HX_STACK_LINE(1052)
										int tmp70 = (oy + itd);		HX_STACK_VAR(tmp70,"tmp70");
										HX_STACK_LINE(1052)
										this->blitLine(tmp67,tmp68,tmp69,tmp70);
									}
								}
							}
							;break;
							case (int)0: {
							}
							;break;
						}
					}
				}
			}
			HX_STACK_LINE(1069)
			{
				HX_STACK_LINE(1069)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(1069)
				while((true)){
					HX_STACK_LINE(1069)
					bool tmp22 = (_g < numLines);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(1069)
					bool tmp23 = !(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(1069)
					if ((tmp23)){
						HX_STACK_LINE(1069)
						break;
					}
					HX_STACK_LINE(1069)
					int tmp24 = (_g)++;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(1069)
					int i = tmp24;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(1071)
					::String tmp25 = this->_lines->__get(i);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(1071)
					line = tmp25;
					HX_STACK_LINE(1072)
					Float tmp26 = this->_linesWidth->__get(i);		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(1072)
					lineWidth = tmp26;
					HX_STACK_LINE(1075)
					::haxegon::bitmapFont::BitmapFont tmp27 = this->font;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(1075)
					int tmp28 = tmp27->minOffsetX;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(1075)
					Float tmp29 = ::Math_obj::abs(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(1075)
					Float tmp30 = this->size;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(1075)
					Float tmp31 = (tmp29 * tmp30);		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(1075)
					int tmp32 = ::Std_obj::_int(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(1075)
					ox = tmp32;
					HX_STACK_LINE(1076)
					int tmp33 = i;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(1076)
					::haxegon::bitmapFont::BitmapFont tmp34 = this->font;		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(1076)
					int tmp35 = tmp34->lineHeight;		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(1076)
					Float tmp36 = this->size;		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(1076)
					Float tmp37 = (tmp35 * tmp36);		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(1076)
					int tmp38 = this->lineSpacing;		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(1076)
					Float tmp39 = (tmp37 + tmp38);		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(1076)
					Float tmp40 = (tmp33 * tmp39);		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(1076)
					int tmp41 = ::Std_obj::_int(tmp40);		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(1076)
					int tmp42 = this->padding;		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(1076)
					int tmp43 = (tmp41 + tmp42);		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(1076)
					oy = tmp43;
					HX_STACK_LINE(1078)
					::String tmp44 = this->alignment;		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(1078)
					bool tmp45 = (tmp44 == HX_HCSTRING("center","\xd5","\x25","\xdb","\x05"));		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(1078)
					if ((tmp45)){
						HX_STACK_LINE(1080)
						int tmp46 = this->_fieldWidth;		HX_STACK_VAR(tmp46,"tmp46");
						HX_STACK_LINE(1080)
						Float tmp47 = lineWidth;		HX_STACK_VAR(tmp47,"tmp47");
						HX_STACK_LINE(1080)
						Float tmp48 = (tmp46 - tmp47);		HX_STACK_VAR(tmp48,"tmp48");
						HX_STACK_LINE(1080)
						Float tmp49 = (Float(tmp48) / Float((int)2));		HX_STACK_VAR(tmp49,"tmp49");
						HX_STACK_LINE(1080)
						int tmp50 = ::Std_obj::_int(tmp49);		HX_STACK_VAR(tmp50,"tmp50");
						HX_STACK_LINE(1080)
						int tmp51 = this->padding;		HX_STACK_VAR(tmp51,"tmp51");
						HX_STACK_LINE(1080)
						int tmp52 = (tmp50 - tmp51);		HX_STACK_VAR(tmp52,"tmp52");
						HX_STACK_LINE(1080)
						hx::AddEq(ox,tmp52);
					}
					HX_STACK_LINE(1082)
					::String tmp46 = this->alignment;		HX_STACK_VAR(tmp46,"tmp46");
					HX_STACK_LINE(1082)
					bool tmp47 = (tmp46 == HX_HCSTRING("right","\xdc","\x0b","\x64","\xe9"));		HX_STACK_VAR(tmp47,"tmp47");
					HX_STACK_LINE(1082)
					if ((tmp47)){
						HX_STACK_LINE(1084)
						int tmp48 = this->_fieldWidth;		HX_STACK_VAR(tmp48,"tmp48");
						HX_STACK_LINE(1084)
						Float tmp49 = lineWidth;		HX_STACK_VAR(tmp49,"tmp49");
						HX_STACK_LINE(1084)
						int tmp50 = ::Std_obj::_int(tmp49);		HX_STACK_VAR(tmp50,"tmp50");
						HX_STACK_LINE(1084)
						int tmp51 = (tmp48 - tmp50);		HX_STACK_VAR(tmp51,"tmp51");
						HX_STACK_LINE(1084)
						int tmp52 = this->padding;		HX_STACK_VAR(tmp52,"tmp52");
						HX_STACK_LINE(1084)
						int tmp53 = (tmp51 - tmp52);		HX_STACK_VAR(tmp53,"tmp53");
						HX_STACK_LINE(1084)
						hx::AddEq(ox,tmp53);
					}
					else{
						HX_STACK_LINE(1088)
						int tmp48 = this->padding;		HX_STACK_VAR(tmp48,"tmp48");
						HX_STACK_LINE(1088)
						hx::AddEq(ox,tmp48);
					}
					HX_STACK_LINE(1092)
					::String tmp48 = line;		HX_STACK_VAR(tmp48,"tmp48");
					HX_STACK_LINE(1092)
					::haxegon::bitmapFont::BitmapGlyphCollection tmp49 = this->textGlyphs;		HX_STACK_VAR(tmp49,"tmp49");
					HX_STACK_LINE(1092)
					int tmp50 = ox;		HX_STACK_VAR(tmp50,"tmp50");
					HX_STACK_LINE(1092)
					int tmp51 = oy;		HX_STACK_VAR(tmp51,"tmp51");
					HX_STACK_LINE(1092)
					this->blitLine(tmp48,tmp49,tmp50,tmp51);
				}
			}
			HX_STACK_LINE(1099)
			::openfl::display::BitmapData tmp22 = this->_bitmapData;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(1099)
			tmp22->unlock(null());
		}
		HX_STACK_LINE(1105)
		this->_pendingGraphicChange = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BitmapTextField_obj,updateGraphic,(void))

Void BitmapTextField_obj::blitLine( ::String line,::haxegon::bitmapFont::BitmapGlyphCollection glyphs,int startX,int startY){
{
		HX_STACK_FRAME("haxegon.bitmapFont.BitmapTextField","blitLine",0xc9f7a8fb,"haxegon.bitmapFont.BitmapTextField.blitLine","haxegon/bitmapFont/BitmapTextField.hx",1110,0xab2b8d62)
		HX_STACK_THIS(this)
		HX_STACK_ARG(line,"line")
		HX_STACK_ARG(glyphs,"glyphs")
		HX_STACK_ARG(startX,"startX")
		HX_STACK_ARG(startY,"startY")
		HX_STACK_LINE(1111)
		bool tmp = (glyphs == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1111)
		if ((tmp)){
			HX_STACK_LINE(1111)
			return null();
		}
		HX_STACK_LINE(1113)
		::haxegon::bitmapFont::BitmapGlyph glyph;		HX_STACK_VAR(glyph,"glyph");
		HX_STACK_LINE(1114)
		int charCode;		HX_STACK_VAR(charCode,"charCode");
		HX_STACK_LINE(1115)
		int curX = startX;		HX_STACK_VAR(curX,"curX");
		HX_STACK_LINE(1116)
		int curY = startY;		HX_STACK_VAR(curY,"curY");
		HX_STACK_LINE(1118)
		::haxegon::bitmapFont::BitmapFont tmp1 = this->font;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1118)
		int tmp2 = tmp1->spaceWidth;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1118)
		Float tmp3 = this->size;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1118)
		Float tmp4 = (tmp2 * tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1118)
		int tmp5 = ::Std_obj::_int(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1118)
		int spaceWidth = tmp5;		HX_STACK_VAR(spaceWidth,"spaceWidth");
		HX_STACK_LINE(1119)
		int tmp6 = spaceWidth;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1119)
		int tmp7 = this->numSpacesInTab;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1119)
		int tmp8 = (tmp6 * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1119)
		int tmp9 = ::Std_obj::_int(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1119)
		int tabWidth = tmp9;		HX_STACK_VAR(tabWidth,"tabWidth");
		HX_STACK_LINE(1121)
		::String tmp10 = line;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1121)
		int tmp11 = ::haxe::Utf8_obj::length(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(1121)
		int lineLength = tmp11;		HX_STACK_VAR(lineLength,"lineLength");
		HX_STACK_LINE(1123)
		{
			HX_STACK_LINE(1123)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1123)
			while((true)){
				HX_STACK_LINE(1123)
				bool tmp12 = (_g < lineLength);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(1123)
				bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(1123)
				if ((tmp13)){
					HX_STACK_LINE(1123)
					break;
				}
				HX_STACK_LINE(1123)
				int tmp14 = (_g)++;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(1123)
				int i = tmp14;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(1125)
				::String tmp15 = line;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(1125)
				int tmp16 = i;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(1125)
				int tmp17 = ::haxe::Utf8_obj::charCodeAt(tmp15,tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(1125)
				charCode = tmp17;
				HX_STACK_LINE(1127)
				bool tmp18 = (charCode == (int)32);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(1127)
				if ((tmp18)){
					HX_STACK_LINE(1129)
					hx::AddEq(curX,spaceWidth);
				}
				else{
					HX_STACK_LINE(1131)
					bool tmp19 = (charCode == (int)9);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(1131)
					if ((tmp19)){
						HX_STACK_LINE(1133)
						hx::AddEq(curX,tabWidth);
					}
					else{
						HX_STACK_LINE(1137)
						int tmp20 = charCode;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(1137)
						::haxegon::bitmapFont::BitmapGlyph tmp21 = glyphs->glyphMap->get(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(1137)
						glyph = tmp21;
						HX_STACK_LINE(1138)
						bool tmp22 = (glyph != null());		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(1138)
						if ((tmp22)){
							HX_STACK_LINE(1140)
							int tmp23 = (curX + glyph->offsetX);		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(1140)
							::openfl::geom::Point tmp24 = this->_point;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(1140)
							tmp24->x = tmp23;
							HX_STACK_LINE(1141)
							int tmp25 = (curY + glyph->offsetY);		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(1141)
							::openfl::geom::Point tmp26 = this->_point;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(1141)
							tmp26->y = tmp25;
							HX_STACK_LINE(1142)
							::openfl::display::BitmapData tmp27 = this->_bitmapData;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(1142)
							::openfl::display::BitmapData tmp28 = glyph->bitmap;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(1142)
							::openfl::geom::Rectangle tmp29 = glyph->rect;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(1142)
							::openfl::geom::Point tmp30 = this->_point;		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(1142)
							tmp27->copyPixels(tmp28,tmp29,tmp30,null(),null(),true);
							HX_STACK_LINE(1143)
							hx::AddEq(curX,glyph->xAdvance);
						}
					}
				}
				HX_STACK_LINE(1147)
				int tmp19 = this->letterSpacing;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(1147)
				hx::AddEq(curX,tmp19);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(BitmapTextField_obj,blitLine,(void))

Void BitmapTextField_obj::setBorderStyle( ::haxegon::bitmapFont::TextBorderStyle Style,hx::Null< int >  __o_Color,hx::Null< Float >  __o_Size,hx::Null< Float >  __o_Quality){
int Color = __o_Color.Default(-1);
Float Size = __o_Size.Default(1);
Float Quality = __o_Quality.Default(1);
	HX_STACK_FRAME("haxegon.bitmapFont.BitmapTextField","setBorderStyle",0xca65cbd5,"haxegon.bitmapFont.BitmapTextField.setBorderStyle","haxegon/bitmapFont/BitmapTextField.hx",1217,0xab2b8d62)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Style,"Style")
	HX_STACK_ARG(Color,"Color")
	HX_STACK_ARG(Size,"Size")
	HX_STACK_ARG(Quality,"Quality")
{
		HX_STACK_LINE(1218)
		::haxegon::bitmapFont::TextBorderStyle tmp = Style;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1218)
		this->set_borderStyle(tmp);
		HX_STACK_LINE(1219)
		int tmp1 = Color;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1219)
		this->set_borderColor(tmp1);
		HX_STACK_LINE(1220)
		Float tmp2 = Size;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1220)
		this->set_borderSize(tmp2);
		HX_STACK_LINE(1221)
		Float tmp3 = Quality;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1221)
		this->set_borderQuality(tmp3);
		HX_STACK_LINE(1222)
		::haxegon::bitmapFont::TextBorderStyle tmp4 = this->borderStyle;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1222)
		bool tmp5 = (tmp4 == ::haxegon::bitmapFont::TextBorderStyle_obj::SHADOW);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1222)
		if ((tmp5)){
			HX_STACK_LINE(1224)
			::openfl::geom::Point tmp6 = this->shadowOffset;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1224)
			Float tmp7 = this->borderSize;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1224)
			Float tmp8 = this->borderSize;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1224)
			tmp6->setTo(tmp7,tmp8);
		}
		HX_STACK_LINE(1226)
		this->_pendingGraphicChange = true;
		HX_STACK_LINE(1227)
		{
			HX_STACK_LINE(1227)
			bool tmp6 = this->updateImmediately;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1227)
			if ((tmp6)){
				HX_STACK_LINE(1227)
				bool tmp7 = this->_pendingTextGlyphsChange;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1227)
				if ((tmp7)){
					HX_STACK_LINE(1227)
					this->updateTextGlyphs();
				}
				HX_STACK_LINE(1227)
				bool tmp8 = this->_pendingBorderGlyphsChange;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1227)
				if ((tmp8)){
					HX_STACK_LINE(1227)
					this->updateBorderGlyphs();
				}
				HX_STACK_LINE(1227)
				bool tmp9 = this->_pendingTextChange;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1227)
				if ((tmp9)){
					HX_STACK_LINE(1227)
					this->updateText();
					HX_STACK_LINE(1227)
					this->_pendingGraphicChange = true;
				}
				HX_STACK_LINE(1227)
				bool tmp10 = this->_pendingGraphicChange;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(1227)
				if ((tmp10)){
					HX_STACK_LINE(1227)
					this->updateGraphic();
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(BitmapTextField_obj,setBorderStyle,(void))

Float BitmapTextField_obj::set_width( Float value){
	HX_STACK_FRAME("haxegon.bitmapFont.BitmapTextField","set_width",0x8683fbf7,"haxegon.bitmapFont.BitmapTextField.set_width","haxegon/bitmapFont/BitmapTextField.hx",1238,0xab2b8d62)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1239)
	Float tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1239)
	int tmp1 = ::Std_obj::_int(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1239)
	value = tmp1;
	HX_STACK_LINE(1240)
	Float tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1240)
	Float tmp3 = ::Math_obj::max((int)1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1240)
	value = tmp3;
	HX_STACK_LINE(1242)
	Float tmp4 = value;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1242)
	Float tmp5 = this->get_width();		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1242)
	bool tmp6 = (tmp4 != tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(1242)
	if ((tmp6)){
		HX_STACK_LINE(1244)
		bool tmp7 = (value == (int)0);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1244)
		int tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1244)
		if ((tmp7)){
			HX_STACK_LINE(1244)
			tmp8 = (int)1;
		}
		else{
			HX_STACK_LINE(1244)
			Float tmp9 = value;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1244)
			tmp8 = ::Std_obj::_int(tmp9);
		}
		HX_STACK_LINE(1244)
		this->_fieldWidth = tmp8;
		HX_STACK_LINE(1245)
		this->_pendingTextChange = true;
		HX_STACK_LINE(1246)
		{
			HX_STACK_LINE(1246)
			bool tmp9 = this->updateImmediately;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1246)
			if ((tmp9)){
				HX_STACK_LINE(1246)
				bool tmp10 = this->_pendingTextGlyphsChange;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(1246)
				if ((tmp10)){
					HX_STACK_LINE(1246)
					this->updateTextGlyphs();
				}
				HX_STACK_LINE(1246)
				bool tmp11 = this->_pendingBorderGlyphsChange;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(1246)
				if ((tmp11)){
					HX_STACK_LINE(1246)
					this->updateBorderGlyphs();
				}
				HX_STACK_LINE(1246)
				bool tmp12 = this->_pendingTextChange;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(1246)
				if ((tmp12)){
					HX_STACK_LINE(1246)
					this->updateText();
					HX_STACK_LINE(1246)
					this->_pendingGraphicChange = true;
				}
				HX_STACK_LINE(1246)
				bool tmp13 = this->_pendingGraphicChange;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(1246)
				if ((tmp13)){
					HX_STACK_LINE(1246)
					this->updateGraphic();
				}
			}
		}
	}
	HX_STACK_LINE(1249)
	Float tmp7 = value;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(1249)
	return tmp7;
}


::String BitmapTextField_obj::set_alignment( ::String value){
	HX_STACK_FRAME("haxegon.bitmapFont.BitmapTextField","set_alignment",0x34777554,"haxegon.bitmapFont.BitmapTextField.set_alignment","haxegon/bitmapFont/BitmapTextField.hx",1254,0xab2b8d62)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1255)
	::String tmp = this->alignment;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1255)
	::String tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1255)
	bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1255)
	if ((tmp2)){
		HX_STACK_LINE(1257)
		this->alignment = value;
		HX_STACK_LINE(1258)
		this->_pendingGraphicChange = true;
		HX_STACK_LINE(1259)
		{
			HX_STACK_LINE(1259)
			bool tmp3 = this->updateImmediately;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1259)
			if ((tmp3)){
				HX_STACK_LINE(1259)
				bool tmp4 = this->_pendingTextGlyphsChange;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(1259)
				if ((tmp4)){
					HX_STACK_LINE(1259)
					this->updateTextGlyphs();
				}
				HX_STACK_LINE(1259)
				bool tmp5 = this->_pendingBorderGlyphsChange;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1259)
				if ((tmp5)){
					HX_STACK_LINE(1259)
					this->updateBorderGlyphs();
				}
				HX_STACK_LINE(1259)
				bool tmp6 = this->_pendingTextChange;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1259)
				if ((tmp6)){
					HX_STACK_LINE(1259)
					this->updateText();
					HX_STACK_LINE(1259)
					this->_pendingGraphicChange = true;
				}
				HX_STACK_LINE(1259)
				bool tmp7 = this->_pendingGraphicChange;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1259)
				if ((tmp7)){
					HX_STACK_LINE(1259)
					this->updateGraphic();
				}
			}
		}
	}
	HX_STACK_LINE(1262)
	::String tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1262)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapTextField_obj,set_alignment,return )

bool BitmapTextField_obj::set_multiLine( bool value){
	HX_STACK_FRAME("haxegon.bitmapFont.BitmapTextField","set_multiLine",0xd324917e,"haxegon.bitmapFont.BitmapTextField.set_multiLine","haxegon/bitmapFont/BitmapTextField.hx",1266,0xab2b8d62)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1267)
	bool tmp = this->multiLine;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1267)
	bool tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1267)
	bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1267)
	if ((tmp2)){
		HX_STACK_LINE(1269)
		this->multiLine = value;
		HX_STACK_LINE(1270)
		this->_pendingTextChange = true;
		HX_STACK_LINE(1271)
		{
			HX_STACK_LINE(1271)
			bool tmp3 = this->updateImmediately;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1271)
			if ((tmp3)){
				HX_STACK_LINE(1271)
				bool tmp4 = this->_pendingTextGlyphsChange;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(1271)
				if ((tmp4)){
					HX_STACK_LINE(1271)
					this->updateTextGlyphs();
				}
				HX_STACK_LINE(1271)
				bool tmp5 = this->_pendingBorderGlyphsChange;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1271)
				if ((tmp5)){
					HX_STACK_LINE(1271)
					this->updateBorderGlyphs();
				}
				HX_STACK_LINE(1271)
				bool tmp6 = this->_pendingTextChange;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1271)
				if ((tmp6)){
					HX_STACK_LINE(1271)
					this->updateText();
					HX_STACK_LINE(1271)
					this->_pendingGraphicChange = true;
				}
				HX_STACK_LINE(1271)
				bool tmp7 = this->_pendingGraphicChange;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1271)
				if ((tmp7)){
					HX_STACK_LINE(1271)
					this->updateGraphic();
				}
			}
		}
	}
	HX_STACK_LINE(1274)
	bool tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1274)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapTextField_obj,set_multiLine,return )

::haxegon::bitmapFont::BitmapFont BitmapTextField_obj::set_font( ::haxegon::bitmapFont::BitmapFont value){
	HX_STACK_FRAME("haxegon.bitmapFont.BitmapTextField","set_font",0xd2f1e0fe,"haxegon.bitmapFont.BitmapTextField.set_font","haxegon/bitmapFont/BitmapTextField.hx",1278,0xab2b8d62)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1279)
	::haxegon::bitmapFont::BitmapFont tmp = this->font;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1279)
	::haxegon::bitmapFont::BitmapFont tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1279)
	bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1279)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1279)
	if ((tmp2)){
		HX_STACK_LINE(1279)
		tmp3 = (value != null());
	}
	else{
		HX_STACK_LINE(1279)
		tmp3 = false;
	}
	HX_STACK_LINE(1279)
	if ((tmp3)){
		HX_STACK_LINE(1281)
		this->font = value;
		HX_STACK_LINE(1282)
		this->_pendingTextChange = true;
		HX_STACK_LINE(1283)
		this->_pendingBorderGlyphsChange = true;
		HX_STACK_LINE(1284)
		{
			HX_STACK_LINE(1284)
			bool tmp4 = this->updateImmediately;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1284)
			if ((tmp4)){
				HX_STACK_LINE(1284)
				bool tmp5 = this->_pendingTextGlyphsChange;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1284)
				if ((tmp5)){
					HX_STACK_LINE(1284)
					this->updateTextGlyphs();
				}
				HX_STACK_LINE(1284)
				bool tmp6 = this->_pendingBorderGlyphsChange;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1284)
				if ((tmp6)){
					HX_STACK_LINE(1284)
					this->updateBorderGlyphs();
				}
				HX_STACK_LINE(1284)
				bool tmp7 = this->_pendingTextChange;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1284)
				if ((tmp7)){
					HX_STACK_LINE(1284)
					this->updateText();
					HX_STACK_LINE(1284)
					this->_pendingGraphicChange = true;
				}
				HX_STACK_LINE(1284)
				bool tmp8 = this->_pendingGraphicChange;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1284)
				if ((tmp8)){
					HX_STACK_LINE(1284)
					this->updateGraphic();
				}
			}
		}
	}
	HX_STACK_LINE(1287)
	::haxegon::bitmapFont::BitmapFont tmp4 = value;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1287)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapTextField_obj,set_font,return )

int BitmapTextField_obj::set_lineSpacing( int value){
	HX_STACK_FRAME("haxegon.bitmapFont.BitmapTextField","set_lineSpacing",0x49a6baa0,"haxegon.bitmapFont.BitmapTextField.set_lineSpacing","haxegon/bitmapFont/BitmapTextField.hx",1291,0xab2b8d62)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1292)
	int tmp = this->lineSpacing;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1292)
	int tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1292)
	bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1292)
	if ((tmp2)){
		HX_STACK_LINE(1294)
		int tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1294)
		Float tmp4 = ::Math_obj::abs(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1294)
		int tmp5 = ::Std_obj::_int(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1294)
		this->lineSpacing = tmp5;
		HX_STACK_LINE(1295)
		this->_pendingGraphicChange = true;
		HX_STACK_LINE(1296)
		{
			HX_STACK_LINE(1296)
			bool tmp6 = this->updateImmediately;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1296)
			if ((tmp6)){
				HX_STACK_LINE(1296)
				bool tmp7 = this->_pendingTextGlyphsChange;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1296)
				if ((tmp7)){
					HX_STACK_LINE(1296)
					this->updateTextGlyphs();
				}
				HX_STACK_LINE(1296)
				bool tmp8 = this->_pendingBorderGlyphsChange;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1296)
				if ((tmp8)){
					HX_STACK_LINE(1296)
					this->updateBorderGlyphs();
				}
				HX_STACK_LINE(1296)
				bool tmp9 = this->_pendingTextChange;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1296)
				if ((tmp9)){
					HX_STACK_LINE(1296)
					this->updateText();
					HX_STACK_LINE(1296)
					this->_pendingGraphicChange = true;
				}
				HX_STACK_LINE(1296)
				bool tmp10 = this->_pendingGraphicChange;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(1296)
				if ((tmp10)){
					HX_STACK_LINE(1296)
					this->updateGraphic();
				}
			}
		}
	}
	HX_STACK_LINE(1299)
	int tmp3 = this->lineSpacing;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1299)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapTextField_obj,set_lineSpacing,return )

int BitmapTextField_obj::set_letterSpacing( int value){
	HX_STACK_FRAME("haxegon.bitmapFont.BitmapTextField","set_letterSpacing",0xe0b5d62e,"haxegon.bitmapFont.BitmapTextField.set_letterSpacing","haxegon/bitmapFont/BitmapTextField.hx",1303,0xab2b8d62)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1304)
	int tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1304)
	Float tmp1 = ::Math_obj::abs(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1304)
	int tmp2 = ::Std_obj::_int(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1304)
	int tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1306)
	int tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1306)
	int tmp5 = this->letterSpacing;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1306)
	bool tmp6 = (tmp4 != tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(1306)
	if ((tmp6)){
		HX_STACK_LINE(1308)
		this->letterSpacing = tmp3;
		HX_STACK_LINE(1309)
		this->_pendingTextChange = true;
		HX_STACK_LINE(1310)
		{
			HX_STACK_LINE(1310)
			bool tmp7 = this->updateImmediately;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1310)
			if ((tmp7)){
				HX_STACK_LINE(1310)
				bool tmp8 = this->_pendingTextGlyphsChange;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1310)
				if ((tmp8)){
					HX_STACK_LINE(1310)
					this->updateTextGlyphs();
				}
				HX_STACK_LINE(1310)
				bool tmp9 = this->_pendingBorderGlyphsChange;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1310)
				if ((tmp9)){
					HX_STACK_LINE(1310)
					this->updateBorderGlyphs();
				}
				HX_STACK_LINE(1310)
				bool tmp10 = this->_pendingTextChange;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(1310)
				if ((tmp10)){
					HX_STACK_LINE(1310)
					this->updateText();
					HX_STACK_LINE(1310)
					this->_pendingGraphicChange = true;
				}
				HX_STACK_LINE(1310)
				bool tmp11 = this->_pendingGraphicChange;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(1310)
				if ((tmp11)){
					HX_STACK_LINE(1310)
					this->updateGraphic();
				}
			}
		}
	}
	HX_STACK_LINE(1313)
	int tmp7 = this->letterSpacing;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(1313)
	return tmp7;
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapTextField_obj,set_letterSpacing,return )

bool BitmapTextField_obj::set_autoUpperCase( bool value){
	HX_STACK_FRAME("haxegon.bitmapFont.BitmapTextField","set_autoUpperCase",0x9f1bf6b4,"haxegon.bitmapFont.BitmapTextField.set_autoUpperCase","haxegon/bitmapFont/BitmapTextField.hx",1317,0xab2b8d62)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1318)
	bool tmp = this->autoUpperCase;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1318)
	bool tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1318)
	bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1318)
	if ((tmp2)){
		HX_STACK_LINE(1320)
		this->autoUpperCase = value;
		HX_STACK_LINE(1321)
		this->_pendingTextChange = true;
		HX_STACK_LINE(1322)
		{
			HX_STACK_LINE(1322)
			bool tmp3 = this->updateImmediately;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1322)
			if ((tmp3)){
				HX_STACK_LINE(1322)
				bool tmp4 = this->_pendingTextGlyphsChange;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(1322)
				if ((tmp4)){
					HX_STACK_LINE(1322)
					this->updateTextGlyphs();
				}
				HX_STACK_LINE(1322)
				bool tmp5 = this->_pendingBorderGlyphsChange;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1322)
				if ((tmp5)){
					HX_STACK_LINE(1322)
					this->updateBorderGlyphs();
				}
				HX_STACK_LINE(1322)
				bool tmp6 = this->_pendingTextChange;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1322)
				if ((tmp6)){
					HX_STACK_LINE(1322)
					this->updateText();
					HX_STACK_LINE(1322)
					this->_pendingGraphicChange = true;
				}
				HX_STACK_LINE(1322)
				bool tmp7 = this->_pendingGraphicChange;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1322)
				if ((tmp7)){
					HX_STACK_LINE(1322)
					this->updateGraphic();
				}
			}
		}
	}
	HX_STACK_LINE(1325)
	bool tmp3 = this->autoUpperCase;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1325)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapTextField_obj,set_autoUpperCase,return )

bool BitmapTextField_obj::set_wordWrap( bool value){
	HX_STACK_FRAME("haxegon.bitmapFont.BitmapTextField","set_wordWrap",0x0a5f5b63,"haxegon.bitmapFont.BitmapTextField.set_wordWrap","haxegon/bitmapFont/BitmapTextField.hx",1329,0xab2b8d62)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1330)
	bool tmp = this->wordWrap;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1330)
	bool tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1330)
	bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1330)
	if ((tmp2)){
		HX_STACK_LINE(1332)
		this->wordWrap = value;
		HX_STACK_LINE(1333)
		this->_pendingTextChange = true;
		HX_STACK_LINE(1334)
		{
			HX_STACK_LINE(1334)
			bool tmp3 = this->updateImmediately;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1334)
			if ((tmp3)){
				HX_STACK_LINE(1334)
				bool tmp4 = this->_pendingTextGlyphsChange;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(1334)
				if ((tmp4)){
					HX_STACK_LINE(1334)
					this->updateTextGlyphs();
				}
				HX_STACK_LINE(1334)
				bool tmp5 = this->_pendingBorderGlyphsChange;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1334)
				if ((tmp5)){
					HX_STACK_LINE(1334)
					this->updateBorderGlyphs();
				}
				HX_STACK_LINE(1334)
				bool tmp6 = this->_pendingTextChange;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1334)
				if ((tmp6)){
					HX_STACK_LINE(1334)
					this->updateText();
					HX_STACK_LINE(1334)
					this->_pendingGraphicChange = true;
				}
				HX_STACK_LINE(1334)
				bool tmp7 = this->_pendingGraphicChange;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1334)
				if ((tmp7)){
					HX_STACK_LINE(1334)
					this->updateGraphic();
				}
			}
		}
	}
	HX_STACK_LINE(1337)
	bool tmp3 = this->wordWrap;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1337)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapTextField_obj,set_wordWrap,return )

bool BitmapTextField_obj::set_wrapByWord( bool value){
	HX_STACK_FRAME("haxegon.bitmapFont.BitmapTextField","set_wrapByWord",0x20a66d1a,"haxegon.bitmapFont.BitmapTextField.set_wrapByWord","haxegon/bitmapFont/BitmapTextField.hx",1341,0xab2b8d62)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1342)
	bool tmp = this->wrapByWord;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1342)
	bool tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1342)
	bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1342)
	if ((tmp2)){
		HX_STACK_LINE(1344)
		this->wrapByWord = value;
		HX_STACK_LINE(1345)
		this->_pendingTextChange = true;
		HX_STACK_LINE(1346)
		{
			HX_STACK_LINE(1346)
			bool tmp3 = this->updateImmediately;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1346)
			if ((tmp3)){
				HX_STACK_LINE(1346)
				bool tmp4 = this->_pendingTextGlyphsChange;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(1346)
				if ((tmp4)){
					HX_STACK_LINE(1346)
					this->updateTextGlyphs();
				}
				HX_STACK_LINE(1346)
				bool tmp5 = this->_pendingBorderGlyphsChange;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1346)
				if ((tmp5)){
					HX_STACK_LINE(1346)
					this->updateBorderGlyphs();
				}
				HX_STACK_LINE(1346)
				bool tmp6 = this->_pendingTextChange;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1346)
				if ((tmp6)){
					HX_STACK_LINE(1346)
					this->updateText();
					HX_STACK_LINE(1346)
					this->_pendingGraphicChange = true;
				}
				HX_STACK_LINE(1346)
				bool tmp7 = this->_pendingGraphicChange;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1346)
				if ((tmp7)){
					HX_STACK_LINE(1346)
					this->updateGraphic();
				}
			}
		}
	}
	HX_STACK_LINE(1349)
	bool tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1349)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapTextField_obj,set_wrapByWord,return )

bool BitmapTextField_obj::set_autoSize( bool value){
	HX_STACK_FRAME("haxegon.bitmapFont.BitmapTextField","set_autoSize",0x38fdd67f,"haxegon.bitmapFont.BitmapTextField.set_autoSize","haxegon/bitmapFont/BitmapTextField.hx",1353,0xab2b8d62)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1354)
	bool tmp = this->autoSize;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1354)
	bool tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1354)
	bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1354)
	if ((tmp2)){
		HX_STACK_LINE(1356)
		this->autoSize = value;
		HX_STACK_LINE(1357)
		this->_pendingTextChange = true;
		HX_STACK_LINE(1358)
		{
			HX_STACK_LINE(1358)
			bool tmp3 = this->updateImmediately;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1358)
			if ((tmp3)){
				HX_STACK_LINE(1358)
				bool tmp4 = this->_pendingTextGlyphsChange;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(1358)
				if ((tmp4)){
					HX_STACK_LINE(1358)
					this->updateTextGlyphs();
				}
				HX_STACK_LINE(1358)
				bool tmp5 = this->_pendingBorderGlyphsChange;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1358)
				if ((tmp5)){
					HX_STACK_LINE(1358)
					this->updateBorderGlyphs();
				}
				HX_STACK_LINE(1358)
				bool tmp6 = this->_pendingTextChange;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1358)
				if ((tmp6)){
					HX_STACK_LINE(1358)
					this->updateText();
					HX_STACK_LINE(1358)
					this->_pendingGraphicChange = true;
				}
				HX_STACK_LINE(1358)
				bool tmp7 = this->_pendingGraphicChange;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1358)
				if ((tmp7)){
					HX_STACK_LINE(1358)
					this->updateGraphic();
				}
			}
		}
	}
	HX_STACK_LINE(1361)
	bool tmp3 = this->autoSize;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1361)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapTextField_obj,set_autoSize,return )

Float BitmapTextField_obj::set_size( Float value){
	HX_STACK_FRAME("haxegon.bitmapFont.BitmapTextField","set_size",0xdb8523f0,"haxegon.bitmapFont.BitmapTextField.set_size","haxegon/bitmapFont/BitmapTextField.hx",1365,0xab2b8d62)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1366)
	Float tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1366)
	Float tmp1 = ::Math_obj::abs(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1366)
	Float tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1368)
	Float tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1368)
	Float tmp4 = this->size;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1368)
	bool tmp5 = (tmp3 != tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1368)
	if ((tmp5)){
		HX_STACK_LINE(1370)
		this->size = tmp2;
		HX_STACK_LINE(1371)
		this->_pendingTextGlyphsChange = true;
		HX_STACK_LINE(1372)
		this->_pendingBorderGlyphsChange = true;
		HX_STACK_LINE(1373)
		this->_pendingTextChange = true;
		HX_STACK_LINE(1374)
		{
			HX_STACK_LINE(1374)
			bool tmp6 = this->updateImmediately;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1374)
			if ((tmp6)){
				HX_STACK_LINE(1374)
				bool tmp7 = this->_pendingTextGlyphsChange;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1374)
				if ((tmp7)){
					HX_STACK_LINE(1374)
					this->updateTextGlyphs();
				}
				HX_STACK_LINE(1374)
				bool tmp8 = this->_pendingBorderGlyphsChange;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1374)
				if ((tmp8)){
					HX_STACK_LINE(1374)
					this->updateBorderGlyphs();
				}
				HX_STACK_LINE(1374)
				bool tmp9 = this->_pendingTextChange;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1374)
				if ((tmp9)){
					HX_STACK_LINE(1374)
					this->updateText();
					HX_STACK_LINE(1374)
					this->_pendingGraphicChange = true;
				}
				HX_STACK_LINE(1374)
				bool tmp10 = this->_pendingGraphicChange;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(1374)
				if ((tmp10)){
					HX_STACK_LINE(1374)
					this->updateGraphic();
				}
			}
		}
	}
	HX_STACK_LINE(1377)
	Float tmp6 = value;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(1377)
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapTextField_obj,set_size,return )

int BitmapTextField_obj::set_padding( int value){
	HX_STACK_FRAME("haxegon.bitmapFont.BitmapTextField","set_padding",0xcbf0be02,"haxegon.bitmapFont.BitmapTextField.set_padding","haxegon/bitmapFont/BitmapTextField.hx",1381,0xab2b8d62)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1382)
	int tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1382)
	int tmp1 = this->padding;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1382)
	bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1382)
	if ((tmp2)){
		HX_STACK_LINE(1384)
		this->padding = value;
		HX_STACK_LINE(1385)
		this->_pendingTextChange = true;
		HX_STACK_LINE(1386)
		{
			HX_STACK_LINE(1386)
			bool tmp3 = this->updateImmediately;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1386)
			if ((tmp3)){
				HX_STACK_LINE(1386)
				bool tmp4 = this->_pendingTextGlyphsChange;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(1386)
				if ((tmp4)){
					HX_STACK_LINE(1386)
					this->updateTextGlyphs();
				}
				HX_STACK_LINE(1386)
				bool tmp5 = this->_pendingBorderGlyphsChange;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1386)
				if ((tmp5)){
					HX_STACK_LINE(1386)
					this->updateBorderGlyphs();
				}
				HX_STACK_LINE(1386)
				bool tmp6 = this->_pendingTextChange;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1386)
				if ((tmp6)){
					HX_STACK_LINE(1386)
					this->updateText();
					HX_STACK_LINE(1386)
					this->_pendingGraphicChange = true;
				}
				HX_STACK_LINE(1386)
				bool tmp7 = this->_pendingGraphicChange;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1386)
				if ((tmp7)){
					HX_STACK_LINE(1386)
					this->updateGraphic();
				}
			}
		}
	}
	HX_STACK_LINE(1389)
	int tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1389)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapTextField_obj,set_padding,return )

int BitmapTextField_obj::set_numSpacesInTab( int value){
	HX_STACK_FRAME("haxegon.bitmapFont.BitmapTextField","set_numSpacesInTab",0x7f022e8c,"haxegon.bitmapFont.BitmapTextField.set_numSpacesInTab","haxegon/bitmapFont/BitmapTextField.hx",1393,0xab2b8d62)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1394)
	int tmp = this->numSpacesInTab;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1394)
	int tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1394)
	bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1394)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1394)
	if ((tmp2)){
		HX_STACK_LINE(1394)
		tmp3 = (value > (int)0);
	}
	else{
		HX_STACK_LINE(1394)
		tmp3 = false;
	}
	HX_STACK_LINE(1394)
	if ((tmp3)){
		HX_STACK_LINE(1396)
		this->numSpacesInTab = value;
		HX_STACK_LINE(1397)
		this->_tabSpaces = HX_HCSTRING("","\x00","\x00","\x00","\x00");
		HX_STACK_LINE(1399)
		{
			HX_STACK_LINE(1399)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1399)
			while((true)){
				HX_STACK_LINE(1399)
				bool tmp4 = (_g < value);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(1399)
				bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1399)
				if ((tmp5)){
					HX_STACK_LINE(1399)
					break;
				}
				HX_STACK_LINE(1399)
				int tmp6 = (_g)++;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1399)
				int i = tmp6;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(1401)
				hx::AddEq(this->_tabSpaces,HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));
			}
		}
		HX_STACK_LINE(1404)
		this->_pendingTextChange = true;
		HX_STACK_LINE(1405)
		{
			HX_STACK_LINE(1405)
			bool tmp4 = this->updateImmediately;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1405)
			if ((tmp4)){
				HX_STACK_LINE(1405)
				bool tmp5 = this->_pendingTextGlyphsChange;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1405)
				if ((tmp5)){
					HX_STACK_LINE(1405)
					this->updateTextGlyphs();
				}
				HX_STACK_LINE(1405)
				bool tmp6 = this->_pendingBorderGlyphsChange;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1405)
				if ((tmp6)){
					HX_STACK_LINE(1405)
					this->updateBorderGlyphs();
				}
				HX_STACK_LINE(1405)
				bool tmp7 = this->_pendingTextChange;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1405)
				if ((tmp7)){
					HX_STACK_LINE(1405)
					this->updateText();
					HX_STACK_LINE(1405)
					this->_pendingGraphicChange = true;
				}
				HX_STACK_LINE(1405)
				bool tmp8 = this->_pendingGraphicChange;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1405)
				if ((tmp8)){
					HX_STACK_LINE(1405)
					this->updateGraphic();
				}
			}
		}
	}
	HX_STACK_LINE(1408)
	int tmp4 = value;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1408)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapTextField_obj,set_numSpacesInTab,return )

bool BitmapTextField_obj::set_background( bool value){
	HX_STACK_FRAME("haxegon.bitmapFont.BitmapTextField","set_background",0xce44245d,"haxegon.bitmapFont.BitmapTextField.set_background","haxegon/bitmapFont/BitmapTextField.hx",1412,0xab2b8d62)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1413)
	bool tmp = this->background;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1413)
	bool tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1413)
	bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1413)
	if ((tmp2)){
		HX_STACK_LINE(1415)
		this->background = value;
		HX_STACK_LINE(1416)
		this->_pendingGraphicChange = true;
		HX_STACK_LINE(1417)
		{
			HX_STACK_LINE(1417)
			bool tmp3 = this->updateImmediately;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1417)
			if ((tmp3)){
				HX_STACK_LINE(1417)
				bool tmp4 = this->_pendingTextGlyphsChange;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(1417)
				if ((tmp4)){
					HX_STACK_LINE(1417)
					this->updateTextGlyphs();
				}
				HX_STACK_LINE(1417)
				bool tmp5 = this->_pendingBorderGlyphsChange;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1417)
				if ((tmp5)){
					HX_STACK_LINE(1417)
					this->updateBorderGlyphs();
				}
				HX_STACK_LINE(1417)
				bool tmp6 = this->_pendingTextChange;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1417)
				if ((tmp6)){
					HX_STACK_LINE(1417)
					this->updateText();
					HX_STACK_LINE(1417)
					this->_pendingGraphicChange = true;
				}
				HX_STACK_LINE(1417)
				bool tmp7 = this->_pendingGraphicChange;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1417)
				if ((tmp7)){
					HX_STACK_LINE(1417)
					this->updateGraphic();
				}
			}
		}
	}
	HX_STACK_LINE(1420)
	bool tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1420)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapTextField_obj,set_background,return )

int BitmapTextField_obj::set_backgroundColor( int value){
	HX_STACK_FRAME("haxegon.bitmapFont.BitmapTextField","set_backgroundColor",0xe0f3cbc6,"haxegon.bitmapFont.BitmapTextField.set_backgroundColor","haxegon/bitmapFont/BitmapTextField.hx",1424,0xab2b8d62)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1425)
	int tmp = this->backgroundColor;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1425)
	int tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1425)
	int tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1425)
	bool tmp3 = (tmp1 != tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1425)
	if ((tmp3)){
		HX_STACK_LINE(1427)
		this->backgroundColor = value;
		HX_STACK_LINE(1428)
		this->_pendingGraphicChange = true;
		HX_STACK_LINE(1429)
		{
			HX_STACK_LINE(1429)
			bool tmp4 = this->updateImmediately;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1429)
			if ((tmp4)){
				HX_STACK_LINE(1429)
				bool tmp5 = this->_pendingTextGlyphsChange;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1429)
				if ((tmp5)){
					HX_STACK_LINE(1429)
					this->updateTextGlyphs();
				}
				HX_STACK_LINE(1429)
				bool tmp6 = this->_pendingBorderGlyphsChange;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1429)
				if ((tmp6)){
					HX_STACK_LINE(1429)
					this->updateBorderGlyphs();
				}
				HX_STACK_LINE(1429)
				bool tmp7 = this->_pendingTextChange;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1429)
				if ((tmp7)){
					HX_STACK_LINE(1429)
					this->updateText();
					HX_STACK_LINE(1429)
					this->_pendingGraphicChange = true;
				}
				HX_STACK_LINE(1429)
				bool tmp8 = this->_pendingGraphicChange;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1429)
				if ((tmp8)){
					HX_STACK_LINE(1429)
					this->updateGraphic();
				}
			}
		}
	}
	HX_STACK_LINE(1432)
	int tmp4 = value;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1432)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapTextField_obj,set_backgroundColor,return )

::haxegon::bitmapFont::TextBorderStyle BitmapTextField_obj::set_borderStyle( ::haxegon::bitmapFont::TextBorderStyle style){
	HX_STACK_FRAME("haxegon.bitmapFont.BitmapTextField","set_borderStyle",0x8a2e4156,"haxegon.bitmapFont.BitmapTextField.set_borderStyle","haxegon/bitmapFont/BitmapTextField.hx",1436,0xab2b8d62)
	HX_STACK_THIS(this)
	HX_STACK_ARG(style,"style")
	HX_STACK_LINE(1437)
	::haxegon::bitmapFont::TextBorderStyle tmp = style;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1437)
	::haxegon::bitmapFont::TextBorderStyle tmp1 = this->borderStyle;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1437)
	bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1437)
	if ((tmp2)){
		HX_STACK_LINE(1439)
		this->borderStyle = style;
		HX_STACK_LINE(1440)
		this->_pendingBorderGlyphsChange = true;
		HX_STACK_LINE(1441)
		{
			HX_STACK_LINE(1441)
			bool tmp3 = this->updateImmediately;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1441)
			if ((tmp3)){
				HX_STACK_LINE(1441)
				bool tmp4 = this->_pendingTextGlyphsChange;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(1441)
				if ((tmp4)){
					HX_STACK_LINE(1441)
					this->updateTextGlyphs();
				}
				HX_STACK_LINE(1441)
				bool tmp5 = this->_pendingBorderGlyphsChange;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1441)
				if ((tmp5)){
					HX_STACK_LINE(1441)
					this->updateBorderGlyphs();
				}
				HX_STACK_LINE(1441)
				bool tmp6 = this->_pendingTextChange;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1441)
				if ((tmp6)){
					HX_STACK_LINE(1441)
					this->updateText();
					HX_STACK_LINE(1441)
					this->_pendingGraphicChange = true;
				}
				HX_STACK_LINE(1441)
				bool tmp7 = this->_pendingGraphicChange;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1441)
				if ((tmp7)){
					HX_STACK_LINE(1441)
					this->updateGraphic();
				}
			}
		}
	}
	HX_STACK_LINE(1444)
	::haxegon::bitmapFont::TextBorderStyle tmp3 = this->borderStyle;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1444)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapTextField_obj,set_borderStyle,return )

int BitmapTextField_obj::set_borderColor( int value){
	HX_STACK_FRAME("haxegon.bitmapFont.BitmapTextField","set_borderColor",0x506d0d88,"haxegon.bitmapFont.BitmapTextField.set_borderColor","haxegon/bitmapFont/BitmapTextField.hx",1448,0xab2b8d62)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1449)
	int tmp = this->borderColor;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1449)
	int tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1449)
	int tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1449)
	bool tmp3 = (tmp1 != tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1449)
	if ((tmp3)){
		HX_STACK_LINE(1451)
		this->borderColor = value;
		HX_STACK_LINE(1452)
		this->_pendingBorderGlyphsChange = true;
		HX_STACK_LINE(1453)
		{
			HX_STACK_LINE(1453)
			bool tmp4 = this->updateImmediately;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1453)
			if ((tmp4)){
				HX_STACK_LINE(1453)
				bool tmp5 = this->_pendingTextGlyphsChange;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1453)
				if ((tmp5)){
					HX_STACK_LINE(1453)
					this->updateTextGlyphs();
				}
				HX_STACK_LINE(1453)
				bool tmp6 = this->_pendingBorderGlyphsChange;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1453)
				if ((tmp6)){
					HX_STACK_LINE(1453)
					this->updateBorderGlyphs();
				}
				HX_STACK_LINE(1453)
				bool tmp7 = this->_pendingTextChange;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1453)
				if ((tmp7)){
					HX_STACK_LINE(1453)
					this->updateText();
					HX_STACK_LINE(1453)
					this->_pendingGraphicChange = true;
				}
				HX_STACK_LINE(1453)
				bool tmp8 = this->_pendingGraphicChange;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1453)
				if ((tmp8)){
					HX_STACK_LINE(1453)
					this->updateGraphic();
				}
			}
		}
	}
	HX_STACK_LINE(1456)
	int tmp4 = value;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1456)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapTextField_obj,set_borderColor,return )

Float BitmapTextField_obj::set_borderSize( Float value){
	HX_STACK_FRAME("haxegon.bitmapFont.BitmapTextField","set_borderSize",0xaf14903c,"haxegon.bitmapFont.BitmapTextField.set_borderSize","haxegon/bitmapFont/BitmapTextField.hx",1460,0xab2b8d62)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1461)
	Float tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1461)
	Float tmp1 = this->borderSize;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1461)
	bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1461)
	if ((tmp2)){
		HX_STACK_LINE(1463)
		this->borderSize = value;
		HX_STACK_LINE(1465)
		::haxegon::bitmapFont::TextBorderStyle tmp3 = this->borderStyle;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1465)
		bool tmp4 = (tmp3 != ::haxegon::bitmapFont::TextBorderStyle_obj::NONE);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1465)
		if ((tmp4)){
			HX_STACK_LINE(1467)
			this->_pendingGraphicChange = true;
			HX_STACK_LINE(1468)
			{
				HX_STACK_LINE(1468)
				bool tmp5 = this->updateImmediately;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1468)
				if ((tmp5)){
					HX_STACK_LINE(1468)
					bool tmp6 = this->_pendingTextGlyphsChange;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(1468)
					if ((tmp6)){
						HX_STACK_LINE(1468)
						this->updateTextGlyphs();
					}
					HX_STACK_LINE(1468)
					bool tmp7 = this->_pendingBorderGlyphsChange;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(1468)
					if ((tmp7)){
						HX_STACK_LINE(1468)
						this->updateBorderGlyphs();
					}
					HX_STACK_LINE(1468)
					bool tmp8 = this->_pendingTextChange;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(1468)
					if ((tmp8)){
						HX_STACK_LINE(1468)
						this->updateText();
						HX_STACK_LINE(1468)
						this->_pendingGraphicChange = true;
					}
					HX_STACK_LINE(1468)
					bool tmp9 = this->_pendingGraphicChange;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(1468)
					if ((tmp9)){
						HX_STACK_LINE(1468)
						this->updateGraphic();
					}
				}
			}
		}
	}
	HX_STACK_LINE(1472)
	Float tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1472)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapTextField_obj,set_borderSize,return )

Float BitmapTextField_obj::set_borderQuality( Float value){
	HX_STACK_FRAME("haxegon.bitmapFont.BitmapTextField","set_borderQuality",0x64d7b424,"haxegon.bitmapFont.BitmapTextField.set_borderQuality","haxegon/bitmapFont/BitmapTextField.hx",1476,0xab2b8d62)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1477)
	Float tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1477)
	Float tmp1 = ::Math_obj::max((int)0,tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1477)
	Float tmp2 = ::Math_obj::min((int)1,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1477)
	value = tmp2;
	HX_STACK_LINE(1479)
	Float tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1479)
	Float tmp4 = this->borderQuality;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1479)
	bool tmp5 = (tmp3 != tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1479)
	if ((tmp5)){
		HX_STACK_LINE(1481)
		this->borderQuality = value;
		HX_STACK_LINE(1483)
		::haxegon::bitmapFont::TextBorderStyle tmp6 = this->borderStyle;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1483)
		bool tmp7 = (tmp6 != ::haxegon::bitmapFont::TextBorderStyle_obj::NONE);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1483)
		if ((tmp7)){
			HX_STACK_LINE(1485)
			this->_pendingGraphicChange = true;
			HX_STACK_LINE(1486)
			{
				HX_STACK_LINE(1486)
				bool tmp8 = this->updateImmediately;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1486)
				if ((tmp8)){
					HX_STACK_LINE(1486)
					bool tmp9 = this->_pendingTextGlyphsChange;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(1486)
					if ((tmp9)){
						HX_STACK_LINE(1486)
						this->updateTextGlyphs();
					}
					HX_STACK_LINE(1486)
					bool tmp10 = this->_pendingBorderGlyphsChange;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(1486)
					if ((tmp10)){
						HX_STACK_LINE(1486)
						this->updateBorderGlyphs();
					}
					HX_STACK_LINE(1486)
					bool tmp11 = this->_pendingTextChange;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(1486)
					if ((tmp11)){
						HX_STACK_LINE(1486)
						this->updateText();
						HX_STACK_LINE(1486)
						this->_pendingGraphicChange = true;
					}
					HX_STACK_LINE(1486)
					bool tmp12 = this->_pendingGraphicChange;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(1486)
					if ((tmp12)){
						HX_STACK_LINE(1486)
						this->updateGraphic();
					}
				}
			}
		}
	}
	HX_STACK_LINE(1490)
	Float tmp6 = value;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(1490)
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapTextField_obj,set_borderQuality,return )

int BitmapTextField_obj::get_numLines( ){
	HX_STACK_FRAME("haxegon.bitmapFont.BitmapTextField","get_numLines",0x269d1514,"haxegon.bitmapFont.BitmapTextField.get_numLines","haxegon/bitmapFont/BitmapTextField.hx",1494,0xab2b8d62)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1495)
	int tmp = this->_lines->length;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1495)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(BitmapTextField_obj,get_numLines,return )

Float BitmapTextField_obj::get_textWidth( ){
	HX_STACK_FRAME("haxegon.bitmapFont.BitmapTextField","get_textWidth",0x6883f67e,"haxegon.bitmapFont.BitmapTextField.get_textWidth","haxegon/bitmapFont/BitmapTextField.hx",1504,0xab2b8d62)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1505)
	Float max = (int)0;		HX_STACK_VAR(max,"max");
	HX_STACK_LINE(1506)
	int tmp = this->_lines->length;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1506)
	int numLines = tmp;		HX_STACK_VAR(numLines,"numLines");
	HX_STACK_LINE(1507)
	Float lineWidth;		HX_STACK_VAR(lineWidth,"lineWidth");
	HX_STACK_LINE(1508)
	this->_linesWidth = Array_obj< Float >::__new();
	HX_STACK_LINE(1510)
	{
		HX_STACK_LINE(1510)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1510)
		while((true)){
			HX_STACK_LINE(1510)
			bool tmp1 = (_g < numLines);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1510)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1510)
			if ((tmp2)){
				HX_STACK_LINE(1510)
				break;
			}
			HX_STACK_LINE(1510)
			int tmp3 = (_g)++;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1510)
			int i = tmp3;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(1512)
			int tmp4 = i;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1512)
			Float tmp5 = this->getLineWidth(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1512)
			lineWidth = tmp5;
			HX_STACK_LINE(1513)
			Float tmp6 = lineWidth;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1513)
			this->_linesWidth[i] = tmp6;
			HX_STACK_LINE(1514)
			Float tmp7 = max;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1514)
			Float tmp8 = lineWidth;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1514)
			Float tmp9 = ::Math_obj::max(tmp7,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1514)
			max = tmp9;
		}
	}
	HX_STACK_LINE(1517)
	Float tmp1 = max;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1517)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(BitmapTextField_obj,get_textWidth,return )

Float BitmapTextField_obj::get_textHeight( ){
	HX_STACK_FRAME("haxegon.bitmapFont.BitmapTextField","get_textHeight",0xc143306f,"haxegon.bitmapFont.BitmapTextField.get_textHeight","haxegon/bitmapFont/BitmapTextField.hx",1521,0xab2b8d62)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1522)
	Float tmp = this->get_lineHeight();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1522)
	int tmp1 = this->lineSpacing;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1522)
	Float tmp2 = (tmp + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1522)
	int tmp3 = this->_lines->length;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1522)
	Float tmp4 = (tmp2 * tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1522)
	int tmp5 = this->lineSpacing;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1522)
	Float tmp6 = (tmp4 - tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(1522)
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC0(BitmapTextField_obj,get_textHeight,return )

Float BitmapTextField_obj::get_lineHeight( ){
	HX_STACK_FRAME("haxegon.bitmapFont.BitmapTextField","get_lineHeight",0x5efaaaf6,"haxegon.bitmapFont.BitmapTextField.get_lineHeight","haxegon/bitmapFont/BitmapTextField.hx",1526,0xab2b8d62)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1527)
	::haxegon::bitmapFont::BitmapFont tmp = this->font;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1527)
	int tmp1 = tmp->lineHeight;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1527)
	Float tmp2 = this->size;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1527)
	Float tmp3 = (tmp1 * tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1527)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(BitmapTextField_obj,get_lineHeight,return )

bool BitmapTextField_obj::set_updateImmediately( bool value){
	HX_STACK_FRAME("haxegon.bitmapFont.BitmapTextField","set_updateImmediately",0x5767a8a6,"haxegon.bitmapFont.BitmapTextField.set_updateImmediately","haxegon/bitmapFont/BitmapTextField.hx",1531,0xab2b8d62)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1532)
	bool tmp = this->updateImmediately;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1532)
	bool tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1532)
	bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1532)
	if ((tmp2)){
		HX_STACK_LINE(1534)
		this->updateImmediately = value;
		HX_STACK_LINE(1535)
		bool tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1535)
		if ((tmp3)){
			HX_STACK_LINE(1537)
			bool tmp4 = this->_pendingTextGlyphsChange;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1537)
			if ((tmp4)){
				HX_STACK_LINE(1537)
				this->updateTextGlyphs();
			}
			HX_STACK_LINE(1537)
			bool tmp5 = this->_pendingBorderGlyphsChange;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1537)
			if ((tmp5)){
				HX_STACK_LINE(1537)
				this->updateBorderGlyphs();
			}
			HX_STACK_LINE(1537)
			bool tmp6 = this->_pendingTextChange;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1537)
			if ((tmp6)){
				HX_STACK_LINE(1537)
				this->updateText();
				HX_STACK_LINE(1537)
				this->_pendingGraphicChange = true;
			}
			HX_STACK_LINE(1537)
			bool tmp7 = this->_pendingGraphicChange;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1537)
			if ((tmp7)){
				HX_STACK_LINE(1537)
				this->updateGraphic();
			}
		}
	}
	HX_STACK_LINE(1541)
	bool tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1541)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapTextField_obj,set_updateImmediately,return )

bool BitmapTextField_obj::set_smoothing( bool value){
	HX_STACK_FRAME("haxegon.bitmapFont.BitmapTextField","set_smoothing",0xe01b67e5,"haxegon.bitmapFont.BitmapTextField.set_smoothing","haxegon/bitmapFont/BitmapTextField.hx",1545,0xab2b8d62)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1547)
	::openfl::display::Bitmap tmp = this->_bitmap;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1547)
	tmp->smoothing = value;
	HX_STACK_LINE(1556)
	bool tmp1 = this->smoothing = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1556)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapTextField_obj,set_smoothing,return )

Void BitmapTextField_obj::updateTextGlyphs( ){
{
		HX_STACK_FRAME("haxegon.bitmapFont.BitmapTextField","updateTextGlyphs",0xbf93396f,"haxegon.bitmapFont.BitmapTextField.updateTextGlyphs","haxegon/bitmapFont/BitmapTextField.hx",1560,0xab2b8d62)
		HX_STACK_THIS(this)
		HX_STACK_LINE(1562)
		::haxegon::bitmapFont::BitmapFont tmp = this->font;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1562)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1562)
		if ((tmp1)){
			HX_STACK_LINE(1562)
			return null();
		}
		HX_STACK_LINE(1564)
		::haxegon::bitmapFont::BitmapGlyphCollection tmp2 = this->textGlyphs;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1564)
		bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1564)
		if ((tmp3)){
			HX_STACK_LINE(1566)
			::haxegon::bitmapFont::BitmapGlyphCollection tmp4 = this->textGlyphs;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1566)
			tmp4->dispose();
		}
		HX_STACK_LINE(1568)
		::haxegon::bitmapFont::BitmapFont tmp4 = this->font;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1568)
		Float tmp5 = this->size;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1568)
		int tmp6 = this->textColor;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1568)
		bool tmp7 = this->useTextColor;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1568)
		bool tmp8 = this->smoothing;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1568)
		::haxegon::bitmapFont::BitmapGlyphCollection tmp9 = tmp4->prepareGlyphs(tmp5,tmp6,tmp7,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1568)
		this->textGlyphs = tmp9;
		HX_STACK_LINE(1571)
		this->_pendingTextGlyphsChange = false;
		HX_STACK_LINE(1572)
		this->_pendingGraphicChange = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BitmapTextField_obj,updateTextGlyphs,(void))

Void BitmapTextField_obj::updateBorderGlyphs( ){
{
		HX_STACK_FRAME("haxegon.bitmapFont.BitmapTextField","updateBorderGlyphs",0x5b7f4fae,"haxegon.bitmapFont.BitmapTextField.updateBorderGlyphs","haxegon/bitmapFont/BitmapTextField.hx",1576,0xab2b8d62)
		HX_STACK_THIS(this)
		HX_STACK_LINE(1578)
		::haxegon::bitmapFont::BitmapFont tmp = this->font;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1578)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1578)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1578)
		if ((tmp1)){
			HX_STACK_LINE(1578)
			::haxegon::bitmapFont::BitmapGlyphCollection tmp3 = this->borderGlyphs;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1578)
			::haxegon::bitmapFont::BitmapGlyphCollection tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1578)
			bool tmp5 = (tmp4 == null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1578)
			bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1578)
			bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1578)
			bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1578)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1578)
			bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1578)
			bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(1578)
			bool tmp12 = tmp10;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1578)
			if ((tmp12)){
				HX_STACK_LINE(1578)
				int tmp13 = this->borderColor;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(1578)
				int tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(1578)
				int tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(1578)
				int tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(1578)
				int tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(1578)
				::haxegon::bitmapFont::BitmapGlyphCollection tmp18 = this->borderGlyphs;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(1578)
				::haxegon::bitmapFont::BitmapGlyphCollection tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(1578)
				::haxegon::bitmapFont::BitmapGlyphCollection tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(1578)
				::haxegon::bitmapFont::BitmapGlyphCollection tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(1578)
				int tmp22 = tmp21->color;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(1578)
				bool tmp23 = (tmp17 != tmp22);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(1578)
				tmp11 = tmp23;
			}
			else{
				HX_STACK_LINE(1578)
				tmp11 = true;
			}
			HX_STACK_LINE(1578)
			bool tmp13 = tmp11;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(1578)
			bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(1578)
			bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(1578)
			bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(1578)
			bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(1578)
			bool tmp18 = tmp16;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(1578)
			if ((tmp18)){
				HX_STACK_LINE(1578)
				Float tmp19 = this->size;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(1578)
				Float tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(1578)
				Float tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(1578)
				Float tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(1578)
				::haxegon::bitmapFont::BitmapGlyphCollection tmp23 = this->borderGlyphs;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(1578)
				::haxegon::bitmapFont::BitmapGlyphCollection tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(1578)
				::haxegon::bitmapFont::BitmapGlyphCollection tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(1578)
				::haxegon::bitmapFont::BitmapGlyphCollection tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(1578)
				Float tmp27 = tmp26->scale;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(1578)
				bool tmp28 = (tmp22 != tmp27);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(1578)
				tmp17 = tmp28;
			}
			else{
				HX_STACK_LINE(1578)
				tmp17 = true;
			}
			HX_STACK_LINE(1578)
			bool tmp19 = tmp17;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(1578)
			bool tmp20 = !(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(1578)
			bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(1578)
			bool tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(1578)
			if ((tmp22)){
				HX_STACK_LINE(1578)
				::haxegon::bitmapFont::BitmapFont tmp23 = this->font;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(1578)
				::haxegon::bitmapFont::BitmapFont tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(1578)
				::haxegon::bitmapFont::BitmapFont tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(1578)
				::haxegon::bitmapFont::BitmapGlyphCollection tmp26 = this->borderGlyphs;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(1578)
				::haxegon::bitmapFont::BitmapGlyphCollection tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(1578)
				::haxegon::bitmapFont::BitmapGlyphCollection tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(1578)
				::haxegon::bitmapFont::BitmapFont tmp29 = tmp28->font;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(1578)
				tmp2 = (tmp25 != tmp29);
			}
			else{
				HX_STACK_LINE(1578)
				tmp2 = true;
			}
		}
		else{
			HX_STACK_LINE(1578)
			tmp2 = false;
		}
		HX_STACK_LINE(1578)
		if ((tmp2)){
			HX_STACK_LINE(1580)
			::haxegon::bitmapFont::BitmapGlyphCollection tmp3 = this->borderGlyphs;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1580)
			bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1580)
			if ((tmp4)){
				HX_STACK_LINE(1582)
				::haxegon::bitmapFont::BitmapGlyphCollection tmp5 = this->borderGlyphs;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1582)
				tmp5->dispose();
			}
			HX_STACK_LINE(1584)
			::haxegon::bitmapFont::BitmapFont tmp5 = this->font;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1584)
			Float tmp6 = this->size;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1584)
			int tmp7 = this->borderColor;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1584)
			bool tmp8 = this->smoothing;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1584)
			::haxegon::bitmapFont::BitmapGlyphCollection tmp9 = tmp5->prepareGlyphs(tmp6,tmp7,true,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1584)
			this->borderGlyphs = tmp9;
		}
		HX_STACK_LINE(1588)
		this->_pendingBorderGlyphsChange = false;
		HX_STACK_LINE(1589)
		this->_pendingGraphicChange = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BitmapTextField_obj,updateBorderGlyphs,(void))


BitmapTextField_obj::BitmapTextField_obj()
{
}

void BitmapTextField_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BitmapTextField);
	HX_MARK_MEMBER_NAME(font,"font");
	HX_MARK_MEMBER_NAME(text,"text");
	HX_MARK_MEMBER_NAME(_lines,"_lines");
	HX_MARK_MEMBER_NAME(_linesWidth,"_linesWidth");
	HX_MARK_MEMBER_NAME(alignment,"alignment");
	HX_MARK_MEMBER_NAME(lineSpacing,"lineSpacing");
	HX_MARK_MEMBER_NAME(letterSpacing,"letterSpacing");
	HX_MARK_MEMBER_NAME(autoUpperCase,"autoUpperCase");
	HX_MARK_MEMBER_NAME(wordWrap,"wordWrap");
	HX_MARK_MEMBER_NAME(wrapByWord,"wrapByWord");
	HX_MARK_MEMBER_NAME(autoSize,"autoSize");
	HX_MARK_MEMBER_NAME(padding,"padding");
	HX_MARK_MEMBER_NAME(textWidth,"textWidth");
	HX_MARK_MEMBER_NAME(textHeight,"textHeight");
	HX_MARK_MEMBER_NAME(lineHeight,"lineHeight");
	HX_MARK_MEMBER_NAME(numSpacesInTab,"numSpacesInTab");
	HX_MARK_MEMBER_NAME(_tabSpaces,"_tabSpaces");
	HX_MARK_MEMBER_NAME(textColor,"textColor");
	HX_MARK_MEMBER_NAME(useTextColor,"useTextColor");
	HX_MARK_MEMBER_NAME(borderStyle,"borderStyle");
	HX_MARK_MEMBER_NAME(borderColor,"borderColor");
	HX_MARK_MEMBER_NAME(borderSize,"borderSize");
	HX_MARK_MEMBER_NAME(borderQuality,"borderQuality");
	HX_MARK_MEMBER_NAME(shadowOffset,"shadowOffset");
	HX_MARK_MEMBER_NAME(background,"background");
	HX_MARK_MEMBER_NAME(backgroundColor,"backgroundColor");
	HX_MARK_MEMBER_NAME(multiLine,"multiLine");
	HX_MARK_MEMBER_NAME(numLines,"numLines");
	HX_MARK_MEMBER_NAME(size,"size");
	HX_MARK_MEMBER_NAME(smoothing,"smoothing");
	HX_MARK_MEMBER_NAME(updateImmediately,"updateImmediately");
	HX_MARK_MEMBER_NAME(_pendingTextChange,"_pendingTextChange");
	HX_MARK_MEMBER_NAME(_pendingGraphicChange,"_pendingGraphicChange");
	HX_MARK_MEMBER_NAME(_pendingTextGlyphsChange,"_pendingTextGlyphsChange");
	HX_MARK_MEMBER_NAME(_pendingBorderGlyphsChange,"_pendingBorderGlyphsChange");
	HX_MARK_MEMBER_NAME(_fieldWidth,"_fieldWidth");
	HX_MARK_MEMBER_NAME(_fieldHeight,"_fieldHeight");
	HX_MARK_MEMBER_NAME(_bitmap,"_bitmap");
	HX_MARK_MEMBER_NAME(_bitmapData,"_bitmapData");
	HX_MARK_MEMBER_NAME(textGlyphs,"textGlyphs");
	HX_MARK_MEMBER_NAME(borderGlyphs,"borderGlyphs");
	HX_MARK_MEMBER_NAME(_point,"_point");
	::openfl::display::Sprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void BitmapTextField_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(font,"font");
	HX_VISIT_MEMBER_NAME(text,"text");
	HX_VISIT_MEMBER_NAME(_lines,"_lines");
	HX_VISIT_MEMBER_NAME(_linesWidth,"_linesWidth");
	HX_VISIT_MEMBER_NAME(alignment,"alignment");
	HX_VISIT_MEMBER_NAME(lineSpacing,"lineSpacing");
	HX_VISIT_MEMBER_NAME(letterSpacing,"letterSpacing");
	HX_VISIT_MEMBER_NAME(autoUpperCase,"autoUpperCase");
	HX_VISIT_MEMBER_NAME(wordWrap,"wordWrap");
	HX_VISIT_MEMBER_NAME(wrapByWord,"wrapByWord");
	HX_VISIT_MEMBER_NAME(autoSize,"autoSize");
	HX_VISIT_MEMBER_NAME(padding,"padding");
	HX_VISIT_MEMBER_NAME(textWidth,"textWidth");
	HX_VISIT_MEMBER_NAME(textHeight,"textHeight");
	HX_VISIT_MEMBER_NAME(lineHeight,"lineHeight");
	HX_VISIT_MEMBER_NAME(numSpacesInTab,"numSpacesInTab");
	HX_VISIT_MEMBER_NAME(_tabSpaces,"_tabSpaces");
	HX_VISIT_MEMBER_NAME(textColor,"textColor");
	HX_VISIT_MEMBER_NAME(useTextColor,"useTextColor");
	HX_VISIT_MEMBER_NAME(borderStyle,"borderStyle");
	HX_VISIT_MEMBER_NAME(borderColor,"borderColor");
	HX_VISIT_MEMBER_NAME(borderSize,"borderSize");
	HX_VISIT_MEMBER_NAME(borderQuality,"borderQuality");
	HX_VISIT_MEMBER_NAME(shadowOffset,"shadowOffset");
	HX_VISIT_MEMBER_NAME(background,"background");
	HX_VISIT_MEMBER_NAME(backgroundColor,"backgroundColor");
	HX_VISIT_MEMBER_NAME(multiLine,"multiLine");
	HX_VISIT_MEMBER_NAME(numLines,"numLines");
	HX_VISIT_MEMBER_NAME(size,"size");
	HX_VISIT_MEMBER_NAME(smoothing,"smoothing");
	HX_VISIT_MEMBER_NAME(updateImmediately,"updateImmediately");
	HX_VISIT_MEMBER_NAME(_pendingTextChange,"_pendingTextChange");
	HX_VISIT_MEMBER_NAME(_pendingGraphicChange,"_pendingGraphicChange");
	HX_VISIT_MEMBER_NAME(_pendingTextGlyphsChange,"_pendingTextGlyphsChange");
	HX_VISIT_MEMBER_NAME(_pendingBorderGlyphsChange,"_pendingBorderGlyphsChange");
	HX_VISIT_MEMBER_NAME(_fieldWidth,"_fieldWidth");
	HX_VISIT_MEMBER_NAME(_fieldHeight,"_fieldHeight");
	HX_VISIT_MEMBER_NAME(_bitmap,"_bitmap");
	HX_VISIT_MEMBER_NAME(_bitmapData,"_bitmapData");
	HX_VISIT_MEMBER_NAME(textGlyphs,"textGlyphs");
	HX_VISIT_MEMBER_NAME(borderGlyphs,"borderGlyphs");
	HX_VISIT_MEMBER_NAME(_point,"_point");
	::openfl::display::Sprite_obj::__Visit(HX_VISIT_ARG);
}

Dynamic BitmapTextField_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"font") ) { return font; }
		if (HX_FIELD_EQ(inName,"text") ) { return text; }
		if (HX_FIELD_EQ(inName,"size") ) { return size; }
		if (HX_FIELD_EQ(inName,"wrap") ) { return wrap_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_lines") ) { return _lines; }
		if (HX_FIELD_EQ(inName,"_point") ) { return _point; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"padding") ) { return padding; }
		if (HX_FIELD_EQ(inName,"_bitmap") ) { return _bitmap; }
		if (HX_FIELD_EQ(inName,"dispose") ) { return dispose_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"wordWrap") ) { return wordWrap; }
		if (HX_FIELD_EQ(inName,"autoSize") ) { return autoSize; }
		if (HX_FIELD_EQ(inName,"numLines") ) { return inCallProp == hx::paccAlways ? get_numLines() : numLines; }
		if (HX_FIELD_EQ(inName,"set_text") ) { return set_text_dyn(); }
		if (HX_FIELD_EQ(inName,"cutLines") ) { return cutLines_dyn(); }
		if (HX_FIELD_EQ(inName,"blitLine") ) { return blitLine_dyn(); }
		if (HX_FIELD_EQ(inName,"set_font") ) { return set_font_dyn(); }
		if (HX_FIELD_EQ(inName,"set_size") ) { return set_size_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"alignment") ) { return alignment; }
		if (HX_FIELD_EQ(inName,"textWidth") ) { return inCallProp == hx::paccAlways ? get_textWidth() : textWidth; }
		if (HX_FIELD_EQ(inName,"textColor") ) { return textColor; }
		if (HX_FIELD_EQ(inName,"multiLine") ) { return multiLine; }
		if (HX_FIELD_EQ(inName,"smoothing") ) { return smoothing; }
		if (HX_FIELD_EQ(inName,"set_width") ) { return set_width_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"wrapByWord") ) { return wrapByWord; }
		if (HX_FIELD_EQ(inName,"textHeight") ) { return inCallProp == hx::paccAlways ? get_textHeight() : textHeight; }
		if (HX_FIELD_EQ(inName,"lineHeight") ) { return inCallProp == hx::paccAlways ? get_lineHeight() : lineHeight; }
		if (HX_FIELD_EQ(inName,"_tabSpaces") ) { return _tabSpaces; }
		if (HX_FIELD_EQ(inName,"borderSize") ) { return borderSize; }
		if (HX_FIELD_EQ(inName,"background") ) { return background; }
		if (HX_FIELD_EQ(inName,"textGlyphs") ) { return textGlyphs; }
		if (HX_FIELD_EQ(inName,"updateText") ) { return updateText_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_linesWidth") ) { return _linesWidth; }
		if (HX_FIELD_EQ(inName,"lineSpacing") ) { return lineSpacing; }
		if (HX_FIELD_EQ(inName,"borderStyle") ) { return borderStyle; }
		if (HX_FIELD_EQ(inName,"borderColor") ) { return borderColor; }
		if (HX_FIELD_EQ(inName,"_fieldWidth") ) { return _fieldWidth; }
		if (HX_FIELD_EQ(inName,"_bitmapData") ) { return _bitmapData; }
		if (HX_FIELD_EQ(inName,"set_padding") ) { return set_padding_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"useTextColor") ) { return useTextColor; }
		if (HX_FIELD_EQ(inName,"shadowOffset") ) { return shadowOffset; }
		if (HX_FIELD_EQ(inName,"_fieldHeight") ) { return _fieldHeight; }
		if (HX_FIELD_EQ(inName,"borderGlyphs") ) { return borderGlyphs; }
		if (HX_FIELD_EQ(inName,"getLineWidth") ) { return getLineWidth_dyn(); }
		if (HX_FIELD_EQ(inName,"set_wordWrap") ) { return set_wordWrap_dyn(); }
		if (HX_FIELD_EQ(inName,"set_autoSize") ) { return set_autoSize_dyn(); }
		if (HX_FIELD_EQ(inName,"get_numLines") ) { return get_numLines_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"letterSpacing") ) { return letterSpacing; }
		if (HX_FIELD_EQ(inName,"autoUpperCase") ) { return autoUpperCase; }
		if (HX_FIELD_EQ(inName,"borderQuality") ) { return borderQuality; }
		if (HX_FIELD_EQ(inName,"set_textColor") ) { return set_textColor_dyn(); }
		if (HX_FIELD_EQ(inName,"updateGraphic") ) { return updateGraphic_dyn(); }
		if (HX_FIELD_EQ(inName,"set_alignment") ) { return set_alignment_dyn(); }
		if (HX_FIELD_EQ(inName,"set_multiLine") ) { return set_multiLine_dyn(); }
		if (HX_FIELD_EQ(inName,"get_textWidth") ) { return get_textWidth_dyn(); }
		if (HX_FIELD_EQ(inName,"set_smoothing") ) { return set_smoothing_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"numSpacesInTab") ) { return numSpacesInTab; }
		if (HX_FIELD_EQ(inName,"getStringWidth") ) { return getStringWidth_dyn(); }
		if (HX_FIELD_EQ(inName,"wrapLineByWord") ) { return wrapLineByWord_dyn(); }
		if (HX_FIELD_EQ(inName,"setBorderStyle") ) { return setBorderStyle_dyn(); }
		if (HX_FIELD_EQ(inName,"set_wrapByWord") ) { return set_wrapByWord_dyn(); }
		if (HX_FIELD_EQ(inName,"set_background") ) { return set_background_dyn(); }
		if (HX_FIELD_EQ(inName,"set_borderSize") ) { return set_borderSize_dyn(); }
		if (HX_FIELD_EQ(inName,"get_textHeight") ) { return get_textHeight_dyn(); }
		if (HX_FIELD_EQ(inName,"get_lineHeight") ) { return get_lineHeight_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"backgroundColor") ) { return backgroundColor; }
		if (HX_FIELD_EQ(inName,"computeTextSize") ) { return computeTextSize_dyn(); }
		if (HX_FIELD_EQ(inName,"set_lineSpacing") ) { return set_lineSpacing_dyn(); }
		if (HX_FIELD_EQ(inName,"set_borderStyle") ) { return set_borderStyle_dyn(); }
		if (HX_FIELD_EQ(inName,"set_borderColor") ) { return set_borderColor_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"set_useTextColor") ) { return set_useTextColor_dyn(); }
		if (HX_FIELD_EQ(inName,"updateTextGlyphs") ) { return updateTextGlyphs_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"updateImmediately") ) { return updateImmediately; }
		if (HX_FIELD_EQ(inName,"set_letterSpacing") ) { return set_letterSpacing_dyn(); }
		if (HX_FIELD_EQ(inName,"set_autoUpperCase") ) { return set_autoUpperCase_dyn(); }
		if (HX_FIELD_EQ(inName,"set_borderQuality") ) { return set_borderQuality_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_pendingTextChange") ) { return _pendingTextChange; }
		if (HX_FIELD_EQ(inName,"forceGraphicUpdate") ) { return forceGraphicUpdate_dyn(); }
		if (HX_FIELD_EQ(inName,"splitLineIntoWords") ) { return splitLineIntoWords_dyn(); }
		if (HX_FIELD_EQ(inName,"set_numSpacesInTab") ) { return set_numSpacesInTab_dyn(); }
		if (HX_FIELD_EQ(inName,"updateBorderGlyphs") ) { return updateBorderGlyphs_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"checkPendingChanges") ) { return checkPendingChanges_dyn(); }
		if (HX_FIELD_EQ(inName,"wrapLineByCharacter") ) { return wrapLineByCharacter_dyn(); }
		if (HX_FIELD_EQ(inName,"set_backgroundColor") ) { return set_backgroundColor_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_pendingGraphicChange") ) { return _pendingGraphicChange; }
		if (HX_FIELD_EQ(inName,"checkImmediateChanges") ) { return checkImmediateChanges_dyn(); }
		if (HX_FIELD_EQ(inName,"set_updateImmediately") ) { return set_updateImmediately_dyn(); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"_pendingTextGlyphsChange") ) { return _pendingTextGlyphsChange; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"_pendingBorderGlyphsChange") ) { return _pendingBorderGlyphsChange; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic BitmapTextField_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"font") ) { if (inCallProp == hx::paccAlways) return set_font(inValue);font=inValue.Cast< ::haxegon::bitmapFont::BitmapFont >(); return inValue; }
		if (HX_FIELD_EQ(inName,"text") ) { if (inCallProp == hx::paccAlways) return set_text(inValue);text=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"size") ) { if (inCallProp == hx::paccAlways) return set_size(inValue);size=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_lines") ) { _lines=inValue.Cast< Array< ::String > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_point") ) { _point=inValue.Cast< ::openfl::geom::Point >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"padding") ) { if (inCallProp == hx::paccAlways) return set_padding(inValue);padding=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_bitmap") ) { _bitmap=inValue.Cast< ::openfl::display::Bitmap >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"wordWrap") ) { if (inCallProp == hx::paccAlways) return set_wordWrap(inValue);wordWrap=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"autoSize") ) { if (inCallProp == hx::paccAlways) return set_autoSize(inValue);autoSize=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"numLines") ) { numLines=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"alignment") ) { if (inCallProp == hx::paccAlways) return set_alignment(inValue);alignment=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"textWidth") ) { textWidth=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"textColor") ) { if (inCallProp == hx::paccAlways) return set_textColor(inValue);textColor=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"multiLine") ) { if (inCallProp == hx::paccAlways) return set_multiLine(inValue);multiLine=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"smoothing") ) { if (inCallProp == hx::paccAlways) return set_smoothing(inValue);smoothing=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"wrapByWord") ) { if (inCallProp == hx::paccAlways) return set_wrapByWord(inValue);wrapByWord=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"textHeight") ) { textHeight=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lineHeight") ) { lineHeight=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_tabSpaces") ) { _tabSpaces=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"borderSize") ) { if (inCallProp == hx::paccAlways) return set_borderSize(inValue);borderSize=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"background") ) { if (inCallProp == hx::paccAlways) return set_background(inValue);background=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"textGlyphs") ) { textGlyphs=inValue.Cast< ::haxegon::bitmapFont::BitmapGlyphCollection >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_linesWidth") ) { _linesWidth=inValue.Cast< Array< Float > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lineSpacing") ) { if (inCallProp == hx::paccAlways) return set_lineSpacing(inValue);lineSpacing=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"borderStyle") ) { if (inCallProp == hx::paccAlways) return set_borderStyle(inValue);borderStyle=inValue.Cast< ::haxegon::bitmapFont::TextBorderStyle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"borderColor") ) { if (inCallProp == hx::paccAlways) return set_borderColor(inValue);borderColor=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_fieldWidth") ) { _fieldWidth=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_bitmapData") ) { _bitmapData=inValue.Cast< ::openfl::display::BitmapData >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"useTextColor") ) { if (inCallProp == hx::paccAlways) return set_useTextColor(inValue);useTextColor=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"shadowOffset") ) { shadowOffset=inValue.Cast< ::openfl::geom::Point >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_fieldHeight") ) { _fieldHeight=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"borderGlyphs") ) { borderGlyphs=inValue.Cast< ::haxegon::bitmapFont::BitmapGlyphCollection >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"letterSpacing") ) { if (inCallProp == hx::paccAlways) return set_letterSpacing(inValue);letterSpacing=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"autoUpperCase") ) { if (inCallProp == hx::paccAlways) return set_autoUpperCase(inValue);autoUpperCase=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"borderQuality") ) { if (inCallProp == hx::paccAlways) return set_borderQuality(inValue);borderQuality=inValue.Cast< Float >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"numSpacesInTab") ) { if (inCallProp == hx::paccAlways) return set_numSpacesInTab(inValue);numSpacesInTab=inValue.Cast< int >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"backgroundColor") ) { if (inCallProp == hx::paccAlways) return set_backgroundColor(inValue);backgroundColor=inValue.Cast< int >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"updateImmediately") ) { if (inCallProp == hx::paccAlways) return set_updateImmediately(inValue);updateImmediately=inValue.Cast< bool >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_pendingTextChange") ) { _pendingTextChange=inValue.Cast< bool >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_pendingGraphicChange") ) { _pendingGraphicChange=inValue.Cast< bool >(); return inValue; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"_pendingTextGlyphsChange") ) { _pendingTextGlyphsChange=inValue.Cast< bool >(); return inValue; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"_pendingBorderGlyphsChange") ) { _pendingBorderGlyphsChange=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void BitmapTextField_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("font","\xcf","\x5d","\xc0","\x43"));
	outFields->push(HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c"));
	outFields->push(HX_HCSTRING("_lines","\x40","\x25","\xe9","\x70"));
	outFields->push(HX_HCSTRING("_linesWidth","\xa6","\xf8","\x37","\xcb"));
	outFields->push(HX_HCSTRING("alignment","\xe3","\xe2","\x3d","\xea"));
	outFields->push(HX_HCSTRING("lineSpacing","\xef","\xe9","\x0e","\xd0"));
	outFields->push(HX_HCSTRING("letterSpacing","\x3d","\xb7","\x03","\xf5"));
	outFields->push(HX_HCSTRING("autoUpperCase","\xc3","\xd7","\x69","\xb3"));
	outFields->push(HX_HCSTRING("wordWrap","\xb4","\x14","\xdb","\x00"));
	outFields->push(HX_HCSTRING("wrapByWord","\xab","\xdc","\x7f","\x78"));
	outFields->push(HX_HCSTRING("autoSize","\xd0","\x8f","\x79","\x2f"));
	outFields->push(HX_HCSTRING("padding","\xd1","\x59","\x7d","\xd0"));
	outFields->push(HX_HCSTRING("textWidth","\x19","\x46","\x50","\x63"));
	outFields->push(HX_HCSTRING("textHeight","\x74","\x88","\x3c","\x39"));
	outFields->push(HX_HCSTRING("lineHeight","\xfb","\x02","\xf4","\xd6"));
	outFields->push(HX_HCSTRING("numSpacesInTab","\x9d","\x3a","\xd9","\x2e"));
	outFields->push(HX_HCSTRING("_tabSpaces","\xe3","\xd8","\x43","\x75"));
	outFields->push(HX_HCSTRING("textColor","\x76","\x01","\x4a","\xe3"));
	outFields->push(HX_HCSTRING("useTextColor","\x2f","\x74","\xe5","\x52"));
	outFields->push(HX_HCSTRING("borderStyle","\xa5","\x70","\x96","\x10"));
	outFields->push(HX_HCSTRING("borderColor","\xd7","\x3c","\xd5","\xd6"));
	outFields->push(HX_HCSTRING("borderSize","\xcd","\xff","\xed","\x06"));
	outFields->push(HX_HCSTRING("borderQuality","\x33","\x95","\x25","\x79"));
	outFields->push(HX_HCSTRING("shadowOffset","\x93","\xfb","\x0b","\xdc"));
	outFields->push(HX_HCSTRING("background","\xee","\x93","\x1d","\x26"));
	outFields->push(HX_HCSTRING("backgroundColor","\x95","\x4e","\x47","\x0d"));
	outFields->push(HX_HCSTRING("multiLine","\x0d","\xff","\xea","\x88"));
	outFields->push(HX_HCSTRING("numLines","\xd9","\xf1","\x11","\x32"));
	outFields->push(HX_HCSTRING("size","\xc1","\xa0","\x53","\x4c"));
	outFields->push(HX_HCSTRING("smoothing","\x74","\xd5","\xe1","\x95"));
	outFields->push(HX_HCSTRING("updateImmediately","\x35","\xbd","\xbc","\xe1"));
	outFields->push(HX_HCSTRING("_pendingTextChange","\xf5","\xc5","\x5a","\x5e"));
	outFields->push(HX_HCSTRING("_pendingGraphicChange","\x40","\xe5","\xaa","\x0e"));
	outFields->push(HX_HCSTRING("_pendingTextGlyphsChange","\x5c","\x94","\x02","\x91"));
	outFields->push(HX_HCSTRING("_pendingBorderGlyphsChange","\x1b","\x65","\x77","\x18"));
	outFields->push(HX_HCSTRING("_fieldWidth","\x0b","\xfc","\x6e","\x6a"));
	outFields->push(HX_HCSTRING("_fieldHeight","\x42","\x06","\xfd","\x6c"));
	outFields->push(HX_HCSTRING("_bitmap","\x8e","\x21","\x83","\x5f"));
	outFields->push(HX_HCSTRING("_bitmapData","\xd8","\x82","\x4a","\x06"));
	outFields->push(HX_HCSTRING("textGlyphs","\xd4","\x79","\x49","\xe5"));
	outFields->push(HX_HCSTRING("borderGlyphs","\x53","\x33","\x92","\x0b"));
	outFields->push(HX_HCSTRING("_point","\x91","\xfb","\x76","\xc2"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxegon::bitmapFont::BitmapFont*/ ,(int)offsetof(BitmapTextField_obj,font),HX_HCSTRING("font","\xcf","\x5d","\xc0","\x43")},
	{hx::fsString,(int)offsetof(BitmapTextField_obj,text),HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c")},
	{hx::fsObject /*Array< ::String >*/ ,(int)offsetof(BitmapTextField_obj,_lines),HX_HCSTRING("_lines","\x40","\x25","\xe9","\x70")},
	{hx::fsObject /*Array< Float >*/ ,(int)offsetof(BitmapTextField_obj,_linesWidth),HX_HCSTRING("_linesWidth","\xa6","\xf8","\x37","\xcb")},
	{hx::fsString,(int)offsetof(BitmapTextField_obj,alignment),HX_HCSTRING("alignment","\xe3","\xe2","\x3d","\xea")},
	{hx::fsInt,(int)offsetof(BitmapTextField_obj,lineSpacing),HX_HCSTRING("lineSpacing","\xef","\xe9","\x0e","\xd0")},
	{hx::fsInt,(int)offsetof(BitmapTextField_obj,letterSpacing),HX_HCSTRING("letterSpacing","\x3d","\xb7","\x03","\xf5")},
	{hx::fsBool,(int)offsetof(BitmapTextField_obj,autoUpperCase),HX_HCSTRING("autoUpperCase","\xc3","\xd7","\x69","\xb3")},
	{hx::fsBool,(int)offsetof(BitmapTextField_obj,wordWrap),HX_HCSTRING("wordWrap","\xb4","\x14","\xdb","\x00")},
	{hx::fsBool,(int)offsetof(BitmapTextField_obj,wrapByWord),HX_HCSTRING("wrapByWord","\xab","\xdc","\x7f","\x78")},
	{hx::fsBool,(int)offsetof(BitmapTextField_obj,autoSize),HX_HCSTRING("autoSize","\xd0","\x8f","\x79","\x2f")},
	{hx::fsInt,(int)offsetof(BitmapTextField_obj,padding),HX_HCSTRING("padding","\xd1","\x59","\x7d","\xd0")},
	{hx::fsFloat,(int)offsetof(BitmapTextField_obj,textWidth),HX_HCSTRING("textWidth","\x19","\x46","\x50","\x63")},
	{hx::fsFloat,(int)offsetof(BitmapTextField_obj,textHeight),HX_HCSTRING("textHeight","\x74","\x88","\x3c","\x39")},
	{hx::fsFloat,(int)offsetof(BitmapTextField_obj,lineHeight),HX_HCSTRING("lineHeight","\xfb","\x02","\xf4","\xd6")},
	{hx::fsInt,(int)offsetof(BitmapTextField_obj,numSpacesInTab),HX_HCSTRING("numSpacesInTab","\x9d","\x3a","\xd9","\x2e")},
	{hx::fsString,(int)offsetof(BitmapTextField_obj,_tabSpaces),HX_HCSTRING("_tabSpaces","\xe3","\xd8","\x43","\x75")},
	{hx::fsInt,(int)offsetof(BitmapTextField_obj,textColor),HX_HCSTRING("textColor","\x76","\x01","\x4a","\xe3")},
	{hx::fsBool,(int)offsetof(BitmapTextField_obj,useTextColor),HX_HCSTRING("useTextColor","\x2f","\x74","\xe5","\x52")},
	{hx::fsObject /*::haxegon::bitmapFont::TextBorderStyle*/ ,(int)offsetof(BitmapTextField_obj,borderStyle),HX_HCSTRING("borderStyle","\xa5","\x70","\x96","\x10")},
	{hx::fsInt,(int)offsetof(BitmapTextField_obj,borderColor),HX_HCSTRING("borderColor","\xd7","\x3c","\xd5","\xd6")},
	{hx::fsFloat,(int)offsetof(BitmapTextField_obj,borderSize),HX_HCSTRING("borderSize","\xcd","\xff","\xed","\x06")},
	{hx::fsFloat,(int)offsetof(BitmapTextField_obj,borderQuality),HX_HCSTRING("borderQuality","\x33","\x95","\x25","\x79")},
	{hx::fsObject /*::openfl::geom::Point*/ ,(int)offsetof(BitmapTextField_obj,shadowOffset),HX_HCSTRING("shadowOffset","\x93","\xfb","\x0b","\xdc")},
	{hx::fsBool,(int)offsetof(BitmapTextField_obj,background),HX_HCSTRING("background","\xee","\x93","\x1d","\x26")},
	{hx::fsInt,(int)offsetof(BitmapTextField_obj,backgroundColor),HX_HCSTRING("backgroundColor","\x95","\x4e","\x47","\x0d")},
	{hx::fsBool,(int)offsetof(BitmapTextField_obj,multiLine),HX_HCSTRING("multiLine","\x0d","\xff","\xea","\x88")},
	{hx::fsInt,(int)offsetof(BitmapTextField_obj,numLines),HX_HCSTRING("numLines","\xd9","\xf1","\x11","\x32")},
	{hx::fsFloat,(int)offsetof(BitmapTextField_obj,size),HX_HCSTRING("size","\xc1","\xa0","\x53","\x4c")},
	{hx::fsBool,(int)offsetof(BitmapTextField_obj,smoothing),HX_HCSTRING("smoothing","\x74","\xd5","\xe1","\x95")},
	{hx::fsBool,(int)offsetof(BitmapTextField_obj,updateImmediately),HX_HCSTRING("updateImmediately","\x35","\xbd","\xbc","\xe1")},
	{hx::fsBool,(int)offsetof(BitmapTextField_obj,_pendingTextChange),HX_HCSTRING("_pendingTextChange","\xf5","\xc5","\x5a","\x5e")},
	{hx::fsBool,(int)offsetof(BitmapTextField_obj,_pendingGraphicChange),HX_HCSTRING("_pendingGraphicChange","\x40","\xe5","\xaa","\x0e")},
	{hx::fsBool,(int)offsetof(BitmapTextField_obj,_pendingTextGlyphsChange),HX_HCSTRING("_pendingTextGlyphsChange","\x5c","\x94","\x02","\x91")},
	{hx::fsBool,(int)offsetof(BitmapTextField_obj,_pendingBorderGlyphsChange),HX_HCSTRING("_pendingBorderGlyphsChange","\x1b","\x65","\x77","\x18")},
	{hx::fsInt,(int)offsetof(BitmapTextField_obj,_fieldWidth),HX_HCSTRING("_fieldWidth","\x0b","\xfc","\x6e","\x6a")},
	{hx::fsInt,(int)offsetof(BitmapTextField_obj,_fieldHeight),HX_HCSTRING("_fieldHeight","\x42","\x06","\xfd","\x6c")},
	{hx::fsObject /*::openfl::display::Bitmap*/ ,(int)offsetof(BitmapTextField_obj,_bitmap),HX_HCSTRING("_bitmap","\x8e","\x21","\x83","\x5f")},
	{hx::fsObject /*::openfl::display::BitmapData*/ ,(int)offsetof(BitmapTextField_obj,_bitmapData),HX_HCSTRING("_bitmapData","\xd8","\x82","\x4a","\x06")},
	{hx::fsObject /*::haxegon::bitmapFont::BitmapGlyphCollection*/ ,(int)offsetof(BitmapTextField_obj,textGlyphs),HX_HCSTRING("textGlyphs","\xd4","\x79","\x49","\xe5")},
	{hx::fsObject /*::haxegon::bitmapFont::BitmapGlyphCollection*/ ,(int)offsetof(BitmapTextField_obj,borderGlyphs),HX_HCSTRING("borderGlyphs","\x53","\x33","\x92","\x0b")},
	{hx::fsObject /*::openfl::geom::Point*/ ,(int)offsetof(BitmapTextField_obj,_point),HX_HCSTRING("_point","\x91","\xfb","\x76","\xc2")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("font","\xcf","\x5d","\xc0","\x43"),
	HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c"),
	HX_HCSTRING("_lines","\x40","\x25","\xe9","\x70"),
	HX_HCSTRING("_linesWidth","\xa6","\xf8","\x37","\xcb"),
	HX_HCSTRING("alignment","\xe3","\xe2","\x3d","\xea"),
	HX_HCSTRING("lineSpacing","\xef","\xe9","\x0e","\xd0"),
	HX_HCSTRING("letterSpacing","\x3d","\xb7","\x03","\xf5"),
	HX_HCSTRING("autoUpperCase","\xc3","\xd7","\x69","\xb3"),
	HX_HCSTRING("wordWrap","\xb4","\x14","\xdb","\x00"),
	HX_HCSTRING("wrapByWord","\xab","\xdc","\x7f","\x78"),
	HX_HCSTRING("autoSize","\xd0","\x8f","\x79","\x2f"),
	HX_HCSTRING("padding","\xd1","\x59","\x7d","\xd0"),
	HX_HCSTRING("textWidth","\x19","\x46","\x50","\x63"),
	HX_HCSTRING("textHeight","\x74","\x88","\x3c","\x39"),
	HX_HCSTRING("lineHeight","\xfb","\x02","\xf4","\xd6"),
	HX_HCSTRING("numSpacesInTab","\x9d","\x3a","\xd9","\x2e"),
	HX_HCSTRING("_tabSpaces","\xe3","\xd8","\x43","\x75"),
	HX_HCSTRING("textColor","\x76","\x01","\x4a","\xe3"),
	HX_HCSTRING("useTextColor","\x2f","\x74","\xe5","\x52"),
	HX_HCSTRING("borderStyle","\xa5","\x70","\x96","\x10"),
	HX_HCSTRING("borderColor","\xd7","\x3c","\xd5","\xd6"),
	HX_HCSTRING("borderSize","\xcd","\xff","\xed","\x06"),
	HX_HCSTRING("borderQuality","\x33","\x95","\x25","\x79"),
	HX_HCSTRING("shadowOffset","\x93","\xfb","\x0b","\xdc"),
	HX_HCSTRING("background","\xee","\x93","\x1d","\x26"),
	HX_HCSTRING("backgroundColor","\x95","\x4e","\x47","\x0d"),
	HX_HCSTRING("multiLine","\x0d","\xff","\xea","\x88"),
	HX_HCSTRING("numLines","\xd9","\xf1","\x11","\x32"),
	HX_HCSTRING("size","\xc1","\xa0","\x53","\x4c"),
	HX_HCSTRING("smoothing","\x74","\xd5","\xe1","\x95"),
	HX_HCSTRING("updateImmediately","\x35","\xbd","\xbc","\xe1"),
	HX_HCSTRING("_pendingTextChange","\xf5","\xc5","\x5a","\x5e"),
	HX_HCSTRING("_pendingGraphicChange","\x40","\xe5","\xaa","\x0e"),
	HX_HCSTRING("_pendingTextGlyphsChange","\x5c","\x94","\x02","\x91"),
	HX_HCSTRING("_pendingBorderGlyphsChange","\x1b","\x65","\x77","\x18"),
	HX_HCSTRING("_fieldWidth","\x0b","\xfc","\x6e","\x6a"),
	HX_HCSTRING("_fieldHeight","\x42","\x06","\xfd","\x6c"),
	HX_HCSTRING("_bitmap","\x8e","\x21","\x83","\x5f"),
	HX_HCSTRING("_bitmapData","\xd8","\x82","\x4a","\x06"),
	HX_HCSTRING("textGlyphs","\xd4","\x79","\x49","\xe5"),
	HX_HCSTRING("borderGlyphs","\x53","\x33","\x92","\x0b"),
	HX_HCSTRING("_point","\x91","\xfb","\x76","\xc2"),
	HX_HCSTRING("dispose","\x9f","\x80","\x4c","\xbb"),
	HX_HCSTRING("forceGraphicUpdate","\xe6","\x49","\x53","\xc7"),
	HX_HCSTRING("checkImmediateChanges","\xfa","\x19","\x20","\x70"),
	HX_HCSTRING("checkPendingChanges","\x54","\x04","\x94","\x75"),
	HX_HCSTRING("set_textColor","\x59","\xb7","\xb3","\xe9"),
	HX_HCSTRING("set_useTextColor","\x2c","\x4e","\xc6","\xad"),
	HX_HCSTRING("set_text","\xaa","\xe1","\x11","\x7b"),
	HX_HCSTRING("updateText","\x56","\xb7","\xae","\x05"),
	HX_HCSTRING("computeTextSize","\xa5","\xc6","\xcf","\xe6"),
	HX_HCSTRING("getLineWidth","\xfc","\x55","\xb4","\x20"),
	HX_HCSTRING("getStringWidth","\x7f","\xba","\x03","\x5d"),
	HX_HCSTRING("cutLines","\x1d","\x91","\x66","\x89"),
	HX_HCSTRING("wrap","\xca","\x39","\xff","\x4e"),
	HX_HCSTRING("splitLineIntoWords","\xdb","\x44","\xa9","\x26"),
	HX_HCSTRING("wrapLineByWord","\xbf","\xd4","\xc5","\xb8"),
	HX_HCSTRING("wrapLineByCharacter","\x94","\x30","\x3f","\x4a"),
	HX_HCSTRING("updateGraphic","\x9f","\xbf","\x75","\x3f"),
	HX_HCSTRING("blitLine","\xc9","\x3a","\xde","\x68"),
	HX_HCSTRING("setBorderStyle","\x23","\xac","\x54","\xb8"),
	HX_HCSTRING("set_width","\x69","\xfe","\x5c","\xf1"),
	HX_HCSTRING("set_alignment","\xc6","\x98","\xa7","\xf0"),
	HX_HCSTRING("set_multiLine","\xf0","\xb4","\x54","\x8f"),
	HX_HCSTRING("set_font","\xcc","\x72","\xd8","\x71"),
	HX_HCSTRING("set_lineSpacing","\x92","\x1e","\xbc","\x8c"),
	HX_HCSTRING("set_letterSpacing","\xa0","\x9a","\xe1","\x1e"),
	HX_HCSTRING("set_autoUpperCase","\x26","\xbb","\x47","\xdd"),
	HX_HCSTRING("set_wordWrap","\x31","\xec","\xed","\xca"),
	HX_HCSTRING("set_wrapByWord","\x68","\x4d","\x95","\x0e"),
	HX_HCSTRING("set_autoSize","\x4d","\x67","\x8c","\xf9"),
	HX_HCSTRING("set_size","\xbe","\xb5","\x6b","\x7a"),
	HX_HCSTRING("set_padding","\xf4","\xc0","\xe4","\x60"),
	HX_HCSTRING("set_numSpacesInTab","\xda","\x4d","\x22","\xa7"),
	HX_HCSTRING("set_background","\xab","\x04","\x33","\xbc"),
	HX_HCSTRING("set_backgroundColor","\xb8","\x10","\xef","\xd4"),
	HX_HCSTRING("set_borderStyle","\x48","\xa5","\x43","\xcd"),
	HX_HCSTRING("set_borderColor","\x7a","\x71","\x82","\x93"),
	HX_HCSTRING("set_borderSize","\x8a","\x70","\x03","\x9d"),
	HX_HCSTRING("set_borderQuality","\x96","\x78","\x03","\xa3"),
	HX_HCSTRING("get_numLines","\xe2","\xa5","\x2b","\xe7"),
	HX_HCSTRING("get_textWidth","\xf0","\x19","\xb4","\x24"),
	HX_HCSTRING("get_textHeight","\xbd","\x10","\x32","\xaf"),
	HX_HCSTRING("get_lineHeight","\x44","\x8b","\xe9","\x4c"),
	HX_HCSTRING("set_updateImmediately","\x18","\x8e","\x73","\xb4"),
	HX_HCSTRING("set_smoothing","\x57","\x8b","\x4b","\x9c"),
	HX_HCSTRING("updateTextGlyphs","\x3d","\x49","\x35","\x2f"),
	HX_HCSTRING("updateBorderGlyphs","\xfc","\x6e","\x9f","\x83"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BitmapTextField_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BitmapTextField_obj::__mClass,"__mClass");
};

#endif

hx::Class BitmapTextField_obj::__mClass;

void BitmapTextField_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxegon.bitmapFont.BitmapTextField","\x7c","\x80","\x29","\xf9");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< BitmapTextField_obj >;
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
