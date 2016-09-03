#include <hxcpp.h>

#ifndef INCLUDED_openfl__Vector_FloatVector
#include <openfl/_Vector/FloatVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_IVector
#include <openfl/_Vector/IVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_IntVector
#include <openfl/_Vector/IntVector.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_DrawCommandBuffer
#include <openfl/_internal/renderer/DrawCommandBuffer.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_DrawCommandReader
#include <openfl/_internal/renderer/DrawCommandReader.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_DrawCommandType
#include <openfl/_internal/renderer/DrawCommandType.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif
namespace openfl{
namespace _internal{
namespace renderer{

Void DrawCommandBuffer_obj::__construct()
{
HX_STACK_FRAME("openfl._internal.renderer.DrawCommandBuffer","new",0xdc2c151e,"openfl._internal.renderer.DrawCommandBuffer.new","openfl/_internal/renderer/DrawCommandBuffer.hx",34,0xbc8e6e11)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(36)
	this->types = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(38)
	this->b = Array_obj< bool >::__new();
	HX_STACK_LINE(39)
	this->i = Array_obj< int >::__new();
	HX_STACK_LINE(40)
	this->f = Array_obj< Float >::__new();
	HX_STACK_LINE(41)
	this->o = cpp::ArrayBase_obj::__new();
	HX_STACK_LINE(42)
	this->ff = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(43)
	this->ii = Array_obj< ::Dynamic >::__new();
}
;
	return null();
}

//DrawCommandBuffer_obj::~DrawCommandBuffer_obj() { }

Dynamic DrawCommandBuffer_obj::__CreateEmpty() { return  new DrawCommandBuffer_obj; }
hx::ObjectPtr< DrawCommandBuffer_obj > DrawCommandBuffer_obj::__new()
{  hx::ObjectPtr< DrawCommandBuffer_obj > _result_ = new DrawCommandBuffer_obj();
	_result_->__construct();
	return _result_;}

Dynamic DrawCommandBuffer_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< DrawCommandBuffer_obj > _result_ = new DrawCommandBuffer_obj();
	_result_->__construct();
	return _result_;}

::openfl::_internal::renderer::DrawCommandBuffer DrawCommandBuffer_obj::append( ::openfl::_internal::renderer::DrawCommandBuffer other){
	HX_STACK_FRAME("openfl._internal.renderer.DrawCommandBuffer","append",0x1b14a7dc,"openfl._internal.renderer.DrawCommandBuffer.append","openfl/_internal/renderer/DrawCommandBuffer.hx",48,0xbc8e6e11)
	HX_STACK_THIS(this)
	HX_STACK_ARG(other,"other")
	HX_STACK_LINE(50)
	::openfl::_internal::renderer::DrawCommandReader tmp = ::openfl::_internal::renderer::DrawCommandReader_obj::__new(other);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(50)
	::openfl::_internal::renderer::DrawCommandReader data = tmp;		HX_STACK_VAR(data,"data");
	HX_STACK_LINE(52)
	{
		HX_STACK_LINE(52)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(52)
		Array< ::Dynamic > _g1 = other->types;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(52)
		while((true)){
			HX_STACK_LINE(52)
			bool tmp1 = (_g < _g1->length);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(52)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(52)
			if ((tmp2)){
				HX_STACK_LINE(52)
				break;
			}
			HX_STACK_LINE(52)
			::openfl::_internal::renderer::DrawCommandType tmp3 = _g1->__get(_g).StaticCast< ::openfl::_internal::renderer::DrawCommandType >();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(52)
			::openfl::_internal::renderer::DrawCommandType type = tmp3;		HX_STACK_VAR(type,"type");
			HX_STACK_LINE(52)
			++(_g);
			HX_STACK_LINE(54)
			switch( (int)(type->__Index())){
				case (int)0: {
					HX_STACK_LINE(56)
					::openfl::_internal::renderer::DrawCommandReader tmp4;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(56)
					{
						HX_STACK_LINE(56)
						{
							HX_STACK_LINE(56)
							::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(56)
							switch( (int)(_g2->__Index())){
								case (int)0: {
									HX_STACK_LINE(56)
									hx::AddEq(data->oPos,(int)2);
									HX_STACK_LINE(56)
									hx::AddEq(data->bPos,(int)2);
								}
								;break;
								case (int)1: {
									HX_STACK_LINE(56)
									hx::AddEq(data->iPos,(int)1);
									HX_STACK_LINE(56)
									hx::AddEq(data->fPos,(int)1);
								}
								;break;
								case (int)2: {
									HX_STACK_LINE(56)
									hx::AddEq(data->oPos,(int)4);
									HX_STACK_LINE(56)
									hx::AddEq(data->iiPos,(int)2);
									HX_STACK_LINE(56)
									hx::AddEq(data->ffPos,(int)1);
									HX_STACK_LINE(56)
									hx::AddEq(data->fPos,(int)1);
								}
								;break;
								case (int)3: {
									HX_STACK_LINE(56)
									hx::AddEq(data->fPos,(int)6);
								}
								;break;
								case (int)4: {
									HX_STACK_LINE(56)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)5: {
									HX_STACK_LINE(56)
									hx::AddEq(data->fPos,(int)3);
								}
								;break;
								case (int)6: {
									HX_STACK_LINE(56)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)7: {
									HX_STACK_LINE(56)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)8: {
									HX_STACK_LINE(56)
									hx::AddEq(data->fPos,(int)5);
									HX_STACK_LINE(56)
									hx::AddEq(data->oPos,(int)1);
								}
								;break;
								case (int)10: {
									HX_STACK_LINE(56)
									hx::AddEq(data->oPos,(int)4);
								}
								;break;
								case (int)11: {
									HX_STACK_LINE(56)
									Dynamic();
								}
								;break;
								case (int)12: {
									HX_STACK_LINE(56)
									hx::AddEq(data->oPos,(int)2);
									HX_STACK_LINE(56)
									hx::AddEq(data->bPos,(int)2);
								}
								;break;
								case (int)13: {
									HX_STACK_LINE(56)
									hx::AddEq(data->oPos,(int)4);
									HX_STACK_LINE(56)
									hx::AddEq(data->iiPos,(int)2);
									HX_STACK_LINE(56)
									hx::AddEq(data->ffPos,(int)1);
									HX_STACK_LINE(56)
									hx::AddEq(data->fPos,(int)1);
								}
								;break;
								case (int)14: {
									HX_STACK_LINE(56)
									hx::AddEq(data->oPos,(int)4);
									HX_STACK_LINE(56)
									hx::AddEq(data->iPos,(int)1);
									HX_STACK_LINE(56)
									hx::AddEq(data->fPos,(int)2);
									HX_STACK_LINE(56)
									hx::AddEq(data->bPos,(int)1);
								}
								;break;
								case (int)15: {
									HX_STACK_LINE(56)
									hx::AddEq(data->fPos,(int)2);
								}
								;break;
								case (int)16: {
									HX_STACK_LINE(56)
									hx::AddEq(data->fPos,(int)2);
								}
								;break;
								case (int)17: {
									HX_STACK_LINE(56)
									hx::AddEq(data->oPos,(int)1);
								}
								;break;
								default: {
									HX_STACK_LINE(56)
									Dynamic();
								}
							}
						}
						HX_STACK_LINE(56)
						data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::BEGIN_BITMAP_FILL;
						HX_STACK_LINE(56)
						tmp4 = data;
					}
					HX_STACK_LINE(56)
					::openfl::_internal::renderer::DrawCommandReader c = tmp4;		HX_STACK_VAR(c,"c");
					HX_STACK_LINE(56)
					::openfl::_internal::renderer::DrawCommandBuffer tmp5 = c->buffer;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(56)
					int tmp6 = c->oPos;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(56)
					int tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(56)
					Dynamic tmp8 = tmp5->o->__GetItem(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(56)
					::openfl::display::BitmapData tmp9 = ((::openfl::display::BitmapData)(tmp8));		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(56)
					::openfl::_internal::renderer::DrawCommandBuffer tmp10 = c->buffer;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(56)
					int tmp11 = c->oPos;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(56)
					int tmp12 = (tmp11 + (int)1);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(56)
					Dynamic tmp13 = tmp10->o->__GetItem(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(56)
					::openfl::geom::Matrix tmp14 = ((::openfl::geom::Matrix)(tmp13));		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(56)
					::openfl::_internal::renderer::DrawCommandBuffer tmp15 = c->buffer;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(56)
					int tmp16 = c->bPos;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(56)
					int tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(56)
					bool tmp18 = tmp15->b->__get(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(56)
					::openfl::_internal::renderer::DrawCommandBuffer tmp19 = c->buffer;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(56)
					int tmp20 = c->bPos;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(56)
					int tmp21 = (tmp20 + (int)1);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(56)
					bool tmp22 = tmp19->b->__get(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(56)
					this->beginBitmapFill(tmp9,tmp14,tmp18,tmp22);
				}
				;break;
				case (int)1: {
					HX_STACK_LINE(57)
					::openfl::_internal::renderer::DrawCommandReader tmp4;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(57)
					{
						HX_STACK_LINE(57)
						{
							HX_STACK_LINE(57)
							::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(57)
							switch( (int)(_g2->__Index())){
								case (int)0: {
									HX_STACK_LINE(57)
									hx::AddEq(data->oPos,(int)2);
									HX_STACK_LINE(57)
									hx::AddEq(data->bPos,(int)2);
								}
								;break;
								case (int)1: {
									HX_STACK_LINE(57)
									hx::AddEq(data->iPos,(int)1);
									HX_STACK_LINE(57)
									hx::AddEq(data->fPos,(int)1);
								}
								;break;
								case (int)2: {
									HX_STACK_LINE(57)
									hx::AddEq(data->oPos,(int)4);
									HX_STACK_LINE(57)
									hx::AddEq(data->iiPos,(int)2);
									HX_STACK_LINE(57)
									hx::AddEq(data->ffPos,(int)1);
									HX_STACK_LINE(57)
									hx::AddEq(data->fPos,(int)1);
								}
								;break;
								case (int)3: {
									HX_STACK_LINE(57)
									hx::AddEq(data->fPos,(int)6);
								}
								;break;
								case (int)4: {
									HX_STACK_LINE(57)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)5: {
									HX_STACK_LINE(57)
									hx::AddEq(data->fPos,(int)3);
								}
								;break;
								case (int)6: {
									HX_STACK_LINE(57)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)7: {
									HX_STACK_LINE(57)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)8: {
									HX_STACK_LINE(57)
									hx::AddEq(data->fPos,(int)5);
									HX_STACK_LINE(57)
									hx::AddEq(data->oPos,(int)1);
								}
								;break;
								case (int)10: {
									HX_STACK_LINE(57)
									hx::AddEq(data->oPos,(int)4);
								}
								;break;
								case (int)11: {
									HX_STACK_LINE(57)
									Dynamic();
								}
								;break;
								case (int)12: {
									HX_STACK_LINE(57)
									hx::AddEq(data->oPos,(int)2);
									HX_STACK_LINE(57)
									hx::AddEq(data->bPos,(int)2);
								}
								;break;
								case (int)13: {
									HX_STACK_LINE(57)
									hx::AddEq(data->oPos,(int)4);
									HX_STACK_LINE(57)
									hx::AddEq(data->iiPos,(int)2);
									HX_STACK_LINE(57)
									hx::AddEq(data->ffPos,(int)1);
									HX_STACK_LINE(57)
									hx::AddEq(data->fPos,(int)1);
								}
								;break;
								case (int)14: {
									HX_STACK_LINE(57)
									hx::AddEq(data->oPos,(int)4);
									HX_STACK_LINE(57)
									hx::AddEq(data->iPos,(int)1);
									HX_STACK_LINE(57)
									hx::AddEq(data->fPos,(int)2);
									HX_STACK_LINE(57)
									hx::AddEq(data->bPos,(int)1);
								}
								;break;
								case (int)15: {
									HX_STACK_LINE(57)
									hx::AddEq(data->fPos,(int)2);
								}
								;break;
								case (int)16: {
									HX_STACK_LINE(57)
									hx::AddEq(data->fPos,(int)2);
								}
								;break;
								case (int)17: {
									HX_STACK_LINE(57)
									hx::AddEq(data->oPos,(int)1);
								}
								;break;
								default: {
									HX_STACK_LINE(57)
									Dynamic();
								}
							}
						}
						HX_STACK_LINE(57)
						data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::BEGIN_FILL;
						HX_STACK_LINE(57)
						tmp4 = data;
					}
					HX_STACK_LINE(57)
					::openfl::_internal::renderer::DrawCommandReader c = tmp4;		HX_STACK_VAR(c,"c");
					HX_STACK_LINE(57)
					::openfl::_internal::renderer::DrawCommandBuffer tmp5 = c->buffer;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(57)
					int tmp6 = c->iPos;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(57)
					int tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(57)
					int tmp8 = tmp5->i->__get(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(57)
					::openfl::_internal::renderer::DrawCommandBuffer tmp9 = c->buffer;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(57)
					int tmp10 = c->fPos;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(57)
					int tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(57)
					Float tmp12 = tmp9->f->__get(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(57)
					this->beginFill(tmp8,tmp12);
				}
				;break;
				case (int)2: {
					HX_STACK_LINE(58)
					::openfl::_internal::renderer::DrawCommandReader tmp4;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(58)
					{
						HX_STACK_LINE(58)
						{
							HX_STACK_LINE(58)
							::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(58)
							switch( (int)(_g2->__Index())){
								case (int)0: {
									HX_STACK_LINE(58)
									hx::AddEq(data->oPos,(int)2);
									HX_STACK_LINE(58)
									hx::AddEq(data->bPos,(int)2);
								}
								;break;
								case (int)1: {
									HX_STACK_LINE(58)
									hx::AddEq(data->iPos,(int)1);
									HX_STACK_LINE(58)
									hx::AddEq(data->fPos,(int)1);
								}
								;break;
								case (int)2: {
									HX_STACK_LINE(58)
									hx::AddEq(data->oPos,(int)4);
									HX_STACK_LINE(58)
									hx::AddEq(data->iiPos,(int)2);
									HX_STACK_LINE(58)
									hx::AddEq(data->ffPos,(int)1);
									HX_STACK_LINE(58)
									hx::AddEq(data->fPos,(int)1);
								}
								;break;
								case (int)3: {
									HX_STACK_LINE(58)
									hx::AddEq(data->fPos,(int)6);
								}
								;break;
								case (int)4: {
									HX_STACK_LINE(58)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)5: {
									HX_STACK_LINE(58)
									hx::AddEq(data->fPos,(int)3);
								}
								;break;
								case (int)6: {
									HX_STACK_LINE(58)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)7: {
									HX_STACK_LINE(58)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)8: {
									HX_STACK_LINE(58)
									hx::AddEq(data->fPos,(int)5);
									HX_STACK_LINE(58)
									hx::AddEq(data->oPos,(int)1);
								}
								;break;
								case (int)10: {
									HX_STACK_LINE(58)
									hx::AddEq(data->oPos,(int)4);
								}
								;break;
								case (int)11: {
									HX_STACK_LINE(58)
									Dynamic();
								}
								;break;
								case (int)12: {
									HX_STACK_LINE(58)
									hx::AddEq(data->oPos,(int)2);
									HX_STACK_LINE(58)
									hx::AddEq(data->bPos,(int)2);
								}
								;break;
								case (int)13: {
									HX_STACK_LINE(58)
									hx::AddEq(data->oPos,(int)4);
									HX_STACK_LINE(58)
									hx::AddEq(data->iiPos,(int)2);
									HX_STACK_LINE(58)
									hx::AddEq(data->ffPos,(int)1);
									HX_STACK_LINE(58)
									hx::AddEq(data->fPos,(int)1);
								}
								;break;
								case (int)14: {
									HX_STACK_LINE(58)
									hx::AddEq(data->oPos,(int)4);
									HX_STACK_LINE(58)
									hx::AddEq(data->iPos,(int)1);
									HX_STACK_LINE(58)
									hx::AddEq(data->fPos,(int)2);
									HX_STACK_LINE(58)
									hx::AddEq(data->bPos,(int)1);
								}
								;break;
								case (int)15: {
									HX_STACK_LINE(58)
									hx::AddEq(data->fPos,(int)2);
								}
								;break;
								case (int)16: {
									HX_STACK_LINE(58)
									hx::AddEq(data->fPos,(int)2);
								}
								;break;
								case (int)17: {
									HX_STACK_LINE(58)
									hx::AddEq(data->oPos,(int)1);
								}
								;break;
								default: {
									HX_STACK_LINE(58)
									Dynamic();
								}
							}
						}
						HX_STACK_LINE(58)
						data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::BEGIN_GRADIENT_FILL;
						HX_STACK_LINE(58)
						tmp4 = data;
					}
					HX_STACK_LINE(58)
					::openfl::_internal::renderer::DrawCommandReader c = tmp4;		HX_STACK_VAR(c,"c");
					HX_STACK_LINE(58)
					::openfl::_internal::renderer::DrawCommandBuffer tmp5 = c->buffer;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(58)
					int tmp6 = c->oPos;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(58)
					int tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(58)
					Dynamic tmp8 = tmp5->o->__GetItem(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(58)
					Dynamic tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(58)
					::openfl::_internal::renderer::DrawCommandBuffer tmp10 = c->buffer;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(58)
					int tmp11 = c->iiPos;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(58)
					int tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(58)
					::openfl::_internal::renderer::DrawCommandBuffer tmp13 = c->buffer;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(58)
					int tmp14 = c->ffPos;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(58)
					int tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(58)
					::openfl::_internal::renderer::DrawCommandBuffer tmp16 = c->buffer;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(58)
					int tmp17 = c->iiPos;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(58)
					int tmp18 = (tmp17 + (int)1);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(58)
					::openfl::_internal::renderer::DrawCommandBuffer tmp19 = c->buffer;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(58)
					int tmp20 = c->oPos;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(58)
					int tmp21 = (tmp20 + (int)1);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(58)
					Dynamic tmp22 = tmp19->o->__GetItem(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(58)
					::openfl::geom::Matrix tmp23 = ((::openfl::geom::Matrix)(tmp22));		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(58)
					::openfl::_internal::renderer::DrawCommandBuffer tmp24 = c->buffer;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(58)
					int tmp25 = c->oPos;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(58)
					int tmp26 = (tmp25 + (int)2);		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(58)
					Dynamic tmp27 = tmp24->o->__GetItem(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(58)
					Dynamic tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(58)
					::openfl::_internal::renderer::DrawCommandBuffer tmp29 = c->buffer;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(58)
					int tmp30 = c->oPos;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(58)
					int tmp31 = (tmp30 + (int)3);		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(58)
					Dynamic tmp32 = tmp29->o->__GetItem(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(58)
					Dynamic tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(58)
					::openfl::_internal::renderer::DrawCommandBuffer tmp34 = c->buffer;		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(58)
					int tmp35 = c->fPos;		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(58)
					int tmp36 = tmp35;		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(58)
					Float tmp37 = tmp34->f->__get(tmp36);		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(58)
					Float tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(58)
					this->beginGradientFill(tmp9,tmp10->ii->__get(tmp12).StaticCast< Array< int > >(),tmp13->ff->__get(tmp15).StaticCast< Array< Float > >(),tmp16->ii->__get(tmp18).StaticCast< Array< int > >(),tmp23,tmp28,tmp33,tmp38);
				}
				;break;
				case (int)3: {
					HX_STACK_LINE(59)
					::openfl::_internal::renderer::DrawCommandReader tmp4;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(59)
					{
						HX_STACK_LINE(59)
						{
							HX_STACK_LINE(59)
							::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(59)
							switch( (int)(_g2->__Index())){
								case (int)0: {
									HX_STACK_LINE(59)
									hx::AddEq(data->oPos,(int)2);
									HX_STACK_LINE(59)
									hx::AddEq(data->bPos,(int)2);
								}
								;break;
								case (int)1: {
									HX_STACK_LINE(59)
									hx::AddEq(data->iPos,(int)1);
									HX_STACK_LINE(59)
									hx::AddEq(data->fPos,(int)1);
								}
								;break;
								case (int)2: {
									HX_STACK_LINE(59)
									hx::AddEq(data->oPos,(int)4);
									HX_STACK_LINE(59)
									hx::AddEq(data->iiPos,(int)2);
									HX_STACK_LINE(59)
									hx::AddEq(data->ffPos,(int)1);
									HX_STACK_LINE(59)
									hx::AddEq(data->fPos,(int)1);
								}
								;break;
								case (int)3: {
									HX_STACK_LINE(59)
									hx::AddEq(data->fPos,(int)6);
								}
								;break;
								case (int)4: {
									HX_STACK_LINE(59)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)5: {
									HX_STACK_LINE(59)
									hx::AddEq(data->fPos,(int)3);
								}
								;break;
								case (int)6: {
									HX_STACK_LINE(59)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)7: {
									HX_STACK_LINE(59)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)8: {
									HX_STACK_LINE(59)
									hx::AddEq(data->fPos,(int)5);
									HX_STACK_LINE(59)
									hx::AddEq(data->oPos,(int)1);
								}
								;break;
								case (int)10: {
									HX_STACK_LINE(59)
									hx::AddEq(data->oPos,(int)4);
								}
								;break;
								case (int)11: {
									HX_STACK_LINE(59)
									Dynamic();
								}
								;break;
								case (int)12: {
									HX_STACK_LINE(59)
									hx::AddEq(data->oPos,(int)2);
									HX_STACK_LINE(59)
									hx::AddEq(data->bPos,(int)2);
								}
								;break;
								case (int)13: {
									HX_STACK_LINE(59)
									hx::AddEq(data->oPos,(int)4);
									HX_STACK_LINE(59)
									hx::AddEq(data->iiPos,(int)2);
									HX_STACK_LINE(59)
									hx::AddEq(data->ffPos,(int)1);
									HX_STACK_LINE(59)
									hx::AddEq(data->fPos,(int)1);
								}
								;break;
								case (int)14: {
									HX_STACK_LINE(59)
									hx::AddEq(data->oPos,(int)4);
									HX_STACK_LINE(59)
									hx::AddEq(data->iPos,(int)1);
									HX_STACK_LINE(59)
									hx::AddEq(data->fPos,(int)2);
									HX_STACK_LINE(59)
									hx::AddEq(data->bPos,(int)1);
								}
								;break;
								case (int)15: {
									HX_STACK_LINE(59)
									hx::AddEq(data->fPos,(int)2);
								}
								;break;
								case (int)16: {
									HX_STACK_LINE(59)
									hx::AddEq(data->fPos,(int)2);
								}
								;break;
								case (int)17: {
									HX_STACK_LINE(59)
									hx::AddEq(data->oPos,(int)1);
								}
								;break;
								default: {
									HX_STACK_LINE(59)
									Dynamic();
								}
							}
						}
						HX_STACK_LINE(59)
						data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::CUBIC_CURVE_TO;
						HX_STACK_LINE(59)
						tmp4 = data;
					}
					HX_STACK_LINE(59)
					::openfl::_internal::renderer::DrawCommandReader c = tmp4;		HX_STACK_VAR(c,"c");
					HX_STACK_LINE(59)
					::openfl::_internal::renderer::DrawCommandBuffer tmp5 = c->buffer;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(59)
					int tmp6 = c->fPos;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(59)
					int tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(59)
					Float tmp8 = tmp5->f->__get(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(59)
					::openfl::_internal::renderer::DrawCommandBuffer tmp9 = c->buffer;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(59)
					int tmp10 = c->fPos;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(59)
					int tmp11 = (tmp10 + (int)1);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(59)
					Float tmp12 = tmp9->f->__get(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(59)
					::openfl::_internal::renderer::DrawCommandBuffer tmp13 = c->buffer;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(59)
					int tmp14 = c->fPos;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(59)
					int tmp15 = (tmp14 + (int)2);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(59)
					Float tmp16 = tmp13->f->__get(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(59)
					::openfl::_internal::renderer::DrawCommandBuffer tmp17 = c->buffer;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(59)
					int tmp18 = c->fPos;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(59)
					int tmp19 = (tmp18 + (int)3);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(59)
					Float tmp20 = tmp17->f->__get(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(59)
					::openfl::_internal::renderer::DrawCommandBuffer tmp21 = c->buffer;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(59)
					int tmp22 = c->fPos;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(59)
					int tmp23 = (tmp22 + (int)4);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(59)
					Float tmp24 = tmp21->f->__get(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(59)
					::openfl::_internal::renderer::DrawCommandBuffer tmp25 = c->buffer;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(59)
					int tmp26 = c->fPos;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(59)
					int tmp27 = (tmp26 + (int)5);		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(59)
					Float tmp28 = tmp25->f->__get(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(59)
					this->cubicCurveTo(tmp8,tmp12,tmp16,tmp20,tmp24,tmp28);
				}
				;break;
				case (int)4: {
					HX_STACK_LINE(60)
					::openfl::_internal::renderer::DrawCommandReader tmp4;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(60)
					{
						HX_STACK_LINE(60)
						{
							HX_STACK_LINE(60)
							::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(60)
							switch( (int)(_g2->__Index())){
								case (int)0: {
									HX_STACK_LINE(60)
									hx::AddEq(data->oPos,(int)2);
									HX_STACK_LINE(60)
									hx::AddEq(data->bPos,(int)2);
								}
								;break;
								case (int)1: {
									HX_STACK_LINE(60)
									hx::AddEq(data->iPos,(int)1);
									HX_STACK_LINE(60)
									hx::AddEq(data->fPos,(int)1);
								}
								;break;
								case (int)2: {
									HX_STACK_LINE(60)
									hx::AddEq(data->oPos,(int)4);
									HX_STACK_LINE(60)
									hx::AddEq(data->iiPos,(int)2);
									HX_STACK_LINE(60)
									hx::AddEq(data->ffPos,(int)1);
									HX_STACK_LINE(60)
									hx::AddEq(data->fPos,(int)1);
								}
								;break;
								case (int)3: {
									HX_STACK_LINE(60)
									hx::AddEq(data->fPos,(int)6);
								}
								;break;
								case (int)4: {
									HX_STACK_LINE(60)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)5: {
									HX_STACK_LINE(60)
									hx::AddEq(data->fPos,(int)3);
								}
								;break;
								case (int)6: {
									HX_STACK_LINE(60)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)7: {
									HX_STACK_LINE(60)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)8: {
									HX_STACK_LINE(60)
									hx::AddEq(data->fPos,(int)5);
									HX_STACK_LINE(60)
									hx::AddEq(data->oPos,(int)1);
								}
								;break;
								case (int)10: {
									HX_STACK_LINE(60)
									hx::AddEq(data->oPos,(int)4);
								}
								;break;
								case (int)11: {
									HX_STACK_LINE(60)
									Dynamic();
								}
								;break;
								case (int)12: {
									HX_STACK_LINE(60)
									hx::AddEq(data->oPos,(int)2);
									HX_STACK_LINE(60)
									hx::AddEq(data->bPos,(int)2);
								}
								;break;
								case (int)13: {
									HX_STACK_LINE(60)
									hx::AddEq(data->oPos,(int)4);
									HX_STACK_LINE(60)
									hx::AddEq(data->iiPos,(int)2);
									HX_STACK_LINE(60)
									hx::AddEq(data->ffPos,(int)1);
									HX_STACK_LINE(60)
									hx::AddEq(data->fPos,(int)1);
								}
								;break;
								case (int)14: {
									HX_STACK_LINE(60)
									hx::AddEq(data->oPos,(int)4);
									HX_STACK_LINE(60)
									hx::AddEq(data->iPos,(int)1);
									HX_STACK_LINE(60)
									hx::AddEq(data->fPos,(int)2);
									HX_STACK_LINE(60)
									hx::AddEq(data->bPos,(int)1);
								}
								;break;
								case (int)15: {
									HX_STACK_LINE(60)
									hx::AddEq(data->fPos,(int)2);
								}
								;break;
								case (int)16: {
									HX_STACK_LINE(60)
									hx::AddEq(data->fPos,(int)2);
								}
								;break;
								case (int)17: {
									HX_STACK_LINE(60)
									hx::AddEq(data->oPos,(int)1);
								}
								;break;
								default: {
									HX_STACK_LINE(60)
									Dynamic();
								}
							}
						}
						HX_STACK_LINE(60)
						data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::CURVE_TO;
						HX_STACK_LINE(60)
						tmp4 = data;
					}
					HX_STACK_LINE(60)
					::openfl::_internal::renderer::DrawCommandReader c = tmp4;		HX_STACK_VAR(c,"c");
					HX_STACK_LINE(60)
					::openfl::_internal::renderer::DrawCommandBuffer tmp5 = c->buffer;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(60)
					int tmp6 = c->fPos;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(60)
					int tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(60)
					Float tmp8 = tmp5->f->__get(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(60)
					::openfl::_internal::renderer::DrawCommandBuffer tmp9 = c->buffer;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(60)
					int tmp10 = c->fPos;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(60)
					int tmp11 = (tmp10 + (int)1);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(60)
					Float tmp12 = tmp9->f->__get(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(60)
					::openfl::_internal::renderer::DrawCommandBuffer tmp13 = c->buffer;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(60)
					int tmp14 = c->fPos;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(60)
					int tmp15 = (tmp14 + (int)2);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(60)
					Float tmp16 = tmp13->f->__get(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(60)
					::openfl::_internal::renderer::DrawCommandBuffer tmp17 = c->buffer;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(60)
					int tmp18 = c->fPos;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(60)
					int tmp19 = (tmp18 + (int)3);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(60)
					Float tmp20 = tmp17->f->__get(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(60)
					this->curveTo(tmp8,tmp12,tmp16,tmp20);
				}
				;break;
				case (int)5: {
					HX_STACK_LINE(61)
					::openfl::_internal::renderer::DrawCommandReader tmp4;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(61)
					{
						HX_STACK_LINE(61)
						{
							HX_STACK_LINE(61)
							::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(61)
							switch( (int)(_g2->__Index())){
								case (int)0: {
									HX_STACK_LINE(61)
									hx::AddEq(data->oPos,(int)2);
									HX_STACK_LINE(61)
									hx::AddEq(data->bPos,(int)2);
								}
								;break;
								case (int)1: {
									HX_STACK_LINE(61)
									hx::AddEq(data->iPos,(int)1);
									HX_STACK_LINE(61)
									hx::AddEq(data->fPos,(int)1);
								}
								;break;
								case (int)2: {
									HX_STACK_LINE(61)
									hx::AddEq(data->oPos,(int)4);
									HX_STACK_LINE(61)
									hx::AddEq(data->iiPos,(int)2);
									HX_STACK_LINE(61)
									hx::AddEq(data->ffPos,(int)1);
									HX_STACK_LINE(61)
									hx::AddEq(data->fPos,(int)1);
								}
								;break;
								case (int)3: {
									HX_STACK_LINE(61)
									hx::AddEq(data->fPos,(int)6);
								}
								;break;
								case (int)4: {
									HX_STACK_LINE(61)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)5: {
									HX_STACK_LINE(61)
									hx::AddEq(data->fPos,(int)3);
								}
								;break;
								case (int)6: {
									HX_STACK_LINE(61)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)7: {
									HX_STACK_LINE(61)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)8: {
									HX_STACK_LINE(61)
									hx::AddEq(data->fPos,(int)5);
									HX_STACK_LINE(61)
									hx::AddEq(data->oPos,(int)1);
								}
								;break;
								case (int)10: {
									HX_STACK_LINE(61)
									hx::AddEq(data->oPos,(int)4);
								}
								;break;
								case (int)11: {
									HX_STACK_LINE(61)
									Dynamic();
								}
								;break;
								case (int)12: {
									HX_STACK_LINE(61)
									hx::AddEq(data->oPos,(int)2);
									HX_STACK_LINE(61)
									hx::AddEq(data->bPos,(int)2);
								}
								;break;
								case (int)13: {
									HX_STACK_LINE(61)
									hx::AddEq(data->oPos,(int)4);
									HX_STACK_LINE(61)
									hx::AddEq(data->iiPos,(int)2);
									HX_STACK_LINE(61)
									hx::AddEq(data->ffPos,(int)1);
									HX_STACK_LINE(61)
									hx::AddEq(data->fPos,(int)1);
								}
								;break;
								case (int)14: {
									HX_STACK_LINE(61)
									hx::AddEq(data->oPos,(int)4);
									HX_STACK_LINE(61)
									hx::AddEq(data->iPos,(int)1);
									HX_STACK_LINE(61)
									hx::AddEq(data->fPos,(int)2);
									HX_STACK_LINE(61)
									hx::AddEq(data->bPos,(int)1);
								}
								;break;
								case (int)15: {
									HX_STACK_LINE(61)
									hx::AddEq(data->fPos,(int)2);
								}
								;break;
								case (int)16: {
									HX_STACK_LINE(61)
									hx::AddEq(data->fPos,(int)2);
								}
								;break;
								case (int)17: {
									HX_STACK_LINE(61)
									hx::AddEq(data->oPos,(int)1);
								}
								;break;
								default: {
									HX_STACK_LINE(61)
									Dynamic();
								}
							}
						}
						HX_STACK_LINE(61)
						data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::DRAW_CIRCLE;
						HX_STACK_LINE(61)
						tmp4 = data;
					}
					HX_STACK_LINE(61)
					::openfl::_internal::renderer::DrawCommandReader c = tmp4;		HX_STACK_VAR(c,"c");
					HX_STACK_LINE(61)
					::openfl::_internal::renderer::DrawCommandBuffer tmp5 = c->buffer;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(61)
					int tmp6 = c->fPos;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(61)
					int tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(61)
					Float tmp8 = tmp5->f->__get(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(61)
					::openfl::_internal::renderer::DrawCommandBuffer tmp9 = c->buffer;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(61)
					int tmp10 = c->fPos;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(61)
					int tmp11 = (tmp10 + (int)1);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(61)
					Float tmp12 = tmp9->f->__get(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(61)
					::openfl::_internal::renderer::DrawCommandBuffer tmp13 = c->buffer;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(61)
					int tmp14 = c->fPos;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(61)
					int tmp15 = (tmp14 + (int)2);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(61)
					Float tmp16 = tmp13->f->__get(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(61)
					this->drawCircle(tmp8,tmp12,tmp16);
				}
				;break;
				case (int)6: {
					HX_STACK_LINE(62)
					::openfl::_internal::renderer::DrawCommandReader tmp4;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(62)
					{
						HX_STACK_LINE(62)
						{
							HX_STACK_LINE(62)
							::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(62)
							switch( (int)(_g2->__Index())){
								case (int)0: {
									HX_STACK_LINE(62)
									hx::AddEq(data->oPos,(int)2);
									HX_STACK_LINE(62)
									hx::AddEq(data->bPos,(int)2);
								}
								;break;
								case (int)1: {
									HX_STACK_LINE(62)
									hx::AddEq(data->iPos,(int)1);
									HX_STACK_LINE(62)
									hx::AddEq(data->fPos,(int)1);
								}
								;break;
								case (int)2: {
									HX_STACK_LINE(62)
									hx::AddEq(data->oPos,(int)4);
									HX_STACK_LINE(62)
									hx::AddEq(data->iiPos,(int)2);
									HX_STACK_LINE(62)
									hx::AddEq(data->ffPos,(int)1);
									HX_STACK_LINE(62)
									hx::AddEq(data->fPos,(int)1);
								}
								;break;
								case (int)3: {
									HX_STACK_LINE(62)
									hx::AddEq(data->fPos,(int)6);
								}
								;break;
								case (int)4: {
									HX_STACK_LINE(62)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)5: {
									HX_STACK_LINE(62)
									hx::AddEq(data->fPos,(int)3);
								}
								;break;
								case (int)6: {
									HX_STACK_LINE(62)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)7: {
									HX_STACK_LINE(62)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)8: {
									HX_STACK_LINE(62)
									hx::AddEq(data->fPos,(int)5);
									HX_STACK_LINE(62)
									hx::AddEq(data->oPos,(int)1);
								}
								;break;
								case (int)10: {
									HX_STACK_LINE(62)
									hx::AddEq(data->oPos,(int)4);
								}
								;break;
								case (int)11: {
									HX_STACK_LINE(62)
									Dynamic();
								}
								;break;
								case (int)12: {
									HX_STACK_LINE(62)
									hx::AddEq(data->oPos,(int)2);
									HX_STACK_LINE(62)
									hx::AddEq(data->bPos,(int)2);
								}
								;break;
								case (int)13: {
									HX_STACK_LINE(62)
									hx::AddEq(data->oPos,(int)4);
									HX_STACK_LINE(62)
									hx::AddEq(data->iiPos,(int)2);
									HX_STACK_LINE(62)
									hx::AddEq(data->ffPos,(int)1);
									HX_STACK_LINE(62)
									hx::AddEq(data->fPos,(int)1);
								}
								;break;
								case (int)14: {
									HX_STACK_LINE(62)
									hx::AddEq(data->oPos,(int)4);
									HX_STACK_LINE(62)
									hx::AddEq(data->iPos,(int)1);
									HX_STACK_LINE(62)
									hx::AddEq(data->fPos,(int)2);
									HX_STACK_LINE(62)
									hx::AddEq(data->bPos,(int)1);
								}
								;break;
								case (int)15: {
									HX_STACK_LINE(62)
									hx::AddEq(data->fPos,(int)2);
								}
								;break;
								case (int)16: {
									HX_STACK_LINE(62)
									hx::AddEq(data->fPos,(int)2);
								}
								;break;
								case (int)17: {
									HX_STACK_LINE(62)
									hx::AddEq(data->oPos,(int)1);
								}
								;break;
								default: {
									HX_STACK_LINE(62)
									Dynamic();
								}
							}
						}
						HX_STACK_LINE(62)
						data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::DRAW_ELLIPSE;
						HX_STACK_LINE(62)
						tmp4 = data;
					}
					HX_STACK_LINE(62)
					::openfl::_internal::renderer::DrawCommandReader c = tmp4;		HX_STACK_VAR(c,"c");
					HX_STACK_LINE(62)
					::openfl::_internal::renderer::DrawCommandBuffer tmp5 = c->buffer;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(62)
					int tmp6 = c->fPos;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(62)
					int tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(62)
					Float tmp8 = tmp5->f->__get(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(62)
					::openfl::_internal::renderer::DrawCommandBuffer tmp9 = c->buffer;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(62)
					int tmp10 = c->fPos;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(62)
					int tmp11 = (tmp10 + (int)1);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(62)
					Float tmp12 = tmp9->f->__get(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(62)
					::openfl::_internal::renderer::DrawCommandBuffer tmp13 = c->buffer;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(62)
					int tmp14 = c->fPos;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(62)
					int tmp15 = (tmp14 + (int)2);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(62)
					Float tmp16 = tmp13->f->__get(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(62)
					::openfl::_internal::renderer::DrawCommandBuffer tmp17 = c->buffer;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(62)
					int tmp18 = c->fPos;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(62)
					int tmp19 = (tmp18 + (int)3);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(62)
					Float tmp20 = tmp17->f->__get(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(62)
					this->drawEllipse(tmp8,tmp12,tmp16,tmp20);
				}
				;break;
				case (int)7: {
					HX_STACK_LINE(63)
					::openfl::_internal::renderer::DrawCommandReader tmp4;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(63)
					{
						HX_STACK_LINE(63)
						{
							HX_STACK_LINE(63)
							::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(63)
							switch( (int)(_g2->__Index())){
								case (int)0: {
									HX_STACK_LINE(63)
									hx::AddEq(data->oPos,(int)2);
									HX_STACK_LINE(63)
									hx::AddEq(data->bPos,(int)2);
								}
								;break;
								case (int)1: {
									HX_STACK_LINE(63)
									hx::AddEq(data->iPos,(int)1);
									HX_STACK_LINE(63)
									hx::AddEq(data->fPos,(int)1);
								}
								;break;
								case (int)2: {
									HX_STACK_LINE(63)
									hx::AddEq(data->oPos,(int)4);
									HX_STACK_LINE(63)
									hx::AddEq(data->iiPos,(int)2);
									HX_STACK_LINE(63)
									hx::AddEq(data->ffPos,(int)1);
									HX_STACK_LINE(63)
									hx::AddEq(data->fPos,(int)1);
								}
								;break;
								case (int)3: {
									HX_STACK_LINE(63)
									hx::AddEq(data->fPos,(int)6);
								}
								;break;
								case (int)4: {
									HX_STACK_LINE(63)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)5: {
									HX_STACK_LINE(63)
									hx::AddEq(data->fPos,(int)3);
								}
								;break;
								case (int)6: {
									HX_STACK_LINE(63)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)7: {
									HX_STACK_LINE(63)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)8: {
									HX_STACK_LINE(63)
									hx::AddEq(data->fPos,(int)5);
									HX_STACK_LINE(63)
									hx::AddEq(data->oPos,(int)1);
								}
								;break;
								case (int)10: {
									HX_STACK_LINE(63)
									hx::AddEq(data->oPos,(int)4);
								}
								;break;
								case (int)11: {
									HX_STACK_LINE(63)
									Dynamic();
								}
								;break;
								case (int)12: {
									HX_STACK_LINE(63)
									hx::AddEq(data->oPos,(int)2);
									HX_STACK_LINE(63)
									hx::AddEq(data->bPos,(int)2);
								}
								;break;
								case (int)13: {
									HX_STACK_LINE(63)
									hx::AddEq(data->oPos,(int)4);
									HX_STACK_LINE(63)
									hx::AddEq(data->iiPos,(int)2);
									HX_STACK_LINE(63)
									hx::AddEq(data->ffPos,(int)1);
									HX_STACK_LINE(63)
									hx::AddEq(data->fPos,(int)1);
								}
								;break;
								case (int)14: {
									HX_STACK_LINE(63)
									hx::AddEq(data->oPos,(int)4);
									HX_STACK_LINE(63)
									hx::AddEq(data->iPos,(int)1);
									HX_STACK_LINE(63)
									hx::AddEq(data->fPos,(int)2);
									HX_STACK_LINE(63)
									hx::AddEq(data->bPos,(int)1);
								}
								;break;
								case (int)15: {
									HX_STACK_LINE(63)
									hx::AddEq(data->fPos,(int)2);
								}
								;break;
								case (int)16: {
									HX_STACK_LINE(63)
									hx::AddEq(data->fPos,(int)2);
								}
								;break;
								case (int)17: {
									HX_STACK_LINE(63)
									hx::AddEq(data->oPos,(int)1);
								}
								;break;
								default: {
									HX_STACK_LINE(63)
									Dynamic();
								}
							}
						}
						HX_STACK_LINE(63)
						data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::DRAW_RECT;
						HX_STACK_LINE(63)
						tmp4 = data;
					}
					HX_STACK_LINE(63)
					::openfl::_internal::renderer::DrawCommandReader c = tmp4;		HX_STACK_VAR(c,"c");
					HX_STACK_LINE(63)
					::openfl::_internal::renderer::DrawCommandBuffer tmp5 = c->buffer;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(63)
					int tmp6 = c->fPos;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(63)
					int tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(63)
					Float tmp8 = tmp5->f->__get(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(63)
					::openfl::_internal::renderer::DrawCommandBuffer tmp9 = c->buffer;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(63)
					int tmp10 = c->fPos;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(63)
					int tmp11 = (tmp10 + (int)1);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(63)
					Float tmp12 = tmp9->f->__get(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(63)
					::openfl::_internal::renderer::DrawCommandBuffer tmp13 = c->buffer;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(63)
					int tmp14 = c->fPos;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(63)
					int tmp15 = (tmp14 + (int)2);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(63)
					Float tmp16 = tmp13->f->__get(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(63)
					::openfl::_internal::renderer::DrawCommandBuffer tmp17 = c->buffer;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(63)
					int tmp18 = c->fPos;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(63)
					int tmp19 = (tmp18 + (int)3);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(63)
					Float tmp20 = tmp17->f->__get(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(63)
					this->drawRect(tmp8,tmp12,tmp16,tmp20);
				}
				;break;
				case (int)8: {
					HX_STACK_LINE(64)
					::openfl::_internal::renderer::DrawCommandReader tmp4;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(64)
					{
						HX_STACK_LINE(64)
						{
							HX_STACK_LINE(64)
							::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(64)
							switch( (int)(_g2->__Index())){
								case (int)0: {
									HX_STACK_LINE(64)
									hx::AddEq(data->oPos,(int)2);
									HX_STACK_LINE(64)
									hx::AddEq(data->bPos,(int)2);
								}
								;break;
								case (int)1: {
									HX_STACK_LINE(64)
									hx::AddEq(data->iPos,(int)1);
									HX_STACK_LINE(64)
									hx::AddEq(data->fPos,(int)1);
								}
								;break;
								case (int)2: {
									HX_STACK_LINE(64)
									hx::AddEq(data->oPos,(int)4);
									HX_STACK_LINE(64)
									hx::AddEq(data->iiPos,(int)2);
									HX_STACK_LINE(64)
									hx::AddEq(data->ffPos,(int)1);
									HX_STACK_LINE(64)
									hx::AddEq(data->fPos,(int)1);
								}
								;break;
								case (int)3: {
									HX_STACK_LINE(64)
									hx::AddEq(data->fPos,(int)6);
								}
								;break;
								case (int)4: {
									HX_STACK_LINE(64)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)5: {
									HX_STACK_LINE(64)
									hx::AddEq(data->fPos,(int)3);
								}
								;break;
								case (int)6: {
									HX_STACK_LINE(64)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)7: {
									HX_STACK_LINE(64)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)8: {
									HX_STACK_LINE(64)
									hx::AddEq(data->fPos,(int)5);
									HX_STACK_LINE(64)
									hx::AddEq(data->oPos,(int)1);
								}
								;break;
								case (int)10: {
									HX_STACK_LINE(64)
									hx::AddEq(data->oPos,(int)4);
								}
								;break;
								case (int)11: {
									HX_STACK_LINE(64)
									Dynamic();
								}
								;break;
								case (int)12: {
									HX_STACK_LINE(64)
									hx::AddEq(data->oPos,(int)2);
									HX_STACK_LINE(64)
									hx::AddEq(data->bPos,(int)2);
								}
								;break;
								case (int)13: {
									HX_STACK_LINE(64)
									hx::AddEq(data->oPos,(int)4);
									HX_STACK_LINE(64)
									hx::AddEq(data->iiPos,(int)2);
									HX_STACK_LINE(64)
									hx::AddEq(data->ffPos,(int)1);
									HX_STACK_LINE(64)
									hx::AddEq(data->fPos,(int)1);
								}
								;break;
								case (int)14: {
									HX_STACK_LINE(64)
									hx::AddEq(data->oPos,(int)4);
									HX_STACK_LINE(64)
									hx::AddEq(data->iPos,(int)1);
									HX_STACK_LINE(64)
									hx::AddEq(data->fPos,(int)2);
									HX_STACK_LINE(64)
									hx::AddEq(data->bPos,(int)1);
								}
								;break;
								case (int)15: {
									HX_STACK_LINE(64)
									hx::AddEq(data->fPos,(int)2);
								}
								;break;
								case (int)16: {
									HX_STACK_LINE(64)
									hx::AddEq(data->fPos,(int)2);
								}
								;break;
								case (int)17: {
									HX_STACK_LINE(64)
									hx::AddEq(data->oPos,(int)1);
								}
								;break;
								default: {
									HX_STACK_LINE(64)
									Dynamic();
								}
							}
						}
						HX_STACK_LINE(64)
						data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::DRAW_ROUND_RECT;
						HX_STACK_LINE(64)
						tmp4 = data;
					}
					HX_STACK_LINE(64)
					::openfl::_internal::renderer::DrawCommandReader c = tmp4;		HX_STACK_VAR(c,"c");
					HX_STACK_LINE(64)
					::openfl::_internal::renderer::DrawCommandBuffer tmp5 = c->buffer;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(64)
					int tmp6 = c->fPos;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(64)
					int tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(64)
					Float tmp8 = tmp5->f->__get(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(64)
					::openfl::_internal::renderer::DrawCommandBuffer tmp9 = c->buffer;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(64)
					int tmp10 = c->fPos;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(64)
					int tmp11 = (tmp10 + (int)1);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(64)
					Float tmp12 = tmp9->f->__get(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(64)
					::openfl::_internal::renderer::DrawCommandBuffer tmp13 = c->buffer;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(64)
					int tmp14 = c->fPos;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(64)
					int tmp15 = (tmp14 + (int)2);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(64)
					Float tmp16 = tmp13->f->__get(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(64)
					::openfl::_internal::renderer::DrawCommandBuffer tmp17 = c->buffer;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(64)
					int tmp18 = c->fPos;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(64)
					int tmp19 = (tmp18 + (int)3);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(64)
					Float tmp20 = tmp17->f->__get(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(64)
					::openfl::_internal::renderer::DrawCommandBuffer tmp21 = c->buffer;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(64)
					int tmp22 = c->fPos;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(64)
					int tmp23 = (tmp22 + (int)4);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(64)
					Float tmp24 = tmp21->f->__get(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(64)
					::openfl::_internal::renderer::DrawCommandBuffer tmp25 = c->buffer;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(64)
					int tmp26 = c->oPos;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(64)
					int tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(64)
					Dynamic tmp28 = tmp25->o->__GetItem(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(64)
					Dynamic tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(64)
					this->drawRoundRect(tmp8,tmp12,tmp16,tmp20,tmp24,tmp29);
				}
				;break;
				case (int)10: {
					HX_STACK_LINE(65)
					::openfl::_internal::renderer::DrawCommandReader tmp4;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(65)
					{
						HX_STACK_LINE(65)
						{
							HX_STACK_LINE(65)
							::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(65)
							switch( (int)(_g2->__Index())){
								case (int)0: {
									HX_STACK_LINE(65)
									hx::AddEq(data->oPos,(int)2);
									HX_STACK_LINE(65)
									hx::AddEq(data->bPos,(int)2);
								}
								;break;
								case (int)1: {
									HX_STACK_LINE(65)
									hx::AddEq(data->iPos,(int)1);
									HX_STACK_LINE(65)
									hx::AddEq(data->fPos,(int)1);
								}
								;break;
								case (int)2: {
									HX_STACK_LINE(65)
									hx::AddEq(data->oPos,(int)4);
									HX_STACK_LINE(65)
									hx::AddEq(data->iiPos,(int)2);
									HX_STACK_LINE(65)
									hx::AddEq(data->ffPos,(int)1);
									HX_STACK_LINE(65)
									hx::AddEq(data->fPos,(int)1);
								}
								;break;
								case (int)3: {
									HX_STACK_LINE(65)
									hx::AddEq(data->fPos,(int)6);
								}
								;break;
								case (int)4: {
									HX_STACK_LINE(65)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)5: {
									HX_STACK_LINE(65)
									hx::AddEq(data->fPos,(int)3);
								}
								;break;
								case (int)6: {
									HX_STACK_LINE(65)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)7: {
									HX_STACK_LINE(65)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)8: {
									HX_STACK_LINE(65)
									hx::AddEq(data->fPos,(int)5);
									HX_STACK_LINE(65)
									hx::AddEq(data->oPos,(int)1);
								}
								;break;
								case (int)10: {
									HX_STACK_LINE(65)
									hx::AddEq(data->oPos,(int)4);
								}
								;break;
								case (int)11: {
									HX_STACK_LINE(65)
									Dynamic();
								}
								;break;
								case (int)12: {
									HX_STACK_LINE(65)
									hx::AddEq(data->oPos,(int)2);
									HX_STACK_LINE(65)
									hx::AddEq(data->bPos,(int)2);
								}
								;break;
								case (int)13: {
									HX_STACK_LINE(65)
									hx::AddEq(data->oPos,(int)4);
									HX_STACK_LINE(65)
									hx::AddEq(data->iiPos,(int)2);
									HX_STACK_LINE(65)
									hx::AddEq(data->ffPos,(int)1);
									HX_STACK_LINE(65)
									hx::AddEq(data->fPos,(int)1);
								}
								;break;
								case (int)14: {
									HX_STACK_LINE(65)
									hx::AddEq(data->oPos,(int)4);
									HX_STACK_LINE(65)
									hx::AddEq(data->iPos,(int)1);
									HX_STACK_LINE(65)
									hx::AddEq(data->fPos,(int)2);
									HX_STACK_LINE(65)
									hx::AddEq(data->bPos,(int)1);
								}
								;break;
								case (int)15: {
									HX_STACK_LINE(65)
									hx::AddEq(data->fPos,(int)2);
								}
								;break;
								case (int)16: {
									HX_STACK_LINE(65)
									hx::AddEq(data->fPos,(int)2);
								}
								;break;
								case (int)17: {
									HX_STACK_LINE(65)
									hx::AddEq(data->oPos,(int)1);
								}
								;break;
								default: {
									HX_STACK_LINE(65)
									Dynamic();
								}
							}
						}
						HX_STACK_LINE(65)
						data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::DRAW_TRIANGLES;
						HX_STACK_LINE(65)
						tmp4 = data;
					}
					HX_STACK_LINE(65)
					::openfl::_internal::renderer::DrawCommandReader c = tmp4;		HX_STACK_VAR(c,"c");
					HX_STACK_LINE(65)
					::openfl::_internal::renderer::DrawCommandBuffer tmp5 = c->buffer;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(65)
					int tmp6 = c->oPos;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(65)
					int tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(65)
					Dynamic tmp8 = tmp5->o->__GetItem(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(65)
					::openfl::_Vector::FloatVector tmp9 = ((::openfl::_Vector::FloatVector)(tmp8));		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(65)
					::openfl::_internal::renderer::DrawCommandBuffer tmp10 = c->buffer;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(65)
					int tmp11 = c->oPos;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(65)
					int tmp12 = (tmp11 + (int)1);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(65)
					Dynamic tmp13 = tmp10->o->__GetItem(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(65)
					::openfl::_Vector::IntVector tmp14 = ((::openfl::_Vector::IntVector)(tmp13));		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(65)
					::openfl::_internal::renderer::DrawCommandBuffer tmp15 = c->buffer;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(65)
					int tmp16 = c->oPos;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(65)
					int tmp17 = (tmp16 + (int)2);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(65)
					Dynamic tmp18 = tmp15->o->__GetItem(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(65)
					::openfl::_Vector::FloatVector tmp19 = ((::openfl::_Vector::FloatVector)(tmp18));		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(65)
					::openfl::_internal::renderer::DrawCommandBuffer tmp20 = c->buffer;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(65)
					int tmp21 = c->oPos;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(65)
					int tmp22 = (tmp21 + (int)3);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(65)
					Dynamic tmp23 = tmp20->o->__GetItem(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(65)
					Dynamic tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(65)
					this->drawTriangles(tmp9,tmp14,tmp19,tmp24);
				}
				;break;
				case (int)11: {
					HX_STACK_LINE(66)
					::openfl::_internal::renderer::DrawCommandReader tmp4;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(66)
					{
						HX_STACK_LINE(66)
						{
							HX_STACK_LINE(66)
							::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(66)
							switch( (int)(_g2->__Index())){
								case (int)0: {
									HX_STACK_LINE(66)
									hx::AddEq(data->oPos,(int)2);
									HX_STACK_LINE(66)
									hx::AddEq(data->bPos,(int)2);
								}
								;break;
								case (int)1: {
									HX_STACK_LINE(66)
									hx::AddEq(data->iPos,(int)1);
									HX_STACK_LINE(66)
									hx::AddEq(data->fPos,(int)1);
								}
								;break;
								case (int)2: {
									HX_STACK_LINE(66)
									hx::AddEq(data->oPos,(int)4);
									HX_STACK_LINE(66)
									hx::AddEq(data->iiPos,(int)2);
									HX_STACK_LINE(66)
									hx::AddEq(data->ffPos,(int)1);
									HX_STACK_LINE(66)
									hx::AddEq(data->fPos,(int)1);
								}
								;break;
								case (int)3: {
									HX_STACK_LINE(66)
									hx::AddEq(data->fPos,(int)6);
								}
								;break;
								case (int)4: {
									HX_STACK_LINE(66)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)5: {
									HX_STACK_LINE(66)
									hx::AddEq(data->fPos,(int)3);
								}
								;break;
								case (int)6: {
									HX_STACK_LINE(66)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)7: {
									HX_STACK_LINE(66)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)8: {
									HX_STACK_LINE(66)
									hx::AddEq(data->fPos,(int)5);
									HX_STACK_LINE(66)
									hx::AddEq(data->oPos,(int)1);
								}
								;break;
								case (int)10: {
									HX_STACK_LINE(66)
									hx::AddEq(data->oPos,(int)4);
								}
								;break;
								case (int)11: {
									HX_STACK_LINE(66)
									Dynamic();
								}
								;break;
								case (int)12: {
									HX_STACK_LINE(66)
									hx::AddEq(data->oPos,(int)2);
									HX_STACK_LINE(66)
									hx::AddEq(data->bPos,(int)2);
								}
								;break;
								case (int)13: {
									HX_STACK_LINE(66)
									hx::AddEq(data->oPos,(int)4);
									HX_STACK_LINE(66)
									hx::AddEq(data->iiPos,(int)2);
									HX_STACK_LINE(66)
									hx::AddEq(data->ffPos,(int)1);
									HX_STACK_LINE(66)
									hx::AddEq(data->fPos,(int)1);
								}
								;break;
								case (int)14: {
									HX_STACK_LINE(66)
									hx::AddEq(data->oPos,(int)4);
									HX_STACK_LINE(66)
									hx::AddEq(data->iPos,(int)1);
									HX_STACK_LINE(66)
									hx::AddEq(data->fPos,(int)2);
									HX_STACK_LINE(66)
									hx::AddEq(data->bPos,(int)1);
								}
								;break;
								case (int)15: {
									HX_STACK_LINE(66)
									hx::AddEq(data->fPos,(int)2);
								}
								;break;
								case (int)16: {
									HX_STACK_LINE(66)
									hx::AddEq(data->fPos,(int)2);
								}
								;break;
								case (int)17: {
									HX_STACK_LINE(66)
									hx::AddEq(data->oPos,(int)1);
								}
								;break;
								default: {
									HX_STACK_LINE(66)
									Dynamic();
								}
							}
						}
						HX_STACK_LINE(66)
						data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::END_FILL;
						HX_STACK_LINE(66)
						tmp4 = data;
					}
					HX_STACK_LINE(66)
					::openfl::_internal::renderer::DrawCommandReader c = tmp4;		HX_STACK_VAR(c,"c");
					HX_STACK_LINE(66)
					this->endFill();
				}
				;break;
				case (int)12: {
					HX_STACK_LINE(67)
					::openfl::_internal::renderer::DrawCommandReader tmp4;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(67)
					{
						HX_STACK_LINE(67)
						{
							HX_STACK_LINE(67)
							::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(67)
							switch( (int)(_g2->__Index())){
								case (int)0: {
									HX_STACK_LINE(67)
									hx::AddEq(data->oPos,(int)2);
									HX_STACK_LINE(67)
									hx::AddEq(data->bPos,(int)2);
								}
								;break;
								case (int)1: {
									HX_STACK_LINE(67)
									hx::AddEq(data->iPos,(int)1);
									HX_STACK_LINE(67)
									hx::AddEq(data->fPos,(int)1);
								}
								;break;
								case (int)2: {
									HX_STACK_LINE(67)
									hx::AddEq(data->oPos,(int)4);
									HX_STACK_LINE(67)
									hx::AddEq(data->iiPos,(int)2);
									HX_STACK_LINE(67)
									hx::AddEq(data->ffPos,(int)1);
									HX_STACK_LINE(67)
									hx::AddEq(data->fPos,(int)1);
								}
								;break;
								case (int)3: {
									HX_STACK_LINE(67)
									hx::AddEq(data->fPos,(int)6);
								}
								;break;
								case (int)4: {
									HX_STACK_LINE(67)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)5: {
									HX_STACK_LINE(67)
									hx::AddEq(data->fPos,(int)3);
								}
								;break;
								case (int)6: {
									HX_STACK_LINE(67)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)7: {
									HX_STACK_LINE(67)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)8: {
									HX_STACK_LINE(67)
									hx::AddEq(data->fPos,(int)5);
									HX_STACK_LINE(67)
									hx::AddEq(data->oPos,(int)1);
								}
								;break;
								case (int)10: {
									HX_STACK_LINE(67)
									hx::AddEq(data->oPos,(int)4);
								}
								;break;
								case (int)11: {
									HX_STACK_LINE(67)
									Dynamic();
								}
								;break;
								case (int)12: {
									HX_STACK_LINE(67)
									hx::AddEq(data->oPos,(int)2);
									HX_STACK_LINE(67)
									hx::AddEq(data->bPos,(int)2);
								}
								;break;
								case (int)13: {
									HX_STACK_LINE(67)
									hx::AddEq(data->oPos,(int)4);
									HX_STACK_LINE(67)
									hx::AddEq(data->iiPos,(int)2);
									HX_STACK_LINE(67)
									hx::AddEq(data->ffPos,(int)1);
									HX_STACK_LINE(67)
									hx::AddEq(data->fPos,(int)1);
								}
								;break;
								case (int)14: {
									HX_STACK_LINE(67)
									hx::AddEq(data->oPos,(int)4);
									HX_STACK_LINE(67)
									hx::AddEq(data->iPos,(int)1);
									HX_STACK_LINE(67)
									hx::AddEq(data->fPos,(int)2);
									HX_STACK_LINE(67)
									hx::AddEq(data->bPos,(int)1);
								}
								;break;
								case (int)15: {
									HX_STACK_LINE(67)
									hx::AddEq(data->fPos,(int)2);
								}
								;break;
								case (int)16: {
									HX_STACK_LINE(67)
									hx::AddEq(data->fPos,(int)2);
								}
								;break;
								case (int)17: {
									HX_STACK_LINE(67)
									hx::AddEq(data->oPos,(int)1);
								}
								;break;
								default: {
									HX_STACK_LINE(67)
									Dynamic();
								}
							}
						}
						HX_STACK_LINE(67)
						data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::LINE_BITMAP_STYLE;
						HX_STACK_LINE(67)
						tmp4 = data;
					}
					HX_STACK_LINE(67)
					::openfl::_internal::renderer::DrawCommandReader c = tmp4;		HX_STACK_VAR(c,"c");
					HX_STACK_LINE(67)
					::openfl::_internal::renderer::DrawCommandBuffer tmp5 = c->buffer;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(67)
					int tmp6 = c->oPos;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(67)
					int tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(67)
					Dynamic tmp8 = tmp5->o->__GetItem(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(67)
					::openfl::display::BitmapData tmp9 = ((::openfl::display::BitmapData)(tmp8));		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(67)
					::openfl::_internal::renderer::DrawCommandBuffer tmp10 = c->buffer;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(67)
					int tmp11 = c->oPos;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(67)
					int tmp12 = (tmp11 + (int)1);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(67)
					Dynamic tmp13 = tmp10->o->__GetItem(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(67)
					::openfl::geom::Matrix tmp14 = ((::openfl::geom::Matrix)(tmp13));		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(67)
					::openfl::_internal::renderer::DrawCommandBuffer tmp15 = c->buffer;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(67)
					int tmp16 = c->bPos;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(67)
					int tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(67)
					bool tmp18 = tmp15->b->__get(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(67)
					bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(67)
					::openfl::_internal::renderer::DrawCommandBuffer tmp20 = c->buffer;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(67)
					int tmp21 = c->bPos;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(67)
					int tmp22 = (tmp21 + (int)1);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(67)
					bool tmp23 = tmp20->b->__get(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(67)
					bool tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(67)
					this->lineBitmapStyle(tmp9,tmp14,tmp19,tmp24);
				}
				;break;
				case (int)13: {
					HX_STACK_LINE(68)
					::openfl::_internal::renderer::DrawCommandReader tmp4;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(68)
					{
						HX_STACK_LINE(68)
						{
							HX_STACK_LINE(68)
							::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(68)
							switch( (int)(_g2->__Index())){
								case (int)0: {
									HX_STACK_LINE(68)
									hx::AddEq(data->oPos,(int)2);
									HX_STACK_LINE(68)
									hx::AddEq(data->bPos,(int)2);
								}
								;break;
								case (int)1: {
									HX_STACK_LINE(68)
									hx::AddEq(data->iPos,(int)1);
									HX_STACK_LINE(68)
									hx::AddEq(data->fPos,(int)1);
								}
								;break;
								case (int)2: {
									HX_STACK_LINE(68)
									hx::AddEq(data->oPos,(int)4);
									HX_STACK_LINE(68)
									hx::AddEq(data->iiPos,(int)2);
									HX_STACK_LINE(68)
									hx::AddEq(data->ffPos,(int)1);
									HX_STACK_LINE(68)
									hx::AddEq(data->fPos,(int)1);
								}
								;break;
								case (int)3: {
									HX_STACK_LINE(68)
									hx::AddEq(data->fPos,(int)6);
								}
								;break;
								case (int)4: {
									HX_STACK_LINE(68)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)5: {
									HX_STACK_LINE(68)
									hx::AddEq(data->fPos,(int)3);
								}
								;break;
								case (int)6: {
									HX_STACK_LINE(68)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)7: {
									HX_STACK_LINE(68)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)8: {
									HX_STACK_LINE(68)
									hx::AddEq(data->fPos,(int)5);
									HX_STACK_LINE(68)
									hx::AddEq(data->oPos,(int)1);
								}
								;break;
								case (int)10: {
									HX_STACK_LINE(68)
									hx::AddEq(data->oPos,(int)4);
								}
								;break;
								case (int)11: {
									HX_STACK_LINE(68)
									Dynamic();
								}
								;break;
								case (int)12: {
									HX_STACK_LINE(68)
									hx::AddEq(data->oPos,(int)2);
									HX_STACK_LINE(68)
									hx::AddEq(data->bPos,(int)2);
								}
								;break;
								case (int)13: {
									HX_STACK_LINE(68)
									hx::AddEq(data->oPos,(int)4);
									HX_STACK_LINE(68)
									hx::AddEq(data->iiPos,(int)2);
									HX_STACK_LINE(68)
									hx::AddEq(data->ffPos,(int)1);
									HX_STACK_LINE(68)
									hx::AddEq(data->fPos,(int)1);
								}
								;break;
								case (int)14: {
									HX_STACK_LINE(68)
									hx::AddEq(data->oPos,(int)4);
									HX_STACK_LINE(68)
									hx::AddEq(data->iPos,(int)1);
									HX_STACK_LINE(68)
									hx::AddEq(data->fPos,(int)2);
									HX_STACK_LINE(68)
									hx::AddEq(data->bPos,(int)1);
								}
								;break;
								case (int)15: {
									HX_STACK_LINE(68)
									hx::AddEq(data->fPos,(int)2);
								}
								;break;
								case (int)16: {
									HX_STACK_LINE(68)
									hx::AddEq(data->fPos,(int)2);
								}
								;break;
								case (int)17: {
									HX_STACK_LINE(68)
									hx::AddEq(data->oPos,(int)1);
								}
								;break;
								default: {
									HX_STACK_LINE(68)
									Dynamic();
								}
							}
						}
						HX_STACK_LINE(68)
						data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::LINE_GRADIENT_STYLE;
						HX_STACK_LINE(68)
						tmp4 = data;
					}
					HX_STACK_LINE(68)
					::openfl::_internal::renderer::DrawCommandReader c = tmp4;		HX_STACK_VAR(c,"c");
					HX_STACK_LINE(68)
					::openfl::_internal::renderer::DrawCommandBuffer tmp5 = c->buffer;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(68)
					int tmp6 = c->oPos;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(68)
					int tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(68)
					Dynamic tmp8 = tmp5->o->__GetItem(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(68)
					Dynamic tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(68)
					::openfl::_internal::renderer::DrawCommandBuffer tmp10 = c->buffer;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(68)
					int tmp11 = c->iiPos;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(68)
					int tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(68)
					::openfl::_internal::renderer::DrawCommandBuffer tmp13 = c->buffer;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(68)
					int tmp14 = c->ffPos;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(68)
					int tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(68)
					::openfl::_internal::renderer::DrawCommandBuffer tmp16 = c->buffer;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(68)
					int tmp17 = c->iiPos;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(68)
					int tmp18 = (tmp17 + (int)1);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(68)
					::openfl::_internal::renderer::DrawCommandBuffer tmp19 = c->buffer;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(68)
					int tmp20 = c->oPos;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(68)
					int tmp21 = (tmp20 + (int)1);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(68)
					Dynamic tmp22 = tmp19->o->__GetItem(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(68)
					::openfl::geom::Matrix tmp23 = ((::openfl::geom::Matrix)(tmp22));		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(68)
					::openfl::_internal::renderer::DrawCommandBuffer tmp24 = c->buffer;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(68)
					int tmp25 = c->oPos;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(68)
					int tmp26 = (tmp25 + (int)2);		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(68)
					Dynamic tmp27 = tmp24->o->__GetItem(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(68)
					Dynamic tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(68)
					::openfl::_internal::renderer::DrawCommandBuffer tmp29 = c->buffer;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(68)
					int tmp30 = c->oPos;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(68)
					int tmp31 = (tmp30 + (int)3);		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(68)
					Dynamic tmp32 = tmp29->o->__GetItem(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(68)
					Dynamic tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(68)
					::openfl::_internal::renderer::DrawCommandBuffer tmp34 = c->buffer;		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(68)
					int tmp35 = c->fPos;		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(68)
					int tmp36 = tmp35;		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(68)
					Float tmp37 = tmp34->f->__get(tmp36);		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(68)
					Float tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(68)
					this->lineGradientStyle(tmp9,tmp10->ii->__get(tmp12).StaticCast< Array< int > >(),tmp13->ff->__get(tmp15).StaticCast< Array< Float > >(),tmp16->ii->__get(tmp18).StaticCast< Array< int > >(),tmp23,tmp28,tmp33,tmp38);
				}
				;break;
				case (int)14: {
					HX_STACK_LINE(69)
					::openfl::_internal::renderer::DrawCommandReader tmp4;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(69)
					{
						HX_STACK_LINE(69)
						{
							HX_STACK_LINE(69)
							::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(69)
							switch( (int)(_g2->__Index())){
								case (int)0: {
									HX_STACK_LINE(69)
									hx::AddEq(data->oPos,(int)2);
									HX_STACK_LINE(69)
									hx::AddEq(data->bPos,(int)2);
								}
								;break;
								case (int)1: {
									HX_STACK_LINE(69)
									hx::AddEq(data->iPos,(int)1);
									HX_STACK_LINE(69)
									hx::AddEq(data->fPos,(int)1);
								}
								;break;
								case (int)2: {
									HX_STACK_LINE(69)
									hx::AddEq(data->oPos,(int)4);
									HX_STACK_LINE(69)
									hx::AddEq(data->iiPos,(int)2);
									HX_STACK_LINE(69)
									hx::AddEq(data->ffPos,(int)1);
									HX_STACK_LINE(69)
									hx::AddEq(data->fPos,(int)1);
								}
								;break;
								case (int)3: {
									HX_STACK_LINE(69)
									hx::AddEq(data->fPos,(int)6);
								}
								;break;
								case (int)4: {
									HX_STACK_LINE(69)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)5: {
									HX_STACK_LINE(69)
									hx::AddEq(data->fPos,(int)3);
								}
								;break;
								case (int)6: {
									HX_STACK_LINE(69)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)7: {
									HX_STACK_LINE(69)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)8: {
									HX_STACK_LINE(69)
									hx::AddEq(data->fPos,(int)5);
									HX_STACK_LINE(69)
									hx::AddEq(data->oPos,(int)1);
								}
								;break;
								case (int)10: {
									HX_STACK_LINE(69)
									hx::AddEq(data->oPos,(int)4);
								}
								;break;
								case (int)11: {
									HX_STACK_LINE(69)
									Dynamic();
								}
								;break;
								case (int)12: {
									HX_STACK_LINE(69)
									hx::AddEq(data->oPos,(int)2);
									HX_STACK_LINE(69)
									hx::AddEq(data->bPos,(int)2);
								}
								;break;
								case (int)13: {
									HX_STACK_LINE(69)
									hx::AddEq(data->oPos,(int)4);
									HX_STACK_LINE(69)
									hx::AddEq(data->iiPos,(int)2);
									HX_STACK_LINE(69)
									hx::AddEq(data->ffPos,(int)1);
									HX_STACK_LINE(69)
									hx::AddEq(data->fPos,(int)1);
								}
								;break;
								case (int)14: {
									HX_STACK_LINE(69)
									hx::AddEq(data->oPos,(int)4);
									HX_STACK_LINE(69)
									hx::AddEq(data->iPos,(int)1);
									HX_STACK_LINE(69)
									hx::AddEq(data->fPos,(int)2);
									HX_STACK_LINE(69)
									hx::AddEq(data->bPos,(int)1);
								}
								;break;
								case (int)15: {
									HX_STACK_LINE(69)
									hx::AddEq(data->fPos,(int)2);
								}
								;break;
								case (int)16: {
									HX_STACK_LINE(69)
									hx::AddEq(data->fPos,(int)2);
								}
								;break;
								case (int)17: {
									HX_STACK_LINE(69)
									hx::AddEq(data->oPos,(int)1);
								}
								;break;
								default: {
									HX_STACK_LINE(69)
									Dynamic();
								}
							}
						}
						HX_STACK_LINE(69)
						data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::LINE_STYLE;
						HX_STACK_LINE(69)
						tmp4 = data;
					}
					HX_STACK_LINE(69)
					::openfl::_internal::renderer::DrawCommandReader c = tmp4;		HX_STACK_VAR(c,"c");
					HX_STACK_LINE(69)
					::openfl::_internal::renderer::DrawCommandBuffer tmp5 = c->buffer;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(69)
					int tmp6 = c->oPos;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(69)
					int tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(69)
					Dynamic tmp8 = tmp5->o->__GetItem(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(69)
					Dynamic tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(69)
					::openfl::_internal::renderer::DrawCommandBuffer tmp10 = c->buffer;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(69)
					int tmp11 = c->iPos;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(69)
					int tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(69)
					int tmp13 = tmp10->i->__get(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(69)
					int tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(69)
					::openfl::_internal::renderer::DrawCommandBuffer tmp15 = c->buffer;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(69)
					int tmp16 = c->fPos;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(69)
					int tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(69)
					Float tmp18 = tmp15->f->__get(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(69)
					Float tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(69)
					::openfl::_internal::renderer::DrawCommandBuffer tmp20 = c->buffer;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(69)
					int tmp21 = c->bPos;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(69)
					int tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(69)
					bool tmp23 = tmp20->b->__get(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(69)
					bool tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(69)
					::openfl::_internal::renderer::DrawCommandBuffer tmp25 = c->buffer;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(69)
					int tmp26 = c->oPos;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(69)
					int tmp27 = (tmp26 + (int)1);		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(69)
					Dynamic tmp28 = tmp25->o->__GetItem(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(69)
					Dynamic tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(69)
					::openfl::_internal::renderer::DrawCommandBuffer tmp30 = c->buffer;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(69)
					int tmp31 = c->oPos;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(69)
					int tmp32 = (tmp31 + (int)2);		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(69)
					Dynamic tmp33 = tmp30->o->__GetItem(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(69)
					Dynamic tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(69)
					::openfl::_internal::renderer::DrawCommandBuffer tmp35 = c->buffer;		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(69)
					int tmp36 = c->oPos;		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(69)
					int tmp37 = (tmp36 + (int)3);		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(69)
					Dynamic tmp38 = tmp35->o->__GetItem(tmp37);		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(69)
					Dynamic tmp39 = tmp38;		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(69)
					::openfl::_internal::renderer::DrawCommandBuffer tmp40 = c->buffer;		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(69)
					int tmp41 = c->fPos;		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(69)
					int tmp42 = (tmp41 + (int)1);		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(69)
					Float tmp43 = tmp40->f->__get(tmp42);		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(69)
					Float tmp44 = tmp43;		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(69)
					this->lineStyle(tmp9,tmp14,tmp19,tmp24,tmp29,tmp34,tmp39,tmp44);
				}
				;break;
				case (int)15: {
					HX_STACK_LINE(70)
					::openfl::_internal::renderer::DrawCommandReader tmp4;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(70)
					{
						HX_STACK_LINE(70)
						{
							HX_STACK_LINE(70)
							::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(70)
							switch( (int)(_g2->__Index())){
								case (int)0: {
									HX_STACK_LINE(70)
									hx::AddEq(data->oPos,(int)2);
									HX_STACK_LINE(70)
									hx::AddEq(data->bPos,(int)2);
								}
								;break;
								case (int)1: {
									HX_STACK_LINE(70)
									hx::AddEq(data->iPos,(int)1);
									HX_STACK_LINE(70)
									hx::AddEq(data->fPos,(int)1);
								}
								;break;
								case (int)2: {
									HX_STACK_LINE(70)
									hx::AddEq(data->oPos,(int)4);
									HX_STACK_LINE(70)
									hx::AddEq(data->iiPos,(int)2);
									HX_STACK_LINE(70)
									hx::AddEq(data->ffPos,(int)1);
									HX_STACK_LINE(70)
									hx::AddEq(data->fPos,(int)1);
								}
								;break;
								case (int)3: {
									HX_STACK_LINE(70)
									hx::AddEq(data->fPos,(int)6);
								}
								;break;
								case (int)4: {
									HX_STACK_LINE(70)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)5: {
									HX_STACK_LINE(70)
									hx::AddEq(data->fPos,(int)3);
								}
								;break;
								case (int)6: {
									HX_STACK_LINE(70)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)7: {
									HX_STACK_LINE(70)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)8: {
									HX_STACK_LINE(70)
									hx::AddEq(data->fPos,(int)5);
									HX_STACK_LINE(70)
									hx::AddEq(data->oPos,(int)1);
								}
								;break;
								case (int)10: {
									HX_STACK_LINE(70)
									hx::AddEq(data->oPos,(int)4);
								}
								;break;
								case (int)11: {
									HX_STACK_LINE(70)
									Dynamic();
								}
								;break;
								case (int)12: {
									HX_STACK_LINE(70)
									hx::AddEq(data->oPos,(int)2);
									HX_STACK_LINE(70)
									hx::AddEq(data->bPos,(int)2);
								}
								;break;
								case (int)13: {
									HX_STACK_LINE(70)
									hx::AddEq(data->oPos,(int)4);
									HX_STACK_LINE(70)
									hx::AddEq(data->iiPos,(int)2);
									HX_STACK_LINE(70)
									hx::AddEq(data->ffPos,(int)1);
									HX_STACK_LINE(70)
									hx::AddEq(data->fPos,(int)1);
								}
								;break;
								case (int)14: {
									HX_STACK_LINE(70)
									hx::AddEq(data->oPos,(int)4);
									HX_STACK_LINE(70)
									hx::AddEq(data->iPos,(int)1);
									HX_STACK_LINE(70)
									hx::AddEq(data->fPos,(int)2);
									HX_STACK_LINE(70)
									hx::AddEq(data->bPos,(int)1);
								}
								;break;
								case (int)15: {
									HX_STACK_LINE(70)
									hx::AddEq(data->fPos,(int)2);
								}
								;break;
								case (int)16: {
									HX_STACK_LINE(70)
									hx::AddEq(data->fPos,(int)2);
								}
								;break;
								case (int)17: {
									HX_STACK_LINE(70)
									hx::AddEq(data->oPos,(int)1);
								}
								;break;
								default: {
									HX_STACK_LINE(70)
									Dynamic();
								}
							}
						}
						HX_STACK_LINE(70)
						data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::LINE_TO;
						HX_STACK_LINE(70)
						tmp4 = data;
					}
					HX_STACK_LINE(70)
					::openfl::_internal::renderer::DrawCommandReader c = tmp4;		HX_STACK_VAR(c,"c");
					HX_STACK_LINE(70)
					::openfl::_internal::renderer::DrawCommandBuffer tmp5 = c->buffer;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(70)
					int tmp6 = c->fPos;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(70)
					int tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(70)
					Float tmp8 = tmp5->f->__get(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(70)
					::openfl::_internal::renderer::DrawCommandBuffer tmp9 = c->buffer;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(70)
					int tmp10 = c->fPos;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(70)
					int tmp11 = (tmp10 + (int)1);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(70)
					Float tmp12 = tmp9->f->__get(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(70)
					this->lineTo(tmp8,tmp12);
				}
				;break;
				case (int)16: {
					HX_STACK_LINE(71)
					::openfl::_internal::renderer::DrawCommandReader tmp4;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(71)
					{
						HX_STACK_LINE(71)
						{
							HX_STACK_LINE(71)
							::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(71)
							switch( (int)(_g2->__Index())){
								case (int)0: {
									HX_STACK_LINE(71)
									hx::AddEq(data->oPos,(int)2);
									HX_STACK_LINE(71)
									hx::AddEq(data->bPos,(int)2);
								}
								;break;
								case (int)1: {
									HX_STACK_LINE(71)
									hx::AddEq(data->iPos,(int)1);
									HX_STACK_LINE(71)
									hx::AddEq(data->fPos,(int)1);
								}
								;break;
								case (int)2: {
									HX_STACK_LINE(71)
									hx::AddEq(data->oPos,(int)4);
									HX_STACK_LINE(71)
									hx::AddEq(data->iiPos,(int)2);
									HX_STACK_LINE(71)
									hx::AddEq(data->ffPos,(int)1);
									HX_STACK_LINE(71)
									hx::AddEq(data->fPos,(int)1);
								}
								;break;
								case (int)3: {
									HX_STACK_LINE(71)
									hx::AddEq(data->fPos,(int)6);
								}
								;break;
								case (int)4: {
									HX_STACK_LINE(71)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)5: {
									HX_STACK_LINE(71)
									hx::AddEq(data->fPos,(int)3);
								}
								;break;
								case (int)6: {
									HX_STACK_LINE(71)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)7: {
									HX_STACK_LINE(71)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)8: {
									HX_STACK_LINE(71)
									hx::AddEq(data->fPos,(int)5);
									HX_STACK_LINE(71)
									hx::AddEq(data->oPos,(int)1);
								}
								;break;
								case (int)10: {
									HX_STACK_LINE(71)
									hx::AddEq(data->oPos,(int)4);
								}
								;break;
								case (int)11: {
									HX_STACK_LINE(71)
									Dynamic();
								}
								;break;
								case (int)12: {
									HX_STACK_LINE(71)
									hx::AddEq(data->oPos,(int)2);
									HX_STACK_LINE(71)
									hx::AddEq(data->bPos,(int)2);
								}
								;break;
								case (int)13: {
									HX_STACK_LINE(71)
									hx::AddEq(data->oPos,(int)4);
									HX_STACK_LINE(71)
									hx::AddEq(data->iiPos,(int)2);
									HX_STACK_LINE(71)
									hx::AddEq(data->ffPos,(int)1);
									HX_STACK_LINE(71)
									hx::AddEq(data->fPos,(int)1);
								}
								;break;
								case (int)14: {
									HX_STACK_LINE(71)
									hx::AddEq(data->oPos,(int)4);
									HX_STACK_LINE(71)
									hx::AddEq(data->iPos,(int)1);
									HX_STACK_LINE(71)
									hx::AddEq(data->fPos,(int)2);
									HX_STACK_LINE(71)
									hx::AddEq(data->bPos,(int)1);
								}
								;break;
								case (int)15: {
									HX_STACK_LINE(71)
									hx::AddEq(data->fPos,(int)2);
								}
								;break;
								case (int)16: {
									HX_STACK_LINE(71)
									hx::AddEq(data->fPos,(int)2);
								}
								;break;
								case (int)17: {
									HX_STACK_LINE(71)
									hx::AddEq(data->oPos,(int)1);
								}
								;break;
								default: {
									HX_STACK_LINE(71)
									Dynamic();
								}
							}
						}
						HX_STACK_LINE(71)
						data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::MOVE_TO;
						HX_STACK_LINE(71)
						tmp4 = data;
					}
					HX_STACK_LINE(71)
					::openfl::_internal::renderer::DrawCommandReader c = tmp4;		HX_STACK_VAR(c,"c");
					HX_STACK_LINE(71)
					::openfl::_internal::renderer::DrawCommandBuffer tmp5 = c->buffer;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(71)
					int tmp6 = c->fPos;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(71)
					int tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(71)
					Float tmp8 = tmp5->f->__get(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(71)
					::openfl::_internal::renderer::DrawCommandBuffer tmp9 = c->buffer;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(71)
					int tmp10 = c->fPos;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(71)
					int tmp11 = (tmp10 + (int)1);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(71)
					Float tmp12 = tmp9->f->__get(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(71)
					this->moveTo(tmp8,tmp12);
				}
				;break;
				case (int)17: {
					HX_STACK_LINE(72)
					::openfl::_internal::renderer::DrawCommandReader tmp4;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(72)
					{
						HX_STACK_LINE(72)
						{
							HX_STACK_LINE(72)
							::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(72)
							switch( (int)(_g2->__Index())){
								case (int)0: {
									HX_STACK_LINE(72)
									hx::AddEq(data->oPos,(int)2);
									HX_STACK_LINE(72)
									hx::AddEq(data->bPos,(int)2);
								}
								;break;
								case (int)1: {
									HX_STACK_LINE(72)
									hx::AddEq(data->iPos,(int)1);
									HX_STACK_LINE(72)
									hx::AddEq(data->fPos,(int)1);
								}
								;break;
								case (int)2: {
									HX_STACK_LINE(72)
									hx::AddEq(data->oPos,(int)4);
									HX_STACK_LINE(72)
									hx::AddEq(data->iiPos,(int)2);
									HX_STACK_LINE(72)
									hx::AddEq(data->ffPos,(int)1);
									HX_STACK_LINE(72)
									hx::AddEq(data->fPos,(int)1);
								}
								;break;
								case (int)3: {
									HX_STACK_LINE(72)
									hx::AddEq(data->fPos,(int)6);
								}
								;break;
								case (int)4: {
									HX_STACK_LINE(72)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)5: {
									HX_STACK_LINE(72)
									hx::AddEq(data->fPos,(int)3);
								}
								;break;
								case (int)6: {
									HX_STACK_LINE(72)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)7: {
									HX_STACK_LINE(72)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)8: {
									HX_STACK_LINE(72)
									hx::AddEq(data->fPos,(int)5);
									HX_STACK_LINE(72)
									hx::AddEq(data->oPos,(int)1);
								}
								;break;
								case (int)10: {
									HX_STACK_LINE(72)
									hx::AddEq(data->oPos,(int)4);
								}
								;break;
								case (int)11: {
									HX_STACK_LINE(72)
									Dynamic();
								}
								;break;
								case (int)12: {
									HX_STACK_LINE(72)
									hx::AddEq(data->oPos,(int)2);
									HX_STACK_LINE(72)
									hx::AddEq(data->bPos,(int)2);
								}
								;break;
								case (int)13: {
									HX_STACK_LINE(72)
									hx::AddEq(data->oPos,(int)4);
									HX_STACK_LINE(72)
									hx::AddEq(data->iiPos,(int)2);
									HX_STACK_LINE(72)
									hx::AddEq(data->ffPos,(int)1);
									HX_STACK_LINE(72)
									hx::AddEq(data->fPos,(int)1);
								}
								;break;
								case (int)14: {
									HX_STACK_LINE(72)
									hx::AddEq(data->oPos,(int)4);
									HX_STACK_LINE(72)
									hx::AddEq(data->iPos,(int)1);
									HX_STACK_LINE(72)
									hx::AddEq(data->fPos,(int)2);
									HX_STACK_LINE(72)
									hx::AddEq(data->bPos,(int)1);
								}
								;break;
								case (int)15: {
									HX_STACK_LINE(72)
									hx::AddEq(data->fPos,(int)2);
								}
								;break;
								case (int)16: {
									HX_STACK_LINE(72)
									hx::AddEq(data->fPos,(int)2);
								}
								;break;
								case (int)17: {
									HX_STACK_LINE(72)
									hx::AddEq(data->oPos,(int)1);
								}
								;break;
								default: {
									HX_STACK_LINE(72)
									Dynamic();
								}
							}
						}
						HX_STACK_LINE(72)
						data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::OVERRIDE_MATRIX;
						HX_STACK_LINE(72)
						tmp4 = data;
					}
					HX_STACK_LINE(72)
					::openfl::_internal::renderer::DrawCommandReader c = tmp4;		HX_STACK_VAR(c,"c");
					HX_STACK_LINE(72)
					::openfl::_internal::renderer::DrawCommandBuffer tmp5 = c->buffer;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(72)
					int tmp6 = c->oPos;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(72)
					int tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(72)
					Dynamic tmp8 = tmp5->o->__GetItem(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(72)
					::openfl::geom::Matrix tmp9 = ((::openfl::geom::Matrix)(tmp8));		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(72)
					this->overrideMatrix(tmp9);
				}
				;break;
				default: {
				}
			}
		}
	}
	HX_STACK_LINE(79)
	data->destroy();
	HX_STACK_LINE(80)
	::openfl::_internal::renderer::DrawCommandBuffer tmp1 = other;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(80)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(DrawCommandBuffer_obj,append,return )

Void DrawCommandBuffer_obj::beginBitmapFill( ::openfl::display::BitmapData bitmap,::openfl::geom::Matrix matrix,bool repeat,bool smooth){
{
		HX_STACK_FRAME("openfl._internal.renderer.DrawCommandBuffer","beginBitmapFill",0x90133359,"openfl._internal.renderer.DrawCommandBuffer.beginBitmapFill","openfl/_internal/renderer/DrawCommandBuffer.hx",85,0xbc8e6e11)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bitmap,"bitmap")
		HX_STACK_ARG(matrix,"matrix")
		HX_STACK_ARG(repeat,"repeat")
		HX_STACK_ARG(smooth,"smooth")
		HX_STACK_LINE(87)
		this->types->push(::openfl::_internal::renderer::DrawCommandType_obj::BEGIN_BITMAP_FILL);
		HX_STACK_LINE(88)
		::openfl::display::BitmapData tmp = bitmap;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(88)
		this->o->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp);
		HX_STACK_LINE(89)
		::openfl::geom::Matrix tmp1 = matrix;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(89)
		this->o->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp1);
		HX_STACK_LINE(90)
		bool tmp2 = repeat;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(90)
		this->b->push(tmp2);
		HX_STACK_LINE(91)
		bool tmp3 = smooth;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(91)
		this->b->push(tmp3);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(DrawCommandBuffer_obj,beginBitmapFill,(void))

Void DrawCommandBuffer_obj::beginFill( int color,Float alpha){
{
		HX_STACK_FRAME("openfl._internal.renderer.DrawCommandBuffer","beginFill",0x6ae7148a,"openfl._internal.renderer.DrawCommandBuffer.beginFill","openfl/_internal/renderer/DrawCommandBuffer.hx",95,0xbc8e6e11)
		HX_STACK_THIS(this)
		HX_STACK_ARG(color,"color")
		HX_STACK_ARG(alpha,"alpha")
		HX_STACK_LINE(97)
		this->types->push(::openfl::_internal::renderer::DrawCommandType_obj::BEGIN_FILL);
		HX_STACK_LINE(98)
		int tmp = color;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(98)
		this->i->push(tmp);
		HX_STACK_LINE(99)
		Float tmp1 = alpha;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(99)
		this->f->push(tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(DrawCommandBuffer_obj,beginFill,(void))

Void DrawCommandBuffer_obj::beginGradientFill( Dynamic type,Array< int > colors,Array< Float > alphas,Array< int > ratios,::openfl::geom::Matrix matrix,Dynamic spreadMethod,Dynamic interpolationMethod,Float focalPointRatio){
{
		HX_STACK_FRAME("openfl._internal.renderer.DrawCommandBuffer","beginGradientFill",0x7d0b119a,"openfl._internal.renderer.DrawCommandBuffer.beginGradientFill","openfl/_internal/renderer/DrawCommandBuffer.hx",104,0xbc8e6e11)
		HX_STACK_THIS(this)
		HX_STACK_ARG(type,"type")
		HX_STACK_ARG(colors,"colors")
		HX_STACK_ARG(alphas,"alphas")
		HX_STACK_ARG(ratios,"ratios")
		HX_STACK_ARG(matrix,"matrix")
		HX_STACK_ARG(spreadMethod,"spreadMethod")
		HX_STACK_ARG(interpolationMethod,"interpolationMethod")
		HX_STACK_ARG(focalPointRatio,"focalPointRatio")
		HX_STACK_LINE(106)
		this->types->push(::openfl::_internal::renderer::DrawCommandType_obj::BEGIN_GRADIENT_FILL);
		HX_STACK_LINE(107)
		Dynamic tmp = type;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(107)
		this->o->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp);
		HX_STACK_LINE(108)
		this->ii->push(colors);
		HX_STACK_LINE(109)
		this->ff->push(alphas);
		HX_STACK_LINE(110)
		this->ii->push(ratios);
		HX_STACK_LINE(111)
		::openfl::geom::Matrix tmp1 = matrix;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(111)
		this->o->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp1);
		HX_STACK_LINE(112)
		Dynamic tmp2 = spreadMethod;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(112)
		this->o->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp2);
		HX_STACK_LINE(113)
		Dynamic tmp3 = interpolationMethod;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(113)
		this->o->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp3);
		HX_STACK_LINE(114)
		Float tmp4 = focalPointRatio;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(114)
		this->f->push(tmp4);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC8(DrawCommandBuffer_obj,beginGradientFill,(void))

Void DrawCommandBuffer_obj::clear( ){
{
		HX_STACK_FRAME("openfl._internal.renderer.DrawCommandBuffer","clear",0xfe5ce1cb,"openfl._internal.renderer.DrawCommandBuffer.clear","openfl/_internal/renderer/DrawCommandBuffer.hx",119,0xbc8e6e11)
		HX_STACK_THIS(this)
		HX_STACK_LINE(121)
		int tmp = this->types->length;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(121)
		this->types->splice((int)0,tmp);
		HX_STACK_LINE(123)
		int tmp1 = this->b->length;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(123)
		this->b->splice((int)0,tmp1);
		HX_STACK_LINE(124)
		int tmp2 = this->i->length;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(124)
		this->i->splice((int)0,tmp2);
		HX_STACK_LINE(125)
		int tmp3 = this->f->length;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(125)
		this->f->splice((int)0,tmp3);
		HX_STACK_LINE(126)
		int tmp4 = this->o->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(126)
		this->o->__Field(HX_HCSTRING("splice","\x7c","\x85","\x9e","\xbf"), hx::paccDynamic )((int)0,tmp4);
		HX_STACK_LINE(127)
		int tmp5 = this->ff->length;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(127)
		this->ff->splice((int)0,tmp5);
		HX_STACK_LINE(128)
		int tmp6 = this->ii->length;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(128)
		this->ii->splice((int)0,tmp6);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DrawCommandBuffer_obj,clear,(void))

::openfl::_internal::renderer::DrawCommandBuffer DrawCommandBuffer_obj::copy( ){
	HX_STACK_FRAME("openfl._internal.renderer.DrawCommandBuffer","copy",0xc3289d37,"openfl._internal.renderer.DrawCommandBuffer.copy","openfl/_internal/renderer/DrawCommandBuffer.hx",133,0xbc8e6e11)
	HX_STACK_THIS(this)
	HX_STACK_LINE(135)
	::openfl::_internal::renderer::DrawCommandBuffer tmp = ::openfl::_internal::renderer::DrawCommandBuffer_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(135)
	::openfl::_internal::renderer::DrawCommandBuffer copy = tmp;		HX_STACK_VAR(copy,"copy");
	HX_STACK_LINE(136)
	copy->append(hx::ObjectPtr<OBJ_>(this));
	HX_STACK_LINE(137)
	::openfl::_internal::renderer::DrawCommandBuffer tmp1 = copy;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(137)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(DrawCommandBuffer_obj,copy,return )

Void DrawCommandBuffer_obj::cubicCurveTo( Float controlX1,Float controlY1,Float controlX2,Float controlY2,Float anchorX,Float anchorY){
{
		HX_STACK_FRAME("openfl._internal.renderer.DrawCommandBuffer","cubicCurveTo",0x96d43b62,"openfl._internal.renderer.DrawCommandBuffer.cubicCurveTo","openfl/_internal/renderer/DrawCommandBuffer.hx",142,0xbc8e6e11)
		HX_STACK_THIS(this)
		HX_STACK_ARG(controlX1,"controlX1")
		HX_STACK_ARG(controlY1,"controlY1")
		HX_STACK_ARG(controlX2,"controlX2")
		HX_STACK_ARG(controlY2,"controlY2")
		HX_STACK_ARG(anchorX,"anchorX")
		HX_STACK_ARG(anchorY,"anchorY")
		HX_STACK_LINE(144)
		this->types->push(::openfl::_internal::renderer::DrawCommandType_obj::CUBIC_CURVE_TO);
		HX_STACK_LINE(145)
		Float tmp = controlX1;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(145)
		this->f->push(tmp);
		HX_STACK_LINE(146)
		Float tmp1 = controlY1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(146)
		this->f->push(tmp1);
		HX_STACK_LINE(147)
		Float tmp2 = controlX2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(147)
		this->f->push(tmp2);
		HX_STACK_LINE(148)
		Float tmp3 = controlY2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(148)
		this->f->push(tmp3);
		HX_STACK_LINE(149)
		Float tmp4 = anchorX;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(149)
		this->f->push(tmp4);
		HX_STACK_LINE(150)
		Float tmp5 = anchorY;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(150)
		this->f->push(tmp5);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(DrawCommandBuffer_obj,cubicCurveTo,(void))

Void DrawCommandBuffer_obj::curveTo( Float controlX,Float controlY,Float anchorX,Float anchorY){
{
		HX_STACK_FRAME("openfl._internal.renderer.DrawCommandBuffer","curveTo",0x1bf4dbc8,"openfl._internal.renderer.DrawCommandBuffer.curveTo","openfl/_internal/renderer/DrawCommandBuffer.hx",154,0xbc8e6e11)
		HX_STACK_THIS(this)
		HX_STACK_ARG(controlX,"controlX")
		HX_STACK_ARG(controlY,"controlY")
		HX_STACK_ARG(anchorX,"anchorX")
		HX_STACK_ARG(anchorY,"anchorY")
		HX_STACK_LINE(156)
		this->types->push(::openfl::_internal::renderer::DrawCommandType_obj::CURVE_TO);
		HX_STACK_LINE(157)
		Float tmp = controlX;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(157)
		this->f->push(tmp);
		HX_STACK_LINE(158)
		Float tmp1 = controlY;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(158)
		this->f->push(tmp1);
		HX_STACK_LINE(159)
		Float tmp2 = anchorX;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(159)
		this->f->push(tmp2);
		HX_STACK_LINE(160)
		Float tmp3 = anchorY;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(160)
		this->f->push(tmp3);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(DrawCommandBuffer_obj,curveTo,(void))

Void DrawCommandBuffer_obj::destroy( ){
{
		HX_STACK_FRAME("openfl._internal.renderer.DrawCommandBuffer","destroy",0x71f2a8b8,"openfl._internal.renderer.DrawCommandBuffer.destroy","openfl/_internal/renderer/DrawCommandBuffer.hx",165,0xbc8e6e11)
		HX_STACK_THIS(this)
		HX_STACK_LINE(167)
		this->clear();
		HX_STACK_LINE(169)
		this->types = null();
		HX_STACK_LINE(171)
		this->b = null();
		HX_STACK_LINE(172)
		this->i = null();
		HX_STACK_LINE(173)
		this->f = null();
		HX_STACK_LINE(174)
		this->o = null();
		HX_STACK_LINE(175)
		this->ff = null();
		HX_STACK_LINE(176)
		this->ii = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DrawCommandBuffer_obj,destroy,(void))

Void DrawCommandBuffer_obj::drawCircle( Float x,Float y,Float radius){
{
		HX_STACK_FRAME("openfl._internal.renderer.DrawCommandBuffer","drawCircle",0x40b9dc36,"openfl._internal.renderer.DrawCommandBuffer.drawCircle","openfl/_internal/renderer/DrawCommandBuffer.hx",181,0xbc8e6e11)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(radius,"radius")
		HX_STACK_LINE(183)
		this->types->push(::openfl::_internal::renderer::DrawCommandType_obj::DRAW_CIRCLE);
		HX_STACK_LINE(184)
		Float tmp = x;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(184)
		this->f->push(tmp);
		HX_STACK_LINE(185)
		Float tmp1 = y;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(185)
		this->f->push(tmp1);
		HX_STACK_LINE(186)
		Float tmp2 = radius;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(186)
		this->f->push(tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(DrawCommandBuffer_obj,drawCircle,(void))

Void DrawCommandBuffer_obj::drawEllipse( Float x,Float y,Float width,Float height){
{
		HX_STACK_FRAME("openfl._internal.renderer.DrawCommandBuffer","drawEllipse",0x77b6b7f8,"openfl._internal.renderer.DrawCommandBuffer.drawEllipse","openfl/_internal/renderer/DrawCommandBuffer.hx",191,0xbc8e6e11)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_LINE(193)
		this->types->push(::openfl::_internal::renderer::DrawCommandType_obj::DRAW_ELLIPSE);
		HX_STACK_LINE(194)
		Float tmp = x;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(194)
		this->f->push(tmp);
		HX_STACK_LINE(195)
		Float tmp1 = y;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(195)
		this->f->push(tmp1);
		HX_STACK_LINE(196)
		Float tmp2 = width;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(196)
		this->f->push(tmp2);
		HX_STACK_LINE(197)
		Float tmp3 = height;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(197)
		this->f->push(tmp3);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(DrawCommandBuffer_obj,drawEllipse,(void))

Void DrawCommandBuffer_obj::drawRect( Float x,Float y,Float width,Float height){
{
		HX_STACK_FRAME("openfl._internal.renderer.DrawCommandBuffer","drawRect",0xd190c1ca,"openfl._internal.renderer.DrawCommandBuffer.drawRect","openfl/_internal/renderer/DrawCommandBuffer.hx",202,0xbc8e6e11)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_LINE(204)
		this->types->push(::openfl::_internal::renderer::DrawCommandType_obj::DRAW_RECT);
		HX_STACK_LINE(205)
		Float tmp = x;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(205)
		this->f->push(tmp);
		HX_STACK_LINE(206)
		Float tmp1 = y;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(206)
		this->f->push(tmp1);
		HX_STACK_LINE(207)
		Float tmp2 = width;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(207)
		this->f->push(tmp2);
		HX_STACK_LINE(208)
		Float tmp3 = height;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(208)
		this->f->push(tmp3);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(DrawCommandBuffer_obj,drawRect,(void))

Void DrawCommandBuffer_obj::drawRoundRect( Float x,Float y,Float width,Float height,Float ellipseWidth,Dynamic ellipseHeight){
{
		HX_STACK_FRAME("openfl._internal.renderer.DrawCommandBuffer","drawRoundRect",0xb613a22c,"openfl._internal.renderer.DrawCommandBuffer.drawRoundRect","openfl/_internal/renderer/DrawCommandBuffer.hx",212,0xbc8e6e11)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_ARG(ellipseWidth,"ellipseWidth")
		HX_STACK_ARG(ellipseHeight,"ellipseHeight")
		HX_STACK_LINE(214)
		this->types->push(::openfl::_internal::renderer::DrawCommandType_obj::DRAW_ROUND_RECT);
		HX_STACK_LINE(215)
		Float tmp = x;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(215)
		this->f->push(tmp);
		HX_STACK_LINE(216)
		Float tmp1 = y;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(216)
		this->f->push(tmp1);
		HX_STACK_LINE(217)
		Float tmp2 = width;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(217)
		this->f->push(tmp2);
		HX_STACK_LINE(218)
		Float tmp3 = height;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(218)
		this->f->push(tmp3);
		HX_STACK_LINE(219)
		Float tmp4 = ellipseWidth;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(219)
		this->f->push(tmp4);
		HX_STACK_LINE(220)
		Dynamic tmp5 = ellipseHeight;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(220)
		this->o->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp5);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(DrawCommandBuffer_obj,drawRoundRect,(void))

Void DrawCommandBuffer_obj::drawTriangles( ::openfl::_Vector::FloatVector vertices,::openfl::_Vector::IntVector indices,::openfl::_Vector::FloatVector uvtData,Dynamic culling){
{
		HX_STACK_FRAME("openfl._internal.renderer.DrawCommandBuffer","drawTriangles",0xb1d12245,"openfl._internal.renderer.DrawCommandBuffer.drawTriangles","openfl/_internal/renderer/DrawCommandBuffer.hx",225,0xbc8e6e11)
		HX_STACK_THIS(this)
		HX_STACK_ARG(vertices,"vertices")
		HX_STACK_ARG(indices,"indices")
		HX_STACK_ARG(uvtData,"uvtData")
		HX_STACK_ARG(culling,"culling")
		HX_STACK_LINE(227)
		this->types->push(::openfl::_internal::renderer::DrawCommandType_obj::DRAW_TRIANGLES);
		HX_STACK_LINE(228)
		::openfl::_Vector::FloatVector tmp = vertices;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(228)
		this->o->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp);
		HX_STACK_LINE(229)
		::openfl::_Vector::IntVector tmp1 = indices;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(229)
		this->o->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp1);
		HX_STACK_LINE(230)
		::openfl::_Vector::FloatVector tmp2 = uvtData;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(230)
		this->o->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp2);
		HX_STACK_LINE(231)
		Dynamic tmp3 = culling;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(231)
		this->o->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp3);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(DrawCommandBuffer_obj,drawTriangles,(void))

Void DrawCommandBuffer_obj::endFill( ){
{
		HX_STACK_FRAME("openfl._internal.renderer.DrawCommandBuffer","endFill",0x734d03bc,"openfl._internal.renderer.DrawCommandBuffer.endFill","openfl/_internal/renderer/DrawCommandBuffer.hx",238,0xbc8e6e11)
		HX_STACK_THIS(this)
		HX_STACK_LINE(238)
		this->types->push(::openfl::_internal::renderer::DrawCommandType_obj::END_FILL);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DrawCommandBuffer_obj,endFill,(void))

Void DrawCommandBuffer_obj::lineBitmapStyle( ::openfl::display::BitmapData bitmap,::openfl::geom::Matrix matrix,bool repeat,bool smooth){
{
		HX_STACK_FRAME("openfl._internal.renderer.DrawCommandBuffer","lineBitmapStyle",0x6b2ca8ec,"openfl._internal.renderer.DrawCommandBuffer.lineBitmapStyle","openfl/_internal/renderer/DrawCommandBuffer.hx",243,0xbc8e6e11)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bitmap,"bitmap")
		HX_STACK_ARG(matrix,"matrix")
		HX_STACK_ARG(repeat,"repeat")
		HX_STACK_ARG(smooth,"smooth")
		HX_STACK_LINE(245)
		this->types->push(::openfl::_internal::renderer::DrawCommandType_obj::LINE_BITMAP_STYLE);
		HX_STACK_LINE(246)
		::openfl::display::BitmapData tmp = bitmap;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(246)
		this->o->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp);
		HX_STACK_LINE(247)
		::openfl::geom::Matrix tmp1 = matrix;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(247)
		this->o->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp1);
		HX_STACK_LINE(248)
		bool tmp2 = repeat;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(248)
		this->b->push(tmp2);
		HX_STACK_LINE(249)
		bool tmp3 = smooth;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(249)
		this->b->push(tmp3);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(DrawCommandBuffer_obj,lineBitmapStyle,(void))

Void DrawCommandBuffer_obj::lineGradientStyle( Dynamic type,Array< int > colors,Array< Float > alphas,Array< int > ratios,::openfl::geom::Matrix matrix,Dynamic spreadMethod,Dynamic interpolationMethod,Float focalPointRatio){
{
		HX_STACK_FRAME("openfl._internal.renderer.DrawCommandBuffer","lineGradientStyle",0x10f9f9cb,"openfl._internal.renderer.DrawCommandBuffer.lineGradientStyle","openfl/_internal/renderer/DrawCommandBuffer.hx",254,0xbc8e6e11)
		HX_STACK_THIS(this)
		HX_STACK_ARG(type,"type")
		HX_STACK_ARG(colors,"colors")
		HX_STACK_ARG(alphas,"alphas")
		HX_STACK_ARG(ratios,"ratios")
		HX_STACK_ARG(matrix,"matrix")
		HX_STACK_ARG(spreadMethod,"spreadMethod")
		HX_STACK_ARG(interpolationMethod,"interpolationMethod")
		HX_STACK_ARG(focalPointRatio,"focalPointRatio")
		HX_STACK_LINE(256)
		this->types->push(::openfl::_internal::renderer::DrawCommandType_obj::LINE_GRADIENT_STYLE);
		HX_STACK_LINE(257)
		Dynamic tmp = type;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(257)
		this->o->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp);
		HX_STACK_LINE(258)
		this->ii->push(colors);
		HX_STACK_LINE(259)
		this->ff->push(alphas);
		HX_STACK_LINE(260)
		this->ii->push(ratios);
		HX_STACK_LINE(261)
		::openfl::geom::Matrix tmp1 = matrix;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(261)
		this->o->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp1);
		HX_STACK_LINE(262)
		Dynamic tmp2 = spreadMethod;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(262)
		this->o->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp2);
		HX_STACK_LINE(263)
		Dynamic tmp3 = interpolationMethod;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(263)
		this->o->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp3);
		HX_STACK_LINE(264)
		Float tmp4 = focalPointRatio;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(264)
		this->f->push(tmp4);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC8(DrawCommandBuffer_obj,lineGradientStyle,(void))

Void DrawCommandBuffer_obj::lineStyle( Dynamic thickness,int color,Float alpha,bool pixelHinting,Dynamic scaleMode,Dynamic caps,Dynamic joints,Float miterLimit){
{
		HX_STACK_FRAME("openfl._internal.renderer.DrawCommandBuffer","lineStyle",0xa96a0fdb,"openfl._internal.renderer.DrawCommandBuffer.lineStyle","openfl/_internal/renderer/DrawCommandBuffer.hx",269,0xbc8e6e11)
		HX_STACK_THIS(this)
		HX_STACK_ARG(thickness,"thickness")
		HX_STACK_ARG(color,"color")
		HX_STACK_ARG(alpha,"alpha")
		HX_STACK_ARG(pixelHinting,"pixelHinting")
		HX_STACK_ARG(scaleMode,"scaleMode")
		HX_STACK_ARG(caps,"caps")
		HX_STACK_ARG(joints,"joints")
		HX_STACK_ARG(miterLimit,"miterLimit")
		HX_STACK_LINE(271)
		this->types->push(::openfl::_internal::renderer::DrawCommandType_obj::LINE_STYLE);
		HX_STACK_LINE(272)
		Dynamic tmp = thickness;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(272)
		this->o->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp);
		HX_STACK_LINE(273)
		int tmp1 = color;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(273)
		this->i->push(tmp1);
		HX_STACK_LINE(274)
		Float tmp2 = alpha;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(274)
		this->f->push(tmp2);
		HX_STACK_LINE(275)
		bool tmp3 = pixelHinting;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(275)
		this->b->push(tmp3);
		HX_STACK_LINE(276)
		Dynamic tmp4 = scaleMode;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(276)
		this->o->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp4);
		HX_STACK_LINE(277)
		Dynamic tmp5 = caps;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(277)
		this->o->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp5);
		HX_STACK_LINE(278)
		Dynamic tmp6 = joints;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(278)
		this->o->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp6);
		HX_STACK_LINE(279)
		Float tmp7 = miterLimit;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(279)
		this->f->push(tmp7);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC8(DrawCommandBuffer_obj,lineStyle,(void))

Void DrawCommandBuffer_obj::lineTo( Float x,Float y){
{
		HX_STACK_FRAME("openfl._internal.renderer.DrawCommandBuffer","lineTo",0x77e10c91,"openfl._internal.renderer.DrawCommandBuffer.lineTo","openfl/_internal/renderer/DrawCommandBuffer.hx",284,0xbc8e6e11)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(286)
		this->types->push(::openfl::_internal::renderer::DrawCommandType_obj::LINE_TO);
		HX_STACK_LINE(287)
		Float tmp = x;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(287)
		this->f->push(tmp);
		HX_STACK_LINE(288)
		Float tmp1 = y;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(288)
		this->f->push(tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(DrawCommandBuffer_obj,lineTo,(void))

Void DrawCommandBuffer_obj::moveTo( Float x,Float y){
{
		HX_STACK_FRAME("openfl._internal.renderer.DrawCommandBuffer","moveTo",0x57ed98ee,"openfl._internal.renderer.DrawCommandBuffer.moveTo","openfl/_internal/renderer/DrawCommandBuffer.hx",293,0xbc8e6e11)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(295)
		this->types->push(::openfl::_internal::renderer::DrawCommandType_obj::MOVE_TO);
		HX_STACK_LINE(296)
		Float tmp = x;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(296)
		this->f->push(tmp);
		HX_STACK_LINE(297)
		Float tmp1 = y;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(297)
		this->f->push(tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(DrawCommandBuffer_obj,moveTo,(void))

Void DrawCommandBuffer_obj::overrideMatrix( ::openfl::geom::Matrix matrix){
{
		HX_STACK_FRAME("openfl._internal.renderer.DrawCommandBuffer","overrideMatrix",0xe20325af,"openfl._internal.renderer.DrawCommandBuffer.overrideMatrix","openfl/_internal/renderer/DrawCommandBuffer.hx",302,0xbc8e6e11)
		HX_STACK_THIS(this)
		HX_STACK_ARG(matrix,"matrix")
		HX_STACK_LINE(304)
		this->types->push(::openfl::_internal::renderer::DrawCommandType_obj::OVERRIDE_MATRIX);
		HX_STACK_LINE(305)
		::openfl::geom::Matrix tmp = matrix;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(305)
		this->o->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DrawCommandBuffer_obj,overrideMatrix,(void))

int DrawCommandBuffer_obj::get_length( ){
	HX_STACK_FRAME("openfl._internal.renderer.DrawCommandBuffer","get_length",0x3877f3b1,"openfl._internal.renderer.DrawCommandBuffer.get_length","openfl/_internal/renderer/DrawCommandBuffer.hx",317,0xbc8e6e11)
	HX_STACK_THIS(this)
	HX_STACK_LINE(319)
	int tmp = this->types->length;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(319)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(DrawCommandBuffer_obj,get_length,return )


DrawCommandBuffer_obj::DrawCommandBuffer_obj()
{
}

void DrawCommandBuffer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DrawCommandBuffer);
	HX_MARK_MEMBER_NAME(types,"types");
	HX_MARK_MEMBER_NAME(b,"b");
	HX_MARK_MEMBER_NAME(f,"f");
	HX_MARK_MEMBER_NAME(ff,"ff");
	HX_MARK_MEMBER_NAME(i,"i");
	HX_MARK_MEMBER_NAME(ii,"ii");
	HX_MARK_MEMBER_NAME(o,"o");
	HX_MARK_END_CLASS();
}

void DrawCommandBuffer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(types,"types");
	HX_VISIT_MEMBER_NAME(b,"b");
	HX_VISIT_MEMBER_NAME(f,"f");
	HX_VISIT_MEMBER_NAME(ff,"ff");
	HX_VISIT_MEMBER_NAME(i,"i");
	HX_VISIT_MEMBER_NAME(ii,"ii");
	HX_VISIT_MEMBER_NAME(o,"o");
}

Dynamic DrawCommandBuffer_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"b") ) { return b; }
		if (HX_FIELD_EQ(inName,"f") ) { return f; }
		if (HX_FIELD_EQ(inName,"i") ) { return i; }
		if (HX_FIELD_EQ(inName,"o") ) { return o; }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"ff") ) { return ff; }
		if (HX_FIELD_EQ(inName,"ii") ) { return ii; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"copy") ) { return copy_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"types") ) { return types; }
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { if (inCallProp == hx::paccAlways) return get_length(); }
		if (HX_FIELD_EQ(inName,"append") ) { return append_dyn(); }
		if (HX_FIELD_EQ(inName,"lineTo") ) { return lineTo_dyn(); }
		if (HX_FIELD_EQ(inName,"moveTo") ) { return moveTo_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"curveTo") ) { return curveTo_dyn(); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"endFill") ) { return endFill_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"drawRect") ) { return drawRect_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"beginFill") ) { return beginFill_dyn(); }
		if (HX_FIELD_EQ(inName,"lineStyle") ) { return lineStyle_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"drawCircle") ) { return drawCircle_dyn(); }
		if (HX_FIELD_EQ(inName,"get_length") ) { return get_length_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"drawEllipse") ) { return drawEllipse_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"cubicCurveTo") ) { return cubicCurveTo_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"drawRoundRect") ) { return drawRoundRect_dyn(); }
		if (HX_FIELD_EQ(inName,"drawTriangles") ) { return drawTriangles_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"overrideMatrix") ) { return overrideMatrix_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"beginBitmapFill") ) { return beginBitmapFill_dyn(); }
		if (HX_FIELD_EQ(inName,"lineBitmapStyle") ) { return lineBitmapStyle_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"beginGradientFill") ) { return beginGradientFill_dyn(); }
		if (HX_FIELD_EQ(inName,"lineGradientStyle") ) { return lineGradientStyle_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic DrawCommandBuffer_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"b") ) { b=inValue.Cast< Array< bool > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"f") ) { f=inValue.Cast< Array< Float > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"i") ) { i=inValue.Cast< Array< int > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"o") ) { o=inValue.Cast< cpp::ArrayBase >(); return inValue; }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"ff") ) { ff=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ii") ) { ii=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"types") ) { types=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void DrawCommandBuffer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"));
	outFields->push(HX_HCSTRING("types","\x79","\x70","\xcb","\x1a"));
	outFields->push(HX_HCSTRING("b","\x62","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("f","\x66","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("ff","\x40","\x59","\x00","\x00"));
	outFields->push(HX_HCSTRING("i","\x69","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("ii","\xe0","\x5b","\x00","\x00"));
	outFields->push(HX_HCSTRING("o","\x6f","\x00","\x00","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(DrawCommandBuffer_obj,types),HX_HCSTRING("types","\x79","\x70","\xcb","\x1a")},
	{hx::fsObject /*Array< bool >*/ ,(int)offsetof(DrawCommandBuffer_obj,b),HX_HCSTRING("b","\x62","\x00","\x00","\x00")},
	{hx::fsObject /*Array< Float >*/ ,(int)offsetof(DrawCommandBuffer_obj,f),HX_HCSTRING("f","\x66","\x00","\x00","\x00")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(DrawCommandBuffer_obj,ff),HX_HCSTRING("ff","\x40","\x59","\x00","\x00")},
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(DrawCommandBuffer_obj,i),HX_HCSTRING("i","\x69","\x00","\x00","\x00")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(DrawCommandBuffer_obj,ii),HX_HCSTRING("ii","\xe0","\x5b","\x00","\x00")},
	{hx::fsObject /*cpp::ArrayBase*/ ,(int)offsetof(DrawCommandBuffer_obj,o),HX_HCSTRING("o","\x6f","\x00","\x00","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("types","\x79","\x70","\xcb","\x1a"),
	HX_HCSTRING("b","\x62","\x00","\x00","\x00"),
	HX_HCSTRING("f","\x66","\x00","\x00","\x00"),
	HX_HCSTRING("ff","\x40","\x59","\x00","\x00"),
	HX_HCSTRING("i","\x69","\x00","\x00","\x00"),
	HX_HCSTRING("ii","\xe0","\x5b","\x00","\x00"),
	HX_HCSTRING("o","\x6f","\x00","\x00","\x00"),
	HX_HCSTRING("append","\xda","\xe1","\xd3","\x8f"),
	HX_HCSTRING("beginBitmapFill","\x9b","\xc9","\x07","\x6a"),
	HX_HCSTRING("beginFill","\x4c","\xad","\x95","\x8c"),
	HX_HCSTRING("beginGradientFill","\x5c","\x3c","\x03","\x2e"),
	HX_HCSTRING("clear","\x8d","\x71","\x5b","\x48"),
	HX_HCSTRING("copy","\xb5","\xbb","\xc4","\x41"),
	HX_HCSTRING("cubicCurveTo","\xe0","\x07","\x90","\x2e"),
	HX_HCSTRING("curveTo","\x0a","\x60","\x88","\xce"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("drawCircle","\x34","\xed","\xd0","\x97"),
	HX_HCSTRING("drawEllipse","\x3a","\x85","\xce","\x54"),
	HX_HCSTRING("drawRect","\x48","\xf7","\x10","\x60"),
	HX_HCSTRING("drawRoundRect","\xee","\xc3","\xaa","\xe2"),
	HX_HCSTRING("drawTriangles","\x07","\x44","\x68","\xde"),
	HX_HCSTRING("endFill","\xfe","\x87","\xe0","\x25"),
	HX_HCSTRING("lineBitmapStyle","\x2e","\x3f","\x21","\x45"),
	HX_HCSTRING("lineGradientStyle","\x8d","\x24","\xf2","\xc1"),
	HX_HCSTRING("lineStyle","\x9d","\xa8","\x18","\xcb"),
	HX_HCSTRING("lineTo","\x8f","\x46","\xa0","\xec"),
	HX_HCSTRING("moveTo","\xec","\xd2","\xac","\xcc"),
	HX_HCSTRING("overrideMatrix","\xad","\x8d","\xa9","\xb9"),
	HX_HCSTRING("get_length","\xaf","\x04","\x8f","\x8f"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DrawCommandBuffer_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DrawCommandBuffer_obj::__mClass,"__mClass");
};

#endif

hx::Class DrawCommandBuffer_obj::__mClass;

void DrawCommandBuffer_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.renderer.DrawCommandBuffer","\x2c","\xee","\x3f","\x7e");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< DrawCommandBuffer_obj >;
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
} // end namespace _internal
} // end namespace renderer
