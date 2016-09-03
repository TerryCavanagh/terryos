#include <hxcpp.h>

#ifndef INCLUDED_cpp_Prime
#include <cpp/Prime.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_io_Error
#include <haxe/io/Error.h>
#endif
#ifndef INCLUDED_lime_math_Vector2
#include <lime/math/Vector2.h>
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
namespace lime{
namespace text{

Void TextLayout_obj::__construct(::String __o_text,::lime::text::Font font,hx::Null< int >  __o_size,hx::Null< int >  __o_direction,::String __o_script,::String __o_language)
{
HX_STACK_FRAME("lime.text.TextLayout","new",0xa8c39291,"lime.text.TextLayout.new","lime/text/TextLayout.hx",36,0x8df0119f)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_text,"text")
HX_STACK_ARG(font,"font")
HX_STACK_ARG(__o_size,"size")
HX_STACK_ARG(__o_direction,"direction")
HX_STACK_ARG(__o_script,"script")
HX_STACK_ARG(__o_language,"language")
::String text = __o_text.Default(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
int size = __o_size.Default(12);
int direction = __o_direction.Default(4);
::String script = __o_script.Default(HX_HCSTRING("Zyyy","\x7f","\x6e","\xd9","\x3b"));
::String language = __o_language.Default(HX_HCSTRING("en","\x69","\x58","\x00","\x00"));
{
	HX_STACK_LINE(38)
	::String tmp = text;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(38)
	this->set_text(tmp);
	HX_STACK_LINE(39)
	::lime::text::Font tmp1 = font;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(39)
	this->set_font(tmp1);
	HX_STACK_LINE(40)
	int tmp2 = size;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(40)
	this->set_size(tmp2);
	HX_STACK_LINE(41)
	this->__direction = direction;
	HX_STACK_LINE(42)
	this->__script = script;
	HX_STACK_LINE(43)
	this->__language = language;
	HX_STACK_LINE(45)
	this->positions = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(46)
	this->__dirty = true;
	HX_STACK_LINE(49)
	this->__handle = ((Dynamic)(::lime::text::TextLayout_obj::cffi_lime_text_layout_create.call(this->__direction,this->__script,this->__language)));
}
;
	return null();
}

//TextLayout_obj::~TextLayout_obj() { }

Dynamic TextLayout_obj::__CreateEmpty() { return  new TextLayout_obj; }
hx::ObjectPtr< TextLayout_obj > TextLayout_obj::__new(::String __o_text,::lime::text::Font font,hx::Null< int >  __o_size,hx::Null< int >  __o_direction,::String __o_script,::String __o_language)
{  hx::ObjectPtr< TextLayout_obj > _result_ = new TextLayout_obj();
	_result_->__construct(__o_text,font,__o_size,__o_direction,__o_script,__o_language);
	return _result_;}

Dynamic TextLayout_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TextLayout_obj > _result_ = new TextLayout_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5]);
	return _result_;}

Void TextLayout_obj::__position( ){
{
		HX_STACK_FRAME("lime.text.TextLayout","__position",0x6ec769b8,"lime.text.TextLayout.__position","lime/text/TextLayout.hx",54,0x8df0119f)
		HX_STACK_THIS(this)
		HX_STACK_LINE(56)
		this->positions = Array_obj< ::Dynamic >::__new();
		HX_STACK_LINE(60)
		Dynamic tmp = this->__handle;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(60)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(60)
		bool tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(60)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(60)
		if ((tmp2)){
			HX_STACK_LINE(60)
			::String tmp4 = this->text;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(60)
			::String tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(60)
			::String tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(60)
			tmp3 = (tmp6 != null());
		}
		else{
			HX_STACK_LINE(60)
			tmp3 = false;
		}
		HX_STACK_LINE(60)
		bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(60)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(60)
		if ((tmp4)){
			HX_STACK_LINE(60)
			::String tmp6 = this->text;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(60)
			::String tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(60)
			::String tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(60)
			tmp5 = (tmp8 != HX_HCSTRING("","\x00","\x00","\x00","\x00"));
		}
		else{
			HX_STACK_LINE(60)
			tmp5 = false;
		}
		HX_STACK_LINE(60)
		bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(60)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(60)
		if ((tmp6)){
			HX_STACK_LINE(60)
			::lime::text::Font tmp8 = this->font;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(60)
			::lime::text::Font tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(60)
			::lime::text::Font tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(60)
			tmp7 = (tmp10 != null());
		}
		else{
			HX_STACK_LINE(60)
			tmp7 = false;
		}
		HX_STACK_LINE(60)
		bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(60)
		if ((tmp7)){
			HX_STACK_LINE(60)
			::lime::text::Font tmp9 = this->font;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(60)
			::lime::text::Font tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(60)
			Dynamic tmp11 = tmp10->src;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(60)
			tmp8 = (tmp11 != null());
		}
		else{
			HX_STACK_LINE(60)
			tmp8 = false;
		}
		HX_STACK_LINE(60)
		if ((tmp8)){
			HX_STACK_LINE(62)
			::haxe::io::Bytes tmp9 = this->__buffer;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(62)
			bool tmp10 = (tmp9 == null());		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(62)
			if ((tmp10)){
				HX_STACK_LINE(64)
				::haxe::io::Bytes tmp11 = ::haxe::io::Bytes_obj::alloc((int)1);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(64)
				this->__buffer = tmp11;
			}
			HX_STACK_LINE(69)
			Dynamic data = ((Dynamic)(::lime::text::TextLayout_obj::cffi_lime_text_layout_position.call(hx::DynamicPtr(this->__handle),hx::DynamicPtr(this->font->src),this->size,this->text,hx::DynamicPtr(this->__buffer))));		HX_STACK_VAR(data,"data");
			HX_STACK_LINE(70)
			int position = (int)0;		HX_STACK_VAR(position,"position");
			HX_STACK_LINE(72)
			::haxe::io::Bytes tmp11 = this->__buffer;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(72)
			int tmp12 = tmp11->length;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(72)
			bool tmp13 = (tmp12 > (int)4);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(72)
			if ((tmp13)){
				HX_STACK_LINE(74)
				int tmp14;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(74)
				{
					HX_STACK_LINE(74)
					::haxe::io::Bytes tmp15 = this->__buffer;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(74)
					::haxe::io::Bytes _this = tmp15;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(74)
					int tmp16 = _this->b->__get(position);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(74)
					int tmp17 = (position + (int)1);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(74)
					int tmp18 = _this->b->__get(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(74)
					int tmp19 = (int(tmp18) << int((int)8));		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(74)
					int tmp20 = (int(tmp16) | int(tmp19));		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(74)
					int tmp21 = (position + (int)2);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(74)
					int tmp22 = _this->b->__get(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(74)
					int tmp23 = (int(tmp22) << int((int)16));		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(74)
					int tmp24 = (int(tmp20) | int(tmp23));		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(74)
					int tmp25 = (position + (int)3);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(74)
					int tmp26 = _this->b->__get(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(74)
					int tmp27 = (int(tmp26) << int((int)24));		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(74)
					tmp14 = (int(tmp24) | int(tmp27));
				}
				HX_STACK_LINE(74)
				int count = tmp14;		HX_STACK_VAR(count,"count");
				HX_STACK_LINE(74)
				hx::AddEq(position,(int)4);
				HX_STACK_LINE(75)
				int index;		HX_STACK_VAR(index,"index");
				HX_STACK_LINE(75)
				Float advanceX;		HX_STACK_VAR(advanceX,"advanceX");
				HX_STACK_LINE(75)
				Float advanceY;		HX_STACK_VAR(advanceY,"advanceY");
				HX_STACK_LINE(75)
				Float offsetX;		HX_STACK_VAR(offsetX,"offsetX");
				HX_STACK_LINE(75)
				Float offsetY;		HX_STACK_VAR(offsetY,"offsetY");
				HX_STACK_LINE(77)
				{
					HX_STACK_LINE(77)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(77)
					while((true)){
						HX_STACK_LINE(77)
						bool tmp15 = (_g < count);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(77)
						bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(77)
						if ((tmp16)){
							HX_STACK_LINE(77)
							break;
						}
						HX_STACK_LINE(77)
						int tmp17 = (_g)++;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(77)
						int i = tmp17;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(79)
						int tmp18;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(79)
						{
							HX_STACK_LINE(79)
							::haxe::io::Bytes tmp19 = this->__buffer;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(79)
							::haxe::io::Bytes _this = tmp19;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(79)
							int tmp20 = _this->b->__get(position);		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(79)
							int tmp21 = (position + (int)1);		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(79)
							int tmp22 = _this->b->__get(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(79)
							int tmp23 = (int(tmp22) << int((int)8));		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(79)
							int tmp24 = (int(tmp20) | int(tmp23));		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(79)
							int tmp25 = (position + (int)2);		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(79)
							int tmp26 = _this->b->__get(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(79)
							int tmp27 = (int(tmp26) << int((int)16));		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(79)
							int tmp28 = (int(tmp24) | int(tmp27));		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(79)
							int tmp29 = (position + (int)3);		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(79)
							int tmp30 = _this->b->__get(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(79)
							int tmp31 = (int(tmp30) << int((int)24));		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(79)
							tmp18 = (int(tmp28) | int(tmp31));
						}
						HX_STACK_LINE(79)
						index = tmp18;
						HX_STACK_LINE(79)
						hx::AddEq(position,(int)4);
						HX_STACK_LINE(80)
						Float tmp19;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(80)
						{
							HX_STACK_LINE(80)
							::haxe::io::Bytes tmp20 = this->__buffer;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(80)
							::haxe::io::Bytes _this = tmp20;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(80)
							bool tmp21 = (position < (int)0);		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(80)
							bool tmp22 = !(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(80)
							bool tmp23;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(80)
							if ((tmp22)){
								HX_STACK_LINE(80)
								int tmp24 = (position + (int)4);		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(80)
								int tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(80)
								int tmp26 = _this->length;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(80)
								tmp23 = (tmp25 > tmp26);
							}
							else{
								HX_STACK_LINE(80)
								tmp23 = true;
							}
							HX_STACK_LINE(80)
							if ((tmp23)){
								HX_STACK_LINE(80)
								HX_STACK_DO_THROW(::haxe::io::Error_obj::OutsideBounds);
							}
							HX_STACK_LINE(80)
							tmp19 = ::__hxcpp_memory_get_float(_this->b,position);
						}
						HX_STACK_LINE(80)
						advanceX = tmp19;
						HX_STACK_LINE(80)
						hx::AddEq(position,(int)4);
						HX_STACK_LINE(81)
						Float tmp20;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(81)
						{
							HX_STACK_LINE(81)
							::haxe::io::Bytes tmp21 = this->__buffer;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(81)
							::haxe::io::Bytes _this = tmp21;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(81)
							bool tmp22 = (position < (int)0);		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(81)
							bool tmp23 = !(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(81)
							bool tmp24;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(81)
							if ((tmp23)){
								HX_STACK_LINE(81)
								int tmp25 = (position + (int)4);		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(81)
								int tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(81)
								int tmp27 = _this->length;		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(81)
								tmp24 = (tmp26 > tmp27);
							}
							else{
								HX_STACK_LINE(81)
								tmp24 = true;
							}
							HX_STACK_LINE(81)
							if ((tmp24)){
								HX_STACK_LINE(81)
								HX_STACK_DO_THROW(::haxe::io::Error_obj::OutsideBounds);
							}
							HX_STACK_LINE(81)
							tmp20 = ::__hxcpp_memory_get_float(_this->b,position);
						}
						HX_STACK_LINE(81)
						advanceY = tmp20;
						HX_STACK_LINE(81)
						hx::AddEq(position,(int)4);
						HX_STACK_LINE(82)
						Float tmp21;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(82)
						{
							HX_STACK_LINE(82)
							::haxe::io::Bytes tmp22 = this->__buffer;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(82)
							::haxe::io::Bytes _this = tmp22;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(82)
							bool tmp23 = (position < (int)0);		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(82)
							bool tmp24 = !(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(82)
							bool tmp25;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(82)
							if ((tmp24)){
								HX_STACK_LINE(82)
								int tmp26 = (position + (int)4);		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(82)
								int tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(82)
								int tmp28 = _this->length;		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(82)
								tmp25 = (tmp27 > tmp28);
							}
							else{
								HX_STACK_LINE(82)
								tmp25 = true;
							}
							HX_STACK_LINE(82)
							if ((tmp25)){
								HX_STACK_LINE(82)
								HX_STACK_DO_THROW(::haxe::io::Error_obj::OutsideBounds);
							}
							HX_STACK_LINE(82)
							tmp21 = ::__hxcpp_memory_get_float(_this->b,position);
						}
						HX_STACK_LINE(82)
						offsetX = tmp21;
						HX_STACK_LINE(82)
						hx::AddEq(position,(int)4);
						HX_STACK_LINE(83)
						Float tmp22;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(83)
						{
							HX_STACK_LINE(83)
							::haxe::io::Bytes tmp23 = this->__buffer;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(83)
							::haxe::io::Bytes _this = tmp23;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(83)
							bool tmp24 = (position < (int)0);		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(83)
							bool tmp25 = !(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(83)
							bool tmp26;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(83)
							if ((tmp25)){
								HX_STACK_LINE(83)
								int tmp27 = (position + (int)4);		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(83)
								int tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(83)
								int tmp29 = _this->length;		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(83)
								tmp26 = (tmp28 > tmp29);
							}
							else{
								HX_STACK_LINE(83)
								tmp26 = true;
							}
							HX_STACK_LINE(83)
							if ((tmp26)){
								HX_STACK_LINE(83)
								HX_STACK_DO_THROW(::haxe::io::Error_obj::OutsideBounds);
							}
							HX_STACK_LINE(83)
							tmp22 = ::__hxcpp_memory_get_float(_this->b,position);
						}
						HX_STACK_LINE(83)
						offsetY = tmp22;
						HX_STACK_LINE(83)
						hx::AddEq(position,(int)4);
						HX_STACK_LINE(85)
						int tmp23 = index;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(85)
						::lime::math::Vector2 tmp24 = ::lime::math::Vector2_obj::__new(advanceX,advanceY);		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(85)
						::lime::math::Vector2 tmp25 = ::lime::math::Vector2_obj::__new(offsetX,offsetY);		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(85)
						::lime::text::GlyphPosition tmp26 = ::lime::text::GlyphPosition_obj::__new(tmp23,tmp24,tmp25);		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(85)
						this->get_positions()->push(tmp26);
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TextLayout_obj,__position,(void))

Array< ::Dynamic > TextLayout_obj::get_positions( ){
	HX_STACK_FRAME("lime.text.TextLayout","get_positions",0xf2be90f2,"lime.text.TextLayout.get_positions","lime/text/TextLayout.hx",104,0x8df0119f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(106)
	bool tmp = this->__dirty;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(106)
	if ((tmp)){
		HX_STACK_LINE(108)
		this->__dirty = false;
		HX_STACK_LINE(109)
		this->__position();
	}
	HX_STACK_LINE(113)
	return this->positions;
}


HX_DEFINE_DYNAMIC_FUNC0(TextLayout_obj,get_positions,return )

int TextLayout_obj::get_direction( ){
	HX_STACK_FRAME("lime.text.TextLayout","get_direction",0x32acff87,"lime.text.TextLayout.get_direction","lime/text/TextLayout.hx",118,0x8df0119f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(120)
	int tmp = this->__direction;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(120)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(TextLayout_obj,get_direction,return )

int TextLayout_obj::set_direction( int value){
	HX_STACK_FRAME("lime.text.TextLayout","set_direction",0x77b2e193,"lime.text.TextLayout.set_direction","lime/text/TextLayout.hx",125,0x8df0119f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(127)
	int tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(127)
	int tmp1 = this->__direction;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(127)
	bool tmp2 = (tmp == tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(127)
	if ((tmp2)){
		HX_STACK_LINE(127)
		int tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(127)
		return tmp3;
	}
	HX_STACK_LINE(129)
	this->__direction = value;
	HX_STACK_LINE(132)
	::lime::text::TextLayout_obj::cffi_lime_text_layout_set_direction.call(hx::DynamicPtr(this->__handle),value);
	HX_STACK_LINE(135)
	this->__dirty = true;
	HX_STACK_LINE(137)
	int tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(137)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(TextLayout_obj,set_direction,return )

::lime::text::Font TextLayout_obj::set_font( ::lime::text::Font value){
	HX_STACK_FRAME("lime.text.TextLayout","set_font",0xaa861efb,"lime.text.TextLayout.set_font","lime/text/TextLayout.hx",142,0x8df0119f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(144)
	::lime::text::Font tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(144)
	::lime::text::Font tmp1 = this->font;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(144)
	bool tmp2 = (tmp == tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(144)
	if ((tmp2)){
		HX_STACK_LINE(144)
		::lime::text::Font tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(144)
		return tmp3;
	}
	HX_STACK_LINE(146)
	this->font = value;
	HX_STACK_LINE(147)
	this->__dirty = true;
	HX_STACK_LINE(148)
	::lime::text::Font tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(148)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(TextLayout_obj,set_font,return )

Array< int > TextLayout_obj::get_glyphs( ){
	HX_STACK_FRAME("lime.text.TextLayout","get_glyphs",0x9f74beff,"lime.text.TextLayout.get_glyphs","lime/text/TextLayout.hx",153,0x8df0119f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(155)
	Array< int > glyphs = Array_obj< int >::__new();		HX_STACK_VAR(glyphs,"glyphs");
	HX_STACK_LINE(157)
	{
		HX_STACK_LINE(157)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(157)
		Array< ::Dynamic > _g1 = this->get_positions();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(157)
		while((true)){
			HX_STACK_LINE(157)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(157)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(157)
			if ((tmp1)){
				HX_STACK_LINE(157)
				break;
			}
			HX_STACK_LINE(157)
			::lime::text::GlyphPosition tmp2 = _g1->__get(_g).StaticCast< ::lime::text::GlyphPosition >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(157)
			::lime::text::GlyphPosition position = tmp2;		HX_STACK_VAR(position,"position");
			HX_STACK_LINE(157)
			++(_g);
			HX_STACK_LINE(159)
			int tmp3 = position->glyph;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(159)
			glyphs->push(tmp3);
		}
	}
	HX_STACK_LINE(163)
	return glyphs;
}


HX_DEFINE_DYNAMIC_FUNC0(TextLayout_obj,get_glyphs,return )

::String TextLayout_obj::get_language( ){
	HX_STACK_FRAME("lime.text.TextLayout","get_language",0xbdf42410,"lime.text.TextLayout.get_language","lime/text/TextLayout.hx",168,0x8df0119f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(170)
	::String tmp = this->__language;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(170)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(TextLayout_obj,get_language,return )

::String TextLayout_obj::set_language( ::String value){
	HX_STACK_FRAME("lime.text.TextLayout","set_language",0xd2ed4784,"lime.text.TextLayout.set_language","lime/text/TextLayout.hx",175,0x8df0119f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(177)
	::String tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(177)
	::String tmp1 = this->__language;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(177)
	bool tmp2 = (tmp == tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(177)
	if ((tmp2)){
		HX_STACK_LINE(177)
		::String tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(177)
		return tmp3;
	}
	HX_STACK_LINE(179)
	this->__language = value;
	HX_STACK_LINE(182)
	::lime::text::TextLayout_obj::cffi_lime_text_layout_set_language.call(hx::DynamicPtr(this->__handle),value);
	HX_STACK_LINE(185)
	this->__dirty = true;
	HX_STACK_LINE(187)
	::String tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(187)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(TextLayout_obj,set_language,return )

::String TextLayout_obj::get_script( ){
	HX_STACK_FRAME("lime.text.TextLayout","get_script",0x387c13c3,"lime.text.TextLayout.get_script","lime/text/TextLayout.hx",192,0x8df0119f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(194)
	::String tmp = this->__script;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(194)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(TextLayout_obj,get_script,return )

::String TextLayout_obj::set_script( ::String value){
	HX_STACK_FRAME("lime.text.TextLayout","set_script",0x3bf9b237,"lime.text.TextLayout.set_script","lime/text/TextLayout.hx",199,0x8df0119f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(201)
	::String tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(201)
	::String tmp1 = this->__script;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(201)
	bool tmp2 = (tmp == tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(201)
	if ((tmp2)){
		HX_STACK_LINE(201)
		::String tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(201)
		return tmp3;
	}
	HX_STACK_LINE(203)
	this->__script = value;
	HX_STACK_LINE(206)
	::lime::text::TextLayout_obj::cffi_lime_text_layout_set_script.call(hx::DynamicPtr(this->__handle),value);
	HX_STACK_LINE(209)
	this->__dirty = true;
	HX_STACK_LINE(211)
	::String tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(211)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(TextLayout_obj,set_script,return )

int TextLayout_obj::set_size( int value){
	HX_STACK_FRAME("lime.text.TextLayout","set_size",0xb31961ed,"lime.text.TextLayout.set_size","lime/text/TextLayout.hx",216,0x8df0119f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(218)
	int tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(218)
	int tmp1 = this->size;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(218)
	bool tmp2 = (tmp == tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(218)
	if ((tmp2)){
		HX_STACK_LINE(218)
		int tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(218)
		return tmp3;
	}
	HX_STACK_LINE(220)
	this->size = value;
	HX_STACK_LINE(221)
	this->__dirty = true;
	HX_STACK_LINE(222)
	int tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(222)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(TextLayout_obj,set_size,return )

::String TextLayout_obj::set_text( ::String value){
	HX_STACK_FRAME("lime.text.TextLayout","set_text",0xb3bf8dd9,"lime.text.TextLayout.set_text","lime/text/TextLayout.hx",227,0x8df0119f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(229)
	::String tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(229)
	::String tmp1 = this->text;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(229)
	bool tmp2 = (tmp == tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(229)
	if ((tmp2)){
		HX_STACK_LINE(229)
		::String tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(229)
		return tmp3;
	}
	HX_STACK_LINE(231)
	this->text = value;
	HX_STACK_LINE(232)
	this->__dirty = true;
	HX_STACK_LINE(233)
	::String tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(233)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(TextLayout_obj,set_text,return )

Dynamic TextLayout_obj::lime_text_layout_create( int direction,::String script,::String language){
	HX_STACK_FRAME("lime.text.TextLayout","lime_text_layout_create",0x00c1b3ba,"lime.text.TextLayout.lime_text_layout_create","lime/text/TextLayout.hx",246,0x8df0119f)
	HX_STACK_ARG(direction,"direction")
	HX_STACK_ARG(script,"script")
	HX_STACK_ARG(language,"language")
	HX_STACK_LINE(246)
	return ::lime::text::TextLayout_obj::cffi_lime_text_layout_create.call(direction,script,language);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(TextLayout_obj,lime_text_layout_create,return )

Dynamic TextLayout_obj::lime_text_layout_position( Dynamic textHandle,Dynamic fontHandle,int size,::String textString,Dynamic data){
	HX_STACK_FRAME("lime.text.TextLayout","lime_text_layout_position",0x9a6818e7,"lime.text.TextLayout.lime_text_layout_position","lime/text/TextLayout.hx",247,0x8df0119f)
	HX_STACK_ARG(textHandle,"textHandle")
	HX_STACK_ARG(fontHandle,"fontHandle")
	HX_STACK_ARG(size,"size")
	HX_STACK_ARG(textString,"textString")
	HX_STACK_ARG(data,"data")
	HX_STACK_LINE(247)
	return ::lime::text::TextLayout_obj::cffi_lime_text_layout_position.call(hx::DynamicPtr(textHandle),hx::DynamicPtr(fontHandle),size,textString,hx::DynamicPtr(data));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(TextLayout_obj,lime_text_layout_position,return )

Void TextLayout_obj::lime_text_layout_set_direction( Dynamic textHandle,int direction){
{
		HX_STACK_FRAME("lime.text.TextLayout","lime_text_layout_set_direction",0xd989ff24,"lime.text.TextLayout.lime_text_layout_set_direction","lime/text/TextLayout.hx",248,0x8df0119f)
		HX_STACK_ARG(textHandle,"textHandle")
		HX_STACK_ARG(direction,"direction")
		HX_STACK_LINE(248)
		::lime::text::TextLayout_obj::cffi_lime_text_layout_set_direction.call(hx::DynamicPtr(textHandle),direction);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(TextLayout_obj,lime_text_layout_set_direction,(void))

Void TextLayout_obj::lime_text_layout_set_language( Dynamic textHandle,::String language){
{
		HX_STACK_FRAME("lime.text.TextLayout","lime_text_layout_set_language",0x9685c713,"lime.text.TextLayout.lime_text_layout_set_language","lime/text/TextLayout.hx",249,0x8df0119f)
		HX_STACK_ARG(textHandle,"textHandle")
		HX_STACK_ARG(language,"language")
		HX_STACK_LINE(249)
		::lime::text::TextLayout_obj::cffi_lime_text_layout_set_language.call(hx::DynamicPtr(textHandle),language);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(TextLayout_obj,lime_text_layout_set_language,(void))

Void TextLayout_obj::lime_text_layout_set_script( Dynamic textHandle,::String script){
{
		HX_STACK_FRAME("lime.text.TextLayout","lime_text_layout_set_script",0xdb4fe006,"lime.text.TextLayout.lime_text_layout_set_script","lime/text/TextLayout.hx",250,0x8df0119f)
		HX_STACK_ARG(textHandle,"textHandle")
		HX_STACK_ARG(script,"script")
		HX_STACK_LINE(250)
		::lime::text::TextLayout_obj::cffi_lime_text_layout_set_script.call(hx::DynamicPtr(textHandle),script);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(TextLayout_obj,lime_text_layout_set_script,(void))

::cpp::Function< ::hx::Object * ( int ,::String ,::String ) > TextLayout_obj::cffi_lime_text_layout_create;

::cpp::Function< ::hx::Object * ( ::hx::Object * ,::hx::Object * ,int ,::String ,::hx::Object * ) > TextLayout_obj::cffi_lime_text_layout_position;

::cpp::Function< void ( ::hx::Object * ,int ) > TextLayout_obj::cffi_lime_text_layout_set_direction;

::cpp::Function< void ( ::hx::Object * ,::String ) > TextLayout_obj::cffi_lime_text_layout_set_language;

::cpp::Function< void ( ::hx::Object * ,::String ) > TextLayout_obj::cffi_lime_text_layout_set_script;


TextLayout_obj::TextLayout_obj()
{
}

void TextLayout_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TextLayout);
	HX_MARK_MEMBER_NAME(font,"font");
	HX_MARK_MEMBER_NAME(glyphs,"glyphs");
	HX_MARK_MEMBER_NAME(positions,"positions");
	HX_MARK_MEMBER_NAME(size,"size");
	HX_MARK_MEMBER_NAME(text,"text");
	HX_MARK_MEMBER_NAME(__dirty,"__dirty");
	HX_MARK_MEMBER_NAME(__buffer,"__buffer");
	HX_MARK_MEMBER_NAME(__direction,"__direction");
	HX_MARK_MEMBER_NAME(__handle,"__handle");
	HX_MARK_MEMBER_NAME(__language,"__language");
	HX_MARK_MEMBER_NAME(__script,"__script");
	HX_MARK_END_CLASS();
}

void TextLayout_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(font,"font");
	HX_VISIT_MEMBER_NAME(glyphs,"glyphs");
	HX_VISIT_MEMBER_NAME(positions,"positions");
	HX_VISIT_MEMBER_NAME(size,"size");
	HX_VISIT_MEMBER_NAME(text,"text");
	HX_VISIT_MEMBER_NAME(__dirty,"__dirty");
	HX_VISIT_MEMBER_NAME(__buffer,"__buffer");
	HX_VISIT_MEMBER_NAME(__direction,"__direction");
	HX_VISIT_MEMBER_NAME(__handle,"__handle");
	HX_VISIT_MEMBER_NAME(__language,"__language");
	HX_VISIT_MEMBER_NAME(__script,"__script");
}

Dynamic TextLayout_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"font") ) { return font; }
		if (HX_FIELD_EQ(inName,"size") ) { return size; }
		if (HX_FIELD_EQ(inName,"text") ) { return text; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"glyphs") ) { return inCallProp == hx::paccAlways ? get_glyphs() : glyphs; }
		if (HX_FIELD_EQ(inName,"script") ) { if (inCallProp == hx::paccAlways) return get_script(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"__dirty") ) { return __dirty; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"language") ) { if (inCallProp == hx::paccAlways) return get_language(); }
		if (HX_FIELD_EQ(inName,"__buffer") ) { return __buffer; }
		if (HX_FIELD_EQ(inName,"__handle") ) { return __handle; }
		if (HX_FIELD_EQ(inName,"__script") ) { return __script; }
		if (HX_FIELD_EQ(inName,"set_font") ) { return set_font_dyn(); }
		if (HX_FIELD_EQ(inName,"set_size") ) { return set_size_dyn(); }
		if (HX_FIELD_EQ(inName,"set_text") ) { return set_text_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"direction") ) { if (inCallProp == hx::paccAlways) return get_direction(); }
		if (HX_FIELD_EQ(inName,"positions") ) { return inCallProp == hx::paccAlways ? get_positions() : positions; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"__language") ) { return __language; }
		if (HX_FIELD_EQ(inName,"__position") ) { return __position_dyn(); }
		if (HX_FIELD_EQ(inName,"get_glyphs") ) { return get_glyphs_dyn(); }
		if (HX_FIELD_EQ(inName,"get_script") ) { return get_script_dyn(); }
		if (HX_FIELD_EQ(inName,"set_script") ) { return set_script_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"__direction") ) { return __direction; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_language") ) { return get_language_dyn(); }
		if (HX_FIELD_EQ(inName,"set_language") ) { return set_language_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_positions") ) { return get_positions_dyn(); }
		if (HX_FIELD_EQ(inName,"get_direction") ) { return get_direction_dyn(); }
		if (HX_FIELD_EQ(inName,"set_direction") ) { return set_direction_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool TextLayout_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 23:
		if (HX_FIELD_EQ(inName,"lime_text_layout_create") ) { outValue = lime_text_layout_create_dyn(); return true;  }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"lime_text_layout_position") ) { outValue = lime_text_layout_position_dyn(); return true;  }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"lime_text_layout_set_script") ) { outValue = lime_text_layout_set_script_dyn(); return true;  }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"cffi_lime_text_layout_create") ) { outValue = cffi_lime_text_layout_create; return true;  }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"lime_text_layout_set_language") ) { outValue = lime_text_layout_set_language_dyn(); return true;  }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"lime_text_layout_set_direction") ) { outValue = lime_text_layout_set_direction_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_text_layout_position") ) { outValue = cffi_lime_text_layout_position; return true;  }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"cffi_lime_text_layout_set_script") ) { outValue = cffi_lime_text_layout_set_script; return true;  }
		break;
	case 34:
		if (HX_FIELD_EQ(inName,"cffi_lime_text_layout_set_language") ) { outValue = cffi_lime_text_layout_set_language; return true;  }
		break;
	case 35:
		if (HX_FIELD_EQ(inName,"cffi_lime_text_layout_set_direction") ) { outValue = cffi_lime_text_layout_set_direction; return true;  }
	}
	return false;
}

Dynamic TextLayout_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"font") ) { if (inCallProp == hx::paccAlways) return set_font(inValue);font=inValue.Cast< ::lime::text::Font >(); return inValue; }
		if (HX_FIELD_EQ(inName,"size") ) { if (inCallProp == hx::paccAlways) return set_size(inValue);size=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"text") ) { if (inCallProp == hx::paccAlways) return set_text(inValue);text=inValue.Cast< ::String >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"glyphs") ) { glyphs=inValue.Cast< Array< int > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"script") ) { if (inCallProp == hx::paccAlways) return set_script(inValue); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"__dirty") ) { __dirty=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"language") ) { if (inCallProp == hx::paccAlways) return set_language(inValue); }
		if (HX_FIELD_EQ(inName,"__buffer") ) { __buffer=inValue.Cast< ::haxe::io::Bytes >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__handle") ) { __handle=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__script") ) { __script=inValue.Cast< ::String >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"direction") ) { if (inCallProp == hx::paccAlways) return set_direction(inValue); }
		if (HX_FIELD_EQ(inName,"positions") ) { positions=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"__language") ) { __language=inValue.Cast< ::String >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"__direction") ) { __direction=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool TextLayout_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 28:
		if (HX_FIELD_EQ(inName,"cffi_lime_text_layout_create") ) { cffi_lime_text_layout_create=ioValue.Cast< ::cpp::Function< ::hx::Object * ( int ,::String ,::String ) > >(); return true; }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"cffi_lime_text_layout_position") ) { cffi_lime_text_layout_position=ioValue.Cast< ::cpp::Function< ::hx::Object * ( ::hx::Object * ,::hx::Object * ,int ,::String ,::hx::Object * ) > >(); return true; }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"cffi_lime_text_layout_set_script") ) { cffi_lime_text_layout_set_script=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ,::String ) > >(); return true; }
		break;
	case 34:
		if (HX_FIELD_EQ(inName,"cffi_lime_text_layout_set_language") ) { cffi_lime_text_layout_set_language=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ,::String ) > >(); return true; }
		break;
	case 35:
		if (HX_FIELD_EQ(inName,"cffi_lime_text_layout_set_direction") ) { cffi_lime_text_layout_set_direction=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ,int ) > >(); return true; }
	}
	return false;
}

void TextLayout_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("direction","\x3f","\x62","\x40","\x10"));
	outFields->push(HX_HCSTRING("font","\xcf","\x5d","\xc0","\x43"));
	outFields->push(HX_HCSTRING("glyphs","\x47","\xf9","\x58","\xae"));
	outFields->push(HX_HCSTRING("language","\x58","\x80","\x11","\x7a"));
	outFields->push(HX_HCSTRING("positions","\xaa","\xf3","\x51","\xd0"));
	outFields->push(HX_HCSTRING("script","\x0b","\x4e","\x60","\x47"));
	outFields->push(HX_HCSTRING("size","\xc1","\xa0","\x53","\x4c"));
	outFields->push(HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c"));
	outFields->push(HX_HCSTRING("__dirty","\xf2","\xa8","\x2e","\x44"));
	outFields->push(HX_HCSTRING("__buffer","\x20","\x28","\xc4","\x78"));
	outFields->push(HX_HCSTRING("__direction","\x1f","\xab","\x6c","\x3e"));
	outFields->push(HX_HCSTRING("__handle","\xc8","\xee","\x2c","\x60"));
	outFields->push(HX_HCSTRING("__language","\x78","\xf3","\x49","\x1d"));
	outFields->push(HX_HCSTRING("__script","\x2b","\xb9","\x8f","\xef"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::lime::text::Font*/ ,(int)offsetof(TextLayout_obj,font),HX_HCSTRING("font","\xcf","\x5d","\xc0","\x43")},
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(TextLayout_obj,glyphs),HX_HCSTRING("glyphs","\x47","\xf9","\x58","\xae")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(TextLayout_obj,positions),HX_HCSTRING("positions","\xaa","\xf3","\x51","\xd0")},
	{hx::fsInt,(int)offsetof(TextLayout_obj,size),HX_HCSTRING("size","\xc1","\xa0","\x53","\x4c")},
	{hx::fsString,(int)offsetof(TextLayout_obj,text),HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c")},
	{hx::fsBool,(int)offsetof(TextLayout_obj,__dirty),HX_HCSTRING("__dirty","\xf2","\xa8","\x2e","\x44")},
	{hx::fsObject /*::haxe::io::Bytes*/ ,(int)offsetof(TextLayout_obj,__buffer),HX_HCSTRING("__buffer","\x20","\x28","\xc4","\x78")},
	{hx::fsInt,(int)offsetof(TextLayout_obj,__direction),HX_HCSTRING("__direction","\x1f","\xab","\x6c","\x3e")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(TextLayout_obj,__handle),HX_HCSTRING("__handle","\xc8","\xee","\x2c","\x60")},
	{hx::fsString,(int)offsetof(TextLayout_obj,__language),HX_HCSTRING("__language","\x78","\xf3","\x49","\x1d")},
	{hx::fsString,(int)offsetof(TextLayout_obj,__script),HX_HCSTRING("__script","\x2b","\xb9","\x8f","\xef")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::cpp::Function< ::hx::Object * ( int ,::String ,::String ) >*/ ,(void *) &TextLayout_obj::cffi_lime_text_layout_create,HX_HCSTRING("cffi_lime_text_layout_create","\x30","\x9f","\x85","\x5c")},
	{hx::fsObject /*::cpp::Function< ::hx::Object * ( ::hx::Object * ,::hx::Object * ,int ,::String ,::hx::Object * ) >*/ ,(void *) &TextLayout_obj::cffi_lime_text_layout_position,HX_HCSTRING("cffi_lime_text_layout_position","\xdd","\x4d","\x96","\x5f")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ,int ) >*/ ,(void *) &TextLayout_obj::cffi_lime_text_layout_set_direction,HX_HCSTRING("cffi_lime_text_layout_set_direction","\x6e","\x0e","\x2a","\x78")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ,::String ) >*/ ,(void *) &TextLayout_obj::cffi_lime_text_layout_set_language,HX_HCSTRING("cffi_lime_text_layout_set_language","\x09","\xaf","\x70","\x05")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ,::String ) >*/ ,(void *) &TextLayout_obj::cffi_lime_text_layout_set_script,HX_HCSTRING("cffi_lime_text_layout_set_script","\x7c","\xbe","\x2d","\xf0")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("font","\xcf","\x5d","\xc0","\x43"),
	HX_HCSTRING("glyphs","\x47","\xf9","\x58","\xae"),
	HX_HCSTRING("positions","\xaa","\xf3","\x51","\xd0"),
	HX_HCSTRING("size","\xc1","\xa0","\x53","\x4c"),
	HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c"),
	HX_HCSTRING("__dirty","\xf2","\xa8","\x2e","\x44"),
	HX_HCSTRING("__buffer","\x20","\x28","\xc4","\x78"),
	HX_HCSTRING("__direction","\x1f","\xab","\x6c","\x3e"),
	HX_HCSTRING("__handle","\xc8","\xee","\x2c","\x60"),
	HX_HCSTRING("__language","\x78","\xf3","\x49","\x1d"),
	HX_HCSTRING("__script","\x2b","\xb9","\x8f","\xef"),
	HX_HCSTRING("__position","\xc9","\x13","\x33","\x6e"),
	HX_HCSTRING("get_positions","\x81","\xc7","\xb5","\x91"),
	HX_HCSTRING("get_direction","\x16","\x36","\xa4","\xd1"),
	HX_HCSTRING("set_direction","\x22","\x18","\xaa","\x16"),
	HX_HCSTRING("set_font","\xcc","\x72","\xd8","\x71"),
	HX_HCSTRING("get_glyphs","\x10","\x69","\xe0","\x9e"),
	HX_HCSTRING("get_language","\x61","\x34","\x2b","\x2f"),
	HX_HCSTRING("set_language","\xd5","\x57","\x24","\x44"),
	HX_HCSTRING("get_script","\xd4","\xbd","\xe7","\x37"),
	HX_HCSTRING("set_script","\x48","\x5c","\x65","\x3b"),
	HX_HCSTRING("set_size","\xbe","\xb5","\x6b","\x7a"),
	HX_HCSTRING("set_text","\xaa","\xe1","\x11","\x7b"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TextLayout_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(TextLayout_obj::cffi_lime_text_layout_create,"cffi_lime_text_layout_create");
	HX_MARK_MEMBER_NAME(TextLayout_obj::cffi_lime_text_layout_position,"cffi_lime_text_layout_position");
	HX_MARK_MEMBER_NAME(TextLayout_obj::cffi_lime_text_layout_set_direction,"cffi_lime_text_layout_set_direction");
	HX_MARK_MEMBER_NAME(TextLayout_obj::cffi_lime_text_layout_set_language,"cffi_lime_text_layout_set_language");
	HX_MARK_MEMBER_NAME(TextLayout_obj::cffi_lime_text_layout_set_script,"cffi_lime_text_layout_set_script");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TextLayout_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(TextLayout_obj::cffi_lime_text_layout_create,"cffi_lime_text_layout_create");
	HX_VISIT_MEMBER_NAME(TextLayout_obj::cffi_lime_text_layout_position,"cffi_lime_text_layout_position");
	HX_VISIT_MEMBER_NAME(TextLayout_obj::cffi_lime_text_layout_set_direction,"cffi_lime_text_layout_set_direction");
	HX_VISIT_MEMBER_NAME(TextLayout_obj::cffi_lime_text_layout_set_language,"cffi_lime_text_layout_set_language");
	HX_VISIT_MEMBER_NAME(TextLayout_obj::cffi_lime_text_layout_set_script,"cffi_lime_text_layout_set_script");
};

#endif

hx::Class TextLayout_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("lime_text_layout_create","\x09","\x53","\x56","\x81"),
	HX_HCSTRING("lime_text_layout_position","\xf6","\x69","\xde","\xe0"),
	HX_HCSTRING("lime_text_layout_set_direction","\xb5","\x77","\xe8","\x4e"),
	HX_HCSTRING("lime_text_layout_set_language","\xa2","\x4b","\xfb","\x67"),
	HX_HCSTRING("lime_text_layout_set_script","\xd5","\xd2","\xc7","\x68"),
	HX_HCSTRING("cffi_lime_text_layout_create","\x30","\x9f","\x85","\x5c"),
	HX_HCSTRING("cffi_lime_text_layout_position","\xdd","\x4d","\x96","\x5f"),
	HX_HCSTRING("cffi_lime_text_layout_set_direction","\x6e","\x0e","\x2a","\x78"),
	HX_HCSTRING("cffi_lime_text_layout_set_language","\x09","\xaf","\x70","\x05"),
	HX_HCSTRING("cffi_lime_text_layout_set_script","\x7c","\xbe","\x2d","\xf0"),
	::String(null()) };

void TextLayout_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.text.TextLayout","\x1f","\xf6","\xe8","\x09");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &TextLayout_obj::__GetStatic;
	__mClass->mSetStaticField = &TextLayout_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< TextLayout_obj >;
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

void TextLayout_obj::__boot()
{
	cffi_lime_text_layout_create= ::cpp::Function< ::hx::Object * ( int ,::String ,::String ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_text_layout_create","\x09","\x53","\x56","\x81"),HX_HCSTRING("isso","\x06","\x0f","\xbf","\x45"),false));
	cffi_lime_text_layout_position= ::cpp::Function< ::hx::Object * ( ::hx::Object * ,::hx::Object * ,int ,::String ,::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_text_layout_position","\xf6","\x69","\xde","\xe0"),HX_HCSTRING("ooisoo","\xaa","\x7c","\xd6","\x90"),false));
	cffi_lime_text_layout_set_direction= ::cpp::Function< void ( ::hx::Object * ,int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_text_layout_set_direction","\xb5","\x77","\xe8","\x4e"),HX_HCSTRING("oiv","\x1c","\x96","\x54","\x00"),false));
	cffi_lime_text_layout_set_language= ::cpp::Function< void ( ::hx::Object * ,::String ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_text_layout_set_language","\xa2","\x4b","\xfb","\x67"),HX_HCSTRING("osv","\xd2","\x9e","\x54","\x00"),false));
	cffi_lime_text_layout_set_script= ::cpp::Function< void ( ::hx::Object * ,::String ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_text_layout_set_script","\xd5","\xd2","\xc7","\x68"),HX_HCSTRING("osv","\xd2","\x9e","\x54","\x00"),false));
}

} // end namespace lime
} // end namespace text
