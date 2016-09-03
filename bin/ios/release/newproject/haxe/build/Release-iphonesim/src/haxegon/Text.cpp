#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxegon_Convert
#include <haxegon/Convert.h>
#endif
#ifndef INCLUDED_haxegon_Gfx
#include <haxegon/Gfx.h>
#endif
#ifndef INCLUDED_haxegon_Input
#include <haxegon/Input.h>
#endif
#ifndef INCLUDED_haxegon_Key
#include <haxegon/Key.h>
#endif
#ifndef INCLUDED_haxegon_S
#include <haxegon/S.h>
#endif
#ifndef INCLUDED_haxegon_Text
#include <haxegon/Text.h>
#endif
#ifndef INCLUDED_haxegon_bitmapFont_BitmapTextField
#include <haxegon/bitmapFont/BitmapTextField.h>
#endif
#ifndef INCLUDED_haxegon_util_Fontclass
#include <haxegon/util/Fontclass.h>
#endif
#ifndef INCLUDED_haxegon_util_Fontfile
#include <haxegon/util/Fontfile.h>
#endif
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
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
#ifndef INCLUDED_openfl_display_Stage
#include <openfl/display/Stage.h>
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
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
#ifndef INCLUDED_openfl_text_TextField
#include <openfl/text/TextField.h>
#endif
namespace haxegon{

Void Text_obj::__construct()
{
	return null();
}

//Text_obj::~Text_obj() { }

Dynamic Text_obj::__CreateEmpty() { return  new Text_obj; }
hx::ObjectPtr< Text_obj > Text_obj::__new()
{  hx::ObjectPtr< Text_obj > _result_ = new Text_obj();
	_result_->__construct();
	return _result_;}

Dynamic Text_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Text_obj > _result_ = new Text_obj();
	_result_->__construct();
	return _result_;}

Void Text_obj::init( ::openfl::display::Stage stage){
{
		HX_STACK_FRAME("haxegon.Text","init",0x39c53d43,"haxegon.Text.init","haxegon/Text.hx",14,0xb667cca2)
		HX_STACK_ARG(stage,"stage")
		HX_STACK_LINE(15)
		::openfl::display::BitmapData tmp = ::haxegon::Gfx_obj::backbuffer;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(15)
		::haxegon::Text_obj::drawto = tmp;
		HX_STACK_LINE(16)
		::haxegon::Text_obj::gfxstage = stage;
		HX_STACK_LINE(17)
		::openfl::geom::ColorTransform tmp1 = ::openfl::geom::ColorTransform_obj::__new(null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(17)
		::haxegon::Text_obj::alphact = tmp1;
		HX_STACK_LINE(18)
		::haxegon::Text_obj::input_cursorglow = (int)0;
		HX_STACK_LINE(19)
		::haxegon::Text_obj::inputmaxlength = (int)40;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Text_obj,init,(void))

Void Text_obj::align( int a){
{
		HX_STACK_FRAME("haxegon.Text","align",0xb6494132,"haxegon.Text.align","haxegon/Text.hx",26,0xb667cca2)
		HX_STACK_ARG(a,"a")
		HX_STACK_LINE(26)
		::haxegon::Text_obj::textalign = a;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Text_obj,align,(void))

Void Text_obj::rotation( Float a,hx::Null< int >  __o_xpivot,hx::Null< int >  __o_ypivot){
int xpivot = __o_xpivot.Default(-15000);
int ypivot = __o_ypivot.Default(-15000);
	HX_STACK_FRAME("haxegon.Text","rotation",0xf428d4f1,"haxegon.Text.rotation","haxegon/Text.hx",29,0xb667cca2)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(xpivot,"xpivot")
	HX_STACK_ARG(ypivot,"ypivot")
{
		HX_STACK_LINE(30)
		::haxegon::Text_obj::textrotate = a;
		HX_STACK_LINE(31)
		::haxegon::Text_obj::textrotatexpivot = xpivot;
		HX_STACK_LINE(32)
		::haxegon::Text_obj::textrotateypivot = ypivot;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Text_obj,rotation,(void))

Void Text_obj::input_checkfortext( ){
{
		HX_STACK_FRAME("haxegon.Text","input_checkfortext",0xffbdc276,"haxegon.Text.input_checkfortext","haxegon/Text.hx",35,0xb667cca2)
		HX_STACK_LINE(36)
		::String tmp = ::haxegon::Input_obj::keybuffer;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(36)
		::haxegon::Text_obj::inputtext = tmp;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Text_obj,input_checkfortext,(void))

::String Text_obj::reverse( ::String t){
	HX_STACK_FRAME("haxegon.Text","reverse",0x3d5558cf,"haxegon.Text.reverse","haxegon/Text.hx",40,0xb667cca2)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(41)
	::String t2 = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(t2,"t2");
	HX_STACK_LINE(43)
	{
		HX_STACK_LINE(43)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(43)
		int _g = t.length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(43)
		while((true)){
			HX_STACK_LINE(43)
			bool tmp = (_g1 < _g);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(43)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(43)
			if ((tmp1)){
				HX_STACK_LINE(43)
				break;
			}
			HX_STACK_LINE(43)
			int tmp2 = (_g1)++;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(43)
			int i = tmp2;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(43)
			int tmp3 = (t.length - i);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(43)
			int tmp4 = (tmp3 - (int)1);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(43)
			::String tmp5 = t.substr(tmp4,(int)1);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(43)
			hx::AddEq(t2,tmp5);
		}
	}
	HX_STACK_LINE(44)
	::String tmp = t2;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(44)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Text_obj,reverse,return )

bool Text_obj::input( Float x,Float y,::String text,hx::Null< int >  __o_col,hx::Null< int >  __o_responsecol){
int col = __o_col.Default(16777215);
int responsecol = __o_responsecol.Default(13421772);
	HX_STACK_FRAME("haxegon.Text","input",0x52d5ae77,"haxegon.Text.input","haxegon/Text.hx",47,0xb667cca2)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(text,"text")
	HX_STACK_ARG(col,"col")
	HX_STACK_ARG(responsecol,"responsecol")
{
		HX_STACK_LINE(48)
		::haxegon::Text_obj::input_show = (int)2;
		HX_STACK_LINE(50)
		::String tmp = ::haxegon::Text_obj::currentfont;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(50)
		::haxegon::Text_obj::input_font = tmp;
		HX_STACK_LINE(51)
		Float tmp1 = ::haxegon::Text_obj::currentsize;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(51)
		::haxegon::Text_obj::input_textsize = tmp1;
		HX_STACK_LINE(52)
		int tmp2 = ::haxegon::Text_obj::currentindex;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(52)
		::haxegon::util::Fontclass tmp3 = ::haxegon::Text_obj::typeface->__get(tmp2).StaticCast< ::haxegon::util::Fontclass >();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(52)
		::String tmp4 = tmp3->type;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(52)
		bool tmp5 = (tmp4 == HX_HCSTRING("bitmap","\xef","\x0f","\x0c","\xf1"));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(52)
		if ((tmp5)){
			HX_STACK_LINE(53)
			int tmp6 = ::haxegon::Text_obj::currentindex;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(53)
			::haxegon::util::Fontclass tmp7 = ::haxegon::Text_obj::typeface->__get(tmp6).StaticCast< ::haxegon::util::Fontclass >();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(53)
			::String tmp8 = text;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(53)
			::String tmp9 = ::haxegon::Text_obj::inputtext;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(53)
			::String tmp10 = (tmp8 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(53)
			tmp7->tf_bitmap->set_text(tmp10);
		}
		else{
			HX_STACK_LINE(54)
			int tmp6 = ::haxegon::Text_obj::currentindex;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(54)
			::haxegon::util::Fontclass tmp7 = ::haxegon::Text_obj::typeface->__get(tmp6).StaticCast< ::haxegon::util::Fontclass >();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(54)
			::String tmp8 = tmp7->type;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(54)
			bool tmp9 = (tmp8 == HX_HCSTRING("ttf","\xe6","\x6a","\x58","\x00"));		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(54)
			if ((tmp9)){
				HX_STACK_LINE(55)
				int tmp10 = ::haxegon::Text_obj::currentindex;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(55)
				::haxegon::util::Fontclass tmp11 = ::haxegon::Text_obj::typeface->__get(tmp10).StaticCast< ::haxegon::util::Fontclass >();		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(55)
				::String tmp12 = text;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(55)
				::String tmp13 = ::haxegon::Text_obj::inputtext;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(55)
				::String tmp14 = (tmp12 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(55)
				tmp11->tf_ttf->set_text(tmp14);
			}
		}
		HX_STACK_LINE(57)
		Float tmp6 = x;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(57)
		Float tmp7 = ::haxegon::Text_obj::alignx(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(57)
		x = tmp7;
		HX_STACK_LINE(57)
		Float tmp8 = y;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(57)
		Float tmp9 = ::haxegon::Text_obj::aligny(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(57)
		y = tmp9;
		HX_STACK_LINE(58)
		::haxegon::Text_obj::input_textxp = x;
		HX_STACK_LINE(59)
		::haxegon::Text_obj::input_textyp = y;
		HX_STACK_LINE(61)
		int tmp10 = ::haxegon::Text_obj::currentindex;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(61)
		::haxegon::util::Fontclass tmp11 = ::haxegon::Text_obj::typeface->__get(tmp10).StaticCast< ::haxegon::util::Fontclass >();		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(61)
		::String tmp12 = tmp11->type;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(61)
		bool tmp13 = (tmp12 == HX_HCSTRING("bitmap","\xef","\x0f","\x0c","\xf1"));		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(61)
		if ((tmp13)){
			HX_STACK_LINE(62)
			int tmp14 = ::haxegon::Text_obj::currentindex;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(62)
			::haxegon::util::Fontclass tmp15 = ::haxegon::Text_obj::typeface->__get(tmp14).StaticCast< ::haxegon::util::Fontclass >();		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(62)
			::String tmp16 = text;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(62)
			tmp15->tf_bitmap->set_text(tmp16);
			HX_STACK_LINE(63)
			Float tmp17 = ::haxegon::Text_obj::input_textxp;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(63)
			int tmp18 = ::haxegon::Text_obj::currentindex;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(63)
			::haxegon::util::Fontclass tmp19 = ::haxegon::Text_obj::typeface->__get(tmp18).StaticCast< ::haxegon::util::Fontclass >();		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(63)
			Float tmp20 = tmp19->tf_bitmap->get_textWidth();		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(63)
			int tmp21 = ::Math_obj::floor(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(63)
			Float tmp22 = (tmp17 + tmp21);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(63)
			::haxegon::Text_obj::input_responsexp = tmp22;
		}
		else{
			HX_STACK_LINE(64)
			int tmp14 = ::haxegon::Text_obj::currentindex;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(64)
			::haxegon::util::Fontclass tmp15 = ::haxegon::Text_obj::typeface->__get(tmp14).StaticCast< ::haxegon::util::Fontclass >();		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(64)
			::String tmp16 = tmp15->type;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(64)
			bool tmp17 = (tmp16 == HX_HCSTRING("ttf","\xe6","\x6a","\x58","\x00"));		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(64)
			if ((tmp17)){
				HX_STACK_LINE(65)
				int tmp18 = ::haxegon::Text_obj::currentindex;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(65)
				::haxegon::util::Fontclass tmp19 = ::haxegon::Text_obj::typeface->__get(tmp18).StaticCast< ::haxegon::util::Fontclass >();		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(65)
				::String tmp20 = text;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(65)
				tmp19->tf_ttf->set_text(tmp20);
				HX_STACK_LINE(66)
				Float tmp21 = ::haxegon::Text_obj::input_textxp;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(66)
				int tmp22 = ::haxegon::Text_obj::currentindex;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(66)
				::haxegon::util::Fontclass tmp23 = ::haxegon::Text_obj::typeface->__get(tmp22).StaticCast< ::haxegon::util::Fontclass >();		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(66)
				Float tmp24 = tmp23->tf_ttf->get_textWidth();		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(66)
				int tmp25 = ::Math_obj::floor(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(66)
				Float tmp26 = (tmp21 + tmp25);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(66)
				::haxegon::Text_obj::input_responsexp = tmp26;
			}
		}
		HX_STACK_LINE(68)
		::haxegon::Text_obj::input_responseyp = y;
		HX_STACK_LINE(70)
		::haxegon::Text_obj::input_text = text;
		HX_STACK_LINE(71)
		::String tmp14 = ::haxegon::Text_obj::inputtext;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(71)
		::haxegon::Text_obj::input_response = tmp14;
		HX_STACK_LINE(72)
		::haxegon::Text_obj::input_textcol = col;
		HX_STACK_LINE(73)
		::haxegon::Text_obj::input_responsecol = responsecol;
		HX_STACK_LINE(74)
		::haxegon::Text_obj::input_checkfortext();
		HX_STACK_LINE(76)
		bool tmp15 = ::haxegon::Input_obj::justpressed(::haxegon::Key_obj::ENTER);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(76)
		bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(76)
		if ((tmp15)){
			HX_STACK_LINE(76)
			::String tmp17 = ::haxegon::Text_obj::inputtext;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(76)
			::String tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(76)
			tmp16 = (tmp18 != HX_HCSTRING("","\x00","\x00","\x00","\x00"));
		}
		else{
			HX_STACK_LINE(76)
			tmp16 = false;
		}
		HX_STACK_LINE(76)
		if ((tmp16)){
			HX_STACK_LINE(77)
			return true;
		}
		HX_STACK_LINE(79)
		return false;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(Text_obj,input,return )

::String Text_obj::getinput( ){
	HX_STACK_FRAME("haxegon.Text","getinput",0x7669fb67,"haxegon.Text.getinput","haxegon/Text.hx",83,0xb667cca2)
	HX_STACK_LINE(84)
	::String tmp = ::haxegon::Text_obj::inputtext;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(84)
	::String response = tmp;		HX_STACK_VAR(response,"response");
	HX_STACK_LINE(85)
	::String tmp1 = ::haxegon::Text_obj::inputtext;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(85)
	::haxegon::Text_obj::lastentry = tmp1;
	HX_STACK_LINE(86)
	::haxegon::Text_obj::inputtext = HX_HCSTRING("","\x00","\x00","\x00","\x00");
	HX_STACK_LINE(87)
	::haxegon::Input_obj::keybuffer = HX_HCSTRING("","\x00","\x00","\x00","\x00");
	HX_STACK_LINE(88)
	::haxegon::Text_obj::input_show = (int)0;
	HX_STACK_LINE(90)
	::String tmp2 = response;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(90)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Text_obj,getinput,return )

Void Text_obj::drawstringinput( ){
{
		HX_STACK_FRAME("haxegon.Text","drawstringinput",0x838c24c2,"haxegon.Text.drawstringinput","haxegon/Text.hx",93,0xb667cca2)
		HX_STACK_LINE(94)
		int tmp = ::haxegon::Text_obj::input_show;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(94)
		bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(94)
		if ((tmp1)){
			HX_STACK_LINE(95)
			::String tmp2 = ::haxegon::Text_obj::input_font;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(95)
			Float tmp3 = ::haxegon::Text_obj::input_textsize;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(95)
			::haxegon::Text_obj::setfont(tmp2,tmp3);
			HX_STACK_LINE(96)
			(::haxegon::Text_obj::input_cursorglow)++;
			HX_STACK_LINE(97)
			int tmp4 = ::haxegon::Text_obj::input_cursorglow;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(97)
			bool tmp5 = (tmp4 >= (int)96);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(97)
			if ((tmp5)){
				HX_STACK_LINE(97)
				::haxegon::Text_obj::input_cursorglow = (int)0;
			}
			HX_STACK_LINE(99)
			Float tmp6 = ::haxegon::Text_obj::input_textxp;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(99)
			Float tmp7 = ::haxegon::Text_obj::input_textyp;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(99)
			::String tmp8 = ::haxegon::Text_obj::input_text;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(99)
			int tmp9 = ::haxegon::Text_obj::input_textcol;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(99)
			::haxegon::Text_obj::display(tmp6,tmp7,tmp8,tmp9);
			HX_STACK_LINE(100)
			::String tmp10 = ::haxegon::Text_obj::input_text;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(100)
			int tmp11 = tmp10.length;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(100)
			int tmp12 = ::haxegon::Text_obj::inputmaxlength;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(100)
			bool tmp13 = (tmp11 < tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(100)
			if ((tmp13)){
				HX_STACK_LINE(101)
				int tmp14 = ::haxegon::Text_obj::input_cursorglow;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(101)
				int tmp15 = hx::Mod(tmp14,(int)48);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(101)
				bool tmp16 = (tmp15 < (int)24);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(101)
				if ((tmp16)){
					HX_STACK_LINE(102)
					Float tmp17 = ::haxegon::Text_obj::input_responsexp;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(102)
					Float tmp18 = ::haxegon::Text_obj::input_responseyp;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(102)
					::String tmp19 = ::haxegon::Text_obj::input_response;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(102)
					int tmp20 = ::haxegon::Text_obj::input_responsecol;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(102)
					::haxegon::Text_obj::display(tmp17,tmp18,tmp19,tmp20);
				}
				else{
					HX_STACK_LINE(104)
					Float tmp17 = ::haxegon::Text_obj::input_responsexp;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(104)
					Float tmp18 = ::haxegon::Text_obj::input_responseyp;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(104)
					::String tmp19 = ::haxegon::Text_obj::input_response;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(104)
					::String tmp20 = (tmp19 + HX_HCSTRING("_","\x5f","\x00","\x00","\x00"));		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(104)
					int tmp21 = ::haxegon::Text_obj::input_responsecol;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(104)
					::haxegon::Text_obj::display(tmp17,tmp18,tmp20,tmp21);
				}
			}
			else{
				HX_STACK_LINE(107)
				Float tmp14 = ::haxegon::Text_obj::input_responsexp;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(107)
				Float tmp15 = ::haxegon::Text_obj::input_responseyp;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(107)
				::String tmp16 = ::haxegon::Text_obj::input_response;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(107)
				int tmp17 = ::haxegon::Text_obj::input_responsecol;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(107)
				::haxegon::Text_obj::display(tmp14,tmp15,tmp16,tmp17);
			}
		}
		HX_STACK_LINE(111)
		(::haxegon::Text_obj::input_show)--;
		HX_STACK_LINE(112)
		int tmp2 = ::haxegon::Text_obj::input_show;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(112)
		bool tmp3 = (tmp2 < (int)0);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(112)
		if ((tmp3)){
			HX_STACK_LINE(112)
			::haxegon::Text_obj::input_show = (int)0;
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Text_obj,drawstringinput,(void))

Void Text_obj::wordwrap( Dynamic textwidth){
{
		HX_STACK_FRAME("haxegon.Text","wordwrap",0x01a48047,"haxegon.Text.wordwrap","haxegon/Text.hx",116,0xb667cca2)
		HX_STACK_ARG(textwidth,"textwidth")
		HX_STACK_LINE(117)
		bool tmp = (textwidth == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(117)
		if ((tmp)){
			HX_STACK_LINE(118)
			::haxegon::Text_obj::wordwrap_width = (int)0;
		}
		else{
			HX_STACK_LINE(120)
			::haxegon::Text_obj::wordwrap_width = textwidth;
		}
		HX_STACK_LINE(122)
		int tmp1 = ::haxegon::Text_obj::wordwrap_width;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(122)
		bool tmp2 = (tmp1 < (int)10);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(122)
		if ((tmp2)){
			HX_STACK_LINE(122)
			::haxegon::Text_obj::wordwrap_width = (int)0;
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Text_obj,wordwrap,(void))

Void Text_obj::dowordwrap( int textwidth,::String txt){
{
		HX_STACK_FRAME("haxegon.Text","dowordwrap",0xb5036d92,"haxegon.Text.dowordwrap","haxegon/Text.hx",127,0xb667cca2)
		HX_STACK_ARG(textwidth,"textwidth")
		HX_STACK_ARG(txt,"txt")
		HX_STACK_LINE(128)
		::haxegon::Text_obj::wordwrap_text = HX_HCSTRING("","\x00","\x00","\x00","\x00");
		HX_STACK_LINE(129)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(130)
		::String currentchunk = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(currentchunk,"currentchunk");
		HX_STACK_LINE(132)
		while((true)){
			HX_STACK_LINE(132)
			bool tmp = (i < txt.length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(132)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(132)
			if ((tmp1)){
				HX_STACK_LINE(132)
				break;
			}
			HX_STACK_LINE(133)
			int tmp2 = i;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(133)
			::String tmp3 = txt.substr(tmp2,(int)1);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(133)
			hx::AddEq(currentchunk,tmp3);
			HX_STACK_LINE(134)
			::String tmp4 = currentchunk;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(134)
			Float tmp5 = ::haxegon::Text_obj::len(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(134)
			int tmp6 = textwidth;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(134)
			bool tmp7 = (tmp5 >= tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(134)
			if ((tmp7)){
				HX_STACK_LINE(135)
				::String tmp8 = currentchunk;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(135)
				bool tmp9 = ::haxegon::S_obj::isinstring(tmp8,HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(135)
				if ((tmp9)){
					HX_STACK_LINE(136)
					while((true)){
						HX_STACK_LINE(136)
						int tmp10 = (currentchunk.length - (int)1);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(136)
						::String tmp11 = currentchunk.substr(tmp10,(int)1);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(136)
						bool tmp12 = (tmp11 != HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(136)
						bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(136)
						if ((tmp13)){
							HX_STACK_LINE(136)
							break;
						}
						HX_STACK_LINE(137)
						int tmp14 = (currentchunk.length - (int)1);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(137)
						::String tmp15 = currentchunk.substr((int)0,tmp14);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(137)
						currentchunk = tmp15;
						HX_STACK_LINE(138)
						(i)--;
					}
				}
				else{
					HX_STACK_LINE(141)
					int tmp10 = (currentchunk.length - (int)1);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(141)
					::String tmp11 = currentchunk.substr((int)0,tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(141)
					currentchunk = tmp11;
					HX_STACK_LINE(142)
					(i)--;
				}
				HX_STACK_LINE(144)
				::String tmp10 = (currentchunk + HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(144)
				hx::AddEq(::haxegon::Text_obj::wordwrap_text,tmp10);
				HX_STACK_LINE(145)
				currentchunk = HX_HCSTRING("","\x00","\x00","\x00","\x00");
			}
			HX_STACK_LINE(147)
			(i)++;
		}
		HX_STACK_LINE(151)
		::String tmp = currentchunk;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(151)
		Float tmp1 = ::haxegon::Text_obj::len(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(151)
		bool tmp2 = (tmp1 > (int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(151)
		if ((tmp2)){
			HX_STACK_LINE(152)
			hx::AddEq(::haxegon::Text_obj::wordwrap_text,currentchunk);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Text_obj,dowordwrap,(void))

Float Text_obj::currentlen( ){
	HX_STACK_FRAME("haxegon.Text","currentlen",0xd28383af,"haxegon.Text.currentlen","haxegon/Text.hx",156,0xb667cca2)
	HX_STACK_LINE(157)
	int tmp = ::haxegon::Text_obj::currentindex;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(157)
	::haxegon::util::Fontclass tmp1 = ::haxegon::Text_obj::typeface->__get(tmp).StaticCast< ::haxegon::util::Fontclass >();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(157)
	::String tmp2 = tmp1->type;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(157)
	bool tmp3 = (tmp2 == HX_HCSTRING("ttf","\xe6","\x6a","\x58","\x00"));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(157)
	if ((tmp3)){
		HX_STACK_LINE(158)
		int tmp4 = ::haxegon::Text_obj::currentindex;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(158)
		::haxegon::util::Fontclass tmp5 = ::haxegon::Text_obj::typeface->__get(tmp4).StaticCast< ::haxegon::util::Fontclass >();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(158)
		Float tmp6 = tmp5->tf_ttf->get_textWidth();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(158)
		return tmp6;
	}
	else{
		HX_STACK_LINE(159)
		int tmp4 = ::haxegon::Text_obj::currentindex;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(159)
		::haxegon::util::Fontclass tmp5 = ::haxegon::Text_obj::typeface->__get(tmp4).StaticCast< ::haxegon::util::Fontclass >();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(159)
		::String tmp6 = tmp5->type;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(159)
		bool tmp7 = (tmp6 == HX_HCSTRING("bitmap","\xef","\x0f","\x0c","\xf1"));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(159)
		if ((tmp7)){
			HX_STACK_LINE(160)
			int tmp8 = ::haxegon::Text_obj::currentindex;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(160)
			::haxegon::util::Fontclass tmp9 = ::haxegon::Text_obj::typeface->__get(tmp8).StaticCast< ::haxegon::util::Fontclass >();		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(160)
			::String tmp10 = tmp9->tf_bitmap->text;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(160)
			::String text = tmp10;		HX_STACK_VAR(text,"text");
			HX_STACK_LINE(161)
			int numlines = (int)1;		HX_STACK_VAR(numlines,"numlines");
			HX_STACK_LINE(162)
			::String currentline = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(currentline,"currentline");
			HX_STACK_LINE(163)
			int longestline = (int)-1;		HX_STACK_VAR(longestline,"longestline");
			HX_STACK_LINE(164)
			int thislength;		HX_STACK_VAR(thislength,"thislength");
			HX_STACK_LINE(165)
			int i = (int)0;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(166)
			::String tmp11 = text;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(166)
			bool tmp12 = ::haxegon::S_obj::isinstring(tmp11,HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(166)
			if ((tmp12)){
				HX_STACK_LINE(167)
				while((true)){
					HX_STACK_LINE(167)
					bool tmp13 = (i < text.length);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(167)
					bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(167)
					if ((tmp14)){
						HX_STACK_LINE(167)
						break;
					}
					HX_STACK_LINE(168)
					int tmp15 = i;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(168)
					::String tmp16 = text.substr(tmp15,(int)1);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(168)
					bool tmp17 = (tmp16 == HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(168)
					if ((tmp17)){
						HX_STACK_LINE(169)
						(numlines)++;
						HX_STACK_LINE(170)
						int tmp18 = ::haxegon::Text_obj::currentindex;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(170)
						::haxegon::util::Fontclass tmp19 = ::haxegon::Text_obj::typeface->__get(tmp18).StaticCast< ::haxegon::util::Fontclass >();		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(170)
						::String tmp20 = currentline;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(170)
						Float tmp21 = tmp19->tf_bitmap->getStringWidth(tmp20,false);		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(170)
						int tmp22 = ::Math_obj::round(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(170)
						thislength = tmp22;
						HX_STACK_LINE(171)
						bool tmp23 = (thislength > longestline);		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(171)
						if ((tmp23)){
							HX_STACK_LINE(171)
							longestline = thislength;
						}
						HX_STACK_LINE(172)
						currentline = HX_HCSTRING("","\x00","\x00","\x00","\x00");
					}
					else{
						HX_STACK_LINE(173)
						int tmp18 = i;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(173)
						::String tmp19 = text.substr(tmp18,(int)1);		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(173)
						hx::AddEq(currentline,tmp19);
					}
					HX_STACK_LINE(174)
					(i)++;
				}
				HX_STACK_LINE(176)
				int tmp13 = ::haxegon::Text_obj::currentindex;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(176)
				::haxegon::util::Fontclass tmp14 = ::haxegon::Text_obj::typeface->__get(tmp13).StaticCast< ::haxegon::util::Fontclass >();		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(176)
				::String tmp15 = currentline;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(176)
				Float tmp16 = tmp14->tf_bitmap->getStringWidth(tmp15,false);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(176)
				int tmp17 = ::Math_obj::round(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(176)
				thislength = tmp17;
				HX_STACK_LINE(177)
				bool tmp18 = (thislength > longestline);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(177)
				if ((tmp18)){
					HX_STACK_LINE(177)
					longestline = thislength;
				}
			}
			else{
				HX_STACK_LINE(179)
				int tmp13 = ::haxegon::Text_obj::currentindex;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(179)
				::haxegon::util::Fontclass tmp14 = ::haxegon::Text_obj::typeface->__get(tmp13).StaticCast< ::haxegon::util::Fontclass >();		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(179)
				::String tmp15 = text;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(179)
				Float tmp16 = tmp14->tf_bitmap->getStringWidth(tmp15,false);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(179)
				int tmp17 = ::Math_obj::round(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(179)
				longestline = tmp17;
			}
			HX_STACK_LINE(181)
			int tmp13 = longestline;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(181)
			return tmp13;
		}
	}
	HX_STACK_LINE(183)
	return (int)0;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Text_obj,currentlen,return )

Float Text_obj::currentheight( ){
	HX_STACK_FRAME("haxegon.Text","currentheight",0xcf8fb44d,"haxegon.Text.currentheight","haxegon/Text.hx",186,0xb667cca2)
	HX_STACK_LINE(187)
	int tmp = ::haxegon::Text_obj::currentindex;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(187)
	::haxegon::util::Fontclass tmp1 = ::haxegon::Text_obj::typeface->__get(tmp).StaticCast< ::haxegon::util::Fontclass >();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(187)
	::String tmp2 = tmp1->type;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(187)
	bool tmp3 = (tmp2 == HX_HCSTRING("ttf","\xe6","\x6a","\x58","\x00"));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(187)
	if ((tmp3)){
		HX_STACK_LINE(188)
		int tmp4 = ::haxegon::Text_obj::currentindex;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(188)
		::haxegon::util::Fontclass tmp5 = ::haxegon::Text_obj::typeface->__get(tmp4).StaticCast< ::haxegon::util::Fontclass >();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(188)
		Float tmp6 = tmp5->tf_ttf->get_textHeight();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(188)
		return tmp6;
	}
	else{
		HX_STACK_LINE(189)
		int tmp4 = ::haxegon::Text_obj::currentindex;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(189)
		::haxegon::util::Fontclass tmp5 = ::haxegon::Text_obj::typeface->__get(tmp4).StaticCast< ::haxegon::util::Fontclass >();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(189)
		::String tmp6 = tmp5->type;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(189)
		bool tmp7 = (tmp6 == HX_HCSTRING("bitmap","\xef","\x0f","\x0c","\xf1"));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(189)
		if ((tmp7)){
			HX_STACK_LINE(190)
			int tmp8 = ::haxegon::Text_obj::currentindex;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(190)
			::haxegon::util::Fontclass tmp9 = ::haxegon::Text_obj::typeface->__get(tmp8).StaticCast< ::haxegon::util::Fontclass >();		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(190)
			Float tmp10 = tmp9->tf_bitmap->get_textHeight();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(190)
			Float tmp11 = ::haxegon::Text_obj::currentsize;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(190)
			Float tmp12 = (tmp10 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(190)
			return tmp12;
		}
	}
	HX_STACK_LINE(192)
	return (int)0;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Text_obj,currentheight,return )

Float Text_obj::len( ::String t){
	HX_STACK_FRAME("haxegon.Text","len",0x117cd102,"haxegon.Text.len","haxegon/Text.hx",195,0xb667cca2)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(196)
	int tmp = ::haxegon::Text_obj::currentindex;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(196)
	::haxegon::util::Fontclass tmp1 = ::haxegon::Text_obj::typeface->__get(tmp).StaticCast< ::haxegon::util::Fontclass >();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(196)
	::String tmp2 = tmp1->type;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(196)
	bool tmp3 = (tmp2 == HX_HCSTRING("ttf","\xe6","\x6a","\x58","\x00"));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(196)
	if ((tmp3)){
		HX_STACK_LINE(197)
		int tmp4 = ::haxegon::Text_obj::currentindex;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(197)
		::haxegon::util::Fontclass tmp5 = ::haxegon::Text_obj::typeface->__get(tmp4).StaticCast< ::haxegon::util::Fontclass >();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(197)
		::String tmp6 = t;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(197)
		tmp5->tf_ttf->set_text(tmp6);
		HX_STACK_LINE(198)
		int tmp7 = ::haxegon::Text_obj::currentindex;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(198)
		::haxegon::util::Fontclass tmp8 = ::haxegon::Text_obj::typeface->__get(tmp7).StaticCast< ::haxegon::util::Fontclass >();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(198)
		Float tmp9 = tmp8->tf_ttf->get_textWidth();		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(198)
		return tmp9;
	}
	else{
		HX_STACK_LINE(199)
		int tmp4 = ::haxegon::Text_obj::currentindex;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(199)
		::haxegon::util::Fontclass tmp5 = ::haxegon::Text_obj::typeface->__get(tmp4).StaticCast< ::haxegon::util::Fontclass >();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(199)
		::String tmp6 = tmp5->type;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(199)
		bool tmp7 = (tmp6 == HX_HCSTRING("bitmap","\xef","\x0f","\x0c","\xf1"));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(199)
		if ((tmp7)){
			HX_STACK_LINE(200)
			::String text = t;		HX_STACK_VAR(text,"text");
			HX_STACK_LINE(201)
			int numlines = (int)1;		HX_STACK_VAR(numlines,"numlines");
			HX_STACK_LINE(202)
			::String currentline = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(currentline,"currentline");
			HX_STACK_LINE(203)
			int longestline = (int)-1;		HX_STACK_VAR(longestline,"longestline");
			HX_STACK_LINE(204)
			int thislength;		HX_STACK_VAR(thislength,"thislength");
			HX_STACK_LINE(205)
			int i = (int)0;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(206)
			::String tmp8 = text;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(206)
			bool tmp9 = ::haxegon::S_obj::isinstring(tmp8,HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(206)
			if ((tmp9)){
				HX_STACK_LINE(207)
				while((true)){
					HX_STACK_LINE(207)
					bool tmp10 = (i < text.length);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(207)
					bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(207)
					if ((tmp11)){
						HX_STACK_LINE(207)
						break;
					}
					HX_STACK_LINE(208)
					int tmp12 = i;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(208)
					::String tmp13 = text.substr(tmp12,(int)1);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(208)
					bool tmp14 = (tmp13 == HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(208)
					if ((tmp14)){
						HX_STACK_LINE(209)
						(numlines)++;
						HX_STACK_LINE(210)
						int tmp15 = ::haxegon::Text_obj::currentindex;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(210)
						::haxegon::util::Fontclass tmp16 = ::haxegon::Text_obj::typeface->__get(tmp15).StaticCast< ::haxegon::util::Fontclass >();		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(210)
						::String tmp17 = currentline;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(210)
						Float tmp18 = tmp16->tf_bitmap->getStringWidth(tmp17,false);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(210)
						int tmp19 = ::Math_obj::round(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(210)
						thislength = tmp19;
						HX_STACK_LINE(211)
						bool tmp20 = (thislength > longestline);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(211)
						if ((tmp20)){
							HX_STACK_LINE(211)
							longestline = thislength;
						}
						HX_STACK_LINE(212)
						currentline = HX_HCSTRING("","\x00","\x00","\x00","\x00");
					}
					else{
						HX_STACK_LINE(213)
						int tmp15 = i;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(213)
						::String tmp16 = text.substr(tmp15,(int)1);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(213)
						hx::AddEq(currentline,tmp16);
					}
					HX_STACK_LINE(214)
					(i)++;
				}
				HX_STACK_LINE(216)
				int tmp10 = ::haxegon::Text_obj::currentindex;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(216)
				::haxegon::util::Fontclass tmp11 = ::haxegon::Text_obj::typeface->__get(tmp10).StaticCast< ::haxegon::util::Fontclass >();		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(216)
				::String tmp12 = currentline;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(216)
				Float tmp13 = tmp11->tf_bitmap->getStringWidth(tmp12,false);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(216)
				int tmp14 = ::Math_obj::round(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(216)
				thislength = tmp14;
				HX_STACK_LINE(217)
				bool tmp15 = (thislength > longestline);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(217)
				if ((tmp15)){
					HX_STACK_LINE(217)
					longestline = thislength;
				}
			}
			else{
				HX_STACK_LINE(219)
				int tmp10 = ::haxegon::Text_obj::currentindex;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(219)
				::haxegon::util::Fontclass tmp11 = ::haxegon::Text_obj::typeface->__get(tmp10).StaticCast< ::haxegon::util::Fontclass >();		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(219)
				::String tmp12 = text;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(219)
				Float tmp13 = tmp11->tf_bitmap->getStringWidth(tmp12,false);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(219)
				int tmp14 = ::Math_obj::round(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(219)
				longestline = tmp14;
			}
			HX_STACK_LINE(221)
			int tmp10 = longestline;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(221)
			return tmp10;
		}
	}
	HX_STACK_LINE(223)
	return (int)0;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Text_obj,len,return )

Float Text_obj::height( ::String text){
	HX_STACK_FRAME("haxegon.Text","height",0x8e813cda,"haxegon.Text.height","haxegon/Text.hx",226,0xb667cca2)
	HX_STACK_ARG(text,"text")
	HX_STACK_LINE(227)
	int linecount = (int)1;		HX_STACK_VAR(linecount,"linecount");
	HX_STACK_LINE(228)
	int tmp = ::haxegon::Text_obj::wordwrap_width;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(228)
	bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(228)
	if ((tmp1)){
		HX_STACK_LINE(229)
		::String tmp2 = text;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(229)
		Float tmp3 = ::haxegon::Text_obj::len(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(229)
		int tmp4 = ::haxegon::Text_obj::wordwrap_width;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(229)
		bool tmp5 = (tmp3 >= tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(229)
		if ((tmp5)){
			HX_STACK_LINE(230)
			int tmp6 = ::haxegon::Text_obj::wordwrap_width;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(230)
			::String tmp7 = text;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(230)
			::haxegon::Text_obj::dowordwrap(tmp6,tmp7);
			HX_STACK_LINE(231)
			{
				HX_STACK_LINE(231)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(231)
				::String tmp8 = ::haxegon::Text_obj::wordwrap_text;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(231)
				int _g = tmp8.length;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(231)
				while((true)){
					HX_STACK_LINE(231)
					bool tmp9 = (_g1 < _g);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(231)
					bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(231)
					if ((tmp10)){
						HX_STACK_LINE(231)
						break;
					}
					HX_STACK_LINE(231)
					int tmp11 = (_g1)++;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(231)
					int i = tmp11;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(231)
					::String tmp12 = ::haxegon::Text_obj::wordwrap_text;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(231)
					int tmp13 = i;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(231)
					::String tmp14 = tmp12.substr(tmp13,(int)1);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(231)
					bool tmp15 = (tmp14 == HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(231)
					if ((tmp15)){
						HX_STACK_LINE(231)
						(linecount)++;
					}
				}
			}
		}
		else{
			HX_STACK_LINE(233)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(233)
			int _g = text.length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(233)
			while((true)){
				HX_STACK_LINE(233)
				bool tmp6 = (_g1 < _g);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(233)
				bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(233)
				if ((tmp7)){
					HX_STACK_LINE(233)
					break;
				}
				HX_STACK_LINE(233)
				int tmp8 = (_g1)++;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(233)
				int i = tmp8;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(233)
				int tmp9 = i;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(233)
				::String tmp10 = text.substr(tmp9,(int)1);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(233)
				bool tmp11 = (tmp10 == HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(233)
				if ((tmp11)){
					HX_STACK_LINE(233)
					(linecount)++;
				}
			}
		}
	}
	else{
		HX_STACK_LINE(236)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(236)
		int _g = text.length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(236)
		while((true)){
			HX_STACK_LINE(236)
			bool tmp2 = (_g1 < _g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(236)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(236)
			if ((tmp3)){
				HX_STACK_LINE(236)
				break;
			}
			HX_STACK_LINE(236)
			int tmp4 = (_g1)++;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(236)
			int i = tmp4;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(236)
			int tmp5 = i;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(236)
			::String tmp6 = text.substr(tmp5,(int)1);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(236)
			bool tmp7 = (tmp6 == HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(236)
			if ((tmp7)){
				HX_STACK_LINE(236)
				(linecount)++;
			}
		}
	}
	HX_STACK_LINE(239)
	int tmp2 = ::haxegon::Text_obj::currentindex;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(239)
	::haxegon::util::Fontclass tmp3 = ::haxegon::Text_obj::typeface->__get(tmp2).StaticCast< ::haxegon::util::Fontclass >();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(239)
	::String tmp4 = tmp3->type;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(239)
	bool tmp5 = (tmp4 == HX_HCSTRING("ttf","\xe6","\x6a","\x58","\x00"));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(239)
	if ((tmp5)){
		HX_STACK_LINE(240)
		int tmp6 = ::haxegon::Text_obj::currentindex;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(240)
		::haxegon::util::Fontclass tmp7 = ::haxegon::Text_obj::typeface->__get(tmp6).StaticCast< ::haxegon::util::Fontclass >();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(240)
		::String tmp8 = tmp7->tf_ttf->get_text();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(240)
		::String oldtext = tmp8;		HX_STACK_VAR(oldtext,"oldtext");
		HX_STACK_LINE(241)
		int tmp9 = ::haxegon::Text_obj::currentindex;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(241)
		::haxegon::util::Fontclass tmp10 = ::haxegon::Text_obj::typeface->__get(tmp9).StaticCast< ::haxegon::util::Fontclass >();		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(241)
		tmp10->tf_ttf->set_text(HX_HCSTRING("???","\x1f","\x05","\x30","\x00"));
		HX_STACK_LINE(242)
		int tmp11 = ::haxegon::Text_obj::currentindex;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(242)
		::haxegon::util::Fontclass tmp12 = ::haxegon::Text_obj::typeface->__get(tmp11).StaticCast< ::haxegon::util::Fontclass >();		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(242)
		Float tmp13 = tmp12->tf_ttf->get_textHeight();		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(242)
		Float h = tmp13;		HX_STACK_VAR(h,"h");
		HX_STACK_LINE(243)
		int tmp14 = ::haxegon::Text_obj::currentindex;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(243)
		::haxegon::util::Fontclass tmp15 = ::haxegon::Text_obj::typeface->__get(tmp14).StaticCast< ::haxegon::util::Fontclass >();		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(243)
		::String tmp16 = oldtext;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(243)
		tmp15->tf_ttf->set_text(tmp16);
		HX_STACK_LINE(244)
		Float tmp17 = (h * linecount);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(244)
		return tmp17;
	}
	else{
		HX_STACK_LINE(245)
		int tmp6 = ::haxegon::Text_obj::currentindex;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(245)
		::haxegon::util::Fontclass tmp7 = ::haxegon::Text_obj::typeface->__get(tmp6).StaticCast< ::haxegon::util::Fontclass >();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(245)
		::String tmp8 = tmp7->type;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(245)
		bool tmp9 = (tmp8 == HX_HCSTRING("bitmap","\xef","\x0f","\x0c","\xf1"));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(245)
		if ((tmp9)){
			HX_STACK_LINE(246)
			int tmp10 = ::haxegon::Text_obj::currentindex;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(246)
			::haxegon::util::Fontclass tmp11 = ::haxegon::Text_obj::typeface->__get(tmp10).StaticCast< ::haxegon::util::Fontclass >();		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(246)
			tmp11->tf_bitmap->set_text(HX_HCSTRING("???","\x1f","\x05","\x30","\x00"));
			HX_STACK_LINE(247)
			int tmp12 = ::haxegon::Text_obj::currentindex;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(247)
			::haxegon::util::Fontclass tmp13 = ::haxegon::Text_obj::typeface->__get(tmp12).StaticCast< ::haxegon::util::Fontclass >();		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(247)
			Float tmp14 = tmp13->height;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(247)
			Float tmp15 = ::haxegon::Text_obj::currentsize;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(247)
			Float tmp16 = (tmp14 * tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(247)
			int tmp17 = linecount;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(247)
			Float tmp18 = (tmp16 * tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(247)
			return tmp18;
		}
	}
	HX_STACK_LINE(249)
	return (int)0;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Text_obj,height,return )

Float Text_obj::t1;

Float Text_obj::t2;

Float Text_obj::t3;

Float Text_obj::cachealignx( Float x,int c){
	HX_STACK_FRAME("haxegon.Text","cachealignx",0xf2ce4802,"haxegon.Text.cachealignx","haxegon/Text.hx",256,0xb667cca2)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(c,"c")
	HX_STACK_LINE(257)
	bool tmp = (x <= (int)-5000);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(257)
	if ((tmp)){
		HX_STACK_LINE(258)
		Float tmp1 = x;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(258)
		int tmp2 = ::haxegon::Text_obj::CENTER;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(258)
		Float tmp3 = (tmp1 - tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(258)
		::haxegon::Text_obj::t1 = tmp3;
		HX_STACK_LINE(259)
		Float tmp4 = x;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(259)
		int tmp5 = ::haxegon::Text_obj::LEFT;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(259)
		Float tmp6 = (tmp4 - tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(259)
		::haxegon::Text_obj::t2 = tmp6;
		HX_STACK_LINE(260)
		Float tmp7 = x;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(260)
		int tmp8 = ::haxegon::Text_obj::RIGHT;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(260)
		Float tmp9 = (tmp7 - tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(260)
		::haxegon::Text_obj::t3 = tmp9;
		HX_STACK_LINE(261)
		Float tmp10 = ::haxegon::Text_obj::t1;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(261)
		bool tmp11 = (tmp10 == (int)0);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(261)
		bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(261)
		bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(261)
		if ((tmp12)){
			HX_STACK_LINE(261)
			Float tmp14 = ::haxegon::Text_obj::t1;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(261)
			Float tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(261)
			Float tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(261)
			Float tmp17 = ::Math_obj::abs(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(261)
			Float tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(261)
			Float tmp19 = ::haxegon::Text_obj::t2;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(261)
			Float tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(261)
			Float tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(261)
			Float tmp22 = ::Math_obj::abs(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(261)
			Float tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(261)
			bool tmp24 = (tmp18 < tmp23);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(261)
			bool tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(261)
			bool tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(261)
			if ((tmp26)){
				HX_STACK_LINE(261)
				Float tmp27 = ::haxegon::Text_obj::t1;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(261)
				Float tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(261)
				Float tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(261)
				Float tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(261)
				Float tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(261)
				Float tmp32 = ::Math_obj::abs(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(261)
				Float tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(261)
				Float tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(261)
				Float tmp35 = ::haxegon::Text_obj::t3;		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(261)
				Float tmp36 = tmp35;		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(261)
				Float tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(261)
				Float tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(261)
				Float tmp39 = tmp38;		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(261)
				Float tmp40 = ::Math_obj::abs(tmp39);		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(261)
				Float tmp41 = tmp40;		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(261)
				Float tmp42 = tmp41;		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(261)
				tmp13 = (tmp34 < tmp42);
			}
			else{
				HX_STACK_LINE(261)
				tmp13 = false;
			}
		}
		else{
			HX_STACK_LINE(261)
			tmp13 = true;
		}
		HX_STACK_LINE(261)
		if ((tmp13)){
			HX_STACK_LINE(262)
			Float tmp14 = ::haxegon::Text_obj::t1;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(262)
			int tmp15 = ::haxegon::Gfx_obj::screenwidthmid;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(262)
			::openfl::display::BitmapData tmp16 = ::haxegon::Text_obj::cachedtext->__get(c).StaticCast< ::openfl::display::BitmapData >();		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(262)
			int tmp17 = tmp16->width;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(262)
			Float tmp18 = ::haxegon::Text_obj::currentsize;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(262)
			Float tmp19 = (tmp17 * tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(262)
			Float tmp20 = (Float(tmp19) / Float((int)2));		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(262)
			Float tmp21 = (tmp15 - tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(262)
			int tmp22 = ::Math_obj::floor(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(262)
			Float tmp23 = (tmp14 + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(262)
			return tmp23;
		}
		else{
			HX_STACK_LINE(263)
			Float tmp14 = ::haxegon::Text_obj::t2;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(263)
			bool tmp15 = (tmp14 == (int)0);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(263)
			bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(263)
			bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(263)
			if ((tmp16)){
				HX_STACK_LINE(263)
				Float tmp18 = ::haxegon::Text_obj::t2;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(263)
				Float tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(263)
				Float tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(263)
				Float tmp21 = ::Math_obj::abs(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(263)
				Float tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(263)
				Float tmp23 = ::haxegon::Text_obj::t1;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(263)
				Float tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(263)
				Float tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(263)
				Float tmp26 = ::Math_obj::abs(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(263)
				Float tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(263)
				bool tmp28 = (tmp22 < tmp27);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(263)
				bool tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(263)
				bool tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(263)
				if ((tmp30)){
					HX_STACK_LINE(263)
					Float tmp31 = ::haxegon::Text_obj::t2;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(263)
					Float tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(263)
					Float tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(263)
					Float tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(263)
					Float tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(263)
					Float tmp36 = ::Math_obj::abs(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(263)
					Float tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(263)
					Float tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(263)
					Float tmp39 = ::haxegon::Text_obj::t3;		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(263)
					Float tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(263)
					Float tmp41 = tmp40;		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(263)
					Float tmp42 = tmp41;		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(263)
					Float tmp43 = tmp42;		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(263)
					Float tmp44 = ::Math_obj::abs(tmp43);		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(263)
					Float tmp45 = tmp44;		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(263)
					Float tmp46 = tmp45;		HX_STACK_VAR(tmp46,"tmp46");
					HX_STACK_LINE(263)
					tmp17 = (tmp38 < tmp46);
				}
				else{
					HX_STACK_LINE(263)
					tmp17 = false;
				}
			}
			else{
				HX_STACK_LINE(263)
				tmp17 = true;
			}
			HX_STACK_LINE(263)
			if ((tmp17)){
				HX_STACK_LINE(264)
				Float tmp18 = ::haxegon::Text_obj::t2;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(264)
				return tmp18;
			}
			else{
				HX_STACK_LINE(266)
				Float tmp18 = ::haxegon::Text_obj::t3;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(266)
				int tmp19 = ::haxegon::Gfx_obj::screenwidth;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(266)
				::openfl::display::BitmapData tmp20 = ::haxegon::Text_obj::cachedtext->__get(c).StaticCast< ::openfl::display::BitmapData >();		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(266)
				int tmp21 = tmp20->width;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(266)
				Float tmp22 = ::haxegon::Text_obj::currentsize;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(266)
				Float tmp23 = (tmp21 * tmp22);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(266)
				Float tmp24 = (tmp19 - tmp23);		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(266)
				int tmp25 = ::Math_obj::floor(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(266)
				Float tmp26 = (tmp18 + tmp25);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(266)
				return tmp26;
			}
		}
	}
	HX_STACK_LINE(270)
	Float tmp1 = x;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(270)
	int tmp2 = ::Math_obj::floor(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(270)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Text_obj,cachealignx,return )

Float Text_obj::cachealigny( Float y,int c){
	HX_STACK_FRAME("haxegon.Text","cachealigny",0xf2ce4803,"haxegon.Text.cachealigny","haxegon/Text.hx",273,0xb667cca2)
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(c,"c")
	HX_STACK_LINE(274)
	bool tmp = (y <= (int)-5000);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(274)
	if ((tmp)){
		HX_STACK_LINE(275)
		Float tmp1 = y;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(275)
		int tmp2 = ::haxegon::Text_obj::CENTER;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(275)
		Float tmp3 = (tmp1 - tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(275)
		::haxegon::Text_obj::t1 = tmp3;
		HX_STACK_LINE(276)
		Float tmp4 = y;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(276)
		int tmp5 = ::haxegon::Text_obj::TOP;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(276)
		Float tmp6 = (tmp4 - tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(276)
		::haxegon::Text_obj::t2 = tmp6;
		HX_STACK_LINE(277)
		Float tmp7 = y;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(277)
		int tmp8 = ::haxegon::Text_obj::BOTTOM;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(277)
		Float tmp9 = (tmp7 - tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(277)
		::haxegon::Text_obj::t3 = tmp9;
		HX_STACK_LINE(278)
		Float tmp10 = ::haxegon::Text_obj::t1;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(278)
		bool tmp11 = (tmp10 == (int)0);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(278)
		bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(278)
		bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(278)
		if ((tmp12)){
			HX_STACK_LINE(278)
			Float tmp14 = ::haxegon::Text_obj::t1;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(278)
			Float tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(278)
			Float tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(278)
			Float tmp17 = ::Math_obj::abs(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(278)
			Float tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(278)
			Float tmp19 = ::haxegon::Text_obj::t2;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(278)
			Float tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(278)
			Float tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(278)
			Float tmp22 = ::Math_obj::abs(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(278)
			Float tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(278)
			bool tmp24 = (tmp18 < tmp23);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(278)
			bool tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(278)
			bool tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(278)
			if ((tmp26)){
				HX_STACK_LINE(278)
				Float tmp27 = ::haxegon::Text_obj::t1;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(278)
				Float tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(278)
				Float tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(278)
				Float tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(278)
				Float tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(278)
				Float tmp32 = ::Math_obj::abs(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(278)
				Float tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(278)
				Float tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(278)
				Float tmp35 = ::haxegon::Text_obj::t3;		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(278)
				Float tmp36 = tmp35;		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(278)
				Float tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(278)
				Float tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(278)
				Float tmp39 = tmp38;		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(278)
				Float tmp40 = ::Math_obj::abs(tmp39);		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(278)
				Float tmp41 = tmp40;		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(278)
				Float tmp42 = tmp41;		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(278)
				tmp13 = (tmp34 < tmp42);
			}
			else{
				HX_STACK_LINE(278)
				tmp13 = false;
			}
		}
		else{
			HX_STACK_LINE(278)
			tmp13 = true;
		}
		HX_STACK_LINE(278)
		if ((tmp13)){
			HX_STACK_LINE(279)
			Float tmp14 = ::haxegon::Text_obj::t1;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(279)
			int tmp15 = ::haxegon::Gfx_obj::screenheightmid;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(279)
			::openfl::display::BitmapData tmp16 = ::haxegon::Text_obj::cachedtext->__get(c).StaticCast< ::openfl::display::BitmapData >();		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(279)
			int tmp17 = tmp16->height;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(279)
			Float tmp18 = ::haxegon::Text_obj::currentsize;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(279)
			Float tmp19 = (tmp17 * tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(279)
			Float tmp20 = (Float(tmp19) / Float((int)2));		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(279)
			Float tmp21 = (tmp15 - tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(279)
			int tmp22 = ::Math_obj::floor(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(279)
			Float tmp23 = (tmp14 + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(279)
			return tmp23;
		}
		else{
			HX_STACK_LINE(280)
			Float tmp14 = ::haxegon::Text_obj::t2;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(280)
			bool tmp15 = (tmp14 == (int)0);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(280)
			bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(280)
			bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(280)
			if ((tmp16)){
				HX_STACK_LINE(280)
				Float tmp18 = ::haxegon::Text_obj::t2;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(280)
				Float tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(280)
				Float tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(280)
				Float tmp21 = ::Math_obj::abs(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(280)
				Float tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(280)
				Float tmp23 = ::haxegon::Text_obj::t1;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(280)
				Float tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(280)
				Float tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(280)
				Float tmp26 = ::Math_obj::abs(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(280)
				Float tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(280)
				bool tmp28 = (tmp22 < tmp27);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(280)
				bool tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(280)
				bool tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(280)
				if ((tmp30)){
					HX_STACK_LINE(280)
					Float tmp31 = ::haxegon::Text_obj::t2;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(280)
					Float tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(280)
					Float tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(280)
					Float tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(280)
					Float tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(280)
					Float tmp36 = ::Math_obj::abs(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(280)
					Float tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(280)
					Float tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(280)
					Float tmp39 = ::haxegon::Text_obj::t3;		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(280)
					Float tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(280)
					Float tmp41 = tmp40;		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(280)
					Float tmp42 = tmp41;		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(280)
					Float tmp43 = tmp42;		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(280)
					Float tmp44 = ::Math_obj::abs(tmp43);		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(280)
					Float tmp45 = tmp44;		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(280)
					Float tmp46 = tmp45;		HX_STACK_VAR(tmp46,"tmp46");
					HX_STACK_LINE(280)
					tmp17 = (tmp38 < tmp46);
				}
				else{
					HX_STACK_LINE(280)
					tmp17 = false;
				}
			}
			else{
				HX_STACK_LINE(280)
				tmp17 = true;
			}
			HX_STACK_LINE(280)
			if ((tmp17)){
				HX_STACK_LINE(281)
				Float tmp18 = ::haxegon::Text_obj::t2;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(281)
				return tmp18;
			}
			else{
				HX_STACK_LINE(283)
				Float tmp18 = ::haxegon::Text_obj::t3;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(283)
				int tmp19 = ::haxegon::Gfx_obj::screenheight;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(283)
				::openfl::display::BitmapData tmp20 = ::haxegon::Text_obj::cachedtext->__get(c).StaticCast< ::openfl::display::BitmapData >();		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(283)
				int tmp21 = tmp20->height;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(283)
				Float tmp22 = ::haxegon::Text_obj::currentsize;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(283)
				Float tmp23 = (tmp21 * tmp22);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(283)
				Float tmp24 = (tmp19 - tmp23);		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(283)
				int tmp25 = ::Math_obj::floor(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(283)
				Float tmp26 = (tmp18 + tmp25);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(283)
				return tmp26;
			}
		}
	}
	HX_STACK_LINE(287)
	Float tmp1 = y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(287)
	int tmp2 = ::Math_obj::floor(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(287)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Text_obj,cachealigny,return )

Float Text_obj::alignx( Float x){
	HX_STACK_FRAME("haxegon.Text","alignx",0xc9cfcb06,"haxegon.Text.alignx","haxegon/Text.hx",291,0xb667cca2)
	HX_STACK_ARG(x,"x")
	HX_STACK_LINE(292)
	bool tmp = (x <= (int)-5000);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(292)
	if ((tmp)){
		HX_STACK_LINE(293)
		Float tmp1 = x;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(293)
		int tmp2 = ::haxegon::Text_obj::CENTER;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(293)
		Float tmp3 = (tmp1 - tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(293)
		::haxegon::Text_obj::t1 = tmp3;
		HX_STACK_LINE(294)
		Float tmp4 = x;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(294)
		int tmp5 = ::haxegon::Text_obj::LEFT;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(294)
		Float tmp6 = (tmp4 - tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(294)
		::haxegon::Text_obj::t2 = tmp6;
		HX_STACK_LINE(295)
		Float tmp7 = x;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(295)
		int tmp8 = ::haxegon::Text_obj::RIGHT;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(295)
		Float tmp9 = (tmp7 - tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(295)
		::haxegon::Text_obj::t3 = tmp9;
		HX_STACK_LINE(296)
		Float tmp10 = ::haxegon::Text_obj::t1;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(296)
		bool tmp11 = (tmp10 == (int)0);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(296)
		bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(296)
		bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(296)
		if ((tmp12)){
			HX_STACK_LINE(296)
			Float tmp14 = ::haxegon::Text_obj::t1;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(296)
			Float tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(296)
			Float tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(296)
			Float tmp17 = ::Math_obj::abs(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(296)
			Float tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(296)
			Float tmp19 = ::haxegon::Text_obj::t2;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(296)
			Float tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(296)
			Float tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(296)
			Float tmp22 = ::Math_obj::abs(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(296)
			Float tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(296)
			bool tmp24 = (tmp18 < tmp23);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(296)
			bool tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(296)
			bool tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(296)
			if ((tmp26)){
				HX_STACK_LINE(296)
				Float tmp27 = ::haxegon::Text_obj::t1;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(296)
				Float tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(296)
				Float tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(296)
				Float tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(296)
				Float tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(296)
				Float tmp32 = ::Math_obj::abs(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(296)
				Float tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(296)
				Float tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(296)
				Float tmp35 = ::haxegon::Text_obj::t3;		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(296)
				Float tmp36 = tmp35;		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(296)
				Float tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(296)
				Float tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(296)
				Float tmp39 = tmp38;		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(296)
				Float tmp40 = ::Math_obj::abs(tmp39);		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(296)
				Float tmp41 = tmp40;		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(296)
				Float tmp42 = tmp41;		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(296)
				tmp13 = (tmp34 < tmp42);
			}
			else{
				HX_STACK_LINE(296)
				tmp13 = false;
			}
		}
		else{
			HX_STACK_LINE(296)
			tmp13 = true;
		}
		HX_STACK_LINE(296)
		if ((tmp13)){
			HX_STACK_LINE(297)
			Float tmp14 = ::haxegon::Text_obj::t1;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(297)
			int tmp15 = ::haxegon::Gfx_obj::screenwidthmid;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(297)
			Float tmp16 = ::haxegon::Text_obj::currentlen();		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(297)
			Float tmp17 = (Float(tmp16) / Float((int)2));		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(297)
			Float tmp18 = (tmp15 - tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(297)
			int tmp19 = ::Math_obj::floor(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(297)
			Float tmp20 = (tmp14 + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(297)
			return tmp20;
		}
		else{
			HX_STACK_LINE(298)
			Float tmp14 = ::haxegon::Text_obj::t2;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(298)
			bool tmp15 = (tmp14 == (int)0);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(298)
			bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(298)
			bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(298)
			if ((tmp16)){
				HX_STACK_LINE(298)
				Float tmp18 = ::haxegon::Text_obj::t2;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(298)
				Float tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(298)
				Float tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(298)
				Float tmp21 = ::Math_obj::abs(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(298)
				Float tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(298)
				Float tmp23 = ::haxegon::Text_obj::t1;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(298)
				Float tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(298)
				Float tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(298)
				Float tmp26 = ::Math_obj::abs(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(298)
				Float tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(298)
				bool tmp28 = (tmp22 < tmp27);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(298)
				bool tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(298)
				bool tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(298)
				if ((tmp30)){
					HX_STACK_LINE(298)
					Float tmp31 = ::haxegon::Text_obj::t2;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(298)
					Float tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(298)
					Float tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(298)
					Float tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(298)
					Float tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(298)
					Float tmp36 = ::Math_obj::abs(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(298)
					Float tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(298)
					Float tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(298)
					Float tmp39 = ::haxegon::Text_obj::t3;		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(298)
					Float tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(298)
					Float tmp41 = tmp40;		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(298)
					Float tmp42 = tmp41;		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(298)
					Float tmp43 = tmp42;		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(298)
					Float tmp44 = ::Math_obj::abs(tmp43);		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(298)
					Float tmp45 = tmp44;		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(298)
					Float tmp46 = tmp45;		HX_STACK_VAR(tmp46,"tmp46");
					HX_STACK_LINE(298)
					tmp17 = (tmp38 < tmp46);
				}
				else{
					HX_STACK_LINE(298)
					tmp17 = false;
				}
			}
			else{
				HX_STACK_LINE(298)
				tmp17 = true;
			}
			HX_STACK_LINE(298)
			if ((tmp17)){
				HX_STACK_LINE(299)
				Float tmp18 = ::haxegon::Text_obj::t2;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(299)
				return tmp18;
			}
			else{
				HX_STACK_LINE(301)
				Float tmp18 = ::haxegon::Text_obj::t3;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(301)
				int tmp19 = ::haxegon::Gfx_obj::screenwidth;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(301)
				Float tmp20 = ::haxegon::Text_obj::currentlen();		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(301)
				Float tmp21 = (tmp19 - tmp20);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(301)
				int tmp22 = ::Math_obj::floor(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(301)
				Float tmp23 = (tmp18 + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(301)
				return tmp23;
			}
		}
	}
	HX_STACK_LINE(305)
	Float tmp1 = x;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(305)
	int tmp2 = ::Math_obj::floor(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(305)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Text_obj,alignx,return )

Float Text_obj::aligny( Float y){
	HX_STACK_FRAME("haxegon.Text","aligny",0xc9cfcb07,"haxegon.Text.aligny","haxegon/Text.hx",308,0xb667cca2)
	HX_STACK_ARG(y,"y")
	HX_STACK_LINE(309)
	bool tmp = (y <= (int)-5000);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(309)
	if ((tmp)){
		HX_STACK_LINE(310)
		Float tmp1 = y;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(310)
		int tmp2 = ::haxegon::Text_obj::CENTER;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(310)
		Float tmp3 = (tmp1 - tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(310)
		::haxegon::Text_obj::t1 = tmp3;
		HX_STACK_LINE(311)
		Float tmp4 = y;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(311)
		int tmp5 = ::haxegon::Text_obj::TOP;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(311)
		Float tmp6 = (tmp4 - tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(311)
		::haxegon::Text_obj::t2 = tmp6;
		HX_STACK_LINE(312)
		Float tmp7 = y;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(312)
		int tmp8 = ::haxegon::Text_obj::BOTTOM;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(312)
		Float tmp9 = (tmp7 - tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(312)
		::haxegon::Text_obj::t3 = tmp9;
		HX_STACK_LINE(313)
		Float tmp10 = ::haxegon::Text_obj::t1;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(313)
		bool tmp11 = (tmp10 == (int)0);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(313)
		bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(313)
		bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(313)
		if ((tmp12)){
			HX_STACK_LINE(313)
			Float tmp14 = ::haxegon::Text_obj::t1;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(313)
			Float tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(313)
			Float tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(313)
			Float tmp17 = ::Math_obj::abs(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(313)
			Float tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(313)
			Float tmp19 = ::haxegon::Text_obj::t2;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(313)
			Float tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(313)
			Float tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(313)
			Float tmp22 = ::Math_obj::abs(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(313)
			Float tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(313)
			bool tmp24 = (tmp18 < tmp23);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(313)
			bool tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(313)
			bool tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(313)
			if ((tmp26)){
				HX_STACK_LINE(313)
				Float tmp27 = ::haxegon::Text_obj::t1;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(313)
				Float tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(313)
				Float tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(313)
				Float tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(313)
				Float tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(313)
				Float tmp32 = ::Math_obj::abs(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(313)
				Float tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(313)
				Float tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(313)
				Float tmp35 = ::haxegon::Text_obj::t3;		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(313)
				Float tmp36 = tmp35;		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(313)
				Float tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(313)
				Float tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(313)
				Float tmp39 = tmp38;		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(313)
				Float tmp40 = ::Math_obj::abs(tmp39);		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(313)
				Float tmp41 = tmp40;		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(313)
				Float tmp42 = tmp41;		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(313)
				tmp13 = (tmp34 < tmp42);
			}
			else{
				HX_STACK_LINE(313)
				tmp13 = false;
			}
		}
		else{
			HX_STACK_LINE(313)
			tmp13 = true;
		}
		HX_STACK_LINE(313)
		if ((tmp13)){
			HX_STACK_LINE(314)
			Float tmp14 = ::haxegon::Text_obj::t1;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(314)
			int tmp15 = ::haxegon::Gfx_obj::screenheightmid;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(314)
			Float tmp16 = ::haxegon::Text_obj::currentheight();		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(314)
			Float tmp17 = (Float(tmp16) / Float((int)2));		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(314)
			Float tmp18 = (tmp15 - tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(314)
			int tmp19 = ::Math_obj::floor(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(314)
			Float tmp20 = (tmp14 + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(314)
			return tmp20;
		}
		else{
			HX_STACK_LINE(315)
			Float tmp14 = ::haxegon::Text_obj::t2;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(315)
			bool tmp15 = (tmp14 == (int)0);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(315)
			bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(315)
			bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(315)
			if ((tmp16)){
				HX_STACK_LINE(315)
				Float tmp18 = ::haxegon::Text_obj::t2;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(315)
				Float tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(315)
				Float tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(315)
				Float tmp21 = ::Math_obj::abs(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(315)
				Float tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(315)
				Float tmp23 = ::haxegon::Text_obj::t1;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(315)
				Float tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(315)
				Float tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(315)
				Float tmp26 = ::Math_obj::abs(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(315)
				Float tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(315)
				bool tmp28 = (tmp22 < tmp27);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(315)
				bool tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(315)
				bool tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(315)
				if ((tmp30)){
					HX_STACK_LINE(315)
					Float tmp31 = ::haxegon::Text_obj::t2;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(315)
					Float tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(315)
					Float tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(315)
					Float tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(315)
					Float tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(315)
					Float tmp36 = ::Math_obj::abs(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(315)
					Float tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(315)
					Float tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(315)
					Float tmp39 = ::haxegon::Text_obj::t3;		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(315)
					Float tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(315)
					Float tmp41 = tmp40;		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(315)
					Float tmp42 = tmp41;		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(315)
					Float tmp43 = tmp42;		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(315)
					Float tmp44 = ::Math_obj::abs(tmp43);		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(315)
					Float tmp45 = tmp44;		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(315)
					Float tmp46 = tmp45;		HX_STACK_VAR(tmp46,"tmp46");
					HX_STACK_LINE(315)
					tmp17 = (tmp38 < tmp46);
				}
				else{
					HX_STACK_LINE(315)
					tmp17 = false;
				}
			}
			else{
				HX_STACK_LINE(315)
				tmp17 = true;
			}
			HX_STACK_LINE(315)
			if ((tmp17)){
				HX_STACK_LINE(316)
				Float tmp18 = ::haxegon::Text_obj::t2;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(316)
				return tmp18;
			}
			else{
				HX_STACK_LINE(318)
				Float tmp18 = ::haxegon::Text_obj::t3;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(318)
				int tmp19 = ::haxegon::Gfx_obj::screenheight;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(318)
				Float tmp20 = ::haxegon::Text_obj::currentheight();		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(318)
				Float tmp21 = (tmp19 - tmp20);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(318)
				int tmp22 = ::Math_obj::floor(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(318)
				Float tmp23 = (tmp18 + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(318)
				return tmp23;
			}
		}
	}
	HX_STACK_LINE(322)
	Float tmp1 = y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(322)
	int tmp2 = ::Math_obj::floor(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(322)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Text_obj,aligny,return )

Float Text_obj::cachealigntextx( int c,Float x){
	HX_STACK_FRAME("haxegon.Text","cachealigntextx",0x67e31fb5,"haxegon.Text.cachealigntextx","haxegon/Text.hx",325,0xb667cca2)
	HX_STACK_ARG(c,"c")
	HX_STACK_ARG(x,"x")
	HX_STACK_LINE(326)
	bool tmp = (x <= (int)-5000);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(326)
	if ((tmp)){
		HX_STACK_LINE(327)
		Float tmp1 = x;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(327)
		int tmp2 = ::haxegon::Text_obj::CENTER;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(327)
		Float tmp3 = (tmp1 - tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(327)
		::haxegon::Text_obj::t1 = tmp3;
		HX_STACK_LINE(328)
		Float tmp4 = x;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(328)
		int tmp5 = ::haxegon::Text_obj::LEFT;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(328)
		Float tmp6 = (tmp4 - tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(328)
		::haxegon::Text_obj::t2 = tmp6;
		HX_STACK_LINE(329)
		Float tmp7 = x;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(329)
		int tmp8 = ::haxegon::Text_obj::RIGHT;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(329)
		Float tmp9 = (tmp7 - tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(329)
		::haxegon::Text_obj::t3 = tmp9;
		HX_STACK_LINE(330)
		Float tmp10 = ::haxegon::Text_obj::t1;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(330)
		bool tmp11 = (tmp10 == (int)0);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(330)
		bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(330)
		bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(330)
		if ((tmp12)){
			HX_STACK_LINE(330)
			Float tmp14 = ::haxegon::Text_obj::t1;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(330)
			Float tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(330)
			Float tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(330)
			Float tmp17 = ::Math_obj::abs(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(330)
			Float tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(330)
			Float tmp19 = ::haxegon::Text_obj::t2;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(330)
			Float tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(330)
			Float tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(330)
			Float tmp22 = ::Math_obj::abs(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(330)
			Float tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(330)
			bool tmp24 = (tmp18 < tmp23);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(330)
			bool tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(330)
			bool tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(330)
			if ((tmp26)){
				HX_STACK_LINE(330)
				Float tmp27 = ::haxegon::Text_obj::t1;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(330)
				Float tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(330)
				Float tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(330)
				Float tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(330)
				Float tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(330)
				Float tmp32 = ::Math_obj::abs(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(330)
				Float tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(330)
				Float tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(330)
				Float tmp35 = ::haxegon::Text_obj::t3;		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(330)
				Float tmp36 = tmp35;		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(330)
				Float tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(330)
				Float tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(330)
				Float tmp39 = tmp38;		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(330)
				Float tmp40 = ::Math_obj::abs(tmp39);		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(330)
				Float tmp41 = tmp40;		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(330)
				Float tmp42 = tmp41;		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(330)
				tmp13 = (tmp34 < tmp42);
			}
			else{
				HX_STACK_LINE(330)
				tmp13 = false;
			}
		}
		else{
			HX_STACK_LINE(330)
			tmp13 = true;
		}
		HX_STACK_LINE(330)
		if ((tmp13)){
			HX_STACK_LINE(331)
			Float tmp14 = ::haxegon::Text_obj::t1;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(331)
			::openfl::display::BitmapData tmp15 = ::haxegon::Text_obj::cachedtext->__get(c).StaticCast< ::openfl::display::BitmapData >();		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(331)
			int tmp16 = tmp15->width;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(331)
			Float tmp17 = ::haxegon::Text_obj::currentsize;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(331)
			Float tmp18 = (tmp16 * tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(331)
			Float tmp19 = (Float(tmp18) / Float((int)2));		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(331)
			int tmp20 = ::Math_obj::floor(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(331)
			Float tmp21 = (tmp14 + tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(331)
			return tmp21;
		}
		else{
			HX_STACK_LINE(332)
			Float tmp14 = ::haxegon::Text_obj::t2;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(332)
			bool tmp15 = (tmp14 == (int)0);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(332)
			bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(332)
			bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(332)
			if ((tmp16)){
				HX_STACK_LINE(332)
				Float tmp18 = ::haxegon::Text_obj::t2;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(332)
				Float tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(332)
				Float tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(332)
				Float tmp21 = ::Math_obj::abs(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(332)
				Float tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(332)
				Float tmp23 = ::haxegon::Text_obj::t1;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(332)
				Float tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(332)
				Float tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(332)
				Float tmp26 = ::Math_obj::abs(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(332)
				Float tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(332)
				bool tmp28 = (tmp22 < tmp27);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(332)
				bool tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(332)
				bool tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(332)
				if ((tmp30)){
					HX_STACK_LINE(332)
					Float tmp31 = ::haxegon::Text_obj::t2;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(332)
					Float tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(332)
					Float tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(332)
					Float tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(332)
					Float tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(332)
					Float tmp36 = ::Math_obj::abs(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(332)
					Float tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(332)
					Float tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(332)
					Float tmp39 = ::haxegon::Text_obj::t3;		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(332)
					Float tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(332)
					Float tmp41 = tmp40;		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(332)
					Float tmp42 = tmp41;		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(332)
					Float tmp43 = tmp42;		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(332)
					Float tmp44 = ::Math_obj::abs(tmp43);		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(332)
					Float tmp45 = tmp44;		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(332)
					Float tmp46 = tmp45;		HX_STACK_VAR(tmp46,"tmp46");
					HX_STACK_LINE(332)
					tmp17 = (tmp38 < tmp46);
				}
				else{
					HX_STACK_LINE(332)
					tmp17 = false;
				}
			}
			else{
				HX_STACK_LINE(332)
				tmp17 = true;
			}
			HX_STACK_LINE(332)
			if ((tmp17)){
				HX_STACK_LINE(333)
				Float tmp18 = ::haxegon::Text_obj::t2;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(333)
				return tmp18;
			}
			else{
				HX_STACK_LINE(335)
				Float tmp18 = ::haxegon::Text_obj::t3;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(335)
				::openfl::display::BitmapData tmp19 = ::haxegon::Text_obj::cachedtext->__get(c).StaticCast< ::openfl::display::BitmapData >();		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(335)
				int tmp20 = tmp19->width;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(335)
				Float tmp21 = ::haxegon::Text_obj::currentsize;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(335)
				Float tmp22 = (tmp20 * tmp21);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(335)
				Float tmp23 = (tmp18 + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(335)
				return tmp23;
			}
		}
	}
	HX_STACK_LINE(339)
	Float tmp1 = x;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(339)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Text_obj,cachealigntextx,return )

Float Text_obj::cachealigntexty( int c,Float y){
	HX_STACK_FRAME("haxegon.Text","cachealigntexty",0x67e31fb6,"haxegon.Text.cachealigntexty","haxegon/Text.hx",342,0xb667cca2)
	HX_STACK_ARG(c,"c")
	HX_STACK_ARG(y,"y")
	HX_STACK_LINE(343)
	bool tmp = (y <= (int)-5000);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(343)
	if ((tmp)){
		HX_STACK_LINE(344)
		Float tmp1 = y;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(344)
		int tmp2 = ::haxegon::Text_obj::CENTER;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(344)
		Float tmp3 = (tmp1 - tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(344)
		::haxegon::Text_obj::t1 = tmp3;
		HX_STACK_LINE(345)
		Float tmp4 = y;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(345)
		int tmp5 = ::haxegon::Text_obj::TOP;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(345)
		Float tmp6 = (tmp4 - tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(345)
		::haxegon::Text_obj::t2 = tmp6;
		HX_STACK_LINE(346)
		Float tmp7 = y;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(346)
		int tmp8 = ::haxegon::Text_obj::BOTTOM;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(346)
		Float tmp9 = (tmp7 - tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(346)
		::haxegon::Text_obj::t3 = tmp9;
		HX_STACK_LINE(347)
		Float tmp10 = ::haxegon::Text_obj::t1;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(347)
		bool tmp11 = (tmp10 == (int)0);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(347)
		bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(347)
		bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(347)
		if ((tmp12)){
			HX_STACK_LINE(347)
			Float tmp14 = ::haxegon::Text_obj::t1;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(347)
			Float tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(347)
			Float tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(347)
			Float tmp17 = ::Math_obj::abs(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(347)
			Float tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(347)
			Float tmp19 = ::haxegon::Text_obj::t2;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(347)
			Float tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(347)
			Float tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(347)
			Float tmp22 = ::Math_obj::abs(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(347)
			Float tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(347)
			bool tmp24 = (tmp18 < tmp23);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(347)
			bool tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(347)
			bool tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(347)
			if ((tmp26)){
				HX_STACK_LINE(347)
				Float tmp27 = ::haxegon::Text_obj::t1;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(347)
				Float tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(347)
				Float tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(347)
				Float tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(347)
				Float tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(347)
				Float tmp32 = ::Math_obj::abs(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(347)
				Float tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(347)
				Float tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(347)
				Float tmp35 = ::haxegon::Text_obj::t3;		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(347)
				Float tmp36 = tmp35;		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(347)
				Float tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(347)
				Float tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(347)
				Float tmp39 = tmp38;		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(347)
				Float tmp40 = ::Math_obj::abs(tmp39);		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(347)
				Float tmp41 = tmp40;		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(347)
				Float tmp42 = tmp41;		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(347)
				tmp13 = (tmp34 < tmp42);
			}
			else{
				HX_STACK_LINE(347)
				tmp13 = false;
			}
		}
		else{
			HX_STACK_LINE(347)
			tmp13 = true;
		}
		HX_STACK_LINE(347)
		if ((tmp13)){
			HX_STACK_LINE(348)
			Float tmp14 = ::haxegon::Text_obj::t1;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(348)
			::openfl::display::BitmapData tmp15 = ::haxegon::Text_obj::cachedtext->__get(c).StaticCast< ::openfl::display::BitmapData >();		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(348)
			int tmp16 = tmp15->height;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(348)
			Float tmp17 = ::haxegon::Text_obj::currentsize;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(348)
			Float tmp18 = (tmp16 * tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(348)
			Float tmp19 = (Float(tmp18) / Float((int)2));		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(348)
			int tmp20 = ::Math_obj::floor(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(348)
			Float tmp21 = (tmp14 + tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(348)
			return tmp21;
		}
		else{
			HX_STACK_LINE(349)
			Float tmp14 = ::haxegon::Text_obj::t2;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(349)
			bool tmp15 = (tmp14 == (int)0);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(349)
			bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(349)
			bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(349)
			if ((tmp16)){
				HX_STACK_LINE(349)
				Float tmp18 = ::haxegon::Text_obj::t2;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(349)
				Float tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(349)
				Float tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(349)
				Float tmp21 = ::Math_obj::abs(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(349)
				Float tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(349)
				Float tmp23 = ::haxegon::Text_obj::t1;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(349)
				Float tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(349)
				Float tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(349)
				Float tmp26 = ::Math_obj::abs(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(349)
				Float tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(349)
				bool tmp28 = (tmp22 < tmp27);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(349)
				bool tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(349)
				bool tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(349)
				if ((tmp30)){
					HX_STACK_LINE(349)
					Float tmp31 = ::haxegon::Text_obj::t2;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(349)
					Float tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(349)
					Float tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(349)
					Float tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(349)
					Float tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(349)
					Float tmp36 = ::Math_obj::abs(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(349)
					Float tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(349)
					Float tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(349)
					Float tmp39 = ::haxegon::Text_obj::t3;		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(349)
					Float tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(349)
					Float tmp41 = tmp40;		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(349)
					Float tmp42 = tmp41;		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(349)
					Float tmp43 = tmp42;		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(349)
					Float tmp44 = ::Math_obj::abs(tmp43);		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(349)
					Float tmp45 = tmp44;		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(349)
					Float tmp46 = tmp45;		HX_STACK_VAR(tmp46,"tmp46");
					HX_STACK_LINE(349)
					tmp17 = (tmp38 < tmp46);
				}
				else{
					HX_STACK_LINE(349)
					tmp17 = false;
				}
			}
			else{
				HX_STACK_LINE(349)
				tmp17 = true;
			}
			HX_STACK_LINE(349)
			if ((tmp17)){
				HX_STACK_LINE(350)
				Float tmp18 = ::haxegon::Text_obj::t2;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(350)
				return tmp18;
			}
			else{
				HX_STACK_LINE(352)
				Float tmp18 = ::haxegon::Text_obj::t3;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(352)
				::openfl::display::BitmapData tmp19 = ::haxegon::Text_obj::cachedtext->__get(c).StaticCast< ::openfl::display::BitmapData >();		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(352)
				int tmp20 = tmp19->height;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(352)
				Float tmp21 = ::haxegon::Text_obj::currentsize;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(352)
				Float tmp22 = (tmp20 * tmp21);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(352)
				Float tmp23 = (tmp18 + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(352)
				return tmp23;
			}
		}
	}
	HX_STACK_LINE(355)
	Float tmp1 = y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(355)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Text_obj,cachealigntexty,return )

Float Text_obj::aligntextx( ::String t,Float x){
	HX_STACK_FRAME("haxegon.Text","aligntextx",0x1efc74b9,"haxegon.Text.aligntextx","haxegon/Text.hx",358,0xb667cca2)
	HX_STACK_ARG(t,"t")
	HX_STACK_ARG(x,"x")
	HX_STACK_LINE(359)
	bool tmp = (x <= (int)-5000);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(359)
	if ((tmp)){
		HX_STACK_LINE(360)
		Float tmp1 = x;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(360)
		int tmp2 = ::haxegon::Text_obj::CENTER;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(360)
		Float tmp3 = (tmp1 - tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(360)
		::haxegon::Text_obj::t1 = tmp3;
		HX_STACK_LINE(361)
		Float tmp4 = x;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(361)
		int tmp5 = ::haxegon::Text_obj::LEFT;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(361)
		Float tmp6 = (tmp4 - tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(361)
		::haxegon::Text_obj::t2 = tmp6;
		HX_STACK_LINE(362)
		Float tmp7 = x;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(362)
		int tmp8 = ::haxegon::Text_obj::RIGHT;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(362)
		Float tmp9 = (tmp7 - tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(362)
		::haxegon::Text_obj::t3 = tmp9;
		HX_STACK_LINE(363)
		Float tmp10 = ::haxegon::Text_obj::t1;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(363)
		bool tmp11 = (tmp10 == (int)0);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(363)
		bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(363)
		bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(363)
		if ((tmp12)){
			HX_STACK_LINE(363)
			Float tmp14 = ::haxegon::Text_obj::t1;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(363)
			Float tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(363)
			Float tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(363)
			Float tmp17 = ::Math_obj::abs(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(363)
			Float tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(363)
			Float tmp19 = ::haxegon::Text_obj::t2;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(363)
			Float tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(363)
			Float tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(363)
			Float tmp22 = ::Math_obj::abs(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(363)
			Float tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(363)
			bool tmp24 = (tmp18 < tmp23);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(363)
			bool tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(363)
			bool tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(363)
			if ((tmp26)){
				HX_STACK_LINE(363)
				Float tmp27 = ::haxegon::Text_obj::t1;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(363)
				Float tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(363)
				Float tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(363)
				Float tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(363)
				Float tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(363)
				Float tmp32 = ::Math_obj::abs(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(363)
				Float tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(363)
				Float tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(363)
				Float tmp35 = ::haxegon::Text_obj::t3;		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(363)
				Float tmp36 = tmp35;		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(363)
				Float tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(363)
				Float tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(363)
				Float tmp39 = tmp38;		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(363)
				Float tmp40 = ::Math_obj::abs(tmp39);		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(363)
				Float tmp41 = tmp40;		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(363)
				Float tmp42 = tmp41;		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(363)
				tmp13 = (tmp34 < tmp42);
			}
			else{
				HX_STACK_LINE(363)
				tmp13 = false;
			}
		}
		else{
			HX_STACK_LINE(363)
			tmp13 = true;
		}
		HX_STACK_LINE(363)
		if ((tmp13)){
			HX_STACK_LINE(364)
			Float tmp14 = ::haxegon::Text_obj::t1;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(364)
			::String tmp15 = t;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(364)
			Float tmp16 = ::haxegon::Text_obj::len(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(364)
			Float tmp17 = (Float(tmp16) / Float((int)2));		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(364)
			int tmp18 = ::Math_obj::floor(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(364)
			Float tmp19 = (tmp14 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(364)
			return tmp19;
		}
		else{
			HX_STACK_LINE(365)
			Float tmp14 = ::haxegon::Text_obj::t2;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(365)
			bool tmp15 = (tmp14 == (int)0);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(365)
			bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(365)
			bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(365)
			if ((tmp16)){
				HX_STACK_LINE(365)
				Float tmp18 = ::haxegon::Text_obj::t2;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(365)
				Float tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(365)
				Float tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(365)
				Float tmp21 = ::Math_obj::abs(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(365)
				Float tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(365)
				Float tmp23 = ::haxegon::Text_obj::t1;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(365)
				Float tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(365)
				Float tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(365)
				Float tmp26 = ::Math_obj::abs(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(365)
				Float tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(365)
				bool tmp28 = (tmp22 < tmp27);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(365)
				bool tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(365)
				bool tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(365)
				if ((tmp30)){
					HX_STACK_LINE(365)
					Float tmp31 = ::haxegon::Text_obj::t2;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(365)
					Float tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(365)
					Float tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(365)
					Float tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(365)
					Float tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(365)
					Float tmp36 = ::Math_obj::abs(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(365)
					Float tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(365)
					Float tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(365)
					Float tmp39 = ::haxegon::Text_obj::t3;		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(365)
					Float tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(365)
					Float tmp41 = tmp40;		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(365)
					Float tmp42 = tmp41;		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(365)
					Float tmp43 = tmp42;		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(365)
					Float tmp44 = ::Math_obj::abs(tmp43);		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(365)
					Float tmp45 = tmp44;		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(365)
					Float tmp46 = tmp45;		HX_STACK_VAR(tmp46,"tmp46");
					HX_STACK_LINE(365)
					tmp17 = (tmp38 < tmp46);
				}
				else{
					HX_STACK_LINE(365)
					tmp17 = false;
				}
			}
			else{
				HX_STACK_LINE(365)
				tmp17 = true;
			}
			HX_STACK_LINE(365)
			if ((tmp17)){
				HX_STACK_LINE(366)
				Float tmp18 = ::haxegon::Text_obj::t2;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(366)
				return tmp18;
			}
			else{
				HX_STACK_LINE(368)
				Float tmp18 = ::haxegon::Text_obj::t3;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(368)
				::String tmp19 = t;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(368)
				Float tmp20 = ::haxegon::Text_obj::len(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(368)
				Float tmp21 = (tmp18 + tmp20);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(368)
				return tmp21;
			}
		}
	}
	HX_STACK_LINE(372)
	Float tmp1 = x;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(372)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Text_obj,aligntextx,return )

Float Text_obj::aligntexty( ::String t,Float y){
	HX_STACK_FRAME("haxegon.Text","aligntexty",0x1efc74ba,"haxegon.Text.aligntexty","haxegon/Text.hx",375,0xb667cca2)
	HX_STACK_ARG(t,"t")
	HX_STACK_ARG(y,"y")
	HX_STACK_LINE(376)
	bool tmp = (y <= (int)-5000);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(376)
	if ((tmp)){
		HX_STACK_LINE(377)
		Float tmp1 = y;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(377)
		int tmp2 = ::haxegon::Text_obj::CENTER;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(377)
		Float tmp3 = (tmp1 - tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(377)
		::haxegon::Text_obj::t1 = tmp3;
		HX_STACK_LINE(378)
		Float tmp4 = y;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(378)
		int tmp5 = ::haxegon::Text_obj::TOP;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(378)
		Float tmp6 = (tmp4 - tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(378)
		::haxegon::Text_obj::t2 = tmp6;
		HX_STACK_LINE(379)
		Float tmp7 = y;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(379)
		int tmp8 = ::haxegon::Text_obj::BOTTOM;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(379)
		Float tmp9 = (tmp7 - tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(379)
		::haxegon::Text_obj::t3 = tmp9;
		HX_STACK_LINE(380)
		Float tmp10 = ::haxegon::Text_obj::t1;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(380)
		bool tmp11 = (tmp10 == (int)0);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(380)
		bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(380)
		bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(380)
		if ((tmp12)){
			HX_STACK_LINE(380)
			Float tmp14 = ::haxegon::Text_obj::t1;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(380)
			Float tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(380)
			Float tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(380)
			Float tmp17 = ::Math_obj::abs(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(380)
			Float tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(380)
			Float tmp19 = ::haxegon::Text_obj::t2;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(380)
			Float tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(380)
			Float tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(380)
			Float tmp22 = ::Math_obj::abs(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(380)
			Float tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(380)
			bool tmp24 = (tmp18 < tmp23);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(380)
			bool tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(380)
			bool tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(380)
			if ((tmp26)){
				HX_STACK_LINE(380)
				Float tmp27 = ::haxegon::Text_obj::t1;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(380)
				Float tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(380)
				Float tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(380)
				Float tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(380)
				Float tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(380)
				Float tmp32 = ::Math_obj::abs(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(380)
				Float tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(380)
				Float tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(380)
				Float tmp35 = ::haxegon::Text_obj::t3;		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(380)
				Float tmp36 = tmp35;		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(380)
				Float tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(380)
				Float tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(380)
				Float tmp39 = tmp38;		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(380)
				Float tmp40 = ::Math_obj::abs(tmp39);		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(380)
				Float tmp41 = tmp40;		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(380)
				Float tmp42 = tmp41;		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(380)
				tmp13 = (tmp34 < tmp42);
			}
			else{
				HX_STACK_LINE(380)
				tmp13 = false;
			}
		}
		else{
			HX_STACK_LINE(380)
			tmp13 = true;
		}
		HX_STACK_LINE(380)
		if ((tmp13)){
			HX_STACK_LINE(381)
			Float tmp14 = ::haxegon::Text_obj::t1;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(381)
			::String tmp15 = t;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(381)
			Float tmp16 = ::haxegon::Text_obj::height(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(381)
			Float tmp17 = (Float(tmp16) / Float((int)2));		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(381)
			int tmp18 = ::Math_obj::floor(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(381)
			Float tmp19 = (tmp14 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(381)
			return tmp19;
		}
		else{
			HX_STACK_LINE(382)
			Float tmp14 = ::haxegon::Text_obj::t2;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(382)
			bool tmp15 = (tmp14 == (int)0);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(382)
			bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(382)
			bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(382)
			if ((tmp16)){
				HX_STACK_LINE(382)
				Float tmp18 = ::haxegon::Text_obj::t2;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(382)
				Float tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(382)
				Float tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(382)
				Float tmp21 = ::Math_obj::abs(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(382)
				Float tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(382)
				Float tmp23 = ::haxegon::Text_obj::t1;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(382)
				Float tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(382)
				Float tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(382)
				Float tmp26 = ::Math_obj::abs(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(382)
				Float tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(382)
				bool tmp28 = (tmp22 < tmp27);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(382)
				bool tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(382)
				bool tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(382)
				if ((tmp30)){
					HX_STACK_LINE(382)
					Float tmp31 = ::haxegon::Text_obj::t2;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(382)
					Float tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(382)
					Float tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(382)
					Float tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(382)
					Float tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(382)
					Float tmp36 = ::Math_obj::abs(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(382)
					Float tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(382)
					Float tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(382)
					Float tmp39 = ::haxegon::Text_obj::t3;		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(382)
					Float tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(382)
					Float tmp41 = tmp40;		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(382)
					Float tmp42 = tmp41;		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(382)
					Float tmp43 = tmp42;		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(382)
					Float tmp44 = ::Math_obj::abs(tmp43);		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(382)
					Float tmp45 = tmp44;		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(382)
					Float tmp46 = tmp45;		HX_STACK_VAR(tmp46,"tmp46");
					HX_STACK_LINE(382)
					tmp17 = (tmp38 < tmp46);
				}
				else{
					HX_STACK_LINE(382)
					tmp17 = false;
				}
			}
			else{
				HX_STACK_LINE(382)
				tmp17 = true;
			}
			HX_STACK_LINE(382)
			if ((tmp17)){
				HX_STACK_LINE(383)
				Float tmp18 = ::haxegon::Text_obj::t2;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(383)
				return tmp18;
			}
			else{
				HX_STACK_LINE(385)
				Float tmp18 = ::haxegon::Text_obj::t3;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(385)
				::String tmp19 = t;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(385)
				Float tmp20 = ::haxegon::Text_obj::height(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(385)
				Float tmp21 = (tmp18 + tmp20);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(385)
				return tmp21;
			}
		}
	}
	HX_STACK_LINE(388)
	Float tmp1 = y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(388)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Text_obj,aligntexty,return )

::haxe::ds::StringMap Text_obj::cachedtextindex;

Array< ::Dynamic > Text_obj::cachedtext;

int Text_obj::cacheindex;

::String Text_obj::cachelabel;

Void Text_obj::cleartextcache( ){
{
		HX_STACK_FRAME("haxegon.Text","cleartextcache",0xf0b70f3b,"haxegon.Text.cleartextcache","haxegon/Text.hx",396,0xb667cca2)
		HX_STACK_LINE(397)
		::haxe::ds::StringMap tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(397)
		{
			HX_STACK_LINE(397)
			::haxe::ds::StringMap tmp1 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(397)
			::haxe::ds::StringMap tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(397)
			tmp = tmp2;
		}
		HX_STACK_LINE(397)
		::haxegon::Text_obj::cachedtextindex = tmp;
		HX_STACK_LINE(398)
		{
			HX_STACK_LINE(398)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(398)
			int tmp1 = ::haxegon::Text_obj::cachedtext->length;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(398)
			int _g = tmp1;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(398)
			while((true)){
				HX_STACK_LINE(398)
				bool tmp2 = (_g1 < _g);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(398)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(398)
				if ((tmp3)){
					HX_STACK_LINE(398)
					break;
				}
				HX_STACK_LINE(398)
				int tmp4 = (_g1)++;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(398)
				int i = tmp4;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(399)
				::openfl::display::BitmapData tmp5 = ::haxegon::Text_obj::cachedtext->__get(i).StaticCast< ::openfl::display::BitmapData >();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(399)
				tmp5->dispose();
			}
		}
		HX_STACK_LINE(401)
		::haxegon::Text_obj::cachedtext = Array_obj< ::Dynamic >::__new();
		HX_STACK_LINE(403)
		int tmp1 = ::haxegon::Text_obj::LEFT;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(403)
		::haxegon::Text_obj::align(tmp1);
		HX_STACK_LINE(404)
		::haxegon::Text_obj::rotation((int)0,null(),null());
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Text_obj,cleartextcache,(void))

Void Text_obj::display( Float x,Float y,::String text,hx::Null< int >  __o_col){
int col = __o_col.Default(16777215);
	HX_STACK_FRAME("haxegon.Text","display",0xdda349ef,"haxegon.Text.display","haxegon/Text.hx",411,0xb667cca2)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(text,"text")
	HX_STACK_ARG(col,"col")
{
		HX_STACK_LINE(413)
		bool tmp = ::haxegon::Gfx_obj::clearscreeneachframe;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(413)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(413)
		if ((tmp1)){
			HX_STACK_LINE(413)
			bool tmp2 = ::haxegon::Gfx_obj::skiprender;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(413)
			bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(413)
			if ((tmp2)){
				HX_STACK_LINE(413)
				tmp3 = ::haxegon::Gfx_obj::drawingtoscreen;
			}
			else{
				HX_STACK_LINE(413)
				tmp3 = false;
			}
			HX_STACK_LINE(413)
			if ((tmp3)){
				HX_STACK_LINE(413)
				return null();
			}
		}
		HX_STACK_LINE(414)
		bool tmp2 = (text == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(414)
		if ((tmp2)){
			HX_STACK_LINE(414)
			return null();
		}
		HX_STACK_LINE(415)
		bool tmp3 = (text == HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(415)
		if ((tmp3)){
			HX_STACK_LINE(415)
			return null();
		}
		HX_STACK_LINE(417)
		int tmp4 = ::haxegon::Text_obj::wordwrap_width;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(417)
		bool tmp5 = (tmp4 > (int)0);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(417)
		if ((tmp5)){
			HX_STACK_LINE(418)
			::String tmp6 = text;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(418)
			Float tmp7 = ::haxegon::Text_obj::len(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(418)
			int tmp8 = ::haxegon::Text_obj::wordwrap_width;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(418)
			bool tmp9 = (tmp7 >= tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(418)
			if ((tmp9)){
				HX_STACK_LINE(419)
				int tmp10 = ::haxegon::Text_obj::wordwrap_width;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(419)
				::String tmp11 = text;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(419)
				::haxegon::Text_obj::dowordwrap(tmp10,tmp11);
				HX_STACK_LINE(420)
				int tmp12 = ::haxegon::Text_obj::wordwrap_width;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(420)
				int originalwordwrap_width = tmp12;		HX_STACK_VAR(originalwordwrap_width,"originalwordwrap_width");
				HX_STACK_LINE(421)
				::haxegon::Text_obj::wordwrap_width = (int)0;
				HX_STACK_LINE(422)
				Float tmp13 = x;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(422)
				Float tmp14 = y;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(422)
				::String tmp15 = ::haxegon::Text_obj::wordwrap_text;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(422)
				int tmp16 = col;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(422)
				::haxegon::Text_obj::display(tmp13,tmp14,tmp15,tmp16);
				HX_STACK_LINE(423)
				::haxegon::Text_obj::wordwrap_width = originalwordwrap_width;
				HX_STACK_LINE(424)
				return null();
			}
		}
		HX_STACK_LINE(428)
		int tmp6 = ::haxegon::Text_obj::currentindex;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(428)
		::haxegon::util::Fontclass tmp7 = ::haxegon::Text_obj::typeface->__get(tmp6).StaticCast< ::haxegon::util::Fontclass >();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(428)
		::String tmp8 = tmp7->type;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(428)
		bool tmp9 = (tmp8 == HX_HCSTRING("bitmap","\xef","\x0f","\x0c","\xf1"));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(428)
		if ((tmp9)){
			HX_STACK_LINE(429)
			::String tmp10 = (text + HX_HCSTRING("_","\x5f","\x00","\x00","\x00"));		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(429)
			::String tmp11 = ::haxegon::Text_obj::currentfont;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(429)
			::String tmp12 = (tmp10 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(429)
			int tmp13 = col;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(429)
			::String tmp14 = ::haxegon::Convert_obj::tostring(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(429)
			::String tmp15 = (tmp12 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(429)
			::haxegon::Text_obj::cachelabel = tmp15;
			HX_STACK_LINE(430)
			::haxe::ds::StringMap tmp16 = ::haxegon::Text_obj::cachedtextindex;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(430)
			::String tmp17 = ::haxegon::Text_obj::cachelabel;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(430)
			bool tmp18 = tmp16->exists(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(430)
			bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(430)
			if ((tmp19)){
				HX_STACK_LINE(432)
				int numlines = (int)1;		HX_STACK_VAR(numlines,"numlines");
				HX_STACK_LINE(433)
				::String currentline = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(currentline,"currentline");
				HX_STACK_LINE(434)
				int longestline = (int)-1;		HX_STACK_VAR(longestline,"longestline");
				HX_STACK_LINE(435)
				int thislength;		HX_STACK_VAR(thislength,"thislength");
				HX_STACK_LINE(436)
				int i = (int)0;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(437)
				::String tmp20 = text;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(437)
				bool tmp21 = ::haxegon::S_obj::isinstring(tmp20,HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(437)
				if ((tmp21)){
					HX_STACK_LINE(438)
					while((true)){
						HX_STACK_LINE(438)
						bool tmp22 = (i < text.length);		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(438)
						bool tmp23 = !(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(438)
						if ((tmp23)){
							HX_STACK_LINE(438)
							break;
						}
						HX_STACK_LINE(439)
						int tmp24 = i;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(439)
						::String tmp25 = text.substr(tmp24,(int)1);		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(439)
						bool tmp26 = (tmp25 == HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(439)
						if ((tmp26)){
							HX_STACK_LINE(440)
							(numlines)++;
							HX_STACK_LINE(441)
							int tmp27 = ::haxegon::Text_obj::currentindex;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(441)
							::haxegon::util::Fontclass tmp28 = ::haxegon::Text_obj::typeface->__get(tmp27).StaticCast< ::haxegon::util::Fontclass >();		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(441)
							::String tmp29 = currentline;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(441)
							Float tmp30 = tmp28->tf_bitmap->getStringWidth(tmp29,false);		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(441)
							int tmp31 = ::Math_obj::round(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(441)
							thislength = tmp31;
							HX_STACK_LINE(442)
							bool tmp32 = (thislength > longestline);		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(442)
							if ((tmp32)){
								HX_STACK_LINE(442)
								longestline = thislength;
							}
							HX_STACK_LINE(443)
							currentline = HX_HCSTRING("","\x00","\x00","\x00","\x00");
						}
						else{
							HX_STACK_LINE(444)
							int tmp27 = i;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(444)
							::String tmp28 = text.substr(tmp27,(int)1);		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(444)
							hx::AddEq(currentline,tmp28);
						}
						HX_STACK_LINE(445)
						(i)++;
					}
					HX_STACK_LINE(447)
					int tmp22 = ::haxegon::Text_obj::currentindex;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(447)
					::haxegon::util::Fontclass tmp23 = ::haxegon::Text_obj::typeface->__get(tmp22).StaticCast< ::haxegon::util::Fontclass >();		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(447)
					::String tmp24 = currentline;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(447)
					Float tmp25 = tmp23->tf_bitmap->getStringWidth(tmp24,false);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(447)
					int tmp26 = ::Math_obj::round(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(447)
					thislength = tmp26;
					HX_STACK_LINE(448)
					bool tmp27 = (thislength > longestline);		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(448)
					if ((tmp27)){
						HX_STACK_LINE(448)
						longestline = thislength;
					}
				}
				else{
					HX_STACK_LINE(450)
					int tmp22 = ::haxegon::Text_obj::currentindex;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(450)
					::haxegon::util::Fontclass tmp23 = ::haxegon::Text_obj::typeface->__get(tmp22).StaticCast< ::haxegon::util::Fontclass >();		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(450)
					::String tmp24 = text;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(450)
					Float tmp25 = tmp23->tf_bitmap->getStringWidth(tmp24,false);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(450)
					int tmp26 = ::Math_obj::round(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(450)
					longestline = tmp26;
				}
				HX_STACK_LINE(453)
				int tmp22 = ::haxegon::Text_obj::cachedtext->length;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(453)
				::haxegon::Text_obj::cacheindex = tmp22;
				HX_STACK_LINE(454)
				::haxe::ds::StringMap tmp23 = ::haxegon::Text_obj::cachedtextindex;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(454)
				::String tmp24 = ::haxegon::Text_obj::cachelabel;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(454)
				int tmp25 = ::haxegon::Text_obj::cacheindex;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(454)
				tmp23->set(tmp24,tmp25);
				HX_STACK_LINE(455)
				int tmp26 = longestline;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(455)
				int tmp27 = ::haxegon::Text_obj::currentindex;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(455)
				::haxegon::util::Fontclass tmp28 = ::haxegon::Text_obj::typeface->__get(tmp27).StaticCast< ::haxegon::util::Fontclass >();		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(455)
				Float tmp29 = tmp28->height;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(455)
				int tmp30 = ::Math_obj::round(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(455)
				int tmp31 = numlines;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(455)
				int tmp32 = (tmp30 * tmp31);		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(455)
				::openfl::display::BitmapData tmp33 = ::openfl::display::BitmapData_obj::__new(tmp26,tmp32,true,(int)0);		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(455)
				::haxegon::Text_obj::cachedtext->push(tmp33);
				HX_STACK_LINE(457)
				int tmp34 = ::haxegon::Text_obj::cacheindex;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(457)
				::openfl::display::BitmapData tmp35 = ::haxegon::Text_obj::cachedtext->__get(tmp34).StaticCast< ::openfl::display::BitmapData >();		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(457)
				::haxegon::Text_obj::drawto = tmp35;
				HX_STACK_LINE(459)
				::String tmp36 = text;		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(459)
				int tmp37 = col;		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(459)
				::haxegon::Text_obj::cache_bitmap_text(tmp36,tmp37);
				HX_STACK_LINE(460)
				::openfl::display::BitmapData tmp38 = ::haxegon::Gfx_obj::drawto;		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(460)
				::haxegon::Text_obj::drawto = tmp38;
			}
			HX_STACK_LINE(463)
			::haxe::ds::StringMap tmp20 = ::haxegon::Text_obj::cachedtextindex;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(463)
			::String tmp21 = ::haxegon::Text_obj::cachelabel;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(463)
			Dynamic tmp22 = tmp20->get(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(463)
			::haxegon::Text_obj::cacheindex = tmp22;
			HX_STACK_LINE(464)
			Float tmp23 = x;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(464)
			Float tmp24 = y;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(464)
			int tmp25 = ::haxegon::Text_obj::cacheindex;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(464)
			Float tmp26 = ::haxegon::Text_obj::currentsize;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(464)
			::haxegon::Text_obj::display_bitmap(tmp23,tmp24,tmp25,tmp26);
		}
		else{
			HX_STACK_LINE(465)
			int tmp10 = ::haxegon::Text_obj::currentindex;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(465)
			::haxegon::util::Fontclass tmp11 = ::haxegon::Text_obj::typeface->__get(tmp10).StaticCast< ::haxegon::util::Fontclass >();		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(465)
			::String tmp12 = tmp11->type;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(465)
			bool tmp13 = (tmp12 == HX_HCSTRING("ttf","\xe6","\x6a","\x58","\x00"));		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(465)
			if ((tmp13)){
				HX_STACK_LINE(466)
				Float tmp14 = x;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(466)
				Float tmp15 = y;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(466)
				::String tmp16 = text;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(466)
				int tmp17 = col;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(466)
				::haxegon::Text_obj::display_ttf(tmp14,tmp15,tmp16,tmp17);
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Text_obj,display,(void))

Void Text_obj::cache_bitmap_text( ::String text,int col){
{
		HX_STACK_FRAME("haxegon.Text","cache_bitmap_text",0x5a55b36d,"haxegon.Text.cache_bitmap_text","haxegon/Text.hx",470,0xb667cca2)
		HX_STACK_ARG(text,"text")
		HX_STACK_ARG(col,"col")
		HX_STACK_LINE(471)
		int tmp = ::haxegon::Text_obj::currentindex;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(471)
		::haxegon::util::Fontclass tmp1 = ::haxegon::Text_obj::typeface->__get(tmp).StaticCast< ::haxegon::util::Fontclass >();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(471)
		tmp1->tf_bitmap->set_useTextColor(true);
		HX_STACK_LINE(472)
		int tmp2 = ::haxegon::Text_obj::currentindex;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(472)
		::haxegon::util::Fontclass tmp3 = ::haxegon::Text_obj::typeface->__get(tmp2).StaticCast< ::haxegon::util::Fontclass >();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(472)
		int tmp4 = (int)-16777216;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(472)
		int tmp5 = col;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(472)
		int tmp6 = (tmp4 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(472)
		tmp3->tf_bitmap->set_textColor(tmp6);
		HX_STACK_LINE(473)
		int tmp7 = ::haxegon::Text_obj::currentindex;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(473)
		::haxegon::util::Fontclass tmp8 = ::haxegon::Text_obj::typeface->__get(tmp7).StaticCast< ::haxegon::util::Fontclass >();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(473)
		::String tmp9 = text;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(473)
		tmp8->tf_bitmap->set_text(tmp9);
		HX_STACK_LINE(474)
		::openfl::display::BitmapData tmp10 = ::haxegon::Text_obj::drawto;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(474)
		int tmp11 = ::haxegon::Text_obj::currentindex;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(474)
		::haxegon::util::Fontclass tmp12 = ::haxegon::Text_obj::typeface->__get(tmp11).StaticCast< ::haxegon::util::Fontclass >();		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(474)
		::haxegon::bitmapFont::BitmapTextField tmp13 = tmp12->tf_bitmap;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(474)
		tmp10->draw(tmp13,null(),null(),null(),null(),null());
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Text_obj,cache_bitmap_text,(void))

Void Text_obj::display_bitmap( Float x,Float y,int text,Float size){
{
		HX_STACK_FRAME("haxegon.Text","display_bitmap",0x94e3837f,"haxegon.Text.display_bitmap","haxegon/Text.hx",477,0xb667cca2)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(text,"text")
		HX_STACK_ARG(size,"size")
		HX_STACK_LINE(478)
		Float tmp = x;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(478)
		int tmp1 = text;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(478)
		Float tmp2 = ::haxegon::Text_obj::cachealignx(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(478)
		x = tmp2;
		HX_STACK_LINE(478)
		Float tmp3 = y;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(478)
		int tmp4 = text;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(478)
		Float tmp5 = ::haxegon::Text_obj::cachealigny(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(478)
		y = tmp5;
		HX_STACK_LINE(479)
		int tmp6 = text;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(479)
		int tmp7 = ::haxegon::Text_obj::textalign;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(479)
		Float tmp8 = ::haxegon::Text_obj::cachealigntextx(tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(479)
		hx::SubEq(x,tmp8);
		HX_STACK_LINE(481)
		::openfl::geom::Matrix tmp9 = ::haxegon::Text_obj::fontmatrix;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(481)
		tmp9->identity();
		HX_STACK_LINE(482)
		bool tmp10 = (size != (int)1);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(482)
		if ((tmp10)){
			HX_STACK_LINE(483)
			::openfl::geom::Matrix tmp11 = ::haxegon::Text_obj::fontmatrix;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(483)
			Float tmp12 = size;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(483)
			Float tmp13 = size;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(483)
			tmp11->scale(tmp12,tmp13);
		}
		HX_STACK_LINE(485)
		Float tmp11 = ::haxegon::Text_obj::textrotate;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(485)
		bool tmp12 = (tmp11 != (int)0);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(485)
		if ((tmp12)){
			HX_STACK_LINE(486)
			Float tmp13 = ::haxegon::Text_obj::textrotatexpivot;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(486)
			bool tmp14 = (tmp13 != ((Float)0.0));		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(486)
			if ((tmp14)){
				HX_STACK_LINE(486)
				int tmp15 = text;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(486)
				Float tmp16 = ::haxegon::Text_obj::textrotatexpivot;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(486)
				Float tmp17 = ::haxegon::Text_obj::cachealigntextx(tmp15,tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(486)
				::haxegon::Text_obj::tempxpivot = tmp17;
			}
			HX_STACK_LINE(487)
			Float tmp15 = ::haxegon::Text_obj::textrotateypivot;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(487)
			bool tmp16 = (tmp15 != ((Float)0.0));		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(487)
			if ((tmp16)){
				HX_STACK_LINE(487)
				int tmp17 = text;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(487)
				Float tmp18 = ::haxegon::Text_obj::textrotatexpivot;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(487)
				Float tmp19 = ::haxegon::Text_obj::cachealigntexty(tmp17,tmp18);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(487)
				::haxegon::Text_obj::tempypivot = tmp19;
			}
			HX_STACK_LINE(488)
			::openfl::geom::Matrix tmp17 = ::haxegon::Text_obj::fontmatrix;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(488)
			Float tmp18 = ::haxegon::Text_obj::tempxpivot;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(488)
			Float tmp19 = -(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(488)
			Float tmp20 = ::haxegon::Text_obj::tempypivot;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(488)
			Float tmp21 = -(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(488)
			tmp17->translate(tmp19,tmp21);
			HX_STACK_LINE(489)
			::openfl::geom::Matrix tmp22 = ::haxegon::Text_obj::fontmatrix;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(489)
			Float tmp23 = ::haxegon::Text_obj::textrotate;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(489)
			Float tmp24 = (tmp23 * ((Float)3.1415));		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(489)
			Float tmp25 = (Float(tmp24) / Float((int)180));		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(489)
			tmp22->rotate(tmp25);
			HX_STACK_LINE(490)
			::openfl::geom::Matrix tmp26 = ::haxegon::Text_obj::fontmatrix;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(490)
			Float tmp27 = ::haxegon::Text_obj::tempxpivot;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(490)
			Float tmp28 = ::haxegon::Text_obj::tempypivot;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(490)
			tmp26->translate(tmp27,tmp28);
		}
		HX_STACK_LINE(493)
		::openfl::geom::Matrix tmp13 = ::haxegon::Text_obj::fontmatrix;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(493)
		Float tmp14 = x;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(493)
		int tmp15 = ::Math_obj::floor(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(493)
		Float tmp16 = y;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(493)
		int tmp17 = ::Math_obj::floor(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(493)
		tmp13->translate(tmp15,tmp17);
		HX_STACK_LINE(494)
		::openfl::display::BitmapData tmp18 = ::haxegon::Text_obj::drawto;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(494)
		::openfl::display::BitmapData tmp19 = ::haxegon::Text_obj::cachedtext->__get(text).StaticCast< ::openfl::display::BitmapData >();		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(494)
		::openfl::geom::Matrix tmp20 = ::haxegon::Text_obj::fontmatrix;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(494)
		tmp18->draw(tmp19,tmp20,null(),null(),null(),null());
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Text_obj,display_bitmap,(void))

Void Text_obj::display_ttf( Float x,Float y,::String text,hx::Null< int >  __o_col){
int col = __o_col.Default(16777215);
	HX_STACK_FRAME("haxegon.Text","display_ttf",0x07641d56,"haxegon.Text.display_ttf","haxegon/Text.hx",571,0xb667cca2)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(text,"text")
	HX_STACK_ARG(col,"col")
{
		HX_STACK_LINE(572)
		bool tmp = ::haxegon::Gfx_obj::clearscreeneachframe;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(572)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(572)
		if ((tmp1)){
			HX_STACK_LINE(572)
			bool tmp2 = ::haxegon::Gfx_obj::skiprender;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(572)
			bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(572)
			if ((tmp2)){
				HX_STACK_LINE(572)
				tmp3 = ::haxegon::Gfx_obj::drawingtoscreen;
			}
			else{
				HX_STACK_LINE(572)
				tmp3 = false;
			}
			HX_STACK_LINE(572)
			if ((tmp3)){
				HX_STACK_LINE(572)
				return null();
			}
		}
		HX_STACK_LINE(573)
		bool tmp2 = (text == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(573)
		if ((tmp2)){
			HX_STACK_LINE(573)
			text = HX_HCSTRING("","\x00","\x00","\x00","\x00");
		}
		HX_STACK_LINE(575)
		int tmp3 = ::haxegon::Text_obj::currentindex;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(575)
		::haxegon::util::Fontclass tmp4 = ::haxegon::Text_obj::typeface->__get(tmp3).StaticCast< ::haxegon::util::Fontclass >();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(575)
		int tmp5 = col;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(575)
		tmp4->tf_ttf->set_textColor(tmp5);
		HX_STACK_LINE(576)
		int tmp6 = ::haxegon::Text_obj::currentindex;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(576)
		::haxegon::util::Fontclass tmp7 = ::haxegon::Text_obj::typeface->__get(tmp6).StaticCast< ::haxegon::util::Fontclass >();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(576)
		::String tmp8 = text;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(576)
		tmp7->tf_ttf->set_text(tmp8);
		HX_STACK_LINE(578)
		Float tmp9 = x;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(578)
		Float tmp10 = ::haxegon::Text_obj::alignx(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(578)
		x = tmp10;
		HX_STACK_LINE(578)
		Float tmp11 = y;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(578)
		Float tmp12 = ::haxegon::Text_obj::aligny(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(578)
		y = tmp12;
		HX_STACK_LINE(579)
		::String tmp13 = text;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(579)
		int tmp14 = ::haxegon::Text_obj::textalign;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(579)
		Float tmp15 = ::haxegon::Text_obj::aligntextx(tmp13,tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(579)
		hx::SubEq(x,tmp15);
		HX_STACK_LINE(581)
		::openfl::geom::Matrix tmp16 = ::haxegon::Text_obj::fontmatrix;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(581)
		tmp16->identity();
		HX_STACK_LINE(583)
		Float tmp17 = ::haxegon::Text_obj::textrotate;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(583)
		bool tmp18 = (tmp17 != (int)0);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(583)
		if ((tmp18)){
			HX_STACK_LINE(584)
			Float tmp19 = ::haxegon::Text_obj::textrotatexpivot;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(584)
			bool tmp20 = (tmp19 != ((Float)0.0));		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(584)
			if ((tmp20)){
				HX_STACK_LINE(584)
				::String tmp21 = text;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(584)
				Float tmp22 = ::haxegon::Text_obj::textrotatexpivot;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(584)
				Float tmp23 = ::haxegon::Text_obj::aligntextx(tmp21,tmp22);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(584)
				::haxegon::Text_obj::tempxpivot = tmp23;
			}
			HX_STACK_LINE(585)
			Float tmp21 = ::haxegon::Text_obj::textrotateypivot;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(585)
			bool tmp22 = (tmp21 != ((Float)0.0));		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(585)
			if ((tmp22)){
				HX_STACK_LINE(585)
				::String tmp23 = text;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(585)
				Float tmp24 = ::haxegon::Text_obj::textrotateypivot;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(585)
				Float tmp25 = ::haxegon::Text_obj::aligntexty(tmp23,tmp24);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(585)
				::haxegon::Text_obj::tempypivot = tmp25;
			}
			HX_STACK_LINE(586)
			::openfl::geom::Matrix tmp23 = ::haxegon::Text_obj::fontmatrix;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(586)
			Float tmp24 = ::haxegon::Text_obj::tempxpivot;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(586)
			Float tmp25 = -(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(586)
			Float tmp26 = ::haxegon::Text_obj::tempypivot;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(586)
			Float tmp27 = -(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(586)
			tmp23->translate(tmp25,tmp27);
			HX_STACK_LINE(587)
			::openfl::geom::Matrix tmp28 = ::haxegon::Text_obj::fontmatrix;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(587)
			Float tmp29 = ::haxegon::Text_obj::textrotate;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(587)
			Float tmp30 = (tmp29 * ((Float)3.1415));		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(587)
			Float tmp31 = (Float(tmp30) / Float((int)180));		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(587)
			tmp28->rotate(tmp31);
			HX_STACK_LINE(588)
			::openfl::geom::Matrix tmp32 = ::haxegon::Text_obj::fontmatrix;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(588)
			Float tmp33 = ::haxegon::Text_obj::tempxpivot;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(588)
			Float tmp34 = ::haxegon::Text_obj::tempypivot;		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(588)
			tmp32->translate(tmp33,tmp34);
		}
		HX_STACK_LINE(591)
		::openfl::geom::Matrix tmp19 = ::haxegon::Text_obj::fontmatrix;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(591)
		Float tmp20 = x;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(591)
		Float tmp21 = y;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(591)
		tmp19->translate(tmp20,tmp21);
		HX_STACK_LINE(592)
		::openfl::display::BitmapData tmp22 = ::haxegon::Text_obj::drawto;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(592)
		int tmp23 = ::haxegon::Text_obj::currentindex;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(592)
		::haxegon::util::Fontclass tmp24 = ::haxegon::Text_obj::typeface->__get(tmp23).StaticCast< ::haxegon::util::Fontclass >();		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(592)
		::openfl::text::TextField tmp25 = tmp24->tf_ttf;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(592)
		::openfl::geom::Matrix tmp26 = ::haxegon::Text_obj::fontmatrix;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(592)
		tmp22->draw(tmp25,tmp26,null(),null(),null(),null());
		HX_STACK_LINE(593)
		::openfl::geom::Matrix tmp27 = ::haxegon::Text_obj::fontmatrix;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(593)
		tmp27->identity();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Text_obj,display_ttf,(void))

Void Text_obj::createtypeface( ::String t){
{
		HX_STACK_FRAME("haxegon.Text","createtypeface",0xcbe02f46,"haxegon.Text.createtypeface","haxegon/Text.hx",677,0xb667cca2)
		HX_STACK_ARG(t,"t")
		HX_STACK_LINE(680)
		::haxe::ds::StringMap tmp = ::haxegon::Text_obj::fontfileindex;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(680)
		::String tmp1 = t;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(680)
		Dynamic tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(680)
		Dynamic tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(680)
		::haxegon::util::Fontfile tmp4 = ::haxegon::Text_obj::fontfile->__get(tmp3).StaticCast< ::haxegon::util::Fontfile >();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(680)
		::String tmp5 = tmp4->type;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(680)
		bool tmp6 = (tmp5 == HX_HCSTRING("bitmap","\xef","\x0f","\x0c","\xf1"));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(680)
		if ((tmp6)){
			HX_STACK_LINE(681)
			::haxe::ds::StringMap tmp7 = ::haxegon::Text_obj::typefaceindex;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(681)
			::String tmp8 = (t + HX_HCSTRING("_1","\xf2","\x52","\x00","\x00"));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(681)
			bool tmp9 = tmp7->exists(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(681)
			bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(681)
			if ((tmp10)){
				HX_STACK_LINE(682)
				::String tmp11 = t;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(682)
				::haxegon::Text_obj::addtypeface(tmp11,(int)1);
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Text_obj,createtypeface,(void))

Void Text_obj::setfont( ::String t,hx::Null< Float >  __o_s){
Float s = __o_s.Default(1);
	HX_STACK_FRAME("haxegon.Text","setfont",0x40c4921e,"haxegon.Text.setfont","haxegon/Text.hx",687,0xb667cca2)
	HX_STACK_ARG(t,"t")
	HX_STACK_ARG(s,"s")
{
		HX_STACK_LINE(688)
		::haxe::ds::StringMap tmp = ::haxegon::Text_obj::fontfileindex;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(688)
		::String tmp1 = t;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(688)
		bool tmp2 = tmp->exists(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(688)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(688)
		if ((tmp3)){
			HX_STACK_LINE(689)
			::String tmp4 = t;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(689)
			Float tmp5 = s;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(689)
			::haxegon::Text_obj::addfont(tmp4,tmp5);
		}
		HX_STACK_LINE(692)
		::String tmp4 = t;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(692)
		::String tmp5 = ::haxegon::Text_obj::currentfont;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(692)
		bool tmp6 = (tmp4 != tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(692)
		if ((tmp6)){
			HX_STACK_LINE(693)
			::haxegon::Text_obj::currentfont = t;
			HX_STACK_LINE(694)
			bool tmp7 = (s != (int)-1);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(694)
			if ((tmp7)){
				HX_STACK_LINE(695)
				::haxe::ds::StringMap tmp8 = ::haxegon::Text_obj::fontfileindex;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(695)
				::String tmp9 = t;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(695)
				Dynamic tmp10 = tmp8->get(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(695)
				Dynamic tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(695)
				::haxegon::util::Fontfile tmp12 = ::haxegon::Text_obj::fontfile->__get(tmp11).StaticCast< ::haxegon::util::Fontfile >();		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(695)
				::String tmp13 = tmp12->type;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(695)
				bool tmp14 = (tmp13 == HX_HCSTRING("bitmap","\xef","\x0f","\x0c","\xf1"));		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(695)
				if ((tmp14)){
					HX_STACK_LINE(696)
					::haxe::ds::StringMap tmp15 = ::haxegon::Text_obj::typefaceindex;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(696)
					::String tmp16 = ::haxegon::Text_obj::currentfont;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(696)
					::String tmp17 = (tmp16 + HX_HCSTRING("_1","\xf2","\x52","\x00","\x00"));		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(696)
					bool tmp18 = tmp15->exists(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(696)
					if ((tmp18)){
						HX_STACK_LINE(697)
						::haxe::ds::StringMap tmp19 = ::haxegon::Text_obj::typefaceindex;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(697)
						::String tmp20 = ::haxegon::Text_obj::currentfont;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(697)
						::String tmp21 = (tmp20 + HX_HCSTRING("_1","\xf2","\x52","\x00","\x00"));		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(697)
						Dynamic tmp22 = tmp19->get(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(697)
						::haxegon::Text_obj::currentindex = tmp22;
					}
					else{
						HX_STACK_LINE(699)
						::String tmp19 = ::haxegon::Text_obj::currentfont;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(699)
						::haxegon::Text_obj::addtypeface(tmp19,(int)1);
						HX_STACK_LINE(700)
						::haxe::ds::StringMap tmp20 = ::haxegon::Text_obj::typefaceindex;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(700)
						::String tmp21 = ::haxegon::Text_obj::currentfont;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(700)
						::String tmp22 = (tmp21 + HX_HCSTRING("_1","\xf2","\x52","\x00","\x00"));		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(700)
						Dynamic tmp23 = tmp20->get(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(700)
						::haxegon::Text_obj::currentindex = tmp23;
					}
				}
				else{
					HX_STACK_LINE(702)
					::haxe::ds::StringMap tmp15 = ::haxegon::Text_obj::fontfileindex;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(702)
					::String tmp16 = t;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(702)
					Dynamic tmp17 = tmp15->get(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(702)
					Dynamic tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(702)
					::haxegon::util::Fontfile tmp19 = ::haxegon::Text_obj::fontfile->__get(tmp18).StaticCast< ::haxegon::util::Fontfile >();		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(702)
					::String tmp20 = tmp19->type;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(702)
					bool tmp21 = (tmp20 == HX_HCSTRING("ttf","\xe6","\x6a","\x58","\x00"));		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(702)
					if ((tmp21)){
						HX_STACK_LINE(703)
						::haxe::ds::StringMap tmp22 = ::haxegon::Text_obj::typefaceindex;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(703)
						::String tmp23 = ::haxegon::Text_obj::currentfont;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(703)
						::String tmp24 = (tmp23 + HX_HCSTRING("_","\x5f","\x00","\x00","\x00"));		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(703)
						Float tmp25 = ::haxegon::Text_obj::currentsize;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(703)
						::String tmp26 = ::Std_obj::string(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(703)
						::String tmp27 = (tmp24 + tmp26);		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(703)
						bool tmp28 = tmp22->exists(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(703)
						if ((tmp28)){
							HX_STACK_LINE(704)
							::haxe::ds::StringMap tmp29 = ::haxegon::Text_obj::typefaceindex;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(704)
							::String tmp30 = ::haxegon::Text_obj::currentfont;		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(704)
							::String tmp31 = (tmp30 + HX_HCSTRING("_","\x5f","\x00","\x00","\x00"));		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(704)
							Float tmp32 = ::haxegon::Text_obj::currentsize;		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(704)
							::String tmp33 = ::Std_obj::string(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(704)
							::String tmp34 = (tmp31 + tmp33);		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(704)
							Dynamic tmp35 = tmp29->get(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(704)
							::haxegon::Text_obj::currentindex = tmp35;
						}
						else{
							HX_STACK_LINE(706)
							::String tmp29 = ::haxegon::Text_obj::currentfont;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(706)
							Float tmp30 = ::haxegon::Text_obj::currentsize;		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(706)
							::haxegon::Text_obj::addtypeface(tmp29,tmp30);
							HX_STACK_LINE(707)
							::haxe::ds::StringMap tmp31 = ::haxegon::Text_obj::typefaceindex;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(707)
							::String tmp32 = ::haxegon::Text_obj::currentfont;		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(707)
							::String tmp33 = (tmp32 + HX_HCSTRING("_","\x5f","\x00","\x00","\x00"));		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(707)
							Float tmp34 = ::haxegon::Text_obj::currentsize;		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(707)
							::String tmp35 = ::Std_obj::string(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(707)
							::String tmp36 = (tmp33 + tmp35);		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(707)
							Dynamic tmp37 = tmp31->get(tmp36);		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(707)
							::haxegon::Text_obj::currentindex = tmp37;
						}
					}
				}
			}
		}
		HX_STACK_LINE(713)
		Float tmp7 = s;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(713)
		::haxegon::Text_obj::changesize(tmp7);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Text_obj,setfont,(void))

Void Text_obj::changesize( Float t){
{
		HX_STACK_FRAME("haxegon.Text","changesize",0x4701d4a4,"haxegon.Text.changesize","haxegon/Text.hx",716,0xb667cca2)
		HX_STACK_ARG(t,"t")
		HX_STACK_LINE(717)
		Float tmp = t;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(717)
		Float tmp1 = ::haxegon::Text_obj::currentsize;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(717)
		bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(717)
		if ((tmp2)){
			HX_STACK_LINE(718)
			::haxegon::Text_obj::currentsize = t;
			HX_STACK_LINE(719)
			::String tmp3 = ::haxegon::Text_obj::currentfont;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(719)
			bool tmp4 = (tmp3 != HX_HCSTRING("null","\x87","\x9e","\x0e","\x49"));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(719)
			if ((tmp4)){
				HX_STACK_LINE(720)
				::haxe::ds::StringMap tmp5 = ::haxegon::Text_obj::fontfileindex;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(720)
				::String tmp6 = ::haxegon::Text_obj::currentfont;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(720)
				Dynamic tmp7 = tmp5->get(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(720)
				Dynamic tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(720)
				::haxegon::util::Fontfile tmp9 = ::haxegon::Text_obj::fontfile->__get(tmp8).StaticCast< ::haxegon::util::Fontfile >();		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(720)
				::String tmp10 = tmp9->type;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(720)
				bool tmp11 = (tmp10 == HX_HCSTRING("bitmap","\xef","\x0f","\x0c","\xf1"));		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(720)
				if ((tmp11)){
					HX_STACK_LINE(721)
					::haxe::ds::StringMap tmp12 = ::haxegon::Text_obj::typefaceindex;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(721)
					::String tmp13 = ::haxegon::Text_obj::currentfont;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(721)
					::String tmp14 = (tmp13 + HX_HCSTRING("_1","\xf2","\x52","\x00","\x00"));		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(721)
					bool tmp15 = tmp12->exists(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(721)
					if ((tmp15)){
						HX_STACK_LINE(722)
						::haxe::ds::StringMap tmp16 = ::haxegon::Text_obj::typefaceindex;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(722)
						::String tmp17 = ::haxegon::Text_obj::currentfont;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(722)
						::String tmp18 = (tmp17 + HX_HCSTRING("_1","\xf2","\x52","\x00","\x00"));		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(722)
						Dynamic tmp19 = tmp16->get(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(722)
						::haxegon::Text_obj::currentindex = tmp19;
					}
					else{
						HX_STACK_LINE(724)
						::String tmp16 = ::haxegon::Text_obj::currentfont;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(724)
						::haxegon::Text_obj::addtypeface(tmp16,(int)1);
						HX_STACK_LINE(725)
						::haxe::ds::StringMap tmp17 = ::haxegon::Text_obj::typefaceindex;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(725)
						::String tmp18 = ::haxegon::Text_obj::currentfont;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(725)
						::String tmp19 = (tmp18 + HX_HCSTRING("_1","\xf2","\x52","\x00","\x00"));		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(725)
						Dynamic tmp20 = tmp17->get(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(725)
						::haxegon::Text_obj::currentindex = tmp20;
					}
				}
				else{
					HX_STACK_LINE(727)
					::haxe::ds::StringMap tmp12 = ::haxegon::Text_obj::fontfileindex;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(727)
					::String tmp13 = ::haxegon::Text_obj::currentfont;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(727)
					Dynamic tmp14 = tmp12->get(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(727)
					Dynamic tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(727)
					::haxegon::util::Fontfile tmp16 = ::haxegon::Text_obj::fontfile->__get(tmp15).StaticCast< ::haxegon::util::Fontfile >();		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(727)
					::String tmp17 = tmp16->type;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(727)
					bool tmp18 = (tmp17 == HX_HCSTRING("ttf","\xe6","\x6a","\x58","\x00"));		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(727)
					if ((tmp18)){
						HX_STACK_LINE(728)
						::haxe::ds::StringMap tmp19 = ::haxegon::Text_obj::typefaceindex;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(728)
						::String tmp20 = ::haxegon::Text_obj::currentfont;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(728)
						::String tmp21 = (tmp20 + HX_HCSTRING("_","\x5f","\x00","\x00","\x00"));		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(728)
						Float tmp22 = ::haxegon::Text_obj::currentsize;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(728)
						::String tmp23 = ::Std_obj::string(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(728)
						::String tmp24 = (tmp21 + tmp23);		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(728)
						bool tmp25 = tmp19->exists(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(728)
						if ((tmp25)){
							HX_STACK_LINE(729)
							::haxe::ds::StringMap tmp26 = ::haxegon::Text_obj::typefaceindex;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(729)
							::String tmp27 = ::haxegon::Text_obj::currentfont;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(729)
							::String tmp28 = (tmp27 + HX_HCSTRING("_","\x5f","\x00","\x00","\x00"));		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(729)
							Float tmp29 = ::haxegon::Text_obj::currentsize;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(729)
							::String tmp30 = ::Std_obj::string(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(729)
							::String tmp31 = (tmp28 + tmp30);		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(729)
							Dynamic tmp32 = tmp26->get(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(729)
							::haxegon::Text_obj::currentindex = tmp32;
						}
						else{
							HX_STACK_LINE(731)
							::String tmp26 = ::haxegon::Text_obj::currentfont;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(731)
							Float tmp27 = ::haxegon::Text_obj::currentsize;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(731)
							::haxegon::Text_obj::addtypeface(tmp26,tmp27);
							HX_STACK_LINE(732)
							::haxe::ds::StringMap tmp28 = ::haxegon::Text_obj::typefaceindex;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(732)
							::String tmp29 = ::haxegon::Text_obj::currentfont;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(732)
							::String tmp30 = (tmp29 + HX_HCSTRING("_","\x5f","\x00","\x00","\x00"));		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(732)
							Float tmp31 = ::haxegon::Text_obj::currentsize;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(732)
							::String tmp32 = ::Std_obj::string(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(732)
							::String tmp33 = (tmp30 + tmp32);		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(732)
							Dynamic tmp34 = tmp28->get(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(732)
							::haxegon::Text_obj::currentindex = tmp34;
						}
					}
				}
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Text_obj,changesize,(void))

Void Text_obj::addfont( ::String t,hx::Null< Float >  __o_defaultsize){
Float defaultsize = __o_defaultsize.Default(1);
	HX_STACK_FRAME("haxegon.Text","addfont",0xb77d941d,"haxegon.Text.addfont","haxegon/Text.hx",739,0xb667cca2)
	HX_STACK_ARG(t,"t")
	HX_STACK_ARG(defaultsize,"defaultsize")
{
		HX_STACK_LINE(740)
		::haxegon::util::Fontfile tmp = ::haxegon::util::Fontfile_obj::__new(t);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(740)
		::haxegon::Text_obj::fontfile->push(tmp);
		HX_STACK_LINE(741)
		::haxe::ds::StringMap tmp1 = ::haxegon::Text_obj::fontfileindex;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(741)
		::String tmp2 = t;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(741)
		int tmp3 = ::haxegon::Text_obj::fontfile->length;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(741)
		int tmp4 = (tmp3 - (int)1);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(741)
		tmp1->set(tmp2,tmp4);
		HX_STACK_LINE(743)
		Float tmp5 = defaultsize;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(743)
		::haxegon::Text_obj::changesize(tmp5);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Text_obj,addfont,(void))

Void Text_obj::addtypeface( ::String _name,Float _size){
{
		HX_STACK_FRAME("haxegon.Text","addtypeface",0xe87901a5,"haxegon.Text.addtypeface","haxegon/Text.hx",746,0xb667cca2)
		HX_STACK_ARG(_name,"_name")
		HX_STACK_ARG(_size,"_size")
		HX_STACK_LINE(747)
		::haxegon::util::Fontclass tmp = ::haxegon::util::Fontclass_obj::__new(_name,_size);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(747)
		::haxegon::Text_obj::typeface->push(tmp);
		HX_STACK_LINE(748)
		::haxe::ds::StringMap tmp1 = ::haxegon::Text_obj::typefaceindex;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(748)
		::String tmp2 = (_name + HX_HCSTRING("_","\x5f","\x00","\x00","\x00"));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(748)
		Float tmp3 = _size;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(748)
		::String tmp4 = ::Std_obj::string(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(748)
		::String tmp5 = (tmp2 + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(748)
		int tmp6 = ::haxegon::Text_obj::typeface->length;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(748)
		int tmp7 = (tmp6 - (int)1);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(748)
		tmp1->set(tmp5,tmp7);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Text_obj,addtypeface,(void))

::String Text_obj::getfonttypename( ::String fontname){
	HX_STACK_FRAME("haxegon.Text","getfonttypename",0xda16ad17,"haxegon.Text.getfonttypename","haxegon/Text.hx",752,0xb667cca2)
	HX_STACK_ARG(fontname,"fontname")
	HX_STACK_LINE(753)
	::haxe::ds::StringMap tmp = ::haxegon::Text_obj::fontfileindex;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(753)
	::String tmp1 = fontname;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(753)
	Dynamic tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(753)
	Dynamic tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(753)
	::haxegon::util::Fontfile tmp4 = ::haxegon::Text_obj::fontfile->__get(tmp3).StaticCast< ::haxegon::util::Fontfile >();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(753)
	::String tmp5 = tmp4->_typename;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(753)
	return tmp5;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Text_obj,getfonttypename,return )

Array< ::Dynamic > Text_obj::fontfile;

::haxe::ds::StringMap Text_obj::fontfileindex;

Array< ::Dynamic > Text_obj::typeface;

::haxe::ds::StringMap Text_obj::typefaceindex;

::openfl::geom::Matrix Text_obj::fontmatrix;

int Text_obj::currentindex;

::String Text_obj::currentfont;

Float Text_obj::currentsize;

::openfl::display::Stage Text_obj::gfxstage;

::openfl::display::BitmapData Text_obj::drawto;

int Text_obj::LEFT;

int Text_obj::RIGHT;

int Text_obj::TOP;

int Text_obj::BOTTOM;

int Text_obj::CENTER;

int Text_obj::textalign;

Float Text_obj::textrotate;

Float Text_obj::textrotatexpivot;

Float Text_obj::textrotateypivot;

Float Text_obj::textalphamult;

Float Text_obj::temprotate;

Float Text_obj::tempxscale;

Float Text_obj::tempyscale;

Float Text_obj::tempxpivot;

Float Text_obj::tempypivot;

Float Text_obj::tempalpha;

Float Text_obj::tempred;

Float Text_obj::tempgreen;

Float Text_obj::tempblue;

bool Text_obj::changecolours;

::openfl::geom::ColorTransform Text_obj::alphact;

int Text_obj::wordwrap_width;

::String Text_obj::wordwrap_text;

::String Text_obj::inputtext;

::String Text_obj::lastentry;

int Text_obj::inputmaxlength;

Float Text_obj::input_textxp;

Float Text_obj::input_textyp;

Float Text_obj::input_responsexp;

Float Text_obj::input_responseyp;

int Text_obj::input_textcol;

int Text_obj::input_responsecol;

::String Text_obj::input_text;

::String Text_obj::input_response;

int Text_obj::input_cursorglow;

::String Text_obj::input_font;

Float Text_obj::input_textsize;

int Text_obj::input_show;


Text_obj::Text_obj()
{
}

bool Text_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"t1") ) { outValue = t1; return true;  }
		if (HX_FIELD_EQ(inName,"t2") ) { outValue = t2; return true;  }
		if (HX_FIELD_EQ(inName,"t3") ) { outValue = t3; return true;  }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"len") ) { outValue = len_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"TOP") ) { outValue = TOP; return true;  }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { outValue = init_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"LEFT") ) { outValue = LEFT; return true;  }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"align") ) { outValue = align_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"input") ) { outValue = input_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"RIGHT") ) { outValue = RIGHT; return true;  }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { outValue = height_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"alignx") ) { outValue = alignx_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"aligny") ) { outValue = aligny_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"drawto") ) { outValue = drawto; return true;  }
		if (HX_FIELD_EQ(inName,"BOTTOM") ) { outValue = BOTTOM; return true;  }
		if (HX_FIELD_EQ(inName,"CENTER") ) { outValue = CENTER; return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"reverse") ) { outValue = reverse_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"display") ) { outValue = display_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"setfont") ) { outValue = setfont_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"addfont") ) { outValue = addfont_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"tempred") ) { outValue = tempred; return true;  }
		if (HX_FIELD_EQ(inName,"alphact") ) { outValue = alphact; return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"rotation") ) { outValue = rotation_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getinput") ) { outValue = getinput_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"wordwrap") ) { outValue = wordwrap_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"fontfile") ) { outValue = fontfile; return true;  }
		if (HX_FIELD_EQ(inName,"typeface") ) { outValue = typeface; return true;  }
		if (HX_FIELD_EQ(inName,"gfxstage") ) { outValue = gfxstage; return true;  }
		if (HX_FIELD_EQ(inName,"tempblue") ) { outValue = tempblue; return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"textalign") ) { outValue = textalign; return true;  }
		if (HX_FIELD_EQ(inName,"tempalpha") ) { outValue = tempalpha; return true;  }
		if (HX_FIELD_EQ(inName,"tempgreen") ) { outValue = tempgreen; return true;  }
		if (HX_FIELD_EQ(inName,"inputtext") ) { outValue = inputtext; return true;  }
		if (HX_FIELD_EQ(inName,"lastentry") ) { outValue = lastentry; return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"dowordwrap") ) { outValue = dowordwrap_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"currentlen") ) { outValue = currentlen_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"aligntextx") ) { outValue = aligntextx_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"aligntexty") ) { outValue = aligntexty_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"cachedtext") ) { outValue = cachedtext; return true;  }
		if (HX_FIELD_EQ(inName,"cacheindex") ) { outValue = cacheindex; return true;  }
		if (HX_FIELD_EQ(inName,"cachelabel") ) { outValue = cachelabel; return true;  }
		if (HX_FIELD_EQ(inName,"changesize") ) { outValue = changesize_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"fontmatrix") ) { outValue = fontmatrix; return true;  }
		if (HX_FIELD_EQ(inName,"textrotate") ) { outValue = textrotate; return true;  }
		if (HX_FIELD_EQ(inName,"temprotate") ) { outValue = temprotate; return true;  }
		if (HX_FIELD_EQ(inName,"tempxscale") ) { outValue = tempxscale; return true;  }
		if (HX_FIELD_EQ(inName,"tempyscale") ) { outValue = tempyscale; return true;  }
		if (HX_FIELD_EQ(inName,"tempxpivot") ) { outValue = tempxpivot; return true;  }
		if (HX_FIELD_EQ(inName,"tempypivot") ) { outValue = tempypivot; return true;  }
		if (HX_FIELD_EQ(inName,"input_text") ) { outValue = input_text; return true;  }
		if (HX_FIELD_EQ(inName,"input_font") ) { outValue = input_font; return true;  }
		if (HX_FIELD_EQ(inName,"input_show") ) { outValue = input_show; return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"cachealignx") ) { outValue = cachealignx_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"cachealigny") ) { outValue = cachealigny_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"display_ttf") ) { outValue = display_ttf_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"addtypeface") ) { outValue = addtypeface_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"currentfont") ) { outValue = currentfont; return true;  }
		if (HX_FIELD_EQ(inName,"currentsize") ) { outValue = currentsize; return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"currentindex") ) { outValue = currentindex; return true;  }
		if (HX_FIELD_EQ(inName,"input_textxp") ) { outValue = input_textxp; return true;  }
		if (HX_FIELD_EQ(inName,"input_textyp") ) { outValue = input_textyp; return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"currentheight") ) { outValue = currentheight_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"fontfileindex") ) { outValue = fontfileindex; return true;  }
		if (HX_FIELD_EQ(inName,"typefaceindex") ) { outValue = typefaceindex; return true;  }
		if (HX_FIELD_EQ(inName,"textalphamult") ) { outValue = textalphamult; return true;  }
		if (HX_FIELD_EQ(inName,"changecolours") ) { outValue = changecolours; return true;  }
		if (HX_FIELD_EQ(inName,"wordwrap_text") ) { outValue = wordwrap_text; return true;  }
		if (HX_FIELD_EQ(inName,"input_textcol") ) { outValue = input_textcol; return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"cleartextcache") ) { outValue = cleartextcache_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"display_bitmap") ) { outValue = display_bitmap_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"createtypeface") ) { outValue = createtypeface_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"wordwrap_width") ) { outValue = wordwrap_width; return true;  }
		if (HX_FIELD_EQ(inName,"inputmaxlength") ) { outValue = inputmaxlength; return true;  }
		if (HX_FIELD_EQ(inName,"input_response") ) { outValue = input_response; return true;  }
		if (HX_FIELD_EQ(inName,"input_textsize") ) { outValue = input_textsize; return true;  }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"drawstringinput") ) { outValue = drawstringinput_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"cachealigntextx") ) { outValue = cachealigntextx_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"cachealigntexty") ) { outValue = cachealigntexty_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"cachedtextindex") ) { outValue = cachedtextindex; return true;  }
		if (HX_FIELD_EQ(inName,"getfonttypename") ) { outValue = getfonttypename_dyn(); return true;  }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"textrotatexpivot") ) { outValue = textrotatexpivot; return true;  }
		if (HX_FIELD_EQ(inName,"textrotateypivot") ) { outValue = textrotateypivot; return true;  }
		if (HX_FIELD_EQ(inName,"input_responsexp") ) { outValue = input_responsexp; return true;  }
		if (HX_FIELD_EQ(inName,"input_responseyp") ) { outValue = input_responseyp; return true;  }
		if (HX_FIELD_EQ(inName,"input_cursorglow") ) { outValue = input_cursorglow; return true;  }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"cache_bitmap_text") ) { outValue = cache_bitmap_text_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"input_responsecol") ) { outValue = input_responsecol; return true;  }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"input_checkfortext") ) { outValue = input_checkfortext_dyn(); return true;  }
	}
	return false;
}

bool Text_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"t1") ) { t1=ioValue.Cast< Float >(); return true; }
		if (HX_FIELD_EQ(inName,"t2") ) { t2=ioValue.Cast< Float >(); return true; }
		if (HX_FIELD_EQ(inName,"t3") ) { t3=ioValue.Cast< Float >(); return true; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"TOP") ) { TOP=ioValue.Cast< int >(); return true; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"LEFT") ) { LEFT=ioValue.Cast< int >(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"RIGHT") ) { RIGHT=ioValue.Cast< int >(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"drawto") ) { drawto=ioValue.Cast< ::openfl::display::BitmapData >(); return true; }
		if (HX_FIELD_EQ(inName,"BOTTOM") ) { BOTTOM=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"CENTER") ) { CENTER=ioValue.Cast< int >(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"tempred") ) { tempred=ioValue.Cast< Float >(); return true; }
		if (HX_FIELD_EQ(inName,"alphact") ) { alphact=ioValue.Cast< ::openfl::geom::ColorTransform >(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"fontfile") ) { fontfile=ioValue.Cast< Array< ::Dynamic > >(); return true; }
		if (HX_FIELD_EQ(inName,"typeface") ) { typeface=ioValue.Cast< Array< ::Dynamic > >(); return true; }
		if (HX_FIELD_EQ(inName,"gfxstage") ) { gfxstage=ioValue.Cast< ::openfl::display::Stage >(); return true; }
		if (HX_FIELD_EQ(inName,"tempblue") ) { tempblue=ioValue.Cast< Float >(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"textalign") ) { textalign=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"tempalpha") ) { tempalpha=ioValue.Cast< Float >(); return true; }
		if (HX_FIELD_EQ(inName,"tempgreen") ) { tempgreen=ioValue.Cast< Float >(); return true; }
		if (HX_FIELD_EQ(inName,"inputtext") ) { inputtext=ioValue.Cast< ::String >(); return true; }
		if (HX_FIELD_EQ(inName,"lastentry") ) { lastentry=ioValue.Cast< ::String >(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"cachedtext") ) { cachedtext=ioValue.Cast< Array< ::Dynamic > >(); return true; }
		if (HX_FIELD_EQ(inName,"cacheindex") ) { cacheindex=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"cachelabel") ) { cachelabel=ioValue.Cast< ::String >(); return true; }
		if (HX_FIELD_EQ(inName,"fontmatrix") ) { fontmatrix=ioValue.Cast< ::openfl::geom::Matrix >(); return true; }
		if (HX_FIELD_EQ(inName,"textrotate") ) { textrotate=ioValue.Cast< Float >(); return true; }
		if (HX_FIELD_EQ(inName,"temprotate") ) { temprotate=ioValue.Cast< Float >(); return true; }
		if (HX_FIELD_EQ(inName,"tempxscale") ) { tempxscale=ioValue.Cast< Float >(); return true; }
		if (HX_FIELD_EQ(inName,"tempyscale") ) { tempyscale=ioValue.Cast< Float >(); return true; }
		if (HX_FIELD_EQ(inName,"tempxpivot") ) { tempxpivot=ioValue.Cast< Float >(); return true; }
		if (HX_FIELD_EQ(inName,"tempypivot") ) { tempypivot=ioValue.Cast< Float >(); return true; }
		if (HX_FIELD_EQ(inName,"input_text") ) { input_text=ioValue.Cast< ::String >(); return true; }
		if (HX_FIELD_EQ(inName,"input_font") ) { input_font=ioValue.Cast< ::String >(); return true; }
		if (HX_FIELD_EQ(inName,"input_show") ) { input_show=ioValue.Cast< int >(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"currentfont") ) { currentfont=ioValue.Cast< ::String >(); return true; }
		if (HX_FIELD_EQ(inName,"currentsize") ) { currentsize=ioValue.Cast< Float >(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"currentindex") ) { currentindex=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"input_textxp") ) { input_textxp=ioValue.Cast< Float >(); return true; }
		if (HX_FIELD_EQ(inName,"input_textyp") ) { input_textyp=ioValue.Cast< Float >(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"fontfileindex") ) { fontfileindex=ioValue.Cast< ::haxe::ds::StringMap >(); return true; }
		if (HX_FIELD_EQ(inName,"typefaceindex") ) { typefaceindex=ioValue.Cast< ::haxe::ds::StringMap >(); return true; }
		if (HX_FIELD_EQ(inName,"textalphamult") ) { textalphamult=ioValue.Cast< Float >(); return true; }
		if (HX_FIELD_EQ(inName,"changecolours") ) { changecolours=ioValue.Cast< bool >(); return true; }
		if (HX_FIELD_EQ(inName,"wordwrap_text") ) { wordwrap_text=ioValue.Cast< ::String >(); return true; }
		if (HX_FIELD_EQ(inName,"input_textcol") ) { input_textcol=ioValue.Cast< int >(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"wordwrap_width") ) { wordwrap_width=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"inputmaxlength") ) { inputmaxlength=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"input_response") ) { input_response=ioValue.Cast< ::String >(); return true; }
		if (HX_FIELD_EQ(inName,"input_textsize") ) { input_textsize=ioValue.Cast< Float >(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"cachedtextindex") ) { cachedtextindex=ioValue.Cast< ::haxe::ds::StringMap >(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"textrotatexpivot") ) { textrotatexpivot=ioValue.Cast< Float >(); return true; }
		if (HX_FIELD_EQ(inName,"textrotateypivot") ) { textrotateypivot=ioValue.Cast< Float >(); return true; }
		if (HX_FIELD_EQ(inName,"input_responsexp") ) { input_responsexp=ioValue.Cast< Float >(); return true; }
		if (HX_FIELD_EQ(inName,"input_responseyp") ) { input_responseyp=ioValue.Cast< Float >(); return true; }
		if (HX_FIELD_EQ(inName,"input_cursorglow") ) { input_cursorglow=ioValue.Cast< int >(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"input_responsecol") ) { input_responsecol=ioValue.Cast< int >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsFloat,(void *) &Text_obj::t1,HX_HCSTRING("t1","\x3d","\x65","\x00","\x00")},
	{hx::fsFloat,(void *) &Text_obj::t2,HX_HCSTRING("t2","\x3e","\x65","\x00","\x00")},
	{hx::fsFloat,(void *) &Text_obj::t3,HX_HCSTRING("t3","\x3f","\x65","\x00","\x00")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(void *) &Text_obj::cachedtextindex,HX_HCSTRING("cachedtextindex","\x23","\x4f","\xdc","\xc8")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(void *) &Text_obj::cachedtext,HX_HCSTRING("cachedtext","\x8f","\xc5","\x96","\x90")},
	{hx::fsInt,(void *) &Text_obj::cacheindex,HX_HCSTRING("cacheindex","\x90","\x91","\x9f","\x6d")},
	{hx::fsString,(void *) &Text_obj::cachelabel,HX_HCSTRING("cachelabel","\x72","\x04","\x3a","\x1f")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(void *) &Text_obj::fontfile,HX_HCSTRING("fontfile","\xcb","\xbf","\x60","\xdb")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(void *) &Text_obj::fontfileindex,HX_HCSTRING("fontfileindex","\x67","\xbb","\x11","\xfb")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(void *) &Text_obj::typeface,HX_HCSTRING("typeface","\x57","\x8c","\xa7","\xc5")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(void *) &Text_obj::typefaceindex,HX_HCSTRING("typefaceindex","\x5b","\xf3","\x9d","\xda")},
	{hx::fsObject /*::openfl::geom::Matrix*/ ,(void *) &Text_obj::fontmatrix,HX_HCSTRING("fontmatrix","\x50","\x59","\x87","\x3b")},
	{hx::fsInt,(void *) &Text_obj::currentindex,HX_HCSTRING("currentindex","\x39","\x10","\xf3","\x71")},
	{hx::fsString,(void *) &Text_obj::currentfont,HX_HCSTRING("currentfont","\x88","\x0a","\x79","\x91")},
	{hx::fsFloat,(void *) &Text_obj::currentsize,HX_HCSTRING("currentsize","\x7a","\x4d","\x0c","\x9a")},
	{hx::fsObject /*::openfl::display::Stage*/ ,(void *) &Text_obj::gfxstage,HX_HCSTRING("gfxstage","\xa5","\xf2","\xb7","\x13")},
	{hx::fsObject /*::openfl::display::BitmapData*/ ,(void *) &Text_obj::drawto,HX_HCSTRING("drawto","\x7f","\x9a","\xd6","\xdf")},
	{hx::fsInt,(void *) &Text_obj::LEFT,HX_HCSTRING("LEFT","\x07","\xd0","\x70","\x32")},
	{hx::fsInt,(void *) &Text_obj::RIGHT,HX_HCSTRING("RIGHT","\xbc","\x43","\x52","\x67")},
	{hx::fsInt,(void *) &Text_obj::TOP,HX_HCSTRING("TOP","\x75","\x02","\x40","\x00")},
	{hx::fsInt,(void *) &Text_obj::BOTTOM,HX_HCSTRING("BOTTOM","\xeb","\x92","\xfb","\x17")},
	{hx::fsInt,(void *) &Text_obj::CENTER,HX_HCSTRING("CENTER","\xd5","\xd1","\x5d","\xb8")},
	{hx::fsInt,(void *) &Text_obj::textalign,HX_HCSTRING("textalign","\xf8","\x76","\x51","\x27")},
	{hx::fsFloat,(void *) &Text_obj::textrotate,HX_HCSTRING("textrotate","\xc8","\x52","\x7c","\xcd")},
	{hx::fsFloat,(void *) &Text_obj::textrotatexpivot,HX_HCSTRING("textrotatexpivot","\x12","\x30","\xc0","\x2c")},
	{hx::fsFloat,(void *) &Text_obj::textrotateypivot,HX_HCSTRING("textrotateypivot","\x71","\x8c","\x1b","\x93")},
	{hx::fsFloat,(void *) &Text_obj::textalphamult,HX_HCSTRING("textalphamult","\x01","\xcc","\x45","\x0d")},
	{hx::fsFloat,(void *) &Text_obj::temprotate,HX_HCSTRING("temprotate","\x6f","\x90","\xfb","\xb1")},
	{hx::fsFloat,(void *) &Text_obj::tempxscale,HX_HCSTRING("tempxscale","\x26","\x65","\x7d","\x5a")},
	{hx::fsFloat,(void *) &Text_obj::tempyscale,HX_HCSTRING("tempyscale","\x85","\xc1","\xd8","\xc0")},
	{hx::fsFloat,(void *) &Text_obj::tempxpivot,HX_HCSTRING("tempxpivot","\x5e","\xe1","\x50","\xa4")},
	{hx::fsFloat,(void *) &Text_obj::tempypivot,HX_HCSTRING("tempypivot","\xbd","\x3d","\xac","\x0a")},
	{hx::fsFloat,(void *) &Text_obj::tempalpha,HX_HCSTRING("tempalpha","\xca","\x3b","\x7d","\xc4")},
	{hx::fsFloat,(void *) &Text_obj::tempred,HX_HCSTRING("tempred","\xbd","\x3a","\xd1","\x46")},
	{hx::fsFloat,(void *) &Text_obj::tempgreen,HX_HCSTRING("tempgreen","\x2f","\xa3","\xd3","\x3c")},
	{hx::fsFloat,(void *) &Text_obj::tempblue,HX_HCSTRING("tempblue","\xae","\x1f","\xb4","\xa5")},
	{hx::fsBool,(void *) &Text_obj::changecolours,HX_HCSTRING("changecolours","\x37","\xf7","\xeb","\x82")},
	{hx::fsObject /*::openfl::geom::ColorTransform*/ ,(void *) &Text_obj::alphact,HX_HCSTRING("alphact","\x8f","\x11","\x16","\xb2")},
	{hx::fsInt,(void *) &Text_obj::wordwrap_width,HX_HCSTRING("wordwrap_width","\xdb","\x8c","\x12","\x51")},
	{hx::fsString,(void *) &Text_obj::wordwrap_text,HX_HCSTRING("wordwrap_text","\x78","\x67","\xf1","\x7e")},
	{hx::fsString,(void *) &Text_obj::inputtext,HX_HCSTRING("inputtext","\xb7","\x5d","\x4b","\x29")},
	{hx::fsString,(void *) &Text_obj::lastentry,HX_HCSTRING("lastentry","\x5c","\x36","\x06","\x2a")},
	{hx::fsInt,(void *) &Text_obj::inputmaxlength,HX_HCSTRING("inputmaxlength","\x40","\x9d","\xf0","\x36")},
	{hx::fsFloat,(void *) &Text_obj::input_textxp,HX_HCSTRING("input_textxp","\xba","\xbd","\xda","\x11")},
	{hx::fsFloat,(void *) &Text_obj::input_textyp,HX_HCSTRING("input_textyp","\x99","\xbe","\xda","\x11")},
	{hx::fsFloat,(void *) &Text_obj::input_responsexp,HX_HCSTRING("input_responsexp","\x0e","\x4b","\x6b","\x22")},
	{hx::fsFloat,(void *) &Text_obj::input_responseyp,HX_HCSTRING("input_responseyp","\xed","\x4b","\x6b","\x22")},
	{hx::fsInt,(void *) &Text_obj::input_textcol,HX_HCSTRING("input_textcol","\x3e","\x55","\x7b","\x8d")},
	{hx::fsInt,(void *) &Text_obj::input_responsecol,HX_HCSTRING("input_responsecol","\x6a","\x71","\x66","\xfb")},
	{hx::fsString,(void *) &Text_obj::input_text,HX_HCSTRING("input_text","\x42","\x40","\x18","\xeb")},
	{hx::fsString,(void *) &Text_obj::input_response,HX_HCSTRING("input_response","\x96","\x10","\x95","\x86")},
	{hx::fsInt,(void *) &Text_obj::input_cursorglow,HX_HCSTRING("input_cursorglow","\xb8","\xd1","\x63","\x96")},
	{hx::fsString,(void *) &Text_obj::input_font,HX_HCSTRING("input_font","\x64","\xd1","\xde","\xe1")},
	{hx::fsFloat,(void *) &Text_obj::input_textsize,HX_HCSTRING("input_textsize","\x03","\x2a","\xfe","\x48")},
	{hx::fsInt,(void *) &Text_obj::input_show,HX_HCSTRING("input_show","\x92","\x48","\x71","\xea")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Text_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Text_obj::t1,"t1");
	HX_MARK_MEMBER_NAME(Text_obj::t2,"t2");
	HX_MARK_MEMBER_NAME(Text_obj::t3,"t3");
	HX_MARK_MEMBER_NAME(Text_obj::cachedtextindex,"cachedtextindex");
	HX_MARK_MEMBER_NAME(Text_obj::cachedtext,"cachedtext");
	HX_MARK_MEMBER_NAME(Text_obj::cacheindex,"cacheindex");
	HX_MARK_MEMBER_NAME(Text_obj::cachelabel,"cachelabel");
	HX_MARK_MEMBER_NAME(Text_obj::fontfile,"fontfile");
	HX_MARK_MEMBER_NAME(Text_obj::fontfileindex,"fontfileindex");
	HX_MARK_MEMBER_NAME(Text_obj::typeface,"typeface");
	HX_MARK_MEMBER_NAME(Text_obj::typefaceindex,"typefaceindex");
	HX_MARK_MEMBER_NAME(Text_obj::fontmatrix,"fontmatrix");
	HX_MARK_MEMBER_NAME(Text_obj::currentindex,"currentindex");
	HX_MARK_MEMBER_NAME(Text_obj::currentfont,"currentfont");
	HX_MARK_MEMBER_NAME(Text_obj::currentsize,"currentsize");
	HX_MARK_MEMBER_NAME(Text_obj::gfxstage,"gfxstage");
	HX_MARK_MEMBER_NAME(Text_obj::drawto,"drawto");
	HX_MARK_MEMBER_NAME(Text_obj::LEFT,"LEFT");
	HX_MARK_MEMBER_NAME(Text_obj::RIGHT,"RIGHT");
	HX_MARK_MEMBER_NAME(Text_obj::TOP,"TOP");
	HX_MARK_MEMBER_NAME(Text_obj::BOTTOM,"BOTTOM");
	HX_MARK_MEMBER_NAME(Text_obj::CENTER,"CENTER");
	HX_MARK_MEMBER_NAME(Text_obj::textalign,"textalign");
	HX_MARK_MEMBER_NAME(Text_obj::textrotate,"textrotate");
	HX_MARK_MEMBER_NAME(Text_obj::textrotatexpivot,"textrotatexpivot");
	HX_MARK_MEMBER_NAME(Text_obj::textrotateypivot,"textrotateypivot");
	HX_MARK_MEMBER_NAME(Text_obj::textalphamult,"textalphamult");
	HX_MARK_MEMBER_NAME(Text_obj::temprotate,"temprotate");
	HX_MARK_MEMBER_NAME(Text_obj::tempxscale,"tempxscale");
	HX_MARK_MEMBER_NAME(Text_obj::tempyscale,"tempyscale");
	HX_MARK_MEMBER_NAME(Text_obj::tempxpivot,"tempxpivot");
	HX_MARK_MEMBER_NAME(Text_obj::tempypivot,"tempypivot");
	HX_MARK_MEMBER_NAME(Text_obj::tempalpha,"tempalpha");
	HX_MARK_MEMBER_NAME(Text_obj::tempred,"tempred");
	HX_MARK_MEMBER_NAME(Text_obj::tempgreen,"tempgreen");
	HX_MARK_MEMBER_NAME(Text_obj::tempblue,"tempblue");
	HX_MARK_MEMBER_NAME(Text_obj::changecolours,"changecolours");
	HX_MARK_MEMBER_NAME(Text_obj::alphact,"alphact");
	HX_MARK_MEMBER_NAME(Text_obj::wordwrap_width,"wordwrap_width");
	HX_MARK_MEMBER_NAME(Text_obj::wordwrap_text,"wordwrap_text");
	HX_MARK_MEMBER_NAME(Text_obj::inputtext,"inputtext");
	HX_MARK_MEMBER_NAME(Text_obj::lastentry,"lastentry");
	HX_MARK_MEMBER_NAME(Text_obj::inputmaxlength,"inputmaxlength");
	HX_MARK_MEMBER_NAME(Text_obj::input_textxp,"input_textxp");
	HX_MARK_MEMBER_NAME(Text_obj::input_textyp,"input_textyp");
	HX_MARK_MEMBER_NAME(Text_obj::input_responsexp,"input_responsexp");
	HX_MARK_MEMBER_NAME(Text_obj::input_responseyp,"input_responseyp");
	HX_MARK_MEMBER_NAME(Text_obj::input_textcol,"input_textcol");
	HX_MARK_MEMBER_NAME(Text_obj::input_responsecol,"input_responsecol");
	HX_MARK_MEMBER_NAME(Text_obj::input_text,"input_text");
	HX_MARK_MEMBER_NAME(Text_obj::input_response,"input_response");
	HX_MARK_MEMBER_NAME(Text_obj::input_cursorglow,"input_cursorglow");
	HX_MARK_MEMBER_NAME(Text_obj::input_font,"input_font");
	HX_MARK_MEMBER_NAME(Text_obj::input_textsize,"input_textsize");
	HX_MARK_MEMBER_NAME(Text_obj::input_show,"input_show");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Text_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Text_obj::t1,"t1");
	HX_VISIT_MEMBER_NAME(Text_obj::t2,"t2");
	HX_VISIT_MEMBER_NAME(Text_obj::t3,"t3");
	HX_VISIT_MEMBER_NAME(Text_obj::cachedtextindex,"cachedtextindex");
	HX_VISIT_MEMBER_NAME(Text_obj::cachedtext,"cachedtext");
	HX_VISIT_MEMBER_NAME(Text_obj::cacheindex,"cacheindex");
	HX_VISIT_MEMBER_NAME(Text_obj::cachelabel,"cachelabel");
	HX_VISIT_MEMBER_NAME(Text_obj::fontfile,"fontfile");
	HX_VISIT_MEMBER_NAME(Text_obj::fontfileindex,"fontfileindex");
	HX_VISIT_MEMBER_NAME(Text_obj::typeface,"typeface");
	HX_VISIT_MEMBER_NAME(Text_obj::typefaceindex,"typefaceindex");
	HX_VISIT_MEMBER_NAME(Text_obj::fontmatrix,"fontmatrix");
	HX_VISIT_MEMBER_NAME(Text_obj::currentindex,"currentindex");
	HX_VISIT_MEMBER_NAME(Text_obj::currentfont,"currentfont");
	HX_VISIT_MEMBER_NAME(Text_obj::currentsize,"currentsize");
	HX_VISIT_MEMBER_NAME(Text_obj::gfxstage,"gfxstage");
	HX_VISIT_MEMBER_NAME(Text_obj::drawto,"drawto");
	HX_VISIT_MEMBER_NAME(Text_obj::LEFT,"LEFT");
	HX_VISIT_MEMBER_NAME(Text_obj::RIGHT,"RIGHT");
	HX_VISIT_MEMBER_NAME(Text_obj::TOP,"TOP");
	HX_VISIT_MEMBER_NAME(Text_obj::BOTTOM,"BOTTOM");
	HX_VISIT_MEMBER_NAME(Text_obj::CENTER,"CENTER");
	HX_VISIT_MEMBER_NAME(Text_obj::textalign,"textalign");
	HX_VISIT_MEMBER_NAME(Text_obj::textrotate,"textrotate");
	HX_VISIT_MEMBER_NAME(Text_obj::textrotatexpivot,"textrotatexpivot");
	HX_VISIT_MEMBER_NAME(Text_obj::textrotateypivot,"textrotateypivot");
	HX_VISIT_MEMBER_NAME(Text_obj::textalphamult,"textalphamult");
	HX_VISIT_MEMBER_NAME(Text_obj::temprotate,"temprotate");
	HX_VISIT_MEMBER_NAME(Text_obj::tempxscale,"tempxscale");
	HX_VISIT_MEMBER_NAME(Text_obj::tempyscale,"tempyscale");
	HX_VISIT_MEMBER_NAME(Text_obj::tempxpivot,"tempxpivot");
	HX_VISIT_MEMBER_NAME(Text_obj::tempypivot,"tempypivot");
	HX_VISIT_MEMBER_NAME(Text_obj::tempalpha,"tempalpha");
	HX_VISIT_MEMBER_NAME(Text_obj::tempred,"tempred");
	HX_VISIT_MEMBER_NAME(Text_obj::tempgreen,"tempgreen");
	HX_VISIT_MEMBER_NAME(Text_obj::tempblue,"tempblue");
	HX_VISIT_MEMBER_NAME(Text_obj::changecolours,"changecolours");
	HX_VISIT_MEMBER_NAME(Text_obj::alphact,"alphact");
	HX_VISIT_MEMBER_NAME(Text_obj::wordwrap_width,"wordwrap_width");
	HX_VISIT_MEMBER_NAME(Text_obj::wordwrap_text,"wordwrap_text");
	HX_VISIT_MEMBER_NAME(Text_obj::inputtext,"inputtext");
	HX_VISIT_MEMBER_NAME(Text_obj::lastentry,"lastentry");
	HX_VISIT_MEMBER_NAME(Text_obj::inputmaxlength,"inputmaxlength");
	HX_VISIT_MEMBER_NAME(Text_obj::input_textxp,"input_textxp");
	HX_VISIT_MEMBER_NAME(Text_obj::input_textyp,"input_textyp");
	HX_VISIT_MEMBER_NAME(Text_obj::input_responsexp,"input_responsexp");
	HX_VISIT_MEMBER_NAME(Text_obj::input_responseyp,"input_responseyp");
	HX_VISIT_MEMBER_NAME(Text_obj::input_textcol,"input_textcol");
	HX_VISIT_MEMBER_NAME(Text_obj::input_responsecol,"input_responsecol");
	HX_VISIT_MEMBER_NAME(Text_obj::input_text,"input_text");
	HX_VISIT_MEMBER_NAME(Text_obj::input_response,"input_response");
	HX_VISIT_MEMBER_NAME(Text_obj::input_cursorglow,"input_cursorglow");
	HX_VISIT_MEMBER_NAME(Text_obj::input_font,"input_font");
	HX_VISIT_MEMBER_NAME(Text_obj::input_textsize,"input_textsize");
	HX_VISIT_MEMBER_NAME(Text_obj::input_show,"input_show");
};

#endif

hx::Class Text_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("init","\x10","\x3b","\xbb","\x45"),
	HX_HCSTRING("align","\xc5","\x56","\x91","\x21"),
	HX_HCSTRING("rotation","\x3e","\x3d","\x86","\x08"),
	HX_HCSTRING("input_checkfortext","\x03","\x6d","\xd3","\x28"),
	HX_HCSTRING("reverse","\x22","\x39","\xfc","\x1a"),
	HX_HCSTRING("input","\x0a","\xc4","\x1d","\xbe"),
	HX_HCSTRING("getinput","\xb4","\x63","\xc7","\x8a"),
	HX_HCSTRING("drawstringinput","\x15","\x10","\x58","\x17"),
	HX_HCSTRING("wordwrap","\x94","\xe8","\x01","\x16"),
	HX_HCSTRING("dowordwrap","\x1f","\x43","\xc5","\xa9"),
	HX_HCSTRING("currentlen","\x3c","\x59","\x45","\xc7"),
	HX_HCSTRING("currentheight","\xe0","\x14","\x14","\xb1"),
	HX_HCSTRING("len","\xd5","\x4b","\x52","\x00"),
	HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"),
	HX_HCSTRING("t1","\x3d","\x65","\x00","\x00"),
	HX_HCSTRING("t2","\x3e","\x65","\x00","\x00"),
	HX_HCSTRING("t3","\x3f","\x65","\x00","\x00"),
	HX_HCSTRING("cachealignx","\xd5","\x4d","\xa7","\x27"),
	HX_HCSTRING("cachealigny","\xd6","\x4d","\xa7","\x27"),
	HX_HCSTRING("alignx","\x13","\x96","\x9a","\x3d"),
	HX_HCSTRING("aligny","\x14","\x96","\x9a","\x3d"),
	HX_HCSTRING("cachealigntextx","\x08","\x0b","\xaf","\xfb"),
	HX_HCSTRING("cachealigntexty","\x09","\x0b","\xaf","\xfb"),
	HX_HCSTRING("aligntextx","\x46","\x4a","\xbe","\x13"),
	HX_HCSTRING("aligntexty","\x47","\x4a","\xbe","\x13"),
	HX_HCSTRING("cachedtextindex","\x23","\x4f","\xdc","\xc8"),
	HX_HCSTRING("cachedtext","\x8f","\xc5","\x96","\x90"),
	HX_HCSTRING("cacheindex","\x90","\x91","\x9f","\x6d"),
	HX_HCSTRING("cachelabel","\x72","\x04","\x3a","\x1f"),
	HX_HCSTRING("cleartextcache","\x48","\x2f","\x07","\x63"),
	HX_HCSTRING("display","\x42","\x2a","\x4a","\xbb"),
	HX_HCSTRING("cache_bitmap_text","\x80","\x59","\x71","\x69"),
	HX_HCSTRING("display_bitmap","\x8c","\xa3","\x33","\x07"),
	HX_HCSTRING("display_ttf","\x29","\x23","\x3d","\x3c"),
	HX_HCSTRING("createtypeface","\x53","\x4f","\x30","\x3e"),
	HX_HCSTRING("setfont","\x71","\x72","\x6b","\x1e"),
	HX_HCSTRING("changesize","\x31","\xaa","\xc3","\x3b"),
	HX_HCSTRING("addfont","\x70","\x74","\x24","\x95"),
	HX_HCSTRING("addtypeface","\x78","\x07","\x52","\x1d"),
	HX_HCSTRING("getfonttypename","\x6a","\x98","\xe2","\x6d"),
	HX_HCSTRING("fontfile","\xcb","\xbf","\x60","\xdb"),
	HX_HCSTRING("fontfileindex","\x67","\xbb","\x11","\xfb"),
	HX_HCSTRING("typeface","\x57","\x8c","\xa7","\xc5"),
	HX_HCSTRING("typefaceindex","\x5b","\xf3","\x9d","\xda"),
	HX_HCSTRING("fontmatrix","\x50","\x59","\x87","\x3b"),
	HX_HCSTRING("currentindex","\x39","\x10","\xf3","\x71"),
	HX_HCSTRING("currentfont","\x88","\x0a","\x79","\x91"),
	HX_HCSTRING("currentsize","\x7a","\x4d","\x0c","\x9a"),
	HX_HCSTRING("gfxstage","\xa5","\xf2","\xb7","\x13"),
	HX_HCSTRING("drawto","\x7f","\x9a","\xd6","\xdf"),
	HX_HCSTRING("LEFT","\x07","\xd0","\x70","\x32"),
	HX_HCSTRING("RIGHT","\xbc","\x43","\x52","\x67"),
	HX_HCSTRING("TOP","\x75","\x02","\x40","\x00"),
	HX_HCSTRING("BOTTOM","\xeb","\x92","\xfb","\x17"),
	HX_HCSTRING("CENTER","\xd5","\xd1","\x5d","\xb8"),
	HX_HCSTRING("textalign","\xf8","\x76","\x51","\x27"),
	HX_HCSTRING("textrotate","\xc8","\x52","\x7c","\xcd"),
	HX_HCSTRING("textrotatexpivot","\x12","\x30","\xc0","\x2c"),
	HX_HCSTRING("textrotateypivot","\x71","\x8c","\x1b","\x93"),
	HX_HCSTRING("textalphamult","\x01","\xcc","\x45","\x0d"),
	HX_HCSTRING("temprotate","\x6f","\x90","\xfb","\xb1"),
	HX_HCSTRING("tempxscale","\x26","\x65","\x7d","\x5a"),
	HX_HCSTRING("tempyscale","\x85","\xc1","\xd8","\xc0"),
	HX_HCSTRING("tempxpivot","\x5e","\xe1","\x50","\xa4"),
	HX_HCSTRING("tempypivot","\xbd","\x3d","\xac","\x0a"),
	HX_HCSTRING("tempalpha","\xca","\x3b","\x7d","\xc4"),
	HX_HCSTRING("tempred","\xbd","\x3a","\xd1","\x46"),
	HX_HCSTRING("tempgreen","\x2f","\xa3","\xd3","\x3c"),
	HX_HCSTRING("tempblue","\xae","\x1f","\xb4","\xa5"),
	HX_HCSTRING("changecolours","\x37","\xf7","\xeb","\x82"),
	HX_HCSTRING("alphact","\x8f","\x11","\x16","\xb2"),
	HX_HCSTRING("wordwrap_width","\xdb","\x8c","\x12","\x51"),
	HX_HCSTRING("wordwrap_text","\x78","\x67","\xf1","\x7e"),
	HX_HCSTRING("inputtext","\xb7","\x5d","\x4b","\x29"),
	HX_HCSTRING("lastentry","\x5c","\x36","\x06","\x2a"),
	HX_HCSTRING("inputmaxlength","\x40","\x9d","\xf0","\x36"),
	HX_HCSTRING("input_textxp","\xba","\xbd","\xda","\x11"),
	HX_HCSTRING("input_textyp","\x99","\xbe","\xda","\x11"),
	HX_HCSTRING("input_responsexp","\x0e","\x4b","\x6b","\x22"),
	HX_HCSTRING("input_responseyp","\xed","\x4b","\x6b","\x22"),
	HX_HCSTRING("input_textcol","\x3e","\x55","\x7b","\x8d"),
	HX_HCSTRING("input_responsecol","\x6a","\x71","\x66","\xfb"),
	HX_HCSTRING("input_text","\x42","\x40","\x18","\xeb"),
	HX_HCSTRING("input_response","\x96","\x10","\x95","\x86"),
	HX_HCSTRING("input_cursorglow","\xb8","\xd1","\x63","\x96"),
	HX_HCSTRING("input_font","\x64","\xd1","\xde","\xe1"),
	HX_HCSTRING("input_textsize","\x03","\x2a","\xfe","\x48"),
	HX_HCSTRING("input_show","\x92","\x48","\x71","\xea"),
	::String(null()) };

void Text_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxegon.Text","\x1b","\x8b","\xcf","\xa0");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Text_obj::__GetStatic;
	__mClass->mSetStaticField = &Text_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Text_obj >;
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

void Text_obj::__boot()
{
struct _Function_0_1{
	inline static ::haxe::ds::StringMap Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxegon/Text.hx",391,0xb667cca2)
		{
			HX_STACK_LINE(391)
			::haxe::ds::StringMap tmp = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(391)
			::haxe::ds::StringMap tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(391)
			return tmp1;
		}
		return null();
	}
};
	cachedtextindex= _Function_0_1::Block();
	cachedtext= Array_obj< ::Dynamic >::__new();
	fontfile= Array_obj< ::Dynamic >::__new();
struct _Function_0_2{
	inline static ::haxe::ds::StringMap Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxegon/Text.hx",757,0xb667cca2)
		{
			HX_STACK_LINE(757)
			::haxe::ds::StringMap tmp = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(757)
			::haxe::ds::StringMap tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(757)
			return tmp1;
		}
		return null();
	}
};
	fontfileindex= _Function_0_2::Block();
	typeface= Array_obj< ::Dynamic >::__new();
struct _Function_0_3{
	inline static ::haxe::ds::StringMap Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxegon/Text.hx",760,0xb667cca2)
		{
			HX_STACK_LINE(760)
			::haxe::ds::StringMap tmp = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(760)
			::haxe::ds::StringMap tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(760)
			return tmp1;
		}
		return null();
	}
};
	typefaceindex= _Function_0_3::Block();
	fontmatrix= ::openfl::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());
	currentindex= (int)-1;
	currentfont= HX_HCSTRING("null","\x87","\x9e","\x0e","\x49");
	currentsize= ((Float)-1);
	LEFT= (int)-10000;
	RIGHT= (int)-20000;
	TOP= (int)-10000;
	BOTTOM= (int)-20000;
	CENTER= (int)-15000;
	textalign= (int)-10000;
	textrotate= ((Float)0);
	textrotatexpivot= ((Float)0);
	textrotateypivot= ((Float)0);
	textalphamult= ((Float)1.0);
	temprotate= ((Float)0);
	tempxscale= ((Float)1);
	tempyscale= ((Float)1);
	tempxpivot= ((Float)0);
	tempypivot= ((Float)0);
	tempalpha= ((Float)1);
	tempred= ((Float)1);
	tempgreen= ((Float)1);
	tempblue= ((Float)1);
	changecolours= false;
	wordwrap_width= (int)0;
}

} // end namespace haxegon
