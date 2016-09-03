#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_Timer
#include <haxe/Timer.h>
#endif
#ifndef INCLUDED_lime__backend_native_NativeWindow
#include <lime/_backend/native/NativeWindow.h>
#endif
#ifndef INCLUDED_lime_app_Event_String_Void
#include <lime/app/Event_String_Void.h>
#endif
#ifndef INCLUDED_lime_app_Event_lime_ui_KeyCode_lime_ui_KeyModifier_Void
#include <lime/app/Event_lime_ui_KeyCode_lime_ui_KeyModifier_Void.h>
#endif
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_lime_graphics_CanvasRenderContext
#include <lime/graphics/CanvasRenderContext.h>
#endif
#ifndef INCLUDED_lime_system_Clipboard
#include <lime/system/Clipboard.h>
#endif
#ifndef INCLUDED_lime_ui_MouseCursor
#include <lime/ui/MouseCursor.h>
#endif
#ifndef INCLUDED_lime_ui_Window
#include <lime/ui/Window.h>
#endif
#ifndef INCLUDED_lime_ui__KeyModifier_KeyModifier_Impl_
#include <lime/ui/_KeyModifier/KeyModifier_Impl_.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_RenderSession
#include <openfl/_internal/renderer/RenderSession.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_cairo_CairoTextField
#include <openfl/_internal/renderer/cairo/CairoTextField.h>
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
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_Graphics
#include <openfl/display/Graphics.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_Stage
#include <openfl/display/Stage.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_FocusEvent
#include <openfl/events/FocusEvent.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_MouseEvent
#include <openfl/events/MouseEvent.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
#ifndef INCLUDED_openfl_text_TextField
#include <openfl/text/TextField.h>
#endif
#ifndef INCLUDED_openfl_text_TextFormat
#include <openfl/text/TextFormat.h>
#endif
#ifndef INCLUDED_openfl_text_TextLineMetrics
#include <openfl/text/TextLineMetrics.h>
#endif
#ifndef INCLUDED_openfl_text__TextFormatAlign_TextFormatAlign_Impl_
#include <openfl/text/_TextFormatAlign/TextFormatAlign_Impl_.h>
#endif
namespace openfl{
namespace text{

Void TextField_obj::__construct()
{
HX_STACK_FRAME("openfl.text.TextField","new",0xbd7676bc,"openfl.text.TextField.new","openfl/text/TextField.hx",91,0xccf02094)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(93)
	super::__construct();
	HX_STACK_LINE(95)
	this->__caretIndex = (int)-1;
	HX_STACK_LINE(96)
	::openfl::display::Graphics tmp = ::openfl::display::Graphics_obj::__new(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(96)
	this->__graphics = tmp;
	HX_STACK_LINE(97)
	::openfl::_internal::text::TextEngine tmp1 = ::openfl::_internal::text::TextEngine_obj::__new(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(97)
	this->__textEngine = tmp1;
	HX_STACK_LINE(98)
	this->__layoutDirty = true;
	HX_STACK_LINE(99)
	this->__tabEnabled = true;
	HX_STACK_LINE(101)
	::openfl::text::TextFormat tmp2 = ::openfl::text::TextField_obj::__defaultTextFormat;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(101)
	bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(101)
	if ((tmp3)){
		HX_STACK_LINE(103)
		::openfl::text::TextFormat tmp4 = ::openfl::text::TextFormat_obj::__new(HX_HCSTRING("Times New Roman","\x03","\x86","\x44","\xc3"),(int)12,(int)0,false,false,false,HX_HCSTRING("","\x00","\x00","\x00","\x00"),HX_HCSTRING("","\x00","\x00","\x00","\x00"),((Dynamic)((int)3)),(int)0,(int)0,(int)0,(int)0);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(103)
		::openfl::text::TextField_obj::__defaultTextFormat = tmp4;
		HX_STACK_LINE(104)
		::openfl::text::TextFormat tmp5 = ::openfl::text::TextField_obj::__defaultTextFormat;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(104)
		tmp5->blockIndent = (int)0;
		HX_STACK_LINE(105)
		::openfl::text::TextFormat tmp6 = ::openfl::text::TextField_obj::__defaultTextFormat;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(105)
		tmp6->bullet = false;
		HX_STACK_LINE(106)
		::openfl::text::TextFormat tmp7 = ::openfl::text::TextField_obj::__defaultTextFormat;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(106)
		tmp7->letterSpacing = (int)0;
		HX_STACK_LINE(107)
		::openfl::text::TextFormat tmp8 = ::openfl::text::TextField_obj::__defaultTextFormat;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(107)
		tmp8->kerning = false;
	}
	HX_STACK_LINE(111)
	::openfl::text::TextFormat tmp4 = ::openfl::text::TextField_obj::__defaultTextFormat;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(111)
	::openfl::text::TextFormat tmp5 = tmp4->clone();		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(111)
	this->__textFormat = tmp5;
	HX_STACK_LINE(112)
	::openfl::_internal::text::TextEngine tmp6 = this->__textEngine;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(112)
	::openfl::text::TextFormat tmp7 = this->__textFormat;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(112)
	::openfl::_internal::text::TextFormatRange tmp8 = ::openfl::_internal::text::TextFormatRange_obj::__new(tmp7,(int)0,(int)0);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(112)
	tmp6->textFormatRanges->push(tmp8);
	HX_STACK_LINE(114)
	Dynamic tmp9 = this->this_onMouseDown_dyn();		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(114)
	this->addEventListener(HX_HCSTRING("mouseDown","\x27","\xb1","\xc2","\xee"),tmp9,null(),null(),null());
}
;
	return null();
}

//TextField_obj::~TextField_obj() { }

Dynamic TextField_obj::__CreateEmpty() { return  new TextField_obj; }
hx::ObjectPtr< TextField_obj > TextField_obj::__new()
{  hx::ObjectPtr< TextField_obj > _result_ = new TextField_obj();
	_result_->__construct();
	return _result_;}

Dynamic TextField_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TextField_obj > _result_ = new TextField_obj();
	_result_->__construct();
	return _result_;}

Void TextField_obj::appendText( ::String text){
{
		HX_STACK_FRAME("openfl.text.TextField","appendText",0xaa44eccb,"openfl.text.TextField.appendText","openfl/text/TextField.hx",119,0xccf02094)
		HX_STACK_THIS(this)
		HX_STACK_ARG(text,"text")
		HX_STACK_LINE(121)
		::openfl::_internal::text::TextEngine tmp = this->__textEngine;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(121)
		hx::AddEq(tmp->text,text);
		HX_STACK_LINE(122)
		::openfl::_internal::text::TextEngine tmp1 = this->__textEngine;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(122)
		int tmp2 = tmp1->text.length;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(122)
		::openfl::_internal::text::TextEngine tmp3 = this->__textEngine;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(122)
		::openfl::_internal::text::TextEngine tmp4 = this->__textEngine;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(122)
		int tmp5 = tmp4->textFormatRanges->length;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(122)
		int tmp6 = (tmp5 - (int)1);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(122)
		::openfl::_internal::text::TextFormatRange tmp7 = tmp3->textFormatRanges->__get(tmp6).StaticCast< ::openfl::_internal::text::TextFormatRange >();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(122)
		tmp7->end = tmp2;
		HX_STACK_LINE(124)
		this->__dirty = true;
		HX_STACK_LINE(125)
		this->__layoutDirty = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,appendText,(void))

::openfl::geom::Rectangle TextField_obj::getCharBoundaries( int charIndex){
	HX_STACK_FRAME("openfl.text.TextField","getCharBoundaries",0xf44814d0,"openfl.text.TextField.getCharBoundaries","openfl/text/TextField.hx",130,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_ARG(charIndex,"charIndex")
	HX_STACK_LINE(132)
	bool tmp = (charIndex < (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(132)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(132)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(132)
	if ((tmp1)){
		HX_STACK_LINE(132)
		int tmp3 = charIndex;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(132)
		::openfl::_internal::text::TextEngine tmp4 = this->__textEngine;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(132)
		::openfl::_internal::text::TextEngine tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(132)
		int tmp6 = tmp5->text.length;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(132)
		int tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(132)
		int tmp8 = (tmp7 - (int)1);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(132)
		int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(132)
		tmp2 = (tmp3 > tmp9);
	}
	else{
		HX_STACK_LINE(132)
		tmp2 = true;
	}
	HX_STACK_LINE(132)
	if ((tmp2)){
		HX_STACK_LINE(132)
		return null();
	}
	HX_STACK_LINE(134)
	this->__updateLayout();
	HX_STACK_LINE(136)
	{
		HX_STACK_LINE(136)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(136)
		::openfl::_internal::text::TextEngine tmp3 = this->__textEngine;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(136)
		Array< ::Dynamic > _g1 = tmp3->layoutGroups;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(136)
		while((true)){
			HX_STACK_LINE(136)
			bool tmp4 = (_g < _g1->length);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(136)
			bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(136)
			if ((tmp5)){
				HX_STACK_LINE(136)
				break;
			}
			HX_STACK_LINE(136)
			::openfl::_internal::text::TextLayoutGroup tmp6 = _g1->__get(_g).StaticCast< ::openfl::_internal::text::TextLayoutGroup >();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(136)
			::openfl::_internal::text::TextLayoutGroup group = tmp6;		HX_STACK_VAR(group,"group");
			HX_STACK_LINE(136)
			++(_g);
			HX_STACK_LINE(138)
			bool tmp7 = (charIndex >= group->startIndex);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(138)
			bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(138)
			if ((tmp7)){
				HX_STACK_LINE(138)
				tmp8 = (charIndex <= group->endIndex);
			}
			else{
				HX_STACK_LINE(138)
				tmp8 = false;
			}
			HX_STACK_LINE(138)
			if ((tmp8)){
				HX_STACK_LINE(140)
				Float x = group->offsetX;		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(142)
				{
					HX_STACK_LINE(142)
					int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(142)
					int tmp9 = (charIndex - group->startIndex);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(142)
					int _g2 = tmp9;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(142)
					while((true)){
						HX_STACK_LINE(142)
						bool tmp10 = (_g3 < _g2);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(142)
						bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(142)
						if ((tmp11)){
							HX_STACK_LINE(142)
							break;
						}
						HX_STACK_LINE(142)
						int tmp12 = (_g3)++;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(142)
						int i = tmp12;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(144)
						Float tmp13 = group->advances->__get(i);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(144)
						hx::AddEq(x,tmp13);
					}
				}
				HX_STACK_LINE(148)
				Float tmp9 = x;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(148)
				Float tmp10 = group->offsetY;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(148)
				int tmp11 = (charIndex - group->startIndex);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(148)
				Float tmp12 = group->advances->__get(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(148)
				Float tmp13 = (group->ascent + group->descent);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(148)
				::openfl::geom::Rectangle tmp14 = ::openfl::geom::Rectangle_obj::__new(tmp9,tmp10,tmp12,tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(148)
				return tmp14;
			}
		}
	}
	HX_STACK_LINE(154)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,getCharBoundaries,return )

int TextField_obj::getCharIndexAtPoint( Float x,Float y){
	HX_STACK_FRAME("openfl.text.TextField","getCharIndexAtPoint",0x758b0c73,"openfl.text.TextField.getCharIndexAtPoint","openfl/text/TextField.hx",159,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_LINE(161)
	bool tmp = (x <= (int)2);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(161)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(161)
	bool tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(161)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(161)
	if ((tmp2)){
		HX_STACK_LINE(161)
		Float tmp4 = x;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(161)
		Float tmp5 = this->get_width();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(161)
		Float tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(161)
		Float tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(161)
		Float tmp8 = (tmp7 + (int)4);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(161)
		Float tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(161)
		Float tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(161)
		tmp3 = (tmp4 > tmp10);
	}
	else{
		HX_STACK_LINE(161)
		tmp3 = true;
	}
	HX_STACK_LINE(161)
	bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(161)
	bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(161)
	bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(161)
	if ((tmp5)){
		HX_STACK_LINE(161)
		tmp6 = (y <= (int)0);
	}
	else{
		HX_STACK_LINE(161)
		tmp6 = true;
	}
	HX_STACK_LINE(161)
	bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(161)
	bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(161)
	if ((tmp7)){
		HX_STACK_LINE(161)
		Float tmp9 = y;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(161)
		Float tmp10 = this->get_height();		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(161)
		Float tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(161)
		Float tmp12 = (tmp11 + (int)4);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(161)
		Float tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(161)
		tmp8 = (tmp9 > tmp13);
	}
	else{
		HX_STACK_LINE(161)
		tmp8 = true;
	}
	HX_STACK_LINE(161)
	if ((tmp8)){
		HX_STACK_LINE(161)
		return (int)-1;
	}
	HX_STACK_LINE(163)
	this->__updateLayout();
	HX_STACK_LINE(165)
	int tmp9 = this->get_scrollH();		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(165)
	hx::AddEq(x,tmp9);
	HX_STACK_LINE(167)
	{
		HX_STACK_LINE(167)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(167)
		int tmp10 = this->get_scrollV();		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(167)
		int tmp11 = (tmp10 - (int)1);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(167)
		int _g = tmp11;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(167)
		while((true)){
			HX_STACK_LINE(167)
			bool tmp12 = (_g1 < _g);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(167)
			bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(167)
			if ((tmp13)){
				HX_STACK_LINE(167)
				break;
			}
			HX_STACK_LINE(167)
			int tmp14 = (_g1)++;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(167)
			int i = tmp14;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(169)
			::openfl::_internal::text::TextEngine tmp15 = this->__textEngine;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(169)
			Float tmp16 = tmp15->lineHeights->__get(i);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(169)
			hx::AddEq(y,tmp16);
		}
	}
	HX_STACK_LINE(173)
	{
		HX_STACK_LINE(173)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(173)
		::openfl::_internal::text::TextEngine tmp10 = this->__textEngine;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(173)
		Array< ::Dynamic > _g1 = tmp10->layoutGroups;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(173)
		while((true)){
			HX_STACK_LINE(173)
			bool tmp11 = (_g < _g1->length);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(173)
			bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(173)
			if ((tmp12)){
				HX_STACK_LINE(173)
				break;
			}
			HX_STACK_LINE(173)
			::openfl::_internal::text::TextLayoutGroup tmp13 = _g1->__get(_g).StaticCast< ::openfl::_internal::text::TextLayoutGroup >();		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(173)
			::openfl::_internal::text::TextLayoutGroup group = tmp13;		HX_STACK_VAR(group,"group");
			HX_STACK_LINE(173)
			++(_g);
			HX_STACK_LINE(175)
			bool tmp14 = (y >= group->offsetY);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(175)
			bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(175)
			if ((tmp14)){
				HX_STACK_LINE(175)
				Float tmp16 = y;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(175)
				Float tmp17 = (group->offsetY + group->height);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(175)
				Float tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(175)
				tmp15 = (tmp16 <= tmp18);
			}
			else{
				HX_STACK_LINE(175)
				tmp15 = false;
			}
			HX_STACK_LINE(175)
			if ((tmp15)){
				HX_STACK_LINE(177)
				bool tmp16 = (x >= group->offsetX);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(177)
				bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(177)
				if ((tmp16)){
					HX_STACK_LINE(177)
					Float tmp18 = x;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(177)
					Float tmp19 = (group->offsetX + group->width);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(177)
					Float tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(177)
					tmp17 = (tmp18 <= tmp20);
				}
				else{
					HX_STACK_LINE(177)
					tmp17 = false;
				}
				HX_STACK_LINE(177)
				if ((tmp17)){
					HX_STACK_LINE(179)
					Float advance = ((Float)0.0);		HX_STACK_VAR(advance,"advance");
					HX_STACK_LINE(181)
					{
						HX_STACK_LINE(181)
						int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
						HX_STACK_LINE(181)
						int tmp18 = group->advances->length;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(181)
						int _g2 = tmp18;		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(181)
						while((true)){
							HX_STACK_LINE(181)
							bool tmp19 = (_g3 < _g2);		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(181)
							bool tmp20 = !(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(181)
							if ((tmp20)){
								HX_STACK_LINE(181)
								break;
							}
							HX_STACK_LINE(181)
							int tmp21 = (_g3)++;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(181)
							int i = tmp21;		HX_STACK_VAR(i,"i");
							HX_STACK_LINE(183)
							Float tmp22 = group->advances->__get(i);		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(183)
							hx::AddEq(advance,tmp22);
							HX_STACK_LINE(185)
							Float tmp23 = x;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(185)
							Float tmp24 = (group->offsetX + advance);		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(185)
							bool tmp25 = (tmp23 <= tmp24);		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(185)
							if ((tmp25)){
								HX_STACK_LINE(187)
								int tmp26 = (group->startIndex + i);		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(187)
								return tmp26;
							}
						}
					}
					HX_STACK_LINE(193)
					int tmp18 = group->endIndex;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(193)
					return tmp18;
				}
			}
		}
	}
	HX_STACK_LINE(201)
	return (int)-1;
}


HX_DEFINE_DYNAMIC_FUNC2(TextField_obj,getCharIndexAtPoint,return )

int TextField_obj::getFirstCharInParagraph( int charIndex){
	HX_STACK_FRAME("openfl.text.TextField","getFirstCharInParagraph",0xe06fd955,"openfl.text.TextField.getFirstCharInParagraph","openfl/text/TextField.hx",206,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_ARG(charIndex,"charIndex")
	HX_STACK_LINE(208)
	bool tmp = (charIndex < (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(208)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(208)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(208)
	if ((tmp1)){
		HX_STACK_LINE(208)
		int tmp3 = charIndex;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(208)
		::openfl::_internal::text::TextEngine tmp4 = this->__textEngine;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(208)
		::openfl::_internal::text::TextEngine tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(208)
		int tmp6 = tmp5->text.length;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(208)
		int tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(208)
		int tmp8 = (tmp7 - (int)1);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(208)
		int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(208)
		tmp2 = (tmp3 > tmp9);
	}
	else{
		HX_STACK_LINE(208)
		tmp2 = true;
	}
	HX_STACK_LINE(208)
	if ((tmp2)){
		HX_STACK_LINE(208)
		return (int)0;
	}
	HX_STACK_LINE(210)
	::openfl::_internal::text::TextEngine tmp3 = this->__textEngine;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(210)
	int tmp4 = tmp3->getLineBreakIndex(null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(210)
	int index = tmp4;		HX_STACK_VAR(index,"index");
	HX_STACK_LINE(211)
	int startIndex = (int)0;		HX_STACK_VAR(startIndex,"startIndex");
	HX_STACK_LINE(213)
	while((true)){
		HX_STACK_LINE(213)
		bool tmp5 = (index > (int)-1);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(213)
		bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(213)
		if ((tmp6)){
			HX_STACK_LINE(213)
			break;
		}
		HX_STACK_LINE(215)
		bool tmp7 = (index <= charIndex);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(215)
		if ((tmp7)){
			HX_STACK_LINE(217)
			int tmp8 = (index + (int)1);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(217)
			startIndex = tmp8;
		}
		else{
			HX_STACK_LINE(219)
			bool tmp8 = (index > charIndex);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(219)
			if ((tmp8)){
				HX_STACK_LINE(221)
				break;
			}
		}
		HX_STACK_LINE(225)
		::openfl::_internal::text::TextEngine tmp8 = this->__textEngine;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(225)
		int tmp9 = (index + (int)1);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(225)
		int tmp10 = tmp8->getLineBreakIndex(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(225)
		index = tmp10;
	}
	HX_STACK_LINE(229)
	int tmp5 = startIndex;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(229)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,getFirstCharInParagraph,return )

int TextField_obj::getLineIndexAtPoint( Float x,Float y){
	HX_STACK_FRAME("openfl.text.TextField","getLineIndexAtPoint",0x633efa91,"openfl.text.TextField.getLineIndexAtPoint","openfl/text/TextField.hx",234,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_LINE(236)
	this->__updateLayout();
	HX_STACK_LINE(238)
	bool tmp = (x <= (int)2);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(238)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(238)
	bool tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(238)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(238)
	if ((tmp2)){
		HX_STACK_LINE(238)
		Float tmp4 = x;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(238)
		Float tmp5 = this->get_width();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(238)
		Float tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(238)
		Float tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(238)
		Float tmp8 = (tmp7 + (int)4);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(238)
		Float tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(238)
		Float tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(238)
		tmp3 = (tmp4 > tmp10);
	}
	else{
		HX_STACK_LINE(238)
		tmp3 = true;
	}
	HX_STACK_LINE(238)
	bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(238)
	bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(238)
	bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(238)
	if ((tmp5)){
		HX_STACK_LINE(238)
		tmp6 = (y <= (int)0);
	}
	else{
		HX_STACK_LINE(238)
		tmp6 = true;
	}
	HX_STACK_LINE(238)
	bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(238)
	bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(238)
	if ((tmp7)){
		HX_STACK_LINE(238)
		Float tmp9 = y;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(238)
		Float tmp10 = this->get_height();		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(238)
		Float tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(238)
		Float tmp12 = (tmp11 + (int)4);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(238)
		Float tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(238)
		tmp8 = (tmp9 > tmp13);
	}
	else{
		HX_STACK_LINE(238)
		tmp8 = true;
	}
	HX_STACK_LINE(238)
	if ((tmp8)){
		HX_STACK_LINE(238)
		return (int)-1;
	}
	HX_STACK_LINE(240)
	{
		HX_STACK_LINE(240)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(240)
		int tmp9 = this->get_scrollV();		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(240)
		int tmp10 = (tmp9 - (int)1);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(240)
		int _g = tmp10;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(240)
		while((true)){
			HX_STACK_LINE(240)
			bool tmp11 = (_g1 < _g);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(240)
			bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(240)
			if ((tmp12)){
				HX_STACK_LINE(240)
				break;
			}
			HX_STACK_LINE(240)
			int tmp13 = (_g1)++;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(240)
			int i = tmp13;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(242)
			::openfl::_internal::text::TextEngine tmp14 = this->__textEngine;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(242)
			Float tmp15 = tmp14->lineHeights->__get(i);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(242)
			hx::AddEq(y,tmp15);
		}
	}
	HX_STACK_LINE(246)
	{
		HX_STACK_LINE(246)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(246)
		::openfl::_internal::text::TextEngine tmp9 = this->__textEngine;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(246)
		Array< ::Dynamic > _g1 = tmp9->layoutGroups;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(246)
		while((true)){
			HX_STACK_LINE(246)
			bool tmp10 = (_g < _g1->length);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(246)
			bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(246)
			if ((tmp11)){
				HX_STACK_LINE(246)
				break;
			}
			HX_STACK_LINE(246)
			::openfl::_internal::text::TextLayoutGroup tmp12 = _g1->__get(_g).StaticCast< ::openfl::_internal::text::TextLayoutGroup >();		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(246)
			::openfl::_internal::text::TextLayoutGroup group = tmp12;		HX_STACK_VAR(group,"group");
			HX_STACK_LINE(246)
			++(_g);
			HX_STACK_LINE(248)
			bool tmp13 = (y >= group->offsetY);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(248)
			bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(248)
			if ((tmp13)){
				HX_STACK_LINE(248)
				Float tmp15 = y;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(248)
				Float tmp16 = (group->offsetY + group->height);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(248)
				Float tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(248)
				tmp14 = (tmp15 <= tmp17);
			}
			else{
				HX_STACK_LINE(248)
				tmp14 = false;
			}
			HX_STACK_LINE(248)
			if ((tmp14)){
				HX_STACK_LINE(250)
				int tmp15 = group->lineIndex;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(250)
				return tmp15;
			}
		}
	}
	HX_STACK_LINE(256)
	return (int)-1;
}


HX_DEFINE_DYNAMIC_FUNC2(TextField_obj,getLineIndexAtPoint,return )

int TextField_obj::getLineIndexOfChar( int charIndex){
	HX_STACK_FRAME("openfl.text.TextField","getLineIndexOfChar",0xcab049d9,"openfl.text.TextField.getLineIndexOfChar","openfl/text/TextField.hx",261,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_ARG(charIndex,"charIndex")
	HX_STACK_LINE(263)
	bool tmp = (charIndex < (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(263)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(263)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(263)
	if ((tmp1)){
		HX_STACK_LINE(263)
		int tmp3 = charIndex;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(263)
		::openfl::_internal::text::TextEngine tmp4 = this->__textEngine;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(263)
		::openfl::_internal::text::TextEngine tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(263)
		int tmp6 = tmp5->text.length;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(263)
		int tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(263)
		int tmp8 = (tmp7 - (int)1);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(263)
		int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(263)
		tmp2 = (tmp3 > tmp9);
	}
	else{
		HX_STACK_LINE(263)
		tmp2 = true;
	}
	HX_STACK_LINE(263)
	if ((tmp2)){
		HX_STACK_LINE(263)
		return (int)-1;
	}
	HX_STACK_LINE(265)
	this->__updateLayout();
	HX_STACK_LINE(267)
	{
		HX_STACK_LINE(267)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(267)
		::openfl::_internal::text::TextEngine tmp3 = this->__textEngine;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(267)
		Array< ::Dynamic > _g1 = tmp3->layoutGroups;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(267)
		while((true)){
			HX_STACK_LINE(267)
			bool tmp4 = (_g < _g1->length);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(267)
			bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(267)
			if ((tmp5)){
				HX_STACK_LINE(267)
				break;
			}
			HX_STACK_LINE(267)
			::openfl::_internal::text::TextLayoutGroup tmp6 = _g1->__get(_g).StaticCast< ::openfl::_internal::text::TextLayoutGroup >();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(267)
			::openfl::_internal::text::TextLayoutGroup group = tmp6;		HX_STACK_VAR(group,"group");
			HX_STACK_LINE(267)
			++(_g);
			HX_STACK_LINE(269)
			bool tmp7 = (group->startIndex <= charIndex);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(269)
			bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(269)
			if ((tmp7)){
				HX_STACK_LINE(269)
				tmp8 = (group->endIndex >= charIndex);
			}
			else{
				HX_STACK_LINE(269)
				tmp8 = false;
			}
			HX_STACK_LINE(269)
			if ((tmp8)){
				HX_STACK_LINE(271)
				int tmp9 = group->lineIndex;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(271)
				return tmp9;
			}
		}
	}
	HX_STACK_LINE(277)
	return (int)-1;
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,getLineIndexOfChar,return )

int TextField_obj::getLineLength( int lineIndex){
	HX_STACK_FRAME("openfl.text.TextField","getLineLength",0x953e9d8c,"openfl.text.TextField.getLineLength","openfl/text/TextField.hx",282,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_ARG(lineIndex,"lineIndex")
	HX_STACK_LINE(284)
	this->__updateLayout();
	HX_STACK_LINE(286)
	bool tmp = (lineIndex < (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(286)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(286)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(286)
	if ((tmp1)){
		HX_STACK_LINE(286)
		int tmp3 = lineIndex;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(286)
		::openfl::_internal::text::TextEngine tmp4 = this->__textEngine;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(286)
		::openfl::_internal::text::TextEngine tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(286)
		int tmp6 = tmp5->numLines;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(286)
		int tmp7 = (tmp6 - (int)1);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(286)
		int tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(286)
		tmp2 = (tmp3 > tmp8);
	}
	else{
		HX_STACK_LINE(286)
		tmp2 = true;
	}
	HX_STACK_LINE(286)
	if ((tmp2)){
		HX_STACK_LINE(286)
		return (int)0;
	}
	HX_STACK_LINE(288)
	int startIndex = (int)-1;		HX_STACK_VAR(startIndex,"startIndex");
	HX_STACK_LINE(289)
	int endIndex = (int)-1;		HX_STACK_VAR(endIndex,"endIndex");
	HX_STACK_LINE(291)
	{
		HX_STACK_LINE(291)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(291)
		::openfl::_internal::text::TextEngine tmp3 = this->__textEngine;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(291)
		Array< ::Dynamic > _g1 = tmp3->layoutGroups;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(291)
		while((true)){
			HX_STACK_LINE(291)
			bool tmp4 = (_g < _g1->length);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(291)
			bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(291)
			if ((tmp5)){
				HX_STACK_LINE(291)
				break;
			}
			HX_STACK_LINE(291)
			::openfl::_internal::text::TextLayoutGroup tmp6 = _g1->__get(_g).StaticCast< ::openfl::_internal::text::TextLayoutGroup >();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(291)
			::openfl::_internal::text::TextLayoutGroup group = tmp6;		HX_STACK_VAR(group,"group");
			HX_STACK_LINE(291)
			++(_g);
			HX_STACK_LINE(293)
			bool tmp7 = (group->lineIndex == lineIndex);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(293)
			if ((tmp7)){
				HX_STACK_LINE(295)
				bool tmp8 = (startIndex == (int)-1);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(295)
				if ((tmp8)){
					HX_STACK_LINE(295)
					startIndex = group->startIndex;
				}
			}
			else{
				HX_STACK_LINE(297)
				int tmp8 = group->lineIndex;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(297)
				int tmp9 = (lineIndex + (int)1);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(297)
				bool tmp10 = (tmp8 == tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(297)
				if ((tmp10)){
					HX_STACK_LINE(299)
					endIndex = group->startIndex;
					HX_STACK_LINE(300)
					break;
				}
			}
		}
	}
	HX_STACK_LINE(306)
	bool tmp3 = (endIndex == (int)-1);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(306)
	if ((tmp3)){
		HX_STACK_LINE(306)
		::openfl::_internal::text::TextEngine tmp4 = this->__textEngine;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(306)
		int tmp5 = tmp4->text.length;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(306)
		endIndex = tmp5;
	}
	HX_STACK_LINE(307)
	int tmp4 = (endIndex - startIndex);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(307)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,getLineLength,return )

::openfl::text::TextLineMetrics TextField_obj::getLineMetrics( int lineIndex){
	HX_STACK_FRAME("openfl.text.TextField","getLineMetrics",0xa6c52add,"openfl.text.TextField.getLineMetrics","openfl/text/TextField.hx",312,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_ARG(lineIndex,"lineIndex")
	HX_STACK_LINE(314)
	this->__updateLayout();
	HX_STACK_LINE(316)
	::openfl::_internal::text::TextEngine tmp = this->__textEngine;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(316)
	Float tmp1 = tmp->lineAscents->__get(lineIndex);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(316)
	Float ascender = tmp1;		HX_STACK_VAR(ascender,"ascender");
	HX_STACK_LINE(317)
	::openfl::_internal::text::TextEngine tmp2 = this->__textEngine;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(317)
	Float tmp3 = tmp2->lineDescents->__get(lineIndex);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(317)
	Float descender = tmp3;		HX_STACK_VAR(descender,"descender");
	HX_STACK_LINE(318)
	::openfl::_internal::text::TextEngine tmp4 = this->__textEngine;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(318)
	Float tmp5 = tmp4->lineLeadings->__get(lineIndex);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(318)
	Float leading = tmp5;		HX_STACK_VAR(leading,"leading");
	HX_STACK_LINE(319)
	::openfl::_internal::text::TextEngine tmp6 = this->__textEngine;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(319)
	Float tmp7 = tmp6->lineHeights->__get(lineIndex);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(319)
	Float lineHeight = tmp7;		HX_STACK_VAR(lineHeight,"lineHeight");
	HX_STACK_LINE(320)
	::openfl::_internal::text::TextEngine tmp8 = this->__textEngine;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(320)
	Float tmp9 = tmp8->lineWidths->__get(lineIndex);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(320)
	Float lineWidth = tmp9;		HX_STACK_VAR(lineWidth,"lineWidth");
	HX_STACK_LINE(324)
	Float tmp10;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(324)
	{
		HX_STACK_LINE(324)
		::openfl::text::TextFormat tmp11 = this->__textFormat;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(324)
		Dynamic _g = tmp11->align;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(324)
		Dynamic tmp12 = _g;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(324)
		switch( (int)(tmp12)){
			case (int)3: case (int)2: case (int)5: {
				HX_STACK_LINE(326)
				tmp10 = (int)2;
			}
			;break;
			case (int)4: case (int)1: {
				HX_STACK_LINE(327)
				::openfl::_internal::text::TextEngine tmp13 = this->__textEngine;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(327)
				Float tmp14 = tmp13->width;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(327)
				Float tmp15 = lineWidth;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(327)
				Float tmp16 = (tmp14 - tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(327)
				tmp10 = (tmp16 - (int)2);
			}
			;break;
			case (int)0: {
				HX_STACK_LINE(328)
				::openfl::_internal::text::TextEngine tmp13 = this->__textEngine;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(328)
				Float tmp14 = tmp13->width;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(328)
				Float tmp15 = lineWidth;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(328)
				Float tmp16 = (tmp14 - tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(328)
				tmp10 = (Float(tmp16) / Float((int)2));
			}
			;break;
		}
	}
	HX_STACK_LINE(324)
	Float margin = tmp10;		HX_STACK_VAR(margin,"margin");
	HX_STACK_LINE(332)
	::openfl::text::TextLineMetrics tmp11 = ::openfl::text::TextLineMetrics_obj::__new(margin,lineWidth,lineHeight,ascender,descender,leading);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(332)
	return tmp11;
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,getLineMetrics,return )

int TextField_obj::getLineOffset( int lineIndex){
	HX_STACK_FRAME("openfl.text.TextField","getLineOffset",0x5676a039,"openfl.text.TextField.getLineOffset","openfl/text/TextField.hx",337,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_ARG(lineIndex,"lineIndex")
	HX_STACK_LINE(339)
	this->__updateLayout();
	HX_STACK_LINE(341)
	bool tmp = (lineIndex < (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(341)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(341)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(341)
	if ((tmp1)){
		HX_STACK_LINE(341)
		int tmp3 = lineIndex;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(341)
		::openfl::_internal::text::TextEngine tmp4 = this->__textEngine;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(341)
		::openfl::_internal::text::TextEngine tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(341)
		int tmp6 = tmp5->numLines;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(341)
		int tmp7 = (tmp6 - (int)1);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(341)
		int tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(341)
		tmp2 = (tmp3 > tmp8);
	}
	else{
		HX_STACK_LINE(341)
		tmp2 = true;
	}
	HX_STACK_LINE(341)
	if ((tmp2)){
		HX_STACK_LINE(341)
		return (int)-1;
	}
	HX_STACK_LINE(343)
	{
		HX_STACK_LINE(343)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(343)
		::openfl::_internal::text::TextEngine tmp3 = this->__textEngine;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(343)
		Array< ::Dynamic > _g1 = tmp3->layoutGroups;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(343)
		while((true)){
			HX_STACK_LINE(343)
			bool tmp4 = (_g < _g1->length);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(343)
			bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(343)
			if ((tmp5)){
				HX_STACK_LINE(343)
				break;
			}
			HX_STACK_LINE(343)
			::openfl::_internal::text::TextLayoutGroup tmp6 = _g1->__get(_g).StaticCast< ::openfl::_internal::text::TextLayoutGroup >();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(343)
			::openfl::_internal::text::TextLayoutGroup group = tmp6;		HX_STACK_VAR(group,"group");
			HX_STACK_LINE(343)
			++(_g);
			HX_STACK_LINE(345)
			bool tmp7 = (group->lineIndex == lineIndex);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(345)
			if ((tmp7)){
				HX_STACK_LINE(347)
				int tmp8 = group->startIndex;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(347)
				return tmp8;
			}
		}
	}
	HX_STACK_LINE(353)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,getLineOffset,return )

::String TextField_obj::getLineText( int lineIndex){
	HX_STACK_FRAME("openfl.text.TextField","getLineText",0xb8113fd3,"openfl.text.TextField.getLineText","openfl/text/TextField.hx",358,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_ARG(lineIndex,"lineIndex")
	HX_STACK_LINE(360)
	this->__updateLayout();
	HX_STACK_LINE(362)
	bool tmp = (lineIndex < (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(362)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(362)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(362)
	if ((tmp1)){
		HX_STACK_LINE(362)
		int tmp3 = lineIndex;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(362)
		::openfl::_internal::text::TextEngine tmp4 = this->__textEngine;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(362)
		::openfl::_internal::text::TextEngine tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(362)
		int tmp6 = tmp5->numLines;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(362)
		int tmp7 = (tmp6 - (int)1);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(362)
		int tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(362)
		tmp2 = (tmp3 > tmp8);
	}
	else{
		HX_STACK_LINE(362)
		tmp2 = true;
	}
	HX_STACK_LINE(362)
	if ((tmp2)){
		HX_STACK_LINE(362)
		return null();
	}
	HX_STACK_LINE(364)
	int startIndex = (int)-1;		HX_STACK_VAR(startIndex,"startIndex");
	HX_STACK_LINE(365)
	int endIndex = (int)-1;		HX_STACK_VAR(endIndex,"endIndex");
	HX_STACK_LINE(367)
	{
		HX_STACK_LINE(367)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(367)
		::openfl::_internal::text::TextEngine tmp3 = this->__textEngine;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(367)
		Array< ::Dynamic > _g1 = tmp3->layoutGroups;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(367)
		while((true)){
			HX_STACK_LINE(367)
			bool tmp4 = (_g < _g1->length);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(367)
			bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(367)
			if ((tmp5)){
				HX_STACK_LINE(367)
				break;
			}
			HX_STACK_LINE(367)
			::openfl::_internal::text::TextLayoutGroup tmp6 = _g1->__get(_g).StaticCast< ::openfl::_internal::text::TextLayoutGroup >();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(367)
			::openfl::_internal::text::TextLayoutGroup group = tmp6;		HX_STACK_VAR(group,"group");
			HX_STACK_LINE(367)
			++(_g);
			HX_STACK_LINE(369)
			bool tmp7 = (group->lineIndex == lineIndex);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(369)
			if ((tmp7)){
				HX_STACK_LINE(371)
				bool tmp8 = (startIndex == (int)-1);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(371)
				if ((tmp8)){
					HX_STACK_LINE(371)
					startIndex = group->startIndex;
				}
			}
			else{
				HX_STACK_LINE(373)
				int tmp8 = group->lineIndex;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(373)
				int tmp9 = (lineIndex + (int)1);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(373)
				bool tmp10 = (tmp8 == tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(373)
				if ((tmp10)){
					HX_STACK_LINE(375)
					endIndex = group->startIndex;
					HX_STACK_LINE(376)
					break;
				}
			}
		}
	}
	HX_STACK_LINE(382)
	bool tmp3 = (endIndex == (int)-1);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(382)
	if ((tmp3)){
		HX_STACK_LINE(382)
		::openfl::_internal::text::TextEngine tmp4 = this->__textEngine;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(382)
		int tmp5 = tmp4->text.length;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(382)
		endIndex = tmp5;
	}
	HX_STACK_LINE(384)
	::openfl::_internal::text::TextEngine tmp4 = this->__textEngine;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(384)
	int tmp5 = startIndex;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(384)
	int tmp6 = endIndex;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(384)
	::String tmp7 = tmp4->text.substring(tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(384)
	return tmp7;
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,getLineText,return )

int TextField_obj::getParagraphLength( int charIndex){
	HX_STACK_FRAME("openfl.text.TextField","getParagraphLength",0xed64f022,"openfl.text.TextField.getParagraphLength","openfl/text/TextField.hx",389,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_ARG(charIndex,"charIndex")
	HX_STACK_LINE(391)
	bool tmp = (charIndex < (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(391)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(391)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(391)
	if ((tmp1)){
		HX_STACK_LINE(391)
		int tmp3 = charIndex;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(391)
		::openfl::_internal::text::TextEngine tmp4 = this->__textEngine;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(391)
		::openfl::_internal::text::TextEngine tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(391)
		int tmp6 = tmp5->text.length;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(391)
		int tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(391)
		int tmp8 = (tmp7 - (int)1);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(391)
		int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(391)
		tmp2 = (tmp3 > tmp9);
	}
	else{
		HX_STACK_LINE(391)
		tmp2 = true;
	}
	HX_STACK_LINE(391)
	if ((tmp2)){
		HX_STACK_LINE(391)
		return (int)0;
	}
	HX_STACK_LINE(393)
	int tmp3 = charIndex;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(393)
	int tmp4 = this->getFirstCharInParagraph(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(393)
	int startIndex = tmp4;		HX_STACK_VAR(startIndex,"startIndex");
	HX_STACK_LINE(394)
	::openfl::_internal::text::TextEngine tmp5 = this->__textEngine;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(394)
	int tmp6 = charIndex;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(394)
	int tmp7 = tmp5->getLineBreakIndex(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(394)
	int tmp8 = (tmp7 + (int)1);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(394)
	int endIndex = tmp8;		HX_STACK_VAR(endIndex,"endIndex");
	HX_STACK_LINE(396)
	bool tmp9 = (endIndex == (int)0);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(396)
	if ((tmp9)){
		HX_STACK_LINE(396)
		::openfl::_internal::text::TextEngine tmp10 = this->__textEngine;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(396)
		int tmp11 = tmp10->text.length;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(396)
		endIndex = tmp11;
	}
	HX_STACK_LINE(397)
	int tmp10 = (endIndex - startIndex);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(397)
	return tmp10;
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,getParagraphLength,return )

::openfl::text::TextFormat TextField_obj::getTextFormat( hx::Null< int >  __o_beginIndex,hx::Null< int >  __o_endIndex){
int beginIndex = __o_beginIndex.Default(0);
int endIndex = __o_endIndex.Default(0);
	HX_STACK_FRAME("openfl.text.TextField","getTextFormat",0x560e1d56,"openfl.text.TextField.getTextFormat","openfl/text/TextField.hx",402,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_ARG(beginIndex,"beginIndex")
	HX_STACK_ARG(endIndex,"endIndex")
{
		HX_STACK_LINE(404)
		::openfl::text::TextFormat format = null();		HX_STACK_VAR(format,"format");
		HX_STACK_LINE(406)
		{
			HX_STACK_LINE(406)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(406)
			::openfl::_internal::text::TextEngine tmp = this->__textEngine;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(406)
			Array< ::Dynamic > _g1 = tmp->textFormatRanges;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(406)
			while((true)){
				HX_STACK_LINE(406)
				bool tmp1 = (_g < _g1->length);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(406)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(406)
				if ((tmp2)){
					HX_STACK_LINE(406)
					break;
				}
				HX_STACK_LINE(406)
				::openfl::_internal::text::TextFormatRange tmp3 = _g1->__get(_g).StaticCast< ::openfl::_internal::text::TextFormatRange >();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(406)
				::openfl::_internal::text::TextFormatRange group = tmp3;		HX_STACK_VAR(group,"group");
				HX_STACK_LINE(406)
				++(_g);
				HX_STACK_LINE(408)
				bool tmp4 = (group->start <= beginIndex);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(408)
				bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(408)
				bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(408)
				if ((tmp5)){
					HX_STACK_LINE(408)
					tmp6 = (group->end >= beginIndex);
				}
				else{
					HX_STACK_LINE(408)
					tmp6 = false;
				}
				HX_STACK_LINE(408)
				bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(408)
				bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(408)
				if ((tmp7)){
					HX_STACK_LINE(408)
					bool tmp9 = (group->start <= endIndex);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(408)
					bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(408)
					bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(408)
					if ((tmp11)){
						HX_STACK_LINE(408)
						tmp8 = (group->end >= endIndex);
					}
					else{
						HX_STACK_LINE(408)
						tmp8 = false;
					}
				}
				else{
					HX_STACK_LINE(408)
					tmp8 = true;
				}
				HX_STACK_LINE(408)
				if ((tmp8)){
					HX_STACK_LINE(410)
					bool tmp9 = (format == null());		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(410)
					if ((tmp9)){
						HX_STACK_LINE(412)
						::openfl::text::TextFormat tmp10 = group->format->clone();		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(412)
						format = tmp10;
					}
					else{
						HX_STACK_LINE(416)
						::String tmp10 = group->format->font;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(416)
						::String tmp11 = format->font;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(416)
						bool tmp12 = (tmp10 != tmp11);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(416)
						if ((tmp12)){
							HX_STACK_LINE(416)
							format->font = null();
						}
						HX_STACK_LINE(417)
						Dynamic tmp13 = group->format->size;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(417)
						Dynamic tmp14 = format->size;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(417)
						bool tmp15 = (tmp13 != tmp14);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(417)
						if ((tmp15)){
							HX_STACK_LINE(417)
							format->size = null();
						}
						HX_STACK_LINE(418)
						Dynamic tmp16 = group->format->color;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(418)
						Dynamic tmp17 = format->color;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(418)
						bool tmp18 = (tmp16 != tmp17);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(418)
						if ((tmp18)){
							HX_STACK_LINE(418)
							format->color = null();
						}
						HX_STACK_LINE(419)
						Dynamic tmp19 = group->format->bold;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(419)
						Dynamic tmp20 = format->bold;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(419)
						bool tmp21 = (tmp19 != tmp20);		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(419)
						if ((tmp21)){
							HX_STACK_LINE(419)
							format->bold = null();
						}
						HX_STACK_LINE(420)
						Dynamic tmp22 = group->format->italic;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(420)
						Dynamic tmp23 = format->italic;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(420)
						bool tmp24 = (tmp22 != tmp23);		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(420)
						if ((tmp24)){
							HX_STACK_LINE(420)
							format->italic = null();
						}
						HX_STACK_LINE(421)
						Dynamic tmp25 = group->format->underline;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(421)
						Dynamic tmp26 = format->underline;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(421)
						bool tmp27 = (tmp25 != tmp26);		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(421)
						if ((tmp27)){
							HX_STACK_LINE(421)
							format->underline = null();
						}
						HX_STACK_LINE(422)
						::String tmp28 = group->format->url;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(422)
						::String tmp29 = format->url;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(422)
						bool tmp30 = (tmp28 != tmp29);		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(422)
						if ((tmp30)){
							HX_STACK_LINE(422)
							format->url = null();
						}
						HX_STACK_LINE(423)
						::String tmp31 = group->format->target;		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(423)
						::String tmp32 = format->target;		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(423)
						bool tmp33 = (tmp31 != tmp32);		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(423)
						if ((tmp33)){
							HX_STACK_LINE(423)
							format->target = null();
						}
						HX_STACK_LINE(424)
						Dynamic tmp34 = group->format->align;		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(424)
						Dynamic tmp35 = format->align;		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(424)
						bool tmp36 = (tmp34 != tmp35);		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(424)
						if ((tmp36)){
							HX_STACK_LINE(424)
							format->align = null();
						}
						HX_STACK_LINE(425)
						Dynamic tmp37 = group->format->leftMargin;		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(425)
						Dynamic tmp38 = format->leftMargin;		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(425)
						bool tmp39 = (tmp37 != tmp38);		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(425)
						if ((tmp39)){
							HX_STACK_LINE(425)
							format->leftMargin = null();
						}
						HX_STACK_LINE(426)
						Dynamic tmp40 = group->format->rightMargin;		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(426)
						Dynamic tmp41 = format->rightMargin;		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(426)
						bool tmp42 = (tmp40 != tmp41);		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(426)
						if ((tmp42)){
							HX_STACK_LINE(426)
							format->rightMargin = null();
						}
						HX_STACK_LINE(427)
						Dynamic tmp43 = group->format->indent;		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(427)
						Dynamic tmp44 = format->indent;		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(427)
						bool tmp45 = (tmp43 != tmp44);		HX_STACK_VAR(tmp45,"tmp45");
						HX_STACK_LINE(427)
						if ((tmp45)){
							HX_STACK_LINE(427)
							format->indent = null();
						}
						HX_STACK_LINE(428)
						Dynamic tmp46 = group->format->leading;		HX_STACK_VAR(tmp46,"tmp46");
						HX_STACK_LINE(428)
						Dynamic tmp47 = format->leading;		HX_STACK_VAR(tmp47,"tmp47");
						HX_STACK_LINE(428)
						bool tmp48 = (tmp46 != tmp47);		HX_STACK_VAR(tmp48,"tmp48");
						HX_STACK_LINE(428)
						if ((tmp48)){
							HX_STACK_LINE(428)
							format->leading = null();
						}
						HX_STACK_LINE(429)
						Dynamic tmp49 = group->format->blockIndent;		HX_STACK_VAR(tmp49,"tmp49");
						HX_STACK_LINE(429)
						Dynamic tmp50 = format->blockIndent;		HX_STACK_VAR(tmp50,"tmp50");
						HX_STACK_LINE(429)
						bool tmp51 = (tmp49 != tmp50);		HX_STACK_VAR(tmp51,"tmp51");
						HX_STACK_LINE(429)
						if ((tmp51)){
							HX_STACK_LINE(429)
							format->blockIndent = null();
						}
						HX_STACK_LINE(430)
						Dynamic tmp52 = group->format->bullet;		HX_STACK_VAR(tmp52,"tmp52");
						HX_STACK_LINE(430)
						Dynamic tmp53 = format->bullet;		HX_STACK_VAR(tmp53,"tmp53");
						HX_STACK_LINE(430)
						bool tmp54 = (tmp52 != tmp53);		HX_STACK_VAR(tmp54,"tmp54");
						HX_STACK_LINE(430)
						if ((tmp54)){
							HX_STACK_LINE(430)
							format->bullet = null();
						}
						HX_STACK_LINE(431)
						Dynamic tmp55 = group->format->kerning;		HX_STACK_VAR(tmp55,"tmp55");
						HX_STACK_LINE(431)
						Dynamic tmp56 = format->kerning;		HX_STACK_VAR(tmp56,"tmp56");
						HX_STACK_LINE(431)
						bool tmp57 = (tmp55 != tmp56);		HX_STACK_VAR(tmp57,"tmp57");
						HX_STACK_LINE(431)
						if ((tmp57)){
							HX_STACK_LINE(431)
							format->kerning = null();
						}
						HX_STACK_LINE(432)
						Dynamic tmp58 = group->format->letterSpacing;		HX_STACK_VAR(tmp58,"tmp58");
						HX_STACK_LINE(432)
						Dynamic tmp59 = format->letterSpacing;		HX_STACK_VAR(tmp59,"tmp59");
						HX_STACK_LINE(432)
						bool tmp60 = (tmp58 != tmp59);		HX_STACK_VAR(tmp60,"tmp60");
						HX_STACK_LINE(432)
						if ((tmp60)){
							HX_STACK_LINE(432)
							format->letterSpacing = null();
						}
						HX_STACK_LINE(433)
						bool tmp61 = (group->format->tabStops != format->tabStops);		HX_STACK_VAR(tmp61,"tmp61");
						HX_STACK_LINE(433)
						if ((tmp61)){
							HX_STACK_LINE(433)
							format->tabStops = null();
						}
					}
				}
			}
		}
		HX_STACK_LINE(441)
		::openfl::text::TextFormat tmp = format;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(441)
		return tmp;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(TextField_obj,getTextFormat,return )

Void TextField_obj::replaceSelectedText( ::String value){
{
		HX_STACK_FRAME("openfl.text.TextField","replaceSelectedText",0x86221d58,"openfl.text.TextField.replaceSelectedText","openfl/text/TextField.hx",446,0xccf02094)
		HX_STACK_THIS(this)
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(448)
		bool tmp = (value == HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(448)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(448)
		if ((tmp)){
			HX_STACK_LINE(448)
			int tmp2 = this->__selectionIndex;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(448)
			int tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(448)
			int tmp4 = this->__caretIndex;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(448)
			int tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(448)
			tmp1 = (tmp3 == tmp5);
		}
		else{
			HX_STACK_LINE(448)
			tmp1 = false;
		}
		HX_STACK_LINE(448)
		if ((tmp1)){
			HX_STACK_LINE(448)
			return null();
		}
		HX_STACK_LINE(450)
		int tmp2 = this->__caretIndex;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(450)
		int tmp3 = this->__selectionIndex;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(450)
		bool tmp4 = (tmp2 < tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(450)
		int tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(450)
		if ((tmp4)){
			HX_STACK_LINE(450)
			tmp5 = this->__caretIndex;
		}
		else{
			HX_STACK_LINE(450)
			tmp5 = this->__selectionIndex;
		}
		HX_STACK_LINE(450)
		int startIndex = tmp5;		HX_STACK_VAR(startIndex,"startIndex");
		HX_STACK_LINE(451)
		int tmp6 = this->__caretIndex;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(451)
		int tmp7 = this->__selectionIndex;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(451)
		bool tmp8 = (tmp6 > tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(451)
		int tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(451)
		if ((tmp8)){
			HX_STACK_LINE(451)
			tmp9 = this->__caretIndex;
		}
		else{
			HX_STACK_LINE(451)
			tmp9 = this->__selectionIndex;
		}
		HX_STACK_LINE(451)
		int endIndex = tmp9;		HX_STACK_VAR(endIndex,"endIndex");
		HX_STACK_LINE(453)
		int tmp10 = startIndex;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(453)
		int tmp11 = endIndex;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(453)
		::String tmp12 = value;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(453)
		this->replaceText(tmp10,tmp11,tmp12);
		HX_STACK_LINE(455)
		int tmp13 = (startIndex + value.length);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(455)
		this->__caretIndex = tmp13;
		HX_STACK_LINE(456)
		int tmp14 = this->__caretIndex;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(456)
		this->__selectionIndex = tmp14;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,replaceSelectedText,(void))

Void TextField_obj::replaceText( int beginIndex,int endIndex,::String newText){
{
		HX_STACK_FRAME("openfl.text.TextField","replaceText",0x698fcd5d,"openfl.text.TextField.replaceText","openfl/text/TextField.hx",461,0xccf02094)
		HX_STACK_THIS(this)
		HX_STACK_ARG(beginIndex,"beginIndex")
		HX_STACK_ARG(endIndex,"endIndex")
		HX_STACK_ARG(newText,"newText")
		HX_STACK_LINE(463)
		bool tmp = (endIndex < beginIndex);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(463)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(463)
		bool tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(463)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(463)
		if ((tmp2)){
			HX_STACK_LINE(463)
			tmp3 = (beginIndex < (int)0);
		}
		else{
			HX_STACK_LINE(463)
			tmp3 = true;
		}
		HX_STACK_LINE(463)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(463)
		bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(463)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(463)
		if ((tmp5)){
			HX_STACK_LINE(463)
			int tmp7 = endIndex;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(463)
			::openfl::_internal::text::TextEngine tmp8 = this->__textEngine;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(463)
			::openfl::_internal::text::TextEngine tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(463)
			::openfl::_internal::text::TextEngine tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(463)
			int tmp11 = tmp10->text.length;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(463)
			int tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(463)
			int tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(463)
			tmp6 = (tmp7 > tmp13);
		}
		else{
			HX_STACK_LINE(463)
			tmp6 = true;
		}
		HX_STACK_LINE(463)
		bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(463)
		bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(463)
		if ((tmp7)){
			HX_STACK_LINE(463)
			tmp8 = (newText == null());
		}
		else{
			HX_STACK_LINE(463)
			tmp8 = true;
		}
		HX_STACK_LINE(463)
		if ((tmp8)){
			HX_STACK_LINE(463)
			return null();
		}
		HX_STACK_LINE(465)
		::openfl::_internal::text::TextEngine tmp9 = this->__textEngine;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(465)
		int tmp10 = beginIndex;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(465)
		::String tmp11 = tmp9->text.substring((int)0,tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(465)
		::String tmp12 = newText;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(465)
		::String tmp13 = (tmp11 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(465)
		::openfl::_internal::text::TextEngine tmp14 = this->__textEngine;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(465)
		int tmp15 = endIndex;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(465)
		::String tmp16 = tmp14->text.substring(tmp15,null());		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(465)
		::String tmp17 = (tmp13 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(465)
		::openfl::_internal::text::TextEngine tmp18 = this->__textEngine;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(465)
		tmp18->text = tmp17;
		HX_STACK_LINE(467)
		int tmp19 = newText.length;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(467)
		int tmp20 = (endIndex - beginIndex);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(467)
		int tmp21 = (tmp19 - tmp20);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(467)
		int offset = tmp21;		HX_STACK_VAR(offset,"offset");
		HX_STACK_LINE(469)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(470)
		::openfl::_internal::text::TextFormatRange range;		HX_STACK_VAR(range,"range");
		HX_STACK_LINE(472)
		while((true)){
			HX_STACK_LINE(472)
			int tmp22 = i;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(472)
			::openfl::_internal::text::TextEngine tmp23 = this->__textEngine;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(472)
			int tmp24 = tmp23->textFormatRanges->length;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(472)
			bool tmp25 = (tmp22 < tmp24);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(472)
			bool tmp26 = !(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(472)
			if ((tmp26)){
				HX_STACK_LINE(472)
				break;
			}
			HX_STACK_LINE(474)
			::openfl::_internal::text::TextEngine tmp27 = this->__textEngine;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(474)
			::openfl::_internal::text::TextFormatRange tmp28 = tmp27->textFormatRanges->__get(i).StaticCast< ::openfl::_internal::text::TextFormatRange >();		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(474)
			range = tmp28;
			HX_STACK_LINE(476)
			bool tmp29 = (range->start <= beginIndex);		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(476)
			bool tmp30;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(476)
			if ((tmp29)){
				HX_STACK_LINE(476)
				tmp30 = (range->end >= endIndex);
			}
			else{
				HX_STACK_LINE(476)
				tmp30 = false;
			}
			HX_STACK_LINE(476)
			if ((tmp30)){
				HX_STACK_LINE(478)
				hx::AddEq(range->end,offset);
				HX_STACK_LINE(479)
				(i)++;
			}
			else{
				HX_STACK_LINE(481)
				bool tmp31 = (range->start >= beginIndex);		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(481)
				bool tmp32;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(481)
				if ((tmp31)){
					HX_STACK_LINE(481)
					tmp32 = (range->end <= endIndex);
				}
				else{
					HX_STACK_LINE(481)
					tmp32 = false;
				}
				HX_STACK_LINE(481)
				if ((tmp32)){
					HX_STACK_LINE(483)
					::openfl::_internal::text::TextEngine tmp33 = this->__textEngine;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(483)
					int tmp34 = i;		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(483)
					tmp33->textFormatRanges->splice(tmp34,(int)1);
					HX_STACK_LINE(484)
					int tmp35 = (range->end - range->start);		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(484)
					hx::SubEq(offset,tmp35);
				}
				else{
					HX_STACK_LINE(486)
					bool tmp33 = (range->start > beginIndex);		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(486)
					bool tmp34;		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(486)
					if ((tmp33)){
						HX_STACK_LINE(486)
						tmp34 = (range->start <= endIndex);
					}
					else{
						HX_STACK_LINE(486)
						tmp34 = false;
					}
					HX_STACK_LINE(486)
					if ((tmp34)){
						HX_STACK_LINE(488)
						hx::AddEq(range->start,offset);
						HX_STACK_LINE(489)
						(i)++;
					}
					else{
						HX_STACK_LINE(493)
						(i)++;
					}
				}
			}
		}
		HX_STACK_LINE(499)
		this->__dirty = true;
		HX_STACK_LINE(500)
		this->__layoutDirty = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(TextField_obj,replaceText,(void))

Void TextField_obj::setSelection( int beginIndex,int endIndex){
{
		HX_STACK_FRAME("openfl.text.TextField","setSelection",0xa586666e,"openfl.text.TextField.setSelection","openfl/text/TextField.hx",505,0xccf02094)
		HX_STACK_THIS(this)
		HX_STACK_ARG(beginIndex,"beginIndex")
		HX_STACK_ARG(endIndex,"endIndex")
		HX_STACK_LINE(507)
		this->__selectionIndex = beginIndex;
		HX_STACK_LINE(508)
		this->__caretIndex = endIndex;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(TextField_obj,setSelection,(void))

Void TextField_obj::setTextFormat( ::openfl::text::TextFormat format,hx::Null< int >  __o_beginIndex,hx::Null< int >  __o_endIndex){
int beginIndex = __o_beginIndex.Default(0);
int endIndex = __o_endIndex.Default(0);
	HX_STACK_FRAME("openfl.text.TextField","setTextFormat",0x9b13ff62,"openfl.text.TextField.setTextFormat","openfl/text/TextField.hx",513,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_ARG(format,"format")
	HX_STACK_ARG(beginIndex,"beginIndex")
	HX_STACK_ARG(endIndex,"endIndex")
{
		HX_STACK_LINE(515)
		bool tmp = (format->font != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(515)
		if ((tmp)){
			HX_STACK_LINE(515)
			::openfl::text::TextFormat tmp1 = this->__textFormat;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(515)
			tmp1->font = format->font;
		}
		HX_STACK_LINE(516)
		bool tmp1 = (format->size != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(516)
		if ((tmp1)){
			HX_STACK_LINE(516)
			::openfl::text::TextFormat tmp2 = this->__textFormat;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(516)
			tmp2->size = format->size;
		}
		HX_STACK_LINE(517)
		bool tmp2 = (format->color != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(517)
		if ((tmp2)){
			HX_STACK_LINE(517)
			::openfl::text::TextFormat tmp3 = this->__textFormat;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(517)
			tmp3->color = format->color;
		}
		HX_STACK_LINE(518)
		bool tmp3 = (format->bold != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(518)
		if ((tmp3)){
			HX_STACK_LINE(518)
			::openfl::text::TextFormat tmp4 = this->__textFormat;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(518)
			tmp4->bold = format->bold;
		}
		HX_STACK_LINE(519)
		bool tmp4 = (format->italic != null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(519)
		if ((tmp4)){
			HX_STACK_LINE(519)
			::openfl::text::TextFormat tmp5 = this->__textFormat;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(519)
			tmp5->italic = format->italic;
		}
		HX_STACK_LINE(520)
		bool tmp5 = (format->underline != null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(520)
		if ((tmp5)){
			HX_STACK_LINE(520)
			::openfl::text::TextFormat tmp6 = this->__textFormat;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(520)
			tmp6->underline = format->underline;
		}
		HX_STACK_LINE(521)
		bool tmp6 = (format->url != null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(521)
		if ((tmp6)){
			HX_STACK_LINE(521)
			::openfl::text::TextFormat tmp7 = this->__textFormat;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(521)
			tmp7->url = format->url;
		}
		HX_STACK_LINE(522)
		bool tmp7 = (format->target != null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(522)
		if ((tmp7)){
			HX_STACK_LINE(522)
			::openfl::text::TextFormat tmp8 = this->__textFormat;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(522)
			tmp8->target = format->target;
		}
		HX_STACK_LINE(523)
		bool tmp8 = (format->align != null());		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(523)
		if ((tmp8)){
			HX_STACK_LINE(523)
			::openfl::text::TextFormat tmp9 = this->__textFormat;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(523)
			tmp9->align = format->align;
		}
		HX_STACK_LINE(524)
		bool tmp9 = (format->leftMargin != null());		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(524)
		if ((tmp9)){
			HX_STACK_LINE(524)
			::openfl::text::TextFormat tmp10 = this->__textFormat;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(524)
			tmp10->leftMargin = format->leftMargin;
		}
		HX_STACK_LINE(525)
		bool tmp10 = (format->rightMargin != null());		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(525)
		if ((tmp10)){
			HX_STACK_LINE(525)
			::openfl::text::TextFormat tmp11 = this->__textFormat;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(525)
			tmp11->rightMargin = format->rightMargin;
		}
		HX_STACK_LINE(526)
		bool tmp11 = (format->indent != null());		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(526)
		if ((tmp11)){
			HX_STACK_LINE(526)
			::openfl::text::TextFormat tmp12 = this->__textFormat;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(526)
			tmp12->indent = format->indent;
		}
		HX_STACK_LINE(527)
		bool tmp12 = (format->leading != null());		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(527)
		if ((tmp12)){
			HX_STACK_LINE(527)
			::openfl::text::TextFormat tmp13 = this->__textFormat;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(527)
			tmp13->leading = format->leading;
		}
		HX_STACK_LINE(528)
		bool tmp13 = (format->blockIndent != null());		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(528)
		if ((tmp13)){
			HX_STACK_LINE(528)
			::openfl::text::TextFormat tmp14 = this->__textFormat;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(528)
			tmp14->blockIndent = format->blockIndent;
		}
		HX_STACK_LINE(529)
		bool tmp14 = (format->bullet != null());		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(529)
		if ((tmp14)){
			HX_STACK_LINE(529)
			::openfl::text::TextFormat tmp15 = this->__textFormat;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(529)
			tmp15->bullet = format->bullet;
		}
		HX_STACK_LINE(530)
		bool tmp15 = (format->kerning != null());		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(530)
		if ((tmp15)){
			HX_STACK_LINE(530)
			::openfl::text::TextFormat tmp16 = this->__textFormat;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(530)
			tmp16->kerning = format->kerning;
		}
		HX_STACK_LINE(531)
		bool tmp16 = (format->letterSpacing != null());		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(531)
		if ((tmp16)){
			HX_STACK_LINE(531)
			::openfl::text::TextFormat tmp17 = this->__textFormat;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(531)
			tmp17->letterSpacing = format->letterSpacing;
		}
		HX_STACK_LINE(532)
		bool tmp17 = (format->tabStops != null());		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(532)
		if ((tmp17)){
			HX_STACK_LINE(532)
			::openfl::text::TextFormat tmp18 = this->__textFormat;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(532)
			tmp18->tabStops = format->tabStops;
		}
		HX_STACK_LINE(534)
		this->__dirty = true;
		HX_STACK_LINE(535)
		this->__layoutDirty = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(TextField_obj,setTextFormat,(void))

Void TextField_obj::__getBounds( ::openfl::geom::Rectangle rect,::openfl::geom::Matrix matrix){
{
		HX_STACK_FRAME("openfl.text.TextField","__getBounds",0x189abae7,"openfl.text.TextField.__getBounds","openfl/text/TextField.hx",540,0xccf02094)
		HX_STACK_THIS(this)
		HX_STACK_ARG(rect,"rect")
		HX_STACK_ARG(matrix,"matrix")
		HX_STACK_LINE(542)
		this->__updateLayout();
		HX_STACK_LINE(543)
		::openfl::geom::Rectangle tmp = ::openfl::geom::Rectangle_obj::__temp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(543)
		::openfl::geom::Rectangle bounds = tmp;		HX_STACK_VAR(bounds,"bounds");
		HX_STACK_LINE(544)
		::openfl::_internal::text::TextEngine tmp1 = this->__textEngine;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(544)
		::openfl::geom::Rectangle tmp2 = bounds;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(544)
		::openfl::geom::Matrix tmp3 = matrix;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(544)
		tmp1->bounds->__transform(tmp2,tmp3);
		HX_STACK_LINE(545)
		Float tmp4 = bounds->x;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(545)
		Float tmp5 = bounds->y;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(545)
		Float tmp6 = bounds->width;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(545)
		Float tmp7 = bounds->height;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(545)
		rect->__expand(tmp4,tmp5,tmp6,tmp7);
	}
return null();
}


::lime::ui::MouseCursor TextField_obj::__getCursor( ){
	HX_STACK_FRAME("openfl.text.TextField","__getCursor",0xf165c348,"openfl.text.TextField.__getCursor","openfl/text/TextField.hx",550,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_LINE(552)
	::openfl::_internal::text::TextEngine tmp = this->__textEngine;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(552)
	bool tmp1 = tmp->selectable;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(552)
	::lime::ui::MouseCursor tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(552)
	if ((tmp1)){
		HX_STACK_LINE(552)
		tmp2 = ::lime::ui::MouseCursor_obj::TEXT;
	}
	else{
		HX_STACK_LINE(552)
		tmp2 = null();
	}
	HX_STACK_LINE(552)
	return tmp2;
}


int TextField_obj::__getPosition( Float x,Float y){
	HX_STACK_FRAME("openfl.text.TextField","__getPosition",0xfe83559b,"openfl.text.TextField.__getPosition","openfl/text/TextField.hx",557,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_LINE(559)
	this->__updateLayout();
	HX_STACK_LINE(561)
	int tmp = this->get_scrollH();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(561)
	hx::AddEq(x,tmp);
	HX_STACK_LINE(563)
	{
		HX_STACK_LINE(563)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(563)
		int tmp1 = this->get_scrollV();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(563)
		int tmp2 = (tmp1 - (int)1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(563)
		int _g = tmp2;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(563)
		while((true)){
			HX_STACK_LINE(563)
			bool tmp3 = (_g1 < _g);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(563)
			bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(563)
			if ((tmp4)){
				HX_STACK_LINE(563)
				break;
			}
			HX_STACK_LINE(563)
			int tmp5 = (_g1)++;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(563)
			int i = tmp5;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(565)
			::openfl::_internal::text::TextEngine tmp6 = this->__textEngine;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(565)
			Float tmp7 = tmp6->lineHeights->__get(i);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(565)
			hx::AddEq(y,tmp7);
		}
	}
	HX_STACK_LINE(569)
	Float tmp1 = y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(569)
	::openfl::_internal::text::TextEngine tmp2 = this->__textEngine;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(569)
	Float tmp3 = tmp2->textHeight;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(569)
	bool tmp4 = (tmp1 > tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(569)
	if ((tmp4)){
		HX_STACK_LINE(569)
		::openfl::_internal::text::TextEngine tmp5 = this->__textEngine;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(569)
		y = tmp5->textHeight;
	}
	HX_STACK_LINE(571)
	bool firstGroup = true;		HX_STACK_VAR(firstGroup,"firstGroup");
	HX_STACK_LINE(572)
	::openfl::_internal::text::TextLayoutGroup group;		HX_STACK_VAR(group,"group");
	HX_STACK_LINE(572)
	::openfl::_internal::text::TextLayoutGroup nextGroup;		HX_STACK_VAR(nextGroup,"nextGroup");
	HX_STACK_LINE(574)
	{
		HX_STACK_LINE(574)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(574)
		::openfl::_internal::text::TextEngine tmp5 = this->__textEngine;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(574)
		int tmp6 = tmp5->layoutGroups->length;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(574)
		int _g = tmp6;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(574)
		while((true)){
			HX_STACK_LINE(574)
			bool tmp7 = (_g1 < _g);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(574)
			bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(574)
			if ((tmp8)){
				HX_STACK_LINE(574)
				break;
			}
			HX_STACK_LINE(574)
			int tmp9 = (_g1)++;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(574)
			int i = tmp9;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(576)
			::openfl::_internal::text::TextEngine tmp10 = this->__textEngine;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(576)
			::openfl::_internal::text::TextLayoutGroup tmp11 = tmp10->layoutGroups->__get(i).StaticCast< ::openfl::_internal::text::TextLayoutGroup >();		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(576)
			group = tmp11;
			HX_STACK_LINE(578)
			int tmp12 = i;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(578)
			::openfl::_internal::text::TextEngine tmp13 = this->__textEngine;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(578)
			int tmp14 = tmp13->layoutGroups->length;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(578)
			int tmp15 = (tmp14 - (int)1);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(578)
			bool tmp16 = (tmp12 < tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(578)
			if ((tmp16)){
				HX_STACK_LINE(580)
				::openfl::_internal::text::TextEngine tmp17 = this->__textEngine;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(580)
				int tmp18 = (i + (int)1);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(580)
				::openfl::_internal::text::TextLayoutGroup tmp19 = tmp17->layoutGroups->__get(tmp18).StaticCast< ::openfl::_internal::text::TextLayoutGroup >();		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(580)
				nextGroup = tmp19;
			}
			else{
				HX_STACK_LINE(584)
				nextGroup = null();
			}
			HX_STACK_LINE(588)
			bool tmp17 = firstGroup;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(588)
			if ((tmp17)){
				HX_STACK_LINE(590)
				bool tmp18 = (y < group->offsetY);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(590)
				if ((tmp18)){
					HX_STACK_LINE(590)
					y = group->offsetY;
				}
				HX_STACK_LINE(591)
				bool tmp19 = (x < group->offsetX);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(591)
				if ((tmp19)){
					HX_STACK_LINE(591)
					x = group->offsetX;
				}
				HX_STACK_LINE(592)
				firstGroup = false;
			}
			HX_STACK_LINE(596)
			bool tmp18 = (y >= group->offsetY);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(596)
			bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(596)
			bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(596)
			if ((tmp19)){
				HX_STACK_LINE(596)
				Float tmp21 = y;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(596)
				Float tmp22 = (group->offsetY + group->height);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(596)
				Float tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(596)
				Float tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(596)
				tmp20 = (tmp21 <= tmp24);
			}
			else{
				HX_STACK_LINE(596)
				tmp20 = false;
			}
			HX_STACK_LINE(596)
			bool tmp21 = !(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(596)
			bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(596)
			if ((tmp21)){
				HX_STACK_LINE(596)
				tmp22 = (nextGroup == null());
			}
			else{
				HX_STACK_LINE(596)
				tmp22 = true;
			}
			HX_STACK_LINE(596)
			if ((tmp22)){
				HX_STACK_LINE(598)
				bool tmp23 = (x >= group->offsetX);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(598)
				bool tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(598)
				bool tmp25;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(598)
				if ((tmp24)){
					HX_STACK_LINE(598)
					Float tmp26 = x;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(598)
					Float tmp27 = (group->offsetX + group->width);		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(598)
					Float tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(598)
					Float tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(598)
					tmp25 = (tmp26 <= tmp29);
				}
				else{
					HX_STACK_LINE(598)
					tmp25 = false;
				}
				HX_STACK_LINE(598)
				bool tmp26 = !(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(598)
				bool tmp27;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(598)
				if ((tmp26)){
					HX_STACK_LINE(598)
					bool tmp28 = (nextGroup == null());		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(598)
					bool tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(598)
					bool tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(598)
					bool tmp31 = !(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(598)
					bool tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(598)
					bool tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(598)
					if ((tmp33)){
						HX_STACK_LINE(598)
						tmp27 = (nextGroup->lineIndex != group->lineIndex);
					}
					else{
						HX_STACK_LINE(598)
						tmp27 = true;
					}
				}
				else{
					HX_STACK_LINE(598)
					tmp27 = true;
				}
				HX_STACK_LINE(598)
				if ((tmp27)){
					HX_STACK_LINE(600)
					Float advance = ((Float)0.0);		HX_STACK_VAR(advance,"advance");
					HX_STACK_LINE(602)
					{
						HX_STACK_LINE(602)
						int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
						HX_STACK_LINE(602)
						int tmp28 = group->advances->length;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(602)
						int _g2 = tmp28;		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(602)
						while((true)){
							HX_STACK_LINE(602)
							bool tmp29 = (_g3 < _g2);		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(602)
							bool tmp30 = !(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(602)
							if ((tmp30)){
								HX_STACK_LINE(602)
								break;
							}
							HX_STACK_LINE(602)
							int tmp31 = (_g3)++;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(602)
							int i1 = tmp31;		HX_STACK_VAR(i1,"i1");
							HX_STACK_LINE(604)
							Float tmp32 = group->advances->__get(i1);		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(604)
							hx::AddEq(advance,tmp32);
							HX_STACK_LINE(606)
							Float tmp33 = x;		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(606)
							Float tmp34 = (group->offsetX + advance);		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(606)
							bool tmp35 = (tmp33 <= tmp34);		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(606)
							if ((tmp35)){
								HX_STACK_LINE(608)
								Float tmp36 = x;		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(608)
								Float tmp37 = group->offsetX;		HX_STACK_VAR(tmp37,"tmp37");
								HX_STACK_LINE(608)
								Float tmp38 = advance;		HX_STACK_VAR(tmp38,"tmp38");
								HX_STACK_LINE(608)
								Float tmp39 = group->advances->__get(i1);		HX_STACK_VAR(tmp39,"tmp39");
								HX_STACK_LINE(608)
								Float tmp40 = (tmp38 - tmp39);		HX_STACK_VAR(tmp40,"tmp40");
								HX_STACK_LINE(608)
								Float tmp41 = (tmp37 + tmp40);		HX_STACK_VAR(tmp41,"tmp41");
								HX_STACK_LINE(608)
								Float tmp42 = group->advances->__get(i1);		HX_STACK_VAR(tmp42,"tmp42");
								HX_STACK_LINE(608)
								Float tmp43 = (Float(tmp42) / Float((int)2));		HX_STACK_VAR(tmp43,"tmp43");
								HX_STACK_LINE(608)
								Float tmp44 = (tmp41 + tmp43);		HX_STACK_VAR(tmp44,"tmp44");
								HX_STACK_LINE(608)
								bool tmp45 = (tmp36 <= tmp44);		HX_STACK_VAR(tmp45,"tmp45");
								HX_STACK_LINE(608)
								if ((tmp45)){
									HX_STACK_LINE(610)
									int tmp46 = (group->startIndex + i1);		HX_STACK_VAR(tmp46,"tmp46");
									HX_STACK_LINE(610)
									return tmp46;
								}
								else{
									HX_STACK_LINE(614)
									int tmp46 = (group->startIndex + i1);		HX_STACK_VAR(tmp46,"tmp46");
									HX_STACK_LINE(614)
									int tmp47 = group->endIndex;		HX_STACK_VAR(tmp47,"tmp47");
									HX_STACK_LINE(614)
									bool tmp48 = (tmp46 < tmp47);		HX_STACK_VAR(tmp48,"tmp48");
									HX_STACK_LINE(614)
									int tmp49;		HX_STACK_VAR(tmp49,"tmp49");
									HX_STACK_LINE(614)
									if ((tmp48)){
										HX_STACK_LINE(614)
										int tmp50 = (group->startIndex + i1);		HX_STACK_VAR(tmp50,"tmp50");
										HX_STACK_LINE(614)
										tmp49 = (tmp50 + (int)1);
									}
									else{
										HX_STACK_LINE(614)
										tmp49 = group->endIndex;
									}
									HX_STACK_LINE(614)
									return tmp49;
								}
							}
						}
					}
					HX_STACK_LINE(622)
					int tmp28 = group->endIndex;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(622)
					return tmp28;
				}
			}
		}
	}
	HX_STACK_LINE(630)
	::openfl::_internal::text::TextEngine tmp5 = this->__textEngine;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(630)
	int tmp6 = tmp5->text.length;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(630)
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC2(TextField_obj,__getPosition,return )

bool TextField_obj::__hitTest( Float x,Float y,bool shapeFlag,Array< ::Dynamic > stack,bool interactiveOnly,::openfl::display::DisplayObject hitObject){
	HX_STACK_FRAME("openfl.text.TextField","__hitTest",0x83278481,"openfl.text.TextField.__hitTest","openfl/text/TextField.hx",635,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(shapeFlag,"shapeFlag")
	HX_STACK_ARG(stack,"stack")
	HX_STACK_ARG(interactiveOnly,"interactiveOnly")
	HX_STACK_ARG(hitObject,"hitObject")
	HX_STACK_LINE(637)
	bool tmp = hitObject->get_visible();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(637)
	bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(637)
	bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(637)
	bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(637)
	bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(637)
	bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(637)
	if ((tmp4)){
		HX_STACK_LINE(637)
		tmp5 = this->__isMask;
	}
	else{
		HX_STACK_LINE(637)
		tmp5 = true;
	}
	HX_STACK_LINE(637)
	bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(637)
	bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(637)
	if ((tmp6)){
		HX_STACK_LINE(637)
		bool tmp8 = interactiveOnly;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(637)
		bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(637)
		if ((tmp9)){
			HX_STACK_LINE(637)
			bool tmp10 = this->mouseEnabled;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(637)
			bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(637)
			bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(637)
			bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(637)
			bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(637)
			tmp7 = !(tmp14);
		}
		else{
			HX_STACK_LINE(637)
			tmp7 = false;
		}
	}
	else{
		HX_STACK_LINE(637)
		tmp7 = true;
	}
	HX_STACK_LINE(637)
	if ((tmp7)){
		HX_STACK_LINE(637)
		return false;
	}
	HX_STACK_LINE(638)
	::openfl::display::DisplayObject tmp8 = this->get_mask();		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(638)
	bool tmp9 = (tmp8 != null());		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(638)
	bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(638)
	if ((tmp9)){
		HX_STACK_LINE(638)
		::openfl::display::DisplayObject tmp11 = this->get_mask();		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(638)
		::openfl::display::DisplayObject tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(638)
		Float tmp13 = x;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(638)
		Float tmp14 = y;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(638)
		Float tmp15 = tmp13;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(638)
		Float tmp16 = tmp14;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(638)
		bool tmp17 = tmp12->__hitTestMask(tmp15,tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(638)
		bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(638)
		bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(638)
		tmp10 = !(tmp19);
	}
	else{
		HX_STACK_LINE(638)
		tmp10 = false;
	}
	HX_STACK_LINE(638)
	if ((tmp10)){
		HX_STACK_LINE(638)
		return false;
	}
	HX_STACK_LINE(640)
	this->__getWorldTransform();
	HX_STACK_LINE(641)
	this->__updateLayout();
	HX_STACK_LINE(643)
	Float tmp11;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(643)
	{
		HX_STACK_LINE(643)
		::openfl::geom::Matrix tmp12 = this->__worldTransform;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(643)
		::openfl::geom::Matrix _this = tmp12;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(643)
		Float tmp13 = (_this->a * _this->d);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(643)
		Float tmp14 = (_this->b * _this->c);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(643)
		Float tmp15 = (tmp13 - tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(643)
		Float norm = tmp15;		HX_STACK_VAR(norm,"norm");
		HX_STACK_LINE(643)
		bool tmp16 = (norm == (int)0);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(643)
		if ((tmp16)){
			HX_STACK_LINE(643)
			Float tmp17 = _this->tx;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(643)
			tmp11 = -(tmp17);
		}
		else{
			HX_STACK_LINE(643)
			Float tmp17 = (Float(((Float)1.0)) / Float(norm));		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(643)
			Float tmp18 = _this->c;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(643)
			Float tmp19 = (_this->ty - y);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(643)
			Float tmp20 = (tmp18 * tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(643)
			Float tmp21 = _this->d;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(643)
			Float tmp22 = (x - _this->tx);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(643)
			Float tmp23 = (tmp21 * tmp22);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(643)
			Float tmp24 = (tmp20 + tmp23);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(643)
			tmp11 = (tmp17 * tmp24);
		}
	}
	HX_STACK_LINE(643)
	Float px = tmp11;		HX_STACK_VAR(px,"px");
	HX_STACK_LINE(644)
	Float tmp12;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(644)
	{
		HX_STACK_LINE(644)
		::openfl::geom::Matrix tmp13 = this->__worldTransform;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(644)
		::openfl::geom::Matrix _this = tmp13;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(644)
		Float tmp14 = (_this->a * _this->d);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(644)
		Float tmp15 = (_this->b * _this->c);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(644)
		Float tmp16 = (tmp14 - tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(644)
		Float norm = tmp16;		HX_STACK_VAR(norm,"norm");
		HX_STACK_LINE(644)
		bool tmp17 = (norm == (int)0);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(644)
		if ((tmp17)){
			HX_STACK_LINE(644)
			Float tmp18 = _this->ty;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(644)
			tmp12 = -(tmp18);
		}
		else{
			HX_STACK_LINE(644)
			Float tmp18 = (Float(((Float)1.0)) / Float(norm));		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(644)
			Float tmp19 = _this->a;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(644)
			Float tmp20 = (y - _this->ty);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(644)
			Float tmp21 = (tmp19 * tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(644)
			Float tmp22 = _this->b;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(644)
			Float tmp23 = (_this->tx - x);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(644)
			Float tmp24 = (tmp22 * tmp23);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(644)
			Float tmp25 = (tmp21 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(644)
			tmp12 = (tmp18 * tmp25);
		}
	}
	HX_STACK_LINE(644)
	Float py = tmp12;		HX_STACK_VAR(py,"py");
	HX_STACK_LINE(646)
	::openfl::_internal::text::TextEngine tmp13 = this->__textEngine;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(646)
	Float tmp14 = px;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(646)
	Float tmp15 = py;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(646)
	bool tmp16 = tmp13->bounds->contains(tmp14,tmp15);		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(646)
	if ((tmp16)){
		HX_STACK_LINE(648)
		bool tmp17 = (stack != null());		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(648)
		if ((tmp17)){
			HX_STACK_LINE(650)
			::openfl::display::DisplayObject tmp18 = hitObject;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(650)
			stack->push(tmp18);
		}
		HX_STACK_LINE(654)
		return true;
	}
	HX_STACK_LINE(658)
	return false;
}


bool TextField_obj::__hitTestMask( Float x,Float y){
	HX_STACK_FRAME("openfl.text.TextField","__hitTestMask",0x0119c60d,"openfl.text.TextField.__hitTestMask","openfl/text/TextField.hx",663,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_LINE(665)
	this->__getWorldTransform();
	HX_STACK_LINE(666)
	this->__updateLayout();
	HX_STACK_LINE(668)
	Float tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(668)
	{
		HX_STACK_LINE(668)
		::openfl::geom::Matrix tmp1 = this->__worldTransform;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(668)
		::openfl::geom::Matrix _this = tmp1;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(668)
		Float tmp2 = (_this->a * _this->d);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(668)
		Float tmp3 = (_this->b * _this->c);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(668)
		Float tmp4 = (tmp2 - tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(668)
		Float norm = tmp4;		HX_STACK_VAR(norm,"norm");
		HX_STACK_LINE(668)
		bool tmp5 = (norm == (int)0);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(668)
		if ((tmp5)){
			HX_STACK_LINE(668)
			Float tmp6 = _this->tx;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(668)
			tmp = -(tmp6);
		}
		else{
			HX_STACK_LINE(668)
			Float tmp6 = (Float(((Float)1.0)) / Float(norm));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(668)
			Float tmp7 = _this->c;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(668)
			Float tmp8 = (_this->ty - y);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(668)
			Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(668)
			Float tmp10 = _this->d;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(668)
			Float tmp11 = (x - _this->tx);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(668)
			Float tmp12 = (tmp10 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(668)
			Float tmp13 = (tmp9 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(668)
			tmp = (tmp6 * tmp13);
		}
	}
	HX_STACK_LINE(668)
	Float px = tmp;		HX_STACK_VAR(px,"px");
	HX_STACK_LINE(669)
	Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(669)
	{
		HX_STACK_LINE(669)
		::openfl::geom::Matrix tmp2 = this->__worldTransform;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(669)
		::openfl::geom::Matrix _this = tmp2;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(669)
		Float tmp3 = (_this->a * _this->d);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(669)
		Float tmp4 = (_this->b * _this->c);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(669)
		Float tmp5 = (tmp3 - tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(669)
		Float norm = tmp5;		HX_STACK_VAR(norm,"norm");
		HX_STACK_LINE(669)
		bool tmp6 = (norm == (int)0);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(669)
		if ((tmp6)){
			HX_STACK_LINE(669)
			Float tmp7 = _this->ty;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(669)
			tmp1 = -(tmp7);
		}
		else{
			HX_STACK_LINE(669)
			Float tmp7 = (Float(((Float)1.0)) / Float(norm));		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(669)
			Float tmp8 = _this->a;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(669)
			Float tmp9 = (y - _this->ty);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(669)
			Float tmp10 = (tmp8 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(669)
			Float tmp11 = _this->b;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(669)
			Float tmp12 = (_this->tx - x);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(669)
			Float tmp13 = (tmp11 * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(669)
			Float tmp14 = (tmp10 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(669)
			tmp1 = (tmp7 * tmp14);
		}
	}
	HX_STACK_LINE(669)
	Float py = tmp1;		HX_STACK_VAR(py,"py");
	HX_STACK_LINE(671)
	::openfl::_internal::text::TextEngine tmp2 = this->__textEngine;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(671)
	Float tmp3 = px;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(671)
	Float tmp4 = py;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(671)
	bool tmp5 = tmp2->bounds->contains(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(671)
	if ((tmp5)){
		HX_STACK_LINE(673)
		return true;
	}
	HX_STACK_LINE(677)
	return false;
}


Void TextField_obj::__renderCairo( ::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl.text.TextField","__renderCairo",0x1a5f4f8e,"openfl.text.TextField.__renderCairo","openfl/text/TextField.hx",682,0xccf02094)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_LINE(684)
		::openfl::_internal::renderer::RenderSession tmp = renderSession;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(684)
		::openfl::geom::Matrix tmp1 = this->__worldTransform;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(684)
		::openfl::_internal::renderer::cairo::CairoTextField_obj::render(hx::ObjectPtr<OBJ_>(this),tmp,tmp1);
		HX_STACK_LINE(685)
		::openfl::_internal::renderer::RenderSession tmp2 = renderSession;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(685)
		this->super::__renderCairo(tmp2);
	}
return null();
}


Void TextField_obj::__renderCanvas( ::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl.text.TextField","__renderCanvas",0xfc575b12,"openfl.text.TextField.__renderCanvas","openfl/text/TextField.hx",690,0xccf02094)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_LINE(694)
		::openfl::_internal::text::TextEngine tmp = this->__textEngine;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(694)
		Dynamic tmp1 = tmp->antiAliasType;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(694)
		bool tmp2 = (tmp1 == ((Dynamic)((int)0)));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(694)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(694)
		if ((tmp2)){
			HX_STACK_LINE(694)
			::openfl::_internal::text::TextEngine tmp4 = this->__textEngine;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(694)
			::openfl::_internal::text::TextEngine tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(694)
			Dynamic tmp6 = tmp5->gridFitType;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(694)
			tmp3 = (tmp6 == ((Dynamic)((int)1)));
		}
		else{
			HX_STACK_LINE(694)
			tmp3 = false;
		}
		HX_STACK_LINE(694)
		if ((tmp3)){
			HX_STACK_LINE(696)
			bool tmp4 = renderSession->context->imageSmoothingEnabled;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(696)
			bool smoothingEnabled = tmp4;		HX_STACK_VAR(smoothingEnabled,"smoothingEnabled");
			HX_STACK_LINE(698)
			bool tmp5 = smoothingEnabled;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(698)
			if ((tmp5)){
				HX_STACK_LINE(700)
				renderSession->context->__FieldRef(HX_HCSTRING("mozImageSmoothingEnabled","\xf0","\x68","\xe1","\xd7")) = false;
				HX_STACK_LINE(702)
				renderSession->context->__FieldRef(HX_HCSTRING("msImageSmoothingEnabled","\xa2","\x61","\x6c","\xa3")) = false;
				HX_STACK_LINE(703)
				renderSession->context->imageSmoothingEnabled = false;
			}
			HX_STACK_LINE(707)
			::openfl::_internal::renderer::RenderSession tmp6 = renderSession;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(707)
			this->super::__renderCanvas(tmp6);
			HX_STACK_LINE(709)
			bool tmp7 = smoothingEnabled;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(709)
			if ((tmp7)){
				HX_STACK_LINE(711)
				renderSession->context->__FieldRef(HX_HCSTRING("mozImageSmoothingEnabled","\xf0","\x68","\xe1","\xd7")) = true;
				HX_STACK_LINE(713)
				renderSession->context->__FieldRef(HX_HCSTRING("msImageSmoothingEnabled","\xa2","\x61","\x6c","\xa3")) = true;
				HX_STACK_LINE(714)
				renderSession->context->imageSmoothingEnabled = true;
			}
		}
		else{
			HX_STACK_LINE(720)
			::openfl::_internal::renderer::RenderSession tmp4 = renderSession;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(720)
			this->super::__renderCanvas(tmp4);
		}
	}
return null();
}


Void TextField_obj::__renderDOM( ::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl.text.TextField","__renderDOM",0x037e5808,"openfl.text.TextField.__renderDOM","openfl/text/TextField.hx",729,0xccf02094)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_LINE(729)
		Dynamic();
	}
return null();
}


Void TextField_obj::__renderGL( ::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl.text.TextField","__renderGL",0xa5533b3f,"openfl.text.TextField.__renderGL","openfl/text/TextField.hx",734,0xccf02094)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_LINE(739)
		::openfl::_internal::renderer::RenderSession tmp = renderSession;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(739)
		::openfl::geom::Matrix tmp1 = this->__worldTransform;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(739)
		::openfl::_internal::renderer::cairo::CairoTextField_obj::render(hx::ObjectPtr<OBJ_>(this),tmp,tmp1);
		HX_STACK_LINE(742)
		::openfl::_internal::renderer::RenderSession tmp2 = renderSession;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(742)
		this->super::__renderGL(tmp2);
	}
return null();
}


Void TextField_obj::__startCursorTimer( ){
{
		HX_STACK_FRAME("openfl.text.TextField","__startCursorTimer",0xacba2811,"openfl.text.TextField.__startCursorTimer","openfl/text/TextField.hx",747,0xccf02094)
		HX_STACK_THIS(this)
		HX_STACK_LINE(749)
		Dynamic tmp = this->__startCursorTimer_dyn();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(749)
		::haxe::Timer tmp1 = ::haxe::Timer_obj::delay(tmp,(int)600);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(749)
		this->__cursorTimer = tmp1;
		HX_STACK_LINE(750)
		bool tmp2 = this->__showCursor;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(750)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(750)
		this->__showCursor = tmp3;
		HX_STACK_LINE(751)
		this->__dirty = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,__startCursorTimer,(void))

Void TextField_obj::__startTextInput( ){
{
		HX_STACK_FRAME("openfl.text.TextField","__startTextInput",0x3a7d3e9f,"openfl.text.TextField.__startTextInput","openfl/text/TextField.hx",756,0xccf02094)
		HX_STACK_THIS(this)
		HX_STACK_LINE(758)
		int tmp = this->__caretIndex;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(758)
		bool tmp1 = (tmp < (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(758)
		if ((tmp1)){
			HX_STACK_LINE(760)
			::openfl::_internal::text::TextEngine tmp2 = this->__textEngine;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(760)
			int tmp3 = tmp2->text.length;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(760)
			this->__caretIndex = tmp3;
			HX_STACK_LINE(761)
			int tmp4 = this->__caretIndex;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(761)
			this->__selectionIndex = tmp4;
		}
		HX_STACK_LINE(765)
		::openfl::display::Stage tmp2 = this->stage;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(765)
		bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(765)
		if ((tmp3)){
			HX_STACK_LINE(769)
			::openfl::display::Stage tmp4 = this->stage;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(769)
			::lime::_backend::native::NativeWindow tmp5 = tmp4->window->backend;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(769)
			tmp5->setEnableTextEvents(true);
			HX_STACK_LINE(771)
			bool tmp6 = this->__inputEnabled;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(771)
			bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(771)
			if ((tmp7)){
				HX_STACK_LINE(773)
				::openfl::display::Stage tmp8 = this->stage;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(773)
				::lime::_backend::native::NativeWindow tmp9 = tmp8->window->backend;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(773)
				tmp9->setEnableTextEvents(true);
				HX_STACK_LINE(775)
				::openfl::display::Stage tmp10 = this->stage;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(775)
				::lime::app::Event_String_Void tmp11 = tmp10->window->onTextInput;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(775)
				Dynamic tmp12 = this->window_onTextInput_dyn();		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(775)
				bool tmp13 = tmp11->has(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(775)
				bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(775)
				if ((tmp14)){
					HX_STACK_LINE(777)
					::openfl::display::Stage tmp15 = this->stage;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(777)
					::lime::app::Event_String_Void tmp16 = tmp15->window->onTextInput;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(777)
					Dynamic tmp17 = this->window_onTextInput_dyn();		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(777)
					tmp16->add(tmp17,null(),null());
					HX_STACK_LINE(778)
					::openfl::display::Stage tmp18 = this->stage;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(778)
					::lime::app::Event_lime_ui_KeyCode_lime_ui_KeyModifier_Void tmp19 = tmp18->window->onKeyDown;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(778)
					Dynamic tmp20 = this->window_onKeyDown_dyn();		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(778)
					tmp19->add(tmp20,null(),null());
				}
				HX_STACK_LINE(782)
				this->__inputEnabled = true;
				HX_STACK_LINE(783)
				this->__startCursorTimer();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,__startTextInput,(void))

Void TextField_obj::__stopCursorTimer( ){
{
		HX_STACK_FRAME("openfl.text.TextField","__stopCursorTimer",0x8f135c69,"openfl.text.TextField.__stopCursorTimer","openfl/text/TextField.hx",794,0xccf02094)
		HX_STACK_THIS(this)
		HX_STACK_LINE(796)
		::haxe::Timer tmp = this->__cursorTimer;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(796)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(796)
		if ((tmp1)){
			HX_STACK_LINE(798)
			::haxe::Timer tmp2 = this->__cursorTimer;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(798)
			tmp2->stop();
			HX_STACK_LINE(799)
			this->__cursorTimer = null();
		}
		HX_STACK_LINE(803)
		bool tmp2 = this->__showCursor;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(803)
		if ((tmp2)){
			HX_STACK_LINE(805)
			this->__showCursor = false;
			HX_STACK_LINE(806)
			this->__dirty = true;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,__stopCursorTimer,(void))

Void TextField_obj::__stopTextInput( ){
{
		HX_STACK_FRAME("openfl.text.TextField","__stopTextInput",0x6c7c2cf7,"openfl.text.TextField.__stopTextInput","openfl/text/TextField.hx",813,0xccf02094)
		HX_STACK_THIS(this)
		HX_STACK_LINE(817)
		bool tmp = this->__inputEnabled;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(817)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(817)
		if ((tmp)){
			HX_STACK_LINE(817)
			::openfl::display::Stage tmp2 = this->stage;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(817)
			::openfl::display::Stage tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(817)
			tmp1 = (tmp3 != null());
		}
		else{
			HX_STACK_LINE(817)
			tmp1 = false;
		}
		HX_STACK_LINE(817)
		if ((tmp1)){
			HX_STACK_LINE(819)
			::openfl::display::Stage tmp2 = this->stage;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(819)
			::lime::_backend::native::NativeWindow tmp3 = tmp2->window->backend;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(819)
			tmp3->setEnableTextEvents(false);
			HX_STACK_LINE(820)
			::openfl::display::Stage tmp4 = this->stage;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(820)
			::lime::app::Event_String_Void tmp5 = tmp4->window->onTextInput;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(820)
			Dynamic tmp6 = this->window_onTextInput_dyn();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(820)
			tmp5->remove(tmp6);
			HX_STACK_LINE(821)
			::openfl::display::Stage tmp7 = this->stage;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(821)
			::lime::app::Event_lime_ui_KeyCode_lime_ui_KeyModifier_Void tmp8 = tmp7->window->onKeyDown;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(821)
			Dynamic tmp9 = this->window_onKeyDown_dyn();		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(821)
			tmp8->remove(tmp9);
			HX_STACK_LINE(823)
			this->__inputEnabled = false;
			HX_STACK_LINE(824)
			this->__stopCursorTimer();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,__stopTextInput,(void))

Void TextField_obj::__updateLayout( ){
{
		HX_STACK_FRAME("openfl.text.TextField","__updateLayout",0x2d3b57d7,"openfl.text.TextField.__updateLayout","openfl/text/TextField.hx",833,0xccf02094)
		HX_STACK_THIS(this)
		HX_STACK_LINE(835)
		bool tmp = this->__layoutDirty;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(835)
		if ((tmp)){
			HX_STACK_LINE(837)
			::openfl::_internal::text::TextEngine tmp1 = this->__textEngine;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(837)
			tmp1->update();
			HX_STACK_LINE(839)
			::openfl::_internal::text::TextEngine tmp2 = this->__textEngine;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(839)
			Dynamic tmp3 = tmp2->autoSize;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(839)
			bool tmp4 = (tmp3 != ((Dynamic)((int)2)));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(839)
			if ((tmp4)){
				HX_STACK_LINE(841)
				::openfl::_internal::text::TextEngine tmp5 = this->__textEngine;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(841)
				Float cacheWidth = tmp5->width;		HX_STACK_VAR(cacheWidth,"cacheWidth");
				HX_STACK_LINE(842)
				::openfl::_internal::text::TextEngine tmp6 = this->__textEngine;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(842)
				Float cacheHeight = tmp6->height;		HX_STACK_VAR(cacheHeight,"cacheHeight");
				HX_STACK_LINE(844)
				{
					HX_STACK_LINE(844)
					::openfl::_internal::text::TextEngine tmp7 = this->__textEngine;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(844)
					Dynamic _g = tmp7->autoSize;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(844)
					Dynamic tmp8 = _g;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(844)
					switch( (int)(tmp8)){
						case (int)1: case (int)3: case (int)0: {
							HX_STACK_LINE(848)
							::openfl::_internal::text::TextEngine tmp9 = this->__textEngine;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(848)
							bool tmp10 = tmp9->wordWrap;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(848)
							bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(848)
							if ((tmp11)){
								HX_STACK_LINE(850)
								::openfl::_internal::text::TextEngine tmp12 = this->__textEngine;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(850)
								Float tmp13 = tmp12->textWidth;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(850)
								Float tmp14 = (tmp13 + (int)4);		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(850)
								::openfl::_internal::text::TextEngine tmp15 = this->__textEngine;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(850)
								tmp15->width = tmp14;
							}
							HX_STACK_LINE(854)
							::openfl::_internal::text::TextEngine tmp12 = this->__textEngine;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(854)
							Float tmp13 = tmp12->textHeight;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(854)
							Float tmp14 = (tmp13 + (int)4);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(854)
							::openfl::_internal::text::TextEngine tmp15 = this->__textEngine;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(854)
							tmp15->height = tmp14;
						}
						;break;
						default: {
						}
					}
				}
				HX_STACK_LINE(861)
				::openfl::_internal::text::TextEngine tmp7 = this->__textEngine;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(861)
				Float tmp8 = tmp7->width;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(861)
				Float tmp9 = cacheWidth;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(861)
				bool tmp10 = (tmp8 != tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(861)
				if ((tmp10)){
					HX_STACK_LINE(863)
					::openfl::_internal::text::TextEngine tmp11 = this->__textEngine;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(863)
					Dynamic _g = tmp11->autoSize;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(863)
					Dynamic tmp12 = _g;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(863)
					switch( (int)(tmp12)){
						case (int)3: {
							HX_STACK_LINE(867)
							::openfl::text::TextField _g1 = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(867)
							Float tmp13 = _g1->get_x();		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(867)
							Float tmp14 = cacheWidth;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(867)
							::openfl::_internal::text::TextEngine tmp15 = this->__textEngine;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(867)
							Float tmp16 = tmp15->width;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(867)
							Float tmp17 = (tmp14 - tmp16);		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(867)
							Float tmp18 = (tmp13 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(867)
							_g1->set_x(tmp18);
						}
						;break;
						case (int)0: {
							HX_STACK_LINE(871)
							::openfl::text::TextField _g1 = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(871)
							Float tmp13 = _g1->get_x();		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(871)
							Float tmp14 = cacheWidth;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(871)
							::openfl::_internal::text::TextEngine tmp15 = this->__textEngine;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(871)
							Float tmp16 = tmp15->width;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(871)
							Float tmp17 = (tmp14 - tmp16);		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(871)
							Float tmp18 = (Float(tmp17) / Float((int)2));		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(871)
							Float tmp19 = (tmp13 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(871)
							_g1->set_x(tmp19);
						}
						;break;
						default: {
						}
					}
				}
				HX_STACK_LINE(881)
				::openfl::_internal::text::TextEngine tmp11 = this->__textEngine;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(881)
				tmp11->getBounds();
			}
			HX_STACK_LINE(885)
			this->__layoutDirty = false;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,__updateLayout,(void))

Dynamic TextField_obj::get_antiAliasType( ){
	HX_STACK_FRAME("openfl.text.TextField","get_antiAliasType",0x57115f1b,"openfl.text.TextField.get_antiAliasType","openfl/text/TextField.hx",899,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_LINE(901)
	::openfl::_internal::text::TextEngine tmp = this->__textEngine;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(901)
	Dynamic tmp1 = tmp->antiAliasType;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(901)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_antiAliasType,return )

Dynamic TextField_obj::set_antiAliasType( Dynamic value){
	HX_STACK_FRAME("openfl.text.TextField","set_antiAliasType",0x7a7f3727,"openfl.text.TextField.set_antiAliasType","openfl/text/TextField.hx",906,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(908)
	Dynamic tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(908)
	::openfl::_internal::text::TextEngine tmp1 = this->__textEngine;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(908)
	Dynamic tmp2 = tmp1->antiAliasType;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(908)
	bool tmp3 = (tmp != tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(908)
	if ((tmp3)){
	}
	HX_STACK_LINE(914)
	::openfl::_internal::text::TextEngine tmp4 = this->__textEngine;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(914)
	Dynamic tmp5 = tmp4->antiAliasType = value;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(914)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,set_antiAliasType,return )

Dynamic TextField_obj::get_autoSize( ){
	HX_STACK_FRAME("openfl.text.TextField","get_autoSize",0xd7aef1fd,"openfl.text.TextField.get_autoSize","openfl/text/TextField.hx",919,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_LINE(921)
	::openfl::_internal::text::TextEngine tmp = this->__textEngine;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(921)
	Dynamic tmp1 = tmp->autoSize;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(921)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_autoSize,return )

Dynamic TextField_obj::set_autoSize( Dynamic value){
	HX_STACK_FRAME("openfl.text.TextField","set_autoSize",0xeca81571,"openfl.text.TextField.set_autoSize","openfl/text/TextField.hx",926,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(928)
	Dynamic tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(928)
	::openfl::_internal::text::TextEngine tmp1 = this->__textEngine;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(928)
	Dynamic tmp2 = tmp1->autoSize;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(928)
	bool tmp3 = (tmp != tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(928)
	if ((tmp3)){
		HX_STACK_LINE(930)
		this->__dirty = true;
		HX_STACK_LINE(931)
		this->__layoutDirty = true;
	}
	HX_STACK_LINE(935)
	::openfl::_internal::text::TextEngine tmp4 = this->__textEngine;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(935)
	Dynamic tmp5 = tmp4->autoSize = value;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(935)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,set_autoSize,return )

bool TextField_obj::get_background( ){
	HX_STACK_FRAME("openfl.text.TextField","get_background",0x50119b5b,"openfl.text.TextField.get_background","openfl/text/TextField.hx",940,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_LINE(942)
	::openfl::_internal::text::TextEngine tmp = this->__textEngine;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(942)
	bool tmp1 = tmp->background;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(942)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_background,return )

bool TextField_obj::set_background( bool value){
	HX_STACK_FRAME("openfl.text.TextField","set_background",0x703183cf,"openfl.text.TextField.set_background","openfl/text/TextField.hx",947,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(949)
	bool tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(949)
	::openfl::_internal::text::TextEngine tmp1 = this->__textEngine;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(949)
	bool tmp2 = tmp1->background;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(949)
	bool tmp3 = (tmp != tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(949)
	if ((tmp3)){
		HX_STACK_LINE(951)
		this->__dirty = true;
	}
	HX_STACK_LINE(955)
	::openfl::_internal::text::TextEngine tmp4 = this->__textEngine;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(955)
	bool tmp5 = tmp4->background = value;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(955)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,set_background,return )

int TextField_obj::get_backgroundColor( ){
	HX_STACK_FRAME("openfl.text.TextField","get_backgroundColor",0x63403c08,"openfl.text.TextField.get_backgroundColor","openfl/text/TextField.hx",960,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_LINE(962)
	::openfl::_internal::text::TextEngine tmp = this->__textEngine;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(962)
	int tmp1 = tmp->backgroundColor;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(962)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_backgroundColor,return )

int TextField_obj::set_backgroundColor( int value){
	HX_STACK_FRAME("openfl.text.TextField","set_backgroundColor",0x9fdd2f14,"openfl.text.TextField.set_backgroundColor","openfl/text/TextField.hx",967,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(969)
	int tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(969)
	::openfl::_internal::text::TextEngine tmp1 = this->__textEngine;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(969)
	int tmp2 = tmp1->backgroundColor;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(969)
	bool tmp3 = (tmp != tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(969)
	if ((tmp3)){
		HX_STACK_LINE(971)
		this->__dirty = true;
	}
	HX_STACK_LINE(975)
	::openfl::_internal::text::TextEngine tmp4 = this->__textEngine;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(975)
	int tmp5 = tmp4->backgroundColor = value;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(975)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,set_backgroundColor,return )

bool TextField_obj::get_border( ){
	HX_STACK_FRAME("openfl.text.TextField","get_border",0xa3e0d9d9,"openfl.text.TextField.get_border","openfl/text/TextField.hx",980,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_LINE(982)
	::openfl::_internal::text::TextEngine tmp = this->__textEngine;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(982)
	bool tmp1 = tmp->border;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(982)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_border,return )

bool TextField_obj::set_border( bool value){
	HX_STACK_FRAME("openfl.text.TextField","set_border",0xa75e784d,"openfl.text.TextField.set_border","openfl/text/TextField.hx",987,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(989)
	bool tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(989)
	::openfl::_internal::text::TextEngine tmp1 = this->__textEngine;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(989)
	bool tmp2 = tmp1->border;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(989)
	bool tmp3 = (tmp != tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(989)
	if ((tmp3)){
		HX_STACK_LINE(991)
		this->__dirty = true;
	}
	HX_STACK_LINE(995)
	::openfl::_internal::text::TextEngine tmp4 = this->__textEngine;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(995)
	bool tmp5 = tmp4->border = value;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(995)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,set_border,return )

int TextField_obj::get_borderColor( ){
	HX_STACK_FRAME("openfl.text.TextField","get_borderColor",0x6267b4ca,"openfl.text.TextField.get_borderColor","openfl/text/TextField.hx",1000,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1002)
	::openfl::_internal::text::TextEngine tmp = this->__textEngine;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1002)
	int tmp1 = tmp->borderColor;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1002)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_borderColor,return )

int TextField_obj::set_borderColor( int value){
	HX_STACK_FRAME("openfl.text.TextField","set_borderColor",0x5e3331d6,"openfl.text.TextField.set_borderColor","openfl/text/TextField.hx",1007,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1009)
	int tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1009)
	::openfl::_internal::text::TextEngine tmp1 = this->__textEngine;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1009)
	int tmp2 = tmp1->borderColor;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1009)
	bool tmp3 = (tmp != tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1009)
	if ((tmp3)){
		HX_STACK_LINE(1011)
		this->__dirty = true;
	}
	HX_STACK_LINE(1015)
	::openfl::_internal::text::TextEngine tmp4 = this->__textEngine;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1015)
	int tmp5 = tmp4->borderColor = value;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1015)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,set_borderColor,return )

int TextField_obj::get_bottomScrollV( ){
	HX_STACK_FRAME("openfl.text.TextField","get_bottomScrollV",0xfa9e92b1,"openfl.text.TextField.get_bottomScrollV","openfl/text/TextField.hx",1020,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1022)
	this->__updateLayout();
	HX_STACK_LINE(1024)
	::openfl::_internal::text::TextEngine tmp = this->__textEngine;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1024)
	int tmp1 = tmp->bottomScrollV;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1024)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_bottomScrollV,return )

int TextField_obj::get_caretIndex( ){
	HX_STACK_FRAME("openfl.text.TextField","get_caretIndex",0x074fbdfc,"openfl.text.TextField.get_caretIndex","openfl/text/TextField.hx",1029,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1031)
	int tmp = this->__caretIndex;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1031)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_caretIndex,return )

::openfl::text::TextFormat TextField_obj::get_defaultTextFormat( ){
	HX_STACK_FRAME("openfl.text.TextField","get_defaultTextFormat",0x83063818,"openfl.text.TextField.get_defaultTextFormat","openfl/text/TextField.hx",1036,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1038)
	::openfl::text::TextFormat tmp = this->__textFormat;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1038)
	::openfl::text::TextFormat tmp1 = tmp->clone();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1038)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_defaultTextFormat,return )

::openfl::text::TextFormat TextField_obj::set_defaultTextFormat( ::openfl::text::TextFormat value){
	HX_STACK_FRAME("openfl.text.TextField","set_defaultTextFormat",0xd70f0624,"openfl.text.TextField.set_defaultTextFormat","openfl/text/TextField.hx",1043,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1045)
	::openfl::text::TextFormat tmp = this->__textFormat;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1045)
	::openfl::text::TextFormat tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1045)
	tmp->__merge(tmp1);
	HX_STACK_LINE(1047)
	this->__layoutDirty = true;
	HX_STACK_LINE(1048)
	this->__dirty = true;
	HX_STACK_LINE(1050)
	::openfl::text::TextFormat tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1050)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,set_defaultTextFormat,return )

bool TextField_obj::get_displayAsPassword( ){
	HX_STACK_FRAME("openfl.text.TextField","get_displayAsPassword",0x62bc3b42,"openfl.text.TextField.get_displayAsPassword","openfl/text/TextField.hx",1055,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1057)
	::openfl::_internal::text::TextEngine tmp = this->__textEngine;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1057)
	bool tmp1 = tmp->displayAsPassword;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1057)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_displayAsPassword,return )

bool TextField_obj::set_displayAsPassword( bool value){
	HX_STACK_FRAME("openfl.text.TextField","set_displayAsPassword",0xb6c5094e,"openfl.text.TextField.set_displayAsPassword","openfl/text/TextField.hx",1062,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1064)
	bool tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1064)
	::openfl::_internal::text::TextEngine tmp1 = this->__textEngine;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1064)
	bool tmp2 = tmp1->displayAsPassword;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1064)
	bool tmp3 = (tmp != tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1064)
	if ((tmp3)){
		HX_STACK_LINE(1066)
		this->__dirty = true;
		HX_STACK_LINE(1067)
		this->__layoutDirty = true;
	}
	HX_STACK_LINE(1071)
	::openfl::_internal::text::TextEngine tmp4 = this->__textEngine;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1071)
	bool tmp5 = tmp4->displayAsPassword = value;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1071)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,set_displayAsPassword,return )

bool TextField_obj::get_embedFonts( ){
	HX_STACK_FRAME("openfl.text.TextField","get_embedFonts",0xb8d5ce98,"openfl.text.TextField.get_embedFonts","openfl/text/TextField.hx",1076,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1078)
	::openfl::_internal::text::TextEngine tmp = this->__textEngine;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1078)
	bool tmp1 = tmp->embedFonts;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1078)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_embedFonts,return )

bool TextField_obj::set_embedFonts( bool value){
	HX_STACK_FRAME("openfl.text.TextField","set_embedFonts",0xd8f5b70c,"openfl.text.TextField.set_embedFonts","openfl/text/TextField.hx",1083,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1092)
	::openfl::_internal::text::TextEngine tmp = this->__textEngine;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1092)
	bool tmp1 = tmp->embedFonts = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1092)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,set_embedFonts,return )

Dynamic TextField_obj::get_gridFitType( ){
	HX_STACK_FRAME("openfl.text.TextField","get_gridFitType",0x3fa66af8,"openfl.text.TextField.get_gridFitType","openfl/text/TextField.hx",1097,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1099)
	::openfl::_internal::text::TextEngine tmp = this->__textEngine;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1099)
	Dynamic tmp1 = tmp->gridFitType;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1099)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_gridFitType,return )

Dynamic TextField_obj::set_gridFitType( Dynamic value){
	HX_STACK_FRAME("openfl.text.TextField","set_gridFitType",0x3b71e804,"openfl.text.TextField.set_gridFitType","openfl/text/TextField.hx",1104,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1113)
	::openfl::_internal::text::TextEngine tmp = this->__textEngine;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1113)
	Dynamic tmp1 = tmp->gridFitType = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1113)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,set_gridFitType,return )

Float TextField_obj::get_height( ){
	HX_STACK_FRAME("openfl.text.TextField","get_height",0x421294d4,"openfl.text.TextField.get_height","openfl/text/TextField.hx",1118,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1120)
	this->__updateLayout();
	HX_STACK_LINE(1121)
	::openfl::_internal::text::TextEngine tmp = this->__textEngine;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1121)
	Float tmp1 = tmp->height;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1121)
	return tmp1;
}


Float TextField_obj::set_height( Float value){
	HX_STACK_FRAME("openfl.text.TextField","set_height",0x45903348,"openfl.text.TextField.set_height","openfl/text/TextField.hx",1126,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1128)
	Float tmp = this->get_scaleY();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1128)
	bool tmp1 = (tmp != (int)1);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1128)
	bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1128)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1128)
	if ((tmp2)){
		HX_STACK_LINE(1128)
		Float tmp4 = value;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1128)
		::openfl::_internal::text::TextEngine tmp5 = this->__textEngine;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1128)
		::openfl::_internal::text::TextEngine tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1128)
		Float tmp7 = tmp6->height;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1128)
		tmp3 = (tmp4 != tmp7);
	}
	else{
		HX_STACK_LINE(1128)
		tmp3 = true;
	}
	HX_STACK_LINE(1128)
	if ((tmp3)){
		HX_STACK_LINE(1130)
		{
			HX_STACK_LINE(1130)
			bool tmp4 = this->__transformDirty;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1130)
			bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1130)
			if ((tmp5)){
				HX_STACK_LINE(1130)
				this->__transformDirty = true;
				HX_STACK_LINE(1130)
				(::openfl::display::DisplayObject_obj::__worldTransformDirty)++;
			}
		}
		HX_STACK_LINE(1131)
		this->__dirty = true;
		HX_STACK_LINE(1132)
		this->__layoutDirty = true;
	}
	HX_STACK_LINE(1136)
	this->set_scaleY((int)1);
	HX_STACK_LINE(1137)
	::openfl::_internal::text::TextEngine tmp4 = this->__textEngine;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1137)
	Float tmp5 = tmp4->height = value;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1137)
	return tmp5;
}


::String TextField_obj::get_htmlText( ){
	HX_STACK_FRAME("openfl.text.TextField","get_htmlText",0xb86d81e5,"openfl.text.TextField.get_htmlText","openfl/text/TextField.hx",1142,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1144)
	::openfl::_internal::text::TextEngine tmp = this->__textEngine;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1144)
	::String tmp1 = tmp->text;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1144)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_htmlText,return )

::String TextField_obj::set_htmlText( ::String value){
	HX_STACK_FRAME("openfl.text.TextField","set_htmlText",0xcd66a559,"openfl.text.TextField.set_htmlText","openfl/text/TextField.hx",1149,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1151)
	bool tmp = this->__isHTML;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1151)
	bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1151)
	bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1151)
	bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1151)
	bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1151)
	if ((tmp3)){
		HX_STACK_LINE(1151)
		::openfl::_internal::text::TextEngine tmp5 = this->__textEngine;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1151)
		::openfl::_internal::text::TextEngine tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1151)
		::String tmp7 = tmp6->text;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1151)
		::String tmp8 = value;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1151)
		tmp4 = (tmp7 != tmp8);
	}
	else{
		HX_STACK_LINE(1151)
		tmp4 = true;
	}
	HX_STACK_LINE(1151)
	if ((tmp4)){
		HX_STACK_LINE(1153)
		this->__dirty = true;
		HX_STACK_LINE(1154)
		this->__layoutDirty = true;
	}
	HX_STACK_LINE(1158)
	this->__isHTML = true;
	HX_STACK_LINE(1160)
	{
		HX_STACK_LINE(1182)
		::EReg tmp5 = ::EReg_obj::__new(HX_HCSTRING("<br>","\xb2","\x8d","\xf3","\x27"),HX_HCSTRING("g","\x67","\x00","\x00","\x00"));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1182)
		::String tmp6 = value;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1182)
		::String tmp7 = tmp5->replace(tmp6,HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1182)
		value = tmp7;
		HX_STACK_LINE(1183)
		::EReg tmp8 = ::EReg_obj::__new(HX_HCSTRING("<br/>","\x3b","\x61","\x28","\xcd"),HX_HCSTRING("g","\x67","\x00","\x00","\x00"));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1183)
		::String tmp9 = value;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1183)
		::String tmp10 = tmp8->replace(tmp9,HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1183)
		value = tmp10;
		HX_STACK_LINE(1184)
		::String tmp11;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(1184)
		{
			HX_STACK_LINE(1184)
			::String text = value;		HX_STACK_VAR(text,"text");
			HX_STACK_LINE(1184)
			Array< ::Dynamic > entities = Array_obj< ::Dynamic >::__new().Add(Array_obj< ::String >::__new().Add(HX_HCSTRING("quot","\x09","\x45","\x0a","\x4b")).Add(HX_HCSTRING("\"","\x22","\x00","\x00","\x00"))).Add(Array_obj< ::String >::__new().Add(HX_HCSTRING("apos","\xd3","\x0f","\x73","\x40")).Add(HX_HCSTRING("'","\x27","\x00","\x00","\x00"))).Add(Array_obj< ::String >::__new().Add(HX_HCSTRING("amp","\x04","\xfa","\x49","\x00")).Add(HX_HCSTRING("&","\x26","\x00","\x00","\x00"))).Add(Array_obj< ::String >::__new().Add(HX_HCSTRING("lt","\x88","\x5e","\x00","\x00")).Add(HX_HCSTRING("<","\x3c","\x00","\x00","\x00"))).Add(Array_obj< ::String >::__new().Add(HX_HCSTRING("gt","\x2d","\x5a","\x00","\x00")).Add(HX_HCSTRING(">","\x3e","\x00","\x00","\x00")));		HX_STACK_VAR(entities,"entities");
			HX_STACK_LINE(1184)
			{
				HX_STACK_LINE(1184)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(1184)
				int _g = entities->length;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(1184)
				while((true)){
					HX_STACK_LINE(1184)
					bool tmp12 = (_g1 < _g);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(1184)
					bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(1184)
					if ((tmp13)){
						HX_STACK_LINE(1184)
						break;
					}
					HX_STACK_LINE(1184)
					int tmp14 = (_g1)++;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(1184)
					int i = tmp14;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(1184)
					::String tmp15 = entities->__get(i).StaticCast< Array< ::String > >()->__get((int)0);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(1184)
					::String tmp16 = (HX_HCSTRING("&","\x26","\x00","\x00","\x00") + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(1184)
					::String tmp17 = (tmp16 + HX_HCSTRING(";","\x3b","\x00","\x00","\x00"));		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(1184)
					::EReg tmp18 = ::EReg_obj::__new(tmp17,HX_HCSTRING("g","\x67","\x00","\x00","\x00"));		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(1184)
					::String tmp19 = text;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(1184)
					::String tmp20 = entities->__get(i).StaticCast< Array< ::String > >()->__get((int)1);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(1184)
					::String tmp21 = tmp18->replace(tmp19,tmp20);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(1184)
					text = tmp21;
				}
			}
			HX_STACK_LINE(1184)
			tmp11 = text;
		}
		HX_STACK_LINE(1184)
		value = tmp11;
		HX_STACK_LINE(1188)
		Array< ::String > segments = value.split(HX_HCSTRING("<","\x3c","\x00","\x00","\x00"));		HX_STACK_VAR(segments,"segments");
		HX_STACK_LINE(1190)
		bool tmp12 = (segments->length == (int)1);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(1190)
		if ((tmp12)){
			HX_STACK_LINE(1192)
			::EReg tmp13 = ::EReg_obj::__new(HX_HCSTRING("<.*?>","\x97","\xb4","\x92","\xaa"),HX_HCSTRING("g","\x67","\x00","\x00","\x00"));		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(1192)
			::String tmp14 = value;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(1192)
			::String tmp15 = tmp13->replace(tmp14,HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(1192)
			value = tmp15;
			HX_STACK_LINE(1194)
			::openfl::_internal::text::TextEngine tmp16 = this->__textEngine;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(1194)
			int tmp17 = tmp16->textFormatRanges->length;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(1194)
			bool tmp18 = (tmp17 > (int)1);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(1194)
			if ((tmp18)){
				HX_STACK_LINE(1196)
				::openfl::_internal::text::TextEngine tmp19 = this->__textEngine;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(1196)
				::openfl::_internal::text::TextEngine tmp20 = this->__textEngine;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(1196)
				int tmp21 = tmp20->textFormatRanges->length;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(1196)
				int tmp22 = (tmp21 - (int)1);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(1196)
				tmp19->textFormatRanges->splice((int)1,tmp22);
			}
			HX_STACK_LINE(1200)
			::openfl::_internal::text::TextEngine tmp19 = this->__textEngine;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(1200)
			::openfl::_internal::text::TextFormatRange tmp20 = tmp19->textFormatRanges->__get((int)0).StaticCast< ::openfl::_internal::text::TextFormatRange >();		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(1200)
			::openfl::_internal::text::TextFormatRange range = tmp20;		HX_STACK_VAR(range,"range");
			HX_STACK_LINE(1201)
			::openfl::text::TextFormat tmp21 = this->__textFormat;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(1201)
			range->format = tmp21;
			HX_STACK_LINE(1202)
			range->start = (int)0;
			HX_STACK_LINE(1203)
			range->end = value.length;
			HX_STACK_LINE(1205)
			::openfl::_internal::text::TextEngine tmp22 = this->__textEngine;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(1205)
			::String tmp23 = tmp22->text = value;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(1205)
			return tmp23;
		}
		else{
			HX_STACK_LINE(1209)
			::openfl::_internal::text::TextEngine tmp13 = this->__textEngine;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(1209)
			::openfl::_internal::text::TextEngine tmp14 = this->__textEngine;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(1209)
			int tmp15 = tmp14->textFormatRanges->length;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(1209)
			tmp13->textFormatRanges->splice((int)0,tmp15);
			HX_STACK_LINE(1211)
			value = HX_HCSTRING("","\x00","\x00","\x00","\x00");
			HX_STACK_LINE(1213)
			::openfl::text::TextFormat tmp16 = this->__textFormat;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(1213)
			::openfl::text::TextFormat tmp17 = tmp16->clone();		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(1213)
			Array< ::Dynamic > formatStack = Array_obj< ::Dynamic >::__new().Add(tmp17);		HX_STACK_VAR(formatStack,"formatStack");
			HX_STACK_LINE(1214)
			::String sub;		HX_STACK_VAR(sub,"sub");
			HX_STACK_LINE(1215)
			bool noLineBreak = false;		HX_STACK_VAR(noLineBreak,"noLineBreak");
			HX_STACK_LINE(1217)
			{
				HX_STACK_LINE(1217)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(1217)
				while((true)){
					HX_STACK_LINE(1217)
					bool tmp18 = (_g < segments->length);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(1217)
					bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(1217)
					if ((tmp19)){
						HX_STACK_LINE(1217)
						break;
					}
					HX_STACK_LINE(1217)
					::String tmp20 = segments->__get(_g);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(1217)
					::String segment = tmp20;		HX_STACK_VAR(segment,"segment");
					HX_STACK_LINE(1217)
					++(_g);
					HX_STACK_LINE(1219)
					bool tmp21 = (segment == HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(1219)
					if ((tmp21)){
						HX_STACK_LINE(1219)
						continue;
					}
					HX_STACK_LINE(1221)
					::String tmp22 = segment.substr((int)0,(int)1);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(1221)
					bool tmp23 = (tmp22 == HX_HCSTRING("/","\x2f","\x00","\x00","\x00"));		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(1221)
					bool isClosingTag = tmp23;		HX_STACK_VAR(isClosingTag,"isClosingTag");
					HX_STACK_LINE(1222)
					int tmp24 = segment.indexOf(HX_HCSTRING(">","\x3e","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(1222)
					int tagEndIndex = tmp24;		HX_STACK_VAR(tagEndIndex,"tagEndIndex");
					HX_STACK_LINE(1223)
					int tmp25 = (tagEndIndex + (int)1);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(1223)
					int start = tmp25;		HX_STACK_VAR(start,"start");
					HX_STACK_LINE(1224)
					int tmp26 = segment.indexOf(HX_HCSTRING(" ","\x20","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(1224)
					int spaceIndex = tmp26;		HX_STACK_VAR(spaceIndex,"spaceIndex");
					HX_STACK_LINE(1225)
					bool tmp27 = isClosingTag;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(1225)
					int tmp28;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(1225)
					if ((tmp27)){
						HX_STACK_LINE(1225)
						tmp28 = (int)1;
					}
					else{
						HX_STACK_LINE(1225)
						tmp28 = (int)0;
					}
					HX_STACK_LINE(1225)
					int tmp29 = spaceIndex;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(1225)
					int tmp30 = (int)-1;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(1225)
					bool tmp31 = (tmp29 > tmp30);		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(1225)
					bool tmp32;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(1225)
					if ((tmp31)){
						HX_STACK_LINE(1225)
						tmp32 = (spaceIndex < tagEndIndex);
					}
					else{
						HX_STACK_LINE(1225)
						tmp32 = false;
					}
					HX_STACK_LINE(1225)
					Dynamic tmp33;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(1225)
					if ((tmp32)){
						HX_STACK_LINE(1225)
						tmp33 = spaceIndex;
					}
					else{
						HX_STACK_LINE(1225)
						tmp33 = tagEndIndex;
					}
					HX_STACK_LINE(1225)
					::String tmp34 = segment.substring(tmp28,tmp33);		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(1225)
					::String tagName = tmp34;		HX_STACK_VAR(tagName,"tagName");
					HX_STACK_LINE(1226)
					::openfl::text::TextFormat format;		HX_STACK_VAR(format,"format");
					HX_STACK_LINE(1228)
					bool tmp35 = isClosingTag;		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(1228)
					if ((tmp35)){
						HX_STACK_LINE(1230)
						formatStack->pop().StaticCast< ::openfl::text::TextFormat >();
						HX_STACK_LINE(1231)
						int tmp36 = (formatStack->length - (int)1);		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(1231)
						::openfl::text::TextFormat tmp37 = formatStack->__get(tmp36).StaticCast< ::openfl::text::TextFormat >();		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(1231)
						::openfl::text::TextFormat tmp38 = tmp37->clone();		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(1231)
						format = tmp38;
						HX_STACK_LINE(1233)
						::String tmp39 = tagName.toLowerCase();		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(1233)
						bool tmp40 = (tmp39 == HX_HCSTRING("p","\x70","\x00","\x00","\x00"));		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(1233)
						bool tmp41;		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(1233)
						if ((tmp40)){
							HX_STACK_LINE(1233)
							::openfl::_internal::text::TextEngine tmp42 = this->__textEngine;		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(1233)
							::openfl::_internal::text::TextEngine tmp43 = tmp42;		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(1233)
							int tmp44 = tmp43->textFormatRanges->length;		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(1233)
							int tmp45 = tmp44;		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(1233)
							tmp41 = (tmp45 > (int)0);
						}
						else{
							HX_STACK_LINE(1233)
							tmp41 = false;
						}
						HX_STACK_LINE(1233)
						if ((tmp41)){
							HX_STACK_LINE(1235)
							hx::AddEq(value,HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));
							HX_STACK_LINE(1236)
							noLineBreak = true;
						}
						HX_STACK_LINE(1240)
						bool tmp42 = (start < segment.length);		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(1240)
						if ((tmp42)){
							HX_STACK_LINE(1242)
							int tmp43 = start;		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(1242)
							::String tmp44 = segment.substr(tmp43,null());		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(1242)
							sub = tmp44;
							HX_STACK_LINE(1243)
							::openfl::_internal::text::TextEngine tmp45 = this->__textEngine;		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(1243)
							::openfl::text::TextFormat tmp46 = format;		HX_STACK_VAR(tmp46,"tmp46");
							HX_STACK_LINE(1243)
							int tmp47 = value.length;		HX_STACK_VAR(tmp47,"tmp47");
							HX_STACK_LINE(1243)
							int tmp48 = (value.length + sub.length);		HX_STACK_VAR(tmp48,"tmp48");
							HX_STACK_LINE(1243)
							::openfl::_internal::text::TextFormatRange tmp49 = ::openfl::_internal::text::TextFormatRange_obj::__new(tmp46,tmp47,tmp48);		HX_STACK_VAR(tmp49,"tmp49");
							HX_STACK_LINE(1243)
							tmp45->textFormatRanges->push(tmp49);
							HX_STACK_LINE(1244)
							hx::AddEq(value,sub);
							HX_STACK_LINE(1245)
							noLineBreak = false;
						}
					}
					else{
						HX_STACK_LINE(1251)
						int tmp36 = (formatStack->length - (int)1);		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(1251)
						::openfl::text::TextFormat tmp37 = formatStack->__get(tmp36).StaticCast< ::openfl::text::TextFormat >();		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(1251)
						::openfl::text::TextFormat tmp38 = tmp37->clone();		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(1251)
						format = tmp38;
						HX_STACK_LINE(1253)
						bool tmp39 = (tagEndIndex > (int)-1);		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(1253)
						if ((tmp39)){
							HX_STACK_LINE(1255)
							{
								HX_STACK_LINE(1255)
								::String tmp40 = tagName.toLowerCase();		HX_STACK_VAR(tmp40,"tmp40");
								HX_STACK_LINE(1255)
								::String _g1 = tmp40;		HX_STACK_VAR(_g1,"_g1");
								HX_STACK_LINE(1255)
								::String tmp41 = _g1;		HX_STACK_VAR(tmp41,"tmp41");
								HX_STACK_LINE(1255)
								::String _switch_1 = (tmp41);
								if (  ( _switch_1==HX_HCSTRING("p","\x70","\x00","\x00","\x00"))){
									HX_STACK_LINE(1259)
									::openfl::_internal::text::TextEngine tmp42 = this->__textEngine;		HX_STACK_VAR(tmp42,"tmp42");
									HX_STACK_LINE(1259)
									int tmp43 = tmp42->textFormatRanges->length;		HX_STACK_VAR(tmp43,"tmp43");
									HX_STACK_LINE(1259)
									bool tmp44 = (tmp43 > (int)0);		HX_STACK_VAR(tmp44,"tmp44");
									HX_STACK_LINE(1259)
									bool tmp45;		HX_STACK_VAR(tmp45,"tmp45");
									HX_STACK_LINE(1259)
									if ((tmp44)){
										HX_STACK_LINE(1259)
										bool tmp46 = noLineBreak;		HX_STACK_VAR(tmp46,"tmp46");
										HX_STACK_LINE(1259)
										bool tmp47 = tmp46;		HX_STACK_VAR(tmp47,"tmp47");
										HX_STACK_LINE(1259)
										tmp45 = !(tmp47);
									}
									else{
										HX_STACK_LINE(1259)
										tmp45 = false;
									}
									HX_STACK_LINE(1259)
									if ((tmp45)){
										HX_STACK_LINE(1261)
										hx::AddEq(value,HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));
									}
									HX_STACK_LINE(1265)
									::EReg tmp46 = ::EReg_obj::__new(HX_HCSTRING("align=\"([^\"]+)","\x9a","\x39","\x5a","\x96"),HX_HCSTRING("i","\x69","\x00","\x00","\x00"));		HX_STACK_VAR(tmp46,"tmp46");
									HX_STACK_LINE(1265)
									::EReg alignEreg = tmp46;		HX_STACK_VAR(alignEreg,"alignEreg");
									HX_STACK_LINE(1267)
									::String tmp47 = segment;		HX_STACK_VAR(tmp47,"tmp47");
									HX_STACK_LINE(1267)
									bool tmp48 = alignEreg->match(tmp47);		HX_STACK_VAR(tmp48,"tmp48");
									HX_STACK_LINE(1267)
									if ((tmp48)){
										HX_STACK_LINE(1269)
										::String tmp49 = alignEreg->matched((int)1);		HX_STACK_VAR(tmp49,"tmp49");
										HX_STACK_LINE(1269)
										::String tmp50 = tmp49.toLowerCase();		HX_STACK_VAR(tmp50,"tmp50");
										HX_STACK_LINE(1269)
										Dynamic tmp51 = ::openfl::text::_TextFormatAlign::TextFormatAlign_Impl__obj::fromString(tmp50);		HX_STACK_VAR(tmp51,"tmp51");
										HX_STACK_LINE(1269)
										format->align = tmp51;
									}
								}
								else if (  ( _switch_1==HX_HCSTRING("font","\xcf","\x5d","\xc0","\x43"))){
									HX_STACK_LINE(1275)
									::EReg tmp42 = ::EReg_obj::__new(HX_HCSTRING("face=\"([^\"]+)","\xc2","\x60","\x17","\x5c"),HX_HCSTRING("i","\x69","\x00","\x00","\x00"));		HX_STACK_VAR(tmp42,"tmp42");
									HX_STACK_LINE(1275)
									::EReg faceEreg = tmp42;		HX_STACK_VAR(faceEreg,"faceEreg");
									HX_STACK_LINE(1277)
									::String tmp43 = segment;		HX_STACK_VAR(tmp43,"tmp43");
									HX_STACK_LINE(1277)
									bool tmp44 = faceEreg->match(tmp43);		HX_STACK_VAR(tmp44,"tmp44");
									HX_STACK_LINE(1277)
									if ((tmp44)){
										HX_STACK_LINE(1279)
										::String tmp45 = faceEreg->matched((int)1);		HX_STACK_VAR(tmp45,"tmp45");
										HX_STACK_LINE(1279)
										format->font = tmp45;
									}
									HX_STACK_LINE(1283)
									::EReg tmp45 = ::EReg_obj::__new(HX_HCSTRING("color=\"#([^\"]+)","\x49","\x2b","\xaa","\x18"),HX_HCSTRING("i","\x69","\x00","\x00","\x00"));		HX_STACK_VAR(tmp45,"tmp45");
									HX_STACK_LINE(1283)
									::EReg colorEreg = tmp45;		HX_STACK_VAR(colorEreg,"colorEreg");
									HX_STACK_LINE(1285)
									::String tmp46 = segment;		HX_STACK_VAR(tmp46,"tmp46");
									HX_STACK_LINE(1285)
									bool tmp47 = colorEreg->match(tmp46);		HX_STACK_VAR(tmp47,"tmp47");
									HX_STACK_LINE(1285)
									if ((tmp47)){
										HX_STACK_LINE(1287)
										::String tmp48 = colorEreg->matched((int)1);		HX_STACK_VAR(tmp48,"tmp48");
										HX_STACK_LINE(1287)
										::String tmp49 = (HX_HCSTRING("0x","\x48","\x2a","\x00","\x00") + tmp48);		HX_STACK_VAR(tmp49,"tmp49");
										HX_STACK_LINE(1287)
										Dynamic tmp50 = ::Std_obj::parseInt(tmp49);		HX_STACK_VAR(tmp50,"tmp50");
										HX_STACK_LINE(1287)
										format->color = tmp50;
									}
									HX_STACK_LINE(1291)
									::EReg tmp48 = ::EReg_obj::__new(HX_HCSTRING("size=\"([^\"]+)","\x1e","\xd0","\xd4","\x88"),HX_HCSTRING("i","\x69","\x00","\x00","\x00"));		HX_STACK_VAR(tmp48,"tmp48");
									HX_STACK_LINE(1291)
									::EReg sizeEreg = tmp48;		HX_STACK_VAR(sizeEreg,"sizeEreg");
									HX_STACK_LINE(1293)
									::String tmp49 = segment;		HX_STACK_VAR(tmp49,"tmp49");
									HX_STACK_LINE(1293)
									bool tmp50 = sizeEreg->match(tmp49);		HX_STACK_VAR(tmp50,"tmp50");
									HX_STACK_LINE(1293)
									if ((tmp50)){
										HX_STACK_LINE(1295)
										::String tmp51 = sizeEreg->matched((int)1);		HX_STACK_VAR(tmp51,"tmp51");
										HX_STACK_LINE(1295)
										Dynamic tmp52 = ::Std_obj::parseInt(tmp51);		HX_STACK_VAR(tmp52,"tmp52");
										HX_STACK_LINE(1295)
										format->size = tmp52;
									}
								}
								else if (  ( _switch_1==HX_HCSTRING("b","\x62","\x00","\x00","\x00"))){
									HX_STACK_LINE(1301)
									format->bold = true;
								}
								else if (  ( _switch_1==HX_HCSTRING("u","\x75","\x00","\x00","\x00"))){
									HX_STACK_LINE(1305)
									format->underline = true;
								}
								else if (  ( _switch_1==HX_HCSTRING("i","\x69","\x00","\x00","\x00")) ||  ( _switch_1==HX_HCSTRING("em","\x68","\x58","\x00","\x00"))){
									HX_STACK_LINE(1309)
									format->italic = true;
								}
							}
							HX_STACK_LINE(1313)
							::openfl::text::TextFormat tmp40 = format;		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(1313)
							formatStack->push(tmp40);
							HX_STACK_LINE(1315)
							bool tmp41 = (start < segment.length);		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(1315)
							if ((tmp41)){
								HX_STACK_LINE(1317)
								int tmp42 = start;		HX_STACK_VAR(tmp42,"tmp42");
								HX_STACK_LINE(1317)
								::String tmp43 = segment.substring(tmp42,null());		HX_STACK_VAR(tmp43,"tmp43");
								HX_STACK_LINE(1317)
								sub = tmp43;
								HX_STACK_LINE(1318)
								::openfl::_internal::text::TextEngine tmp44 = this->__textEngine;		HX_STACK_VAR(tmp44,"tmp44");
								HX_STACK_LINE(1318)
								::openfl::text::TextFormat tmp45 = format;		HX_STACK_VAR(tmp45,"tmp45");
								HX_STACK_LINE(1318)
								int tmp46 = value.length;		HX_STACK_VAR(tmp46,"tmp46");
								HX_STACK_LINE(1318)
								int tmp47 = (value.length + sub.length);		HX_STACK_VAR(tmp47,"tmp47");
								HX_STACK_LINE(1318)
								::openfl::_internal::text::TextFormatRange tmp48 = ::openfl::_internal::text::TextFormatRange_obj::__new(tmp45,tmp46,tmp47);		HX_STACK_VAR(tmp48,"tmp48");
								HX_STACK_LINE(1318)
								tmp44->textFormatRanges->push(tmp48);
								HX_STACK_LINE(1319)
								hx::AddEq(value,sub);
								HX_STACK_LINE(1320)
								noLineBreak = false;
							}
						}
						else{
							HX_STACK_LINE(1326)
							::openfl::_internal::text::TextEngine tmp40 = this->__textEngine;		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(1326)
							::openfl::text::TextFormat tmp41 = format;		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(1326)
							int tmp42 = value.length;		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(1326)
							int tmp43 = (value.length + segment.length);		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(1326)
							::openfl::_internal::text::TextFormatRange tmp44 = ::openfl::_internal::text::TextFormatRange_obj::__new(tmp41,tmp42,tmp43);		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(1326)
							tmp40->textFormatRanges->push(tmp44);
							HX_STACK_LINE(1327)
							hx::AddEq(value,segment);
							HX_STACK_LINE(1328)
							noLineBreak = false;
						}
					}
				}
			}
		}
	}
	HX_STACK_LINE(1340)
	::openfl::_internal::text::TextEngine tmp5 = this->__textEngine;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1340)
	::String tmp6 = tmp5->text = value;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(1340)
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,set_htmlText,return )

int TextField_obj::get_length( ){
	HX_STACK_FRAME("openfl.text.TextField","get_length",0xdece21d3,"openfl.text.TextField.get_length","openfl/text/TextField.hx",1345,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1347)
	::openfl::_internal::text::TextEngine tmp = this->__textEngine;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1347)
	::String tmp1 = tmp->text;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1347)
	bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1347)
	if ((tmp2)){
		HX_STACK_LINE(1349)
		::openfl::_internal::text::TextEngine tmp3 = this->__textEngine;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1349)
		int tmp4 = tmp3->text.length;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1349)
		return tmp4;
	}
	HX_STACK_LINE(1353)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_length,return )

int TextField_obj::get_maxChars( ){
	HX_STACK_FRAME("openfl.text.TextField","get_maxChars",0x980651c6,"openfl.text.TextField.get_maxChars","openfl/text/TextField.hx",1358,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1360)
	::openfl::_internal::text::TextEngine tmp = this->__textEngine;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1360)
	int tmp1 = tmp->maxChars;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1360)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_maxChars,return )

int TextField_obj::set_maxChars( int value){
	HX_STACK_FRAME("openfl.text.TextField","set_maxChars",0xacff753a,"openfl.text.TextField.set_maxChars","openfl/text/TextField.hx",1365,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1367)
	int tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1367)
	::openfl::_internal::text::TextEngine tmp1 = this->__textEngine;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1367)
	int tmp2 = tmp1->maxChars;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1367)
	bool tmp3 = (tmp != tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1367)
	if ((tmp3)){
		HX_STACK_LINE(1369)
		this->__dirty = true;
		HX_STACK_LINE(1370)
		this->__layoutDirty = true;
	}
	HX_STACK_LINE(1374)
	::openfl::_internal::text::TextEngine tmp4 = this->__textEngine;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1374)
	int tmp5 = tmp4->maxChars = value;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1374)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,set_maxChars,return )

int TextField_obj::get_maxScrollH( ){
	HX_STACK_FRAME("openfl.text.TextField","get_maxScrollH",0xc4f0b4c4,"openfl.text.TextField.get_maxScrollH","openfl/text/TextField.hx",1379,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1381)
	this->__updateLayout();
	HX_STACK_LINE(1383)
	::openfl::_internal::text::TextEngine tmp = this->__textEngine;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1383)
	int tmp1 = tmp->maxScrollH;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1383)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_maxScrollH,return )

int TextField_obj::get_maxScrollV( ){
	HX_STACK_FRAME("openfl.text.TextField","get_maxScrollV",0xc4f0b4d2,"openfl.text.TextField.get_maxScrollV","openfl/text/TextField.hx",1388,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1390)
	this->__updateLayout();
	HX_STACK_LINE(1392)
	::openfl::_internal::text::TextEngine tmp = this->__textEngine;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1392)
	int tmp1 = tmp->maxScrollV;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1392)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_maxScrollV,return )

bool TextField_obj::get_multiline( ){
	HX_STACK_FRAME("openfl.text.TextField","get_multiline",0x24925820,"openfl.text.TextField.get_multiline","openfl/text/TextField.hx",1397,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1399)
	::openfl::_internal::text::TextEngine tmp = this->__textEngine;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1399)
	bool tmp1 = tmp->multiline;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1399)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_multiline,return )

bool TextField_obj::set_multiline( bool value){
	HX_STACK_FRAME("openfl.text.TextField","set_multiline",0x69983a2c,"openfl.text.TextField.set_multiline","openfl/text/TextField.hx",1404,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1406)
	bool tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1406)
	::openfl::_internal::text::TextEngine tmp1 = this->__textEngine;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1406)
	bool tmp2 = tmp1->multiline;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1406)
	bool tmp3 = (tmp != tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1406)
	if ((tmp3)){
		HX_STACK_LINE(1408)
		this->__dirty = true;
		HX_STACK_LINE(1409)
		this->__layoutDirty = true;
	}
	HX_STACK_LINE(1413)
	::openfl::_internal::text::TextEngine tmp4 = this->__textEngine;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1413)
	bool tmp5 = tmp4->multiline = value;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1413)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,set_multiline,return )

int TextField_obj::get_numLines( ){
	HX_STACK_FRAME("openfl.text.TextField","get_numLines",0xda475406,"openfl.text.TextField.get_numLines","openfl/text/TextField.hx",1418,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1420)
	this->__updateLayout();
	HX_STACK_LINE(1422)
	::openfl::_internal::text::TextEngine tmp = this->__textEngine;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1422)
	int tmp1 = tmp->numLines;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1422)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_numLines,return )

::String TextField_obj::get_restrict( ){
	HX_STACK_FRAME("openfl.text.TextField","get_restrict",0x99d42d69,"openfl.text.TextField.get_restrict","openfl/text/TextField.hx",1427,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1429)
	::openfl::_internal::text::TextEngine tmp = this->__textEngine;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1429)
	::String tmp1 = tmp->restrict;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1429)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_restrict,return )

::String TextField_obj::set_restrict( ::String value){
	HX_STACK_FRAME("openfl.text.TextField","set_restrict",0xaecd50dd,"openfl.text.TextField.set_restrict","openfl/text/TextField.hx",1434,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1436)
	::openfl::_internal::text::TextEngine tmp = this->__textEngine;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1436)
	::String tmp1 = tmp->restrict = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1436)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,set_restrict,return )

int TextField_obj::get_scrollH( ){
	HX_STACK_FRAME("openfl.text.TextField","get_scrollH",0xbeccf60e,"openfl.text.TextField.get_scrollH","openfl/text/TextField.hx",1441,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1443)
	::openfl::_internal::text::TextEngine tmp = this->__textEngine;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1443)
	int tmp1 = tmp->scrollH;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1443)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_scrollH,return )

int TextField_obj::set_scrollH( int value){
	HX_STACK_FRAME("openfl.text.TextField","set_scrollH",0xc939fd1a,"openfl.text.TextField.set_scrollH","openfl/text/TextField.hx",1448,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1450)
	int tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1450)
	::openfl::_internal::text::TextEngine tmp1 = this->__textEngine;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1450)
	int tmp2 = tmp1->maxScrollH;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1450)
	bool tmp3 = (tmp > tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1450)
	if ((tmp3)){
		HX_STACK_LINE(1450)
		::openfl::_internal::text::TextEngine tmp4 = this->__textEngine;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1450)
		value = tmp4->maxScrollH;
	}
	HX_STACK_LINE(1451)
	bool tmp4 = (value < (int)0);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1451)
	if ((tmp4)){
		HX_STACK_LINE(1451)
		value = (int)0;
	}
	HX_STACK_LINE(1453)
	int tmp5 = value;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1453)
	::openfl::_internal::text::TextEngine tmp6 = this->__textEngine;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(1453)
	int tmp7 = tmp6->scrollH;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(1453)
	bool tmp8 = (tmp5 != tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(1453)
	if ((tmp8)){
		HX_STACK_LINE(1455)
		this->__dirty = true;
	}
	HX_STACK_LINE(1459)
	::openfl::_internal::text::TextEngine tmp9 = this->__textEngine;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(1459)
	int tmp10 = tmp9->scrollH = value;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(1459)
	return tmp10;
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,set_scrollH,return )

int TextField_obj::get_scrollV( ){
	HX_STACK_FRAME("openfl.text.TextField","get_scrollV",0xbeccf61c,"openfl.text.TextField.get_scrollV","openfl/text/TextField.hx",1464,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1466)
	::openfl::_internal::text::TextEngine tmp = this->__textEngine;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1466)
	int tmp1 = tmp->scrollV;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1466)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_scrollV,return )

int TextField_obj::set_scrollV( int value){
	HX_STACK_FRAME("openfl.text.TextField","set_scrollV",0xc939fd28,"openfl.text.TextField.set_scrollV","openfl/text/TextField.hx",1471,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1473)
	int tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1473)
	::openfl::_internal::text::TextEngine tmp1 = this->__textEngine;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1473)
	int tmp2 = tmp1->maxScrollV;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1473)
	bool tmp3 = (tmp > tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1473)
	if ((tmp3)){
		HX_STACK_LINE(1473)
		::openfl::_internal::text::TextEngine tmp4 = this->__textEngine;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1473)
		value = tmp4->maxScrollV;
	}
	HX_STACK_LINE(1474)
	bool tmp4 = (value < (int)1);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1474)
	if ((tmp4)){
		HX_STACK_LINE(1474)
		value = (int)1;
	}
	HX_STACK_LINE(1476)
	int tmp5 = value;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1476)
	::openfl::_internal::text::TextEngine tmp6 = this->__textEngine;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(1476)
	int tmp7 = tmp6->scrollV;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(1476)
	bool tmp8 = (tmp5 != tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(1476)
	if ((tmp8)){
		HX_STACK_LINE(1478)
		this->__dirty = true;
	}
	HX_STACK_LINE(1482)
	::openfl::_internal::text::TextEngine tmp9 = this->__textEngine;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(1482)
	int tmp10 = tmp9->scrollV = value;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(1482)
	return tmp10;
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,set_scrollV,return )

bool TextField_obj::get_selectable( ){
	HX_STACK_FRAME("openfl.text.TextField","get_selectable",0xee1ebe03,"openfl.text.TextField.get_selectable","openfl/text/TextField.hx",1487,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1489)
	::openfl::_internal::text::TextEngine tmp = this->__textEngine;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1489)
	bool tmp1 = tmp->selectable;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1489)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_selectable,return )

bool TextField_obj::set_selectable( bool value){
	HX_STACK_FRAME("openfl.text.TextField","set_selectable",0x0e3ea677,"openfl.text.TextField.set_selectable","openfl/text/TextField.hx",1494,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1496)
	bool tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1496)
	::openfl::_internal::text::TextEngine tmp1 = this->__textEngine;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1496)
	bool tmp2 = tmp1->selectable;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1496)
	bool tmp3 = (tmp != tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1496)
	bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1496)
	if ((tmp3)){
		HX_STACK_LINE(1496)
		Dynamic tmp5 = this->get_type();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1496)
		Dynamic tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1496)
		tmp4 = (tmp6 == ((Dynamic)((int)1)));
	}
	else{
		HX_STACK_LINE(1496)
		tmp4 = false;
	}
	HX_STACK_LINE(1496)
	if ((tmp4)){
		HX_STACK_LINE(1498)
		::openfl::display::Stage tmp5 = this->stage;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1498)
		bool tmp6 = (tmp5 != null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1498)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1498)
		if ((tmp6)){
			HX_STACK_LINE(1498)
			::openfl::display::Stage tmp8 = this->stage;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1498)
			::openfl::display::Stage tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1498)
			::openfl::display::InteractiveObject tmp10 = tmp9->get_focus();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1498)
			::openfl::display::InteractiveObject tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(1498)
			tmp7 = (tmp11 == hx::ObjectPtr<OBJ_>(this));
		}
		else{
			HX_STACK_LINE(1498)
			tmp7 = false;
		}
		HX_STACK_LINE(1498)
		if ((tmp7)){
			HX_STACK_LINE(1500)
			this->__startTextInput();
		}
		else{
			HX_STACK_LINE(1502)
			bool tmp8 = value;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1502)
			bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1502)
			if ((tmp9)){
				HX_STACK_LINE(1504)
				this->__stopTextInput();
			}
		}
	}
	HX_STACK_LINE(1510)
	::openfl::_internal::text::TextEngine tmp5 = this->__textEngine;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1510)
	bool tmp6 = tmp5->selectable = value;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(1510)
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,set_selectable,return )

int TextField_obj::get_selectionBeginIndex( ){
	HX_STACK_FRAME("openfl.text.TextField","get_selectionBeginIndex",0xb79fa288,"openfl.text.TextField.get_selectionBeginIndex","openfl/text/TextField.hx",1515,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1517)
	int tmp = this->__caretIndex;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1517)
	int tmp1 = this->__selectionIndex;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1517)
	Float tmp2 = ::Math_obj::min(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1517)
	int tmp3 = ::Std_obj::_int(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1517)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_selectionBeginIndex,return )

int TextField_obj::get_selectionEndIndex( ){
	HX_STACK_FRAME("openfl.text.TextField","get_selectionEndIndex",0xc3677dd6,"openfl.text.TextField.get_selectionEndIndex","openfl/text/TextField.hx",1522,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1524)
	int tmp = this->__caretIndex;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1524)
	int tmp1 = this->__selectionIndex;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1524)
	Float tmp2 = ::Math_obj::max(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1524)
	int tmp3 = ::Std_obj::_int(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1524)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_selectionEndIndex,return )

Float TextField_obj::get_sharpness( ){
	HX_STACK_FRAME("openfl.text.TextField","get_sharpness",0xa1a5a7b4,"openfl.text.TextField.get_sharpness","openfl/text/TextField.hx",1529,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1531)
	::openfl::_internal::text::TextEngine tmp = this->__textEngine;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1531)
	Float tmp1 = tmp->sharpness;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1531)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_sharpness,return )

Float TextField_obj::set_sharpness( Float value){
	HX_STACK_FRAME("openfl.text.TextField","set_sharpness",0xe6ab89c0,"openfl.text.TextField.set_sharpness","openfl/text/TextField.hx",1536,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1538)
	Float tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1538)
	::openfl::_internal::text::TextEngine tmp1 = this->__textEngine;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1538)
	Float tmp2 = tmp1->sharpness;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1538)
	bool tmp3 = (tmp != tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1538)
	if ((tmp3)){
		HX_STACK_LINE(1540)
		this->__dirty = true;
	}
	HX_STACK_LINE(1544)
	::openfl::_internal::text::TextEngine tmp4 = this->__textEngine;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1544)
	Float tmp5 = tmp4->sharpness = value;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1544)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,set_sharpness,return )

::String TextField_obj::get_text( ){
	HX_STACK_FRAME("openfl.text.TextField","get_text",0x3b0d545a,"openfl.text.TextField.get_text","openfl/text/TextField.hx",1549,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1551)
	::openfl::_internal::text::TextEngine tmp = this->__textEngine;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1551)
	::String tmp1 = tmp->text;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1551)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_text,return )

::String TextField_obj::set_text( ::String value){
	HX_STACK_FRAME("openfl.text.TextField","set_text",0xe96aadce,"openfl.text.TextField.set_text","openfl/text/TextField.hx",1556,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1558)
	bool tmp = this->__isHTML;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1558)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1558)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1558)
	if ((tmp1)){
		HX_STACK_LINE(1558)
		::openfl::_internal::text::TextEngine tmp3 = this->__textEngine;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1558)
		::openfl::_internal::text::TextEngine tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1558)
		::String tmp5 = tmp4->text;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1558)
		::String tmp6 = value;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1558)
		tmp2 = (tmp5 != tmp6);
	}
	else{
		HX_STACK_LINE(1558)
		tmp2 = true;
	}
	HX_STACK_LINE(1558)
	if ((tmp2)){
		HX_STACK_LINE(1560)
		this->__dirty = true;
		HX_STACK_LINE(1561)
		this->__layoutDirty = true;
	}
	else{
		HX_STACK_LINE(1565)
		::String tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1565)
		return tmp3;
	}
	HX_STACK_LINE(1569)
	::openfl::_internal::text::TextEngine tmp3 = this->__textEngine;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1569)
	int tmp4 = tmp3->textFormatRanges->length;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1569)
	bool tmp5 = (tmp4 > (int)1);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1569)
	if ((tmp5)){
		HX_STACK_LINE(1571)
		::openfl::_internal::text::TextEngine tmp6 = this->__textEngine;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1571)
		::openfl::_internal::text::TextEngine tmp7 = this->__textEngine;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1571)
		int tmp8 = tmp7->textFormatRanges->length;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1571)
		int tmp9 = (tmp8 - (int)1);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1571)
		tmp6->textFormatRanges->splice((int)1,tmp9);
	}
	HX_STACK_LINE(1575)
	::openfl::_internal::text::TextEngine tmp6 = this->__textEngine;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(1575)
	::openfl::_internal::text::TextFormatRange tmp7 = tmp6->textFormatRanges->__get((int)0).StaticCast< ::openfl::_internal::text::TextFormatRange >();		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(1575)
	::openfl::_internal::text::TextFormatRange range = tmp7;		HX_STACK_VAR(range,"range");
	HX_STACK_LINE(1576)
	::openfl::text::TextFormat tmp8 = this->__textFormat;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(1576)
	range->format = tmp8;
	HX_STACK_LINE(1577)
	range->start = (int)0;
	HX_STACK_LINE(1578)
	range->end = value.length;
	HX_STACK_LINE(1580)
	this->__isHTML = false;
	HX_STACK_LINE(1582)
	::openfl::_internal::text::TextEngine tmp9 = this->__textEngine;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(1582)
	::String tmp10 = tmp9->text = value;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(1582)
	return tmp10;
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,set_text,return )

int TextField_obj::get_textColor( ){
	HX_STACK_FRAME("openfl.text.TextField","get_textColor",0x69ca86a9,"openfl.text.TextField.get_textColor","openfl/text/TextField.hx",1587,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1589)
	::openfl::text::TextFormat tmp = this->__textFormat;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1589)
	Dynamic tmp1 = tmp->color;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1589)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_textColor,return )

int TextField_obj::set_textColor( int value){
	HX_STACK_FRAME("openfl.text.TextField","set_textColor",0xaed068b5,"openfl.text.TextField.set_textColor","openfl/text/TextField.hx",1594,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1596)
	int tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1596)
	::openfl::text::TextFormat tmp1 = this->__textFormat;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1596)
	Dynamic tmp2 = tmp1->color;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1596)
	bool tmp3 = (tmp != tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1596)
	if ((tmp3)){
		HX_STACK_LINE(1596)
		this->__dirty = true;
	}
	HX_STACK_LINE(1598)
	{
		HX_STACK_LINE(1598)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1598)
		::openfl::_internal::text::TextEngine tmp4 = this->__textEngine;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1598)
		Array< ::Dynamic > _g1 = tmp4->textFormatRanges;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(1598)
		while((true)){
			HX_STACK_LINE(1598)
			bool tmp5 = (_g < _g1->length);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1598)
			bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1598)
			if ((tmp6)){
				HX_STACK_LINE(1598)
				break;
			}
			HX_STACK_LINE(1598)
			::openfl::_internal::text::TextFormatRange tmp7 = _g1->__get(_g).StaticCast< ::openfl::_internal::text::TextFormatRange >();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1598)
			::openfl::_internal::text::TextFormatRange range = tmp7;		HX_STACK_VAR(range,"range");
			HX_STACK_LINE(1598)
			++(_g);
			HX_STACK_LINE(1600)
			range->format->color = value;
		}
	}
	HX_STACK_LINE(1604)
	::openfl::text::TextFormat tmp4 = this->__textFormat;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1604)
	Dynamic tmp5 = tmp4->color = value;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1604)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,set_textColor,return )

Float TextField_obj::get_textWidth( ){
	HX_STACK_FRAME("openfl.text.TextField","get_textWidth",0xe9d0cb4c,"openfl.text.TextField.get_textWidth","openfl/text/TextField.hx",1608,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1610)
	this->__updateLayout();
	HX_STACK_LINE(1611)
	::openfl::_internal::text::TextEngine tmp = this->__textEngine;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1611)
	Float tmp1 = tmp->textWidth;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1611)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_textWidth,return )

Float TextField_obj::get_textHeight( ){
	HX_STACK_FRAME("openfl.text.TextField","get_textHeight",0x63308fe1,"openfl.text.TextField.get_textHeight","openfl/text/TextField.hx",1616,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1618)
	this->__updateLayout();
	HX_STACK_LINE(1619)
	::openfl::_internal::text::TextEngine tmp = this->__textEngine;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1619)
	Float tmp1 = tmp->textHeight;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1619)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_textHeight,return )

Dynamic TextField_obj::get_type( ){
	HX_STACK_FRAME("openfl.text.TextField","get_type",0x3b1c7a67,"openfl.text.TextField.get_type","openfl/text/TextField.hx",1624,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1626)
	::openfl::_internal::text::TextEngine tmp = this->__textEngine;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1626)
	Dynamic tmp1 = tmp->type;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1626)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_type,return )

Dynamic TextField_obj::set_type( Dynamic value){
	HX_STACK_FRAME("openfl.text.TextField","set_type",0xe979d3db,"openfl.text.TextField.set_type","openfl/text/TextField.hx",1631,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1633)
	Dynamic tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1633)
	::openfl::_internal::text::TextEngine tmp1 = this->__textEngine;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1633)
	Dynamic tmp2 = tmp1->type;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1633)
	bool tmp3 = (tmp != tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1633)
	if ((tmp3)){
		HX_STACK_LINE(1635)
		bool tmp4 = (value == ((Dynamic)((int)1)));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1635)
		if ((tmp4)){
			HX_STACK_LINE(1637)
			Dynamic tmp5 = this->this_onFocusIn_dyn();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1637)
			this->addEventListener(HX_HCSTRING("focusIn","\xdd","\x45","\x83","\x41"),tmp5,null(),null(),null());
			HX_STACK_LINE(1638)
			Dynamic tmp6 = this->this_onFocusOut_dyn();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1638)
			this->addEventListener(HX_HCSTRING("focusOut","\x96","\x6f","\x5e","\x11"),tmp6,null(),null(),null());
			HX_STACK_LINE(1639)
			Dynamic tmp7 = this->this_onAddedToStage_dyn();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1639)
			this->addEventListener(HX_HCSTRING("addedToStage","\x63","\x22","\x55","\x0c"),tmp7,null(),null(),null());
			HX_STACK_LINE(1641)
			this->this_onFocusIn(null());
		}
		else{
			HX_STACK_LINE(1645)
			Dynamic tmp5 = this->this_onFocusIn_dyn();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1645)
			this->removeEventListener(HX_HCSTRING("focusIn","\xdd","\x45","\x83","\x41"),tmp5,null());
			HX_STACK_LINE(1646)
			Dynamic tmp6 = this->this_onFocusOut_dyn();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1646)
			this->removeEventListener(HX_HCSTRING("focusOut","\x96","\x6f","\x5e","\x11"),tmp6,null());
			HX_STACK_LINE(1647)
			Dynamic tmp7 = this->this_onAddedToStage_dyn();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1647)
			this->removeEventListener(HX_HCSTRING("addedToStage","\x63","\x22","\x55","\x0c"),tmp7,null());
			HX_STACK_LINE(1649)
			this->__stopTextInput();
		}
		HX_STACK_LINE(1653)
		this->__dirty = true;
	}
	HX_STACK_LINE(1657)
	::openfl::_internal::text::TextEngine tmp4 = this->__textEngine;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1657)
	Dynamic tmp5 = tmp4->type = value;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1657)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,set_type,return )

Float TextField_obj::get_width( ){
	HX_STACK_FRAME("openfl.text.TextField","get_width",0x2d65e5b9,"openfl.text.TextField.get_width","openfl/text/TextField.hx",1662,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1664)
	this->__updateLayout();
	HX_STACK_LINE(1665)
	::openfl::_internal::text::TextEngine tmp = this->__textEngine;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1665)
	Float tmp1 = tmp->width;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1665)
	return tmp1;
}


Float TextField_obj::set_width( Float value){
	HX_STACK_FRAME("openfl.text.TextField","set_width",0x10b6d1c5,"openfl.text.TextField.set_width","openfl/text/TextField.hx",1670,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1672)
	Float tmp = this->get_scaleX();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1672)
	bool tmp1 = (tmp != (int)1);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1672)
	bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1672)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1672)
	if ((tmp2)){
		HX_STACK_LINE(1672)
		::openfl::_internal::text::TextEngine tmp4 = this->__textEngine;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1672)
		::openfl::_internal::text::TextEngine tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1672)
		Float tmp6 = tmp5->width;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1672)
		Float tmp7 = value;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1672)
		tmp3 = (tmp6 != tmp7);
	}
	else{
		HX_STACK_LINE(1672)
		tmp3 = true;
	}
	HX_STACK_LINE(1672)
	if ((tmp3)){
		HX_STACK_LINE(1674)
		{
			HX_STACK_LINE(1674)
			bool tmp4 = this->__transformDirty;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1674)
			bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1674)
			if ((tmp5)){
				HX_STACK_LINE(1674)
				this->__transformDirty = true;
				HX_STACK_LINE(1674)
				(::openfl::display::DisplayObject_obj::__worldTransformDirty)++;
			}
		}
		HX_STACK_LINE(1675)
		this->__dirty = true;
		HX_STACK_LINE(1676)
		this->__layoutDirty = true;
	}
	HX_STACK_LINE(1680)
	this->set_scaleX((int)1);
	HX_STACK_LINE(1681)
	::openfl::_internal::text::TextEngine tmp4 = this->__textEngine;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1681)
	Float tmp5 = tmp4->width = value;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1681)
	return tmp5;
}


bool TextField_obj::get_wordWrap( ){
	HX_STACK_FRAME("openfl.text.TextField","get_wordWrap",0xa91076e1,"openfl.text.TextField.get_wordWrap","openfl/text/TextField.hx",1686,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1688)
	::openfl::_internal::text::TextEngine tmp = this->__textEngine;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1688)
	bool tmp1 = tmp->wordWrap;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1688)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_wordWrap,return )

bool TextField_obj::set_wordWrap( bool value){
	HX_STACK_FRAME("openfl.text.TextField","set_wordWrap",0xbe099a55,"openfl.text.TextField.set_wordWrap","openfl/text/TextField.hx",1693,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1695)
	bool tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1695)
	::openfl::_internal::text::TextEngine tmp1 = this->__textEngine;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1695)
	bool tmp2 = tmp1->wordWrap;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1695)
	bool tmp3 = (tmp != tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1695)
	if ((tmp3)){
		HX_STACK_LINE(1697)
		this->__dirty = true;
		HX_STACK_LINE(1698)
		this->__layoutDirty = true;
	}
	HX_STACK_LINE(1702)
	::openfl::_internal::text::TextEngine tmp4 = this->__textEngine;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1702)
	bool tmp5 = tmp4->wordWrap = value;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1702)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,set_wordWrap,return )

Void TextField_obj::stage_onMouseMove( ::openfl::events::MouseEvent event){
{
		HX_STACK_FRAME("openfl.text.TextField","stage_onMouseMove",0x47084bd2,"openfl.text.TextField.stage_onMouseMove","openfl/text/TextField.hx",1714,0xccf02094)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(1716)
		::openfl::display::Stage tmp = this->stage;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1716)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1716)
		if ((tmp1)){
			HX_STACK_LINE(1716)
			return null();
		}
		HX_STACK_LINE(1718)
		::openfl::_internal::text::TextEngine tmp2 = this->__textEngine;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1718)
		bool tmp3 = tmp2->selectable;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1718)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1718)
		if ((tmp3)){
			HX_STACK_LINE(1718)
			int tmp5 = this->__selectionIndex;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1718)
			int tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1718)
			tmp4 = (tmp6 >= (int)0);
		}
		else{
			HX_STACK_LINE(1718)
			tmp4 = false;
		}
		HX_STACK_LINE(1718)
		if ((tmp4)){
			HX_STACK_LINE(1720)
			this->__updateLayout();
			HX_STACK_LINE(1722)
			Float tmp5 = this->get_mouseX();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1722)
			Float tmp6 = this->get_mouseY();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1722)
			int tmp7 = this->__getPosition(tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1722)
			int position = tmp7;		HX_STACK_VAR(position,"position");
			HX_STACK_LINE(1724)
			int tmp8 = position;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1724)
			int tmp9 = this->__caretIndex;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1724)
			bool tmp10 = (tmp8 != tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1724)
			if ((tmp10)){
				HX_STACK_LINE(1726)
				this->__caretIndex = position;
				HX_STACK_LINE(1727)
				this->__dirty = true;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,stage_onMouseMove,(void))

Void TextField_obj::stage_onMouseUp( ::openfl::events::MouseEvent event){
{
		HX_STACK_FRAME("openfl.text.TextField","stage_onMouseUp",0x9bb86cdc,"openfl.text.TextField.stage_onMouseUp","openfl/text/TextField.hx",1736,0xccf02094)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(1738)
		::openfl::display::Stage tmp = this->stage;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1738)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1738)
		if ((tmp1)){
			HX_STACK_LINE(1738)
			return null();
		}
		HX_STACK_LINE(1740)
		::openfl::display::Stage tmp2 = this->stage;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1740)
		Dynamic tmp3 = this->stage_onMouseMove_dyn();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1740)
		tmp2->removeEventListener(HX_HCSTRING("mouseMove","\xd6","\x9b","\xb5","\xf4"),tmp3,null());
		HX_STACK_LINE(1741)
		::openfl::display::Stage tmp4 = this->stage;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1741)
		Dynamic tmp5 = this->stage_onMouseUp_dyn();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1741)
		tmp4->removeEventListener(HX_HCSTRING("mouseUp","\xe0","\xf3","\x72","\xc0"),tmp5,null());
		HX_STACK_LINE(1743)
		::openfl::display::Stage tmp6 = this->stage;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1743)
		::openfl::display::InteractiveObject tmp7 = tmp6->get_focus();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1743)
		bool tmp8 = (tmp7 == hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1743)
		if ((tmp8)){
			HX_STACK_LINE(1745)
			this->__getWorldTransform();
			HX_STACK_LINE(1746)
			this->__updateLayout();
			HX_STACK_LINE(1748)
			Float tmp9;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1748)
			{
				HX_STACK_LINE(1748)
				::openfl::geom::Matrix tmp10 = this->__worldTransform;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(1748)
				::openfl::geom::Matrix _this = tmp10;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(1748)
				Float tmp11 = this->get_x();		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(1748)
				Float px = tmp11;		HX_STACK_VAR(px,"px");
				HX_STACK_LINE(1748)
				Float tmp12 = this->get_y();		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(1748)
				Float py = tmp12;		HX_STACK_VAR(py,"py");
				HX_STACK_LINE(1748)
				Float tmp13 = (_this->a * _this->d);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(1748)
				Float tmp14 = (_this->b * _this->c);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(1748)
				Float tmp15 = (tmp13 - tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(1748)
				Float norm = tmp15;		HX_STACK_VAR(norm,"norm");
				HX_STACK_LINE(1748)
				bool tmp16 = (norm == (int)0);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(1748)
				if ((tmp16)){
					HX_STACK_LINE(1748)
					Float tmp17 = _this->tx;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(1748)
					tmp9 = -(tmp17);
				}
				else{
					HX_STACK_LINE(1748)
					Float tmp17 = (Float(((Float)1.0)) / Float(norm));		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(1748)
					Float tmp18 = _this->c;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(1748)
					Float tmp19 = (_this->ty - py);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(1748)
					Float tmp20 = (tmp18 * tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(1748)
					Float tmp21 = _this->d;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(1748)
					Float tmp22 = (px - _this->tx);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(1748)
					Float tmp23 = (tmp21 * tmp22);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(1748)
					Float tmp24 = (tmp20 + tmp23);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(1748)
					tmp9 = (tmp17 * tmp24);
				}
			}
			HX_STACK_LINE(1748)
			Float px = tmp9;		HX_STACK_VAR(px,"px");
			HX_STACK_LINE(1749)
			Float tmp10;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1749)
			{
				HX_STACK_LINE(1749)
				::openfl::geom::Matrix tmp11 = this->__worldTransform;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(1749)
				::openfl::geom::Matrix _this = tmp11;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(1749)
				Float tmp12 = this->get_x();		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(1749)
				Float px1 = tmp12;		HX_STACK_VAR(px1,"px1");
				HX_STACK_LINE(1749)
				Float tmp13 = this->get_y();		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(1749)
				Float py = tmp13;		HX_STACK_VAR(py,"py");
				HX_STACK_LINE(1749)
				Float tmp14 = (_this->a * _this->d);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(1749)
				Float tmp15 = (_this->b * _this->c);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(1749)
				Float tmp16 = (tmp14 - tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(1749)
				Float norm = tmp16;		HX_STACK_VAR(norm,"norm");
				HX_STACK_LINE(1749)
				bool tmp17 = (norm == (int)0);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(1749)
				if ((tmp17)){
					HX_STACK_LINE(1749)
					Float tmp18 = _this->ty;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(1749)
					tmp10 = -(tmp18);
				}
				else{
					HX_STACK_LINE(1749)
					Float tmp18 = (Float(((Float)1.0)) / Float(norm));		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(1749)
					Float tmp19 = _this->a;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(1749)
					Float tmp20 = (py - _this->ty);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(1749)
					Float tmp21 = (tmp19 * tmp20);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(1749)
					Float tmp22 = _this->b;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(1749)
					Float tmp23 = (_this->tx - px1);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(1749)
					Float tmp24 = (tmp22 * tmp23);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(1749)
					Float tmp25 = (tmp21 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(1749)
					tmp10 = (tmp18 * tmp25);
				}
			}
			HX_STACK_LINE(1749)
			Float py = tmp10;		HX_STACK_VAR(py,"py");
			HX_STACK_LINE(1751)
			Float tmp11 = this->get_mouseX();		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(1751)
			Float tmp12 = this->get_mouseY();		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1751)
			int tmp13 = this->__getPosition(tmp11,tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(1751)
			int upPos = tmp13;		HX_STACK_VAR(upPos,"upPos");
			HX_STACK_LINE(1752)
			int leftPos;		HX_STACK_VAR(leftPos,"leftPos");
			HX_STACK_LINE(1753)
			int rightPos;		HX_STACK_VAR(rightPos,"rightPos");
			HX_STACK_LINE(1755)
			int tmp14 = this->__selectionIndex;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(1755)
			int tmp15 = upPos;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(1755)
			Float tmp16 = ::Math_obj::min(tmp14,tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(1755)
			int tmp17 = ::Std_obj::_int(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(1755)
			leftPos = tmp17;
			HX_STACK_LINE(1756)
			int tmp18 = this->__selectionIndex;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(1756)
			int tmp19 = upPos;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(1756)
			Float tmp20 = ::Math_obj::max(tmp18,tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(1756)
			int tmp21 = ::Std_obj::_int(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(1756)
			rightPos = tmp21;
			HX_STACK_LINE(1758)
			this->__selectionIndex = leftPos;
			HX_STACK_LINE(1759)
			this->__caretIndex = rightPos;
			HX_STACK_LINE(1761)
			bool tmp22 = this->__inputEnabled;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(1761)
			if ((tmp22)){
				HX_STACK_LINE(1763)
				this->this_onFocusIn(null());
				HX_STACK_LINE(1765)
				this->__stopCursorTimer();
				HX_STACK_LINE(1766)
				this->__startCursorTimer();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,stage_onMouseUp,(void))

Void TextField_obj::this_onAddedToStage( ::openfl::events::Event event){
{
		HX_STACK_FRAME("openfl.text.TextField","this_onAddedToStage",0x3dbcbc7f,"openfl.text.TextField.this_onAddedToStage","openfl/text/TextField.hx",1777,0xccf02094)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(1777)
		this->this_onFocusIn(null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,this_onAddedToStage,(void))

Void TextField_obj::this_onFocusIn( ::openfl::events::FocusEvent event){
{
		HX_STACK_FRAME("openfl.text.TextField","this_onFocusIn",0x90f9e141,"openfl.text.TextField.this_onFocusIn","openfl/text/TextField.hx",1782,0xccf02094)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(1784)
		bool tmp = this->get_selectable();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1784)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1784)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1784)
		if ((tmp1)){
			HX_STACK_LINE(1784)
			Dynamic tmp3 = this->get_type();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1784)
			Dynamic tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1784)
			Dynamic tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1784)
			tmp2 = (tmp5 == ((Dynamic)((int)1)));
		}
		else{
			HX_STACK_LINE(1784)
			tmp2 = false;
		}
		HX_STACK_LINE(1784)
		bool tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1784)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1784)
		if ((tmp3)){
			HX_STACK_LINE(1784)
			::openfl::display::Stage tmp5 = this->stage;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1784)
			::openfl::display::Stage tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1784)
			::openfl::display::Stage tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1784)
			tmp4 = (tmp7 != null());
		}
		else{
			HX_STACK_LINE(1784)
			tmp4 = false;
		}
		HX_STACK_LINE(1784)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1784)
		if ((tmp4)){
			HX_STACK_LINE(1784)
			::openfl::display::Stage tmp6 = this->stage;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1784)
			::openfl::display::Stage tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1784)
			::openfl::display::InteractiveObject tmp8 = tmp7->get_focus();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1784)
			::openfl::display::InteractiveObject tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1784)
			tmp5 = (tmp9 == hx::ObjectPtr<OBJ_>(this));
		}
		else{
			HX_STACK_LINE(1784)
			tmp5 = false;
		}
		HX_STACK_LINE(1784)
		if ((tmp5)){
			HX_STACK_LINE(1786)
			this->__startTextInput();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,this_onFocusIn,(void))

Void TextField_obj::this_onFocusOut( ::openfl::events::FocusEvent event){
{
		HX_STACK_FRAME("openfl.text.TextField","this_onFocusOut",0x49afcbb2,"openfl.text.TextField.this_onFocusOut","openfl/text/TextField.hx",1795,0xccf02094)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(1795)
		this->__stopTextInput();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,this_onFocusOut,(void))

Void TextField_obj::this_onMouseDown( ::openfl::events::MouseEvent event){
{
		HX_STACK_FRAME("openfl.text.TextField","this_onMouseDown",0xfda1ed8b,"openfl.text.TextField.this_onMouseDown","openfl/text/TextField.hx",1800,0xccf02094)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(1802)
		bool tmp = this->get_selectable();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1802)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1802)
		if ((tmp1)){
			HX_STACK_LINE(1802)
			return null();
		}
		HX_STACK_LINE(1804)
		this->__updateLayout();
		HX_STACK_LINE(1806)
		Float tmp2 = this->get_mouseX();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1806)
		Float tmp3 = this->get_mouseY();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1806)
		int tmp4 = this->__getPosition(tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1806)
		this->__caretIndex = tmp4;
		HX_STACK_LINE(1807)
		int tmp5 = this->__caretIndex;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1807)
		this->__selectionIndex = tmp5;
		HX_STACK_LINE(1808)
		this->__dirty = true;
		HX_STACK_LINE(1810)
		::openfl::display::Stage tmp6 = this->stage;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1810)
		Dynamic tmp7 = this->stage_onMouseMove_dyn();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1810)
		tmp6->addEventListener(HX_HCSTRING("mouseMove","\xd6","\x9b","\xb5","\xf4"),tmp7,null(),null(),null());
		HX_STACK_LINE(1811)
		::openfl::display::Stage tmp8 = this->stage;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1811)
		Dynamic tmp9 = this->stage_onMouseUp_dyn();		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1811)
		tmp8->addEventListener(HX_HCSTRING("mouseUp","\xe0","\xf3","\x72","\xc0"),tmp9,null(),null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,this_onMouseDown,(void))

Void TextField_obj::window_onKeyDown( int key,int modifier){
{
		HX_STACK_FRAME("openfl.text.TextField","window_onKeyDown",0x61330e17,"openfl.text.TextField.window_onKeyDown","openfl/text/TextField.hx",1816,0xccf02094)
		HX_STACK_THIS(this)
		HX_STACK_ARG(key,"key")
		HX_STACK_ARG(modifier,"modifier")
		HX_STACK_LINE(1818)
		int tmp = key;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1818)
		switch( (int)(tmp)){
			case (int)8: {
				HX_STACK_LINE(1822)
				int tmp1 = this->__selectionIndex;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(1822)
				int tmp2 = this->__caretIndex;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(1822)
				bool tmp3 = (tmp1 == tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(1822)
				bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(1822)
				if ((tmp3)){
					HX_STACK_LINE(1822)
					int tmp5 = this->__caretIndex;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(1822)
					int tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(1822)
					tmp4 = (tmp6 > (int)0);
				}
				else{
					HX_STACK_LINE(1822)
					tmp4 = false;
				}
				HX_STACK_LINE(1822)
				if ((tmp4)){
					HX_STACK_LINE(1824)
					int tmp5 = this->__caretIndex;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(1824)
					int tmp6 = (tmp5 - (int)1);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(1824)
					this->__selectionIndex = tmp6;
				}
				HX_STACK_LINE(1828)
				int tmp5 = this->__selectionIndex;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1828)
				int tmp6 = this->__caretIndex;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1828)
				bool tmp7 = (tmp5 != tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1828)
				if ((tmp7)){
					HX_STACK_LINE(1830)
					this->replaceSelectedText(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
					HX_STACK_LINE(1831)
					int tmp8 = this->__caretIndex;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(1831)
					this->__selectionIndex = tmp8;
					HX_STACK_LINE(1833)
					::openfl::events::Event tmp9 = ::openfl::events::Event_obj::__new(HX_HCSTRING("change","\x70","\x91","\x72","\xb7"),true,null());		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(1833)
					this->dispatchEvent(tmp9);
				}
			}
			;break;
			case (int)127: {
				HX_STACK_LINE(1839)
				int tmp1 = this->__selectionIndex;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(1839)
				int tmp2 = this->__caretIndex;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(1839)
				bool tmp3 = (tmp1 == tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(1839)
				bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(1839)
				if ((tmp3)){
					HX_STACK_LINE(1839)
					int tmp5 = this->__caretIndex;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(1839)
					int tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(1839)
					::openfl::_internal::text::TextEngine tmp7 = this->__textEngine;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(1839)
					::openfl::_internal::text::TextEngine tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(1839)
					int tmp9 = tmp8->text.length;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(1839)
					int tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(1839)
					tmp4 = (tmp6 < tmp10);
				}
				else{
					HX_STACK_LINE(1839)
					tmp4 = false;
				}
				HX_STACK_LINE(1839)
				if ((tmp4)){
					HX_STACK_LINE(1841)
					int tmp5 = this->__caretIndex;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(1841)
					int tmp6 = (tmp5 + (int)1);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(1841)
					this->__selectionIndex = tmp6;
				}
				HX_STACK_LINE(1845)
				int tmp5 = this->__selectionIndex;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1845)
				int tmp6 = this->__caretIndex;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1845)
				bool tmp7 = (tmp5 != tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1845)
				if ((tmp7)){
					HX_STACK_LINE(1847)
					this->replaceSelectedText(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
					HX_STACK_LINE(1848)
					int tmp8 = this->__caretIndex;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(1848)
					this->__selectionIndex = tmp8;
					HX_STACK_LINE(1850)
					::openfl::events::Event tmp9 = ::openfl::events::Event_obj::__new(HX_HCSTRING("change","\x70","\x91","\x72","\xb7"),true,null());		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(1850)
					this->dispatchEvent(tmp9);
				}
			}
			;break;
			case (int)1073741904: {
				HX_STACK_LINE(1856)
				int tmp1 = modifier;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(1856)
				bool tmp2 = ::lime::ui::_KeyModifier::KeyModifier_Impl__obj::get_shiftKey(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(1856)
				if ((tmp2)){
					HX_STACK_LINE(1858)
					int tmp3 = this->__caretIndex;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(1858)
					bool tmp4 = (tmp3 > (int)0);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(1858)
					if ((tmp4)){
						HX_STACK_LINE(1860)
						(this->__caretIndex)--;
					}
				}
				else{
					HX_STACK_LINE(1866)
					int tmp3 = this->__selectionIndex;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(1866)
					int tmp4 = this->__caretIndex;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(1866)
					bool tmp5 = (tmp3 == tmp4);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(1866)
					if ((tmp5)){
						HX_STACK_LINE(1868)
						int tmp6 = this->__caretIndex;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(1868)
						bool tmp7 = (tmp6 > (int)0);		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(1868)
						if ((tmp7)){
							HX_STACK_LINE(1870)
							(this->__caretIndex)--;
						}
					}
					else{
						HX_STACK_LINE(1876)
						int tmp6 = this->__caretIndex;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(1876)
						int tmp7 = this->__selectionIndex;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(1876)
						Float tmp8 = ::Math_obj::min(tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(1876)
						int tmp9 = ::Std_obj::_int(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(1876)
						this->__caretIndex = tmp9;
					}
					HX_STACK_LINE(1880)
					int tmp6 = this->__caretIndex;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(1880)
					this->__selectionIndex = tmp6;
				}
				HX_STACK_LINE(1884)
				this->__stopCursorTimer();
				HX_STACK_LINE(1885)
				this->__startCursorTimer();
			}
			;break;
			case (int)1073741903: {
				HX_STACK_LINE(1889)
				int tmp1 = modifier;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(1889)
				bool tmp2 = ::lime::ui::_KeyModifier::KeyModifier_Impl__obj::get_shiftKey(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(1889)
				if ((tmp2)){
					HX_STACK_LINE(1891)
					int tmp3 = this->__caretIndex;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(1891)
					::openfl::_internal::text::TextEngine tmp4 = this->__textEngine;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(1891)
					int tmp5 = tmp4->text.length;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(1891)
					bool tmp6 = (tmp3 < tmp5);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(1891)
					if ((tmp6)){
						HX_STACK_LINE(1893)
						(this->__caretIndex)++;
					}
				}
				else{
					HX_STACK_LINE(1899)
					int tmp3 = this->__selectionIndex;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(1899)
					int tmp4 = this->__caretIndex;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(1899)
					bool tmp5 = (tmp3 == tmp4);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(1899)
					if ((tmp5)){
						HX_STACK_LINE(1901)
						int tmp6 = this->__caretIndex;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(1901)
						::openfl::_internal::text::TextEngine tmp7 = this->__textEngine;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(1901)
						int tmp8 = tmp7->text.length;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(1901)
						bool tmp9 = (tmp6 < tmp8);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(1901)
						if ((tmp9)){
							HX_STACK_LINE(1903)
							(this->__caretIndex)++;
						}
					}
					else{
						HX_STACK_LINE(1909)
						int tmp6 = this->__caretIndex;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(1909)
						int tmp7 = this->__selectionIndex;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(1909)
						Float tmp8 = ::Math_obj::max(tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(1909)
						int tmp9 = ::Std_obj::_int(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(1909)
						this->__caretIndex = tmp9;
					}
					HX_STACK_LINE(1913)
					int tmp6 = this->__caretIndex;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(1913)
					this->__selectionIndex = tmp6;
				}
				HX_STACK_LINE(1917)
				this->__stopCursorTimer();
				HX_STACK_LINE(1918)
				this->__startCursorTimer();
			}
			;break;
			case (int)99: {
				HX_STACK_LINE(1922)
				bool tmp1 = (modifier == (int)64);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(1922)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(1922)
				bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(1922)
				if ((tmp2)){
					HX_STACK_LINE(1922)
					tmp3 = (modifier == (int)128);
				}
				else{
					HX_STACK_LINE(1922)
					tmp3 = true;
				}
				HX_STACK_LINE(1922)
				if ((tmp3)){
					HX_STACK_LINE(1924)
					::openfl::_internal::text::TextEngine tmp4 = this->__textEngine;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(1924)
					int tmp5 = this->__caretIndex;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(1924)
					int tmp6 = this->__selectionIndex;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(1924)
					::String tmp7 = tmp4->text.substring(tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(1924)
					::lime::_system::Clipboard_obj::set_text(tmp7);
				}
			}
			;break;
			case (int)120: {
				HX_STACK_LINE(1930)
				bool tmp1 = (modifier == (int)64);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(1930)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(1930)
				bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(1930)
				if ((tmp2)){
					HX_STACK_LINE(1930)
					tmp3 = (modifier == (int)128);
				}
				else{
					HX_STACK_LINE(1930)
					tmp3 = true;
				}
				HX_STACK_LINE(1930)
				if ((tmp3)){
					HX_STACK_LINE(1932)
					::openfl::_internal::text::TextEngine tmp4 = this->__textEngine;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(1932)
					int tmp5 = this->__caretIndex;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(1932)
					int tmp6 = this->__selectionIndex;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(1932)
					::String tmp7 = tmp4->text.substring(tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(1932)
					::lime::_system::Clipboard_obj::set_text(tmp7);
					HX_STACK_LINE(1934)
					int tmp8 = this->__caretIndex;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(1934)
					int tmp9 = this->__selectionIndex;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(1934)
					bool tmp10 = (tmp8 != tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(1934)
					if ((tmp10)){
						HX_STACK_LINE(1936)
						this->replaceSelectedText(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
						HX_STACK_LINE(1937)
						::openfl::events::Event tmp11 = ::openfl::events::Event_obj::__new(HX_HCSTRING("change","\x70","\x91","\x72","\xb7"),true,null());		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(1937)
						this->dispatchEvent(tmp11);
					}
				}
			}
			;break;
			case (int)118: {
				HX_STACK_LINE(1945)
				bool tmp1 = (modifier == (int)64);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(1945)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(1945)
				bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(1945)
				if ((tmp2)){
					HX_STACK_LINE(1945)
					tmp3 = (modifier == (int)128);
				}
				else{
					HX_STACK_LINE(1945)
					tmp3 = true;
				}
				HX_STACK_LINE(1945)
				if ((tmp3)){
					HX_STACK_LINE(1947)
					::String tmp4 = ::lime::_system::Clipboard_obj::get_text();		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(1947)
					::String text = tmp4;		HX_STACK_VAR(text,"text");
					HX_STACK_LINE(1949)
					bool tmp5 = (text != null());		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(1949)
					if ((tmp5)){
						HX_STACK_LINE(1951)
						::String tmp6 = text;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(1951)
						this->replaceSelectedText(tmp6);
					}
					else{
						HX_STACK_LINE(1955)
						this->replaceSelectedText(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
					}
					HX_STACK_LINE(1959)
					::openfl::events::Event tmp6 = ::openfl::events::Event_obj::__new(HX_HCSTRING("change","\x70","\x91","\x72","\xb7"),true,null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(1959)
					this->dispatchEvent(tmp6);
				}
				else{
					HX_STACK_LINE(1962)
					::openfl::_internal::text::TextEngine tmp4 = this->__textEngine;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(1962)
					int tmp5 = tmp4->text.length;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(1962)
					::openfl::_internal::text::TextEngine tmp6 = this->__textEngine;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(1962)
					::openfl::_internal::text::TextEngine tmp7 = this->__textEngine;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(1962)
					int tmp8 = tmp7->textFormatRanges->length;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(1962)
					int tmp9 = (tmp8 - (int)1);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(1962)
					::openfl::_internal::text::TextFormatRange tmp10 = tmp6->textFormatRanges->__get(tmp9).StaticCast< ::openfl::_internal::text::TextFormatRange >();		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(1962)
					tmp10->end = tmp5;
				}
			}
			;break;
			default: {
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(TextField_obj,window_onKeyDown,(void))

Void TextField_obj::window_onTextInput( ::String value){
{
		HX_STACK_FRAME("openfl.text.TextField","window_onTextInput",0xe9818213,"openfl.text.TextField.window_onTextInput","openfl/text/TextField.hx",1972,0xccf02094)
		HX_STACK_THIS(this)
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(1974)
		::String tmp = value;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1974)
		this->replaceSelectedText(tmp);
		HX_STACK_LINE(1976)
		::openfl::events::Event tmp1 = ::openfl::events::Event_obj::__new(HX_HCSTRING("change","\x70","\x91","\x72","\xb7"),true,null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1976)
		this->dispatchEvent(tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,window_onTextInput,(void))

::openfl::text::TextFormat TextField_obj::__defaultTextFormat;


TextField_obj::TextField_obj()
{
}

void TextField_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TextField);
	HX_MARK_MEMBER_NAME(__bounds,"__bounds");
	HX_MARK_MEMBER_NAME(__caretIndex,"__caretIndex");
	HX_MARK_MEMBER_NAME(__cursorTimer,"__cursorTimer");
	HX_MARK_MEMBER_NAME(__dirty,"__dirty");
	HX_MARK_MEMBER_NAME(__inputEnabled,"__inputEnabled");
	HX_MARK_MEMBER_NAME(__isHTML,"__isHTML");
	HX_MARK_MEMBER_NAME(__layoutDirty,"__layoutDirty");
	HX_MARK_MEMBER_NAME(__selectionIndex,"__selectionIndex");
	HX_MARK_MEMBER_NAME(__showCursor,"__showCursor");
	HX_MARK_MEMBER_NAME(__textEngine,"__textEngine");
	HX_MARK_MEMBER_NAME(__textFormat,"__textFormat");
	::openfl::display::InteractiveObject_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void TextField_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(__bounds,"__bounds");
	HX_VISIT_MEMBER_NAME(__caretIndex,"__caretIndex");
	HX_VISIT_MEMBER_NAME(__cursorTimer,"__cursorTimer");
	HX_VISIT_MEMBER_NAME(__dirty,"__dirty");
	HX_VISIT_MEMBER_NAME(__inputEnabled,"__inputEnabled");
	HX_VISIT_MEMBER_NAME(__isHTML,"__isHTML");
	HX_VISIT_MEMBER_NAME(__layoutDirty,"__layoutDirty");
	HX_VISIT_MEMBER_NAME(__selectionIndex,"__selectionIndex");
	HX_VISIT_MEMBER_NAME(__showCursor,"__showCursor");
	HX_VISIT_MEMBER_NAME(__textEngine,"__textEngine");
	HX_VISIT_MEMBER_NAME(__textFormat,"__textFormat");
	::openfl::display::InteractiveObject_obj::__Visit(HX_VISIT_ARG);
}

Dynamic TextField_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"text") ) { if (inCallProp == hx::paccAlways) return get_text(); }
		if (HX_FIELD_EQ(inName,"type") ) { if (inCallProp == hx::paccAlways) return get_type(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"border") ) { if (inCallProp == hx::paccAlways) return get_border(); }
		if (HX_FIELD_EQ(inName,"length") ) { if (inCallProp == hx::paccAlways) return get_length(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"scrollH") ) { if (inCallProp == hx::paccAlways) return get_scrollH(); }
		if (HX_FIELD_EQ(inName,"scrollV") ) { if (inCallProp == hx::paccAlways) return get_scrollV(); }
		if (HX_FIELD_EQ(inName,"__dirty") ) { return __dirty; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"autoSize") ) { if (inCallProp == hx::paccAlways) return get_autoSize(); }
		if (HX_FIELD_EQ(inName,"htmlText") ) { if (inCallProp == hx::paccAlways) return get_htmlText(); }
		if (HX_FIELD_EQ(inName,"maxChars") ) { if (inCallProp == hx::paccAlways) return get_maxChars(); }
		if (HX_FIELD_EQ(inName,"numLines") ) { if (inCallProp == hx::paccAlways) return get_numLines(); }
		if (HX_FIELD_EQ(inName,"restrict") ) { if (inCallProp == hx::paccAlways) return get_restrict(); }
		if (HX_FIELD_EQ(inName,"wordWrap") ) { if (inCallProp == hx::paccAlways) return get_wordWrap(); }
		if (HX_FIELD_EQ(inName,"__bounds") ) { return __bounds; }
		if (HX_FIELD_EQ(inName,"__isHTML") ) { return __isHTML; }
		if (HX_FIELD_EQ(inName,"get_text") ) { return get_text_dyn(); }
		if (HX_FIELD_EQ(inName,"set_text") ) { return set_text_dyn(); }
		if (HX_FIELD_EQ(inName,"get_type") ) { return get_type_dyn(); }
		if (HX_FIELD_EQ(inName,"set_type") ) { return set_type_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"multiline") ) { if (inCallProp == hx::paccAlways) return get_multiline(); }
		if (HX_FIELD_EQ(inName,"sharpness") ) { if (inCallProp == hx::paccAlways) return get_sharpness(); }
		if (HX_FIELD_EQ(inName,"textColor") ) { if (inCallProp == hx::paccAlways) return get_textColor(); }
		if (HX_FIELD_EQ(inName,"textWidth") ) { if (inCallProp == hx::paccAlways) return get_textWidth(); }
		if (HX_FIELD_EQ(inName,"__hitTest") ) { return __hitTest_dyn(); }
		if (HX_FIELD_EQ(inName,"get_width") ) { return get_width_dyn(); }
		if (HX_FIELD_EQ(inName,"set_width") ) { return set_width_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"background") ) { if (inCallProp == hx::paccAlways) return get_background(); }
		if (HX_FIELD_EQ(inName,"caretIndex") ) { if (inCallProp == hx::paccAlways) return get_caretIndex(); }
		if (HX_FIELD_EQ(inName,"embedFonts") ) { if (inCallProp == hx::paccAlways) return get_embedFonts(); }
		if (HX_FIELD_EQ(inName,"maxScrollH") ) { if (inCallProp == hx::paccAlways) return get_maxScrollH(); }
		if (HX_FIELD_EQ(inName,"maxScrollV") ) { if (inCallProp == hx::paccAlways) return get_maxScrollV(); }
		if (HX_FIELD_EQ(inName,"selectable") ) { if (inCallProp == hx::paccAlways) return get_selectable(); }
		if (HX_FIELD_EQ(inName,"textHeight") ) { if (inCallProp == hx::paccAlways) return get_textHeight(); }
		if (HX_FIELD_EQ(inName,"appendText") ) { return appendText_dyn(); }
		if (HX_FIELD_EQ(inName,"__renderGL") ) { return __renderGL_dyn(); }
		if (HX_FIELD_EQ(inName,"get_border") ) { return get_border_dyn(); }
		if (HX_FIELD_EQ(inName,"set_border") ) { return set_border_dyn(); }
		if (HX_FIELD_EQ(inName,"get_height") ) { return get_height_dyn(); }
		if (HX_FIELD_EQ(inName,"set_height") ) { return set_height_dyn(); }
		if (HX_FIELD_EQ(inName,"get_length") ) { return get_length_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"borderColor") ) { if (inCallProp == hx::paccAlways) return get_borderColor(); }
		if (HX_FIELD_EQ(inName,"gridFitType") ) { if (inCallProp == hx::paccAlways) return get_gridFitType(); }
		if (HX_FIELD_EQ(inName,"getLineText") ) { return getLineText_dyn(); }
		if (HX_FIELD_EQ(inName,"replaceText") ) { return replaceText_dyn(); }
		if (HX_FIELD_EQ(inName,"__getBounds") ) { return __getBounds_dyn(); }
		if (HX_FIELD_EQ(inName,"__getCursor") ) { return __getCursor_dyn(); }
		if (HX_FIELD_EQ(inName,"__renderDOM") ) { return __renderDOM_dyn(); }
		if (HX_FIELD_EQ(inName,"get_scrollH") ) { return get_scrollH_dyn(); }
		if (HX_FIELD_EQ(inName,"set_scrollH") ) { return set_scrollH_dyn(); }
		if (HX_FIELD_EQ(inName,"get_scrollV") ) { return get_scrollV_dyn(); }
		if (HX_FIELD_EQ(inName,"set_scrollV") ) { return set_scrollV_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__caretIndex") ) { return __caretIndex; }
		if (HX_FIELD_EQ(inName,"__showCursor") ) { return __showCursor; }
		if (HX_FIELD_EQ(inName,"__textEngine") ) { return __textEngine; }
		if (HX_FIELD_EQ(inName,"__textFormat") ) { return __textFormat; }
		if (HX_FIELD_EQ(inName,"setSelection") ) { return setSelection_dyn(); }
		if (HX_FIELD_EQ(inName,"get_autoSize") ) { return get_autoSize_dyn(); }
		if (HX_FIELD_EQ(inName,"set_autoSize") ) { return set_autoSize_dyn(); }
		if (HX_FIELD_EQ(inName,"get_htmlText") ) { return get_htmlText_dyn(); }
		if (HX_FIELD_EQ(inName,"set_htmlText") ) { return set_htmlText_dyn(); }
		if (HX_FIELD_EQ(inName,"get_maxChars") ) { return get_maxChars_dyn(); }
		if (HX_FIELD_EQ(inName,"set_maxChars") ) { return set_maxChars_dyn(); }
		if (HX_FIELD_EQ(inName,"get_numLines") ) { return get_numLines_dyn(); }
		if (HX_FIELD_EQ(inName,"get_restrict") ) { return get_restrict_dyn(); }
		if (HX_FIELD_EQ(inName,"set_restrict") ) { return set_restrict_dyn(); }
		if (HX_FIELD_EQ(inName,"get_wordWrap") ) { return get_wordWrap_dyn(); }
		if (HX_FIELD_EQ(inName,"set_wordWrap") ) { return set_wordWrap_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"antiAliasType") ) { if (inCallProp == hx::paccAlways) return get_antiAliasType(); }
		if (HX_FIELD_EQ(inName,"bottomScrollV") ) { if (inCallProp == hx::paccAlways) return get_bottomScrollV(); }
		if (HX_FIELD_EQ(inName,"__cursorTimer") ) { return __cursorTimer; }
		if (HX_FIELD_EQ(inName,"__layoutDirty") ) { return __layoutDirty; }
		if (HX_FIELD_EQ(inName,"getLineLength") ) { return getLineLength_dyn(); }
		if (HX_FIELD_EQ(inName,"getLineOffset") ) { return getLineOffset_dyn(); }
		if (HX_FIELD_EQ(inName,"getTextFormat") ) { return getTextFormat_dyn(); }
		if (HX_FIELD_EQ(inName,"setTextFormat") ) { return setTextFormat_dyn(); }
		if (HX_FIELD_EQ(inName,"__getPosition") ) { return __getPosition_dyn(); }
		if (HX_FIELD_EQ(inName,"__hitTestMask") ) { return __hitTestMask_dyn(); }
		if (HX_FIELD_EQ(inName,"__renderCairo") ) { return __renderCairo_dyn(); }
		if (HX_FIELD_EQ(inName,"get_multiline") ) { return get_multiline_dyn(); }
		if (HX_FIELD_EQ(inName,"set_multiline") ) { return set_multiline_dyn(); }
		if (HX_FIELD_EQ(inName,"get_sharpness") ) { return get_sharpness_dyn(); }
		if (HX_FIELD_EQ(inName,"set_sharpness") ) { return set_sharpness_dyn(); }
		if (HX_FIELD_EQ(inName,"get_textColor") ) { return get_textColor_dyn(); }
		if (HX_FIELD_EQ(inName,"set_textColor") ) { return set_textColor_dyn(); }
		if (HX_FIELD_EQ(inName,"get_textWidth") ) { return get_textWidth_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__inputEnabled") ) { return __inputEnabled; }
		if (HX_FIELD_EQ(inName,"getLineMetrics") ) { return getLineMetrics_dyn(); }
		if (HX_FIELD_EQ(inName,"__renderCanvas") ) { return __renderCanvas_dyn(); }
		if (HX_FIELD_EQ(inName,"__updateLayout") ) { return __updateLayout_dyn(); }
		if (HX_FIELD_EQ(inName,"get_background") ) { return get_background_dyn(); }
		if (HX_FIELD_EQ(inName,"set_background") ) { return set_background_dyn(); }
		if (HX_FIELD_EQ(inName,"get_caretIndex") ) { return get_caretIndex_dyn(); }
		if (HX_FIELD_EQ(inName,"get_embedFonts") ) { return get_embedFonts_dyn(); }
		if (HX_FIELD_EQ(inName,"set_embedFonts") ) { return set_embedFonts_dyn(); }
		if (HX_FIELD_EQ(inName,"get_maxScrollH") ) { return get_maxScrollH_dyn(); }
		if (HX_FIELD_EQ(inName,"get_maxScrollV") ) { return get_maxScrollV_dyn(); }
		if (HX_FIELD_EQ(inName,"get_selectable") ) { return get_selectable_dyn(); }
		if (HX_FIELD_EQ(inName,"set_selectable") ) { return set_selectable_dyn(); }
		if (HX_FIELD_EQ(inName,"get_textHeight") ) { return get_textHeight_dyn(); }
		if (HX_FIELD_EQ(inName,"this_onFocusIn") ) { return this_onFocusIn_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"backgroundColor") ) { if (inCallProp == hx::paccAlways) return get_backgroundColor(); }
		if (HX_FIELD_EQ(inName,"__stopTextInput") ) { return __stopTextInput_dyn(); }
		if (HX_FIELD_EQ(inName,"get_borderColor") ) { return get_borderColor_dyn(); }
		if (HX_FIELD_EQ(inName,"set_borderColor") ) { return set_borderColor_dyn(); }
		if (HX_FIELD_EQ(inName,"get_gridFitType") ) { return get_gridFitType_dyn(); }
		if (HX_FIELD_EQ(inName,"set_gridFitType") ) { return set_gridFitType_dyn(); }
		if (HX_FIELD_EQ(inName,"stage_onMouseUp") ) { return stage_onMouseUp_dyn(); }
		if (HX_FIELD_EQ(inName,"this_onFocusOut") ) { return this_onFocusOut_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__selectionIndex") ) { return __selectionIndex; }
		if (HX_FIELD_EQ(inName,"__startTextInput") ) { return __startTextInput_dyn(); }
		if (HX_FIELD_EQ(inName,"this_onMouseDown") ) { return this_onMouseDown_dyn(); }
		if (HX_FIELD_EQ(inName,"window_onKeyDown") ) { return window_onKeyDown_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"defaultTextFormat") ) { if (inCallProp == hx::paccAlways) return get_defaultTextFormat(); }
		if (HX_FIELD_EQ(inName,"displayAsPassword") ) { if (inCallProp == hx::paccAlways) return get_displayAsPassword(); }
		if (HX_FIELD_EQ(inName,"selectionEndIndex") ) { if (inCallProp == hx::paccAlways) return get_selectionEndIndex(); }
		if (HX_FIELD_EQ(inName,"getCharBoundaries") ) { return getCharBoundaries_dyn(); }
		if (HX_FIELD_EQ(inName,"__stopCursorTimer") ) { return __stopCursorTimer_dyn(); }
		if (HX_FIELD_EQ(inName,"get_antiAliasType") ) { return get_antiAliasType_dyn(); }
		if (HX_FIELD_EQ(inName,"set_antiAliasType") ) { return set_antiAliasType_dyn(); }
		if (HX_FIELD_EQ(inName,"get_bottomScrollV") ) { return get_bottomScrollV_dyn(); }
		if (HX_FIELD_EQ(inName,"stage_onMouseMove") ) { return stage_onMouseMove_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"getLineIndexOfChar") ) { return getLineIndexOfChar_dyn(); }
		if (HX_FIELD_EQ(inName,"getParagraphLength") ) { return getParagraphLength_dyn(); }
		if (HX_FIELD_EQ(inName,"__startCursorTimer") ) { return __startCursorTimer_dyn(); }
		if (HX_FIELD_EQ(inName,"window_onTextInput") ) { return window_onTextInput_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"selectionBeginIndex") ) { if (inCallProp == hx::paccAlways) return get_selectionBeginIndex(); }
		if (HX_FIELD_EQ(inName,"getCharIndexAtPoint") ) { return getCharIndexAtPoint_dyn(); }
		if (HX_FIELD_EQ(inName,"getLineIndexAtPoint") ) { return getLineIndexAtPoint_dyn(); }
		if (HX_FIELD_EQ(inName,"replaceSelectedText") ) { return replaceSelectedText_dyn(); }
		if (HX_FIELD_EQ(inName,"get_backgroundColor") ) { return get_backgroundColor_dyn(); }
		if (HX_FIELD_EQ(inName,"set_backgroundColor") ) { return set_backgroundColor_dyn(); }
		if (HX_FIELD_EQ(inName,"this_onAddedToStage") ) { return this_onAddedToStage_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"get_defaultTextFormat") ) { return get_defaultTextFormat_dyn(); }
		if (HX_FIELD_EQ(inName,"set_defaultTextFormat") ) { return set_defaultTextFormat_dyn(); }
		if (HX_FIELD_EQ(inName,"get_displayAsPassword") ) { return get_displayAsPassword_dyn(); }
		if (HX_FIELD_EQ(inName,"set_displayAsPassword") ) { return set_displayAsPassword_dyn(); }
		if (HX_FIELD_EQ(inName,"get_selectionEndIndex") ) { return get_selectionEndIndex_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"getFirstCharInParagraph") ) { return getFirstCharInParagraph_dyn(); }
		if (HX_FIELD_EQ(inName,"get_selectionBeginIndex") ) { return get_selectionBeginIndex_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool TextField_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 19:
		if (HX_FIELD_EQ(inName,"__defaultTextFormat") ) { outValue = __defaultTextFormat; return true;  }
	}
	return false;
}

Dynamic TextField_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"text") ) { if (inCallProp == hx::paccAlways) return set_text(inValue); }
		if (HX_FIELD_EQ(inName,"type") ) { if (inCallProp == hx::paccAlways) return set_type(inValue); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"border") ) { if (inCallProp == hx::paccAlways) return set_border(inValue); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"scrollH") ) { if (inCallProp == hx::paccAlways) return set_scrollH(inValue); }
		if (HX_FIELD_EQ(inName,"scrollV") ) { if (inCallProp == hx::paccAlways) return set_scrollV(inValue); }
		if (HX_FIELD_EQ(inName,"__dirty") ) { __dirty=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"autoSize") ) { if (inCallProp == hx::paccAlways) return set_autoSize(inValue); }
		if (HX_FIELD_EQ(inName,"htmlText") ) { if (inCallProp == hx::paccAlways) return set_htmlText(inValue); }
		if (HX_FIELD_EQ(inName,"maxChars") ) { if (inCallProp == hx::paccAlways) return set_maxChars(inValue); }
		if (HX_FIELD_EQ(inName,"restrict") ) { if (inCallProp == hx::paccAlways) return set_restrict(inValue); }
		if (HX_FIELD_EQ(inName,"wordWrap") ) { if (inCallProp == hx::paccAlways) return set_wordWrap(inValue); }
		if (HX_FIELD_EQ(inName,"__bounds") ) { __bounds=inValue.Cast< ::openfl::geom::Rectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__isHTML") ) { __isHTML=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"multiline") ) { if (inCallProp == hx::paccAlways) return set_multiline(inValue); }
		if (HX_FIELD_EQ(inName,"sharpness") ) { if (inCallProp == hx::paccAlways) return set_sharpness(inValue); }
		if (HX_FIELD_EQ(inName,"textColor") ) { if (inCallProp == hx::paccAlways) return set_textColor(inValue); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"background") ) { if (inCallProp == hx::paccAlways) return set_background(inValue); }
		if (HX_FIELD_EQ(inName,"embedFonts") ) { if (inCallProp == hx::paccAlways) return set_embedFonts(inValue); }
		if (HX_FIELD_EQ(inName,"selectable") ) { if (inCallProp == hx::paccAlways) return set_selectable(inValue); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"borderColor") ) { if (inCallProp == hx::paccAlways) return set_borderColor(inValue); }
		if (HX_FIELD_EQ(inName,"gridFitType") ) { if (inCallProp == hx::paccAlways) return set_gridFitType(inValue); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__caretIndex") ) { __caretIndex=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__showCursor") ) { __showCursor=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__textEngine") ) { __textEngine=inValue.Cast< ::openfl::_internal::text::TextEngine >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__textFormat") ) { __textFormat=inValue.Cast< ::openfl::text::TextFormat >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"antiAliasType") ) { if (inCallProp == hx::paccAlways) return set_antiAliasType(inValue); }
		if (HX_FIELD_EQ(inName,"__cursorTimer") ) { __cursorTimer=inValue.Cast< ::haxe::Timer >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__layoutDirty") ) { __layoutDirty=inValue.Cast< bool >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__inputEnabled") ) { __inputEnabled=inValue.Cast< bool >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"backgroundColor") ) { if (inCallProp == hx::paccAlways) return set_backgroundColor(inValue); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__selectionIndex") ) { __selectionIndex=inValue.Cast< int >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"defaultTextFormat") ) { if (inCallProp == hx::paccAlways) return set_defaultTextFormat(inValue); }
		if (HX_FIELD_EQ(inName,"displayAsPassword") ) { if (inCallProp == hx::paccAlways) return set_displayAsPassword(inValue); }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool TextField_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 19:
		if (HX_FIELD_EQ(inName,"__defaultTextFormat") ) { __defaultTextFormat=ioValue.Cast< ::openfl::text::TextFormat >(); return true; }
	}
	return false;
}

void TextField_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("antiAliasType","\x68","\xc4","\xfa","\xe7"));
	outFields->push(HX_HCSTRING("autoSize","\xd0","\x8f","\x79","\x2f"));
	outFields->push(HX_HCSTRING("background","\xee","\x93","\x1d","\x26"));
	outFields->push(HX_HCSTRING("backgroundColor","\x95","\x4e","\x47","\x0d"));
	outFields->push(HX_HCSTRING("border","\xec","\x4c","\x1a","\x64"));
	outFields->push(HX_HCSTRING("borderColor","\xd7","\x3c","\xd5","\xd6"));
	outFields->push(HX_HCSTRING("bottomScrollV","\xfe","\xf7","\x87","\x8b"));
	outFields->push(HX_HCSTRING("caretIndex","\x8f","\xb6","\x5b","\xdd"));
	outFields->push(HX_HCSTRING("defaultTextFormat","\xe5","\xc7","\xe0","\x0a"));
	outFields->push(HX_HCSTRING("displayAsPassword","\x0f","\xcb","\x96","\xea"));
	outFields->push(HX_HCSTRING("embedFonts","\x2b","\xc7","\xe1","\x8e"));
	outFields->push(HX_HCSTRING("gridFitType","\x05","\xf3","\x13","\xb4"));
	outFields->push(HX_HCSTRING("htmlText","\xb8","\x1f","\x38","\x10"));
	outFields->push(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"));
	outFields->push(HX_HCSTRING("maxChars","\x99","\xef","\xd0","\xef"));
	outFields->push(HX_HCSTRING("maxScrollH","\x57","\xad","\xfc","\x9a"));
	outFields->push(HX_HCSTRING("maxScrollV","\x65","\xad","\xfc","\x9a"));
	outFields->push(HX_HCSTRING("multiline","\xed","\xd2","\x11","\x9e"));
	outFields->push(HX_HCSTRING("numLines","\xd9","\xf1","\x11","\x32"));
	outFields->push(HX_HCSTRING("restrict","\x3c","\xcb","\x9e","\xf1"));
	outFields->push(HX_HCSTRING("scrollH","\x9b","\x33","\xd8","\x30"));
	outFields->push(HX_HCSTRING("scrollV","\xa9","\x33","\xd8","\x30"));
	outFields->push(HX_HCSTRING("selectable","\x96","\xb6","\x2a","\xc4"));
	outFields->push(HX_HCSTRING("selectionBeginIndex","\x95","\x7f","\x17","\xd7"));
	outFields->push(HX_HCSTRING("selectionEndIndex","\xa3","\x0d","\x42","\x4b"));
	outFields->push(HX_HCSTRING("sharpness","\x81","\x22","\x25","\x1b"));
	outFields->push(HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c"));
	outFields->push(HX_HCSTRING("textColor","\x76","\x01","\x4a","\xe3"));
	outFields->push(HX_HCSTRING("textHeight","\x74","\x88","\x3c","\x39"));
	outFields->push(HX_HCSTRING("textWidth","\x19","\x46","\x50","\x63"));
	outFields->push(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"));
	outFields->push(HX_HCSTRING("wordWrap","\xb4","\x14","\xdb","\x00"));
	outFields->push(HX_HCSTRING("__bounds","\x95","\xf1","\x4c","\x0e"));
	outFields->push(HX_HCSTRING("__caretIndex","\xaf","\x31","\xef","\x15"));
	outFields->push(HX_HCSTRING("__cursorTimer","\xef","\x59","\x8f","\xe1"));
	outFields->push(HX_HCSTRING("__dirty","\xf2","\xa8","\x2e","\x44"));
	outFields->push(HX_HCSTRING("__inputEnabled","\xb7","\xe0","\x1d","\x37"));
	outFields->push(HX_HCSTRING("__isHTML","\x75","\x61","\x94","\x0a"));
	outFields->push(HX_HCSTRING("__layoutDirty","\xe8","\xe9","\x31","\xd3"));
	outFields->push(HX_HCSTRING("__selectionIndex","\x46","\x0a","\xc3","\x7d"));
	outFields->push(HX_HCSTRING("__showCursor","\xd3","\xae","\xf0","\xe0"));
	outFields->push(HX_HCSTRING("__textEngine","\x6f","\x43","\x08","\x6c"));
	outFields->push(HX_HCSTRING("__textFormat","\xe4","\x8a","\x12","\x6d"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::geom::Rectangle*/ ,(int)offsetof(TextField_obj,__bounds),HX_HCSTRING("__bounds","\x95","\xf1","\x4c","\x0e")},
	{hx::fsInt,(int)offsetof(TextField_obj,__caretIndex),HX_HCSTRING("__caretIndex","\xaf","\x31","\xef","\x15")},
	{hx::fsObject /*::haxe::Timer*/ ,(int)offsetof(TextField_obj,__cursorTimer),HX_HCSTRING("__cursorTimer","\xef","\x59","\x8f","\xe1")},
	{hx::fsBool,(int)offsetof(TextField_obj,__dirty),HX_HCSTRING("__dirty","\xf2","\xa8","\x2e","\x44")},
	{hx::fsBool,(int)offsetof(TextField_obj,__inputEnabled),HX_HCSTRING("__inputEnabled","\xb7","\xe0","\x1d","\x37")},
	{hx::fsBool,(int)offsetof(TextField_obj,__isHTML),HX_HCSTRING("__isHTML","\x75","\x61","\x94","\x0a")},
	{hx::fsBool,(int)offsetof(TextField_obj,__layoutDirty),HX_HCSTRING("__layoutDirty","\xe8","\xe9","\x31","\xd3")},
	{hx::fsInt,(int)offsetof(TextField_obj,__selectionIndex),HX_HCSTRING("__selectionIndex","\x46","\x0a","\xc3","\x7d")},
	{hx::fsBool,(int)offsetof(TextField_obj,__showCursor),HX_HCSTRING("__showCursor","\xd3","\xae","\xf0","\xe0")},
	{hx::fsObject /*::openfl::_internal::text::TextEngine*/ ,(int)offsetof(TextField_obj,__textEngine),HX_HCSTRING("__textEngine","\x6f","\x43","\x08","\x6c")},
	{hx::fsObject /*::openfl::text::TextFormat*/ ,(int)offsetof(TextField_obj,__textFormat),HX_HCSTRING("__textFormat","\xe4","\x8a","\x12","\x6d")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::openfl::text::TextFormat*/ ,(void *) &TextField_obj::__defaultTextFormat,HX_HCSTRING("__defaultTextFormat","\xc5","\xf0","\xd0","\xbd")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("__bounds","\x95","\xf1","\x4c","\x0e"),
	HX_HCSTRING("__caretIndex","\xaf","\x31","\xef","\x15"),
	HX_HCSTRING("__cursorTimer","\xef","\x59","\x8f","\xe1"),
	HX_HCSTRING("__dirty","\xf2","\xa8","\x2e","\x44"),
	HX_HCSTRING("__inputEnabled","\xb7","\xe0","\x1d","\x37"),
	HX_HCSTRING("__isHTML","\x75","\x61","\x94","\x0a"),
	HX_HCSTRING("__layoutDirty","\xe8","\xe9","\x31","\xd3"),
	HX_HCSTRING("__selectionIndex","\x46","\x0a","\xc3","\x7d"),
	HX_HCSTRING("__showCursor","\xd3","\xae","\xf0","\xe0"),
	HX_HCSTRING("__textEngine","\x6f","\x43","\x08","\x6c"),
	HX_HCSTRING("__textFormat","\xe4","\x8a","\x12","\x6d"),
	HX_HCSTRING("appendText","\xa7","\xcf","\x05","\x5b"),
	HX_HCSTRING("getCharBoundaries","\x74","\x85","\xa1","\x8b"),
	HX_HCSTRING("getCharIndexAtPoint","\x17","\xee","\x9c","\xaa"),
	HX_HCSTRING("getFirstCharInParagraph","\xf9","\x5c","\x3d","\x08"),
	HX_HCSTRING("getLineIndexAtPoint","\x35","\xdc","\x50","\x98"),
	HX_HCSTRING("getLineIndexOfChar","\xb5","\x68","\x99","\xa1"),
	HX_HCSTRING("getLineLength","\x30","\xec","\x21","\xd0"),
	HX_HCSTRING("getLineMetrics","\xb9","\xab","\xc6","\xf2"),
	HX_HCSTRING("getLineOffset","\xdd","\xee","\x59","\x91"),
	HX_HCSTRING("getLineText","\x77","\xdd","\x16","\xb0"),
	HX_HCSTRING("getParagraphLength","\xfe","\x0e","\x4e","\xc4"),
	HX_HCSTRING("getTextFormat","\xfa","\x6b","\xf1","\x90"),
	HX_HCSTRING("replaceSelectedText","\xfc","\xfe","\x33","\xbb"),
	HX_HCSTRING("replaceText","\x01","\x6b","\x95","\x61"),
	HX_HCSTRING("setSelection","\x4a","\xb8","\x6a","\xb2"),
	HX_HCSTRING("setTextFormat","\x06","\x4e","\xf7","\xd5"),
	HX_HCSTRING("__getBounds","\x8b","\x58","\xa0","\x10"),
	HX_HCSTRING("__getCursor","\xec","\x60","\x6b","\xe9"),
	HX_HCSTRING("__getPosition","\x3f","\xa4","\x66","\x39"),
	HX_HCSTRING("__hitTest","\x25","\xb1","\xcd","\x63"),
	HX_HCSTRING("__hitTestMask","\xb1","\x14","\xfd","\x3b"),
	HX_HCSTRING("__renderCairo","\x32","\x9e","\x42","\x55"),
	HX_HCSTRING("__renderCanvas","\xee","\xdb","\x58","\x48"),
	HX_HCSTRING("__renderDOM","\xac","\xf5","\x83","\xfb"),
	HX_HCSTRING("__renderGL","\x1b","\x1e","\x14","\x56"),
	HX_HCSTRING("__startCursorTimer","\xed","\x46","\xa3","\x83"),
	HX_HCSTRING("__startTextInput","\x7b","\xae","\x85","\xaa"),
	HX_HCSTRING("__stopCursorTimer","\x0d","\xcd","\x6c","\x26"),
	HX_HCSTRING("__stopTextInput","\x9b","\x6c","\xcb","\xa1"),
	HX_HCSTRING("__updateLayout","\xb3","\xd8","\x3c","\x79"),
	HX_HCSTRING("get_antiAliasType","\xbf","\xcf","\x6a","\xee"),
	HX_HCSTRING("set_antiAliasType","\xcb","\xa7","\xd8","\x11"),
	HX_HCSTRING("get_autoSize","\xd9","\x43","\x93","\xe4"),
	HX_HCSTRING("set_autoSize","\x4d","\x67","\x8c","\xf9"),
	HX_HCSTRING("get_background","\x37","\x1c","\x13","\x9c"),
	HX_HCSTRING("set_background","\xab","\x04","\x33","\xbc"),
	HX_HCSTRING("get_backgroundColor","\xac","\x1d","\x52","\x98"),
	HX_HCSTRING("set_backgroundColor","\xb8","\x10","\xef","\xd4"),
	HX_HCSTRING("get_border","\xb5","\xbc","\xa1","\x54"),
	HX_HCSTRING("set_border","\x29","\x5b","\x1f","\x58"),
	HX_HCSTRING("get_borderColor","\x6e","\xf4","\xb6","\x97"),
	HX_HCSTRING("set_borderColor","\x7a","\x71","\x82","\x93"),
	HX_HCSTRING("get_bottomScrollV","\x55","\x03","\xf8","\x91"),
	HX_HCSTRING("get_caretIndex","\xd8","\x3e","\x51","\x53"),
	HX_HCSTRING("get_defaultTextFormat","\xbc","\xca","\x8e","\x89"),
	HX_HCSTRING("set_defaultTextFormat","\xc8","\x98","\x97","\xdd"),
	HX_HCSTRING("get_displayAsPassword","\xe6","\xcd","\x44","\x69"),
	HX_HCSTRING("set_displayAsPassword","\xf2","\x9b","\x4d","\xbd"),
	HX_HCSTRING("get_embedFonts","\x74","\x4f","\xd7","\x04"),
	HX_HCSTRING("set_embedFonts","\xe8","\x37","\xf7","\x24"),
	HX_HCSTRING("get_gridFitType","\x9c","\xaa","\xf5","\x74"),
	HX_HCSTRING("set_gridFitType","\xa8","\x27","\xc1","\x70"),
	HX_HCSTRING("get_height","\xb0","\x77","\xd3","\xf2"),
	HX_HCSTRING("set_height","\x24","\x16","\x51","\xf6"),
	HX_HCSTRING("get_htmlText","\xc1","\xd3","\x51","\xc5"),
	HX_HCSTRING("set_htmlText","\x35","\xf7","\x4a","\xda"),
	HX_HCSTRING("get_length","\xaf","\x04","\x8f","\x8f"),
	HX_HCSTRING("get_maxChars","\xa2","\xa3","\xea","\xa4"),
	HX_HCSTRING("set_maxChars","\x16","\xc7","\xe3","\xb9"),
	HX_HCSTRING("get_maxScrollH","\xa0","\x35","\xf2","\x10"),
	HX_HCSTRING("get_maxScrollV","\xae","\x35","\xf2","\x10"),
	HX_HCSTRING("get_multiline","\xc4","\xa6","\x75","\x5f"),
	HX_HCSTRING("set_multiline","\xd0","\x88","\x7b","\xa4"),
	HX_HCSTRING("get_numLines","\xe2","\xa5","\x2b","\xe7"),
	HX_HCSTRING("get_restrict","\x45","\x7f","\xb8","\xa6"),
	HX_HCSTRING("set_restrict","\xb9","\xa2","\xb1","\xbb"),
	HX_HCSTRING("get_scrollH","\xb2","\x93","\xd2","\xb6"),
	HX_HCSTRING("set_scrollH","\xbe","\x9a","\x3f","\xc1"),
	HX_HCSTRING("get_scrollV","\xc0","\x93","\xd2","\xb6"),
	HX_HCSTRING("set_scrollV","\xcc","\x9a","\x3f","\xc1"),
	HX_HCSTRING("get_selectable","\xdf","\x3e","\x20","\x3a"),
	HX_HCSTRING("set_selectable","\x53","\x27","\x40","\x5a"),
	HX_HCSTRING("get_selectionBeginIndex","\x2c","\x26","\x6d","\xdf"),
	HX_HCSTRING("get_selectionEndIndex","\x7a","\x10","\xf0","\xc9"),
	HX_HCSTRING("get_sharpness","\x58","\xf6","\x88","\xdc"),
	HX_HCSTRING("set_sharpness","\x64","\xd8","\x8e","\x21"),
	HX_HCSTRING("get_text","\x36","\x88","\xb4","\xcc"),
	HX_HCSTRING("set_text","\xaa","\xe1","\x11","\x7b"),
	HX_HCSTRING("get_textColor","\x4d","\xd5","\xad","\xa4"),
	HX_HCSTRING("set_textColor","\x59","\xb7","\xb3","\xe9"),
	HX_HCSTRING("get_textWidth","\xf0","\x19","\xb4","\x24"),
	HX_HCSTRING("get_textHeight","\xbd","\x10","\x32","\xaf"),
	HX_HCSTRING("get_type","\x43","\xae","\xc3","\xcc"),
	HX_HCSTRING("set_type","\xb7","\x07","\x21","\x7b"),
	HX_HCSTRING("get_width","\x5d","\x12","\x0c","\x0e"),
	HX_HCSTRING("set_width","\x69","\xfe","\x5c","\xf1"),
	HX_HCSTRING("get_wordWrap","\xbd","\xc8","\xf4","\xb5"),
	HX_HCSTRING("set_wordWrap","\x31","\xec","\xed","\xca"),
	HX_HCSTRING("stage_onMouseMove","\x76","\xbc","\x61","\xde"),
	HX_HCSTRING("stage_onMouseUp","\x80","\xac","\x07","\xd1"),
	HX_HCSTRING("this_onAddedToStage","\x23","\x9e","\xce","\x72"),
	HX_HCSTRING("this_onFocusIn","\x1d","\x62","\xfb","\xdc"),
	HX_HCSTRING("this_onFocusOut","\x56","\x0b","\xff","\x7e"),
	HX_HCSTRING("this_onMouseDown","\x67","\x5d","\xaa","\x6d"),
	HX_HCSTRING("window_onKeyDown","\xf3","\x7d","\x3b","\xd1"),
	HX_HCSTRING("window_onTextInput","\xef","\xa0","\x6a","\xc0"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TextField_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(TextField_obj::__defaultTextFormat,"__defaultTextFormat");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TextField_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(TextField_obj::__defaultTextFormat,"__defaultTextFormat");
};

#endif

hx::Class TextField_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("__defaultTextFormat","\xc5","\xf0","\xd0","\xbd"),
	::String(null()) };

void TextField_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.text.TextField","\xca","\xa8","\xd5","\xef");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &TextField_obj::__GetStatic;
	__mClass->mSetStaticField = &TextField_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< TextField_obj >;
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
} // end namespace text
