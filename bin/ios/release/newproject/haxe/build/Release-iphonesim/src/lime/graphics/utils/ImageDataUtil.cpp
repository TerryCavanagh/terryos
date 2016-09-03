#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_cpp_Prime
#include <cpp/Prime.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_graphics_Image
#include <lime/graphics/Image.h>
#endif
#ifndef INCLUDED_lime_graphics_ImageBuffer
#include <lime/graphics/ImageBuffer.h>
#endif
#ifndef INCLUDED_lime_graphics_ImageChannel
#include <lime/graphics/ImageChannel.h>
#endif
#ifndef INCLUDED_lime_graphics_utils_ImageDataUtil
#include <lime/graphics/utils/ImageDataUtil.h>
#endif
#ifndef INCLUDED_lime_graphics_utils__ImageDataUtil_ImageDataView
#include <lime/graphics/utils/_ImageDataUtil/ImageDataView.h>
#endif
#ifndef INCLUDED_lime_math_Rectangle
#include <lime/math/Rectangle.h>
#endif
#ifndef INCLUDED_lime_math_Vector2
#include <lime/math/Vector2.h>
#endif
#ifndef INCLUDED_lime_math__ColorMatrix_ColorMatrix_Impl_
#include <lime/math/_ColorMatrix/ColorMatrix_Impl_.h>
#endif
#ifndef INCLUDED_lime_math_color__RGBA_RGBA_Impl_
#include <lime/math/color/_RGBA/RGBA_Impl_.h>
#endif
#ifndef INCLUDED_lime_system_CFFI
#include <lime/system/CFFI.h>
#endif
#ifndef INCLUDED_lime_utils_ArrayBufferView
#include <lime/utils/ArrayBufferView.h>
#endif
#ifndef INCLUDED_lime_utils_TAError
#include <lime/utils/TAError.h>
#endif
namespace lime{
namespace graphics{
namespace utils{

Void ImageDataUtil_obj::__construct()
{
	return null();
}

//ImageDataUtil_obj::~ImageDataUtil_obj() { }

Dynamic ImageDataUtil_obj::__CreateEmpty() { return  new ImageDataUtil_obj; }
hx::ObjectPtr< ImageDataUtil_obj > ImageDataUtil_obj::__new()
{  hx::ObjectPtr< ImageDataUtil_obj > _result_ = new ImageDataUtil_obj();
	_result_->__construct();
	return _result_;}

Dynamic ImageDataUtil_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ImageDataUtil_obj > _result_ = new ImageDataUtil_obj();
	_result_->__construct();
	return _result_;}

Void ImageDataUtil_obj::colorTransform( ::lime::graphics::Image image,::lime::math::Rectangle rect,::lime::utils::ArrayBufferView colorMatrix){
{
		HX_STACK_FRAME("lime.graphics.utils.ImageDataUtil","colorTransform",0x2c17e9b7,"lime.graphics.utils.ImageDataUtil.colorTransform","lime/graphics/utils/ImageDataUtil.hx",30,0x494d921f)
		HX_STACK_ARG(image,"image")
		HX_STACK_ARG(rect,"rect")
		HX_STACK_ARG(colorMatrix,"colorMatrix")
		HX_STACK_LINE(32)
		::lime::utils::ArrayBufferView tmp = image->buffer->data;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(32)
		::lime::utils::ArrayBufferView data = tmp;		HX_STACK_VAR(data,"data");
		HX_STACK_LINE(33)
		bool tmp1 = (data == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(33)
		if ((tmp1)){
			HX_STACK_LINE(33)
			return null();
		}
		HX_STACK_LINE(36)
		bool tmp2 = ::lime::_system::CFFI_obj::enabled;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(36)
		if ((tmp2)){
			HX_STACK_LINE(36)
			::lime::graphics::utils::ImageDataUtil_obj::cffi_lime_image_data_util_color_transform.call(hx::DynamicPtr(image),hx::DynamicPtr(rect),hx::DynamicPtr(colorMatrix));
		}
		else{
			HX_STACK_LINE(40)
			int tmp3 = image->buffer->format;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(40)
			int format = tmp3;		HX_STACK_VAR(format,"format");
			HX_STACK_LINE(41)
			bool tmp4 = image->buffer->premultiplied;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(41)
			bool premultiplied = tmp4;		HX_STACK_VAR(premultiplied,"premultiplied");
			HX_STACK_LINE(43)
			::lime::graphics::utils::_ImageDataUtil::ImageDataView tmp5 = ::lime::graphics::utils::_ImageDataUtil::ImageDataView_obj::__new(image,rect);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(43)
			::lime::graphics::utils::_ImageDataUtil::ImageDataView dataView = tmp5;		HX_STACK_VAR(dataView,"dataView");
			HX_STACK_LINE(45)
			::lime::utils::ArrayBufferView tmp6 = colorMatrix;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(45)
			::lime::utils::ArrayBufferView tmp7 = ::lime::math::_ColorMatrix::ColorMatrix_Impl__obj::getAlphaTable(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(45)
			::lime::utils::ArrayBufferView alphaTable = tmp7;		HX_STACK_VAR(alphaTable,"alphaTable");
			HX_STACK_LINE(46)
			::lime::utils::ArrayBufferView tmp8 = colorMatrix;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(46)
			::lime::utils::ArrayBufferView tmp9 = ::lime::math::_ColorMatrix::ColorMatrix_Impl__obj::getRedTable(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(46)
			::lime::utils::ArrayBufferView redTable = tmp9;		HX_STACK_VAR(redTable,"redTable");
			HX_STACK_LINE(47)
			::lime::utils::ArrayBufferView tmp10 = colorMatrix;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(47)
			::lime::utils::ArrayBufferView tmp11 = ::lime::math::_ColorMatrix::ColorMatrix_Impl__obj::getGreenTable(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(47)
			::lime::utils::ArrayBufferView greenTable = tmp11;		HX_STACK_VAR(greenTable,"greenTable");
			HX_STACK_LINE(48)
			::lime::utils::ArrayBufferView tmp12 = colorMatrix;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(48)
			::lime::utils::ArrayBufferView tmp13 = ::lime::math::_ColorMatrix::ColorMatrix_Impl__obj::getBlueTable(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(48)
			::lime::utils::ArrayBufferView blueTable = tmp13;		HX_STACK_VAR(blueTable,"blueTable");
			HX_STACK_LINE(50)
			int row;		HX_STACK_VAR(row,"row");
			HX_STACK_LINE(50)
			int offset;		HX_STACK_VAR(offset,"offset");
			HX_STACK_LINE(50)
			int pixel;		HX_STACK_VAR(pixel,"pixel");
			HX_STACK_LINE(52)
			{
				HX_STACK_LINE(52)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(52)
				int _g = dataView->height;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(52)
				while((true)){
					HX_STACK_LINE(52)
					bool tmp14 = (_g1 < _g);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(52)
					bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(52)
					if ((tmp15)){
						HX_STACK_LINE(52)
						break;
					}
					HX_STACK_LINE(52)
					int tmp16 = (_g1)++;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(52)
					int y = tmp16;		HX_STACK_VAR(y,"y");
					HX_STACK_LINE(54)
					int tmp17 = dataView->offset;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(54)
					int tmp18 = (dataView->stride * y);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(54)
					int tmp19 = (tmp17 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(54)
					row = tmp19;
					HX_STACK_LINE(56)
					{
						HX_STACK_LINE(56)
						int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
						HX_STACK_LINE(56)
						int _g2 = dataView->width;		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(56)
						while((true)){
							HX_STACK_LINE(56)
							bool tmp20 = (_g3 < _g2);		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(56)
							bool tmp21 = !(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(56)
							if ((tmp21)){
								HX_STACK_LINE(56)
								break;
							}
							HX_STACK_LINE(56)
							int tmp22 = (_g3)++;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(56)
							int x = tmp22;		HX_STACK_VAR(x,"x");
							HX_STACK_LINE(58)
							int tmp23 = row;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(58)
							int tmp24 = (x * (int)4);		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(58)
							int tmp25 = (tmp23 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(58)
							offset = tmp25;
							HX_STACK_LINE(60)
							{
								HX_STACK_LINE(60)
								int tmp26 = format;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(60)
								switch( (int)(tmp26)){
									case (int)2: {
										HX_STACK_LINE(60)
										int tmp27 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)2))));		HX_STACK_VAR(tmp27,"tmp27");
										HX_STACK_LINE(60)
										Dynamic tmp28 = (int(tmp27) & int((int)255));		HX_STACK_VAR(tmp28,"tmp28");
										HX_STACK_LINE(60)
										int r = tmp28;		HX_STACK_VAR(r,"r");
										HX_STACK_LINE(60)
										int tmp29 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)1))));		HX_STACK_VAR(tmp29,"tmp29");
										HX_STACK_LINE(60)
										Dynamic tmp30 = (int(tmp29) & int((int)255));		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(60)
										int g = tmp30;		HX_STACK_VAR(g,"g");
										HX_STACK_LINE(60)
										int tmp31 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + offset));		HX_STACK_VAR(tmp31,"tmp31");
										HX_STACK_LINE(60)
										Dynamic tmp32 = (int(tmp31) & int((int)255));		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(60)
										int b = tmp32;		HX_STACK_VAR(b,"b");
										HX_STACK_LINE(60)
										int tmp33 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)3))));		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(60)
										Dynamic tmp34 = (int(tmp33) & int((int)255));		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(60)
										int a = tmp34;		HX_STACK_VAR(a,"a");
										HX_STACK_LINE(60)
										int tmp35 = (int(r) & int((int)255));		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(60)
										int tmp36 = (int(tmp35) << int((int)24));		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(60)
										int tmp37 = (int(g) & int((int)255));		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(60)
										int tmp38 = (int(tmp37) << int((int)16));		HX_STACK_VAR(tmp38,"tmp38");
										HX_STACK_LINE(60)
										int tmp39 = (int(tmp36) | int(tmp38));		HX_STACK_VAR(tmp39,"tmp39");
										HX_STACK_LINE(60)
										int tmp40 = (int(b) & int((int)255));		HX_STACK_VAR(tmp40,"tmp40");
										HX_STACK_LINE(60)
										int tmp41 = (int(tmp40) << int((int)8));		HX_STACK_VAR(tmp41,"tmp41");
										HX_STACK_LINE(60)
										int tmp42 = (int(tmp39) | int(tmp41));		HX_STACK_VAR(tmp42,"tmp42");
										HX_STACK_LINE(60)
										int tmp43 = (int(a) & int((int)255));		HX_STACK_VAR(tmp43,"tmp43");
										HX_STACK_LINE(60)
										int tmp44 = (int(tmp42) | int(tmp43));		HX_STACK_VAR(tmp44,"tmp44");
										HX_STACK_LINE(60)
										pixel = tmp44;
									}
									;break;
									case (int)0: {
										HX_STACK_LINE(60)
										int tmp27 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + offset));		HX_STACK_VAR(tmp27,"tmp27");
										HX_STACK_LINE(60)
										Dynamic tmp28 = (int(tmp27) & int((int)255));		HX_STACK_VAR(tmp28,"tmp28");
										HX_STACK_LINE(60)
										int r = tmp28;		HX_STACK_VAR(r,"r");
										HX_STACK_LINE(60)
										int tmp29 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)1))));		HX_STACK_VAR(tmp29,"tmp29");
										HX_STACK_LINE(60)
										Dynamic tmp30 = (int(tmp29) & int((int)255));		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(60)
										int g = tmp30;		HX_STACK_VAR(g,"g");
										HX_STACK_LINE(60)
										int tmp31 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)2))));		HX_STACK_VAR(tmp31,"tmp31");
										HX_STACK_LINE(60)
										Dynamic tmp32 = (int(tmp31) & int((int)255));		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(60)
										int b = tmp32;		HX_STACK_VAR(b,"b");
										HX_STACK_LINE(60)
										int tmp33 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)3))));		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(60)
										Dynamic tmp34 = (int(tmp33) & int((int)255));		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(60)
										int a = tmp34;		HX_STACK_VAR(a,"a");
										HX_STACK_LINE(60)
										int tmp35 = (int(r) & int((int)255));		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(60)
										int tmp36 = (int(tmp35) << int((int)24));		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(60)
										int tmp37 = (int(g) & int((int)255));		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(60)
										int tmp38 = (int(tmp37) << int((int)16));		HX_STACK_VAR(tmp38,"tmp38");
										HX_STACK_LINE(60)
										int tmp39 = (int(tmp36) | int(tmp38));		HX_STACK_VAR(tmp39,"tmp39");
										HX_STACK_LINE(60)
										int tmp40 = (int(b) & int((int)255));		HX_STACK_VAR(tmp40,"tmp40");
										HX_STACK_LINE(60)
										int tmp41 = (int(tmp40) << int((int)8));		HX_STACK_VAR(tmp41,"tmp41");
										HX_STACK_LINE(60)
										int tmp42 = (int(tmp39) | int(tmp41));		HX_STACK_VAR(tmp42,"tmp42");
										HX_STACK_LINE(60)
										int tmp43 = (int(a) & int((int)255));		HX_STACK_VAR(tmp43,"tmp43");
										HX_STACK_LINE(60)
										int tmp44 = (int(tmp42) | int(tmp43));		HX_STACK_VAR(tmp44,"tmp44");
										HX_STACK_LINE(60)
										pixel = tmp44;
									}
									;break;
									case (int)1: {
										HX_STACK_LINE(60)
										int tmp27 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)1))));		HX_STACK_VAR(tmp27,"tmp27");
										HX_STACK_LINE(60)
										Dynamic tmp28 = (int(tmp27) & int((int)255));		HX_STACK_VAR(tmp28,"tmp28");
										HX_STACK_LINE(60)
										int r = tmp28;		HX_STACK_VAR(r,"r");
										HX_STACK_LINE(60)
										int tmp29 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)2))));		HX_STACK_VAR(tmp29,"tmp29");
										HX_STACK_LINE(60)
										Dynamic tmp30 = (int(tmp29) & int((int)255));		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(60)
										int g = tmp30;		HX_STACK_VAR(g,"g");
										HX_STACK_LINE(60)
										int tmp31 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)3))));		HX_STACK_VAR(tmp31,"tmp31");
										HX_STACK_LINE(60)
										Dynamic tmp32 = (int(tmp31) & int((int)255));		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(60)
										int b = tmp32;		HX_STACK_VAR(b,"b");
										HX_STACK_LINE(60)
										int tmp33 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + offset));		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(60)
										Dynamic tmp34 = (int(tmp33) & int((int)255));		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(60)
										int a = tmp34;		HX_STACK_VAR(a,"a");
										HX_STACK_LINE(60)
										int tmp35 = (int(r) & int((int)255));		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(60)
										int tmp36 = (int(tmp35) << int((int)24));		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(60)
										int tmp37 = (int(g) & int((int)255));		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(60)
										int tmp38 = (int(tmp37) << int((int)16));		HX_STACK_VAR(tmp38,"tmp38");
										HX_STACK_LINE(60)
										int tmp39 = (int(tmp36) | int(tmp38));		HX_STACK_VAR(tmp39,"tmp39");
										HX_STACK_LINE(60)
										int tmp40 = (int(b) & int((int)255));		HX_STACK_VAR(tmp40,"tmp40");
										HX_STACK_LINE(60)
										int tmp41 = (int(tmp40) << int((int)8));		HX_STACK_VAR(tmp41,"tmp41");
										HX_STACK_LINE(60)
										int tmp42 = (int(tmp39) | int(tmp41));		HX_STACK_VAR(tmp42,"tmp42");
										HX_STACK_LINE(60)
										int tmp43 = (int(a) & int((int)255));		HX_STACK_VAR(tmp43,"tmp43");
										HX_STACK_LINE(60)
										int tmp44 = (int(tmp42) | int(tmp43));		HX_STACK_VAR(tmp44,"tmp44");
										HX_STACK_LINE(60)
										pixel = tmp44;
									}
									;break;
								}
								HX_STACK_LINE(60)
								bool tmp27 = premultiplied;		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(60)
								if ((tmp27)){
									HX_STACK_LINE(60)
									int tmp28 = (int(pixel) & int((int)255));		HX_STACK_VAR(tmp28,"tmp28");
									HX_STACK_LINE(60)
									bool tmp29 = (tmp28 != (int)0);		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(60)
									bool tmp30;		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(60)
									if ((tmp29)){
										HX_STACK_LINE(60)
										int tmp31 = (int(pixel) & int((int)255));		HX_STACK_VAR(tmp31,"tmp31");
										HX_STACK_LINE(60)
										int tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(60)
										tmp30 = (tmp32 != (int)255);
									}
									else{
										HX_STACK_LINE(60)
										tmp30 = false;
									}
									HX_STACK_LINE(60)
									if ((tmp30)){
										HX_STACK_LINE(60)
										int tmp31 = (int(pixel) & int((int)255));		HX_STACK_VAR(tmp31,"tmp31");
										HX_STACK_LINE(60)
										Float tmp32 = (Float(((Float)255.0)) / Float(tmp31));		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(60)
										::lime::math::color::_RGBA::RGBA_Impl__obj::unmult = tmp32;
										HX_STACK_LINE(60)
										{
											HX_STACK_LINE(60)
											Dynamic tmp33;		HX_STACK_VAR(tmp33,"tmp33");
											HX_STACK_LINE(60)
											{
												HX_STACK_LINE(60)
												::lime::utils::ArrayBufferView tmp34 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp34,"tmp34");
												HX_STACK_LINE(60)
												::lime::utils::ArrayBufferView this1 = tmp34;		HX_STACK_VAR(this1,"this1");
												HX_STACK_LINE(60)
												int tmp35 = (int(pixel) >> int((int)24));		HX_STACK_VAR(tmp35,"tmp35");
												HX_STACK_LINE(60)
												int tmp36 = (int(tmp35) & int((int)255));		HX_STACK_VAR(tmp36,"tmp36");
												HX_STACK_LINE(60)
												Float tmp37 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;		HX_STACK_VAR(tmp37,"tmp37");
												HX_STACK_LINE(60)
												Float tmp38 = (tmp36 * tmp37);		HX_STACK_VAR(tmp38,"tmp38");
												HX_STACK_LINE(60)
												int tmp39 = ::Math_obj::round(tmp38);		HX_STACK_VAR(tmp39,"tmp39");
												HX_STACK_LINE(60)
												int idx = tmp39;		HX_STACK_VAR(idx,"idx");
												HX_STACK_LINE(60)
												int tmp40 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp40,"tmp40");
												HX_STACK_LINE(60)
												tmp33 = (int(tmp40) & int((int)255));
											}
											HX_STACK_LINE(60)
											int r = tmp33;		HX_STACK_VAR(r,"r");
											HX_STACK_LINE(60)
											Dynamic tmp34;		HX_STACK_VAR(tmp34,"tmp34");
											HX_STACK_LINE(60)
											{
												HX_STACK_LINE(60)
												::lime::utils::ArrayBufferView tmp35 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp35,"tmp35");
												HX_STACK_LINE(60)
												::lime::utils::ArrayBufferView this1 = tmp35;		HX_STACK_VAR(this1,"this1");
												HX_STACK_LINE(60)
												int tmp36 = (int(pixel) >> int((int)16));		HX_STACK_VAR(tmp36,"tmp36");
												HX_STACK_LINE(60)
												int tmp37 = (int(tmp36) & int((int)255));		HX_STACK_VAR(tmp37,"tmp37");
												HX_STACK_LINE(60)
												Float tmp38 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;		HX_STACK_VAR(tmp38,"tmp38");
												HX_STACK_LINE(60)
												Float tmp39 = (tmp37 * tmp38);		HX_STACK_VAR(tmp39,"tmp39");
												HX_STACK_LINE(60)
												int tmp40 = ::Math_obj::round(tmp39);		HX_STACK_VAR(tmp40,"tmp40");
												HX_STACK_LINE(60)
												int idx = tmp40;		HX_STACK_VAR(idx,"idx");
												HX_STACK_LINE(60)
												int tmp41 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp41,"tmp41");
												HX_STACK_LINE(60)
												tmp34 = (int(tmp41) & int((int)255));
											}
											HX_STACK_LINE(60)
											int g = tmp34;		HX_STACK_VAR(g,"g");
											HX_STACK_LINE(60)
											Dynamic tmp35;		HX_STACK_VAR(tmp35,"tmp35");
											HX_STACK_LINE(60)
											{
												HX_STACK_LINE(60)
												::lime::utils::ArrayBufferView tmp36 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp36,"tmp36");
												HX_STACK_LINE(60)
												::lime::utils::ArrayBufferView this1 = tmp36;		HX_STACK_VAR(this1,"this1");
												HX_STACK_LINE(60)
												int tmp37 = (int(pixel) >> int((int)8));		HX_STACK_VAR(tmp37,"tmp37");
												HX_STACK_LINE(60)
												int tmp38 = (int(tmp37) & int((int)255));		HX_STACK_VAR(tmp38,"tmp38");
												HX_STACK_LINE(60)
												Float tmp39 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;		HX_STACK_VAR(tmp39,"tmp39");
												HX_STACK_LINE(60)
												Float tmp40 = (tmp38 * tmp39);		HX_STACK_VAR(tmp40,"tmp40");
												HX_STACK_LINE(60)
												int tmp41 = ::Math_obj::round(tmp40);		HX_STACK_VAR(tmp41,"tmp41");
												HX_STACK_LINE(60)
												int idx = tmp41;		HX_STACK_VAR(idx,"idx");
												HX_STACK_LINE(60)
												int tmp42 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp42,"tmp42");
												HX_STACK_LINE(60)
												tmp35 = (int(tmp42) & int((int)255));
											}
											HX_STACK_LINE(60)
											int b = tmp35;		HX_STACK_VAR(b,"b");
											HX_STACK_LINE(60)
											int tmp36 = (int(r) & int((int)255));		HX_STACK_VAR(tmp36,"tmp36");
											HX_STACK_LINE(60)
											int tmp37 = (int(tmp36) << int((int)24));		HX_STACK_VAR(tmp37,"tmp37");
											HX_STACK_LINE(60)
											int tmp38 = (int(g) & int((int)255));		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(60)
											int tmp39 = (int(tmp38) << int((int)16));		HX_STACK_VAR(tmp39,"tmp39");
											HX_STACK_LINE(60)
											int tmp40 = (int(tmp37) | int(tmp39));		HX_STACK_VAR(tmp40,"tmp40");
											HX_STACK_LINE(60)
											int tmp41 = (int(b) & int((int)255));		HX_STACK_VAR(tmp41,"tmp41");
											HX_STACK_LINE(60)
											int tmp42 = (int(tmp41) << int((int)8));		HX_STACK_VAR(tmp42,"tmp42");
											HX_STACK_LINE(60)
											int tmp43 = (int(tmp40) | int(tmp42));		HX_STACK_VAR(tmp43,"tmp43");
											HX_STACK_LINE(60)
											int tmp44 = (int(pixel) & int((int)255));		HX_STACK_VAR(tmp44,"tmp44");
											HX_STACK_LINE(60)
											int tmp45 = (int(tmp44) & int((int)255));		HX_STACK_VAR(tmp45,"tmp45");
											HX_STACK_LINE(60)
											int tmp46 = (int(tmp43) | int(tmp45));		HX_STACK_VAR(tmp46,"tmp46");
											HX_STACK_LINE(60)
											pixel = tmp46;
										}
									}
								}
							}
							HX_STACK_LINE(61)
							{
								HX_STACK_LINE(61)
								int tmp26 = ::__hxcpp_memory_get_byte(redTable->buffer->b,(redTable->byteOffset + ((int((int(pixel) >> int((int)24))) & int((int)255)))));		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(61)
								Dynamic tmp27 = (int(tmp26) & int((int)255));		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(61)
								int r = tmp27;		HX_STACK_VAR(r,"r");
								HX_STACK_LINE(61)
								int tmp28 = ::__hxcpp_memory_get_byte(greenTable->buffer->b,(greenTable->byteOffset + ((int((int(pixel) >> int((int)16))) & int((int)255)))));		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(61)
								Dynamic tmp29 = (int(tmp28) & int((int)255));		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(61)
								int g = tmp29;		HX_STACK_VAR(g,"g");
								HX_STACK_LINE(61)
								int tmp30 = ::__hxcpp_memory_get_byte(blueTable->buffer->b,(blueTable->byteOffset + ((int((int(pixel) >> int((int)8))) & int((int)255)))));		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(61)
								Dynamic tmp31 = (int(tmp30) & int((int)255));		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(61)
								int b = tmp31;		HX_STACK_VAR(b,"b");
								HX_STACK_LINE(61)
								int tmp32 = ::__hxcpp_memory_get_byte(alphaTable->buffer->b,(alphaTable->byteOffset + ((int(pixel) & int((int)255)))));		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(61)
								Dynamic tmp33 = (int(tmp32) & int((int)255));		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(61)
								int a = tmp33;		HX_STACK_VAR(a,"a");
								HX_STACK_LINE(61)
								int tmp34 = (int(r) & int((int)255));		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(61)
								int tmp35 = (int(tmp34) << int((int)24));		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(61)
								int tmp36 = (int(g) & int((int)255));		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(61)
								int tmp37 = (int(tmp36) << int((int)16));		HX_STACK_VAR(tmp37,"tmp37");
								HX_STACK_LINE(61)
								int tmp38 = (int(tmp35) | int(tmp37));		HX_STACK_VAR(tmp38,"tmp38");
								HX_STACK_LINE(61)
								int tmp39 = (int(b) & int((int)255));		HX_STACK_VAR(tmp39,"tmp39");
								HX_STACK_LINE(61)
								int tmp40 = (int(tmp39) << int((int)8));		HX_STACK_VAR(tmp40,"tmp40");
								HX_STACK_LINE(61)
								int tmp41 = (int(tmp38) | int(tmp40));		HX_STACK_VAR(tmp41,"tmp41");
								HX_STACK_LINE(61)
								int tmp42 = (int(a) & int((int)255));		HX_STACK_VAR(tmp42,"tmp42");
								HX_STACK_LINE(61)
								int tmp43 = (int(tmp41) | int(tmp42));		HX_STACK_VAR(tmp43,"tmp43");
								HX_STACK_LINE(61)
								pixel = tmp43;
							}
							HX_STACK_LINE(62)
							{
								HX_STACK_LINE(62)
								bool tmp26 = premultiplied;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(62)
								if ((tmp26)){
									HX_STACK_LINE(62)
									int tmp27 = (int(pixel) & int((int)255));		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(62)
									bool tmp28 = (tmp27 == (int)0);		HX_STACK_VAR(tmp28,"tmp28");
									HX_STACK_LINE(62)
									if ((tmp28)){
										HX_STACK_LINE(62)
										bool tmp29 = (pixel != (int)0);		HX_STACK_VAR(tmp29,"tmp29");
										HX_STACK_LINE(62)
										if ((tmp29)){
											HX_STACK_LINE(62)
											pixel = (int)0;
										}
									}
									else{
										HX_STACK_LINE(62)
										int tmp29 = (int(pixel) & int((int)255));		HX_STACK_VAR(tmp29,"tmp29");
										HX_STACK_LINE(62)
										bool tmp30 = (tmp29 != (int)255);		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(62)
										if ((tmp30)){
											HX_STACK_LINE(62)
											Dynamic tmp31;		HX_STACK_VAR(tmp31,"tmp31");
											HX_STACK_LINE(62)
											{
												HX_STACK_LINE(62)
												::lime::utils::ArrayBufferView tmp32 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__alpha16;		HX_STACK_VAR(tmp32,"tmp32");
												HX_STACK_LINE(62)
												::lime::utils::ArrayBufferView this1 = tmp32;		HX_STACK_VAR(this1,"this1");
												HX_STACK_LINE(62)
												tmp31 = ::__hxcpp_memory_get_ui32(this1->buffer->b,(this1->byteOffset + (((int(pixel) & int((int)255))) * (int)4)));
											}
											HX_STACK_LINE(62)
											::lime::math::color::_RGBA::RGBA_Impl__obj::a16 = tmp31;
											HX_STACK_LINE(62)
											{
												HX_STACK_LINE(62)
												int tmp32 = (int(pixel) >> int((int)24));		HX_STACK_VAR(tmp32,"tmp32");
												HX_STACK_LINE(62)
												int tmp33 = (int(tmp32) & int((int)255));		HX_STACK_VAR(tmp33,"tmp33");
												HX_STACK_LINE(62)
												int tmp34 = ::lime::math::color::_RGBA::RGBA_Impl__obj::a16;		HX_STACK_VAR(tmp34,"tmp34");
												HX_STACK_LINE(62)
												int tmp35 = (tmp33 * tmp34);		HX_STACK_VAR(tmp35,"tmp35");
												HX_STACK_LINE(62)
												int tmp36 = (int(tmp35) >> int((int)16));		HX_STACK_VAR(tmp36,"tmp36");
												HX_STACK_LINE(62)
												int tmp37 = (int(tmp36) & int((int)255));		HX_STACK_VAR(tmp37,"tmp37");
												HX_STACK_LINE(62)
												int tmp38 = (int(tmp37) << int((int)24));		HX_STACK_VAR(tmp38,"tmp38");
												HX_STACK_LINE(62)
												int tmp39 = (int(pixel) >> int((int)16));		HX_STACK_VAR(tmp39,"tmp39");
												HX_STACK_LINE(62)
												int tmp40 = (int(tmp39) & int((int)255));		HX_STACK_VAR(tmp40,"tmp40");
												HX_STACK_LINE(62)
												int tmp41 = ::lime::math::color::_RGBA::RGBA_Impl__obj::a16;		HX_STACK_VAR(tmp41,"tmp41");
												HX_STACK_LINE(62)
												int tmp42 = (tmp40 * tmp41);		HX_STACK_VAR(tmp42,"tmp42");
												HX_STACK_LINE(62)
												int tmp43 = (int(tmp42) >> int((int)16));		HX_STACK_VAR(tmp43,"tmp43");
												HX_STACK_LINE(62)
												int tmp44 = (int(tmp43) & int((int)255));		HX_STACK_VAR(tmp44,"tmp44");
												HX_STACK_LINE(62)
												int tmp45 = (int(tmp44) << int((int)16));		HX_STACK_VAR(tmp45,"tmp45");
												HX_STACK_LINE(62)
												int tmp46 = (int(tmp38) | int(tmp45));		HX_STACK_VAR(tmp46,"tmp46");
												HX_STACK_LINE(62)
												int tmp47 = (int(pixel) >> int((int)8));		HX_STACK_VAR(tmp47,"tmp47");
												HX_STACK_LINE(62)
												int tmp48 = (int(tmp47) & int((int)255));		HX_STACK_VAR(tmp48,"tmp48");
												HX_STACK_LINE(62)
												int tmp49 = ::lime::math::color::_RGBA::RGBA_Impl__obj::a16;		HX_STACK_VAR(tmp49,"tmp49");
												HX_STACK_LINE(62)
												int tmp50 = (tmp48 * tmp49);		HX_STACK_VAR(tmp50,"tmp50");
												HX_STACK_LINE(62)
												int tmp51 = (int(tmp50) >> int((int)16));		HX_STACK_VAR(tmp51,"tmp51");
												HX_STACK_LINE(62)
												int tmp52 = (int(tmp51) & int((int)255));		HX_STACK_VAR(tmp52,"tmp52");
												HX_STACK_LINE(62)
												int tmp53 = (int(tmp52) << int((int)8));		HX_STACK_VAR(tmp53,"tmp53");
												HX_STACK_LINE(62)
												int tmp54 = (int(tmp46) | int(tmp53));		HX_STACK_VAR(tmp54,"tmp54");
												HX_STACK_LINE(62)
												int tmp55 = (int(pixel) & int((int)255));		HX_STACK_VAR(tmp55,"tmp55");
												HX_STACK_LINE(62)
												int tmp56 = (int(tmp55) & int((int)255));		HX_STACK_VAR(tmp56,"tmp56");
												HX_STACK_LINE(62)
												int tmp57 = (int(tmp54) | int(tmp56));		HX_STACK_VAR(tmp57,"tmp57");
												HX_STACK_LINE(62)
												pixel = tmp57;
											}
										}
									}
								}
								HX_STACK_LINE(62)
								int tmp27 = format;		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(62)
								switch( (int)(tmp27)){
									case (int)2: {
										HX_STACK_LINE(62)
										{
											HX_STACK_LINE(62)
											int tmp28 = (int(pixel) >> int((int)8));		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(62)
											int tmp29 = (int(tmp28) & int((int)255));		HX_STACK_VAR(tmp29,"tmp29");
											HX_STACK_LINE(62)
											int val = tmp29;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(62)
											::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + offset),val);
											HX_STACK_LINE(62)
											val;
										}
										HX_STACK_LINE(62)
										{
											HX_STACK_LINE(62)
											int tmp28 = (int(pixel) >> int((int)16));		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(62)
											int tmp29 = (int(tmp28) & int((int)255));		HX_STACK_VAR(tmp29,"tmp29");
											HX_STACK_LINE(62)
											int val = tmp29;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(62)
											::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)1))),val);
											HX_STACK_LINE(62)
											val;
										}
										HX_STACK_LINE(62)
										{
											HX_STACK_LINE(62)
											int tmp28 = (int(pixel) >> int((int)24));		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(62)
											int tmp29 = (int(tmp28) & int((int)255));		HX_STACK_VAR(tmp29,"tmp29");
											HX_STACK_LINE(62)
											int val = tmp29;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(62)
											::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)2))),val);
											HX_STACK_LINE(62)
											val;
										}
										HX_STACK_LINE(62)
										{
											HX_STACK_LINE(62)
											int tmp28 = (int(pixel) & int((int)255));		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(62)
											int val = tmp28;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(62)
											::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)3))),val);
											HX_STACK_LINE(62)
											val;
										}
									}
									;break;
									case (int)0: {
										HX_STACK_LINE(62)
										{
											HX_STACK_LINE(62)
											int tmp28 = (int(pixel) >> int((int)24));		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(62)
											int tmp29 = (int(tmp28) & int((int)255));		HX_STACK_VAR(tmp29,"tmp29");
											HX_STACK_LINE(62)
											int val = tmp29;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(62)
											::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + offset),val);
											HX_STACK_LINE(62)
											val;
										}
										HX_STACK_LINE(62)
										{
											HX_STACK_LINE(62)
											int tmp28 = (int(pixel) >> int((int)16));		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(62)
											int tmp29 = (int(tmp28) & int((int)255));		HX_STACK_VAR(tmp29,"tmp29");
											HX_STACK_LINE(62)
											int val = tmp29;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(62)
											::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)1))),val);
											HX_STACK_LINE(62)
											val;
										}
										HX_STACK_LINE(62)
										{
											HX_STACK_LINE(62)
											int tmp28 = (int(pixel) >> int((int)8));		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(62)
											int tmp29 = (int(tmp28) & int((int)255));		HX_STACK_VAR(tmp29,"tmp29");
											HX_STACK_LINE(62)
											int val = tmp29;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(62)
											::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)2))),val);
											HX_STACK_LINE(62)
											val;
										}
										HX_STACK_LINE(62)
										{
											HX_STACK_LINE(62)
											int tmp28 = (int(pixel) & int((int)255));		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(62)
											int val = tmp28;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(62)
											::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)3))),val);
											HX_STACK_LINE(62)
											val;
										}
									}
									;break;
									case (int)1: {
										HX_STACK_LINE(62)
										{
											HX_STACK_LINE(62)
											int tmp28 = (int(pixel) & int((int)255));		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(62)
											int val = tmp28;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(62)
											::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + offset),val);
											HX_STACK_LINE(62)
											val;
										}
										HX_STACK_LINE(62)
										{
											HX_STACK_LINE(62)
											int tmp28 = (int(pixel) >> int((int)24));		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(62)
											int tmp29 = (int(tmp28) & int((int)255));		HX_STACK_VAR(tmp29,"tmp29");
											HX_STACK_LINE(62)
											int val = tmp29;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(62)
											::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)1))),val);
											HX_STACK_LINE(62)
											val;
										}
										HX_STACK_LINE(62)
										{
											HX_STACK_LINE(62)
											int tmp28 = (int(pixel) >> int((int)16));		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(62)
											int tmp29 = (int(tmp28) & int((int)255));		HX_STACK_VAR(tmp29,"tmp29");
											HX_STACK_LINE(62)
											int val = tmp29;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(62)
											::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)2))),val);
											HX_STACK_LINE(62)
											val;
										}
										HX_STACK_LINE(62)
										{
											HX_STACK_LINE(62)
											int tmp28 = (int(pixel) >> int((int)8));		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(62)
											int tmp29 = (int(tmp28) & int((int)255));		HX_STACK_VAR(tmp29,"tmp29");
											HX_STACK_LINE(62)
											int val = tmp29;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(62)
											::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)3))),val);
											HX_STACK_LINE(62)
											val;
										}
									}
									;break;
								}
							}
						}
					}
				}
			}
		}
		HX_STACK_LINE(70)
		image->dirty = true;
		HX_STACK_LINE(71)
		(image->version)++;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(ImageDataUtil_obj,colorTransform,(void))

Void ImageDataUtil_obj::copyChannel( ::lime::graphics::Image image,::lime::graphics::Image sourceImage,::lime::math::Rectangle sourceRect,::lime::math::Vector2 destPoint,::lime::graphics::ImageChannel sourceChannel,::lime::graphics::ImageChannel destChannel){
{
		HX_STACK_FRAME("lime.graphics.utils.ImageDataUtil","copyChannel",0xa41162a0,"lime.graphics.utils.ImageDataUtil.copyChannel","lime/graphics/utils/ImageDataUtil.hx",76,0x494d921f)
		HX_STACK_ARG(image,"image")
		HX_STACK_ARG(sourceImage,"sourceImage")
		HX_STACK_ARG(sourceRect,"sourceRect")
		HX_STACK_ARG(destPoint,"destPoint")
		HX_STACK_ARG(sourceChannel,"sourceChannel")
		HX_STACK_ARG(destChannel,"destChannel")
		HX_STACK_LINE(78)
		int tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(78)
		switch( (int)(destChannel->__Index())){
			case (int)0: {
				HX_STACK_LINE(80)
				tmp = (int)0;
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(81)
				tmp = (int)1;
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(82)
				tmp = (int)2;
			}
			;break;
			case (int)3: {
				HX_STACK_LINE(83)
				tmp = (int)3;
			}
			;break;
		}
		HX_STACK_LINE(78)
		int destIdx = tmp;		HX_STACK_VAR(destIdx,"destIdx");
		HX_STACK_LINE(87)
		int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(87)
		switch( (int)(sourceChannel->__Index())){
			case (int)0: {
				HX_STACK_LINE(89)
				tmp1 = (int)0;
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(90)
				tmp1 = (int)1;
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(91)
				tmp1 = (int)2;
			}
			;break;
			case (int)3: {
				HX_STACK_LINE(92)
				tmp1 = (int)3;
			}
			;break;
		}
		HX_STACK_LINE(87)
		int srcIdx = tmp1;		HX_STACK_VAR(srcIdx,"srcIdx");
		HX_STACK_LINE(96)
		::lime::utils::ArrayBufferView tmp2 = sourceImage->buffer->data;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(96)
		::lime::utils::ArrayBufferView srcData = tmp2;		HX_STACK_VAR(srcData,"srcData");
		HX_STACK_LINE(97)
		::lime::utils::ArrayBufferView tmp3 = image->buffer->data;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(97)
		::lime::utils::ArrayBufferView destData = tmp3;		HX_STACK_VAR(destData,"destData");
		HX_STACK_LINE(99)
		bool tmp4 = (srcData == null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(99)
		bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(99)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(99)
		if ((tmp5)){
			HX_STACK_LINE(99)
			tmp6 = (destData == null());
		}
		else{
			HX_STACK_LINE(99)
			tmp6 = true;
		}
		HX_STACK_LINE(99)
		if ((tmp6)){
			HX_STACK_LINE(99)
			return null();
		}
		HX_STACK_LINE(102)
		bool tmp7 = ::lime::_system::CFFI_obj::enabled;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(102)
		if ((tmp7)){
			HX_STACK_LINE(102)
			::lime::graphics::utils::ImageDataUtil_obj::cffi_lime_image_data_util_copy_channel.call(hx::DynamicPtr(image),hx::DynamicPtr(sourceImage),hx::DynamicPtr(sourceRect),hx::DynamicPtr(destPoint),srcIdx,destIdx);
		}
		else{
			HX_STACK_LINE(106)
			::lime::graphics::utils::_ImageDataUtil::ImageDataView tmp8 = ::lime::graphics::utils::_ImageDataUtil::ImageDataView_obj::__new(sourceImage,sourceRect);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(106)
			::lime::graphics::utils::_ImageDataUtil::ImageDataView srcView = tmp8;		HX_STACK_VAR(srcView,"srcView");
			HX_STACK_LINE(107)
			::lime::graphics::Image tmp9 = image;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(107)
			::lime::math::Rectangle tmp10 = ::lime::math::Rectangle_obj::__new(destPoint->x,destPoint->y,srcView->width,srcView->height);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(107)
			::lime::graphics::utils::_ImageDataUtil::ImageDataView tmp11 = ::lime::graphics::utils::_ImageDataUtil::ImageDataView_obj::__new(tmp9,tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(107)
			::lime::graphics::utils::_ImageDataUtil::ImageDataView destView = tmp11;		HX_STACK_VAR(destView,"destView");
			HX_STACK_LINE(109)
			int tmp12 = sourceImage->buffer->format;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(109)
			int srcFormat = tmp12;		HX_STACK_VAR(srcFormat,"srcFormat");
			HX_STACK_LINE(110)
			int tmp13 = image->buffer->format;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(110)
			int destFormat = tmp13;		HX_STACK_VAR(destFormat,"destFormat");
			HX_STACK_LINE(111)
			bool tmp14 = sourceImage->buffer->premultiplied;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(111)
			bool srcPremultiplied = tmp14;		HX_STACK_VAR(srcPremultiplied,"srcPremultiplied");
			HX_STACK_LINE(112)
			bool tmp15 = image->buffer->premultiplied;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(112)
			bool destPremultiplied = tmp15;		HX_STACK_VAR(destPremultiplied,"destPremultiplied");
			HX_STACK_LINE(114)
			int srcPosition;		HX_STACK_VAR(srcPosition,"srcPosition");
			HX_STACK_LINE(114)
			int destPosition;		HX_STACK_VAR(destPosition,"destPosition");
			HX_STACK_LINE(114)
			int srcPixel;		HX_STACK_VAR(srcPixel,"srcPixel");
			HX_STACK_LINE(114)
			int destPixel;		HX_STACK_VAR(destPixel,"destPixel");
			HX_STACK_LINE(114)
			int value = (int)0;		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(116)
			{
				HX_STACK_LINE(116)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(116)
				int _g = destView->height;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(116)
				while((true)){
					HX_STACK_LINE(116)
					bool tmp16 = (_g1 < _g);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(116)
					bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(116)
					if ((tmp17)){
						HX_STACK_LINE(116)
						break;
					}
					HX_STACK_LINE(116)
					int tmp18 = (_g1)++;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(116)
					int y = tmp18;		HX_STACK_VAR(y,"y");
					HX_STACK_LINE(118)
					int tmp19 = srcView->offset;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(118)
					int tmp20 = (srcView->stride * y);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(118)
					int tmp21 = (tmp19 + tmp20);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(118)
					srcPosition = tmp21;
					HX_STACK_LINE(119)
					int tmp22 = destView->offset;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(119)
					int tmp23 = (destView->stride * y);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(119)
					int tmp24 = (tmp22 + tmp23);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(119)
					destPosition = tmp24;
					HX_STACK_LINE(121)
					{
						HX_STACK_LINE(121)
						int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
						HX_STACK_LINE(121)
						int _g2 = destView->width;		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(121)
						while((true)){
							HX_STACK_LINE(121)
							bool tmp25 = (_g3 < _g2);		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(121)
							bool tmp26 = !(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(121)
							if ((tmp26)){
								HX_STACK_LINE(121)
								break;
							}
							HX_STACK_LINE(121)
							int tmp27 = (_g3)++;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(121)
							int x = tmp27;		HX_STACK_VAR(x,"x");
							HX_STACK_LINE(123)
							{
								HX_STACK_LINE(123)
								int tmp28 = srcFormat;		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(123)
								switch( (int)(tmp28)){
									case (int)2: {
										HX_STACK_LINE(123)
										int tmp29 = ::__hxcpp_memory_get_byte(srcData->buffer->b,(srcData->byteOffset + ((srcPosition + (int)2))));		HX_STACK_VAR(tmp29,"tmp29");
										HX_STACK_LINE(123)
										Dynamic tmp30 = (int(tmp29) & int((int)255));		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(123)
										int r = tmp30;		HX_STACK_VAR(r,"r");
										HX_STACK_LINE(123)
										int tmp31 = ::__hxcpp_memory_get_byte(srcData->buffer->b,(srcData->byteOffset + ((srcPosition + (int)1))));		HX_STACK_VAR(tmp31,"tmp31");
										HX_STACK_LINE(123)
										Dynamic tmp32 = (int(tmp31) & int((int)255));		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(123)
										int g = tmp32;		HX_STACK_VAR(g,"g");
										HX_STACK_LINE(123)
										int tmp33 = ::__hxcpp_memory_get_byte(srcData->buffer->b,(srcData->byteOffset + srcPosition));		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(123)
										Dynamic tmp34 = (int(tmp33) & int((int)255));		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(123)
										int b = tmp34;		HX_STACK_VAR(b,"b");
										HX_STACK_LINE(123)
										int tmp35 = ::__hxcpp_memory_get_byte(srcData->buffer->b,(srcData->byteOffset + ((srcPosition + (int)3))));		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(123)
										Dynamic tmp36 = (int(tmp35) & int((int)255));		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(123)
										int a = tmp36;		HX_STACK_VAR(a,"a");
										HX_STACK_LINE(123)
										int tmp37 = (int(r) & int((int)255));		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(123)
										int tmp38 = (int(tmp37) << int((int)24));		HX_STACK_VAR(tmp38,"tmp38");
										HX_STACK_LINE(123)
										int tmp39 = (int(g) & int((int)255));		HX_STACK_VAR(tmp39,"tmp39");
										HX_STACK_LINE(123)
										int tmp40 = (int(tmp39) << int((int)16));		HX_STACK_VAR(tmp40,"tmp40");
										HX_STACK_LINE(123)
										int tmp41 = (int(tmp38) | int(tmp40));		HX_STACK_VAR(tmp41,"tmp41");
										HX_STACK_LINE(123)
										int tmp42 = (int(b) & int((int)255));		HX_STACK_VAR(tmp42,"tmp42");
										HX_STACK_LINE(123)
										int tmp43 = (int(tmp42) << int((int)8));		HX_STACK_VAR(tmp43,"tmp43");
										HX_STACK_LINE(123)
										int tmp44 = (int(tmp41) | int(tmp43));		HX_STACK_VAR(tmp44,"tmp44");
										HX_STACK_LINE(123)
										int tmp45 = (int(a) & int((int)255));		HX_STACK_VAR(tmp45,"tmp45");
										HX_STACK_LINE(123)
										int tmp46 = (int(tmp44) | int(tmp45));		HX_STACK_VAR(tmp46,"tmp46");
										HX_STACK_LINE(123)
										srcPixel = tmp46;
									}
									;break;
									case (int)0: {
										HX_STACK_LINE(123)
										int tmp29 = ::__hxcpp_memory_get_byte(srcData->buffer->b,(srcData->byteOffset + srcPosition));		HX_STACK_VAR(tmp29,"tmp29");
										HX_STACK_LINE(123)
										Dynamic tmp30 = (int(tmp29) & int((int)255));		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(123)
										int r = tmp30;		HX_STACK_VAR(r,"r");
										HX_STACK_LINE(123)
										int tmp31 = ::__hxcpp_memory_get_byte(srcData->buffer->b,(srcData->byteOffset + ((srcPosition + (int)1))));		HX_STACK_VAR(tmp31,"tmp31");
										HX_STACK_LINE(123)
										Dynamic tmp32 = (int(tmp31) & int((int)255));		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(123)
										int g = tmp32;		HX_STACK_VAR(g,"g");
										HX_STACK_LINE(123)
										int tmp33 = ::__hxcpp_memory_get_byte(srcData->buffer->b,(srcData->byteOffset + ((srcPosition + (int)2))));		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(123)
										Dynamic tmp34 = (int(tmp33) & int((int)255));		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(123)
										int b = tmp34;		HX_STACK_VAR(b,"b");
										HX_STACK_LINE(123)
										int tmp35 = ::__hxcpp_memory_get_byte(srcData->buffer->b,(srcData->byteOffset + ((srcPosition + (int)3))));		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(123)
										Dynamic tmp36 = (int(tmp35) & int((int)255));		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(123)
										int a = tmp36;		HX_STACK_VAR(a,"a");
										HX_STACK_LINE(123)
										int tmp37 = (int(r) & int((int)255));		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(123)
										int tmp38 = (int(tmp37) << int((int)24));		HX_STACK_VAR(tmp38,"tmp38");
										HX_STACK_LINE(123)
										int tmp39 = (int(g) & int((int)255));		HX_STACK_VAR(tmp39,"tmp39");
										HX_STACK_LINE(123)
										int tmp40 = (int(tmp39) << int((int)16));		HX_STACK_VAR(tmp40,"tmp40");
										HX_STACK_LINE(123)
										int tmp41 = (int(tmp38) | int(tmp40));		HX_STACK_VAR(tmp41,"tmp41");
										HX_STACK_LINE(123)
										int tmp42 = (int(b) & int((int)255));		HX_STACK_VAR(tmp42,"tmp42");
										HX_STACK_LINE(123)
										int tmp43 = (int(tmp42) << int((int)8));		HX_STACK_VAR(tmp43,"tmp43");
										HX_STACK_LINE(123)
										int tmp44 = (int(tmp41) | int(tmp43));		HX_STACK_VAR(tmp44,"tmp44");
										HX_STACK_LINE(123)
										int tmp45 = (int(a) & int((int)255));		HX_STACK_VAR(tmp45,"tmp45");
										HX_STACK_LINE(123)
										int tmp46 = (int(tmp44) | int(tmp45));		HX_STACK_VAR(tmp46,"tmp46");
										HX_STACK_LINE(123)
										srcPixel = tmp46;
									}
									;break;
									case (int)1: {
										HX_STACK_LINE(123)
										int tmp29 = ::__hxcpp_memory_get_byte(srcData->buffer->b,(srcData->byteOffset + ((srcPosition + (int)1))));		HX_STACK_VAR(tmp29,"tmp29");
										HX_STACK_LINE(123)
										Dynamic tmp30 = (int(tmp29) & int((int)255));		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(123)
										int r = tmp30;		HX_STACK_VAR(r,"r");
										HX_STACK_LINE(123)
										int tmp31 = ::__hxcpp_memory_get_byte(srcData->buffer->b,(srcData->byteOffset + ((srcPosition + (int)2))));		HX_STACK_VAR(tmp31,"tmp31");
										HX_STACK_LINE(123)
										Dynamic tmp32 = (int(tmp31) & int((int)255));		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(123)
										int g = tmp32;		HX_STACK_VAR(g,"g");
										HX_STACK_LINE(123)
										int tmp33 = ::__hxcpp_memory_get_byte(srcData->buffer->b,(srcData->byteOffset + ((srcPosition + (int)3))));		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(123)
										Dynamic tmp34 = (int(tmp33) & int((int)255));		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(123)
										int b = tmp34;		HX_STACK_VAR(b,"b");
										HX_STACK_LINE(123)
										int tmp35 = ::__hxcpp_memory_get_byte(srcData->buffer->b,(srcData->byteOffset + srcPosition));		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(123)
										Dynamic tmp36 = (int(tmp35) & int((int)255));		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(123)
										int a = tmp36;		HX_STACK_VAR(a,"a");
										HX_STACK_LINE(123)
										int tmp37 = (int(r) & int((int)255));		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(123)
										int tmp38 = (int(tmp37) << int((int)24));		HX_STACK_VAR(tmp38,"tmp38");
										HX_STACK_LINE(123)
										int tmp39 = (int(g) & int((int)255));		HX_STACK_VAR(tmp39,"tmp39");
										HX_STACK_LINE(123)
										int tmp40 = (int(tmp39) << int((int)16));		HX_STACK_VAR(tmp40,"tmp40");
										HX_STACK_LINE(123)
										int tmp41 = (int(tmp38) | int(tmp40));		HX_STACK_VAR(tmp41,"tmp41");
										HX_STACK_LINE(123)
										int tmp42 = (int(b) & int((int)255));		HX_STACK_VAR(tmp42,"tmp42");
										HX_STACK_LINE(123)
										int tmp43 = (int(tmp42) << int((int)8));		HX_STACK_VAR(tmp43,"tmp43");
										HX_STACK_LINE(123)
										int tmp44 = (int(tmp41) | int(tmp43));		HX_STACK_VAR(tmp44,"tmp44");
										HX_STACK_LINE(123)
										int tmp45 = (int(a) & int((int)255));		HX_STACK_VAR(tmp45,"tmp45");
										HX_STACK_LINE(123)
										int tmp46 = (int(tmp44) | int(tmp45));		HX_STACK_VAR(tmp46,"tmp46");
										HX_STACK_LINE(123)
										srcPixel = tmp46;
									}
									;break;
								}
								HX_STACK_LINE(123)
								bool tmp29 = srcPremultiplied;		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(123)
								if ((tmp29)){
									HX_STACK_LINE(123)
									int tmp30 = (int(srcPixel) & int((int)255));		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(123)
									bool tmp31 = (tmp30 != (int)0);		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(123)
									bool tmp32;		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(123)
									if ((tmp31)){
										HX_STACK_LINE(123)
										int tmp33 = (int(srcPixel) & int((int)255));		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(123)
										int tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(123)
										tmp32 = (tmp34 != (int)255);
									}
									else{
										HX_STACK_LINE(123)
										tmp32 = false;
									}
									HX_STACK_LINE(123)
									if ((tmp32)){
										HX_STACK_LINE(123)
										int tmp33 = (int(srcPixel) & int((int)255));		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(123)
										Float tmp34 = (Float(((Float)255.0)) / Float(tmp33));		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(123)
										::lime::math::color::_RGBA::RGBA_Impl__obj::unmult = tmp34;
										HX_STACK_LINE(123)
										{
											HX_STACK_LINE(123)
											Dynamic tmp35;		HX_STACK_VAR(tmp35,"tmp35");
											HX_STACK_LINE(123)
											{
												HX_STACK_LINE(123)
												::lime::utils::ArrayBufferView tmp36 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp36,"tmp36");
												HX_STACK_LINE(123)
												::lime::utils::ArrayBufferView this1 = tmp36;		HX_STACK_VAR(this1,"this1");
												HX_STACK_LINE(123)
												int tmp37 = (int(srcPixel) >> int((int)24));		HX_STACK_VAR(tmp37,"tmp37");
												HX_STACK_LINE(123)
												int tmp38 = (int(tmp37) & int((int)255));		HX_STACK_VAR(tmp38,"tmp38");
												HX_STACK_LINE(123)
												Float tmp39 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;		HX_STACK_VAR(tmp39,"tmp39");
												HX_STACK_LINE(123)
												Float tmp40 = (tmp38 * tmp39);		HX_STACK_VAR(tmp40,"tmp40");
												HX_STACK_LINE(123)
												int tmp41 = ::Math_obj::round(tmp40);		HX_STACK_VAR(tmp41,"tmp41");
												HX_STACK_LINE(123)
												int idx = tmp41;		HX_STACK_VAR(idx,"idx");
												HX_STACK_LINE(123)
												int tmp42 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp42,"tmp42");
												HX_STACK_LINE(123)
												tmp35 = (int(tmp42) & int((int)255));
											}
											HX_STACK_LINE(123)
											int r = tmp35;		HX_STACK_VAR(r,"r");
											HX_STACK_LINE(123)
											Dynamic tmp36;		HX_STACK_VAR(tmp36,"tmp36");
											HX_STACK_LINE(123)
											{
												HX_STACK_LINE(123)
												::lime::utils::ArrayBufferView tmp37 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp37,"tmp37");
												HX_STACK_LINE(123)
												::lime::utils::ArrayBufferView this1 = tmp37;		HX_STACK_VAR(this1,"this1");
												HX_STACK_LINE(123)
												int tmp38 = (int(srcPixel) >> int((int)16));		HX_STACK_VAR(tmp38,"tmp38");
												HX_STACK_LINE(123)
												int tmp39 = (int(tmp38) & int((int)255));		HX_STACK_VAR(tmp39,"tmp39");
												HX_STACK_LINE(123)
												Float tmp40 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;		HX_STACK_VAR(tmp40,"tmp40");
												HX_STACK_LINE(123)
												Float tmp41 = (tmp39 * tmp40);		HX_STACK_VAR(tmp41,"tmp41");
												HX_STACK_LINE(123)
												int tmp42 = ::Math_obj::round(tmp41);		HX_STACK_VAR(tmp42,"tmp42");
												HX_STACK_LINE(123)
												int idx = tmp42;		HX_STACK_VAR(idx,"idx");
												HX_STACK_LINE(123)
												int tmp43 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp43,"tmp43");
												HX_STACK_LINE(123)
												tmp36 = (int(tmp43) & int((int)255));
											}
											HX_STACK_LINE(123)
											int g = tmp36;		HX_STACK_VAR(g,"g");
											HX_STACK_LINE(123)
											Dynamic tmp37;		HX_STACK_VAR(tmp37,"tmp37");
											HX_STACK_LINE(123)
											{
												HX_STACK_LINE(123)
												::lime::utils::ArrayBufferView tmp38 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp38,"tmp38");
												HX_STACK_LINE(123)
												::lime::utils::ArrayBufferView this1 = tmp38;		HX_STACK_VAR(this1,"this1");
												HX_STACK_LINE(123)
												int tmp39 = (int(srcPixel) >> int((int)8));		HX_STACK_VAR(tmp39,"tmp39");
												HX_STACK_LINE(123)
												int tmp40 = (int(tmp39) & int((int)255));		HX_STACK_VAR(tmp40,"tmp40");
												HX_STACK_LINE(123)
												Float tmp41 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;		HX_STACK_VAR(tmp41,"tmp41");
												HX_STACK_LINE(123)
												Float tmp42 = (tmp40 * tmp41);		HX_STACK_VAR(tmp42,"tmp42");
												HX_STACK_LINE(123)
												int tmp43 = ::Math_obj::round(tmp42);		HX_STACK_VAR(tmp43,"tmp43");
												HX_STACK_LINE(123)
												int idx = tmp43;		HX_STACK_VAR(idx,"idx");
												HX_STACK_LINE(123)
												int tmp44 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp44,"tmp44");
												HX_STACK_LINE(123)
												tmp37 = (int(tmp44) & int((int)255));
											}
											HX_STACK_LINE(123)
											int b = tmp37;		HX_STACK_VAR(b,"b");
											HX_STACK_LINE(123)
											int tmp38 = (int(r) & int((int)255));		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(123)
											int tmp39 = (int(tmp38) << int((int)24));		HX_STACK_VAR(tmp39,"tmp39");
											HX_STACK_LINE(123)
											int tmp40 = (int(g) & int((int)255));		HX_STACK_VAR(tmp40,"tmp40");
											HX_STACK_LINE(123)
											int tmp41 = (int(tmp40) << int((int)16));		HX_STACK_VAR(tmp41,"tmp41");
											HX_STACK_LINE(123)
											int tmp42 = (int(tmp39) | int(tmp41));		HX_STACK_VAR(tmp42,"tmp42");
											HX_STACK_LINE(123)
											int tmp43 = (int(b) & int((int)255));		HX_STACK_VAR(tmp43,"tmp43");
											HX_STACK_LINE(123)
											int tmp44 = (int(tmp43) << int((int)8));		HX_STACK_VAR(tmp44,"tmp44");
											HX_STACK_LINE(123)
											int tmp45 = (int(tmp42) | int(tmp44));		HX_STACK_VAR(tmp45,"tmp45");
											HX_STACK_LINE(123)
											int tmp46 = (int(srcPixel) & int((int)255));		HX_STACK_VAR(tmp46,"tmp46");
											HX_STACK_LINE(123)
											int tmp47 = (int(tmp46) & int((int)255));		HX_STACK_VAR(tmp47,"tmp47");
											HX_STACK_LINE(123)
											int tmp48 = (int(tmp45) | int(tmp47));		HX_STACK_VAR(tmp48,"tmp48");
											HX_STACK_LINE(123)
											srcPixel = tmp48;
										}
									}
								}
							}
							HX_STACK_LINE(124)
							{
								HX_STACK_LINE(124)
								int tmp28 = destFormat;		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(124)
								switch( (int)(tmp28)){
									case (int)2: {
										HX_STACK_LINE(124)
										int tmp29 = ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)2))));		HX_STACK_VAR(tmp29,"tmp29");
										HX_STACK_LINE(124)
										Dynamic tmp30 = (int(tmp29) & int((int)255));		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(124)
										int r = tmp30;		HX_STACK_VAR(r,"r");
										HX_STACK_LINE(124)
										int tmp31 = ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)1))));		HX_STACK_VAR(tmp31,"tmp31");
										HX_STACK_LINE(124)
										Dynamic tmp32 = (int(tmp31) & int((int)255));		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(124)
										int g = tmp32;		HX_STACK_VAR(g,"g");
										HX_STACK_LINE(124)
										int tmp33 = ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + destPosition));		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(124)
										Dynamic tmp34 = (int(tmp33) & int((int)255));		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(124)
										int b = tmp34;		HX_STACK_VAR(b,"b");
										HX_STACK_LINE(124)
										int tmp35 = ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)3))));		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(124)
										Dynamic tmp36 = (int(tmp35) & int((int)255));		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(124)
										int a = tmp36;		HX_STACK_VAR(a,"a");
										HX_STACK_LINE(124)
										int tmp37 = (int(r) & int((int)255));		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(124)
										int tmp38 = (int(tmp37) << int((int)24));		HX_STACK_VAR(tmp38,"tmp38");
										HX_STACK_LINE(124)
										int tmp39 = (int(g) & int((int)255));		HX_STACK_VAR(tmp39,"tmp39");
										HX_STACK_LINE(124)
										int tmp40 = (int(tmp39) << int((int)16));		HX_STACK_VAR(tmp40,"tmp40");
										HX_STACK_LINE(124)
										int tmp41 = (int(tmp38) | int(tmp40));		HX_STACK_VAR(tmp41,"tmp41");
										HX_STACK_LINE(124)
										int tmp42 = (int(b) & int((int)255));		HX_STACK_VAR(tmp42,"tmp42");
										HX_STACK_LINE(124)
										int tmp43 = (int(tmp42) << int((int)8));		HX_STACK_VAR(tmp43,"tmp43");
										HX_STACK_LINE(124)
										int tmp44 = (int(tmp41) | int(tmp43));		HX_STACK_VAR(tmp44,"tmp44");
										HX_STACK_LINE(124)
										int tmp45 = (int(a) & int((int)255));		HX_STACK_VAR(tmp45,"tmp45");
										HX_STACK_LINE(124)
										int tmp46 = (int(tmp44) | int(tmp45));		HX_STACK_VAR(tmp46,"tmp46");
										HX_STACK_LINE(124)
										destPixel = tmp46;
									}
									;break;
									case (int)0: {
										HX_STACK_LINE(124)
										int tmp29 = ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + destPosition));		HX_STACK_VAR(tmp29,"tmp29");
										HX_STACK_LINE(124)
										Dynamic tmp30 = (int(tmp29) & int((int)255));		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(124)
										int r = tmp30;		HX_STACK_VAR(r,"r");
										HX_STACK_LINE(124)
										int tmp31 = ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)1))));		HX_STACK_VAR(tmp31,"tmp31");
										HX_STACK_LINE(124)
										Dynamic tmp32 = (int(tmp31) & int((int)255));		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(124)
										int g = tmp32;		HX_STACK_VAR(g,"g");
										HX_STACK_LINE(124)
										int tmp33 = ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)2))));		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(124)
										Dynamic tmp34 = (int(tmp33) & int((int)255));		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(124)
										int b = tmp34;		HX_STACK_VAR(b,"b");
										HX_STACK_LINE(124)
										int tmp35 = ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)3))));		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(124)
										Dynamic tmp36 = (int(tmp35) & int((int)255));		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(124)
										int a = tmp36;		HX_STACK_VAR(a,"a");
										HX_STACK_LINE(124)
										int tmp37 = (int(r) & int((int)255));		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(124)
										int tmp38 = (int(tmp37) << int((int)24));		HX_STACK_VAR(tmp38,"tmp38");
										HX_STACK_LINE(124)
										int tmp39 = (int(g) & int((int)255));		HX_STACK_VAR(tmp39,"tmp39");
										HX_STACK_LINE(124)
										int tmp40 = (int(tmp39) << int((int)16));		HX_STACK_VAR(tmp40,"tmp40");
										HX_STACK_LINE(124)
										int tmp41 = (int(tmp38) | int(tmp40));		HX_STACK_VAR(tmp41,"tmp41");
										HX_STACK_LINE(124)
										int tmp42 = (int(b) & int((int)255));		HX_STACK_VAR(tmp42,"tmp42");
										HX_STACK_LINE(124)
										int tmp43 = (int(tmp42) << int((int)8));		HX_STACK_VAR(tmp43,"tmp43");
										HX_STACK_LINE(124)
										int tmp44 = (int(tmp41) | int(tmp43));		HX_STACK_VAR(tmp44,"tmp44");
										HX_STACK_LINE(124)
										int tmp45 = (int(a) & int((int)255));		HX_STACK_VAR(tmp45,"tmp45");
										HX_STACK_LINE(124)
										int tmp46 = (int(tmp44) | int(tmp45));		HX_STACK_VAR(tmp46,"tmp46");
										HX_STACK_LINE(124)
										destPixel = tmp46;
									}
									;break;
									case (int)1: {
										HX_STACK_LINE(124)
										int tmp29 = ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)1))));		HX_STACK_VAR(tmp29,"tmp29");
										HX_STACK_LINE(124)
										Dynamic tmp30 = (int(tmp29) & int((int)255));		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(124)
										int r = tmp30;		HX_STACK_VAR(r,"r");
										HX_STACK_LINE(124)
										int tmp31 = ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)2))));		HX_STACK_VAR(tmp31,"tmp31");
										HX_STACK_LINE(124)
										Dynamic tmp32 = (int(tmp31) & int((int)255));		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(124)
										int g = tmp32;		HX_STACK_VAR(g,"g");
										HX_STACK_LINE(124)
										int tmp33 = ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)3))));		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(124)
										Dynamic tmp34 = (int(tmp33) & int((int)255));		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(124)
										int b = tmp34;		HX_STACK_VAR(b,"b");
										HX_STACK_LINE(124)
										int tmp35 = ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + destPosition));		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(124)
										Dynamic tmp36 = (int(tmp35) & int((int)255));		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(124)
										int a = tmp36;		HX_STACK_VAR(a,"a");
										HX_STACK_LINE(124)
										int tmp37 = (int(r) & int((int)255));		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(124)
										int tmp38 = (int(tmp37) << int((int)24));		HX_STACK_VAR(tmp38,"tmp38");
										HX_STACK_LINE(124)
										int tmp39 = (int(g) & int((int)255));		HX_STACK_VAR(tmp39,"tmp39");
										HX_STACK_LINE(124)
										int tmp40 = (int(tmp39) << int((int)16));		HX_STACK_VAR(tmp40,"tmp40");
										HX_STACK_LINE(124)
										int tmp41 = (int(tmp38) | int(tmp40));		HX_STACK_VAR(tmp41,"tmp41");
										HX_STACK_LINE(124)
										int tmp42 = (int(b) & int((int)255));		HX_STACK_VAR(tmp42,"tmp42");
										HX_STACK_LINE(124)
										int tmp43 = (int(tmp42) << int((int)8));		HX_STACK_VAR(tmp43,"tmp43");
										HX_STACK_LINE(124)
										int tmp44 = (int(tmp41) | int(tmp43));		HX_STACK_VAR(tmp44,"tmp44");
										HX_STACK_LINE(124)
										int tmp45 = (int(a) & int((int)255));		HX_STACK_VAR(tmp45,"tmp45");
										HX_STACK_LINE(124)
										int tmp46 = (int(tmp44) | int(tmp45));		HX_STACK_VAR(tmp46,"tmp46");
										HX_STACK_LINE(124)
										destPixel = tmp46;
									}
									;break;
								}
								HX_STACK_LINE(124)
								bool tmp29 = destPremultiplied;		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(124)
								if ((tmp29)){
									HX_STACK_LINE(124)
									int tmp30 = (int(destPixel) & int((int)255));		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(124)
									bool tmp31 = (tmp30 != (int)0);		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(124)
									bool tmp32;		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(124)
									if ((tmp31)){
										HX_STACK_LINE(124)
										int tmp33 = (int(destPixel) & int((int)255));		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(124)
										int tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(124)
										tmp32 = (tmp34 != (int)255);
									}
									else{
										HX_STACK_LINE(124)
										tmp32 = false;
									}
									HX_STACK_LINE(124)
									if ((tmp32)){
										HX_STACK_LINE(124)
										int tmp33 = (int(destPixel) & int((int)255));		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(124)
										Float tmp34 = (Float(((Float)255.0)) / Float(tmp33));		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(124)
										::lime::math::color::_RGBA::RGBA_Impl__obj::unmult = tmp34;
										HX_STACK_LINE(124)
										{
											HX_STACK_LINE(124)
											Dynamic tmp35;		HX_STACK_VAR(tmp35,"tmp35");
											HX_STACK_LINE(124)
											{
												HX_STACK_LINE(124)
												::lime::utils::ArrayBufferView tmp36 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp36,"tmp36");
												HX_STACK_LINE(124)
												::lime::utils::ArrayBufferView this1 = tmp36;		HX_STACK_VAR(this1,"this1");
												HX_STACK_LINE(124)
												int tmp37 = (int(destPixel) >> int((int)24));		HX_STACK_VAR(tmp37,"tmp37");
												HX_STACK_LINE(124)
												int tmp38 = (int(tmp37) & int((int)255));		HX_STACK_VAR(tmp38,"tmp38");
												HX_STACK_LINE(124)
												Float tmp39 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;		HX_STACK_VAR(tmp39,"tmp39");
												HX_STACK_LINE(124)
												Float tmp40 = (tmp38 * tmp39);		HX_STACK_VAR(tmp40,"tmp40");
												HX_STACK_LINE(124)
												int tmp41 = ::Math_obj::round(tmp40);		HX_STACK_VAR(tmp41,"tmp41");
												HX_STACK_LINE(124)
												int idx = tmp41;		HX_STACK_VAR(idx,"idx");
												HX_STACK_LINE(124)
												int tmp42 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp42,"tmp42");
												HX_STACK_LINE(124)
												tmp35 = (int(tmp42) & int((int)255));
											}
											HX_STACK_LINE(124)
											int r = tmp35;		HX_STACK_VAR(r,"r");
											HX_STACK_LINE(124)
											Dynamic tmp36;		HX_STACK_VAR(tmp36,"tmp36");
											HX_STACK_LINE(124)
											{
												HX_STACK_LINE(124)
												::lime::utils::ArrayBufferView tmp37 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp37,"tmp37");
												HX_STACK_LINE(124)
												::lime::utils::ArrayBufferView this1 = tmp37;		HX_STACK_VAR(this1,"this1");
												HX_STACK_LINE(124)
												int tmp38 = (int(destPixel) >> int((int)16));		HX_STACK_VAR(tmp38,"tmp38");
												HX_STACK_LINE(124)
												int tmp39 = (int(tmp38) & int((int)255));		HX_STACK_VAR(tmp39,"tmp39");
												HX_STACK_LINE(124)
												Float tmp40 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;		HX_STACK_VAR(tmp40,"tmp40");
												HX_STACK_LINE(124)
												Float tmp41 = (tmp39 * tmp40);		HX_STACK_VAR(tmp41,"tmp41");
												HX_STACK_LINE(124)
												int tmp42 = ::Math_obj::round(tmp41);		HX_STACK_VAR(tmp42,"tmp42");
												HX_STACK_LINE(124)
												int idx = tmp42;		HX_STACK_VAR(idx,"idx");
												HX_STACK_LINE(124)
												int tmp43 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp43,"tmp43");
												HX_STACK_LINE(124)
												tmp36 = (int(tmp43) & int((int)255));
											}
											HX_STACK_LINE(124)
											int g = tmp36;		HX_STACK_VAR(g,"g");
											HX_STACK_LINE(124)
											Dynamic tmp37;		HX_STACK_VAR(tmp37,"tmp37");
											HX_STACK_LINE(124)
											{
												HX_STACK_LINE(124)
												::lime::utils::ArrayBufferView tmp38 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp38,"tmp38");
												HX_STACK_LINE(124)
												::lime::utils::ArrayBufferView this1 = tmp38;		HX_STACK_VAR(this1,"this1");
												HX_STACK_LINE(124)
												int tmp39 = (int(destPixel) >> int((int)8));		HX_STACK_VAR(tmp39,"tmp39");
												HX_STACK_LINE(124)
												int tmp40 = (int(tmp39) & int((int)255));		HX_STACK_VAR(tmp40,"tmp40");
												HX_STACK_LINE(124)
												Float tmp41 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;		HX_STACK_VAR(tmp41,"tmp41");
												HX_STACK_LINE(124)
												Float tmp42 = (tmp40 * tmp41);		HX_STACK_VAR(tmp42,"tmp42");
												HX_STACK_LINE(124)
												int tmp43 = ::Math_obj::round(tmp42);		HX_STACK_VAR(tmp43,"tmp43");
												HX_STACK_LINE(124)
												int idx = tmp43;		HX_STACK_VAR(idx,"idx");
												HX_STACK_LINE(124)
												int tmp44 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp44,"tmp44");
												HX_STACK_LINE(124)
												tmp37 = (int(tmp44) & int((int)255));
											}
											HX_STACK_LINE(124)
											int b = tmp37;		HX_STACK_VAR(b,"b");
											HX_STACK_LINE(124)
											int tmp38 = (int(r) & int((int)255));		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(124)
											int tmp39 = (int(tmp38) << int((int)24));		HX_STACK_VAR(tmp39,"tmp39");
											HX_STACK_LINE(124)
											int tmp40 = (int(g) & int((int)255));		HX_STACK_VAR(tmp40,"tmp40");
											HX_STACK_LINE(124)
											int tmp41 = (int(tmp40) << int((int)16));		HX_STACK_VAR(tmp41,"tmp41");
											HX_STACK_LINE(124)
											int tmp42 = (int(tmp39) | int(tmp41));		HX_STACK_VAR(tmp42,"tmp42");
											HX_STACK_LINE(124)
											int tmp43 = (int(b) & int((int)255));		HX_STACK_VAR(tmp43,"tmp43");
											HX_STACK_LINE(124)
											int tmp44 = (int(tmp43) << int((int)8));		HX_STACK_VAR(tmp44,"tmp44");
											HX_STACK_LINE(124)
											int tmp45 = (int(tmp42) | int(tmp44));		HX_STACK_VAR(tmp45,"tmp45");
											HX_STACK_LINE(124)
											int tmp46 = (int(destPixel) & int((int)255));		HX_STACK_VAR(tmp46,"tmp46");
											HX_STACK_LINE(124)
											int tmp47 = (int(tmp46) & int((int)255));		HX_STACK_VAR(tmp47,"tmp47");
											HX_STACK_LINE(124)
											int tmp48 = (int(tmp45) | int(tmp47));		HX_STACK_VAR(tmp48,"tmp48");
											HX_STACK_LINE(124)
											destPixel = tmp48;
										}
									}
								}
							}
							HX_STACK_LINE(126)
							int tmp28 = srcIdx;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(126)
							switch( (int)(tmp28)){
								case (int)0: {
									HX_STACK_LINE(128)
									int tmp29 = (int(srcPixel) >> int((int)24));		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(128)
									int tmp30 = (int(tmp29) & int((int)255));		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(128)
									value = tmp30;
								}
								;break;
								case (int)1: {
									HX_STACK_LINE(129)
									int tmp29 = (int(srcPixel) >> int((int)16));		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(129)
									int tmp30 = (int(tmp29) & int((int)255));		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(129)
									value = tmp30;
								}
								;break;
								case (int)2: {
									HX_STACK_LINE(130)
									int tmp29 = (int(srcPixel) >> int((int)8));		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(130)
									int tmp30 = (int(tmp29) & int((int)255));		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(130)
									value = tmp30;
								}
								;break;
								case (int)3: {
									HX_STACK_LINE(131)
									int tmp29 = (int(srcPixel) & int((int)255));		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(131)
									value = tmp29;
								}
								;break;
							}
							HX_STACK_LINE(135)
							int tmp29 = destIdx;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(135)
							switch( (int)(tmp29)){
								case (int)0: {
									HX_STACK_LINE(137)
									{
										HX_STACK_LINE(137)
										int tmp30 = (int(value) & int((int)255));		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(137)
										int tmp31 = (int(tmp30) << int((int)24));		HX_STACK_VAR(tmp31,"tmp31");
										HX_STACK_LINE(137)
										int tmp32 = (int(destPixel) >> int((int)16));		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(137)
										int tmp33 = (int(tmp32) & int((int)255));		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(137)
										int tmp34 = (int(tmp33) & int((int)255));		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(137)
										int tmp35 = (int(tmp34) << int((int)16));		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(137)
										int tmp36 = (int(tmp31) | int(tmp35));		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(137)
										int tmp37 = (int(destPixel) >> int((int)8));		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(137)
										int tmp38 = (int(tmp37) & int((int)255));		HX_STACK_VAR(tmp38,"tmp38");
										HX_STACK_LINE(137)
										int tmp39 = (int(tmp38) & int((int)255));		HX_STACK_VAR(tmp39,"tmp39");
										HX_STACK_LINE(137)
										int tmp40 = (int(tmp39) << int((int)8));		HX_STACK_VAR(tmp40,"tmp40");
										HX_STACK_LINE(137)
										int tmp41 = (int(tmp36) | int(tmp40));		HX_STACK_VAR(tmp41,"tmp41");
										HX_STACK_LINE(137)
										int tmp42 = (int(destPixel) & int((int)255));		HX_STACK_VAR(tmp42,"tmp42");
										HX_STACK_LINE(137)
										int tmp43 = (int(tmp42) & int((int)255));		HX_STACK_VAR(tmp43,"tmp43");
										HX_STACK_LINE(137)
										int tmp44 = (int(tmp41) | int(tmp43));		HX_STACK_VAR(tmp44,"tmp44");
										HX_STACK_LINE(137)
										destPixel = tmp44;
									}
									HX_STACK_LINE(137)
									value;
								}
								;break;
								case (int)1: {
									HX_STACK_LINE(138)
									{
										HX_STACK_LINE(138)
										int tmp30 = (int(destPixel) >> int((int)24));		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(138)
										int tmp31 = (int(tmp30) & int((int)255));		HX_STACK_VAR(tmp31,"tmp31");
										HX_STACK_LINE(138)
										int tmp32 = (int(tmp31) & int((int)255));		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(138)
										int tmp33 = (int(tmp32) << int((int)24));		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(138)
										int tmp34 = (int(value) & int((int)255));		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(138)
										int tmp35 = (int(tmp34) << int((int)16));		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(138)
										int tmp36 = (int(tmp33) | int(tmp35));		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(138)
										int tmp37 = (int(destPixel) >> int((int)8));		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(138)
										int tmp38 = (int(tmp37) & int((int)255));		HX_STACK_VAR(tmp38,"tmp38");
										HX_STACK_LINE(138)
										int tmp39 = (int(tmp38) & int((int)255));		HX_STACK_VAR(tmp39,"tmp39");
										HX_STACK_LINE(138)
										int tmp40 = (int(tmp39) << int((int)8));		HX_STACK_VAR(tmp40,"tmp40");
										HX_STACK_LINE(138)
										int tmp41 = (int(tmp36) | int(tmp40));		HX_STACK_VAR(tmp41,"tmp41");
										HX_STACK_LINE(138)
										int tmp42 = (int(destPixel) & int((int)255));		HX_STACK_VAR(tmp42,"tmp42");
										HX_STACK_LINE(138)
										int tmp43 = (int(tmp42) & int((int)255));		HX_STACK_VAR(tmp43,"tmp43");
										HX_STACK_LINE(138)
										int tmp44 = (int(tmp41) | int(tmp43));		HX_STACK_VAR(tmp44,"tmp44");
										HX_STACK_LINE(138)
										destPixel = tmp44;
									}
									HX_STACK_LINE(138)
									value;
								}
								;break;
								case (int)2: {
									HX_STACK_LINE(139)
									{
										HX_STACK_LINE(139)
										int tmp30 = (int(destPixel) >> int((int)24));		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(139)
										int tmp31 = (int(tmp30) & int((int)255));		HX_STACK_VAR(tmp31,"tmp31");
										HX_STACK_LINE(139)
										int tmp32 = (int(tmp31) & int((int)255));		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(139)
										int tmp33 = (int(tmp32) << int((int)24));		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(139)
										int tmp34 = (int(destPixel) >> int((int)16));		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(139)
										int tmp35 = (int(tmp34) & int((int)255));		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(139)
										int tmp36 = (int(tmp35) & int((int)255));		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(139)
										int tmp37 = (int(tmp36) << int((int)16));		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(139)
										int tmp38 = (int(tmp33) | int(tmp37));		HX_STACK_VAR(tmp38,"tmp38");
										HX_STACK_LINE(139)
										int tmp39 = (int(value) & int((int)255));		HX_STACK_VAR(tmp39,"tmp39");
										HX_STACK_LINE(139)
										int tmp40 = (int(tmp39) << int((int)8));		HX_STACK_VAR(tmp40,"tmp40");
										HX_STACK_LINE(139)
										int tmp41 = (int(tmp38) | int(tmp40));		HX_STACK_VAR(tmp41,"tmp41");
										HX_STACK_LINE(139)
										int tmp42 = (int(destPixel) & int((int)255));		HX_STACK_VAR(tmp42,"tmp42");
										HX_STACK_LINE(139)
										int tmp43 = (int(tmp42) & int((int)255));		HX_STACK_VAR(tmp43,"tmp43");
										HX_STACK_LINE(139)
										int tmp44 = (int(tmp41) | int(tmp43));		HX_STACK_VAR(tmp44,"tmp44");
										HX_STACK_LINE(139)
										destPixel = tmp44;
									}
									HX_STACK_LINE(139)
									value;
								}
								;break;
								case (int)3: {
									HX_STACK_LINE(140)
									{
										HX_STACK_LINE(140)
										int tmp30 = (int(destPixel) >> int((int)24));		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(140)
										int tmp31 = (int(tmp30) & int((int)255));		HX_STACK_VAR(tmp31,"tmp31");
										HX_STACK_LINE(140)
										int tmp32 = (int(tmp31) & int((int)255));		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(140)
										int tmp33 = (int(tmp32) << int((int)24));		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(140)
										int tmp34 = (int(destPixel) >> int((int)16));		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(140)
										int tmp35 = (int(tmp34) & int((int)255));		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(140)
										int tmp36 = (int(tmp35) & int((int)255));		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(140)
										int tmp37 = (int(tmp36) << int((int)16));		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(140)
										int tmp38 = (int(tmp33) | int(tmp37));		HX_STACK_VAR(tmp38,"tmp38");
										HX_STACK_LINE(140)
										int tmp39 = (int(destPixel) >> int((int)8));		HX_STACK_VAR(tmp39,"tmp39");
										HX_STACK_LINE(140)
										int tmp40 = (int(tmp39) & int((int)255));		HX_STACK_VAR(tmp40,"tmp40");
										HX_STACK_LINE(140)
										int tmp41 = (int(tmp40) & int((int)255));		HX_STACK_VAR(tmp41,"tmp41");
										HX_STACK_LINE(140)
										int tmp42 = (int(tmp41) << int((int)8));		HX_STACK_VAR(tmp42,"tmp42");
										HX_STACK_LINE(140)
										int tmp43 = (int(tmp38) | int(tmp42));		HX_STACK_VAR(tmp43,"tmp43");
										HX_STACK_LINE(140)
										int tmp44 = (int(value) & int((int)255));		HX_STACK_VAR(tmp44,"tmp44");
										HX_STACK_LINE(140)
										int tmp45 = (int(tmp43) | int(tmp44));		HX_STACK_VAR(tmp45,"tmp45");
										HX_STACK_LINE(140)
										destPixel = tmp45;
									}
									HX_STACK_LINE(140)
									value;
								}
								;break;
							}
							HX_STACK_LINE(144)
							{
								HX_STACK_LINE(144)
								bool tmp30 = destPremultiplied;		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(144)
								if ((tmp30)){
									HX_STACK_LINE(144)
									int tmp31 = (int(destPixel) & int((int)255));		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(144)
									bool tmp32 = (tmp31 == (int)0);		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(144)
									if ((tmp32)){
										HX_STACK_LINE(144)
										bool tmp33 = (destPixel != (int)0);		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(144)
										if ((tmp33)){
											HX_STACK_LINE(144)
											destPixel = (int)0;
										}
									}
									else{
										HX_STACK_LINE(144)
										int tmp33 = (int(destPixel) & int((int)255));		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(144)
										bool tmp34 = (tmp33 != (int)255);		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(144)
										if ((tmp34)){
											HX_STACK_LINE(144)
											Dynamic tmp35;		HX_STACK_VAR(tmp35,"tmp35");
											HX_STACK_LINE(144)
											{
												HX_STACK_LINE(144)
												::lime::utils::ArrayBufferView tmp36 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__alpha16;		HX_STACK_VAR(tmp36,"tmp36");
												HX_STACK_LINE(144)
												::lime::utils::ArrayBufferView this1 = tmp36;		HX_STACK_VAR(this1,"this1");
												HX_STACK_LINE(144)
												tmp35 = ::__hxcpp_memory_get_ui32(this1->buffer->b,(this1->byteOffset + (((int(destPixel) & int((int)255))) * (int)4)));
											}
											HX_STACK_LINE(144)
											::lime::math::color::_RGBA::RGBA_Impl__obj::a16 = tmp35;
											HX_STACK_LINE(144)
											{
												HX_STACK_LINE(144)
												int tmp36 = (int(destPixel) >> int((int)24));		HX_STACK_VAR(tmp36,"tmp36");
												HX_STACK_LINE(144)
												int tmp37 = (int(tmp36) & int((int)255));		HX_STACK_VAR(tmp37,"tmp37");
												HX_STACK_LINE(144)
												int tmp38 = ::lime::math::color::_RGBA::RGBA_Impl__obj::a16;		HX_STACK_VAR(tmp38,"tmp38");
												HX_STACK_LINE(144)
												int tmp39 = (tmp37 * tmp38);		HX_STACK_VAR(tmp39,"tmp39");
												HX_STACK_LINE(144)
												int tmp40 = (int(tmp39) >> int((int)16));		HX_STACK_VAR(tmp40,"tmp40");
												HX_STACK_LINE(144)
												int tmp41 = (int(tmp40) & int((int)255));		HX_STACK_VAR(tmp41,"tmp41");
												HX_STACK_LINE(144)
												int tmp42 = (int(tmp41) << int((int)24));		HX_STACK_VAR(tmp42,"tmp42");
												HX_STACK_LINE(144)
												int tmp43 = (int(destPixel) >> int((int)16));		HX_STACK_VAR(tmp43,"tmp43");
												HX_STACK_LINE(144)
												int tmp44 = (int(tmp43) & int((int)255));		HX_STACK_VAR(tmp44,"tmp44");
												HX_STACK_LINE(144)
												int tmp45 = ::lime::math::color::_RGBA::RGBA_Impl__obj::a16;		HX_STACK_VAR(tmp45,"tmp45");
												HX_STACK_LINE(144)
												int tmp46 = (tmp44 * tmp45);		HX_STACK_VAR(tmp46,"tmp46");
												HX_STACK_LINE(144)
												int tmp47 = (int(tmp46) >> int((int)16));		HX_STACK_VAR(tmp47,"tmp47");
												HX_STACK_LINE(144)
												int tmp48 = (int(tmp47) & int((int)255));		HX_STACK_VAR(tmp48,"tmp48");
												HX_STACK_LINE(144)
												int tmp49 = (int(tmp48) << int((int)16));		HX_STACK_VAR(tmp49,"tmp49");
												HX_STACK_LINE(144)
												int tmp50 = (int(tmp42) | int(tmp49));		HX_STACK_VAR(tmp50,"tmp50");
												HX_STACK_LINE(144)
												int tmp51 = (int(destPixel) >> int((int)8));		HX_STACK_VAR(tmp51,"tmp51");
												HX_STACK_LINE(144)
												int tmp52 = (int(tmp51) & int((int)255));		HX_STACK_VAR(tmp52,"tmp52");
												HX_STACK_LINE(144)
												int tmp53 = ::lime::math::color::_RGBA::RGBA_Impl__obj::a16;		HX_STACK_VAR(tmp53,"tmp53");
												HX_STACK_LINE(144)
												int tmp54 = (tmp52 * tmp53);		HX_STACK_VAR(tmp54,"tmp54");
												HX_STACK_LINE(144)
												int tmp55 = (int(tmp54) >> int((int)16));		HX_STACK_VAR(tmp55,"tmp55");
												HX_STACK_LINE(144)
												int tmp56 = (int(tmp55) & int((int)255));		HX_STACK_VAR(tmp56,"tmp56");
												HX_STACK_LINE(144)
												int tmp57 = (int(tmp56) << int((int)8));		HX_STACK_VAR(tmp57,"tmp57");
												HX_STACK_LINE(144)
												int tmp58 = (int(tmp50) | int(tmp57));		HX_STACK_VAR(tmp58,"tmp58");
												HX_STACK_LINE(144)
												int tmp59 = (int(destPixel) & int((int)255));		HX_STACK_VAR(tmp59,"tmp59");
												HX_STACK_LINE(144)
												int tmp60 = (int(tmp59) & int((int)255));		HX_STACK_VAR(tmp60,"tmp60");
												HX_STACK_LINE(144)
												int tmp61 = (int(tmp58) | int(tmp60));		HX_STACK_VAR(tmp61,"tmp61");
												HX_STACK_LINE(144)
												destPixel = tmp61;
											}
										}
									}
								}
								HX_STACK_LINE(144)
								int tmp31 = destFormat;		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(144)
								switch( (int)(tmp31)){
									case (int)2: {
										HX_STACK_LINE(144)
										{
											HX_STACK_LINE(144)
											int tmp32 = (int(destPixel) >> int((int)8));		HX_STACK_VAR(tmp32,"tmp32");
											HX_STACK_LINE(144)
											int tmp33 = (int(tmp32) & int((int)255));		HX_STACK_VAR(tmp33,"tmp33");
											HX_STACK_LINE(144)
											int val = tmp33;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(144)
											::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + destPosition),val);
											HX_STACK_LINE(144)
											val;
										}
										HX_STACK_LINE(144)
										{
											HX_STACK_LINE(144)
											int tmp32 = (int(destPixel) >> int((int)16));		HX_STACK_VAR(tmp32,"tmp32");
											HX_STACK_LINE(144)
											int tmp33 = (int(tmp32) & int((int)255));		HX_STACK_VAR(tmp33,"tmp33");
											HX_STACK_LINE(144)
											int val = tmp33;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(144)
											::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)1))),val);
											HX_STACK_LINE(144)
											val;
										}
										HX_STACK_LINE(144)
										{
											HX_STACK_LINE(144)
											int tmp32 = (int(destPixel) >> int((int)24));		HX_STACK_VAR(tmp32,"tmp32");
											HX_STACK_LINE(144)
											int tmp33 = (int(tmp32) & int((int)255));		HX_STACK_VAR(tmp33,"tmp33");
											HX_STACK_LINE(144)
											int val = tmp33;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(144)
											::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)2))),val);
											HX_STACK_LINE(144)
											val;
										}
										HX_STACK_LINE(144)
										{
											HX_STACK_LINE(144)
											int tmp32 = (int(destPixel) & int((int)255));		HX_STACK_VAR(tmp32,"tmp32");
											HX_STACK_LINE(144)
											int val = tmp32;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(144)
											::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)3))),val);
											HX_STACK_LINE(144)
											val;
										}
									}
									;break;
									case (int)0: {
										HX_STACK_LINE(144)
										{
											HX_STACK_LINE(144)
											int tmp32 = (int(destPixel) >> int((int)24));		HX_STACK_VAR(tmp32,"tmp32");
											HX_STACK_LINE(144)
											int tmp33 = (int(tmp32) & int((int)255));		HX_STACK_VAR(tmp33,"tmp33");
											HX_STACK_LINE(144)
											int val = tmp33;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(144)
											::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + destPosition),val);
											HX_STACK_LINE(144)
											val;
										}
										HX_STACK_LINE(144)
										{
											HX_STACK_LINE(144)
											int tmp32 = (int(destPixel) >> int((int)16));		HX_STACK_VAR(tmp32,"tmp32");
											HX_STACK_LINE(144)
											int tmp33 = (int(tmp32) & int((int)255));		HX_STACK_VAR(tmp33,"tmp33");
											HX_STACK_LINE(144)
											int val = tmp33;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(144)
											::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)1))),val);
											HX_STACK_LINE(144)
											val;
										}
										HX_STACK_LINE(144)
										{
											HX_STACK_LINE(144)
											int tmp32 = (int(destPixel) >> int((int)8));		HX_STACK_VAR(tmp32,"tmp32");
											HX_STACK_LINE(144)
											int tmp33 = (int(tmp32) & int((int)255));		HX_STACK_VAR(tmp33,"tmp33");
											HX_STACK_LINE(144)
											int val = tmp33;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(144)
											::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)2))),val);
											HX_STACK_LINE(144)
											val;
										}
										HX_STACK_LINE(144)
										{
											HX_STACK_LINE(144)
											int tmp32 = (int(destPixel) & int((int)255));		HX_STACK_VAR(tmp32,"tmp32");
											HX_STACK_LINE(144)
											int val = tmp32;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(144)
											::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)3))),val);
											HX_STACK_LINE(144)
											val;
										}
									}
									;break;
									case (int)1: {
										HX_STACK_LINE(144)
										{
											HX_STACK_LINE(144)
											int tmp32 = (int(destPixel) & int((int)255));		HX_STACK_VAR(tmp32,"tmp32");
											HX_STACK_LINE(144)
											int val = tmp32;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(144)
											::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + destPosition),val);
											HX_STACK_LINE(144)
											val;
										}
										HX_STACK_LINE(144)
										{
											HX_STACK_LINE(144)
											int tmp32 = (int(destPixel) >> int((int)24));		HX_STACK_VAR(tmp32,"tmp32");
											HX_STACK_LINE(144)
											int tmp33 = (int(tmp32) & int((int)255));		HX_STACK_VAR(tmp33,"tmp33");
											HX_STACK_LINE(144)
											int val = tmp33;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(144)
											::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)1))),val);
											HX_STACK_LINE(144)
											val;
										}
										HX_STACK_LINE(144)
										{
											HX_STACK_LINE(144)
											int tmp32 = (int(destPixel) >> int((int)16));		HX_STACK_VAR(tmp32,"tmp32");
											HX_STACK_LINE(144)
											int tmp33 = (int(tmp32) & int((int)255));		HX_STACK_VAR(tmp33,"tmp33");
											HX_STACK_LINE(144)
											int val = tmp33;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(144)
											::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)2))),val);
											HX_STACK_LINE(144)
											val;
										}
										HX_STACK_LINE(144)
										{
											HX_STACK_LINE(144)
											int tmp32 = (int(destPixel) >> int((int)8));		HX_STACK_VAR(tmp32,"tmp32");
											HX_STACK_LINE(144)
											int tmp33 = (int(tmp32) & int((int)255));		HX_STACK_VAR(tmp33,"tmp33");
											HX_STACK_LINE(144)
											int val = tmp33;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(144)
											::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)3))),val);
											HX_STACK_LINE(144)
											val;
										}
									}
									;break;
								}
							}
							HX_STACK_LINE(146)
							hx::AddEq(srcPosition,(int)4);
							HX_STACK_LINE(147)
							hx::AddEq(destPosition,(int)4);
						}
					}
				}
			}
		}
		HX_STACK_LINE(155)
		image->dirty = true;
		HX_STACK_LINE(156)
		(image->version)++;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(ImageDataUtil_obj,copyChannel,(void))

Void ImageDataUtil_obj::copyPixels( ::lime::graphics::Image image,::lime::graphics::Image sourceImage,::lime::math::Rectangle sourceRect,::lime::math::Vector2 destPoint,::lime::graphics::Image alphaImage,::lime::math::Vector2 alphaPoint,hx::Null< bool >  __o_mergeAlpha){
bool mergeAlpha = __o_mergeAlpha.Default(false);
	HX_STACK_FRAME("lime.graphics.utils.ImageDataUtil","copyPixels",0x95aa37f0,"lime.graphics.utils.ImageDataUtil.copyPixels","lime/graphics/utils/ImageDataUtil.hx",161,0x494d921f)
	HX_STACK_ARG(image,"image")
	HX_STACK_ARG(sourceImage,"sourceImage")
	HX_STACK_ARG(sourceRect,"sourceRect")
	HX_STACK_ARG(destPoint,"destPoint")
	HX_STACK_ARG(alphaImage,"alphaImage")
	HX_STACK_ARG(alphaPoint,"alphaPoint")
	HX_STACK_ARG(mergeAlpha,"mergeAlpha")
{
		HX_STACK_LINE(164)
		bool tmp = ::lime::_system::CFFI_obj::enabled;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(164)
		if ((tmp)){
			HX_STACK_LINE(164)
			::lime::graphics::utils::ImageDataUtil_obj::cffi_lime_image_data_util_copy_pixels.call(hx::DynamicPtr(image),hx::DynamicPtr(sourceImage),hx::DynamicPtr(sourceRect),hx::DynamicPtr(destPoint),hx::DynamicPtr(alphaImage),hx::DynamicPtr(alphaPoint),mergeAlpha);
		}
		else{
			HX_STACK_LINE(168)
			::lime::utils::ArrayBufferView tmp1 = sourceImage->buffer->data;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(168)
			::lime::utils::ArrayBufferView sourceData = tmp1;		HX_STACK_VAR(sourceData,"sourceData");
			HX_STACK_LINE(169)
			::lime::utils::ArrayBufferView tmp2 = image->buffer->data;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(169)
			::lime::utils::ArrayBufferView destData = tmp2;		HX_STACK_VAR(destData,"destData");
			HX_STACK_LINE(171)
			bool tmp3 = (sourceData == null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(171)
			bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(171)
			bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(171)
			if ((tmp4)){
				HX_STACK_LINE(171)
				tmp5 = (destData == null());
			}
			else{
				HX_STACK_LINE(171)
				tmp5 = true;
			}
			HX_STACK_LINE(171)
			if ((tmp5)){
				HX_STACK_LINE(171)
				return null();
			}
			HX_STACK_LINE(173)
			::lime::graphics::utils::_ImageDataUtil::ImageDataView tmp6 = ::lime::graphics::utils::_ImageDataUtil::ImageDataView_obj::__new(sourceImage,sourceRect);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(173)
			::lime::graphics::utils::_ImageDataUtil::ImageDataView sourceView = tmp6;		HX_STACK_VAR(sourceView,"sourceView");
			HX_STACK_LINE(174)
			::lime::graphics::Image tmp7 = image;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(174)
			::lime::math::Rectangle tmp8 = ::lime::math::Rectangle_obj::__new(destPoint->x,destPoint->y,sourceView->width,sourceView->height);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(174)
			::lime::graphics::utils::_ImageDataUtil::ImageDataView tmp9 = ::lime::graphics::utils::_ImageDataUtil::ImageDataView_obj::__new(tmp7,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(174)
			::lime::graphics::utils::_ImageDataUtil::ImageDataView destView = tmp9;		HX_STACK_VAR(destView,"destView");
			HX_STACK_LINE(176)
			int tmp10 = sourceImage->buffer->format;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(176)
			int sourceFormat = tmp10;		HX_STACK_VAR(sourceFormat,"sourceFormat");
			HX_STACK_LINE(177)
			int tmp11 = image->buffer->format;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(177)
			int destFormat = tmp11;		HX_STACK_VAR(destFormat,"destFormat");
			HX_STACK_LINE(178)
			bool tmp12 = sourceImage->buffer->premultiplied;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(178)
			bool sourcePremultiplied = tmp12;		HX_STACK_VAR(sourcePremultiplied,"sourcePremultiplied");
			HX_STACK_LINE(179)
			bool tmp13 = image->buffer->premultiplied;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(179)
			bool destPremultiplied = tmp13;		HX_STACK_VAR(destPremultiplied,"destPremultiplied");
			HX_STACK_LINE(181)
			int sourcePosition;		HX_STACK_VAR(sourcePosition,"sourcePosition");
			HX_STACK_LINE(181)
			int destPosition;		HX_STACK_VAR(destPosition,"destPosition");
			HX_STACK_LINE(181)
			int sourcePixel;		HX_STACK_VAR(sourcePixel,"sourcePixel");
			HX_STACK_LINE(183)
			bool tmp14 = mergeAlpha;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(183)
			bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(183)
			bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(183)
			bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(183)
			bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(183)
			if ((tmp17)){
				HX_STACK_LINE(183)
				bool tmp19 = sourceImage->get_transparent();		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(183)
				bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(183)
				bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(183)
				tmp18 = !(tmp21);
			}
			else{
				HX_STACK_LINE(183)
				tmp18 = true;
			}
			HX_STACK_LINE(183)
			if ((tmp18)){
				HX_STACK_LINE(185)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(185)
				int _g = destView->height;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(185)
				while((true)){
					HX_STACK_LINE(185)
					bool tmp19 = (_g1 < _g);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(185)
					bool tmp20 = !(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(185)
					if ((tmp20)){
						HX_STACK_LINE(185)
						break;
					}
					HX_STACK_LINE(185)
					int tmp21 = (_g1)++;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(185)
					int y = tmp21;		HX_STACK_VAR(y,"y");
					HX_STACK_LINE(187)
					int tmp22 = sourceView->offset;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(187)
					int tmp23 = (sourceView->stride * y);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(187)
					int tmp24 = (tmp22 + tmp23);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(187)
					sourcePosition = tmp24;
					HX_STACK_LINE(188)
					int tmp25 = destView->offset;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(188)
					int tmp26 = (destView->stride * y);		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(188)
					int tmp27 = (tmp25 + tmp26);		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(188)
					destPosition = tmp27;
					HX_STACK_LINE(190)
					{
						HX_STACK_LINE(190)
						int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
						HX_STACK_LINE(190)
						int _g2 = destView->width;		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(190)
						while((true)){
							HX_STACK_LINE(190)
							bool tmp28 = (_g3 < _g2);		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(190)
							bool tmp29 = !(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(190)
							if ((tmp29)){
								HX_STACK_LINE(190)
								break;
							}
							HX_STACK_LINE(190)
							int tmp30 = (_g3)++;		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(190)
							int x = tmp30;		HX_STACK_VAR(x,"x");
							HX_STACK_LINE(192)
							{
								HX_STACK_LINE(192)
								int tmp31 = sourceFormat;		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(192)
								switch( (int)(tmp31)){
									case (int)2: {
										HX_STACK_LINE(192)
										int tmp32 = ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + ((sourcePosition + (int)2))));		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(192)
										Dynamic tmp33 = (int(tmp32) & int((int)255));		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(192)
										int r = tmp33;		HX_STACK_VAR(r,"r");
										HX_STACK_LINE(192)
										int tmp34 = ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + ((sourcePosition + (int)1))));		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(192)
										Dynamic tmp35 = (int(tmp34) & int((int)255));		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(192)
										int g = tmp35;		HX_STACK_VAR(g,"g");
										HX_STACK_LINE(192)
										int tmp36 = ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + sourcePosition));		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(192)
										Dynamic tmp37 = (int(tmp36) & int((int)255));		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(192)
										int b = tmp37;		HX_STACK_VAR(b,"b");
										HX_STACK_LINE(192)
										int tmp38 = ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + ((sourcePosition + (int)3))));		HX_STACK_VAR(tmp38,"tmp38");
										HX_STACK_LINE(192)
										Dynamic tmp39 = (int(tmp38) & int((int)255));		HX_STACK_VAR(tmp39,"tmp39");
										HX_STACK_LINE(192)
										int a = tmp39;		HX_STACK_VAR(a,"a");
										HX_STACK_LINE(192)
										int tmp40 = (int(r) & int((int)255));		HX_STACK_VAR(tmp40,"tmp40");
										HX_STACK_LINE(192)
										int tmp41 = (int(tmp40) << int((int)24));		HX_STACK_VAR(tmp41,"tmp41");
										HX_STACK_LINE(192)
										int tmp42 = (int(g) & int((int)255));		HX_STACK_VAR(tmp42,"tmp42");
										HX_STACK_LINE(192)
										int tmp43 = (int(tmp42) << int((int)16));		HX_STACK_VAR(tmp43,"tmp43");
										HX_STACK_LINE(192)
										int tmp44 = (int(tmp41) | int(tmp43));		HX_STACK_VAR(tmp44,"tmp44");
										HX_STACK_LINE(192)
										int tmp45 = (int(b) & int((int)255));		HX_STACK_VAR(tmp45,"tmp45");
										HX_STACK_LINE(192)
										int tmp46 = (int(tmp45) << int((int)8));		HX_STACK_VAR(tmp46,"tmp46");
										HX_STACK_LINE(192)
										int tmp47 = (int(tmp44) | int(tmp46));		HX_STACK_VAR(tmp47,"tmp47");
										HX_STACK_LINE(192)
										int tmp48 = (int(a) & int((int)255));		HX_STACK_VAR(tmp48,"tmp48");
										HX_STACK_LINE(192)
										int tmp49 = (int(tmp47) | int(tmp48));		HX_STACK_VAR(tmp49,"tmp49");
										HX_STACK_LINE(192)
										sourcePixel = tmp49;
									}
									;break;
									case (int)0: {
										HX_STACK_LINE(192)
										int tmp32 = ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + sourcePosition));		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(192)
										Dynamic tmp33 = (int(tmp32) & int((int)255));		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(192)
										int r = tmp33;		HX_STACK_VAR(r,"r");
										HX_STACK_LINE(192)
										int tmp34 = ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + ((sourcePosition + (int)1))));		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(192)
										Dynamic tmp35 = (int(tmp34) & int((int)255));		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(192)
										int g = tmp35;		HX_STACK_VAR(g,"g");
										HX_STACK_LINE(192)
										int tmp36 = ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + ((sourcePosition + (int)2))));		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(192)
										Dynamic tmp37 = (int(tmp36) & int((int)255));		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(192)
										int b = tmp37;		HX_STACK_VAR(b,"b");
										HX_STACK_LINE(192)
										int tmp38 = ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + ((sourcePosition + (int)3))));		HX_STACK_VAR(tmp38,"tmp38");
										HX_STACK_LINE(192)
										Dynamic tmp39 = (int(tmp38) & int((int)255));		HX_STACK_VAR(tmp39,"tmp39");
										HX_STACK_LINE(192)
										int a = tmp39;		HX_STACK_VAR(a,"a");
										HX_STACK_LINE(192)
										int tmp40 = (int(r) & int((int)255));		HX_STACK_VAR(tmp40,"tmp40");
										HX_STACK_LINE(192)
										int tmp41 = (int(tmp40) << int((int)24));		HX_STACK_VAR(tmp41,"tmp41");
										HX_STACK_LINE(192)
										int tmp42 = (int(g) & int((int)255));		HX_STACK_VAR(tmp42,"tmp42");
										HX_STACK_LINE(192)
										int tmp43 = (int(tmp42) << int((int)16));		HX_STACK_VAR(tmp43,"tmp43");
										HX_STACK_LINE(192)
										int tmp44 = (int(tmp41) | int(tmp43));		HX_STACK_VAR(tmp44,"tmp44");
										HX_STACK_LINE(192)
										int tmp45 = (int(b) & int((int)255));		HX_STACK_VAR(tmp45,"tmp45");
										HX_STACK_LINE(192)
										int tmp46 = (int(tmp45) << int((int)8));		HX_STACK_VAR(tmp46,"tmp46");
										HX_STACK_LINE(192)
										int tmp47 = (int(tmp44) | int(tmp46));		HX_STACK_VAR(tmp47,"tmp47");
										HX_STACK_LINE(192)
										int tmp48 = (int(a) & int((int)255));		HX_STACK_VAR(tmp48,"tmp48");
										HX_STACK_LINE(192)
										int tmp49 = (int(tmp47) | int(tmp48));		HX_STACK_VAR(tmp49,"tmp49");
										HX_STACK_LINE(192)
										sourcePixel = tmp49;
									}
									;break;
									case (int)1: {
										HX_STACK_LINE(192)
										int tmp32 = ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + ((sourcePosition + (int)1))));		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(192)
										Dynamic tmp33 = (int(tmp32) & int((int)255));		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(192)
										int r = tmp33;		HX_STACK_VAR(r,"r");
										HX_STACK_LINE(192)
										int tmp34 = ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + ((sourcePosition + (int)2))));		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(192)
										Dynamic tmp35 = (int(tmp34) & int((int)255));		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(192)
										int g = tmp35;		HX_STACK_VAR(g,"g");
										HX_STACK_LINE(192)
										int tmp36 = ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + ((sourcePosition + (int)3))));		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(192)
										Dynamic tmp37 = (int(tmp36) & int((int)255));		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(192)
										int b = tmp37;		HX_STACK_VAR(b,"b");
										HX_STACK_LINE(192)
										int tmp38 = ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + sourcePosition));		HX_STACK_VAR(tmp38,"tmp38");
										HX_STACK_LINE(192)
										Dynamic tmp39 = (int(tmp38) & int((int)255));		HX_STACK_VAR(tmp39,"tmp39");
										HX_STACK_LINE(192)
										int a = tmp39;		HX_STACK_VAR(a,"a");
										HX_STACK_LINE(192)
										int tmp40 = (int(r) & int((int)255));		HX_STACK_VAR(tmp40,"tmp40");
										HX_STACK_LINE(192)
										int tmp41 = (int(tmp40) << int((int)24));		HX_STACK_VAR(tmp41,"tmp41");
										HX_STACK_LINE(192)
										int tmp42 = (int(g) & int((int)255));		HX_STACK_VAR(tmp42,"tmp42");
										HX_STACK_LINE(192)
										int tmp43 = (int(tmp42) << int((int)16));		HX_STACK_VAR(tmp43,"tmp43");
										HX_STACK_LINE(192)
										int tmp44 = (int(tmp41) | int(tmp43));		HX_STACK_VAR(tmp44,"tmp44");
										HX_STACK_LINE(192)
										int tmp45 = (int(b) & int((int)255));		HX_STACK_VAR(tmp45,"tmp45");
										HX_STACK_LINE(192)
										int tmp46 = (int(tmp45) << int((int)8));		HX_STACK_VAR(tmp46,"tmp46");
										HX_STACK_LINE(192)
										int tmp47 = (int(tmp44) | int(tmp46));		HX_STACK_VAR(tmp47,"tmp47");
										HX_STACK_LINE(192)
										int tmp48 = (int(a) & int((int)255));		HX_STACK_VAR(tmp48,"tmp48");
										HX_STACK_LINE(192)
										int tmp49 = (int(tmp47) | int(tmp48));		HX_STACK_VAR(tmp49,"tmp49");
										HX_STACK_LINE(192)
										sourcePixel = tmp49;
									}
									;break;
								}
								HX_STACK_LINE(192)
								bool tmp32 = sourcePremultiplied;		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(192)
								if ((tmp32)){
									HX_STACK_LINE(192)
									int tmp33 = (int(sourcePixel) & int((int)255));		HX_STACK_VAR(tmp33,"tmp33");
									HX_STACK_LINE(192)
									bool tmp34 = (tmp33 != (int)0);		HX_STACK_VAR(tmp34,"tmp34");
									HX_STACK_LINE(192)
									bool tmp35;		HX_STACK_VAR(tmp35,"tmp35");
									HX_STACK_LINE(192)
									if ((tmp34)){
										HX_STACK_LINE(192)
										int tmp36 = (int(sourcePixel) & int((int)255));		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(192)
										int tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(192)
										tmp35 = (tmp37 != (int)255);
									}
									else{
										HX_STACK_LINE(192)
										tmp35 = false;
									}
									HX_STACK_LINE(192)
									if ((tmp35)){
										HX_STACK_LINE(192)
										int tmp36 = (int(sourcePixel) & int((int)255));		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(192)
										Float tmp37 = (Float(((Float)255.0)) / Float(tmp36));		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(192)
										::lime::math::color::_RGBA::RGBA_Impl__obj::unmult = tmp37;
										HX_STACK_LINE(192)
										{
											HX_STACK_LINE(192)
											Dynamic tmp38;		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(192)
											{
												HX_STACK_LINE(192)
												::lime::utils::ArrayBufferView tmp39 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp39,"tmp39");
												HX_STACK_LINE(192)
												::lime::utils::ArrayBufferView this1 = tmp39;		HX_STACK_VAR(this1,"this1");
												HX_STACK_LINE(192)
												int tmp40 = (int(sourcePixel) >> int((int)24));		HX_STACK_VAR(tmp40,"tmp40");
												HX_STACK_LINE(192)
												int tmp41 = (int(tmp40) & int((int)255));		HX_STACK_VAR(tmp41,"tmp41");
												HX_STACK_LINE(192)
												Float tmp42 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;		HX_STACK_VAR(tmp42,"tmp42");
												HX_STACK_LINE(192)
												Float tmp43 = (tmp41 * tmp42);		HX_STACK_VAR(tmp43,"tmp43");
												HX_STACK_LINE(192)
												int tmp44 = ::Math_obj::round(tmp43);		HX_STACK_VAR(tmp44,"tmp44");
												HX_STACK_LINE(192)
												int idx = tmp44;		HX_STACK_VAR(idx,"idx");
												HX_STACK_LINE(192)
												int tmp45 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp45,"tmp45");
												HX_STACK_LINE(192)
												tmp38 = (int(tmp45) & int((int)255));
											}
											HX_STACK_LINE(192)
											int r = tmp38;		HX_STACK_VAR(r,"r");
											HX_STACK_LINE(192)
											Dynamic tmp39;		HX_STACK_VAR(tmp39,"tmp39");
											HX_STACK_LINE(192)
											{
												HX_STACK_LINE(192)
												::lime::utils::ArrayBufferView tmp40 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp40,"tmp40");
												HX_STACK_LINE(192)
												::lime::utils::ArrayBufferView this1 = tmp40;		HX_STACK_VAR(this1,"this1");
												HX_STACK_LINE(192)
												int tmp41 = (int(sourcePixel) >> int((int)16));		HX_STACK_VAR(tmp41,"tmp41");
												HX_STACK_LINE(192)
												int tmp42 = (int(tmp41) & int((int)255));		HX_STACK_VAR(tmp42,"tmp42");
												HX_STACK_LINE(192)
												Float tmp43 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;		HX_STACK_VAR(tmp43,"tmp43");
												HX_STACK_LINE(192)
												Float tmp44 = (tmp42 * tmp43);		HX_STACK_VAR(tmp44,"tmp44");
												HX_STACK_LINE(192)
												int tmp45 = ::Math_obj::round(tmp44);		HX_STACK_VAR(tmp45,"tmp45");
												HX_STACK_LINE(192)
												int idx = tmp45;		HX_STACK_VAR(idx,"idx");
												HX_STACK_LINE(192)
												int tmp46 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp46,"tmp46");
												HX_STACK_LINE(192)
												tmp39 = (int(tmp46) & int((int)255));
											}
											HX_STACK_LINE(192)
											int g = tmp39;		HX_STACK_VAR(g,"g");
											HX_STACK_LINE(192)
											Dynamic tmp40;		HX_STACK_VAR(tmp40,"tmp40");
											HX_STACK_LINE(192)
											{
												HX_STACK_LINE(192)
												::lime::utils::ArrayBufferView tmp41 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp41,"tmp41");
												HX_STACK_LINE(192)
												::lime::utils::ArrayBufferView this1 = tmp41;		HX_STACK_VAR(this1,"this1");
												HX_STACK_LINE(192)
												int tmp42 = (int(sourcePixel) >> int((int)8));		HX_STACK_VAR(tmp42,"tmp42");
												HX_STACK_LINE(192)
												int tmp43 = (int(tmp42) & int((int)255));		HX_STACK_VAR(tmp43,"tmp43");
												HX_STACK_LINE(192)
												Float tmp44 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;		HX_STACK_VAR(tmp44,"tmp44");
												HX_STACK_LINE(192)
												Float tmp45 = (tmp43 * tmp44);		HX_STACK_VAR(tmp45,"tmp45");
												HX_STACK_LINE(192)
												int tmp46 = ::Math_obj::round(tmp45);		HX_STACK_VAR(tmp46,"tmp46");
												HX_STACK_LINE(192)
												int idx = tmp46;		HX_STACK_VAR(idx,"idx");
												HX_STACK_LINE(192)
												int tmp47 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp47,"tmp47");
												HX_STACK_LINE(192)
												tmp40 = (int(tmp47) & int((int)255));
											}
											HX_STACK_LINE(192)
											int b = tmp40;		HX_STACK_VAR(b,"b");
											HX_STACK_LINE(192)
											int tmp41 = (int(r) & int((int)255));		HX_STACK_VAR(tmp41,"tmp41");
											HX_STACK_LINE(192)
											int tmp42 = (int(tmp41) << int((int)24));		HX_STACK_VAR(tmp42,"tmp42");
											HX_STACK_LINE(192)
											int tmp43 = (int(g) & int((int)255));		HX_STACK_VAR(tmp43,"tmp43");
											HX_STACK_LINE(192)
											int tmp44 = (int(tmp43) << int((int)16));		HX_STACK_VAR(tmp44,"tmp44");
											HX_STACK_LINE(192)
											int tmp45 = (int(tmp42) | int(tmp44));		HX_STACK_VAR(tmp45,"tmp45");
											HX_STACK_LINE(192)
											int tmp46 = (int(b) & int((int)255));		HX_STACK_VAR(tmp46,"tmp46");
											HX_STACK_LINE(192)
											int tmp47 = (int(tmp46) << int((int)8));		HX_STACK_VAR(tmp47,"tmp47");
											HX_STACK_LINE(192)
											int tmp48 = (int(tmp45) | int(tmp47));		HX_STACK_VAR(tmp48,"tmp48");
											HX_STACK_LINE(192)
											int tmp49 = (int(sourcePixel) & int((int)255));		HX_STACK_VAR(tmp49,"tmp49");
											HX_STACK_LINE(192)
											int tmp50 = (int(tmp49) & int((int)255));		HX_STACK_VAR(tmp50,"tmp50");
											HX_STACK_LINE(192)
											int tmp51 = (int(tmp48) | int(tmp50));		HX_STACK_VAR(tmp51,"tmp51");
											HX_STACK_LINE(192)
											sourcePixel = tmp51;
										}
									}
								}
							}
							HX_STACK_LINE(193)
							{
								HX_STACK_LINE(193)
								bool tmp31 = destPremultiplied;		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(193)
								if ((tmp31)){
									HX_STACK_LINE(193)
									int tmp32 = (int(sourcePixel) & int((int)255));		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(193)
									bool tmp33 = (tmp32 == (int)0);		HX_STACK_VAR(tmp33,"tmp33");
									HX_STACK_LINE(193)
									if ((tmp33)){
										HX_STACK_LINE(193)
										bool tmp34 = (sourcePixel != (int)0);		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(193)
										if ((tmp34)){
											HX_STACK_LINE(193)
											sourcePixel = (int)0;
										}
									}
									else{
										HX_STACK_LINE(193)
										int tmp34 = (int(sourcePixel) & int((int)255));		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(193)
										bool tmp35 = (tmp34 != (int)255);		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(193)
										if ((tmp35)){
											HX_STACK_LINE(193)
											Dynamic tmp36;		HX_STACK_VAR(tmp36,"tmp36");
											HX_STACK_LINE(193)
											{
												HX_STACK_LINE(193)
												::lime::utils::ArrayBufferView tmp37 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__alpha16;		HX_STACK_VAR(tmp37,"tmp37");
												HX_STACK_LINE(193)
												::lime::utils::ArrayBufferView this1 = tmp37;		HX_STACK_VAR(this1,"this1");
												HX_STACK_LINE(193)
												tmp36 = ::__hxcpp_memory_get_ui32(this1->buffer->b,(this1->byteOffset + (((int(sourcePixel) & int((int)255))) * (int)4)));
											}
											HX_STACK_LINE(193)
											::lime::math::color::_RGBA::RGBA_Impl__obj::a16 = tmp36;
											HX_STACK_LINE(193)
											{
												HX_STACK_LINE(193)
												int tmp37 = (int(sourcePixel) >> int((int)24));		HX_STACK_VAR(tmp37,"tmp37");
												HX_STACK_LINE(193)
												int tmp38 = (int(tmp37) & int((int)255));		HX_STACK_VAR(tmp38,"tmp38");
												HX_STACK_LINE(193)
												int tmp39 = ::lime::math::color::_RGBA::RGBA_Impl__obj::a16;		HX_STACK_VAR(tmp39,"tmp39");
												HX_STACK_LINE(193)
												int tmp40 = (tmp38 * tmp39);		HX_STACK_VAR(tmp40,"tmp40");
												HX_STACK_LINE(193)
												int tmp41 = (int(tmp40) >> int((int)16));		HX_STACK_VAR(tmp41,"tmp41");
												HX_STACK_LINE(193)
												int tmp42 = (int(tmp41) & int((int)255));		HX_STACK_VAR(tmp42,"tmp42");
												HX_STACK_LINE(193)
												int tmp43 = (int(tmp42) << int((int)24));		HX_STACK_VAR(tmp43,"tmp43");
												HX_STACK_LINE(193)
												int tmp44 = (int(sourcePixel) >> int((int)16));		HX_STACK_VAR(tmp44,"tmp44");
												HX_STACK_LINE(193)
												int tmp45 = (int(tmp44) & int((int)255));		HX_STACK_VAR(tmp45,"tmp45");
												HX_STACK_LINE(193)
												int tmp46 = ::lime::math::color::_RGBA::RGBA_Impl__obj::a16;		HX_STACK_VAR(tmp46,"tmp46");
												HX_STACK_LINE(193)
												int tmp47 = (tmp45 * tmp46);		HX_STACK_VAR(tmp47,"tmp47");
												HX_STACK_LINE(193)
												int tmp48 = (int(tmp47) >> int((int)16));		HX_STACK_VAR(tmp48,"tmp48");
												HX_STACK_LINE(193)
												int tmp49 = (int(tmp48) & int((int)255));		HX_STACK_VAR(tmp49,"tmp49");
												HX_STACK_LINE(193)
												int tmp50 = (int(tmp49) << int((int)16));		HX_STACK_VAR(tmp50,"tmp50");
												HX_STACK_LINE(193)
												int tmp51 = (int(tmp43) | int(tmp50));		HX_STACK_VAR(tmp51,"tmp51");
												HX_STACK_LINE(193)
												int tmp52 = (int(sourcePixel) >> int((int)8));		HX_STACK_VAR(tmp52,"tmp52");
												HX_STACK_LINE(193)
												int tmp53 = (int(tmp52) & int((int)255));		HX_STACK_VAR(tmp53,"tmp53");
												HX_STACK_LINE(193)
												int tmp54 = ::lime::math::color::_RGBA::RGBA_Impl__obj::a16;		HX_STACK_VAR(tmp54,"tmp54");
												HX_STACK_LINE(193)
												int tmp55 = (tmp53 * tmp54);		HX_STACK_VAR(tmp55,"tmp55");
												HX_STACK_LINE(193)
												int tmp56 = (int(tmp55) >> int((int)16));		HX_STACK_VAR(tmp56,"tmp56");
												HX_STACK_LINE(193)
												int tmp57 = (int(tmp56) & int((int)255));		HX_STACK_VAR(tmp57,"tmp57");
												HX_STACK_LINE(193)
												int tmp58 = (int(tmp57) << int((int)8));		HX_STACK_VAR(tmp58,"tmp58");
												HX_STACK_LINE(193)
												int tmp59 = (int(tmp51) | int(tmp58));		HX_STACK_VAR(tmp59,"tmp59");
												HX_STACK_LINE(193)
												int tmp60 = (int(sourcePixel) & int((int)255));		HX_STACK_VAR(tmp60,"tmp60");
												HX_STACK_LINE(193)
												int tmp61 = (int(tmp60) & int((int)255));		HX_STACK_VAR(tmp61,"tmp61");
												HX_STACK_LINE(193)
												int tmp62 = (int(tmp59) | int(tmp61));		HX_STACK_VAR(tmp62,"tmp62");
												HX_STACK_LINE(193)
												sourcePixel = tmp62;
											}
										}
									}
								}
								HX_STACK_LINE(193)
								int tmp32 = destFormat;		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(193)
								switch( (int)(tmp32)){
									case (int)2: {
										HX_STACK_LINE(193)
										{
											HX_STACK_LINE(193)
											int tmp33 = (int(sourcePixel) >> int((int)8));		HX_STACK_VAR(tmp33,"tmp33");
											HX_STACK_LINE(193)
											int tmp34 = (int(tmp33) & int((int)255));		HX_STACK_VAR(tmp34,"tmp34");
											HX_STACK_LINE(193)
											int val = tmp34;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(193)
											::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + destPosition),val);
											HX_STACK_LINE(193)
											val;
										}
										HX_STACK_LINE(193)
										{
											HX_STACK_LINE(193)
											int tmp33 = (int(sourcePixel) >> int((int)16));		HX_STACK_VAR(tmp33,"tmp33");
											HX_STACK_LINE(193)
											int tmp34 = (int(tmp33) & int((int)255));		HX_STACK_VAR(tmp34,"tmp34");
											HX_STACK_LINE(193)
											int val = tmp34;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(193)
											::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)1))),val);
											HX_STACK_LINE(193)
											val;
										}
										HX_STACK_LINE(193)
										{
											HX_STACK_LINE(193)
											int tmp33 = (int(sourcePixel) >> int((int)24));		HX_STACK_VAR(tmp33,"tmp33");
											HX_STACK_LINE(193)
											int tmp34 = (int(tmp33) & int((int)255));		HX_STACK_VAR(tmp34,"tmp34");
											HX_STACK_LINE(193)
											int val = tmp34;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(193)
											::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)2))),val);
											HX_STACK_LINE(193)
											val;
										}
										HX_STACK_LINE(193)
										{
											HX_STACK_LINE(193)
											int tmp33 = (int(sourcePixel) & int((int)255));		HX_STACK_VAR(tmp33,"tmp33");
											HX_STACK_LINE(193)
											int val = tmp33;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(193)
											::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)3))),val);
											HX_STACK_LINE(193)
											val;
										}
									}
									;break;
									case (int)0: {
										HX_STACK_LINE(193)
										{
											HX_STACK_LINE(193)
											int tmp33 = (int(sourcePixel) >> int((int)24));		HX_STACK_VAR(tmp33,"tmp33");
											HX_STACK_LINE(193)
											int tmp34 = (int(tmp33) & int((int)255));		HX_STACK_VAR(tmp34,"tmp34");
											HX_STACK_LINE(193)
											int val = tmp34;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(193)
											::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + destPosition),val);
											HX_STACK_LINE(193)
											val;
										}
										HX_STACK_LINE(193)
										{
											HX_STACK_LINE(193)
											int tmp33 = (int(sourcePixel) >> int((int)16));		HX_STACK_VAR(tmp33,"tmp33");
											HX_STACK_LINE(193)
											int tmp34 = (int(tmp33) & int((int)255));		HX_STACK_VAR(tmp34,"tmp34");
											HX_STACK_LINE(193)
											int val = tmp34;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(193)
											::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)1))),val);
											HX_STACK_LINE(193)
											val;
										}
										HX_STACK_LINE(193)
										{
											HX_STACK_LINE(193)
											int tmp33 = (int(sourcePixel) >> int((int)8));		HX_STACK_VAR(tmp33,"tmp33");
											HX_STACK_LINE(193)
											int tmp34 = (int(tmp33) & int((int)255));		HX_STACK_VAR(tmp34,"tmp34");
											HX_STACK_LINE(193)
											int val = tmp34;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(193)
											::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)2))),val);
											HX_STACK_LINE(193)
											val;
										}
										HX_STACK_LINE(193)
										{
											HX_STACK_LINE(193)
											int tmp33 = (int(sourcePixel) & int((int)255));		HX_STACK_VAR(tmp33,"tmp33");
											HX_STACK_LINE(193)
											int val = tmp33;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(193)
											::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)3))),val);
											HX_STACK_LINE(193)
											val;
										}
									}
									;break;
									case (int)1: {
										HX_STACK_LINE(193)
										{
											HX_STACK_LINE(193)
											int tmp33 = (int(sourcePixel) & int((int)255));		HX_STACK_VAR(tmp33,"tmp33");
											HX_STACK_LINE(193)
											int val = tmp33;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(193)
											::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + destPosition),val);
											HX_STACK_LINE(193)
											val;
										}
										HX_STACK_LINE(193)
										{
											HX_STACK_LINE(193)
											int tmp33 = (int(sourcePixel) >> int((int)24));		HX_STACK_VAR(tmp33,"tmp33");
											HX_STACK_LINE(193)
											int tmp34 = (int(tmp33) & int((int)255));		HX_STACK_VAR(tmp34,"tmp34");
											HX_STACK_LINE(193)
											int val = tmp34;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(193)
											::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)1))),val);
											HX_STACK_LINE(193)
											val;
										}
										HX_STACK_LINE(193)
										{
											HX_STACK_LINE(193)
											int tmp33 = (int(sourcePixel) >> int((int)16));		HX_STACK_VAR(tmp33,"tmp33");
											HX_STACK_LINE(193)
											int tmp34 = (int(tmp33) & int((int)255));		HX_STACK_VAR(tmp34,"tmp34");
											HX_STACK_LINE(193)
											int val = tmp34;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(193)
											::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)2))),val);
											HX_STACK_LINE(193)
											val;
										}
										HX_STACK_LINE(193)
										{
											HX_STACK_LINE(193)
											int tmp33 = (int(sourcePixel) >> int((int)8));		HX_STACK_VAR(tmp33,"tmp33");
											HX_STACK_LINE(193)
											int tmp34 = (int(tmp33) & int((int)255));		HX_STACK_VAR(tmp34,"tmp34");
											HX_STACK_LINE(193)
											int val = tmp34;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(193)
											::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)3))),val);
											HX_STACK_LINE(193)
											val;
										}
									}
									;break;
								}
							}
							HX_STACK_LINE(195)
							hx::AddEq(sourcePosition,(int)4);
							HX_STACK_LINE(196)
							hx::AddEq(destPosition,(int)4);
						}
					}
				}
			}
			else{
				HX_STACK_LINE(204)
				Float sourceAlpha;		HX_STACK_VAR(sourceAlpha,"sourceAlpha");
				HX_STACK_LINE(204)
				Float destAlpha;		HX_STACK_VAR(destAlpha,"destAlpha");
				HX_STACK_LINE(204)
				Float oneMinusSourceAlpha;		HX_STACK_VAR(oneMinusSourceAlpha,"oneMinusSourceAlpha");
				HX_STACK_LINE(204)
				Float blendAlpha;		HX_STACK_VAR(blendAlpha,"blendAlpha");
				HX_STACK_LINE(205)
				int destPixel;		HX_STACK_VAR(destPixel,"destPixel");
				HX_STACK_LINE(207)
				bool tmp19 = (alphaImage == null());		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(207)
				if ((tmp19)){
					HX_STACK_LINE(209)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(209)
					int _g = destView->height;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(209)
					while((true)){
						HX_STACK_LINE(209)
						bool tmp20 = (_g1 < _g);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(209)
						bool tmp21 = !(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(209)
						if ((tmp21)){
							HX_STACK_LINE(209)
							break;
						}
						HX_STACK_LINE(209)
						int tmp22 = (_g1)++;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(209)
						int y = tmp22;		HX_STACK_VAR(y,"y");
						HX_STACK_LINE(211)
						int tmp23 = sourceView->offset;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(211)
						int tmp24 = (sourceView->stride * y);		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(211)
						int tmp25 = (tmp23 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(211)
						sourcePosition = tmp25;
						HX_STACK_LINE(212)
						int tmp26 = destView->offset;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(212)
						int tmp27 = (destView->stride * y);		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(212)
						int tmp28 = (tmp26 + tmp27);		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(212)
						destPosition = tmp28;
						HX_STACK_LINE(214)
						{
							HX_STACK_LINE(214)
							int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
							HX_STACK_LINE(214)
							int _g2 = destView->width;		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(214)
							while((true)){
								HX_STACK_LINE(214)
								bool tmp29 = (_g3 < _g2);		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(214)
								bool tmp30 = !(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(214)
								if ((tmp30)){
									HX_STACK_LINE(214)
									break;
								}
								HX_STACK_LINE(214)
								int tmp31 = (_g3)++;		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(214)
								int x = tmp31;		HX_STACK_VAR(x,"x");
								HX_STACK_LINE(216)
								{
									HX_STACK_LINE(216)
									int tmp32 = sourceFormat;		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(216)
									switch( (int)(tmp32)){
										case (int)2: {
											HX_STACK_LINE(216)
											int tmp33 = ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + ((sourcePosition + (int)2))));		HX_STACK_VAR(tmp33,"tmp33");
											HX_STACK_LINE(216)
											Dynamic tmp34 = (int(tmp33) & int((int)255));		HX_STACK_VAR(tmp34,"tmp34");
											HX_STACK_LINE(216)
											int r = tmp34;		HX_STACK_VAR(r,"r");
											HX_STACK_LINE(216)
											int tmp35 = ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + ((sourcePosition + (int)1))));		HX_STACK_VAR(tmp35,"tmp35");
											HX_STACK_LINE(216)
											Dynamic tmp36 = (int(tmp35) & int((int)255));		HX_STACK_VAR(tmp36,"tmp36");
											HX_STACK_LINE(216)
											int g = tmp36;		HX_STACK_VAR(g,"g");
											HX_STACK_LINE(216)
											int tmp37 = ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + sourcePosition));		HX_STACK_VAR(tmp37,"tmp37");
											HX_STACK_LINE(216)
											Dynamic tmp38 = (int(tmp37) & int((int)255));		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(216)
											int b = tmp38;		HX_STACK_VAR(b,"b");
											HX_STACK_LINE(216)
											int tmp39 = ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + ((sourcePosition + (int)3))));		HX_STACK_VAR(tmp39,"tmp39");
											HX_STACK_LINE(216)
											Dynamic tmp40 = (int(tmp39) & int((int)255));		HX_STACK_VAR(tmp40,"tmp40");
											HX_STACK_LINE(216)
											int a = tmp40;		HX_STACK_VAR(a,"a");
											HX_STACK_LINE(216)
											int tmp41 = (int(r) & int((int)255));		HX_STACK_VAR(tmp41,"tmp41");
											HX_STACK_LINE(216)
											int tmp42 = (int(tmp41) << int((int)24));		HX_STACK_VAR(tmp42,"tmp42");
											HX_STACK_LINE(216)
											int tmp43 = (int(g) & int((int)255));		HX_STACK_VAR(tmp43,"tmp43");
											HX_STACK_LINE(216)
											int tmp44 = (int(tmp43) << int((int)16));		HX_STACK_VAR(tmp44,"tmp44");
											HX_STACK_LINE(216)
											int tmp45 = (int(tmp42) | int(tmp44));		HX_STACK_VAR(tmp45,"tmp45");
											HX_STACK_LINE(216)
											int tmp46 = (int(b) & int((int)255));		HX_STACK_VAR(tmp46,"tmp46");
											HX_STACK_LINE(216)
											int tmp47 = (int(tmp46) << int((int)8));		HX_STACK_VAR(tmp47,"tmp47");
											HX_STACK_LINE(216)
											int tmp48 = (int(tmp45) | int(tmp47));		HX_STACK_VAR(tmp48,"tmp48");
											HX_STACK_LINE(216)
											int tmp49 = (int(a) & int((int)255));		HX_STACK_VAR(tmp49,"tmp49");
											HX_STACK_LINE(216)
											int tmp50 = (int(tmp48) | int(tmp49));		HX_STACK_VAR(tmp50,"tmp50");
											HX_STACK_LINE(216)
											sourcePixel = tmp50;
										}
										;break;
										case (int)0: {
											HX_STACK_LINE(216)
											int tmp33 = ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + sourcePosition));		HX_STACK_VAR(tmp33,"tmp33");
											HX_STACK_LINE(216)
											Dynamic tmp34 = (int(tmp33) & int((int)255));		HX_STACK_VAR(tmp34,"tmp34");
											HX_STACK_LINE(216)
											int r = tmp34;		HX_STACK_VAR(r,"r");
											HX_STACK_LINE(216)
											int tmp35 = ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + ((sourcePosition + (int)1))));		HX_STACK_VAR(tmp35,"tmp35");
											HX_STACK_LINE(216)
											Dynamic tmp36 = (int(tmp35) & int((int)255));		HX_STACK_VAR(tmp36,"tmp36");
											HX_STACK_LINE(216)
											int g = tmp36;		HX_STACK_VAR(g,"g");
											HX_STACK_LINE(216)
											int tmp37 = ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + ((sourcePosition + (int)2))));		HX_STACK_VAR(tmp37,"tmp37");
											HX_STACK_LINE(216)
											Dynamic tmp38 = (int(tmp37) & int((int)255));		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(216)
											int b = tmp38;		HX_STACK_VAR(b,"b");
											HX_STACK_LINE(216)
											int tmp39 = ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + ((sourcePosition + (int)3))));		HX_STACK_VAR(tmp39,"tmp39");
											HX_STACK_LINE(216)
											Dynamic tmp40 = (int(tmp39) & int((int)255));		HX_STACK_VAR(tmp40,"tmp40");
											HX_STACK_LINE(216)
											int a = tmp40;		HX_STACK_VAR(a,"a");
											HX_STACK_LINE(216)
											int tmp41 = (int(r) & int((int)255));		HX_STACK_VAR(tmp41,"tmp41");
											HX_STACK_LINE(216)
											int tmp42 = (int(tmp41) << int((int)24));		HX_STACK_VAR(tmp42,"tmp42");
											HX_STACK_LINE(216)
											int tmp43 = (int(g) & int((int)255));		HX_STACK_VAR(tmp43,"tmp43");
											HX_STACK_LINE(216)
											int tmp44 = (int(tmp43) << int((int)16));		HX_STACK_VAR(tmp44,"tmp44");
											HX_STACK_LINE(216)
											int tmp45 = (int(tmp42) | int(tmp44));		HX_STACK_VAR(tmp45,"tmp45");
											HX_STACK_LINE(216)
											int tmp46 = (int(b) & int((int)255));		HX_STACK_VAR(tmp46,"tmp46");
											HX_STACK_LINE(216)
											int tmp47 = (int(tmp46) << int((int)8));		HX_STACK_VAR(tmp47,"tmp47");
											HX_STACK_LINE(216)
											int tmp48 = (int(tmp45) | int(tmp47));		HX_STACK_VAR(tmp48,"tmp48");
											HX_STACK_LINE(216)
											int tmp49 = (int(a) & int((int)255));		HX_STACK_VAR(tmp49,"tmp49");
											HX_STACK_LINE(216)
											int tmp50 = (int(tmp48) | int(tmp49));		HX_STACK_VAR(tmp50,"tmp50");
											HX_STACK_LINE(216)
											sourcePixel = tmp50;
										}
										;break;
										case (int)1: {
											HX_STACK_LINE(216)
											int tmp33 = ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + ((sourcePosition + (int)1))));		HX_STACK_VAR(tmp33,"tmp33");
											HX_STACK_LINE(216)
											Dynamic tmp34 = (int(tmp33) & int((int)255));		HX_STACK_VAR(tmp34,"tmp34");
											HX_STACK_LINE(216)
											int r = tmp34;		HX_STACK_VAR(r,"r");
											HX_STACK_LINE(216)
											int tmp35 = ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + ((sourcePosition + (int)2))));		HX_STACK_VAR(tmp35,"tmp35");
											HX_STACK_LINE(216)
											Dynamic tmp36 = (int(tmp35) & int((int)255));		HX_STACK_VAR(tmp36,"tmp36");
											HX_STACK_LINE(216)
											int g = tmp36;		HX_STACK_VAR(g,"g");
											HX_STACK_LINE(216)
											int tmp37 = ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + ((sourcePosition + (int)3))));		HX_STACK_VAR(tmp37,"tmp37");
											HX_STACK_LINE(216)
											Dynamic tmp38 = (int(tmp37) & int((int)255));		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(216)
											int b = tmp38;		HX_STACK_VAR(b,"b");
											HX_STACK_LINE(216)
											int tmp39 = ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + sourcePosition));		HX_STACK_VAR(tmp39,"tmp39");
											HX_STACK_LINE(216)
											Dynamic tmp40 = (int(tmp39) & int((int)255));		HX_STACK_VAR(tmp40,"tmp40");
											HX_STACK_LINE(216)
											int a = tmp40;		HX_STACK_VAR(a,"a");
											HX_STACK_LINE(216)
											int tmp41 = (int(r) & int((int)255));		HX_STACK_VAR(tmp41,"tmp41");
											HX_STACK_LINE(216)
											int tmp42 = (int(tmp41) << int((int)24));		HX_STACK_VAR(tmp42,"tmp42");
											HX_STACK_LINE(216)
											int tmp43 = (int(g) & int((int)255));		HX_STACK_VAR(tmp43,"tmp43");
											HX_STACK_LINE(216)
											int tmp44 = (int(tmp43) << int((int)16));		HX_STACK_VAR(tmp44,"tmp44");
											HX_STACK_LINE(216)
											int tmp45 = (int(tmp42) | int(tmp44));		HX_STACK_VAR(tmp45,"tmp45");
											HX_STACK_LINE(216)
											int tmp46 = (int(b) & int((int)255));		HX_STACK_VAR(tmp46,"tmp46");
											HX_STACK_LINE(216)
											int tmp47 = (int(tmp46) << int((int)8));		HX_STACK_VAR(tmp47,"tmp47");
											HX_STACK_LINE(216)
											int tmp48 = (int(tmp45) | int(tmp47));		HX_STACK_VAR(tmp48,"tmp48");
											HX_STACK_LINE(216)
											int tmp49 = (int(a) & int((int)255));		HX_STACK_VAR(tmp49,"tmp49");
											HX_STACK_LINE(216)
											int tmp50 = (int(tmp48) | int(tmp49));		HX_STACK_VAR(tmp50,"tmp50");
											HX_STACK_LINE(216)
											sourcePixel = tmp50;
										}
										;break;
									}
									HX_STACK_LINE(216)
									bool tmp33 = sourcePremultiplied;		HX_STACK_VAR(tmp33,"tmp33");
									HX_STACK_LINE(216)
									if ((tmp33)){
										HX_STACK_LINE(216)
										int tmp34 = (int(sourcePixel) & int((int)255));		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(216)
										bool tmp35 = (tmp34 != (int)0);		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(216)
										bool tmp36;		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(216)
										if ((tmp35)){
											HX_STACK_LINE(216)
											int tmp37 = (int(sourcePixel) & int((int)255));		HX_STACK_VAR(tmp37,"tmp37");
											HX_STACK_LINE(216)
											int tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(216)
											tmp36 = (tmp38 != (int)255);
										}
										else{
											HX_STACK_LINE(216)
											tmp36 = false;
										}
										HX_STACK_LINE(216)
										if ((tmp36)){
											HX_STACK_LINE(216)
											int tmp37 = (int(sourcePixel) & int((int)255));		HX_STACK_VAR(tmp37,"tmp37");
											HX_STACK_LINE(216)
											Float tmp38 = (Float(((Float)255.0)) / Float(tmp37));		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(216)
											::lime::math::color::_RGBA::RGBA_Impl__obj::unmult = tmp38;
											HX_STACK_LINE(216)
											{
												HX_STACK_LINE(216)
												Dynamic tmp39;		HX_STACK_VAR(tmp39,"tmp39");
												HX_STACK_LINE(216)
												{
													HX_STACK_LINE(216)
													::lime::utils::ArrayBufferView tmp40 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp40,"tmp40");
													HX_STACK_LINE(216)
													::lime::utils::ArrayBufferView this1 = tmp40;		HX_STACK_VAR(this1,"this1");
													HX_STACK_LINE(216)
													int tmp41 = (int(sourcePixel) >> int((int)24));		HX_STACK_VAR(tmp41,"tmp41");
													HX_STACK_LINE(216)
													int tmp42 = (int(tmp41) & int((int)255));		HX_STACK_VAR(tmp42,"tmp42");
													HX_STACK_LINE(216)
													Float tmp43 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;		HX_STACK_VAR(tmp43,"tmp43");
													HX_STACK_LINE(216)
													Float tmp44 = (tmp42 * tmp43);		HX_STACK_VAR(tmp44,"tmp44");
													HX_STACK_LINE(216)
													int tmp45 = ::Math_obj::round(tmp44);		HX_STACK_VAR(tmp45,"tmp45");
													HX_STACK_LINE(216)
													int idx = tmp45;		HX_STACK_VAR(idx,"idx");
													HX_STACK_LINE(216)
													int tmp46 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp46,"tmp46");
													HX_STACK_LINE(216)
													tmp39 = (int(tmp46) & int((int)255));
												}
												HX_STACK_LINE(216)
												int r = tmp39;		HX_STACK_VAR(r,"r");
												HX_STACK_LINE(216)
												Dynamic tmp40;		HX_STACK_VAR(tmp40,"tmp40");
												HX_STACK_LINE(216)
												{
													HX_STACK_LINE(216)
													::lime::utils::ArrayBufferView tmp41 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp41,"tmp41");
													HX_STACK_LINE(216)
													::lime::utils::ArrayBufferView this1 = tmp41;		HX_STACK_VAR(this1,"this1");
													HX_STACK_LINE(216)
													int tmp42 = (int(sourcePixel) >> int((int)16));		HX_STACK_VAR(tmp42,"tmp42");
													HX_STACK_LINE(216)
													int tmp43 = (int(tmp42) & int((int)255));		HX_STACK_VAR(tmp43,"tmp43");
													HX_STACK_LINE(216)
													Float tmp44 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;		HX_STACK_VAR(tmp44,"tmp44");
													HX_STACK_LINE(216)
													Float tmp45 = (tmp43 * tmp44);		HX_STACK_VAR(tmp45,"tmp45");
													HX_STACK_LINE(216)
													int tmp46 = ::Math_obj::round(tmp45);		HX_STACK_VAR(tmp46,"tmp46");
													HX_STACK_LINE(216)
													int idx = tmp46;		HX_STACK_VAR(idx,"idx");
													HX_STACK_LINE(216)
													int tmp47 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp47,"tmp47");
													HX_STACK_LINE(216)
													tmp40 = (int(tmp47) & int((int)255));
												}
												HX_STACK_LINE(216)
												int g = tmp40;		HX_STACK_VAR(g,"g");
												HX_STACK_LINE(216)
												Dynamic tmp41;		HX_STACK_VAR(tmp41,"tmp41");
												HX_STACK_LINE(216)
												{
													HX_STACK_LINE(216)
													::lime::utils::ArrayBufferView tmp42 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp42,"tmp42");
													HX_STACK_LINE(216)
													::lime::utils::ArrayBufferView this1 = tmp42;		HX_STACK_VAR(this1,"this1");
													HX_STACK_LINE(216)
													int tmp43 = (int(sourcePixel) >> int((int)8));		HX_STACK_VAR(tmp43,"tmp43");
													HX_STACK_LINE(216)
													int tmp44 = (int(tmp43) & int((int)255));		HX_STACK_VAR(tmp44,"tmp44");
													HX_STACK_LINE(216)
													Float tmp45 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;		HX_STACK_VAR(tmp45,"tmp45");
													HX_STACK_LINE(216)
													Float tmp46 = (tmp44 * tmp45);		HX_STACK_VAR(tmp46,"tmp46");
													HX_STACK_LINE(216)
													int tmp47 = ::Math_obj::round(tmp46);		HX_STACK_VAR(tmp47,"tmp47");
													HX_STACK_LINE(216)
													int idx = tmp47;		HX_STACK_VAR(idx,"idx");
													HX_STACK_LINE(216)
													int tmp48 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp48,"tmp48");
													HX_STACK_LINE(216)
													tmp41 = (int(tmp48) & int((int)255));
												}
												HX_STACK_LINE(216)
												int b = tmp41;		HX_STACK_VAR(b,"b");
												HX_STACK_LINE(216)
												int tmp42 = (int(r) & int((int)255));		HX_STACK_VAR(tmp42,"tmp42");
												HX_STACK_LINE(216)
												int tmp43 = (int(tmp42) << int((int)24));		HX_STACK_VAR(tmp43,"tmp43");
												HX_STACK_LINE(216)
												int tmp44 = (int(g) & int((int)255));		HX_STACK_VAR(tmp44,"tmp44");
												HX_STACK_LINE(216)
												int tmp45 = (int(tmp44) << int((int)16));		HX_STACK_VAR(tmp45,"tmp45");
												HX_STACK_LINE(216)
												int tmp46 = (int(tmp43) | int(tmp45));		HX_STACK_VAR(tmp46,"tmp46");
												HX_STACK_LINE(216)
												int tmp47 = (int(b) & int((int)255));		HX_STACK_VAR(tmp47,"tmp47");
												HX_STACK_LINE(216)
												int tmp48 = (int(tmp47) << int((int)8));		HX_STACK_VAR(tmp48,"tmp48");
												HX_STACK_LINE(216)
												int tmp49 = (int(tmp46) | int(tmp48));		HX_STACK_VAR(tmp49,"tmp49");
												HX_STACK_LINE(216)
												int tmp50 = (int(sourcePixel) & int((int)255));		HX_STACK_VAR(tmp50,"tmp50");
												HX_STACK_LINE(216)
												int tmp51 = (int(tmp50) & int((int)255));		HX_STACK_VAR(tmp51,"tmp51");
												HX_STACK_LINE(216)
												int tmp52 = (int(tmp49) | int(tmp51));		HX_STACK_VAR(tmp52,"tmp52");
												HX_STACK_LINE(216)
												sourcePixel = tmp52;
											}
										}
									}
								}
								HX_STACK_LINE(217)
								{
									HX_STACK_LINE(217)
									int tmp32 = destFormat;		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(217)
									switch( (int)(tmp32)){
										case (int)2: {
											HX_STACK_LINE(217)
											int tmp33 = ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)2))));		HX_STACK_VAR(tmp33,"tmp33");
											HX_STACK_LINE(217)
											Dynamic tmp34 = (int(tmp33) & int((int)255));		HX_STACK_VAR(tmp34,"tmp34");
											HX_STACK_LINE(217)
											int r = tmp34;		HX_STACK_VAR(r,"r");
											HX_STACK_LINE(217)
											int tmp35 = ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)1))));		HX_STACK_VAR(tmp35,"tmp35");
											HX_STACK_LINE(217)
											Dynamic tmp36 = (int(tmp35) & int((int)255));		HX_STACK_VAR(tmp36,"tmp36");
											HX_STACK_LINE(217)
											int g = tmp36;		HX_STACK_VAR(g,"g");
											HX_STACK_LINE(217)
											int tmp37 = ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + destPosition));		HX_STACK_VAR(tmp37,"tmp37");
											HX_STACK_LINE(217)
											Dynamic tmp38 = (int(tmp37) & int((int)255));		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(217)
											int b = tmp38;		HX_STACK_VAR(b,"b");
											HX_STACK_LINE(217)
											int tmp39 = ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)3))));		HX_STACK_VAR(tmp39,"tmp39");
											HX_STACK_LINE(217)
											Dynamic tmp40 = (int(tmp39) & int((int)255));		HX_STACK_VAR(tmp40,"tmp40");
											HX_STACK_LINE(217)
											int a = tmp40;		HX_STACK_VAR(a,"a");
											HX_STACK_LINE(217)
											int tmp41 = (int(r) & int((int)255));		HX_STACK_VAR(tmp41,"tmp41");
											HX_STACK_LINE(217)
											int tmp42 = (int(tmp41) << int((int)24));		HX_STACK_VAR(tmp42,"tmp42");
											HX_STACK_LINE(217)
											int tmp43 = (int(g) & int((int)255));		HX_STACK_VAR(tmp43,"tmp43");
											HX_STACK_LINE(217)
											int tmp44 = (int(tmp43) << int((int)16));		HX_STACK_VAR(tmp44,"tmp44");
											HX_STACK_LINE(217)
											int tmp45 = (int(tmp42) | int(tmp44));		HX_STACK_VAR(tmp45,"tmp45");
											HX_STACK_LINE(217)
											int tmp46 = (int(b) & int((int)255));		HX_STACK_VAR(tmp46,"tmp46");
											HX_STACK_LINE(217)
											int tmp47 = (int(tmp46) << int((int)8));		HX_STACK_VAR(tmp47,"tmp47");
											HX_STACK_LINE(217)
											int tmp48 = (int(tmp45) | int(tmp47));		HX_STACK_VAR(tmp48,"tmp48");
											HX_STACK_LINE(217)
											int tmp49 = (int(a) & int((int)255));		HX_STACK_VAR(tmp49,"tmp49");
											HX_STACK_LINE(217)
											int tmp50 = (int(tmp48) | int(tmp49));		HX_STACK_VAR(tmp50,"tmp50");
											HX_STACK_LINE(217)
											destPixel = tmp50;
										}
										;break;
										case (int)0: {
											HX_STACK_LINE(217)
											int tmp33 = ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + destPosition));		HX_STACK_VAR(tmp33,"tmp33");
											HX_STACK_LINE(217)
											Dynamic tmp34 = (int(tmp33) & int((int)255));		HX_STACK_VAR(tmp34,"tmp34");
											HX_STACK_LINE(217)
											int r = tmp34;		HX_STACK_VAR(r,"r");
											HX_STACK_LINE(217)
											int tmp35 = ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)1))));		HX_STACK_VAR(tmp35,"tmp35");
											HX_STACK_LINE(217)
											Dynamic tmp36 = (int(tmp35) & int((int)255));		HX_STACK_VAR(tmp36,"tmp36");
											HX_STACK_LINE(217)
											int g = tmp36;		HX_STACK_VAR(g,"g");
											HX_STACK_LINE(217)
											int tmp37 = ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)2))));		HX_STACK_VAR(tmp37,"tmp37");
											HX_STACK_LINE(217)
											Dynamic tmp38 = (int(tmp37) & int((int)255));		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(217)
											int b = tmp38;		HX_STACK_VAR(b,"b");
											HX_STACK_LINE(217)
											int tmp39 = ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)3))));		HX_STACK_VAR(tmp39,"tmp39");
											HX_STACK_LINE(217)
											Dynamic tmp40 = (int(tmp39) & int((int)255));		HX_STACK_VAR(tmp40,"tmp40");
											HX_STACK_LINE(217)
											int a = tmp40;		HX_STACK_VAR(a,"a");
											HX_STACK_LINE(217)
											int tmp41 = (int(r) & int((int)255));		HX_STACK_VAR(tmp41,"tmp41");
											HX_STACK_LINE(217)
											int tmp42 = (int(tmp41) << int((int)24));		HX_STACK_VAR(tmp42,"tmp42");
											HX_STACK_LINE(217)
											int tmp43 = (int(g) & int((int)255));		HX_STACK_VAR(tmp43,"tmp43");
											HX_STACK_LINE(217)
											int tmp44 = (int(tmp43) << int((int)16));		HX_STACK_VAR(tmp44,"tmp44");
											HX_STACK_LINE(217)
											int tmp45 = (int(tmp42) | int(tmp44));		HX_STACK_VAR(tmp45,"tmp45");
											HX_STACK_LINE(217)
											int tmp46 = (int(b) & int((int)255));		HX_STACK_VAR(tmp46,"tmp46");
											HX_STACK_LINE(217)
											int tmp47 = (int(tmp46) << int((int)8));		HX_STACK_VAR(tmp47,"tmp47");
											HX_STACK_LINE(217)
											int tmp48 = (int(tmp45) | int(tmp47));		HX_STACK_VAR(tmp48,"tmp48");
											HX_STACK_LINE(217)
											int tmp49 = (int(a) & int((int)255));		HX_STACK_VAR(tmp49,"tmp49");
											HX_STACK_LINE(217)
											int tmp50 = (int(tmp48) | int(tmp49));		HX_STACK_VAR(tmp50,"tmp50");
											HX_STACK_LINE(217)
											destPixel = tmp50;
										}
										;break;
										case (int)1: {
											HX_STACK_LINE(217)
											int tmp33 = ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)1))));		HX_STACK_VAR(tmp33,"tmp33");
											HX_STACK_LINE(217)
											Dynamic tmp34 = (int(tmp33) & int((int)255));		HX_STACK_VAR(tmp34,"tmp34");
											HX_STACK_LINE(217)
											int r = tmp34;		HX_STACK_VAR(r,"r");
											HX_STACK_LINE(217)
											int tmp35 = ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)2))));		HX_STACK_VAR(tmp35,"tmp35");
											HX_STACK_LINE(217)
											Dynamic tmp36 = (int(tmp35) & int((int)255));		HX_STACK_VAR(tmp36,"tmp36");
											HX_STACK_LINE(217)
											int g = tmp36;		HX_STACK_VAR(g,"g");
											HX_STACK_LINE(217)
											int tmp37 = ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)3))));		HX_STACK_VAR(tmp37,"tmp37");
											HX_STACK_LINE(217)
											Dynamic tmp38 = (int(tmp37) & int((int)255));		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(217)
											int b = tmp38;		HX_STACK_VAR(b,"b");
											HX_STACK_LINE(217)
											int tmp39 = ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + destPosition));		HX_STACK_VAR(tmp39,"tmp39");
											HX_STACK_LINE(217)
											Dynamic tmp40 = (int(tmp39) & int((int)255));		HX_STACK_VAR(tmp40,"tmp40");
											HX_STACK_LINE(217)
											int a = tmp40;		HX_STACK_VAR(a,"a");
											HX_STACK_LINE(217)
											int tmp41 = (int(r) & int((int)255));		HX_STACK_VAR(tmp41,"tmp41");
											HX_STACK_LINE(217)
											int tmp42 = (int(tmp41) << int((int)24));		HX_STACK_VAR(tmp42,"tmp42");
											HX_STACK_LINE(217)
											int tmp43 = (int(g) & int((int)255));		HX_STACK_VAR(tmp43,"tmp43");
											HX_STACK_LINE(217)
											int tmp44 = (int(tmp43) << int((int)16));		HX_STACK_VAR(tmp44,"tmp44");
											HX_STACK_LINE(217)
											int tmp45 = (int(tmp42) | int(tmp44));		HX_STACK_VAR(tmp45,"tmp45");
											HX_STACK_LINE(217)
											int tmp46 = (int(b) & int((int)255));		HX_STACK_VAR(tmp46,"tmp46");
											HX_STACK_LINE(217)
											int tmp47 = (int(tmp46) << int((int)8));		HX_STACK_VAR(tmp47,"tmp47");
											HX_STACK_LINE(217)
											int tmp48 = (int(tmp45) | int(tmp47));		HX_STACK_VAR(tmp48,"tmp48");
											HX_STACK_LINE(217)
											int tmp49 = (int(a) & int((int)255));		HX_STACK_VAR(tmp49,"tmp49");
											HX_STACK_LINE(217)
											int tmp50 = (int(tmp48) | int(tmp49));		HX_STACK_VAR(tmp50,"tmp50");
											HX_STACK_LINE(217)
											destPixel = tmp50;
										}
										;break;
									}
									HX_STACK_LINE(217)
									bool tmp33 = destPremultiplied;		HX_STACK_VAR(tmp33,"tmp33");
									HX_STACK_LINE(217)
									if ((tmp33)){
										HX_STACK_LINE(217)
										int tmp34 = (int(destPixel) & int((int)255));		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(217)
										bool tmp35 = (tmp34 != (int)0);		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(217)
										bool tmp36;		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(217)
										if ((tmp35)){
											HX_STACK_LINE(217)
											int tmp37 = (int(destPixel) & int((int)255));		HX_STACK_VAR(tmp37,"tmp37");
											HX_STACK_LINE(217)
											int tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(217)
											tmp36 = (tmp38 != (int)255);
										}
										else{
											HX_STACK_LINE(217)
											tmp36 = false;
										}
										HX_STACK_LINE(217)
										if ((tmp36)){
											HX_STACK_LINE(217)
											int tmp37 = (int(destPixel) & int((int)255));		HX_STACK_VAR(tmp37,"tmp37");
											HX_STACK_LINE(217)
											Float tmp38 = (Float(((Float)255.0)) / Float(tmp37));		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(217)
											::lime::math::color::_RGBA::RGBA_Impl__obj::unmult = tmp38;
											HX_STACK_LINE(217)
											{
												HX_STACK_LINE(217)
												Dynamic tmp39;		HX_STACK_VAR(tmp39,"tmp39");
												HX_STACK_LINE(217)
												{
													HX_STACK_LINE(217)
													::lime::utils::ArrayBufferView tmp40 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp40,"tmp40");
													HX_STACK_LINE(217)
													::lime::utils::ArrayBufferView this1 = tmp40;		HX_STACK_VAR(this1,"this1");
													HX_STACK_LINE(217)
													int tmp41 = (int(destPixel) >> int((int)24));		HX_STACK_VAR(tmp41,"tmp41");
													HX_STACK_LINE(217)
													int tmp42 = (int(tmp41) & int((int)255));		HX_STACK_VAR(tmp42,"tmp42");
													HX_STACK_LINE(217)
													Float tmp43 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;		HX_STACK_VAR(tmp43,"tmp43");
													HX_STACK_LINE(217)
													Float tmp44 = (tmp42 * tmp43);		HX_STACK_VAR(tmp44,"tmp44");
													HX_STACK_LINE(217)
													int tmp45 = ::Math_obj::round(tmp44);		HX_STACK_VAR(tmp45,"tmp45");
													HX_STACK_LINE(217)
													int idx = tmp45;		HX_STACK_VAR(idx,"idx");
													HX_STACK_LINE(217)
													int tmp46 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp46,"tmp46");
													HX_STACK_LINE(217)
													tmp39 = (int(tmp46) & int((int)255));
												}
												HX_STACK_LINE(217)
												int r = tmp39;		HX_STACK_VAR(r,"r");
												HX_STACK_LINE(217)
												Dynamic tmp40;		HX_STACK_VAR(tmp40,"tmp40");
												HX_STACK_LINE(217)
												{
													HX_STACK_LINE(217)
													::lime::utils::ArrayBufferView tmp41 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp41,"tmp41");
													HX_STACK_LINE(217)
													::lime::utils::ArrayBufferView this1 = tmp41;		HX_STACK_VAR(this1,"this1");
													HX_STACK_LINE(217)
													int tmp42 = (int(destPixel) >> int((int)16));		HX_STACK_VAR(tmp42,"tmp42");
													HX_STACK_LINE(217)
													int tmp43 = (int(tmp42) & int((int)255));		HX_STACK_VAR(tmp43,"tmp43");
													HX_STACK_LINE(217)
													Float tmp44 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;		HX_STACK_VAR(tmp44,"tmp44");
													HX_STACK_LINE(217)
													Float tmp45 = (tmp43 * tmp44);		HX_STACK_VAR(tmp45,"tmp45");
													HX_STACK_LINE(217)
													int tmp46 = ::Math_obj::round(tmp45);		HX_STACK_VAR(tmp46,"tmp46");
													HX_STACK_LINE(217)
													int idx = tmp46;		HX_STACK_VAR(idx,"idx");
													HX_STACK_LINE(217)
													int tmp47 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp47,"tmp47");
													HX_STACK_LINE(217)
													tmp40 = (int(tmp47) & int((int)255));
												}
												HX_STACK_LINE(217)
												int g = tmp40;		HX_STACK_VAR(g,"g");
												HX_STACK_LINE(217)
												Dynamic tmp41;		HX_STACK_VAR(tmp41,"tmp41");
												HX_STACK_LINE(217)
												{
													HX_STACK_LINE(217)
													::lime::utils::ArrayBufferView tmp42 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp42,"tmp42");
													HX_STACK_LINE(217)
													::lime::utils::ArrayBufferView this1 = tmp42;		HX_STACK_VAR(this1,"this1");
													HX_STACK_LINE(217)
													int tmp43 = (int(destPixel) >> int((int)8));		HX_STACK_VAR(tmp43,"tmp43");
													HX_STACK_LINE(217)
													int tmp44 = (int(tmp43) & int((int)255));		HX_STACK_VAR(tmp44,"tmp44");
													HX_STACK_LINE(217)
													Float tmp45 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;		HX_STACK_VAR(tmp45,"tmp45");
													HX_STACK_LINE(217)
													Float tmp46 = (tmp44 * tmp45);		HX_STACK_VAR(tmp46,"tmp46");
													HX_STACK_LINE(217)
													int tmp47 = ::Math_obj::round(tmp46);		HX_STACK_VAR(tmp47,"tmp47");
													HX_STACK_LINE(217)
													int idx = tmp47;		HX_STACK_VAR(idx,"idx");
													HX_STACK_LINE(217)
													int tmp48 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp48,"tmp48");
													HX_STACK_LINE(217)
													tmp41 = (int(tmp48) & int((int)255));
												}
												HX_STACK_LINE(217)
												int b = tmp41;		HX_STACK_VAR(b,"b");
												HX_STACK_LINE(217)
												int tmp42 = (int(r) & int((int)255));		HX_STACK_VAR(tmp42,"tmp42");
												HX_STACK_LINE(217)
												int tmp43 = (int(tmp42) << int((int)24));		HX_STACK_VAR(tmp43,"tmp43");
												HX_STACK_LINE(217)
												int tmp44 = (int(g) & int((int)255));		HX_STACK_VAR(tmp44,"tmp44");
												HX_STACK_LINE(217)
												int tmp45 = (int(tmp44) << int((int)16));		HX_STACK_VAR(tmp45,"tmp45");
												HX_STACK_LINE(217)
												int tmp46 = (int(tmp43) | int(tmp45));		HX_STACK_VAR(tmp46,"tmp46");
												HX_STACK_LINE(217)
												int tmp47 = (int(b) & int((int)255));		HX_STACK_VAR(tmp47,"tmp47");
												HX_STACK_LINE(217)
												int tmp48 = (int(tmp47) << int((int)8));		HX_STACK_VAR(tmp48,"tmp48");
												HX_STACK_LINE(217)
												int tmp49 = (int(tmp46) | int(tmp48));		HX_STACK_VAR(tmp49,"tmp49");
												HX_STACK_LINE(217)
												int tmp50 = (int(destPixel) & int((int)255));		HX_STACK_VAR(tmp50,"tmp50");
												HX_STACK_LINE(217)
												int tmp51 = (int(tmp50) & int((int)255));		HX_STACK_VAR(tmp51,"tmp51");
												HX_STACK_LINE(217)
												int tmp52 = (int(tmp49) | int(tmp51));		HX_STACK_VAR(tmp52,"tmp52");
												HX_STACK_LINE(217)
												destPixel = tmp52;
											}
										}
									}
								}
								HX_STACK_LINE(219)
								int tmp32 = (int(sourcePixel) & int((int)255));		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(219)
								Float tmp33 = (Float(tmp32) / Float(((Float)255.0)));		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(219)
								sourceAlpha = tmp33;
								HX_STACK_LINE(220)
								int tmp34 = (int(destPixel) & int((int)255));		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(220)
								Float tmp35 = (Float(tmp34) / Float(((Float)255.0)));		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(220)
								destAlpha = tmp35;
								HX_STACK_LINE(221)
								Float tmp36 = ((int)1 - sourceAlpha);		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(221)
								oneMinusSourceAlpha = tmp36;
								HX_STACK_LINE(222)
								Float tmp37 = sourceAlpha;		HX_STACK_VAR(tmp37,"tmp37");
								HX_STACK_LINE(222)
								Float tmp38 = (destAlpha * oneMinusSourceAlpha);		HX_STACK_VAR(tmp38,"tmp38");
								HX_STACK_LINE(222)
								Float tmp39 = (tmp37 + tmp38);		HX_STACK_VAR(tmp39,"tmp39");
								HX_STACK_LINE(222)
								blendAlpha = tmp39;
								HX_STACK_LINE(224)
								bool tmp40 = (blendAlpha == (int)0);		HX_STACK_VAR(tmp40,"tmp40");
								HX_STACK_LINE(224)
								if ((tmp40)){
									HX_STACK_LINE(226)
									destPixel = (int)0;
								}
								else{
									HX_STACK_LINE(230)
									{
										HX_STACK_LINE(230)
										Dynamic tmp41;		HX_STACK_VAR(tmp41,"tmp41");
										HX_STACK_LINE(230)
										{
											HX_STACK_LINE(230)
											::lime::utils::ArrayBufferView tmp42 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp42,"tmp42");
											HX_STACK_LINE(230)
											::lime::utils::ArrayBufferView this1 = tmp42;		HX_STACK_VAR(this1,"this1");
											HX_STACK_LINE(230)
											int tmp43 = (int(sourcePixel) >> int((int)24));		HX_STACK_VAR(tmp43,"tmp43");
											HX_STACK_LINE(230)
											int tmp44 = (int(tmp43) & int((int)255));		HX_STACK_VAR(tmp44,"tmp44");
											HX_STACK_LINE(230)
											Float tmp45 = sourceAlpha;		HX_STACK_VAR(tmp45,"tmp45");
											HX_STACK_LINE(230)
											Float tmp46 = (tmp44 * tmp45);		HX_STACK_VAR(tmp46,"tmp46");
											HX_STACK_LINE(230)
											int tmp47 = (int(destPixel) >> int((int)24));		HX_STACK_VAR(tmp47,"tmp47");
											HX_STACK_LINE(230)
											int tmp48 = (int(tmp47) & int((int)255));		HX_STACK_VAR(tmp48,"tmp48");
											HX_STACK_LINE(230)
											Float tmp49 = destAlpha;		HX_STACK_VAR(tmp49,"tmp49");
											HX_STACK_LINE(230)
											Float tmp50 = (tmp48 * tmp49);		HX_STACK_VAR(tmp50,"tmp50");
											HX_STACK_LINE(230)
											Float tmp51 = oneMinusSourceAlpha;		HX_STACK_VAR(tmp51,"tmp51");
											HX_STACK_LINE(230)
											Float tmp52 = (tmp50 * tmp51);		HX_STACK_VAR(tmp52,"tmp52");
											HX_STACK_LINE(230)
											Float tmp53 = (tmp46 + tmp52);		HX_STACK_VAR(tmp53,"tmp53");
											HX_STACK_LINE(230)
											Float tmp54 = blendAlpha;		HX_STACK_VAR(tmp54,"tmp54");
											HX_STACK_LINE(230)
											Float tmp55 = (Float(tmp53) / Float(tmp54));		HX_STACK_VAR(tmp55,"tmp55");
											HX_STACK_LINE(230)
											int tmp56 = ::Math_obj::round(tmp55);		HX_STACK_VAR(tmp56,"tmp56");
											HX_STACK_LINE(230)
											int idx = tmp56;		HX_STACK_VAR(idx,"idx");
											HX_STACK_LINE(230)
											int tmp57 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp57,"tmp57");
											HX_STACK_LINE(230)
											tmp41 = (int(tmp57) & int((int)255));
										}
										HX_STACK_LINE(230)
										int value = tmp41;		HX_STACK_VAR(value,"value");
										HX_STACK_LINE(230)
										{
											HX_STACK_LINE(230)
											int tmp42 = (int(value) & int((int)255));		HX_STACK_VAR(tmp42,"tmp42");
											HX_STACK_LINE(230)
											int tmp43 = (int(tmp42) << int((int)24));		HX_STACK_VAR(tmp43,"tmp43");
											HX_STACK_LINE(230)
											int tmp44 = (int(destPixel) >> int((int)16));		HX_STACK_VAR(tmp44,"tmp44");
											HX_STACK_LINE(230)
											int tmp45 = (int(tmp44) & int((int)255));		HX_STACK_VAR(tmp45,"tmp45");
											HX_STACK_LINE(230)
											int tmp46 = (int(tmp45) & int((int)255));		HX_STACK_VAR(tmp46,"tmp46");
											HX_STACK_LINE(230)
											int tmp47 = (int(tmp46) << int((int)16));		HX_STACK_VAR(tmp47,"tmp47");
											HX_STACK_LINE(230)
											int tmp48 = (int(tmp43) | int(tmp47));		HX_STACK_VAR(tmp48,"tmp48");
											HX_STACK_LINE(230)
											int tmp49 = (int(destPixel) >> int((int)8));		HX_STACK_VAR(tmp49,"tmp49");
											HX_STACK_LINE(230)
											int tmp50 = (int(tmp49) & int((int)255));		HX_STACK_VAR(tmp50,"tmp50");
											HX_STACK_LINE(230)
											int tmp51 = (int(tmp50) & int((int)255));		HX_STACK_VAR(tmp51,"tmp51");
											HX_STACK_LINE(230)
											int tmp52 = (int(tmp51) << int((int)8));		HX_STACK_VAR(tmp52,"tmp52");
											HX_STACK_LINE(230)
											int tmp53 = (int(tmp48) | int(tmp52));		HX_STACK_VAR(tmp53,"tmp53");
											HX_STACK_LINE(230)
											int tmp54 = (int(destPixel) & int((int)255));		HX_STACK_VAR(tmp54,"tmp54");
											HX_STACK_LINE(230)
											int tmp55 = (int(tmp54) & int((int)255));		HX_STACK_VAR(tmp55,"tmp55");
											HX_STACK_LINE(230)
											int tmp56 = (int(tmp53) | int(tmp55));		HX_STACK_VAR(tmp56,"tmp56");
											HX_STACK_LINE(230)
											destPixel = tmp56;
										}
										HX_STACK_LINE(230)
										value;
									}
									HX_STACK_LINE(231)
									{
										HX_STACK_LINE(231)
										Dynamic tmp41;		HX_STACK_VAR(tmp41,"tmp41");
										HX_STACK_LINE(231)
										{
											HX_STACK_LINE(231)
											::lime::utils::ArrayBufferView tmp42 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp42,"tmp42");
											HX_STACK_LINE(231)
											::lime::utils::ArrayBufferView this1 = tmp42;		HX_STACK_VAR(this1,"this1");
											HX_STACK_LINE(231)
											int tmp43 = (int(sourcePixel) >> int((int)16));		HX_STACK_VAR(tmp43,"tmp43");
											HX_STACK_LINE(231)
											int tmp44 = (int(tmp43) & int((int)255));		HX_STACK_VAR(tmp44,"tmp44");
											HX_STACK_LINE(231)
											Float tmp45 = sourceAlpha;		HX_STACK_VAR(tmp45,"tmp45");
											HX_STACK_LINE(231)
											Float tmp46 = (tmp44 * tmp45);		HX_STACK_VAR(tmp46,"tmp46");
											HX_STACK_LINE(231)
											int tmp47 = (int(destPixel) >> int((int)16));		HX_STACK_VAR(tmp47,"tmp47");
											HX_STACK_LINE(231)
											int tmp48 = (int(tmp47) & int((int)255));		HX_STACK_VAR(tmp48,"tmp48");
											HX_STACK_LINE(231)
											Float tmp49 = destAlpha;		HX_STACK_VAR(tmp49,"tmp49");
											HX_STACK_LINE(231)
											Float tmp50 = (tmp48 * tmp49);		HX_STACK_VAR(tmp50,"tmp50");
											HX_STACK_LINE(231)
											Float tmp51 = oneMinusSourceAlpha;		HX_STACK_VAR(tmp51,"tmp51");
											HX_STACK_LINE(231)
											Float tmp52 = (tmp50 * tmp51);		HX_STACK_VAR(tmp52,"tmp52");
											HX_STACK_LINE(231)
											Float tmp53 = (tmp46 + tmp52);		HX_STACK_VAR(tmp53,"tmp53");
											HX_STACK_LINE(231)
											Float tmp54 = blendAlpha;		HX_STACK_VAR(tmp54,"tmp54");
											HX_STACK_LINE(231)
											Float tmp55 = (Float(tmp53) / Float(tmp54));		HX_STACK_VAR(tmp55,"tmp55");
											HX_STACK_LINE(231)
											int tmp56 = ::Math_obj::round(tmp55);		HX_STACK_VAR(tmp56,"tmp56");
											HX_STACK_LINE(231)
											int idx = tmp56;		HX_STACK_VAR(idx,"idx");
											HX_STACK_LINE(231)
											int tmp57 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp57,"tmp57");
											HX_STACK_LINE(231)
											tmp41 = (int(tmp57) & int((int)255));
										}
										HX_STACK_LINE(231)
										int value = tmp41;		HX_STACK_VAR(value,"value");
										HX_STACK_LINE(231)
										{
											HX_STACK_LINE(231)
											int tmp42 = (int(destPixel) >> int((int)24));		HX_STACK_VAR(tmp42,"tmp42");
											HX_STACK_LINE(231)
											int tmp43 = (int(tmp42) & int((int)255));		HX_STACK_VAR(tmp43,"tmp43");
											HX_STACK_LINE(231)
											int tmp44 = (int(tmp43) & int((int)255));		HX_STACK_VAR(tmp44,"tmp44");
											HX_STACK_LINE(231)
											int tmp45 = (int(tmp44) << int((int)24));		HX_STACK_VAR(tmp45,"tmp45");
											HX_STACK_LINE(231)
											int tmp46 = (int(value) & int((int)255));		HX_STACK_VAR(tmp46,"tmp46");
											HX_STACK_LINE(231)
											int tmp47 = (int(tmp46) << int((int)16));		HX_STACK_VAR(tmp47,"tmp47");
											HX_STACK_LINE(231)
											int tmp48 = (int(tmp45) | int(tmp47));		HX_STACK_VAR(tmp48,"tmp48");
											HX_STACK_LINE(231)
											int tmp49 = (int(destPixel) >> int((int)8));		HX_STACK_VAR(tmp49,"tmp49");
											HX_STACK_LINE(231)
											int tmp50 = (int(tmp49) & int((int)255));		HX_STACK_VAR(tmp50,"tmp50");
											HX_STACK_LINE(231)
											int tmp51 = (int(tmp50) & int((int)255));		HX_STACK_VAR(tmp51,"tmp51");
											HX_STACK_LINE(231)
											int tmp52 = (int(tmp51) << int((int)8));		HX_STACK_VAR(tmp52,"tmp52");
											HX_STACK_LINE(231)
											int tmp53 = (int(tmp48) | int(tmp52));		HX_STACK_VAR(tmp53,"tmp53");
											HX_STACK_LINE(231)
											int tmp54 = (int(destPixel) & int((int)255));		HX_STACK_VAR(tmp54,"tmp54");
											HX_STACK_LINE(231)
											int tmp55 = (int(tmp54) & int((int)255));		HX_STACK_VAR(tmp55,"tmp55");
											HX_STACK_LINE(231)
											int tmp56 = (int(tmp53) | int(tmp55));		HX_STACK_VAR(tmp56,"tmp56");
											HX_STACK_LINE(231)
											destPixel = tmp56;
										}
										HX_STACK_LINE(231)
										value;
									}
									HX_STACK_LINE(232)
									{
										HX_STACK_LINE(232)
										Dynamic tmp41;		HX_STACK_VAR(tmp41,"tmp41");
										HX_STACK_LINE(232)
										{
											HX_STACK_LINE(232)
											::lime::utils::ArrayBufferView tmp42 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp42,"tmp42");
											HX_STACK_LINE(232)
											::lime::utils::ArrayBufferView this1 = tmp42;		HX_STACK_VAR(this1,"this1");
											HX_STACK_LINE(232)
											int tmp43 = (int(sourcePixel) >> int((int)8));		HX_STACK_VAR(tmp43,"tmp43");
											HX_STACK_LINE(232)
											int tmp44 = (int(tmp43) & int((int)255));		HX_STACK_VAR(tmp44,"tmp44");
											HX_STACK_LINE(232)
											Float tmp45 = sourceAlpha;		HX_STACK_VAR(tmp45,"tmp45");
											HX_STACK_LINE(232)
											Float tmp46 = (tmp44 * tmp45);		HX_STACK_VAR(tmp46,"tmp46");
											HX_STACK_LINE(232)
											int tmp47 = (int(destPixel) >> int((int)8));		HX_STACK_VAR(tmp47,"tmp47");
											HX_STACK_LINE(232)
											int tmp48 = (int(tmp47) & int((int)255));		HX_STACK_VAR(tmp48,"tmp48");
											HX_STACK_LINE(232)
											Float tmp49 = destAlpha;		HX_STACK_VAR(tmp49,"tmp49");
											HX_STACK_LINE(232)
											Float tmp50 = (tmp48 * tmp49);		HX_STACK_VAR(tmp50,"tmp50");
											HX_STACK_LINE(232)
											Float tmp51 = oneMinusSourceAlpha;		HX_STACK_VAR(tmp51,"tmp51");
											HX_STACK_LINE(232)
											Float tmp52 = (tmp50 * tmp51);		HX_STACK_VAR(tmp52,"tmp52");
											HX_STACK_LINE(232)
											Float tmp53 = (tmp46 + tmp52);		HX_STACK_VAR(tmp53,"tmp53");
											HX_STACK_LINE(232)
											Float tmp54 = blendAlpha;		HX_STACK_VAR(tmp54,"tmp54");
											HX_STACK_LINE(232)
											Float tmp55 = (Float(tmp53) / Float(tmp54));		HX_STACK_VAR(tmp55,"tmp55");
											HX_STACK_LINE(232)
											int tmp56 = ::Math_obj::round(tmp55);		HX_STACK_VAR(tmp56,"tmp56");
											HX_STACK_LINE(232)
											int idx = tmp56;		HX_STACK_VAR(idx,"idx");
											HX_STACK_LINE(232)
											int tmp57 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp57,"tmp57");
											HX_STACK_LINE(232)
											tmp41 = (int(tmp57) & int((int)255));
										}
										HX_STACK_LINE(232)
										int value = tmp41;		HX_STACK_VAR(value,"value");
										HX_STACK_LINE(232)
										{
											HX_STACK_LINE(232)
											int tmp42 = (int(destPixel) >> int((int)24));		HX_STACK_VAR(tmp42,"tmp42");
											HX_STACK_LINE(232)
											int tmp43 = (int(tmp42) & int((int)255));		HX_STACK_VAR(tmp43,"tmp43");
											HX_STACK_LINE(232)
											int tmp44 = (int(tmp43) & int((int)255));		HX_STACK_VAR(tmp44,"tmp44");
											HX_STACK_LINE(232)
											int tmp45 = (int(tmp44) << int((int)24));		HX_STACK_VAR(tmp45,"tmp45");
											HX_STACK_LINE(232)
											int tmp46 = (int(destPixel) >> int((int)16));		HX_STACK_VAR(tmp46,"tmp46");
											HX_STACK_LINE(232)
											int tmp47 = (int(tmp46) & int((int)255));		HX_STACK_VAR(tmp47,"tmp47");
											HX_STACK_LINE(232)
											int tmp48 = (int(tmp47) & int((int)255));		HX_STACK_VAR(tmp48,"tmp48");
											HX_STACK_LINE(232)
											int tmp49 = (int(tmp48) << int((int)16));		HX_STACK_VAR(tmp49,"tmp49");
											HX_STACK_LINE(232)
											int tmp50 = (int(tmp45) | int(tmp49));		HX_STACK_VAR(tmp50,"tmp50");
											HX_STACK_LINE(232)
											int tmp51 = (int(value) & int((int)255));		HX_STACK_VAR(tmp51,"tmp51");
											HX_STACK_LINE(232)
											int tmp52 = (int(tmp51) << int((int)8));		HX_STACK_VAR(tmp52,"tmp52");
											HX_STACK_LINE(232)
											int tmp53 = (int(tmp50) | int(tmp52));		HX_STACK_VAR(tmp53,"tmp53");
											HX_STACK_LINE(232)
											int tmp54 = (int(destPixel) & int((int)255));		HX_STACK_VAR(tmp54,"tmp54");
											HX_STACK_LINE(232)
											int tmp55 = (int(tmp54) & int((int)255));		HX_STACK_VAR(tmp55,"tmp55");
											HX_STACK_LINE(232)
											int tmp56 = (int(tmp53) | int(tmp55));		HX_STACK_VAR(tmp56,"tmp56");
											HX_STACK_LINE(232)
											destPixel = tmp56;
										}
										HX_STACK_LINE(232)
										value;
									}
									HX_STACK_LINE(233)
									{
										HX_STACK_LINE(233)
										Dynamic tmp41;		HX_STACK_VAR(tmp41,"tmp41");
										HX_STACK_LINE(233)
										{
											HX_STACK_LINE(233)
											::lime::utils::ArrayBufferView tmp42 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp42,"tmp42");
											HX_STACK_LINE(233)
											::lime::utils::ArrayBufferView this1 = tmp42;		HX_STACK_VAR(this1,"this1");
											HX_STACK_LINE(233)
											Float tmp43 = (blendAlpha * ((Float)255.0));		HX_STACK_VAR(tmp43,"tmp43");
											HX_STACK_LINE(233)
											int tmp44 = ::Math_obj::round(tmp43);		HX_STACK_VAR(tmp44,"tmp44");
											HX_STACK_LINE(233)
											int idx = tmp44;		HX_STACK_VAR(idx,"idx");
											HX_STACK_LINE(233)
											int tmp45 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp45,"tmp45");
											HX_STACK_LINE(233)
											tmp41 = (int(tmp45) & int((int)255));
										}
										HX_STACK_LINE(233)
										int value = tmp41;		HX_STACK_VAR(value,"value");
										HX_STACK_LINE(233)
										{
											HX_STACK_LINE(233)
											int tmp42 = (int(destPixel) >> int((int)24));		HX_STACK_VAR(tmp42,"tmp42");
											HX_STACK_LINE(233)
											int tmp43 = (int(tmp42) & int((int)255));		HX_STACK_VAR(tmp43,"tmp43");
											HX_STACK_LINE(233)
											int tmp44 = (int(tmp43) & int((int)255));		HX_STACK_VAR(tmp44,"tmp44");
											HX_STACK_LINE(233)
											int tmp45 = (int(tmp44) << int((int)24));		HX_STACK_VAR(tmp45,"tmp45");
											HX_STACK_LINE(233)
											int tmp46 = (int(destPixel) >> int((int)16));		HX_STACK_VAR(tmp46,"tmp46");
											HX_STACK_LINE(233)
											int tmp47 = (int(tmp46) & int((int)255));		HX_STACK_VAR(tmp47,"tmp47");
											HX_STACK_LINE(233)
											int tmp48 = (int(tmp47) & int((int)255));		HX_STACK_VAR(tmp48,"tmp48");
											HX_STACK_LINE(233)
											int tmp49 = (int(tmp48) << int((int)16));		HX_STACK_VAR(tmp49,"tmp49");
											HX_STACK_LINE(233)
											int tmp50 = (int(tmp45) | int(tmp49));		HX_STACK_VAR(tmp50,"tmp50");
											HX_STACK_LINE(233)
											int tmp51 = (int(destPixel) >> int((int)8));		HX_STACK_VAR(tmp51,"tmp51");
											HX_STACK_LINE(233)
											int tmp52 = (int(tmp51) & int((int)255));		HX_STACK_VAR(tmp52,"tmp52");
											HX_STACK_LINE(233)
											int tmp53 = (int(tmp52) & int((int)255));		HX_STACK_VAR(tmp53,"tmp53");
											HX_STACK_LINE(233)
											int tmp54 = (int(tmp53) << int((int)8));		HX_STACK_VAR(tmp54,"tmp54");
											HX_STACK_LINE(233)
											int tmp55 = (int(tmp50) | int(tmp54));		HX_STACK_VAR(tmp55,"tmp55");
											HX_STACK_LINE(233)
											int tmp56 = (int(value) & int((int)255));		HX_STACK_VAR(tmp56,"tmp56");
											HX_STACK_LINE(233)
											int tmp57 = (int(tmp55) | int(tmp56));		HX_STACK_VAR(tmp57,"tmp57");
											HX_STACK_LINE(233)
											destPixel = tmp57;
										}
										HX_STACK_LINE(233)
										value;
									}
								}
								HX_STACK_LINE(237)
								{
									HX_STACK_LINE(237)
									bool tmp41 = destPremultiplied;		HX_STACK_VAR(tmp41,"tmp41");
									HX_STACK_LINE(237)
									if ((tmp41)){
										HX_STACK_LINE(237)
										int tmp42 = (int(destPixel) & int((int)255));		HX_STACK_VAR(tmp42,"tmp42");
										HX_STACK_LINE(237)
										bool tmp43 = (tmp42 == (int)0);		HX_STACK_VAR(tmp43,"tmp43");
										HX_STACK_LINE(237)
										if ((tmp43)){
											HX_STACK_LINE(237)
											bool tmp44 = (destPixel != (int)0);		HX_STACK_VAR(tmp44,"tmp44");
											HX_STACK_LINE(237)
											if ((tmp44)){
												HX_STACK_LINE(237)
												destPixel = (int)0;
											}
										}
										else{
											HX_STACK_LINE(237)
											int tmp44 = (int(destPixel) & int((int)255));		HX_STACK_VAR(tmp44,"tmp44");
											HX_STACK_LINE(237)
											bool tmp45 = (tmp44 != (int)255);		HX_STACK_VAR(tmp45,"tmp45");
											HX_STACK_LINE(237)
											if ((tmp45)){
												HX_STACK_LINE(237)
												Dynamic tmp46;		HX_STACK_VAR(tmp46,"tmp46");
												HX_STACK_LINE(237)
												{
													HX_STACK_LINE(237)
													::lime::utils::ArrayBufferView tmp47 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__alpha16;		HX_STACK_VAR(tmp47,"tmp47");
													HX_STACK_LINE(237)
													::lime::utils::ArrayBufferView this1 = tmp47;		HX_STACK_VAR(this1,"this1");
													HX_STACK_LINE(237)
													tmp46 = ::__hxcpp_memory_get_ui32(this1->buffer->b,(this1->byteOffset + (((int(destPixel) & int((int)255))) * (int)4)));
												}
												HX_STACK_LINE(237)
												::lime::math::color::_RGBA::RGBA_Impl__obj::a16 = tmp46;
												HX_STACK_LINE(237)
												{
													HX_STACK_LINE(237)
													int tmp47 = (int(destPixel) >> int((int)24));		HX_STACK_VAR(tmp47,"tmp47");
													HX_STACK_LINE(237)
													int tmp48 = (int(tmp47) & int((int)255));		HX_STACK_VAR(tmp48,"tmp48");
													HX_STACK_LINE(237)
													int tmp49 = ::lime::math::color::_RGBA::RGBA_Impl__obj::a16;		HX_STACK_VAR(tmp49,"tmp49");
													HX_STACK_LINE(237)
													int tmp50 = (tmp48 * tmp49);		HX_STACK_VAR(tmp50,"tmp50");
													HX_STACK_LINE(237)
													int tmp51 = (int(tmp50) >> int((int)16));		HX_STACK_VAR(tmp51,"tmp51");
													HX_STACK_LINE(237)
													int tmp52 = (int(tmp51) & int((int)255));		HX_STACK_VAR(tmp52,"tmp52");
													HX_STACK_LINE(237)
													int tmp53 = (int(tmp52) << int((int)24));		HX_STACK_VAR(tmp53,"tmp53");
													HX_STACK_LINE(237)
													int tmp54 = (int(destPixel) >> int((int)16));		HX_STACK_VAR(tmp54,"tmp54");
													HX_STACK_LINE(237)
													int tmp55 = (int(tmp54) & int((int)255));		HX_STACK_VAR(tmp55,"tmp55");
													HX_STACK_LINE(237)
													int tmp56 = ::lime::math::color::_RGBA::RGBA_Impl__obj::a16;		HX_STACK_VAR(tmp56,"tmp56");
													HX_STACK_LINE(237)
													int tmp57 = (tmp55 * tmp56);		HX_STACK_VAR(tmp57,"tmp57");
													HX_STACK_LINE(237)
													int tmp58 = (int(tmp57) >> int((int)16));		HX_STACK_VAR(tmp58,"tmp58");
													HX_STACK_LINE(237)
													int tmp59 = (int(tmp58) & int((int)255));		HX_STACK_VAR(tmp59,"tmp59");
													HX_STACK_LINE(237)
													int tmp60 = (int(tmp59) << int((int)16));		HX_STACK_VAR(tmp60,"tmp60");
													HX_STACK_LINE(237)
													int tmp61 = (int(tmp53) | int(tmp60));		HX_STACK_VAR(tmp61,"tmp61");
													HX_STACK_LINE(237)
													int tmp62 = (int(destPixel) >> int((int)8));		HX_STACK_VAR(tmp62,"tmp62");
													HX_STACK_LINE(237)
													int tmp63 = (int(tmp62) & int((int)255));		HX_STACK_VAR(tmp63,"tmp63");
													HX_STACK_LINE(237)
													int tmp64 = ::lime::math::color::_RGBA::RGBA_Impl__obj::a16;		HX_STACK_VAR(tmp64,"tmp64");
													HX_STACK_LINE(237)
													int tmp65 = (tmp63 * tmp64);		HX_STACK_VAR(tmp65,"tmp65");
													HX_STACK_LINE(237)
													int tmp66 = (int(tmp65) >> int((int)16));		HX_STACK_VAR(tmp66,"tmp66");
													HX_STACK_LINE(237)
													int tmp67 = (int(tmp66) & int((int)255));		HX_STACK_VAR(tmp67,"tmp67");
													HX_STACK_LINE(237)
													int tmp68 = (int(tmp67) << int((int)8));		HX_STACK_VAR(tmp68,"tmp68");
													HX_STACK_LINE(237)
													int tmp69 = (int(tmp61) | int(tmp68));		HX_STACK_VAR(tmp69,"tmp69");
													HX_STACK_LINE(237)
													int tmp70 = (int(destPixel) & int((int)255));		HX_STACK_VAR(tmp70,"tmp70");
													HX_STACK_LINE(237)
													int tmp71 = (int(tmp70) & int((int)255));		HX_STACK_VAR(tmp71,"tmp71");
													HX_STACK_LINE(237)
													int tmp72 = (int(tmp69) | int(tmp71));		HX_STACK_VAR(tmp72,"tmp72");
													HX_STACK_LINE(237)
													destPixel = tmp72;
												}
											}
										}
									}
									HX_STACK_LINE(237)
									int tmp42 = destFormat;		HX_STACK_VAR(tmp42,"tmp42");
									HX_STACK_LINE(237)
									switch( (int)(tmp42)){
										case (int)2: {
											HX_STACK_LINE(237)
											{
												HX_STACK_LINE(237)
												int tmp43 = (int(destPixel) >> int((int)8));		HX_STACK_VAR(tmp43,"tmp43");
												HX_STACK_LINE(237)
												int tmp44 = (int(tmp43) & int((int)255));		HX_STACK_VAR(tmp44,"tmp44");
												HX_STACK_LINE(237)
												int val = tmp44;		HX_STACK_VAR(val,"val");
												HX_STACK_LINE(237)
												::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + destPosition),val);
												HX_STACK_LINE(237)
												val;
											}
											HX_STACK_LINE(237)
											{
												HX_STACK_LINE(237)
												int tmp43 = (int(destPixel) >> int((int)16));		HX_STACK_VAR(tmp43,"tmp43");
												HX_STACK_LINE(237)
												int tmp44 = (int(tmp43) & int((int)255));		HX_STACK_VAR(tmp44,"tmp44");
												HX_STACK_LINE(237)
												int val = tmp44;		HX_STACK_VAR(val,"val");
												HX_STACK_LINE(237)
												::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)1))),val);
												HX_STACK_LINE(237)
												val;
											}
											HX_STACK_LINE(237)
											{
												HX_STACK_LINE(237)
												int tmp43 = (int(destPixel) >> int((int)24));		HX_STACK_VAR(tmp43,"tmp43");
												HX_STACK_LINE(237)
												int tmp44 = (int(tmp43) & int((int)255));		HX_STACK_VAR(tmp44,"tmp44");
												HX_STACK_LINE(237)
												int val = tmp44;		HX_STACK_VAR(val,"val");
												HX_STACK_LINE(237)
												::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)2))),val);
												HX_STACK_LINE(237)
												val;
											}
											HX_STACK_LINE(237)
											{
												HX_STACK_LINE(237)
												int tmp43 = (int(destPixel) & int((int)255));		HX_STACK_VAR(tmp43,"tmp43");
												HX_STACK_LINE(237)
												int val = tmp43;		HX_STACK_VAR(val,"val");
												HX_STACK_LINE(237)
												::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)3))),val);
												HX_STACK_LINE(237)
												val;
											}
										}
										;break;
										case (int)0: {
											HX_STACK_LINE(237)
											{
												HX_STACK_LINE(237)
												int tmp43 = (int(destPixel) >> int((int)24));		HX_STACK_VAR(tmp43,"tmp43");
												HX_STACK_LINE(237)
												int tmp44 = (int(tmp43) & int((int)255));		HX_STACK_VAR(tmp44,"tmp44");
												HX_STACK_LINE(237)
												int val = tmp44;		HX_STACK_VAR(val,"val");
												HX_STACK_LINE(237)
												::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + destPosition),val);
												HX_STACK_LINE(237)
												val;
											}
											HX_STACK_LINE(237)
											{
												HX_STACK_LINE(237)
												int tmp43 = (int(destPixel) >> int((int)16));		HX_STACK_VAR(tmp43,"tmp43");
												HX_STACK_LINE(237)
												int tmp44 = (int(tmp43) & int((int)255));		HX_STACK_VAR(tmp44,"tmp44");
												HX_STACK_LINE(237)
												int val = tmp44;		HX_STACK_VAR(val,"val");
												HX_STACK_LINE(237)
												::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)1))),val);
												HX_STACK_LINE(237)
												val;
											}
											HX_STACK_LINE(237)
											{
												HX_STACK_LINE(237)
												int tmp43 = (int(destPixel) >> int((int)8));		HX_STACK_VAR(tmp43,"tmp43");
												HX_STACK_LINE(237)
												int tmp44 = (int(tmp43) & int((int)255));		HX_STACK_VAR(tmp44,"tmp44");
												HX_STACK_LINE(237)
												int val = tmp44;		HX_STACK_VAR(val,"val");
												HX_STACK_LINE(237)
												::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)2))),val);
												HX_STACK_LINE(237)
												val;
											}
											HX_STACK_LINE(237)
											{
												HX_STACK_LINE(237)
												int tmp43 = (int(destPixel) & int((int)255));		HX_STACK_VAR(tmp43,"tmp43");
												HX_STACK_LINE(237)
												int val = tmp43;		HX_STACK_VAR(val,"val");
												HX_STACK_LINE(237)
												::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)3))),val);
												HX_STACK_LINE(237)
												val;
											}
										}
										;break;
										case (int)1: {
											HX_STACK_LINE(237)
											{
												HX_STACK_LINE(237)
												int tmp43 = (int(destPixel) & int((int)255));		HX_STACK_VAR(tmp43,"tmp43");
												HX_STACK_LINE(237)
												int val = tmp43;		HX_STACK_VAR(val,"val");
												HX_STACK_LINE(237)
												::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + destPosition),val);
												HX_STACK_LINE(237)
												val;
											}
											HX_STACK_LINE(237)
											{
												HX_STACK_LINE(237)
												int tmp43 = (int(destPixel) >> int((int)24));		HX_STACK_VAR(tmp43,"tmp43");
												HX_STACK_LINE(237)
												int tmp44 = (int(tmp43) & int((int)255));		HX_STACK_VAR(tmp44,"tmp44");
												HX_STACK_LINE(237)
												int val = tmp44;		HX_STACK_VAR(val,"val");
												HX_STACK_LINE(237)
												::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)1))),val);
												HX_STACK_LINE(237)
												val;
											}
											HX_STACK_LINE(237)
											{
												HX_STACK_LINE(237)
												int tmp43 = (int(destPixel) >> int((int)16));		HX_STACK_VAR(tmp43,"tmp43");
												HX_STACK_LINE(237)
												int tmp44 = (int(tmp43) & int((int)255));		HX_STACK_VAR(tmp44,"tmp44");
												HX_STACK_LINE(237)
												int val = tmp44;		HX_STACK_VAR(val,"val");
												HX_STACK_LINE(237)
												::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)2))),val);
												HX_STACK_LINE(237)
												val;
											}
											HX_STACK_LINE(237)
											{
												HX_STACK_LINE(237)
												int tmp43 = (int(destPixel) >> int((int)8));		HX_STACK_VAR(tmp43,"tmp43");
												HX_STACK_LINE(237)
												int tmp44 = (int(tmp43) & int((int)255));		HX_STACK_VAR(tmp44,"tmp44");
												HX_STACK_LINE(237)
												int val = tmp44;		HX_STACK_VAR(val,"val");
												HX_STACK_LINE(237)
												::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)3))),val);
												HX_STACK_LINE(237)
												val;
											}
										}
										;break;
									}
								}
								HX_STACK_LINE(239)
								hx::AddEq(sourcePosition,(int)4);
								HX_STACK_LINE(240)
								hx::AddEq(destPosition,(int)4);
							}
						}
					}
				}
				else{
					HX_STACK_LINE(248)
					bool tmp20 = (alphaPoint == null());		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(248)
					if ((tmp20)){
						HX_STACK_LINE(248)
						::lime::math::Vector2 tmp21 = ::lime::math::Vector2_obj::__new(null(),null());		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(248)
						alphaPoint = tmp21;
					}
					HX_STACK_LINE(250)
					::lime::utils::ArrayBufferView tmp21 = alphaImage->buffer->data;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(250)
					::lime::utils::ArrayBufferView alphaData = tmp21;		HX_STACK_VAR(alphaData,"alphaData");
					HX_STACK_LINE(251)
					int tmp22 = alphaImage->buffer->format;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(251)
					int alphaFormat = tmp22;		HX_STACK_VAR(alphaFormat,"alphaFormat");
					HX_STACK_LINE(252)
					bool tmp23 = alphaImage->buffer->premultiplied;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(252)
					bool alphaPremultiplied = tmp23;		HX_STACK_VAR(alphaPremultiplied,"alphaPremultiplied");
					HX_STACK_LINE(254)
					::lime::graphics::Image tmp24 = alphaImage;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(254)
					::lime::math::Rectangle tmp25 = ::lime::math::Rectangle_obj::__new(alphaPoint->x,alphaPoint->y,destView->width,destView->height);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(254)
					::lime::graphics::utils::_ImageDataUtil::ImageDataView tmp26 = ::lime::graphics::utils::_ImageDataUtil::ImageDataView_obj::__new(tmp24,tmp25);		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(254)
					::lime::graphics::utils::_ImageDataUtil::ImageDataView alphaView = tmp26;		HX_STACK_VAR(alphaView,"alphaView");
					HX_STACK_LINE(255)
					int alphaPosition;		HX_STACK_VAR(alphaPosition,"alphaPosition");
					HX_STACK_LINE(255)
					int alphaPixel;		HX_STACK_VAR(alphaPixel,"alphaPixel");
					HX_STACK_LINE(257)
					{
						HX_STACK_LINE(257)
						int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(257)
						int _g = alphaView->height;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(257)
						while((true)){
							HX_STACK_LINE(257)
							bool tmp27 = (_g1 < _g);		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(257)
							bool tmp28 = !(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(257)
							if ((tmp28)){
								HX_STACK_LINE(257)
								break;
							}
							HX_STACK_LINE(257)
							int tmp29 = (_g1)++;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(257)
							int y = tmp29;		HX_STACK_VAR(y,"y");
							HX_STACK_LINE(259)
							int tmp30 = sourceView->offset;		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(259)
							int tmp31 = (sourceView->stride * y);		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(259)
							int tmp32 = (tmp30 + tmp31);		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(259)
							sourcePosition = tmp32;
							HX_STACK_LINE(260)
							int tmp33 = destView->offset;		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(260)
							int tmp34 = (destView->stride * y);		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(260)
							int tmp35 = (tmp33 + tmp34);		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(260)
							destPosition = tmp35;
							HX_STACK_LINE(261)
							int tmp36 = alphaView->offset;		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(261)
							int tmp37 = (alphaView->stride * y);		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(261)
							int tmp38 = (tmp36 + tmp37);		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(261)
							alphaPosition = tmp38;
							HX_STACK_LINE(263)
							{
								HX_STACK_LINE(263)
								int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
								HX_STACK_LINE(263)
								int _g2 = alphaView->width;		HX_STACK_VAR(_g2,"_g2");
								HX_STACK_LINE(263)
								while((true)){
									HX_STACK_LINE(263)
									bool tmp39 = (_g3 < _g2);		HX_STACK_VAR(tmp39,"tmp39");
									HX_STACK_LINE(263)
									bool tmp40 = !(tmp39);		HX_STACK_VAR(tmp40,"tmp40");
									HX_STACK_LINE(263)
									if ((tmp40)){
										HX_STACK_LINE(263)
										break;
									}
									HX_STACK_LINE(263)
									int tmp41 = (_g3)++;		HX_STACK_VAR(tmp41,"tmp41");
									HX_STACK_LINE(263)
									int x = tmp41;		HX_STACK_VAR(x,"x");
									HX_STACK_LINE(265)
									{
										HX_STACK_LINE(265)
										int tmp42 = sourceFormat;		HX_STACK_VAR(tmp42,"tmp42");
										HX_STACK_LINE(265)
										switch( (int)(tmp42)){
											case (int)2: {
												HX_STACK_LINE(265)
												int tmp43 = ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + ((sourcePosition + (int)2))));		HX_STACK_VAR(tmp43,"tmp43");
												HX_STACK_LINE(265)
												Dynamic tmp44 = (int(tmp43) & int((int)255));		HX_STACK_VAR(tmp44,"tmp44");
												HX_STACK_LINE(265)
												int r = tmp44;		HX_STACK_VAR(r,"r");
												HX_STACK_LINE(265)
												int tmp45 = ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + ((sourcePosition + (int)1))));		HX_STACK_VAR(tmp45,"tmp45");
												HX_STACK_LINE(265)
												Dynamic tmp46 = (int(tmp45) & int((int)255));		HX_STACK_VAR(tmp46,"tmp46");
												HX_STACK_LINE(265)
												int g = tmp46;		HX_STACK_VAR(g,"g");
												HX_STACK_LINE(265)
												int tmp47 = ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + sourcePosition));		HX_STACK_VAR(tmp47,"tmp47");
												HX_STACK_LINE(265)
												Dynamic tmp48 = (int(tmp47) & int((int)255));		HX_STACK_VAR(tmp48,"tmp48");
												HX_STACK_LINE(265)
												int b = tmp48;		HX_STACK_VAR(b,"b");
												HX_STACK_LINE(265)
												int tmp49 = ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + ((sourcePosition + (int)3))));		HX_STACK_VAR(tmp49,"tmp49");
												HX_STACK_LINE(265)
												Dynamic tmp50 = (int(tmp49) & int((int)255));		HX_STACK_VAR(tmp50,"tmp50");
												HX_STACK_LINE(265)
												int a = tmp50;		HX_STACK_VAR(a,"a");
												HX_STACK_LINE(265)
												int tmp51 = (int(r) & int((int)255));		HX_STACK_VAR(tmp51,"tmp51");
												HX_STACK_LINE(265)
												int tmp52 = (int(tmp51) << int((int)24));		HX_STACK_VAR(tmp52,"tmp52");
												HX_STACK_LINE(265)
												int tmp53 = (int(g) & int((int)255));		HX_STACK_VAR(tmp53,"tmp53");
												HX_STACK_LINE(265)
												int tmp54 = (int(tmp53) << int((int)16));		HX_STACK_VAR(tmp54,"tmp54");
												HX_STACK_LINE(265)
												int tmp55 = (int(tmp52) | int(tmp54));		HX_STACK_VAR(tmp55,"tmp55");
												HX_STACK_LINE(265)
												int tmp56 = (int(b) & int((int)255));		HX_STACK_VAR(tmp56,"tmp56");
												HX_STACK_LINE(265)
												int tmp57 = (int(tmp56) << int((int)8));		HX_STACK_VAR(tmp57,"tmp57");
												HX_STACK_LINE(265)
												int tmp58 = (int(tmp55) | int(tmp57));		HX_STACK_VAR(tmp58,"tmp58");
												HX_STACK_LINE(265)
												int tmp59 = (int(a) & int((int)255));		HX_STACK_VAR(tmp59,"tmp59");
												HX_STACK_LINE(265)
												int tmp60 = (int(tmp58) | int(tmp59));		HX_STACK_VAR(tmp60,"tmp60");
												HX_STACK_LINE(265)
												sourcePixel = tmp60;
											}
											;break;
											case (int)0: {
												HX_STACK_LINE(265)
												int tmp43 = ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + sourcePosition));		HX_STACK_VAR(tmp43,"tmp43");
												HX_STACK_LINE(265)
												Dynamic tmp44 = (int(tmp43) & int((int)255));		HX_STACK_VAR(tmp44,"tmp44");
												HX_STACK_LINE(265)
												int r = tmp44;		HX_STACK_VAR(r,"r");
												HX_STACK_LINE(265)
												int tmp45 = ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + ((sourcePosition + (int)1))));		HX_STACK_VAR(tmp45,"tmp45");
												HX_STACK_LINE(265)
												Dynamic tmp46 = (int(tmp45) & int((int)255));		HX_STACK_VAR(tmp46,"tmp46");
												HX_STACK_LINE(265)
												int g = tmp46;		HX_STACK_VAR(g,"g");
												HX_STACK_LINE(265)
												int tmp47 = ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + ((sourcePosition + (int)2))));		HX_STACK_VAR(tmp47,"tmp47");
												HX_STACK_LINE(265)
												Dynamic tmp48 = (int(tmp47) & int((int)255));		HX_STACK_VAR(tmp48,"tmp48");
												HX_STACK_LINE(265)
												int b = tmp48;		HX_STACK_VAR(b,"b");
												HX_STACK_LINE(265)
												int tmp49 = ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + ((sourcePosition + (int)3))));		HX_STACK_VAR(tmp49,"tmp49");
												HX_STACK_LINE(265)
												Dynamic tmp50 = (int(tmp49) & int((int)255));		HX_STACK_VAR(tmp50,"tmp50");
												HX_STACK_LINE(265)
												int a = tmp50;		HX_STACK_VAR(a,"a");
												HX_STACK_LINE(265)
												int tmp51 = (int(r) & int((int)255));		HX_STACK_VAR(tmp51,"tmp51");
												HX_STACK_LINE(265)
												int tmp52 = (int(tmp51) << int((int)24));		HX_STACK_VAR(tmp52,"tmp52");
												HX_STACK_LINE(265)
												int tmp53 = (int(g) & int((int)255));		HX_STACK_VAR(tmp53,"tmp53");
												HX_STACK_LINE(265)
												int tmp54 = (int(tmp53) << int((int)16));		HX_STACK_VAR(tmp54,"tmp54");
												HX_STACK_LINE(265)
												int tmp55 = (int(tmp52) | int(tmp54));		HX_STACK_VAR(tmp55,"tmp55");
												HX_STACK_LINE(265)
												int tmp56 = (int(b) & int((int)255));		HX_STACK_VAR(tmp56,"tmp56");
												HX_STACK_LINE(265)
												int tmp57 = (int(tmp56) << int((int)8));		HX_STACK_VAR(tmp57,"tmp57");
												HX_STACK_LINE(265)
												int tmp58 = (int(tmp55) | int(tmp57));		HX_STACK_VAR(tmp58,"tmp58");
												HX_STACK_LINE(265)
												int tmp59 = (int(a) & int((int)255));		HX_STACK_VAR(tmp59,"tmp59");
												HX_STACK_LINE(265)
												int tmp60 = (int(tmp58) | int(tmp59));		HX_STACK_VAR(tmp60,"tmp60");
												HX_STACK_LINE(265)
												sourcePixel = tmp60;
											}
											;break;
											case (int)1: {
												HX_STACK_LINE(265)
												int tmp43 = ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + ((sourcePosition + (int)1))));		HX_STACK_VAR(tmp43,"tmp43");
												HX_STACK_LINE(265)
												Dynamic tmp44 = (int(tmp43) & int((int)255));		HX_STACK_VAR(tmp44,"tmp44");
												HX_STACK_LINE(265)
												int r = tmp44;		HX_STACK_VAR(r,"r");
												HX_STACK_LINE(265)
												int tmp45 = ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + ((sourcePosition + (int)2))));		HX_STACK_VAR(tmp45,"tmp45");
												HX_STACK_LINE(265)
												Dynamic tmp46 = (int(tmp45) & int((int)255));		HX_STACK_VAR(tmp46,"tmp46");
												HX_STACK_LINE(265)
												int g = tmp46;		HX_STACK_VAR(g,"g");
												HX_STACK_LINE(265)
												int tmp47 = ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + ((sourcePosition + (int)3))));		HX_STACK_VAR(tmp47,"tmp47");
												HX_STACK_LINE(265)
												Dynamic tmp48 = (int(tmp47) & int((int)255));		HX_STACK_VAR(tmp48,"tmp48");
												HX_STACK_LINE(265)
												int b = tmp48;		HX_STACK_VAR(b,"b");
												HX_STACK_LINE(265)
												int tmp49 = ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + sourcePosition));		HX_STACK_VAR(tmp49,"tmp49");
												HX_STACK_LINE(265)
												Dynamic tmp50 = (int(tmp49) & int((int)255));		HX_STACK_VAR(tmp50,"tmp50");
												HX_STACK_LINE(265)
												int a = tmp50;		HX_STACK_VAR(a,"a");
												HX_STACK_LINE(265)
												int tmp51 = (int(r) & int((int)255));		HX_STACK_VAR(tmp51,"tmp51");
												HX_STACK_LINE(265)
												int tmp52 = (int(tmp51) << int((int)24));		HX_STACK_VAR(tmp52,"tmp52");
												HX_STACK_LINE(265)
												int tmp53 = (int(g) & int((int)255));		HX_STACK_VAR(tmp53,"tmp53");
												HX_STACK_LINE(265)
												int tmp54 = (int(tmp53) << int((int)16));		HX_STACK_VAR(tmp54,"tmp54");
												HX_STACK_LINE(265)
												int tmp55 = (int(tmp52) | int(tmp54));		HX_STACK_VAR(tmp55,"tmp55");
												HX_STACK_LINE(265)
												int tmp56 = (int(b) & int((int)255));		HX_STACK_VAR(tmp56,"tmp56");
												HX_STACK_LINE(265)
												int tmp57 = (int(tmp56) << int((int)8));		HX_STACK_VAR(tmp57,"tmp57");
												HX_STACK_LINE(265)
												int tmp58 = (int(tmp55) | int(tmp57));		HX_STACK_VAR(tmp58,"tmp58");
												HX_STACK_LINE(265)
												int tmp59 = (int(a) & int((int)255));		HX_STACK_VAR(tmp59,"tmp59");
												HX_STACK_LINE(265)
												int tmp60 = (int(tmp58) | int(tmp59));		HX_STACK_VAR(tmp60,"tmp60");
												HX_STACK_LINE(265)
												sourcePixel = tmp60;
											}
											;break;
										}
										HX_STACK_LINE(265)
										bool tmp43 = sourcePremultiplied;		HX_STACK_VAR(tmp43,"tmp43");
										HX_STACK_LINE(265)
										if ((tmp43)){
											HX_STACK_LINE(265)
											int tmp44 = (int(sourcePixel) & int((int)255));		HX_STACK_VAR(tmp44,"tmp44");
											HX_STACK_LINE(265)
											bool tmp45 = (tmp44 != (int)0);		HX_STACK_VAR(tmp45,"tmp45");
											HX_STACK_LINE(265)
											bool tmp46;		HX_STACK_VAR(tmp46,"tmp46");
											HX_STACK_LINE(265)
											if ((tmp45)){
												HX_STACK_LINE(265)
												int tmp47 = (int(sourcePixel) & int((int)255));		HX_STACK_VAR(tmp47,"tmp47");
												HX_STACK_LINE(265)
												int tmp48 = tmp47;		HX_STACK_VAR(tmp48,"tmp48");
												HX_STACK_LINE(265)
												tmp46 = (tmp48 != (int)255);
											}
											else{
												HX_STACK_LINE(265)
												tmp46 = false;
											}
											HX_STACK_LINE(265)
											if ((tmp46)){
												HX_STACK_LINE(265)
												int tmp47 = (int(sourcePixel) & int((int)255));		HX_STACK_VAR(tmp47,"tmp47");
												HX_STACK_LINE(265)
												Float tmp48 = (Float(((Float)255.0)) / Float(tmp47));		HX_STACK_VAR(tmp48,"tmp48");
												HX_STACK_LINE(265)
												::lime::math::color::_RGBA::RGBA_Impl__obj::unmult = tmp48;
												HX_STACK_LINE(265)
												{
													HX_STACK_LINE(265)
													Dynamic tmp49;		HX_STACK_VAR(tmp49,"tmp49");
													HX_STACK_LINE(265)
													{
														HX_STACK_LINE(265)
														::lime::utils::ArrayBufferView tmp50 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp50,"tmp50");
														HX_STACK_LINE(265)
														::lime::utils::ArrayBufferView this1 = tmp50;		HX_STACK_VAR(this1,"this1");
														HX_STACK_LINE(265)
														int tmp51 = (int(sourcePixel) >> int((int)24));		HX_STACK_VAR(tmp51,"tmp51");
														HX_STACK_LINE(265)
														int tmp52 = (int(tmp51) & int((int)255));		HX_STACK_VAR(tmp52,"tmp52");
														HX_STACK_LINE(265)
														Float tmp53 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;		HX_STACK_VAR(tmp53,"tmp53");
														HX_STACK_LINE(265)
														Float tmp54 = (tmp52 * tmp53);		HX_STACK_VAR(tmp54,"tmp54");
														HX_STACK_LINE(265)
														int tmp55 = ::Math_obj::round(tmp54);		HX_STACK_VAR(tmp55,"tmp55");
														HX_STACK_LINE(265)
														int idx = tmp55;		HX_STACK_VAR(idx,"idx");
														HX_STACK_LINE(265)
														int tmp56 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp56,"tmp56");
														HX_STACK_LINE(265)
														tmp49 = (int(tmp56) & int((int)255));
													}
													HX_STACK_LINE(265)
													int r = tmp49;		HX_STACK_VAR(r,"r");
													HX_STACK_LINE(265)
													Dynamic tmp50;		HX_STACK_VAR(tmp50,"tmp50");
													HX_STACK_LINE(265)
													{
														HX_STACK_LINE(265)
														::lime::utils::ArrayBufferView tmp51 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp51,"tmp51");
														HX_STACK_LINE(265)
														::lime::utils::ArrayBufferView this1 = tmp51;		HX_STACK_VAR(this1,"this1");
														HX_STACK_LINE(265)
														int tmp52 = (int(sourcePixel) >> int((int)16));		HX_STACK_VAR(tmp52,"tmp52");
														HX_STACK_LINE(265)
														int tmp53 = (int(tmp52) & int((int)255));		HX_STACK_VAR(tmp53,"tmp53");
														HX_STACK_LINE(265)
														Float tmp54 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;		HX_STACK_VAR(tmp54,"tmp54");
														HX_STACK_LINE(265)
														Float tmp55 = (tmp53 * tmp54);		HX_STACK_VAR(tmp55,"tmp55");
														HX_STACK_LINE(265)
														int tmp56 = ::Math_obj::round(tmp55);		HX_STACK_VAR(tmp56,"tmp56");
														HX_STACK_LINE(265)
														int idx = tmp56;		HX_STACK_VAR(idx,"idx");
														HX_STACK_LINE(265)
														int tmp57 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp57,"tmp57");
														HX_STACK_LINE(265)
														tmp50 = (int(tmp57) & int((int)255));
													}
													HX_STACK_LINE(265)
													int g = tmp50;		HX_STACK_VAR(g,"g");
													HX_STACK_LINE(265)
													Dynamic tmp51;		HX_STACK_VAR(tmp51,"tmp51");
													HX_STACK_LINE(265)
													{
														HX_STACK_LINE(265)
														::lime::utils::ArrayBufferView tmp52 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp52,"tmp52");
														HX_STACK_LINE(265)
														::lime::utils::ArrayBufferView this1 = tmp52;		HX_STACK_VAR(this1,"this1");
														HX_STACK_LINE(265)
														int tmp53 = (int(sourcePixel) >> int((int)8));		HX_STACK_VAR(tmp53,"tmp53");
														HX_STACK_LINE(265)
														int tmp54 = (int(tmp53) & int((int)255));		HX_STACK_VAR(tmp54,"tmp54");
														HX_STACK_LINE(265)
														Float tmp55 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;		HX_STACK_VAR(tmp55,"tmp55");
														HX_STACK_LINE(265)
														Float tmp56 = (tmp54 * tmp55);		HX_STACK_VAR(tmp56,"tmp56");
														HX_STACK_LINE(265)
														int tmp57 = ::Math_obj::round(tmp56);		HX_STACK_VAR(tmp57,"tmp57");
														HX_STACK_LINE(265)
														int idx = tmp57;		HX_STACK_VAR(idx,"idx");
														HX_STACK_LINE(265)
														int tmp58 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp58,"tmp58");
														HX_STACK_LINE(265)
														tmp51 = (int(tmp58) & int((int)255));
													}
													HX_STACK_LINE(265)
													int b = tmp51;		HX_STACK_VAR(b,"b");
													HX_STACK_LINE(265)
													int tmp52 = (int(r) & int((int)255));		HX_STACK_VAR(tmp52,"tmp52");
													HX_STACK_LINE(265)
													int tmp53 = (int(tmp52) << int((int)24));		HX_STACK_VAR(tmp53,"tmp53");
													HX_STACK_LINE(265)
													int tmp54 = (int(g) & int((int)255));		HX_STACK_VAR(tmp54,"tmp54");
													HX_STACK_LINE(265)
													int tmp55 = (int(tmp54) << int((int)16));		HX_STACK_VAR(tmp55,"tmp55");
													HX_STACK_LINE(265)
													int tmp56 = (int(tmp53) | int(tmp55));		HX_STACK_VAR(tmp56,"tmp56");
													HX_STACK_LINE(265)
													int tmp57 = (int(b) & int((int)255));		HX_STACK_VAR(tmp57,"tmp57");
													HX_STACK_LINE(265)
													int tmp58 = (int(tmp57) << int((int)8));		HX_STACK_VAR(tmp58,"tmp58");
													HX_STACK_LINE(265)
													int tmp59 = (int(tmp56) | int(tmp58));		HX_STACK_VAR(tmp59,"tmp59");
													HX_STACK_LINE(265)
													int tmp60 = (int(sourcePixel) & int((int)255));		HX_STACK_VAR(tmp60,"tmp60");
													HX_STACK_LINE(265)
													int tmp61 = (int(tmp60) & int((int)255));		HX_STACK_VAR(tmp61,"tmp61");
													HX_STACK_LINE(265)
													int tmp62 = (int(tmp59) | int(tmp61));		HX_STACK_VAR(tmp62,"tmp62");
													HX_STACK_LINE(265)
													sourcePixel = tmp62;
												}
											}
										}
									}
									HX_STACK_LINE(266)
									{
										HX_STACK_LINE(266)
										int tmp42 = destFormat;		HX_STACK_VAR(tmp42,"tmp42");
										HX_STACK_LINE(266)
										switch( (int)(tmp42)){
											case (int)2: {
												HX_STACK_LINE(266)
												int tmp43 = ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)2))));		HX_STACK_VAR(tmp43,"tmp43");
												HX_STACK_LINE(266)
												Dynamic tmp44 = (int(tmp43) & int((int)255));		HX_STACK_VAR(tmp44,"tmp44");
												HX_STACK_LINE(266)
												int r = tmp44;		HX_STACK_VAR(r,"r");
												HX_STACK_LINE(266)
												int tmp45 = ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)1))));		HX_STACK_VAR(tmp45,"tmp45");
												HX_STACK_LINE(266)
												Dynamic tmp46 = (int(tmp45) & int((int)255));		HX_STACK_VAR(tmp46,"tmp46");
												HX_STACK_LINE(266)
												int g = tmp46;		HX_STACK_VAR(g,"g");
												HX_STACK_LINE(266)
												int tmp47 = ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + destPosition));		HX_STACK_VAR(tmp47,"tmp47");
												HX_STACK_LINE(266)
												Dynamic tmp48 = (int(tmp47) & int((int)255));		HX_STACK_VAR(tmp48,"tmp48");
												HX_STACK_LINE(266)
												int b = tmp48;		HX_STACK_VAR(b,"b");
												HX_STACK_LINE(266)
												int tmp49 = ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)3))));		HX_STACK_VAR(tmp49,"tmp49");
												HX_STACK_LINE(266)
												Dynamic tmp50 = (int(tmp49) & int((int)255));		HX_STACK_VAR(tmp50,"tmp50");
												HX_STACK_LINE(266)
												int a = tmp50;		HX_STACK_VAR(a,"a");
												HX_STACK_LINE(266)
												int tmp51 = (int(r) & int((int)255));		HX_STACK_VAR(tmp51,"tmp51");
												HX_STACK_LINE(266)
												int tmp52 = (int(tmp51) << int((int)24));		HX_STACK_VAR(tmp52,"tmp52");
												HX_STACK_LINE(266)
												int tmp53 = (int(g) & int((int)255));		HX_STACK_VAR(tmp53,"tmp53");
												HX_STACK_LINE(266)
												int tmp54 = (int(tmp53) << int((int)16));		HX_STACK_VAR(tmp54,"tmp54");
												HX_STACK_LINE(266)
												int tmp55 = (int(tmp52) | int(tmp54));		HX_STACK_VAR(tmp55,"tmp55");
												HX_STACK_LINE(266)
												int tmp56 = (int(b) & int((int)255));		HX_STACK_VAR(tmp56,"tmp56");
												HX_STACK_LINE(266)
												int tmp57 = (int(tmp56) << int((int)8));		HX_STACK_VAR(tmp57,"tmp57");
												HX_STACK_LINE(266)
												int tmp58 = (int(tmp55) | int(tmp57));		HX_STACK_VAR(tmp58,"tmp58");
												HX_STACK_LINE(266)
												int tmp59 = (int(a) & int((int)255));		HX_STACK_VAR(tmp59,"tmp59");
												HX_STACK_LINE(266)
												int tmp60 = (int(tmp58) | int(tmp59));		HX_STACK_VAR(tmp60,"tmp60");
												HX_STACK_LINE(266)
												destPixel = tmp60;
											}
											;break;
											case (int)0: {
												HX_STACK_LINE(266)
												int tmp43 = ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + destPosition));		HX_STACK_VAR(tmp43,"tmp43");
												HX_STACK_LINE(266)
												Dynamic tmp44 = (int(tmp43) & int((int)255));		HX_STACK_VAR(tmp44,"tmp44");
												HX_STACK_LINE(266)
												int r = tmp44;		HX_STACK_VAR(r,"r");
												HX_STACK_LINE(266)
												int tmp45 = ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)1))));		HX_STACK_VAR(tmp45,"tmp45");
												HX_STACK_LINE(266)
												Dynamic tmp46 = (int(tmp45) & int((int)255));		HX_STACK_VAR(tmp46,"tmp46");
												HX_STACK_LINE(266)
												int g = tmp46;		HX_STACK_VAR(g,"g");
												HX_STACK_LINE(266)
												int tmp47 = ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)2))));		HX_STACK_VAR(tmp47,"tmp47");
												HX_STACK_LINE(266)
												Dynamic tmp48 = (int(tmp47) & int((int)255));		HX_STACK_VAR(tmp48,"tmp48");
												HX_STACK_LINE(266)
												int b = tmp48;		HX_STACK_VAR(b,"b");
												HX_STACK_LINE(266)
												int tmp49 = ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)3))));		HX_STACK_VAR(tmp49,"tmp49");
												HX_STACK_LINE(266)
												Dynamic tmp50 = (int(tmp49) & int((int)255));		HX_STACK_VAR(tmp50,"tmp50");
												HX_STACK_LINE(266)
												int a = tmp50;		HX_STACK_VAR(a,"a");
												HX_STACK_LINE(266)
												int tmp51 = (int(r) & int((int)255));		HX_STACK_VAR(tmp51,"tmp51");
												HX_STACK_LINE(266)
												int tmp52 = (int(tmp51) << int((int)24));		HX_STACK_VAR(tmp52,"tmp52");
												HX_STACK_LINE(266)
												int tmp53 = (int(g) & int((int)255));		HX_STACK_VAR(tmp53,"tmp53");
												HX_STACK_LINE(266)
												int tmp54 = (int(tmp53) << int((int)16));		HX_STACK_VAR(tmp54,"tmp54");
												HX_STACK_LINE(266)
												int tmp55 = (int(tmp52) | int(tmp54));		HX_STACK_VAR(tmp55,"tmp55");
												HX_STACK_LINE(266)
												int tmp56 = (int(b) & int((int)255));		HX_STACK_VAR(tmp56,"tmp56");
												HX_STACK_LINE(266)
												int tmp57 = (int(tmp56) << int((int)8));		HX_STACK_VAR(tmp57,"tmp57");
												HX_STACK_LINE(266)
												int tmp58 = (int(tmp55) | int(tmp57));		HX_STACK_VAR(tmp58,"tmp58");
												HX_STACK_LINE(266)
												int tmp59 = (int(a) & int((int)255));		HX_STACK_VAR(tmp59,"tmp59");
												HX_STACK_LINE(266)
												int tmp60 = (int(tmp58) | int(tmp59));		HX_STACK_VAR(tmp60,"tmp60");
												HX_STACK_LINE(266)
												destPixel = tmp60;
											}
											;break;
											case (int)1: {
												HX_STACK_LINE(266)
												int tmp43 = ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)1))));		HX_STACK_VAR(tmp43,"tmp43");
												HX_STACK_LINE(266)
												Dynamic tmp44 = (int(tmp43) & int((int)255));		HX_STACK_VAR(tmp44,"tmp44");
												HX_STACK_LINE(266)
												int r = tmp44;		HX_STACK_VAR(r,"r");
												HX_STACK_LINE(266)
												int tmp45 = ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)2))));		HX_STACK_VAR(tmp45,"tmp45");
												HX_STACK_LINE(266)
												Dynamic tmp46 = (int(tmp45) & int((int)255));		HX_STACK_VAR(tmp46,"tmp46");
												HX_STACK_LINE(266)
												int g = tmp46;		HX_STACK_VAR(g,"g");
												HX_STACK_LINE(266)
												int tmp47 = ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)3))));		HX_STACK_VAR(tmp47,"tmp47");
												HX_STACK_LINE(266)
												Dynamic tmp48 = (int(tmp47) & int((int)255));		HX_STACK_VAR(tmp48,"tmp48");
												HX_STACK_LINE(266)
												int b = tmp48;		HX_STACK_VAR(b,"b");
												HX_STACK_LINE(266)
												int tmp49 = ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + destPosition));		HX_STACK_VAR(tmp49,"tmp49");
												HX_STACK_LINE(266)
												Dynamic tmp50 = (int(tmp49) & int((int)255));		HX_STACK_VAR(tmp50,"tmp50");
												HX_STACK_LINE(266)
												int a = tmp50;		HX_STACK_VAR(a,"a");
												HX_STACK_LINE(266)
												int tmp51 = (int(r) & int((int)255));		HX_STACK_VAR(tmp51,"tmp51");
												HX_STACK_LINE(266)
												int tmp52 = (int(tmp51) << int((int)24));		HX_STACK_VAR(tmp52,"tmp52");
												HX_STACK_LINE(266)
												int tmp53 = (int(g) & int((int)255));		HX_STACK_VAR(tmp53,"tmp53");
												HX_STACK_LINE(266)
												int tmp54 = (int(tmp53) << int((int)16));		HX_STACK_VAR(tmp54,"tmp54");
												HX_STACK_LINE(266)
												int tmp55 = (int(tmp52) | int(tmp54));		HX_STACK_VAR(tmp55,"tmp55");
												HX_STACK_LINE(266)
												int tmp56 = (int(b) & int((int)255));		HX_STACK_VAR(tmp56,"tmp56");
												HX_STACK_LINE(266)
												int tmp57 = (int(tmp56) << int((int)8));		HX_STACK_VAR(tmp57,"tmp57");
												HX_STACK_LINE(266)
												int tmp58 = (int(tmp55) | int(tmp57));		HX_STACK_VAR(tmp58,"tmp58");
												HX_STACK_LINE(266)
												int tmp59 = (int(a) & int((int)255));		HX_STACK_VAR(tmp59,"tmp59");
												HX_STACK_LINE(266)
												int tmp60 = (int(tmp58) | int(tmp59));		HX_STACK_VAR(tmp60,"tmp60");
												HX_STACK_LINE(266)
												destPixel = tmp60;
											}
											;break;
										}
										HX_STACK_LINE(266)
										bool tmp43 = destPremultiplied;		HX_STACK_VAR(tmp43,"tmp43");
										HX_STACK_LINE(266)
										if ((tmp43)){
											HX_STACK_LINE(266)
											int tmp44 = (int(destPixel) & int((int)255));		HX_STACK_VAR(tmp44,"tmp44");
											HX_STACK_LINE(266)
											bool tmp45 = (tmp44 != (int)0);		HX_STACK_VAR(tmp45,"tmp45");
											HX_STACK_LINE(266)
											bool tmp46;		HX_STACK_VAR(tmp46,"tmp46");
											HX_STACK_LINE(266)
											if ((tmp45)){
												HX_STACK_LINE(266)
												int tmp47 = (int(destPixel) & int((int)255));		HX_STACK_VAR(tmp47,"tmp47");
												HX_STACK_LINE(266)
												int tmp48 = tmp47;		HX_STACK_VAR(tmp48,"tmp48");
												HX_STACK_LINE(266)
												tmp46 = (tmp48 != (int)255);
											}
											else{
												HX_STACK_LINE(266)
												tmp46 = false;
											}
											HX_STACK_LINE(266)
											if ((tmp46)){
												HX_STACK_LINE(266)
												int tmp47 = (int(destPixel) & int((int)255));		HX_STACK_VAR(tmp47,"tmp47");
												HX_STACK_LINE(266)
												Float tmp48 = (Float(((Float)255.0)) / Float(tmp47));		HX_STACK_VAR(tmp48,"tmp48");
												HX_STACK_LINE(266)
												::lime::math::color::_RGBA::RGBA_Impl__obj::unmult = tmp48;
												HX_STACK_LINE(266)
												{
													HX_STACK_LINE(266)
													Dynamic tmp49;		HX_STACK_VAR(tmp49,"tmp49");
													HX_STACK_LINE(266)
													{
														HX_STACK_LINE(266)
														::lime::utils::ArrayBufferView tmp50 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp50,"tmp50");
														HX_STACK_LINE(266)
														::lime::utils::ArrayBufferView this1 = tmp50;		HX_STACK_VAR(this1,"this1");
														HX_STACK_LINE(266)
														int tmp51 = (int(destPixel) >> int((int)24));		HX_STACK_VAR(tmp51,"tmp51");
														HX_STACK_LINE(266)
														int tmp52 = (int(tmp51) & int((int)255));		HX_STACK_VAR(tmp52,"tmp52");
														HX_STACK_LINE(266)
														Float tmp53 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;		HX_STACK_VAR(tmp53,"tmp53");
														HX_STACK_LINE(266)
														Float tmp54 = (tmp52 * tmp53);		HX_STACK_VAR(tmp54,"tmp54");
														HX_STACK_LINE(266)
														int tmp55 = ::Math_obj::round(tmp54);		HX_STACK_VAR(tmp55,"tmp55");
														HX_STACK_LINE(266)
														int idx = tmp55;		HX_STACK_VAR(idx,"idx");
														HX_STACK_LINE(266)
														int tmp56 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp56,"tmp56");
														HX_STACK_LINE(266)
														tmp49 = (int(tmp56) & int((int)255));
													}
													HX_STACK_LINE(266)
													int r = tmp49;		HX_STACK_VAR(r,"r");
													HX_STACK_LINE(266)
													Dynamic tmp50;		HX_STACK_VAR(tmp50,"tmp50");
													HX_STACK_LINE(266)
													{
														HX_STACK_LINE(266)
														::lime::utils::ArrayBufferView tmp51 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp51,"tmp51");
														HX_STACK_LINE(266)
														::lime::utils::ArrayBufferView this1 = tmp51;		HX_STACK_VAR(this1,"this1");
														HX_STACK_LINE(266)
														int tmp52 = (int(destPixel) >> int((int)16));		HX_STACK_VAR(tmp52,"tmp52");
														HX_STACK_LINE(266)
														int tmp53 = (int(tmp52) & int((int)255));		HX_STACK_VAR(tmp53,"tmp53");
														HX_STACK_LINE(266)
														Float tmp54 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;		HX_STACK_VAR(tmp54,"tmp54");
														HX_STACK_LINE(266)
														Float tmp55 = (tmp53 * tmp54);		HX_STACK_VAR(tmp55,"tmp55");
														HX_STACK_LINE(266)
														int tmp56 = ::Math_obj::round(tmp55);		HX_STACK_VAR(tmp56,"tmp56");
														HX_STACK_LINE(266)
														int idx = tmp56;		HX_STACK_VAR(idx,"idx");
														HX_STACK_LINE(266)
														int tmp57 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp57,"tmp57");
														HX_STACK_LINE(266)
														tmp50 = (int(tmp57) & int((int)255));
													}
													HX_STACK_LINE(266)
													int g = tmp50;		HX_STACK_VAR(g,"g");
													HX_STACK_LINE(266)
													Dynamic tmp51;		HX_STACK_VAR(tmp51,"tmp51");
													HX_STACK_LINE(266)
													{
														HX_STACK_LINE(266)
														::lime::utils::ArrayBufferView tmp52 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp52,"tmp52");
														HX_STACK_LINE(266)
														::lime::utils::ArrayBufferView this1 = tmp52;		HX_STACK_VAR(this1,"this1");
														HX_STACK_LINE(266)
														int tmp53 = (int(destPixel) >> int((int)8));		HX_STACK_VAR(tmp53,"tmp53");
														HX_STACK_LINE(266)
														int tmp54 = (int(tmp53) & int((int)255));		HX_STACK_VAR(tmp54,"tmp54");
														HX_STACK_LINE(266)
														Float tmp55 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;		HX_STACK_VAR(tmp55,"tmp55");
														HX_STACK_LINE(266)
														Float tmp56 = (tmp54 * tmp55);		HX_STACK_VAR(tmp56,"tmp56");
														HX_STACK_LINE(266)
														int tmp57 = ::Math_obj::round(tmp56);		HX_STACK_VAR(tmp57,"tmp57");
														HX_STACK_LINE(266)
														int idx = tmp57;		HX_STACK_VAR(idx,"idx");
														HX_STACK_LINE(266)
														int tmp58 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp58,"tmp58");
														HX_STACK_LINE(266)
														tmp51 = (int(tmp58) & int((int)255));
													}
													HX_STACK_LINE(266)
													int b = tmp51;		HX_STACK_VAR(b,"b");
													HX_STACK_LINE(266)
													int tmp52 = (int(r) & int((int)255));		HX_STACK_VAR(tmp52,"tmp52");
													HX_STACK_LINE(266)
													int tmp53 = (int(tmp52) << int((int)24));		HX_STACK_VAR(tmp53,"tmp53");
													HX_STACK_LINE(266)
													int tmp54 = (int(g) & int((int)255));		HX_STACK_VAR(tmp54,"tmp54");
													HX_STACK_LINE(266)
													int tmp55 = (int(tmp54) << int((int)16));		HX_STACK_VAR(tmp55,"tmp55");
													HX_STACK_LINE(266)
													int tmp56 = (int(tmp53) | int(tmp55));		HX_STACK_VAR(tmp56,"tmp56");
													HX_STACK_LINE(266)
													int tmp57 = (int(b) & int((int)255));		HX_STACK_VAR(tmp57,"tmp57");
													HX_STACK_LINE(266)
													int tmp58 = (int(tmp57) << int((int)8));		HX_STACK_VAR(tmp58,"tmp58");
													HX_STACK_LINE(266)
													int tmp59 = (int(tmp56) | int(tmp58));		HX_STACK_VAR(tmp59,"tmp59");
													HX_STACK_LINE(266)
													int tmp60 = (int(destPixel) & int((int)255));		HX_STACK_VAR(tmp60,"tmp60");
													HX_STACK_LINE(266)
													int tmp61 = (int(tmp60) & int((int)255));		HX_STACK_VAR(tmp61,"tmp61");
													HX_STACK_LINE(266)
													int tmp62 = (int(tmp59) | int(tmp61));		HX_STACK_VAR(tmp62,"tmp62");
													HX_STACK_LINE(266)
													destPixel = tmp62;
												}
											}
										}
									}
									HX_STACK_LINE(267)
									{
										HX_STACK_LINE(267)
										int tmp42 = alphaFormat;		HX_STACK_VAR(tmp42,"tmp42");
										HX_STACK_LINE(267)
										switch( (int)(tmp42)){
											case (int)2: {
												HX_STACK_LINE(267)
												int tmp43 = ::__hxcpp_memory_get_byte(alphaData->buffer->b,(alphaData->byteOffset + ((alphaPosition + (int)2))));		HX_STACK_VAR(tmp43,"tmp43");
												HX_STACK_LINE(267)
												Dynamic tmp44 = (int(tmp43) & int((int)255));		HX_STACK_VAR(tmp44,"tmp44");
												HX_STACK_LINE(267)
												int r = tmp44;		HX_STACK_VAR(r,"r");
												HX_STACK_LINE(267)
												int tmp45 = ::__hxcpp_memory_get_byte(alphaData->buffer->b,(alphaData->byteOffset + ((alphaPosition + (int)1))));		HX_STACK_VAR(tmp45,"tmp45");
												HX_STACK_LINE(267)
												Dynamic tmp46 = (int(tmp45) & int((int)255));		HX_STACK_VAR(tmp46,"tmp46");
												HX_STACK_LINE(267)
												int g = tmp46;		HX_STACK_VAR(g,"g");
												HX_STACK_LINE(267)
												int tmp47 = ::__hxcpp_memory_get_byte(alphaData->buffer->b,(alphaData->byteOffset + alphaPosition));		HX_STACK_VAR(tmp47,"tmp47");
												HX_STACK_LINE(267)
												Dynamic tmp48 = (int(tmp47) & int((int)255));		HX_STACK_VAR(tmp48,"tmp48");
												HX_STACK_LINE(267)
												int b = tmp48;		HX_STACK_VAR(b,"b");
												HX_STACK_LINE(267)
												int tmp49 = ::__hxcpp_memory_get_byte(alphaData->buffer->b,(alphaData->byteOffset + ((alphaPosition + (int)3))));		HX_STACK_VAR(tmp49,"tmp49");
												HX_STACK_LINE(267)
												Dynamic tmp50 = (int(tmp49) & int((int)255));		HX_STACK_VAR(tmp50,"tmp50");
												HX_STACK_LINE(267)
												int a = tmp50;		HX_STACK_VAR(a,"a");
												HX_STACK_LINE(267)
												int tmp51 = (int(r) & int((int)255));		HX_STACK_VAR(tmp51,"tmp51");
												HX_STACK_LINE(267)
												int tmp52 = (int(tmp51) << int((int)24));		HX_STACK_VAR(tmp52,"tmp52");
												HX_STACK_LINE(267)
												int tmp53 = (int(g) & int((int)255));		HX_STACK_VAR(tmp53,"tmp53");
												HX_STACK_LINE(267)
												int tmp54 = (int(tmp53) << int((int)16));		HX_STACK_VAR(tmp54,"tmp54");
												HX_STACK_LINE(267)
												int tmp55 = (int(tmp52) | int(tmp54));		HX_STACK_VAR(tmp55,"tmp55");
												HX_STACK_LINE(267)
												int tmp56 = (int(b) & int((int)255));		HX_STACK_VAR(tmp56,"tmp56");
												HX_STACK_LINE(267)
												int tmp57 = (int(tmp56) << int((int)8));		HX_STACK_VAR(tmp57,"tmp57");
												HX_STACK_LINE(267)
												int tmp58 = (int(tmp55) | int(tmp57));		HX_STACK_VAR(tmp58,"tmp58");
												HX_STACK_LINE(267)
												int tmp59 = (int(a) & int((int)255));		HX_STACK_VAR(tmp59,"tmp59");
												HX_STACK_LINE(267)
												int tmp60 = (int(tmp58) | int(tmp59));		HX_STACK_VAR(tmp60,"tmp60");
												HX_STACK_LINE(267)
												alphaPixel = tmp60;
											}
											;break;
											case (int)0: {
												HX_STACK_LINE(267)
												int tmp43 = ::__hxcpp_memory_get_byte(alphaData->buffer->b,(alphaData->byteOffset + alphaPosition));		HX_STACK_VAR(tmp43,"tmp43");
												HX_STACK_LINE(267)
												Dynamic tmp44 = (int(tmp43) & int((int)255));		HX_STACK_VAR(tmp44,"tmp44");
												HX_STACK_LINE(267)
												int r = tmp44;		HX_STACK_VAR(r,"r");
												HX_STACK_LINE(267)
												int tmp45 = ::__hxcpp_memory_get_byte(alphaData->buffer->b,(alphaData->byteOffset + ((alphaPosition + (int)1))));		HX_STACK_VAR(tmp45,"tmp45");
												HX_STACK_LINE(267)
												Dynamic tmp46 = (int(tmp45) & int((int)255));		HX_STACK_VAR(tmp46,"tmp46");
												HX_STACK_LINE(267)
												int g = tmp46;		HX_STACK_VAR(g,"g");
												HX_STACK_LINE(267)
												int tmp47 = ::__hxcpp_memory_get_byte(alphaData->buffer->b,(alphaData->byteOffset + ((alphaPosition + (int)2))));		HX_STACK_VAR(tmp47,"tmp47");
												HX_STACK_LINE(267)
												Dynamic tmp48 = (int(tmp47) & int((int)255));		HX_STACK_VAR(tmp48,"tmp48");
												HX_STACK_LINE(267)
												int b = tmp48;		HX_STACK_VAR(b,"b");
												HX_STACK_LINE(267)
												int tmp49 = ::__hxcpp_memory_get_byte(alphaData->buffer->b,(alphaData->byteOffset + ((alphaPosition + (int)3))));		HX_STACK_VAR(tmp49,"tmp49");
												HX_STACK_LINE(267)
												Dynamic tmp50 = (int(tmp49) & int((int)255));		HX_STACK_VAR(tmp50,"tmp50");
												HX_STACK_LINE(267)
												int a = tmp50;		HX_STACK_VAR(a,"a");
												HX_STACK_LINE(267)
												int tmp51 = (int(r) & int((int)255));		HX_STACK_VAR(tmp51,"tmp51");
												HX_STACK_LINE(267)
												int tmp52 = (int(tmp51) << int((int)24));		HX_STACK_VAR(tmp52,"tmp52");
												HX_STACK_LINE(267)
												int tmp53 = (int(g) & int((int)255));		HX_STACK_VAR(tmp53,"tmp53");
												HX_STACK_LINE(267)
												int tmp54 = (int(tmp53) << int((int)16));		HX_STACK_VAR(tmp54,"tmp54");
												HX_STACK_LINE(267)
												int tmp55 = (int(tmp52) | int(tmp54));		HX_STACK_VAR(tmp55,"tmp55");
												HX_STACK_LINE(267)
												int tmp56 = (int(b) & int((int)255));		HX_STACK_VAR(tmp56,"tmp56");
												HX_STACK_LINE(267)
												int tmp57 = (int(tmp56) << int((int)8));		HX_STACK_VAR(tmp57,"tmp57");
												HX_STACK_LINE(267)
												int tmp58 = (int(tmp55) | int(tmp57));		HX_STACK_VAR(tmp58,"tmp58");
												HX_STACK_LINE(267)
												int tmp59 = (int(a) & int((int)255));		HX_STACK_VAR(tmp59,"tmp59");
												HX_STACK_LINE(267)
												int tmp60 = (int(tmp58) | int(tmp59));		HX_STACK_VAR(tmp60,"tmp60");
												HX_STACK_LINE(267)
												alphaPixel = tmp60;
											}
											;break;
											case (int)1: {
												HX_STACK_LINE(267)
												int tmp43 = ::__hxcpp_memory_get_byte(alphaData->buffer->b,(alphaData->byteOffset + ((alphaPosition + (int)1))));		HX_STACK_VAR(tmp43,"tmp43");
												HX_STACK_LINE(267)
												Dynamic tmp44 = (int(tmp43) & int((int)255));		HX_STACK_VAR(tmp44,"tmp44");
												HX_STACK_LINE(267)
												int r = tmp44;		HX_STACK_VAR(r,"r");
												HX_STACK_LINE(267)
												int tmp45 = ::__hxcpp_memory_get_byte(alphaData->buffer->b,(alphaData->byteOffset + ((alphaPosition + (int)2))));		HX_STACK_VAR(tmp45,"tmp45");
												HX_STACK_LINE(267)
												Dynamic tmp46 = (int(tmp45) & int((int)255));		HX_STACK_VAR(tmp46,"tmp46");
												HX_STACK_LINE(267)
												int g = tmp46;		HX_STACK_VAR(g,"g");
												HX_STACK_LINE(267)
												int tmp47 = ::__hxcpp_memory_get_byte(alphaData->buffer->b,(alphaData->byteOffset + ((alphaPosition + (int)3))));		HX_STACK_VAR(tmp47,"tmp47");
												HX_STACK_LINE(267)
												Dynamic tmp48 = (int(tmp47) & int((int)255));		HX_STACK_VAR(tmp48,"tmp48");
												HX_STACK_LINE(267)
												int b = tmp48;		HX_STACK_VAR(b,"b");
												HX_STACK_LINE(267)
												int tmp49 = ::__hxcpp_memory_get_byte(alphaData->buffer->b,(alphaData->byteOffset + alphaPosition));		HX_STACK_VAR(tmp49,"tmp49");
												HX_STACK_LINE(267)
												Dynamic tmp50 = (int(tmp49) & int((int)255));		HX_STACK_VAR(tmp50,"tmp50");
												HX_STACK_LINE(267)
												int a = tmp50;		HX_STACK_VAR(a,"a");
												HX_STACK_LINE(267)
												int tmp51 = (int(r) & int((int)255));		HX_STACK_VAR(tmp51,"tmp51");
												HX_STACK_LINE(267)
												int tmp52 = (int(tmp51) << int((int)24));		HX_STACK_VAR(tmp52,"tmp52");
												HX_STACK_LINE(267)
												int tmp53 = (int(g) & int((int)255));		HX_STACK_VAR(tmp53,"tmp53");
												HX_STACK_LINE(267)
												int tmp54 = (int(tmp53) << int((int)16));		HX_STACK_VAR(tmp54,"tmp54");
												HX_STACK_LINE(267)
												int tmp55 = (int(tmp52) | int(tmp54));		HX_STACK_VAR(tmp55,"tmp55");
												HX_STACK_LINE(267)
												int tmp56 = (int(b) & int((int)255));		HX_STACK_VAR(tmp56,"tmp56");
												HX_STACK_LINE(267)
												int tmp57 = (int(tmp56) << int((int)8));		HX_STACK_VAR(tmp57,"tmp57");
												HX_STACK_LINE(267)
												int tmp58 = (int(tmp55) | int(tmp57));		HX_STACK_VAR(tmp58,"tmp58");
												HX_STACK_LINE(267)
												int tmp59 = (int(a) & int((int)255));		HX_STACK_VAR(tmp59,"tmp59");
												HX_STACK_LINE(267)
												int tmp60 = (int(tmp58) | int(tmp59));		HX_STACK_VAR(tmp60,"tmp60");
												HX_STACK_LINE(267)
												alphaPixel = tmp60;
											}
											;break;
										}
										HX_STACK_LINE(267)
										bool tmp43 = alphaPremultiplied;		HX_STACK_VAR(tmp43,"tmp43");
										HX_STACK_LINE(267)
										if ((tmp43)){
											HX_STACK_LINE(267)
											int tmp44 = (int(alphaPixel) & int((int)255));		HX_STACK_VAR(tmp44,"tmp44");
											HX_STACK_LINE(267)
											bool tmp45 = (tmp44 != (int)0);		HX_STACK_VAR(tmp45,"tmp45");
											HX_STACK_LINE(267)
											bool tmp46;		HX_STACK_VAR(tmp46,"tmp46");
											HX_STACK_LINE(267)
											if ((tmp45)){
												HX_STACK_LINE(267)
												int tmp47 = (int(alphaPixel) & int((int)255));		HX_STACK_VAR(tmp47,"tmp47");
												HX_STACK_LINE(267)
												int tmp48 = tmp47;		HX_STACK_VAR(tmp48,"tmp48");
												HX_STACK_LINE(267)
												tmp46 = (tmp48 != (int)255);
											}
											else{
												HX_STACK_LINE(267)
												tmp46 = false;
											}
											HX_STACK_LINE(267)
											if ((tmp46)){
												HX_STACK_LINE(267)
												int tmp47 = (int(alphaPixel) & int((int)255));		HX_STACK_VAR(tmp47,"tmp47");
												HX_STACK_LINE(267)
												Float tmp48 = (Float(((Float)255.0)) / Float(tmp47));		HX_STACK_VAR(tmp48,"tmp48");
												HX_STACK_LINE(267)
												::lime::math::color::_RGBA::RGBA_Impl__obj::unmult = tmp48;
												HX_STACK_LINE(267)
												{
													HX_STACK_LINE(267)
													Dynamic tmp49;		HX_STACK_VAR(tmp49,"tmp49");
													HX_STACK_LINE(267)
													{
														HX_STACK_LINE(267)
														::lime::utils::ArrayBufferView tmp50 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp50,"tmp50");
														HX_STACK_LINE(267)
														::lime::utils::ArrayBufferView this1 = tmp50;		HX_STACK_VAR(this1,"this1");
														HX_STACK_LINE(267)
														int tmp51 = (int(alphaPixel) >> int((int)24));		HX_STACK_VAR(tmp51,"tmp51");
														HX_STACK_LINE(267)
														int tmp52 = (int(tmp51) & int((int)255));		HX_STACK_VAR(tmp52,"tmp52");
														HX_STACK_LINE(267)
														Float tmp53 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;		HX_STACK_VAR(tmp53,"tmp53");
														HX_STACK_LINE(267)
														Float tmp54 = (tmp52 * tmp53);		HX_STACK_VAR(tmp54,"tmp54");
														HX_STACK_LINE(267)
														int tmp55 = ::Math_obj::round(tmp54);		HX_STACK_VAR(tmp55,"tmp55");
														HX_STACK_LINE(267)
														int idx = tmp55;		HX_STACK_VAR(idx,"idx");
														HX_STACK_LINE(267)
														int tmp56 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp56,"tmp56");
														HX_STACK_LINE(267)
														tmp49 = (int(tmp56) & int((int)255));
													}
													HX_STACK_LINE(267)
													int r = tmp49;		HX_STACK_VAR(r,"r");
													HX_STACK_LINE(267)
													Dynamic tmp50;		HX_STACK_VAR(tmp50,"tmp50");
													HX_STACK_LINE(267)
													{
														HX_STACK_LINE(267)
														::lime::utils::ArrayBufferView tmp51 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp51,"tmp51");
														HX_STACK_LINE(267)
														::lime::utils::ArrayBufferView this1 = tmp51;		HX_STACK_VAR(this1,"this1");
														HX_STACK_LINE(267)
														int tmp52 = (int(alphaPixel) >> int((int)16));		HX_STACK_VAR(tmp52,"tmp52");
														HX_STACK_LINE(267)
														int tmp53 = (int(tmp52) & int((int)255));		HX_STACK_VAR(tmp53,"tmp53");
														HX_STACK_LINE(267)
														Float tmp54 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;		HX_STACK_VAR(tmp54,"tmp54");
														HX_STACK_LINE(267)
														Float tmp55 = (tmp53 * tmp54);		HX_STACK_VAR(tmp55,"tmp55");
														HX_STACK_LINE(267)
														int tmp56 = ::Math_obj::round(tmp55);		HX_STACK_VAR(tmp56,"tmp56");
														HX_STACK_LINE(267)
														int idx = tmp56;		HX_STACK_VAR(idx,"idx");
														HX_STACK_LINE(267)
														int tmp57 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp57,"tmp57");
														HX_STACK_LINE(267)
														tmp50 = (int(tmp57) & int((int)255));
													}
													HX_STACK_LINE(267)
													int g = tmp50;		HX_STACK_VAR(g,"g");
													HX_STACK_LINE(267)
													Dynamic tmp51;		HX_STACK_VAR(tmp51,"tmp51");
													HX_STACK_LINE(267)
													{
														HX_STACK_LINE(267)
														::lime::utils::ArrayBufferView tmp52 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp52,"tmp52");
														HX_STACK_LINE(267)
														::lime::utils::ArrayBufferView this1 = tmp52;		HX_STACK_VAR(this1,"this1");
														HX_STACK_LINE(267)
														int tmp53 = (int(alphaPixel) >> int((int)8));		HX_STACK_VAR(tmp53,"tmp53");
														HX_STACK_LINE(267)
														int tmp54 = (int(tmp53) & int((int)255));		HX_STACK_VAR(tmp54,"tmp54");
														HX_STACK_LINE(267)
														Float tmp55 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;		HX_STACK_VAR(tmp55,"tmp55");
														HX_STACK_LINE(267)
														Float tmp56 = (tmp54 * tmp55);		HX_STACK_VAR(tmp56,"tmp56");
														HX_STACK_LINE(267)
														int tmp57 = ::Math_obj::round(tmp56);		HX_STACK_VAR(tmp57,"tmp57");
														HX_STACK_LINE(267)
														int idx = tmp57;		HX_STACK_VAR(idx,"idx");
														HX_STACK_LINE(267)
														int tmp58 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp58,"tmp58");
														HX_STACK_LINE(267)
														tmp51 = (int(tmp58) & int((int)255));
													}
													HX_STACK_LINE(267)
													int b = tmp51;		HX_STACK_VAR(b,"b");
													HX_STACK_LINE(267)
													int tmp52 = (int(r) & int((int)255));		HX_STACK_VAR(tmp52,"tmp52");
													HX_STACK_LINE(267)
													int tmp53 = (int(tmp52) << int((int)24));		HX_STACK_VAR(tmp53,"tmp53");
													HX_STACK_LINE(267)
													int tmp54 = (int(g) & int((int)255));		HX_STACK_VAR(tmp54,"tmp54");
													HX_STACK_LINE(267)
													int tmp55 = (int(tmp54) << int((int)16));		HX_STACK_VAR(tmp55,"tmp55");
													HX_STACK_LINE(267)
													int tmp56 = (int(tmp53) | int(tmp55));		HX_STACK_VAR(tmp56,"tmp56");
													HX_STACK_LINE(267)
													int tmp57 = (int(b) & int((int)255));		HX_STACK_VAR(tmp57,"tmp57");
													HX_STACK_LINE(267)
													int tmp58 = (int(tmp57) << int((int)8));		HX_STACK_VAR(tmp58,"tmp58");
													HX_STACK_LINE(267)
													int tmp59 = (int(tmp56) | int(tmp58));		HX_STACK_VAR(tmp59,"tmp59");
													HX_STACK_LINE(267)
													int tmp60 = (int(alphaPixel) & int((int)255));		HX_STACK_VAR(tmp60,"tmp60");
													HX_STACK_LINE(267)
													int tmp61 = (int(tmp60) & int((int)255));		HX_STACK_VAR(tmp61,"tmp61");
													HX_STACK_LINE(267)
													int tmp62 = (int(tmp59) | int(tmp61));		HX_STACK_VAR(tmp62,"tmp62");
													HX_STACK_LINE(267)
													alphaPixel = tmp62;
												}
											}
										}
									}
									HX_STACK_LINE(269)
									int tmp42 = (int(alphaPixel) & int((int)255));		HX_STACK_VAR(tmp42,"tmp42");
									HX_STACK_LINE(269)
									Float tmp43 = (Float(tmp42) / Float((int)255));		HX_STACK_VAR(tmp43,"tmp43");
									HX_STACK_LINE(269)
									sourceAlpha = tmp43;
									HX_STACK_LINE(270)
									int tmp44 = (int(destPixel) & int((int)255));		HX_STACK_VAR(tmp44,"tmp44");
									HX_STACK_LINE(270)
									Float tmp45 = (Float(tmp44) / Float((int)255));		HX_STACK_VAR(tmp45,"tmp45");
									HX_STACK_LINE(270)
									destAlpha = tmp45;
									HX_STACK_LINE(271)
									Float tmp46 = ((int)1 - sourceAlpha);		HX_STACK_VAR(tmp46,"tmp46");
									HX_STACK_LINE(271)
									oneMinusSourceAlpha = tmp46;
									HX_STACK_LINE(272)
									Float tmp47 = sourceAlpha;		HX_STACK_VAR(tmp47,"tmp47");
									HX_STACK_LINE(272)
									Float tmp48 = (destAlpha * oneMinusSourceAlpha);		HX_STACK_VAR(tmp48,"tmp48");
									HX_STACK_LINE(272)
									Float tmp49 = (tmp47 + tmp48);		HX_STACK_VAR(tmp49,"tmp49");
									HX_STACK_LINE(272)
									blendAlpha = tmp49;
									HX_STACK_LINE(274)
									bool tmp50 = (blendAlpha == (int)0);		HX_STACK_VAR(tmp50,"tmp50");
									HX_STACK_LINE(274)
									if ((tmp50)){
										HX_STACK_LINE(276)
										destPixel = (int)0;
									}
									else{
										HX_STACK_LINE(280)
										{
											HX_STACK_LINE(280)
											Dynamic tmp51;		HX_STACK_VAR(tmp51,"tmp51");
											HX_STACK_LINE(280)
											{
												HX_STACK_LINE(280)
												::lime::utils::ArrayBufferView tmp52 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp52,"tmp52");
												HX_STACK_LINE(280)
												::lime::utils::ArrayBufferView this1 = tmp52;		HX_STACK_VAR(this1,"this1");
												HX_STACK_LINE(280)
												int tmp53 = (int(sourcePixel) >> int((int)24));		HX_STACK_VAR(tmp53,"tmp53");
												HX_STACK_LINE(280)
												int tmp54 = (int(tmp53) & int((int)255));		HX_STACK_VAR(tmp54,"tmp54");
												HX_STACK_LINE(280)
												Float tmp55 = sourceAlpha;		HX_STACK_VAR(tmp55,"tmp55");
												HX_STACK_LINE(280)
												Float tmp56 = (tmp54 * tmp55);		HX_STACK_VAR(tmp56,"tmp56");
												HX_STACK_LINE(280)
												int tmp57 = (int(destPixel) >> int((int)24));		HX_STACK_VAR(tmp57,"tmp57");
												HX_STACK_LINE(280)
												int tmp58 = (int(tmp57) & int((int)255));		HX_STACK_VAR(tmp58,"tmp58");
												HX_STACK_LINE(280)
												Float tmp59 = destAlpha;		HX_STACK_VAR(tmp59,"tmp59");
												HX_STACK_LINE(280)
												Float tmp60 = (tmp58 * tmp59);		HX_STACK_VAR(tmp60,"tmp60");
												HX_STACK_LINE(280)
												Float tmp61 = oneMinusSourceAlpha;		HX_STACK_VAR(tmp61,"tmp61");
												HX_STACK_LINE(280)
												Float tmp62 = (tmp60 * tmp61);		HX_STACK_VAR(tmp62,"tmp62");
												HX_STACK_LINE(280)
												Float tmp63 = (tmp56 + tmp62);		HX_STACK_VAR(tmp63,"tmp63");
												HX_STACK_LINE(280)
												Float tmp64 = blendAlpha;		HX_STACK_VAR(tmp64,"tmp64");
												HX_STACK_LINE(280)
												Float tmp65 = (Float(tmp63) / Float(tmp64));		HX_STACK_VAR(tmp65,"tmp65");
												HX_STACK_LINE(280)
												int tmp66 = ::Math_obj::round(tmp65);		HX_STACK_VAR(tmp66,"tmp66");
												HX_STACK_LINE(280)
												int idx = tmp66;		HX_STACK_VAR(idx,"idx");
												HX_STACK_LINE(280)
												int tmp67 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp67,"tmp67");
												HX_STACK_LINE(280)
												tmp51 = (int(tmp67) & int((int)255));
											}
											HX_STACK_LINE(280)
											int value = tmp51;		HX_STACK_VAR(value,"value");
											HX_STACK_LINE(280)
											{
												HX_STACK_LINE(280)
												int tmp52 = (int(value) & int((int)255));		HX_STACK_VAR(tmp52,"tmp52");
												HX_STACK_LINE(280)
												int tmp53 = (int(tmp52) << int((int)24));		HX_STACK_VAR(tmp53,"tmp53");
												HX_STACK_LINE(280)
												int tmp54 = (int(destPixel) >> int((int)16));		HX_STACK_VAR(tmp54,"tmp54");
												HX_STACK_LINE(280)
												int tmp55 = (int(tmp54) & int((int)255));		HX_STACK_VAR(tmp55,"tmp55");
												HX_STACK_LINE(280)
												int tmp56 = (int(tmp55) & int((int)255));		HX_STACK_VAR(tmp56,"tmp56");
												HX_STACK_LINE(280)
												int tmp57 = (int(tmp56) << int((int)16));		HX_STACK_VAR(tmp57,"tmp57");
												HX_STACK_LINE(280)
												int tmp58 = (int(tmp53) | int(tmp57));		HX_STACK_VAR(tmp58,"tmp58");
												HX_STACK_LINE(280)
												int tmp59 = (int(destPixel) >> int((int)8));		HX_STACK_VAR(tmp59,"tmp59");
												HX_STACK_LINE(280)
												int tmp60 = (int(tmp59) & int((int)255));		HX_STACK_VAR(tmp60,"tmp60");
												HX_STACK_LINE(280)
												int tmp61 = (int(tmp60) & int((int)255));		HX_STACK_VAR(tmp61,"tmp61");
												HX_STACK_LINE(280)
												int tmp62 = (int(tmp61) << int((int)8));		HX_STACK_VAR(tmp62,"tmp62");
												HX_STACK_LINE(280)
												int tmp63 = (int(tmp58) | int(tmp62));		HX_STACK_VAR(tmp63,"tmp63");
												HX_STACK_LINE(280)
												int tmp64 = (int(destPixel) & int((int)255));		HX_STACK_VAR(tmp64,"tmp64");
												HX_STACK_LINE(280)
												int tmp65 = (int(tmp64) & int((int)255));		HX_STACK_VAR(tmp65,"tmp65");
												HX_STACK_LINE(280)
												int tmp66 = (int(tmp63) | int(tmp65));		HX_STACK_VAR(tmp66,"tmp66");
												HX_STACK_LINE(280)
												destPixel = tmp66;
											}
											HX_STACK_LINE(280)
											value;
										}
										HX_STACK_LINE(281)
										{
											HX_STACK_LINE(281)
											Dynamic tmp51;		HX_STACK_VAR(tmp51,"tmp51");
											HX_STACK_LINE(281)
											{
												HX_STACK_LINE(281)
												::lime::utils::ArrayBufferView tmp52 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp52,"tmp52");
												HX_STACK_LINE(281)
												::lime::utils::ArrayBufferView this1 = tmp52;		HX_STACK_VAR(this1,"this1");
												HX_STACK_LINE(281)
												int tmp53 = (int(sourcePixel) >> int((int)16));		HX_STACK_VAR(tmp53,"tmp53");
												HX_STACK_LINE(281)
												int tmp54 = (int(tmp53) & int((int)255));		HX_STACK_VAR(tmp54,"tmp54");
												HX_STACK_LINE(281)
												Float tmp55 = sourceAlpha;		HX_STACK_VAR(tmp55,"tmp55");
												HX_STACK_LINE(281)
												Float tmp56 = (tmp54 * tmp55);		HX_STACK_VAR(tmp56,"tmp56");
												HX_STACK_LINE(281)
												int tmp57 = (int(destPixel) >> int((int)16));		HX_STACK_VAR(tmp57,"tmp57");
												HX_STACK_LINE(281)
												int tmp58 = (int(tmp57) & int((int)255));		HX_STACK_VAR(tmp58,"tmp58");
												HX_STACK_LINE(281)
												Float tmp59 = destAlpha;		HX_STACK_VAR(tmp59,"tmp59");
												HX_STACK_LINE(281)
												Float tmp60 = (tmp58 * tmp59);		HX_STACK_VAR(tmp60,"tmp60");
												HX_STACK_LINE(281)
												Float tmp61 = oneMinusSourceAlpha;		HX_STACK_VAR(tmp61,"tmp61");
												HX_STACK_LINE(281)
												Float tmp62 = (tmp60 * tmp61);		HX_STACK_VAR(tmp62,"tmp62");
												HX_STACK_LINE(281)
												Float tmp63 = (tmp56 + tmp62);		HX_STACK_VAR(tmp63,"tmp63");
												HX_STACK_LINE(281)
												Float tmp64 = blendAlpha;		HX_STACK_VAR(tmp64,"tmp64");
												HX_STACK_LINE(281)
												Float tmp65 = (Float(tmp63) / Float(tmp64));		HX_STACK_VAR(tmp65,"tmp65");
												HX_STACK_LINE(281)
												int tmp66 = ::Math_obj::round(tmp65);		HX_STACK_VAR(tmp66,"tmp66");
												HX_STACK_LINE(281)
												int idx = tmp66;		HX_STACK_VAR(idx,"idx");
												HX_STACK_LINE(281)
												int tmp67 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp67,"tmp67");
												HX_STACK_LINE(281)
												tmp51 = (int(tmp67) & int((int)255));
											}
											HX_STACK_LINE(281)
											int value = tmp51;		HX_STACK_VAR(value,"value");
											HX_STACK_LINE(281)
											{
												HX_STACK_LINE(281)
												int tmp52 = (int(destPixel) >> int((int)24));		HX_STACK_VAR(tmp52,"tmp52");
												HX_STACK_LINE(281)
												int tmp53 = (int(tmp52) & int((int)255));		HX_STACK_VAR(tmp53,"tmp53");
												HX_STACK_LINE(281)
												int tmp54 = (int(tmp53) & int((int)255));		HX_STACK_VAR(tmp54,"tmp54");
												HX_STACK_LINE(281)
												int tmp55 = (int(tmp54) << int((int)24));		HX_STACK_VAR(tmp55,"tmp55");
												HX_STACK_LINE(281)
												int tmp56 = (int(value) & int((int)255));		HX_STACK_VAR(tmp56,"tmp56");
												HX_STACK_LINE(281)
												int tmp57 = (int(tmp56) << int((int)16));		HX_STACK_VAR(tmp57,"tmp57");
												HX_STACK_LINE(281)
												int tmp58 = (int(tmp55) | int(tmp57));		HX_STACK_VAR(tmp58,"tmp58");
												HX_STACK_LINE(281)
												int tmp59 = (int(destPixel) >> int((int)8));		HX_STACK_VAR(tmp59,"tmp59");
												HX_STACK_LINE(281)
												int tmp60 = (int(tmp59) & int((int)255));		HX_STACK_VAR(tmp60,"tmp60");
												HX_STACK_LINE(281)
												int tmp61 = (int(tmp60) & int((int)255));		HX_STACK_VAR(tmp61,"tmp61");
												HX_STACK_LINE(281)
												int tmp62 = (int(tmp61) << int((int)8));		HX_STACK_VAR(tmp62,"tmp62");
												HX_STACK_LINE(281)
												int tmp63 = (int(tmp58) | int(tmp62));		HX_STACK_VAR(tmp63,"tmp63");
												HX_STACK_LINE(281)
												int tmp64 = (int(destPixel) & int((int)255));		HX_STACK_VAR(tmp64,"tmp64");
												HX_STACK_LINE(281)
												int tmp65 = (int(tmp64) & int((int)255));		HX_STACK_VAR(tmp65,"tmp65");
												HX_STACK_LINE(281)
												int tmp66 = (int(tmp63) | int(tmp65));		HX_STACK_VAR(tmp66,"tmp66");
												HX_STACK_LINE(281)
												destPixel = tmp66;
											}
											HX_STACK_LINE(281)
											value;
										}
										HX_STACK_LINE(282)
										{
											HX_STACK_LINE(282)
											Dynamic tmp51;		HX_STACK_VAR(tmp51,"tmp51");
											HX_STACK_LINE(282)
											{
												HX_STACK_LINE(282)
												::lime::utils::ArrayBufferView tmp52 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp52,"tmp52");
												HX_STACK_LINE(282)
												::lime::utils::ArrayBufferView this1 = tmp52;		HX_STACK_VAR(this1,"this1");
												HX_STACK_LINE(282)
												int tmp53 = (int(sourcePixel) >> int((int)8));		HX_STACK_VAR(tmp53,"tmp53");
												HX_STACK_LINE(282)
												int tmp54 = (int(tmp53) & int((int)255));		HX_STACK_VAR(tmp54,"tmp54");
												HX_STACK_LINE(282)
												Float tmp55 = sourceAlpha;		HX_STACK_VAR(tmp55,"tmp55");
												HX_STACK_LINE(282)
												Float tmp56 = (tmp54 * tmp55);		HX_STACK_VAR(tmp56,"tmp56");
												HX_STACK_LINE(282)
												int tmp57 = (int(destPixel) >> int((int)8));		HX_STACK_VAR(tmp57,"tmp57");
												HX_STACK_LINE(282)
												int tmp58 = (int(tmp57) & int((int)255));		HX_STACK_VAR(tmp58,"tmp58");
												HX_STACK_LINE(282)
												Float tmp59 = destAlpha;		HX_STACK_VAR(tmp59,"tmp59");
												HX_STACK_LINE(282)
												Float tmp60 = (tmp58 * tmp59);		HX_STACK_VAR(tmp60,"tmp60");
												HX_STACK_LINE(282)
												Float tmp61 = oneMinusSourceAlpha;		HX_STACK_VAR(tmp61,"tmp61");
												HX_STACK_LINE(282)
												Float tmp62 = (tmp60 * tmp61);		HX_STACK_VAR(tmp62,"tmp62");
												HX_STACK_LINE(282)
												Float tmp63 = (tmp56 + tmp62);		HX_STACK_VAR(tmp63,"tmp63");
												HX_STACK_LINE(282)
												Float tmp64 = blendAlpha;		HX_STACK_VAR(tmp64,"tmp64");
												HX_STACK_LINE(282)
												Float tmp65 = (Float(tmp63) / Float(tmp64));		HX_STACK_VAR(tmp65,"tmp65");
												HX_STACK_LINE(282)
												int tmp66 = ::Math_obj::round(tmp65);		HX_STACK_VAR(tmp66,"tmp66");
												HX_STACK_LINE(282)
												int idx = tmp66;		HX_STACK_VAR(idx,"idx");
												HX_STACK_LINE(282)
												int tmp67 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp67,"tmp67");
												HX_STACK_LINE(282)
												tmp51 = (int(tmp67) & int((int)255));
											}
											HX_STACK_LINE(282)
											int value = tmp51;		HX_STACK_VAR(value,"value");
											HX_STACK_LINE(282)
											{
												HX_STACK_LINE(282)
												int tmp52 = (int(destPixel) >> int((int)24));		HX_STACK_VAR(tmp52,"tmp52");
												HX_STACK_LINE(282)
												int tmp53 = (int(tmp52) & int((int)255));		HX_STACK_VAR(tmp53,"tmp53");
												HX_STACK_LINE(282)
												int tmp54 = (int(tmp53) & int((int)255));		HX_STACK_VAR(tmp54,"tmp54");
												HX_STACK_LINE(282)
												int tmp55 = (int(tmp54) << int((int)24));		HX_STACK_VAR(tmp55,"tmp55");
												HX_STACK_LINE(282)
												int tmp56 = (int(destPixel) >> int((int)16));		HX_STACK_VAR(tmp56,"tmp56");
												HX_STACK_LINE(282)
												int tmp57 = (int(tmp56) & int((int)255));		HX_STACK_VAR(tmp57,"tmp57");
												HX_STACK_LINE(282)
												int tmp58 = (int(tmp57) & int((int)255));		HX_STACK_VAR(tmp58,"tmp58");
												HX_STACK_LINE(282)
												int tmp59 = (int(tmp58) << int((int)16));		HX_STACK_VAR(tmp59,"tmp59");
												HX_STACK_LINE(282)
												int tmp60 = (int(tmp55) | int(tmp59));		HX_STACK_VAR(tmp60,"tmp60");
												HX_STACK_LINE(282)
												int tmp61 = (int(value) & int((int)255));		HX_STACK_VAR(tmp61,"tmp61");
												HX_STACK_LINE(282)
												int tmp62 = (int(tmp61) << int((int)8));		HX_STACK_VAR(tmp62,"tmp62");
												HX_STACK_LINE(282)
												int tmp63 = (int(tmp60) | int(tmp62));		HX_STACK_VAR(tmp63,"tmp63");
												HX_STACK_LINE(282)
												int tmp64 = (int(destPixel) & int((int)255));		HX_STACK_VAR(tmp64,"tmp64");
												HX_STACK_LINE(282)
												int tmp65 = (int(tmp64) & int((int)255));		HX_STACK_VAR(tmp65,"tmp65");
												HX_STACK_LINE(282)
												int tmp66 = (int(tmp63) | int(tmp65));		HX_STACK_VAR(tmp66,"tmp66");
												HX_STACK_LINE(282)
												destPixel = tmp66;
											}
											HX_STACK_LINE(282)
											value;
										}
										HX_STACK_LINE(283)
										{
											HX_STACK_LINE(283)
											Dynamic tmp51;		HX_STACK_VAR(tmp51,"tmp51");
											HX_STACK_LINE(283)
											{
												HX_STACK_LINE(283)
												::lime::utils::ArrayBufferView tmp52 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp52,"tmp52");
												HX_STACK_LINE(283)
												::lime::utils::ArrayBufferView this1 = tmp52;		HX_STACK_VAR(this1,"this1");
												HX_STACK_LINE(283)
												Float tmp53 = (blendAlpha * ((Float)255.0));		HX_STACK_VAR(tmp53,"tmp53");
												HX_STACK_LINE(283)
												int tmp54 = ::Math_obj::round(tmp53);		HX_STACK_VAR(tmp54,"tmp54");
												HX_STACK_LINE(283)
												int idx = tmp54;		HX_STACK_VAR(idx,"idx");
												HX_STACK_LINE(283)
												int tmp55 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp55,"tmp55");
												HX_STACK_LINE(283)
												tmp51 = (int(tmp55) & int((int)255));
											}
											HX_STACK_LINE(283)
											int value = tmp51;		HX_STACK_VAR(value,"value");
											HX_STACK_LINE(283)
											{
												HX_STACK_LINE(283)
												int tmp52 = (int(destPixel) >> int((int)24));		HX_STACK_VAR(tmp52,"tmp52");
												HX_STACK_LINE(283)
												int tmp53 = (int(tmp52) & int((int)255));		HX_STACK_VAR(tmp53,"tmp53");
												HX_STACK_LINE(283)
												int tmp54 = (int(tmp53) & int((int)255));		HX_STACK_VAR(tmp54,"tmp54");
												HX_STACK_LINE(283)
												int tmp55 = (int(tmp54) << int((int)24));		HX_STACK_VAR(tmp55,"tmp55");
												HX_STACK_LINE(283)
												int tmp56 = (int(destPixel) >> int((int)16));		HX_STACK_VAR(tmp56,"tmp56");
												HX_STACK_LINE(283)
												int tmp57 = (int(tmp56) & int((int)255));		HX_STACK_VAR(tmp57,"tmp57");
												HX_STACK_LINE(283)
												int tmp58 = (int(tmp57) & int((int)255));		HX_STACK_VAR(tmp58,"tmp58");
												HX_STACK_LINE(283)
												int tmp59 = (int(tmp58) << int((int)16));		HX_STACK_VAR(tmp59,"tmp59");
												HX_STACK_LINE(283)
												int tmp60 = (int(tmp55) | int(tmp59));		HX_STACK_VAR(tmp60,"tmp60");
												HX_STACK_LINE(283)
												int tmp61 = (int(destPixel) >> int((int)8));		HX_STACK_VAR(tmp61,"tmp61");
												HX_STACK_LINE(283)
												int tmp62 = (int(tmp61) & int((int)255));		HX_STACK_VAR(tmp62,"tmp62");
												HX_STACK_LINE(283)
												int tmp63 = (int(tmp62) & int((int)255));		HX_STACK_VAR(tmp63,"tmp63");
												HX_STACK_LINE(283)
												int tmp64 = (int(tmp63) << int((int)8));		HX_STACK_VAR(tmp64,"tmp64");
												HX_STACK_LINE(283)
												int tmp65 = (int(tmp60) | int(tmp64));		HX_STACK_VAR(tmp65,"tmp65");
												HX_STACK_LINE(283)
												int tmp66 = (int(value) & int((int)255));		HX_STACK_VAR(tmp66,"tmp66");
												HX_STACK_LINE(283)
												int tmp67 = (int(tmp65) | int(tmp66));		HX_STACK_VAR(tmp67,"tmp67");
												HX_STACK_LINE(283)
												destPixel = tmp67;
											}
											HX_STACK_LINE(283)
											value;
										}
									}
									HX_STACK_LINE(287)
									{
										HX_STACK_LINE(287)
										bool tmp51 = destPremultiplied;		HX_STACK_VAR(tmp51,"tmp51");
										HX_STACK_LINE(287)
										if ((tmp51)){
											HX_STACK_LINE(287)
											int tmp52 = (int(destPixel) & int((int)255));		HX_STACK_VAR(tmp52,"tmp52");
											HX_STACK_LINE(287)
											bool tmp53 = (tmp52 == (int)0);		HX_STACK_VAR(tmp53,"tmp53");
											HX_STACK_LINE(287)
											if ((tmp53)){
												HX_STACK_LINE(287)
												bool tmp54 = (destPixel != (int)0);		HX_STACK_VAR(tmp54,"tmp54");
												HX_STACK_LINE(287)
												if ((tmp54)){
													HX_STACK_LINE(287)
													destPixel = (int)0;
												}
											}
											else{
												HX_STACK_LINE(287)
												int tmp54 = (int(destPixel) & int((int)255));		HX_STACK_VAR(tmp54,"tmp54");
												HX_STACK_LINE(287)
												bool tmp55 = (tmp54 != (int)255);		HX_STACK_VAR(tmp55,"tmp55");
												HX_STACK_LINE(287)
												if ((tmp55)){
													HX_STACK_LINE(287)
													Dynamic tmp56;		HX_STACK_VAR(tmp56,"tmp56");
													HX_STACK_LINE(287)
													{
														HX_STACK_LINE(287)
														::lime::utils::ArrayBufferView tmp57 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__alpha16;		HX_STACK_VAR(tmp57,"tmp57");
														HX_STACK_LINE(287)
														::lime::utils::ArrayBufferView this1 = tmp57;		HX_STACK_VAR(this1,"this1");
														HX_STACK_LINE(287)
														tmp56 = ::__hxcpp_memory_get_ui32(this1->buffer->b,(this1->byteOffset + (((int(destPixel) & int((int)255))) * (int)4)));
													}
													HX_STACK_LINE(287)
													::lime::math::color::_RGBA::RGBA_Impl__obj::a16 = tmp56;
													HX_STACK_LINE(287)
													{
														HX_STACK_LINE(287)
														int tmp57 = (int(destPixel) >> int((int)24));		HX_STACK_VAR(tmp57,"tmp57");
														HX_STACK_LINE(287)
														int tmp58 = (int(tmp57) & int((int)255));		HX_STACK_VAR(tmp58,"tmp58");
														HX_STACK_LINE(287)
														int tmp59 = ::lime::math::color::_RGBA::RGBA_Impl__obj::a16;		HX_STACK_VAR(tmp59,"tmp59");
														HX_STACK_LINE(287)
														int tmp60 = (tmp58 * tmp59);		HX_STACK_VAR(tmp60,"tmp60");
														HX_STACK_LINE(287)
														int tmp61 = (int(tmp60) >> int((int)16));		HX_STACK_VAR(tmp61,"tmp61");
														HX_STACK_LINE(287)
														int tmp62 = (int(tmp61) & int((int)255));		HX_STACK_VAR(tmp62,"tmp62");
														HX_STACK_LINE(287)
														int tmp63 = (int(tmp62) << int((int)24));		HX_STACK_VAR(tmp63,"tmp63");
														HX_STACK_LINE(287)
														int tmp64 = (int(destPixel) >> int((int)16));		HX_STACK_VAR(tmp64,"tmp64");
														HX_STACK_LINE(287)
														int tmp65 = (int(tmp64) & int((int)255));		HX_STACK_VAR(tmp65,"tmp65");
														HX_STACK_LINE(287)
														int tmp66 = ::lime::math::color::_RGBA::RGBA_Impl__obj::a16;		HX_STACK_VAR(tmp66,"tmp66");
														HX_STACK_LINE(287)
														int tmp67 = (tmp65 * tmp66);		HX_STACK_VAR(tmp67,"tmp67");
														HX_STACK_LINE(287)
														int tmp68 = (int(tmp67) >> int((int)16));		HX_STACK_VAR(tmp68,"tmp68");
														HX_STACK_LINE(287)
														int tmp69 = (int(tmp68) & int((int)255));		HX_STACK_VAR(tmp69,"tmp69");
														HX_STACK_LINE(287)
														int tmp70 = (int(tmp69) << int((int)16));		HX_STACK_VAR(tmp70,"tmp70");
														HX_STACK_LINE(287)
														int tmp71 = (int(tmp63) | int(tmp70));		HX_STACK_VAR(tmp71,"tmp71");
														HX_STACK_LINE(287)
														int tmp72 = (int(destPixel) >> int((int)8));		HX_STACK_VAR(tmp72,"tmp72");
														HX_STACK_LINE(287)
														int tmp73 = (int(tmp72) & int((int)255));		HX_STACK_VAR(tmp73,"tmp73");
														HX_STACK_LINE(287)
														int tmp74 = ::lime::math::color::_RGBA::RGBA_Impl__obj::a16;		HX_STACK_VAR(tmp74,"tmp74");
														HX_STACK_LINE(287)
														int tmp75 = (tmp73 * tmp74);		HX_STACK_VAR(tmp75,"tmp75");
														HX_STACK_LINE(287)
														int tmp76 = (int(tmp75) >> int((int)16));		HX_STACK_VAR(tmp76,"tmp76");
														HX_STACK_LINE(287)
														int tmp77 = (int(tmp76) & int((int)255));		HX_STACK_VAR(tmp77,"tmp77");
														HX_STACK_LINE(287)
														int tmp78 = (int(tmp77) << int((int)8));		HX_STACK_VAR(tmp78,"tmp78");
														HX_STACK_LINE(287)
														int tmp79 = (int(tmp71) | int(tmp78));		HX_STACK_VAR(tmp79,"tmp79");
														HX_STACK_LINE(287)
														int tmp80 = (int(destPixel) & int((int)255));		HX_STACK_VAR(tmp80,"tmp80");
														HX_STACK_LINE(287)
														int tmp81 = (int(tmp80) & int((int)255));		HX_STACK_VAR(tmp81,"tmp81");
														HX_STACK_LINE(287)
														int tmp82 = (int(tmp79) | int(tmp81));		HX_STACK_VAR(tmp82,"tmp82");
														HX_STACK_LINE(287)
														destPixel = tmp82;
													}
												}
											}
										}
										HX_STACK_LINE(287)
										int tmp52 = destFormat;		HX_STACK_VAR(tmp52,"tmp52");
										HX_STACK_LINE(287)
										switch( (int)(tmp52)){
											case (int)2: {
												HX_STACK_LINE(287)
												{
													HX_STACK_LINE(287)
													int tmp53 = (int(destPixel) >> int((int)8));		HX_STACK_VAR(tmp53,"tmp53");
													HX_STACK_LINE(287)
													int tmp54 = (int(tmp53) & int((int)255));		HX_STACK_VAR(tmp54,"tmp54");
													HX_STACK_LINE(287)
													int val = tmp54;		HX_STACK_VAR(val,"val");
													HX_STACK_LINE(287)
													::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + destPosition),val);
													HX_STACK_LINE(287)
													val;
												}
												HX_STACK_LINE(287)
												{
													HX_STACK_LINE(287)
													int tmp53 = (int(destPixel) >> int((int)16));		HX_STACK_VAR(tmp53,"tmp53");
													HX_STACK_LINE(287)
													int tmp54 = (int(tmp53) & int((int)255));		HX_STACK_VAR(tmp54,"tmp54");
													HX_STACK_LINE(287)
													int val = tmp54;		HX_STACK_VAR(val,"val");
													HX_STACK_LINE(287)
													::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)1))),val);
													HX_STACK_LINE(287)
													val;
												}
												HX_STACK_LINE(287)
												{
													HX_STACK_LINE(287)
													int tmp53 = (int(destPixel) >> int((int)24));		HX_STACK_VAR(tmp53,"tmp53");
													HX_STACK_LINE(287)
													int tmp54 = (int(tmp53) & int((int)255));		HX_STACK_VAR(tmp54,"tmp54");
													HX_STACK_LINE(287)
													int val = tmp54;		HX_STACK_VAR(val,"val");
													HX_STACK_LINE(287)
													::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)2))),val);
													HX_STACK_LINE(287)
													val;
												}
												HX_STACK_LINE(287)
												{
													HX_STACK_LINE(287)
													int tmp53 = (int(destPixel) & int((int)255));		HX_STACK_VAR(tmp53,"tmp53");
													HX_STACK_LINE(287)
													int val = tmp53;		HX_STACK_VAR(val,"val");
													HX_STACK_LINE(287)
													::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)3))),val);
													HX_STACK_LINE(287)
													val;
												}
											}
											;break;
											case (int)0: {
												HX_STACK_LINE(287)
												{
													HX_STACK_LINE(287)
													int tmp53 = (int(destPixel) >> int((int)24));		HX_STACK_VAR(tmp53,"tmp53");
													HX_STACK_LINE(287)
													int tmp54 = (int(tmp53) & int((int)255));		HX_STACK_VAR(tmp54,"tmp54");
													HX_STACK_LINE(287)
													int val = tmp54;		HX_STACK_VAR(val,"val");
													HX_STACK_LINE(287)
													::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + destPosition),val);
													HX_STACK_LINE(287)
													val;
												}
												HX_STACK_LINE(287)
												{
													HX_STACK_LINE(287)
													int tmp53 = (int(destPixel) >> int((int)16));		HX_STACK_VAR(tmp53,"tmp53");
													HX_STACK_LINE(287)
													int tmp54 = (int(tmp53) & int((int)255));		HX_STACK_VAR(tmp54,"tmp54");
													HX_STACK_LINE(287)
													int val = tmp54;		HX_STACK_VAR(val,"val");
													HX_STACK_LINE(287)
													::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)1))),val);
													HX_STACK_LINE(287)
													val;
												}
												HX_STACK_LINE(287)
												{
													HX_STACK_LINE(287)
													int tmp53 = (int(destPixel) >> int((int)8));		HX_STACK_VAR(tmp53,"tmp53");
													HX_STACK_LINE(287)
													int tmp54 = (int(tmp53) & int((int)255));		HX_STACK_VAR(tmp54,"tmp54");
													HX_STACK_LINE(287)
													int val = tmp54;		HX_STACK_VAR(val,"val");
													HX_STACK_LINE(287)
													::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)2))),val);
													HX_STACK_LINE(287)
													val;
												}
												HX_STACK_LINE(287)
												{
													HX_STACK_LINE(287)
													int tmp53 = (int(destPixel) & int((int)255));		HX_STACK_VAR(tmp53,"tmp53");
													HX_STACK_LINE(287)
													int val = tmp53;		HX_STACK_VAR(val,"val");
													HX_STACK_LINE(287)
													::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)3))),val);
													HX_STACK_LINE(287)
													val;
												}
											}
											;break;
											case (int)1: {
												HX_STACK_LINE(287)
												{
													HX_STACK_LINE(287)
													int tmp53 = (int(destPixel) & int((int)255));		HX_STACK_VAR(tmp53,"tmp53");
													HX_STACK_LINE(287)
													int val = tmp53;		HX_STACK_VAR(val,"val");
													HX_STACK_LINE(287)
													::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + destPosition),val);
													HX_STACK_LINE(287)
													val;
												}
												HX_STACK_LINE(287)
												{
													HX_STACK_LINE(287)
													int tmp53 = (int(destPixel) >> int((int)24));		HX_STACK_VAR(tmp53,"tmp53");
													HX_STACK_LINE(287)
													int tmp54 = (int(tmp53) & int((int)255));		HX_STACK_VAR(tmp54,"tmp54");
													HX_STACK_LINE(287)
													int val = tmp54;		HX_STACK_VAR(val,"val");
													HX_STACK_LINE(287)
													::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)1))),val);
													HX_STACK_LINE(287)
													val;
												}
												HX_STACK_LINE(287)
												{
													HX_STACK_LINE(287)
													int tmp53 = (int(destPixel) >> int((int)16));		HX_STACK_VAR(tmp53,"tmp53");
													HX_STACK_LINE(287)
													int tmp54 = (int(tmp53) & int((int)255));		HX_STACK_VAR(tmp54,"tmp54");
													HX_STACK_LINE(287)
													int val = tmp54;		HX_STACK_VAR(val,"val");
													HX_STACK_LINE(287)
													::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)2))),val);
													HX_STACK_LINE(287)
													val;
												}
												HX_STACK_LINE(287)
												{
													HX_STACK_LINE(287)
													int tmp53 = (int(destPixel) >> int((int)8));		HX_STACK_VAR(tmp53,"tmp53");
													HX_STACK_LINE(287)
													int tmp54 = (int(tmp53) & int((int)255));		HX_STACK_VAR(tmp54,"tmp54");
													HX_STACK_LINE(287)
													int val = tmp54;		HX_STACK_VAR(val,"val");
													HX_STACK_LINE(287)
													::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)3))),val);
													HX_STACK_LINE(287)
													val;
												}
											}
											;break;
										}
									}
									HX_STACK_LINE(289)
									hx::AddEq(sourcePosition,(int)4);
									HX_STACK_LINE(290)
									hx::AddEq(destPosition,(int)4);
								}
							}
						}
					}
				}
			}
		}
		HX_STACK_LINE(302)
		image->dirty = true;
		HX_STACK_LINE(303)
		(image->version)++;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC7(ImageDataUtil_obj,copyPixels,(void))

Void ImageDataUtil_obj::fillRect( ::lime::graphics::Image image,::lime::math::Rectangle rect,int color,int format){
{
		HX_STACK_FRAME("lime.graphics.utils.ImageDataUtil","fillRect",0x163460f5,"lime.graphics.utils.ImageDataUtil.fillRect","lime/graphics/utils/ImageDataUtil.hx",308,0x494d921f)
		HX_STACK_ARG(image,"image")
		HX_STACK_ARG(rect,"rect")
		HX_STACK_ARG(color,"color")
		HX_STACK_ARG(format,"format")
		HX_STACK_LINE(310)
		int fillColor;		HX_STACK_VAR(fillColor,"fillColor");
		HX_STACK_LINE(312)
		int tmp = format;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(312)
		switch( (int)(tmp)){
			case (int)1: {
				HX_STACK_LINE(314)
				int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(314)
				{
					HX_STACK_LINE(314)
					int argb = color;		HX_STACK_VAR(argb,"argb");
					HX_STACK_LINE(314)
					{
						HX_STACK_LINE(314)
						int tmp2;		HX_STACK_VAR(tmp2,"tmp2");
						HX_STACK_LINE(314)
						{
							HX_STACK_LINE(314)
							int rgba = (int)0;		HX_STACK_VAR(rgba,"rgba");
							HX_STACK_LINE(314)
							tmp2 = rgba;
						}
						HX_STACK_LINE(314)
						int rgba = tmp2;		HX_STACK_VAR(rgba,"rgba");
						HX_STACK_LINE(314)
						{
							HX_STACK_LINE(314)
							int tmp3 = (int(argb) >> int((int)16));		HX_STACK_VAR(tmp3,"tmp3");
							HX_STACK_LINE(314)
							int tmp4 = (int(tmp3) & int((int)255));		HX_STACK_VAR(tmp4,"tmp4");
							HX_STACK_LINE(314)
							int tmp5 = (int(tmp4) & int((int)255));		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(314)
							int tmp6 = (int(tmp5) << int((int)24));		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(314)
							int tmp7 = (int(argb) >> int((int)8));		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(314)
							int tmp8 = (int(tmp7) & int((int)255));		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(314)
							int tmp9 = (int(tmp8) & int((int)255));		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(314)
							int tmp10 = (int(tmp9) << int((int)16));		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(314)
							int tmp11 = (int(tmp6) | int(tmp10));		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(314)
							int tmp12 = (int(argb) & int((int)255));		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(314)
							int tmp13 = (int(tmp12) & int((int)255));		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(314)
							int tmp14 = (int(tmp13) << int((int)8));		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(314)
							int tmp15 = (int(tmp11) | int(tmp14));		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(314)
							int tmp16 = (int(argb) >> int((int)24));		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(314)
							int tmp17 = (int(tmp16) & int((int)255));		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(314)
							int tmp18 = (int(tmp17) & int((int)255));		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(314)
							int tmp19 = (int(tmp15) | int(tmp18));		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(314)
							rgba = tmp19;
						}
						HX_STACK_LINE(314)
						tmp1 = rgba;
					}
				}
				HX_STACK_LINE(314)
				fillColor = tmp1;
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(315)
				int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(315)
				{
					HX_STACK_LINE(315)
					int bgra = color;		HX_STACK_VAR(bgra,"bgra");
					HX_STACK_LINE(315)
					{
						HX_STACK_LINE(315)
						int tmp2;		HX_STACK_VAR(tmp2,"tmp2");
						HX_STACK_LINE(315)
						{
							HX_STACK_LINE(315)
							int rgba = (int)0;		HX_STACK_VAR(rgba,"rgba");
							HX_STACK_LINE(315)
							tmp2 = rgba;
						}
						HX_STACK_LINE(315)
						int rgba = tmp2;		HX_STACK_VAR(rgba,"rgba");
						HX_STACK_LINE(315)
						{
							HX_STACK_LINE(315)
							int tmp3 = (int(bgra) >> int((int)8));		HX_STACK_VAR(tmp3,"tmp3");
							HX_STACK_LINE(315)
							int tmp4 = (int(tmp3) & int((int)255));		HX_STACK_VAR(tmp4,"tmp4");
							HX_STACK_LINE(315)
							int tmp5 = (int(tmp4) & int((int)255));		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(315)
							int tmp6 = (int(tmp5) << int((int)24));		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(315)
							int tmp7 = (int(bgra) >> int((int)16));		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(315)
							int tmp8 = (int(tmp7) & int((int)255));		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(315)
							int tmp9 = (int(tmp8) & int((int)255));		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(315)
							int tmp10 = (int(tmp9) << int((int)16));		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(315)
							int tmp11 = (int(tmp6) | int(tmp10));		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(315)
							int tmp12 = (int(bgra) >> int((int)24));		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(315)
							int tmp13 = (int(tmp12) & int((int)255));		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(315)
							int tmp14 = (int(tmp13) & int((int)255));		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(315)
							int tmp15 = (int(tmp14) << int((int)8));		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(315)
							int tmp16 = (int(tmp11) | int(tmp15));		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(315)
							int tmp17 = (int(bgra) & int((int)255));		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(315)
							int tmp18 = (int(tmp17) & int((int)255));		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(315)
							int tmp19 = (int(tmp16) | int(tmp18));		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(315)
							rgba = tmp19;
						}
						HX_STACK_LINE(315)
						tmp1 = rgba;
					}
				}
				HX_STACK_LINE(315)
				fillColor = tmp1;
			}
			;break;
			default: {
				HX_STACK_LINE(316)
				fillColor = color;
			}
		}
		HX_STACK_LINE(320)
		bool tmp1 = image->get_transparent();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(320)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(320)
		if ((tmp2)){
			HX_STACK_LINE(322)
			{
				HX_STACK_LINE(322)
				int tmp3 = (int(fillColor) >> int((int)24));		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(322)
				int tmp4 = (int(tmp3) & int((int)255));		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(322)
				int tmp5 = (int(tmp4) & int((int)255));		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(322)
				int tmp6 = (int(tmp5) << int((int)24));		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(322)
				int tmp7 = (int(fillColor) >> int((int)16));		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(322)
				int tmp8 = (int(tmp7) & int((int)255));		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(322)
				int tmp9 = (int(tmp8) & int((int)255));		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(322)
				int tmp10 = (int(tmp9) << int((int)16));		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(322)
				int tmp11 = (int(tmp6) | int(tmp10));		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(322)
				int tmp12 = (int(fillColor) >> int((int)8));		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(322)
				int tmp13 = (int(tmp12) & int((int)255));		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(322)
				int tmp14 = (int(tmp13) & int((int)255));		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(322)
				int tmp15 = (int(tmp14) << int((int)8));		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(322)
				int tmp16 = (int(tmp11) | int(tmp15));		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(322)
				int tmp17 = (int)255;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(322)
				int tmp18 = (int(tmp16) | int(tmp17));		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(322)
				fillColor = tmp18;
			}
			HX_STACK_LINE(322)
			(int)255;
		}
		HX_STACK_LINE(326)
		::lime::utils::ArrayBufferView tmp3 = image->buffer->data;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(326)
		::lime::utils::ArrayBufferView data = tmp3;		HX_STACK_VAR(data,"data");
		HX_STACK_LINE(327)
		bool tmp4 = (data == null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(327)
		if ((tmp4)){
			HX_STACK_LINE(327)
			return null();
		}
		HX_STACK_LINE(330)
		bool tmp5 = ::lime::_system::CFFI_obj::enabled;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(330)
		if ((tmp5)){
			HX_STACK_LINE(330)
			::lime::graphics::utils::ImageDataUtil_obj::cffi_lime_image_data_util_fill_rect.call(hx::DynamicPtr(image),hx::DynamicPtr(rect),(int((int(fillColor) >> int((int)16))) & int((int)65535)),(int(fillColor) & int((int)65535)));
		}
		else{
			HX_STACK_LINE(334)
			int tmp6 = image->buffer->format;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(334)
			int format1 = tmp6;		HX_STACK_VAR(format1,"format1");
			HX_STACK_LINE(335)
			bool tmp7 = image->buffer->premultiplied;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(335)
			bool premultiplied = tmp7;		HX_STACK_VAR(premultiplied,"premultiplied");
			HX_STACK_LINE(336)
			bool tmp8 = premultiplied;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(336)
			if ((tmp8)){
				HX_STACK_LINE(336)
				int tmp9 = (int(fillColor) & int((int)255));		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(336)
				bool tmp10 = (tmp9 == (int)0);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(336)
				if ((tmp10)){
					HX_STACK_LINE(336)
					bool tmp11 = (fillColor != (int)0);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(336)
					if ((tmp11)){
						HX_STACK_LINE(336)
						fillColor = (int)0;
					}
				}
				else{
					HX_STACK_LINE(336)
					int tmp11 = (int(fillColor) & int((int)255));		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(336)
					bool tmp12 = (tmp11 != (int)255);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(336)
					if ((tmp12)){
						HX_STACK_LINE(336)
						Dynamic tmp13;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(336)
						{
							HX_STACK_LINE(336)
							::lime::utils::ArrayBufferView tmp14 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__alpha16;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(336)
							::lime::utils::ArrayBufferView this1 = tmp14;		HX_STACK_VAR(this1,"this1");
							HX_STACK_LINE(336)
							tmp13 = ::__hxcpp_memory_get_ui32(this1->buffer->b,(this1->byteOffset + (((int(fillColor) & int((int)255))) * (int)4)));
						}
						HX_STACK_LINE(336)
						::lime::math::color::_RGBA::RGBA_Impl__obj::a16 = tmp13;
						HX_STACK_LINE(336)
						{
							HX_STACK_LINE(336)
							int tmp14 = (int(fillColor) >> int((int)24));		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(336)
							int tmp15 = (int(tmp14) & int((int)255));		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(336)
							int tmp16 = ::lime::math::color::_RGBA::RGBA_Impl__obj::a16;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(336)
							int tmp17 = (tmp15 * tmp16);		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(336)
							int tmp18 = (int(tmp17) >> int((int)16));		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(336)
							int tmp19 = (int(tmp18) & int((int)255));		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(336)
							int tmp20 = (int(tmp19) << int((int)24));		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(336)
							int tmp21 = (int(fillColor) >> int((int)16));		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(336)
							int tmp22 = (int(tmp21) & int((int)255));		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(336)
							int tmp23 = ::lime::math::color::_RGBA::RGBA_Impl__obj::a16;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(336)
							int tmp24 = (tmp22 * tmp23);		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(336)
							int tmp25 = (int(tmp24) >> int((int)16));		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(336)
							int tmp26 = (int(tmp25) & int((int)255));		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(336)
							int tmp27 = (int(tmp26) << int((int)16));		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(336)
							int tmp28 = (int(tmp20) | int(tmp27));		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(336)
							int tmp29 = (int(fillColor) >> int((int)8));		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(336)
							int tmp30 = (int(tmp29) & int((int)255));		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(336)
							int tmp31 = ::lime::math::color::_RGBA::RGBA_Impl__obj::a16;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(336)
							int tmp32 = (tmp30 * tmp31);		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(336)
							int tmp33 = (int(tmp32) >> int((int)16));		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(336)
							int tmp34 = (int(tmp33) & int((int)255));		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(336)
							int tmp35 = (int(tmp34) << int((int)8));		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(336)
							int tmp36 = (int(tmp28) | int(tmp35));		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(336)
							int tmp37 = (int(fillColor) & int((int)255));		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(336)
							int tmp38 = (int(tmp37) & int((int)255));		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(336)
							int tmp39 = (int(tmp36) | int(tmp38));		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(336)
							fillColor = tmp39;
						}
					}
				}
			}
			HX_STACK_LINE(338)
			::lime::graphics::utils::_ImageDataUtil::ImageDataView tmp9 = ::lime::graphics::utils::_ImageDataUtil::ImageDataView_obj::__new(image,rect);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(338)
			::lime::graphics::utils::_ImageDataUtil::ImageDataView dataView = tmp9;		HX_STACK_VAR(dataView,"dataView");
			HX_STACK_LINE(339)
			int row;		HX_STACK_VAR(row,"row");
			HX_STACK_LINE(341)
			{
				HX_STACK_LINE(341)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(341)
				int _g = dataView->height;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(341)
				while((true)){
					HX_STACK_LINE(341)
					bool tmp10 = (_g1 < _g);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(341)
					bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(341)
					if ((tmp11)){
						HX_STACK_LINE(341)
						break;
					}
					HX_STACK_LINE(341)
					int tmp12 = (_g1)++;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(341)
					int y = tmp12;		HX_STACK_VAR(y,"y");
					HX_STACK_LINE(343)
					int tmp13 = dataView->offset;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(343)
					int tmp14 = (dataView->stride * y);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(343)
					int tmp15 = (tmp13 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(343)
					row = tmp15;
					HX_STACK_LINE(345)
					{
						HX_STACK_LINE(345)
						int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
						HX_STACK_LINE(345)
						int _g2 = dataView->width;		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(345)
						while((true)){
							HX_STACK_LINE(345)
							bool tmp16 = (_g3 < _g2);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(345)
							bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(345)
							if ((tmp17)){
								HX_STACK_LINE(345)
								break;
							}
							HX_STACK_LINE(345)
							int tmp18 = (_g3)++;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(345)
							int x = tmp18;		HX_STACK_VAR(x,"x");
							HX_STACK_LINE(347)
							{
								HX_STACK_LINE(347)
								int tmp19 = row;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(347)
								int tmp20 = (x * (int)4);		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(347)
								int tmp21 = (tmp19 + tmp20);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(347)
								int offset = tmp21;		HX_STACK_VAR(offset,"offset");
								HX_STACK_LINE(347)
								int tmp22 = format1;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(347)
								switch( (int)(tmp22)){
									case (int)2: {
										HX_STACK_LINE(347)
										{
											HX_STACK_LINE(347)
											int tmp23 = (int(fillColor) >> int((int)8));		HX_STACK_VAR(tmp23,"tmp23");
											HX_STACK_LINE(347)
											int tmp24 = (int(tmp23) & int((int)255));		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(347)
											int val = tmp24;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(347)
											::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + offset),val);
											HX_STACK_LINE(347)
											val;
										}
										HX_STACK_LINE(347)
										{
											HX_STACK_LINE(347)
											int tmp23 = (int(fillColor) >> int((int)16));		HX_STACK_VAR(tmp23,"tmp23");
											HX_STACK_LINE(347)
											int tmp24 = (int(tmp23) & int((int)255));		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(347)
											int val = tmp24;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(347)
											::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)1))),val);
											HX_STACK_LINE(347)
											val;
										}
										HX_STACK_LINE(347)
										{
											HX_STACK_LINE(347)
											int tmp23 = (int(fillColor) >> int((int)24));		HX_STACK_VAR(tmp23,"tmp23");
											HX_STACK_LINE(347)
											int tmp24 = (int(tmp23) & int((int)255));		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(347)
											int val = tmp24;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(347)
											::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)2))),val);
											HX_STACK_LINE(347)
											val;
										}
										HX_STACK_LINE(347)
										{
											HX_STACK_LINE(347)
											int tmp23 = (int(fillColor) & int((int)255));		HX_STACK_VAR(tmp23,"tmp23");
											HX_STACK_LINE(347)
											int val = tmp23;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(347)
											::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)3))),val);
											HX_STACK_LINE(347)
											val;
										}
									}
									;break;
									case (int)0: {
										HX_STACK_LINE(347)
										{
											HX_STACK_LINE(347)
											int tmp23 = (int(fillColor) >> int((int)24));		HX_STACK_VAR(tmp23,"tmp23");
											HX_STACK_LINE(347)
											int tmp24 = (int(tmp23) & int((int)255));		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(347)
											int val = tmp24;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(347)
											::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + offset),val);
											HX_STACK_LINE(347)
											val;
										}
										HX_STACK_LINE(347)
										{
											HX_STACK_LINE(347)
											int tmp23 = (int(fillColor) >> int((int)16));		HX_STACK_VAR(tmp23,"tmp23");
											HX_STACK_LINE(347)
											int tmp24 = (int(tmp23) & int((int)255));		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(347)
											int val = tmp24;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(347)
											::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)1))),val);
											HX_STACK_LINE(347)
											val;
										}
										HX_STACK_LINE(347)
										{
											HX_STACK_LINE(347)
											int tmp23 = (int(fillColor) >> int((int)8));		HX_STACK_VAR(tmp23,"tmp23");
											HX_STACK_LINE(347)
											int tmp24 = (int(tmp23) & int((int)255));		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(347)
											int val = tmp24;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(347)
											::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)2))),val);
											HX_STACK_LINE(347)
											val;
										}
										HX_STACK_LINE(347)
										{
											HX_STACK_LINE(347)
											int tmp23 = (int(fillColor) & int((int)255));		HX_STACK_VAR(tmp23,"tmp23");
											HX_STACK_LINE(347)
											int val = tmp23;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(347)
											::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)3))),val);
											HX_STACK_LINE(347)
											val;
										}
									}
									;break;
									case (int)1: {
										HX_STACK_LINE(347)
										{
											HX_STACK_LINE(347)
											int tmp23 = (int(fillColor) & int((int)255));		HX_STACK_VAR(tmp23,"tmp23");
											HX_STACK_LINE(347)
											int val = tmp23;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(347)
											::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + offset),val);
											HX_STACK_LINE(347)
											val;
										}
										HX_STACK_LINE(347)
										{
											HX_STACK_LINE(347)
											int tmp23 = (int(fillColor) >> int((int)24));		HX_STACK_VAR(tmp23,"tmp23");
											HX_STACK_LINE(347)
											int tmp24 = (int(tmp23) & int((int)255));		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(347)
											int val = tmp24;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(347)
											::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)1))),val);
											HX_STACK_LINE(347)
											val;
										}
										HX_STACK_LINE(347)
										{
											HX_STACK_LINE(347)
											int tmp23 = (int(fillColor) >> int((int)16));		HX_STACK_VAR(tmp23,"tmp23");
											HX_STACK_LINE(347)
											int tmp24 = (int(tmp23) & int((int)255));		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(347)
											int val = tmp24;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(347)
											::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)2))),val);
											HX_STACK_LINE(347)
											val;
										}
										HX_STACK_LINE(347)
										{
											HX_STACK_LINE(347)
											int tmp23 = (int(fillColor) >> int((int)8));		HX_STACK_VAR(tmp23,"tmp23");
											HX_STACK_LINE(347)
											int tmp24 = (int(tmp23) & int((int)255));		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(347)
											int val = tmp24;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(347)
											::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)3))),val);
											HX_STACK_LINE(347)
											val;
										}
									}
									;break;
								}
							}
						}
					}
				}
			}
		}
		HX_STACK_LINE(355)
		image->dirty = true;
		HX_STACK_LINE(356)
		(image->version)++;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(ImageDataUtil_obj,fillRect,(void))

Void ImageDataUtil_obj::floodFill( ::lime::graphics::Image image,int x,int y,int color,int format){
{
		HX_STACK_FRAME("lime.graphics.utils.ImageDataUtil","floodFill",0xfbc79ff3,"lime.graphics.utils.ImageDataUtil.floodFill","lime/graphics/utils/ImageDataUtil.hx",361,0x494d921f)
		HX_STACK_ARG(image,"image")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(color,"color")
		HX_STACK_ARG(format,"format")
		HX_STACK_LINE(363)
		::lime::utils::ArrayBufferView tmp = image->buffer->data;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(363)
		::lime::utils::ArrayBufferView data = tmp;		HX_STACK_VAR(data,"data");
		HX_STACK_LINE(364)
		bool tmp1 = (data == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(364)
		if ((tmp1)){
			HX_STACK_LINE(364)
			return null();
		}
		HX_STACK_LINE(366)
		bool tmp2 = (format == (int)1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(366)
		if ((tmp2)){
			HX_STACK_LINE(366)
			int tmp3 = (int(color) & int((int)16777215));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(366)
			int tmp4 = (int(tmp3) << int((int)8));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(366)
			int tmp5 = (int(color) >> int((int)24));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(366)
			int tmp6 = (int(tmp5) & int((int)255));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(366)
			int tmp7 = (int(tmp4) | int(tmp6));		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(366)
			color = tmp7;
		}
		HX_STACK_LINE(369)
		bool tmp3 = ::lime::_system::CFFI_obj::enabled;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(369)
		if ((tmp3)){
			HX_STACK_LINE(369)
			::lime::graphics::utils::ImageDataUtil_obj::cffi_lime_image_data_util_flood_fill.call(hx::DynamicPtr(image),x,y,(int((int(color) >> int((int)16))) & int((int)65535)),(int(color) & int((int)65535)));
		}
		else{
			HX_STACK_LINE(373)
			int tmp4 = image->buffer->format;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(373)
			int format1 = tmp4;		HX_STACK_VAR(format1,"format1");
			HX_STACK_LINE(374)
			bool tmp5 = image->buffer->premultiplied;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(374)
			bool premultiplied = tmp5;		HX_STACK_VAR(premultiplied,"premultiplied");
			HX_STACK_LINE(376)
			int fillColor = color;		HX_STACK_VAR(fillColor,"fillColor");
			HX_STACK_LINE(378)
			int hitColor;		HX_STACK_VAR(hitColor,"hitColor");
			HX_STACK_LINE(379)
			{
				HX_STACK_LINE(379)
				int tmp6 = (y + image->offsetY);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(379)
				int tmp7 = image->buffer->width;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(379)
				int tmp8 = (tmp7 * (int)4);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(379)
				int tmp9 = (tmp6 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(379)
				int tmp10 = (x + image->offsetX);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(379)
				int tmp11 = (tmp10 * (int)4);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(379)
				int tmp12 = (tmp9 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(379)
				int offset = tmp12;		HX_STACK_VAR(offset,"offset");
				HX_STACK_LINE(379)
				int tmp13 = format1;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(379)
				switch( (int)(tmp13)){
					case (int)2: {
						HX_STACK_LINE(379)
						int tmp14 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)2))));		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(379)
						Dynamic tmp15 = (int(tmp14) & int((int)255));		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(379)
						int r = tmp15;		HX_STACK_VAR(r,"r");
						HX_STACK_LINE(379)
						int tmp16 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)1))));		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(379)
						Dynamic tmp17 = (int(tmp16) & int((int)255));		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(379)
						int g = tmp17;		HX_STACK_VAR(g,"g");
						HX_STACK_LINE(379)
						int tmp18 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + offset));		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(379)
						Dynamic tmp19 = (int(tmp18) & int((int)255));		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(379)
						int b = tmp19;		HX_STACK_VAR(b,"b");
						HX_STACK_LINE(379)
						int tmp20 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)3))));		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(379)
						Dynamic tmp21 = (int(tmp20) & int((int)255));		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(379)
						int a = tmp21;		HX_STACK_VAR(a,"a");
						HX_STACK_LINE(379)
						int tmp22 = (int(r) & int((int)255));		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(379)
						int tmp23 = (int(tmp22) << int((int)24));		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(379)
						int tmp24 = (int(g) & int((int)255));		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(379)
						int tmp25 = (int(tmp24) << int((int)16));		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(379)
						int tmp26 = (int(tmp23) | int(tmp25));		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(379)
						int tmp27 = (int(b) & int((int)255));		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(379)
						int tmp28 = (int(tmp27) << int((int)8));		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(379)
						int tmp29 = (int(tmp26) | int(tmp28));		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(379)
						int tmp30 = (int(a) & int((int)255));		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(379)
						int tmp31 = (int(tmp29) | int(tmp30));		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(379)
						hitColor = tmp31;
					}
					;break;
					case (int)0: {
						HX_STACK_LINE(379)
						int tmp14 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + offset));		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(379)
						Dynamic tmp15 = (int(tmp14) & int((int)255));		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(379)
						int r = tmp15;		HX_STACK_VAR(r,"r");
						HX_STACK_LINE(379)
						int tmp16 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)1))));		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(379)
						Dynamic tmp17 = (int(tmp16) & int((int)255));		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(379)
						int g = tmp17;		HX_STACK_VAR(g,"g");
						HX_STACK_LINE(379)
						int tmp18 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)2))));		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(379)
						Dynamic tmp19 = (int(tmp18) & int((int)255));		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(379)
						int b = tmp19;		HX_STACK_VAR(b,"b");
						HX_STACK_LINE(379)
						int tmp20 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)3))));		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(379)
						Dynamic tmp21 = (int(tmp20) & int((int)255));		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(379)
						int a = tmp21;		HX_STACK_VAR(a,"a");
						HX_STACK_LINE(379)
						int tmp22 = (int(r) & int((int)255));		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(379)
						int tmp23 = (int(tmp22) << int((int)24));		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(379)
						int tmp24 = (int(g) & int((int)255));		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(379)
						int tmp25 = (int(tmp24) << int((int)16));		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(379)
						int tmp26 = (int(tmp23) | int(tmp25));		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(379)
						int tmp27 = (int(b) & int((int)255));		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(379)
						int tmp28 = (int(tmp27) << int((int)8));		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(379)
						int tmp29 = (int(tmp26) | int(tmp28));		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(379)
						int tmp30 = (int(a) & int((int)255));		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(379)
						int tmp31 = (int(tmp29) | int(tmp30));		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(379)
						hitColor = tmp31;
					}
					;break;
					case (int)1: {
						HX_STACK_LINE(379)
						int tmp14 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)1))));		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(379)
						Dynamic tmp15 = (int(tmp14) & int((int)255));		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(379)
						int r = tmp15;		HX_STACK_VAR(r,"r");
						HX_STACK_LINE(379)
						int tmp16 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)2))));		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(379)
						Dynamic tmp17 = (int(tmp16) & int((int)255));		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(379)
						int g = tmp17;		HX_STACK_VAR(g,"g");
						HX_STACK_LINE(379)
						int tmp18 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)3))));		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(379)
						Dynamic tmp19 = (int(tmp18) & int((int)255));		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(379)
						int b = tmp19;		HX_STACK_VAR(b,"b");
						HX_STACK_LINE(379)
						int tmp20 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + offset));		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(379)
						Dynamic tmp21 = (int(tmp20) & int((int)255));		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(379)
						int a = tmp21;		HX_STACK_VAR(a,"a");
						HX_STACK_LINE(379)
						int tmp22 = (int(r) & int((int)255));		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(379)
						int tmp23 = (int(tmp22) << int((int)24));		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(379)
						int tmp24 = (int(g) & int((int)255));		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(379)
						int tmp25 = (int(tmp24) << int((int)16));		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(379)
						int tmp26 = (int(tmp23) | int(tmp25));		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(379)
						int tmp27 = (int(b) & int((int)255));		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(379)
						int tmp28 = (int(tmp27) << int((int)8));		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(379)
						int tmp29 = (int(tmp26) | int(tmp28));		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(379)
						int tmp30 = (int(a) & int((int)255));		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(379)
						int tmp31 = (int(tmp29) | int(tmp30));		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(379)
						hitColor = tmp31;
					}
					;break;
				}
				HX_STACK_LINE(379)
				bool tmp14 = premultiplied;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(379)
				if ((tmp14)){
					HX_STACK_LINE(379)
					int tmp15 = (int(hitColor) & int((int)255));		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(379)
					bool tmp16 = (tmp15 != (int)0);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(379)
					bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(379)
					if ((tmp16)){
						HX_STACK_LINE(379)
						int tmp18 = (int(hitColor) & int((int)255));		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(379)
						int tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(379)
						tmp17 = (tmp19 != (int)255);
					}
					else{
						HX_STACK_LINE(379)
						tmp17 = false;
					}
					HX_STACK_LINE(379)
					if ((tmp17)){
						HX_STACK_LINE(379)
						int tmp18 = (int(hitColor) & int((int)255));		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(379)
						Float tmp19 = (Float(((Float)255.0)) / Float(tmp18));		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(379)
						::lime::math::color::_RGBA::RGBA_Impl__obj::unmult = tmp19;
						HX_STACK_LINE(379)
						{
							HX_STACK_LINE(379)
							Dynamic tmp20;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(379)
							{
								HX_STACK_LINE(379)
								::lime::utils::ArrayBufferView tmp21 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(379)
								::lime::utils::ArrayBufferView this1 = tmp21;		HX_STACK_VAR(this1,"this1");
								HX_STACK_LINE(379)
								int tmp22 = (int(hitColor) >> int((int)24));		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(379)
								int tmp23 = (int(tmp22) & int((int)255));		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(379)
								Float tmp24 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(379)
								Float tmp25 = (tmp23 * tmp24);		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(379)
								int tmp26 = ::Math_obj::round(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(379)
								int idx = tmp26;		HX_STACK_VAR(idx,"idx");
								HX_STACK_LINE(379)
								int tmp27 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(379)
								tmp20 = (int(tmp27) & int((int)255));
							}
							HX_STACK_LINE(379)
							int r = tmp20;		HX_STACK_VAR(r,"r");
							HX_STACK_LINE(379)
							Dynamic tmp21;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(379)
							{
								HX_STACK_LINE(379)
								::lime::utils::ArrayBufferView tmp22 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(379)
								::lime::utils::ArrayBufferView this1 = tmp22;		HX_STACK_VAR(this1,"this1");
								HX_STACK_LINE(379)
								int tmp23 = (int(hitColor) >> int((int)16));		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(379)
								int tmp24 = (int(tmp23) & int((int)255));		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(379)
								Float tmp25 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(379)
								Float tmp26 = (tmp24 * tmp25);		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(379)
								int tmp27 = ::Math_obj::round(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(379)
								int idx = tmp27;		HX_STACK_VAR(idx,"idx");
								HX_STACK_LINE(379)
								int tmp28 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(379)
								tmp21 = (int(tmp28) & int((int)255));
							}
							HX_STACK_LINE(379)
							int g = tmp21;		HX_STACK_VAR(g,"g");
							HX_STACK_LINE(379)
							Dynamic tmp22;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(379)
							{
								HX_STACK_LINE(379)
								::lime::utils::ArrayBufferView tmp23 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(379)
								::lime::utils::ArrayBufferView this1 = tmp23;		HX_STACK_VAR(this1,"this1");
								HX_STACK_LINE(379)
								int tmp24 = (int(hitColor) >> int((int)8));		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(379)
								int tmp25 = (int(tmp24) & int((int)255));		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(379)
								Float tmp26 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(379)
								Float tmp27 = (tmp25 * tmp26);		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(379)
								int tmp28 = ::Math_obj::round(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(379)
								int idx = tmp28;		HX_STACK_VAR(idx,"idx");
								HX_STACK_LINE(379)
								int tmp29 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(379)
								tmp22 = (int(tmp29) & int((int)255));
							}
							HX_STACK_LINE(379)
							int b = tmp22;		HX_STACK_VAR(b,"b");
							HX_STACK_LINE(379)
							int tmp23 = (int(r) & int((int)255));		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(379)
							int tmp24 = (int(tmp23) << int((int)24));		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(379)
							int tmp25 = (int(g) & int((int)255));		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(379)
							int tmp26 = (int(tmp25) << int((int)16));		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(379)
							int tmp27 = (int(tmp24) | int(tmp26));		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(379)
							int tmp28 = (int(b) & int((int)255));		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(379)
							int tmp29 = (int(tmp28) << int((int)8));		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(379)
							int tmp30 = (int(tmp27) | int(tmp29));		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(379)
							int tmp31 = (int(hitColor) & int((int)255));		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(379)
							int tmp32 = (int(tmp31) & int((int)255));		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(379)
							int tmp33 = (int(tmp30) | int(tmp32));		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(379)
							hitColor = tmp33;
						}
					}
				}
			}
			HX_STACK_LINE(381)
			bool tmp6 = image->get_transparent();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(381)
			bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(381)
			if ((tmp7)){
				HX_STACK_LINE(383)
				{
					HX_STACK_LINE(383)
					{
						HX_STACK_LINE(383)
						int tmp8 = (int(fillColor) >> int((int)24));		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(383)
						int tmp9 = (int(tmp8) & int((int)255));		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(383)
						int tmp10 = (int(tmp9) & int((int)255));		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(383)
						int tmp11 = (int(tmp10) << int((int)24));		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(383)
						int tmp12 = (int(fillColor) >> int((int)16));		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(383)
						int tmp13 = (int(tmp12) & int((int)255));		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(383)
						int tmp14 = (int(tmp13) & int((int)255));		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(383)
						int tmp15 = (int(tmp14) << int((int)16));		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(383)
						int tmp16 = (int(tmp11) | int(tmp15));		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(383)
						int tmp17 = (int(fillColor) >> int((int)8));		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(383)
						int tmp18 = (int(tmp17) & int((int)255));		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(383)
						int tmp19 = (int(tmp18) & int((int)255));		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(383)
						int tmp20 = (int(tmp19) << int((int)8));		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(383)
						int tmp21 = (int(tmp16) | int(tmp20));		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(383)
						int tmp22 = (int)255;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(383)
						int tmp23 = (int(tmp21) | int(tmp22));		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(383)
						fillColor = tmp23;
					}
					HX_STACK_LINE(383)
					(int)255;
				}
				HX_STACK_LINE(384)
				{
					HX_STACK_LINE(384)
					{
						HX_STACK_LINE(384)
						int tmp8 = (int(hitColor) >> int((int)24));		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(384)
						int tmp9 = (int(tmp8) & int((int)255));		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(384)
						int tmp10 = (int(tmp9) & int((int)255));		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(384)
						int tmp11 = (int(tmp10) << int((int)24));		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(384)
						int tmp12 = (int(hitColor) >> int((int)16));		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(384)
						int tmp13 = (int(tmp12) & int((int)255));		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(384)
						int tmp14 = (int(tmp13) & int((int)255));		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(384)
						int tmp15 = (int(tmp14) << int((int)16));		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(384)
						int tmp16 = (int(tmp11) | int(tmp15));		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(384)
						int tmp17 = (int(hitColor) >> int((int)8));		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(384)
						int tmp18 = (int(tmp17) & int((int)255));		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(384)
						int tmp19 = (int(tmp18) & int((int)255));		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(384)
						int tmp20 = (int(tmp19) << int((int)8));		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(384)
						int tmp21 = (int(tmp16) | int(tmp20));		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(384)
						int tmp22 = (int)255;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(384)
						int tmp23 = (int(tmp21) | int(tmp22));		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(384)
						hitColor = tmp23;
					}
					HX_STACK_LINE(384)
					(int)255;
				}
			}
			HX_STACK_LINE(388)
			bool tmp8 = (fillColor == hitColor);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(388)
			if ((tmp8)){
				HX_STACK_LINE(388)
				return null();
			}
			HX_STACK_LINE(390)
			bool tmp9 = premultiplied;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(390)
			if ((tmp9)){
				HX_STACK_LINE(390)
				int tmp10 = (int(fillColor) & int((int)255));		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(390)
				bool tmp11 = (tmp10 == (int)0);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(390)
				if ((tmp11)){
					HX_STACK_LINE(390)
					bool tmp12 = (fillColor != (int)0);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(390)
					if ((tmp12)){
						HX_STACK_LINE(390)
						fillColor = (int)0;
					}
				}
				else{
					HX_STACK_LINE(390)
					int tmp12 = (int(fillColor) & int((int)255));		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(390)
					bool tmp13 = (tmp12 != (int)255);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(390)
					if ((tmp13)){
						HX_STACK_LINE(390)
						Dynamic tmp14;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(390)
						{
							HX_STACK_LINE(390)
							::lime::utils::ArrayBufferView tmp15 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__alpha16;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(390)
							::lime::utils::ArrayBufferView this1 = tmp15;		HX_STACK_VAR(this1,"this1");
							HX_STACK_LINE(390)
							tmp14 = ::__hxcpp_memory_get_ui32(this1->buffer->b,(this1->byteOffset + (((int(fillColor) & int((int)255))) * (int)4)));
						}
						HX_STACK_LINE(390)
						::lime::math::color::_RGBA::RGBA_Impl__obj::a16 = tmp14;
						HX_STACK_LINE(390)
						{
							HX_STACK_LINE(390)
							int tmp15 = (int(fillColor) >> int((int)24));		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(390)
							int tmp16 = (int(tmp15) & int((int)255));		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(390)
							int tmp17 = ::lime::math::color::_RGBA::RGBA_Impl__obj::a16;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(390)
							int tmp18 = (tmp16 * tmp17);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(390)
							int tmp19 = (int(tmp18) >> int((int)16));		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(390)
							int tmp20 = (int(tmp19) & int((int)255));		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(390)
							int tmp21 = (int(tmp20) << int((int)24));		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(390)
							int tmp22 = (int(fillColor) >> int((int)16));		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(390)
							int tmp23 = (int(tmp22) & int((int)255));		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(390)
							int tmp24 = ::lime::math::color::_RGBA::RGBA_Impl__obj::a16;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(390)
							int tmp25 = (tmp23 * tmp24);		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(390)
							int tmp26 = (int(tmp25) >> int((int)16));		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(390)
							int tmp27 = (int(tmp26) & int((int)255));		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(390)
							int tmp28 = (int(tmp27) << int((int)16));		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(390)
							int tmp29 = (int(tmp21) | int(tmp28));		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(390)
							int tmp30 = (int(fillColor) >> int((int)8));		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(390)
							int tmp31 = (int(tmp30) & int((int)255));		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(390)
							int tmp32 = ::lime::math::color::_RGBA::RGBA_Impl__obj::a16;		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(390)
							int tmp33 = (tmp31 * tmp32);		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(390)
							int tmp34 = (int(tmp33) >> int((int)16));		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(390)
							int tmp35 = (int(tmp34) & int((int)255));		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(390)
							int tmp36 = (int(tmp35) << int((int)8));		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(390)
							int tmp37 = (int(tmp29) | int(tmp36));		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(390)
							int tmp38 = (int(fillColor) & int((int)255));		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(390)
							int tmp39 = (int(tmp38) & int((int)255));		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(390)
							int tmp40 = (int(tmp37) | int(tmp39));		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(390)
							fillColor = tmp40;
						}
					}
				}
			}
			HX_STACK_LINE(392)
			Array< int > dx = Array_obj< int >::__new().Add((int)0).Add((int)-1).Add((int)1).Add((int)0);		HX_STACK_VAR(dx,"dx");
			HX_STACK_LINE(393)
			Array< int > dy = Array_obj< int >::__new().Add((int)-1).Add((int)0).Add((int)0).Add((int)1);		HX_STACK_VAR(dy,"dy");
			HX_STACK_LINE(395)
			int tmp10 = image->offsetX;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(395)
			int tmp11 = -(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(395)
			int minX = tmp11;		HX_STACK_VAR(minX,"minX");
			HX_STACK_LINE(396)
			int tmp12 = image->offsetY;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(396)
			int tmp13 = -(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(396)
			int minY = tmp13;		HX_STACK_VAR(minY,"minY");
			HX_STACK_LINE(397)
			int tmp14 = (minX + image->width);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(397)
			int maxX = tmp14;		HX_STACK_VAR(maxX,"maxX");
			HX_STACK_LINE(398)
			int tmp15 = (minY + image->height);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(398)
			int maxY = tmp15;		HX_STACK_VAR(maxY,"maxY");
			HX_STACK_LINE(400)
			Array< int > queue = Array_obj< int >::__new();		HX_STACK_VAR(queue,"queue");
			HX_STACK_LINE(401)
			int tmp16 = x;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(401)
			queue->push(tmp16);
			HX_STACK_LINE(402)
			int tmp17 = y;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(402)
			queue->push(tmp17);
			HX_STACK_LINE(404)
			Dynamic curPointX;		HX_STACK_VAR(curPointX,"curPointX");
			HX_STACK_LINE(404)
			Dynamic curPointY;		HX_STACK_VAR(curPointY,"curPointY");
			HX_STACK_LINE(404)
			int nextPointX;		HX_STACK_VAR(nextPointX,"nextPointX");
			HX_STACK_LINE(404)
			int nextPointY;		HX_STACK_VAR(nextPointY,"nextPointY");
			HX_STACK_LINE(404)
			int nextPointOffset;		HX_STACK_VAR(nextPointOffset,"nextPointOffset");
			HX_STACK_LINE(404)
			int readColor;		HX_STACK_VAR(readColor,"readColor");
			HX_STACK_LINE(406)
			while((true)){
				HX_STACK_LINE(406)
				bool tmp18 = (queue->length > (int)0);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(406)
				bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(406)
				if ((tmp19)){
					HX_STACK_LINE(406)
					break;
				}
				HX_STACK_LINE(408)
				Dynamic tmp20 = queue->pop();		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(408)
				curPointY = tmp20;
				HX_STACK_LINE(409)
				Dynamic tmp21 = queue->pop();		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(409)
				curPointX = tmp21;
				HX_STACK_LINE(411)
				{
					HX_STACK_LINE(411)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(411)
					while((true)){
						HX_STACK_LINE(411)
						bool tmp22 = (_g < (int)4);		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(411)
						bool tmp23 = !(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(411)
						if ((tmp23)){
							HX_STACK_LINE(411)
							break;
						}
						HX_STACK_LINE(411)
						int tmp24 = (_g)++;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(411)
						int i = tmp24;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(413)
						Dynamic tmp25 = curPointX;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(413)
						int tmp26 = dx->__get(i);		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(413)
						int tmp27 = (tmp25 + tmp26);		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(413)
						nextPointX = tmp27;
						HX_STACK_LINE(414)
						Dynamic tmp28 = curPointY;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(414)
						int tmp29 = dy->__get(i);		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(414)
						int tmp30 = (tmp28 + tmp29);		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(414)
						nextPointY = tmp30;
						HX_STACK_LINE(416)
						bool tmp31 = (nextPointX < minX);		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(416)
						bool tmp32 = !(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(416)
						bool tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(416)
						bool tmp34;		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(416)
						if ((tmp33)){
							HX_STACK_LINE(416)
							tmp34 = (nextPointY < minY);
						}
						else{
							HX_STACK_LINE(416)
							tmp34 = true;
						}
						HX_STACK_LINE(416)
						bool tmp35 = !(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(416)
						bool tmp36 = tmp35;		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(416)
						bool tmp37;		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(416)
						if ((tmp36)){
							HX_STACK_LINE(416)
							tmp37 = (nextPointX >= maxX);
						}
						else{
							HX_STACK_LINE(416)
							tmp37 = true;
						}
						HX_STACK_LINE(416)
						bool tmp38 = !(tmp37);		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(416)
						bool tmp39;		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(416)
						if ((tmp38)){
							HX_STACK_LINE(416)
							tmp39 = (nextPointY >= maxY);
						}
						else{
							HX_STACK_LINE(416)
							tmp39 = true;
						}
						HX_STACK_LINE(416)
						if ((tmp39)){
							HX_STACK_LINE(418)
							continue;
						}
						HX_STACK_LINE(422)
						int tmp40 = (nextPointY * image->width);		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(422)
						int tmp41 = nextPointX;		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(422)
						int tmp42 = (tmp40 + tmp41);		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(422)
						int tmp43 = (tmp42 * (int)4);		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(422)
						nextPointOffset = tmp43;
						HX_STACK_LINE(423)
						{
							HX_STACK_LINE(423)
							int tmp44 = format1;		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(423)
							switch( (int)(tmp44)){
								case (int)2: {
									HX_STACK_LINE(423)
									int tmp45 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((nextPointOffset + (int)2))));		HX_STACK_VAR(tmp45,"tmp45");
									HX_STACK_LINE(423)
									Dynamic tmp46 = (int(tmp45) & int((int)255));		HX_STACK_VAR(tmp46,"tmp46");
									HX_STACK_LINE(423)
									int r = tmp46;		HX_STACK_VAR(r,"r");
									HX_STACK_LINE(423)
									int tmp47 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((nextPointOffset + (int)1))));		HX_STACK_VAR(tmp47,"tmp47");
									HX_STACK_LINE(423)
									Dynamic tmp48 = (int(tmp47) & int((int)255));		HX_STACK_VAR(tmp48,"tmp48");
									HX_STACK_LINE(423)
									int g = tmp48;		HX_STACK_VAR(g,"g");
									HX_STACK_LINE(423)
									int tmp49 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + nextPointOffset));		HX_STACK_VAR(tmp49,"tmp49");
									HX_STACK_LINE(423)
									Dynamic tmp50 = (int(tmp49) & int((int)255));		HX_STACK_VAR(tmp50,"tmp50");
									HX_STACK_LINE(423)
									int b = tmp50;		HX_STACK_VAR(b,"b");
									HX_STACK_LINE(423)
									int tmp51 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((nextPointOffset + (int)3))));		HX_STACK_VAR(tmp51,"tmp51");
									HX_STACK_LINE(423)
									Dynamic tmp52 = (int(tmp51) & int((int)255));		HX_STACK_VAR(tmp52,"tmp52");
									HX_STACK_LINE(423)
									int a = tmp52;		HX_STACK_VAR(a,"a");
									HX_STACK_LINE(423)
									int tmp53 = (int(r) & int((int)255));		HX_STACK_VAR(tmp53,"tmp53");
									HX_STACK_LINE(423)
									int tmp54 = (int(tmp53) << int((int)24));		HX_STACK_VAR(tmp54,"tmp54");
									HX_STACK_LINE(423)
									int tmp55 = (int(g) & int((int)255));		HX_STACK_VAR(tmp55,"tmp55");
									HX_STACK_LINE(423)
									int tmp56 = (int(tmp55) << int((int)16));		HX_STACK_VAR(tmp56,"tmp56");
									HX_STACK_LINE(423)
									int tmp57 = (int(tmp54) | int(tmp56));		HX_STACK_VAR(tmp57,"tmp57");
									HX_STACK_LINE(423)
									int tmp58 = (int(b) & int((int)255));		HX_STACK_VAR(tmp58,"tmp58");
									HX_STACK_LINE(423)
									int tmp59 = (int(tmp58) << int((int)8));		HX_STACK_VAR(tmp59,"tmp59");
									HX_STACK_LINE(423)
									int tmp60 = (int(tmp57) | int(tmp59));		HX_STACK_VAR(tmp60,"tmp60");
									HX_STACK_LINE(423)
									int tmp61 = (int(a) & int((int)255));		HX_STACK_VAR(tmp61,"tmp61");
									HX_STACK_LINE(423)
									int tmp62 = (int(tmp60) | int(tmp61));		HX_STACK_VAR(tmp62,"tmp62");
									HX_STACK_LINE(423)
									readColor = tmp62;
								}
								;break;
								case (int)0: {
									HX_STACK_LINE(423)
									int tmp45 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + nextPointOffset));		HX_STACK_VAR(tmp45,"tmp45");
									HX_STACK_LINE(423)
									Dynamic tmp46 = (int(tmp45) & int((int)255));		HX_STACK_VAR(tmp46,"tmp46");
									HX_STACK_LINE(423)
									int r = tmp46;		HX_STACK_VAR(r,"r");
									HX_STACK_LINE(423)
									int tmp47 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((nextPointOffset + (int)1))));		HX_STACK_VAR(tmp47,"tmp47");
									HX_STACK_LINE(423)
									Dynamic tmp48 = (int(tmp47) & int((int)255));		HX_STACK_VAR(tmp48,"tmp48");
									HX_STACK_LINE(423)
									int g = tmp48;		HX_STACK_VAR(g,"g");
									HX_STACK_LINE(423)
									int tmp49 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((nextPointOffset + (int)2))));		HX_STACK_VAR(tmp49,"tmp49");
									HX_STACK_LINE(423)
									Dynamic tmp50 = (int(tmp49) & int((int)255));		HX_STACK_VAR(tmp50,"tmp50");
									HX_STACK_LINE(423)
									int b = tmp50;		HX_STACK_VAR(b,"b");
									HX_STACK_LINE(423)
									int tmp51 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((nextPointOffset + (int)3))));		HX_STACK_VAR(tmp51,"tmp51");
									HX_STACK_LINE(423)
									Dynamic tmp52 = (int(tmp51) & int((int)255));		HX_STACK_VAR(tmp52,"tmp52");
									HX_STACK_LINE(423)
									int a = tmp52;		HX_STACK_VAR(a,"a");
									HX_STACK_LINE(423)
									int tmp53 = (int(r) & int((int)255));		HX_STACK_VAR(tmp53,"tmp53");
									HX_STACK_LINE(423)
									int tmp54 = (int(tmp53) << int((int)24));		HX_STACK_VAR(tmp54,"tmp54");
									HX_STACK_LINE(423)
									int tmp55 = (int(g) & int((int)255));		HX_STACK_VAR(tmp55,"tmp55");
									HX_STACK_LINE(423)
									int tmp56 = (int(tmp55) << int((int)16));		HX_STACK_VAR(tmp56,"tmp56");
									HX_STACK_LINE(423)
									int tmp57 = (int(tmp54) | int(tmp56));		HX_STACK_VAR(tmp57,"tmp57");
									HX_STACK_LINE(423)
									int tmp58 = (int(b) & int((int)255));		HX_STACK_VAR(tmp58,"tmp58");
									HX_STACK_LINE(423)
									int tmp59 = (int(tmp58) << int((int)8));		HX_STACK_VAR(tmp59,"tmp59");
									HX_STACK_LINE(423)
									int tmp60 = (int(tmp57) | int(tmp59));		HX_STACK_VAR(tmp60,"tmp60");
									HX_STACK_LINE(423)
									int tmp61 = (int(a) & int((int)255));		HX_STACK_VAR(tmp61,"tmp61");
									HX_STACK_LINE(423)
									int tmp62 = (int(tmp60) | int(tmp61));		HX_STACK_VAR(tmp62,"tmp62");
									HX_STACK_LINE(423)
									readColor = tmp62;
								}
								;break;
								case (int)1: {
									HX_STACK_LINE(423)
									int tmp45 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((nextPointOffset + (int)1))));		HX_STACK_VAR(tmp45,"tmp45");
									HX_STACK_LINE(423)
									Dynamic tmp46 = (int(tmp45) & int((int)255));		HX_STACK_VAR(tmp46,"tmp46");
									HX_STACK_LINE(423)
									int r = tmp46;		HX_STACK_VAR(r,"r");
									HX_STACK_LINE(423)
									int tmp47 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((nextPointOffset + (int)2))));		HX_STACK_VAR(tmp47,"tmp47");
									HX_STACK_LINE(423)
									Dynamic tmp48 = (int(tmp47) & int((int)255));		HX_STACK_VAR(tmp48,"tmp48");
									HX_STACK_LINE(423)
									int g = tmp48;		HX_STACK_VAR(g,"g");
									HX_STACK_LINE(423)
									int tmp49 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((nextPointOffset + (int)3))));		HX_STACK_VAR(tmp49,"tmp49");
									HX_STACK_LINE(423)
									Dynamic tmp50 = (int(tmp49) & int((int)255));		HX_STACK_VAR(tmp50,"tmp50");
									HX_STACK_LINE(423)
									int b = tmp50;		HX_STACK_VAR(b,"b");
									HX_STACK_LINE(423)
									int tmp51 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + nextPointOffset));		HX_STACK_VAR(tmp51,"tmp51");
									HX_STACK_LINE(423)
									Dynamic tmp52 = (int(tmp51) & int((int)255));		HX_STACK_VAR(tmp52,"tmp52");
									HX_STACK_LINE(423)
									int a = tmp52;		HX_STACK_VAR(a,"a");
									HX_STACK_LINE(423)
									int tmp53 = (int(r) & int((int)255));		HX_STACK_VAR(tmp53,"tmp53");
									HX_STACK_LINE(423)
									int tmp54 = (int(tmp53) << int((int)24));		HX_STACK_VAR(tmp54,"tmp54");
									HX_STACK_LINE(423)
									int tmp55 = (int(g) & int((int)255));		HX_STACK_VAR(tmp55,"tmp55");
									HX_STACK_LINE(423)
									int tmp56 = (int(tmp55) << int((int)16));		HX_STACK_VAR(tmp56,"tmp56");
									HX_STACK_LINE(423)
									int tmp57 = (int(tmp54) | int(tmp56));		HX_STACK_VAR(tmp57,"tmp57");
									HX_STACK_LINE(423)
									int tmp58 = (int(b) & int((int)255));		HX_STACK_VAR(tmp58,"tmp58");
									HX_STACK_LINE(423)
									int tmp59 = (int(tmp58) << int((int)8));		HX_STACK_VAR(tmp59,"tmp59");
									HX_STACK_LINE(423)
									int tmp60 = (int(tmp57) | int(tmp59));		HX_STACK_VAR(tmp60,"tmp60");
									HX_STACK_LINE(423)
									int tmp61 = (int(a) & int((int)255));		HX_STACK_VAR(tmp61,"tmp61");
									HX_STACK_LINE(423)
									int tmp62 = (int(tmp60) | int(tmp61));		HX_STACK_VAR(tmp62,"tmp62");
									HX_STACK_LINE(423)
									readColor = tmp62;
								}
								;break;
							}
							HX_STACK_LINE(423)
							bool tmp45 = premultiplied;		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(423)
							if ((tmp45)){
								HX_STACK_LINE(423)
								int tmp46 = (int(readColor) & int((int)255));		HX_STACK_VAR(tmp46,"tmp46");
								HX_STACK_LINE(423)
								bool tmp47 = (tmp46 != (int)0);		HX_STACK_VAR(tmp47,"tmp47");
								HX_STACK_LINE(423)
								bool tmp48;		HX_STACK_VAR(tmp48,"tmp48");
								HX_STACK_LINE(423)
								if ((tmp47)){
									HX_STACK_LINE(423)
									int tmp49 = (int(readColor) & int((int)255));		HX_STACK_VAR(tmp49,"tmp49");
									HX_STACK_LINE(423)
									int tmp50 = tmp49;		HX_STACK_VAR(tmp50,"tmp50");
									HX_STACK_LINE(423)
									tmp48 = (tmp50 != (int)255);
								}
								else{
									HX_STACK_LINE(423)
									tmp48 = false;
								}
								HX_STACK_LINE(423)
								if ((tmp48)){
									HX_STACK_LINE(423)
									int tmp49 = (int(readColor) & int((int)255));		HX_STACK_VAR(tmp49,"tmp49");
									HX_STACK_LINE(423)
									Float tmp50 = (Float(((Float)255.0)) / Float(tmp49));		HX_STACK_VAR(tmp50,"tmp50");
									HX_STACK_LINE(423)
									::lime::math::color::_RGBA::RGBA_Impl__obj::unmult = tmp50;
									HX_STACK_LINE(423)
									{
										HX_STACK_LINE(423)
										Dynamic tmp51;		HX_STACK_VAR(tmp51,"tmp51");
										HX_STACK_LINE(423)
										{
											HX_STACK_LINE(423)
											::lime::utils::ArrayBufferView tmp52 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp52,"tmp52");
											HX_STACK_LINE(423)
											::lime::utils::ArrayBufferView this1 = tmp52;		HX_STACK_VAR(this1,"this1");
											HX_STACK_LINE(423)
											int tmp53 = (int(readColor) >> int((int)24));		HX_STACK_VAR(tmp53,"tmp53");
											HX_STACK_LINE(423)
											int tmp54 = (int(tmp53) & int((int)255));		HX_STACK_VAR(tmp54,"tmp54");
											HX_STACK_LINE(423)
											Float tmp55 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;		HX_STACK_VAR(tmp55,"tmp55");
											HX_STACK_LINE(423)
											Float tmp56 = (tmp54 * tmp55);		HX_STACK_VAR(tmp56,"tmp56");
											HX_STACK_LINE(423)
											int tmp57 = ::Math_obj::round(tmp56);		HX_STACK_VAR(tmp57,"tmp57");
											HX_STACK_LINE(423)
											int idx = tmp57;		HX_STACK_VAR(idx,"idx");
											HX_STACK_LINE(423)
											int tmp58 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp58,"tmp58");
											HX_STACK_LINE(423)
											tmp51 = (int(tmp58) & int((int)255));
										}
										HX_STACK_LINE(423)
										int r = tmp51;		HX_STACK_VAR(r,"r");
										HX_STACK_LINE(423)
										Dynamic tmp52;		HX_STACK_VAR(tmp52,"tmp52");
										HX_STACK_LINE(423)
										{
											HX_STACK_LINE(423)
											::lime::utils::ArrayBufferView tmp53 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp53,"tmp53");
											HX_STACK_LINE(423)
											::lime::utils::ArrayBufferView this1 = tmp53;		HX_STACK_VAR(this1,"this1");
											HX_STACK_LINE(423)
											int tmp54 = (int(readColor) >> int((int)16));		HX_STACK_VAR(tmp54,"tmp54");
											HX_STACK_LINE(423)
											int tmp55 = (int(tmp54) & int((int)255));		HX_STACK_VAR(tmp55,"tmp55");
											HX_STACK_LINE(423)
											Float tmp56 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;		HX_STACK_VAR(tmp56,"tmp56");
											HX_STACK_LINE(423)
											Float tmp57 = (tmp55 * tmp56);		HX_STACK_VAR(tmp57,"tmp57");
											HX_STACK_LINE(423)
											int tmp58 = ::Math_obj::round(tmp57);		HX_STACK_VAR(tmp58,"tmp58");
											HX_STACK_LINE(423)
											int idx = tmp58;		HX_STACK_VAR(idx,"idx");
											HX_STACK_LINE(423)
											int tmp59 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp59,"tmp59");
											HX_STACK_LINE(423)
											tmp52 = (int(tmp59) & int((int)255));
										}
										HX_STACK_LINE(423)
										int g = tmp52;		HX_STACK_VAR(g,"g");
										HX_STACK_LINE(423)
										Dynamic tmp53;		HX_STACK_VAR(tmp53,"tmp53");
										HX_STACK_LINE(423)
										{
											HX_STACK_LINE(423)
											::lime::utils::ArrayBufferView tmp54 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp54,"tmp54");
											HX_STACK_LINE(423)
											::lime::utils::ArrayBufferView this1 = tmp54;		HX_STACK_VAR(this1,"this1");
											HX_STACK_LINE(423)
											int tmp55 = (int(readColor) >> int((int)8));		HX_STACK_VAR(tmp55,"tmp55");
											HX_STACK_LINE(423)
											int tmp56 = (int(tmp55) & int((int)255));		HX_STACK_VAR(tmp56,"tmp56");
											HX_STACK_LINE(423)
											Float tmp57 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;		HX_STACK_VAR(tmp57,"tmp57");
											HX_STACK_LINE(423)
											Float tmp58 = (tmp56 * tmp57);		HX_STACK_VAR(tmp58,"tmp58");
											HX_STACK_LINE(423)
											int tmp59 = ::Math_obj::round(tmp58);		HX_STACK_VAR(tmp59,"tmp59");
											HX_STACK_LINE(423)
											int idx = tmp59;		HX_STACK_VAR(idx,"idx");
											HX_STACK_LINE(423)
											int tmp60 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp60,"tmp60");
											HX_STACK_LINE(423)
											tmp53 = (int(tmp60) & int((int)255));
										}
										HX_STACK_LINE(423)
										int b = tmp53;		HX_STACK_VAR(b,"b");
										HX_STACK_LINE(423)
										int tmp54 = (int(r) & int((int)255));		HX_STACK_VAR(tmp54,"tmp54");
										HX_STACK_LINE(423)
										int tmp55 = (int(tmp54) << int((int)24));		HX_STACK_VAR(tmp55,"tmp55");
										HX_STACK_LINE(423)
										int tmp56 = (int(g) & int((int)255));		HX_STACK_VAR(tmp56,"tmp56");
										HX_STACK_LINE(423)
										int tmp57 = (int(tmp56) << int((int)16));		HX_STACK_VAR(tmp57,"tmp57");
										HX_STACK_LINE(423)
										int tmp58 = (int(tmp55) | int(tmp57));		HX_STACK_VAR(tmp58,"tmp58");
										HX_STACK_LINE(423)
										int tmp59 = (int(b) & int((int)255));		HX_STACK_VAR(tmp59,"tmp59");
										HX_STACK_LINE(423)
										int tmp60 = (int(tmp59) << int((int)8));		HX_STACK_VAR(tmp60,"tmp60");
										HX_STACK_LINE(423)
										int tmp61 = (int(tmp58) | int(tmp60));		HX_STACK_VAR(tmp61,"tmp61");
										HX_STACK_LINE(423)
										int tmp62 = (int(readColor) & int((int)255));		HX_STACK_VAR(tmp62,"tmp62");
										HX_STACK_LINE(423)
										int tmp63 = (int(tmp62) & int((int)255));		HX_STACK_VAR(tmp63,"tmp63");
										HX_STACK_LINE(423)
										int tmp64 = (int(tmp61) | int(tmp63));		HX_STACK_VAR(tmp64,"tmp64");
										HX_STACK_LINE(423)
										readColor = tmp64;
									}
								}
							}
						}
						HX_STACK_LINE(425)
						bool tmp44 = (readColor == hitColor);		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(425)
						if ((tmp44)){
							HX_STACK_LINE(427)
							{
								HX_STACK_LINE(427)
								int tmp45 = format1;		HX_STACK_VAR(tmp45,"tmp45");
								HX_STACK_LINE(427)
								switch( (int)(tmp45)){
									case (int)2: {
										HX_STACK_LINE(427)
										{
											HX_STACK_LINE(427)
											int tmp46 = (int(fillColor) >> int((int)8));		HX_STACK_VAR(tmp46,"tmp46");
											HX_STACK_LINE(427)
											int tmp47 = (int(tmp46) & int((int)255));		HX_STACK_VAR(tmp47,"tmp47");
											HX_STACK_LINE(427)
											int val = tmp47;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(427)
											::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + nextPointOffset),val);
											HX_STACK_LINE(427)
											val;
										}
										HX_STACK_LINE(427)
										{
											HX_STACK_LINE(427)
											int tmp46 = (int(fillColor) >> int((int)16));		HX_STACK_VAR(tmp46,"tmp46");
											HX_STACK_LINE(427)
											int tmp47 = (int(tmp46) & int((int)255));		HX_STACK_VAR(tmp47,"tmp47");
											HX_STACK_LINE(427)
											int val = tmp47;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(427)
											::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((nextPointOffset + (int)1))),val);
											HX_STACK_LINE(427)
											val;
										}
										HX_STACK_LINE(427)
										{
											HX_STACK_LINE(427)
											int tmp46 = (int(fillColor) >> int((int)24));		HX_STACK_VAR(tmp46,"tmp46");
											HX_STACK_LINE(427)
											int tmp47 = (int(tmp46) & int((int)255));		HX_STACK_VAR(tmp47,"tmp47");
											HX_STACK_LINE(427)
											int val = tmp47;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(427)
											::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((nextPointOffset + (int)2))),val);
											HX_STACK_LINE(427)
											val;
										}
										HX_STACK_LINE(427)
										{
											HX_STACK_LINE(427)
											int tmp46 = (int(fillColor) & int((int)255));		HX_STACK_VAR(tmp46,"tmp46");
											HX_STACK_LINE(427)
											int val = tmp46;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(427)
											::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((nextPointOffset + (int)3))),val);
											HX_STACK_LINE(427)
											val;
										}
									}
									;break;
									case (int)0: {
										HX_STACK_LINE(427)
										{
											HX_STACK_LINE(427)
											int tmp46 = (int(fillColor) >> int((int)24));		HX_STACK_VAR(tmp46,"tmp46");
											HX_STACK_LINE(427)
											int tmp47 = (int(tmp46) & int((int)255));		HX_STACK_VAR(tmp47,"tmp47");
											HX_STACK_LINE(427)
											int val = tmp47;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(427)
											::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + nextPointOffset),val);
											HX_STACK_LINE(427)
											val;
										}
										HX_STACK_LINE(427)
										{
											HX_STACK_LINE(427)
											int tmp46 = (int(fillColor) >> int((int)16));		HX_STACK_VAR(tmp46,"tmp46");
											HX_STACK_LINE(427)
											int tmp47 = (int(tmp46) & int((int)255));		HX_STACK_VAR(tmp47,"tmp47");
											HX_STACK_LINE(427)
											int val = tmp47;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(427)
											::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((nextPointOffset + (int)1))),val);
											HX_STACK_LINE(427)
											val;
										}
										HX_STACK_LINE(427)
										{
											HX_STACK_LINE(427)
											int tmp46 = (int(fillColor) >> int((int)8));		HX_STACK_VAR(tmp46,"tmp46");
											HX_STACK_LINE(427)
											int tmp47 = (int(tmp46) & int((int)255));		HX_STACK_VAR(tmp47,"tmp47");
											HX_STACK_LINE(427)
											int val = tmp47;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(427)
											::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((nextPointOffset + (int)2))),val);
											HX_STACK_LINE(427)
											val;
										}
										HX_STACK_LINE(427)
										{
											HX_STACK_LINE(427)
											int tmp46 = (int(fillColor) & int((int)255));		HX_STACK_VAR(tmp46,"tmp46");
											HX_STACK_LINE(427)
											int val = tmp46;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(427)
											::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((nextPointOffset + (int)3))),val);
											HX_STACK_LINE(427)
											val;
										}
									}
									;break;
									case (int)1: {
										HX_STACK_LINE(427)
										{
											HX_STACK_LINE(427)
											int tmp46 = (int(fillColor) & int((int)255));		HX_STACK_VAR(tmp46,"tmp46");
											HX_STACK_LINE(427)
											int val = tmp46;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(427)
											::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + nextPointOffset),val);
											HX_STACK_LINE(427)
											val;
										}
										HX_STACK_LINE(427)
										{
											HX_STACK_LINE(427)
											int tmp46 = (int(fillColor) >> int((int)24));		HX_STACK_VAR(tmp46,"tmp46");
											HX_STACK_LINE(427)
											int tmp47 = (int(tmp46) & int((int)255));		HX_STACK_VAR(tmp47,"tmp47");
											HX_STACK_LINE(427)
											int val = tmp47;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(427)
											::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((nextPointOffset + (int)1))),val);
											HX_STACK_LINE(427)
											val;
										}
										HX_STACK_LINE(427)
										{
											HX_STACK_LINE(427)
											int tmp46 = (int(fillColor) >> int((int)16));		HX_STACK_VAR(tmp46,"tmp46");
											HX_STACK_LINE(427)
											int tmp47 = (int(tmp46) & int((int)255));		HX_STACK_VAR(tmp47,"tmp47");
											HX_STACK_LINE(427)
											int val = tmp47;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(427)
											::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((nextPointOffset + (int)2))),val);
											HX_STACK_LINE(427)
											val;
										}
										HX_STACK_LINE(427)
										{
											HX_STACK_LINE(427)
											int tmp46 = (int(fillColor) >> int((int)8));		HX_STACK_VAR(tmp46,"tmp46");
											HX_STACK_LINE(427)
											int tmp47 = (int(tmp46) & int((int)255));		HX_STACK_VAR(tmp47,"tmp47");
											HX_STACK_LINE(427)
											int val = tmp47;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(427)
											::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((nextPointOffset + (int)3))),val);
											HX_STACK_LINE(427)
											val;
										}
									}
									;break;
								}
							}
							HX_STACK_LINE(429)
							int tmp45 = nextPointX;		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(429)
							queue->push(tmp45);
							HX_STACK_LINE(430)
							int tmp46 = nextPointY;		HX_STACK_VAR(tmp46,"tmp46");
							HX_STACK_LINE(430)
							queue->push(tmp46);
						}
					}
				}
			}
		}
		HX_STACK_LINE(440)
		image->dirty = true;
		HX_STACK_LINE(441)
		(image->version)++;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(ImageDataUtil_obj,floodFill,(void))

::lime::math::Rectangle ImageDataUtil_obj::getColorBoundsRect( ::lime::graphics::Image image,int mask,int color,hx::Null< bool >  __o_findColor,int format){
bool findColor = __o_findColor.Default(true);
	HX_STACK_FRAME("lime.graphics.utils.ImageDataUtil","getColorBoundsRect",0xfea06eb4,"lime.graphics.utils.ImageDataUtil.getColorBoundsRect","lime/graphics/utils/ImageDataUtil.hx",446,0x494d921f)
	HX_STACK_ARG(image,"image")
	HX_STACK_ARG(mask,"mask")
	HX_STACK_ARG(color,"color")
	HX_STACK_ARG(findColor,"findColor")
	HX_STACK_ARG(format,"format")
{
		HX_STACK_LINE(448)
		int tmp = (image->width + (int)1);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(448)
		int left = tmp;		HX_STACK_VAR(left,"left");
		HX_STACK_LINE(449)
		int right = (int)0;		HX_STACK_VAR(right,"right");
		HX_STACK_LINE(450)
		int tmp1 = (image->height + (int)1);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(450)
		int top = tmp1;		HX_STACK_VAR(top,"top");
		HX_STACK_LINE(451)
		int bottom = (int)0;		HX_STACK_VAR(bottom,"bottom");
		HX_STACK_LINE(453)
		int _color;		HX_STACK_VAR(_color,"_color");
		HX_STACK_LINE(453)
		int _mask;		HX_STACK_VAR(_mask,"_mask");
		HX_STACK_LINE(455)
		int tmp2 = format;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(455)
		switch( (int)(tmp2)){
			case (int)1: {
				HX_STACK_LINE(459)
				int tmp3;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(459)
				{
					HX_STACK_LINE(459)
					int argb = color;		HX_STACK_VAR(argb,"argb");
					HX_STACK_LINE(459)
					{
						HX_STACK_LINE(459)
						int tmp4;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(459)
						{
							HX_STACK_LINE(459)
							int rgba = (int)0;		HX_STACK_VAR(rgba,"rgba");
							HX_STACK_LINE(459)
							tmp4 = rgba;
						}
						HX_STACK_LINE(459)
						int rgba = tmp4;		HX_STACK_VAR(rgba,"rgba");
						HX_STACK_LINE(459)
						{
							HX_STACK_LINE(459)
							int tmp5 = (int(argb) >> int((int)16));		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(459)
							int tmp6 = (int(tmp5) & int((int)255));		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(459)
							int tmp7 = (int(tmp6) & int((int)255));		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(459)
							int tmp8 = (int(tmp7) << int((int)24));		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(459)
							int tmp9 = (int(argb) >> int((int)8));		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(459)
							int tmp10 = (int(tmp9) & int((int)255));		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(459)
							int tmp11 = (int(tmp10) & int((int)255));		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(459)
							int tmp12 = (int(tmp11) << int((int)16));		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(459)
							int tmp13 = (int(tmp8) | int(tmp12));		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(459)
							int tmp14 = (int(argb) & int((int)255));		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(459)
							int tmp15 = (int(tmp14) & int((int)255));		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(459)
							int tmp16 = (int(tmp15) << int((int)8));		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(459)
							int tmp17 = (int(tmp13) | int(tmp16));		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(459)
							int tmp18 = (int(argb) >> int((int)24));		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(459)
							int tmp19 = (int(tmp18) & int((int)255));		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(459)
							int tmp20 = (int(tmp19) & int((int)255));		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(459)
							int tmp21 = (int(tmp17) | int(tmp20));		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(459)
							rgba = tmp21;
						}
						HX_STACK_LINE(459)
						tmp3 = rgba;
					}
				}
				HX_STACK_LINE(459)
				_color = tmp3;
				HX_STACK_LINE(460)
				int tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(460)
				{
					HX_STACK_LINE(460)
					int argb = mask;		HX_STACK_VAR(argb,"argb");
					HX_STACK_LINE(460)
					{
						HX_STACK_LINE(460)
						int tmp5;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(460)
						{
							HX_STACK_LINE(460)
							int rgba = (int)0;		HX_STACK_VAR(rgba,"rgba");
							HX_STACK_LINE(460)
							tmp5 = rgba;
						}
						HX_STACK_LINE(460)
						int rgba = tmp5;		HX_STACK_VAR(rgba,"rgba");
						HX_STACK_LINE(460)
						{
							HX_STACK_LINE(460)
							int tmp6 = (int(argb) >> int((int)16));		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(460)
							int tmp7 = (int(tmp6) & int((int)255));		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(460)
							int tmp8 = (int(tmp7) & int((int)255));		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(460)
							int tmp9 = (int(tmp8) << int((int)24));		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(460)
							int tmp10 = (int(argb) >> int((int)8));		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(460)
							int tmp11 = (int(tmp10) & int((int)255));		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(460)
							int tmp12 = (int(tmp11) & int((int)255));		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(460)
							int tmp13 = (int(tmp12) << int((int)16));		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(460)
							int tmp14 = (int(tmp9) | int(tmp13));		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(460)
							int tmp15 = (int(argb) & int((int)255));		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(460)
							int tmp16 = (int(tmp15) & int((int)255));		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(460)
							int tmp17 = (int(tmp16) << int((int)8));		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(460)
							int tmp18 = (int(tmp14) | int(tmp17));		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(460)
							int tmp19 = (int(argb) >> int((int)24));		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(460)
							int tmp20 = (int(tmp19) & int((int)255));		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(460)
							int tmp21 = (int(tmp20) & int((int)255));		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(460)
							int tmp22 = (int(tmp18) | int(tmp21));		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(460)
							rgba = tmp22;
						}
						HX_STACK_LINE(460)
						tmp4 = rgba;
					}
				}
				HX_STACK_LINE(460)
				_mask = tmp4;
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(464)
				int tmp3;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(464)
				{
					HX_STACK_LINE(464)
					int bgra = color;		HX_STACK_VAR(bgra,"bgra");
					HX_STACK_LINE(464)
					{
						HX_STACK_LINE(464)
						int tmp4;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(464)
						{
							HX_STACK_LINE(464)
							int rgba = (int)0;		HX_STACK_VAR(rgba,"rgba");
							HX_STACK_LINE(464)
							tmp4 = rgba;
						}
						HX_STACK_LINE(464)
						int rgba = tmp4;		HX_STACK_VAR(rgba,"rgba");
						HX_STACK_LINE(464)
						{
							HX_STACK_LINE(464)
							int tmp5 = (int(bgra) >> int((int)8));		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(464)
							int tmp6 = (int(tmp5) & int((int)255));		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(464)
							int tmp7 = (int(tmp6) & int((int)255));		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(464)
							int tmp8 = (int(tmp7) << int((int)24));		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(464)
							int tmp9 = (int(bgra) >> int((int)16));		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(464)
							int tmp10 = (int(tmp9) & int((int)255));		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(464)
							int tmp11 = (int(tmp10) & int((int)255));		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(464)
							int tmp12 = (int(tmp11) << int((int)16));		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(464)
							int tmp13 = (int(tmp8) | int(tmp12));		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(464)
							int tmp14 = (int(bgra) >> int((int)24));		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(464)
							int tmp15 = (int(tmp14) & int((int)255));		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(464)
							int tmp16 = (int(tmp15) & int((int)255));		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(464)
							int tmp17 = (int(tmp16) << int((int)8));		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(464)
							int tmp18 = (int(tmp13) | int(tmp17));		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(464)
							int tmp19 = (int(bgra) & int((int)255));		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(464)
							int tmp20 = (int(tmp19) & int((int)255));		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(464)
							int tmp21 = (int(tmp18) | int(tmp20));		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(464)
							rgba = tmp21;
						}
						HX_STACK_LINE(464)
						tmp3 = rgba;
					}
				}
				HX_STACK_LINE(464)
				_color = tmp3;
				HX_STACK_LINE(465)
				int tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(465)
				{
					HX_STACK_LINE(465)
					int bgra = mask;		HX_STACK_VAR(bgra,"bgra");
					HX_STACK_LINE(465)
					{
						HX_STACK_LINE(465)
						int tmp5;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(465)
						{
							HX_STACK_LINE(465)
							int rgba = (int)0;		HX_STACK_VAR(rgba,"rgba");
							HX_STACK_LINE(465)
							tmp5 = rgba;
						}
						HX_STACK_LINE(465)
						int rgba = tmp5;		HX_STACK_VAR(rgba,"rgba");
						HX_STACK_LINE(465)
						{
							HX_STACK_LINE(465)
							int tmp6 = (int(bgra) >> int((int)8));		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(465)
							int tmp7 = (int(tmp6) & int((int)255));		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(465)
							int tmp8 = (int(tmp7) & int((int)255));		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(465)
							int tmp9 = (int(tmp8) << int((int)24));		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(465)
							int tmp10 = (int(bgra) >> int((int)16));		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(465)
							int tmp11 = (int(tmp10) & int((int)255));		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(465)
							int tmp12 = (int(tmp11) & int((int)255));		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(465)
							int tmp13 = (int(tmp12) << int((int)16));		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(465)
							int tmp14 = (int(tmp9) | int(tmp13));		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(465)
							int tmp15 = (int(bgra) >> int((int)24));		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(465)
							int tmp16 = (int(tmp15) & int((int)255));		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(465)
							int tmp17 = (int(tmp16) & int((int)255));		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(465)
							int tmp18 = (int(tmp17) << int((int)8));		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(465)
							int tmp19 = (int(tmp14) | int(tmp18));		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(465)
							int tmp20 = (int(bgra) & int((int)255));		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(465)
							int tmp21 = (int(tmp20) & int((int)255));		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(465)
							int tmp22 = (int(tmp19) | int(tmp21));		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(465)
							rgba = tmp22;
						}
						HX_STACK_LINE(465)
						tmp4 = rgba;
					}
				}
				HX_STACK_LINE(465)
				_mask = tmp4;
			}
			;break;
			default: {
				HX_STACK_LINE(469)
				_color = color;
				HX_STACK_LINE(470)
				_mask = mask;
			}
		}
		HX_STACK_LINE(474)
		bool tmp3 = image->get_transparent();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(474)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(474)
		if ((tmp4)){
			HX_STACK_LINE(476)
			{
				HX_STACK_LINE(476)
				{
					HX_STACK_LINE(476)
					int tmp5 = (int(_color) >> int((int)24));		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(476)
					int tmp6 = (int(tmp5) & int((int)255));		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(476)
					int tmp7 = (int(tmp6) & int((int)255));		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(476)
					int tmp8 = (int(tmp7) << int((int)24));		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(476)
					int tmp9 = (int(_color) >> int((int)16));		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(476)
					int tmp10 = (int(tmp9) & int((int)255));		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(476)
					int tmp11 = (int(tmp10) & int((int)255));		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(476)
					int tmp12 = (int(tmp11) << int((int)16));		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(476)
					int tmp13 = (int(tmp8) | int(tmp12));		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(476)
					int tmp14 = (int(_color) >> int((int)8));		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(476)
					int tmp15 = (int(tmp14) & int((int)255));		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(476)
					int tmp16 = (int(tmp15) & int((int)255));		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(476)
					int tmp17 = (int(tmp16) << int((int)8));		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(476)
					int tmp18 = (int(tmp13) | int(tmp17));		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(476)
					int tmp19 = (int)255;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(476)
					int tmp20 = (int(tmp18) | int(tmp19));		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(476)
					_color = tmp20;
				}
				HX_STACK_LINE(476)
				(int)255;
			}
			HX_STACK_LINE(477)
			{
				HX_STACK_LINE(477)
				{
					HX_STACK_LINE(477)
					int tmp5 = (int(_mask) >> int((int)24));		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(477)
					int tmp6 = (int(tmp5) & int((int)255));		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(477)
					int tmp7 = (int(tmp6) & int((int)255));		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(477)
					int tmp8 = (int(tmp7) << int((int)24));		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(477)
					int tmp9 = (int(_mask) >> int((int)16));		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(477)
					int tmp10 = (int(tmp9) & int((int)255));		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(477)
					int tmp11 = (int(tmp10) & int((int)255));		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(477)
					int tmp12 = (int(tmp11) << int((int)16));		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(477)
					int tmp13 = (int(tmp8) | int(tmp12));		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(477)
					int tmp14 = (int(_mask) >> int((int)8));		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(477)
					int tmp15 = (int(tmp14) & int((int)255));		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(477)
					int tmp16 = (int(tmp15) & int((int)255));		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(477)
					int tmp17 = (int(tmp16) << int((int)8));		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(477)
					int tmp18 = (int(tmp13) | int(tmp17));		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(477)
					int tmp19 = (int)255;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(477)
					int tmp20 = (int(tmp18) | int(tmp19));		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(477)
					_mask = tmp20;
				}
				HX_STACK_LINE(477)
				(int)255;
			}
		}
		HX_STACK_LINE(481)
		int pixel;		HX_STACK_VAR(pixel,"pixel");
		HX_STACK_LINE(481)
		bool hit;		HX_STACK_VAR(hit,"hit");
		HX_STACK_LINE(483)
		{
			HX_STACK_LINE(483)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(483)
			int _g = image->width;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(483)
			while((true)){
				HX_STACK_LINE(483)
				bool tmp5 = (_g1 < _g);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(483)
				bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(483)
				if ((tmp6)){
					HX_STACK_LINE(483)
					break;
				}
				HX_STACK_LINE(483)
				int tmp7 = (_g1)++;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(483)
				int x = tmp7;		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(485)
				hit = false;
				HX_STACK_LINE(487)
				{
					HX_STACK_LINE(487)
					int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(487)
					int _g2 = image->height;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(487)
					while((true)){
						HX_STACK_LINE(487)
						bool tmp8 = (_g3 < _g2);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(487)
						bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(487)
						if ((tmp9)){
							HX_STACK_LINE(487)
							break;
						}
						HX_STACK_LINE(487)
						int tmp10 = (_g3)++;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(487)
						int y = tmp10;		HX_STACK_VAR(y,"y");
						HX_STACK_LINE(489)
						int tmp11 = x;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(489)
						int tmp12 = y;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(489)
						int tmp13 = image->getPixel32(tmp11,tmp12,(int)0);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(489)
						pixel = tmp13;
						HX_STACK_LINE(490)
						bool tmp14 = findColor;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(490)
						bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(490)
						if ((tmp14)){
							HX_STACK_LINE(490)
							int tmp16 = (int(pixel) & int(_mask));		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(490)
							int tmp17 = _color;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(490)
							tmp15 = (tmp16 == tmp17);
						}
						else{
							HX_STACK_LINE(490)
							int tmp16 = (int(pixel) & int(_mask));		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(490)
							int tmp17 = _color;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(490)
							tmp15 = (tmp16 != tmp17);
						}
						HX_STACK_LINE(490)
						hit = tmp15;
						HX_STACK_LINE(492)
						bool tmp16 = hit;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(492)
						if ((tmp16)){
							HX_STACK_LINE(494)
							bool tmp17 = (x < left);		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(494)
							if ((tmp17)){
								HX_STACK_LINE(494)
								left = x;
							}
							HX_STACK_LINE(495)
							break;
						}
					}
				}
				HX_STACK_LINE(501)
				bool tmp8 = hit;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(501)
				if ((tmp8)){
					HX_STACK_LINE(503)
					break;
				}
			}
		}
		HX_STACK_LINE(509)
		int ix;		HX_STACK_VAR(ix,"ix");
		HX_STACK_LINE(511)
		{
			HX_STACK_LINE(511)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(511)
			int _g = image->width;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(511)
			while((true)){
				HX_STACK_LINE(511)
				bool tmp5 = (_g1 < _g);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(511)
				bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(511)
				if ((tmp6)){
					HX_STACK_LINE(511)
					break;
				}
				HX_STACK_LINE(511)
				int tmp7 = (_g1)++;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(511)
				int x = tmp7;		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(513)
				int tmp8 = (image->width - (int)1);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(513)
				int tmp9 = x;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(513)
				int tmp10 = (tmp8 - tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(513)
				ix = tmp10;
				HX_STACK_LINE(514)
				hit = false;
				HX_STACK_LINE(516)
				{
					HX_STACK_LINE(516)
					int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(516)
					int _g2 = image->height;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(516)
					while((true)){
						HX_STACK_LINE(516)
						bool tmp11 = (_g3 < _g2);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(516)
						bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(516)
						if ((tmp12)){
							HX_STACK_LINE(516)
							break;
						}
						HX_STACK_LINE(516)
						int tmp13 = (_g3)++;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(516)
						int y = tmp13;		HX_STACK_VAR(y,"y");
						HX_STACK_LINE(518)
						int tmp14 = ix;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(518)
						int tmp15 = y;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(518)
						int tmp16 = image->getPixel32(tmp14,tmp15,(int)0);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(518)
						pixel = tmp16;
						HX_STACK_LINE(519)
						bool tmp17 = findColor;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(519)
						bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(519)
						if ((tmp17)){
							HX_STACK_LINE(519)
							int tmp19 = (int(pixel) & int(_mask));		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(519)
							int tmp20 = _color;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(519)
							tmp18 = (tmp19 == tmp20);
						}
						else{
							HX_STACK_LINE(519)
							int tmp19 = (int(pixel) & int(_mask));		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(519)
							int tmp20 = _color;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(519)
							tmp18 = (tmp19 != tmp20);
						}
						HX_STACK_LINE(519)
						hit = tmp18;
						HX_STACK_LINE(521)
						bool tmp19 = hit;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(521)
						if ((tmp19)){
							HX_STACK_LINE(523)
							bool tmp20 = (ix > right);		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(523)
							if ((tmp20)){
								HX_STACK_LINE(523)
								right = ix;
							}
							HX_STACK_LINE(524)
							break;
						}
					}
				}
				HX_STACK_LINE(530)
				bool tmp11 = hit;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(530)
				if ((tmp11)){
					HX_STACK_LINE(532)
					break;
				}
			}
		}
		HX_STACK_LINE(538)
		{
			HX_STACK_LINE(538)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(538)
			int _g = image->height;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(538)
			while((true)){
				HX_STACK_LINE(538)
				bool tmp5 = (_g1 < _g);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(538)
				bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(538)
				if ((tmp6)){
					HX_STACK_LINE(538)
					break;
				}
				HX_STACK_LINE(538)
				int tmp7 = (_g1)++;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(538)
				int y = tmp7;		HX_STACK_VAR(y,"y");
				HX_STACK_LINE(540)
				hit = false;
				HX_STACK_LINE(542)
				{
					HX_STACK_LINE(542)
					int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(542)
					int _g2 = image->width;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(542)
					while((true)){
						HX_STACK_LINE(542)
						bool tmp8 = (_g3 < _g2);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(542)
						bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(542)
						if ((tmp9)){
							HX_STACK_LINE(542)
							break;
						}
						HX_STACK_LINE(542)
						int tmp10 = (_g3)++;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(542)
						int x = tmp10;		HX_STACK_VAR(x,"x");
						HX_STACK_LINE(544)
						int tmp11 = x;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(544)
						int tmp12 = y;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(544)
						int tmp13 = image->getPixel32(tmp11,tmp12,(int)0);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(544)
						pixel = tmp13;
						HX_STACK_LINE(545)
						bool tmp14 = findColor;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(545)
						bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(545)
						if ((tmp14)){
							HX_STACK_LINE(545)
							int tmp16 = (int(pixel) & int(_mask));		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(545)
							int tmp17 = _color;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(545)
							tmp15 = (tmp16 == tmp17);
						}
						else{
							HX_STACK_LINE(545)
							int tmp16 = (int(pixel) & int(_mask));		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(545)
							int tmp17 = _color;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(545)
							tmp15 = (tmp16 != tmp17);
						}
						HX_STACK_LINE(545)
						hit = tmp15;
						HX_STACK_LINE(547)
						bool tmp16 = hit;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(547)
						if ((tmp16)){
							HX_STACK_LINE(549)
							bool tmp17 = (y < top);		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(549)
							if ((tmp17)){
								HX_STACK_LINE(549)
								top = y;
							}
							HX_STACK_LINE(550)
							break;
						}
					}
				}
				HX_STACK_LINE(556)
				bool tmp8 = hit;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(556)
				if ((tmp8)){
					HX_STACK_LINE(558)
					break;
				}
			}
		}
		HX_STACK_LINE(564)
		int iy;		HX_STACK_VAR(iy,"iy");
		HX_STACK_LINE(566)
		{
			HX_STACK_LINE(566)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(566)
			int _g = image->height;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(566)
			while((true)){
				HX_STACK_LINE(566)
				bool tmp5 = (_g1 < _g);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(566)
				bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(566)
				if ((tmp6)){
					HX_STACK_LINE(566)
					break;
				}
				HX_STACK_LINE(566)
				int tmp7 = (_g1)++;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(566)
				int y = tmp7;		HX_STACK_VAR(y,"y");
				HX_STACK_LINE(568)
				int tmp8 = (image->height - (int)1);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(568)
				int tmp9 = y;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(568)
				int tmp10 = (tmp8 - tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(568)
				iy = tmp10;
				HX_STACK_LINE(569)
				hit = false;
				HX_STACK_LINE(571)
				{
					HX_STACK_LINE(571)
					int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(571)
					int _g2 = image->width;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(571)
					while((true)){
						HX_STACK_LINE(571)
						bool tmp11 = (_g3 < _g2);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(571)
						bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(571)
						if ((tmp12)){
							HX_STACK_LINE(571)
							break;
						}
						HX_STACK_LINE(571)
						int tmp13 = (_g3)++;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(571)
						int x = tmp13;		HX_STACK_VAR(x,"x");
						HX_STACK_LINE(573)
						int tmp14 = x;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(573)
						int tmp15 = iy;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(573)
						int tmp16 = image->getPixel32(tmp14,tmp15,(int)0);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(573)
						pixel = tmp16;
						HX_STACK_LINE(574)
						bool tmp17 = findColor;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(574)
						bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(574)
						if ((tmp17)){
							HX_STACK_LINE(574)
							int tmp19 = (int(pixel) & int(_mask));		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(574)
							int tmp20 = _color;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(574)
							tmp18 = (tmp19 == tmp20);
						}
						else{
							HX_STACK_LINE(574)
							int tmp19 = (int(pixel) & int(_mask));		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(574)
							int tmp20 = _color;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(574)
							tmp18 = (tmp19 != tmp20);
						}
						HX_STACK_LINE(574)
						hit = tmp18;
						HX_STACK_LINE(576)
						bool tmp19 = hit;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(576)
						if ((tmp19)){
							HX_STACK_LINE(578)
							bool tmp20 = (iy > bottom);		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(578)
							if ((tmp20)){
								HX_STACK_LINE(578)
								bottom = iy;
							}
							HX_STACK_LINE(579)
							break;
						}
					}
				}
				HX_STACK_LINE(585)
				bool tmp11 = hit;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(585)
				if ((tmp11)){
					HX_STACK_LINE(587)
					break;
				}
			}
		}
		HX_STACK_LINE(593)
		int tmp5 = (right - left);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(593)
		int w = tmp5;		HX_STACK_VAR(w,"w");
		HX_STACK_LINE(594)
		int tmp6 = (bottom - top);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(594)
		int h = tmp6;		HX_STACK_VAR(h,"h");
		HX_STACK_LINE(596)
		bool tmp7 = (w > (int)0);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(596)
		if ((tmp7)){
			HX_STACK_LINE(596)
			(w)++;
		}
		HX_STACK_LINE(597)
		bool tmp8 = (h > (int)0);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(597)
		if ((tmp8)){
			HX_STACK_LINE(597)
			(h)++;
		}
		HX_STACK_LINE(599)
		bool tmp9 = (w < (int)0);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(599)
		if ((tmp9)){
			HX_STACK_LINE(599)
			w = (int)0;
		}
		HX_STACK_LINE(600)
		bool tmp10 = (h < (int)0);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(600)
		if ((tmp10)){
			HX_STACK_LINE(600)
			h = (int)0;
		}
		HX_STACK_LINE(602)
		bool tmp11 = (left == right);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(602)
		if ((tmp11)){
			HX_STACK_LINE(602)
			w = (int)1;
		}
		HX_STACK_LINE(603)
		bool tmp12 = (top == bottom);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(603)
		if ((tmp12)){
			HX_STACK_LINE(603)
			h = (int)1;
		}
		HX_STACK_LINE(605)
		bool tmp13 = (left > image->width);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(605)
		if ((tmp13)){
			HX_STACK_LINE(605)
			left = (int)0;
		}
		HX_STACK_LINE(606)
		bool tmp14 = (top > image->height);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(606)
		if ((tmp14)){
			HX_STACK_LINE(606)
			top = (int)0;
		}
		HX_STACK_LINE(608)
		::lime::math::Rectangle tmp15 = ::lime::math::Rectangle_obj::__new(left,top,w,h);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(608)
		return tmp15;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(ImageDataUtil_obj,getColorBoundsRect,return )

int ImageDataUtil_obj::getPixel( ::lime::graphics::Image image,int x,int y,int format){
	HX_STACK_FRAME("lime.graphics.utils.ImageDataUtil","getPixel",0xcbf5f1be,"lime.graphics.utils.ImageDataUtil.getPixel","lime/graphics/utils/ImageDataUtil.hx",613,0x494d921f)
	HX_STACK_ARG(image,"image")
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(format,"format")
	HX_STACK_LINE(615)
	int pixel;		HX_STACK_VAR(pixel,"pixel");
	HX_STACK_LINE(617)
	{
		HX_STACK_LINE(617)
		::lime::utils::ArrayBufferView tmp = image->buffer->data;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(617)
		::lime::utils::ArrayBufferView data = tmp;		HX_STACK_VAR(data,"data");
		HX_STACK_LINE(617)
		int tmp1 = (y + image->offsetY);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(617)
		int tmp2 = ((int)4 * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(617)
		int tmp3 = image->buffer->width;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(617)
		int tmp4 = (tmp2 * tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(617)
		int tmp5 = (x + image->offsetX);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(617)
		int tmp6 = (tmp5 * (int)4);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(617)
		int tmp7 = (tmp4 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(617)
		int offset = tmp7;		HX_STACK_VAR(offset,"offset");
		HX_STACK_LINE(617)
		int tmp8 = image->buffer->format;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(617)
		switch( (int)(tmp8)){
			case (int)2: {
				HX_STACK_LINE(617)
				int tmp9 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)2))));		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(617)
				Dynamic tmp10 = (int(tmp9) & int((int)255));		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(617)
				int r = tmp10;		HX_STACK_VAR(r,"r");
				HX_STACK_LINE(617)
				int tmp11 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)1))));		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(617)
				Dynamic tmp12 = (int(tmp11) & int((int)255));		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(617)
				int g = tmp12;		HX_STACK_VAR(g,"g");
				HX_STACK_LINE(617)
				int tmp13 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + offset));		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(617)
				Dynamic tmp14 = (int(tmp13) & int((int)255));		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(617)
				int b = tmp14;		HX_STACK_VAR(b,"b");
				HX_STACK_LINE(617)
				int tmp15 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)3))));		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(617)
				Dynamic tmp16 = (int(tmp15) & int((int)255));		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(617)
				int a = tmp16;		HX_STACK_VAR(a,"a");
				HX_STACK_LINE(617)
				int tmp17 = (int(r) & int((int)255));		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(617)
				int tmp18 = (int(tmp17) << int((int)24));		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(617)
				int tmp19 = (int(g) & int((int)255));		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(617)
				int tmp20 = (int(tmp19) << int((int)16));		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(617)
				int tmp21 = (int(tmp18) | int(tmp20));		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(617)
				int tmp22 = (int(b) & int((int)255));		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(617)
				int tmp23 = (int(tmp22) << int((int)8));		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(617)
				int tmp24 = (int(tmp21) | int(tmp23));		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(617)
				int tmp25 = (int(a) & int((int)255));		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(617)
				int tmp26 = (int(tmp24) | int(tmp25));		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(617)
				pixel = tmp26;
			}
			;break;
			case (int)0: {
				HX_STACK_LINE(617)
				int tmp9 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + offset));		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(617)
				Dynamic tmp10 = (int(tmp9) & int((int)255));		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(617)
				int r = tmp10;		HX_STACK_VAR(r,"r");
				HX_STACK_LINE(617)
				int tmp11 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)1))));		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(617)
				Dynamic tmp12 = (int(tmp11) & int((int)255));		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(617)
				int g = tmp12;		HX_STACK_VAR(g,"g");
				HX_STACK_LINE(617)
				int tmp13 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)2))));		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(617)
				Dynamic tmp14 = (int(tmp13) & int((int)255));		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(617)
				int b = tmp14;		HX_STACK_VAR(b,"b");
				HX_STACK_LINE(617)
				int tmp15 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)3))));		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(617)
				Dynamic tmp16 = (int(tmp15) & int((int)255));		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(617)
				int a = tmp16;		HX_STACK_VAR(a,"a");
				HX_STACK_LINE(617)
				int tmp17 = (int(r) & int((int)255));		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(617)
				int tmp18 = (int(tmp17) << int((int)24));		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(617)
				int tmp19 = (int(g) & int((int)255));		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(617)
				int tmp20 = (int(tmp19) << int((int)16));		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(617)
				int tmp21 = (int(tmp18) | int(tmp20));		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(617)
				int tmp22 = (int(b) & int((int)255));		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(617)
				int tmp23 = (int(tmp22) << int((int)8));		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(617)
				int tmp24 = (int(tmp21) | int(tmp23));		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(617)
				int tmp25 = (int(a) & int((int)255));		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(617)
				int tmp26 = (int(tmp24) | int(tmp25));		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(617)
				pixel = tmp26;
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(617)
				int tmp9 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)1))));		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(617)
				Dynamic tmp10 = (int(tmp9) & int((int)255));		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(617)
				int r = tmp10;		HX_STACK_VAR(r,"r");
				HX_STACK_LINE(617)
				int tmp11 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)2))));		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(617)
				Dynamic tmp12 = (int(tmp11) & int((int)255));		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(617)
				int g = tmp12;		HX_STACK_VAR(g,"g");
				HX_STACK_LINE(617)
				int tmp13 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)3))));		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(617)
				Dynamic tmp14 = (int(tmp13) & int((int)255));		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(617)
				int b = tmp14;		HX_STACK_VAR(b,"b");
				HX_STACK_LINE(617)
				int tmp15 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + offset));		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(617)
				Dynamic tmp16 = (int(tmp15) & int((int)255));		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(617)
				int a = tmp16;		HX_STACK_VAR(a,"a");
				HX_STACK_LINE(617)
				int tmp17 = (int(r) & int((int)255));		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(617)
				int tmp18 = (int(tmp17) << int((int)24));		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(617)
				int tmp19 = (int(g) & int((int)255));		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(617)
				int tmp20 = (int(tmp19) << int((int)16));		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(617)
				int tmp21 = (int(tmp18) | int(tmp20));		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(617)
				int tmp22 = (int(b) & int((int)255));		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(617)
				int tmp23 = (int(tmp22) << int((int)8));		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(617)
				int tmp24 = (int(tmp21) | int(tmp23));		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(617)
				int tmp25 = (int(a) & int((int)255));		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(617)
				int tmp26 = (int(tmp24) | int(tmp25));		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(617)
				pixel = tmp26;
			}
			;break;
		}
		HX_STACK_LINE(617)
		bool tmp9 = image->buffer->premultiplied;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(617)
		if ((tmp9)){
			HX_STACK_LINE(617)
			int tmp10 = (int(pixel) & int((int)255));		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(617)
			bool tmp11 = (tmp10 != (int)0);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(617)
			bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(617)
			if ((tmp11)){
				HX_STACK_LINE(617)
				int tmp13 = (int(pixel) & int((int)255));		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(617)
				int tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(617)
				tmp12 = (tmp14 != (int)255);
			}
			else{
				HX_STACK_LINE(617)
				tmp12 = false;
			}
			HX_STACK_LINE(617)
			if ((tmp12)){
				HX_STACK_LINE(617)
				int tmp13 = (int(pixel) & int((int)255));		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(617)
				Float tmp14 = (Float(((Float)255.0)) / Float(tmp13));		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(617)
				::lime::math::color::_RGBA::RGBA_Impl__obj::unmult = tmp14;
				HX_STACK_LINE(617)
				{
					HX_STACK_LINE(617)
					Dynamic tmp15;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(617)
					{
						HX_STACK_LINE(617)
						::lime::utils::ArrayBufferView tmp16 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(617)
						::lime::utils::ArrayBufferView this1 = tmp16;		HX_STACK_VAR(this1,"this1");
						HX_STACK_LINE(617)
						int tmp17 = (int(pixel) >> int((int)24));		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(617)
						int tmp18 = (int(tmp17) & int((int)255));		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(617)
						Float tmp19 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(617)
						Float tmp20 = (tmp18 * tmp19);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(617)
						int tmp21 = ::Math_obj::round(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(617)
						int idx = tmp21;		HX_STACK_VAR(idx,"idx");
						HX_STACK_LINE(617)
						int tmp22 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(617)
						tmp15 = (int(tmp22) & int((int)255));
					}
					HX_STACK_LINE(617)
					int r = tmp15;		HX_STACK_VAR(r,"r");
					HX_STACK_LINE(617)
					Dynamic tmp16;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(617)
					{
						HX_STACK_LINE(617)
						::lime::utils::ArrayBufferView tmp17 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(617)
						::lime::utils::ArrayBufferView this1 = tmp17;		HX_STACK_VAR(this1,"this1");
						HX_STACK_LINE(617)
						int tmp18 = (int(pixel) >> int((int)16));		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(617)
						int tmp19 = (int(tmp18) & int((int)255));		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(617)
						Float tmp20 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(617)
						Float tmp21 = (tmp19 * tmp20);		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(617)
						int tmp22 = ::Math_obj::round(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(617)
						int idx = tmp22;		HX_STACK_VAR(idx,"idx");
						HX_STACK_LINE(617)
						int tmp23 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(617)
						tmp16 = (int(tmp23) & int((int)255));
					}
					HX_STACK_LINE(617)
					int g = tmp16;		HX_STACK_VAR(g,"g");
					HX_STACK_LINE(617)
					Dynamic tmp17;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(617)
					{
						HX_STACK_LINE(617)
						::lime::utils::ArrayBufferView tmp18 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(617)
						::lime::utils::ArrayBufferView this1 = tmp18;		HX_STACK_VAR(this1,"this1");
						HX_STACK_LINE(617)
						int tmp19 = (int(pixel) >> int((int)8));		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(617)
						int tmp20 = (int(tmp19) & int((int)255));		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(617)
						Float tmp21 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(617)
						Float tmp22 = (tmp20 * tmp21);		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(617)
						int tmp23 = ::Math_obj::round(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(617)
						int idx = tmp23;		HX_STACK_VAR(idx,"idx");
						HX_STACK_LINE(617)
						int tmp24 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(617)
						tmp17 = (int(tmp24) & int((int)255));
					}
					HX_STACK_LINE(617)
					int b = tmp17;		HX_STACK_VAR(b,"b");
					HX_STACK_LINE(617)
					int tmp18 = (int(r) & int((int)255));		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(617)
					int tmp19 = (int(tmp18) << int((int)24));		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(617)
					int tmp20 = (int(g) & int((int)255));		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(617)
					int tmp21 = (int(tmp20) << int((int)16));		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(617)
					int tmp22 = (int(tmp19) | int(tmp21));		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(617)
					int tmp23 = (int(b) & int((int)255));		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(617)
					int tmp24 = (int(tmp23) << int((int)8));		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(617)
					int tmp25 = (int(tmp22) | int(tmp24));		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(617)
					int tmp26 = (int(pixel) & int((int)255));		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(617)
					int tmp27 = (int(tmp26) & int((int)255));		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(617)
					int tmp28 = (int(tmp25) | int(tmp27));		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(617)
					pixel = tmp28;
				}
			}
		}
	}
	HX_STACK_LINE(618)
	{
		HX_STACK_LINE(618)
		{
			HX_STACK_LINE(618)
			int tmp = (int(pixel) >> int((int)24));		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(618)
			int tmp1 = (int(tmp) & int((int)255));		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(618)
			int tmp2 = (int(tmp1) & int((int)255));		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(618)
			int tmp3 = (int(tmp2) << int((int)24));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(618)
			int tmp4 = (int(pixel) >> int((int)16));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(618)
			int tmp5 = (int(tmp4) & int((int)255));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(618)
			int tmp6 = (int(tmp5) & int((int)255));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(618)
			int tmp7 = (int(tmp6) << int((int)16));		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(618)
			int tmp8 = (int(tmp3) | int(tmp7));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(618)
			int tmp9 = (int(pixel) >> int((int)8));		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(618)
			int tmp10 = (int(tmp9) & int((int)255));		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(618)
			int tmp11 = (int(tmp10) & int((int)255));		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(618)
			int tmp12 = (int(tmp11) << int((int)8));		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(618)
			int tmp13 = (int(tmp8) | int(tmp12));		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(618)
			int tmp14 = (int)0;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(618)
			int tmp15 = (int(tmp13) | int(tmp14));		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(618)
			pixel = tmp15;
		}
		HX_STACK_LINE(618)
		(int)0;
	}
	HX_STACK_LINE(620)
	int tmp = format;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(620)
	switch( (int)(tmp)){
		case (int)1: {
			HX_STACK_LINE(622)
			int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(622)
			{
				HX_STACK_LINE(622)
				int tmp2;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(622)
				{
					HX_STACK_LINE(622)
					int argb = (int)0;		HX_STACK_VAR(argb,"argb");
					HX_STACK_LINE(622)
					tmp2 = argb;
				}
				HX_STACK_LINE(622)
				int argb = tmp2;		HX_STACK_VAR(argb,"argb");
				HX_STACK_LINE(622)
				{
					HX_STACK_LINE(622)
					int tmp3 = (int(pixel) & int((int)255));		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(622)
					int tmp4 = (int(tmp3) & int((int)255));		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(622)
					int tmp5 = (int(tmp4) << int((int)24));		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(622)
					int tmp6 = (int(pixel) >> int((int)24));		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(622)
					int tmp7 = (int(tmp6) & int((int)255));		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(622)
					int tmp8 = (int(tmp7) & int((int)255));		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(622)
					int tmp9 = (int(tmp8) << int((int)16));		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(622)
					int tmp10 = (int(tmp5) | int(tmp9));		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(622)
					int tmp11 = (int(pixel) >> int((int)16));		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(622)
					int tmp12 = (int(tmp11) & int((int)255));		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(622)
					int tmp13 = (int(tmp12) & int((int)255));		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(622)
					int tmp14 = (int(tmp13) << int((int)8));		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(622)
					int tmp15 = (int(tmp10) | int(tmp14));		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(622)
					int tmp16 = (int(pixel) >> int((int)8));		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(622)
					int tmp17 = (int(tmp16) & int((int)255));		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(622)
					int tmp18 = (int(tmp17) & int((int)255));		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(622)
					int tmp19 = (int(tmp15) | int(tmp18));		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(622)
					argb = tmp19;
				}
				HX_STACK_LINE(622)
				tmp1 = argb;
			}
			HX_STACK_LINE(622)
			int tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(622)
			return tmp2;
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(623)
			int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(623)
			{
				HX_STACK_LINE(623)
				int tmp2;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(623)
				{
					HX_STACK_LINE(623)
					int bgra = (int)0;		HX_STACK_VAR(bgra,"bgra");
					HX_STACK_LINE(623)
					tmp2 = bgra;
				}
				HX_STACK_LINE(623)
				int bgra = tmp2;		HX_STACK_VAR(bgra,"bgra");
				HX_STACK_LINE(623)
				{
					HX_STACK_LINE(623)
					int tmp3 = (int(pixel) >> int((int)8));		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(623)
					int tmp4 = (int(tmp3) & int((int)255));		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(623)
					int tmp5 = (int(tmp4) & int((int)255));		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(623)
					int tmp6 = (int(tmp5) << int((int)24));		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(623)
					int tmp7 = (int(pixel) >> int((int)16));		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(623)
					int tmp8 = (int(tmp7) & int((int)255));		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(623)
					int tmp9 = (int(tmp8) & int((int)255));		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(623)
					int tmp10 = (int(tmp9) << int((int)16));		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(623)
					int tmp11 = (int(tmp6) | int(tmp10));		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(623)
					int tmp12 = (int(pixel) >> int((int)24));		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(623)
					int tmp13 = (int(tmp12) & int((int)255));		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(623)
					int tmp14 = (int(tmp13) & int((int)255));		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(623)
					int tmp15 = (int(tmp14) << int((int)8));		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(623)
					int tmp16 = (int(tmp11) | int(tmp15));		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(623)
					int tmp17 = (int(pixel) & int((int)255));		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(623)
					int tmp18 = (int(tmp17) & int((int)255));		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(623)
					int tmp19 = (int(tmp16) | int(tmp18));		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(623)
					bgra = tmp19;
				}
				HX_STACK_LINE(623)
				tmp1 = bgra;
			}
			HX_STACK_LINE(623)
			int tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(623)
			return tmp2;
		}
		;break;
		default: {
			HX_STACK_LINE(624)
			int tmp1 = pixel;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(624)
			return tmp1;
		}
	}
	HX_STACK_LINE(620)
	return (int)0;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(ImageDataUtil_obj,getPixel,return )

int ImageDataUtil_obj::getPixel32( ::lime::graphics::Image image,int x,int y,int format){
	HX_STACK_FRAME("lime.graphics.utils.ImageDataUtil","getPixel32",0x2aa489dd,"lime.graphics.utils.ImageDataUtil.getPixel32","lime/graphics/utils/ImageDataUtil.hx",631,0x494d921f)
	HX_STACK_ARG(image,"image")
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(format,"format")
	HX_STACK_LINE(633)
	int pixel;		HX_STACK_VAR(pixel,"pixel");
	HX_STACK_LINE(635)
	{
		HX_STACK_LINE(635)
		::lime::utils::ArrayBufferView tmp = image->buffer->data;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(635)
		::lime::utils::ArrayBufferView data = tmp;		HX_STACK_VAR(data,"data");
		HX_STACK_LINE(635)
		int tmp1 = (y + image->offsetY);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(635)
		int tmp2 = ((int)4 * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(635)
		int tmp3 = image->buffer->width;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(635)
		int tmp4 = (tmp2 * tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(635)
		int tmp5 = (x + image->offsetX);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(635)
		int tmp6 = (tmp5 * (int)4);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(635)
		int tmp7 = (tmp4 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(635)
		int offset = tmp7;		HX_STACK_VAR(offset,"offset");
		HX_STACK_LINE(635)
		int tmp8 = image->buffer->format;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(635)
		switch( (int)(tmp8)){
			case (int)2: {
				HX_STACK_LINE(635)
				int tmp9 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)2))));		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(635)
				Dynamic tmp10 = (int(tmp9) & int((int)255));		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(635)
				int r = tmp10;		HX_STACK_VAR(r,"r");
				HX_STACK_LINE(635)
				int tmp11 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)1))));		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(635)
				Dynamic tmp12 = (int(tmp11) & int((int)255));		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(635)
				int g = tmp12;		HX_STACK_VAR(g,"g");
				HX_STACK_LINE(635)
				int tmp13 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + offset));		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(635)
				Dynamic tmp14 = (int(tmp13) & int((int)255));		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(635)
				int b = tmp14;		HX_STACK_VAR(b,"b");
				HX_STACK_LINE(635)
				int tmp15 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)3))));		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(635)
				Dynamic tmp16 = (int(tmp15) & int((int)255));		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(635)
				int a = tmp16;		HX_STACK_VAR(a,"a");
				HX_STACK_LINE(635)
				int tmp17 = (int(r) & int((int)255));		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(635)
				int tmp18 = (int(tmp17) << int((int)24));		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(635)
				int tmp19 = (int(g) & int((int)255));		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(635)
				int tmp20 = (int(tmp19) << int((int)16));		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(635)
				int tmp21 = (int(tmp18) | int(tmp20));		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(635)
				int tmp22 = (int(b) & int((int)255));		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(635)
				int tmp23 = (int(tmp22) << int((int)8));		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(635)
				int tmp24 = (int(tmp21) | int(tmp23));		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(635)
				int tmp25 = (int(a) & int((int)255));		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(635)
				int tmp26 = (int(tmp24) | int(tmp25));		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(635)
				pixel = tmp26;
			}
			;break;
			case (int)0: {
				HX_STACK_LINE(635)
				int tmp9 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + offset));		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(635)
				Dynamic tmp10 = (int(tmp9) & int((int)255));		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(635)
				int r = tmp10;		HX_STACK_VAR(r,"r");
				HX_STACK_LINE(635)
				int tmp11 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)1))));		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(635)
				Dynamic tmp12 = (int(tmp11) & int((int)255));		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(635)
				int g = tmp12;		HX_STACK_VAR(g,"g");
				HX_STACK_LINE(635)
				int tmp13 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)2))));		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(635)
				Dynamic tmp14 = (int(tmp13) & int((int)255));		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(635)
				int b = tmp14;		HX_STACK_VAR(b,"b");
				HX_STACK_LINE(635)
				int tmp15 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)3))));		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(635)
				Dynamic tmp16 = (int(tmp15) & int((int)255));		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(635)
				int a = tmp16;		HX_STACK_VAR(a,"a");
				HX_STACK_LINE(635)
				int tmp17 = (int(r) & int((int)255));		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(635)
				int tmp18 = (int(tmp17) << int((int)24));		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(635)
				int tmp19 = (int(g) & int((int)255));		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(635)
				int tmp20 = (int(tmp19) << int((int)16));		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(635)
				int tmp21 = (int(tmp18) | int(tmp20));		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(635)
				int tmp22 = (int(b) & int((int)255));		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(635)
				int tmp23 = (int(tmp22) << int((int)8));		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(635)
				int tmp24 = (int(tmp21) | int(tmp23));		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(635)
				int tmp25 = (int(a) & int((int)255));		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(635)
				int tmp26 = (int(tmp24) | int(tmp25));		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(635)
				pixel = tmp26;
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(635)
				int tmp9 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)1))));		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(635)
				Dynamic tmp10 = (int(tmp9) & int((int)255));		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(635)
				int r = tmp10;		HX_STACK_VAR(r,"r");
				HX_STACK_LINE(635)
				int tmp11 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)2))));		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(635)
				Dynamic tmp12 = (int(tmp11) & int((int)255));		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(635)
				int g = tmp12;		HX_STACK_VAR(g,"g");
				HX_STACK_LINE(635)
				int tmp13 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)3))));		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(635)
				Dynamic tmp14 = (int(tmp13) & int((int)255));		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(635)
				int b = tmp14;		HX_STACK_VAR(b,"b");
				HX_STACK_LINE(635)
				int tmp15 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + offset));		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(635)
				Dynamic tmp16 = (int(tmp15) & int((int)255));		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(635)
				int a = tmp16;		HX_STACK_VAR(a,"a");
				HX_STACK_LINE(635)
				int tmp17 = (int(r) & int((int)255));		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(635)
				int tmp18 = (int(tmp17) << int((int)24));		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(635)
				int tmp19 = (int(g) & int((int)255));		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(635)
				int tmp20 = (int(tmp19) << int((int)16));		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(635)
				int tmp21 = (int(tmp18) | int(tmp20));		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(635)
				int tmp22 = (int(b) & int((int)255));		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(635)
				int tmp23 = (int(tmp22) << int((int)8));		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(635)
				int tmp24 = (int(tmp21) | int(tmp23));		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(635)
				int tmp25 = (int(a) & int((int)255));		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(635)
				int tmp26 = (int(tmp24) | int(tmp25));		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(635)
				pixel = tmp26;
			}
			;break;
		}
		HX_STACK_LINE(635)
		bool tmp9 = image->buffer->premultiplied;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(635)
		if ((tmp9)){
			HX_STACK_LINE(635)
			int tmp10 = (int(pixel) & int((int)255));		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(635)
			bool tmp11 = (tmp10 != (int)0);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(635)
			bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(635)
			if ((tmp11)){
				HX_STACK_LINE(635)
				int tmp13 = (int(pixel) & int((int)255));		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(635)
				int tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(635)
				tmp12 = (tmp14 != (int)255);
			}
			else{
				HX_STACK_LINE(635)
				tmp12 = false;
			}
			HX_STACK_LINE(635)
			if ((tmp12)){
				HX_STACK_LINE(635)
				int tmp13 = (int(pixel) & int((int)255));		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(635)
				Float tmp14 = (Float(((Float)255.0)) / Float(tmp13));		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(635)
				::lime::math::color::_RGBA::RGBA_Impl__obj::unmult = tmp14;
				HX_STACK_LINE(635)
				{
					HX_STACK_LINE(635)
					Dynamic tmp15;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(635)
					{
						HX_STACK_LINE(635)
						::lime::utils::ArrayBufferView tmp16 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(635)
						::lime::utils::ArrayBufferView this1 = tmp16;		HX_STACK_VAR(this1,"this1");
						HX_STACK_LINE(635)
						int tmp17 = (int(pixel) >> int((int)24));		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(635)
						int tmp18 = (int(tmp17) & int((int)255));		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(635)
						Float tmp19 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(635)
						Float tmp20 = (tmp18 * tmp19);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(635)
						int tmp21 = ::Math_obj::round(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(635)
						int idx = tmp21;		HX_STACK_VAR(idx,"idx");
						HX_STACK_LINE(635)
						int tmp22 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(635)
						tmp15 = (int(tmp22) & int((int)255));
					}
					HX_STACK_LINE(635)
					int r = tmp15;		HX_STACK_VAR(r,"r");
					HX_STACK_LINE(635)
					Dynamic tmp16;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(635)
					{
						HX_STACK_LINE(635)
						::lime::utils::ArrayBufferView tmp17 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(635)
						::lime::utils::ArrayBufferView this1 = tmp17;		HX_STACK_VAR(this1,"this1");
						HX_STACK_LINE(635)
						int tmp18 = (int(pixel) >> int((int)16));		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(635)
						int tmp19 = (int(tmp18) & int((int)255));		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(635)
						Float tmp20 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(635)
						Float tmp21 = (tmp19 * tmp20);		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(635)
						int tmp22 = ::Math_obj::round(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(635)
						int idx = tmp22;		HX_STACK_VAR(idx,"idx");
						HX_STACK_LINE(635)
						int tmp23 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(635)
						tmp16 = (int(tmp23) & int((int)255));
					}
					HX_STACK_LINE(635)
					int g = tmp16;		HX_STACK_VAR(g,"g");
					HX_STACK_LINE(635)
					Dynamic tmp17;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(635)
					{
						HX_STACK_LINE(635)
						::lime::utils::ArrayBufferView tmp18 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(635)
						::lime::utils::ArrayBufferView this1 = tmp18;		HX_STACK_VAR(this1,"this1");
						HX_STACK_LINE(635)
						int tmp19 = (int(pixel) >> int((int)8));		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(635)
						int tmp20 = (int(tmp19) & int((int)255));		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(635)
						Float tmp21 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(635)
						Float tmp22 = (tmp20 * tmp21);		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(635)
						int tmp23 = ::Math_obj::round(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(635)
						int idx = tmp23;		HX_STACK_VAR(idx,"idx");
						HX_STACK_LINE(635)
						int tmp24 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(635)
						tmp17 = (int(tmp24) & int((int)255));
					}
					HX_STACK_LINE(635)
					int b = tmp17;		HX_STACK_VAR(b,"b");
					HX_STACK_LINE(635)
					int tmp18 = (int(r) & int((int)255));		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(635)
					int tmp19 = (int(tmp18) << int((int)24));		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(635)
					int tmp20 = (int(g) & int((int)255));		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(635)
					int tmp21 = (int(tmp20) << int((int)16));		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(635)
					int tmp22 = (int(tmp19) | int(tmp21));		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(635)
					int tmp23 = (int(b) & int((int)255));		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(635)
					int tmp24 = (int(tmp23) << int((int)8));		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(635)
					int tmp25 = (int(tmp22) | int(tmp24));		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(635)
					int tmp26 = (int(pixel) & int((int)255));		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(635)
					int tmp27 = (int(tmp26) & int((int)255));		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(635)
					int tmp28 = (int(tmp25) | int(tmp27));		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(635)
					pixel = tmp28;
				}
			}
		}
	}
	HX_STACK_LINE(637)
	int tmp = format;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(637)
	switch( (int)(tmp)){
		case (int)1: {
			HX_STACK_LINE(639)
			int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(639)
			{
				HX_STACK_LINE(639)
				int tmp2;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(639)
				{
					HX_STACK_LINE(639)
					int argb = (int)0;		HX_STACK_VAR(argb,"argb");
					HX_STACK_LINE(639)
					tmp2 = argb;
				}
				HX_STACK_LINE(639)
				int argb = tmp2;		HX_STACK_VAR(argb,"argb");
				HX_STACK_LINE(639)
				{
					HX_STACK_LINE(639)
					int tmp3 = (int(pixel) & int((int)255));		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(639)
					int tmp4 = (int(tmp3) & int((int)255));		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(639)
					int tmp5 = (int(tmp4) << int((int)24));		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(639)
					int tmp6 = (int(pixel) >> int((int)24));		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(639)
					int tmp7 = (int(tmp6) & int((int)255));		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(639)
					int tmp8 = (int(tmp7) & int((int)255));		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(639)
					int tmp9 = (int(tmp8) << int((int)16));		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(639)
					int tmp10 = (int(tmp5) | int(tmp9));		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(639)
					int tmp11 = (int(pixel) >> int((int)16));		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(639)
					int tmp12 = (int(tmp11) & int((int)255));		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(639)
					int tmp13 = (int(tmp12) & int((int)255));		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(639)
					int tmp14 = (int(tmp13) << int((int)8));		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(639)
					int tmp15 = (int(tmp10) | int(tmp14));		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(639)
					int tmp16 = (int(pixel) >> int((int)8));		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(639)
					int tmp17 = (int(tmp16) & int((int)255));		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(639)
					int tmp18 = (int(tmp17) & int((int)255));		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(639)
					int tmp19 = (int(tmp15) | int(tmp18));		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(639)
					argb = tmp19;
				}
				HX_STACK_LINE(639)
				tmp1 = argb;
			}
			HX_STACK_LINE(639)
			int tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(639)
			return tmp2;
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(640)
			int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(640)
			{
				HX_STACK_LINE(640)
				int tmp2;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(640)
				{
					HX_STACK_LINE(640)
					int bgra = (int)0;		HX_STACK_VAR(bgra,"bgra");
					HX_STACK_LINE(640)
					tmp2 = bgra;
				}
				HX_STACK_LINE(640)
				int bgra = tmp2;		HX_STACK_VAR(bgra,"bgra");
				HX_STACK_LINE(640)
				{
					HX_STACK_LINE(640)
					int tmp3 = (int(pixel) >> int((int)8));		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(640)
					int tmp4 = (int(tmp3) & int((int)255));		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(640)
					int tmp5 = (int(tmp4) & int((int)255));		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(640)
					int tmp6 = (int(tmp5) << int((int)24));		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(640)
					int tmp7 = (int(pixel) >> int((int)16));		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(640)
					int tmp8 = (int(tmp7) & int((int)255));		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(640)
					int tmp9 = (int(tmp8) & int((int)255));		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(640)
					int tmp10 = (int(tmp9) << int((int)16));		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(640)
					int tmp11 = (int(tmp6) | int(tmp10));		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(640)
					int tmp12 = (int(pixel) >> int((int)24));		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(640)
					int tmp13 = (int(tmp12) & int((int)255));		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(640)
					int tmp14 = (int(tmp13) & int((int)255));		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(640)
					int tmp15 = (int(tmp14) << int((int)8));		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(640)
					int tmp16 = (int(tmp11) | int(tmp15));		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(640)
					int tmp17 = (int(pixel) & int((int)255));		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(640)
					int tmp18 = (int(tmp17) & int((int)255));		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(640)
					int tmp19 = (int(tmp16) | int(tmp18));		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(640)
					bgra = tmp19;
				}
				HX_STACK_LINE(640)
				tmp1 = bgra;
			}
			HX_STACK_LINE(640)
			int tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(640)
			return tmp2;
		}
		;break;
		default: {
			HX_STACK_LINE(641)
			int tmp1 = pixel;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(641)
			return tmp1;
		}
	}
	HX_STACK_LINE(637)
	return (int)0;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(ImageDataUtil_obj,getPixel32,return )

::haxe::io::Bytes ImageDataUtil_obj::getPixels( ::lime::graphics::Image image,::lime::math::Rectangle rect,int format){
	HX_STACK_FRAME("lime.graphics.utils.ImageDataUtil","getPixels",0xab3d94f5,"lime.graphics.utils.ImageDataUtil.getPixels","lime/graphics/utils/ImageDataUtil.hx",648,0x494d921f)
	HX_STACK_ARG(image,"image")
	HX_STACK_ARG(rect,"rect")
	HX_STACK_ARG(format,"format")
	HX_STACK_LINE(650)
	::lime::utils::ArrayBufferView tmp = image->buffer->data;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(650)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(650)
	if ((tmp1)){
		HX_STACK_LINE(650)
		return null();
	}
	HX_STACK_LINE(652)
	Float tmp2 = (rect->width * rect->height);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(652)
	int tmp3 = ::Std_obj::_int(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(652)
	int length = tmp3;		HX_STACK_VAR(length,"length");
	HX_STACK_LINE(653)
	int tmp4 = (length * (int)4);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(653)
	::haxe::io::Bytes tmp5 = ::haxe::io::Bytes_obj::alloc(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(653)
	::haxe::io::Bytes bytes = tmp5;		HX_STACK_VAR(bytes,"bytes");
	HX_STACK_LINE(656)
	bool tmp6 = ::lime::_system::CFFI_obj::enabled;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(656)
	if ((tmp6)){
		HX_STACK_LINE(656)
		::lime::graphics::utils::ImageDataUtil_obj::cffi_lime_image_data_util_get_pixels.call(hx::DynamicPtr(image),hx::DynamicPtr(rect),format,hx::DynamicPtr(bytes));
	}
	else{
		HX_STACK_LINE(660)
		::lime::utils::ArrayBufferView tmp7 = image->buffer->data;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(660)
		::lime::utils::ArrayBufferView data = tmp7;		HX_STACK_VAR(data,"data");
		HX_STACK_LINE(661)
		int tmp8 = image->buffer->format;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(661)
		int sourceFormat = tmp8;		HX_STACK_VAR(sourceFormat,"sourceFormat");
		HX_STACK_LINE(662)
		bool tmp9 = image->buffer->premultiplied;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(662)
		bool premultiplied = tmp9;		HX_STACK_VAR(premultiplied,"premultiplied");
		HX_STACK_LINE(664)
		::lime::graphics::utils::_ImageDataUtil::ImageDataView tmp10 = ::lime::graphics::utils::_ImageDataUtil::ImageDataView_obj::__new(image,rect);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(664)
		::lime::graphics::utils::_ImageDataUtil::ImageDataView dataView = tmp10;		HX_STACK_VAR(dataView,"dataView");
		HX_STACK_LINE(665)
		int position;		HX_STACK_VAR(position,"position");
		HX_STACK_LINE(665)
		int argb;		HX_STACK_VAR(argb,"argb");
		HX_STACK_LINE(665)
		int bgra;		HX_STACK_VAR(bgra,"bgra");
		HX_STACK_LINE(665)
		int pixel;		HX_STACK_VAR(pixel,"pixel");
		HX_STACK_LINE(666)
		int destPosition = (int)0;		HX_STACK_VAR(destPosition,"destPosition");
		HX_STACK_LINE(668)
		{
			HX_STACK_LINE(668)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(668)
			int _g = dataView->height;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(668)
			while((true)){
				HX_STACK_LINE(668)
				bool tmp11 = (_g1 < _g);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(668)
				bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(668)
				if ((tmp12)){
					HX_STACK_LINE(668)
					break;
				}
				HX_STACK_LINE(668)
				int tmp13 = (_g1)++;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(668)
				int y = tmp13;		HX_STACK_VAR(y,"y");
				HX_STACK_LINE(670)
				int tmp14 = dataView->offset;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(670)
				int tmp15 = (dataView->stride * y);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(670)
				int tmp16 = (tmp14 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(670)
				position = tmp16;
				HX_STACK_LINE(672)
				{
					HX_STACK_LINE(672)
					int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(672)
					int _g2 = dataView->width;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(672)
					while((true)){
						HX_STACK_LINE(672)
						bool tmp17 = (_g3 < _g2);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(672)
						bool tmp18 = !(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(672)
						if ((tmp18)){
							HX_STACK_LINE(672)
							break;
						}
						HX_STACK_LINE(672)
						int tmp19 = (_g3)++;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(672)
						int x = tmp19;		HX_STACK_VAR(x,"x");
						HX_STACK_LINE(674)
						{
							HX_STACK_LINE(674)
							int tmp20 = sourceFormat;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(674)
							switch( (int)(tmp20)){
								case (int)2: {
									HX_STACK_LINE(674)
									int tmp21 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((position + (int)2))));		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(674)
									Dynamic tmp22 = (int(tmp21) & int((int)255));		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(674)
									int r = tmp22;		HX_STACK_VAR(r,"r");
									HX_STACK_LINE(674)
									int tmp23 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((position + (int)1))));		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(674)
									Dynamic tmp24 = (int(tmp23) & int((int)255));		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(674)
									int g = tmp24;		HX_STACK_VAR(g,"g");
									HX_STACK_LINE(674)
									int tmp25 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + position));		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(674)
									Dynamic tmp26 = (int(tmp25) & int((int)255));		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(674)
									int b = tmp26;		HX_STACK_VAR(b,"b");
									HX_STACK_LINE(674)
									int tmp27 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((position + (int)3))));		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(674)
									Dynamic tmp28 = (int(tmp27) & int((int)255));		HX_STACK_VAR(tmp28,"tmp28");
									HX_STACK_LINE(674)
									int a = tmp28;		HX_STACK_VAR(a,"a");
									HX_STACK_LINE(674)
									int tmp29 = (int(r) & int((int)255));		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(674)
									int tmp30 = (int(tmp29) << int((int)24));		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(674)
									int tmp31 = (int(g) & int((int)255));		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(674)
									int tmp32 = (int(tmp31) << int((int)16));		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(674)
									int tmp33 = (int(tmp30) | int(tmp32));		HX_STACK_VAR(tmp33,"tmp33");
									HX_STACK_LINE(674)
									int tmp34 = (int(b) & int((int)255));		HX_STACK_VAR(tmp34,"tmp34");
									HX_STACK_LINE(674)
									int tmp35 = (int(tmp34) << int((int)8));		HX_STACK_VAR(tmp35,"tmp35");
									HX_STACK_LINE(674)
									int tmp36 = (int(tmp33) | int(tmp35));		HX_STACK_VAR(tmp36,"tmp36");
									HX_STACK_LINE(674)
									int tmp37 = (int(a) & int((int)255));		HX_STACK_VAR(tmp37,"tmp37");
									HX_STACK_LINE(674)
									int tmp38 = (int(tmp36) | int(tmp37));		HX_STACK_VAR(tmp38,"tmp38");
									HX_STACK_LINE(674)
									pixel = tmp38;
								}
								;break;
								case (int)0: {
									HX_STACK_LINE(674)
									int tmp21 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + position));		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(674)
									Dynamic tmp22 = (int(tmp21) & int((int)255));		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(674)
									int r = tmp22;		HX_STACK_VAR(r,"r");
									HX_STACK_LINE(674)
									int tmp23 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((position + (int)1))));		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(674)
									Dynamic tmp24 = (int(tmp23) & int((int)255));		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(674)
									int g = tmp24;		HX_STACK_VAR(g,"g");
									HX_STACK_LINE(674)
									int tmp25 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((position + (int)2))));		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(674)
									Dynamic tmp26 = (int(tmp25) & int((int)255));		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(674)
									int b = tmp26;		HX_STACK_VAR(b,"b");
									HX_STACK_LINE(674)
									int tmp27 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((position + (int)3))));		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(674)
									Dynamic tmp28 = (int(tmp27) & int((int)255));		HX_STACK_VAR(tmp28,"tmp28");
									HX_STACK_LINE(674)
									int a = tmp28;		HX_STACK_VAR(a,"a");
									HX_STACK_LINE(674)
									int tmp29 = (int(r) & int((int)255));		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(674)
									int tmp30 = (int(tmp29) << int((int)24));		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(674)
									int tmp31 = (int(g) & int((int)255));		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(674)
									int tmp32 = (int(tmp31) << int((int)16));		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(674)
									int tmp33 = (int(tmp30) | int(tmp32));		HX_STACK_VAR(tmp33,"tmp33");
									HX_STACK_LINE(674)
									int tmp34 = (int(b) & int((int)255));		HX_STACK_VAR(tmp34,"tmp34");
									HX_STACK_LINE(674)
									int tmp35 = (int(tmp34) << int((int)8));		HX_STACK_VAR(tmp35,"tmp35");
									HX_STACK_LINE(674)
									int tmp36 = (int(tmp33) | int(tmp35));		HX_STACK_VAR(tmp36,"tmp36");
									HX_STACK_LINE(674)
									int tmp37 = (int(a) & int((int)255));		HX_STACK_VAR(tmp37,"tmp37");
									HX_STACK_LINE(674)
									int tmp38 = (int(tmp36) | int(tmp37));		HX_STACK_VAR(tmp38,"tmp38");
									HX_STACK_LINE(674)
									pixel = tmp38;
								}
								;break;
								case (int)1: {
									HX_STACK_LINE(674)
									int tmp21 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((position + (int)1))));		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(674)
									Dynamic tmp22 = (int(tmp21) & int((int)255));		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(674)
									int r = tmp22;		HX_STACK_VAR(r,"r");
									HX_STACK_LINE(674)
									int tmp23 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((position + (int)2))));		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(674)
									Dynamic tmp24 = (int(tmp23) & int((int)255));		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(674)
									int g = tmp24;		HX_STACK_VAR(g,"g");
									HX_STACK_LINE(674)
									int tmp25 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((position + (int)3))));		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(674)
									Dynamic tmp26 = (int(tmp25) & int((int)255));		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(674)
									int b = tmp26;		HX_STACK_VAR(b,"b");
									HX_STACK_LINE(674)
									int tmp27 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + position));		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(674)
									Dynamic tmp28 = (int(tmp27) & int((int)255));		HX_STACK_VAR(tmp28,"tmp28");
									HX_STACK_LINE(674)
									int a = tmp28;		HX_STACK_VAR(a,"a");
									HX_STACK_LINE(674)
									int tmp29 = (int(r) & int((int)255));		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(674)
									int tmp30 = (int(tmp29) << int((int)24));		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(674)
									int tmp31 = (int(g) & int((int)255));		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(674)
									int tmp32 = (int(tmp31) << int((int)16));		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(674)
									int tmp33 = (int(tmp30) | int(tmp32));		HX_STACK_VAR(tmp33,"tmp33");
									HX_STACK_LINE(674)
									int tmp34 = (int(b) & int((int)255));		HX_STACK_VAR(tmp34,"tmp34");
									HX_STACK_LINE(674)
									int tmp35 = (int(tmp34) << int((int)8));		HX_STACK_VAR(tmp35,"tmp35");
									HX_STACK_LINE(674)
									int tmp36 = (int(tmp33) | int(tmp35));		HX_STACK_VAR(tmp36,"tmp36");
									HX_STACK_LINE(674)
									int tmp37 = (int(a) & int((int)255));		HX_STACK_VAR(tmp37,"tmp37");
									HX_STACK_LINE(674)
									int tmp38 = (int(tmp36) | int(tmp37));		HX_STACK_VAR(tmp38,"tmp38");
									HX_STACK_LINE(674)
									pixel = tmp38;
								}
								;break;
							}
							HX_STACK_LINE(674)
							bool tmp21 = premultiplied;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(674)
							if ((tmp21)){
								HX_STACK_LINE(674)
								int tmp22 = (int(pixel) & int((int)255));		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(674)
								bool tmp23 = (tmp22 != (int)0);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(674)
								bool tmp24;		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(674)
								if ((tmp23)){
									HX_STACK_LINE(674)
									int tmp25 = (int(pixel) & int((int)255));		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(674)
									int tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(674)
									tmp24 = (tmp26 != (int)255);
								}
								else{
									HX_STACK_LINE(674)
									tmp24 = false;
								}
								HX_STACK_LINE(674)
								if ((tmp24)){
									HX_STACK_LINE(674)
									int tmp25 = (int(pixel) & int((int)255));		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(674)
									Float tmp26 = (Float(((Float)255.0)) / Float(tmp25));		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(674)
									::lime::math::color::_RGBA::RGBA_Impl__obj::unmult = tmp26;
									HX_STACK_LINE(674)
									{
										HX_STACK_LINE(674)
										Dynamic tmp27;		HX_STACK_VAR(tmp27,"tmp27");
										HX_STACK_LINE(674)
										{
											HX_STACK_LINE(674)
											::lime::utils::ArrayBufferView tmp28 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(674)
											::lime::utils::ArrayBufferView this1 = tmp28;		HX_STACK_VAR(this1,"this1");
											HX_STACK_LINE(674)
											int tmp29 = (int(pixel) >> int((int)24));		HX_STACK_VAR(tmp29,"tmp29");
											HX_STACK_LINE(674)
											int tmp30 = (int(tmp29) & int((int)255));		HX_STACK_VAR(tmp30,"tmp30");
											HX_STACK_LINE(674)
											Float tmp31 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;		HX_STACK_VAR(tmp31,"tmp31");
											HX_STACK_LINE(674)
											Float tmp32 = (tmp30 * tmp31);		HX_STACK_VAR(tmp32,"tmp32");
											HX_STACK_LINE(674)
											int tmp33 = ::Math_obj::round(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
											HX_STACK_LINE(674)
											int idx = tmp33;		HX_STACK_VAR(idx,"idx");
											HX_STACK_LINE(674)
											int tmp34 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp34,"tmp34");
											HX_STACK_LINE(674)
											tmp27 = (int(tmp34) & int((int)255));
										}
										HX_STACK_LINE(674)
										int r = tmp27;		HX_STACK_VAR(r,"r");
										HX_STACK_LINE(674)
										Dynamic tmp28;		HX_STACK_VAR(tmp28,"tmp28");
										HX_STACK_LINE(674)
										{
											HX_STACK_LINE(674)
											::lime::utils::ArrayBufferView tmp29 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp29,"tmp29");
											HX_STACK_LINE(674)
											::lime::utils::ArrayBufferView this1 = tmp29;		HX_STACK_VAR(this1,"this1");
											HX_STACK_LINE(674)
											int tmp30 = (int(pixel) >> int((int)16));		HX_STACK_VAR(tmp30,"tmp30");
											HX_STACK_LINE(674)
											int tmp31 = (int(tmp30) & int((int)255));		HX_STACK_VAR(tmp31,"tmp31");
											HX_STACK_LINE(674)
											Float tmp32 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;		HX_STACK_VAR(tmp32,"tmp32");
											HX_STACK_LINE(674)
											Float tmp33 = (tmp31 * tmp32);		HX_STACK_VAR(tmp33,"tmp33");
											HX_STACK_LINE(674)
											int tmp34 = ::Math_obj::round(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
											HX_STACK_LINE(674)
											int idx = tmp34;		HX_STACK_VAR(idx,"idx");
											HX_STACK_LINE(674)
											int tmp35 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp35,"tmp35");
											HX_STACK_LINE(674)
											tmp28 = (int(tmp35) & int((int)255));
										}
										HX_STACK_LINE(674)
										int g = tmp28;		HX_STACK_VAR(g,"g");
										HX_STACK_LINE(674)
										Dynamic tmp29;		HX_STACK_VAR(tmp29,"tmp29");
										HX_STACK_LINE(674)
										{
											HX_STACK_LINE(674)
											::lime::utils::ArrayBufferView tmp30 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp30,"tmp30");
											HX_STACK_LINE(674)
											::lime::utils::ArrayBufferView this1 = tmp30;		HX_STACK_VAR(this1,"this1");
											HX_STACK_LINE(674)
											int tmp31 = (int(pixel) >> int((int)8));		HX_STACK_VAR(tmp31,"tmp31");
											HX_STACK_LINE(674)
											int tmp32 = (int(tmp31) & int((int)255));		HX_STACK_VAR(tmp32,"tmp32");
											HX_STACK_LINE(674)
											Float tmp33 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;		HX_STACK_VAR(tmp33,"tmp33");
											HX_STACK_LINE(674)
											Float tmp34 = (tmp32 * tmp33);		HX_STACK_VAR(tmp34,"tmp34");
											HX_STACK_LINE(674)
											int tmp35 = ::Math_obj::round(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
											HX_STACK_LINE(674)
											int idx = tmp35;		HX_STACK_VAR(idx,"idx");
											HX_STACK_LINE(674)
											int tmp36 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp36,"tmp36");
											HX_STACK_LINE(674)
											tmp29 = (int(tmp36) & int((int)255));
										}
										HX_STACK_LINE(674)
										int b = tmp29;		HX_STACK_VAR(b,"b");
										HX_STACK_LINE(674)
										int tmp30 = (int(r) & int((int)255));		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(674)
										int tmp31 = (int(tmp30) << int((int)24));		HX_STACK_VAR(tmp31,"tmp31");
										HX_STACK_LINE(674)
										int tmp32 = (int(g) & int((int)255));		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(674)
										int tmp33 = (int(tmp32) << int((int)16));		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(674)
										int tmp34 = (int(tmp31) | int(tmp33));		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(674)
										int tmp35 = (int(b) & int((int)255));		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(674)
										int tmp36 = (int(tmp35) << int((int)8));		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(674)
										int tmp37 = (int(tmp34) | int(tmp36));		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(674)
										int tmp38 = (int(pixel) & int((int)255));		HX_STACK_VAR(tmp38,"tmp38");
										HX_STACK_LINE(674)
										int tmp39 = (int(tmp38) & int((int)255));		HX_STACK_VAR(tmp39,"tmp39");
										HX_STACK_LINE(674)
										int tmp40 = (int(tmp37) | int(tmp39));		HX_STACK_VAR(tmp40,"tmp40");
										HX_STACK_LINE(674)
										pixel = tmp40;
									}
								}
							}
						}
						HX_STACK_LINE(676)
						int tmp20 = format;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(676)
						switch( (int)(tmp20)){
							case (int)1: {
								HX_STACK_LINE(678)
								int tmp21;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(678)
								{
									HX_STACK_LINE(678)
									int tmp22;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(678)
									{
										HX_STACK_LINE(678)
										int argb1 = (int)0;		HX_STACK_VAR(argb1,"argb1");
										HX_STACK_LINE(678)
										tmp22 = argb1;
									}
									HX_STACK_LINE(678)
									int argb1 = tmp22;		HX_STACK_VAR(argb1,"argb1");
									HX_STACK_LINE(678)
									{
										HX_STACK_LINE(678)
										int tmp23 = (int(pixel) & int((int)255));		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(678)
										int tmp24 = (int(tmp23) & int((int)255));		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(678)
										int tmp25 = (int(tmp24) << int((int)24));		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(678)
										int tmp26 = (int(pixel) >> int((int)24));		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(678)
										int tmp27 = (int(tmp26) & int((int)255));		HX_STACK_VAR(tmp27,"tmp27");
										HX_STACK_LINE(678)
										int tmp28 = (int(tmp27) & int((int)255));		HX_STACK_VAR(tmp28,"tmp28");
										HX_STACK_LINE(678)
										int tmp29 = (int(tmp28) << int((int)16));		HX_STACK_VAR(tmp29,"tmp29");
										HX_STACK_LINE(678)
										int tmp30 = (int(tmp25) | int(tmp29));		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(678)
										int tmp31 = (int(pixel) >> int((int)16));		HX_STACK_VAR(tmp31,"tmp31");
										HX_STACK_LINE(678)
										int tmp32 = (int(tmp31) & int((int)255));		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(678)
										int tmp33 = (int(tmp32) & int((int)255));		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(678)
										int tmp34 = (int(tmp33) << int((int)8));		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(678)
										int tmp35 = (int(tmp30) | int(tmp34));		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(678)
										int tmp36 = (int(pixel) >> int((int)8));		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(678)
										int tmp37 = (int(tmp36) & int((int)255));		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(678)
										int tmp38 = (int(tmp37) & int((int)255));		HX_STACK_VAR(tmp38,"tmp38");
										HX_STACK_LINE(678)
										int tmp39 = (int(tmp35) | int(tmp38));		HX_STACK_VAR(tmp39,"tmp39");
										HX_STACK_LINE(678)
										argb1 = tmp39;
									}
									HX_STACK_LINE(678)
									tmp21 = argb1;
								}
								HX_STACK_LINE(678)
								argb = tmp21;
								HX_STACK_LINE(678)
								pixel = argb;
							}
							;break;
							case (int)2: {
								HX_STACK_LINE(679)
								int tmp21;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(679)
								{
									HX_STACK_LINE(679)
									int tmp22;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(679)
									{
										HX_STACK_LINE(679)
										int bgra1 = (int)0;		HX_STACK_VAR(bgra1,"bgra1");
										HX_STACK_LINE(679)
										tmp22 = bgra1;
									}
									HX_STACK_LINE(679)
									int bgra1 = tmp22;		HX_STACK_VAR(bgra1,"bgra1");
									HX_STACK_LINE(679)
									{
										HX_STACK_LINE(679)
										int tmp23 = (int(pixel) >> int((int)8));		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(679)
										int tmp24 = (int(tmp23) & int((int)255));		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(679)
										int tmp25 = (int(tmp24) & int((int)255));		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(679)
										int tmp26 = (int(tmp25) << int((int)24));		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(679)
										int tmp27 = (int(pixel) >> int((int)16));		HX_STACK_VAR(tmp27,"tmp27");
										HX_STACK_LINE(679)
										int tmp28 = (int(tmp27) & int((int)255));		HX_STACK_VAR(tmp28,"tmp28");
										HX_STACK_LINE(679)
										int tmp29 = (int(tmp28) & int((int)255));		HX_STACK_VAR(tmp29,"tmp29");
										HX_STACK_LINE(679)
										int tmp30 = (int(tmp29) << int((int)16));		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(679)
										int tmp31 = (int(tmp26) | int(tmp30));		HX_STACK_VAR(tmp31,"tmp31");
										HX_STACK_LINE(679)
										int tmp32 = (int(pixel) >> int((int)24));		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(679)
										int tmp33 = (int(tmp32) & int((int)255));		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(679)
										int tmp34 = (int(tmp33) & int((int)255));		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(679)
										int tmp35 = (int(tmp34) << int((int)8));		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(679)
										int tmp36 = (int(tmp31) | int(tmp35));		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(679)
										int tmp37 = (int(pixel) & int((int)255));		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(679)
										int tmp38 = (int(tmp37) & int((int)255));		HX_STACK_VAR(tmp38,"tmp38");
										HX_STACK_LINE(679)
										int tmp39 = (int(tmp36) | int(tmp38));		HX_STACK_VAR(tmp39,"tmp39");
										HX_STACK_LINE(679)
										bgra1 = tmp39;
									}
									HX_STACK_LINE(679)
									tmp21 = bgra1;
								}
								HX_STACK_LINE(679)
								bgra = tmp21;
								HX_STACK_LINE(679)
								pixel = bgra;
							}
							;break;
							default: {
							}
						}
						HX_STACK_LINE(684)
						{
							HX_STACK_LINE(684)
							int tmp21 = (destPosition)++;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(684)
							int pos = tmp21;		HX_STACK_VAR(pos,"pos");
							HX_STACK_LINE(684)
							int tmp22 = (int(pixel) >> int((int)24));		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(684)
							int tmp23 = (int(tmp22) & int((int)255));		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(684)
							bytes->b[pos] = tmp23;
						}
						HX_STACK_LINE(685)
						{
							HX_STACK_LINE(685)
							int tmp21 = (destPosition)++;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(685)
							int pos = tmp21;		HX_STACK_VAR(pos,"pos");
							HX_STACK_LINE(685)
							int tmp22 = (int(pixel) >> int((int)16));		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(685)
							int tmp23 = (int(tmp22) & int((int)255));		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(685)
							bytes->b[pos] = tmp23;
						}
						HX_STACK_LINE(686)
						{
							HX_STACK_LINE(686)
							int tmp21 = (destPosition)++;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(686)
							int pos = tmp21;		HX_STACK_VAR(pos,"pos");
							HX_STACK_LINE(686)
							int tmp22 = (int(pixel) >> int((int)8));		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(686)
							int tmp23 = (int(tmp22) & int((int)255));		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(686)
							bytes->b[pos] = tmp23;
						}
						HX_STACK_LINE(687)
						{
							HX_STACK_LINE(687)
							int tmp21 = (destPosition)++;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(687)
							int pos = tmp21;		HX_STACK_VAR(pos,"pos");
							HX_STACK_LINE(687)
							int tmp22 = (int(pixel) & int((int)255));		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(687)
							bytes->b[pos] = tmp22;
						}
						HX_STACK_LINE(689)
						hx::AddEq(position,(int)4);
					}
				}
			}
		}
	}
	HX_STACK_LINE(697)
	::haxe::io::Bytes tmp7 = bytes;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(697)
	return tmp7;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(ImageDataUtil_obj,getPixels,return )

Void ImageDataUtil_obj::merge( ::lime::graphics::Image image,::lime::graphics::Image sourceImage,::lime::math::Rectangle sourceRect,::lime::math::Vector2 destPoint,int redMultiplier,int greenMultiplier,int blueMultiplier,int alphaMultiplier){
{
		HX_STACK_FRAME("lime.graphics.utils.ImageDataUtil","merge",0xf0318e4a,"lime.graphics.utils.ImageDataUtil.merge","lime/graphics/utils/ImageDataUtil.hx",702,0x494d921f)
		HX_STACK_ARG(image,"image")
		HX_STACK_ARG(sourceImage,"sourceImage")
		HX_STACK_ARG(sourceRect,"sourceRect")
		HX_STACK_ARG(destPoint,"destPoint")
		HX_STACK_ARG(redMultiplier,"redMultiplier")
		HX_STACK_ARG(greenMultiplier,"greenMultiplier")
		HX_STACK_ARG(blueMultiplier,"blueMultiplier")
		HX_STACK_ARG(alphaMultiplier,"alphaMultiplier")
		HX_STACK_LINE(704)
		::lime::utils::ArrayBufferView tmp = image->buffer->data;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(704)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(704)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(704)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(704)
		if ((tmp2)){
			HX_STACK_LINE(704)
			::lime::utils::ArrayBufferView tmp4 = sourceImage->buffer->data;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(704)
			::lime::utils::ArrayBufferView tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(704)
			tmp3 = (tmp5 == null());
		}
		else{
			HX_STACK_LINE(704)
			tmp3 = true;
		}
		HX_STACK_LINE(704)
		if ((tmp3)){
			HX_STACK_LINE(704)
			return null();
		}
		HX_STACK_LINE(707)
		bool tmp4 = ::lime::_system::CFFI_obj::enabled;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(707)
		if ((tmp4)){
			HX_STACK_LINE(707)
			::lime::graphics::utils::ImageDataUtil_obj::cffi_lime_image_data_util_merge.call(hx::DynamicPtr(image),hx::DynamicPtr(sourceImage),hx::DynamicPtr(sourceRect),hx::DynamicPtr(destPoint),redMultiplier,greenMultiplier,blueMultiplier,alphaMultiplier);
		}
		else{
			HX_STACK_LINE(711)
			::lime::graphics::utils::_ImageDataUtil::ImageDataView tmp5 = ::lime::graphics::utils::_ImageDataUtil::ImageDataView_obj::__new(sourceImage,sourceRect);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(711)
			::lime::graphics::utils::_ImageDataUtil::ImageDataView sourceView = tmp5;		HX_STACK_VAR(sourceView,"sourceView");
			HX_STACK_LINE(712)
			::lime::graphics::Image tmp6 = image;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(712)
			::lime::math::Rectangle tmp7 = ::lime::math::Rectangle_obj::__new(destPoint->x,destPoint->y,sourceView->width,sourceView->height);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(712)
			::lime::graphics::utils::_ImageDataUtil::ImageDataView tmp8 = ::lime::graphics::utils::_ImageDataUtil::ImageDataView_obj::__new(tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(712)
			::lime::graphics::utils::_ImageDataUtil::ImageDataView destView = tmp8;		HX_STACK_VAR(destView,"destView");
			HX_STACK_LINE(714)
			::lime::utils::ArrayBufferView tmp9 = sourceImage->buffer->data;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(714)
			::lime::utils::ArrayBufferView sourceData = tmp9;		HX_STACK_VAR(sourceData,"sourceData");
			HX_STACK_LINE(715)
			::lime::utils::ArrayBufferView tmp10 = image->buffer->data;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(715)
			::lime::utils::ArrayBufferView destData = tmp10;		HX_STACK_VAR(destData,"destData");
			HX_STACK_LINE(716)
			int tmp11 = sourceImage->buffer->format;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(716)
			int sourceFormat = tmp11;		HX_STACK_VAR(sourceFormat,"sourceFormat");
			HX_STACK_LINE(717)
			int tmp12 = image->buffer->format;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(717)
			int destFormat = tmp12;		HX_STACK_VAR(destFormat,"destFormat");
			HX_STACK_LINE(718)
			bool tmp13 = sourceImage->buffer->premultiplied;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(718)
			bool sourcePremultiplied = tmp13;		HX_STACK_VAR(sourcePremultiplied,"sourcePremultiplied");
			HX_STACK_LINE(719)
			bool tmp14 = image->buffer->premultiplied;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(719)
			bool destPremultiplied = tmp14;		HX_STACK_VAR(destPremultiplied,"destPremultiplied");
			HX_STACK_LINE(721)
			int sourcePosition;		HX_STACK_VAR(sourcePosition,"sourcePosition");
			HX_STACK_LINE(721)
			int destPosition;		HX_STACK_VAR(destPosition,"destPosition");
			HX_STACK_LINE(721)
			int sourcePixel;		HX_STACK_VAR(sourcePixel,"sourcePixel");
			HX_STACK_LINE(721)
			int destPixel;		HX_STACK_VAR(destPixel,"destPixel");
			HX_STACK_LINE(723)
			{
				HX_STACK_LINE(723)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(723)
				int _g = destView->height;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(723)
				while((true)){
					HX_STACK_LINE(723)
					bool tmp15 = (_g1 < _g);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(723)
					bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(723)
					if ((tmp16)){
						HX_STACK_LINE(723)
						break;
					}
					HX_STACK_LINE(723)
					int tmp17 = (_g1)++;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(723)
					int y = tmp17;		HX_STACK_VAR(y,"y");
					HX_STACK_LINE(725)
					int tmp18 = sourceView->offset;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(725)
					int tmp19 = (sourceView->stride * y);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(725)
					int tmp20 = (tmp18 + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(725)
					sourcePosition = tmp20;
					HX_STACK_LINE(726)
					int tmp21 = destView->offset;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(726)
					int tmp22 = (destView->stride * y);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(726)
					int tmp23 = (tmp21 + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(726)
					destPosition = tmp23;
					HX_STACK_LINE(728)
					{
						HX_STACK_LINE(728)
						int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
						HX_STACK_LINE(728)
						int _g2 = destView->width;		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(728)
						while((true)){
							HX_STACK_LINE(728)
							bool tmp24 = (_g3 < _g2);		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(728)
							bool tmp25 = !(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(728)
							if ((tmp25)){
								HX_STACK_LINE(728)
								break;
							}
							HX_STACK_LINE(728)
							int tmp26 = (_g3)++;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(728)
							int x = tmp26;		HX_STACK_VAR(x,"x");
							HX_STACK_LINE(730)
							{
								HX_STACK_LINE(730)
								int tmp27 = sourceFormat;		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(730)
								switch( (int)(tmp27)){
									case (int)2: {
										HX_STACK_LINE(730)
										int tmp28 = ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + ((sourcePosition + (int)2))));		HX_STACK_VAR(tmp28,"tmp28");
										HX_STACK_LINE(730)
										Dynamic tmp29 = (int(tmp28) & int((int)255));		HX_STACK_VAR(tmp29,"tmp29");
										HX_STACK_LINE(730)
										int r = tmp29;		HX_STACK_VAR(r,"r");
										HX_STACK_LINE(730)
										int tmp30 = ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + ((sourcePosition + (int)1))));		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(730)
										Dynamic tmp31 = (int(tmp30) & int((int)255));		HX_STACK_VAR(tmp31,"tmp31");
										HX_STACK_LINE(730)
										int g = tmp31;		HX_STACK_VAR(g,"g");
										HX_STACK_LINE(730)
										int tmp32 = ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + sourcePosition));		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(730)
										Dynamic tmp33 = (int(tmp32) & int((int)255));		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(730)
										int b = tmp33;		HX_STACK_VAR(b,"b");
										HX_STACK_LINE(730)
										int tmp34 = ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + ((sourcePosition + (int)3))));		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(730)
										Dynamic tmp35 = (int(tmp34) & int((int)255));		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(730)
										int a = tmp35;		HX_STACK_VAR(a,"a");
										HX_STACK_LINE(730)
										int tmp36 = (int(r) & int((int)255));		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(730)
										int tmp37 = (int(tmp36) << int((int)24));		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(730)
										int tmp38 = (int(g) & int((int)255));		HX_STACK_VAR(tmp38,"tmp38");
										HX_STACK_LINE(730)
										int tmp39 = (int(tmp38) << int((int)16));		HX_STACK_VAR(tmp39,"tmp39");
										HX_STACK_LINE(730)
										int tmp40 = (int(tmp37) | int(tmp39));		HX_STACK_VAR(tmp40,"tmp40");
										HX_STACK_LINE(730)
										int tmp41 = (int(b) & int((int)255));		HX_STACK_VAR(tmp41,"tmp41");
										HX_STACK_LINE(730)
										int tmp42 = (int(tmp41) << int((int)8));		HX_STACK_VAR(tmp42,"tmp42");
										HX_STACK_LINE(730)
										int tmp43 = (int(tmp40) | int(tmp42));		HX_STACK_VAR(tmp43,"tmp43");
										HX_STACK_LINE(730)
										int tmp44 = (int(a) & int((int)255));		HX_STACK_VAR(tmp44,"tmp44");
										HX_STACK_LINE(730)
										int tmp45 = (int(tmp43) | int(tmp44));		HX_STACK_VAR(tmp45,"tmp45");
										HX_STACK_LINE(730)
										sourcePixel = tmp45;
									}
									;break;
									case (int)0: {
										HX_STACK_LINE(730)
										int tmp28 = ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + sourcePosition));		HX_STACK_VAR(tmp28,"tmp28");
										HX_STACK_LINE(730)
										Dynamic tmp29 = (int(tmp28) & int((int)255));		HX_STACK_VAR(tmp29,"tmp29");
										HX_STACK_LINE(730)
										int r = tmp29;		HX_STACK_VAR(r,"r");
										HX_STACK_LINE(730)
										int tmp30 = ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + ((sourcePosition + (int)1))));		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(730)
										Dynamic tmp31 = (int(tmp30) & int((int)255));		HX_STACK_VAR(tmp31,"tmp31");
										HX_STACK_LINE(730)
										int g = tmp31;		HX_STACK_VAR(g,"g");
										HX_STACK_LINE(730)
										int tmp32 = ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + ((sourcePosition + (int)2))));		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(730)
										Dynamic tmp33 = (int(tmp32) & int((int)255));		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(730)
										int b = tmp33;		HX_STACK_VAR(b,"b");
										HX_STACK_LINE(730)
										int tmp34 = ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + ((sourcePosition + (int)3))));		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(730)
										Dynamic tmp35 = (int(tmp34) & int((int)255));		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(730)
										int a = tmp35;		HX_STACK_VAR(a,"a");
										HX_STACK_LINE(730)
										int tmp36 = (int(r) & int((int)255));		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(730)
										int tmp37 = (int(tmp36) << int((int)24));		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(730)
										int tmp38 = (int(g) & int((int)255));		HX_STACK_VAR(tmp38,"tmp38");
										HX_STACK_LINE(730)
										int tmp39 = (int(tmp38) << int((int)16));		HX_STACK_VAR(tmp39,"tmp39");
										HX_STACK_LINE(730)
										int tmp40 = (int(tmp37) | int(tmp39));		HX_STACK_VAR(tmp40,"tmp40");
										HX_STACK_LINE(730)
										int tmp41 = (int(b) & int((int)255));		HX_STACK_VAR(tmp41,"tmp41");
										HX_STACK_LINE(730)
										int tmp42 = (int(tmp41) << int((int)8));		HX_STACK_VAR(tmp42,"tmp42");
										HX_STACK_LINE(730)
										int tmp43 = (int(tmp40) | int(tmp42));		HX_STACK_VAR(tmp43,"tmp43");
										HX_STACK_LINE(730)
										int tmp44 = (int(a) & int((int)255));		HX_STACK_VAR(tmp44,"tmp44");
										HX_STACK_LINE(730)
										int tmp45 = (int(tmp43) | int(tmp44));		HX_STACK_VAR(tmp45,"tmp45");
										HX_STACK_LINE(730)
										sourcePixel = tmp45;
									}
									;break;
									case (int)1: {
										HX_STACK_LINE(730)
										int tmp28 = ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + ((sourcePosition + (int)1))));		HX_STACK_VAR(tmp28,"tmp28");
										HX_STACK_LINE(730)
										Dynamic tmp29 = (int(tmp28) & int((int)255));		HX_STACK_VAR(tmp29,"tmp29");
										HX_STACK_LINE(730)
										int r = tmp29;		HX_STACK_VAR(r,"r");
										HX_STACK_LINE(730)
										int tmp30 = ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + ((sourcePosition + (int)2))));		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(730)
										Dynamic tmp31 = (int(tmp30) & int((int)255));		HX_STACK_VAR(tmp31,"tmp31");
										HX_STACK_LINE(730)
										int g = tmp31;		HX_STACK_VAR(g,"g");
										HX_STACK_LINE(730)
										int tmp32 = ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + ((sourcePosition + (int)3))));		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(730)
										Dynamic tmp33 = (int(tmp32) & int((int)255));		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(730)
										int b = tmp33;		HX_STACK_VAR(b,"b");
										HX_STACK_LINE(730)
										int tmp34 = ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + sourcePosition));		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(730)
										Dynamic tmp35 = (int(tmp34) & int((int)255));		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(730)
										int a = tmp35;		HX_STACK_VAR(a,"a");
										HX_STACK_LINE(730)
										int tmp36 = (int(r) & int((int)255));		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(730)
										int tmp37 = (int(tmp36) << int((int)24));		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(730)
										int tmp38 = (int(g) & int((int)255));		HX_STACK_VAR(tmp38,"tmp38");
										HX_STACK_LINE(730)
										int tmp39 = (int(tmp38) << int((int)16));		HX_STACK_VAR(tmp39,"tmp39");
										HX_STACK_LINE(730)
										int tmp40 = (int(tmp37) | int(tmp39));		HX_STACK_VAR(tmp40,"tmp40");
										HX_STACK_LINE(730)
										int tmp41 = (int(b) & int((int)255));		HX_STACK_VAR(tmp41,"tmp41");
										HX_STACK_LINE(730)
										int tmp42 = (int(tmp41) << int((int)8));		HX_STACK_VAR(tmp42,"tmp42");
										HX_STACK_LINE(730)
										int tmp43 = (int(tmp40) | int(tmp42));		HX_STACK_VAR(tmp43,"tmp43");
										HX_STACK_LINE(730)
										int tmp44 = (int(a) & int((int)255));		HX_STACK_VAR(tmp44,"tmp44");
										HX_STACK_LINE(730)
										int tmp45 = (int(tmp43) | int(tmp44));		HX_STACK_VAR(tmp45,"tmp45");
										HX_STACK_LINE(730)
										sourcePixel = tmp45;
									}
									;break;
								}
								HX_STACK_LINE(730)
								bool tmp28 = sourcePremultiplied;		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(730)
								if ((tmp28)){
									HX_STACK_LINE(730)
									int tmp29 = (int(sourcePixel) & int((int)255));		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(730)
									bool tmp30 = (tmp29 != (int)0);		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(730)
									bool tmp31;		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(730)
									if ((tmp30)){
										HX_STACK_LINE(730)
										int tmp32 = (int(sourcePixel) & int((int)255));		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(730)
										int tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(730)
										tmp31 = (tmp33 != (int)255);
									}
									else{
										HX_STACK_LINE(730)
										tmp31 = false;
									}
									HX_STACK_LINE(730)
									if ((tmp31)){
										HX_STACK_LINE(730)
										int tmp32 = (int(sourcePixel) & int((int)255));		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(730)
										Float tmp33 = (Float(((Float)255.0)) / Float(tmp32));		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(730)
										::lime::math::color::_RGBA::RGBA_Impl__obj::unmult = tmp33;
										HX_STACK_LINE(730)
										{
											HX_STACK_LINE(730)
											Dynamic tmp34;		HX_STACK_VAR(tmp34,"tmp34");
											HX_STACK_LINE(730)
											{
												HX_STACK_LINE(730)
												::lime::utils::ArrayBufferView tmp35 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp35,"tmp35");
												HX_STACK_LINE(730)
												::lime::utils::ArrayBufferView this1 = tmp35;		HX_STACK_VAR(this1,"this1");
												HX_STACK_LINE(730)
												int tmp36 = (int(sourcePixel) >> int((int)24));		HX_STACK_VAR(tmp36,"tmp36");
												HX_STACK_LINE(730)
												int tmp37 = (int(tmp36) & int((int)255));		HX_STACK_VAR(tmp37,"tmp37");
												HX_STACK_LINE(730)
												Float tmp38 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;		HX_STACK_VAR(tmp38,"tmp38");
												HX_STACK_LINE(730)
												Float tmp39 = (tmp37 * tmp38);		HX_STACK_VAR(tmp39,"tmp39");
												HX_STACK_LINE(730)
												int tmp40 = ::Math_obj::round(tmp39);		HX_STACK_VAR(tmp40,"tmp40");
												HX_STACK_LINE(730)
												int idx = tmp40;		HX_STACK_VAR(idx,"idx");
												HX_STACK_LINE(730)
												int tmp41 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp41,"tmp41");
												HX_STACK_LINE(730)
												tmp34 = (int(tmp41) & int((int)255));
											}
											HX_STACK_LINE(730)
											int r = tmp34;		HX_STACK_VAR(r,"r");
											HX_STACK_LINE(730)
											Dynamic tmp35;		HX_STACK_VAR(tmp35,"tmp35");
											HX_STACK_LINE(730)
											{
												HX_STACK_LINE(730)
												::lime::utils::ArrayBufferView tmp36 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp36,"tmp36");
												HX_STACK_LINE(730)
												::lime::utils::ArrayBufferView this1 = tmp36;		HX_STACK_VAR(this1,"this1");
												HX_STACK_LINE(730)
												int tmp37 = (int(sourcePixel) >> int((int)16));		HX_STACK_VAR(tmp37,"tmp37");
												HX_STACK_LINE(730)
												int tmp38 = (int(tmp37) & int((int)255));		HX_STACK_VAR(tmp38,"tmp38");
												HX_STACK_LINE(730)
												Float tmp39 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;		HX_STACK_VAR(tmp39,"tmp39");
												HX_STACK_LINE(730)
												Float tmp40 = (tmp38 * tmp39);		HX_STACK_VAR(tmp40,"tmp40");
												HX_STACK_LINE(730)
												int tmp41 = ::Math_obj::round(tmp40);		HX_STACK_VAR(tmp41,"tmp41");
												HX_STACK_LINE(730)
												int idx = tmp41;		HX_STACK_VAR(idx,"idx");
												HX_STACK_LINE(730)
												int tmp42 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp42,"tmp42");
												HX_STACK_LINE(730)
												tmp35 = (int(tmp42) & int((int)255));
											}
											HX_STACK_LINE(730)
											int g = tmp35;		HX_STACK_VAR(g,"g");
											HX_STACK_LINE(730)
											Dynamic tmp36;		HX_STACK_VAR(tmp36,"tmp36");
											HX_STACK_LINE(730)
											{
												HX_STACK_LINE(730)
												::lime::utils::ArrayBufferView tmp37 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp37,"tmp37");
												HX_STACK_LINE(730)
												::lime::utils::ArrayBufferView this1 = tmp37;		HX_STACK_VAR(this1,"this1");
												HX_STACK_LINE(730)
												int tmp38 = (int(sourcePixel) >> int((int)8));		HX_STACK_VAR(tmp38,"tmp38");
												HX_STACK_LINE(730)
												int tmp39 = (int(tmp38) & int((int)255));		HX_STACK_VAR(tmp39,"tmp39");
												HX_STACK_LINE(730)
												Float tmp40 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;		HX_STACK_VAR(tmp40,"tmp40");
												HX_STACK_LINE(730)
												Float tmp41 = (tmp39 * tmp40);		HX_STACK_VAR(tmp41,"tmp41");
												HX_STACK_LINE(730)
												int tmp42 = ::Math_obj::round(tmp41);		HX_STACK_VAR(tmp42,"tmp42");
												HX_STACK_LINE(730)
												int idx = tmp42;		HX_STACK_VAR(idx,"idx");
												HX_STACK_LINE(730)
												int tmp43 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp43,"tmp43");
												HX_STACK_LINE(730)
												tmp36 = (int(tmp43) & int((int)255));
											}
											HX_STACK_LINE(730)
											int b = tmp36;		HX_STACK_VAR(b,"b");
											HX_STACK_LINE(730)
											int tmp37 = (int(r) & int((int)255));		HX_STACK_VAR(tmp37,"tmp37");
											HX_STACK_LINE(730)
											int tmp38 = (int(tmp37) << int((int)24));		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(730)
											int tmp39 = (int(g) & int((int)255));		HX_STACK_VAR(tmp39,"tmp39");
											HX_STACK_LINE(730)
											int tmp40 = (int(tmp39) << int((int)16));		HX_STACK_VAR(tmp40,"tmp40");
											HX_STACK_LINE(730)
											int tmp41 = (int(tmp38) | int(tmp40));		HX_STACK_VAR(tmp41,"tmp41");
											HX_STACK_LINE(730)
											int tmp42 = (int(b) & int((int)255));		HX_STACK_VAR(tmp42,"tmp42");
											HX_STACK_LINE(730)
											int tmp43 = (int(tmp42) << int((int)8));		HX_STACK_VAR(tmp43,"tmp43");
											HX_STACK_LINE(730)
											int tmp44 = (int(tmp41) | int(tmp43));		HX_STACK_VAR(tmp44,"tmp44");
											HX_STACK_LINE(730)
											int tmp45 = (int(sourcePixel) & int((int)255));		HX_STACK_VAR(tmp45,"tmp45");
											HX_STACK_LINE(730)
											int tmp46 = (int(tmp45) & int((int)255));		HX_STACK_VAR(tmp46,"tmp46");
											HX_STACK_LINE(730)
											int tmp47 = (int(tmp44) | int(tmp46));		HX_STACK_VAR(tmp47,"tmp47");
											HX_STACK_LINE(730)
											sourcePixel = tmp47;
										}
									}
								}
							}
							HX_STACK_LINE(731)
							{
								HX_STACK_LINE(731)
								int tmp27 = destFormat;		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(731)
								switch( (int)(tmp27)){
									case (int)2: {
										HX_STACK_LINE(731)
										int tmp28 = ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)2))));		HX_STACK_VAR(tmp28,"tmp28");
										HX_STACK_LINE(731)
										Dynamic tmp29 = (int(tmp28) & int((int)255));		HX_STACK_VAR(tmp29,"tmp29");
										HX_STACK_LINE(731)
										int r = tmp29;		HX_STACK_VAR(r,"r");
										HX_STACK_LINE(731)
										int tmp30 = ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)1))));		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(731)
										Dynamic tmp31 = (int(tmp30) & int((int)255));		HX_STACK_VAR(tmp31,"tmp31");
										HX_STACK_LINE(731)
										int g = tmp31;		HX_STACK_VAR(g,"g");
										HX_STACK_LINE(731)
										int tmp32 = ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + destPosition));		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(731)
										Dynamic tmp33 = (int(tmp32) & int((int)255));		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(731)
										int b = tmp33;		HX_STACK_VAR(b,"b");
										HX_STACK_LINE(731)
										int tmp34 = ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)3))));		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(731)
										Dynamic tmp35 = (int(tmp34) & int((int)255));		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(731)
										int a = tmp35;		HX_STACK_VAR(a,"a");
										HX_STACK_LINE(731)
										int tmp36 = (int(r) & int((int)255));		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(731)
										int tmp37 = (int(tmp36) << int((int)24));		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(731)
										int tmp38 = (int(g) & int((int)255));		HX_STACK_VAR(tmp38,"tmp38");
										HX_STACK_LINE(731)
										int tmp39 = (int(tmp38) << int((int)16));		HX_STACK_VAR(tmp39,"tmp39");
										HX_STACK_LINE(731)
										int tmp40 = (int(tmp37) | int(tmp39));		HX_STACK_VAR(tmp40,"tmp40");
										HX_STACK_LINE(731)
										int tmp41 = (int(b) & int((int)255));		HX_STACK_VAR(tmp41,"tmp41");
										HX_STACK_LINE(731)
										int tmp42 = (int(tmp41) << int((int)8));		HX_STACK_VAR(tmp42,"tmp42");
										HX_STACK_LINE(731)
										int tmp43 = (int(tmp40) | int(tmp42));		HX_STACK_VAR(tmp43,"tmp43");
										HX_STACK_LINE(731)
										int tmp44 = (int(a) & int((int)255));		HX_STACK_VAR(tmp44,"tmp44");
										HX_STACK_LINE(731)
										int tmp45 = (int(tmp43) | int(tmp44));		HX_STACK_VAR(tmp45,"tmp45");
										HX_STACK_LINE(731)
										destPixel = tmp45;
									}
									;break;
									case (int)0: {
										HX_STACK_LINE(731)
										int tmp28 = ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + destPosition));		HX_STACK_VAR(tmp28,"tmp28");
										HX_STACK_LINE(731)
										Dynamic tmp29 = (int(tmp28) & int((int)255));		HX_STACK_VAR(tmp29,"tmp29");
										HX_STACK_LINE(731)
										int r = tmp29;		HX_STACK_VAR(r,"r");
										HX_STACK_LINE(731)
										int tmp30 = ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)1))));		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(731)
										Dynamic tmp31 = (int(tmp30) & int((int)255));		HX_STACK_VAR(tmp31,"tmp31");
										HX_STACK_LINE(731)
										int g = tmp31;		HX_STACK_VAR(g,"g");
										HX_STACK_LINE(731)
										int tmp32 = ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)2))));		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(731)
										Dynamic tmp33 = (int(tmp32) & int((int)255));		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(731)
										int b = tmp33;		HX_STACK_VAR(b,"b");
										HX_STACK_LINE(731)
										int tmp34 = ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)3))));		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(731)
										Dynamic tmp35 = (int(tmp34) & int((int)255));		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(731)
										int a = tmp35;		HX_STACK_VAR(a,"a");
										HX_STACK_LINE(731)
										int tmp36 = (int(r) & int((int)255));		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(731)
										int tmp37 = (int(tmp36) << int((int)24));		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(731)
										int tmp38 = (int(g) & int((int)255));		HX_STACK_VAR(tmp38,"tmp38");
										HX_STACK_LINE(731)
										int tmp39 = (int(tmp38) << int((int)16));		HX_STACK_VAR(tmp39,"tmp39");
										HX_STACK_LINE(731)
										int tmp40 = (int(tmp37) | int(tmp39));		HX_STACK_VAR(tmp40,"tmp40");
										HX_STACK_LINE(731)
										int tmp41 = (int(b) & int((int)255));		HX_STACK_VAR(tmp41,"tmp41");
										HX_STACK_LINE(731)
										int tmp42 = (int(tmp41) << int((int)8));		HX_STACK_VAR(tmp42,"tmp42");
										HX_STACK_LINE(731)
										int tmp43 = (int(tmp40) | int(tmp42));		HX_STACK_VAR(tmp43,"tmp43");
										HX_STACK_LINE(731)
										int tmp44 = (int(a) & int((int)255));		HX_STACK_VAR(tmp44,"tmp44");
										HX_STACK_LINE(731)
										int tmp45 = (int(tmp43) | int(tmp44));		HX_STACK_VAR(tmp45,"tmp45");
										HX_STACK_LINE(731)
										destPixel = tmp45;
									}
									;break;
									case (int)1: {
										HX_STACK_LINE(731)
										int tmp28 = ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)1))));		HX_STACK_VAR(tmp28,"tmp28");
										HX_STACK_LINE(731)
										Dynamic tmp29 = (int(tmp28) & int((int)255));		HX_STACK_VAR(tmp29,"tmp29");
										HX_STACK_LINE(731)
										int r = tmp29;		HX_STACK_VAR(r,"r");
										HX_STACK_LINE(731)
										int tmp30 = ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)2))));		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(731)
										Dynamic tmp31 = (int(tmp30) & int((int)255));		HX_STACK_VAR(tmp31,"tmp31");
										HX_STACK_LINE(731)
										int g = tmp31;		HX_STACK_VAR(g,"g");
										HX_STACK_LINE(731)
										int tmp32 = ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)3))));		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(731)
										Dynamic tmp33 = (int(tmp32) & int((int)255));		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(731)
										int b = tmp33;		HX_STACK_VAR(b,"b");
										HX_STACK_LINE(731)
										int tmp34 = ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + destPosition));		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(731)
										Dynamic tmp35 = (int(tmp34) & int((int)255));		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(731)
										int a = tmp35;		HX_STACK_VAR(a,"a");
										HX_STACK_LINE(731)
										int tmp36 = (int(r) & int((int)255));		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(731)
										int tmp37 = (int(tmp36) << int((int)24));		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(731)
										int tmp38 = (int(g) & int((int)255));		HX_STACK_VAR(tmp38,"tmp38");
										HX_STACK_LINE(731)
										int tmp39 = (int(tmp38) << int((int)16));		HX_STACK_VAR(tmp39,"tmp39");
										HX_STACK_LINE(731)
										int tmp40 = (int(tmp37) | int(tmp39));		HX_STACK_VAR(tmp40,"tmp40");
										HX_STACK_LINE(731)
										int tmp41 = (int(b) & int((int)255));		HX_STACK_VAR(tmp41,"tmp41");
										HX_STACK_LINE(731)
										int tmp42 = (int(tmp41) << int((int)8));		HX_STACK_VAR(tmp42,"tmp42");
										HX_STACK_LINE(731)
										int tmp43 = (int(tmp40) | int(tmp42));		HX_STACK_VAR(tmp43,"tmp43");
										HX_STACK_LINE(731)
										int tmp44 = (int(a) & int((int)255));		HX_STACK_VAR(tmp44,"tmp44");
										HX_STACK_LINE(731)
										int tmp45 = (int(tmp43) | int(tmp44));		HX_STACK_VAR(tmp45,"tmp45");
										HX_STACK_LINE(731)
										destPixel = tmp45;
									}
									;break;
								}
								HX_STACK_LINE(731)
								bool tmp28 = destPremultiplied;		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(731)
								if ((tmp28)){
									HX_STACK_LINE(731)
									int tmp29 = (int(destPixel) & int((int)255));		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(731)
									bool tmp30 = (tmp29 != (int)0);		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(731)
									bool tmp31;		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(731)
									if ((tmp30)){
										HX_STACK_LINE(731)
										int tmp32 = (int(destPixel) & int((int)255));		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(731)
										int tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(731)
										tmp31 = (tmp33 != (int)255);
									}
									else{
										HX_STACK_LINE(731)
										tmp31 = false;
									}
									HX_STACK_LINE(731)
									if ((tmp31)){
										HX_STACK_LINE(731)
										int tmp32 = (int(destPixel) & int((int)255));		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(731)
										Float tmp33 = (Float(((Float)255.0)) / Float(tmp32));		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(731)
										::lime::math::color::_RGBA::RGBA_Impl__obj::unmult = tmp33;
										HX_STACK_LINE(731)
										{
											HX_STACK_LINE(731)
											Dynamic tmp34;		HX_STACK_VAR(tmp34,"tmp34");
											HX_STACK_LINE(731)
											{
												HX_STACK_LINE(731)
												::lime::utils::ArrayBufferView tmp35 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp35,"tmp35");
												HX_STACK_LINE(731)
												::lime::utils::ArrayBufferView this1 = tmp35;		HX_STACK_VAR(this1,"this1");
												HX_STACK_LINE(731)
												int tmp36 = (int(destPixel) >> int((int)24));		HX_STACK_VAR(tmp36,"tmp36");
												HX_STACK_LINE(731)
												int tmp37 = (int(tmp36) & int((int)255));		HX_STACK_VAR(tmp37,"tmp37");
												HX_STACK_LINE(731)
												Float tmp38 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;		HX_STACK_VAR(tmp38,"tmp38");
												HX_STACK_LINE(731)
												Float tmp39 = (tmp37 * tmp38);		HX_STACK_VAR(tmp39,"tmp39");
												HX_STACK_LINE(731)
												int tmp40 = ::Math_obj::round(tmp39);		HX_STACK_VAR(tmp40,"tmp40");
												HX_STACK_LINE(731)
												int idx = tmp40;		HX_STACK_VAR(idx,"idx");
												HX_STACK_LINE(731)
												int tmp41 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp41,"tmp41");
												HX_STACK_LINE(731)
												tmp34 = (int(tmp41) & int((int)255));
											}
											HX_STACK_LINE(731)
											int r = tmp34;		HX_STACK_VAR(r,"r");
											HX_STACK_LINE(731)
											Dynamic tmp35;		HX_STACK_VAR(tmp35,"tmp35");
											HX_STACK_LINE(731)
											{
												HX_STACK_LINE(731)
												::lime::utils::ArrayBufferView tmp36 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp36,"tmp36");
												HX_STACK_LINE(731)
												::lime::utils::ArrayBufferView this1 = tmp36;		HX_STACK_VAR(this1,"this1");
												HX_STACK_LINE(731)
												int tmp37 = (int(destPixel) >> int((int)16));		HX_STACK_VAR(tmp37,"tmp37");
												HX_STACK_LINE(731)
												int tmp38 = (int(tmp37) & int((int)255));		HX_STACK_VAR(tmp38,"tmp38");
												HX_STACK_LINE(731)
												Float tmp39 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;		HX_STACK_VAR(tmp39,"tmp39");
												HX_STACK_LINE(731)
												Float tmp40 = (tmp38 * tmp39);		HX_STACK_VAR(tmp40,"tmp40");
												HX_STACK_LINE(731)
												int tmp41 = ::Math_obj::round(tmp40);		HX_STACK_VAR(tmp41,"tmp41");
												HX_STACK_LINE(731)
												int idx = tmp41;		HX_STACK_VAR(idx,"idx");
												HX_STACK_LINE(731)
												int tmp42 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp42,"tmp42");
												HX_STACK_LINE(731)
												tmp35 = (int(tmp42) & int((int)255));
											}
											HX_STACK_LINE(731)
											int g = tmp35;		HX_STACK_VAR(g,"g");
											HX_STACK_LINE(731)
											Dynamic tmp36;		HX_STACK_VAR(tmp36,"tmp36");
											HX_STACK_LINE(731)
											{
												HX_STACK_LINE(731)
												::lime::utils::ArrayBufferView tmp37 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp37,"tmp37");
												HX_STACK_LINE(731)
												::lime::utils::ArrayBufferView this1 = tmp37;		HX_STACK_VAR(this1,"this1");
												HX_STACK_LINE(731)
												int tmp38 = (int(destPixel) >> int((int)8));		HX_STACK_VAR(tmp38,"tmp38");
												HX_STACK_LINE(731)
												int tmp39 = (int(tmp38) & int((int)255));		HX_STACK_VAR(tmp39,"tmp39");
												HX_STACK_LINE(731)
												Float tmp40 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;		HX_STACK_VAR(tmp40,"tmp40");
												HX_STACK_LINE(731)
												Float tmp41 = (tmp39 * tmp40);		HX_STACK_VAR(tmp41,"tmp41");
												HX_STACK_LINE(731)
												int tmp42 = ::Math_obj::round(tmp41);		HX_STACK_VAR(tmp42,"tmp42");
												HX_STACK_LINE(731)
												int idx = tmp42;		HX_STACK_VAR(idx,"idx");
												HX_STACK_LINE(731)
												int tmp43 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp43,"tmp43");
												HX_STACK_LINE(731)
												tmp36 = (int(tmp43) & int((int)255));
											}
											HX_STACK_LINE(731)
											int b = tmp36;		HX_STACK_VAR(b,"b");
											HX_STACK_LINE(731)
											int tmp37 = (int(r) & int((int)255));		HX_STACK_VAR(tmp37,"tmp37");
											HX_STACK_LINE(731)
											int tmp38 = (int(tmp37) << int((int)24));		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(731)
											int tmp39 = (int(g) & int((int)255));		HX_STACK_VAR(tmp39,"tmp39");
											HX_STACK_LINE(731)
											int tmp40 = (int(tmp39) << int((int)16));		HX_STACK_VAR(tmp40,"tmp40");
											HX_STACK_LINE(731)
											int tmp41 = (int(tmp38) | int(tmp40));		HX_STACK_VAR(tmp41,"tmp41");
											HX_STACK_LINE(731)
											int tmp42 = (int(b) & int((int)255));		HX_STACK_VAR(tmp42,"tmp42");
											HX_STACK_LINE(731)
											int tmp43 = (int(tmp42) << int((int)8));		HX_STACK_VAR(tmp43,"tmp43");
											HX_STACK_LINE(731)
											int tmp44 = (int(tmp41) | int(tmp43));		HX_STACK_VAR(tmp44,"tmp44");
											HX_STACK_LINE(731)
											int tmp45 = (int(destPixel) & int((int)255));		HX_STACK_VAR(tmp45,"tmp45");
											HX_STACK_LINE(731)
											int tmp46 = (int(tmp45) & int((int)255));		HX_STACK_VAR(tmp46,"tmp46");
											HX_STACK_LINE(731)
											int tmp47 = (int(tmp44) | int(tmp46));		HX_STACK_VAR(tmp47,"tmp47");
											HX_STACK_LINE(731)
											destPixel = tmp47;
										}
									}
								}
							}
							HX_STACK_LINE(733)
							{
								HX_STACK_LINE(733)
								int tmp27 = (int(sourcePixel) >> int((int)24));		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(733)
								int tmp28 = (int(tmp27) & int((int)255));		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(733)
								int tmp29 = redMultiplier;		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(733)
								int tmp30 = (tmp28 * tmp29);		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(733)
								int tmp31 = (int(destPixel) >> int((int)24));		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(733)
								int tmp32 = (int(tmp31) & int((int)255));		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(733)
								int tmp33 = ((int)256 - redMultiplier);		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(733)
								int tmp34 = (tmp32 * tmp33);		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(733)
								int tmp35 = (tmp30 + tmp34);		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(733)
								Float tmp36 = (Float(tmp35) / Float((int)256));		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(733)
								int tmp37 = ::Std_obj::_int(tmp36);		HX_STACK_VAR(tmp37,"tmp37");
								HX_STACK_LINE(733)
								int value = tmp37;		HX_STACK_VAR(value,"value");
								HX_STACK_LINE(733)
								{
									HX_STACK_LINE(733)
									int tmp38 = (int(value) & int((int)255));		HX_STACK_VAR(tmp38,"tmp38");
									HX_STACK_LINE(733)
									int tmp39 = (int(tmp38) << int((int)24));		HX_STACK_VAR(tmp39,"tmp39");
									HX_STACK_LINE(733)
									int tmp40 = (int(destPixel) >> int((int)16));		HX_STACK_VAR(tmp40,"tmp40");
									HX_STACK_LINE(733)
									int tmp41 = (int(tmp40) & int((int)255));		HX_STACK_VAR(tmp41,"tmp41");
									HX_STACK_LINE(733)
									int tmp42 = (int(tmp41) & int((int)255));		HX_STACK_VAR(tmp42,"tmp42");
									HX_STACK_LINE(733)
									int tmp43 = (int(tmp42) << int((int)16));		HX_STACK_VAR(tmp43,"tmp43");
									HX_STACK_LINE(733)
									int tmp44 = (int(tmp39) | int(tmp43));		HX_STACK_VAR(tmp44,"tmp44");
									HX_STACK_LINE(733)
									int tmp45 = (int(destPixel) >> int((int)8));		HX_STACK_VAR(tmp45,"tmp45");
									HX_STACK_LINE(733)
									int tmp46 = (int(tmp45) & int((int)255));		HX_STACK_VAR(tmp46,"tmp46");
									HX_STACK_LINE(733)
									int tmp47 = (int(tmp46) & int((int)255));		HX_STACK_VAR(tmp47,"tmp47");
									HX_STACK_LINE(733)
									int tmp48 = (int(tmp47) << int((int)8));		HX_STACK_VAR(tmp48,"tmp48");
									HX_STACK_LINE(733)
									int tmp49 = (int(tmp44) | int(tmp48));		HX_STACK_VAR(tmp49,"tmp49");
									HX_STACK_LINE(733)
									int tmp50 = (int(destPixel) & int((int)255));		HX_STACK_VAR(tmp50,"tmp50");
									HX_STACK_LINE(733)
									int tmp51 = (int(tmp50) & int((int)255));		HX_STACK_VAR(tmp51,"tmp51");
									HX_STACK_LINE(733)
									int tmp52 = (int(tmp49) | int(tmp51));		HX_STACK_VAR(tmp52,"tmp52");
									HX_STACK_LINE(733)
									destPixel = tmp52;
								}
								HX_STACK_LINE(733)
								value;
							}
							HX_STACK_LINE(734)
							{
								HX_STACK_LINE(734)
								int tmp27 = (int(sourcePixel) >> int((int)16));		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(734)
								int tmp28 = (int(tmp27) & int((int)255));		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(734)
								int tmp29 = greenMultiplier;		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(734)
								int tmp30 = (tmp28 * tmp29);		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(734)
								int tmp31 = (int(destPixel) >> int((int)16));		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(734)
								int tmp32 = (int(tmp31) & int((int)255));		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(734)
								int tmp33 = ((int)256 - greenMultiplier);		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(734)
								int tmp34 = (tmp32 * tmp33);		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(734)
								int tmp35 = (tmp30 + tmp34);		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(734)
								Float tmp36 = (Float(tmp35) / Float((int)256));		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(734)
								int tmp37 = ::Std_obj::_int(tmp36);		HX_STACK_VAR(tmp37,"tmp37");
								HX_STACK_LINE(734)
								int value = tmp37;		HX_STACK_VAR(value,"value");
								HX_STACK_LINE(734)
								{
									HX_STACK_LINE(734)
									int tmp38 = (int(destPixel) >> int((int)24));		HX_STACK_VAR(tmp38,"tmp38");
									HX_STACK_LINE(734)
									int tmp39 = (int(tmp38) & int((int)255));		HX_STACK_VAR(tmp39,"tmp39");
									HX_STACK_LINE(734)
									int tmp40 = (int(tmp39) & int((int)255));		HX_STACK_VAR(tmp40,"tmp40");
									HX_STACK_LINE(734)
									int tmp41 = (int(tmp40) << int((int)24));		HX_STACK_VAR(tmp41,"tmp41");
									HX_STACK_LINE(734)
									int tmp42 = (int(value) & int((int)255));		HX_STACK_VAR(tmp42,"tmp42");
									HX_STACK_LINE(734)
									int tmp43 = (int(tmp42) << int((int)16));		HX_STACK_VAR(tmp43,"tmp43");
									HX_STACK_LINE(734)
									int tmp44 = (int(tmp41) | int(tmp43));		HX_STACK_VAR(tmp44,"tmp44");
									HX_STACK_LINE(734)
									int tmp45 = (int(destPixel) >> int((int)8));		HX_STACK_VAR(tmp45,"tmp45");
									HX_STACK_LINE(734)
									int tmp46 = (int(tmp45) & int((int)255));		HX_STACK_VAR(tmp46,"tmp46");
									HX_STACK_LINE(734)
									int tmp47 = (int(tmp46) & int((int)255));		HX_STACK_VAR(tmp47,"tmp47");
									HX_STACK_LINE(734)
									int tmp48 = (int(tmp47) << int((int)8));		HX_STACK_VAR(tmp48,"tmp48");
									HX_STACK_LINE(734)
									int tmp49 = (int(tmp44) | int(tmp48));		HX_STACK_VAR(tmp49,"tmp49");
									HX_STACK_LINE(734)
									int tmp50 = (int(destPixel) & int((int)255));		HX_STACK_VAR(tmp50,"tmp50");
									HX_STACK_LINE(734)
									int tmp51 = (int(tmp50) & int((int)255));		HX_STACK_VAR(tmp51,"tmp51");
									HX_STACK_LINE(734)
									int tmp52 = (int(tmp49) | int(tmp51));		HX_STACK_VAR(tmp52,"tmp52");
									HX_STACK_LINE(734)
									destPixel = tmp52;
								}
								HX_STACK_LINE(734)
								value;
							}
							HX_STACK_LINE(735)
							{
								HX_STACK_LINE(735)
								int tmp27 = (int(sourcePixel) >> int((int)8));		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(735)
								int tmp28 = (int(tmp27) & int((int)255));		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(735)
								int tmp29 = blueMultiplier;		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(735)
								int tmp30 = (tmp28 * tmp29);		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(735)
								int tmp31 = (int(destPixel) >> int((int)8));		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(735)
								int tmp32 = (int(tmp31) & int((int)255));		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(735)
								int tmp33 = ((int)256 - blueMultiplier);		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(735)
								int tmp34 = (tmp32 * tmp33);		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(735)
								int tmp35 = (tmp30 + tmp34);		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(735)
								Float tmp36 = (Float(tmp35) / Float((int)256));		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(735)
								int tmp37 = ::Std_obj::_int(tmp36);		HX_STACK_VAR(tmp37,"tmp37");
								HX_STACK_LINE(735)
								int value = tmp37;		HX_STACK_VAR(value,"value");
								HX_STACK_LINE(735)
								{
									HX_STACK_LINE(735)
									int tmp38 = (int(destPixel) >> int((int)24));		HX_STACK_VAR(tmp38,"tmp38");
									HX_STACK_LINE(735)
									int tmp39 = (int(tmp38) & int((int)255));		HX_STACK_VAR(tmp39,"tmp39");
									HX_STACK_LINE(735)
									int tmp40 = (int(tmp39) & int((int)255));		HX_STACK_VAR(tmp40,"tmp40");
									HX_STACK_LINE(735)
									int tmp41 = (int(tmp40) << int((int)24));		HX_STACK_VAR(tmp41,"tmp41");
									HX_STACK_LINE(735)
									int tmp42 = (int(destPixel) >> int((int)16));		HX_STACK_VAR(tmp42,"tmp42");
									HX_STACK_LINE(735)
									int tmp43 = (int(tmp42) & int((int)255));		HX_STACK_VAR(tmp43,"tmp43");
									HX_STACK_LINE(735)
									int tmp44 = (int(tmp43) & int((int)255));		HX_STACK_VAR(tmp44,"tmp44");
									HX_STACK_LINE(735)
									int tmp45 = (int(tmp44) << int((int)16));		HX_STACK_VAR(tmp45,"tmp45");
									HX_STACK_LINE(735)
									int tmp46 = (int(tmp41) | int(tmp45));		HX_STACK_VAR(tmp46,"tmp46");
									HX_STACK_LINE(735)
									int tmp47 = (int(value) & int((int)255));		HX_STACK_VAR(tmp47,"tmp47");
									HX_STACK_LINE(735)
									int tmp48 = (int(tmp47) << int((int)8));		HX_STACK_VAR(tmp48,"tmp48");
									HX_STACK_LINE(735)
									int tmp49 = (int(tmp46) | int(tmp48));		HX_STACK_VAR(tmp49,"tmp49");
									HX_STACK_LINE(735)
									int tmp50 = (int(destPixel) & int((int)255));		HX_STACK_VAR(tmp50,"tmp50");
									HX_STACK_LINE(735)
									int tmp51 = (int(tmp50) & int((int)255));		HX_STACK_VAR(tmp51,"tmp51");
									HX_STACK_LINE(735)
									int tmp52 = (int(tmp49) | int(tmp51));		HX_STACK_VAR(tmp52,"tmp52");
									HX_STACK_LINE(735)
									destPixel = tmp52;
								}
								HX_STACK_LINE(735)
								value;
							}
							HX_STACK_LINE(736)
							{
								HX_STACK_LINE(736)
								int tmp27 = (int(sourcePixel) & int((int)255));		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(736)
								int tmp28 = alphaMultiplier;		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(736)
								int tmp29 = (tmp27 * tmp28);		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(736)
								int tmp30 = (int(destPixel) & int((int)255));		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(736)
								int tmp31 = ((int)256 - alphaMultiplier);		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(736)
								int tmp32 = (tmp30 * tmp31);		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(736)
								int tmp33 = (tmp29 + tmp32);		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(736)
								Float tmp34 = (Float(tmp33) / Float((int)256));		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(736)
								int tmp35 = ::Std_obj::_int(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(736)
								int value = tmp35;		HX_STACK_VAR(value,"value");
								HX_STACK_LINE(736)
								{
									HX_STACK_LINE(736)
									int tmp36 = (int(destPixel) >> int((int)24));		HX_STACK_VAR(tmp36,"tmp36");
									HX_STACK_LINE(736)
									int tmp37 = (int(tmp36) & int((int)255));		HX_STACK_VAR(tmp37,"tmp37");
									HX_STACK_LINE(736)
									int tmp38 = (int(tmp37) & int((int)255));		HX_STACK_VAR(tmp38,"tmp38");
									HX_STACK_LINE(736)
									int tmp39 = (int(tmp38) << int((int)24));		HX_STACK_VAR(tmp39,"tmp39");
									HX_STACK_LINE(736)
									int tmp40 = (int(destPixel) >> int((int)16));		HX_STACK_VAR(tmp40,"tmp40");
									HX_STACK_LINE(736)
									int tmp41 = (int(tmp40) & int((int)255));		HX_STACK_VAR(tmp41,"tmp41");
									HX_STACK_LINE(736)
									int tmp42 = (int(tmp41) & int((int)255));		HX_STACK_VAR(tmp42,"tmp42");
									HX_STACK_LINE(736)
									int tmp43 = (int(tmp42) << int((int)16));		HX_STACK_VAR(tmp43,"tmp43");
									HX_STACK_LINE(736)
									int tmp44 = (int(tmp39) | int(tmp43));		HX_STACK_VAR(tmp44,"tmp44");
									HX_STACK_LINE(736)
									int tmp45 = (int(destPixel) >> int((int)8));		HX_STACK_VAR(tmp45,"tmp45");
									HX_STACK_LINE(736)
									int tmp46 = (int(tmp45) & int((int)255));		HX_STACK_VAR(tmp46,"tmp46");
									HX_STACK_LINE(736)
									int tmp47 = (int(tmp46) & int((int)255));		HX_STACK_VAR(tmp47,"tmp47");
									HX_STACK_LINE(736)
									int tmp48 = (int(tmp47) << int((int)8));		HX_STACK_VAR(tmp48,"tmp48");
									HX_STACK_LINE(736)
									int tmp49 = (int(tmp44) | int(tmp48));		HX_STACK_VAR(tmp49,"tmp49");
									HX_STACK_LINE(736)
									int tmp50 = (int(value) & int((int)255));		HX_STACK_VAR(tmp50,"tmp50");
									HX_STACK_LINE(736)
									int tmp51 = (int(tmp49) | int(tmp50));		HX_STACK_VAR(tmp51,"tmp51");
									HX_STACK_LINE(736)
									destPixel = tmp51;
								}
								HX_STACK_LINE(736)
								value;
							}
							HX_STACK_LINE(738)
							{
								HX_STACK_LINE(738)
								bool tmp27 = destPremultiplied;		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(738)
								if ((tmp27)){
									HX_STACK_LINE(738)
									int tmp28 = (int(destPixel) & int((int)255));		HX_STACK_VAR(tmp28,"tmp28");
									HX_STACK_LINE(738)
									bool tmp29 = (tmp28 == (int)0);		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(738)
									if ((tmp29)){
										HX_STACK_LINE(738)
										bool tmp30 = (destPixel != (int)0);		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(738)
										if ((tmp30)){
											HX_STACK_LINE(738)
											destPixel = (int)0;
										}
									}
									else{
										HX_STACK_LINE(738)
										int tmp30 = (int(destPixel) & int((int)255));		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(738)
										bool tmp31 = (tmp30 != (int)255);		HX_STACK_VAR(tmp31,"tmp31");
										HX_STACK_LINE(738)
										if ((tmp31)){
											HX_STACK_LINE(738)
											Dynamic tmp32;		HX_STACK_VAR(tmp32,"tmp32");
											HX_STACK_LINE(738)
											{
												HX_STACK_LINE(738)
												::lime::utils::ArrayBufferView tmp33 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__alpha16;		HX_STACK_VAR(tmp33,"tmp33");
												HX_STACK_LINE(738)
												::lime::utils::ArrayBufferView this1 = tmp33;		HX_STACK_VAR(this1,"this1");
												HX_STACK_LINE(738)
												tmp32 = ::__hxcpp_memory_get_ui32(this1->buffer->b,(this1->byteOffset + (((int(destPixel) & int((int)255))) * (int)4)));
											}
											HX_STACK_LINE(738)
											::lime::math::color::_RGBA::RGBA_Impl__obj::a16 = tmp32;
											HX_STACK_LINE(738)
											{
												HX_STACK_LINE(738)
												int tmp33 = (int(destPixel) >> int((int)24));		HX_STACK_VAR(tmp33,"tmp33");
												HX_STACK_LINE(738)
												int tmp34 = (int(tmp33) & int((int)255));		HX_STACK_VAR(tmp34,"tmp34");
												HX_STACK_LINE(738)
												int tmp35 = ::lime::math::color::_RGBA::RGBA_Impl__obj::a16;		HX_STACK_VAR(tmp35,"tmp35");
												HX_STACK_LINE(738)
												int tmp36 = (tmp34 * tmp35);		HX_STACK_VAR(tmp36,"tmp36");
												HX_STACK_LINE(738)
												int tmp37 = (int(tmp36) >> int((int)16));		HX_STACK_VAR(tmp37,"tmp37");
												HX_STACK_LINE(738)
												int tmp38 = (int(tmp37) & int((int)255));		HX_STACK_VAR(tmp38,"tmp38");
												HX_STACK_LINE(738)
												int tmp39 = (int(tmp38) << int((int)24));		HX_STACK_VAR(tmp39,"tmp39");
												HX_STACK_LINE(738)
												int tmp40 = (int(destPixel) >> int((int)16));		HX_STACK_VAR(tmp40,"tmp40");
												HX_STACK_LINE(738)
												int tmp41 = (int(tmp40) & int((int)255));		HX_STACK_VAR(tmp41,"tmp41");
												HX_STACK_LINE(738)
												int tmp42 = ::lime::math::color::_RGBA::RGBA_Impl__obj::a16;		HX_STACK_VAR(tmp42,"tmp42");
												HX_STACK_LINE(738)
												int tmp43 = (tmp41 * tmp42);		HX_STACK_VAR(tmp43,"tmp43");
												HX_STACK_LINE(738)
												int tmp44 = (int(tmp43) >> int((int)16));		HX_STACK_VAR(tmp44,"tmp44");
												HX_STACK_LINE(738)
												int tmp45 = (int(tmp44) & int((int)255));		HX_STACK_VAR(tmp45,"tmp45");
												HX_STACK_LINE(738)
												int tmp46 = (int(tmp45) << int((int)16));		HX_STACK_VAR(tmp46,"tmp46");
												HX_STACK_LINE(738)
												int tmp47 = (int(tmp39) | int(tmp46));		HX_STACK_VAR(tmp47,"tmp47");
												HX_STACK_LINE(738)
												int tmp48 = (int(destPixel) >> int((int)8));		HX_STACK_VAR(tmp48,"tmp48");
												HX_STACK_LINE(738)
												int tmp49 = (int(tmp48) & int((int)255));		HX_STACK_VAR(tmp49,"tmp49");
												HX_STACK_LINE(738)
												int tmp50 = ::lime::math::color::_RGBA::RGBA_Impl__obj::a16;		HX_STACK_VAR(tmp50,"tmp50");
												HX_STACK_LINE(738)
												int tmp51 = (tmp49 * tmp50);		HX_STACK_VAR(tmp51,"tmp51");
												HX_STACK_LINE(738)
												int tmp52 = (int(tmp51) >> int((int)16));		HX_STACK_VAR(tmp52,"tmp52");
												HX_STACK_LINE(738)
												int tmp53 = (int(tmp52) & int((int)255));		HX_STACK_VAR(tmp53,"tmp53");
												HX_STACK_LINE(738)
												int tmp54 = (int(tmp53) << int((int)8));		HX_STACK_VAR(tmp54,"tmp54");
												HX_STACK_LINE(738)
												int tmp55 = (int(tmp47) | int(tmp54));		HX_STACK_VAR(tmp55,"tmp55");
												HX_STACK_LINE(738)
												int tmp56 = (int(destPixel) & int((int)255));		HX_STACK_VAR(tmp56,"tmp56");
												HX_STACK_LINE(738)
												int tmp57 = (int(tmp56) & int((int)255));		HX_STACK_VAR(tmp57,"tmp57");
												HX_STACK_LINE(738)
												int tmp58 = (int(tmp55) | int(tmp57));		HX_STACK_VAR(tmp58,"tmp58");
												HX_STACK_LINE(738)
												destPixel = tmp58;
											}
										}
									}
								}
								HX_STACK_LINE(738)
								int tmp28 = destFormat;		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(738)
								switch( (int)(tmp28)){
									case (int)2: {
										HX_STACK_LINE(738)
										{
											HX_STACK_LINE(738)
											int tmp29 = (int(destPixel) >> int((int)8));		HX_STACK_VAR(tmp29,"tmp29");
											HX_STACK_LINE(738)
											int tmp30 = (int(tmp29) & int((int)255));		HX_STACK_VAR(tmp30,"tmp30");
											HX_STACK_LINE(738)
											int val = tmp30;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(738)
											::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + destPosition),val);
											HX_STACK_LINE(738)
											val;
										}
										HX_STACK_LINE(738)
										{
											HX_STACK_LINE(738)
											int tmp29 = (int(destPixel) >> int((int)16));		HX_STACK_VAR(tmp29,"tmp29");
											HX_STACK_LINE(738)
											int tmp30 = (int(tmp29) & int((int)255));		HX_STACK_VAR(tmp30,"tmp30");
											HX_STACK_LINE(738)
											int val = tmp30;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(738)
											::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)1))),val);
											HX_STACK_LINE(738)
											val;
										}
										HX_STACK_LINE(738)
										{
											HX_STACK_LINE(738)
											int tmp29 = (int(destPixel) >> int((int)24));		HX_STACK_VAR(tmp29,"tmp29");
											HX_STACK_LINE(738)
											int tmp30 = (int(tmp29) & int((int)255));		HX_STACK_VAR(tmp30,"tmp30");
											HX_STACK_LINE(738)
											int val = tmp30;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(738)
											::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)2))),val);
											HX_STACK_LINE(738)
											val;
										}
										HX_STACK_LINE(738)
										{
											HX_STACK_LINE(738)
											int tmp29 = (int(destPixel) & int((int)255));		HX_STACK_VAR(tmp29,"tmp29");
											HX_STACK_LINE(738)
											int val = tmp29;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(738)
											::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)3))),val);
											HX_STACK_LINE(738)
											val;
										}
									}
									;break;
									case (int)0: {
										HX_STACK_LINE(738)
										{
											HX_STACK_LINE(738)
											int tmp29 = (int(destPixel) >> int((int)24));		HX_STACK_VAR(tmp29,"tmp29");
											HX_STACK_LINE(738)
											int tmp30 = (int(tmp29) & int((int)255));		HX_STACK_VAR(tmp30,"tmp30");
											HX_STACK_LINE(738)
											int val = tmp30;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(738)
											::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + destPosition),val);
											HX_STACK_LINE(738)
											val;
										}
										HX_STACK_LINE(738)
										{
											HX_STACK_LINE(738)
											int tmp29 = (int(destPixel) >> int((int)16));		HX_STACK_VAR(tmp29,"tmp29");
											HX_STACK_LINE(738)
											int tmp30 = (int(tmp29) & int((int)255));		HX_STACK_VAR(tmp30,"tmp30");
											HX_STACK_LINE(738)
											int val = tmp30;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(738)
											::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)1))),val);
											HX_STACK_LINE(738)
											val;
										}
										HX_STACK_LINE(738)
										{
											HX_STACK_LINE(738)
											int tmp29 = (int(destPixel) >> int((int)8));		HX_STACK_VAR(tmp29,"tmp29");
											HX_STACK_LINE(738)
											int tmp30 = (int(tmp29) & int((int)255));		HX_STACK_VAR(tmp30,"tmp30");
											HX_STACK_LINE(738)
											int val = tmp30;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(738)
											::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)2))),val);
											HX_STACK_LINE(738)
											val;
										}
										HX_STACK_LINE(738)
										{
											HX_STACK_LINE(738)
											int tmp29 = (int(destPixel) & int((int)255));		HX_STACK_VAR(tmp29,"tmp29");
											HX_STACK_LINE(738)
											int val = tmp29;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(738)
											::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)3))),val);
											HX_STACK_LINE(738)
											val;
										}
									}
									;break;
									case (int)1: {
										HX_STACK_LINE(738)
										{
											HX_STACK_LINE(738)
											int tmp29 = (int(destPixel) & int((int)255));		HX_STACK_VAR(tmp29,"tmp29");
											HX_STACK_LINE(738)
											int val = tmp29;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(738)
											::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + destPosition),val);
											HX_STACK_LINE(738)
											val;
										}
										HX_STACK_LINE(738)
										{
											HX_STACK_LINE(738)
											int tmp29 = (int(destPixel) >> int((int)24));		HX_STACK_VAR(tmp29,"tmp29");
											HX_STACK_LINE(738)
											int tmp30 = (int(tmp29) & int((int)255));		HX_STACK_VAR(tmp30,"tmp30");
											HX_STACK_LINE(738)
											int val = tmp30;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(738)
											::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)1))),val);
											HX_STACK_LINE(738)
											val;
										}
										HX_STACK_LINE(738)
										{
											HX_STACK_LINE(738)
											int tmp29 = (int(destPixel) >> int((int)16));		HX_STACK_VAR(tmp29,"tmp29");
											HX_STACK_LINE(738)
											int tmp30 = (int(tmp29) & int((int)255));		HX_STACK_VAR(tmp30,"tmp30");
											HX_STACK_LINE(738)
											int val = tmp30;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(738)
											::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)2))),val);
											HX_STACK_LINE(738)
											val;
										}
										HX_STACK_LINE(738)
										{
											HX_STACK_LINE(738)
											int tmp29 = (int(destPixel) >> int((int)8));		HX_STACK_VAR(tmp29,"tmp29");
											HX_STACK_LINE(738)
											int tmp30 = (int(tmp29) & int((int)255));		HX_STACK_VAR(tmp30,"tmp30");
											HX_STACK_LINE(738)
											int val = tmp30;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(738)
											::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)3))),val);
											HX_STACK_LINE(738)
											val;
										}
									}
									;break;
								}
							}
							HX_STACK_LINE(740)
							hx::AddEq(sourcePosition,(int)4);
							HX_STACK_LINE(741)
							hx::AddEq(destPosition,(int)4);
						}
					}
				}
			}
		}
		HX_STACK_LINE(749)
		image->dirty = true;
		HX_STACK_LINE(750)
		(image->version)++;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC8(ImageDataUtil_obj,merge,(void))

Void ImageDataUtil_obj::multiplyAlpha( ::lime::graphics::Image image){
{
		HX_STACK_FRAME("lime.graphics.utils.ImageDataUtil","multiplyAlpha",0xb898c02c,"lime.graphics.utils.ImageDataUtil.multiplyAlpha","lime/graphics/utils/ImageDataUtil.hx",755,0x494d921f)
		HX_STACK_ARG(image,"image")
		HX_STACK_LINE(757)
		::lime::utils::ArrayBufferView tmp = image->buffer->data;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(757)
		::lime::utils::ArrayBufferView data = tmp;		HX_STACK_VAR(data,"data");
		HX_STACK_LINE(758)
		bool tmp1 = (data == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(758)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(758)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(758)
		if ((tmp2)){
			HX_STACK_LINE(758)
			bool tmp4 = image->buffer->transparent;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(758)
			bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(758)
			bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(758)
			tmp3 = !(tmp6);
		}
		else{
			HX_STACK_LINE(758)
			tmp3 = true;
		}
		HX_STACK_LINE(758)
		if ((tmp3)){
			HX_STACK_LINE(758)
			return null();
		}
		HX_STACK_LINE(761)
		bool tmp4 = ::lime::_system::CFFI_obj::enabled;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(761)
		if ((tmp4)){
			HX_STACK_LINE(761)
			::lime::graphics::utils::ImageDataUtil_obj::cffi_lime_image_data_util_multiply_alpha.call(hx::DynamicPtr(image));
		}
		else{
			HX_STACK_LINE(765)
			int tmp5 = image->buffer->format;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(765)
			int format = tmp5;		HX_STACK_VAR(format,"format");
			HX_STACK_LINE(766)
			int tmp6 = data->length;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(766)
			Float tmp7 = (Float(tmp6) / Float((int)4));		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(766)
			int tmp8 = ::Std_obj::_int(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(766)
			int length = tmp8;		HX_STACK_VAR(length,"length");
			HX_STACK_LINE(767)
			int pixel;		HX_STACK_VAR(pixel,"pixel");
			HX_STACK_LINE(769)
			{
				HX_STACK_LINE(769)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(769)
				while((true)){
					HX_STACK_LINE(769)
					bool tmp9 = (_g < length);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(769)
					bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(769)
					if ((tmp10)){
						HX_STACK_LINE(769)
						break;
					}
					HX_STACK_LINE(769)
					int tmp11 = (_g)++;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(769)
					int i = tmp11;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(771)
					{
						HX_STACK_LINE(771)
						int tmp12 = (i * (int)4);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(771)
						int offset = tmp12;		HX_STACK_VAR(offset,"offset");
						HX_STACK_LINE(771)
						int tmp13 = format;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(771)
						switch( (int)(tmp13)){
							case (int)2: {
								HX_STACK_LINE(771)
								int tmp14 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)2))));		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(771)
								Dynamic tmp15 = (int(tmp14) & int((int)255));		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(771)
								int r = tmp15;		HX_STACK_VAR(r,"r");
								HX_STACK_LINE(771)
								int tmp16 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)1))));		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(771)
								Dynamic tmp17 = (int(tmp16) & int((int)255));		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(771)
								int g = tmp17;		HX_STACK_VAR(g,"g");
								HX_STACK_LINE(771)
								int tmp18 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + offset));		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(771)
								Dynamic tmp19 = (int(tmp18) & int((int)255));		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(771)
								int b = tmp19;		HX_STACK_VAR(b,"b");
								HX_STACK_LINE(771)
								int tmp20 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)3))));		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(771)
								Dynamic tmp21 = (int(tmp20) & int((int)255));		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(771)
								int a = tmp21;		HX_STACK_VAR(a,"a");
								HX_STACK_LINE(771)
								int tmp22 = (int(r) & int((int)255));		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(771)
								int tmp23 = (int(tmp22) << int((int)24));		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(771)
								int tmp24 = (int(g) & int((int)255));		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(771)
								int tmp25 = (int(tmp24) << int((int)16));		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(771)
								int tmp26 = (int(tmp23) | int(tmp25));		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(771)
								int tmp27 = (int(b) & int((int)255));		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(771)
								int tmp28 = (int(tmp27) << int((int)8));		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(771)
								int tmp29 = (int(tmp26) | int(tmp28));		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(771)
								int tmp30 = (int(a) & int((int)255));		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(771)
								int tmp31 = (int(tmp29) | int(tmp30));		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(771)
								pixel = tmp31;
							}
							;break;
							case (int)0: {
								HX_STACK_LINE(771)
								int tmp14 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + offset));		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(771)
								Dynamic tmp15 = (int(tmp14) & int((int)255));		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(771)
								int r = tmp15;		HX_STACK_VAR(r,"r");
								HX_STACK_LINE(771)
								int tmp16 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)1))));		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(771)
								Dynamic tmp17 = (int(tmp16) & int((int)255));		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(771)
								int g = tmp17;		HX_STACK_VAR(g,"g");
								HX_STACK_LINE(771)
								int tmp18 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)2))));		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(771)
								Dynamic tmp19 = (int(tmp18) & int((int)255));		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(771)
								int b = tmp19;		HX_STACK_VAR(b,"b");
								HX_STACK_LINE(771)
								int tmp20 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)3))));		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(771)
								Dynamic tmp21 = (int(tmp20) & int((int)255));		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(771)
								int a = tmp21;		HX_STACK_VAR(a,"a");
								HX_STACK_LINE(771)
								int tmp22 = (int(r) & int((int)255));		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(771)
								int tmp23 = (int(tmp22) << int((int)24));		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(771)
								int tmp24 = (int(g) & int((int)255));		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(771)
								int tmp25 = (int(tmp24) << int((int)16));		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(771)
								int tmp26 = (int(tmp23) | int(tmp25));		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(771)
								int tmp27 = (int(b) & int((int)255));		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(771)
								int tmp28 = (int(tmp27) << int((int)8));		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(771)
								int tmp29 = (int(tmp26) | int(tmp28));		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(771)
								int tmp30 = (int(a) & int((int)255));		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(771)
								int tmp31 = (int(tmp29) | int(tmp30));		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(771)
								pixel = tmp31;
							}
							;break;
							case (int)1: {
								HX_STACK_LINE(771)
								int tmp14 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)1))));		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(771)
								Dynamic tmp15 = (int(tmp14) & int((int)255));		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(771)
								int r = tmp15;		HX_STACK_VAR(r,"r");
								HX_STACK_LINE(771)
								int tmp16 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)2))));		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(771)
								Dynamic tmp17 = (int(tmp16) & int((int)255));		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(771)
								int g = tmp17;		HX_STACK_VAR(g,"g");
								HX_STACK_LINE(771)
								int tmp18 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)3))));		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(771)
								Dynamic tmp19 = (int(tmp18) & int((int)255));		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(771)
								int b = tmp19;		HX_STACK_VAR(b,"b");
								HX_STACK_LINE(771)
								int tmp20 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + offset));		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(771)
								Dynamic tmp21 = (int(tmp20) & int((int)255));		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(771)
								int a = tmp21;		HX_STACK_VAR(a,"a");
								HX_STACK_LINE(771)
								int tmp22 = (int(r) & int((int)255));		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(771)
								int tmp23 = (int(tmp22) << int((int)24));		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(771)
								int tmp24 = (int(g) & int((int)255));		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(771)
								int tmp25 = (int(tmp24) << int((int)16));		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(771)
								int tmp26 = (int(tmp23) | int(tmp25));		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(771)
								int tmp27 = (int(b) & int((int)255));		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(771)
								int tmp28 = (int(tmp27) << int((int)8));		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(771)
								int tmp29 = (int(tmp26) | int(tmp28));		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(771)
								int tmp30 = (int(a) & int((int)255));		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(771)
								int tmp31 = (int(tmp29) | int(tmp30));		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(771)
								pixel = tmp31;
							}
							;break;
						}
						HX_STACK_LINE(771)
						{
						}
					}
					HX_STACK_LINE(772)
					{
						HX_STACK_LINE(772)
						int tmp12 = (i * (int)4);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(772)
						int offset = tmp12;		HX_STACK_VAR(offset,"offset");
						HX_STACK_LINE(772)
						{
							HX_STACK_LINE(772)
							int tmp13 = (int(pixel) & int((int)255));		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(772)
							bool tmp14 = (tmp13 == (int)0);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(772)
							if ((tmp14)){
								HX_STACK_LINE(772)
								bool tmp15 = (pixel != (int)0);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(772)
								if ((tmp15)){
									HX_STACK_LINE(772)
									pixel = (int)0;
								}
							}
							else{
								HX_STACK_LINE(772)
								int tmp15 = (int(pixel) & int((int)255));		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(772)
								bool tmp16 = (tmp15 != (int)255);		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(772)
								if ((tmp16)){
									HX_STACK_LINE(772)
									Dynamic tmp17;		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(772)
									{
										HX_STACK_LINE(772)
										::lime::utils::ArrayBufferView tmp18 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__alpha16;		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(772)
										::lime::utils::ArrayBufferView this1 = tmp18;		HX_STACK_VAR(this1,"this1");
										HX_STACK_LINE(772)
										tmp17 = ::__hxcpp_memory_get_ui32(this1->buffer->b,(this1->byteOffset + (((int(pixel) & int((int)255))) * (int)4)));
									}
									HX_STACK_LINE(772)
									::lime::math::color::_RGBA::RGBA_Impl__obj::a16 = tmp17;
									HX_STACK_LINE(772)
									{
										HX_STACK_LINE(772)
										int tmp18 = (int(pixel) >> int((int)24));		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(772)
										int tmp19 = (int(tmp18) & int((int)255));		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(772)
										int tmp20 = ::lime::math::color::_RGBA::RGBA_Impl__obj::a16;		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(772)
										int tmp21 = (tmp19 * tmp20);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(772)
										int tmp22 = (int(tmp21) >> int((int)16));		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(772)
										int tmp23 = (int(tmp22) & int((int)255));		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(772)
										int tmp24 = (int(tmp23) << int((int)24));		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(772)
										int tmp25 = (int(pixel) >> int((int)16));		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(772)
										int tmp26 = (int(tmp25) & int((int)255));		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(772)
										int tmp27 = ::lime::math::color::_RGBA::RGBA_Impl__obj::a16;		HX_STACK_VAR(tmp27,"tmp27");
										HX_STACK_LINE(772)
										int tmp28 = (tmp26 * tmp27);		HX_STACK_VAR(tmp28,"tmp28");
										HX_STACK_LINE(772)
										int tmp29 = (int(tmp28) >> int((int)16));		HX_STACK_VAR(tmp29,"tmp29");
										HX_STACK_LINE(772)
										int tmp30 = (int(tmp29) & int((int)255));		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(772)
										int tmp31 = (int(tmp30) << int((int)16));		HX_STACK_VAR(tmp31,"tmp31");
										HX_STACK_LINE(772)
										int tmp32 = (int(tmp24) | int(tmp31));		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(772)
										int tmp33 = (int(pixel) >> int((int)8));		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(772)
										int tmp34 = (int(tmp33) & int((int)255));		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(772)
										int tmp35 = ::lime::math::color::_RGBA::RGBA_Impl__obj::a16;		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(772)
										int tmp36 = (tmp34 * tmp35);		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(772)
										int tmp37 = (int(tmp36) >> int((int)16));		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(772)
										int tmp38 = (int(tmp37) & int((int)255));		HX_STACK_VAR(tmp38,"tmp38");
										HX_STACK_LINE(772)
										int tmp39 = (int(tmp38) << int((int)8));		HX_STACK_VAR(tmp39,"tmp39");
										HX_STACK_LINE(772)
										int tmp40 = (int(tmp32) | int(tmp39));		HX_STACK_VAR(tmp40,"tmp40");
										HX_STACK_LINE(772)
										int tmp41 = (int(pixel) & int((int)255));		HX_STACK_VAR(tmp41,"tmp41");
										HX_STACK_LINE(772)
										int tmp42 = (int(tmp41) & int((int)255));		HX_STACK_VAR(tmp42,"tmp42");
										HX_STACK_LINE(772)
										int tmp43 = (int(tmp40) | int(tmp42));		HX_STACK_VAR(tmp43,"tmp43");
										HX_STACK_LINE(772)
										pixel = tmp43;
									}
								}
							}
						}
						HX_STACK_LINE(772)
						int tmp13 = format;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(772)
						switch( (int)(tmp13)){
							case (int)2: {
								HX_STACK_LINE(772)
								{
									HX_STACK_LINE(772)
									int tmp14 = (int(pixel) >> int((int)8));		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(772)
									int tmp15 = (int(tmp14) & int((int)255));		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(772)
									int val = tmp15;		HX_STACK_VAR(val,"val");
									HX_STACK_LINE(772)
									::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + offset),val);
									HX_STACK_LINE(772)
									val;
								}
								HX_STACK_LINE(772)
								{
									HX_STACK_LINE(772)
									int tmp14 = (int(pixel) >> int((int)16));		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(772)
									int tmp15 = (int(tmp14) & int((int)255));		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(772)
									int val = tmp15;		HX_STACK_VAR(val,"val");
									HX_STACK_LINE(772)
									::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)1))),val);
									HX_STACK_LINE(772)
									val;
								}
								HX_STACK_LINE(772)
								{
									HX_STACK_LINE(772)
									int tmp14 = (int(pixel) >> int((int)24));		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(772)
									int tmp15 = (int(tmp14) & int((int)255));		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(772)
									int val = tmp15;		HX_STACK_VAR(val,"val");
									HX_STACK_LINE(772)
									::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)2))),val);
									HX_STACK_LINE(772)
									val;
								}
								HX_STACK_LINE(772)
								{
									HX_STACK_LINE(772)
									int tmp14 = (int(pixel) & int((int)255));		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(772)
									int val = tmp14;		HX_STACK_VAR(val,"val");
									HX_STACK_LINE(772)
									::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)3))),val);
									HX_STACK_LINE(772)
									val;
								}
							}
							;break;
							case (int)0: {
								HX_STACK_LINE(772)
								{
									HX_STACK_LINE(772)
									int tmp14 = (int(pixel) >> int((int)24));		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(772)
									int tmp15 = (int(tmp14) & int((int)255));		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(772)
									int val = tmp15;		HX_STACK_VAR(val,"val");
									HX_STACK_LINE(772)
									::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + offset),val);
									HX_STACK_LINE(772)
									val;
								}
								HX_STACK_LINE(772)
								{
									HX_STACK_LINE(772)
									int tmp14 = (int(pixel) >> int((int)16));		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(772)
									int tmp15 = (int(tmp14) & int((int)255));		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(772)
									int val = tmp15;		HX_STACK_VAR(val,"val");
									HX_STACK_LINE(772)
									::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)1))),val);
									HX_STACK_LINE(772)
									val;
								}
								HX_STACK_LINE(772)
								{
									HX_STACK_LINE(772)
									int tmp14 = (int(pixel) >> int((int)8));		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(772)
									int tmp15 = (int(tmp14) & int((int)255));		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(772)
									int val = tmp15;		HX_STACK_VAR(val,"val");
									HX_STACK_LINE(772)
									::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)2))),val);
									HX_STACK_LINE(772)
									val;
								}
								HX_STACK_LINE(772)
								{
									HX_STACK_LINE(772)
									int tmp14 = (int(pixel) & int((int)255));		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(772)
									int val = tmp14;		HX_STACK_VAR(val,"val");
									HX_STACK_LINE(772)
									::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)3))),val);
									HX_STACK_LINE(772)
									val;
								}
							}
							;break;
							case (int)1: {
								HX_STACK_LINE(772)
								{
									HX_STACK_LINE(772)
									int tmp14 = (int(pixel) & int((int)255));		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(772)
									int val = tmp14;		HX_STACK_VAR(val,"val");
									HX_STACK_LINE(772)
									::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + offset),val);
									HX_STACK_LINE(772)
									val;
								}
								HX_STACK_LINE(772)
								{
									HX_STACK_LINE(772)
									int tmp14 = (int(pixel) >> int((int)24));		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(772)
									int tmp15 = (int(tmp14) & int((int)255));		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(772)
									int val = tmp15;		HX_STACK_VAR(val,"val");
									HX_STACK_LINE(772)
									::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)1))),val);
									HX_STACK_LINE(772)
									val;
								}
								HX_STACK_LINE(772)
								{
									HX_STACK_LINE(772)
									int tmp14 = (int(pixel) >> int((int)16));		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(772)
									int tmp15 = (int(tmp14) & int((int)255));		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(772)
									int val = tmp15;		HX_STACK_VAR(val,"val");
									HX_STACK_LINE(772)
									::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)2))),val);
									HX_STACK_LINE(772)
									val;
								}
								HX_STACK_LINE(772)
								{
									HX_STACK_LINE(772)
									int tmp14 = (int(pixel) >> int((int)8));		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(772)
									int tmp15 = (int(tmp14) & int((int)255));		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(772)
									int val = tmp15;		HX_STACK_VAR(val,"val");
									HX_STACK_LINE(772)
									::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)3))),val);
									HX_STACK_LINE(772)
									val;
								}
							}
							;break;
						}
					}
				}
			}
		}
		HX_STACK_LINE(778)
		image->buffer->premultiplied = true;
		HX_STACK_LINE(779)
		image->dirty = true;
		HX_STACK_LINE(780)
		(image->version)++;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ImageDataUtil_obj,multiplyAlpha,(void))

Void ImageDataUtil_obj::resize( ::lime::graphics::Image image,int newWidth,int newHeight){
{
		HX_STACK_FRAME("lime.graphics.utils.ImageDataUtil","resize",0x3b9e8e22,"lime.graphics.utils.ImageDataUtil.resize","lime/graphics/utils/ImageDataUtil.hx",785,0x494d921f)
		HX_STACK_ARG(image,"image")
		HX_STACK_ARG(newWidth,"newWidth")
		HX_STACK_ARG(newHeight,"newHeight")
		HX_STACK_LINE(787)
		::lime::graphics::ImageBuffer buffer = image->buffer;		HX_STACK_VAR(buffer,"buffer");
		HX_STACK_LINE(788)
		bool tmp = (buffer->width == newWidth);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(788)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(788)
		if ((tmp)){
			HX_STACK_LINE(788)
			tmp1 = (buffer->height == newHeight);
		}
		else{
			HX_STACK_LINE(788)
			tmp1 = false;
		}
		HX_STACK_LINE(788)
		if ((tmp1)){
			HX_STACK_LINE(788)
			return null();
		}
		HX_STACK_LINE(789)
		::lime::utils::ArrayBufferView tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(789)
		{
			HX_STACK_LINE(789)
			int tmp3 = (newWidth * newHeight);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(789)
			int tmp4 = (tmp3 * (int)4);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(789)
			Dynamic elements = tmp4;		HX_STACK_VAR(elements,"elements");
			HX_STACK_LINE(789)
			::lime::utils::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(789)
			bool tmp5 = (elements != null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(789)
			if ((tmp5)){
				HX_STACK_LINE(789)
				::lime::utils::ArrayBufferView tmp6 = ::lime::utils::ArrayBufferView_obj::__new(elements,(int)4);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(789)
				this1 = tmp6;
			}
			else{
				HX_STACK_LINE(789)
				bool tmp6 = false;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(789)
				if ((tmp6)){
					HX_STACK_LINE(789)
					::lime::utils::ArrayBufferView tmp7;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(789)
					{
						HX_STACK_LINE(789)
						::lime::utils::ArrayBufferView tmp8 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(789)
						::lime::utils::ArrayBufferView _this = tmp8;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(789)
						_this->byteOffset = (int)0;
						HX_STACK_LINE(789)
						int tmp9 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(789)
						_this->length = tmp9;
						HX_STACK_LINE(789)
						int tmp10 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(789)
						_this->byteLength = tmp10;
						HX_STACK_LINE(789)
						::haxe::io::Bytes tmp11;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(789)
						{
							HX_STACK_LINE(789)
							::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
							HX_STACK_LINE(789)
							int tmp12 = _this->byteLength;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(789)
							::haxe::io::Bytes tmp13 = ::haxe::io::Bytes_obj::alloc(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(789)
							this2 = tmp13;
							HX_STACK_LINE(789)
							tmp11 = this2;
						}
						HX_STACK_LINE(789)
						_this->buffer = tmp11;
						HX_STACK_LINE(789)
						_this->copyFromArray(((Array< Float >)(null())),null());
						HX_STACK_LINE(789)
						tmp7 = _this;
					}
					HX_STACK_LINE(789)
					this1 = tmp7;
				}
				else{
					HX_STACK_LINE(789)
					bool tmp7 = false;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(789)
					if ((tmp7)){
						HX_STACK_LINE(789)
						::lime::utils::ArrayBufferView tmp8;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(789)
						{
							HX_STACK_LINE(789)
							::lime::utils::ArrayBufferView tmp9 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(789)
							::lime::utils::ArrayBufferView _this = tmp9;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(789)
							::haxe::io::Bytes tmp10 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(789)
							::haxe::io::Bytes srcData = tmp10;		HX_STACK_VAR(srcData,"srcData");
							HX_STACK_LINE(789)
							int tmp11 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(789)
							int srcLength = tmp11;		HX_STACK_VAR(srcLength,"srcLength");
							HX_STACK_LINE(789)
							int tmp12 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(789)
							int srcByteOffset = tmp12;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
							HX_STACK_LINE(789)
							int tmp13 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(789)
							int srcElementSize = tmp13;		HX_STACK_VAR(srcElementSize,"srcElementSize");
							HX_STACK_LINE(789)
							int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
							HX_STACK_LINE(789)
							int tmp14 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(789)
							int tmp15 = _this->type;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(789)
							bool tmp16 = (tmp14 == tmp15);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(789)
							if ((tmp16)){
								HX_STACK_LINE(789)
								int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
								HX_STACK_LINE(789)
								int tmp17 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(789)
								int cloneLength = tmp17;		HX_STACK_VAR(cloneLength,"cloneLength");
								HX_STACK_LINE(789)
								::haxe::io::Bytes tmp18;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(789)
								{
									HX_STACK_LINE(789)
									::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
									HX_STACK_LINE(789)
									int tmp19 = cloneLength;		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(789)
									::haxe::io::Bytes tmp20 = ::haxe::io::Bytes_obj::alloc(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(789)
									this2 = tmp20;
									HX_STACK_LINE(789)
									tmp18 = this2;
								}
								HX_STACK_LINE(789)
								_this->buffer = tmp18;
								HX_STACK_LINE(789)
								::haxe::io::Bytes tmp19 = srcData;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(789)
								int tmp20 = srcByteOffset;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(789)
								int tmp21 = cloneLength;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(789)
								_this->buffer->blit((int)0,tmp19,tmp20,tmp21);
							}
							else{
								HX_STACK_LINE(789)
								HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
							}
							HX_STACK_LINE(789)
							int tmp17 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(789)
							_this->byteLength = tmp17;
							HX_STACK_LINE(789)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(789)
							_this->length = srcLength;
							HX_STACK_LINE(789)
							tmp8 = _this;
						}
						HX_STACK_LINE(789)
						this1 = tmp8;
					}
					else{
						HX_STACK_LINE(789)
						bool tmp8 = false;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(789)
						if ((tmp8)){
							HX_STACK_LINE(789)
							::lime::utils::ArrayBufferView tmp9;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(789)
							{
								HX_STACK_LINE(789)
								::lime::utils::ArrayBufferView tmp10 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(789)
								::lime::utils::ArrayBufferView _this = tmp10;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(789)
								bool tmp11 = false;		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(789)
								if ((tmp11)){
									HX_STACK_LINE(789)
									HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
								}
								HX_STACK_LINE(789)
								int tmp12 = hx::Mod((int)0,_this->bytesPerElement);		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(789)
								bool tmp13 = (tmp12 != (int)0);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(789)
								if ((tmp13)){
									HX_STACK_LINE(789)
									HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
								}
								HX_STACK_LINE(789)
								int tmp14 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(789)
								int bufferByteLength = tmp14;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
								HX_STACK_LINE(789)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(789)
								int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
								HX_STACK_LINE(789)
								bool tmp15 = true;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(789)
								if ((tmp15)){
									HX_STACK_LINE(789)
									int tmp16 = bufferByteLength;		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(789)
									newByteLength = tmp16;
									HX_STACK_LINE(789)
									int tmp17 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(789)
									bool tmp18 = (tmp17 != (int)0);		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(789)
									if ((tmp18)){
										HX_STACK_LINE(789)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(789)
									bool tmp19 = (newByteLength < (int)0);		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(789)
									if ((tmp19)){
										HX_STACK_LINE(789)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
								}
								else{
									HX_STACK_LINE(789)
									int tmp16 = (null() * _this->bytesPerElement);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(789)
									newByteLength = tmp16;
									HX_STACK_LINE(789)
									int tmp17 = newByteLength;		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(789)
									int newRange = tmp17;		HX_STACK_VAR(newRange,"newRange");
									HX_STACK_LINE(789)
									bool tmp18 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(789)
									if ((tmp18)){
										HX_STACK_LINE(789)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
								}
								HX_STACK_LINE(789)
								_this->buffer = null();
								HX_STACK_LINE(789)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(789)
								_this->byteLength = newByteLength;
								HX_STACK_LINE(789)
								Float tmp16 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(789)
								int tmp17 = ::Std_obj::_int(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(789)
								_this->length = tmp17;
								HX_STACK_LINE(789)
								tmp9 = _this;
							}
							HX_STACK_LINE(789)
							this1 = tmp9;
						}
						else{
							HX_STACK_LINE(789)
							HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for UInt8Array","\x6b","\x44","\xd5","\x85"));
						}
					}
				}
			}
			HX_STACK_LINE(789)
			tmp2 = this1;
		}
		HX_STACK_LINE(789)
		int tmp3 = newWidth;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(789)
		int tmp4 = newHeight;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(789)
		::lime::graphics::ImageBuffer tmp5 = ::lime::graphics::ImageBuffer_obj::__new(tmp2,tmp3,tmp4,null(),null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(789)
		::lime::graphics::ImageBuffer newBuffer = tmp5;		HX_STACK_VAR(newBuffer,"newBuffer");
		HX_STACK_LINE(792)
		bool tmp6 = ::lime::_system::CFFI_obj::enabled;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(792)
		if ((tmp6)){
			HX_STACK_LINE(792)
			::lime::graphics::utils::ImageDataUtil_obj::cffi_lime_image_data_util_resize.call(hx::DynamicPtr(image),hx::DynamicPtr(newBuffer),newWidth,newHeight);
		}
		else{
			HX_STACK_LINE(796)
			int imageWidth = image->width;		HX_STACK_VAR(imageWidth,"imageWidth");
			HX_STACK_LINE(797)
			int imageHeight = image->height;		HX_STACK_VAR(imageHeight,"imageHeight");
			HX_STACK_LINE(799)
			::lime::utils::ArrayBufferView tmp7 = image->get_data();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(799)
			::lime::utils::ArrayBufferView data = tmp7;		HX_STACK_VAR(data,"data");
			HX_STACK_LINE(800)
			::lime::utils::ArrayBufferView newData = newBuffer->data;		HX_STACK_VAR(newData,"newData");
			HX_STACK_LINE(801)
			int sourceIndex;		HX_STACK_VAR(sourceIndex,"sourceIndex");
			HX_STACK_LINE(801)
			int sourceIndexX;		HX_STACK_VAR(sourceIndexX,"sourceIndexX");
			HX_STACK_LINE(801)
			int sourceIndexY;		HX_STACK_VAR(sourceIndexY,"sourceIndexY");
			HX_STACK_LINE(801)
			int sourceIndexXY;		HX_STACK_VAR(sourceIndexXY,"sourceIndexXY");
			HX_STACK_LINE(801)
			int index;		HX_STACK_VAR(index,"index");
			HX_STACK_LINE(802)
			int sourceX;		HX_STACK_VAR(sourceX,"sourceX");
			HX_STACK_LINE(802)
			int sourceY;		HX_STACK_VAR(sourceY,"sourceY");
			HX_STACK_LINE(803)
			Float u;		HX_STACK_VAR(u,"u");
			HX_STACK_LINE(803)
			Float v;		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(803)
			Float uRatio;		HX_STACK_VAR(uRatio,"uRatio");
			HX_STACK_LINE(803)
			Float vRatio;		HX_STACK_VAR(vRatio,"vRatio");
			HX_STACK_LINE(803)
			Float uOpposite;		HX_STACK_VAR(uOpposite,"uOpposite");
			HX_STACK_LINE(803)
			Float vOpposite;		HX_STACK_VAR(vOpposite,"vOpposite");
			HX_STACK_LINE(805)
			{
				HX_STACK_LINE(805)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(805)
				while((true)){
					HX_STACK_LINE(805)
					bool tmp8 = (_g < newHeight);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(805)
					bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(805)
					if ((tmp9)){
						HX_STACK_LINE(805)
						break;
					}
					HX_STACK_LINE(805)
					int tmp10 = (_g)++;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(805)
					int y = tmp10;		HX_STACK_VAR(y,"y");
					HX_STACK_LINE(807)
					{
						HX_STACK_LINE(807)
						int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(807)
						while((true)){
							HX_STACK_LINE(807)
							bool tmp11 = (_g1 < newWidth);		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(807)
							bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(807)
							if ((tmp12)){
								HX_STACK_LINE(807)
								break;
							}
							HX_STACK_LINE(807)
							int tmp13 = (_g1)++;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(807)
							int x = tmp13;		HX_STACK_VAR(x,"x");
							HX_STACK_LINE(811)
							Float tmp14 = (x + ((Float)0.5));		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(811)
							int tmp15 = newWidth;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(811)
							Float tmp16 = (Float(tmp14) / Float(tmp15));		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(811)
							int tmp17 = imageWidth;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(811)
							Float tmp18 = (tmp16 * tmp17);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(811)
							Float tmp19 = (tmp18 - ((Float)0.5));		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(811)
							u = tmp19;
							HX_STACK_LINE(812)
							Float tmp20 = (y + ((Float)0.5));		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(812)
							int tmp21 = newHeight;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(812)
							Float tmp22 = (Float(tmp20) / Float(tmp21));		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(812)
							int tmp23 = imageHeight;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(812)
							Float tmp24 = (tmp22 * tmp23);		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(812)
							Float tmp25 = (tmp24 - ((Float)0.5));		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(812)
							v = tmp25;
							HX_STACK_LINE(814)
							Float tmp26 = u;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(814)
							int tmp27 = ::Std_obj::_int(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(814)
							sourceX = tmp27;
							HX_STACK_LINE(815)
							Float tmp28 = v;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(815)
							int tmp29 = ::Std_obj::_int(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(815)
							sourceY = tmp29;
							HX_STACK_LINE(817)
							int tmp30 = (sourceY * imageWidth);		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(817)
							int tmp31 = sourceX;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(817)
							int tmp32 = (tmp30 + tmp31);		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(817)
							int tmp33 = (tmp32 * (int)4);		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(817)
							sourceIndex = tmp33;
							HX_STACK_LINE(818)
							int tmp34 = sourceX;		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(818)
							int tmp35 = (imageWidth - (int)1);		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(818)
							bool tmp36 = (tmp34 < tmp35);		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(818)
							int tmp37;		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(818)
							if ((tmp36)){
								HX_STACK_LINE(818)
								tmp37 = (sourceIndex + (int)4);
							}
							else{
								HX_STACK_LINE(818)
								tmp37 = sourceIndex;
							}
							HX_STACK_LINE(818)
							sourceIndexX = tmp37;
							HX_STACK_LINE(819)
							int tmp38 = sourceY;		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(819)
							int tmp39 = (imageHeight - (int)1);		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(819)
							bool tmp40 = (tmp38 < tmp39);		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(819)
							int tmp41;		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(819)
							if ((tmp40)){
								HX_STACK_LINE(819)
								int tmp42 = sourceIndex;		HX_STACK_VAR(tmp42,"tmp42");
								HX_STACK_LINE(819)
								int tmp43 = (imageWidth * (int)4);		HX_STACK_VAR(tmp43,"tmp43");
								HX_STACK_LINE(819)
								tmp41 = (tmp42 + tmp43);
							}
							else{
								HX_STACK_LINE(819)
								tmp41 = sourceIndex;
							}
							HX_STACK_LINE(819)
							sourceIndexY = tmp41;
							HX_STACK_LINE(820)
							bool tmp42 = (sourceIndexX != sourceIndex);		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(820)
							int tmp43;		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(820)
							if ((tmp42)){
								HX_STACK_LINE(820)
								tmp43 = (sourceIndexY + (int)4);
							}
							else{
								HX_STACK_LINE(820)
								tmp43 = sourceIndexY;
							}
							HX_STACK_LINE(820)
							sourceIndexXY = tmp43;
							HX_STACK_LINE(822)
							int tmp44 = (y * newWidth);		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(822)
							int tmp45 = x;		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(822)
							int tmp46 = (tmp44 + tmp45);		HX_STACK_VAR(tmp46,"tmp46");
							HX_STACK_LINE(822)
							int tmp47 = (tmp46 * (int)4);		HX_STACK_VAR(tmp47,"tmp47");
							HX_STACK_LINE(822)
							index = tmp47;
							HX_STACK_LINE(824)
							Float tmp48 = (u - sourceX);		HX_STACK_VAR(tmp48,"tmp48");
							HX_STACK_LINE(824)
							uRatio = tmp48;
							HX_STACK_LINE(825)
							Float tmp49 = (v - sourceY);		HX_STACK_VAR(tmp49,"tmp49");
							HX_STACK_LINE(825)
							vRatio = tmp49;
							HX_STACK_LINE(826)
							Float tmp50 = ((int)1 - uRatio);		HX_STACK_VAR(tmp50,"tmp50");
							HX_STACK_LINE(826)
							uOpposite = tmp50;
							HX_STACK_LINE(827)
							Float tmp51 = ((int)1 - vRatio);		HX_STACK_VAR(tmp51,"tmp51");
							HX_STACK_LINE(827)
							vOpposite = tmp51;
							HX_STACK_LINE(829)
							{
								HX_STACK_LINE(829)
								Float tmp52;		HX_STACK_VAR(tmp52,"tmp52");
								HX_STACK_LINE(829)
								{
									HX_STACK_LINE(829)
									int tmp53 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + sourceIndex));		HX_STACK_VAR(tmp53,"tmp53");
									HX_STACK_LINE(829)
									Dynamic tmp54 = (int(tmp53) & int((int)255));		HX_STACK_VAR(tmp54,"tmp54");
									HX_STACK_LINE(829)
									int a = tmp54;		HX_STACK_VAR(a,"a");
									HX_STACK_LINE(829)
									Float tmp55;		HX_STACK_VAR(tmp55,"tmp55");
									HX_STACK_LINE(829)
									{
										HX_STACK_LINE(829)
										int _int = a;		HX_STACK_VAR(_int,"int");
										HX_STACK_LINE(829)
										bool tmp56 = (_int < (int)0);		HX_STACK_VAR(tmp56,"tmp56");
										HX_STACK_LINE(829)
										if ((tmp56)){
											HX_STACK_LINE(829)
											tmp55 = (((Float)4294967296.0) + _int);
										}
										else{
											HX_STACK_LINE(829)
											tmp55 = (_int + ((Float)0.0));
										}
									}
									HX_STACK_LINE(829)
									Float tmp56 = uOpposite;		HX_STACK_VAR(tmp56,"tmp56");
									HX_STACK_LINE(829)
									tmp52 = (tmp55 * tmp56);
								}
								HX_STACK_LINE(829)
								Float tmp53;		HX_STACK_VAR(tmp53,"tmp53");
								HX_STACK_LINE(829)
								{
									HX_STACK_LINE(829)
									int tmp54 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + sourceIndexX));		HX_STACK_VAR(tmp54,"tmp54");
									HX_STACK_LINE(829)
									Dynamic tmp55 = (int(tmp54) & int((int)255));		HX_STACK_VAR(tmp55,"tmp55");
									HX_STACK_LINE(829)
									int a = tmp55;		HX_STACK_VAR(a,"a");
									HX_STACK_LINE(829)
									Float tmp56;		HX_STACK_VAR(tmp56,"tmp56");
									HX_STACK_LINE(829)
									{
										HX_STACK_LINE(829)
										int _int = a;		HX_STACK_VAR(_int,"int");
										HX_STACK_LINE(829)
										bool tmp57 = (_int < (int)0);		HX_STACK_VAR(tmp57,"tmp57");
										HX_STACK_LINE(829)
										if ((tmp57)){
											HX_STACK_LINE(829)
											tmp56 = (((Float)4294967296.0) + _int);
										}
										else{
											HX_STACK_LINE(829)
											tmp56 = (_int + ((Float)0.0));
										}
									}
									HX_STACK_LINE(829)
									Float tmp57 = uRatio;		HX_STACK_VAR(tmp57,"tmp57");
									HX_STACK_LINE(829)
									tmp53 = (tmp56 * tmp57);
								}
								HX_STACK_LINE(829)
								Float tmp54 = (tmp52 + tmp53);		HX_STACK_VAR(tmp54,"tmp54");
								HX_STACK_LINE(829)
								Float tmp55 = vOpposite;		HX_STACK_VAR(tmp55,"tmp55");
								HX_STACK_LINE(829)
								Float tmp56 = (tmp54 * tmp55);		HX_STACK_VAR(tmp56,"tmp56");
								HX_STACK_LINE(829)
								Float tmp57;		HX_STACK_VAR(tmp57,"tmp57");
								HX_STACK_LINE(829)
								{
									HX_STACK_LINE(829)
									int tmp58 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + sourceIndexY));		HX_STACK_VAR(tmp58,"tmp58");
									HX_STACK_LINE(829)
									Dynamic tmp59 = (int(tmp58) & int((int)255));		HX_STACK_VAR(tmp59,"tmp59");
									HX_STACK_LINE(829)
									int a = tmp59;		HX_STACK_VAR(a,"a");
									HX_STACK_LINE(829)
									Float tmp60;		HX_STACK_VAR(tmp60,"tmp60");
									HX_STACK_LINE(829)
									{
										HX_STACK_LINE(829)
										int _int = a;		HX_STACK_VAR(_int,"int");
										HX_STACK_LINE(829)
										bool tmp61 = (_int < (int)0);		HX_STACK_VAR(tmp61,"tmp61");
										HX_STACK_LINE(829)
										if ((tmp61)){
											HX_STACK_LINE(829)
											tmp60 = (((Float)4294967296.0) + _int);
										}
										else{
											HX_STACK_LINE(829)
											tmp60 = (_int + ((Float)0.0));
										}
									}
									HX_STACK_LINE(829)
									Float tmp61 = uOpposite;		HX_STACK_VAR(tmp61,"tmp61");
									HX_STACK_LINE(829)
									tmp57 = (tmp60 * tmp61);
								}
								HX_STACK_LINE(829)
								Float tmp58;		HX_STACK_VAR(tmp58,"tmp58");
								HX_STACK_LINE(829)
								{
									HX_STACK_LINE(829)
									int tmp59 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + sourceIndexXY));		HX_STACK_VAR(tmp59,"tmp59");
									HX_STACK_LINE(829)
									Dynamic tmp60 = (int(tmp59) & int((int)255));		HX_STACK_VAR(tmp60,"tmp60");
									HX_STACK_LINE(829)
									int a = tmp60;		HX_STACK_VAR(a,"a");
									HX_STACK_LINE(829)
									Float tmp61;		HX_STACK_VAR(tmp61,"tmp61");
									HX_STACK_LINE(829)
									{
										HX_STACK_LINE(829)
										int _int = a;		HX_STACK_VAR(_int,"int");
										HX_STACK_LINE(829)
										bool tmp62 = (_int < (int)0);		HX_STACK_VAR(tmp62,"tmp62");
										HX_STACK_LINE(829)
										if ((tmp62)){
											HX_STACK_LINE(829)
											tmp61 = (((Float)4294967296.0) + _int);
										}
										else{
											HX_STACK_LINE(829)
											tmp61 = (_int + ((Float)0.0));
										}
									}
									HX_STACK_LINE(829)
									Float tmp62 = uRatio;		HX_STACK_VAR(tmp62,"tmp62");
									HX_STACK_LINE(829)
									tmp58 = (tmp61 * tmp62);
								}
								HX_STACK_LINE(829)
								Float tmp59 = (tmp57 + tmp58);		HX_STACK_VAR(tmp59,"tmp59");
								HX_STACK_LINE(829)
								Float tmp60 = vRatio;		HX_STACK_VAR(tmp60,"tmp60");
								HX_STACK_LINE(829)
								Float tmp61 = (tmp59 * tmp60);		HX_STACK_VAR(tmp61,"tmp61");
								HX_STACK_LINE(829)
								Float tmp62 = (tmp56 + tmp61);		HX_STACK_VAR(tmp62,"tmp62");
								HX_STACK_LINE(829)
								int tmp63 = ::Std_obj::_int(tmp62);		HX_STACK_VAR(tmp63,"tmp63");
								HX_STACK_LINE(829)
								int val = tmp63;		HX_STACK_VAR(val,"val");
								HX_STACK_LINE(829)
								::__hxcpp_memory_set_byte(newData->buffer->b,(newData->byteOffset + index),val);
								HX_STACK_LINE(829)
								val;
							}
							HX_STACK_LINE(830)
							{
								HX_STACK_LINE(830)
								Float tmp52;		HX_STACK_VAR(tmp52,"tmp52");
								HX_STACK_LINE(830)
								{
									HX_STACK_LINE(830)
									int tmp53 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((sourceIndex + (int)1))));		HX_STACK_VAR(tmp53,"tmp53");
									HX_STACK_LINE(830)
									Dynamic tmp54 = (int(tmp53) & int((int)255));		HX_STACK_VAR(tmp54,"tmp54");
									HX_STACK_LINE(830)
									int a = tmp54;		HX_STACK_VAR(a,"a");
									HX_STACK_LINE(830)
									Float tmp55;		HX_STACK_VAR(tmp55,"tmp55");
									HX_STACK_LINE(830)
									{
										HX_STACK_LINE(830)
										int _int = a;		HX_STACK_VAR(_int,"int");
										HX_STACK_LINE(830)
										bool tmp56 = (_int < (int)0);		HX_STACK_VAR(tmp56,"tmp56");
										HX_STACK_LINE(830)
										if ((tmp56)){
											HX_STACK_LINE(830)
											tmp55 = (((Float)4294967296.0) + _int);
										}
										else{
											HX_STACK_LINE(830)
											tmp55 = (_int + ((Float)0.0));
										}
									}
									HX_STACK_LINE(830)
									Float tmp56 = uOpposite;		HX_STACK_VAR(tmp56,"tmp56");
									HX_STACK_LINE(830)
									tmp52 = (tmp55 * tmp56);
								}
								HX_STACK_LINE(830)
								Float tmp53;		HX_STACK_VAR(tmp53,"tmp53");
								HX_STACK_LINE(830)
								{
									HX_STACK_LINE(830)
									int tmp54 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((sourceIndexX + (int)1))));		HX_STACK_VAR(tmp54,"tmp54");
									HX_STACK_LINE(830)
									Dynamic tmp55 = (int(tmp54) & int((int)255));		HX_STACK_VAR(tmp55,"tmp55");
									HX_STACK_LINE(830)
									int a = tmp55;		HX_STACK_VAR(a,"a");
									HX_STACK_LINE(830)
									Float tmp56;		HX_STACK_VAR(tmp56,"tmp56");
									HX_STACK_LINE(830)
									{
										HX_STACK_LINE(830)
										int _int = a;		HX_STACK_VAR(_int,"int");
										HX_STACK_LINE(830)
										bool tmp57 = (_int < (int)0);		HX_STACK_VAR(tmp57,"tmp57");
										HX_STACK_LINE(830)
										if ((tmp57)){
											HX_STACK_LINE(830)
											tmp56 = (((Float)4294967296.0) + _int);
										}
										else{
											HX_STACK_LINE(830)
											tmp56 = (_int + ((Float)0.0));
										}
									}
									HX_STACK_LINE(830)
									Float tmp57 = uRatio;		HX_STACK_VAR(tmp57,"tmp57");
									HX_STACK_LINE(830)
									tmp53 = (tmp56 * tmp57);
								}
								HX_STACK_LINE(830)
								Float tmp54 = (tmp52 + tmp53);		HX_STACK_VAR(tmp54,"tmp54");
								HX_STACK_LINE(830)
								Float tmp55 = vOpposite;		HX_STACK_VAR(tmp55,"tmp55");
								HX_STACK_LINE(830)
								Float tmp56 = (tmp54 * tmp55);		HX_STACK_VAR(tmp56,"tmp56");
								HX_STACK_LINE(830)
								Float tmp57;		HX_STACK_VAR(tmp57,"tmp57");
								HX_STACK_LINE(830)
								{
									HX_STACK_LINE(830)
									int tmp58 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((sourceIndexY + (int)1))));		HX_STACK_VAR(tmp58,"tmp58");
									HX_STACK_LINE(830)
									Dynamic tmp59 = (int(tmp58) & int((int)255));		HX_STACK_VAR(tmp59,"tmp59");
									HX_STACK_LINE(830)
									int a = tmp59;		HX_STACK_VAR(a,"a");
									HX_STACK_LINE(830)
									Float tmp60;		HX_STACK_VAR(tmp60,"tmp60");
									HX_STACK_LINE(830)
									{
										HX_STACK_LINE(830)
										int _int = a;		HX_STACK_VAR(_int,"int");
										HX_STACK_LINE(830)
										bool tmp61 = (_int < (int)0);		HX_STACK_VAR(tmp61,"tmp61");
										HX_STACK_LINE(830)
										if ((tmp61)){
											HX_STACK_LINE(830)
											tmp60 = (((Float)4294967296.0) + _int);
										}
										else{
											HX_STACK_LINE(830)
											tmp60 = (_int + ((Float)0.0));
										}
									}
									HX_STACK_LINE(830)
									Float tmp61 = uOpposite;		HX_STACK_VAR(tmp61,"tmp61");
									HX_STACK_LINE(830)
									tmp57 = (tmp60 * tmp61);
								}
								HX_STACK_LINE(830)
								Float tmp58;		HX_STACK_VAR(tmp58,"tmp58");
								HX_STACK_LINE(830)
								{
									HX_STACK_LINE(830)
									int tmp59 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((sourceIndexXY + (int)1))));		HX_STACK_VAR(tmp59,"tmp59");
									HX_STACK_LINE(830)
									Dynamic tmp60 = (int(tmp59) & int((int)255));		HX_STACK_VAR(tmp60,"tmp60");
									HX_STACK_LINE(830)
									int a = tmp60;		HX_STACK_VAR(a,"a");
									HX_STACK_LINE(830)
									Float tmp61;		HX_STACK_VAR(tmp61,"tmp61");
									HX_STACK_LINE(830)
									{
										HX_STACK_LINE(830)
										int _int = a;		HX_STACK_VAR(_int,"int");
										HX_STACK_LINE(830)
										bool tmp62 = (_int < (int)0);		HX_STACK_VAR(tmp62,"tmp62");
										HX_STACK_LINE(830)
										if ((tmp62)){
											HX_STACK_LINE(830)
											tmp61 = (((Float)4294967296.0) + _int);
										}
										else{
											HX_STACK_LINE(830)
											tmp61 = (_int + ((Float)0.0));
										}
									}
									HX_STACK_LINE(830)
									Float tmp62 = uRatio;		HX_STACK_VAR(tmp62,"tmp62");
									HX_STACK_LINE(830)
									tmp58 = (tmp61 * tmp62);
								}
								HX_STACK_LINE(830)
								Float tmp59 = (tmp57 + tmp58);		HX_STACK_VAR(tmp59,"tmp59");
								HX_STACK_LINE(830)
								Float tmp60 = vRatio;		HX_STACK_VAR(tmp60,"tmp60");
								HX_STACK_LINE(830)
								Float tmp61 = (tmp59 * tmp60);		HX_STACK_VAR(tmp61,"tmp61");
								HX_STACK_LINE(830)
								Float tmp62 = (tmp56 + tmp61);		HX_STACK_VAR(tmp62,"tmp62");
								HX_STACK_LINE(830)
								int tmp63 = ::Std_obj::_int(tmp62);		HX_STACK_VAR(tmp63,"tmp63");
								HX_STACK_LINE(830)
								int val = tmp63;		HX_STACK_VAR(val,"val");
								HX_STACK_LINE(830)
								::__hxcpp_memory_set_byte(newData->buffer->b,(newData->byteOffset + ((index + (int)1))),val);
								HX_STACK_LINE(830)
								val;
							}
							HX_STACK_LINE(831)
							{
								HX_STACK_LINE(831)
								Float tmp52;		HX_STACK_VAR(tmp52,"tmp52");
								HX_STACK_LINE(831)
								{
									HX_STACK_LINE(831)
									int tmp53 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((sourceIndex + (int)2))));		HX_STACK_VAR(tmp53,"tmp53");
									HX_STACK_LINE(831)
									Dynamic tmp54 = (int(tmp53) & int((int)255));		HX_STACK_VAR(tmp54,"tmp54");
									HX_STACK_LINE(831)
									int a = tmp54;		HX_STACK_VAR(a,"a");
									HX_STACK_LINE(831)
									Float tmp55;		HX_STACK_VAR(tmp55,"tmp55");
									HX_STACK_LINE(831)
									{
										HX_STACK_LINE(831)
										int _int = a;		HX_STACK_VAR(_int,"int");
										HX_STACK_LINE(831)
										bool tmp56 = (_int < (int)0);		HX_STACK_VAR(tmp56,"tmp56");
										HX_STACK_LINE(831)
										if ((tmp56)){
											HX_STACK_LINE(831)
											tmp55 = (((Float)4294967296.0) + _int);
										}
										else{
											HX_STACK_LINE(831)
											tmp55 = (_int + ((Float)0.0));
										}
									}
									HX_STACK_LINE(831)
									Float tmp56 = uOpposite;		HX_STACK_VAR(tmp56,"tmp56");
									HX_STACK_LINE(831)
									tmp52 = (tmp55 * tmp56);
								}
								HX_STACK_LINE(831)
								Float tmp53;		HX_STACK_VAR(tmp53,"tmp53");
								HX_STACK_LINE(831)
								{
									HX_STACK_LINE(831)
									int tmp54 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((sourceIndexX + (int)2))));		HX_STACK_VAR(tmp54,"tmp54");
									HX_STACK_LINE(831)
									Dynamic tmp55 = (int(tmp54) & int((int)255));		HX_STACK_VAR(tmp55,"tmp55");
									HX_STACK_LINE(831)
									int a = tmp55;		HX_STACK_VAR(a,"a");
									HX_STACK_LINE(831)
									Float tmp56;		HX_STACK_VAR(tmp56,"tmp56");
									HX_STACK_LINE(831)
									{
										HX_STACK_LINE(831)
										int _int = a;		HX_STACK_VAR(_int,"int");
										HX_STACK_LINE(831)
										bool tmp57 = (_int < (int)0);		HX_STACK_VAR(tmp57,"tmp57");
										HX_STACK_LINE(831)
										if ((tmp57)){
											HX_STACK_LINE(831)
											tmp56 = (((Float)4294967296.0) + _int);
										}
										else{
											HX_STACK_LINE(831)
											tmp56 = (_int + ((Float)0.0));
										}
									}
									HX_STACK_LINE(831)
									Float tmp57 = uRatio;		HX_STACK_VAR(tmp57,"tmp57");
									HX_STACK_LINE(831)
									tmp53 = (tmp56 * tmp57);
								}
								HX_STACK_LINE(831)
								Float tmp54 = (tmp52 + tmp53);		HX_STACK_VAR(tmp54,"tmp54");
								HX_STACK_LINE(831)
								Float tmp55 = vOpposite;		HX_STACK_VAR(tmp55,"tmp55");
								HX_STACK_LINE(831)
								Float tmp56 = (tmp54 * tmp55);		HX_STACK_VAR(tmp56,"tmp56");
								HX_STACK_LINE(831)
								Float tmp57;		HX_STACK_VAR(tmp57,"tmp57");
								HX_STACK_LINE(831)
								{
									HX_STACK_LINE(831)
									int tmp58 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((sourceIndexY + (int)2))));		HX_STACK_VAR(tmp58,"tmp58");
									HX_STACK_LINE(831)
									Dynamic tmp59 = (int(tmp58) & int((int)255));		HX_STACK_VAR(tmp59,"tmp59");
									HX_STACK_LINE(831)
									int a = tmp59;		HX_STACK_VAR(a,"a");
									HX_STACK_LINE(831)
									Float tmp60;		HX_STACK_VAR(tmp60,"tmp60");
									HX_STACK_LINE(831)
									{
										HX_STACK_LINE(831)
										int _int = a;		HX_STACK_VAR(_int,"int");
										HX_STACK_LINE(831)
										bool tmp61 = (_int < (int)0);		HX_STACK_VAR(tmp61,"tmp61");
										HX_STACK_LINE(831)
										if ((tmp61)){
											HX_STACK_LINE(831)
											tmp60 = (((Float)4294967296.0) + _int);
										}
										else{
											HX_STACK_LINE(831)
											tmp60 = (_int + ((Float)0.0));
										}
									}
									HX_STACK_LINE(831)
									Float tmp61 = uOpposite;		HX_STACK_VAR(tmp61,"tmp61");
									HX_STACK_LINE(831)
									tmp57 = (tmp60 * tmp61);
								}
								HX_STACK_LINE(831)
								Float tmp58;		HX_STACK_VAR(tmp58,"tmp58");
								HX_STACK_LINE(831)
								{
									HX_STACK_LINE(831)
									int tmp59 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((sourceIndexXY + (int)2))));		HX_STACK_VAR(tmp59,"tmp59");
									HX_STACK_LINE(831)
									Dynamic tmp60 = (int(tmp59) & int((int)255));		HX_STACK_VAR(tmp60,"tmp60");
									HX_STACK_LINE(831)
									int a = tmp60;		HX_STACK_VAR(a,"a");
									HX_STACK_LINE(831)
									Float tmp61;		HX_STACK_VAR(tmp61,"tmp61");
									HX_STACK_LINE(831)
									{
										HX_STACK_LINE(831)
										int _int = a;		HX_STACK_VAR(_int,"int");
										HX_STACK_LINE(831)
										bool tmp62 = (_int < (int)0);		HX_STACK_VAR(tmp62,"tmp62");
										HX_STACK_LINE(831)
										if ((tmp62)){
											HX_STACK_LINE(831)
											tmp61 = (((Float)4294967296.0) + _int);
										}
										else{
											HX_STACK_LINE(831)
											tmp61 = (_int + ((Float)0.0));
										}
									}
									HX_STACK_LINE(831)
									Float tmp62 = uRatio;		HX_STACK_VAR(tmp62,"tmp62");
									HX_STACK_LINE(831)
									tmp58 = (tmp61 * tmp62);
								}
								HX_STACK_LINE(831)
								Float tmp59 = (tmp57 + tmp58);		HX_STACK_VAR(tmp59,"tmp59");
								HX_STACK_LINE(831)
								Float tmp60 = vRatio;		HX_STACK_VAR(tmp60,"tmp60");
								HX_STACK_LINE(831)
								Float tmp61 = (tmp59 * tmp60);		HX_STACK_VAR(tmp61,"tmp61");
								HX_STACK_LINE(831)
								Float tmp62 = (tmp56 + tmp61);		HX_STACK_VAR(tmp62,"tmp62");
								HX_STACK_LINE(831)
								int tmp63 = ::Std_obj::_int(tmp62);		HX_STACK_VAR(tmp63,"tmp63");
								HX_STACK_LINE(831)
								int val = tmp63;		HX_STACK_VAR(val,"val");
								HX_STACK_LINE(831)
								::__hxcpp_memory_set_byte(newData->buffer->b,(newData->byteOffset + ((index + (int)2))),val);
								HX_STACK_LINE(831)
								val;
							}
							HX_STACK_LINE(835)
							bool tmp52;		HX_STACK_VAR(tmp52,"tmp52");
							HX_STACK_LINE(835)
							{
								HX_STACK_LINE(835)
								int tmp53 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((sourceIndexX + (int)3))));		HX_STACK_VAR(tmp53,"tmp53");
								HX_STACK_LINE(835)
								int tmp54 = tmp53;		HX_STACK_VAR(tmp54,"tmp54");
								HX_STACK_LINE(835)
								Dynamic tmp55 = (int(tmp54) & int((int)255));		HX_STACK_VAR(tmp55,"tmp55");
								HX_STACK_LINE(835)
								Dynamic tmp56 = tmp55;		HX_STACK_VAR(tmp56,"tmp56");
								HX_STACK_LINE(835)
								int a = tmp56;		HX_STACK_VAR(a,"a");
								HX_STACK_LINE(835)
								tmp52 = (a == (int)0);
							}
							HX_STACK_LINE(835)
							bool tmp53 = !(tmp52);		HX_STACK_VAR(tmp53,"tmp53");
							HX_STACK_LINE(835)
							bool tmp54 = tmp53;		HX_STACK_VAR(tmp54,"tmp54");
							HX_STACK_LINE(835)
							bool tmp55;		HX_STACK_VAR(tmp55,"tmp55");
							HX_STACK_LINE(835)
							if ((tmp54)){
								HX_STACK_LINE(835)
								int tmp56 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((sourceIndexY + (int)3))));		HX_STACK_VAR(tmp56,"tmp56");
								HX_STACK_LINE(835)
								int tmp57 = tmp56;		HX_STACK_VAR(tmp57,"tmp57");
								HX_STACK_LINE(835)
								int tmp58 = tmp57;		HX_STACK_VAR(tmp58,"tmp58");
								HX_STACK_LINE(835)
								Dynamic tmp59 = (int(tmp58) & int((int)255));		HX_STACK_VAR(tmp59,"tmp59");
								HX_STACK_LINE(835)
								Dynamic tmp60 = tmp59;		HX_STACK_VAR(tmp60,"tmp60");
								HX_STACK_LINE(835)
								Dynamic tmp61 = tmp60;		HX_STACK_VAR(tmp61,"tmp61");
								HX_STACK_LINE(835)
								int a = tmp61;		HX_STACK_VAR(a,"a");
								HX_STACK_LINE(835)
								tmp55 = (a == (int)0);
							}
							else{
								HX_STACK_LINE(835)
								tmp55 = true;
							}
							HX_STACK_LINE(835)
							bool tmp56 = !(tmp55);		HX_STACK_VAR(tmp56,"tmp56");
							HX_STACK_LINE(835)
							bool tmp57;		HX_STACK_VAR(tmp57,"tmp57");
							HX_STACK_LINE(835)
							if ((tmp56)){
								HX_STACK_LINE(835)
								int tmp58 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((sourceIndexXY + (int)3))));		HX_STACK_VAR(tmp58,"tmp58");
								HX_STACK_LINE(835)
								int tmp59 = tmp58;		HX_STACK_VAR(tmp59,"tmp59");
								HX_STACK_LINE(835)
								Dynamic tmp60 = (int(tmp59) & int((int)255));		HX_STACK_VAR(tmp60,"tmp60");
								HX_STACK_LINE(835)
								Dynamic tmp61 = tmp60;		HX_STACK_VAR(tmp61,"tmp61");
								HX_STACK_LINE(835)
								int a = tmp61;		HX_STACK_VAR(a,"a");
								HX_STACK_LINE(835)
								tmp57 = (a == (int)0);
							}
							else{
								HX_STACK_LINE(835)
								tmp57 = true;
							}
							HX_STACK_LINE(835)
							if ((tmp57)){
								HX_STACK_LINE(837)
								::__hxcpp_memory_set_byte(newData->buffer->b,(newData->byteOffset + ((index + (int)3))),(int)0);
								HX_STACK_LINE(837)
								(int)0;
							}
							else{
								HX_STACK_LINE(841)
								int tmp58 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((sourceIndex + (int)3))));		HX_STACK_VAR(tmp58,"tmp58");
								HX_STACK_LINE(841)
								Dynamic tmp59 = (int(tmp58) & int((int)255));		HX_STACK_VAR(tmp59,"tmp59");
								HX_STACK_LINE(841)
								int val = tmp59;		HX_STACK_VAR(val,"val");
								HX_STACK_LINE(841)
								::__hxcpp_memory_set_byte(newData->buffer->b,(newData->byteOffset + ((index + (int)3))),val);
								HX_STACK_LINE(841)
								val;
							}
						}
					}
				}
			}
		}
		HX_STACK_LINE(851)
		buffer->data = newBuffer->data;
		HX_STACK_LINE(852)
		buffer->width = newWidth;
		HX_STACK_LINE(853)
		buffer->height = newHeight;
		HX_STACK_LINE(862)
		image->dirty = true;
		HX_STACK_LINE(863)
		(image->version)++;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(ImageDataUtil_obj,resize,(void))

Void ImageDataUtil_obj::resizeBuffer( ::lime::graphics::Image image,int newWidth,int newHeight){
{
		HX_STACK_FRAME("lime.graphics.utils.ImageDataUtil","resizeBuffer",0x390004c2,"lime.graphics.utils.ImageDataUtil.resizeBuffer","lime/graphics/utils/ImageDataUtil.hx",868,0x494d921f)
		HX_STACK_ARG(image,"image")
		HX_STACK_ARG(newWidth,"newWidth")
		HX_STACK_ARG(newHeight,"newHeight")
		HX_STACK_LINE(870)
		::lime::graphics::ImageBuffer buffer = image->buffer;		HX_STACK_VAR(buffer,"buffer");
		HX_STACK_LINE(871)
		::lime::utils::ArrayBufferView tmp = image->get_data();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(871)
		::lime::utils::ArrayBufferView data = tmp;		HX_STACK_VAR(data,"data");
		HX_STACK_LINE(872)
		::lime::utils::ArrayBufferView tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(872)
		{
			HX_STACK_LINE(872)
			int tmp2 = (newWidth * newHeight);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(872)
			int tmp3 = (tmp2 * (int)4);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(872)
			Dynamic elements = tmp3;		HX_STACK_VAR(elements,"elements");
			HX_STACK_LINE(872)
			::lime::utils::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(872)
			bool tmp4 = (elements != null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(872)
			if ((tmp4)){
				HX_STACK_LINE(872)
				::lime::utils::ArrayBufferView tmp5 = ::lime::utils::ArrayBufferView_obj::__new(elements,(int)4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(872)
				this1 = tmp5;
			}
			else{
				HX_STACK_LINE(872)
				bool tmp5 = false;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(872)
				if ((tmp5)){
					HX_STACK_LINE(872)
					::lime::utils::ArrayBufferView tmp6;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(872)
					{
						HX_STACK_LINE(872)
						::lime::utils::ArrayBufferView tmp7 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(872)
						::lime::utils::ArrayBufferView _this = tmp7;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(872)
						_this->byteOffset = (int)0;
						HX_STACK_LINE(872)
						int tmp8 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(872)
						_this->length = tmp8;
						HX_STACK_LINE(872)
						int tmp9 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(872)
						_this->byteLength = tmp9;
						HX_STACK_LINE(872)
						::haxe::io::Bytes tmp10;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(872)
						{
							HX_STACK_LINE(872)
							::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
							HX_STACK_LINE(872)
							int tmp11 = _this->byteLength;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(872)
							::haxe::io::Bytes tmp12 = ::haxe::io::Bytes_obj::alloc(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(872)
							this2 = tmp12;
							HX_STACK_LINE(872)
							tmp10 = this2;
						}
						HX_STACK_LINE(872)
						_this->buffer = tmp10;
						HX_STACK_LINE(872)
						_this->copyFromArray(((Array< Float >)(null())),null());
						HX_STACK_LINE(872)
						tmp6 = _this;
					}
					HX_STACK_LINE(872)
					this1 = tmp6;
				}
				else{
					HX_STACK_LINE(872)
					bool tmp6 = false;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(872)
					if ((tmp6)){
						HX_STACK_LINE(872)
						::lime::utils::ArrayBufferView tmp7;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(872)
						{
							HX_STACK_LINE(872)
							::lime::utils::ArrayBufferView tmp8 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(872)
							::lime::utils::ArrayBufferView _this = tmp8;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(872)
							::haxe::io::Bytes tmp9 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(872)
							::haxe::io::Bytes srcData = tmp9;		HX_STACK_VAR(srcData,"srcData");
							HX_STACK_LINE(872)
							int tmp10 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(872)
							int srcLength = tmp10;		HX_STACK_VAR(srcLength,"srcLength");
							HX_STACK_LINE(872)
							int tmp11 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(872)
							int srcByteOffset = tmp11;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
							HX_STACK_LINE(872)
							int tmp12 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(872)
							int srcElementSize = tmp12;		HX_STACK_VAR(srcElementSize,"srcElementSize");
							HX_STACK_LINE(872)
							int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
							HX_STACK_LINE(872)
							int tmp13 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(872)
							int tmp14 = _this->type;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(872)
							bool tmp15 = (tmp13 == tmp14);		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(872)
							if ((tmp15)){
								HX_STACK_LINE(872)
								int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
								HX_STACK_LINE(872)
								int tmp16 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(872)
								int cloneLength = tmp16;		HX_STACK_VAR(cloneLength,"cloneLength");
								HX_STACK_LINE(872)
								::haxe::io::Bytes tmp17;		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(872)
								{
									HX_STACK_LINE(872)
									::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
									HX_STACK_LINE(872)
									int tmp18 = cloneLength;		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(872)
									::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(872)
									this2 = tmp19;
									HX_STACK_LINE(872)
									tmp17 = this2;
								}
								HX_STACK_LINE(872)
								_this->buffer = tmp17;
								HX_STACK_LINE(872)
								::haxe::io::Bytes tmp18 = srcData;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(872)
								int tmp19 = srcByteOffset;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(872)
								int tmp20 = cloneLength;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(872)
								_this->buffer->blit((int)0,tmp18,tmp19,tmp20);
							}
							else{
								HX_STACK_LINE(872)
								HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
							}
							HX_STACK_LINE(872)
							int tmp16 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(872)
							_this->byteLength = tmp16;
							HX_STACK_LINE(872)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(872)
							_this->length = srcLength;
							HX_STACK_LINE(872)
							tmp7 = _this;
						}
						HX_STACK_LINE(872)
						this1 = tmp7;
					}
					else{
						HX_STACK_LINE(872)
						bool tmp7 = false;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(872)
						if ((tmp7)){
							HX_STACK_LINE(872)
							::lime::utils::ArrayBufferView tmp8;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(872)
							{
								HX_STACK_LINE(872)
								::lime::utils::ArrayBufferView tmp9 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(872)
								::lime::utils::ArrayBufferView _this = tmp9;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(872)
								bool tmp10 = false;		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(872)
								if ((tmp10)){
									HX_STACK_LINE(872)
									HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
								}
								HX_STACK_LINE(872)
								int tmp11 = hx::Mod((int)0,_this->bytesPerElement);		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(872)
								bool tmp12 = (tmp11 != (int)0);		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(872)
								if ((tmp12)){
									HX_STACK_LINE(872)
									HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
								}
								HX_STACK_LINE(872)
								int tmp13 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(872)
								int bufferByteLength = tmp13;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
								HX_STACK_LINE(872)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(872)
								int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
								HX_STACK_LINE(872)
								bool tmp14 = true;		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(872)
								if ((tmp14)){
									HX_STACK_LINE(872)
									int tmp15 = bufferByteLength;		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(872)
									newByteLength = tmp15;
									HX_STACK_LINE(872)
									int tmp16 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(872)
									bool tmp17 = (tmp16 != (int)0);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(872)
									if ((tmp17)){
										HX_STACK_LINE(872)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(872)
									bool tmp18 = (newByteLength < (int)0);		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(872)
									if ((tmp18)){
										HX_STACK_LINE(872)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
								}
								else{
									HX_STACK_LINE(872)
									int tmp15 = (null() * _this->bytesPerElement);		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(872)
									newByteLength = tmp15;
									HX_STACK_LINE(872)
									int tmp16 = newByteLength;		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(872)
									int newRange = tmp16;		HX_STACK_VAR(newRange,"newRange");
									HX_STACK_LINE(872)
									bool tmp17 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(872)
									if ((tmp17)){
										HX_STACK_LINE(872)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
								}
								HX_STACK_LINE(872)
								_this->buffer = null();
								HX_STACK_LINE(872)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(872)
								_this->byteLength = newByteLength;
								HX_STACK_LINE(872)
								Float tmp15 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(872)
								int tmp16 = ::Std_obj::_int(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(872)
								_this->length = tmp16;
								HX_STACK_LINE(872)
								tmp8 = _this;
							}
							HX_STACK_LINE(872)
							this1 = tmp8;
						}
						else{
							HX_STACK_LINE(872)
							HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for UInt8Array","\x6b","\x44","\xd5","\x85"));
						}
					}
				}
			}
			HX_STACK_LINE(872)
			tmp1 = this1;
		}
		HX_STACK_LINE(872)
		::lime::utils::ArrayBufferView newData = tmp1;		HX_STACK_VAR(newData,"newData");
		HX_STACK_LINE(873)
		int sourceIndex;		HX_STACK_VAR(sourceIndex,"sourceIndex");
		HX_STACK_LINE(873)
		int index;		HX_STACK_VAR(index,"index");
		HX_STACK_LINE(875)
		{
			HX_STACK_LINE(875)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(875)
			int _g = buffer->height;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(875)
			while((true)){
				HX_STACK_LINE(875)
				bool tmp2 = (_g1 < _g);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(875)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(875)
				if ((tmp3)){
					HX_STACK_LINE(875)
					break;
				}
				HX_STACK_LINE(875)
				int tmp4 = (_g1)++;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(875)
				int y = tmp4;		HX_STACK_VAR(y,"y");
				HX_STACK_LINE(877)
				{
					HX_STACK_LINE(877)
					int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(877)
					int _g2 = buffer->width;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(877)
					while((true)){
						HX_STACK_LINE(877)
						bool tmp5 = (_g3 < _g2);		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(877)
						bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(877)
						if ((tmp6)){
							HX_STACK_LINE(877)
							break;
						}
						HX_STACK_LINE(877)
						int tmp7 = (_g3)++;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(877)
						int x = tmp7;		HX_STACK_VAR(x,"x");
						HX_STACK_LINE(879)
						int tmp8 = (y * buffer->width);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(879)
						int tmp9 = x;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(879)
						int tmp10 = (tmp8 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(879)
						int tmp11 = (tmp10 * (int)4);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(879)
						sourceIndex = tmp11;
						HX_STACK_LINE(880)
						int tmp12 = (y * newWidth);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(880)
						int tmp13 = x;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(880)
						int tmp14 = (tmp12 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(880)
						int tmp15 = (tmp14 * (int)4);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(880)
						index = tmp15;
						HX_STACK_LINE(882)
						{
							HX_STACK_LINE(882)
							int tmp16 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + sourceIndex));		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(882)
							Dynamic tmp17 = (int(tmp16) & int((int)255));		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(882)
							int val = tmp17;		HX_STACK_VAR(val,"val");
							HX_STACK_LINE(882)
							::__hxcpp_memory_set_byte(newData->buffer->b,(newData->byteOffset + index),val);
							HX_STACK_LINE(882)
							val;
						}
						HX_STACK_LINE(883)
						{
							HX_STACK_LINE(883)
							int tmp16 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((sourceIndex + (int)1))));		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(883)
							Dynamic tmp17 = (int(tmp16) & int((int)255));		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(883)
							int val = tmp17;		HX_STACK_VAR(val,"val");
							HX_STACK_LINE(883)
							::__hxcpp_memory_set_byte(newData->buffer->b,(newData->byteOffset + ((index + (int)1))),val);
							HX_STACK_LINE(883)
							val;
						}
						HX_STACK_LINE(884)
						{
							HX_STACK_LINE(884)
							int tmp16 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((sourceIndex + (int)2))));		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(884)
							Dynamic tmp17 = (int(tmp16) & int((int)255));		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(884)
							int val = tmp17;		HX_STACK_VAR(val,"val");
							HX_STACK_LINE(884)
							::__hxcpp_memory_set_byte(newData->buffer->b,(newData->byteOffset + ((index + (int)2))),val);
							HX_STACK_LINE(884)
							val;
						}
						HX_STACK_LINE(885)
						{
							HX_STACK_LINE(885)
							int tmp16 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((sourceIndex + (int)3))));		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(885)
							Dynamic tmp17 = (int(tmp16) & int((int)255));		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(885)
							int val = tmp17;		HX_STACK_VAR(val,"val");
							HX_STACK_LINE(885)
							::__hxcpp_memory_set_byte(newData->buffer->b,(newData->byteOffset + ((index + (int)3))),val);
							HX_STACK_LINE(885)
							val;
						}
					}
				}
			}
		}
		HX_STACK_LINE(891)
		buffer->data = newData;
		HX_STACK_LINE(892)
		buffer->width = newWidth;
		HX_STACK_LINE(893)
		buffer->height = newHeight;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(ImageDataUtil_obj,resizeBuffer,(void))

Void ImageDataUtil_obj::setFormat( ::lime::graphics::Image image,int format){
{
		HX_STACK_FRAME("lime.graphics.utils.ImageDataUtil","setFormat",0xff73210b,"lime.graphics.utils.ImageDataUtil.setFormat","lime/graphics/utils/ImageDataUtil.hx",898,0x494d921f)
		HX_STACK_ARG(image,"image")
		HX_STACK_ARG(format,"format")
		HX_STACK_LINE(900)
		::lime::utils::ArrayBufferView tmp = image->buffer->data;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(900)
		::lime::utils::ArrayBufferView data = tmp;		HX_STACK_VAR(data,"data");
		HX_STACK_LINE(901)
		bool tmp1 = (data == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(901)
		if ((tmp1)){
			HX_STACK_LINE(901)
			return null();
		}
		HX_STACK_LINE(904)
		bool tmp2 = ::lime::_system::CFFI_obj::enabled;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(904)
		if ((tmp2)){
			HX_STACK_LINE(904)
			::lime::graphics::utils::ImageDataUtil_obj::cffi_lime_image_data_util_set_format.call(hx::DynamicPtr(image),format);
		}
		else{
			HX_STACK_LINE(908)
			int index;		HX_STACK_VAR(index,"index");
			HX_STACK_LINE(908)
			Dynamic a16;		HX_STACK_VAR(a16,"a16");
			HX_STACK_LINE(909)
			int tmp3 = data->length;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(909)
			Float tmp4 = (Float(tmp3) / Float((int)4));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(909)
			int tmp5 = ::Std_obj::_int(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(909)
			int length = tmp5;		HX_STACK_VAR(length,"length");
			HX_STACK_LINE(910)
			int r1;		HX_STACK_VAR(r1,"r1");
			HX_STACK_LINE(910)
			int g1;		HX_STACK_VAR(g1,"g1");
			HX_STACK_LINE(910)
			int b1;		HX_STACK_VAR(b1,"b1");
			HX_STACK_LINE(910)
			int a1;		HX_STACK_VAR(a1,"a1");
			HX_STACK_LINE(910)
			int r2;		HX_STACK_VAR(r2,"r2");
			HX_STACK_LINE(910)
			int g2;		HX_STACK_VAR(g2,"g2");
			HX_STACK_LINE(910)
			int b2;		HX_STACK_VAR(b2,"b2");
			HX_STACK_LINE(910)
			int a2;		HX_STACK_VAR(a2,"a2");
			HX_STACK_LINE(911)
			Dynamic r;		HX_STACK_VAR(r,"r");
			HX_STACK_LINE(911)
			Dynamic g;		HX_STACK_VAR(g,"g");
			HX_STACK_LINE(911)
			Dynamic b;		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(911)
			Dynamic a;		HX_STACK_VAR(a,"a");
			HX_STACK_LINE(913)
			{
				HX_STACK_LINE(913)
				int tmp6 = image->get_format();		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(913)
				int _g = tmp6;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(913)
				int tmp7 = _g;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(913)
				switch( (int)(tmp7)){
					case (int)0: {
						HX_STACK_LINE(917)
						r1 = (int)0;
						HX_STACK_LINE(918)
						g1 = (int)1;
						HX_STACK_LINE(919)
						b1 = (int)2;
						HX_STACK_LINE(920)
						a1 = (int)3;
					}
					;break;
					case (int)1: {
						HX_STACK_LINE(924)
						r1 = (int)1;
						HX_STACK_LINE(925)
						g1 = (int)2;
						HX_STACK_LINE(926)
						b1 = (int)3;
						HX_STACK_LINE(927)
						a1 = (int)0;
					}
					;break;
					case (int)2: {
						HX_STACK_LINE(931)
						r1 = (int)2;
						HX_STACK_LINE(932)
						g1 = (int)1;
						HX_STACK_LINE(933)
						b1 = (int)0;
						HX_STACK_LINE(934)
						a1 = (int)3;
					}
					;break;
				}
			}
			HX_STACK_LINE(938)
			int tmp6 = format;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(938)
			switch( (int)(tmp6)){
				case (int)0: {
					HX_STACK_LINE(942)
					r2 = (int)0;
					HX_STACK_LINE(943)
					g2 = (int)1;
					HX_STACK_LINE(944)
					b2 = (int)2;
					HX_STACK_LINE(945)
					a2 = (int)3;
				}
				;break;
				case (int)1: {
					HX_STACK_LINE(949)
					r2 = (int)1;
					HX_STACK_LINE(950)
					g2 = (int)2;
					HX_STACK_LINE(951)
					b2 = (int)3;
					HX_STACK_LINE(952)
					a2 = (int)0;
				}
				;break;
				case (int)2: {
					HX_STACK_LINE(956)
					r2 = (int)2;
					HX_STACK_LINE(957)
					g2 = (int)1;
					HX_STACK_LINE(958)
					b2 = (int)0;
					HX_STACK_LINE(959)
					a2 = (int)3;
				}
				;break;
			}
			HX_STACK_LINE(963)
			{
				HX_STACK_LINE(963)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(963)
				while((true)){
					HX_STACK_LINE(963)
					bool tmp7 = (_g < length);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(963)
					bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(963)
					if ((tmp8)){
						HX_STACK_LINE(963)
						break;
					}
					HX_STACK_LINE(963)
					int tmp9 = (_g)++;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(963)
					int i = tmp9;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(965)
					int tmp10 = (i * (int)4);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(965)
					index = tmp10;
					HX_STACK_LINE(967)
					int tmp11 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((index + r1))));		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(967)
					Dynamic tmp12 = (int(tmp11) & int((int)255));		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(967)
					r = tmp12;
					HX_STACK_LINE(968)
					int tmp13 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((index + g1))));		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(968)
					Dynamic tmp14 = (int(tmp13) & int((int)255));		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(968)
					g = tmp14;
					HX_STACK_LINE(969)
					int tmp15 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((index + b1))));		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(969)
					Dynamic tmp16 = (int(tmp15) & int((int)255));		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(969)
					b = tmp16;
					HX_STACK_LINE(970)
					int tmp17 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((index + a1))));		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(970)
					Dynamic tmp18 = (int(tmp17) & int((int)255));		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(970)
					a = tmp18;
					HX_STACK_LINE(972)
					{
						HX_STACK_LINE(972)
						int val = r;		HX_STACK_VAR(val,"val");
						HX_STACK_LINE(972)
						::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((index + r2))),val);
						HX_STACK_LINE(972)
						val;
					}
					HX_STACK_LINE(973)
					{
						HX_STACK_LINE(973)
						int val = g;		HX_STACK_VAR(val,"val");
						HX_STACK_LINE(973)
						::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((index + g2))),val);
						HX_STACK_LINE(973)
						val;
					}
					HX_STACK_LINE(974)
					{
						HX_STACK_LINE(974)
						int val = b;		HX_STACK_VAR(val,"val");
						HX_STACK_LINE(974)
						::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((index + b2))),val);
						HX_STACK_LINE(974)
						val;
					}
					HX_STACK_LINE(975)
					{
						HX_STACK_LINE(975)
						int val = a;		HX_STACK_VAR(val,"val");
						HX_STACK_LINE(975)
						::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((index + a2))),val);
						HX_STACK_LINE(975)
						val;
					}
				}
			}
		}
		HX_STACK_LINE(981)
		image->buffer->format = format;
		HX_STACK_LINE(982)
		image->dirty = true;
		HX_STACK_LINE(983)
		(image->version)++;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ImageDataUtil_obj,setFormat,(void))

Void ImageDataUtil_obj::setPixel( ::lime::graphics::Image image,int x,int y,int color,int format){
{
		HX_STACK_FRAME("lime.graphics.utils.ImageDataUtil","setPixel",0x7a534b32,"lime.graphics.utils.ImageDataUtil.setPixel","lime/graphics/utils/ImageDataUtil.hx",988,0x494d921f)
		HX_STACK_ARG(image,"image")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(color,"color")
		HX_STACK_ARG(format,"format")
		HX_STACK_LINE(990)
		int pixel;		HX_STACK_VAR(pixel,"pixel");
		HX_STACK_LINE(992)
		int tmp = format;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(992)
		switch( (int)(tmp)){
			case (int)1: {
				HX_STACK_LINE(994)
				int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(994)
				{
					HX_STACK_LINE(994)
					int argb = color;		HX_STACK_VAR(argb,"argb");
					HX_STACK_LINE(994)
					{
						HX_STACK_LINE(994)
						int tmp2;		HX_STACK_VAR(tmp2,"tmp2");
						HX_STACK_LINE(994)
						{
							HX_STACK_LINE(994)
							int rgba = (int)0;		HX_STACK_VAR(rgba,"rgba");
							HX_STACK_LINE(994)
							tmp2 = rgba;
						}
						HX_STACK_LINE(994)
						int rgba = tmp2;		HX_STACK_VAR(rgba,"rgba");
						HX_STACK_LINE(994)
						{
							HX_STACK_LINE(994)
							int tmp3 = (int(argb) >> int((int)16));		HX_STACK_VAR(tmp3,"tmp3");
							HX_STACK_LINE(994)
							int tmp4 = (int(tmp3) & int((int)255));		HX_STACK_VAR(tmp4,"tmp4");
							HX_STACK_LINE(994)
							int tmp5 = (int(tmp4) & int((int)255));		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(994)
							int tmp6 = (int(tmp5) << int((int)24));		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(994)
							int tmp7 = (int(argb) >> int((int)8));		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(994)
							int tmp8 = (int(tmp7) & int((int)255));		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(994)
							int tmp9 = (int(tmp8) & int((int)255));		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(994)
							int tmp10 = (int(tmp9) << int((int)16));		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(994)
							int tmp11 = (int(tmp6) | int(tmp10));		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(994)
							int tmp12 = (int(argb) & int((int)255));		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(994)
							int tmp13 = (int(tmp12) & int((int)255));		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(994)
							int tmp14 = (int(tmp13) << int((int)8));		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(994)
							int tmp15 = (int(tmp11) | int(tmp14));		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(994)
							int tmp16 = (int(argb) >> int((int)24));		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(994)
							int tmp17 = (int(tmp16) & int((int)255));		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(994)
							int tmp18 = (int(tmp17) & int((int)255));		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(994)
							int tmp19 = (int(tmp15) | int(tmp18));		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(994)
							rgba = tmp19;
						}
						HX_STACK_LINE(994)
						tmp1 = rgba;
					}
				}
				HX_STACK_LINE(994)
				pixel = tmp1;
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(995)
				int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(995)
				{
					HX_STACK_LINE(995)
					int bgra = color;		HX_STACK_VAR(bgra,"bgra");
					HX_STACK_LINE(995)
					{
						HX_STACK_LINE(995)
						int tmp2;		HX_STACK_VAR(tmp2,"tmp2");
						HX_STACK_LINE(995)
						{
							HX_STACK_LINE(995)
							int rgba = (int)0;		HX_STACK_VAR(rgba,"rgba");
							HX_STACK_LINE(995)
							tmp2 = rgba;
						}
						HX_STACK_LINE(995)
						int rgba = tmp2;		HX_STACK_VAR(rgba,"rgba");
						HX_STACK_LINE(995)
						{
							HX_STACK_LINE(995)
							int tmp3 = (int(bgra) >> int((int)8));		HX_STACK_VAR(tmp3,"tmp3");
							HX_STACK_LINE(995)
							int tmp4 = (int(tmp3) & int((int)255));		HX_STACK_VAR(tmp4,"tmp4");
							HX_STACK_LINE(995)
							int tmp5 = (int(tmp4) & int((int)255));		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(995)
							int tmp6 = (int(tmp5) << int((int)24));		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(995)
							int tmp7 = (int(bgra) >> int((int)16));		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(995)
							int tmp8 = (int(tmp7) & int((int)255));		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(995)
							int tmp9 = (int(tmp8) & int((int)255));		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(995)
							int tmp10 = (int(tmp9) << int((int)16));		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(995)
							int tmp11 = (int(tmp6) | int(tmp10));		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(995)
							int tmp12 = (int(bgra) >> int((int)24));		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(995)
							int tmp13 = (int(tmp12) & int((int)255));		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(995)
							int tmp14 = (int(tmp13) & int((int)255));		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(995)
							int tmp15 = (int(tmp14) << int((int)8));		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(995)
							int tmp16 = (int(tmp11) | int(tmp15));		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(995)
							int tmp17 = (int(bgra) & int((int)255));		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(995)
							int tmp18 = (int(tmp17) & int((int)255));		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(995)
							int tmp19 = (int(tmp16) | int(tmp18));		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(995)
							rgba = tmp19;
						}
						HX_STACK_LINE(995)
						tmp1 = rgba;
					}
				}
				HX_STACK_LINE(995)
				pixel = tmp1;
			}
			;break;
			default: {
				HX_STACK_LINE(996)
				pixel = color;
			}
		}
		HX_STACK_LINE(1002)
		int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1002)
		{
			HX_STACK_LINE(1002)
			int rgba = (int)0;		HX_STACK_VAR(rgba,"rgba");
			HX_STACK_LINE(1002)
			tmp1 = rgba;
		}
		HX_STACK_LINE(1002)
		int source = tmp1;		HX_STACK_VAR(source,"source");
		HX_STACK_LINE(1003)
		{
			HX_STACK_LINE(1003)
			::lime::utils::ArrayBufferView tmp2 = image->buffer->data;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1003)
			::lime::utils::ArrayBufferView data = tmp2;		HX_STACK_VAR(data,"data");
			HX_STACK_LINE(1003)
			int tmp3 = (y + image->offsetY);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1003)
			int tmp4 = ((int)4 * tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1003)
			int tmp5 = image->buffer->width;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1003)
			int tmp6 = (tmp4 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1003)
			int tmp7 = (x + image->offsetX);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1003)
			int tmp8 = (tmp7 * (int)4);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1003)
			int tmp9 = (tmp6 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1003)
			int offset = tmp9;		HX_STACK_VAR(offset,"offset");
			HX_STACK_LINE(1003)
			int tmp10 = image->buffer->format;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1003)
			switch( (int)(tmp10)){
				case (int)2: {
					HX_STACK_LINE(1003)
					int tmp11 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)2))));		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(1003)
					Dynamic tmp12 = (int(tmp11) & int((int)255));		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(1003)
					int r = tmp12;		HX_STACK_VAR(r,"r");
					HX_STACK_LINE(1003)
					int tmp13 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)1))));		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(1003)
					Dynamic tmp14 = (int(tmp13) & int((int)255));		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(1003)
					int g = tmp14;		HX_STACK_VAR(g,"g");
					HX_STACK_LINE(1003)
					int tmp15 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + offset));		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(1003)
					Dynamic tmp16 = (int(tmp15) & int((int)255));		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(1003)
					int b = tmp16;		HX_STACK_VAR(b,"b");
					HX_STACK_LINE(1003)
					int tmp17 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)3))));		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(1003)
					Dynamic tmp18 = (int(tmp17) & int((int)255));		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(1003)
					int a = tmp18;		HX_STACK_VAR(a,"a");
					HX_STACK_LINE(1003)
					int tmp19 = (int(r) & int((int)255));		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(1003)
					int tmp20 = (int(tmp19) << int((int)24));		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(1003)
					int tmp21 = (int(g) & int((int)255));		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(1003)
					int tmp22 = (int(tmp21) << int((int)16));		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(1003)
					int tmp23 = (int(tmp20) | int(tmp22));		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(1003)
					int tmp24 = (int(b) & int((int)255));		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(1003)
					int tmp25 = (int(tmp24) << int((int)8));		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(1003)
					int tmp26 = (int(tmp23) | int(tmp25));		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(1003)
					int tmp27 = (int(a) & int((int)255));		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(1003)
					int tmp28 = (int(tmp26) | int(tmp27));		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(1003)
					source = tmp28;
				}
				;break;
				case (int)0: {
					HX_STACK_LINE(1003)
					int tmp11 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + offset));		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(1003)
					Dynamic tmp12 = (int(tmp11) & int((int)255));		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(1003)
					int r = tmp12;		HX_STACK_VAR(r,"r");
					HX_STACK_LINE(1003)
					int tmp13 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)1))));		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(1003)
					Dynamic tmp14 = (int(tmp13) & int((int)255));		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(1003)
					int g = tmp14;		HX_STACK_VAR(g,"g");
					HX_STACK_LINE(1003)
					int tmp15 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)2))));		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(1003)
					Dynamic tmp16 = (int(tmp15) & int((int)255));		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(1003)
					int b = tmp16;		HX_STACK_VAR(b,"b");
					HX_STACK_LINE(1003)
					int tmp17 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)3))));		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(1003)
					Dynamic tmp18 = (int(tmp17) & int((int)255));		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(1003)
					int a = tmp18;		HX_STACK_VAR(a,"a");
					HX_STACK_LINE(1003)
					int tmp19 = (int(r) & int((int)255));		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(1003)
					int tmp20 = (int(tmp19) << int((int)24));		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(1003)
					int tmp21 = (int(g) & int((int)255));		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(1003)
					int tmp22 = (int(tmp21) << int((int)16));		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(1003)
					int tmp23 = (int(tmp20) | int(tmp22));		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(1003)
					int tmp24 = (int(b) & int((int)255));		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(1003)
					int tmp25 = (int(tmp24) << int((int)8));		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(1003)
					int tmp26 = (int(tmp23) | int(tmp25));		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(1003)
					int tmp27 = (int(a) & int((int)255));		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(1003)
					int tmp28 = (int(tmp26) | int(tmp27));		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(1003)
					source = tmp28;
				}
				;break;
				case (int)1: {
					HX_STACK_LINE(1003)
					int tmp11 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)1))));		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(1003)
					Dynamic tmp12 = (int(tmp11) & int((int)255));		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(1003)
					int r = tmp12;		HX_STACK_VAR(r,"r");
					HX_STACK_LINE(1003)
					int tmp13 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)2))));		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(1003)
					Dynamic tmp14 = (int(tmp13) & int((int)255));		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(1003)
					int g = tmp14;		HX_STACK_VAR(g,"g");
					HX_STACK_LINE(1003)
					int tmp15 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)3))));		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(1003)
					Dynamic tmp16 = (int(tmp15) & int((int)255));		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(1003)
					int b = tmp16;		HX_STACK_VAR(b,"b");
					HX_STACK_LINE(1003)
					int tmp17 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + offset));		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(1003)
					Dynamic tmp18 = (int(tmp17) & int((int)255));		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(1003)
					int a = tmp18;		HX_STACK_VAR(a,"a");
					HX_STACK_LINE(1003)
					int tmp19 = (int(r) & int((int)255));		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(1003)
					int tmp20 = (int(tmp19) << int((int)24));		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(1003)
					int tmp21 = (int(g) & int((int)255));		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(1003)
					int tmp22 = (int(tmp21) << int((int)16));		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(1003)
					int tmp23 = (int(tmp20) | int(tmp22));		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(1003)
					int tmp24 = (int(b) & int((int)255));		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(1003)
					int tmp25 = (int(tmp24) << int((int)8));		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(1003)
					int tmp26 = (int(tmp23) | int(tmp25));		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(1003)
					int tmp27 = (int(a) & int((int)255));		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(1003)
					int tmp28 = (int(tmp26) | int(tmp27));		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(1003)
					source = tmp28;
				}
				;break;
			}
			HX_STACK_LINE(1003)
			bool tmp11 = image->buffer->premultiplied;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(1003)
			if ((tmp11)){
				HX_STACK_LINE(1003)
				int tmp12 = (int(source) & int((int)255));		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(1003)
				bool tmp13 = (tmp12 != (int)0);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(1003)
				bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(1003)
				if ((tmp13)){
					HX_STACK_LINE(1003)
					int tmp15 = (int(source) & int((int)255));		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(1003)
					int tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(1003)
					tmp14 = (tmp16 != (int)255);
				}
				else{
					HX_STACK_LINE(1003)
					tmp14 = false;
				}
				HX_STACK_LINE(1003)
				if ((tmp14)){
					HX_STACK_LINE(1003)
					int tmp15 = (int(source) & int((int)255));		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(1003)
					Float tmp16 = (Float(((Float)255.0)) / Float(tmp15));		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(1003)
					::lime::math::color::_RGBA::RGBA_Impl__obj::unmult = tmp16;
					HX_STACK_LINE(1003)
					{
						HX_STACK_LINE(1003)
						Dynamic tmp17;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(1003)
						{
							HX_STACK_LINE(1003)
							::lime::utils::ArrayBufferView tmp18 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(1003)
							::lime::utils::ArrayBufferView this1 = tmp18;		HX_STACK_VAR(this1,"this1");
							HX_STACK_LINE(1003)
							int tmp19 = (int(source) >> int((int)24));		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(1003)
							int tmp20 = (int(tmp19) & int((int)255));		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(1003)
							Float tmp21 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(1003)
							Float tmp22 = (tmp20 * tmp21);		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(1003)
							int tmp23 = ::Math_obj::round(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(1003)
							int idx = tmp23;		HX_STACK_VAR(idx,"idx");
							HX_STACK_LINE(1003)
							int tmp24 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(1003)
							tmp17 = (int(tmp24) & int((int)255));
						}
						HX_STACK_LINE(1003)
						int r = tmp17;		HX_STACK_VAR(r,"r");
						HX_STACK_LINE(1003)
						Dynamic tmp18;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(1003)
						{
							HX_STACK_LINE(1003)
							::lime::utils::ArrayBufferView tmp19 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(1003)
							::lime::utils::ArrayBufferView this1 = tmp19;		HX_STACK_VAR(this1,"this1");
							HX_STACK_LINE(1003)
							int tmp20 = (int(source) >> int((int)16));		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(1003)
							int tmp21 = (int(tmp20) & int((int)255));		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(1003)
							Float tmp22 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(1003)
							Float tmp23 = (tmp21 * tmp22);		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(1003)
							int tmp24 = ::Math_obj::round(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(1003)
							int idx = tmp24;		HX_STACK_VAR(idx,"idx");
							HX_STACK_LINE(1003)
							int tmp25 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(1003)
							tmp18 = (int(tmp25) & int((int)255));
						}
						HX_STACK_LINE(1003)
						int g = tmp18;		HX_STACK_VAR(g,"g");
						HX_STACK_LINE(1003)
						Dynamic tmp19;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(1003)
						{
							HX_STACK_LINE(1003)
							::lime::utils::ArrayBufferView tmp20 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(1003)
							::lime::utils::ArrayBufferView this1 = tmp20;		HX_STACK_VAR(this1,"this1");
							HX_STACK_LINE(1003)
							int tmp21 = (int(source) >> int((int)8));		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(1003)
							int tmp22 = (int(tmp21) & int((int)255));		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(1003)
							Float tmp23 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(1003)
							Float tmp24 = (tmp22 * tmp23);		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(1003)
							int tmp25 = ::Math_obj::round(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(1003)
							int idx = tmp25;		HX_STACK_VAR(idx,"idx");
							HX_STACK_LINE(1003)
							int tmp26 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(1003)
							tmp19 = (int(tmp26) & int((int)255));
						}
						HX_STACK_LINE(1003)
						int b = tmp19;		HX_STACK_VAR(b,"b");
						HX_STACK_LINE(1003)
						int tmp20 = (int(r) & int((int)255));		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(1003)
						int tmp21 = (int(tmp20) << int((int)24));		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(1003)
						int tmp22 = (int(g) & int((int)255));		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(1003)
						int tmp23 = (int(tmp22) << int((int)16));		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(1003)
						int tmp24 = (int(tmp21) | int(tmp23));		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(1003)
						int tmp25 = (int(b) & int((int)255));		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(1003)
						int tmp26 = (int(tmp25) << int((int)8));		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(1003)
						int tmp27 = (int(tmp24) | int(tmp26));		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(1003)
						int tmp28 = (int(source) & int((int)255));		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(1003)
						int tmp29 = (int(tmp28) & int((int)255));		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(1003)
						int tmp30 = (int(tmp27) | int(tmp29));		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(1003)
						source = tmp30;
					}
				}
			}
		}
		HX_STACK_LINE(1005)
		{
			HX_STACK_LINE(1005)
			int tmp2 = (int(source) & int((int)255));		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1005)
			int value = tmp2;		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(1005)
			{
				HX_STACK_LINE(1005)
				int tmp3 = (int(pixel) >> int((int)24));		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(1005)
				int tmp4 = (int(tmp3) & int((int)255));		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(1005)
				int tmp5 = (int(tmp4) & int((int)255));		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1005)
				int tmp6 = (int(tmp5) << int((int)24));		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1005)
				int tmp7 = (int(pixel) >> int((int)16));		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1005)
				int tmp8 = (int(tmp7) & int((int)255));		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1005)
				int tmp9 = (int(tmp8) & int((int)255));		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1005)
				int tmp10 = (int(tmp9) << int((int)16));		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(1005)
				int tmp11 = (int(tmp6) | int(tmp10));		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(1005)
				int tmp12 = (int(pixel) >> int((int)8));		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(1005)
				int tmp13 = (int(tmp12) & int((int)255));		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(1005)
				int tmp14 = (int(tmp13) & int((int)255));		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(1005)
				int tmp15 = (int(tmp14) << int((int)8));		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(1005)
				int tmp16 = (int(tmp11) | int(tmp15));		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(1005)
				int tmp17 = (int(value) & int((int)255));		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(1005)
				int tmp18 = (int(tmp16) | int(tmp17));		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(1005)
				pixel = tmp18;
			}
			HX_STACK_LINE(1005)
			value;
		}
		HX_STACK_LINE(1006)
		{
			HX_STACK_LINE(1006)
			::lime::utils::ArrayBufferView tmp2 = image->buffer->data;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1006)
			::lime::utils::ArrayBufferView data = tmp2;		HX_STACK_VAR(data,"data");
			HX_STACK_LINE(1006)
			int tmp3 = (y + image->offsetY);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1006)
			int tmp4 = ((int)4 * tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1006)
			int tmp5 = image->buffer->width;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1006)
			int tmp6 = (tmp4 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1006)
			int tmp7 = (x + image->offsetX);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1006)
			int tmp8 = (tmp7 * (int)4);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1006)
			int tmp9 = (tmp6 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1006)
			int offset = tmp9;		HX_STACK_VAR(offset,"offset");
			HX_STACK_LINE(1006)
			bool tmp10 = image->buffer->premultiplied;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1006)
			if ((tmp10)){
				HX_STACK_LINE(1006)
				int tmp11 = (int(pixel) & int((int)255));		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(1006)
				bool tmp12 = (tmp11 == (int)0);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(1006)
				if ((tmp12)){
					HX_STACK_LINE(1006)
					bool tmp13 = (pixel != (int)0);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(1006)
					if ((tmp13)){
						HX_STACK_LINE(1006)
						pixel = (int)0;
					}
				}
				else{
					HX_STACK_LINE(1006)
					int tmp13 = (int(pixel) & int((int)255));		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(1006)
					bool tmp14 = (tmp13 != (int)255);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(1006)
					if ((tmp14)){
						HX_STACK_LINE(1006)
						Dynamic tmp15;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(1006)
						{
							HX_STACK_LINE(1006)
							::lime::utils::ArrayBufferView tmp16 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__alpha16;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(1006)
							::lime::utils::ArrayBufferView this1 = tmp16;		HX_STACK_VAR(this1,"this1");
							HX_STACK_LINE(1006)
							tmp15 = ::__hxcpp_memory_get_ui32(this1->buffer->b,(this1->byteOffset + (((int(pixel) & int((int)255))) * (int)4)));
						}
						HX_STACK_LINE(1006)
						::lime::math::color::_RGBA::RGBA_Impl__obj::a16 = tmp15;
						HX_STACK_LINE(1006)
						{
							HX_STACK_LINE(1006)
							int tmp16 = (int(pixel) >> int((int)24));		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(1006)
							int tmp17 = (int(tmp16) & int((int)255));		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(1006)
							int tmp18 = ::lime::math::color::_RGBA::RGBA_Impl__obj::a16;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(1006)
							int tmp19 = (tmp17 * tmp18);		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(1006)
							int tmp20 = (int(tmp19) >> int((int)16));		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(1006)
							int tmp21 = (int(tmp20) & int((int)255));		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(1006)
							int tmp22 = (int(tmp21) << int((int)24));		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(1006)
							int tmp23 = (int(pixel) >> int((int)16));		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(1006)
							int tmp24 = (int(tmp23) & int((int)255));		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(1006)
							int tmp25 = ::lime::math::color::_RGBA::RGBA_Impl__obj::a16;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(1006)
							int tmp26 = (tmp24 * tmp25);		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(1006)
							int tmp27 = (int(tmp26) >> int((int)16));		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(1006)
							int tmp28 = (int(tmp27) & int((int)255));		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(1006)
							int tmp29 = (int(tmp28) << int((int)16));		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(1006)
							int tmp30 = (int(tmp22) | int(tmp29));		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(1006)
							int tmp31 = (int(pixel) >> int((int)8));		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(1006)
							int tmp32 = (int(tmp31) & int((int)255));		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(1006)
							int tmp33 = ::lime::math::color::_RGBA::RGBA_Impl__obj::a16;		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(1006)
							int tmp34 = (tmp32 * tmp33);		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(1006)
							int tmp35 = (int(tmp34) >> int((int)16));		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(1006)
							int tmp36 = (int(tmp35) & int((int)255));		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(1006)
							int tmp37 = (int(tmp36) << int((int)8));		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(1006)
							int tmp38 = (int(tmp30) | int(tmp37));		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(1006)
							int tmp39 = (int(pixel) & int((int)255));		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(1006)
							int tmp40 = (int(tmp39) & int((int)255));		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(1006)
							int tmp41 = (int(tmp38) | int(tmp40));		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(1006)
							pixel = tmp41;
						}
					}
				}
			}
			HX_STACK_LINE(1006)
			int tmp11 = image->buffer->format;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(1006)
			switch( (int)(tmp11)){
				case (int)2: {
					HX_STACK_LINE(1006)
					{
						HX_STACK_LINE(1006)
						int tmp12 = (int(pixel) >> int((int)8));		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(1006)
						int tmp13 = (int(tmp12) & int((int)255));		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(1006)
						int val = tmp13;		HX_STACK_VAR(val,"val");
						HX_STACK_LINE(1006)
						::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + offset),val);
						HX_STACK_LINE(1006)
						val;
					}
					HX_STACK_LINE(1006)
					{
						HX_STACK_LINE(1006)
						int tmp12 = (int(pixel) >> int((int)16));		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(1006)
						int tmp13 = (int(tmp12) & int((int)255));		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(1006)
						int val = tmp13;		HX_STACK_VAR(val,"val");
						HX_STACK_LINE(1006)
						::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)1))),val);
						HX_STACK_LINE(1006)
						val;
					}
					HX_STACK_LINE(1006)
					{
						HX_STACK_LINE(1006)
						int tmp12 = (int(pixel) >> int((int)24));		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(1006)
						int tmp13 = (int(tmp12) & int((int)255));		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(1006)
						int val = tmp13;		HX_STACK_VAR(val,"val");
						HX_STACK_LINE(1006)
						::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)2))),val);
						HX_STACK_LINE(1006)
						val;
					}
					HX_STACK_LINE(1006)
					{
						HX_STACK_LINE(1006)
						int tmp12 = (int(pixel) & int((int)255));		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(1006)
						int val = tmp12;		HX_STACK_VAR(val,"val");
						HX_STACK_LINE(1006)
						::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)3))),val);
						HX_STACK_LINE(1006)
						val;
					}
				}
				;break;
				case (int)0: {
					HX_STACK_LINE(1006)
					{
						HX_STACK_LINE(1006)
						int tmp12 = (int(pixel) >> int((int)24));		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(1006)
						int tmp13 = (int(tmp12) & int((int)255));		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(1006)
						int val = tmp13;		HX_STACK_VAR(val,"val");
						HX_STACK_LINE(1006)
						::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + offset),val);
						HX_STACK_LINE(1006)
						val;
					}
					HX_STACK_LINE(1006)
					{
						HX_STACK_LINE(1006)
						int tmp12 = (int(pixel) >> int((int)16));		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(1006)
						int tmp13 = (int(tmp12) & int((int)255));		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(1006)
						int val = tmp13;		HX_STACK_VAR(val,"val");
						HX_STACK_LINE(1006)
						::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)1))),val);
						HX_STACK_LINE(1006)
						val;
					}
					HX_STACK_LINE(1006)
					{
						HX_STACK_LINE(1006)
						int tmp12 = (int(pixel) >> int((int)8));		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(1006)
						int tmp13 = (int(tmp12) & int((int)255));		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(1006)
						int val = tmp13;		HX_STACK_VAR(val,"val");
						HX_STACK_LINE(1006)
						::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)2))),val);
						HX_STACK_LINE(1006)
						val;
					}
					HX_STACK_LINE(1006)
					{
						HX_STACK_LINE(1006)
						int tmp12 = (int(pixel) & int((int)255));		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(1006)
						int val = tmp12;		HX_STACK_VAR(val,"val");
						HX_STACK_LINE(1006)
						::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)3))),val);
						HX_STACK_LINE(1006)
						val;
					}
				}
				;break;
				case (int)1: {
					HX_STACK_LINE(1006)
					{
						HX_STACK_LINE(1006)
						int tmp12 = (int(pixel) & int((int)255));		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(1006)
						int val = tmp12;		HX_STACK_VAR(val,"val");
						HX_STACK_LINE(1006)
						::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + offset),val);
						HX_STACK_LINE(1006)
						val;
					}
					HX_STACK_LINE(1006)
					{
						HX_STACK_LINE(1006)
						int tmp12 = (int(pixel) >> int((int)24));		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(1006)
						int tmp13 = (int(tmp12) & int((int)255));		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(1006)
						int val = tmp13;		HX_STACK_VAR(val,"val");
						HX_STACK_LINE(1006)
						::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)1))),val);
						HX_STACK_LINE(1006)
						val;
					}
					HX_STACK_LINE(1006)
					{
						HX_STACK_LINE(1006)
						int tmp12 = (int(pixel) >> int((int)16));		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(1006)
						int tmp13 = (int(tmp12) & int((int)255));		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(1006)
						int val = tmp13;		HX_STACK_VAR(val,"val");
						HX_STACK_LINE(1006)
						::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)2))),val);
						HX_STACK_LINE(1006)
						val;
					}
					HX_STACK_LINE(1006)
					{
						HX_STACK_LINE(1006)
						int tmp12 = (int(pixel) >> int((int)8));		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(1006)
						int tmp13 = (int(tmp12) & int((int)255));		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(1006)
						int val = tmp13;		HX_STACK_VAR(val,"val");
						HX_STACK_LINE(1006)
						::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)3))),val);
						HX_STACK_LINE(1006)
						val;
					}
				}
				;break;
			}
		}
		HX_STACK_LINE(1008)
		image->dirty = true;
		HX_STACK_LINE(1009)
		(image->version)++;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(ImageDataUtil_obj,setPixel,(void))

Void ImageDataUtil_obj::setPixel32( ::lime::graphics::Image image,int x,int y,int color,int format){
{
		HX_STACK_FRAME("lime.graphics.utils.ImageDataUtil","setPixel32",0x2e222851,"lime.graphics.utils.ImageDataUtil.setPixel32","lime/graphics/utils/ImageDataUtil.hx",1014,0x494d921f)
		HX_STACK_ARG(image,"image")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(color,"color")
		HX_STACK_ARG(format,"format")
		HX_STACK_LINE(1016)
		int pixel;		HX_STACK_VAR(pixel,"pixel");
		HX_STACK_LINE(1018)
		int tmp = format;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1018)
		switch( (int)(tmp)){
			case (int)1: {
				HX_STACK_LINE(1020)
				int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(1020)
				{
					HX_STACK_LINE(1020)
					int argb = color;		HX_STACK_VAR(argb,"argb");
					HX_STACK_LINE(1020)
					{
						HX_STACK_LINE(1020)
						int tmp2;		HX_STACK_VAR(tmp2,"tmp2");
						HX_STACK_LINE(1020)
						{
							HX_STACK_LINE(1020)
							int rgba = (int)0;		HX_STACK_VAR(rgba,"rgba");
							HX_STACK_LINE(1020)
							tmp2 = rgba;
						}
						HX_STACK_LINE(1020)
						int rgba = tmp2;		HX_STACK_VAR(rgba,"rgba");
						HX_STACK_LINE(1020)
						{
							HX_STACK_LINE(1020)
							int tmp3 = (int(argb) >> int((int)16));		HX_STACK_VAR(tmp3,"tmp3");
							HX_STACK_LINE(1020)
							int tmp4 = (int(tmp3) & int((int)255));		HX_STACK_VAR(tmp4,"tmp4");
							HX_STACK_LINE(1020)
							int tmp5 = (int(tmp4) & int((int)255));		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(1020)
							int tmp6 = (int(tmp5) << int((int)24));		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(1020)
							int tmp7 = (int(argb) >> int((int)8));		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(1020)
							int tmp8 = (int(tmp7) & int((int)255));		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(1020)
							int tmp9 = (int(tmp8) & int((int)255));		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(1020)
							int tmp10 = (int(tmp9) << int((int)16));		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(1020)
							int tmp11 = (int(tmp6) | int(tmp10));		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(1020)
							int tmp12 = (int(argb) & int((int)255));		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(1020)
							int tmp13 = (int(tmp12) & int((int)255));		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(1020)
							int tmp14 = (int(tmp13) << int((int)8));		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(1020)
							int tmp15 = (int(tmp11) | int(tmp14));		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(1020)
							int tmp16 = (int(argb) >> int((int)24));		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(1020)
							int tmp17 = (int(tmp16) & int((int)255));		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(1020)
							int tmp18 = (int(tmp17) & int((int)255));		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(1020)
							int tmp19 = (int(tmp15) | int(tmp18));		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(1020)
							rgba = tmp19;
						}
						HX_STACK_LINE(1020)
						tmp1 = rgba;
					}
				}
				HX_STACK_LINE(1020)
				pixel = tmp1;
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(1021)
				int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(1021)
				{
					HX_STACK_LINE(1021)
					int bgra = color;		HX_STACK_VAR(bgra,"bgra");
					HX_STACK_LINE(1021)
					{
						HX_STACK_LINE(1021)
						int tmp2;		HX_STACK_VAR(tmp2,"tmp2");
						HX_STACK_LINE(1021)
						{
							HX_STACK_LINE(1021)
							int rgba = (int)0;		HX_STACK_VAR(rgba,"rgba");
							HX_STACK_LINE(1021)
							tmp2 = rgba;
						}
						HX_STACK_LINE(1021)
						int rgba = tmp2;		HX_STACK_VAR(rgba,"rgba");
						HX_STACK_LINE(1021)
						{
							HX_STACK_LINE(1021)
							int tmp3 = (int(bgra) >> int((int)8));		HX_STACK_VAR(tmp3,"tmp3");
							HX_STACK_LINE(1021)
							int tmp4 = (int(tmp3) & int((int)255));		HX_STACK_VAR(tmp4,"tmp4");
							HX_STACK_LINE(1021)
							int tmp5 = (int(tmp4) & int((int)255));		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(1021)
							int tmp6 = (int(tmp5) << int((int)24));		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(1021)
							int tmp7 = (int(bgra) >> int((int)16));		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(1021)
							int tmp8 = (int(tmp7) & int((int)255));		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(1021)
							int tmp9 = (int(tmp8) & int((int)255));		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(1021)
							int tmp10 = (int(tmp9) << int((int)16));		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(1021)
							int tmp11 = (int(tmp6) | int(tmp10));		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(1021)
							int tmp12 = (int(bgra) >> int((int)24));		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(1021)
							int tmp13 = (int(tmp12) & int((int)255));		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(1021)
							int tmp14 = (int(tmp13) & int((int)255));		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(1021)
							int tmp15 = (int(tmp14) << int((int)8));		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(1021)
							int tmp16 = (int(tmp11) | int(tmp15));		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(1021)
							int tmp17 = (int(bgra) & int((int)255));		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(1021)
							int tmp18 = (int(tmp17) & int((int)255));		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(1021)
							int tmp19 = (int(tmp16) | int(tmp18));		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(1021)
							rgba = tmp19;
						}
						HX_STACK_LINE(1021)
						tmp1 = rgba;
					}
				}
				HX_STACK_LINE(1021)
				pixel = tmp1;
			}
			;break;
			default: {
				HX_STACK_LINE(1022)
				pixel = color;
			}
		}
		HX_STACK_LINE(1026)
		bool tmp1 = image->get_transparent();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1026)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1026)
		if ((tmp2)){
			HX_STACK_LINE(1026)
			{
				HX_STACK_LINE(1026)
				int tmp3 = (int(pixel) >> int((int)24));		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(1026)
				int tmp4 = (int(tmp3) & int((int)255));		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(1026)
				int tmp5 = (int(tmp4) & int((int)255));		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1026)
				int tmp6 = (int(tmp5) << int((int)24));		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1026)
				int tmp7 = (int(pixel) >> int((int)16));		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1026)
				int tmp8 = (int(tmp7) & int((int)255));		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1026)
				int tmp9 = (int(tmp8) & int((int)255));		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1026)
				int tmp10 = (int(tmp9) << int((int)16));		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(1026)
				int tmp11 = (int(tmp6) | int(tmp10));		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(1026)
				int tmp12 = (int(pixel) >> int((int)8));		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(1026)
				int tmp13 = (int(tmp12) & int((int)255));		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(1026)
				int tmp14 = (int(tmp13) & int((int)255));		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(1026)
				int tmp15 = (int(tmp14) << int((int)8));		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(1026)
				int tmp16 = (int(tmp11) | int(tmp15));		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(1026)
				int tmp17 = (int)255;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(1026)
				int tmp18 = (int(tmp16) | int(tmp17));		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(1026)
				pixel = tmp18;
			}
			HX_STACK_LINE(1026)
			(int)255;
		}
		HX_STACK_LINE(1027)
		{
			HX_STACK_LINE(1027)
			::lime::utils::ArrayBufferView tmp3 = image->buffer->data;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1027)
			::lime::utils::ArrayBufferView data = tmp3;		HX_STACK_VAR(data,"data");
			HX_STACK_LINE(1027)
			int tmp4 = (y + image->offsetY);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1027)
			int tmp5 = ((int)4 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1027)
			int tmp6 = image->buffer->width;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1027)
			int tmp7 = (tmp5 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1027)
			int tmp8 = (x + image->offsetX);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1027)
			int tmp9 = (tmp8 * (int)4);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1027)
			int tmp10 = (tmp7 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1027)
			int offset = tmp10;		HX_STACK_VAR(offset,"offset");
			HX_STACK_LINE(1027)
			bool tmp11 = image->buffer->premultiplied;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(1027)
			if ((tmp11)){
				HX_STACK_LINE(1027)
				int tmp12 = (int(pixel) & int((int)255));		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(1027)
				bool tmp13 = (tmp12 == (int)0);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(1027)
				if ((tmp13)){
					HX_STACK_LINE(1027)
					bool tmp14 = (pixel != (int)0);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(1027)
					if ((tmp14)){
						HX_STACK_LINE(1027)
						pixel = (int)0;
					}
				}
				else{
					HX_STACK_LINE(1027)
					int tmp14 = (int(pixel) & int((int)255));		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(1027)
					bool tmp15 = (tmp14 != (int)255);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(1027)
					if ((tmp15)){
						HX_STACK_LINE(1027)
						Dynamic tmp16;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(1027)
						{
							HX_STACK_LINE(1027)
							::lime::utils::ArrayBufferView tmp17 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__alpha16;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(1027)
							::lime::utils::ArrayBufferView this1 = tmp17;		HX_STACK_VAR(this1,"this1");
							HX_STACK_LINE(1027)
							tmp16 = ::__hxcpp_memory_get_ui32(this1->buffer->b,(this1->byteOffset + (((int(pixel) & int((int)255))) * (int)4)));
						}
						HX_STACK_LINE(1027)
						::lime::math::color::_RGBA::RGBA_Impl__obj::a16 = tmp16;
						HX_STACK_LINE(1027)
						{
							HX_STACK_LINE(1027)
							int tmp17 = (int(pixel) >> int((int)24));		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(1027)
							int tmp18 = (int(tmp17) & int((int)255));		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(1027)
							int tmp19 = ::lime::math::color::_RGBA::RGBA_Impl__obj::a16;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(1027)
							int tmp20 = (tmp18 * tmp19);		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(1027)
							int tmp21 = (int(tmp20) >> int((int)16));		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(1027)
							int tmp22 = (int(tmp21) & int((int)255));		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(1027)
							int tmp23 = (int(tmp22) << int((int)24));		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(1027)
							int tmp24 = (int(pixel) >> int((int)16));		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(1027)
							int tmp25 = (int(tmp24) & int((int)255));		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(1027)
							int tmp26 = ::lime::math::color::_RGBA::RGBA_Impl__obj::a16;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(1027)
							int tmp27 = (tmp25 * tmp26);		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(1027)
							int tmp28 = (int(tmp27) >> int((int)16));		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(1027)
							int tmp29 = (int(tmp28) & int((int)255));		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(1027)
							int tmp30 = (int(tmp29) << int((int)16));		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(1027)
							int tmp31 = (int(tmp23) | int(tmp30));		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(1027)
							int tmp32 = (int(pixel) >> int((int)8));		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(1027)
							int tmp33 = (int(tmp32) & int((int)255));		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(1027)
							int tmp34 = ::lime::math::color::_RGBA::RGBA_Impl__obj::a16;		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(1027)
							int tmp35 = (tmp33 * tmp34);		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(1027)
							int tmp36 = (int(tmp35) >> int((int)16));		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(1027)
							int tmp37 = (int(tmp36) & int((int)255));		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(1027)
							int tmp38 = (int(tmp37) << int((int)8));		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(1027)
							int tmp39 = (int(tmp31) | int(tmp38));		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(1027)
							int tmp40 = (int(pixel) & int((int)255));		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(1027)
							int tmp41 = (int(tmp40) & int((int)255));		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(1027)
							int tmp42 = (int(tmp39) | int(tmp41));		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(1027)
							pixel = tmp42;
						}
					}
				}
			}
			HX_STACK_LINE(1027)
			int tmp12 = image->buffer->format;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1027)
			switch( (int)(tmp12)){
				case (int)2: {
					HX_STACK_LINE(1027)
					{
						HX_STACK_LINE(1027)
						int tmp13 = (int(pixel) >> int((int)8));		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(1027)
						int tmp14 = (int(tmp13) & int((int)255));		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(1027)
						int val = tmp14;		HX_STACK_VAR(val,"val");
						HX_STACK_LINE(1027)
						::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + offset),val);
						HX_STACK_LINE(1027)
						val;
					}
					HX_STACK_LINE(1027)
					{
						HX_STACK_LINE(1027)
						int tmp13 = (int(pixel) >> int((int)16));		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(1027)
						int tmp14 = (int(tmp13) & int((int)255));		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(1027)
						int val = tmp14;		HX_STACK_VAR(val,"val");
						HX_STACK_LINE(1027)
						::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)1))),val);
						HX_STACK_LINE(1027)
						val;
					}
					HX_STACK_LINE(1027)
					{
						HX_STACK_LINE(1027)
						int tmp13 = (int(pixel) >> int((int)24));		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(1027)
						int tmp14 = (int(tmp13) & int((int)255));		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(1027)
						int val = tmp14;		HX_STACK_VAR(val,"val");
						HX_STACK_LINE(1027)
						::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)2))),val);
						HX_STACK_LINE(1027)
						val;
					}
					HX_STACK_LINE(1027)
					{
						HX_STACK_LINE(1027)
						int tmp13 = (int(pixel) & int((int)255));		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(1027)
						int val = tmp13;		HX_STACK_VAR(val,"val");
						HX_STACK_LINE(1027)
						::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)3))),val);
						HX_STACK_LINE(1027)
						val;
					}
				}
				;break;
				case (int)0: {
					HX_STACK_LINE(1027)
					{
						HX_STACK_LINE(1027)
						int tmp13 = (int(pixel) >> int((int)24));		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(1027)
						int tmp14 = (int(tmp13) & int((int)255));		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(1027)
						int val = tmp14;		HX_STACK_VAR(val,"val");
						HX_STACK_LINE(1027)
						::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + offset),val);
						HX_STACK_LINE(1027)
						val;
					}
					HX_STACK_LINE(1027)
					{
						HX_STACK_LINE(1027)
						int tmp13 = (int(pixel) >> int((int)16));		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(1027)
						int tmp14 = (int(tmp13) & int((int)255));		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(1027)
						int val = tmp14;		HX_STACK_VAR(val,"val");
						HX_STACK_LINE(1027)
						::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)1))),val);
						HX_STACK_LINE(1027)
						val;
					}
					HX_STACK_LINE(1027)
					{
						HX_STACK_LINE(1027)
						int tmp13 = (int(pixel) >> int((int)8));		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(1027)
						int tmp14 = (int(tmp13) & int((int)255));		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(1027)
						int val = tmp14;		HX_STACK_VAR(val,"val");
						HX_STACK_LINE(1027)
						::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)2))),val);
						HX_STACK_LINE(1027)
						val;
					}
					HX_STACK_LINE(1027)
					{
						HX_STACK_LINE(1027)
						int tmp13 = (int(pixel) & int((int)255));		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(1027)
						int val = tmp13;		HX_STACK_VAR(val,"val");
						HX_STACK_LINE(1027)
						::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)3))),val);
						HX_STACK_LINE(1027)
						val;
					}
				}
				;break;
				case (int)1: {
					HX_STACK_LINE(1027)
					{
						HX_STACK_LINE(1027)
						int tmp13 = (int(pixel) & int((int)255));		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(1027)
						int val = tmp13;		HX_STACK_VAR(val,"val");
						HX_STACK_LINE(1027)
						::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + offset),val);
						HX_STACK_LINE(1027)
						val;
					}
					HX_STACK_LINE(1027)
					{
						HX_STACK_LINE(1027)
						int tmp13 = (int(pixel) >> int((int)24));		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(1027)
						int tmp14 = (int(tmp13) & int((int)255));		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(1027)
						int val = tmp14;		HX_STACK_VAR(val,"val");
						HX_STACK_LINE(1027)
						::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)1))),val);
						HX_STACK_LINE(1027)
						val;
					}
					HX_STACK_LINE(1027)
					{
						HX_STACK_LINE(1027)
						int tmp13 = (int(pixel) >> int((int)16));		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(1027)
						int tmp14 = (int(tmp13) & int((int)255));		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(1027)
						int val = tmp14;		HX_STACK_VAR(val,"val");
						HX_STACK_LINE(1027)
						::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)2))),val);
						HX_STACK_LINE(1027)
						val;
					}
					HX_STACK_LINE(1027)
					{
						HX_STACK_LINE(1027)
						int tmp13 = (int(pixel) >> int((int)8));		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(1027)
						int tmp14 = (int(tmp13) & int((int)255));		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(1027)
						int val = tmp14;		HX_STACK_VAR(val,"val");
						HX_STACK_LINE(1027)
						::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)3))),val);
						HX_STACK_LINE(1027)
						val;
					}
				}
				;break;
			}
		}
		HX_STACK_LINE(1029)
		image->dirty = true;
		HX_STACK_LINE(1030)
		(image->version)++;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(ImageDataUtil_obj,setPixel32,(void))

Void ImageDataUtil_obj::setPixels( ::lime::graphics::Image image,::lime::math::Rectangle rect,::haxe::io::Bytes bytes,int format){
{
		HX_STACK_FRAME("lime.graphics.utils.ImageDataUtil","setPixels",0x8e8e8101,"lime.graphics.utils.ImageDataUtil.setPixels","lime/graphics/utils/ImageDataUtil.hx",1035,0x494d921f)
		HX_STACK_ARG(image,"image")
		HX_STACK_ARG(rect,"rect")
		HX_STACK_ARG(bytes,"bytes")
		HX_STACK_ARG(format,"format")
		HX_STACK_LINE(1037)
		::lime::utils::ArrayBufferView tmp = image->buffer->data;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1037)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1037)
		if ((tmp1)){
			HX_STACK_LINE(1037)
			return null();
		}
		HX_STACK_LINE(1040)
		bool tmp2 = ::lime::_system::CFFI_obj::enabled;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1040)
		if ((tmp2)){
			HX_STACK_LINE(1040)
			::lime::graphics::utils::ImageDataUtil_obj::cffi_lime_image_data_util_set_pixels.call(hx::DynamicPtr(image),hx::DynamicPtr(rect),hx::DynamicPtr(bytes),format);
		}
		else{
			HX_STACK_LINE(1044)
			::lime::utils::ArrayBufferView tmp3 = image->buffer->data;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1044)
			::lime::utils::ArrayBufferView data = tmp3;		HX_STACK_VAR(data,"data");
			HX_STACK_LINE(1045)
			int tmp4 = image->buffer->format;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1045)
			int sourceFormat = tmp4;		HX_STACK_VAR(sourceFormat,"sourceFormat");
			HX_STACK_LINE(1046)
			bool tmp5 = image->buffer->premultiplied;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1046)
			bool premultiplied = tmp5;		HX_STACK_VAR(premultiplied,"premultiplied");
			HX_STACK_LINE(1047)
			::lime::graphics::utils::_ImageDataUtil::ImageDataView tmp6 = ::lime::graphics::utils::_ImageDataUtil::ImageDataView_obj::__new(image,rect);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1047)
			::lime::graphics::utils::_ImageDataUtil::ImageDataView dataView = tmp6;		HX_STACK_VAR(dataView,"dataView");
			HX_STACK_LINE(1048)
			int row;		HX_STACK_VAR(row,"row");
			HX_STACK_LINE(1048)
			int color;		HX_STACK_VAR(color,"color");
			HX_STACK_LINE(1048)
			int pixel;		HX_STACK_VAR(pixel,"pixel");
			HX_STACK_LINE(1049)
			bool tmp7 = image->get_transparent();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1049)
			bool transparent = tmp7;		HX_STACK_VAR(transparent,"transparent");
			HX_STACK_LINE(1050)
			int dataPosition = (int)0;		HX_STACK_VAR(dataPosition,"dataPosition");
			HX_STACK_LINE(1052)
			{
				HX_STACK_LINE(1052)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(1052)
				int _g = dataView->height;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(1052)
				while((true)){
					HX_STACK_LINE(1052)
					bool tmp8 = (_g1 < _g);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(1052)
					bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(1052)
					if ((tmp9)){
						HX_STACK_LINE(1052)
						break;
					}
					HX_STACK_LINE(1052)
					int tmp10 = (_g1)++;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(1052)
					int y = tmp10;		HX_STACK_VAR(y,"y");
					HX_STACK_LINE(1054)
					int tmp11 = dataView->offset;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(1054)
					int tmp12 = (dataView->stride * y);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(1054)
					int tmp13 = (tmp11 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(1054)
					row = tmp13;
					HX_STACK_LINE(1056)
					{
						HX_STACK_LINE(1056)
						int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
						HX_STACK_LINE(1056)
						int _g2 = dataView->width;		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(1056)
						while((true)){
							HX_STACK_LINE(1056)
							bool tmp14 = (_g3 < _g2);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(1056)
							bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(1056)
							if ((tmp15)){
								HX_STACK_LINE(1056)
								break;
							}
							HX_STACK_LINE(1056)
							int tmp16 = (_g3)++;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(1056)
							int x = tmp16;		HX_STACK_VAR(x,"x");
							HX_STACK_LINE(1059)
							int tmp17 = (dataPosition + (int)3);		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(1059)
							int tmp18 = bytes->b->__get(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(1059)
							int tmp19 = (dataPosition + (int)2);		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(1059)
							int tmp20 = bytes->b->__get(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(1059)
							int tmp21 = (int(tmp20) << int((int)8));		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(1059)
							int tmp22 = (int(tmp18) | int(tmp21));		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(1059)
							int tmp23 = (dataPosition + (int)1);		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(1059)
							int tmp24 = bytes->b->__get(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(1059)
							int tmp25 = (int(tmp24) << int((int)16));		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(1059)
							int tmp26 = (int(tmp22) | int(tmp25));		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(1059)
							int tmp27 = bytes->b->__get(dataPosition);		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(1059)
							int tmp28 = (int(tmp27) << int((int)24));		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(1059)
							int tmp29 = (int(tmp26) | int(tmp28));		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(1059)
							color = tmp29;
							HX_STACK_LINE(1060)
							hx::AddEq(dataPosition,(int)4);
							HX_STACK_LINE(1062)
							int tmp30 = format;		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(1062)
							switch( (int)(tmp30)){
								case (int)1: {
									HX_STACK_LINE(1064)
									int tmp31;		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(1064)
									{
										HX_STACK_LINE(1064)
										int argb = color;		HX_STACK_VAR(argb,"argb");
										HX_STACK_LINE(1064)
										{
											HX_STACK_LINE(1064)
											int tmp32;		HX_STACK_VAR(tmp32,"tmp32");
											HX_STACK_LINE(1064)
											{
												HX_STACK_LINE(1064)
												int rgba = (int)0;		HX_STACK_VAR(rgba,"rgba");
												HX_STACK_LINE(1064)
												tmp32 = rgba;
											}
											HX_STACK_LINE(1064)
											int rgba = tmp32;		HX_STACK_VAR(rgba,"rgba");
											HX_STACK_LINE(1064)
											{
												HX_STACK_LINE(1064)
												int tmp33 = (int(argb) >> int((int)16));		HX_STACK_VAR(tmp33,"tmp33");
												HX_STACK_LINE(1064)
												int tmp34 = (int(tmp33) & int((int)255));		HX_STACK_VAR(tmp34,"tmp34");
												HX_STACK_LINE(1064)
												int tmp35 = (int(tmp34) & int((int)255));		HX_STACK_VAR(tmp35,"tmp35");
												HX_STACK_LINE(1064)
												int tmp36 = (int(tmp35) << int((int)24));		HX_STACK_VAR(tmp36,"tmp36");
												HX_STACK_LINE(1064)
												int tmp37 = (int(argb) >> int((int)8));		HX_STACK_VAR(tmp37,"tmp37");
												HX_STACK_LINE(1064)
												int tmp38 = (int(tmp37) & int((int)255));		HX_STACK_VAR(tmp38,"tmp38");
												HX_STACK_LINE(1064)
												int tmp39 = (int(tmp38) & int((int)255));		HX_STACK_VAR(tmp39,"tmp39");
												HX_STACK_LINE(1064)
												int tmp40 = (int(tmp39) << int((int)16));		HX_STACK_VAR(tmp40,"tmp40");
												HX_STACK_LINE(1064)
												int tmp41 = (int(tmp36) | int(tmp40));		HX_STACK_VAR(tmp41,"tmp41");
												HX_STACK_LINE(1064)
												int tmp42 = (int(argb) & int((int)255));		HX_STACK_VAR(tmp42,"tmp42");
												HX_STACK_LINE(1064)
												int tmp43 = (int(tmp42) & int((int)255));		HX_STACK_VAR(tmp43,"tmp43");
												HX_STACK_LINE(1064)
												int tmp44 = (int(tmp43) << int((int)8));		HX_STACK_VAR(tmp44,"tmp44");
												HX_STACK_LINE(1064)
												int tmp45 = (int(tmp41) | int(tmp44));		HX_STACK_VAR(tmp45,"tmp45");
												HX_STACK_LINE(1064)
												int tmp46 = (int(argb) >> int((int)24));		HX_STACK_VAR(tmp46,"tmp46");
												HX_STACK_LINE(1064)
												int tmp47 = (int(tmp46) & int((int)255));		HX_STACK_VAR(tmp47,"tmp47");
												HX_STACK_LINE(1064)
												int tmp48 = (int(tmp47) & int((int)255));		HX_STACK_VAR(tmp48,"tmp48");
												HX_STACK_LINE(1064)
												int tmp49 = (int(tmp45) | int(tmp48));		HX_STACK_VAR(tmp49,"tmp49");
												HX_STACK_LINE(1064)
												rgba = tmp49;
											}
											HX_STACK_LINE(1064)
											tmp31 = rgba;
										}
									}
									HX_STACK_LINE(1064)
									pixel = tmp31;
								}
								;break;
								case (int)2: {
									HX_STACK_LINE(1065)
									int tmp31;		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(1065)
									{
										HX_STACK_LINE(1065)
										int bgra = color;		HX_STACK_VAR(bgra,"bgra");
										HX_STACK_LINE(1065)
										{
											HX_STACK_LINE(1065)
											int tmp32;		HX_STACK_VAR(tmp32,"tmp32");
											HX_STACK_LINE(1065)
											{
												HX_STACK_LINE(1065)
												int rgba = (int)0;		HX_STACK_VAR(rgba,"rgba");
												HX_STACK_LINE(1065)
												tmp32 = rgba;
											}
											HX_STACK_LINE(1065)
											int rgba = tmp32;		HX_STACK_VAR(rgba,"rgba");
											HX_STACK_LINE(1065)
											{
												HX_STACK_LINE(1065)
												int tmp33 = (int(bgra) >> int((int)8));		HX_STACK_VAR(tmp33,"tmp33");
												HX_STACK_LINE(1065)
												int tmp34 = (int(tmp33) & int((int)255));		HX_STACK_VAR(tmp34,"tmp34");
												HX_STACK_LINE(1065)
												int tmp35 = (int(tmp34) & int((int)255));		HX_STACK_VAR(tmp35,"tmp35");
												HX_STACK_LINE(1065)
												int tmp36 = (int(tmp35) << int((int)24));		HX_STACK_VAR(tmp36,"tmp36");
												HX_STACK_LINE(1065)
												int tmp37 = (int(bgra) >> int((int)16));		HX_STACK_VAR(tmp37,"tmp37");
												HX_STACK_LINE(1065)
												int tmp38 = (int(tmp37) & int((int)255));		HX_STACK_VAR(tmp38,"tmp38");
												HX_STACK_LINE(1065)
												int tmp39 = (int(tmp38) & int((int)255));		HX_STACK_VAR(tmp39,"tmp39");
												HX_STACK_LINE(1065)
												int tmp40 = (int(tmp39) << int((int)16));		HX_STACK_VAR(tmp40,"tmp40");
												HX_STACK_LINE(1065)
												int tmp41 = (int(tmp36) | int(tmp40));		HX_STACK_VAR(tmp41,"tmp41");
												HX_STACK_LINE(1065)
												int tmp42 = (int(bgra) >> int((int)24));		HX_STACK_VAR(tmp42,"tmp42");
												HX_STACK_LINE(1065)
												int tmp43 = (int(tmp42) & int((int)255));		HX_STACK_VAR(tmp43,"tmp43");
												HX_STACK_LINE(1065)
												int tmp44 = (int(tmp43) & int((int)255));		HX_STACK_VAR(tmp44,"tmp44");
												HX_STACK_LINE(1065)
												int tmp45 = (int(tmp44) << int((int)8));		HX_STACK_VAR(tmp45,"tmp45");
												HX_STACK_LINE(1065)
												int tmp46 = (int(tmp41) | int(tmp45));		HX_STACK_VAR(tmp46,"tmp46");
												HX_STACK_LINE(1065)
												int tmp47 = (int(bgra) & int((int)255));		HX_STACK_VAR(tmp47,"tmp47");
												HX_STACK_LINE(1065)
												int tmp48 = (int(tmp47) & int((int)255));		HX_STACK_VAR(tmp48,"tmp48");
												HX_STACK_LINE(1065)
												int tmp49 = (int(tmp46) | int(tmp48));		HX_STACK_VAR(tmp49,"tmp49");
												HX_STACK_LINE(1065)
												rgba = tmp49;
											}
											HX_STACK_LINE(1065)
											tmp31 = rgba;
										}
									}
									HX_STACK_LINE(1065)
									pixel = tmp31;
								}
								;break;
								default: {
									HX_STACK_LINE(1066)
									pixel = color;
								}
							}
							HX_STACK_LINE(1070)
							bool tmp31 = transparent;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(1070)
							bool tmp32 = !(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(1070)
							if ((tmp32)){
								HX_STACK_LINE(1070)
								{
									HX_STACK_LINE(1070)
									int tmp33 = (int(pixel) >> int((int)24));		HX_STACK_VAR(tmp33,"tmp33");
									HX_STACK_LINE(1070)
									int tmp34 = (int(tmp33) & int((int)255));		HX_STACK_VAR(tmp34,"tmp34");
									HX_STACK_LINE(1070)
									int tmp35 = (int(tmp34) & int((int)255));		HX_STACK_VAR(tmp35,"tmp35");
									HX_STACK_LINE(1070)
									int tmp36 = (int(tmp35) << int((int)24));		HX_STACK_VAR(tmp36,"tmp36");
									HX_STACK_LINE(1070)
									int tmp37 = (int(pixel) >> int((int)16));		HX_STACK_VAR(tmp37,"tmp37");
									HX_STACK_LINE(1070)
									int tmp38 = (int(tmp37) & int((int)255));		HX_STACK_VAR(tmp38,"tmp38");
									HX_STACK_LINE(1070)
									int tmp39 = (int(tmp38) & int((int)255));		HX_STACK_VAR(tmp39,"tmp39");
									HX_STACK_LINE(1070)
									int tmp40 = (int(tmp39) << int((int)16));		HX_STACK_VAR(tmp40,"tmp40");
									HX_STACK_LINE(1070)
									int tmp41 = (int(tmp36) | int(tmp40));		HX_STACK_VAR(tmp41,"tmp41");
									HX_STACK_LINE(1070)
									int tmp42 = (int(pixel) >> int((int)8));		HX_STACK_VAR(tmp42,"tmp42");
									HX_STACK_LINE(1070)
									int tmp43 = (int(tmp42) & int((int)255));		HX_STACK_VAR(tmp43,"tmp43");
									HX_STACK_LINE(1070)
									int tmp44 = (int(tmp43) & int((int)255));		HX_STACK_VAR(tmp44,"tmp44");
									HX_STACK_LINE(1070)
									int tmp45 = (int(tmp44) << int((int)8));		HX_STACK_VAR(tmp45,"tmp45");
									HX_STACK_LINE(1070)
									int tmp46 = (int(tmp41) | int(tmp45));		HX_STACK_VAR(tmp46,"tmp46");
									HX_STACK_LINE(1070)
									int tmp47 = (int)255;		HX_STACK_VAR(tmp47,"tmp47");
									HX_STACK_LINE(1070)
									int tmp48 = (int(tmp46) | int(tmp47));		HX_STACK_VAR(tmp48,"tmp48");
									HX_STACK_LINE(1070)
									pixel = tmp48;
								}
								HX_STACK_LINE(1070)
								(int)255;
							}
							HX_STACK_LINE(1071)
							{
								HX_STACK_LINE(1071)
								int tmp33 = row;		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(1071)
								int tmp34 = (x * (int)4);		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(1071)
								int tmp35 = (tmp33 + tmp34);		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(1071)
								int offset = tmp35;		HX_STACK_VAR(offset,"offset");
								HX_STACK_LINE(1071)
								bool tmp36 = premultiplied;		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(1071)
								if ((tmp36)){
									HX_STACK_LINE(1071)
									int tmp37 = (int(pixel) & int((int)255));		HX_STACK_VAR(tmp37,"tmp37");
									HX_STACK_LINE(1071)
									bool tmp38 = (tmp37 == (int)0);		HX_STACK_VAR(tmp38,"tmp38");
									HX_STACK_LINE(1071)
									if ((tmp38)){
										HX_STACK_LINE(1071)
										bool tmp39 = (pixel != (int)0);		HX_STACK_VAR(tmp39,"tmp39");
										HX_STACK_LINE(1071)
										if ((tmp39)){
											HX_STACK_LINE(1071)
											pixel = (int)0;
										}
									}
									else{
										HX_STACK_LINE(1071)
										int tmp39 = (int(pixel) & int((int)255));		HX_STACK_VAR(tmp39,"tmp39");
										HX_STACK_LINE(1071)
										bool tmp40 = (tmp39 != (int)255);		HX_STACK_VAR(tmp40,"tmp40");
										HX_STACK_LINE(1071)
										if ((tmp40)){
											HX_STACK_LINE(1071)
											Dynamic tmp41;		HX_STACK_VAR(tmp41,"tmp41");
											HX_STACK_LINE(1071)
											{
												HX_STACK_LINE(1071)
												::lime::utils::ArrayBufferView tmp42 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__alpha16;		HX_STACK_VAR(tmp42,"tmp42");
												HX_STACK_LINE(1071)
												::lime::utils::ArrayBufferView this1 = tmp42;		HX_STACK_VAR(this1,"this1");
												HX_STACK_LINE(1071)
												tmp41 = ::__hxcpp_memory_get_ui32(this1->buffer->b,(this1->byteOffset + (((int(pixel) & int((int)255))) * (int)4)));
											}
											HX_STACK_LINE(1071)
											::lime::math::color::_RGBA::RGBA_Impl__obj::a16 = tmp41;
											HX_STACK_LINE(1071)
											{
												HX_STACK_LINE(1071)
												int tmp42 = (int(pixel) >> int((int)24));		HX_STACK_VAR(tmp42,"tmp42");
												HX_STACK_LINE(1071)
												int tmp43 = (int(tmp42) & int((int)255));		HX_STACK_VAR(tmp43,"tmp43");
												HX_STACK_LINE(1071)
												int tmp44 = ::lime::math::color::_RGBA::RGBA_Impl__obj::a16;		HX_STACK_VAR(tmp44,"tmp44");
												HX_STACK_LINE(1071)
												int tmp45 = (tmp43 * tmp44);		HX_STACK_VAR(tmp45,"tmp45");
												HX_STACK_LINE(1071)
												int tmp46 = (int(tmp45) >> int((int)16));		HX_STACK_VAR(tmp46,"tmp46");
												HX_STACK_LINE(1071)
												int tmp47 = (int(tmp46) & int((int)255));		HX_STACK_VAR(tmp47,"tmp47");
												HX_STACK_LINE(1071)
												int tmp48 = (int(tmp47) << int((int)24));		HX_STACK_VAR(tmp48,"tmp48");
												HX_STACK_LINE(1071)
												int tmp49 = (int(pixel) >> int((int)16));		HX_STACK_VAR(tmp49,"tmp49");
												HX_STACK_LINE(1071)
												int tmp50 = (int(tmp49) & int((int)255));		HX_STACK_VAR(tmp50,"tmp50");
												HX_STACK_LINE(1071)
												int tmp51 = ::lime::math::color::_RGBA::RGBA_Impl__obj::a16;		HX_STACK_VAR(tmp51,"tmp51");
												HX_STACK_LINE(1071)
												int tmp52 = (tmp50 * tmp51);		HX_STACK_VAR(tmp52,"tmp52");
												HX_STACK_LINE(1071)
												int tmp53 = (int(tmp52) >> int((int)16));		HX_STACK_VAR(tmp53,"tmp53");
												HX_STACK_LINE(1071)
												int tmp54 = (int(tmp53) & int((int)255));		HX_STACK_VAR(tmp54,"tmp54");
												HX_STACK_LINE(1071)
												int tmp55 = (int(tmp54) << int((int)16));		HX_STACK_VAR(tmp55,"tmp55");
												HX_STACK_LINE(1071)
												int tmp56 = (int(tmp48) | int(tmp55));		HX_STACK_VAR(tmp56,"tmp56");
												HX_STACK_LINE(1071)
												int tmp57 = (int(pixel) >> int((int)8));		HX_STACK_VAR(tmp57,"tmp57");
												HX_STACK_LINE(1071)
												int tmp58 = (int(tmp57) & int((int)255));		HX_STACK_VAR(tmp58,"tmp58");
												HX_STACK_LINE(1071)
												int tmp59 = ::lime::math::color::_RGBA::RGBA_Impl__obj::a16;		HX_STACK_VAR(tmp59,"tmp59");
												HX_STACK_LINE(1071)
												int tmp60 = (tmp58 * tmp59);		HX_STACK_VAR(tmp60,"tmp60");
												HX_STACK_LINE(1071)
												int tmp61 = (int(tmp60) >> int((int)16));		HX_STACK_VAR(tmp61,"tmp61");
												HX_STACK_LINE(1071)
												int tmp62 = (int(tmp61) & int((int)255));		HX_STACK_VAR(tmp62,"tmp62");
												HX_STACK_LINE(1071)
												int tmp63 = (int(tmp62) << int((int)8));		HX_STACK_VAR(tmp63,"tmp63");
												HX_STACK_LINE(1071)
												int tmp64 = (int(tmp56) | int(tmp63));		HX_STACK_VAR(tmp64,"tmp64");
												HX_STACK_LINE(1071)
												int tmp65 = (int(pixel) & int((int)255));		HX_STACK_VAR(tmp65,"tmp65");
												HX_STACK_LINE(1071)
												int tmp66 = (int(tmp65) & int((int)255));		HX_STACK_VAR(tmp66,"tmp66");
												HX_STACK_LINE(1071)
												int tmp67 = (int(tmp64) | int(tmp66));		HX_STACK_VAR(tmp67,"tmp67");
												HX_STACK_LINE(1071)
												pixel = tmp67;
											}
										}
									}
								}
								HX_STACK_LINE(1071)
								int tmp37 = sourceFormat;		HX_STACK_VAR(tmp37,"tmp37");
								HX_STACK_LINE(1071)
								switch( (int)(tmp37)){
									case (int)2: {
										HX_STACK_LINE(1071)
										{
											HX_STACK_LINE(1071)
											int tmp38 = (int(pixel) >> int((int)8));		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(1071)
											int tmp39 = (int(tmp38) & int((int)255));		HX_STACK_VAR(tmp39,"tmp39");
											HX_STACK_LINE(1071)
											int val = tmp39;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(1071)
											::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + offset),val);
											HX_STACK_LINE(1071)
											val;
										}
										HX_STACK_LINE(1071)
										{
											HX_STACK_LINE(1071)
											int tmp38 = (int(pixel) >> int((int)16));		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(1071)
											int tmp39 = (int(tmp38) & int((int)255));		HX_STACK_VAR(tmp39,"tmp39");
											HX_STACK_LINE(1071)
											int val = tmp39;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(1071)
											::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)1))),val);
											HX_STACK_LINE(1071)
											val;
										}
										HX_STACK_LINE(1071)
										{
											HX_STACK_LINE(1071)
											int tmp38 = (int(pixel) >> int((int)24));		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(1071)
											int tmp39 = (int(tmp38) & int((int)255));		HX_STACK_VAR(tmp39,"tmp39");
											HX_STACK_LINE(1071)
											int val = tmp39;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(1071)
											::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)2))),val);
											HX_STACK_LINE(1071)
											val;
										}
										HX_STACK_LINE(1071)
										{
											HX_STACK_LINE(1071)
											int tmp38 = (int(pixel) & int((int)255));		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(1071)
											int val = tmp38;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(1071)
											::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)3))),val);
											HX_STACK_LINE(1071)
											val;
										}
									}
									;break;
									case (int)0: {
										HX_STACK_LINE(1071)
										{
											HX_STACK_LINE(1071)
											int tmp38 = (int(pixel) >> int((int)24));		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(1071)
											int tmp39 = (int(tmp38) & int((int)255));		HX_STACK_VAR(tmp39,"tmp39");
											HX_STACK_LINE(1071)
											int val = tmp39;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(1071)
											::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + offset),val);
											HX_STACK_LINE(1071)
											val;
										}
										HX_STACK_LINE(1071)
										{
											HX_STACK_LINE(1071)
											int tmp38 = (int(pixel) >> int((int)16));		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(1071)
											int tmp39 = (int(tmp38) & int((int)255));		HX_STACK_VAR(tmp39,"tmp39");
											HX_STACK_LINE(1071)
											int val = tmp39;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(1071)
											::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)1))),val);
											HX_STACK_LINE(1071)
											val;
										}
										HX_STACK_LINE(1071)
										{
											HX_STACK_LINE(1071)
											int tmp38 = (int(pixel) >> int((int)8));		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(1071)
											int tmp39 = (int(tmp38) & int((int)255));		HX_STACK_VAR(tmp39,"tmp39");
											HX_STACK_LINE(1071)
											int val = tmp39;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(1071)
											::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)2))),val);
											HX_STACK_LINE(1071)
											val;
										}
										HX_STACK_LINE(1071)
										{
											HX_STACK_LINE(1071)
											int tmp38 = (int(pixel) & int((int)255));		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(1071)
											int val = tmp38;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(1071)
											::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)3))),val);
											HX_STACK_LINE(1071)
											val;
										}
									}
									;break;
									case (int)1: {
										HX_STACK_LINE(1071)
										{
											HX_STACK_LINE(1071)
											int tmp38 = (int(pixel) & int((int)255));		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(1071)
											int val = tmp38;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(1071)
											::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + offset),val);
											HX_STACK_LINE(1071)
											val;
										}
										HX_STACK_LINE(1071)
										{
											HX_STACK_LINE(1071)
											int tmp38 = (int(pixel) >> int((int)24));		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(1071)
											int tmp39 = (int(tmp38) & int((int)255));		HX_STACK_VAR(tmp39,"tmp39");
											HX_STACK_LINE(1071)
											int val = tmp39;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(1071)
											::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)1))),val);
											HX_STACK_LINE(1071)
											val;
										}
										HX_STACK_LINE(1071)
										{
											HX_STACK_LINE(1071)
											int tmp38 = (int(pixel) >> int((int)16));		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(1071)
											int tmp39 = (int(tmp38) & int((int)255));		HX_STACK_VAR(tmp39,"tmp39");
											HX_STACK_LINE(1071)
											int val = tmp39;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(1071)
											::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)2))),val);
											HX_STACK_LINE(1071)
											val;
										}
										HX_STACK_LINE(1071)
										{
											HX_STACK_LINE(1071)
											int tmp38 = (int(pixel) >> int((int)8));		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(1071)
											int tmp39 = (int(tmp38) & int((int)255));		HX_STACK_VAR(tmp39,"tmp39");
											HX_STACK_LINE(1071)
											int val = tmp39;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(1071)
											::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)3))),val);
											HX_STACK_LINE(1071)
											val;
										}
									}
									;break;
								}
							}
						}
					}
				}
			}
		}
		HX_STACK_LINE(1079)
		image->dirty = true;
		HX_STACK_LINE(1080)
		(image->version)++;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(ImageDataUtil_obj,setPixels,(void))

int ImageDataUtil_obj::threshold( ::lime::graphics::Image image,::lime::graphics::Image sourceImage,::lime::math::Rectangle sourceRect,::lime::math::Vector2 destPoint,::String operation,int threshold,int color,int mask,bool copySource,int format){
	HX_STACK_FRAME("lime.graphics.utils.ImageDataUtil","threshold",0xd6e0e03d,"lime.graphics.utils.ImageDataUtil.threshold","lime/graphics/utils/ImageDataUtil.hx",1085,0x494d921f)
	HX_STACK_ARG(image,"image")
	HX_STACK_ARG(sourceImage,"sourceImage")
	HX_STACK_ARG(sourceRect,"sourceRect")
	HX_STACK_ARG(destPoint,"destPoint")
	HX_STACK_ARG(operation,"operation")
	HX_STACK_ARG(threshold,"threshold")
	HX_STACK_ARG(color,"color")
	HX_STACK_ARG(mask,"mask")
	HX_STACK_ARG(copySource,"copySource")
	HX_STACK_ARG(format,"format")
	HX_STACK_LINE(1087)
	int _color;		HX_STACK_VAR(_color,"_color");
	HX_STACK_LINE(1087)
	int _mask;		HX_STACK_VAR(_mask,"_mask");
	HX_STACK_LINE(1087)
	int _threshold;		HX_STACK_VAR(_threshold,"_threshold");
	HX_STACK_LINE(1089)
	int tmp = format;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1089)
	switch( (int)(tmp)){
		case (int)1: {
			HX_STACK_LINE(1093)
			int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1093)
			{
				HX_STACK_LINE(1093)
				int argb = color;		HX_STACK_VAR(argb,"argb");
				HX_STACK_LINE(1093)
				{
					HX_STACK_LINE(1093)
					int tmp2;		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(1093)
					{
						HX_STACK_LINE(1093)
						int rgba = (int)0;		HX_STACK_VAR(rgba,"rgba");
						HX_STACK_LINE(1093)
						tmp2 = rgba;
					}
					HX_STACK_LINE(1093)
					int rgba = tmp2;		HX_STACK_VAR(rgba,"rgba");
					HX_STACK_LINE(1093)
					{
						HX_STACK_LINE(1093)
						int tmp3 = (int(argb) >> int((int)16));		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(1093)
						int tmp4 = (int(tmp3) & int((int)255));		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(1093)
						int tmp5 = (int(tmp4) & int((int)255));		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(1093)
						int tmp6 = (int(tmp5) << int((int)24));		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(1093)
						int tmp7 = (int(argb) >> int((int)8));		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(1093)
						int tmp8 = (int(tmp7) & int((int)255));		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(1093)
						int tmp9 = (int(tmp8) & int((int)255));		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(1093)
						int tmp10 = (int(tmp9) << int((int)16));		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(1093)
						int tmp11 = (int(tmp6) | int(tmp10));		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(1093)
						int tmp12 = (int(argb) & int((int)255));		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(1093)
						int tmp13 = (int(tmp12) & int((int)255));		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(1093)
						int tmp14 = (int(tmp13) << int((int)8));		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(1093)
						int tmp15 = (int(tmp11) | int(tmp14));		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(1093)
						int tmp16 = (int(argb) >> int((int)24));		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(1093)
						int tmp17 = (int(tmp16) & int((int)255));		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(1093)
						int tmp18 = (int(tmp17) & int((int)255));		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(1093)
						int tmp19 = (int(tmp15) | int(tmp18));		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(1093)
						rgba = tmp19;
					}
					HX_STACK_LINE(1093)
					tmp1 = rgba;
				}
			}
			HX_STACK_LINE(1093)
			_color = tmp1;
			HX_STACK_LINE(1094)
			int tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1094)
			{
				HX_STACK_LINE(1094)
				int argb = mask;		HX_STACK_VAR(argb,"argb");
				HX_STACK_LINE(1094)
				{
					HX_STACK_LINE(1094)
					int tmp3;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(1094)
					{
						HX_STACK_LINE(1094)
						int rgba = (int)0;		HX_STACK_VAR(rgba,"rgba");
						HX_STACK_LINE(1094)
						tmp3 = rgba;
					}
					HX_STACK_LINE(1094)
					int rgba = tmp3;		HX_STACK_VAR(rgba,"rgba");
					HX_STACK_LINE(1094)
					{
						HX_STACK_LINE(1094)
						int tmp4 = (int(argb) >> int((int)16));		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(1094)
						int tmp5 = (int(tmp4) & int((int)255));		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(1094)
						int tmp6 = (int(tmp5) & int((int)255));		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(1094)
						int tmp7 = (int(tmp6) << int((int)24));		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(1094)
						int tmp8 = (int(argb) >> int((int)8));		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(1094)
						int tmp9 = (int(tmp8) & int((int)255));		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(1094)
						int tmp10 = (int(tmp9) & int((int)255));		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(1094)
						int tmp11 = (int(tmp10) << int((int)16));		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(1094)
						int tmp12 = (int(tmp7) | int(tmp11));		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(1094)
						int tmp13 = (int(argb) & int((int)255));		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(1094)
						int tmp14 = (int(tmp13) & int((int)255));		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(1094)
						int tmp15 = (int(tmp14) << int((int)8));		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(1094)
						int tmp16 = (int(tmp12) | int(tmp15));		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(1094)
						int tmp17 = (int(argb) >> int((int)24));		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(1094)
						int tmp18 = (int(tmp17) & int((int)255));		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(1094)
						int tmp19 = (int(tmp18) & int((int)255));		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(1094)
						int tmp20 = (int(tmp16) | int(tmp19));		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(1094)
						rgba = tmp20;
					}
					HX_STACK_LINE(1094)
					tmp2 = rgba;
				}
			}
			HX_STACK_LINE(1094)
			_mask = tmp2;
			HX_STACK_LINE(1095)
			int tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1095)
			{
				HX_STACK_LINE(1095)
				int argb = threshold;		HX_STACK_VAR(argb,"argb");
				HX_STACK_LINE(1095)
				{
					HX_STACK_LINE(1095)
					int tmp4;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(1095)
					{
						HX_STACK_LINE(1095)
						int rgba = (int)0;		HX_STACK_VAR(rgba,"rgba");
						HX_STACK_LINE(1095)
						tmp4 = rgba;
					}
					HX_STACK_LINE(1095)
					int rgba = tmp4;		HX_STACK_VAR(rgba,"rgba");
					HX_STACK_LINE(1095)
					{
						HX_STACK_LINE(1095)
						int tmp5 = (int(argb) >> int((int)16));		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(1095)
						int tmp6 = (int(tmp5) & int((int)255));		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(1095)
						int tmp7 = (int(tmp6) & int((int)255));		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(1095)
						int tmp8 = (int(tmp7) << int((int)24));		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(1095)
						int tmp9 = (int(argb) >> int((int)8));		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(1095)
						int tmp10 = (int(tmp9) & int((int)255));		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(1095)
						int tmp11 = (int(tmp10) & int((int)255));		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(1095)
						int tmp12 = (int(tmp11) << int((int)16));		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(1095)
						int tmp13 = (int(tmp8) | int(tmp12));		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(1095)
						int tmp14 = (int(argb) & int((int)255));		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(1095)
						int tmp15 = (int(tmp14) & int((int)255));		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(1095)
						int tmp16 = (int(tmp15) << int((int)8));		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(1095)
						int tmp17 = (int(tmp13) | int(tmp16));		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(1095)
						int tmp18 = (int(argb) >> int((int)24));		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(1095)
						int tmp19 = (int(tmp18) & int((int)255));		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(1095)
						int tmp20 = (int(tmp19) & int((int)255));		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(1095)
						int tmp21 = (int(tmp17) | int(tmp20));		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(1095)
						rgba = tmp21;
					}
					HX_STACK_LINE(1095)
					tmp3 = rgba;
				}
			}
			HX_STACK_LINE(1095)
			_threshold = tmp3;
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(1099)
			int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1099)
			{
				HX_STACK_LINE(1099)
				int bgra = color;		HX_STACK_VAR(bgra,"bgra");
				HX_STACK_LINE(1099)
				{
					HX_STACK_LINE(1099)
					int tmp2;		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(1099)
					{
						HX_STACK_LINE(1099)
						int rgba = (int)0;		HX_STACK_VAR(rgba,"rgba");
						HX_STACK_LINE(1099)
						tmp2 = rgba;
					}
					HX_STACK_LINE(1099)
					int rgba = tmp2;		HX_STACK_VAR(rgba,"rgba");
					HX_STACK_LINE(1099)
					{
						HX_STACK_LINE(1099)
						int tmp3 = (int(bgra) >> int((int)8));		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(1099)
						int tmp4 = (int(tmp3) & int((int)255));		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(1099)
						int tmp5 = (int(tmp4) & int((int)255));		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(1099)
						int tmp6 = (int(tmp5) << int((int)24));		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(1099)
						int tmp7 = (int(bgra) >> int((int)16));		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(1099)
						int tmp8 = (int(tmp7) & int((int)255));		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(1099)
						int tmp9 = (int(tmp8) & int((int)255));		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(1099)
						int tmp10 = (int(tmp9) << int((int)16));		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(1099)
						int tmp11 = (int(tmp6) | int(tmp10));		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(1099)
						int tmp12 = (int(bgra) >> int((int)24));		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(1099)
						int tmp13 = (int(tmp12) & int((int)255));		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(1099)
						int tmp14 = (int(tmp13) & int((int)255));		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(1099)
						int tmp15 = (int(tmp14) << int((int)8));		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(1099)
						int tmp16 = (int(tmp11) | int(tmp15));		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(1099)
						int tmp17 = (int(bgra) & int((int)255));		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(1099)
						int tmp18 = (int(tmp17) & int((int)255));		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(1099)
						int tmp19 = (int(tmp16) | int(tmp18));		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(1099)
						rgba = tmp19;
					}
					HX_STACK_LINE(1099)
					tmp1 = rgba;
				}
			}
			HX_STACK_LINE(1099)
			_color = tmp1;
			HX_STACK_LINE(1100)
			int tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1100)
			{
				HX_STACK_LINE(1100)
				int bgra = mask;		HX_STACK_VAR(bgra,"bgra");
				HX_STACK_LINE(1100)
				{
					HX_STACK_LINE(1100)
					int tmp3;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(1100)
					{
						HX_STACK_LINE(1100)
						int rgba = (int)0;		HX_STACK_VAR(rgba,"rgba");
						HX_STACK_LINE(1100)
						tmp3 = rgba;
					}
					HX_STACK_LINE(1100)
					int rgba = tmp3;		HX_STACK_VAR(rgba,"rgba");
					HX_STACK_LINE(1100)
					{
						HX_STACK_LINE(1100)
						int tmp4 = (int(bgra) >> int((int)8));		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(1100)
						int tmp5 = (int(tmp4) & int((int)255));		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(1100)
						int tmp6 = (int(tmp5) & int((int)255));		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(1100)
						int tmp7 = (int(tmp6) << int((int)24));		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(1100)
						int tmp8 = (int(bgra) >> int((int)16));		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(1100)
						int tmp9 = (int(tmp8) & int((int)255));		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(1100)
						int tmp10 = (int(tmp9) & int((int)255));		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(1100)
						int tmp11 = (int(tmp10) << int((int)16));		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(1100)
						int tmp12 = (int(tmp7) | int(tmp11));		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(1100)
						int tmp13 = (int(bgra) >> int((int)24));		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(1100)
						int tmp14 = (int(tmp13) & int((int)255));		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(1100)
						int tmp15 = (int(tmp14) & int((int)255));		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(1100)
						int tmp16 = (int(tmp15) << int((int)8));		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(1100)
						int tmp17 = (int(tmp12) | int(tmp16));		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(1100)
						int tmp18 = (int(bgra) & int((int)255));		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(1100)
						int tmp19 = (int(tmp18) & int((int)255));		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(1100)
						int tmp20 = (int(tmp17) | int(tmp19));		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(1100)
						rgba = tmp20;
					}
					HX_STACK_LINE(1100)
					tmp2 = rgba;
				}
			}
			HX_STACK_LINE(1100)
			_mask = tmp2;
			HX_STACK_LINE(1101)
			int tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1101)
			{
				HX_STACK_LINE(1101)
				int bgra = threshold;		HX_STACK_VAR(bgra,"bgra");
				HX_STACK_LINE(1101)
				{
					HX_STACK_LINE(1101)
					int tmp4;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(1101)
					{
						HX_STACK_LINE(1101)
						int rgba = (int)0;		HX_STACK_VAR(rgba,"rgba");
						HX_STACK_LINE(1101)
						tmp4 = rgba;
					}
					HX_STACK_LINE(1101)
					int rgba = tmp4;		HX_STACK_VAR(rgba,"rgba");
					HX_STACK_LINE(1101)
					{
						HX_STACK_LINE(1101)
						int tmp5 = (int(bgra) >> int((int)8));		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(1101)
						int tmp6 = (int(tmp5) & int((int)255));		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(1101)
						int tmp7 = (int(tmp6) & int((int)255));		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(1101)
						int tmp8 = (int(tmp7) << int((int)24));		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(1101)
						int tmp9 = (int(bgra) >> int((int)16));		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(1101)
						int tmp10 = (int(tmp9) & int((int)255));		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(1101)
						int tmp11 = (int(tmp10) & int((int)255));		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(1101)
						int tmp12 = (int(tmp11) << int((int)16));		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(1101)
						int tmp13 = (int(tmp8) | int(tmp12));		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(1101)
						int tmp14 = (int(bgra) >> int((int)24));		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(1101)
						int tmp15 = (int(tmp14) & int((int)255));		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(1101)
						int tmp16 = (int(tmp15) & int((int)255));		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(1101)
						int tmp17 = (int(tmp16) << int((int)8));		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(1101)
						int tmp18 = (int(tmp13) | int(tmp17));		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(1101)
						int tmp19 = (int(bgra) & int((int)255));		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(1101)
						int tmp20 = (int(tmp19) & int((int)255));		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(1101)
						int tmp21 = (int(tmp18) | int(tmp20));		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(1101)
						rgba = tmp21;
					}
					HX_STACK_LINE(1101)
					tmp3 = rgba;
				}
			}
			HX_STACK_LINE(1101)
			_threshold = tmp3;
		}
		;break;
		default: {
			HX_STACK_LINE(1105)
			_color = color;
			HX_STACK_LINE(1106)
			_mask = mask;
			HX_STACK_LINE(1107)
			_threshold = threshold;
		}
	}
	HX_STACK_LINE(1111)
	::String tmp1 = operation;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1111)
	int tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1111)
	::String _switch_1 = (tmp1);
	if (  ( _switch_1==HX_HCSTRING("!=","\xfc","\x1c","\x00","\x00"))){
		HX_STACK_LINE(1113)
		tmp2 = (int)0;
	}
	else if (  ( _switch_1==HX_HCSTRING("==","\x60","\x35","\x00","\x00"))){
		HX_STACK_LINE(1114)
		tmp2 = (int)1;
	}
	else if (  ( _switch_1==HX_HCSTRING("<","\x3c","\x00","\x00","\x00"))){
		HX_STACK_LINE(1115)
		tmp2 = (int)2;
	}
	else if (  ( _switch_1==HX_HCSTRING("<=","\x81","\x34","\x00","\x00"))){
		HX_STACK_LINE(1116)
		tmp2 = (int)3;
	}
	else if (  ( _switch_1==HX_HCSTRING(">","\x3e","\x00","\x00","\x00"))){
		HX_STACK_LINE(1117)
		tmp2 = (int)4;
	}
	else if (  ( _switch_1==HX_HCSTRING(">=","\x3f","\x36","\x00","\x00"))){
		HX_STACK_LINE(1118)
		tmp2 = (int)5;
	}
	else  {
		HX_STACK_LINE(1119)
		tmp2 = (int)-1;
	}
;
;
	HX_STACK_LINE(1111)
	int _operation = tmp2;		HX_STACK_VAR(_operation,"_operation");
	HX_STACK_LINE(1123)
	bool tmp3 = (_operation == (int)-1);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1123)
	if ((tmp3)){
		HX_STACK_LINE(1123)
		return (int)0;
	}
	HX_STACK_LINE(1125)
	::lime::utils::ArrayBufferView tmp4 = sourceImage->buffer->data;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1125)
	::lime::utils::ArrayBufferView srcData = tmp4;		HX_STACK_VAR(srcData,"srcData");
	HX_STACK_LINE(1126)
	::lime::utils::ArrayBufferView tmp5 = image->buffer->data;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1126)
	::lime::utils::ArrayBufferView destData = tmp5;		HX_STACK_VAR(destData,"destData");
	HX_STACK_LINE(1128)
	bool tmp6 = (srcData == null());		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(1128)
	bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(1128)
	bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(1128)
	if ((tmp7)){
		HX_STACK_LINE(1128)
		tmp8 = (destData == null());
	}
	else{
		HX_STACK_LINE(1128)
		tmp8 = true;
	}
	HX_STACK_LINE(1128)
	if ((tmp8)){
		HX_STACK_LINE(1128)
		return (int)0;
	}
	HX_STACK_LINE(1130)
	int hits = (int)0;		HX_STACK_VAR(hits,"hits");
	HX_STACK_LINE(1133)
	bool tmp9 = ::lime::_system::CFFI_obj::enabled;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(1133)
	if ((tmp9)){
		HX_STACK_LINE(1133)
		hits = ::lime::graphics::utils::ImageDataUtil_obj::cffi_lime_image_data_util_threshold.call(hx::DynamicPtr(image),hx::DynamicPtr(sourceImage),hx::DynamicPtr(sourceRect),hx::DynamicPtr(destPoint),_operation,(int((int(_threshold) >> int((int)16))) & int((int)65535)),(int(_threshold) & int((int)65535)),(int((int(_color) >> int((int)16))) & int((int)65535)),(int(_color) & int((int)65535)),(int((int(_mask) >> int((int)16))) & int((int)65535)),(int(_mask) & int((int)65535)),copySource);
	}
	else{
		HX_STACK_LINE(1137)
		::lime::graphics::utils::_ImageDataUtil::ImageDataView tmp10 = ::lime::graphics::utils::_ImageDataUtil::ImageDataView_obj::__new(sourceImage,sourceRect);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1137)
		::lime::graphics::utils::_ImageDataUtil::ImageDataView srcView = tmp10;		HX_STACK_VAR(srcView,"srcView");
		HX_STACK_LINE(1138)
		::lime::graphics::Image tmp11 = image;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(1138)
		::lime::math::Rectangle tmp12 = ::lime::math::Rectangle_obj::__new(destPoint->x,destPoint->y,srcView->width,srcView->height);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(1138)
		::lime::graphics::utils::_ImageDataUtil::ImageDataView tmp13 = ::lime::graphics::utils::_ImageDataUtil::ImageDataView_obj::__new(tmp11,tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(1138)
		::lime::graphics::utils::_ImageDataUtil::ImageDataView destView = tmp13;		HX_STACK_VAR(destView,"destView");
		HX_STACK_LINE(1140)
		int tmp14 = sourceImage->buffer->format;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(1140)
		int srcFormat = tmp14;		HX_STACK_VAR(srcFormat,"srcFormat");
		HX_STACK_LINE(1141)
		int tmp15 = image->buffer->format;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(1141)
		int destFormat = tmp15;		HX_STACK_VAR(destFormat,"destFormat");
		HX_STACK_LINE(1142)
		bool tmp16 = sourceImage->buffer->premultiplied;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(1142)
		bool srcPremultiplied = tmp16;		HX_STACK_VAR(srcPremultiplied,"srcPremultiplied");
		HX_STACK_LINE(1143)
		bool tmp17 = image->buffer->premultiplied;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(1143)
		bool destPremultiplied = tmp17;		HX_STACK_VAR(destPremultiplied,"destPremultiplied");
		HX_STACK_LINE(1145)
		int srcPosition;		HX_STACK_VAR(srcPosition,"srcPosition");
		HX_STACK_LINE(1145)
		int destPosition;		HX_STACK_VAR(destPosition,"destPosition");
		HX_STACK_LINE(1145)
		int srcPixel;		HX_STACK_VAR(srcPixel,"srcPixel");
		HX_STACK_LINE(1145)
		int destPixel;		HX_STACK_VAR(destPixel,"destPixel");
		HX_STACK_LINE(1145)
		int pixelMask;		HX_STACK_VAR(pixelMask,"pixelMask");
		HX_STACK_LINE(1145)
		bool test;		HX_STACK_VAR(test,"test");
		HX_STACK_LINE(1145)
		int value;		HX_STACK_VAR(value,"value");
		HX_STACK_LINE(1147)
		{
			HX_STACK_LINE(1147)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(1147)
			int _g = destView->height;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1147)
			while((true)){
				HX_STACK_LINE(1147)
				bool tmp18 = (_g1 < _g);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(1147)
				bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(1147)
				if ((tmp19)){
					HX_STACK_LINE(1147)
					break;
				}
				HX_STACK_LINE(1147)
				int tmp20 = (_g1)++;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(1147)
				int y = tmp20;		HX_STACK_VAR(y,"y");
				HX_STACK_LINE(1149)
				int tmp21 = srcView->offset;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(1149)
				int tmp22 = (srcView->stride * y);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(1149)
				int tmp23 = (tmp21 + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(1149)
				srcPosition = tmp23;
				HX_STACK_LINE(1150)
				int tmp24 = destView->offset;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(1150)
				int tmp25 = (destView->stride * y);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(1150)
				int tmp26 = (tmp24 + tmp25);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(1150)
				destPosition = tmp26;
				HX_STACK_LINE(1152)
				{
					HX_STACK_LINE(1152)
					int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(1152)
					int _g2 = destView->width;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(1152)
					while((true)){
						HX_STACK_LINE(1152)
						bool tmp27 = (_g3 < _g2);		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(1152)
						bool tmp28 = !(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(1152)
						if ((tmp28)){
							HX_STACK_LINE(1152)
							break;
						}
						HX_STACK_LINE(1152)
						int tmp29 = (_g3)++;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(1152)
						int x = tmp29;		HX_STACK_VAR(x,"x");
						HX_STACK_LINE(1154)
						{
							HX_STACK_LINE(1154)
							int tmp30 = srcFormat;		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(1154)
							switch( (int)(tmp30)){
								case (int)2: {
									HX_STACK_LINE(1154)
									int tmp31 = ::__hxcpp_memory_get_byte(srcData->buffer->b,(srcData->byteOffset + ((srcPosition + (int)2))));		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(1154)
									Dynamic tmp32 = (int(tmp31) & int((int)255));		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(1154)
									int r = tmp32;		HX_STACK_VAR(r,"r");
									HX_STACK_LINE(1154)
									int tmp33 = ::__hxcpp_memory_get_byte(srcData->buffer->b,(srcData->byteOffset + ((srcPosition + (int)1))));		HX_STACK_VAR(tmp33,"tmp33");
									HX_STACK_LINE(1154)
									Dynamic tmp34 = (int(tmp33) & int((int)255));		HX_STACK_VAR(tmp34,"tmp34");
									HX_STACK_LINE(1154)
									int g = tmp34;		HX_STACK_VAR(g,"g");
									HX_STACK_LINE(1154)
									int tmp35 = ::__hxcpp_memory_get_byte(srcData->buffer->b,(srcData->byteOffset + srcPosition));		HX_STACK_VAR(tmp35,"tmp35");
									HX_STACK_LINE(1154)
									Dynamic tmp36 = (int(tmp35) & int((int)255));		HX_STACK_VAR(tmp36,"tmp36");
									HX_STACK_LINE(1154)
									int b = tmp36;		HX_STACK_VAR(b,"b");
									HX_STACK_LINE(1154)
									int tmp37 = ::__hxcpp_memory_get_byte(srcData->buffer->b,(srcData->byteOffset + ((srcPosition + (int)3))));		HX_STACK_VAR(tmp37,"tmp37");
									HX_STACK_LINE(1154)
									Dynamic tmp38 = (int(tmp37) & int((int)255));		HX_STACK_VAR(tmp38,"tmp38");
									HX_STACK_LINE(1154)
									int a = tmp38;		HX_STACK_VAR(a,"a");
									HX_STACK_LINE(1154)
									int tmp39 = (int(r) & int((int)255));		HX_STACK_VAR(tmp39,"tmp39");
									HX_STACK_LINE(1154)
									int tmp40 = (int(tmp39) << int((int)24));		HX_STACK_VAR(tmp40,"tmp40");
									HX_STACK_LINE(1154)
									int tmp41 = (int(g) & int((int)255));		HX_STACK_VAR(tmp41,"tmp41");
									HX_STACK_LINE(1154)
									int tmp42 = (int(tmp41) << int((int)16));		HX_STACK_VAR(tmp42,"tmp42");
									HX_STACK_LINE(1154)
									int tmp43 = (int(tmp40) | int(tmp42));		HX_STACK_VAR(tmp43,"tmp43");
									HX_STACK_LINE(1154)
									int tmp44 = (int(b) & int((int)255));		HX_STACK_VAR(tmp44,"tmp44");
									HX_STACK_LINE(1154)
									int tmp45 = (int(tmp44) << int((int)8));		HX_STACK_VAR(tmp45,"tmp45");
									HX_STACK_LINE(1154)
									int tmp46 = (int(tmp43) | int(tmp45));		HX_STACK_VAR(tmp46,"tmp46");
									HX_STACK_LINE(1154)
									int tmp47 = (int(a) & int((int)255));		HX_STACK_VAR(tmp47,"tmp47");
									HX_STACK_LINE(1154)
									int tmp48 = (int(tmp46) | int(tmp47));		HX_STACK_VAR(tmp48,"tmp48");
									HX_STACK_LINE(1154)
									srcPixel = tmp48;
								}
								;break;
								case (int)0: {
									HX_STACK_LINE(1154)
									int tmp31 = ::__hxcpp_memory_get_byte(srcData->buffer->b,(srcData->byteOffset + srcPosition));		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(1154)
									Dynamic tmp32 = (int(tmp31) & int((int)255));		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(1154)
									int r = tmp32;		HX_STACK_VAR(r,"r");
									HX_STACK_LINE(1154)
									int tmp33 = ::__hxcpp_memory_get_byte(srcData->buffer->b,(srcData->byteOffset + ((srcPosition + (int)1))));		HX_STACK_VAR(tmp33,"tmp33");
									HX_STACK_LINE(1154)
									Dynamic tmp34 = (int(tmp33) & int((int)255));		HX_STACK_VAR(tmp34,"tmp34");
									HX_STACK_LINE(1154)
									int g = tmp34;		HX_STACK_VAR(g,"g");
									HX_STACK_LINE(1154)
									int tmp35 = ::__hxcpp_memory_get_byte(srcData->buffer->b,(srcData->byteOffset + ((srcPosition + (int)2))));		HX_STACK_VAR(tmp35,"tmp35");
									HX_STACK_LINE(1154)
									Dynamic tmp36 = (int(tmp35) & int((int)255));		HX_STACK_VAR(tmp36,"tmp36");
									HX_STACK_LINE(1154)
									int b = tmp36;		HX_STACK_VAR(b,"b");
									HX_STACK_LINE(1154)
									int tmp37 = ::__hxcpp_memory_get_byte(srcData->buffer->b,(srcData->byteOffset + ((srcPosition + (int)3))));		HX_STACK_VAR(tmp37,"tmp37");
									HX_STACK_LINE(1154)
									Dynamic tmp38 = (int(tmp37) & int((int)255));		HX_STACK_VAR(tmp38,"tmp38");
									HX_STACK_LINE(1154)
									int a = tmp38;		HX_STACK_VAR(a,"a");
									HX_STACK_LINE(1154)
									int tmp39 = (int(r) & int((int)255));		HX_STACK_VAR(tmp39,"tmp39");
									HX_STACK_LINE(1154)
									int tmp40 = (int(tmp39) << int((int)24));		HX_STACK_VAR(tmp40,"tmp40");
									HX_STACK_LINE(1154)
									int tmp41 = (int(g) & int((int)255));		HX_STACK_VAR(tmp41,"tmp41");
									HX_STACK_LINE(1154)
									int tmp42 = (int(tmp41) << int((int)16));		HX_STACK_VAR(tmp42,"tmp42");
									HX_STACK_LINE(1154)
									int tmp43 = (int(tmp40) | int(tmp42));		HX_STACK_VAR(tmp43,"tmp43");
									HX_STACK_LINE(1154)
									int tmp44 = (int(b) & int((int)255));		HX_STACK_VAR(tmp44,"tmp44");
									HX_STACK_LINE(1154)
									int tmp45 = (int(tmp44) << int((int)8));		HX_STACK_VAR(tmp45,"tmp45");
									HX_STACK_LINE(1154)
									int tmp46 = (int(tmp43) | int(tmp45));		HX_STACK_VAR(tmp46,"tmp46");
									HX_STACK_LINE(1154)
									int tmp47 = (int(a) & int((int)255));		HX_STACK_VAR(tmp47,"tmp47");
									HX_STACK_LINE(1154)
									int tmp48 = (int(tmp46) | int(tmp47));		HX_STACK_VAR(tmp48,"tmp48");
									HX_STACK_LINE(1154)
									srcPixel = tmp48;
								}
								;break;
								case (int)1: {
									HX_STACK_LINE(1154)
									int tmp31 = ::__hxcpp_memory_get_byte(srcData->buffer->b,(srcData->byteOffset + ((srcPosition + (int)1))));		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(1154)
									Dynamic tmp32 = (int(tmp31) & int((int)255));		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(1154)
									int r = tmp32;		HX_STACK_VAR(r,"r");
									HX_STACK_LINE(1154)
									int tmp33 = ::__hxcpp_memory_get_byte(srcData->buffer->b,(srcData->byteOffset + ((srcPosition + (int)2))));		HX_STACK_VAR(tmp33,"tmp33");
									HX_STACK_LINE(1154)
									Dynamic tmp34 = (int(tmp33) & int((int)255));		HX_STACK_VAR(tmp34,"tmp34");
									HX_STACK_LINE(1154)
									int g = tmp34;		HX_STACK_VAR(g,"g");
									HX_STACK_LINE(1154)
									int tmp35 = ::__hxcpp_memory_get_byte(srcData->buffer->b,(srcData->byteOffset + ((srcPosition + (int)3))));		HX_STACK_VAR(tmp35,"tmp35");
									HX_STACK_LINE(1154)
									Dynamic tmp36 = (int(tmp35) & int((int)255));		HX_STACK_VAR(tmp36,"tmp36");
									HX_STACK_LINE(1154)
									int b = tmp36;		HX_STACK_VAR(b,"b");
									HX_STACK_LINE(1154)
									int tmp37 = ::__hxcpp_memory_get_byte(srcData->buffer->b,(srcData->byteOffset + srcPosition));		HX_STACK_VAR(tmp37,"tmp37");
									HX_STACK_LINE(1154)
									Dynamic tmp38 = (int(tmp37) & int((int)255));		HX_STACK_VAR(tmp38,"tmp38");
									HX_STACK_LINE(1154)
									int a = tmp38;		HX_STACK_VAR(a,"a");
									HX_STACK_LINE(1154)
									int tmp39 = (int(r) & int((int)255));		HX_STACK_VAR(tmp39,"tmp39");
									HX_STACK_LINE(1154)
									int tmp40 = (int(tmp39) << int((int)24));		HX_STACK_VAR(tmp40,"tmp40");
									HX_STACK_LINE(1154)
									int tmp41 = (int(g) & int((int)255));		HX_STACK_VAR(tmp41,"tmp41");
									HX_STACK_LINE(1154)
									int tmp42 = (int(tmp41) << int((int)16));		HX_STACK_VAR(tmp42,"tmp42");
									HX_STACK_LINE(1154)
									int tmp43 = (int(tmp40) | int(tmp42));		HX_STACK_VAR(tmp43,"tmp43");
									HX_STACK_LINE(1154)
									int tmp44 = (int(b) & int((int)255));		HX_STACK_VAR(tmp44,"tmp44");
									HX_STACK_LINE(1154)
									int tmp45 = (int(tmp44) << int((int)8));		HX_STACK_VAR(tmp45,"tmp45");
									HX_STACK_LINE(1154)
									int tmp46 = (int(tmp43) | int(tmp45));		HX_STACK_VAR(tmp46,"tmp46");
									HX_STACK_LINE(1154)
									int tmp47 = (int(a) & int((int)255));		HX_STACK_VAR(tmp47,"tmp47");
									HX_STACK_LINE(1154)
									int tmp48 = (int(tmp46) | int(tmp47));		HX_STACK_VAR(tmp48,"tmp48");
									HX_STACK_LINE(1154)
									srcPixel = tmp48;
								}
								;break;
							}
							HX_STACK_LINE(1154)
							bool tmp31 = srcPremultiplied;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(1154)
							if ((tmp31)){
								HX_STACK_LINE(1154)
								int tmp32 = (int(srcPixel) & int((int)255));		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(1154)
								bool tmp33 = (tmp32 != (int)0);		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(1154)
								bool tmp34;		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(1154)
								if ((tmp33)){
									HX_STACK_LINE(1154)
									int tmp35 = (int(srcPixel) & int((int)255));		HX_STACK_VAR(tmp35,"tmp35");
									HX_STACK_LINE(1154)
									int tmp36 = tmp35;		HX_STACK_VAR(tmp36,"tmp36");
									HX_STACK_LINE(1154)
									tmp34 = (tmp36 != (int)255);
								}
								else{
									HX_STACK_LINE(1154)
									tmp34 = false;
								}
								HX_STACK_LINE(1154)
								if ((tmp34)){
									HX_STACK_LINE(1154)
									int tmp35 = (int(srcPixel) & int((int)255));		HX_STACK_VAR(tmp35,"tmp35");
									HX_STACK_LINE(1154)
									Float tmp36 = (Float(((Float)255.0)) / Float(tmp35));		HX_STACK_VAR(tmp36,"tmp36");
									HX_STACK_LINE(1154)
									::lime::math::color::_RGBA::RGBA_Impl__obj::unmult = tmp36;
									HX_STACK_LINE(1154)
									{
										HX_STACK_LINE(1154)
										Dynamic tmp37;		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(1154)
										{
											HX_STACK_LINE(1154)
											::lime::utils::ArrayBufferView tmp38 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(1154)
											::lime::utils::ArrayBufferView this1 = tmp38;		HX_STACK_VAR(this1,"this1");
											HX_STACK_LINE(1154)
											int tmp39 = (int(srcPixel) >> int((int)24));		HX_STACK_VAR(tmp39,"tmp39");
											HX_STACK_LINE(1154)
											int tmp40 = (int(tmp39) & int((int)255));		HX_STACK_VAR(tmp40,"tmp40");
											HX_STACK_LINE(1154)
											Float tmp41 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;		HX_STACK_VAR(tmp41,"tmp41");
											HX_STACK_LINE(1154)
											Float tmp42 = (tmp40 * tmp41);		HX_STACK_VAR(tmp42,"tmp42");
											HX_STACK_LINE(1154)
											int tmp43 = ::Math_obj::round(tmp42);		HX_STACK_VAR(tmp43,"tmp43");
											HX_STACK_LINE(1154)
											int idx = tmp43;		HX_STACK_VAR(idx,"idx");
											HX_STACK_LINE(1154)
											int tmp44 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp44,"tmp44");
											HX_STACK_LINE(1154)
											tmp37 = (int(tmp44) & int((int)255));
										}
										HX_STACK_LINE(1154)
										int r = tmp37;		HX_STACK_VAR(r,"r");
										HX_STACK_LINE(1154)
										Dynamic tmp38;		HX_STACK_VAR(tmp38,"tmp38");
										HX_STACK_LINE(1154)
										{
											HX_STACK_LINE(1154)
											::lime::utils::ArrayBufferView tmp39 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp39,"tmp39");
											HX_STACK_LINE(1154)
											::lime::utils::ArrayBufferView this1 = tmp39;		HX_STACK_VAR(this1,"this1");
											HX_STACK_LINE(1154)
											int tmp40 = (int(srcPixel) >> int((int)16));		HX_STACK_VAR(tmp40,"tmp40");
											HX_STACK_LINE(1154)
											int tmp41 = (int(tmp40) & int((int)255));		HX_STACK_VAR(tmp41,"tmp41");
											HX_STACK_LINE(1154)
											Float tmp42 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;		HX_STACK_VAR(tmp42,"tmp42");
											HX_STACK_LINE(1154)
											Float tmp43 = (tmp41 * tmp42);		HX_STACK_VAR(tmp43,"tmp43");
											HX_STACK_LINE(1154)
											int tmp44 = ::Math_obj::round(tmp43);		HX_STACK_VAR(tmp44,"tmp44");
											HX_STACK_LINE(1154)
											int idx = tmp44;		HX_STACK_VAR(idx,"idx");
											HX_STACK_LINE(1154)
											int tmp45 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp45,"tmp45");
											HX_STACK_LINE(1154)
											tmp38 = (int(tmp45) & int((int)255));
										}
										HX_STACK_LINE(1154)
										int g = tmp38;		HX_STACK_VAR(g,"g");
										HX_STACK_LINE(1154)
										Dynamic tmp39;		HX_STACK_VAR(tmp39,"tmp39");
										HX_STACK_LINE(1154)
										{
											HX_STACK_LINE(1154)
											::lime::utils::ArrayBufferView tmp40 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp40,"tmp40");
											HX_STACK_LINE(1154)
											::lime::utils::ArrayBufferView this1 = tmp40;		HX_STACK_VAR(this1,"this1");
											HX_STACK_LINE(1154)
											int tmp41 = (int(srcPixel) >> int((int)8));		HX_STACK_VAR(tmp41,"tmp41");
											HX_STACK_LINE(1154)
											int tmp42 = (int(tmp41) & int((int)255));		HX_STACK_VAR(tmp42,"tmp42");
											HX_STACK_LINE(1154)
											Float tmp43 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;		HX_STACK_VAR(tmp43,"tmp43");
											HX_STACK_LINE(1154)
											Float tmp44 = (tmp42 * tmp43);		HX_STACK_VAR(tmp44,"tmp44");
											HX_STACK_LINE(1154)
											int tmp45 = ::Math_obj::round(tmp44);		HX_STACK_VAR(tmp45,"tmp45");
											HX_STACK_LINE(1154)
											int idx = tmp45;		HX_STACK_VAR(idx,"idx");
											HX_STACK_LINE(1154)
											int tmp46 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp46,"tmp46");
											HX_STACK_LINE(1154)
											tmp39 = (int(tmp46) & int((int)255));
										}
										HX_STACK_LINE(1154)
										int b = tmp39;		HX_STACK_VAR(b,"b");
										HX_STACK_LINE(1154)
										int tmp40 = (int(r) & int((int)255));		HX_STACK_VAR(tmp40,"tmp40");
										HX_STACK_LINE(1154)
										int tmp41 = (int(tmp40) << int((int)24));		HX_STACK_VAR(tmp41,"tmp41");
										HX_STACK_LINE(1154)
										int tmp42 = (int(g) & int((int)255));		HX_STACK_VAR(tmp42,"tmp42");
										HX_STACK_LINE(1154)
										int tmp43 = (int(tmp42) << int((int)16));		HX_STACK_VAR(tmp43,"tmp43");
										HX_STACK_LINE(1154)
										int tmp44 = (int(tmp41) | int(tmp43));		HX_STACK_VAR(tmp44,"tmp44");
										HX_STACK_LINE(1154)
										int tmp45 = (int(b) & int((int)255));		HX_STACK_VAR(tmp45,"tmp45");
										HX_STACK_LINE(1154)
										int tmp46 = (int(tmp45) << int((int)8));		HX_STACK_VAR(tmp46,"tmp46");
										HX_STACK_LINE(1154)
										int tmp47 = (int(tmp44) | int(tmp46));		HX_STACK_VAR(tmp47,"tmp47");
										HX_STACK_LINE(1154)
										int tmp48 = (int(srcPixel) & int((int)255));		HX_STACK_VAR(tmp48,"tmp48");
										HX_STACK_LINE(1154)
										int tmp49 = (int(tmp48) & int((int)255));		HX_STACK_VAR(tmp49,"tmp49");
										HX_STACK_LINE(1154)
										int tmp50 = (int(tmp47) | int(tmp49));		HX_STACK_VAR(tmp50,"tmp50");
										HX_STACK_LINE(1154)
										srcPixel = tmp50;
									}
								}
							}
						}
						HX_STACK_LINE(1156)
						int tmp30 = (int(srcPixel) & int(_mask));		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(1156)
						pixelMask = tmp30;
						HX_STACK_LINE(1158)
						int tmp31;		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(1158)
						{
							HX_STACK_LINE(1158)
							int tmp110;		HX_STACK_VAR(tmp110,"tmp110");
							HX_STACK_LINE(1158)
							int tmp210;		HX_STACK_VAR(tmp210,"tmp210");
							HX_STACK_LINE(1158)
							int tmp32 = (int(pixelMask) >> int((int)24));		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(1158)
							int tmp33 = (int(tmp32) & int((int)255));		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(1158)
							tmp110 = tmp33;
							HX_STACK_LINE(1158)
							int tmp34 = (int(_threshold) >> int((int)24));		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(1158)
							int tmp35 = (int(tmp34) & int((int)255));		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(1158)
							tmp210 = tmp35;
							HX_STACK_LINE(1158)
							bool tmp36 = (tmp110 != tmp210);		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(1158)
							if ((tmp36)){
								HX_STACK_LINE(1158)
								bool tmp37 = (tmp110 > tmp210);		HX_STACK_VAR(tmp37,"tmp37");
								HX_STACK_LINE(1158)
								if ((tmp37)){
									HX_STACK_LINE(1158)
									tmp31 = (int)1;
								}
								else{
									HX_STACK_LINE(1158)
									tmp31 = (int)-1;
								}
							}
							else{
								HX_STACK_LINE(1158)
								int tmp37 = (int(pixelMask) >> int((int)16));		HX_STACK_VAR(tmp37,"tmp37");
								HX_STACK_LINE(1158)
								int tmp38 = (int(tmp37) & int((int)255));		HX_STACK_VAR(tmp38,"tmp38");
								HX_STACK_LINE(1158)
								tmp110 = tmp38;
								HX_STACK_LINE(1158)
								int tmp39 = (int(_threshold) >> int((int)16));		HX_STACK_VAR(tmp39,"tmp39");
								HX_STACK_LINE(1158)
								int tmp40 = (int(tmp39) & int((int)255));		HX_STACK_VAR(tmp40,"tmp40");
								HX_STACK_LINE(1158)
								tmp210 = tmp40;
								HX_STACK_LINE(1158)
								bool tmp41 = (tmp110 != tmp210);		HX_STACK_VAR(tmp41,"tmp41");
								HX_STACK_LINE(1158)
								if ((tmp41)){
									HX_STACK_LINE(1158)
									bool tmp42 = (tmp110 > tmp210);		HX_STACK_VAR(tmp42,"tmp42");
									HX_STACK_LINE(1158)
									if ((tmp42)){
										HX_STACK_LINE(1158)
										tmp31 = (int)1;
									}
									else{
										HX_STACK_LINE(1158)
										tmp31 = (int)-1;
									}
								}
								else{
									HX_STACK_LINE(1158)
									int tmp42 = (int(pixelMask) >> int((int)8));		HX_STACK_VAR(tmp42,"tmp42");
									HX_STACK_LINE(1158)
									int tmp43 = (int(tmp42) & int((int)255));		HX_STACK_VAR(tmp43,"tmp43");
									HX_STACK_LINE(1158)
									tmp110 = tmp43;
									HX_STACK_LINE(1158)
									int tmp44 = (int(_threshold) >> int((int)8));		HX_STACK_VAR(tmp44,"tmp44");
									HX_STACK_LINE(1158)
									int tmp45 = (int(tmp44) & int((int)255));		HX_STACK_VAR(tmp45,"tmp45");
									HX_STACK_LINE(1158)
									tmp210 = tmp45;
									HX_STACK_LINE(1158)
									bool tmp46 = (tmp110 != tmp210);		HX_STACK_VAR(tmp46,"tmp46");
									HX_STACK_LINE(1158)
									if ((tmp46)){
										HX_STACK_LINE(1158)
										bool tmp47 = (tmp110 > tmp210);		HX_STACK_VAR(tmp47,"tmp47");
										HX_STACK_LINE(1158)
										if ((tmp47)){
											HX_STACK_LINE(1158)
											tmp31 = (int)1;
										}
										else{
											HX_STACK_LINE(1158)
											tmp31 = (int)-1;
										}
									}
									else{
										HX_STACK_LINE(1158)
										int tmp47 = (int(pixelMask) & int((int)255));		HX_STACK_VAR(tmp47,"tmp47");
										HX_STACK_LINE(1158)
										tmp110 = tmp47;
										HX_STACK_LINE(1158)
										int tmp48 = (int(_threshold) & int((int)255));		HX_STACK_VAR(tmp48,"tmp48");
										HX_STACK_LINE(1158)
										tmp210 = tmp48;
										HX_STACK_LINE(1158)
										bool tmp49 = (tmp110 != tmp210);		HX_STACK_VAR(tmp49,"tmp49");
										HX_STACK_LINE(1158)
										if ((tmp49)){
											HX_STACK_LINE(1158)
											bool tmp50 = (tmp110 > tmp210);		HX_STACK_VAR(tmp50,"tmp50");
											HX_STACK_LINE(1158)
											if ((tmp50)){
												HX_STACK_LINE(1158)
												tmp31 = (int)1;
											}
											else{
												HX_STACK_LINE(1158)
												tmp31 = (int)-1;
											}
										}
										else{
											HX_STACK_LINE(1158)
											tmp31 = (int)0;
										}
									}
								}
							}
						}
						HX_STACK_LINE(1158)
						value = tmp31;
						HX_STACK_LINE(1160)
						int tmp32 = _operation;		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(1160)
						bool tmp33;		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(1160)
						switch( (int)(tmp32)){
							case (int)0: {
								HX_STACK_LINE(1162)
								tmp33 = (value != (int)0);
							}
							;break;
							case (int)1: {
								HX_STACK_LINE(1163)
								tmp33 = (value == (int)0);
							}
							;break;
							case (int)2: {
								HX_STACK_LINE(1164)
								tmp33 = (value == (int)-1);
							}
							;break;
							case (int)3: {
								HX_STACK_LINE(1165)
								bool tmp34 = (value == (int)0);		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(1165)
								bool tmp35 = !(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(1165)
								if ((tmp35)){
									HX_STACK_LINE(1165)
									tmp33 = (value == (int)-1);
								}
								else{
									HX_STACK_LINE(1165)
									tmp33 = true;
								}
							}
							;break;
							case (int)4: {
								HX_STACK_LINE(1166)
								tmp33 = (value == (int)1);
							}
							;break;
							case (int)5: {
								HX_STACK_LINE(1167)
								bool tmp34 = (value == (int)0);		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(1167)
								bool tmp35 = !(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(1167)
								if ((tmp35)){
									HX_STACK_LINE(1167)
									tmp33 = (value == (int)1);
								}
								else{
									HX_STACK_LINE(1167)
									tmp33 = true;
								}
							}
							;break;
							default: {
								HX_STACK_LINE(1168)
								tmp33 = false;
							}
						}
						HX_STACK_LINE(1160)
						test = tmp33;
						HX_STACK_LINE(1172)
						bool tmp34 = test;		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(1172)
						if ((tmp34)){
							HX_STACK_LINE(1174)
							{
								HX_STACK_LINE(1174)
								bool tmp35 = destPremultiplied;		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(1174)
								if ((tmp35)){
									HX_STACK_LINE(1174)
									int tmp36 = (int(_color) & int((int)255));		HX_STACK_VAR(tmp36,"tmp36");
									HX_STACK_LINE(1174)
									bool tmp37 = (tmp36 == (int)0);		HX_STACK_VAR(tmp37,"tmp37");
									HX_STACK_LINE(1174)
									if ((tmp37)){
										HX_STACK_LINE(1174)
										bool tmp38 = (_color != (int)0);		HX_STACK_VAR(tmp38,"tmp38");
										HX_STACK_LINE(1174)
										if ((tmp38)){
											HX_STACK_LINE(1174)
											_color = (int)0;
										}
									}
									else{
										HX_STACK_LINE(1174)
										int tmp38 = (int(_color) & int((int)255));		HX_STACK_VAR(tmp38,"tmp38");
										HX_STACK_LINE(1174)
										bool tmp39 = (tmp38 != (int)255);		HX_STACK_VAR(tmp39,"tmp39");
										HX_STACK_LINE(1174)
										if ((tmp39)){
											HX_STACK_LINE(1174)
											Dynamic tmp40;		HX_STACK_VAR(tmp40,"tmp40");
											HX_STACK_LINE(1174)
											{
												HX_STACK_LINE(1174)
												::lime::utils::ArrayBufferView tmp41 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__alpha16;		HX_STACK_VAR(tmp41,"tmp41");
												HX_STACK_LINE(1174)
												::lime::utils::ArrayBufferView this1 = tmp41;		HX_STACK_VAR(this1,"this1");
												HX_STACK_LINE(1174)
												tmp40 = ::__hxcpp_memory_get_ui32(this1->buffer->b,(this1->byteOffset + (((int(_color) & int((int)255))) * (int)4)));
											}
											HX_STACK_LINE(1174)
											::lime::math::color::_RGBA::RGBA_Impl__obj::a16 = tmp40;
											HX_STACK_LINE(1174)
											{
												HX_STACK_LINE(1174)
												int tmp41 = (int(_color) >> int((int)24));		HX_STACK_VAR(tmp41,"tmp41");
												HX_STACK_LINE(1174)
												int tmp42 = (int(tmp41) & int((int)255));		HX_STACK_VAR(tmp42,"tmp42");
												HX_STACK_LINE(1174)
												int tmp43 = ::lime::math::color::_RGBA::RGBA_Impl__obj::a16;		HX_STACK_VAR(tmp43,"tmp43");
												HX_STACK_LINE(1174)
												int tmp44 = (tmp42 * tmp43);		HX_STACK_VAR(tmp44,"tmp44");
												HX_STACK_LINE(1174)
												int tmp45 = (int(tmp44) >> int((int)16));		HX_STACK_VAR(tmp45,"tmp45");
												HX_STACK_LINE(1174)
												int tmp46 = (int(tmp45) & int((int)255));		HX_STACK_VAR(tmp46,"tmp46");
												HX_STACK_LINE(1174)
												int tmp47 = (int(tmp46) << int((int)24));		HX_STACK_VAR(tmp47,"tmp47");
												HX_STACK_LINE(1174)
												int tmp48 = (int(_color) >> int((int)16));		HX_STACK_VAR(tmp48,"tmp48");
												HX_STACK_LINE(1174)
												int tmp49 = (int(tmp48) & int((int)255));		HX_STACK_VAR(tmp49,"tmp49");
												HX_STACK_LINE(1174)
												int tmp50 = ::lime::math::color::_RGBA::RGBA_Impl__obj::a16;		HX_STACK_VAR(tmp50,"tmp50");
												HX_STACK_LINE(1174)
												int tmp51 = (tmp49 * tmp50);		HX_STACK_VAR(tmp51,"tmp51");
												HX_STACK_LINE(1174)
												int tmp52 = (int(tmp51) >> int((int)16));		HX_STACK_VAR(tmp52,"tmp52");
												HX_STACK_LINE(1174)
												int tmp53 = (int(tmp52) & int((int)255));		HX_STACK_VAR(tmp53,"tmp53");
												HX_STACK_LINE(1174)
												int tmp54 = (int(tmp53) << int((int)16));		HX_STACK_VAR(tmp54,"tmp54");
												HX_STACK_LINE(1174)
												int tmp55 = (int(tmp47) | int(tmp54));		HX_STACK_VAR(tmp55,"tmp55");
												HX_STACK_LINE(1174)
												int tmp56 = (int(_color) >> int((int)8));		HX_STACK_VAR(tmp56,"tmp56");
												HX_STACK_LINE(1174)
												int tmp57 = (int(tmp56) & int((int)255));		HX_STACK_VAR(tmp57,"tmp57");
												HX_STACK_LINE(1174)
												int tmp58 = ::lime::math::color::_RGBA::RGBA_Impl__obj::a16;		HX_STACK_VAR(tmp58,"tmp58");
												HX_STACK_LINE(1174)
												int tmp59 = (tmp57 * tmp58);		HX_STACK_VAR(tmp59,"tmp59");
												HX_STACK_LINE(1174)
												int tmp60 = (int(tmp59) >> int((int)16));		HX_STACK_VAR(tmp60,"tmp60");
												HX_STACK_LINE(1174)
												int tmp61 = (int(tmp60) & int((int)255));		HX_STACK_VAR(tmp61,"tmp61");
												HX_STACK_LINE(1174)
												int tmp62 = (int(tmp61) << int((int)8));		HX_STACK_VAR(tmp62,"tmp62");
												HX_STACK_LINE(1174)
												int tmp63 = (int(tmp55) | int(tmp62));		HX_STACK_VAR(tmp63,"tmp63");
												HX_STACK_LINE(1174)
												int tmp64 = (int(_color) & int((int)255));		HX_STACK_VAR(tmp64,"tmp64");
												HX_STACK_LINE(1174)
												int tmp65 = (int(tmp64) & int((int)255));		HX_STACK_VAR(tmp65,"tmp65");
												HX_STACK_LINE(1174)
												int tmp66 = (int(tmp63) | int(tmp65));		HX_STACK_VAR(tmp66,"tmp66");
												HX_STACK_LINE(1174)
												_color = tmp66;
											}
										}
									}
								}
								HX_STACK_LINE(1174)
								int tmp36 = destFormat;		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(1174)
								switch( (int)(tmp36)){
									case (int)2: {
										HX_STACK_LINE(1174)
										{
											HX_STACK_LINE(1174)
											int tmp37 = (int(_color) >> int((int)8));		HX_STACK_VAR(tmp37,"tmp37");
											HX_STACK_LINE(1174)
											int tmp38 = (int(tmp37) & int((int)255));		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(1174)
											int val = tmp38;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(1174)
											::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + destPosition),val);
											HX_STACK_LINE(1174)
											val;
										}
										HX_STACK_LINE(1174)
										{
											HX_STACK_LINE(1174)
											int tmp37 = (int(_color) >> int((int)16));		HX_STACK_VAR(tmp37,"tmp37");
											HX_STACK_LINE(1174)
											int tmp38 = (int(tmp37) & int((int)255));		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(1174)
											int val = tmp38;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(1174)
											::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)1))),val);
											HX_STACK_LINE(1174)
											val;
										}
										HX_STACK_LINE(1174)
										{
											HX_STACK_LINE(1174)
											int tmp37 = (int(_color) >> int((int)24));		HX_STACK_VAR(tmp37,"tmp37");
											HX_STACK_LINE(1174)
											int tmp38 = (int(tmp37) & int((int)255));		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(1174)
											int val = tmp38;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(1174)
											::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)2))),val);
											HX_STACK_LINE(1174)
											val;
										}
										HX_STACK_LINE(1174)
										{
											HX_STACK_LINE(1174)
											int tmp37 = (int(_color) & int((int)255));		HX_STACK_VAR(tmp37,"tmp37");
											HX_STACK_LINE(1174)
											int val = tmp37;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(1174)
											::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)3))),val);
											HX_STACK_LINE(1174)
											val;
										}
									}
									;break;
									case (int)0: {
										HX_STACK_LINE(1174)
										{
											HX_STACK_LINE(1174)
											int tmp37 = (int(_color) >> int((int)24));		HX_STACK_VAR(tmp37,"tmp37");
											HX_STACK_LINE(1174)
											int tmp38 = (int(tmp37) & int((int)255));		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(1174)
											int val = tmp38;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(1174)
											::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + destPosition),val);
											HX_STACK_LINE(1174)
											val;
										}
										HX_STACK_LINE(1174)
										{
											HX_STACK_LINE(1174)
											int tmp37 = (int(_color) >> int((int)16));		HX_STACK_VAR(tmp37,"tmp37");
											HX_STACK_LINE(1174)
											int tmp38 = (int(tmp37) & int((int)255));		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(1174)
											int val = tmp38;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(1174)
											::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)1))),val);
											HX_STACK_LINE(1174)
											val;
										}
										HX_STACK_LINE(1174)
										{
											HX_STACK_LINE(1174)
											int tmp37 = (int(_color) >> int((int)8));		HX_STACK_VAR(tmp37,"tmp37");
											HX_STACK_LINE(1174)
											int tmp38 = (int(tmp37) & int((int)255));		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(1174)
											int val = tmp38;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(1174)
											::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)2))),val);
											HX_STACK_LINE(1174)
											val;
										}
										HX_STACK_LINE(1174)
										{
											HX_STACK_LINE(1174)
											int tmp37 = (int(_color) & int((int)255));		HX_STACK_VAR(tmp37,"tmp37");
											HX_STACK_LINE(1174)
											int val = tmp37;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(1174)
											::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)3))),val);
											HX_STACK_LINE(1174)
											val;
										}
									}
									;break;
									case (int)1: {
										HX_STACK_LINE(1174)
										{
											HX_STACK_LINE(1174)
											int tmp37 = (int(_color) & int((int)255));		HX_STACK_VAR(tmp37,"tmp37");
											HX_STACK_LINE(1174)
											int val = tmp37;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(1174)
											::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + destPosition),val);
											HX_STACK_LINE(1174)
											val;
										}
										HX_STACK_LINE(1174)
										{
											HX_STACK_LINE(1174)
											int tmp37 = (int(_color) >> int((int)24));		HX_STACK_VAR(tmp37,"tmp37");
											HX_STACK_LINE(1174)
											int tmp38 = (int(tmp37) & int((int)255));		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(1174)
											int val = tmp38;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(1174)
											::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)1))),val);
											HX_STACK_LINE(1174)
											val;
										}
										HX_STACK_LINE(1174)
										{
											HX_STACK_LINE(1174)
											int tmp37 = (int(_color) >> int((int)16));		HX_STACK_VAR(tmp37,"tmp37");
											HX_STACK_LINE(1174)
											int tmp38 = (int(tmp37) & int((int)255));		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(1174)
											int val = tmp38;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(1174)
											::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)2))),val);
											HX_STACK_LINE(1174)
											val;
										}
										HX_STACK_LINE(1174)
										{
											HX_STACK_LINE(1174)
											int tmp37 = (int(_color) >> int((int)8));		HX_STACK_VAR(tmp37,"tmp37");
											HX_STACK_LINE(1174)
											int tmp38 = (int(tmp37) & int((int)255));		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(1174)
											int val = tmp38;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(1174)
											::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)3))),val);
											HX_STACK_LINE(1174)
											val;
										}
									}
									;break;
								}
							}
							HX_STACK_LINE(1175)
							(hits)++;
						}
						else{
							HX_STACK_LINE(1177)
							bool tmp35 = copySource;		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(1177)
							if ((tmp35)){
								HX_STACK_LINE(1179)
								bool tmp36 = destPremultiplied;		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(1179)
								if ((tmp36)){
									HX_STACK_LINE(1179)
									int tmp37 = (int(srcPixel) & int((int)255));		HX_STACK_VAR(tmp37,"tmp37");
									HX_STACK_LINE(1179)
									bool tmp38 = (tmp37 == (int)0);		HX_STACK_VAR(tmp38,"tmp38");
									HX_STACK_LINE(1179)
									if ((tmp38)){
										HX_STACK_LINE(1179)
										bool tmp39 = (srcPixel != (int)0);		HX_STACK_VAR(tmp39,"tmp39");
										HX_STACK_LINE(1179)
										if ((tmp39)){
											HX_STACK_LINE(1179)
											srcPixel = (int)0;
										}
									}
									else{
										HX_STACK_LINE(1179)
										int tmp39 = (int(srcPixel) & int((int)255));		HX_STACK_VAR(tmp39,"tmp39");
										HX_STACK_LINE(1179)
										bool tmp40 = (tmp39 != (int)255);		HX_STACK_VAR(tmp40,"tmp40");
										HX_STACK_LINE(1179)
										if ((tmp40)){
											HX_STACK_LINE(1179)
											Dynamic tmp41;		HX_STACK_VAR(tmp41,"tmp41");
											HX_STACK_LINE(1179)
											{
												HX_STACK_LINE(1179)
												::lime::utils::ArrayBufferView tmp42 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__alpha16;		HX_STACK_VAR(tmp42,"tmp42");
												HX_STACK_LINE(1179)
												::lime::utils::ArrayBufferView this1 = tmp42;		HX_STACK_VAR(this1,"this1");
												HX_STACK_LINE(1179)
												tmp41 = ::__hxcpp_memory_get_ui32(this1->buffer->b,(this1->byteOffset + (((int(srcPixel) & int((int)255))) * (int)4)));
											}
											HX_STACK_LINE(1179)
											::lime::math::color::_RGBA::RGBA_Impl__obj::a16 = tmp41;
											HX_STACK_LINE(1179)
											{
												HX_STACK_LINE(1179)
												int tmp42 = (int(srcPixel) >> int((int)24));		HX_STACK_VAR(tmp42,"tmp42");
												HX_STACK_LINE(1179)
												int tmp43 = (int(tmp42) & int((int)255));		HX_STACK_VAR(tmp43,"tmp43");
												HX_STACK_LINE(1179)
												int tmp44 = ::lime::math::color::_RGBA::RGBA_Impl__obj::a16;		HX_STACK_VAR(tmp44,"tmp44");
												HX_STACK_LINE(1179)
												int tmp45 = (tmp43 * tmp44);		HX_STACK_VAR(tmp45,"tmp45");
												HX_STACK_LINE(1179)
												int tmp46 = (int(tmp45) >> int((int)16));		HX_STACK_VAR(tmp46,"tmp46");
												HX_STACK_LINE(1179)
												int tmp47 = (int(tmp46) & int((int)255));		HX_STACK_VAR(tmp47,"tmp47");
												HX_STACK_LINE(1179)
												int tmp48 = (int(tmp47) << int((int)24));		HX_STACK_VAR(tmp48,"tmp48");
												HX_STACK_LINE(1179)
												int tmp49 = (int(srcPixel) >> int((int)16));		HX_STACK_VAR(tmp49,"tmp49");
												HX_STACK_LINE(1179)
												int tmp50 = (int(tmp49) & int((int)255));		HX_STACK_VAR(tmp50,"tmp50");
												HX_STACK_LINE(1179)
												int tmp51 = ::lime::math::color::_RGBA::RGBA_Impl__obj::a16;		HX_STACK_VAR(tmp51,"tmp51");
												HX_STACK_LINE(1179)
												int tmp52 = (tmp50 * tmp51);		HX_STACK_VAR(tmp52,"tmp52");
												HX_STACK_LINE(1179)
												int tmp53 = (int(tmp52) >> int((int)16));		HX_STACK_VAR(tmp53,"tmp53");
												HX_STACK_LINE(1179)
												int tmp54 = (int(tmp53) & int((int)255));		HX_STACK_VAR(tmp54,"tmp54");
												HX_STACK_LINE(1179)
												int tmp55 = (int(tmp54) << int((int)16));		HX_STACK_VAR(tmp55,"tmp55");
												HX_STACK_LINE(1179)
												int tmp56 = (int(tmp48) | int(tmp55));		HX_STACK_VAR(tmp56,"tmp56");
												HX_STACK_LINE(1179)
												int tmp57 = (int(srcPixel) >> int((int)8));		HX_STACK_VAR(tmp57,"tmp57");
												HX_STACK_LINE(1179)
												int tmp58 = (int(tmp57) & int((int)255));		HX_STACK_VAR(tmp58,"tmp58");
												HX_STACK_LINE(1179)
												int tmp59 = ::lime::math::color::_RGBA::RGBA_Impl__obj::a16;		HX_STACK_VAR(tmp59,"tmp59");
												HX_STACK_LINE(1179)
												int tmp60 = (tmp58 * tmp59);		HX_STACK_VAR(tmp60,"tmp60");
												HX_STACK_LINE(1179)
												int tmp61 = (int(tmp60) >> int((int)16));		HX_STACK_VAR(tmp61,"tmp61");
												HX_STACK_LINE(1179)
												int tmp62 = (int(tmp61) & int((int)255));		HX_STACK_VAR(tmp62,"tmp62");
												HX_STACK_LINE(1179)
												int tmp63 = (int(tmp62) << int((int)8));		HX_STACK_VAR(tmp63,"tmp63");
												HX_STACK_LINE(1179)
												int tmp64 = (int(tmp56) | int(tmp63));		HX_STACK_VAR(tmp64,"tmp64");
												HX_STACK_LINE(1179)
												int tmp65 = (int(srcPixel) & int((int)255));		HX_STACK_VAR(tmp65,"tmp65");
												HX_STACK_LINE(1179)
												int tmp66 = (int(tmp65) & int((int)255));		HX_STACK_VAR(tmp66,"tmp66");
												HX_STACK_LINE(1179)
												int tmp67 = (int(tmp64) | int(tmp66));		HX_STACK_VAR(tmp67,"tmp67");
												HX_STACK_LINE(1179)
												srcPixel = tmp67;
											}
										}
									}
								}
								HX_STACK_LINE(1179)
								int tmp37 = destFormat;		HX_STACK_VAR(tmp37,"tmp37");
								HX_STACK_LINE(1179)
								switch( (int)(tmp37)){
									case (int)2: {
										HX_STACK_LINE(1179)
										{
											HX_STACK_LINE(1179)
											int tmp38 = (int(srcPixel) >> int((int)8));		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(1179)
											int tmp39 = (int(tmp38) & int((int)255));		HX_STACK_VAR(tmp39,"tmp39");
											HX_STACK_LINE(1179)
											int val = tmp39;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(1179)
											::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + destPosition),val);
											HX_STACK_LINE(1179)
											val;
										}
										HX_STACK_LINE(1179)
										{
											HX_STACK_LINE(1179)
											int tmp38 = (int(srcPixel) >> int((int)16));		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(1179)
											int tmp39 = (int(tmp38) & int((int)255));		HX_STACK_VAR(tmp39,"tmp39");
											HX_STACK_LINE(1179)
											int val = tmp39;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(1179)
											::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)1))),val);
											HX_STACK_LINE(1179)
											val;
										}
										HX_STACK_LINE(1179)
										{
											HX_STACK_LINE(1179)
											int tmp38 = (int(srcPixel) >> int((int)24));		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(1179)
											int tmp39 = (int(tmp38) & int((int)255));		HX_STACK_VAR(tmp39,"tmp39");
											HX_STACK_LINE(1179)
											int val = tmp39;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(1179)
											::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)2))),val);
											HX_STACK_LINE(1179)
											val;
										}
										HX_STACK_LINE(1179)
										{
											HX_STACK_LINE(1179)
											int tmp38 = (int(srcPixel) & int((int)255));		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(1179)
											int val = tmp38;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(1179)
											::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)3))),val);
											HX_STACK_LINE(1179)
											val;
										}
									}
									;break;
									case (int)0: {
										HX_STACK_LINE(1179)
										{
											HX_STACK_LINE(1179)
											int tmp38 = (int(srcPixel) >> int((int)24));		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(1179)
											int tmp39 = (int(tmp38) & int((int)255));		HX_STACK_VAR(tmp39,"tmp39");
											HX_STACK_LINE(1179)
											int val = tmp39;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(1179)
											::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + destPosition),val);
											HX_STACK_LINE(1179)
											val;
										}
										HX_STACK_LINE(1179)
										{
											HX_STACK_LINE(1179)
											int tmp38 = (int(srcPixel) >> int((int)16));		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(1179)
											int tmp39 = (int(tmp38) & int((int)255));		HX_STACK_VAR(tmp39,"tmp39");
											HX_STACK_LINE(1179)
											int val = tmp39;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(1179)
											::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)1))),val);
											HX_STACK_LINE(1179)
											val;
										}
										HX_STACK_LINE(1179)
										{
											HX_STACK_LINE(1179)
											int tmp38 = (int(srcPixel) >> int((int)8));		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(1179)
											int tmp39 = (int(tmp38) & int((int)255));		HX_STACK_VAR(tmp39,"tmp39");
											HX_STACK_LINE(1179)
											int val = tmp39;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(1179)
											::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)2))),val);
											HX_STACK_LINE(1179)
											val;
										}
										HX_STACK_LINE(1179)
										{
											HX_STACK_LINE(1179)
											int tmp38 = (int(srcPixel) & int((int)255));		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(1179)
											int val = tmp38;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(1179)
											::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)3))),val);
											HX_STACK_LINE(1179)
											val;
										}
									}
									;break;
									case (int)1: {
										HX_STACK_LINE(1179)
										{
											HX_STACK_LINE(1179)
											int tmp38 = (int(srcPixel) & int((int)255));		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(1179)
											int val = tmp38;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(1179)
											::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + destPosition),val);
											HX_STACK_LINE(1179)
											val;
										}
										HX_STACK_LINE(1179)
										{
											HX_STACK_LINE(1179)
											int tmp38 = (int(srcPixel) >> int((int)24));		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(1179)
											int tmp39 = (int(tmp38) & int((int)255));		HX_STACK_VAR(tmp39,"tmp39");
											HX_STACK_LINE(1179)
											int val = tmp39;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(1179)
											::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)1))),val);
											HX_STACK_LINE(1179)
											val;
										}
										HX_STACK_LINE(1179)
										{
											HX_STACK_LINE(1179)
											int tmp38 = (int(srcPixel) >> int((int)16));		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(1179)
											int tmp39 = (int(tmp38) & int((int)255));		HX_STACK_VAR(tmp39,"tmp39");
											HX_STACK_LINE(1179)
											int val = tmp39;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(1179)
											::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)2))),val);
											HX_STACK_LINE(1179)
											val;
										}
										HX_STACK_LINE(1179)
										{
											HX_STACK_LINE(1179)
											int tmp38 = (int(srcPixel) >> int((int)8));		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(1179)
											int tmp39 = (int(tmp38) & int((int)255));		HX_STACK_VAR(tmp39,"tmp39");
											HX_STACK_LINE(1179)
											int val = tmp39;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(1179)
											::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)3))),val);
											HX_STACK_LINE(1179)
											val;
										}
									}
									;break;
								}
							}
						}
						HX_STACK_LINE(1183)
						hx::AddEq(srcPosition,(int)4);
						HX_STACK_LINE(1184)
						hx::AddEq(destPosition,(int)4);
					}
				}
			}
		}
	}
	HX_STACK_LINE(1192)
	bool tmp10 = (hits > (int)0);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(1192)
	if ((tmp10)){
		HX_STACK_LINE(1194)
		image->dirty = true;
		HX_STACK_LINE(1195)
		(image->version)++;
	}
	HX_STACK_LINE(1199)
	int tmp11 = hits;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(1199)
	return tmp11;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC10(ImageDataUtil_obj,threshold,return )

Void ImageDataUtil_obj::unmultiplyAlpha( ::lime::graphics::Image image){
{
		HX_STACK_FRAME("lime.graphics.utils.ImageDataUtil","unmultiplyAlpha",0xa6ce9eb3,"lime.graphics.utils.ImageDataUtil.unmultiplyAlpha","lime/graphics/utils/ImageDataUtil.hx",1204,0x494d921f)
		HX_STACK_ARG(image,"image")
		HX_STACK_LINE(1206)
		::lime::utils::ArrayBufferView tmp = image->buffer->data;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1206)
		::lime::utils::ArrayBufferView data = tmp;		HX_STACK_VAR(data,"data");
		HX_STACK_LINE(1207)
		bool tmp1 = (data == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1207)
		if ((tmp1)){
			HX_STACK_LINE(1207)
			return null();
		}
		HX_STACK_LINE(1210)
		bool tmp2 = ::lime::_system::CFFI_obj::enabled;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1210)
		if ((tmp2)){
			HX_STACK_LINE(1210)
			::lime::graphics::utils::ImageDataUtil_obj::cffi_lime_image_data_util_unmultiply_alpha.call(hx::DynamicPtr(image));
		}
		else{
			HX_STACK_LINE(1214)
			int tmp3 = image->buffer->format;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1214)
			int format = tmp3;		HX_STACK_VAR(format,"format");
			HX_STACK_LINE(1215)
			int tmp4 = data->length;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1215)
			Float tmp5 = (Float(tmp4) / Float((int)4));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1215)
			int tmp6 = ::Std_obj::_int(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1215)
			int length = tmp6;		HX_STACK_VAR(length,"length");
			HX_STACK_LINE(1216)
			int pixel;		HX_STACK_VAR(pixel,"pixel");
			HX_STACK_LINE(1218)
			{
				HX_STACK_LINE(1218)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(1218)
				while((true)){
					HX_STACK_LINE(1218)
					bool tmp7 = (_g < length);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(1218)
					bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(1218)
					if ((tmp8)){
						HX_STACK_LINE(1218)
						break;
					}
					HX_STACK_LINE(1218)
					int tmp9 = (_g)++;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(1218)
					int i = tmp9;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(1220)
					{
						HX_STACK_LINE(1220)
						int tmp10 = (i * (int)4);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(1220)
						int offset = tmp10;		HX_STACK_VAR(offset,"offset");
						HX_STACK_LINE(1220)
						int tmp11 = format;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(1220)
						switch( (int)(tmp11)){
							case (int)2: {
								HX_STACK_LINE(1220)
								int tmp12 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)2))));		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(1220)
								Dynamic tmp13 = (int(tmp12) & int((int)255));		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(1220)
								int r = tmp13;		HX_STACK_VAR(r,"r");
								HX_STACK_LINE(1220)
								int tmp14 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)1))));		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(1220)
								Dynamic tmp15 = (int(tmp14) & int((int)255));		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(1220)
								int g = tmp15;		HX_STACK_VAR(g,"g");
								HX_STACK_LINE(1220)
								int tmp16 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + offset));		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(1220)
								Dynamic tmp17 = (int(tmp16) & int((int)255));		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(1220)
								int b = tmp17;		HX_STACK_VAR(b,"b");
								HX_STACK_LINE(1220)
								int tmp18 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)3))));		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(1220)
								Dynamic tmp19 = (int(tmp18) & int((int)255));		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(1220)
								int a = tmp19;		HX_STACK_VAR(a,"a");
								HX_STACK_LINE(1220)
								int tmp20 = (int(r) & int((int)255));		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(1220)
								int tmp21 = (int(tmp20) << int((int)24));		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(1220)
								int tmp22 = (int(g) & int((int)255));		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(1220)
								int tmp23 = (int(tmp22) << int((int)16));		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(1220)
								int tmp24 = (int(tmp21) | int(tmp23));		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(1220)
								int tmp25 = (int(b) & int((int)255));		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(1220)
								int tmp26 = (int(tmp25) << int((int)8));		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(1220)
								int tmp27 = (int(tmp24) | int(tmp26));		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(1220)
								int tmp28 = (int(a) & int((int)255));		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(1220)
								int tmp29 = (int(tmp27) | int(tmp28));		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(1220)
								pixel = tmp29;
							}
							;break;
							case (int)0: {
								HX_STACK_LINE(1220)
								int tmp12 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + offset));		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(1220)
								Dynamic tmp13 = (int(tmp12) & int((int)255));		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(1220)
								int r = tmp13;		HX_STACK_VAR(r,"r");
								HX_STACK_LINE(1220)
								int tmp14 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)1))));		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(1220)
								Dynamic tmp15 = (int(tmp14) & int((int)255));		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(1220)
								int g = tmp15;		HX_STACK_VAR(g,"g");
								HX_STACK_LINE(1220)
								int tmp16 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)2))));		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(1220)
								Dynamic tmp17 = (int(tmp16) & int((int)255));		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(1220)
								int b = tmp17;		HX_STACK_VAR(b,"b");
								HX_STACK_LINE(1220)
								int tmp18 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)3))));		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(1220)
								Dynamic tmp19 = (int(tmp18) & int((int)255));		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(1220)
								int a = tmp19;		HX_STACK_VAR(a,"a");
								HX_STACK_LINE(1220)
								int tmp20 = (int(r) & int((int)255));		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(1220)
								int tmp21 = (int(tmp20) << int((int)24));		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(1220)
								int tmp22 = (int(g) & int((int)255));		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(1220)
								int tmp23 = (int(tmp22) << int((int)16));		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(1220)
								int tmp24 = (int(tmp21) | int(tmp23));		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(1220)
								int tmp25 = (int(b) & int((int)255));		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(1220)
								int tmp26 = (int(tmp25) << int((int)8));		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(1220)
								int tmp27 = (int(tmp24) | int(tmp26));		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(1220)
								int tmp28 = (int(a) & int((int)255));		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(1220)
								int tmp29 = (int(tmp27) | int(tmp28));		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(1220)
								pixel = tmp29;
							}
							;break;
							case (int)1: {
								HX_STACK_LINE(1220)
								int tmp12 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)1))));		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(1220)
								Dynamic tmp13 = (int(tmp12) & int((int)255));		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(1220)
								int r = tmp13;		HX_STACK_VAR(r,"r");
								HX_STACK_LINE(1220)
								int tmp14 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)2))));		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(1220)
								Dynamic tmp15 = (int(tmp14) & int((int)255));		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(1220)
								int g = tmp15;		HX_STACK_VAR(g,"g");
								HX_STACK_LINE(1220)
								int tmp16 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)3))));		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(1220)
								Dynamic tmp17 = (int(tmp16) & int((int)255));		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(1220)
								int b = tmp17;		HX_STACK_VAR(b,"b");
								HX_STACK_LINE(1220)
								int tmp18 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + offset));		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(1220)
								Dynamic tmp19 = (int(tmp18) & int((int)255));		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(1220)
								int a = tmp19;		HX_STACK_VAR(a,"a");
								HX_STACK_LINE(1220)
								int tmp20 = (int(r) & int((int)255));		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(1220)
								int tmp21 = (int(tmp20) << int((int)24));		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(1220)
								int tmp22 = (int(g) & int((int)255));		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(1220)
								int tmp23 = (int(tmp22) << int((int)16));		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(1220)
								int tmp24 = (int(tmp21) | int(tmp23));		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(1220)
								int tmp25 = (int(b) & int((int)255));		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(1220)
								int tmp26 = (int(tmp25) << int((int)8));		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(1220)
								int tmp27 = (int(tmp24) | int(tmp26));		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(1220)
								int tmp28 = (int(a) & int((int)255));		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(1220)
								int tmp29 = (int(tmp27) | int(tmp28));		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(1220)
								pixel = tmp29;
							}
							;break;
						}
						HX_STACK_LINE(1220)
						{
							HX_STACK_LINE(1220)
							int tmp12 = (int(pixel) & int((int)255));		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(1220)
							bool tmp13 = (tmp12 != (int)0);		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(1220)
							bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(1220)
							if ((tmp13)){
								HX_STACK_LINE(1220)
								int tmp15 = (int(pixel) & int((int)255));		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(1220)
								int tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(1220)
								tmp14 = (tmp16 != (int)255);
							}
							else{
								HX_STACK_LINE(1220)
								tmp14 = false;
							}
							HX_STACK_LINE(1220)
							if ((tmp14)){
								HX_STACK_LINE(1220)
								int tmp15 = (int(pixel) & int((int)255));		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(1220)
								Float tmp16 = (Float(((Float)255.0)) / Float(tmp15));		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(1220)
								::lime::math::color::_RGBA::RGBA_Impl__obj::unmult = tmp16;
								HX_STACK_LINE(1220)
								{
									HX_STACK_LINE(1220)
									Dynamic tmp17;		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(1220)
									{
										HX_STACK_LINE(1220)
										::lime::utils::ArrayBufferView tmp18 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(1220)
										::lime::utils::ArrayBufferView this1 = tmp18;		HX_STACK_VAR(this1,"this1");
										HX_STACK_LINE(1220)
										int tmp19 = (int(pixel) >> int((int)24));		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(1220)
										int tmp20 = (int(tmp19) & int((int)255));		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(1220)
										Float tmp21 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(1220)
										Float tmp22 = (tmp20 * tmp21);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(1220)
										int tmp23 = ::Math_obj::round(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(1220)
										int idx = tmp23;		HX_STACK_VAR(idx,"idx");
										HX_STACK_LINE(1220)
										int tmp24 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(1220)
										tmp17 = (int(tmp24) & int((int)255));
									}
									HX_STACK_LINE(1220)
									int r = tmp17;		HX_STACK_VAR(r,"r");
									HX_STACK_LINE(1220)
									Dynamic tmp18;		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(1220)
									{
										HX_STACK_LINE(1220)
										::lime::utils::ArrayBufferView tmp19 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(1220)
										::lime::utils::ArrayBufferView this1 = tmp19;		HX_STACK_VAR(this1,"this1");
										HX_STACK_LINE(1220)
										int tmp20 = (int(pixel) >> int((int)16));		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(1220)
										int tmp21 = (int(tmp20) & int((int)255));		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(1220)
										Float tmp22 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(1220)
										Float tmp23 = (tmp21 * tmp22);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(1220)
										int tmp24 = ::Math_obj::round(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(1220)
										int idx = tmp24;		HX_STACK_VAR(idx,"idx");
										HX_STACK_LINE(1220)
										int tmp25 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(1220)
										tmp18 = (int(tmp25) & int((int)255));
									}
									HX_STACK_LINE(1220)
									int g = tmp18;		HX_STACK_VAR(g,"g");
									HX_STACK_LINE(1220)
									Dynamic tmp19;		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(1220)
									{
										HX_STACK_LINE(1220)
										::lime::utils::ArrayBufferView tmp20 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(1220)
										::lime::utils::ArrayBufferView this1 = tmp20;		HX_STACK_VAR(this1,"this1");
										HX_STACK_LINE(1220)
										int tmp21 = (int(pixel) >> int((int)8));		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(1220)
										int tmp22 = (int(tmp21) & int((int)255));		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(1220)
										Float tmp23 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(1220)
										Float tmp24 = (tmp22 * tmp23);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(1220)
										int tmp25 = ::Math_obj::round(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(1220)
										int idx = tmp25;		HX_STACK_VAR(idx,"idx");
										HX_STACK_LINE(1220)
										int tmp26 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(1220)
										tmp19 = (int(tmp26) & int((int)255));
									}
									HX_STACK_LINE(1220)
									int b = tmp19;		HX_STACK_VAR(b,"b");
									HX_STACK_LINE(1220)
									int tmp20 = (int(r) & int((int)255));		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(1220)
									int tmp21 = (int(tmp20) << int((int)24));		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(1220)
									int tmp22 = (int(g) & int((int)255));		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(1220)
									int tmp23 = (int(tmp22) << int((int)16));		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(1220)
									int tmp24 = (int(tmp21) | int(tmp23));		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(1220)
									int tmp25 = (int(b) & int((int)255));		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(1220)
									int tmp26 = (int(tmp25) << int((int)8));		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(1220)
									int tmp27 = (int(tmp24) | int(tmp26));		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(1220)
									int tmp28 = (int(pixel) & int((int)255));		HX_STACK_VAR(tmp28,"tmp28");
									HX_STACK_LINE(1220)
									int tmp29 = (int(tmp28) & int((int)255));		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(1220)
									int tmp30 = (int(tmp27) | int(tmp29));		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(1220)
									pixel = tmp30;
								}
							}
						}
					}
					HX_STACK_LINE(1221)
					{
						HX_STACK_LINE(1221)
						int tmp10 = (i * (int)4);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(1221)
						int offset = tmp10;		HX_STACK_VAR(offset,"offset");
						HX_STACK_LINE(1221)
						int tmp11 = format;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(1221)
						switch( (int)(tmp11)){
							case (int)2: {
								HX_STACK_LINE(1221)
								{
									HX_STACK_LINE(1221)
									int tmp12 = (int(pixel) >> int((int)8));		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(1221)
									int tmp13 = (int(tmp12) & int((int)255));		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(1221)
									int val = tmp13;		HX_STACK_VAR(val,"val");
									HX_STACK_LINE(1221)
									::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + offset),val);
									HX_STACK_LINE(1221)
									val;
								}
								HX_STACK_LINE(1221)
								{
									HX_STACK_LINE(1221)
									int tmp12 = (int(pixel) >> int((int)16));		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(1221)
									int tmp13 = (int(tmp12) & int((int)255));		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(1221)
									int val = tmp13;		HX_STACK_VAR(val,"val");
									HX_STACK_LINE(1221)
									::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)1))),val);
									HX_STACK_LINE(1221)
									val;
								}
								HX_STACK_LINE(1221)
								{
									HX_STACK_LINE(1221)
									int tmp12 = (int(pixel) >> int((int)24));		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(1221)
									int tmp13 = (int(tmp12) & int((int)255));		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(1221)
									int val = tmp13;		HX_STACK_VAR(val,"val");
									HX_STACK_LINE(1221)
									::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)2))),val);
									HX_STACK_LINE(1221)
									val;
								}
								HX_STACK_LINE(1221)
								{
									HX_STACK_LINE(1221)
									int tmp12 = (int(pixel) & int((int)255));		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(1221)
									int val = tmp12;		HX_STACK_VAR(val,"val");
									HX_STACK_LINE(1221)
									::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)3))),val);
									HX_STACK_LINE(1221)
									val;
								}
							}
							;break;
							case (int)0: {
								HX_STACK_LINE(1221)
								{
									HX_STACK_LINE(1221)
									int tmp12 = (int(pixel) >> int((int)24));		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(1221)
									int tmp13 = (int(tmp12) & int((int)255));		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(1221)
									int val = tmp13;		HX_STACK_VAR(val,"val");
									HX_STACK_LINE(1221)
									::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + offset),val);
									HX_STACK_LINE(1221)
									val;
								}
								HX_STACK_LINE(1221)
								{
									HX_STACK_LINE(1221)
									int tmp12 = (int(pixel) >> int((int)16));		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(1221)
									int tmp13 = (int(tmp12) & int((int)255));		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(1221)
									int val = tmp13;		HX_STACK_VAR(val,"val");
									HX_STACK_LINE(1221)
									::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)1))),val);
									HX_STACK_LINE(1221)
									val;
								}
								HX_STACK_LINE(1221)
								{
									HX_STACK_LINE(1221)
									int tmp12 = (int(pixel) >> int((int)8));		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(1221)
									int tmp13 = (int(tmp12) & int((int)255));		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(1221)
									int val = tmp13;		HX_STACK_VAR(val,"val");
									HX_STACK_LINE(1221)
									::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)2))),val);
									HX_STACK_LINE(1221)
									val;
								}
								HX_STACK_LINE(1221)
								{
									HX_STACK_LINE(1221)
									int tmp12 = (int(pixel) & int((int)255));		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(1221)
									int val = tmp12;		HX_STACK_VAR(val,"val");
									HX_STACK_LINE(1221)
									::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)3))),val);
									HX_STACK_LINE(1221)
									val;
								}
							}
							;break;
							case (int)1: {
								HX_STACK_LINE(1221)
								{
									HX_STACK_LINE(1221)
									int tmp12 = (int(pixel) & int((int)255));		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(1221)
									int val = tmp12;		HX_STACK_VAR(val,"val");
									HX_STACK_LINE(1221)
									::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + offset),val);
									HX_STACK_LINE(1221)
									val;
								}
								HX_STACK_LINE(1221)
								{
									HX_STACK_LINE(1221)
									int tmp12 = (int(pixel) >> int((int)24));		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(1221)
									int tmp13 = (int(tmp12) & int((int)255));		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(1221)
									int val = tmp13;		HX_STACK_VAR(val,"val");
									HX_STACK_LINE(1221)
									::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)1))),val);
									HX_STACK_LINE(1221)
									val;
								}
								HX_STACK_LINE(1221)
								{
									HX_STACK_LINE(1221)
									int tmp12 = (int(pixel) >> int((int)16));		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(1221)
									int tmp13 = (int(tmp12) & int((int)255));		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(1221)
									int val = tmp13;		HX_STACK_VAR(val,"val");
									HX_STACK_LINE(1221)
									::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)2))),val);
									HX_STACK_LINE(1221)
									val;
								}
								HX_STACK_LINE(1221)
								{
									HX_STACK_LINE(1221)
									int tmp12 = (int(pixel) >> int((int)8));		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(1221)
									int tmp13 = (int(tmp12) & int((int)255));		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(1221)
									int val = tmp13;		HX_STACK_VAR(val,"val");
									HX_STACK_LINE(1221)
									::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)3))),val);
									HX_STACK_LINE(1221)
									val;
								}
							}
							;break;
						}
					}
				}
			}
		}
		HX_STACK_LINE(1227)
		image->buffer->premultiplied = false;
		HX_STACK_LINE(1228)
		image->dirty = true;
		HX_STACK_LINE(1229)
		(image->version)++;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ImageDataUtil_obj,unmultiplyAlpha,(void))

int ImageDataUtil_obj::__pixelCompare( int n1,int n2){
	HX_STACK_FRAME("lime.graphics.utils.ImageDataUtil","__pixelCompare",0x0cbb8c0d,"lime.graphics.utils.ImageDataUtil.__pixelCompare","lime/graphics/utils/ImageDataUtil.hx",1234,0x494d921f)
	HX_STACK_ARG(n1,"n1")
	HX_STACK_ARG(n2,"n2")
	HX_STACK_LINE(1236)
	int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1237)
	int tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1239)
	int tmp = (int(n1) >> int((int)24));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1239)
	int tmp3 = (int(tmp) & int((int)255));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1239)
	tmp1 = tmp3;
	HX_STACK_LINE(1240)
	int tmp4 = (int(n2) >> int((int)24));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1240)
	int tmp5 = (int(tmp4) & int((int)255));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1240)
	tmp2 = tmp5;
	HX_STACK_LINE(1242)
	bool tmp6 = (tmp1 != tmp2);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(1242)
	if ((tmp6)){
		HX_STACK_LINE(1244)
		bool tmp7 = (tmp1 > tmp2);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1244)
		int tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1244)
		if ((tmp7)){
			HX_STACK_LINE(1244)
			tmp8 = (int)1;
		}
		else{
			HX_STACK_LINE(1244)
			tmp8 = (int)-1;
		}
		HX_STACK_LINE(1244)
		return tmp8;
	}
	else{
		HX_STACK_LINE(1248)
		int tmp7 = (int(n1) >> int((int)16));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1248)
		int tmp8 = (int(tmp7) & int((int)255));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1248)
		tmp1 = tmp8;
		HX_STACK_LINE(1249)
		int tmp9 = (int(n2) >> int((int)16));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1249)
		int tmp10 = (int(tmp9) & int((int)255));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1249)
		tmp2 = tmp10;
		HX_STACK_LINE(1251)
		bool tmp11 = (tmp1 != tmp2);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(1251)
		if ((tmp11)){
			HX_STACK_LINE(1253)
			bool tmp12 = (tmp1 > tmp2);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1253)
			int tmp13;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(1253)
			if ((tmp12)){
				HX_STACK_LINE(1253)
				tmp13 = (int)1;
			}
			else{
				HX_STACK_LINE(1253)
				tmp13 = (int)-1;
			}
			HX_STACK_LINE(1253)
			return tmp13;
		}
		else{
			HX_STACK_LINE(1257)
			int tmp12 = (int(n1) >> int((int)8));		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1257)
			int tmp13 = (int(tmp12) & int((int)255));		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(1257)
			tmp1 = tmp13;
			HX_STACK_LINE(1258)
			int tmp14 = (int(n2) >> int((int)8));		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(1258)
			int tmp15 = (int(tmp14) & int((int)255));		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(1258)
			tmp2 = tmp15;
			HX_STACK_LINE(1260)
			bool tmp16 = (tmp1 != tmp2);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(1260)
			if ((tmp16)){
				HX_STACK_LINE(1262)
				bool tmp17 = (tmp1 > tmp2);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(1262)
				int tmp18;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(1262)
				if ((tmp17)){
					HX_STACK_LINE(1262)
					tmp18 = (int)1;
				}
				else{
					HX_STACK_LINE(1262)
					tmp18 = (int)-1;
				}
				HX_STACK_LINE(1262)
				return tmp18;
			}
			else{
				HX_STACK_LINE(1266)
				int tmp17 = (int(n1) & int((int)255));		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(1266)
				tmp1 = tmp17;
				HX_STACK_LINE(1267)
				int tmp18 = (int(n2) & int((int)255));		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(1267)
				tmp2 = tmp18;
				HX_STACK_LINE(1269)
				bool tmp19 = (tmp1 != tmp2);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(1269)
				if ((tmp19)){
					HX_STACK_LINE(1271)
					bool tmp20 = (tmp1 > tmp2);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(1271)
					int tmp21;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(1271)
					if ((tmp20)){
						HX_STACK_LINE(1271)
						tmp21 = (int)1;
					}
					else{
						HX_STACK_LINE(1271)
						tmp21 = (int)-1;
					}
					HX_STACK_LINE(1271)
					return tmp21;
				}
				else{
					HX_STACK_LINE(1275)
					return (int)0;
				}
			}
		}
	}
	HX_STACK_LINE(1242)
	return (int)0;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ImageDataUtil_obj,__pixelCompare,return )

Void ImageDataUtil_obj::lime_image_data_util_color_transform( Dynamic image,Dynamic rect,Dynamic colorMatrix){
{
		HX_STACK_FRAME("lime.graphics.utils.ImageDataUtil","lime_image_data_util_color_transform",0x3cac7168,"lime.graphics.utils.ImageDataUtil.lime_image_data_util_color_transform","lime/graphics/utils/ImageDataUtil.hx",1296,0x494d921f)
		HX_STACK_ARG(image,"image")
		HX_STACK_ARG(rect,"rect")
		HX_STACK_ARG(colorMatrix,"colorMatrix")
		HX_STACK_LINE(1296)
		::lime::graphics::utils::ImageDataUtil_obj::cffi_lime_image_data_util_color_transform.call(hx::DynamicPtr(image),hx::DynamicPtr(rect),hx::DynamicPtr(colorMatrix));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(ImageDataUtil_obj,lime_image_data_util_color_transform,(void))

Void ImageDataUtil_obj::lime_image_data_util_copy_channel( Dynamic image,Dynamic sourceImage,Dynamic sourceRect,Dynamic destPoint,int srcChannel,int destChannel){
{
		HX_STACK_FRAME("lime.graphics.utils.ImageDataUtil","lime_image_data_util_copy_channel",0x470716e1,"lime.graphics.utils.ImageDataUtil.lime_image_data_util_copy_channel","lime/graphics/utils/ImageDataUtil.hx",1297,0x494d921f)
		HX_STACK_ARG(image,"image")
		HX_STACK_ARG(sourceImage,"sourceImage")
		HX_STACK_ARG(sourceRect,"sourceRect")
		HX_STACK_ARG(destPoint,"destPoint")
		HX_STACK_ARG(srcChannel,"srcChannel")
		HX_STACK_ARG(destChannel,"destChannel")
		HX_STACK_LINE(1297)
		::lime::graphics::utils::ImageDataUtil_obj::cffi_lime_image_data_util_copy_channel.call(hx::DynamicPtr(image),hx::DynamicPtr(sourceImage),hx::DynamicPtr(sourceRect),hx::DynamicPtr(destPoint),srcChannel,destChannel);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(ImageDataUtil_obj,lime_image_data_util_copy_channel,(void))

Void ImageDataUtil_obj::lime_image_data_util_copy_pixels( Dynamic image,Dynamic sourceImage,Dynamic sourceRect,Dynamic destPoint,Dynamic alphaImage,Dynamic alphaPoint,bool mergeAlpha){
{
		HX_STACK_FRAME("lime.graphics.utils.ImageDataUtil","lime_image_data_util_copy_pixels",0x941986cf,"lime.graphics.utils.ImageDataUtil.lime_image_data_util_copy_pixels","lime/graphics/utils/ImageDataUtil.hx",1298,0x494d921f)
		HX_STACK_ARG(image,"image")
		HX_STACK_ARG(sourceImage,"sourceImage")
		HX_STACK_ARG(sourceRect,"sourceRect")
		HX_STACK_ARG(destPoint,"destPoint")
		HX_STACK_ARG(alphaImage,"alphaImage")
		HX_STACK_ARG(alphaPoint,"alphaPoint")
		HX_STACK_ARG(mergeAlpha,"mergeAlpha")
		HX_STACK_LINE(1298)
		::lime::graphics::utils::ImageDataUtil_obj::cffi_lime_image_data_util_copy_pixels.call(hx::DynamicPtr(image),hx::DynamicPtr(sourceImage),hx::DynamicPtr(sourceRect),hx::DynamicPtr(destPoint),hx::DynamicPtr(alphaImage),hx::DynamicPtr(alphaPoint),mergeAlpha);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC7(ImageDataUtil_obj,lime_image_data_util_copy_pixels,(void))

Void ImageDataUtil_obj::lime_image_data_util_fill_rect( Dynamic image,Dynamic rect,int rg,int ba){
{
		HX_STACK_FRAME("lime.graphics.utils.ImageDataUtil","lime_image_data_util_fill_rect",0xea105ab8,"lime.graphics.utils.ImageDataUtil.lime_image_data_util_fill_rect","lime/graphics/utils/ImageDataUtil.hx",1299,0x494d921f)
		HX_STACK_ARG(image,"image")
		HX_STACK_ARG(rect,"rect")
		HX_STACK_ARG(rg,"rg")
		HX_STACK_ARG(ba,"ba")
		HX_STACK_LINE(1299)
		::lime::graphics::utils::ImageDataUtil_obj::cffi_lime_image_data_util_fill_rect.call(hx::DynamicPtr(image),hx::DynamicPtr(rect),rg,ba);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(ImageDataUtil_obj,lime_image_data_util_fill_rect,(void))

Void ImageDataUtil_obj::lime_image_data_util_flood_fill( Dynamic image,int x,int y,int rg,int ba){
{
		HX_STACK_FRAME("lime.graphics.utils.ImageDataUtil","lime_image_data_util_flood_fill",0x954481cc,"lime.graphics.utils.ImageDataUtil.lime_image_data_util_flood_fill","lime/graphics/utils/ImageDataUtil.hx",1300,0x494d921f)
		HX_STACK_ARG(image,"image")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(rg,"rg")
		HX_STACK_ARG(ba,"ba")
		HX_STACK_LINE(1300)
		::lime::graphics::utils::ImageDataUtil_obj::cffi_lime_image_data_util_flood_fill.call(hx::DynamicPtr(image),x,y,rg,ba);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(ImageDataUtil_obj,lime_image_data_util_flood_fill,(void))

Void ImageDataUtil_obj::lime_image_data_util_get_pixels( Dynamic image,Dynamic rect,int format,Dynamic bytes){
{
		HX_STACK_FRAME("lime.graphics.utils.ImageDataUtil","lime_image_data_util_get_pixels",0xafc6d8de,"lime.graphics.utils.ImageDataUtil.lime_image_data_util_get_pixels","lime/graphics/utils/ImageDataUtil.hx",1301,0x494d921f)
		HX_STACK_ARG(image,"image")
		HX_STACK_ARG(rect,"rect")
		HX_STACK_ARG(format,"format")
		HX_STACK_ARG(bytes,"bytes")
		HX_STACK_LINE(1301)
		::lime::graphics::utils::ImageDataUtil_obj::cffi_lime_image_data_util_get_pixels.call(hx::DynamicPtr(image),hx::DynamicPtr(rect),format,hx::DynamicPtr(bytes));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(ImageDataUtil_obj,lime_image_data_util_get_pixels,(void))

Void ImageDataUtil_obj::lime_image_data_util_merge( Dynamic image,Dynamic sourceImage,Dynamic sourceRect,Dynamic destPoint,int redMultiplier,int greenMultiplier,int blueMultiplier,int alphaMultiplier){
{
		HX_STACK_FRAME("lime.graphics.utils.ImageDataUtil","lime_image_data_util_merge",0x6bf371d0,"lime.graphics.utils.ImageDataUtil.lime_image_data_util_merge","lime/graphics/utils/ImageDataUtil.hx",1302,0x494d921f)
		HX_STACK_ARG(image,"image")
		HX_STACK_ARG(sourceImage,"sourceImage")
		HX_STACK_ARG(sourceRect,"sourceRect")
		HX_STACK_ARG(destPoint,"destPoint")
		HX_STACK_ARG(redMultiplier,"redMultiplier")
		HX_STACK_ARG(greenMultiplier,"greenMultiplier")
		HX_STACK_ARG(blueMultiplier,"blueMultiplier")
		HX_STACK_ARG(alphaMultiplier,"alphaMultiplier")
		HX_STACK_LINE(1302)
		::lime::graphics::utils::ImageDataUtil_obj::cffi_lime_image_data_util_merge.call(hx::DynamicPtr(image),hx::DynamicPtr(sourceImage),hx::DynamicPtr(sourceRect),hx::DynamicPtr(destPoint),redMultiplier,greenMultiplier,blueMultiplier,alphaMultiplier);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC8(ImageDataUtil_obj,lime_image_data_util_merge,(void))

Void ImageDataUtil_obj::lime_image_data_util_multiply_alpha( Dynamic image){
{
		HX_STACK_FRAME("lime.graphics.utils.ImageDataUtil","lime_image_data_util_multiply_alpha",0xa72191ab,"lime.graphics.utils.ImageDataUtil.lime_image_data_util_multiply_alpha","lime/graphics/utils/ImageDataUtil.hx",1303,0x494d921f)
		HX_STACK_ARG(image,"image")
		HX_STACK_LINE(1303)
		::lime::graphics::utils::ImageDataUtil_obj::cffi_lime_image_data_util_multiply_alpha.call(hx::DynamicPtr(image));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ImageDataUtil_obj,lime_image_data_util_multiply_alpha,(void))

Void ImageDataUtil_obj::lime_image_data_util_resize( Dynamic image,Dynamic buffer,int width,int height){
{
		HX_STACK_FRAME("lime.graphics.utils.ImageDataUtil","lime_image_data_util_resize",0x0983bfdc,"lime.graphics.utils.ImageDataUtil.lime_image_data_util_resize","lime/graphics/utils/ImageDataUtil.hx",1304,0x494d921f)
		HX_STACK_ARG(image,"image")
		HX_STACK_ARG(buffer,"buffer")
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_LINE(1304)
		::lime::graphics::utils::ImageDataUtil_obj::cffi_lime_image_data_util_resize.call(hx::DynamicPtr(image),hx::DynamicPtr(buffer),width,height);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(ImageDataUtil_obj,lime_image_data_util_resize,(void))

Void ImageDataUtil_obj::lime_image_data_util_set_format( Dynamic image,int format){
{
		HX_STACK_FRAME("lime.graphics.utils.ImageDataUtil","lime_image_data_util_set_format",0x2429175c,"lime.graphics.utils.ImageDataUtil.lime_image_data_util_set_format","lime/graphics/utils/ImageDataUtil.hx",1305,0x494d921f)
		HX_STACK_ARG(image,"image")
		HX_STACK_ARG(format,"format")
		HX_STACK_LINE(1305)
		::lime::graphics::utils::ImageDataUtil_obj::cffi_lime_image_data_util_set_format.call(hx::DynamicPtr(image),format);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ImageDataUtil_obj,lime_image_data_util_set_format,(void))

Void ImageDataUtil_obj::lime_image_data_util_set_pixels( Dynamic image,Dynamic rect,Dynamic bytes,int format){
{
		HX_STACK_FRAME("lime.graphics.utils.ImageDataUtil","lime_image_data_util_set_pixels",0xb3447752,"lime.graphics.utils.ImageDataUtil.lime_image_data_util_set_pixels","lime/graphics/utils/ImageDataUtil.hx",1306,0x494d921f)
		HX_STACK_ARG(image,"image")
		HX_STACK_ARG(rect,"rect")
		HX_STACK_ARG(bytes,"bytes")
		HX_STACK_ARG(format,"format")
		HX_STACK_LINE(1306)
		::lime::graphics::utils::ImageDataUtil_obj::cffi_lime_image_data_util_set_pixels.call(hx::DynamicPtr(image),hx::DynamicPtr(rect),hx::DynamicPtr(bytes),format);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(ImageDataUtil_obj,lime_image_data_util_set_pixels,(void))

int ImageDataUtil_obj::lime_image_data_util_threshold( Dynamic image,::lime::graphics::Image sourceImage,Dynamic sourceRect,Dynamic destPoint,int operation,int thresholdRG,int thresholdBA,int colorRG,int colorBA,int maskRG,int maskBA,bool copySource){
	HX_STACK_FRAME("lime.graphics.utils.ImageDataUtil","lime_image_data_util_threshold",0xe481fec3,"lime.graphics.utils.ImageDataUtil.lime_image_data_util_threshold","lime/graphics/utils/ImageDataUtil.hx",1307,0x494d921f)
	HX_STACK_ARG(image,"image")
	HX_STACK_ARG(sourceImage,"sourceImage")
	HX_STACK_ARG(sourceRect,"sourceRect")
	HX_STACK_ARG(destPoint,"destPoint")
	HX_STACK_ARG(operation,"operation")
	HX_STACK_ARG(thresholdRG,"thresholdRG")
	HX_STACK_ARG(thresholdBA,"thresholdBA")
	HX_STACK_ARG(colorRG,"colorRG")
	HX_STACK_ARG(colorBA,"colorBA")
	HX_STACK_ARG(maskRG,"maskRG")
	HX_STACK_ARG(maskBA,"maskBA")
	HX_STACK_ARG(copySource,"copySource")
	HX_STACK_LINE(1307)
	return ::lime::graphics::utils::ImageDataUtil_obj::cffi_lime_image_data_util_threshold.call(hx::DynamicPtr(image),hx::DynamicPtr(sourceImage),hx::DynamicPtr(sourceRect),hx::DynamicPtr(destPoint),operation,thresholdRG,thresholdBA,colorRG,colorBA,maskRG,maskBA,copySource);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC12(ImageDataUtil_obj,lime_image_data_util_threshold,return )

Void ImageDataUtil_obj::lime_image_data_util_unmultiply_alpha( Dynamic image){
{
		HX_STACK_FRAME("lime.graphics.utils.ImageDataUtil","lime_image_data_util_unmultiply_alpha",0x26f04bc4,"lime.graphics.utils.ImageDataUtil.lime_image_data_util_unmultiply_alpha","lime/graphics/utils/ImageDataUtil.hx",1308,0x494d921f)
		HX_STACK_ARG(image,"image")
		HX_STACK_LINE(1308)
		::lime::graphics::utils::ImageDataUtil_obj::cffi_lime_image_data_util_unmultiply_alpha.call(hx::DynamicPtr(image));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ImageDataUtil_obj,lime_image_data_util_unmultiply_alpha,(void))

::cpp::Function< void ( ::hx::Object * ,::hx::Object * ,::hx::Object * ) > ImageDataUtil_obj::cffi_lime_image_data_util_color_transform;

::cpp::Function< void ( ::hx::Object * ,::hx::Object * ,::hx::Object * ,::hx::Object * ,int ,int ) > ImageDataUtil_obj::cffi_lime_image_data_util_copy_channel;

::cpp::Function< void ( ::hx::Object * ,::hx::Object * ,::hx::Object * ,::hx::Object * ,::hx::Object * ,::hx::Object * ,bool ) > ImageDataUtil_obj::cffi_lime_image_data_util_copy_pixels;

::cpp::Function< void ( ::hx::Object * ,::hx::Object * ,int ,int ) > ImageDataUtil_obj::cffi_lime_image_data_util_fill_rect;

::cpp::Function< void ( ::hx::Object * ,int ,int ,int ,int ) > ImageDataUtil_obj::cffi_lime_image_data_util_flood_fill;

::cpp::Function< void ( ::hx::Object * ,::hx::Object * ,int ,::hx::Object * ) > ImageDataUtil_obj::cffi_lime_image_data_util_get_pixels;

::cpp::Function< void ( ::hx::Object * ,::hx::Object * ,::hx::Object * ,::hx::Object * ,int ,int ,int ,int ) > ImageDataUtil_obj::cffi_lime_image_data_util_merge;

::cpp::Function< void ( ::hx::Object * ) > ImageDataUtil_obj::cffi_lime_image_data_util_multiply_alpha;

::cpp::Function< void ( ::hx::Object * ,::hx::Object * ,int ,int ) > ImageDataUtil_obj::cffi_lime_image_data_util_resize;

::cpp::Function< void ( ::hx::Object * ,int ) > ImageDataUtil_obj::cffi_lime_image_data_util_set_format;

::cpp::Function< void ( ::hx::Object * ,::hx::Object * ,::hx::Object * ,int ) > ImageDataUtil_obj::cffi_lime_image_data_util_set_pixels;

::cpp::Function< int ( ::hx::Object * ,::hx::Object * ,::hx::Object * ,::hx::Object * ,int ,int ,int ,int ,int ,int ,int ,bool ) > ImageDataUtil_obj::cffi_lime_image_data_util_threshold;

::cpp::Function< void ( ::hx::Object * ) > ImageDataUtil_obj::cffi_lime_image_data_util_unmultiply_alpha;


ImageDataUtil_obj::ImageDataUtil_obj()
{
}

bool ImageDataUtil_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"merge") ) { outValue = merge_dyn(); return true;  }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"resize") ) { outValue = resize_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"fillRect") ) { outValue = fillRect_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getPixel") ) { outValue = getPixel_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"setPixel") ) { outValue = setPixel_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"floodFill") ) { outValue = floodFill_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getPixels") ) { outValue = getPixels_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"setFormat") ) { outValue = setFormat_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"setPixels") ) { outValue = setPixels_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"threshold") ) { outValue = threshold_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"copyPixels") ) { outValue = copyPixels_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getPixel32") ) { outValue = getPixel32_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"setPixel32") ) { outValue = setPixel32_dyn(); return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"copyChannel") ) { outValue = copyChannel_dyn(); return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"resizeBuffer") ) { outValue = resizeBuffer_dyn(); return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"multiplyAlpha") ) { outValue = multiplyAlpha_dyn(); return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"colorTransform") ) { outValue = colorTransform_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"__pixelCompare") ) { outValue = __pixelCompare_dyn(); return true;  }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"unmultiplyAlpha") ) { outValue = unmultiplyAlpha_dyn(); return true;  }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"getColorBoundsRect") ) { outValue = getColorBoundsRect_dyn(); return true;  }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"lime_image_data_util_merge") ) { outValue = lime_image_data_util_merge_dyn(); return true;  }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"lime_image_data_util_resize") ) { outValue = lime_image_data_util_resize_dyn(); return true;  }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"lime_image_data_util_fill_rect") ) { outValue = lime_image_data_util_fill_rect_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_image_data_util_threshold") ) { outValue = lime_image_data_util_threshold_dyn(); return true;  }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"lime_image_data_util_flood_fill") ) { outValue = lime_image_data_util_flood_fill_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_image_data_util_get_pixels") ) { outValue = lime_image_data_util_get_pixels_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_image_data_util_set_format") ) { outValue = lime_image_data_util_set_format_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_image_data_util_set_pixels") ) { outValue = lime_image_data_util_set_pixels_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_image_data_util_merge") ) { outValue = cffi_lime_image_data_util_merge; return true;  }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"lime_image_data_util_copy_pixels") ) { outValue = lime_image_data_util_copy_pixels_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_image_data_util_resize") ) { outValue = cffi_lime_image_data_util_resize; return true;  }
		break;
	case 33:
		if (HX_FIELD_EQ(inName,"lime_image_data_util_copy_channel") ) { outValue = lime_image_data_util_copy_channel_dyn(); return true;  }
		break;
	case 35:
		if (HX_FIELD_EQ(inName,"lime_image_data_util_multiply_alpha") ) { outValue = lime_image_data_util_multiply_alpha_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_image_data_util_fill_rect") ) { outValue = cffi_lime_image_data_util_fill_rect; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_image_data_util_threshold") ) { outValue = cffi_lime_image_data_util_threshold; return true;  }
		break;
	case 36:
		if (HX_FIELD_EQ(inName,"lime_image_data_util_color_transform") ) { outValue = lime_image_data_util_color_transform_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_image_data_util_flood_fill") ) { outValue = cffi_lime_image_data_util_flood_fill; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_image_data_util_get_pixels") ) { outValue = cffi_lime_image_data_util_get_pixels; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_image_data_util_set_format") ) { outValue = cffi_lime_image_data_util_set_format; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_image_data_util_set_pixels") ) { outValue = cffi_lime_image_data_util_set_pixels; return true;  }
		break;
	case 37:
		if (HX_FIELD_EQ(inName,"lime_image_data_util_unmultiply_alpha") ) { outValue = lime_image_data_util_unmultiply_alpha_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_image_data_util_copy_pixels") ) { outValue = cffi_lime_image_data_util_copy_pixels; return true;  }
		break;
	case 38:
		if (HX_FIELD_EQ(inName,"cffi_lime_image_data_util_copy_channel") ) { outValue = cffi_lime_image_data_util_copy_channel; return true;  }
		break;
	case 40:
		if (HX_FIELD_EQ(inName,"cffi_lime_image_data_util_multiply_alpha") ) { outValue = cffi_lime_image_data_util_multiply_alpha; return true;  }
		break;
	case 41:
		if (HX_FIELD_EQ(inName,"cffi_lime_image_data_util_color_transform") ) { outValue = cffi_lime_image_data_util_color_transform; return true;  }
		break;
	case 42:
		if (HX_FIELD_EQ(inName,"cffi_lime_image_data_util_unmultiply_alpha") ) { outValue = cffi_lime_image_data_util_unmultiply_alpha; return true;  }
	}
	return false;
}

bool ImageDataUtil_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 31:
		if (HX_FIELD_EQ(inName,"cffi_lime_image_data_util_merge") ) { cffi_lime_image_data_util_merge=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ,::hx::Object * ,::hx::Object * ,::hx::Object * ,int ,int ,int ,int ) > >(); return true; }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"cffi_lime_image_data_util_resize") ) { cffi_lime_image_data_util_resize=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ,::hx::Object * ,int ,int ) > >(); return true; }
		break;
	case 35:
		if (HX_FIELD_EQ(inName,"cffi_lime_image_data_util_fill_rect") ) { cffi_lime_image_data_util_fill_rect=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ,::hx::Object * ,int ,int ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_image_data_util_threshold") ) { cffi_lime_image_data_util_threshold=ioValue.Cast< ::cpp::Function< int ( ::hx::Object * ,::hx::Object * ,::hx::Object * ,::hx::Object * ,int ,int ,int ,int ,int ,int ,int ,bool ) > >(); return true; }
		break;
	case 36:
		if (HX_FIELD_EQ(inName,"cffi_lime_image_data_util_flood_fill") ) { cffi_lime_image_data_util_flood_fill=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ,int ,int ,int ,int ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_image_data_util_get_pixels") ) { cffi_lime_image_data_util_get_pixels=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ,::hx::Object * ,int ,::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_image_data_util_set_format") ) { cffi_lime_image_data_util_set_format=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ,int ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_image_data_util_set_pixels") ) { cffi_lime_image_data_util_set_pixels=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ,::hx::Object * ,::hx::Object * ,int ) > >(); return true; }
		break;
	case 37:
		if (HX_FIELD_EQ(inName,"cffi_lime_image_data_util_copy_pixels") ) { cffi_lime_image_data_util_copy_pixels=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ,::hx::Object * ,::hx::Object * ,::hx::Object * ,::hx::Object * ,::hx::Object * ,bool ) > >(); return true; }
		break;
	case 38:
		if (HX_FIELD_EQ(inName,"cffi_lime_image_data_util_copy_channel") ) { cffi_lime_image_data_util_copy_channel=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ,::hx::Object * ,::hx::Object * ,::hx::Object * ,int ,int ) > >(); return true; }
		break;
	case 40:
		if (HX_FIELD_EQ(inName,"cffi_lime_image_data_util_multiply_alpha") ) { cffi_lime_image_data_util_multiply_alpha=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ) > >(); return true; }
		break;
	case 41:
		if (HX_FIELD_EQ(inName,"cffi_lime_image_data_util_color_transform") ) { cffi_lime_image_data_util_color_transform=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ,::hx::Object * ,::hx::Object * ) > >(); return true; }
		break;
	case 42:
		if (HX_FIELD_EQ(inName,"cffi_lime_image_data_util_unmultiply_alpha") ) { cffi_lime_image_data_util_unmultiply_alpha=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ) > >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ,::hx::Object * ,::hx::Object * ) >*/ ,(void *) &ImageDataUtil_obj::cffi_lime_image_data_util_color_transform,HX_HCSTRING("cffi_lime_image_data_util_color_transform","\x33","\xb4","\x2f","\xf1")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ,::hx::Object * ,::hx::Object * ,::hx::Object * ,int ,int ) >*/ ,(void *) &ImageDataUtil_obj::cffi_lime_image_data_util_copy_channel,HX_HCSTRING("cffi_lime_image_data_util_copy_channel","\x36","\xf7","\xde","\x9a")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ,::hx::Object * ,::hx::Object * ,::hx::Object * ,::hx::Object * ,::hx::Object * ,bool ) >*/ ,(void *) &ImageDataUtil_obj::cffi_lime_image_data_util_copy_pixels,HX_HCSTRING("cffi_lime_image_data_util_copy_pixels","\x1a","\xc8","\x5a","\xd9")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ,::hx::Object * ,int ,int ) >*/ ,(void *) &ImageDataUtil_obj::cffi_lime_image_data_util_fill_rect,HX_HCSTRING("cffi_lime_image_data_util_fill_rect","\x43","\x23","\xe6","\xb7")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ,int ,int ,int ,int ) >*/ ,(void *) &ImageDataUtil_obj::cffi_lime_image_data_util_flood_fill,HX_HCSTRING("cffi_lime_image_data_util_flood_fill","\xe1","\x32","\x7e","\xe2")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ,::hx::Object * ,int ,::hx::Object * ) >*/ ,(void *) &ImageDataUtil_obj::cffi_lime_image_data_util_get_pixels,HX_HCSTRING("cffi_lime_image_data_util_get_pixels","\xf3","\x89","\x00","\xfd")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ,::hx::Object * ,::hx::Object * ,::hx::Object * ,int ,int ,int ,int ) >*/ ,(void *) &ImageDataUtil_obj::cffi_lime_image_data_util_merge,HX_HCSTRING("cffi_lime_image_data_util_merge","\xdb","\x58","\xe1","\x59")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ) >*/ ,(void *) &ImageDataUtil_obj::cffi_lime_image_data_util_multiply_alpha,HX_HCSTRING("cffi_lime_image_data_util_multiply_alpha","\x40","\xf1","\xf1","\x88")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ,::hx::Object * ,int ,int ) >*/ ,(void *) &ImageDataUtil_obj::cffi_lime_image_data_util_resize,HX_HCSTRING("cffi_lime_image_data_util_resize","\x71","\x02","\xc0","\x4b")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ,int ) >*/ ,(void *) &ImageDataUtil_obj::cffi_lime_image_data_util_set_format,HX_HCSTRING("cffi_lime_image_data_util_set_format","\x71","\xc8","\x62","\x71")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ,::hx::Object * ,::hx::Object * ,int ) >*/ ,(void *) &ImageDataUtil_obj::cffi_lime_image_data_util_set_pixels,HX_HCSTRING("cffi_lime_image_data_util_set_pixels","\x67","\x28","\x7e","\x00")},
	{hx::fsObject /*::cpp::Function< int ( ::hx::Object * ,::hx::Object * ,::hx::Object * ,::hx::Object * ,int ,int ,int ,int ,int ,int ,int ,bool ) >*/ ,(void *) &ImageDataUtil_obj::cffi_lime_image_data_util_threshold,HX_HCSTRING("cffi_lime_image_data_util_threshold","\x4e","\xc7","\x57","\xb2")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ) >*/ ,(void *) &ImageDataUtil_obj::cffi_lime_image_data_util_unmultiply_alpha,HX_HCSTRING("cffi_lime_image_data_util_unmultiply_alpha","\x99","\x7a","\x47","\x65")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ImageDataUtil_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ImageDataUtil_obj::cffi_lime_image_data_util_color_transform,"cffi_lime_image_data_util_color_transform");
	HX_MARK_MEMBER_NAME(ImageDataUtil_obj::cffi_lime_image_data_util_copy_channel,"cffi_lime_image_data_util_copy_channel");
	HX_MARK_MEMBER_NAME(ImageDataUtil_obj::cffi_lime_image_data_util_copy_pixels,"cffi_lime_image_data_util_copy_pixels");
	HX_MARK_MEMBER_NAME(ImageDataUtil_obj::cffi_lime_image_data_util_fill_rect,"cffi_lime_image_data_util_fill_rect");
	HX_MARK_MEMBER_NAME(ImageDataUtil_obj::cffi_lime_image_data_util_flood_fill,"cffi_lime_image_data_util_flood_fill");
	HX_MARK_MEMBER_NAME(ImageDataUtil_obj::cffi_lime_image_data_util_get_pixels,"cffi_lime_image_data_util_get_pixels");
	HX_MARK_MEMBER_NAME(ImageDataUtil_obj::cffi_lime_image_data_util_merge,"cffi_lime_image_data_util_merge");
	HX_MARK_MEMBER_NAME(ImageDataUtil_obj::cffi_lime_image_data_util_multiply_alpha,"cffi_lime_image_data_util_multiply_alpha");
	HX_MARK_MEMBER_NAME(ImageDataUtil_obj::cffi_lime_image_data_util_resize,"cffi_lime_image_data_util_resize");
	HX_MARK_MEMBER_NAME(ImageDataUtil_obj::cffi_lime_image_data_util_set_format,"cffi_lime_image_data_util_set_format");
	HX_MARK_MEMBER_NAME(ImageDataUtil_obj::cffi_lime_image_data_util_set_pixels,"cffi_lime_image_data_util_set_pixels");
	HX_MARK_MEMBER_NAME(ImageDataUtil_obj::cffi_lime_image_data_util_threshold,"cffi_lime_image_data_util_threshold");
	HX_MARK_MEMBER_NAME(ImageDataUtil_obj::cffi_lime_image_data_util_unmultiply_alpha,"cffi_lime_image_data_util_unmultiply_alpha");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ImageDataUtil_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ImageDataUtil_obj::cffi_lime_image_data_util_color_transform,"cffi_lime_image_data_util_color_transform");
	HX_VISIT_MEMBER_NAME(ImageDataUtil_obj::cffi_lime_image_data_util_copy_channel,"cffi_lime_image_data_util_copy_channel");
	HX_VISIT_MEMBER_NAME(ImageDataUtil_obj::cffi_lime_image_data_util_copy_pixels,"cffi_lime_image_data_util_copy_pixels");
	HX_VISIT_MEMBER_NAME(ImageDataUtil_obj::cffi_lime_image_data_util_fill_rect,"cffi_lime_image_data_util_fill_rect");
	HX_VISIT_MEMBER_NAME(ImageDataUtil_obj::cffi_lime_image_data_util_flood_fill,"cffi_lime_image_data_util_flood_fill");
	HX_VISIT_MEMBER_NAME(ImageDataUtil_obj::cffi_lime_image_data_util_get_pixels,"cffi_lime_image_data_util_get_pixels");
	HX_VISIT_MEMBER_NAME(ImageDataUtil_obj::cffi_lime_image_data_util_merge,"cffi_lime_image_data_util_merge");
	HX_VISIT_MEMBER_NAME(ImageDataUtil_obj::cffi_lime_image_data_util_multiply_alpha,"cffi_lime_image_data_util_multiply_alpha");
	HX_VISIT_MEMBER_NAME(ImageDataUtil_obj::cffi_lime_image_data_util_resize,"cffi_lime_image_data_util_resize");
	HX_VISIT_MEMBER_NAME(ImageDataUtil_obj::cffi_lime_image_data_util_set_format,"cffi_lime_image_data_util_set_format");
	HX_VISIT_MEMBER_NAME(ImageDataUtil_obj::cffi_lime_image_data_util_set_pixels,"cffi_lime_image_data_util_set_pixels");
	HX_VISIT_MEMBER_NAME(ImageDataUtil_obj::cffi_lime_image_data_util_threshold,"cffi_lime_image_data_util_threshold");
	HX_VISIT_MEMBER_NAME(ImageDataUtil_obj::cffi_lime_image_data_util_unmultiply_alpha,"cffi_lime_image_data_util_unmultiply_alpha");
};

#endif

hx::Class ImageDataUtil_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("colorTransform","\x89","\xd7","\x3f","\xad"),
	HX_HCSTRING("copyChannel","\x8e","\x7d","\xe6","\x22"),
	HX_HCSTRING("copyPixels","\xc2","\x54","\x6e","\x42"),
	HX_HCSTRING("fillRect","\x47","\x45","\xb9","\x6c"),
	HX_HCSTRING("floodFill","\x61","\x83","\x8a","\x59"),
	HX_HCSTRING("getColorBoundsRect","\x86","\xad","\xe8","\x80"),
	HX_HCSTRING("getPixel","\x10","\xd6","\x7a","\x22"),
	HX_HCSTRING("getPixel32","\xaf","\xa6","\x68","\xd7"),
	HX_HCSTRING("getPixels","\x63","\x78","\x00","\x09"),
	HX_HCSTRING("merge","\xb8","\xa2","\xc6","\x05"),
	HX_HCSTRING("multiplyAlpha","\x9a","\xf2","\x1c","\x6b"),
	HX_HCSTRING("resize","\xf4","\x59","\x7b","\x08"),
	HX_HCSTRING("resizeBuffer","\x14","\x7a","\xa2","\xb4"),
	HX_HCSTRING("setFormat","\x79","\x04","\x36","\x5d"),
	HX_HCSTRING("setPixel","\x84","\x2f","\xd8","\xd0"),
	HX_HCSTRING("setPixel32","\x23","\x45","\xe6","\xda"),
	HX_HCSTRING("setPixels","\x6f","\x64","\x51","\xec"),
	HX_HCSTRING("threshold","\xab","\xc3","\xa3","\x34"),
	HX_HCSTRING("unmultiplyAlpha","\xa1","\xc8","\x96","\x28"),
	HX_HCSTRING("__pixelCompare","\xdf","\x79","\xe3","\x8d"),
	HX_HCSTRING("lime_image_data_util_color_transform","\xba","\xcc","\x96","\x40"),
	HX_HCSTRING("lime_image_data_util_copy_channel","\x4f","\x54","\x36","\xa5"),
	HX_HCSTRING("lime_image_data_util_copy_pixels","\x21","\x51","\x7b","\xab"),
	HX_HCSTRING("lime_image_data_util_fill_rect","\x8a","\x8c","\xa4","\x8e"),
	HX_HCSTRING("lime_image_data_util_flood_fill","\xba","\xe7","\x5b","\xf2"),
	HX_HCSTRING("lime_image_data_util_get_pixels","\xcc","\x3e","\xde","\x0c"),
	HX_HCSTRING("lime_image_data_util_merge","\xa2","\xd2","\xb1","\xf7"),
	HX_HCSTRING("lime_image_data_util_multiply_alpha","\x99","\x86","\xad","\x5d"),
	HX_HCSTRING("lime_image_data_util_resize","\xca","\x16","\x5a","\xc4"),
	HX_HCSTRING("lime_image_data_util_set_format","\x4a","\x7d","\x40","\x81"),
	HX_HCSTRING("lime_image_data_util_set_pixels","\x40","\xdd","\x5b","\x10"),
	HX_HCSTRING("lime_image_data_util_threshold","\x95","\x30","\x16","\x89"),
	HX_HCSTRING("lime_image_data_util_unmultiply_alpha","\x32","\xd8","\x15","\x90"),
	HX_HCSTRING("cffi_lime_image_data_util_color_transform","\x33","\xb4","\x2f","\xf1"),
	HX_HCSTRING("cffi_lime_image_data_util_copy_channel","\x36","\xf7","\xde","\x9a"),
	HX_HCSTRING("cffi_lime_image_data_util_copy_pixels","\x1a","\xc8","\x5a","\xd9"),
	HX_HCSTRING("cffi_lime_image_data_util_fill_rect","\x43","\x23","\xe6","\xb7"),
	HX_HCSTRING("cffi_lime_image_data_util_flood_fill","\xe1","\x32","\x7e","\xe2"),
	HX_HCSTRING("cffi_lime_image_data_util_get_pixels","\xf3","\x89","\x00","\xfd"),
	HX_HCSTRING("cffi_lime_image_data_util_merge","\xdb","\x58","\xe1","\x59"),
	HX_HCSTRING("cffi_lime_image_data_util_multiply_alpha","\x40","\xf1","\xf1","\x88"),
	HX_HCSTRING("cffi_lime_image_data_util_resize","\x71","\x02","\xc0","\x4b"),
	HX_HCSTRING("cffi_lime_image_data_util_set_format","\x71","\xc8","\x62","\x71"),
	HX_HCSTRING("cffi_lime_image_data_util_set_pixels","\x67","\x28","\x7e","\x00"),
	HX_HCSTRING("cffi_lime_image_data_util_threshold","\x4e","\xc7","\x57","\xb2"),
	HX_HCSTRING("cffi_lime_image_data_util_unmultiply_alpha","\x99","\x7a","\x47","\x65"),
	::String(null()) };

void ImageDataUtil_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.graphics.utils.ImageDataUtil","\x80","\x72","\x23","\xf0");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ImageDataUtil_obj::__GetStatic;
	__mClass->mSetStaticField = &ImageDataUtil_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< ImageDataUtil_obj >;
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

void ImageDataUtil_obj::__boot()
{
	cffi_lime_image_data_util_color_transform= ::cpp::Function< void ( ::hx::Object * ,::hx::Object * ,::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_image_data_util_color_transform","\xba","\xcc","\x96","\x40"),HX_HCSTRING("ooov","\x47","\x4a","\xb3","\x49"),false));
	cffi_lime_image_data_util_copy_channel= ::cpp::Function< void ( ::hx::Object * ,::hx::Object * ,::hx::Object * ,::hx::Object * ,int ,int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_image_data_util_copy_channel","\x4f","\x54","\x36","\xa5"),HX_HCSTRING("ooooiiv","\x56","\xa6","\x94","\x9c"),false));
	cffi_lime_image_data_util_copy_pixels= ::cpp::Function< void ( ::hx::Object * ,::hx::Object * ,::hx::Object * ,::hx::Object * ,::hx::Object * ,::hx::Object * ,bool ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_image_data_util_copy_pixels","\x21","\x51","\x7b","\xab"),HX_HCSTRING("oooooobv","\x34","\xa9","\x78","\x69"),false));
	cffi_lime_image_data_util_fill_rect= ::cpp::Function< void ( ::hx::Object * ,::hx::Object * ,int ,int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_image_data_util_fill_rect","\x8a","\x8c","\xa4","\x8e"),HX_HCSTRING("ooiiv","\x76","\x1b","\x29","\x33"),false));
	cffi_lime_image_data_util_flood_fill= ::cpp::Function< void ( ::hx::Object * ,int ,int ,int ,int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_image_data_util_flood_fill","\xba","\xe7","\x5b","\xf2"),HX_HCSTRING("oiiiiv","\xe7","\x65","\x67","\x1c"),false));
	cffi_lime_image_data_util_get_pixels= ::cpp::Function< void ( ::hx::Object * ,::hx::Object * ,int ,::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_image_data_util_get_pixels","\xcc","\x3e","\xde","\x0c"),HX_HCSTRING("ooiov","\xb0","\x20","\x29","\x33"),false));
	cffi_lime_image_data_util_merge= ::cpp::Function< void ( ::hx::Object * ,::hx::Object * ,::hx::Object * ,::hx::Object * ,int ,int ,int ,int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_image_data_util_merge","\xa2","\xd2","\xb1","\xf7"),HX_HCSTRING("ooooiiiiv","\x76","\xe6","\xc1","\x67"),false));
	cffi_lime_image_data_util_multiply_alpha= ::cpp::Function< void ( ::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_image_data_util_multiply_alpha","\x99","\x86","\xad","\x5d"),HX_HCSTRING("ov","\x27","\x61","\x00","\x00"),false));
	cffi_lime_image_data_util_resize= ::cpp::Function< void ( ::hx::Object * ,::hx::Object * ,int ,int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_image_data_util_resize","\xca","\x16","\x5a","\xc4"),HX_HCSTRING("ooiiv","\x76","\x1b","\x29","\x33"),false));
	cffi_lime_image_data_util_set_format= ::cpp::Function< void ( ::hx::Object * ,int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_image_data_util_set_format","\x4a","\x7d","\x40","\x81"),HX_HCSTRING("oiv","\x1c","\x96","\x54","\x00"),false));
	cffi_lime_image_data_util_set_pixels= ::cpp::Function< void ( ::hx::Object * ,::hx::Object * ,::hx::Object * ,int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_image_data_util_set_pixels","\x40","\xdd","\x5b","\x10"),HX_HCSTRING("oooiv","\xfc","\xa8","\x2d","\x33"),false));
	cffi_lime_image_data_util_threshold= ::cpp::Function< int ( ::hx::Object * ,::hx::Object * ,::hx::Object * ,::hx::Object * ,int ,int ,int ,int ,int ,int ,int ,bool ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_image_data_util_threshold","\x95","\x30","\x16","\x89"),HX_HCSTRING("ooooiiiiiiibi","\x90","\x38","\x77","\xc0"),false));
	cffi_lime_image_data_util_unmultiply_alpha= ::cpp::Function< void ( ::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_image_data_util_unmultiply_alpha","\x32","\xd8","\x15","\x90"),HX_HCSTRING("ov","\x27","\x61","\x00","\x00"),false));
}

} // end namespace lime
} // end namespace graphics
} // end namespace utils
